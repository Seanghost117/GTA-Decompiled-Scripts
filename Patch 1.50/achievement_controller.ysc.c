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
    int iLocal_21 = 0;
    float fLocal_22 = 0f;
    var uLocal_23 = 0;
    var uLocal_24 = 0;
    var uLocal_25 = 0;
    float fLocal_26 = 0f;
    float fLocal_27 = 0f;
    var uLocal_28 = 0;
    var uLocal_29 = 0;
    float fLocal_30 = 0f;
    float fLocal_31 = 0f;
    float fLocal_32 = 0f;
    var uLocal_33 = 0;
    var uLocal_34 = 0;
    var uLocal_35 = 0;
    var uLocal_36 = 0;
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
    int iLocal_53 = 0;
    int iLocal_54 = 0;
    int iLocal_55 = 0;
    int iLocal_56 = 0;
    int iLocal_57 = 0;
    int iLocal_58 = 0;
    var uLocal_59 = 0;
    var uLocal_60 = 0;
    int iLocal_61 = 0;
    int iLocal_62 = 0;
    float fLocal_63 = 0f;
    int iLocal_64 = 0;
    int iLocal_65 = 0;
    int iLocal_66 = 0;
    int iLocal_67 = 0;
    var uLocal_68 = 0;
    var uLocal_69 = 0;
    bool bLocal_70 = 0;
    int iLocal_71 = 0;
    int iLocal_72 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
    int iVar0;
    
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
    iLocal_21 = 3;
    fLocal_22 = 0f;
    fLocal_26 = -0.0375f;
    fLocal_27 = 0.17f;
    fLocal_30 = 80f;
    fLocal_31 = 140f;
    fLocal_32 = 180f;
    iLocal_40 = 1;
    iLocal_41 = 65;
    iLocal_42 = 49;
    iLocal_43 = 64;
    iLocal_61 = 1000;
    iLocal_62 = 3333;
    fLocal_63 = 0f;
    bLocal_70 = true;
    unk_0x0A2FDF6E490B25B3();
    if (unk_0xD4BE58A7E3E102AC(32))
    {
        unk_0x9C9E32388A7886A2();
    }
    iLocal_56 = unk_0x9B35D07DCD0F0B43();
    iLocal_65 = 0;
    func_168(iLocal_66);
    func_167();
    func_165(&Global_41275B);
    func_164(&Global_41275B, 1);
    func_162(&iLocal_67);
    while (true)
    {
        if (Global_7907 != iLocal_65)
        {
            if (iLocal_65 == 0 && Global_7907 != 0)
            {
                if (unk_0xDC143D98E1977B20() || unk_0x39FDED461BF385C3())
                {
                    func_161("CHEAT_TROPHIE", -1);
                }
                else
                {
                    func_161("CHEAT_ACHIEVE", -1);
                }
            }
            if (iLocal_65 != 0 && Global_7907 == 0)
            {
            }
        }
        iLocal_65 = Global_7907;
        if (!func_160(14))
        {
            if (!unk_0x17A6988567C0F4A8(24))
            {
                func_151();
            }
            if (!unk_0x17A6988567C0F4A8(25))
            {
                func_149();
            }
            if (Global_7819)
            {
                if (!unk_0x17A6988567C0F4A8(12))
                {
                    iVar0 = func_134(1);
                    if (iVar0 > 0)
                    {
                        func_133(12, iVar0);
                        unk_0x41410A69AD49AFCD(joaat("num_gold_medals_obtained"), iVar0, 1);
                    }
                    if (iVar0 >= 70)
                    {
                        func_127(12, 1);
                    }
                }
                Global_7819 = 0;
            }
            if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
            {
                if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
                {
                    iLocal_66++;
                    if (unk_0x9B35D07DCD0F0B43() > iLocal_56)
                    {
                        func_116(0);
                        iLocal_56 = (unk_0x9B35D07DCD0F0B43() + iLocal_61);
                    }
                    if (unk_0x9B35D07DCD0F0B43() > iLocal_57)
                    {
                        if (!unk_0x17A6988567C0F4A8(14) || iLocal_64 == 1)
                        {
                            if (func_115(53))
                            {
                                func_114();
                            }
                        }
                        iLocal_57 = (unk_0x9B35D07DCD0F0B43() + iLocal_62);
                    }
                }
            }
            func_106(&Global_41275B);
            func_1();
        }
        else
        {
            func_106(&Global_41275B);
            func_1();
        }
        SYSTEM::WAIT(0);
    }
}

void func_1()//Position - 0x20A
{
    var uVar0;
    int iVar1;
    
    if (!func_105(&Global_41275B))
    {
        return;
    }
    if (!Global_12B21)
    {
        if (iLocal_72)
        {
            iLocal_72 = 0;
        }
        return;
    }
    if (!func_102())
    {
        return;
    }
    if (bLocal_70)
    {
        if (!func_100(3, -1))
        {
            return;
        }
        if (!func_100(5, -1))
        {
            return;
        }
    }
    if (iLocal_72)
    {
        return;
    }
    uVar0 = unk_0x569A52C789679C80(&iVar1);
    if (iVar1 == -1 && iLocal_71 == 0)
    {
    }
    if (uVar0 && iVar1 == 0)
    {
        func_99();
        iLocal_72 = 1;
    }
    else
    {
        func_2();
    }
}

void func_2()//Position - 0x29A
{
    int iVar0;
    
    if (!unk_0x17A6988567C0F4A8(33))
    {
        if (func_96())
        {
            func_127(33, 1);
        }
    }
    if (!unk_0x17A6988567C0F4A8(29))
    {
        if (func_92(&iLocal_67) > 5f)
        {
            func_19(unk_0x0FA8183DAD2B3203());
            func_162(&iLocal_67);
        }
    }
    iVar0 = func_17(func_18(-1), 0);
    if (iVar0 >= 100)
    {
        if (!unk_0x17A6988567C0F4A8(36))
        {
            func_127(36, 1);
        }
    }
    if (iVar0 >= 50)
    {
        if (!unk_0x17A6988567C0F4A8(35))
        {
            func_127(35, 1);
        }
    }
    if (iVar0 >= 25)
    {
        if (!unk_0x17A6988567C0F4A8(34))
        {
            func_127(34, 1);
        }
    }
    if (!unk_0x17A6988567C0F4A8(37))
    {
        func_15(0);
    }
    if (!unk_0x17A6988567C0F4A8(38))
    {
        if (func_14(joaat("mpply_total_custom_races_won")) >= 5)
        {
            func_127(38, 1);
        }
    }
    if (!unk_0x17A6988567C0F4A8(39))
    {
        if (func_13(48, -1) >= 10)
        {
            func_127(39, 1);
        }
    }
    if (!unk_0x17A6988567C0F4A8(40))
    {
        if (func_13(52, -1) > 0)
        {
            func_127(40, 1);
        }
    }
    if (!unk_0x17A6988567C0F4A8(41))
    {
        if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_8B1.f_12, 1))
        {
            func_127(41, 1);
        }
    }
    if (!unk_0x17A6988567C0F4A8(43))
    {
        if (func_12(755, -1, 0) >= 30)
        {
            func_127(43, 1);
        }
    }
    if (!unk_0x17A6988567C0F4A8(44))
    {
        if (func_13(14, -1) >= 20)
        {
            func_127(44, 1);
        }
    }
    if (!unk_0x17A6988567C0F4A8(45))
    {
        func_10(0);
    }
    if (!unk_0x17A6988567C0F4A8(48))
    {
        if (func_7(11, -1, -1))
        {
            func_127(48, 1);
        }
    }
    if (!unk_0x17A6988567C0F4A8(49))
    {
        func_3(0);
    }
}

int func_3(bool bParam0)//Position - 0x43D
{
    if (!func_102())
    {
        return 0;
    }
    if (!Global_12B21)
    {
        return 0;
    }
    if (unk_0x17A6988567C0F4A8(49))
    {
        return 0;
    }
    if (bParam0 == 1)
    {
    }
    if (!func_4(100, -1))
    {
        if (bParam0 == 1)
        {
        }
        return 0;
    }
    if (!func_4(102, -1))
    {
        if (bParam0 == 1)
        {
        }
        return 0;
    }
    if (!func_4(101, -1))
    {
        if (bParam0 == 1)
        {
        }
        return 0;
    }
    func_127(49, 1);
    return 1;
}

int func_4(int iParam0, int iParam1)//Position - 0x4B8
{
    var uVar0;
    var uVar1;
    
    uVar0 = Global_274F55[iParam0 /*3*/][func_5(iParam1)];
    if (unk_0xF7B5584413D4EA03(uVar0, &uVar1, -1))
    {
        return uVar1;
    }
    return 0;
}

int func_5(var uParam0)//Position - 0x4E4
{
    int iVar0;
    int iVar1;
    
    iVar0 = uParam0;
    if (iVar0 == -1)
    {
        iVar1 = func_6();
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

int func_6()//Position - 0x518
{
    return Global_1407E9;
}

int func_7(int iParam0, int iParam1, int iParam2)//Position - 0x524
{
    int iVar0;
    int iVar1;
    var uVar2;
    
    iVar0 = 0;
    if (iParam1 == -1)
    {
        iParam1 = func_6();
    }
    iVar1 = func_9(iParam0, iParam1);
    uVar2 = func_8(iParam0);
    if (0 != iVar1)
    {
        iVar0 = unk_0x0F1A9E0CCDF4F08D(iVar1, uVar2, iParam2);
    }
    return iVar0;
}

int func_8(int iParam0)//Position - 0x561
{
    int iVar0;
    
    iVar0 = 0;
    if (iParam0 >= 0 && iParam0 < 192)
    {
        iVar0 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
    }
    else if (iParam0 >= 192 && iParam0 < 384)
    {
        iVar0 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
    }
    else if (iParam0 >= 513 && iParam0 < 705)
    {
        iVar0 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
    }
    else if (iParam0 >= 705 && iParam0 < 1281)
    {
        iVar0 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
    }
    else if (iParam0 >= 2919 && iParam0 < 3111)
    {
        iVar0 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
    }
    else if (iParam0 >= 3111 && iParam0 < 3879)
    {
        iVar0 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
    }
    else if (iParam0 >= 4335 && iParam0 < 4399)
    {
        iVar0 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
    }
    else if (iParam0 >= 4207 && iParam0 < 4335)
    {
        iVar0 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
    }
    else if (iParam0 >= 6029 && iParam0 < 6413)
    {
        iVar0 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
    }
    else if (iParam0 >= 7385 && iParam0 < 7641)
    {
        iVar0 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
    }
    else if (iParam0 >= 7321 && iParam0 < 7385)
    {
        iVar0 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
    }
    else if (iParam0 >= 9361 && iParam0 < 9553)
    {
        iVar0 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
    }
    else if (iParam0 >= 15369 && iParam0 < 15561)
    {
        iVar0 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
    }
    else if (iParam0 >= 15562 && iParam0 < 15946)
    {
        iVar0 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
    }
    else if (iParam0 >= 15946 && iParam0 < 16010)
    {
        iVar0 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
    }
    else if (iParam0 >= 18098 && iParam0 < 18162)
    {
        iVar0 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
    }
    else if (iParam0 >= 22066 && iParam0 < 22194)
    {
        iVar0 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
    }
    else if (iParam0 >= 24962 && iParam0 < 25538)
    {
        iVar0 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
    }
    else if (iParam0 >= 26810 && iParam0 < 27258)
    {
        iVar0 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
    }
    else if (iParam0 >= 28098 && iParam0 < 28354)
    {
        iVar0 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
    }
    else if (iParam0 >= 28355 && iParam0 < 28483)
    {
        iVar0 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
    }
    return iVar0;
}

int func_9(int iParam0, int iParam1)//Position - 0x8FD
{
    int iVar0;
    
    if (iParam1 == -1)
    {
        iParam1 = func_6();
    }
    iVar0 = 0;
    if (iParam0 >= 0 && iParam0 < 192)
    {
        iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam1);
    }
    else if (iParam0 >= 192 && iParam0 < 384)
    {
        iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam1);
    }
    else if (iParam0 >= 513 && iParam0 < 705)
    {
        iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
    }
    else if (iParam0 >= 705 && iParam0 < 1281)
    {
        iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
    }
    else if (iParam0 >= 2919 && iParam0 < 3111)
    {
        iVar0 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
    }
    else if (iParam0 >= 3111 && iParam0 < 3879)
    {
        iVar0 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam1);
    }
    else if (iParam0 >= 4335 && iParam0 < 4399)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
    }
    else if (iParam0 >= 4207 && iParam0 < 4335)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
    }
    else if (iParam0 >= 6029 && iParam0 < 6413)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
    }
    else if (iParam0 >= 7321 && iParam0 < 7385)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
    }
    else if (iParam0 >= 7385 && iParam0 < 7641)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
    }
    else if (iParam0 >= 9361 && iParam0 < 9553)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
    }
    else if (iParam0 >= 15369 && iParam0 < 15561)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
    }
    else if (iParam0 >= 15562 && iParam0 < 15946)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
    }
    else if (iParam0 >= 15946 && iParam0 < 16010)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
    }
    else if (iParam0 >= 18098 && iParam0 < 18162)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
    }
    else if (iParam0 >= 22066 && iParam0 < 22194)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
    }
    else if (iParam0 >= 24962 && iParam0 < 25538)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
    }
    else if (iParam0 >= 26810 && iParam0 < 27258)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
    }
    else if (iParam0 >= 28098 && iParam0 < 28354)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
    }
    else if (iParam0 >= 28355 && iParam0 < 28483)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
    }
    return iVar0;
}

int func_10(bool bParam0)//Position - 0xC68
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    if (!func_102())
    {
        return 0;
    }
    if (unk_0x17A6988567C0F4A8(45))
    {
        return 0;
    }
    if (!Global_12B21)
    {
        return 0;
    }
    iVar2 = func_12(756, -1, 0);
    iVar0 = 0;
    while (iVar0 < 9)
    {
        if (func_11(iVar2, iVar0, bParam0))
        {
            iVar1++;
        }
        iVar0++;
    }
    if (iVar1 == 9)
    {
        func_127(45, 1);
        return 1;
    }
    return 0;
}

int func_11(int iParam0, int iParam1, bool bParam2)//Position - 0xCDA
{
    bool bVar0;
    
    bVar0 = unk_0xA2BC31158C8CEFD2(iParam0, iParam1);
    if (!bParam2)
    {
        return bVar0;
    }
    switch (iParam1)
    {
        case 0:
            return bVar0;
        
        case 1:
            return bVar0;
        
        case 2:
            return bVar0;
        
        case 3:
            return bVar0;
        
        case 4:
            return bVar0;
        
        case 5:
            return bVar0;
        
        case 6:
            return bVar0;
        
        case 7:
            return bVar0;
        
        case 8:
            return bVar0;
        
        default:
    }
    return 0;
}

int func_12(int iParam0, int iParam1, int iParam2)//Position - 0xD62
{
    int iVar0;
    var uVar1;
    
    if (iParam2 == 0)
    {
    }
    iVar0 = Global_26CBBF[iParam0 /*3*/][func_5(iParam1)];
    if (unk_0x367DA79FE620711B(iVar0, &uVar1, -1))
    {
        return uVar1;
    }
    return 0;
}

int func_13(int iParam0, int iParam1)//Position - 0xD94
{
    int iVar0;
    var uVar1;
    
    iVar0 = Global_2755A7[iParam0 /*3*/][func_5(iParam1)];
    if (unk_0x367DA79FE620711B(iVar0, &uVar1, -1))
    {
        return uVar1;
    }
    return 0;
}

int func_14(int iParam0)//Position - 0xDC0
{
    int iVar0;
    var uVar1;
    
    iVar0 = iParam0;
    if (unk_0x367DA79FE620711B(iVar0, &uVar1, -1))
    {
        return uVar1;
    }
    return 0;
}

int func_15(bool bParam0)//Position - 0xDDE
{
    int iVar0;
    
    if (unk_0x17A6988567C0F4A8(37))
    {
        return 0;
    }
    if (!func_102())
    {
        return 0;
    }
    if (!Global_12B21)
    {
        return 0;
    }
    if (bParam0)
    {
        iVar0 = func_13(21, -1);
        iVar0 = (iVar0 - func_13(58, -1));
        iVar0 = (iVar0 - func_13(57, -1));
    }
    if (func_16(8, -1))
    {
        func_127(37, 1);
        return 1;
    }
    return 0;
}

int func_16(int iParam0, int iParam1)//Position - 0xE48
{
    var uVar0;
    var uVar1;
    
    uVar0 = Global_275716[iParam0 /*3*/][func_5(iParam1)];
    if (unk_0xF7B5584413D4EA03(uVar0, &uVar1, -1))
    {
        return uVar1;
    }
    return 0;
}

int func_17(int iParam0, int iParam1)//Position - 0xE74
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    float fVar4;
    
    if (iParam1 == 0)
    {
    }
    iVar1 = 8000;
    iVar2 = 0;
    iVar3 = ((iVar1 - iVar2) / 2);
    iVar0 = 0;
    while (iVar0 <= 100)
    {
        if (iVar1 == iVar2)
        {
            iVar0 = 8000;
            if (iVar3 == 0)
            {
                iVar3 = 1;
            }
            return iVar3;
        }
        if (Global_46F22[iVar3] == iParam0)
        {
            iVar1 = iVar3;
            iVar2 = iVar3;
        }
        else if (Global_46F22[iVar3] < iParam0)
        {
            if (iVar2 == iVar3)
            {
                iVar2++;
            }
            else
            {
                iVar2 = iVar3;
            }
        }
        else if (iVar1 == iVar3)
        {
            iVar1 = (iVar1 - 1);
        }
        else
        {
            iVar1 = iVar3;
        }
        fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
        iVar3 = SYSTEM::ROUND(fVar4);
        iVar0++;
    }
    return 8000;
}

int func_18(int iParam0)//Position - 0xF33
{
    return Global_151F57[func_5(iParam0)];
}

void func_19(int iParam0)//Position - 0xF47
{
    int iVar0;
    struct<222> Var1;
    
    Var1 = 44;
    Var1.f_DD = 51;
    if (unk_0x17A6988567C0F4A8(29))
    {
        return;
    }
    func_88(iParam0, &Var1);
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < Var1)
    {
        if (func_20(iParam0, Var1[iVar0 /*5*/]))
        {
            func_127(29, 1);
            return;
        }
        iVar0++;
    }
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < Var1.f_DD)
    {
        if (func_20(iParam0, Var1.f_DD[iVar0 /*5*/]))
        {
            func_127(29, 1);
            return;
        }
        iVar0++;
    }
}

int func_20(int iParam0, int iParam1)//Position - 0xFD6
{
    var uVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    struct<7> Var7;
    
    if (iParam1 == -61829581)
    {
        return 0;
    }
    if (iParam1 == joaat("weapon_knuckle"))
    {
        return 0;
    }
    if (unk_0x2BF5E63466422C38(iParam0))
    {
        return 0;
    }
    if (!unk_0x980642D66B4A4C61(iParam0, iParam1, 0))
    {
        return 0;
    }
    iVar1 = func_87(iParam1, &uVar0);
    if ((((((((((((((((((((((iParam1 != joaat("weapon_pistol") && iParam1 != joaat("weapon_appistol")) && iParam1 != joaat("weapon_combatpistol")) && iParam1 != joaat("weapon_microsmg")) && iParam1 != joaat("weapon_smg")) && iParam1 != joaat("weapon_pumpshotgun")) && iParam1 != joaat("weapon_assaultshotgun")) && iParam1 != joaat("weapon_sawnoffshotgun")) && iParam1 != joaat("weapon_assaultrifle")) && iParam1 != joaat("weapon_carbinerifle")) && iParam1 != joaat("weapon_advancedrifle")) && iParam1 != joaat("weapon_sniperrifle")) && iParam1 != joaat("weapon_heavysniper")) && iParam1 != joaat("weapon_mg")) && iParam1 != joaat("weapon_combatmg")) && iParam1 != joaat("weapon_grenadelauncher")) && iParam1 != -572349828) && iParam1 != joaat("weapon_assaultsmg")) && iParam1 != 392730790) && iParam1 != -947031628) && iParam1 != joaat("weapon_bullpupshotgun")) && iParam1 != joaat("weapon_pistol50")) && (iVar1 == -1 || unk_0x6E2A2D341D785598(iVar1) < 3))
    {
        return 0;
    }
    iVar2 = 0;
    iVar3 = 0;
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    while (func_21(&Var7, iParam1, iVar6, 0))
    {
        if (Var7.f_4 == joaat("WAPClip"))
        {
            iVar3++;
        }
        if (Var7.f_4 == joaat("WAPScop"))
        {
            iVar2++;
        }
        if (unk_0xF484FDC5C64733BF(iParam0, iParam1, Var7))
        {
            if (Var7.f_4 == joaat("WAPClip"))
            {
                iVar5 = Var7.f_6;
            }
            else if (Var7.f_4 == joaat("WAPScop"))
            {
                iVar4 = Var7.f_6;
            }
        }
        else if ((((Var7.f_4 == joaat("WAPClip") || Var7.f_4 == joaat("WAPScop")) || Var7.f_4 == joaat("WAPRail")) || Var7.f_4 == joaat("gun_root")) || Var7.f_4 == -31573710)
        {
        }
        else
        {
            return 0;
        }
        iVar6++;
    }
    if (iVar2 > iVar4)
    {
        return 0;
    }
    if (iVar3 > iVar5)
    {
        return 0;
    }
    if (unk_0xADC90BFB923C6456(iParam1) > 0 && unk_0x5AFECC8B67A4CAE5(iParam0, iParam1) == 0)
    {
        return 0;
    }
    return 1;
}

bool func_21(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x1263
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    var uVar15;
    struct<4> Var16;
    
    func_86(uParam0, 0, 989182658, 0, 0);
    switch (iParam1)
    {
        case joaat("weapon_pistol"):
            if (func_85(iLocal_54))
            {
                if (!func_75(1623028892, joaat("weapon_pistol"), -1))
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
                            break;
                        
                        case 4:
                            func_86(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
                            break;
                        
                        case 5:
                            func_86(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
                            break;
                    }
                }
                else
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
                            break;
                        
                        case 4:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        }
                }
            }
            else
            {
                switch (iParam2)
                {
                    case 0:
                        func_86(uParam0, joaat("component_pistol_clip_01"), joaat("WAPClip"), 1, 1);
                        break;
                    
                    case 1:
                        func_86(uParam0, joaat("component_pistol_clip_02"), joaat("WAPClip"), 2, 0);
                        break;
                    
                    case 2:
                        func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
                        break;
                    
                    case 3:
                        func_86(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 1, 0);
                        break;
                    
                    case 4:
                        func_86(uParam0, joaat("component_pistol_varmod_luxe"), joaat("gun_root"), 1, 0);
                        break;
                    }
            }
            break;
        
        case joaat("weapon_combatpistol"):
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, joaat("component_combatpistol_clip_01"), joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, joaat("component_combatpistol_clip_02"), joaat("WAPClip"), 2, 0);
                    break;
                
                case 2:
                    func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
                    break;
                
                case 3:
                    func_86(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
                    break;
                
                case 4:
                    func_86(uParam0, joaat("component_combatpistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
                    break;
            }
            break;
        
        case joaat("weapon_appistol"):
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, joaat("component_appistol_clip_01"), joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, joaat("component_appistol_clip_02"), joaat("WAPClip"), 2, 0);
                    break;
                
                case 2:
                    func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
                    break;
                
                case 3:
                    func_86(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
                    break;
                
                case 4:
                    func_86(uParam0, joaat("component_appistol_varmod_luxe"), joaat("gun_root"), 1, 0);
                    break;
            }
            break;
        
        case joaat("weapon_microsmg"):
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, joaat("component_microsmg_clip_01"), joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, joaat("component_microsmg_clip_02"), joaat("WAPClip"), 2, 0);
                    break;
                
                case 2:
                    func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
                    break;
                
                case 3:
                    func_86(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
                    break;
                
                case 4:
                    func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
                    break;
                
                case 5:
                    func_86(uParam0, joaat("component_microsmg_varmod_luxe"), joaat("gun_root"), 1, 0);
                    break;
            }
            break;
        
        case joaat("weapon_smg"):
            if (func_85(iLocal_54))
            {
                if (!func_75(1623028892, joaat("weapon_smg"), -1))
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
                            break;
                        
                        case 4:
                            func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
                            break;
                        
                        case 5:
                            func_86(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
                            break;
                        
                        case 6:
                            func_86(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
                            break;
                        
                        case 7:
                            func_86(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
                            break;
                    }
                }
                else
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
                            break;
                        
                        case 4:
                            func_86(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
                            break;
                        
                        case 5:
                            func_86(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
                            break;
                        
                        case 6:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        }
                }
            }
            else
            {
                switch (iParam2)
                {
                    case 0:
                        func_86(uParam0, joaat("component_smg_clip_01"), joaat("WAPClip"), 1, 1);
                        break;
                    
                    case 1:
                        func_86(uParam0, joaat("component_smg_clip_02"), joaat("WAPClip"), 2, 0);
                        break;
                    
                    case 2:
                        func_86(uParam0, joaat("component_smg_clip_03"), joaat("WAPClip"), 3, 0);
                        break;
                    
                    case 3:
                        func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
                        break;
                    
                    case 4:
                        func_86(uParam0, joaat("component_at_scope_macro_02"), joaat("WAPScop"), 1, 0);
                        break;
                    
                    case 5:
                        func_86(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp"), 1, 0);
                        break;
                    
                    case 6:
                        func_86(uParam0, joaat("component_smg_varmod_luxe"), joaat("gun_root"), 1, 0);
                        break;
                    }
            }
            break;
        
        case joaat("weapon_assaultrifle"):
            if (func_85(iLocal_54))
            {
                if (!func_75(1623028892, joaat("weapon_assaultrifle"), -1))
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
                            break;
                        
                        case 4:
                            func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
                            break;
                        
                        case 5:
                            func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
                            break;
                        
                        case 6:
                            func_86(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
                            break;
                        
                        case 7:
                            func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
                            break;
                        
                        case 8:
                            func_86(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
                            break;
                    }
                }
                else
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
                            break;
                        
                        case 4:
                            func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
                            break;
                        
                        case 5:
                            func_86(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
                            break;
                        
                        case 6:
                            func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
                            break;
                        
                        case 7:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        }
                }
            }
            else
            {
                switch (iParam2)
                {
                    case 0:
                        func_86(uParam0, joaat("component_assaultrifle_clip_01"), joaat("WAPClip"), 1, 1);
                        break;
                    
                    case 1:
                        func_86(uParam0, joaat("component_assaultrifle_clip_02"), joaat("WAPClip"), 2, 0);
                        break;
                    
                    case 2:
                        func_86(uParam0, joaat("component_assaultrifle_clip_03"), joaat("WAPClip"), 3, 0);
                        break;
                    
                    case 3:
                        func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
                        break;
                    
                    case 4:
                        func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
                        break;
                    
                    case 5:
                        func_86(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
                        break;
                    
                    case 6:
                        func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
                        break;
                    
                    case 7:
                        func_86(uParam0, joaat("component_assaultrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
                        break;
                    }
            }
            break;
        
        case joaat("weapon_carbinerifle"):
            if (func_85(iLocal_54))
            {
                if (!func_75(1623028892, joaat("weapon_carbinerifle"), -1))
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
                            break;
                        
                        case 4:
                            func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
                            break;
                        
                        case 5:
                            func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
                            break;
                        
                        case 6:
                            func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
                            break;
                        
                        case 7:
                            func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
                            break;
                        
                        case 8:
                            func_86(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
                            break;
                    }
                }
                else
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
                            break;
                        
                        case 4:
                            func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
                            break;
                        
                        case 5:
                            func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
                            break;
                        
                        case 6:
                            func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
                            break;
                        
                        case 7:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        }
                }
            }
            else
            {
                switch (iParam2)
                {
                    case 0:
                        func_86(uParam0, joaat("component_carbinerifle_clip_01"), joaat("WAPClip"), 1, 1);
                        break;
                    
                    case 1:
                        func_86(uParam0, joaat("component_carbinerifle_clip_02"), joaat("WAPClip"), 2, 0);
                        break;
                    
                    case 2:
                        func_86(uParam0, joaat("component_carbinerifle_clip_03"), joaat("WAPClip"), 3, 0);
                        break;
                    
                    case 3:
                        func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
                        break;
                    
                    case 4:
                        func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
                        break;
                    
                    case 5:
                        func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
                        break;
                    
                    case 6:
                        func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
                        break;
                    
                    case 7:
                        func_86(uParam0, joaat("component_carbinerifle_varmod_luxe"), joaat("gun_root"), 1, 0);
                        break;
                    }
            }
            break;
        
        case joaat("weapon_advancedrifle"):
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, joaat("component_advancedrifle_clip_01"), joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, joaat("component_advancedrifle_clip_02"), joaat("WAPClip"), 2, 0);
                    break;
                
                case 2:
                    func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
                    break;
                
                case 3:
                    func_86(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
                    break;
                
                case 4:
                    func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
                    break;
                
                case 5:
                    func_86(uParam0, joaat("component_advancedrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
                    break;
            }
            break;
        
        case joaat("weapon_mg"):
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, joaat("component_mg_clip_01"), joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, joaat("component_mg_clip_02"), joaat("WAPClip"), 2, 0);
                    break;
                
                case 2:
                    func_86(uParam0, joaat("component_at_scope_small_02"), joaat("WAPScop"), 1, 0);
                    break;
                
                case 3:
                    func_86(uParam0, joaat("component_mg_varmod_lowrider"), joaat("gun_root"), 1, 0);
                    break;
            }
            break;
        
        case joaat("weapon_combatmg"):
            if (func_85(iLocal_54))
            {
                if (!func_75(1623028892, joaat("weapon_combatmg"), -1))
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
                            break;
                        
                        case 4:
                            func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
                            break;
                        
                        case 5:
                            func_86(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
                            break;
                    }
                }
                else
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
                            break;
                        
                        case 4:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        }
                }
            }
            else
            {
                switch (iParam2)
                {
                    case 0:
                        func_86(uParam0, joaat("component_combatmg_clip_01"), joaat("WAPClip"), 1, 1);
                        break;
                    
                    case 1:
                        func_86(uParam0, joaat("component_combatmg_clip_02"), joaat("WAPClip"), 2, 0);
                        break;
                    
                    case 2:
                        func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
                        break;
                    
                    case 3:
                        func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
                        break;
                    
                    case 4:
                        func_86(uParam0, joaat("component_combatmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
                        break;
                    }
            }
            break;
        
        case joaat("weapon_assaultshotgun"):
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, joaat("component_assaultshotgun_clip_01"), joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, joaat("component_assaultshotgun_clip_02"), joaat("WAPClip"), 2, 0);
                    break;
                
                case 2:
                    func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
                    break;
                
                case 3:
                    func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
                    break;
                
                case 4:
                    func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
                    break;
            }
            break;
        
        case joaat("weapon_sniperrifle"):
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, joaat("component_sniperrifle_clip_01"), joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
                    break;
                
                case 2:
                    func_86(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
                    break;
                
                case 3:
                    func_86(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
                    break;
                
                case 4:
                    func_86(uParam0, joaat("component_sniperrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
                    break;
            }
            break;
        
        case joaat("weapon_heavysniper"):
            if (func_85(iLocal_54))
            {
                if (!func_75(1623028892, joaat("weapon_heavysniper"), -1))
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
                            break;
                        
                        case 3:
                            func_86(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
                            break;
                    }
                }
                else
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        }
                }
            }
            else
            {
                switch (iParam2)
                {
                    case 0:
                        func_86(uParam0, joaat("component_heavysniper_clip_01"), joaat("WAPClip"), 1, 1);
                        break;
                    
                    case 1:
                        func_86(uParam0, joaat("component_at_scope_large"), joaat("WAPScop"), 1, 1);
                        break;
                    
                    case 2:
                        func_86(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 0);
                        break;
                    }
            }
            break;
        
        case joaat("weapon_grenadelauncher"):
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
                    break;
                
                case 1:
                    func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
                    break;
                
                case 2:
                    func_86(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
                    break;
            }
            break;
        
        case joaat("weapon_minigun"):
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, joaat("component_minigun_clip_01"), joaat("WAPClip"), 1, 1);
                    break;
            }
            break;
        
        case joaat("weapon_assaultsmg"):
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, joaat("component_assaultsmg_clip_01"), joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, joaat("component_assaultsmg_clip_02"), joaat("WAPClip"), 2, 0);
                    break;
                
                case 2:
                    func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
                    break;
                
                case 3:
                    func_86(uParam0, joaat("component_at_scope_macro"), joaat("WAPScop"), 1, 0);
                    break;
                
                case 4:
                    func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
                    break;
                
                case 5:
                    func_86(uParam0, joaat("component_assaultsmg_varmod_lowrider"), joaat("gun_root"), 1, 0);
                    break;
            }
            break;
        
        case joaat("weapon_bullpupshotgun"):
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
                    break;
                
                case 1:
                    func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
                    break;
                
                case 2:
                    func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
                    break;
            }
            break;
        
        case joaat("weapon_pistol50"):
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, joaat("component_pistol50_clip_01"), joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, joaat("component_pistol50_clip_02"), joaat("WAPClip"), 2, 0);
                    break;
                
                case 2:
                    func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 1, 0);
                    break;
                
                case 3:
                    func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
                    break;
                
                case 4:
                    func_86(uParam0, joaat("component_pistol50_varmod_luxe"), joaat("gun_root"), 1, 0);
                    break;
            }
            break;
        
        case joaat("weapon_sawnoffshotgun"):
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, joaat("component_sawnoffshotgun_varmod_luxe"), joaat("gun_root"), 1, 0);
                    break;
            }
            break;
        
        case 961495388:
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, -2045758401, joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, -785724817, joaat("WAPClip"), 2, 0);
                    break;
                
                case 2:
                    func_86(uParam0, -282298175, joaat("WAPClip"), 3, 0);
                    break;
                
                case 3:
                    func_86(uParam0, -76490669, joaat("WAPClip"), 4, 0);
                    break;
                
                case 4:
                    func_86(uParam0, -1478681000, joaat("WAPClip"), 5, 0);
                    break;
                
                case 5:
                    func_86(uParam0, 1675665560, joaat("WAPClip"), 6, 0);
                    break;
                
                case 6:
                    func_86(uParam0, 0, joaat("WAPGrip"), 1, 1);
                    break;
                
                case 7:
                    func_86(uParam0, -1654288262, joaat("WAPGrip"), 2, 0);
                    break;
                
                case 8:
                    func_86(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
                    break;
                
                case 9:
                    func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
                    break;
                
                case 10:
                    func_86(uParam0, 0, joaat("WAPScop_2"), 1, 1);
                    break;
                
                case 11:
                    func_86(uParam0, 1108334355, joaat("WAPScop_2"), 2, 0);
                    break;
                
                case 12:
                    func_86(uParam0, 77277509, joaat("WAPScop_2"), 3, 0);
                    break;
                
                case 13:
                    func_86(uParam0, -966040254, joaat("WAPScop_2"), 4, 0);
                    break;
                
                case 14:
                    func_86(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
                    break;
                
                case 15:
                    func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp_2"), 2, 0);
                    break;
                
                case 16:
                    func_86(uParam0, -1181482284, joaat("WAPSupp_2"), 3, 0);
                    break;
                
                case 17:
                    func_86(uParam0, -932732805, joaat("WAPSupp_2"), 4, 0);
                    break;
                
                case 18:
                    func_86(uParam0, -569259057, joaat("WAPSupp_2"), 5, 0);
                    break;
                
                case 19:
                    func_86(uParam0, -326080308, joaat("WAPSupp_2"), 6, 0);
                    break;
                
                case 20:
                    func_86(uParam0, 48731514, joaat("WAPSupp_2"), 7, 0);
                    break;
                
                case 21:
                    func_86(uParam0, 880736428, joaat("WAPSupp_2"), 8, 0);
                    break;
                
                case 22:
                    func_86(uParam0, 1303784126, joaat("WAPSupp_2"), 9, 0);
                    break;
                
                case 23:
                    func_86(uParam0, 1134861606, -1312077031, 1, 1);
                    break;
                
                case 24:
                    func_86(uParam0, 1447477866, -1312077031, 2, 0);
                    break;
                
                case 25:
                    func_86(uParam0, 0, joaat("gun_root"), 1, 1);
                    break;
                
                case 26:
                    func_86(uParam0, -1860492113, joaat("gun_root"), 2, 0);
                    break;
                
                case 27:
                    func_86(uParam0, 937772107, joaat("gun_root"), 3, 0);
                    break;
                
                case 28:
                    func_86(uParam0, 1401650071, joaat("gun_root"), 4, 0);
                    break;
                
                case 29:
                    func_86(uParam0, 628662130, joaat("gun_root"), 5, 0);
                    break;
                
                case 30:
                    func_86(uParam0, -985047251, joaat("gun_root"), 6, 0);
                    break;
                
                case 31:
                    func_86(uParam0, -812944463, joaat("gun_root"), 7, 0);
                    break;
                
                case 32:
                    func_86(uParam0, -1447352303, joaat("gun_root"), 8, 0);
                    break;
                
                case 33:
                    func_86(uParam0, -60338860, joaat("gun_root"), 9, 0);
                    break;
                
                case 34:
                    func_86(uParam0, 2088750491, joaat("gun_root"), 10, 0);
                    break;
                
                case 35:
                    func_86(uParam0, -1513913454, joaat("gun_root"), 11, 0);
                    break;
                
                case 36:
                    func_86(uParam0, -1179558480, joaat("gun_root"), 12, 0);
                    break;
            }
            break;
        
        case -86904375:
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, 1283078430, joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, 1574296533, joaat("WAPClip"), 2, 0);
                    break;
                
                case 2:
                    func_86(uParam0, 391640422, joaat("WAPClip"), 3, 0);
                    break;
                
                case 3:
                    func_86(uParam0, 1025884839, joaat("WAPClip"), 4, 0);
                    break;
                
                case 4:
                    func_86(uParam0, 626875735, joaat("WAPClip"), 5, 0);
                    break;
                
                case 5:
                    func_86(uParam0, 1141059345, joaat("WAPClip"), 6, 0);
                    break;
                
                case 6:
                    func_86(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
                    break;
                
                case 7:
                    func_86(uParam0, -1654288262, joaat("WAPGrip_2"), 2, 0);
                    break;
                
                case 8:
                    func_86(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
                    break;
                
                case 9:
                    func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
                    break;
                
                case 10:
                    func_86(uParam0, 0, joaat("WAPScop"), 1, 1);
                    break;
                
                case 11:
                    func_86(uParam0, 1108334355, joaat("WAPScop"), 2, 0);
                    break;
                
                case 12:
                    func_86(uParam0, 77277509, joaat("WAPScop"), 3, 0);
                    break;
                
                case 13:
                    func_86(uParam0, -966040254, joaat("WAPScop"), 4, 0);
                    break;
                
                case 14:
                    func_86(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
                    break;
                
                case 15:
                    func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
                    break;
                
                case 16:
                    func_86(uParam0, -1181482284, joaat("WAPSupp_2"), 3, 0);
                    break;
                
                case 17:
                    func_86(uParam0, -932732805, joaat("WAPSupp_2"), 4, 0);
                    break;
                
                case 18:
                    func_86(uParam0, -569259057, joaat("WAPSupp_2"), 5, 0);
                    break;
                
                case 19:
                    func_86(uParam0, -326080308, joaat("WAPSupp_2"), 6, 0);
                    break;
                
                case 20:
                    func_86(uParam0, 48731514, joaat("WAPSupp_2"), 7, 0);
                    break;
                
                case 21:
                    func_86(uParam0, 880736428, joaat("WAPSupp_2"), 8, 0);
                    break;
                
                case 22:
                    func_86(uParam0, 1303784126, joaat("WAPSupp_2"), 9, 0);
                    break;
                
                case 23:
                    func_86(uParam0, -2093598721, -1312077031, 1, 1);
                    break;
                
                case 24:
                    func_86(uParam0, -1958983669, -1312077031, 2, 0);
                    break;
                
                case 25:
                    func_86(uParam0, 0, joaat("gun_root"), 1, 1);
                    break;
                
                case 26:
                    func_86(uParam0, 1272803094, joaat("gun_root"), 2, 0);
                    break;
                
                case 27:
                    func_86(uParam0, 1080719624, joaat("gun_root"), 3, 0);
                    break;
                
                case 28:
                    func_86(uParam0, 792221348, joaat("gun_root"), 4, 0);
                    break;
                
                case 29:
                    func_86(uParam0, -452181427, joaat("gun_root"), 5, 0);
                    break;
                
                case 30:
                    func_86(uParam0, -746774737, joaat("gun_root"), 6, 0);
                    break;
                
                case 31:
                    func_86(uParam0, -2044296061, joaat("gun_root"), 7, 0);
                    break;
                
                case 32:
                    func_86(uParam0, -199171978, joaat("gun_root"), 8, 0);
                    break;
                
                case 33:
                    func_86(uParam0, -1428075016, joaat("gun_root"), 9, 0);
                    break;
                
                case 34:
                    func_86(uParam0, -1735153315, joaat("gun_root"), 10, 0);
                    break;
                
                case 35:
                    func_86(uParam0, 1796459838, joaat("gun_root"), 11, 0);
                    break;
                
                case 36:
                    func_86(uParam0, -631911105, joaat("gun_root"), 12, 0);
                    break;
            }
            break;
        
        case -608341376:
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, 1227564412, joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, 400507625, joaat("WAPClip"), 2, 0);
                    break;
                
                case 2:
                    func_86(uParam0, -161179835, joaat("WAPClip"), 3, 0);
                    break;
                
                case 3:
                    func_86(uParam0, -1020871238, joaat("WAPClip"), 4, 0);
                    break;
                
                case 4:
                    func_86(uParam0, 696788003, joaat("WAPClip"), 5, 0);
                    break;
                
                case 5:
                    func_86(uParam0, 1475288264, joaat("WAPClip"), 6, 0);
                    break;
                
                case 6:
                    func_86(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
                    break;
                
                case 7:
                    func_86(uParam0, -1654288262, joaat("WAPGrip_2"), 2, 0);
                    break;
                
                case 8:
                    func_86(uParam0, 0, joaat("WAPScop"), 1, 1);
                    break;
                
                case 9:
                    func_86(uParam0, 1108334355, joaat("WAPScop"), 2, 0);
                    break;
                
                case 10:
                    func_86(uParam0, 1060929921, joaat("WAPScop"), 3, 0);
                    break;
                
                case 11:
                    func_86(uParam0, -966040254, joaat("WAPScop"), 4, 0);
                    break;
                
                case 12:
                    func_86(uParam0, 0, joaat("WAPSupp"), 1, 1);
                    break;
                
                case 13:
                    func_86(uParam0, -1181482284, joaat("WAPSupp"), 2, 0);
                    break;
                
                case 14:
                    func_86(uParam0, -932732805, joaat("WAPSupp"), 3, 0);
                    break;
                
                case 15:
                    func_86(uParam0, -569259057, joaat("WAPSupp"), 4, 0);
                    break;
                
                case 16:
                    func_86(uParam0, -326080308, joaat("WAPSupp"), 5, 0);
                    break;
                
                case 17:
                    func_86(uParam0, 48731514, joaat("WAPSupp"), 6, 0);
                    break;
                
                case 18:
                    func_86(uParam0, 880736428, joaat("WAPSupp"), 7, 0);
                    break;
                
                case 19:
                    func_86(uParam0, 1303784126, joaat("WAPSupp"), 8, 0);
                    break;
                
                case 20:
                    func_86(uParam0, -1018236364, -1312077031, 1, 1);
                    break;
                
                case 21:
                    func_86(uParam0, -1243457701, -1312077031, 2, 0);
                    break;
                
                case 22:
                    func_86(uParam0, 0, joaat("gun_root"), 1, 1);
                    break;
                
                case 23:
                    func_86(uParam0, 1249283253, joaat("gun_root"), 2, 0);
                    break;
                
                case 24:
                    func_86(uParam0, -857707587, joaat("gun_root"), 3, 0);
                    break;
                
                case 25:
                    func_86(uParam0, -1097543898, joaat("gun_root"), 4, 0);
                    break;
                
                case 26:
                    func_86(uParam0, 1980349969, joaat("gun_root"), 5, 0);
                    break;
                
                case 27:
                    func_86(uParam0, 1219453777, joaat("gun_root"), 6, 0);
                    break;
                
                case 28:
                    func_86(uParam0, -1853459190, joaat("gun_root"), 7, 0);
                    break;
                
                case 29:
                    func_86(uParam0, -2074781016, joaat("gun_root"), 8, 0);
                    break;
                
                case 30:
                    func_86(uParam0, 457967755, joaat("gun_root"), 9, 0);
                    break;
                
                case 31:
                    func_86(uParam0, 235171324, joaat("gun_root"), 10, 0);
                    break;
                
                case 32:
                    func_86(uParam0, 42685294, joaat("gun_root"), 11, 0);
                    break;
                
                case 33:
                    func_86(uParam0, -687617715, joaat("gun_root"), 12, 0);
                    break;
            }
            break;
        
        case 177293209:
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, -98690520, joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, 752418717, joaat("WAPClip"), 2, 0);
                    break;
                
                case 2:
                    func_86(uParam0, 247526935, joaat("WAPClip"), 3, 0);
                    break;
                
                case 3:
                    func_86(uParam0, -130689324, joaat("WAPClip"), 4, 0);
                    break;
                
                case 4:
                    func_86(uParam0, 1005144310, joaat("WAPClip"), 5, 0);
                    break;
                
                case 5:
                    func_86(uParam0, -1981031769, joaat("WAPClip"), 6, 0);
                    break;
                
                case 6:
                    func_86(uParam0, -2101279869, joaat("WAPScop"), 1, 0);
                    break;
                
                case 7:
                    func_86(uParam0, joaat("component_at_scope_max"), joaat("WAPScop"), 2, 1);
                    break;
                
                case 8:
                    func_86(uParam0, -1233121104, joaat("WAPScop"), 3, 0);
                    break;
                
                case 9:
                    func_86(uParam0, 776198721, joaat("WAPScop"), 4, 0);
                    break;
                
                case 10:
                    func_86(uParam0, 0, joaat("WAPSupp"), 1, 1);
                    break;
                
                case 11:
                    func_86(uParam0, -1404903567, joaat("WAPSupp"), 2, 0);
                    break;
                
                case 12:
                    func_86(uParam0, 1602080333, joaat("WAPSupp"), 3, 0);
                    break;
                
                case 13:
                    func_86(uParam0, 1764221345, joaat("WAPSupp"), 4, 0);
                    break;
                
                case 14:
                    func_86(uParam0, -1869205321, -1312077031, 1, 1);
                    break;
                
                case 15:
                    func_86(uParam0, 277524638, -1312077031, 2, 0);
                    break;
                
                case 16:
                    func_86(uParam0, 0, joaat("gun_root"), 1, 1);
                    break;
                
                case 17:
                    func_86(uParam0, -130843390, joaat("gun_root"), 2, 0);
                    break;
                
                case 18:
                    func_86(uParam0, -977347227, joaat("gun_root"), 3, 0);
                    break;
                
                case 19:
                    func_86(uParam0, -378461067, joaat("gun_root"), 4, 0);
                    break;
                
                case 20:
                    func_86(uParam0, 329939175, joaat("gun_root"), 5, 0);
                    break;
                
                case 21:
                    func_86(uParam0, 643374672, joaat("gun_root"), 6, 0);
                    break;
                
                case 22:
                    func_86(uParam0, 807875052, joaat("gun_root"), 7, 0);
                    break;
                
                case 23:
                    func_86(uParam0, -1401804168, joaat("gun_root"), 8, 0);
                    break;
                
                case 24:
                    func_86(uParam0, -1096495395, joaat("gun_root"), 9, 0);
                    break;
                
                case 25:
                    func_86(uParam0, -847811454, joaat("gun_root"), 10, 0);
                    break;
                
                case 26:
                    func_86(uParam0, -1413108537, joaat("gun_root"), 11, 0);
                    break;
                
                case 27:
                    func_86(uParam0, 1815270123, joaat("gun_root"), 12, 0);
                    break;
            }
            break;
        
        case -1075685676:
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, -1795936926, joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, 1591132456, joaat("WAPClip"), 2, 0);
                    break;
                
                case 2:
                    func_86(uParam0, 634039983, joaat("WAPClip"), 3, 0);
                    break;
                
                case 3:
                    func_86(uParam0, 733837882, joaat("WAPClip"), 4, 0);
                    break;
                
                case 4:
                    func_86(uParam0, -2046910199, joaat("WAPClip"), 5, 0);
                    break;
                
                case 5:
                    func_86(uParam0, 1329061674, joaat("WAPClip"), 6, 0);
                    break;
                
                case 6:
                    func_86(uParam0, 0, joaat("WAPScop"), 1, 1);
                    break;
                
                case 7:
                    func_86(uParam0, -1898661008, joaat("WAPScop"), 2, 0);
                    break;
                
                case 8:
                    func_86(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
                    break;
                
                case 9:
                    func_86(uParam0, 1140676955, joaat("WAPFlshLasr"), 2, 0);
                    break;
                
                case 10:
                    func_86(uParam0, 0, joaat("WAPSupp"), 1, 1);
                    break;
                
                case 11:
                    func_86(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp"), 2, 0);
                    break;
                
                case 12:
                    func_86(uParam0, 568543123, joaat("WAPSupp"), 3, 0);
                    break;
                
                case 13:
                    func_86(uParam0, 0, joaat("gun_root"), 1, 1);
                    break;
                
                case 14:
                    func_86(uParam0, 1550611612, joaat("gun_root"), 2, 0);
                    break;
                
                case 15:
                    func_86(uParam0, 368550800, joaat("gun_root"), 3, 0);
                    break;
                
                case 16:
                    func_86(uParam0, -1769069349, joaat("gun_root"), 4, 0);
                    break;
                
                case 17:
                    func_86(uParam0, 24902297, joaat("gun_root"), 5, 0);
                    break;
                
                case 18:
                    func_86(uParam0, -228041614, joaat("gun_root"), 6, 0);
                    break;
                
                case 19:
                    func_86(uParam0, -584961562, joaat("gun_root"), 7, 0);
                    break;
                
                case 20:
                    func_86(uParam0, -1153175946, joaat("gun_root"), 8, 0);
                    break;
                
                case 21:
                    func_86(uParam0, 1301287696, joaat("gun_root"), 9, 0);
                    break;
                
                case 22:
                    func_86(uParam0, 1597093459, joaat("gun_root"), 10, 0);
                    break;
                
                case 23:
                    func_86(uParam0, 1769871776, joaat("gun_root"), 11, 0);
                    break;
                
                case 24:
                    func_86(uParam0, -1827882671, joaat("gun_root"), 12, 0);
                    break;
            }
            break;
        
        case 2024373456:
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, 1277460590, joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, -1182573778, joaat("WAPClip"), 2, 0);
                    break;
                
                case 2:
                    func_86(uParam0, 2146055916, joaat("WAPClip"), 3, 0);
                    break;
                
                case 3:
                    func_86(uParam0, -644734235, joaat("WAPClip"), 4, 0);
                    break;
                
                case 4:
                    func_86(uParam0, 974903034, joaat("WAPClip"), 5, 0);
                    break;
                
                case 5:
                    func_86(uParam0, 190476639, joaat("WAPClip"), 6, 0);
                    break;
                
                case 6:
                    func_86(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
                    break;
                
                case 7:
                    func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
                    break;
                
                case 8:
                    func_86(uParam0, 0, joaat("WAPScop"), 1, 1);
                    break;
                
                case 9:
                    func_86(uParam0, -1613015470, joaat("WAPScop"), 2, 0);
                    break;
                
                case 10:
                    func_86(uParam0, -452809877, joaat("WAPScop"), 3, 0);
                    break;
                
                case 11:
                    func_86(uParam0, 1038927834, joaat("WAPScop"), 4, 0);
                    break;
                
                case 12:
                    func_86(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
                    break;
                
                case 13:
                    func_86(uParam0, joaat("component_at_pi_supp"), joaat("WAPSupp_2"), 1, 0);
                    break;
                
                case 14:
                    func_86(uParam0, -1181482284, joaat("WAPSupp_2"), 2, 0);
                    break;
                
                case 15:
                    func_86(uParam0, -932732805, joaat("WAPSupp_2"), 3, 0);
                    break;
                
                case 16:
                    func_86(uParam0, -569259057, joaat("WAPSupp_2"), 4, 0);
                    break;
                
                case 17:
                    func_86(uParam0, -326080308, joaat("WAPSupp_2"), 5, 0);
                    break;
                
                case 18:
                    func_86(uParam0, 48731514, joaat("WAPSupp_2"), 6, 0);
                    break;
                
                case 19:
                    func_86(uParam0, 880736428, joaat("WAPSupp_2"), 7, 0);
                    break;
                
                case 20:
                    func_86(uParam0, 1303784126, joaat("WAPSupp_2"), 8, 0);
                    break;
                
                case 21:
                    func_86(uParam0, -653246751, -1312077031, 1, 1);
                    break;
                
                case 22:
                    func_86(uParam0, -1520117877, -1312077031, 2, 0);
                    break;
                
                case 23:
                    func_86(uParam0, 0, joaat("gun_root"), 1, 1);
                    break;
                
                case 24:
                    func_86(uParam0, -996700057, joaat("gun_root"), 2, 0);
                    break;
                
                case 25:
                    func_86(uParam0, 940943685, joaat("gun_root"), 3, 0);
                    break;
                
                case 26:
                    func_86(uParam0, 1263226800, joaat("gun_root"), 4, 0);
                    break;
                
                case 27:
                    func_86(uParam0, -328035840, joaat("gun_root"), 5, 0);
                    break;
                
                case 28:
                    func_86(uParam0, 1224100642, joaat("gun_root"), 6, 0);
                    break;
                
                case 29:
                    func_86(uParam0, 899228776, joaat("gun_root"), 7, 0);
                    break;
                
                case 30:
                    func_86(uParam0, 616006309, joaat("gun_root"), 8, 0);
                    break;
                
                case 31:
                    func_86(uParam0, -1561952511, joaat("gun_root"), 9, 0);
                    break;
                
                case 32:
                    func_86(uParam0, 572063080, joaat("gun_root"), 10, 0);
                    break;
                
                case 33:
                    func_86(uParam0, 1170588613, joaat("gun_root"), 11, 0);
                    break;
                
                case 34:
                    func_86(uParam0, 966612367, joaat("gun_root"), 12, 0);
                    break;
            }
            break;
        
        case joaat("weapon_pumpshotgun"):
            if (func_85(iLocal_54))
            {
                if (!func_75(1623028892, joaat("weapon_pumpshotgun"), -1))
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
                            break;
                    }
                }
                else
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        }
                }
            }
            else
            {
                switch (iParam2)
                {
                    case 0:
                        func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 1, 0);
                        break;
                    
                    case 1:
                        func_86(uParam0, joaat("component_at_sr_supp"), joaat("WAPSupp"), 1, 0);
                        break;
                    
                    case 2:
                        func_86(uParam0, joaat("component_pumpshotgun_varmod_lowrider"), joaat("gun_root"), 1, 0);
                        break;
                    }
            }
            break;
        
        case joaat("weapon_specialcarbine"):
            if (func_85(iLocal_54))
            {
                if (!func_75(1623028892, joaat("weapon_specialcarbine"), -1))
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
                            break;
                        
                        case 4:
                            func_86(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
                            break;
                        
                        case 5:
                            func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
                            break;
                        
                        case 6:
                            func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
                            break;
                        
                        case 7:
                            func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
                            break;
                        
                        case 8:
                            func_86(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
                            break;
                    }
                }
                else
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
                            break;
                        
                        case 4:
                            func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
                            break;
                        
                        case 5:
                            func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
                            break;
                        
                        case 6:
                            func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
                            break;
                        
                        case 7:
                            func_86(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
                            break;
                        
                        case 8:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        }
                }
            }
            else
            {
                switch (iParam2)
                {
                    case 0:
                        func_86(uParam0, joaat("component_specialcarbine_clip_01"), joaat("WAPClip"), 1, 1);
                        break;
                    
                    case 1:
                        func_86(uParam0, joaat("component_specialcarbine_clip_02"), joaat("WAPClip"), 2, 0);
                        break;
                    
                    case 2:
                        func_86(uParam0, joaat("component_specialcarbine_clip_03"), joaat("WAPClip"), 3, 0);
                        break;
                    
                    case 3:
                        func_86(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
                        break;
                    
                    case 4:
                        func_86(uParam0, joaat("component_at_scope_medium"), joaat("WAPScop"), 1, 0);
                        break;
                    
                    case 5:
                        func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 1, 0);
                        break;
                    
                    case 6:
                        func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
                        break;
                    
                    case 7:
                        func_86(uParam0, joaat("component_specialcarbine_varmod_lowrider"), joaat("gun_root"), 1, 0);
                        break;
                    }
            }
            break;
        
        case joaat("weapon_snspistol"):
            if (func_85(iLocal_54))
            {
                if (!func_75(1623028892, joaat("weapon_snspistol"), -1))
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
                            break;
                    }
                }
                else
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        }
                }
            }
            else
            {
                switch (iParam2)
                {
                    case 0:
                        func_86(uParam0, joaat("component_snspistol_clip_01"), joaat("WAPClip"), 1, 1);
                        break;
                    
                    case 1:
                        func_86(uParam0, joaat("component_snspistol_clip_02"), joaat("WAPClip"), 2, 0);
                        break;
                    
                    case 2:
                        func_86(uParam0, joaat("component_snspistol_varmod_lowrider"), joaat("gun_root"), 1, 0);
                        break;
                    }
            }
            break;
        
        case joaat("weapon_marksmanrifle"):
            if (func_85(iLocal_54))
            {
                if (!func_75(1623028892, joaat("weapon_marksmanrifle"), -1))
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
                            break;
                        
                        case 4:
                            func_86(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
                            break;
                        
                        case 5:
                            func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
                            break;
                        
                        case 6:
                            func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
                            break;
                        
                        case 7:
                            func_86(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
                            break;
                    }
                }
                else
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
                            break;
                        
                        case 3:
                            func_86(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
                            break;
                        
                        case 4:
                            func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
                            break;
                        
                        case 5:
                            func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
                            break;
                        
                        case 6:
                            func_86(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
                            break;
                        
                        case 7:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        }
                }
            }
            else
            {
                switch (iParam2)
                {
                    case 0:
                        func_86(uParam0, joaat("component_marksmanrifle_clip_01"), joaat("WAPClip"), 1, 1);
                        break;
                    
                    case 1:
                        func_86(uParam0, joaat("component_marksmanrifle_clip_02"), joaat("WAPClip"), 2, 0);
                        break;
                    
                    case 2:
                        func_86(uParam0, joaat("component_at_scope_large_fixed_zoom"), joaat("WAPScop"), 1, 1);
                        break;
                    
                    case 3:
                        func_86(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
                        break;
                    
                    case 4:
                        func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
                        break;
                    
                    case 5:
                        func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
                        break;
                    
                    case 6:
                        func_86(uParam0, joaat("component_marksmanrifle_varmod_luxe"), joaat("gun_root"), 1, 0);
                        break;
                    }
            }
            break;
        
        case joaat("weapon_revolver"):
            if (func_85(iLocal_54))
            {
                if (!func_75(1623028892, joaat("weapon_revolver"), -1))
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
                            break;
                    }
                }
                else
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        }
                }
            }
            else
            {
                switch (iParam2)
                {
                    case 0:
                        func_86(uParam0, joaat("component_revolver_clip_01"), joaat("WAPClip"), 1, 1);
                        break;
                    
                    case 1:
                        func_86(uParam0, joaat("component_revolver_varmod_boss"), joaat("gun_root"), 1, 0);
                        break;
                    
                    case 2:
                        func_86(uParam0, joaat("component_revolver_varmod_goon"), joaat("gun_root"), 2, 0);
                        break;
                    }
            }
            break;
        
        case joaat("weapon_bullpuprifle"):
            if (func_85(iLocal_54))
            {
                if (!func_75(1623028892, joaat("weapon_bullpuprifle"), -1))
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
                            break;
                        
                        case 4:
                            func_86(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
                            break;
                        
                        case 5:
                            func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
                            break;
                        
                        case 6:
                            func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
                            break;
                        
                        case 7:
                            func_86(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
                            break;
                    }
                }
                else
                {
                    switch (iParam2)
                    {
                        case 0:
                            func_86(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
                            break;
                        
                        case 1:
                            func_86(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
                            break;
                        
                        case 2:
                            func_86(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
                            break;
                        
                        case 3:
                            func_86(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
                            break;
                        
                        case 4:
                            func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
                            break;
                        
                        case 5:
                            func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
                            break;
                        
                        case 6:
                            func_86(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
                            break;
                        
                        case 7:
                            func_86(uParam0, 1623028892, -31573710, 1, 0);
                            break;
                        }
                }
            }
            else
            {
                switch (iParam2)
                {
                    case 0:
                        func_86(uParam0, joaat("component_bullpuprifle_clip_01"), joaat("WAPClip"), 1, 1);
                        break;
                    
                    case 1:
                        func_86(uParam0, joaat("component_bullpuprifle_clip_02"), joaat("WAPClip"), 2, 0);
                        break;
                    
                    case 2:
                        func_86(uParam0, joaat("component_at_ar_flsh"), 953267555, 1, 0);
                        break;
                    
                    case 3:
                        func_86(uParam0, joaat("component_at_scope_small"), joaat("WAPScop"), 1, 0);
                        break;
                    
                    case 4:
                        func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 1, 0);
                        break;
                    
                    case 5:
                        func_86(uParam0, joaat("component_at_ar_afgrip"), joaat("WAPGrip"), 1, 0);
                        break;
                    
                    case 6:
                        func_86(uParam0, joaat("component_bullpuprifle_varmod_low"), joaat("gun_root"), 1, 0);
                        break;
                    }
            }
            break;
        
        case 1432025498:
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, -845938367, joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, -1618338827, joaat("WAPClip"), 2, 0);
                    break;
                
                case 2:
                    func_86(uParam0, -380098265, joaat("WAPClip"), 3, 0);
                    break;
                
                case 3:
                    func_86(uParam0, 1315288101, joaat("WAPClip"), 4, 0);
                    break;
                
                case 4:
                    func_86(uParam0, 1004815965, joaat("WAPClip"), 5, 0);
                    break;
                
                case 5:
                    func_86(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
                    break;
                
                case 6:
                    func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr_2"), 2, 0);
                    break;
                
                case 7:
                    func_86(uParam0, 0, joaat("WAPScop"), 1, 1);
                    break;
                
                case 8:
                    func_86(uParam0, 1108334355, joaat("WAPScop"), 2, 0);
                    break;
                
                case 9:
                    func_86(uParam0, 77277509, joaat("WAPScop"), 3, 0);
                    break;
                
                case 10:
                    func_86(uParam0, 1060929921, joaat("WAPScop"), 4, 0);
                    break;
                
                case 11:
                    func_86(uParam0, 0, joaat("WAPSupp"), 1, 1);
                    break;
                
                case 12:
                    func_86(uParam0, -1404903567, joaat("WAPSupp"), 2, 0);
                    break;
                
                case 13:
                    func_86(uParam0, 1602080333, joaat("WAPSupp"), 3, 0);
                    break;
                
                case 14:
                    func_86(uParam0, 0, joaat("gun_root"), 1, 1);
                    break;
                
                case 15:
                    func_86(uParam0, -474112444, joaat("gun_root"), 2, 0);
                    break;
                
                case 16:
                    func_86(uParam0, 387223451, joaat("gun_root"), 3, 0);
                    break;
                
                case 17:
                    func_86(uParam0, 617753366, joaat("gun_root"), 4, 0);
                    break;
                
                case 18:
                    func_86(uParam0, -222378256, joaat("gun_root"), 5, 0);
                    break;
                
                case 19:
                    func_86(uParam0, 8741501, joaat("gun_root"), 6, 0);
                    break;
                
                case 20:
                    func_86(uParam0, -601286203, joaat("gun_root"), 7, 0);
                    break;
                
                case 21:
                    func_86(uParam0, -511433605, joaat("gun_root"), 8, 0);
                    break;
                
                case 22:
                    func_86(uParam0, -655387818, joaat("gun_root"), 9, 0);
                    break;
                
                case 23:
                    func_86(uParam0, -282476598, joaat("gun_root"), 10, 0);
                    break;
                
                case 24:
                    func_86(uParam0, 1739501925, joaat("gun_root"), 11, 0);
                    break;
                
                case 25:
                    func_86(uParam0, 1178671645, joaat("gun_root"), 12, 0);
                    break;
            }
            break;
        
        case -1768145561:
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, 382112385, joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, -568352468, joaat("WAPClip"), 2, 0);
                    break;
                
                case 2:
                    func_86(uParam0, -2023373174, joaat("WAPClip"), 3, 0);
                    break;
                
                case 3:
                    func_86(uParam0, -570355066, joaat("WAPClip"), 4, 0);
                    break;
                
                case 4:
                    func_86(uParam0, 1362433589, joaat("WAPClip"), 5, 0);
                    break;
                
                case 5:
                    func_86(uParam0, 1346235024, joaat("WAPClip"), 6, 0);
                    break;
                
                case 6:
                    func_86(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
                    break;
                
                case 7:
                    func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
                    break;
                
                case 8:
                    func_86(uParam0, 0, joaat("WAPScop_2"), 1, 1);
                    break;
                
                case 9:
                    func_86(uParam0, 1108334355, joaat("WAPScop_2"), 2, 0);
                    break;
                
                case 10:
                    func_86(uParam0, 77277509, joaat("WAPScop_2"), 3, 0);
                    break;
                
                case 11:
                    func_86(uParam0, -966040254, joaat("WAPScop_2"), 4, 0);
                    break;
                
                case 12:
                    func_86(uParam0, 0, joaat("WAPSupp"), 1, 1);
                    break;
                
                case 13:
                    func_86(uParam0, joaat("component_at_ar_supp_02"), joaat("WAPSupp"), 2, 0);
                    break;
                
                case 14:
                    func_86(uParam0, -1181482284, joaat("WAPSupp"), 3, 0);
                    break;
                
                case 15:
                    func_86(uParam0, -932732805, joaat("WAPSupp"), 4, 0);
                    break;
                
                case 16:
                    func_86(uParam0, -569259057, joaat("WAPSupp"), 5, 0);
                    break;
                
                case 17:
                    func_86(uParam0, -326080308, joaat("WAPSupp"), 6, 0);
                    break;
                
                case 18:
                    func_86(uParam0, 48731514, joaat("WAPSupp"), 7, 0);
                    break;
                
                case 19:
                    func_86(uParam0, 880736428, joaat("WAPSupp"), 8, 0);
                    break;
                
                case 20:
                    func_86(uParam0, 1303784126, joaat("WAPSupp"), 9, 0);
                    break;
                
                case 21:
                    func_86(uParam0, 0, joaat("WAPGrip"), 1, 1);
                    break;
                
                case 22:
                    func_86(uParam0, -1654288262, joaat("WAPGrip"), 2, 0);
                    break;
                
                case 23:
                    func_86(uParam0, -415870039, -1312077031, 1, 1);
                    break;
                
                case 24:
                    func_86(uParam0, -109086661, -1312077031, 2, 0);
                    break;
                
                case 25:
                    func_86(uParam0, 0, joaat("gun_root"), 1, 1);
                    break;
                
                case 26:
                    func_86(uParam0, -737430213, joaat("gun_root"), 2, 0);
                    break;
                
                case 27:
                    func_86(uParam0, 1125852043, joaat("gun_root"), 3, 0);
                    break;
                
                case 28:
                    func_86(uParam0, 886015732, joaat("gun_root"), 4, 0);
                    break;
                
                case 29:
                    func_86(uParam0, -1262287139, joaat("gun_root"), 5, 0);
                    break;
                
                case 30:
                    func_86(uParam0, -295208411, joaat("gun_root"), 6, 0);
                    break;
                
                case 31:
                    func_86(uParam0, -544154504, joaat("gun_root"), 7, 0);
                    break;
                
                case 32:
                    func_86(uParam0, 172765678, joaat("gun_root"), 8, 0);
                    break;
                
                case 33:
                    func_86(uParam0, -1982877449, joaat("gun_root"), 9, 0);
                    break;
                
                case 34:
                    func_86(uParam0, 2072122460, joaat("gun_root"), 10, 0);
                    break;
                
                case 35:
                    func_86(uParam0, -1986220171, joaat("gun_root"), 11, 0);
                    break;
                
                case 36:
                    func_86(uParam0, 1377355801, joaat("gun_root"), 12, 0);
                    break;
            }
            break;
        
        case -2009644972:
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, 21392614, joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, -829683854, joaat("WAPClip"), 2, 0);
                    break;
                
                case 2:
                    func_86(uParam0, -1876057490, joaat("WAPClip"), 3, 0);
                    break;
                
                case 3:
                    func_86(uParam0, -424845447, joaat("WAPClip"), 4, 0);
                    break;
                
                case 4:
                    func_86(uParam0, -1928301566, joaat("WAPClip"), 5, 0);
                    break;
                
                case 5:
                    func_86(uParam0, -1055790298, joaat("WAPClip"), 6, 0);
                    break;
                
                case 6:
                    func_86(uParam0, 0, joaat("WAPFlshLasr_2"), 1, 1);
                    break;
                
                case 7:
                    func_86(uParam0, 1246324211, joaat("WAPFlshLasr_2"), 2, 0);
                    break;
                
                case 8:
                    func_86(uParam0, 0, joaat("WAPScop"), 1, 1);
                    break;
                
                case 9:
                    func_86(uParam0, 1205768792, joaat("WAPScop"), 2, 0);
                    break;
                
                case 10:
                    func_86(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
                    break;
                
                case 11:
                    func_86(uParam0, joaat("component_at_pi_supp_02"), joaat("WAPSupp_2"), 2, 0);
                    break;
                
                case 12:
                    func_86(uParam0, -1434287169, joaat("WAPSupp_2"), 3, 0);
                    break;
                
                case 13:
                    func_86(uParam0, 0, joaat("gun_root"), 1, 1);
                    break;
                
                case 14:
                    func_86(uParam0, 259780317, joaat("gun_root"), 2, 0);
                    break;
                
                case 15:
                    func_86(uParam0, -1973342474, joaat("gun_root"), 3, 0);
                    break;
                
                case 16:
                    func_86(uParam0, 1996130345, joaat("gun_root"), 4, 0);
                    break;
                
                case 17:
                    func_86(uParam0, -1455657812, joaat("gun_root"), 5, 0);
                    break;
                
                case 18:
                    func_86(uParam0, -1668263084, joaat("gun_root"), 6, 0);
                    break;
                
                case 19:
                    func_86(uParam0, 1308243489, joaat("gun_root"), 7, 0);
                    break;
                
                case 20:
                    func_86(uParam0, 1122574335, joaat("gun_root"), 8, 0);
                    break;
                
                case 21:
                    func_86(uParam0, 1420313469, joaat("gun_root"), 9, 0);
                    break;
                
                case 22:
                    func_86(uParam0, 109848390, joaat("gun_root"), 10, 0);
                    break;
                
                case 23:
                    func_86(uParam0, 593945703, joaat("gun_root"), 11, 0);
                    break;
                
                case 24:
                    func_86(uParam0, 1142457062, joaat("gun_root"), 12, 0);
                    break;
            }
            break;
        
        case 1785463520:
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, -1797182002, joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, -422587990, joaat("WAPClip"), 2, 0);
                    break;
                
                case 2:
                    func_86(uParam0, -679861550, joaat("WAPClip"), 3, 0);
                    break;
                
                case 3:
                    func_86(uParam0, 1842849902, joaat("WAPClip"), 4, 0);
                    break;
                
                case 4:
                    func_86(uParam0, -193998727, joaat("WAPClip"), 5, 0);
                    break;
                
                case 5:
                    func_86(uParam0, -515203373, joaat("WAPClip"), 6, 0);
                    break;
                
                case 6:
                    func_86(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
                    break;
                
                case 7:
                    func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
                    break;
                
                case 8:
                    func_86(uParam0, 1108334355, joaat("WAPScop_2"), 2, 0);
                    break;
                
                case 9:
                    func_86(uParam0, -966040254, joaat("WAPScop_2"), 3, 0);
                    break;
                
                case 10:
                    func_86(uParam0, 1528590652, joaat("WAPScop_2"), 4, 1);
                    break;
                
                case 11:
                    func_86(uParam0, 0, joaat("WAPSupp_2"), 1, 1);
                    break;
                
                case 12:
                    func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp_2"), 2, 0);
                    break;
                
                case 13:
                    func_86(uParam0, -1181482284, joaat("WAPSupp_2"), 3, 0);
                    break;
                
                case 14:
                    func_86(uParam0, -932732805, joaat("WAPSupp_2"), 4, 0);
                    break;
                
                case 15:
                    func_86(uParam0, -569259057, joaat("WAPSupp_2"), 5, 0);
                    break;
                
                case 16:
                    func_86(uParam0, -326080308, joaat("WAPSupp_2"), 6, 0);
                    break;
                
                case 17:
                    func_86(uParam0, 48731514, joaat("WAPSupp_2"), 7, 0);
                    break;
                
                case 18:
                    func_86(uParam0, 880736428, joaat("WAPSupp_2"), 8, 0);
                    break;
                
                case 19:
                    func_86(uParam0, 1303784126, joaat("WAPSupp_2"), 9, 0);
                    break;
                
                case 20:
                    func_86(uParam0, 0, joaat("WAPGrip_2"), 1, 1);
                    break;
                
                case 21:
                    func_86(uParam0, -1654288262, joaat("WAPGrip_2"), 2, 0);
                    break;
                
                case 22:
                    func_86(uParam0, 941317513, -1312077031, 1, 1);
                    break;
                
                case 23:
                    func_86(uParam0, 1748450780, -1312077031, 2, 0);
                    break;
                
                case 24:
                    func_86(uParam0, 0, joaat("gun_root"), 1, 1);
                    break;
                
                case 25:
                    func_86(uParam0, -1869284448, joaat("gun_root"), 2, 0);
                    break;
                
                case 26:
                    func_86(uParam0, 1931539634, joaat("gun_root"), 3, 0);
                    break;
                
                case 27:
                    func_86(uParam0, 1624199183, joaat("gun_root"), 4, 0);
                    break;
                
                case 28:
                    func_86(uParam0, -26834113, joaat("gun_root"), 5, 0);
                    break;
                
                case 29:
                    func_86(uParam0, -210406055, joaat("gun_root"), 6, 0);
                    break;
                
                case 30:
                    func_86(uParam0, 423313640, joaat("gun_root"), 7, 0);
                    break;
                
                case 31:
                    func_86(uParam0, 276639596, joaat("gun_root"), 8, 0);
                    break;
                
                case 32:
                    func_86(uParam0, -991356863, joaat("gun_root"), 9, 0);
                    break;
                
                case 33:
                    func_86(uParam0, -1682848301, joaat("gun_root"), 10, 0);
                    break;
                
                case 34:
                    func_86(uParam0, 996213771, joaat("gun_root"), 11, 0);
                    break;
                
                case 35:
                    func_86(uParam0, -1214048550, joaat("gun_root"), 12, 0);
                    break;
            }
            break;
        
        case -879347409:
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, -1172055874, joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, -958864266, joaat("WAPClip"), 2, 0);
                    break;
                
                case 2:
                    func_86(uParam0, 15712037, joaat("WAPClip"), 3, 0);
                    break;
                
                case 3:
                    func_86(uParam0, 284438159, joaat("WAPClip"), 4, 0);
                    break;
                
                case 4:
                    func_86(uParam0, 231258687, joaat("WAPClip"), 5, 0);
                    break;
                
                case 5:
                    func_86(uParam0, 0, joaat("WAPScop"), 1, 1);
                    break;
                
                case 6:
                    func_86(uParam0, 1108334355, joaat("WAPScop"), 2, 0);
                    break;
                
                case 7:
                    func_86(uParam0, 77277509, joaat("WAPScop"), 3, 0);
                    break;
                
                case 8:
                    func_86(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
                    break;
                
                case 9:
                    func_86(uParam0, joaat("component_at_pi_flsh"), joaat("WAPFlshLasr"), 2, 0);
                    break;
                
                case 10:
                    func_86(uParam0, 0, joaat("WAPSupp"), 1, 1);
                    break;
                
                case 11:
                    func_86(uParam0, 654802123, joaat("WAPSupp"), 2, 0);
                    break;
                
                case 12:
                    func_86(uParam0, 0, joaat("gun_root"), 1, 1);
                    break;
                
                case 13:
                    func_86(uParam0, -1069552225, joaat("gun_root"), 2, 0);
                    break;
                
                case 14:
                    func_86(uParam0, 11918884, joaat("gun_root"), 3, 0);
                    break;
                
                case 15:
                    func_86(uParam0, 176157112, joaat("gun_root"), 4, 0);
                    break;
                
                case 16:
                    func_86(uParam0, -220052855, joaat("gun_root"), 5, 0);
                    break;
                
                case 17:
                    func_86(uParam0, 288456487, joaat("gun_root"), 6, 0);
                    break;
                
                case 18:
                    func_86(uParam0, 398658626, joaat("gun_root"), 7, 0);
                    break;
                
                case 19:
                    func_86(uParam0, 628697006, joaat("gun_root"), 8, 0);
                    break;
                
                case 20:
                    func_86(uParam0, 925911836, joaat("gun_root"), 9, 0);
                    break;
                
                case 21:
                    func_86(uParam0, 1222307441, joaat("gun_root"), 10, 0);
                    break;
                
                case 22:
                    func_86(uParam0, 552442715, joaat("gun_root"), 11, 0);
                    break;
                
                case 23:
                    func_86(uParam0, -648943513, joaat("gun_root"), 12, 0);
                    break;
            }
            break;
        
        case -2066285827:
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, 25766362, joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, -273676760, joaat("WAPClip"), 2, 0);
                    break;
                
                case 2:
                    func_86(uParam0, -2111807319, joaat("WAPClip"), 3, 0);
                    break;
                
                case 3:
                    func_86(uParam0, -1449330342, joaat("WAPClip"), 4, 0);
                    break;
                
                case 4:
                    func_86(uParam0, -89655827, joaat("WAPClip"), 5, 0);
                    break;
                
                case 5:
                    func_86(uParam0, 1130501904, joaat("WAPClip"), 6, 0);
                    break;
                
                case 6:
                    func_86(uParam0, 0, joaat("WAPFlshLasr"), 1, 1);
                    break;
                
                case 7:
                    func_86(uParam0, joaat("component_at_ar_flsh"), joaat("WAPFlshLasr"), 2, 0);
                    break;
                
                case 8:
                    func_86(uParam0, 0, joaat("WAPScop_2"), 1, 1);
                    break;
                
                case 9:
                    func_86(uParam0, 1108334355, joaat("WAPScop_2"), 2, 0);
                    break;
                
                case 10:
                    func_86(uParam0, -944910075, joaat("WAPScop_2"), 3, 0);
                    break;
                
                case 11:
                    func_86(uParam0, 1060929921, joaat("WAPScop_2"), 4, 0);
                    break;
                
                case 12:
                    func_86(uParam0, 1704640795, -1312077031, 1, 1);
                    break;
                
                case 13:
                    func_86(uParam0, 1005743559, -1312077031, 2, 0);
                    break;
                
                case 14:
                    func_86(uParam0, 0, joaat("WAPSupp"), 1, 1);
                    break;
                
                case 15:
                    func_86(uParam0, joaat("component_at_ar_supp"), joaat("WAPSupp"), 2, 0);
                    break;
                
                case 16:
                    func_86(uParam0, -1181482284, joaat("WAPSupp"), 3, 0);
                    break;
                
                case 17:
                    func_86(uParam0, -932732805, joaat("WAPSupp"), 4, 0);
                    break;
                
                case 18:
                    func_86(uParam0, -569259057, joaat("WAPSupp"), 5, 0);
                    break;
                
                case 19:
                    func_86(uParam0, -326080308, joaat("WAPSupp"), 6, 0);
                    break;
                
                case 20:
                    func_86(uParam0, 48731514, joaat("WAPSupp"), 7, 0);
                    break;
                
                case 21:
                    func_86(uParam0, 880736428, joaat("WAPSupp"), 8, 0);
                    break;
                
                case 22:
                    func_86(uParam0, 1303784126, joaat("WAPSupp"), 9, 0);
                    break;
                
                case 23:
                    func_86(uParam0, 0, joaat("WAPGrip"), 1, 1);
                    break;
                
                case 24:
                    func_86(uParam0, -1654288262, joaat("WAPGrip"), 2, 0);
                    break;
                
                case 25:
                    func_86(uParam0, 0, joaat("gun_root"), 1, 1);
                    break;
                
                case 26:
                    func_86(uParam0, -1371515465, joaat("gun_root"), 2, 0);
                    break;
                
                case 27:
                    func_86(uParam0, -1190793877, joaat("gun_root"), 3, 0);
                    break;
                
                case 28:
                    func_86(uParam0, -1497085720, joaat("gun_root"), 4, 0);
                    break;
                
                case 29:
                    func_86(uParam0, -1803148180, joaat("gun_root"), 5, 0);
                    break;
                
                case 30:
                    func_86(uParam0, -1975971886, joaat("gun_root"), 6, 0);
                    break;
                
                case 31:
                    func_86(uParam0, 36929477, joaat("gun_root"), 7, 0);
                    break;
                
                case 32:
                    func_86(uParam0, -268444834, joaat("gun_root"), 8, 0);
                    break;
                
                case 33:
                    func_86(uParam0, -574769446, joaat("gun_root"), 9, 0);
                    break;
                
                case 34:
                    func_86(uParam0, -882699739, joaat("gun_root"), 10, 0);
                    break;
                
                case 35:
                    func_86(uParam0, -1468181474, joaat("gun_root"), 11, 0);
                    break;
                
                case 36:
                    func_86(uParam0, -974541230, joaat("gun_root"), 12, 0);
                    break;
            }
            break;
        
        case -1355376991:
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, -673450233, joaat("gun_root"), 1, 0);
                    break;
            }
            break;
        
        case 727643628:
            switch (iParam2)
            {
                case 0:
                    func_86(uParam0, 1423184737, joaat("WAPClip"), 1, 1);
                    break;
                
                case 1:
                    func_86(uParam0, -2122814295, joaat("WAPClip"), 2, 0);
                    break;
                
                case 2:
                    func_86(uParam0, -1828202758, joaat("WAPSupp"), 1, 0);
                    break;
            }
            break;
        
        default:
            iVar12 = func_87(iParam1, &uVar15);
            if (iVar12 != -1)
            {
                iVar13 = 0;
                while (iVar13 < unk_0x6E2A2D341D785598(iVar12))
                {
                    if (unk_0x0575653A26C467A1(iVar12, iVar13, &Var16))
                    {
                        if (!func_74(Var16.f_3))
                        {
                            if (Var16 == joaat("WAPClip") || Var16 == joaat("WAPClip_2"))
                            {
                                iVar1++;
                            }
                            else if (Var16 == joaat("WAPFlshLasr") || Var16 == joaat("WAPFlshLasr_2"))
                            {
                                iVar2++;
                            }
                            else if (Var16 == joaat("WAPScop") || Var16 == joaat("WAPScop_2"))
                            {
                                iVar3++;
                            }
                            else if (Var16 == joaat("WAPRail") || Var16 == joaat("WAPRail_2"))
                            {
                                iVar4++;
                            }
                            else if (Var16 == joaat("WAPGrip") || Var16 == joaat("WAPGrip_2"))
                            {
                                iVar5++;
                            }
                            else if (Var16 == joaat("WAPSupp") || Var16 == joaat("WAPSupp_2"))
                            {
                                iVar6++;
                            }
                            else if (Var16 == 1731751835)
                            {
                                iVar7++;
                            }
                            else if (Var16 == joaat("gun_root"))
                            {
                                iVar8++;
                            }
                            else if (Var16 == -31573710)
                            {
                                iVar9++;
                            }
                            else if (Var16 == -1312077031)
                            {
                                iVar10++;
                            }
                            else
                            {
                                iVar11++;
                            }
                            if (iVar14 == iParam2)
                            {
                                if (Var16 == joaat("WAPClip") || Var16 == joaat("WAPClip_2"))
                                {
                                    iVar0 = iVar1;
                                }
                                else if (Var16 == joaat("WAPFlshLasr") || Var16 == joaat("WAPFlshLasr_2"))
                                {
                                    iVar0 = iVar2;
                                }
                                else if (Var16 == joaat("WAPScop") || Var16 == joaat("WAPScop_2"))
                                {
                                    iVar0 = iVar3;
                                }
                                else if (Var16 == joaat("WAPRail") || Var16 == joaat("WAPRail_2"))
                                {
                                    iVar0 = iVar4;
                                }
                                else if (Var16 == joaat("WAPGrip") || Var16 == joaat("WAPGrip_2"))
                                {
                                    iVar0 = iVar5;
                                }
                                else if (Var16 == joaat("WAPSupp") || Var16 == joaat("WAPSupp_2"))
                                {
                                    iVar0 = iVar6;
                                }
                                else if (Var16 == 1731751835)
                                {
                                    iVar0 = iVar7;
                                }
                                else if (Var16 == joaat("gun_root"))
                                {
                                    iVar0 = iVar8;
                                }
                                else if (Var16 == -31573710)
                                {
                                    iVar0 = iVar9;
                                }
                                else if (Var16 == -1312077031)
                                {
                                    iVar0 = iVar10;
                                }
                                else
                                {
                                    iVar0 = iVar11;
                                }
                                func_86(uParam0, Var16.f_3, Var16, iVar0, Var16.f_1);
                            }
                            iVar14++;
                        }
                    }
                    iVar13++;
                }
            }
            break;
    }
    if (bParam3)
    {
        uParam0->f_2 = func_22(iParam1, *uParam0);
    }
    return uParam0->f_4 != 989182658;
}

int func_22(int iParam0, int iParam1)//Position - 0x5EEE
{
    int iVar0;
    float fVar1;
    int iVar2;
    int iVar3;
    var uVar4;
    struct<6> Var5;
    int iVar6;
    int iVar7;
    var uVar8;
    struct<6> Var9;
    char* sVar10;
    struct<4> Var11;
    float fVar12;
    
    iVar0 = 0;
    fVar1 = 2.5f;
    if (!unk_0x393E9918BC37548A())
    {
        fVar1 = 2.5f;
        switch (iParam0)
        {
            case joaat("weapon_pistol"):
                switch (iParam1)
                {
                    case joaat("component_pistol_clip_01"):
                        iVar0 = 120;
                        break;
                    
                    case joaat("component_pistol_clip_02"):
                        iVar0 = 155;
                        break;
                    
                    case joaat("component_at_pi_flsh"):
                        iVar0 = 189;
                        break;
                    
                    case joaat("component_at_pi_supp_02"):
                        iVar0 = 729;
                        break;
                    
                    case joaat("component_pistol_varmod_luxe"):
                        iVar0 = 18600;
                        break;
                }
                break;
            
            case joaat("weapon_combatpistol"):
                switch (iParam1)
                {
                    case joaat("component_combatpistol_clip_01"):
                        iVar0 = 136;
                        break;
                    
                    case joaat("component_combatpistol_clip_02"):
                        iVar0 = 159;
                        break;
                    
                    case joaat("component_at_pi_flsh"):
                        iVar0 = 189;
                        break;
                    
                    case joaat("component_at_pi_supp"):
                        iVar0 = 735;
                        break;
                    
                    case joaat("component_combatpistol_varmod_lowrider"):
                        iVar0 = 14500;
                        break;
                }
                break;
            
            case joaat("weapon_appistol"):
                switch (iParam1)
                {
                    case joaat("component_appistol_clip_01"):
                        iVar0 = 145;
                        break;
                    
                    case joaat("component_appistol_clip_02"):
                        iVar0 = 165;
                        break;
                    
                    case joaat("component_at_pi_flsh"):
                        iVar0 = 185;
                        break;
                    
                    case joaat("component_at_pi_supp"):
                        iVar0 = 730;
                        break;
                    
                    case joaat("component_appistol_varmod_luxe"):
                        iVar0 = 15800;
                        break;
                }
                break;
            
            case joaat("weapon_microsmg"):
                switch (iParam1)
                {
                    case joaat("component_microsmg_clip_01"):
                        iVar0 = 120;
                        break;
                    
                    case joaat("component_microsmg_clip_02"):
                        iVar0 = 137;
                        break;
                    
                    case joaat("component_at_pi_flsh"):
                        iVar0 = 190;
                        break;
                    
                    case joaat("component_at_scope_macro"):
                        iVar0 = 549;
                        break;
                    
                    case joaat("component_at_ar_supp_02"):
                        iVar0 = 775;
                        break;
                    
                    case joaat("component_microsmg_varmod_luxe"):
                        iVar0 = 15100;
                        break;
                }
                break;
            
            case joaat("weapon_smg"):
                switch (iParam1)
                {
                    case joaat("component_smg_clip_01"):
                        iVar0 = 119;
                        break;
                    
                    case joaat("component_smg_clip_02"):
                        iVar0 = 134;
                        break;
                    
                    case joaat("component_smg_clip_03"):
                        iVar0 = -1;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = 210;
                        break;
                    
                    case joaat("component_at_scope_macro_02"):
                        iVar0 = 549;
                        break;
                    
                    case joaat("component_at_pi_supp"):
                        iVar0 = 815;
                        break;
                    
                    case joaat("component_smg_varmod_luxe"):
                        iVar0 = 19300;
                        break;
                }
                break;
            
            case joaat("weapon_assaultrifle"):
                switch (iParam1)
                {
                    case joaat("component_assaultrifle_clip_01"):
                        iVar0 = 120;
                        break;
                    
                    case joaat("component_assaultrifle_clip_02"):
                        iVar0 = 129;
                        break;
                    
                    case joaat("component_assaultrifle_clip_03"):
                        iVar0 = -1;
                        break;
                    
                    case joaat("component_at_ar_afgrip"):
                        iVar0 = 159;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = 189;
                        break;
                    
                    case joaat("component_at_scope_macro"):
                        iVar0 = 565;
                        break;
                    
                    case joaat("component_at_ar_supp_02"):
                        iVar0 = 810;
                        break;
                    
                    case joaat("component_assaultrifle_varmod_luxe"):
                        iVar0 = 14400;
                        break;
                }
                break;
            
            case joaat("weapon_carbinerifle"):
                switch (iParam1)
                {
                    case joaat("component_carbinerifle_clip_01"):
                        iVar0 = 99;
                        break;
                    
                    case joaat("component_carbinerifle_clip_02"):
                        iVar0 = 105;
                        break;
                    
                    case joaat("component_carbinerifle_clip_03"):
                        iVar0 = -1;
                        break;
                    
                    case joaat("component_at_ar_afgrip"):
                        iVar0 = 132;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = 150;
                        break;
                    
                    case joaat("component_at_scope_medium"):
                        iVar0 = 450;
                        break;
                    
                    case joaat("component_at_ar_supp"):
                        iVar0 = 815;
                        break;
                    
                    case joaat("component_carbinerifle_varmod_luxe"):
                        iVar0 = 17900;
                        break;
                }
                break;
            
            case joaat("weapon_advancedrifle"):
                switch (iParam1)
                {
                    case joaat("component_advancedrifle_clip_01"):
                        iVar0 = 110;
                        break;
                    
                    case joaat("component_advancedrifle_clip_02"):
                        iVar0 = 124;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = 159;
                        break;
                    
                    case joaat("component_at_scope_small"):
                        iVar0 = 450;
                        break;
                    
                    case joaat("component_at_ar_supp"):
                        iVar0 = 812;
                        break;
                    
                    case joaat("component_advancedrifle_varmod_luxe"):
                        iVar0 = 16500;
                        break;
                }
                break;
            
            case joaat("weapon_mg"):
                switch (iParam1)
                {
                    case joaat("component_mg_clip_01"):
                        iVar0 = 135;
                        break;
                    
                    case joaat("component_mg_clip_02"):
                        iVar0 = 145;
                        break;
                    
                    case joaat("component_at_scope_small_02"):
                        iVar0 = 450;
                        break;
                    
                    case joaat("component_mg_varmod_lowrider"):
                        iVar0 = 15600;
                        break;
                }
                break;
            
            case joaat("weapon_combatmg"):
                switch (iParam1)
                {
                    case joaat("component_combatmg_clip_01"):
                        iVar0 = 119;
                        break;
                    
                    case joaat("component_combatmg_clip_02"):
                        iVar0 = 126;
                        break;
                    
                    case joaat("component_at_ar_afgrip"):
                        iVar0 = 129;
                        break;
                    
                    case joaat("component_at_scope_medium"):
                        iVar0 = 559;
                        break;
                    
                    case joaat("component_combatmg_varmod_lowrider"):
                        iVar0 = 14000;
                        break;
                }
                break;
            
            case joaat("weapon_pumpshotgun"):
                switch (iParam1)
                {
                    case joaat("component_at_ar_flsh"):
                        iVar0 = 189;
                        break;
                    
                    case joaat("component_at_sr_supp"):
                        iVar0 = 975;
                        break;
                    
                    case joaat("component_pumpshotgun_varmod_lowrider"):
                        iVar0 = 16900;
                        break;
                }
                break;
            
            case joaat("weapon_assaultshotgun"):
                switch (iParam1)
                {
                    case joaat("component_assaultshotgun_clip_01"):
                        iVar0 = 129;
                        break;
                    
                    case joaat("component_assaultshotgun_clip_02"):
                        iVar0 = 139;
                        break;
                    
                    case joaat("component_at_ar_afgrip"):
                        iVar0 = 150;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = 225;
                        break;
                    
                    case joaat("component_at_ar_supp"):
                        iVar0 = 899;
                        break;
                }
                break;
            
            case joaat("weapon_sniperrifle"):
                switch (iParam1)
                {
                    case joaat("component_sniperrifle_clip_01"):
                        iVar0 = -1;
                        break;
                    
                    case joaat("component_at_scope_large"):
                        iVar0 = 559;
                        break;
                    
                    case joaat("component_at_scope_max"):
                        iVar0 = 975;
                        break;
                    
                    case joaat("component_at_ar_supp_02"):
                        iVar0 = 920;
                        break;
                    
                    case joaat("component_sniperrifle_varmod_luxe"):
                        iVar0 = 13000;
                        break;
                }
                break;
            
            case joaat("weapon_heavysniper"):
                switch (iParam1)
                {
                    case joaat("component_heavysniper_clip_01"):
                        iVar0 = -1;
                        break;
                    
                    case joaat("component_at_scope_large"):
                        iVar0 = 575;
                        break;
                    
                    case joaat("component_at_scope_max"):
                        iVar0 = 999;
                        break;
                }
                break;
            
            case joaat("weapon_grenadelauncher"):
                switch (iParam1)
                {
                    case joaat("component_at_ar_afgrip"):
                        iVar0 = 128;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = 185;
                        break;
                    
                    case joaat("component_at_scope_small"):
                        iVar0 = 525;
                        break;
                }
                break;
            
            case joaat("weapon_minigun"):
                switch (iParam1)
                {
                    case joaat("component_minigun_clip_01"):
                        iVar0 = -1;
                        break;
                }
                break;
            
            case joaat("weapon_assaultsmg"):
                switch (iParam1)
                {
                    case joaat("component_assaultsmg_clip_01"):
                        iVar0 = 110;
                        break;
                    
                    case joaat("component_assaultsmg_clip_02"):
                        iVar0 = 9700;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = 2275;
                        break;
                    
                    case joaat("component_at_scope_macro"):
                        iVar0 = 10875;
                        break;
                    
                    case joaat("component_at_ar_supp_02"):
                        iVar0 = 12400;
                        break;
                    
                    case joaat("component_assaultsmg_varmod_lowrider"):
                        iVar0 = 17600;
                        break;
                }
                if (func_73() && (func_72() || func_71()))
                {
                    iVar0 = 0;
                }
                break;
            
            case joaat("weapon_bullpupshotgun"):
                switch (iParam1)
                {
                    case joaat("component_at_ar_afgrip"):
                        iVar0 = 4100;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = 2300;
                        break;
                    
                    case joaat("component_at_ar_supp_02"):
                        iVar0 = 12450;
                        break;
                }
                if (func_73() && (func_72() || func_71()))
                {
                    iVar0 = 0;
                }
                break;
            
            case joaat("weapon_pistol50"):
                switch (iParam1)
                {
                    case joaat("component_pistol50_clip_01"):
                        iVar0 = 0;
                        break;
                    
                    case joaat("component_pistol50_clip_02"):
                        iVar0 = 9500;
                        break;
                    
                    case joaat("component_at_pi_flsh"):
                        iVar0 = 2000;
                        break;
                    
                    case joaat("component_at_ar_supp_02"):
                        iVar0 = 12250;
                        break;
                    
                    case joaat("component_pistol50_varmod_luxe"):
                        iVar0 = 20000;
                        break;
                }
                if (func_73() && (func_72() || func_71()))
                {
                    iVar0 = 0;
                }
                break;
            
            case joaat("weapon_sawnoffshotgun"):
                switch (iParam1)
                {
                    case joaat("component_sawnoffshotgun_varmod_luxe"):
                        iVar0 = 13700;
                        break;
                }
                break;
            
            case joaat("weapon_marksmanrifle"):
                switch (iParam1)
                {
                    case joaat("component_marksmanrifle_clip_01"):
                        iVar0 = 0;
                        break;
                    
                    case joaat("component_marksmanrifle_clip_02"):
                        iVar0 = 3612;
                        break;
                    
                    case joaat("component_at_scope_large_fixed_zoom"):
                        iVar0 = 0;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = 1020;
                        break;
                    
                    case joaat("component_at_ar_supp"):
                        iVar0 = 5000;
                        break;
                    
                    case joaat("component_at_ar_afgrip"):
                        iVar0 = 1760;
                        break;
                    
                    case joaat("component_marksmanrifle_varmod_luxe"):
                        iVar0 = 17200;
                        break;
                }
                break;
            
            case joaat("weapon_heavypistol"):
                switch (iParam1)
                {
                    case joaat("component_heavypistol_clip_01"):
                        iVar0 = 0;
                        break;
                    
                    case joaat("component_heavypistol_clip_02"):
                        iVar0 = 3680;
                        break;
                    
                    case joaat("component_at_pi_flsh"):
                        iVar0 = 710;
                        break;
                    
                    case joaat("component_at_pi_supp"):
                        iVar0 = 4800;
                        break;
                    
                    case joaat("component_heavypistol_varmod_luxe"):
                        iVar0 = 12000;
                        break;
                }
                break;
            
            case joaat("weapon_knuckle"):
                switch (iParam1)
                {
                    case joaat("component_knuckle_varmod_pimp"):
                        iVar0 = 4900;
                        break;
                    
                    case joaat("component_knuckle_varmod_ballas"):
                        iVar0 = 5600;
                        break;
                    
                    case joaat("component_knuckle_varmod_dollar"):
                        iVar0 = 5500;
                        break;
                    
                    case joaat("component_knuckle_varmod_diamond"):
                        iVar0 = 5200;
                        break;
                    
                    case joaat("component_knuckle_varmod_hate"):
                        iVar0 = 4600;
                        break;
                    
                    case joaat("component_knuckle_varmod_love"):
                        iVar0 = 4700;
                        break;
                    
                    case joaat("component_knuckle_varmod_player"):
                        iVar0 = 4800;
                        break;
                    
                    case joaat("component_knuckle_varmod_king"):
                        iVar0 = 4300;
                        break;
                    
                    case joaat("component_knuckle_varmod_vagos"):
                        iVar0 = 4000;
                        break;
                }
                break;
            
            case joaat("weapon_bullpuprifle"):
                switch (iParam1)
                {
                    case joaat("component_bullpuprifle_clip_01"):
                        iVar0 = 108;
                        break;
                    
                    case joaat("component_bullpuprifle_clip_02"):
                        iVar0 = 9950;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = 2575;
                        break;
                    
                    case joaat("component_at_scope_macro"):
                        iVar0 = 11350;
                        break;
                    
                    case joaat("component_at_ar_supp_02"):
                        iVar0 = 12500;
                        break;
                    
                    case joaat("component_at_ar_afgrip"):
                        iVar0 = 4275;
                        break;
                    
                    case joaat("component_bullpuprifle_varmod_low"):
                        iVar0 = 16600;
                        break;
                }
                break;
            
            case joaat("weapon_snspistol"):
                switch (iParam1)
                {
                    case joaat("component_snspistol_clip_01"):
                        iVar0 = 29;
                        break;
                    
                    case joaat("component_snspistol_clip_02"):
                        iVar0 = 9150;
                        break;
                    
                    case joaat("component_snspistol_varmod_lowrider"):
                        iVar0 = 13900;
                        break;
                }
                break;
            
            case joaat("weapon_specialcarbine"):
                switch (iParam1)
                {
                    case joaat("component_specialcarbine_clip_01"):
                        iVar0 = 108;
                        break;
                    
                    case joaat("component_specialcarbine_clip_02"):
                        iVar0 = 9975;
                        break;
                    
                    case joaat("component_specialcarbine_clip_03"):
                        iVar0 = -1;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = 2525;
                        break;
                    
                    case joaat("component_at_scope_medium"):
                        iVar0 = 11550;
                        break;
                    
                    case joaat("component_at_ar_supp_02"):
                        iVar0 = 12500;
                        break;
                    
                    case joaat("component_specialcarbine_varmod_lowrider"):
                        iVar0 = 18000;
                        break;
                }
                break;
            
            case joaat("weapon_machinepistol"):
                switch (iParam1)
                {
                    case joaat("component_machinepistol_clip_01"):
                        iVar0 = 0;
                        break;
                    
                    case joaat("component_machinepistol_clip_02"):
                        iVar0 = 3680;
                        break;
                    
                    case joaat("component_machinepistol_clip_03"):
                        iVar0 = -1;
                        break;
                    
                    case joaat("component_at_pi_supp"):
                        iVar0 = 4840;
                        break;
                }
                break;
            
            default:
                iVar2 = func_87(iParam0, &uVar4);
                if (iVar2 != -1)
                {
                    iVar3 = 0;
                    while (iVar3 < unk_0x6E2A2D341D785598(iVar2))
                    {
                        if (unk_0x0575653A26C467A1(iVar2, iVar3, &Var5))
                        {
                            if (!func_74(Var5.f_3))
                            {
                                if (Var5.f_3 == iParam1)
                                {
                                    fVar1 = 1f;
                                    if (!func_69(iParam1))
                                    {
                                        Var5.f_5 = -1;
                                    }
                                    if (Var5.f_5 == -1)
                                    {
                                        iVar0 = -1;
                                    }
                                    else
                                    {
                                        iVar0 = Var5.f_5;
                                    }
                                    if (iParam0 == joaat("weapon_hammer"))
                                    {
                                        if (func_73() && (func_72() || func_71()))
                                        {
                                            iVar0 = 0;
                                        }
                                    }
                                }
                            }
                        }
                        iVar3++;
                    }
                }
                break;
        }
    }
    else
    {
        fVar1 = 2.5f;
        switch (iParam0)
        {
            case joaat("weapon_pistol"):
                switch (iParam1)
                {
                    case joaat("component_pistol_clip_01"):
                        iVar0 = 120;
                        break;
                    
                    case joaat("component_pistol_clip_02"):
                        iVar0 = 9175;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B45));
                        break;
                    
                    case joaat("component_at_pi_flsh"):
                        iVar0 = 1675;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F1));
                        break;
                    
                    case joaat("component_at_pi_supp_02"):
                        iVar0 = 12050;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F2));
                        break;
                    
                    case joaat("component_pistol_varmod_luxe"):
                        iVar0 = Global_40001.f_294C;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_113F));
                        break;
                    
                    case 1623028892:
                        iVar0 = Global_40001.f_50E2;
                        break;
                }
                break;
            
            case joaat("weapon_combatpistol"):
                switch (iParam1)
                {
                    case joaat("component_combatpistol_clip_01"):
                        iVar0 = 136;
                        break;
                    
                    case joaat("component_combatpistol_clip_02"):
                        iVar0 = Global_40001.f_5073;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B46));
                        break;
                    
                    case joaat("component_at_pi_flsh"):
                        iVar0 = 1825;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F3));
                        break;
                    
                    case joaat("component_at_pi_supp"):
                        iVar0 = Global_40001.f_5074;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F4));
                        break;
                    
                    case joaat("component_combatpistol_varmod_lowrider"):
                        iVar0 = Global_40001.f_2EB4;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_113A));
                        break;
                }
                break;
            
            case joaat("weapon_appistol"):
                switch (iParam1)
                {
                    case joaat("component_appistol_clip_01"):
                        iVar0 = 145;
                        break;
                    
                    case joaat("component_appistol_clip_02"):
                        iVar0 = 9400;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B48));
                        break;
                    
                    case joaat("component_at_pi_flsh"):
                        iVar0 = 1975;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F5));
                        break;
                    
                    case joaat("component_at_pi_supp"):
                        iVar0 = 12200;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F6));
                        break;
                    
                    case joaat("component_appistol_varmod_luxe"):
                        iVar0 = Global_40001.f_294B;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1134));
                        break;
                }
                break;
            
            case joaat("weapon_microsmg"):
                switch (iParam1)
                {
                    case joaat("component_microsmg_clip_01"):
                        iVar0 = 120;
                        break;
                    
                    case joaat("component_microsmg_clip_02"):
                        iVar0 = 9325;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B49));
                        break;
                    
                    case joaat("component_at_pi_flsh"):
                        iVar0 = 1900;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F9));
                        break;
                    
                    case joaat("component_at_scope_macro"):
                        iVar0 = 10800;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FB));
                        break;
                    
                    case joaat("component_at_ar_supp_02"):
                        iVar0 = 12150;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FA));
                        break;
                    
                    case joaat("component_microsmg_varmod_luxe"):
                        iVar0 = Global_40001.f_294F;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_113E));
                        break;
                }
                break;
            
            case joaat("weapon_smg"):
                switch (iParam1)
                {
                    case joaat("component_smg_clip_01"):
                        iVar0 = 119;
                        break;
                    
                    case joaat("component_smg_clip_02"):
                        iVar0 = 9475;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B4A));
                        break;
                    
                    case joaat("component_smg_clip_03"):
                        iVar0 = Global_40001.f_3EF3;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = 2050;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FC));
                        break;
                    
                    case joaat("component_at_scope_macro_02"):
                        iVar0 = 10825;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FE));
                        break;
                    
                    case joaat("component_at_pi_supp"):
                        iVar0 = 12250;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FD));
                        break;
                    
                    case joaat("component_smg_varmod_luxe"):
                        iVar0 = Global_40001.f_294E;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1143));
                        break;
                    
                    case 1623028892:
                        iVar0 = Global_40001.f_50E3;
                        break;
                }
                break;
            
            case joaat("weapon_assaultrifle"):
                switch (iParam1)
                {
                    case joaat("component_assaultrifle_clip_01"):
                        iVar0 = 120;
                        break;
                    
                    case joaat("component_assaultrifle_clip_02"):
                        iVar0 = 9550;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B4C));
                        break;
                    
                    case joaat("component_assaultrifle_clip_03"):
                        iVar0 = Global_40001.f_3EEE;
                        break;
                    
                    case joaat("component_at_ar_afgrip"):
                        iVar0 = 4200;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1106));
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = 2125;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1103));
                        break;
                    
                    case joaat("component_at_scope_macro"):
                        iVar0 = 10850;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1105));
                        break;
                    
                    case joaat("component_at_ar_supp_02"):
                        iVar0 = 12300;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1104));
                        break;
                    
                    case joaat("component_assaultrifle_varmod_luxe"):
                        iVar0 = Global_40001.f_2948;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1135));
                        break;
                    
                    case 1623028892:
                        iVar0 = Global_40001.f_50E5;
                        break;
                }
                break;
            
            case joaat("weapon_carbinerifle"):
                switch (iParam1)
                {
                    case joaat("component_carbinerifle_clip_01"):
                        iVar0 = 99;
                        break;
                    
                    case joaat("component_carbinerifle_clip_02"):
                        iVar0 = 9775;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B4D));
                        break;
                    
                    case joaat("component_carbinerifle_clip_03"):
                        iVar0 = Global_40001.f_3EED;
                        break;
                    
                    case joaat("component_at_ar_afgrip"):
                        iVar0 = 4350;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_110E));
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = 2350;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_110B));
                        break;
                    
                    case joaat("component_at_scope_medium"):
                        iVar0 = 10900;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_110D));
                        break;
                    
                    case joaat("component_at_ar_supp"):
                        iVar0 = 12450;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_110C));
                        break;
                    
                    case joaat("component_carbinerifle_varmod_luxe"):
                        iVar0 = Global_40001.f_294A;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1138));
                        break;
                    
                    case 1623028892:
                        iVar0 = Global_40001.f_50E6;
                        break;
                }
                break;
            
            case joaat("weapon_advancedrifle"):
                switch (iParam1)
                {
                    case joaat("component_advancedrifle_clip_01"):
                        iVar0 = 110;
                        break;
                    
                    case joaat("component_advancedrifle_clip_02"):
                        iVar0 = 9925;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B4F));
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = 2425;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1110));
                        break;
                    
                    case joaat("component_at_scope_small"):
                        iVar0 = 10950;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1112));
                        break;
                    
                    case joaat("component_at_ar_supp"):
                        iVar0 = 12500;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1111));
                        break;
                    
                    case joaat("component_advancedrifle_varmod_luxe"):
                        iVar0 = Global_40001.f_2949;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1133));
                        break;
                }
                break;
            
            case joaat("weapon_mg"):
                switch (iParam1)
                {
                    case joaat("component_mg_clip_01"):
                        iVar0 = 135;
                        break;
                    
                    case joaat("component_mg_clip_02"):
                        iVar0 = 9850;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B50));
                        break;
                    
                    case joaat("component_at_scope_small_02"):
                        iVar0 = 10925;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1113));
                        break;
                    
                    case joaat("component_mg_varmod_lowrider"):
                        iVar0 = Global_40001.f_2EB5;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_113D));
                        break;
                }
                break;
            
            case joaat("weapon_combatmg"):
                switch (iParam1)
                {
                    case joaat("component_combatmg_clip_01"):
                        iVar0 = 119;
                        break;
                    
                    case joaat("component_combatmg_clip_02"):
                        iVar0 = 10000;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B51));
                        break;
                    
                    case joaat("component_at_ar_afgrip"):
                        iVar0 = 4425;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1129));
                        break;
                    
                    case joaat("component_at_scope_medium"):
                        iVar0 = 10975;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_112A));
                        break;
                    
                    case joaat("component_combatmg_varmod_lowrider"):
                        iVar0 = Global_40001.f_2EB6;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1139));
                        break;
                    
                    case 1623028892:
                        iVar0 = Global_40001.f_50E4;
                        break;
                }
                break;
            
            case joaat("weapon_pumpshotgun"):
                switch (iParam1)
                {
                    case joaat("component_at_ar_flsh"):
                        iVar0 = 1750;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1117));
                        break;
                    
                    case joaat("component_at_sr_supp"):
                        iVar0 = 12350;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1118));
                        break;
                    
                    case joaat("component_pumpshotgun_varmod_lowrider"):
                        iVar0 = Global_40001.f_2EB1;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1141));
                        break;
                    
                    case 1623028892:
                        iVar0 = Global_40001.f_5791;
                        break;
                }
                break;
            
            case joaat("weapon_assaultshotgun"):
                switch (iParam1)
                {
                    case joaat("component_assaultshotgun_clip_01"):
                        iVar0 = 129;
                        break;
                    
                    case joaat("component_assaultshotgun_clip_02"):
                        iVar0 = 9625;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B53));
                        break;
                    
                    case joaat("component_at_ar_afgrip"):
                        iVar0 = 4275;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111B));
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = 2200;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111C));
                        break;
                    
                    case joaat("component_at_ar_supp"):
                        iVar0 = 12350;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111D));
                        break;
                }
                break;
            
            case joaat("weapon_sniperrifle"):
                switch (iParam1)
                {
                    case joaat("component_sniperrifle_clip_01"):
                        iVar0 = -1;
                        break;
                    
                    case joaat("component_at_scope_large"):
                        iVar0 = 12400;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111E));
                        break;
                    
                    case joaat("component_at_scope_max"):
                        iVar0 = 12500;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111F));
                        break;
                    
                    case joaat("component_at_ar_supp_02"):
                        iVar0 = 12050;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1120));
                        break;
                    
                    case joaat("component_sniperrifle_varmod_luxe"):
                        iVar0 = Global_40001.f_2951;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1144));
                        break;
                }
                break;
            
            case joaat("weapon_heavysniper"):
                switch (iParam1)
                {
                    case joaat("component_heavysniper_clip_01"):
                        iVar0 = -1;
                        break;
                    
                    case joaat("component_at_scope_large"):
                        iVar0 = 99;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1121));
                        break;
                    
                    case joaat("component_at_scope_max"):
                        iVar0 = 12500;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1122));
                        break;
                    
                    case 1623028892:
                        iVar0 = Global_40001.f_50E7;
                        break;
                }
                break;
            
            case joaat("weapon_grenadelauncher"):
                switch (iParam1)
                {
                    case joaat("component_at_ar_afgrip"):
                        iVar0 = 4500;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_112B));
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = 2500;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1127));
                        break;
                    
                    case joaat("component_at_scope_small"):
                        iVar0 = 11000;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1128));
                        break;
                }
                break;
            
            case joaat("weapon_minigun"):
                switch (iParam1)
                {
                    case joaat("component_minigun_clip_01"):
                        iVar0 = -1;
                        break;
                }
                break;
            
            case joaat("weapon_assaultsmg"):
                switch (iParam1)
                {
                    case joaat("component_assaultsmg_clip_01"):
                        iVar0 = 110;
                        break;
                    
                    case joaat("component_assaultsmg_clip_02"):
                        iVar0 = 9700;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B4B));
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = 2275;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10FF));
                        break;
                    
                    case joaat("component_at_scope_macro"):
                        iVar0 = 10875;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1102));
                        break;
                    
                    case joaat("component_at_ar_supp_02"):
                        iVar0 = 12400;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1100));
                        break;
                    
                    case joaat("component_assaultsmg_varmod_lowrider"):
                        iVar0 = Global_40001.f_2EB2;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1101));
                        break;
                }
                break;
            
            case joaat("weapon_gusenberg"):
                switch (iParam1)
                {
                    case joaat("component_gusenberg_clip_01"):
                        iVar0 = 0;
                        break;
                    
                    case joaat("component_gusenberg_clip_02"):
                        iVar0 = Global_40001.f_19C9;
                        break;
                }
                break;
            
            case joaat("weapon_snspistol"):
                switch (iParam1)
                {
                    case joaat("component_snspistol_clip_01"):
                        iVar0 = 0;
                        break;
                    
                    case joaat("component_snspistol_clip_02"):
                        iVar0 = Global_40001.f_1C0C;
                        break;
                    
                    case joaat("component_snspistol_varmod_lowrider"):
                        iVar0 = Global_40001.f_2EB3;
                        break;
                    
                    case 1623028892:
                        iVar0 = Global_40001.f_5796;
                        break;
                }
                break;
            
            case joaat("weapon_specialcarbine"):
                switch (iParam1)
                {
                    case joaat("component_specialcarbine_clip_01"):
                        iVar0 = 0;
                        break;
                    
                    case joaat("component_specialcarbine_clip_02"):
                        iVar0 = Global_40001.f_1C11;
                        break;
                    
                    case joaat("component_specialcarbine_clip_03"):
                        iVar0 = Global_40001.f_3EF0;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = Global_40001.f_1C14;
                        break;
                    
                    case joaat("component_at_scope_medium"):
                        iVar0 = Global_40001.f_1C10;
                        break;
                    
                    case joaat("component_at_ar_supp_02"):
                        iVar0 = Global_40001.f_1C0E;
                        break;
                    
                    case joaat("component_at_ar_afgrip"):
                        iVar0 = Global_40001.f_1C13;
                        break;
                    
                    case joaat("component_specialcarbine_varmod_lowrider"):
                        iVar0 = Global_40001.f_2EB7;
                        break;
                    
                    case 1623028892:
                        iVar0 = Global_40001.f_5792;
                        break;
                }
                break;
            
            case joaat("weapon_heavypistol"):
                switch (iParam1)
                {
                    case joaat("component_heavypistol_clip_01"):
                        iVar0 = 0;
                        break;
                    
                    case joaat("component_heavypistol_clip_02"):
                        iVar0 = Global_40001.f_1C12;
                        break;
                    
                    case joaat("component_at_pi_flsh"):
                        iVar0 = Global_40001.f_1C16;
                        break;
                    
                    case joaat("component_at_pi_supp"):
                        iVar0 = Global_40001.f_1C0F;
                        break;
                    
                    case joaat("component_heavypistol_varmod_luxe"):
                        iVar0 = Global_40001.f_1C2A;
                        break;
                }
                break;
            
            case joaat("weapon_bullpuprifle"):
                switch (iParam1)
                {
                    case joaat("component_bullpuprifle_clip_01"):
                        iVar0 = 0;
                        break;
                    
                    case joaat("component_bullpuprifle_clip_02"):
                        iVar0 = Global_40001.f_1C19;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = Global_40001.f_1C1C;
                        break;
                    
                    case joaat("component_at_ar_supp"):
                        iVar0 = Global_40001.f_1C17;
                        break;
                    
                    case joaat("component_at_scope_small"):
                        iVar0 = Global_40001.f_1C18;
                        break;
                    
                    case joaat("component_at_ar_afgrip"):
                        iVar0 = Global_40001.f_1C1A;
                        break;
                    
                    case joaat("component_bullpuprifle_varmod_low"):
                        iVar0 = Global_40001.f_2EB8;
                        break;
                    
                    case 1623028892:
                        iVar0 = Global_40001.f_5795;
                        break;
                }
                break;
            
            case joaat("weapon_vintagepistol"):
                switch (iParam1)
                {
                    case joaat("component_vintagepistol_clip_01"):
                        iVar0 = 0;
                        break;
                    
                    case joaat("component_vintagepistol_clip_02"):
                        iVar0 = Global_40001.f_1DF4;
                        break;
                    
                    case joaat("component_at_pi_supp"):
                        iVar0 = Global_40001.f_1DF5;
                        break;
                }
                break;
            
            case joaat("weapon_heavyshotgun"):
                switch (iParam1)
                {
                    case joaat("component_heavyshotgun_clip_01"):
                        iVar0 = 0;
                        break;
                    
                    case joaat("component_heavyshotgun_clip_02"):
                        iVar0 = Global_40001.f_20C8;
                        break;
                    
                    case joaat("component_heavyshotgun_clip_03"):
                        iVar0 = Global_40001.f_3EF4;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = Global_40001.f_20C9;
                        break;
                    
                    case joaat("component_at_ar_supp_02"):
                        iVar0 = Global_40001.f_20CA;
                        break;
                    
                    case joaat("component_at_ar_afgrip"):
                        iVar0 = Global_40001.f_20CB;
                        break;
                }
                break;
            
            case joaat("weapon_marksmanrifle"):
                switch (iParam1)
                {
                    case joaat("component_marksmanrifle_clip_01"):
                        iVar0 = 0;
                        break;
                    
                    case joaat("component_marksmanrifle_clip_02"):
                        iVar0 = Global_40001.f_20CE;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = Global_40001.f_20CF;
                        break;
                    
                    case joaat("component_at_ar_supp"):
                        iVar0 = Global_40001.f_20D1;
                        break;
                    
                    case joaat("component_at_ar_afgrip"):
                        iVar0 = Global_40001.f_20D2;
                        break;
                    
                    case joaat("component_marksmanrifle_varmod_luxe"):
                        iVar0 = Global_40001.f_20D3;
                        break;
                    
                    case 1623028892:
                        iVar0 = Global_40001.f_5793;
                        break;
                }
                break;
            
            case joaat("weapon_bullpupshotgun"):
                switch (iParam1)
                {
                    case joaat("component_at_ar_afgrip"):
                        iVar0 = 4100;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_3912));
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = 2300;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1119));
                        break;
                    
                    case joaat("component_at_ar_supp_02"):
                        iVar0 = 12450;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_111A));
                        break;
                }
                if (func_73() && (func_72() || func_71()))
                {
                    iVar0 = 0;
                }
                break;
            
            case joaat("weapon_pistol50"):
                switch (iParam1)
                {
                    case joaat("component_pistol50_clip_01"):
                        iVar0 = 0;
                        break;
                    
                    case joaat("component_pistol50_clip_02"):
                        iVar0 = 9500;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_B47));
                        break;
                    
                    case joaat("component_at_pi_flsh"):
                        iVar0 = 2000;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F7));
                        break;
                    
                    case joaat("component_at_ar_supp_02"):
                        iVar0 = 12250;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_10F8));
                        break;
                    
                    case joaat("component_pistol50_varmod_luxe"):
                        iVar0 = Global_40001.f_294D;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1140));
                        break;
                }
                if (func_73() && (func_72() || func_71()))
                {
                    iVar0 = 0;
                }
                break;
            
            case joaat("weapon_sawnoffshotgun"):
                switch (iParam1)
                {
                    case joaat("component_sawnoffshotgun_varmod_luxe"):
                        iVar0 = Global_40001.f_2950;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1142));
                        break;
                }
                break;
            
            case joaat("weapon_knuckle"):
                switch (iParam1)
                {
                    case joaat("component_knuckle_varmod_pimp"):
                        iVar0 = Global_40001.f_2A8D;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1147));
                        break;
                    
                    case joaat("component_knuckle_varmod_ballas"):
                        iVar0 = Global_40001.f_2A8E;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1148));
                        break;
                    
                    case joaat("component_knuckle_varmod_dollar"):
                        iVar0 = Global_40001.f_2A8F;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1149));
                        break;
                    
                    case joaat("component_knuckle_varmod_diamond"):
                        iVar0 = Global_40001.f_2A90;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114A));
                        break;
                    
                    case joaat("component_knuckle_varmod_hate"):
                        iVar0 = Global_40001.f_2A91;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114B));
                        break;
                    
                    case joaat("component_knuckle_varmod_love"):
                        iVar0 = Global_40001.f_2A92;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114C));
                        break;
                    
                    case joaat("component_knuckle_varmod_player"):
                        iVar0 = Global_40001.f_2A93;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114D));
                        break;
                    
                    case joaat("component_knuckle_varmod_king"):
                        iVar0 = Global_40001.f_2A94;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114E));
                        break;
                    
                    case joaat("component_knuckle_varmod_vagos"):
                        iVar0 = Global_40001.f_2A95;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_114F));
                        break;
                }
                break;
            
            case joaat("weapon_machinepistol"):
                switch (iParam1)
                {
                    case joaat("component_machinepistol_clip_01"):
                        iVar0 = 0;
                        break;
                    
                    case joaat("component_machinepistol_clip_02"):
                        iVar0 = Global_40001.f_2AA6;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1151));
                        break;
                    
                    case joaat("component_machinepistol_clip_03"):
                        iVar0 = Global_40001.f_3EF2;
                        break;
                    
                    case joaat("component_at_pi_supp"):
                        iVar0 = Global_40001.f_2AA7;
                        iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_40001.f_1152));
                        break;
                }
                break;
            
            case joaat("weapon_switchblade"):
                switch (iParam1)
                {
                    case joaat("component_switchblade_varmod_base"):
                        iVar0 = 0;
                        break;
                    
                    case joaat("component_switchblade_varmod_var1"):
                        iVar0 = Global_40001.f_3201;
                        break;
                    
                    case joaat("component_switchblade_varmod_var2"):
                        iVar0 = Global_40001.f_3202;
                        break;
                }
                break;
            
            case joaat("weapon_revolver"):
                switch (iParam1)
                {
                    case joaat("component_revolver_clip_01"):
                        iVar0 = 0;
                        break;
                    
                    case joaat("component_revolver_varmod_boss"):
                        iVar0 = Global_40001.f_323B;
                        break;
                    
                    case joaat("component_revolver_varmod_goon"):
                        iVar0 = Global_40001.f_3200;
                        break;
                    
                    case 1623028892:
                        iVar0 = Global_40001.f_5794;
                        break;
                }
                break;
            
            case joaat("weapon_compactrifle"):
                switch (iParam1)
                {
                    case joaat("component_compactrifle_clip_01"):
                        iVar0 = 0;
                        break;
                    
                    case joaat("component_compactrifle_clip_02"):
                        iVar0 = Global_40001.f_38CC;
                        break;
                    
                    case joaat("component_compactrifle_clip_03"):
                        iVar0 = Global_40001.f_3EEF;
                        break;
                }
                break;
            
            case joaat("weapon_dbshotgun"):
                switch (iParam1)
                {
                    case joaat("component_dbshotgun_clip_01"):
                        iVar0 = 0;
                        break;
                }
                break;
            
            case -1121678507:
                switch (iParam1)
                {
                    case -2067221805:
                        iVar0 = 0;
                        break;
                    
                    case -1820405577:
                        iVar0 = Global_40001.f_487E;
                        break;
                }
                break;
            
            case joaat("weapon_combatpdw"):
                switch (iParam1)
                {
                    case joaat("component_combatpdw_clip_01"):
                        iVar0 = 0;
                        break;
                    
                    case joaat("component_combatpdw_clip_02"):
                        iVar0 = Global_40001.f_506F;
                        break;
                    
                    case joaat("component_combatpdw_clip_03"):
                        iVar0 = Global_40001.f_3EF1;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = Global_40001.f_5070;
                        break;
                    
                    case joaat("component_at_scope_small"):
                        iVar0 = Global_40001.f_5072;
                        break;
                    
                    case joaat("component_at_ar_afgrip"):
                        iVar0 = Global_40001.f_5071;
                        break;
                }
                break;
            
            case 961495388:
                switch (iParam1)
                {
                    case -2045758401:
                        iVar0 = 0;
                        break;
                    
                    case -785724817:
                        iVar0 = Global_40001.f_50E8;
                        break;
                    
                    case -1478681000:
                        iVar0 = Global_40001.f_50E9;
                        break;
                    
                    case 1675665560:
                        iVar0 = Global_40001.f_50EA;
                        break;
                    
                    case -76490669:
                        iVar0 = Global_40001.f_50EB;
                        break;
                    
                    case -282298175:
                        iVar0 = Global_40001.f_50EC;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = Global_40001.f_50ED;
                        break;
                    
                    case 1108334355:
                        iVar0 = Global_40001.f_50EE;
                        break;
                    
                    case 77277509:
                        iVar0 = Global_40001.f_50EF;
                        break;
                    
                    case 1060929921:
                        iVar0 = Global_40001.f_50F0;
                        break;
                    
                    case -966040254:
                        iVar0 = Global_40001.f_50F1;
                        break;
                    
                    case joaat("component_at_ar_supp_02"):
                        iVar0 = Global_40001.f_50F2;
                        break;
                    
                    case -1181482284:
                        iVar0 = Global_40001.f_50F3;
                        break;
                    
                    case -932732805:
                        iVar0 = Global_40001.f_50F4;
                        break;
                    
                    case -569259057:
                        iVar0 = Global_40001.f_50F5;
                        break;
                    
                    case -326080308:
                        iVar0 = Global_40001.f_50F6;
                        break;
                    
                    case 48731514:
                        iVar0 = Global_40001.f_50F7;
                        break;
                    
                    case 880736428:
                        iVar0 = Global_40001.f_50F8;
                        break;
                    
                    case 1303784126:
                        iVar0 = Global_40001.f_50F9;
                        break;
                    
                    case -1654288262:
                        iVar0 = Global_40001.f_50FA;
                        break;
                    
                    case 1134861606:
                        iVar0 = 0;
                        break;
                    
                    case 1447477866:
                        iVar0 = Global_40001.f_50FB;
                        break;
                    
                    case -1860492113:
                        iVar0 = Global_40001.f_5168;
                        break;
                    
                    case 937772107:
                        iVar0 = Global_40001.f_5169;
                        break;
                    
                    case 1401650071:
                        iVar0 = Global_40001.f_516A;
                        break;
                    
                    case 628662130:
                        iVar0 = Global_40001.f_516B;
                        break;
                    
                    case -985047251:
                        iVar0 = Global_40001.f_516C;
                        break;
                    
                    case -812944463:
                        iVar0 = Global_40001.f_516D;
                        break;
                    
                    case -1447352303:
                        iVar0 = Global_40001.f_516E;
                        break;
                    
                    case -60338860:
                        iVar0 = Global_40001.f_516F;
                        break;
                    
                    case 2088750491:
                        iVar0 = Global_40001.f_5170;
                        break;
                    
                    case -1513913454:
                        iVar0 = Global_40001.f_5171;
                        break;
                    
                    case -1179558480:
                        iVar0 = Global_40001.f_5172;
                        break;
                }
                break;
            
            case -86904375:
                switch (iParam1)
                {
                    case 1283078430:
                        iVar0 = 0;
                        break;
                    
                    case 1574296533:
                        iVar0 = Global_40001.f_50FC;
                        break;
                    
                    case 626875735:
                        iVar0 = Global_40001.f_50FD;
                        break;
                    
                    case 1141059345:
                        iVar0 = Global_40001.f_50FE;
                        break;
                    
                    case 1025884839:
                        iVar0 = Global_40001.f_50FF;
                        break;
                    
                    case 391640422:
                        iVar0 = Global_40001.f_5100;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = Global_40001.f_5101;
                        break;
                    
                    case 1108334355:
                        iVar0 = Global_40001.f_5102;
                        break;
                    
                    case 77277509:
                        iVar0 = Global_40001.f_5103;
                        break;
                    
                    case 1060929921:
                        iVar0 = Global_40001.f_5104;
                        break;
                    
                    case -966040254:
                        iVar0 = Global_40001.f_5105;
                        break;
                    
                    case joaat("component_at_ar_supp"):
                        iVar0 = Global_40001.f_5106;
                        break;
                    
                    case -1181482284:
                        iVar0 = Global_40001.f_5107;
                        break;
                    
                    case -932732805:
                        iVar0 = Global_40001.f_5108;
                        break;
                    
                    case -569259057:
                        iVar0 = Global_40001.f_5109;
                        break;
                    
                    case -326080308:
                        iVar0 = Global_40001.f_510A;
                        break;
                    
                    case 48731514:
                        iVar0 = Global_40001.f_510B;
                        break;
                    
                    case 880736428:
                        iVar0 = Global_40001.f_510C;
                        break;
                    
                    case 1303784126:
                        iVar0 = Global_40001.f_510D;
                        break;
                    
                    case -1654288262:
                        iVar0 = Global_40001.f_510E;
                        break;
                    
                    case -2093598721:
                        iVar0 = 0;
                        break;
                    
                    case -1958983669:
                        iVar0 = Global_40001.f_510F;
                        break;
                    
                    case 1272803094:
                        iVar0 = Global_40001.f_5168;
                        break;
                    
                    case 1080719624:
                        iVar0 = Global_40001.f_5169;
                        break;
                    
                    case 792221348:
                        iVar0 = Global_40001.f_516A;
                        break;
                    
                    case -452181427:
                        iVar0 = Global_40001.f_516B;
                        break;
                    
                    case -746774737:
                        iVar0 = Global_40001.f_516C;
                        break;
                    
                    case -2044296061:
                        iVar0 = Global_40001.f_516D;
                        break;
                    
                    case -199171978:
                        iVar0 = Global_40001.f_516E;
                        break;
                    
                    case -1428075016:
                        iVar0 = Global_40001.f_516F;
                        break;
                    
                    case -1735153315:
                        iVar0 = Global_40001.f_5170;
                        break;
                    
                    case 1796459838:
                        iVar0 = Global_40001.f_5171;
                        break;
                    
                    case -631911105:
                        iVar0 = Global_40001.f_5172;
                        break;
                }
                break;
            
            case -608341376:
                switch (iParam1)
                {
                    case 1227564412:
                        iVar0 = 0;
                        break;
                    
                    case 400507625:
                        iVar0 = Global_40001.f_5110;
                        break;
                    
                    case 696788003:
                        iVar0 = Global_40001.f_5111;
                        break;
                    
                    case 1475288264:
                        iVar0 = Global_40001.f_5112;
                        break;
                    
                    case -1020871238:
                        iVar0 = Global_40001.f_5113;
                        break;
                    
                    case -161179835:
                        iVar0 = Global_40001.f_5114;
                        break;
                    
                    case 1108334355:
                        iVar0 = Global_40001.f_5115;
                        break;
                    
                    case 77277509:
                        iVar0 = Global_40001.f_5116;
                        break;
                    
                    case 1060929921:
                        iVar0 = Global_40001.f_5117;
                        break;
                    
                    case -966040254:
                        iVar0 = Global_40001.f_5118;
                        break;
                    
                    case -1181482284:
                        iVar0 = Global_40001.f_5119;
                        break;
                    
                    case -932732805:
                        iVar0 = Global_40001.f_511A;
                        break;
                    
                    case -569259057:
                        iVar0 = Global_40001.f_511B;
                        break;
                    
                    case -326080308:
                        iVar0 = Global_40001.f_511C;
                        break;
                    
                    case 48731514:
                        iVar0 = Global_40001.f_511D;
                        break;
                    
                    case 880736428:
                        iVar0 = Global_40001.f_511E;
                        break;
                    
                    case 1303784126:
                        iVar0 = Global_40001.f_511F;
                        break;
                    
                    case -1654288262:
                        iVar0 = Global_40001.f_5120;
                        break;
                    
                    case -1018236364:
                        iVar0 = 0;
                        break;
                    
                    case -1243457701:
                        iVar0 = Global_40001.f_5121;
                        break;
                    
                    case 1249283253:
                        iVar0 = Global_40001.f_5168;
                        break;
                    
                    case -857707587:
                        iVar0 = Global_40001.f_5169;
                        break;
                    
                    case -1097543898:
                        iVar0 = Global_40001.f_516A;
                        break;
                    
                    case 1980349969:
                        iVar0 = Global_40001.f_516B;
                        break;
                    
                    case 1219453777:
                        iVar0 = Global_40001.f_516C;
                        break;
                    
                    case -1853459190:
                        iVar0 = Global_40001.f_516D;
                        break;
                    
                    case -2074781016:
                        iVar0 = Global_40001.f_516E;
                        break;
                    
                    case 457967755:
                        iVar0 = Global_40001.f_516F;
                        break;
                    
                    case 235171324:
                        iVar0 = Global_40001.f_5170;
                        break;
                    
                    case 42685294:
                        iVar0 = Global_40001.f_5171;
                        break;
                    
                    case -687617715:
                        iVar0 = Global_40001.f_5172;
                        break;
                }
                break;
            
            case 177293209:
                switch (iParam1)
                {
                    case -98690520:
                        iVar0 = 0;
                        break;
                    
                    case 752418717:
                        iVar0 = Global_40001.f_5122;
                        break;
                    
                    case -130689324:
                        iVar0 = Global_40001.f_5123;
                        break;
                    
                    case 1005144310:
                        iVar0 = Global_40001.f_5125;
                        break;
                    
                    case 247526935:
                        iVar0 = Global_40001.f_5126;
                        break;
                    
                    case -1981031769:
                        iVar0 = Global_40001.f_5124;
                        break;
                    
                    case -2101279869:
                        iVar0 = Global_40001.f_5127;
                        break;
                    
                    case joaat("component_at_scope_max"):
                        iVar0 = 0;
                        break;
                    
                    case -1233121104:
                        iVar0 = Global_40001.f_5128;
                        break;
                    
                    case 776198721:
                        iVar0 = Global_40001.f_5129;
                        break;
                    
                    case -1404903567:
                        iVar0 = Global_40001.f_512A;
                        break;
                    
                    case 1602080333:
                        iVar0 = Global_40001.f_512B;
                        break;
                    
                    case 1764221345:
                        iVar0 = Global_40001.f_512C;
                        break;
                    
                    case -1869205321:
                        iVar0 = 0;
                        break;
                    
                    case 277524638:
                        iVar0 = Global_40001.f_512D;
                        break;
                    
                    case -130843390:
                        iVar0 = Global_40001.f_5168;
                        break;
                    
                    case -977347227:
                        iVar0 = Global_40001.f_5169;
                        break;
                    
                    case -378461067:
                        iVar0 = Global_40001.f_516A;
                        break;
                    
                    case 329939175:
                        iVar0 = Global_40001.f_516B;
                        break;
                    
                    case 643374672:
                        iVar0 = Global_40001.f_516C;
                        break;
                    
                    case 807875052:
                        iVar0 = Global_40001.f_516D;
                        break;
                    
                    case -1401804168:
                        iVar0 = Global_40001.f_516E;
                        break;
                    
                    case -1096495395:
                        iVar0 = Global_40001.f_516F;
                        break;
                    
                    case -847811454:
                        iVar0 = Global_40001.f_5170;
                        break;
                    
                    case -1413108537:
                        iVar0 = Global_40001.f_5171;
                        break;
                    
                    case 1815270123:
                        iVar0 = Global_40001.f_5172;
                        break;
                }
                break;
            
            case -1075685676:
                switch (iParam1)
                {
                    case -1795936926:
                        iVar0 = 0;
                        break;
                    
                    case 1591132456:
                        iVar0 = Global_40001.f_512E;
                        break;
                    
                    case -2046910199:
                        iVar0 = Global_40001.f_5130;
                        break;
                    
                    case 1329061674:
                        iVar0 = Global_40001.f_512F;
                        break;
                    
                    case 733837882:
                        iVar0 = Global_40001.f_5131;
                        break;
                    
                    case 634039983:
                        iVar0 = Global_40001.f_5132;
                        break;
                    
                    case 1140676955:
                        iVar0 = Global_40001.f_5133;
                        break;
                    
                    case -1898661008:
                        iVar0 = Global_40001.f_5134;
                        break;
                    
                    case joaat("component_at_pi_supp_02"):
                        iVar0 = Global_40001.f_5135;
                        break;
                    
                    case 568543123:
                        iVar0 = Global_40001.f_5136;
                        break;
                    
                    case 1550611612:
                        iVar0 = Global_40001.f_5168;
                        break;
                    
                    case 368550800:
                        iVar0 = Global_40001.f_5169;
                        break;
                    
                    case -1769069349:
                        iVar0 = Global_40001.f_516A;
                        break;
                    
                    case 24902297:
                        iVar0 = Global_40001.f_516B;
                        break;
                    
                    case -228041614:
                        iVar0 = Global_40001.f_516C;
                        break;
                    
                    case -584961562:
                        iVar0 = Global_40001.f_516D;
                        break;
                    
                    case -1153175946:
                        iVar0 = Global_40001.f_516E;
                        break;
                    
                    case 1301287696:
                        iVar0 = Global_40001.f_516F;
                        break;
                    
                    case 1597093459:
                        iVar0 = Global_40001.f_5170;
                        break;
                    
                    case 1769871776:
                        iVar0 = Global_40001.f_5171;
                        break;
                    
                    case -1827882671:
                        iVar0 = Global_40001.f_5172;
                        break;
                }
                break;
            
            case 2024373456:
                switch (iParam1)
                {
                    case 1277460590:
                        iVar0 = 0;
                        break;
                    
                    case -1182573778:
                        iVar0 = Global_40001.f_5137;
                        break;
                    
                    case 974903034:
                        iVar0 = Global_40001.f_5139;
                        break;
                    
                    case 190476639:
                        iVar0 = Global_40001.f_5138;
                        break;
                    
                    case -644734235:
                        iVar0 = Global_40001.f_513A;
                        break;
                    
                    case 2146055916:
                        iVar0 = Global_40001.f_513B;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = Global_40001.f_513C;
                        break;
                    
                    case -1613015470:
                        iVar0 = Global_40001.f_513D;
                        break;
                    
                    case -452809877:
                        iVar0 = Global_40001.f_513E;
                        break;
                    
                    case 1038927834:
                        iVar0 = Global_40001.f_513F;
                        break;
                    
                    case joaat("component_at_pi_supp"):
                        iVar0 = Global_40001.f_5140;
                        break;
                    
                    case -1181482284:
                        iVar0 = Global_40001.f_5141;
                        break;
                    
                    case -932732805:
                        iVar0 = Global_40001.f_5142;
                        break;
                    
                    case -569259057:
                        iVar0 = Global_40001.f_5143;
                        break;
                    
                    case -326080308:
                        iVar0 = Global_40001.f_5144;
                        break;
                    
                    case 48731514:
                        iVar0 = Global_40001.f_5145;
                        break;
                    
                    case 880736428:
                        iVar0 = Global_40001.f_5146;
                        break;
                    
                    case 1303784126:
                        iVar0 = Global_40001.f_5147;
                        break;
                    
                    case -653246751:
                        iVar0 = 0;
                        break;
                    
                    case -1520117877:
                        iVar0 = Global_40001.f_5148;
                        break;
                    
                    case -996700057:
                        iVar0 = Global_40001.f_5168;
                        break;
                    
                    case 940943685:
                        iVar0 = Global_40001.f_5169;
                        break;
                    
                    case 1263226800:
                        iVar0 = Global_40001.f_516A;
                        break;
                    
                    case -328035840:
                        iVar0 = Global_40001.f_516B;
                        break;
                    
                    case 1224100642:
                        iVar0 = Global_40001.f_516C;
                        break;
                    
                    case 899228776:
                        iVar0 = Global_40001.f_516D;
                        break;
                    
                    case 616006309:
                        iVar0 = Global_40001.f_516E;
                        break;
                    
                    case -1561952511:
                        iVar0 = Global_40001.f_516F;
                        break;
                    
                    case 572063080:
                        iVar0 = Global_40001.f_5170;
                        break;
                    
                    case 1170588613:
                        iVar0 = Global_40001.f_5171;
                        break;
                    
                    case 966612367:
                        iVar0 = Global_40001.f_5172;
                        break;
                }
                break;
            
            case 1432025498:
                switch (iParam1)
                {
                    case -845938367:
                        iVar0 = 0;
                        break;
                    
                    case 1315288101:
                        iVar0 = Global_40001.f_57B1;
                        break;
                    
                    case 1004815965:
                        iVar0 = Global_40001.f_57B2;
                        break;
                    
                    case -380098265:
                        iVar0 = Global_40001.f_57B0;
                        break;
                    
                    case -1618338827:
                        iVar0 = Global_40001.f_57AF;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = Global_40001.f_57CC;
                        break;
                    
                    case 1108334355:
                        iVar0 = Global_40001.f_57CD;
                        break;
                    
                    case 77277509:
                        iVar0 = Global_40001.f_57CE;
                        break;
                    
                    case 1060929921:
                        iVar0 = Global_40001.f_57CF;
                        break;
                    
                    case -1404903567:
                        iVar0 = Global_40001.f_57D0;
                        break;
                    
                    case 1602080333:
                        iVar0 = Global_40001.f_57D1;
                        break;
                    
                    case -474112444:
                        iVar0 = Global_40001.f_5168;
                        break;
                    
                    case 387223451:
                        iVar0 = Global_40001.f_5169;
                        break;
                    
                    case 617753366:
                        iVar0 = Global_40001.f_516A;
                        break;
                    
                    case -222378256:
                        iVar0 = Global_40001.f_516B;
                        break;
                    
                    case 8741501:
                        iVar0 = Global_40001.f_516C;
                        break;
                    
                    case -601286203:
                        iVar0 = Global_40001.f_516D;
                        break;
                    
                    case -511433605:
                        iVar0 = Global_40001.f_516E;
                        break;
                    
                    case -655387818:
                        iVar0 = Global_40001.f_516F;
                        break;
                    
                    case -282476598:
                        iVar0 = Global_40001.f_5170;
                        break;
                    
                    case 1739501925:
                        iVar0 = Global_40001.f_5171;
                        break;
                    
                    case 1178671645:
                        iVar0 = Global_40001.f_5172;
                        break;
                }
                break;
            
            case -1768145561:
                switch (iParam1)
                {
                    case 382112385:
                        iVar0 = 0;
                        break;
                    
                    case -568352468:
                        iVar0 = Global_40001.f_57B3;
                        break;
                    
                    case 1362433589:
                        iVar0 = Global_40001.f_57B7;
                        break;
                    
                    case 1346235024:
                        iVar0 = Global_40001.f_57B5;
                        break;
                    
                    case -570355066:
                        iVar0 = Global_40001.f_57B6;
                        break;
                    
                    case -2023373174:
                        iVar0 = Global_40001.f_57B4;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = Global_40001.f_57D2;
                        break;
                    
                    case 1108334355:
                        iVar0 = Global_40001.f_57D3;
                        break;
                    
                    case 77277509:
                        iVar0 = Global_40001.f_57D4;
                        break;
                    
                    case -966040254:
                        iVar0 = Global_40001.f_57D5;
                        break;
                    
                    case joaat("component_at_ar_supp_02"):
                        iVar0 = Global_40001.f_57D6;
                        break;
                    
                    case -1181482284:
                        iVar0 = Global_40001.f_57D7;
                        break;
                    
                    case -932732805:
                        iVar0 = Global_40001.f_57D8;
                        break;
                    
                    case -569259057:
                        iVar0 = Global_40001.f_57D9;
                        break;
                    
                    case -326080308:
                        iVar0 = Global_40001.f_57DA;
                        break;
                    
                    case 48731514:
                        iVar0 = Global_40001.f_57DB;
                        break;
                    
                    case 880736428:
                        iVar0 = Global_40001.f_57DC;
                        break;
                    
                    case 1303784126:
                        iVar0 = Global_40001.f_57DD;
                        break;
                    
                    case -1654288262:
                        iVar0 = Global_40001.f_57DE;
                        break;
                    
                    case -415870039:
                        iVar0 = 0;
                        break;
                    
                    case -109086661:
                        iVar0 = Global_40001.f_57DF;
                        break;
                    
                    case -737430213:
                        iVar0 = Global_40001.f_5168;
                        break;
                    
                    case 1125852043:
                        iVar0 = Global_40001.f_5169;
                        break;
                    
                    case 886015732:
                        iVar0 = Global_40001.f_516A;
                        break;
                    
                    case -1262287139:
                        iVar0 = Global_40001.f_516B;
                        break;
                    
                    case -295208411:
                        iVar0 = Global_40001.f_516C;
                        break;
                    
                    case -544154504:
                        iVar0 = Global_40001.f_516D;
                        break;
                    
                    case 172765678:
                        iVar0 = Global_40001.f_516E;
                        break;
                    
                    case -1982877449:
                        iVar0 = Global_40001.f_516F;
                        break;
                    
                    case 2072122460:
                        iVar0 = Global_40001.f_5170;
                        break;
                    
                    case -1986220171:
                        iVar0 = Global_40001.f_5171;
                        break;
                    
                    case 1377355801:
                        iVar0 = Global_40001.f_5172;
                        break;
                }
                break;
            
            case -2009644972:
                switch (iParam1)
                {
                    case 21392614:
                        iVar0 = 0;
                        break;
                    
                    case -829683854:
                        iVar0 = Global_40001.f_5B42;
                        break;
                    
                    case -1055790298:
                        iVar0 = Global_40001.f_57C7;
                        break;
                    
                    case -1928301566:
                        iVar0 = Global_40001.f_57C9;
                        break;
                    
                    case -424845447:
                        iVar0 = Global_40001.f_57C8;
                        break;
                    
                    case -1876057490:
                        iVar0 = Global_40001.f_57C6;
                        break;
                    
                    case 1246324211:
                        iVar0 = Global_40001.f_57FF;
                        break;
                    
                    case 1205768792:
                        iVar0 = Global_40001.f_5800;
                        break;
                    
                    case joaat("component_at_pi_supp_02"):
                        iVar0 = Global_40001.f_5801;
                        break;
                    
                    case -1434287169:
                        iVar0 = Global_40001.f_5802;
                        break;
                    
                    case 259780317:
                        iVar0 = Global_40001.f_5168;
                        break;
                    
                    case -1973342474:
                        iVar0 = Global_40001.f_5169;
                        break;
                    
                    case 1996130345:
                        iVar0 = Global_40001.f_516A;
                        break;
                    
                    case -1455657812:
                        iVar0 = Global_40001.f_516B;
                        break;
                    
                    case -1668263084:
                        iVar0 = Global_40001.f_516C;
                        break;
                    
                    case 1308243489:
                        iVar0 = Global_40001.f_516D;
                        break;
                    
                    case 1122574335:
                        iVar0 = Global_40001.f_516E;
                        break;
                    
                    case 1420313469:
                        iVar0 = Global_40001.f_516F;
                        break;
                    
                    case 109848390:
                        iVar0 = Global_40001.f_5170;
                        break;
                    
                    case 593945703:
                        iVar0 = Global_40001.f_5171;
                        break;
                    
                    case 1142457062:
                        iVar0 = Global_40001.f_5172;
                        break;
                }
                break;
            
            case 1785463520:
                switch (iParam1)
                {
                    case -1797182002:
                        iVar0 = 0;
                        break;
                    
                    case -422587990:
                        iVar0 = Global_40001.f_57B8;
                        break;
                    
                    case -193998727:
                        iVar0 = Global_40001.f_57BC;
                        break;
                    
                    case -515203373:
                        iVar0 = Global_40001.f_57BA;
                        break;
                    
                    case 1842849902:
                        iVar0 = Global_40001.f_57BB;
                        break;
                    
                    case -679861550:
                        iVar0 = Global_40001.f_57B9;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = Global_40001.f_57E0;
                        break;
                    
                    case 1108334355:
                        iVar0 = Global_40001.f_57E1;
                        break;
                    
                    case -966040254:
                        iVar0 = Global_40001.f_57E2;
                        break;
                    
                    case 1528590652:
                        iVar0 = 0;
                        break;
                    
                    case joaat("component_at_ar_supp"):
                        iVar0 = Global_40001.f_57E3;
                        break;
                    
                    case -1181482284:
                        iVar0 = Global_40001.f_57E4;
                        break;
                    
                    case -932732805:
                        iVar0 = Global_40001.f_57E5;
                        break;
                    
                    case -569259057:
                        iVar0 = Global_40001.f_57E6;
                        break;
                    
                    case -326080308:
                        iVar0 = Global_40001.f_57E7;
                        break;
                    
                    case 48731514:
                        iVar0 = Global_40001.f_57E8;
                        break;
                    
                    case 880736428:
                        iVar0 = Global_40001.f_57E9;
                        break;
                    
                    case 1303784126:
                        iVar0 = Global_40001.f_57EA;
                        break;
                    
                    case -1654288262:
                        iVar0 = Global_40001.f_57EB;
                        break;
                    
                    case 941317513:
                        iVar0 = 0;
                        break;
                    
                    case 1748450780:
                        iVar0 = Global_40001.f_57EC;
                        break;
                    
                    case -1869284448:
                        iVar0 = Global_40001.f_5168;
                        break;
                    
                    case 1931539634:
                        iVar0 = Global_40001.f_5169;
                        break;
                    
                    case 1624199183:
                        iVar0 = Global_40001.f_516A;
                        break;
                    
                    case -26834113:
                        iVar0 = Global_40001.f_516B;
                        break;
                    
                    case -210406055:
                        iVar0 = Global_40001.f_516C;
                        break;
                    
                    case 423313640:
                        iVar0 = Global_40001.f_516D;
                        break;
                    
                    case 276639596:
                        iVar0 = Global_40001.f_516E;
                        break;
                    
                    case -991356863:
                        iVar0 = Global_40001.f_516F;
                        break;
                    
                    case -1682848301:
                        iVar0 = Global_40001.f_5170;
                        break;
                    
                    case 996213771:
                        iVar0 = Global_40001.f_5171;
                        break;
                    
                    case -1214048550:
                        iVar0 = Global_40001.f_5172;
                        break;
                }
                break;
            
            case -879347409:
                switch (iParam1)
                {
                    case -1172055874:
                        iVar0 = 0;
                        break;
                    
                    case -958864266:
                        iVar0 = Global_40001.f_57BD;
                        break;
                    
                    case 231258687:
                        iVar0 = Global_40001.f_57BE;
                        break;
                    
                    case 284438159:
                        iVar0 = Global_40001.f_57C0;
                        break;
                    
                    case 15712037:
                        iVar0 = Global_40001.f_57BF;
                        break;
                    
                    case 1108334355:
                        iVar0 = Global_40001.f_57ED;
                        break;
                    
                    case 77277509:
                        iVar0 = Global_40001.f_57EE;
                        break;
                    
                    case joaat("component_at_pi_flsh"):
                        iVar0 = Global_40001.f_57EF;
                        break;
                    
                    case 654802123:
                        iVar0 = Global_40001.f_57F0;
                        break;
                    
                    case -1069552225:
                        iVar0 = Global_40001.f_5168;
                        break;
                    
                    case 11918884:
                        iVar0 = Global_40001.f_5169;
                        break;
                    
                    case 176157112:
                        iVar0 = Global_40001.f_516A;
                        break;
                    
                    case -220052855:
                        iVar0 = Global_40001.f_516B;
                        break;
                    
                    case 288456487:
                        iVar0 = Global_40001.f_516C;
                        break;
                    
                    case 398658626:
                        iVar0 = Global_40001.f_516D;
                        break;
                    
                    case 628697006:
                        iVar0 = Global_40001.f_516E;
                        break;
                    
                    case 925911836:
                        iVar0 = Global_40001.f_516F;
                        break;
                    
                    case 1222307441:
                        iVar0 = Global_40001.f_5170;
                        break;
                    
                    case 552442715:
                        iVar0 = Global_40001.f_5171;
                        break;
                    
                    case -648943513:
                        iVar0 = Global_40001.f_5172;
                        break;
                }
                break;
            
            case -2066285827:
                switch (iParam1)
                {
                    case 25766362:
                        iVar0 = 0;
                        break;
                    
                    case -273676760:
                        iVar0 = Global_40001.f_57C1;
                        break;
                    
                    case -89655827:
                        iVar0 = Global_40001.f_57C5;
                        break;
                    
                    case 1130501904:
                        iVar0 = Global_40001.f_57C3;
                        break;
                    
                    case -1449330342:
                        iVar0 = Global_40001.f_57C4;
                        break;
                    
                    case -2111807319:
                        iVar0 = Global_40001.f_57C2;
                        break;
                    
                    case joaat("component_at_ar_flsh"):
                        iVar0 = Global_40001.f_57F1;
                        break;
                    
                    case 1108334355:
                        iVar0 = Global_40001.f_57F2;
                        break;
                    
                    case -944910075:
                        iVar0 = Global_40001.f_57F3;
                        break;
                    
                    case 1060929921:
                        iVar0 = Global_40001.f_57F4;
                        break;
                    
                    case 1704640795:
                        iVar0 = 0;
                        break;
                    
                    case 1005743559:
                        iVar0 = Global_40001.f_57FE;
                        break;
                    
                    case joaat("component_at_ar_supp"):
                        iVar0 = Global_40001.f_57F5;
                        break;
                    
                    case -1181482284:
                        iVar0 = Global_40001.f_57F6;
                        break;
                    
                    case -932732805:
                        iVar0 = Global_40001.f_57F7;
                        break;
                    
                    case -569259057:
                        iVar0 = Global_40001.f_57F8;
                        break;
                    
                    case -326080308:
                        iVar0 = Global_40001.f_57F9;
                        break;
                    
                    case 48731514:
                        iVar0 = Global_40001.f_57FA;
                        break;
                    
                    case 880736428:
                        iVar0 = Global_40001.f_57FB;
                        break;
                    
                    case 1303784126:
                        iVar0 = Global_40001.f_57FC;
                        break;
                    
                    case -1654288262:
                        iVar0 = Global_40001.f_57FD;
                        break;
                    
                    case -1371515465:
                        iVar0 = Global_40001.f_5168;
                        break;
                    
                    case -1190793877:
                        iVar0 = Global_40001.f_5169;
                        break;
                    
                    case -1497085720:
                        iVar0 = Global_40001.f_516A;
                        break;
                    
                    case -1803148180:
                        iVar0 = Global_40001.f_516B;
                        break;
                    
                    case -1975971886:
                        iVar0 = Global_40001.f_516C;
                        break;
                    
                    case 36929477:
                        iVar0 = Global_40001.f_516D;
                        break;
                    
                    case -268444834:
                        iVar0 = Global_40001.f_516E;
                        break;
                    
                    case -574769446:
                        iVar0 = Global_40001.f_516F;
                        break;
                    
                    case -882699739:
                        iVar0 = Global_40001.f_5170;
                        break;
                    
                    case -1468181474:
                        iVar0 = Global_40001.f_5171;
                        break;
                    
                    case -974541230:
                        iVar0 = Global_40001.f_5172;
                        break;
                }
                break;
            
            case -1355376991:
                switch (iParam1)
                {
                    case -673450233:
                        iVar0 = 0;
                        break;
                }
                break;
            
            case 727643628:
                switch (iParam1)
                {
                    case 1423184737:
                        iVar0 = 0;
                        break;
                    
                    case -2122814295:
                        iVar0 = Global_40001.f_6CB8;
                        break;
                    
                    case -1828202758:
                        iVar0 = Global_40001.f_6CB9;
                        break;
                }
                break;
            
            default:
                iVar6 = func_87(iParam0, &uVar8);
                if (iVar6 != -1)
                {
                    iVar7 = 0;
                    while (iVar7 < unk_0x6E2A2D341D785598(iVar6))
                    {
                        if (unk_0x0575653A26C467A1(iVar6, iVar7, &Var9))
                        {
                            if (!func_74(Var9.f_3))
                            {
                                if (Var9.f_3 == iParam1)
                                {
                                    fVar1 = 1f;
                                    if (Var9.f_5 == -1)
                                    {
                                        iVar0 = -1;
                                    }
                                    else
                                    {
                                        iVar0 = Var9.f_5;
                                    }
                                }
                            }
                        }
                        iVar7++;
                    }
                }
                break;
            }
    }
    if (unk_0x393E9918BC37548A() && func_67())
    {
        StringCopy(&Var11, func_65(iParam1, iParam0), 16);
        func_61(&sVar10, Var11, unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()), 3, 1, func_63(iParam0), func_62(iParam0), -1, 0, 0);
        if (unk_0x83F1366905AB3447(&sVar10))
        {
            iVar0 = unk_0x9780F14926999FDA(unk_0xA8C462EF7D9DC564(&sVar10), 1671640801, 1);
        }
    }
    if (iVar0 > 0)
    {
        fVar12 = func_23(iParam0, &iVar0, fVar1);
        if (fVar12 != 1f)
        {
        }
    }
    return iVar0;
}

float func_23(int iParam0, int iParam1, float fParam2)//Position - 0x9649
{
    float fVar0;
    float fVar1;
    int iVar2;
    
    fVar0 = 0f;
    fVar1 = 0f;
    if (unk_0x393E9918BC37548A() && func_67())
    {
        return 1f;
    }
    if (!unk_0x393E9918BC37548A())
    {
        *iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fParam2));
    }
    if (!Global_12B21)
    {
        if (*iParam1 != 0)
        {
            iVar2 = func_52(iParam0);
            if (iVar2 == 3)
            {
                fVar1 = 0.1f;
            }
            else if (iVar2 == 2)
            {
                fVar1 = 0.15f;
            }
            else if (iVar2 == 1)
            {
                fVar1 = 0.25f;
            }
        }
    }
    if (iLocal_53 == 1)
    {
        if (unk_0x393E9918BC37548A())
        {
            *iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_40001.f_4D));
            fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_40001.f_7A) / 100f));
        }
    }
    if (iLocal_53 == 0)
    {
        if (unk_0x393E9918BC37548A())
        {
            *iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * Global_40001.f_4D));
            if (func_24())
            {
                fVar1 = (fVar1 + (SYSTEM::TO_FLOAT(Global_40001.f_7A) / 100f));
                iLocal_53 = 1;
            }
            else
            {
                iLocal_53 = -1;
            }
        }
    }
    fVar0 = (1f - fVar1);
    *iParam1 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(*iParam1) * fVar0));
    return fVar0;
}

int func_24()//Position - 0x975F
{
    int iVar0;
    int iVar1;
    float fVar2;
    
    if (unk_0xE434AB6E3DE89861())
    {
        return 0;
    }
    if (func_102())
    {
        if (func_27())
        {
            iVar0 = func_26();
            iVar1 = func_25();
            fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(iVar0)) * 100f);
            if (fVar2 > IntToFloat(Global_40001.f_79) && iVar0 >= 8)
            {
                return 1;
            }
        }
    }
    return 0;
}

int func_25()//Position - 0x97BD
{
    int iVar0;
    
    iVar0 = (iVar0 + Global_151ECC);
    iVar0 = (iVar0 + Global_151ECF);
    return iVar0;
}

int func_26()//Position - 0x97D9
{
    int iVar0;
    
    iVar0 = (iVar0 + Global_151ECD);
    iVar0 = (iVar0 + Global_151ECE);
    iVar0 = (iVar0 + Global_151ECC);
    iVar0 = (iVar0 + Global_151ECF);
    iVar0 = (iVar0 + Global_151ED1);
    iVar0 = (iVar0 + Global_151ED0);
    iVar0 = (iVar0 + func_14(joaat("mpply_exploits")));
    iVar0 = (iVar0 + func_14(joaat("mpply_vc_annoyingme")));
    iVar0 = (iVar0 + func_14(joaat("mpply_vc_hate")));
    iVar0 = (iVar0 + func_14(joaat("mpply_bad_crew_name")));
    iVar0 = (iVar0 + func_14(joaat("mpply_bad_crew_motto")));
    iVar0 = (iVar0 + func_14(joaat("mpply_bad_crew_status")));
    iVar0 = (iVar0 + func_14(joaat("mpply_bad_crew_emblem")));
    iVar0 = (iVar0 + func_14(joaat("mpply_playermade_title")));
    iVar0 = (iVar0 + func_14(joaat("mpply_playermade_desc")));
    return iVar0;
}

int func_27()//Position - 0x9897
{
    struct<7> Var0;
    struct<7> Var1;
    
    unk_0x2A1E79AA00097A1D(&Var0, &(Var0.f_1), &(Var0.f_2), &(Var0.f_3), &(Var0.f_4), &(Var0.f_5));
    Var1 = { func_51(joaat("mpply_started_mp")) };
    if (func_28(Var1, Var0, 7))
    {
        return 1;
    }
    return 0;
}

int func_28(struct<7> Param0, struct<7> Param1, int iParam2)//Position - 0x98DB
{
    int iVar0;
    int iVar1;
    
    iVar0 = func_49(Param1);
    iVar1 = func_39(Param0, iParam2);
    if (iVar1 == -15)
    {
        return 0;
    }
    if (func_29(iVar0, iVar1) == 1)
    {
        return 1;
    }
    return 0;
}

int func_29(int iParam0, int iParam1)//Position - 0x9916
{
    int iVar0;
    int iVar1;
    
    if (!func_37(iParam1) || !func_37(iParam0))
    {
        return 1;
    }
    iVar0 = func_35(iParam0);
    iVar1 = func_35(iParam1);
    if (iVar0 > iVar1)
    {
        return 1;
    }
    else if (iVar0 < iVar1)
    {
        return 0;
    }
    iVar0 = func_34(iParam0);
    iVar1 = func_34(iParam1);
    if (iVar0 > iVar1)
    {
        return 1;
    }
    else if (iVar0 < iVar1)
    {
        return 0;
    }
    iVar0 = func_33(iParam0);
    iVar1 = func_33(iParam1);
    if (iVar0 > iVar1)
    {
        return 1;
    }
    else if (iVar0 < iVar1)
    {
        return 0;
    }
    iVar0 = func_32(iParam0);
    iVar1 = func_32(iParam1);
    if (iVar0 > iVar1)
    {
        return 1;
    }
    else if (iVar0 < iVar1)
    {
        return 0;
    }
    iVar0 = func_31(iParam0);
    iVar1 = func_31(iParam1);
    if (iVar0 > iVar1)
    {
        return 1;
    }
    else if (iVar0 < iVar1)
    {
        return 0;
    }
    iVar0 = func_30(iParam0);
    iVar1 = func_30(iParam1);
    if (iVar0 > iVar1)
    {
        return 1;
    }
    return 0;
}

int func_30(int iParam0)//Position - 0x9A22
{
    return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_31(int iParam0)//Position - 0x9A35
{
    return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_32(int iParam0)//Position - 0x9A48
{
    return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_33(int iParam0)//Position - 0x9A5B
{
    return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_34(int iParam0)//Position - 0x9A6D
{
    return iParam0 & 15;
}

var func_35(int iParam0)//Position - 0x9A7A
{
    return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_36(unk_0xA2BC31158C8CEFD2(iParam0, 31), -1, 1)) + 2011;
}

int func_36(bool bParam0, int iParam1, int iParam2)//Position - 0x9A9F
{
    if (bParam0)
    {
        return iParam1;
    }
    return iParam2;
}

int func_37(int iParam0)//Position - 0x9AB6
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    
    if (iParam0 == -15)
    {
        return 0;
    }
    iVar0 = func_30(iParam0);
    if (iVar0 < 0 || iVar0 >= 60)
    {
        return 0;
    }
    iVar1 = func_31(iParam0);
    if (iVar1 < 0 || iVar1 >= 60)
    {
        return 0;
    }
    iVar2 = func_32(iParam0);
    if (iVar2 < 0 || iVar2 > 23)
    {
        return 0;
    }
    iVar3 = func_35(iParam0);
    if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
    {
        return 0;
    }
    iVar4 = func_34(iParam0);
    if (iVar4 < 0 || iVar4 > 11)
    {
        return 0;
    }
    iVar5 = func_33(iParam0);
    if (iVar5 < 1 || iVar5 > func_38(iVar4, iVar3))
    {
        return 0;
    }
    return 1;
}

int func_38(int iParam0, int iParam1)//Position - 0x9B92
{
    if (iParam1 < 0)
    {
        iParam1 = 0;
    }
    switch (iParam0)
    {
        case 0:
        case 2:
        case 4:
        case 6:
        case 7:
        case 9:
        case 11:
            return 31;
            break;
        
        case 3:
        case 5:
        case 8:
        case 10:
            return 30;
            break;
        
        case 1:
            if ((iParam1 % 4) == 0)
            {
                if ((iParam1 % 100) != 0)
                {
                    return 29;
                }
                else if ((iParam1 % 400) == 0)
                {
                    return 29;
                }
            }
            return 28;
            break;
    }
    return 30;
}

var func_39(struct<7> Param0, int iParam1)//Position - 0x9C34
{
    var uVar0;
    var uVar1;
    var uVar2;
    
    if (func_48(Param0) == 0)
    {
        uVar0 = func_49(Param0);
        uVar1 = uVar0;
        func_40(&uVar1, 0, 0, 0, iParam1, 0, 0);
        if (iParam1 == 0)
        {
            uVar1 = uVar0;
        }
        return uVar1;
    }
    return uVar2;
}

void func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9C74
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    
    iVar0 = func_35(*uParam0);
    iVar1 = func_34(*uParam0);
    iVar2 = func_33(*uParam0);
    iVar3 = func_32(*uParam0);
    iVar4 = func_31(*uParam0);
    iVar5 = func_30(*uParam0);
    if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
    {
        return;
    }
    if (iParam1 < 0)
    {
        return;
    }
    if (iParam2 < 0)
    {
        return;
    }
    if (iParam3 < 0)
    {
        return;
    }
    if (iParam4 < 0)
    {
        return;
    }
    if (iParam5 < 0)
    {
        return;
    }
    if (iParam6 < 0)
    {
        return;
    }
    iVar5 = (iVar5 + iParam1);
    while (iVar5 >= 60)
    {
        iParam2++;
        iVar5 = (iVar5 - 60);
    }
    iVar4 = (iVar4 + iParam2);
    while (iVar4 >= 60)
    {
        iParam3++;
        iVar4 = (iVar4 - 60);
    }
    iVar3 = (iVar3 + iParam3);
    while (iVar3 >= 24)
    {
        iParam4++;
        iVar3 = (iVar3 - 24);
    }
    iVar2 = (iVar2 + iParam4);
    iVar6 = func_38(iVar1, iVar0);
    while (iVar2 > iVar6)
    {
        iVar1++;
        iVar2 = (iVar2 - iVar6);
        if (iVar1 > 11)
        {
            iVar0++;
            iVar1 = (iVar1 - 12);
        }
        iVar6 = func_38(iVar1, iVar0);
    }
    iVar1 = (iVar1 + iParam5);
    while (iVar1 > 11)
    {
        iParam6++;
        iVar1 = (iVar1 - 12);
    }
    iVar0 = (iVar0 + iParam6);
    func_41(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_41(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9DF6
{
    func_47(uParam0, iParam1);
    func_46(uParam0, iParam2);
    func_45(uParam0, iParam3);
    func_44(uParam0, iParam5);
    func_43(uParam0, iParam4);
    func_42(uParam0, iParam6);
}

void func_42(var uParam0, int iParam1)//Position - 0x9E2E
{
    if (iParam1 <= 0)
    {
        return;
    }
    if (iParam1 > 2043 || iParam1 < 1979)
    {
        return;
    }
    *uParam0 = (*uParam0 - *uParam0 & 2080374784);
    if (iParam1 < 2011)
    {
        *uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
        *uParam0 |= -2147483648;
    }
    else
    {
        *uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
        *uParam0 = (*uParam0 - *uParam0 & -2147483648);
    }
}

void func_43(var uParam0, int iParam1)//Position - 0x9EB4
{
    int iVar0;
    int iVar1;
    
    iVar0 = func_34(*uParam0);
    iVar1 = func_35(*uParam0);
    if (iParam1 < 1 || iParam1 > func_38(iVar0, iVar1))
    {
        return;
    }
    *uParam0 = (*uParam0 - *uParam0 & 496);
    *uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_44(var uParam0, int iParam1)//Position - 0x9F05
{
    if (iParam1 < 0 || iParam1 > 11)
    {
        return;
    }
    *uParam0 = (*uParam0 - *uParam0 & 15);
    *uParam0 = (*uParam0 || iParam1);
}

void func_45(var uParam0, int iParam1)//Position - 0x9F38
{
    if (iParam1 < 0 || iParam1 > 24)
    {
        return;
    }
    *uParam0 = (*uParam0 - *uParam0 & 15872);
    *uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_46(var uParam0, int iParam1)//Position - 0x9F72
{
    if (iParam1 < 0 || iParam1 >= 60)
    {
        return;
    }
    *uParam0 = (*uParam0 - *uParam0 & 1032192);
    *uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_47(var uParam0, int iParam1)//Position - 0x9FAD
{
    if (iParam1 < 0 || iParam1 >= 60)
    {
        return;
    }
    *uParam0 = (*uParam0 - *uParam0 & 66060288);
    *uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_48(struct<7> Param0)//Position - 0x9FE9
{
    if ((((((Param0 == 0 && Param0.f_1 == 0) && Param0.f_2 == 0) && Param0.f_3 == 0) && Param0.f_4 == 0) && Param0.f_5 == 0) && Param0.f_6 == 0)
    {
        return 1;
    }
    return 0;
}

var func_49(struct<6> Param0, var uParam1)//Position - 0xA03F
{
    var uVar0;
    
    if (Param0 > 0)
    {
        func_42(&uVar0, Param0);
    }
    if (Param0.f_1 > 0)
    {
        func_44(&uVar0, func_50(Param0.f_1));
    }
    if (Param0.f_2 > 0)
    {
        func_43(&uVar0, Param0.f_2);
    }
    if (Param0.f_3 > 0)
    {
        func_45(&uVar0, Param0.f_3);
    }
    if (Param0.f_4 > 0)
    {
        func_46(&uVar0, Param0.f_4);
    }
    if (Param0.f_5 > 0)
    {
        func_47(&uVar0, Param0.f_5);
    }
    return uVar0;
}

int func_50(int iParam0)//Position - 0xA0B5
{
    if (iParam0 < 1)
    {
        return 0;
    }
    if (iParam0 > 12)
    {
        return 0;
    }
    switch (iParam0)
    {
        case 1:
            return 0;
            break;
        
        case 2:
            return 1;
            break;
        
        case 3:
            return 2;
            break;
        
        case 4:
            return 3;
            break;
        
        case 5:
            return 4;
            break;
        
        case 6:
            return 5;
            break;
        
        case 7:
            return 6;
            break;
        
        case 8:
            return 7;
            break;
        
        case 9:
            return 8;
            break;
        
        case 10:
            return 9;
            break;
        
        case 11:
            return 10;
            break;
        
        case 12:
            return 11;
            break;
    }
    return 0;
}

struct<7> func_51(int iParam0)//Position - 0xA17A
{
    var uVar0;
    struct<7> Var1;
    struct<7> Var2;
    
    uVar0 = iParam0;
    if (unk_0x1C909729B9666ACE(uVar0, &Var2, 7, -1))
    {
        return Var2;
    }
    return Var1;
}

int func_52(int iParam0)//Position - 0xA19E
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3[6];
    bool bVar4;
    
    iVar0 = func_56();
    if (iParam0 == 0 || !func_55(iVar0))
    {
        return -1;
    }
    iVar1 = 7;
    switch (iParam0)
    {
        case joaat("weapon_unarmed"):
            break;
        
        case joaat("gadget_parachute"):
            break;
        
        case joaat("weapon_microsmg"):
            iVar1 = 1;
            break;
        
        case joaat("weapon_smg"):
            iVar1 = 1;
            break;
        
        case joaat("weapon_sawnoffshotgun"):
            iVar1 = 3;
            break;
        
        case joaat("weapon_pumpshotgun"):
            iVar1 = 3;
            break;
        
        case joaat("weapon_assaultshotgun"):
            iVar1 = 3;
            break;
        
        case joaat("weapon_assaultrifle"):
            iVar1 = 2;
            break;
        
        case joaat("weapon_carbinerifle"):
            iVar1 = 2;
            break;
        
        case joaat("weapon_advancedrifle"):
            iVar1 = 2;
            break;
        
        case joaat("weapon_sniperrifle"):
            break;
        
        case joaat("weapon_heavysniper"):
            break;
        
        case joaat("weapon_mg"):
            iVar1 = 4;
            break;
        
        case joaat("weapon_combatmg"):
            iVar1 = 4;
            break;
        
        case joaat("weapon_rpg"):
            break;
        
        case joaat("weapon_grenadelauncher"):
            break;
        
        case joaat("weapon_minigun"):
            iVar1 = 5;
            break;
        
        case joaat("weapon_knife"):
            break;
        
        case joaat("weapon_nightstick"):
            break;
        
        case joaat("weapon_petrolcan"):
            break;
        
        case joaat("weapon_stungun"):
            break;
        
        case joaat("weapon_appistol"):
            iVar1 = 0;
            break;
        
        case joaat("weapon_combatpistol"):
            iVar1 = 0;
            break;
        
        case joaat("weapon_pistol"):
            iVar1 = 0;
            break;
        
        case joaat("weapon_smokegrenade"):
            break;
        
        case joaat("weapon_grenade"):
            break;
        
        case joaat("weapon_stickybomb"):
            break;
    }
    if (iVar1 != 7)
    {
        switch (func_53(iVar1, iVar0))
        {
            case 1:
                return 3;
                break;
            
            case 2:
                return 2;
                break;
            
            case 3:
                return 1;
                break;
        }
    }
    else
    {
        iVar3[0] = func_53(1, iVar0);
        iVar3[1] = func_53(3, iVar0);
        iVar3[2] = func_53(2, iVar0);
        iVar3[3] = func_53(4, iVar0);
        iVar3[4] = func_53(5, iVar0);
        iVar3[5] = func_53(0, iVar0);
        bVar4 = false;
        iVar2 = 0;
        while (iVar2 < 6)
        {
            if (iVar3[iVar2] < 3)
            {
                bVar4 = true;
            }
            iVar2++;
        }
        if (!bVar4)
        {
            return 1;
        }
        bVar4 = false;
        iVar2 = 0;
        while (iVar2 < 6)
        {
            if (iVar3[iVar2] < 2)
            {
                bVar4 = true;
            }
            iVar2++;
        }
        if (!bVar4)
        {
            return 2;
        }
        bVar4 = false;
        iVar2 = 0;
        while (iVar2 < 6)
        {
            if (iVar3[iVar2] < 1)
            {
                bVar4 = true;
            }
            iVar2++;
        }
        if (!bVar4)
        {
            return 3;
        }
    }
    return -1;
}

int func_53(int iParam0, int iParam1)//Position - 0xA3FA
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    if (iParam0 == 0)
    {
        iVar0 = 0;
        iVar1 = 1;
        iVar2 = 2;
        iVar3 = -1;
    }
    else if (iParam0 == 1)
    {
        iVar0 = 3;
        iVar1 = 4;
        iVar2 = 5;
        iVar3 = -1;
    }
    else if (iParam0 == 2)
    {
        iVar0 = 9;
        iVar1 = 10;
        iVar2 = 11;
        iVar3 = -1;
    }
    else if (iParam0 == 3)
    {
        iVar0 = 6;
        iVar1 = 7;
        iVar2 = 8;
        iVar3 = -1;
    }
    else if (iParam0 == 4)
    {
        iVar0 = 12;
        iVar1 = 13;
        iVar2 = 14;
        iVar3 = -1;
    }
    else if (iParam0 == 5)
    {
        iVar0 = 15;
        iVar1 = 16;
        iVar2 = 17;
        iVar3 = -1;
    }
    else if (iParam0 == 6)
    {
        iVar0 = 18;
        iVar1 = 19;
        iVar2 = 20;
        iVar3 = 21;
    }
    else
    {
        return 0;
    }
    iVar4 = func_54(iVar0, iParam1);
    if (func_54(iVar1, iParam1) < iVar4)
    {
        iVar4 = func_54(iVar1, iParam1);
    }
    if (func_54(iVar2, iParam1) < iVar4)
    {
        iVar4 = func_54(iVar2, iParam1);
    }
    if (iVar3 != -1)
    {
        if (func_54(iVar3, iParam1) < iVar4)
        {
            iVar4 = func_54(iVar3, iParam1);
        }
    }
    return iVar4;
}

int func_54(int iParam0, int iParam1)//Position - 0xA4FE
{
    return Global_1B3C8.f_4AC6[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

bool func_55(int iParam0)//Position - 0xA51A
{
    return iParam0 < 3;
}

int func_56()//Position - 0xA526
{
    func_57();
    return Global_1B3C8.f_936.f_21B.f_10E1;
}

void func_57()//Position - 0xA53F
{
    int iVar0;
    
    if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
    {
        if (func_59(Global_1B3C8.f_936.f_21B.f_10E1) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
        {
            iVar0 = func_58(unk_0x0FA8183DAD2B3203());
            if (func_55(iVar0) && (!func_160(14) || Global_1AFAF))
            {
                if (Global_1B3C8.f_936.f_21B.f_10E1 != iVar0 && func_55(Global_1B3C8.f_936.f_21B.f_10E1))
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

int func_58(int iParam0)//Position - 0xA63C
{
    int iVar0;
    int iVar1;
    
    if (unk_0xD4B321D9096B01FC(iParam0))
    {
        iVar1 = unk_0x7F375072508F738F(iParam0);
        iVar0 = 0;
        while (iVar0 <= 2)
        {
            if (func_59(iVar0) == iVar1)
            {
                return iVar0;
            }
            iVar0++;
        }
    }
    return 145;
}

int func_59(int iParam0)//Position - 0xA679
{
    if (func_55(iParam0))
    {
        return func_60(iParam0);
    }
    else if (iParam0 != 145)
    {
    }
    return 0;
}

var func_60(int iParam0)//Position - 0xA69E
{
    return Global_706[iParam0 /*29*/];
}

void func_61(char* sParam0, char[8] cParam1, char[4] cParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0xA6AD
{
    switch (unk_0xA8C462EF7D9DC564(&cParam1))
    {
        case 64715401:
        case -2016195117:
            StringCopy(&cParam1, "GSA_TYPE_R", 16);
            break;
        
        case -414529079:
        case -1253005183:
            StringCopy(&cParam1, "GSA_TYPE_C", 16);
            break;
        
        case 336264847:
        case -1119195824:
            StringCopy(&cParam1, "GSA_TYPE_RO", 16);
            break;
        
        case 531395379:
        case -672224483:
            StringCopy(&cParam1, "GSA_TYPE_CH", 16);
            break;
        
        case 1034118160:
        case 600999375:
            StringCopy(&cParam1, "GSA_TYPE_G", 16);
            break;
        
        case -218834291:
        case -859056265:
            StringCopy(&cParam1, "GSA_TYPE_B", 16);
            break;
        
        case 1779531303:
        case 82051787:
            StringCopy(&cParam1, "GSA_TYPE_FW", 16);
            break;
    }
    StringCopy(sParam0, "", 64);
    switch (iParam5)
    {
        case 0:
            if (iParam4 == joaat("mp_m_freemode_01"))
            {
                StringCopy(sParam0, "M", 64);
            }
            else if (iParam4 == joaat("mp_f_freemode_01"))
            {
                StringCopy(sParam0, "F", 64);
            }
            StringConCat(sParam0, "_HA_", 64);
            StringConCat(sParam0, &cParam1, 64);
            StringConCat(sParam0, "_t", 64);
            StringIntConCat(sParam0, iParam6, 64);
            StringConCat(sParam0, "_v", 64);
            StringIntConCat(sParam0, iParam7, 64);
            break;
        
        case 1:
            if (iParam4 == joaat("mp_m_freemode_01"))
            {
                StringCopy(sParam0, "M", 64);
            }
            else if (iParam4 == joaat("mp_f_freemode_01"))
            {
                StringCopy(sParam0, "F", 64);
            }
            StringConCat(sParam0, "_CL_", 64);
            if (iParam6 == 12)
            {
                StringConCat(sParam0, "OUTFIT_", 64);
            }
            StringConCat(sParam0, &cParam1, 64);
            if (iParam8 != -1)
            {
                StringConCat(sParam0, "_n", 64);
                StringIntConCat(sParam0, iParam8, 64);
            }
            StringConCat(sParam0, "_t", 64);
            StringIntConCat(sParam0, iParam6, 64);
            StringConCat(sParam0, "_v", 64);
            StringIntConCat(sParam0, iParam7, 64);
            if (iParam9 != -1)
            {
                StringConCat(sParam0, "_p", 64);
                StringIntConCat(sParam0, iParam9, 64);
            }
            break;
        
        case 2:
            if (iParam4 == joaat("mp_m_freemode_01"))
            {
                StringCopy(sParam0, "M", 64);
            }
            else if (iParam4 == joaat("mp_f_freemode_01"))
            {
                StringCopy(sParam0, "F", 64);
            }
            StringConCat(sParam0, "_TA_", 64);
            StringConCat(sParam0, &cParam1, 64);
            StringConCat(sParam0, "_t", 64);
            StringIntConCat(sParam0, iParam6, 64);
            StringConCat(sParam0, "_v", 64);
            StringIntConCat(sParam0, iParam7, 64);
            break;
        
        case 3:
            StringConCat(sParam0, "WP_", 64);
            StringConCat(sParam0, &cParam1, 64);
            StringConCat(sParam0, "_t", 64);
            StringIntConCat(sParam0, iParam6, 64);
            StringConCat(sParam0, "_v", 64);
            StringIntConCat(sParam0, iParam7, 64);
            if (iParam8 != -1)
            {
                StringConCat(sParam0, "_n", 64);
                StringIntConCat(sParam0, iParam8, 64);
            }
            break;
        
        case 4:
            if (iParam4 == Global_12023)
            {
                StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
            }
            else if (iParam4 == Global_12024)
            {
                StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
            }
            else if (iParam4 == Global_12025)
            {
                StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
            }
            else if (iParam4 == Global_12026)
            {
                StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
            }
            else if (iParam4 == Global_12027)
            {
                StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
            }
            else if (iParam4 == 0)
            {
                StringConCat(sParam0, "VEM_", 64);
                if (iParam6 == 24 || iParam6 == 25)
                {
                    if (iParam8 == 1)
                    {
                        StringConCat(sParam0, "COLOUR_1_", 64);
                    }
                    else if (iParam8 == 2)
                    {
                        StringConCat(sParam0, "COLOUR_2_", 64);
                    }
                    else if (iParam8 == 3)
                    {
                        StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
                    }
                    if (iParam9 == 5)
                    {
                        StringConCat(sParam0, "MCT_CHROME_", 64);
                    }
                    else if (iParam9 == 1)
                    {
                        StringConCat(sParam0, "MCT_CLASSIC_", 64);
                    }
                    else if (iParam9 == 0)
                    {
                        StringConCat(sParam0, "MCT_METALLIC_", 64);
                    }
                    else if (iParam9 == 4)
                    {
                        StringConCat(sParam0, "MCT_METALS_", 64);
                    }
                    else if (iParam9 == 3)
                    {
                        StringConCat(sParam0, "MCT_MATTE_", 64);
                    }
                    else if (iParam9 == 2)
                    {
                        StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
                    }
                    else if (iParam9 == 6)
                    {
                        StringConCat(sParam0, "MCT_NONE_", 64);
                    }
                    iParam8 = -1;
                }
                else if (iParam6 == 38)
                {
                    StringConCat(sParam0, "COLOUR_5_", 64);
                }
                else if (iParam6 == 65)
                {
                    StringConCat(sParam0, "COLOUR_6_", 64);
                }
                StringConCat(sParam0, &cParam1, 64);
                if (iParam8 != -1)
                {
                    StringConCat(sParam0, "_n", 64);
                    StringIntConCat(sParam0, iParam8, 64);
                }
                StringConCat(sParam0, "_t", 64);
                StringIntConCat(sParam0, iParam6, 64);
                StringConCat(sParam0, "_v", 64);
                StringIntConCat(sParam0, iParam7, 64);
            }
            else if (iParam6 == 22)
            {
                StringCopy(&cParam1, unk_0x37AE6E37399BFD47(iParam4), 16);
                if (unk_0x9591DE0F00127F2A(&cParam1) || unk_0xA8C462EF7D9DC564(&cParam1) == -515263000)
                {
                    return;
                }
                StringConCat(sParam0, "VEM_INSURANCE_", 64);
                StringConCat(sParam0, &cParam1, 64);
                if (!bParam10)
                {
                    switch (iParam4)
                    {
                        case joaat("dubsta2"):
                        case joaat("cavalcade2"):
                        case joaat("mesa2"):
                        case joaat("rapidgt2"):
                        case joaat("emperor2"):
                        case joaat("cargobob2"):
                            StringConCat(sParam0, "2", 64);
                            break;
                        
                        case joaat("mesa3"):
                        case joaat("emperor3"):
                        case joaat("burrito3"):
                        case joaat("mule3"):
                            StringConCat(sParam0, "3", 64);
                            break;
                        
                        case joaat("tornado4"):
                            StringConCat(sParam0, "4", 64);
                            break;
                        }
                }
            }
            else if (iParam6 == 40)
            {
                if (iParam4 == joaat("fcr2"))
                {
                    StringCopy(&cParam1, "FCR2", 16);
                }
                else if (iParam4 == joaat("diablous2"))
                {
                    StringCopy(&cParam1, "DIABLOUS2", 16);
                }
                else if (iParam4 == joaat("comet3"))
                {
                    StringCopy(&cParam1, "COMET3", 16);
                }
                else
                {
                    StringCopy(&cParam1, unk_0x37AE6E37399BFD47(iParam4), 16);
                    if (unk_0x9591DE0F00127F2A(&cParam1))
                    {
                        return;
                    }
                }
                StringConCat(sParam0, "VEU_", 64);
                StringConCat(sParam0, &cParam1, 64);
                StringConCat(sParam0, "_t0_v", 64);
                StringIntConCat(sParam0, iParam7, 64);
            }
            else
            {
                StringConCat(sParam0, "VE_", 64);
                StringConCat(sParam0, &cParam1, 64);
                if (!bParam10)
                {
                    switch (iParam4)
                    {
                        case joaat("dubsta2"):
                        case joaat("cavalcade2"):
                        case joaat("mesa2"):
                        case joaat("rapidgt2"):
                        case joaat("emperor2"):
                        case joaat("cargobob2"):
                            StringConCat(sParam0, "2", 64);
                            break;
                        
                        case joaat("mesa3"):
                        case joaat("emperor3"):
                        case joaat("burrito3"):
                        case joaat("mule3"):
                            StringConCat(sParam0, "3", 64);
                            break;
                        
                        case joaat("tornado4"):
                            StringConCat(sParam0, "4", 64);
                            break;
                        }
                }
                if (iParam8 != -1)
                {
                    StringConCat(sParam0, "_n", 64);
                    StringIntConCat(sParam0, iParam8, 64);
                }
                StringConCat(sParam0, "_t", 64);
                StringIntConCat(sParam0, iParam6, 64);
                StringConCat(sParam0, "_v", 64);
                StringIntConCat(sParam0, iParam7, 64);
                if (iParam9 != -1)
                {
                    StringConCat(sParam0, "_p", 64);
                    StringIntConCat(sParam0, iParam9, 64);
                }
            }
            break;
    }
    if (bParam11)
    {
        StringConCat(sParam0, "_CESP", 64);
    }
}

int func_62(int iParam0)//Position - 0xAC88
{
    switch (iParam0)
    {
        case -1075685676:
        case 2024373456:
        case 961495388:
        case -86904375:
        case -608341376:
        case 177293209:
        case 1432025498:
        case -1768145561:
        case -2009644972:
        case 1785463520:
        case -879347409:
        case -2066285827:
            return 2;
            break;
    }
    return -1;
}

int func_63(int iParam0)//Position - 0xACE7
{
    return func_64(iParam0);
}

int func_64(int iParam0)//Position - 0xACF5
{
    switch (iParam0)
    {
        case joaat("weapon_unarmed"):
            return 0;
            break;
        
        case joaat("weapon_pistol"):
            return 1;
            break;
        
        case joaat("weapon_combatpistol"):
            return 2;
            break;
        
        case joaat("weapon_appistol"):
            return 3;
            break;
        
        case joaat("weapon_pistol50"):
            return 4;
            break;
        
        case joaat("weapon_smg"):
            return 5;
            break;
        
        case joaat("weapon_assaultsmg"):
            return 6;
            break;
        
        case joaat("weapon_microsmg"):
            return 7;
            break;
        
        case joaat("weapon_assaultrifle"):
            return 8;
            break;
        
        case joaat("weapon_carbinerifle"):
            return 9;
            break;
        
        case -947031628:
            return 10;
            break;
        
        case joaat("weapon_advancedrifle"):
            return 11;
            break;
        
        case joaat("weapon_mg"):
            return 12;
            break;
        
        case joaat("weapon_combatmg"):
            return 13;
            break;
        
        case -572349828:
            return 14;
            break;
        
        case joaat("weapon_stickybomb"):
            return 15;
            break;
        
        case joaat("weapon_grenade"):
            return 16;
            break;
        
        case joaat("weapon_smokegrenade"):
            return 17;
            break;
        
        case joaat("weapon_remotesniper"):
            return 18;
            break;
        
        case 392730790:
            return 19;
            break;
        
        case joaat("weapon_sniperrifle"):
            return 20;
            break;
        
        case joaat("weapon_heavysniper"):
            return 21;
            break;
        
        case joaat("weapon_pumpshotgun"):
            return 22;
            break;
        
        case joaat("weapon_bullpupshotgun"):
            return 23;
            break;
        
        case joaat("weapon_assaultshotgun"):
            return 24;
            break;
        
        case joaat("weapon_sawnoffshotgun"):
            return 25;
            break;
        
        case joaat("weapon_grenadelauncher"):
            return 26;
            break;
        
        case joaat("weapon_rpg"):
            return 27;
            break;
        
        case joaat("weapon_minigun"):
            return 28;
            break;
        
        case -344484024:
            return 29;
            break;
        
        case -1887867191:
            return 30;
            break;
        
        case joaat("weapon_stungun"):
            return 31;
            break;
        
        case -837150131:
            return 32;
            break;
        
        case joaat("gadget_parachute"):
            return 33;
            break;
        
        case joaat("weapon_knife"):
            return 34;
            break;
        
        case joaat("weapon_nightstick"):
            return 35;
            break;
        
        case joaat("weapon_hammer"):
            return 36;
            break;
        
        case joaat("weapon_bat"):
            return 37;
            break;
        
        case joaat("weapon_crowbar"):
            return 38;
            break;
        
        case joaat("weapon_golfclub"):
            return 39;
            break;
        
        case joaat("weapon_grenadelauncher_smoke"):
            return 40;
            break;
        
        case joaat("weapon_molotov"):
            return 41;
            break;
        
        case joaat("weapon_fireextinguisher"):
            return 42;
            break;
        
        case joaat("weapon_petrolcan"):
            return 43;
            break;
        
        case joaat("weapon_digiscanner"):
            return 44;
            break;
        
        case joaat("weapon_bottle"):
            return 45;
            break;
        
        case joaat("weapon_specialcarbine"):
            return 46;
            break;
        
        case joaat("weapon_snspistol"):
            return 47;
            break;
        
        case joaat("weapon_heavypistol"):
            return 49;
            break;
        
        case joaat("weapon_bullpuprifle"):
            return 48;
            break;
        
        case joaat("weapon_gusenberg"):
            return 50;
            break;
        
        case joaat("weapon_dagger"):
            return 51;
            break;
        
        case joaat("weapon_vintagepistol"):
            return 52;
            break;
        
        case joaat("weapon_flaregun"):
            return 57;
            break;
        
        case joaat("weapon_musket"):
            return 53;
            break;
        
        case joaat("weapon_firework"):
            return 54;
            break;
        
        case joaat("weapon_marksmanrifle"):
            return 56;
            break;
        
        case joaat("weapon_heavyshotgun"):
            return 55;
            break;
        
        case joaat("weapon_proxmine"):
            return 60;
            break;
        
        case joaat("weapon_hominglauncher"):
            return 61;
            break;
        
        case joaat("weapon_hatchet"):
            return 58;
            break;
        
        case joaat("weapon_railgun"):
            return 59;
            break;
        
        case joaat("weapon_combatpdw"):
            return 64;
            break;
        
        case joaat("weapon_knuckle"):
            return 62;
            break;
        
        case joaat("weapon_marksmanpistol"):
            return 63;
            break;
        
        case joaat("weapon_machete"):
            return 65;
            break;
        
        case joaat("weapon_machinepistol"):
            return 68;
            break;
        
        case joaat("weapon_dbshotgun"):
            return 66;
            break;
        
        case joaat("weapon_compactrifle"):
            return 67;
            break;
        
        case joaat("weapon_flashlight"):
            return 69;
            break;
        
        case joaat("weapon_revolver"):
            return 70;
            break;
        
        case joaat("weapon_switchblade"):
            return 71;
            break;
        
        case 317205821:
            return 72;
            break;
        
        case -1121678507:
            return 73;
            break;
        
        case 125959754:
            return 74;
            break;
        
        case -853065399:
            return 75;
            break;
        
        case -1169823560:
            return 76;
            break;
        
        case -1810795771:
            return 77;
            break;
        
        case 419712736:
            return 78;
            break;
        
        case 961495388:
            return 8;
            break;
        
        case -86904375:
            return 9;
            break;
        
        case -608341376:
            return 13;
            break;
        
        case 177293209:
            return 21;
            break;
        
        case -1075685676:
            return 1;
            break;
        
        case 2024373456:
            return 5;
            break;
        
        case 1432025498:
            return 22;
            break;
        
        case -1768145561:
            return 46;
            break;
        
        case -2009644972:
            return 47;
            break;
        
        case 1785463520:
            return 56;
            break;
        
        case -879347409:
            return 70;
            break;
        
        case -2066285827:
            return 48;
            break;
        
        case -1746263880:
            return 79;
            break;
        
        case 940833800:
            return 80;
            break;
        
        case -1355376991:
            return 81;
            break;
        
        case 1198256469:
            return 82;
            break;
        
        case -1238556825:
            return 83;
            break;
        
        case -1853920116:
            return 84;
            break;
        
        case 727643628:
            return 85;
            break;
    }
    return 0;
}

char* func_65(int iParam0, int iParam1)//Position - 0xB257
{
    int iVar0;
    int iVar1;
    var uVar2;
    struct<7> Var3;
    
    if (iParam1 == joaat("weapon_knuckle"))
    {
        switch (iParam0)
        {
            case joaat("component_knuckle_varmod_base"):
                return "WT_KNUCKLE";
                break;
            
            case joaat("component_knuckle_varmod_pimp"):
                return "WCT_KNUCK_02";
                break;
            
            case joaat("component_knuckle_varmod_ballas"):
                return "WCT_KNUCK_BG";
                break;
            
            case joaat("component_knuckle_varmod_dollar"):
                return "WCT_KNUCK_DLR";
                break;
            
            case joaat("component_knuckle_varmod_diamond"):
                return "WCT_KNUCK_DMD";
                break;
            
            case joaat("component_knuckle_varmod_hate"):
                return "WCT_KNUCK_HT";
                break;
            
            case joaat("component_knuckle_varmod_love"):
                return "WCT_KNUCK_LV";
                break;
            
            case joaat("component_knuckle_varmod_player"):
                return "WCT_KNUCK_PC";
                break;
            
            case joaat("component_knuckle_varmod_king"):
                return "WCT_KNUCK_SLG";
                break;
            
            case joaat("component_knuckle_varmod_vagos"):
                return "WCT_KNUCK_VG";
                break;
            }
    }
    switch (iParam0)
    {
        case 0:
            return "WCT_NONE";
            break;
        
        case joaat("component_at_railcover_01"):
            return "WCT_RAIL";
            break;
        
        case joaat("component_at_ar_afgrip"):
            return "WCT_GRIP";
            break;
        
        case joaat("component_at_pi_flsh"):
            return "WCT_FLASH";
            break;
        
        case joaat("component_at_ar_flsh"):
            return "WCT_FLASH";
            break;
        
        case joaat("component_at_scope_macro"):
            return "WCT_SCOPE_MAC";
            break;
        
        case joaat("component_at_scope_macro_02"):
            return "WCT_SCOPE_MAC";
            break;
        
        case joaat("component_at_scope_small"):
            return "WCT_SCOPE_SML";
            break;
        
        case joaat("component_at_scope_small_02"):
            return "WCT_SCOPE_SML";
            break;
        
        case joaat("component_at_scope_medium"):
            return "WCT_SCOPE_MED";
            break;
        
        case joaat("component_at_scope_large"):
            return "WCT_SCOPE_LRG";
            break;
        
        case joaat("component_at_scope_max"):
            return "WCT_SCOPE_MAX";
            break;
        
        case joaat("component_at_pi_supp"):
            return "WCT_SUPP";
            break;
        
        case joaat("component_at_ar_supp"):
            return "WCT_SUPP";
            break;
        
        case joaat("component_at_ar_supp_02"):
            return "WCT_SUPP";
            break;
        
        case joaat("component_at_sr_supp"):
            return "WCT_SUPP";
            break;
        
        case joaat("component_pistol_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_pistol_clip_02"):
            return "WCT_CLIP2";
            break;
        
        case joaat("component_combatpistol_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_combatpistol_clip_02"):
            return "WCT_CLIP2";
            break;
        
        case joaat("component_appistol_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_appistol_clip_02"):
            return "WCT_CLIP2";
            break;
        
        case joaat("component_microsmg_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_microsmg_clip_02"):
            return "WCT_CLIP2";
            break;
        
        case joaat("component_smg_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_smg_clip_02"):
            return "WCT_CLIP2";
            break;
        
        case joaat("component_assaultrifle_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_assaultrifle_clip_02"):
            return "WCT_CLIP2";
            break;
        
        case joaat("component_carbinerifle_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_carbinerifle_clip_02"):
            return "WCT_CLIP2";
            break;
        
        case joaat("component_advancedrifle_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_advancedrifle_clip_02"):
            return "WCT_CLIP2";
            break;
        
        case joaat("component_mg_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_mg_clip_02"):
            return "WCT_CLIP2";
            break;
        
        case joaat("component_combatmg_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_combatmg_clip_02"):
            return "WCT_CLIP2";
            break;
        
        case joaat("component_assaultshotgun_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_assaultshotgun_clip_02"):
            return "WCT_CLIP2";
            break;
        
        case joaat("component_sniperrifle_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_heavysniper_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_minigun_clip_01"):
            return "WCT_CLIP2";
            break;
        
        case joaat("component_assaultsmg_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_assaultsmg_clip_02"):
            return "WCT_CLIP2";
            break;
        
        case joaat("component_pistol50_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_pistol50_clip_02"):
            return "WCT_CLIP2";
            break;
        
        case 195735895:
            return "WCT_CLIP1";
            break;
        
        case 1525977990:
            return "WCT_CLIP1";
            break;
        
        case 1824470811:
            return "WCT_CLIP2";
            break;
        
        case -890514874:
            return "WCT_CLIP1";
            break;
        
        case -507117574:
            return "WCT_CLIP2";
            break;
        
        case -124428919:
            return "WCT_CLIP1";
            break;
        
        case 1048471894:
            return "WCT_CLIP2";
            break;
        
        case joaat("component_snspistol_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_snspistol_clip_02"):
            return "WCT_CLIP2";
            break;
        
        case joaat("component_vintagepistol_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_vintagepistol_clip_02"):
            return "WCT_CLIP2";
            break;
        
        case joaat("component_heavyshotgun_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_marksmanrifle_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_heavyshotgun_clip_02"):
            return "WCT_CLIP2";
            break;
        
        case joaat("component_marksmanrifle_clip_02"):
            return "WCT_CLIP2";
            break;
        
        case joaat("component_at_scope_large_fixed_zoom"):
            return "WCT_SCOPE_LRG";
            break;
        
        case joaat("component_at_pi_supp_02"):
            return "WCT_SUPP";
            break;
        
        case joaat("component_combatpdw_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_combatpdw_clip_02"):
            return "WCT_CLIP2";
            break;
        
        case joaat("component_marksmanpistol_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_machinepistol_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_machinepistol_clip_02"):
            return "WCT_CLIP2";
            break;
        
        case joaat("component_assaultrifle_varmod_luxe"):
            return "WCT_VAR_GOLD";
            break;
        
        case joaat("component_advancedrifle_varmod_luxe"):
            return "WCT_VAR_METAL";
            break;
        
        case joaat("component_carbinerifle_varmod_luxe"):
            return "WCT_VAR_GOLD";
            break;
        
        case joaat("component_appistol_varmod_luxe"):
            return "WCT_VAR_METAL";
            break;
        
        case joaat("component_pistol_varmod_luxe"):
            return "WCT_VAR_GOLD";
            break;
        
        case joaat("component_pistol50_varmod_luxe"):
            return "WCT_VAR_SIL";
            break;
        
        case joaat("component_heavypistol_varmod_luxe"):
            return "WCT_VAR_WOOD";
            break;
        
        case joaat("component_smg_varmod_luxe"):
            return "WCT_VAR_GOLD";
            break;
        
        case joaat("component_microsmg_varmod_luxe"):
            return "WCT_VAR_GOLD";
            break;
        
        case joaat("component_sawnoffshotgun_varmod_luxe"):
            return "WCT_VAR_METAL";
            break;
        
        case joaat("component_sniperrifle_varmod_luxe"):
            return "WCT_VAR_WOOD";
            break;
        
        case joaat("component_marksmanrifle_varmod_luxe"):
            return "WCT_VAR_GOLD";
            break;
        
        case joaat("component_assaultsmg_varmod_lowrider"):
            return "WCT_VAR_GOLD";
            break;
        
        case joaat("component_bullpuprifle_varmod_low"):
            return "WCT_VAR_METAL";
            break;
        
        case joaat("component_combatmg_varmod_lowrider"):
            return "WCT_VAR_ETCHM";
            break;
        
        case joaat("component_combatpistol_varmod_lowrider"):
            return "WCT_VAR_GOLD";
            break;
        
        case joaat("component_mg_varmod_lowrider"):
            return "WCT_VAR_GOLD";
            break;
        
        case joaat("component_pumpshotgun_varmod_lowrider"):
            return "WCT_VAR_GOLD";
            break;
        
        case joaat("component_snspistol_varmod_lowrider"):
            return "WCT_VAR_WOOD";
            break;
        
        case joaat("component_specialcarbine_varmod_lowrider"):
            return "WCT_VAR_ETCHM";
            break;
        
        case joaat("component_switchblade_varmod_base"):
            return "WCT_SB_BASE";
            break;
        
        case joaat("component_switchblade_varmod_var1"):
            return "WCT_SB_VAR1";
            break;
        
        case joaat("component_switchblade_varmod_var2"):
            return "WCT_SB_VAR2";
            break;
        
        case joaat("component_revolver_clip_01"):
            return "WCT_CLIP1";
            break;
        
        case joaat("component_revolver_varmod_boss"):
            return "WCT_REV_VARB";
            break;
        
        case joaat("component_revolver_varmod_goon"):
            return "WCT_REV_VARG";
            break;
        
        case joaat("component_smg_clip_03"):
            return "WCT_CLIP_DRM";
            break;
        
        case joaat("component_carbinerifle_clip_03"):
            return "WCT_CLIP_BOX";
            break;
        
        case joaat("component_assaultrifle_clip_03"):
            return "WCT_CLIP_DRM";
            break;
        
        case joaat("component_heavyshotgun_clip_03"):
            return "WCT_CLIP_DRM";
            break;
        
        case 1623028892:
            return "WCT_VAR_GUN";
            break;
        
        case -1214048550:
            return "WCT_CAMO_IND";
            break;
        
        case 1142457062:
            return "WCT_CAMO_IND";
            break;
        
        case -829683854:
            return "WCT_CLIP2";
            break;
        
        case -944910075:
            return "WCT_SCOPE_MAC2";
            break;
        
        case 1060929921:
            return "WCT_SCOPE_SML2";
            break;
        
        case -673450233:
            return "WCT_VAR_RAY18";
            break;
        
        case 1423184737:
            return "WCT_CLIP1";
            break;
        
        case -2122814295:
            return "WCT_CLIP2";
            break;
        
        case -1828202758:
            return "WCT_SUPP";
            break;
        
        default:
            if (iParam1 != 0)
            {
                iVar0 = func_87(iParam1, &uVar2);
                if (iVar0 != -1)
                {
                    iVar1 = 0;
                    while (iVar1 < unk_0x6E2A2D341D785598(iVar0))
                    {
                        if (unk_0x0575653A26C467A1(iVar0, iVar1, &Var3))
                        {
                            if (Var3.f_3 == iParam0)
                            {
                                return func_66(&(Var3.f_6));
                            }
                        }
                        iVar1++;
                    }
                }
            }
            break;
    }
    return "WCT_INVALID";
}

var func_66(var uParam0)//Position - 0xBA1C
{
    return uParam0;
}

int func_67()//Position - 0xBA26
{
    if (unk_0x393E9918BC37548A() && func_68())
    {
        return 1;
    }
    return 0;
}

int func_68()//Position - 0xBA43
{
    if (unk_0xE434AB6E3DE89861())
    {
        return unk_0x60E2BDB67AA16B1C();
    }
    return 0;
}

int func_69(int iParam0)//Position - 0xBA5A
{
    if (!unk_0x393E9918BC37548A())
    {
        switch (iParam0)
        {
            case joaat("component_assaultrifle_clip_03"):
            case joaat("component_carbinerifle_clip_03"):
            case joaat("component_combatpdw_clip_03"):
            case joaat("component_compactrifle_clip_03"):
            case joaat("component_heavyshotgun_clip_03"):
            case joaat("component_machinepistol_clip_03"):
            case joaat("component_smg_clip_03"):
            case joaat("component_specialcarbine_clip_03"):
                return 0;
            
            default:
        }
    }
    else if (func_70(iParam0))
    {
        return Global_40001.f_50DD;
    }
    return 1;
}

int func_70(int iParam0)//Position - 0xBABC
{
    switch (iParam0)
    {
        case -1827882671:
        case 966612367:
        case 1815270123:
        case -687617715:
        case -1179558480:
        case -631911105:
        case 1178671645:
        case 1377355801:
        case 1142457062:
        case -1214048550:
        case -648943513:
        case -974541230:
            return 1;
            break;
    }
    return 0;
}

int func_71()//Position - 0xBB1B
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    
    if (unk_0xA2BC31158C8CEFD2(Global_19, 6))
    {
        if (unk_0xA2BC31158C8CEFD2(Global_19, 2) || unk_0xA2BC31158C8CEFD2(Global_19, 4))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if (unk_0x367DA79FE620711B(joaat("sp_unlock_exclus_content"), &iVar0, -1))
    {
        if (unk_0xA2BC31158C8CEFD2(iVar0, 6))
        {
            if (unk_0xA2BC31158C8CEFD2(iVar0, 2) || unk_0xA2BC31158C8CEFD2(iVar0, 4))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    if (unk_0x835B9CD1CD07D31C(0))
    {
        if (Global_24B7B.f_3)
        {
            iVar2 = joaat("mpply_plat_up_lb_check");
            if (unk_0x367DA79FE620711B(iVar2, &iVar1, -1))
            {
                if (unk_0xA2BC31158C8CEFD2(iVar1, 8))
                {
                    return 1;
                }
            }
        }
    }
    if (unk_0xB61D5BE0528E9538())
    {
        iVar3 = unk_0xFD4B2AAE20AA1CBB(866);
        if (unk_0xA2BC31158C8CEFD2(iVar3, 2) || unk_0xA2BC31158C8CEFD2(iVar3, 4))
        {
            return 1;
        }
    }
    return 0;
}

int func_72()//Position - 0xBBEC
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    if (unk_0xA2BC31158C8CEFD2(Global_19, 5))
    {
        if (unk_0xA2BC31158C8CEFD2(Global_19, 1) || unk_0xA2BC31158C8CEFD2(Global_19, 3))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if (unk_0x367DA79FE620711B(joaat("sp_unlock_exclus_content"), &iVar0, -1))
    {
        if (unk_0xA2BC31158C8CEFD2(iVar0, 5))
        {
            if (unk_0xA2BC31158C8CEFD2(iVar0, 1) || unk_0xA2BC31158C8CEFD2(iVar0, 3))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    if (unk_0x835B9CD1CD07D31C(0))
    {
        if (Global_24B7B.f_3)
        {
            iVar2 = joaat("mpply_plat_up_lb_check");
            if (unk_0x367DA79FE620711B(iVar2, &iVar1, -1))
            {
                if (unk_0xA2BC31158C8CEFD2(iVar1, 5))
                {
                    return 1;
                }
            }
        }
    }
    if (unk_0xB61D5BE0528E9538())
    {
        iVar3 = unk_0xFD4B2AAE20AA1CBB(866);
        if (unk_0xA2BC31158C8CEFD2(iVar3, 1) || unk_0xA2BC31158C8CEFD2(iVar3, 3))
        {
            return 1;
        }
    }
    if (unk_0x543B7EB99B8B8637())
    {
        if (unk_0x6E49FBC03EADD517())
        {
            if (unk_0xDD2C93A894280013())
            {
                unk_0x367DA79FE620711B(joaat("sp_unlock_exclus_content"), &iVar4, -1);
                unk_0xA1E7A40E1F56E511(&iVar4, 1);
                unk_0xA1E7A40E1F56E511(&iVar4, 3);
                unk_0xA1E7A40E1F56E511(&iVar4, 5);
                unk_0xA1E7A40E1F56E511(&Global_19, 1);
                unk_0xA1E7A40E1F56E511(&Global_19, 3);
                unk_0xA1E7A40E1F56E511(&Global_19, 5);
                unk_0x41410A69AD49AFCD(joaat("sp_unlock_exclus_content"), iVar4, 1);
                if (unk_0xB61D5BE0528E9538())
                {
                    iVar4 = unk_0xFD4B2AAE20AA1CBB(866);
                    unk_0xA1E7A40E1F56E511(&iVar4, 1);
                    unk_0xA1E7A40E1F56E511(&iVar4, 3);
                    unk_0x553DEB79071ABB59(iVar4);
                }
                return 1;
            }
        }
    }
    return 0;
}

int func_73()//Position - 0xBD40
{
    int iVar0;
    
    if (unk_0x543B7EB99B8B8637())
    {
        if (unk_0x6E49FBC03EADD517())
        {
            if (unk_0x9A23AF8E6095D4CF())
            {
                unk_0x367DA79FE620711B(joaat("sp_unlock_exclus_content"), &iVar0, -1);
                unk_0xA1E7A40E1F56E511(&iVar0, 2);
                unk_0xA1E7A40E1F56E511(&iVar0, 4);
                unk_0xA1E7A40E1F56E511(&iVar0, 6);
                unk_0xA1E7A40E1F56E511(&Global_19, 2);
                unk_0xA1E7A40E1F56E511(&Global_19, 4);
                unk_0xA1E7A40E1F56E511(&Global_19, 6);
                unk_0x41410A69AD49AFCD(joaat("sp_unlock_exclus_content"), iVar0, 1);
                if (unk_0xB61D5BE0528E9538())
                {
                    iVar0 = unk_0xFD4B2AAE20AA1CBB(866);
                    unk_0xA1E7A40E1F56E511(&iVar0, 0);
                    unk_0x553DEB79071ABB59(iVar0);
                }
                return 1;
            }
        }
    }
    if (Global_24B7A == 2)
    {
        return 1;
    }
    else if (Global_24B7A == 3)
    {
        return 0;
    }
    if (unk_0xB61D5BE0528E9538())
    {
        if (unk_0xA2BC31158C8CEFD2(unk_0xFD4B2AAE20AA1CBB(866), 0))
        {
            return 1;
        }
    }
    return 0;
}

int func_74(int iParam0)//Position - 0xBDFB
{
    switch (iParam0)
    {
        case -1258515792:
        case 438243936:
        case -455079056:
        case 740920107:
        case -541616347:
        case 1809261196:
        case -1646538868:
        case -1290164948:
        case -964465134:
        case 1135718771:
        case 1253942266:
        case -403805974:
        case 691432737:
        case 987648331:
        case -431680535:
        case -847582310:
        case -92592218:
        case -494548326:
        case 730876697:
        case 583159708:
        case -1928503603:
        case 520557834:
            return 1;
            break;
    }
    return 0;
}

bool func_75(int iParam0, int iParam1, int iParam2)//Position - 0xBE96
{
    int iVar0;
    int iVar1;
    
    if (func_84())
    {
        return 0;
    }
    iVar0 = func_79(iParam0, iParam1, iParam2);
    iVar1 = func_77(iParam0, iParam1);
    return unk_0xA2BC31158C8CEFD2(iVar0, func_76(iVar1));
}

int func_76(int iParam0)//Position - 0xBECB
{
    return (iParam0 % 32);
}

int func_77(int iParam0, int iParam1)//Position - 0xBED8
{
    return func_78(iParam0, iParam1);
}

int func_78(int iParam0, int iParam1)//Position - 0xBEE8
{
    switch (iParam1)
    {
        case joaat("weapon_pistol"):
            switch (iParam0)
            {
                case joaat("component_pistol_clip_01"):
                    return 1;
                    break;
                
                case joaat("component_pistol_clip_02"):
                    return 2;
                    break;
                
                case joaat("component_at_pi_flsh"):
                    return 3;
                    break;
                
                case joaat("component_at_pi_supp_02"):
                    return 4;
                    break;
                
                case joaat("component_pistol_varmod_luxe"):
                    return 175;
                    break;
                
                case 1623028892:
                    return 211;
                    break;
            }
            break;
        
        case joaat("weapon_combatpistol"):
            switch (iParam0)
            {
                case joaat("component_combatpistol_clip_01"):
                    return 5;
                    break;
                
                case joaat("component_combatpistol_clip_02"):
                    return 6;
                    break;
                
                case joaat("component_at_pi_flsh"):
                    return 7;
                    break;
                
                case joaat("component_at_pi_supp"):
                    return 8;
                    break;
                
                case joaat("component_combatpistol_varmod_lowrider"):
                    return 186;
                    break;
            }
            break;
        
        case joaat("weapon_appistol"):
            switch (iParam0)
            {
                case joaat("component_appistol_clip_01"):
                    return 11;
                    break;
                
                case joaat("component_appistol_clip_02"):
                    return 12;
                    break;
                
                case joaat("component_at_pi_flsh"):
                    return 13;
                    break;
                
                case joaat("component_at_pi_supp"):
                    return 14;
                    break;
                
                case joaat("component_appistol_varmod_luxe"):
                    return 164;
                    break;
            }
            break;
        
        case joaat("weapon_microsmg"):
            switch (iParam0)
            {
                case joaat("component_microsmg_clip_01"):
                    return 15;
                    break;
                
                case joaat("component_microsmg_clip_02"):
                    return 16;
                    break;
                
                case joaat("component_at_pi_flsh"):
                    return 17;
                    break;
                
                case joaat("component_at_scope_macro"):
                    return 18;
                    break;
                
                case joaat("component_at_ar_supp_02"):
                    return 19;
                    break;
                
                case joaat("component_microsmg_varmod_luxe"):
                    return 174;
                    break;
            }
            break;
        
        case joaat("weapon_smg"):
            switch (iParam0)
            {
                case joaat("component_smg_clip_01"):
                    return 22;
                    break;
                
                case joaat("component_smg_clip_02"):
                    return 23;
                    break;
                
                case joaat("component_smg_clip_03"):
                    return 207;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 24;
                    break;
                
                case joaat("component_at_scope_macro_02"):
                    return 25;
                    break;
                
                case joaat("component_at_pi_supp"):
                    return 26;
                    break;
                
                case joaat("component_smg_varmod_luxe"):
                    return 179;
                    break;
                
                case 1623028892:
                    return 212;
                    break;
            }
            break;
        
        case joaat("weapon_assaultrifle"):
            switch (iParam0)
            {
                case joaat("component_assaultrifle_clip_01"):
                    return 27;
                    break;
                
                case joaat("component_assaultrifle_clip_02"):
                    return 28;
                    break;
                
                case joaat("component_assaultrifle_clip_03"):
                    return 201;
                    break;
                
                case joaat("component_at_ar_afgrip"):
                    return 29;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 30;
                    break;
                
                case joaat("component_at_scope_macro"):
                    return 31;
                    break;
                
                case joaat("component_at_ar_supp_02"):
                    return 32;
                    break;
                
                case joaat("component_assaultrifle_varmod_luxe"):
                    return 165;
                    break;
                
                case 1623028892:
                    return 213;
                    break;
            }
            break;
        
        case joaat("weapon_carbinerifle"):
            switch (iParam0)
            {
                case joaat("component_carbinerifle_clip_01"):
                    return 33;
                    break;
                
                case joaat("component_carbinerifle_clip_02"):
                    return 34;
                    break;
                
                case joaat("component_carbinerifle_clip_03"):
                    return 202;
                    break;
                
                case joaat("component_at_railcover_01"):
                    return 35;
                    break;
                
                case joaat("component_at_ar_afgrip"):
                    return 36;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 37;
                    break;
                
                case joaat("component_at_scope_medium"):
                    return 38;
                    break;
                
                case joaat("component_at_ar_supp"):
                    return 39;
                    break;
                
                case joaat("component_carbinerifle_varmod_luxe"):
                    return 168;
                    break;
                
                case 1623028892:
                    return 214;
                    break;
            }
            break;
        
        case joaat("weapon_advancedrifle"):
            switch (iParam0)
            {
                case joaat("component_advancedrifle_clip_01"):
                    return 44;
                    break;
                
                case joaat("component_advancedrifle_clip_02"):
                    return 45;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 47;
                    break;
                
                case joaat("component_at_scope_small"):
                    return 48;
                    break;
                
                case joaat("component_at_ar_supp"):
                    return 49;
                    break;
                
                case joaat("component_advancedrifle_varmod_luxe"):
                    return 163;
                    break;
            }
            break;
        
        case joaat("weapon_mg"):
            switch (iParam0)
            {
                case joaat("component_mg_clip_01"):
                    return 50;
                    break;
                
                case joaat("component_mg_clip_02"):
                    return 51;
                    break;
                
                case joaat("component_at_scope_small_02"):
                    return 52;
                    break;
                
                case joaat("component_mg_varmod_lowrider"):
                    return 187;
                    break;
            }
            break;
        
        case joaat("weapon_combatmg"):
            switch (iParam0)
            {
                case joaat("component_combatmg_clip_01"):
                    return 53;
                    break;
                
                case joaat("component_combatmg_clip_02"):
                    return 54;
                    break;
                
                case joaat("component_at_ar_afgrip"):
                    return 55;
                    break;
                
                case joaat("component_at_scope_medium"):
                    return 56;
                    break;
                
                case joaat("component_combatmg_varmod_lowrider"):
                    return 188;
                    break;
                
                case 1623028892:
                    return 215;
                    break;
            }
            break;
        
        case joaat("weapon_pumpshotgun"):
            switch (iParam0)
            {
                case joaat("component_at_sr_supp"):
                    return 59;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 60;
                    break;
                
                case joaat("component_pumpshotgun_varmod_lowrider"):
                    return 193;
                    break;
                
                case 1623028892:
                    return 389;
                    break;
            }
            break;
        
        case joaat("weapon_assaultshotgun"):
            switch (iParam0)
            {
                case joaat("component_assaultshotgun_clip_01"):
                    return 64;
                    break;
                
                case joaat("component_assaultshotgun_clip_02"):
                    return 65;
                    break;
                
                case joaat("component_at_ar_afgrip"):
                    return 66;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 67;
                    break;
                
                case joaat("component_at_ar_supp"):
                    return 68;
                    break;
            }
            break;
        
        case joaat("weapon_sniperrifle"):
            switch (iParam0)
            {
                case joaat("component_sniperrifle_clip_01"):
                    return 69;
                    break;
                
                case joaat("component_at_scope_large"):
                    return 70;
                    break;
                
                case joaat("component_at_scope_max"):
                    return 71;
                    break;
                
                case joaat("component_at_ar_supp_02"):
                    return 72;
                    break;
                
                case joaat("component_sniperrifle_varmod_luxe"):
                    return 180;
                    break;
            }
            break;
        
        case joaat("weapon_heavysniper"):
            switch (iParam0)
            {
                case joaat("component_heavysniper_clip_01"):
                    return 76;
                    break;
                
                case joaat("component_at_scope_max"):
                    return 77;
                    break;
                
                case joaat("component_at_scope_large"):
                    return 82;
                    break;
                
                case 1623028892:
                    return 216;
                    break;
            }
            break;
        
        case joaat("weapon_grenadelauncher"):
            switch (iParam0)
            {
                case joaat("component_at_ar_afgrip"):
                    return 78;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 79;
                    break;
                
                case joaat("component_at_scope_small"):
                    return 80;
                    break;
            }
            break;
        
        case joaat("weapon_minigun"):
            switch (iParam0)
            {
                case joaat("component_minigun_clip_01"):
                    return 81;
                    break;
            }
            break;
        
        case joaat("weapon_assaultsmg"):
            switch (iParam0)
            {
                case joaat("component_assaultsmg_clip_01"):
                    return 83;
                    break;
                
                case joaat("component_assaultsmg_clip_02"):
                    return 84;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 85;
                    break;
                
                case joaat("component_at_scope_macro"):
                    return 86;
                    break;
                
                case joaat("component_at_ar_supp_02"):
                    return 87;
                    break;
                
                case joaat("component_assaultsmg_varmod_lowrider"):
                    return 189;
                    break;
            }
            break;
        
        case joaat("weapon_bullpupshotgun"):
            switch (iParam0)
            {
                case joaat("component_at_ar_afgrip"):
                    return 88;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 89;
                    break;
                
                case joaat("component_at_ar_supp_02"):
                    return 90;
                    break;
            }
            break;
        
        case joaat("weapon_pistol50"):
            switch (iParam0)
            {
                case joaat("component_pistol50_clip_01"):
                    return 91;
                    break;
                
                case joaat("component_pistol50_clip_02"):
                    return 92;
                    break;
                
                case joaat("component_at_pi_flsh"):
                    return 93;
                    break;
                
                case joaat("component_at_ar_supp_02"):
                    return 94;
                    break;
                
                case joaat("component_pistol50_varmod_luxe"):
                    return 176;
                    break;
            }
            break;
        
        case 392730790:
            switch (iParam0)
            {
                case 195735895:
                    return 95;
                    break;
                
                case joaat("component_at_scope_large"):
                    return 96;
                    break;
                
                case joaat("component_at_scope_max"):
                    return 97;
                    break;
                
                case joaat("component_at_ar_supp"):
                    return 98;
                    break;
            }
            break;
        
        case -947031628:
            switch (iParam0)
            {
                case 1525977990:
                    return 99;
                    break;
                
                case 1824470811:
                    return 100;
                    break;
                
                case joaat("component_at_ar_afgrip"):
                    return 101;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 102;
                    break;
                
                case joaat("component_at_scope_medium"):
                    return 103;
                    break;
                
                case joaat("component_at_ar_supp"):
                    return 104;
                    break;
            }
            break;
        
        case -572349828:
            switch (iParam0)
            {
                case -890514874:
                    return 105;
                    break;
                
                case -507117574:
                    return 106;
                    break;
                
                case joaat("component_at_ar_afgrip"):
                    return 107;
                    break;
                
                case joaat("component_at_scope_medium"):
                    return 108;
                    break;
            }
            break;
        
        case -1887867191:
            switch (iParam0)
            {
                case -124428919:
                    return 109;
                    break;
                
                case 1048471894:
                    return 110;
                    break;
            }
            break;
        
        case joaat("weapon_specialcarbine"):
            switch (iParam0)
            {
                case joaat("component_specialcarbine_clip_01"):
                    return 111;
                    break;
                
                case joaat("component_specialcarbine_clip_02"):
                    return 112;
                    break;
                
                case joaat("component_specialcarbine_clip_03"):
                    return 208;
                    break;
                
                case joaat("component_at_ar_afgrip"):
                    return 113;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 114;
                    break;
                
                case joaat("component_at_scope_medium"):
                    return 115;
                    break;
                
                case joaat("component_at_ar_supp_02"):
                    return 116;
                    break;
                
                case joaat("component_specialcarbine_varmod_lowrider"):
                    return 190;
                    break;
                
                case 1623028892:
                    return 390;
                    break;
            }
            break;
        
        case joaat("weapon_snspistol"):
            switch (iParam0)
            {
                case joaat("component_snspistol_clip_01"):
                    return 117;
                    break;
                
                case joaat("component_snspistol_clip_02"):
                    return 118;
                    break;
                
                case joaat("component_at_pi_flsh"):
                    return 119;
                    break;
                
                case joaat("component_at_pi_supp"):
                    return 120;
                    break;
                
                case joaat("component_snspistol_varmod_lowrider"):
                    return 191;
                    break;
                
                case 1623028892:
                    return 391;
                    break;
            }
            break;
        
        case joaat("weapon_heavypistol"):
            switch (iParam0)
            {
                case joaat("component_heavypistol_clip_01"):
                    return 121;
                    break;
                
                case joaat("component_heavypistol_clip_02"):
                    return 122;
                    break;
                
                case joaat("component_at_pi_flsh"):
                    return 123;
                    break;
                
                case joaat("component_at_pi_supp"):
                    return 124;
                    break;
                
                case joaat("component_heavypistol_varmod_luxe"):
                    return 171;
                    break;
            }
            break;
        
        case joaat("weapon_bullpuprifle"):
            switch (iParam0)
            {
                case joaat("component_bullpuprifle_clip_01"):
                    return 131;
                    break;
                
                case joaat("component_bullpuprifle_clip_02"):
                    return 132;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 127;
                    break;
                
                case joaat("component_at_ar_supp"):
                    return 128;
                    break;
                
                case joaat("component_at_scope_small"):
                    return 129;
                    break;
                
                case joaat("component_at_ar_afgrip"):
                    return 130;
                    break;
                
                case joaat("component_bullpuprifle_varmod_low"):
                    return 192;
                    break;
                
                case 1623028892:
                    return 394;
                    break;
            }
            break;
        
        case joaat("weapon_gusenberg"):
            switch (iParam0)
            {
                case joaat("component_gusenberg_clip_01"):
                    return 125;
                    break;
                
                case joaat("component_gusenberg_clip_02"):
                    return 126;
                    break;
            }
            break;
        
        case joaat("weapon_vintagepistol"):
            switch (iParam0)
            {
                case joaat("component_vintagepistol_clip_01"):
                    return 133;
                    break;
                
                case joaat("component_vintagepistol_clip_02"):
                    return 134;
                    break;
                
                case joaat("component_at_pi_supp"):
                    return 136;
                    break;
            }
            break;
        
        case joaat("weapon_heavyshotgun"):
            switch (iParam0)
            {
                case joaat("component_heavyshotgun_clip_01"):
                    return 137;
                    break;
                
                case joaat("component_heavyshotgun_clip_02"):
                    return 140;
                    break;
                
                case joaat("component_heavyshotgun_clip_03"):
                    return 205;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 145;
                    break;
                
                case joaat("component_at_ar_supp_02"):
                    return 146;
                    break;
                
                case joaat("component_at_ar_afgrip"):
                    return 147;
                    break;
            }
            break;
        
        case joaat("weapon_marksmanrifle"):
            switch (iParam0)
            {
                case joaat("component_marksmanrifle_clip_01"):
                    return 138;
                    break;
                
                case joaat("component_marksmanrifle_clip_02"):
                    return 139;
                    break;
                
                case joaat("component_at_scope_large_fixed_zoom"):
                    return 141;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 142;
                    break;
                
                case joaat("component_at_ar_supp"):
                    return 143;
                    break;
                
                case joaat("component_at_ar_afgrip"):
                    return 144;
                    break;
                
                case joaat("component_marksmanrifle_varmod_luxe"):
                    return 172;
                    break;
                
                case 1623028892:
                    return 392;
                    break;
            }
            break;
        
        case joaat("weapon_combatpdw"):
            switch (iParam0)
            {
                case joaat("component_combatpdw_clip_01"):
                    return 149;
                    break;
                
                case joaat("component_combatpdw_clip_02"):
                    return 150;
                    break;
                
                case joaat("component_combatpdw_clip_03"):
                    return 203;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 151;
                    break;
                
                case joaat("component_at_scope_small"):
                    return 152;
                    break;
                
                case joaat("component_at_ar_afgrip"):
                    return 153;
                    break;
            }
            break;
        
        case joaat("weapon_sawnoffshotgun"):
            switch (iParam0)
            {
                case joaat("component_sawnoffshotgun_varmod_luxe"):
                    return 178;
                    break;
            }
            break;
        
        case joaat("weapon_marksmanpistol"):
            switch (iParam0)
            {
                case joaat("component_marksmanpistol_clip_01"):
                    return 148;
                    break;
            }
            break;
        
        case joaat("weapon_knuckle"):
            switch (iParam0)
            {
                case joaat("component_knuckle_varmod_pimp"):
                    return 154;
                    break;
                
                case joaat("component_knuckle_varmod_ballas"):
                    return 155;
                    break;
                
                case joaat("component_knuckle_varmod_dollar"):
                    return 156;
                    break;
                
                case joaat("component_knuckle_varmod_diamond"):
                    return 157;
                    break;
                
                case joaat("component_knuckle_varmod_hate"):
                    return 158;
                    break;
                
                case joaat("component_knuckle_varmod_love"):
                    return 159;
                    break;
                
                case joaat("component_knuckle_varmod_player"):
                    return 160;
                    break;
                
                case joaat("component_knuckle_varmod_king"):
                    return 161;
                    break;
                
                case joaat("component_knuckle_varmod_vagos"):
                    return 162;
                    break;
            }
            break;
        
        case joaat("weapon_machinepistol"):
            switch (iParam0)
            {
                case joaat("component_machinepistol_clip_01"):
                    return 184;
                    break;
                
                case joaat("component_machinepistol_clip_02"):
                    return 185;
                    break;
                
                case joaat("component_machinepistol_clip_03"):
                    return 206;
                    break;
                
                case joaat("component_at_pi_supp"):
                    return 183;
                    break;
            }
            break;
        
        case joaat("weapon_switchblade"):
            switch (iParam0)
            {
                case joaat("component_switchblade_varmod_var1"):
                    return 194;
                    break;
                
                case joaat("component_switchblade_varmod_var2"):
                    return 195;
                    break;
            }
            break;
        
        case joaat("weapon_revolver"):
            switch (iParam0)
            {
                case joaat("component_revolver_clip_01"):
                    return 196;
                    break;
                
                case joaat("component_revolver_varmod_boss"):
                    return 197;
                    break;
                
                case joaat("component_revolver_varmod_goon"):
                    return 198;
                    break;
                
                case 1623028892:
                    return 393;
                    break;
            }
            break;
        
        case joaat("weapon_compactrifle"):
            switch (iParam0)
            {
                case joaat("component_compactrifle_clip_01"):
                    return 199;
                    break;
                
                case joaat("component_compactrifle_clip_02"):
                    return 200;
                    break;
                
                case joaat("component_compactrifle_clip_03"):
                    return 204;
                    break;
            }
            break;
        
        case -1121678507:
            switch (iParam0)
            {
                case -2067221805:
                    return 209;
                    break;
                
                case -1820405577:
                    return 210;
                    break;
            }
            break;
        
        case -1075685676:
            switch (iParam0)
            {
                case -1795936926:
                    return 217;
                    break;
                
                case 1591132456:
                    return 218;
                    break;
                
                case 1329061674:
                    return 219;
                    break;
                
                case -2046910199:
                    return 220;
                    break;
                
                case 733837882:
                    return 221;
                    break;
                
                case 634039983:
                    return 222;
                    break;
                
                case 1140676955:
                    return 223;
                    break;
                
                case -1898661008:
                    return 224;
                    break;
                
                case joaat("component_at_pi_supp_02"):
                    return 225;
                    break;
                
                case 568543123:
                    return 226;
                    break;
                
                case 1550611612:
                    return 367;
                    break;
                
                case 368550800:
                    return 368;
                    break;
                
                case -1769069349:
                    return 369;
                    break;
                
                case 24902297:
                    return 370;
                    break;
                
                case -228041614:
                    return 371;
                    break;
                
                case -584961562:
                    return 372;
                    break;
                
                case -1153175946:
                    return 373;
                    break;
                
                case 1301287696:
                    return 374;
                    break;
                
                case 1597093459:
                    return 375;
                    break;
                
                case 1769871776:
                    return 376;
                    break;
                
                case -1827882671:
                    return 377;
                    break;
            }
            break;
        
        case 2024373456:
            switch (iParam0)
            {
                case 1277460590:
                    return 227;
                    break;
                
                case -1182573778:
                    return 228;
                    break;
                
                case 190476639:
                    return 229;
                    break;
                
                case 974903034:
                    return 230;
                    break;
                
                case -644734235:
                    return 231;
                    break;
                
                case 2146055916:
                    return 232;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 233;
                    break;
                
                case -1613015470:
                    return 234;
                    break;
                
                case -452809877:
                    return 235;
                    break;
                
                case 1038927834:
                    return 236;
                    break;
                
                case joaat("component_at_pi_supp"):
                    return 237;
                    break;
                
                case -1181482284:
                    return 238;
                    break;
                
                case -932732805:
                    return 239;
                    break;
                
                case -569259057:
                    return 240;
                    break;
                
                case -326080308:
                    return 241;
                    break;
                
                case 48731514:
                    return 242;
                    break;
                
                case 880736428:
                    return 243;
                    break;
                
                case 1303784126:
                    return 244;
                    break;
                
                case -653246751:
                    return 245;
                    break;
                
                case -1520117877:
                    return 246;
                    break;
                
                case -996700057:
                    return 378;
                    break;
                
                case 940943685:
                    return 379;
                    break;
                
                case 1263226800:
                    return 380;
                    break;
                
                case -328035840:
                    return 381;
                    break;
                
                case 1224100642:
                    return 382;
                    break;
                
                case 899228776:
                    return 383;
                    break;
                
                case 616006309:
                    return 384;
                    break;
                
                case -1561952511:
                    return 385;
                    break;
                
                case 572063080:
                    return 386;
                    break;
                
                case 1170588613:
                    return 387;
                    break;
                
                case 966612367:
                    return 388;
                    break;
            }
            break;
        
        case 177293209:
            switch (iParam0)
            {
                case -98690520:
                    return 247;
                    break;
                
                case 752418717:
                    return 248;
                    break;
                
                case -130689324:
                    return 249;
                    break;
                
                case -1981031769:
                    return 250;
                    break;
                
                case 1005144310:
                    return 251;
                    break;
                
                case 247526935:
                    return 252;
                    break;
                
                case -2101279869:
                    return 253;
                    break;
                
                case joaat("component_at_scope_max"):
                    return 254;
                    break;
                
                case -1233121104:
                    return 255;
                    break;
                
                case 776198721:
                    return 256;
                    break;
                
                case -1404903567:
                    return 257;
                    break;
                
                case 1602080333:
                    return 258;
                    break;
                
                case 1764221345:
                    return 259;
                    break;
                
                case -1869205321:
                    return 260;
                    break;
                
                case 277524638:
                    return 261;
                    break;
                
                case -130843390:
                    return 356;
                    break;
                
                case -977347227:
                    return 357;
                    break;
                
                case -378461067:
                    return 358;
                    break;
                
                case 329939175:
                    return 359;
                    break;
                
                case 643374672:
                    return 360;
                    break;
                
                case 807875052:
                    return 361;
                    break;
                
                case -1401804168:
                    return 362;
                    break;
                
                case -1096495395:
                    return 363;
                    break;
                
                case -847811454:
                    return 364;
                    break;
                
                case -1413108537:
                    return 365;
                    break;
                
                case 1815270123:
                    return 366;
                    break;
            }
            break;
        
        case -608341376:
            switch (iParam0)
            {
                case 1227564412:
                    return 262;
                    break;
                
                case 400507625:
                    return 263;
                    break;
                
                case 696788003:
                    return 264;
                    break;
                
                case 1475288264:
                    return 265;
                    break;
                
                case -1020871238:
                    return 266;
                    break;
                
                case -161179835:
                    return 267;
                    break;
                
                case -1654288262:
                    return 268;
                    break;
                
                case 1108334355:
                    return 269;
                    break;
                
                case 1060929921:
                    return 270;
                    break;
                
                case -966040254:
                    return 271;
                    break;
                
                case -1181482284:
                    return 272;
                    break;
                
                case -932732805:
                    return 273;
                    break;
                
                case -569259057:
                    return 274;
                    break;
                
                case -326080308:
                    return 275;
                    break;
                
                case 48731514:
                    return 276;
                    break;
                
                case 880736428:
                    return 277;
                    break;
                
                case 1303784126:
                    return 278;
                    break;
                
                case -1018236364:
                    return 279;
                    break;
                
                case -1243457701:
                    return 280;
                    break;
                
                case 1249283253:
                    return 345;
                    break;
                
                case -857707587:
                    return 346;
                    break;
                
                case -1097543898:
                    return 347;
                    break;
                
                case 1980349969:
                    return 348;
                    break;
                
                case 1219453777:
                    return 349;
                    break;
                
                case -1853459190:
                    return 350;
                    break;
                
                case -2074781016:
                    return 351;
                    break;
                
                case 457967755:
                    return 352;
                    break;
                
                case 235171324:
                    return 353;
                    break;
                
                case 42685294:
                    return 354;
                    break;
                
                case -687617715:
                    return 355;
                    break;
            }
            break;
        
        case 961495388:
            switch (iParam0)
            {
                case -2045758401:
                    return 281;
                    break;
                
                case -785724817:
                    return 282;
                    break;
                
                case -1478681000:
                    return 283;
                    break;
                
                case 1675665560:
                    return 284;
                    break;
                
                case -76490669:
                    return 285;
                    break;
                
                case -282298175:
                    return 286;
                    break;
                
                case -1654288262:
                    return 287;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 288;
                    break;
                
                case 1108334355:
                    return 289;
                    break;
                
                case 77277509:
                    return 290;
                    break;
                
                case -966040254:
                    return 291;
                    break;
                
                case joaat("component_at_ar_supp_02"):
                    return 292;
                    break;
                
                case -1181482284:
                    return 293;
                    break;
                
                case -932732805:
                    return 294;
                    break;
                
                case -569259057:
                    return 295;
                    break;
                
                case -326080308:
                    return 296;
                    break;
                
                case 48731514:
                    return 297;
                    break;
                
                case 880736428:
                    return 298;
                    break;
                
                case 1303784126:
                    return 299;
                    break;
                
                case 1134861606:
                    return 300;
                    break;
                
                case 1447477866:
                    return 301;
                    break;
                
                case -1860492113:
                    return 323;
                    break;
                
                case 937772107:
                    return 324;
                    break;
                
                case 1401650071:
                    return 325;
                    break;
                
                case 628662130:
                    return 326;
                    break;
                
                case -985047251:
                    return 327;
                    break;
                
                case -812944463:
                    return 328;
                    break;
                
                case -1447352303:
                    return 329;
                    break;
                
                case -60338860:
                    return 330;
                    break;
                
                case 2088750491:
                    return 331;
                    break;
                
                case -1513913454:
                    return 332;
                    break;
                
                case -1179558480:
                    return 333;
                    break;
            }
            break;
        
        case -86904375:
            switch (iParam0)
            {
                case 1283078430:
                    return 302;
                    break;
                
                case 1574296533:
                    return 303;
                    break;
                
                case 626875735:
                    return 304;
                    break;
                
                case 1141059345:
                    return 305;
                    break;
                
                case 1025884839:
                    return 306;
                    break;
                
                case 391640422:
                    return 307;
                    break;
                
                case -1654288262:
                    return 308;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 309;
                    break;
                
                case 1108334355:
                    return 310;
                    break;
                
                case 77277509:
                    return 311;
                    break;
                
                case -966040254:
                    return 312;
                    break;
                
                case joaat("component_at_ar_supp"):
                    return 313;
                    break;
                
                case -1181482284:
                    return 314;
                    break;
                
                case -932732805:
                    return 315;
                    break;
                
                case -569259057:
                    return 316;
                    break;
                
                case -326080308:
                    return 317;
                    break;
                
                case 48731514:
                    return 318;
                    break;
                
                case 880736428:
                    return 319;
                    break;
                
                case 1303784126:
                    return 320;
                    break;
                
                case -2093598721:
                    return 321;
                    break;
                
                case -1958983669:
                    return 322;
                    break;
                
                case 1272803094:
                    return 334;
                    break;
                
                case 1080719624:
                    return 335;
                    break;
                
                case 792221348:
                    return 336;
                    break;
                
                case -452181427:
                    return 337;
                    break;
                
                case -746774737:
                    return 338;
                    break;
                
                case -2044296061:
                    return 339;
                    break;
                
                case -199171978:
                    return 340;
                    break;
                
                case -1428075016:
                    return 341;
                    break;
                
                case -1735153315:
                    return 342;
                    break;
                
                case 1796459838:
                    return 343;
                    break;
                
                case -631911105:
                    return 344;
                    break;
            }
            break;
        
        case 1432025498:
            switch (iParam0)
            {
                case -845938367:
                    return 395;
                    break;
                
                case 1315288101:
                    return 396;
                    break;
                
                case 1004815965:
                    return 397;
                    break;
                
                case -380098265:
                    return 398;
                    break;
                
                case -1618338827:
                    return 399;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 400;
                    break;
                
                case 1108334355:
                    return 401;
                    break;
                
                case 77277509:
                    return 402;
                    break;
                
                case 1060929921:
                    return 403;
                    break;
                
                case -1404903567:
                    return 404;
                    break;
                
                case 1602080333:
                    return 405;
                    break;
                
                case -474112444:
                    return 488;
                    break;
                
                case 387223451:
                    return 489;
                    break;
                
                case 617753366:
                    return 490;
                    break;
                
                case -222378256:
                    return 491;
                    break;
                
                case 8741501:
                    return 492;
                    break;
                
                case -601286203:
                    return 493;
                    break;
                
                case -511433605:
                    return 494;
                    break;
                
                case -655387818:
                    return 495;
                    break;
                
                case -282476598:
                    return 496;
                    break;
                
                case 1739501925:
                    return 497;
                    break;
                
                case 1178671645:
                    return 498;
                    break;
            }
            break;
        
        case -1768145561:
            switch (iParam0)
            {
                case 382112385:
                    return 406;
                    break;
                
                case -568352468:
                    return 407;
                    break;
                
                case 1362433589:
                    return 408;
                    break;
                
                case 1346235024:
                    return 409;
                    break;
                
                case -570355066:
                    return 410;
                    break;
                
                case -2023373174:
                    return 411;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 412;
                    break;
                
                case 1108334355:
                    return 413;
                    break;
                
                case 77277509:
                    return 414;
                    break;
                
                case -966040254:
                    return 415;
                    break;
                
                case joaat("component_at_ar_supp_02"):
                    return 416;
                    break;
                
                case -1181482284:
                    return 417;
                    break;
                
                case -932732805:
                    return 418;
                    break;
                
                case -569259057:
                    return 419;
                    break;
                
                case -326080308:
                    return 420;
                    break;
                
                case 48731514:
                    return 421;
                    break;
                
                case 880736428:
                    return 422;
                    break;
                
                case 1303784126:
                    return 423;
                    break;
                
                case -1654288262:
                    return 424;
                    break;
                
                case -415870039:
                    return 425;
                    break;
                
                case -109086661:
                    return 426;
                    break;
                
                case -737430213:
                    return 532;
                    break;
                
                case 1125852043:
                    return 533;
                    break;
                
                case 886015732:
                    return 534;
                    break;
                
                case -1262287139:
                    return 535;
                    break;
                
                case -295208411:
                    return 536;
                    break;
                
                case -544154504:
                    return 537;
                    break;
                
                case 172765678:
                    return 538;
                    break;
                
                case -1982877449:
                    return 539;
                    break;
                
                case 2072122460:
                    return 540;
                    break;
                
                case -1986220171:
                    return 541;
                    break;
                
                case 1377355801:
                    return 542;
                    break;
            }
            break;
        
        case -2009644972:
            switch (iParam0)
            {
                case 21392614:
                    return 427;
                    break;
                
                case -829683854:
                    return 428;
                    break;
                
                case -1055790298:
                    return 429;
                    break;
                
                case -1928301566:
                    return 430;
                    break;
                
                case -424845447:
                    return 431;
                    break;
                
                case -1876057490:
                    return 432;
                    break;
                
                case 1246324211:
                    return 433;
                    break;
                
                case 1205768792:
                    return 434;
                    break;
                
                case joaat("component_at_pi_supp_02"):
                    return 435;
                    break;
                
                case -1434287169:
                    return 436;
                    break;
                
                case 259780317:
                    return 510;
                    break;
                
                case -1973342474:
                    return 511;
                    break;
                
                case 1996130345:
                    return 512;
                    break;
                
                case -1455657812:
                    return 513;
                    break;
                
                case -1668263084:
                    return 514;
                    break;
                
                case 1308243489:
                    return 515;
                    break;
                
                case 1122574335:
                    return 516;
                    break;
                
                case 1420313469:
                    return 517;
                    break;
                
                case 109848390:
                    return 518;
                    break;
                
                case 593945703:
                    return 519;
                    break;
                
                case 1142457062:
                    return 520;
                    break;
            }
            break;
        
        case 1785463520:
            switch (iParam0)
            {
                case -1797182002:
                    return 437;
                    break;
                
                case -422587990:
                    return 438;
                    break;
                
                case -193998727:
                    return 439;
                    break;
                
                case -515203373:
                    return 440;
                    break;
                
                case 1842849902:
                    return 441;
                    break;
                
                case -679861550:
                    return 442;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 443;
                    break;
                
                case 1108334355:
                    return 444;
                    break;
                
                case -966040254:
                    return 445;
                    break;
                
                case 1528590652:
                    return 446;
                    break;
                
                case joaat("component_at_ar_supp"):
                    return 447;
                    break;
                
                case -1181482284:
                    return 448;
                    break;
                
                case -932732805:
                    return 449;
                    break;
                
                case -569259057:
                    return 450;
                    break;
                
                case -326080308:
                    return 451;
                    break;
                
                case 48731514:
                    return 452;
                    break;
                
                case 880736428:
                    return 453;
                    break;
                
                case 1303784126:
                    return 454;
                    break;
                
                case -1654288262:
                    return 455;
                    break;
                
                case 941317513:
                    return 456;
                    break;
                
                case 1748450780:
                    return 457;
                    break;
                
                case -1869284448:
                    return 521;
                    break;
                
                case 1931539634:
                    return 522;
                    break;
                
                case 1624199183:
                    return 523;
                    break;
                
                case -26834113:
                    return 524;
                    break;
                
                case -210406055:
                    return 525;
                    break;
                
                case 423313640:
                    return 526;
                    break;
                
                case 276639596:
                    return 527;
                    break;
                
                case -991356863:
                    return 528;
                    break;
                
                case -1682848301:
                    return 529;
                    break;
                
                case 996213771:
                    return 530;
                    break;
                
                case -1214048550:
                    return 531;
                    break;
            }
            break;
        
        case -879347409:
            switch (iParam0)
            {
                case -1172055874:
                    return 458;
                    break;
                
                case 231258687:
                    return 459;
                    break;
                
                case 284438159:
                    return 460;
                    break;
                
                case 15712037:
                    return 461;
                    break;
                
                case -958864266:
                    return 462;
                    break;
                
                case 1108334355:
                    return 463;
                    break;
                
                case 77277509:
                    return 464;
                    break;
                
                case joaat("component_at_pi_flsh"):
                    return 465;
                    break;
                
                case 654802123:
                    return 466;
                    break;
                
                case -1069552225:
                    return 499;
                    break;
                
                case 11918884:
                    return 500;
                    break;
                
                case 176157112:
                    return 501;
                    break;
                
                case -220052855:
                    return 502;
                    break;
                
                case 288456487:
                    return 503;
                    break;
                
                case 398658626:
                    return 504;
                    break;
                
                case 628697006:
                    return 505;
                    break;
                
                case 925911836:
                    return 506;
                    break;
                
                case 1222307441:
                    return 507;
                    break;
                
                case 552442715:
                    return 508;
                    break;
                
                case -648943513:
                    return 509;
                    break;
            }
            break;
        
        case -2066285827:
            switch (iParam0)
            {
                case 25766362:
                    return 467;
                    break;
                
                case -273676760:
                    return 468;
                    break;
                
                case -89655827:
                    return 469;
                    break;
                
                case 1130501904:
                    return 470;
                    break;
                
                case -1449330342:
                    return 471;
                    break;
                
                case -2111807319:
                    return 472;
                    break;
                
                case joaat("component_at_ar_flsh"):
                    return 473;
                    break;
                
                case 1108334355:
                    return 474;
                    break;
                
                case -944910075:
                    return 475;
                    break;
                
                case 1060929921:
                    return 476;
                    break;
                
                case 1704640795:
                    return 477;
                    break;
                
                case 1005743559:
                    return 478;
                    break;
                
                case joaat("component_at_ar_supp"):
                    return 479;
                    break;
                
                case -1181482284:
                    return 480;
                    break;
                
                case -932732805:
                    return 481;
                    break;
                
                case -569259057:
                    return 482;
                    break;
                
                case -326080308:
                    return 483;
                    break;
                
                case 48731514:
                    return 484;
                    break;
                
                case 880736428:
                    return 485;
                    break;
                
                case 1303784126:
                    return 486;
                    break;
                
                case -1654288262:
                    return 487;
                    break;
                
                case -1371515465:
                    return 543;
                    break;
                
                case -1190793877:
                    return 544;
                    break;
                
                case -1497085720:
                    return 545;
                    break;
                
                case -1803148180:
                    return 546;
                    break;
                
                case -1975971886:
                    return 547;
                    break;
                
                case 36929477:
                    return 548;
                    break;
                
                case -268444834:
                    return 549;
                    break;
                
                case -574769446:
                    return 550;
                    break;
                
                case -882699739:
                    return 551;
                    break;
                
                case -1468181474:
                    return 552;
                    break;
                
                case -974541230:
                    return 553;
                    break;
            }
            break;
        
        case -1355376991:
            switch (iParam0)
            {
                case -673450233:
                    return 554;
                    break;
            }
            break;
        
        case 727643628:
            switch (iParam0)
            {
                case 1423184737:
                    return 555;
                    break;
                
                case -2122814295:
                    return 556;
                    break;
                
                case -1828202758:
                    return 557;
                    break;
            }
            break;
    }
    return 0;
}

var func_79(int iParam0, int iParam1, int iParam2)//Position - 0xE19A
{
    var uVar0;
    
    uVar0 = func_12(func_80(iParam0, iParam1), iParam2, 0);
    return uVar0;
}

int func_80(int iParam0, int iParam1)//Position - 0xE1B5
{
    int iVar0;
    int iVar1;
    
    iVar0 = func_77(iParam0, iParam1);
    iVar1 = func_83(iVar0);
    if ((func_82() == 0 || func_81() == 0) || (func_82() == 999 && func_81() == 999))
    {
        switch (iVar1)
        {
            case 0:
                return 687;
                break;
            
            case 1:
                return 688;
                break;
            
            case 2:
                return 689;
                break;
            
            case 3:
                return 690;
                break;
            
            case 4:
                return 1753;
                break;
            
            case 5:
                return 2435;
                break;
            
            case 6:
                return 2827;
                break;
            
            case 7:
                return 5501;
                break;
            
            case 8:
                return 5505;
                break;
            
            case 9:
                return 5509;
                break;
            
            case 10:
                return 5622;
                break;
            
            case 11:
                return 5626;
                break;
            
            case 12:
                return 5630;
                break;
            
            case 13:
                return 5634;
                break;
            
            case 14:
                return 6373;
                break;
            
            case 15:
                return 6496;
                break;
            
            case 16:
                return 6516;
                break;
            
            case 17:
                return 6522;
                break;
            }
    }
    return 1753;
}

int func_81()//Position - 0xE317
{
    return Global_7811;
}

int func_82()//Position - 0xE322
{
    return Global_7810;
}

int func_83(int iParam0)//Position - 0xE32D
{
    return (iParam0 / 32);
}

bool func_84()//Position - 0xE33A
{
    return Global_140854;
}

int func_85(int iParam0)//Position - 0xE346
{
    if (iParam0 != -1)
    {
        if ((((iParam0 == 46 || iParam0 == 47) || iParam0 == 48) || iParam0 == 49) || iParam0 == 52)
        {
            return 1;
        }
    }
    return 0;
}

void func_86(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xE38D
{
    *uParam0 = iParam1;
    uParam0->f_4 = iParam2;
    uParam0->f_6 = iParam3;
    uParam0->f_1 = iParam4;
}

int func_87(int iParam0, var uParam1)//Position - 0xE3AC
{
    int iVar0;
    int iVar1;
    
    iVar1 = unk_0xC71F7DF3A350F7BC();
    iVar0 = 0;
    while (iVar0 < iVar1)
    {
        if (unk_0xF361E8FFC872484A(iVar0, uParam1))
        {
            if (uParam1->f_1 == iParam0)
            {
                return iVar0;
            }
        }
        iVar0++;
    }
    return -1;
}

void func_88(int iParam0, var uParam1)//Position - 0xE3E7
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    struct<5> Var4;
    int iVar5;
    int iVar6;
    struct<2> Var7;
    struct<4> Var8;
    int iVar9;
    int iVar10;
    
    if (!unk_0x2BF5E63466422C38(iParam0))
    {
        iVar0 = 0;
        while (iVar0 <= (44 - 1))
        {
            (uParam1[iVar0 /*5*/])->f_1 = 0;
            iVar0++;
        }
        iVar0 = 0;
        while (iVar0 <= (44 - 1))
        {
            iVar3 = func_91(iVar0);
            if (iVar3 != 0)
            {
                Var4 = unk_0x8DF76C2DDD0C74F6(iParam0, func_91(iVar0));
                Var4.f_1 = 0;
                Var4.f_2 = 0;
                Var4.f_3 = 0;
                Var4.f_4 = 0;
                if (Var4 != 0 && Var4 != joaat("weapon_unarmed"))
                {
                    Var4.f_1 = unk_0x65BD637EA0479590(iParam0, Var4);
                    if (Var4 == joaat("gadget_parachute"))
                    {
                        Var4.f_1 = 1;
                    }
                    Var4.f_3 = unk_0x5AFECC8B67A4CAE5(iParam0, Var4);
                    Var4.f_4 = unk_0xC844B452D019B380(iParam0, Var4);
                    if (Var4.f_1 == -1)
                    {
                        if (!unk_0x381EB99C42833B26(iParam0, Var4, &(Var4.f_1)))
                        {
                            Var4.f_1 = 0;
                        }
                    }
                    (uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
                    iVar1 = 0;
                    iVar2 = func_90(Var4, iVar1);
                    while (iVar2 != 0)
                    {
                        if (unk_0xF484FDC5C64733BF(iParam0, Var4, iVar2))
                        {
                            unk_0xA1E7A40E1F56E511(&(Var4.f_2), iVar1);
                        }
                        iVar1++;
                        iVar2 = func_90(Var4, iVar1);
                    }
                }
                *(uParam1[iVar0 /*5*/]) = { Var4 };
            }
            iVar0++;
        }
        iVar0 = 0;
        while (iVar0 <= 50)
        {
            uParam1->f_DD[iVar0 /*5*/].f_1 = 0;
            iVar0++;
        }
        iVar6 = unk_0xC71F7DF3A350F7BC();
        iVar5 = 0;
        while (iVar5 < iVar6)
        {
            if ((unk_0xF361E8FFC872484A(iVar5, &Var7) && !func_89(Var7.f_1)) && iVar9 < 51)
            {
                if (!unk_0xC095980A527DC92E(Var7))
                {
                    Var4 = Var7.f_1;
                    Var4.f_1 = 0;
                    Var4.f_2 = 0;
                    Var4.f_3 = 0;
                    Var4.f_4 = 0;
                    Var4.f_1 = unk_0x65BD637EA0479590(iParam0, Var4);
                    if (unk_0x980642D66B4A4C61(iParam0, Var4, 0))
                    {
                        Var4.f_3 = unk_0x5AFECC8B67A4CAE5(iParam0, Var4);
                        Var4.f_4 = unk_0xC844B452D019B380(iParam0, Var4);
                    }
                    if (Var4.f_1 == -1)
                    {
                        if (!unk_0x381EB99C42833B26(iParam0, Var4, &(Var4.f_1)))
                        {
                            Var4.f_1 = 0;
                        }
                    }
                    uParam1->f_DD[iVar9 /*5*/].f_1 = Var4.f_1;
                    iVar10 = 0;
                    iVar1 = 0;
                    while (iVar1 < unk_0x6E2A2D341D785598(iVar5))
                    {
                        if (unk_0x0575653A26C467A1(iVar5, iVar1, &Var8))
                        {
                            if (!func_74(Var8.f_3))
                            {
                                if (unk_0xF484FDC5C64733BF(iParam0, Var4, Var8.f_3))
                                {
                                    unk_0xA1E7A40E1F56E511(&(Var4.f_2), iVar10);
                                }
                                iVar10++;
                            }
                        }
                        iVar1++;
                    }
                }
                if (Var4 != 0)
                {
                    if (!unk_0x980642D66B4A4C61(iParam0, Var4, 0))
                    {
                        Var4 = 0;
                        Var4.f_1 = 0;
                    }
                }
                uParam1->f_DD[iVar9 /*5*/] = { Var4 };
                iVar9++;
            }
            iVar5++;
        }
    }
}

int func_89(int iParam0)//Position - 0xE66F
{
    if (unk_0x393E9918BC37548A())
    {
    }
    else
    {
        switch (iParam0)
        {
            case joaat("weapon_pistol50"):
            case joaat("weapon_bullpupshotgun"):
            case joaat("weapon_assaultsmg"):
                return 0;
                break;
            
            case joaat("weapon_bottle"):
            case joaat("weapon_snspistol"):
            case joaat("weapon_gusenberg"):
                return 0;
                break;
            
            case joaat("weapon_heavypistol"):
            case joaat("weapon_specialcarbine"):
                return 0;
                break;
            
            case joaat("weapon_bullpuprifle"):
                return 0;
                break;
            
            case joaat("weapon_dagger"):
            case joaat("weapon_vintagepistol"):
                return 0;
                break;
            
            case joaat("weapon_firework"):
            case joaat("weapon_musket"):
                return 0;
                break;
            
            case joaat("weapon_heavyshotgun"):
            case joaat("weapon_marksmanrifle"):
                return 0;
                break;
            
            case joaat("weapon_hominglauncher"):
            case joaat("weapon_proxmine"):
                return 0;
                break;
            
            case joaat("weapon_combatpdw"):
            case joaat("weapon_knuckle"):
            case joaat("weapon_marksmanpistol"):
                return 0;
                break;
            
            case -947031628:
            case -572349828:
            case 392730790:
            case -1523701417:
            case -2112826155:
            case -664359727:
            case -1887867191:
            case -837150131:
            case -344484024:
            case joaat("weapon_flaregun"):
            case joaat("weapon_handcuffs"):
            case joaat("weapon_snowball"):
            case joaat("weapon_garbagebag"):
            case joaat("weapon_flashlight"):
            case joaat("weapon_switchblade"):
            case joaat("weapon_revolver"):
            case joaat("weapon_dbshotgun"):
            case joaat("weapon_compactrifle"):
            case 317205821:
            case -1121678507:
            case 125959754:
            case -853065399:
            case -1169823560:
            case -1810795771:
            case 419712736:
            case -1746263880:
            case 1198256469:
            case -1238556825:
            case -1355376991:
            case -1853920116:
            case 727643628:
                return 1;
                break;
            }
    }
    return 0;
}

int func_90(int iParam0, int iParam1)//Position - 0xE801
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    var uVar4;
    struct<4> Var5;
    
    iVar0 = 0;
    switch (iParam0)
    {
        case joaat("weapon_pistol"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = 1623028892;
                    break;
                
                case 1:
                    iVar0 = joaat("component_pistol_clip_01");
                    break;
                
                case 2:
                    iVar0 = joaat("component_pistol_clip_02");
                    break;
                
                case 3:
                    iVar0 = joaat("component_at_pi_flsh");
                    break;
                
                case 4:
                    iVar0 = joaat("component_at_pi_supp_02");
                    break;
                
                case 5:
                    iVar0 = joaat("component_pistol_varmod_luxe");
                    break;
            }
            break;
        
        case joaat("weapon_combatpistol"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_combatpistol_clip_01");
                    break;
                
                case 1:
                    iVar0 = joaat("component_combatpistol_clip_02");
                    break;
                
                case 2:
                    iVar0 = joaat("component_at_pi_flsh");
                    break;
                
                case 3:
                    iVar0 = joaat("component_at_pi_supp");
                    break;
                
                case 4:
                    iVar0 = joaat("component_combatpistol_varmod_lowrider");
                    break;
            }
            break;
        
        case joaat("weapon_appistol"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_appistol_clip_01");
                    break;
                
                case 1:
                    iVar0 = joaat("component_appistol_clip_02");
                    break;
                
                case 2:
                    iVar0 = joaat("component_at_pi_flsh");
                    break;
                
                case 3:
                    iVar0 = joaat("component_at_pi_supp");
                    break;
                
                case 4:
                    iVar0 = joaat("component_appistol_varmod_luxe");
                    break;
            }
            break;
        
        case joaat("weapon_microsmg"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_microsmg_clip_01");
                    break;
                
                case 1:
                    iVar0 = joaat("component_microsmg_clip_02");
                    break;
                
                case 2:
                    iVar0 = joaat("component_at_pi_flsh");
                    break;
                
                case 3:
                    iVar0 = joaat("component_at_scope_macro");
                    break;
                
                case 4:
                    iVar0 = joaat("component_at_ar_supp_02");
                    break;
                
                case 5:
                    iVar0 = joaat("component_microsmg_varmod_luxe");
                    break;
            }
            break;
        
        case joaat("weapon_smg"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = 1623028892;
                    break;
                
                case 1:
                    iVar0 = joaat("component_smg_clip_01");
                    break;
                
                case 2:
                    iVar0 = joaat("component_smg_clip_02");
                    break;
                
                case 3:
                    iVar0 = joaat("component_smg_clip_03");
                    break;
                
                case 4:
                    iVar0 = joaat("component_at_ar_flsh");
                    break;
                
                case 5:
                    iVar0 = joaat("component_at_pi_supp");
                    break;
                
                case 6:
                    iVar0 = joaat("component_at_scope_macro_02");
                    break;
                
                case 7:
                    iVar0 = joaat("component_at_ar_afgrip");
                    break;
                
                case 8:
                    iVar0 = joaat("component_smg_varmod_luxe");
                    break;
            }
            break;
        
        case joaat("weapon_assaultrifle"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = 1623028892;
                    break;
                
                case 1:
                    iVar0 = joaat("component_assaultrifle_clip_01");
                    break;
                
                case 2:
                    iVar0 = joaat("component_assaultrifle_clip_02");
                    break;
                
                case 3:
                    iVar0 = joaat("component_assaultrifle_clip_03");
                    break;
                
                case 4:
                    iVar0 = joaat("component_at_ar_afgrip");
                    break;
                
                case 5:
                    iVar0 = joaat("component_at_ar_flsh");
                    break;
                
                case 6:
                    iVar0 = joaat("component_at_scope_macro");
                    break;
                
                case 7:
                    iVar0 = joaat("component_at_ar_supp_02");
                    break;
                
                case 8:
                    iVar0 = joaat("component_assaultrifle_varmod_luxe");
                    break;
            }
            break;
        
        case joaat("weapon_carbinerifle"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = 1623028892;
                    break;
                
                case 1:
                    iVar0 = joaat("component_carbinerifle_clip_01");
                    break;
                
                case 2:
                    iVar0 = joaat("component_carbinerifle_clip_02");
                    break;
                
                case 3:
                    iVar0 = joaat("component_carbinerifle_clip_03");
                    break;
                
                case 4:
                    iVar0 = joaat("component_at_railcover_01");
                    break;
                
                case 5:
                    iVar0 = joaat("component_at_ar_afgrip");
                    break;
                
                case 6:
                    iVar0 = joaat("component_at_ar_flsh");
                    break;
                
                case 7:
                    iVar0 = joaat("component_at_scope_medium");
                    break;
                
                case 8:
                    iVar0 = joaat("component_at_ar_supp");
                    break;
                
                case 9:
                    iVar0 = joaat("component_carbinerifle_varmod_luxe");
                    break;
            }
            break;
        
        case joaat("weapon_advancedrifle"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_advancedrifle_clip_01");
                    break;
                
                case 1:
                    iVar0 = joaat("component_advancedrifle_clip_02");
                    break;
                
                case 2:
                    iVar0 = joaat("component_at_ar_flsh");
                    break;
                
                case 3:
                    iVar0 = joaat("component_at_scope_small");
                    break;
                
                case 4:
                    iVar0 = joaat("component_at_ar_supp");
                    break;
                
                case 5:
                    iVar0 = joaat("component_advancedrifle_varmod_luxe");
                    break;
            }
            break;
        
        case joaat("weapon_mg"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_mg_clip_01");
                    break;
                
                case 1:
                    iVar0 = joaat("component_mg_clip_02");
                    break;
                
                case 2:
                    iVar0 = joaat("component_at_scope_small_02");
                    break;
                
                case 3:
                    iVar0 = joaat("component_at_ar_afgrip");
                    break;
                
                case 4:
                    iVar0 = joaat("component_mg_varmod_lowrider");
                    break;
            }
            break;
        
        case joaat("weapon_combatmg"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = 1623028892;
                    break;
                
                case 1:
                    iVar0 = joaat("component_combatmg_clip_01");
                    break;
                
                case 2:
                    iVar0 = joaat("component_combatmg_clip_02");
                    break;
                
                case 3:
                    iVar0 = joaat("component_at_ar_afgrip");
                    break;
                
                case 4:
                    iVar0 = joaat("component_at_scope_medium");
                    break;
                
                case 5:
                    iVar0 = joaat("component_combatmg_varmod_lowrider");
                    break;
            }
            break;
        
        case joaat("weapon_pumpshotgun"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_at_sr_supp");
                    break;
                
                case 1:
                    iVar0 = joaat("component_at_ar_flsh");
                    break;
                
                case 2:
                    iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
                    break;
            }
            break;
        
        case joaat("weapon_assaultshotgun"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_assaultshotgun_clip_01");
                    break;
                
                case 1:
                    iVar0 = joaat("component_assaultshotgun_clip_02");
                    break;
                
                case 2:
                    iVar0 = joaat("component_at_ar_afgrip");
                    break;
                
                case 3:
                    iVar0 = joaat("component_at_ar_flsh");
                    break;
                
                case 4:
                    iVar0 = joaat("component_at_ar_supp");
                    break;
            }
            break;
        
        case joaat("weapon_sniperrifle"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_sniperrifle_clip_01");
                    break;
                
                case 1:
                    iVar0 = joaat("component_at_scope_large");
                    break;
                
                case 2:
                    iVar0 = joaat("component_at_scope_max");
                    break;
                
                case 3:
                    iVar0 = joaat("component_at_ar_supp_02");
                    break;
                
                case 4:
                    iVar0 = joaat("component_sniperrifle_varmod_luxe");
                    break;
            }
            break;
        
        case joaat("weapon_heavysniper"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = 1623028892;
                    break;
                
                case 1:
                    iVar0 = joaat("component_heavysniper_clip_01");
                    break;
                
                case 2:
                    iVar0 = joaat("component_at_scope_large");
                    break;
                
                case 3:
                    iVar0 = joaat("component_at_scope_max");
                    break;
            }
            break;
        
        case joaat("weapon_grenadelauncher"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_at_ar_afgrip");
                    break;
                
                case 1:
                    iVar0 = joaat("component_at_ar_flsh");
                    break;
                
                case 2:
                    iVar0 = joaat("component_at_scope_small");
                    break;
            }
            break;
        
        case joaat("weapon_minigun"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_minigun_clip_01");
                    break;
            }
            break;
        
        case joaat("weapon_assaultsmg"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_assaultsmg_clip_01");
                    break;
                
                case 1:
                    iVar0 = joaat("component_assaultsmg_clip_02");
                    break;
                
                case 2:
                    iVar0 = joaat("component_at_ar_flsh");
                    break;
                
                case 3:
                    iVar0 = joaat("component_at_scope_macro");
                    break;
                
                case 4:
                    iVar0 = joaat("component_at_ar_supp_02");
                    break;
                
                case 5:
                    iVar0 = joaat("component_assaultsmg_varmod_lowrider");
                    break;
            }
            break;
        
        case joaat("weapon_bullpupshotgun"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_at_ar_afgrip");
                    break;
                
                case 1:
                    iVar0 = joaat("component_at_ar_flsh");
                    break;
                
                case 2:
                    iVar0 = joaat("component_at_ar_supp_02");
                    break;
            }
            break;
        
        case joaat("weapon_pistol50"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_pistol50_clip_01");
                    break;
                
                case 1:
                    iVar0 = joaat("component_pistol50_clip_02");
                    break;
                
                case 2:
                    iVar0 = joaat("component_at_pi_flsh");
                    break;
                
                case 3:
                    iVar0 = joaat("component_at_ar_supp_02");
                    break;
                
                case 4:
                    iVar0 = joaat("component_pistol50_varmod_luxe");
                    break;
            }
            break;
        
        case joaat("weapon_combatpdw"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_combatpdw_clip_01");
                    break;
                
                case 1:
                    iVar0 = joaat("component_combatpdw_clip_02");
                    break;
                
                case 2:
                    iVar0 = joaat("component_combatpdw_clip_03");
                    break;
                
                case 3:
                    iVar0 = joaat("component_at_ar_flsh");
                    break;
                
                case 4:
                    iVar0 = joaat("component_at_scope_small");
                    break;
                
                case 5:
                    iVar0 = joaat("component_at_ar_afgrip");
                    break;
            }
            break;
        
        case joaat("weapon_sawnoffshotgun"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
                    break;
            }
            break;
        
        case joaat("weapon_bullpuprifle"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_bullpuprifle_clip_01");
                    break;
                
                case 1:
                    iVar0 = joaat("component_bullpuprifle_clip_02");
                    break;
                
                case 2:
                    iVar0 = joaat("component_at_ar_flsh");
                    break;
                
                case 3:
                    iVar0 = joaat("component_at_scope_small");
                    break;
                
                case 4:
                    iVar0 = joaat("component_at_ar_supp");
                    break;
                
                case 5:
                    iVar0 = joaat("component_at_ar_afgrip");
                    break;
                
                case 6:
                    iVar0 = joaat("component_bullpuprifle_varmod_low");
                    break;
            }
            break;
        
        case joaat("weapon_snspistol"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_snspistol_clip_01");
                    break;
                
                case 1:
                    iVar0 = joaat("component_snspistol_clip_02");
                    break;
                
                case 2:
                    iVar0 = joaat("component_snspistol_varmod_lowrider");
                    break;
            }
            break;
        
        case joaat("weapon_specialcarbine"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_specialcarbine_clip_01");
                    break;
                
                case 1:
                    iVar0 = joaat("component_specialcarbine_clip_02");
                    break;
                
                case 2:
                    iVar0 = joaat("component_specialcarbine_clip_03");
                    break;
                
                case 3:
                    iVar0 = joaat("component_at_ar_flsh");
                    break;
                
                case 4:
                    iVar0 = joaat("component_at_scope_medium");
                    break;
                
                case 5:
                    iVar0 = joaat("component_at_ar_supp_02");
                    break;
                
                case 6:
                    iVar0 = joaat("component_at_ar_afgrip");
                    break;
                
                case 7:
                    iVar0 = joaat("component_specialcarbine_varmod_lowrider");
                    break;
            }
            break;
        
        case joaat("weapon_knuckle"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_knuckle_varmod_pimp");
                    break;
                
                case 1:
                    iVar0 = joaat("component_knuckle_varmod_ballas");
                    break;
                
                case 2:
                    iVar0 = joaat("component_knuckle_varmod_dollar");
                    break;
                
                case 3:
                    iVar0 = joaat("component_knuckle_varmod_diamond");
                    break;
                
                case 4:
                    iVar0 = joaat("component_knuckle_varmod_hate");
                    break;
                
                case 5:
                    iVar0 = joaat("component_knuckle_varmod_love");
                    break;
                
                case 6:
                    iVar0 = joaat("component_knuckle_varmod_player");
                    break;
                
                case 7:
                    iVar0 = joaat("component_knuckle_varmod_king");
                    break;
                
                case 8:
                    iVar0 = joaat("component_knuckle_varmod_vagos");
                    break;
            }
            break;
        
        case joaat("weapon_machinepistol"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_machinepistol_clip_01");
                    break;
                
                case 1:
                    iVar0 = joaat("component_machinepistol_clip_02");
                    break;
                
                case 2:
                    iVar0 = joaat("component_machinepistol_clip_03");
                    break;
                
                case 3:
                    iVar0 = joaat("component_at_pi_supp");
                    break;
            }
            break;
        
        case joaat("weapon_switchblade"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_switchblade_varmod_var1");
                    break;
                
                case 1:
                    iVar0 = joaat("component_switchblade_varmod_var2");
                    break;
            }
            break;
        
        case joaat("weapon_revolver"):
            switch (iParam1)
            {
                case 0:
                    iVar0 = joaat("component_revolver_clip_01");
                    break;
                
                case 1:
                    iVar0 = joaat("component_revolver_varmod_boss");
                    break;
                
                case 2:
                    iVar0 = joaat("component_revolver_varmod_goon");
                    break;
            }
            break;
        
        case -1121678507:
            switch (iParam1)
            {
                case 0:
                    iVar0 = -2067221805;
                    break;
                
                case 1:
                    iVar0 = -1820405577;
                    break;
            }
            break;
        
        default:
            if (iParam0 != 0)
            {
                iVar1 = func_87(iParam0, &uVar4);
                if (iVar1 != -1)
                {
                    iVar2 = 0;
                    while (iVar2 < unk_0x6E2A2D341D785598(iVar1))
                    {
                        if (unk_0x0575653A26C467A1(iVar1, iVar2, &Var5))
                        {
                            if (!func_74(Var5.f_3))
                            {
                                if (iVar3 == iParam1)
                                {
                                    return Var5.f_3;
                                }
                                iVar3++;
                            }
                        }
                        iVar2++;
                    }
                }
            }
            break;
    }
    return iVar0;
}

int func_91(int iParam0)//Position - 0xF372
{
    int iVar0;
    
    iVar0 = 0;
    switch (iParam0)
    {
        case 0:
            iVar0 = 1993361168;
            break;
        
        case 1:
            iVar0 = 1277010230;
            break;
        
        case 2:
            iVar0 = 932043479;
            break;
        
        case 3:
            iVar0 = -690654591;
            break;
        
        case 4:
            iVar0 = -1459198205;
            break;
        
        case 5:
            iVar0 = 195782970;
            break;
        
        case 6:
            iVar0 = -438797331;
            break;
        
        case 7:
            iVar0 = 896793492;
            break;
        
        case 8:
            iVar0 = 495159329;
            break;
        
        case 9:
            iVar0 = -1155528315;
            break;
        
        case 10:
            iVar0 = -515636489;
            break;
        
        case 11:
            iVar0 = -871913299;
            break;
        
        case 12:
            iVar0 = -1352759032;
            break;
        
        case 13:
            iVar0 = -542958961;
            break;
        
        case 14:
            iVar0 = 1682645887;
            break;
        
        case 15:
            iVar0 = -859470162;
            break;
        
        case 16:
            iVar0 = -2125426402;
            break;
        
        case 17:
            iVar0 = 2067210266;
            break;
        
        case 18:
            iVar0 = -538172856;
            break;
        
        case 19:
            iVar0 = 1783244476;
            break;
        
        case 20:
            iVar0 = 439844898;
            break;
        
        case 21:
            iVar0 = -24829327;
            break;
        
        case 22:
            iVar0 = 1949306232;
            break;
        
        case 23:
            iVar0 = -1941230881;
            break;
        
        case 24:
            iVar0 = -1033554448;
            break;
        
        case 25:
            iVar0 = 320513715;
            break;
        
        case 26:
            iVar0 = -695165975;
            break;
        
        case 27:
            iVar0 = -281028447;
            break;
        
        case 28:
            iVar0 = -686713772;
            break;
        
        case 29:
            iVar0 = 347509793;
            break;
        
        case 30:
            iVar0 = 1769089473;
            break;
        
        case 31:
            iVar0 = 189935548;
            break;
        
        case 33:
            iVar0 = 248801358;
            break;
        
        case 34:
            iVar0 = 386596758;
            break;
        
        case 35:
            iVar0 = -157212362;
            break;
        
        case 36:
            iVar0 = 436985596;
            break;
        
        case 37:
            iVar0 = -47957369;
            break;
        
        case 38:
            iVar0 = 575938238;
            break;
    }
    return iVar0;
}

float func_92(int iParam0)//Position - 0xF5E6
{
    if (func_95(iParam0))
    {
        if (func_94(iParam0))
        {
            return iParam0->f_2;
        }
        else
        {
            return (func_93(unk_0xA2BC31158C8CEFD2(*iParam0, 4)) - iParam0->f_1);
        }
    }
    return iParam0->f_1;
}

float func_93(bool bParam0)//Position - 0xF625
{
    float fVar0;
    float fVar1;
    int iVar2;
    float fVar3;
    float fVar4;
    
    if (bParam0)
    {
        fVar0 = SYSTEM::TO_FLOAT(unk_0x9B35D07DCD0F0B43());
        fVar1 = (fVar0 / 1000f);
        return fVar1;
    }
    if (unk_0x393E9918BC37548A())
    {
        iVar2 = unk_0x169A8AC9F93C2727();
        fVar3 = SYSTEM::TO_FLOAT(iVar2);
        fVar4 = (fVar3 / 1000f);
        return fVar4;
    }
    return (SYSTEM::TO_FLOAT(unk_0x9B35D07DCD0F0B43()) / 1000f);
}

bool func_94(int iParam0)//Position - 0xF67D
{
    return unk_0xA2BC31158C8CEFD2(*iParam0, 2);
}

bool func_95(int iParam0)//Position - 0xF68D
{
    return unk_0xA2BC31158C8CEFD2(*iParam0, 1);
}

int func_96()//Position - 0xF69D
{
    if (Global_1406BF)
    {
        return 1;
    }
    if (func_98())
    {
        return 1;
    }
    if (func_97())
    {
        return 1;
    }
    return func_4(124, -1);
}

bool func_97()//Position - 0xF6CD
{
    return Global_14085D;
}

bool func_98()//Position - 0xF6D9
{
    return Global_14085F;
}

void func_99()//Position - 0xF6E5
{
    int iVar0;
    
    iVar0 = 1;
    while (iVar0 <= 49)
    {
        if (!unk_0x17A6988567C0F4A8(iVar0))
        {
            if (unk_0xFCD3C0E062BC099D(iVar0))
            {
                func_127(iVar0, 1);
            }
        }
        iVar0++;
    }
    iVar0 = 51;
    while (iVar0 <= 59)
    {
        if (!unk_0x17A6988567C0F4A8(iVar0))
        {
            if (unk_0xFCD3C0E062BC099D(iVar0))
            {
                func_127(iVar0, 1);
            }
        }
        iVar0++;
    }
    iVar0 = 70;
    while (iVar0 <= 77)
    {
        if (!unk_0x17A6988567C0F4A8(iVar0))
        {
            if (unk_0xFCD3C0E062BC099D(iVar0))
            {
                func_127(iVar0, 1);
            }
        }
        iVar0++;
    }
}

bool func_100(int iParam0, int iParam1)//Position - 0xF779
{
    int iVar0;
    int iVar1;
    
    if (iParam1 == -1)
    {
        iParam1 = func_6();
    }
    iVar0 = func_101(iParam1);
    iVar1 = unk_0xFD4B2AAE20AA1CBB(iVar0);
    return unk_0xA2BC31158C8CEFD2(iVar1, iParam0);
}

int func_101(int iParam0)//Position - 0xF7A5
{
    int iVar0;
    
    if (iParam0 == -1)
    {
        iParam0 = func_6();
    }
    switch (iParam0)
    {
        case 0:
            iVar0 = 914;
            break;
        
        case 1:
            iVar0 = 915;
            break;
        
        case 2:
            iVar0 = 916;
            break;
        
        case 3:
            iVar0 = 917;
            break;
        
        case 4:
            iVar0 = 918;
            break;
    }
    return iVar0;
}

int func_102()//Position - 0xF808
{
    if (func_104() && func_103(0))
    {
        return 1;
    }
    return 0;
}

var func_103(int iParam0)//Position - 0xF826
{
    return Global_140675[iParam0];
}

var func_104()//Position - 0xF836
{
    return func_103(func_6() + 1);
}

bool func_105(var uParam0)//Position - 0xF848
{
    return uParam0->f_4F == 1;
}

void func_106(var uParam0)//Position - 0xF856
{
    float fVar0;
    
    fVar0 = Global_41275A;
    uParam0->f_50 = (uParam0->f_50 + unk_0x9927BD5F023FA79D());
    if (!func_105(uParam0))
    {
        return;
    }
    if (func_113(uParam0) < 0f)
    {
        func_112(uParam0, 0);
        return;
    }
    if (func_160(14))
    {
        fVar0 = 10f;
    }
    if (func_113(uParam0) < fVar0)
    {
        return;
    }
    if (func_111(uParam0, 0))
    {
        return;
    }
    if (func_109((*uParam0)[0]))
    {
        func_108(uParam0);
        func_107(uParam0);
        func_112(uParam0, 0);
    }
}

void func_107(var uParam0)//Position - 0xF8DE
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < *uParam0)
    {
        if (func_111(uParam0, iVar0))
        {
            iVar0 = *uParam0 + 100;
        }
        iVar0++;
    }
}

void func_108(var uParam0)//Position - 0xF90F
{
    int iVar0;
    
    iVar0 = 1;
    if (func_111(uParam0, 0))
    {
        return;
    }
    while (iVar0 < *uParam0)
    {
        (*uParam0)[(iVar0 - 1)] = (*uParam0)[iVar0];
        iVar0++;
    }
}

int func_109(int iParam0)//Position - 0xF946
{
    if (unk_0x17A6988567C0F4A8(iParam0))
    {
        return 0;
    }
    if (func_160(14) && !func_110(iParam0))
    {
        return 0;
    }
    if (!unk_0xA123C027757634FD(iParam0))
    {
        return 0;
    }
    if (unk_0x17A6988567C0F4A8(iParam0))
    {
        return 1;
    }
    return 0;
}

int func_110(int iParam0)//Position - 0xF990
{
    switch (iParam0)
    {
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
        
        default:
    }
    return 0;
}

bool func_111(var uParam0, int iParam1)//Position - 0xF9E0
{
    return (*uParam0)[iParam1] == 78;
}

void func_112(var uParam0, float fParam1)//Position - 0xF9F1
{
    if (fParam1 == 0f)
    {
        uParam0->f_50 = 0f;
    }
    else
    {
        uParam0->f_50 = fParam1;
    }
}

float func_113(var uParam0)//Position - 0xFA0E
{
    return uParam0->f_50;
}

int func_114()//Position - 0xFA1A
{
    float fVar0;
    
    if (unk_0x393E9918BC37548A() || Global_12B21)
    {
        return 0;
    }
    if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
    {
        if (unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
        {
            fVar0 = unk_0x9E6E0361F738FDD2();
            if (fVar0 > 0.01f && unk_0xE434AB6E3DE89861())
            {
                func_133(14, SYSTEM::FLOOR((fVar0 * 100f)));
            }
            if (fVar0 >= 0.975f)
            {
                func_127(14, 1);
                return 1;
            }
        }
    }
    return 0;
}

int func_115(int iParam0)//Position - 0xFA92
{
    if (iParam0 == 94 || iParam0 == -1)
    {
        return 0;
    }
    return Global_1B3C8.f_2378.f_14A[iParam0 /*6*/];
}

void func_116(bool bParam0)//Position - 0xFABE
{
    if (Global_12B21)
    {
        if (bParam0)
        {
            func_10(bParam0);
        }
        func_3(bParam0);
        func_15(bParam0);
        if (bParam0)
        {
        }
    }
    func_126(bParam0);
    func_119(bParam0);
    func_118();
    func_117();
    if (bParam0)
    {
        if (func_95(&iLocal_58))
        {
        }
    }
}

int func_117()//Position - 0xFB12
{
    int iVar0;
    int iVar1;
    
    if (unk_0x17A6988567C0F4A8(50))
    {
        return 0;
    }
    iVar0 = 0;
    iVar1 = 0;
    iVar0 = (iVar0 + unk_0x69625F7F736C719D(joaat("first_person_cam_time")) * 24);
    iVar0 = (iVar0 + unk_0xBDE1262DF0E2774A(joaat("first_person_cam_time")));
    iVar1 = (iVar1 + unk_0x69625F7F736C719D(joaat("mp_first_person_cam_time")) * 24);
    iVar1 = (iVar1 + unk_0xBDE1262DF0E2774A(joaat("mp_first_person_cam_time")));
    if ((iVar0 + iVar1) >= 15)
    {
        func_127(50, 1);
        return 1;
    }
    return 0;
}

int func_118()//Position - 0xFB80
{
    int iVar0;
    
    if (unk_0x17A6988567C0F4A8(22))
    {
        return 0;
    }
    iVar0 = unk_0xE0DD96E88F2B43F2();
    if (iVar0 > 0)
    {
        if (Global_7916 < iVar0)
        {
            if (Global_7916 >= 0)
            {
                func_133(22, iVar0);
            }
            Global_7916 = iVar0;
        }
    }
    if (unk_0xE0DD96E88F2B43F2() >= 50)
    {
        func_127(22, 1);
        return 1;
    }
    return 0;
}

int func_119(bool bParam0)//Position - 0xFBD7
{
    var uVar0[6];
    int iVar1;
    int iVar2;
    int iVar3;
    
    if (unk_0x17A6988567C0F4A8(17))
    {
        return 0;
    }
    uVar0[0] = func_125();
    uVar0[1] = func_124();
    uVar0[2] = func_123();
    uVar0[3] = func_122();
    uVar0[4] = func_121();
    uVar0[5] = func_120();
    iVar1 = 0;
    iVar2 = 0;
    while (iVar2 < 6)
    {
        if (uVar0[iVar2])
        {
            iVar1++;
        }
        iVar2++;
    }
    unk_0x367DA79FE620711B(joaat("num_discipline_gold_earned"), &iVar3, -1);
    if (iVar1 > iVar3 && iVar1 > 0)
    {
        unk_0x41410A69AD49AFCD(joaat("num_discipline_gold_earned"), iVar1, 1);
        func_133(17, iVar1);
    }
    if (bParam0)
    {
    }
    if (!uVar0[0])
    {
        if (bParam0)
        {
        }
        return 0;
    }
    if (!uVar0[1])
    {
        if (bParam0)
        {
        }
        return 0;
    }
    if (!uVar0[2])
    {
        if (bParam0)
        {
        }
        return 0;
    }
    if (!uVar0[3])
    {
        if (bParam0)
        {
        }
        return 0;
    }
    if (!uVar0[4])
    {
        if (bParam0)
        {
        }
        return 0;
    }
    if (!uVar0[5])
    {
        if (bParam0)
        {
        }
        return 0;
    }
    func_127(17, 1);
    return 1;
}

int func_120()//Position - 0xFCF9
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 12)
    {
        if (Global_1B3C8.f_7BF[0 /*121*/][iVar0 /*10*/].f_8 == 3)
        {
            return 1;
        }
        else if (Global_1B3C8.f_7BF[1 /*121*/][iVar0 /*10*/].f_8 == 3)
        {
            return 1;
        }
        else if (Global_1B3C8.f_7BF[2 /*121*/][iVar0 /*10*/].f_8 == 3)
        {
            return 1;
        }
        iVar0++;
    }
    return 0;
}

int func_121()//Position - 0xFD66
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 22)
    {
        if (Global_1B3C8.f_4AC6[0 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
        {
            return 1;
        }
        else if (Global_1B3C8.f_4AC6[1 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
        {
            return 1;
        }
        else if (Global_1B3C8.f_4AC6[2 /*271*/].f_3[iVar0 /*12*/].f_3 == 3)
        {
            return 1;
        }
        iVar0++;
    }
    return 0;
}

int func_122()//Position - 0xFDDC
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 4)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_618B.f_1, iVar0))
        {
            return 1;
        }
        iVar0++;
    }
    return 0;
}

int func_123()//Position - 0xFE10
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 5)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_618E.f_2, iVar0))
        {
            return 1;
        }
        iVar0++;
    }
    return 0;
}

int func_124()//Position - 0xFE44
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 7)
    {
        if (Global_1B3C8.f_4A43.f_13[iVar0] == 1)
        {
            return 1;
        }
        iVar0++;
    }
    return 0;
}

int func_125()//Position - 0xFE77
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 3)
    {
        if (Global_1B3C8.f_4E26[iVar0] == 1)
        {
            return 1;
        }
        iVar0++;
    }
    return 0;
}

int func_126(bool bParam0)//Position - 0xFEA8
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    iVar1 = 0;
    if (unk_0x17A6988567C0F4A8(27))
    {
        return 0;
    }
    if (unk_0x367DA79FE620711B(joaat("sp0_money_total_spent"), &iVar0, -1))
    {
        iVar1 = (iVar1 + iVar0);
    }
    if (unk_0x367DA79FE620711B(joaat("sp1_money_total_spent"), &iVar0, -1))
    {
        iVar1 = (iVar1 + iVar0);
    }
    if (unk_0x367DA79FE620711B(joaat("sp2_money_total_spent"), &iVar0, -1))
    {
        iVar1 = (iVar1 + iVar0);
    }
    if (bParam0)
    {
    }
    iVar2 = 0;
    unk_0x367DA79FE620711B(joaat("num_cash_spent"), &iVar2, -1);
    if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
    {
        unk_0x41410A69AD49AFCD(joaat("num_cash_spent"), iVar1, 1);
        func_133(27, iVar1);
    }
    if (iVar1 < 200000000)
    {
        return 0;
    }
    func_127(27, 1);
    return 1;
}

int func_127(int iParam0, int iParam1)//Position - 0xFF5F
{
    if (iParam0 >= 78)
    {
        return 0;
    }
    return func_128(iParam0, iParam1);
}

int func_128(int iParam0, int iParam1)//Position - 0xFF7A
{
    if (func_160(14) && !func_110(iParam0))
    {
        return 0;
    }
    if (unk_0x17A6988567C0F4A8(iParam0) && iParam1 == 1)
    {
        return 0;
    }
    if (Global_7907 != 0 && !Global_12B21)
    {
        return 0;
    }
    if (func_105(&Global_41275B))
    {
        if (func_131(&Global_41275B, iParam0))
        {
            return 0;
        }
        if (func_129(&Global_41275B, iParam0))
        {
            return 1;
        }
    }
    else
    {
        if (!unk_0xA123C027757634FD(iParam0))
        {
            return 0;
        }
        if (unk_0x17A6988567C0F4A8(iParam0))
        {
            return 1;
        }
        return 0;
    }
    return 0;
}

int func_129(var uParam0, int iParam1)//Position - 0x10018
{
    int iVar0;
    var uVar1[78];
    
    if (unk_0x17A6988567C0F4A8(iParam1))
    {
        return 0;
    }
    if (func_160(14) && !func_110(iParam1))
    {
        return 0;
    }
    if (func_131(uParam0, iParam1))
    {
        return 0;
    }
    if (func_113(uParam0) < 0f)
    {
        func_112(uParam0, 0);
    }
    func_165(&uVar1);
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < (*uParam0 - 1))
    {
        uVar1[iVar0 + 1] = (*uParam0)[iVar0];
        iVar0++;
    }
    func_130(&uVar1, iParam1);
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < *uParam0)
    {
        (*uParam0)[iVar0] = uVar1[iVar0];
        iVar0++;
    }
    return 1;
}

int func_130(var uParam0, int iParam1)//Position - 0x100C9
{
    int iVar0;
    
    if (unk_0x17A6988567C0F4A8(iParam1))
    {
        return 0;
    }
    if (func_160(14) && !func_110(iParam1))
    {
        return 0;
    }
    if (func_131(uParam0, iParam1))
    {
        return 0;
    }
    if (func_113(uParam0) < 0f)
    {
        func_112(uParam0, 0);
    }
    iVar0 = 0;
    while (iVar0 < *uParam0)
    {
        if (func_111(uParam0, iVar0))
        {
            (*uParam0)[iVar0] = iParam1;
            return 1;
        }
        iVar0++;
    }
    return 0;
}

bool func_131(var uParam0, int iParam1)//Position - 0x10144
{
    return func_132(uParam0, iParam1) != -1;
}

int func_132(var uParam0, int iParam1)//Position - 0x10156
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < *uParam0)
    {
        if ((*uParam0)[iVar0] == iParam1)
        {
            return iVar0;
        }
        iVar0++;
    }
    return -1;
}

int func_133(int iParam0, int iParam1)//Position - 0x10183
{
    int iVar0;
    
    if (iParam0 < 0)
    {
        return 0;
    }
    if (iParam0 > 78)
    {
        return 0;
    }
    if (iParam1 <= 0 || iParam1 > 100)
    {
        return 0;
    }
    iVar0 = unk_0x7FA0488109D2A795(iParam0);
    if (iParam1 > iVar0)
    {
        return unk_0x968D4E056664C967(iParam0, iParam1);
    }
    return 0;
}

int func_134(bool bParam0)//Position - 0x101D4
{
    int iVar0;
    
    iVar0 = (func_147(bParam0) + func_135(bParam0));
    if (bParam0)
    {
    }
    return iVar0;
}

int func_135(bool bParam0)//Position - 0x101F2
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    float fVar6;
    int iVar7;
    
    iVar3 = 0;
    iVar4 = 0;
    if (bParam0)
    {
    }
    iVar0 = 0;
    while (iVar0 < Global_1B3C8.f_4889)
    {
        if (Global_1B3C8.f_4889[iVar0 /*6*/].f_3 != -1 && func_145(iVar0, 7))
        {
            iVar3 = 0;
            iVar4 = 0;
            iVar5 = 0;
            while (iVar5 < func_143(iVar0, 7))
            {
                iVar7 = func_141(iVar0, 7, iVar5);
                if (!Global_F100[iVar7 /*13*/].f_7)
                {
                    if (func_138(iVar7) == 1)
                    {
                        iVar4++;
                    }
                    iVar3++;
                }
                iVar5++;
            }
            fVar6 = func_137(iVar4, iVar3, 0);
            iVar2 = func_136(fVar6);
            if (iVar0 >= 52 && iVar0 <= 56)
            {
                if (bParam0)
                {
                }
                iVar2 = Global_1B3C8.f_92B[(iVar0 - 52) /*2*/];
                fVar6 = 0f;
            }
            if (fVar6 >= 100f || iVar2 == 3)
            {
                iVar1++;
            }
        }
        iVar0++;
    }
    if (bParam0)
    {
    }
    return iVar1;
}

int func_136(float fParam0)//Position - 0x102E6
{
    if (fParam0 == 0f)
    {
        return 0;
    }
    if (fParam0 == 100f)
    {
        return 3;
    }
    else if (fParam0 > 50f)
    {
        return 2;
    }
    return 1;
}

float func_137(int iParam0, int iParam1, bool bParam2)//Position - 0x1031B
{
    float fVar0;
    float fVar1;
    
    if (bParam2)
    {
        return 0f;
    }
    if (iParam0 == iParam1)
    {
        return 100f;
    }
    fVar0 = (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1));
    fVar1 = ((50f * fVar0) + 50f);
    fVar1 = SYSTEM::TO_FLOAT(SYSTEM::CEIL(fVar1));
    if (fVar1 > 100f)
    {
        fVar1 = 100f;
    }
    return fVar1;
}

int func_138(int iParam0)//Position - 0x1037A
{
    if (func_139(iParam0, func_140(Global_F100[iParam0 /*13*/].f_4)))
    {
        return 1;
    }
    return 0;
}

int func_139(int iParam0, int iParam1)//Position - 0x1039D
{
    if (iParam1 < 0)
    {
        return 0;
    }
    switch (Global_F100[iParam0 /*13*/])
    {
        case 1:
        case 2:
        case 4:
        case 5:
        case 17:
            if (iParam1 < 1)
            {
                return 0;
            }
            break;
    }
    if (iParam1 == 2147483647)
    {
        return 0;
    }
    if (((iParam0 == 881 || iParam0 == 889) || iParam0 == 897) && Global_1B3C8.f_6143[4 /*4*/] == func_56())
    {
        Global_F100[iParam0 /*13*/].f_2 = 0;
    }
    if (Global_F100[iParam0 /*13*/].f_3)
    {
        if (iParam1 < Global_F100[iParam0 /*13*/].f_2)
        {
            return 1;
        }
    }
    else if (iParam1 >= Global_F100[iParam0 /*13*/].f_2)
    {
        return 1;
    }
    return 0;
}

int func_140(int iParam0)//Position - 0x10467
{
    int iVar0;
    
    if (iParam0 == 0)
    {
        return -1;
    }
    if (unk_0x367DA79FE620711B(iParam0, &iVar0, -1))
    {
        return (iVar0 - 1);
    }
    return -1;
}

int func_141(int iParam0, int iParam1, int iParam2)//Position - 0x10490
{
    switch (iParam1)
    {
        case 1:
            return Global_15D8F[iParam0 /*34*/].f_11[iParam2];
            break;
        
        case 7:
            return func_142(iParam0, iParam2);
            break;
        
        default:
            break;
    }
    return 914;
}

int func_142(int iParam0, int iParam1)//Position - 0x104D3
{
    switch (iParam0)
    {
        case 2:
            switch (iParam1)
            {
                case 0:
                    return 741;
                
                case 1:
                    return 742;
                
                default:
            }
            return -1;
        
        case 3:
            switch (iParam1)
            {
                case 0:
                    return 743;
                
                case 1:
                    return 744;
                
                default:
            }
            return -1;
        
        case 5:
            switch (iParam1)
            {
                case 0:
                    return 745;
                
                case 1:
                    return 746;
                
                default:
            }
            return -1;
        
        case 6:
            switch (iParam1)
            {
                case 0:
                    return 747;
                
                case 1:
                    return 748;
                
                default:
            }
            return -1;
        
        case 8:
            switch (iParam1)
            {
                case 0:
                    return 749;
                
                default:
            }
            return -1;
        
        case 12:
            switch (iParam1)
            {
                case 0:
                    return 750;
                
                default:
            }
            return -1;
        
        case 14:
            switch (iParam1)
            {
                case 0:
                    return 751;
                
                case 1:
                    return 752;
                
                default:
            }
            return -1;
        
        case 16:
            switch (iParam1)
            {
                case 0:
                    return 753;
                
                case 1:
                    return 754;
                
                default:
            }
            return -1;
        
        case 17:
            switch (iParam1)
            {
                case 0:
                    return 755;
                
                case 1:
                    return 756;
                
                case 2:
                    return 757;
                
                default:
            }
            return -1;
        
        case 18:
            switch (iParam1)
            {
                case 0:
                    return 758;
                
                case 1:
                    return 759;
                
                default:
            }
            return -1;
        
        case 19:
            switch (iParam1)
            {
                case 0:
                    return 760;
                
                case 1:
                    return 761;
                
                default:
            }
            return -1;
        
        case 20:
            switch (iParam1)
            {
                case 0:
                    return 762;
                
                default:
            }
            return -1;
        
        case 21:
            switch (iParam1)
            {
                case 0:
                    return 763;
                
                default:
            }
            return -1;
        
        case 22:
            switch (iParam1)
            {
                case 0:
                    return 764;
                
                case 1:
                    return 765;
                
                default:
            }
            return -1;
        
        case 23:
            switch (iParam1)
            {
                case 0:
                    return 766;
                
                default:
            }
            return -1;
        
        case 25:
            switch (iParam1)
            {
                case 0:
                    return 767;
                
                case 1:
                    return 768;
                
                case 2:
                    return 769;
                
                default:
            }
            return -1;
        
        case 26:
            switch (iParam1)
            {
                case 0:
                    return 770;
                
                case 1:
                    return 771;
                
                default:
            }
            return -1;
        
        case 28:
            switch (iParam1)
            {
                case 0:
                    return 772;
                
                case 1:
                    return 773;
                
                default:
            }
            return -1;
        
        case 29:
            switch (iParam1)
            {
                case 0:
                    return 774;
                
                case 1:
                    return 775;
                
                default:
            }
            return -1;
        
        case 30:
            switch (iParam1)
            {
                case 0:
                    return 776;
                
                case 1:
                    return 777;
                
                default:
            }
            return -1;
        
        case 32:
            switch (iParam1)
            {
                case 0:
                    return 778;
                
                case 1:
                    return 779;
                
                default:
            }
            return -1;
        
        default:
    }
    switch (iParam0)
    {
        case 33:
            switch (iParam1)
            {
                case 0:
                    return 780;
                
                case 1:
                    return 781;
                
                case 2:
                    return 782;
                
                default:
            }
            return -1;
        
        case 34:
            switch (iParam1)
            {
                case 0:
                    return 783;
                
                case 1:
                    return 784;
                
                default:
            }
            return -1;
        
        case 38:
            switch (iParam1)
            {
                case 0:
                    return 785;
                
                case 1:
                    return 786;
                
                default:
            }
            return -1;
        
        case 39:
            switch (iParam1)
            {
                case 0:
                    return 787;
                
                case 1:
                    return 788;
                
                default:
            }
            return -1;
        
        case 40:
            switch (iParam1)
            {
                case 0:
                    return 789;
                
                default:
            }
            return -1;
        
        case 41:
            switch (iParam1)
            {
                case 0:
                    return 790;
                
                case 1:
                    return 791;
                
                case 2:
                    return 792;
                
                default:
            }
            return -1;
        
        case 42:
            switch (iParam1)
            {
                case 0:
                    return 793;
                
                case 1:
                    return 794;
                
                case 2:
                    return 795;
                
                default:
            }
            return -1;
        
        case 43:
            switch (iParam1)
            {
                case 0:
                    return 796;
                
                case 1:
                    return 797;
                
                default:
            }
            return -1;
        
        case 46:
            switch (iParam1)
            {
                case 0:
                    return 798;
                
                case 1:
                    return 799;
                
                default:
            }
            return -1;
        
        case 47:
            switch (iParam1)
            {
                case 0:
                    return 800;
                
                case 1:
                    return 801;
                
                default:
            }
            return -1;
        
        case 49:
            switch (iParam1)
            {
                case 0:
                    return 802;
                
                case 1:
                    return 803;
                
                default:
            }
            return -1;
        
        case 50:
            switch (iParam1)
            {
                case 0:
                    return 804;
                
                case 1:
                    return 805;
                
                default:
            }
            return -1;
        
        case 51:
            switch (iParam1)
            {
                case 0:
                    return 806;
                
                default:
            }
            return -1;
        
        case 57:
            switch (iParam1)
            {
                case 0:
                    return 807;
                
                case 1:
                    return 808;
                
                case 2:
                    return 809;
                
                default:
            }
            return -1;
        
        case 58:
            switch (iParam1)
            {
                case 0:
                    return 828;
                
                case 1:
                    return 829;
                
                case 2:
                    return 830;
                
                default:
            }
            return -1;
        
        case 59:
            switch (iParam1)
            {
                case 0:
                    return 831;
                
                case 1:
                    return 832;
                
                case 2:
                    return 833;
                
                default:
            }
            return -1;
        
        case 60:
            switch (iParam1)
            {
                case 0:
                    return 834;
                
                case 1:
                    return 835;
                
                case 2:
                    return 836;
                
                default:
            }
            return -1;
        
        case 61:
            switch (iParam1)
            {
                case 0:
                    return 837;
                
                case 1:
                    return 838;
                
                case 2:
                    return 839;
                
                default:
            }
            return -1;
        
        case 62:
            switch (iParam1)
            {
                case 0:
                    return 840;
                
                case 1:
                    return 841;
                
                case 2:
                    return 842;
                
                default:
            }
            return -1;
        
        case 24:
            switch (iParam1)
            {
                case 0:
                    return 843;
                
                case 1:
                    return 844;
                
                case 2:
                    return 845;
                
                default:
            }
            return -1;
        
        default:
    }
    return -1;
}

int func_143(int iParam0, int iParam1)//Position - 0x10BB7
{
    switch (iParam1)
    {
        case 1:
            return Global_15D8F[iParam0 /*34*/].f_10;
            break;
        
        case 7:
            return func_144(iParam0);
            break;
        
        default:
            break;
    }
    return 0;
}

int func_144(int iParam0)//Position - 0x10BF2
{
    switch (iParam0)
    {
        case 2:
            return 2;
        
        case 3:
            return 2;
        
        case 5:
            return 2;
        
        case 6:
            return 2;
        
        case 8:
            return 1;
        
        case 12:
            return 1;
        
        case 14:
            return 2;
        
        case 16:
            return 2;
        
        case 17:
            return 3;
        
        case 18:
            return 2;
        
        case 19:
            return 2;
        
        case 20:
            return 1;
        
        case 21:
            return 1;
        
        case 22:
            return 2;
        
        case 23:
            return 1;
        
        case 25:
            return 3;
        
        case 26:
            return 2;
        
        case 28:
            return 2;
        
        case 29:
            return 2;
        
        case 30:
            return 2;
        
        case 32:
            return 2;
        
        default:
    }
    switch (iParam0)
    {
        case 33:
            return 3;
        
        case 34:
            return 2;
        
        case 38:
            return 2;
        
        case 39:
            return 2;
        
        case 40:
            return 1;
        
        case 41:
            return 3;
        
        case 42:
            return 3;
        
        case 43:
            return 2;
        
        case 46:
            return 2;
        
        case 47:
            return 2;
        
        case 49:
            return 2;
        
        case 50:
            return 2;
        
        case 51:
            return 1;
        
        case 57:
            return 3;
        
        case 58:
            return 3;
        
        case 59:
            return 3;
        
        case 60:
            return 3;
        
        case 61:
            return 3;
        
        case 62:
            return 3;
        
        case 24:
            return 3;
        
        default:
    }
    return 0;
}

int func_145(int iParam0, int iParam1)//Position - 0x10DA3
{
    switch (iParam1)
    {
        case 1:
            return !unk_0xA2BC31158C8CEFD2(Global_15D8F[iParam0 /*34*/].f_F, 5);
            break;
        
        case 7:
            return func_146(iParam0);
            break;
        
        default:
            break;
    }
    return 0;
}

int func_146(int iParam0)//Position - 0x10DE4
{
    switch (iParam0)
    {
        case 0:
            return 0;
            break;
        
        case 1:
            return 0;
            break;
        
        case 2:
            return 1;
            break;
        
        case 3:
            return 1;
            break;
        
        case 4:
            return 0;
            break;
        
        case 5:
            return 1;
            break;
        
        case 6:
            return 1;
            break;
        
        case 7:
            return 0;
            break;
        
        case 8:
            return 1;
            break;
        
        case 9:
            return 0;
            break;
        
        case 10:
            return 0;
            break;
        
        case 11:
            return 0;
            break;
        
        case 12:
            return 1;
            break;
        
        case 13:
            return 0;
            break;
        
        case 14:
            return 1;
            break;
        
        case 15:
            return 0;
            break;
        
        case 16:
            return 1;
            break;
        
        case 17:
            return 1;
            break;
        
        case 18:
            return 1;
            break;
        
        case 19:
            return 1;
            break;
        
        case 20:
            return 1;
            break;
        
        case 21:
            return 1;
            break;
        
        case 22:
            return 1;
            break;
        
        case 23:
            return 1;
            break;
        
        case 24:
            return 1;
            break;
        
        case 25:
            return 1;
            break;
        
        case 26:
            return 1;
            break;
        
        case 27:
            return 0;
            break;
        
        case 28:
            return 1;
            break;
        
        case 29:
            return 1;
            break;
        
        case 30:
            return 1;
            break;
        
        case 31:
            return 0;
            break;
        
        case 32:
            return 1;
            break;
        
        case 33:
            return 1;
            break;
        
        case 34:
            return 1;
            break;
        
        case 35:
            return 0;
            break;
        
        case 36:
            return 0;
            break;
        
        case 37:
            return 0;
            break;
        
        case 38:
            return 1;
            break;
        
        case 39:
            return 1;
            break;
        
        case 40:
            return 1;
            break;
        
        case 41:
            return 1;
            break;
        
        case 42:
            return 1;
            break;
        
        case 43:
            return 1;
            break;
        
        case 44:
            return 0;
            break;
        
        case 45:
            return 0;
            break;
        
        case 46:
            return 1;
            break;
        
        case 47:
            return 1;
            break;
        
        case 48:
            return 0;
            break;
        
        case 49:
            return 1;
            break;
        
        case 50:
            return 1;
            break;
        
        case 51:
            return 1;
            break;
        
        case 52:
            return 1;
            break;
        
        case 54:
            return 1;
            break;
        
        case 55:
            return 1;
            break;
        
        case 56:
            return 1;
            break;
        
        case 53:
            return 1;
            break;
        
        case 57:
            return 1;
            break;
        
        case 58:
            return 1;
            break;
        
        case 59:
            return 1;
            break;
        
        case 60:
            return 1;
            break;
        
        case 61:
            return 1;
            break;
        
        case 62:
            return 1;
            break;
        
        default:
            break;
    }
    return 0;
}

int func_147(bool bParam0)//Position - 0x1112A
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    float fVar6;
    int iVar7;
    int iVar8;
    
    iVar3 = 0;
    iVar4 = 0;
    if (bParam0)
    {
    }
    iVar0 = 0;
    while (iVar0 < Global_1B3C8.f_2378.f_14A)
    {
        if (Global_1B3C8.f_2378.f_14A[iVar0 /*6*/].f_3 != -1 && func_145(iVar0, 1))
        {
            iVar3 = 0;
            iVar4 = 0;
            iVar8 = -1;
            iVar5 = 0;
            while (iVar5 < func_143(iVar0, 1))
            {
                iVar7 = func_141(iVar0, 1, iVar5);
                if (!Global_F100[iVar7 /*13*/].f_7)
                {
                    if (func_138(iVar7) == 1)
                    {
                        iVar4++;
                    }
                    switch (iVar7)
                    {
                        case 42:
                        case 55:
                        case 85:
                        case 70:
                        case 101:
                            iVar8 = func_148(iVar7);
                            if (iVar8 >= 2147483647)
                            {
                                iVar8 = 1;
                            }
                            break;
                    }
                    iVar3++;
                }
                iVar5++;
            }
            fVar6 = func_137(iVar4, iVar3, 0);
            iVar2 = func_136(fVar6);
            if (iVar8 > -1)
            {
                iVar2 = iVar8;
            }
            if (fVar6 >= 100f || iVar2 == 3)
            {
                iVar1++;
            }
        }
        iVar0++;
    }
    if (bParam0)
    {
    }
    return iVar1;
}

int func_148(int iParam0)//Position - 0x11244
{
    int iVar0;
    
    iVar0 = func_140(Global_F100[iParam0 /*13*/].f_4);
    if (iVar0 > -2)
    {
        return iVar0;
    }
    return 0;
}

void func_149()//Position - 0x11269
{
    int iVar0;
    int iVar1;
    
    unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0);
    if (!unk_0xE294A1321110B3E9(unk_0x0FA8183DAD2B3203()))
    {
        return;
    }
    if (unk_0xF6FD8019402CF03B(unk_0x0FA8183DAD2B3203(), "creatures@shark@move", "attack_player", 3))
    {
        func_127(25, 1);
        return;
    }
    if (unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
    {
        iVar0 = unk_0x940C28AC395C07F4(unk_0x0FA8183DAD2B3203());
        if (unk_0x4625051E51BA911B(iVar0))
        {
            iVar1 = unk_0x3D464779B732760F(iVar0);
            if (func_150(iVar1))
            {
                if (unk_0x7F375072508F738F(iVar1) == joaat("a_c_sharktiger"))
                {
                    func_127(25, 1);
                    return;
                }
            }
        }
    }
}

bool func_150(int iParam0)//Position - 0x112F2
{
    if (!unk_0xD4B321D9096B01FC(iParam0))
    {
        return 0;
    }
    return !unk_0xF4B969E0807E76C7(iParam0, 0);
}

void func_151()//Position - 0x11310
{
    switch (iLocal_55)
    {
        case 0:
            fLocal_63 = 0f;
            if (!unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
            {
                return;
            }
            if (unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
            {
                return;
            }
            if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) >= 3 && unk_0xFF392459DD4CD797() == 0)
            {
                if (func_156() == 2)
                {
                    func_162(&iLocal_58);
                    iLocal_55++;
                }
            }
            break;
        
        case 1:
            if (func_155() || unk_0x16587C6F71675106())
            {
                return;
            }
            if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) < 3)
            {
                func_154(&iLocal_58);
                iLocal_55 = 0;
                return;
            }
            if (unk_0xFF392459DD4CD797() == 1)
            {
                func_154(&iLocal_58);
                iLocal_55 = 0;
                return;
            }
            if (func_156() < 2)
            {
                func_154(&iLocal_58);
                iLocal_55 = 0;
                return;
            }
            if (unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
            {
                func_154(&iLocal_58);
                iLocal_55 = 0;
                return;
            }
            fLocal_63 = func_153(&iLocal_58);
            if (fLocal_63 >= 180f)
            {
                func_127(24, 1);
                func_152(&iLocal_58);
                iLocal_55++;
            }
            break;
        
        case 2:
            iLocal_55++;
            break;
    }
}

void func_152(int iParam0)//Position - 0x11420
{
    if (func_95(iParam0))
    {
        if (!func_94(iParam0))
        {
            iParam0->f_2 = (func_93(unk_0xA2BC31158C8CEFD2(*iParam0, 4)) - iParam0->f_1);
            unk_0xA1E7A40E1F56E511(iParam0, 2);
        }
    }
}

float func_153(int iParam0)//Position - 0x1145A
{
    if (func_95(iParam0))
    {
        if (func_94(iParam0))
        {
            return iParam0->f_2;
        }
        else
        {
            return (func_93(unk_0xA2BC31158C8CEFD2(*iParam0, 4)) - iParam0->f_1);
        }
    }
    return 0f;
}

void func_154(int iParam0)//Position - 0x11496
{
    iParam0->f_1 = 0f;
    iParam0->f_2 = 0f;
    *iParam0 = 0;
}

int func_155()//Position - 0x114AC
{
    if (!unk_0x393E9918BC37548A())
    {
        return Global_177B1.f_2C == 1;
    }
    return 0;
}

int func_156()//Position - 0x114C8
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    iVar1 = func_158(2);
    if (func_157(iVar1, 0) || unk_0xA2BC31158C8CEFD2(Global_17156, 2))
    {
        iVar0++;
    }
    iVar1 = func_158(1);
    if (func_157(iVar1, 0) || unk_0xA2BC31158C8CEFD2(Global_17156, 1))
    {
        iVar0++;
    }
    iVar1 = func_158(0);
    if (func_157(iVar1, 0) || unk_0xA2BC31158C8CEFD2(Global_17156, 0))
    {
        iVar0++;
    }
    return iVar0;
}

int func_157(int iParam0, int iParam1)//Position - 0x11547
{
    int iVar0;
    
    return 0;
    if (!unk_0x2BF5E63466422C38(iParam0))
    {
        iVar0 = func_58(iParam0);
        if (iVar0 > 3)
        {
            return 0;
        }
        if (func_158(iVar0) != iParam0)
        {
            return 0;
        }
        if (iParam1 == 0)
        {
            if (iParam0 == unk_0x0FA8183DAD2B3203())
            {
                return 0;
            }
        }
        if (unk_0xA2BC31158C8CEFD2(Global_17158, iVar0))
        {
            return 1;
        }
    }
    return 0;
}

int func_158(int iParam0)//Position - 0x115A3
{
    if (iParam0 > 3)
    {
        return 0;
    }
    if (iParam0 == func_56())
    {
        return unk_0x0FA8183DAD2B3203();
    }
    return Global_177B1[func_159(iParam0)];
}

int func_159(int iParam0)//Position - 0x115D4
{
    if (iParam0 == 0)
    {
        return 0;
    }
    else if (iParam0 == 2)
    {
        return 2;
    }
    else if (iParam0 == 1)
    {
        return 1;
    }
    else if (iParam0 == 145)
    {
        return 3;
    }
    return 4;
}

bool func_160(int iParam0)//Position - 0x1160F
{
    return Global_A1B4 == iParam0;
}

void func_161(char* sParam0, int iParam1)//Position - 0x1161D
{
    unk_0xD95C12E1062B7D5E(sParam0);
    unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

void func_162(int iParam0)//Position - 0x11634
{
    func_163(iParam0, 0f);
}

void func_163(int iParam0, float fParam1)//Position - 0x11643
{
    iParam0->f_1 = (func_93(unk_0xA2BC31158C8CEFD2(*iParam0, 4)) - fParam1);
    unk_0xA1E7A40E1F56E511(iParam0, 1);
    unk_0x3B76114EC84D5812(iParam0, 2);
    iParam0->f_2 = 0f;
}

void func_164(var uParam0, int iParam1)//Position - 0x11671
{
    uParam0->f_4F = iParam1;
    if (uParam0->f_4F)
    {
        func_112(uParam0, 0);
    }
}

void func_165(var uParam0)//Position - 0x1168D
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < *uParam0)
    {
        func_166(uParam0, iVar0);
        iVar0++;
    }
    func_112(uParam0, (Global_41275A - 0.5f));
}

void func_166(var uParam0, int iParam1)//Position - 0x116C1
{
    (*uParam0)[iParam1] = 78;
}

void func_167()//Position - 0x116D1
{
    int iVar0;
    int iVar1;
    
    iVar1 = 78;
    iVar0 = 1;
    while (iVar0 <= (iVar1 - 1))
    {
        if (unk_0x17A6988567C0F4A8(iVar0))
        {
        }
        iVar0++;
    }
}

void func_168(int iParam0)//Position - 0x116FB
{
    if (iParam0 > 0)
    {
    }
}

