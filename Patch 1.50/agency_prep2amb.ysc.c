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
    int iLocal_38 = 0;
    int iLocal_39 = 0;
    int iLocal_40 = 0;
    int iLocal_41 = 0;
    int iLocal_42 = 0;
    int iLocal_43 = 0;
    struct<9> Local_44 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
    char* sLocal_45[46] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
    int iLocal_46 = 0;
    var uLocal_47[2] = { 0, 0 };
    float fLocal_48 = 0f;
    int iLocal_49 = 0;
    vector3 vLocal_50 = { 0f, 0f, 0f };
    int iLocal_51 = 0;
    vector3 vLocal_52 = { 0f, 0f, 0f };
    float fLocal_53 = 0f;
    struct<67> Local_54 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
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
    int iLocal_66[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int iLocal_67 = 0;
    struct<261> Local_68[4];
    char* sLocal_69[13] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
    char* sLocal_70 = NULL;
    int iLocal_71 = 0;
    int iLocal_72 = 0;
    int iLocal_73 = 0;
    int iLocal_74 = 0;
    int iLocal_75 = 0;
    int iLocal_76 = 0;
    int iLocal_77 = 0;
    int iLocal_78 = 0;
    char* sLocal_79 = NULL;
    var uLocal_80 = 16;
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
    var uLocal_237 = 0;
    var uLocal_238 = 0;
    var uLocal_239 = 0;
    var uLocal_240 = 0;
    var uLocal_241 = 0;
    var uLocal_242 = 0;
    var uLocal_243 = 0;
    var uLocal_244 = 0;
    int iLocal_245 = 0;
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
    fLocal_21 = 0f;
    fLocal_25 = -0.0375f;
    fLocal_26 = 0.17f;
    fLocal_30 = 80f;
    fLocal_31 = 140f;
    fLocal_32 = 180f;
    iLocal_35 = 3;
    iLocal_43 = 145;
    iLocal_46 = -1;
    fLocal_48 = 0f;
    vLocal_50 = { 0f, 0f, 0f };
    vLocal_52 = { 0f, 0f, 0f };
    fLocal_53 = 0f;
    iLocal_67 = 1;
    sLocal_70 = "";
    iLocal_73 = -1;
    iLocal_76 = -1;
    iLocal_78 = -1;
    iLocal_245 = -1;
    if (!func_279(32))
    {
        iLocal_37 = Global_1B3C8.f_273C.f_80;
        if (iLocal_37 == 2)
        {
            unk_0xA1E7A40E1F56E511(&iLocal_49, 10);
            vLocal_52 = { func_278(25) };
            fLocal_53 = func_277(25);
            if (func_276(&Local_54, 25))
            {
                if (!unk_0xA2BC31158C8CEFD2(iLocal_49, 14))
                {
                    unk_0xA1E7A40E1F56E511(&iLocal_49, 14);
                }
            }
        }
    }
    else
    {
        func_274("AM_H_PREP8", 2, 0, -1, 10000, 3, 0, 0, 0);
        Global_1B3C8.f_273C.f_80 = iLocal_37;
    }
    if (unk_0xD4BE58A7E3E102AC(82))
    {
        if (unk_0x8FA9CC51D31182EC() == 2)
        {
            func_265(0);
            func_263(32, 1);
        }
        else
        {
            func_263(32, 0);
        }
    }
    func_258(1);
    while (true)
    {
        if (func_257(69))
        {
            func_253("AM_H_PREP8", 1);
            func_263(32, 0);
        }
        if (!func_251(1))
        {
            if (func_250(unk_0x0FA8183DAD2B3203()))
            {
                func_243();
                func_236();
                func_235();
                func_224();
                switch (iLocal_37)
                {
                    case 0:
                        func_139();
                        break;
                    
                    case 2:
                        func_138();
                        break;
                    
                    case 3:
                        func_129();
                        break;
                    
                    case 4:
                        func_16(12);
                        break;
                    
                    case 5:
                        break;
                    
                    default:
                        break;
                }
                func_7();
            }
            else
            {
                func_1(46, 1);
            }
        }
        SYSTEM::WAIT(0);
    }
}

void func_1(int iParam0, bool bParam1)//Position - 0x1D4
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 <= (46 - 1))
    {
        if (iParam0 != iVar0 && iParam0 != 46)
        {
            func_4(iVar0);
        }
        iVar0++;
    }
    if (bParam1)
    {
        if (iParam0 != 46)
        {
            if ((!func_2(func_3(iParam0)) && !Global_1AE78) && !unk_0xA2BC31158C8CEFD2(iLocal_49, 15))
            {
                unk_0xA1E7A40E1F56E511(&iLocal_49, 15);
                unk_0x0D23E3918F7AF11B(1);
            }
        }
        else if ((unk_0x0945988C02AF3025() && !Global_1AE78) && !unk_0xA2BC31158C8CEFD2(iLocal_49, 15))
        {
            unk_0xA1E7A40E1F56E511(&iLocal_49, 15);
            unk_0x0D23E3918F7AF11B(1);
        }
    }
}

int func_2(char* sParam0)//Position - 0x277
{
    unk_0x1EF54B101C71E009(sParam0);
    return unk_0xFA637652FFB4E2E5(0);
}

var func_3(int iParam0)//Position - 0x28A
{
    return sLocal_45[iParam0];
}

void func_4(int iParam0)//Position - 0x298
{
    int iVar0;
    
    iVar0 = func_6(iParam0);
    unk_0x3B76114EC84D5812(&(uLocal_47[func_5(iParam0)]), iVar0);
}

int func_5(int iParam0)//Position - 0x2B8
{
    int iVar0;
    
    if (iParam0 < 32)
    {
        iVar0 = 0;
    }
    else
    {
        iVar0 = 1;
    }
    return iVar0;
}

int func_6(int iParam0)//Position - 0x2D2
{
    if (iParam0 > 31)
    {
        return (iParam0 - 32);
    }
    return iParam0;
}

void func_7()//Position - 0x2EB
{
    if (((unk_0xA2BC31158C8CEFD2(iLocal_49, 0) && !unk_0xA2BC31158C8CEFD2(iLocal_49, 1)) && !unk_0xA2BC31158C8CEFD2(iLocal_49, 14)) && func_13())
    {
        if (func_12(0, 172, 0) || func_12(0, 173, 0))
        {
            iLocal_78 = unk_0x9B35D07DCD0F0B43();
        }
        if (iLocal_78 != -1)
        {
            if ((unk_0x9B35D07DCD0F0B43() - iLocal_78) < 200)
            {
                iLocal_43 = func_8();
            }
            else
            {
                iLocal_78 = -1;
            }
        }
    }
    else
    {
        iLocal_43 = 145;
        iLocal_78 = -1;
    }
}

int func_8()//Position - 0x36D
{
    var uVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    
    iVar2 = 0;
    iVar3 = 145;
    if (Global_12B21)
    {
        iVar3 = 145;
    }
    else if (unk_0x08EA887200715AD9(Global_4C0B) == 1)
    {
        if (func_11())
        {
            if (func_10())
            {
                iVar6 = 0;
                unk_0xF1BC72CEC2746995(Global_4C0B, "GET_CURRENT_SELECTION");
                uVar0 = unk_0x3EC8759D3C8910D6();
                iVar4 = unk_0x9B35D07DCD0F0B43();
                while ((!unk_0x308962E80254EB41(uVar0) && iVar6 == 0) && unk_0x08EA887200715AD9(Global_4C0B) == 1)
                {
                    SYSTEM::WAIT(0);
                    iVar5 = unk_0x9B35D07DCD0F0B43();
                    if ((iVar5 - iVar4) > 1500)
                    {
                        iVar6 = 1;
                    }
                }
                iVar1 = unk_0x3A48AECE3E8E65D6(uVar0);
                if (iVar1 > func_9() || iVar1 < 0)
                {
                    iVar1 = func_9();
                }
                iVar2 = Global_4C24[iVar1];
                iVar3 = iVar2;
                if (unk_0x08EA887200715AD9(Global_4C0B) == 0)
                {
                    iVar3 = 145;
                }
                if (iVar6 == 1)
                {
                    iVar3 = 145;
                }
            }
            else
            {
                iVar3 = 145;
            }
        }
        else
        {
            iVar3 = 145;
        }
    }
    else
    {
        iVar3 = 145;
    }
    return iVar3;
}

int func_9()//Position - 0x459
{
    if (Global_7810 == 0 || Global_7810 == 2)
    {
        return 167;
    }
    return 161;
}

int func_10()//Position - 0x47B
{
    if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) > 0)
    {
        return 1;
    }
    return 0;
}

int func_11()//Position - 0x495
{
    if (unk_0x222F76006659B0EB(joaat("appcontacts")) > 0)
    {
        return 1;
    }
    return 0;
}

int func_12(int iParam0, int iParam1, int iParam2)//Position - 0x4AF
{
    if (unk_0x26BB91778477F482(iParam0, iParam1) || (iParam2 == 1 && unk_0x80E2BA2BD5AB1A3F(iParam0, iParam1)))
    {
        if (unk_0xE434AB6E3DE89861())
        {
            if (unk_0x2F972EA053458B78() == 0 || (unk_0x4ABA84DE907E0474() && unk_0x59415A8719336539(2)))
            {
                return 0;
            }
        }
        if (unk_0xCD97B9861557C025() || unk_0x8E01A12946ECF396())
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int func_13()//Position - 0x521
{
    if (func_15(0) && func_14())
    {
        return 1;
    }
    return 0;
}

int func_14()//Position - 0x53F
{
    if (unk_0x222F76006659B0EB(joaat("appcontacts")) > 0)
    {
        return 1;
    }
    return 0;
}

int func_15(int iParam0)//Position - 0x55C
{
    if (iParam0 == 1)
    {
        if (Global_4C1E.f_1 > 3)
        {
            if (unk_0xA2BC31158C8CEFD2(Global_1CBC, 14))
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
            return 0;
        }
    }
    if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) > 0)
    {
        return 1;
    }
    if (Global_4C1E.f_1 > 3)
    {
        return 1;
    }
    return 0;
}

void func_16(int iParam0)//Position - 0x5B6
{
    func_109();
    if (iLocal_40 == 0)
    {
        switch (iLocal_41)
        {
            case 0:
                func_108(1);
                iLocal_74 = unk_0x1FAFE9BB9D8960C1("MP_BIG_MESSAGE_FREEMODE");
                func_1(46, 1);
                iLocal_75 = unk_0x9B35D07DCD0F0B43() + 3000;
                if (!unk_0xA2BC31158C8CEFD2(iLocal_49, 10))
                {
                    func_92();
                }
                func_91(iParam0, 1);
                iLocal_41 = 1;
                break;
            
            case 1:
                if (unk_0x9B35D07DCD0F0B43() > iLocal_75)
                {
                    if (unk_0x08EA887200715AD9(iLocal_74))
                    {
                        unk_0xF1BC72CEC2746995(iLocal_74, "SHOW_MISSION_PASSED_MESSAGE");
                        func_90("M_FB4P3_P");
                        func_90("M_FB4P3");
                        unk_0xD02F24F3E2DB263A(100);
                        unk_0x282C78036676E0C2(true);
                        unk_0xD02F24F3E2DB263A(0);
                        unk_0x282C78036676E0C2(true);
                        unk_0xAC7C2DE2DDC7AF03();
                        iLocal_75 = unk_0x9B35D07DCD0F0B43() + 10000;
                        func_88(0);
                        iLocal_41 = 2;
                    }
                }
                break;
            
            case 2:
                if (unk_0x08EA887200715AD9(iLocal_74) && unk_0x1833CACA51B09D34())
                {
                    if (unk_0x9B35D07DCD0F0B43() < iLocal_75)
                    {
                        unk_0x1C65AC18AFC2CA39(iLocal_74, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
                    }
                    else if (unk_0x9B35D07DCD0F0B43() < iLocal_75 + 100)
                    {
                        unk_0xF1BC72CEC2746995(iLocal_74, "TRANSITION_OUT");
                        unk_0xAC7C2DE2DDC7AF03();
                        iLocal_75 = (iLocal_75 - 100);
                    }
                    else if (unk_0x9B35D07DCD0F0B43() < iLocal_75 + 500)
                    {
                        unk_0x1C65AC18AFC2CA39(iLocal_74, 0.5f, 0.3f, 1f, 1f, 255, 255, 255, 255, 0);
                    }
                    else
                    {
                        iLocal_41 = 3;
                    }
                }
                break;
            
            case 3:
                if (unk_0x08EA887200715AD9(iLocal_74))
                {
                    unk_0x749CA887CB0AFEC9(&iLocal_74);
                }
                func_108(0);
                if (iLocal_42 == 2)
                {
                    func_87(108, 0);
                }
                if (func_85(iLocal_51))
                {
                    unk_0x54B5C3A13D3588F0(iLocal_51, 1);
                }
                func_81("M_FHPE", func_82());
                func_78(2, 0);
                break;
            }
    }
    func_17();
}

void func_17()//Position - 0x75B
{
    int iVar0;
    
    if (!unk_0xA2BC31158C8CEFD2(iLocal_49, 2))
    {
        if (!func_77(0f, 0f, 0f, vLocal_52, 0))
        {
            if (func_76(unk_0x0FA8183DAD2B3203(), vLocal_52, 100f) && !func_75())
            {
                if (func_85(func_74(25)))
                {
                    iLocal_51 = func_74(25);
                    unk_0xE5C667CF3B4642D2(iLocal_51, 1, 1);
                    if (func_85(iLocal_51))
                    {
                        if (!unk_0x145DAE1A4D0EA05D(iLocal_51, "GetawayVehicleValid"))
                        {
                            if (unk_0x7D209FC24D3550F6(iLocal_51, "GetawayVehicleValid", 1))
                            {
                            }
                        }
                        unk_0xA1E7A40E1F56E511(&iLocal_49, 0);
                        unk_0xA1E7A40E1F56E511(&iLocal_49, 2);
                    }
                }
                else if (!func_73(25, 0))
                {
                    if (!func_85(func_74(25)))
                    {
                        func_68(1);
                    }
                }
            }
            else if (func_85(iLocal_51))
            {
                if (!func_76(unk_0x0FA8183DAD2B3203(), vLocal_52, 100f))
                {
                }
            }
        }
    }
    else
    {
        if (!func_77(0f, 0f, 0f, vLocal_52, 0))
        {
            if (!func_76(unk_0x0FA8183DAD2B3203(), vLocal_52, 100f))
            {
                if (func_85(iLocal_51))
                {
                    if (!unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), iLocal_51, 0))
                    {
                        func_21(iLocal_51, vLocal_52, fLocal_53, 25, 1);
                        unk_0x3B76114EC84D5812(&iLocal_49, 2);
                        unk_0xB570C44B09DEF4A5(iLocal_51, 0);
                        func_20(&iLocal_51);
                        unk_0x3B76114EC84D5812(&iLocal_49, 0);
                    }
                    else
                    {
                        func_68(0);
                    }
                }
                else if (!func_73(25, 0))
                {
                    func_68(1);
                }
            }
            else if (!func_73(25, 0))
            {
                if (!func_85(iLocal_51))
                {
                    func_68(1);
                }
            }
            else if (!func_85(iLocal_51))
            {
                iVar0 = func_74(25);
                if (func_85(iVar0) && iVar0 != iLocal_51)
                {
                    iLocal_51 = iVar0;
                }
            }
        }
        func_18();
    }
}

void func_18()//Position - 0x8FE
{
    if (unk_0xA2BC31158C8CEFD2(iLocal_49, 2) && unk_0xA2BC31158C8CEFD2(iLocal_49, 0))
    {
        if (func_85(iLocal_51))
        {
            if (func_19(unk_0x0FA8183DAD2B3203(), iLocal_51, 10f, 1))
            {
                if (SYSTEM::VDIST2(unk_0xACE5E491FC1B0D37(iLocal_51, 1), vLocal_52) >= 100f)
                {
                    func_68(0);
                }
            }
        }
        else if (!func_73(25, 0))
        {
            if (func_85(iLocal_51))
            {
                unk_0xB570C44B09DEF4A5(iLocal_51, 0);
            }
            func_20(&iLocal_51);
            func_68(1);
        }
    }
}

bool func_19(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x97E
{
    return SYSTEM::VDIST2(unk_0xACE5E491FC1B0D37(iParam0, iParam3), unk_0xACE5E491FC1B0D37(iParam1, iParam3)) <= (fParam2 * fParam2);
}

void func_20(int iParam0)//Position - 0x9A0
{
    if (unk_0xD4B321D9096B01FC(*iParam0))
    {
        unk_0xF4B969E0807E76C7(*iParam0, 0);
        if (unk_0x00123AB82C5FAC28(*iParam0) && unk_0x532AFD85DAA91F63(*iParam0, 1))
        {
            unk_0xF25956700ADFD77F(iParam0);
        }
    }
}

void func_21(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x9D8
{
    struct<60> Var0;
    
    if (unk_0xD4B321D9096B01FC(iParam0) && unk_0xD960230552BC4165(iParam0, 0))
    {
        if (iParam3 != 24 && iParam3 != 25)
        {
            return;
        }
        if (iParam3 == 24)
        {
            if (unk_0xD4B321D9096B01FC(Global_12684.f_1E4[25]) && unk_0xD960230552BC4165(Global_12684.f_1E4[25], 0))
            {
                if (Global_12684.f_1E4[25] == iParam0)
                {
                    return;
                }
            }
        }
        if (!bParam4)
        {
            if ((unk_0x01412376937BFF5B(iParam0) || unk_0x7F375072508F738F(iParam0) == joaat("bus")) || unk_0x7F375072508F738F(iParam0) == joaat("tourbus"))
            {
                return;
            }
        }
        func_67(iParam3);
        Var0.f_9 = 49;
        Var0.f_3B = 2;
        func_62(iParam0, &Var0);
        if (func_77(vParam1, 0f, 0f, 0f, 0))
        {
            vParam1 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
            fParam2 = unk_0xD2809C7F7FD79247(iParam0);
        }
        if (iParam3 == 24)
        {
            if (unk_0xA8C462EF7D9DC564(unk_0x0037AFCBDC61F351()) != joaat("vehicle_gen_controller"))
            {
                Global_12A60 = unk_0xA8C462EF7D9DC564(unk_0x0037AFCBDC61F351());
            }
        }
        func_56(iParam3, &Var0, vParam1, fParam2, func_61(iParam0));
        func_22(iParam3, iParam0, 0);
    }
}

void func_22(int iParam0, int iParam1, int iParam2)//Position - 0xB01
{
    int iVar0;
    
    if (iParam0 == -1)
    {
        return;
    }
    if (!func_52(&(Global_12684.f_22B[0 /*21*/]), iParam0))
    {
        return;
    }
    if (!unk_0xA2BC31158C8CEFD2(Global_12684.f_22B[0 /*21*/].f_9, 12) && !unk_0xA2BC31158C8CEFD2(Global_12684.f_22B[0 /*21*/].f_9, 10))
    {
        if (Global_12684.f_22B[0 /*21*/].f_4 != unk_0x7F375072508F738F(iParam1))
        {
            return;
        }
    }
    if (Global_12A0F != -1 && Global_12A0F != iParam0)
    {
        return;
    }
    if (unk_0xD4B321D9096B01FC(iParam1))
    {
        if (unk_0xD960230552BC4165(iParam1, 0))
        {
            if (!unk_0x00123AB82C5FAC28(iParam1))
            {
                unk_0xE5C667CF3B4642D2(iParam1, 1, 1);
            }
            if (iParam0 == 24)
            {
                Global_1B3C8.f_7FE8.f_12C1 = func_41();
            }
            if (iParam1 != Global_12684.f_8B[iParam0])
            {
                if (iParam0 == 24)
                {
                    iVar0 = func_74(iParam0);
                    if ((unk_0xD4B321D9096B01FC(iVar0) && unk_0xD960230552BC4165(iVar0, 0)) && iParam1 != iVar0)
                    {
                        func_23(iVar0, 145);
                    }
                }
                Global_12A0E = iParam1;
                Global_12A0F = iParam0;
                Global_12A10 = iParam2;
            }
        }
    }
}

void func_23(int iParam0, int iParam1)//Position - 0xC1E
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    if (!func_24(iParam0))
    {
        return;
    }
    if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
    {
        iVar0 = unk_0x300C62F79A4441EB(iParam0, -1, 0);
        if (!unk_0xD4B321D9096B01FC(iVar0))
        {
            iVar0 = unk_0x30766BC434AF2797(iParam0, -1);
        }
        if (unk_0xD4B321D9096B01FC(iVar0) && !unk_0x2BF5E63466422C38(iVar0))
        {
            if (unk_0x7F375072508F738F(iVar0) == joaat("player_zero"))
            {
                iParam1 = 0;
            }
            else if (unk_0x7F375072508F738F(iVar0) == joaat("player_one"))
            {
                iParam1 = 1;
            }
            else if (unk_0x7F375072508F738F(iVar0) == joaat("player_two"))
            {
                iParam1 = 2;
            }
        }
        if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
        {
            iParam1 = Global_1B3C8.f_936.f_21B.f_10E1;
        }
    }
    iVar1 = 0;
    while (iVar1 < 3)
    {
        iVar2 = 0;
        while (iVar2 < 2)
        {
            if (unk_0x7F375072508F738F(iParam0) == Global_1B3C8.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42)
            {
                if (!unk_0x9591DE0F00127F2A(&(Global_1B3C8.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
                {
                    if (unk_0x2553916E420E8EF0(unk_0x8D762F81855E767B(iParam0), &(Global_1B3C8.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
                    {
                        Global_1B3C8.f_7FE8.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42 = 0;
                        Global_1B3C8.f_7FE8.f_15D8[iVar1] = iVar2;
                    }
                }
            }
            iVar2++;
        }
        iVar1++;
    }
    iVar1 = 0;
    while (iVar1 < 3)
    {
        if (unk_0x7F375072508F738F(iParam0) == Global_1B3C8.f_7FE8.f_15E0[iVar1 /*78*/].f_42)
        {
            if (!unk_0x9591DE0F00127F2A(&(Global_1B3C8.f_7FE8.f_15E0[iVar1 /*78*/].f_1)))
            {
                if (unk_0x2553916E420E8EF0(unk_0x8D762F81855E767B(iParam0), &(Global_1B3C8.f_7FE8.f_15E0[iVar1 /*78*/].f_1)))
                {
                    Global_1B3C8.f_7FE8.f_15E0[iVar1 /*78*/].f_42 = 0;
                }
            }
        }
        iVar1++;
    }
    Global_1B3C8.f_7FE8.f_15D6 = iParam1;
    Global_12A0D = iParam0;
    Global_1B3C8.f_7FE8.f_15D4 = 1;
    func_62(iParam0, &(Global_1B3C8.f_7FE8.f_1586));
}

int func_24(int iParam0)//Position - 0xE20
{
    if ((((((((((!unk_0xD4B321D9096B01FC(iParam0) || !unk_0xD960230552BC4165(iParam0, 0)) || func_39(iParam0, 0, 0)) || func_39(iParam0, 1, 0)) || func_39(iParam0, 2, 0)) || func_61(iParam0) != 145) || func_38(iParam0)) || func_37(iParam0)) || func_36(iParam0)) || func_35(iParam0)) || !func_25(unk_0x7F375072508F738F(iParam0)))
    {
        if (func_37(iParam0))
        {
        }
        if (func_37(iParam0))
        {
        }
        if (func_39(iParam0, 0, 0))
        {
        }
        if (func_39(iParam0, 1, 0))
        {
        }
        if (func_39(iParam0, 2, 0))
        {
        }
        if (func_61(iParam0) != 145)
        {
        }
        return 0;
    }
    return 1;
}

int func_25(int iParam0)//Position - 0xEFD
{
    if (iParam0 == 0)
    {
        return 0;
    }
    if (!func_26(iParam0, 0))
    {
        return 0;
    }
    if (((unk_0x5EA23EAAAD4E34BF(iParam0) || unk_0x31337ABC07783F10(iParam0)) || unk_0xDC118E11A4081E9A(iParam0)) || unk_0x89771D1B3DD40E7A(iParam0))
    {
        return 0;
    }
    switch (iParam0)
    {
        case joaat("bus"):
        case joaat("stretch"):
        case joaat("barracks"):
        case joaat("armytanker"):
        case joaat("rhino"):
        case joaat("armytrailer"):
        case joaat("barracks2"):
        case joaat("flatbed"):
        case joaat("ripley"):
        case joaat("towtruck"):
        case joaat("towtruck2"):
        case joaat("airbus"):
        case joaat("coach"):
        case joaat("rentalbus"):
        case joaat("tourbus"):
        case 1938952078:
        case joaat("pbus"):
        case joaat("trash"):
        case joaat("benson"):
        case joaat("boattrailer"):
        case joaat("biff"):
        case joaat("hauler"):
        case joaat("docktrailer"):
        case joaat("phantom"):
        case joaat("pounder"):
        case joaat("tractor2"):
        case joaat("bulldozer"):
        case joaat("handler"):
        case joaat("tiptruck"):
        case joaat("cutter"):
        case joaat("dump"):
        case joaat("mixer"):
        case joaat("mixer2"):
        case joaat("rubble"):
        case joaat("scrap"):
        case joaat("tiptruck2"):
        case joaat("camper"):
        case joaat("taco"):
        case joaat("boxville"):
        case joaat("boxville2"):
        case joaat("boxville3"):
        case joaat("journey"):
        case joaat("mule"):
        case joaat("mule2"):
        case joaat("police"):
        case joaat("police2"):
        case joaat("police3"):
        case joaat("police4"):
        case joaat("policeb"):
        case joaat("policeold1"):
        case joaat("policeold2"):
        case joaat("policet"):
        case joaat("taxi"):
        case joaat("submersible"):
        case joaat("submersible2"):
        case joaat("monster"):
            return 0;
            break;
    }
    return 1;
}

int func_26(int iParam0, bool bParam1)//Position - 0x10AE
{
    int iVar0;
    struct<2> Var1;
    
    if (iParam0 == 0)
    {
        return 0;
    }
    if (!unk_0x7576BED9351136C1(iParam0))
    {
        return 0;
    }
    if (((((iParam0 == joaat("dominator2") && !unk_0x393E9918BC37548A()) || (iParam0 == joaat("buffalo3") && !unk_0x393E9918BC37548A())) || (iParam0 == joaat("gauntlet2") && !unk_0x393E9918BC37548A())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x393E9918BC37548A()))
    {
        if (!func_34())
        {
            return 0;
        }
    }
    else
    {
        iVar0 = 0;
        while (iVar0 < unk_0x77B48D1493D695CC())
        {
            if (unk_0x100A6954526E9D29(iVar0, &Var1))
            {
                if (iParam0 == Var1.f_1)
                {
                    if (unk_0xC095980A527DC92E(Var1))
                    {
                        return 0;
                    }
                }
            }
            iVar0++;
        }
    }
    if (iParam0 == joaat("blimp"))
    {
        if ((((!func_33() && !func_32()) && !func_31()) && !func_30()) && !func_34())
        {
            return 0;
        }
    }
    if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
    {
        if ((unk_0x77BA37DB22C66465() || unk_0xE434AB6E3DE89861()) || unk_0x39FDED461BF385C3())
        {
        }
        else if (!func_31())
        {
            return 0;
        }
    }
    if (bParam1)
    {
        if (!func_29(iParam0))
        {
            return 0;
        }
    }
    if (!func_27(iParam0))
    {
        return 0;
    }
    return 1;
}

int func_27(int iParam0)//Position - 0x122E
{
    int iVar0;
    var uVar1;
    char cVar2[64];
    
    if (!func_28())
    {
        return 1;
    }
    unk_0xF6DFB55D0FF92B17(&iVar0, &uVar1);
    if (iVar0 == 4)
    {
        return 1;
    }
    switch (iParam0)
    {
        case joaat("dune4"):
            StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
            break;
        
        case joaat("voltic2"):
            StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
            break;
        
        case joaat("ruiner2"):
            StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
            break;
        
        case joaat("phantom2"):
            StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
            break;
        
        case joaat("technical2"):
            StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
            break;
        
        case joaat("boxville5"):
            StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
            break;
        
        case joaat("wastelander"):
            StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
            break;
        
        case joaat("blazer5"):
            StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
            break;
        
        default:
            return 1;
            break;
    }
    if (!unk_0x83F1366905AB3447(&cVar2))
    {
        return 0;
    }
    return 1;
}

int func_28()//Position - 0x12F4
{
    if (unk_0xE434AB6E3DE89861())
    {
        return unk_0x60E2BDB67AA16B1C();
    }
    return 0;
}

int func_29(int iParam0)//Position - 0x130B
{
    int iVar0;
    int iVar1;
    
    if (Global_2643BF)
    {
        return 1;
    }
    iVar0 = 1;
    iVar1 = unk_0x71EC776E812C6A0A();
    if (iParam0 == joaat("btype3"))
    {
        if ((!Global_40001.f_19C7 && !Global_40001.f_326E) && iVar1 < Global_40001.f_326F)
        {
            iVar0 = 0;
        }
    }
    if (iParam0 == joaat("faction3"))
    {
        if (!Global_40001.f_3782 && iVar1 < Global_40001.f_378E)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
    {
        if (!Global_40001.f_377E && iVar1 < Global_40001.f_378A)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("sabregt2"))
    {
        if (!Global_40001.f_377F && iVar1 < Global_40001.f_378B)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("tornado5"))
    {
        if (!Global_40001.f_3780 && iVar1 < Global_40001.f_378C)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("minivan2"))
    {
        if (!Global_40001.f_3781 && iVar1 < Global_40001.f_378D)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("slamvan3"))
    {
        if (!Global_40001.f_3783 && iVar1 < Global_40001.f_378F)
        {
            iVar0 = 0;
        }
    }
    if (iParam0 == joaat("prototipo"))
    {
        if (!Global_40001.f_3784 && iVar1 < Global_40001.f_3787)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("seven70"))
    {
        if (!Global_40001.f_3785 && iVar1 < Global_40001.f_3788)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("pfister811"))
    {
        if (!Global_40001.f_3786 && iVar1 < Global_40001.f_3789)
        {
            iVar0 = 0;
        }
    }
    if (iParam0 == joaat("bf400"))
    {
        if (!Global_40001.f_41C9 && iVar1 < Global_40001.f_41A6)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("brioso"))
    {
        if (!Global_40001.f_41C4 && iVar1 < Global_40001.f_41A1)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("cliffhanger"))
    {
        if (!Global_40001.f_41C8 && iVar1 < Global_40001.f_41A5)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("contender"))
    {
        if (!Global_40001.f_41C7 && iVar1 < Global_40001.f_41A4)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("le7b"))
    {
        if (!Global_40001.f_41C1 && iVar1 < Global_40001.f_419E)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("omnis"))
    {
        if (!Global_40001.f_41C2 && iVar1 < Global_40001.f_419F)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("trophytruck"))
    {
        if (!Global_40001.f_41C5 && iVar1 < Global_40001.f_41A2)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("trophytruck2"))
    {
        if (!Global_40001.f_41C6 && iVar1 < Global_40001.f_41A3)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("tropos"))
    {
        if (!Global_40001.f_41C3 && iVar1 < Global_40001.f_41A0)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("gargoyle"))
    {
        if (!Global_40001.f_41CB && iVar1 < Global_40001.f_41A8)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("rallytruck"))
    {
        if (!Global_40001.f_41CC && iVar1 < Global_40001.f_41A9)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("tampa2"))
    {
        if (!Global_40001.f_41C0 && iVar1 < Global_40001.f_419D)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("tyrus"))
    {
        if (!Global_40001.f_41BF && iVar1 < Global_40001.f_419C)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("sheava"))
    {
        if (!Global_40001.f_41BE && iVar1 < Global_40001.f_419B)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("lynx"))
    {
        if (!Global_40001.f_41CA && iVar1 < Global_40001.f_41A7)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("stalion2"))
    {
        if (!Global_40001.f_41CD && iVar1 < Global_40001.f_41AA)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("gauntlet2"))
    {
        if (!Global_40001.f_41CE && iVar1 < Global_40001.f_41AB)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("dominator2"))
    {
        if (!Global_40001.f_41CF && iVar1 < Global_40001.f_41AC)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("buffalo3"))
    {
        if (!Global_40001.f_41D0 && iVar1 < Global_40001.f_41AD)
        {
            iVar0 = 0;
        }
    }
    if (iParam0 == joaat("defiler"))
    {
        if (!Global_40001.f_4263 && iVar1 < Global_40001.f_4279)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("nightblade"))
    {
        if (!Global_40001.f_4264 && iVar1 < Global_40001.f_427A)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("zombiea"))
    {
        if (!Global_40001.f_4265 && iVar1 < Global_40001.f_427B)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("esskey"))
    {
        if (!Global_40001.f_4266 && iVar1 < Global_40001.f_427C)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("avarus"))
    {
        if (!Global_40001.f_4267 && iVar1 < Global_40001.f_427D)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("zombieb"))
    {
        if (!Global_40001.f_4268 && iVar1 < Global_40001.f_427E)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("hakuchou2"))
    {
        if (!Global_40001.f_426A && iVar1 < Global_40001.f_427F)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("vortex"))
    {
        if (!Global_40001.f_426B && iVar1 < Global_40001.f_4280)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("shotaro"))
    {
        if (!Global_40001.f_426C && iVar1 < Global_40001.f_4281)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("chimera"))
    {
        if (!Global_40001.f_426D && iVar1 < Global_40001.f_4282)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("raptor"))
    {
        if (!Global_40001.f_426E && iVar1 < Global_40001.f_4283)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("daemon2"))
    {
        if (!Global_40001.f_426F && iVar1 < Global_40001.f_4284)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("blazer4"))
    {
        if (!Global_40001.f_4270 && iVar1 < Global_40001.f_4285)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("tornado6"))
    {
        if (!Global_40001.f_4276 && iVar1 < Global_40001.f_428C)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("youga2"))
    {
        if (!Global_40001.f_4273 && iVar1 < Global_40001.f_4288)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("wolfsbane"))
    {
        if (!Global_40001.f_4274 && iVar1 < Global_40001.f_4289)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("faggio3"))
    {
        if (!Global_40001.f_4275 && iVar1 < Global_40001.f_428A)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("faggio"))
    {
        if (!Global_40001.f_4269 && iVar1 < Global_40001.f_428B)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("bagger"))
    {
        if (!Global_40001.f_4277 && iVar1 < Global_40001.f_428D)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("sanctus"))
    {
        if (!Global_40001.f_4271 && iVar1 < Global_40001.f_4286)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("manchez"))
    {
        if (!Global_40001.f_4272 && iVar1 < Global_40001.f_4287)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("ratbike"))
    {
        if (!Global_40001.f_4278 && iVar1 < Global_40001.f_428E)
        {
            iVar0 = 0;
        }
    }
    if (iParam0 == joaat("voltic2"))
    {
        if (!Global_40001.f_48D7 && iVar1 < Global_40001.f_4938)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("ruiner2"))
    {
        if (!Global_40001.f_48D8 && iVar1 < Global_40001.f_4939)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("dune4"))
    {
        if (!Global_40001.f_48D9 && iVar1 < Global_40001.f_493A)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("dune5"))
    {
        if (!Global_40001.f_48DA && iVar1 < Global_40001.f_493B)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("phantom2"))
    {
        if (!Global_40001.f_48DB && iVar1 < Global_40001.f_493C)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("technical2"))
    {
        if (!Global_40001.f_48DC && iVar1 < Global_40001.f_493D)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("boxville5"))
    {
        if (!Global_40001.f_48DD && iVar1 < Global_40001.f_493E)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("wastelander"))
    {
        if (!Global_40001.f_48DE && iVar1 < Global_40001.f_493F)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("blazer5"))
    {
        if (!Global_40001.f_48DF && iVar1 < Global_40001.f_4940)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("comet2"))
    {
        if (!Global_40001.f_48E0 && iVar1 < Global_40001.f_4941)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("comet3"))
    {
        if (!Global_40001.f_48E1 && iVar1 < Global_40001.f_4942)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("diablous"))
    {
        if (!Global_40001.f_48E2 && iVar1 < Global_40001.f_4943)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("diablous2"))
    {
        if (!Global_40001.f_48E3 && iVar1 < Global_40001.f_4944)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("elegy"))
    {
        if (!Global_40001.f_48E4 && iVar1 < Global_40001.f_4945)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("elegy2"))
    {
        if (!Global_40001.f_48E5 && iVar1 < Global_40001.f_4946)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("fcr"))
    {
        if (!Global_40001.f_48E6 && iVar1 < Global_40001.f_4947)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("fcr2"))
    {
        if (!Global_40001.f_48E7 && iVar1 < Global_40001.f_4948)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("italigtb"))
    {
        if (!Global_40001.f_48E8 && iVar1 < Global_40001.f_4949)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("italigtb2"))
    {
        if (!Global_40001.f_48E9 && iVar1 < Global_40001.f_494A)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("nero"))
    {
        if (!Global_40001.f_48EA && iVar1 < Global_40001.f_494B)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("nero2"))
    {
        if (!Global_40001.f_48EB && iVar1 < Global_40001.f_494C)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("penetrator"))
    {
        if (!Global_40001.f_48EC && iVar1 < Global_40001.f_494D)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("specter"))
    {
        if (!Global_40001.f_48ED && iVar1 < Global_40001.f_494E)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("specter2"))
    {
        if (!Global_40001.f_48EE && iVar1 < Global_40001.f_494F)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("tempesta"))
    {
        if (!Global_40001.f_48EF && iVar1 < Global_40001.f_4950)
        {
            iVar0 = 0;
        }
    }
    if (iParam0 == 1234311532)
    {
        if (!Global_40001.f_4D10 && iVar1 < Global_40001.f_4D0C)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1405937764)
    {
        if (!Global_40001.f_4D11 && iVar1 < Global_40001.f_4D0D)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 719660200)
    {
        if (!Global_40001.f_4D12 && iVar1 < Global_40001.f_4D0E)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -982130927)
    {
        if (!Global_40001.f_4D13 && iVar1 < Global_40001.f_4D0F)
        {
            iVar0 = 0;
        }
    }
    if (iParam0 == 917809321)
    {
        if (!Global_40001.f_507F && iVar1 < Global_40001.f_5087)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 223240013)
    {
        if (!Global_40001.f_5080 && iVar1 < Global_40001.f_5088)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1504306544)
    {
        if (!Global_40001.f_5081 && iVar1 < Global_40001.f_5089)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1939284556)
    {
        if (!Global_40001.f_5082 && iVar1 < Global_40001.f_508A)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 159274291)
    {
        if (!Global_40001.f_5083 && iVar1 < Global_40001.f_508B)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 433954513)
    {
        if (!Global_40001.f_5084 && iVar1 < Global_40001.f_508C)
        {
            iVar0 = 0;
        }
    }
    if (iParam0 == -1763555241)
    {
        if (!Global_40001.f_5388 && iVar1 < Global_40001.f_539C)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -749299473)
    {
        if (!Global_40001.f_5394 && iVar1 < Global_40001.f_53A8)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -975345305)
    {
        if (!Global_40001.f_538B && iVar1 < Global_40001.f_539F)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1700874274)
    {
        if (!Global_40001.f_5395 && iVar1 < Global_40001.f_53A9)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -392675425)
    {
        if (!Global_40001.f_5389 && iVar1 < Global_40001.f_539D)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1043222410)
    {
        if (!Global_40001.f_5399 && iVar1 < Global_40001.f_53AD)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1386191424)
    {
        if (!Global_40001.f_5397 && iVar1 < Global_40001.f_53AB)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1565978651)
    {
        if (!Global_40001.f_5398 && iVar1 < Global_40001.f_53AC)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1036591958)
    {
        if (!Global_40001.f_5393 && iVar1 < Global_40001.f_53A7)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -32878452)
    {
        if (!Global_40001.f_539A && iVar1 < Global_40001.f_53AE)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -42959138)
    {
        if (!Global_40001.f_5396 && iVar1 < Global_40001.f_53AA)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1984275979)
    {
        if (!Global_40001.f_5392 && iVar1 < Global_40001.f_53A6)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1007528109)
    {
        if (!Global_40001.f_538A && iVar1 < Global_40001.f_539E)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1523619738)
    {
        if (!Global_40001.f_538C && iVar1 < Global_40001.f_53A0)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1392481335)
    {
        if (!Global_40001.f_538D && iVar1 < Global_40001.f_53A1)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -998177792)
    {
        if (!Global_40001.f_538E && iVar1 < Global_40001.f_53A2)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1242608589)
    {
        if (!Global_40001.f_538F && iVar1 < Global_40001.f_53A3)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1841130506)
    {
        if (!Global_40001.f_5390 && iVar1 < Global_40001.f_53A4)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 2049897956)
    {
        if (!Global_40001.f_5391 && iVar1 < Global_40001.f_53A5)
        {
            iVar0 = 0;
        }
    }
    if (iParam0 == 1483171323)
    {
        if (!Global_40001.f_5749 && iVar1 < Global_40001.f_5765)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 886810209)
    {
        if (!Global_40001.f_574A && iVar1 < Global_40001.f_5766)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1693015116)
    {
        if (!Global_40001.f_574B && iVar1 < Global_40001.f_5767)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -692292317)
    {
        if (!Global_40001.f_574C && iVar1 < Global_40001.f_5768)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1435527158)
    {
        if (!Global_40001.f_574D && iVar1 < Global_40001.f_5769)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1181327175)
    {
        if (!Global_40001.f_574E && iVar1 < Global_40001.f_576A)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1489874736)
    {
        if (!Global_40001.f_574F && iVar1 < Global_40001.f_576B)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -212993243)
    {
        if (!Global_40001.f_5750 && iVar1 < Global_40001.f_576C)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 447548909)
    {
        if (!Global_40001.f_5751 && iVar1 < Global_40001.f_576D)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1561920505)
    {
        if (!Global_40001.f_5752 && iVar1 < Global_40001.f_576E)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1848994066)
    {
        if (!Global_40001.f_5753 && iVar1 < Global_40001.f_576F)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1741861769)
    {
        if (!Global_40001.f_5754 && iVar1 < Global_40001.f_5770)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1104234922)
    {
        if (!Global_40001.f_5755 && iVar1 < Global_40001.f_5771)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1871995513)
    {
        if (!Global_40001.f_5756 && iVar1 < Global_40001.f_5772)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1352136073)
    {
        if (!Global_40001.f_5757 && iVar1 < Global_40001.f_5773)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -313185164)
    {
        if (!Global_40001.f_5758 && iVar1 < Global_40001.f_5774)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -2079788230)
    {
        if (!Global_40001.f_5759 && iVar1 < Global_40001.f_5775)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 600450546)
    {
        if (!Global_40001.f_575A && iVar1 < Global_40001.f_5776)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -410205223)
    {
        if (!Global_40001.f_575B && iVar1 < Global_40001.f_5777)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 867799010)
    {
        if (!Global_40001.f_575C && iVar1 < Global_40001.f_5778)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1529242755)
    {
        if (!Global_40001.f_575D && iVar1 < Global_40001.f_5779)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 903794909)
    {
        if (!Global_40001.f_575E && iVar1 < Global_40001.f_577A)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1532697517)
    {
        if (!Global_40001.f_575F && iVar1 < Global_40001.f_577B)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 15219735)
    {
        if (!Global_40001.f_5760 && iVar1 < Global_40001.f_577C)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 661493923)
    {
        if (!Global_40001.f_5761 && iVar1 < Global_40001.f_577D)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 838982985)
    {
        if (!Global_40001.f_5762 && iVar1 < Global_40001.f_577E)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -391595372)
    {
        if (!Global_40001.f_5763 && iVar1 < Global_40001.f_577F)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -121446169)
    {
        if (!Global_40001.f_5764 && iVar1 < Global_40001.f_5780)
        {
            iVar0 = 0;
        }
    }
    if (iParam0 == 1909189272)
    {
        if (!Global_40001.f_5C09 && iVar1 < Global_40001.f_5C19)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1617472902)
    {
        if (!Global_40001.f_5C0A && iVar1 < Global_40001.f_5C1A)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1267543371)
    {
        if (!Global_40001.f_5C0E && iVar1 < Global_40001.f_5C1E)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 931280609)
    {
        if (!Global_40001.f_5C11 && iVar1 < Global_40001.f_5C21)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1046206681)
    {
        if (!Global_40001.f_5C16 && iVar1 < Global_40001.f_5C26)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1259134696)
    {
        if (!Global_40001.f_5C10 && iVar1 < Global_40001.f_5C20)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1115909093)
    {
        if (!Global_40001.f_5C08 && iVar1 < Global_40001.f_5C18)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1031562256)
    {
        if (!Global_40001.f_5C0F && iVar1 < Global_40001.f_5C1F)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -376434238)
    {
        if (!Global_40001.f_5C15 && iVar1 < Global_40001.f_5C25)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -986944621)
    {
        if (!Global_40001.f_5C14 && iVar1 < Global_40001.f_5C24)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1134706562)
    {
        if (!Global_40001.f_5C0B && iVar1 < Global_40001.f_5C1B)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -2120700196)
    {
        if (!Global_40001.f_5C0D && iVar1 < Global_40001.f_5C1D)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -214906006)
    {
        if (!Global_40001.f_5C17 && iVar1 < Global_40001.f_5C27)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -988501280)
    {
        if (!Global_40001.f_5C13 && iVar1 < Global_40001.f_5C23)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1254014755)
    {
        if (!Global_40001.f_5C0C && iVar1 < Global_40001.f_5C1C)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -726768679)
    {
        if (!Global_40001.f_5C12 && iVar1 < Global_40001.f_5C22)
        {
            iVar0 = 0;
        }
    }
    if (iParam0 == -1988428699)
    {
        if (!Global_40001.f_5C63 && iVar1 < Global_40001.f_5C56)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 345756458)
    {
        if (!Global_40001.f_5C64 && iVar1 < Global_40001.f_5C57)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1945374990)
    {
        if (!Global_40001.f_5C69 && iVar1 < Global_40001.f_5C5C)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1653666139)
    {
        if (!Global_40001.f_5C68 && iVar1 < Global_40001.f_5C5B)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 500482303)
    {
        if (!Global_40001.f_5C66 && iVar1 < Global_40001.f_5C59)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 2044532910)
    {
        if (!Global_40001.f_5C6C && iVar1 < Global_40001.f_5C5F)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -638562243)
    {
        if (!Global_40001.f_5C6E && iVar1 < Global_40001.f_5C61)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1692272545)
    {
        if (!Global_40001.f_5C6F && iVar1 < Global_40001.f_5C62)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 2069146067)
    {
        if (!Global_40001.f_5C6D && iVar1 < Global_40001.f_5C60)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -420911112)
    {
        if (!Global_40001.f_5C65 && iVar1 < Global_40001.f_5C58)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 321186144)
    {
        if (!Global_40001.f_5C67 && iVar1 < Global_40001.f_5C5A)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -54332285)
    {
        if (!Global_40001.f_5C6B && iVar1 < Global_40001.f_5C5E)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -307958377)
    {
        if (!Global_40001.f_5C6A && iVar1 < Global_40001.f_5C5D)
        {
            iVar0 = 0;
        }
    }
    if (iParam0 == 1721676810)
    {
    }
    else if (iParam0 == -801550069)
    {
    }
    else if (iParam0 == 679453769)
    {
    }
    else if (iParam0 == 1909700336)
    {
    }
    else if (iParam0 == 2139203625)
    {
    }
    else if (iParam0 == -1890996696)
    {
    }
    else if (iParam0 == 2038858402)
    {
    }
    else if (iParam0 == -1146969353)
    {
    }
    else if (iParam0 == 1542143200)
    {
    }
    else if (iParam0 == -579747861)
    {
    }
    else if (iParam0 == 444994115)
    {
    }
    else if (iParam0 == 1637620610)
    {
    }
    else if (iParam0 == -755532233)
    {
    }
    else if (iParam0 == 540101442)
    {
    }
    else if (iParam0 == -1106120762)
    {
    }
    else if (iParam0 == -1478704292)
    {
    }
    else if (iParam0 == -2096690334)
    {
    }
    else if (iParam0 == 1591739866)
    {
        if (!Global_40001.f_6539 && iVar1 < Global_40001.f_653B)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1168952148)
    {
        if (!Global_40001.f_615E && iVar1 < Global_40001.f_6157)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1566607184)
    {
        if (!Global_40001.f_615F && iVar1 < Global_40001.f_6158)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -331467772)
    {
        if (!Global_40001.f_6160 && iVar1 < Global_40001.f_6159)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1279262537)
    {
        if (!Global_40001.f_6161 && iVar1 < Global_40001.f_615A)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -49115651)
    {
        if (!Global_40001.f_653A && iVar1 < Global_40001.f_653C)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1456744817)
    {
        if (!Global_40001.f_6162 && iVar1 < Global_40001.f_615B)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -507495760)
    {
        if (!Global_40001.f_6163 && iVar1 < Global_40001.f_615C)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -286046740)
    {
        if (!Global_40001.f_6164 && iVar1 < Global_40001.f_615D)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1044193113)
    {
        if (!Global_40001.f_6169 && iVar1 < Global_40001.f_617E)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 686471183)
    {
        if (!Global_40001.f_616A && iVar1 < Global_40001.f_617F)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -941272559)
    {
        if (!Global_40001.f_616B && iVar1 < Global_40001.f_6180)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1829436850)
    {
        if (!Global_40001.f_616C && iVar1 < Global_40001.f_6181)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -682108547)
    {
        if (!Global_40001.f_616D && iVar1 < Global_40001.f_6182)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 722226637)
    {
        if (!Global_40001.f_616E && iVar1 < Global_40001.f_6183)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1854776567)
    {
        if (!Global_40001.f_616F && iVar1 < Global_40001.f_6184)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1862507111)
    {
        if (!Global_40001.f_6170 && iVar1 < Global_40001.f_6185)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -882629065)
    {
        if (!Global_40001.f_6171 && iVar1 < Global_40001.f_6186)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -362150785)
    {
        if (!Global_40001.f_6172 && iVar1 < Global_40001.f_6187)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 310284501)
    {
        if (!Global_40001.f_6173 && iVar1 < Global_40001.f_6188)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 916547552)
    {
        if (!Global_40001.f_6174 && iVar1 < Global_40001.f_6189)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1804415708)
    {
        if (!Global_40001.f_6175 && iVar1 < Global_40001.f_618A)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1934384720)
    {
        if (!Global_40001.f_6176 && iVar1 < Global_40001.f_618B)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1349095620)
    {
        if (!Global_40001.f_6177 && iVar1 < Global_40001.f_618C)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -208911803)
    {
        if (!Global_40001.f_6178 && iVar1 < Global_40001.f_618D)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -324618589)
    {
        if (!Global_40001.f_6179 && iVar1 < Global_40001.f_618E)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -664141241)
    {
        if (!Global_40001.f_617A && iVar1 < Global_40001.f_618F)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1323778901)
    {
        if (!Global_40001.f_617B && iVar1 < Global_40001.f_6190)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1620126302)
    {
        if (!Global_40001.f_617C && iVar1 < Global_40001.f_6191)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -447711397)
    {
        if (!Global_40001.f_617D && iVar1 < Global_40001.f_6192)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1118611807)
    {
        if (!Global_40001.f_6C64 && iVar1 < Global_40001.f_6C79)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 409049982)
    {
        if (!Global_40001.f_6C65 && iVar1 < Global_40001.f_6C7A)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1756021720)
    {
        if (!Global_40001.f_6C66 && iVar1 < Global_40001.f_6C7B)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 2031587082)
    {
        if (!Global_40001.f_6C67 && iVar1 < Global_40001.f_6C7C)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1693751655)
    {
        if (!Global_40001.f_6C68 && iVar1 < Global_40001.f_6C7D)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 987469656)
    {
        if (!Global_40001.f_6C69 && iVar1 < Global_40001.f_6C7E)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 872704284)
    {
        if (!Global_40001.f_6C6A && iVar1 < Global_40001.f_6C7F)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 408825843)
    {
        if (!Global_40001.f_6C6B && iVar1 < Global_40001.f_6C80)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 740289177)
    {
        if (!Global_40001.f_6C6C && iVar1 < Global_40001.f_6C81)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -834353991)
    {
        if (!Global_40001.f_6C6D && iVar1 < Global_40001.f_6C82)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 301304410)
    {
        if (!Global_40001.f_6C6E && iVar1 < Global_40001.f_6C83)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 960812448)
    {
        if (!Global_40001.f_6C6F && iVar1 < Global_40001.f_6C84)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1284356689)
    {
        if (!Global_40001.f_6C70 && iVar1 < Global_40001.f_6C85)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 394110044)
    {
        if (!Global_40001.f_6C71 && iVar1 < Global_40001.f_6C86)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1938952078)
    {
        if (!Global_40001.f_6C72 && iVar1 < Global_40001.f_6C87)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("burrito2"))
    {
        if (!Global_40001.f_6C73 && iVar1 < Global_40001.f_6C88)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("boxville"))
    {
        if (!Global_40001.f_6C74 && iVar1 < Global_40001.f_6C89)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("stockade"))
    {
        if (!Global_40001.f_6C75 && iVar1 < Global_40001.f_6C8A)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1254331310)
    {
        if (!Global_40001.f_6C76 && iVar1 < Global_40001.f_6C8B)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("lguard"))
    {
        if (!Global_40001.f_6C77 && iVar1 < Global_40001.f_6C8C)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == joaat("blazer2"))
    {
        if (!Global_40001.f_6C78 && iVar1 < Global_40001.f_6C8D)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 340154634)
    {
        if ((!Global_40001.f_6C8F && iVar1 < Global_40001.f_6C90) && !Global_40001.f_6C62)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1960756985)
    {
        if ((!Global_40001.f_6C92 && iVar1 < Global_40001.f_6C93) && !Global_40001.f_6C63)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == -1132721664)
    {
        if (!Global_40001.f_6C97 && iVar1 < Global_40001.f_6C9A)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 83136452)
    {
        if (!Global_40001.f_6C98 && iVar1 < Global_40001.f_6C9B)
        {
            iVar0 = 0;
        }
    }
    else if (iParam0 == 1456336509)
    {
        if (!Global_40001.f_6C99 && iVar1 < Global_40001.f_6C9C)
        {
            iVar0 = 0;
        }
    }
    return iVar0;
}

int func_30()//Position - 0x37D6
{
    return 0;
}

int func_31()//Position - 0x37DF
{
    return 1;
}

int func_32()//Position - 0x37E8
{
    return 1;
}

int func_33()//Position - 0x37F1
{
    if (unk_0x9742C47C6EA02281(-1226939934))
    {
        return 1;
    }
    return 0;
}

int func_34()//Position - 0x380A
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

int func_35(int iParam0)//Position - 0x38C5
{
    int iVar0;
    char* sVar1;
    
    iVar0 = unk_0x7F375072508F738F(iParam0);
    sVar1 = unk_0x8D762F81855E767B(iParam0);
    if (iVar0 == joaat("speedo") && unk_0x2553916E420E8EF0(sVar1, "LAMAR G "))
    {
        return 1;
    }
    if (!func_26(iVar0, 0))
    {
        return 1;
    }
    return 0;
}

int func_36(int iParam0)//Position - 0x390B
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 3)
    {
        if (unk_0xD4B321D9096B01FC(Global_1773C[iVar0]))
        {
            if (Global_1773C[iVar0] == iParam0)
            {
                return 1;
            }
        }
        iVar0++;
    }
    return 0;
}

int func_37(int iParam0)//Position - 0x3946
{
    int iVar0;
    
    if (unk_0xD4B321D9096B01FC(iParam0) && unk_0xD960230552BC4165(iParam0, 0))
    {
        iVar0 = 0;
        while (iVar0 < 9)
        {
            if (unk_0xD4B321D9096B01FC(Global_1771E[iVar0]) && unk_0xD960230552BC4165(Global_1771E[iVar0], 0))
            {
                if (Global_1771E[iVar0] == iParam0 && unk_0x7F375072508F738F(Global_1771E[iVar0]) == unk_0x7F375072508F738F(iParam0))
                {
                    return 1;
                }
            }
            iVar0++;
        }
    }
    return 0;
}

int func_38(int iParam0)//Position - 0x39C2
{
    int iVar0;
    
    if (unk_0xD4B321D9096B01FC(Global_12684.f_1E4[24]))
    {
        if (iParam0 == Global_12684.f_1E4[24])
        {
            return 0;
        }
    }
    iVar0 = 0;
    while (iVar0 < 68)
    {
        if (unk_0xD4B321D9096B01FC(Global_12684.f_1E4[iVar0]))
        {
            if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
            {
                if (iParam0 == Global_12684.f_1E4[iVar0])
                {
                    return 1;
                }
            }
        }
        iVar0++;
    }
    return 0;
}

int func_39(int iParam0, int iParam1, bool bParam2)//Position - 0x3AAA
{
    int iVar0;
    char* sVar1;
    int iVar2;
    
    if (!unk_0xD4B321D9096B01FC(iParam0) || !unk_0xD960230552BC4165(iParam0, 0))
    {
        return 0;
    }
    iVar0 = 0;
    while (func_40(iParam1, iVar0, &sVar1, &iVar2))
    {
        if (!bParam2 || unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_1C38[iVar2], 0))
        {
            if (unk_0x89C1B63B3CB1739A(&sVar1, iParam0))
            {
                return 1;
            }
        }
        iVar0++;
    }
    return 0;
}

int func_40(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x3B1B
{
    StringCopy(sParam2, "", 32);
    switch (iParam0)
    {
        case 0:
            if (iParam1 == 0)
            {
                StringCopy(sParam2, "Michael - Beverly Hills", 32);
                *uParam3 = 0;
                return 1;
            }
            else if (iParam1 == 1)
            {
                StringCopy(sParam2, "Trevor - Countryside", 32);
                *uParam3 = 1;
                return 1;
            }
            break;
        
        case 1:
            if (iParam1 == 0)
            {
                StringCopy(sParam2, "Franklin - Aunt", 32);
                *uParam3 = 5;
                return 1;
            }
            else if (iParam1 == 1)
            {
                StringCopy(sParam2, "Franklin - Hills", 32);
                *uParam3 = 6;
                return 1;
            }
            break;
        
        case 2:
            if (iParam1 == 0)
            {
                StringCopy(sParam2, "Trevor - Countryside", 32);
                *uParam3 = 2;
                return 1;
            }
            else if (iParam1 == 1)
            {
                StringCopy(sParam2, "Trevor - City", 32);
                *uParam3 = 3;
                return 1;
            }
            else if (iParam1 == 2)
            {
                StringCopy(sParam2, "Trevor - Stripclub", 32);
                *uParam3 = 4;
                return 1;
            }
            break;
    }
    return 0;
}

var func_41()//Position - 0x3BF2
{
    var uVar0;
    
    func_51(&uVar0, unk_0xCA3729F4C3A9E58A());
    func_50(&uVar0, unk_0x8F7802EF0E800F47());
    func_49(&uVar0, unk_0xA63165E74E9A042B());
    func_44(&uVar0, unk_0xFC6CBA5BA4E459A9());
    func_43(&uVar0, unk_0x4EBF6D59B95D29C2());
    func_42(&uVar0, unk_0x10CB21C87A35156F());
    return uVar0;
}

void func_42(var uParam0, int iParam1)//Position - 0x3C38
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

void func_43(var uParam0, int iParam1)//Position - 0x3CBE
{
    if (iParam1 < 0 || iParam1 > 11)
    {
        return;
    }
    *uParam0 = (*uParam0 - *uParam0 & 15);
    *uParam0 = (*uParam0 || iParam1);
}

void func_44(var uParam0, int iParam1)//Position - 0x3CF1
{
    int iVar0;
    int iVar1;
    
    iVar0 = func_48(*uParam0);
    iVar1 = func_46(*uParam0);
    if (iParam1 < 1 || iParam1 > func_45(iVar0, iVar1))
    {
        return;
    }
    *uParam0 = (*uParam0 - *uParam0 & 496);
    *uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_45(int iParam0, int iParam1)//Position - 0x3D42
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

var func_46(int iParam0)//Position - 0x3DE4
{
    return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_47(unk_0xA2BC31158C8CEFD2(iParam0, 31), -1, 1)) + 2011;
}

int func_47(bool bParam0, int iParam1, int iParam2)//Position - 0x3E09
{
    if (bParam0)
    {
        return iParam1;
    }
    return iParam2;
}

int func_48(var uParam0)//Position - 0x3E20
{
    return uParam0 & 15;
}

void func_49(var uParam0, int iParam1)//Position - 0x3E2D
{
    if (iParam1 < 0 || iParam1 > 24)
    {
        return;
    }
    *uParam0 = (*uParam0 - *uParam0 & 15872);
    *uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_50(var uParam0, int iParam1)//Position - 0x3E67
{
    if (iParam1 < 0 || iParam1 >= 60)
    {
        return;
    }
    *uParam0 = (*uParam0 - *uParam0 & 1032192);
    *uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_51(var uParam0, int iParam1)//Position - 0x3EA2
{
    if (iParam1 < 0 || iParam1 >= 60)
    {
        return;
    }
    *uParam0 = (*uParam0 - *uParam0 & 66060288);
    *uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_52(var uParam0, int iParam1)//Position - 0x3EDE
{
    int iVar0;
    int iVar1;
    
    *uParam0 = { 0f, 0f, 0f };
    uParam0->f_3 = 0f;
    uParam0->f_4 = 0;
    StringCopy(&(uParam0->f_5), "", 16);
    uParam0->f_9 = 0;
    uParam0->f_A = 0;
    uParam0->f_B = 0;
    uParam0->f_C = 145;
    uParam0->f_D = -1;
    uParam0->f_E = 0;
    uParam0->f_F = { 0f, 0f, 0f };
    uParam0->f_12 = { 0f, 0f, 0f };
    switch (iParam1)
    {
        case 0:
            *uParam0 = { -831.8538f, 172.1154f, 69.9058f };
            uParam0->f_3 = 157.5705f;
            uParam0->f_4 = func_53(0, 1);
            uParam0->f_C = 0;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 20);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            iVar0 = 1;
            break;
        
        case 1:
            *uParam0 = { 1970.943f, 3801.684f, 31.1396f };
            uParam0->f_3 = 301.3964f;
            uParam0->f_4 = func_53(0, 1);
            uParam0->f_C = 0;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 20);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            iVar0 = 1;
            break;
        
        case 2:
            *uParam0 = { -22.6297f, -1439.137f, 29.6549f };
            uParam0->f_3 = 180.0808f;
            uParam0->f_4 = func_53(1, 1);
            uParam0->f_C = 1;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 20);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            iVar0 = 1;
            break;
        
        case 3:
            *uParam0 = { -22.5229f, -1434.699f, 29.6552f };
            uParam0->f_3 = 141.6114f;
            uParam0->f_4 = func_53(1, 2);
            uParam0->f_C = 1;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 19);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            iVar0 = 1;
            break;
        
        case 4:
            *uParam0 = { 10.9281f, 545.669f, 174.7951f };
            uParam0->f_3 = 61.392f;
            uParam0->f_4 = func_53(1, 1);
            uParam0->f_C = 1;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 20);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            iVar0 = 1;
            break;
        
        case 5:
            *uParam0 = { 6.1093f, 544.9742f, 174.2835f };
            uParam0->f_3 = 92.1548f;
            uParam0->f_4 = func_53(1, 2);
            uParam0->f_C = 1;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 19);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            iVar0 = 1;
            break;
        
        case 6:
            *uParam0 = { 1981.416f, 3808.131f, 31.1384f };
            uParam0->f_3 = 117.2557f;
            uParam0->f_4 = func_53(2, 1);
            uParam0->f_C = 2;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 20);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            iVar0 = 1;
            break;
        
        case 7:
            *uParam0 = { -1158.488f, -1529.367f, 3.8995f };
            uParam0->f_3 = 35.7505f;
            uParam0->f_4 = func_53(2, 1);
            uParam0->f_C = 2;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 20);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            iVar0 = 1;
            break;
        
        case 8:
            *uParam0 = { 148.2868f, -1270.569f, 28.2252f };
            uParam0->f_3 = 208.4685f;
            uParam0->f_4 = func_53(2, 1);
            uParam0->f_C = 2;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 20);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            iVar0 = 1;
            break;
        
        case 9:
            *uParam0 = { 1459.509f, -1380.45f, 78.3259f };
            uParam0->f_3 = 99.6211f;
            uParam0->f_4 = joaat("scorcher");
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
            iVar0 = 1;
            break;
        
        case 10:
            *uParam0 = { -1518.947f, -1387.865f, -0.5134f };
            uParam0->f_3 = 98.3867f;
            uParam0->f_4 = joaat("seashark");
            iVar0 = 1;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
            break;
        
        case 11:
            *uParam0 = { 353.0926f, 3577.593f, 32.351f };
            uParam0->f_3 = 16.6205f;
            uParam0->f_4 = joaat("duster");
            iVar0 = 1;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
            break;
        
        case 12:
            uParam0->f_E = 0;
            *uParam0 = { -1652.004f, -3142.348f, 12.9921f };
            uParam0->f_3 = 329.1082f;
            uParam0->f_C = 0;
            uParam0->f_D = 359;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
            iVar0 = 1;
            break;
        
        case 13:
            uParam0->f_E = 1;
            *uParam0 = { -1271.649f, -3380.685f, 12.9451f };
            uParam0->f_3 = 329.5137f;
            uParam0->f_C = 1;
            uParam0->f_D = 359;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
            iVar0 = 1;
            break;
        
        case 14:
            uParam0->f_E = 2;
            *uParam0 = { 1735.586f, 3294.531f, 40.1651f };
            uParam0->f_3 = 194.9525f;
            uParam0->f_C = 2;
            uParam0->f_D = 359;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
            iVar0 = 1;
            break;
        
        case 15:
            uParam0->f_E = 3;
            *uParam0 = { -846.27f, -1363.19f, 0.22f };
            uParam0->f_3 = 108.78f;
            uParam0->f_C = 0;
            uParam0->f_D = 356;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 22);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
            iVar0 = 1;
            break;
        
        case 16:
            uParam0->f_E = 4;
            *uParam0 = { -849.47f, -1354.99f, 0.24f };
            uParam0->f_3 = 109.84f;
            uParam0->f_C = 1;
            uParam0->f_D = 356;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 22);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
            iVar0 = 1;
            break;
        
        case 17:
            uParam0->f_E = 5;
            *uParam0 = { -852.47f, -1346.2f, 0.21f };
            uParam0->f_3 = 108.76f;
            uParam0->f_C = 2;
            uParam0->f_D = 356;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 22);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
            iVar0 = 1;
            break;
        
        case 18:
            uParam0->f_E = 6;
            *uParam0 = { -745.857f, -1433.904f, 4.0005f };
            uParam0->f_C = 0;
            uParam0->f_D = 360;
            uParam0->f_F = { -756.2952f, -1441.609f, 2.9184f };
            uParam0->f_12 = { -738.0606f, -1423.068f, 8.2835f };
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
            iVar0 = 1;
            break;
        
        case 19:
            uParam0->f_E = 7;
            *uParam0 = { -761.8486f, -1453.829f, 4.0005f };
            uParam0->f_C = 1;
            uParam0->f_D = 360;
            uParam0->f_F = { -772.8158f, -1459.957f, 3.2894f };
            uParam0->f_12 = { -754.3353f, -1440.836f, 8.3334f };
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
            iVar0 = 1;
            break;
        
        case 20:
            uParam0->f_E = 8;
            *uParam0 = { 1769.3f, 3244f, 41.1f };
            uParam0->f_C = 2;
            uParam0->f_D = 360;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
            iVar0 = 1;
            break;
        
        case 21:
            uParam0->f_E = 9;
            *uParam0 = { 192.7897f, -1020.539f, -99.98f };
            uParam0->f_3 = 180f;
            uParam0->f_4 = 0;
            uParam0->f_C = 0;
            uParam0->f_D = 357;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 24);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 29);
            iVar0 = 1;
            break;
        
        case 22:
            uParam0->f_E = 10;
            *uParam0 = { 192.7897f, -1020.539f, -99.98f };
            uParam0->f_3 = 180f;
            uParam0->f_4 = 0;
            uParam0->f_C = 1;
            uParam0->f_D = 357;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 24);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 29);
            iVar0 = 1;
            break;
        
        case 23:
            uParam0->f_E = 11;
            *uParam0 = { 192.7897f, -1020.539f, -99.98f };
            uParam0->f_3 = 180f;
            uParam0->f_4 = 0;
            uParam0->f_C = 2;
            uParam0->f_D = 357;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 14);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 24);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 28);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 29);
            iVar0 = 1;
            break;
        
        case 26:
        case 27:
        case 28:
            iVar1 = (iParam1 - 26);
            uParam0->f_E = (12 + iVar1);
            *uParam0 = { 196.2794f, -1020.479f, -99.98f };
            uParam0->f_3 = 180f;
            uParam0->f_4 = 0;
            uParam0->f_C = (0 + iVar1);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 27);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 24);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 29);
            iVar0 = 1;
            break;
        
        case 29:
        case 30:
        case 31:
            iVar1 = (iParam1 - 29);
            uParam0->f_E = (15 + iVar1);
            *uParam0 = { 199.8872f, -1020.048f, -99.98f };
            uParam0->f_3 = 180f;
            uParam0->f_4 = 0;
            uParam0->f_C = (0 + iVar1);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 27);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 24);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 29);
            iVar0 = 1;
            break;
        
        case 32:
        case 33:
        case 34:
            iVar1 = (iParam1 - 32);
            uParam0->f_E = (18 + iVar1);
            *uParam0 = { 203.6006f, -1019.776f, -99.98f };
            uParam0->f_3 = 180f;
            uParam0->f_4 = 0;
            uParam0->f_C = (0 + iVar1);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 7);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 27);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 24);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 29);
            iVar0 = 1;
            break;
        
        case 24:
            uParam0->f_E = 21;
            *uParam0 = { 0f, 0f, 0f };
            uParam0->f_3 = 0f;
            uParam0->f_4 = 0;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 11);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 13);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
            iVar0 = 1;
            break;
        
        case 25:
            uParam0->f_E = 22;
            *uParam0 = { 723.2515f, -632.0496f, 27.1484f };
            uParam0->f_3 = 12.9316f;
            uParam0->f_4 = joaat("tailgater");
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 10);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 11);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 13);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 12);
            iVar0 = 1;
            break;
        
        case 35:
            *uParam0 = { -51.23f, 3111.9f, 24.95f };
            uParam0->f_3 = 46.78f;
            uParam0->f_4 = joaat("proptrailer");
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 8);
            iVar0 = 1;
            break;
        
        case 36:
            *uParam0 = { -55.7984f, -1096.586f, 25.4223f };
            uParam0->f_3 = 308.0596f;
            uParam0->f_4 = joaat("bjxl");
            uParam0->f_A = 126;
            uParam0->f_B = 126;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 9);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 13);
            iVar0 = 1;
            break;
        
        case 37:
            *uParam0 = { -2892.93f, 3192.37f, 11.66f };
            uParam0->f_3 = -132.35f;
            uParam0->f_4 = joaat("velum");
            uParam0->f_A = 157;
            uParam0->f_B = 157;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 9);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 13);
            iVar0 = 1;
            break;
        
        case 38:
            *uParam0 = { 1744.308f, 3270.673f, 40.2076f };
            uParam0->f_3 = 125f;
            uParam0->f_4 = joaat("cargobob3");
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 8);
            iVar0 = 1;
            break;
        
        case 39:
            *uParam0 = { 1751.44f, 3322.643f, 42.1855f };
            uParam0->f_3 = 268.134f;
            uParam0->f_4 = joaat("submersible");
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
            iVar0 = 1;
            break;
        
        case 41:
            *uParam0 = { 1377.104f, -2076.2f, 52f };
            uParam0->f_3 = 37.5f;
            uParam0->f_4 = joaat("towtruck");
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 8);
            iVar0 = 1;
            break;
        
        case 40:
            *uParam0 = { 1380.42f, -2072.77f, 51.7607f };
            uParam0->f_3 = 37.5f;
            uParam0->f_4 = joaat("trash");
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 8);
            iVar0 = 1;
            break;
        
        case 42:
            *uParam0 = { 1359.389f, 3618.441f, 33.8907f };
            uParam0->f_3 = 108.2337f;
            uParam0->f_4 = joaat("barracks");
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 8);
            iVar0 = 1;
            break;
        
        case 43:
            *uParam0 = { 693.1154f, -1018.155f, 21.6387f };
            uParam0->f_3 = 177.6454f;
            uParam0->f_4 = 1938952078;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 8);
            iVar0 = 1;
            break;
        
        case 44:
            *uParam0 = { -73.6963f, 495.124f, 143.5226f };
            uParam0->f_3 = 155.5994f;
            uParam0->f_4 = joaat("vacca");
            iVar0 = 1;
            break;
        
        case 45:
            *uParam0 = { -67.6314f, 891.8266f, 234.5348f };
            uParam0->f_3 = 294.993f;
            uParam0->f_4 = joaat("surano");
            iVar0 = 1;
            break;
        
        case 46:
            *uParam0 = { 533.9048f, -169.2469f, 53.7005f };
            uParam0->f_3 = 1.2998f;
            uParam0->f_4 = joaat("tornado2");
            iVar0 = 1;
            break;
        
        case 47:
            *uParam0 = { -726.8914f, -408.6952f, 34.0416f };
            uParam0->f_3 = 267.7392f;
            uParam0->f_4 = joaat("superd");
            iVar0 = 1;
            break;
        
        case 48:
            *uParam0 = { -1321.519f, 261.3993f, 61.5709f };
            uParam0->f_3 = 350.7697f;
            uParam0->f_4 = joaat("double");
            iVar0 = 1;
            break;
        
        case 49:
            *uParam0 = { -1267.999f, 451.6463f, 93.7071f };
            uParam0->f_3 = 48.9311f;
            uParam0->f_4 = joaat("double");
            iVar0 = 1;
            break;
        
        case 50:
            *uParam0 = { -1062.076f, -226.7637f, 37.157f };
            uParam0->f_3 = 234.2767f;
            uParam0->f_4 = joaat("double");
            iVar0 = 1;
            break;
        
        case 51:
            *uParam0 = { 68.16914f, -1558.958f, 29.46904f };
            uParam0->f_3 = 49.90575f;
            uParam0->f_4 = joaat("rumpo2");
            uParam0->f_C = 2;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 26);
            iVar0 = 1;
            break;
        
        case 52:
            *uParam0 = { 589.4399f, 2736.708f, 42.03316f };
            uParam0->f_3 = -175.7105f;
            uParam0->f_4 = joaat("rumpo2");
            uParam0->f_C = 2;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 26);
            iVar0 = 1;
            break;
        
        case 53:
            *uParam0 = { -488.774f, -344.5721f, 34.36356f };
            uParam0->f_3 = 82.4042f;
            uParam0->f_4 = joaat("rumpo2");
            uParam0->f_C = 2;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 26);
            iVar0 = 1;
            break;
        
        case 54:
            *uParam0 = { 288.8808f, -585.4728f, 43.15428f };
            uParam0->f_3 = -20.80707f;
            uParam0->f_4 = joaat("rumpo2");
            uParam0->f_C = 2;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 26);
            iVar0 = 1;
            break;
        
        case 55:
            *uParam0 = { 304.8294f, -1383.674f, 31.67744f };
            uParam0->f_3 = -41.11603f;
            uParam0->f_4 = joaat("rumpo2");
            uParam0->f_C = 2;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 26);
            iVar0 = 1;
            break;
        
        case 56:
            *uParam0 = { 1126.194f, -1481.486f, 34.7016f };
            uParam0->f_3 = -91.43369f;
            uParam0->f_4 = joaat("rumpo2");
            uParam0->f_C = 2;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 26);
            iVar0 = 1;
            break;
        
        case 57:
            *uParam0 = { -1598.36f, 5252.84f, 0f };
            uParam0->f_3 = 28.14f;
            uParam0->f_4 = joaat("submersible");
            uParam0->f_D = 308;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 2);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 30);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
            iVar0 = 1;
            break;
        
        case 58:
            *uParam0 = { -1602.62f, 5260.37f, 0.86f };
            uParam0->f_3 = 25.32f;
            uParam0->f_4 = joaat("dinghy");
            uParam0->f_D = 404;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 2);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 22);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
            iVar0 = 1;
            break;
        
        case 59:
            *uParam0 = { 2116.571f, 4763.279f, 40.1596f };
            uParam0->f_3 = 198.723f;
            uParam0->f_4 = joaat("bfinjection");
            iVar0 = 1;
            break;
        
        case 60:
            *uParam0 = { 1133.21f, 120.2f, 80.9f };
            uParam0->f_3 = 134.4f;
            if (func_34())
            {
                uParam0->f_4 = joaat("blimp2");
            }
            else
            {
                uParam0->f_4 = joaat("blimp");
            }
            uParam0->f_D = 401;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 13);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 2);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 1);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
            iVar0 = 1;
            break;
        
        case 61:
            *uParam0 = { -806.31f, -2679.65f, 13.9f };
            uParam0->f_3 = 150.54f;
            if (func_34())
            {
                uParam0->f_4 = joaat("blimp2");
            }
            else
            {
                uParam0->f_4 = joaat("blimp");
            }
            uParam0->f_D = 401;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 13);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 2);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 1);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
            iVar0 = 1;
            break;
        
        case 62:
            *uParam0 = { 1985.85f, 3828.96f, 31.98f };
            uParam0->f_3 = -16.58f;
            uParam0->f_4 = joaat("blazer3");
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
            iVar0 = 1;
            break;
        
        case 63:
            *uParam0 = { 3870.75f, 4464.67f, 0f };
            uParam0->f_3 = 0f;
            uParam0->f_4 = joaat("submersible2");
            uParam0->f_D = 308;
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 0);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 21);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 30);
            iVar0 = 1;
            break;
        
        case 64:
            *uParam0 = { 1257.729f, -2564.474f, 41.717f };
            uParam0->f_3 = 284.5561f;
            uParam0->f_4 = joaat("dukes2");
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
            iVar0 = 1;
            break;
        
        case 65:
            *uParam0 = { 643.2823f, 3014.152f, 42.2733f };
            uParam0->f_3 = 128.0554f;
            uParam0->f_4 = joaat("dukes2");
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
            iVar0 = 1;
            break;
        
        case 66:
            *uParam0 = { 38.9368f, 850.8677f, 196.3f };
            uParam0->f_3 = 311.6813f;
            uParam0->f_4 = joaat("dodo");
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 30);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
            iVar0 = 1;
            break;
        
        case 67:
            *uParam0 = { 1333.875f, 4262.226f, 30.78f };
            uParam0->f_3 = 262.5293f;
            uParam0->f_4 = joaat("dodo");
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 30);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 23);
            unk_0xA1E7A40E1F56E511(&(uParam0->f_9), 6);
            iVar0 = 1;
            break;
    }
    if (unk_0xA2BC31158C8CEFD2(uParam0->f_9, 10))
    {
        uParam0->f_4 = Global_1B3C8.f_7FE8.f_45[uParam0->f_E /*78*/].f_42;
        if (iParam1 == 14)
        {
            if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
            {
                *uParam0 = { 1678.8f, 3229.6f, 41.8f };
                uParam0->f_3 = 106.0906f;
            }
        }
        if (!func_77(Global_1B3C8.f_7FE8.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0))
        {
            *uParam0 = { Global_1B3C8.f_7FE8.f_748[uParam0->f_E /*3*/] };
        }
        if (Global_1B3C8.f_7FE8.f_78E[uParam0->f_E] != -1f)
        {
            uParam0->f_3 = Global_1B3C8.f_7FE8.f_78E[uParam0->f_E];
        }
    }
    if (unk_0xA2BC31158C8CEFD2(uParam0->f_9, 19))
    {
        if (!func_77(Global_1B3C8.f_936.f_21B.f_E04[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
        {
            *uParam0 = { Global_1B3C8.f_936.f_21B.f_E04[1 /*10*/][uParam0->f_C /*3*/] };
            uParam0->f_3 = Global_1B3C8.f_936.f_21B.f_E19[1 /*4*/][uParam0->f_C];
        }
    }
    else if (unk_0xA2BC31158C8CEFD2(uParam0->f_9, 20))
    {
        if (!func_77(Global_1B3C8.f_936.f_21B.f_E04[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
        {
            *uParam0 = { Global_1B3C8.f_936.f_21B.f_E04[0 /*10*/][uParam0->f_C /*3*/] };
            uParam0->f_3 = Global_1B3C8.f_936.f_21B.f_E19[0 /*4*/][uParam0->f_C];
        }
    }
    return iVar0;
}

int func_53(int iParam0, int iParam1)//Position - 0x56A5
{
    struct<82> Var0;
    
    if (func_55(iParam0))
    {
        Var0.f_B = 12;
        Var0.f_1F = 49;
        Var0.f_51 = 2;
        func_54(iParam0, &Var0, iParam1);
        return Var0;
    }
    else if (iParam0 != 145)
    {
    }
    return 0;
}

void func_54(int iParam0, var uParam1, int iParam2)//Position - 0x56E7
{
    int iVar0;
    
    uParam1->f_58 = 1;
    uParam1->f_54 = 255;
    uParam1->f_55 = 255;
    uParam1->f_56 = 255;
    uParam1->f_61 = 1;
    uParam1->f_3 = 1000;
    uParam1->f_1 = 0;
    switch (iParam0)
    {
        case 0:
            iVar0 = joaat("tailgater");
            if (Global_1B3C8.f_2378.f_63.f_3A[128] && !Global_1B3C8.f_2378.f_63.f_3A[131])
            {
                iVar0 = joaat("premier");
            }
            switch (iVar0)
            {
                case joaat("tailgater"):
                    *uParam1 = iVar0;
                    uParam1->f_2 = 3f;
                    uParam1->f_4 = 0;
                    uParam1->f_9 = 1;
                    uParam1->f_B[0] = 1;
                    StringCopy(&(uParam1->f_1B), "5MDS003", 16);
                    break;
                
                case joaat("premier"):
                    *uParam1 = iVar0;
                    uParam1->f_2 = 14.9f;
                    uParam1->f_5 = 43;
                    uParam1->f_6 = 43;
                    uParam1->f_7 = 0;
                    uParam1->f_8 = 156;
                    uParam1->f_9 = 0;
                    StringCopy(&(uParam1->f_1B), "880HS955", 16);
                    break;
            }
            break;
        
        case 2:
            iVar0 = joaat("bodhi2");
            switch (iVar0)
            {
                case joaat("bodhi2"):
                    *uParam1 = iVar0;
                    uParam1->f_2 = 14f;
                    uParam1->f_5 = 32;
                    uParam1->f_6 = 0;
                    uParam1->f_7 = 0;
                    uParam1->f_8 = 156;
                    StringCopy(&(uParam1->f_1B), "BETTY 32", 16);
                    if (Global_1B3C8.f_2378.f_63.f_3A[119])
                    {
                        uParam1->f_B[1] = 1;
                    }
                    break;
            }
            break;
        
        case 1:
            if (iParam2 == 1)
            {
                iVar0 = joaat("buffalo2");
            }
            else if (iParam2 == 2)
            {
                iVar0 = joaat("bagger");
            }
            else if (Global_1B3C8.f_2378.f_63.f_3A[118])
            {
                iVar0 = joaat("bagger");
            }
            else
            {
                iVar0 = joaat("buffalo2");
            }
            switch (iVar0)
            {
                case joaat("bagger"):
                    *uParam1 = iVar0;
                    uParam1->f_2 = 6f;
                    uParam1->f_5 = 53;
                    uParam1->f_6 = 0;
                    uParam1->f_7 = 59;
                    uParam1->f_8 = 156;
                    StringCopy(&(uParam1->f_1B), "FC88", 16);
                    break;
                
                case joaat("buffalo2"):
                    *uParam1 = iVar0;
                    uParam1->f_2 = 0f;
                    uParam1->f_5 = 111;
                    uParam1->f_6 = 111;
                    uParam1->f_7 = 0;
                    uParam1->f_8 = 156;
                    uParam1->f_A = 1;
                    StringCopy(&(uParam1->f_1B), "FC1988", 16);
                    uParam1->f_B[0] = 1;
                    uParam1->f_B[1] = 1;
                    uParam1->f_B[2] = 1;
                    uParam1->f_B[3] = 1;
                    uParam1->f_B[4] = 1;
                    uParam1->f_B[5] = 1;
                    uParam1->f_B[6] = 1;
                    uParam1->f_B[7] = 1;
                    uParam1->f_B[8] = 1;
                    break;
            }
            break;
        
        default:
            break;
    }
}

bool func_55(int iParam0)//Position - 0x5943
{
    return iParam0 < 3;
}

void func_56(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0x594F
{
    if (func_52(&(Global_12684.f_22B[0 /*21*/]), iParam0))
    {
        if (unk_0xA2BC31158C8CEFD2(Global_12684.f_22B[0 /*21*/].f_9, 10))
        {
            func_60(iParam0);
            func_59(uParam1, &(Global_1B3C8.f_7FE8.f_45[Global_12684.f_22B[0 /*21*/].f_E /*78*/]));
            if (unk_0xA2BC31158C8CEFD2(Global_12684.f_22B[0 /*21*/].f_9, 11))
            {
                Global_1B3C8.f_7FE8.f_748[Global_12684.f_22B[0 /*21*/].f_E /*3*/] = { vParam2 };
                Global_1B3C8.f_7FE8.f_78E[Global_12684.f_22B[0 /*21*/].f_E] = fParam3;
            }
            else
            {
                Global_1B3C8.f_7FE8.f_748[Global_12684.f_22B[0 /*21*/].f_E /*3*/] = { 0f, 0f, 0f };
                Global_1B3C8.f_7FE8.f_78E[Global_12684.f_22B[0 /*21*/].f_E] = -1f;
            }
            Global_1B3C8.f_7FE8.f_7A6[Global_12684.f_22B[0 /*21*/].f_E] = iParam4 + 1;
            func_57(iParam0, 1);
        }
    }
}

void func_57(int iParam0, bool bParam1)//Position - 0x5A4E
{
    if (iParam0 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (!func_73(iParam0, 0))
        {
            func_58(iParam0, 1, 0);
            func_58(iParam0, 2, 0);
            func_58(iParam0, 3, 0);
            func_58(iParam0, 4, 0);
            func_58(iParam0, 0, 1);
            Global_12684[iParam0] = 1;
        }
    }
    else
    {
        func_58(iParam0, 0, 0);
    }
}

void func_58(int iParam0, int iParam1, bool bParam2)//Position - 0x5AAB
{
    if (iParam0 == -1)
    {
        return;
    }
    if (bParam2)
    {
        unk_0xA1E7A40E1F56E511(&(Global_1B3C8.f_7FE8[iParam0]), iParam1);
    }
    else
    {
        unk_0x3B76114EC84D5812(&(Global_1B3C8.f_7FE8[iParam0]), iParam1);
    }
}

void func_59(var uParam0, var uParam1)//Position - 0x5AE6
{
    uParam1->f_42 = uParam0->f_42;
    *uParam1 = *uParam0;
    uParam1->f_1 = { uParam0->f_1 };
    uParam1->f_5 = uParam0->f_5;
    uParam1->f_6 = uParam0->f_6;
    uParam1->f_7 = uParam0->f_7;
    uParam1->f_8 = uParam0->f_8;
    uParam1->f_9 = { uParam0->f_9 };
    uParam1->f_3B = { uParam0->f_3B };
    uParam1->f_3E = uParam0->f_3E;
    uParam1->f_3F = uParam0->f_3F;
    uParam1->f_40 = uParam0->f_40;
    uParam1->f_41 = uParam0->f_41;
    uParam1->f_4D = uParam0->f_4D;
    uParam1->f_43 = uParam0->f_43;
    uParam1->f_45 = uParam0->f_45;
    uParam1->f_44 = uParam0->f_44;
    uParam1->f_47 = uParam0->f_47;
    uParam1->f_48 = uParam0->f_48;
    uParam1->f_49 = uParam0->f_49;
    uParam1->f_4A = uParam0->f_4A;
    uParam1->f_4B = uParam0->f_4B;
    uParam1->f_4C = uParam0->f_4C;
}

void func_60(int iParam0)//Position - 0x5BB2
{
    if (iParam0 == -1)
    {
        return;
    }
    if (func_52(&(Global_12684.f_22B[0 /*21*/]), iParam0))
    {
        if (unk_0xD4B321D9096B01FC(Global_12684.f_8B[iParam0]))
        {
            unk_0xE5C667CF3B4642D2(Global_12684.f_8B[iParam0], 1, 1);
            unk_0xF25956700ADFD77F(&(Global_12684.f_8B[iParam0]));
            Global_12684.f_8B[iParam0] = 0;
        }
        if (unk_0xA2BC31158C8CEFD2(Global_12684.f_22B[0 /*21*/].f_9, 13))
        {
            func_57(iParam0, 0);
        }
    }
}

int func_61(int iParam0)//Position - 0x5C2C
{
    int iVar0;
    
    if (!unk_0xD4B321D9096B01FC(iParam0))
    {
        return 145;
    }
    if (!unk_0xD960230552BC4165(iParam0, 0))
    {
        return 145;
    }
    iVar0 = 0;
    while (iVar0 < 9)
    {
        if (unk_0xD4B321D9096B01FC(Global_1771E[iVar0]))
        {
            if (Global_1771E[iVar0] == iParam0)
            {
                return Global_17728[iVar0];
            }
        }
        iVar0++;
    }
    return 145;
}

void func_62(int iParam0, var uParam1)//Position - 0x5C8F
{
    int iVar0;
    
    if (unk_0xD960230552BC4165(iParam0, 0))
    {
        func_66(uParam1);
        uParam1->f_42 = unk_0x7F375072508F738F(iParam0);
        StringCopy(&(uParam1->f_1), unk_0x8D762F81855E767B(iParam0), 16);
        *uParam1 = unk_0x15573EDB7C261B90(iParam0);
        unk_0xA0D7A86C25861B15(iParam0, &(uParam1->f_5), &(uParam1->f_6));
        unk_0x419E9D2174D7719D(iParam0, &(uParam1->f_7), &(uParam1->f_8));
        unk_0xD71E7132121C0D3E(iParam0, &(uParam1->f_3E), &(uParam1->f_3F), &(uParam1->f_40));
        uParam1->f_41 = unk_0xE3ED8ECBFAC24D1B(iParam0);
        uParam1->f_43 = unk_0xFAFC58D85092C270(iParam0);
        uParam1->f_45 = unk_0x20ACED1EFBCD772F(iParam0);
        uParam1->f_46 = unk_0x53B8ABE899D7A6D5(iParam0);
        unk_0xBF4B7EDAACFA006E(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
        unk_0x3D70A45CE998115E(iParam0, &(uParam1->f_4A), &(uParam1->f_4B), &(uParam1->f_4C));
        if (unk_0xABAE008A600C0215(iParam0, 2))
        {
            unk_0xA1E7A40E1F56E511(&(uParam1->f_4D), 28);
        }
        if (unk_0xABAE008A600C0215(iParam0, 3))
        {
            unk_0xA1E7A40E1F56E511(&(uParam1->f_4D), 29);
        }
        if (unk_0xABAE008A600C0215(iParam0, 0))
        {
            unk_0xA1E7A40E1F56E511(&(uParam1->f_4D), 30);
        }
        if (unk_0xABAE008A600C0215(iParam0, 1))
        {
            unk_0xA1E7A40E1F56E511(&(uParam1->f_4D), 31);
        }
        if (uParam1->f_41 == -1 && !func_65(uParam1->f_42))
        {
            uParam1->f_41 = 0;
        }
        if (unk_0x7A0A412D276E522A(iParam0, 0))
        {
            uParam1->f_44 = unk_0x331921060784BA6D(iParam0);
        }
        if (unk_0x31337ABC07783F10(uParam1->f_42))
        {
            if (unk_0x0B70023E8CF129D6(iParam0))
            {
                switch (unk_0x80560A645560481F(iParam0))
                {
                    case 3:
                    case 0:
                        unk_0x3B76114EC84D5812(&(uParam1->f_4D), 23);
                        unk_0xA1E7A40E1F56E511(&(uParam1->f_4D), 22);
                        break;
                    
                    case 4:
                    case 1:
                        unk_0x3B76114EC84D5812(&(uParam1->f_4D), 23);
                        unk_0x3B76114EC84D5812(&(uParam1->f_4D), 22);
                        break;
                    
                    case 5:
                        unk_0xA1E7A40E1F56E511(&(uParam1->f_4D), 23);
                        break;
                }
            }
            else
            {
                unk_0xA1E7A40E1F56E511(&(uParam1->f_4D), 23);
            }
        }
        if (!unk_0xDD2D40FFFA144057(iParam0))
        {
            unk_0xA1E7A40E1F56E511(&(uParam1->f_4D), 9);
        }
        if (unk_0x0064CADA7C0E1595(iParam0))
        {
            unk_0xA1E7A40E1F56E511(&(uParam1->f_4D), 10);
        }
        if (unk_0x2C905D7AE4F3E3EA(iParam0))
        {
            unk_0xA1E7A40E1F56E511(&(uParam1->f_4D), 13);
            unk_0xD6427EDEA38DA83A(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
        }
        if (unk_0x86932E0F4CD07767(iParam0))
        {
            unk_0xA1E7A40E1F56E511(&(uParam1->f_4D), 12);
        }
        func_64(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
        iVar0 = 0;
        while (iVar0 <= 11)
        {
            if (unk_0x21A121AEFFBC84B4(iParam0, iVar0 + 1))
            {
                unk_0xA1E7A40E1F56E511(&(uParam1->f_4D), func_63(iVar0 + 1));
            }
            iVar0++;
        }
        if (unk_0x7B2058C6797B2C04(iParam0, 0))
        {
            unk_0xA1E7A40E1F56E511(&(uParam1->f_4D), 11);
        }
        else
        {
            unk_0x3B76114EC84D5812(&(uParam1->f_4D), 11);
        }
        if (unk_0x145DAE1A4D0EA05D(iParam0, "IgnoredByQuickSave") && unk_0x607A7A0DD7EB666D(iParam0, "IgnoredByQuickSave"))
        {
            unk_0xA1E7A40E1F56E511(&(uParam1->f_4D), 27);
        }
        else
        {
            unk_0x3B76114EC84D5812(&(uParam1->f_4D), 27);
        }
    }
}

int func_63(int iParam0)//Position - 0x5F3A
{
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
            return 24;
            break;
        
        case 11:
            return 25;
            break;
        
        case 12:
            return 26;
            break;
    }
    return 0;
}

int func_64(int iParam0, var uParam1, var uParam2)//Position - 0x5FEA
{
    int iVar0;
    int iVar1;
    
    if (!unk_0xD960230552BC4165(*iParam0, 0))
    {
        return 0;
    }
    if (unk_0x6AA7F87D45193D03(*iParam0) == 0)
    {
        return 0;
    }
    iVar0 = 0;
    while (iVar0 < *uParam1)
    {
        iVar1 = iVar0;
        if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
        {
            (*uParam1)[iVar0] = 0;
            if (unk_0x8FAB2067996663AC(*iParam0, iVar1))
            {
                (*uParam1)[iVar0] = 1;
            }
        }
        else if (iVar1 == 22)
        {
            if (unk_0x8FAB2067996663AC(*iParam0, iVar1))
            {
                switch (unk_0xD1A3841ED22A9A4F(*iParam0))
                {
                    case 255:
                        (*uParam1)[iVar0] = 1;
                        break;
                    
                    case 0:
                        (*uParam1)[iVar0] = 2;
                        break;
                    
                    case 1:
                        (*uParam1)[iVar0] = 3;
                        break;
                    
                    case 2:
                        (*uParam1)[iVar0] = 4;
                        break;
                    
                    case 3:
                        (*uParam1)[iVar0] = 5;
                        break;
                    
                    case 4:
                        (*uParam1)[iVar0] = 6;
                        break;
                    
                    case 5:
                        (*uParam1)[iVar0] = 7;
                        break;
                    
                    case 6:
                        (*uParam1)[iVar0] = 8;
                        break;
                    
                    case 7:
                        (*uParam1)[iVar0] = 9;
                        break;
                    
                    case 8:
                        (*uParam1)[iVar0] = 10;
                        break;
                    
                    case 9:
                        (*uParam1)[iVar0] = 11;
                        break;
                    
                    case 10:
                        (*uParam1)[iVar0] = 12;
                        break;
                    
                    case 11:
                        (*uParam1)[iVar0] = 13;
                        break;
                    
                    case 12:
                        (*uParam1)[iVar0] = 14;
                        break;
                    
                    case 13:
                        (*uParam1)[iVar0] = 15;
                        break;
                }
            }
            else
            {
                (*uParam1)[iVar0] = 0;
            }
        }
        else
        {
            (*uParam1)[iVar0] = unk_0xF05B9E4C6631EA28(*iParam0, iVar0) + 1;
            if (iVar0 == 23)
            {
                (*uParam2)[0] = unk_0x627338D61F1048BA(*iParam0, iVar0);
            }
            else if (iVar0 == 24)
            {
                (*uParam2)[1] = unk_0x627338D61F1048BA(*iParam0, iVar0);
            }
        }
        iVar0++;
    }
    return 1;
}

int func_65(int iParam0)//Position - 0x61DD
{
    switch (iParam0)
    {
        case joaat("granger"):
        case -998177792:
            return 1;
        
        default:
    }
    return 0;
}

void func_66(var uParam0)//Position - 0x61FD
{
    int iVar0;
    
    uParam0->f_42 = 0;
    uParam0->f_4D = 0;
    uParam0->f_41 = 0;
    uParam0->f_3E = 0;
    uParam0->f_3F = 0;
    uParam0->f_40 = 0;
    uParam0->f_4A = 0;
    uParam0->f_4B = 0;
    uParam0->f_4C = 0;
    *uParam0 = 0;
    StringCopy(&(uParam0->f_1), "", 16);
    uParam0->f_5 = 0;
    uParam0->f_6 = 0;
    uParam0->f_7 = 0;
    uParam0->f_8 = 0;
    iVar0 = 0;
    while (iVar0 < 49)
    {
        uParam0->f_9[iVar0] = 0;
        iVar0++;
    }
    iVar0 = 0;
    while (iVar0 < 2)
    {
        uParam0->f_3B[iVar0] = 0;
        iVar0++;
    }
    uParam0->f_43 = 0;
    uParam0->f_44 = 0;
    uParam0->f_45 = 0;
    uParam0->f_46 = 1;
    uParam0->f_47 = 0;
    uParam0->f_48 = 0;
    uParam0->f_49 = 0;
}

void func_67(int iParam0)//Position - 0x62AC
{
    if (iParam0 != 24 && iParam0 != 25)
    {
    }
    func_60(iParam0);
    func_57(iParam0, 0);
}

void func_68(bool bParam0)//Position - 0x62D3
{
    if (unk_0xA2BC31158C8CEFD2(iLocal_49, 14))
    {
        if (func_70(unk_0x0FA8183DAD2B3203()) == 0)
        {
            if (bParam0)
            {
                func_69(10);
            }
            else
            {
                func_69(12);
            }
        }
        else if (bParam0)
        {
            func_69(11);
        }
        else
        {
            func_69(13);
        }
        if (iLocal_42 == 0)
        {
            func_91(45, 0);
        }
        else if (iLocal_42 == 1)
        {
            func_91(12, 0);
        }
        else if (iLocal_42 == 2)
        {
            func_91(34, 0);
        }
        if (iLocal_42 != 2)
        {
            vLocal_50 = { 0f, 0f, 0f };
        }
        iLocal_40 = 0;
        iLocal_41 = 0;
        unk_0x3B76114EC84D5812(&iLocal_49, 6);
        unk_0x3B76114EC84D5812(&iLocal_49, 7);
        unk_0x3B76114EC84D5812(&iLocal_49, 0);
        unk_0x3B76114EC84D5812(&iLocal_49, 1);
        unk_0x3B76114EC84D5812(&iLocal_49, 8);
        unk_0x3B76114EC84D5812(&iLocal_49, 12);
        unk_0x3B76114EC84D5812(&iLocal_49, 2);
        unk_0x3B76114EC84D5812(&iLocal_49, 14);
        if (iLocal_37 == 4)
        {
            if (unk_0x08EA887200715AD9(iLocal_74))
            {
                unk_0x749CA887CB0AFEC9(&iLocal_74);
            }
            func_108(0);
        }
        func_78(0, 0);
    }
}

void func_69(int iParam0)//Position - 0x63BA
{
    int iVar0;
    
    iVar0 = func_6(iParam0);
    unk_0xA1E7A40E1F56E511(&(uLocal_47[func_5(iParam0)]), iVar0);
}

int func_70(int iParam0)//Position - 0x63DA
{
    int iVar0;
    int iVar1;
    
    if (unk_0xD4B321D9096B01FC(iParam0))
    {
        iVar1 = unk_0x7F375072508F738F(iParam0);
        iVar0 = 0;
        while (iVar0 <= 2)
        {
            if (func_71(iVar0) == iVar1)
            {
                return iVar0;
            }
            iVar0++;
        }
    }
    return 145;
}

int func_71(int iParam0)//Position - 0x6417
{
    if (func_55(iParam0))
    {
        return func_72(iParam0);
    }
    else if (iParam0 != 145)
    {
    }
    return 0;
}

var func_72(int iParam0)//Position - 0x643C
{
    return Global_706[iParam0 /*29*/];
}

bool func_73(int iParam0, int iParam1)//Position - 0x644B
{
    if (iParam0 == -1)
    {
        return 0;
    }
    return unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_7FE8[iParam0], iParam1);
}

int func_74(int iParam0)//Position - 0x646E
{
    if (iParam0 == -1)
    {
        return 0;
    }
    return Global_12684.f_8B[iParam0];
}

int func_75()//Position - 0x648A
{
    if (!unk_0x393E9918BC37548A())
    {
        return Global_177B1.f_2C == 1;
    }
    return 0;
}

bool func_76(int iParam0, vector3 vParam1, float fParam2)//Position - 0x64A6
{
    return SYSTEM::VDIST2(unk_0xACE5E491FC1B0D37(iParam0, 1), vParam1) <= (fParam2 * fParam2);
}

bool func_77(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x64C3
{
    if (bParam2)
    {
        return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
    }
    return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_78(int iParam0, bool bParam1)//Position - 0x650A
{
    Global_1B3C8.f_273C.f_80 = iParam0;
    iLocal_37 = iParam0;
    if (bParam1)
    {
        return;
    }
    func_79();
}

int func_79()//Position - 0x652E
{
    if (func_80(0))
    {
        return 0;
    }
    if (Global_18194.f_8)
    {
        if (Global_18194.f_A > 0)
        {
            return 0;
        }
    }
    else if (Global_18194.f_A > 1)
    {
        return 0;
    }
    Global_18194.f_A++;
    return 1;
}

bool func_80(bool bParam0)//Position - 0x6579
{
    if (!bParam0 && unk_0x222F76006659B0EB(joaat("benchmark")) > 0)
    {
        return 1;
    }
    return unk_0xA2BC31158C8CEFD2(Global_12C19, 0);
}

void func_81(char* sParam0, int iParam1)//Position - 0x65A4
{
    unk_0xA7AD9EA2F2C079BF(joaat("sp_last_mission_name"), sParam0, 1);
    if (unk_0xA2BC31158C8CEFD2(iParam1, 0))
    {
        unk_0xA7AD9EA2F2C079BF(joaat("sp0_last_mission_name"), sParam0, 1);
    }
    if (unk_0xA2BC31158C8CEFD2(iParam1, 1))
    {
        unk_0xA7AD9EA2F2C079BF(joaat("sp1_last_mission_name"), sParam0, 1);
    }
    if (unk_0xA2BC31158C8CEFD2(iParam1, 2))
    {
        unk_0xA7AD9EA2F2C079BF(joaat("sp2_last_mission_name"), sParam0, 1);
    }
}

int func_82()//Position - 0x65FE
{
    func_83();
    switch (Global_1B3C8.f_936.f_21B.f_10E1)
    {
        case 0:
            return 1;
            break;
        
        case 1:
            return 2;
            break;
        
        case 2:
            return 4;
            break;
    }
    return 0;
}

void func_83()//Position - 0x6644
{
    int iVar0;
    
    if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
    {
        if (func_71(Global_1B3C8.f_936.f_21B.f_10E1) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
        {
            iVar0 = func_70(unk_0x0FA8183DAD2B3203());
            if (func_55(iVar0) && (!func_84(14) || Global_1AFAF))
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

bool func_84(int iParam0)//Position - 0x6741
{
    return Global_A1B4 == iParam0;
}

int func_85(int iParam0)//Position - 0x674F
{
    if (func_86(iParam0))
    {
        if (unk_0xD960230552BC4165(iParam0, 0))
        {
            if (!unk_0xCFBE5B663F1567A7(iParam0))
            {
                return 1;
            }
        }
    }
    return 0;
}

int func_86(int iParam0)//Position - 0x6779
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

void func_87(int iParam0, int iParam1)//Position - 0x679A
{
    if (iParam0 == 235 || iParam0 == 0)
    {
        return;
    }
    Global_1B3C8.f_21A0[iParam0] = 1;
    Global_1B3C8.f_21A0.f_EC[iParam0] = (unk_0x9B35D07DCD0F0B43() + iParam1);
}

void func_88(bool bParam0)//Position - 0x67D7
{
    char* sVar0;
    
    unk_0x42E1D2373042F69A(0);
    switch (func_89())
    {
        case 0:
            if (bParam0)
            {
                sVar0 = "MICHAEL_SMALL_01";
            }
            else
            {
                sVar0 = "MICHAEL_BIG_01";
            }
            break;
        
        case 1:
            if (bParam0)
            {
                sVar0 = "FRANKLIN_SMALL_01";
            }
            else
            {
                sVar0 = "FRANKLIN_BIG_01";
            }
            break;
        
        case 2:
            if (bParam0)
            {
                sVar0 = "TREVOR_SMALL_01";
            }
            else
            {
                sVar0 = "TREVOR_BIG_01";
            }
            break;
    }
    unk_0xEFC7B89E4BAC8CA7(sVar0);
}

int func_89()//Position - 0x684A
{
    func_83();
    return Global_1B3C8.f_936.f_21B.f_10E1;
}

void func_90(char* sParam0)//Position - 0x6863
{
    unk_0x759AC38FBC6CCA9E(sParam0);
    unk_0x81019766FF500CCA();
}

void func_91(int iParam0, int iParam1)//Position - 0x6875
{
    if (iParam0 == 146 || iParam0 == -1)
    {
        return;
    }
    if (Global_1B3C8.f_2378.f_63.f_3A[iParam0] == iParam1)
    {
        return;
    }
    Global_1B3C8.f_2378.f_63.f_3A[iParam0] = iParam1;
}

void func_92()//Position - 0x68BA
{
    Global_1B3C8.f_271B.f_15++;
    if (iLocal_42 == 0)
    {
        unk_0x41410A69AD49AFCD(joaat("fl_co_fb4p3"), Global_1B3C8.f_271B.f_15, 1);
        if (func_101())
        {
            if (func_257(74) || (func_257(75) && func_100()))
            {
                func_91(46, 1);
            }
        }
    }
    func_93();
    unk_0xA1E7A40E1F56E511(&iLocal_49, 10);
}

void func_93()//Position - 0x6928
{
    if (iLocal_42 == 0)
    {
        func_94(23, 0, 0);
    }
    else if (iLocal_42 == 1)
    {
    }
    else if (iLocal_42 == 2)
    {
    }
}

void func_94(int iParam0, int iParam1, int iParam2)//Position - 0x6950
{
    bool bVar0;
    
    if (iParam0 < 0)
    {
    }
    if (iParam0 == 321 || iParam0 > 321)
    {
    }
    else
    {
        func_98((891 + iParam0), 1, -1, 1);
    }
    bVar0 = true;
    if (Global_1B3C8.f_27CD[iParam0 /*12*/].f_5 == 1)
    {
        if (Global_1B3C8.f_27CD[iParam0 /*12*/].f_6 == 11 || Global_1B3C8.f_27CD[iParam0 /*12*/].f_6 == 12)
        {
            bVar0 = false;
        }
    }
    else
    {
        Global_1B3C8.f_27CD[iParam0 /*12*/].f_5 = 1;
        Global_1B3C8.f_27CD[iParam0 /*12*/].f_A = iParam1;
        Global_1B3C8.f_27CD[iParam0 /*12*/].f_B = iParam2;
        if (iParam0 == 287)
        {
            unk_0x4CC49AB39D518992(joaat("num_hidden_packages_0"), 50, 0);
        }
        if (iParam0 == 286)
        {
            unk_0x4CC49AB39D518992(joaat("num_hidden_packages_1"), 50, 0);
        }
        if (iParam0 == 299)
        {
            unk_0x4CC49AB39D518992(joaat("num_hidden_packages_3"), 50, 0);
        }
    }
    if (bVar0)
    {
        func_95();
    }
}

void func_95()//Position - 0x6A38
{
    int iVar0;
    float fVar1;
    float fVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    float fVar7;
    float fVar8;
    int iVar9;
    
    iVar0 = 0;
    Global_1B2C0 = 0;
    Global_1B2C1 = 0;
    Global_1B2C2 = 0;
    Global_1B2C3 = 0;
    Global_1B2C4 = 0;
    Global_1B2C5 = 0;
    Global_1B2C6 = 0;
    fVar1 = 0f;
    fVar2 = 0f;
    fVar3 = 0f;
    fVar4 = 0f;
    fVar5 = 0f;
    fVar6 = 0f;
    fVar7 = 0f;
    fVar8 = Global_1B3C8.f_27CD.f_F0D;
    Global_1B3C8.f_27CD.f_F0D = 0f;
    while (iVar0 < 321)
    {
        if (Global_1B3C8.f_27CD[iVar0 /*12*/].f_5 == 1)
        {
            switch (Global_1B3C8.f_27CD[iVar0 /*12*/].f_6)
            {
                case 1:
                    Global_1B2C0++;
                    fVar1 = (fVar1 + Global_1B3C8.f_27CD[iVar0 /*12*/].f_4);
                    break;
                
                case 3:
                    Global_1B2C1++;
                    fVar2 = (fVar2 + Global_1B3C8.f_27CD[iVar0 /*12*/].f_4);
                    break;
                
                case 5:
                    Global_1B2C2++;
                    fVar3 = (fVar3 + Global_1B3C8.f_27CD[iVar0 /*12*/].f_4);
                    break;
                
                case 7:
                    Global_1B2C3++;
                    fVar4 = (fVar4 + Global_1B3C8.f_27CD[iVar0 /*12*/].f_4);
                    break;
                
                case 9:
                    Global_1B2C4++;
                    fVar5 = (fVar5 + (Global_1B3C8.f_27CD[iVar0 /*12*/].f_4 * 4f));
                    break;
                
                case 11:
                    Global_1B2C5++;
                    fVar6 = (fVar6 + Global_1B3C8.f_27CD[iVar0 /*12*/].f_4);
                    break;
                
                case 13:
                    Global_1B2C6++;
                    fVar7 = (fVar7 + Global_1B3C8.f_27CD[iVar0 /*12*/].f_4);
                    break;
                
                default:
                    break;
                }
        }
        iVar0++;
    }
    if (Global_1B2AF > 0)
    {
        if (Global_1B2C0 == Global_1B2AF)
        {
            fVar1 = 55f;
        }
    }
    if (Global_1B2B0 > 0)
    {
        if (Global_1B2C1 == Global_1B2B0)
        {
            fVar2 = 10f;
        }
    }
    if (Global_1B2B1 > 0)
    {
        if (Global_1B2C2 == Global_1B2B1)
        {
            fVar3 = 0f;
        }
    }
    if (Global_1B2B2 > 0)
    {
        if (Global_1B2C3 == Global_1B2B2)
        {
            fVar4 = 10f;
        }
    }
    if (Global_1B2B3 > 0)
    {
        if (((Global_1B2C4 == Global_1B2B3 || (Global_1B2B3 * 10 / Global_1B2C4) < 41) || Global_1B2C4 > Global_1B2B6) || Global_1B2C4 == Global_1B2B6)
        {
            if (!unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_27CD.f_F10, 14))
            {
                if (Global_1B2C4 == Global_1B2B3)
                {
                    unk_0x4CC49AB39D518992(joaat("num_rndevents_completed"), Global_1B2B3, 0);
                    unk_0xA1E7A40E1F56E511(&(Global_1B3C8.f_27CD.f_F10), 14);
                }
            }
            fVar5 = 5f;
        }
    }
    if (Global_1B2B4 > 0)
    {
        if (Global_1B2C5 == Global_1B2B4)
        {
            fVar6 = 15f;
        }
    }
    if (Global_1B2B5 > 0)
    {
        if (Global_1B2C6 == Global_1B2B5)
        {
            fVar7 = 5f;
        }
    }
    Global_1B3C8.f_27CD.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
    if (Global_1B2C4 > Global_1B2B6 || Global_1B2C4 == Global_1B2B6)
    {
        iVar9 = Global_1B2B6;
    }
    else
    {
        iVar9 = Global_1B2C4;
    }
    unk_0x41410A69AD49AFCD(joaat("num_missions_completed"), Global_1B2C0, 1);
    unk_0x41410A69AD49AFCD(joaat("num_missions_available"), Global_1B2AF, 1);
    unk_0x41410A69AD49AFCD(joaat("num_minigames_completed"), Global_1B2C1, 1);
    unk_0x41410A69AD49AFCD(joaat("num_minigames_available"), Global_1B2B0, 1);
    unk_0x41410A69AD49AFCD(joaat("num_oddjobs_completed"), Global_1B2C2, 1);
    unk_0x41410A69AD49AFCD(joaat("num_oddjobs_available"), Global_1B2B1, 1);
    unk_0x41410A69AD49AFCD(joaat("num_rndpeople_completed"), Global_1B2C3, 1);
    unk_0x41410A69AD49AFCD(joaat("num_rndpeople_available"), Global_1B2B2, 1);
    unk_0x41410A69AD49AFCD(joaat("num_rndevents_completed"), iVar9, 1);
    unk_0x41410A69AD49AFCD(joaat("num_rndevents_available"), Global_1B2B6, 1);
    unk_0x41410A69AD49AFCD(joaat("num_misc_completed"), (Global_1B2C6 + Global_1B2C5), 1);
    unk_0x41410A69AD49AFCD(joaat("num_misc_available"), (Global_1B2B5 + Global_1B2B4), 1);
    Global_1B2C7 = (Global_1B2C0 * 100 / Global_1B2AF);
    Global_1B2C9 = ((Global_1B2C2 + Global_1B2C1) * 100 / (Global_1B2B1 + Global_1B2B0));
    Global_1B2C8 = ((Global_1B2C3 + iVar9) * 100 / (Global_1B2B2 + Global_1B2B6));
    Global_1B2CA = ((Global_1B2C5 + Global_1B2C6) * 100 / (Global_1B2B4 + Global_1B2B5));
    unk_0x59D058AC496948FE(joaat("total_progress_made"), Global_1B3C8.f_27CD.f_F0D, 1);
    unk_0x41410A69AD49AFCD(joaat("percent_story_missions"), Global_1B2C7, 1);
    unk_0x41410A69AD49AFCD(joaat("percent_ambient_missions"), Global_1B2C8, 1);
    unk_0x41410A69AD49AFCD(joaat("percent_oddjobs"), Global_1B2C9, 1);
    if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_1B3C8.f_27CD.f_F0D))
    {
        func_97(13, SYSTEM::FLOOR(Global_1B3C8.f_27CD.f_F0D));
    }
    if (!unk_0x8FA5860B1A123955())
    {
        if (!Global_12B21)
        {
            if (func_96() == 2 == 0 && !unk_0x393E9918BC37548A())
            {
                if (unk_0x56BDC2B0945F6D74())
                {
                    Global_1B2BE = 0;
                }
                if (!Global_F01F)
                {
                    func_79();
                }
            }
        }
    }
}

int func_96()//Position - 0x6EF9
{
    return Global_7810;
}

int func_97(int iParam0, int iParam1)//Position - 0x6F04
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

int func_98(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6F55
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
        iParam2 = func_99();
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

int func_99()//Position - 0x75A7
{
    return Global_1407E9;
}

int func_100()//Position - 0x75B3
{
    if ((func_257(41) && func_257(3)) && func_257(21))
    {
        return 1;
    }
    return 0;
}

int func_101()//Position - 0x75DE
{
    if (iLocal_42 == 0)
    {
        return func_106();
    }
    else if (iLocal_42 == 1)
    {
        return func_105();
    }
    else if (iLocal_42 == 2)
    {
        return func_102();
    }
    return 0;
}

int func_102()//Position - 0x7614
{
    if ((func_257(79) && func_257(83)) && func_103(func_104()))
    {
        return 1;
    }
    return 0;
}

int func_103(int iParam0)//Position - 0x7642
{
    if (iParam0 == 146 || iParam0 == -1)
    {
        return 0;
    }
    return Global_1B3C8.f_2378.f_63.f_3A[iParam0];
}

int func_104()//Position - 0x766F
{
    if (iLocal_42 == 0)
    {
        return 45;
    }
    else if (iLocal_42 == 1)
    {
        return 12;
    }
    else if (iLocal_42 == 2)
    {
        return 34;
    }
    return -1;
}

int func_105()//Position - 0x769F
{
    if (func_257(68))
    {
        return 1;
    }
    return 0;
}

int func_106()//Position - 0x76B5
{
    if (func_107(33, 37) >= 4)
    {
        return 1;
    }
    return 0;
}

int func_107(int iParam0, int iParam1)//Position - 0x76CD
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    iVar1 = iParam0;
    while (iVar1 <= iParam1)
    {
        if (func_257(iVar1))
        {
            iVar0++;
        }
        iVar1++;
    }
    if (func_103(func_104()))
    {
        iVar0++;
    }
    return iVar0;
}

void func_108(int iParam0)//Position - 0x770E
{
    Global_12C25 = iParam0;
    Global_12C26 = iParam0;
}

void func_109()//Position - 0x7722
{
    struct<6> Var0;
    
    if (iLocal_40 != 0)
    {
        Var0 = { func_128() };
        switch (iLocal_40)
        {
            case 1:
                if (iLocal_42 != 2)
                {
                    if (!unk_0x9591DE0F00127F2A(&Var0))
                    {
                        if (unk_0x8CD683A755F4B25E() > 0)
                        {
                            func_127("LOCAUD", Local_44.f_7);
                            func_126(1);
                            iLocal_40 = 2;
                        }
                        else if (unk_0xA2BC31158C8CEFD2(iLocal_49, 10) && unk_0x8CD683A755F4B25E() == 0)
                        {
                            func_127("LOCAUD", Local_44.f_7);
                            func_126(1);
                            iLocal_40 = 2;
                        }
                    }
                }
                else
                {
                    iLocal_40 = 0;
                }
                if (func_125())
                {
                    iLocal_40 = 3;
                }
                break;
            
            case 2:
                if (func_125())
                {
                    iLocal_40 = 3;
                }
                if (!unk_0xA2BC31158C8CEFD2(iLocal_49, 10))
                {
                    if (unk_0x8CD683A755F4B25E() >= 0)
                    {
                        func_118(Var0);
                    }
                }
                else
                {
                    iLocal_40 = 3;
                }
                break;
            
            case 3:
                if (!func_117())
                {
                    iLocal_40 = 4;
                }
                break;
            
            case 4:
                if (!func_15(0))
                {
                    if (iLocal_42 == 1)
                    {
                        func_114(Local_44.f_8);
                    }
                    iLocal_40 = 5;
                }
                break;
            
            case 5:
                if (func_89() == 0)
                {
                    if (iLocal_42 == 0)
                    {
                        if (func_101())
                        {
                            if ((func_257(74) || func_257(75)) && func_100())
                            {
                                func_110(1);
                                iLocal_40 = 0;
                            }
                            else
                            {
                                func_110(0);
                                iLocal_40 = 0;
                            }
                        }
                        else
                        {
                            iLocal_40 = 0;
                        }
                    }
                    else
                    {
                        iLocal_40 = 0;
                    }
                }
                else
                {
                    if (iLocal_42 == 0)
                    {
                        if (func_101())
                        {
                            if (!func_257(3))
                            {
                                func_87(50, 0);
                            }
                        }
                    }
                    iLocal_40 = 0;
                }
                break;
            }
    }
}

void func_110(bool bParam0)//Position - 0x789B
{
    if (bParam0)
    {
        func_111(1527885205, 0, func_89(), 23, 3, 6000, 6000, -1, 0, -1, 0);
    }
    else if (!func_257(3))
    {
        func_111(-224691627, 0, func_89(), 23, 3, 6000, 6000, -1, 50, -1, 0);
    }
    else
    {
        func_111(-224691627, 0, func_89(), 23, 3, 6000, 6000, -1, 0, -1, 0);
    }
}

int func_111(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x790C
{
    struct<15> Var0;
    int iVar1;
    
    if (func_80(0))
    {
        return 0;
    }
    if (iParam5 < 0)
    {
        return 0;
    }
    if (iParam6 < 0)
    {
        return 0;
    }
    if (iParam7 == 76)
    {
        return 0;
    }
    if (iParam8 == 235)
    {
        return 0;
    }
    if (iParam3 == iParam2)
    {
        return 0;
    }
    if (((iParam2 != 144 && iParam2 != 0) && iParam2 != 1) && iParam2 != 2)
    {
        return 0;
    }
    if (Global_1B3C8.f_1E03.f_88 < 9)
    {
        Var0 = iParam0;
        if (Global_1B3C8.f_1E03.f_38F == Var0)
        {
            Global_1B3C8.f_1E03.f_38F = -1;
        }
        Var0.f_3 = func_113(iParam1);
        Var0.f_5 = iParam6;
        Var0.f_4 = (unk_0x9B35D07DCD0F0B43() + iParam5);
        Var0.f_1 = iParam10;
        iVar1 = 0;
        unk_0xA1E7A40E1F56E511(&iVar1, iParam2);
        Var0.f_2 = iVar1;
        Var0.f_6 = iParam3;
        Var0.f_E = iParam4;
        Var0.f_A = -1;
        Var0.f_B = -1;
        Var0.f_7 = iParam7;
        Var0.f_8 = iParam8;
        Var0.f_9 = iParam9;
        unk_0xA1E7A40E1F56E511(&(Var0.f_1), 0);
        unk_0x3B76114EC84D5812(&(Var0.f_1), 1);
        if (iParam1 == 0)
        {
            unk_0xA1E7A40E1F56E511(&(Var0.f_1), 10);
        }
        Global_1B3C8.f_1E03[Global_1B3C8.f_1E03.f_88 /*15*/] = { Var0 };
        Global_1B3C8.f_1E03.f_88++;
        func_112(iParam2);
        return 1;
    }
    return 0;
}

void func_112(int iParam0)//Position - 0x7A5D
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    iVar1 = 0;
    if (!func_55(iParam0))
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

int func_113(int iParam0)//Position - 0x7B21
{
    switch (iParam0)
    {
        case 0:
        case 4:
            return 5;
            break;
        
        case 7:
            return 4;
            break;
        
        case 2:
            return 3;
            break;
        
        case 1:
            return 2;
            break;
        
        case 3:
            return 1;
            break;
        
        case 5:
        case 6:
            return 0;
            break;
    }
    return 7;
}

void func_114(int iParam0)//Position - 0x7B8B
{
    if (Global_75[iParam0 /*10*/].f_8 != 150)
    {
        func_116(iParam0, 0, 0);
        func_116(iParam0, 1, 0);
        func_116(iParam0, 2, 0);
        func_115(iParam0, 0, 0);
        func_115(iParam0, 1, 0);
        func_115(iParam0, 2, 0);
    }
}

void func_115(int iParam0, int iParam1, int iParam2)//Position - 0x7BD1
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

void func_116(int iParam0, int iParam1, int iParam2)//Position - 0x7C16
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

int func_117()//Position - 0x7C5B
{
    if (Global_5145 == 4)
    {
        if (unk_0x31634D65216B86B6())
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

void func_118(struct<6> Param0)//Position - 0x7C80
{
    if (iLocal_42 == 0)
    {
        func_123(Param0);
    }
    else if (iLocal_42 == 1)
    {
        func_119(Param0);
    }
}

void func_119(struct<6> Param0)//Position - 0x7CA7
{
    if (func_101())
    {
        func_120(Param0, 1);
    }
    else
    {
        func_120(Param0, 0);
    }
}

void func_120(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, bool bParam6)//Position - 0x7CCB
{
    struct<4> Var0;
    
    if (!unk_0x9591DE0F00127F2A(&uParam0))
    {
        if (unk_0x2553916E420E8EF0(&uParam0, Local_44.f_7))
        {
            if (unk_0x8CD683A755F4B25E() >= 0)
            {
                if (iLocal_42 == 0)
                {
                    Var0 = { func_122(bParam6) };
                    func_91(46, 1);
                    func_127(sLocal_79, &Var0);
                    func_126(1);
                }
                else if (iLocal_42 == 1)
                {
                    Var0 = { func_121(bParam6) };
                    func_127(sLocal_79, &Var0);
                    func_126(1);
                }
                iLocal_40 = 3;
            }
        }
    }
}

struct<4> func_121(bool bParam0)//Position - 0x7D3B
{
    struct<4> Var0;
    
    if (bParam0)
    {
        switch (func_89())
        {
            case 1:
                StringCopy(&Var0, "AHF_C8", 16);
                break;
            
            case 0:
                StringCopy(&Var0, "AHF_C5", 16);
                break;
        }
    }
    else
    {
        switch (func_89())
        {
            case 1:
                StringCopy(&Var0, "AHF_C9", 16);
                break;
            
            case 0:
                StringCopy(&Var0, "AHF_C6", 16);
                break;
            }
    }
    return Var0;
}

struct<4> func_122(bool bParam0)//Position - 0x7DA5
{
    struct<4> Var0;
    
    if (bParam0)
    {
        switch (func_89())
        {
            case 1:
                StringCopy(&Var0, "FBI4_ISAGO", 16);
                break;
            
            case 2:
                StringCopy(&Var0, "FBI4_ISAGO", 16);
                break;
        }
    }
    else
    {
        switch (func_89())
        {
            case 1:
                StringCopy(&Var0, "FBI4_THATSIT", 16);
                break;
            
            case 2:
                StringCopy(&Var0, "FBI4_THATSIT", 16);
                break;
            }
    }
    return Var0;
}

void func_123(struct<6> Param0)//Position - 0x7E0F
{
    if (func_101())
    {
        if (func_124())
        {
            if (func_89() != 0)
            {
                func_120(Param0, 1);
            }
            else
            {
                iLocal_40 = 3;
            }
        }
        else if (func_89() != 0)
        {
            func_120(Param0, 0);
        }
        else
        {
            iLocal_40 = 3;
        }
    }
    else
    {
        iLocal_40 = 3;
    }
}

int func_124()//Position - 0x7E5C
{
    if (iLocal_42 == 0)
    {
        if ((func_257(74) || func_257(74)) && func_100())
        {
            return 1;
        }
    }
    else if (iLocal_42 == 1)
    {
        if (func_257(68))
        {
            return 1;
        }
    }
    return 0;
}

int func_125()//Position - 0x7EA3
{
    if (Global_5176 == 1 || Global_553D == 1)
    {
        return 1;
    }
    return 0;
}

void func_126(bool bParam0)//Position - 0x7EC6
{
    unk_0x623942A4F366F9BB(bParam0);
    if (bParam0)
    {
    }
}

void func_127(char* sParam0, char* sParam1)//Position - 0x7EDA
{
    if (unk_0x31634D65216B86B6())
    {
        Global_517E = 1;
        StringCopy(&Global_5185, sParam0, 24);
        StringCopy(&Global_517F, sParam1, 24);
    }
}

struct<6> func_128()//Position - 0x7EFB
{
    struct<6> Var0;
    
    StringCopy(&Var0, "NULL", 24);
    if (Global_5145 == 4)
    {
        return Global_4FC8;
    }
    return Var0;
}

void func_129()//Position - 0x7F1F
{
    func_130();
}

void func_130()//Position - 0x7F2B
{
    func_136();
    func_131();
}

void func_131()//Position - 0x7F3B
{
    if (func_135() == 69)
    {
        if (func_134() && !func_73(25, 0))
        {
            if (Local_54.f_42 != 0)
            {
                func_56(25, &Local_54, vLocal_52, fLocal_53, 145);
            }
        }
    }
    else if (func_135() == -1)
    {
        if (!unk_0xA2BC31158C8CEFD2(iLocal_49, 1))
        {
            if (!func_76(unk_0x0FA8183DAD2B3203(), vLocal_50, 5f))
            {
                if (func_133())
                {
                    if (!unk_0x16587C6F71675106())
                    {
                        if (func_132())
                        {
                            func_69(1);
                        }
                        else if (Global_1B017)
                        {
                            func_69(2);
                        }
                        else
                        {
                            func_69(0);
                        }
                        iLocal_39 = 1;
                        fLocal_48 = 0f;
                    }
                }
            }
        }
    }
}

bool func_132()//Position - 0x7FD7
{
    return unk_0xAB2A82A2838B61B7(Global_1B3C8.f_46B2.f_18B);
}

int func_133()//Position - 0x7FED
{
    if (func_13())
    {
        if (func_89() == 0)
        {
            if (iLocal_43 == 12 || iLocal_43 == 1)
            {
                return 1;
            }
        }
        else if (iLocal_43 == 0 || iLocal_43 == 12)
        {
            return 1;
        }
    }
    return 0;
}

int func_134()//Position - 0x8036
{
    if (Global_1816D == 10 || Global_1816D == 9)
    {
        return 1;
    }
    return 0;
}

int func_135()//Position - 0x805A
{
    return Global_12C27;
}

void func_136()//Position - 0x8066
{
    if (!func_77(vLocal_52, 0f, 0f, 0f, 0) && func_135() != func_137())
    {
        if (func_76(unk_0x0FA8183DAD2B3203(), vLocal_52, 60f))
        {
            if (func_85(func_74(25)))
            {
                if (SYSTEM::VDIST2(unk_0xACE5E491FC1B0D37(func_74(25), 1), vLocal_52) >= 100f)
                {
                    func_68(0);
                }
            }
            else if (!func_73(25, 0))
            {
                func_68(1);
            }
        }
    }
}

int func_137()//Position - 0x80E1
{
    if (iLocal_42 == 0)
    {
        return 38;
    }
    else if (iLocal_42 == 1)
    {
        return 69;
    }
    else if (iLocal_42 == 2)
    {
        return 85;
    }
    return -1;
}

void func_138()//Position - 0x8111
{
    func_17();
    func_109();
}

void func_139()//Position - 0x8121
{
    int iVar0;
    
    func_223();
    func_209();
    func_175();
    func_109();
    func_174();
    if (func_170())
    {
        if (func_140(&iVar0))
        {
            func_265(0);
            if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) && unk_0x8BCE526DCE6D7629(unk_0x0FA8183DAD2B3203()))
            {
                unk_0x2DCF88AC859255F3(unk_0x0FA8183DAD2B3203(), 0, 0);
            }
            if (func_85(iLocal_51))
            {
                unk_0x54B5C3A13D3588F0(iLocal_51, 2);
            }
            func_78(iVar0, 0);
        }
    }
}

int func_140(var uParam0)//Position - 0x818C
{
    char* sVar0;
    
    if (unk_0xA2BC31158C8CEFD2(iLocal_49, 0))
    {
        func_159();
        if (func_141())
        {
            sVar0 = unk_0x0037AFCBDC61F351();
            if (!unk_0x9591DE0F00127F2A(sVar0))
            {
                if (iLocal_42 == 2)
                {
                    *uParam0 = 1;
                }
                else
                {
                    *uParam0 = 4;
                }
            }
            return 1;
        }
    }
    return 0;
}

int func_141()//Position - 0x81CF
{
    if (func_143(&uLocal_80, Local_44.f_8, sLocal_79, Local_44.f_4, 9, 1, 0, 0, 0))
    {
        iLocal_40 = 1;
        func_142(192, unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1));
        return 1;
    }
    return 0;
}

void func_142(int iParam0, vector3 vParam1)//Position - 0x8209
{
    int iVar0;
    
    if (unk_0x39A01A052D9B5FF0(Global_7987[iParam0 /*23*/].f_13))
    {
        unk_0x58531110F2DD153B(Global_7987[iParam0 /*23*/].f_13, vParam1);
    }
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 <= 2)
    {
        Global_7987[iParam0 /*23*/][iVar0 /*3*/] = { vParam1 };
        iVar0++;
    }
}

bool func_143(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x8258
{
    func_158(uParam0, uParam1, sParam2, iParam6, iParam7, 0);
    Global_5175 = 0;
    Global_514C = 1;
    Global_5153 = 0;
    Global_514E = 0;
    Global_5524 = 0;
    Global_5526 = 0;
    Global_552A = 0;
    Global_514A = 0;
    Global_5179 = 0;
    Global_517B = 0;
    if (iParam5 == 1)
    {
        Global_5151 = 1;
    }
    else
    {
        Global_5151 = 0;
    }
    Global_280001 = 0;
    return func_144(sParam3, iParam4, bParam8);
}

int func_144(char* sParam0, int iParam1, bool bParam2)//Position - 0x82B7
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
                    func_157();
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
        if (func_156(8, -1))
        {
            return 0;
        }
        Global_5191 = { Global_518B };
        func_155();
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
                func_154();
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
                if (func_153())
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
            if (func_152())
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
            func_151();
            Global_514F = bParam2;
        }
        Global_5147 = iParam1;
        StringCopy(&Global_4FC8, sParam0, 24);
        Global_4CD7 = 0;
        func_150();
        func_145();
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
        func_157();
    }
    return 0;
}

void func_145()//Position - 0x8587
{
    if (!func_146())
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

int func_146()//Position - 0x85BE
{
    if (!Global_40001.f_6D6D)
    {
        return 0;
    }
    if (!Global_12B21)
    {
        return 0;
    }
    if (unk_0x7C7787D2D7139A85() == func_149())
    {
        return 0;
    }
    if (func_147(unk_0x7C7787D2D7139A85()))
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

bool func_147(int iParam0)//Position - 0x8624
{
    return func_148(iParam0, 20);
}

bool func_148(int iParam0, int iParam1)//Position - 0x8634
{
    return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_B.f_4, iParam1);
}

int func_149()//Position - 0x864F
{
    return -1;
}

void func_150()//Position - 0x8658
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

void func_151()//Position - 0x8688
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

int func_152()//Position - 0x871D
{
    if (Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 0)
    {
        return 1;
    }
    return 0;
}

int func_153()//Position - 0x8744
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

void func_154()//Position - 0x87DD
{
    if (func_84(14))
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
        Global_4C1E = func_89();
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

void func_155()//Position - 0x887F
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

bool func_156(int iParam0, int iParam1)//Position - 0x88D5
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

void func_157()//Position - 0x8910
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

void func_158(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x8967
{
    Global_4F23 = { *uParam0 };
    Global_1A10 = uParam1;
    StringCopy(&Global_518B, sParam2, 24);
    Global_5522 = iParam5;
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

void func_159()//Position - 0x89BD
{
    int iVar0;
    
    iVar0 = func_89();
    func_160(iVar0, func_169(iVar0));
}

void func_160(int iParam0, var uParam1)//Position - 0x89D7
{
    int iVar0;
    
    switch (iParam0)
    {
        case 0:
            Local_44 = 0;
            Local_44.f_1 = "MICHAEL";
            if (iLocal_42 == 0)
            {
                Local_44.f_2 = 1;
                Local_44.f_3 = "FRANKLIN";
                Local_44.f_8 = 5;
            }
            else
            {
                Local_44.f_2 = 3;
                Local_44.f_3 = "LESTER";
                if (iLocal_42 == 1)
                {
                    Local_44.f_8 = 6;
                }
                else
                {
                    Local_44.f_8 = 12;
                }
            }
            Local_44.f_5 = "FBI_3_FRESP";
            func_167(iParam0);
            break;
        
        case 1:
            Local_44 = 1;
            Local_44.f_1 = "FRANKLIN";
            if (iLocal_42 == 0)
            {
                Local_44.f_2 = 0;
                Local_44.f_3 = "MICHAEL";
                Local_44.f_8 = 9;
            }
            else
            {
                Local_44.f_2 = 3;
                Local_44.f_3 = "LESTER";
                if (iLocal_42 == 1)
                {
                    Local_44.f_8 = 7;
                }
                else
                {
                    Local_44.f_8 = 12;
                }
            }
            Local_44.f_5 = "FBI_3_MRESP";
            func_167(iParam0);
            break;
        
        case 2:
            Local_44 = 2;
            Local_44.f_1 = "TREVOR";
            if (iLocal_42 == 0)
            {
                Local_44.f_2 = 0;
                Local_44.f_3 = "MICHAEL";
                Local_44.f_8 = 8;
            }
            else
            {
                Local_44.f_2 = 3;
                Local_44.f_3 = "LESTER";
                if (iLocal_42 == 1)
                {
                    Local_44.f_8 = 7;
                }
                else
                {
                    Local_44.f_8 = 12;
                }
            }
            Local_44.f_5 = "FBI_3_MRESP";
            func_167(iParam0);
            break;
    }
    if (iLocal_42 == 1)
    {
        if (iParam0 == 0)
        {
            iVar0 = 0;
        }
        else
        {
            iVar0 = 1;
        }
        func_162(Local_44.f_8, iVar0, 0);
    }
    func_161(&uLocal_80, Local_44, unk_0x0FA8183DAD2B3203(), Local_44.f_1, 0, 1);
    func_161(&uLocal_80, Local_44.f_2, 0, Local_44.f_3, 0, 1);
    Local_44.f_4 = uParam1;
}

void func_161(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x8B4D
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

void func_162(int iParam0, int iParam1, bool bParam2)//Position - 0x8BE8
{
    int iVar0;
    
    Global_1F6A = iParam0;
    if (Global_75[iParam0 /*10*/].f_8 != 150)
    {
        func_154();
        if (iParam1 == 4)
        {
            func_116(iParam0, 0, 1);
            func_116(iParam0, 1, 1);
            func_116(iParam0, 2, 1);
            func_115(iParam0, 0, 1);
            func_115(iParam0, 1, 1);
            func_115(iParam0, 2, 1);
        }
        else
        {
            if (func_166(iParam0, iParam1) == 1 && func_165(iParam0, iParam1) == 1)
            {
                bParam2 = false;
            }
            iVar0 = iParam1;
            func_116(iParam0, iVar0, 1);
            func_115(iParam0, iVar0, 1);
        }
        if (bParam2)
        {
            if (!Global_12B21)
            {
                if (iParam1 != 4)
                {
                    if (Global_4C1E != iParam1)
                    {
                        Global_1F4F[iParam1 /*4*/] = { func_164(iParam0) };
                        Global_1F60[iParam1] = 1;
                        Global_1F65[iParam1] = iParam0;
                    }
                    else if (iParam0 == Global_4C1E)
                    {
                    }
                    else
                    {
                        Global_1F1E[1 /*6*/] = { func_164(iParam0) };
                        Global_1F1E[1 /*6*/].f_5 = iParam1;
                        func_163();
                    }
                }
                else
                {
                    Global_1F1E[1 /*6*/] = { func_164(iParam0) };
                    Global_1F1E[1 /*6*/].f_5 = iParam1;
                    func_163();
                }
            }
            else
            {
                Global_1F1E[1 /*6*/] = { func_164(iParam0) };
                Global_1F1E[1 /*6*/].f_5 = iParam1;
                func_163();
            }
        }
    }
}

void func_163()//Position - 0x8D18
{
    char cVar0[64];
    char cVar1[64];
    char* sVar2;
    
    StringCopy(&cVar0, unk_0xD54FB72F71EFE6C4(&(Global_706[Global_1F6A /*29*/].f_7)), 64);
    if (Global_1F7D == 0)
    {
        unk_0x6C607B5286DEE8D9("");
        StringCopy(&cVar1, unk_0xD54FB72F71EFE6C4(&(Global_1F1E[1 /*6*/])), 64);
        sVar2 = unk_0xD54FB72F71EFE6C4("CELL_253");
        unk_0x480C449653B881B1(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
    }
    else
    {
        unk_0x6C607B5286DEE8D9("CELL_255");
        unk_0x0AC9F8E1AFCEC860(&(Global_1F1E[1 /*6*/]));
        unk_0x480C449653B881B1(&cVar0, &cVar0, 0, 3, "", 0);
    }
    unk_0x3B76114EC84D5812(&Global_1CBC, 0);
}

struct<4> func_164(int iParam0)//Position - 0x8D91
{
    return Global_706[iParam0 /*29*/].f_3;
}

int func_165(int iParam0, int iParam1)//Position - 0x8DA4
{
    if (iParam1 < 0 || iParam1 > 4)
    {
        return 0;
    }
    return Global_706[iParam0 /*29*/].f_18[iParam1];
}

int func_166(int iParam0, int iParam1)//Position - 0x8DCE
{
    if (iParam1 < 0 || iParam1 > 4)
    {
        return 0;
    }
    return Global_706[iParam0 /*29*/].f_C[iParam1];
}

void func_167(int iParam0)//Position - 0x8DF8
{
    Local_44.f_6 = unk_0xBB148FDFDB97778E(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1));
    func_168(iParam0);
}

void func_168(int iParam0)//Position - 0x8E17
{
    if (!unk_0x9591DE0F00127F2A(Local_44.f_6))
    {
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "SanAnd"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M77";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F78";
            }
            else
            {
                Local_44.f_7 = "LOC_T78";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Alamo"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M101";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F1";
            }
            else
            {
                Local_44.f_7 = "LOC_T1";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Alta"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M1";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F2";
            }
            else
            {
                Local_44.f_7 = "LOC_T2";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Airp"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M48";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F49";
            }
            else
            {
                Local_44.f_7 = "LOC_T49";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "ArmyB"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M28";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F29";
            }
            else
            {
                Local_44.f_7 = "LOC_T29";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "BhamCa"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M2";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F3";
            }
            else
            {
                Local_44.f_7 = "LOC_T3";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Banning"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M3";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F4";
            }
            else
            {
                Local_44.f_7 = "LOC_T4";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Baytre"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M4";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F5";
            }
            else
            {
                Local_44.f_7 = "LOC_T5";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Beach"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M93";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F94";
            }
            else
            {
                Local_44.f_7 = "LOC_T94";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "BradT"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M7";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F8";
            }
            else
            {
                Local_44.f_7 = "LOC_T8";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "BradP"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M6";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F7";
            }
            else
            {
                Local_44.f_7 = "LOC_T7";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Burton"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M8";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F9";
            }
            else
            {
                Local_44.f_7 = "LOC_T9";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "CANNY"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M70";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F71";
            }
            else
            {
                Local_44.f_7 = "LOC_T71";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "CCreak"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M10";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F11";
            }
            else
            {
                Local_44.f_7 = "LOC_T11";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "CalafB"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M9";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F10";
            }
            else
            {
                Local_44.f_7 = "LOC_T10";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "ChamH"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M11";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F12";
            }
            else
            {
                Local_44.f_7 = "LOC_T12";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "CHU"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M13";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F14";
            }
            else
            {
                Local_44.f_7 = "LOC_T14";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "CHIL"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M96";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F97";
            }
            else
            {
                Local_44.f_7 = "LOC_T97";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "COSI"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M14";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F15";
            }
            else
            {
                Local_44.f_7 = "LOC_T15";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "CMSW"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M12";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F13";
            }
            else
            {
                Local_44.f_7 = "LOC_T13";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Cypre"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M15";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F16";
            }
            else
            {
                Local_44.f_7 = "LOC_T16";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Davis"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M16";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F17";
            }
            else
            {
                Local_44.f_7 = "LOC_T17";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Desrt"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M32";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F33";
            }
            else
            {
                Local_44.f_7 = "LOC_T33";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "DelBe"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M19";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F20";
            }
            else
            {
                Local_44.f_7 = "LOC_T20";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "DelPe"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M18";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F19";
            }
            else
            {
                Local_44.f_7 = "LOC_T19";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "DelSol"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M41";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F42";
            }
            else
            {
                Local_44.f_7 = "LOC_T42";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Downt"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M20";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F21";
            }
            else
            {
                Local_44.f_7 = "LOC_T21";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "DTVine"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M21";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F22";
            }
            else
            {
                Local_44.f_7 = "LOC_T22";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Eclips"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M24";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F25";
            }
            else
            {
                Local_44.f_7 = "LOC_T25";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "ELSant"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M22";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F23";
            }
            else
            {
                Local_44.f_7 = "LOC_T23";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "EBuro"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M25";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F26";
            }
            else
            {
                Local_44.f_7 = "LOC_T26";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "ELGorl"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M26";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F27";
            }
            else
            {
                Local_44.f_7 = "LOC_T27";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Elysian"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M27";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F28";
            }
            else
            {
                Local_44.f_7 = "LOC_T28";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Galli"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M31";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F32";
            }
            else
            {
                Local_44.f_7 = "LOC_T32";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Galfish"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M29";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F30";
            }
            else
            {
                Local_44.f_7 = "LOC_T30";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Greatc"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M34";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F35";
            }
            else
            {
                Local_44.f_7 = "LOC_T35";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Golf"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M35";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F36";
            }
            else
            {
                Local_44.f_7 = "LOC_T36";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "GrapeS"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M33";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F34";
            }
            else
            {
                Local_44.f_7 = "LOC_T34";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Hawick"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M37";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F38";
            }
            else
            {
                Local_44.f_7 = "LOC_T38";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Harmo"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M36";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F37";
            }
            else
            {
                Local_44.f_7 = "LOC_T37";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Heart"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M38";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F39";
            }
            else
            {
                Local_44.f_7 = "LOC_T39";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "HumLab"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M39";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F40";
            }
            else
            {
                Local_44.f_7 = "LOC_T40";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "HORS"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M97";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F98";
            }
            else
            {
                Local_44.f_7 = "LOC_T98";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Koreat"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M46";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F47";
            }
            else
            {
                Local_44.f_7 = "LOC_T47";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Jail"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M5";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F6";
            }
            else
            {
                Local_44.f_7 = "LOC_T6";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "LAct"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M45";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F46";
            }
            else
            {
                Local_44.f_7 = "LOC_T46";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "LDam"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M44";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F45";
            }
            else
            {
                Local_44.f_7 = "LOC_T45";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Lago"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M43";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F44";
            }
            else
            {
                Local_44.f_7 = "LOC_T44";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "LegSqu"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F";
            }
            else
            {
                Local_44.f_7 = "LOC_T";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "LosSF"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M47";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F48";
            }
            else
            {
                Local_44.f_7 = "LOC_T48";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "LMesa"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M40";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F41";
            }
            else
            {
                Local_44.f_7 = "LOC_T41";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "LosPuer"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M41";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F42";
            }
            else
            {
                Local_44.f_7 = "LOC_T42";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "LosPFy"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M42";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F43";
            }
            else
            {
                Local_44.f_7 = "LOC_T43";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "LOSTMC"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F";
            }
            else
            {
                Local_44.f_7 = "LOC_T";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Mirr"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M50";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F51";
            }
            else
            {
                Local_44.f_7 = "LOC_T51";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Morn"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M52";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F53";
            }
            else
            {
                Local_44.f_7 = "LOC_T53";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Murri"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M56";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F57";
            }
            else
            {
                Local_44.f_7 = "LOC_T57";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "MTChil"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M53";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F54";
            }
            else
            {
                Local_44.f_7 = "LOC_T54";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "MTJose"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M55";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F56";
            }
            else
            {
                Local_44.f_7 = "LOC_T56";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "MTGordo"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M54";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F55";
            }
            else
            {
                Local_44.f_7 = "LOC_T55";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Movie"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M72";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F73";
            }
            else
            {
                Local_44.f_7 = "LOC_T73";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "NCHU"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M57";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F58";
            }
            else
            {
                Local_44.f_7 = "LOC_T58";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Noose"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M84";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F85";
            }
            else
            {
                Local_44.f_7 = "LOC_T85";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Oceana"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M60";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F61";
            }
            else
            {
                Local_44.f_7 = "LOC_T61";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Observ"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M30";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F31";
            }
            else
            {
                Local_44.f_7 = "LOC_T31";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Palmpow"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M64";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F65";
            }
            else
            {
                Local_44.f_7 = "LOC_T65";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "PBOX"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M66";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F67";
            }
            else
            {
                Local_44.f_7 = "LOC_T67";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "PBluff"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M59";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F60";
            }
            else
            {
                Local_44.f_7 = "LOC_T60";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Paleto"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M61";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F62";
            }
            else
            {
                Local_44.f_7 = "LOC_T62";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "PalCov"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M62";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F63";
            }
            else
            {
                Local_44.f_7 = "LOC_T63";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "PalFor"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M63";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F64";
            }
            else
            {
                Local_44.f_7 = "LOC_T64";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "PalHigh"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M65";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F66";
            }
            else
            {
                Local_44.f_7 = "LOC_T66";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "ProcoB"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M68";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F69";
            }
            else
            {
                Local_44.f_7 = "LOC_T69";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Prol"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M58";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F59";
            }
            else
            {
                Local_44.f_7 = "LOC_T59";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "RTRAK"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M71";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F72";
            }
            else
            {
                Local_44.f_7 = "LOC_T72";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Rancho"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M69";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F70";
            }
            else
            {
                Local_44.f_7 = "LOC_T70";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "RGLEN"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M74";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F75";
            }
            else
            {
                Local_44.f_7 = "LOC_T75";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Richm"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M73";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F74";
            }
            else
            {
                Local_44.f_7 = "LOC_T74";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Rockf"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M75";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F76";
            }
            else
            {
                Local_44.f_7 = "LOC_T76";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "SANDY"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M79";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F80";
            }
            else
            {
                Local_44.f_7 = "LOC_T80";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "TongvaH"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M87";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F88";
            }
            else
            {
                Local_44.f_7 = "LOC_T88";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "TongvaV"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M88";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F89";
            }
            else
            {
                Local_44.f_7 = "LOC_T89";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "East_V"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M23";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F24";
            }
            else
            {
                Local_44.f_7 = "LOC_T24";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Zenora"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M80";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F81";
            }
            else
            {
                Local_44.f_7 = "LOC_T81";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Slab"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M81";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F82";
            }
            else
            {
                Local_44.f_7 = "LOC_T82";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "SKID"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M51";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F52";
            }
            else
            {
                Local_44.f_7 = "LOC_T52";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "SLSant"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M82";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F83";
            }
            else
            {
                Local_44.f_7 = "LOC_T83";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Stad"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M49";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F50";
            }
            else
            {
                Local_44.f_7 = "LOC_T50";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Tatamo"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M84";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F85";
            }
            else
            {
                Local_44.f_7 = "LOC_T85";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Termina"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M85";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F86";
            }
            else
            {
                Local_44.f_7 = "LOC_T86";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "TEXTI"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M86";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F87";
            }
            else
            {
                Local_44.f_7 = "LOC_T87";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "WVine"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M99";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F100";
            }
            else
            {
                Local_44.f_7 = "LOC_T100";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "UtopiaG"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M89";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F90";
            }
            else
            {
                Local_44.f_7 = "LOC_T90";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Vesp"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M92";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F93";
            }
            else
            {
                Local_44.f_7 = "LOC_T93";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "VCana"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M94";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F95";
            }
            else
            {
                Local_44.f_7 = "LOC_T95";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Vine"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M95";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F96";
            }
            else
            {
                Local_44.f_7 = "LOC_T96";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "WMirror"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M98";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F99";
            }
            else
            {
                Local_44.f_7 = "LOC_T99";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "WindF"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M76";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F77";
            }
            else
            {
                Local_44.f_7 = "LOC_T77";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "Zancudo"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M100";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F101";
            }
            else
            {
                Local_44.f_7 = "LOC_T101";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "SanChia"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M78";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F79";
            }
            else
            {
                Local_44.f_7 = "LOC_T79";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "STRAW"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M83";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F84";
            }
            else
            {
                Local_44.f_7 = "LOC_T84";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "zQ_UAR"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M17";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F18";
            }
            else
            {
                Local_44.f_7 = "LOC_T18";
            }
            return;
        }
        if (unk_0x2553916E420E8EF0(Local_44.f_6, "ZP_ORT"))
        {
            if (iParam0 == 0)
            {
                Local_44.f_7 = "LOC_M67";
            }
            else if (iParam0 == 1)
            {
                Local_44.f_7 = "LOC_F68";
            }
            else
            {
                Local_44.f_7 = "LOC_T68";
            }
            return;
        }
        if (iParam0 == 0)
        {
            Local_44.f_7 = "LOC_M";
        }
        else if (iParam0 == 1)
        {
            Local_44.f_7 = "LOC_M";
        }
        else
        {
            Local_44.f_7 = "LOC_M";
        }
    }
    else if (iParam0 == 0)
    {
        Local_44.f_7 = "LOC_M";
    }
    else if (iParam0 == 1)
    {
        Local_44.f_7 = "LOC_F";
    }
    else
    {
        Local_44.f_7 = "LOC_T";
    }
}

char* func_169(int iParam0)//Position - 0xA6A6
{
    char* sVar0;
    
    if (!unk_0xA2BC31158C8CEFD2(iLocal_49, 10))
    {
        if (iLocal_42 == 0)
        {
            sLocal_79 = "FBIPRAU";
        }
        else if (iLocal_42 == 1)
        {
            sLocal_79 = "AHFAUD";
        }
        else if (iLocal_42 == 2)
        {
            sLocal_79 = "FHFAUD";
        }
        if (iLocal_42 == 0)
        {
            if (iParam0 == 0)
            {
                sVar0 = "FBI_3_MDRPC";
            }
            else if (iParam0 == 1)
            {
                sVar0 = "FBI_3_FDRPC";
            }
            else if (iParam0 == 2)
            {
                sVar0 = "FBI_3_TDRPC";
            }
        }
        else if (iLocal_42 == 1)
        {
            if (iParam0 == 0)
            {
                sVar0 = "AH_MDRPC";
            }
            else if (iParam0 == 1)
            {
                sVar0 = "AH_FDRPC";
            }
            else if (iParam0 == 2)
            {
                sVar0 = "AH_TDRPC";
            }
        }
        else if (iLocal_42 == 2)
        {
            if (iParam0 == 0)
            {
                sVar0 = "FHP_PICKCM";
            }
            else if (iParam0 == 1)
            {
                sVar0 = "FHP_PICKCF";
            }
            else if (iParam0 == 2)
            {
                sVar0 = "FHP_PICKCT";
            }
        }
    }
    else
    {
        sLocal_79 = "FHFAUD";
        if (iParam0 == 0)
        {
            sVar0 = "FHP_MOVEM";
        }
        else if (iParam0 == 1)
        {
            sVar0 = "FHP_MOVEF";
        }
        else if (iParam0 == 2)
        {
            sVar0 = "FHP_MOVET";
        }
    }
    return sVar0;
}

int func_170()//Position - 0xA7B3
{
    if (unk_0xA2BC31158C8CEFD2(iLocal_49, 0))
    {
        if (func_85(iLocal_51))
        {
            if (unk_0xA2BC31158C8CEFD2(iLocal_49, 1))
            {
                if ((func_173(0) || func_173(12)) || func_173(1))
                {
                    func_171();
                    func_1(46, 1);
                    return 1;
                }
            }
        }
    }
    return 0;
}

void func_171()//Position - 0xA807
{
    if (!unk_0xA2BC31158C8CEFD2(iLocal_49, 6))
    {
        if (func_85(iLocal_51))
        {
            vLocal_52 = { unk_0xACE5E491FC1B0D37(iLocal_51, 1) };
            fLocal_53 = unk_0xD2809C7F7FD79247(iLocal_51);
            unk_0xA1E7A40E1F56E511(&iLocal_49, 6);
            unk_0xA1E7A40E1F56E511(&iLocal_49, 2);
            func_62(iLocal_51, &Local_54);
            func_21(iLocal_51, vLocal_52, fLocal_53, 25, 1);
            unk_0xA1E7A40E1F56E511(&iLocal_49, 14);
            func_172(iLocal_51);
        }
    }
}

int func_172(int iParam0)//Position - 0xA86A
{
    if (!unk_0x145DAE1A4D0EA05D(iParam0, "IgnoredByQuickSave"))
    {
        if (unk_0x7D209FC24D3550F6(iParam0, "IgnoredByQuickSave", 1))
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

int func_173(int iParam0)//Position - 0xA89A
{
    if (Global_55A0 == 0)
    {
        return 0;
    }
    if (Global_75[iParam0 /*10*/].f_8 != 150)
    {
        if (Global_4C1E.f_1 == 10)
        {
            if (Global_1A0F == iParam0)
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
            return 0;
        }
    }
    return 0;
}

void func_174()//Position - 0xA8E3
{
    if (unk_0xA2BC31158C8CEFD2(iLocal_49, 0) && unk_0xA2BC31158C8CEFD2(iLocal_49, 1))
    {
        if (!unk_0xA2BC31158C8CEFD2(iLocal_49, 11))
        {
            func_265(1);
        }
    }
    else if (unk_0xA2BC31158C8CEFD2(iLocal_49, 11))
    {
        func_265(0);
    }
}

void func_175()//Position - 0xA925
{
    if ((unk_0xA2BC31158C8CEFD2(iLocal_49, 0) && Global_A1B4 == 15) && !func_208())
    {
        if (iLocal_38 == 0)
        {
            if (!unk_0xA2BC31158C8CEFD2(iLocal_49, 1) && unk_0xA2BC31158C8CEFD2(iLocal_49, 0))
            {
                if (!func_76(unk_0x0FA8183DAD2B3203(), vLocal_50, 5f))
                {
                    if (unk_0xA2BC31158C8CEFD2(iLocal_49, 20) || func_133())
                    {
                        if ((func_250(unk_0x0FA8183DAD2B3203()) && !unk_0xA2BC31158C8CEFD2(uLocal_47[0], 17)) && !unk_0xA2BC31158C8CEFD2(uLocal_47[1], 18))
                        {
                            if (unk_0x8BCE526DCE6D7629(unk_0x0FA8183DAD2B3203()))
                            {
                                func_207(24, 46);
                                if (unk_0xA2BC31158C8CEFD2(iLocal_49, 0))
                                {
                                    if (!func_205() && func_185(unk_0xACE5E491FC1B0D37(iLocal_51, 1)))
                                    {
                                        if (func_182(iLocal_51))
                                        {
                                            if (func_181(iLocal_51))
                                            {
                                                unk_0xA1E7A40E1F56E511(&iLocal_49, 1);
                                                if (func_70(unk_0x0FA8183DAD2B3203()) == 0)
                                                {
                                                    func_69(7);
                                                    func_1(7, 1);
                                                }
                                                else
                                                {
                                                    func_69(8);
                                                    func_1(8, 1);
                                                }
                                                vLocal_50 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
                                                return;
                                            }
                                        }
                                    }
                                    if (unk_0xA2BC31158C8CEFD2(iLocal_49, 20))
                                    {
                                        func_1(46, 0);
                                        unk_0x3B76114EC84D5812(&iLocal_49, 20);
                                        iLocal_245 = -1;
                                    }
                                    vLocal_50 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
                                }
                            }
                            else if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
                            {
                                func_207(7, 8);
                                if (unk_0xA2BC31158C8CEFD2(iLocal_49, 20))
                                {
                                    unk_0x3B76114EC84D5812(&iLocal_49, 20);
                                    iLocal_245 = -1;
                                }
                                else
                                {
                                    func_69(24);
                                }
                            }
                        }
                    }
                    else if (!func_13())
                    {
                        if ((unk_0x8BCE526DCE6D7629(unk_0x0FA8183DAD2B3203()) && unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0)) && !unk_0xA2BC31158C8CEFD2(iLocal_49, 20))
                        {
                            if (iLocal_245 != -1)
                            {
                                if ((unk_0x9B35D07DCD0F0B43() - iLocal_245) > 1000)
                                {
                                    unk_0xA1E7A40E1F56E511(&iLocal_49, 20);
                                }
                            }
                            else
                            {
                                iLocal_245 = unk_0x9B35D07DCD0F0B43();
                            }
                        }
                        else
                        {
                            unk_0x3B76114EC84D5812(&iLocal_49, 20);
                        }
                    }
                }
                else if (func_13())
                {
                    vLocal_50 = { 0f, 0f, 0f };
                }
            }
            else if (unk_0xA2BC31158C8CEFD2(iLocal_49, 0))
            {
                if (!func_76(unk_0x0FA8183DAD2B3203(), vLocal_50, 10f))
                {
                    unk_0x3B76114EC84D5812(&iLocal_49, 1);
                }
                else if (!unk_0x8BCE526DCE6D7629(unk_0x0FA8183DAD2B3203()))
                {
                    if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
                    {
                        if (!unk_0xA2BC31158C8CEFD2(iLocal_49, 20))
                        {
                            func_69(24);
                        }
                        func_1(24, 1);
                        unk_0x3B76114EC84D5812(&iLocal_49, 1);
                        func_177(0);
                    }
                }
                else if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
                {
                    if (func_85(iLocal_51))
                    {
                        if (unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0) != iLocal_51)
                        {
                            func_1(46, 0);
                            func_177(0);
                            func_176();
                        }
                    }
                }
            }
        }
    }
}

void func_176()//Position - 0xABB5
{
    unk_0x3B76114EC84D5812(&iLocal_49, 0);
    unk_0x3B76114EC84D5812(&iLocal_49, 8);
    unk_0x3B76114EC84D5812(&iLocal_49, 7);
}

void func_177(int iParam0)//Position - 0xABD3
{
    if (func_180())
    {
        return;
    }
    if (Global_4CD0)
    {
        if (func_179())
        {
            func_178(1, 1);
        }
        else
        {
            func_178(0, 0);
        }
    }
    if (Global_4C1E.f_1 == 10 || Global_4C1E.f_1 == 9)
    {
        unk_0xA1E7A40E1F56E511(&Global_1CBD, 16);
    }
    if (unk_0x31634D65216B86B6())
    {
        unk_0x623942A4F366F9BB(false);
    }
    Global_5145 = 5;
    if (iParam0 == 1)
    {
        unk_0xA1E7A40E1F56E511(&Global_1CBC, 30);
    }
    else
    {
        unk_0x3B76114EC84D5812(&Global_1CBC, 30);
    }
    if (!func_152())
    {
        Global_4C1E.f_1 = 3;
    }
}

void func_178(bool bParam0, bool bParam1)//Position - 0xAC5D
{
    if (bParam0)
    {
        if (func_15(0))
        {
            Global_4CD0 = 1;
            if (bParam1)
            {
                unk_0xB1B52CCC3333E09F(&Global_4BDF);
            }
            Global_4BD6 = { Global_4BE8[Global_4BE7 /*3*/] };
            unk_0x4577629BF7B43F7F(Global_4BD6);
        }
    }
    else if (Global_4CD0 == 1)
    {
        Global_4CD0 = 0;
        Global_4BD6 = { Global_4BEF[Global_4BE7 /*3*/] };
        if (bParam1)
        {
            unk_0x4577629BF7B43F7F(Global_4BDF);
        }
        else
        {
            unk_0x4577629BF7B43F7F(Global_4BD6);
        }
    }
}

bool func_179()//Position - 0xACD1
{
    return unk_0xA2BC31158C8CEFD2(Global_19C148, 5);
}

bool func_180()//Position - 0xACE2
{
    return unk_0xA2BC31158C8CEFD2(Global_19C148, 19);
}

int func_181(int iParam0)//Position - 0xACF4
{
    vector3 vVar0;
    
    if (unk_0xF0B9188ED2464C51(iParam0))
    {
        func_69(39);
        return 0;
    }
    if (!unk_0x6C7A7AC0F0B0B1C0(unk_0x0FA8183DAD2B3203(), iParam0, -1, 0, 0) && !unk_0x6C7A7AC0F0B0B1C0(unk_0x0FA8183DAD2B3203(), iParam0, 0, 0, 0))
    {
        func_69(37);
        return 0;
    }
    if (unk_0xE294A1321110B3E9(iParam0))
    {
        func_69(36);
        return 0;
    }
    vVar0 = { unk_0x762900E9B9F74FD4(iParam0, 2) };
    if (vVar0.x >= 10f || vVar0.x <= -10f)
    {
        func_69(42);
        return 0;
    }
    else if (vVar0.y >= 15f || vVar0.y <= -15f)
    {
        func_69(43);
        return 0;
    }
    return 1;
}

int func_182(int iParam0)//Position - 0xADA9
{
    int iVar0;
    vector3 vVar1;
    vector3 vVar2;
    
    iVar0 = 0;
    if (iParam0 != 0)
    {
        if (func_85(iParam0))
        {
            unk_0xB10397B050DB322E(unk_0x7F375072508F738F(iParam0), &vVar1, &vVar2);
            vVar1 = { vVar1 + Vector(-1f, -1f, -2f) };
            vVar2 = { vVar2 + Vector(1f, 1f, 2f) };
            if (!unk_0x43EEA7C1DCB1F872(unk_0xC12F91346EA13947(iParam0, vVar1), unk_0xC12F91346EA13947(iParam0, vVar2), 0, 1, 0, 0, 0, iParam0, 0))
            {
                iVar0++;
            }
            else if (func_13())
            {
                func_69(38);
            }
            if (!func_184())
            {
                iVar0++;
            }
            else if (func_13())
            {
                func_69(35);
            }
            if (iVar0 == 2)
            {
                if (func_183(unk_0xACE5E491FC1B0D37(iParam0, 1)))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int func_183(vector3 vParam0)//Position - 0xAE5E
{
    float fVar0;
    float fVar1;
    vector3 vVar2;
    
    vVar2 = { vParam0 + Vector(3.2f, 0f, 0f) };
    if (unk_0xDF956C4106F1E9C5(vVar2, &fVar0, 0, 0) && unk_0xDF956C4106F1E9C5(vParam0, &fVar1, 0, 0))
    {
        if (unk_0x01CBD71E072E9F33((fVar0 - fVar1)) < 0.9f)
        {
            return 1;
        }
    }
    if (func_13())
    {
        func_69(37);
    }
    return 0;
}

int func_184()//Position - 0xAEBA
{
    var uVar0[5];
    int iVar1;
    
    unk_0xB7AEB865047E4CC6(unk_0x0FA8183DAD2B3203(), &uVar0, -1);
    iVar1 = 0;
    while (iVar1 <= 4)
    {
        if (func_250(uVar0[iVar1]) && uVar0[iVar1] != unk_0x0FA8183DAD2B3203())
        {
            if (SYSTEM::VDIST2(vLocal_50, unk_0xACE5E491FC1B0D37(uVar0[iVar1], 1)) <= 16f)
            {
                return 1;
            }
        }
        iVar1++;
    }
    return 0;
}

int func_185(vector3 vParam0)//Position - 0xAF23
{
    if (!func_201() && !func_200(vParam0))
    {
        if (!func_197())
        {
            if (!func_193(vParam0))
            {
                if (!func_191(vParam0) && !func_186(vParam0))
                {
                    return 1;
                }
            }
            else
            {
                func_69(0);
            }
        }
    }
    return 0;
}

int func_186(vector3 vParam0)//Position - 0xAF7C
{
    if (func_189(vParam0) || func_187(vParam0))
    {
        if (func_13())
        {
            func_69(22);
        }
        return 1;
    }
    return 0;
}

int func_187(vector3 vParam0)//Position - 0xAFAF
{
    float fVar0;
    
    fVar0 = SYSTEM::VDIST2(vParam0, Global_16E8E[func_188(vParam0, 0) /*9*/].f_3);
    if (fVar0 <= 40000f)
    {
        return 1;
    }
    return 0;
}

int func_188(vector3 vParam0, bool bParam1)//Position - 0xAFE4
{
    int iVar0;
    float fVar1;
    float fVar2;
    int iVar3;
    
    fVar2 = 1000000f;
    iVar3 = 7;
    iVar0 = 0;
    while (iVar0 <= (7 - 1))
    {
        if (Global_16E8E[iVar0 /*9*/].f_7 != 263)
        {
            if (!bParam1 || unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_1C38.f_11[iVar0], 0))
            {
                fVar1 = unk_0xD34AF93E9BCF12F0(vParam0, Global_16E8E[iVar0 /*9*/].f_3, true);
                if (fVar1 < fVar2)
                {
                    fVar2 = fVar1;
                    iVar3 = iVar0;
                }
            }
        }
        iVar0++;
    }
    return iVar3;
}

int func_189(vector3 vParam0)//Position - 0xB061
{
    float fVar0;
    
    fVar0 = SYSTEM::VDIST2(vParam0, Global_16ECE[func_190(vParam0, 0) /*9*/].f_3);
    if (fVar0 <= 40000f)
    {
        return 1;
    }
    return 0;
}

int func_190(vector3 vParam0, bool bParam1)//Position - 0xB096
{
    int iVar0;
    float fVar1;
    float fVar2;
    int iVar3;
    
    fVar2 = 1E+07f;
    iVar3 = 5;
    iVar0 = 0;
    while (iVar0 <= (5 - 1))
    {
        if (Global_16ECE[iVar0 /*9*/].f_7 != 263)
        {
            if (!bParam1 || unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_1C38.f_B[iVar0], 0))
            {
                fVar1 = unk_0xD34AF93E9BCF12F0(vParam0, Global_16ECE[iVar0 /*9*/].f_3, true);
                if (fVar1 < fVar2)
                {
                    fVar2 = fVar1;
                    iVar3 = iVar0;
                }
            }
        }
        iVar0++;
    }
    return iVar3;
}

int func_191(vector3 vParam0)//Position - 0xB113
{
    vector3 vVar0;
    float fVar1;
    
    if (unk_0x07A2655A0FA4F1A2(vParam0, &vVar0, 0, 1077936128, 0))
    {
        fVar1 = SYSTEM::VDIST2(vParam0, vVar0);
        if (fVar1 >= 400f || !func_192(vParam0, vVar0))
        {
            return 0;
        }
        else if (fVar1 < 20f && fVar1 > 6f)
        {
            if (func_13())
            {
                func_69(40);
            }
            return 1;
        }
        else
        {
            if (func_13())
            {
                func_69(41);
            }
            return 1;
        }
    }
    return 0;
}

int func_192(vector3 vParam0, vector3 vParam1)//Position - 0xB19C
{
    float fVar0;
    
    fVar0 = unk_0x01CBD71E072E9F33((vParam0.z - vParam1.z));
    if (fVar0 <= 5f)
    {
        return 1;
    }
    return 0;
}

int func_193(vector3 vParam0)//Position - 0xB1BF
{
    if (!func_196(1))
    {
        if (!func_196(0))
        {
            if (func_194(vParam0, 0))
            {
                return 1;
            }
        }
        else if (func_194(vParam0, 1))
        {
            return 1;
        }
    }
    if (!func_196(7))
    {
        if (!func_196(4))
        {
            if (func_194(vParam0, 4))
            {
                return 1;
            }
        }
        else
        {
            if (func_194(vParam0, 5))
            {
                return 1;
            }
            if (func_194(vParam0, 6))
            {
                return 1;
            }
        }
    }
    if (func_194(vParam0, 2))
    {
        return 1;
    }
    if (func_194(vParam0, 3))
    {
        return 1;
    }
    if (!func_196(8))
    {
        if (func_194(vParam0, 8))
        {
            return 1;
        }
    }
    if (!func_196(16))
    {
        if (func_194(vParam0, 16))
        {
            return 1;
        }
        if (!func_196(15))
        {
            if (func_194(vParam0, 15))
            {
                return 1;
            }
            if (!func_196(14))
            {
                if (func_194(vParam0, 14))
                {
                    return 1;
                }
                if (!func_196(13))
                {
                    if (func_194(vParam0, 13))
                    {
                        return 1;
                    }
                    if (!func_196(12))
                    {
                        if (func_194(vParam0, 12))
                        {
                            return 1;
                        }
                        if (!func_196(11))
                        {
                            if (func_194(vParam0, 11))
                            {
                                return 1;
                            }
                            if (!func_196(10))
                            {
                                if (func_194(vParam0, 10))
                                {
                                    return 1;
                                }
                                if (!func_196(9))
                                {
                                    if (func_194(vParam0, 9))
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (!func_196(20))
    {
        if (func_194(vParam0, 20))
        {
            return 1;
        }
        if (!func_196(19))
        {
            if (func_194(vParam0, 19))
            {
                return 1;
            }
            if (!func_196(18))
            {
                if (func_194(vParam0, 18))
                {
                    return 1;
                }
                if (!func_196(17))
                {
                    if (func_194(vParam0, 17))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    if (!func_196(21))
    {
        if (func_194(vParam0, 21))
        {
            return 1;
        }
    }
    if (!func_196(22))
    {
        if (func_194(vParam0, 22))
        {
            return 1;
        }
    }
    if (!func_196(23))
    {
        if (func_194(vParam0, 23))
        {
            return 1;
        }
    }
    if (!func_196(24))
    {
        if (func_194(vParam0, 24))
        {
            return 1;
        }
    }
    if (!func_196(26))
    {
        if (!func_196(25))
        {
            if (func_194(vParam0, 25))
            {
                return 1;
            }
        }
        else if (func_194(vParam0, 26))
        {
            return 1;
        }
    }
    if (!func_196(30))
    {
        if (func_194(vParam0, 30))
        {
            return 1;
        }
        if (!func_196(29))
        {
            if (func_194(vParam0, 29))
            {
                return 1;
            }
            if (!func_196(28))
            {
                if (func_194(vParam0, 28))
                {
                    return 1;
                }
                if (!func_196(27))
                {
                    if (func_194(vParam0, 27))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    if (!func_196(31))
    {
        if (func_194(vParam0, 31))
        {
            return 1;
        }
    }
    if (!func_196(34))
    {
        if (func_194(vParam0, 34))
        {
            return 1;
        }
        if (!func_196(33))
        {
            if (func_194(vParam0, 33))
            {
                return 1;
            }
            if (!func_196(32))
            {
                if (func_194(vParam0, 32))
                {
                    return 1;
                }
            }
        }
    }
    if (!func_196(35))
    {
        if (func_194(vParam0, 35))
        {
            return 1;
        }
    }
    if (!func_196(36))
    {
        if (func_194(vParam0, 36))
        {
            return 1;
        }
    }
    if (!func_196(43))
    {
        if (func_194(vParam0, 43))
        {
            return 1;
        }
        if (!func_196(42))
        {
            if (func_194(vParam0, 42))
            {
                return 1;
            }
            if (!func_196(38))
            {
                if (func_194(vParam0, 42))
                {
                    return 1;
                }
            }
            if (!func_196(39))
            {
                if (func_194(vParam0, 42))
                {
                    return 1;
                }
            }
            if (!func_196(40))
            {
                if (func_194(vParam0, 42))
                {
                    return 1;
                }
            }
            if (!func_196(41))
            {
                if (func_194(vParam0, 42))
                {
                    return 1;
                }
            }
            if (!func_196(37))
            {
                if (func_194(vParam0, 42))
                {
                    return 1;
                }
            }
        }
    }
    if (!func_196(45))
    {
        if (func_194(vParam0, 45))
        {
            return 1;
        }
        if (!func_196(44))
        {
            if (func_194(vParam0, 44))
            {
                return 1;
            }
        }
    }
    if (!func_196(51))
    {
        if (func_194(vParam0, 51))
        {
            return 1;
        }
        if (!func_196(48))
        {
            if (func_194(vParam0, 48))
            {
                return 1;
            }
            if (!func_196(49))
            {
                if (func_194(vParam0, 49))
                {
                    return 1;
                }
            }
            if (!func_196(50))
            {
                if (func_194(vParam0, 50))
                {
                    return 1;
                }
            }
            if (!func_196(47))
            {
                if (func_194(vParam0, 47))
                {
                    return 1;
                }
                if (!func_196(46))
                {
                    if (func_194(vParam0, 46))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    if (!func_196(53))
    {
        if (func_194(vParam0, 53))
        {
            return 1;
        }
        if (!func_196(56))
        {
            if (func_194(vParam0, 56))
            {
                return 1;
            }
            if (!func_196(55))
            {
                if (func_194(vParam0, 55))
                {
                    return 1;
                }
            }
            if (!func_196(54))
            {
                if (func_194(vParam0, 54))
                {
                    return 1;
                }
            }
            if (!func_196(52))
            {
                if (func_194(vParam0, 52))
                {
                    return 1;
                }
            }
        }
    }
    if (!func_196(57))
    {
        if (func_194(vParam0, 57))
        {
            return 1;
        }
    }
    if (!func_196(62))
    {
        if (func_194(vParam0, 62))
        {
            return 1;
        }
        if (!func_196(61))
        {
            if (func_194(vParam0, 61))
            {
                return 1;
            }
            if (!func_196(60))
            {
                if (func_194(vParam0, 60))
                {
                    return 1;
                }
                if (!func_196(59))
                {
                    if (func_194(vParam0, 59))
                    {
                        return 1;
                    }
                    if (!func_196(58))
                    {
                        if (func_194(vParam0, 58))
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

int func_194(vector3 vParam0, int iParam1)//Position - 0xB832
{
    float fVar0;
    
    fVar0 = SYSTEM::VDIST2(vParam0, func_195(iParam1));
    if (fVar0 <= 625f)
    {
        return 1;
    }
    return 0;
}

Vector3 func_195(int iParam0)//Position - 0xB85A
{
    vector3 vVar0;
    
    if (iParam0 == 0)
    {
        vVar0 = { -1604.668f, 5239.1f, 3.01f };
    }
    else if (iParam0 == 1)
    {
        vVar0 = { -1592.84f, 5214.04f, 3.01f };
    }
    else if (iParam0 == 2)
    {
        vVar0 = { 190.26f, -956.35f, 29.63f };
    }
    else if (iParam0 == 3)
    {
        vVar0 = { 190.26f, -956.35f, 29.63f };
    }
    else if (iParam0 == 4)
    {
        vVar0 = { 414f, -761f, 29f };
    }
    else if (iParam0 == 5)
    {
        vVar0 = { 1199.27f, -1255.63f, 34.23f };
    }
    else if (iParam0 == 6)
    {
        vVar0 = { -468.9f, -1713.06f, 18.21f };
    }
    else if (iParam0 == 7)
    {
        vVar0 = { 237.65f, -385.41f, 44.4f };
    }
    else if (iParam0 == 8)
    {
        vVar0 = { -1458.97f, 485.99f, 115.38f };
    }
    else if (iParam0 == 9)
    {
        vVar0 = { -1622.89f, 4204.87f, 83.3f };
    }
    else if (iParam0 == 10)
    {
        vVar0 = { 242.7f, 362.7f, 104.74f };
    }
    else if (iParam0 == 11)
    {
        vVar0 = { 1835.53f, 4705.86f, 38.1f };
    }
    else if (iParam0 == 12)
    {
        vVar0 = { 1826.13f, 4698.88f, 38.92f };
    }
    else if (iParam0 == 13)
    {
        vVar0 = { 637.02f, 119.7093f, 89.5f };
    }
    else if (iParam0 == 14)
    {
        vVar0 = { -2892.93f, 3192.37f, 11.66f };
    }
    else if (iParam0 == 15)
    {
        vVar0 = { 524.43f, 3079.82f, 39.48f };
    }
    else if (iParam0 == 16)
    {
        vVar0 = { -697.75f, 45.38f, 43.03f };
    }
    else if (iParam0 == 17)
    {
        vVar0 = { -188.22f, 1296.1f, 302.86f };
    }
    else if (iParam0 == 18)
    {
        vVar0 = { -954.19f, -2760.05f, 14.64f };
    }
    else if (iParam0 == 19)
    {
        vVar0 = { -63.8f, -809.5f, 321.8f };
    }
    else if (iParam0 == 20)
    {
        vVar0 = { 1731.41f, 96.96f, 170.39f };
    }
    else if (iParam0 == 21)
    {
        vVar0 = { -1877.82f, -440.649f, 45.05f };
    }
    else if (iParam0 == 22)
    {
        vVar0 = { 809.66f, 1279.76f, 360.49f };
    }
    else if (iParam0 == 23)
    {
        vVar0 = { -915.6f, 6139.2f, 5.5f };
    }
    else if (iParam0 == 24)
    {
        vVar0 = { -72.29f, -1260.63f, 28.14f };
    }
    else if (iParam0 == 25)
    {
        vVar0 = { 1804.32f, 3931.33f, 32.82f };
    }
    else if (iParam0 == 26)
    {
        vVar0 = { -684.17f, 5839.16f, 16.09f };
    }
    else if (iParam0 == 27)
    {
        vVar0 = { -1104.93f, 291.25f, 64.3f };
    }
    else if (iParam0 == 28)
    {
        vVar0 = { 565.39f, -1772.88f, 29.77f };
    }
    else if (iParam0 == 29)
    {
        vVar0 = { 565.39f, -1772.88f, 29.77f };
    }
    else if (iParam0 == 30)
    {
        vVar0 = { -1104.93f, 291.25f, 64.3f };
    }
    else if (iParam0 == 31)
    {
        vVar0 = { 2726.1f, 4145f, 44.3f };
    }
    else if (iParam0 == 32)
    {
        vVar0 = { 327.85f, 3405.7f, 35.73f };
    }
    else if (iParam0 == 33)
    {
        vVar0 = { 18f, 4527f, 105f };
    }
    else if (iParam0 == 34)
    {
        vVar0 = { -303.82f, 6211.29f, 31.05f };
    }
    else if (iParam0 == 35)
    {
        vVar0 = { 1972.59f, 3816.43f, 32.42f };
    }
    else if (iParam0 == 36)
    {
        vVar0 = { 0f, 0f, 0f };
    }
    else if (iParam0 == 37)
    {
        vVar0 = { -1097.16f, 790.01f, 164.52f };
    }
    else if (iParam0 == 38)
    {
        vVar0 = { -558.65f, 284.49f, 90.86f };
    }
    else if (iParam0 == 39)
    {
        vVar0 = { -1034.15f, 366.08f, 80.11f };
    }
    else if (iParam0 == 40)
    {
        vVar0 = { -623.91f, -266.17f, 37.76f };
    }
    else if (iParam0 == 41)
    {
        vVar0 = { -1096.85f, 67.68f, 52.95f };
    }
    else if (iParam0 == 42)
    {
        vVar0 = { -1310.7f, -640.22f, 26.54f };
    }
    else if (iParam0 == 43)
    {
        vVar0 = { -44.75f, -1288.67f, 28.21f };
    }
    else if (iParam0 == 44)
    {
        vVar0 = { 2468.51f, 3437.39f, 49.9f };
    }
    else if (iParam0 == 45)
    {
        vVar0 = { 2319.44f, 2583.58f, 46.76f };
    }
    else if (iParam0 == 46)
    {
        vVar0 = { -149.75f, 285.81f, 93.67f };
    }
    else if (iParam0 == 47)
    {
        vVar0 = { -70.71f, 301.43f, 106.79f };
    }
    else if (iParam0 == 48)
    {
        vVar0 = { -257.22f, 292.85f, 90.63f };
    }
    else if (iParam0 == 49)
    {
        vVar0 = { 305.52f, 157.19f, 102.94f };
    }
    else if (iParam0 == 50)
    {
        vVar0 = { 1040.96f, -534.42f, 60.17f };
    }
    else if (iParam0 == 51)
    {
        vVar0 = { -484.2f, 229.68f, 82.21f };
    }
    else if (iParam0 == 52)
    {
        vVar0 = { 908f, 3643.7f, 32.2f };
    }
    else if (iParam0 == 54)
    {
        vVar0 = { 465.1f, -1849.3f, 27.8f };
    }
    else if (iParam0 == 55)
    {
        vVar0 = { -161f, -1669.7f, 33f };
    }
    else if (iParam0 == 56)
    {
        vVar0 = { -1298.2f, 2504.14f, 21.09f };
    }
    else if (iParam0 == 53)
    {
        vVar0 = { 1181.5f, -400.1f, 67.5f };
    }
    else if (iParam0 == 57)
    {
        vVar0 = { -1298.98f, 4640.16f, 105.67f };
    }
    else if ((iParam0 == 58 || iParam0 == 59) || iParam0 == 62)
    {
        vVar0 = { -14.39f, -1472.69f, 29.58f };
    }
    else if (iParam0 == 60)
    {
        vVar0 = { 0f, 0f, 0f };
    }
    else if (iParam0 == 61)
    {
        vVar0 = { 0f, 0f, 0f };
    }
    return vVar0;
}

bool func_196(int iParam0)//Position - 0xBF37
{
    if (iParam0 == 63 || iParam0 == -1)
    {
        return 0;
    }
    return unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_4889[iParam0 /*6*/], 3);
}

int func_197()//Position - 0xBF65
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    while (iVar0 <= (4 - 1))
    {
        iVar1 = 0;
        while (iVar1 <= (Local_68[iVar0 /*261*/].f_101 - 1))
        {
            if (unk_0xA2BC31158C8CEFD2(Local_68[iVar0 /*261*/].f_102, iVar1))
            {
                if (func_199(sLocal_70))
                {
                    if (Local_68[iVar0 /*261*/].f_104 == 0)
                    {
                        if (func_13())
                        {
                            func_69(21);
                        }
                    }
                    else if (Local_68[iVar0 /*261*/].f_104 == 2)
                    {
                        if (func_13())
                        {
                            func_69(22);
                        }
                    }
                    else if (Local_68[iVar0 /*261*/].f_104 == 1)
                    {
                        if (func_13())
                        {
                            func_69(23);
                        }
                    }
                    else if (Local_68[iVar0 /*261*/].f_104 == 3)
                    {
                        if (func_13())
                        {
                            func_69(20);
                        }
                    }
                    return 1;
                }
                if (func_198(&(Local_68[iVar0 /*261*/][iVar1 /*8*/])))
                {
                    if (Local_68[iVar0 /*261*/].f_104 == 0)
                    {
                        if (func_13())
                        {
                            func_69(21);
                        }
                    }
                    else if (Local_68[iVar0 /*261*/].f_104 == 2)
                    {
                        if (func_13())
                        {
                            func_69(22);
                        }
                    }
                    else if (Local_68[iVar0 /*261*/].f_104 == 1)
                    {
                        if (func_13())
                        {
                            func_69(23);
                        }
                    }
                    else if (Local_68[iVar0 /*261*/].f_104 == 3)
                    {
                        if (func_13())
                        {
                            func_69(20);
                        }
                    }
                    return 1;
                }
            }
            iVar1++;
        }
        iVar0++;
    }
    return 0;
}

int func_198(var uParam0)//Position - 0xC0C0
{
    if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 0))
    {
        return 1;
    }
    return 0;
}

int func_199(char* sParam0)//Position - 0xC0EB
{
    int iVar0;
    
    if (unk_0x9591DE0F00127F2A(sParam0))
    {
        return 0;
    }
    iVar0 = 0;
    while (iVar0 <= 12)
    {
        if (!unk_0x79FCE4565761C974(sLocal_69[iVar0]))
        {
            if (unk_0x2553916E420E8EF0(sLocal_69[iVar0], sParam0))
            {
                return 1;
            }
        }
        iVar0++;
    }
    return 0;
}

int func_200(vector3 vParam0)//Position - 0xC137
{
    if (vParam0.z < -90f)
    {
        return 1;
    }
    if ((SYSTEM::VDIST2(vParam0, -89.377f, 92.6583f, 71.2349f) <= 400f || SYSTEM::VDIST2(vParam0, -62.0307f, -1839.859f, 25.6787f) <= 400f) || SYSTEM::VDIST2(vParam0, -234.7648f, -1150.311f, 21.9224f) <= 400f)
    {
        func_69(21);
        return 1;
    }
    return 0;
}

int func_201()//Position - 0xC1C1
{
    int iVar0;
    float fVar1;
    
    iVar0 = func_203(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), 145, 1);
    fVar1 = SYSTEM::VDIST2(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), Global_16E29[iVar0 /*10*/].f_3);
    if (fVar1 <= 10000f)
    {
        if (func_13())
        {
            func_202(iVar0);
        }
        return 1;
    }
    return 0;
}

void func_202(int iParam0)//Position - 0xC213
{
    if (iParam0 == 0 || iParam0 == 1)
    {
        func_69(32);
    }
    else if (iParam0 == 5 || iParam0 == 6)
    {
        func_69(33);
    }
    else if ((iParam0 == 2 || iParam0 == 3) || iParam0 == 4)
    {
        func_69(34);
    }
}

int func_203(vector3 vParam0, int iParam1, int iParam2)//Position - 0xC270
{
    int iVar0;
    float fVar1;
    float fVar2;
    int iVar3;
    
    fVar2 = 1000000f;
    iVar3 = 10;
    iVar0 = 0;
    while (iVar0 <= (10 - 1))
    {
        if (Global_16E29[iVar0 /*10*/].f_7 != 263)
        {
            if (Global_16E29[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
            {
                if (func_204(iVar0) || iParam2 == 0)
                {
                    fVar1 = unk_0xD34AF93E9BCF12F0(vParam0, Global_16E29[iVar0 /*10*/].f_3, true);
                    if (fVar1 < fVar2)
                    {
                        fVar2 = fVar1;
                        iVar3 = iVar0;
                    }
                }
            }
        }
        iVar0++;
    }
    return iVar3;
}

bool func_204(int iParam0)//Position - 0xC2FF
{
    return unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_1C38[iParam0], 0);
}

int func_205()//Position - 0xC317
{
    if (SYSTEM::VDIST2(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), 1276.123f, -1723.665f, 53.6551f) <= 52900f)
    {
        if (func_13())
        {
            func_69(30);
        }
        return 1;
    }
    else if (SYSTEM::VDIST2(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1), 111.8564f, -751.7169f, 44.757f) <= 160000f)
    {
        if (func_13())
        {
            func_69(31);
        }
        return 1;
    }
    else if (func_206(200f))
    {
        if (func_13())
        {
            func_69(19);
        }
        return 1;
    }
    return 0;
}

int func_206(float fParam0)//Position - 0xC3AF
{
    if (iLocal_42 == 1)
    {
        if (func_76(unk_0x0FA8183DAD2B3203(), Global_171B5[1 /*15*/], fParam0))
        {
            return 1;
        }
    }
    else if (iLocal_42 == 2)
    {
        if (func_76(unk_0x0FA8183DAD2B3203(), Global_171B5[0 /*15*/], fParam0))
        {
            return 1;
        }
    }
    else if (iLocal_42 == 0)
    {
        if (func_76(unk_0x0FA8183DAD2B3203(), Global_171B5[3 /*15*/], fParam0))
        {
            return 1;
        }
    }
    return 0;
}

void func_207(int iParam0, int iParam1)//Position - 0xC41E
{
    func_4(iParam0);
    if (func_2(func_3(iParam0)))
    {
        unk_0x0D23E3918F7AF11B(1);
        unk_0xA1E7A40E1F56E511(&iLocal_49, 15);
    }
    if (iParam1 != 46)
    {
        func_4(iParam1);
        if (func_2(func_3(iParam1)))
        {
            unk_0x0D23E3918F7AF11B(1);
            unk_0xA1E7A40E1F56E511(&iLocal_49, 15);
        }
    }
}

int func_208()//Position - 0xC46D
{
    if (Global_17585 != -1)
    {
        return unk_0xA2BC31158C8CEFD2(Global_15D8F[Global_17585 /*34*/].f_F, 13);
    }
    return 0;
}

void func_209()//Position - 0xC493
{
    int iVar0;
    int iVar1;
    
    if ((Global_A1B4 == 15 && iLocal_38 == 0) && !func_208())
    {
        if (!unk_0x16587C6F71675106())
        {
            if (!unk_0xA2BC31158C8CEFD2(iLocal_49, 0))
            {
                if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
                {
                    if (!func_221())
                    {
                        if (!unk_0xA2BC31158C8CEFD2(iLocal_49, 7))
                        {
                            iVar0 = unk_0x9B79A29933E4A8FA();
                            if (func_85(iVar0))
                            {
                                if (!func_220(iVar0))
                                {
                                    if (!unk_0x145DAE1A4D0EA05D(iVar0, "Getaway_Winched"))
                                    {
                                        if (func_213(iVar0) && !func_212())
                                        {
                                            if (!unk_0x00123AB82C5FAC28(iVar0))
                                            {
                                                if (func_70(unk_0x0FA8183DAD2B3203()) == 0)
                                                {
                                                    func_69(17);
                                                }
                                                else
                                                {
                                                    func_69(18);
                                                }
                                                iLocal_51 = iVar0;
                                                if (unk_0x7D209FC24D3550F6(iLocal_51, "GetawayVehicleValid", 1))
                                                {
                                                }
                                                unk_0xE5C667CF3B4642D2(iLocal_51, 1, 1);
                                                unk_0xA1E7A40E1F56E511(&iLocal_49, 0);
                                                unk_0xA1E7A40E1F56E511(&iLocal_49, 8);
                                                unk_0xA1E7A40E1F56E511(&iLocal_49, 7);
                                                return;
                                            }
                                            else
                                            {
                                                func_20(&iLocal_51);
                                                unk_0x3B76114EC84D5812(&iLocal_49, 7);
                                                unk_0x3B76114EC84D5812(&iLocal_49, 0);
                                                return;
                                            }
                                        }
                                    }
                                    if (unk_0x7D209FC24D3550F6(iVar0, "GetawayVehicleValid", 0))
                                    {
                                    }
                                    unk_0xA1E7A40E1F56E511(&iLocal_49, 7);
                                }
                                else if (func_211(iVar0))
                                {
                                    iLocal_51 = iVar0;
                                    unk_0xE5C667CF3B4642D2(iLocal_51, 1, 1);
                                    unk_0xA1E7A40E1F56E511(&iLocal_49, 0);
                                    unk_0xA1E7A40E1F56E511(&iLocal_49, 8);
                                    unk_0xA1E7A40E1F56E511(&iLocal_49, 7);
                                    return;
                                }
                            }
                            else
                            {
                                func_20(&iLocal_51);
                                unk_0xA1E7A40E1F56E511(&iLocal_49, 7);
                                unk_0x3B76114EC84D5812(&iLocal_49, 0);
                            }
                        }
                        else if (unk_0xA2BC31158C8CEFD2(iLocal_49, 0))
                        {
                            if (!func_85(iLocal_51))
                            {
                                func_20(&iLocal_51);
                                unk_0xA1E7A40E1F56E511(&iLocal_49, 0);
                                unk_0xA1E7A40E1F56E511(&iLocal_49, 8);
                                unk_0xA1E7A40E1F56E511(&iLocal_49, 7);
                            }
                        }
                    }
                }
                else if (unk_0xA2BC31158C8CEFD2(iLocal_49, 8))
                {
                    iVar1 = unk_0x9B79A29933E4A8FA();
                    if (func_85(iVar1))
                    {
                        if (func_19(unk_0x0FA8183DAD2B3203(), iVar1, 10f, 1) && !unk_0x145DAE1A4D0EA05D(iVar1, "Getaway_Winched"))
                        {
                            iLocal_51 = iVar1;
                            unk_0xE5C667CF3B4642D2(iLocal_51, 1, 1);
                            unk_0xA1E7A40E1F56E511(&iLocal_49, 0);
                            unk_0xA1E7A40E1F56E511(&iLocal_49, 7);
                        }
                    }
                }
                else
                {
                    unk_0x3B76114EC84D5812(&iLocal_49, 7);
                }
            }
            else if (func_85(iLocal_51))
            {
                if (!func_19(unk_0x0FA8183DAD2B3203(), iLocal_51, 80f, 1))
                {
                    if (!unk_0x145DAE1A4D0EA05D(iLocal_51, "Getaway_Winched"))
                    {
                        unk_0xA1E7A40E1F56E511(&(uLocal_47[func_5(5)]), 5);
                        unk_0xA1E7A40E1F56E511(&iLocal_49, 8);
                    }
                    else
                    {
                        unk_0x3B76114EC84D5812(&iLocal_49, 8);
                    }
                    func_20(&iLocal_51);
                    unk_0x3B76114EC84D5812(&iLocal_49, 0);
                    unk_0x3B76114EC84D5812(&iLocal_49, 7);
                }
                else if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
                {
                    if (unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0) != iLocal_51)
                    {
                        func_20(&iLocal_51);
                        func_207(17, 46);
                        func_207(18, 46);
                        func_207(14, 46);
                        func_176();
                    }
                    else if (func_221())
                    {
                        func_20(&iLocal_51);
                        func_176();
                    }
                }
                else if (!func_210(iLocal_51))
                {
                    if (unk_0x7D209FC24D3550F6(iLocal_51, "GetawayVehicleValid", 0))
                    {
                    }
                    func_207(17, 46);
                    func_207(18, 46);
                    func_20(&iLocal_51);
                    func_176();
                }
            }
            else
            {
                func_20(&iLocal_51);
                func_176();
            }
        }
    }
}

int func_210(int iParam0)//Position - 0xC779
{
    if (unk_0x35D31BEBAFD53DE6(iParam0) < 300 || unk_0xF524E590E8C8C6BE(iParam0) < 300f)
    {
        func_69(6);
        return 0;
    }
    return 1;
}

int func_211(int iParam0)//Position - 0xC7AA
{
    if (unk_0x145DAE1A4D0EA05D(iParam0, "GetawayVehicleValid"))
    {
        if (unk_0x607A7A0DD7EB666D(iParam0, "GetawayVehicleValid"))
        {
            return 1;
        }
    }
    return 0;
}

int func_212()//Position - 0xC7CF
{
    if (unk_0x90B5809A1B681498(unk_0x0FA8183DAD2B3203()))
    {
        if ((unk_0x300C62F79A4441EB(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0), 0, 0) == unk_0x0FA8183DAD2B3203() || unk_0x300C62F79A4441EB(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0), 1, 0) == unk_0x0FA8183DAD2B3203()) || unk_0x300C62F79A4441EB(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0), 2, 0) == unk_0x0FA8183DAD2B3203())
        {
            return 1;
        }
    }
    return 0;
}

int func_213(int iParam0)//Position - 0xC832
{
    if ((func_219() && func_215(iParam0)) && func_214(iParam0))
    {
        return 1;
    }
    return 0;
}

int func_214(int iParam0)//Position - 0xC85C
{
    int iVar0;
    
    iVar0 = unk_0x78B310CB286001B8(iParam0);
    if (iVar0 >= 3)
    {
        return 1;
    }
    func_69(15);
    return 0;
}

int func_215(int iParam0)//Position - 0xC87D
{
    if ((func_217(iParam0) && !func_216(iParam0)) && func_210(iParam0))
    {
        return 1;
    }
    return 0;
}

int func_216(int iParam0)//Position - 0xC8AA
{
    int iVar0;
    
    iVar0 = func_61(iParam0);
    if (iVar0 == 0)
    {
        func_69(25);
        return 1;
    }
    if (iVar0 == 1)
    {
        func_69(26);
        return 1;
    }
    if (iVar0 == 2)
    {
        func_69(27);
        return 1;
    }
    if (func_36(iParam0))
    {
        func_69(14);
        return 1;
    }
    return 0;
}

int func_217(int iParam0)//Position - 0xC8FE
{
    int iVar0;
    
    iVar0 = unk_0x7F375072508F738F(iParam0);
    if (!func_218(iVar0))
    {
        if (unk_0x17D0BEBBEAD7B983(iVar0) > 0.165f && unk_0xFDFD728113A7CF62(iVar0) > 31f)
        {
            return 1;
        }
    }
    func_69(14);
    return 0;
}

int func_218(int iParam0)//Position - 0xC943
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 <= 9)
    {
        if (iLocal_66[iVar0] == iParam0)
        {
            if (iVar0 == 0 && !func_257(33))
            {
                unk_0xA1E7A40E1F56E511(&iLocal_49, 3);
            }
            else if (iVar0 == 1 && !func_257(34))
            {
                unk_0xA1E7A40E1F56E511(&iLocal_49, 3);
            }
            else
            {
                unk_0x3B76114EC84D5812(&iLocal_49, 3);
            }
            return 1;
        }
        iVar0++;
    }
    return 0;
}

int func_219()//Position - 0xC9AF
{
    if ((((unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203()) || unk_0x2F879C0BDBED0194(unk_0x0FA8183DAD2B3203())) || unk_0xA700AD7FFC1C5C12(unk_0x0FA8183DAD2B3203())) || unk_0xAF4B0945AD382D5D(unk_0x0FA8183DAD2B3203())) || unk_0xAC731E4610575F5E(unk_0x0FA8183DAD2B3203()))
    {
        func_69(14);
        return 0;
    }
    return 1;
}

int func_220(int iParam0)//Position - 0xCA05
{
    if (unk_0x145DAE1A4D0EA05D(iParam0, "GetawayVehicleValid"))
    {
        return 1;
    }
    return 0;
}

int func_221()//Position - 0xCA1E
{
    int iVar0;
    
    if (func_222(&iVar0))
    {
        if (!unk_0x145DAE1A4D0EA05D(iVar0, "Getaway_Winched"))
        {
            unk_0x7D209FC24D3550F6(iVar0, "Getaway_Winched", 1);
            func_69(16);
            return 1;
        }
        else if (unk_0x607A7A0DD7EB666D(iVar0, "Getaway_Winched"))
        {
            return 0;
        }
    }
    return 0;
}

int func_222(var uParam0)//Position - 0xCA68
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    if (func_250(unk_0x0FA8183DAD2B3203()) && unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
    {
        iVar0 = unk_0x9B79A29933E4A8FA();
        if (func_85(iVar0))
        {
            iVar1 = unk_0x7F375072508F738F(iVar0);
            if ((iVar1 == joaat("cargobob") || iVar1 == joaat("cargobob2")) || iVar1 == joaat("cargobob3"))
            {
                if (unk_0x22454982A21AAA64(iVar0))
                {
                    iVar2 = unk_0x80D96908FFB14DAF(iVar0);
                    if (unk_0xD4B321D9096B01FC(iVar2))
                    {
                        *uParam0 = unk_0xD05B0DA3866791D0(iVar2);
                        if (func_85(*uParam0))
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

void func_223()//Position - 0xCAF9
{
    switch (iLocal_67)
    {
        case 0:
            if (unk_0xA2BC31158C8CEFD2(iLocal_49, 0))
            {
                if ((unk_0x9B35D07DCD0F0B43() - iLocal_73) > 500)
                {
                    sLocal_70 = unk_0xBB148FDFDB97778E(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1));
                    iLocal_67 = 1;
                }
                else if (iLocal_73 == -1)
                {
                    iLocal_73 = unk_0x9B35D07DCD0F0B43();
                }
            }
            break;
        
        case 1:
            if ((unk_0x9B35D07DCD0F0B43() - Local_68[iLocal_72 /*261*/].f_103) > 500)
            {
                if (!unk_0x9591DE0F00127F2A(sLocal_70) && !unk_0x9591DE0F00127F2A(Local_68[iLocal_72 /*261*/][iLocal_71 /*8*/]))
                {
                    if (unk_0x2553916E420E8EF0(sLocal_70, Local_68[iLocal_72 /*261*/][iLocal_71 /*8*/]))
                    {
                        unk_0xA1E7A40E1F56E511(&(Local_68[iLocal_72 /*261*/].f_102), iLocal_71);
                    }
                    else
                    {
                        unk_0x3B76114EC84D5812(&(Local_68[iLocal_72 /*261*/].f_102), iLocal_71);
                    }
                }
                else
                {
                    sLocal_70 = unk_0xBB148FDFDB97778E(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1));
                }
                iLocal_71++;
                if (iLocal_71 >= (Local_68[iLocal_72 /*261*/].f_101 - 1))
                {
                    iLocal_71 = 0;
                    Local_68[iLocal_72 /*261*/].f_103 = unk_0x9B35D07DCD0F0B43();
                    iLocal_72++;
                    if (iLocal_72 >= 4)
                    {
                        iLocal_72 = 0;
                        iLocal_73 = unk_0x9B35D07DCD0F0B43();
                        iLocal_67 = 0;
                    }
                }
            }
            break;
    }
}

void func_224()//Position - 0xCC2A
{
    int iVar0;
    int iVar1;
    
    if (((((((Global_A1B4 == 15 && iLocal_37 != 3) && unk_0xA2BC31158C8CEFD2(iLocal_49, 5)) && !func_208()) && Global_12B1E == -1) && !func_234()) && !func_84(9)) || func_103(35))
    {
        func_233();
        func_231();
        switch (iLocal_39)
        {
            case 0:
                if (unk_0xA2BC31158C8CEFD2(iLocal_49, 17))
                {
                    iVar0 = -1;
                    while (iVar0 < (36 - 1))
                    {
                        iVar0++;
                        if (iVar0 != 46)
                        {
                            func_230(uLocal_47[0], &iVar0);
                        }
                    }
                    unk_0x3B76114EC84D5812(&iLocal_49, 17);
                }
                else
                {
                    iVar0 = 31;
                    while (iVar0 < (46 - 1))
                    {
                        iVar0++;
                        if (iVar0 != 46)
                        {
                            func_230(uLocal_47[1], &iVar0);
                        }
                    }
                    unk_0xA1E7A40E1F56E511(&iLocal_49, 17);
                }
                break;
            
            case 1:
            case 2:
            case 3:
            case 4:
                func_225(iLocal_46, 1);
                break;
        }
    }
    else if (((((((Global_A1B4 != 15 || Global_A1B4 != 0) || Global_A1B4 != 2) || Global_A1B4 != 4) || Global_A1B4 != 17) || func_208()) || Global_12B1E == -1) || Global_1B017)
    {
        iVar1 = 0;
        if (func_132())
        {
            iVar1 = 1;
        }
        else if (Global_1B017)
        {
            iVar1 = 2;
        }
        if (unk_0xA2BC31158C8CEFD2(uLocal_47[func_5(iVar1)], iVar1))
        {
            func_225(iVar1, 0);
        }
    }
}

void func_225(int iParam0, bool bParam1)//Position - 0xCDBB
{
    switch (iLocal_39)
    {
        case 1:
            if ((!unk_0x0945988C02AF3025() && !func_228(func_89())) && !func_227())
            {
                func_226(func_3(iParam0), 15000);
                iLocal_39 = 2;
            }
            break;
        
        case 2:
            if (func_2(func_3(iParam0)))
            {
                fLocal_48 = 0f;
                iLocal_39 = 3;
            }
            else
            {
                fLocal_48 = (fLocal_48 + unk_0x9927BD5F023FA79D());
                if (fLocal_48 >= 20f)
                {
                    iLocal_39 = 4;
                }
                else if (unk_0xA2BC31158C8CEFD2(iLocal_49, 15))
                {
                    func_4(iParam0);
                    unk_0x3B76114EC84D5812(&iLocal_49, 15);
                    iLocal_39 = 4;
                }
            }
            break;
        
        case 3:
            if (!func_2(func_3(iParam0)))
            {
                if (fLocal_48 >= 7.5f || unk_0xA2BC31158C8CEFD2(iLocal_49, 15))
                {
                    func_4(iParam0);
                    unk_0x3B76114EC84D5812(&iLocal_49, 15);
                    iLocal_39 = 4;
                }
                else if (bParam1)
                {
                    iLocal_39 = 0;
                }
                else
                {
                    iLocal_39 = 1;
                    fLocal_48 = 0f;
                }
            }
            else
            {
                fLocal_48 = (fLocal_48 + unk_0x9927BD5F023FA79D());
            }
            break;
        
        case 4:
            fLocal_48 = 0f;
            iLocal_39 = 0;
            break;
    }
}

void func_226(char* sParam0, int iParam1)//Position - 0xCECB
{
    unk_0xD95C12E1062B7D5E(sParam0);
    unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

int func_227()//Position - 0xCEE2
{
    if (unk_0x222F76006659B0EB(joaat("player_timetable_scene")) > 0)
    {
        return 1;
    }
    return 0;
}

int func_228(int iParam0)//Position - 0xCEFC
{
    int iVar0;
    
    if (func_55(iParam0))
    {
        if (func_229(iParam0))
        {
            iVar0 = 0;
            while (iVar0 < Global_1B3C8.f_1E03.f_88)
            {
                if (Global_1B3C8.f_1E03[iVar0 /*15*/].f_3 == 5)
                {
                    return 1;
                }
                iVar0++;
            }
        }
    }
    return 0;
}

int func_229(int iParam0)//Position - 0xCF46
{
    int iVar0;
    
    if (!func_55(iParam0))
    {
    }
    iVar0 = 0;
    while (iVar0 < Global_1B3C8.f_1E03.f_88)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_1E03[iVar0 /*15*/].f_2, iParam0))
        {
            return 1;
        }
        iVar0++;
    }
    iVar0 = 0;
    while (iVar0 < Global_1B3C8.f_1E03.f_2FC)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_1E03.f_28B[iVar0 /*14*/].f_2, iParam0))
        {
            return 1;
        }
        iVar0++;
    }
    iVar0 = 0;
    while (iVar0 < Global_1B3C8.f_1E03.f_362)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_1E03.f_2FD[iVar0 /*10*/].f_2, iParam0))
        {
            return 1;
        }
        iVar0++;
    }
    return 0;
}

void func_230(int iParam0, int iParam1)//Position - 0xCFFD
{
    int iVar0;
    
    iVar0 = func_6(*iParam1);
    if (unk_0xA2BC31158C8CEFD2(iParam0, iVar0))
    {
        if (!unk_0xA2BC31158C8CEFD2(iLocal_49, 3))
        {
            iLocal_46 = *iParam1;
            iLocal_39 = 1;
            fLocal_48 = 0f;
            func_4(44);
            func_4(45);
            iLocal_76 = unk_0x9B35D07DCD0F0B43();
            *iParam1 = 46;
        }
        else if (14 == iVar0)
        {
            func_4(iVar0);
            *iParam1 = 46;
        }
        else
        {
            iLocal_46 = *iParam1;
            iLocal_39 = 1;
            fLocal_48 = 0f;
            *iParam1 = 46;
        }
    }
}

void func_231()//Position - 0xD06F
{
    if (iLocal_37 == 0 || iLocal_37 == 1)
    {
        switch (iLocal_38)
        {
            case 0:
                if (func_232(func_3(3), 0, 0))
                {
                    unk_0xA1E7A40E1F56E511(&iLocal_49, 15);
                    unk_0x0D23E3918F7AF11B(1);
                }
                if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) > 0)
                {
                    if (((((((!func_2(func_3(7)) && !func_2(func_3(8))) && !func_2(func_3(10))) && !func_2(func_3(11))) && !func_2(func_3(12))) && !func_2(func_3(13))) && !func_132()) && !Global_1AE78)
                    {
                        unk_0xA1E7A40E1F56E511(&iLocal_49, 15);
                        unk_0x0D23E3918F7AF11B(1);
                    }
                    iLocal_38 = 1;
                }
                break;
            
            case 1:
                if (unk_0xA2BC31158C8CEFD2(iLocal_49, 0))
                {
                    if (iLocal_42 == 2)
                    {
                        if (iLocal_37 == 1)
                        {
                            if (func_85(iLocal_51))
                            {
                                func_69(3);
                                func_1(3, 1);
                            }
                        }
                        iLocal_38 = 2;
                    }
                    else
                    {
                        if (func_85(iLocal_51))
                        {
                            func_69(3);
                            func_1(3, 1);
                        }
                        iLocal_38 = 2;
                    }
                }
                else
                {
                    iLocal_38 = 2;
                }
                break;
            
            case 2:
                if (unk_0xEBE4F888D9965006(unk_0x7C7787D2D7139A85()) == 0)
                {
                    if (func_2(func_3(3)))
                    {
                        unk_0xA1E7A40E1F56E511(&iLocal_49, 15);
                        unk_0x0D23E3918F7AF11B(1);
                    }
                    iLocal_38 = 0;
                }
                break;
            }
    }
}

bool func_232(char* sParam0, int iParam1, char* sParam2)//Position - 0xD1C7
{
    unk_0xC1A9801A23F32F8F(sParam0);
    if (iParam1 == 1)
    {
        unk_0x0AC9F8E1AFCEC860(sParam2);
    }
    return unk_0xCDD0AB887E3F6532();
}

void func_233()//Position - 0xD1E5
{
    if ((((!func_103(func_104()) && !func_103(35)) && !func_228(func_89())) && !func_227()) && !func_117())
    {
        if (iLocal_77 < 2 && (unk_0x9B35D07DCD0F0B43() - iLocal_76) > 480000)
        {
            if (iLocal_42 != 2)
            {
                func_69(44);
            }
            else
            {
                func_69(45);
            }
            iLocal_77++;
        }
    }
}

int func_234()//Position - 0xD25E
{
    if (Global_12C25)
    {
        return 1;
    }
    else if (Global_F019 && !Global_F01F)
    {
        return 1;
    }
    return 0;
}

void func_235()//Position - 0xD288
{
    if (func_75())
    {
        if (unk_0xA2BC31158C8CEFD2(iLocal_49, 2))
        {
            if (func_85(iLocal_51))
            {
                func_21(iLocal_51, vLocal_52, fLocal_53, 25, 1);
                func_20(&iLocal_51);
            }
            unk_0x3B76114EC84D5812(&iLocal_49, 2);
        }
        func_1(46, 1);
        func_265(0);
    }
}

void func_236()//Position - 0xD2D2
{
    if (!func_241())
    {
        if (!func_234())
        {
            if (unk_0xBF28CCACDDFF5346())
            {
                if (!unk_0xC862E94A8ABC89B8())
                {
                    func_238();
                }
            }
        }
    }
    else if (iLocal_37 != 3)
    {
        func_237();
    }
}

void func_237()//Position - 0xD313
{
    if (iLocal_37 != 4)
    {
        if (iLocal_37 != 2)
        {
            if (unk_0x0945988C02AF3025() && !Global_1AE78)
            {
                unk_0xA1E7A40E1F56E511(&iLocal_49, 15);
                unk_0x0D23E3918F7AF11B(1);
            }
            if (unk_0xA2BC31158C8CEFD2(iLocal_49, 0))
            {
                if (func_85(iLocal_51))
                {
                    unk_0xB570C44B09DEF4A5(iLocal_51, 0);
                }
                func_20(&iLocal_51);
                func_176();
                if (iLocal_42 != 2)
                {
                    vLocal_50 = { 0f, 0f, 0f };
                }
                unk_0x3B76114EC84D5812(&iLocal_49, 8);
            }
        }
        else if (unk_0xA2BC31158C8CEFD2(iLocal_49, 0))
        {
            func_21(iLocal_51, vLocal_52, fLocal_53, 25, 1);
            if (func_85(iLocal_51))
            {
                unk_0xB570C44B09DEF4A5(iLocal_51, 0);
            }
            func_20(&iLocal_51);
            func_176();
        }
        if (unk_0x4F6F8DF9C96926B9("GETAWY", 5))
        {
            unk_0xA95AA80044081B2A(5, false);
            unk_0x3B76114EC84D5812(&iLocal_49, 4);
            unk_0x3B76114EC84D5812(&iLocal_49, 5);
            func_265(0);
            if (func_132())
            {
                func_1(1, 1);
            }
            else
            {
                func_1(0, 1);
            }
        }
        iLocal_37 = 3;
    }
}

void func_238()//Position - 0xD3F2
{
    func_240();
    if (unk_0xA2BC31158C8CEFD2(iLocal_49, 4))
    {
        if (!unk_0xA2BC31158C8CEFD2(iLocal_49, 5) && !unk_0xA2BC31158C8CEFD2(iLocal_49, 16))
        {
            unk_0x9F815D4FA0C47F97("GETAWY", 5);
            if (unk_0x4F6F8DF9C96926B9("GETAWY", 5))
            {
                unk_0xA1E7A40E1F56E511(&iLocal_49, 5);
            }
            if (unk_0xA2BC31158C8CEFD2(iLocal_49, 5))
            {
                func_239();
                iLocal_39 = 0;
                unk_0x3B76114EC84D5812(&iLocal_49, 7);
                unk_0x3B76114EC84D5812(&iLocal_49, 0);
                unk_0x3B76114EC84D5812(&iLocal_49, 1);
                if (func_2(func_3(0)))
                {
                    unk_0x0D23E3918F7AF11B(1);
                }
                func_4(0);
                iLocal_37 = Global_1B3C8.f_273C.f_80;
            }
        }
    }
}

void func_239()//Position - 0xD487
{
    if (!func_103(func_104()))
    {
        if (!unk_0xA2BC31158C8CEFD2(iLocal_49, 12))
        {
            if (func_101())
            {
                if (iLocal_42 != 2)
                {
                    func_69(44);
                }
                else
                {
                    func_69(45);
                }
                unk_0xA1E7A40E1F56E511(&iLocal_49, 12);
            }
        }
    }
}

void func_240()//Position - 0xD4CB
{
    if (!unk_0x2F89FBF89079F185(5))
    {
        unk_0xA1E7A40E1F56E511(&iLocal_49, 4);
    }
    else
    {
        unk_0x3B76114EC84D5812(&iLocal_49, 4);
    }
}

int func_241()//Position - 0xD4ED
{
    if (iLocal_42 != 2)
    {
        if (iLocal_42 == 1 && func_89() == 2)
        {
            if (!unk_0xA2BC31158C8CEFD2(iLocal_49, 16))
            {
                unk_0xA1E7A40E1F56E511(&iLocal_49, 16);
            }
            return 1;
        }
        else if (unk_0xA2BC31158C8CEFD2(iLocal_49, 16))
        {
            unk_0x3B76114EC84D5812(&iLocal_49, 16);
        }
        if (func_242())
        {
            return 0;
        }
    }
    else if (func_103(35))
    {
        return 0;
    }
    else if (func_242())
    {
        return 0;
    }
    return 1;
}

int func_242()//Position - 0xD565
{
    if (((((Global_A1B4 == 15 && !func_208()) && Global_12B1E == -1) && !func_132()) && !func_206(1112014848)) && !Global_1B017)
    {
        return 1;
    }
    return 0;
}

void func_243()//Position - 0xD5B3
{
    if (!unk_0xA2BC31158C8CEFD2(iLocal_49, 13))
    {
        if (func_244())
        {
            unk_0xA1E7A40E1F56E511(&iLocal_49, 13);
        }
    }
    else if (!func_244())
    {
        unk_0x3B76114EC84D5812(&iLocal_49, 7);
        unk_0x3B76114EC84D5812(&iLocal_49, 0);
        unk_0x3B76114EC84D5812(&iLocal_49, 1);
        unk_0x3B76114EC84D5812(&iLocal_49, 13);
    }
}

int func_244()//Position - 0xD5FE
{
    if (((((func_245(39) || func_245(40)) || func_245(41)) || func_245(42)) || func_245(43)) || func_245(44))
    {
        return 1;
    }
    return 0;
}

int func_245(int iParam0)//Position - 0xD650
{
    return func_246(iParam0, 6, 1);
}

int func_246(int iParam0, int iParam1, bool bParam2)//Position - 0xD660
{
    if (iParam0 == -1)
    {
        return 0;
    }
    if (bParam2)
    {
        return unk_0xA2BC31158C8CEFD2(Global_181A1.f_54D[iParam0], iParam1);
    }
    else if (unk_0x393E9918BC37548A())
    {
        if (func_96() == 0)
        {
            return unk_0xA2BC31158C8CEFD2(func_247(func_249(iParam0), -1, 0), iParam1);
        }
    }
    else
    {
        return unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_29C[iParam0], iParam1);
    }
    return 0;
}

int func_247(int iParam0, int iParam1, int iParam2)//Position - 0xD6CA
{
    int iVar0;
    var uVar1;
    
    if (iParam2 == 0)
    {
    }
    iVar0 = Global_26CBBF[iParam0 /*3*/][func_248(iParam1)];
    if (unk_0x367DA79FE620711B(iVar0, &uVar1, -1))
    {
        return uVar1;
    }
    return 0;
}

int func_248(var uParam0)//Position - 0xD6FC
{
    int iVar0;
    int iVar1;
    
    iVar0 = uParam0;
    if (iVar0 == -1)
    {
        iVar1 = func_99();
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

int func_249(int iParam0)//Position - 0xD730
{
    switch (iParam0)
    {
        case 0:
            return 827;
            break;
        
        case 1:
            return 828;
            break;
        
        case 2:
            return 829;
            break;
        
        case 3:
            return 830;
            break;
        
        case 4:
            return 831;
            break;
        
        case 5:
            return 832;
            break;
        
        case 6:
            return 833;
            break;
        
        case 7:
            return 834;
            break;
        
        case 8:
            return 835;
            break;
        
        case 9:
            return 836;
            break;
        
        case 10:
            return 837;
            break;
        
        case 11:
            return 838;
            break;
        
        case 12:
            return 839;
            break;
        
        case 13:
            return 840;
            break;
        
        case 14:
            return 841;
            break;
        
        case 15:
            return 843;
            break;
        
        case 16:
            return 844;
            break;
        
        case 17:
            return 845;
            break;
        
        case 18:
            return 846;
            break;
        
        case 19:
            return 847;
            break;
        
        case 20:
            return 848;
            break;
        
        case 21:
            return 849;
            break;
        
        case 22:
            return 850;
            break;
        
        case 23:
            return 851;
            break;
        
        case 24:
            return 852;
            break;
        
        case 25:
            return 853;
            break;
        
        case 26:
            return 854;
            break;
        
        case 27:
            return 855;
            break;
        
        case 28:
            return 856;
            break;
        
        case 29:
            return 857;
            break;
        
        case 30:
            return 858;
            break;
        
        case 31:
            return 859;
            break;
        
        case 32:
            return 860;
            break;
        
        case 33:
            return 861;
            break;
        
        case 34:
            return 862;
            break;
        
        case 35:
            return 863;
            break;
        
        case 36:
            return 864;
            break;
        
        case 37:
            return 865;
            break;
        
        case 38:
            return 866;
            break;
        
        case 39:
            return 867;
            break;
        
        case 40:
            return 871;
            break;
        
        case 41:
            return 872;
            break;
        
        case 42:
            return 873;
            break;
        
        case 43:
            return 874;
            break;
        
        case 44:
            return 9470;
            break;
        
        case 45:
            return 3808;
            break;
        
        case 46:
            return 5383;
            break;
        
        case 47:
            return 6155;
            break;
        
        case 48:
            return 7232;
            break;
        
        case 49:
            return 7878;
            break;
        
        case 52:
            return 8912;
            break;
        
        case 50:
            return 8265;
            break;
        
        case 51:
            return 8267;
            break;
        
        default:
            break;
    }
    return 10999;
}

int func_250(int iParam0)//Position - 0xDA60
{
    if (func_86(iParam0))
    {
        if (!unk_0x2BF5E63466422C38(iParam0))
        {
            return 1;
        }
    }
    return 0;
}

int func_251(bool bParam0)//Position - 0xDA80
{
    if (bParam0)
    {
        if (func_252())
        {
            return 1;
        }
    }
    if (func_84(14))
    {
        return 1;
    }
    return 0;
}

int func_252()//Position - 0xDAA6
{
    if (Global_1AFA9)
    {
        return 1;
    }
    if (!func_84(14) && unk_0x222F76006659B0EB(joaat("director_mode")) > 0)
    {
        return 1;
    }
    return 0;
}

void func_253(char* sParam0, int iParam1)//Position - 0xDAD8
{
    int iVar0;
    int iVar1;
    
    if (Global_1AE78 && iParam1)
    {
        if (func_2(sParam0) && !unk_0x41B5A8C4819CB80D())
        {
            unk_0x0D23E3918F7AF11B(0);
        }
    }
    iVar0 = 0;
    while (iVar0 < Global_1B3C8.f_4FB5.f_91)
    {
        if (unk_0x2553916E420E8EF0(sParam0, &(Global_1B3C8.f_4FB5[iVar0 /*16*/])))
        {
            iVar1 = iVar0;
            while (iVar1 <= (Global_1B3C8.f_4FB5.f_91 - 2))
            {
                func_256(iVar1, iVar1 + 1);
                iVar1++;
            }
            func_255((Global_1B3C8.f_4FB5.f_91 - 1));
            Global_1B3C8.f_4FB5.f_91 = (Global_1B3C8.f_4FB5.f_91 - 1);
            func_254();
            return;
        }
        iVar0++;
    }
}

void func_254()//Position - 0xDB85
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

void func_255(int iParam0)//Position - 0xDCA5
{
    StringCopy(&(Global_1B3C8.f_4FB5[iParam0 /*16*/]), "", 16);
    StringCopy(&(Global_1B3C8.f_4FB5[iParam0 /*16*/].f_4), "", 16);
    Global_1B3C8.f_4FB5[iParam0 /*16*/].f_8 = 0;
    Global_1B3C8.f_4FB5[iParam0 /*16*/].f_9 = 0;
    Global_1B3C8.f_4FB5[iParam0 /*16*/].f_B = 0;
    Global_1B3C8.f_4FB5[iParam0 /*16*/].f_A = -1;
    Global_1B3C8.f_4FB5[iParam0 /*16*/].f_C = 0;
    Global_1B3C8.f_4FB5[iParam0 /*16*/].f_D = 0;
    Global_1B3C8.f_4FB5[iParam0 /*16*/].f_E = 0;
    Global_1B3C8.f_4FB5[iParam0 /*16*/].f_F = 0;
}

void func_256(int iParam0, int iParam1)//Position - 0xDD3D
{
    Global_1B3C8.f_4FB5[iParam0 /*16*/] = { Global_1B3C8.f_4FB5[iParam1 /*16*/] };
    Global_1B3C8.f_4FB5[iParam0 /*16*/].f_4 = { Global_1B3C8.f_4FB5[iParam1 /*16*/].f_4 };
    Global_1B3C8.f_4FB5[iParam0 /*16*/].f_8 = Global_1B3C8.f_4FB5[iParam1 /*16*/].f_8;
    Global_1B3C8.f_4FB5[iParam0 /*16*/].f_A = Global_1B3C8.f_4FB5[iParam1 /*16*/].f_A;
    Global_1B3C8.f_4FB5[iParam0 /*16*/].f_9 = Global_1B3C8.f_4FB5[iParam1 /*16*/].f_9;
    Global_1B3C8.f_4FB5[iParam0 /*16*/].f_B = Global_1B3C8.f_4FB5[iParam1 /*16*/].f_B;
    Global_1B3C8.f_4FB5[iParam0 /*16*/].f_C = Global_1B3C8.f_4FB5[iParam1 /*16*/].f_C;
    Global_1B3C8.f_4FB5[iParam0 /*16*/].f_D = Global_1B3C8.f_4FB5[iParam1 /*16*/].f_D;
    Global_1B3C8.f_4FB5[iParam0 /*16*/].f_E = Global_1B3C8.f_4FB5[iParam1 /*16*/].f_E;
    Global_1B3C8.f_4FB5[iParam0 /*16*/].f_F = Global_1B3C8.f_4FB5[iParam1 /*16*/].f_F;
}

int func_257(int iParam0)//Position - 0xDE4D
{
    if (iParam0 == 94 || iParam0 == -1)
    {
        return 0;
    }
    return Global_1B3C8.f_2378.f_14A[iParam0 /*6*/];
}

void func_258(int iParam0)//Position - 0xDE79
{
    iLocal_42 = iParam0;
    if (iLocal_42 == 0)
    {
        sLocal_79 = "FBIPRAU";
    }
    else if (iLocal_42 == 1)
    {
        sLocal_79 = "AHFAUD";
    }
    else if (iLocal_42 == 2)
    {
        sLocal_79 = "FHFAUD";
    }
    iLocal_66[0] = joaat("trash");
    iLocal_66[1] = joaat("towtruck");
    iLocal_66[2] = joaat("ambulance");
    iLocal_66[3] = joaat("barracks2");
    iLocal_66[4] = joaat("stretch");
    iLocal_66[5] = joaat("phantom");
    iLocal_66[6] = joaat("packer");
    iLocal_66[7] = joaat("blazer");
    iLocal_66[8] = joaat("blazer2");
    if (iLocal_42 != 0)
    {
        iLocal_66[9] = joaat("sentinel2");
    }
    else
    {
        iLocal_66[9] = 0;
    }
    func_261();
    func_259();
    unk_0xA1E7A40E1F56E511(&iLocal_49, 17);
    iLocal_76 = unk_0x9B35D07DCD0F0B43();
}

void func_259()//Position - 0xDF3F
{
    sLocal_45[0] = "AM_H_FBIC1A";
    sLocal_45[1] = "AM_H_FBIC1B";
    sLocal_45[2] = "AM_H_FBIC1C";
    sLocal_45[3] = "PRC_WANT";
    sLocal_45[4] = "PRC_DROPOFF";
    sLocal_45[5] = "PRC_INVALVEH";
    sLocal_45[6] = "PRC_HEALTH";
    sLocal_45[7] = func_260(7);
    sLocal_45[8] = func_260(8);
    sLocal_45[9] = "PRC_USEFIRST";
    sLocal_45[10] = func_260(10);
    sLocal_45[11] = func_260(11);
    sLocal_45[13] = func_260(13);
    sLocal_45[12] = func_260(12);
    sLocal_45[14] = "PRC_UNUSE";
    sLocal_45[15] = "PRC_SEATS";
    sLocal_45[16] = "PRC_CBOBVAL";
    sLocal_45[17] = func_260(17);
    sLocal_45[18] = func_260(18);
    sLocal_45[20] = func_260(20);
    sLocal_45[21] = "PRC_PUBAREA";
    sLocal_45[22] = "PRC_LAWAREA";
    sLocal_45[23] = "PRC_RESAREA";
    sLocal_45[24] = "PRC_STOP";
    sLocal_45[25] = "PRC_OWNEDM";
    sLocal_45[26] = "PRC_OWNEDF";
    sLocal_45[27] = "PRC_OWNEDT";
    sLocal_45[28] = "PRC_SECROUTE";
    sLocal_45[29] = "PRC_CLOSELOT";
    sLocal_45[30] = "PRC_CLOSELES";
    sLocal_45[31] = "PRC_CLSAGNT";
    sLocal_45[32] = "PRC_CLOSESAFE_M";
    sLocal_45[33] = "PRC_CLOSESAFE_F";
    sLocal_45[34] = "PRC_CLOSESAFE_T";
    sLocal_45[35] = "PRC_PEDS";
    sLocal_45[36] = "PRC_WATER";
    sLocal_45[37] = "PRC_OBST";
    sLocal_45[38] = "PRC_OBSTVEH";
    sLocal_45[39] = "PRC_UPDWN";
    sLocal_45[40] = "PRC_NEARROAD";
    sLocal_45[41] = "PRC_ONROAD";
    sLocal_45[19] = "PRC_PLAN";
    sLocal_45[42] = "PRC_TOOSTEEP";
    sLocal_45[43] = "PRC_UNEVEN";
    sLocal_45[44] = "PRC_REMIND";
    sLocal_45[45] = "PRC_REMINDA";
}

char* func_260(int iParam0)//Position - 0xE11C
{
    char* sVar0;
    
    if (iLocal_42 == 0)
    {
        if (iParam0 == 17)
        {
            sVar0 = "PRC_USEFT";
        }
        else if (iParam0 == 18)
        {
            sVar0 = "PRC_USEM";
        }
        else if (iParam0 == 10)
        {
            sVar0 = "PRC_PICKCARTF";
        }
        else if (iParam0 == 11)
        {
            sVar0 = "PRC_PICKCARM";
        }
        else if (iParam0 == 13)
        {
            sVar0 = "PRC_PICKNEWM";
        }
        else if (iParam0 == 12)
        {
            sVar0 = "PRC_PICKNEWTF";
        }
        else if (iParam0 == 7)
        {
            sVar0 = "PRC_LOCSUITFT";
        }
        else if (iParam0 == 8)
        {
            sVar0 = "PRC_LOCSUITM";
        }
        else if (iParam0 == 20)
        {
            sVar0 = "PRC_INACC";
        }
    }
    else if (iLocal_42 == 1)
    {
        if (iParam0 == 17)
        {
            sVar0 = "PRC_USEFL";
        }
        else if (iParam0 == 18)
        {
            sVar0 = "PRC_USEML";
        }
        else if (iParam0 == 10)
        {
            sVar0 = "PRC_PICKCRFL";
        }
        else if (iParam0 == 11)
        {
            sVar0 = "PRC_PICKCRML";
        }
        else if (iParam0 == 13)
        {
            sVar0 = "PRC_PICKNEWML";
        }
        else if (iParam0 == 12)
        {
            sVar0 = "PRC_PICKNEWFL";
        }
        else if (iParam0 == 7)
        {
            sVar0 = "PRC_LOCSUITFL";
        }
        else if (iParam0 == 8)
        {
            sVar0 = "PRC_LOCSUITML";
        }
        else if (iParam0 == 20)
        {
            sVar0 = "PRC_INACCF";
        }
    }
    else if (iLocal_42 == 2)
    {
        if (iParam0 == 17)
        {
            sVar0 = "PRC_USEL";
        }
        else if (iParam0 == 18)
        {
            sVar0 = "PRC_USEL";
        }
        else if (iParam0 == 10)
        {
            sVar0 = "PRC_PICKCARL";
        }
        else if (iParam0 == 11)
        {
            sVar0 = "PRC_PICKCARL";
        }
        else if (iParam0 == 13)
        {
            sVar0 = "PRC_PICKNEWL";
        }
        else if (iParam0 == 12)
        {
            sVar0 = "PRC_PICKNEWL";
        }
        else if (iParam0 == 7)
        {
            sVar0 = "PRC_LOCSUITFT";
        }
        else if (iParam0 == 8)
        {
            sVar0 = "PRC_LOCSUITM";
        }
        else if (iParam0 == 20)
        {
            sVar0 = "PRC_INACCF";
        }
    }
    return sVar0;
}

void func_261()//Position - 0xE2E2
{
    sLocal_69[0] = "ARMYB";
    sLocal_69[1] = "AIRP";
    sLocal_69[2] = "STAD";
    sLocal_69[3] = "TERMINA";
    sLocal_69[4] = "MOVIE";
    sLocal_69[5] = "JAIL";
    sLocal_69[6] = "OCEANA";
    sLocal_69[7] = "GOLF";
    sLocal_69[8] = "HORS";
    sLocal_69[9] = "MTCHIL";
    sLocal_69[10] = "MTGORDO";
    sLocal_69[11] = "SANCHIA";
    sLocal_69[12] = "TATAMO";
    Local_68[0 /*261*/][0 /*8*/] = { func_262("DELBE", -1615.257f, -952.5944f, 20.01716f, -2160.706f, -423f, -1.28679f, 327.8f) };
    Local_68[0 /*261*/][1 /*8*/] = { func_262("DELBE", -1521.716f, -914.5676f, 20.17247f, -1855.715f, -1325.784f, -44.79295f, 254.8f) };
    Local_68[0 /*261*/][2 /*8*/] = { func_262("BEACH", -1162.37f, -1815.008f, 15.33822f, -1553.207f, -1098.685f, 0.46467f, 253.91f) };
    Local_68[0 /*261*/][3 /*8*/] = { func_262("BEACH", -1464.219f, -1136.783f, 0.32167f, -2241.566f, -358.8849f, 20.32481f, 282.21f) };
    Local_68[0 /*261*/][4 /*8*/] = { func_262("PBOX", 156.4109f, -1042.641f, 22.31273f, 238.6382f, -821.1217f, 35.10069f, 176.96f) };
    Local_68[0 /*261*/][5 /*8*/] = { func_262("CHIL", 883.1121f, 534.7283f, 115.725f, 559.7425f, 644.602f, 150.5971f, 301.08f) };
    Local_68[0 /*261*/][6 /*8*/] = { func_262("EAST_V", 941.4531f, -329.4256f, 60.77003f, 727.7651f, -200.9519f, 75.59085f, 88.89f) };
    Local_68[0 /*261*/][7 /*8*/] = { func_262("EAST_V", 689.1177f, -273.1406f, 60.21559f, 834.7326f, -352.1655f, 50.92442f, 81.23f) };
    Local_68[0 /*261*/][8 /*8*/] = { func_262("MIRR", 1048.499f, -357.0332f, 60.92149f, 1401.581f, -783.8975f, 75.7477f, 325.93f) };
    Local_68[0 /*261*/][9 /*8*/] = { func_262("MIRR", 892.2836f, -461.5752f, 70.86029f, 1161.301f, -829.8299f, 45.90131f, 184.12f) };
    Local_68[0 /*261*/][10 /*8*/] = { func_262("VCANA", -1161.361f, -1143.716f, -5.71593f, -864.9714f, -981.1257f, 21.09691f, 328.65f) };
    Local_68[0 /*261*/][11 /*8*/] = { func_262("BAYTRE", 251.4011f, 1068.347f, 280.6663f, 189.6012f, 1272.352f, 143.8035f, 160.32f) };
    Local_68[0 /*261*/][13 /*8*/] = { func_262("OBSERV", -450.9835f, 1048.408f, 252.945f, -389.564f, 1244.504f, 370.2469f, 199.93f) };
    Local_68[0 /*261*/][14 /*8*/] = { func_262("AIRP", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
    Local_68[0 /*261*/][15 /*8*/] = { func_262("TERMINA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
    Local_68[0 /*261*/][16 /*8*/] = { func_262("STAD", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
    Local_68[0 /*261*/][17 /*8*/] = { func_262("MOVIE", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
    Local_68[0 /*261*/][18 /*8*/] = { func_262("GOLF", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
    Local_68[0 /*261*/][19 /*8*/] = { func_262("HORS", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
    Local_68[0 /*261*/][20 /*8*/] = { func_262("PBOX", -28.39781f, -1071.245f, 50.21438f, -49.8352f, -1131.277f, 20.02555f, 55.12f) };
    Local_68[0 /*261*/][21 /*8*/] = { func_262("LOSSF", 843.1962f, 25.93548f, 65.16061f, 1138.687f, 363.0587f, 105.4128f, 61.11f) };
    Local_68[0 /*261*/][22 /*8*/] = { func_262("ROCKF", -992.5638f, -199.7673f, 30.74956f, -687.9904f, -43.23445f, 80.93306f, 80.53f) };
    Local_68[0 /*261*/][23 /*8*/] = { func_262("ROCKF", -251.8548f, -446.2141f, 29.5887f, -362.685f, -434.7425f, 90.931f, 50f) };
    Local_68[0 /*261*/][24 /*8*/] = { func_262("ALTA", 180.2637f, -404.9771f, 40.1713f, 289.9432f, -445.1485f, 124.3793f, 100f) };
    Local_68[0 /*261*/][25 /*8*/] = { func_262("ALTA", 343.8481f, -323.1273f, 80.7749f, 427.08f, -361.0469f, 45.3411f, 85f) };
    Local_68[0 /*261*/][26 /*8*/] = { func_262("RANCHO", 414.5057f, -2092.1f, 19.8533f, 350.8093f, -2158.395f, 12.3916f, 55f) };
    Local_68[0 /*261*/][27 /*8*/] = { func_262("RANCHO", 283.7474f, -2103.918f, 12.9242f, 391.8871f, -1983.204f, 33.0042f, 100f) };
    Local_68[0 /*261*/][28 /*8*/] = { func_262("PBOX", 85.038f, -670.3274f, 42.8642f, 227.8234f, -722.2458f, 274f, 175f) };
    Local_68[0 /*261*/][29 /*8*/] = { func_262("PBOX", -107.2516f, -906.36f, 28.2051f, -49.9007f, -752.925f, 330f, 125f) };
    Local_68[0 /*261*/][30 /*8*/] = { func_262("TEXTI", 456.8563f, -683.8335f, 32.2903f, 457.5504f, -819.4669f, 25.9553f, 14.4f) };
    Local_68[0 /*261*/][31 /*8*/] = { func_262("ROCKF", -699.7205f, -227.3646f, 67.818f, -645.1068f, -332.5107f, 30.9132f, 127.1f) };
    Local_68[0 /*261*/].f_104 = 0;
    Local_68[0 /*261*/].f_101 = 32;
    Local_68[2 /*261*/][0 /*8*/] = { func_262("PBOX", -25.50944f, -932.3846f, 20.41711f, 119.9406f, -523.4398f, 33.07988f, 363.4f) };
    Local_68[2 /*261*/][1 /*8*/] = { func_262("DOWNT", -25.50944f, -932.3846f, 20.41711f, 119.9406f, -523.4398f, 33.07988f, 363.4f) };
    Local_68[2 /*261*/][2 /*8*/] = { func_262("COSI", 1426.934f, 1225.115f, 90.76305f, 1429.982f, 1006.831f, 120.6643f, 259.89f) };
    Local_68[2 /*261*/][3 /*8*/] = { func_262("COSI", 3503.56f, 3546.403f, 20.18748f, 3513.955f, 3875.795f, 72.94806f, 393.78f) };
    Local_68[2 /*261*/][4 /*8*/] = { func_262("SKID", 403.5404f, -864.4694f, 20.33799f, 396.3441f, -1127.325f, 35.49262f, 325.93f) };
    Local_68[2 /*261*/][5 /*8*/] = { func_262("JAIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
    Local_68[2 /*261*/][6 /*8*/] = { func_262("ARMYB", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
    Local_68[2 /*261*/].f_104 = 2;
    Local_68[2 /*261*/].f_101 = 7;
    Local_68[1 /*261*/][0 /*8*/] = { func_262("PALETO", -422.8618f, 6068.399f, 20.34662f, -282.7452f, 6206.324f, 50.46586f, 196.61f) };
    Local_68[1 /*261*/][1 /*8*/] = { func_262("ROCKF", -755.2506f, 147.4266f, 75.41048f, -1079.033f, 169.3806f, 50.46801f, 179.12f) };
    Local_68[1 /*261*/][2 /*8*/] = { func_262("ROCKF", -752.3674f, 90.76733f, 65.5171f, -938.798f, -15.91457f, 35.48347f, 205.78f) };
    Local_68[1 /*261*/][3 /*8*/] = { func_262("ROCKF", -890.4999f, 431.1449f, 90.29848f, -875.3576f, 232.3266f, 60.20724f, 263.82f) };
    Local_68[1 /*261*/][4 /*8*/] = { func_262("ROCKF", -752.3674f, 90.76733f, 65.5171f, -938.798f, -15.91457f, 35.48347f, 205.78f) };
    Local_68[1 /*261*/][5 /*8*/] = { func_262("ROCKF", -1198.183f, 638.6367f, 115.1066f, -444.509f, 750.9377f, 198.2971f, 473.88f) };
    Local_68[1 /*261*/][6 /*8*/] = { func_262("ROCKF", -844.4075f, 400.9413f, 80.433f, -109.5311f, 420.5014f, 120.2088f, 256.03f) };
    Local_68[1 /*261*/][7 /*8*/] = { func_262("ROCKF", -518.6213f, 648.8265f, 130.9352f, -64.0709f, 582.4504f, 215.3084f, 162.72f) };
    Local_68[1 /*261*/][8 /*8*/] = { func_262("RICHM", -934.9802f, 349.6101f, 85.77298f, -1432.451f, 269.9804f, 50.7303f, 185.03f) };
    Local_68[1 /*261*/][9 /*8*/] = { func_262("RICHM", -1633.813f, -69.53224f, 65.10236f, -1446.823f, 69.71544f, 48.23926f, 214.92f) };
    Local_68[1 /*261*/][10 /*8*/] = { func_262("RICHM", -1732.258f, 444.1353f, 130.1258f, -2065.69f, 412.2121f, 98.09863f, 175.17f) };
    Local_68[1 /*261*/][11 /*8*/] = { func_262("RICHM", -1618.036f, 50.95197f, 70.95364f, -1396.514f, 221.1004f, 50.84464f, 161.61f) };
    Local_68[1 /*261*/][12 /*8*/] = { func_262("RICHM", -1801.285f, 106.8786f, 72.12892f, -1541.74f, 263.3738f, 50.44112f, 155.88f) };
    Local_68[1 /*261*/][13 /*8*/] = { func_262("PELUFF", -2208.563f, 146.4101f, 150.9325f, -2350.122f, 486.6066f, 200.5952f, 299.18f) };
    Local_68[1 /*261*/][14 /*8*/] = { func_262("PELUFF", -1852.326f, 134.4172f, 70.06226f, -1994.387f, 299.6283f, 100.9652f, 182.04f) };
    Local_68[1 /*261*/][15 /*8*/] = { func_262("CHIL", -1982.67f, 505.9648f, 100.9364f, -1918.843f, 713.6382f, 150.7395f, 168.9f) };
    Local_68[1 /*261*/][16 /*8*/] = { func_262("CHIL", -1455.751f, 887.3351f, 191.9757f, -1663.207f, 767.3684f, 160.8108f, 239.65f) };
    Local_68[1 /*261*/][17 /*8*/] = { func_262("CHIL", -1570.222f, 508.2056f, 140.3884f, -808.9532f, 526.4333f, 90.18556f, 238.43f) };
    Local_68[1 /*261*/][18 /*8*/] = { func_262("CHIL", 242.6204f, 583.5905f, 159.4043f, 268.0424f, 827.4494f, 201.6953f, 105.09f) };
    Local_68[1 /*261*/][19 /*8*/] = { func_262("CHIL", -21.10285f, 706.8648f, 150.7263f, -210.4382f, 1056.276f, 280.3182f, 290.15f) };
    Local_68[1 /*261*/][20 /*8*/] = { func_262("RGLEN", -1837.538f, 774.2984f, 120.5629f, -1765.842f, 831.0044f, 160.3584f, 68.09f) };
    Local_68[1 /*261*/][21 /*8*/] = { func_262("DIVINE", -372.0849f, 372.7183f, 100.6043f, 390.2198f, 532.5167f, 180.538f, 305.88f) };
    Local_68[1 /*261*/].f_104 = 1;
    Local_68[1 /*261*/].f_101 = 22;
    Local_68[3 /*261*/][0 /*8*/] = { func_262("MTCHIL", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
    Local_68[3 /*261*/][1 /*8*/] = { func_262("MTGORDO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
    Local_68[3 /*261*/][2 /*8*/] = { func_262("SANCHIA", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
    Local_68[3 /*261*/][3 /*8*/] = { func_262("TATAMO", 0f, 0f, 0f, 0f, 0f, 0f, 0f) };
    Local_68[3 /*261*/][4 /*8*/] = { func_262("ELYSIAN", 531.2397f, -3019.267f, 50f, 530.1656f, -3393.623f, -22.4165f, 210f) };
    Local_68[3 /*261*/][5 /*8*/] = { func_262("ELYSIAN", 569.1023f, -2913.018f, 15.891f, 420.8226f, -2912.775f, -15.0372f, 25f) };
    Local_68[3 /*261*/][6 /*8*/] = { func_262("ELYSIAN", 495.1012f, -2833.175f, 5.164f, 460.1983f, -2813.528f, 0.4269f, 12f) };
    Local_68[3 /*261*/][7 /*8*/] = { func_262("ELYSIAN", 675.2973f, -2747.45f, 4.952f, 689.2358f, -2747.396f, 10.9001f, 4.3f) };
    Local_68[3 /*261*/][8 /*8*/] = { func_262("CYPRE", 533.437f, -2693.279f, 17.4952f, 588.6345f, -2693.462f, 5.3007f, 15f) };
    Local_68[3 /*261*/][9 /*8*/] = { func_262("CYPRE", 534.9656f, -2699.136f, 4.9004f, 560.1779f, -2662.192f, 9.0007f, 15f) };
    Local_68[3 /*261*/][10 /*8*/] = { func_262("CYPRE", 583.903f, -2689.207f, 16.9771f, 549.8469f, -2665.318f, 3.9007f, 17.3f) };
    Local_68[3 /*261*/][11 /*8*/] = { func_262("CYPRE", 683.428f, -2635.134f, 9.3367f, 694.4725f, -2679.66f, 4.7815f, 10f) };
    Local_68[3 /*261*/][12 /*8*/] = { func_262("CYPRE", 695.2171f, -2694.769f, 5.9815f, 695.5035f, -2679.168f, 4.8365f, 10f) };
    Local_68[3 /*261*/][13 /*8*/] = { func_262("CYPRE", 731.7991f, -2659.58f, 4.7713f, 732.5307f, -2678.4f, 10.5065f, 25f) };
    Local_68[3 /*261*/][14 /*8*/] = { func_262("ELYSIAN", 86.1885f, -2430.696f, -0.1888f, 119.1515f, -2453.121f, 2.8614f, 13f) };
    Local_68[3 /*261*/][15 /*8*/] = { func_262("ELYSIAN", 260.3166f, -2426.777f, 21.2819f, 313.7871f, -2433.656f, 6.5609f, 20.5f) };
    Local_68[3 /*261*/][16 /*8*/] = { func_262("ELYSIAN", 260.3166f, -2426.777f, 21.2819f, 313.7871f, -2433.656f, 6.5609f, 20.5f) };
    Local_68[3 /*261*/][17 /*8*/] = { func_262("ELYSIAN", 283.1514f, -2456.777f, 19.4609f, 290.2325f, -2403.611f, 4.2465f, 20.5f) };
    Local_68[3 /*261*/][18 /*8*/] = { func_262("ELYSIAN", 266.0341f, -2446.724f, 19.4623f, 308.3783f, -2414.544f, 4.5423f, 20.5f) };
    Local_68[3 /*261*/][19 /*8*/] = { func_262("ELYSIAN", 303.5269f, -2451.446f, 19.4091f, 270.9798f, -2409.452f, 4.4609f, 20.5f) };
    Local_68[3 /*261*/][20 /*8*/] = { func_262("RANCHO", 515.026f, -1653.54f, 37.2615f, 582.571f, -1577.825f, 26.3365f, 100f) };
    Local_68[3 /*261*/][21 /*8*/] = { func_262("BURTON", -150.7403f, -419.0541f, 28.6163f, -52.8669f, -453.5552f, 39.4051f, 100f) };
    Local_68[3 /*261*/][22 /*8*/] = { func_262("SanAnd", 50.2035f, -470.7132f, 36.9003f, 102.0394f, -322.0089f, 115f, 130f) };
    Local_68[3 /*261*/][23 /*8*/] = { func_262("ALTA", 499.1769f, -241.2495f, 47.3462f, 393.5317f, -205.7358f, 79.3132f, 120f) };
    Local_68[3 /*261*/][24 /*8*/] = { func_262("DTVINE", 422.3247f, 62.118f, 113.2905f, 478.494f, 43.322f, 83.4541f, 80f) };
    Local_68[3 /*261*/][25 /*8*/] = { func_262("DTVINE", 385.4908f, 56.1423f, 159.58f, 332.458f, -87.6805f, 63.3657f, 80f) };
    Local_68[3 /*261*/][26 /*8*/] = { func_262("DTVINE", 213.6192f, 90.2228f, 98.9357f, 203.3067f, 61.8088f, 86.9197f, 60f) };
    Local_68[3 /*261*/][27 /*8*/] = { func_262("DTVINE", 192.813f, -14.9451f, 85.3158f, 149.2689f, 0.6803f, 67.0343f, 40f) };
    Local_68[3 /*261*/][28 /*8*/] = { func_262("WVINE", 16.1659f, 61.8685f, 70.8467f, -17.1751f, 74.3771f, 76.88f, 4.5f) };
    Local_68[3 /*261*/][29 /*8*/] = { func_262("WVINE", -86.5425f, 84.8701f, 80.2147f, -50.4826f, 67.7335f, 70.297f, 20f) };
    Local_68[3 /*261*/][30 /*8*/] = { func_262("ELGORL", 3449.839f, 5173.981f, 0.0662f, 3412.309f, 5166.89f, 14.8342f, 33.7f) };
    Local_68[3 /*261*/].f_104 = 3;
    Local_68[3 /*261*/].f_101 = 31;
    if (func_250(unk_0x0FA8183DAD2B3203()))
    {
        sLocal_70 = unk_0xBB148FDFDB97778E(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1));
    }
}

struct<8> func_262(char* sParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0xF61C
{
    struct<8> Var0;
    
    Var0 = sParam0;
    Var0.f_1 = { vParam1 };
    Var0.f_4 = { vParam2 };
    Var0.f_7 = fParam3;
    return Var0;
}

void func_263(int iParam0, bool bParam1)//Position - 0xF647
{
    if (func_85(iLocal_51))
    {
        func_20(&iLocal_51);
    }
    if (!bParam1)
    {
        func_264(iParam0);
    }
    unk_0x9C9E32388A7886A2();
}

int func_264(int iParam0)//Position - 0xF66F
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

void func_265(bool bParam0)//Position - 0xF6C9
{
    char* sVar0;
    
    if (bParam0)
    {
        sVar0 = "PRC_MARK";
        if (iLocal_42 == 2)
        {
            sVar0 = "PRC_MARKVEH";
            func_273(sVar0);
        }
        else if (iLocal_42 == 0)
        {
            if (func_89() == 0)
            {
                func_272(sVar0);
                func_271(sVar0);
            }
            else if (func_89() == 1)
            {
                func_270(sVar0);
            }
            else
            {
                func_270(sVar0);
            }
        }
        else if (iLocal_42 == 1)
        {
            if (func_89() == 0)
            {
                func_272(sVar0);
                func_273(sVar0);
            }
            else if (func_89() == 1)
            {
                func_270(sVar0);
                func_273(sVar0);
            }
            else
            {
                func_270(sVar0);
                func_273(sVar0);
            }
        }
        unk_0xA1E7A40E1F56E511(&iLocal_49, 11);
    }
    else if (unk_0xA2BC31158C8CEFD2(iLocal_49, 11))
    {
        func_269();
        func_268();
        func_267();
        func_266();
        unk_0x3B76114EC84D5812(&iLocal_49, 11);
    }
}

void func_266()//Position - 0xF796
{
    StringCopy(&(Global_1C1A[3 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_267()//Position - 0xF7AC
{
    StringCopy(&(Global_1C1A[2 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_268()//Position - 0xF7C2
{
    StringCopy(&(Global_1C1A[1 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_269()//Position - 0xF7D8
{
    StringCopy(&(Global_1C1A[0 /*16*/].f_8), "CELL_SFUN_NULL", 32);
}

void func_270(char* sParam0)//Position - 0xF7EE
{
    StringCopy(&(Global_1C1A[0 /*16*/].f_8), sParam0, 32);
}

void func_271(char* sParam0)//Position - 0xF802
{
    StringCopy(&(Global_1C1A[2 /*16*/].f_8), sParam0, 32);
}

void func_272(char* sParam0)//Position - 0xF816
{
    StringCopy(&(Global_1C1A[1 /*16*/].f_8), sParam0, 32);
}

void func_273(char* sParam0)//Position - 0xF82A
{
    StringCopy(&(Global_1C1A[3 /*16*/].f_8), sParam0, 32);
}

void func_274(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xF83E
{
    func_275(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_275(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0xF85E
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
        func_254();
    }
}

int func_276(var uParam0, int iParam1)//Position - 0xFA30
{
    if (iParam1 == -1)
    {
        return 0;
    }
    if (!func_52(&(Global_12684.f_22B[0 /*21*/]), iParam1))
    {
        return 0;
    }
    else
    {
        func_59(&(Global_1B3C8.f_7FE8.f_45[Global_12684.f_22B[0 /*21*/].f_E /*78*/]), uParam0);
    }
    return 1;
}

float func_277(int iParam0)//Position - 0xFA7B
{
    if (iParam0 == -1)
    {
        return 0f;
    }
    if (!func_52(&(Global_12684.f_22B[0 /*21*/]), iParam0))
    {
        return 0f;
    }
    return Global_12684.f_22B[0 /*21*/].f_3;
}

Vector3 func_278(int iParam0)//Position - 0xFAB1
{
    if (iParam0 == -1)
    {
        return 0f, 0f, 0f;
    }
    if (!func_52(&(Global_12684.f_22B[0 /*21*/]), iParam0))
    {
        return 0f, 0f, 0f;
    }
    return Global_12684.f_22B[0 /*21*/];
}

int func_279(int iParam0)//Position - 0xFAEB
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

