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
    var uLocal_60 = 0;
    var uLocal_61 = 0;
    var uLocal_62 = 10;
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
    var uLocal_73 = 2;
    var uLocal_74 = 0;
    var uLocal_75 = 0;
    var uLocal_76 = 8;
    var uLocal_77 = 0;
    var uLocal_78 = 0;
    var uLocal_79 = 0;
    var uLocal_80 = 0;
    var uLocal_81 = 0;
    var uLocal_82 = 0;
    var uLocal_83 = 0;
    var uLocal_84 = 0;
    var uLocal_85 = 8;
    var uLocal_86 = 0;
    var uLocal_87 = 0;
    var uLocal_88 = 0;
    var uLocal_89 = 0;
    var uLocal_90 = 0;
    var uLocal_91 = 0;
    var uLocal_92 = 0;
    var uLocal_93 = 0;
    var uLocal_94 = 0;
    var uLocal_95 = 0;
    float fLocal_96 = 0f;
    var uLocal_97 = 0;
    var uLocal_98 = 0;
    var uLocal_99 = 0;
    var uLocal_100 = 0;
    var uLocal_101 = 0;
    var uLocal_102 = 0;
    var uLocal_103 = 0;
    var uLocal_104 = 0;
    var uLocal_105 = 0;
    var uLocal_106 = 0;
    var uLocal_107 = 0;
    var uLocal_108 = 0;
    var uLocal_109 = 0;
    var uLocal_110 = 0;
    var uLocal_111 = 0;
    int iLocal_112 = 0;
    int iLocal_113 = 0;
    vector3 vLocal_114 = { 0f, 0f, 0f };
    struct<4> Local_115 = { 2, 0, 0, 3 } ;
    var uLocal_116 = 0;
    var uLocal_117 = 0;
    var uLocal_118 = 0;
    var uLocal_119 = 0;
    var uLocal_120 = 0;
    var uLocal_121 = 0;
    var uLocal_122 = 0;
    var uLocal_123 = 0;
    var uLocal_124 = 0;
    var uLocal_125 = 0;
    var uLocal_126 = 0;
    var uLocal_127 = 0;
    var uLocal_128 = 0;
    var uLocal_129 = 0;
    var uLocal_130 = 0;
    var uLocal_131 = 0;
    var uLocal_132 = 0;
    var uLocal_133 = 2;
    var uLocal_134 = 0;
    var uLocal_135 = 0;
    var uLocal_136 = 2;
    var uLocal_137 = 0;
    var uLocal_138 = 0;
    struct<8> Local_139[32];
    struct<184> Local_140 = { 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
    var uLocal_141 = 0;
    bool bLocal_142 = 0;
    bool bLocal_143 = 0;
    bool bLocal_144 = 0;
    int iLocal_145 = 0;
    int iLocal_146 = 0;
    int iLocal_147 = 0;
    int iLocal_148 = 0;
    int iLocal_149 = 0;
    var uLocal_150 = 0;
    var uLocal_151 = 0;
    var uLocal_152 = 0;
    var uLocal_153 = 0;
    struct<21> Local_154 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
    sLocal_20 = "NULL";
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
    fLocal_96 = ((0.05f + 0.275f) - 0.01f);
    iLocal_112 = -1;
    iLocal_113 = -1;
    vLocal_114 = { -2357.12f, 3250.68f, 106.04f };
    iLocal_149 = -1;
    if (unk_0x393E9918BC37548A())
    {
        func_183(ScriptParam_154);
    }
    else
    {
        func_180();
    }
    while (true)
    {
        func_179();
        func_171();
        if (func_160() || unk_0xEDC68E498B715C56())
        {
            func_180();
        }
        if (unk_0x393E9918BC37548A())
        {
            if ((func_154() && !Global_40001.f_53CF) && !unk_0xA51CBC95AC3A4B14())
            {
                func_149();
            }
            if (func_39())
            {
                func_180();
            }
            if (func_36(unk_0x7C7787D2D7139A85()))
            {
                if (!unk_0xA2BC31158C8CEFD2(Local_140.f_B6, 3))
                {
                    unk_0xA1E7A40E1F56E511(&(Local_140.f_B6), 3);
                }
            }
            if (((((((((!Global_180459 && !func_35(2)) && !func_32(unk_0x7C7787D2D7139A85(), 0)) && !unk_0x16587C6F71675106()) && unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85())) && !func_30(unk_0x7C7787D2D7139A85())) && !func_28(func_29(unk_0x7C7787D2D7139A85()))) && !func_26(unk_0x7C7787D2D7139A85(), 146)) && !func_22(unk_0x7C7787D2D7139A85())) && !func_21(unk_0x7C7787D2D7139A85()))
            {
                if (func_20(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), 3, 1000, 0) || func_19(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), 1000))
                {
                    if (!unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_11CB, 0))
                    {
                        if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
                        {
                            if (!func_154())
                            {
                                func_18();
                                if (unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203()) || unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203()))
                                {
                                    if (func_20(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), 3, 0, 0) || func_19(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), 0))
                                    {
                                        if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) < 4)
                                        {
                                            unk_0x63373610A759665B(unk_0x7C7787D2D7139A85(), 36, (unk_0xE9FCDBCA711F83E7(4) - unk_0xE9FCDBCA711F83E7(unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()))));
                                        }
                                        else
                                        {
                                            unk_0xD8FD38EC85BADBED(unk_0x7C7787D2D7139A85());
                                        }
                                    }
                                    else if (!func_17(&(Local_140.f_3)))
                                    {
                                        func_14(&(Local_140.f_3));
                                    }
                                    else if (func_11(&(Local_140.f_3)) > 20f || Local_140.f_B1)
                                    {
                                        if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) < 4)
                                        {
                                            unk_0x63373610A759665B(unk_0x7C7787D2D7139A85(), 36, (unk_0xE9FCDBCA711F83E7(4) - unk_0xE9FCDBCA711F83E7(unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()))));
                                        }
                                        else
                                        {
                                            unk_0xD8FD38EC85BADBED(unk_0x7C7787D2D7139A85());
                                        }
                                    }
                                }
                                else if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) < 4)
                                {
                                    unk_0x63373610A759665B(unk_0x7C7787D2D7139A85(), 36, (unk_0xE9FCDBCA711F83E7(4) - unk_0xE9FCDBCA711F83E7(unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()))));
                                }
                                else
                                {
                                    unk_0xD8FD38EC85BADBED(unk_0x7C7787D2D7139A85());
                                }
                            }
                            else
                            {
                                if (Global_26A0A9.f_1895)
                                {
                                    bLocal_142 = false;
                                    Global_26A0A9.f_1895 = 0;
                                }
                                if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) == 0 && !iLocal_146)
                                {
                                    iLocal_146 = 1;
                                }
                                if (Global_40001.f_53C4 && !func_9(unk_0x7C7787D2D7139A85()))
                                {
                                    if ((!bLocal_142 && unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) != 0) && iLocal_146)
                                    {
                                        unk_0xE643698D7D91CE86(unk_0x7C7787D2D7139A85());
                                        unk_0x60F310C72311BCA8(0);
                                        iLocal_145 = 1;
                                    }
                                    if (func_2() && !bLocal_142)
                                    {
                                        bLocal_142 = true;
                                        unk_0x60F310C72311BCA8(5);
                                    }
                                }
                                if (func_2() && !bLocal_142)
                                {
                                    bLocal_142 = true;
                                }
                                if (bLocal_142)
                                {
                                    if (bLocal_143)
                                    {
                                        if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) < 2)
                                        {
                                            unk_0x63373610A759665B(unk_0x7C7787D2D7139A85(), 36, (unk_0xE9FCDBCA711F83E7(2) - unk_0xE9FCDBCA711F83E7(unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()))));
                                        }
                                        else
                                        {
                                            unk_0xD8FD38EC85BADBED(unk_0x7C7787D2D7139A85());
                                        }
                                    }
                                    else if (bLocal_144)
                                    {
                                        if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) < 3)
                                        {
                                            unk_0x63373610A759665B(unk_0x7C7787D2D7139A85(), 36, (unk_0xE9FCDBCA711F83E7(3) - unk_0xE9FCDBCA711F83E7(unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()))));
                                        }
                                        else
                                        {
                                            unk_0xD8FD38EC85BADBED(unk_0x7C7787D2D7139A85());
                                        }
                                    }
                                    else if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) < Global_40001.f_5385)
                                    {
                                        unk_0x63373610A759665B(unk_0x7C7787D2D7139A85(), 36, (unk_0xE9FCDBCA711F83E7(Global_40001.f_5385) - unk_0xE9FCDBCA711F83E7(unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()))));
                                    }
                                    else
                                    {
                                        unk_0xD8FD38EC85BADBED(unk_0x7C7787D2D7139A85());
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (func_17(&(Local_140.f_3)))
                            {
                                func_1(&(Local_140.f_3));
                            }
                            if (Local_140.f_B1)
                            {
                                Local_140.f_B1 = 0;
                            }
                            func_18();
                        }
                    }
                    else
                    {
                        if (!Local_140.f_B1)
                        {
                            Local_140.f_B1 = 1;
                        }
                        func_18();
                    }
                }
                else
                {
                    if (Local_140.f_B1)
                    {
                        Local_140.f_B1 = 0;
                    }
                    func_18();
                }
            }
            else
            {
                func_18();
            }
        }
        else
        {
            func_180();
        }
    }
}

void func_1(var uParam0)//Position - 0x4E9
{
    uParam0->f_1 = 0f;
    uParam0->f_2 = 0f;
    *uParam0 = 0;
}

int func_2()//Position - 0x4FF
{
    int iVar0;
    
    if (((func_20(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), 3, 1000, 0) || func_19(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), 1000)) && !func_8()) && !func_21(unk_0x7C7787D2D7139A85()))
    {
        if (Global_40001.f_537F)
        {
            return 0;
        }
        if (((unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), -2346.975f, 3259.757f, 31.81074f, -2349.507f, 3261.232f, 33.81074f, 9.5625f, 0, 1, 0) || unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), -2054.865f, 3240.977f, 30.51001f, -2056.552f, 3237.846f, 32.50156f, 4.0625f, 0, 1, 0)) || unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), -1792.908f, 3091.104f, 31.81257f, -1812.707f, 3102.736f, 39.46682f, 18.187f, 0, 1, 0)) || func_7(unk_0x7C7787D2D7139A85()))
        {
            bLocal_143 = false;
            bLocal_144 = false;
            return 1;
        }
        if (Global_40001.f_5386)
        {
            if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
            {
                iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
                if (unk_0x0064CADA7C0E1595(iVar0))
                {
                    if (func_6(iVar0))
                    {
                        if ((!func_5(iVar0, 1) && !func_4(iVar0)) && !func_3(iVar0))
                        {
                            bLocal_143 = true;
                            bLocal_144 = false;
                            return 1;
                        }
                    }
                }
            }
        }
        else if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
        {
            if (unk_0x0064CADA7C0E1595(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0)))
            {
                if ((!func_5(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0), 1) && !func_4(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0))) && !func_3(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0)))
                {
                    bLocal_143 = true;
                    bLocal_144 = false;
                    return 1;
                }
            }
        }
        if (Global_26A0A9.f_1893 || Global_26A0A9.f_1894)
        {
            if (Global_26A0A9.f_1894)
            {
                bLocal_143 = false;
                bLocal_144 = true;
            }
            else
            {
                bLocal_143 = true;
                bLocal_144 = false;
            }
            Global_26A0A9.f_1893 = 0;
            Global_26A0A9.f_1894 = 0;
            return 1;
        }
    }
    return 0;
}

int func_3(int iParam0)//Position - 0x719
{
    int iVar0;
    
    if (unk_0xD960230552BC4165(iParam0, 0))
    {
        if (unk_0xE9FEBBC43DAFBBAC("MPBitset", 3) && unk_0x145DAE1A4D0EA05D(iParam0, "MPBitset"))
        {
            iVar0 = unk_0x7CE457B32235D9D1(iParam0, "MPBitset");
            if (unk_0xA2BC31158C8CEFD2(iVar0, 17))
            {
                return 1;
            }
        }
    }
    return 0;
}

int func_4(int iParam0)//Position - 0x75C
{
    if ((unk_0xE9FEBBC43DAFBBAC("CreatedByPegasus", 2) && unk_0x145DAE1A4D0EA05D(iParam0, "CreatedByPegasus")) && unk_0x607A7A0DD7EB666D(iParam0, "CreatedByPegasus"))
    {
        return 1;
    }
    return 0;
}

int func_5(int iParam0, bool bParam1)//Position - 0x790
{
    if (Global_12B21)
    {
        if (unk_0xD4B321D9096B01FC(iParam0) && (!bParam1 || unk_0xD960230552BC4165(iParam0, 0)))
        {
            if (unk_0x145DAE1A4D0EA05D(iParam0, "Player_Vehicle"))
            {
                return 1;
            }
        }
    }
    return 0;
}

int func_6(int iParam0)//Position - 0x7CE
{
    int iVar0;
    
    iVar0 = unk_0x7F375072508F738F(iParam0);
    switch (iVar0)
    {
        case joaat("barracks"):
        case joaat("barracks2"):
        case joaat("barracks3"):
        case joaat("besra"):
        case joaat("buzzard"):
        case joaat("buzzard2"):
        case joaat("cargobob"):
        case joaat("crusader"):
        case 1938952078:
        case joaat("lazer"):
        case joaat("rhino"):
        case joaat("titan"):
            return 1;
        
        default:
    }
    return 0;
}

int func_7(int iParam0)//Position - 0x832
{
    int iVar0;
    int iVar1;
    
    iVar0 = unk_0x1B15167A6E6F7820(unk_0x23625FE58BACEBFD(iParam0));
    iVar1 = unk_0x2BA8B1187A604700(-2346.975f, 3259.757f, 31.81074f, "v_tower");
    if (unk_0x61837007ACF2F2C2(iVar0) && unk_0x61837007ACF2F2C2(iVar1))
    {
        if ((iVar0 == iVar1 && !unk_0x42A24CB7B8A08E11(unk_0x23625FE58BACEBFD(iParam0), -2345.4f, 3270.1f, 31.81f, -2347.9f, 3265.8f, 34.811f, 8.25f, 0, 1, 0)) && !unk_0x42A24CB7B8A08E11(unk_0x23625FE58BACEBFD(iParam0), -2349.3f, 3266.7f, 31.81f, -2350f, 3265.5f, 34.811f, 5.15f, 0, 1, 0))
        {
            return 1;
        }
    }
    return 0;
}

bool func_8()//Position - 0x8EB
{
    return Global_440000 == 3;
}

int func_9(int iParam0)//Position - 0x8F9
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        return func_10(iParam0, 9);
    }
    return 0;
}

bool func_10(int iParam0, int iParam1)//Position - 0x917
{
    return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_B.f_4, iParam1);
}

float func_11(int iParam0)//Position - 0x932
{
    if (func_17(iParam0))
    {
        if (func_13(iParam0))
        {
            return iParam0->f_2;
        }
        else
        {
            return (func_12(unk_0xA2BC31158C8CEFD2(*iParam0, 4)) - iParam0->f_1);
        }
    }
    return iParam0->f_1;
}

float func_12(bool bParam0)//Position - 0x971
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

bool func_13(var uParam0)//Position - 0x9C9
{
    return unk_0xA2BC31158C8CEFD2(*uParam0, 2);
}

void func_14(int iParam0)//Position - 0x9D9
{
    if (!func_17(iParam0))
    {
        func_15(iParam0);
    }
}

void func_15(int iParam0)//Position - 0x9F1
{
    func_16(iParam0, 0f);
}

void func_16(int iParam0, float fParam1)//Position - 0xA00
{
    iParam0->f_1 = (func_12(unk_0xA2BC31158C8CEFD2(*iParam0, 4)) - fParam1);
    unk_0xA1E7A40E1F56E511(iParam0, 1);
    unk_0x3B76114EC84D5812(iParam0, 2);
    iParam0->f_2 = 0f;
}

bool func_17(var uParam0)//Position - 0xA2E
{
    return unk_0xA2BC31158C8CEFD2(*uParam0, 1);
}

void func_18()//Position - 0xA3E
{
    if (iLocal_145)
    {
        unk_0x60F310C72311BCA8(5);
    }
    Global_26A0A9.f_1893 = 0;
    Global_26A0A9.f_1894 = 0;
    iLocal_145 = 0;
    bLocal_142 = false;
    bLocal_143 = false;
    iLocal_146 = 0;
}

int func_19(vector3 vParam0, int iParam1)//Position - 0xA71
{
    vector3 vVar0[15];
    vector3 vVar1[15];
    float fVar2[15];
    int iVar3;
    int iVar4;
    int iVar5;
    
    iVar5 = 0;
    vVar0[0 /*3*/] = { -1877.436f, 2783.151f, 31.80618f };
    vVar1[0 /*3*/] = { -1797.873f, 2924.37f, (307.1106f + IntToFloat(iParam1)) };
    fVar2[0] = 88f;
    vVar0[1 /*3*/] = { -1761.116f, 2834.651f, 31.80622f };
    vVar1[1 /*3*/] = { -1720.887f, 2906.419f, (281.8062f + IntToFloat(iParam1)) };
    fVar2[1] = 88f;
    vVar0[2 /*3*/] = { -1761.493f, 2817.68f, 32.37125f };
    vVar1[2 /*3*/] = { -1769.704f, 2913.734f, (281.8066f + IntToFloat(iParam1)) };
    fVar2[2] = 88f;
    vVar0[3 /*3*/] = { -1879.297f, 2772.653f, 29.57795f };
    vVar1[3 /*3*/] = { -1864.521f, 2825.472f, (281.8062f + IntToFloat(iParam1)) };
    fVar2[3] = 88f;
    vVar0[4 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
    vVar1[4 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
    fVar2[4] = 9f;
    vVar0[5 /*3*/] = { -2676.74f, 3366.988f, 29.92394f };
    vVar1[5 /*3*/] = { -2744.79f, 3340.347f, (37.80379f + IntToFloat(iParam1)) };
    fVar2[5] = 9.5f;
    vVar0[6 /*3*/] = { -2807.397f, 3264.226f, 29.92764f };
    vVar1[6 /*3*/] = { -2879.805f, 3309.01f, (37.57864f + IntToFloat(iParam1)) };
    fVar2[6] = 9.5f;
    vVar0[7 /*3*/] = { -2808.236f, 3264.634f, 29.92764f };
    vVar1[7 /*3*/] = { -2747.55f, 3187.8f, (37.45682f + IntToFloat(iParam1)) };
    fVar2[7] = 9.5f;
    vVar0[8 /*3*/] = { -2530.996f, 3064.151f, 29.71081f };
    vVar1[8 /*3*/] = { -2748.557f, 3189.939f, (37.45682f + IntToFloat(iParam1)) };
    fVar2[8] = 9.5f;
    vVar0[9 /*3*/] = { -2533.902f, 3062.491f, 29.70715f };
    vVar1[9 /*3*/] = { -2520.674f, 2996.817f, (37.45715f + IntToFloat(iParam1)) };
    fVar2[9] = 9.5f;
    vVar0[10 /*3*/] = { -2500.716f, 2927.103f, 29.45663f };
    vVar1[10 /*3*/] = { -2445.696f, 2896.657f, (37.68009f + IntToFloat(iParam1)) };
    fVar2[10] = 9.5f;
    vVar0[11 /*3*/] = { -2020.543f, 2810.747f, 29.45658f };
    vVar1[11 /*3*/] = { -1927.949f, 2785.779f, (37.67057f + IntToFloat(iParam1)) };
    fVar2[11] = 9.5f;
    vVar0[12 /*3*/] = { -2261.899f, 3376.549f, 29.77859f };
    vVar1[12 /*3*/] = { -2141.067f, 3376.773f, (37.90019f + IntToFloat(iParam1)) };
    fVar2[12] = 9.5f;
    iVar3 = 13;
    iVar4 = 0;
    while (iVar4 < iVar3)
    {
        if (unk_0xD36AE666DF05C607(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, true))
        {
            return 1;
        }
        iVar4++;
    }
    return 0;
}

int func_20(vector3 vParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xDCF
{
    vector3 vVar0[15];
    vector3 vVar1[15];
    float fVar2[15];
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    
    iVar5 = 0;
    switch (iParam1)
    {
        case 1:
            vVar0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
            vVar1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
            fVar2[0] = 171.25f;
            vVar0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
            vVar1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
            fVar2[1] = 132f;
            vVar0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
            vVar1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
            fVar2[2] = 132f;
            iVar3 = 3;
            break;
        
        case 2:
            vVar0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
            vVar1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
            fVar2[0] = 247f;
            vVar0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
            vVar1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
            fVar2[1] = 149f;
            vVar0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
            vVar1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
            fVar2[2] = 185.5f;
            vVar0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
            vVar1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
            fVar2[3] = 250f;
            vVar0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
            vVar1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
            fVar2[4] = 193.5f;
            vVar0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
            vVar1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
            fVar2[5] = 234.5f;
            vVar0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
            vVar1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
            fVar2[6] = 16f;
            vVar0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
            vVar1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
            fVar2[7] = 80f;
            vVar0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
            vVar1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
            fVar2[8] = 142f;
            vVar0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
            vVar1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
            fVar2[9] = 30.75f;
            vVar0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
            vVar1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
            fVar2[10] = 150f;
            vVar0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
            vVar1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
            fVar2[11] = 29.25f;
            vVar0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
            vVar1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
            fVar2[12] = 43f;
            iVar3 = 13;
            break;
        
        case 3:
            vVar0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
            vVar1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
            fVar2[0] = 255f;
            vVar0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
            vVar1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
            fVar2[1] = 180f;
            vVar0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
            vVar1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
            fVar2[2] = 205f;
            vVar0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
            vVar1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
            fVar2[3] = 86.25f;
            vVar0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
            vVar1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
            fVar2[4] = 150.5f;
            vVar0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
            vVar1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
            fVar2[5] = 140.5f;
            vVar0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
            vVar1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
            fVar2[6] = 90f;
            vVar0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
            vVar1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
            fVar2[7] = 100f;
            vVar0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
            vVar1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
            fVar2[8] = 248.75f;
            vVar0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
            vVar1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
            fVar2[9] = 128f;
            vVar0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
            vVar1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
            fVar2[10] = 140f;
            vVar0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
            vVar1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
            fVar2[11] = 16f;
            vVar0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
            vVar1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
            fVar2[12] = 214.25f;
            vVar0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
            vVar1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
            fVar2[13] = 65.75f;
            if (bParam3)
            {
                iVar6 = iParam2;
            }
            else
            {
                iVar6 = 0;
            }
            vVar1[9 /*3*/].f_2 = (vVar1[9 /*3*/].f_2 + IntToFloat(iVar6));
            vVar1[10 /*3*/].f_2 = (vVar1[10 /*3*/].f_2 + IntToFloat(iVar6));
            vVar1[11 /*3*/].f_2 = (vVar1[11 /*3*/].f_2 + IntToFloat(iVar6));
            vVar1[12 /*3*/].f_2 = (vVar1[12 /*3*/].f_2 + IntToFloat(iVar6));
            vVar1[13 /*3*/].f_2 = (vVar1[13 /*3*/].f_2 + IntToFloat(iVar6));
            iVar3 = 14;
            break;
        
        case 4:
            vVar0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
            vVar1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
            fVar2[0] = 114f;
            vVar0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
            vVar1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
            fVar2[1] = 88.5f;
            vVar0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
            vVar1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
            fVar2[2] = 133.25f;
            vVar0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
            vVar1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
            fVar2[3] = 104.5f;
            vVar0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
            vVar1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
            fVar2[4] = 121.75f;
            vVar0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
            vVar1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
            fVar2[5] = 84.5f;
            vVar0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
            vVar1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
            fVar2[6] = 103.75f;
            vVar0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
            vVar1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
            fVar2[7] = 104.25f;
            vVar0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
            vVar1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
            fVar2[8] = 91f;
            vVar0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
            vVar1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
            fVar2[9] = 51.25f;
            iVar3 = 10;
            break;
        
        case 5:
            vVar0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
            vVar1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
            fVar2[0] = 45.75f;
            vVar0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
            vVar1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
            fVar2[1] = 99f;
            vVar0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
            vVar1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
            fVar2[2] = 81.5f;
            iVar3 = 3;
            break;
        
        case 6:
            vVar0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
            vVar1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
            fVar2[0] = 120f;
            vVar0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
            vVar1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
            fVar2[1] = 170f;
            vVar0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
            vVar1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
            fVar2[2] = 12.5f;
            vVar0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
            vVar1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
            fVar2[3] = 9.75f;
            iVar3 = 4;
            break;
        
        case 7:
            vVar0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
            vVar1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
            fVar2[0] = 162f;
            vVar0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
            vVar1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
            fVar2[1] = 124f;
            vVar0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
            vVar1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
            fVar2[2] = 55f;
            vVar0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
            vVar1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
            fVar2[3] = 142f;
            iVar3 = 4;
            break;
        
        case 8:
            vVar0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
            vVar1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
            fVar2[0] = 7.75f;
            vVar0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
            vVar1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
            fVar2[1] = 14.75f;
            vVar0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
            vVar1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
            fVar2[2] = 31.5f;
            vVar0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
            vVar1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
            fVar2[3] = 30.5f;
            vVar0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
            vVar1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
            fVar2[4] = 6.75f;
            iVar3 = 5;
            break;
    }
    iVar4 = 0;
    while (iVar4 < iVar3)
    {
        if (unk_0xD36AE666DF05C607(vParam0, vVar0[iVar4 /*3*/], vVar1[iVar4 /*3*/], fVar2[iVar4], iVar5, true))
        {
            return 1;
        }
        iVar4++;
    }
    return 0;
}

int func_21(int iParam0)//Position - 0x1B23
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

bool func_22(int iParam0)//Position - 0x1B8F
{
    return func_23(func_24(iParam0));
}

int func_23(int iParam0)//Position - 0x1BA1
{
    switch (iParam0)
    {
        case 167:
        case 169:
        case 168:
            return 1;
        
        default:
    }
    return 0;
}

int func_24(int iParam0)//Position - 0x1BC7
{
    if (func_25(iParam0, 0))
    {
        return Global_18DB1B[iParam0 /*614*/].f_B.f_21;
    }
    return -1;
}

int func_25(int iParam0, int iParam1)//Position - 0x1BEA
{
    if (Global_18DB1B[iParam0 /*614*/].f_B.f_21 != -1 || (iParam1 && Global_18DB1B[iParam0 /*614*/].f_B.f_20 != -1))
    {
        return 1;
    }
    return 0;
}

int func_26(int iParam0, int iParam1)//Position - 0x1C25
{
    if (Global_18DB1B[iParam0 /*614*/] == iParam1)
    {
        return func_27(iParam0);
    }
    return 0;
}

int func_27(int iParam0)//Position - 0x1C45
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iVar0 /*614*/].f_1, 0);
    }
    return 0;
}

int func_28(int iParam0)//Position - 0x1C6B
{
    switch (iParam0)
    {
        case 136:
        case 144:
        case 129:
            return 1;
        
        case 141:
            if (func_27(unk_0x7C7787D2D7139A85()))
            {
                return 1;
            }
            break;
    }
    return 0;
}

int func_29(int iParam0)//Position - 0x1CA9
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        return Global_18DB1B[iVar0 /*614*/];
    }
    return -1;
}

int func_30(int iParam0)//Position - 0x1CC8
{
    if (func_32(iParam0, 0))
    {
        return 1;
    }
    if (func_31())
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

bool func_31()//Position - 0x1D0A
{
    return unk_0xA2BC31158C8CEFD2(Global_240006, 3);
}

bool func_32(int iParam0, int iParam1)//Position - 0x1D1B
{
    bool bVar0;
    
    if (iParam0 == unk_0x7C7787D2D7139A85())
    {
        bVar0 = func_33(-1, 0) == 8;
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

int func_33(int iParam0, bool bParam1)//Position - 0x1D66
{
    int iVar0;
    int iVar1;
    
    iVar1 = iParam0;
    if (iVar1 == -1)
    {
        iVar1 = func_34();
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

int func_34()//Position - 0x1DA7
{
    return Global_1407E9;
}

bool func_35(int iParam0)//Position - 0x1DB3
{
    return unk_0xA2BC31158C8CEFD2(Global_180458, iParam0);
}

int func_36(int iParam0)//Position - 0x1DC5
{
    if (iParam0 != func_38() && func_37(iParam0, 1, 1))
    {
        return unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_135, 3);
    }
    return 0;
}

int func_37(int iParam0, bool bParam1, bool bParam2)//Position - 0x1DF9
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

int func_38()//Position - 0x1E43
{
    return -1;
}

int func_39()//Position - 0x1E4C
{
    int iVar0;
    
    iVar0 = 0;
    if (unk_0x722688699565161D())
    {
        if (func_126())
        {
            iVar0 = 1;
        }
    }
    if (func_40())
    {
        iVar0 = 1;
    }
    return iVar0;
}

int func_40()//Position - 0x1E74
{
    int iVar0;
    
    switch (Local_140.f_6)
    {
        case 0:
            func_125();
            if (((((((func_122(unk_0x7C7787D2D7139A85(), 1, 0) && func_121()) || func_24(unk_0x7C7787D2D7139A85()) == 159) || func_24(unk_0x7C7787D2D7139A85()) == 225) || func_24(unk_0x7C7787D2D7139A85()) == 233) || func_29(unk_0x7C7787D2D7139A85()) == 236) || Global_180607) || (unk_0xA51CBC95AC3A4B14() && func_8()))
            {
                unk_0x0A43D5D11052D038(joaat("rhino"), 1);
            }
            func_119(&(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/]), 1);
            Local_140.f_B0 = 1;
            Local_140.f_6 = 1;
            break;
        
        case 1:
            if (func_118())
            {
                func_119(&(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/]), 2);
                Local_140.f_6 = 2;
            }
            break;
        
        case 2:
            if (func_117(Local_115.f_14, 1))
            {
                Local_140.f_6 = 3;
            }
            break;
        
        case 3:
            if ((!func_122(unk_0x7C7787D2D7139A85(), 1, 0) && !func_121()) && !func_154())
            {
                iVar0 = 0;
                while (iVar0 < 2)
                {
                    func_111(iVar0);
                    iVar0++;
                }
            }
            if (unk_0x393E9918BC37548A())
            {
                if ((((func_109() && !func_122(unk_0x7C7787D2D7139A85(), 1, 0)) && !func_121()) && !unk_0xA51CBC95AC3A4B14()) && func_107(unk_0x7C7787D2D7139A85()) != 6)
                {
                    func_48();
                }
            }
            iVar0 = 0;
            while (iVar0 < 3)
            {
                func_41(iVar0);
                iVar0++;
            }
            if ((((func_24(unk_0x7C7787D2D7139A85()) == 225 || func_24(unk_0x7C7787D2D7139A85()) == 233) || func_29(unk_0x7C7787D2D7139A85()) == 236) || Global_180607) || (unk_0xA51CBC95AC3A4B14() && func_8()))
            {
                unk_0x0A43D5D11052D038(joaat("rhino"), 1);
            }
            if (SYSTEM::VDIST2(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
            {
                Local_140.f_6 = 4;
            }
            break;
        
        case 4:
            if (((((((func_122(unk_0x7C7787D2D7139A85(), 1, 0) && func_121()) || func_24(unk_0x7C7787D2D7139A85()) == 159) || func_24(unk_0x7C7787D2D7139A85()) == 225) || func_24(unk_0x7C7787D2D7139A85()) == 233) || func_29(unk_0x7C7787D2D7139A85()) == 236) || Global_180607) || (unk_0xA51CBC95AC3A4B14() && func_8()))
            {
                unk_0x0A43D5D11052D038(joaat("rhino"), 0);
            }
            return 1;
            break;
    }
    return 0;
}

void func_41(int iParam0)//Position - 0x211C
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    
    if (Local_115.f_3[iParam0 /*5*/].f_2 > 2 && unk_0x8A7BBB98FFB32893(Local_115.f_3[iParam0 /*5*/]))
    {
        if (unk_0xF4B969E0807E76C7(unk_0x40237B62400B4BCC(Local_115.f_3[iParam0 /*5*/]), 0))
        {
            if (unk_0x39A01A052D9B5FF0(Local_140.f_AC[iParam0]))
            {
                unk_0xAA2276003B2ADF1B(&(Local_140.f_AC[iParam0]));
            }
        }
        else if (!unk_0x39A01A052D9B5FF0(Local_140.f_AC[iParam0]) && unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) >= 2)
        {
            Local_140.f_AC[iParam0] = unk_0xADA89D4F1A58FCBA(unk_0xAEA6D4EC961DFA03(Local_115.f_3[iParam0 /*5*/]));
            unk_0x088577CF98F96D05(Local_140.f_AC[iParam0], 1);
        }
    }
    else if (unk_0x39A01A052D9B5FF0(Local_140.f_AC[iParam0]))
    {
        unk_0xAA2276003B2ADF1B(&(Local_140.f_AC[iParam0]));
    }
    switch (Local_115.f_3[iParam0 /*5*/].f_2)
    {
        case 0:
            if (!func_47(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_4[iParam0], 16))
            {
                Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_4[iParam0] = 0;
                func_46(&(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_4[iParam0]), 16);
            }
            break;
        
        case 1:
            if (!func_47(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_4[iParam0], 1))
            {
                if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
                {
                    if (unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203()) || unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203()))
                    {
                        if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) >= 4)
                        {
                            if (func_20(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), 3, 500, 0))
                            {
                                func_46(&(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_4[iParam0]), 1);
                            }
                        }
                    }
                }
            }
            break;
        
        case 2:
            break;
        
        case 3:
            if (!func_47(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_4[iParam0], 2))
            {
                if (func_45(iParam0))
                {
                    iVar2 = unk_0x23625FE58BACEBFD(Local_115.f_3[iParam0 /*5*/].f_4);
                    iVar0 = unk_0x70D3AC024E0A9837(Local_115.f_3[iParam0 /*5*/].f_1);
                    iVar1 = unk_0x40237B62400B4BCC(Local_115.f_3[iParam0 /*5*/]);
                    if (!unk_0xF4B969E0807E76C7(iVar2, 0))
                    {
                        if (unk_0x0B8262712AD6841C(iVar2))
                        {
                            iVar3 = unk_0x4D57D3E5ECE15A41(iVar2, 0);
                            if ((!unk_0xF4B969E0807E76C7(iVar0, 0) && !unk_0xF4B969E0807E76C7(iVar1, 0)) && !unk_0xF4B969E0807E76C7(iVar3, 0))
                            {
                                unk_0x2D905813616A8B4A(iVar0, iVar1, iVar3, iVar2, unk_0xACE5E491FC1B0D37(iVar2, 1), 6, 70f, -1f, 30f, 500, 50, 1);
                                unk_0x10C684A48D05C17B(iVar0, joaat("vehicle_weapon_space_rocket"));
                                unk_0x39E65F0E9CA381F7(iVar0, false);
                            }
                        }
                    }
                }
                if (func_44(iParam0))
                {
                    iVar0 = unk_0x70D3AC024E0A9837(Local_115.f_3[iParam0 /*5*/].f_1);
                    iVar2 = unk_0x23625FE58BACEBFD(Local_115.f_3[iParam0 /*5*/].f_4);
                    if (!unk_0xF4B969E0807E76C7(iVar2, 0))
                    {
                        if (unk_0x0B8262712AD6841C(iVar2))
                        {
                            unk_0x23969E4F5A20CD10(iVar0, iVar2, unk_0xACE5E491FC1B0D37(iVar2, 1));
                        }
                    }
                }
                if (func_43(iParam0, 6))
                {
                    func_46(&(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_4[iParam0]), 2);
                }
            }
            break;
        
        case 4:
            break;
        
        case 5:
            if (!func_47(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_4[iParam0], 8))
            {
                if (func_45(iParam0))
                {
                    iVar0 = unk_0x70D3AC024E0A9837(Local_115.f_3[iParam0 /*5*/].f_1);
                    iVar1 = unk_0x40237B62400B4BCC(Local_115.f_3[iParam0 /*5*/]);
                    if (!unk_0xF4B969E0807E76C7(iVar0, 0) && !unk_0xF4B969E0807E76C7(iVar1, 0))
                    {
                        unk_0x2D905813616A8B4A(iVar0, iVar1, 0, 0, -2076.374f, 3112.294f, 33.13584f, 9, 70f, -1f, 30f, 500, 50, 1);
                    }
                }
                if (func_43(iParam0, 9))
                {
                    func_46(&(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_4[iParam0]), 8);
                }
            }
            break;
        
        case 6:
            if (unk_0x9C625F4590C97F13(Local_115.f_3[iParam0 /*5*/]) || unk_0x9C625F4590C97F13(Local_115.f_3[iParam0 /*5*/].f_1))
            {
                if (!unk_0x93086679C0E859D8(unk_0xACE5E491FC1B0D37(unk_0xAEA6D4EC961DFA03(Local_115.f_3[iParam0 /*5*/]), 0), 10f) && !unk_0xEBEE4F1E646710F5(unk_0xACE5E491FC1B0D37(unk_0xAEA6D4EC961DFA03(Local_115.f_3[iParam0 /*5*/]), 0), 10f))
                {
                    if (unk_0x8A7BBB98FFB32893(Local_115.f_3[iParam0 /*5*/].f_1) && unk_0xF42AC9E0924DC59B(Local_115.f_3[iParam0 /*5*/].f_1))
                    {
                        iVar4 = unk_0xAEA6D4EC961DFA03(Local_115.f_3[iParam0 /*5*/].f_1);
                        unk_0x55A0904E82955EC9(&iVar4);
                    }
                    if (unk_0x8A7BBB98FFB32893(Local_115.f_3[iParam0 /*5*/]) && unk_0xF42AC9E0924DC59B(Local_115.f_3[iParam0 /*5*/]))
                    {
                        iVar5 = unk_0xAEA6D4EC961DFA03(Local_115.f_3[iParam0 /*5*/]);
                        unk_0x55A0904E82955EC9(&iVar5);
                    }
                }
            }
            else if (func_47(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_4[iParam0], 16))
            {
                func_42(&(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_4[iParam0]), 16);
            }
            break;
    }
}

void func_42(var uParam0, int iParam1)//Position - 0x25A9
{
    *uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_43(int iParam0, int iParam1)//Position - 0x25BE
{
    int iVar0;
    
    if (!unk_0x8A7BBB98FFB32893(Local_115.f_3[iParam0 /*5*/]))
    {
        return 1;
    }
    iVar0 = unk_0x40237B62400B4BCC(Local_115.f_3[iParam0 /*5*/]);
    if (unk_0xF4B969E0807E76C7(iVar0, 0))
    {
        return 1;
    }
    if (unk_0xAE30876E35B7D0C2(iVar0) != iParam1)
    {
        return 0;
    }
    return 1;
}

int func_44(int iParam0)//Position - 0x2606
{
    int iVar0;
    
    if (!unk_0x8A7BBB98FFB32893(Local_115.f_3[iParam0 /*5*/].f_1))
    {
        return 0;
    }
    iVar0 = unk_0x70D3AC024E0A9837(Local_115.f_3[iParam0 /*5*/].f_1);
    if (unk_0xF4B969E0807E76C7(iVar0, 0))
    {
        return 0;
    }
    if (!unk_0x77FF1FAF6F41CA71(iVar0))
    {
        return 0;
    }
    return 1;
}

int func_45(int iParam0)//Position - 0x2651
{
    int iVar0;
    
    if (!unk_0x8A7BBB98FFB32893(Local_115.f_3[iParam0 /*5*/]))
    {
        return 0;
    }
    iVar0 = unk_0x40237B62400B4BCC(Local_115.f_3[iParam0 /*5*/]);
    if (unk_0xF4B969E0807E76C7(iVar0, 0))
    {
        return 0;
    }
    if (!unk_0x77FF1FAF6F41CA71(iVar0))
    {
        return 0;
    }
    return 1;
}

void func_46(var uParam0, int iParam1)//Position - 0x2698
{
    *uParam0 = (*uParam0 || iParam1);
}

bool func_47(var uParam0, int iParam1)//Position - 0x26A9
{
    return (uParam0 && iParam1) != 0;
}

void func_48()//Position - 0x26B8
{
    bool bVar0;
    bool bVar1;
    vector3 vVar2;
    struct<6> Var3;
    
    func_106();
    func_101();
    vVar2 = { vLocal_114 };
    if (((func_20(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), 3, 1000, 0) || func_19(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), 1000)) || func_99(unk_0x0FA8183DAD2B3203())) && func_98(unk_0x0FA8183DAD2B3203()))
    {
        bVar0 = true;
    }
    else
    {
        Local_140.f_B2 = 0;
    }
    if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
    {
        bVar1 = true;
    }
    else
    {
        Local_140.f_B3 = 0;
    }
    if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
    {
        vVar2 = { -1592.1f, 2797.2f, 17.1f };
        Local_140.f_B5 = 1;
    }
    else if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
    {
        vVar2 = { -2303.9f, 3388f, 31.3f };
        Local_140.f_B5 = 2;
    }
    if (func_96(bVar0, bVar1))
    {
        func_94();
        if (!func_93())
        {
            Global_1801E3 = 1;
            func_92(&(Local_140.f_7), 2);
            func_91(&(Local_140.f_7), 2);
            func_90(&(Local_140.f_7), 2, 0, "AIRMECH", 0, 1);
            func_89(&(Local_140.f_7), 2, vVar2);
            Global_4E7E.f_A2 = { vVar2 };
            Var3 = { func_88() };
            if (!unk_0x9591DE0F00127F2A(&Var3))
            {
                if (func_67(&(Local_140.f_7), "SMGFZAU", &Var3, 7, 0, 0, 0))
                {
                    func_49(bVar0, bVar1);
                }
            }
        }
    }
    else if (!func_93())
    {
        if (!unk_0xA2BC31158C8CEFD2(Local_140.f_B6, 2))
        {
            Global_1801E3 = 0;
            func_92(&(Local_140.f_7), 2);
            func_91(&(Local_140.f_7), 2);
            unk_0xA1E7A40E1F56E511(&(Local_140.f_B6), 2);
        }
    }
}

void func_49(bool bParam0, bool bParam1)//Position - 0x28EE
{
    if (bParam0)
    {
        if (!func_64(16000, -1, -1))
        {
            func_63(16000, 1, -1, 1);
            if (Global_26A0A9.f_189A)
            {
                if (func_57())
                {
                    func_55("AB_ENTRY_HT");
                    Local_140.f_B4 = 1;
                }
            }
            else if (func_57())
            {
                func_54("AB_ENTRY_HT", -1);
            }
        }
        else if (!func_64(16001, -1, -1))
        {
            func_63(16001, 1, -1, 1);
            if (Global_26A0A9.f_189A)
            {
                if (func_57())
                {
                    func_55("AB_ENTRY_HT");
                    Local_140.f_B4 = 1;
                }
            }
            else if (func_57())
            {
                func_54("AB_ENTRY_HT", -1);
            }
        }
        Local_140.f_B2 = 1;
    }
    else if (bParam1)
    {
        if (!func_64(15999, -1, -1))
        {
            func_63(15999, 1, -1, 1);
            if (Global_26A0A9.f_189A)
            {
                if (func_57())
                {
                    func_55("AB_ENTRY_HT");
                    Local_140.f_B4 = 1;
                }
            }
            else if (func_57())
            {
                func_54("AB_ENTRY_HT", -1);
            }
        }
        else if (Local_140.f_B5 == 1)
        {
            if (!func_64(16002, -1, -1))
            {
                func_63(16002, 1, -1, 1);
                if (Global_26A0A9.f_189A)
                {
                    if (func_57())
                    {
                        func_55("AB_ENTRY_HT");
                        Local_140.f_B4 = 1;
                    }
                }
                else if (func_57())
                {
                    func_54("AB_ENTRY_HT", -1);
                }
            }
        }
        else if (Local_140.f_B5 == 2)
        {
            if (func_51(18097, -1, -1) == 0)
            {
                func_50(18097, 1, -1, 1);
                if (Global_26A0A9.f_189A)
                {
                    if (func_57())
                    {
                        func_55("AB_ENTRY_HT");
                        Local_140.f_B4 = 1;
                    }
                }
                else if (func_57())
                {
                    func_54("AB_ENTRY_HT", -1);
                }
            }
        }
        Local_140.f_B3 = 1;
        Local_140.f_B5 = 0;
    }
    if (unk_0xA2BC31158C8CEFD2(Local_140.f_B6, 2))
    {
        unk_0x3B76114EC84D5812(&(Local_140.f_B6), 2);
    }
}

var func_50(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2AAF
{
    int iVar0;
    int iVar1;
    var uVar2;
    
    if (iParam2 == -1)
    {
        iParam2 = func_34();
    }
    if (iParam1 < 0)
    {
        iParam1 = 255;
    }
    iVar0 = 0;
    iVar1 = 0;
    if (iParam0 >= 384 && iParam0 < 457)
    {
        iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 384), 0, 1, iParam2);
        iVar1 = ((iParam0 - 384) - unk_0xB07659B9AFDF0087((iParam0 - 384)) * 8) * 8;
    }
    else if (iParam0 >= 457 && iParam0 < 513)
    {
        iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 457), 1, 1, iParam2);
        iVar1 = ((iParam0 - 457) - unk_0xB07659B9AFDF0087((iParam0 - 457)) * 8) * 8;
    }
    else if (iParam0 >= 1281 && iParam0 < 1305)
    {
        iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 1281), 0, 0, 0);
        iVar1 = ((iParam0 - 1281) - unk_0xB07659B9AFDF0087((iParam0 - 1281)) * 8) * 8;
    }
    else if (iParam0 >= 1305 && iParam0 < 1361)
    {
        iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 1305), 1, 0, 0);
        iVar1 = ((iParam0 - 1305) - unk_0xB07659B9AFDF0087((iParam0 - 1305)) * 8) * 8;
    }
    else if (iParam0 >= 1393 && iParam0 < 2919)
    {
        iVar0 = unk_0x752DE25BC350DD79((iParam0 - 1393), 0, 1, iParam2);
        iVar1 = ((iParam0 - 1393) - unk_0xB07659B9AFDF0087((iParam0 - 1393)) * 8) * 8;
    }
    else if (iParam0 >= 1361 && iParam0 < 1393)
    {
        iVar0 = unk_0x752DE25BC350DD79((iParam0 - 1361), 0, 0, 0);
        iVar1 = ((iParam0 - 1361) - unk_0xB07659B9AFDF0087((iParam0 - 1361)) * 8) * 8;
    }
    else if (iParam0 >= 3879 && iParam0 < 4143)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
        iVar1 = ((iParam0 - 3879) - unk_0xB07659B9AFDF0087((iParam0 - 3879)) * 8) * 8;
    }
    else if (iParam0 >= 4143 && iParam0 < 4207)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
        iVar1 = ((iParam0 - 4143) - unk_0xB07659B9AFDF0087((iParam0 - 4143)) * 8) * 8;
    }
    else if (iParam0 >= 4399 && iParam0 < 6028)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
        iVar1 = ((iParam0 - 4399) - unk_0xB07659B9AFDF0087((iParam0 - 4399)) * 8) * 8;
    }
    else if (iParam0 >= 6413 && iParam0 < 7262)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
        iVar1 = ((iParam0 - 6413) - unk_0xB07659B9AFDF0087((iParam0 - 6413)) * 8) * 8;
    }
    else if (iParam0 >= 7262 && iParam0 < 7313)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
        iVar1 = ((iParam0 - 7262) - unk_0xB07659B9AFDF0087((iParam0 - 7262)) * 8) * 8;
    }
    else if (iParam0 >= 7681 && iParam0 < 9361)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
        iVar1 = ((iParam0 - 7681) - unk_0xB07659B9AFDF0087((iParam0 - 7681)) * 8) * 8;
    }
    else if (iParam0 >= 9553 && iParam0 < 15265)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
        iVar1 = ((iParam0 - 9553) - unk_0xB07659B9AFDF0087((iParam0 - 9553)) * 8) * 8;
    }
    else if (iParam0 >= 15265 && iParam0 < 15369)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
        iVar1 = ((iParam0 - 15265) - unk_0xB07659B9AFDF0087((iParam0 - 15265)) * 8) * 8;
    }
    else if (iParam0 >= 16010 && iParam0 < 18098)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
        iVar1 = ((iParam0 - 16010) - unk_0xB07659B9AFDF0087((iParam0 - 16010)) * 8) * 8;
    }
    else if (iParam0 >= 18162 && iParam0 < 19018)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
        iVar1 = ((iParam0 - 18162) - unk_0xB07659B9AFDF0087((iParam0 - 18162)) * 8) * 8;
    }
    else if (iParam0 >= 19018 && iParam0 < 22066)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
        iVar1 = ((iParam0 - 19018) - unk_0xB07659B9AFDF0087((iParam0 - 19018)) * 8) * 8;
    }
    else if (iParam0 >= 22194 && iParam0 < 24962)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
        iVar1 = ((iParam0 - 22194) - unk_0xB07659B9AFDF0087((iParam0 - 22194)) * 8) * 8;
    }
    else if (iParam0 >= 25538 && iParam0 < 26810)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 25538), 0, 1, iParam2, "_CASINOPSTAT_INT");
        iVar1 = ((iParam0 - 25538) - unk_0xB07659B9AFDF0087((iParam0 - 25538)) * 8) * 8;
    }
    else if (iParam0 >= 27258 && iParam0 < 28098)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 27258), 0, 1, iParam2, "_CASINOHSTPSTAT_INT");
        iVar1 = ((iParam0 - 27258) - unk_0xB07659B9AFDF0087((iParam0 - 27258)) * 8) * 8;
    }
    else if (iParam0 >= 7641 && iParam0 < 7681)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
        iVar1 = ((iParam0 - 7641) - unk_0xB07659B9AFDF0087((iParam0 - 7641)) * 8) * 8;
    }
    else if (iParam0 >= 7313 && iParam0 < 7321)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
        iVar1 = ((iParam0 - 7313) - unk_0xB07659B9AFDF0087((iParam0 - 7313)) * 8) * 8;
    }
    uVar2 = unk_0x49DD5185FB090323(iVar0, iParam1, iVar1, 8, iParam3);
    return uVar2;
}

int func_51(int iParam0, int iParam1, int iParam2)//Position - 0x3065
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    if (iParam1 == -1)
    {
        iParam1 = func_34();
    }
    iVar0 = 0;
    iVar1 = func_53(iParam0, iParam1);
    iVar2 = func_52(iParam0);
    if (0 != iVar1)
    {
        if (!unk_0xDB563F2AD2722869(iVar1, &iVar0, iVar2, 8, iParam2))
        {
            iVar0 = 0;
        }
    }
    return iVar0;
}

int func_52(int iParam0)//Position - 0x30AB
{
    int iVar0;
    
    iVar0 = 0;
    if (iParam0 >= 384 && iParam0 < 457)
    {
        iVar0 = ((iParam0 - 384) - unk_0xB07659B9AFDF0087((iParam0 - 384)) * 8) * 8;
    }
    else if (iParam0 >= 457 && iParam0 < 513)
    {
        iVar0 = ((iParam0 - 457) - unk_0xB07659B9AFDF0087((iParam0 - 457)) * 8) * 8;
    }
    else if (iParam0 >= 1281 && iParam0 < 1305)
    {
        iVar0 = ((iParam0 - 1281) - unk_0xB07659B9AFDF0087((iParam0 - 1281)) * 8) * 8;
    }
    else if (iParam0 >= 1305 && iParam0 < 1361)
    {
        iVar0 = ((iParam0 - 1305) - unk_0xB07659B9AFDF0087((iParam0 - 1305)) * 8) * 8;
    }
    else if (iParam0 >= 1361 && iParam0 < 1393)
    {
        iVar0 = ((iParam0 - 1361) - unk_0xB07659B9AFDF0087((iParam0 - 1361)) * 8) * 8;
    }
    else if (iParam0 >= 1393 && iParam0 < 2919)
    {
        iVar0 = ((iParam0 - 1393) - unk_0xB07659B9AFDF0087((iParam0 - 1393)) * 8) * 8;
    }
    else if (iParam0 >= 4143 && iParam0 < 4207)
    {
        iVar0 = ((iParam0 - 4143) - unk_0xB07659B9AFDF0087((iParam0 - 4143)) * 8) * 8;
    }
    else if (iParam0 >= 3879 && iParam0 < 4143)
    {
        iVar0 = ((iParam0 - 3879) - unk_0xB07659B9AFDF0087((iParam0 - 3879)) * 8) * 8;
    }
    else if (iParam0 >= 4399 && iParam0 < 6028)
    {
        iVar0 = ((iParam0 - 4399) - unk_0xB07659B9AFDF0087((iParam0 - 4399)) * 8) * 8;
    }
    else if (iParam0 >= 6413 && iParam0 < 7262)
    {
        iVar0 = ((iParam0 - 6413) - unk_0xB07659B9AFDF0087((iParam0 - 6413)) * 8) * 8;
    }
    else if (iParam0 >= 7262 && iParam0 < 7313)
    {
        iVar0 = ((iParam0 - 7262) - unk_0xB07659B9AFDF0087((iParam0 - 7262)) * 8) * 8;
    }
    else if (iParam0 >= 7681 && iParam0 < 9361)
    {
        iVar0 = ((iParam0 - 7681) - unk_0xB07659B9AFDF0087((iParam0 - 7681)) * 8) * 8;
    }
    else if (iParam0 >= 9553 && iParam0 < 15265)
    {
        iVar0 = ((iParam0 - 9553) - unk_0xB07659B9AFDF0087((iParam0 - 9553)) * 8) * 8;
    }
    else if (iParam0 >= 15265 && iParam0 < 15369)
    {
        iVar0 = ((iParam0 - 15265) - unk_0xB07659B9AFDF0087((iParam0 - 15265)) * 8) * 8;
    }
    else if (iParam0 >= 7313 && iParam0 < 7321)
    {
        iVar0 = ((iParam0 - 7313) - unk_0xB07659B9AFDF0087((iParam0 - 7313)) * 8) * 8;
    }
    else if (iParam0 >= 7641 && iParam0 < 7681)
    {
        iVar0 = ((iParam0 - 7641) - unk_0xB07659B9AFDF0087((iParam0 - 7641)) * 8) * 8;
    }
    else if (iParam0 >= 16010 && iParam0 < 18098)
    {
        iVar0 = ((iParam0 - 16010) - unk_0xB07659B9AFDF0087((iParam0 - 16010)) * 8) * 8;
    }
    else if (iParam0 >= 18162 && iParam0 < 19018)
    {
        iVar0 = ((iParam0 - 18162) - unk_0xB07659B9AFDF0087((iParam0 - 18162)) * 8) * 8;
    }
    else if (iParam0 >= 19018 && iParam0 < 22066)
    {
        iVar0 = ((iParam0 - 19018) - unk_0xB07659B9AFDF0087((iParam0 - 19018)) * 8) * 8;
    }
    else if (iParam0 >= 22194 && iParam0 < 24962)
    {
        iVar0 = ((iParam0 - 22194) - unk_0xB07659B9AFDF0087((iParam0 - 22194)) * 8) * 8;
    }
    else if (iParam0 >= 25538 && iParam0 < 26810)
    {
        iVar0 = ((iParam0 - 25538) - unk_0xB07659B9AFDF0087((iParam0 - 25538)) * 8) * 8;
    }
    else if (iParam0 >= 27258 && iParam0 < 28098)
    {
        iVar0 = ((iParam0 - 27258) - unk_0xB07659B9AFDF0087((iParam0 - 27258)) * 8) * 8;
    }
    return iVar0;
}

int func_53(int iParam0, int iParam1)//Position - 0x34AC
{
    int iVar0;
    
    if (iParam1 == -1)
    {
        iParam1 = func_34();
    }
    iVar0 = 0;
    if (iParam0 >= 384 && iParam0 < 457)
    {
        iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 384), 0, 1, iParam1);
    }
    else if (iParam0 >= 457 && iParam0 < 513)
    {
        iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 457), 1, 1, iParam1);
    }
    else if (iParam0 >= 1281 && iParam0 < 1305)
    {
        iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 1281), 0, 0, 0);
    }
    else if (iParam0 >= 1305 && iParam0 < 1361)
    {
        iVar0 = unk_0x9A1E3D19AE929DDE((iParam0 - 1305), 1, 0, 0);
    }
    else if (iParam0 >= 1361 && iParam0 < 1393)
    {
        iVar0 = unk_0x752DE25BC350DD79((iParam0 - 1361), 0, 0, 0);
    }
    else if (iParam0 >= 1393 && iParam0 < 2919)
    {
        iVar0 = unk_0x752DE25BC350DD79((iParam0 - 1393), 0, 1, iParam1);
    }
    else if (iParam0 >= 4143 && iParam0 < 4207)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
    }
    else if (iParam0 >= 3879 && iParam0 < 4143)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
    }
    else if (iParam0 >= 4399 && iParam0 < 6028)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
    }
    else if (iParam0 >= 6413 && iParam0 < 7262)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
    }
    else if (iParam0 >= 7262 && iParam0 < 7313)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
    }
    else if (iParam0 >= 7681 && iParam0 < 9361)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
    }
    else if (iParam0 >= 9553 && iParam0 < 15265)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
    }
    else if (iParam0 >= 15265 && iParam0 < 15369)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
    }
    else if (iParam0 >= 7313 && iParam0 < 7321)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
    }
    else if (iParam0 >= 7641 && iParam0 < 7681)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
    }
    else if (iParam0 >= 16010 && iParam0 < 18098)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
    }
    else if (iParam0 >= 18162 && iParam0 < 19018)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
    }
    else if (iParam0 >= 19018 && iParam0 < 22066)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
    }
    else if (iParam0 >= 22194 && iParam0 < 24962)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
    }
    else if (iParam0 >= 25538 && iParam0 < 26810)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 25538), 0, 1, iParam1, "_CASINOPSTAT_INT");
    }
    else if (iParam0 >= 27258 && iParam0 < 28098)
    {
        iVar0 = unk_0x0A1CCC430253F58D((iParam0 - 27258), 0, 1, iParam1, "_CASINOHSTPSTAT_INT");
    }
    return iVar0;
}

void func_54(char* sParam0, int iParam1)//Position - 0x384E
{
    unk_0xD95C12E1062B7D5E(sParam0);
    unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

void func_55(char* sParam0)//Position - 0x3865
{
    if (unk_0x0945988C02AF3025())
    {
        unk_0x0D23E3918F7AF11B(1);
    }
    if (!func_56(sParam0))
    {
        func_54(sParam0, -1);
    }
}

int func_56(char* sParam0)//Position - 0x388A
{
    unk_0x1EF54B101C71E009(sParam0);
    return unk_0xFA637652FFB4E2E5(0);
}

int func_57()//Position - 0x389D
{
    if (func_60(unk_0x7C7787D2D7139A85()) && !func_58(unk_0x7C7787D2D7139A85(), 0))
    {
        return 1;
    }
    return 0;
}

bool func_58(int iParam0, bool bParam1)//Position - 0x38C4
{
    if (!bParam1)
    {
        if (func_59(iParam0))
        {
            return 0;
        }
    }
    return Global_18DB1B[iParam0 /*614*/].f_B != func_38();
}

int func_59(int iParam0)//Position - 0x38EF
{
    if (iParam0 != func_38())
    {
        if (Global_18DB1B[iParam0 /*614*/].f_B != func_38())
        {
            return Global_18DB1B[iParam0 /*614*/].f_B == iParam0;
        }
    }
    return 0;
}

int func_60(int iParam0)//Position - 0x3924
{
    int iVar0;
    
    if (func_62(iParam0))
    {
        iVar0 = func_61(iParam0);
        if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
        {
            return 1;
        }
    }
    return 0;
}

int func_61(int iParam0)//Position - 0x395D
{
    if (iParam0 != func_38())
    {
        return Global_1844AE[iParam0 /*871*/].f_111.f_104;
    }
    return 0;
}

int func_62(int iParam0)//Position - 0x3981
{
    if (iParam0 != func_38())
    {
        return Global_1844AE[iParam0 /*871*/].f_111.f_104 != 0;
    }
    return 0;
}

int func_63(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x39A7
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
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    int iVar20;
    int iVar21;
    int iVar22;
    
    if (iParam2 == -1)
    {
        iParam2 = func_34();
    }
    iVar0 = 0;
    if (iParam0 >= 0 && iParam0 < 192)
    {
        iVar2 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam2);
        iVar1 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar2, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 192 && iParam0 < 384)
    {
        iVar3 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam2);
        iVar1 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar3, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 513 && iParam0 < 705)
    {
        iVar4 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
        iVar1 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar4, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 705 && iParam0 < 1281)
    {
        iVar5 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
        iVar1 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar5, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 3111 && iParam0 < 3879)
    {
        iVar6 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam2);
        iVar1 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar6, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 2919 && iParam0 < 3111)
    {
        iVar7 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
        iVar1 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar7, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 4207 && iParam0 < 4335)
    {
        iVar8 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
        iVar1 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar8, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 4335 && iParam0 < 4399)
    {
        iVar9 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
        iVar1 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar9, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 6029 && iParam0 < 6413)
    {
        iVar10 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
        iVar1 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar10, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 7385 && iParam0 < 7641)
    {
        iVar11 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
        iVar1 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar11, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 7321 && iParam0 < 7385)
    {
        iVar12 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
        iVar1 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar12, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 9361 && iParam0 < 9553)
    {
        iVar13 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
        iVar1 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar13, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 15369 && iParam0 < 15561)
    {
        iVar14 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
        iVar1 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar14, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 15562 && iParam0 < 15946)
    {
        iVar15 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
        iVar1 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar15, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 15946 && iParam0 < 16010)
    {
        iVar16 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
        iVar1 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar16, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 18098 && iParam0 < 18162)
    {
        iVar17 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
        iVar1 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar17, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 22066 && iParam0 < 22194)
    {
        iVar18 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
        iVar1 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar18, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 24962 && iParam0 < 25538)
    {
        iVar19 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
        iVar1 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar19, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 26810 && iParam0 < 27258)
    {
        iVar20 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
        iVar1 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar20, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 28098 && iParam0 < 28354)
    {
        iVar21 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
        iVar1 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar21, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 28355 && iParam0 < 28483)
    {
        iVar22 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
        iVar1 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar22, iParam1, iVar1, iParam3);
    }
    return iVar0;
}

int func_64(int iParam0, int iParam1, int iParam2)//Position - 0x3FF9
{
    int iVar0;
    int iVar1;
    var uVar2;
    
    iVar0 = 0;
    if (iParam1 == -1)
    {
        iParam1 = func_34();
    }
    iVar1 = func_66(iParam0, iParam1);
    uVar2 = func_65(iParam0);
    if (0 != iVar1)
    {
        iVar0 = unk_0x0F1A9E0CCDF4F08D(iVar1, uVar2, iParam2);
    }
    return iVar0;
}

int func_65(int iParam0)//Position - 0x4037
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

int func_66(int iParam0, int iParam1)//Position - 0x43D3
{
    int iVar0;
    
    if (iParam1 == -1)
    {
        iParam1 = func_34();
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

bool func_67(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x474C
{
    func_87(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
    if (iParam3 > 7)
    {
        if (iParam3 < 12)
        {
            iParam3 = 7;
        }
    }
    Global_514C = 0;
    Global_514E = 0;
    Global_5153 = 0;
    Global_5524 = 0;
    Global_5526 = 0;
    Global_552A = 0;
    Global_280001 = 0;
    return func_68(sParam2, iParam3, 0);
}

int func_68(char* sParam0, int iParam1, bool bParam2)//Position - 0x479A
{
    Global_5146 = 0;
    if (Global_5145 == 0 || Global_5147 == 2)
    {
        if (Global_5145 != 0)
        {
            if (iParam1 > Global_5147)
            {
                if (Global_514C == 0)
                {
                    unk_0x623942A4F366F9BB(false);
                    Global_4C1E.f_1 = 3;
                    Global_5145 = 0;
                    Global_5146 = 1;
                    Global_517A = 0;
                    Global_5141 = 0;
                    Global_5142 = 0;
                    Global_5150 = 0;
                    Global_514F = 0;
                    Global_4C1D = 0;
                }
                else
                {
                    func_86();
                    return 0;
                }
            }
            else
            {
                return 0;
            }
        }
        if (unk_0x04C7A9862FF737E9())
        {
            return 0;
        }
        if (func_85(8, -1))
        {
            return 0;
        }
        Global_5191 = { Global_518B };
        func_84();
        Global_4E7E = { Global_4F23 };
        Global_514B = Global_514C;
        Global_5152 = Global_5153;
        Global_280002 = Global_280001;
        Global_5154 = { Global_5164 };
        Global_514D = Global_514E;
        Global_5523 = Global_5524;
        Global_552B = { Global_5531 };
        Global_5525 = Global_5526;
        Global_5527 = Global_5528;
        Global_5529 = Global_552A;
        Global_4FC8.f_172 = Global_5522;
        Global_4FC8.f_170 = Global_5520;
        Global_4FC8.f_171 = Global_5521;
        Global_5141 = Global_5142;
        if (Global_514B)
        {
            unk_0x3B76114EC84D5812(&Global_1CBC, 20);
            unk_0x3B76114EC84D5812(&Global_1CBD, 17);
            unk_0x3B76114EC84D5812(&Global_1CBE, 0);
            if (bParam2)
            {
                func_76();
                if (Global_1FE1[Global_4C1E /*2811*/][0 /*281*/].f_103 == 2)
                {
                    if (iParam1 == 13)
                    {
                    }
                    else
                    {
                        return 0;
                    }
                }
                if (Global_4C1E.f_1 > 3)
                {
                    return 0;
                }
            }
            if (Global_4BFC == 1)
            {
                return 0;
            }
            if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
            {
                if (unk_0x132DF66D50A7DE4E(unk_0x0FA8183DAD2B3203()))
                {
                    return 0;
                }
                if (func_75())
                {
                    return 0;
                }
                if (unk_0x6B6CB57338FA0319(unk_0x0FA8183DAD2B3203()))
                {
                    return 0;
                }
                if (unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()))
                {
                    return 0;
                }
                if (unk_0x604F402D213D3BE5(unk_0x0FA8183DAD2B3203()))
                {
                    return 0;
                }
                if (unk_0xA6DAB995F3A28615(unk_0x0FA8183DAD2B3203(), joaat("gadget_parachute")))
                {
                    return 0;
                }
                if (!Global_12B21)
                {
                    if (unk_0xE294A1321110B3E9(unk_0x0FA8183DAD2B3203()))
                    {
                        return 0;
                    }
                    if (unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85()))
                    {
                        return 0;
                    }
                    if (unk_0x7E1657C6CCABF258(unk_0x0FA8183DAD2B3203()))
                    {
                        return 0;
                    }
                    if (unk_0xD2E3AF497D091872(unk_0x7C7787D2D7139A85()))
                    {
                        return 0;
                    }
                }
            }
            if (func_74())
            {
                return 0;
            }
            else
            {
                switch (Global_4C1E.f_1)
                {
                    case 7:
                        return 0;
                        break;
                    
                    case 8:
                        return 0;
                        break;
                    
                    case 9:
                        break;
                    
                    case 10:
                        break;
                    
                    default:
                        break;
                }
                if (unk_0xA2BC31158C8CEFD2(Global_1CBC, 9))
                {
                    return 0;
                }
            }
            func_73();
            Global_514F = bParam2;
        }
        Global_5147 = iParam1;
        StringCopy(&Global_4FC8, sParam0, 24);
        Global_4CD7 = 0;
        func_72();
        func_69();
        return 1;
    }
    if (Global_5145 == 5)
    {
        return 0;
    }
    if (iParam1 < Global_5147 || iParam1 == Global_5147)
    {
        return 0;
    }
    if (iParam1 == 2)
    {
    }
    else
    {
        func_86();
    }
    return 0;
}

void func_69()//Position - 0x4A6A
{
    if (!func_70())
    {
        return;
    }
    if (Global_514B)
    {
        MemCopy(&(Global_19FD20.f_1), {Global_4FC8}, 4);
        Global_19FD20 = Global_1A0F;
        Global_19FD20.f_6 = Global_514F;
    }
}

int func_70()//Position - 0x4AA1
{
    if (!Global_40001.f_6D6D)
    {
        return 0;
    }
    if (!Global_12B21)
    {
        return 0;
    }
    if (unk_0x7C7787D2D7139A85() == func_38())
    {
        return 0;
    }
    if (func_71(unk_0x7C7787D2D7139A85()))
    {
        return 0;
    }
    if (unk_0xA2BC31158C8CEFD2(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1, 7))
    {
        return 0;
    }
    if (unk_0xA51CBC95AC3A4B14())
    {
        return 0;
    }
    return 1;
}

bool func_71(int iParam0)//Position - 0x4B07
{
    return func_10(iParam0, 20);
}

void func_72()//Position - 0x4B17
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 <= 69)
    {
        StringCopy(&(Global_4CD9[iVar0 /*6*/]), "", 24);
        iVar0++;
    }
    unk_0x623942A4F366F9BB(false);
    Global_5145 = 1;
}

void func_73()//Position - 0x4B49
{
    Global_517A = Global_5179;
    Global_5174 = Global_5175;
    Global_51A3 = { Global_5197 };
    Global_51A9 = { Global_519D };
    Global_517C = Global_517B;
    Global_51C1 = { Global_51AF };
    Global_51C7 = { Global_51B5 };
    Global_51CD = { Global_51BB };
    Global_51D3 = { Global_51D9 };
    Global_1A0F = Global_1A10;
    Global_1A11 = Global_1A12;
    Global_5150 = Global_5151;
    Global_5152 = Global_5153;
    Global_5154 = { Global_5164 };
    Global_5149 = Global_514A;
    Global_553D = 0;
    Global_5176 = 0;
    Global_5177 = 0;
    unk_0x3B76114EC84D5812(&Global_1CBD, 16);
}

int func_74()//Position - 0x4BDE
{
    if (Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 0)
    {
        return 1;
    }
    return 0;
}

int func_75()//Position - 0x4C05
{
    int iVar0;
    int iVar1;
    
    if (Global_12B21)
    {
        iVar0 = 0;
        unk_0x63EA4FAF7CDEFEC7(unk_0x0FA8183DAD2B3203(), &iVar1, 1);
        if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
        {
            if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
            {
                iVar0 = 1;
            }
        }
        if (unk_0x9044F3A001B2AC43() && iVar0 == 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
    {
        if (unk_0xB99AB40226A0C08E(unk_0x0FA8183DAD2B3203(), 78, 1))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

void func_76()//Position - 0x4C9E
{
    if (func_83(14))
    {
        if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
        {
            if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_1B3C8.f_6D8D[0 /*29*/])
            {
                Global_4C1E = 0;
            }
            else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_1B3C8.f_6D8D[1 /*29*/])
            {
                Global_4C1E = 1;
            }
            else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_1B3C8.f_6D8D[2 /*29*/])
            {
                Global_4C1E = 2;
            }
            else
            {
                Global_4C1E = 0;
            }
        }
    }
    else
    {
        Global_4C1E = func_77();
        if (Global_4C1E == 145)
        {
            Global_4C1E = 3;
        }
        if (Global_12B21)
        {
            Global_4C1E = 3;
        }
        if (Global_4C1E > 3)
        {
            Global_4C1E = 3;
        }
    }
}

var func_77()//Position - 0x4D40
{
    func_78();
    return Global_1B3C8.f_936.f_21B.f_10E1;
}

void func_78()//Position - 0x4D59
{
    int iVar0;
    
    if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
    {
        if (func_81(Global_1B3C8.f_936.f_21B.f_10E1) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
        {
            iVar0 = func_80(unk_0x0FA8183DAD2B3203());
            if (func_79(iVar0) && (!func_83(14) || Global_1AFAF))
            {
                if (Global_1B3C8.f_936.f_21B.f_10E1 != iVar0 && func_79(Global_1B3C8.f_936.f_21B.f_10E1))
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

bool func_79(int iParam0)//Position - 0x4E56
{
    return iParam0 < 3;
}

int func_80(int iParam0)//Position - 0x4E62
{
    int iVar0;
    int iVar1;
    
    if (unk_0xD4B321D9096B01FC(iParam0))
    {
        iVar1 = unk_0x7F375072508F738F(iParam0);
        iVar0 = 0;
        while (iVar0 <= 2)
        {
            if (func_81(iVar0) == iVar1)
            {
                return iVar0;
            }
            iVar0++;
        }
    }
    return 145;
}

int func_81(int iParam0)//Position - 0x4E9F
{
    if (func_79(iParam0))
    {
        return func_82(iParam0);
    }
    else if (iParam0 != 145)
    {
    }
    return 0;
}

var func_82(int iParam0)//Position - 0x4EC4
{
    return Global_706[iParam0 /*29*/];
}

bool func_83(int iParam0)//Position - 0x4ED3
{
    return Global_A1B4 == iParam0;
}

void func_84()//Position - 0x4EE1
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 <= 15)
    {
        Global_4E7E[iVar0 /*10*/] = 0;
        StringCopy(&(Global_4E7E[iVar0 /*10*/].f_1), "", 24);
        Global_4E7E[iVar0 /*10*/].f_7 = 0;
        Global_4E7E[iVar0 /*10*/].f_8 = 0;
        iVar0++;
    }
    Global_4E7E.f_A1 = -99;
    Global_4E7E.f_A2 = { 0f, 0f, 0f };
}

bool func_85(int iParam0, int iParam1)//Position - 0x4F39
{
    switch (iParam0)
    {
        case 5:
            if (iParam1 > -1)
            {
                return Global_14F53C.f_CB[iParam1];
            }
            break;
    }
    return unk_0xA2BC31158C8CEFD2(Global_14F53C.f_418, iParam0);
}

void func_86()//Position - 0x4F74
{
    unk_0xE4F88BFF8FB3D84C();
    Global_5538 = 0;
    if ((unk_0x31634D65216B86B6() || Global_4C1E.f_1 == 9) || Global_4C1D == 1)
    {
        unk_0x623942A4F366F9BB(false);
        Global_5145 = 6;
        Global_4C1E.f_1 = 3;
        return;
    }
    if (unk_0x04C7A9862FF737E9())
    {
        unk_0x623942A4F366F9BB(true);
        Global_5145 = 6;
        return;
    }
}

void func_87(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x4FCB
{
    Global_4F23 = { *uParam0 };
    Global_1A10 = iParam1;
    StringCopy(&Global_518B, sParam2, 24);
    Global_5522 = uParam5;
    if (iParam3 == 0)
    {
        Global_5520 = 1;
        Global_551E = 0;
    }
    else
    {
        Global_5520 = 0;
        Global_551E = 1;
    }
    if (iParam4 == 0)
    {
        Global_5521 = 1;
        Global_551F = 0;
    }
    else
    {
        Global_5521 = 0;
        Global_551F = 1;
    }
}

struct<6> func_88()//Position - 0x5021
{
    struct<6> Var0;
    
    StringCopy(&Var0, "", 24);
    if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0) || unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
    {
        if (!func_64(15999, -1, -1))
        {
            StringCopy(&Var0, "SMGFZ_WLK1ST", 24);
        }
        else if (!func_64(16002, -1, -1) || func_51(18097, -1, -1) == 0)
        {
            StringCopy(&Var0, "SMGFZ_WLKENT", 24);
        }
    }
    else if (((func_20(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), 3, 1000, 0) || func_19(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), 1000)) || func_99(unk_0x0FA8183DAD2B3203())) && func_98(unk_0x0FA8183DAD2B3203()))
    {
        if (!func_64(16000, -1, -1))
        {
            StringCopy(&Var0, "SMGFZ_FLY1ST", 24);
        }
        else if (!func_64(16001, -1, -1))
        {
            StringCopy(&Var0, "SMGFZ_FLYENT", 24);
        }
    }
    return Var0;
}

void func_89(var uParam0, int iParam1, vector3 vParam2)//Position - 0x514E
{
    uParam0->f_A1 = iParam1;
    uParam0->f_A2 = { vParam2 };
}

void func_90(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x5166
{
    if ((uParam0[iParam1 /*10*/])->f_7 == 1)
    {
    }
    (*uParam0)[iParam1 /*10*/] = iParam2;
    StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
    (uParam0[iParam1 /*10*/])->f_7 = 1;
    (uParam0[iParam1 /*10*/])->f_8 = iParam4;
    (uParam0[iParam1 /*10*/])->f_9 = iParam5;
    if (!Global_12B21)
    {
        if (!unk_0x2BF5E63466422C38(iParam2))
        {
            if ((uParam0[iParam1 /*10*/])->f_8 == 0)
            {
                unk_0x773434A2783CA924(iParam2, 0);
            }
            else
            {
                unk_0x773434A2783CA924(iParam2, 1);
            }
        }
        if (!unk_0x2BF5E63466422C38(iParam2))
        {
            if ((uParam0[iParam1 /*10*/])->f_9 == 0)
            {
                unk_0xB35478A1AA54EA1A(iParam2, 0);
            }
            else
            {
                unk_0xB35478A1AA54EA1A(iParam2, 1);
            }
        }
    }
}

void func_91(var uParam0, int iParam1)//Position - 0x5201
{
    uParam0->f_A1 = -99;
    uParam0->f_A2 = { 0f, 0f, 0f };
    if (iParam1 < 0)
    {
    }
}

void func_92(var uParam0, int iParam1)//Position - 0x521F
{
    if ((uParam0[iParam1 /*10*/])->f_7 == 1)
    {
        (uParam0[iParam1 /*10*/])->f_7 = 0;
    }
}

int func_93()//Position - 0x523C
{
    if (Global_5145 != 0 || unk_0x04C7A9862FF737E9())
    {
        return 1;
    }
    return 0;
}

void func_94()//Position - 0x525E
{
    Global_4CD7 = 0;
    func_95();
}

void func_95()//Position - 0x526E
{
    if (unk_0x04C7A9862FF737E9())
    {
        unk_0xE4F88BFF8FB3D84C();
        Global_5538 = 0;
        unk_0x623942A4F366F9BB(true);
        Global_5145 = 6;
        return;
    }
}

int func_96(bool bParam0, bool bParam1)//Position - 0x5292
{
    if (func_21(unk_0x7C7787D2D7139A85()))
    {
        return 0;
    }
    if (bParam0)
    {
        if (!Local_140.f_B2)
        {
            if (unk_0xA2BC31158C8CEFD2(Local_140.f_B6, 1))
            {
                if (unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
                {
                    if (!func_64(16000, -1, -1) || !func_64(16001, -1, -1))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    else if (bParam1)
    {
        if (!Local_140.f_B3)
        {
            if (unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()) && unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) == 0)
            {
                if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) || func_97())
                {
                    if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), -1588.977f, 2793.941f, 14.98289f, -1575.664f, 2779.558f, 26.11536f, 29.75f, 0, 1, 0))
                    {
                        if (!func_64(15999, -1, -1) || !func_64(16002, -1, -1))
                        {
                            if (unk_0xD2809C7F7FD79247(unk_0x0FA8183DAD2B3203()) >= -25f && unk_0xD2809C7F7FD79247(unk_0x0FA8183DAD2B3203()) <= 125f)
                            {
                                return 1;
                            }
                        }
                    }
                    else if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), -2306.916f, 3390.545f, 29.17826f, -2322.245f, 3401.719f, 35.63131f, 36f, 0, 1, 0))
                    {
                        if (!func_64(15999, -1, -1) || func_51(18097, -1, -1) == 0)
                        {
                            if (unk_0xD2809C7F7FD79247(unk_0x0FA8183DAD2B3203()) >= 160f && unk_0xD2809C7F7FD79247(unk_0x0FA8183DAD2B3203()) <= 290f)
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int func_97()//Position - 0x5423
{
    int iVar0;
    
    if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
    {
        iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
        if (unk_0x0064CADA7C0E1595(iVar0))
        {
            if (func_6(iVar0))
            {
                if (!func_5(iVar0, 1) && !func_4(iVar0))
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

int func_98(int iParam0)//Position - 0x5470
{
    if (unk_0x0B8262712AD6841C(iParam0) || unk_0xCE4D7B70DA8B0C86(iParam0))
    {
        return 1;
    }
    return 0;
}

int func_99(int iParam0)//Position - 0x5492
{
    if (unk_0xD4B321D9096B01FC(iParam0) && func_100(iParam0))
    {
        if ((unk_0x42A24CB7B8A08E11(iParam0, -2013.3f, 2878.6f, 1000f, -2864.6f, 3357.6f, 31f, 400f, 0, 1, 0) || unk_0x42A24CB7B8A08E11(iParam0, -1700f, 3150f, 1000f, -2039f, 3342f, 30f, 175f, 0, 1, 0)) || unk_0x42A24CB7B8A08E11(iParam0, -1950f, 2786f, 1000f, -1856f, 3141f, 31f, 270f, 0, 1, 0))
        {
            return 1;
        }
    }
    return 0;
}

int func_100(int iParam0)//Position - 0x5546
{
    if (unk_0xD4B321D9096B01FC(iParam0))
    {
        if (!unk_0xF4B969E0807E76C7(iParam0, 0))
        {
            return 1;
        }
    }
    return 0;
}

void func_101()//Position - 0x5567
{
    if (Local_140.f_B4)
    {
        if (!func_105(&(Local_140.f_B7)))
        {
            func_104(&(Local_140.f_B7), 0, 0);
        }
        else if (!func_103(&(Local_140.f_B7), 17000, 0))
        {
            if (!func_56("AB_ENTRY_HT"))
            {
                func_54("AB_ENTRY_HT", -1);
            }
        }
        else if (func_103(&(Local_140.f_B7), 17000, 0))
        {
            if (func_56("AB_ENTRY_HT"))
            {
                unk_0x0D23E3918F7AF11B(1);
            }
            func_102(&(Local_140.f_B7));
            Local_140.f_B4 = 0;
        }
    }
}

void func_102(var uParam0)//Position - 0x55E7
{
    uParam0->f_1 = 0;
}

int func_103(var uParam0, int iParam1, bool bParam2)//Position - 0x55F4
{
    if (iParam1 == -1)
    {
        return 1;
    }
    func_104(uParam0, bParam2, 0);
    if (unk_0x393E9918BC37548A() && !bParam2)
    {
        if (unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), *uParam0)) >= iParam1)
        {
            return 1;
        }
    }
    else if (unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x9B35D07DCD0F0B43(), *uParam0)) >= iParam1)
    {
        return 1;
    }
    return 0;
}

void func_104(var uParam0, bool bParam1, bool bParam2)//Position - 0x5652
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

bool func_105(var uParam0)//Position - 0x5697
{
    return uParam0->f_1;
}

void func_106()//Position - 0x56A3
{
    if (unk_0xB3E4EBF4EFCF92BD(unk_0x7C7787D2D7139A85()))
    {
        if ((func_20(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), 3, 1000, 0) || func_19(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), 1000)) || func_99(unk_0x0FA8183DAD2B3203()))
        {
            if (!unk_0xA2BC31158C8CEFD2(Local_140.f_B6, 0))
            {
                if ((((func_98(unk_0x0FA8183DAD2B3203()) && unk_0x916AF183F71F17C1(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0))) && unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) == 0) && func_97()) && !Global_19C108)
                {
                    if (!unk_0xA2BC31158C8CEFD2(Local_140.f_B6, 1) && !unk_0xA2BC31158C8CEFD2(Local_140.f_B6, 3))
                    {
                        unk_0xA1E7A40E1F56E511(&(Local_140.f_B6), 1);
                    }
                }
                unk_0xA1E7A40E1F56E511(&(Local_140.f_B6), 0);
            }
        }
        else
        {
            if (unk_0xA2BC31158C8CEFD2(Local_140.f_B6, 0))
            {
                unk_0x3B76114EC84D5812(&(Local_140.f_B6), 0);
            }
            if (unk_0xA2BC31158C8CEFD2(Local_140.f_B6, 1))
            {
                unk_0x3B76114EC84D5812(&(Local_140.f_B6), 1);
            }
            if (unk_0xA2BC31158C8CEFD2(Local_140.f_B6, 3))
            {
                unk_0x3B76114EC84D5812(&(Local_140.f_B6), 3);
            }
            if (Global_19C108)
            {
                Global_19C108 = 0;
            }
        }
    }
}

int func_107(int iParam0)//Position - 0x57C2
{
    if (func_24(iParam0) == 233)
    {
        return func_108(iParam0);
    }
    return -1;
}

int func_108(int iParam0)//Position - 0x57DF
{
    if (func_25(iParam0, 0))
    {
        return Global_18DB1B[iParam0 /*614*/].f_B.f_B5;
    }
    return -1;
}

int func_109()//Position - 0x5802
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    if (func_60(unk_0x7C7787D2D7139A85()))
    {
        return 1;
    }
    iVar0 = 0;
    while (iVar0 < 32)
    {
        iVar1 = unk_0x0C98179F08C6DA4F(iVar0);
        if (func_37(iVar1, 0, 1))
        {
            if (iVar1 != unk_0x7C7787D2D7139A85())
            {
                if (func_110(unk_0x23625FE58BACEBFD(unk_0x7C7787D2D7139A85()), unk_0x23625FE58BACEBFD(iVar1)))
                {
                    iVar2 = unk_0x4D57D3E5ECE15A41(unk_0x23625FE58BACEBFD(iVar1), 0);
                    if (unk_0x300C62F79A4441EB(iVar2, -1, 0) == unk_0x23625FE58BACEBFD(iVar1))
                    {
                        if (func_60(iVar1))
                        {
                            return 1;
                        }
                    }
                }
            }
        }
        iVar0++;
    }
    return 0;
}

bool func_110(int iParam0, int iParam1)//Position - 0x5889
{
    if (iParam0 == iParam1)
    {
        return 1;
    }
    if (!unk_0x5294582CE404D3F4(iParam0, 0) || !unk_0x5294582CE404D3F4(iParam1, 0))
    {
        return 0;
    }
    return unk_0x4D57D3E5ECE15A41(iParam0, 0) == unk_0x4D57D3E5ECE15A41(iParam1, 0);
}

void func_111(int iParam0)//Position - 0x58C8
{
    int iVar0;
    
    if (!unk_0x8A7BBB98FFB32893(Local_115[iParam0]))
    {
        return;
    }
    iVar0 = unk_0x70D3AC024E0A9837(Local_115[iParam0]);
    if (unk_0xF4B969E0807E76C7(iVar0, 0))
    {
        return;
    }
    switch (Local_115.f_15[iParam0])
    {
        case 0:
            if (!func_47(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0], 64))
            {
                Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0] = 0;
                func_46(&(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0]), 64);
            }
            break;
        
        case 1:
            if (!func_47(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0], 1))
            {
                if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
                {
                    if (SYSTEM::VDIST2(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), unk_0xACE5E491FC1B0D37(iVar0, 1)) <= 900f)
                    {
                        func_46(&(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0]), 1);
                    }
                }
            }
            break;
        
        case 2:
            if ((!func_47(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0], 2) && SYSTEM::VDIST2(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), unk_0xACE5E491FC1B0D37(iVar0, 1)) <= 900f) && !func_21(unk_0x7C7787D2D7139A85()))
            {
                func_90(&(Local_140.f_7), 4, iVar0, "ARMY_Guard01", 0, 1);
                func_116(&(Local_140.f_7), "ARMYAUD", "ARMY_WRN1", 12, 0, 0, 0);
                func_46(&(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0]), 2);
            }
            break;
        
        case 3:
            if (!func_47(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0], 4))
            {
                if (func_115(iParam0))
                {
                    unk_0x59D299A96F03A83C(iVar0, func_114(iParam0), -1, 0);
                }
                if (func_113(iParam0, 1630799643))
                {
                    func_46(&(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0]), 4);
                }
            }
            break;
        
        case 4:
            if ((!func_47(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0], 8) && SYSTEM::VDIST2(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), unk_0xACE5E491FC1B0D37(iVar0, 1)) <= 900f) && unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) < 1)
            {
                if (!func_17(&Local_140))
                {
                    func_14(&Local_140);
                }
                if (func_11(&Local_140) >= 7f && !func_21(unk_0x7C7787D2D7139A85()))
                {
                    func_46(&(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0]), 8);
                    func_116(&(Local_140.f_7), "ARMYAUD", "ARMY_WRN1a", 12, 0, 0, 0);
                }
            }
            else if (func_17(&Local_140))
            {
                func_1(&Local_140);
            }
            if (!func_47(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0], 16))
            {
                if (func_112(iParam0) && SYSTEM::VDIST2(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), unk_0xACE5E491FC1B0D37(iVar0, 1)) <= 900f)
                {
                    func_46(&(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0]), 16);
                    if (!func_154())
                    {
                        unk_0x63373610A759665B(unk_0x7C7787D2D7139A85(), 36, unk_0xE9FCDBCA711F83E7(4));
                    }
                    else
                    {
                        unk_0x63373610A759665B(unk_0x7C7787D2D7139A85(), 36, unk_0xE9FCDBCA711F83E7(Global_40001.f_5385));
                    }
                }
            }
            if (func_47(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0], 1))
            {
                if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
                {
                    if (SYSTEM::VDIST2(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), unk_0xACE5E491FC1B0D37(iVar0, 1)) > 900f)
                    {
                        func_42(&(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0]), 1);
                    }
                }
            }
            break;
        
        case 5:
            if (!func_47(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0], 16))
            {
                if (func_112(iParam0) && SYSTEM::VDIST2(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), unk_0xACE5E491FC1B0D37(iVar0, 1)) <= 900f)
                {
                    func_46(&(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0]), 16);
                    if (!func_154())
                    {
                        unk_0x63373610A759665B(unk_0x7C7787D2D7139A85(), 36, (unk_0xE9FCDBCA711F83E7(4) - unk_0xE9FCDBCA711F83E7(unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()))));
                    }
                    else
                    {
                        unk_0x63373610A759665B(unk_0x7C7787D2D7139A85(), 36, (unk_0xE9FCDBCA711F83E7(Global_40001.f_5385) - unk_0xE9FCDBCA711F83E7(unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()))));
                    }
                }
            }
            if (func_47(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0], 1))
            {
                if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
                {
                    if (SYSTEM::VDIST2(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), unk_0xACE5E491FC1B0D37(iVar0, 1)) > 900f)
                    {
                        func_42(&(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0]), 1);
                    }
                }
            }
            if (!func_113(iParam0, 1630799643))
            {
                if (func_115(iParam0))
                {
                    unk_0x59D299A96F03A83C(iVar0, func_114(iParam0), -1, 0);
                }
            }
            break;
        
        case 6:
            break;
        
        case 7:
            if (func_47(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0], 4))
            {
                if (func_115(iParam0))
                {
                    unk_0xC6612209077465DD(iVar0);
                }
                if (!func_113(iParam0, 1435919172))
                {
                    func_42(&(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0]), 4);
                    func_42(&(Local_139[unk_0x2E40EEA43EF34BD6() /*8*/].f_1[iParam0]), 64);
                }
            }
            break;
    }
}

int func_112(int iParam0)//Position - 0x5DA5
{
    int iVar0;
    
    if (!unk_0x8A7BBB98FFB32893(Local_115[iParam0]))
    {
        return 0;
    }
    iVar0 = unk_0x70D3AC024E0A9837(Local_115[iParam0]);
    if (unk_0xF4B969E0807E76C7(iVar0, 0))
    {
        return 0;
    }
    if (unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
    {
        return 0;
    }
    if (unk_0x90D8021D13215A35(unk_0x0FA8183DAD2B3203()))
    {
        return 1;
    }
    if (unk_0x2A06948F22A49FC3(unk_0x7C7787D2D7139A85(), iVar0))
    {
        return 1;
    }
    if (unk_0x4412340828EC2614(unk_0x7C7787D2D7139A85(), iVar0))
    {
        return 1;
    }
    if (SYSTEM::VDIST2(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), unk_0xACE5E491FC1B0D37(iVar0, 1)) <= 64f)
    {
        return 1;
    }
    return 0;
}

int func_113(int iParam0, int iParam1)//Position - 0x5E3C
{
    int iVar0;
    
    if (!unk_0x8A7BBB98FFB32893(Local_115[iParam0]))
    {
        return 1;
    }
    iVar0 = unk_0x70D3AC024E0A9837(Local_115[iParam0]);
    if (unk_0xF4B969E0807E76C7(iVar0, 0))
    {
        return 1;
    }
    if (unk_0x411C065ADB822CD9(iVar0, iParam1) != 1 && unk_0x411C065ADB822CD9(iVar0, iParam1) != 0)
    {
        return 0;
    }
    return 1;
}

int func_114(int iParam0)//Position - 0x5E91
{
    int iVar0;
    int iVar1;
    int iVar2;
    float fVar3;
    float fVar4;
    
    fVar3 = 1E+11f;
    iVar0 = 0;
    while (iVar0 < unk_0xACF7D965CEBE5714())
    {
        if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar0)))
        {
            iVar2 = unk_0x23625FE58BACEBFD(unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar0)));
            if (!unk_0xF4B969E0807E76C7(iVar2, 0))
            {
                fVar4 = SYSTEM::VDIST2(unk_0xACE5E491FC1B0D37(iVar2, 1), unk_0xACE5E491FC1B0D37(unk_0xAEA6D4EC961DFA03(Local_115[iParam0]), 1));
                if (fVar4 < fVar3)
                {
                    iVar1 = iVar2;
                    fVar3 = fVar4;
                }
            }
        }
        iVar0++;
    }
    return iVar1;
}

int func_115(int iParam0)//Position - 0x5F0B
{
    int iVar0;
    
    if (!unk_0x8A7BBB98FFB32893(Local_115[iParam0]))
    {
        return 0;
    }
    iVar0 = unk_0x70D3AC024E0A9837(Local_115[iParam0]);
    if (unk_0xF4B969E0807E76C7(iVar0, 0))
    {
        return 0;
    }
    if (!unk_0x77FF1FAF6F41CA71(iVar0))
    {
        return 0;
    }
    return 1;
}

int func_116(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x5F4E
{
    func_87(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
    if (iParam3 > 7)
    {
        if (iParam3 < 12)
        {
            iParam3 = 7;
        }
    }
    Global_514C = 0;
    Global_514E = 0;
    Global_5153 = 0;
    Global_5524 = 0;
    Global_5526 = 0;
    Global_552A = 0;
    Global_280001 = 1;
    return func_68(sParam2, iParam3, 0);
}

bool func_117(var uParam0, int iParam1)//Position - 0x5F9C
{
    return (uParam0 && iParam1) != 0;
}

int func_118()//Position - 0x5FAB
{
    if (!unk_0x6DF9C43E3CC645BC(joaat("s_m_y_marine_01")))
    {
        return 0;
    }
    if (!unk_0x6DF9C43E3CC645BC(joaat("lazer")))
    {
        return 0;
    }
    if (!unk_0x6DF9C43E3CC645BC(joaat("s_m_y_pilot_01")))
    {
        return 0;
    }
    return 1;
}

void func_119(var uParam0, int iParam1)//Position - 0x5FE7
{
    func_120(uParam0, iParam1);
}

void func_120(var uParam0, var uParam1)//Position - 0x5FF7
{
    *uParam0 = (*uParam0 || uParam1);
}

bool func_121()//Position - 0x6008
{
    return unk_0xA2BC31158C8CEFD2(Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_27.f_12, 0);
}

int func_122(int iParam0, bool bParam1, bool bParam2)//Position - 0x6024
{
    if (bParam1)
    {
        if (func_123(iParam0))
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

bool func_123(int iParam0)//Position - 0x6056
{
    return func_124(iParam0);
}

bool func_124(int iParam0)//Position - 0x6064
{
    return unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_D.f_1, 0);
}

void func_125()//Position - 0x607E
{
    unk_0x6BB2B1818CAE531E(joaat("s_m_y_marine_01"));
    unk_0x6BB2B1818CAE531E(joaat("lazer"));
    unk_0x6BB2B1818CAE531E(joaat("s_m_y_pilot_01"));
}

int func_126()//Position - 0x60A1
{
    int iVar0;
    
    switch (Local_115.f_13)
    {
        case 0:
            if (func_148())
            {
                Local_115.f_13 = 1;
            }
            break;
        
        case 1:
            if (func_147())
            {
                Local_115.f_13 = 2;
            }
            break;
        
        case 2:
            if ((((((func_122(unk_0x7C7787D2D7139A85(), 1, 0) || func_121()) || func_24(unk_0x7C7787D2D7139A85()) == 225) || func_24(unk_0x7C7787D2D7139A85()) == 233) || func_29(unk_0x7C7787D2D7139A85()) == 236) || Global_180607) || (unk_0xA51CBC95AC3A4B14() && func_8()))
            {
                func_119(&(Local_115.f_14), 1);
                Local_115.f_13 = 3;
            }
            else if (func_145())
            {
                func_119(&(Local_115.f_14), 1);
                Local_115.f_13 = 3;
            }
            break;
        
        case 3:
            if (!func_122(unk_0x7C7787D2D7139A85(), 1, 0) && !func_121())
            {
                iVar0 = 0;
                while (iVar0 < 2)
                {
                    func_142(iVar0);
                    iVar0++;
                }
                iVar0 = 0;
                while (iVar0 < 3)
                {
                    func_129(iVar0);
                    iVar0++;
                }
            }
            if ((((func_24(unk_0x7C7787D2D7139A85()) == 225 || func_24(unk_0x7C7787D2D7139A85()) == 233) || func_29(unk_0x7C7787D2D7139A85()) == 236) || Global_180607) || (unk_0xA51CBC95AC3A4B14() && func_8()))
            {
                func_128();
            }
            if (func_127())
            {
                Local_115.f_13 = 4;
            }
            break;
        
        case 4:
            func_128();
            return 1;
            break;
    }
    return 0;
}

int func_127()//Position - 0x6232
{
    if (unk_0xAAAE7D3270284C4E() > 1)
    {
        return 0;
    }
    if (SYSTEM::VDIST2(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), -2076.374f, 3112.294f, 33.13584f) >= 1030225f)
    {
        return 1;
    }
    return 0;
}

void func_128()//Position - 0x6273
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    iVar0 = 0;
    while (iVar0 < 2)
    {
        if (unk_0x8A7BBB98FFB32893(Local_115[iVar0]))
        {
            iVar1 = unk_0x70D3AC024E0A9837(Local_115[iVar0]);
            if (!unk_0xF4B969E0807E76C7(iVar1, 0))
            {
                unk_0x0FFB05DA97E810B5(&iVar1);
            }
        }
        iVar0++;
    }
    iVar0 = 0;
    while (iVar0 < 3)
    {
        if (unk_0x8A7BBB98FFB32893(Local_115.f_3[iVar0 /*5*/].f_1))
        {
            iVar1 = unk_0x70D3AC024E0A9837(Local_115.f_3[iVar0 /*5*/].f_1);
            if (!unk_0xF4B969E0807E76C7(iVar1, 0))
            {
                unk_0x0FFB05DA97E810B5(&iVar1);
            }
        }
        if (unk_0x8A7BBB98FFB32893(Local_115.f_3[iVar0 /*5*/]))
        {
            iVar2 = unk_0x40237B62400B4BCC(Local_115.f_3[iVar0 /*5*/]);
            if (!unk_0xF4B969E0807E76C7(iVar2, 0))
            {
                unk_0xF25956700ADFD77F(&iVar2);
            }
        }
        iVar0++;
    }
}

void func_129(int iParam0)//Position - 0x6329
{
    int iVar0;
    vector3 vVar1;
    int iVar2;
    vector3 vVar3;
    int iVar4;
    
    if (Local_115.f_3[iParam0 /*5*/].f_2 > 2)
    {
        if (unk_0x8A7BBB98FFB32893(Local_115.f_3[iParam0 /*5*/].f_1))
        {
            if (!unk_0xF4B969E0807E76C7(unk_0x70D3AC024E0A9837(Local_115.f_3[iParam0 /*5*/].f_1), 0))
            {
                iVar0 = unk_0x70D3AC024E0A9837(Local_115.f_3[iParam0 /*5*/].f_1);
                vVar1 = { unk_0xACE5E491FC1B0D37(iVar0, 1) };
                if (vVar1.z <= -150f)
                {
                    unk_0x0FFB05DA97E810B5(&iVar0);
                    if (unk_0x8A7BBB98FFB32893(Local_115.f_3[iParam0 /*5*/]))
                    {
                        if (!unk_0xF4B969E0807E76C7(unk_0x40237B62400B4BCC(Local_115.f_3[iParam0 /*5*/]), 0))
                        {
                            iVar2 = unk_0x40237B62400B4BCC(Local_115.f_3[iParam0 /*5*/]);
                            unk_0xF25956700ADFD77F(&iVar2);
                        }
                    }
                }
            }
        }
    }
    switch (Local_115.f_3[iParam0 /*5*/].f_2)
    {
        case 0:
            if (func_141(iParam0, 16))
            {
                Local_115.f_3[iParam0 /*5*/].f_4 = -1;
                Local_115.f_3[iParam0 /*5*/].f_2 = 1;
            }
            break;
        
        case 1:
            if (func_139(iParam0))
            {
                Local_115.f_3[iParam0 /*5*/].f_2 = 2;
            }
            break;
        
        case 2:
            vVar3 = { func_138(iParam0) };
            if (!func_137(vVar3))
            {
                if (!unk_0xEBEE4F1E646710F5(vVar3, 20f) && !unk_0x93086679C0E859D8(vVar3, 20f))
                {
                    if (func_132(vVar3, unk_0xD2809C7F7FD79247(unk_0x23625FE58BACEBFD(Local_115.f_3[iParam0 /*5*/].f_4)), iParam0))
                    {
                        Local_115.f_3[iParam0 /*5*/].f_2 = 3;
                    }
                }
            }
            break;
        
        case 3:
            if (func_141(iParam0, 2))
            {
                Local_115.f_3[iParam0 /*5*/].f_2 = 4;
            }
            break;
        
        case 4:
            iVar4 = unk_0x23625FE58BACEBFD(Local_115.f_3[iParam0 /*5*/].f_4);
            if (!unk_0xD4B321D9096B01FC(iVar4))
            {
                Local_115.f_3[iParam0 /*5*/].f_2 = 5;
            }
            else if (unk_0xF4B969E0807E76C7(iVar4, 0))
            {
                Local_115.f_3[iParam0 /*5*/].f_2 = 5;
            }
            else if (unk_0x0B8262712AD6841C(iVar4) || unk_0xCE4D7B70DA8B0C86(iVar4))
            {
                if (func_131(unk_0x4D57D3E5ECE15A41(iVar4, 0)))
                {
                    Local_115.f_3[iParam0 /*5*/].f_2 = 5;
                }
            }
            break;
        
        case 5:
            if (func_141(iParam0, 8))
            {
                Local_115.f_3[iParam0 /*5*/].f_2 = 6;
                Local_115.f_3[iParam0 /*5*/].f_4 = -1;
            }
            break;
        
        case 6:
            if (!func_130(iParam0, 16))
            {
                Local_115.f_3[iParam0 /*5*/].f_2 = 0;
            }
            if (func_139(iParam0))
            {
                Local_115.f_3[iParam0 /*5*/].f_2 = 3;
            }
            break;
    }
}

int func_130(int iParam0, int iParam1)//Position - 0x6583
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < unk_0xACF7D965CEBE5714())
    {
        if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar0)))
        {
            if (func_47(Local_139[iVar0 /*8*/].f_4[iParam0], iParam1))
            {
                return 1;
            }
        }
        iVar0++;
    }
    return 0;
}

int func_131(int iParam0)//Position - 0x65C7
{
    if (unk_0xD4B321D9096B01FC(iParam0))
    {
        if (unk_0xF4B969E0807E76C7(iParam0, 0))
        {
            return 1;
        }
        else if (!unk_0xD960230552BC4165(iParam0, 0))
        {
            if (!unk_0xCFBE5B663F1567A7(iParam0))
            {
                return 1;
            }
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int func_132(vector3 vParam0, float fParam1, int iParam2)//Position - 0x660A
{
    int iVar0;
    
    if (!unk_0x722688699565161D())
    {
        return 1;
    }
    iVar0 = 1;
    if (!unk_0x8A7BBB98FFB32893(Local_115.f_3[iParam2 /*5*/]))
    {
        if (!func_134(&(Local_115.f_3[iParam2 /*5*/]), joaat("lazer"), vParam0, fParam1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
        {
            iVar0 = 0;
        }
        else
        {
            unk_0x00C0C8FB384FCCF2(unk_0x40237B62400B4BCC(Local_115.f_3[iParam2 /*5*/]), 3);
        }
    }
    if (unk_0x8A7BBB98FFB32893(Local_115.f_3[iParam2 /*5*/]))
    {
        if (!unk_0x8A7BBB98FFB32893(Local_115.f_3[iParam2 /*5*/].f_1))
        {
            if (!func_133(&(Local_115.f_3[iParam2 /*5*/].f_1), Local_115.f_3[iParam2 /*5*/], 29, joaat("s_m_y_pilot_01"), -1, 1, 1, 1))
            {
                iVar0 = 0;
            }
            else
            {
                unk_0x10C684A48D05C17B(unk_0x70D3AC024E0A9837(Local_115.f_3[iParam2 /*5*/].f_1), joaat("vehicle_weapon_space_rocket"));
                unk_0x39E65F0E9CA381F7(unk_0x70D3AC024E0A9837(Local_115.f_3[iParam2 /*5*/].f_1), false);
            }
        }
    }
    else
    {
        iVar0 = 0;
    }
    return iVar0;
}

int func_133(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x66F2
{
    if (!unk_0xEA2FCC46B8870EF9(1))
    {
        return 0;
    }
    if (!unk_0x9C625F4590C97F13(iParam1))
    {
        return 0;
    }
    if (!unk_0xD960230552BC4165(unk_0x40237B62400B4BCC(iParam1), 0))
    {
        return 0;
    }
    *uParam0 = unk_0x62F4D4DB24880CA5(unk_0x81024A420EDCE2B5(unk_0x40237B62400B4BCC(iParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
    if (unk_0x9C625F4590C97F13(*uParam0))
    {
        unk_0x9D3FE4786B8925D2(unk_0x70D3AC024E0A9837(*uParam0), iParam7);
        if (unk_0x457EF27DC4F63820(unk_0x70D3AC024E0A9837(*uParam0)))
        {
            if (bParam5)
            {
                unk_0x9E11C6A0FFF1E999(*uParam0, 1);
            }
        }
        return 1;
    }
    return 0;
}

int func_134(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x677A
{
    float fVar0;
    int iVar1;
    
    if (!unk_0xCBBFE6965951B21E(iParam1))
    {
        return 0;
    }
    if (!unk_0x987DF1B2025CC706(1))
    {
        return 0;
    }
    fVar0 = 1.5f;
    if (iParam1 == -32878452)
    {
        fVar0 = 20f;
    }
    if (bParam9)
    {
        unk_0x7FB505C34A14BAAA(vParam2, fVar0, 0, 0, 0, 0, false, 0);
    }
    iVar1 = unk_0x847817A65E16621A(iParam1, vParam2, fParam3, bParam5, iParam4, iParam12);
    if (unk_0xD4B321D9096B01FC(iVar1))
    {
        *uParam0 = unk_0x7B82BDB8FBC5EEF9(iVar1);
        Global_26A0A9.f_1865 = iVar1;
        if (unk_0x9C625F4590C97F13(*uParam0))
        {
            if (bParam13)
            {
                unk_0x18620062E6D68D6E(iVar1, 1);
            }
            unk_0x9D3FE4786B8925D2(iVar1, iParam8);
            if (unk_0x457EF27DC4F63820(iVar1))
            {
                if (bParam6)
                {
                    unk_0x9E11C6A0FFF1E999(*uParam0, 1);
                }
                else
                {
                    unk_0x9E11C6A0FFF1E999(*uParam0, 0);
                }
                if (bParam11)
                {
                    unk_0xA986EE8F099052F4(*uParam0, unk_0x7C7787D2D7139A85(), 1);
                }
            }
            unk_0xEF5C4BC935BFF76E(iVar1, bParam7);
            unk_0x98E94863AB8F55F4(iVar1, 1);
            if (bParam10)
            {
                unk_0x58DFD2EDF224315F(iVar1);
                unk_0x48AB9211DB740DB5(iVar1, 5, 5, 1f);
            }
            func_135(vParam2, fParam3, iParam1, iVar1);
            return 1;
        }
    }
    return 0;
}

void func_135(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x6882
{
    int iVar0;
    
    if (func_136(unk_0x7C7787D2D7139A85(), vParam0, iParam2) > -1)
    {
        if ((Global_24B2CF.f_B5E[1 /*6*/].f_5 == iParam3 && Global_24B2CF.f_B5E[1 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_24B2CF.f_B5E[1 /*6*/], vParam0) < 0.5f)
        {
            return;
        }
        iVar0 = 0;
        while (iVar0 < 2)
        {
            if (iVar0 < 1)
            {
                Global_24B2CF.f_B5E[iVar0 /*6*/] = { Global_24B2CF.f_B5E[iVar0 + 1 /*6*/] };
            }
            iVar0++;
        }
        Global_24B2CF.f_B5E[1 /*6*/] = { vParam0 };
        Global_24B2CF.f_B5E[1 /*6*/].f_3 = fParam1;
        Global_24B2CF.f_B5E[1 /*6*/].f_4 = iParam2;
        Global_24B2CF.f_B5E[1 /*6*/].f_5 = iParam3;
    }
}

int func_136(int iParam0, vector3 vParam1, int iParam2)//Position - 0x6955
{
    int iVar0;
    int iVar1;
    vector3 vVar2;
    
    iVar0 = iParam0;
    if (iVar0 > -1)
    {
        iVar1 = 0;
        while (iVar1 < 2)
        {
            if (Global_24E477.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
            {
                vVar2 = { vParam1 };
                if (unk_0x01CBD71E072E9F33((Global_24E477.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
                {
                    vVar2.z = Global_24E477.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_2;
                }
                if (SYSTEM::VDIST(Global_24E477.f_1CD[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
                {
                    return iVar1;
                }
            }
            iVar1++;
        }
    }
    return -1;
}

int func_137(vector3 vParam0)//Position - 0x69F3
{
    if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
    {
        return 1;
    }
    return 0;
}

Vector3 func_138(int iParam0)//Position - 0x6A1D
{
    int iVar0;
    vector3 vVar1;
    
    iVar0 = unk_0x23625FE58BACEBFD(Local_115.f_3[iParam0 /*5*/].f_4);
    if (unk_0xF4B969E0807E76C7(iVar0, 0))
    {
        return 0f, 0f, 0f;
    }
    vVar1 = { unk_0x16DECC52D9360F1E(unk_0xACE5E491FC1B0D37(iVar0, 1), unk_0xD2809C7F7FD79247(iVar0), 0f, -250f, (40f * SYSTEM::TO_FLOAT(iParam0))) };
    if (vVar1.z < 100f)
    {
        vVar1.z = 100f;
    }
    return vVar1;
}

int func_139(int iParam0)//Position - 0x6A86
{
    int iVar0;
    int iVar1;
    vector3 vVar2;
    
    iVar0 = 0;
    while (iVar0 < unk_0xACF7D965CEBE5714())
    {
        if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar0)))
        {
            iVar1 = unk_0x23625FE58BACEBFD(unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar0)));
            if (!func_140(unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar0))))
            {
                if (unk_0x0B8262712AD6841C(iVar1) || unk_0xCE4D7B70DA8B0C86(iVar1))
                {
                    if (unk_0xEBE4F888D9965006(unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar0))) >= 4)
                    {
                        vVar2 = { unk_0xACE5E491FC1B0D37(iVar1, 0) };
                        if (func_20(vVar2, 3, 1000, 0) && vVar2.z > 90f)
                        {
                            Local_115.f_3[iParam0 /*5*/].f_4 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar0));
                            return 1;
                        }
                    }
                }
            }
        }
        iVar0++;
    }
    return 0;
}

int func_140(int iParam0)//Position - 0x6B3C
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    iVar0 = unk_0x23625FE58BACEBFD(iParam0);
    if (!unk_0xD4B321D9096B01FC(iVar0))
    {
        return 1;
    }
    if (unk_0xF4B969E0807E76C7(iVar0, 0))
    {
        return 1;
    }
    iVar1 = 0;
    while (iVar1 < 3)
    {
        iVar2 = unk_0x23625FE58BACEBFD(Local_115.f_3[iVar1 /*5*/].f_4);
        if (unk_0xD4B321D9096B01FC(iVar2))
        {
            if (iParam0 == Local_115.f_3[iVar1 /*5*/].f_4)
            {
                return 1;
            }
        }
        iVar1++;
    }
    return 0;
}

int func_141(int iParam0, int iParam1)//Position - 0x6BA7
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < unk_0xACF7D965CEBE5714())
    {
        if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar0)))
        {
            if (!func_47(Local_139[iVar0 /*8*/].f_4[iParam0], iParam1))
            {
                return 0;
            }
        }
        iVar0++;
    }
    return 1;
}

void func_142(int iParam0)//Position - 0x6BEC
{
    switch (Local_115.f_15[iParam0])
    {
        case 0:
            if (func_144(iParam0, 64))
            {
                Local_115.f_15[iParam0] = 1;
            }
            break;
        
        case 1:
            if (func_143(iParam0, 1))
            {
                Local_115.f_15[iParam0] = 2;
            }
            break;
        
        case 2:
            if (func_143(iParam0, 2))
            {
                Local_115.f_15[iParam0] = 3;
            }
            break;
        
        case 3:
            if (func_144(iParam0, 4))
            {
                Local_115.f_15[iParam0] = 4;
            }
            break;
        
        case 4:
            if (func_143(iParam0, 8))
            {
                Local_115.f_15[iParam0] = 5;
            }
            if (!func_143(iParam0, 1))
            {
                Local_115.f_15[iParam0] = 7;
            }
            if (func_143(iParam0, 16))
            {
                Local_115.f_15[iParam0] = 6;
            }
            break;
        
        case 5:
            if (func_143(iParam0, 16))
            {
                Local_115.f_15[iParam0] = 6;
            }
            if (!func_143(iParam0, 1))
            {
                Local_115.f_15[iParam0] = 7;
            }
            break;
        
        case 6:
            break;
        
        case 7:
            if (!func_143(iParam0, 4))
            {
                Local_115.f_15[iParam0] = 0;
            }
            break;
    }
}

int func_143(int iParam0, int iParam1)//Position - 0x6D0E
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < unk_0xACF7D965CEBE5714())
    {
        if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar0)))
        {
            if (func_47(Local_139[iVar0 /*8*/].f_1[iParam0], iParam1))
            {
                return 1;
            }
        }
        iVar0++;
    }
    return 0;
}

int func_144(int iParam0, int iParam1)//Position - 0x6D52
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < unk_0xACF7D965CEBE5714())
    {
        if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar0)))
        {
            if (!func_47(Local_139[iVar0 /*8*/].f_1[iParam0], iParam1))
            {
                return 0;
            }
        }
        iVar0++;
    }
    return 1;
}

int func_145()//Position - 0x6D97
{
    int iVar0;
    
    if (!unk_0x722688699565161D())
    {
        return 1;
    }
    iVar0 = 1;
    if (!func_146(&(Local_115[0]), 29, joaat("s_m_y_marine_01"), -2308.4f, 3391f, 30.0601f, 55.8214f, 1, 1, 1))
    {
        iVar0 = 0;
    }
    else if (unk_0x8A7BBB98FFB32893(Local_115[0]))
    {
        unk_0xC167C31F20B1FD61(unk_0x70D3AC024E0A9837(Local_115[0]), joaat("weapon_assaultrifle"), 200, true, true);
    }
    if (!func_146(&(Local_115[1]), 29, joaat("s_m_y_marine_01"), -1588.9f, 2792.9f, 16.1385f, 229.437f, 1, 1, 1))
    {
        iVar0 = 0;
    }
    else if (unk_0x8A7BBB98FFB32893(Local_115[1]))
    {
        unk_0xC167C31F20B1FD61(unk_0x70D3AC024E0A9837(Local_115[1]), joaat("weapon_assaultrifle"), 200, true, true);
    }
    return iVar0;
}

int func_146(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x6E56
{
    int iVar0;
    
    if (!unk_0xEA2FCC46B8870EF9(1))
    {
        return 0;
    }
    iVar0 = unk_0xB983F26E7AFB47BF(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
    *uParam0 = unk_0x62F4D4DB24880CA5(iVar0);
    if (unk_0x9C625F4590C97F13(*uParam0))
    {
        unk_0x9D3FE4786B8925D2(iVar0, iParam7);
        if (unk_0x457EF27DC4F63820(iVar0))
        {
            if (bParam5)
            {
                unk_0x9E11C6A0FFF1E999(*uParam0, 1);
            }
        }
        return 1;
    }
    return 0;
}

int func_147()//Position - 0x6EB5
{
    int iVar0;
    int iVar1;
    
    iVar0 = 1;
    iVar1 = 0;
    while (iVar1 < unk_0xACF7D965CEBE5714())
    {
        if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar1)))
        {
            if (!func_117(Local_139[iVar1 /*8*/], 2))
            {
                iVar0 = 0;
            }
        }
        iVar1++;
    }
    return iVar0;
}

int func_148()//Position - 0x6EF6
{
    int iVar0;
    int iVar1;
    
    iVar0 = 1;
    iVar1 = 0;
    while (iVar1 < unk_0xACF7D965CEBE5714())
    {
        if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar1)))
        {
            if (!func_117(Local_139[iVar1 /*8*/], 1))
            {
                iVar0 = 0;
            }
        }
        iVar1++;
    }
    return iVar0;
}

void func_149()//Position - 0x6F37
{
    if (func_105(&uLocal_152) && func_103(&uLocal_152, Global_40001.f_53D0, 0))
    {
        func_102(&uLocal_152);
    }
    if (func_105(&uLocal_150) && func_103(&uLocal_150, Global_40001.f_53D1, 0))
    {
        func_102(&uLocal_150);
        iLocal_147 = 0;
    }
    if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) <= 0)
    {
        if (func_150())
        {
            if (!Global_26A0A9.f_189B)
            {
                Global_26A0A9.f_189B = 1;
                func_54("BASE_EXP_WARN", -1);
            }
            if (!iLocal_147)
            {
                iLocal_147 = 1;
                func_104(&uLocal_152, 0, 0);
                func_104(&uLocal_150, 0, 0);
            }
            else if (!func_105(&uLocal_152))
            {
                unk_0x60F310C72311BCA8(5);
                bLocal_142 = true;
                bLocal_143 = true;
                iLocal_147 = 0;
                func_102(&uLocal_152);
                func_102(&uLocal_150);
            }
        }
    }
}

int func_150()//Position - 0x7006
{
    int iVar0;
    int iVar1;
    
    iVar1 = 0;
    while (iVar1 < 26)
    {
        func_153(&iLocal_148, iVar1);
        iLocal_149 = func_152();
        if (iLocal_149 >= 0)
        {
            iVar0 = func_151(iLocal_149);
            if (unk_0xD4B321D9096B01FC(iVar0) && unk_0x4625051E51BA911B(iVar0))
            {
                if (unk_0x3D464779B732760F(iVar0) == unk_0x0FA8183DAD2B3203())
                {
                    return 1;
                }
            }
        }
        iVar1++;
    }
    return 0;
}

var func_151(int iParam0)//Position - 0x7067
{
    var uVar0;
    
    switch (iParam0)
    {
        case 0:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f);
            break;
        
        case 1:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f);
            break;
        
        case 2:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f);
            break;
        
        case 3:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f);
            break;
        
        case 4:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f);
            break;
        
        case 5:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f);
            break;
        
        case 6:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f);
            break;
        
        case 7:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f);
            break;
        
        case 8:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f);
            break;
        
        case 9:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f);
            break;
        
        case 10:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f);
            break;
        
        case 11:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f);
            break;
        
        case 12:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f);
            break;
        
        case 13:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f);
            break;
        
        case 14:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f);
            break;
        
        case 15:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f);
            break;
        
        case 16:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f);
            break;
        
        case 17:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f);
            break;
        
        case 18:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f);
            break;
        
        case 19:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
            break;
        
        case 20:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f);
            break;
        
        case 21:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f);
            break;
        
        case 22:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f);
            break;
        
        case 23:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f);
            break;
        
        case 24:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f);
            break;
        
        case 25:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f);
            break;
        
        case 26:
            uVar0 = unk_0x067323040AE9539F(iLocal_148, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f);
            break;
    }
    return uVar0;
}

int func_152()//Position - 0x760F
{
    if (unk_0x1B58046E9C881440(iLocal_148, -1773.944f, 3287.334f, 30f, -2029.776f, 2845.083f, 1250f, 255f))
    {
        return 0;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -2725.889f, 3291.099f, 30f, -2009.182f, 2879.835f, 1250f, 180f))
    {
        return 1;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -2442.026f, 3326.699f, 30f, -2033.928f, 3089.049f, 1250f, 205f))
    {
        return 2;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -1917.165f, 3374.209f, 30f, -2016.791f, 3195.058f, 1250f, 86.25f))
    {
        return 3;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -2192.753f, 3373.278f, 30f, -2191.544f, 3150.417f, 1250f, 150f))
    {
        return 4;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -2077.663f, 3344.514f, 30f, -2191.544f, 3150.417f, 1250f, 140.5f))
    {
        return 5;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -2861.755f, 3352.661f, 30f, -2715.871f, 3269.916f, 1250f, 90f))
    {
        return 6;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -2005.574f, 3364.533f, 30f, -1977.569f, 3330.888f, 1250f, 100f))
    {
        return 7;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -1682.235f, 3004.285f, 30f, -1942.747f, 2947.441f, 1250f, 248.75f))
    {
        return 8;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -2393.295f, 2936.406f, 31.6801f, -2453.037f, 3006.863f, 52.31003f, 128f))
    {
        return 9;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -2347.185f, 3023.83f, 31.56573f, -2517.33f, 2989.063f, 49.95644f, 127.25f))
    {
        return 10;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -2259.922f, 3358.04f, 29.99972f, -2299.772f, 3385.79f, 38.06014f, 16f))
    {
        return 11;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -2476.309f, 3363.914f, 31.67933f, -2431.981f, 3287.669f, 39.97826f, 214.25f))
    {
        return 12;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -2103.081f, 2797.783f, 29.37864f, -2096.821f, 2874.423f, 57.80989f, 65.75f))
    {
        return 13;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -1877.436f, 2783.151f, 31.80618f, -1797.873f, 2924.37f, 1307.111f, 88f))
    {
        return 14;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -1761.116f, 2834.651f, 31.80622f, -1720.887f, 2906.419f, 1281.806f, 88f))
    {
        return 15;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -1761.493f, 2817.68f, 32.37125f, -1769.704f, 2913.734f, 1281.807f, 88f))
    {
        return 16;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -1879.297f, 2772.653f, 29.57795f, -1864.521f, 2825.472f, 1281.806f, 88f))
    {
        return 17;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9f))
    {
        return 18;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -2676.74f, 3366.988f, 29.92394f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
    {
        return 19;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -2807.397f, 3264.226f, 29.92764f, -2744.79f, 3340.347f, 1037.804f, 9.5f))
    {
        return 20;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -2808.236f, 3264.634f, 29.92764f, -2747.55f, 3187.8f, 1037.457f, 9.5f))
    {
        return 21;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -2530.996f, 3064.151f, 29.71081f, -2748.557f, 3189.939f, 1037.457f, 9.5f))
    {
        return 22;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -2533.902f, 3062.491f, 29.70715f, -2520.674f, 2996.817f, 1037.457f, 9.5f))
    {
        return 23;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -2500.716f, 2927.103f, 29.45663f, -2445.696f, 2896.657f, 1037.68f, 9.5f))
    {
        return 24;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -2020.543f, 2810.747f, 29.45658f, -1927.949f, 2785.779f, 1037.671f, 9.5f))
    {
        return 25;
    }
    else if (unk_0x1B58046E9C881440(iLocal_148, -2261.899f, 3376.549f, 29.77859f, -2141.067f, 3376.773f, 1037.9f, 9.5f))
    {
        return 26;
    }
    return -1;
}

void func_153(var uParam0, int iParam1)//Position - 0x7BA4
{
    switch (iParam1)
    {
        case 0:
            *uParam0 = 0;
            break;
        
        case 1:
            *uParam0 = 1;
            break;
        
        case 2:
            *uParam0 = 2;
            break;
        
        case 3:
            *uParam0 = 3;
            break;
        
        case 4:
            *uParam0 = 4;
            break;
        
        case 5:
            *uParam0 = 5;
            break;
        
        case 6:
            *uParam0 = 19;
            break;
        
        case 7:
            *uParam0 = 20;
            break;
        
        case 8:
            *uParam0 = 21;
            break;
        
        case 9:
            *uParam0 = 32;
            break;
        
        case 10:
            *uParam0 = 36;
            break;
        
        case 11:
            *uParam0 = 40;
            break;
        
        case 12:
            *uParam0 = 41;
            break;
        
        case 13:
            *uParam0 = 43;
            break;
        
        case 14:
            *uParam0 = 44;
            break;
        
        case 15:
            *uParam0 = 45;
            break;
        
        case 16:
            *uParam0 = 46;
            break;
        
        case 17:
            *uParam0 = 47;
            break;
        
        case 18:
            *uParam0 = 48;
            break;
        
        case 19:
            *uParam0 = 49;
            break;
        
        case 20:
            *uParam0 = 50;
            break;
        
        case 21:
            *uParam0 = 53;
            break;
        
        case 22:
            *uParam0 = 54;
            break;
        
        case 23:
            *uParam0 = 55;
            break;
        
        case 24:
            *uParam0 = 56;
            break;
        
        case 25:
            *uParam0 = 57;
            break;
    }
}

int func_154()//Position - 0x7D19
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    
    if (func_60(unk_0x7C7787D2D7139A85()))
    {
        return 1;
    }
    if (func_159(1))
    {
        iVar0 = func_158();
        if (iVar0 != func_38())
        {
            if (func_60(iVar0))
            {
                return 1;
            }
        }
    }
    iVar1 = 0;
    while (iVar1 < 32)
    {
        iVar2 = unk_0x0C98179F08C6DA4F(iVar1);
        if (func_37(iVar2, 0, 1))
        {
            if (iVar2 != unk_0x7C7787D2D7139A85())
            {
                if (func_159(1))
                {
                    if (func_156(unk_0x7C7787D2D7139A85(), iVar2))
                    {
                        if (func_60(iVar2))
                        {
                            return 1;
                        }
                    }
                }
                if (func_155(unk_0x23625FE58BACEBFD(unk_0x7C7787D2D7139A85()), unk_0x23625FE58BACEBFD(iVar2)))
                {
                    iVar3 = unk_0x4D57D3E5ECE15A41(unk_0x23625FE58BACEBFD(iVar2), 0);
                    if (unk_0x300C62F79A4441EB(iVar3, -1, 0) == unk_0x23625FE58BACEBFD(iVar2))
                    {
                        if (func_60(iVar2))
                        {
                            return 1;
                        }
                    }
                }
            }
        }
        iVar1++;
    }
    return 0;
}

int func_155(int iParam0, int iParam1)//Position - 0x7DE6
{
    int iVar0;
    int iVar1;
    
    if (unk_0xD4B321D9096B01FC(iParam0) && unk_0xD4B321D9096B01FC(iParam1))
    {
        if (!unk_0xF4B969E0807E76C7(iParam0, 0) && !unk_0xF4B969E0807E76C7(iParam1, 0))
        {
            if (unk_0x5294582CE404D3F4(iParam0, 0) && unk_0x5294582CE404D3F4(iParam1, 0))
            {
                iVar0 = unk_0x4D57D3E5ECE15A41(iParam0, 0);
                iVar1 = unk_0x4D57D3E5ECE15A41(iParam1, 0);
                if (unk_0xD4B321D9096B01FC(iVar0) && unk_0xD4B321D9096B01FC(iVar1))
                {
                    if (iVar0 == iVar1)
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int func_156(int iParam0, int iParam1)//Position - 0x7E62
{
    int iVar0;
    
    iVar0 = func_157(iParam0);
    if (!iVar0 == func_38())
    {
        if (iVar0 == func_157(iParam1))
        {
            return 1;
        }
    }
    return 0;
}

int func_157(int iParam0)//Position - 0x7E8D
{
    if (iParam0 != func_38())
    {
        return Global_18DB1B[iParam0 /*614*/].f_B;
    }
    return func_38();
}

var func_158()//Position - 0x7EB0
{
    return Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_B;
}

bool func_159(bool bParam0)//Position - 0x7EC5
{
    return func_58(unk_0x7C7787D2D7139A85(), bParam0);
}

int func_160()//Position - 0x7ED7
{
    var uVar0;
    
    func_168(&uVar0);
    if (Global_140852 == 0)
    {
        if (!unk_0x393E9918BC37548A())
        {
            return 1;
        }
    }
    if (func_167())
    {
        return 1;
    }
    if (Global_258E39)
    {
        return 1;
    }
    if (func_166())
    {
        return 1;
    }
    if (func_165(159))
    {
        if (!func_164())
        {
            return 1;
        }
    }
    if (func_165(157))
    {
        return 1;
    }
    if (!unk_0x2A983C9CF4EE0D5E())
    {
        return 1;
    }
    if (func_161() != 0)
    {
        if (unk_0x222F76006659B0EB(func_161()) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int func_161()//Position - 0x7F61
{
    switch (func_163())
    {
        case 0:
            return func_162();
            break;
        
        case 2:
            return joaat("creator");
            break;
    }
    return 0;
}

int func_162()//Position - 0x7F94
{
    switch (Global_258E9F)
    {
        case 0:
            return joaat("freemode");
        
        default:
    }
    return joaat("freemode");
}

int func_163()//Position - 0x7FB8
{
    return Global_7810;
}

bool func_164()//Position - 0x7FC3
{
    return Global_255E41.f_256;
}

int func_165(int iParam0)//Position - 0x7FD2
{
    if (unk_0xD076BFB919B20653(1, iParam0))
    {
        return 1;
    }
    return 0;
}

bool func_166()//Position - 0x7FE9
{
    return Global_258577;
}

bool func_167()//Position - 0x7FF5
{
    return Global_255E41.f_251;
}

void func_168(var uParam0)//Position - 0x8006
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
                    func_169(iVar0);
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

void func_169(int iParam0)//Position - 0x8079
{
    vector3 vVar0;
    int iVar1;
    int iVar2;
    bool bVar3;
    
    if (unk_0x3C1EC42A2CC175C5(1, iParam0, &vVar0, 3))
    {
        if (func_37(vVar0.y, 1, 1))
        {
            iVar1 = unk_0x23625FE58BACEBFD(vVar0.y);
            if (unk_0xD4B321D9096B01FC(iVar1))
            {
                if (unk_0x5294582CE404D3F4(iVar1, 0))
                {
                    iVar2 = unk_0x4D57D3E5ECE15A41(iVar1, 0);
                    if (unk_0x3D65AB2C3D476E32(iVar2, vVar0.z) && unk_0xF77CF4BC35906B30())
                    {
                        if (func_170(iVar2, &bVar3))
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

int func_170(int iParam0, var uParam1)//Position - 0x80FA
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

void func_171()//Position - 0x8159
{
    if (unk_0x03E221531363601B(false, 0) != 5)
    {
        if (func_178(5, 0, 1))
        {
            if (unk_0x069FA774AADBDDE6(0) <= 5)
            {
                unk_0x98B3F83A2664256A(5);
            }
        }
    }
    if (unk_0x0336A7593E5AD83F(false, 0) != 3)
    {
        if (func_172(3, 0, 1))
        {
            if (unk_0x939D03DFD0EF6BD1(0) <= 3)
            {
                unk_0xA019A9258930EC41(3);
            }
        }
    }
}

bool func_172(int iParam0, bool bParam1, bool bParam2)//Position - 0x81A5
{
    return func_173(1, iParam0, 1, bParam1, bParam2);
}

int func_173(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x81B9
{
    int iVar0;
    int iVar1;
    
    if (!unk_0xA2BC31158C8CEFD2(Global_152428, 0))
    {
        return 0;
    }
    if ((bParam2 && !bParam3) && iParam1 <= (func_177(iParam0) - func_176(iParam0, 0)))
    {
        return 1;
    }
    else
    {
        if (bParam3)
        {
            if (bParam2)
            {
                iVar0 = (iParam1 - func_176(iParam0, 0));
            }
            else
            {
                iVar0 = iParam1;
            }
            iVar1 = (func_177(iParam0) - func_175(iParam0));
        }
        else
        {
            if (bParam2)
            {
                iVar0 = (iParam1 - func_176(iParam0, 0));
            }
            else
            {
                iVar0 = iParam1;
            }
            iVar1 = (func_177(iParam0) - func_176(iParam0, 1));
        }
        if (!bParam4 && Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/] != 3)
        {
            iVar1 = (iVar1 - func_174(iParam0));
        }
        if (iVar0 < iVar1)
        {
            return 1;
        }
    }
    return 0;
}

int func_174(int iParam0)//Position - 0x8282
{
    switch (iParam0)
    {
        case 0:
            return 10;
            break;
        
        case 1:
            return 10;
            break;
        
        case 2:
            return 10;
            break;
    }
    return 0;
}

int func_175(int iParam0)//Position - 0x82BC
{
    switch (iParam0)
    {
        case 0:
            return Global_152428.f_1;
            break;
        
        case 1:
            return Global_152428.f_2;
            break;
        
        case 2:
            return Global_152428.f_3;
            break;
    }
    return 0;
}

int func_176(int iParam0, bool bParam1)//Position - 0x8302
{
    int iVar0;
    
    iVar0 = unk_0x7C7787D2D7139A85();
    switch (iParam0)
    {
        case 0:
            if (!unk_0xF77CF4BC35906B30())
            {
                return Global_24FD09[iVar0 /*421*/].f_D1;
            }
            else
            {
                return unk_0x03E221531363601B(!bParam1, 0);
            }
            break;
        
        case 1:
            if (!unk_0xF77CF4BC35906B30())
            {
                return Global_24FD09[iVar0 /*421*/].f_D2;
            }
            else
            {
                return unk_0x0336A7593E5AD83F(!bParam1, 0);
            }
            break;
        
        case 2:
            if (!unk_0xF77CF4BC35906B30())
            {
                return Global_24FD09[iVar0 /*421*/].f_D3;
            }
            else
            {
                return unk_0x1D20AA4302D0BF3D(!bParam1, 0);
            }
            break;
    }
    return 0;
}

int func_177(int iParam0)//Position - 0x839F
{
    switch (iParam0)
    {
        case 0:
            return Global_152430;
            break;
        
        case 1:
            return Global_152431;
            break;
        
        case 2:
            return Global_152432;
            break;
    }
    return 0;
}

bool func_178(int iParam0, bool bParam1, bool bParam2)//Position - 0x83DF
{
    return func_173(0, iParam0, 1, bParam1, bParam2);
}

void func_179()//Position - 0x83F3
{
    SYSTEM::WAIT(0);
}

void func_180()//Position - 0x8400
{
    int iVar0;
    
    if (unk_0x393E9918BC37548A())
    {
        if (unk_0x722688699565161D())
        {
            if (func_127())
            {
                func_128();
            }
        }
    }
    iVar0 = 0;
    while (iVar0 < 3)
    {
        if (unk_0x39A01A052D9B5FF0(Local_140.f_AC[iVar0]))
        {
            unk_0xAA2276003B2ADF1B(&(Local_140.f_AC[iVar0]));
        }
        iVar0++;
    }
    if (iLocal_145)
    {
        unk_0x60F310C72311BCA8(5);
        iLocal_145 = 0;
    }
    Global_19C108 = 0;
    func_182();
    func_181();
}

void func_181()//Position - 0x846C
{
    unk_0x9C9E32388A7886A2();
}

void func_182()//Position - 0x8478
{
    if (!Local_140.f_B0)
    {
        return;
    }
    if (unk_0x6DF9C43E3CC645BC(joaat("s_m_y_marine_01")))
    {
        unk_0xE0AC40EF164A2569(joaat("s_m_y_marine_01"));
    }
    if (unk_0x6DF9C43E3CC645BC(joaat("lazer")))
    {
        unk_0xE0AC40EF164A2569(joaat("lazer"));
    }
    if (unk_0x6DF9C43E3CC645BC(joaat("s_m_y_pilot_01")))
    {
        unk_0xE0AC40EF164A2569(joaat("s_m_y_pilot_01"));
    }
}

void func_183(struct<21> Param0)//Position - 0x84CB
{
    func_187(func_188(Param0), Param0);
    func_185(0, -1, 0);
    unk_0x98B3F83A2664256A(5);
    unk_0xA019A9258930EC41(3);
    unk_0xCCD47D736BFD5DE3(&Local_115, 27);
    unk_0xFF584A1B7842F821(&Local_139, 257);
    unk_0x50E03C7D74E352C4(0);
    if (!func_184())
    {
        func_180();
    }
    if (unk_0xD4BE58A7E3E102AC(3))
    {
        func_180();
    }
    Global_26A0A9.f_1895 = 0;
}

int func_184()//Position - 0x852A
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
        if (func_167())
        {
            return 0;
        }
        if (func_165(157))
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

int func_185(int iParam0, int iParam1, bool bParam2)//Position - 0x8583
{
    int iVar0;
    
    iVar0 = unk_0x306B26A377F9A5BE();
    while (iVar0 != 2)
    {
        if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
        {
            if (!bParam2)
            {
                func_181();
            }
            else
            {
                return 0;
            }
        }
        if (!func_186())
        {
            if (iParam0 == 0)
            {
                if (!unk_0x393E9918BC37548A())
                {
                    if (!bParam2)
                    {
                        func_181();
                    }
                    else
                    {
                        return 0;
                    }
                }
                if (func_167())
                {
                    if (!bParam2)
                    {
                        func_181();
                    }
                    else
                    {
                        return 0;
                    }
                }
                if (func_165(157))
                {
                    if (!bParam2)
                    {
                        func_181();
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
                    func_181();
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
                func_181();
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
            func_181();
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

bool func_186()//Position - 0x8698
{
    return Global_140852;
}

void func_187(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x86A4
{
    if (!unk_0x393E9918BC37548A())
    {
        func_181();
    }
    unk_0x4CF6FBF2580A447D(iParam0, 0, Param1.f_10);
}

int func_188(int iParam0)//Position - 0x86C3
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

