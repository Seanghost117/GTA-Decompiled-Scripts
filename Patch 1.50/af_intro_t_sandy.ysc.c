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
    var uLocal_19 = 0;
    char* sLocal_20 = NULL;
    float fLocal_21 = 0f;
    var uLocal_22 = 0;
    var uLocal_23 = 0;
    var uLocal_24 = 0;
    float fLocal_25 = 0f;
    float fLocal_26 = 0f;
    var uLocal_27 = 0;
    var uLocal_28 = 0;
    var uLocal_29 = 0;
    float fLocal_30 = 0f;
    float fLocal_31 = 0f;
    float fLocal_32 = 0f;
    var uLocal_33 = 0;
    var uLocal_34 = 0;
    int iLocal_35 = 0;
    var uLocal_36 = 0;
    int iLocal_37 = 0;
    var uLocal_38 = 15;
    var uLocal_39 = 0;
    var uLocal_40 = 0;
    var uLocal_41 = 0;
    var uLocal_42 = 0;
    var uLocal_43 = 0;
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
    var uLocal_60 = 0;
    var uLocal_61 = 0;
    var uLocal_62 = 0;
    var uLocal_63 = 0;
    var uLocal_64 = 0;
    var uLocal_65 = 0;
    var uLocal_66 = 0;
    var uLocal_67 = 0;
    var uLocal_68 = 0;
    var uLocal_69 = 0;
    var uLocal_70 = 0;
    var uLocal_71 = 0;
    var uLocal_72 = 0;
    var uLocal_73 = 0;
    var uLocal_74 = 0;
    var uLocal_75 = 0;
    var uLocal_76 = 0;
    var uLocal_77 = 0;
    var uLocal_78 = 0;
    var uLocal_79 = 0;
    var uLocal_80 = 0;
    var uLocal_81 = 0;
    var uLocal_82 = 0;
    var uLocal_83 = 0;
    var uLocal_84 = 0;
    var uLocal_85 = 0;
    var uLocal_86 = 0;
    var uLocal_87 = 0;
    var uLocal_88 = 0;
    var uLocal_89 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
    vector3 vVar0;
    vector3 vVar1;
    
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
    sLocal_20 = "NULL";
    fLocal_21 = 0f;
    fLocal_25 = -0.0375f;
    fLocal_26 = 0.17f;
    fLocal_30 = 80f;
    fLocal_31 = 140f;
    fLocal_32 = 180f;
    iLocal_35 = 3;
    func_35(29);
    if (unk_0xD4BE58A7E3E102AC(210))
    {
        func_34();
    }
    iLocal_37 = 0;
    func_33(&uLocal_38);
    func_32(&uLocal_38, 1701.78f, 3225.148f, 40.0202f);
    func_32(&uLocal_38, 1678.909f, 3287.602f, 39.9648f);
    func_32(&uLocal_38, 1710.438f, 3326.499f, 40.1797f);
    func_32(&uLocal_38, 1738.879f, 3335.25f, 40.1493f);
    func_32(&uLocal_38, 1768.387f, 3312.101f, 40.2875f);
    func_32(&uLocal_38, 1819.241f, 3225.449f, 42.9019f);
    func_31(&uLocal_38);
    while (true)
    {
        switch (iLocal_37)
        {
            case 0:
                if (func_23())
                {
                    if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
                    {
                        vVar0 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
                        vVar1 = { 1749.71f, 3267.83f, 40.24f };
                        if (func_22(vVar0, vVar1, 75f))
                        {
                            if (func_21(&uLocal_38, vVar0))
                            {
                                if (vVar0.z > 39f && vVar0.z < 43f)
                                {
                                    iLocal_37 = 1;
                                }
                                else
                                {
                                    SYSTEM::WAIT(100);
                                }
                            }
                            else
                            {
                                SYSTEM::WAIT(100);
                            }
                        }
                        else
                        {
                            SYSTEM::WAIT(1500);
                        }
                    }
                }
                else
                {
                    SYSTEM::WAIT(1500);
                }
                break;
            
            case 1:
                func_2();
                break;
            
            case 2:
                func_1(29);
                func_34();
                break;
        }
        SYSTEM::WAIT(0);
    }
}

int func_1(int iParam0)//Position - 0x1D9
{
    int iVar0;
    int iVar1;
    
    if (iParam0 <= 31)
    {
        iVar0 = 9;
        iVar1 = iParam0;
    }
    else
    {
        iVar0 = 10;
        iVar1 = (iParam0 - 32);
    }
    if (unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_2378.f_63.f_DB[iVar0], iVar1))
    {
        unk_0x3B76114EC84D5812(&(Global_1B3C8.f_2378.f_63.f_DB[iVar0]), iVar1);
        return 1;
    }
    return 0;
}

void func_2()//Position - 0x233
{
    func_6(-815326385);
    func_3("SHI_T_SANDY_2", 0, 0, -1, 10000, 7, 0, 0, 0);
    SYSTEM::WAIT(0);
    func_3("SHI_T_SANDY_3", 0, 0, -1, 10000, 7, 0, 0, 0);
    iLocal_37 = 2;
}

void func_3(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x26E
{
    func_4(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_4(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x28F
{
    int iVar0;
    
    if (unk_0x2553916E420E8EF0(sParam0, ""))
    {
        return;
    }
    if (iParam3 < 0)
    {
        return;
    }
    if (iParam5 < 500 && iParam5 != -1)
    {
        return;
    }
    if (iParam4 < 0 && iParam4 != -1)
    {
        return;
    }
    if (iParam6 < 1 || iParam6 > 7)
    {
        return;
    }
    if (iParam7 == 235)
    {
        return;
    }
    if (iParam8 == 235)
    {
        return;
    }
    iVar0 = 0;
    while (iVar0 < Global_1B3C8.f_4FB5.f_91)
    {
        if (unk_0x2553916E420E8EF0(&(Global_1B3C8.f_4FB5[iVar0 /*16*/]), sParam0))
        {
            return;
        }
        iVar0++;
    }
    if (Global_1B3C8.f_4FB5.f_91 < 9)
    {
        StringCopy(&(Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/]), sParam0, 16);
        StringCopy(&(Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/].f_4), sParam1, 16);
        Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/].f_8 = (unk_0x9B35D07DCD0F0B43() + iParam3);
        Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/].f_9 = iParam5;
        Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/].f_B = iParam6;
        Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/].f_C = uParam2;
        Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/].f_D = iParam7;
        Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/].f_E = iParam8;
        Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/].f_F = uParam9;
        if (iParam4 != -1)
        {
            Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/].f_A = ((unk_0x9B35D07DCD0F0B43() + iParam3) + iParam4);
        }
        else
        {
            Global_1B3C8.f_4FB5[Global_1B3C8.f_4FB5.f_91 /*16*/].f_A = -1;
        }
        Global_1B3C8.f_4FB5.f_91++;
        func_5();
    }
}

void func_5()//Position - 0x462
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 3)
    {
        Global_1B3C8.f_4FB5.f_92[iVar0] = 0;
        iVar0++;
    }
    iVar0 = 0;
    while (iVar0 < Global_1B3C8.f_4FB5.f_91)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_4FB5[iVar0 /*16*/].f_B, 0))
        {
            if (Global_1B3C8.f_4FB5[iVar0 /*16*/].f_C > Global_1B3C8.f_4FB5.f_92[0])
            {
                Global_1B3C8.f_4FB5.f_92[0] = Global_1B3C8.f_4FB5[iVar0 /*16*/].f_C;
            }
        }
        if (unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_4FB5[iVar0 /*16*/].f_B, 1))
        {
            if (Global_1B3C8.f_4FB5[iVar0 /*16*/].f_C > Global_1B3C8.f_4FB5.f_92[1])
            {
                Global_1B3C8.f_4FB5.f_92[1] = Global_1B3C8.f_4FB5[iVar0 /*16*/].f_C;
            }
        }
        if (unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_4FB5[iVar0 /*16*/].f_B, 2))
        {
            if (Global_1B3C8.f_4FB5[iVar0 /*16*/].f_C > Global_1B3C8.f_4FB5.f_92[2])
            {
                Global_1B3C8.f_4FB5.f_92[2] = Global_1B3C8.f_4FB5[iVar0 /*16*/].f_C;
            }
        }
        iVar0++;
    }
}

int func_6(int iParam0)//Position - 0x582
{
    int iVar0;
    int iVar1;
    
    iVar1 = 0;
    iVar0 = 0;
    while (iVar0 < Global_1B3C8.f_1E03.f_88)
    {
        if (Global_1B3C8.f_1E03[iVar0 /*15*/] == iParam0)
        {
            if (Global_A3D7 != iVar0)
            {
                func_20(iVar0);
                func_12(iParam0);
                iVar1 = 1;
            }
        }
        iVar0++;
    }
    iVar0 = 0;
    while (iVar0 < Global_1B3C8.f_1E03.f_C6)
    {
        if (Global_1B3C8.f_1E03.f_89[iVar0 /*15*/] == iParam0)
        {
            func_12(iParam0);
            iVar1 = 1;
        }
        iVar0++;
    }
    iVar0 = 0;
    while (iVar0 < Global_1B3C8.f_1E03.f_28A)
    {
        if (Global_1B3C8.f_1E03.f_C7[iVar0 /*15*/] == iParam0)
        {
            func_11(iParam0);
            iVar1 = 1;
        }
        iVar0++;
    }
    iVar0 = 0;
    while (iVar0 < Global_1B3C8.f_1E03.f_2FC)
    {
        if (Global_1B3C8.f_1E03.f_28B[iVar0 /*14*/] == iParam0)
        {
            func_8(iVar0);
            iVar1 = 1;
        }
        iVar0++;
    }
    iVar0 = 0;
    while (iVar0 < Global_1B3C8.f_1E03.f_362)
    {
        if (Global_1B3C8.f_1E03.f_2FD[iVar0 /*10*/] == iParam0)
        {
            func_7(iVar0);
            iVar1 = 1;
        }
        iVar0++;
    }
    return iVar1;
}

void func_7(int iParam0)//Position - 0x6A9
{
    int iVar0;
    struct<10> Var1;
    
    if (iParam0 < 0 || iParam0 >= Global_1B3C8.f_1E03.f_362)
    {
        return;
    }
    if (Global_1B3C8.f_1E03.f_362 > 1)
    {
        iVar0 = iParam0;
        while (iVar0 <= (Global_1B3C8.f_1E03.f_362 - 2))
        {
            Global_1B3C8.f_1E03.f_2FD[iVar0 /*10*/] = { Global_1B3C8.f_1E03.f_2FD[iVar0 + 1 /*10*/] };
            iVar0++;
        }
    }
    if (Global_1B3C8.f_1E03.f_362 > 0)
    {
        Global_1B3C8.f_1E03.f_2FD[(Global_1B3C8.f_1E03.f_362 - 1) /*10*/] = { Var1 };
        Global_1B3C8.f_1E03.f_362 = (Global_1B3C8.f_1E03.f_362 - 1);
    }
}

void func_8(int iParam0)//Position - 0x762
{
    int iVar0;
    struct<14> Var1;
    
    if (iParam0 < 0 || iParam0 >= Global_1B3C8.f_1E03.f_2FC)
    {
        return;
    }
    if (Global_1B3C8.f_1E03.f_2FC > 1)
    {
        iVar0 = iParam0;
        while (iVar0 <= (Global_1B3C8.f_1E03.f_2FC - 2))
        {
            Global_1B3C8.f_1E03.f_28B[iVar0 /*14*/] = { Global_1B3C8.f_1E03.f_28B[iVar0 + 1 /*14*/] };
            iVar0++;
        }
    }
    if (Global_1B3C8.f_1E03.f_2FC > 0)
    {
        Global_1B3C8.f_1E03.f_28B[(Global_1B3C8.f_1E03.f_2FC - 1) /*14*/] = { Var1 };
        Global_1B3C8.f_1E03.f_2FC = (Global_1B3C8.f_1E03.f_2FC - 1);
    }
    func_9(0);
    func_9(1);
    func_9(2);
}

void func_9(int iParam0)//Position - 0x82A
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    iVar1 = 0;
    if (!func_10(iParam0))
    {
        return;
    }
    iVar0 = 0;
    while (iVar0 < Global_1B3C8.f_1E03.f_88)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_1E03[iVar0 /*15*/].f_2, iParam0))
        {
            if (Global_1B3C8.f_1E03[iVar0 /*15*/].f_3 > iVar1)
            {
                iVar1 = Global_1B3C8.f_1E03[iVar0 /*15*/].f_3;
            }
        }
        iVar0++;
    }
    iVar2 = 0;
    while (iVar2 < Global_1B3C8.f_1E03.f_2FC)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_1E03.f_28B[iVar2 /*14*/].f_2, iParam0))
        {
            if (Global_1B3C8.f_1E03.f_28B[iVar2 /*14*/].f_3 == 5)
            {
                iVar1 = 5;
            }
        }
        iVar2++;
    }
    Global_1B3C8.f_1E03.f_397[iParam0] = iVar1;
}

bool func_10(int iParam0)//Position - 0x8EE
{
    return iParam0 < 3;
}

void func_11(int iParam0)//Position - 0x8FA
{
    struct<15> Var0;
    int iVar1;
    int iVar2;
    
    iVar1 = 0;
    while (iVar1 < Global_1B3C8.f_1E03.f_28A)
    {
        if (Global_1B3C8.f_1E03.f_C7[iVar1 /*15*/] == iParam0)
        {
            iVar2 = iVar1;
            while (iVar2 <= (Global_1B3C8.f_1E03.f_28A - 2))
            {
                Global_1B3C8.f_1E03.f_C7[iVar2 /*15*/] = { Global_1B3C8.f_1E03.f_C7[iVar2 + 1 /*15*/] };
                iVar2++;
            }
            Global_1B3C8.f_1E03.f_C7[(Global_1B3C8.f_1E03.f_28A - 1) /*15*/] = { Var0 };
            Global_1B3C8.f_1E03.f_28A = (Global_1B3C8.f_1E03.f_28A - 1);
            return;
        }
        iVar1++;
    }
}

void func_12(int iParam0)//Position - 0x9A7
{
    struct<15> Var0;
    int iVar1;
    int iVar2;
    
    iVar1 = 0;
    while (iVar1 < Global_1B3C8.f_1E03.f_C6)
    {
        if (Global_1B3C8.f_1E03.f_89[iVar1 /*15*/] == iParam0)
        {
            func_13(Global_1B3C8.f_1E03.f_89[iVar1 /*15*/].f_6);
            iVar2 = iVar1;
            while (iVar2 <= (Global_1B3C8.f_1E03.f_C6 - 2))
            {
                Global_1B3C8.f_1E03.f_89[iVar2 /*15*/] = { Global_1B3C8.f_1E03.f_89[iVar2 + 1 /*15*/] };
                iVar2++;
            }
            Global_1B3C8.f_1E03.f_89[(Global_1B3C8.f_1E03.f_C6 - 1) /*15*/] = { Var0 };
            Global_1B3C8.f_1E03.f_C6 = (Global_1B3C8.f_1E03.f_C6 - 1);
            return;
        }
        iVar1++;
    }
}

int func_13(int iParam0)//Position - 0xA63
{
    int iVar0;
    
    if (Global_75[iParam0 /*10*/].f_8 != 150)
    {
        if (func_19(iParam0, Global_4C1E) == 1)
        {
            func_18(iParam0, Global_4C1E, 0);
            if (func_17(iParam0, Global_4C1E) == 0)
            {
                iVar0 = Global_4C1E;
                func_14(iParam0, iVar0);
            }
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

void func_14(int iParam0, int iParam1)//Position - 0xAB9
{
    int iVar0;
    
    if (Global_75[iParam0 /*10*/].f_8 != 150)
    {
        if (iParam1 > 3)
        {
        }
        else
        {
            iVar0 = iParam1;
            func_16(iParam0, iVar0, 0);
            func_15(iParam0, iVar0, 0);
        }
    }
}

void func_15(int iParam0, int iParam1, int iParam2)//Position - 0xAEE
{
    if (iParam1 < 0 || iParam1 > 4)
    {
        return;
    }
    Global_706[iParam0 /*29*/].f_18[iParam1] = iParam2;
    if (iParam0 < 162)
    {
        Global_1B3C8.f_6D8D[iParam0 /*29*/].f_18[iParam1] = iParam2;
    }
}

void func_16(int iParam0, int iParam1, int iParam2)//Position - 0xB33
{
    if (iParam1 < 0 || iParam1 > 4)
    {
        return;
    }
    Global_706[iParam0 /*29*/].f_C[iParam1] = iParam2;
    if (iParam0 < 162)
    {
        Global_1B3C8.f_6D8D[iParam0 /*29*/].f_C[iParam1] = iParam2;
    }
}

int func_17(int iParam0, int iParam1)//Position - 0xB78
{
    if (iParam1 < 0 || iParam1 > 4)
    {
        return 0;
    }
    return Global_706[iParam0 /*29*/].f_18[iParam1];
}

void func_18(int iParam0, int iParam1, int iParam2)//Position - 0xBA2
{
    Global_706[iParam0 /*29*/].f_13[iParam1] = iParam2;
    if (iParam0 < 162)
    {
        Global_1B3C8.f_6D8D[iParam0 /*29*/].f_13[iParam1] = iParam2;
    }
}

int func_19(int iParam0, int iParam1)//Position - 0xBD3
{
    if (iParam1 < 0 || iParam1 > 4)
    {
        return 0;
    }
    return Global_706[iParam0 /*29*/].f_13[iParam1];
}

void func_20(int iParam0)//Position - 0xBFD
{
    int iVar0;
    int iVar1;
    struct<15> Var2;
    
    if (iParam0 < 0 || iParam0 >= Global_1B3C8.f_1E03.f_88)
    {
        return;
    }
    iVar1 = Global_1B3C8.f_1E03[iParam0 /*15*/].f_2;
    if (Global_1B3C8.f_1E03.f_88 > 1)
    {
        iVar0 = iParam0;
        while (iVar0 <= (Global_1B3C8.f_1E03.f_88 - 2))
        {
            Global_1B3C8.f_1E03[iVar0 /*15*/] = { Global_1B3C8.f_1E03[iVar0 + 1 /*15*/] };
            iVar0++;
        }
    }
    if (Global_1B3C8.f_1E03.f_88 > 0)
    {
        Global_1B3C8.f_1E03[(Global_1B3C8.f_1E03.f_88 - 1) /*15*/] = { Var2 };
        Global_1B3C8.f_1E03.f_88 = (Global_1B3C8.f_1E03.f_88 - 1);
    }
    iVar0 = 0;
    while (iVar0 < 3)
    {
        if (unk_0xA2BC31158C8CEFD2(iVar1, iVar0))
        {
            func_9(iVar0);
        }
        iVar0++;
    }
}

bool func_21(var uParam0, struct<2> Param1, var uParam2)//Position - 0xCD8
{
    bool bVar0;
    int iVar1;
    int iVar2;
    
    if (uParam0->f_2E < 3)
    {
    }
    bVar0 = false;
    iVar1 = 0;
    iVar2 = (uParam0->f_2E - 1);
    while (iVar1 < uParam0->f_2E)
    {
        if (((uParam0[iVar1 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar2 /*3*/])->f_1 >= Param1.f_1) || ((uParam0[iVar2 /*3*/])->f_1 < Param1.f_1 && (uParam0[iVar1 /*3*/])->f_1 >= Param1.f_1))
        {
            if (((*uParam0)[iVar1 /*3*/] + (((Param1.f_1 - (uParam0[iVar1 /*3*/])->f_1) / ((uParam0[iVar2 /*3*/])->f_1 - (uParam0[iVar1 /*3*/])->f_1)) * ((*uParam0)[iVar2 /*3*/] - (*uParam0)[iVar1 /*3*/]))) < Param1)
            {
                bVar0 = !bVar0;
            }
        }
        iVar2 = iVar1;
        iVar1++;
    }
    return bVar0;
}

bool func_22(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0xD94
{
    vector3 vVar0;
    
    vVar0 = { vParam1 - vParam0 };
    return ((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= (fParam2 * fParam2);
}

int func_23()//Position - 0xDBE
{
    if (!unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
    {
        return 0;
    }
    if (func_25() != 2)
    {
        return 0;
    }
    if (Global_7812)
    {
        return 0;
    }
    if (Global_F019)
    {
        return 0;
    }
    if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
    {
        if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0)
        {
            return 0;
        }
    }
    if (unk_0x33D7ABC47E81DCF9())
    {
        return 0;
    }
    if (unk_0x16587C6F71675106())
    {
        return 0;
    }
    if (func_24())
    {
        return 0;
    }
    return 1;
}

int func_24()//Position - 0xE34
{
    if (unk_0x222F76006659B0EB(joaat("player_timetable_scene")) > 0)
    {
        return 1;
    }
    return 0;
}

int func_25()//Position - 0xE4E
{
    func_26();
    return Global_1B3C8.f_936.f_21B.f_10E1;
}

void func_26()//Position - 0xE67
{
    int iVar0;
    
    if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
    {
        if (func_29(Global_1B3C8.f_936.f_21B.f_10E1) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
        {
            iVar0 = func_28(unk_0x0FA8183DAD2B3203());
            if (func_10(iVar0) && (!func_27(14) || Global_1AFAF))
            {
                if (Global_1B3C8.f_936.f_21B.f_10E1 != iVar0 && func_10(Global_1B3C8.f_936.f_21B.f_10E1))
                {
                    Global_1B3C8.f_936.f_21B.f_10E2 = Global_1B3C8.f_936.f_21B.f_10E1;
                }
                Global_1B3C8.f_936.f_21B.f_10E3 = iVar0;
                Global_1B3C8.f_936.f_21B.f_10E1 = iVar0;
                return;
            }
        }
        else
        {
            if (Global_1B3C8.f_936.f_21B.f_10E1 != 145)
            {
                Global_1B3C8.f_936.f_21B.f_10E3 = Global_1B3C8.f_936.f_21B.f_10E1;
            }
            return;
        }
    }
    Global_1B3C8.f_936.f_21B.f_10E1 = 145;
}

bool func_27(int iParam0)//Position - 0xF64
{
    return Global_A1B4 == iParam0;
}

int func_28(int iParam0)//Position - 0xF72
{
    int iVar0;
    int iVar1;
    
    if (unk_0xD4B321D9096B01FC(iParam0))
    {
        iVar1 = unk_0x7F375072508F738F(iParam0);
        iVar0 = 0;
        while (iVar0 <= 2)
        {
            if (func_29(iVar0) == iVar1)
            {
                return iVar0;
            }
            iVar0++;
        }
    }
    return 145;
}

int func_29(int iParam0)//Position - 0xFAF
{
    if (func_10(iParam0))
    {
        return func_30(iParam0);
    }
    else if (iParam0 != 145)
    {
    }
    return 0;
}

var func_30(int iParam0)//Position - 0xFD4
{
    return Global_706[iParam0 /*29*/];
}

void func_31(var uParam0)//Position - 0xFE3
{
    int iVar0;
    float fVar1;
    
    if (uParam0->f_33 == 0)
    {
    }
    if (uParam0->f_2E < 3)
    {
    }
    iVar0 = 0;
    while (iVar0 < uParam0->f_2E)
    {
        uParam0->f_2F = { uParam0->f_2F + *(uParam0[iVar0 /*3*/]) };
        iVar0++;
    }
    uParam0->f_2F = { uParam0->f_2F / FtoV(SYSTEM::TO_FLOAT(iVar0)) };
    iVar0 = 0;
    while (iVar0 < uParam0->f_2E)
    {
        fVar1 = SYSTEM::VDIST2(uParam0->f_2F, *(uParam0[iVar0 /*3*/]));
        if (fVar1 > uParam0->f_32)
        {
            uParam0->f_32 = fVar1;
        }
        iVar0++;
    }
    uParam0->f_32 = SYSTEM::SQRT(uParam0->f_32);
    uParam0->f_33 = 0;
}

void func_32(var uParam0, vector3 vParam1)//Position - 0x1083
{
    if (uParam0->f_33 == 0)
    {
    }
    if (uParam0->f_2E >= 15)
    {
    }
    *(uParam0[uParam0->f_2E /*3*/]) = { vParam1 };
    uParam0->f_2E++;
}

void func_33(var uParam0)//Position - 0x10B4
{
    if (uParam0->f_33)
    {
    }
    uParam0->f_2E = 0;
    uParam0->f_2F = { 0f, 0f, 0f };
    uParam0->f_32 = 0f;
    uParam0->f_33 = 1;
}

void func_34()//Position - 0x10DB
{
    unk_0xA7BB3CB64CF414BC();
    unk_0xDE275047AFC032D9();
    unk_0x9C9E32388A7886A2();
}

int func_35(int iParam0)//Position - 0x10EF
{
    int iVar0;
    int iVar1;
    
    if (iParam0 <= 31)
    {
        iVar0 = 9;
        iVar1 = iParam0;
    }
    else
    {
        iVar0 = 10;
        iVar1 = (iParam0 - 32);
    }
    if (unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_2378.f_63.f_DB[iVar0], iVar1))
    {
        return 0;
    }
    unk_0xA1E7A40E1F56E511(&(Global_1B3C8.f_2378.f_63.f_DB[iVar0]), iVar1);
    return 1;
}

