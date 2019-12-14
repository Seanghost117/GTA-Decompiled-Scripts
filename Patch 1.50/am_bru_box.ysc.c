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
    float fLocal_28 = 0f;
    var uLocal_29 = 0;
    var uLocal_30 = 0;
    var uLocal_31 = 0;
    float fLocal_32 = 0f;
    float fLocal_33 = 0f;
    var uLocal_34 = 0;
    var uLocal_35 = 0;
    int iLocal_36 = 0;
    var uLocal_37 = 0;
    var uLocal_38 = 0;
    var uLocal_39 = 0;
    int iLocal_40 = 0;
    int iLocal_41 = 0;
    int iLocal_42 = 0;
    int iLocal_43 = 0;
    var uLocal_44 = 0;
    var uLocal_45 = 0;
    var uLocal_46 = 0;
    var uLocal_47 = 0;
    var uLocal_48 = 0;
    var uLocal_49 = 0;
    var uLocal_50 = 0;
    var uLocal_51 = 0;
    var uLocal_52 = 0;
    var uLocal_53 = 0;
    var uLocal_54 = 0;
    var uLocal_55 = 0;
    var uLocal_56 = 0;
    var uLocal_57 = 0;
    var uLocal_58 = 0;
    var uLocal_59 = 0;
    struct<10> Local_60 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
    var uLocal_61 = 0;
    vector3 vLocal_62[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
    int iLocal_63 = 0;
    var uLocal_64 = 0;
    int iLocal_65 = 0;
    var uLocal_66 = 0;
    var uLocal_67 = 0;
    bool bLocal_68 = 0;
    struct<21> Local_69 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
    fLocal_28 = 0f;
    fLocal_32 = -0.0375f;
    fLocal_33 = 0.17f;
    iLocal_36 = 3;
    iLocal_40 = 1;
    iLocal_41 = 65;
    iLocal_42 = 49;
    iLocal_43 = 64;
    if (unk_0x393E9918BC37548A())
    {
        if (!func_232(ScriptParam_69))
        {
            func_226();
        }
        if (ScriptParam_69.f_10 >= 32)
        {
            if (func_225(unk_0x7C7787D2D7139A85()) != 1 && !unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_35B.f_7, 0))
            {
                func_226();
            }
        }
    }
    uLocal_64 = ScriptParam_69.f_13;
    while (true)
    {
        func_224();
        if (func_213())
        {
            func_226();
        }
        if (ScriptParam_69.f_10 >= 32)
        {
            if (func_225(unk_0x7C7787D2D7139A85()) != 1 && Global_18D534 == 0)
            {
                func_226();
            }
        }
        if (unk_0xEDC68E498B715C56() != bLocal_68)
        {
            func_226();
        }
        unk_0x5F993F12319B4846();
        switch (func_212(unk_0x2E40EEA43EF34BD6()))
        {
            case 0:
                if (func_211())
                {
                    if (func_210() == 1)
                    {
                        vLocal_62[unk_0x2E40EEA43EF34BD6() /*3*/] = 1;
                    }
                    else if (func_210() == 4)
                    {
                        vLocal_62[unk_0x2E40EEA43EF34BD6() /*3*/] = 3;
                    }
                }
                break;
            
            case 1:
                if (func_210() == 1)
                {
                    func_184();
                }
                else if (func_210() == 4)
                {
                    vLocal_62[unk_0x2E40EEA43EF34BD6() /*3*/] = 3;
                }
                if (vLocal_62[unk_0x2E40EEA43EF34BD6() /*3*/].f_2 == 0)
                {
                    if ((!unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Local_60.f_3, 500f, 500f, 500f, 0, 1, 0) && func_225(unk_0x7C7787D2D7139A85()) != 1) && !unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_35B.f_7, 0))
                    {
                        vLocal_62[unk_0x2E40EEA43EF34BD6() /*3*/] = 4;
                    }
                }
                break;
            
            case 3:
                func_182(&(Local_60.f_9));
                if (func_181(&(Local_60.f_9)))
                {
                    vLocal_62[unk_0x2E40EEA43EF34BD6() /*3*/] = 4;
                }
                break;
            
            case 2:
                vLocal_62[unk_0x2E40EEA43EF34BD6() /*3*/] = 4;
            
            case 4:
                func_226();
                break;
        }
        if (unk_0x722688699565161D())
        {
            switch (func_210())
            {
                case 0:
                    if (func_7())
                    {
                        Local_60 = 1;
                    }
                    break;
                
                case 1:
                    func_6();
                    func_5();
                    if (func_1())
                    {
                        Local_60 = 4;
                    }
                    break;
                
                case 4:
                    break;
                }
        }
    }
}

int func_1()//Position - 0x25A
{
    if (func_2())
    {
        return 1;
    }
    return 0;
}

int func_2()//Position - 0x26E
{
    if (Local_60.f_7 >= 32 && func_225(unk_0x7C7787D2D7139A85()) == 1)
    {
        if (func_4(Global_26A0A9.f_35B.f_1))
        {
            return 1;
        }
    }
    if (func_3(unk_0x7C7787D2D7139A85()))
    {
        return 1;
    }
    if (Local_60.f_8 == 2)
    {
        return 1;
    }
    return 0;
}

int func_3(int iParam0)//Position - 0x2C1
{
    int iVar0;
    int iVar1;
    
    if (!unk_0x393E9918BC37548A())
    {
        return 0;
    }
    if (iParam0 == unk_0x7C7787D2D7139A85())
    {
        return Global_26463C;
    }
    else
    {
        iVar0 = unk_0x23625FE58BACEBFD(iParam0);
        if (unk_0xD4B321D9096B01FC(iVar0))
        {
            iVar1 = unk_0x7F375072508F738F(iVar0);
            if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

int func_4(vector3 vParam0)//Position - 0x32D
{
    if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
    {
        return 1;
    }
    return 0;
}

void func_5()//Position - 0x357
{
    switch (Local_60.f_8)
    {
        case 0:
            if (!unk_0x9C625F4590C97F13(Local_60.f_2) || Local_60.f_6 != -1)
            {
                Local_60.f_8 = 1;
            }
            break;
        
        case 1:
            Local_60.f_8 = 2;
            break;
        
        case 2:
            break;
    }
}

void func_6()//Position - 0x3A5
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < unk_0xACF7D965CEBE5714())
    {
        if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar0)))
        {
            if (Local_60.f_6 == -1)
            {
                if (unk_0xA2BC31158C8CEFD2(vLocal_62[iVar0 /*3*/].f_1, 0))
                {
                    Local_60.f_6 = iVar0;
                }
            }
            if (!unk_0xA2BC31158C8CEFD2(Local_60.f_1, 7))
            {
                if (unk_0xA2BC31158C8CEFD2(vLocal_62[iVar0 /*3*/].f_1, 1))
                {
                    unk_0xA1E7A40E1F56E511(&(Local_60.f_1), 7);
                }
            }
        }
        iVar0++;
    }
}

int func_7()//Position - 0x413
{
    vector3 vVar0;
    float fVar1;
    int iVar2;
    float fVar3;
    vector3 vVar4;
    vector3 vVar5;
    int iVar6;
    struct<35> Var7;
    
    if (!unk_0x9C625F4590C97F13(Local_60.f_2))
    {
        if (func_211())
        {
            if (unk_0x0BF6D9DA27ADF615(1))
            {
                fVar3 = 250f;
                vVar4 = { Local_60.f_3 };
                if (unk_0xA2BC31158C8CEFD2(Local_60.f_1, 8))
                {
                    vVar0 = { Global_26A0A9.f_35B.f_1 };
                    fVar1 = Global_26A0A9.f_35B.f_4;
                }
                if (func_225(unk_0x7C7787D2D7139A85()) == 7)
                {
                    iVar6 = unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85());
                    if (Global_440000.f_6A[iVar6 /*11610*/].f_5E1[0 /*36*/].f_A > 0f)
                    {
                        vVar4 = { Global_440000.f_6A[iVar6 /*11610*/].f_5E1[0 /*36*/].f_3 };
                        vVar5 = { Global_440000.f_6A[iVar6 /*11610*/].f_5E1[0 /*36*/].f_6 };
                        fVar3 = Global_440000.f_6A[iVar6 /*11610*/].f_5E1[0 /*36*/].f_A;
                        iVar2 = 1;
                    }
                    else if (Global_440000.f_6A[iVar6 /*11610*/].f_5E1[0 /*36*/].f_9 > 0f)
                    {
                        vVar4 = { Global_440000.f_6A[iVar6 /*11610*/].f_5E1[0 /*36*/] };
                        fVar3 = Global_440000.f_6A[iVar6 /*11610*/].f_5E1[0 /*36*/].f_9;
                    }
                }
                Var7.f_5 = 1115815936;
                Var7.f_D = 2;
                Var7.f_14 = 2;
                Var7.f_20 = -1082130432;
                Var7.f_22 = 1;
                Var7.f_4 = 1;
                Var7.f_5 = 30f;
                Var7.f_A = 1;
                if (iVar2 == 0)
                {
                    if (unk_0xA2BC31158C8CEFD2(Local_60.f_1, 8) || func_180(vVar4, fVar3, &vVar0, &fVar1, &Var7))
                    {
                        if (Local_60.f_7 >= 32 || func_225(unk_0x7C7787D2D7139A85()) == 1)
                        {
                            Local_60.f_2 = unk_0x19BD72F0D7BDB17C(unk_0x73C3121316C5E155(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
                        }
                        else
                        {
                            Local_60.f_2 = unk_0x19BD72F0D7BDB17C(unk_0xA96F83BBAE03451F(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
                        }
                        unk_0x5A2B7C446C0CF087(unk_0x833BB45D35E36889(Local_60.f_2), fVar1);
                    }
                }
                else if (unk_0xA2BC31158C8CEFD2(Local_60.f_1, 8) || func_8(vVar4, vVar5, fVar3, &vVar0, &fVar1, Var7))
                {
                    if (Local_60.f_7 >= 32 || func_225(unk_0x7C7787D2D7139A85()) == 1)
                    {
                        Local_60.f_2 = unk_0x19BD72F0D7BDB17C(unk_0x73C3121316C5E155(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
                    }
                    else
                    {
                        Local_60.f_2 = unk_0x19BD72F0D7BDB17C(unk_0xA96F83BBAE03451F(joaat("pickup_portable_package"), vVar0, 1, joaat("prop_drug_package_02")));
                    }
                    unk_0x5A2B7C446C0CF087(unk_0x833BB45D35E36889(Local_60.f_2), fVar1);
                }
            }
        }
    }
    if (unk_0x9C625F4590C97F13(Local_60.f_2))
    {
        return 1;
    }
    return 0;
}

int func_8(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3, float fParam4, struct<8> Param5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32)//Position - 0x69A
{
    struct<17> Var0;
    struct<25> Var1;
    
    if (Param5.f_5 < 20f)
    {
        Param5.f_5 = 20f;
    }
    Var0 = 5;
    Var0.f_10 = 5;
    Var0.f_16 = 5;
    Var0.f_1C = 5;
    Var1.f_10 = 1;
    Var1.f_16 = 1;
    Var1.f_17 = 1;
    Var1.f_18 = 1;
    Var1.f_5 = 0;
    Var1.f_6 = 1;
    Var1.f_7 = 2;
    Var1.f_8 = { vParam0 };
    Var1.f_B = { vParam1 };
    Var1.f_E = fParam2;
    Var1.f_F = 0;
    Var1.f_10 = 1;
    Var1.f_11 = 0;
    Param5.f_7 = 0;
    if (func_9(&Var1, &Param5, &Var0))
    {
        *uParam3 = { Var0[0 /*3*/] };
        *fParam4 = Var0.f_10[0];
        return 1;
    }
    return 0;
}

int func_9(var uParam0, var uParam1, var uParam2)//Position - 0x750
{
    int iVar0;
    vector3 vVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    vector3 vVar6;
    vector3 vVar7;
    vector3 vVar8;
    int iVar9;
    vector3 vVar10;
    vector3 vVar11;
    var uVar12;
    bool bVar13;
    struct<56> Var14;
    bool bVar15;
    
    bVar13 = false;
    switch (uParam0->f_7)
    {
        case 0:
            if (((!Global_24B2CF.f_998 == *uParam0 || !Global_24B2CF.f_998.f_1 == uParam0->f_1) || !Global_24B2CF.f_998.f_2 == uParam0->f_2) || !Global_24B2CF.f_99B == uParam0->f_4)
            {
                bVar13 = true;
            }
            break;
        
        case 1:
            if (((((!Global_24B2CF.f_9A6 == uParam0->f_8 || !Global_24B2CF.f_9A6.f_1 == uParam0->f_8.f_1) || !Global_24B2CF.f_9A6.f_2 == uParam0->f_8.f_2) || !Global_24B2CF.f_9A9 == uParam0->f_B) || !Global_24B2CF.f_9A9.f_1 == uParam0->f_B.f_1) || !Global_24B2CF.f_9A9.f_2 == uParam0->f_B.f_2)
            {
                bVar13 = true;
            }
            break;
        
        case 2:
            if ((((((!Global_24B2CF.f_9A6 == uParam0->f_8 || !Global_24B2CF.f_9A6.f_1 == uParam0->f_8.f_1) || !Global_24B2CF.f_9A6.f_2 == uParam0->f_8.f_2) || !Global_24B2CF.f_9A9 == uParam0->f_B) || !Global_24B2CF.f_9A9.f_1 == uParam0->f_B.f_1) || !Global_24B2CF.f_9A9.f_2 == uParam0->f_B.f_2) || !Global_24B2CF.f_9AC == uParam0->f_E)
            {
                bVar13 = true;
            }
            break;
    }
    if (bVar13)
    {
        if (Global_24B2CF.f_996 == 1)
        {
            if (unk_0xAB2A82A2838B61B7(Global_24B2CF.f_99F))
            {
                if (Global_24B2CF.f_99F == unk_0x429EE9FF15BB9033())
                {
                    if (unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Global_24B2CF.f_99C) < func_179(0))
                    {
                        return 0;
                    }
                }
                else if (unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Global_24B2CF.f_99C) < func_179(0))
                {
                    return 0;
                }
            }
            unk_0x7639139054380BC9();
            unk_0x084ECE01D0B0CB2E();
            func_178();
        }
        Global_24B2CF.f_996 = 0;
    }
    else if (unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Global_24B2CF.f_99C) > func_179(0))
    {
        Global_24B2CF.f_99D = unk_0x169A8AC9F93C2727();
        func_172();
    }
    switch (uParam0->f_7)
    {
        case 0:
            fVar2 = (*uParam0 - uParam0->f_4);
            fVar3 = (uParam0->f_1 - uParam0->f_4);
            fVar4 = (*uParam0 + uParam0->f_4);
            fVar5 = (uParam0->f_1 + uParam0->f_4);
            break;
        
        case 1:
            if (uParam0->f_8 < uParam0->f_B)
            {
                fVar2 = uParam0->f_8;
                fVar4 = uParam0->f_B;
            }
            else
            {
                fVar2 = uParam0->f_B;
                fVar4 = uParam0->f_8;
            }
            if (uParam0->f_8.f_1 < uParam0->f_B.f_1)
            {
                fVar3 = uParam0->f_8.f_1;
                fVar5 = uParam0->f_B.f_1;
            }
            else
            {
                fVar3 = uParam0->f_B.f_1;
                fVar5 = uParam0->f_8.f_1;
            }
            break;
        
        case 2:
            if (uParam0->f_8 < uParam0->f_B)
            {
                fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_E));
                fVar4 = (uParam0->f_B + (0.5f * uParam0->f_E));
            }
            else
            {
                fVar2 = (uParam0->f_B - (0.5f * uParam0->f_E));
                fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_E));
            }
            if (uParam0->f_8.f_1 < uParam0->f_B.f_1)
            {
                fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_E));
                fVar5 = (uParam0->f_B.f_1 + (0.5f * uParam0->f_E));
            }
            else
            {
                fVar3 = (uParam0->f_B.f_1 - (0.5f * uParam0->f_E));
                fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_E));
            }
            break;
    }
    unk_0x960CDFA3CBFD7760(fVar2, fVar3, fVar4, fVar5);
    if (uParam0->f_7 == 0)
    {
        vVar6 = { *uParam0 };
    }
    else
    {
        vVar6 = { uParam0->f_8 + uParam0->f_B * Vector(0.5f, 0.5f, 0.5f) };
    }
    vVar7 = { vVar6 + Vector(-0.1f, -0.1f, -0.1f) };
    vVar8 = { vVar6 + Vector(0.1f, 0.1f, 0.1f) };
    if (!Global_24B2CF.f_996)
    {
        unk_0x7639139054380BC9();
        unk_0x084ECE01D0B0CB2E();
        func_178();
        if (uParam1->f_7 && uParam0->f_7 == 0)
        {
            if (SYSTEM::VMAG(*uParam0) > 0f)
            {
                if (func_171(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_11, 0, 0, 0))
                {
                    *(uParam2[0 /*3*/]) = { *uParam0 };
                    uParam2->f_10[0] = uParam0->f_3;
                    return 1;
                }
            }
        }
        if (!unk_0xCA3CE6C3E2469C02())
        {
            Global_24B2CF.f_9AD = uParam0->f_7;
            switch (uParam0->f_7)
            {
                case 0:
                    Global_24B2CF.f_998 = { *uParam0 };
                    Global_24B2CF.f_99B = uParam0->f_4;
                    break;
                
                case 1:
                    Global_24B2CF.f_9A6 = { uParam0->f_8 };
                    Global_24B2CF.f_9A9 = { uParam0->f_B };
                    Global_24B2CF.f_9AC = 0f;
                    Global_24B2CF.f_998 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
                    break;
                
                case 2:
                    Global_24B2CF.f_9A6 = { uParam0->f_8 };
                    Global_24B2CF.f_9A9 = { uParam0->f_B };
                    Global_24B2CF.f_9AC = uParam0->f_E;
                    Global_24B2CF.f_998 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
                    break;
            }
            if (!uParam1->f_8 && !uParam1->f_9)
            {
                func_170(vVar6.x, vVar6.y);
            }
            Global_24B2CF.f_997 = 1;
            Global_24B2CF.f_996 = 1;
            Global_24B2CF.f_99D = unk_0x169A8AC9F93C2727();
            Global_24B2CF.f_99C = unk_0x169A8AC9F93C2727();
            Global_24B2CF.f_99F = unk_0x429EE9FF15BB9033();
        }
        else
        {
            return 0;
        }
    }
    if (Global_24B2CF.f_996)
    {
        if (Global_24B2CF.f_997 == 1)
        {
            if (unk_0x535C1E10CE002C3D(fVar2, fVar3, fVar4, fVar5) || unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Global_24B2CF.f_99D) > 5000)
            {
                Global_24B2CF.f_99D = unk_0x169A8AC9F93C2727();
                if (uParam1->f_8 || uParam1->f_9)
                {
                    if (uParam0->f_15)
                    {
                        *(uParam2[0 /*3*/]) = { uParam0->f_12 };
                    }
                    else
                    {
                        *(uParam2[0 /*3*/]) = { vVar6 };
                    }
                    Var14.f_6 = 1082130432;
                    Var14.f_7 = 1176255488;
                    Var14.f_8 = 1;
                    Var14.f_A = 1;
                    Var14.f_D = 1;
                    Var14.f_F = 1;
                    Var14.f_10 = 1;
                    Var14.f_1F = 1;
                    Var14.f_22 = joaat("tailgater");
                    Var14.f_26 = 2;
                    Var14.f_2D = 2;
                    Var14.f_31 = 1123024896;
                    Var14.f_35 = 999;
                    Var14.f_36 = 1176256410;
                    Var14.f_37 = 1;
                    Var14.f_38 = 1;
                    Var14.f_39 = 1;
                    Var14 = { *uParam1 };
                    Var14.f_3 = uParam1->f_5;
                    Var14.f_B = uParam1->f_9;
                    Var14.f_12 = 1;
                    if (uParam1->f_20 > 0f)
                    {
                        Var14.f_6 = uParam1->f_20;
                    }
                    switch (uParam0->f_7)
                    {
                        case 0:
                            Var14.f_13 = { *uParam0 };
                            Var14.f_19 = uParam0->f_4;
                            break;
                        
                        case 1:
                            Var14.f_13 = { uParam0->f_8 };
                            Var14.f_16 = { uParam0->f_B };
                            Var14.f_19 = 0f;
                            break;
                        
                        case 2:
                            Var14.f_13 = { uParam0->f_8 };
                            Var14.f_16 = { uParam0->f_B };
                            Var14.f_19 = uParam0->f_E;
                            break;
                    }
                    Var14.f_1A = uParam0->f_7;
                    Var14.f_C = uParam0->f_F;
                    if (uParam0->f_15)
                    {
                        Var14.f_1E = 1;
                        Var14.f_20 = 1;
                    }
                    iVar9 = 0;
                    while (iVar9 < 2)
                    {
                        Var14.f_26[iVar9 /*3*/] = { uParam1->f_D[iVar9 /*3*/] };
                        Var14.f_2D[iVar9] = uParam1->f_14[iVar9];
                        iVar9++;
                    }
                    Var14.f_33 = uParam1->f_1E;
                    Var14.f_37 = uParam0->f_10;
                    if (uParam0->f_1A)
                    {
                        Var14.f_A = 0;
                    }
                    if (func_169(Global_440000.f_2E9D2))
                    {
                        Var14.f_9 = 1;
                    }
                    func_144(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var14);
                    if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
                    {
                        if (!func_143(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
                        {
                            *(uParam2[0 /*3*/]) = { *uParam0 };
                            uParam2->f_10[0] = uParam0->f_3;
                        }
                    }
                    Global_24B2CF.f_997 = 9;
                }
                else
                {
                    Global_24B2CF.f_997 = 2;
                }
            }
        }
        if (Global_24B2CF.f_997 == 2)
        {
            if ((unk_0x5A95B2C0248E6A88(vVar7, vVar8) || unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Global_24B2CF.f_99D) > 15000) || unk_0x62F0BA4287AEF53F(vVar7, vVar8) == 0)
            {
                Global_24B2CF.f_99D = unk_0x169A8AC9F93C2727();
                if (uParam0->f_5 && !func_140(unk_0x7C7787D2D7139A85(), 0))
                {
                    Global_24B2CF.f_997 = 3;
                }
                else
                {
                    Global_24B2CF.f_997 = 4;
                }
            }
            else if (unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Global_24B2CF.f_9A1) > 7000)
            {
                func_139(vVar6.x, vVar6.y);
            }
        }
        if (Global_24B2CF.f_997 == 3)
        {
            if (func_138() || unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Global_24B2CF.f_99D) > 10000)
            {
                Global_24B2CF.f_99D = unk_0x169A8AC9F93C2727();
                Global_24B2CF.f_997 = 4;
            }
        }
        if (Global_24B2CF.f_997 == 4)
        {
            if (unk_0xCA3CE6C3E2469C02())
            {
                unk_0x7639139054380BC9();
                unk_0x084ECE01D0B0CB2E();
            }
            else
            {
                iVar0 = 0;
                func_172();
                if (uParam0->f_5)
                {
                    if (SYSTEM::VMAG(*uParam1) == 0f)
                    {
                        iVar0 += 2;
                    }
                    if (uParam1->f_3)
                    {
                        iVar0 += 8;
                    }
                    iVar0 += 16;
                    iVar0 += 32;
                    if (!unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1)
                    {
                        iVar0 += 64;
                        iVar0 += 128;
                        iVar0 += 256;
                    }
                    iVar0 += 2048;
                    iVar0 += 512;
                    iVar0 += 1024;
                    switch (uParam0->f_7)
                    {
                        case 0:
                            if (unk_0x40DDBBA793BED1D3(unk_0x7C7787D2D7139A85(), *uParam0, uParam0->f_4, *uParam1, iVar0))
                            {
                                Global_24B2CF.f_99D = unk_0x169A8AC9F93C2727();
                                Global_24B2CF.f_997 = 5;
                            }
                            break;
                        
                        case 1:
                            func_137(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
                            if (unk_0x860EF09347EA54A7(unk_0x7C7787D2D7139A85(), vVar10, vVar11, uVar12, *uParam1, iVar0))
                            {
                                Global_24B2CF.f_99D = unk_0x169A8AC9F93C2727();
                                Global_24B2CF.f_997 = 5;
                            }
                            break;
                        
                        case 2:
                            if (unk_0x860EF09347EA54A7(unk_0x7C7787D2D7139A85(), uParam0->f_8, uParam0->f_B, uParam0->f_E, *uParam1, iVar0))
                            {
                                Global_24B2CF.f_99D = unk_0x169A8AC9F93C2727();
                                Global_24B2CF.f_997 = 5;
                            }
                            break;
                    }
                }
                else
                {
                    if (uParam1->f_3)
                    {
                        iVar0++;
                    }
                    iVar0 += 2;
                    if (uParam1->f_A)
                    {
                        iVar0 += 32;
                    }
                    Global_24B2CF.f_99D = unk_0x169A8AC9F93C2727();
                    Global_24B2CF.f_997 = 5;
                    switch (uParam0->f_7)
                    {
                        case 0:
                            unk_0xE662A2B7FE06F602(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
                            break;
                        
                        case 1:
                            func_137(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
                            unk_0x0895E317E104D1D4(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
                            break;
                        
                        case 2:
                            unk_0x0895E317E104D1D4(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 5000);
                            break;
                        }
                    }
                }
        }
        if (Global_24B2CF.f_997 == 5)
        {
            if (func_63(uParam2, uParam0, uParam1, 0))
            {
                if (Global_24B2CF.f_9B1.f_5)
                {
                    Global_24B2CF.f_99D = unk_0x169A8AC9F93C2727();
                    Global_24B2CF.f_997 = 6;
                }
                else
                {
                    Global_24B2CF.f_99D = unk_0x169A8AC9F93C2727();
                    if (!uParam0->f_5)
                    {
                        if (!SYSTEM::VMAG(*uParam1) == 0f)
                        {
                            vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
                            uParam2->f_10[0] = unk_0x3BA2E0B9E14A8025(vVar1.x, vVar1.y);
                        }
                    }
                    Global_24B2CF.f_997 = 9;
                }
            }
            else if (unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Global_24B2CF.f_99D) > 20000)
            {
                unk_0x7639139054380BC9();
                unk_0x084ECE01D0B0CB2E();
                Global_24B2CF.f_99D = unk_0x169A8AC9F93C2727();
                Global_24B2CF.f_997 = 8;
            }
        }
        if (Global_24B2CF.f_997 == 6)
        {
            iVar0 = 0;
            Global_24B2CF.f_9B1.f_1 = 0;
            if (uParam1->f_3)
            {
                iVar0++;
            }
            else if (uParam0->f_7 == 0)
            {
                if (!func_62(uParam0->f_4))
                {
                    if (unk_0x61837007ACF2F2C2(unk_0x46398409580F98BC(vVar6)))
                    {
                        iVar0++;
                    }
                }
            }
            else if (!func_61(uParam0->f_8, uParam0->f_B, uParam0->f_E))
            {
                if (unk_0x61837007ACF2F2C2(unk_0x46398409580F98BC(vVar6)))
                {
                    iVar0++;
                }
            }
            iVar0 += 2;
            if (uParam1->f_A)
            {
                iVar0 += 32;
            }
            if (uParam0->f_F)
            {
                iVar0 += 16;
            }
            Global_24B2CF.f_99D = unk_0x169A8AC9F93C2727();
            Global_24B2CF.f_997 = 7;
            switch (uParam0->f_7)
            {
                case 0:
                    unk_0xE662A2B7FE06F602(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
                    break;
                
                case 1:
                    func_137(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
                    unk_0x0895E317E104D1D4(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
                    break;
                
                case 2:
                    unk_0x0895E317E104D1D4(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 5000);
                    break;
                }
        }
        if (Global_24B2CF.f_997 == 7)
        {
            if (func_63(uParam2, uParam0, uParam1, 1))
            {
                if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
                {
                    iVar9 = 0;
                    while (iVar9 < 3)
                    {
                        if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
                        {
                            if (!SYSTEM::VMAG(Global_24B2CF.f_A37[iVar9 /*3*/]) == 0f)
                            {
                                switch (uParam0->f_7)
                                {
                                    case 0:
                                        if (func_143(Global_24B2CF.f_A37[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
                                        {
                                            *(uParam2[0 /*3*/]) = { Global_24B2CF.f_A37[iVar9 /*3*/] };
                                        }
                                        break;
                                    
                                    case 1:
                                        if (func_59(Global_24B2CF.f_A37[iVar9 /*3*/], uParam0->f_8, uParam0->f_B, 0, 0))
                                        {
                                            *(uParam2[0 /*3*/]) = { Global_24B2CF.f_A37[iVar9 /*3*/] };
                                        }
                                        break;
                                    
                                    case 2:
                                        if (unk_0xD36AE666DF05C607(Global_24B2CF.f_A37[iVar9 /*3*/], uParam0->f_8, uParam0->f_B, uParam0->f_E, 0, true))
                                        {
                                            *(uParam2[0 /*3*/]) = { Global_24B2CF.f_A37[iVar9 /*3*/] };
                                        }
                                        break;
                                    }
                                }
                        }
                        iVar9++;
                    }
                    if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
                    {
                        switch (uParam0->f_7)
                        {
                            case 0:
                                vVar1 = { *uParam0 };
                                break;
                            
                            case 1:
                            case 2:
                                vVar1 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
                                break;
                        }
                        func_12(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
                        *(uParam2[0 /*3*/]) = { vVar1 };
                    }
                }
                Global_24B2CF.f_99D = unk_0x169A8AC9F93C2727();
                if (!SYSTEM::VMAG(*uParam1) == 0f)
                {
                    iVar9 = 0;
                    while (iVar9 < 5)
                    {
                        vVar1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
                        uParam2->f_10[iVar9] = unk_0x3BA2E0B9E14A8025(vVar1.x, vVar1.y);
                        iVar9++;
                    }
                }
                Global_24B2CF.f_997 = 9;
            }
            else if (unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Global_24B2CF.f_99D) > 20000)
            {
                Global_24B2CF.f_99D = unk_0x169A8AC9F93C2727();
                Global_24B2CF.f_997 = 8;
            }
        }
        if (Global_24B2CF.f_997 == 8)
        {
            if (uParam0->f_5)
            {
                if (func_11(Global_24B2CF.f_1E4))
                {
                }
            }
            else if (Global_24B2CF.f_9B1.f_2)
            {
                func_10(uParam2, &(Global_24B2CF.f_9B1.f_6));
            }
            else
            {
                if (uParam0->f_F)
                {
                    bVar15 = false;
                }
                else
                {
                    bVar15 = true;
                }
                *(uParam2[0 /*3*/]) = { Global_24B2CF.f_998 };
                func_12(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
            }
            Global_24B2CF.f_99D = unk_0x169A8AC9F93C2727();
            Global_24B2CF.f_997 = 9;
        }
        if (Global_24B2CF.f_997 == 9)
        {
            Global_24B2CF.f_996 = 0;
            unk_0x7639139054380BC9();
            unk_0x084ECE01D0B0CB2E();
            func_178();
            return 1;
        }
        Global_24B2CF.f_99C = unk_0x169A8AC9F93C2727();
    }
    return 0;
}

void func_10(var uParam0, var uParam1)//Position - 0x1709
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 5)
    {
        *(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
        uParam0->f_10[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
        uParam0->f_16[iVar0] = (*uParam1)[iVar0 /*10*/];
        iVar0++;
    }
}

int func_11(int iParam0)//Position - 0x1753
{
    if (iParam0 == 3 || iParam0 == 26)
    {
        return 1;
    }
    return 0;
}

void func_12(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x1772
{
    vector3 vVar0;
    var uVar1;
    struct<56> Var2;
    var uVar3;
    int iVar4;
    bool bVar5;
    int iVar6;
    vector3 vVar7;
    vector3 vVar8;
    vector3 vVar9;
    float fVar10;
    
    Var2.f_6 = 1082130432;
    Var2.f_7 = 1176255488;
    Var2.f_8 = 1;
    Var2.f_A = 1;
    Var2.f_D = 1;
    Var2.f_F = 1;
    Var2.f_10 = 1;
    Var2.f_1F = 1;
    Var2.f_22 = joaat("tailgater");
    Var2.f_26 = 2;
    Var2.f_2D = 2;
    Var2.f_31 = 1123024896;
    Var2.f_35 = 999;
    Var2.f_36 = 1176256410;
    Var2.f_37 = 1;
    Var2.f_38 = 1;
    Var2.f_39 = 1;
    if (bParam1)
    {
        iVar6 = 0;
    }
    else
    {
        iVar6 = 16;
    }
    if (!uParam6->f_3)
    {
        if (uParam5->f_5)
        {
            if (!uParam5->f_16)
            {
                iVar6 += 4;
            }
            else
            {
                switch (uParam5->f_7)
                {
                    case 0:
                        vVar7 = { *uParam5 };
                        if (func_62(uParam5->f_4) || !unk_0x61837007ACF2F2C2(unk_0x46398409580F98BC(vVar7)))
                        {
                            iVar6 += 4;
                        }
                        break;
                    
                    case 1:
                        vVar7 = { uParam5->f_8 + uParam5->f_B * Vector(0.5f, 0.5f, 0.5f) };
                        if (func_61(uParam5->f_8, uParam5->f_B, 0f) || !unk_0x61837007ACF2F2C2(unk_0x46398409580F98BC(vVar7)))
                        {
                            iVar6 += 4;
                        }
                        break;
                    
                    case 2:
                        vVar7 = { uParam5->f_8 + uParam5->f_B * Vector(0.5f, 0.5f, 0.5f) };
                        if (func_61(uParam5->f_8, uParam5->f_B, uParam5->f_E) || !unk_0x61837007ACF2F2C2(unk_0x46398409580F98BC(vVar7)))
                        {
                            iVar6 += 4;
                        }
                        break;
                    }
            }
        }
        else
        {
            iVar6 += 4;
        }
    }
    if (func_28(*uParam0, &vVar0, iVar6, iParam3, 1))
    {
    }
    else
    {
        bVar5 = true;
    }
    if (bVar5)
    {
        vVar0 = { *uParam0 };
        Var2 = { *uParam6 };
        Var2.f_8 = 1;
        Var2.f_3 = uParam6->f_5;
        if (bParam2)
        {
            Var2.f_A = 0;
        }
        else
        {
            Var2.f_A = 1;
        }
        Var2.f_D = uParam5->f_F;
        Var2.f_F = iParam3;
        if (uParam6->f_20 > 0f)
        {
            Var2.f_6 = uParam6->f_20;
        }
        if (bParam4)
        {
            Var2.f_12 = 1;
            Var2.f_1A = uParam5->f_7;
            switch (uParam5->f_7)
            {
                case 0:
                    Var2.f_13 = { *uParam5 };
                    Var2.f_19 = uParam5->f_4;
                    break;
                
                case 1:
                    Var2.f_13 = { uParam5->f_8 };
                    Var2.f_16 = { uParam5->f_B };
                    Var2.f_19 = 0f;
                    break;
                
                case 2:
                    Var2.f_13 = { uParam5->f_8 };
                    Var2.f_16 = { uParam5->f_B };
                    Var2.f_19 = uParam5->f_E;
                    break;
                }
        }
        iVar4 = 0;
        while (iVar4 < 2)
        {
            Var2.f_26[iVar4 /*3*/] = { uParam6->f_D[iVar4 /*3*/] };
            Var2.f_2D[iVar4] = uParam6->f_14[iVar4];
            iVar4++;
        }
        Var2.f_33 = uParam6->f_1E;
        Var2.f_37 = uParam5->f_10;
        if (func_24(unk_0x7C7787D2D7139A85(), 0))
        {
            Var2.f_9 = 1;
        }
        func_144(&vVar0, &uVar1, &Var2);
    }
    if (bParam4)
    {
        switch (uParam5->f_7)
        {
            case 0:
                vVar8 = { *uParam5 };
                fVar10 = uParam5->f_4;
                break;
            
            case 1:
                vVar8 = { uParam5->f_8 };
                vVar9 = { uParam5->f_B };
                break;
            
            case 2:
                vVar8 = { uParam5->f_8 };
                vVar9 = { uParam5->f_B };
                fVar10 = uParam5->f_E;
                break;
        }
        if (!func_23(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
        {
            if (func_28(*uParam0, &vVar0, iVar6, iParam3, 0))
            {
                if (!func_23(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
                {
                    if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
                    {
                        vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
                    }
                    else
                    {
                        vVar0 = { vVar8 };
                    }
                    if (unk_0xDF956C4106F1E9C5(vVar0, &uVar3, 0, 0))
                    {
                        vVar0.z = uVar3;
                    }
                }
            }
            else if (func_13(uParam0, 1, 1, 1, 1))
            {
                func_12(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
            }
            else
            {
                if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
                {
                    vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
                }
                else
                {
                    vVar0 = { vVar8 };
                }
                if (unk_0xDF956C4106F1E9C5(vVar0, &uVar3, 0, 0))
                {
                    vVar0.z = uVar3;
                }
            }
        }
    }
    *uParam0 = { vVar0 };
    Global_24B2CF.f_293 = 1;
}

int func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1BDD
{
    int iVar0;
    vector3 vVar1;
    
    iVar0 = 0;
    while (iVar0 < 12)
    {
        if (Global_24C5FB[iVar0 /*17*/].f_9 == 1)
        {
            if (!bParam2 || (bParam2 && Global_24C5FB[iVar0 /*17*/].f_10))
            {
                if (func_22(*uParam0, &(Global_24C5FB[iVar0 /*17*/]), 1008981770, bParam4, 0))
                {
                    if (bParam1)
                    {
                        if (Global_24C5FB[iVar0 /*17*/].f_C)
                        {
                            *uParam0 = { Global_24C5FB[iVar0 /*17*/].f_D };
                        }
                        else
                        {
                            vVar1 = { *uParam0 };
                            func_14(&vVar1, &(Global_24C5FB[iVar0 /*17*/]), 1036831949, 0, bParam3);
                            if (func_13(&vVar1, 0, 0, 0, 1))
                            {
                                vVar1 = { *uParam0 };
                                func_14(&vVar1, &(Global_24C5FB[iVar0 /*17*/]), 1036831949, 1, 0);
                            }
                            *uParam0 = { vVar1 };
                        }
                    }
                    return 1;
                }
            }
        }
        iVar0++;
    }
    return 0;
}

void func_14(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x1CB8
{
    if (bParam4)
    {
        switch (uParam1->f_A)
        {
            case 0:
                *uParam0 = { func_21(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_24B2CF.f_AA4) * uParam1->f_8)), 0, fParam2, bParam3) };
                break;
            
            case 1:
                *uParam0 = { func_21(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
                break;
            
            case 2:
                *uParam0 = { func_21(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
                break;
        }
    }
    else
    {
        switch (uParam1->f_A)
        {
            case 0:
                func_19(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_24B2CF.f_AA4) * uParam1->f_8)), fParam2, bParam3, 0);
                break;
            
            case 1:
                func_18(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
                break;
            
            case 2:
                func_15(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
                break;
            }
    }
}

void func_15(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x1DC2
{
    vector3 vVar0;
    vector3 vVar1;
    vector3 vVar2;
    float fVar3;
    vector3 vVar4;
    vector3 vVar5;
    float fVar6;
    vector3 vVar7;
    vector3 vVar8;
    vector3 vVar9;
    vector3 vVar10;
    vector3 vVar11;
    
    vVar0 = { vParam2 - vParam1 };
    vVar0.z = 0f;
    vVar1 = { *uParam0 - vParam1 };
    vVar1.z = 0f;
    vVar2 = { func_17(0f, 0f, 1f, vVar0) };
    vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
    fVar3 = (SYSTEM::VMAG(vVar1) * SYSTEM::SIN(unk_0x63D7EF22AC9F9A5E(vVar0.x, vVar0.y, vVar1.x, vVar1.y)));
    if (fVar3 < (fParam3 * 0.5f))
    {
        if (!bParam5)
        {
            if (func_16(vVar2, vVar1) >= 0f)
            {
                vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
            }
            else
            {
                vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
            }
        }
        else if (func_16(vVar2, vVar1) >= 0f)
        {
            vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
        }
        else
        {
            vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
        }
        vVar4 = { *uParam0 + vVar2 };
        fVar6 = SYSTEM::VDIST(vParam1.x, vParam1.y, 0f, vParam2.x, vParam2.y, 0f);
        vVar7 = { vParam1 + vParam2 / Vector(2f, 2f, 2f) };
        vVar7.z = 0f;
        vVar2 = { func_17(0f, 0f, 1f, vVar0) };
        vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
        vVar2 = { vVar2 * FtoV((fParam3 * 0.5f)) };
        vVar8 = { vVar7 - vVar2 };
        vVar9 = { vVar7 + vVar2 };
        vVar10 = { vVar9 - vVar8 };
        vVar10.z = 0f;
        vVar11 = { *uParam0 - vVar8 };
        vVar11.z = 0f;
        vVar2 = { func_17(0f, 0f, 1f, vVar10) };
        vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
        fVar3 = (SYSTEM::VMAG(vVar11) * SYSTEM::SIN(unk_0x63D7EF22AC9F9A5E(vVar10.x, vVar10.y, vVar11.x, vVar11.y)));
        if (!bParam5)
        {
            if (func_16(vVar2, vVar11) >= 0f)
            {
                vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
            }
            else
            {
                vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
            }
        }
        else if (func_16(vVar2, vVar11) >= 0f)
        {
            vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
        }
        else
        {
            vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
        }
        vVar5 = { *uParam0 + vVar2 };
        if (SYSTEM::VDIST(vVar4, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(vVar5, *uParam0, uParam0->f_1, 0f))
        {
            *uParam0 = { vVar4 };
        }
        else
        {
            *uParam0 = { vVar5 };
        }
    }
}

float func_16(vector3 vParam0, vector3 vParam1)//Position - 0x2091
{
    return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_17(vector3 vParam0, vector3 vParam1)//Position - 0x20B2
{
    return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

void func_18(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)//Position - 0x20EB
{
    vector3 vVar0;
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    
    vVar0 = { *uParam0 };
    fVar1 = (*uParam0 - Param1);
    fVar2 = (*uParam0 - Param3);
    if (fVar1 < fVar2)
    {
        fVar3 = fVar1;
    }
    else
    {
        fVar3 = fVar2;
    }
    fVar4 = (uParam0->f_1 - Param1.f_1);
    fVar5 = (uParam0->f_1 - Param3.f_1);
    if (fVar4 < fVar5)
    {
        fVar6 = fVar4;
    }
    else
    {
        fVar6 = fVar5;
    }
    vVar0 = { *uParam0 };
    if (!bParam6)
    {
        if (fVar3 < fVar6)
        {
            if (fVar1 < fVar2)
            {
                vVar0.x = (Param1 - fParam5);
            }
            else
            {
                vVar0.x = (Param3 + fParam5);
            }
        }
        else if (fVar4 < fVar5)
        {
            vVar0.y = (Param1.f_1 - fParam5);
        }
        else
        {
            vVar0.y = (Param3.f_1 + fParam5);
        }
    }
    else if (fVar3 < fVar6)
    {
        if (fVar1 < fVar2)
        {
            vVar0.x = (Param3 + fParam5);
        }
        else
        {
            vVar0.x = (Param1 - fParam5);
        }
    }
    else if (fVar4 < fVar5)
    {
        vVar0.y = (Param3.f_1 + fParam5);
    }
    else
    {
        vVar0.y = (Param1.f_1 - fParam5);
    }
    *uParam0 = { vVar0 };
}

void func_19(var uParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4, float fParam5)//Position - 0x21EA
{
    vector3 vVar0;
    vector3 vVar1;
    
    vVar0 = { *uParam0 - vParam1 };
    vVar0.z = 0f;
    if (SYSTEM::VMAG(vVar0) > 0f)
    {
        vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
    }
    else
    {
        vVar0 = { 0f, 1f, 0f };
        if (fParam5 == 0f)
        {
            func_20(&vVar0, 0f, 0f, unk_0x64A3FFD9D62755C5(0f, 360f));
        }
        else
        {
            func_20(&vVar0, 0f, 0f, fParam5);
        }
    }
    vVar0 = { vVar0 * FtoV((fParam2 + fParam3)) };
    if (!bParam4)
    {
        vVar1 = { vParam1 + vVar0 };
    }
    else
    {
        vVar1 = { vParam1 - vVar0 };
    }
    *uParam0 = vVar1.x;
    uParam0->f_1 = vVar1.y;
}

void func_20(var uParam0, vector3 vParam1)//Position - 0x2292
{
    float fVar0;
    float fVar1;
    vector3 vVar2;
    
    fVar0 = SYSTEM::COS(vParam1.x);
    fVar1 = SYSTEM::SIN(vParam1.x);
    vVar2.x = *uParam0;
    vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
    vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
    *uParam0 = { vVar2 };
    fVar0 = SYSTEM::COS(vParam1.y);
    fVar1 = SYSTEM::SIN(vParam1.y);
    vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
    vVar2.y = uParam0->f_1;
    vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
    *uParam0 = { vVar2 };
    fVar0 = SYSTEM::COS(vParam1.z);
    fVar1 = SYSTEM::SIN(vParam1.z);
    vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
    vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
    vVar2.z = uParam0->f_2;
    *uParam0 = { vVar2 };
}

Vector3 func_21(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)//Position - 0x2369
{
    int iVar0;
    vector3 vVar1;
    
    switch (iParam4)
    {
        case 0:
            func_19(&vParam0, vParam1, fParam3, fParam5, bParam6, 0);
            break;
        
        case 1:
            func_18(&vParam0, vParam1, vParam2, fParam5, bParam6);
            break;
        
        case 2:
            func_15(&vParam0, vParam1, vParam2, fParam3, fParam5, bParam6);
            break;
    }
    iVar0 = 0;
    while (iVar0 < 40)
    {
        unk_0x905F304BCFD07BCE(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
        switch (iParam4)
        {
            case 0:
                if (!func_143(vVar1, vParam1, fParam3, 0, 0))
                {
                    return vVar1;
                }
                break;
            
            case 1:
                if (!func_59(vVar1, vParam1, vParam2, 0, 0))
                {
                    return vVar1;
                }
                break;
            
            case 2:
                if (!unk_0xD36AE666DF05C607(vVar1, vParam1, vParam2, fParam3, 0, true))
                {
                    return vVar1;
                }
                break;
        }
        iVar0++;
    }
    return vParam0;
}

int func_22(vector3 vParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x246C
{
    switch (uParam1->f_A)
    {
        case 0:
            return func_143(vParam0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_24B2CF.f_AA4) * uParam1->f_8)), bParam3, bParam4);
            break;
        
        case 1:
            return func_59(vParam0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
            break;
        
        case 2:
            if (bParam3 && bParam4)
            {
                return unk_0xD36AE666DF05C607(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false);
            }
            else if (bParam3)
            {
                if (unk_0xD36AE666DF05C607(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false) && !(vParam0.z < uParam1->f_2 && vParam0.z < uParam1->f_3.f_2))
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
            }
            else if (bParam4)
            {
                if (unk_0xD36AE666DF05C607(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, false) && !(vParam0.z > uParam1->f_2 && vParam0.z > uParam1->f_3.f_2))
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                return unk_0xD36AE666DF05C607(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, true);
            }
            break;
    }
    return 0;
}

int func_23(vector3 vParam0, int iParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x25CD
{
    switch (iParam1)
    {
        case 0:
            if (SYSTEM::VDIST(vParam0, vParam2) <= fParam4)
            {
                return 1;
            }
            break;
        
        case 1:
            return func_59(vParam0, vParam2, vParam3, 0, 0);
            break;
        
        case 2:
            return unk_0xD36AE666DF05C607(vParam0, vParam2, vParam3, fParam4, 0, true);
            break;
    }
    return 0;
}

int func_24(int iParam0, bool bParam1)//Position - 0x263A
{
    int iVar0;
    
    if (bParam1)
    {
        if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
        {
            iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
            if (unk_0x7F375072508F738F(iVar0) == -1988428699)
            {
                return 1;
            }
        }
    }
    if (iParam0 != func_27())
    {
        if (func_26(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1 && Global_24FD09[iParam0 /*421*/].f_135.f_8 != func_27())
            {
                return func_25(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 12;
            }
        }
    }
    return 0;
}

int func_25(int iParam0)//Position - 0x26C8
{
    switch (iParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
            return 0;
            break;
        
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
            return 1;
            break;
        
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
        case 41:
            return 2;
            break;
        
        case 43:
        case 42:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 59:
        case 98:
        case 99:
        case 100:
        case 112:
        case 113:
        case 114:
        case 115:
        case 119:
        case 116:
        case 118:
        case 120:
        case 121:
        case 126:
        case 127:
        case 134:
        case 135:
            return 3;
            break;
        
        case 70:
        case 71:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 79:
        case 80:
            return 4;
            break;
        
        case 81:
            return 5;
            break;
        
        case 82:
            return 6;
            break;
        
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
            return 7;
            break;
        
        case 88:
            return 8;
            break;
        
        case 89:
        case 90:
        case 91:
        case 92:
        case 93:
        case 94:
        case 95:
        case 96:
        case 97:
            return 9;
            break;
        
        case 101:
            return 10;
            break;
        
        case 102:
        case 103:
        case 104:
        case 105:
        case 106:
        case 107:
        case 108:
        case 109:
        case 110:
        case 111:
            return 11;
            break;
        
        case 117:
            return 12;
            break;
        
        case 122:
            return 13;
            break;
        
        case 123:
            return 14;
            break;
        
        case 124:
            return 15;
            break;
        
        case 125:
            return 16;
            break;
        
        case 128:
        case 129:
        case 130:
        case 131:
        case 132:
        case 133:
            return 17;
            break;
    }
    return -1;
}

int func_26(int iParam0, bool bParam1, bool bParam2)//Position - 0x2A90
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

int func_27()//Position - 0x2ADA
{
    return -1;
}

int func_28(vector3 vParam0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2AE3
{
    if (func_58(vParam0, uParam1))
    {
        if (func_29(vParam0, uParam1, iParam3, bParam4))
        {
            return 1;
        }
    }
    if (unk_0x0C9CB37B95E93A87(vParam0, 0, uParam1, iParam2))
    {
        if (func_29(vParam0, uParam1, iParam3, bParam4))
        {
            return 1;
        }
    }
    return 0;
}

int func_29(vector3 vParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x2B3F
{
    float fVar0;
    var uVar1;
    var uVar2;
    
    fVar0 = SYSTEM::VDIST(vParam0, *uParam1);
    if (fVar0 < 40f)
    {
        uVar1 = 2;
        uVar2 = 2;
        if ((iParam2 == 1 && !func_45(Global_24B2CF.f_1FB, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
        {
            if (!func_33(*uParam1, 1056964608))
            {
                if (!func_30(uParam1, 0))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int func_30(var uParam0, bool bParam1)//Position - 0x2BC4
{
    int iVar0;
    vector3 vVar1;
    int iVar2;
    
    vVar1 = { *uParam0 };
    iVar2 = func_32(vVar1);
    iVar0 = 0;
    while (iVar0 < Global_24CBBE[iVar2])
    {
        if (func_31(vVar1, &(Global_24C6C8[iVar2 /*141*/][iVar0 /*7*/])))
        {
            if (bParam1)
            {
                func_15(&vVar1, Global_24C6C8[iVar2 /*141*/][iVar0 /*7*/], Global_24C6C8[iVar2 /*141*/][iVar0 /*7*/].f_3, Global_24C6C8[iVar2 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
                *uParam0 = { vVar1 };
            }
            return 1;
        }
        iVar0++;
    }
    iVar0 = 0;
    while (iVar0 < Global_24CBBE[8])
    {
        if (func_31(vVar1, &(Global_24C6C8[8 /*141*/][iVar0 /*7*/])))
        {
            if (bParam1)
            {
                func_15(&vVar1, Global_24C6C8[8 /*141*/][iVar0 /*7*/], Global_24C6C8[8 /*141*/][iVar0 /*7*/].f_3, Global_24C6C8[8 /*141*/][iVar0 /*7*/].f_6, 1036831949, 0);
                *uParam0 = { vVar1 };
            }
            return 1;
        }
        iVar0++;
    }
    return 0;
}

bool func_31(vector3 vParam0, var uParam1)//Position - 0x2CD1
{
    return unk_0xD36AE666DF05C607(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, true);
}

int func_32(struct<2> Param0, var uParam1)//Position - 0x2CF1
{
    if (Param0.f_1 > Global_24CBC8[0])
    {
        return 0;
    }
    if (Param0.f_1 > Global_24CBC8[1])
    {
        if (Param0 < Global_24CBCC[0])
        {
            return 1;
        }
        else
        {
            return 2;
        }
    }
    if (Param0.f_1 > Global_24CBC8[2])
    {
        if (Param0 < Global_24CBCC[1])
        {
            return 3;
        }
        else if (Param0 < Global_24CBCC[2])
        {
            return 4;
        }
        else if (Param0 < Global_24CBCC[3])
        {
            return 5;
        }
        else
        {
            return 6;
        }
    }
    return 7;
}

int func_33(vector3 vParam0, float fParam1)//Position - 0x2D8C
{
    int iVar0;
    
    if (func_42(unk_0x7C7787D2D7139A85(), 1, 0))
    {
        if (Global_440000.f_10E00 > 0)
        {
            iVar0 = 0;
            while (iVar0 < Global_440000.f_10E00)
            {
                if (Global_440000.f_10E01[iVar0 /*84*/].f_7 != 0)
                {
                    if (func_34(vParam0, Global_440000.f_10E01[iVar0 /*84*/], Global_440000.f_10E01[iVar0 /*84*/].f_6, Global_440000.f_10E01[iVar0 /*84*/].f_7, fParam1))
                    {
                        return 1;
                    }
                }
                iVar0++;
            }
        }
        if (Global_440000.f_ED10 > 0)
        {
            iVar0 = 0;
            while (iVar0 < Global_440000.f_ED10)
            {
                if (Global_440000.f_ED13[iVar0 /*219*/].f_12 != 0)
                {
                    if (func_34(vParam0, Global_440000.f_ED13[iVar0 /*219*/], Global_440000.f_ED13[iVar0 /*219*/].f_3, Global_440000.f_ED13[iVar0 /*219*/].f_12, 0.5f))
                    {
                        return 1;
                    }
                }
                iVar0++;
            }
        }
        if (Global_440000.f_168FB > 0)
        {
            iVar0 = 0;
            while (iVar0 < Global_440000.f_168FB)
            {
                if (Global_440000.f_168FF[iVar0 /*282*/].f_C != 0)
                {
                    if (func_34(vParam0, Global_440000.f_168FF[iVar0 /*282*/], Global_440000.f_168FF[iVar0 /*282*/].f_3, Global_440000.f_168FF[iVar0 /*282*/].f_C, 0.5f))
                    {
                        return 1;
                    }
                }
                iVar0++;
            }
        }
        if (Global_EC945.f_10B > 0)
        {
            iVar0 = 0;
            while (iVar0 < Global_EC945.f_10B)
            {
                if (unk_0xD4B321D9096B01FC(Global_EC945.f_E8[iVar0]) && !unk_0xF4B969E0807E76C7(Global_EC945.f_E8[iVar0], 0))
                {
                    if (func_34(vParam0, unk_0xACE5E491FC1B0D37(Global_EC945.f_E8[iVar0], 1), unk_0xD2809C7F7FD79247(Global_EC945.f_E8[iVar0]), unk_0x7F375072508F738F(Global_EC945.f_E8[iVar0]), 0.5f))
                    {
                        return 1;
                    }
                }
                iVar0++;
            }
        }
        if (Global_EC945.f_109 > 0)
        {
            iVar0 = 0;
            while (iVar0 < Global_EC945.f_109)
            {
                if (unk_0xD4B321D9096B01FC(Global_EC945.f_76[iVar0]) && !unk_0xF4B969E0807E76C7(Global_EC945.f_76[iVar0], 0))
                {
                    if (func_34(vParam0, unk_0xACE5E491FC1B0D37(Global_EC945.f_76[iVar0], 1), unk_0xD2809C7F7FD79247(Global_EC945.f_76[iVar0]), unk_0x7F375072508F738F(Global_EC945.f_76[iVar0]), 0.5f))
                    {
                        return 1;
                    }
                }
                iVar0++;
            }
        }
    }
    return 0;
}

int func_34(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)//Position - 0x302A
{
    vector3 vVar0;
    vector3 vVar1;
    float fVar2;
    
    if (SYSTEM::VDIST(vParam0, vParam1) < func_41(iParam3, 1008981770))
    {
        func_35(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
        if (unk_0xD36AE666DF05C607(vParam0, vVar0, vVar1, fVar2, 0, true))
        {
            return 1;
        }
    }
    return 0;
}

void func_35(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)//Position - 0x307D
{
    vector3 vVar0;
    vector3 vVar1;
    vector3 vVar2;
    vector3 vVar3;
    vector3 vVar4;
    
    vVar0 = { 0f, 1f, 0f };
    func_20(&vVar0, 0f, 0f, fParam1);
    vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
    func_36(iParam2, &vVar1, &vVar2, 1086324736, 1080033280, 1077936128);
    vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
    vVar3.z = (vVar3.z - ((0.5f * unk_0x01CBD71E072E9F33((vVar2.z - vVar1.z))) + fParam6));
    vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
    vVar4.z = (vVar4.z + ((0.5f * unk_0x01CBD71E072E9F33((vVar2.z - vVar1.z))) + fParam6));
    *uParam3 = { vVar3 };
    *uParam4 = { vVar4 };
    *uParam5 = unk_0x01CBD71E072E9F33((vVar2.x - vVar1.x));
}

void func_36(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x3149
{
    int iVar0;
    
    if (unk_0xCBBFE6965951B21E(iParam0))
    {
        unk_0xB10397B050DB322E(iParam0, uParam1, uParam2);
    }
    else
    {
        iVar0 = func_39(iParam0);
        if (iVar0 != 0)
        {
            func_37(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
            return;
        }
    }
    if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
    {
        *uParam1 = (0f - (fParam4 * 0.5f));
        *uParam2 = (0f + (fParam4 * 0.5f));
        uParam1->f_1 = (0f - (fParam3 * 0.5f));
        uParam2->f_1 = (0f + (fParam3 * 0.5f));
        uParam1->f_2 = (0f - (fParam5 * 0.5f));
        uParam2->f_2 = (0f + (fParam5 * 0.5f));
    }
}

void func_37(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x3208
{
    int iVar0;
    
    func_38(iParam0, &Global_1413E0);
    iVar0 = 0;
    while (iVar0 < 2)
    {
        if (unk_0xCBBFE6965951B21E(Global_1413E0[iVar0]))
        {
            unk_0xB10397B050DB322E(Global_1413E0[iVar0], &(Global_1413E4[iVar0 /*3*/]), &(Global_1413EB[iVar0 /*3*/]));
        }
        if (SYSTEM::VMAG(Global_1413E4[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1413EB[iVar0 /*3*/]) <= 0.01f)
        {
            Global_1413E4[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
            Global_1413EB[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
            Global_1413E4[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
            Global_1413EB[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
            Global_1413E4[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
            Global_1413EB[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
        }
        Global_1413F2[iVar0] = (Global_1413EB[iVar0 /*3*/] - Global_1413E4[iVar0 /*3*/]);
        Global_1413F5[iVar0] = (Global_1413EB[iVar0 /*3*/].f_1 - Global_1413E4[iVar0 /*3*/].f_1);
        Global_1413F8[iVar0] = (Global_1413EB[iVar0 /*3*/].f_2 - Global_1413E4[iVar0 /*3*/].f_2);
        if (Global_1413F2[iVar0] > Global_1413FB)
        {
            Global_1413FB = Global_1413F2[iVar0];
        }
        if (Global_1413F8[iVar0] > Global_1413FC)
        {
            Global_1413FC = Global_1413F8[iVar0];
        }
        iVar0++;
    }
    Global_1413FD = (Global_1413FB * -0.5f);
    Global_141400 = (Global_1413FB * 0.5f);
    Global_1413FD.f_1 = ((((0.5f * Global_1413F5[0]) + Global_1413F5[1]) + Global_1413E0.f_3) * -1f);
    Global_141400.f_1 = (0.5f * Global_1413F5[0]);
    Global_1413FD.f_2 = (Global_1413F8[0] * -0.5f);
    Global_141400.f_2 = (Global_1413F8[0] * 0.5f);
    *uParam1 = { Global_1413FD };
    *uParam2 = { Global_141400 };
}

void func_38(int iParam0, var uParam1)//Position - 0x3414
{
    switch (iParam0)
    {
        case 1:
            (*uParam1)[0] = 387748548;
            (*uParam1)[1] = 1502869817;
            uParam1->f_3 = -2.6f;
            break;
        
        case 2:
            (*uParam1)[0] = 177270108;
            (*uParam1)[1] = 1502869817;
            uParam1->f_3 = -2.6f;
            break;
        
        case 3:
            (*uParam1)[0] = 433954513;
            (*uParam1)[1] = -1881846085;
            uParam1->f_3 = 0.5f;
            break;
    }
}

int func_39(int iParam0)//Position - 0x3495
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    while (iVar0 < 4)
    {
        iVar1 = iVar0;
        if (func_40(iVar1) == iParam0)
        {
            return iVar1;
        }
        iVar0++;
    }
    return 0;
}

int func_40(int iParam0)//Position - 0x34C4
{
    int iVar0;
    
    iVar0 = (1000 + iParam0);
    return iVar0;
}

float func_41(int iParam0, float fParam1)//Position - 0x34D6
{
    vector3 vVar0;
    vector3 vVar1;
    vector3 vVar2;
    float fVar3;
    
    if (iParam0 == 0)
    {
        return 5f;
    }
    func_36(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
    vVar2 = { vVar1 - vVar0 };
    fVar3 = (SYSTEM::SQRT(((((vVar2.x * 0.5f) * (vVar2.x * 0.5f)) + ((vVar2.y * 0.5f) * (vVar2.y * 0.5f))) + ((vVar2.z * 0.5f) * (vVar2.z * 0.5f)))) + fParam1);
    return fVar3;
}

int func_42(int iParam0, bool bParam1, bool bParam2)//Position - 0x3556
{
    if (bParam1)
    {
        if (func_43(iParam0))
        {
            return 1;
        }
    }
    if (!bParam2)
    {
    }
    if (Global_1844AE[iParam0 /*871*/] == -1)
    {
        return 0;
    }
    return 1;
}

bool func_43(int iParam0)//Position - 0x3588
{
    return func_44(iParam0);
}

bool func_44(int iParam0)//Position - 0x3596
{
    return unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_D.f_1, 0);
}

int func_45(vector3 vParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x35B0
{
    int iVar0;
    bool bVar1;
    
    if (func_52(vParam0))
    {
        if (func_13(uParam1, bParam4, 0, 1, 1))
        {
            if (bParam4)
            {
            }
            return 1;
        }
    }
    if (func_47(uParam1, bParam4, 1))
    {
        if (bParam4)
        {
        }
        return 1;
    }
    if (bParam5)
    {
        if (func_46(*uParam1, 1056964608))
        {
            return 1;
        }
    }
    bVar1 = false;
    iVar0 = 0;
    while (iVar0 < *uParam2)
    {
        if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
        {
            if (bParam4)
            {
                func_19(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
            }
            bVar1 = true;
        }
        iVar0++;
    }
    if (bVar1)
    {
        return 1;
    }
    return 0;
}

int func_46(vector3 vParam0, float fParam1)//Position - 0x366C
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 30)
    {
        if (SYSTEM::VDIST(vParam0, Global_24B2CF.f_AA6[iVar0 /*3*/]) < fParam1)
        {
            return 1;
        }
        iVar0++;
    }
    return 0;
}

int func_47(var uParam0, bool bParam1, bool bParam2)//Position - 0x36A7
{
    int iVar0;
    var uVar1;
    vector3 vVar2;
    
    if (func_49(*uParam0, &iVar0))
    {
        if (bParam1)
        {
            vVar2 = { *uParam0 };
            func_14(&vVar2, &(Global_24B2CF.f_16B[iVar0 /*12*/]), 1036831949, 0, bParam2);
            if (func_49(vVar2, &uVar1) || func_48(vVar2))
            {
                vVar2 = { *uParam0 };
                func_14(&vVar2, &(Global_24B2CF.f_16B[iVar0 /*12*/]), 1036831949, 1, bParam2);
            }
            *uParam0 = { vVar2 };
        }
        return 1;
    }
    return 0;
}

int func_48(vector3 vParam0)//Position - 0x372B
{
    float fVar0;
    
    if (Global_24B2CF.f_24C > 0f)
    {
        fVar0 = SYSTEM::VDIST(vParam0, Global_24B2CF.f_249);
        if (fVar0 < Global_24B2CF.f_24C)
        {
            return 1;
        }
    }
    return 0;
}

int func_49(vector3 vParam0, var uParam1)//Position - 0x3764
{
    int iVar0;
    int iVar1;
    
    if (func_51())
    {
        return 0;
    }
    iVar1 = func_50();
    iVar0 = 0;
    while (iVar0 < iVar1)
    {
        if (Global_24B2CF.f_16B[iVar0 /*12*/].f_9 == 1)
        {
            if (func_22(vParam0, &(Global_24B2CF.f_16B[iVar0 /*12*/]), 1008981770, 0, 0))
            {
                *uParam1 = iVar0;
                return 1;
            }
        }
        iVar0++;
    }
    return 0;
}

int func_50()//Position - 0x37C8
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    while (iVar0 < 10)
    {
        if (Global_24B2CF.f_16B[iVar0 /*12*/].f_9)
        {
            iVar1++;
        }
        iVar0++;
    }
    return iVar1;
}

bool func_51()//Position - 0x37FB
{
    return Global_19964F.f_1BB;
}

int func_52(vector3 vParam0)//Position - 0x380A
{
    int iVar0;
    vector3 vVar1;
    
    if (!Global_24B2CF.f_1FE && !Global_24B2CF.f_1FF)
    {
        if (!Global_24B2CF.f_2D.f_13A)
        {
            if (!func_56(unk_0x7C7787D2D7139A85(), 1))
            {
                return 1;
            }
            if (!func_55(vParam0, 1008981770))
            {
                if (!func_13(&vParam0, 0, 0, 0, 1))
                {
                    return 1;
                }
                else if (func_13(&vParam0, 0, 1, 0, 1))
                {
                    return 1;
                }
            }
            else
            {
                iVar0 = func_54(vParam0, 1008981770);
                if (iVar0 > -1)
                {
                    vVar1 = { func_53(&(Global_24B2CF.f_2D[iVar0 /*12*/])) };
                    if (!func_13(&vVar1, 0, 0, 0, 1))
                    {
                        if (!func_13(&vParam0, 0, 0, 0, 1))
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

Vector3 func_53(var uParam0)//Position - 0x38CA
{
    switch (uParam0->f_A)
    {
        case 0:
            return *uParam0;
            break;
        
        case 1:
        case 2:
            return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
            break;
    }
    return *uParam0;
}

int func_54(vector3 vParam0, float fParam1)//Position - 0x3913
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 4)
    {
        if (Global_24B2CF.f_2D[iVar0 /*12*/].f_9)
        {
            if (func_22(vParam0, &(Global_24B2CF.f_2D[iVar0 /*12*/]), fParam1, 0, 0))
            {
                return iVar0;
            }
        }
        iVar0++;
    }
    return -1;
}

int func_55(vector3 vParam0, float fParam1)//Position - 0x395B
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 4)
    {
        if (Global_24B2CF.f_2D[iVar0 /*12*/].f_9)
        {
            if (func_22(vParam0, &(Global_24B2CF.f_2D[iVar0 /*12*/]), fParam1, 0, 0))
            {
                return 1;
            }
        }
        iVar0++;
    }
    return 0;
}

bool func_56(int iParam0, bool bParam1)//Position - 0x39A2
{
    if (Global_1406C0 != 0)
    {
        return func_57(iParam0) != 0;
    }
    return func_42(iParam0, bParam1, 0);
}

int func_57(int iParam0)//Position - 0x39C9
{
    if (func_26(iParam0, 0, 1))
    {
        return Global_24FD09[iParam0 /*421*/].f_1;
    }
    return 0;
}

int func_58(vector3 vParam0, var uParam1)//Position - 0x39EB
{
    int iVar0;
    int iVar1;
    float fVar2;
    float fVar3;
    
    iVar1 = -1;
    fVar2 = 999999.9f;
    if (Global_24B2CF.f_8CC > 0)
    {
        iVar0 = 0;
        while (iVar0 < Global_24B2CF.f_8CC)
        {
            fVar3 = SYSTEM::VDIST(Global_24B2CF.f_8CD[iVar0 /*4*/], vParam0);
            if (fVar3 < fVar2)
            {
                iVar1 = iVar0;
                fVar2 = fVar3;
            }
            iVar0++;
        }
        if (!iVar1 == -1)
        {
            *uParam1 = { Global_24B2CF.f_8CD[iVar1 /*4*/] };
            return 1;
        }
    }
    return 0;
}

int func_59(vector3 vParam0, vector3 vParam1, vector3 vParam2, bool bParam3, bool bParam4)//Position - 0x3A65
{
    func_60(&vParam1, &vParam2);
    if (((!vParam0.x >= vParam1.x || !vParam0.y >= vParam1.y) || !vParam0.x <= vParam2.x) || !vParam0.y <= vParam2.y)
    {
        return 0;
    }
    if (bParam3 && bParam4)
    {
        return 1;
    }
    else if (bParam3)
    {
        if (vParam0.z >= vParam1.z)
        {
            return 1;
        }
    }
    else if (bParam4)
    {
        if (vParam0.z <= vParam2.z)
        {
            return 1;
        }
    }
    else if (vParam0.z >= vParam1.z && vParam0.z <= vParam2.z)
    {
        return 1;
    }
    return 0;
}

void func_60(var uParam0, var uParam1)//Position - 0x3B10
{
    var uVar0;
    
    if (*uParam0 > *uParam1)
    {
        uVar0 = *uParam1;
        *uParam1 = *uParam0;
        *uParam0 = uVar0;
    }
    if (uParam0->f_1 > uParam1->f_1)
    {
        uVar0 = uParam1->f_1;
        uParam1->f_1 = uParam0->f_1;
        uParam0->f_1 = uVar0;
    }
    if (uParam0->f_2 > uParam1->f_2)
    {
        uVar0 = uParam1->f_2;
        uParam1->f_2 = uParam0->f_2;
        uParam0->f_2 = uVar0;
    }
}

int func_61(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x3B72
{
    vector3 vVar0;
    vector3 vVar1;
    
    if (vParam0.x > vParam1.x)
    {
        vVar1.x = vParam0.x;
        vVar0.x = vParam1.x;
    }
    else
    {
        vVar1.x = vParam1.x;
        vVar0.x = vParam0.x;
    }
    if (vParam0.y > vParam1.y)
    {
        vVar1.y = vParam0.y;
        vVar0.y = vParam1.y;
    }
    else
    {
        vVar1.y = vParam1.y;
        vVar0.y = vParam0.y;
    }
    if (vParam0.z > vParam1.z)
    {
        vVar1.z = vParam0.z;
        vVar0.z = vParam1.z;
    }
    else
    {
        vVar1.z = vParam1.z;
        vVar0.z = vParam0.z;
    }
    if (SYSTEM::VMAG(vVar1 - vVar0) > 100f)
    {
        return 1;
    }
    if (fParam2 > 50f)
    {
        return 1;
    }
    return 0;
}

int func_62(float fParam0)//Position - 0x3C1D
{
    if (fParam0 > 50f)
    {
        return 1;
    }
    return 0;
}

int func_63(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x3C35
{
    vector3 vVar0;
    float fVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    bool bVar6;
    
    if (Global_24B2CF.f_9B1.f_1 == 0 && Global_24B2CF.f_9B1 == 0)
    {
        if (uParam1->f_5 && !bParam3)
        {
            switch (unk_0xDBDCB04B849C6FBF(&(Global_24B2CF.f_9B1.f_1)))
            {
                case 0:
                    func_135(uParam1, uParam2);
                    if (!Global_24B2CF.f_9B1.f_2)
                    {
                        if (uParam2->f_7 && Global_24B2CF.f_226.f_7 == 0)
                        {
                            *(uParam0[0 /*3*/]) = { *uParam1 };
                            uParam0->f_10[0] = uParam1->f_3;
                            return 1;
                        }
                        else
                        {
                            if (uParam1->f_15)
                            {
                                *(uParam0[0 /*3*/]) = { uParam1->f_12 };
                            }
                            else
                            {
                                *(uParam0[0 /*3*/]) = { Global_24B2CF.f_998 };
                            }
                            if (uParam1->f_5 && func_11(Global_24B2CF.f_1E4))
                            {
                                if (!Global_24B2CF.f_9B1.f_5)
                                {
                                    Global_24B2CF.f_9B1.f_5 = 1;
                                }
                                else
                                {
                                    func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
                                }
                            }
                            else
                            {
                                func_12(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
                            }
                            uParam0->f_10[0] = unk_0x64A3FFD9D62755C5(0f, 360f);
                            return 1;
                        }
                    }
                    break;
                
                case 1:
                    func_135(uParam1, uParam2);
                    break;
                
                case 2:
                    return 0;
                    break;
                
                case 3:
                    return 0;
                    break;
            }
        }
        else if (unk_0xCA3CE6C3E2469C02())
        {
            if (!unk_0x6C19C7D426DB4A68())
            {
                if (unk_0x50CB75915960EFBC())
                {
                    func_135(uParam1, uParam2);
                    Global_24B2CF.f_9B1.f_1 = unk_0x9C9980CDABB603FC();
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                unk_0x084ECE01D0B0CB2E();
                func_135(uParam1, uParam2);
                if (!Global_24B2CF.f_9B1.f_2)
                {
                    Global_24B2CF.f_9B1.f_5 = 1;
                    return 1;
                }
            }
        }
        else
        {
            return 0;
        }
    }
    if (uParam1->f_5)
    {
        func_132(Global_24B2CF.f_226, &(Global_24B2CF.f_9B1.f_39), &(Global_24B2CF.f_9B1.f_5A));
    }
    if (uParam2->f_7 && !Global_24B2CF.f_9B1.f_4)
    {
        Global_24B2CF.f_9B1.f_4 = 1;
        func_71(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
    }
    iVar4 = 0;
    if (uParam1->f_5)
    {
        iVar5 = 64;
    }
    else
    {
        iVar5 = 32;
    }
    if (Global_24B2CF.f_9B1.f_1 > 0 || Global_24B2CF.f_9B1 > 0)
    {
        if (uParam1->f_5 || unk_0xCA3CE6C3E2469C02())
        {
            iVar2 = 0;
            while (iVar2 < Global_24B2CF.f_9B1.f_1)
            {
                if (iVar4 < iVar5)
                {
                    if (iVar2 <= Global_24B2CF.f_9B1.f_3)
                    {
                        iVar2 = Global_24B2CF.f_9B1.f_3 + 1;
                    }
                    if (iVar2 > (Global_24B2CF.f_9B1.f_1 - 1))
                    {
                        iVar2 = (Global_24B2CF.f_9B1.f_1 - 1);
                    }
                    if (iVar2 < 0)
                    {
                        iVar2 = 0;
                    }
                    if (uParam1->f_5 && !bParam3)
                    {
                        unk_0x58E411DD68E39157(iVar2, &vVar0, &fVar1);
                        fVar1 = (fVar1 * 57.29578f);
                    }
                    else
                    {
                        unk_0x6C9814387B2DAF1B(iVar2, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
                    }
                    if (uParam1->f_5 && !bParam3)
                    {
                        iVar3 = unk_0x4D70026954A647E4(iVar2);
                    }
                    else
                    {
                        unk_0xC7BC2041CBAE1DD5(iVar2, &iVar3);
                    }
                    func_71(vVar0, fVar1, uParam1, uParam2, 0, iVar3);
                    iVar4++;
                    Global_24B2CF.f_9B1.f_3 = iVar2;
                }
                else
                {
                    return 0;
                }
                iVar2++;
            }
        }
        else
        {
            iVar2 = Global_24B2CF.f_9B1.f_1;
        }
        if (Global_24B2CF.f_9B1.f_1 == iVar2)
        {
            if (uParam1->f_5 && Global_24B2CF.f_B3E)
            {
                func_65(&(Global_24B2CF.f_9B1.f_6[0 /*10*/]), &(Global_24B2CF.f_9B1.f_6[1 /*10*/]), &(Global_24B2CF.f_9B1.f_6[2 /*10*/]));
            }
            if (uParam1->f_5 && func_11(Global_24B2CF.f_1E4))
            {
                if (Global_24B2CF.f_9B1.f_2)
                {
                    func_10(uParam0, &(Global_24B2CF.f_9B1.f_6));
                    func_64(*(uParam0[0 /*3*/]));
                    return 1;
                }
                else
                {
                    *(uParam0[0 /*3*/]) = { Global_24B2CF.f_998 };
                    func_12(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
                    uParam0->f_10[0] = unk_0x64A3FFD9D62755C5(0f, 360f);
                    func_64(*(uParam0[0 /*3*/]));
                    return 1;
                }
            }
            else if (Global_24B2CF.f_9B1.f_2)
            {
                func_10(uParam0, &(Global_24B2CF.f_9B1.f_6));
                func_64(*(uParam0[0 /*3*/]));
                return 1;
            }
            else if (uParam1->f_5)
            {
                iVar2 = unk_0xBAC643F143880136(0, Global_24B2CF.f_9B1.f_1);
                unk_0x58E411DD68E39157(iVar2, uParam0[0 /*3*/], &(uParam0->f_10[0]));
                if (!func_30(uParam0[0 /*3*/], 0))
                {
                    uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
                    func_64(*(uParam0[0 /*3*/]));
                    return 1;
                }
                else
                {
                    *(uParam0[0 /*3*/]) = { Global_24B2CF.f_998 };
                    func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
                    uParam0->f_10[0] = unk_0x64A3FFD9D62755C5(0f, 360f);
                    func_64(*(uParam0[0 /*3*/]));
                    return 1;
                }
            }
            else
            {
                *(uParam0[0 /*3*/]) = { Global_24B2CF.f_998 };
                func_12(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
                uParam0->f_10[0] = unk_0x64A3FFD9D62755C5(0f, 360f);
                func_64(*(uParam0[0 /*3*/]));
                return 1;
            }
        }
    }
    else
    {
        *(uParam0[0 /*3*/]) = { Global_24B2CF.f_998 };
        if (uParam1->f_5 && func_11(Global_24B2CF.f_1E4))
        {
            if (!Global_24B2CF.f_9B1.f_5)
            {
                Global_24B2CF.f_9B1.f_5 = 1;
            }
            else
            {
                func_12(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
            }
        }
        else
        {
            if (uParam1->f_F)
            {
                bVar6 = false;
            }
            else
            {
                bVar6 = true;
            }
            func_12(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
        }
        uParam0->f_10[0] = unk_0x64A3FFD9D62755C5(0f, 360f);
        func_64(*(uParam0[0 /*3*/]));
        return 1;
    }
    return 0;
}

void func_64(vector3 vParam0)//Position - 0x41FD
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 2)
    {
        if (iVar0 > 0)
        {
            Global_24B2CF.f_A37[(3 - iVar0) /*3*/] = { Global_24B2CF.f_A37[(3 - iVar0 + 1) /*3*/] };
        }
        iVar0++;
    }
    Global_24B2CF.f_A37[0 /*3*/] = { vParam0 };
}

void func_65(var uParam0, var uParam1, var uParam2)//Position - 0x424D
{
    if (func_11(Global_24B2CF.f_1E4) && func_70() < 4096)
    {
        func_69(uParam0, 0f);
        func_69(uParam1, uParam0->f_2);
        func_69(uParam2, uParam1->f_2);
    }
    else
    {
        func_68(uParam0);
        func_67(uParam2, uParam0->f_4);
        func_66(uParam1, uParam0->f_4, uParam2->f_4);
    }
}

void func_66(var uParam0, vector3 vParam1, vector3 vParam2)//Position - 0x42B2
{
    int iVar0;
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    struct<10> Var5;
    
    fVar1 = -1f;
    Var5.f_2 = 1176256410;
    iVar0 = 0;
    while (iVar0 < 128)
    {
        if (Global_24BE43[iVar0 /*10*/] > 0)
        {
            fVar2 = SYSTEM::VDIST(Global_24BE43[iVar0 /*10*/].f_4, vParam1);
            fVar3 = SYSTEM::VDIST(Global_24BE43[iVar0 /*10*/].f_4, vParam2);
            fVar4 = (fVar2 + fVar3);
            fVar4 = (fVar4 * Global_24BE43[iVar0 /*10*/].f_1);
            if (fVar4 > fVar1)
            {
                fVar1 = fVar4;
                Var5 = { Global_24BE43[iVar0 /*10*/] };
            }
        }
        iVar0++;
    }
    *uParam0 = { Var5 };
}

void func_67(var uParam0, vector3 vParam1)//Position - 0x4351
{
    int iVar0;
    float fVar1;
    float fVar2;
    struct<10> Var3;
    
    fVar1 = -1f;
    Var3.f_2 = 1176256410;
    iVar0 = 0;
    while (iVar0 < 128)
    {
        if (Global_24BE43[iVar0 /*10*/] > 0)
        {
            fVar2 = SYSTEM::VDIST(Global_24BE43[iVar0 /*10*/].f_4, vParam1);
            fVar2 = (fVar2 * Global_24BE43[iVar0 /*10*/].f_1);
            if (fVar2 > fVar1)
            {
                fVar1 = fVar2;
                Var3 = { Global_24BE43[iVar0 /*10*/] };
            }
        }
        iVar0++;
    }
    *uParam0 = { Var3 };
}

void func_68(var uParam0)//Position - 0x43D3
{
    int iVar0;
    float fVar1;
    struct<10> Var2;
    
    fVar1 = -1f;
    Var2.f_2 = 1176256410;
    iVar0 = 0;
    while (iVar0 < 128)
    {
        if (Global_24BE43[iVar0 /*10*/] > 0)
        {
            if (Global_24BE43[iVar0 /*10*/].f_1 > fVar1)
            {
                fVar1 = Global_24BE43[iVar0 /*10*/].f_1;
                Var2 = { Global_24BE43[iVar0 /*10*/] };
            }
        }
        iVar0++;
    }
    *uParam0 = { Var2 };
}

void func_69(var uParam0, float fParam1)//Position - 0x4440
{
    int iVar0;
    float fVar1;
    struct<10> Var2;
    
    fVar1 = 999999.9f;
    Var2.f_2 = 1176256410;
    iVar0 = 0;
    while (iVar0 < 128)
    {
        if (Global_24BE43[iVar0 /*10*/] > 0)
        {
            if (Global_24BE43[iVar0 /*10*/].f_2 < fVar1 && Global_24BE43[iVar0 /*10*/].f_2 > fParam1)
            {
                fVar1 = Global_24BE43[iVar0 /*10*/].f_2;
                Var2 = { Global_24BE43[iVar0 /*10*/] };
            }
        }
        iVar0++;
    }
    *uParam0 = { Var2 };
}

int func_70()//Position - 0x44C3
{
    int iVar0;
    int iVar1;
    
    iVar1 = 0;
    iVar0 = 0;
    while (iVar0 < 128)
    {
        if (Global_24BE43[iVar0 /*10*/] > iVar1)
        {
            iVar1 = Global_24BE43[iVar0 /*10*/];
        }
        iVar0++;
    }
    return iVar1;
}

void func_71(vector3 vParam0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x44FA
{
    float fVar0;
    float fVar1;
    float fVar2;
    float fVar3;
    bool bVar4;
    float fVar5;
    float fVar6;
    var uVar7;
    int iVar8;
    bool bVar9;
    int iVar10;
    int iVar11;
    vector3 vVar12;
    bool bVar13;
    int iVar14;
    vector3 vVar15;
    vector3 vVar16;
    float fVar17;
    int iVar18;
    struct<10> Var19;
    bool bVar20;
    bool bVar21;
    
    iVar10 = 0;
    iVar8 = 0;
    bVar9 = false;
    if (uParam2->f_5)
    {
        if (Global_24B2CF.f_1E4 == 1)
        {
            if (unk_0x01CBD71E072E9F33((Global_24B2CF.f_1FB.f_2 - vParam0.z)) < 25f)
            {
                iVar8++;
            }
        }
        else
        {
            iVar8++;
        }
    }
    else
    {
        iVar8++;
    }
    if (uParam2->f_5)
    {
        if (func_128(unk_0x7C7787D2D7139A85()))
        {
            if (iParam5 == -1)
            {
                bVar9 = true;
            }
            else if (!iParam5 & 1 == 0)
            {
                bVar9 = true;
            }
        }
        else if (iParam5 == -1)
        {
            iVar8 += 2;
        }
        else if (!iParam5 & 1 == 0)
        {
            iVar8 += 2;
        }
    }
    else
    {
        iVar8 += 2;
    }
    if (uParam2->f_5 && uParam2->f_6)
    {
        if (!func_127(vParam0, 1084227584, 1123024896, 0))
        {
            iVar8 += 4;
        }
    }
    else
    {
        iVar8 += 4;
    }
    if (uParam2->f_5)
    {
        if (!unk_0x6830DDA918365885(unk_0x0FA8183DAD2B3203(), vParam0, 65f))
        {
            iVar8 += 8;
            iVar8 += 16;
        }
        else if (!unk_0x6830DDA918365885(unk_0x0FA8183DAD2B3203(), vParam0, 20f))
        {
            iVar8 += 8;
        }
    }
    else
    {
        iVar8 += 8;
        iVar8 += 16;
    }
    if (uParam2->f_5)
    {
        if (!func_126(vParam0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
        {
            iVar8 += 32;
        }
    }
    else
    {
        iVar8 += 32;
    }
    bVar13 = true;
    iVar11 = 0;
    while (iVar11 < 2)
    {
        if (SYSTEM::VMAG(uParam3->f_D[iVar11 /*3*/]) > 0f)
        {
            if (!SYSTEM::VDIST(vParam0, uParam3->f_D[iVar11 /*3*/]) > uParam3->f_14[iVar11])
            {
                bVar13 = false;
            }
        }
        iVar11++;
    }
    if (bVar13)
    {
        if ((SYSTEM::VMAG(uParam3->f_17) > 0f && SYSTEM::VMAG(uParam3->f_1A) > 0f) && uParam3->f_1D > 0f)
        {
            if (unk_0xD36AE666DF05C607(vParam0, uParam3->f_17, uParam3->f_1A, uParam3->f_1D, 0, true))
            {
                bVar13 = false;
            }
        }
    }
    if (bVar13)
    {
        iVar8 += 256;
    }
    if (uParam2->f_5)
    {
        if (func_120(vParam0, fParam1, uParam2->f_F, func_125(1), uParam2->f_10, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
        {
            iVar8 += 64;
            iVar8 += 128;
        }
        else
        {
            iVar10 = Global_24B2CF.f_3;
        }
    }
    else if (!func_117(vParam0, 25f, unk_0x7C7787D2D7139A85(), 1, 1))
    {
        if (uParam2->f_F)
        {
            fVar1 = 3.5f;
        }
        else
        {
            fVar1 = 1f;
        }
        if (!func_114(vParam0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
        {
            iVar8 += 128;
            iVar8 += 64;
        }
        else if (!func_114(vParam0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
        {
            iVar8 += 64;
        }
    }
    if (uParam2->f_5)
    {
        if (!Global_24B2CF.f_2B3)
        {
            vVar12 = { Global_24B2CF.f_1FB };
            if (Global_24B2CF.f_1E4 == 26)
            {
                vVar12 = { Global_24B2CF.f_226.f_12 };
            }
            if (!func_46(vParam0, 0.5f))
            {
                if (func_52(vVar12))
                {
                    if (!func_13(&vParam0, 0, 0, 0, 1) && !func_113(&vParam0, 0))
                    {
                        iVar8 += 512;
                    }
                }
                else if (!func_113(&vParam0, 0))
                {
                    iVar8 += 512;
                }
            }
        }
        else
        {
            iVar8 += 512;
        }
    }
    else if (!func_112(vParam0, 2.5f, 3))
    {
        iVar8 += 512;
    }
    if (uParam2->f_5)
    {
        if (!(func_111(unk_0x7C7787D2D7139A85()) && func_109(unk_0x7C7787D2D7139A85())))
        {
            if (!func_108(&vParam0, &(Global_24B2CF.f_9B1.f_5A), 0, 1065353216))
            {
                iVar8 += 1024;
            }
        }
        else
        {
            iVar8 += 1024;
        }
    }
    else
    {
        iVar8 += 1024;
    }
    if (uParam2->f_5)
    {
        if (!func_109(unk_0x7C7787D2D7139A85()))
        {
            if (!func_107(vParam0, &(Global_24B2CF.f_9B1.f_39), &(Global_24B2CF.f_9B1.f_5A), 1073741824))
            {
                iVar8 += 2048;
            }
        }
        else
        {
            iVar8 += 2048;
        }
    }
    else
    {
        iVar8 += 2048;
    }
    if (func_106(vParam0))
    {
        if (uParam2->f_5)
        {
            if (func_11(Global_24B2CF.f_1E4))
            {
                if (func_55(vParam0, 0.01f))
                {
                    iVar8 += 4096;
                }
            }
            else
            {
                iVar8 += 4096;
            }
        }
        else
        {
            iVar8 += 4096;
        }
    }
    if (uParam2->f_5)
    {
        if (func_105(vParam0))
        {
            iVar8 += 8192;
        }
    }
    else
    {
        iVar8 += 8192;
    }
    if (!Global_24B2CF.f_2D.f_37)
    {
        iVar8 += 16384;
    }
    else if (uParam2->f_5)
    {
        if (!iParam5 & 1 == 0)
        {
            if (unk_0x61837007ACF2F2C2(unk_0x46398409580F98BC(vParam0)))
            {
                iVar8 += 16384;
            }
        }
    }
    else if (!iParam5 & 2 == 0)
    {
        if (unk_0x61837007ACF2F2C2(unk_0x46398409580F98BC(vParam0)))
        {
            iVar8 += 16384;
        }
    }
    if (uParam2->f_5)
    {
        if (!Global_24B2CF.f_2B3)
        {
            if (!func_47(&vParam0, 0, 0))
            {
                iVar8 = (iVar8 + 32768);
            }
        }
        else
        {
            iVar8 = (iVar8 + 32768);
        }
    }
    else
    {
        iVar8 = (iVar8 + 32768);
    }
    if (!func_30(&vParam0, 0))
    {
        iVar8 = (iVar8 + 65536);
    }
    else
    {
        iVar14 = func_54(vParam0, 1008981770);
        if (iVar14 > -1)
        {
            func_104(vParam0, &vVar15, &vVar16, &fVar17);
            if (!func_99(&(Global_24B2CF.f_2D[iVar14 /*12*/]), vVar15, vVar16, fVar17))
            {
                iVar8 = -1;
            }
        }
        else
        {
            iVar8 = -1;
        }
    }
    if (func_33(vParam0, 1056964608))
    {
        iVar8 = -1;
    }
    if (uParam3->f_21)
    {
        if (unk_0x20DAA923606B772E(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
        {
            iVar8 = -1;
        }
    }
    if (uParam3->f_22)
    {
        if (unk_0xF57CE8FF35DF4458(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
        {
            iVar8 = -1;
        }
    }
    if (uParam2->f_5)
    {
    }
    else if (func_98(vParam0, 1, 0, uParam2->f_F, 1060320051, 1086324736, 1065353216, 1088421888))
    {
        iVar8 = 0;
    }
    Var19.f_2 = 1176256410;
    bVar20 = false;
    bVar21 = false;
    if (Global_24B2CF.f_B3E && uParam2->f_5)
    {
        if (iVar8 > 0)
        {
            if (bParam4)
            {
                uParam3->f_4 = 0;
                bVar4 = false;
            }
            else
            {
                bVar4 = true;
            }
            if (uParam2->f_15)
            {
                fVar0 = func_90(vParam0, uParam2->f_12, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
            }
            else
            {
                fVar0 = func_90(vParam0, Global_24B2CF.f_998, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
            }
            if (bVar9)
            {
                fVar0 = (fVar0 * 3f);
            }
            if (func_11(Global_24B2CF.f_1E4) && iVar8 < 4096)
            {
                Var19.f_2 = func_88(vParam0);
            }
            uVar7 = func_77(vParam0, 1, 0, 0, 0, 0);
            Var19.f_4 = { vParam0 };
            Var19.f_7 = fParam1;
            Var19 = iVar8;
            Var19.f_1 = fVar0;
            Var19.f_9 = uVar7;
            func_76(Var19);
            Global_24B2CF.f_9B1.f_2 = 1;
        }
    }
    else
    {
        iVar18 = 0;
        while (iVar18 < 5)
        {
            if (iVar8 >= Global_24B2CF.f_9B1.f_6[iVar18 /*10*/])
            {
                if (uParam2->f_5)
                {
                    if (!bVar20)
                    {
                        if (bParam4)
                        {
                            uParam3->f_4 = 0;
                            bVar4 = false;
                        }
                        else
                        {
                            bVar4 = true;
                        }
                        if (uParam2->f_15)
                        {
                            fVar0 = func_90(vParam0, uParam2->f_12, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
                        }
                        else
                        {
                            fVar0 = func_90(vParam0, Global_24B2CF.f_998, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
                        }
                        if (bVar9)
                        {
                            fVar0 = (fVar0 * 3f);
                        }
                        bVar20 = true;
                    }
                    if ((func_11(Global_24B2CF.f_1E4) && iVar8 == Global_24B2CF.f_9B1.f_6[iVar18 /*10*/]) && iVar8 < 4096)
                    {
                        if (!bVar21)
                        {
                            fVar2 = func_88(vParam0);
                            bVar21 = true;
                        }
                        if (fVar2 < Global_24B2CF.f_9B1.f_6[iVar18 /*10*/].f_2)
                        {
                            Var19.f_4 = { vParam0 };
                            Var19.f_7 = fParam1;
                            Var19 = iVar8;
                            Var19.f_1 = fVar0;
                            Var19.f_2 = fVar2;
                            func_75(Var19, iVar18);
                            Global_24B2CF.f_9B1.f_2 = 1;
                            return;
                        }
                    }
                    else if (iVar8 > Global_24B2CF.f_9B1.f_6[iVar18 /*10*/] || (iVar8 == Global_24B2CF.f_9B1.f_6[iVar18 /*10*/] && fVar0 > Global_24B2CF.f_9B1.f_6[iVar18 /*10*/].f_1))
                    {
                        Var19.f_4 = { vParam0 };
                        Var19.f_7 = fParam1;
                        Var19 = iVar8;
                        Var19.f_1 = fVar0;
                        func_75(Var19, iVar18);
                        Global_24B2CF.f_9B1.f_2 = 1;
                        return;
                    }
                }
                else
                {
                    if (!bVar20)
                    {
                        if (uParam2->f_F)
                        {
                            fVar1 = 3.5f;
                        }
                        else
                        {
                            fVar1 = 1f;
                        }
                        fVar5 = func_73(vParam0, fVar1, 1, 1, 0, -1, 1);
                        fVar6 = func_77(vParam0, 1, 1, 1, 1, 0);
                        if (fVar5 > 15f && fVar6 > 5f)
                        {
                            fVar3 = func_72(fVar5, 0f, 80f, 160f, 1f, 1.2f);
                        }
                        else
                        {
                            fVar3 = func_72(fVar6, 0f, 80f, 160f, 0f, 0.2f);
                        }
                        bVar20 = true;
                    }
                    if (iVar8 > Global_24B2CF.f_9B1.f_6[iVar18 /*10*/] || (iVar8 == Global_24B2CF.f_9B1.f_6[iVar18 /*10*/] && fVar3 > Global_24B2CF.f_9B1.f_6[iVar18 /*10*/].f_3))
                    {
                        Var19.f_4 = { vParam0 };
                        Var19.f_7 = fParam1;
                        Var19 = iVar8;
                        Var19.f_3 = fVar3;
                        func_75(Var19, iVar18);
                        Global_24B2CF.f_9B1.f_2 = 1;
                        return;
                    }
                }
            }
            iVar18++;
        }
    }
}

float func_72(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x4EB7
{
    float fVar0;
    
    if (fParam1 >= fParam3)
    {
        fParam1 = (fParam3 * 0.5f);
    }
    if (fParam0 < fParam1)
    {
        fParam0 = fParam1;
    }
    if (fParam0 > fParam3)
    {
        fParam0 = fParam3;
    }
    if (fParam2 < fParam3 && fParam2 > fParam1)
    {
        if (fParam0 < fParam2)
        {
            fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
        }
        else
        {
            fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
        }
    }
    else
    {
        fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
    }
    return fVar0;
}

float func_73(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x4F55
{
    int iVar0;
    int iVar1;
    bool bVar2;
    float fVar3;
    float fVar4;
    
    bVar2 = false;
    fVar3 = 1E+13f;
    if (iParam2 && !bParam4)
    {
        if (func_26(unk_0x7C7787D2D7139A85(), 1, 1))
        {
            if (!unk_0x260395BA7F0C83CB())
            {
                if (unk_0x93086679C0E859D8(vParam0, fParam1))
                {
                    fVar4 = SYSTEM::VDIST2(vParam0, unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0));
                    if (fVar4 < fVar3)
                    {
                        fVar3 = fVar4;
                        bVar2 = true;
                    }
                }
            }
        }
    }
    iVar0 = 0;
    while (iVar0 < 32)
    {
        iVar1 = iVar0;
        if (func_26(iVar1, 1, 1))
        {
            if (!func_140(iVar1, 0) && unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar1))
            {
                if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x7C7787D2D7139A85()))
                {
                    if (func_74(iVar1) || !bParam6)
                    {
                        if (!bParam4)
                        {
                            if ((iParam3 || (iParam3 == 0 && unk_0xC69A85EEB9CA3B95(iVar1) != unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()))) || unk_0xC69A85EEB9CA3B95(iVar1) == -1)
                            {
                                if (unk_0x08E2E9366FE03102(iVar1, vParam0, fParam1))
                                {
                                    fVar4 = SYSTEM::VDIST2(vParam0, unk_0xACE5E491FC1B0D37(unk_0x23625FE58BACEBFD(iVar1), 0));
                                    if (fVar4 < fVar3)
                                    {
                                        fVar3 = fVar4;
                                        bVar2 = true;
                                    }
                                }
                            }
                        }
                        else if (unk_0xC69A85EEB9CA3B95(iVar1) != iParam5 || unk_0xC69A85EEB9CA3B95(iVar1) == -1)
                        {
                            if (unk_0x08E2E9366FE03102(iVar1, vParam0, fParam1))
                            {
                                fVar4 = SYSTEM::VDIST2(vParam0, unk_0xACE5E491FC1B0D37(unk_0x23625FE58BACEBFD(iVar1), 0));
                                if (fVar4 < fVar3)
                                {
                                    fVar3 = fVar4;
                                    bVar2 = true;
                                }
                            }
                        }
                    }
                }
            }
        }
        iVar0++;
    }
    if (bVar2)
    {
        return SYSTEM::SQRT(fVar3);
    }
    return -1f;
}

int func_74(int iParam0)//Position - 0x50EC
{
    if (unk_0x0A21D8F32B9D5739(unk_0x23625FE58BACEBFD(iParam0)) || Global_24FD09[iParam0 /*421*/].f_F5)
    {
        return 1;
    }
    return 0;
}

void func_75(struct<10> Param0, int iParam1)//Position - 0x5117
{
    struct<10> Var0;
    
    Var0.f_2 = 1176256410;
    Var0 = { Global_24B2CF.f_9B1.f_6[iParam1 /*10*/] };
    Global_24B2CF.f_9B1.f_6[iParam1 /*10*/] = { Param0 };
    if (iParam1 < 4)
    {
        func_75(Var0, iParam1 + 1);
    }
}

void func_76(struct<10> Param0)//Position - 0x5169
{
    int iVar0;
    struct<10> Var1;
    int iVar2;
    float fVar3;
    int iVar4;
    
    Var1.f_2 = 1176256410;
    iVar2 = func_70();
    if (Param0 > iVar2)
    {
        iVar2 = Param0;
    }
    iVar0 = 0;
    while (iVar0 < 128)
    {
        if (Global_24BE43[iVar0 /*10*/] < iVar2)
        {
            Global_24BE43[iVar0 /*10*/] = { Var1 };
        }
        iVar0++;
    }
    if (Param0 < iVar2)
    {
        return;
    }
    iVar0 = 0;
    while (iVar0 < 128)
    {
        if (Global_24BE43[iVar0 /*10*/] == 0)
        {
            Global_24BE43[iVar0 /*10*/] = { Param0 };
            return;
        }
        iVar0++;
    }
    fVar3 = 9999.9f;
    iVar4 = -1;
    iVar0 = 0;
    while (iVar0 < 128)
    {
        if (Global_24BE43[iVar0 /*10*/] > 0)
        {
            if (Global_24BE43[iVar0 /*10*/].f_1 < fVar3)
            {
                fVar3 = Global_24BE43[iVar0 /*10*/].f_1;
                iVar4 = iVar0;
            }
        }
        iVar0++;
    }
    if (iVar4 > -1)
    {
        Global_24BE43[iVar4 /*10*/] = { Param0 };
    }
}

float func_77(vector3 vParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x525D
{
    int iVar0;
    float fVar1;
    float fVar2;
    float fVar3;
    bool bVar4;
    vector3 vVar5;
    vector3 vVar6;
    int iVar7;
    
    fVar3 = 999999.9f;
    bVar4 = false;
    iVar0 = 0;
    while (iVar0 < 32)
    {
        iVar7 = iVar0;
        if (func_26(iVar7, 1, 1) || (iParam5 == 1 && func_26(iVar7, 0, 0)))
        {
            if (!iVar7 == unk_0x7C7787D2D7139A85() || iParam3 == 1)
            {
                bVar4 = false;
                if (bParam1)
                {
                    if (func_79(iVar7))
                    {
                        bVar4 = true;
                    }
                }
                if (bParam2)
                {
                    if (unk_0xC69A85EEB9CA3B95(iVar7) == unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()))
                    {
                        if (!unk_0xC69A85EEB9CA3B95(iVar7) == -1 || !func_56(unk_0x7C7787D2D7139A85(), 1))
                        {
                            bVar4 = true;
                        }
                    }
                }
                if (bVar4)
                {
                    if (unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar7) || !bParam4)
                    {
                        if (func_74(iVar7))
                        {
                            vVar5 = { func_78(iVar7) };
                            if (!iVar7 == unk_0x7C7787D2D7139A85())
                            {
                                vVar6 = { unk_0xFDE21CC0100A418E(unk_0x23625FE58BACEBFD(iVar7)) };
                            }
                            else
                            {
                                vVar6 = { vVar5 };
                            }
                            if (!bParam4)
                            {
                                if (vVar5.z < -100f)
                                {
                                    vVar5.z = vParam0.z;
                                }
                                if (vVar6.z < -100f)
                                {
                                    vVar6.z = vParam0.z;
                                }
                            }
                            fVar1 = unk_0xD34AF93E9BCF12F0(vParam0, vVar5, true);
                            fVar2 = unk_0xD34AF93E9BCF12F0(vParam0, vVar6, true);
                            if (fVar1 < fVar3)
                            {
                                fVar3 = fVar1;
                            }
                            if (fVar2 < fVar3)
                            {
                                fVar3 = fVar2;
                            }
                        }
                    }
                }
            }
        }
        iVar0++;
    }
    return fVar3;
}

Vector3 func_78(int iParam0)//Position - 0x53C0
{
    return unk_0xACE5E491FC1B0D37(unk_0x23625FE58BACEBFD(iParam0), 0);
}

int func_79(int iParam0)//Position - 0x53D3
{
    if (func_26(iParam0, 0, 1))
    {
        if (!func_86(iParam0))
        {
            if (unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iParam0))
            {
                if (!unk_0xC69A85EEB9CA3B95(iParam0) == unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()))
                {
                    if (func_42(unk_0x7C7787D2D7139A85(), 1, 0))
                    {
                        if (!func_85(unk_0xC69A85EEB9CA3B95(iParam0), unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()), 0))
                        {
                            return 1;
                        }
                    }
                    else
                    {
                        return 1;
                    }
                }
                else if (unk_0xC69A85EEB9CA3B95(iParam0) == -1 && unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1)
                {
                    if (!func_42(unk_0x7C7787D2D7139A85(), 1, 0))
                    {
                        if (!func_80(iParam0))
                        {
                            return 1;
                        }
                    }
                    else
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int func_80(int iParam0)//Position - 0x5480
{
    if (func_84(unk_0x7C7787D2D7139A85(), iParam0))
    {
        return 1;
    }
    Global_264397 = { func_83(iParam0) };
    if (unk_0xB8A6A83E8C303720(&Global_264397))
    {
        return 1;
    }
    if (func_81(unk_0x7C7787D2D7139A85(), iParam0))
    {
        return 1;
    }
    return 0;
}

int func_81(int iParam0, int iParam1)//Position - 0x54C7
{
    int iVar0;
    
    iVar0 = func_82(iParam0);
    if (!iVar0 == func_27())
    {
        if (iVar0 == func_82(iParam1))
        {
            return 1;
        }
    }
    return 0;
}

int func_82(int iParam0)//Position - 0x54F2
{
    if (iParam0 != func_27())
    {
        return Global_18DB1B[iParam0 /*614*/].f_B;
    }
    return func_27();
}

struct<13> func_83(int iParam0)//Position - 0x5515
{
    struct<13> Var0;
    
    unk_0x229B5E28267D1B1F(iParam0, &Var0, 13);
    return Var0;
}

int func_84(int iParam0, int iParam1)//Position - 0x552C
{
    if (unk_0xFF6895C150414C31())
    {
        Global_264397 = { func_83(iParam0) };
        Global_2643A4 = { func_83(iParam1) };
        if (unk_0xF10E9BDC0C546560(&Global_264397))
        {
            if (unk_0xF10E9BDC0C546560(&Global_2643A4))
            {
                unk_0x4065D3D900AB253F(&Global_264351, 35, &Global_264397);
                unk_0x4065D3D900AB253F(&Global_264374, 35, &Global_2643A4);
                if (Global_264351 == Global_264374)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int func_85(int iParam0, int iParam1, int iParam2)//Position - 0x5599
{
    if (iParam2 == 1)
    {
        if (iParam0 == iParam1)
        {
            return 1;
        }
        return 0;
    }
    if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
    {
        return 1;
    }
    switch (iParam0)
    {
        case 0:
            switch (iParam1)
            {
                case 0:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 0);
                
                case 1:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 1);
                
                case 2:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 2);
                
                case 3:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 3);
                
                default:
            }
            break;
        
        case 1:
            switch (iParam1)
            {
                case 0:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 4);
                
                case 1:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 5);
                
                case 2:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 6);
                
                case 3:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 7);
                
                default:
            }
            break;
        
        case 2:
            switch (iParam1)
            {
                case 0:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 8);
                
                case 1:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 9);
                
                case 2:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 10);
                
                case 3:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 11);
                
                default:
            }
            break;
        
        case 3:
            switch (iParam1)
            {
                case 0:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 12);
                
                case 1:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 13);
                
                case 2:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 14);
                
                case 3:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 15);
                
                default:
            }
            break;
    }
    return 0;
}

int func_86(int iParam0)//Position - 0x5764
{
    if (func_140(iParam0, 0))
    {
        return 1;
    }
    if (func_87())
    {
        if (iParam0 == unk_0x7C7787D2D7139A85())
        {
            return 1;
        }
    }
    if (unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_C3, 2))
    {
        return 1;
    }
    return 0;
}

bool func_87()//Position - 0x57A6
{
    return unk_0xA2BC31158C8CEFD2(Global_240006, 3);
}

float func_88(vector3 vParam0)//Position - 0x57B7
{
    var uVar0;
    
    return func_89(vParam0, &(Global_24B2CF.f_2D), &uVar0);
}

float func_89(vector3 vParam0, var uParam1, var uParam2)//Position - 0x57CF
{
    int iVar0;
    float fVar1;
    float fVar2;
    int iVar3;
    
    iVar3 = -1;
    fVar2 = 1E+07f;
    iVar0 = 0;
    while (iVar0 < *uParam1)
    {
        if ((uParam1[iVar0 /*12*/])->f_9)
        {
            fVar1 = 0f;
            switch ((uParam1[iVar0 /*12*/])->f_A)
            {
                case 0:
                    fVar1 = SYSTEM::VDIST(*(uParam1[iVar0 /*12*/]), vParam0);
                    fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_24B2CF.f_AA4) * (uParam1[iVar0 /*12*/])->f_8)));
                    break;
                
                case 1:
                case 2:
                    if (vParam0.x < (*uParam1)[iVar0 /*12*/])
                    {
                        fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - vParam0.x));
                    }
                    else if (vParam0.x > (uParam1[iVar0 /*12*/])->f_3)
                    {
                        fVar1 = (fVar1 + (vParam0.x - (uParam1[iVar0 /*12*/])->f_3));
                    }
                    if (vParam0.y < (uParam1[iVar0 /*12*/])->f_1)
                    {
                        fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - vParam0.y));
                    }
                    else if (vParam0.y > (uParam1[iVar0 /*12*/])->f_3.f_1)
                    {
                        fVar1 = (fVar1 + (vParam0.y - (uParam1[iVar0 /*12*/])->f_3.f_1));
                    }
                    if (vParam0.z < (uParam1[iVar0 /*12*/])->f_2)
                    {
                        fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - vParam0.z));
                    }
                    else if (vParam0.z > (uParam1[iVar0 /*12*/])->f_3.f_2)
                    {
                        fVar1 = (fVar1 + (vParam0.z - (uParam1[iVar0 /*12*/])->f_3.f_2));
                    }
                    break;
            }
            if (fVar1 < fVar2)
            {
                fVar2 = fVar1;
                iVar3 = iVar0;
            }
        }
        iVar0++;
    }
    if (fVar2 < 0f)
    {
        fVar2 = 0f;
    }
    *uParam2 = iVar3;
    return fVar2;
}

float func_90(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)//Position - 0x594B
{
    float fVar0;
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    
    fVar1 = 1f;
    if (iParam5 > 0)
    {
        fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(8));
    }
    if (bParam2)
    {
        fVar0 = func_72(SYSTEM::VDIST(vParam0, vParam1), 0f, 0f, 200f, 1f, 0.1f);
        fVar1 = (fVar1 * (fVar0 * 0.95f));
    }
    *uParam6 = 1E+07f;
    fVar4 = func_77(vParam0, 1, 0, 0, 1, 0);
    fVar0 = func_72(fVar4, 0f, func_97(), func_95(), 0f, 0.3f);
    fVar1 = (fVar1 * (fVar0 * 0.95f));
    if (fVar4 < *uParam6)
    {
        fVar4 = fVar4;
    }
    fVar4 = func_93(vParam0);
    fVar0 = func_72(fVar4, 0f, 0f, 60f, 0.5f, 1f);
    fVar1 = (fVar1 * (fVar0 * 0.95f));
    if (fVar4 < *uParam6)
    {
        fVar4 = fVar4;
    }
    fVar5 = 100f;
    if (unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1 && !func_56(unk_0x7C7787D2D7139A85(), 1))
    {
        fVar5 = 1f;
    }
    fVar4 = func_92(vParam0, unk_0x7C7787D2D7139A85(), 0);
    fVar0 = func_72(fVar4, 0f, 0f, fVar5, 0f, 1f);
    fVar1 = (fVar1 * (fVar0 * 0.95f));
    if (fVar4 < *uParam6)
    {
        fVar4 = fVar4;
    }
    if (bParam3)
    {
        if (func_91(vParam0, &fVar2, &fVar3))
        {
            if (fVar2 < 10f)
            {
                fVar2 = 10f;
            }
            if (fVar3 < 0.5f)
            {
                fVar3 = 0.5f;
            }
            fVar0 = func_72(fVar2, 0f, 0f, 200f, 1f, 0.1f);
            fVar0 = (fVar0 + func_72(fVar3, 0f, 0f, 6f, 1f, 0.5f));
            fVar0 = (fVar0 * 0.5f);
            fVar1 = (fVar1 * (fVar0 * 0.85f));
        }
    }
    if (bParam4)
    {
        fVar0 = func_72(SYSTEM::VDIST(Global_24B2CF.f_1FB, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
        fVar1 = (fVar1 * (fVar0 * 0.9f));
    }
    return fVar1;
}

int func_91(vector3 vParam0, var uParam1, var uParam2)//Position - 0x5B32
{
    vector3 vVar0;
    int iVar1;
    var uVar2;
    var uVar3;
    
    iVar1 = unk_0xE4032F705C65597F(vParam0, 1, &uVar3, &uVar2, 1, 3f, 0f);
    if (unk_0xE423ACA28D27845C(iVar1))
    {
        unk_0xE12A5EBA8A362A24(iVar1, &vVar0);
        *uParam1 = SYSTEM::VDIST(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
        *uParam2 = unk_0x01CBD71E072E9F33((vParam0.z - vVar0.z));
        return 1;
    }
    return 0;
}

float func_92(vector3 vParam0, int iParam1, int iParam2)//Position - 0x5B8B
{
    float fVar0;
    float fVar1;
    int iVar2;
    int iVar3;
    
    fVar0 = 999999.9f;
    if (func_26(iParam1, 0, 1))
    {
        iVar2 = 0;
        while (iVar2 < 32)
        {
            if (!iParam1 == iVar2 || iParam2 == 1)
            {
                iVar3 = iVar2;
                if (func_26(iVar3, 0, 1))
                {
                    if (unk_0xC69A85EEB9CA3B95(iVar3) != unk_0xC69A85EEB9CA3B95(iParam1) || (unk_0xC69A85EEB9CA3B95(iVar3) == -1 && unk_0xC69A85EEB9CA3B95(iParam1) == -1))
                    {
                        if (Global_24E477.f_105[iVar2])
                        {
                            fVar1 = SYSTEM::VDIST(Global_24E477.f_83[iVar2 /*3*/], vParam0);
                            if (fVar1 < fVar0)
                            {
                                fVar0 = fVar1;
                            }
                        }
                    }
                }
            }
            iVar2++;
        }
    }
    return fVar0;
}

float func_93(vector3 vParam0)//Position - 0x5C37
{
    float fVar0;
    float fVar1;
    int iVar2;
    vector3 vVar3;
    var uVar4[32];
    int iVar5;
    
    iVar5 = unk_0xB7AEB865047E4CC6(unk_0x0FA8183DAD2B3203(), &uVar4, 2);
    fVar0 = 1E+07f;
    iVar2 = 0;
    while (iVar2 < iVar5)
    {
        if (unk_0xD4B321D9096B01FC(uVar4[iVar2]))
        {
            if (!unk_0xF4B969E0807E76C7(uVar4[iVar2], 0))
            {
                if (func_94(uVar4[iVar2]))
                {
                    vVar3 = { unk_0xACE5E491FC1B0D37(uVar4[iVar2], 1) };
                    fVar1 = unk_0xD34AF93E9BCF12F0(vParam0, vVar3, true);
                    if (fVar1 < fVar0)
                    {
                        fVar0 = fVar1;
                    }
                }
            }
        }
        iVar2++;
    }
    if (Global_24B2CF.f_B6B)
    {
        if (Global_EC945.f_10A > 0)
        {
            iVar2 = 0;
            while (iVar2 < Global_EC945.f_10A)
            {
                if (unk_0xD4B321D9096B01FC(Global_EC945.f_97[iVar2]))
                {
                    if (!unk_0xF4B969E0807E76C7(Global_EC945.f_97[iVar2], 0))
                    {
                        if (func_94(Global_EC945.f_97[iVar2]))
                        {
                            vVar3 = { unk_0xACE5E491FC1B0D37(Global_EC945.f_97[iVar2], 1) };
                            fVar1 = unk_0xD34AF93E9BCF12F0(vParam0, vVar3, true);
                            if (fVar1 < fVar0)
                            {
                                fVar0 = fVar1;
                            }
                        }
                    }
                }
                iVar2++;
            }
        }
    }
    return fVar0;
}

int func_94(int iParam0)//Position - 0x5D57
{
    int iVar0;
    int iVar1;
    
    iVar0 = unk_0x79CDB5CF25B388E3(iParam0);
    switch (unk_0x555CE7C4EC845E9D(iVar0, 1862763509))
    {
        case 3:
        case 5:
            return 1;
            break;
    }
    if (unk_0x24EBBF0CB51DF228(Global_180834[unk_0x7C7787D2D7139A85()]))
    {
        switch (unk_0x555CE7C4EC845E9D(iVar0, Global_180834[unk_0x7C7787D2D7139A85()]))
        {
            case 3:
            case 5:
                return 1;
                break;
            }
    }
    if (Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/] == 0)
    {
        iVar1 = unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85());
        if (iVar1 > -1 && iVar1 < 4)
        {
            if (unk_0x24EBBF0CB51DF228(Global_180712[iVar1]))
            {
                switch (unk_0x555CE7C4EC845E9D(iVar0, Global_180712[iVar1]))
                {
                    case 3:
                    case 5:
                        return 1;
                        break;
                    }
                }
            }
    }
    return 0;
}

float func_95()//Position - 0x5E22
{
    if (func_96())
    {
        if ((unk_0x31337ABC07783F10(Global_24B2CF.f_2D.f_43) || unk_0xDC118E11A4081E9A(Global_24B2CF.f_2D.f_43)) || Global_24B2CF.f_2D.f_43 == joaat("rhino"))
        {
            return 640f;
        }
        else
        {
            return 320f;
        }
    }
    return 160f;
}

int func_96()//Position - 0x5E7E
{
    if (Global_24B2CF.f_2D.f_41 && !Global_24B2CF.f_2D.f_12D)
    {
        if (!func_86(unk_0x7C7787D2D7139A85()))
        {
            return 1;
        }
    }
    return 0;
}

float func_97()//Position - 0x5EB4
{
    if (func_96())
    {
        if ((unk_0x31337ABC07783F10(Global_24B2CF.f_2D.f_43) || unk_0xDC118E11A4081E9A(Global_24B2CF.f_2D.f_43)) || Global_24B2CF.f_2D.f_43 == joaat("rhino"))
        {
            return 320f;
        }
        else
        {
            return 160f;
        }
    }
    return 80f;
}

int func_98(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)//Position - 0x5F10
{
    float fVar0;
    
    fVar0 = iParam4;
    if (bParam3)
    {
        fVar0 = fParam5;
    }
    if ((((fParam5 > 0f && unk_0xF57CE8FF35DF4458(vParam0, fParam5)) || (fVar0 > 0f && unk_0x20DAA923606B772E(vParam0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && unk_0x20E117647697470E(vParam0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && unk_0x20E117647697470E(vParam0, fParam7, 1)))
    {
        return 1;
    }
    return 0;
}

int func_99(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x5F9F
{
    switch (uParam0->f_A)
    {
        case 0:
            if (func_103(*uParam0, uParam0->f_6, vParam1, vParam2, fParam3))
            {
                return 1;
            }
            break;
        
        case 1:
            if (func_102(*uParam0, uParam0->f_3, vParam1, vParam2, fParam3))
            {
                return 1;
            }
            break;
        
        case 2:
            if (func_100(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam2, fParam3))
            {
                return 1;
            }
            break;
    }
    return 0;
}

int func_100(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4, float fParam5)//Position - 0x602B
{
    vector3 vVar0[8];
    int iVar1;
    
    func_101(vParam0, vParam1, fParam2, &vVar0);
    iVar1 = 0;
    while (iVar1 < 8)
    {
        if (!unk_0xD36AE666DF05C607(vVar0[iVar1 /*3*/], vParam3, vParam4, fParam5, 0, true))
        {
            return 0;
        }
        iVar1++;
    }
    return 1;
}

void func_101(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3)//Position - 0x607D
{
    vector3 vVar0;
    vector3 vVar1;
    var uVar2;
    var uVar3;
    
    if (vParam0.z == vParam1.z)
    {
        vParam1.z = (vParam1.z + 0.01f);
    }
    vVar0 = { vParam0 - vParam1 };
    vVar1 = { func_17(vVar0, vVar0.x, vVar0.y, 0f) };
    vVar1 = { vVar1 / FtoV(SYSTEM::VMAG(vVar1)) };
    vVar1 = { vVar1 * FtoV((fParam2 * 0.5f)) };
    if (vParam0.z > vParam1.z)
    {
        uVar2 = vParam1.z;
        uVar3 = vParam0.z;
    }
    else
    {
        uVar2 = vParam0.z;
        uVar3 = vParam1.z;
    }
    *(uParam3[0 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) + vVar1 };
    *(uParam3[1 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) - vVar1 };
    *(uParam3[2 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) - vVar1 };
    *(uParam3[3 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) + vVar1 };
    *(uParam3[4 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) + vVar1 };
    *(uParam3[5 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) - vVar1 };
    *(uParam3[6 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) - vVar1 };
    *(uParam3[7 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) + vVar1 };
}

int func_102(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x61AA
{
    vector3 vVar0[8];
    int iVar1;
    
    vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
    vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam1.z };
    vVar0[2 /*3*/] = { vParam0.x, vParam1.y, vParam1.z };
    vVar0[3 /*3*/] = { vParam0.x, vParam1.y, vParam0.z };
    vVar0[4 /*3*/] = { vParam1.x, vParam0.y, vParam0.z };
    vVar0[5 /*3*/] = { vParam1.x, vParam0.y, vParam1.z };
    vVar0[6 /*3*/] = { vParam1.x, vParam1.y, vParam1.z };
    vVar0[7 /*3*/] = { vParam1.x, vParam1.y, vParam0.z };
    iVar1 = 0;
    while (iVar1 < 8)
    {
        if (!unk_0xD36AE666DF05C607(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, true))
        {
            return 0;
        }
        iVar1++;
    }
    return 1;
}

int func_103(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x6274
{
    vector3 vVar0[4];
    int iVar1;
    
    vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam1, 0f) };
    vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam1), 0f) };
    vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam1) };
    vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam1)) };
    iVar1 = 0;
    while (iVar1 < 4)
    {
        if (!unk_0xD36AE666DF05C607(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, true))
        {
            return 0;
        }
        iVar1++;
    }
    return 1;
}

void func_104(vector3 vParam0, var uParam1, var uParam2, var uParam3)//Position - 0x62F8
{
    int iVar0;
    vector3 vVar1;
    int iVar2;
    
    vVar1 = { vParam0 };
    iVar2 = func_32(vVar1);
    iVar0 = 0;
    while (iVar0 < Global_24CBBE[iVar2])
    {
        if (func_31(vVar1, &(Global_24C6C8[iVar2 /*141*/][iVar0 /*7*/])))
        {
            *uParam1 = { Global_24C6C8[iVar2 /*141*/][iVar0 /*7*/] };
            *uParam2 = { Global_24C6C8[iVar2 /*141*/][iVar0 /*7*/].f_3 };
            *uParam3 = Global_24C6C8[iVar2 /*141*/][iVar0 /*7*/].f_6;
            return;
        }
        iVar0++;
    }
    iVar0 = 0;
    while (iVar0 < Global_24CBBE[8])
    {
        if (func_31(vVar1, &(Global_24C6C8[8 /*141*/][iVar0 /*7*/])))
        {
            *uParam1 = { Global_24C6C8[8 /*141*/][iVar0 /*7*/] };
            *uParam2 = { Global_24C6C8[8 /*141*/][iVar0 /*7*/].f_3 };
            *uParam3 = Global_24C6C8[8 /*141*/][iVar0 /*7*/].f_6;
            return;
        }
        iVar0++;
    }
}

int func_105(vector3 vParam0)//Position - 0x63E6
{
    int iVar0;
    int iVar1;
    
    if (Global_24B2CF.f_2D.f_37)
    {
        if (unk_0x61837007ACF2F2C2(Global_24B2CF.f_2D.f_38))
        {
            if (!unk_0xE785232D8E9EEFBC(vParam0))
            {
                iVar0 = unk_0x46398409580F98BC(vParam0);
                if (unk_0x61837007ACF2F2C2(iVar0))
                {
                    iVar1 = unk_0x719690DF5AFEA8E6(iVar0);
                    if (!iVar1 == Global_24B2CF.f_2D.f_39)
                    {
                        return 0;
                    }
                }
                else
                {
                    return 0;
                }
            }
            else
            {
                return 0;
            }
        }
    }
    return 1;
}

int func_106(vector3 vParam0)//Position - 0x6451
{
    switch (Global_24B2CF.f_9AD)
    {
        case 0:
            return func_143(vParam0, Global_24B2CF.f_998, Global_24B2CF.f_99B, 0, 0);
            break;
        
        case 1:
            return func_59(vParam0, Global_24B2CF.f_9A6, Global_24B2CF.f_9A9, 0, 0);
            break;
        
        case 2:
            return unk_0xD36AE666DF05C607(vParam0, Global_24B2CF.f_9A6, Global_24B2CF.f_9A9, Global_24B2CF.f_9AC, 0, true);
            break;
    }
    return 0;
}

int func_107(vector3 vParam0, var uParam1, var uParam2, float fParam3)//Position - 0x64E3
{
    float fVar0;
    int iVar1;
    vector3 vVar2;
    vector3 vVar3;
    float fVar4;
    
    fVar0 = 0f;
    iVar1 = 0;
    iVar1 = 0;
    while (iVar1 < *uParam1)
    {
        fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
        if (SYSTEM::VDIST(*(uParam1[iVar1 /*4*/]), vParam0) < fVar0)
        {
            return 1;
        }
        iVar1++;
    }
    vVar2 = { 0f, 0f, 0f };
    vVar3 = { 0f, 0f, 0f };
    fVar4 = 0f;
    iVar1 = 0;
    while (iVar1 < *uParam2)
    {
        vVar2 = { *(uParam2[iVar1 /*10*/]) };
        vVar3 = { (uParam2[iVar1 /*10*/])->f_3 };
        fVar4 = (uParam2[iVar1 /*10*/])->f_6;
        if (unk_0xD36AE666DF05C607(vParam0, vVar2, vVar3, fVar4, 0, true))
        {
            return 1;
        }
        iVar1++;
    }
    return 0;
}

int func_108(var uParam0, var uParam1, bool bParam2, float fParam3)//Position - 0x6591
{
    int iVar0;
    vector3 vVar1;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < *uParam1)
    {
        if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
        {
            if (bParam2)
            {
                vVar1 = { *uParam0 };
                func_19(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
                *uParam0 = { vVar1 };
            }
            return 1;
        }
        iVar0++;
    }
    return 0;
}

int func_109(int iParam0)//Position - 0x6604
{
    switch (Global_1406C0)
    {
        case 0:
            if (!func_110(iParam0))
            {
                if (Global_1844AE[iParam0 /*871*/] == 0)
                {
                    return 1;
                }
            }
            break;
    }
    return 0;
}

bool func_110(int iParam0)//Position - 0x663A
{
    return Global_1844AE[iParam0 /*871*/].f_C4 != 0;
}

int func_111(int iParam0)//Position - 0x664F
{
    if (func_42(iParam0, 1, 0))
    {
        if (Global_1844AE[iParam0 /*871*/] != 6)
        {
            return 1;
        }
    }
    return 0;
}

int func_112(vector3 vParam0, float fParam1, int iParam2)//Position - 0x6674
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < iParam2)
    {
        if (SYSTEM::VDIST2(Global_24B2CF.f_A37[iVar0 /*3*/], vParam0) < (fParam1 * fParam1))
        {
            return 1;
        }
        iVar0++;
    }
    return 0;
}

int func_113(var uParam0, bool bParam1)//Position - 0x66B2
{
    var uVar0;
    vector3 vVar1;
    float fVar2;
    
    if (func_48(*uParam0))
    {
        if (bParam1)
        {
            vVar1 = { *uParam0 };
            fVar2 = unk_0x64A3FFD9D62755C5(0.01f, 360f);
            func_19(&vVar1, Global_24B2CF.f_249, Global_24B2CF.f_24C, 1036831949, 0, fVar2);
            if (func_49(vVar1, &uVar0) || func_48(vVar1))
            {
                vVar1 = { *uParam0 };
                func_19(&vVar1, Global_24B2CF.f_249, Global_24B2CF.f_24C, 1036831949, 1, fVar2);
            }
            *uParam0 = { vVar1 };
        }
    }
    return 0;
}

int func_114(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x674A
{
    int iVar0;
    int iVar1;
    float fVar2;
    
    if (iParam2 && !bParam5)
    {
        if (func_26(unk_0x7C7787D2D7139A85(), 1, 1))
        {
            if (!unk_0x260395BA7F0C83CB())
            {
                fVar2 = fParam4;
                if (fParam7 > 0f)
                {
                    fVar2 = fParam7;
                }
                if (unk_0xD34AF93E9BCF12F0(func_115(unk_0x7C7787D2D7139A85()), vParam0, true) <= (fVar2 + fParam1))
                {
                    if (unk_0x93086679C0E859D8(vParam0, fParam1))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    iVar0 = 0;
    while (iVar0 < 32)
    {
        iVar1 = iVar0;
        if (func_26(iVar1, 1, 1))
        {
            if (!func_140(iVar1, 0) && unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar1))
            {
                if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x7C7787D2D7139A85()))
                {
                    if ((func_74(iVar1) || !bParam8) && !Global_24FD09[iVar1 /*421*/].f_103)
                    {
                        fVar2 = fParam4;
                        if (fParam7 > 0f)
                        {
                            if (!unk_0xC69A85EEB9CA3B95(iVar1) == -1)
                            {
                                if (unk_0xC69A85EEB9CA3B95(iVar1) == unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()))
                                {
                                    fVar2 = fParam7;
                                }
                            }
                        }
                        if (!bParam5)
                        {
                            if ((iParam3 || (iParam3 == 0 && unk_0xC69A85EEB9CA3B95(iVar1) != unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()))) || unk_0xC69A85EEB9CA3B95(iVar1) == -1)
                            {
                                if (unk_0xD34AF93E9BCF12F0(func_115(iVar1), vParam0, true) <= (fVar2 + fParam1))
                                {
                                    if (unk_0x08E2E9366FE03102(iVar1, vParam0, fParam1))
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                        else if (unk_0xC69A85EEB9CA3B95(iVar1) != iParam6 || unk_0xC69A85EEB9CA3B95(iVar1) == -1)
                        {
                            if (unk_0xD34AF93E9BCF12F0(func_115(iVar1), vParam0, true) <= (fVar2 + fParam1))
                            {
                                if (unk_0x08E2E9366FE03102(iVar1, vParam0, fParam1))
                                {
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        iVar0++;
    }
    return 0;
}

Vector3 func_115(int iParam0)//Position - 0x6902
{
    int iVar0;
    
    iVar0 = iParam0;
    if ((func_116() && Global_1844AE[iVar0 /*871*/].f_34A) && !func_4(Global_1844AE[iVar0 /*871*/].f_34B))
    {
        return Global_1844AE[iVar0 /*871*/].f_34B;
    }
    return func_78(iParam0);
}

var func_116()//Position - 0x6955
{
    return Global_255E41.f_11;
}

int func_117(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x6963
{
    if (func_119(vParam0, fParam1, iParam2, iParam3, 0) || func_118(vParam0, iParam2, iParam4))
    {
        return 1;
    }
    return 0;
}

int func_118(vector3 vParam0, int iParam1, int iParam2)//Position - 0x6994
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    iVar0 = 0;
    while (iVar0 < 32)
    {
        if (!iParam1 == iVar0 || iParam2 == 1)
        {
            iVar2 = iVar0;
            iVar1 = 0;
            while (iVar1 < 2)
            {
                if (!Global_24E477.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
                {
                    if (func_34(vParam0, Global_24E477.f_1CD[iVar0 /*11*/][iVar1 /*5*/], Global_24E477.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_24E477.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
                    {
                        if (func_26(iVar2, 0, 1) && func_26(iParam1, 0, 1))
                        {
                            return 1;
                        }
                        else
                        {
                            return 1;
                        }
                    }
                }
                iVar1++;
            }
        }
        iVar0++;
    }
    return 0;
}

int func_119(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x6A56
{
    int iVar0;
    int iVar1;
    bool bVar2;
    
    iVar0 = 0;
    while (iVar0 < 32)
    {
        if (!iParam2 == iVar0 || iParam3 == 1)
        {
            iVar1 = iVar0;
            bVar2 = false;
            if (bParam4)
            {
                if (func_26(iVar1, 0, 1) && func_26(iParam2, 0, 1))
                {
                    if (unk_0xC69A85EEB9CA3B95(iVar1) == unk_0xC69A85EEB9CA3B95(iParam2))
                    {
                        bVar2 = true;
                    }
                }
            }
            if (!bVar2)
            {
                if (func_26(iVar1, 0, 1) && func_26(iParam2, 0, 1))
                {
                    if (Global_24E477.f_105[iVar0])
                    {
                        if (SYSTEM::VDIST(Global_24E477.f_83[iVar0 /*3*/], vParam0) < fParam1)
                        {
                            return 1;
                        }
                    }
                    else if (SYSTEM::VDIST(func_78(iVar1), vParam0) < 1f)
                    {
                        return 1;
                    }
                }
                else if (Global_24E477.f_105[iVar0])
                {
                    if (SYSTEM::VDIST(Global_24E477.f_83[iVar0 /*3*/], vParam0) < fParam1)
                    {
                        return 1;
                    }
                }
                else if (func_26(iVar1, 0, 1))
                {
                    if (SYSTEM::VDIST(func_78(iVar1), vParam0) < 1f)
                    {
                        return 1;
                    }
                }
            }
        }
        iVar0++;
    }
    return 0;
}

int func_120(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)//Position - 0x6B73
{
    Global_24B2CF.f_3 = 0;
    if (!func_117(vParam0, 0.5f, unk_0x7C7787D2D7139A85(), 0, 0))
    {
        Global_24B2CF.f_3++;
        if (bParam3)
        {
            if (func_171(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
            {
                Global_24B2CF.f_3 = (Global_24B2CF.f_3 + Global_24B2CF.f_2);
                if (!func_124(vParam0, fParam10))
                {
                    Global_24B2CF.f_3++;
                    if (!func_33(vParam0, 1056964608))
                    {
                        Global_24B2CF.f_3++;
                        return 1;
                    }
                }
            }
            else
            {
                Global_24B2CF.f_3 = (Global_24B2CF.f_3 + Global_24B2CF.f_2);
            }
        }
        else if (!bParam2)
        {
            if (func_171(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
            {
                Global_24B2CF.f_3 = (Global_24B2CF.f_3 + Global_24B2CF.f_2);
                if (!func_124(vParam0, fParam10))
                {
                    Global_24B2CF.f_3++;
                    if (!func_121(vParam0, fParam1, fParam7, fParam8, 1084227584))
                    {
                        Global_24B2CF.f_3++;
                        if (!func_33(vParam0, 1056964608))
                        {
                            Global_24B2CF.f_3++;
                            return 1;
                        }
                    }
                }
            }
            else
            {
                Global_24B2CF.f_3 = (Global_24B2CF.f_3 + Global_24B2CF.f_2);
            }
        }
        else if (func_171(vParam0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, -1, 1, 0, 0, fParam11, bParam12, 0))
        {
            Global_24B2CF.f_3 = (Global_24B2CF.f_3 + Global_24B2CF.f_2);
            if (!func_124(vParam0, fParam10))
            {
                Global_24B2CF.f_3++;
                if (!func_121(vParam0, fParam1, fParam7, fParam8, fParam9))
                {
                    Global_24B2CF.f_3++;
                    if (!func_33(vParam0, 1056964608))
                    {
                        Global_24B2CF.f_3++;
                        return 1;
                    }
                }
            }
        }
        else
        {
            Global_24B2CF.f_3 = (Global_24B2CF.f_3 + Global_24B2CF.f_2);
        }
    }
    return 0;
}

int func_121(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x6DB3
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    while (iVar0 < 32)
    {
        iVar1 = iVar0;
        if (!unk_0x7C7787D2D7139A85() == iVar1)
        {
            if ((func_26(iVar1, 1, 1) && func_74(iVar1)) && unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar1))
            {
                if (!func_123(unk_0x7C7787D2D7139A85(), iVar1, -2, 0))
                {
                    if (func_122(func_78(iVar1), vParam0, fParam1, fParam2, fParam3, fParam4))
                    {
                        return 1;
                    }
                }
            }
        }
        iVar0++;
    }
    return 0;
}

bool func_122(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x6E32
{
    vector3 vVar0;
    vector3 vVar1;
    
    fParam2 = (fParam2 * -1f);
    fParam2 = (fParam2 + 360f);
    vVar0.x = SYSTEM::SIN(fParam2);
    vVar0.y = SYSTEM::COS(fParam2);
    vVar0.z = 0f;
    vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
    vVar0 = { vVar0 * Vector(fParam3, fParam3, fParam3) };
    vVar1 = { vParam1 + vVar0 };
    vVar1.z = vParam1.z;
    vVar1.z = (vVar1.z + fParam5);
    vParam1.z = (vParam1.z + fParam5);
    return unk_0xD36AE666DF05C607(vParam0, vParam1, vVar1, fParam4, 0, true);
}

bool func_123(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6EBE
{
    if (iParam2 == -2)
    {
        if (iParam3 == 0)
        {
            if (unk_0xC69A85EEB9CA3B95(iParam0) == -1 && unk_0xC69A85EEB9CA3B95(iParam1) == -1)
            {
                return 0;
            }
        }
        return unk_0xC69A85EEB9CA3B95(iParam0) == unk_0xC69A85EEB9CA3B95(iParam1);
    }
    else
    {
        if (iParam3 == 0)
        {
            if (unk_0xC69A85EEB9CA3B95(iParam0) == -1 && iParam2 == -1)
            {
                return 0;
            }
        }
        return unk_0xC69A85EEB9CA3B95(iParam0) == iParam2;
    }
    return unk_0xC69A85EEB9CA3B95(iParam0) == iParam2;
}

int func_124(vector3 vParam0, float fParam1)//Position - 0x6F36
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    while (iVar0 < 32)
    {
        iVar1 = iVar0;
        if ((func_26(iVar1, 1, 1) && func_74(iVar1)) && unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar1))
        {
            if ((unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1 && unk_0xC69A85EEB9CA3B95(iVar1) == -1) && !func_56(unk_0x7C7787D2D7139A85(), 1))
            {
                return 0;
            }
            else if ((unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1 && !unk_0x7C7787D2D7139A85() == iVar1) || !func_123(unk_0x7C7787D2D7139A85(), iVar1, -2, 0))
            {
                if (SYSTEM::VDIST(vParam0, func_78(iVar1)) < fParam1)
                {
                    return 1;
                }
            }
        }
        iVar0++;
    }
    return 0;
}

int func_125(int iParam0)//Position - 0x6FF2
{
    if ((Global_24B2CF.f_1E4 == 9 || Global_24B2CF.f_1E4 == 9) || (Global_24B2CF.f_1E4 == 15 && iParam0 == 1))
    {
        return 1;
    }
    return 0;
}

int func_126(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x7035
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    while (iVar0 < 32)
    {
        iVar1 = iVar0;
        if ((iParam6 == 1 && unk_0x7C7787D2D7139A85() != iVar1) || iParam6 == 0)
        {
            if (func_26(iVar1, bParam2, bParam3))
            {
                if (unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar1))
                {
                    if (!bParam5 || (!unk_0x2BF5E63466422C38(unk_0x23625FE58BACEBFD(iVar1)) && func_74(iVar1)))
                    {
                        if ((!bParam4 || (bParam4 == 1 && unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) != unk_0xC69A85EEB9CA3B95(iVar1))) || unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1)
                        {
                            if (((unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1 && iParam7) && bParam4) && func_80(iVar1))
                            {
                            }
                            else if (unk_0xD4B321D9096B01FC(unk_0x23625FE58BACEBFD(iVar1)))
                            {
                                if (unk_0xD34AF93E9BCF12F0(func_78(iVar1), vParam0, true) < fParam1)
                                {
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        iVar0++;
    }
    return 0;
}

int func_127(vector3 vParam0, float fParam1, int iParam2, float fParam3)//Position - 0x7131
{
    int iVar0;
    int iVar1;
    float fVar2;
    int iVar3;
    
    iVar3 = unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85());
    if (!iVar3 == -1)
    {
        iVar0 = 0;
        while (iVar0 < 32)
        {
            iVar1 = iVar0;
            if (func_26(iVar1, 1, 1))
            {
                if ((!func_140(iVar1, 0) && unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar1)) && iVar1 != unk_0x7C7787D2D7139A85())
                {
                    fVar2 = iParam2;
                    if (fParam3 > 0f)
                    {
                        if (!unk_0xC69A85EEB9CA3B95(iVar1) == -1)
                        {
                            if (unk_0xC69A85EEB9CA3B95(iVar1) == unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()))
                            {
                                fVar2 = fParam3;
                            }
                        }
                    }
                    if (unk_0xC69A85EEB9CA3B95(iVar1) == iVar3)
                    {
                        if (unk_0xD34AF93E9BCF12F0(func_78(iVar1), vParam0, true) <= (fVar2 + fParam1))
                        {
                            if (unk_0x08E2E9366FE03102(iVar1, vParam0, fParam1))
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
            iVar0++;
        }
    }
    return 0;
}

int func_128(int iParam0)//Position - 0x71F6
{
    if (((func_56(iParam0, 1) || func_131(iParam0)) || func_130(iParam0, 0)) || func_129(iParam0))
    {
        return 1;
    }
    return 0;
}

int func_129(int iParam0)//Position - 0x7232
{
    if (!func_26(iParam0, 0, 1))
    {
        return 0;
    }
    return Global_1844AE[iParam0 /*871*/].f_23;
}

int func_130(int iParam0, int iParam1)//Position - 0x7255
{
    if (Global_18DB1B[iParam0 /*614*/].f_B.f_21 != -1 || (iParam1 && Global_18DB1B[iParam0 /*614*/].f_B.f_20 != -1))
    {
        return 1;
    }
    return 0;
}

int func_131(int iParam0)//Position - 0x7290
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        return Global_18DB1B[iVar0 /*614*/] != -1;
    }
    return 0;
}

void func_132(vector3 vParam0, var uParam1, var uParam2)//Position - 0x72B1
{
    int iVar0;
    int iVar1;
    int iVar2;
    struct<4> Var3;
    struct<8> Var4;
    vector3 vVar5;
    vector3 vVar6;
    
    iVar0 = 0;
    while (iVar0 < *uParam1)
    {
        *(uParam1[iVar0 /*4*/]) = { Var3 };
        iVar0++;
    }
    iVar0 = 0;
    while (iVar0 < *uParam2)
    {
        *(uParam2[iVar0 /*10*/]) = { Var4 };
        iVar0++;
    }
    iVar0 = 0;
    iVar1 = 0;
    iVar1 = 0;
    while (iVar1 < Global_1403FD)
    {
        iVar0 = 0;
        while (iVar0 < *uParam1)
        {
            if (!unk_0xA2BC31158C8CEFD2(Global_2401A9[iVar1 /*26*/].f_C, 11))
            {
                if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2401A9[iVar1 /*26*/].f_3, vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
                {
                    Var3 = { Global_2401A9[iVar1 /*26*/].f_3 };
                    Var3.f_3 = Global_2401A9[iVar1 /*26*/].f_6.f_2;
                    func_134(&Var3, uParam1, iVar0);
                    iVar0 = *uParam1;
                }
            }
            iVar0++;
        }
        iVar1++;
    }
    iVar0 = 0;
    iVar1 = 0;
    iVar1 = 0;
    while (iVar1 < 15)
    {
        iVar0 = 0;
        while (iVar0 < *uParam1)
        {
            if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_40001.f_176F[iVar1 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
            {
                Var3 = { Global_40001.f_176F[iVar1 /*3*/] };
                Var3.f_3 = 3f;
                func_134(&Var3, uParam1, iVar0);
                iVar0 = *uParam1;
            }
            iVar0++;
        }
        iVar1++;
    }
    iVar0 = 0;
    iVar1 = 0;
    iVar2 = 0;
    iVar1 = 0;
    while (iVar1 < 14)
    {
        iVar2 = 0;
        while (iVar2 < 6)
        {
            iVar0 = 0;
            while (iVar0 < *uParam1)
            {
                if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_40001.f_179D[iVar1 /*19*/][iVar2 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
                {
                    Var3 = { Global_40001.f_179D[iVar1 /*19*/][iVar2 /*3*/] };
                    Var3.f_3 = 3f;
                    func_134(&Var3, uParam1, iVar0);
                    iVar0 = *uParam1;
                }
                iVar0++;
            }
            iVar2++;
        }
        iVar1++;
    }
    iVar0 = 0;
    iVar1 = 0;
    iVar1 = 0;
    while (iVar1 < Global_1403DA)
    {
        iVar0 = 0;
        while (iVar0 < *uParam2)
        {
            vVar5 = { Global_140131[iVar1 /*8*/].f_1 + Global_140131[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
            vVar6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
            if (SYSTEM::VMAG(*(uParam2[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(vVar5, vParam0) < SYSTEM::VDIST(vVar6, vParam0))
            {
                Var4 = { Global_140131[iVar1 /*8*/].f_1 };
                Var4.f_3 = { Global_140131[iVar1 /*8*/].f_4 };
                Var4.f_6 = Global_140131[iVar1 /*8*/].f_7;
                Var4.f_7 = { Global_240065[iVar1 /*3*/] };
                func_133(&Var4, uParam2, iVar0);
                iVar0 = *uParam2;
            }
            iVar0++;
        }
        iVar1++;
    }
}

void func_133(var uParam0, var uParam1, int iParam2)//Position - 0x75D4
{
    Global_24CFAB = { *(uParam1[iParam2 /*10*/]) };
    *(uParam1[iParam2 /*10*/]) = { *uParam0 };
    if (iParam2 + 1 < *uParam1)
    {
        func_133(&Global_24CFAB, uParam1, iParam2 + 1);
    }
}

void func_134(var uParam0, var uParam1, int iParam2)//Position - 0x7612
{
    Global_24CFA7 = { *(uParam1[iParam2 /*4*/]) };
    *(uParam1[iParam2 /*4*/]) = { *uParam0 };
    if (iParam2 + 1 < *uParam1)
    {
        func_134(&Global_24CFA7, uParam1, iParam2 + 1);
    }
}

void func_135(var uParam0, var uParam1)//Position - 0x764C
{
    int iVar0;
    vector3 vVar1;
    float fVar2;
    
    if (Global_24B2CF.f_8CC > 0)
    {
        iVar0 = 0;
        while (iVar0 < Global_24B2CF.f_8CC)
        {
            if (func_136(Global_24B2CF.f_8CD[iVar0 /*4*/], uParam0))
            {
                fVar2 = Global_24B2CF.f_8CD[iVar0 /*4*/].f_3;
                if (SYSTEM::VMAG(*uParam1) > 0.01f)
                {
                    vVar1 = { *uParam1 - Global_24B2CF.f_8CD[iVar0 /*4*/] };
                    fVar2 = unk_0x3BA2E0B9E14A8025(vVar1.x, vVar1.y);
                }
                func_71(Global_24B2CF.f_8CD[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, -1);
                Global_24B2CF.f_9B1++;
            }
            iVar0++;
        }
    }
    if (uParam0->f_5 && Global_24B2CF.f_B3E)
    {
        func_65(&(Global_24B2CF.f_9B1.f_6[0 /*10*/]), &(Global_24B2CF.f_9B1.f_6[1 /*10*/]), &(Global_24B2CF.f_9B1.f_6[2 /*10*/]));
    }
}

int func_136(vector3 vParam0, var uParam1)//Position - 0x7739
{
    switch (uParam1->f_7)
    {
        case 0:
            return func_23(vParam0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
        
        case 1:
        case 2:
            return func_23(vParam0, uParam1->f_7, uParam1->f_8, uParam1->f_B, uParam1->f_E);
        
        default:
    }
    return 0;
}

void func_137(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)//Position - 0x7796
{
    float fVar0;
    
    func_60(&vParam0, &vParam1);
    fVar0 = (vParam1.x - vParam0.x);
    *uParam2 = (vParam0.x + (fVar0 * 0.5f));
    uParam2->f_1 = vParam0.y;
    uParam2->f_2 = vParam0.z;
    *uParam3 = *uParam2;
    uParam3->f_1 = vParam1.y;
    uParam3->f_2 = vParam1.z;
    *uParam4 = (fVar0 * 0.5f);
}

var func_138()//Position - 0x77EC
{
    return Global_14010B.f_4;
}

void func_139(var uParam0, var uParam1)//Position - 0x77FA
{
    func_178();
    func_170(uParam0, uParam1);
}

bool func_140(int iParam0, int iParam1)//Position - 0x780E
{
    bool bVar0;
    
    if (iParam0 == unk_0x7C7787D2D7139A85())
    {
        bVar0 = func_141(-1, 0) == 8;
    }
    else
    {
        bVar0 = Global_1844AE[iParam0 /*871*/].f_D3 == 8;
    }
    if (iParam1 == 1)
    {
        if (unk_0xD56C8C2B75BF9665(iParam0))
        {
            bVar0 = unk_0xC69A85EEB9CA3B95(iParam0) == 8;
        }
    }
    return bVar0;
}

int func_141(int iParam0, bool bParam1)//Position - 0x7859
{
    int iVar0;
    int iVar1;
    
    iVar1 = iParam0;
    if (iVar1 == -1)
    {
        iVar1 = func_142();
    }
    if (Global_140855[iVar1] == 1)
    {
        if (bParam1)
        {
        }
        iVar0 = 8;
    }
    else
    {
        iVar0 = Global_1407E3[iVar1];
        if (bParam1)
        {
        }
    }
    return iVar0;
}

int func_142()//Position - 0x789A
{
    return Global_1407E9;
}

bool func_143(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x78A6
{
    if (bParam3 && bParam4)
    {
        vParam0.z = 0f;
        vParam1.z = 0f;
        return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
    }
    else if (bParam3)
    {
        if (vParam0.z > vParam1.z)
        {
            vParam0.z = vParam1.z;
        }
        return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
    }
    else if (bParam4)
    {
        if (vParam0.z < vParam1.z)
        {
            vParam0.z = vParam1.z;
        }
        return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
    }
    return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
}

void func_144(var uParam0, var uParam1, var uParam2)//Position - 0x7959
{
    int iVar0;
    
    iVar0 = 0;
    if (Global_24B2CF.f_6D0 > 0)
    {
        iVar0 = 0;
        while (func_166(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
        {
            iVar0++;
        }
        if (iVar0 == 2)
        {
            uParam2->f_21 = 0;
        }
        else
        {
            return;
        }
    }
    iVar0 = 0;
    while (func_145(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
    {
        iVar0++;
    }
}

int func_145(var uParam0, var uParam1, var uParam2)//Position - 0x79C8
{
    int iVar0;
    vector3 vVar1;
    float fVar2;
    int iVar3;
    var uVar4;
    var uVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    bool bVar9;
    bool bVar10;
    float fVar11;
    float fVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    bool bVar16;
    int iVar17;
    bool bVar18;
    int iVar19;
    float fVar20;
    int iVar21;
    int iVar22;
    float fVar23;
    int iVar24;
    vector3 vVar25;
    var uVar26;
    vector3 vVar27;
    float fVar28;
    bool bVar29;
    
    iVar0 = 0;
    if (!SYSTEM::VMAG(uParam2->f_23) > 0f)
    {
        uParam2->f_23 = { *uParam0 };
    }
    if (uParam2->f_F)
    {
        if (func_45(uParam2->f_23, uParam0, &(uParam2->f_26), &(uParam2->f_2D), 1, 1))
        {
            uParam2->f_6 = 9999.9f;
            uParam2->f_7 = 9999.9f;
        }
    }
    if (uParam2->f_33)
    {
        uParam2->f_6 = 9999.9f;
    }
    if (uParam2->f_30)
    {
        if (func_165(uParam0, 1))
        {
        }
    }
    if (uParam0->f_2 < -80f)
    {
        uParam2->f_6 = 9999.9f;
        uParam2->f_7 = 9999.9f;
    }
    iVar3 = 0;
    iVar8 = 1;
    if (uParam2->f_B)
    {
        iVar3 += 2;
        iVar3++;
        iVar8 = 0;
    }
    else if (uParam2->f_A == 0 || (uParam2->f_21 > 0 && uParam2->f_10))
    {
        iVar3++;
        iVar8 = 0;
    }
    iVar3 += 4;
    fVar11 = 3f;
    fVar12 = 5f;
    switch (uParam2->f_21)
    {
        case 0:
            fVar11 = 3f;
            fVar12 = 5f;
            break;
        
        case 1:
            fVar11 = 2.75f;
            fVar12 = 7.5f;
            break;
        
        default:
            fVar11 = 2.5f;
            fVar12 = 10f;
            break;
    }
    iVar13 = 0;
    Global_24CFB5.f_A2 = 0;
    Global_24CFB5.f_A3 = 0;
    Global_24CFB5.f_A4 = -99;
    Global_24CFB5.f_A5 = { 0f, 0f, 0f };
    iVar14 = 0;
    while (iVar14 < 40)
    {
        Global_24CFB5[iVar14 /*3*/] = { 0f, 0f, 0f };
        Global_24CFB5.f_79[iVar14] = 0f;
        iVar14++;
    }
    iVar15 = 1;
    if (func_39(uParam2->f_22) != 0)
    {
        iVar15 = 3;
        uParam2->f_6 = 9999.9f;
        uParam2->f_7 = 9999.9f;
        uParam2->f_12 = 0;
    }
    while (true)
    {
        iVar6 = unk_0xE4032F705C65597F(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
        if (unk_0xE423ACA28D27845C(iVar6))
        {
            unk_0xE12A5EBA8A362A24(iVar6, &vVar1);
            bVar10 = false;
            if (Global_24CFB5.f_A4 == iVar6)
            {
                bVar10 = true;
            }
            Global_24CFB5.f_A5 = { vVar1 };
            if (((uParam2->f_A || uParam2->f_21 > 0) || !unk_0x28E9B7A7650AD4EB(iVar6)) || unk_0x1CEDFF4388E20C4B(iVar6))
            {
                unk_0xB65B731FF076DFC4(vVar1, &uVar4, &uVar5);
                if (SYSTEM::VDIST(vVar1, uParam2->f_23) > uParam2->f_4)
                {
                    if (!func_113(&vVar1, 0))
                    {
                        if ((uParam2->f_D || uVar5 & 64 == 0) || uParam2->f_21 == 1)
                        {
                            if (uParam2->f_E || uVar5 & 16 == 0)
                            {
                                if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
                                {
                                    if (!func_164(vVar1))
                                    {
                                        vVar1 = { func_160(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_B, uParam2->f_22, &bVar9, bVar10, 1, uParam2->f_33) };
                                        if (SYSTEM::VMAG(vVar1) > 0f)
                                        {
                                            if (!func_33(vVar1, 5f))
                                            {
                                                if (vVar1.z >= (uParam2->f_23.f_2 - uParam2->f_7) || uParam2->f_21 >= 2)
                                                {
                                                    if (vVar1.z <= (uParam2->f_23.f_2 + uParam2->f_6) || uParam2->f_21 >= 2)
                                                    {
                                                        if (func_159(vVar1, uParam2))
                                                        {
                                                            if ((uParam2->f_30 && !func_165(&vVar1, 0)) || uParam2->f_30 == 0)
                                                            {
                                                                bVar16 = true;
                                                                if (!bVar10)
                                                                {
                                                                    if (bVar9)
                                                                    {
                                                                        iVar0 = (iVar0 + -1);
                                                                        bVar16 = false;
                                                                    }
                                                                }
                                                                if (SYSTEM::VMAG(vVar1) > 0f)
                                                                {
                                                                    if (((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar1.x, vVar1.y, 0f, uParam2->f_23, uParam2->f_23.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_21 >= 2)
                                                                    {
                                                                        if ((uParam2->f_C && !func_155(vVar1, fVar2, uParam2->f_22, unk_0x7C7787D2D7139A85(), 0, uParam2->f_38)) || !uParam2->f_C)
                                                                        {
                                                                            if (!uParam2->f_F || !func_45(uParam2->f_23, &vVar1, &(uParam2->f_26), &(uParam2->f_2D), 0, 1))
                                                                            {
                                                                                if (uParam2->f_8)
                                                                                {
                                                                                    iVar17 = uParam2->f_1F;
                                                                                    bVar18 = true;
                                                                                    iVar19 = 1;
                                                                                    fVar20 = uParam2->f_31;
                                                                                    if (!uParam2->f_37)
                                                                                    {
                                                                                        iVar17 = 0;
                                                                                        bVar18 = false;
                                                                                        iVar19 = 0;
                                                                                        fVar20 = 1f;
                                                                                    }
                                                                                    else if (uParam2->f_11)
                                                                                    {
                                                                                        iVar17 = 0;
                                                                                        bVar18 = false;
                                                                                        iVar19 = 0;
                                                                                        if (uParam2->f_21 == 1)
                                                                                        {
                                                                                            fVar20 = (fVar20 * 0.375f);
                                                                                        }
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                        bVar18 = true;
                                                                                        iVar19 = 1;
                                                                                        if (uParam2->f_1C)
                                                                                        {
                                                                                            if (uParam2->f_21 == 1)
                                                                                            {
                                                                                                fVar20 = (fVar20 * 0.375f);
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                    iVar21 = 0;
                                                                                    if (!func_154(vVar1, fVar2, uParam2->f_22))
                                                                                    {
                                                                                        if (uParam2->f_3 > 7f)
                                                                                        {
                                                                                            if (func_171(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_3A, -1, 1, uParam2->f_3, 0, 0, 0, 0))
                                                                                            {
                                                                                                iVar21 = 1;
                                                                                            }
                                                                                        }
                                                                                        else if (func_171(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_3A, -1, 1, 0f, 0, 0, 0, 0) && !func_152(vVar1, fVar2, uParam2->f_22, 1, 1, 0, 0, 0, 0))
                                                                                        {
                                                                                            iVar21 = 1;
                                                                                        }
                                                                                    }
                                                                                    if (iVar21 || uParam2->f_21 >= 2)
                                                                                    {
                                                                                        if (((uParam2->f_1D || uParam2->f_1E) || uParam2->f_34) || uParam2->f_21 >= 2)
                                                                                        {
                                                                                            fVar23 = 0f;
                                                                                            if (uParam2->f_34)
                                                                                            {
                                                                                                iVar22 = func_151(vVar1, uParam2->f_36, &fVar23);
                                                                                            }
                                                                                            if (!uParam2->f_34 || (uParam2->f_34 && iVar22 <= uParam2->f_35))
                                                                                            {
                                                                                                if (uParam2->f_34)
                                                                                                {
                                                                                                    if (iVar22 < uParam2->f_35)
                                                                                                    {
                                                                                                        iVar14 = 0;
                                                                                                        while (iVar14 < Global_24CFB5.f_A2)
                                                                                                        {
                                                                                                            Global_24CFB5[iVar14 /*3*/] = { 0f, 0f, 0f };
                                                                                                            Global_24CFB5.f_79[iVar14] = 0f;
                                                                                                            iVar14++;
                                                                                                        }
                                                                                                        Global_24CFB5.f_A2 = 0;
                                                                                                        uParam2->f_35 = iVar22;
                                                                                                    }
                                                                                                }
                                                                                                if (uParam2->f_1E)
                                                                                                {
                                                                                                    if (Global_24CFB5.f_A2 == 0)
                                                                                                    {
                                                                                                        Global_24CFB5[0 /*3*/] = { vVar1 };
                                                                                                        Global_24CFB5.f_79[0] = fVar2;
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                        iVar14 = 0;
                                                                                                        while (iVar14 < Global_24CFB5.f_A2 + 1)
                                                                                                        {
                                                                                                            if (iVar14 < 40)
                                                                                                            {
                                                                                                                if (SYSTEM::VDIST2(vVar1, uParam2->f_23) < SYSTEM::VDIST2(Global_24CFB5[iVar14 /*3*/], uParam2->f_23))
                                                                                                                {
                                                                                                                    func_150(vVar1, fVar2, iVar14);
                                                                                                                    iVar14 = Global_24CFB5.f_A2 + 1;
                                                                                                                }
                                                                                                            }
                                                                                                            iVar14++;
                                                                                                        }
                                                                                                    }
                                                                                                    Global_24CFB5.f_A2++;
                                                                                                    if (Global_24CFB5.f_A2 >= 5)
                                                                                                    {
                                                                                                        if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
                                                                                                        {
                                                                                                            iVar0 = 100;
                                                                                                        }
                                                                                                        else if (Global_24CFB5.f_A2 == 40)
                                                                                                        {
                                                                                                            iVar0 = 100;
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                    Global_24CFB5[Global_24CFB5.f_A2 /*3*/] = { vVar1 };
                                                                                                    Global_24CFB5.f_79[Global_24CFB5.f_A2] = fVar2;
                                                                                                    Global_24CFB5.f_A2++;
                                                                                                    if (func_159(vVar1, uParam2))
                                                                                                    {
                                                                                                        Global_24CFB5.f_A3++;
                                                                                                    }
                                                                                                    if (Global_24CFB5.f_A2 >= 10)
                                                                                                    {
                                                                                                        if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
                                                                                                        {
                                                                                                            iVar0 = 100;
                                                                                                        }
                                                                                                        else if (Global_24CFB5.f_A2 == 40)
                                                                                                        {
                                                                                                            iVar0 = 100;
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                            *uParam0 = { vVar1 };
                                                                                            *uParam1 = fVar2;
                                                                                            return 1;
                                                                                        }
                                                                                    }
                                                                                    else if (bVar16)
                                                                                    {
                                                                                        iVar0++;
                                                                                    }
                                                                                }
                                                                                else
                                                                                {
                                                                                    *uParam0 = { vVar1 };
                                                                                    *uParam1 = fVar2;
                                                                                    return 1;
                                                                                }
                                                                            }
                                                                        }
                                                                        else
                                                                        {
                                                                            iVar13++;
                                                                        }
                                                                    }
                                                                    else
                                                                    {
                                                                        iVar0 = 100;
                                                                    }
                                                                }
                                                            }
                                                            else
                                                            {
                                                                iVar0++;
                                                            }
                                                        }
                                                        else if (!uParam2->f_20)
                                                        {
                                                            iVar0 = 100;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        iVar0++;
                                                    }
                                                }
                                                else
                                                {
                                                    iVar0++;
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        iVar0++;
                                    }
                                }
                            }
                            else
                            {
                                iVar0++;
                            }
                        }
                        else
                        {
                            iVar0++;
                        }
                    }
                    else
                    {
                        iVar13++;
                    }
                }
                else
                {
                    iVar13++;
                }
            }
            iVar0++;
            if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
            {
                if (Global_24CFB5.f_A2 > 0 && ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_21 >= 2))
                {
                    if (uParam2->f_1E)
                    {
                        *uParam0 = { Global_24CFB5[0 /*3*/] };
                        *uParam1 = Global_24CFB5.f_79[0];
                        return 1;
                    }
                    else
                    {
                        if (Global_24CFB5.f_A3 > 0 && !Global_24CFB5.f_A3 == Global_24CFB5.f_A2)
                        {
                            func_148(0, uParam2);
                        }
                        iVar24 = unk_0xBAC643F143880136(0, Global_24CFB5.f_A2);
                        if (uParam2->f_12 && uParam2->f_1E)
                        {
                            iVar24 = 0;
                        }
                        vVar25 = { Global_24CFB5[0 /*3*/] };
                        uVar26 = Global_24CFB5.f_79[0];
                        Global_24CFB5[0 /*3*/] = { Global_24CFB5[iVar24 /*3*/] };
                        Global_24CFB5.f_79[0] = Global_24CFB5.f_79[iVar24];
                        Global_24CFB5[iVar24 /*3*/] = { vVar25 };
                        Global_24CFB5.f_79[iVar24] = uVar26;
                        *uParam0 = { Global_24CFB5[0 /*3*/] };
                        *uParam1 = Global_24CFB5.f_79[0];
                        return 1;
                    }
                }
                else
                {
                    uParam2->f_21++;
                    if (uParam2->f_21 < 3)
                    {
                        return 0;
                    }
                    else
                    {
                        func_147(iVar13, *uParam0, &iVar0, &vVar1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
                        vVar27 = { vVar1 };
                        fVar28 = fVar2;
                        if (!uParam2->f_32)
                        {
                            bVar29 = true;
                        }
                        else
                        {
                            bVar29 = false;
                        }
                        if (func_45(uParam2->f_23, &vVar27, &(uParam2->f_26), &(uParam2->f_2D), bVar29, 1) || func_165(&vVar27, bVar29))
                        {
                            if (!uParam2->f_32)
                            {
                                uParam2->f_21 = 0;
                                uParam2->f_32 = 1;
                                *uParam0 = { vVar27 };
                                *uParam1 = fVar28;
                                uParam2->f_6 = 9999.9f;
                                uParam2->f_7 = 9999.9f;
                                return 0;
                            }
                            else
                            {
                                *uParam0 = { vVar27 };
                                *uParam1 = fVar28;
                                return 1;
                            }
                        }
                        else
                        {
                            *uParam0 = { vVar27 };
                            *uParam1 = fVar28;
                            return 1;
                        }
                    }
                }
            }
        }
        else
        {
            uParam2->f_21++;
            if (uParam2->f_21 < 3)
            {
                return 0;
            }
            else
            {
                func_146(&Global_14053D, uParam0, uParam1, *uParam0);
                if (uParam2->f_B)
                {
                    uParam2->f_1B = 1;
                }
                return 1;
            }
        }
        Global_24CFB5.f_A4 = iVar6;
    }
    return 0;
}

void func_146(var uParam0, var uParam1, var uParam2, vector3 vParam3)//Position - 0x83F4
{
    float fVar0;
    float fVar1;
    int iVar2;
    int iVar3;
    
    fVar0 = 1E+09f;
    iVar3 = -1;
    iVar2 = 0;
    while (iVar2 < *uParam0)
    {
        fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), vParam3);
        if (fVar1 < fVar0)
        {
            if (!func_117(*(uParam0[iVar2 /*4*/]), 5f, unk_0x7C7787D2D7139A85(), 0, 0))
            {
                fVar0 = fVar1;
                iVar3 = iVar2;
            }
        }
        iVar2++;
    }
    if (!iVar3 == -1)
    {
        *uParam1 = { *(uParam0[iVar3 /*4*/]) };
        *uParam2 = (uParam0[iVar3 /*4*/])->f_3;
    }
}

void func_147(int iParam0, vector3 vParam1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)//Position - 0x8478
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 30)
    {
        *iParam2 = unk_0xBAC643F143880136((1 + iParam0), (40 + iParam0));
        unk_0x818B4D4C9F36F49A(vParam1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10);
        *uParam3 = { func_160(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_B, uParam5->f_22, &bParam11, 0, 0, uParam5->f_33) };
        if (!func_164(*uParam3))
        {
            iVar0 = 999;
            return;
        }
        iVar0++;
    }
}

void func_148(int iParam0, var uParam1)//Position - 0x84FC
{
    if (!func_159(Global_24CFB5[iParam0 /*3*/], uParam1))
    {
        Global_24CFB5.f_A2 = (Global_24CFB5.f_A2 - 1);
        func_149(iParam0);
        if (Global_24CFB5.f_A2 > Global_24CFB5.f_A3)
        {
            func_148(iParam0, uParam1);
        }
    }
    else if (iParam0 < 39)
    {
        func_148(iParam0 + 1, uParam1);
    }
}

void func_149(int iParam0)//Position - 0x8557
{
    while (iParam0 < 39)
    {
        if (iParam0 < 39)
        {
            Global_24CFB5[iParam0 /*3*/] = { Global_24CFB5[iParam0 + 1 /*3*/] };
            Global_24CFB5.f_79[iParam0] = Global_24CFB5.f_79[iParam0 + 1];
        }
        iParam0++;
    }
}

void func_150(vector3 vParam0, float fParam1, int iParam2)//Position - 0x85A2
{
    vector3 vVar0;
    var uVar1;
    
    vVar0 = { Global_24CFB5[iParam2 /*3*/] };
    uVar1 = Global_24CFB5.f_79[iParam2];
    Global_24CFB5[iParam2 /*3*/] = { vParam0 };
    Global_24CFB5.f_79[iParam2] = fParam1;
    if (iParam2 <= Global_24CFB5.f_A2 && iParam2 < 39)
    {
        if (SYSTEM::VMAG(vVar0) > 0f)
        {
            func_150(vVar0, uVar1, iParam2 + 1);
        }
    }
}

int func_151(vector3 vParam0, float fParam1, float fParam2)//Position - 0x860F
{
    int iVar0;
    vector3 vVar1;
    int iVar2;
    int iVar3;
    float fVar4;
    float fVar5;
    
    fVar4 = 99999.9f;
    iVar0 = 0;
    while (iVar0 < 32)
    {
        iVar3 = iVar0;
        if (func_79(iVar3))
        {
            vVar1 = { func_78(iVar3) };
            fVar5 = SYSTEM::VDIST(vParam0, vVar1);
            if (fVar5 < fParam1)
            {
                if (fVar5 < fVar4)
                {
                    fVar4 = fVar5;
                }
                iVar2++;
            }
        }
        iVar0++;
    }
    *fParam2 = fVar4;
    return iVar2;
}

int func_152(vector3 vParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0x8677
{
    int iVar0;
    int iVar1;
    float fVar2;
    int iVar3;
    int iVar4;
    vector3 vVar5;
    float fVar6;
    
    iVar0 = 0;
    while (iVar0 < 32)
    {
        iVar1 = iVar0;
        if ((iParam7 == 1 && unk_0x7C7787D2D7139A85() != iVar1) || iParam7 == 0)
        {
            if (func_26(iVar1, bParam3, bParam4))
            {
                if (unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar1))
                {
                    if (!bParam6 || (!unk_0x2BF5E63466422C38(unk_0x23625FE58BACEBFD(iVar1)) && func_74(iVar1)))
                    {
                        if ((!bParam5 || (bParam5 == 1 && unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) != unk_0xC69A85EEB9CA3B95(iVar1))) || unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1)
                        {
                            if (((unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1 && iParam8) && bParam5) && func_80(iVar1))
                            {
                            }
                            else if (unk_0xD4B321D9096B01FC(unk_0x23625FE58BACEBFD(iVar1)))
                            {
                                fVar2 = 0.1f;
                                if (unk_0x5294582CE404D3F4(unk_0x23625FE58BACEBFD(iVar1), 0))
                                {
                                    iVar3 = unk_0x4D57D3E5ECE15A41(unk_0x23625FE58BACEBFD(iVar1), 0);
                                    if (unk_0xD4B321D9096B01FC(iVar3) && !unk_0xF4B969E0807E76C7(iVar3, 0))
                                    {
                                        iVar4 = unk_0x7F375072508F738F(iVar3);
                                        vVar5 = { unk_0xACE5E491FC1B0D37(iVar3, 0) };
                                        fVar6 = unk_0xD2809C7F7FD79247(iVar3);
                                        if (func_153(vParam0, fParam1, iParam2, vVar5, fVar6, iVar4, 0))
                                        {
                                            return 1;
                                        }
                                    }
                                    else
                                    {
                                        fVar2 = 5f;
                                    }
                                }
                                if (func_34(func_78(iVar1), vParam0, fParam1, iParam2, fVar2))
                                {
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        iVar0++;
    }
    return 0;
}

int func_153(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)//Position - 0x87EA
{
    int iVar0;
    vector3 vVar1[4];
    vector3 vVar2;
    vector3 vVar3;
    vector3 vVar4;
    vector3 vVar5;
    vector3 vVar6;
    
    if (func_34(vParam0, vParam3, fParam4, iParam5, 1036831949))
    {
        return 1;
    }
    func_36(iParam2, &vVar2, &vVar3, 1086324736, 1080033280, 1077936128);
    vVar4 = { 0f, vVar3.y, 0f };
    func_20(&vVar4, 0f, 0f, fParam1);
    vVar5 = { 0f, vVar2.y, 0f };
    func_20(&vVar5, 0f, 0f, fParam1);
    vVar6 = { (unk_0x01CBD71E072E9F33((vVar3.x - vVar2.x)) * 0.5f), 0f, 0f };
    func_20(&vVar6, 0f, 0f, fParam1);
    vVar1[0 /*3*/] = { vParam0 + vVar4 + vVar6 };
    vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * unk_0x01CBD71E072E9F33((vVar3.z - vVar2.z))));
    vVar1[1 /*3*/] = { vParam0 + vVar4 - vVar6 };
    vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * unk_0x01CBD71E072E9F33((vVar3.z - vVar2.z))));
    vVar1[2 /*3*/] = { vParam0 + vVar5 + vVar6 };
    vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * unk_0x01CBD71E072E9F33((vVar3.z - vVar2.z))));
    vVar1[3 /*3*/] = { vParam0 + vVar5 - vVar6 };
    vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * unk_0x01CBD71E072E9F33((vVar3.z - vVar2.z))));
    iVar0 = 0;
    while (iVar0 < 4)
    {
        if (func_34(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 1036831949))
        {
            return 1;
        }
        iVar0++;
    }
    if (!bParam6)
    {
        if (func_153(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 1))
        {
            return 1;
        }
    }
    return 0;
}

int func_154(vector3 vParam0, float fParam1, int iParam2)//Position - 0x89A4
{
    int iVar0;
    int iVar1;
    int iVar2;
    vector3 vVar3;
    float fVar4;
    
    iVar0 = 1;
    iVar0 += 2;
    iVar0 += 4;
    iVar0 += 8;
    iVar0 += 16;
    iVar0 += 32;
    iVar0 += 64;
    iVar0 = (iVar0 + 131076);
    iVar1 = unk_0x78FEEDC74FCCF78F(vParam0, 30f, 0, iVar0);
    if (unk_0xD4B321D9096B01FC(iVar1) && !unk_0xF4B969E0807E76C7(iVar1, 0))
    {
        iVar2 = unk_0x7F375072508F738F(iVar1);
        vVar3 = { unk_0xACE5E491FC1B0D37(iVar1, 0) };
        fVar4 = unk_0xD2809C7F7FD79247(iVar1);
        if (func_153(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
        {
            return 1;
        }
    }
    iVar0 += 4096;
    iVar0 += 8192;
    iVar0 += 16384;
    iVar1 = unk_0x78FEEDC74FCCF78F(vParam0, 30f, 0, iVar0);
    if (unk_0xD4B321D9096B01FC(iVar1) && !unk_0xF4B969E0807E76C7(iVar1, 0))
    {
        iVar2 = unk_0x7F375072508F738F(iVar1);
        vVar3 = { unk_0xACE5E491FC1B0D37(iVar1, 0) };
        fVar4 = unk_0xD2809C7F7FD79247(iVar1);
        if (func_153(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
        {
            return 1;
        }
    }
    return 0;
}

int func_155(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x8AB0
{
    if (func_158(vParam0, fParam1, iParam2, iParam3, iParam4) || func_156(vParam0, fParam1, iParam2, iParam3, iParam5))
    {
        return 1;
    }
    return 0;
}

int func_156(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8AE6
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    iVar0 = 0;
    while (iVar0 < 32)
    {
        if (!iParam3 == iVar0 || iParam4 == 1)
        {
            iVar2 = iVar0;
            iVar1 = 0;
            while (iVar1 < 2)
            {
                if (func_157(vParam0, iParam2, Global_24E477.f_1CD[iVar0 /*11*/][iVar1 /*5*/], Global_24E477.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4))
                {
                    if (func_153(vParam0, fParam1, iParam2, Global_24E477.f_1CD[iVar0 /*11*/][iVar1 /*5*/], Global_24E477.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_24E477.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
                    {
                        if (func_26(iVar2, 0, 1) && func_26(iParam3, 0, 1))
                        {
                            return 1;
                        }
                        else
                        {
                            return 1;
                        }
                    }
                }
                iVar1++;
            }
        }
        iVar0++;
    }
    return 0;
}

int func_157(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0x8BC0
{
    float fVar0;
    float fVar1;
    float fVar2;
    
    fVar0 = func_41(iParam1, 1008981770);
    fVar1 = func_41(iParam3, 1008981770);
    fVar2 = SYSTEM::VDIST(vParam0, vParam2);
    if (fVar2 < (fVar0 + fVar1))
    {
        return 1;
    }
    return 0;
}

int func_158(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8C00
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    while (iVar0 < 32)
    {
        if (!iParam3 == iVar0 || iParam4 == 1)
        {
            iVar1 = iVar0;
            if (func_26(iVar1, 0, 1) && func_26(iParam3, 0, 1))
            {
                if (Global_24E477.f_105[iVar0])
                {
                    if (func_34(Global_24E477.f_83[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
                    {
                        return 1;
                    }
                }
                else if (func_34(func_78(iVar1), vParam0, fParam1, iParam2, 1036831949))
                {
                    return 1;
                }
            }
            else if (Global_24E477.f_105[iVar0])
            {
                if (func_34(Global_24E477.f_83[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
                {
                    return 1;
                }
            }
            else if (func_26(iVar1, 0, 0))
            {
                if (unk_0xD4B321D9096B01FC(unk_0x23625FE58BACEBFD(iVar1)))
                {
                    if (func_34(func_78(iVar1), vParam0, fParam1, iParam2, 1036831949))
                    {
                        return 1;
                    }
                }
            }
        }
        iVar0++;
    }
    return 0;
}

int func_159(vector3 vParam0, var uParam1)//Position - 0x8D0F
{
    if (uParam1->f_12)
    {
        switch (uParam1->f_1A)
        {
            case 0:
                if (func_143(vParam0, uParam1->f_13, uParam1->f_19, 0, 0))
                {
                    return 1;
                }
                break;
            
            case 1:
                if (func_59(vParam0, uParam1->f_13, uParam1->f_16, 0, 0))
                {
                    return 1;
                }
                break;
            
            case 2:
                if (unk_0xD36AE666DF05C607(vParam0, uParam1->f_13, uParam1->f_16, uParam1->f_19, 0, true))
                {
                    return 1;
                }
                break;
        }
        return 0;
    }
    return 1;
}

Vector3 func_160(vector3 vParam0, float fParam1, int iParam2, bool bParam3, vector3 vParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0x8DA0
{
    vector3 vVar0;
    var uVar1;
    var uVar2;
    var uVar3;
    int iVar4;
    int iVar5;
    float fVar6;
    float fVar7;
    bool bVar8;
    bool bVar9;
    float fVar10;
    vector3 vVar11;
    vector3 vVar12;
    vector3 vVar13;
    
    if (bParam11)
    {
        if (SYSTEM::VMAG(vParam4) > 0f)
        {
            if (!func_163(vParam0, *fParam1, vParam4))
            {
                *fParam1 = (*fParam1 + 180f);
            }
        }
        return vParam0;
    }
    unk_0xB65B731FF076DFC4(vParam0, &uVar1, &uVar2);
    if (uVar2 & 1024 == 0 && !bParam6)
    {
        unk_0x67C99745E0B1338D(vParam0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
        if (iVar4 == iVar5)
        {
            *uParam8 = 1;
        }
        if (bParam10)
        {
            if (!uVar2 & 128 == 0)
            {
                return 0f, 0f, 0f;
            }
            if (!uVar2 & 256 == 0)
            {
                return 0f, 0f, 0f;
            }
            if (!uVar2 & 512 == 0)
            {
                return 0f, 0f, 0f;
            }
            if ((iVar4 + iVar5) != iParam2)
            {
                return 0f, 0f, 0f;
            }
            if (unk_0xDC118E11A4081E9A(iParam7) && func_162(vParam0))
            {
                return 0f, 0f, 0f;
            }
        }
        if (iParam9 && *uParam8)
        {
            *fParam1 = (*fParam1 + 180f);
            if (*fParam1 > 360f)
            {
                *fParam1 = (*fParam1 + -360f);
            }
        }
        if (*fParam1 <= 90f || *fParam1 > 270f)
        {
            bVar8 = true;
        }
        else
        {
            bVar8 = false;
        }
        bVar9 = false;
        if (bVar8)
        {
            if (iVar4 == 0)
            {
                if (bParam10)
                {
                    return 0f, 0f, 0f;
                }
            }
            else if (iParam2 == iVar4)
            {
                bVar9 = true;
            }
        }
        else if (iVar5 == 0)
        {
            if (bParam10)
            {
                return 0f, 0f, 0f;
            }
        }
        else if (iParam2 == iVar5)
        {
            bVar9 = true;
        }
        if (fVar6 < 0f)
        {
            fVar7 = 0f;
        }
        else
        {
            if (bVar8)
            {
                if (bVar9)
                {
                    fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar4) * 0.5f));
                }
                else
                {
                    fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar4));
                }
                if (bVar9)
                {
                    if (iVar4 > 2)
                    {
                        fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
                    }
                }
                else if (iVar4 > 1)
                {
                    fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
                }
            }
            else
            {
                if (bVar9)
                {
                    fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar5) * 0.5f));
                }
                else
                {
                    fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar5));
                }
                if (bVar9)
                {
                    if (iVar5 > 2)
                    {
                        fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
                    }
                }
                else if (iVar5 > 1)
                {
                    fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
                }
            }
            if (!uVar2 & 64 == 0)
            {
                fVar7 = (fVar7 + (0.95f * fVar6));
            }
            if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
            {
                fVar7 = (fVar7 + -0.5f);
            }
            if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
            {
                fVar7 = (fVar7 + -1f);
            }
            if (!bParam3 || !uVar2 & 8 == 0)
            {
                fVar7 = (fVar7 + (4.2f * -0.5f));
            }
            if (!iParam7 == 0)
            {
                if (uVar2 & 8 != 0)
                {
                    fVar10 = func_161(iParam7, 3.5f);
                }
                else
                {
                    fVar10 = func_161(iParam7, 1.5f);
                }
                if (fVar10 > 1.8f)
                {
                    fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
                }
            }
        }
    }
    if (SYSTEM::VMAG(vParam4) > 0f)
    {
        if (!func_163(vParam0, *fParam1, vParam4))
        {
            if (bParam3 || ((uVar2 & 1024 != 0 || vParam0.z == 0f) && bParam6))
            {
                *fParam1 = (*fParam1 + 180f);
            }
            else if (bParam10)
            {
                return 0f, 0f, 0f;
            }
        }
    }
    if (fVar7 < 0f)
    {
        fVar7 = 0f;
    }
    vVar0 = { unk_0x16DECC52D9360F1E(vParam0, *fParam1, fVar7, 0f, 0f) };
    if (bParam3)
    {
        if (unk_0xE01F32F8EE03D3A3(vParam0, *fParam1, &vVar11))
        {
            vVar12 = { vVar11 - vParam0 };
            if (!iParam7 == 0)
            {
                vVar13 = { vVar12 / FtoV(SYSTEM::VMAG(vVar12)) };
                if (uVar2 & 8 != 0)
                {
                    fVar10 = func_161(iParam7, 3.5f);
                }
                else
                {
                    fVar10 = func_161(iParam7, 1.5f);
                }
                vVar13 = { vVar13 * FtoV((fVar10 * 0.5f)) };
                vVar12 = { vVar12 - vVar13 };
                vVar11 = { vParam0 + vVar12 };
            }
            vVar13 = { vVar0 - vVar11 };
            vVar0 = { vVar11 };
        }
    }
    return vVar0;
}

float func_161(int iParam0, float fParam1)//Position - 0x91E7
{
    float fVar0;
    float fVar1;
    float fVar2;
    
    func_36(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
    fVar2 = (fVar1 - fVar0);
    if (fVar2 < fParam1)
    {
        return fParam1;
    }
    return fVar2;
}

int func_162(vector3 vParam0)//Position - 0x921E
{
    float fVar0;
    
    if (unk_0xDF956C4106F1E9C5(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
    {
        fVar0 = (fVar0 - vParam0.z);
        if (fVar0 > 6f)
        {
            return 1;
        }
    }
    return 0;
}

int func_163(vector3 vParam0, float fParam1, vector3 vParam2)//Position - 0x9256
{
    vector3 vVar0;
    vector3 vVar1;
    
    vVar0 = { 0f, 1f, 0f };
    func_20(&vVar0, 0f, 0f, fParam1);
    vVar1 = { vParam2 - vParam0 };
    if (func_16(vVar1, vVar0) >= 0f)
    {
        return 1;
    }
    return 0;
}

int func_164(vector3 vParam0)//Position - 0x9292
{
    int iVar0;
    int iVar1;
    
    iVar1 = func_32(vParam0);
    iVar0 = 0;
    while (iVar0 < Global_24CE90[iVar1])
    {
        if (func_31(vParam0, &(Global_24CBD1[iVar1 /*78*/][iVar0 /*7*/])))
        {
            return 1;
        }
        iVar0++;
    }
    iVar0 = 0;
    while (iVar0 < Global_24CE90[8])
    {
        if (func_31(vParam0, &(Global_24CBD1[8 /*78*/][iVar0 /*7*/])))
        {
            return 1;
        }
        iVar0++;
    }
    return 0;
}

bool func_165(var uParam0, bool bParam1)//Position - 0x930D
{
    bool bVar0;
    
    bVar0 = false;
    if (Global_24B2CF.f_1A.f_12)
    {
        switch (Global_24B2CF.f_1A.f_11)
        {
            case 0:
                if (func_143(*uParam0, Global_24B2CF.f_1A.f_A, Global_24B2CF.f_1A.f_10, 0, 0))
                {
                    bVar0 = true;
                }
                break;
            
            case 1:
                if (func_59(*uParam0, Global_24B2CF.f_1A.f_A, Global_24B2CF.f_1A.f_D, 0, 0))
                {
                    bVar0 = true;
                }
                break;
            
            case 2:
                if (unk_0xD36AE666DF05C607(*uParam0, Global_24B2CF.f_1A.f_A, Global_24B2CF.f_1A.f_D, Global_24B2CF.f_1A.f_10, 0, true))
                {
                    bVar0 = true;
                }
                break;
        }
        if (bVar0)
        {
            if (bParam1)
            {
                *uParam0 = { func_21(*uParam0, Global_24B2CF.f_1A.f_A, Global_24B2CF.f_1A.f_D, Global_24B2CF.f_1A.f_10, Global_24B2CF.f_1A.f_11, 1036831949, 0) };
            }
        }
    }
    return bVar0;
}

int func_166(var uParam0, var uParam1, var uParam2)//Position - 0x93FF
{
    int iVar0;
    int iVar1;
    vector3 vVar2;
    float fVar3;
    int iVar4;
    int iVar5;
    bool bVar6;
    int iVar7;
    float fVar8;
    bool bVar9;
    int iVar10;
    float fVar11;
    int iVar12;
    vector3 vVar13;
    var uVar14;
    
    if (Global_24B2CF.f_6D0 > 0)
    {
        iVar0 = 0;
        iVar1 = 0;
        if (!SYSTEM::VMAG(uParam2->f_23) > 0f)
        {
            uParam2->f_23 = { *uParam0 };
        }
        if (uParam2->f_F)
        {
            if (func_45(uParam2->f_23, uParam0, &(uParam2->f_26), &(uParam2->f_2D), 1, 1))
            {
                uParam2->f_6 = 9999.9f;
                uParam2->f_7 = 9999.9f;
            }
        }
        if (uParam2->f_30)
        {
            if (func_165(uParam0, 1))
            {
                uParam2->f_6 = 9999.9f;
                uParam2->f_7 = 9999.9f;
            }
        }
        if (uParam0->f_2 < -80f)
        {
            uParam2->f_6 = 9999.9f;
            uParam2->f_7 = 9999.9f;
        }
        Global_24CFB5.f_A2 = 0;
        Global_24CFB5.f_A3 = 0;
        iVar4 = 0;
        while (iVar4 < 40)
        {
            Global_24CFB5[iVar4 /*3*/] = { 0f, 0f, 0f };
            Global_24CFB5.f_79[iVar4] = 0f;
            iVar4++;
        }
        func_167(*uParam0);
        iVar0 = 0;
        while (iVar0 < Global_24B2CF.f_6D0)
        {
            iVar1 = Global_24B2CF.f_866[iVar0];
            if (iVar1 > -1 && iVar1 < 101)
            {
                vVar2 = { Global_24B2CF.f_6D1[iVar1 /*4*/] };
                fVar3 = Global_24B2CF.f_6D1[iVar1 /*4*/].f_3;
                if (SYSTEM::VMAG(vVar2) > 0f)
                {
                    if ((uParam2->f_39 && SYSTEM::VDIST(vVar2, uParam2->f_23) > uParam2->f_4) || uParam2->f_39 == 0)
                    {
                        if ((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar2.x, vVar2.y, 0f, uParam2->f_23, uParam2->f_23.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
                        {
                            if ((uParam2->f_C && !func_155(vVar2, fVar3, uParam2->f_22, unk_0x7C7787D2D7139A85(), 0, uParam2->f_38)) || !uParam2->f_C)
                            {
                                if (!uParam2->f_F || !func_45(uParam2->f_23, &vVar2, &(uParam2->f_26), &(uParam2->f_2D), 0, 1))
                                {
                                    if (uParam2->f_8)
                                    {
                                        iVar5 = uParam2->f_1F;
                                        bVar6 = true;
                                        iVar7 = 1;
                                        fVar8 = uParam2->f_31;
                                        if (!uParam2->f_37)
                                        {
                                            iVar5 = 0;
                                            bVar6 = false;
                                            iVar7 = 0;
                                            fVar8 = 1f;
                                        }
                                        else if (uParam2->f_11)
                                        {
                                            iVar5 = 0;
                                            bVar6 = false;
                                            iVar7 = 0;
                                            if (uParam2->f_21 == 1)
                                            {
                                                fVar8 = (fVar8 * 0.375f);
                                            }
                                        }
                                        else
                                        {
                                            bVar6 = true;
                                            iVar7 = 1;
                                            if (uParam2->f_1C)
                                            {
                                                if (uParam2->f_21 == 1)
                                                {
                                                    fVar8 = (fVar8 * 0.375f);
                                                }
                                            }
                                        }
                                        bVar9 = false;
                                        if (!func_154(vVar2, fVar3, uParam2->f_22))
                                        {
                                            if (uParam2->f_3 > 7f)
                                            {
                                                if (func_171(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_3A, -1, 1, uParam2->f_3, 0, 0, 0, 0))
                                                {
                                                    bVar9 = true;
                                                }
                                            }
                                            else if (func_171(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_3A, -1, 1, 0f, 0, 0, 0, 0) && !func_152(vVar2, fVar3, uParam2->f_22, 1, 1, 0, 0, uParam2->f_3A, 0))
                                            {
                                                bVar9 = true;
                                            }
                                        }
                                        if (bVar9)
                                        {
                                            if ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_34)
                                            {
                                                fVar11 = 0f;
                                                if (uParam2->f_34)
                                                {
                                                    iVar10 = func_151(vVar2, uParam2->f_36, &fVar11);
                                                }
                                                if (!uParam2->f_34 || (uParam2->f_34 && iVar10 <= uParam2->f_35))
                                                {
                                                    if (uParam2->f_34)
                                                    {
                                                        if (iVar10 < uParam2->f_35)
                                                        {
                                                            iVar4 = 0;
                                                            while (iVar4 < Global_24CFB5.f_A2)
                                                            {
                                                                Global_24CFB5[iVar4 /*3*/] = { 0f, 0f, 0f };
                                                                Global_24CFB5.f_79[iVar4] = 0f;
                                                                iVar4++;
                                                            }
                                                            Global_24CFB5.f_A2 = 0;
                                                            uParam2->f_35 = iVar10;
                                                        }
                                                    }
                                                    if (uParam2->f_1E)
                                                    {
                                                        if (Global_24CFB5.f_A2 == 0)
                                                        {
                                                            Global_24CFB5[0 /*3*/] = { vVar2 };
                                                            Global_24CFB5.f_79[0] = fVar3;
                                                        }
                                                        else
                                                        {
                                                            iVar4 = 0;
                                                            while (iVar4 < Global_24CFB5.f_A2 + 1)
                                                            {
                                                                if (iVar4 < 40)
                                                                {
                                                                    if (SYSTEM::VDIST2(vVar2, uParam2->f_23) < SYSTEM::VDIST2(Global_24CFB5[iVar4 /*3*/], uParam2->f_23))
                                                                    {
                                                                        func_150(vVar2, fVar3, iVar4);
                                                                        iVar4 = Global_24CFB5.f_A2 + 1;
                                                                    }
                                                                }
                                                                iVar4++;
                                                            }
                                                        }
                                                        Global_24CFB5.f_A2++;
                                                        if (Global_24CFB5.f_A2 >= 5)
                                                        {
                                                            if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
                                                            {
                                                                iVar0 = Global_24B2CF.f_6D0;
                                                            }
                                                            else if (Global_24CFB5.f_A2 == 40)
                                                            {
                                                                iVar0 = Global_24B2CF.f_6D0;
                                                            }
                                                        }
                                                    }
                                                    else
                                                    {
                                                        Global_24CFB5[Global_24CFB5.f_A2 /*3*/] = { vVar2 };
                                                        Global_24CFB5.f_79[Global_24CFB5.f_A2] = fVar3;
                                                        Global_24CFB5.f_A2++;
                                                        if (Global_24CFB5.f_A2 >= 10)
                                                        {
                                                            if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
                                                            {
                                                                iVar0 = Global_24B2CF.f_6D0;
                                                            }
                                                            else if (Global_24CFB5.f_A2 == 40)
                                                            {
                                                                iVar0 = Global_24B2CF.f_6D0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                *uParam0 = { vVar2 };
                                                *uParam1 = fVar3;
                                                return 1;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        *uParam0 = { vVar2 };
                                        *uParam1 = fVar3;
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            iVar0++;
        }
        if (Global_24CFB5.f_A2 > 0)
        {
            if (uParam2->f_1E)
            {
                *uParam0 = { Global_24CFB5[0 /*3*/] };
                *uParam1 = Global_24CFB5.f_79[0];
                return 1;
            }
            else
            {
                if (Global_24CFB5.f_A3 > 0 && !Global_24CFB5.f_A3 == Global_24CFB5.f_A2)
                {
                    func_148(0, uParam2);
                }
                iVar12 = unk_0xBAC643F143880136(0, Global_24CFB5.f_A2);
                vVar13 = { Global_24CFB5[0 /*3*/] };
                uVar14 = Global_24CFB5.f_79[0];
                Global_24CFB5[0 /*3*/] = { Global_24CFB5[iVar12 /*3*/] };
                Global_24CFB5.f_79[0] = Global_24CFB5.f_79[iVar12];
                Global_24CFB5[iVar12 /*3*/] = { vVar13 };
                Global_24CFB5.f_79[iVar12] = uVar14;
                *uParam0 = { Global_24CFB5[0 /*3*/] };
                *uParam1 = Global_24CFB5.f_79[0];
                return 1;
            }
        }
        else
        {
            uParam2->f_21++;
            if (uParam2->f_21 < 2)
            {
                return 0;
            }
            else
            {
                return 0;
            }
        }
    }
    return 0;
}

void func_167(vector3 vParam0)//Position - 0x9A37
{
    float fVar0;
    var uVar1;
    int iVar2;
    
    fVar0 = -1f;
    while (iVar2 < Global_24B2CF.f_6D0)
    {
        uVar1 = func_168(vParam0, fVar0, &fVar0);
        Global_24B2CF.f_866[iVar2] = uVar1;
        iVar2++;
    }
}

int func_168(vector3 vParam0, float fParam1, float fParam2)//Position - 0x9A72
{
    int iVar0;
    float fVar1;
    float fVar2;
    int iVar3;
    
    iVar0 = -1;
    fVar1 = 1E+08f;
    iVar3 = 0;
    while (iVar3 < Global_24B2CF.f_6D0)
    {
        fVar2 = SYSTEM::VDIST2(vParam0, Global_24B2CF.f_6D1[iVar3 /*4*/]);
        if (fVar2 < fVar1 && fVar2 > fParam1)
        {
            iVar0 = iVar3;
            fVar1 = fVar2;
        }
        iVar3++;
    }
    *fParam2 = fVar1;
    return iVar0;
}

bool func_169(int iParam0)//Position - 0x9AD4
{
    return iParam0 == 50;
}

void func_170(var uParam0, var uParam1)//Position - 0x9AE1
{
    unk_0x02C2CA4A4AB569E0(uParam0, uParam1, 0.1f);
    Global_24B2CF.f_9A0 = unk_0x429EE9FF15BB9033();
    Global_24B2CF.f_99E = 1;
    Global_24B2CF.f_9A1 = unk_0x169A8AC9F93C2727();
}

int func_171(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x9B14
{
    Global_24B2CF.f_2 = 0;
    if (fParam1 > 0f)
    {
        if (unk_0xF57CE8FF35DF4458(vParam0, fParam1))
        {
            return 0;
        }
    }
    if (fParam2 > 0f)
    {
        if (unk_0x20DAA923606B772E(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0x20DAA923606B772E(vParam0, fParam2))
        {
            return 0;
        }
    }
    if (fParam3 > 0f)
    {
        if (unk_0x20E117647697470E(vParam0, fParam3, iParam16))
        {
            return 0;
        }
    }
    Global_24B2CF.f_2++;
    if (bParam11)
    {
        if (unk_0x44C423C5FBCB538D(vParam0, 2.5f) > 0)
        {
            return 0;
        }
    }
    Global_24B2CF.f_2++;
    if (fParam12 > 0f)
    {
        if (func_126(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
        {
            return 0;
        }
    }
    Global_24B2CF.f_2++;
    if (bParam6)
    {
        if (fParam4 > 0f)
        {
            if (func_114(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
            {
                return 0;
            }
        }
    }
    Global_24B2CF.f_2++;
    return 1;
}

void func_172()//Position - 0x9C25
{
    func_177();
    func_176();
    func_175();
    func_174();
    func_173();
}

void func_173()//Position - 0x9C41
{
    struct<10> Var0;
    int iVar1;
    
    Var0.f_2 = 1176256410;
    iVar1 = 0;
    while (iVar1 < 128)
    {
        Global_24BE43[iVar1 /*10*/] = { Var0 };
        iVar1++;
    }
}

void func_174()//Position - 0x9C79
{
    struct<10> Var0;
    int iVar1;
    
    iVar1 = 0;
    while (iVar1 < 4)
    {
        Global_24B2CF.f_9B1.f_5A[iVar1 /*10*/] = { Var0 };
        iVar1++;
    }
}

void func_175()//Position - 0x9CA8
{
    struct<4> Var0;
    int iVar1;
    
    iVar1 = 0;
    while (iVar1 < 8)
    {
        Global_24B2CF.f_9B1.f_39[iVar1 /*4*/] = { Var0 };
        iVar1++;
    }
}

void func_176()//Position - 0x9CD6
{
    struct<10> Var0;
    int iVar1;
    
    Var0.f_2 = 1176256410;
    iVar1 = 0;
    while (iVar1 < 5)
    {
        Global_24B2CF.f_9B1.f_6[iVar1 /*10*/] = { Var0 };
        iVar1++;
    }
}

void func_177()//Position - 0x9D12
{
    struct<6> Var0;
    
    Var0.f_3 = -1;
    Global_24B2CF.f_9B1 = { Var0 };
}

void func_178()//Position - 0x9D30
{
    if (Global_24B2CF.f_99E)
    {
        if (unk_0x429EE9FF15BB9033() == Global_24B2CF.f_9A0)
        {
            unk_0x222122192FE38581();
        }
        else
        {
            unk_0x222122192FE38581();
        }
        Global_24B2CF.f_99E = 0;
    }
}

int func_179(bool bParam0)//Position - 0x9D63
{
    if (unk_0x260395BA7F0C83CB())
    {
        return 10000;
    }
    if (bParam0)
    {
        return 5000;
    }
    return 1000;
}

int func_180(vector3 vParam0, float fParam1, var uParam2, var uParam3, var uParam4)//Position - 0x9D86
{
    struct<17> Var0;
    struct<18> Var1;
    vector3 vVar2;
    
    if (uParam4->f_5 > (fParam1 - 20f))
    {
        uParam4->f_5 = (fParam1 - 20f);
    }
    Var0 = 5;
    Var0.f_10 = 5;
    Var0.f_16 = 5;
    Var0.f_1C = 5;
    Var1.f_10 = 1;
    Var1.f_16 = 1;
    Var1.f_17 = 1;
    Var1.f_18 = 1;
    Var1 = { vParam0 };
    Var1.f_3 = uParam4->f_B;
    Var1.f_4 = fParam1;
    Var1.f_5 = 0;
    Var1.f_6 = 1;
    Var1.f_7 = 0;
    Var1.f_F = 0;
    Var1.f_10 = 1;
    Var1.f_11 = 0;
    if (func_9(&Var1, uParam4, &Var0))
    {
        if ((uParam4->f_C > 0f && uParam4->f_7) && uParam4->f_8)
        {
            vVar2 = { vParam0 - Var0[0 /*3*/] };
            if (vVar2.z > uParam4->f_C)
            {
                Var0[0 /*3*/] = { vParam0 };
                Var0.f_10[0] = uParam4->f_B;
            }
        }
        *uParam2 = { Var0[0 /*3*/] };
        *uParam3 = Var0.f_10[0];
        return 1;
    }
    return 0;
}

int func_181(var uParam0)//Position - 0x9E86
{
    if (uParam0->f_1)
    {
        if (unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), *uParam0)) >= 1000)
        {
            return 1;
        }
    }
    return 0;
}

void func_182(var uParam0)//Position - 0x9EAF
{
    if (!uParam0->f_1)
    {
        if (unk_0x722688699565161D())
        {
            func_183(uParam0, 0, 0);
        }
    }
}

void func_183(var uParam0, bool bParam1, bool bParam2)//Position - 0x9ECE
{
    if (uParam0->f_1 == 0)
    {
        if (unk_0x393E9918BC37548A() && !bParam1)
        {
            if (!bParam2)
            {
                *uParam0 = unk_0x169A8AC9F93C2727();
            }
            else
            {
                *uParam0 = unk_0x50D85685589EFCBD();
            }
        }
        else
        {
            *uParam0 = unk_0x9B35D07DCD0F0B43();
        }
        uParam0->f_1 = 1;
    }
}

void func_184()//Position - 0x9F13
{
    switch (vLocal_62[unk_0x2E40EEA43EF34BD6() /*3*/].f_2)
    {
        case 0:
            func_209();
            func_207();
            if (func_196())
            {
                func_188();
                func_187();
                func_185(35);
                vLocal_62[unk_0x2E40EEA43EF34BD6() /*3*/].f_2 = 1;
            }
            else if (Local_60.f_8 >= 1)
            {
                func_187();
                vLocal_62[unk_0x2E40EEA43EF34BD6() /*3*/].f_2 = 1;
            }
            break;
        
        case 1:
            if (Local_60.f_8 >= 2)
            {
                vLocal_62[unk_0x2E40EEA43EF34BD6() /*3*/].f_2 = 2;
            }
            break;
        
        case 2:
            break;
    }
}

void func_185(int iParam0)//Position - 0x9F9A
{
    int iVar0;
    
    if (Global_40001.f_217B)
    {
        return;
    }
    iVar0 = 0;
    while (iVar0 < 3)
    {
        if (Global_200000[func_186() /*10828*/].f_1818.f_FAF[iVar0 /*3*/] == iParam0)
        {
            if (Global_14073A.f_1[iVar0] == -1)
            {
                Global_14073A.f_1[iVar0] = iParam0;
                Global_14073A = 1;
                return;
            }
        }
        iVar0++;
    }
}

int func_186()//Position - 0x9FFD
{
    int iVar0;
    
    iVar0 = 0;
    return iVar0;
}

void func_187()//Position - 0xA00A
{
    if (unk_0x39A01A052D9B5FF0(iLocal_65))
    {
        unk_0xAA2276003B2ADF1B(&iLocal_65);
    }
}

void func_188()//Position - 0xA021
{
    if (!unk_0xA2BC31158C8CEFD2(Global_2531AD.f_F28, 0))
    {
        unk_0xA1E7A40E1F56E511(&(Global_2531AD.f_F28), 0);
        func_189();
    }
    else
    {
        unk_0xA1E7A40E1F56E511(&(Global_2531AD.f_F28), 1);
    }
}

void func_189()//Position - 0xA058
{
    func_190(1188, -1);
}

void func_190(int iParam0, int iParam1)//Position - 0xA068
{
    int iVar0;
    
    iVar0 = func_194(iParam0, func_195(iParam1), 0);
    iVar0++;
    if (!func_193(iParam0))
    {
        func_192(iParam0, iVar0, iParam1, 1, 0);
    }
    else
    {
        func_191(iParam0, iVar0, iParam1, 1);
    }
}

void func_191(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA0A9
{
    int iVar0;
    
    iVar0 = Global_26CBBF[iParam0 /*3*/][func_195(iParam2)];
    if (iVar0 != 0)
    {
        unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
    }
    switch (iParam0)
    {
        case 787:
            Global_151F0F[func_195(iParam2)] = iParam1;
            break;
        
        case 788:
            Global_151F15[func_195(iParam2)] = iParam1;
            break;
        
        case 789:
            Global_151F1B[func_195(iParam2)] = iParam1;
            break;
        
        case 790:
            Global_151F21[func_195(iParam2)] = iParam1;
            break;
        
        case 777:
            Global_151EF1[func_195(iParam2)] = iParam1;
            break;
        
        case 778:
            Global_151EF7[func_195(iParam2)] = iParam1;
            break;
        
        case 779:
            Global_151EFD[func_195(iParam2)] = iParam1;
            break;
        
        case 780:
            Global_151F03[func_195(iParam2)] = iParam1;
            break;
        
        case 767:
            Global_151ED3[func_195(iParam2)] = iParam1;
            break;
        
        case 768:
            Global_151ED9[func_195(iParam2)] = iParam1;
            break;
        
        case 769:
            Global_151EDF[func_195(iParam2)] = iParam1;
            break;
        
        case 770:
            Global_151EE5[func_195(iParam2)] = iParam1;
            break;
        
        case 757:
            Global_151F2D[func_195(iParam2)] = iParam1;
            break;
        
        case 758:
            Global_151F33[func_195(iParam2)] = iParam1;
            break;
        
        case 759:
            Global_151F39[func_195(iParam2)] = iParam1;
            break;
        
        case 760:
            Global_151F3F[func_195(iParam2)] = iParam1;
            break;
        
        case 1303:
            Global_151F4B[func_195(iParam2)] = iParam1;
            break;
        
        case 7233:
            Global_151F51[func_195(iParam2)] = iParam1;
            break;
        
        case 639:
            Global_151F57[func_195(iParam2)] = iParam1;
            break;
        
        case 1278:
            Global_151F5D[func_195(iParam2)] = iParam1;
            break;
        
        case 1876:
            Global_2758A0[0 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 2267:
            Global_2758A0[1 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 2929:
            Global_2758A0[2 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 3058:
            Global_2758A0[3 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 9509:
            Global_275929[func_195(iParam2)] = iParam1;
            break;
        
        case 764:
            Global_151F63[func_195(iParam2)] = iParam1;
            break;
        
        case 765:
            Global_151F69[func_195(iParam2)] = iParam1;
            break;
        
        case 766:
            Global_151F6F[func_195(iParam2)] = iParam1;
            break;
        
        case 1236:
            Global_151F7B[func_195(iParam2)] = iParam1;
            break;
        
        case 3053:
            Global_2758E3[0 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 3054:
            Global_2758E3[1 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 3055:
            Global_2758E3[2 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 3056:
            Global_2758E3[3 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 3057:
            Global_2758E3[4 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 3636:
            Global_27592C[0 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 3637:
            Global_27592C[1 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 3638:
            Global_27592C[2 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 3639:
            Global_27592C[3 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 3640:
            Global_27592C[4 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 3641:
            Global_27593C[0 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 3642:
            Global_27593C[1 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 3643:
            Global_27593C[2 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 3644:
            Global_27593C[3 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 3645:
            Global_27593C[4 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 3221:
            Global_2758E3[5 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 3227:
            Global_2758A0[4 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 3663:
            Global_27594C[func_195(iParam2)] = iParam1;
            break;
        
        case 3664:
            Global_275955[func_195(iParam2)] = iParam1;
            break;
        
        case 3665:
            Global_27594F[func_195(iParam2)] = iParam1;
            break;
        
        case 3666:
            Global_275958[func_195(iParam2)] = iParam1;
            break;
        
        case 3667:
            Global_275952[func_195(iParam2)] = iParam1;
            break;
        
        case 3668:
            Global_27595B[func_195(iParam2)] = iParam1;
            break;
        
        case 3689:
            Global_27595E[func_195(iParam2)] = iParam1;
            break;
        
        case 3229:
            Global_2758E3[6 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 3230:
            Global_2758A0[5 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 3234:
            Global_2758E3[7 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 3232:
            Global_2758A0[6 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 4019:
            Global_2758E3[8 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 4020:
            Global_2758A0[7 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 4022:
            Global_2758E3[9 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 4023:
            Global_2758A0[8 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 4025:
            Global_2758E3[10 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 4026:
            Global_2758A0[9 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 4028:
            Global_2758E3[11 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 4029:
            Global_2758A0[10 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 6109:
            Global_2758E3[12 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 6110:
            Global_2758A0[11 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 6167:
            Global_2758E3[13 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 6168:
            Global_2758A0[12 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 6545:
            Global_2758E3[14 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 6546:
            Global_2758A0[13 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 6558:
            Global_2758E3[15 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 6559:
            Global_2758A0[14 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 6561:
            Global_2758E3[16 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 6562:
            Global_2758A0[15 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 6564:
            Global_2758E3[17 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 6565:
            Global_2758A0[16 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 7283:
            Global_2758A0[17 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 7285:
            Global_2758A0[18 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 7287:
            Global_2758A0[19 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 8010:
            Global_2758A0[20 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        case 8282:
            Global_275961[func_195(iParam2)] = iParam1;
            break;
        
        case 8283:
            Global_275964[func_195(iParam2)] = iParam1;
            break;
        
        case 8284:
            Global_275967[func_195(iParam2)] = iParam1;
            break;
        
        case 8285:
            Global_27596A[func_195(iParam2)] = iParam1;
            break;
        
        case 8286:
            Global_27596D[func_195(iParam2)] = iParam1;
            break;
        
        case 8287:
            Global_275970[func_195(iParam2)] = iParam1;
            break;
        
        case 8288:
            Global_275973[func_195(iParam2)] = iParam1;
            break;
        
        case 8289:
            Global_275976[func_195(iParam2)] = iParam1;
            break;
        
        case 8290:
            Global_275979[func_195(iParam2)] = iParam1;
            break;
        
        case 8291:
            Global_27597C[func_195(iParam2)] = iParam1;
            break;
        
        case 8292:
            Global_27597F[func_195(iParam2)] = iParam1;
            break;
        
        case 8293:
            Global_275982[func_195(iParam2)] = iParam1;
            break;
        
        case 8294:
            Global_275985[func_195(iParam2)] = iParam1;
            break;
        
        case 8900:
            Global_275988[func_195(iParam2)] = iParam1;
            break;
        
        case 8534:
            Global_2758A0[21 /*3*/][func_195(iParam2)] = iParam1;
            break;
        
        default:
            break;
    }
}

void func_192(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xAA2C
{
    int iVar0;
    
    if (bParam4)
    {
    }
    iVar0 = Global_26CBBF[iParam0 /*3*/][func_195(iParam2)];
    if (iVar0 != 0)
    {
        unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
    }
}

int func_193(int iParam0)//Position - 0xAA5C
{
    if (Global_151EC0)
    {
        switch (iParam0)
        {
            case 787:
            case 788:
            case 789:
            case 790:
            case 777:
            case 778:
            case 779:
            case 780:
            case 767:
            case 768:
            case 769:
            case 770:
            case 757:
            case 758:
            case 759:
            case 760:
            case 1303:
            case 7233:
            case 639:
            case 1278:
            case 764:
            case 765:
            case 766:
            case 1236:
            case 1876:
            case 2267:
            case 2929:
            case 3058:
            case 9509:
            case 3053:
            case 3054:
            case 3055:
            case 3056:
            case 3057:
            case 3232:
            case 3234:
            case 3636:
            case 3637:
            case 3638:
            case 3639:
            case 3640:
            case 3641:
            case 3642:
            case 3643:
            case 3644:
            case 3645:
            case 3227:
            case 3221:
            case 3663:
            case 3664:
            case 3665:
            case 3666:
            case 3667:
            case 3668:
            case 3689:
            case 3230:
            case 3229:
            case 4020:
            case 4019:
            case 4023:
            case 4022:
            case 4026:
            case 4025:
            case 4029:
            case 4028:
            case 6110:
            case 6109:
            case 6168:
            case 6167:
            case 6533:
            case 6532:
            case 6546:
            case 6545:
            case 6559:
            case 6558:
            case 6562:
            case 6561:
            case 6565:
            case 6564:
            case 7283:
            case 7285:
            case 7287:
            case 8282:
            case 8283:
            case 8284:
            case 8285:
            case 8286:
            case 8287:
            case 8288:
            case 8289:
            case 8290:
            case 8291:
            case 8292:
            case 8293:
            case 8294:
            case 8010:
            case 8534:
                return 1;
                break;
            }
    }
    return 0;
}

int func_194(int iParam0, int iParam1, int iParam2)//Position - 0xACC0
{
    int iVar0;
    var uVar1;
    
    if (iParam2 == 0)
    {
    }
    iVar0 = Global_26CBBF[iParam0 /*3*/][func_195(iParam1)];
    if (unk_0x367DA79FE620711B(iVar0, &uVar1, -1))
    {
        return uVar1;
    }
    return 0;
}

int func_195(var uParam0)//Position - 0xACF2
{
    int iVar0;
    int iVar1;
    
    iVar0 = uParam0;
    if (iVar0 == -1)
    {
        iVar1 = func_142();
        if (iVar1 > -1)
        {
            Global_26CAA0 = 0;
            iVar0 = iVar1;
        }
        else
        {
            iVar0 = 0;
            Global_26CAA0 = 1;
        }
    }
    return iVar0;
}

int func_196()//Position - 0xAD26
{
    struct<14> Var0;
    
    if (unk_0x9C625F4590C97F13(Local_60.f_2))
    {
        if (unk_0x8A7BBB98FFB32893(Local_60.f_2))
        {
            if (unk_0x28C0BB3E13BFD156(unk_0x833BB45D35E36889(Local_60.f_2), unk_0x0FA8183DAD2B3203()) && func_206(Local_60.f_2))
            {
                func_205(&(Local_60.f_2));
                if (unk_0x39A01A052D9B5FF0(iLocal_65))
                {
                    unk_0xAA2276003B2ADF1B(&iLocal_65);
                }
                if (!func_204(1))
                {
                    func_199("ABB_BOXCT", 1);
                }
                Var0.f_2 = -428985155;
                Var0.f_A = unk_0x7C7787D2D7139A85();
                Var0.f_3 = uLocal_64;
                func_197(Var0, func_198(1));
                unk_0xA1E7A40E1F56E511(&(vLocal_62[unk_0x2E40EEA43EF34BD6() /*3*/].f_1), 0);
                return 1;
            }
        }
    }
    return 0;
}

void func_197(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0xADC5
{
    Param0 = 564131320;
    Param0.f_1 = unk_0x7C7787D2D7139A85();
    if (!iParam13 == 0)
    {
        unk_0x990C4E4B3665A4D6(1, &Param0, 14, iParam13);
    }
}

int func_198(int iParam0)//Position - 0xADF2
{
    var uVar0;
    int iVar1;
    int iVar2;
    
    iVar1 = 0;
    while (iVar1 < unk_0xACF7D965CEBE5714())
    {
        if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar1)))
        {
            iVar2 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar1));
            if (func_26(iVar2, 0, 0))
            {
                if (iVar2 != unk_0x7C7787D2D7139A85() || iParam0)
                {
                    unk_0xA1E7A40E1F56E511(&uVar0, iVar2);
                }
            }
        }
        iVar1++;
    }
    return uVar0;
}

int func_199(char* sParam0, int iParam1)//Position - 0xAE4F
{
    int iVar0;
    
    iVar0 = -1;
    unk_0x6C607B5286DEE8D9(sParam0);
    iVar0 = unk_0x6E617E0C74B3189D(0, 1);
    func_200(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
    return iVar0;
}

void func_200(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xAE7B
{
    int iVar0;
    
    if ((!func_203() || !unk_0xA51CBC95AC3A4B14()) || !func_140(unk_0x7C7787D2D7139A85(), 0))
    {
        return;
    }
    iVar0 = func_201(iParam2);
    if (iVar0 >= 0 && iVar0 < 5)
    {
        Global_1980E0.f_5[iVar0 /*53*/] = iParam0;
        Global_1980E0.f_5[iVar0 /*53*/].f_1 = iParam2;
        StringCopy(&(Global_1980E0.f_5[iVar0 /*53*/].f_8), sParam1, 16);
        Global_1980E0.f_5[iVar0 /*53*/].f_2[0] = iParam4;
        Global_1980E0.f_5[iVar0 /*53*/].f_2[1] = iParam5;
        Global_1980E0.f_5[iVar0 /*53*/].f_2[2] = iParam6;
        Global_1980E0.f_5[iVar0 /*53*/].f_7 = iParam7;
        Global_1980E0.f_5[iVar0 /*53*/].f_6 = iParam8;
        StringCopy(&(Global_1980E0.f_5[iVar0 /*53*/].f_C), sParam3, 64);
        StringCopy(&(Global_1980E0.f_5[iVar0 /*53*/].f_1C[0 /*6*/]), sParam9, 24);
        StringCopy(&(Global_1980E0.f_5[iVar0 /*53*/].f_1C[1 /*6*/]), sParam10, 24);
        StringCopy(&(Global_1980E0.f_5[iVar0 /*53*/].f_1C[2 /*6*/]), sParam11, 24);
    }
}

int func_201(int iParam0)//Position - 0xAF83
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 <= (Global_1980E0 - 1))
    {
        if (iParam0 > Global_1980E0.f_5[iVar0 /*53*/].f_1)
        {
            func_202(iVar0);
            return iVar0;
        }
        iVar0++;
    }
    Global_1980E0++;
    if (Global_1980E0 > 5)
    {
        Global_1980E0 = 5;
        return Global_1980E0;
    }
    return (Global_1980E0 - 1);
}

void func_202(int iParam0)//Position - 0xAFE5
{
    int iVar0;
    
    iVar0 = 4;
    while (iVar0 >= iParam0 + 1)
    {
        Global_1980E0.f_5[iVar0 /*53*/] = { Global_1980E0.f_5[(iVar0 - 1) /*53*/] };
        iVar0 = (iVar0 + -1);
    }
}

bool func_203()//Position - 0xB01E
{
    return unk_0x9742C47C6EA02281(-1762644250);
}

int func_204(int iParam0)//Position - 0xB02F
{
    switch (iParam0)
    {
        case 1:
            return Global_18D534 > 0;
        
        case 2:
            return Global_18D534.f_1 > 0;
        
        case 3:
            return Global_18D534.f_2 > 0;
        
        case 4:
            return Global_18D534.f_4 > 0;
        
        case 5:
            return Global_18D534.f_3 > 0;
        
        default:
    }
    return 0;
}

void func_205(var uParam0)//Position - 0xB092
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

int func_206(int iParam0)//Position - 0xB0CB
{
    if (unk_0x9C625F4590C97F13(iParam0))
    {
        unk_0x4DB32D0662E0696B(iParam0);
        return unk_0xF42AC9E0924DC59B(iParam0);
    }
    return 0;
}

void func_207()//Position - 0xB0ED
{
    if (!unk_0x39A01A052D9B5FF0(iLocal_65))
    {
        if (unk_0x9C625F4590C97F13(Local_60.f_2))
        {
            iLocal_65 = unk_0xADA89D4F1A58FCBA(unk_0x833BB45D35E36889(Local_60.f_2));
            if (func_208())
            {
                unk_0xBC0D06064C5B5413(iLocal_65, 0.85f);
            }
            else
            {
                unk_0xBC0D06064C5B5413(iLocal_65, 1.2f);
            }
            unk_0xD1773DD05FE2AB54(iLocal_65, 403);
            unk_0x088577CF98F96D05(iLocal_65, 2);
            unk_0x058B6969CEED705F(iLocal_65, "ABB_BLIPN");
        }
    }
}

bool func_208()//Position - 0xB151
{
    if (unk_0xA51CBC95AC3A4B14())
    {
        return unk_0xA2BC31158C8CEFD2(Global_440000.f_2F9D0, 0);
    }
    return ((unk_0xA2BC31158C8CEFD2(Global_440000.f_2F9D0, 0) || Global_193D08) && unk_0x222F76006659B0EB(joaat("fm_deathmatch_creator")) > 0);
}

void func_209()//Position - 0xB19E
{
    int iVar0;
    
    if (!unk_0x0945988C02AF3025())
    {
        iVar0 = func_194(1190, -1, 0);
        if (!unk_0xA2BC31158C8CEFD2(iVar0, 14))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 14);
            func_192(1190, iVar0, -1, 1, 0);
        }
    }
}

int func_210()//Position - 0xB1D9
{
    return Local_60;
}

int func_211()//Position - 0xB1E3
{
    unk_0x6BB2B1818CAE531E(joaat("prop_drug_package_02"));
    if (unk_0x6DF9C43E3CC645BC(joaat("prop_drug_package_02")))
    {
        return 1;
    }
    return 0;
}

int func_212(int iParam0)//Position - 0xB205
{
    return vLocal_62[iParam0 /*3*/];
}

int func_213()//Position - 0xB213
{
    var uVar0;
    
    func_221(&uVar0);
    if (Global_140852 == 0)
    {
        if (!unk_0x393E9918BC37548A())
        {
            return 1;
        }
    }
    if (func_220())
    {
        return 1;
    }
    if (Global_258E39)
    {
        return 1;
    }
    if (func_219())
    {
        return 1;
    }
    if (func_218(159))
    {
        if (!func_217())
        {
            return 1;
        }
    }
    if (func_218(157))
    {
        return 1;
    }
    if (!unk_0x2A983C9CF4EE0D5E())
    {
        return 1;
    }
    if (func_214() != 0)
    {
        if (unk_0x222F76006659B0EB(func_214()) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int func_214()//Position - 0xB29D
{
    switch (func_216())
    {
        case 0:
            return func_215();
            break;
        
        case 2:
            return joaat("creator");
            break;
    }
    return 0;
}

int func_215()//Position - 0xB2D0
{
    switch (Global_258E9F)
    {
        case 0:
            return joaat("freemode");
        
        default:
    }
    return joaat("freemode");
}

int func_216()//Position - 0xB2F4
{
    return Global_7810;
}

bool func_217()//Position - 0xB2FF
{
    return Global_255E41.f_256;
}

int func_218(int iParam0)//Position - 0xB30E
{
    if (unk_0xD076BFB919B20653(1, iParam0))
    {
        return 1;
    }
    return 0;
}

bool func_219()//Position - 0xB325
{
    return Global_258577;
}

bool func_220()//Position - 0xB331
{
    return Global_255E41.f_251;
}

void func_221(var uParam0)//Position - 0xB340
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
                    func_222(iVar0);
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

void func_222(int iParam0)//Position - 0xB3B3
{
    vector3 vVar0;
    int iVar1;
    int iVar2;
    bool bVar3;
    
    if (unk_0x3C1EC42A2CC175C5(1, iParam0, &vVar0, 3))
    {
        if (func_26(vVar0.y, 1, 1))
        {
            iVar1 = unk_0x23625FE58BACEBFD(vVar0.y);
            if (unk_0xD4B321D9096B01FC(iVar1))
            {
                if (unk_0x5294582CE404D3F4(iVar1, 0))
                {
                    iVar2 = unk_0x4D57D3E5ECE15A41(iVar1, 0);
                    if (unk_0x3D65AB2C3D476E32(iVar2, vVar0.z) && unk_0xF77CF4BC35906B30())
                    {
                        if (func_223(iVar2, &bVar3))
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

int func_223(int iParam0, var uParam1)//Position - 0xB434
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

void func_224()//Position - 0xB493
{
    SYSTEM::WAIT(0);
}

int func_225(int iParam0)//Position - 0xB4A0
{
    return Global_1844AE[iParam0 /*871*/];
}

void func_226()//Position - 0xB4B1
{
    Global_151FBD = -1;
    if (unk_0x39A01A052D9B5FF0(iLocal_65))
    {
        unk_0xAA2276003B2ADF1B(&iLocal_65);
    }
    func_229();
    if (unk_0x393E9918BC37548A())
    {
        if (unk_0x722688699565161D())
        {
            if (unk_0x9C625F4590C97F13(Local_60.f_2) && unk_0xF42AC9E0924DC59B(Local_60.f_2))
            {
                func_205(&(Local_60.f_2));
            }
            Local_60 = 4;
        }
    }
    if (unk_0xA2BC31158C8CEFD2(Local_60.f_1, 8))
    {
        func_228();
    }
    func_227();
}

void func_227()//Position - 0xB517
{
    unk_0x9C9E32388A7886A2();
}

void func_228()//Position - 0xB523
{
    Global_26A0A9.f_35B = 0;
    Global_26A0A9.f_35B.f_1 = { 0f, 0f, 0f };
    Global_26A0A9.f_35B.f_4 = 0f;
    Global_26A0A9.f_35B.f_8 = 0;
    unk_0x3B76114EC84D5812(&(Global_26A0A9.f_35B.f_7), 0);
}

void func_229()//Position - 0xB563
{
    if (unk_0xA2BC31158C8CEFD2(iLocal_63, 4))
    {
        unk_0xF0EE9417EBA3AAA9(unk_0x7C7787D2D7139A85(), 0.72f);
        unk_0x5B2A322BF84BFE31(unk_0x7C7787D2D7139A85(), 1f, 1);
        unk_0x5E97BB90A4F47670(unk_0x7C7787D2D7139A85(), 1f);
        unk_0xB786E0457B9A5585(unk_0x7C7787D2D7139A85(), 1f);
        func_230(1);
        unk_0x3B76114EC84D5812(&iLocal_63, 5);
        unk_0x3B76114EC84D5812(&iLocal_63, 7);
        unk_0x3B76114EC84D5812(&iLocal_63, 4);
    }
}

void func_230(int iParam0)//Position - 0xB5B8
{
    char* sVar0;
    
    sVar0 = func_231(iParam0, 0);
    unk_0xF530F03252D7AEE0(sVar0);
}

char* func_231(int iParam0, bool bParam1)//Position - 0xB5CF
{
    switch (iParam0)
    {
        case 1:
            if (bParam1)
            {
                return "MP_Bull_tost_Out";
            }
            else
            {
                return "MP_Bull_tost";
            }
            break;
        
        case 2:
            if (bParam1)
            {
                return "MP_Powerplay_Out";
            }
            else
            {
                return "MP_Powerplay";
            }
            break;
        
        case 3:
            if (bParam1)
            {
                return "MP_Killstreak_Out";
            }
            else
            {
                return "MP_Killstreak";
            }
            break;
        
        case 4:
            if (bParam1)
            {
                return "MP_Loser_Streak_Out";
            }
            else
            {
                return "MP_Loser_Streak";
            }
            break;
        
        case 6:
            if (bParam1)
            {
                return "BikerFilterOut";
            }
            else
            {
                return "BikerFilter";
            }
            break;
    }
    return "";
}

int func_232(struct<21> Param0)//Position - 0xB672
{
    func_236(func_237(Param0), Param0);
    unk_0x58B4DE842733F8D9(1);
    func_234(0, -1, 0);
    unk_0xCCD47D736BFD5DE3(&Local_60, 11);
    unk_0xFF584A1B7842F821(&vLocal_62, 97);
    if (!func_233())
    {
        return 0;
    }
    unk_0x50E03C7D74E352C4(0);
    if (unk_0x722688699565161D())
    {
        Local_60.f_7 = Param0.f_10;
        Global_151FBD = Local_60.f_7;
        Local_60.f_3 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0) };
        if (!func_4(Global_26A0A9.f_35B.f_1))
        {
            unk_0xA1E7A40E1F56E511(&(Local_60.f_1), 8);
        }
    }
    bLocal_68 = unk_0xEDC68E498B715C56();
    vLocal_62[unk_0x2E40EEA43EF34BD6() /*3*/] = 0;
    return 1;
}

int func_233()//Position - 0xB70A
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
        if (func_220())
        {
            return 0;
        }
        if (func_218(157))
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

int func_234(int iParam0, int iParam1, bool bParam2)//Position - 0xB763
{
    int iVar0;
    
    iVar0 = unk_0x306B26A377F9A5BE();
    while (iVar0 != 2)
    {
        if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
        {
            if (!bParam2)
            {
                func_227();
            }
            else
            {
                return 0;
            }
        }
        if (!func_235())
        {
            if (iParam0 == 0)
            {
                if (!unk_0x393E9918BC37548A())
                {
                    if (!bParam2)
                    {
                        func_227();
                    }
                    else
                    {
                        return 0;
                    }
                }
                if (func_220())
                {
                    if (!bParam2)
                    {
                        func_227();
                    }
                    else
                    {
                        return 0;
                    }
                }
                if (func_218(157))
                {
                    if (!bParam2)
                    {
                        func_227();
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
                    func_227();
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
                func_227();
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
            func_227();
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

bool func_235()//Position - 0xB878
{
    return Global_140852;
}

void func_236(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0xB884
{
    if (!unk_0x393E9918BC37548A())
    {
        func_227();
    }
    unk_0x4CF6FBF2580A447D(iParam0, 0, Param1.f_10);
}

int func_237(int iParam0)//Position - 0xB8A3
{
    switch (iParam0)
    {
        case 3:
            return 2;
        
        case 1:
            return 32;
        
        case 32:
            return 32;
        
        case 33:
            return 32;
        
        case 34:
            return 32;
        
        case 35:
            return 32;
        
        case 36:
            return 32;
        
        case 37:
            return 32;
        
        case 38:
            return 32;
        
        case 39:
            return 32;
        
        case 40:
            return 32;
        
        case 41:
            return 32;
        
        case 42:
            return 32;
        
        case 43:
            return 32;
        
        case 44:
            return 32;
        
        case 45:
            return 32;
        
        case 46:
            return 32;
        
        case 47:
            return 32;
        
        case 48:
            return 32;
        
        case 49:
            return 32;
        
        case 50:
            return 4;
        
        case 51:
            return 32;
        
        case 52:
            return 32;
        
        case 53:
            return 32;
        
        case 54:
            return 32;
        
        case 55:
            return 32;
        
        case 56:
            return 32;
        
        case 57:
            return 32;
        
        case 58:
            return 32;
        
        case 59:
            return 32;
        
        case 60:
            return 32;
        
        case 61:
            return 32;
        
        case 62:
            return 32;
        
        case 63:
            return 32;
        
        case 64:
            return 4;
        
        case 65:
            return 32;
        
        case 66:
            return 4;
        
        case 67:
            return 4;
        
        case 68:
            return 32;
        
        case 69:
            return 32;
        
        case 70:
            return 4;
        
        case 71:
            return 32;
        
        case 72:
            return 32;
        
        case 73:
        case 74:
            return 4;
        
        case 75:
            return 32;
        
        case 76:
            return 32;
        
        case 77:
            return 32;
        
        case 78:
            return 32;
        
        case 79:
            return 32;
        
        case 80:
            return 32;
        
        case 81:
            return 32;
        
        case 82:
            return 32;
        
        case 84:
            return 32;
        
        case 83:
            return 32;
        
        case 85:
            return 32;
        
        case 86:
            return 32;
        
        case 87:
            return 32;
        
        case 88:
            return 32;
        
        case 89:
            return 32;
        
        case 90:
            return 8;
        
        case 91:
            return 32;
        
        case 92:
            return 8;
        
        case 93:
            return 8;
        
        case 101:
            return 8;
        
        case 94:
            return 8;
        
        case 95:
            return 32;
        
        case 96:
            return 32;
        
        case 97:
            return 32;
        
        case 98:
            return 8;
        
        case 99:
            return 32;
        
        case 100:
            return 32;
        
        case 102:
            return 32;
        
        case 103:
            return 32;
        
        case 104:
            return 32;
        
        case 105:
            return 8;
        
        case 106:
            return 8;
        
        case 107:
            return 8;
        
        case 108:
            return 8;
        
        case 109:
            return 8;
        
        case 110:
            return 8;
        
        case 111:
            return 8;
        
        case 112:
            return 8;
        
        case 113:
            return 32;
        
        case 114:
            return 8;
        
        case 115:
            return 8;
        
        case 116:
            return 8;
        
        case 117:
            return 8;
        
        case 118:
            return 32;
        
        case 119:
            return 32;
        
        case 120:
            return 32;
        
        case 121:
            return 32;
        
        case 122:
            return 8;
        
        case 123:
            return 8;
        
        case 124:
            return 8;
        
        case 125:
            return 8;
        
        case 12:
            return 32;
        
        case 4:
            return 16;
        
        case 13:
            return 32;
        
        case 5:
            return 16;
        
        case 6:
            return 2;
        
        case 8:
            return 2;
        
        case 9:
            return 2;
        
        case 7:
            return 16;
        
        case 10:
            return 2;
        
        case 11:
            return 4;
        
        case 15:
            return 32;
        
        case 16:
            return 32;
        
        case 27:
            return 2;
        
        case 25:
            return 2;
        
        case 26:
            return 2;
        
        case 18:
            return 32;
        
        case 28:
            return 32;
        
        case 29:
            return 2;
        
        case 30:
            return 32;
        
        case 31:
            return 32;
        
        case 17:
            return 2;
        
        case 126:
            return 32;
        
        case 127:
            return 32;
        
        case 19:
            return 32;
        
        case 22:
            return 32;
        
        case 23:
            return 32;
        
        case 24:
            return 32;
        
        case 20:
            return 2;
        
        case 0:
            return 0;
        
        case 21:
            return 32;
        
        case 138:
            return 32;
        
        case 139:
            return 32;
        
        case 128:
            return 32;
        
        case 129:
            return 32;
        
        case 133:
            return 32;
        
        case 131:
            return 32;
        
        case 132:
            return 32;
        
        case 136:
            return 32;
        
        case 137:
            return 32;
        
        case 134:
            return 32;
        
        case 135:
            return 32;
        
        case 140:
            return 32;
        
        case 141:
            return 32;
        
        case 142:
            return 32;
        
        case 143:
            return 32;
        
        case 144:
            return 2;
        
        case 149:
            return 1;
        
        case 145:
            return 2;
        
        case 146:
            return 4;
        
        case 147:
            return 2;
        
        case 148:
            return 2;
        
        case 130:
            return 1;
        
        case 150:
            return 2;
        
        case 151:
        case 152:
        case 153:
        case 154:
        case 155:
        case 156:
            return 0;
        
        case 170:
            return 1;
        
        case 157:
            return 4;
        
        case 160:
            return 4;
        
        case 161:
            return 1;
        
        case 162:
            return 1;
        
        case 168:
            return 1;
        
        case 164:
            return 2;
        
        case 169:
            return 1;
        
        case 165:
            return 1;
        
        case 163:
            return 2;
        
        case 166:
            return 8;
        
        case 167:
            return 8;
        
        case 158:
            return 16;
        
        case 159:
            return 32;
        
        default:
    }
    return 0;
}

