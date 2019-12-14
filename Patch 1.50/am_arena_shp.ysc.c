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
    int iLocal_14 = 0;
    float fLocal_15 = 0f;
    var uLocal_16 = 0;
    var uLocal_17 = 0;
    char* sLocal_18 = NULL;
    var uLocal_19 = 0;
    var uLocal_20 = 0;
    int iLocal_21 = 0;
    struct<66> Local_22 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2147483647 } ;
    var uLocal_23 = 0;
    var uLocal_24 = 0;
    var uLocal_25 = 0;
    var uLocal_26 = 0;
    var uLocal_27 = 0;
    var uLocal_28 = 0;
    var uLocal_29 = 0;
    var uLocal_30 = 0;
    var uLocal_31 = 0;
    var uLocal_32 = 0;
    var uLocal_33 = 0;
    var uLocal_34 = 0;
    var uLocal_35 = 0;
    var uLocal_36 = 0;
    var uLocal_37 = 0;
    var uLocal_38 = 0;
    var uLocal_39 = 0;
    var uLocal_40 = 0;
    struct<2> Local_41 = { 0, 0 } ;
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
    var uLocal_81 = 1;
    var uLocal_82 = 0;
    var uLocal_83 = 0;
    var uLocal_84 = 0;
    var uLocal_85 = 0;
    int iLocal_86 = 0;
    struct<33> Local_87 = { 2147483647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
    iLocal_14 = -1;
    fLocal_15 = 0.001f;
    sLocal_18 = "NULL";
    if (unk_0x393E9918BC37548A())
    {
        func_52(ScriptParam_87);
    }
    else
    {
        func_50();
    }
    while (true)
    {
        func_49();
        if (Global_40001.f_5C04)
        {
            func_50();
        }
        if (func_38())
        {
            func_50();
        }
        func_1();
    }
}

void func_1()//Position - 0x78
{
    bool bVar0;
    int iVar1;
    int iVar2;
    
    bVar0 = false;
    if (Global_4111B2)
    {
        if (Global_4120A5[iLocal_21 /*12*/].f_B)
        {
            func_35(iLocal_21);
            Global_4120A5[iLocal_21 /*12*/].f_B = 0;
        }
    }
    if (Local_22.f_41.f_8)
    {
        func_17(Local_22.f_41);
    }
    if ((Local_22.f_41.f_2 == 1 && Global_4111B3) && func_16(&Local_22))
    {
        bVar0 = true;
    }
    if (Global_410F82[iLocal_21 /*84*/].f_41 == 2147483647 && Local_22.f_41.f_C)
    {
        if (bVar0)
        {
            func_15(0);
        }
        func_50();
    }
    if (Local_22.f_41.f_12 > 0 && !func_14())
    {
        iVar2 = (1000 / SYSTEM::ROUND((unk_0x9927BD5F023FA79D() * 1000f)));
        if ((unk_0xB3EE417AD9F0CAA2() - Local_22.f_41.f_12) > iVar2 * 10)
        {
            Local_22.f_41.f_12 = -1;
        }
    }
    if (((func_13() && Local_22.f_41.f_2 == 1) && Local_22.f_41.f_D) && !Local_22.f_41.f_C)
    {
        if (unk_0xB3EE417AD9F0CAA2() - Local_22.f_41.f_E) >= func_12(Local_22.f_41.f_5)
        {
            iVar1 = 0;
            if (!unk_0x10312E24AC503B38(func_11()) || unk_0x9F3230C03E32BA3F())
            {
                iVar1 = 1;
            }
            else if (Local_22.f_41.f_2 != 1)
            {
                iVar1 = 2;
            }
            else if (Local_22.f_41.f_5 != 1 && !unk_0x45E39245DFF8B94A(&(Local_22.f_41), Local_22.f_41.f_6, Local_22.f_41.f_4, Local_22.f_41.f_7, Local_22.f_41.f_1, Local_22.f_41.f_A))
            {
                iVar1 = 3;
            }
            else if (!unk_0x813C0E090AFE247B(Local_22.f_41))
            {
                iVar1 = 4;
            }
            else
            {
                Local_22.f_41.f_C = 1;
                Global_410F82[iLocal_21 /*84*/].f_41.f_C = 1;
                Global_410F82[iLocal_21 /*84*/].f_41 = Local_22.f_41;
            }
            if (iVar1 != 0)
            {
                func_7(iLocal_21);
                func_50();
            }
        }
    }
    if (!iLocal_86)
    {
        if (bVar0)
        {
            func_5(&Local_41, 0);
            iLocal_86 = 1;
        }
    }
    else if (bVar0)
    {
        StringCopy(&(Local_41.f_1), "HUD_TRANSP", 64);
        func_2(&Local_41, func_4(&Local_41));
    }
    else
    {
        iLocal_86 = 0;
        func_15(0);
    }
}

void func_2(var uParam0, int iParam1)//Position - 0x27B
{
    if (iParam1 == 1)
    {
        *uParam0 = 0;
        func_3(uParam0);
    }
    if (*uParam0 == 0)
    {
        if (uParam0->f_24)
        {
            unk_0xDE4C1DB310BFBE72(&(uParam0->f_1));
            unk_0x6A8B3CC08A759F44(uParam0->f_21);
            unk_0x6A8B3CC08A759F44(uParam0->f_22);
            unk_0xDB3C29DBB0572E83(uParam0->f_29);
        }
        else if (uParam0->f_25)
        {
            unk_0xDE4C1DB310BFBE72(&(uParam0->f_1));
            unk_0x6A8B3CC08A759F44(uParam0->f_21);
            unk_0xDB3C29DBB0572E83(uParam0->f_29);
        }
        else if (uParam0->f_27)
        {
            unk_0xDE4C1DB310BFBE72(&(uParam0->f_1));
            unk_0xA89C789CC9FEF523(&(uParam0->f_11));
            unk_0x6A8B3CC08A759F44(uParam0->f_21);
            unk_0x6A8B3CC08A759F44(uParam0->f_22);
            unk_0xDB3C29DBB0572E83(uParam0->f_29);
        }
        else if (uParam0->f_26)
        {
            unk_0xDE4C1DB310BFBE72(&(uParam0->f_1));
            unk_0xA89C789CC9FEF523(&(uParam0->f_11));
            unk_0xDB3C29DBB0572E83(uParam0->f_29);
        }
        else if (uParam0->f_28)
        {
            unk_0xDE4C1DB310BFBE72(&(uParam0->f_1));
            unk_0xC5B1209EEC9E6603(uParam0->f_21, 70);
            unk_0xDB3C29DBB0572E83(uParam0->f_29);
        }
        else
        {
            unk_0xDE4C1DB310BFBE72(&(uParam0->f_1));
            unk_0xDB3C29DBB0572E83(uParam0->f_29);
        }
        *uParam0 = 1;
    }
    if (*uParam0 == 1)
    {
    }
}

void func_3(var uParam0)//Position - 0x379
{
    uParam0->f_23 = 0;
}

int func_4(var uParam0)//Position - 0x386
{
    return uParam0->f_23;
}

void func_5(var uParam0, bool bParam1)//Position - 0x392
{
    func_6(uParam0);
    if (bParam1)
    {
        func_15(0);
    }
    uParam0->f_23 = 1;
}

void func_6(var uParam0)//Position - 0x3AF
{
    struct<46> Var0;
    
    Var0.f_29 = 1;
    *uParam0 = { Var0 };
}

void func_7(int iParam0)//Position - 0x3CA
{
    bool bVar0;
    
    bVar0 = false;
    if (!func_13())
    {
        bVar0 = true;
    }
    if (iParam0 != -1)
    {
        if (func_10(iParam0))
        {
            if (!bVar0)
            {
                unk_0x35669F69F99705F6();
            }
        }
        else if (!bVar0)
        {
            unk_0x7724338620CF87D3(Global_410F82[iParam0 /*84*/].f_41);
        }
        func_8(&(Global_410F82[iParam0 /*84*/]));
    }
}

void func_8(var uParam0)//Position - 0x41E
{
    uParam0->f_41 = 0;
    uParam0->f_41 = 2147483647;
    uParam0->f_41.f_1 = 0;
    uParam0->f_41.f_2 = 0;
    uParam0->f_41.f_3 = -1593119440;
    uParam0->f_41.f_4 = -2085313189;
    uParam0->f_41.f_5 = 0;
    uParam0->f_41.f_6 = 1227573907;
    uParam0->f_41.f_7 = -1161833819;
    *uParam0 = 0;
    uParam0->f_1 = 0;
    uParam0->f_2 = 0;
    func_9(&(uParam0->f_D));
    func_9(&(uParam0->f_D.f_D));
    StringCopy(&(uParam0->f_D.f_1A), "", 32);
    StringCopy(&(uParam0->f_D.f_22), "", 24);
    StringCopy(&(uParam0->f_D.f_28), "", 16);
    StringCopy(&(uParam0->f_D.f_2C), "", 32);
    uParam0->f_3 = 0;
    uParam0->f_4 = 0;
    uParam0->f_5 = 0;
    uParam0->f_6 = 0;
    uParam0->f_7 = 0;
    uParam0->f_8 = 0;
    uParam0->f_41.f_8 = 0;
    uParam0->f_41.f_9 = 0;
    uParam0->f_41.f_A = 0;
    uParam0->f_41.f_B = 0;
    uParam0->f_41.f_D = 0;
    uParam0->f_41.f_C = 0;
    uParam0->f_41.f_E = 0;
    uParam0->f_41.f_F = 0;
    uParam0->f_41.f_10 = 0;
    uParam0->f_41.f_12 = 0;
}

void func_9(var uParam0)//Position - 0x525
{
    *uParam0 = 0;
    uParam0->f_1 = 0;
    uParam0->f_2 = 0;
    uParam0->f_3 = 0;
    uParam0->f_4 = 0;
    uParam0->f_5 = 0;
    uParam0->f_6 = 0;
    uParam0->f_7 = 0;
    uParam0->f_8 = 0;
    uParam0->f_9 = 0;
    uParam0->f_A = 0;
    uParam0->f_B = 0;
    uParam0->f_C = 0;
}

int func_10(int iParam0)//Position - 0x56D
{
    if (iParam0 >= 0 && iParam0 < 5)
    {
        return Global_410F82[iParam0 /*84*/].f_41.f_5 == 1;
    }
    return 0;
}

var func_11()//Position - 0x597
{
    return Global_1407E9;
}

int func_12(int iParam0)//Position - 0x5A3
{
    switch (iParam0)
    {
        case 0:
            return Global_4111B5;
            break;
        
        case 1:
            return Global_4111B4;
            break;
    }
    return 0;
}

int func_13()//Position - 0x5D3
{
    if (unk_0xE434AB6E3DE89861())
    {
        return unk_0x60E2BDB67AA16B1C();
    }
    return 0;
}

bool func_14()//Position - 0x5EA
{
    return Global_181A1.f_15A > 0;
}

void func_15(bool bParam0)//Position - 0x5FB
{
    unk_0xA8E0AD0360E6D52A();
    if (bParam0)
    {
        unk_0xCC4AFCF80BD910F9();
    }
}

int func_16(var uParam0)//Position - 0x610
{
    if (uParam0->f_41.f_4 == 2043854386)
    {
        return 0;
    }
    return 1;
}

void func_17(int iParam0)//Position - 0x62B
{
    struct<7> Var0;
    int iVar1;
    bool bVar2;
    int iVar3;
    struct<66> Var4;
    bool bVar5;
    var uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    
    iVar1 = 0;
    bVar2 = false;
    if (!func_13())
    {
        iVar1 = 1;
        Var0 = iParam0;
        Var0.f_2 = 0;
    }
    if (iVar1 || unk_0x3C1EC42A2CC175C5(1, iParam0, &Var0, 7))
    {
        Var4.f_41 = 2147483647;
        iVar3 = func_34(Var0, &Var4);
        if (iVar3 != -1)
        {
            Global_410F82[iVar3 /*84*/].f_41.f_8 = 0;
            if (Global_410F82[iVar3 /*84*/].f_41.f_12 == 0)
            {
                Global_410F82[iVar3 /*84*/].f_41.f_12 = unk_0xB3EE417AD9F0CAA2();
            }
        }
        bVar5 = true;
        if (iVar3 != -1)
        {
            Global_410F82[iVar3 /*84*/].f_41.f_11 = Var0.f_2;
        }
        else
        {
            Global_4111A6.f_4 = Var0.f_2;
            Global_4111A6.f_6 = Var0.f_3;
            Global_4111A6.f_7 = Var0.f_4;
            Global_4111A6.f_8 = Var0.f_5;
            Global_4111A6.f_9 = Var0.f_6;
            if (Global_4111A6.f_A == 0)
            {
                Global_4111A6.f_A = unk_0xB3EE417AD9F0CAA2();
            }
        }
        switch (Var0.f_2)
        {
            case 0:
                if (iVar3 != -1)
                {
                    Global_4120A5[iVar3 /*12*/] = Global_410F82[iVar3 /*84*/].f_41.f_3;
                    Global_4120A5[iVar3 /*12*/].f_1 = Global_410F82[iVar3 /*84*/].f_41.f_7;
                    Global_4120A5[iVar3 /*12*/].f_2 = Global_410F82[iVar3 /*84*/].f_41.f_4;
                    Global_4120A5[iVar3 /*12*/].f_3 = Global_410F82[iVar3 /*84*/].f_41.f_1;
                    Global_4120A5[iVar3 /*12*/].f_5 = Var0.f_1;
                    Global_4120A5[iVar3 /*12*/].f_6 = Var0.f_3;
                    Global_4120A5[iVar3 /*12*/].f_7 = Var0.f_4;
                    Global_4120A5[iVar3 /*12*/].f_8 = Var0.f_5;
                    Global_4120A5[iVar3 /*12*/].f_9 = Var0.f_6;
                    Global_4120A5[iVar3 /*12*/].f_B = 1;
                    Global_410F82[iVar3 /*84*/].f_41.f_2 = 2;
                    if (Global_410F82[iVar3 /*84*/].f_41.f_B & 4 != 0)
                    {
                        func_32(iVar3, bVar5);
                    }
                    else if (func_13())
                    {
                        if (bVar5)
                        {
                            unk_0x740B62B59ED839C0(Global_410F82[iVar3 /*84*/].f_41, &uVar6);
                        }
                    }
                }
                break;
            
            default:
                if (iVar3 != -1)
                {
                    Global_410F82[iVar3 /*84*/].f_41.f_2 = 3;
                    if ((Global_410F82[iVar3 /*84*/].f_41.f_B & 1 != 0 && Global_410F82[iVar3 /*84*/].f_41.f_9 < 2) && func_31(Var0.f_2))
                    {
                        if (func_10(iVar3))
                        {
                            if (func_24())
                            {
                                Global_410F82[iVar3 /*84*/].f_41.f_2 = 1;
                                Global_410F82[iVar3 /*84*/].f_41.f_9++;
                            }
                            else if (Global_410F82[iVar3 /*84*/].f_41.f_B & 2 != 0)
                            {
                                Global_4111C4 = Global_410F82[iVar3 /*84*/].f_41.f_4;
                                Global_4111C6 = Global_410F82[iVar3 /*84*/].f_41.f_6;
                                Global_4111C7 = Var0.f_2;
                                Global_4111C5 = Global_410F82[iVar3 /*84*/].f_41.f_1;
                                if (func_23(Global_4111C4) && func_13())
                                {
                                    if (!func_22(Global_410F82[iVar3 /*84*/].f_41))
                                    {
                                        iVar7 = func_21();
                                        Global_41117B[iVar7 /*7*/] = Global_410F82[iVar3 /*84*/].f_41;
                                        Global_41117B[iVar7 /*7*/].f_2 = Global_4111C4;
                                        Global_41117B[iVar7 /*7*/].f_3 = Global_4111C6;
                                        Global_41117B[iVar7 /*7*/].f_1 = Global_4111C5;
                                        Global_41117B[iVar7 /*7*/].f_4 = unk_0x169A8AC9F93C2727();
                                    }
                                }
                                else
                                {
                                    Global_4111C1 = 1;
                                }
                            }
                        }
                        else if (func_20(&iVar3))
                        {
                            Global_410F82[iVar3 /*84*/].f_41.f_2 = 1;
                            Global_410F82[iVar3 /*84*/].f_41.f_9++;
                        }
                        else if (Global_410F82[iVar3 /*84*/].f_41.f_B & 2 != 0)
                        {
                            Global_4111C4 = Global_410F82[iVar3 /*84*/].f_41.f_4;
                            Global_4111C6 = Global_410F82[iVar3 /*84*/].f_41.f_6;
                            Global_4111C7 = Var0.f_2;
                            Global_4111C5 = Global_410F82[iVar3 /*84*/].f_41.f_1;
                            if (func_23(Global_4111C4) && func_13())
                            {
                                if (!func_22(Global_410F82[iVar3 /*84*/].f_41))
                                {
                                    iVar8 = func_21();
                                    Global_41117B[iVar8 /*7*/] = Global_410F82[iVar3 /*84*/].f_41;
                                    Global_41117B[iVar8 /*7*/].f_2 = Global_4111C4;
                                    Global_41117B[iVar8 /*7*/].f_3 = Global_4111C6;
                                    Global_41117B[iVar8 /*7*/].f_1 = Global_4111C5;
                                    Global_41117B[iVar8 /*7*/].f_4 = unk_0x169A8AC9F93C2727();
                                }
                            }
                            else
                            {
                                Global_4111C1 = 1;
                            }
                        }
                    }
                    else if (Global_410F82[iVar3 /*84*/].f_41.f_B & 2 != 0)
                    {
                        Global_4111C4 = Global_410F82[iVar3 /*84*/].f_41.f_4;
                        Global_4111C6 = Global_410F82[iVar3 /*84*/].f_41.f_6;
                        Global_4111C7 = Var0.f_2;
                        Global_4111C5 = Global_410F82[iVar3 /*84*/].f_41.f_1;
                        if ((func_23(Global_4111C4) && func_13()) && func_31(Var0.f_2))
                        {
                            if (!func_22(Global_410F82[iVar3 /*84*/].f_41))
                            {
                                iVar9 = func_21();
                                Global_41117B[iVar9 /*7*/] = Global_410F82[iVar3 /*84*/].f_41;
                                Global_41117B[iVar9 /*7*/].f_2 = Global_4111C4;
                                Global_41117B[iVar9 /*7*/].f_3 = Global_4111C6;
                                Global_41117B[iVar9 /*7*/].f_1 = Global_4111C5;
                                Global_41117B[iVar9 /*7*/].f_4 = unk_0x169A8AC9F93C2727();
                            }
                        }
                        else
                        {
                            Global_4111C1 = 1;
                        }
                    }
                    if (Global_410F82[iVar3 /*84*/].f_41.f_2 == 3)
                    {
                        if (bVar2)
                        {
                            func_19(1, Global_410F82[iVar3 /*84*/].f_41.f_4);
                            Global_4111C1 = 0;
                        }
                        if (Global_410F82[iVar3 /*84*/].f_41.f_B & 4 != 0)
                        {
                            func_18(iVar3, Global_410F82[iVar3 /*84*/].f_41.f_4, Global_410F82[iVar3 /*84*/].f_41.f_A, Global_410F82[iVar3 /*84*/].f_41.f_1, Var0.f_2);
                        }
                    }
                }
                break;
            }
    }
}

void func_18(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)//Position - 0xBA2
{
    switch (iParam1)
    {
        case 1704445500:
            unk_0xA1E7A40E1F56E511(&(Global_24FD09[unk_0x7C7787D2D7139A85() /*421*/].f_7A.f_47), 0);
            break;
    }
    if (iParam0 != -1)
    {
        func_7(iParam0);
    }
}

void func_19(int iParam0, var uParam1)//Position - 0xBDA
{
    Global_258E9A = uParam1;
    Global_258E99 = iParam0;
}

int func_20(int iParam0)//Position - 0xBEE
{
    bool bVar0;
    int iVar1;
    
    bVar0 = false;
    if (!func_13())
    {
        bVar0 = true;
    }
    iVar1 = 1;
    if (*iParam0 == -1 || func_10(*iParam0))
    {
        return 0;
    }
    if (!bVar0)
    {
        if (!unk_0x10312E24AC503B38(func_11()) || unk_0x9F3230C03E32BA3F())
        {
            Global_4111C2 = 1;
            return 0;
        }
        if (Global_2589FE)
        {
            if (Global_410F82[*iParam0 /*84*/].f_41.f_6 == 1067618600 || Global_410F82[*iParam0 /*84*/].f_41.f_6 == -1303831698)
            {
                Global_4111C3 = 1;
                return 0;
            }
        }
    }
    if ((bVar0 || iVar1) || unk_0x813C0E090AFE247B(Global_410F82[*iParam0 /*84*/].f_41))
    {
        if (iVar1 && !bVar0)
        {
        }
        Global_410F82[*iParam0 /*84*/].f_41.f_D = 1;
        Global_410F82[*iParam0 /*84*/].f_41.f_C = 0;
        Global_410F82[*iParam0 /*84*/].f_41.f_E = unk_0xB3EE417AD9F0CAA2();
        if (bVar0)
        {
            if (*iParam0 != -1)
            {
                Global_410F82[*iParam0 /*84*/].f_41.f_8 = 1;
                Global_410F82[*iParam0 /*84*/].f_41.f_C = 1;
            }
        }
        Global_410F82[*iParam0 /*84*/].f_41.f_12 = 0;
        return 1;
    }
    return 0;
}

int func_21()//Position - 0xD1E
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    iVar2 = Global_41117B;
    iVar0 = 0;
    while (iVar0 <= (iVar2 - 1))
    {
        if (Global_41117B[iVar0 /*7*/] != 0 && Global_41117B[iVar0 /*7*/] != 2147483647)
        {
            iVar1++;
        }
        iVar0++;
    }
    if (iVar1 >= iVar2)
    {
        return 0;
    }
    return iVar1;
}

int func_22(int iParam0)//Position - 0xD74
{
    int iVar0;
    int iVar1;
    
    iVar1 = Global_41117B;
    if (iParam0 == 2147483647 || iParam0 == 0)
    {
        return 0;
    }
    iVar0 = 0;
    while (iVar0 <= (iVar1 - 1))
    {
        if (Global_41117B[iVar0 /*7*/] == iParam0)
        {
            return 1;
        }
        if (Global_41117B[iVar0 /*7*/].f_6 == iParam0)
        {
            Global_41117B[iVar0 /*7*/].f_4 = unk_0x169A8AC9F93C2727();
            Global_41117B[iVar0 /*7*/].f_6 = 2147483647;
            return 1;
        }
        iVar0++;
    }
    return 0;
}

int func_23(int iParam0)//Position - 0xDF2
{
    if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == 1780666425 || iParam0 == -2043695058) || iParam0 == -1586170317) || iParam0 == 393059668) || iParam0 == -1027218631) || iParam0 == 1048226110) || iParam0 == 569170531) || iParam0 == -856006867) || iParam0 == 848090538) || iParam0 == -293060240) || iParam0 == -47546905) || iParam0 == 463142405) || iParam0 == 1550217370) || iParam0 == -101307780) || iParam0 == 1052472386) || iParam0 == -2130199671) || iParam0 == -1227654538) || iParam0 == -876012764) || iParam0 == -722894325) || iParam0 == 1407278493) || iParam0 == -1579394494) || iParam0 == 1179783540) || iParam0 == 923419301) || iParam0 == -308826175) || iParam0 == 603298940) || iParam0 == -12619854) || iParam0 == -311112675) || iParam0 == 870439158) || iParam0 == -974288740) || iParam0 == -4138654) || iParam0 == -1180954122) || iParam0 == -1918051016) || iParam0 == 844330594) || iParam0 == 1934825517) || iParam0 == 1852024236) || iParam0 == 2099238988) || iParam0 == 1952643559) || iParam0 == -1172900789) || iParam0 == -2015399333) || iParam0 == -1574795641) || iParam0 == -961034881) || iParam0 == 1135468152) || iParam0 == 1265272476) || iParam0 == -634726636) || iParam0 == 696556762) || iParam0 == 443347049) || iParam0 == 403506509) || iParam0 == -883876414) || iParam0 == -1064150715) || iParam0 == -1387253055) || iParam0 == -716963152) || iParam0 == 1138089938) || iParam0 == -561012053) || iParam0 == 1240683675) || iParam0 == 1241904665) || iParam0 == -494565059) || iParam0 == 827308208) || iParam0 == -1857685192) || iParam0 == 1698417709) || iParam0 == -2017925037) || iParam0 == 1057653594) || iParam0 == 1810506918) || iParam0 == 451427308) || iParam0 == 824622151) || iParam0 == 1253978276) || iParam0 == -1576080766) || iParam0 == 1508411869) || iParam0 == 1428501742) || iParam0 == -1918967151) || iParam0 == 1261538664) || iParam0 == 1180397655) || iParam0 == 1414674366) || iParam0 == 261460130) || iParam0 == -2027658376) || iParam0 == 1668610896) || iParam0 == -2032529561) || iParam0 == -1224479447) || iParam0 == -319306689) || iParam0 == -466527264) || iParam0 == 1925965142) || iParam0 == 592152676) || iParam0 == 2035612943) || iParam0 == 1568659720) || iParam0 == 1220095570) || iParam0 == 2050320631) || iParam0 == 592672421)
    {
        return 1;
    }
    return 0;
}

int func_24()//Position - 0x12B0
{
    bool bVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    
    bVar0 = false;
    if (!func_13())
    {
        bVar0 = true;
    }
    iVar1 = 1;
    iVar2 = func_30();
    if (iVar2 == -1)
    {
        return 0;
    }
    if (!bVar0)
    {
        if (!unk_0x10312E24AC503B38(func_11()) || unk_0x9F3230C03E32BA3F())
        {
            if (func_29(Global_410F82[iVar2 /*84*/].f_41.f_6, Global_410F82[iVar2 /*84*/].f_41.f_4, Global_410F82[iVar2 /*84*/].f_41.f_1) == 1)
            {
                Global_4111C2 = 1;
            }
            return 0;
        }
        if (Global_2589FE)
        {
            if (Global_410F82[iVar2 /*84*/].f_41.f_6 == 1067618600 || Global_410F82[iVar2 /*84*/].f_41.f_6 == -1303831698)
            {
                Global_4111C3 = 1;
                return 0;
            }
        }
    }
    iVar3 = func_28(iVar2);
    if (iVar3 != 2147483647)
    {
        if ((bVar0 || iVar1) || unk_0x813C0E090AFE247B(iVar3))
        {
            Global_410F82[iVar2 /*84*/].f_41.f_D = 1;
            Global_410F82[iVar2 /*84*/].f_41.f_C = 0;
            Global_410F82[iVar2 /*84*/].f_41.f_E = unk_0xB3EE417AD9F0CAA2();
            if (bVar0)
            {
                Global_410F82[iVar2 /*84*/].f_41.f_8 = 1;
                Global_410F82[iVar2 /*84*/].f_41.f_C = 1;
            }
            Global_410F82[iVar2 /*84*/].f_41.f_12 = 0;
            if (bVar0 || iVar1)
            {
                func_25(Global_410F82[iVar2 /*84*/], iVar2);
            }
            Global_4111B3 = 1;
            return 1;
        }
    }
    return 0;
}

void func_25(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x1410
{
    vector3 vVar0;
    int iVar1;
    
    if (iParam19 < 0)
    {
        return;
    }
    vVar0.f_2 = 2147483647;
    vVar0.x = -1969967074;
    vVar0.y = unk_0x7C7787D2D7139A85();
    vVar0.f_2 = { Param0.f_41 };
    vVar0.f_2.f_20 = iParam19;
    iVar1 = func_27(vVar0.y);
    if ((Global_40001.f_5C04 && !Global_40001.f_5C05) && !Global_40001.f_5C06)
    {
        return;
    }
    if (!iVar1 == 0)
    {
        func_26();
        unk_0x990C4E4B3665A4D6(1, &vVar0, 35, iVar1);
    }
}

void func_26()//Position - 0x14A2
{
    unk_0x42B7026D73D48D50("AM_ARENA_SHP");
}

var func_27(int iParam0)//Position - 0x14B1
{
    var uVar0;
    
    if (iParam0 != -1)
    {
        unk_0xA1E7A40E1F56E511(&uVar0, iParam0);
    }
    return uVar0;
}

int func_28(int iParam0)//Position - 0x14C9
{
    if (iParam0 >= 0 && iParam0 < 5)
    {
        return Global_410F82[iParam0 /*84*/].f_41;
    }
    return -1;
}

int func_29(int iParam0, int iParam1, int iParam2)//Position - 0x14EF
{
    if (iParam0 == -433440095 || iParam0 == 1474183246)
    {
        switch (iParam1)
        {
            case 1940862352:
                if (iParam2 >= 10000)
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
                break;
            
            case -31156877:
            case -327918414:
            case 550898518:
            case 835976347:
            case 1347433368:
            case -1100963799:
                if (iParam2 >= 1000)
                {
                    return 1;
                }
                else
                {
                    return 2;
                }
                break;
            
            case 1982688246:
                return 0;
                break;
            
            case 1718438689:
            case -1027218631:
            case -1398318418:
            case 1652884147:
            case -57868256:
            case -1216489292:
            case -46622315:
            case -352356931:
            case -990286235:
            case 563463121:
            case 1734805203:
            case 941287179:
            case -1186079845:
            case -1985150258:
            case -1127021384:
            case -109201286:
            case 312105838:
            case -661030418:
            case 1301046174:
            case -1586170317:
            case 393059668:
            case 23796958:
            case -1077156170:
            case 1780666425:
            case -2043695058:
            case -1922554349:
            case 1287308202:
            case 691372038:
            case 1480707108:
            case 1512499951:
            case 562283735:
            case -154732333:
            case -1362660491:
            case 645708827:
            case 767907967:
            case -1970151306:
            case 718859568:
            case -1955564771:
            case 892388724:
            case -1426920838:
            case 1349151477:
            case 1620609399:
            case 1961641934:
            case 210955503:
            case -59668082:
            case 1736933716:
            case -1468524125:
            case 111573502:
            case 1525644423:
            case 968073639:
            case 1577781788:
            case -934465332:
            case -1194253122:
            case -212607085:
            case -815546555:
            case 1048226110:
            case 569170531:
            case -856006867:
            case 848090538:
            case -47546905:
            case -293060240:
            case 463142405:
            case 1550217370:
            case -664597565:
            case 599804707:
            case 1052472386:
            case -2130199671:
            case -1227654538:
            case 1864522104:
            case 215608230:
            case -876012764:
            case -722894325:
            case 1407278493:
            case -1579394494:
            case -27443911:
            case 1179783540:
            case 923419301:
            case -308826175:
            case 603298940:
            case -12619854:
            case -311112675:
            case 870439158:
            case -974288740:
            case -4138654:
            case -1180954122:
            case -1918051016:
            case 844330594:
            case 1934825517:
            case 1852024236:
            case 2099238988:
            case 1952643559:
            case -1172900789:
            case -2015399333:
            case -1574795641:
            case -961034881:
            case 1135468152:
            case 1265272476:
            case -634726636:
            case 696556762:
            case 443347049:
            case 403506509:
            case -883876414:
            case -1064150715:
            case -1387253055:
            case -716963152:
            case 1138089938:
            case -561012053:
            case 1240683675:
            case 1241904665:
            case -494565059:
            case 827308208:
            case -1857685192:
            case 1698417709:
            case -2017925037:
            case 1057653594:
            case 1810506918:
            case 451427308:
            case 824622151:
            case 1253978276:
            case -1576080766:
            case 1508411869:
            case 1428501742:
            case -1918967151:
            case 1261538664:
            case 1180397655:
            case 1414674366:
            case 261460130:
            case -2027658376:
            case 1668610896:
            case -2032529561:
                return 1;
                break;
            
            case 1515774909:
            case 1173654533:
            case -899802304:
            case -663944335:
            case 1208553146:
            case -613221010:
            case -671062876:
            case 291576838:
            case -1276678868:
            case 711665950:
            case -407201236:
            case -754024203:
            case -1885444887:
            case 1931729587:
            case 1064954035:
            case -180141073:
            case 2131324797:
            case 283351220:
            case 1108628223:
            case -876847842:
            case 68030260:
                return 2;
                break;
            
            default:
                return 0;
                break;
        }
        switch (iParam1)
        {
            case -319306689:
            case -466527264:
            case 1925965142:
            case 592152676:
            case 2035612943:
            case 1568659720:
            case -1224479447:
            case 1220095570:
            case 2050320631:
            case 592672421:
                return 1;
                break;
        }
    }
    else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
    {
        return 0;
    }
    return 1;
}

int func_30()//Position - 0x1992
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 5)
    {
        if (func_28(iVar0) != 2147483647)
        {
            if (func_10(iVar0))
            {
                return iVar0;
            }
        }
        iVar0++;
    }
    return -1;
}

int func_31(int iParam0)//Position - 0x19CC
{
    if ((iParam0 >= 500 && iParam0 <= 599) || iParam0 == 408)
    {
        return 1;
    }
    return 0;
}

void func_32(int iParam0, bool bParam1)//Position - 0x19F9
{
    bool bVar0;
    bool bVar1;
    var uVar2;
    var uVar3;
    
    if (iParam0 == -1)
    {
        return;
    }
    unk_0x45C52481C47B5E75(func_28(iParam0));
    if (Global_410F82[iParam0 /*84*/].f_41.f_A == 1)
    {
    }
    else if (Global_410F82[iParam0 /*84*/].f_41.f_A == 4)
    {
        bVar0 = true;
    }
    else if (Global_410F82[iParam0 /*84*/].f_41.f_A == 2)
    {
        bVar1 = true;
    }
    switch (Global_410F82[iParam0 /*84*/].f_41.f_4)
    {
        case 631654431:
            unk_0xF9CD2E59836A81B7(Global_410F82[iParam0 /*84*/].f_41.f_1, bVar1, bVar0);
            break;
        
        case -180141073:
            unk_0xF3F8F3AEFB36D3A0(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D), bVar1, bVar0);
            break;
        
        case 68030260:
            unk_0x6F89E9B7940EF9AA(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/], &(Global_410F82[iParam0 /*84*/].f_D), bVar1, bVar0);
            break;
        
        case -982394051:
            unk_0xB1AE70B90287D59B(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/].f_1, bVar1, bVar0);
            break;
        
        case 454359403:
            unk_0xF328E9D7D8CA3955(Global_410F82[iParam0 /*84*/].f_41.f_1, bVar1, Global_410F82[iParam0 /*84*/].f_2, bVar0);
            break;
        
        case -1586170317:
            unk_0x9F0E03F64C9A0A61(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), &(Global_410F82[iParam0 /*84*/].f_D.f_22));
            break;
        
        case 650665123:
            unk_0x5F03B7DE61FF9B21(Global_410F82[iParam0 /*84*/].f_41.f_1, bVar1, bVar0);
            break;
        
        case 1654961868:
            unk_0x8E60BC7239215C79(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D), bVar1, bVar0);
            break;
        
        case 1182673174:
            unk_0x9B98D6293096F651(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/], Global_410F82[iParam0 /*84*/].f_1, bVar1, bVar0);
            break;
        
        case 563463121:
            unk_0x8811E80F51D219E1(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case 1940862352:
            unk_0xD9DB9693DF374F61(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), bVar1, bVar0);
            break;
        
        case -1389227906:
            unk_0xD9DB9693DF374F61(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), bVar1, bVar0);
            break;
        
        case -516219046:
            unk_0x62CFA52C4A2F404E(Global_410F82[iParam0 /*84*/].f_41.f_1, bVar1, bVar0);
            break;
        
        case -1398318418:
            unk_0xDAD8667D8CC2ED99(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_22));
            break;
        
        case 2043854386:
            unk_0x811F592AB2038668(Global_410F82[iParam0 /*84*/].f_41.f_1, bVar1, bVar0);
            break;
        
        case 277665518:
            unk_0xE1A24F0879A3B355(Global_410F82[iParam0 /*84*/].f_41.f_1, bVar1, bVar0);
            break;
        
        case -1077156170:
            unk_0x68F013BB2F868678(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_22), -1);
            break;
        
        case -96593501:
            unk_0x6EE0153C48CEFEA3(Global_410F82[iParam0 /*84*/].f_41.f_1, bVar1, bVar0);
            break;
        
        case 742499889:
            unk_0x7B840422B94972E9(Global_410F82[iParam0 /*84*/].f_6, Global_410F82[iParam0 /*84*/].f_7, Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case 2050093329:
            unk_0x8202C80B5E8FA4A8(Global_410F82[iParam0 /*84*/].f_6, Global_410F82[iParam0 /*84*/].f_7, Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case -1752488069:
            unk_0x5EDA96BF739D100A(Global_410F82[iParam0 /*84*/].f_6, Global_410F82[iParam0 /*84*/].f_7, Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case 634375935:
            unk_0xB574ECA9AC0B099D(Global_410F82[iParam0 /*84*/].f_41.f_1, bVar1, bVar0);
            break;
        
        case -1027218631:
            unk_0xCE1C42D0A26DD6E7(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A));
            break;
        
        case -47546905:
            unk_0xDFDF0AB751D84277(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A));
            break;
        
        case 291576838:
            unk_0x1705CE5EA771E9C7(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/], 14, 1, bVar1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), 0, 0, 0, bVar0);
            break;
        
        case 1612072658:
            unk_0x6B5CA44700A10E66(Global_410F82[iParam0 /*84*/].f_41.f_1, bVar1, bVar0);
            break;
        
        case -990286235:
            unk_0xBC155D35715D0A5A(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D), &(Global_410F82[iParam0 /*84*/].f_D.f_D), 1);
            break;
        
        case 1349151477:
            unk_0x4139E480D53BEA5D(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case -31156877:
        case -327918414:
        case 550898518:
        case 835976347:
            unk_0x60F4D5F65C06EFF4(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case -1186079845:
            unk_0x7989737B90F7B25D(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case 1734805203:
            unk_0xE5009EC6D407C7D8(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case -1645229221:
            unk_0x0C676077477536C2(Global_410F82[iParam0 /*84*/].f_41.f_1, bVar1, bVar0);
            break;
        
        case -585718395:
            unk_0xEF7CC9A8FCF7EDCD(Global_410F82[iParam0 /*84*/].f_41.f_1, bVar1, bVar0);
            break;
        
        case 763367758:
            unk_0x053D2666819EBCFF(Global_410F82[iParam0 /*84*/].f_41.f_1, bVar1, bVar0);
            break;
        
        case 1850983186:
            unk_0x0C676077477536C2(Global_410F82[iParam0 /*84*/].f_41.f_1, bVar1, bVar0);
            break;
        
        case -2129781826:
            unk_0x1D056CFDAFF32102(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/], bVar1, bVar0);
            break;
        
        case 1941570214:
            unk_0xCF903C5EF60DFBF9(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/], bVar1, bVar0);
            break;
        
        case 1869490922:
            unk_0x58B0D3D2785E87A2(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/], Global_410F82[iParam0 /*84*/].f_1, bVar1, bVar0);
            break;
        
        case -336803850:
            unk_0x58B0D3D2785E87A2(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/], Global_410F82[iParam0 /*84*/].f_1, bVar1, bVar0);
            break;
        
        case -1412692765:
            unk_0x58B0D3D2785E87A2(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/], Global_410F82[iParam0 /*84*/].f_1, bVar1, bVar0);
            break;
        
        case 618167454:
            unk_0x58B0D3D2785E87A2(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/], Global_410F82[iParam0 /*84*/].f_1, bVar1, bVar0);
            break;
        
        case 980623936:
            unk_0x58B0D3D2785E87A2(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/], Global_410F82[iParam0 /*84*/].f_1, bVar1, bVar0);
            break;
        
        case 1287308202:
        case 691372038:
        case 1480707108:
        case 1512499951:
        case 562283735:
        case -154732333:
        case -1362660491:
        case 645708827:
        case 767907967:
        case -1970151306:
        case 718859568:
        case -1955564771:
        case 892388724:
        case -1426920838:
        case -664597565:
        case -1100963799:
            unk_0x01FCC1908B0E2B5C(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_28), &(Global_410F82[iParam0 /*84*/].f_D.f_2C), bVar1);
            break;
        
        case 312105838:
            unk_0x9282119EB9D1E8F6(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case -1922554349:
            unk_0xD9E4BA7E1787178D(Global_410F82[iParam0 /*84*/].f_41.f_1, "AM_DESTROY_VEH", &uVar2);
            break;
        
        case -2043695058:
            unk_0xD9E4BA7E1787178D(Global_410F82[iParam0 /*84*/].f_41.f_1, "AM_DISTRACT_COPS", &uVar2);
            break;
        
        case 1780666425:
            unk_0xD9E4BA7E1787178D(Global_410F82[iParam0 /*84*/].f_41.f_1, "AM_PLANE_TAKEDOWN", &uVar2);
            break;
        
        case 1643659499:
            unk_0xF146AE706CF21F49(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/].f_1, bVar1, bVar0);
            break;
        
        case 1839532116:
            unk_0xBB60F6800597CFAE(Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 0);
            break;
        
        case 941287179:
            unk_0x0E986C385907D66F(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/].f_3);
            break;
        
        case -352356931:
            unk_0x065C495D8B408C23(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/]);
            break;
        
        case 1948102096:
            unk_0x1DFB827ACB79D580(Global_410F82[iParam0 /*84*/].f_41.f_1, bVar1, bVar0);
            break;
        
        case -1834046564:
            unk_0x63E41F0B54D73CE8(Global_410F82[iParam0 /*84*/].f_41.f_1, bVar1, bVar0);
            break;
        
        case 393059668:
            unk_0x31F366EDBA036D5A(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A));
            break;
        
        case -57868256:
            unk_0xFB3F0CF39B56E874(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_22), Global_410F82[iParam0 /*84*/].f_4);
            break;
        
        case -1127021384:
            unk_0x147D50AC710F440B(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case 1564537328:
            unk_0xD9DB9693DF374F61(Global_410F82[iParam0 /*84*/].f_41.f_1, "RaceToPoint", false, false);
            break;
        
        case -1359375127:
            unk_0x4F9BBF9A4EAD4405(Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 0);
            break;
        
        case 283351220:
            unk_0x1705CE5EA771E9C7(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/], Global_410F82[iParam0 /*84*/].f_5, 1, bVar1, &(Global_410F82[iParam0 /*84*/].f_D.f_28), 0, 0, 0, bVar0);
            break;
        
        case -2085313189:
            switch (Global_410F82[iParam0 /*84*/].f_41.f_6)
            {
                case 1067618600:
                    unk_0x1705CE5EA771E9C7(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/], Global_410F82[iParam0 /*84*/].f_5, 1, bVar1, &(Global_410F82[iParam0 /*84*/].f_D.f_28), 0, 0, 0, bVar0);
                    break;
            }
            break;
        
        case 1704445500:
            unk_0xA579273E9E345F3C(Global_410F82[iParam0 /*84*/].f_41.f_1, 0, &(Global_410F82[iParam0 /*84*/].f_D.f_22), 0, 0);
            break;
        
        case 1620609399:
            unk_0xD9E4BA7E1787178D(Global_410F82[iParam0 /*84*/].f_41.f_1, "AM_HOT_TARGET_DELIVER", &uVar2);
            break;
        
        case 1961641934:
            unk_0xD9E4BA7E1787178D(Global_410F82[iParam0 /*84*/].f_41.f_1, "AM_HOT_TARGET_KILL", &uVar2);
            break;
        
        case 210955503:
            unk_0xD9E4BA7E1787178D(Global_410F82[iParam0 /*84*/].f_41.f_1, "AM_KILL_LIST", &uVar2);
            break;
        
        case -59668082:
            unk_0xD9E4BA7E1787178D(Global_410F82[iParam0 /*84*/].f_41.f_1, "AM_CP_COLLECTION", &uVar2);
            break;
        
        case 1736933716:
            unk_0xD9E4BA7E1787178D(Global_410F82[iParam0 /*84*/].f_41.f_1, "AM_TIME_TRIAL", &uVar2);
            break;
        
        case -1468524125:
            unk_0xD9E4BA7E1787178D(Global_410F82[iParam0 /*84*/].f_41.f_1, "AM_CHALLENGES", &uVar2);
            break;
        
        case 111573502:
            unk_0xD9E4BA7E1787178D(Global_410F82[iParam0 /*84*/].f_41.f_1, "AM_HOT_TARGET_HELI", &uVar2);
            break;
        
        case 1525644423:
            unk_0xD9E4BA7E1787178D(Global_410F82[iParam0 /*84*/].f_41.f_1, "AM_DEAD_DROP", &uVar2);
            break;
        
        case 968073639:
            unk_0xD9E4BA7E1787178D(Global_410F82[iParam0 /*84*/].f_41.f_1, "AM_PENNED_IN", &uVar2);
            break;
        
        case 1577781788:
            unk_0xD9E4BA7E1787178D(Global_410F82[iParam0 /*84*/].f_41.f_1, "AM_PASS_THE_PARCEL", &uVar2);
            break;
        
        case -934465332:
            unk_0xD9E4BA7E1787178D(Global_410F82[iParam0 /*84*/].f_41.f_1, "AM_CRIMINAL_DAMAGE", &uVar2);
            break;
        
        case -1194253122:
            unk_0xD9E4BA7E1787178D(Global_410F82[iParam0 /*84*/].f_41.f_1, "AM_HOT_PROPERTY", &uVar2);
            break;
        
        case -212607085:
            unk_0xD9E4BA7E1787178D(Global_410F82[iParam0 /*84*/].f_41.f_1, "AM_KING_OF_THE_HILL", &uVar2);
            break;
        
        case -815546555:
            unk_0xD9E4BA7E1787178D(Global_410F82[iParam0 /*84*/].f_41.f_1, "AM_HUNT_THE_BEAST", &uVar2);
            break;
        
        case 1048226110:
            unk_0xE10B262952E77A10(Global_410F82[iParam0 /*84*/].f_6, Global_410F82[iParam0 /*84*/].f_7, Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case 569170531:
            unk_0x3A6CB00DFE681F3C(Global_410F82[iParam0 /*84*/].f_6, Global_410F82[iParam0 /*84*/].f_7, Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case -856006867:
            unk_0x70C95C7FFB2AA9AE(Global_410F82[iParam0 /*84*/].f_6, Global_410F82[iParam0 /*84*/].f_7, Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/].f_8);
            break;
        
        case 208223429:
            unk_0x2ACE96EE44008838(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/].f_9);
            break;
        
        case 848090538:
            unk_0xEC82CDAF7E5DD55A(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case 665109499:
            unk_0x38CD8164475439C6(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/], 0, 1);
            break;
        
        case -1330755006:
            unk_0x71F77AC88D79BE54(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/], 0, 1);
            break;
        
        case 1976384368:
            unk_0x68487C0329C3B2FE(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/], 0, 0);
            break;
        
        case 268924934:
            unk_0x6ACECB2C3A92AA40(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/], Global_410F82[iParam0 /*84*/].f_1, Global_410F82[iParam0 /*84*/].f_9);
            break;
        
        case -293060240:
            unk_0x89A17F4ABA1EEE2F(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/].f_6, Global_410F82[iParam0 /*84*/].f_7);
            break;
        
        case 437291904:
            unk_0xCCE5FB55C030AC29(Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 1, Global_410F82[iParam0 /*84*/].f_6, Global_410F82[iParam0 /*84*/].f_7, Global_410F82[iParam0 /*84*/].f_1, Global_410F82[iParam0 /*84*/], Global_410F82[iParam0 /*84*/].f_A, Global_410F82[iParam0 /*84*/].f_B, Global_410F82[iParam0 /*84*/].f_C);
            break;
        
        case -135813048:
            unk_0xEDC72AAEF988700C(Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 1);
            break;
        
        case 463142405:
            unk_0x0EC6A504BD3D7EA4(Global_410F82[iParam0 /*84*/].f_6, Global_410F82[iParam0 /*84*/].f_7, Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/].f_8);
            break;
        
        case 1550217370:
            unk_0x078747D01AF4DC53(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case -101307780:
            unk_0xA125F3AF590F1A9C(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case 599804707:
            unk_0xD9E4BA7E1787178D(Global_410F82[iParam0 /*84*/].f_41.f_1, "GB_SALVAGE", &uVar2);
            break;
        
        case 1347433368:
            unk_0x46F68FB87BBF17D9(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case 1052472386:
            unk_0x7BD7B690B55DCA78(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), &(Global_410F82[iParam0 /*84*/].f_D.f_22));
            break;
        
        case -2130199671:
            unk_0xC621943D2648715E(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), &(Global_410F82[iParam0 /*84*/].f_D.f_22));
            break;
        
        case -1227654538:
            unk_0x3C015C45119EA4BB(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), &(Global_410F82[iParam0 /*84*/].f_D.f_22));
            break;
        
        case -930104477:
            unk_0x8EC5384EA33AE25E(Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 1, Global_410F82[iParam0 /*84*/]);
            break;
        
        case 1864522104:
            unk_0x7C83FFB27FCDB9E2(Global_410F82[iParam0 /*84*/].f_41.f_1, 0);
            break;
        
        case 215608230:
            unk_0x7C83FFB27FCDB9E2(Global_410F82[iParam0 /*84*/].f_41.f_1, 1);
            break;
        
        case -876012764:
            unk_0x4CD346264A9ACDAA(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/]);
            break;
        
        case -722894325:
            unk_0x568A9E3B0BA355D8(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/]);
            break;
        
        case 1407278493:
            unk_0x8F6335EC176D3822(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case -1579394494:
        case -27443911:
            unk_0x41F4BDC4FC548147(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A));
            break;
        
        case 1179783540:
            unk_0x68A1CA1A3B3F1A89(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A));
            break;
        
        case 923419301:
            unk_0x04624E27CA045E8B(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), 0);
            break;
        
        case -308826175:
            unk_0x04624E27CA045E8B(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), 1);
            break;
        
        case 603298940:
            unk_0x04624E27CA045E8B(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), 2);
            break;
        
        case -12619854:
            unk_0x04624E27CA045E8B(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), 3);
            break;
        
        case -311112675:
            unk_0x04624E27CA045E8B(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), 4);
            break;
        
        case 870439158:
            unk_0x04624E27CA045E8B(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), 5);
            break;
        
        case -974288740:
            unk_0x04624E27CA045E8B(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), 6);
            break;
        
        case -4138654:
            unk_0x04624E27CA045E8B(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), 7);
            break;
        
        case -1180954122:
            unk_0x04624E27CA045E8B(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), 8);
            break;
        
        case -1918051016:
            unk_0x04624E27CA045E8B(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), 9);
            break;
        
        case 844330594:
            unk_0x04624E27CA045E8B(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), 10);
            break;
        
        case 1934825517:
            unk_0x2D35F822DAB4B318(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), 0);
            break;
        
        case 1852024236:
            unk_0x2D35F822DAB4B318(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), 1);
            break;
        
        case 2099238988:
            unk_0x2D35F822DAB4B318(Global_410F82[iParam0 /*84*/].f_41.f_1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), 2);
            break;
        
        case 1952643559:
            break;
        
        case 2039302543:
            break;
        
        case -1172900789:
            unk_0x6B08EFE9208CBE47(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/].f_9);
            break;
        
        case -1733398043:
            unk_0x4BD9006712395847(Global_410F82[iParam0 /*84*/].f_9, Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 1);
            break;
        
        case -1892760262:
            unk_0x4F833B46132391C4(Global_410F82[iParam0 /*84*/].f_9, Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 1);
            break;
        
        case -2015399333:
            unk_0x7F59762B4D80CE8E(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case 402505853:
            if (func_33(unk_0x0C98179F08C6DA4F(Global_410F82[iParam0 /*84*/]), 0, 0))
            {
                unk_0x0B6B7277CAAC9242(unk_0x0C98179F08C6DA4F(Global_410F82[iParam0 /*84*/]), Global_410F82[iParam0 /*84*/].f_1, Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 1);
            }
            break;
        
        case 1678112166:
            unk_0x175158C157D5E50A(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/], 0, 1);
            break;
        
        case -1143510182:
            unk_0x89FC4E6D1AAB4407(Global_410F82[iParam0 /*84*/], Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 1);
            break;
        
        case -1574795641:
            unk_0x8EBA2384EC7A923D(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case -961034881:
            unk_0x53FC55B55010CA0A(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case 1135468152:
            unk_0x037C8ED6248A20C2(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case 1265272476:
            unk_0x74CB6C09CF941DE2(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/].f_1, Global_410F82[iParam0 /*84*/].f_9);
            break;
        
        case -634726636:
            unk_0x66CC1F86B0B49ECE(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case 696556762:
            unk_0x44EB480C7CD0FAFF(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case 837955913:
            unk_0xBE56C265E32B805C(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/].f_41.f_F, 0, 1);
            break;
        
        case 403506509:
            unk_0xAD52406CDC5F4673(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case -883876414:
            unk_0x1021C1B06967285D(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/].f_41.f_F);
            break;
        
        case -1064150715:
        case -1387253055:
        case -716963152:
        case 1138089938:
            unk_0x9DBC9851B4A6E162(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/].f_41.f_F);
            break;
        
        case -1532467144:
            unk_0x8F81FCDD0CADF034(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/], 0, 1);
            break;
        
        case 1815541181:
            unk_0xD6D7FE49E22888BA(Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 0);
            break;
        
        case -561012053:
            unk_0xCBCE76D011082E35(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case -1342064661:
            unk_0xEB3E43479BE86086(Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 1);
            break;
        
        case 1240683675:
            unk_0x3602476C24B5DFF8(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case 1241904665:
            unk_0x4B245EEA17B6CC27(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/], Global_410F82[iParam0 /*84*/].f_41.f_10, Global_410F82[iParam0 /*84*/].f_1);
            break;
        
        case -494565059:
            unk_0xE6FAF1EC1B10EE54(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case 827308208:
            unk_0x3B058E7BDC98148E(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case -1857685192:
            unk_0xA382235DF5634669(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case 1698417709:
            unk_0x0E02BA4947E1A26A(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case -2017925037:
            unk_0xDE77A37823DC869B(Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case 1057653594:
        case 1810506918:
        case 451427308:
        case 824622151:
        case 1253978276:
        case -1576080766:
        case 1508411869:
        case 1428501742:
        case -1918967151:
        case 1261538664:
        case 1180397655:
        case 1414674366:
        case 261460130:
        case -2027658376:
            unk_0x22AB6AC3DFC82535(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/]);
            break;
        
        case -1693570755:
            unk_0x65A00C79A1FC9798(Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 1, &(Global_410F82[iParam0 /*84*/].f_D.f_1A), Global_410F82[iParam0 /*84*/]);
            break;
        
        case 1868043300:
            unk_0xEAD3D81F2C3A1458(Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 1, Global_410F82[iParam0 /*84*/], Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case -697248883:
            unk_0x43AA7FAC4E6D6687(Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 1, Global_410F82[iParam0 /*84*/], Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case -1295545795:
            unk_0x487009DD91D93429(Global_410F82[iParam0 /*84*/].f_9, Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 1);
            break;
        
        case 914079366:
            unk_0xD30E8392F407C328(Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 1, 1, Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 0, 0, 0, 0, 0);
            break;
        
        case 395122350:
            unk_0xD30E8392F407C328(Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 1, 0, 0, 1, Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 0, 0, 0);
            break;
        
        case -331981076:
            unk_0xD30E8392F407C328(Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 1, 0, 0, 0, 0, 1, Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 0);
            break;
        
        case 1671535231:
            unk_0xD30E8392F407C328(Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 1, 0, 0, 0, 0, 0, 0, 1, Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case 1982688246:
            break;
    }
    switch (Global_410F82[iParam0 /*84*/].f_41.f_4)
    {
        case 1668610896:
            unk_0x72E7C7B9615FA3C3(Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 0, 1, Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 0);
            break;
        
        case -2032529561:
            unk_0x72E7C7B9615FA3C3(Global_410F82[iParam0 /*84*/].f_41.f_1, 1, Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 0, 0, 0);
            break;
        
        case -1224479447:
            unk_0x72E7C7B9615FA3C3(Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 0, 0, 0, 1, Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
        
        case -319306689:
        case -466527264:
        case 1925965142:
        case 592152676:
        case 2035612943:
        case 1568659720:
            unk_0x3EC7471E6909798A(Global_410F82[iParam0 /*84*/].f_41.f_1, Global_410F82[iParam0 /*84*/], Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 0);
            break;
        
        case 1220095570:
        case 2050320631:
        case 592672421:
            unk_0x3EC7471E6909798A(Global_410F82[iParam0 /*84*/].f_41.f_1, 0, 0, Global_410F82[iParam0 /*84*/], Global_410F82[iParam0 /*84*/].f_41.f_1);
            break;
    }
    if (func_13())
    {
        if (bParam1)
        {
            unk_0x740B62B59ED839C0(Global_410F82[iParam0 /*84*/].f_41, &uVar3);
        }
    }
    func_7(iParam0);
}

int func_33(int iParam0, bool bParam1, bool bParam2)//Position - 0x3273
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

int func_34(int iParam0, var uParam1)//Position - 0x32BD
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 5)
    {
        if (Global_410F82[iVar0 /*84*/].f_41 == iParam0)
        {
            *uParam1 = { Global_410F82[iVar0 /*84*/] };
            return iVar0;
        }
        iVar0++;
    }
    return -1;
}

void func_35(int iParam0)//Position - 0x32FF
{
    int iVar0;
    var uVar1;
    char* sVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    
    if (Global_4120A5[iParam0 /*12*/].f_1 == Global_4120A5[iParam0 /*12*/].f_6)
    {
        if (Global_4120A5[iParam0 /*12*/].f_1 != 1445302971 && Global_4120A5[iParam0 /*12*/].f_1 != -1316591359)
        {
            return;
        }
    }
    iVar0 = 0;
    sVar2 = "Wardrobe";
    iVar0 = unk_0xA8C462EF7D9DC564(sVar2);
    iVar0 = (iVar0 || func_37());
    iVar0 = (iVar0 + Global_41189D);
    func_36(&uVar1);
    iVar0 = (iVar0 || uVar1);
    unk_0x3B76114EC84D5812(&iVar0, 28);
    unk_0x3B76114EC84D5812(&iVar0, 29);
    unk_0x3B76114EC84D5812(&iVar0, 26);
    iVar3 = (Global_4120A5[iParam0 /*12*/].f_9 && iVar0);
    iVar4 = (Global_4120A5[iParam0 /*12*/].f_8 && iVar0);
    iVar5 = Global_4120A5[iParam0 /*12*/].f_7;
    if (iVar5 == 0)
    {
        iVar5 = -2085313189;
    }
    if (((Global_4120A5[iParam0 /*12*/] != Global_4120A5[iParam0 /*12*/].f_5 || Global_4120A5[iParam0 /*12*/].f_1 != Global_4120A5[iParam0 /*12*/].f_6) || Global_4120A5[iParam0 /*12*/].f_2 != iVar5) || Global_4120A5[iParam0 /*12*/].f_3 != (iVar4 + iVar3))
    {
        Global_1A6E6 = 1;
    }
}

int func_36(var uParam0)//Position - 0x342B
{
    *uParam0 = SYSTEM::SHIFT_LEFT(1, 2);
    return 5410420;
}

var func_37()//Position - 0x3440
{
    return SYSTEM::SHIFT_LEFT(1, 25);
}

int func_38()//Position - 0x344F
{
    var uVar0;
    
    func_46(&uVar0);
    if (Global_140852 == 0)
    {
        if (!unk_0x393E9918BC37548A())
        {
            return 1;
        }
    }
    if (func_45())
    {
        return 1;
    }
    if (Global_258E39)
    {
        return 1;
    }
    if (func_44())
    {
        return 1;
    }
    if (func_43(159))
    {
        if (!func_42())
        {
            return 1;
        }
    }
    if (func_43(157))
    {
        return 1;
    }
    if (!unk_0x2A983C9CF4EE0D5E())
    {
        return 1;
    }
    if (func_39() != 0)
    {
        if (unk_0x222F76006659B0EB(func_39()) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int func_39()//Position - 0x34D9
{
    switch (func_41())
    {
        case 0:
            return func_40();
            break;
        
        case 2:
            return joaat("creator");
            break;
    }
    return 0;
}

int func_40()//Position - 0x350C
{
    switch (Global_258E9F)
    {
        case 0:
            return joaat("freemode");
        
        default:
    }
    return joaat("freemode");
}

int func_41()//Position - 0x3530
{
    return Global_7810;
}

bool func_42()//Position - 0x353B
{
    return Global_255E41.f_256;
}

int func_43(int iParam0)//Position - 0x354A
{
    if (unk_0xD076BFB919B20653(1, iParam0))
    {
        return 1;
    }
    return 0;
}

bool func_44()//Position - 0x3561
{
    return Global_258577;
}

bool func_45()//Position - 0x356D
{
    return Global_255E41.f_251;
}

void func_46(var uParam0)//Position - 0x357C
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
                    func_47(iVar0);
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

void func_47(int iParam0)//Position - 0x35EF
{
    vector3 vVar0;
    int iVar1;
    int iVar2;
    bool bVar3;
    
    if (unk_0x3C1EC42A2CC175C5(1, iParam0, &vVar0, 3))
    {
        if (func_33(vVar0.y, 1, 1))
        {
            iVar1 = unk_0x23625FE58BACEBFD(vVar0.y);
            if (unk_0xD4B321D9096B01FC(iVar1))
            {
                if (unk_0x5294582CE404D3F4(iVar1, 0))
                {
                    iVar2 = unk_0x4D57D3E5ECE15A41(iVar1, 0);
                    if (unk_0x3D65AB2C3D476E32(iVar2, vVar0.z) && unk_0xF77CF4BC35906B30())
                    {
                        if (func_48(iVar2, &bVar3))
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

int func_48(int iParam0, var uParam1)//Position - 0x3670
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

void func_49()//Position - 0x36CF
{
    SYSTEM::WAIT(0);
}

void func_50()//Position - 0x36DC
{
    func_51();
}

void func_51()//Position - 0x36E8
{
    unk_0x9C9E32388A7886A2();
}

void func_52(struct<33> Param0)//Position - 0x36F4
{
    if (Global_40001.f_5C04)
    {
        func_50();
    }
    Local_22.f_41 = { Param0 };
    Local_22 = { Param0.f_13 };
    Local_22.f_D = { Global_410F82[Param0.f_20 /*84*/].f_D };
    iLocal_21 = Param0.f_20;
    if (Param0.f_20 < 0)
    {
        func_50();
    }
    if (!func_53(Param0, Param0.f_20))
    {
        func_7(Param0.f_20);
        func_50();
    }
    if (Local_22.f_41.f_2 != 0)
    {
        Local_22.f_41.f_2 = 1;
    }
}

int func_53(struct<18> Param0, var uParam1, int iParam2)//Position - 0x3778
{
    if (Global_410F82[iParam2 /*84*/].f_41.f_1 != Param0.f_1)
    {
        return 0;
    }
    if (Global_410F82[iParam2 /*84*/].f_41.f_3 != Param0.f_3)
    {
        return 0;
    }
    if (Global_410F82[iParam2 /*84*/].f_41.f_4 != Param0.f_4)
    {
        return 0;
    }
    if (Global_410F82[iParam2 /*84*/].f_41.f_5 != Param0.f_5)
    {
        return 0;
    }
    if (Global_410F82[iParam2 /*84*/].f_41.f_6 != Param0.f_6)
    {
        return 0;
    }
    if (Global_410F82[iParam2 /*84*/].f_41.f_7 != Param0.f_7)
    {
        return 0;
    }
    if (Global_410F82[iParam2 /*84*/].f_41.f_E != Param0.f_E)
    {
        return 0;
    }
    if (Global_410F82[iParam2 /*84*/].f_41.f_11 != Param0.f_11)
    {
        return 0;
    }
    return 1;
}

