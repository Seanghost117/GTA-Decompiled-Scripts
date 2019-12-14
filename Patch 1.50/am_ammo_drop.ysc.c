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
    struct<22> Local_60 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 3, -1, 0, 0, 0, -1861623876, 0 } ;
    var uLocal_61 = 0;
    vector3 vLocal_62[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
    int iLocal_63 = 0;
    int iLocal_64 = 0;
    var uLocal_65 = 0;
    int iLocal_66 = 0;
    bool bLocal_67 = 0;
    var uLocal_68 = 0;
    var uLocal_69 = 0;
    var uLocal_70 = 0;
    var uLocal_71 = 0;
    var uLocal_72 = 16;
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
    var uLocal_90 = 0;
    var uLocal_91 = 0;
    var uLocal_92 = 0;
    var uLocal_93 = 0;
    var uLocal_94 = 0;
    var uLocal_95 = 0;
    var uLocal_96 = 0;
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
    var uLocal_112 = 0;
    var uLocal_113 = 0;
    var uLocal_114 = 0;
    var uLocal_115 = 0;
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
    var uLocal_133 = 0;
    var uLocal_134 = 0;
    var uLocal_135 = 0;
    var uLocal_136 = 0;
    var uLocal_137 = 0;
    var uLocal_138 = 0;
    var uLocal_139 = 0;
    var uLocal_140 = 0;
    var uLocal_141 = 0;
    var uLocal_142 = 0;
    var uLocal_143 = 0;
    var uLocal_144 = 0;
    var uLocal_145 = 0;
    var uLocal_146 = 0;
    var uLocal_147 = 0;
    var uLocal_148 = 0;
    var uLocal_149 = 0;
    var uLocal_150 = 0;
    var uLocal_151 = 0;
    var uLocal_152 = 0;
    var uLocal_153 = 0;
    var uLocal_154 = 0;
    var uLocal_155 = 0;
    var uLocal_156 = 0;
    var uLocal_157 = 0;
    var uLocal_158 = 0;
    var uLocal_159 = 0;
    var uLocal_160 = 0;
    var uLocal_161 = 0;
    var uLocal_162 = 0;
    var uLocal_163 = 0;
    var uLocal_164 = 0;
    var uLocal_165 = 0;
    var uLocal_166 = 0;
    var uLocal_167 = 0;
    var uLocal_168 = 0;
    var uLocal_169 = 0;
    var uLocal_170 = 0;
    var uLocal_171 = 0;
    var uLocal_172 = 0;
    var uLocal_173 = 0;
    var uLocal_174 = 0;
    var uLocal_175 = 0;
    var uLocal_176 = 0;
    var uLocal_177 = 0;
    var uLocal_178 = 0;
    var uLocal_179 = 0;
    var uLocal_180 = 0;
    var uLocal_181 = 0;
    var uLocal_182 = 0;
    var uLocal_183 = 0;
    var uLocal_184 = 0;
    var uLocal_185 = 0;
    var uLocal_186 = 0;
    var uLocal_187 = 0;
    var uLocal_188 = 0;
    var uLocal_189 = 0;
    var uLocal_190 = 0;
    var uLocal_191 = 0;
    var uLocal_192 = 0;
    var uLocal_193 = 0;
    var uLocal_194 = 0;
    var uLocal_195 = 0;
    var uLocal_196 = 0;
    var uLocal_197 = 0;
    var uLocal_198 = 0;
    var uLocal_199 = 0;
    var uLocal_200 = 0;
    var uLocal_201 = 0;
    var uLocal_202 = 0;
    var uLocal_203 = 0;
    var uLocal_204 = 0;
    var uLocal_205 = 0;
    var uLocal_206 = 0;
    var uLocal_207 = 0;
    var uLocal_208 = 0;
    var uLocal_209 = 0;
    var uLocal_210 = 0;
    var uLocal_211 = 0;
    var uLocal_212 = 0;
    var uLocal_213 = 0;
    var uLocal_214 = 0;
    var uLocal_215 = 0;
    var uLocal_216 = 0;
    var uLocal_217 = 0;
    var uLocal_218 = 0;
    var uLocal_219 = 0;
    var uLocal_220 = 0;
    var uLocal_221 = 0;
    var uLocal_222 = 0;
    var uLocal_223 = 0;
    var uLocal_224 = 0;
    var uLocal_225 = 0;
    var uLocal_226 = 0;
    var uLocal_227 = 0;
    var uLocal_228 = 0;
    var uLocal_229 = 0;
    var uLocal_230 = 0;
    var uLocal_231 = 0;
    var uLocal_232 = 0;
    var uLocal_233 = 0;
    var uLocal_234 = 0;
    var uLocal_235 = 0;
    var uLocal_236 = 0;
    struct<21> Local_237 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
        if (!func_149(ScriptParam_237))
        {
            func_143();
        }
    }
    while (true)
    {
        func_142();
        if (func_131())
        {
            func_143();
        }
        if (unk_0xEDC68E498B715C56() != bLocal_67)
        {
            func_143();
        }
        if (unk_0xD7EB9DC48246DA95(unk_0x21781F428055C674()) != Local_60.f_11)
        {
            func_143();
        }
        unk_0x5F993F12319B4846();
        switch (func_130(unk_0x2E40EEA43EF34BD6()))
        {
            case 0:
                if (func_128())
                {
                    if (func_127() == 1)
                    {
                        func_126();
                        vLocal_62[unk_0x2E40EEA43EF34BD6() /*3*/] = 1;
                    }
                    else if (func_127() == 4)
                    {
                        vLocal_62[unk_0x2E40EEA43EF34BD6() /*3*/] = 3;
                    }
                }
                break;
            
            case 1:
                if (func_127() == 1)
                {
                    func_108();
                }
                else if (func_127() == 4)
                {
                    vLocal_62[unk_0x2E40EEA43EF34BD6() /*3*/] = 3;
                }
                break;
            
            case 3:
                func_107(&(Local_60.f_15));
                if (func_106(&(Local_60.f_15)))
                {
                    vLocal_62[unk_0x2E40EEA43EF34BD6() /*3*/] = 4;
                }
                break;
            
            case 2:
                vLocal_62[unk_0x2E40EEA43EF34BD6() /*3*/] = 4;
            
            case 4:
                func_143();
                break;
        }
        if (unk_0x722688699565161D())
        {
            switch (func_127())
            {
                case 0:
                    if (func_78())
                    {
                        Local_60 = 1;
                    }
                    break;
                
                case 1:
                    func_38();
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

int func_1()//Position - 0x1B7
{
    if (func_2())
    {
        return 1;
    }
    return 0;
}

int func_2()//Position - 0x1CB
{
    if (unk_0xA2BC31158C8CEFD2(iLocal_63, 8))
    {
        if (!func_37(unk_0x7C7787D2D7139A85(), 1, 1))
        {
            if (!unk_0xA2BC31158C8CEFD2(Local_60.f_1, 9))
            {
                unk_0xA1E7A40E1F56E511(&(Local_60.f_1), 9);
            }
            return 0;
        }
        else if (unk_0xA2BC31158C8CEFD2(Local_60.f_1, 9))
        {
            return 1;
        }
    }
    if (Local_60.f_C == 0 || Local_60.f_C == 1)
    {
        if (!unk_0x8A7BBB98FFB32893(Local_60.f_4))
        {
            if (!func_35(Local_60.f_2))
            {
                return 1;
            }
            if (func_34(Local_60.f_3))
            {
                return 1;
            }
            if (Local_60.f_C > 0)
            {
                return 1;
            }
        }
        if (unk_0xA2BC31158C8CEFD2(iLocal_63, 8))
        {
            if (!unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), Local_60.f_6, 250f, 250f, 250f, 0, 1, 0))
            {
                if (Local_60.f_12 == 1)
                {
                    func_13();
                }
                return 1;
            }
            if (Local_60.f_12 == 1)
            {
                if ((((func_9(unk_0x7C7787D2D7139A85()) && func_8() != 151) || func_6(unk_0x7C7787D2D7139A85(), 146)) || func_5()) || func_4())
                {
                    func_13();
                    if (unk_0x9C625F4590C97F13(Local_60.f_4))
                    {
                        func_3(&(Local_60.f_4));
                    }
                    return 1;
                }
            }
        }
    }
    return 0;
}

void func_3(var uParam0)//Position - 0x306
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

var func_4()//Position - 0x33F
{
    return Global_1406A1;
}

var func_5()//Position - 0x34B
{
    return Global_26A0A9.f_131F;
}

int func_6(int iParam0, int iParam1)//Position - 0x35A
{
    if (Global_18DB1B[iParam0 /*614*/] == iParam1)
    {
        return func_7(iParam0);
    }
    return 0;
}

int func_7(int iParam0)//Position - 0x37A
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iVar0 /*614*/].f_1, 0);
    }
    return 0;
}

int func_8()//Position - 0x3A0
{
    return Global_1931FE;
}

int func_9(int iParam0)//Position - 0x3AC
{
    if (func_12(iParam0))
    {
        return 1;
    }
    if (func_10(iParam0))
    {
        return 1;
    }
    return 0;
}

bool func_10(int iParam0)//Position - 0x3CF
{
    return func_11(iParam0, 20);
}

bool func_11(int iParam0, int iParam1)//Position - 0x3DF
{
    return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_B.f_4, iParam1);
}

int func_12(var uParam0)//Position - 0x3FA
{
    int iVar0;
    
    iVar0 = uParam0;
    if (iVar0 != -1)
    {
        return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iVar0 /*614*/].f_1, 7);
    }
    return 0;
}

void func_13()//Position - 0x420
{
    if (unk_0x9C625F4590C97F13(Local_60.f_4))
    {
        if (Global_40001.f_4D5C > 0)
        {
            func_31(Global_40001.f_4D5C, 0);
            func_14(Global_40001.f_4D5C, 14, 2, 1);
        }
    }
}

void func_14(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x459
{
    struct<4> Var0;
    struct<8> Var1;
    int iVar2;
    int iVar3;
    
    StringCopy(&Var0, func_30(iParam1), 16);
    StringCopy(&Var1, func_29(iParam2), 32);
    switch (iParam1)
    {
        case 0:
            iVar2 = 1287308202;
            break;
        
        case 1:
            iVar2 = 691372038;
            break;
        
        case 2:
            iVar2 = 1480707108;
            break;
        
        case 3:
            iVar2 = 1512499951;
            break;
        
        case 4:
            iVar2 = 562283735;
            break;
        
        case 5:
            iVar2 = -154732333;
            break;
        
        case 6:
            iVar2 = -1362660491;
            break;
        
        case 7:
            iVar2 = 645708827;
            break;
        
        case 8:
            iVar2 = 767907967;
            break;
        
        case 9:
            iVar2 = -1970151306;
            break;
        
        case 10:
            iVar2 = 718859568;
            break;
        
        case 11:
            iVar2 = -1955564771;
            break;
        
        case 12:
            iVar2 = 892388724;
            break;
        
        case 13:
            iVar2 = -1426920838;
            break;
        
        case 14:
            iVar2 = -664597565;
            break;
        
        case 15:
            iVar2 = 1864522104;
            break;
        
        case 16:
            iVar2 = 215608230;
            break;
        
        case 17:
            iVar2 = -1100963799;
            break;
    }
    if (func_28())
    {
        func_15(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
        Global_410F82[iVar3 /*84*/].f_D.f_28 = { Var0 };
        Global_410F82[iVar3 /*84*/].f_D.f_2C = { Var1 };
    }
    else
    {
        unk_0x01FCC1908B0E2B5C(iParam0, &Var0, &Var1, bParam3);
    }
}

void func_15(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x5E7
{
    int iVar0;
    
    if (!func_28())
    {
        return;
    }
    iVar0 = 1;
    if (bParam4)
    {
        iVar0 = 4;
    }
    else if (bParam3)
    {
        iVar0 = 2;
    }
    else if (bParam5)
    {
        iVar0 = 8;
    }
    switch (iParam0)
    {
        case -1645229221:
        case -585718395:
        case -1359375127:
        case 454359403:
        case -982394051:
        case 1643659499:
        case -2072289654:
        case 650665123:
        case 1654961868:
        case -876847842:
        case 68030260:
        case -2122299283:
        case 366672791:
        case 283351220:
        case 291576838:
        case 1182673174:
        case -516219046:
        case 1036455748:
        case 277665518:
        case 2043854386:
        case 1839532116:
        case 1022400740:
        case 1940862352:
        case -1389227906:
        case 711665950:
        case 1704445500:
        case 1515774909:
        case 1173654533:
        case -899802304:
        case -663944335:
        case 1208553146:
        case -613221010:
        case -671062876:
        case -407201236:
        case -754024203:
        case -1885444887:
        case 1931729587:
        case 1064954035:
        case -180141073:
        case 2131324797:
        case 1612072658:
        case -517447402:
        case 1948102096:
        case 1108628223:
        case -1834046564:
        case -1239008812:
        case -222363842:
        case -1276678868:
        case 1564537328:
        case -96593501:
        case 742499889:
        case 2050093329:
        case -1752488069:
        case 634375935:
        case 1850983186:
        case 763367758:
        case 1941570214:
        case 665109499:
        case -1330755006:
        case 1976384368:
        case 268924934:
        case 1869490922:
        case -336803850:
        case -1412692765:
        case 618167454:
        case 980623936:
        case 437291904:
        case -135813048:
        case -930104477:
        case -1420909320:
        case -1733398043:
        case -1892760262:
        case -1545737048:
        case 2039302543:
        case 402505853:
        case -1143510182:
        case 1678112166:
        case 837955913:
        case -1532467144:
        case 1815541181:
            if (iParam1 > 0 || Global_40001.f_6B80)
            {
                func_16(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
            }
            break;
        
        case -31156877:
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
        case 1982688246:
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
        case -101307780:
        case -664597565:
        case 599804707:
        case -327918414:
        case 550898518:
        case 835976347:
        case 1347433368:
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
        case 403506509:
        case -883876414:
        case -1064150715:
        case -1387253055:
        case -716963152:
        case 1138089938:
        case -561012053:
            func_16(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
            break;
    }
    switch (iParam0)
    {
        case -1342064661:
        case -1693570755:
        case 1868043300:
        case -697248883:
        case -1295545795:
        case 914079366:
        case 395122350:
        case -331981076:
        case 1671535231:
            if (iParam1 > 0 || Global_40001.f_6B80)
            {
                func_16(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
            }
            break;
        
        case 1240683675:
        case 1241904665:
        case -1100963799:
        case -494565059:
        case 827308208:
        case -1857685192:
        case 1698417709:
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
        case -2017925037:
        case 1668610896:
        case -2032529561:
        case -1224479447:
        case -319306689:
        case -466527264:
        case 1925965142:
        case 592152676:
        case 2035612943:
        case 1568659720:
        case 1220095570:
        case 2050320631:
        case 592672421:
            func_16(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
            break;
    }
}

int func_16(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xC54
{
    bool bVar0;
    int iVar1;
    int iVar2;
    bool bVar3;
    int iVar4;
    bool bVar5;
    
    bVar0 = false;
    if (!func_28())
    {
        bVar0 = true;
    }
    iVar1 = 1;
    if (!bVar0)
    {
        if (!unk_0x10312E24AC503B38(func_27()) || unk_0x9F3230C03E32BA3F())
        {
            Global_4111C2 = 1;
            return 0;
        }
        if (Global_2589FE)
        {
            if (iParam3 == 1067618600 || iParam3 == -1303831698)
            {
                Global_4111C3 = 1;
                return 0;
            }
        }
    }
    bVar3 = false;
    iVar2 = 0;
    while (iVar2 < 5)
    {
        if (Global_410F82[iVar2 /*84*/].f_41.f_2 == 0)
        {
            bVar3 = true;
        }
        iVar2++;
    }
    if (!bVar3)
    {
        return 0;
    }
    *uParam0 = 5;
    iVar4 = 2147483647;
    if ((bVar0 || iVar1) || unk_0x45E39245DFF8B94A(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
    {
        if ((bVar0 || iVar1) || unk_0x813C0E090AFE247B(iVar4))
        {
            *uParam0 = func_23(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
            if (iVar1 && !bVar0)
            {
            }
            if (bVar0)
            {
                if (*uParam0 != -1)
                {
                    Global_410F82[*uParam0 /*84*/].f_41.f_8 = 1;
                    Global_410F82[*uParam0 /*84*/].f_41.f_C = 1;
                }
            }
            Global_4111B3 = 1;
            return 1;
        }
    }
    else
    {
        if (iParam7 & 2 != 0)
        {
            Global_4111C1 = 1;
            Global_4111C4 = iParam4;
            Global_4111C6 = iParam3;
            Global_4111C7 = 1;
            Global_4111C5 = iParam5;
        }
        if (iParam7 & 8 != 0)
        {
            Global_4111C4 = iParam4;
            Global_4111C6 = iParam3;
            Global_4111C7 = 1;
            Global_4111C5 = iParam5;
        }
        bVar5 = false;
        if (bVar5)
        {
            func_22(1, iParam4);
            Global_4111C1 = 0;
        }
        if (iParam7 & 4 != 0)
        {
            func_17(-1, iParam4, iParam6, iParam5, -1);
        }
    }
    return 0;
}

void func_17(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xDFF
{
    switch (iParam1)
    {
        case 1704445500:
            unk_0xA1E7A40E1F56E511(&(Global_24FD09[unk_0x7C7787D2D7139A85() /*421*/].f_7A.f_47), 0);
            break;
    }
    if (iParam0 != -1)
    {
        func_18(iParam0);
    }
}

void func_18(int iParam0)//Position - 0xE37
{
    bool bVar0;
    
    bVar0 = false;
    if (!func_28())
    {
        bVar0 = true;
    }
    if (iParam0 != -1)
    {
        if (func_21(iParam0))
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
        func_19(&(Global_410F82[iParam0 /*84*/]));
    }
}

void func_19(var uParam0)//Position - 0xE8B
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
    func_20(&(uParam0->f_D));
    func_20(&(uParam0->f_D.f_D));
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

void func_20(var uParam0)//Position - 0xF8E
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

int func_21(int iParam0)//Position - 0xFD6
{
    if (iParam0 >= 0 && iParam0 < 5)
    {
        return Global_410F82[iParam0 /*84*/].f_41.f_5 == 1;
    }
    return 0;
}

void func_22(int iParam0, int iParam1)//Position - 0x1000
{
    Global_258E9A = iParam1;
    Global_258E99 = iParam0;
}

int func_23(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x1014
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 5)
    {
        if (Global_410F82[iVar0 /*84*/].f_41.f_2 == 0)
        {
            if (!func_28())
            {
                iParam0 = iVar0 + 900;
            }
            Global_410F82[iVar0 /*84*/].f_41.f_2 = 1;
            Global_410F82[iVar0 /*84*/].f_41.f_1 = iParam5;
            Global_410F82[iVar0 /*84*/].f_41.f_3 = iParam1;
            Global_410F82[iVar0 /*84*/].f_41.f_4 = iParam2;
            Global_410F82[iVar0 /*84*/].f_41.f_7 = iParam3;
            Global_410F82[iVar0 /*84*/].f_41.f_5 = 0;
            Global_410F82[iVar0 /*84*/].f_41 = iParam0;
            Global_410F82[iVar0 /*84*/].f_41.f_6 = iParam4;
            Global_410F82[iVar0 /*84*/].f_41.f_B = uParam8;
            Global_410F82[iVar0 /*84*/].f_41.f_A = iParam7;
            Global_410F82[iVar0 /*84*/].f_41.f_D = iParam9;
            Global_410F82[iVar0 /*84*/].f_41.f_C = 0;
            Global_410F82[iVar0 /*84*/].f_41.f_E = unk_0xB3EE417AD9F0CAA2();
            Global_410F82[iVar0 /*84*/].f_41.f_12 = 0;
            Global_4111B3 = 0;
            if (bParam6)
            {
                Global_410F82[iVar0 /*84*/].f_41.f_5 = 1;
            }
            if (iParam1 == -1135378931 && iParam10)
            {
                func_24(Global_410F82[iVar0 /*84*/], iVar0);
            }
            return iVar0;
        }
        iVar0++;
    }
    return -1;
}

void func_24(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x1150
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
    iVar1 = func_26(vVar0.y);
    if ((Global_40001.f_5C04 && !Global_40001.f_5C05) && !Global_40001.f_5C06)
    {
        return;
    }
    if (!iVar1 == 0)
    {
        func_25();
        unk_0x990C4E4B3665A4D6(1, &vVar0, 35, iVar1);
    }
}

void func_25()//Position - 0x11E2
{
    unk_0x42B7026D73D48D50("AM_ARENA_SHP");
}

var func_26(int iParam0)//Position - 0x11F0
{
    var uVar0;
    
    if (iParam0 != -1)
    {
        unk_0xA1E7A40E1F56E511(&uVar0, iParam0);
    }
    return uVar0;
}

int func_27()//Position - 0x1208
{
    return Global_1407E9;
}

int func_28()//Position - 0x1214
{
    if (unk_0xE434AB6E3DE89861())
    {
        return unk_0x60E2BDB67AA16B1C();
    }
    return 0;
}

char* func_29(int iParam0)//Position - 0x122B
{
    switch (iParam0)
    {
        case 0:
            return "NOTREACHTARGET";
            break;
        
        case 1:
            return "TARGET_ESCAPE";
            break;
        
        case 2:
            return "DELIVERY_FAIL";
            break;
        
        case 3:
            return "NOT_USED";
            break;
        
        case 4:
            return "TEAM_QUIT";
            break;
        
        case 5:
            return "SERVER_ERROR";
            break;
        
        case 6:
            return "RECEIVE_LJ_L";
            break;
        
        case 8:
            return "CHALLENGE_PLAYER_LEFT";
            break;
    }
    return "DEFAULT";
}

char* func_30(int iParam0)//Position - 0x12B5
{
    switch (iParam0)
    {
        case 0:
            return "BACKUP_VAGOS";
        
        case 1:
            return "BACKUP_LOST";
        
        case 2:
            return "BACKUP_FAMILIES";
        
        case 3:
            return "HIRE_MUGGER";
        
        case 4:
            return "HIRE_MERCENARY";
        
        case 5:
            return "BUY_CARDROPOFF";
        
        case 6:
            return "HELI_PICKUP";
        
        case 7:
            return "BOAT_PICKUP";
        
        case 8:
            return "CLEAR_WANTED";
        
        case 9:
            return "HEAD_2_HEAD";
        
        case 10:
            return "CHALLENGE";
        
        case 11:
            return "SHARE_LAST_JOB";
        
        case 13:
            return "REFUNDAPPEA";
        
        case 14:
            return "AMMO_DROP_REF";
        
        case 15:
            return "ORBITAL_MANUAL";
        
        case 16:
            return "ORBITAL_AUTO";
        
        case 17:
            return "ARENA_SPEC_BOX";
        
        default:
    }
    return "DEFAULT";
}

void func_31(int iParam0, int iParam1)//Position - 0x139B
{
    func_33(iParam0, 1, 1, 0);
    if (iParam1 == 1)
    {
        func_32(iParam0, 0);
    }
}

void func_32(int iParam0, bool bParam1)//Position - 0x13B9
{
    if (bParam1)
    {
    }
    iParam0 = iParam0;
}

void func_33(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x13CA
{
    int iVar0;
    int iVar1;
    float fVar2;
    
    if (iParam1 < 1)
    {
        iParam1 = 1;
    }
    iVar0 = (iParam0 * iParam1);
    fParam3 = 0f;
    if (iVar0 > 0)
    {
        fVar2 = (100f - fParam3);
        iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
    }
    else
    {
        iVar1 = iVar0;
    }
    Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_D3.f_4 = iVar1;
    Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_D3.f_3 = (Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_D3.f_3 + iVar1);
    if (iParam2 == 1)
    {
        func_32(iVar1, 0);
    }
}

int func_34(int iParam0)//Position - 0x144D
{
    if (unk_0x9C625F4590C97F13(iParam0))
    {
        return unk_0x2BF5E63466422C38(unk_0x70D3AC024E0A9837(iParam0));
    }
    return 1;
}

int func_35(int iParam0)//Position - 0x146C
{
    if (unk_0x9C625F4590C97F13(iParam0))
    {
        return !func_36(unk_0x40237B62400B4BCC(iParam0));
    }
    return 0;
}

int func_36(int iParam0)//Position - 0x148C
{
    if (unk_0xD4B321D9096B01FC(iParam0))
    {
        if (unk_0xF4B969E0807E76C7(iParam0, 0))
        {
            return 1;
        }
        else if (!unk_0xD960230552BC4165(iParam0, 0))
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int func_37(int iParam0, bool bParam1, bool bParam2)//Position - 0x14C5
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

void func_38()//Position - 0x150F
{
    switch (Local_60.f_C)
    {
        case 0:
            if (Local_60.f_12)
            {
                func_77();
            }
            else
            {
                func_72();
            }
            if (func_42())
            {
                func_41();
                Local_60.f_C = 1;
            }
            break;
        
        case 1:
            if (unk_0x9C625F4590C97F13(Local_60.f_4))
            {
                func_40(Local_60.f_4, 18);
                if (Local_60.f_F == 3)
                {
                    if (!unk_0x9C625F4590C97F13(Local_60.f_5))
                    {
                        Local_60.f_F = 2;
                    }
                }
                if (unk_0x9C625F4590C97F13(Local_60.f_2))
                {
                    func_39(&(Local_60.f_2));
                }
                else if (Local_60.f_D == 1)
                {
                    Local_60.f_D = 0;
                }
                if (unk_0x9C625F4590C97F13(Local_60.f_3))
                {
                    func_39(&(Local_60.f_3));
                }
                else if (Local_60.f_E == 1)
                {
                    Local_60.f_E = 0;
                }
            }
            break;
        
        case 2:
            break;
    }
}

void func_39(var uParam0)//Position - 0x15D1
{
    int iVar0;
    
    if (unk_0x8A7BBB98FFB32893(*uParam0))
    {
        iVar0 = unk_0xAEA6D4EC961DFA03(*uParam0);
        unk_0xEADD2B962AE1DE7D(&iVar0);
    }
}

void func_40(var uParam0, int iParam1)//Position - 0x15F5
{
    vector3 vVar0;
    vector3 vVar1;
    float fVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    var uVar6;
    float fVar7;
    float fVar8;
    
    unk_0xE0A2E1F5E75D9DF8(iParam1, &iVar3, &iVar4, &iVar5, &uVar6);
    fVar2 = 0.5f;
    unk_0xB10397B050DB322E(unk_0x7F375072508F738F(unk_0x833BB45D35E36889(uParam0)), &vVar0, &vVar1);
    fVar7 = ((vVar1.z - vVar0.z) / 2f);
    fVar8 = (vVar1.z - fVar7);
    if (fVar2 <= (fVar8 + 0.1f))
    {
        fVar2 = (fVar8 + 0.4f);
    }
    unk_0xCF230127A06D491D(2, unk_0xACE5E491FC1B0D37(unk_0x833BB45D35E36889(uParam0), 1) + Vector((((vVar1.z - vVar0.z) / 2f) + fVar2), 0f, 0f), 0f, 0f, 0f, 180f, 0f, 0f, 0.5f, 0.5f, 0.5f, iVar3, iVar4, iVar5, 100, 1, 1, 2, 0, 0, 0, false);
}

void func_41()//Position - 0x169B
{
    if (!unk_0x39A01A052D9B5FF0(iLocal_64))
    {
        iLocal_64 = unk_0xADA89D4F1A58FCBA(unk_0x833BB45D35E36889(Local_60.f_4));
        if (Local_60.f_12)
        {
            unk_0xD1773DD05FE2AB54(iLocal_64, 84);
            unk_0xBC0D06064C5B5413(iLocal_64, 1.2f);
            unk_0x058B6969CEED705F(iLocal_64, "AMD_BLIPBALL");
        }
        else
        {
            unk_0xD1773DD05FE2AB54(iLocal_64, 351);
            unk_0x058B6969CEED705F(iLocal_64, "AMD_BLIPN");
            unk_0xBC0D06064C5B5413(iLocal_64, 0.7f);
        }
        unk_0x088577CF98F96D05(iLocal_64, 2);
        unk_0x9C47809EE2CC69F5(iLocal_64, 120);
    }
}

int func_42()//Position - 0x170F
{
    if (!unk_0xA2BC31158C8CEFD2(Local_60.f_1, 7))
    {
        if (func_35(Local_60.f_2))
        {
            if (unk_0xC49563EAE7AACA6C(unk_0x40237B62400B4BCC(Local_60.f_2), Local_60.f_6, 5f, 5f, 600f, 0, 1, 0))
            {
                unk_0xA1E7A40E1F56E511(&(Local_60.f_1), 7);
            }
        }
    }
    else if (func_128())
    {
        if (func_45())
        {
            if (func_43())
            {
                return 1;
            }
        }
    }
    return 0;
}

int func_43()//Position - 0x1774
{
    unk_0x6BB2B1818CAE531E(Local_60.f_13.f_1);
    if (unk_0x6DF9C43E3CC645BC(Local_60.f_13.f_1))
    {
        if (!unk_0x9C625F4590C97F13(Local_60.f_13) && unk_0x9C625F4590C97F13(Local_60.f_4))
        {
            if (unk_0x0BF6D9DA27ADF615(1))
            {
                if (func_44(&(Local_60.f_13), Local_60.f_13.f_1, unk_0xACE5E491FC1B0D37(unk_0x833BB45D35E36889(Local_60.f_4), 1) - Vector(5f, 0f, 0f), 1, 1, 1, 0, 0, 0, 0))
                {
                    unk_0x9E11C6A0FFF1E999(Local_60.f_13, 1);
                    unk_0x5A2B7C446C0CF087(unk_0x833BB45D35E36889(Local_60.f_13), unk_0xD2809C7F7FD79247(unk_0x833BB45D35E36889(Local_60.f_4)));
                    unk_0x01DF2D3988024DB4(unk_0x833BB45D35E36889(Local_60.f_4), unk_0x833BB45D35E36889(Local_60.f_13), 0, 0f, 0f, 0.25f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
                    unk_0x1A2612741BC8636B(unk_0x833BB45D35E36889(Local_60.f_13), 1);
                    unk_0x9D3FE4786B8925D2(unk_0x833BB45D35E36889(Local_60.f_13), 0);
                    unk_0x2CF873D4DD55E9B7(unk_0x833BB45D35E36889(Local_60.f_13));
                    unk_0x98954EFA4BED3ADF(unk_0x833BB45D35E36889(Local_60.f_13), 0f, 0f, -0.2f);
                    unk_0x7440DC5684D20A14(unk_0x833BB45D35E36889(Local_60.f_13), 1);
                }
            }
        }
    }
    if (!unk_0x9C625F4590C97F13(Local_60.f_13))
    {
        return 0;
    }
    return 1;
}

int func_44(var uParam0, int iParam1, vector3 vParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x187A
{
    if (!unk_0x0BF6D9DA27ADF615(1))
    {
        return 0;
    }
    if (bParam7)
    {
        *uParam0 = unk_0x19BD72F0D7BDB17C(unk_0x366EC9EEE4362C87(iParam1, vParam2, bParam4, bParam3, bParam5));
    }
    else
    {
        *uParam0 = unk_0x19BD72F0D7BDB17C(unk_0x7187764DB5121FC9(iParam1, vParam2, bParam4, bParam3, bParam5));
    }
    if (unk_0x9C625F4590C97F13(*uParam0))
    {
        unk_0x9D3FE4786B8925D2(unk_0x833BB45D35E36889(*uParam0), iParam6);
        if (bParam8)
        {
            unk_0x18620062E6D68D6E(unk_0x833BB45D35E36889(*uParam0), 1);
        }
        if (bParam9)
        {
            unk_0x2BBEC4B37B923F4B(unk_0x833BB45D35E36889(*uParam0), false, 0);
        }
        if (unk_0x457EF27DC4F63820(unk_0x833BB45D35E36889(*uParam0)))
        {
            if (bParam3)
            {
                unk_0x9E11C6A0FFF1E999(*uParam0, 1);
            }
        }
        return 1;
    }
    return 0;
}

int func_45()//Position - 0x191F
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    iVar0 = joaat("prop_box_ammo02a");
    if (Local_60.f_12 == 1)
    {
        iVar0 = 1688540826;
    }
    unk_0x6BB2B1818CAE531E(iVar0);
    unk_0x6BB2B1818CAE531E(joaat("p_cargo_chute_s"));
    if (unk_0x6DF9C43E3CC645BC(iVar0) && unk_0x6DF9C43E3CC645BC(joaat("p_cargo_chute_s")))
    {
        if (!unk_0x9C625F4590C97F13(Local_60.f_4) && !unk_0x9C625F4590C97F13(Local_60.f_5))
        {
            if (func_35(Local_60.f_2) && unk_0x7BC89729D54A0F43(0, 0, 2, 0))
            {
                iVar1 = 200;
                if (!unk_0x9C625F4590C97F13(Local_60.f_4))
                {
                    iVar2 = 0;
                    iVar3 = joaat("pickup_ammo_bullet_mp");
                    if (Local_60.f_12 == 1)
                    {
                        iVar3 = joaat("pickup_weapon_minigun");
                    }
                    if (Local_60.f_12 == 0)
                    {
                        unk_0xA1E7A40E1F56E511(&iVar2, 12);
                    }
                    else
                    {
                        unk_0xA1E7A40E1F56E511(&iVar2, 12);
                    }
                    Local_60.f_4 = unk_0x19BD72F0D7BDB17C(unk_0x6645847093E58917(iVar3, unk_0xACE5E491FC1B0D37(unk_0x40237B62400B4BCC(Local_60.f_2), 1) - Vector(3f, 0f, 0f), iVar2, iVar1, iVar0, 1, 1));
                    if (Local_60.f_12 == 1)
                    {
                        func_71(unk_0x833BB45D35E36889(Local_60.f_4));
                        unk_0xAA1AECB096AF6F49(0);
                    }
                    unk_0x04F5A8AA60EC662B(unk_0x833BB45D35E36889(Local_60.f_4), true);
                    unk_0x92405FD3CFF4289B(unk_0x833BB45D35E36889(Local_60.f_4), 1);
                    unk_0x1A2612741BC8636B(unk_0x833BB45D35E36889(Local_60.f_4), 1);
                    unk_0x9D3FE4786B8925D2(unk_0x833BB45D35E36889(Local_60.f_4), 0);
                    unk_0x2CF873D4DD55E9B7(unk_0x833BB45D35E36889(Local_60.f_4));
                    func_70();
                    iVar4 = unk_0x04B8CCFB93858A27();
                    unk_0x5F5C6A264C2CA8B1(iVar4, "Crate_Beeps", unk_0x833BB45D35E36889(Local_60.f_4), "MP_CRATE_DROP_SOUNDS", true, 0);
                    Local_60.f_10 = unk_0xDBCCA0F03049A80D(iVar4);
                }
                if (unk_0x9C625F4590C97F13(Local_60.f_4) && !unk_0x9C625F4590C97F13(Local_60.f_5))
                {
                    if (func_44(&(Local_60.f_5), joaat("p_cargo_chute_s"), unk_0xACE5E491FC1B0D37(unk_0x40237B62400B4BCC(Local_60.f_2), 1) - Vector(2f, 0f, 0f), 1, 1, 0, 1, 0, 0, 0))
                    {
                        unk_0x9E11C6A0FFF1E999(Local_60.f_5, 1);
                        unk_0x01DF2D3988024DB4(unk_0x833BB45D35E36889(Local_60.f_5), unk_0x833BB45D35E36889(Local_60.f_4), 0, 0f, 0f, 0.1f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
                        unk_0x1A2612741BC8636B(unk_0x833BB45D35E36889(Local_60.f_5), 1);
                        unk_0x9D3FE4786B8925D2(unk_0x833BB45D35E36889(Local_60.f_5), 0);
                        unk_0xAF87685A609CD981(unk_0x833BB45D35E36889(Local_60.f_5), "P_cargo_chute_S_deploy", "P_cargo_chute_S", 1000f, 0, 0, 0, 0, 0);
                        unk_0x7DC20B8D2FDE9E56(unk_0x833BB45D35E36889(Local_60.f_5));
                    }
                }
                func_68();
                if (!unk_0xA2BC31158C8CEFD2(iLocal_63, 15))
                {
                    if (!Local_60.f_12)
                    {
                        func_67(&uLocal_72, 3, unk_0x70D3AC024E0A9837(Local_60.f_3), "FM_Pilot_Ammo", 0, 1);
                        func_46(&uLocal_72, "CT_AUD", "MPCT_AMOinc", 12, 0, 0, 1);
                    }
                    unk_0xA1E7A40E1F56E511(&iLocal_63, 15);
                }
            }
        }
    }
    if (unk_0x9C625F4590C97F13(Local_60.f_4) && unk_0x9C625F4590C97F13(Local_60.f_5))
    {
        return 1;
    }
    return 0;
}

int func_46(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1BA0
{
    func_66(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
    return func_47(sParam2, iParam3, 0);
}

int func_47(char* sParam0, int iParam1, bool bParam2)//Position - 0x1BEE
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
                    func_65();
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
        if (func_64(8, -1))
        {
            return 0;
        }
        Global_5191 = { Global_518B };
        func_63();
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
                func_55();
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
                if (func_54())
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
            if (func_53())
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
            func_52();
            Global_514F = bParam2;
        }
        Global_5147 = iParam1;
        StringCopy(&Global_4FC8, sParam0, 24);
        Global_4CD7 = 0;
        func_51();
        func_48();
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
        func_65();
    }
    return 0;
}

void func_48()//Position - 0x1EBE
{
    if (!func_49())
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

int func_49()//Position - 0x1EF5
{
    if (!Global_40001.f_6D6D)
    {
        return 0;
    }
    if (!Global_12B21)
    {
        return 0;
    }
    if (unk_0x7C7787D2D7139A85() == func_50())
    {
        return 0;
    }
    if (func_10(unk_0x7C7787D2D7139A85()))
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

int func_50()//Position - 0x1F5B
{
    return -1;
}

void func_51()//Position - 0x1F64
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

void func_52()//Position - 0x1F94
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

int func_53()//Position - 0x2029
{
    if (Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 0)
    {
        return 1;
    }
    return 0;
}

int func_54()//Position - 0x2050
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

void func_55()//Position - 0x20E9
{
    if (func_62(14))
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
        Global_4C1E = func_56();
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

var func_56()//Position - 0x218B
{
    func_57();
    return Global_1B3C8.f_936.f_21B.f_10E1;
}

void func_57()//Position - 0x21A4
{
    int iVar0;
    
    if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
    {
        if (func_60(Global_1B3C8.f_936.f_21B.f_10E1) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
        {
            iVar0 = func_59(unk_0x0FA8183DAD2B3203());
            if (func_58(iVar0) && (!func_62(14) || Global_1AFAF))
            {
                if (Global_1B3C8.f_936.f_21B.f_10E1 != iVar0 && func_58(Global_1B3C8.f_936.f_21B.f_10E1))
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

bool func_58(int iParam0)//Position - 0x22A1
{
    return iParam0 < 3;
}

int func_59(int iParam0)//Position - 0x22AD
{
    int iVar0;
    int iVar1;
    
    if (unk_0xD4B321D9096B01FC(iParam0))
    {
        iVar1 = unk_0x7F375072508F738F(iParam0);
        iVar0 = 0;
        while (iVar0 <= 2)
        {
            if (func_60(iVar0) == iVar1)
            {
                return iVar0;
            }
            iVar0++;
        }
    }
    return 145;
}

int func_60(int iParam0)//Position - 0x22EA
{
    if (func_58(iParam0))
    {
        return func_61(iParam0);
    }
    else if (iParam0 != 145)
    {
    }
    return 0;
}

var func_61(int iParam0)//Position - 0x230F
{
    return Global_706[iParam0 /*29*/];
}

bool func_62(int iParam0)//Position - 0x231E
{
    return Global_A1B4 == iParam0;
}

void func_63()//Position - 0x232C
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

bool func_64(int iParam0, int iParam1)//Position - 0x2382
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

void func_65()//Position - 0x23BD
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

void func_66(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x2414
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

void func_67(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x246A
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

int func_68()//Position - 0x2505
{
    if (func_69())
    {
        if (!unk_0xFB3E0C95810C1454(iLocal_66))
        {
            iLocal_66 = unk_0x1481D18F34C86C5E("scr_crate_drop_beacon", unk_0x833BB45D35E36889(Local_60.f_4), 0f, 0f, 0.2f, 0f, 0f, 0f, 1f, 0, 0, 0, 1065353216, 1065353216, 1065353216, 0);
            unk_0xB96496BDA3858F12(iLocal_66, 0.8f, 0.18f, 0.19f, 0);
        }
    }
    if (!unk_0xFB3E0C95810C1454(iLocal_66))
    {
        return 0;
    }
    return 1;
}

int func_69()//Position - 0x2577
{
    unk_0x8CD04D2D122523B6();
    if (unk_0x5B9201742B00334D())
    {
        return 1;
    }
    return 0;
}

void func_70()//Position - 0x258F
{
    if (unk_0x7C1812FF1EEE88FE(Local_60.f_10) != -1)
    {
        if (unk_0x9C625F4590C97F13(Local_60.f_4))
        {
            if (!unk_0xDE3C2FB26058823A(unk_0x7C1812FF1EEE88FE(Local_60.f_10)))
            {
                unk_0xCFF6AB47B7B014FF(unk_0x7C1812FF1EEE88FE(Local_60.f_10));
            }
            unk_0x0972EA9E8102C153(unk_0x7C1812FF1EEE88FE(Local_60.f_10));
        }
        else
        {
            if (!unk_0xDE3C2FB26058823A(unk_0x7C1812FF1EEE88FE(Local_60.f_10)))
            {
                unk_0xCFF6AB47B7B014FF(unk_0x7C1812FF1EEE88FE(Local_60.f_10));
            }
            unk_0x0972EA9E8102C153(unk_0x7C1812FF1EEE88FE(Local_60.f_10));
        }
    }
}

void func_71(int iParam0)//Position - 0x2601
{
    var uVar0;
    
    unk_0xA1E7A40E1F56E511(&uVar0, unk_0x45F54089C0F6B392());
    unk_0xA3DE2491893ED38C(iParam0, uVar0);
}

void func_72()//Position - 0x261B
{
    int iVar0;
    
    if (!unk_0xA2BC31158C8CEFD2(iLocal_63, 11))
    {
        if (!unk_0x0945988C02AF3025())
        {
            iVar0 = func_76(1190, -1, 0);
            if (!unk_0xA2BC31158C8CEFD2(iVar0, 10))
            {
                func_75("AMD_HELP1", -1);
                unk_0xA1E7A40E1F56E511(&iVar0, 10);
                func_73(1190, iVar0, -1, 1, 0);
                unk_0xA1E7A40E1F56E511(&iLocal_63, 11);
            }
            else if (!unk_0xA2BC31158C8CEFD2(iVar0, 11))
            {
                func_75("AMD_HELP2", -1);
                unk_0xA1E7A40E1F56E511(&iVar0, 11);
                func_73(1190, iVar0, -1, 1, 0);
                unk_0xA1E7A40E1F56E511(&iLocal_63, 11);
            }
            else
            {
                unk_0xA1E7A40E1F56E511(&iLocal_63, 11);
            }
        }
    }
}

void func_73(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x26B2
{
    int iVar0;
    
    if (bParam4)
    {
    }
    iVar0 = Global_26CBBF[iParam0 /*3*/][func_74(iParam2)];
    if (iVar0 != 0)
    {
        unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
    }
}

int func_74(var uParam0)//Position - 0x26E2
{
    int iVar0;
    int iVar1;
    
    iVar0 = uParam0;
    if (iVar0 == -1)
    {
        iVar1 = func_27();
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

void func_75(char* sParam0, int iParam1)//Position - 0x2716
{
    unk_0xD95C12E1062B7D5E(sParam0);
    unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

int func_76(int iParam0, int iParam1, int iParam2)//Position - 0x272D
{
    int iVar0;
    var uVar1;
    
    if (iParam2 == 0)
    {
    }
    iVar0 = Global_26CBBF[iParam0 /*3*/][func_74(iParam1)];
    if (unk_0x367DA79FE620711B(iVar0, &uVar1, -1))
    {
        return uVar1;
    }
    return 0;
}

void func_77()//Position - 0x275F
{
    int iVar0;
    
    if (!unk_0xA2BC31158C8CEFD2(iLocal_63, 17))
    {
        if (!unk_0x0945988C02AF3025())
        {
            iVar0 = func_76(1190, -1, 0);
            if (!unk_0xA2BC31158C8CEFD2(iVar0, 24))
            {
                func_75("BALD_HELP1", -1);
                unk_0xA1E7A40E1F56E511(&iVar0, 24);
                func_73(1190, iVar0, -1, 1, 0);
                unk_0xA1E7A40E1F56E511(&iLocal_63, 17);
            }
            else if (!unk_0xA2BC31158C8CEFD2(iVar0, 25))
            {
                func_75("BALD_HELP2", -1);
                unk_0xA1E7A40E1F56E511(&iVar0, 25);
                func_73(1190, iVar0, -1, 1, 0);
                unk_0xA1E7A40E1F56E511(&iLocal_63, 17);
            }
            else
            {
                unk_0xA1E7A40E1F56E511(&iLocal_63, 17);
            }
        }
    }
}

int func_78()//Position - 0x27F6
{
    if (func_105(joaat("cuban800")) && func_105(joaat("s_m_m_pilot_02")))
    {
        if (func_103(&uLocal_70, 4000, 0))
        {
            if (func_81() && func_79())
            {
                return 1;
            }
        }
    }
    return 0;
}

int func_79()//Position - 0x283A
{
    if ((!unk_0x9C625F4590C97F13(Local_60.f_3) && func_105(joaat("s_m_m_pilot_02"))) && unk_0x9C625F4590C97F13(Local_60.f_2))
    {
        if (func_35(Local_60.f_2))
        {
            if (func_80(&(Local_60.f_3), Local_60.f_2, 22, joaat("s_m_m_pilot_02"), -1, 1, 1, 1))
            {
                unk_0xCC94EE23853F38E4(unk_0x70D3AC024E0A9837(Local_60.f_3), 1);
                unk_0xDB889DCC8B0139E6(unk_0x70D3AC024E0A9837(Local_60.f_3), Global_180855);
                unk_0xCDB7DE4079A7DF65(unk_0x70D3AC024E0A9837(Local_60.f_3), 0);
                unk_0x7D81B41B134BD6F2(unk_0x70D3AC024E0A9837(Local_60.f_3), 1);
                unk_0x0BBBAC4546BFE280(unk_0x70D3AC024E0A9837(Local_60.f_3), SYSTEM::ROUND((200f * Global_40001.f_9A)), 0);
                func_126();
                unk_0xC544A8E1032AC1CF(unk_0x70D3AC024E0A9837(Local_60.f_3), uLocal_65);
                unk_0xD43C323A78B7BDF0(unk_0x40237B62400B4BCC(Local_60.f_2), SYSTEM::ROUND(50f));
            }
        }
    }
    if (!unk_0x9C625F4590C97F13(Local_60.f_3))
    {
        return 0;
    }
    unk_0xE0AC40EF164A2569(joaat("s_m_m_pilot_02"));
    return 1;
}

int func_80(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x2923
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

int func_81()//Position - 0x29AB
{
    vector3 vVar0;
    float fVar1;
    
    if (!unk_0x9C625F4590C97F13(Local_60.f_2))
    {
        if (func_105(joaat("cuban800")))
        {
            func_100(&vVar0, &fVar1);
            if (func_85(vVar0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
            {
                if (func_82(&(Local_60.f_2), joaat("cuban800"), vVar0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
                {
                    unk_0x54B5C3A13D3588F0(unk_0x40237B62400B4BCC(Local_60.f_2), 2);
                    unk_0x860A5CC30A0EF207(unk_0x40237B62400B4BCC(Local_60.f_2), false);
                    unk_0x3280F16E96215952(unk_0x40237B62400B4BCC(Local_60.f_2), 1);
                    unk_0x2CF873D4DD55E9B7(unk_0x40237B62400B4BCC(Local_60.f_2));
                    unk_0xD32341B4ADEC0821(unk_0x40237B62400B4BCC(Local_60.f_2), 60f);
                    unk_0x3231D7D927FBC2FC(unk_0x40237B62400B4BCC(Local_60.f_2));
                    unk_0xB90231068DCFFBA1(unk_0x40237B62400B4BCC(Local_60.f_2), true, 1, 0);
                    unk_0x5FB9C83B6E83CFF0(unk_0x40237B62400B4BCC(Local_60.f_2), 0);
                    unk_0x9D3FE4786B8925D2(unk_0x40237B62400B4BCC(Local_60.f_2), 0);
                    unk_0x00C0C8FB384FCCF2(unk_0x40237B62400B4BCC(Local_60.f_2), 3);
                    unk_0x04669C37B3AA22DC(unk_0x40237B62400B4BCC(Local_60.f_2));
                    if (Local_60.f_12 == 1)
                    {
                        unk_0x3427075D3608A3BB(unk_0x40237B62400B4BCC(Local_60.f_2), true, false, true, false, false, 0, 0, 0);
                    }
                }
            }
        }
    }
    if (!unk_0x9C625F4590C97F13(Local_60.f_2))
    {
        return 0;
    }
    unk_0xE0AC40EF164A2569(joaat("cuban800"));
    return 1;
}

int func_82(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x2ADA
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
            func_83(vParam2, fParam3, iParam1, iVar1);
            return 1;
        }
    }
    return 0;
}

void func_83(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x2BE2
{
    int iVar0;
    
    if (func_84(unk_0x7C7787D2D7139A85(), vParam0, iParam2) > -1)
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

int func_84(int iParam0, vector3 vParam1, int iParam2)//Position - 0x2CB5
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

int func_85(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x2D53
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
        if (func_94(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
        {
            return 0;
        }
    }
    Global_24B2CF.f_2++;
    if (bParam6)
    {
        if (fParam4 > 0f)
        {
            if (func_86(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
            {
                return 0;
            }
        }
    }
    Global_24B2CF.f_2++;
    return 1;
}

int func_86(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x2E64
{
    int iVar0;
    int iVar1;
    float fVar2;
    
    if (iParam2 && !bParam5)
    {
        if (func_37(unk_0x7C7787D2D7139A85(), 1, 1))
        {
            if (!unk_0x260395BA7F0C83CB())
            {
                fVar2 = fParam4;
                if (fParam7 > 0f)
                {
                    fVar2 = fParam7;
                }
                if (unk_0xD34AF93E9BCF12F0(func_90(unk_0x7C7787D2D7139A85()), vParam0, true) <= (fVar2 + fParam1))
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
        if (func_37(iVar1, 1, 1))
        {
            if (!func_88(iVar1, 0) && unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar1))
            {
                if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x7C7787D2D7139A85()))
                {
                    if ((func_87(iVar1) || !bParam8) && !Global_24FD09[iVar1 /*421*/].f_103)
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
                                if (unk_0xD34AF93E9BCF12F0(func_90(iVar1), vParam0, true) <= (fVar2 + fParam1))
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
                            if (unk_0xD34AF93E9BCF12F0(func_90(iVar1), vParam0, true) <= (fVar2 + fParam1))
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

int func_87(int iParam0)//Position - 0x301C
{
    if (unk_0x0A21D8F32B9D5739(unk_0x23625FE58BACEBFD(iParam0)) || Global_24FD09[iParam0 /*421*/].f_F5)
    {
        return 1;
    }
    return 0;
}

bool func_88(int iParam0, int iParam1)//Position - 0x3047
{
    bool bVar0;
    
    if (iParam0 == unk_0x7C7787D2D7139A85())
    {
        bVar0 = func_89(-1, 0) == 8;
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

int func_89(int iParam0, bool bParam1)//Position - 0x3092
{
    int iVar0;
    int iVar1;
    
    iVar1 = iParam0;
    if (iVar1 == -1)
    {
        iVar1 = func_27();
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

Vector3 func_90(int iParam0)//Position - 0x30D3
{
    int iVar0;
    
    iVar0 = iParam0;
    if ((func_93() && Global_1844AE[iVar0 /*871*/].f_34A) && !func_92(Global_1844AE[iVar0 /*871*/].f_34B))
    {
        return Global_1844AE[iVar0 /*871*/].f_34B;
    }
    return func_91(iParam0);
}

Vector3 func_91(int iParam0)//Position - 0x3126
{
    return unk_0xACE5E491FC1B0D37(unk_0x23625FE58BACEBFD(iParam0), 0);
}

int func_92(vector3 vParam0)//Position - 0x3139
{
    if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
    {
        return 1;
    }
    return 0;
}

var func_93()//Position - 0x3163
{
    return Global_255E41.f_11;
}

int func_94(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x3171
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    while (iVar0 < 32)
    {
        iVar1 = iVar0;
        if ((iParam6 == 1 && unk_0x7C7787D2D7139A85() != iVar1) || iParam6 == 0)
        {
            if (func_37(iVar1, bParam2, bParam3))
            {
                if (unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar1))
                {
                    if (!bParam5 || (!unk_0x2BF5E63466422C38(unk_0x23625FE58BACEBFD(iVar1)) && func_87(iVar1)))
                    {
                        if ((!bParam4 || (bParam4 == 1 && unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) != unk_0xC69A85EEB9CA3B95(iVar1))) || unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1)
                        {
                            if (((unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1 && uParam7) && bParam4) && func_95(iVar1))
                            {
                            }
                            else if (unk_0xD4B321D9096B01FC(unk_0x23625FE58BACEBFD(iVar1)))
                            {
                                if (unk_0xD34AF93E9BCF12F0(func_91(iVar1), vParam0, true) < fParam1)
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

int func_95(int iParam0)//Position - 0x326D
{
    if (func_99(unk_0x7C7787D2D7139A85(), iParam0))
    {
        return 1;
    }
    Global_264397 = { func_98(iParam0) };
    if (unk_0xB8A6A83E8C303720(&Global_264397))
    {
        return 1;
    }
    if (func_96(unk_0x7C7787D2D7139A85(), iParam0))
    {
        return 1;
    }
    return 0;
}

int func_96(int iParam0, int iParam1)//Position - 0x32B4
{
    int iVar0;
    
    iVar0 = func_97(iParam0);
    if (!iVar0 == func_50())
    {
        if (iVar0 == func_97(iParam1))
        {
            return 1;
        }
    }
    return 0;
}

int func_97(int iParam0)//Position - 0x32DF
{
    if (iParam0 != func_50())
    {
        return Global_18DB1B[iParam0 /*614*/].f_B;
    }
    return func_50();
}

struct<13> func_98(int iParam0)//Position - 0x3302
{
    struct<13> Var0;
    
    unk_0x229B5E28267D1B1F(iParam0, &Var0, 13);
    return Var0;
}

int func_99(int iParam0, int iParam1)//Position - 0x3319
{
    if (unk_0xFF6895C150414C31())
    {
        Global_264397 = { func_98(iParam0) };
        Global_2643A4 = { func_98(iParam1) };
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

void func_100(var uParam0, var uParam1)//Position - 0x3386
{
    float fVar0;
    
    *uParam0 = { func_101(Local_60.f_6 + Vector(200f, 0f, 0f), (400f / 2f), 400f, (200f / 2f)) };
    *uParam1 = unk_0x3BA2E0B9E14A8025((Local_60.f_6 - *uParam0), (Local_60.f_6.f_1 - uParam0->f_1));
    fVar0 = unk_0x910BEF7283A6C6B7((*uParam0 - 400f), (uParam0->f_1 - 400f), (*uParam0 + 400f), (uParam0->f_1 + 400f));
    if (uParam0->f_2 < fVar0)
    {
        uParam0->f_2 = fVar0;
    }
}

Vector3 func_101(vector3 vParam0, float fParam1, float fParam2, float fParam3)//Position - 0x340D
{
    vector3 vVar0;
    float fVar1;
    
    vVar0 = { unk_0x64A3FFD9D62755C5(-1f, 1f), unk_0x64A3FFD9D62755C5(-1f, 1f), 0f };
    fVar1 = (fParam3 / 2f);
    vVar0 = { func_102(vVar0, unk_0x64A3FFD9D62755C5(fParam1, fParam2)) };
    vVar0.z = unk_0x64A3FFD9D62755C5(-fVar1, fVar1);
    return vParam0 + vVar0;
}

Vector3 func_102(vector3 vParam0, float fParam1)//Position - 0x3456
{
    float fVar0;
    
    if (fParam1 == 0f)
    {
        return 0f, 0f, 0f;
    }
    fVar0 = SYSTEM::VMAG(vParam0);
    if (fVar0 != 0f)
    {
        return vParam0 * FtoV((fParam1 / fVar0));
    }
    return 0f, 0f, 0f;
}

int func_103(var uParam0, int iParam1, bool bParam2)//Position - 0x348D
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

void func_104(var uParam0, bool bParam1, bool bParam2)//Position - 0x34EB
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

bool func_105(int iParam0)//Position - 0x3530
{
    if (iParam0 == 0)
    {
        return 1;
    }
    unk_0x6BB2B1818CAE531E(iParam0);
    return unk_0x6DF9C43E3CC645BC(iParam0);
}

int func_106(var uParam0)//Position - 0x354E
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

void func_107(var uParam0)//Position - 0x3577
{
    if (!uParam0->f_1)
    {
        if (unk_0x722688699565161D())
        {
            func_104(uParam0, 0, 0);
        }
    }
}

void func_108()//Position - 0x3596
{
    func_117();
    switch (vLocal_62[unk_0x2E40EEA43EF34BD6() /*3*/].f_2)
    {
        case 0:
            if (Local_60.f_C > 0)
            {
                vLocal_62[unk_0x2E40EEA43EF34BD6() /*3*/].f_2 = 1;
            }
            break;
        
        case 1:
            func_113();
            func_109();
            break;
        
        case 2:
            func_143();
            break;
    }
}

void func_109()//Position - 0x35EB
{
    int iVar0;
    int iVar1;
    
    if (unk_0x9C625F4590C97F13(Local_60.f_4))
    {
        if (func_37(unk_0x7C7787D2D7139A85(), 1, 1))
        {
            iVar1 = func_112(unk_0x0FA8183DAD2B3203());
            if (((((((((((((((((iVar1 == joaat("weapon_unarmed") || iVar1 == joaat("weapon_flare")) || iVar1 == joaat("weapon_knife")) || iVar1 == joaat("weapon_nightstick")) || iVar1 == joaat("weapon_bat")) || iVar1 == joaat("weapon_hammer")) || iVar1 == joaat("weapon_golfclub")) || iVar1 == joaat("weapon_crowbar")) || iVar1 == joaat("weapon_molotov")) || iVar1 == joaat("weapon_grenade")) || iVar1 == joaat("weapon_grenadelauncher")) || iVar1 == joaat("weapon_grenadelauncher_smoke")) || iVar1 == joaat("weapon_petrolcan")) || iVar1 == joaat("weapon_rpg")) || iVar1 == joaat("weapon_smokegrenade")) || iVar1 == joaat("weapon_stickybomb")) || iVar1 == joaat("weapon_bzgas")) || iVar1 == joaat("weapon_bottle"))
            {
                iVar1 = Global_14069F;
            }
            unk_0x381EB99C42833B26(unk_0x0FA8183DAD2B3203(), iVar1, &iVar0);
            if ((func_111(iVar1) && func_110(iVar1)) && unk_0x65BD637EA0479590(unk_0x0FA8183DAD2B3203(), iVar1) < iVar0)
            {
            }
            else if (unk_0x722688699565161D())
            {
                if (!unk_0xA2BC31158C8CEFD2(iLocal_63, 12))
                {
                    if (!unk_0x0945988C02AF3025())
                    {
                        if (Local_60.f_12)
                        {
                            func_75("BALD_HELP3", -1);
                        }
                        else
                        {
                            func_75("AMD_HELP3", -1);
                        }
                        unk_0xA1E7A40E1F56E511(&iLocal_63, 12);
                    }
                }
                else if (!unk_0xA2BC31158C8CEFD2(iLocal_63, 13))
                {
                    if (!unk_0x0945988C02AF3025())
                    {
                        if (unk_0x8A7BBB98FFB32893(Local_60.f_4))
                        {
                            if (unk_0x9B69E0F5342BA1A8(unk_0x0FA8183DAD2B3203(), unk_0x833BB45D35E36889(Local_60.f_4), 10f, 10f, 10f, 0, 1, 0))
                            {
                                if (func_103(&uLocal_68, 20000, 0))
                                {
                                    if (!Local_60.f_12)
                                    {
                                        func_75("AMD_HELP3", -1);
                                    }
                                    unk_0xA1E7A40E1F56E511(&iLocal_63, 13);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

int func_110(int iParam0)//Position - 0x37F6
{
    if ((((((((((iParam0 == joaat("gadget_parachute") || iParam0 == joaat("weapon_knife")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_crowbar")) || iParam0 == joaat("weapon_nightstick")) || iParam0 == joaat("weapon_golfclub")) || iParam0 == joaat("weapon_hammer")) || iParam0 == joaat("weapon_bat")) || iParam0 == joaat("weapon_bottle")) || iParam0 == joaat("weapon_dagger")) || iParam0 == joaat("weapon_hatchet"))
    {
        return 0;
    }
    return 1;
}

int func_111(int iParam0)//Position - 0x389A
{
    if (iParam0 == joaat("weapon_flare"))
    {
        return 0;
    }
    return 1;
}

var func_112(int iParam0)//Position - 0x38B1
{
    var uVar0;
    
    unk_0x63EA4FAF7CDEFEC7(iParam0, &uVar0, 1);
    return uVar0;
}

void func_113()//Position - 0x38C5
{
    bool bVar0;
    vector3 vVar1;
    int iVar2;
    
    if (unk_0x8A7BBB98FFB32893(Local_60.f_4))
    {
        if (unk_0xF42AC9E0924DC59B(Local_60.f_4) || (!unk_0xDD00A9922FD2D5D5(Local_60.f_4) && unk_0x722688699565161D()))
        {
            if (unk_0x8A7BBB98FFB32893(Local_60.f_5))
            {
                if (unk_0xF42AC9E0924DC59B(Local_60.f_5) || (!unk_0xDD00A9922FD2D5D5(Local_60.f_5) && unk_0x722688699565161D()))
                {
                    if (func_116(Local_60.f_4) && func_116(Local_60.f_5))
                    {
                        if (!unk_0xA2BC31158C8CEFD2(iLocal_63, 8))
                        {
                            if (unk_0xA2BC31158C8CEFD2(iLocal_63, 7))
                            {
                                if (!unk_0xF6FD8019402CF03B(unk_0x833BB45D35E36889(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
                                {
                                    unk_0xA1E7A40E1F56E511(&iLocal_63, 8);
                                    func_3(&(Local_60.f_5));
                                    if (Local_60.f_12 == 1)
                                    {
                                        func_71(unk_0x833BB45D35E36889(Local_60.f_4));
                                    }
                                }
                            }
                        }
                        if (!unk_0xA2BC31158C8CEFD2(iLocal_63, 7))
                        {
                            if (unk_0xA2BC31158C8CEFD2(iLocal_63, 6))
                            {
                                if (unk_0xF6FD8019402CF03B(unk_0x833BB45D35E36889(Local_60.f_5), "P_cargo_chute_S", "P_cargo_chute_S_crumple", 3))
                                {
                                    unk_0xA1E7A40E1F56E511(&iLocal_63, 7);
                                }
                            }
                        }
                        if (!unk_0xA2BC31158C8CEFD2(iLocal_63, 6))
                        {
                            unk_0x1B4ECEAD09E1E430(unk_0x833BB45D35E36889(Local_60.f_4), 2, 0.0245f);
                            if (func_114())
                            {
                                unk_0xAF87685A609CD981(unk_0x833BB45D35E36889(Local_60.f_5), "P_cargo_chute_S_crumple", "P_cargo_chute_S", 1000f, 0, 0, 0, 0, 0);
                                unk_0xA1E7A40E1F56E511(&iLocal_63, 6);
                                if (unk_0x39A01A052D9B5FF0(iLocal_64))
                                {
                                    unk_0x9C47809EE2CC69F5(iLocal_64, 255);
                                }
                            }
                        }
                    }
                }
            }
            if (!unk_0xA2BC31158C8CEFD2(iLocal_63, 14))
            {
                if (unk_0x8A7BBB98FFB32893(Local_60.f_13))
                {
                    if (unk_0xF42AC9E0924DC59B(Local_60.f_13) || (!unk_0xDD00A9922FD2D5D5(Local_60.f_13) && unk_0x722688699565161D()))
                    {
                        if (func_116(Local_60.f_13))
                        {
                            unk_0x1B4ECEAD09E1E430(unk_0x833BB45D35E36889(Local_60.f_13), 2, 0.1f);
                            if (unk_0xFF7F17A26DDE7E1F(unk_0x833BB45D35E36889(Local_60.f_13), 0))
                            {
                                if (unk_0x8A7BBB98FFB32893(Local_60.f_4))
                                {
                                    unk_0x363E2170E626A00A(unk_0x833BB45D35E36889(Local_60.f_4), 1, 1);
                                    if (Local_60.f_12 == 1)
                                    {
                                        func_71(unk_0x833BB45D35E36889(Local_60.f_4));
                                    }
                                }
                                unk_0xA1E7A40E1F56E511(&iLocal_63, 14);
                            }
                        }
                        if (!unk_0xA2BC31158C8CEFD2(Local_60.f_1, 8) && unk_0xA2BC31158C8CEFD2(iLocal_63, 8))
                        {
                            if (func_116(Local_60.f_13))
                            {
                                if (!unk_0x8BF9C2CB34E804C4(unk_0x833BB45D35E36889(Local_60.f_13)) && unk_0xC60B427B4F448C81(unk_0x833BB45D35E36889(Local_60.f_13)))
                                {
                                    if (unk_0x131D2F46228B31BA(unk_0x833BB45D35E36889(Local_60.f_13)))
                                    {
                                        bVar0 = true;
                                    }
                                    else if (!unk_0x916AF183F71F17C1(unk_0x833BB45D35E36889(Local_60.f_13)) && unk_0x6ABAFD7C604ED364(unk_0x833BB45D35E36889(Local_60.f_13)))
                                    {
                                        bVar0 = true;
                                    }
                                    if (bVar0)
                                    {
                                        unk_0x7440DC5684D20A14(unk_0x833BB45D35E36889(Local_60.f_13), 0);
                                        unk_0xA1E7A40E1F56E511(&(Local_60.f_1), 8);
                                    }
                                    if (Local_60.f_12 == 1)
                                    {
                                        func_71(unk_0x833BB45D35E36889(Local_60.f_4));
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vVar1 = { unk_0xACE5E491FC1B0D37(unk_0x833BB45D35E36889(Local_60.f_4), 1) };
            if (vVar1.z < -50f && !unk_0xE294A1321110B3E9(unk_0x833BB45D35E36889(Local_60.f_4)))
            {
                if (func_116(Local_60.f_4))
                {
                    unk_0xCB3446C6A91D1A78(unk_0x833BB45D35E36889(Local_60.f_4), Local_60.f_6, 1, 0, 0, 1);
                    if (Local_60.f_12 == 1)
                    {
                        func_71(unk_0x833BB45D35E36889(Local_60.f_4));
                    }
                }
            }
            if (unk_0x8A7BBB98FFB32893(Local_60.f_4))
            {
                if (unk_0x8A7BBB98FFB32893(Local_60.f_13) && unk_0xCA7317DE7E0F89E9(unk_0x833BB45D35E36889(Local_60.f_4)))
                {
                    iVar2 = unk_0x833BB45D35E36889(Local_60.f_13);
                }
                else
                {
                    iVar2 = unk_0x833BB45D35E36889(Local_60.f_4);
                }
            }
            if (unk_0xD4B321D9096B01FC(iVar2))
            {
                if (!unk_0xA2BC31158C8CEFD2(iLocal_63, 16))
                {
                    if (unk_0x19DEEB0989DD9C04(iVar2) >= 0.9f)
                    {
                        if (unk_0x7C1812FF1EEE88FE(Local_60.f_10) != -1)
                        {
                            unk_0xEC93A4D791E42F8E(unk_0x7C1812FF1EEE88FE(Local_60.f_10), "Crate_Underwater", 1f);
                        }
                        unk_0xA1E7A40E1F56E511(&iLocal_63, 16);
                    }
                }
                else if (unk_0x19DEEB0989DD9C04(iVar2) < 0.9f)
                {
                    if (unk_0x7C1812FF1EEE88FE(Local_60.f_10) != -1)
                    {
                        unk_0xEC93A4D791E42F8E(unk_0x7C1812FF1EEE88FE(Local_60.f_10), "Crate_Underwater", 0f);
                    }
                    unk_0x3B76114EC84D5812(&iLocal_63, 16);
                }
            }
        }
    }
}

int func_114()//Position - 0x3C92
{
    int iVar0;
    
    if (unk_0x8A7BBB98FFB32893(Local_60.f_13))
    {
        if (!unk_0x916AF183F71F17C1(unk_0x833BB45D35E36889(Local_60.f_13)))
        {
            iVar0 = 1;
        }
        if (unk_0xFF7F17A26DDE7E1F(unk_0x833BB45D35E36889(Local_60.f_13), 0))
        {
            iVar0 = 1;
        }
        if (unk_0xE294A1321110B3E9(unk_0x833BB45D35E36889(Local_60.f_13)))
        {
            iVar0 = 1;
        }
        if (func_115())
        {
            iVar0 = 1;
        }
        if (iVar0 == 1)
        {
            if (func_116(Local_60.f_13))
            {
                unk_0x7440DC5684D20A14(unk_0x833BB45D35E36889(Local_60.f_13), 0);
                return 1;
            }
        }
    }
    return 0;
}

int func_115()//Position - 0x3D0A
{
    float fVar0;
    
    fVar0 = unk_0x30F2F1A95B6762F0(unk_0x833BB45D35E36889(Local_60.f_5));
    if (fVar0 > 10f || fVar0 < -10f)
    {
        return 1;
    }
    fVar0 = unk_0x6E77B3E7393A77D3(unk_0x833BB45D35E36889(Local_60.f_5));
    if (fVar0 > 10f || fVar0 < -10f)
    {
        return 1;
    }
    return 0;
}

int func_116(int iParam0)//Position - 0x3D69
{
    if (unk_0x9C625F4590C97F13(iParam0))
    {
        unk_0x4DB32D0662E0696B(iParam0);
        return unk_0xF42AC9E0924DC59B(iParam0);
    }
    return 0;
}

void func_117()//Position - 0x3D8B
{
    int iVar0;
    
    iVar0 = unk_0x0336A7593E5AD83F(false, 0);
    if (Local_60.f_D != iVar0)
    {
        if (Local_60.f_D > 0 || !unk_0x9C625F4590C97F13(Local_60.f_2))
        {
            if (Local_60.f_D < iVar0 || func_125(Local_60.f_D, 0, 1))
            {
                unk_0xA019A9258930EC41(Local_60.f_D);
            }
        }
    }
    iVar0 = unk_0x03E221531363601B(false, 0);
    if (Local_60.f_E != iVar0)
    {
        if (Local_60.f_E > 0 || !unk_0x9C625F4590C97F13(Local_60.f_3))
        {
            if (Local_60.f_E < iVar0 || func_124(Local_60.f_E, 0, 1))
            {
                unk_0x98B3F83A2664256A(Local_60.f_E);
            }
        }
    }
    iVar0 = unk_0x1D20AA4302D0BF3D(false, 0);
    if (Local_60.f_F != iVar0)
    {
        if (Local_60.f_F < iVar0 || func_118(Local_60.f_F, 0, 1))
        {
            unk_0x58B4DE842733F8D9(Local_60.f_F);
        }
    }
}

int func_118(int iParam0, bool bParam1, bool bParam2)//Position - 0x3E5C
{
    return func_119(2, iParam0, 1, bParam1, bParam2);
}

int func_119(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x3E70
{
    int iVar0;
    int iVar1;
    
    if (!unk_0xA2BC31158C8CEFD2(Global_152428, 0))
    {
        return 0;
    }
    if ((bParam2 && !bParam3) && iParam1 <= (func_123(iParam0) - func_122(iParam0, 0)))
    {
        return 1;
    }
    else
    {
        if (bParam3)
        {
            if (bParam2)
            {
                iVar0 = (iParam1 - func_122(iParam0, 0));
            }
            else
            {
                iVar0 = iParam1;
            }
            iVar1 = (func_123(iParam0) - func_121(iParam0));
        }
        else
        {
            if (bParam2)
            {
                iVar0 = (iParam1 - func_122(iParam0, 0));
            }
            else
            {
                iVar0 = iParam1;
            }
            iVar1 = (func_123(iParam0) - func_122(iParam0, 1));
        }
        if (!bParam4 && Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/] != 3)
        {
            iVar1 = (iVar1 - func_120(iParam0));
        }
        if (iVar0 < iVar1)
        {
            return 1;
        }
    }
    return 0;
}

int func_120(int iParam0)//Position - 0x3F39
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

int func_121(int iParam0)//Position - 0x3F73
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

int func_122(int iParam0, bool bParam1)//Position - 0x3FB9
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

int func_123(int iParam0)//Position - 0x4058
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

int func_124(int iParam0, bool bParam1, bool bParam2)//Position - 0x4098
{
    return func_119(0, iParam0, 1, bParam1, bParam2);
}

int func_125(int iParam0, bool bParam1, bool bParam2)//Position - 0x40AC
{
    return func_119(1, iParam0, 1, bParam1, bParam2);
}

void func_126()//Position - 0x40C0
{
    if (!unk_0xA2BC31158C8CEFD2(iLocal_63, 10))
    {
        if (func_35(Local_60.f_2))
        {
            unk_0xA12E1659DEF57244(&uLocal_65);
            unk_0xD67C82BBC9A488A6(0, unk_0x40237B62400B4BCC(Local_60.f_2), Local_60.f_6 + Vector(50f, 0f, 0f), 60f, 0, joaat("cuban800"), 262144, 15f, -1f);
            unk_0xD67C82BBC9A488A6(0, unk_0x40237B62400B4BCC(Local_60.f_2), Local_60.f_9, 60f, 0, joaat("cuban800"), 262144, -1f, -1f);
            unk_0x15A7B753872B3CE3(uLocal_65);
            unk_0xA1E7A40E1F56E511(&iLocal_63, 10);
        }
    }
}

int func_127()//Position - 0x4147
{
    return Local_60;
}

int func_128()//Position - 0x4151
{
    int iVar0;
    
    iVar0 = joaat("prop_box_ammo02a");
    if (Local_60.f_12 == 1)
    {
        iVar0 = 1688540826;
    }
    unk_0x6BB2B1818CAE531E(iVar0);
    unk_0x6BB2B1818CAE531E(joaat("p_cargo_chute_s"));
    if ((unk_0x6DF9C43E3CC645BC(iVar0) && unk_0x6DF9C43E3CC645BC(joaat("p_cargo_chute_s"))) && func_129())
    {
        return 1;
    }
    return 0;
}

int func_129()//Position - 0x41A3
{
    unk_0x36B659209EBDD366("P_cargo_chute_S");
    if (unk_0xB25A0D192C6A0A5B("P_cargo_chute_S"))
    {
        return 1;
    }
    return 0;
}

int func_130(int iParam0)//Position - 0x41C3
{
    return vLocal_62[iParam0 /*3*/];
}

int func_131()//Position - 0x41D1
{
    var uVar0;
    
    func_139(&uVar0);
    if (Global_140852 == 0)
    {
        if (!unk_0x393E9918BC37548A())
        {
            return 1;
        }
    }
    if (func_138())
    {
        return 1;
    }
    if (Global_258E39)
    {
        return 1;
    }
    if (func_137())
    {
        return 1;
    }
    if (func_136(159))
    {
        if (!func_135())
        {
            return 1;
        }
    }
    if (func_136(157))
    {
        return 1;
    }
    if (!unk_0x2A983C9CF4EE0D5E())
    {
        return 1;
    }
    if (func_132() != 0)
    {
        if (unk_0x222F76006659B0EB(func_132()) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int func_132()//Position - 0x425B
{
    switch (func_134())
    {
        case 0:
            return func_133();
            break;
        
        case 2:
            return joaat("creator");
            break;
    }
    return 0;
}

int func_133()//Position - 0x428E
{
    switch (Global_258E9F)
    {
        case 0:
            return joaat("freemode");
        
        default:
    }
    return joaat("freemode");
}

int func_134()//Position - 0x42B2
{
    return Global_7810;
}

bool func_135()//Position - 0x42BD
{
    return Global_255E41.f_256;
}

int func_136(int iParam0)//Position - 0x42CC
{
    if (unk_0xD076BFB919B20653(1, iParam0))
    {
        return 1;
    }
    return 0;
}

bool func_137()//Position - 0x42E3
{
    return Global_258577;
}

bool func_138()//Position - 0x42EF
{
    return Global_255E41.f_251;
}

void func_139(var uParam0)//Position - 0x42FE
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
                    func_140(iVar0);
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

void func_140(int iParam0)//Position - 0x4371
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
                        if (func_141(iVar2, &bVar3))
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

int func_141(int iParam0, var uParam1)//Position - 0x43F2
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

void func_142()//Position - 0x4451
{
    SYSTEM::WAIT(0);
}

void func_143()//Position - 0x445E
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    
    if (unk_0x39A01A052D9B5FF0(iLocal_64))
    {
        unk_0xAA2276003B2ADF1B(&iLocal_64);
    }
    if (unk_0x722688699565161D())
    {
        iVar0 = 0;
        while (iVar0 < 250)
        {
            if (iVar1 == 0)
            {
                if (unk_0x8A7BBB98FFB32893(Local_60.f_13))
                {
                    if (unk_0xFF7F17A26DDE7E1F(unk_0x833BB45D35E36889(Local_60.f_13), 0))
                    {
                        if (func_116(Local_60.f_13))
                        {
                            unk_0x7440DC5684D20A14(unk_0x833BB45D35E36889(Local_60.f_13), 0);
                            iVar1 = 1;
                        }
                    }
                    else
                    {
                        iVar1 = 1;
                    }
                }
                else
                {
                    iVar1 = 1;
                }
            }
            if (iVar2 == 0)
            {
                if (unk_0x8A7BBB98FFB32893(Local_60.f_4))
                {
                    if (unk_0xCA7317DE7E0F89E9(unk_0x833BB45D35E36889(Local_60.f_4)))
                    {
                        if (func_116(Local_60.f_4))
                        {
                            unk_0x363E2170E626A00A(unk_0x833BB45D35E36889(Local_60.f_4), 1, 1);
                            iVar2 = 1;
                        }
                    }
                    else
                    {
                        iVar2 = 1;
                    }
                }
                else
                {
                    iVar2 = 1;
                }
            }
            if (iVar3 == 0)
            {
                if (unk_0x8A7BBB98FFB32893(Local_60.f_5))
                {
                    if (func_116(Local_60.f_5))
                    {
                        func_3(&(Local_60.f_5));
                        iVar3 = 1;
                    }
                }
                else
                {
                    iVar3 = 1;
                }
            }
            if ((iVar2 == 1 && iVar3 == 1) && iVar1 == 1)
            {
                iVar0 = 9999;
            }
            else
            {
                SYSTEM::WAIT(0);
            }
            iVar0++;
        }
        Local_60 = 4;
        func_147(func_148(1, 1), 8, func_50());
    }
    func_146();
    func_70();
    func_145();
    func_144();
}

void func_144()//Position - 0x4595
{
    unk_0x9C9E32388A7886A2();
}

void func_145()//Position - 0x45A1
{
    if (unk_0xA2BC31158C8CEFD2(iLocal_63, 10))
    {
        unk_0x78829A259A6975CD(&uLocal_65);
    }
}

void func_146()//Position - 0x45BA
{
    if (iLocal_66 != 0)
    {
        if (unk_0xFB3E0C95810C1454(iLocal_66))
        {
            unk_0x47E6FFF8419C8442(iLocal_66, 0);
            iLocal_66 = 0;
        }
    }
}

void func_147(int iParam0, int iParam1, var uParam2)//Position - 0x45E1
{
    struct<4> Var0;
    
    Var0 = 170508679;
    Var0.f_1 = unk_0x7C7787D2D7139A85();
    Var0.f_3 = iParam1;
    Var0.f_2 = uParam2;
    if (!iParam0 == 0)
    {
        unk_0x990C4E4B3665A4D6(1, &Var0, 6, iParam0);
    }
}

int func_148(int iParam0, bool bParam1)//Position - 0x4619
{
    var uVar0;
    int iVar1;
    int iVar2;
    
    iVar1 = 0;
    while (iVar1 < 32)
    {
        iVar2 = unk_0x0C98179F08C6DA4F(iVar1);
        if (func_37(iVar2, 0, 0))
        {
            if (iVar2 != unk_0x7C7787D2D7139A85() || iParam0)
            {
                if (bParam1)
                {
                    unk_0xA1E7A40E1F56E511(&uVar0, iVar1);
                }
                else if (!func_88(iVar2, 0))
                {
                    unk_0xA1E7A40E1F56E511(&uVar0, iVar1);
                }
            }
        }
        iVar1++;
    }
    return uVar0;
}

int func_149(struct<21> Param0)//Position - 0x467E
{
    int iVar0;
    
    func_153(func_154(Param0), Param0);
    unk_0x98B3F83A2664256A(1);
    unk_0xA019A9258930EC41(1);
    unk_0x58B4DE842733F8D9(2);
    func_151(0, -1, 0);
    unk_0xCCD47D736BFD5DE3(&Local_60, 23);
    unk_0xFF584A1B7842F821(&vLocal_62, 97);
    if (!func_150())
    {
        return 0;
    }
    unk_0x50E03C7D74E352C4(0);
    if (unk_0x722688699565161D())
    {
        Local_60.f_11 = unk_0x7C7787D2D7139A85();
        Local_60.f_6 = { unk_0xC12F91346EA13947(unk_0x0FA8183DAD2B3203(), 0f, (5f * 1.5f), 0f) };
        Local_60.f_D = 1;
        Local_60.f_E = 1;
        Local_60.f_F = 3;
        Local_60.f_9 = { 0f, 0f, 500f };
        if (Param0.f_14 == 3)
        {
            Local_60.f_12 = 1;
        }
        iVar0 = unk_0xBAC643F143880136(0, 3);
        if (iVar0 == 1)
        {
            Local_60.f_9 = 9000f;
        }
        else if (iVar0 == 2)
        {
            Local_60.f_9 = -9000f;
        }
        iVar0 = unk_0xBAC643F143880136(0, 3);
        if (iVar0 == 1)
        {
            Local_60.f_9.f_1 = 9000f;
        }
        else if (iVar0 == 2)
        {
            Local_60.f_9.f_1 = -9000f;
        }
        if (Local_60.f_9 == 0f && Local_60.f_9.f_1 == 0f)
        {
            Local_60.f_9 = { -9000f, 5000f, 500f };
        }
    }
    bLocal_67 = unk_0xEDC68E498B715C56();
    if (unk_0x393E9918BC37548A())
    {
        vLocal_62[unk_0x2E40EEA43EF34BD6() /*3*/] = 0;
    }
    return 1;
}

int func_150()//Position - 0x47B4
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
        if (func_138())
        {
            return 0;
        }
        if (func_136(157))
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

int func_151(int iParam0, int iParam1, bool bParam2)//Position - 0x480D
{
    int iVar0;
    
    iVar0 = unk_0x306B26A377F9A5BE();
    while (iVar0 != 2)
    {
        if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
        {
            if (!bParam2)
            {
                func_144();
            }
            else
            {
                return 0;
            }
        }
        if (!func_152())
        {
            if (iParam0 == 0)
            {
                if (!unk_0x393E9918BC37548A())
                {
                    if (!bParam2)
                    {
                        func_144();
                    }
                    else
                    {
                        return 0;
                    }
                }
                if (func_138())
                {
                    if (!bParam2)
                    {
                        func_144();
                    }
                    else
                    {
                        return 0;
                    }
                }
                if (func_136(157))
                {
                    if (!bParam2)
                    {
                        func_144();
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
                    func_144();
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
                func_144();
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
            func_144();
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

bool func_152()//Position - 0x4922
{
    return Global_140852;
}

void func_153(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x492E
{
    if (!unk_0x393E9918BC37548A())
    {
        func_144();
    }
    unk_0x4CF6FBF2580A447D(iParam0, 0, Param1.f_10);
}

int func_154(int iParam0)//Position - 0x494D
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

