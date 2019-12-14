#region Local Var
    int iLocal_0 = 0;
    var uLocal_1 = 0;
    var uLocal_2 = 0;
    int iLocal_3 = 0;
    int iLocal_4 = 0;
    int iLocal_5 = 0;
    int iLocal_6 = 0;
    int iLocal_7 = 0;
    int iLocal_8 = 0;
    int iLocal_9 = 0;
    int iLocal_10 = 0;
    int iLocal_11 = 0;
    int iLocal_12 = 0;
    var uLocal_13 = 0;
    var uLocal_14 = 0;
    float fLocal_15 = 0f;
    var uLocal_16 = 0;
    var uLocal_17 = 0;
    int iLocal_18 = 0;
    var uLocal_19 = 0;
    var uLocal_20 = 0;
    char* sLocal_21 = NULL;
    var uLocal_22 = 0;
    var uLocal_23 = 0;
    float fLocal_24 = 0f;
    float fLocal_25 = 0f;
    float fLocal_26 = 0f;
    var uLocal_27 = 0;
    var uLocal_28 = 0;
    float fLocal_29 = 0f;
    var uLocal_30 = 0;
    var uLocal_31 = 0;
    var uLocal_32 = 0;
    float fLocal_33 = 0f;
    float fLocal_34 = 0f;
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
    int iLocal_47 = 0;
    bool bLocal_48 = 0;
    int iLocal_49 = 0;
    int iLocal_50 = 0;
    int iLocal_51 = 0;
    bool bLocal_52 = 0;
    int iLocal_53 = 0;
    int iLocal_54 = 0;
    int iLocal_55 = 0;
    int iLocal_56 = 0;
    int iLocal_57 = 0;
    float fLocal_58 = 0f;
    var uLocal_59 = 0;
    var uLocal_60 = 0;
    float fLocal_61[3] = { 0f, 0f, 0f };
    var uLocal_62 = 16;
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
    struct<2> Local_227 = { 0, 0 } ;
    var uLocal_228 = 745926877;
    var uLocal_229 = 0;
    var uLocal_230 = 3;
    var uLocal_231 = 0;
    var uLocal_232 = -839953400;
    var uLocal_233 = 0;
    var uLocal_234 = -839953400;
    var uLocal_235 = 0;
    var uLocal_236 = -839953400;
    var uLocal_237 = 0;
    var uLocal_238 = 0;
    var uLocal_239 = 0;
    var uLocal_240 = 0;
    var uLocal_241 = 0;
    var uLocal_242 = 0;
    var uLocal_243 = 0;
    var uLocal_244 = 0;
    var uLocal_245 = 0;
    var uLocal_246 = 0;
    var uLocal_247 = 0;
    int iLocal_248[2] = { 0, 0 };
    struct<21> Local_249 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
    iLocal_0 = 3;
    iLocal_3 = 1;
    iLocal_4 = 134;
    iLocal_5 = 134;
    iLocal_6 = 1;
    iLocal_7 = 1;
    iLocal_8 = 1;
    iLocal_9 = 134;
    iLocal_10 = 1;
    iLocal_11 = 12;
    iLocal_12 = 12;
    fLocal_15 = 0.001f;
    iLocal_18 = -1;
    sLocal_21 = "NULL";
    fLocal_24 = 80f;
    fLocal_25 = 140f;
    fLocal_26 = 180f;
    fLocal_29 = 0f;
    fLocal_33 = -0.0375f;
    fLocal_34 = 0.17f;
    iLocal_40 = 1;
    iLocal_41 = 65;
    iLocal_42 = 49;
    iLocal_43 = 64;
    fLocal_58 = -1f;
    if (unk_0x393E9918BC37548A())
    {
        func_112(ScriptParam_249);
    }
    while (true)
    {
        func_111();
        if (func_100())
        {
            func_96();
        }
        if (unk_0x393E9918BC37548A())
        {
            func_95();
            func_93();
            switch (func_92(unk_0x2E40EEA43EF34BD6()))
            {
                case 0:
                    if (func_91() > 0)
                    {
                        iLocal_248[unk_0x2E40EEA43EF34BD6()] = 2;
                    }
                    break;
                
                case 2:
                    func_59();
                    if (func_91() == 3)
                    {
                        iLocal_248[unk_0x2E40EEA43EF34BD6()] = 3;
                    }
                    break;
                
                case 3:
                    func_96();
                    break;
            }
            if (unk_0x722688699565161D())
            {
                switch (func_91())
                {
                    case 0:
                        Local_227 = 2;
                        break;
                    
                    case 2:
                        func_1();
                        break;
                    
                    case 3:
                        break;
                    }
                }
        }
    }
}

void func_1()//Position - 0x12D
{
    func_7();
    if (Local_227.f_1.f_2 == 5)
    {
        Local_227 = 3;
    }
    if (func_6(&(Local_227.f_1.f_13)))
    {
        if (func_4(&(Local_227.f_1.f_13), 20000, 0))
        {
            Local_227 = 3;
        }
    }
    if (func_3())
    {
        Local_227 = 3;
    }
    if (bLocal_48)
    {
        if (!unk_0xEDC68E498B715C56())
        {
            Local_227 = 3;
        }
    }
    else if (unk_0xEDC68E498B715C56())
    {
        Local_227 = 3;
    }
    if (func_2())
    {
        Local_227 = 3;
    }
}

bool func_2()//Position - 0x198
{
    return Global_193D44.f_3;
}

bool func_3()//Position - 0x1A6
{
    return Global_1406A1;
}

int func_4(var uParam0, int iParam1, bool bParam2)//Position - 0x1B2
{
    if (iParam1 == -1)
    {
        return 1;
    }
    func_5(uParam0, bParam2, 0);
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

void func_5(var uParam0, bool bParam1, bool bParam2)//Position - 0x210
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

bool func_6(var uParam0)//Position - 0x255
{
    return uParam0->f_1;
}

void func_7()//Position - 0x261
{
    switch (Local_227.f_1.f_2)
    {
        case 0:
            func_58(1);
            break;
        
        case 1:
            if (func_38())
            {
                if (func_25())
                {
                    func_5(&(Local_227.f_1.f_11), 0, 0);
                    func_58(2);
                }
            }
            break;
        
        case 2:
            func_16();
            func_14();
            if (!func_12(Local_227.f_1))
            {
                if ((func_11(Local_227.f_1.f_3[0 /*2*/]) && func_11(Local_227.f_1.f_3[1 /*2*/])) && func_11(Local_227.f_1.f_3[2 /*2*/]))
                {
                    func_58(5);
                }
            }
            else if (func_11(Local_227.f_1.f_3[0 /*2*/]))
            {
                if (func_11(Local_227.f_1.f_3[1 /*2*/]) && func_11(Local_227.f_1.f_3[2 /*2*/]))
                {
                    func_58(5);
                }
            }
            else if (func_11(Local_227.f_1.f_3[1 /*2*/]) && func_11(Local_227.f_1.f_3[2 /*2*/]))
            {
                func_58(3);
            }
            else
            {
                if (func_6(&(Local_227.f_1.f_11)))
                {
                    if (func_4(&(Local_227.f_1.f_11), 120000, 0))
                    {
                        func_58(3);
                    }
                }
                if (func_10(unk_0x7C7787D2D7139A85(), 0))
                {
                    func_58(3);
                }
                if (bLocal_52)
                {
                    func_58(3);
                }
                if (func_8(unk_0x7C7787D2D7139A85(), 136))
                {
                    func_58(3);
                }
            }
            break;
        
        case 3:
            func_16();
            if (!func_12(Local_227.f_1))
            {
                if ((func_11(Local_227.f_1.f_3[0 /*2*/]) && func_11(Local_227.f_1.f_3[1 /*2*/])) && func_11(Local_227.f_1.f_3[2 /*2*/]))
                {
                    func_58(5);
                }
            }
            else if (func_11(Local_227.f_1.f_3[0 /*2*/]))
            {
                if (func_11(Local_227.f_1.f_3[1 /*2*/]) && func_11(Local_227.f_1.f_3[2 /*2*/]))
                {
                    func_58(5);
                }
            }
            break;
        
        case 5:
            break;
    }
}

int func_8(int iParam0, int iParam1)//Position - 0x453
{
    if (Global_18DB1B[iParam0 /*614*/] == iParam1)
    {
        return func_9(iParam0);
    }
    return 0;
}

int func_9(int iParam0)//Position - 0x473
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iVar0 /*614*/].f_1, 0);
    }
    return 0;
}

bool func_10(int iParam0, int iParam1)//Position - 0x499
{
    return unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_D0, iParam1);
}

int func_11(int iParam0)//Position - 0x4B2
{
    if (unk_0x9C625F4590C97F13(iParam0))
    {
        return unk_0x2BF5E63466422C38(unk_0x70D3AC024E0A9837(iParam0));
    }
    return 1;
}

int func_12(int iParam0)//Position - 0x4D1
{
    if (unk_0x9C625F4590C97F13(iParam0))
    {
        return !func_13(unk_0x40237B62400B4BCC(iParam0));
    }
    return 0;
}

int func_13(int iParam0)//Position - 0x4F1
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

void func_14()//Position - 0x52A
{
    if (Global_2531AD.f_F99)
    {
        func_15(1, 600000);
        bLocal_52 = true;
    }
    if (Global_2531AD.f_F98 >= 250f)
    {
        func_15(1, 600000);
        bLocal_52 = true;
    }
}

void func_15(int iParam0, int iParam1)//Position - 0x564
{
    if (Global_2531AD.f_F24[iParam0] < iParam1)
    {
        Global_2531AD.f_F24[iParam0] = iParam1;
    }
    unk_0xA1E7A40E1F56E511(&(Global_2531AD.f_F23), iParam0);
}

void func_16()//Position - 0x596
{
    iLocal_56 = 0;
    iLocal_57 = 0;
    if (func_12(Local_227.f_1))
    {
        iLocal_56++;
    }
    else if (unk_0xD4B321D9096B01FC(unk_0x40237B62400B4BCC(Local_227.f_1)))
    {
        func_24(&(Local_227.f_1));
        iLocal_56++;
    }
    if (func_11(Local_227.f_1.f_3[0 /*2*/]))
    {
        if (unk_0x8A7BBB98FFB32893(Local_227.f_1.f_3[0 /*2*/]))
        {
            func_24(&(Local_227.f_1.f_3[0 /*2*/]));
            iLocal_57++;
        }
    }
    else
    {
        iLocal_57++;
    }
    if (func_11(Local_227.f_1.f_3[1 /*2*/]))
    {
        if (unk_0x8A7BBB98FFB32893(Local_227.f_1.f_3[1 /*2*/]))
        {
            func_24(&(Local_227.f_1.f_3[1 /*2*/]));
            iLocal_57++;
        }
    }
    else
    {
        iLocal_57++;
    }
    if (func_11(Local_227.f_1.f_3[2 /*2*/]))
    {
        if (unk_0x8A7BBB98FFB32893(Local_227.f_1.f_3[2 /*2*/]))
        {
            func_24(&(Local_227.f_1.f_3[2 /*2*/]));
            iLocal_57++;
        }
    }
    else
    {
        iLocal_57++;
    }
    if (unk_0x0336A7593E5AD83F(false, 0) != iLocal_56)
    {
        if (func_23(iLocal_56, 0, 1))
        {
            unk_0xA019A9258930EC41(iLocal_56);
        }
    }
    if (unk_0x03E221531363601B(false, 0) != iLocal_57)
    {
        if (func_17(iLocal_57, 0, 1))
        {
            unk_0x98B3F83A2664256A(iLocal_57);
        }
    }
}

bool func_17(int iParam0, bool bParam1, bool bParam2)//Position - 0x6C1
{
    return func_18(0, iParam0, 1, bParam1, bParam2);
}

int func_18(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x6D5
{
    int iVar0;
    int iVar1;
    
    if (!unk_0xA2BC31158C8CEFD2(Global_152428, 0))
    {
        return 0;
    }
    if ((bParam2 && !bParam3) && iParam1 <= (func_22(iParam0) - func_21(iParam0, 0)))
    {
        return 1;
    }
    else
    {
        if (bParam3)
        {
            if (bParam2)
            {
                iVar0 = (iParam1 - func_21(iParam0, 0));
            }
            else
            {
                iVar0 = iParam1;
            }
            iVar1 = (func_22(iParam0) - func_20(iParam0));
        }
        else
        {
            if (bParam2)
            {
                iVar0 = (iParam1 - func_21(iParam0, 0));
            }
            else
            {
                iVar0 = iParam1;
            }
            iVar1 = (func_22(iParam0) - func_21(iParam0, 1));
        }
        if (!bParam4 && Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/] != 3)
        {
            iVar1 = (iVar1 - func_19(iParam0));
        }
        if (iVar0 < iVar1)
        {
            return 1;
        }
    }
    return 0;
}

int func_19(int iParam0)//Position - 0x79E
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

int func_20(int iParam0)//Position - 0x7D8
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

int func_21(int iParam0, bool bParam1)//Position - 0x81E
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

int func_22(int iParam0)//Position - 0x8BB
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

bool func_23(int iParam0, bool bParam1, bool bParam2)//Position - 0x8FB
{
    return func_18(1, iParam0, 1, bParam1, bParam2);
}

void func_24(var uParam0)//Position - 0x90F
{
    int iVar0;
    
    if (unk_0x8A7BBB98FFB32893(*uParam0))
    {
        iVar0 = unk_0xAEA6D4EC961DFA03(*uParam0);
        unk_0xEADD2B962AE1DE7D(&iVar0);
    }
}

int func_25()//Position - 0x933
{
    if (func_37(Local_227.f_1.f_1))
    {
        if (func_37(Local_227.f_1.f_3[0 /*2*/].f_1))
        {
            if (!func_12(Local_227.f_1))
            {
                if (func_34(&(Local_227.f_1), Local_227.f_1.f_1, Local_227.f_1.f_A, 0f, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0))
                {
                    unk_0x3231D7D927FBC2FC(unk_0x40237B62400B4BCC(Local_227.f_1));
                    unk_0xB90231068DCFFBA1(unk_0x40237B62400B4BCC(Local_227.f_1), true, 1, 0);
                    unk_0x2CF873D4DD55E9B7(unk_0x40237B62400B4BCC(Local_227.f_1));
                    unk_0x3280F16E96215952(unk_0x40237B62400B4BCC(Local_227.f_1), 1);
                    func_33(unk_0x40237B62400B4BCC(Local_227.f_1), 4);
                    Global_2531AD.f_F93 = unk_0x40237B62400B4BCC(Local_227.f_1);
                    if (func_32(&(Local_227.f_1.f_3[0 /*2*/]), Local_227.f_1, 4, Local_227.f_1.f_3[0 /*2*/].f_1, -1, 1, 1, 1))
                    {
                        func_27(Local_227.f_1.f_3[0 /*2*/]);
                        func_26(unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[0 /*2*/]), 0, 0, 1);
                        unk_0xBEC0D086F8C12C07(unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[0 /*2*/]), unk_0x7C7787D2D7139A85());
                        func_33(unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[0 /*2*/]), 4);
                        Global_2531AD.f_F94[0] = unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[0 /*2*/]);
                        if (func_32(&(Local_227.f_1.f_3[1 /*2*/]), Local_227.f_1, 4, Local_227.f_1.f_3[1 /*2*/].f_1, 1, 1, 1, 1))
                        {
                            func_27(Local_227.f_1.f_3[1 /*2*/]);
                            func_26(unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[1 /*2*/]), 1, 1, 1);
                            unk_0xBEC0D086F8C12C07(unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[1 /*2*/]), unk_0x7C7787D2D7139A85());
                            func_33(unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[1 /*2*/]), 4);
                            Global_2531AD.f_F94[1] = unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[1 /*2*/]);
                            if (func_32(&(Local_227.f_1.f_3[2 /*2*/]), Local_227.f_1, 4, Local_227.f_1.f_3[2 /*2*/].f_1, 2, 1, 1, 1))
                            {
                                func_27(Local_227.f_1.f_3[2 /*2*/]);
                                func_26(unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[2 /*2*/]), 2, 1, 1);
                                unk_0xBEC0D086F8C12C07(unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[2 /*2*/]), unk_0x7C7787D2D7139A85());
                                func_33(unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[2 /*2*/]), 4);
                                Global_2531AD.f_F94[2] = unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[2 /*2*/]);
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

void func_26(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xB6B
{
    unk_0x068EF666AEEC0162(iParam0, joaat("weapon_assaultrifle"), 300, 1);
    unk_0xDEB0AA30ABFDCF48(iParam0, 5, 1);
    unk_0xDEB0AA30ABFDCF48(iParam0, 3, 0);
    unk_0x372133FEEA436533(iParam0, 2);
    unk_0x4EB7E1C0903EDB2E(iParam0, 1);
    unk_0x641587D7C7BE76D8(iParam0, 2);
    unk_0xB9B72194C00AE3EB(iParam0, 1);
    unk_0x81A9CCDE091AC75C(iParam0, 1);
    unk_0x6E712A176E3EEFA8(iParam0, true);
    unk_0x1FB49AA1C2C2A2F3(iParam0, (fLocal_61[iParam1] + 100f));
    unk_0x8907A962D13166E7(iParam0, 400f);
    unk_0x4FC72F7910423720(iParam0, 10, 400f);
    if (!bParam2)
    {
        if (bParam3)
        {
            unk_0x0618833C3726B3E6(iParam0, 250);
            unk_0x0BBBAC4546BFE280(iParam0, 250, 0);
            unk_0xA3A80E8605D69DFD(iParam0, 250);
        }
    }
    else
    {
        unk_0x04F5A8AA60EC662B(iParam0, true);
    }
}

void func_27(int iParam0)//Position - 0xC14
{
    int iVar0;
    
    if (!func_29(unk_0x7C7787D2D7139A85(), 0, 0) && !func_28())
    {
        iVar0 = Global_180864[5];
    }
    else
    {
        iVar0 = unk_0x79CDB5CF25B388E3(unk_0x0FA8183DAD2B3203());
    }
    unk_0xDB889DCC8B0139E6(unk_0x70D3AC024E0A9837(iParam0), iVar0);
}

bool func_28()//Position - 0xC56
{
    return unk_0xA2BC31158C8CEFD2(Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_27.f_12, 0);
}

int func_29(int iParam0, bool bParam1, bool bParam2)//Position - 0xC72
{
    if (bParam1)
    {
        if (func_30(iParam0))
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

bool func_30(int iParam0)//Position - 0xCA4
{
    return func_31(iParam0);
}

bool func_31(int iParam0)//Position - 0xCB2
{
    return unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_D.f_1, 0);
}

int func_32(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0xCCC
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

void func_33(int iParam0, int iParam1)//Position - 0xD54
{
    int iVar0;
    
    iVar0 = 0;
    if (unk_0x145DAE1A4D0EA05D(iParam0, "AttributeDamage"))
    {
        iVar0 = unk_0x7CE457B32235D9D1(iParam0, "AttributeDamage");
    }
    unk_0xA1E7A40E1F56E511(&iVar0, iParam1);
    unk_0x6950A3804E46BC89(iParam0, "AttributeDamage", iVar0);
}

int func_34(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0xD87
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
            func_35(vParam2, fParam3, iParam1, iVar1);
            return 1;
        }
    }
    return 0;
}

void func_35(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0xE8F
{
    int iVar0;
    
    if (func_36(unk_0x7C7787D2D7139A85(), vParam0, iParam2) > -1)
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

int func_36(int iParam0, vector3 vParam1, int iParam2)//Position - 0xF62
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

bool func_37(int iParam0)//Position - 0x1000
{
    if (iParam0 == 0)
    {
        return 1;
    }
    unk_0x6BB2B1818CAE531E(iParam0);
    return unk_0x6DF9C43E3CC645BC(iParam0);
}

int func_38()//Position - 0x101E
{
    vector3 vVar0;
    
    if (func_57(Local_227.f_1.f_A))
    {
        if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
        {
            if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
            {
                vVar0 = { func_55(func_56(unk_0x7C7787D2D7139A85()), 0f, (-200f * SYSTEM::SIN((SYSTEM::TO_FLOAT(Local_227.f_1.f_F) * 30f))), (200f * SYSTEM::COS((SYSTEM::TO_FLOAT(Local_227.f_1.f_F) * 30f))), 0f) };
                vVar0.z = unk_0xDF4AC4F7C1AE2598(vVar0.x, vVar0.y);
                vVar0.z = (vVar0.z + 30f);
                if (func_39(vVar0, 20f, 1f, 1f, 15f, 1, 1, 1, 180f, 0, -1, 1, 0, 0, 0, 0, 0))
                {
                    Local_227.f_1.f_A = { vVar0 };
                    return 1;
                }
                else
                {
                    Local_227.f_1.f_F++;
                    if (Local_227.f_1.f_F >= 12)
                    {
                        Local_227.f_1.f_F = 0;
                    }
                }
            }
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int func_39(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x1111
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
        if (func_48(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
        {
            return 0;
        }
    }
    Global_24B2CF.f_2++;
    if (bParam6)
    {
        if (fParam4 > 0f)
        {
            if (func_40(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
            {
                return 0;
            }
        }
    }
    Global_24B2CF.f_2++;
    return 1;
}

int func_40(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x1222
{
    int iVar0;
    int iVar1;
    float fVar2;
    
    if (iParam2 && !bParam5)
    {
        if (func_47(unk_0x7C7787D2D7139A85(), 1, 1))
        {
            if (!unk_0x260395BA7F0C83CB())
            {
                fVar2 = fParam4;
                if (fParam7 > 0f)
                {
                    fVar2 = fParam7;
                }
                if (unk_0xD34AF93E9BCF12F0(func_45(unk_0x7C7787D2D7139A85()), vParam0, true) <= (fVar2 + fParam1))
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
        if (func_47(iVar1, 1, 1))
        {
            if (!func_42(iVar1, 0) && unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar1))
            {
                if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x7C7787D2D7139A85()))
                {
                    if ((func_41(iVar1) || !bParam8) && !Global_24FD09[iVar1 /*421*/].f_103)
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
                                if (unk_0xD34AF93E9BCF12F0(func_45(iVar1), vParam0, true) <= (fVar2 + fParam1))
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
                            if (unk_0xD34AF93E9BCF12F0(func_45(iVar1), vParam0, true) <= (fVar2 + fParam1))
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

int func_41(int iParam0)//Position - 0x13DA
{
    if (unk_0x0A21D8F32B9D5739(unk_0x23625FE58BACEBFD(iParam0)) || Global_24FD09[iParam0 /*421*/].f_F5)
    {
        return 1;
    }
    return 0;
}

bool func_42(int iParam0, int iParam1)//Position - 0x1405
{
    bool bVar0;
    
    if (iParam0 == unk_0x7C7787D2D7139A85())
    {
        bVar0 = func_43(-1, 0) == 8;
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

int func_43(int iParam0, bool bParam1)//Position - 0x1450
{
    int iVar0;
    int iVar1;
    
    iVar1 = iParam0;
    if (iVar1 == -1)
    {
        iVar1 = func_44();
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

int func_44()//Position - 0x1491
{
    return Global_1407E9;
}

Vector3 func_45(int iParam0)//Position - 0x149D
{
    int iVar0;
    
    iVar0 = iParam0;
    if ((func_46() && Global_1844AE[iVar0 /*871*/].f_34A) && !func_57(Global_1844AE[iVar0 /*871*/].f_34B))
    {
        return Global_1844AE[iVar0 /*871*/].f_34B;
    }
    return func_56(iParam0);
}

var func_46()//Position - 0x14F0
{
    return Global_255E41.f_11;
}

int func_47(int iParam0, bool bParam1, bool bParam2)//Position - 0x14FE
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

int func_48(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x1548
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    while (iVar0 < 32)
    {
        iVar1 = iVar0;
        if ((iParam6 == 1 && unk_0x7C7787D2D7139A85() != iVar1) || iParam6 == 0)
        {
            if (func_47(iVar1, bParam2, bParam3))
            {
                if (unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar1))
                {
                    if (!bParam5 || (!unk_0x2BF5E63466422C38(unk_0x23625FE58BACEBFD(iVar1)) && func_41(iVar1)))
                    {
                        if ((!bParam4 || (bParam4 == 1 && unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) != unk_0xC69A85EEB9CA3B95(iVar1))) || unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1)
                        {
                            if (((unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1 && uParam7) && bParam4) && func_49(iVar1))
                            {
                            }
                            else if (unk_0xD4B321D9096B01FC(unk_0x23625FE58BACEBFD(iVar1)))
                            {
                                if (unk_0xD34AF93E9BCF12F0(func_56(iVar1), vParam0, true) < fParam1)
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

int func_49(int iParam0)//Position - 0x1644
{
    if (func_54(unk_0x7C7787D2D7139A85(), iParam0))
    {
        return 1;
    }
    Global_264397 = { func_53(iParam0) };
    if (unk_0xB8A6A83E8C303720(&Global_264397))
    {
        return 1;
    }
    if (func_50(unk_0x7C7787D2D7139A85(), iParam0))
    {
        return 1;
    }
    return 0;
}

int func_50(int iParam0, int iParam1)//Position - 0x168B
{
    int iVar0;
    
    iVar0 = func_52(iParam0);
    if (!iVar0 == func_51())
    {
        if (iVar0 == func_52(iParam1))
        {
            return 1;
        }
    }
    return 0;
}

int func_51()//Position - 0x16B6
{
    return -1;
}

int func_52(int iParam0)//Position - 0x16BF
{
    if (iParam0 != func_51())
    {
        return Global_18DB1B[iParam0 /*614*/].f_B;
    }
    return func_51();
}

struct<13> func_53(int iParam0)//Position - 0x16E2
{
    struct<13> Var0;
    
    unk_0x229B5E28267D1B1F(iParam0, &Var0, 13);
    return Var0;
}

int func_54(int iParam0, int iParam1)//Position - 0x16F9
{
    if (unk_0xFF6895C150414C31())
    {
        Global_264397 = { func_53(iParam0) };
        Global_2643A4 = { func_53(iParam1) };
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

Vector3 func_55(vector3 vParam0, float fParam1, struct<2> Param2, float fParam3)//Position - 0x1766
{
    vector3 vVar0;
    float fVar1;
    float fVar2;
    float fVar3;
    vector3 vVar4;
    
    fVar1 = fParam1;
    fVar2 = SYSTEM::COS(fVar1);
    fVar3 = SYSTEM::SIN(fVar1);
    vVar0.x = ((Param2 * fVar2) + (Param2.f_1 * fVar3));
    vVar0.y = ((Param2.f_1 * fVar2) - (Param2 * fVar3));
    vVar4 = { vParam0 + vVar0 };
    return vVar4;
}

Vector3 func_56(int iParam0)//Position - 0x17B3
{
    return unk_0xACE5E491FC1B0D37(unk_0x23625FE58BACEBFD(iParam0), 0);
}

int func_57(vector3 vParam0)//Position - 0x17C6
{
    if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
    {
        return 1;
    }
    return 0;
}

void func_58(int iParam0)//Position - 0x17F0
{
    Local_227.f_1.f_2 = iParam0;
}

void func_59()//Position - 0x1800
{
    func_89();
    func_60();
}

void func_60()//Position - 0x1810
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    switch (Local_227.f_1.f_2)
    {
        case 0:
            func_88();
            break;
        
        case 1:
            func_88();
            break;
        
        case 2:
            if (func_12(Local_227.f_1))
            {
                iVar1 = unk_0x40237B62400B4BCC(Local_227.f_1);
                if (!unk_0x39A01A052D9B5FF0(iLocal_47))
                {
                    iLocal_47 = unk_0xADA89D4F1A58FCBA(iVar1);
                    unk_0xD1773DD05FE2AB54(iLocal_47, 422);
                    unk_0x73DF1B751952DA65(iLocal_47, 0);
                    unk_0x058B6969CEED705F(iLocal_47, "MPCT_MERRY3");
                    func_86(&iLocal_47, 1);
                }
                if (func_85(Local_227.f_1))
                {
                    if (unk_0xF42AC9E0924DC59B(Local_227.f_1))
                    {
                        if (func_84())
                        {
                            if (!unk_0x41827F438F0E837E(iVar1))
                            {
                                unk_0xE73C7A2D3434D960(iVar1, 1, 0);
                            }
                        }
                        else if (unk_0x41827F438F0E837E(iVar1))
                        {
                            unk_0xE73C7A2D3434D960(iVar1, 0, 0);
                        }
                    }
                }
                if (unk_0x9C625F4590C97F13(Local_227.f_1.f_3[0 /*2*/]))
                {
                    iVar0 = unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[0 /*2*/]);
                    if (!unk_0x2BF5E63466422C38(iVar0))
                    {
                        iVar2 = unk_0xAE30876E35B7D0C2(iVar1);
                        if (iVar2 != 23 || fLocal_61[0] != fLocal_58)
                        {
                            if (func_85(Local_227.f_1))
                            {
                                if (unk_0xF42AC9E0924DC59B(Local_227.f_1.f_3[0 /*2*/]))
                                {
                                    fLocal_61[0] = fLocal_58;
                                    unk_0xCC94EE23853F38E4(iVar0, 1);
                                    func_26(iVar0, 0, 0, 0);
                                    unk_0x3231D7D927FBC2FC(iVar1);
                                    unk_0xB90231068DCFFBA1(iVar1, true, 1, 0);
                                    if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
                                    {
                                        if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
                                        {
                                            unk_0x2042881C1FE6D05A(iVar0, iVar1, 0, unk_0x0FA8183DAD2B3203(), 0f, 0f, 0f, 23, 20f, 40f, -1f, SYSTEM::CEIL(fLocal_61[0]), 10, -1082130432, 0);
                                        }
                                    }
                                }
                            }
                        }
                        if (!iLocal_50)
                        {
                            if (SYSTEM::VDIST(func_56(unk_0x7C7787D2D7139A85()), unk_0xACE5E491FC1B0D37(unk_0x40237B62400B4BCC(Local_227.f_1), 1)) <= 50f)
                            {
                                func_62(&uLocal_62, "CT_AUD", "MPCT_HBarr", 12, 0, 0, 0);
                                iLocal_50 = 1;
                            }
                        }
                    }
                }
                if (unk_0x9C625F4590C97F13(Local_227.f_1.f_3[1 /*2*/]))
                {
                    iVar0 = unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[1 /*2*/]);
                    if (!unk_0x2BF5E63466422C38(iVar0))
                    {
                        if (!unk_0x98E76A2D5D526CF9(iVar0, 0) || fLocal_61[1] != fLocal_58)
                        {
                            if (func_85(Local_227.f_1))
                            {
                                if (unk_0xF42AC9E0924DC59B(Local_227.f_1.f_3[1 /*2*/]))
                                {
                                    fLocal_61[1] = fLocal_58;
                                    unk_0xCC94EE23853F38E4(iVar0, 0);
                                    func_26(iVar0, 1, 0, 0);
                                }
                            }
                        }
                    }
                }
                if (unk_0x9C625F4590C97F13(Local_227.f_1.f_3[2 /*2*/]))
                {
                    iVar0 = unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[2 /*2*/]);
                    if (!unk_0x2BF5E63466422C38(iVar0))
                    {
                        if (!unk_0x98E76A2D5D526CF9(iVar0, 0) || fLocal_61[2] != fLocal_58)
                        {
                            if (func_85(Local_227.f_1))
                            {
                                if (unk_0xF42AC9E0924DC59B(Local_227.f_1.f_3[2 /*2*/]))
                                {
                                    fLocal_61[2] = fLocal_58;
                                    unk_0xCC94EE23853F38E4(iVar0, 0);
                                    func_26(iVar0, 2, 0, 0);
                                }
                            }
                        }
                    }
                }
            }
            if (!func_12(Local_227.f_1) || func_11(Local_227.f_1.f_3[0 /*2*/]))
            {
                func_61();
            }
            break;
        
        case 3:
            func_88();
            if (!func_6(&(Local_227.f_1.f_13)))
            {
                func_5(&(Local_227.f_1.f_13), 0, 0);
            }
            if (func_12(Local_227.f_1))
            {
                iVar1 = unk_0x40237B62400B4BCC(Local_227.f_1);
                if (!func_11(Local_227.f_1.f_3[0 /*2*/]))
                {
                    iVar0 = unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[0 /*2*/]);
                    if (iLocal_53 == 0)
                    {
                        if (func_85(Local_227.f_1))
                        {
                            if (unk_0xF42AC9E0924DC59B(Local_227.f_1.f_3[0 /*2*/]))
                            {
                                unk_0xCC94EE23853F38E4(iVar0, 0);
                                unk_0xC6612209077465DD(iVar0);
                                unk_0xDB889DCC8B0139E6(iVar0, Global_180855);
                                if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
                                {
                                    if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
                                    {
                                        unk_0x2042881C1FE6D05A(iVar0, iVar1, 0, unk_0x0FA8183DAD2B3203(), 0f, 0f, 0f, 8, 20f, 500f, -1f, 40, 10, -1082130432, 0);
                                        unk_0x7D81B41B134BD6F2(iVar0, 1);
                                        iLocal_53 = 1;
                                    }
                                }
                            }
                        }
                    }
                }
                if (!func_11(Local_227.f_1.f_3[1 /*2*/]))
                {
                    if (iLocal_54 == 0)
                    {
                        iVar0 = unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[1 /*2*/]);
                        if (func_85(Local_227.f_1))
                        {
                            if (unk_0xF42AC9E0924DC59B(Local_227.f_1.f_3[1 /*2*/]))
                            {
                                unk_0xC6612209077465DD(iVar0);
                                unk_0xCC94EE23853F38E4(iVar0, 1);
                                unk_0x7D81B41B134BD6F2(iVar0, 1);
                                iLocal_54 = 1;
                            }
                        }
                    }
                    if (!iLocal_51)
                    {
                        if (SYSTEM::VDIST(func_56(unk_0x7C7787D2D7139A85()), unk_0xACE5E491FC1B0D37(unk_0x40237B62400B4BCC(Local_227.f_1), 1)) <= 50f)
                        {
                            func_62(&uLocal_62, "CT_AUD", "MPCT_HBleav", 12, 0, 0, 0);
                            iLocal_51 = 1;
                        }
                    }
                }
                if (!func_11(Local_227.f_1.f_3[2 /*2*/]))
                {
                    if (iLocal_55 == 0)
                    {
                        iVar0 = unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[2 /*2*/]);
                        if (func_85(Local_227.f_1))
                        {
                            if (unk_0xF42AC9E0924DC59B(Local_227.f_1.f_3[2 /*2*/]))
                            {
                                unk_0xC6612209077465DD(iVar0);
                                unk_0xCC94EE23853F38E4(iVar0, 1);
                                unk_0x7D81B41B134BD6F2(iVar0, 1);
                                iLocal_55 = 1;
                            }
                        }
                    }
                }
            }
            if (!func_12(Local_227.f_1) || func_11(Local_227.f_1.f_3[0 /*2*/]))
            {
                func_61();
            }
            break;
        
        case 5:
            func_88();
            break;
    }
}

void func_61()//Position - 0x1CF1
{
    int iVar0;
    
    if (!func_11(Local_227.f_1.f_3[0 /*2*/]))
    {
        if (func_85(Local_227.f_1.f_3[0 /*2*/]))
        {
            if (unk_0xF42AC9E0924DC59B(Local_227.f_1.f_3[0 /*2*/]))
            {
                iVar0 = unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[0 /*2*/]);
                unk_0x0BBBAC4546BFE280(iVar0, 0, 0);
            }
        }
    }
    if (!func_11(Local_227.f_1.f_3[1 /*2*/]))
    {
        if (func_85(Local_227.f_1.f_3[1 /*2*/]))
        {
            if (unk_0xF42AC9E0924DC59B(Local_227.f_1.f_3[1 /*2*/]))
            {
                iVar0 = unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[1 /*2*/]);
                unk_0x0BBBAC4546BFE280(iVar0, 0, 0);
            }
        }
    }
    if (!func_11(Local_227.f_1.f_3[2 /*2*/]))
    {
        if (func_85(Local_227.f_1.f_3[2 /*2*/]))
        {
            if (unk_0xF42AC9E0924DC59B(Local_227.f_1.f_3[2 /*2*/]))
            {
                iVar0 = unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[2 /*2*/]);
                unk_0x0BBBAC4546BFE280(iVar0, 0, 0);
            }
        }
    }
}

int func_62(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1DD1
{
    func_83(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
    return func_63(sParam2, iParam3, 0);
}

int func_63(char* sParam0, int iParam1, bool bParam2)//Position - 0x1E1F
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
                    func_82();
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
        if (func_81(8, -1))
        {
            return 0;
        }
        Global_5191 = { Global_518B };
        func_80();
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
                func_72();
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
                if (func_71())
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
            if (func_70())
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
            func_69();
            Global_514F = bParam2;
        }
        Global_5147 = iParam1;
        StringCopy(&Global_4FC8, sParam0, 24);
        Global_4CD7 = 0;
        func_68();
        func_64();
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
        func_82();
    }
    return 0;
}

void func_64()//Position - 0x20EF
{
    if (!func_65())
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

int func_65()//Position - 0x2126
{
    if (!Global_40001.f_6D6D)
    {
        return 0;
    }
    if (!Global_12B21)
    {
        return 0;
    }
    if (unk_0x7C7787D2D7139A85() == func_51())
    {
        return 0;
    }
    if (func_66(unk_0x7C7787D2D7139A85()))
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

bool func_66(int iParam0)//Position - 0x218C
{
    return func_67(iParam0, 20);
}

bool func_67(int iParam0, int iParam1)//Position - 0x219C
{
    return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_B.f_4, iParam1);
}

void func_68()//Position - 0x21B7
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

void func_69()//Position - 0x21E8
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

int func_70()//Position - 0x227D
{
    if (Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 0)
    {
        return 1;
    }
    return 0;
}

int func_71()//Position - 0x22A4
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

void func_72()//Position - 0x233D
{
    if (func_79(14))
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
        Global_4C1E = func_73();
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

var func_73()//Position - 0x23DF
{
    func_74();
    return Global_1B3C8.f_936.f_21B.f_10E1;
}

void func_74()//Position - 0x23F8
{
    int iVar0;
    
    if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
    {
        if (func_77(Global_1B3C8.f_936.f_21B.f_10E1) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
        {
            iVar0 = func_76(unk_0x0FA8183DAD2B3203());
            if (func_75(iVar0) && (!func_79(14) || Global_1AFAF))
            {
                if (Global_1B3C8.f_936.f_21B.f_10E1 != iVar0 && func_75(Global_1B3C8.f_936.f_21B.f_10E1))
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

bool func_75(int iParam0)//Position - 0x24F5
{
    return iParam0 < 3;
}

int func_76(int iParam0)//Position - 0x2501
{
    int iVar0;
    int iVar1;
    
    if (unk_0xD4B321D9096B01FC(iParam0))
    {
        iVar1 = unk_0x7F375072508F738F(iParam0);
        iVar0 = 0;
        while (iVar0 <= 2)
        {
            if (func_77(iVar0) == iVar1)
            {
                return iVar0;
            }
            iVar0++;
        }
    }
    return 145;
}

int func_77(int iParam0)//Position - 0x253E
{
    if (func_75(iParam0))
    {
        return func_78(iParam0);
    }
    else if (iParam0 != 145)
    {
    }
    return 0;
}

var func_78(int iParam0)//Position - 0x2563
{
    return Global_706[iParam0 /*29*/];
}

bool func_79(int iParam0)//Position - 0x2572
{
    return Global_A1B4 == iParam0;
}

void func_80()//Position - 0x2580
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

bool func_81(int iParam0, int iParam1)//Position - 0x25D7
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

void func_82()//Position - 0x2612
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

void func_83(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x2669
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

int func_84()//Position - 0x26BF
{
    if (unk_0xA63165E74E9A042B() >= 22)
    {
        return 1;
    }
    if (unk_0xA63165E74E9A042B() <= 6 && unk_0xA63165E74E9A042B() >= 0)
    {
        return 1;
    }
    return 0;
}

int func_85(int iParam0)//Position - 0x26ED
{
    if (unk_0xDD00A9922FD2D5D5(iParam0))
    {
        return 1;
    }
    if (unk_0x722688699565161D())
    {
        unk_0x4DB32D0662E0696B(iParam0);
    }
    return 0;
}

void func_86(int iParam0, int iParam1)//Position - 0x2711
{
    int iVar0;
    
    if (unk_0x39A01A052D9B5FF0(*iParam0))
    {
        iVar0 = func_87(iParam1);
        unk_0x088577CF98F96D05(*iParam0, iVar0);
    }
}

int func_87(int iParam0)//Position - 0x2737
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    
    switch (iParam0)
    {
        case 1:
            return 4;
        
        case 0:
            return 4;
        
        case 6:
            return 59;
        
        case 18:
            return 2;
        
        case 13:
            return 5;
        
        case 116:
            return 38;
        
        case 28:
            return 6;
        
        case 29:
            return 7;
        
        case 30:
            return 8;
        
        case 31:
            return 9;
        
        case 32:
            return 10;
        
        case 33:
            return 11;
        
        case 34:
            return 12;
        
        case 35:
            return 13;
        
        case 36:
            return 14;
        
        case 37:
            return 15;
        
        case 38:
            return 16;
        
        case 39:
            return 17;
        
        case 40:
            return 18;
        
        case 41:
            return 19;
        
        case 42:
            return 20;
        
        case 43:
            return 21;
        
        case 44:
            return 22;
        
        case 45:
            return 23;
        
        case 46:
            return 24;
        
        case 47:
            return 25;
        
        case 48:
            return 26;
        
        case 49:
            return 27;
        
        case 50:
            return 28;
        
        case 51:
            return 29;
        
        case 52:
            return 30;
        
        case 53:
            return 31;
        
        case 54:
            return 32;
        
        case 55:
            return 33;
        
        case 56:
            return 34;
        
        case 57:
            return 35;
        
        case 58:
            return 36;
        
        case 59:
            return 37;
        
        case 9:
            return 57;
        
        case 10:
            return 53;
        
        case 118:
            return 57;
        
        case 14:
            return 56;
        
        case 3:
            return 55;
        
        case 21:
            return 50;
        
        case 15:
            return 51;
        
        case 20:
            return 52;
        
        case 11:
            return 54;
        
        case 23:
            return 58;
        
        case 12:
            return 60;
        
        case 24:
            return 61;
        
        case 4:
            return 62;
        
        default:
    }
    unk_0xE0A2E1F5E75D9DF8(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
    return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
    return 0;
}

void func_88()//Position - 0x299F
{
    if (unk_0x39A01A052D9B5FF0(iLocal_47))
    {
        unk_0xAA2276003B2ADF1B(&iLocal_47);
    }
}

void func_89()//Position - 0x29B6
{
    if (!iLocal_49)
    {
        if (!func_11(Local_227.f_1.f_3[0 /*2*/]))
        {
            func_90(&uLocal_62, 3, unk_0x70D3AC024E0A9837(Local_227.f_1.f_3[0 /*2*/]), "FM_HBACK", 1, 1);
            iLocal_49 = 1;
        }
    }
}

void func_90(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x29F1
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

int func_91()//Position - 0x2A8C
{
    return Local_227;
}

int func_92(int iParam0)//Position - 0x2A96
{
    return iLocal_248[iParam0];
}

void func_93()//Position - 0x2AA4
{
    bool bVar0;
    vector3 vVar1;
    
    if (fLocal_58 == -1f)
    {
        bVar0 = true;
    }
    else if (!func_6(&uLocal_59))
    {
        func_5(&uLocal_59, 0, 0);
    }
    else if (func_4(&uLocal_59, 5000, 0))
    {
        bVar0 = true;
    }
    if (bVar0)
    {
        vVar1 = { func_56(unk_0x7C7787D2D7139A85()) };
        fLocal_58 = unk_0xDF4AC4F7C1AE2598(vVar1.x, vVar1.y);
        if (fLocal_58 < 85f)
        {
            fLocal_58 = 85f;
        }
        func_94(&uLocal_59);
    }
}

void func_94(var uParam0)//Position - 0x2B13
{
    uParam0->f_1 = 0;
}

void func_95()//Position - 0x2B20
{
}

void func_96()//Position - 0x2B28
{
    var uVar0;
    var uVar1;
    
    Global_2531AD.f_F93 = uVar0;
    Global_2531AD.f_F94[0] = uVar1;
    Global_2531AD.f_F94[1] = uVar1;
    Global_2531AD.f_F94[2] = uVar1;
    Global_2531AD.f_F98 = 0f;
    Global_2531AD.f_F99 = 0;
    func_98(func_99(1, 1), 10, func_51());
    func_97();
}

void func_97()//Position - 0x2B81
{
    unk_0x9C9E32388A7886A2();
}

void func_98(int iParam0, int iParam1, var uParam2)//Position - 0x2B8D
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

int func_99(int iParam0, bool bParam1)//Position - 0x2BC5
{
    var uVar0;
    int iVar1;
    int iVar2;
    
    iVar1 = 0;
    while (iVar1 < 32)
    {
        iVar2 = unk_0x0C98179F08C6DA4F(iVar1);
        if (func_47(iVar2, 0, 0))
        {
            if (iVar2 != unk_0x7C7787D2D7139A85() || iParam0)
            {
                if (bParam1)
                {
                    unk_0xA1E7A40E1F56E511(&uVar0, iVar1);
                }
                else if (!func_42(iVar2, 0))
                {
                    unk_0xA1E7A40E1F56E511(&uVar0, iVar1);
                }
            }
        }
        iVar1++;
    }
    return uVar0;
}

int func_100()//Position - 0x2C2A
{
    var uVar0;
    
    func_108(&uVar0);
    if (Global_140852 == 0)
    {
        if (!unk_0x393E9918BC37548A())
        {
            return 1;
        }
    }
    if (func_107())
    {
        return 1;
    }
    if (Global_258E39)
    {
        return 1;
    }
    if (func_106())
    {
        return 1;
    }
    if (func_105(159))
    {
        if (!func_104())
        {
            return 1;
        }
    }
    if (func_105(157))
    {
        return 1;
    }
    if (!unk_0x2A983C9CF4EE0D5E())
    {
        return 1;
    }
    if (func_101() != 0)
    {
        if (unk_0x222F76006659B0EB(func_101()) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int func_101()//Position - 0x2CB4
{
    switch (func_103())
    {
        case 0:
            return func_102();
            break;
        
        case 2:
            return joaat("creator");
            break;
    }
    return 0;
}

int func_102()//Position - 0x2CE7
{
    switch (Global_258E9F)
    {
        case 0:
            return joaat("freemode");
        
        default:
    }
    return joaat("freemode");
}

int func_103()//Position - 0x2D0B
{
    return Global_7810;
}

bool func_104()//Position - 0x2D16
{
    return Global_255E41.f_256;
}

int func_105(int iParam0)//Position - 0x2D25
{
    if (unk_0xD076BFB919B20653(1, iParam0))
    {
        return 1;
    }
    return 0;
}

bool func_106()//Position - 0x2D3C
{
    return Global_258577;
}

bool func_107()//Position - 0x2D48
{
    return Global_255E41.f_251;
}

void func_108(var uParam0)//Position - 0x2D57
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
                    func_109(iVar0);
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

void func_109(int iParam0)//Position - 0x2DCA
{
    vector3 vVar0;
    int iVar1;
    int iVar2;
    bool bVar3;
    
    if (unk_0x3C1EC42A2CC175C5(1, iParam0, &vVar0, 3))
    {
        if (func_47(vVar0.y, 1, 1))
        {
            iVar1 = unk_0x23625FE58BACEBFD(vVar0.y);
            if (unk_0xD4B321D9096B01FC(iVar1))
            {
                if (unk_0x5294582CE404D3F4(iVar1, 0))
                {
                    iVar2 = unk_0x4D57D3E5ECE15A41(iVar1, 0);
                    if (unk_0x3D65AB2C3D476E32(iVar2, vVar0.z) && unk_0xF77CF4BC35906B30())
                    {
                        if (func_110(iVar2, &bVar3))
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

int func_110(int iParam0, var uParam1)//Position - 0x2E4B
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

void func_111()//Position - 0x2EAA
{
    SYSTEM::WAIT(0);
}

void func_112(struct<21> Param0)//Position - 0x2EB7
{
    func_118(func_119(Param0), Param0);
    unk_0x98B3F83A2664256A(3);
    unk_0xA019A9258930EC41(1);
    func_116(0, -1, 0);
    unk_0xCCD47D736BFD5DE3(&Local_227, 22);
    unk_0xFF584A1B7842F821(&iLocal_248, 3);
    unk_0x50E03C7D74E352C4(0);
    if (!func_115())
    {
        func_96();
    }
    if (unk_0xEDC68E498B715C56())
    {
        bLocal_48 = true;
    }
    func_113(62, 1);
    iLocal_248[unk_0x2E40EEA43EF34BD6()] = 0;
}

void func_113(int iParam0, bool bParam1)//Position - 0x2F1A
{
    int iVar0;
    
    iVar0 = 0;
    if (bParam1)
    {
        iVar0 = -1;
    }
    switch (iParam0)
    {
        case 59:
            Global_200000[func_114() /*10828*/].f_1818.f_13 = iVar0;
            break;
        
        case 19:
            Global_200000[func_114() /*10828*/].f_1818.f_12 = iVar0;
            break;
        
        case 74:
            Global_200000[func_114() /*10828*/].f_1818.f_C = iVar0;
            break;
        
        case 29:
            Global_200000[func_114() /*10828*/].f_1818.f_E = iVar0;
            break;
        
        case 8:
            Global_200000[func_114() /*10828*/].f_1818.f_F = iVar0;
            break;
        
        case 31:
            Global_200000[func_114() /*10828*/].f_1818.f_10 = iVar0;
            break;
        
        case 3:
            Global_200000[func_114() /*10828*/].f_1818.f_14 = iVar0;
            break;
        
        case 6:
            Global_200000[func_114() /*10828*/].f_1818.f_11 = iVar0;
            break;
        
        case 103:
        case 104:
        case 98:
        case 105:
            Global_200000[func_114() /*10828*/].f_1818.f_17 = iVar0;
            break;
        
        case 76:
            Global_200000[func_114() /*10828*/].f_1818.f_18 = iVar0;
            break;
        
        case 93:
            Global_200000[func_114() /*10828*/].f_1818.f_19 = iVar0;
            break;
        
        case 61:
        case 62:
        case 63:
        case 64:
        case 77:
        case 81:
            Global_200000[func_114() /*10828*/].f_1818.f_1A = iVar0;
            break;
        
        case 65:
        case 75:
        case 95:
            Global_200000[func_114() /*10828*/].f_1818.f_1B = iVar0;
            break;
            break;
        
        case 97:
            Global_200000[func_114() /*10828*/].f_1818.f_1D = iVar0;
            break;
        
        case 88:
            Global_200000[func_114() /*10828*/].f_1818.f_1C = iVar0;
            break;
        
        case 100:
            Global_200000[func_114() /*10828*/].f_1818.f_1F = iVar0;
            break;
        
        case 106:
            Global_200000[func_114() /*10828*/].f_1818.f_20 = iVar0;
            break;
        
        case 99:
            Global_200000[func_114() /*10828*/].f_1818.f_1E = iVar0;
            break;
    }
}

int func_114()//Position - 0x3159
{
    int iVar0;
    
    iVar0 = 0;
    return iVar0;
}

int func_115()//Position - 0x3166
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
        if (func_107())
        {
            return 0;
        }
        if (func_105(157))
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

int func_116(int iParam0, int iParam1, bool bParam2)//Position - 0x31BF
{
    int iVar0;
    
    iVar0 = unk_0x306B26A377F9A5BE();
    while (iVar0 != 2)
    {
        if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
        {
            if (!bParam2)
            {
                func_97();
            }
            else
            {
                return 0;
            }
        }
        if (!func_117())
        {
            if (iParam0 == 0)
            {
                if (!unk_0x393E9918BC37548A())
                {
                    if (!bParam2)
                    {
                        func_97();
                    }
                    else
                    {
                        return 0;
                    }
                }
                if (func_107())
                {
                    if (!bParam2)
                    {
                        func_97();
                    }
                    else
                    {
                        return 0;
                    }
                }
                if (func_105(157))
                {
                    if (!bParam2)
                    {
                        func_97();
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
                    func_97();
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
                func_97();
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
            func_97();
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

bool func_117()//Position - 0x32D4
{
    return Global_140852;
}

void func_118(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x32E0
{
    if (!unk_0x393E9918BC37548A())
    {
        func_97();
    }
    unk_0x4CF6FBF2580A447D(iParam0, 0, Param1.f_10);
}

int func_119(int iParam0)//Position - 0x32FF
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

