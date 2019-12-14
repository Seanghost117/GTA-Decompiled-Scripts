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
    var uLocal_61 = 10;
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
    var uLocal_72 = 2;
    var uLocal_73 = 0;
    var uLocal_74 = 0;
    var uLocal_75 = 8;
    var uLocal_76 = 0;
    var uLocal_77 = 0;
    var uLocal_78 = 0;
    var uLocal_79 = 0;
    var uLocal_80 = 0;
    var uLocal_81 = 0;
    var uLocal_82 = 0;
    var uLocal_83 = 0;
    var uLocal_84 = 8;
    var uLocal_85 = 0;
    var uLocal_86 = 0;
    var uLocal_87 = 0;
    var uLocal_88 = 0;
    var uLocal_89 = 0;
    var uLocal_90 = 0;
    var uLocal_91 = 0;
    var uLocal_92 = 0;
    var uLocal_93 = 0;
    float fLocal_94 = 0f;
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
    int iLocal_110 = 0;
    int iLocal_111 = 0;
    int iLocal_112 = 0;
    int iLocal_113 = 0;
    int iLocal_114 = 0;
    int iLocal_115 = 0;
    int iLocal_116 = 0;
    var uLocal_117[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    var uLocal_118[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    var uLocal_119 = 0;
    int iLocal_120 = 0;
    int iLocal_121 = 0;
    var uLocal_122[4] = { 0, 0, 0, 0 };
    var uLocal_123[4] = { 0, 0, 0, 0 };
    int iLocal_124[4] = { 0, 0, 0, 0 };
    int iLocal_125 = 0;
    int iLocal_126 = 0;
    int iLocal_127 = 0;
    var uLocal_128 = 0;
    var uLocal_129 = 0;
    var uLocal_130 = 0;
    var uLocal_131 = 0;
    var uLocal_132 = 0;
    var uLocal_133 = 0;
    vector3 vLocal_134[130] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
    int iLocal_135 = 0;
    int iLocal_136 = 0;
    int iLocal_137 = 0;
    var uLocal_138 = 0;
    var uLocal_139 = 0;
    var uLocal_140 = 0;
    var uLocal_141 = 0;
    var uLocal_142 = 0;
    var uLocal_143 = 0;
    var uLocal_144 = 0;
    int iLocal_145[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int iLocal_146 = 0;
    int iLocal_147[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int iLocal_148 = 0;
    int iLocal_149 = 0;
    struct<2> Local_150 = { -1, -1 } ;
    struct<730> Local_151 = { 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
    struct<535> Local_172 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
    var uLocal_173 = -1;
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
    var uLocal_195 = -1082130432;
    var uLocal_196 = 3;
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
    var uLocal_212 = -1;
    var uLocal_213 = 0;
    var uLocal_214 = -1;
    var uLocal_215 = -1;
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
    var uLocal_237 = -1082130432;
    var uLocal_238 = 3;
    var uLocal_239 = 0;
    var uLocal_240 = 0;
    var uLocal_241 = 0;
    var uLocal_242 = 0;
    var uLocal_243 = 0;
    var uLocal_244 = 0;
    var uLocal_245 = 0;
    var uLocal_246 = 0;
    var uLocal_247 = 0;
    var uLocal_248 = 0;
    var uLocal_249 = 0;
    var uLocal_250 = 0;
    var uLocal_251 = 0;
    var uLocal_252 = 0;
    var uLocal_253 = 0;
    var uLocal_254 = -1;
    var uLocal_255 = 0;
    var uLocal_256 = -1;
    var uLocal_257 = -1;
    var uLocal_258 = 0;
    var uLocal_259 = 0;
    var uLocal_260 = 0;
    var uLocal_261 = 0;
    var uLocal_262 = 0;
    var uLocal_263 = 0;
    var uLocal_264 = 0;
    var uLocal_265 = 0;
    var uLocal_266 = 0;
    var uLocal_267 = 0;
    var uLocal_268 = 0;
    var uLocal_269 = 0;
    var uLocal_270 = 0;
    var uLocal_271 = 0;
    var uLocal_272 = 0;
    var uLocal_273 = 0;
    var uLocal_274 = 0;
    var uLocal_275 = 0;
    var uLocal_276 = 0;
    var uLocal_277 = 0;
    var uLocal_278 = 0;
    var uLocal_279 = -1082130432;
    var uLocal_280 = 3;
    var uLocal_281 = 0;
    var uLocal_282 = 0;
    var uLocal_283 = 0;
    var uLocal_284 = 0;
    var uLocal_285 = 0;
    var uLocal_286 = 0;
    var uLocal_287 = 0;
    var uLocal_288 = 0;
    var uLocal_289 = 0;
    var uLocal_290 = 0;
    var uLocal_291 = 0;
    var uLocal_292 = 0;
    var uLocal_293 = 0;
    var uLocal_294 = 0;
    var uLocal_295 = 0;
    var uLocal_296 = -1;
    var uLocal_297 = 0;
    var uLocal_298 = -1;
    var uLocal_299 = -1;
    var uLocal_300 = 0;
    var uLocal_301 = 0;
    var uLocal_302 = 0;
    var uLocal_303 = 0;
    var uLocal_304 = 0;
    var uLocal_305 = 0;
    var uLocal_306 = 0;
    var uLocal_307 = 0;
    var uLocal_308 = 0;
    var uLocal_309 = 0;
    var uLocal_310 = 0;
    var uLocal_311 = 0;
    var uLocal_312 = 0;
    var uLocal_313 = 0;
    var uLocal_314 = 0;
    var uLocal_315 = 0;
    var uLocal_316 = 0;
    var uLocal_317 = 0;
    var uLocal_318 = 0;
    var uLocal_319 = 0;
    var uLocal_320 = 0;
    var uLocal_321 = -1082130432;
    var uLocal_322 = 3;
    var uLocal_323 = 0;
    var uLocal_324 = 0;
    var uLocal_325 = 0;
    var uLocal_326 = 0;
    var uLocal_327 = 0;
    var uLocal_328 = 0;
    var uLocal_329 = 0;
    var uLocal_330 = 0;
    var uLocal_331 = 0;
    var uLocal_332 = 0;
    var uLocal_333 = 0;
    var uLocal_334 = 0;
    var uLocal_335 = 0;
    var uLocal_336 = 0;
    var uLocal_337 = 0;
    var uLocal_338 = -1;
    var uLocal_339 = 0;
    var uLocal_340 = -1;
    var uLocal_341 = -1;
    var uLocal_342 = 0;
    var uLocal_343 = 0;
    var uLocal_344 = 0;
    var uLocal_345 = 0;
    var uLocal_346 = 0;
    var uLocal_347 = 0;
    var uLocal_348 = 0;
    var uLocal_349 = 0;
    var uLocal_350 = 0;
    var uLocal_351 = 0;
    var uLocal_352 = 0;
    var uLocal_353 = 0;
    var uLocal_354 = 0;
    var uLocal_355 = 0;
    var uLocal_356 = 0;
    var uLocal_357 = 0;
    var uLocal_358 = 0;
    var uLocal_359 = 0;
    var uLocal_360 = 0;
    var uLocal_361 = 0;
    var uLocal_362 = 0;
    var uLocal_363 = -1082130432;
    var uLocal_364 = 3;
    var uLocal_365 = 0;
    var uLocal_366 = 0;
    var uLocal_367 = 0;
    var uLocal_368 = 0;
    var uLocal_369 = 0;
    var uLocal_370 = 0;
    var uLocal_371 = 0;
    var uLocal_372 = 0;
    var uLocal_373 = 0;
    var uLocal_374 = 0;
    var uLocal_375 = 0;
    var uLocal_376 = 0;
    var uLocal_377 = 0;
    var uLocal_378 = 0;
    var uLocal_379 = 0;
    var uLocal_380 = -1;
    var uLocal_381 = 0;
    var uLocal_382 = -1;
    var uLocal_383 = -1;
    var uLocal_384 = 0;
    var uLocal_385 = 0;
    var uLocal_386 = 0;
    var uLocal_387 = 0;
    var uLocal_388 = 0;
    var uLocal_389 = 0;
    var uLocal_390 = 0;
    var uLocal_391 = 0;
    var uLocal_392 = 0;
    var uLocal_393 = 0;
    var uLocal_394 = 0;
    var uLocal_395 = 0;
    var uLocal_396 = 0;
    var uLocal_397 = 0;
    var uLocal_398 = 0;
    var uLocal_399 = 0;
    var uLocal_400 = 0;
    var uLocal_401 = 0;
    var uLocal_402 = 0;
    var uLocal_403 = 0;
    var uLocal_404 = 0;
    var uLocal_405 = -1082130432;
    var uLocal_406 = 3;
    var uLocal_407 = 0;
    var uLocal_408 = 0;
    var uLocal_409 = 0;
    var uLocal_410 = 0;
    var uLocal_411 = 0;
    var uLocal_412 = 0;
    var uLocal_413 = 0;
    var uLocal_414 = 0;
    var uLocal_415 = 0;
    var uLocal_416 = 0;
    var uLocal_417 = 0;
    var uLocal_418 = 0;
    var uLocal_419 = 0;
    var uLocal_420 = 0;
    var uLocal_421 = 0;
    var uLocal_422 = -1;
    var uLocal_423 = 0;
    var uLocal_424 = -1;
    var uLocal_425 = -1;
    var uLocal_426 = 0;
    var uLocal_427 = 0;
    var uLocal_428 = 0;
    var uLocal_429 = 0;
    var uLocal_430 = 0;
    var uLocal_431 = 0;
    var uLocal_432 = 0;
    var uLocal_433 = 0;
    var uLocal_434 = 0;
    var uLocal_435 = 0;
    var uLocal_436 = 0;
    var uLocal_437 = 0;
    var uLocal_438 = 0;
    var uLocal_439 = 0;
    var uLocal_440 = 0;
    var uLocal_441 = 0;
    var uLocal_442 = 0;
    var uLocal_443 = 0;
    var uLocal_444 = 0;
    var uLocal_445 = 0;
    var uLocal_446 = 0;
    var uLocal_447 = -1082130432;
    var uLocal_448 = 3;
    var uLocal_449 = 0;
    var uLocal_450 = 0;
    var uLocal_451 = 0;
    var uLocal_452 = 0;
    var uLocal_453 = 0;
    var uLocal_454 = 0;
    var uLocal_455 = 0;
    var uLocal_456 = 0;
    var uLocal_457 = 0;
    var uLocal_458 = 0;
    var uLocal_459 = 0;
    var uLocal_460 = 0;
    var uLocal_461 = 0;
    var uLocal_462 = 0;
    var uLocal_463 = 0;
    var uLocal_464 = -1;
    var uLocal_465 = 0;
    var uLocal_466 = -1;
    var uLocal_467 = -1;
    var uLocal_468 = 0;
    var uLocal_469 = 0;
    var uLocal_470 = 0;
    var uLocal_471 = 0;
    var uLocal_472 = 0;
    var uLocal_473 = 0;
    var uLocal_474 = 0;
    var uLocal_475 = 0;
    var uLocal_476 = 0;
    var uLocal_477 = 0;
    var uLocal_478 = 0;
    var uLocal_479 = 0;
    var uLocal_480 = 0;
    var uLocal_481 = 0;
    var uLocal_482 = 0;
    var uLocal_483 = 0;
    var uLocal_484 = 0;
    var uLocal_485 = 0;
    var uLocal_486 = 0;
    var uLocal_487 = 0;
    var uLocal_488 = 0;
    var uLocal_489 = -1082130432;
    var uLocal_490 = 3;
    var uLocal_491 = 0;
    var uLocal_492 = 0;
    var uLocal_493 = 0;
    var uLocal_494 = 0;
    var uLocal_495 = 0;
    var uLocal_496 = 0;
    var uLocal_497 = 0;
    var uLocal_498 = 0;
    var uLocal_499 = 0;
    var uLocal_500 = 0;
    var uLocal_501 = 0;
    var uLocal_502 = 0;
    var uLocal_503 = 0;
    var uLocal_504 = 0;
    var uLocal_505 = 0;
    var uLocal_506 = -1;
    var uLocal_507 = 0;
    var uLocal_508 = -1;
    var uLocal_509 = -1;
    var uLocal_510 = 0;
    var uLocal_511 = 0;
    var uLocal_512 = 0;
    var uLocal_513 = 0;
    var uLocal_514 = 0;
    var uLocal_515 = 0;
    var uLocal_516 = 0;
    var uLocal_517 = 0;
    var uLocal_518 = 0;
    var uLocal_519 = 0;
    var uLocal_520 = 0;
    var uLocal_521 = 0;
    var uLocal_522 = 0;
    var uLocal_523 = 0;
    var uLocal_524 = 0;
    var uLocal_525 = 0;
    var uLocal_526 = 0;
    var uLocal_527 = 0;
    var uLocal_528 = 0;
    var uLocal_529 = 0;
    var uLocal_530 = 0;
    var uLocal_531 = -1082130432;
    var uLocal_532 = 3;
    var uLocal_533 = 0;
    var uLocal_534 = 0;
    var uLocal_535 = 0;
    var uLocal_536 = 0;
    var uLocal_537 = 0;
    var uLocal_538 = 0;
    var uLocal_539 = 0;
    var uLocal_540 = 0;
    var uLocal_541 = 0;
    var uLocal_542 = 0;
    var uLocal_543 = 0;
    var uLocal_544 = 0;
    var uLocal_545 = 0;
    var uLocal_546 = 0;
    var uLocal_547 = 0;
    var uLocal_548 = -1;
    var uLocal_549 = 0;
    var uLocal_550 = -1;
    var uLocal_551 = -1;
    var uLocal_552 = 0;
    var uLocal_553 = 0;
    var uLocal_554 = 0;
    var uLocal_555 = 0;
    var uLocal_556 = 0;
    var uLocal_557 = 0;
    var uLocal_558 = 0;
    var uLocal_559 = 0;
    var uLocal_560 = 0;
    var uLocal_561 = 0;
    var uLocal_562 = 0;
    var uLocal_563 = 0;
    var uLocal_564 = 0;
    var uLocal_565 = 0;
    var uLocal_566 = 0;
    var uLocal_567 = 0;
    var uLocal_568 = 0;
    var uLocal_569 = 0;
    var uLocal_570 = 0;
    var uLocal_571 = 0;
    var uLocal_572 = 0;
    var uLocal_573 = -1082130432;
    var uLocal_574 = 3;
    var uLocal_575 = 0;
    var uLocal_576 = 0;
    var uLocal_577 = 0;
    var uLocal_578 = 0;
    var uLocal_579 = 0;
    var uLocal_580 = 0;
    var uLocal_581 = 0;
    var uLocal_582 = 0;
    var uLocal_583 = 0;
    var uLocal_584 = 0;
    var uLocal_585 = 0;
    var uLocal_586 = 0;
    var uLocal_587 = 0;
    var uLocal_588 = 0;
    var uLocal_589 = 0;
    var uLocal_590 = -1;
    var uLocal_591 = 0;
    var uLocal_592 = -1;
    var uLocal_593 = -1;
    var uLocal_594 = 0;
    var uLocal_595 = 0;
    var uLocal_596 = 0;
    var uLocal_597 = 0;
    var uLocal_598 = 0;
    var uLocal_599 = 0;
    var uLocal_600 = 0;
    var uLocal_601 = 0;
    var uLocal_602 = 0;
    var uLocal_603 = 0;
    var uLocal_604 = 0;
    var uLocal_605 = 0;
    var uLocal_606 = 0;
    var uLocal_607 = 0;
    var uLocal_608 = 0;
    var uLocal_609 = 0;
    var uLocal_610 = 0;
    var uLocal_611 = 0;
    var uLocal_612 = 0;
    var uLocal_613 = 0;
    var uLocal_614 = 0;
    var uLocal_615 = -1082130432;
    var uLocal_616 = 3;
    var uLocal_617 = 0;
    var uLocal_618 = 0;
    var uLocal_619 = 0;
    var uLocal_620 = 0;
    var uLocal_621 = 0;
    var uLocal_622 = 0;
    var uLocal_623 = 0;
    var uLocal_624 = 0;
    var uLocal_625 = 0;
    var uLocal_626 = 0;
    var uLocal_627 = 0;
    var uLocal_628 = 0;
    var uLocal_629 = 0;
    var uLocal_630 = 0;
    var uLocal_631 = 0;
    var uLocal_632 = -1;
    var uLocal_633 = 0;
    var uLocal_634 = -1;
    var uLocal_635 = -1;
    var uLocal_636 = 0;
    var uLocal_637 = 0;
    var uLocal_638 = 0;
    var uLocal_639 = 0;
    var uLocal_640 = 0;
    var uLocal_641 = 0;
    var uLocal_642 = 0;
    var uLocal_643 = 0;
    var uLocal_644 = 0;
    var uLocal_645 = 0;
    var uLocal_646 = 0;
    var uLocal_647 = 0;
    var uLocal_648 = 0;
    var uLocal_649 = 0;
    var uLocal_650 = 0;
    var uLocal_651 = 0;
    var uLocal_652 = 0;
    var uLocal_653 = 0;
    var uLocal_654 = 0;
    var uLocal_655 = 0;
    var uLocal_656 = 0;
    var uLocal_657 = -1082130432;
    var uLocal_658 = 3;
    var uLocal_659 = 0;
    var uLocal_660 = 0;
    var uLocal_661 = 0;
    var uLocal_662 = 0;
    var uLocal_663 = 0;
    var uLocal_664 = 0;
    var uLocal_665 = 0;
    var uLocal_666 = 0;
    var uLocal_667 = 0;
    var uLocal_668 = 0;
    var uLocal_669 = 0;
    var uLocal_670 = 0;
    var uLocal_671 = 0;
    var uLocal_672 = 0;
    var uLocal_673 = 0;
    var uLocal_674 = -1;
    var uLocal_675 = 0;
    var uLocal_676 = -1;
    var uLocal_677 = -1;
    var uLocal_678 = 0;
    var uLocal_679 = 0;
    var uLocal_680 = 0;
    var uLocal_681 = 0;
    var uLocal_682 = 0;
    var uLocal_683 = 0;
    var uLocal_684 = 0;
    var uLocal_685 = 0;
    var uLocal_686 = 0;
    var uLocal_687 = 0;
    var uLocal_688 = 0;
    var uLocal_689 = 0;
    var uLocal_690 = 0;
    var uLocal_691 = 0;
    var uLocal_692 = 0;
    var uLocal_693 = 0;
    var uLocal_694 = 0;
    var uLocal_695 = 0;
    var uLocal_696 = 0;
    var uLocal_697 = 0;
    var uLocal_698 = 0;
    var uLocal_699 = -1082130432;
    var uLocal_700 = 3;
    var uLocal_701 = 0;
    var uLocal_702 = 0;
    var uLocal_703 = 0;
    var uLocal_704 = 0;
    var uLocal_705 = 0;
    var uLocal_706 = 0;
    var uLocal_707 = 0;
    var uLocal_708 = 0;
    var uLocal_709 = 0;
    var uLocal_710 = 0;
    var uLocal_711 = 0;
    var uLocal_712 = 0;
    var uLocal_713 = 0;
    var uLocal_714 = 0;
    var uLocal_715 = 0;
    var uLocal_716 = -1;
    var uLocal_717 = 0;
    var uLocal_718 = -1;
    var uLocal_719 = -1;
    var uLocal_720 = 0;
    var uLocal_721 = 0;
    var uLocal_722 = 0;
    var uLocal_723 = 0;
    var uLocal_724 = 0;
    var uLocal_725 = 0;
    var uLocal_726 = 0;
    var uLocal_727 = 0;
    var uLocal_728 = 0;
    var uLocal_729 = 0;
    var uLocal_730 = 0;
    var uLocal_731 = 0;
    var uLocal_732 = 0;
    var uLocal_733 = 0;
    var uLocal_734 = 0;
    var uLocal_735 = 0;
    var uLocal_736 = 0;
    var uLocal_737 = 0;
    var uLocal_738 = 0;
    var uLocal_739 = 0;
    var uLocal_740 = 0;
    var uLocal_741 = -1082130432;
    var uLocal_742 = 3;
    var uLocal_743 = 0;
    var uLocal_744 = 0;
    var uLocal_745 = 0;
    var uLocal_746 = 0;
    var uLocal_747 = 0;
    var uLocal_748 = 0;
    var uLocal_749 = 0;
    var uLocal_750 = 0;
    var uLocal_751 = 0;
    var uLocal_752 = 0;
    var uLocal_753 = 0;
    var uLocal_754 = 0;
    var uLocal_755 = 0;
    var uLocal_756 = 0;
    var uLocal_757 = 0;
    var uLocal_758 = -1;
    var uLocal_759 = 0;
    var uLocal_760 = -1;
    var uLocal_761 = -1;
    var uLocal_762 = 0;
    var uLocal_763 = 0;
    var uLocal_764 = 0;
    var uLocal_765 = 0;
    var uLocal_766 = 0;
    var uLocal_767 = 0;
    var uLocal_768 = 0;
    var uLocal_769 = 0;
    var uLocal_770 = 0;
    var uLocal_771 = 0;
    var uLocal_772 = 0;
    var uLocal_773 = 0;
    var uLocal_774 = 0;
    var uLocal_775 = 0;
    var uLocal_776 = 0;
    var uLocal_777 = 0;
    var uLocal_778 = 0;
    var uLocal_779 = 0;
    var uLocal_780 = 0;
    var uLocal_781 = 0;
    var uLocal_782 = 0;
    var uLocal_783 = -1082130432;
    var uLocal_784 = 3;
    var uLocal_785 = 0;
    var uLocal_786 = 0;
    var uLocal_787 = 0;
    var uLocal_788 = 0;
    var uLocal_789 = 0;
    var uLocal_790 = 0;
    var uLocal_791 = 0;
    var uLocal_792 = 0;
    var uLocal_793 = 0;
    var uLocal_794 = 0;
    var uLocal_795 = 0;
    var uLocal_796 = 0;
    var uLocal_797 = 0;
    var uLocal_798 = 0;
    var uLocal_799 = 0;
    var uLocal_800 = -1;
    var uLocal_801 = 0;
    var uLocal_802 = -1;
    var uLocal_803 = -1;
    var uLocal_804 = 0;
    var uLocal_805 = 0;
    var uLocal_806 = 0;
    var uLocal_807 = 0;
    var uLocal_808 = 0;
    var uLocal_809 = 0;
    var uLocal_810 = 0;
    var uLocal_811 = 0;
    var uLocal_812 = 0;
    var uLocal_813 = 0;
    var uLocal_814 = 0;
    var uLocal_815 = 0;
    var uLocal_816 = 0;
    var uLocal_817 = 0;
    var uLocal_818 = 0;
    var uLocal_819 = 0;
    var uLocal_820 = 0;
    var uLocal_821 = 0;
    var uLocal_822 = 0;
    var uLocal_823 = 0;
    var uLocal_824 = 0;
    var uLocal_825 = -1082130432;
    var uLocal_826 = 3;
    var uLocal_827 = 0;
    var uLocal_828 = 0;
    var uLocal_829 = 0;
    var uLocal_830 = 0;
    var uLocal_831 = 0;
    var uLocal_832 = 0;
    var uLocal_833 = 0;
    var uLocal_834 = 0;
    var uLocal_835 = 0;
    var uLocal_836 = 0;
    var uLocal_837 = 0;
    var uLocal_838 = 0;
    var uLocal_839 = 0;
    var uLocal_840 = 0;
    var uLocal_841 = 0;
    var uLocal_842 = -1;
    var uLocal_843 = 0;
    var uLocal_844 = -1;
    var uLocal_845 = -1;
    var uLocal_846 = 0;
    var uLocal_847 = 0;
    var uLocal_848 = 0;
    var uLocal_849 = 0;
    var uLocal_850 = 0;
    var uLocal_851 = 0;
    var uLocal_852 = 0;
    var uLocal_853 = 0;
    var uLocal_854 = 0;
    var uLocal_855 = 0;
    var uLocal_856 = 0;
    var uLocal_857 = 0;
    var uLocal_858 = 0;
    var uLocal_859 = 0;
    var uLocal_860 = 0;
    var uLocal_861 = 0;
    var uLocal_862 = 0;
    var uLocal_863 = 0;
    var uLocal_864 = 0;
    var uLocal_865 = 0;
    var uLocal_866 = 0;
    var uLocal_867 = -1082130432;
    var uLocal_868 = 3;
    var uLocal_869 = 0;
    var uLocal_870 = 0;
    var uLocal_871 = 0;
    var uLocal_872 = 0;
    var uLocal_873 = 0;
    var uLocal_874 = 0;
    var uLocal_875 = 0;
    var uLocal_876 = 0;
    var uLocal_877 = 0;
    var uLocal_878 = 0;
    var uLocal_879 = 0;
    var uLocal_880 = 0;
    var uLocal_881 = 0;
    var uLocal_882 = 0;
    var uLocal_883 = 0;
    var uLocal_884 = -1;
    var uLocal_885 = 0;
    var uLocal_886 = -1;
    var uLocal_887 = -1;
    var uLocal_888 = 0;
    var uLocal_889 = 0;
    var uLocal_890 = 0;
    var uLocal_891 = 0;
    var uLocal_892 = 0;
    var uLocal_893 = 0;
    var uLocal_894 = 0;
    var uLocal_895 = 0;
    var uLocal_896 = 0;
    var uLocal_897 = 0;
    var uLocal_898 = 0;
    var uLocal_899 = 0;
    var uLocal_900 = 0;
    var uLocal_901 = 0;
    var uLocal_902 = 0;
    var uLocal_903 = 0;
    var uLocal_904 = 0;
    var uLocal_905 = 0;
    var uLocal_906 = 0;
    var uLocal_907 = 0;
    var uLocal_908 = 0;
    var uLocal_909 = -1082130432;
    var uLocal_910 = 3;
    var uLocal_911 = 0;
    var uLocal_912 = 0;
    var uLocal_913 = 0;
    var uLocal_914 = 0;
    var uLocal_915 = 0;
    var uLocal_916 = 0;
    var uLocal_917 = 0;
    var uLocal_918 = 0;
    var uLocal_919 = 0;
    var uLocal_920 = 0;
    var uLocal_921 = 0;
    var uLocal_922 = 0;
    var uLocal_923 = 0;
    var uLocal_924 = 0;
    var uLocal_925 = 0;
    var uLocal_926 = -1;
    var uLocal_927 = 0;
    var uLocal_928 = -1;
    var uLocal_929 = -1;
    var uLocal_930 = 0;
    var uLocal_931 = 0;
    var uLocal_932 = 0;
    var uLocal_933 = 0;
    var uLocal_934 = 0;
    var uLocal_935 = 0;
    var uLocal_936 = 0;
    var uLocal_937 = 0;
    var uLocal_938 = 0;
    var uLocal_939 = 0;
    var uLocal_940 = 0;
    var uLocal_941 = 0;
    var uLocal_942 = 0;
    var uLocal_943 = 0;
    var uLocal_944 = 0;
    var uLocal_945 = 0;
    var uLocal_946 = 0;
    var uLocal_947 = 0;
    var uLocal_948 = 0;
    var uLocal_949 = 0;
    var uLocal_950 = 0;
    var uLocal_951 = -1082130432;
    var uLocal_952 = 3;
    var uLocal_953 = 0;
    var uLocal_954 = 0;
    var uLocal_955 = 0;
    var uLocal_956 = 0;
    var uLocal_957 = 0;
    var uLocal_958 = 0;
    var uLocal_959 = 0;
    var uLocal_960 = 0;
    var uLocal_961 = 0;
    var uLocal_962 = 0;
    var uLocal_963 = 0;
    var uLocal_964 = 0;
    var uLocal_965 = 0;
    var uLocal_966 = 0;
    var uLocal_967 = 0;
    var uLocal_968 = -1;
    var uLocal_969 = 0;
    var uLocal_970 = -1;
    var uLocal_971 = -1;
    var uLocal_972 = 0;
    var uLocal_973 = 0;
    var uLocal_974 = 0;
    var uLocal_975 = 0;
    var uLocal_976 = 0;
    var uLocal_977 = 0;
    var uLocal_978 = 0;
    var uLocal_979 = 0;
    var uLocal_980 = 0;
    var uLocal_981 = 0;
    var uLocal_982 = 0;
    var uLocal_983 = 0;
    var uLocal_984 = 0;
    var uLocal_985 = 0;
    var uLocal_986 = 0;
    var uLocal_987 = 0;
    var uLocal_988 = 0;
    var uLocal_989 = 0;
    var uLocal_990 = 0;
    var uLocal_991 = 0;
    var uLocal_992 = 0;
    var uLocal_993 = -1082130432;
    var uLocal_994 = 3;
    var uLocal_995 = 0;
    var uLocal_996 = 0;
    var uLocal_997 = 0;
    var uLocal_998 = 0;
    var uLocal_999 = 0;
    var uLocal_1000 = 0;
    var uLocal_1001 = 0;
    var uLocal_1002 = 0;
    var uLocal_1003 = 0;
    var uLocal_1004 = 0;
    var uLocal_1005 = 0;
    var uLocal_1006 = 0;
    var uLocal_1007 = 0;
    var uLocal_1008 = 0;
    var uLocal_1009 = 0;
    var uLocal_1010 = -1;
    var uLocal_1011 = 0;
    var uLocal_1012 = -1;
    var uLocal_1013 = -1;
    var uLocal_1014 = 0;
    var uLocal_1015 = 0;
    var uLocal_1016 = 0;
    var uLocal_1017 = 0;
    var uLocal_1018 = 0;
    var uLocal_1019 = 0;
    var uLocal_1020 = 0;
    var uLocal_1021 = 0;
    var uLocal_1022 = 0;
    var uLocal_1023 = 0;
    var uLocal_1024 = 0;
    var uLocal_1025 = 0;
    var uLocal_1026 = 0;
    var uLocal_1027 = 0;
    var uLocal_1028 = 0;
    var uLocal_1029 = 0;
    var uLocal_1030 = 0;
    var uLocal_1031 = 0;
    var uLocal_1032 = 0;
    var uLocal_1033 = 0;
    var uLocal_1034 = 0;
    var uLocal_1035 = -1082130432;
    var uLocal_1036 = 3;
    var uLocal_1037 = 0;
    var uLocal_1038 = 0;
    var uLocal_1039 = 0;
    var uLocal_1040 = 0;
    var uLocal_1041 = 0;
    var uLocal_1042 = 0;
    var uLocal_1043 = 0;
    var uLocal_1044 = 0;
    var uLocal_1045 = 0;
    var uLocal_1046 = 0;
    var uLocal_1047 = 0;
    var uLocal_1048 = 0;
    var uLocal_1049 = 0;
    var uLocal_1050 = 0;
    var uLocal_1051 = 0;
    var uLocal_1052 = -1;
    var uLocal_1053 = 0;
    var uLocal_1054 = -1;
    var uLocal_1055 = -1;
    var uLocal_1056 = 0;
    var uLocal_1057 = 0;
    var uLocal_1058 = 0;
    var uLocal_1059 = 0;
    var uLocal_1060 = 0;
    var uLocal_1061 = 0;
    var uLocal_1062 = 0;
    var uLocal_1063 = 0;
    var uLocal_1064 = 0;
    var uLocal_1065 = 0;
    var uLocal_1066 = 0;
    var uLocal_1067 = 0;
    var uLocal_1068 = 0;
    var uLocal_1069 = 0;
    var uLocal_1070 = 0;
    var uLocal_1071 = 0;
    var uLocal_1072 = 0;
    var uLocal_1073 = 0;
    var uLocal_1074 = 0;
    var uLocal_1075 = 0;
    var uLocal_1076 = 0;
    var uLocal_1077 = -1082130432;
    var uLocal_1078 = 3;
    var uLocal_1079 = 0;
    var uLocal_1080 = 0;
    var uLocal_1081 = 0;
    var uLocal_1082 = 0;
    var uLocal_1083 = 0;
    var uLocal_1084 = 0;
    var uLocal_1085 = 0;
    var uLocal_1086 = 0;
    var uLocal_1087 = 0;
    var uLocal_1088 = 0;
    var uLocal_1089 = 0;
    var uLocal_1090 = 0;
    var uLocal_1091 = 0;
    var uLocal_1092 = 0;
    var uLocal_1093 = 0;
    var uLocal_1094 = -1;
    var uLocal_1095 = 0;
    var uLocal_1096 = -1;
    var uLocal_1097 = -1;
    var uLocal_1098 = 0;
    var uLocal_1099 = 0;
    var uLocal_1100 = 0;
    var uLocal_1101 = 0;
    var uLocal_1102 = 0;
    var uLocal_1103 = 0;
    var uLocal_1104 = 0;
    var uLocal_1105 = 0;
    var uLocal_1106 = 0;
    var uLocal_1107 = 0;
    var uLocal_1108 = 0;
    var uLocal_1109 = 0;
    var uLocal_1110 = 0;
    var uLocal_1111 = 0;
    var uLocal_1112 = 0;
    var uLocal_1113 = 0;
    var uLocal_1114 = 0;
    var uLocal_1115 = 0;
    var uLocal_1116 = 0;
    var uLocal_1117 = 0;
    var uLocal_1118 = 0;
    var uLocal_1119 = -1082130432;
    var uLocal_1120 = 3;
    var uLocal_1121 = 0;
    var uLocal_1122 = 0;
    var uLocal_1123 = 0;
    var uLocal_1124 = 0;
    var uLocal_1125 = 0;
    var uLocal_1126 = 0;
    var uLocal_1127 = 0;
    var uLocal_1128 = 0;
    var uLocal_1129 = 0;
    var uLocal_1130 = 0;
    var uLocal_1131 = 0;
    var uLocal_1132 = 0;
    var uLocal_1133 = 0;
    var uLocal_1134 = 0;
    var uLocal_1135 = 0;
    var uLocal_1136 = -1;
    var uLocal_1137 = 0;
    var uLocal_1138 = -1;
    var uLocal_1139 = -1;
    var uLocal_1140 = 0;
    var uLocal_1141 = 0;
    var uLocal_1142 = 0;
    var uLocal_1143 = 0;
    var uLocal_1144 = 0;
    var uLocal_1145 = 0;
    var uLocal_1146 = 0;
    var uLocal_1147 = 0;
    var uLocal_1148 = 0;
    var uLocal_1149 = 0;
    var uLocal_1150 = 0;
    var uLocal_1151 = 0;
    var uLocal_1152 = 0;
    var uLocal_1153 = 0;
    var uLocal_1154 = 0;
    var uLocal_1155 = 0;
    var uLocal_1156 = 0;
    var uLocal_1157 = 0;
    var uLocal_1158 = 0;
    var uLocal_1159 = 0;
    var uLocal_1160 = 0;
    var uLocal_1161 = -1082130432;
    var uLocal_1162 = 3;
    var uLocal_1163 = 0;
    var uLocal_1164 = 0;
    var uLocal_1165 = 0;
    var uLocal_1166 = 0;
    var uLocal_1167 = 0;
    var uLocal_1168 = 0;
    var uLocal_1169 = 0;
    var uLocal_1170 = 0;
    var uLocal_1171 = 0;
    var uLocal_1172 = 0;
    var uLocal_1173 = 0;
    var uLocal_1174 = 0;
    var uLocal_1175 = 0;
    var uLocal_1176 = 0;
    var uLocal_1177 = 0;
    var uLocal_1178 = -1;
    var uLocal_1179 = 0;
    var uLocal_1180 = -1;
    var uLocal_1181 = -1;
    var uLocal_1182 = 0;
    var uLocal_1183 = 0;
    var uLocal_1184 = 0;
    var uLocal_1185 = 0;
    var uLocal_1186 = 0;
    var uLocal_1187 = 0;
    var uLocal_1188 = 0;
    var uLocal_1189 = 0;
    var uLocal_1190 = 0;
    var uLocal_1191 = 0;
    var uLocal_1192 = 0;
    var uLocal_1193 = 0;
    var uLocal_1194 = 0;
    var uLocal_1195 = 0;
    var uLocal_1196 = 0;
    var uLocal_1197 = 0;
    var uLocal_1198 = 0;
    var uLocal_1199 = 0;
    var uLocal_1200 = 0;
    var uLocal_1201 = 0;
    var uLocal_1202 = 0;
    var uLocal_1203 = -1082130432;
    var uLocal_1204 = 3;
    var uLocal_1205 = 0;
    var uLocal_1206 = 0;
    var uLocal_1207 = 0;
    var uLocal_1208 = 0;
    var uLocal_1209 = 0;
    var uLocal_1210 = 0;
    var uLocal_1211 = 0;
    var uLocal_1212 = 0;
    var uLocal_1213 = 0;
    var uLocal_1214 = 0;
    var uLocal_1215 = 0;
    var uLocal_1216 = 0;
    var uLocal_1217 = 0;
    var uLocal_1218 = 0;
    var uLocal_1219 = 0;
    var uLocal_1220 = -1;
    var uLocal_1221 = 0;
    var uLocal_1222 = -1;
    var uLocal_1223 = -1;
    var uLocal_1224 = 0;
    var uLocal_1225 = 0;
    var uLocal_1226 = 0;
    var uLocal_1227 = 0;
    var uLocal_1228 = 0;
    var uLocal_1229 = 0;
    var uLocal_1230 = 0;
    var uLocal_1231 = 0;
    var uLocal_1232 = 0;
    var uLocal_1233 = 0;
    var uLocal_1234 = 0;
    var uLocal_1235 = 0;
    var uLocal_1236 = 0;
    var uLocal_1237 = 0;
    var uLocal_1238 = 0;
    var uLocal_1239 = 0;
    var uLocal_1240 = 0;
    var uLocal_1241 = 0;
    var uLocal_1242 = 0;
    var uLocal_1243 = 0;
    var uLocal_1244 = 0;
    var uLocal_1245 = -1082130432;
    var uLocal_1246 = 3;
    var uLocal_1247 = 0;
    var uLocal_1248 = 0;
    var uLocal_1249 = 0;
    var uLocal_1250 = 0;
    var uLocal_1251 = 0;
    var uLocal_1252 = 0;
    var uLocal_1253 = 0;
    var uLocal_1254 = 0;
    var uLocal_1255 = 0;
    var uLocal_1256 = 0;
    var uLocal_1257 = 0;
    var uLocal_1258 = 0;
    var uLocal_1259 = 0;
    var uLocal_1260 = 0;
    var uLocal_1261 = 0;
    var uLocal_1262 = -1;
    var uLocal_1263 = 0;
    var uLocal_1264 = -1;
    var uLocal_1265 = -1;
    var uLocal_1266 = 0;
    var uLocal_1267 = 0;
    var uLocal_1268 = 0;
    var uLocal_1269 = 0;
    var uLocal_1270 = 0;
    var uLocal_1271 = 0;
    var uLocal_1272 = 0;
    var uLocal_1273 = 0;
    var uLocal_1274 = 0;
    var uLocal_1275 = 0;
    var uLocal_1276 = 0;
    var uLocal_1277 = 0;
    var uLocal_1278 = 0;
    var uLocal_1279 = 0;
    var uLocal_1280 = 0;
    var uLocal_1281 = 0;
    var uLocal_1282 = 0;
    var uLocal_1283 = 0;
    var uLocal_1284 = 0;
    var uLocal_1285 = 0;
    var uLocal_1286 = 0;
    var uLocal_1287 = -1082130432;
    var uLocal_1288 = 3;
    var uLocal_1289 = 0;
    var uLocal_1290 = 0;
    var uLocal_1291 = 0;
    var uLocal_1292 = 0;
    var uLocal_1293 = 0;
    var uLocal_1294 = 0;
    var uLocal_1295 = 0;
    var uLocal_1296 = 0;
    var uLocal_1297 = 0;
    var uLocal_1298 = 0;
    var uLocal_1299 = 0;
    var uLocal_1300 = 0;
    var uLocal_1301 = 0;
    var uLocal_1302 = 0;
    var uLocal_1303 = 0;
    var uLocal_1304 = -1;
    var uLocal_1305 = 0;
    var uLocal_1306 = -1;
    var uLocal_1307 = -1;
    var uLocal_1308 = 0;
    var uLocal_1309 = 0;
    var uLocal_1310 = 0;
    var uLocal_1311 = 0;
    var uLocal_1312 = 0;
    var uLocal_1313 = 0;
    var uLocal_1314 = 0;
    var uLocal_1315 = 0;
    var uLocal_1316 = 0;
    var uLocal_1317 = 0;
    var uLocal_1318 = 0;
    var uLocal_1319 = 0;
    var uLocal_1320 = 0;
    var uLocal_1321 = 0;
    var uLocal_1322 = 0;
    var uLocal_1323 = 0;
    var uLocal_1324 = 0;
    var uLocal_1325 = 0;
    var uLocal_1326 = 0;
    var uLocal_1327 = 0;
    var uLocal_1328 = 0;
    var uLocal_1329 = -1082130432;
    var uLocal_1330 = 3;
    var uLocal_1331 = 0;
    var uLocal_1332 = 0;
    var uLocal_1333 = 0;
    var uLocal_1334 = 0;
    var uLocal_1335 = 0;
    var uLocal_1336 = 0;
    var uLocal_1337 = 0;
    var uLocal_1338 = 0;
    var uLocal_1339 = 0;
    var uLocal_1340 = 0;
    var uLocal_1341 = 0;
    var uLocal_1342 = 0;
    var uLocal_1343 = 0;
    var uLocal_1344 = 0;
    var uLocal_1345 = 0;
    var uLocal_1346 = -1;
    var uLocal_1347 = 0;
    var uLocal_1348 = -1;
    var uLocal_1349 = -1;
    var uLocal_1350 = 0;
    var uLocal_1351 = 0;
    var uLocal_1352 = 0;
    var uLocal_1353 = 0;
    var uLocal_1354 = 0;
    var uLocal_1355 = 0;
    var uLocal_1356 = 0;
    var uLocal_1357 = 0;
    var uLocal_1358 = 0;
    var uLocal_1359 = 0;
    var uLocal_1360 = 0;
    var uLocal_1361 = 0;
    var uLocal_1362 = 0;
    var uLocal_1363 = 0;
    var uLocal_1364 = 0;
    var uLocal_1365 = 0;
    var uLocal_1366 = 0;
    var uLocal_1367 = 0;
    var uLocal_1368 = 0;
    var uLocal_1369 = 0;
    var uLocal_1370 = 0;
    var uLocal_1371 = -1082130432;
    var uLocal_1372 = 3;
    var uLocal_1373 = 0;
    var uLocal_1374 = 0;
    var uLocal_1375 = 0;
    var uLocal_1376 = 0;
    var uLocal_1377 = 0;
    var uLocal_1378 = 0;
    var uLocal_1379 = 0;
    var uLocal_1380 = 0;
    var uLocal_1381 = 0;
    var uLocal_1382 = 0;
    var uLocal_1383 = 0;
    var uLocal_1384 = 0;
    var uLocal_1385 = 0;
    var uLocal_1386 = 0;
    var uLocal_1387 = 0;
    var uLocal_1388 = -1;
    var uLocal_1389 = 0;
    var uLocal_1390 = -1;
    var uLocal_1391 = -1;
    var uLocal_1392 = 0;
    var uLocal_1393 = 0;
    var uLocal_1394 = 0;
    var uLocal_1395 = 0;
    var uLocal_1396 = 0;
    var uLocal_1397 = 0;
    var uLocal_1398 = 0;
    var uLocal_1399 = 0;
    var uLocal_1400 = 0;
    var uLocal_1401 = 0;
    var uLocal_1402 = 0;
    var uLocal_1403 = 0;
    var uLocal_1404 = 0;
    var uLocal_1405 = 0;
    var uLocal_1406 = 0;
    var uLocal_1407 = 0;
    var uLocal_1408 = 0;
    var uLocal_1409 = 0;
    var uLocal_1410 = 0;
    var uLocal_1411 = 0;
    var uLocal_1412 = 0;
    var uLocal_1413 = -1082130432;
    var uLocal_1414 = 3;
    var uLocal_1415 = 0;
    var uLocal_1416 = 0;
    var uLocal_1417 = 0;
    var uLocal_1418 = 0;
    var uLocal_1419 = 0;
    var uLocal_1420 = 0;
    var uLocal_1421 = 0;
    var uLocal_1422 = 0;
    var uLocal_1423 = 0;
    var uLocal_1424 = 0;
    var uLocal_1425 = 0;
    var uLocal_1426 = 0;
    var uLocal_1427 = 0;
    var uLocal_1428 = 0;
    var uLocal_1429 = 0;
    var uLocal_1430 = -1;
    var uLocal_1431 = 0;
    var uLocal_1432 = -1;
    var uLocal_1433 = -1;
    var uLocal_1434 = 0;
    var uLocal_1435 = 0;
    var uLocal_1436 = 0;
    var uLocal_1437 = 0;
    var uLocal_1438 = 0;
    var uLocal_1439 = 0;
    var uLocal_1440 = 0;
    var uLocal_1441 = 0;
    var uLocal_1442 = 0;
    var uLocal_1443 = 0;
    var uLocal_1444 = 0;
    var uLocal_1445 = 0;
    var uLocal_1446 = 0;
    var uLocal_1447 = 0;
    var uLocal_1448 = 0;
    var uLocal_1449 = 0;
    var uLocal_1450 = 0;
    var uLocal_1451 = 0;
    var uLocal_1452 = 0;
    var uLocal_1453 = 0;
    var uLocal_1454 = 0;
    var uLocal_1455 = -1082130432;
    var uLocal_1456 = 3;
    var uLocal_1457 = 0;
    var uLocal_1458 = 0;
    var uLocal_1459 = 0;
    var uLocal_1460 = 0;
    var uLocal_1461 = 0;
    var uLocal_1462 = 0;
    var uLocal_1463 = 0;
    var uLocal_1464 = 0;
    var uLocal_1465 = 0;
    var uLocal_1466 = 0;
    var uLocal_1467 = 0;
    var uLocal_1468 = 0;
    var uLocal_1469 = 0;
    var uLocal_1470 = 0;
    var uLocal_1471 = 0;
    var uLocal_1472 = -1;
    var uLocal_1473 = 0;
    var uLocal_1474 = -1;
    var uLocal_1475 = -1;
    var uLocal_1476 = 0;
    var uLocal_1477 = 0;
    var uLocal_1478 = 0;
    var uLocal_1479 = 0;
    var uLocal_1480 = 0;
    var uLocal_1481 = 0;
    var uLocal_1482 = 0;
    var uLocal_1483 = 0;
    var uLocal_1484 = 0;
    var uLocal_1485 = 0;
    var uLocal_1486 = 0;
    var uLocal_1487 = 0;
    var uLocal_1488 = 0;
    var uLocal_1489 = 0;
    var uLocal_1490 = 0;
    var uLocal_1491 = 0;
    var uLocal_1492 = 0;
    var uLocal_1493 = 0;
    var uLocal_1494 = 0;
    var uLocal_1495 = 0;
    var uLocal_1496 = 0;
    var uLocal_1497 = -1082130432;
    var uLocal_1498 = 3;
    var uLocal_1499 = 0;
    var uLocal_1500 = 0;
    var uLocal_1501 = 0;
    var uLocal_1502 = 0;
    var uLocal_1503 = 0;
    var uLocal_1504 = 0;
    var uLocal_1505 = 0;
    var uLocal_1506 = 0;
    var uLocal_1507 = 0;
    var uLocal_1508 = 0;
    var uLocal_1509 = 0;
    var uLocal_1510 = 0;
    var uLocal_1511 = 0;
    var uLocal_1512 = 0;
    var uLocal_1513 = 0;
    var uLocal_1514 = -1;
    var uLocal_1515 = 0;
    var uLocal_1516 = -1;
    struct<12> Local_1517 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
    struct<5> Local_1518[32];
    struct<21> Local_1519 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
    fLocal_21 = 0f;
    fLocal_25 = -0.0375f;
    fLocal_26 = 0.17f;
    fLocal_30 = 80f;
    fLocal_31 = 140f;
    fLocal_32 = 180f;
    iLocal_36 = 3;
    iLocal_40 = 1;
    iLocal_41 = 65;
    iLocal_42 = 49;
    iLocal_43 = 64;
    fLocal_94 = ((0.05f + 0.275f) - 0.01f);
    iLocal_110 = -1;
    iLocal_111 = -1;
    if (unk_0x393E9918BC37548A())
    {
        if (!func_720(ScriptParam_1519))
        {
            func_682();
        }
    }
    while (true)
    {
        func_681();
        if (func_674() || func_672())
        {
            func_682();
        }
        func_645();
        switch (func_644(unk_0x45F54089C0F6B392()))
        {
            case 0:
                if (func_643() == 1)
                {
                    if (func_641())
                    {
                        func_640(unk_0x45F54089C0F6B392(), 1);
                    }
                }
                break;
            
            case 1:
                if (func_643() == 1)
                {
                    func_137();
                    func_125();
                }
                else if (func_643() == 3)
                {
                    func_640(unk_0x45F54089C0F6B392(), 3);
                }
                break;
            
            case 3:
                func_682();
                break;
        }
        if (unk_0x722688699565161D())
        {
            switch (func_643())
            {
                case 0:
                    if (func_108())
                    {
                        func_107(1);
                    }
                    break;
                
                case 1:
                    if (Local_151.f_8 == 6)
                    {
                        func_107(2);
                    }
                    else
                    {
                        func_3();
                    }
                    break;
                
                case 2:
                    if (func_1(&uLocal_132, 1000, 0))
                    {
                        func_107(3);
                    }
                    break;
                
                case 3:
                    func_682();
                    break;
                }
        }
    }
}

int func_1(var uParam0, int iParam1, bool bParam2)//Position - 0x19B
{
    if (iParam1 == -1)
    {
        return 1;
    }
    func_2(uParam0, bParam2, 0);
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

void func_2(var uParam0, bool bParam1, bool bParam2)//Position - 0x1F9
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

void func_3()//Position - 0x23E
{
    if (func_35(2, 0, 0, 0, 0))
    {
        if (!unk_0xA2BC31158C8CEFD2(Local_151.f_2, 2))
        {
            Local_151.f_1 = unk_0x169A8AC9F93C2727();
            unk_0xA1E7A40E1F56E511(&(Local_151.f_2), 2);
        }
    }
    switch (Local_151.f_8)
    {
        case 0:
            if (func_34())
            {
                if (func_24())
                {
                    func_23(1);
                }
            }
            else
            {
                func_23(1);
            }
            break;
        
        case 1:
            if (func_1(&(Local_151.f_29B), Global_40001.f_2B6A, 0) || unk_0xA2BC31158C8CEFD2(Local_151.f_2, 2))
            {
                func_23(2);
            }
            func_24();
            break;
        
        case 2:
            Local_151.f_9 = unk_0x169A8AC9F93C2727();
            func_23(3);
            break;
        
        case 3:
            if ((func_22() || func_1(&(Local_151.f_295), Global_40001.f_2B69, 0)) || unk_0xA2BC31158C8CEFD2(Local_151.f_2, 2))
            {
                if (!unk_0xA2BC31158C8CEFD2(Local_151.f_2, 1) && func_21())
                {
                    func_20(&(Local_151.f_295), 0, 0);
                    unk_0xA1E7A40E1F56E511(&(Local_151.f_2), 1);
                }
                else
                {
                    func_23(4);
                    Local_151.f_1 = unk_0x169A8AC9F93C2727();
                }
            }
            func_8();
            iLocal_113++;
            if (iLocal_113 >= Local_151.f_2C5)
            {
                iLocal_113 = 0;
            }
            func_24();
            break;
        
        case 4:
            if (func_1(&(Local_151.f_297), 20000, 0) || func_5())
            {
                if (func_34())
                {
                    func_20(&(Local_151.f_29D), 0, 0);
                    func_23(5);
                }
                else
                {
                    func_23(6);
                }
            }
            func_24();
            break;
        
        case 5:
            if (func_4())
            {
                func_23(6);
            }
            break;
        
        case 6:
            break;
    }
}

int func_4()//Position - 0x3EA
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 10)
    {
        if (unk_0x8A7BBB98FFB32893(Local_151.f_2D9[iVar0 /*2*/].f_1) && !unk_0xF4B969E0807E76C7(unk_0xAEA6D4EC961DFA03(Local_151.f_2D9[iVar0 /*2*/].f_1), 0))
        {
            return 0;
        }
        iVar0++;
    }
    return 1;
}

int func_5()//Position - 0x438
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    while (iVar0 < unk_0xACF7D965CEBE5714())
    {
        if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar0)))
        {
            iVar1 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar0));
            if (!func_6(iVar1))
            {
                if ((!unk_0xA2BC31158C8CEFD2(Local_1518[iVar0 /*5*/].f_2, 0) || Local_1518[iVar0 /*5*/].f_3 != 6) || (unk_0xA2BC31158C8CEFD2(Local_151.f_2, 0) && !unk_0xA2BC31158C8CEFD2(Local_1518[iVar0 /*5*/].f_2, 1)))
                {
                    return 0;
                }
            }
        }
        iVar0++;
    }
    return 1;
}

bool func_6(int iParam0)//Position - 0x4C4
{
    if (func_7(iParam0))
    {
        return 1;
    }
    return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_1, 8);
}

bool func_7(int iParam0)//Position - 0x4EA
{
    return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_1, 2);
}

void func_8()//Position - 0x502
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    
    iVar2 = 0;
    while (iVar2 < unk_0xACF7D965CEBE5714())
    {
        if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar2)))
        {
            unk_0xA1E7A40E1F56E511(&iVar3, iVar2);
        }
        else
        {
            func_19(iVar2);
        }
        iVar2++;
    }
    iVar2 = 0;
    while (iVar2 < unk_0xACF7D965CEBE5714())
    {
        if (unk_0xA2BC31158C8CEFD2(iVar3, iVar2))
        {
            if (func_18(iVar2))
            {
                iVar1++;
            }
            iVar0++;
            func_15(iVar2);
            func_9(iVar2);
            unk_0xA1E7A40E1F56E511(&(Local_151.f_2A1), iVar2);
        }
        iVar2++;
    }
    if (iVar0 > Local_151.f_2D7)
    {
        Local_151.f_2D7 = iVar0;
    }
    else
    {
        Local_151.f_2D6 = (Local_151.f_2D7 - iVar0);
    }
    if (iVar1 > Local_151.f_2D8)
    {
        Local_151.f_2D8 = iVar1;
    }
}

void func_9(int iParam0)//Position - 0x5C2
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    
    iVar0 = Local_1518[iParam0 /*5*/].f_4;
    iVar2 = -2;
    iVar1 = 0;
    while (iVar1 < 32)
    {
        if (Local_151.f_2A2[iVar1] == iParam0)
        {
            iVar1 = 32;
        }
        else if (iVar2 >= -1)
        {
            if (iVar2 >= 0)
            {
                func_14(&(Local_151.f_2A2[iVar1]), &iVar2);
            }
        }
        else if (Local_151.f_2A2[iVar1] < 0 || iVar0 > Local_1518[Local_151.f_2A2[iVar1] /*5*/].f_4)
        {
            iVar2 = Local_151.f_2A2[iVar1];
            if (iVar0 != 0)
            {
                func_10(Local_151.f_2A2[iVar1], iParam0, iVar1);
            }
            Local_151.f_2A2[iVar1] = iParam0;
            iVar3 = iVar1 + 1;
            while (iVar3 <= 31)
            {
                if (Local_151.f_2A2[iVar3] == iParam0)
                {
                    Local_151.f_2A2[iVar3] = -1;
                }
                iVar3++;
            }
        }
        iVar1++;
    }
}

void func_10(var uParam0, int iParam1, int iParam2)//Position - 0x6AB
{
    struct<14> Var0;
    int iVar1;
    
    iVar1 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iParam1));
    if (iParam2 == 0)
    {
        Var0.f_2 = -1057008853;
        Var0.f_A = iVar1;
        func_11(Var0, func_12(1));
    }
}

void func_11(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x6E2
{
    Param0 = 564131320;
    Param0.f_1 = unk_0x7C7787D2D7139A85();
    if (!iParam13 == 0)
    {
        unk_0x990C4E4B3665A4D6(1, &Param0, 14, iParam13);
    }
}

int func_12(int iParam0)//Position - 0x70F
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
            if (func_13(iVar2, 0, 0))
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

int func_13(int iParam0, bool bParam1, bool bParam2)//Position - 0x76C
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

void func_14(var uParam0, int iParam1)//Position - 0x7B6
{
    *uParam0 = (*uParam0 + *iParam1);
    *iParam1 = (*uParam0 - *iParam1);
    *uParam0 = (*uParam0 - *iParam1);
}

void func_15(int iParam0)//Position - 0x7DC
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    iVar3 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iParam0));
    iVar0 = iVar3;
    if (Global_26A0A9.f_128A.f_26[iVar0] >= 0)
    {
        iVar4 = Global_26A0A9.f_128A.f_26[iVar0];
        iVar1 = Global_26A0A9.f_128A.f_5[iVar0];
        if (!unk_0xA2BC31158C8CEFD2(Local_151.f_3[func_17(iVar4)], func_16(iVar4)))
        {
            if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_128A[func_17(iVar4)], func_16(iVar4)))
            {
                if (func_1(&uLocal_130, 750, 0))
                {
                    if (iVar1 != 0)
                    {
                        if (iVar1 < iVar2 || iVar2 == 0)
                        {
                            iVar2 = iVar1;
                            Local_151.f_A[iVar4 /*5*/].f_3 = iParam0;
                            Global_26A0A9.f_128A.f_26[iVar0] = -1;
                            unk_0xA1E7A40E1F56E511(&(Local_151.f_3[func_17(iVar4)]), func_16(iVar4));
                            Local_151.f_2C4 = (Local_151.f_2C4 - 1);
                        }
                    }
                }
            }
        }
    }
}

int func_16(int iParam0)//Position - 0x8C4
{
    if (iParam0 < 31)
    {
        return iParam0;
    }
    else if (iParam0 < 62)
    {
        return (iParam0 - 31);
    }
    return (iParam0 - func_17(iParam0) * 31);
}

int func_17(int iParam0)//Position - 0x8F5
{
    if (iParam0 < 31)
    {
        return 0;
    }
    else if (iParam0 < 62)
    {
        return 1;
    }
    return (iParam0 / 31);
}

int func_18(int iParam0)//Position - 0x91B
{
    if (iParam0 >= 0 && iParam0 < 32)
    {
        return Local_1518[iParam0 /*5*/].f_4 > 0;
    }
    return 0;
}

void func_19(int iParam0)//Position - 0x943
{
    int iVar0;
    int iVar1;
    
    if (unk_0xA2BC31158C8CEFD2(Local_151.f_2A1, iParam0))
    {
        iVar0 = 0;
        while (iVar0 < 32)
        {
            if (Local_151.f_2A2[iVar0] == iParam0)
            {
                Local_151.f_2A2[iVar0] = -1;
                iVar0 = 32;
            }
            iVar0++;
        }
        iVar1 = 0;
        while (iVar1 < Local_151.f_2C5)
        {
            if (Local_151.f_A[iVar1 /*5*/].f_3 == iParam0)
            {
                Local_151.f_A[iVar1 /*5*/].f_3 = -1;
            }
            iVar1++;
        }
        unk_0x3B76114EC84D5812(&(Local_151.f_2A1), iParam0);
    }
}

void func_20(var uParam0, bool bParam1, bool bParam2)//Position - 0x9CA
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

int func_21()//Position - 0xA07
{
    return 0;
}

int func_22()//Position - 0xA10
{
    if (Local_151.f_2C4 > 0)
    {
        return 0;
    }
    if (func_1(&(Local_151.f_29F), 750, 0))
    {
        unk_0xA1E7A40E1F56E511(&(Local_151.f_2), 0);
        return 1;
    }
    return 0;
}

void func_23(int iParam0)//Position - 0xA46
{
    Local_151.f_8 = iParam0;
}

int func_24()//Position - 0xA55
{
    struct<2> Var0;
    vector3 vVar1;
    float fVar2;
    int iVar3;
    
    if (func_34())
    {
        Var0 = { Local_151.f_2D9[iLocal_115 /*2*/] };
        if (func_33(Var0))
        {
            if (!unk_0x9C625F4590C97F13(Var0.f_1))
            {
                if (func_32(iLocal_115, &vVar1, &fVar2))
                {
                    Local_151.f_2C9[iLocal_115] = func_29(iLocal_115);
                    if (unk_0xA2BC31158C8CEFD2(Local_1518[Local_151.f_2C9[iLocal_115] /*5*/].f_1, iLocal_115))
                    {
                        if (func_26(&(Local_151.f_2D9[iLocal_115 /*2*/].f_1), Var0, vVar1, fVar2, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
                        {
                            unk_0x54B5C3A13D3588F0(unk_0x40237B62400B4BCC(Local_151.f_2D9[iLocal_115 /*2*/].f_1), 1);
                            unk_0x9D3FE4786B8925D2(unk_0x40237B62400B4BCC(Local_151.f_2D9[iLocal_115 /*2*/].f_1), 1);
                            unk_0xA0D3A754AED6B70B(unk_0x40237B62400B4BCC(Local_151.f_2D9[iLocal_115 /*2*/].f_1), 0);
                            func_25(unk_0x40237B62400B4BCC(Local_151.f_2D9[iLocal_115 /*2*/].f_1), 1);
                            if (unk_0xE9FEBBC43DAFBBAC("Not_Allow_As_Saved_Veh", 3))
                            {
                                unk_0x6950A3804E46BC89(unk_0x40237B62400B4BCC(Local_151.f_2D9[iLocal_115 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
                            }
                            if (unk_0xE9FEBBC43DAFBBAC("MPBitset", 3))
                            {
                                if (unk_0x145DAE1A4D0EA05D(unk_0x40237B62400B4BCC(Local_151.f_2D9[iLocal_115 /*2*/].f_1), "MPBitset"))
                                {
                                    iVar3 = unk_0x7CE457B32235D9D1(unk_0x40237B62400B4BCC(Local_151.f_2D9[iLocal_115 /*2*/].f_1), "MPBitset");
                                }
                                unk_0xA1E7A40E1F56E511(&iVar3, 10);
                                unk_0xA1E7A40E1F56E511(&iVar3, 11);
                                unk_0x6950A3804E46BC89(unk_0x40237B62400B4BCC(Local_151.f_2D9[iLocal_115 /*2*/].f_1), "MPBitset", iVar3);
                            }
                            Local_151.f_2C9[iLocal_115] = -1;
                        }
                    }
                }
            }
            iLocal_115++;
            if (iLocal_115 >= 10)
            {
                iLocal_115 = 0;
                return 1;
            }
        }
        return 0;
    }
    return 1;
}

void func_25(int iParam0, bool bParam1)//Position - 0xBEA
{
    int iVar0;
    
    if (unk_0xE9FEBBC43DAFBBAC("MPBitset", 3))
    {
        if (unk_0x145DAE1A4D0EA05D(iParam0, "MPBitset"))
        {
            iVar0 = unk_0x7CE457B32235D9D1(iParam0, "MPBitset");
        }
        if (bParam1)
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 13);
        }
        else
        {
            unk_0x3B76114EC84D5812(&iVar0, 13);
        }
        unk_0x6950A3804E46BC89(iParam0, "MPBitset", iVar0);
    }
}

int func_26(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0xC38
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
            func_27(vParam2, fParam3, iParam1, iVar1);
            return 1;
        }
    }
    return 0;
}

void func_27(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0xD40
{
    int iVar0;
    
    if (func_28(unk_0x7C7787D2D7139A85(), vParam0, iParam2) > -1)
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

int func_28(int iParam0, vector3 vParam1, int iParam2)//Position - 0xE13
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

int func_29(int iParam0)//Position - 0xEB1
{
    int iVar0;
    int iVar1;
    float fVar2;
    float fVar3;
    vector3 vVar4;
    var uVar5;
    int iVar6;
    
    fVar2 = 1000000f;
    if (func_32(iParam0, &vVar4, &uVar5))
    {
        iVar0 = 0;
        while (iVar0 <= (unk_0xACF7D965CEBE5714() - 1))
        {
            if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar0)))
            {
                iVar6 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar0));
                if (func_13(iVar6, 1, 1))
                {
                    fVar3 = func_30(func_31(iVar6), vVar4);
                    if (fVar3 < fVar2)
                    {
                        fVar2 = fVar3;
                        iVar1 = iVar0;
                    }
                }
            }
            iVar0++;
        }
    }
    return iVar1;
}

float func_30(vector3 vParam0, vector3 vParam1)//Position - 0xF2A
{
    vParam0.z = 0f;
    vParam1.z = 0f;
    return SYSTEM::VDIST(vParam0, vParam1);
}

Vector3 func_31(int iParam0)//Position - 0xF48
{
    return unk_0xACE5E491FC1B0D37(unk_0x23625FE58BACEBFD(iParam0), 0);
}

int func_32(int iParam0, var uParam1, var uParam2)//Position - 0xF5B
{
    switch (iParam0)
    {
        case 0:
            *uParam1 = { -1729.582f, -2943.77f, 12.9443f };
            *uParam2 = 300.078f;
            break;
        
        case 1:
            *uParam1 = { 677.2984f, 769.7758f, 204.6846f };
            *uParam2 = 82.8903f;
            break;
        
        case 2:
            *uParam1 = { 1073.972f, 3003.889f, 40.5508f };
            *uParam2 = 333.2717f;
            break;
        
        case 3:
            *uParam1 = { 1928.635f, 4702.327f, 40.1958f };
            *uParam2 = 327.9112f;
            break;
        
        case 4:
            *uParam1 = { 1278.65f, 6579.366f, 1.505f };
            *uParam2 = 84.26f;
            break;
        
        case 5:
            *uParam1 = { -1700.407f, -829.8932f, 8.2542f };
            *uParam2 = 70.1811f;
            break;
        
        case 6:
            *uParam1 = { -2733.589f, 2925.563f, 1.2152f };
            *uParam2 = 176.5378f;
            break;
        
        case 7:
            *uParam1 = { 1493.418f, -2442.99f, 64.9693f };
            *uParam2 = 52.9918f;
            break;
        
        case 8:
            *uParam1 = { 569.0449f, -772.5692f, 10.4088f };
            *uParam2 = 179.3501f;
            break;
        
        case 9:
            *uParam1 = { -905.1526f, 5548.172f, 5.5251f };
            *uParam2 = 95.8361f;
            break;
        
        default:
            return 0;
    }
    return 1;
}

bool func_33(int iParam0)//Position - 0x10D7
{
    if (iParam0 == 0)
    {
        return 1;
    }
    unk_0x6BB2B1818CAE531E(iParam0);
    return unk_0x6DF9C43E3CC645BC(iParam0);
}

bool func_34()//Position - 0x10F5
{
    return Local_151.f_2C3;
}

int func_35(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0x1103
{
    if (func_106(unk_0x7C7787D2D7139A85(), 0) || func_103(unk_0x7C7787D2D7139A85(), 0))
    {
        if (func_102(unk_0x7C7787D2D7139A85()) || func_100(unk_0x7C7787D2D7139A85()))
        {
            bParam2 = false;
        }
    }
    if (unk_0xABA4FE93FAF93E28() < iParam0)
    {
        if (bParam2)
        {
            func_43(sParam3, sParam4, 1);
        }
        if (func_42(26, -1))
        {
            func_39(26, -1);
        }
        return 1;
    }
    if (func_38(&(Global_1806F7.f_12)))
    {
        if (!func_1(&(Global_1806F7.f_12), 7500, 0))
        {
            return 0;
        }
        func_37(&(Global_1806F7.f_12));
    }
    if (func_36())
    {
        if (bParam2)
        {
            func_43(sParam3, sParam4, 0);
        }
        if (func_42(26, -1))
        {
            func_39(26, -1);
        }
        return 1;
    }
    if (iParam1 && unk_0xAAAE7D3270284C4E() < iParam0)
    {
        if (bParam2)
        {
            func_43(sParam3, sParam4, 1);
        }
        if (func_42(26, -1))
        {
            func_39(26, -1);
        }
        return 1;
    }
    return 0;
}

bool func_36()//Position - 0x11FA
{
    return unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 0);
}

void func_37(var uParam0)//Position - 0x120D
{
    uParam0->f_1 = 0;
}

bool func_38(var uParam0)//Position - 0x121A
{
    return uParam0->f_1;
}

void func_39(int iParam0, int iParam1)//Position - 0x1226
{
    int iVar0;
    int iVar1;
    
    if (iParam1 == -1)
    {
        iParam1 = func_41();
    }
    switch (iParam0)
    {
        case 0:
            unk_0x9380AC5E82FA214E(0, iParam1);
            break;
        
        default:
            iVar1 = func_40(iParam1);
            iVar0 = unk_0xFD4B2AAE20AA1CBB(iVar1);
            if (unk_0xA2BC31158C8CEFD2(iVar0, iParam0))
            {
                unk_0x3B76114EC84D5812(&iVar0, iParam0);
                unk_0x9380AC5E82FA214E(iVar0, iParam1);
            }
            break;
    }
}

int func_40(int iParam0)//Position - 0x1282
{
    int iVar0;
    
    if (iParam0 == -1)
    {
        iParam0 = func_41();
    }
    switch (iParam0)
    {
        case 0:
            iVar0 = 909;
            break;
        
        case 1:
            iVar0 = 910;
            break;
        
        case 2:
            iVar0 = 911;
            break;
        
        case 3:
            iVar0 = 912;
            break;
        
        case 4:
            iVar0 = 913;
            break;
    }
    return iVar0;
}

int func_41()//Position - 0x12E5
{
    return Global_1407E9;
}

bool func_42(int iParam0, int iParam1)//Position - 0x12F1
{
    int iVar0;
    int iVar1;
    
    if (iParam1 == -1)
    {
        iParam1 = func_41();
    }
    iVar0 = func_40(iParam1);
    iVar1 = unk_0xFD4B2AAE20AA1CBB(iVar0);
    return unk_0xA2BC31158C8CEFD2(iVar1, iParam0);
}

void func_43(char* sParam0, char* sParam1, bool bParam2)//Position - 0x131D
{
    if ((!unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 2) && !func_7(unk_0x7C7787D2D7139A85())) && !func_6(unk_0x7C7787D2D7139A85()))
    {
        if (unk_0x9591DE0F00127F2A(sParam0))
        {
            sParam0 = "FMEVEN_NUM1";
        }
        if (unk_0x9591DE0F00127F2A(sParam1))
        {
            if (bParam2)
            {
                sParam1 = "FMEVEN_NUM2";
            }
            else
            {
                sParam1 = "FMEVEN_NUM3";
            }
        }
        func_44(66, sParam0, sParam1, 1, -1, 2, 1, 0);
        unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 2);
    }
}

int func_44(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1394
{
    struct<80> Var0;
    
    Var0.f_3 = -1;
    Var0.f_4 = -1;
    Var0.f_5 = -1;
    Var0.f_6 = -1;
    Var0.f_7 = -1082130432;
    Var0.f_10 = 1;
    Var0.f_47 = 1;
    Var0.f_48 = 2;
    Var0.f_4F = -1;
    func_99(iParam0, &Var0, -1, sParam2, sParam1);
    Var0.f_47 = iParam3;
    Var0.f_6 = iParam4;
    Var0.f_48 = iParam5;
    Var0.f_10 = iParam6;
    if (iParam7 != 0)
    {
        func_97(&(Var0.f_45), iParam7);
    }
    return func_45(&Var0);
}

int func_45(var uParam0)//Position - 0x1414
{
    int iVar0;
    
    if (uParam0->f_1 == 1)
    {
        if (Global_2531AD.f_BD6)
        {
            return 0;
        }
    }
    func_60(uParam0, uParam0->f_11);
    func_57(uParam0);
    if (func_56())
    {
        func_57(uParam0);
    }
    if (func_55(uParam0->f_1))
    {
        func_48();
        if (Global_2531AD.f_A94[0 /*80*/].f_2 == 0)
        {
            Global_2531AD.f_A94[0 /*80*/] = { *uParam0 };
            return 1;
        }
        if (((Global_2531AD.f_A94[0 /*80*/].f_1 == 13 || Global_2531AD.f_A94[0 /*80*/].f_1 == 53) || Global_2531AD.f_A94[0 /*80*/].f_1 == 54) || Global_2531AD.f_A94[0 /*80*/].f_1 == 58)
        {
            Global_2531AD.f_A94[0 /*80*/].f_2 = 5;
        }
        iVar0 = 2;
        while (iVar0 >= 1)
        {
            Global_2531AD.f_A94[iVar0 + 1 /*80*/] = { Global_2531AD.f_A94[iVar0 /*80*/] };
            iVar0 = (iVar0 + -1);
        }
        Global_2531AD.f_A94[1 /*80*/] = { *uParam0 };
        return 1;
    }
    iVar0 = 0;
    while (iVar0 < 4)
    {
        if (Global_2531AD.f_A94[iVar0 /*80*/].f_2 == 0)
        {
            Global_2531AD.f_A94[iVar0 /*80*/] = { *uParam0 };
            if (iVar0 == 0)
            {
                func_48();
            }
            return 1;
        }
        else
        {
            if (uParam0->f_1 == 1)
            {
                func_97(&(Global_2531AD.f_A94[iVar0 /*80*/].f_45), 2);
                Global_2531AD.f_A94[iVar0 /*80*/].f_2 = 5;
            }
            if (uParam0->f_1 == 86 && !func_47(uParam0->f_45, 128))
            {
                if (func_46(Global_2531AD.f_A94[iVar0 /*80*/].f_1))
                {
                    Global_2531AD.f_A94[iVar0 /*80*/].f_2 = 5;
                    func_97(&(Global_2531AD.f_A94[iVar0 /*80*/].f_45), 1);
                }
            }
        }
        iVar0++;
    }
    return 0;
}

int func_46(int iParam0)//Position - 0x15E6
{
    switch (iParam0)
    {
        case 88:
        case 87:
        case 91:
        case 92:
        case 86:
        case 93:
        case 94:
        case 95:
        case 96:
        case 97:
        case 98:
        case 99:
        case 89:
        case 100:
        case 101:
        case 102:
        case 103:
        case 90:
        case 110:
            return 1;
        
        default:
    }
    return 0;
}

bool func_47(var uParam0, int iParam1)//Position - 0x166C
{
    return (uParam0 && iParam1) != 0;
}

void func_48()//Position - 0x167B
{
    bool bVar0;
    
    if (Global_2531AD.f_BD7)
    {
        return;
    }
    if (!Global_12C2D)
    {
        Global_12C2D = 1;
        bVar0 = true;
    }
    func_49();
    if (bVar0)
    {
        Global_12C2D = 0;
    }
}

void func_49()//Position - 0x16AE
{
    Global_2531AD.f_BD8 = 0;
    Global_2531AD.f_BD8.f_242 = 0;
    func_53(&(Global_2531AD.f_BD8.f_1));
    Global_2531AD.f_BD8.f_1.f_1 = 0;
    func_50(&(Global_2531AD.f_BD8.f_1));
}

void func_50(var uParam0)//Position - 0x16EF
{
    if (uParam0->f_1 != 0)
    {
        unk_0x749CA887CB0AFEC9(&(uParam0->f_1));
        uParam0->f_1 = 0;
    }
    if (uParam0->f_232 && uParam0->f_4 != 0)
    {
        if (unk_0xE434AB6E3DE89861())
        {
            unk_0xF1BC72CEC2746995(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
            unk_0x282C78036676E0C2(false);
            unk_0xAC7C2DE2DDC7AF03();
        }
        unk_0x749CA887CB0AFEC9(&(uParam0->f_4));
        uParam0->f_4 = 0;
    }
    if (uParam0->f_234)
    {
        unk_0x81394B4515AF31C3(false);
        uParam0->f_234 = 0;
    }
    if (!Global_12C2D)
    {
        if (!unk_0x87407D4AFED33A53(unk_0x7A8732CFB5113E77()))
        {
            if (!Global_12C2E)
            {
                if (unk_0x260395BA7F0C83CB() && !func_52(0))
                {
                    unk_0xCF33E56642B34516(800);
                }
            }
        }
    }
    func_51(0);
}

void func_51(int iParam0)//Position - 0x1795
{
    Global_12C25 = iParam0;
    Global_12C26 = iParam0;
}

bool func_52(bool bParam0)//Position - 0x17A9
{
    if (!bParam0 && unk_0x222F76006659B0EB(joaat("benchmark")) > 0)
    {
        return 1;
    }
    return unk_0xA2BC31158C8CEFD2(Global_12C19, 0);
}

void func_53(var uParam0)//Position - 0x17D4
{
    func_54(uParam0);
    uParam0->f_23A = 0;
    uParam0->f_1F = 0;
    uParam0->f_38 = 0;
    uParam0->f_237 = 0;
    uParam0->f_239 = 0;
}

void func_54(var uParam0)//Position - 0x17FE
{
    uParam0->f_223 = 1f;
    uParam0->f_222 = 0;
    uParam0->f_238 = 0f;
    uParam0->f_22E = 0;
    uParam0->f_1E = 0f;
    uParam0->f_224 = 0f;
    uParam0->f_22F = 0f;
    uParam0->f_230 = 0f;
    uParam0->f_221 = 0;
    uParam0->f_233 = 0;
    uParam0->f_23C = 0;
    uParam0->f_234 = 0;
    uParam0->f_235 = 0;
    uParam0->f_236 = 0;
    *uParam0 = 0.1125f;
    uParam0->f_2 = 0;
    uParam0->f_3 = 0;
    uParam0->f_23E = 0;
    uParam0->f_23F = 0;
    uParam0->f_23D = 1f;
}

int func_55(int iParam0)//Position - 0x187D
{
    if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
    {
        return 1;
    }
    return 0;
}

bool func_56()//Position - 0x198A
{
    return Global_255E41.f_11;
}

void func_57(var uParam0)//Position - 0x1998
{
    if (func_59(uParam0->f_1))
    {
        uParam0->f_48 = func_58();
    }
}

int func_58()//Position - 0x19B3
{
    return 21;
}

int func_59(int iParam0)//Position - 0x19BD
{
    switch (iParam0)
    {
        case 63:
        case 64:
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
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
        case 81:
        case 82:
        case 83:
            return 1;
        
        default:
    }
    return 0;
}

void func_60(var uParam0, int iParam1)//Position - 0x1A4F
{
    if (func_59(uParam0->f_1))
    {
        uParam0->f_49 = 1;
    }
    if (iParam1 == func_96() || !func_13(iParam1, 0, 1))
    {
        return;
    }
    if (func_46(uParam0->f_1))
    {
        if (uParam0->f_47 == 1)
        {
            uParam0->f_49 = func_61(iParam1, -2, 0, 0, 0);
        }
    }
}

int func_61(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1AA6
{
    int iVar0;
    int iVar1;
    
    if (func_92(iParam0) && !bParam4)
    {
        if (bParam2)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    if (iParam1 == -2)
    {
        iVar0 = unk_0xC69A85EEB9CA3B95(iParam0);
        if (iVar0 > -1 && iVar0 < 4)
        {
            if (Global_440000.f_247BD[iVar0] != -1)
            {
                iParam1 = iVar0;
            }
        }
    }
    if (((func_92(unk_0x7C7787D2D7139A85()) || (func_91() && func_90())) && !unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_11EF, 31)) && !bParam4)
    {
        iVar1 = func_89();
        if (unk_0xD4B321D9096B01FC(iVar1))
        {
            if (unk_0x7FA2061748BA645E(iVar1))
            {
                if (unk_0x74D4E16E179B8F53(iVar1) != -1)
                {
                    if (func_13(unk_0x74D4E16E179B8F53(iVar1), 0, 1))
                    {
                        if ((iParam1 > -1 && unk_0xA51CBC95AC3A4B14()) && iParam1 < 4)
                        {
                            if (Global_440000.f_247BD[iParam1] != -1)
                            {
                                return func_87(iParam1, iParam0, 0);
                            }
                            else
                            {
                                return func_74(iParam0, unk_0x74D4E16E179B8F53(iVar1), iParam1, bParam2, bParam3);
                            }
                        }
                        else
                        {
                            return func_74(iParam0, unk_0x74D4E16E179B8F53(iVar1), iParam1, bParam2, bParam3);
                        }
                    }
                }
            }
            else if ((iParam1 > -1 && unk_0xA51CBC95AC3A4B14()) && iParam1 < 4)
            {
                if (Global_440000.f_247BD[iParam1] != -1)
                {
                    return func_87(iParam1, iParam0, 0);
                }
                else
                {
                    return func_62(0, -1, 0);
                }
            }
            else
            {
                return func_62(0, -1, 0);
            }
        }
    }
    if ((iParam1 > -1 && unk_0xA51CBC95AC3A4B14()) && iParam1 < 4)
    {
        if (Global_440000.f_247BD[iParam1] != -1)
        {
            return func_87(iParam1, iParam0, 0);
        }
        else
        {
            return func_74(iParam0, unk_0x7C7787D2D7139A85(), iParam1, bParam2, bParam3);
        }
    }
    return func_74(iParam0, unk_0x7C7787D2D7139A85(), iParam1, bParam2, bParam3);
}

int func_62(bool bParam0, int iParam1, bool bParam2)//Position - 0x1C86
{
    return func_63(unk_0x7C7787D2D7139A85(), bParam0, iParam1, bParam2);
}

int func_63(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1C9C
{
    int iVar0;
    
    if (!unk_0xD56C8C2B75BF9665(iParam0))
    {
        return 3;
    }
    iVar0 = unk_0xC69A85EEB9CA3B95(iParam0);
    if ((func_73() || (func_72() && func_70())) && Global_151F88.f_1)
    {
        if (bParam1)
        {
            return func_69(iParam2, iVar0);
        }
        else
        {
            return func_69(iVar0, iVar0);
        }
    }
    if (bParam1)
    {
        if (iParam2 > -1)
        {
            if (func_68(iVar0, iParam2, 0) && !unk_0xA2BC31158C8CEFD2(Global_440000.f_F, 18))
            {
                if (iVar0 == iParam2)
                {
                    return func_67(1);
                }
                else
                {
                    return func_67(0);
                }
            }
            else if (bParam3)
            {
                return 28;
            }
            else if (unk_0xA2BC31158C8CEFD2(Global_440000.f_4, 20))
            {
                return func_64(iVar0, iParam2, 1, 4);
            }
            else
            {
                return func_64(iVar0, iParam2, 0, 4);
            }
        }
        return 28;
    }
    if (iVar0 == iParam2 || iParam2 == -1)
    {
        return func_67(1);
    }
    return func_67(0);
}

int func_64(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x1DA3
{
    int iVar0;
    
    iVar0 = func_66(iParam0, iParam1, iParam3);
    if (func_65(Global_440000.f_25AF8, 1))
    {
        if (iVar0 == 1)
        {
            iVar0 = 0;
        }
    }
    if (bParam2)
    {
        switch (iVar0)
        {
            case 0:
                return 28;
            
            case 1:
                return 29;
            
            case 2:
                return 30;
            
            case 3:
                return 31;
            
            case 4:
                return 32;
            
            case 5:
                return 33;
            
            case 6:
                return 34;
            
            case 7:
                return 35;
            
            case 8:
                return 36;
            
            case 9:
                return 37;
            
            case 10:
                return 38;
            
            case 11:
                return 39;
            
            case 12:
                return 40;
            
            case 13:
                return 41;
            
            case 14:
                return 42;
            
            case 15:
                return 43;
            
            default:
        }
    }
    else
    {
        switch (iVar0)
        {
            case 0:
                return 28;
            
            case 1:
                return 29;
            
            case 2:
                return 30;
            }
        
        default:
    }
    return 28;
}

int func_65(int iParam0, bool bParam1)//Position - 0x1EBB
{
    int iVar0;
    
    if (bParam1)
    {
        if (Global_440000.f_2E9D2 == 65)
        {
            return 1;
        }
    }
    if (iParam0 == 0)
    {
        return 0;
    }
    iVar0 = 0;
    while (iVar0 <= 6)
    {
        if (iParam0 == Global_40001.f_233B[iVar0])
        {
            return 1;
        }
        iVar0++;
    }
    return 0;
}

int func_66(int iParam0, int iParam1, int iParam2)//Position - 0x1F0C
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    while (iVar0 < iParam2)
    {
        if (iVar0 == iParam1)
        {
            return iVar1;
        }
        else if (!iParam0 == iVar0)
        {
            if (!func_68(iParam0, iVar0, 0))
            {
                iVar1++;
            }
        }
        iVar0++;
    }
    return -1;
}

int func_67(bool bParam0)//Position - 0x1F53
{
    if (bParam0)
    {
        return 118;
    }
    return 116;
}

int func_68(int iParam0, int iParam1, int iParam2)//Position - 0x1F6A
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

int func_69(int iParam0, int iParam1)//Position - 0x2135
{
    if (iParam0 == -1)
    {
        iParam0 = func_66(iParam1, iParam0, 4);
    }
    switch (iParam0)
    {
        case 0:
            return 15;
        
        case 1:
            return 21;
        
        case 2:
            return 24;
        
        case 3:
            return 18;
        
        default:
    }
    return 28;
}

bool func_70()//Position - 0x2183
{
    if (func_71())
    {
        return 1;
    }
    return unk_0xA2BC31158C8CEFD2(Global_440000.f_2F9D0, 4);
}

bool func_71()//Position - 0x21A5
{
    return unk_0xA2BC31158C8CEFD2(Global_440000.f_2D0E6, 12);
}

bool func_72()//Position - 0x21BD
{
    if (unk_0xA51CBC95AC3A4B14())
    {
        return unk_0xA2BC31158C8CEFD2(Global_440000.f_2F9D0, 0);
    }
    return ((unk_0xA2BC31158C8CEFD2(Global_440000.f_2F9D0, 0) || Global_193D08) && unk_0x222F76006659B0EB(joaat("fm_deathmatch_creator")) > 0);
}

int func_73()//Position - 0x220A
{
    if (func_71() && unk_0xA51CBC95AC3A4B14())
    {
        return 1;
    }
    return 0;
}

int func_74(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2227
{
    int iVar0;
    bool bVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    if (iParam2 == -2)
    {
        iVar0 = unk_0xC69A85EEB9CA3B95(iParam0);
    }
    else
    {
        iVar0 = iParam2;
    }
    if (Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/] == 148)
    {
        bVar1 = true;
    }
    iVar2 = iParam0;
    if (iVar2 > -1)
    {
        if (Global_1844AE[iVar2 /*871*/] == 148)
        {
            bVar1 = true;
        }
    }
    if (!bVar1)
    {
        if (iVar0 != -1)
        {
            if (func_83())
            {
                iVar3 = func_79(iParam0);
                if (!iVar3 == -1)
                {
                    return func_77(iVar3);
                }
            }
            if ((func_76(iParam1, iParam0, iVar0, 0) && !unk_0xA2BC31158C8CEFD2(Global_440000.f_F, 18)) || ((func_68(unk_0xC69A85EEB9CA3B95(iParam1), unk_0xC69A85EEB9CA3B95(iParam0), 0) && unk_0xA2BC31158C8CEFD2(Global_440000.f_F, 23)) && !unk_0xA2BC31158C8CEFD2(Global_440000.f_F, 18)))
            {
                return func_67(1);
            }
            else if (unk_0xA2BC31158C8CEFD2(Global_440000.f_F, 26))
            {
                return func_75(1);
            }
            else
            {
                return func_63(iParam1, 1, iVar0, bParam4);
            }
        }
        else if ((Global_180607 || Global_1805FE) || Global_1844AE[iParam0 /*871*/] == 0)
        {
            if (iParam0 == iParam1 || (Global_180607 == 1 && Global_180611 == 0))
            {
                return func_67(1);
            }
            else
            {
                return func_63(iParam1, 1, iVar0, bParam4);
            }
        }
        if (Global_180602 && Global_18040B.f_E == iParam0)
        {
            return 28;
        }
    }
    iVar4 = func_79(iParam0);
    if (!iVar4 == -1)
    {
        return func_77(iVar4);
    }
    if (bParam3)
    {
        return 0;
    }
    return 1;
}

int func_75(bool bParam0)//Position - 0x23CA
{
    if (bParam0)
    {
        return 119;
    }
    return 116;
}

bool func_76(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x23E1
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

int func_77(int iParam0)//Position - 0x2459
{
    int iVar0;
    
    if (iParam0 > -1)
    {
        iVar0 = func_78(iParam0);
        switch (iVar0)
        {
            case 0:
                return 192;
            
            case 1:
                return 193;
            
            case 2:
                return 194;
            
            case 3:
                return 195;
            
            case 4:
                return 196;
            
            case 5:
                return 197;
            
            case 6:
                return 198;
            
            case 7:
                return 199;
            
            case 8:
                return 200;
            
            case 9:
                return 201;
            
            case 10:
                return 202;
            
            case 11:
                return 203;
            
            case 12:
                return 204;
            
            case 13:
                return 205;
            
            case 14:
                return 206;
            }
        
        default:
    }
    return 1;
}

var func_78(int iParam0)//Position - 0x251C
{
    return Global_24E477.f_839.f_2C[iParam0 /*2*/].f_1;
}

int func_79(int iParam0)//Position - 0x2533
{
    if (!iParam0 == func_96())
    {
        if (func_81(iParam0, 1))
        {
            return Global_24E477.f_839.f_B[func_80(iParam0)];
        }
    }
    return -1;
}

int func_80(int iParam0)//Position - 0x2565
{
    if (iParam0 != func_96())
    {
        return Global_18DB1B[iParam0 /*614*/].f_B;
    }
    return func_96();
}

bool func_81(int iParam0, bool bParam1)//Position - 0x2588
{
    if (!bParam1)
    {
        if (func_82(iParam0))
        {
            return 0;
        }
    }
    return Global_18DB1B[iParam0 /*614*/].f_B != func_96();
}

int func_82(int iParam0)//Position - 0x25B3
{
    if (iParam0 != func_96())
    {
        if (Global_18DB1B[iParam0 /*614*/].f_B != func_96())
        {
            return Global_18DB1B[iParam0 /*614*/].f_B == iParam0;
        }
    }
    return 0;
}

int func_83()//Position - 0x25E8
{
    if (((func_86() || func_85()) || func_56()) || func_84())
    {
        return 1;
    }
    return 0;
}

bool func_84()//Position - 0x261A
{
    return Global_255E41.f_13;
}

var func_85()//Position - 0x2628
{
    return Global_255E41.f_10;
}

var func_86()//Position - 0x2636
{
    return Global_255E41.f_F;
}

int func_87(int iParam0, int iParam1, bool bParam2)//Position - 0x2644
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    iVar1 = Global_EC945.f_D[iParam0];
    if (func_83())
    {
        iVar2 = func_79(iParam1);
        if (!iVar2 == -1)
        {
            return func_77(iVar2);
        }
    }
    if (iVar1 > -1 && iVar1 < 17)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_440000.f_6A[iParam0 /*11610*/].f_16C7[iVar1], 24))
        {
            return 18;
        }
    }
    if (iParam0 > -1 && iParam1 != func_96())
    {
        if (Global_440000.f_247BD[iParam0] != -1 && Global_440000.f_247BD[iParam0] <= 4)
        {
            if (Global_440000.f_247BD[iParam0] == 0)
            {
                iVar0 = 15;
            }
            else if (Global_440000.f_247BD[iParam0] == 1)
            {
                iVar0 = 18;
            }
            else if (Global_440000.f_247BD[iParam0] == 2)
            {
                iVar0 = 24;
            }
            else if (Global_440000.f_247BD[iParam0] == 4)
            {
                if (unk_0xA2BC31158C8CEFD2(Global_440000.f_F, 29))
                {
                    iVar0 = 21;
                }
                else
                {
                    iVar0 = 6;
                }
            }
            else
            {
                iVar0 = Global_440000.f_247BD[iParam0];
            }
        }
        else
        {
            iVar0 = func_63(iParam1, !bParam2, iParam0, 0);
        }
        if (unk_0xA2BC31158C8CEFD2(Global_440000.f_15, 13))
        {
            iVar0 = func_88(iParam0);
        }
        if (unk_0xA2BC31158C8CEFD2(Global_440000.f_18, 29))
        {
            iVar0 = 0;
        }
        if (unk_0xA2BC31158C8CEFD2(Global_440000.f_F, 26) && !func_68(iParam0, unk_0xC69A85EEB9CA3B95(iParam1), 0))
        {
            iVar0 = func_75(1);
        }
    }
    else
    {
        iVar0 = 1;
    }
    return iVar0;
}

int func_88(int iParam0)//Position - 0x27D1
{
    int iVar0;
    
    switch (iParam0)
    {
        case 0:
            iVar0 = Global_440000.f_2EA26;
            break;
        
        case 1:
            iVar0 = Global_440000.f_2EA27;
            break;
        
        case 2:
            iVar0 = Global_440000.f_2EA28;
            break;
        
        case 3:
            iVar0 = Global_440000.f_2EA29;
            break;
    }
    switch (iVar0)
    {
        case 0:
            return 15;
        
        case 1:
            return 21;
        
        case 2:
            return 24;
        
        case 3:
            return 18;
        
        case 4:
            return 6;
        
        case 5:
            return 9;
        
        case 6:
            return 3;
        
        case 7:
            return 1;
        
        case 8:
            return 12;
        
        case 9:
            return 2;
        
        default:
    }
    return 2;
}

var func_89()//Position - 0x28A6
{
    return Global_240006.f_2;
}

bool func_90()//Position - 0x28B4
{
    return unk_0xA2BC31158C8CEFD2(Global_240006, 4);
}

bool func_91()//Position - 0x28C5
{
    return unk_0xA2BC31158C8CEFD2(Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_27.f_12, 14);
}

int func_92(int iParam0)//Position - 0x28E2
{
    if (func_94(iParam0, 0))
    {
        return 1;
    }
    if (func_93())
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

bool func_93()//Position - 0x2924
{
    return unk_0xA2BC31158C8CEFD2(Global_240006, 3);
}

bool func_94(int iParam0, int iParam1)//Position - 0x2935
{
    bool bVar0;
    
    if (iParam0 == unk_0x7C7787D2D7139A85())
    {
        bVar0 = func_95(-1, 0) == 8;
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

int func_95(int iParam0, bool bParam1)//Position - 0x2980
{
    int iVar0;
    int iVar1;
    
    iVar1 = iParam0;
    if (iVar1 == -1)
    {
        iVar1 = func_41();
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

int func_96()//Position - 0x29C1
{
    return -1;
}

void func_97(var uParam0, int iParam1)//Position - 0x29CA
{
    func_98(uParam0, iParam1);
}

void func_98(var uParam0, var uParam1)//Position - 0x29DA
{
    *uParam0 = (*uParam0 || uParam1);
}

void func_99(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x29EB
{
    uParam1->f_11 = func_96();
    uParam1->f_12 = func_96();
    uParam1->f_13 = func_96();
    uParam1->f_14 = func_96();
    uParam1->f_1 = uParam0;
    uParam1->f_2 = 1;
    StringCopy(&(uParam1->f_15), sParam4, 16);
    StringCopy(&(uParam1->f_8), sParam3, 32);
    uParam1->f_10 = 1;
    uParam1->f_3 = iParam2;
    uParam1->f_47 = 1;
    uParam1->f_4A = 1;
    uParam1->f_4B = 1;
    uParam1->f_4C = 0;
    uParam1->f_4D = 0;
    uParam1->f_49 = 0;
    StringCopy(&(uParam1->f_19), "", 64);
    StringCopy(&(uParam1->f_29), "", 64);
}

bool func_100(int iParam0)//Position - 0x2A69
{
    return func_101(iParam0, 20);
}

bool func_101(int iParam0, int iParam1)//Position - 0x2A79
{
    return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_B.f_4, iParam1);
}

int func_102(int iParam0)//Position - 0x2A94
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        return func_101(iParam0, 9);
    }
    return 0;
}

int func_103(int iParam0, int iParam1)//Position - 0x2AB2
{
    if (Global_18DB1B[iParam0 /*614*/].f_B.f_21 != -1 && func_104(Global_18DB1B[iParam0 /*614*/].f_B.f_21))
    {
        return 1;
    }
    if (iParam1 && Global_18DB1B[iParam0 /*614*/].f_B.f_20 != -1)
    {
        if (func_104(Global_18DB1B[iParam0 /*614*/].f_B.f_20))
        {
            return 1;
        }
    }
    return 0;
}

int func_104(int iParam0)//Position - 0x2B18
{
    switch (iParam0)
    {
        case 155:
        case 160:
        case 153:
        case 162:
        case 154:
        case 163:
        case 171:
        case 172:
        case 240:
        case 239:
            return 1;
        
        default:
    }
    return func_105(iParam0, 0);
    return 0;
}

int func_105(int iParam0, int iParam1)//Position - 0x2B72
{
    switch (iParam0)
    {
        case 199:
        case 205:
        case 210:
        case 211:
            return 1;
        
        default:
    }
    if (iParam1 == 0)
    {
        switch (iParam0)
        {
            case 194:
            case 193:
            case 189:
            case 153:
                return 1;
            }
        
        default:
    }
    return 0;
}

int func_106(int iParam0, int iParam1)//Position - 0x2BC7
{
    if (Global_18DB1B[iParam0 /*614*/].f_B.f_21 != -1 || (iParam1 && Global_18DB1B[iParam0 /*614*/].f_B.f_20 != -1))
    {
        return 1;
    }
    return 0;
}

void func_107(int iParam0)//Position - 0x2C02
{
    Local_151 = iParam0;
}

int func_108()//Position - 0x2C0F
{
    int iVar0;
    
    if (func_1(&(Local_151.f_299), 750, 0))
    {
        iVar0 = 0;
        while (iVar0 < 32)
        {
            Local_151.f_2A2[iVar0] = -1;
            iVar0++;
        }
        func_37(&(Local_151.f_295));
        func_111();
        if (func_34())
        {
            iVar0 = 0;
            while (iVar0 < 10)
            {
                Local_151.f_2C9[iVar0] = func_29(iVar0);
                iVar0++;
            }
            func_109();
        }
        return 1;
    }
    return 0;
}

void func_109()//Position - 0x2C87
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 10)
    {
        Local_151.f_2D9[iVar0 /*2*/] = func_110();
        iVar0++;
    }
}

int func_110()//Position - 0x2CB0
{
    int iVar0;
    
    iVar0 = unk_0xBAC643F143880136(0, 2);
    switch (iVar0)
    {
        case 0:
            return joaat("maverick");
        
        case 1:
            return joaat("mammatus");
        
        default:
    }
    return 0;
}

void func_111()//Position - 0x2CE4
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    Local_151.f_2C5 = func_124();
    Local_151.f_2C4 = Local_151.f_2C5;
    Local_151.f_2C8 = func_120();
    Local_151.f_2C3 = func_117();
    iVar0 = func_116();
    if (Local_151.f_2C3)
    {
        iVar1 = 1;
    }
    func_113(func_115(132, Local_151.f_2C8, iVar1, 0));
    if (Local_151.f_2C8 == 1 && !Local_151.f_2C3)
    {
        Local_151.f_2C6 = 1;
    }
    iVar2 = 0;
    while (iVar2 < Local_151.f_2C5)
    {
        Local_151.f_A[iVar2 /*5*/].f_4 = iVar2;
        Local_151.f_A[iVar2 /*5*/] = { func_112(Local_151.f_2C8, Local_151.f_2C3, iVar0, iVar2) };
        iVar2++;
    }
}

Vector3 func_112(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x2D9C
{
    switch (iParam0)
    {
        case 0:
            if (bParam1)
            {
                switch (iParam2)
                {
                    case 0:
                        switch (iParam3)
                        {
                            case 0:
                                return 623.5349f, 1614.651f, 283.748f;
                            
                            case 1:
                                return 742.6324f, 1271.099f, 388.9925f;
                            
                            case 2:
                                return 682.1757f, 1204.295f, 350.0934f;
                            
                            case 3:
                                return 1779.28f, 668.7821f, 276.3788f;
                            
                            case 4:
                                return 1927.214f, 129.7589f, 174.4281f;
                            
                            case 5:
                                return 1056.943f, -699.1728f, 78.8831f;
                            
                            case 6:
                                return 2026.536f, -1594.874f, 262.0831f;
                            
                            case 7:
                                return 2139.424f, -2613.58f, 20.5914f;
                            
                            case 8:
                                return 1041.685f, -2882.901f, 27.0959f;
                            
                            case 9:
                                return 796.1402f, -2624.645f, 95.127f;
                            
                            case 10:
                                return 504.6169f, -3311.801f, 22.9858f;
                            
                            case 11:
                                return 416.9175f, -2684.419f, 10.1246f;
                            
                            case 12:
                                return 561.767f, -2100.675f, 60.143f;
                            
                            case 13:
                                return 872.454f, -1929.237f, 104.4083f;
                            
                            case 14:
                                return 636.6328f, -1429.945f, 15.5f;
                            
                            case 15:
                                return 591.386f, -852.2912f, 50.7211f;
                            
                            case 16:
                                return 471.2209f, -102.4007f, 149.7505f;
                            
                            case 17:
                                return 533.762f, 143.6576f, 125.7511f;
                            
                            case 18:
                                return 1112.19f, 74.8892f, 117.7713f;
                            
                            case 19:
                                return 683.9346f, 570.1795f, 165.7115f;
                            
                            case 20:
                                return 1453.832f, 1113.675f, 134.9644f;
                            
                            case 21:
                                return 1539.314f, 1716.172f, 125.0574f;
                            
                            case 22:
                                return 1875.192f, 1698.918f, 109.9103f;
                            
                            case 23:
                                return 2320.32f, 1669.402f, 86.7663f;
                            
                            case 24:
                                return 2337.891f, 1358.536f, 100.8737f;
                            
                            case 25:
                                return 2727.786f, 1558.729f, 83.66f;
                            
                            case 26:
                                return 3112.177f, 1153.66f, 25.3827f;
                            
                            case 27:
                                return 2580.817f, 476.8322f, 121.7549f;
                            
                            case 28:
                                return 2458.7f, -384.0464f, 127.5513f;
                            
                            case 29:
                                return 2381.206f, -939.2949f, 185.6516f;
                            
                            case 30:
                                return 1669.294f, -1652.948f, 154.2478f;
                            
                            case 31:
                                return 1096.793f, -1141.693f, 96.1055f;
                            
                            case 32:
                                return 3042.9f, -291.4662f, 22.8304f;
                            
                            case 33:
                                return 2645.351f, -1492.043f, 30.646f;
                            
                            case 34:
                                return 1214.374f, -2353.274f, 66.8f;
                            
                            case 35:
                                return 1841.616f, -2497.971f, 101.8039f;
                            
                            case 36:
                                return 1872.035f, -761.149f, 105f;
                            
                            case 37:
                                return 1657.665f, -413.7629f, 228.448f;
                            
                            case 38:
                                return 1589.229f, -1981.901f, 161.2293f;
                            
                            case 39:
                                return 991.7729f, -1477.064f, 60.0276f;
                            
                            case 40:
                                return 2609.912f, -2096.358f, 35.0044f;
                            
                            case 41:
                                return 1121.19f, 725.4341f, 170.3273f;
                            
                            case 42:
                                return 2117.316f, 1024.085f, 197f;
                            
                            case 43:
                                return 727.6708f, -452.6442f, 25f;
                            
                            case 44:
                                return 1211.964f, -3285.54f, 19.5936f;
                            
                            case 45:
                                return 1499.883f, -1276.207f, 131.5493f;
                            
                            case 46:
                                return 3381.442f, -826.2608f, 42.8967f;
                            
                            case 47:
                                return 1562.097f, 292.1506f, 494.2574f;
                            
                            case 48:
                                return 2021.578f, -1993.689f, 120f;
                            
                            case 49:
                                return 757.5558f, -1196.363f, 232.0553f;
                            
                            case 50:
                                return 1887.774f, -3474.97f, 77.8727f;
                            
                            case 51:
                                return 1083.224f, -229.6182f, 68.6364f;
                            
                            case 52:
                                return 2344.084f, -406.1672f, 91f;
                            
                            case 53:
                                return 2184.821f, 529.1252f, 241.1723f;
                            
                            case 54:
                                return 1251.541f, -1883.809f, 50f;
                            
                            case 55:
                                return 847.74f, 1781.903f, 160.9508f;
                            
                            case 56:
                                return 288.3698f, -1601.346f, 52f;
                            
                            case 57:
                                return 2648.131f, -731.5316f, 99.7f;
                            
                            case 58:
                                return 1937.117f, 1337.446f, 529.8608f;
                            
                            case 59:
                                return 1512.681f, -2539.276f, 208.3091f;
                            
                            case 60:
                                return 2352.986f, -1763.908f, 136.1568f;
                            
                            case 61:
                                return 2099.732f, -1212.728f, 178.3343f;
                            
                            case 62:
                                return 1945.16f, -957.8221f, 96.04f;
                            
                            case 63:
                                return 1872.81f, -830.1746f, 171.44f;
                            
                            case 64:
                                return 1256.392f, -1571.629f, 90.566f;
                            
                            case 65:
                                return 1818.023f, -244.6768f, 305.9837f;
                            
                            case 66:
                                return 2839.051f, -748.0399f, 21.5008f;
                            
                            case 67:
                                return 1268.646f, -2126.072f, 60.6975f;
                            
                            case 68:
                                return 1088.679f, -1982.82f, 84.1204f;
                            
                            case 69:
                                return 1597.218f, -2817.042f, 19.0498f;
                            
                            case 70:
                                return 356.3379f, -2319.226f, 67.6058f;
                            
                            case 71:
                                return 692.5012f, -2330.583f, 60.7022f;
                            
                            case 72:
                                return 1070.4f, -1835.148f, 100.8235f;
                            
                            case 73:
                                return 478.3501f, -1682.318f, 59.7763f;
                            
                            case 74:
                                return 845.2267f, -2186.32f, 46.5743f;
                            
                            case 75:
                                return 2651.639f, -1230.85f, 40.5824f;
                            
                            case 76:
                                return 461.851f, -1460.173f, 65.7889f;
                            
                            case 77:
                                return 775.8362f, -852.0386f, 31f;
                            
                            case 78:
                                return 913.9593f, -976.4005f, 81.0321f;
                            
                            case 79:
                                return 970.9194f, -2510.112f, 64f;
                            
                            case 80:
                                return 1096.666f, 1222.327f, 202.4859f;
                            
                            case 81:
                                return 1978.543f, 690.4552f, 174.2517f;
                            
                            case 82:
                                return 1571.993f, -36.6251f, 140.5239f;
                            
                            case 83:
                                return 918.2688f, -675.462f, 76.6019f;
                            
                            case 84:
                                return 798.097f, -1194.02f, 32f;
                            
                            case 85:
                                return 382.4527f, -31.8431f, 143.6312f;
                            
                            case 86:
                                return 672.1725f, -1745.012f, 16f;
                            
                            case 87:
                                return 620.2905f, -588.2725f, 22.6129f;
                            
                            case 88:
                                return 1204.318f, 196.6229f, 79.9329f;
                            
                            case 89:
                                return 2028.402f, -2179.396f, 105.5733f;
                            
                            case 90:
                                return 1131.183f, -2929.769f, 33.2799f;
                            
                            case 91:
                                return 654.5255f, -2634.736f, 26.063f;
                            
                            case 92:
                                return 757.272f, -30.6019f, 66.9464f;
                            
                            case 93:
                                return 262.5532f, -1046.969f, 73.6448f;
                            
                            case 94:
                                return 638.4819f, -1021f, 43.5236f;
                            
                            case 95:
                                return 351.6616f, -2758.046f, 29.2267f;
                            
                            case 96:
                                return 1613.985f, -2243.761f, 136f;
                            
                            case 97:
                                return 2947.746f, 792.9475f, 45f;
                            
                            case 98:
                                return 2608.733f, 822.9318f, 118.6201f;
                            
                            case 99:
                                return 1357.208f, 674.4443f, 100f;
                            
                            case 100:
                                return 978.4934f, -2073.071f, 1000f;
                            
                            case 101:
                                return 2848.513f, -2701.795f, 547.5851f;
                            
                            case 102:
                                return 2322.219f, -2129.611f, 13.6809f;
                            
                            case 103:
                                return 1248.603f, -2675.042f, 145.6704f;
                            
                            case 104:
                                return 2052.692f, -252.931f, 228.334f;
                            
                            case 105:
                                return 2394.902f, 388.1578f, 194.5342f;
                            
                            case 106:
                                return 3337.711f, 56.3844f, 764.684f;
                            
                            case 107:
                                return 1573.049f, 1472.569f, 179.2061f;
                            
                            case 108:
                                return 1898.354f, 1020.671f, 277.9648f;
                            
                            case 109:
                                return 745.1586f, 232.868f, 177.0828f;
                            
                            case 110:
                                return 1551.579f, -685.6392f, 126f;
                            
                            case 111:
                                return 2734.234f, 61.798f, 25.1296f;
                            
                            case 112:
                                return 2404.63f, -1485.806f, 86.3959f;
                            
                            case 113:
                                return 3033.16f, 321.8385f, 908.0805f;
                            
                            case 114:
                                return 1353.323f, 373.6808f, 184.937f;
                            
                            case 115:
                                return 1317.262f, -737.488f, 125.2729f;
                            
                            case 116:
                                return 1737.696f, -966.1904f, 119.8332f;
                            
                            case 117:
                                return 923.2643f, 978.5736f, 605.3384f;
                            
                            case 118:
                                return 2823.777f, -1483.905f, 26.8193f;
                            
                            case 119:
                                return 1333.475f, -275.2598f, 1000f;
                            
                            default:
                        }
                        break;
                }
            }
            else
            {
                switch (iParam2)
                {
                    case 0:
                        switch (iParam3)
                        {
                            case 0:
                                return 2360.429f, 1273.094f, 63.9814f;
                            
                            case 1:
                                return 2545.422f, 342.8004f, 107.4641f;
                            
                            case 2:
                                return 2483.171f, -363.0696f, 92.7352f;
                            
                            case 3:
                                return 1491.835f, -1005.532f, 50.5682f;
                            
                            case 4:
                                return 1078.853f, -688.3618f, 56.6151f;
                            
                            case 5:
                                return 657.7627f, -1500.858f, 8.6817f;
                            
                            case 6:
                                return 1216.266f, -2907.278f, 4.8661f;
                            
                            case 7:
                                return 958.6841f, -3079.094f, 13.3327f;
                            
                            case 8:
                                return 459.5267f, -2429.235f, 4.7518f;
                            
                            case 9:
                                return 1130.214f, -2082.811f, 30.0089f;
                            
                            case 10:
                                return 1506.701f, -2135.637f, 75.4567f;
                            
                            case 11:
                                return 1759.277f, -1579.97f, 117.9f;
                            
                            case 12:
                                return 2510.45f, -1219.332f, 1.89f;
                            
                            case 13:
                                return 2855.604f, -1339.602f, 14.7183f;
                            
                            case 14:
                                return 2826.41f, -743.3448f, 0.3071f;
                            
                            case 15:
                                return 1236.599f, -83.0057f, 58.7636f;
                            
                            case 16:
                                return 1660.534f, 0.3033f, 172.7744f;
                            
                            case 17:
                                return 1917.608f, 301.6851f, 161.8848f;
                            
                            case 18:
                                return 2145.003f, 146.688f, 224.1061f;
                            
                            case 19:
                                return 1456.737f, 1111.848f, 113.334f;
                            
                            case 20:
                                return 1135.62f, 58.6667f, 79.7561f;
                            
                            case 21:
                                return 680.794f, 559.0409f, 128.0462f;
                            
                            case 22:
                                return 716.7936f, 141.21f, 79.7545f;
                            
                            case 23:
                                return 875.606f, -476.7556f, 29.0746f;
                            
                            case 24:
                                return 536.7303f, -2817.502f, 5.0421f;
                            
                            case 25:
                                return 984.1771f, -2410.686f, 29.4333f;
                            
                            case 26:
                                return 863.2344f, -2151.808f, 29.4816f;
                            
                            case 27:
                                return 1002.942f, -1918.75f, 30.1432f;
                            
                            case 28:
                                return 1183.313f, -1550.946f, 38.5953f;
                            
                            case 29:
                                return 694.0918f, 1283.059f, 359.296f;
                            
                            case 30:
                                return 745.2003f, 1199.09f, 325.4016f;
                            
                            case 31:
                                return 887.6219f, 873.548f, 178.5657f;
                            
                            case 32:
                                return 1828.967f, 1571.725f, 99.7219f;
                            
                            case 33:
                                return 2805.81f, 1676.1f, 23.5193f;
                            
                            case 34:
                                return 1405.691f, -601.7893f, 73.3473f;
                            
                            case 35:
                                return 1710.367f, -464.7253f, 169.8001f;
                            
                            case 36:
                                return 1946.392f, 1331.992f, 160.1707f;
                            
                            case 37:
                                return 2271.38f, 1711.949f, 67.0413f;
                            
                            case 38:
                                return 2307.003f, -1750.421f, 133.7737f;
                            
                            case 39:
                                return 2172.226f, -1069.367f, 176.0087f;
                            
                            case 40:
                                return 595.0312f, -851.27f, 40.4327f;
                            
                            case 41:
                                return 456.9577f, -752.8668f, 26.3578f;
                            
                            case 42:
                                return 531.9203f, -1034.797f, 27.2597f;
                            
                            case 43:
                                return 1289.908f, -3341.78f, 4.9016f;
                            
                            case 44:
                                return 533.8767f, -1969.171f, 23.9846f;
                            
                            case 45:
                                return 689.5218f, -1774.186f, 8.6f;
                            
                            case 46:
                                return 848.6605f, -1211.77f, 30.3237f;
                            
                            case 47:
                                return 1874.741f, -2202.331f, 166.2907f;
                            
                            case 48:
                                return 1458.76f, -2623.696f, 47.69f;
                            
                            case 49:
                                return 1538.907f, 784.3685f, 76.4501f;
                            
                            case 50:
                                return 800.149f, -109.5107f, 79.533f;
                            
                            case 51:
                                return 2687.09f, 889.5835f, 76.4359f;
                            
                            case 52:
                                return 939.7744f, -1496.824f, 29.1156f;
                            
                            case 53:
                                return 547.5936f, -455.3327f, 23.7304f;
                            
                            case 54:
                                return 709.3f, -2285f, 33.8f;
                            
                            case 55:
                                return 454.0637f, -2177.92f, 4.9177f;
                            
                            case 56:
                                return 1468.104f, -1759.198f, 78.3022f;
                            
                            case 57:
                                return 1239.343f, -1097.545f, 37.5256f;
                            
                            case 58:
                                return 851.4936f, -956.856f, 25.2824f;
                            
                            case 59:
                                return 512.4025f, 221.9917f, 103.7442f;
                            
                            case 60:
                                return 1545.082f, 1701.081f, 108.769f;
                            
                            case 61:
                                return 1188.11f, 1556.979f, 107.8028f;
                            
                            case 62:
                                return 1033.948f, -273.4799f, 49.8443f;
                            
                            case 63:
                                return 743.4129f, -591.6385f, 26.0061f;
                            
                            case 64:
                                return 1975.484f, -749.9232f, 96.2513f;
                            
                            case 65:
                                return 1968.117f, 708.8224f, 161.8571f;
                            
                            case 66:
                                return 2296.027f, 1152.222f, 64.0942f;
                            
                            case 67:
                                return 2474.09f, 1484.103f, 35.2029f;
                            
                            case 68:
                                return 482.1839f, 664.4731f, 195.1235f;
                            
                            case 69:
                                return 1505.106f, -1271.169f, 121.655f;
                            
                            case 70:
                                return 1220.729f, -1865.861f, 37.4982f;
                            
                            case 71:
                                return 476.6311f, -1283.433f, 28.5393f;
                            
                            case 72:
                                return 952.6752f, -2248.219f, 29.5831f;
                            
                            case 73:
                                return 1434.707f, -2315.042f, 65.927f;
                            
                            case 74:
                                return 1882.254f, -1873.208f, 191.477f;
                            
                            case 75:
                                return 2014.572f, -1591.406f, 249.303f;
                            
                            case 76:
                                return 1969.748f, -992.8931f, 79.6204f;
                            
                            case 77:
                                return 2267.432f, -331.317f, 92.9784f;
                            
                            case 78:
                                return 1205.465f, 336.8802f, 80.9909f;
                            
                            case 79:
                                return 531.8229f, -27.4548f, 69.6295f;
                            
                            case 80:
                                return 304.7162f, 262.4799f, 104.337f;
                            
                            case 81:
                                return 572.4857f, -2147.293f, 7.9233f;
                            
                            case 82:
                                return 1223.13f, -2338.621f, 59.8673f;
                            
                            case 83:
                                return 1747.151f, -2679.91f, 1.4587f;
                            
                            case 84:
                                return 939.6769f, -1342.533f, 11.4778f;
                            
                            case 85:
                                return 1435.646f, -1476.472f, 62.2245f;
                            
                            case 86:
                                return 2273.048f, -539.2752f, 102.9436f;
                            
                            case 87:
                                return 1522.075f, -381.5488f, 200.3996f;
                            
                            case 88:
                                return 2778.579f, 1073.328f, 0.6607f;
                            
                            case 89:
                                return 609.4634f, -1333.589f, 20.7017f;
                            
                            case 90:
                                return 1360.928f, -946.584f, 55.9209f;
                            
                            case 91:
                                return 1147.373f, -431.5072f, 65.9987f;
                            
                            case 92:
                                return 2391.644f, -932.7006f, 151.3306f;
                            
                            case 93:
                                return 2897.51f, -314.7418f, 17.1346f;
                            
                            case 94:
                                return 2963.361f, 513.4398f, 35.0981f;
                            
                            case 95:
                                return 2415.814f, 763.4792f, 124.8302f;
                            
                            case 96:
                                return 2054.985f, 953.5229f, 218.5845f;
                            
                            case 97:
                                return 1522.831f, 461.3894f, 224.2793f;
                            
                            case 98:
                                return 1301.596f, 1445.471f, 98.4293f;
                            
                            case 99:
                                return 1071.843f, -1841.304f, 36.3069f;
                            
                            case 100:
                                return 1133.087f, -2602.795f, 17.3834f;
                            
                            case 101:
                                return 484.4286f, -3064.647f, 5.084f;
                            
                            case 102:
                                return 1610.912f, -2385.55f, 90.6982f;
                            
                            case 103:
                                return 695.2822f, -2534.997f, 17.6967f;
                            
                            case 104:
                                return 554.7129f, -1634.238f, 26.9479f;
                            
                            case 105:
                                return 1723.686f, -1038.606f, 129.0783f;
                            
                            case 106:
                                return 2637.012f, -1863.213f, 17.7764f;
                            
                            case 107:
                                return 2638.077f, 1346.641f, 25.4338f;
                            
                            case 108:
                                return 1910.663f, 29.3172f, 159.5f;
                            
                            case 109:
                                return 2952.967f, 797.8872f, 0.1f;
                            
                            case 110:
                                return 2937.12f, 1471.532f, 0f;
                            
                            case 111:
                                return 2348.98f, -2281.005f, 0.1697f;
                            
                            case 112:
                                return 2681.416f, -1560.354f, -0.0123f;
                            
                            case 113:
                                return 2812.644f, -27.1503f, 0.7016f;
                            
                            case 114:
                                return 3201.036f, -102.7169f, 0.2f;
                            
                            case 115:
                                return 651.1428f, -3112.596f, 0.0233f;
                            
                            case 116:
                                return 2313.423f, -2194.061f, 0.025f;
                            
                            case 117:
                                return 3055.192f, 185.0506f, 0.4391f;
                            
                            case 118:
                                return 2729.46f, -1073.702f, 0.6712f;
                            
                            case 119:
                                return 1423.506f, -2790.912f, 0.7109f;
                            
                            default:
                        }
                        break;
                    }
            }
            break;
        
        case 1:
            if (bParam1)
            {
                switch (iParam2)
                {
                    case 0:
                        switch (iParam3)
                        {
                            case 0:
                                return -915.445f, -2520.007f, 58f;
                            
                            case 1:
                                return -1343.719f, -3336.795f, 30.5601f;
                            
                            case 2:
                                return -1336.239f, -3044.059f, 300.803f;
                            
                            case 3:
                                return -1833.852f, -1191.057f, 41.1411f;
                            
                            case 4:
                                return -1955.78f, 1776.57f, 195.8577f;
                            
                            case 5:
                                return -2166.629f, 1607.567f, 260f;
                            
                            case 6:
                                return -417.0685f, 1153.347f, 347.5894f;
                            
                            case 7:
                                return -2503.341f, 754.9435f, 342.9515f;
                            
                            case 8:
                                return -2626.127f, 136.1493f, 118.1611f;
                            
                            case 9:
                                return -2246.804f, 266.7578f, 194.8923f;
                            
                            case 10:
                                return -1364.038f, 56.9618f, 70.9416f;
                            
                            case 11:
                                return -94.2512f, 880.448f, 265f;
                            
                            case 12:
                                return -162.3738f, -999.6118f, 286.6717f;
                            
                            case 13:
                                return 140.5345f, -698.5123f, 92.6658f;
                            
                            case 14:
                                return -104.079f, -755.4847f, 59.1614f;
                            
                            case 15:
                                return -284.6401f, -446.2669f, 91.5901f;
                            
                            case 16:
                                return -795.1664f, -736.1061f, 78.6788f;
                            
                            case 17:
                                return -971.361f, -1305.368f, 50f;
                            
                            case 18:
                                return -1357.973f, -1476.396f, 40.9274f;
                            
                            case 19:
                                return -2004.334f, -556.4324f, 20.3771f;
                            
                            case 20:
                                return -1034.381f, 640.7464f, 163.7504f;
                            
                            case 21:
                                return -1238.563f, -848.6133f, 89.7682f;
                            
                            case 22:
                                return -1169.283f, -467.3812f, 69.0157f;
                            
                            case 23:
                                return -324.4008f, -1968.694f, 71.7904f;
                            
                            case 24:
                                return -269.9813f, -2425.728f, 95.05f;
                            
                            case 25:
                                return 247.3292f, -3308.082f, 59.9012f;
                            
                            case 26:
                                return 219.492f, -2318.923f, 43.917f;
                            
                            case 27:
                                return 18.8233f, -1504f, 54.686f;
                            
                            case 28:
                                return 8.9788f, 1715.057f, 249.4028f;
                            
                            case 29:
                                return -667.7844f, 404.7751f, 125.5105f;
                            
                            case 30:
                                return 216.2372f, 236.2603f, 125.7443f;
                            
                            case 31:
                                return -3079.696f, 766.6476f, 33.988f;
                            
                            case 32:
                                return -1105.589f, 1428.968f, 238.1016f;
                            
                            case 33:
                                return -474.9906f, 1529.526f, 500.0109f;
                            
                            case 34:
                                return -1621.841f, 929.212f, 193.8022f;
                            
                            case 35:
                                return -767.9827f, -21.7202f, 69.0007f;
                            
                            case 36:
                                return -472.9492f, -1444.143f, 92.8559f;
                            
                            case 37:
                                return -1879.575f, -2634.001f, 11.491f;
                            
                            case 38:
                                return -1459.734f, -2141.965f, 23.7189f;
                            
                            case 39:
                                return -75.0934f, -818.6606f, 599.9617f;
                            
                            case 40:
                                return -230.7478f, -241.4196f, 76.4557f;
                            
                            case 41:
                                return -1608.013f, -537.3172f, 73.1431f;
                            
                            case 42:
                                return -1806.964f, -125.5317f, 118.0094f;
                            
                            case 43:
                                return -3170.222f, 1543.227f, 33.8091f;
                            
                            case 44:
                                return -2753.087f, 1229.005f, 140.7239f;
                            
                            case 45:
                                return -306.4009f, 202.0892f, 180.3099f;
                            
                            case 46:
                                return 396.1246f, -1528.24f, 46.6041f;
                            
                            case 47:
                                return 389.6704f, -356.0437f, 61.5436f;
                            
                            case 48:
                                return 324.4086f, -988.9622f, 92.2799f;
                            
                            case 49:
                                return -657.5551f, -1105.199f, 67.647f;
                            
                            case 50:
                                return -439.2123f, -1003.071f, 58.7819f;
                            
                            case 51:
                                return -208.3349f, -1800.983f, 12.0207f;
                            
                            case 52:
                                return 104.7709f, -1940.293f, 33.3786f;
                            
                            case 53:
                                return -80.1589f, 364.0139f, 180.4526f;
                            
                            case 54:
                                return -1064.813f, 7.4781f, 69.6885f;
                            
                            case 55:
                                return -1997.443f, 722.7387f, 175.1271f;
                            
                            case 56:
                                return -254.3736f, -3074.535f, 75.4412f;
                            
                            case 57:
                                return -830.1344f, -1880.055f, 33.9615f;
                            
                            case 58:
                                return -2775.497f, -788.6588f, 36.447f;
                            
                            case 59:
                                return 43.0406f, -413.7074f, 89.5811f;
                            
                            case 60:
                                return -3209.421f, 1110.18f, 37.6606f;
                            
                            case 61:
                                return -2256.718f, -339.6835f, 43.3005f;
                            
                            case 62:
                                return -1957.094f, 1330.48f, 236.7105f;
                            
                            case 63:
                                return -1030.221f, 996.1059f, 182.364f;
                            
                            case 64:
                                return -1529.428f, 441.7661f, 134.8705f;
                            
                            case 65:
                                return 145.6732f, 1154.994f, 253.3341f;
                            
                            case 66:
                                return -520.5256f, 659.5372f, 177.0043f;
                            
                            case 67:
                                return 18.1044f, 638.951f, 224.5906f;
                            
                            case 68:
                                return 128.1127f, -27.8183f, 91.0755f;
                            
                            case 69:
                                return -634.6116f, -367.6195f, 56.3093f;
                            
                            case 70:
                                return -402.9568f, -655.0366f, 60.6586f;
                            
                            case 71:
                                return -1034.505f, -1070.038f, 21.0905f;
                            
                            case 72:
                                return -1013.909f, -1763.924f, 20.6112f;
                            
                            case 73:
                                return -734.4069f, -1448.061f, 26.2766f;
                            
                            case 74:
                                return -202.7723f, -1322.269f, 53.6863f;
                            
                            case 75:
                                return 388.6693f, -1368.068f, 50.7767f;
                            
                            case 76:
                                return -7.0116f, -2230.674f, 39.1959f;
                            
                            case 77:
                                return 33.8391f, -2745.649f, 33.5782f;
                            
                            case 78:
                                return -1100.793f, -2846.705f, 53.132f;
                            
                            case 79:
                                return -1274.324f, -2448.849f, 99.9299f;
                            
                            case 80:
                                return -473.7719f, -2675.318f, 19.2771f;
                            
                            case 81:
                                return -727.3944f, -3494.9f, 23.1103f;
                            
                            case 82:
                                return -1907.151f, -3034.577f, 39.2742f;
                            
                            case 83:
                                return 416.2226f, -2912.834f, 5.0678f;
                            
                            case 84:
                                return 414.82f, -2616.128f, 22.3517f;
                            
                            case 85:
                                return 233.9356f, -1474.491f, 45.7138f;
                            
                            case 86:
                                return 93.563f, -1189.746f, 51.969f;
                            
                            case 87:
                                return -607.8086f, -2189.156f, 76.1713f;
                            
                            case 88:
                                return -1106.939f, -2019.405f, 33.3166f;
                            
                            case 89:
                                return -1210.83f, -1806.382f, 246.2572f;
                            
                            case 90:
                                return -1309.448f, -1043.763f, 29.6876f;
                            
                            case 91:
                                return -1618.367f, -827.8159f, 42.3072f;
                            
                            case 92:
                                return -2257.555f, -9.0938f, 121.4433f;
                            
                            case 93:
                                return -777.472f, -376.5067f, 72.7751f;
                            
                            case 94:
                                return -1371.512f, -172.8742f, 99.1525f;
                            
                            case 95:
                                return -1842.798f, 302.3257f, 105.5376f;
                            
                            case 96:
                                return -1165.458f, 367.7476f, 95.3869f;
                            
                            case 97:
                                return -3107.359f, 276.277f, 56.9633f;
                            
                            case 98:
                                return -2548.786f, 1441.129f, 190.8976f;
                            
                            case 99:
                                return -2644.523f, 1868.621f, 168.2627f;
                            
                            case 100:
                                return -3029.234f, 1883.871f, 35.4705f;
                            
                            case 101:
                                return -1119.207f, 1736.032f, 195.1095f;
                            
                            case 102:
                                return -644.2039f, 1743.748f, 227.7433f;
                            
                            case 103:
                                return -577.6026f, 2038.995f, 209.9244f;
                            
                            case 104:
                                return -302.0078f, 1871.026f, 196.7599f;
                            
                            case 105:
                                return 351.8685f, 1748.149f, 260.866f;
                            
                            case 106:
                                return -11.935f, 1320.348f, 288.0058f;
                            
                            case 107:
                                return 295.5885f, 753.7887f, 200.7135f;
                            
                            case 108:
                                return 305.6451f, 501.4699f, 350.4832f;
                            
                            case 109:
                                return 353.2237f, 58.5094f, 119.2648f;
                            
                            case 110:
                                return 377.5104f, -695.2125f, 102.9432f;
                            
                            case 111:
                                return 392.4507f, -1204.239f, 50f;
                            
                            case 112:
                                return 397.6461f, -1929.781f, 43.4559f;
                            
                            case 113:
                                return 470.8737f, -2451.431f, 30f;
                            
                            case 114:
                                return -418.7521f, -2424.396f, 20.0582f;
                            
                            case 115:
                                return -2440.527f, -1654.13f, 6.3248f;
                            
                            case 116:
                                return -888.3994f, -2938.026f, 26.3869f;
                            
                            case 117:
                                return -1374.637f, -2647.817f, 26.4425f;
                            
                            case 118:
                                return -1082.177f, -620.1375f, 27.491f;
                            
                            case 119:
                                return -1471.09f, 1324.141f, 193.4433f;
                            
                            default:
                        }
                        break;
                }
            }
            else
            {
                switch (iParam2)
                {
                    case 0:
                        switch (iParam3)
                        {
                            case 0:
                                return -2303.138f, 218.8738f, 166.6017f;
                            
                            case 1:
                                return -2994.291f, 39.7167f, 7.4636f;
                            
                            case 2:
                                return -3410.2f, 967.5133f, 7.3517f;
                            
                            case 3:
                                return -3041.96f, 1209.59f, 13.7743f;
                            
                            case 4:
                                return -2502.529f, 756.2985f, 301.2459f;
                            
                            case 5:
                                return -1352.546f, 120.6978f, 55.2388f;
                            
                            case 6:
                                return -1729.21f, -193.1235f, 57.5038f;
                            
                            case 7:
                                return -1635.4f, -1054.226f, 12.1522f;
                            
                            case 8:
                                return -1268.607f, -1915.845f, 4.8616f;
                            
                            case 9:
                                return -18.3427f, -1297.615f, 28.3575f;
                            
                            case 10:
                                return -145.3585f, 930.7858f, 234.6711f;
                            
                            case 11:
                                return -424.3762f, 1587.798f, 355.2649f;
                            
                            case 12:
                                return -112.2256f, 354.4933f, 111.6961f;
                            
                            case 13:
                                return 67.6185f, -673.5317f, 28.7056f;
                            
                            case 14:
                                return 338.3054f, -1394.279f, 31.5093f;
                            
                            case 15:
                                return -19.2884f, -1426.187f, 29.6575f;
                            
                            case 16:
                                return -251.9772f, -2029.258f, 28.946f;
                            
                            case 17:
                                return -432.7254f, -2440.489f, 5.0008f;
                            
                            case 18:
                                return -956.3549f, -3053.302f, 12.9451f;
                            
                            case 19:
                                return -1662.76f, -3177.918f, 12.9914f;
                            
                            case 20:
                                return -457.7008f, -1507.786f, 12.0586f;
                            
                            case 21:
                                return 188.8895f, 300.349f, 104.515f;
                            
                            case 22:
                                return 3.4946f, -2452.885f, 13.4665f;
                            
                            case 23:
                                return -966.3007f, -973.4243f, 2.876f;
                            
                            case 24:
                                return -1536.435f, 868.5392f, 180.16f;
                            
                            case 25:
                                return -1521.53f, 1493.765f, 110.5947f;
                            
                            case 26:
                                return -1173.264f, -2037.82f, 12.776f;
                            
                            case 27:
                                return -0.4394f, -1037.738f, 37.152f;
                            
                            case 28:
                                return 137.7382f, -3092.8f, 4.8963f;
                            
                            case 29:
                                return -1177.272f, -507.6518f, 34.5662f;
                            
                            case 30:
                                return -575.4523f, -142.0386f, 36.2353f;
                            
                            case 31:
                                return -723.2367f, 655.733f, 154.5475f;
                            
                            case 32:
                                return -455.0906f, -999.9053f, 22.8657f;
                            
                            case 33:
                                return -1133.934f, -1447.037f, 4f;
                            
                            case 34:
                                return -231.0999f, -242.6378f, 49.0062f;
                            
                            case 35:
                                return 69.8444f, -62.9348f, 67.8751f;
                            
                            case 36:
                                return -1981.162f, -296.7468f, 47.1062f;
                            
                            case 37:
                                return 98.9504f, -1979.664f, 19.6635f;
                            
                            case 38:
                                return 324.168f, -2758.195f, 5.0028f;
                            
                            case 39:
                                return 219.5919f, -2310.078f, 7.4018f;
                            
                            case 40:
                                return -693.2001f, -592.6827f, 30.5552f;
                            
                            case 41:
                                return -1044.535f, 500.5195f, 83.1617f;
                            
                            case 42:
                                return -1792.464f, 395.7471f, 111.7909f;
                            
                            case 43:
                                return -425.5935f, 1123.605f, 324.8547f;
                            
                            case 44:
                                return -523.835f, -2902.068f, 5.0004f;
                            
                            case 45:
                                return -1213.84f, -2724.547f, 12.9541f;
                            
                            case 46:
                                return -656.7547f, -1708.686f, 23.8153f;
                            
                            case 47:
                                return -1024.89f, 1012.239f, 159.6649f;
                            
                            case 48:
                                return -850.8826f, 1708.716f, 193.9906f;
                            
                            case 49:
                                return -2253.348f, 1324.29f, 291.0074f;
                            
                            case 50:
                                return -876.7352f, -210.6213f, 38.2135f;
                            
                            case 51:
                                return -309.9497f, -609.0406f, 32.5568f;
                            
                            case 52:
                                return -743.9313f, -2283.372f, 12.06f;
                            
                            case 53:
                                return -2971.731f, 584.4294f, 19.423f;
                            
                            case 54:
                                return 288.4228f, -1601.137f, 30.2709f;
                            
                            case 55:
                                return 97.6932f, -348.3357f, 41.3071f;
                            
                            case 56:
                                return -1065.912f, -12.7356f, 49.4423f;
                            
                            case 57:
                                return -388.1416f, -2283.256f, 6.6082f;
                            
                            case 58:
                                return -1213.121f, -945.0177f, 1.1502f;
                            
                            case 59:
                                return -1605.807f, -588.1375f, 32.1103f;
                            
                            case 60:
                                return -1573.01f, 400.7232f, 106.194f;
                            
                            case 61:
                                return -2751.19f, 1185.782f, 93.6924f;
                            
                            case 62:
                                return 287.3323f, -3014.992f, 8.8106f;
                            
                            case 63:
                                return -96.4867f, -2744.17f, 5.1062f;
                            
                            case 64:
                                return -1350.788f, -1435.002f, 3.325f;
                            
                            case 65:
                                return -156.4393f, -979.7114f, 20.2769f;
                            
                            case 66:
                                return -671.3023f, 399.0416f, 101.68f;
                            
                            case 67:
                                return 169.03f, 667.5479f, 205.7125f;
                            
                            case 68:
                                return -726.8502f, -410.5149f, 34.5413f;
                            
                            case 69:
                                return -671.4555f, -891.9421f, 23.4991f;
                            
                            case 70:
                                return -190.4528f, 1299.355f, 302.9701f;
                            
                            case 71:
                                return -1284.425f, -3403.299f, 12.9452f;
                            
                            case 72:
                                return -825.6949f, -3337.779f, 12.9445f;
                            
                            case 73:
                                return -1368.524f, -2335.062f, 12.9446f;
                            
                            case 74:
                                return -1098.009f, -2415.526f, 12.9452f;
                            
                            case 75:
                                return -1336.274f, -3044.103f, 12.9444f;
                            
                            case 76:
                                return -821.012f, -1992.519f, 9.6439f;
                            
                            case 77:
                                return -350.2334f, -2640.808f, 5.0003f;
                            
                            case 78:
                                return -219.3889f, -2386.881f, 5.0014f;
                            
                            case 79:
                                return 109.4531f, -2816.037f, 9.7899f;
                            
                            case 80:
                                return 208.6273f, -3327.894f, 4.8177f;
                            
                            case 81:
                                return 370.2768f, -2128.437f, 15.2365f;
                            
                            case 82:
                                return -53.6978f, -1688.638f, 28.4917f;
                            
                            case 83:
                                return -1009.052f, -1759.302f, 5.5498f;
                            
                            case 84:
                                return -988.1508f, -2106.591f, 10.5382f;
                            
                            case 85:
                                return -708.1929f, -1517.804f, 4.4121f;
                            
                            case 86:
                                return -228.0423f, -1514.504f, 30.4622f;
                            
                            case 87:
                                return 297.5852f, -1204.386f, 28.1985f;
                            
                            case 88:
                                return 383.1396f, -904.1862f, 28.4376f;
                            
                            case 89:
                                return -630.6f, -1071.2f, 21.7f;
                            
                            case 90:
                                return -1207.432f, -1796.611f, 2.9086f;
                            
                            case 91:
                                return -876.3531f, -1501.708f, 4.1775f;
                            
                            case 92:
                                return -1271.531f, -1099.613f, 6.5852f;
                            
                            case 93:
                                return -1730.83f, -725.0892f, 9.3941f;
                            
                            case 94:
                                return -1431.005f, -271.0002f, 45.2077f;
                            
                            case 95:
                                return -1966.816f, 182.3251f, 85.7706f;
                            
                            case 96:
                                return -2293.777f, 371.4213f, 173.6017f;
                            
                            case 97:
                                return -2156.688f, 1551.647f, 272.9088f;
                            
                            case 98:
                                return -2780.149f, 1423.379f, 99.9284f;
                            
                            case 99:
                                return -2587.936f, 1930.876f, 166.0052f;
                            
                            case 100:
                                return -3017.571f, 1860.058f, 28.4173f;
                            
                            case 101:
                                return 142.7543f, 1689.097f, 233.0739f;
                            
                            case 102:
                                return 186.6585f, 1162.86f, 224.5946f;
                            
                            case 103:
                                return -461.6094f, 640.4639f, 143.1886f;
                            
                            case 104:
                                return -440.1514f, 184.2777f, 74.2476f;
                            
                            case 105:
                                return -186.476f, 25.015f, 63.554f;
                            
                            case 106:
                                return 26.7096f, -660.0318f, 30.6286f;
                            
                            case 107:
                                return 156.6823f, -565.1396f, 42.893f;
                            
                            case 108:
                                return -1834.908f, -1221.919f, 0.8054f;
                            
                            case 109:
                                return -707.5134f, -1340.225f, -0.0558f;
                            
                            case 110:
                                return -544.5794f, -2580.831f, 0.2096f;
                            
                            case 111:
                                return 103.7708f, -2461.292f, 0.1193f;
                            
                            case 112:
                                return -3046.133f, 1570.539f, -0.3275f;
                            
                            case 113:
                                return -2241.345f, -530.6988f, -0.3275f;
                            
                            case 114:
                                return 44.8316f, 844.4984f, 195.5816f;
                            
                            case 115:
                                return -1894.231f, -2724.314f, -0.3275f;
                            
                            case 116:
                                return -1029.441f, -1778.107f, -0.3275f;
                            
                            case 117:
                                return -95.1061f, -2313.997f, 0.4963f;
                            
                            case 118:
                                return -1546.054f, -1509.913f, 0.409f;
                            
                            case 119:
                                return -1678.194f, -2238.986f, 0.9841f;
                            
                            default:
                        }
                        break;
                    }
            }
            break;
        
        case 2:
            if (bParam1)
            {
                switch (iParam2)
                {
                    case 0:
                        switch (iParam3)
                        {
                            case 0:
                                return -1874.714f, 2055.242f, 164.0655f;
                            
                            case 1:
                                return -2398.244f, 2197.323f, 103.0324f;
                            
                            case 2:
                                return -2470.967f, 2693.007f, 16.093f;
                            
                            case 3:
                                return -1417.126f, 2634.235f, 3.8116f;
                            
                            case 4:
                                return -1617.519f, 3185.984f, 52.4819f;
                            
                            case 5:
                                return -1187.536f, 3851.927f, 510.4073f;
                            
                            case 6:
                                return -1243.21f, 4536.333f, 198.2652f;
                            
                            case 7:
                                return -766.5436f, 4335.334f, 181.1521f;
                            
                            case 8:
                                return -515.496f, 4425.549f, 56.3238f;
                            
                            case 9:
                                return -210.6103f, 3651.887f, 80.5153f;
                            
                            case 10:
                                return 90.0834f, 3766.962f, 52.4048f;
                            
                            case 11:
                                return 267.8927f, 2866.58f, 81.5228f;
                            
                            case 12:
                                return 180.018f, 2272.227f, 109.032f;
                            
                            case 13:
                                return -618.2112f, 2031.457f, 238.4183f;
                            
                            case 14:
                                return -1185.328f, 2439.395f, 110.052f;
                            
                            case 15:
                                return -2881.416f, 3363.437f, 44.4458f;
                            
                            case 16:
                                return -2188.789f, 4395.888f, 71.8569f;
                            
                            case 17:
                                return -2166.268f, 5204.997f, 32.4229f;
                            
                            case 18:
                                return 239.3275f, 5576.022f, 610.5799f;
                            
                            case 19:
                                return -549.4456f, 5308.46f, 118.8087f;
                            
                            case 20:
                                return -686.6255f, 5674.634f, 64.1394f;
                            
                            case 21:
                                return 25.1643f, 7643.369f, 32.4106f;
                            
                            case 22:
                                return -162.8882f, 6422.088f, 46.3268f;
                            
                            case 23:
                                return 269.3018f, 5863.51f, 425.1252f;
                            
                            case 24:
                                return 158.6423f, 4622.624f, 213.8925f;
                            
                            case 25:
                                return 31.6062f, 4328.141f, 56.7127f;
                            
                            case 26:
                                return -959.6198f, 4843.202f, 317.838f;
                            
                            case 27:
                                return -1179.401f, 4926.922f, 230.3542f;
                            
                            case 28:
                                return -1801.77f, 4513.373f, 40.2242f;
                            
                            case 29:
                                return -2146.721f, 3964.171f, 111.159f;
                            
                            case 30:
                                return -668.1703f, 3607.985f, 305.8568f;
                            
                            case 31:
                                return -409.327f, 2963.414f, 38.182f;
                            
                            case 32:
                                return -290.9469f, 2533.475f, 92.1749f;
                            
                            case 33:
                                return -3029.401f, 1883.96f, 35.4066f;
                            
                            case 34:
                                return -2597.654f, 1922.071f, 179.5395f;
                            
                            case 35:
                                return 80.7072f, 5032.946f, 490.6172f;
                            
                            case 36:
                                return -899.8328f, 6042.451f, 53.0212f;
                            
                            case 37:
                                return -1576.676f, 5160.763f, 26.8806f;
                            
                            case 38:
                                return 145.5836f, 6866.114f, 38.7097f;
                            
                            case 39:
                                return -50.5306f, 6236.916f, 79.3327f;
                            
                            case 40:
                                return -368.4536f, 6104.72f, 53f;
                            
                            case 41:
                                return -1599.971f, 2104.185f, 80.8163f;
                            
                            case 42:
                                return -1626.487f, 2585.598f, 12.1104f;
                            
                            case 43:
                                return -2064f, 3361.181f, 48.6443f;
                            
                            case 44:
                                return -2357.318f, 3250.916f, 117.4892f;
                            
                            case 45:
                                return -2684.946f, 2304.948f, 39.1557f;
                            
                            case 46:
                                return -772.2781f, 4704.552f, 242.9476f;
                            
                            case 47:
                                return 125.5518f, 3365.379f, 35.8003f;
                            
                            case 48:
                                return -113.0094f, 2803.876f, 67.1096f;
                            
                            case 49:
                                return -179.3538f, 1907.562f, 221.1006f;
                            
                            case 50:
                                return -1235.554f, 1879.036f, 150.8745f;
                            
                            case 51:
                                return 341.9869f, 3569.314f, 63.2875f;
                            
                            case 52:
                                return 391.3682f, 5485.655f, 1000f;
                            
                            case 53:
                                return 311.9317f, 6432.635f, 80.2925f;
                            
                            case 54:
                                return -292.9588f, 5839.533f, 129.366f;
                            
                            case 55:
                                return -1502.468f, 5984.955f, 34.7383f;
                            
                            case 56:
                                return -3449.053f, 2645.437f, 55.2519f;
                            
                            case 57:
                                return -1096.963f, 3225.607f, 147.7444f;
                            
                            case 58:
                                return -278.2971f, 6637.778f, 45.611f;
                            
                            case 59:
                                return 297.8872f, 4013.252f, 33.872f;
                            
                            case 60:
                                return -271.6442f, 5586.137f, 250.6218f;
                            
                            case 61:
                                return -821f, 5419.5f, 58.4f;
                            
                            case 62:
                                return -1734.6f, 3968.5f, 302.8f;
                            
                            case 63:
                                return -2664.1f, 2594f, 3.8f;
                            
                            case 64:
                                return -897.3f, 2797.5f, 28.3f;
                            
                            case 65:
                                return -1158.6f, 4625.5f, 156.7f;
                            
                            case 66:
                                return 618f, 6426.7f, 103.2f;
                            
                            case 67:
                                return 435.1f, 6772.9f, 18.9f;
                            
                            case 68:
                                return -677.8f, 6035f, 27.3f;
                            
                            case 69:
                                return -1445.2f, 5428.6f, 53.5f;
                            
                            case 70:
                                return -384.2f, 4711.1f, 278.4f;
                            
                            case 71:
                                return 911.8f, 4338.1f, 61.8f;
                            
                            case 72:
                                return 518.5f, 5944.8f, 525.2f;
                            
                            case 73:
                                return -1631.5f, 4741.2f, 66.9f;
                            
                            case 74:
                                return -1352.5f, 4147.1f, 125.1f;
                            
                            case 75:
                                return -1138.5f, 2807.2f, 250.4f;
                            
                            case 76:
                                return -540.3f, 4190.5f, 203.6f;
                            
                            case 77:
                                return -166.9f, 4250.2f, 61.7f;
                            
                            case 78:
                                return -88.2f, 4579f, 135.4f;
                            
                            case 79:
                                return -3051.213f, 4178.12f, 72.7681f;
                            
                            case 80:
                                return -2606.26f, 2993.814f, 30.4219f;
                            
                            case 81:
                                return -2302.76f, 2011.211f, 153.3448f;
                            
                            case 82:
                                return -2254.314f, 1680.506f, 298.8981f;
                            
                            case 83:
                                return -1955.917f, 1772.408f, 201.629f;
                            
                            case 84:
                                return -1751.763f, 1998.548f, 129.1121f;
                            
                            case 85:
                                return -1453.889f, 2069.22f, 65.2848f;
                            
                            case 86:
                                return -1479.386f, 2405.98f, 37.5402f;
                            
                            case 87:
                                return -1041.601f, 3963.552f, 344.3259f;
                            
                            case 88:
                                return -775.5471f, 4048.385f, 310.1201f;
                            
                            case 89:
                                return -883.0366f, 4411.045f, 29.2546f;
                            
                            case 90:
                                return -1215.23f, 4370.065f, 38.5217f;
                            
                            case 91:
                                return -1269.523f, 4386.938f, 1000f;
                            
                            case 92:
                                return -1508.03f, 4446.546f, 59.4166f;
                            
                            case 93:
                                return -1449.331f, 4602.479f, 336.1419f;
                            
                            case 94:
                                return -1640.183f, 5440.63f, 43.1539f;
                            
                            case 95:
                                return -891.0049f, 5157.28f, 187.01f;
                            
                            case 96:
                                return 724.7438f, 5251.831f, 586.2138f;
                            
                            case 97:
                                return 537.1121f, 4647.938f, 274.9371f;
                            
                            case 98:
                                return 64.3661f, 4022.363f, 575.3698f;
                            
                            case 99:
                                return 907.8411f, 3627.435f, 53.8748f;
                            
                            case 100:
                                return 591.9018f, 2977.436f, 82.2499f;
                            
                            case 101:
                                return 259.6137f, 1788.459f, 256.6769f;
                            
                            case 102:
                                return -2092.081f, 2518.016f, 800f;
                            
                            case 103:
                                return -2536.684f, 1678.45f, 196.0372f;
                            
                            case 104:
                                return 52.1855f, 7343.64f, 518.5611f;
                            
                            case 105:
                                return -521.5972f, 6960.141f, 172.8203f;
                            
                            case 106:
                                return -684.2739f, 6467.878f, 165.8478f;
                            
                            case 107:
                                return -1060.232f, 5711.063f, 333.8782f;
                            
                            case 108:
                                return -1786.052f, 5471.512f, 614.6761f;
                            
                            case 109:
                                return -1501.189f, 3295.095f, 245.8079f;
                            
                            case 110:
                                return -2149.145f, 3521.295f, 186.103f;
                            
                            case 111:
                                return 887.6612f, 5610.092f, 697.7338f;
                            
                            case 112:
                                return 451.4696f, 5020.989f, 610.8222f;
                            
                            case 113:
                                return 693.6552f, 4097.276f, 53.8927f;
                            
                            case 114:
                                return -99.6831f, 3960.636f, 80.8691f;
                            
                            case 115:
                                return -579.6645f, 3979.675f, 136.2872f;
                            
                            case 116:
                                return -996.2939f, 4194.288f, 151.0646f;
                            
                            case 117:
                                return -1542.398f, 2886.044f, 1000f;
                            
                            case 118:
                                return -3004.988f, 2333.1f, 209.9484f;
                            
                            case 119:
                                return -3622.204f, 4740.62f, 19.17f;
                            
                            default:
                        }
                        break;
                }
            }
            else
            {
                switch (iParam2)
                {
                    case 0:
                        switch (iParam3)
                        {
                            case 0:
                                return -2200.786f, 3429.213f, 31.6018f;
                            
                            case 1:
                                return -1873.915f, 2090.595f, 139.9944f;
                            
                            case 2:
                                return -1674.252f, 2301.497f, 59.0047f;
                            
                            case 3:
                                return -506.3776f, 4358.938f, 66.4342f;
                            
                            case 4:
                                return -83.7414f, 4580.993f, 122.1646f;
                            
                            case 5:
                                return -207.3853f, 3598.517f, 60.323f;
                            
                            case 6:
                                return 233.0533f, 3547.927f, 30.2697f;
                            
                            case 7:
                                return 93.7029f, 3597.86f, 38.7393f;
                            
                            case 8:
                                return 327f, 2858f, 42.4386f;
                            
                            case 9:
                                return 158.1294f, 3136.305f, 42.4573f;
                            
                            case 10:
                                return -210.5036f, 2955.358f, 28.941f;
                            
                            case 11:
                                return -288.922f, 2524.722f, 73.6685f;
                            
                            case 12:
                                return -734.5254f, 5594.983f, 34.288f;
                            
                            case 13:
                                return 88.2503f, 6368.129f, 30.2271f;
                            
                            case 14:
                                return -344.4945f, 6242.846f, 30.4877f;
                            
                            case 15:
                                return -267.3751f, 6639.444f, 6.3939f;
                            
                            case 16:
                                return -1444.47f, 5418.419f, 22.2866f;
                            
                            case 17:
                                return -1611.041f, 5258.685f, 2.9791f;
                            
                            case 18:
                                return -1823.203f, 4464.67f, 37.4717f;
                            
                            case 19:
                                return -2488.111f, 2740.839f, 1.8909f;
                            
                            case 20:
                                return -1626.549f, 2587.924f, 1.6362f;
                            
                            case 21:
                                return -1575.299f, 2105.205f, 66.0545f;
                            
                            case 22:
                                return -543.6063f, 1983.754f, 126.0263f;
                            
                            case 23:
                                return -563.8864f, 1886.811f, 122.0349f;
                            
                            case 24:
                                return -592.4536f, 2076.64f, 130.3709f;
                            
                            case 25:
                                return -2497.361f, 2307.194f, 33.1315f;
                            
                            case 26:
                                return -2584.923f, 1931.11f, 166.3129f;
                            
                            case 27:
                                return -1618.161f, 3184.126f, 31.8513f;
                            
                            case 28:
                                return -913.2203f, 2562.701f, 57.2099f;
                            
                            case 29:
                                return -1163.923f, 2408.993f, 92.402f;
                            
                            case 30:
                                return 188.3494f, 2295.03f, 92.7443f;
                            
                            case 31:
                                return -96.8265f, 2224.75f, 159.4986f;
                            
                            case 32:
                                return -834.779f, 4178.558f, 214.3525f;
                            
                            case 33:
                                return -790.3221f, 2901.125f, 18.2471f;
                            
                            case 34:
                                return -799.6998f, 3478.014f, 172.9345f;
                            
                            case 35:
                                return -1347.726f, 4127.416f, 61.6295f;
                            
                            case 36:
                                return -1364.709f, 4848.779f, 144.9459f;
                            
                            case 37:
                                return -2168.336f, 5186.728f, 14.9725f;
                            
                            case 38:
                                return -987.1982f, 5075.115f, 186.5395f;
                            
                            case 39:
                                return 231.926f, 5246.831f, 601.2042f;
                            
                            case 40:
                                return -1.0985f, 5029.458f, 446.6905f;
                            
                            case 41:
                                return -134.3454f, 4916.509f, 353.0826f;
                            
                            case 42:
                                return -434.7882f, 4885.861f, 189.7331f;
                            
                            case 43:
                                return -592.1419f, 5361.79f, 69.3186f;
                            
                            case 44:
                                return 64.7121f, 7052.296f, 15.7854f;
                            
                            case 45:
                                return -577.7616f, 5954.945f, 25.1362f;
                            
                            case 46:
                                return -945.8056f, 4613.758f, 238.1628f;
                            
                            case 47:
                                return -2228.817f, 4218.248f, 45.7951f;
                            
                            case 48:
                                return -2493.361f, 4193.219f, 1.0754f;
                            
                            case 49:
                                return -3073.088f, 3200.413f, 0.9527f;
                            
                            case 50:
                                return 376.4925f, 6630.836f, 27.7626f;
                            
                            case 51:
                                return -1692.925f, 4597.169f, 46.8227f;
                            
                            case 52:
                                return -2587.798f, 3193.551f, 12.9622f;
                            
                            case 53:
                                return -922.5162f, 6131.097f, 6.1891f;
                            
                            case 54:
                                return -112.5477f, 7285.785f, 16.1674f;
                            
                            case 55:
                                return -170.1744f, 6049.716f, 30.1726f;
                            
                            case 56:
                                return 57.7188f, 6673.076f, 30.9499f;
                            
                            case 57:
                                return -501.3606f, 5567.93f, 70.0852f;
                            
                            case 58:
                                return -292.4363f, 5839.495f, 120.8191f;
                            
                            case 59:
                                return -436.1143f, 5707.903f, 61.0179f;
                            
                            case 60:
                                return -494.1112f, 5290.479f, 79.6187f;
                            
                            case 61:
                                return -421.0542f, 5187.812f, 122.5195f;
                            
                            case 62:
                                return -835.7191f, 5261.788f, 79.1947f;
                            
                            case 63:
                                return -873.3408f, 4786.007f, 299.4599f;
                            
                            case 64:
                                return -299.7797f, 4676.5f, 245.6817f;
                            
                            case 65:
                                return -903.4214f, 5176.086f, 153.3577f;
                            
                            case 66:
                                return -869.6852f, 5553.71f, 1.4216f;
                            
                            case 67:
                                return -1210.241f, 5228.673f, 88.4579f;
                            
                            case 68:
                                return -1224.511f, 3854.173f, 488.3926f;
                            
                            case 69:
                                return -688.3312f, 3764.984f, 272.5302f;
                            
                            case 70:
                                return -1829.375f, 3982.997f, 271.9911f;
                            
                            case 71:
                                return -2432.337f, 3535.94f, 33.3233f;
                            
                            case 72:
                                return -1440.526f, 5106.688f, 62.4016f;
                            
                            case 73:
                                return -2258.899f, 3831.759f, 118.1093f;
                            
                            case 74:
                                return -1577.494f, 5162.519f, 18.6627f;
                            
                            case 75:
                                return -2046.334f, 4525.601f, 27.6239f;
                            
                            case 76:
                                return -2189.855f, 4616.937f, 0.5382f;
                            
                            case 77:
                                return 423.4926f, 5613.09f, 765.7494f;
                            
                            case 78:
                                return 501.2704f, 5598.329f, 795.0286f;
                            
                            case 79:
                                return 625.9471f, 5675.894f, 747.5628f;
                            
                            case 80:
                                return -555.5328f, 5321.449f, 72.5996f;
                            
                            case 81:
                                return -685.9285f, 5233.738f, 92.4703f;
                            
                            case 82:
                                return -213.783f, 6348.989f, 30.5355f;
                            
                            case 83:
                                return -391.0858f, 6341.175f, 25.425f;
                            
                            case 84:
                                return 0.9189f, 3691.594f, 38.5039f;
                            
                            case 85:
                                return -225.4021f, 3664.75f, 63.4125f;
                            
                            case 86:
                                return 714.1616f, 4136.578f, 34.7842f;
                            
                            case 87:
                                return 825.1304f, 4223.49f, 50.8188f;
                            
                            case 88:
                                return 858.3134f, 4423.847f, 30.2196f;
                            
                            case 89:
                                return 335.1393f, 4373.471f, 63.3434f;
                            
                            case 90:
                                return -1474.287f, 2687.972f, 16.6437f;
                            
                            case 91:
                                return -1183.146f, 4927.809f, 222.0748f;
                            
                            case 92:
                                return -892.4783f, 4529.449f, 113.9803f;
                            
                            case 93:
                                return 761.0254f, 6455.407f, 30.7286f;
                            
                            case 94:
                                return 370.5299f, 5453.183f, 691.2834f;
                            
                            case 95:
                                return -376.5987f, 3840.778f, 73.9626f;
                            
                            case 96:
                                return -2077.635f, 3390.068f, 30.1962f;
                            
                            case 97:
                                return -2317.722f, 3398.114f, 29.7812f;
                            
                            case 98:
                                return -2686.153f, 3554.439f, 1.0289f;
                            
                            case 99:
                                return -1869.387f, 4649.492f, 56.0019f;
                            
                            case 100:
                                return -1854.183f, 4809.846f, 1.9984f;
                            
                            case 101:
                                return -683.5417f, 5823.635f, 16.3313f;
                            
                            case 102:
                                return -790.6581f, 5479.023f, 25.889f;
                            
                            case 103:
                                return 482.4343f, 6486.61f, 29.0864f;
                            
                            case 104:
                                return 183.3372f, 7008.858f, 11.2392f;
                            
                            case 105:
                                return 50.2346f, 4325.231f, 43.3996f;
                            
                            case 106:
                                return -28.0941f, 4430.794f, 57.1619f;
                            
                            case 107:
                                return -187.3603f, 4019.421f, 30.6801f;
                            
                            case 108:
                                return -1804.935f, 5315.242f, 0.8688f;
                            
                            case 109:
                                return 81.2546f, 4050.058f, 29.4f;
                            
                            case 110:
                                return -1191.056f, 4389.15f, 4.3f;
                            
                            case 111:
                                return -2188.334f, 2590.943f, -0.4f;
                            
                            case 112:
                                return -2825.633f, 2358.091f, 0.5703f;
                            
                            case 113:
                                return -2047.696f, 4852.304f, 0.6241f;
                            
                            case 114:
                                return -2664.615f, 2597.589f, -0.4f;
                            
                            case 115:
                                return 271.9201f, 7512.879f, -0.5084f;
                            
                            case 116:
                                return -215.5849f, 4284.967f, 29.5257f;
                            
                            case 117:
                                return -2879.157f, 2879.604f, 0.4205f;
                            
                            case 118:
                                return -920.2339f, 5871.843f, 0.4382f;
                            
                            case 119:
                                return -34.7086f, 7618.572f, 0.4933f;
                            
                            default:
                        }
                        break;
                    }
            }
            break;
        
        case 3:
            if (bParam1)
            {
                switch (iParam2)
                {
                    case 0:
                        switch (iParam3)
                        {
                            case 0:
                                return 867.3339f, 4198.743f, 75f;
                            
                            case 1:
                                return 1254.176f, 4848.075f, 247.0701f;
                            
                            case 2:
                                return 1676.777f, 5140.256f, 160.2494f;
                            
                            case 3:
                                return 1995.339f, 5021.67f, 68.695f;
                            
                            case 4:
                                return 2599.952f, 5032.021f, 112.432f;
                            
                            case 5:
                                return 2967.309f, 5197.417f, 148.5921f;
                            
                            case 6:
                                return 2876.992f, 5911.252f, 378.2234f;
                            
                            case 7:
                                return 3438.904f, 6144.417f, 10.0202f;
                            
                            case 8:
                                return 3431.106f, 5174.187f, 46.1572f;
                            
                            case 9:
                                return 4080.091f, 4476.533f, 17.0407f;
                            
                            case 10:
                                return 3492.801f, 4619.894f, 65f;
                            
                            case 11:
                                return 3378.036f, 4079.524f, 229.1767f;
                            
                            case 12:
                                return 3944.403f, 3729.657f, 19.5046f;
                            
                            case 13:
                                return 3556.383f, 3684.987f, 67.2346f;
                            
                            case 14:
                                return 3296.121f, 3365.198f, 125f;
                            
                            case 15:
                                return 3290f, 3140.437f, 275.7202f;
                            
                            case 16:
                                return 2948.726f, 2791.748f, 48.6755f;
                            
                            case 17:
                                return 1597.427f, 2599.171f, 95f;
                            
                            case 18:
                                return 1397.009f, 2116.503f, 137.1597f;
                            
                            case 19:
                                return 723.7358f, 2322.695f, 64.6875f;
                            
                            case 20:
                                return 753.2642f, 2581.414f, 161f;
                            
                            case 21:
                                return 564.4257f, 3392.354f, 96.1353f;
                            
                            case 22:
                                return 1191.005f, 3400.265f, 78.9779f;
                            
                            case 23:
                                return 1279.739f, 3100.26f, 53.8507f;
                            
                            case 24:
                                return 1415.487f, 3833.477f, 52.6619f;
                            
                            case 25:
                                return 1488.657f, 3946.224f, 305.2148f;
                            
                            case 26:
                                return 2065.697f, 6451.615f, 149.8928f;
                            
                            case 27:
                                return 2559.717f, 6155.792f, 171f;
                            
                            case 28:
                                return 1502.546f, 6159.08f, 230.8224f;
                            
                            case 29:
                                return 1163.891f, 5965.097f, 413.3012f;
                            
                            case 30:
                                return 772.3428f, 5523.894f, 600f;
                            
                            case 31:
                                return 501.8089f, 5604.274f, 1000.598f;
                            
                            case 32:
                                return 1002.141f, 4786.271f, 185.7696f;
                            
                            case 33:
                                return 587.414f, 5114.912f, 405f;
                            
                            case 34:
                                return 1345.87f, 6384.963f, 52.4688f;
                            
                            case 35:
                                return 754.4042f, 6466f, 49f;
                            
                            case 36:
                                return 1042.216f, 6799.529f, 40.2945f;
                            
                            case 37:
                                return 1779.115f, 5662.172f, 274f;
                            
                            case 38:
                                return 2898.098f, 4327.457f, 107.9208f;
                            
                            case 39:
                                return 2634.35f, 3661.461f, 111.1731f;
                            
                            case 40:
                                return 2045.418f, 3429.524f, 56.3868f;
                            
                            case 41:
                                return 1563.065f, 3572.822f, 41f;
                            
                            case 42:
                                return 2276.492f, 1955.542f, 146.9525f;
                            
                            case 43:
                                return 2379.747f, 2604.982f, 89.7836f;
                            
                            case 44:
                                return 543.5116f, 3080.709f, 63f;
                            
                            case 45:
                                return 2264.604f, 4455.955f, 62.2539f;
                            
                            case 46:
                                return 2410.187f, 2908.336f, 373.9144f;
                            
                            case 47:
                                return 3510.479f, 2569.052f, 16.1615f;
                            
                            case 48:
                                return 3073.721f, 2084.079f, 30f;
                            
                            case 49:
                                return 3319.34f, 2272.217f, 14.2949f;
                            
                            case 50:
                                return 2822.12f, 4977.335f, 70f;
                            
                            case 51:
                                return 1299.971f, 4219.281f, 41f;
                            
                            case 52:
                                return 503.1913f, 4450.17f, 112f;
                            
                            case 53:
                                return 2489.62f, 3760.053f, 53f;
                            
                            case 54:
                                return 1824.499f, 2031.218f, 60.1953f;
                            
                            case 55:
                                return 1153.765f, 2384.4f, 75.2003f;
                            
                            case 56:
                                return 1339.664f, 2747.617f, 79.0765f;
                            
                            case 57:
                                return 542.5154f, 2488.194f, 84.9932f;
                            
                            case 58:
                                return 2767.542f, 2047.162f, 126.1494f;
                            
                            case 59:
                                return 2061.36f, 3941.451f, 200f;
                            
                            case 60:
                                return 873.5367f, 2867.737f, 73.5925f;
                            
                            case 61:
                                return 1752.141f, 3052.542f, 78.6478f;
                            
                            case 62:
                                return 2100.787f, 2339.885f, 133.921f;
                            
                            case 63:
                                return 2738.826f, 3476.466f, 81.564f;
                            
                            case 64:
                                return 2285.089f, 3289.129f, 86.2814f;
                            
                            case 65:
                                return 1745.899f, 3756.127f, 53.8457f;
                            
                            case 66:
                                return 2504.338f, 4418.758f, 55f;
                            
                            case 67:
                                return 1552.003f, 2186.406f, 96f;
                            
                            case 68:
                                return 2716.376f, 4132.656f, 63.7827f;
                            
                            case 69:
                                return 3809.813f, 4462.08f, 36.1286f;
                            
                            case 70:
                                return 3257.82f, 4308.541f, 140f;
                            
                            case 71:
                                return 2268.876f, 5381.432f, 328.4639f;
                            
                            case 72:
                                return 2236.389f, 5604.683f, 71.034f;
                            
                            case 73:
                                return 1986.657f, 6201.739f, 66.4804f;
                            
                            case 74:
                                return 3356.059f, 5696.29f, 20f;
                            
                            case 75:
                                return 2457.263f, 6684.452f, 63.14f;
                            
                            case 76:
                                return 1914.983f, 6702.233f, 14.7976f;
                            
                            case 77:
                                return 2149.811f, 3844.999f, 88.0922f;
                            
                            case 78:
                                return 1880.169f, 4244.354f, 80.3363f;
                            
                            case 79:
                                return 1791.897f, 4595.955f, 48.6224f;
                            
                            case 80:
                                return 1181.133f, 5151.417f, 772.3138f;
                            
                            case 81:
                                return 431.2495f, 4768.536f, 665.041f;
                            
                            case 82:
                                return 1410.651f, 6569.377f, 26.5039f;
                            
                            case 83:
                                return 1522.466f, 6617.973f, 8f;
                            
                            case 84:
                                return 2316.162f, 6378.738f, 143.7605f;
                            
                            case 85:
                                return 3127.772f, 5566.866f, 317.7646f;
                            
                            case 86:
                                return 3684.367f, 4916.152f, 618.67f;
                            
                            case 87:
                                return 3941.761f, 4652.369f, 92.7624f;
                            
                            case 88:
                                return 3900.581f, 4262.104f, 887.18f;
                            
                            case 89:
                                return 3535.166f, 3778.242f, 46.4187f;
                            
                            case 90:
                                return 3638.854f, 3108.953f, 8.7037f;
                            
                            case 91:
                                return 931.8565f, 2446.375f, 59f;
                            
                            case 92:
                                return 1052.214f, 2277.729f, 95.5547f;
                            
                            case 93:
                                return 411.0964f, 4298.822f, 40.8556f;
                            
                            case 94:
                                return 970.339f, 5647.13f, 650.7467f;
                            
                            case 95:
                                return 2137.105f, 4785.519f, 59.9326f;
                            
                            case 96:
                                return 2333.533f, 4801.554f, 467.9726f;
                            
                            case 97:
                                return 2800.744f, 4745.392f, 370.3547f;
                            
                            case 98:
                                return 2721.061f, 1556.416f, 101.1161f;
                            
                            case 99:
                                return 1855.284f, 1600.665f, 116.8989f;
                            
                            case 100:
                                return 1623.469f, 1518.122f, 294.3194f;
                            
                            case 101:
                                return 923.4011f, 1635.348f, 218.3212f;
                            
                            case 102:
                                return 829.6124f, 1892.871f, 135.5203f;
                            
                            case 103:
                                return 1294.051f, 5675.865f, 472.5645f;
                            
                            case 104:
                                return 1716.85f, 6416.637f, 81.5075f;
                            
                            case 105:
                                return 2140.929f, 5892.89f, 161.9607f;
                            
                            case 106:
                                return 1604.4f, 5793.905f, 429.8526f;
                            
                            case 107:
                                return 1589.65f, 4160.215f, 883.122f;
                            
                            case 108:
                                return 2191.156f, 4208.336f, 477.8802f;
                            
                            case 109:
                                return 1427.64f, 4515.944f, 85.3721f;
                            
                            case 110:
                                return 1206.398f, 4546.814f, 83.0875f;
                            
                            case 111:
                                return 222.2962f, 4746.207f, 280.8666f;
                            
                            case 112:
                                return 287.655f, 5361.114f, 659.2646f;
                            
                            case 113:
                                return 194.6948f, 7393.709f, 1000f;
                            
                            case 114:
                                return 469.5136f, 6745.105f, 14.1624f;
                            
                            case 115:
                                return 537.5068f, 6663.253f, 447.8182f;
                            
                            case 116:
                                return 3227.793f, 6940.11f, 111.4631f;
                            
                            case 117:
                                return 3614.231f, 5883.145f, 9.5207f;
                            
                            case 118:
                                return 3010.254f, 5697.739f, 463.4349f;
                            
                            case 119:
                                return 2874.324f, 6196.489f, 1000f;
                            
                            default:
                        }
                        break;
                }
            }
            else
            {
                switch (iParam2)
                {
                    case 0:
                        switch (iParam3)
                        {
                            case 0:
                                return 1581.963f, 2200.244f, 78.0226f;
                            
                            case 1:
                                return 1104.104f, 2399.396f, 53.529f;
                            
                            case 2:
                                return 1089.489f, 2132.943f, 57.0757f;
                            
                            case 3:
                                return 932.5687f, 2434.264f, 49.6778f;
                            
                            case 4:
                                return 586.3744f, 2935.313f, 39.9577f;
                            
                            case 5:
                                return 437.5278f, 3537.285f, 32.3159f;
                            
                            case 6:
                                return 917.2156f, 3648.117f, 35.1053f;
                            
                            case 7:
                                return 1528.585f, 3916.301f, 30.6709f;
                            
                            case 8:
                                return 1924.4f, 3468.064f, 50.6772f;
                            
                            case 9:
                                return 2482.272f, 3761.54f, 40.6483f;
                            
                            case 10:
                                return 2722.307f, 2895.323f, 46.873f;
                            
                            case 11:
                                return 3021.258f, 2881.75f, 85.959f;
                            
                            case 12:
                                return 2096.643f, 2504.604f, 89.6423f;
                            
                            case 13:
                                return 2974.657f, 3485.959f, 70.4429f;
                            
                            case 14:
                                return 3390.08f, 3704.603f, 34.9975f;
                            
                            case 15:
                                return 2908.214f, 4342.968f, 49.3031f;
                            
                            case 16:
                                return 1796.101f, 4920.626f, 47.3851f;
                            
                            case 17:
                                return 2241.987f, 5382.81f, 144.0017f;
                            
                            case 18:
                                return 2218.899f, 5946.263f, 49.634f;
                            
                            case 19:
                                return 1601.463f, 6624.76f, 14.7707f;
                            
                            case 20:
                                return 1406.928f, 6568.621f, 19.3763f;
                            
                            case 21:
                                return 439.5467f, 6459.866f, 34.8699f;
                            
                            case 22:
                                return 1503.687f, 6360.855f, 15.6193f;
                            
                            case 23:
                                return 3316.647f, 5190.359f, 17.4152f;
                            
                            case 24:
                                return 3632.89f, 5003.482f, 11.6053f;
                            
                            case 25:
                                return 3057.659f, 5064.144f, 17.7153f;
                            
                            case 26:
                                return 2822.534f, 4978.232f, 62.4826f;
                            
                            case 27:
                                return 3930.095f, 4399.015f, 15.6116f;
                            
                            case 28:
                                return 3859.284f, 4226.905f, 2.7151f;
                            
                            case 29:
                                return 3692.684f, 4570.595f, 24.1191f;
                            
                            case 30:
                                return 1830.916f, 2542.005f, 44.8856f;
                            
                            case 31:
                                return 2424.308f, 3131.437f, 47.2055f;
                            
                            case 32:
                                return 1340.228f, 2988.934f, 45.0809f;
                            
                            case 33:
                                return 817.1245f, 3379.468f, 76.9467f;
                            
                            case 34:
                                return 563.2202f, 2456.984f, 58.1331f;
                            
                            case 35:
                                return 2041.713f, 2002.479f, 84.9881f;
                            
                            case 36:
                                return 2431.854f, 1986.869f, 82.1812f;
                            
                            case 37:
                                return 1190.872f, 3401.189f, 67.3338f;
                            
                            case 38:
                                return 1943.983f, 3817.853f, 31.0619f;
                            
                            case 39:
                                return 1977.679f, 3054.874f, 49.3235f;
                            
                            case 40:
                                return 452.5827f, 5587.175f, 780.1891f;
                            
                            case 41:
                                return 807.1406f, 5701.082f, 696.9146f;
                            
                            case 42:
                                return 1600.868f, 5804.83f, 414.5815f;
                            
                            case 43:
                                return 1412.016f, 5558.528f, 459.5185f;
                            
                            case 44:
                                return 2279.983f, 5788.728f, 154.1637f;
                            
                            case 45:
                                return 2346.173f, 4997.547f, 41.5868f;
                            
                            case 46:
                                return 2391.918f, 4296.647f, 34.1954f;
                            
                            case 47:
                                return 1364.943f, 4385.975f, 43.3491f;
                            
                            case 48:
                                return 998.6568f, 4453.989f, 59.924f;
                            
                            case 49:
                                return 1058.949f, 4219.405f, 34.273f;
                            
                            case 50:
                                return 870.7486f, 6627.962f, 1.1131f;
                            
                            case 51:
                                return 2721.632f, 4513.5f, 41.1966f;
                            
                            case 52:
                                return 1219.444f, 2744.531f, 37.0054f;
                            
                            case 53:
                                return 2564.32f, 2578.493f, 36.9367f;
                            
                            case 54:
                                return 2827.744f, 5963.866f, 350.6364f;
                            
                            case 55:
                                return 2946.397f, 5326.474f, 100.269f;
                            
                            case 56:
                                return 2211.154f, 3593.324f, 55.1756f;
                            
                            case 57:
                                return 3079.837f, 6027.145f, 129.2854f;
                            
                            case 58:
                                return 3345.3f, 5555.332f, 17.907f;
                            
                            case 59:
                                return 528.5965f, 3092.785f, 39.4652f;
                            
                            case 60:
                                return 2184.891f, 3724.368f, 37.4901f;
                            
                            case 61:
                                return 1471.091f, 4948.712f, 75.0594f;
                            
                            case 62:
                                return 2713.996f, 4141.762f, 42.8723f;
                            
                            case 63:
                                return 2476.558f, 5783.607f, 68.702f;
                            
                            case 64:
                                return 2647.75f, 3281.402f, 54.2127f;
                            
                            case 65:
                                return 2210.976f, 5610.793f, 52.8602f;
                            
                            case 66:
                                return 2898.328f, 2389.586f, 170.4231f;
                            
                            case 67:
                                return 2728.33f, 2616.292f, 95.3074f;
                            
                            case 68:
                                return 1844.478f, 4591.953f, 29.6629f;
                            
                            case 69:
                                return 2432.128f, 4616.881f, 28.1137f;
                            
                            case 70:
                                return 2574.294f, 4653.86f, 33.0768f;
                            
                            case 71:
                                return 1574.009f, 3591.066f, 34.3615f;
                            
                            case 72:
                                return 2008.265f, 4986.431f, 40.3378f;
                            
                            case 73:
                                return 1975.059f, 5182.086f, 46.8906f;
                            
                            case 74:
                                return 1955.895f, 4620.182f, 39.6384f;
                            
                            case 75:
                                return 2279.756f, 4846.217f, 39.2283f;
                            
                            case 76:
                                return 2418.292f, 4784.674f, 33.6784f;
                            
                            case 77:
                                return 2005.109f, 3765.983f, 31.1808f;
                            
                            case 78:
                                return 1719.677f, 3692.743f, 33.513f;
                            
                            case 79:
                                return 1530.711f, 3076.231f, 39.9815f;
                            
                            case 80:
                                return 1686.366f, 3301.007f, 40.1368f;
                            
                            case 81:
                                return 3481.603f, 3740.488f, 35.6427f;
                            
                            case 82:
                                return 2392.425f, 3334.924f, 46.3672f;
                            
                            case 83:
                                return 2192.154f, 3168.942f, 50.5572f;
                            
                            case 84:
                                return 2354.496f, 2577.063f, 45.6677f;
                            
                            case 85:
                                return 640.7736f, 2777.938f, 40.9601f;
                            
                            case 86:
                                return 2768.528f, 1701.819f, 23.6943f;
                            
                            case 87:
                                return 3239.663f, 3501.223f, 67.723f;
                            
                            case 88:
                                return 2672.952f, 3516.45f, 51.712f;
                            
                            case 89:
                                return 2619.962f, 3661.864f, 100.2808f;
                            
                            case 90:
                                return 2437.504f, 4069.23f, 37.0001f;
                            
                            case 91:
                                return 1685.598f, 6435.691f, 31.3515f;
                            
                            case 92:
                                return 1417.653f, 3818.394f, 31.1351f;
                            
                            case 93:
                                return 3300.7f, 5941.647f, 93.3217f;
                            
                            case 94:
                                return 870.0084f, 2870.564f, 55.9249f;
                            
                            case 95:
                                return 1352.413f, 6401.655f, 32.4101f;
                            
                            case 96:
                                return 1960.858f, 5376.274f, 185.2074f;
                            
                            case 97:
                                return 1974.847f, 6219.958f, 41.2546f;
                            
                            case 98:
                                return 3684.152f, 3795.969f, 15.0641f;
                            
                            case 99:
                                return 2625.796f, 2809.979f, 32.439f;
                            
                            case 100:
                                return 1302.932f, 4234.541f, 32.9137f;
                            
                            case 101:
                                return 577.5187f, 4169.561f, 37.8946f;
                            
                            case 102:
                                return 1069.311f, 2259.363f, 43.4741f;
                            
                            case 103:
                                return 1381.487f, 3633.717f, 34.0073f;
                            
                            case 104:
                                return 3046.249f, 6219.229f, 111.0105f;
                            
                            case 105:
                                return 985.3563f, 5642.3f, 627.7075f;
                            
                            case 106:
                                return 2504.378f, 5178.088f, 67.6632f;
                            
                            case 107:
                                return 2537.341f, 4476.488f, 36.1789f;
                            
                            case 108:
                                return 1291.73f, 4112.564f, 29.6645f;
                            
                            case 109:
                                return 2176.232f, 4605.335f, 29.194f;
                            
                            case 110:
                                return 3456.624f, 5135.376f, -0.3837f;
                            
                            case 111:
                                return 4054.226f, 4518.386f, 0.4f;
                            
                            case 112:
                                return 1074.313f, 6738.594f, 1.3817f;
                            
                            case 113:
                                return 409.7385f, 4290.737f, 29.5f;
                            
                            case 114:
                                return 2551.275f, 6151.57f, 161.1609f;
                            
                            case 115:
                                return 3646.335f, 2977.049f, 0.6928f;
                            
                            case 116:
                                return 1938.372f, 4287.003f, 29.6693f;
                            
                            case 117:
                                return 3630.215f, 5625.841f, 1.2201f;
                            
                            case 118:
                                return 1582.613f, 6753.431f, 0.4436f;
                            
                            case 119:
                                return 3449.314f, 2677.52f, 0.0895f;
                            
                            default:
                        }
                        break;
                    }
            }
            break;
    }
    return 0f, 0f, 0f;
}

void func_113(var uParam0)//Position - 0x8B51
{
    vector3 vVar0;
    int iVar1;
    
    vVar0.x = 226654995;
    vVar0.y = unk_0x7C7787D2D7139A85();
    vVar0.z = uParam0;
    iVar1 = func_114(1, 1);
    if (!iVar1 == 0)
    {
        unk_0x990C4E4B3665A4D6(1, &vVar0, 3, iVar1);
    }
}

var func_114(int iParam0, bool bParam1)//Position - 0x8B8B
{
    var uVar0;
    int iVar1;
    int iVar2;
    
    iVar1 = 0;
    while (iVar1 < 32)
    {
        iVar2 = unk_0x0C98179F08C6DA4F(iVar1);
        if (func_13(iVar2, 0, 0))
        {
            if (iVar2 != unk_0x7C7787D2D7139A85() || iParam0)
            {
                if (bParam1)
                {
                    unk_0xA1E7A40E1F56E511(&uVar0, iVar1);
                }
                else if (!func_94(iVar2, 0))
                {
                    unk_0xA1E7A40E1F56E511(&uVar0, iVar1);
                }
            }
        }
        iVar1++;
    }
    return uVar0;
}

int func_115(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8BF0
{
    switch (iParam0)
    {
        case 136:
        case 139:
        case 141:
        case 133:
        case 138:
        case 144:
        case 236:
            return iParam1;
        
        case 132:
            switch (iParam2)
            {
                case 0:
                    switch (iParam2)
                    {
                        case 0:
                            return 0;
                        
                        case 1:
                            return 1;
                        
                        case 2:
                            return 2;
                        
                        case 3:
                            return 3;
                        
                        default:
                    }
                    break;
                
                case 1:
                    switch (iParam2)
                    {
                        case 0:
                            return 4;
                        
                        case 1:
                            return 5;
                        
                        case 2:
                            return 6;
                        
                        case 3:
                            return 7;
                        
                        default:
                    }
                    break;
            }
            break;
        
        case 131:
            switch (iParam3)
            {
                case 0:
                    switch (iParam1)
                    {
                        case 0:
                            switch (iParam2)
                            {
                                case 0:
                                    return 0;
                                
                                case 1:
                                    return 1;
                                
                                case 2:
                                    return 2;
                                
                                case 3:
                                    return 3;
                                
                                case 4:
                                    return 4;
                                
                                default:
                            }
                            break;
                        
                        case 1:
                            switch (iParam2)
                            {
                                case 0:
                                    return 5;
                                
                                case 1:
                                    return 6;
                                
                                case 2:
                                    return 7;
                                
                                case 3:
                                    return 8;
                                
                                case 4:
                                    return 9;
                                
                                default:
                            }
                            break;
                        
                        case 2:
                            switch (iParam2)
                            {
                                case 0:
                                    return 10;
                                
                                case 1:
                                    return 11;
                                
                                case 2:
                                    return 12;
                                
                                case 3:
                                    return 13;
                                
                                case 4:
                                    return 14;
                                
                                default:
                            }
                            break;
                        
                        case 3:
                            switch (iParam2)
                            {
                                case 0:
                                    return 15;
                                
                                case 1:
                                    return 16;
                                
                                case 2:
                                    return 17;
                                
                                case 3:
                                    return 18;
                                
                                case 4:
                                    return 19;
                                
                                default:
                            }
                            break;
                        
                        case 4:
                            switch (iParam2)
                            {
                                case 0:
                                    return 20;
                                
                                case 1:
                                    return 21;
                                
                                case 2:
                                    return 22;
                                
                                case 3:
                                    return 24;
                                
                                case 4:
                                    return 25;
                                
                                default:
                            }
                            break;
                        
                        case 5:
                            switch (iParam2)
                            {
                                case 0:
                                    return 26;
                                
                                case 1:
                                    return 27;
                                
                                case 2:
                                    return 28;
                                
                                case 3:
                                    return 29;
                                
                                case 4:
                                    return 30;
                                
                                default:
                            }
                            break;
                        
                        case 6:
                            switch (iParam2)
                            {
                                case 0:
                                    return 31;
                                
                                case 1:
                                    return 32;
                                
                                case 2:
                                    return 33;
                                
                                case 3:
                                    return 34;
                                
                                case 4:
                                    return 35;
                                
                                default:
                            }
                            break;
                    }
                    break;
                
                case 1:
                    switch (iParam1)
                    {
                        case 0:
                            switch (iParam2)
                            {
                                case 0:
                                    return 0;
                                
                                case 1:
                                    return 1;
                                
                                case 2:
                                    return 2;
                                
                                case 3:
                                    return 3;
                                
                                case 4:
                                    return 4;
                                
                                default:
                            }
                            break;
                        
                        case 1:
                            switch (iParam2)
                            {
                                case 0:
                                    return 5;
                                
                                case 1:
                                    return 6;
                                
                                case 2:
                                    return 7;
                                
                                case 3:
                                    return 8;
                                
                                case 4:
                                    return 9;
                                
                                default:
                            }
                            break;
                        
                        case 2:
                            switch (iParam2)
                            {
                                case 0:
                                    return 10;
                                
                                case 1:
                                    return 11;
                                
                                case 2:
                                    return 12;
                                
                                case 3:
                                    return 13;
                                
                                case 4:
                                    return 14;
                                
                                default:
                            }
                            break;
                    }
                    break;
                
                case 2:
                    switch (iParam1)
                    {
                        case 0:
                            switch (iParam2)
                            {
                                case 0:
                                    return 41;
                                
                                default:
                            }
                            break;
                        
                        case 1:
                            switch (iParam2)
                            {
                                case 1:
                                    return 42;
                                
                                default:
                            }
                            break;
                        
                        case 2:
                            switch (iParam2)
                            {
                                case 2:
                                    return 43;
                                
                                default:
                            }
                            break;
                        
                        case 3:
                            switch (iParam2)
                            {
                                case 3:
                                    return 44;
                                
                                default:
                            }
                            break;
                        
                        case 4:
                            switch (iParam2)
                            {
                                case 4:
                                    return 45;
                                
                                default:
                            }
                            break;
                    }
                    break;
            }
            break;
        
        case 129:
            switch (iParam1)
            {
                case 0:
                    switch (iParam2)
                    {
                        case 0:
                            return 0;
                        
                        case 1:
                            return 1;
                        
                        case 2:
                            return 2;
                        
                        case 3:
                            return 3;
                        
                        default:
                    }
                    break;
                
                case 1:
                    switch (iParam2)
                    {
                        case 0:
                            return 4;
                        
                        case 1:
                            return 5;
                        
                        case 2:
                            return 6;
                        
                        case 3:
                            return 7;
                        
                        case 4:
                            return 8;
                        
                        default:
                    }
                    break;
                
                case 2:
                    switch (iParam2)
                    {
                        case 0:
                            return 9;
                        
                        case 1:
                            return 10;
                        
                        case 2:
                            return 11;
                        
                        default:
                    }
                    break;
                
                case 3:
                    switch (iParam2)
                    {
                        case 0:
                            return 12;
                        
                        case 1:
                            return 13;
                        
                        case 2:
                            return 14;
                        
                        case 3:
                            return 15;
                        
                        case 4:
                            return 16;
                        
                        default:
                    }
                    break;
                
                case 4:
                    switch (iParam2)
                    {
                        case 0:
                            return 17;
                        
                        case 1:
                            return 18;
                        
                        case 2:
                            return 19;
                        
                        case 3:
                            return 20;
                        
                        case 4:
                            return 21;
                        
                        default:
                    }
                    break;
                
                case 5:
                    switch (iParam2)
                    {
                        case 0:
                            return 22;
                        
                        case 1:
                            return 24;
                        
                        case 2:
                            return 25;
                        
                        case 3:
                            return 26;
                        
                        default:
                    }
                    break;
                
                case 6:
                    switch (iParam2)
                    {
                        case 0:
                            return 27;
                        
                        case 1:
                            return 28;
                        
                        case 2:
                            return 29;
                        
                        default:
                    }
                    break;
                
                case 7:
                    switch (iParam2)
                    {
                        case 0:
                            return 30;
                        
                        case 1:
                            return 31;
                        
                        case 2:
                            return 32;
                        
                        default:
                    }
                    break;
                
                case 8:
                    switch (iParam2)
                    {
                        case 0:
                            return 33;
                        
                        case 1:
                            return 34;
                        
                        case 2:
                            return 35;
                        
                        case 3:
                            return 36;
                        
                        default:
                    }
                    break;
                
                case 9:
                    switch (iParam2)
                    {
                        case 0:
                            return 37;
                        
                        case 1:
                            return 38;
                        
                        case 2:
                            return 39;
                        
                        case 3:
                            return 40;
                        
                        default:
                    }
                    break;
            }
            break;
        
        case 140:
            switch (iParam1)
            {
                case 0:
                    switch (iParam2)
                    {
                        case 0:
                            return 0;
                        
                        case 1:
                            return 1;
                        
                        case 2:
                            return 2;
                        
                        default:
                    }
                    break;
                
                case 1:
                    switch (iParam2)
                    {
                        case 0:
                            return 3;
                        
                        case 1:
                            return 4;
                        
                        case 2:
                            return 5;
                        
                        default:
                    }
                    break;
                
                case 2:
                    switch (iParam2)
                    {
                        case 0:
                            return 6;
                        
                        case 1:
                            return 7;
                        
                        case 2:
                            return 8;
                        
                        default:
                    }
                    break;
                
                case 3:
                    switch (iParam2)
                    {
                        case 0:
                            return 9;
                        
                        case 1:
                            return 10;
                        
                        case 2:
                            return 11;
                        
                        default:
                    }
                    break;
                
                case 4:
                    switch (iParam2)
                    {
                        case 0:
                            return 12;
                        
                        case 1:
                            return 13;
                        
                        case 2:
                            return 14;
                        
                        default:
                    }
                    break;
            }
            break;
        
        case 146:
            switch (iParam1)
            {
                case 0:
                    switch (iParam2)
                    {
                        case 0:
                            return 0;
                        
                        case 1:
                            return 1;
                        
                        case 2:
                            return 2;
                        
                        default:
                    }
                    break;
                
                case 1:
                    switch (iParam2)
                    {
                        case 0:
                            return 3;
                        
                        case 1:
                            return 4;
                        
                        case 2:
                            return 5;
                        
                        default:
                    }
                    break;
                
                case 2:
                    switch (iParam2)
                    {
                        case 0:
                            return 6;
                        
                        case 1:
                            return 7;
                        
                        case 2:
                            return 8;
                        
                        default:
                    }
                    break;
                
                case 3:
                    switch (iParam2)
                    {
                        case 0:
                            return 9;
                        
                        case 1:
                            return 10;
                        
                        case 2:
                            return 11;
                        
                        default:
                    }
                    break;
            }
            break;
    }
    return -1;
}

int func_116()//Position - 0x9455
{
    return unk_0xBAC643F143880136(0, 1);
}

bool func_117()//Position - 0x9463
{
    if (func_119(Local_151.f_2C8))
    {
        return 0;
    }
    else if (func_118(Local_151.f_2C8))
    {
        return 1;
    }
    return unk_0xBAC643F143880136(0, 2) == 1;
}

int func_118(int iParam0)//Position - 0x9498
{
    switch (iParam0)
    {
        case 0:
            return (Global_40001.f_2B75 || Global_40001.f_2B6D);
        
        case 1:
            return (Global_40001.f_2B74 || Global_40001.f_2B6D);
        
        case 2:
            return (Global_40001.f_2B72 || Global_40001.f_2B6D);
        
        case 3:
            return (Global_40001.f_2B73 || Global_40001.f_2B6D);
        
        default:
    }
    return 0;
}

int func_119(int iParam0)//Position - 0x951C
{
    switch (iParam0)
    {
        case 0:
            return (Global_40001.f_2B71 || Global_40001.f_2B6C);
        
        case 1:
            return (Global_40001.f_2B70 || Global_40001.f_2B6C);
        
        case 2:
            return (Global_40001.f_2B6E || Global_40001.f_2B6C);
        
        case 3:
            return (Global_40001.f_2B6F || Global_40001.f_2B6C);
        
        default:
    }
    return 0;
}

int func_120()//Position - 0x95A0
{
    var uVar0[4];
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    iLocal_126 = 1;
    switch (iLocal_126)
    {
        case 0:
            return unk_0xBAC643F143880136(0, 4);
            break;
        
        case 1:
            iVar1 = func_121(&uVar0);
            iVar2 = unk_0xBAC643F143880136(0, iVar1);
            iVar3 = 0;
            while (iVar3 < 4)
            {
                if (iVar2 >= iVar4 && iVar2 < (uVar0[iVar3] + iVar4))
                {
                    return iVar3;
                }
                iVar4 = (iVar4 + uVar0[iVar3]);
                iVar3++;
            }
            break;
        
        case 2:
            break;
        
        case 3:
            break;
    }
    return unk_0xBAC643F143880136(0, 4);
}

int func_121(var uParam0)//Position - 0x9638
{
    int iVar0;
    int iVar1;
    vector3 vVar2;
    vector3 vVar3;
    bool bVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    
    bVar4 = true;
    iVar0 = 0;
    while (iVar0 < unk_0xACF7D965CEBE5714())
    {
        if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar0)))
        {
            iVar6 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar0));
            if (func_13(iVar6, 1, 1))
            {
                iVar7 = unk_0x23625FE58BACEBFD(iVar6);
                if (!unk_0x2BF5E63466422C38(iVar7))
                {
                    iVar5 = 0;
                    while (iVar5 < 4)
                    {
                        if (!func_123(iVar5))
                        {
                            if (func_122(iVar5, &vVar2, &vVar3))
                            {
                                if (unk_0x51602900F89DF54B(iVar7, vVar2, vVar3, 0, 0, 0))
                                {
                                    bVar4 = false;
                                    (*uParam0)[iVar5]++;
                                    iVar1++;
                                }
                            }
                        }
                        iVar5++;
                    }
                }
            }
        }
        iVar0++;
    }
    if (bVar4)
    {
        iVar5 = 0;
        while (iVar5 < 4)
        {
            if (!func_123(iVar5))
            {
                (*uParam0)[iVar5] = 1;
            }
            iVar5++;
        }
    }
    return iVar1;
}

int func_122(int iParam0, var uParam1, var uParam2)//Position - 0x970C
{
    switch (iParam0)
    {
        case 0:
            *uParam1 = { 283f, -3946f, 0f };
            *uParam2 = { 4500f, 1924f, 0f };
            return 1;
        
        case 1:
            *uParam1 = { -3747f, -3946f, 0f };
            *uParam2 = { 550f, 1868f, 0f };
            return 1;
        
        case 2:
            *uParam1 = { -3747f, 1540f, 0f };
            *uParam2 = { 452.5f, 8022f, 0f };
            return 1;
        
        case 3:
            *uParam1 = { 268f, 1946f, 0f };
            *uParam2 = { 4500f, 8022f, 0f };
            return 1;
        
        default:
    }
    return 0;
}

bool func_123(int iParam0)//Position - 0x97BC
{
    return (func_119(iParam0) && func_118(iParam0));
}

var func_124()//Position - 0x97D5
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    iVar0 = 0;
    while (iVar0 < unk_0xACF7D965CEBE5714())
    {
        iVar2 = unk_0x9DBE48BD26DE1888(iVar0);
        if (unk_0x2700CB8907086DF3(iVar2))
        {
            iVar1++;
        }
        iVar0++;
    }
    if (iVar1 >= Global_40001.f_2B7A)
    {
        return Global_40001.f_2B08;
    }
    if (iVar1 >= Global_40001.f_2B79)
    {
        return Global_40001.f_2B07;
    }
    if (iVar1 >= Global_40001.f_2B78)
    {
        return Global_40001.f_27D3;
    }
    return Global_40001.f_27D3;
}

void func_125()//Position - 0x985B
{
    int iVar0;
    
    if (func_34())
    {
        iVar0 = 0;
        while (iVar0 < 10)
        {
            if (Local_151.f_2C9[iVar0] == unk_0x2E40EEA43EF34BD6())
            {
                if (func_126(iVar0))
                {
                    if (!unk_0xA2BC31158C8CEFD2(Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_1, iVar0))
                    {
                        unk_0xA1E7A40E1F56E511(&(Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_1), iVar0);
                    }
                }
                else if (unk_0xA2BC31158C8CEFD2(Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_1, iVar0))
                {
                    unk_0x3B76114EC84D5812(&(Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_1), iVar0);
                }
            }
            else if (unk_0xA2BC31158C8CEFD2(Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_1, iVar0))
            {
                unk_0x3B76114EC84D5812(&(Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_1), iVar0);
            }
            iVar0++;
        }
    }
}

int func_126(int iParam0)//Position - 0x990D
{
    vector3 vVar0;
    var uVar1;
    
    if (func_32(iParam0, &vVar0, &uVar1))
    {
        if (func_127(vVar0, 10f, 1065353216, 5f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
        {
            return 1;
        }
    }
    return 0;
}

int func_127(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x9952
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
        if (func_132(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
        {
            return 0;
        }
    }
    Global_24B2CF.f_2++;
    if (bParam6)
    {
        if (fParam4 > 0f)
        {
            if (func_128(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
            {
                return 0;
            }
        }
    }
    Global_24B2CF.f_2++;
    return 1;
}

int func_128(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x9A63
{
    int iVar0;
    int iVar1;
    float fVar2;
    
    if (iParam2 && !bParam5)
    {
        if (func_13(unk_0x7C7787D2D7139A85(), 1, 1))
        {
            if (!unk_0x260395BA7F0C83CB())
            {
                fVar2 = fParam4;
                if (fParam7 > 0f)
                {
                    fVar2 = fParam7;
                }
                if (unk_0xD34AF93E9BCF12F0(func_130(unk_0x7C7787D2D7139A85()), vParam0, true) <= (fVar2 + fParam1))
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
        if (func_13(iVar1, 1, 1))
        {
            if (!func_94(iVar1, 0) && unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar1))
            {
                if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x7C7787D2D7139A85()))
                {
                    if ((func_129(iVar1) || !bParam8) && !Global_24FD09[iVar1 /*421*/].f_103)
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
                                if (unk_0xD34AF93E9BCF12F0(func_130(iVar1), vParam0, true) <= (fVar2 + fParam1))
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
                            if (unk_0xD34AF93E9BCF12F0(func_130(iVar1), vParam0, true) <= (fVar2 + fParam1))
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

int func_129(int iParam0)//Position - 0x9C1B
{
    if (unk_0x0A21D8F32B9D5739(unk_0x23625FE58BACEBFD(iParam0)) || Global_24FD09[iParam0 /*421*/].f_F5)
    {
        return 1;
    }
    return 0;
}

Vector3 func_130(int iParam0)//Position - 0x9C46
{
    int iVar0;
    
    iVar0 = iParam0;
    if ((func_56() && Global_1844AE[iVar0 /*871*/].f_34A) && !func_131(Global_1844AE[iVar0 /*871*/].f_34B))
    {
        return Global_1844AE[iVar0 /*871*/].f_34B;
    }
    return func_31(iParam0);
}

int func_131(vector3 vParam0)//Position - 0x9C99
{
    if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
    {
        return 1;
    }
    return 0;
}

int func_132(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x9CC3
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    while (iVar0 < 32)
    {
        iVar1 = iVar0;
        if ((iParam6 == 1 && unk_0x7C7787D2D7139A85() != iVar1) || iParam6 == 0)
        {
            if (func_13(iVar1, bParam2, bParam3))
            {
                if (unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar1))
                {
                    if (!bParam5 || (!unk_0x2BF5E63466422C38(unk_0x23625FE58BACEBFD(iVar1)) && func_129(iVar1)))
                    {
                        if ((!bParam4 || (bParam4 == 1 && unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) != unk_0xC69A85EEB9CA3B95(iVar1))) || unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1)
                        {
                            if (((unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1 && uParam7) && bParam4) && func_133(iVar1))
                            {
                            }
                            else if (unk_0xD4B321D9096B01FC(unk_0x23625FE58BACEBFD(iVar1)))
                            {
                                if (unk_0xD34AF93E9BCF12F0(func_31(iVar1), vParam0, true) < fParam1)
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

int func_133(int iParam0)//Position - 0x9DBF
{
    if (func_136(unk_0x7C7787D2D7139A85(), iParam0))
    {
        return 1;
    }
    Global_264397 = { func_135(iParam0) };
    if (unk_0xB8A6A83E8C303720(&Global_264397))
    {
        return 1;
    }
    if (func_134(unk_0x7C7787D2D7139A85(), iParam0))
    {
        return 1;
    }
    return 0;
}

int func_134(int iParam0, int iParam1)//Position - 0x9E06
{
    int iVar0;
    
    iVar0 = func_80(iParam0);
    if (!iVar0 == func_96())
    {
        if (iVar0 == func_80(iParam1))
        {
            return 1;
        }
    }
    return 0;
}

struct<13> func_135(int iParam0)//Position - 0x9E31
{
    struct<13> Var0;
    
    unk_0x229B5E28267D1B1F(iParam0, &Var0, 13);
    return Var0;
}

int func_136(int iParam0, int iParam1)//Position - 0x9E48
{
    if (unk_0xFF6895C150414C31())
    {
        Global_264397 = { func_135(iParam0) };
        Global_2643A4 = { func_135(iParam1) };
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

void func_137()//Position - 0x9EB5
{
    int iVar0;
    int iVar1;
    
    func_637();
    if (func_635())
    {
        func_519();
    }
    if (func_518(unk_0x7C7787D2D7139A85()) || func_517(unk_0x7C7787D2D7139A85()))
    {
        func_516();
    }
    if ((!func_6(unk_0x7C7787D2D7139A85()) && !func_515(0)) && !func_515(func_514(132)))
    {
        if (func_490(0, 1, 1))
        {
            if (unk_0xA2BC31158C8CEFD2(iLocal_116, 3))
            {
                unk_0x3B76114EC84D5812(&iLocal_116, 3);
            }
            switch (Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_3)
            {
                case 0:
                    if (Local_151.f_8 == 1)
                    {
                        func_489(1);
                        func_488(1);
                    }
                    else if (Local_151.f_8 >= 2)
                    {
                        func_488(1);
                    }
                    break;
                
                case 1:
                    func_484(6);
                    if (Local_151.f_8 >= 2)
                    {
                        func_488(2);
                    }
                    func_484(2);
                    func_482(0);
                    func_480((Global_40001.f_2B6A - func_481(&(Local_151.f_29B), 0, 0)));
                    func_477(func_479((Global_40001.f_2B6A - func_481(&(Local_151.f_29B), 0, 0)), 0), func_478(-1));
                    func_456();
                    break;
                
                case 2:
                    if (Local_151.f_8 > 2)
                    {
                        func_489(0);
                        func_436(132, 1065353216, 1065353216, 0, 0, 0, 0);
                        if (!func_6(unk_0x7C7787D2D7139A85()))
                        {
                            func_435();
                        }
                        else
                        {
                            unk_0xA1E7A40E1F56E511(&iLocal_116, 5);
                        }
                        if (Local_151.f_2C6)
                        {
                            func_434();
                        }
                        if (Local_151.f_2C3)
                        {
                            Global_26A0A9.f_12D1 = 1;
                        }
                        else
                        {
                            Global_26A0A9.f_12D1 = 0;
                        }
                        func_433();
                        if (!func_6(unk_0x7C7787D2D7139A85()))
                        {
                            if (func_34())
                            {
                                func_418(678f, 794f, 206f, 8f, 0);
                                func_418(1911.3f, 4714.6f, 41.1f, 8f, 0);
                                func_418(688.5021f, 735.4581f, 181.296f, 8f, 0);
                            }
                        }
                        func_488(3);
                    }
                    break;
                
                case 3:
                    if (Local_151.f_8 > 3)
                    {
                        func_488(4);
                    }
                    else
                    {
                        if (!iLocal_136)
                        {
                            if (func_417())
                            {
                                iLocal_136 = 1;
                            }
                        }
                        iVar1 = 0;
                        while (iVar1 < Local_151.f_2C5)
                        {
                            if (uLocal_118[iVar1] || iLocal_136)
                            {
                                func_317(iVar1);
                            }
                            iVar1++;
                        }
                        iVar0 = 0;
                        while (iVar0 < 3)
                        {
                            uLocal_118[iLocal_112] = func_316(iLocal_112);
                            uLocal_117[iLocal_112] = func_314(iLocal_112);
                            if (!uLocal_117[iLocal_112])
                            {
                                func_317(iLocal_112);
                            }
                            iLocal_112++;
                            if (iLocal_112 >= Local_151.f_2C5)
                            {
                                iLocal_112 = 0;
                            }
                            iVar0++;
                        }
                        func_482(0);
                        func_484(4);
                        func_484(5);
                        if (func_312(0) && !func_311(0))
                        {
                            func_310();
                        }
                        if ((!func_309(unk_0x7C7787D2D7139A85()) && !unk_0xCD97B9861557C025()) && !unk_0x8F4A1C79B0DAADA3())
                        {
                            func_308();
                        }
                        func_307();
                    }
                    func_304();
                    func_303();
                    func_435();
                    func_285();
                    func_456();
                    break;
                
                case 4:
                    func_191();
                    func_175();
                    func_174();
                    func_482(1);
                    func_173();
                    func_285();
                    if (func_162(&uLocal_138, !unk_0xA2BC31158C8CEFD2(Local_151.f_2, 2)) || unk_0xA2BC31158C8CEFD2(Local_151.f_2, 2))
                    {
                        if (func_34())
                        {
                            func_488(5);
                        }
                        else
                        {
                            func_488(6);
                        }
                    }
                    break;
                
                case 5:
                    if (Local_151.f_8 > 5)
                    {
                        func_488(6);
                    }
                    break;
                
                case 6:
                    break;
            }
        }
        else
        {
            func_157();
        }
    }
    else
    {
        func_516();
        func_157();
    }
    func_144();
    func_139();
    func_138();
}

void func_138()//Position - 0xA248
{
    struct<2> Var0;
    int iVar1;
    
    if (func_34())
    {
        Var0 = { Local_151.f_2D9[iLocal_127 /*2*/] };
        if (unk_0x9C625F4590C97F13(Var0.f_1))
        {
            iVar1 = unk_0x40237B62400B4BCC(Var0.f_1);
            if (unk_0x77FF1FAF6F41CA71(iVar1))
            {
                if (!unk_0xD960230552BC4165(iVar1, 0))
                {
                    unk_0xF25956700ADFD77F(&iVar1);
                }
            }
        }
        iLocal_127++;
        if (iLocal_127 >= 10)
        {
            iLocal_127 = 0;
            iLocal_149 = iLocal_148;
            iLocal_148 = 0;
        }
    }
}

void func_139()//Position - 0xA2B5
{
    if (Local_151.f_8 == 5)
    {
        if (func_38(&(Local_151.f_29D)))
        {
            if (unk_0x9C625F4590C97F13(Local_151.f_2D9[iLocal_127 /*2*/].f_1))
            {
                if (!unk_0xF4B969E0807E76C7(unk_0x40237B62400B4BCC(Local_151.f_2D9[iLocal_127 /*2*/].f_1), 0))
                {
                    if (!unk_0xA2BC31158C8CEFD2(iLocal_146, iLocal_127))
                    {
                        unk_0xA1E7A40E1F56E511(&iLocal_146, iLocal_127);
                        iLocal_147[iLocal_127] = unk_0x04B8CCFB93858A27();
                        unk_0x5F5C6A264C2CA8B1(iLocal_147[iLocal_127], "Explosion_Countdown", unk_0x40237B62400B4BCC(Local_151.f_2D9[iLocal_127 /*2*/].f_1), "GTAO_FM_Events_Soundset", false, 0);
                        unk_0xEC93A4D791E42F8E(iLocal_147[iLocal_127], "Time", 30f);
                    }
                    if ((30000 - func_481(&(Local_151.f_29D), 0, 0)) >= 0)
                    {
                        if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), unk_0x40237B62400B4BCC(Local_151.f_2D9[iLocal_127 /*2*/].f_1), 0))
                        {
                            func_484(3);
                            iLocal_148 = 1;
                        }
                    }
                    else if (unk_0xF42AC9E0924DC59B(Local_151.f_2D9[iLocal_127 /*2*/].f_1))
                    {
                        unk_0x7FF38BFB318C1A86(unk_0x40237B62400B4BCC(Local_151.f_2D9[iLocal_127 /*2*/].f_1));
                        unk_0x47918C34E2805B9C(unk_0x40237B62400B4BCC(Local_151.f_2D9[iLocal_127 /*2*/].f_1), 1, 0, -1);
                    }
                }
                else if (unk_0xA2BC31158C8CEFD2(iLocal_146, iLocal_127) && !unk_0xDE3C2FB26058823A(iLocal_147[iLocal_127]))
                {
                    unk_0xCFF6AB47B7B014FF(iLocal_147[iLocal_127]);
                }
            }
            if (iLocal_149)
            {
                if (!func_92(unk_0x7C7787D2D7139A85()))
                {
                    func_141(func_479((30000 - func_481(&(Local_151.f_29D), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
                    func_140();
                }
            }
        }
    }
}

void func_140()//Position - 0xA44D
{
    Global_14FB1E.f_455 = 1;
}

void func_141(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0xA45D
{
    int iVar0;
    int iVar1;
    
    iVar0 = -1;
    iVar1 = 0;
    while (iVar1 <= 9)
    {
        if (iVar0 == -1)
        {
            if (func_143(7, iVar1) == 0)
            {
                iVar0 = iVar1;
            }
        }
        iVar1++;
    }
    if (iVar0 > -1)
    {
        Global_14FB1E.f_1 = 1;
        func_142(7, iVar0);
        Global_14FB1E.f_1165[iVar0] = uParam0;
        StringCopy(&(Global_14FB1E.f_1165.f_B[iVar0 /*16*/]), sParam1, 64);
        Global_14FB1E.f_1165.f_AC[iVar0] = iParam2;
        Global_14FB1E.f_1165.f_D8[iVar0] = iParam3;
        Global_14FB1E.f_1165.f_B7[iVar0] = iParam4;
        Global_14FB1E.f_1165.f_C2[iVar0] = iParam5;
        Global_14FB1E.f_1165.f_F9[iVar0] = iParam6;
        Global_14FB1E.f_1165.f_104[iVar0] = iParam7;
        Global_14FB1E.f_1165.f_CD[iVar0] = iParam8;
        Global_14FB1E.f_1165.f_13A[iVar0] = iParam9;
        Global_14FB1E.f_1165.f_145[iVar0] = iParam10;
        Global_14FB1E.f_1165.f_165[iVar0] = iParam11;
        Global_14FB1E.f_1165.f_EE[iVar0] = iParam12;
        Global_14FB1E.f_1165.f_10F[iVar0] = iParam13;
        Global_14FB1E.f_1165.f_170[iVar0] = iParam14;
        Global_14FB1E.f_1165.f_17B[iVar0] = iParam15;
        Global_14FB1E.f_1165.f_186[iVar0] = iParam16;
        Global_14FB1E.f_1165.f_E3[iVar0] = iParam17;
    }
}

void func_142(int iParam0, int iParam1)//Position - 0xA5BA
{
    unk_0xA1E7A40E1F56E511(&(Global_14FB1E.f_1828[iParam0]), iParam1);
}

bool func_143(int iParam0, int iParam1)//Position - 0xA5D3
{
    return unk_0xA2BC31158C8CEFD2(Global_14FB1E.f_1828[iParam0], iParam1);
}

void func_144()//Position - 0xA5EC
{
    char* sVar0;
    
    if (((func_13(unk_0x7C7787D2D7139A85(), 1, 1) && !func_6(unk_0x7C7787D2D7139A85())) && !func_517(unk_0x7C7787D2D7139A85())) && func_490(0, 1, 1))
    {
        if (Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_3 == 1)
        {
            if (Local_151.f_2C3)
            {
                sVar0 = "CPC_TILELA";
            }
            else
            {
                sVar0 = "CPC_TILEL";
            }
            if (func_34() && !unk_0x2F879C0BDBED0194(unk_0x0FA8183DAD2B3203()))
            {
                func_145("CPC_PREPAIR", sVar0, func_156(), 0);
            }
            else
            {
                func_145("CPC_PREP", sVar0, func_156(), 0);
            }
        }
        else
        {
            func_433();
        }
    }
    else
    {
        func_433();
    }
}

int func_145(char* sParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0xA692
{
    if (unk_0x9591DE0F00127F2A(sParam0))
    {
        return 0;
    }
    if (unk_0xB9A31E6892C3D2C2(sParam0) > 23)
    {
        return 0;
    }
    if (unk_0x9591DE0F00127F2A(sParam1))
    {
        return 0;
    }
    if (unk_0xB9A31E6892C3D2C2(sParam1) > 23)
    {
        return 0;
    }
    if (unk_0x9591DE0F00127F2A(sParam2))
    {
        return 0;
    }
    if (unk_0xB9A31E6892C3D2C2(sParam2) > 23)
    {
        return 0;
    }
    if (func_155(sParam0, sParam1, sParam2))
    {
        return 0;
    }
    func_149();
    Global_140749 = 4;
    StringCopy(&(Global_140749.f_1), unk_0x0037AFCBDC61F351(), 32);
    Global_140749.f_9 = unk_0xA8C462EF7D9DC564(&(Global_140749.f_1));
    StringCopy(&(Global_140749.f_C), sParam0, 16);
    StringCopy(&(Global_140749.f_10), sParam1, 64);
    StringCopy(&(Global_140749.f_20), sParam2, 64);
    func_148();
    func_147(bParam3);
    func_146();
    return 1;
}

void func_146()//Position - 0xA751
{
    unk_0xA1E7A40E1F56E511(&(Global_140749.f_3B), 1);
}

void func_147(bool bParam0)//Position - 0xA764
{
    if (bParam0)
    {
        unk_0xA1E7A40E1F56E511(&(Global_140749.f_3B), 0);
        return;
    }
    unk_0x3B76114EC84D5812(&(Global_140749.f_3B), 0);
}

void func_148()//Position - 0xA78A
{
    Global_140749.f_A = unk_0x067A0219B2815DA1(unk_0x169A8AC9F93C2727(), 86400000);
    Global_140749.f_B = unk_0x169A8AC9F93C2727();
}

void func_149()//Position - 0xA7AF
{
    func_151();
    func_150(0);
}

void func_150(bool bParam0)//Position - 0xA7C0
{
    bool bVar0;
    
    bVar0 = unk_0x393E9918BC37548A();
    Global_140749 = 20;
    StringCopy(&(Global_140749.f_1), "", 32);
    Global_140749.f_9 = 0;
    if (bVar0)
    {
        Global_140749.f_A = unk_0x169A8AC9F93C2727();
        Global_140749.f_B = unk_0x169A8AC9F93C2727();
    }
    StringCopy(&(Global_140749.f_C), "", 16);
    StringCopy(&(Global_140749.f_10), "", 64);
    StringCopy(&(Global_140749.f_20), "", 64);
    Global_140749.f_34 = 0;
    Global_140749.f_35 = 0;
    Global_140749.f_36 = 0;
    Global_140749.f_37 = -1;
    Global_140749.f_38 = 0;
    Global_140749.f_3B = 0;
    if (bParam0)
    {
        return;
    }
}

void func_151()//Position - 0xA852
{
    if (!func_154())
    {
    }
    if (func_153())
    {
        unk_0x8C952E99D90780F7(&(Global_140749.f_C));
        func_152();
        unk_0xCC56AD222DA9A8C1();
    }
}

void func_152()//Position - 0xA87B
{
    switch (Global_140749)
    {
        case 20:
            return;
        
        case 0:
            return;
        
        case 1:
            unk_0x6A8B3CC08A759F44(Global_140749.f_34);
            return;
        
        case 2:
            unk_0x6A8B3CC08A759F44(Global_140749.f_34);
            unk_0x6A8B3CC08A759F44(Global_140749.f_35);
            return;
        
        case 3:
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_10));
            return;
        
        case 4:
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_10));
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_20));
            return;
        
        case 5:
            unk_0xA89C789CC9FEF523(&(Global_140749.f_10));
            return;
        
        case 6:
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_38);
            unk_0xA89C789CC9FEF523(&(Global_140749.f_10));
            return;
        
        case 7:
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_10));
            return;
        
        case 8:
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_38);
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_10));
            return;
        
        case 9:
            unk_0x2F3DFF2E75DFEA9B(&(Global_140749.f_10));
            return;
        
        case 10:
            unk_0xA89C789CC9FEF523(&(Global_140749.f_10));
            unk_0xA89C789CC9FEF523(&(Global_140749.f_20));
            return;
        
        case 12:
            unk_0xA89C789CC9FEF523(&(Global_140749.f_10));
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_20));
            return;
        
        case 13:
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_38);
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_10));
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_39);
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_20));
            return;
        
        case 11:
            unk_0x2F3DFF2E75DFEA9B(&(Global_140749.f_10));
            return;
        
        case 14:
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_38);
            unk_0xA89C789CC9FEF523(&(Global_140749.f_10));
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_38);
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_20));
            return;
        
        case 15:
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_38);
            unk_0xA89C789CC9FEF523(&(Global_140749.f_10));
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_39);
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_20));
            return;
        
        case 17:
            unk_0xA89C789CC9FEF523(&(Global_140749.f_10));
            unk_0xA89C789CC9FEF523(&(Global_140749.f_20));
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_38);
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_30));
            return;
        
        case 16:
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_38);
            unk_0xA89C789CC9FEF523(&(Global_140749.f_10));
            return;
        
        case 19:
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_38);
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_10));
            return;
        
        case 18:
            unk_0xA89C789CC9FEF523(&(Global_140749.f_10));
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_38);
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_30));
            unk_0xA89C789CC9FEF523(&(Global_140749.f_20));
            return;
        
        default:
    }
}

int func_153()//Position - 0xAAED
{
    if (Global_140749 == 20)
    {
        return 0;
    }
    return 1;
}

int func_154()//Position - 0xAB03
{
    if (!func_153())
    {
        return 0;
    }
    unk_0xC1A9801A23F32F8F(&(Global_140749.f_C));
    func_152();
    return unk_0xCDD0AB887E3F6532();
}

bool func_155(char* sParam0, char* sParam1, char* sParam2)//Position - 0xAB29
{
    if (!func_153())
    {
        return 0;
    }
    if (unk_0x9591DE0F00127F2A(sParam0))
    {
        return 0;
    }
    if (unk_0x9591DE0F00127F2A(sParam1))
    {
        return 0;
    }
    if (unk_0x9591DE0F00127F2A(sParam2))
    {
        return 0;
    }
    if (!unk_0xA8C462EF7D9DC564(sParam0) == unk_0xA8C462EF7D9DC564(&(Global_140749.f_C)))
    {
        return 0;
    }
    if (!unk_0xA8C462EF7D9DC564(sParam1) == unk_0xA8C462EF7D9DC564(&(Global_140749.f_10)))
    {
        return 0;
    }
    return unk_0xA8C462EF7D9DC564(sParam2) == unk_0xA8C462EF7D9DC564(&(Global_140749.f_20));
}

char* func_156()//Position - 0xABA7
{
    switch (Local_151.f_2C8)
    {
        case 0:
            return "CPC_WARN0";
            break;
        
        case 1:
            return "CPC_WARN1";
            break;
        
        case 2:
            return "CPC_WARN2";
            break;
        
        case 3:
            return "CPC_WARN3";
            break;
    }
    return "";
}

void func_157()//Position - 0xABF9
{
    if (!unk_0xA2BC31158C8CEFD2(iLocal_116, 3))
    {
        iLocal_136 = 1;
        func_174();
        unk_0x002BEFCA6CC9B4F5();
        func_482(1);
        func_161();
        func_159();
        unk_0xA1E7A40E1F56E511(&iLocal_116, 3);
        func_158();
    }
}

void func_158()//Position - 0xAC30
{
    Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_7 = 0;
}

void func_159()//Position - 0xAC46
{
    if (Global_24D546.f_6 == unk_0x429EE9FF15BB9033())
    {
        func_160();
    }
}

void func_160()//Position - 0xAC5F
{
    struct<28> Var0;
    
    if (unk_0xAB2A82A2838B61B7(Global_24D546.f_6))
    {
        if (!Global_24D546.f_6 == unk_0x429EE9FF15BB9033())
        {
            return;
        }
    }
    Var0.f_7 = 1;
    Var0.f_8 = 1;
    Var0.f_15 = 1115815936;
    Var0.f_1B = -1082130432;
    Global_24D546 = { Var0 };
    Global_24D546.f_6 = -1;
}

void func_161()//Position - 0xACBC
{
    struct<6> Var0;
    
    if (Global_24B2CF.f_1E5.f_1 == unk_0x429EE9FF15BB9033())
    {
        Global_24B2CF.f_1E5 = { Var0 };
    }
}

int func_162(var uParam0, bool bParam1)//Position - 0xACE1
{
    bool bVar0;
    
    if (((*uParam0 > 0 && !func_172()) && !(func_106(unk_0x7C7787D2D7139A85(), 0) && (func_102(unk_0x7C7787D2D7139A85()) || func_171(unk_0x7C7787D2D7139A85())))) && !func_169(unk_0x7C7787D2D7139A85()))
    {
        func_168();
    }
    switch (*uParam0)
    {
        case 0:
            if (!func_38(&(uParam0->f_3)))
            {
                func_2(&(uParam0->f_3), 0, 0);
            }
            else if (func_1(&(uParam0->f_3), 1000, 0))
            {
                unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 25);
                if (bParam1)
                {
                    unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_11EC), 0);
                    func_2(&(uParam0->f_5), 0, 0);
                }
                func_2(&(uParam0->f_1), 0, 0);
                func_167(uParam0, 1);
            }
            break;
        
        case 1:
            if (func_38(&(uParam0->f_5)))
            {
                if (func_1(&(uParam0->f_5), 3000, 0))
                {
                    bVar0 = true;
                }
            }
            else
            {
                bVar0 = true;
            }
            if (bVar0)
            {
                func_164();
                func_167(uParam0, 2);
            }
            break;
        
        case 2:
            func_164();
            if (func_1(&(uParam0->f_1), 15000, 0))
            {
                if (func_163("AMEV_LBD_HELP"))
                {
                    unk_0x0D23E3918F7AF11B(1);
                }
                func_167(uParam0, 3);
            }
            break;
        
        case 3:
            if (func_1(&(uParam0->f_1), 23500, 0))
            {
                unk_0x3B76114EC84D5812(&(Global_26A0A9.f_11EC), 1);
                func_167(uParam0, 4);
                return 1;
            }
            break;
        
        case 4:
            unk_0x3B76114EC84D5812(&(Global_26A0A9.f_11EC), 1);
            return 1;
    }
    return 0;
}

int func_163(char* sParam0)//Position - 0xAE5C
{
    unk_0x1EF54B101C71E009(sParam0);
    return unk_0xFA637652FFB4E2E5(0);
}

void func_164()//Position - 0xAE6F
{
    if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_11EC, 0))
    {
        if (((((!unk_0xBCFD7D14E63DFD63() && !unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_31B, 2)) && func_13(unk_0x7C7787D2D7139A85(), 1, 1)) && !Global_12038) && !Global_E51C) && !unk_0x260395BA7F0C83CB())
        {
            unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_11EC), 1);
            func_166("AMEV_LBD_HELP", -1);
            func_165(1);
            unk_0x3B76114EC84D5812(&(Global_26A0A9.f_11EC), 0);
        }
    }
}

void func_165(int iParam0)//Position - 0xAEF1
{
    unk_0x998551D4E6A8C263(3, 21, 200, 0, 0);
    if (iParam0 && !func_172())
    {
        unk_0x9964F5BBD9415AB7(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
    }
}

void func_166(char* sParam0, int iParam1)//Position - 0xAF1E
{
    unk_0xD95C12E1062B7D5E(sParam0);
    unk_0x40DC0B0D5BD91E06(0, 0, 0, iParam1);
}

void func_167(var uParam0, int iParam1)//Position - 0xAF35
{
    *uParam0 = iParam1;
}

void func_168()//Position - 0xAF42
{
    Global_258B7D = 1;
}

int func_169(int iParam0)//Position - 0xAF4F
{
    if (iParam0 != func_96())
    {
        if (func_13(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_170(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 2;
            }
        }
    }
    return 0;
}

int func_170(int iParam0)//Position - 0xAF95
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

bool func_171(int iParam0)//Position - 0xB35D
{
    return func_101(iParam0, 19);
}

bool func_172()//Position - 0xB36D
{
    return Global_2531AD.f_A94[0 /*80*/].f_1 != 0;
}

void func_173()//Position - 0xB383
{
    if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 1))
    {
        unk_0x3B76114EC84D5812(&(Global_26A0A9.f_127F), 1);
    }
    if (Global_26A0A9.f_127F > 0)
    {
        unk_0x81995F6F93D8C987("FM_COUNTDOWN_30S_KILL");
        unk_0x81995F6F93D8C987("FM_COUNTDOWN_30S_FIRA");
        unk_0x8E3496DF5BF7F24D("GTAO_FM_Events_30_Sec_Countdown_Scene");
        unk_0x597D844D285B9272(1);
        Global_26A0A9.f_127F = 0;
        unk_0x70431C02FF392D24("DisableFlightMusic", 0);
        unk_0x70431C02FF392D24("WantedMusicDisabled", 0);
        unk_0x70431C02FF392D24("AllowScoreAndRadio", 0);
        if (!unk_0x2553916E420E8EF0(unk_0x0037AFCBDC61F351(), "am_pi_menu"))
        {
            if (Global_26A0A9.f_1289 > -1)
            {
                unk_0x0972EA9E8102C153(Global_26A0A9.f_1289);
                Global_26A0A9.f_1289 = -1;
            }
        }
    }
}

void func_174()//Position - 0xB421
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < Local_151.f_2C5)
    {
        if (unk_0x39A01A052D9B5FF0(vLocal_134[iVar0 /*3*/]))
        {
            unk_0xAA2276003B2ADF1B(&(vLocal_134[iVar0 /*3*/]));
            unk_0xD0D7EA2E45FB6395(vLocal_134[iVar0 /*3*/].f_1);
        }
        iVar0++;
    }
    iVar0 = 0;
    while (iVar0 < 4)
    {
        iLocal_124[iVar0] = 0;
        iVar0++;
    }
}

void func_175()//Position - 0xB480
{
    char* sVar0;
    int iVar1;
    int iVar2;
    char* sVar3;
    
    if (!unk_0xA2BC31158C8CEFD2(Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_2, 0) && (func_190() || unk_0xA2BC31158C8CEFD2(Local_151.f_2, 2)))
    {
        if (func_59(func_189()))
        {
            func_188();
        }
        if (!unk_0xA2BC31158C8CEFD2(Local_151.f_2, 2))
        {
            if (func_312(0))
            {
                if (func_311(0))
                {
                    if (!unk_0xA2BC31158C8CEFD2(Local_151.f_2, 0))
                    {
                        sVar0 = "CPC_END";
                    }
                    else
                    {
                        sVar0 = "CPC_ENDBONUS";
                    }
                    func_187(64, Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_4, sVar0, "AMCH_WIN", 1, 15000, -1082130432, 2);
                }
                else
                {
                    iVar1 = unk_0x9DBE48BD26DE1888(Local_151.f_2A2[0]);
                    if (unk_0x2700CB8907086DF3(iVar1))
                    {
                        iVar2 = unk_0xD7EB9DC48246DA95(iVar1);
                        if (func_311(1))
                        {
                            if (!unk_0xA2BC31158C8CEFD2(Local_151.f_2, 0))
                            {
                                sVar0 = "CPC_2ND";
                            }
                            else
                            {
                                sVar0 = "CPC_2NDBONUS";
                            }
                            func_187(67, Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_4, sVar0, "CPC_OVER", 1, 15000, -1082130432, 2);
                        }
                        else if (func_311(2))
                        {
                            if (!unk_0xA2BC31158C8CEFD2(Local_151.f_2, 0))
                            {
                                sVar0 = "CPC_3RD";
                            }
                            else
                            {
                                sVar0 = "CPC_3RDBONUS";
                            }
                            func_187(67, Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_4, sVar0, "CPC_OVER", 1, 15000, -1082130432, 2);
                        }
                        else
                        {
                            if (unk_0xA2BC31158C8CEFD2(Local_151.f_2, 0) && Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_4 >= Global_40001.f_2C0A)
                            {
                                sVar0 = "CPC_LOSEBONUS";
                            }
                            else
                            {
                                sVar0 = "CPC_LOSE";
                            }
                            sVar3 = unk_0xA09A99AC02B24954(iVar2);
                            if (func_81(iVar2, 1))
                            {
                                sVar3 = func_178(iVar2);
                            }
                            func_177(66, Local_1518[Local_151.f_2A2[0] /*5*/].f_4, sVar0, sVar3, "CPC_OVER", 1, 15000, 2);
                        }
                    }
                }
            }
            else
            {
                func_44(66, "CPC_OVER", "CPC_NOWIN", 1, 15000, 2, 1, 0);
            }
        }
        else
        {
            func_43("", "", 1);
        }
        unk_0xA1E7A40E1F56E511(&(Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_2), 0);
        func_176(132);
    }
}

void func_176(int iParam0)//Position - 0xB687
{
    if (iParam0 == iParam0)
    {
    }
}

int func_177(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)//Position - 0xB696
{
    struct<80> Var0;
    
    Var0.f_3 = -1;
    Var0.f_4 = -1;
    Var0.f_5 = -1;
    Var0.f_6 = -1;
    Var0.f_7 = -1082130432;
    Var0.f_10 = 1;
    Var0.f_47 = 1;
    Var0.f_48 = 2;
    Var0.f_4F = -1;
    func_99(iParam0, &Var0, iParam1, sParam2, sParam4);
    StringCopy(&(Var0.f_19), sParam3, 64);
    Var0.f_47 = iParam5;
    Var0.f_6 = iParam6;
    Var0.f_48 = iParam7;
    return func_45(&Var0);
}

char* func_178(int iParam0)//Position - 0xB709
{
    char* sVar0;
    int iVar1;
    
    if (iParam0 == unk_0x7C7787D2D7139A85())
    {
        sVar0 = func_186(&(Global_18DB1B[iParam0 /*614*/].f_B.f_68));
        return sVar0;
    }
    if (Global_18DB1B[iParam0 /*614*/].f_B.f_78 != Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_B.f_78)
    {
        sVar0 = func_181(iParam0, 0);
        return sVar0;
    }
    if (((func_101(iParam0, 28) || func_101(unk_0x7C7787D2D7139A85(), 28)) || func_180(iParam0)) && !func_179(iParam0))
    {
        return func_181(iParam0, 0);
    }
    iVar1 = func_80(iParam0);
    if (iVar1 != func_96())
    {
        if (iVar1 != unk_0x7C7787D2D7139A85())
        {
            if (!unk_0x77BA37DB22C66465() && !unk_0x690CD141AD7C9F01(0, -1, 1))
            {
                return func_181(iVar1, 0);
            }
        }
    }
    if (iVar1 != func_96())
    {
        sVar0 = func_186(&(Global_18DB1B[iVar1 /*614*/].f_B.f_68));
        if (unk_0x9591DE0F00127F2A(sVar0))
        {
            return func_181(iVar1, 0);
        }
        else
        {
            return sVar0;
        }
    }
    return "";
}

int func_179(int iParam0)//Position - 0xB80F
{
    struct<13> Var0;
    
    Var0 = { func_135(iParam0) };
    if (unk_0x77BA37DB22C66465())
    {
        if (unk_0x7B3E18C7DAC336C3(0))
        {
            if (unk_0xCA3736B46FE270BB(&Var0))
            {
                return 1;
            }
        }
    }
    return 0;
}

int func_180(int iParam0)//Position - 0xB83F
{
    struct<13> Var0;
    
    if (iParam0 != func_96())
    {
        Var0 = { func_135(iParam0) };
        if (unk_0x39FDED461BF385C3() || unk_0xE434AB6E3DE89861())
        {
            if (unk_0x7B3E18C7DAC336C3(0))
            {
                return 0;
            }
        }
        else if (unk_0x77BA37DB22C66465())
        {
            if (unk_0x7B3E18C7DAC336C3(0))
            {
                if (unk_0xCA3736B46FE270BB(&Var0))
                {
                    return 0;
                }
            }
        }
    }
    return 1;
}

char* func_181(int iParam0, bool bParam1)//Position - 0xB898
{
    if (!bParam1)
    {
        if (func_183(iParam0, 1))
        {
            return func_182();
        }
    }
    return unk_0xD54FB72F71EFE6C4("GB_REST_ACC");
}

char* func_182()//Position - 0xB8BF
{
    return unk_0xD54FB72F71EFE6C4("GB_REST_ACCM");
}

bool func_183(int iParam0, bool bParam1)//Position - 0xB8CF
{
    return func_184(iParam0, bParam1, 1);
}

int func_184(int iParam0, bool bParam1, int iParam2)//Position - 0xB8E0
{
    int iVar0;
    
    if (iParam0 == func_96())
    {
        return 0;
    }
    if (!bParam1)
    {
        if (func_185(iParam0, iParam2))
        {
            return 0;
        }
    }
    iVar0 = Global_18DB1B[iParam0 /*614*/].f_B;
    if (iVar0 != func_96() && Global_18DB1B[iVar0 /*614*/].f_B.f_1C2 == iParam2)
    {
        return 1;
    }
    return 0;
}

int func_185(int iParam0, int iParam1)//Position - 0xB93C
{
    if (iParam0 != func_96())
    {
        if (Global_18DB1B[iParam0 /*614*/].f_B != func_96())
        {
            if (Global_18DB1B[iParam0 /*614*/].f_B == iParam0 && Global_18DB1B[iParam0 /*614*/].f_B.f_1C2 == iParam1)
            {
                return 1;
            }
        }
    }
    return 0;
}

var func_186(var uParam0)//Position - 0xB98B
{
    return uParam0;
}

int func_187(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xB995
{
    struct<80> Var0;
    
    Var0.f_3 = -1;
    Var0.f_4 = -1;
    Var0.f_5 = -1;
    Var0.f_6 = -1;
    Var0.f_7 = -1082130432;
    Var0.f_10 = 1;
    Var0.f_47 = 1;
    Var0.f_48 = 2;
    Var0.f_4F = -1;
    func_99(iParam0, &Var0, iParam1, sParam2, sParam3);
    Var0.f_47 = iParam4;
    Var0.f_6 = iParam5;
    Var0.f_7 = iParam6;
    Var0.f_48 = iParam7;
    return func_45(&Var0);
}

void func_188()//Position - 0xBA06
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 <= 3)
    {
        if (Global_2531AD.f_A94[iVar0 /*80*/].f_2 != 0)
        {
            Global_2531AD.f_A94[iVar0 /*80*/].f_2 = 5;
            func_97(&(Global_2531AD.f_A94[iVar0 /*80*/].f_45), 1);
        }
        iVar0++;
    }
}

int func_189()//Position - 0xBA51
{
    return Global_2531AD.f_A94[0 /*80*/].f_1;
}

bool func_190()//Position - 0xBA65
{
    return unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 25);
}

void func_191()//Position - 0xBA79
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    var uVar4;
    var uVar5;
    
    if (!unk_0xA2BC31158C8CEFD2(Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_2, 1))
    {
        if (func_6(unk_0x7C7787D2D7139A85()))
        {
            unk_0xA1E7A40E1F56E511(&(Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_2), 1);
            return;
        }
        if (func_517(unk_0x7C7787D2D7139A85()))
        {
            unk_0xA1E7A40E1F56E511(&(Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_2), 1);
            return;
        }
        if (Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_4 >= Global_40001.f_2C0A)
        {
            iVar3 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT((Local_151.f_1 - iLocal_114)) / 60f) / 1000f));
            if (iVar3 > Global_40001.f_2CAB)
            {
                iVar3 = Global_40001.f_2CAB;
            }
            else if (iVar3 < 1)
            {
                iVar3 = 1;
            }
            iVar2 = (func_284() * iVar3);
            iVar1 = (func_283() * iVar3);
        }
        else
        {
            func_281(0);
        }
        if (!unk_0xA2BC31158C8CEFD2(Local_151.f_2, 2))
        {
            if (Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_4 >= Global_40001.f_2C0A)
            {
                if (unk_0xA2BC31158C8CEFD2(Local_151.f_2, 0))
                {
                    iVar0 = (iVar0 + SYSTEM::ROUND((IntToFloat(func_280()) * Global_40001.f_2CB6)));
                }
            }
            if (func_311(0))
            {
                Local_1517.f_5 = 1;
                iVar1 = (iVar1 + SYSTEM::ROUND((IntToFloat(func_279()) * Global_40001.f_2CB7)));
            }
            if ((Local_151.f_2A2[0] != unk_0x2E40EEA43EF34BD6() && Local_151.f_2A2[1] != unk_0x2E40EEA43EF34BD6()) && Local_151.f_2A2[2] != unk_0x2E40EEA43EF34BD6())
            {
                if (Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_4 >= Global_40001.f_2C0A)
                {
                    func_281(1);
                }
            }
        }
        func_260(&iVar0, 1);
        iVar0 = (iVar0 + iVar2);
        if (iVar0 > 0)
        {
            if (func_259())
            {
                func_247(-59668082, iVar0, &uVar4, 0, 1, 0);
            }
            else
            {
                unk_0xD9E4BA7E1787178D(iVar0, "AM_CP_COLLECTION", &uVar5);
            }
        }
        Local_1517.f_6 = iVar0;
        if (!Global_40001.f_2CEB)
        {
            if (Local_1517.f_6 > 0)
            {
                func_246(8, Local_1517.f_6);
            }
        }
        Global_258E0F = iVar0;
        func_245();
        func_192(0, unk_0x0FA8183DAD2B3203(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
        Local_1517.f_7 = (Local_1517.f_7 + iVar1);
        unk_0xA1E7A40E1F56E511(&(Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_2), 1);
    }
}

int func_192(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xBC9F
{
    return func_193(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_193(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0xBCC1
{
    int iVar0;
    int iVar1;
    
    iVar0 = func_203(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
    if (iParam4 == -592022605 || iParam4 == -1915191729)
    {
        if (unk_0xD4B321D9096B01FC(iParam1))
        {
            if (unk_0x4625051E51BA911B(iParam1))
            {
                iVar1 = unk_0x3D464779B732760F(iParam1);
                func_199(unk_0x0E516C24C87F5D0C(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
            }
        }
    }
    else
    {
        func_194(iParam1, iVar0, sParam8, iParam10);
    }
    return iVar0;
}

void func_194(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0xBD3A
{
    vector3 vVar0;
    
    vVar0 = { func_197(iParam0, 1) };
    if (iParam0 == func_196(unk_0x0FA8183DAD2B3203()))
    {
        func_195(1);
    }
    func_199(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_195(int iParam0)//Position - 0xBD6E
{
    Global_2531AD.f_762 = iParam0;
}

int func_196(int iParam0)//Position - 0xBD7F
{
    return iParam0;
}

Vector3 func_197(int iParam0, bool bParam1)//Position - 0xBD89
{
    vector3 vVar0;
    vector3 vVar1;
    float fVar2;
    vector3 vVar3;
    vector3 vVar4;
    float fVar5;
    
    if (unk_0x80022561D13932C8())
    {
        vVar1 = { unk_0x521C180E8FDEB978(2) };
    }
    if (iParam0 == func_198(unk_0x0FA8183DAD2B3203()) && unk_0x328DC5757076B0D5(unk_0x18638AA8DFAAE787()) == 4)
    {
        vVar0 = { unk_0xC12F91346EA13947(iParam0, 0f, 8f, -0.2f) };
    }
    else
    {
        vVar0 = { unk_0xACE5E491FC1B0D37(iParam0, 0) };
    }
    fVar2 = 0f;
    if (!unk_0xF4B969E0807E76C7(iParam0, 0))
    {
        fVar2 = unk_0xD2809C7F7FD79247(iParam0);
        if (unk_0x328DC5757076B0D5(unk_0x18638AA8DFAAE787()) == 4)
        {
            fVar2 = vVar1.z;
        }
    }
    unk_0xB10397B050DB322E(unk_0x7F375072508F738F(iParam0), &vVar3, &vVar4);
    if (bParam1)
    {
        fVar5 = (vVar4.z + 0.18f);
    }
    else
    {
        fVar5 = (vVar3.z + 0.18f);
    }
    vVar0 = { unk_0x16DECC52D9360F1E(vVar0, fVar2, 0f, 0f, fVar5) };
    return vVar0;
}

int func_198(int iParam0)//Position - 0xBE4D
{
    return iParam0;
}

void func_199(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xBE57
{
    int iVar0;
    int iVar1;
    
    if (iParam1 != 0)
    {
        iVar1 = -1;
        iVar0 = 0;
        while (iVar0 < 20)
        {
            if (Global_2531AD.f_509[iVar0 /*30*/].f_6 == 0 || Global_2531AD.f_509[iVar0 /*30*/].f_6 == 7)
            {
                iVar1 = iVar0;
                iVar0 = 20;
            }
            iVar0++;
        }
        if (iVar1 != -1)
        {
            Global_2531AD.f_509[iVar1 /*30*/] = { vParam0 };
            Global_2531AD.f_509[iVar1 /*30*/].f_6 = 1;
            Global_2531AD.f_509[iVar1 /*30*/].f_4 = func_202(Global_2531AD.f_509[iVar1 /*30*/], &Global_14063D, &Global_14063E);
            Global_2531AD.f_509[iVar1 /*30*/].f_7 = unk_0x169A8AC9F93C2727();
            Global_2531AD.f_509[iVar1 /*30*/].f_3 = iParam1;
            Global_2531AD.f_509[iVar1 /*30*/].f_8 = iParam2;
            Global_2531AD.f_509[iVar1 /*30*/].f_9 = func_201();
            Global_2531AD.f_509[iVar1 /*30*/].f_A = func_200();
            StringCopy(&(Global_2531AD.f_509[iVar1 /*30*/].f_16), sParam3, 16);
            Global_2531AD.f_509[iVar1 /*30*/].f_1A = unk_0x067A0219B2815DA1(unk_0x169A8AC9F93C2727(), iParam4);
        }
    }
}

int func_200()//Position - 0xBF6E
{
    if (Global_2531AD.f_762)
    {
        Global_2531AD.f_762 = 0;
        return 1;
    }
    Global_2531AD.f_762 = 0;
    return 0;
}

var func_201()//Position - 0xBF98
{
    var uVar0;
    
    uVar0 = Global_2531AD.f_764;
    Global_2531AD.f_764 = 1;
    return uVar0;
}

float func_202(vector3 vParam0, var uParam1, var uParam2)//Position - 0xBFB3
{
    float fVar0;
    float fVar1;
    float fVar2;
    float fVar3;
    
    fVar0 = unk_0xD34AF93E9BCF12F0(unk_0xEB9451CD6AC51B04(), vParam0, true);
    if (fVar0 < 5f)
    {
        *uParam1 = 0.402f;
        *uParam2 = 0.476f;
        return 0f;
    }
    if (fVar0 > 20f)
    {
        *uParam1 = 0.212f;
        *uParam2 = 0.286f;
        return 1f;
    }
    fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
    fVar2 = (fVar1 * (0.402f - 0.212f));
    fVar3 = (fVar1 * (0.476f - 0.286f));
    *uParam1 = (fVar2 + 0.212f);
    *uParam2 = (fVar3 + 0.286f);
    return fVar1;
}

var func_203(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xC04E
{
    var uVar0;
    
    uVar0 = func_204(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
    return uVar0;
}

int func_204(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xC071
{
    float fVar0;
    int iVar1;
    int iVar2;
    float fVar3;
    
    if (iParam1 == 0)
    {
        if (func_244(unk_0x7C7787D2D7139A85()) || func_243(unk_0x7C7787D2D7139A85()))
        {
            if (Global_40001.f_25A3 > 16000)
            {
                iVar2 = 16000;
            }
            else
            {
                iVar2 = Global_40001.f_25A3;
            }
        }
        else if (func_241() || func_238(unk_0x7C7787D2D7139A85()))
        {
            if (Global_40001.f_58EA > 16000)
            {
                iVar2 = 16000;
            }
            else
            {
                iVar2 = Global_40001.f_58EA;
            }
        }
        else if (func_84())
        {
            if (Global_40001.f_6CEA > 16000)
            {
                iVar2 = 16000;
            }
            else
            {
                iVar2 = Global_40001.f_6CEA;
            }
        }
        else if (Global_40001.f_19EB > 10000)
        {
            iVar2 = 10000;
        }
        else
        {
            iVar2 = Global_40001.f_19EB;
        }
    }
    if (func_237(sParam2))
    {
    }
    if (func_236())
    {
        if (iParam4 < 1)
        {
            iParam4 = 1;
        }
        iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
        iVar1 = func_234(iVar1);
        fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
        iVar1 = SYSTEM::ROUND(fVar3);
        if (bParam10)
        {
            iVar1 = func_233(&iVar1);
        }
        if (iParam1 == 0)
        {
            switch (iParam0)
            {
                case 2:
                    func_231(0, &iVar1);
                    break;
                
                case 3:
                    func_231(1, &iVar1);
                    break;
                
                case 1:
                    func_229(&iVar1);
                    break;
                }
        }
        if (iVar1 > Global_19BD7B)
        {
            return 0;
        }
        if (iParam1 == 0)
        {
            if (iVar1 > iVar2)
            {
                if (iParam0 == 1)
                {
                    iVar1 = iVar2;
                }
                if (iParam0 == 2 || iParam0 == 3)
                {
                    iVar1 = iVar2;
                }
            }
        }
        if (bParam7)
        {
            func_226(1164, iVar1, -1);
            if (iParam1 == 0)
            {
                func_214((func_224(unk_0x7C7787D2D7139A85(), 1) + iVar1), iParam9, 0);
                if (iParam8 == 0)
                {
                }
                if (iParam9 == 0)
                {
                }
                unk_0x9DF8487FF4AABAFE(iVar1, iParam8, iParam9);
                if (Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_27.f_2 != -1)
                {
                    func_226(1165, iVar1, -1);
                }
                if (iParam1 == 0)
                {
                    func_209(iVar1);
                }
            }
        }
        if (bParam5)
        {
        }
        if (bParam7)
        {
            if (iParam6 == -1)
            {
                func_205((func_207(unk_0x7C7787D2D7139A85()) + iVar1));
            }
            else
            {
                func_205((func_207(unk_0x7C7787D2D7139A85()) + iParam6));
            }
        }
        if (bParam7)
        {
        }
    }
    return iVar1;
}

void func_205(int iParam0)//Position - 0xC29E
{
    if (func_236())
    {
        Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_D3.f_5 = iParam0;
        func_206(joaat("mpply_globalxp"), iParam0);
    }
}

void func_206(int iParam0, int iParam1)//Position - 0xC2C9
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != 0)
    {
        unk_0x41410A69AD49AFCD(iVar0, iParam1, 1);
    }
}

int func_207(int iParam0)//Position - 0xC2E5
{
    if (iParam0 > -1)
    {
        if (func_13(iParam0, 0, 1))
        {
            if (iParam0 == unk_0x7C7787D2D7139A85())
            {
                return func_208(joaat("mpply_globalxp"));
            }
            else
            {
                return Global_1844AE[iParam0 /*871*/].f_D3.f_5;
            }
        }
        else
        {
            return func_208(joaat("mpply_globalxp"));
        }
    }
    return 0;
}

int func_208(int iParam0)//Position - 0xC336
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

void func_209(int iParam0)//Position - 0xC354
{
    struct<13> Var0;
    int iVar1;
    
    Var0 = { func_135(unk_0x7C7787D2D7139A85()) };
    if (unk_0xFF6895C150414C31())
    {
        if (unk_0xF10E9BDC0C546560(&Var0))
        {
            iVar1 = func_212(func_213(&Var0));
            if (iVar1 == 0)
            {
                func_211(&Global_151EC6, iParam0);
                func_210(joaat("mpply_crew_local_xp_0"), Global_151EC6);
            }
            else if (iVar1 == 1)
            {
                func_211(&Global_151EC7, iParam0);
                func_210(joaat("mpply_crew_local_xp_1"), Global_151EC7);
            }
            else if (iVar1 == 2)
            {
                func_211(&Global_151EC8, iParam0);
                func_210(joaat("mpply_crew_local_xp_2"), Global_151EC8);
            }
            else if (iVar1 == 3)
            {
                func_211(&Global_151EC9, iParam0);
                func_210(joaat("mpply_crew_local_xp_3"), Global_151EC9);
            }
            else if (iVar1 == 4)
            {
                func_211(&Global_151ECA, iParam0);
                func_210(joaat("mpply_crew_local_xp_4"), Global_151ECA);
            }
        }
    }
}

void func_210(int iParam0, int iParam1)//Position - 0xC428
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != 0)
    {
        unk_0x41410A69AD49AFCD(iVar0, iParam1, 1);
    }
    switch (iParam0)
    {
        case joaat("mpply_crew_0_id"):
            Global_151EC1 = iParam1;
            break;
        
        case joaat("mpply_crew_1_id"):
            Global_151EC3 = iParam1;
            break;
        
        case joaat("mpply_crew_2_id"):
            Global_151EC3 = iParam1;
            break;
        
        case joaat("mpply_crew_3_id"):
            Global_151EC4 = iParam1;
            break;
        
        case joaat("mpply_crew_4_id"):
            Global_151EC5 = iParam1;
            break;
        
        case joaat("mpply_crew_local_xp_0"):
            Global_151EC6 = iParam1;
            break;
        
        case joaat("mpply_crew_local_xp_1"):
            Global_151EC7 = iParam1;
            break;
        
        case joaat("mpply_crew_local_xp_2"):
            Global_151EC8 = iParam1;
            break;
        
        case joaat("mpply_crew_local_xp_3"):
            Global_151EC9 = iParam1;
            break;
        
        case joaat("mpply_crew_local_xp_4"):
            Global_151ECA = iParam1;
            break;
        
        case joaat("mpply_became_cheater_num"):
            Global_151ECB = iParam1;
            break;
        
        case joaat("mpply_friendly"):
            Global_151ECC = iParam1;
            break;
        
        case joaat("mpply_offensive_language"):
            Global_151ECD = iParam1;
            break;
        
        case joaat("mpply_griefing"):
            Global_151ECE = iParam1;
            break;
        
        case joaat("mpply_helpful"):
            Global_151ECF = iParam1;
            break;
        
        case joaat("mpply_offensive_tagplate"):
            Global_151ED0 = iParam1;
            break;
        
        case joaat("mpply_offensive_ugc"):
            Global_151ED1 = iParam1;
            break;
        
        default:
            break;
    }
}

void func_211(var uParam0, int iParam1)//Position - 0xC54D
{
    *uParam0 = (*uParam0 + iParam1);
}

int func_212(int iParam0)//Position - 0xC55E
{
    if (iParam0 == Global_151EC1)
    {
        return 0;
    }
    else if (iParam0 == Global_151EC2)
    {
        return 1;
    }
    else if (iParam0 == Global_151EC3)
    {
        return 2;
    }
    else if (iParam0 == Global_151EC4)
    {
        return 3;
    }
    else if (iParam0 == Global_151EC5)
    {
        return 4;
    }
    else
    {
        return -1;
    }
    return -1;
}

int func_213(var uParam0)//Position - 0xC5BB
{
    if (unk_0xFF6895C150414C31())
    {
        if (unk_0xF10E9BDC0C546560(uParam0))
        {
            return Global_25852C;
        }
    }
    return Global_25852C;
}

void func_214(int iParam0, int iParam1, int iParam2)//Position - 0xC5DE
{
    if (func_236())
    {
        if (iParam0 >= 1787576850)
        {
            iParam0 = 1787576850;
        }
        if (Global_40001.f_2583 == 0 && iParam1 != -1076930708)
        {
            if (iParam2 == 0)
            {
                if (iParam0 < Global_151F57[func_223(-1)])
                {
                    unk_0x9DF8487FF4AABAFE(iParam0, -523908350, iParam1);
                    return;
                }
                else if (iParam0 == Global_151F57[func_223(-1)])
                {
                    return;
                }
            }
        }
        if (Global_40001.f_2582 == 0)
        {
            if (iParam0 == 0)
            {
                unk_0x9DF8487FF4AABAFE(iParam0, -1158693853, -1345423847);
                if (iParam2 == 0)
                {
                    return;
                }
            }
        }
        if (Global_40001.f_2582 == 0)
        {
            if (iParam0 < 0)
            {
                unk_0x9DF8487FF4AABAFE(iParam0, -1586921397, iParam1);
                return;
            }
        }
        if (func_222(unk_0x7C7787D2D7139A85()))
        {
            Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_D3.f_1 = iParam0;
            Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_D3.f_6 = func_220(iParam0, 1);
        }
        func_219(639, iParam0, -1, 1);
        func_218(640, func_220(iParam0, 1), -1, 1, 0);
        Global_151F57[func_223(-1)] = iParam0;
        func_215(-1109644434, 7, 0);
    }
}

void func_215(int iParam0, int iParam1, int iParam2)//Position - 0xC704
{
    int iVar0;
    
    if (func_217(iParam1, iParam2))
    {
        iVar0 = func_216();
        Global_2584FC[iVar0] = iParam1;
        Global_258507[iVar0] = iParam0;
    }
}

int func_216()//Position - 0xC731
{
    int iVar0;
    int iVar1;
    
    iVar0 = 9;
    iVar1 = 0;
    while (iVar1 <= 9)
    {
        if (Global_2584FC[iVar1] == 0)
        {
            iVar0 = iVar1;
            iVar1 = 10;
        }
        iVar1++;
    }
    return iVar0;
}

int func_217(int iParam0, var uParam1)//Position - 0xC766
{
    if (Global_14085D)
    {
        return 0;
    }
    if (iParam0 == 22)
    {
        return 1;
    }
    if ((((((((uParam1 || !Global_140869) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 1;
}

void func_218(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xC7EC
{
    int iVar0;
    
    if (bParam4)
    {
    }
    iVar0 = Global_26CBBF[iParam0 /*3*/][func_223(iParam2)];
    if (iVar0 != 0)
    {
        unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
    }
}

void func_219(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xC81C
{
    int iVar0;
    
    iVar0 = Global_26CBBF[iParam0 /*3*/][func_223(iParam2)];
    if (iVar0 != 0)
    {
        unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
    }
    switch (iParam0)
    {
        case 787:
            Global_151F0F[func_223(iParam2)] = iParam1;
            break;
        
        case 788:
            Global_151F15[func_223(iParam2)] = iParam1;
            break;
        
        case 789:
            Global_151F1B[func_223(iParam2)] = iParam1;
            break;
        
        case 790:
            Global_151F21[func_223(iParam2)] = iParam1;
            break;
        
        case 777:
            Global_151EF1[func_223(iParam2)] = iParam1;
            break;
        
        case 778:
            Global_151EF7[func_223(iParam2)] = iParam1;
            break;
        
        case 779:
            Global_151EFD[func_223(iParam2)] = iParam1;
            break;
        
        case 780:
            Global_151F03[func_223(iParam2)] = iParam1;
            break;
        
        case 767:
            Global_151ED3[func_223(iParam2)] = iParam1;
            break;
        
        case 768:
            Global_151ED9[func_223(iParam2)] = iParam1;
            break;
        
        case 769:
            Global_151EDF[func_223(iParam2)] = iParam1;
            break;
        
        case 770:
            Global_151EE5[func_223(iParam2)] = iParam1;
            break;
        
        case 757:
            Global_151F2D[func_223(iParam2)] = iParam1;
            break;
        
        case 758:
            Global_151F33[func_223(iParam2)] = iParam1;
            break;
        
        case 759:
            Global_151F39[func_223(iParam2)] = iParam1;
            break;
        
        case 760:
            Global_151F3F[func_223(iParam2)] = iParam1;
            break;
        
        case 1303:
            Global_151F4B[func_223(iParam2)] = iParam1;
            break;
        
        case 7233:
            Global_151F51[func_223(iParam2)] = iParam1;
            break;
        
        case 639:
            Global_151F57[func_223(iParam2)] = iParam1;
            break;
        
        case 1278:
            Global_151F5D[func_223(iParam2)] = iParam1;
            break;
        
        case 1876:
            Global_2758A0[0 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 2267:
            Global_2758A0[1 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 2929:
            Global_2758A0[2 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 3058:
            Global_2758A0[3 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 9509:
            Global_275929[func_223(iParam2)] = iParam1;
            break;
        
        case 764:
            Global_151F63[func_223(iParam2)] = iParam1;
            break;
        
        case 765:
            Global_151F69[func_223(iParam2)] = iParam1;
            break;
        
        case 766:
            Global_151F6F[func_223(iParam2)] = iParam1;
            break;
        
        case 1236:
            Global_151F7B[func_223(iParam2)] = iParam1;
            break;
        
        case 3053:
            Global_2758E3[0 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 3054:
            Global_2758E3[1 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 3055:
            Global_2758E3[2 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 3056:
            Global_2758E3[3 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 3057:
            Global_2758E3[4 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 3636:
            Global_27592C[0 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 3637:
            Global_27592C[1 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 3638:
            Global_27592C[2 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 3639:
            Global_27592C[3 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 3640:
            Global_27592C[4 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 3641:
            Global_27593C[0 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 3642:
            Global_27593C[1 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 3643:
            Global_27593C[2 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 3644:
            Global_27593C[3 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 3645:
            Global_27593C[4 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 3221:
            Global_2758E3[5 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 3227:
            Global_2758A0[4 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 3663:
            Global_27594C[func_223(iParam2)] = iParam1;
            break;
        
        case 3664:
            Global_275955[func_223(iParam2)] = iParam1;
            break;
        
        case 3665:
            Global_27594F[func_223(iParam2)] = iParam1;
            break;
        
        case 3666:
            Global_275958[func_223(iParam2)] = iParam1;
            break;
        
        case 3667:
            Global_275952[func_223(iParam2)] = iParam1;
            break;
        
        case 3668:
            Global_27595B[func_223(iParam2)] = iParam1;
            break;
        
        case 3689:
            Global_27595E[func_223(iParam2)] = iParam1;
            break;
        
        case 3229:
            Global_2758E3[6 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 3230:
            Global_2758A0[5 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 3234:
            Global_2758E3[7 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 3232:
            Global_2758A0[6 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 4019:
            Global_2758E3[8 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 4020:
            Global_2758A0[7 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 4022:
            Global_2758E3[9 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 4023:
            Global_2758A0[8 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 4025:
            Global_2758E3[10 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 4026:
            Global_2758A0[9 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 4028:
            Global_2758E3[11 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 4029:
            Global_2758A0[10 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 6109:
            Global_2758E3[12 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 6110:
            Global_2758A0[11 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 6167:
            Global_2758E3[13 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 6168:
            Global_2758A0[12 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 6545:
            Global_2758E3[14 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 6546:
            Global_2758A0[13 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 6558:
            Global_2758E3[15 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 6559:
            Global_2758A0[14 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 6561:
            Global_2758E3[16 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 6562:
            Global_2758A0[15 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 6564:
            Global_2758E3[17 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 6565:
            Global_2758A0[16 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 7283:
            Global_2758A0[17 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 7285:
            Global_2758A0[18 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 7287:
            Global_2758A0[19 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 8010:
            Global_2758A0[20 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        case 8282:
            Global_275961[func_223(iParam2)] = iParam1;
            break;
        
        case 8283:
            Global_275964[func_223(iParam2)] = iParam1;
            break;
        
        case 8284:
            Global_275967[func_223(iParam2)] = iParam1;
            break;
        
        case 8285:
            Global_27596A[func_223(iParam2)] = iParam1;
            break;
        
        case 8286:
            Global_27596D[func_223(iParam2)] = iParam1;
            break;
        
        case 8287:
            Global_275970[func_223(iParam2)] = iParam1;
            break;
        
        case 8288:
            Global_275973[func_223(iParam2)] = iParam1;
            break;
        
        case 8289:
            Global_275976[func_223(iParam2)] = iParam1;
            break;
        
        case 8290:
            Global_275979[func_223(iParam2)] = iParam1;
            break;
        
        case 8291:
            Global_27597C[func_223(iParam2)] = iParam1;
            break;
        
        case 8292:
            Global_27597F[func_223(iParam2)] = iParam1;
            break;
        
        case 8293:
            Global_275982[func_223(iParam2)] = iParam1;
            break;
        
        case 8294:
            Global_275985[func_223(iParam2)] = iParam1;
            break;
        
        case 8900:
            Global_275988[func_223(iParam2)] = iParam1;
            break;
        
        case 8534:
            Global_2758A0[21 /*3*/][func_223(iParam2)] = iParam1;
            break;
        
        default:
            break;
    }
}

int func_220(int iParam0, bool bParam1)//Position - 0xD19F
{
    if (bParam1)
    {
    }
    return func_221(iParam0, 0);
}

int func_221(int iParam0, int iParam1)//Position - 0xD1B3
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

int func_222(int iParam0)//Position - 0xD272
{
    if (iParam0 == -1)
    {
        return 0;
    }
    else
    {
        return unk_0xA2BC31158C8CEFD2(Global_2531AD.f_1, iParam0);
    }
    return 1;
}

int func_223(int iParam0)//Position - 0xD297
{
    int iVar0;
    int iVar1;
    
    iVar0 = iParam0;
    if (iVar0 == -1)
    {
        iVar1 = func_41();
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

int func_224(int iParam0, bool bParam1)//Position - 0xD2CB
{
    if (bParam1)
    {
    }
    return func_225(iParam0);
}

int func_225(int iParam0)//Position - 0xD2DE
{
    if (Global_1406D3.f_9 == 0)
    {
        if (iParam0 > -1)
        {
            if (iParam0 == unk_0x7C7787D2D7139A85())
            {
                return Global_151F57[func_223(-1)];
            }
            else if (func_222(iParam0))
            {
                return Global_1844AE[iParam0 /*871*/].f_D3.f_1;
            }
        }
    }
    else
    {
        return Global_151F57[func_223(-1)];
    }
    return 0;
}

void func_226(int iParam0, int iParam1, int iParam2)//Position - 0xD33B
{
    int iVar0;
    
    iVar0 = func_228(iParam0, func_223(iParam2), 0);
    iVar0 = (iVar0 + iParam1);
    if (!func_227(iParam0))
    {
        func_218(iParam0, iVar0, iParam2, 1, 0);
    }
    else
    {
        func_219(iParam0, iVar0, iParam2, 1);
    }
}

int func_227(int iParam0)//Position - 0xD37D
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

int func_228(int iParam0, int iParam1, int iParam2)//Position - 0xD5E1
{
    int iVar0;
    var uVar1;
    
    if (iParam2 == 0)
    {
    }
    iVar0 = Global_26CBBF[iParam0 /*3*/][func_223(iParam1)];
    if (unk_0x367DA79FE620711B(iVar0, &uVar1, -1))
    {
        return uVar1;
    }
    return 0;
}

void func_229(int iParam0)//Position - 0xD613
{
    int iVar0;
    int iVar1;
    int iVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    
    iVar1 = unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85());
    iVar0 = 0;
    while (iVar0 < unk_0xACF7D965CEBE5714())
    {
        iVar4 = unk_0x9DBE48BD26DE1888(iVar0);
        if (unk_0x2700CB8907086DF3(iVar4))
        {
            iVar5 = unk_0xD7EB9DC48246DA95(iVar4);
            if (unk_0xC69A85EEB9CA3B95(iVar5) != -1)
            {
                if (unk_0xC69A85EEB9CA3B95(iVar5) == iVar1 || func_68(unk_0xC69A85EEB9CA3B95(iVar5), iVar1, 0))
                {
                    iVar2++;
                    if (iVar5 != unk_0x7C7787D2D7139A85())
                    {
                        if (func_136(unk_0x7C7787D2D7139A85(), iVar5))
                        {
                            bVar3 = true;
                        }
                    }
                }
            }
        }
        iVar0++;
    }
    if (bVar3)
    {
        iVar6 = SYSTEM::ROUND((func_230(*iParam0, 100) * (10f * Global_40001.f_107A)));
    }
    if (iVar2 > 4)
    {
        iVar2 = 4;
    }
    if (iVar2 >= 2)
    {
        iVar7 = SYSTEM::ROUND((func_230(*iParam0, 100) * (20f * Global_40001.f_1073)));
    }
    *iParam0 = (*iParam0 + iVar6);
    *iParam0 = (*iParam0 + iVar7);
}

float func_230(int iParam0, int iParam1)//Position - 0xD6FE
{
    float fVar0;
    float fVar1;
    float fVar2;
    
    fVar0 = SYSTEM::TO_FLOAT(iParam0);
    fVar1 = SYSTEM::TO_FLOAT(iParam1);
    fVar2 = (fVar0 / fVar1);
    return fVar2;
}

void func_231(bool bParam0, int iParam1)//Position - 0xD71F
{
    int iVar0;
    int iVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    
    if (bParam0)
    {
        iVar0 = 0;
        while (iVar0 < unk_0xACF7D965CEBE5714())
        {
            iVar3 = iVar0;
            if (unk_0x2700CB8907086DF3(iVar3))
            {
                iVar4 = unk_0xD7EB9DC48246DA95(iVar3);
                if (func_13(iVar4, 0, 1))
                {
                    if (iVar4 != unk_0x7C7787D2D7139A85())
                    {
                        iVar1++;
                        if (func_136(unk_0x7C7787D2D7139A85(), iVar4))
                        {
                            bVar2 = true;
                        }
                    }
                }
            }
            iVar0++;
        }
    }
    else
    {
        iVar0 = 0;
        while (iVar0 < 32)
        {
            iVar4 = iVar0;
            if (func_13(iVar4, 1, 1))
            {
                if (iVar4 != unk_0x7C7787D2D7139A85())
                {
                    if (func_232(unk_0x7C7787D2D7139A85(), iVar4) <= 20f)
                    {
                        iVar1++;
                        if (func_136(unk_0x7C7787D2D7139A85(), iVar4))
                        {
                            bVar2 = true;
                        }
                    }
                }
            }
            iVar0++;
        }
    }
    if (bVar2)
    {
        iVar5 = SYSTEM::ROUND((func_230(*iParam1, 100) * (10f * Global_40001.f_107A)));
    }
    if (iVar1 > 4)
    {
        iVar1 = 4;
    }
    if (iVar1 >= 1)
    {
        iVar6 = SYSTEM::ROUND((func_230(*iParam1, 100) * (20f * Global_40001.f_1073)));
    }
    *iParam1 = (*iParam1 + iVar5);
    *iParam1 = (*iParam1 + iVar6);
}

float func_232(int iParam0, int iParam1)//Position - 0xD837
{
    return SYSTEM::VDIST(func_31(iParam0), func_31(iParam1));
    return 0f;
}

int func_233(int iParam0)//Position - 0xD853
{
    int iVar0;
    
    if (unk_0x2909109C6CD2EDDA() != 3)
    {
        return *iParam0;
    }
    iVar0 = SYSTEM::ROUND((func_230(*iParam0, 100) * 25f));
    *iParam0 = (*iParam0 + iVar0);
    return *iParam0;
}

int func_234(int iParam0)//Position - 0xD88A
{
    if (iParam0 < 0)
    {
        if (unk_0x25A1A0BF87F74E56(iParam0) > func_224(unk_0x7C7787D2D7139A85(), 1))
        {
            iParam0 = -func_224(unk_0x7C7787D2D7139A85(), 1);
        }
    }
    if (func_235(8000, 0, 0) > 0)
    {
        if (func_235(8000, 0, 0) < (iParam0 + func_224(unk_0x7C7787D2D7139A85(), 1)))
        {
            iParam0 = (func_235(8000, 0, 0) - func_224(unk_0x7C7787D2D7139A85(), 1));
        }
    }
    return iParam0;
}

int func_235(int iParam0, bool bParam1, int iParam2)//Position - 0xD8F2
{
    if (iParam2 == 0)
    {
    }
    if (bParam1)
    {
    }
    if (iParam0 >= 8000)
    {
        iParam0 = 8000;
    }
    return Global_46F22[iParam0];
}

int func_236()//Position - 0xD91A
{
    return 1;
}

int func_237(char* sParam0)//Position - 0xD923
{
    if (unk_0x79FCE4565761C974(sParam0))
    {
        return 1;
    }
    else if (unk_0x2553916E420E8EF0(sParam0, "") || unk_0x2553916E420E8EF0(sParam0, "0"))
    {
        return 1;
    }
    return 0;
}

int func_238(int iParam0)//Position - 0xD95C
{
    return func_239(func_240(iParam0));
}

int func_239(int iParam0)//Position - 0xD96E
{
    switch (iParam0)
    {
        case 233:
            return 1;
        
        default:
    }
    return 0;
}

int func_240(int iParam0)//Position - 0xD988
{
    if (func_106(iParam0, 0))
    {
        return Global_18DB1B[iParam0 /*614*/].f_B.f_21;
    }
    return -1;
}

bool func_241()//Position - 0xD9AB
{
    if (unk_0xA51CBC95AC3A4B14())
    {
        return func_56();
    }
    return func_242(Global_440000.f_25AF8);
}

int func_242(int iParam0)//Position - 0xD9CF
{
    int iVar0;
    
    if (iParam0 == 0)
    {
        return 0;
    }
    iVar0 = 0;
    while (iVar0 < 16)
    {
        if (Global_40001.f_1390[iVar0] == iParam0)
        {
            return 1;
        }
        iVar0++;
    }
    return 0;
}

bool func_243(int iParam0)//Position - 0xDA09
{
    return Global_24FD09[iParam0 /*421*/].f_73 == 2;
}

bool func_244(int iParam0)//Position - 0xDA1E
{
    return Global_24FD09[iParam0 /*421*/].f_73 == 7;
}

void func_245()//Position - 0xDA33
{
    Global_258B7C = 1;
}

void func_246(int iParam0, int iParam1)//Position - 0xDA40
{
    if (iParam1 > 0)
    {
        if (Global_40001.f_5BB5 == 0 || Global_40001.f_5BB5 == 1)
        {
            if (!unk_0xE434AB6E3DE89861() || Global_40001.f_5BB5 == 1)
            {
                Global_26A0A9.f_11B = iParam0;
                if (iParam1 > Global_40001.f_19B8)
                {
                    iParam1 = Global_40001.f_19B8;
                }
                Global_26A0A9.f_11C = iParam1;
                Global_26A0A9.f_11D = 0;
            }
        }
    }
}

void func_247(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xDAB2
{
    int iVar0;
    
    if (!func_259())
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
                func_248(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
            func_248(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
                func_248(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
            func_248(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
            break;
    }
}

int func_248(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xE11F
{
    bool bVar0;
    int iVar1;
    int iVar2;
    bool bVar3;
    int iVar4;
    bool bVar5;
    
    bVar0 = false;
    if (!func_259())
    {
        bVar0 = true;
    }
    iVar1 = 1;
    if (!bVar0)
    {
        if (!unk_0x10312E24AC503B38(func_41()) || unk_0x9F3230C03E32BA3F())
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
            *uParam0 = func_255(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
            func_254(1, iParam4);
            Global_4111C1 = 0;
        }
        if (iParam7 & 4 != 0)
        {
            func_249(-1, iParam4, iParam6, iParam5, -1);
        }
    }
    return 0;
}

void func_249(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xE2CA
{
    switch (iParam1)
    {
        case 1704445500:
            unk_0xA1E7A40E1F56E511(&(Global_24FD09[unk_0x7C7787D2D7139A85() /*421*/].f_7A.f_47), 0);
            break;
    }
    if (iParam0 != -1)
    {
        func_250(iParam0);
    }
}

void func_250(int iParam0)//Position - 0xE302
{
    bool bVar0;
    
    bVar0 = false;
    if (!func_259())
    {
        bVar0 = true;
    }
    if (iParam0 != -1)
    {
        if (func_253(iParam0))
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
        func_251(&(Global_410F82[iParam0 /*84*/]));
    }
}

void func_251(var uParam0)//Position - 0xE356
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
    func_252(&(uParam0->f_D));
    func_252(&(uParam0->f_D.f_D));
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

void func_252(var uParam0)//Position - 0xE45D
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

int func_253(int iParam0)//Position - 0xE4A5
{
    if (iParam0 >= 0 && iParam0 < 5)
    {
        return Global_410F82[iParam0 /*84*/].f_41.f_5 == 1;
    }
    return 0;
}

void func_254(int iParam0, int iParam1)//Position - 0xE4CF
{
    Global_258E9A = iParam1;
    Global_258E99 = iParam0;
}

int func_255(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0xE4E3
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 5)
    {
        if (Global_410F82[iVar0 /*84*/].f_41.f_2 == 0)
        {
            if (!func_259())
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
                func_256(Global_410F82[iVar0 /*84*/], iVar0);
            }
            return iVar0;
        }
        iVar0++;
    }
    return -1;
}

void func_256(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0xE61F
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
    iVar1 = func_258(vVar0.y);
    if ((Global_40001.f_5C04 && !Global_40001.f_5C05) && !Global_40001.f_5C06)
    {
        return;
    }
    if (!iVar1 == 0)
    {
        func_257();
        unk_0x990C4E4B3665A4D6(1, &vVar0, 35, iVar1);
    }
}

void func_257()//Position - 0xE6B1
{
    unk_0x42B7026D73D48D50("AM_ARENA_SHP");
}

int func_258(int iParam0)//Position - 0xE6C1
{
    var uVar0;
    
    if (iParam0 != -1)
    {
        unk_0xA1E7A40E1F56E511(&uVar0, iParam0);
    }
    return uVar0;
}

int func_259()//Position - 0xE6D9
{
    if (unk_0xE434AB6E3DE89861())
    {
        return unk_0x60E2BDB67AA16B1C();
    }
    return 0;
}

void func_260(int iParam0, int iParam1)//Position - 0xE6F0
{
    int iVar0;
    
    if (*iParam0 > 0)
    {
        if (!func_278())
        {
            if (func_277(0))
            {
                if (!func_276(0))
                {
                    if (unk_0xD56C8C2B75BF9665(func_275()))
                    {
                        if (func_274() == 100)
                        {
                            iVar0 = *iParam0;
                            *iParam0 = 0;
                        }
                        else
                        {
                            iVar0 = ((*iParam0 / 100) * func_274());
                            *iParam0 = (*iParam0 - iVar0);
                        }
                        func_272(&iVar0, 0);
                        if (iParam1 == 1)
                        {
                            func_265("GB_BCUT_TICK1", func_275(), iVar0, 0, 0, 1, 1);
                        }
                        func_264(20);
                        func_261(func_275(), iVar0, 1);
                    }
                }
            }
        }
    }
}

void func_261(int iParam0, int iParam1, int iParam2)//Position - 0xE791
{
    struct<8> Var0;
    
    if (func_13(iParam0, 0, 1))
    {
        Var0 = -1590759069;
        Var0.f_1 = unk_0x7C7787D2D7139A85();
        Var0.f_2 = iParam1;
        Var0.f_4 = iParam2;
        Var0.f_5 = func_263(iParam0);
        func_262(&(Var0.f_6), &(Var0.f_7));
        unk_0x990C4E4B3665A4D6(1, &Var0, 8, func_258(iParam0));
    }
}

void func_262(var uParam0, var uParam1)//Position - 0xE7E7
{
    *uParam0 = Global_1931FE.f_9;
    *uParam1 = Global_1931FE.f_A;
}

var func_263(int iParam0)//Position - 0xE801
{
    return Global_18DB1B[iParam0 /*614*/].f_214;
}

void func_264(int iParam0)//Position - 0xE815
{
    int iVar0;
    int iVar1;
    
    iVar0 = (iParam0 / 32);
    iVar1 = (iParam0 % 32);
    unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_1322.f_7[iVar0]), iVar1);
}

int func_265(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0xE83E
{
    int iVar0;
    struct<8> Var1;
    
    iVar0 = -1;
    if (unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iParam1) || iParam5)
    {
        if (!bParam4)
        {
            StringCopy(&Var1, unk_0xA09A99AC02B24954(iParam1), 64);
        }
        else
        {
            StringCopy(&Var1, unk_0xA09A99AC02B24954(iParam1), 64);
        }
        if (unk_0x9591DE0F00127F2A(&Var1))
        {
        }
        unk_0x6C607B5286DEE8D9(sParam0);
        unk_0xEB6F6B8EBD6B6648(func_61(iParam1, -2, 1, 0, 0));
        unk_0xA89C789CC9FEF523(func_270(&Var1));
        if (!iParam3 == 0)
        {
            unk_0xEB6F6B8EBD6B6648(iParam3);
        }
        unk_0x6A8B3CC08A759F44(iParam2);
        iVar0 = unk_0x6E617E0C74B3189D(0, 1);
        func_266(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
    }
    return iVar0;
}

void func_266(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xE8D6
{
    int iVar0;
    
    if ((!func_269() || !unk_0xA51CBC95AC3A4B14()) || !func_94(unk_0x7C7787D2D7139A85(), 0))
    {
        return;
    }
    iVar0 = func_267(iParam2);
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

int func_267(int iParam0)//Position - 0xE9DE
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 <= (Global_1980E0 - 1))
    {
        if (iParam0 > Global_1980E0.f_5[iVar0 /*53*/].f_1)
        {
            func_268(iVar0);
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

void func_268(int iParam0)//Position - 0xEA40
{
    int iVar0;
    
    iVar0 = 4;
    while (iVar0 >= iParam0 + 1)
    {
        Global_1980E0.f_5[iVar0 /*53*/] = { Global_1980E0.f_5[(iVar0 - 1) /*53*/] };
        iVar0 = (iVar0 + -1);
    }
}

bool func_269()//Position - 0xEA79
{
    return unk_0x9742C47C6EA02281(-1762644250);
}

var func_270(char* sParam0)//Position - 0xEA8A
{
    char cVar0[64];
    
    StringCopy(&cVar0, "<C>", 64);
    StringConCat(&cVar0, sParam0, 64);
    StringConCat(&cVar0, "</C>~s~", 64);
    return func_271(&cVar0);
}

var func_271(char[4] cParam0)//Position - 0xEAAE
{
    return cParam0;
}

void func_272(int iParam0, bool bParam1)//Position - 0xEAB8
{
    int iVar0;
    int iVar1;
    
    if (bParam1)
    {
        iVar1 = func_273(1);
    }
    else
    {
        iVar1 = func_273(0);
    }
    iVar0 = ((*iParam0 / 100) * iVar1);
    *iParam0 = (*iParam0 - iVar0);
}

int func_273(bool bParam0)//Position - 0xEAEA
{
    if (bParam0)
    {
        return SYSTEM::ROUND((0.05f * 100f));
    }
    return Global_40001.f_3066;
}

int func_274()//Position - 0xEB10
{
    return Global_40001.f_3065;
}

int func_275()//Position - 0xEB1F
{
    return Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_B;
}

bool func_276(bool bParam0)//Position - 0xEB34
{
    return func_183(unk_0x7C7787D2D7139A85(), bParam0);
}

bool func_277(bool bParam0)//Position - 0xEB46
{
    return func_81(unk_0x7C7787D2D7139A85(), bParam0);
}

bool func_278()//Position - 0xEB58
{
    return func_82(unk_0x7C7787D2D7139A85());
}

int func_279()//Position - 0xEB68
{
    return Global_40001.f_2BF9;
}

int func_280()//Position - 0xEB77
{
    return Global_40001.f_2BF8;
}

void func_281(bool bParam0)//Position - 0xEB86
{
    if (bParam0)
    {
        if (func_282(1))
        {
            unk_0xA1E7A40E1F56E511(&Global_180710, 1);
        }
    }
    else if (func_282(2))
    {
        unk_0xA1E7A40E1F56E511(&Global_180710, 2);
    }
}

int func_282(int iParam0)//Position - 0xEBB8
{
    int iVar0;
    
    iVar0 = func_228(2534, -1, 0);
    if (iParam0 == 0)
    {
        if ((unk_0xA2BC31158C8CEFD2(iVar0, 0) && unk_0xA2BC31158C8CEFD2(iVar0, 1)) && unk_0xA2BC31158C8CEFD2(iVar0, 2))
        {
            return 0;
        }
    }
    else if (iParam0 == 1)
    {
        if ((unk_0xA2BC31158C8CEFD2(iVar0, 3) && unk_0xA2BC31158C8CEFD2(iVar0, 4)) && unk_0xA2BC31158C8CEFD2(iVar0, 5))
        {
            return 0;
        }
    }
    else if (iParam0 == 2)
    {
        if ((unk_0xA2BC31158C8CEFD2(iVar0, 6) && unk_0xA2BC31158C8CEFD2(iVar0, 7)) && unk_0xA2BC31158C8CEFD2(iVar0, 8))
        {
            return 0;
        }
    }
    else if (iParam0 == 3)
    {
        if ((unk_0xA2BC31158C8CEFD2(iVar0, 9) && unk_0xA2BC31158C8CEFD2(iVar0, 10)) && unk_0xA2BC31158C8CEFD2(iVar0, 11))
        {
            return 0;
        }
    }
    return 1;
}

int func_283()//Position - 0xEC89
{
    return Global_40001.f_2C0C;
}

int func_284()//Position - 0xEC98
{
    return Global_40001.f_2C0B;
}

void func_285()//Position - 0xECA7
{
    if (unk_0xA2BC31158C8CEFD2(iLocal_116, 5))
    {
        func_286();
    }
    func_519();
}

void func_286()//Position - 0xECC1
{
    int iVar0[3];
    int iVar1;
    var uVar2[3];
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    var uVar11[3];
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    
    if (Local_151.f_2A2[0] > -1)
    {
        iVar9 = 0;
        iVar7 = 0;
        while (iVar7 < 3)
        {
            iVar0[iVar7] = func_96();
            iVar7++;
        }
        iVar7 = 0;
        while (iVar7 < 3)
        {
            if (Local_151.f_2A2[iVar7] > -1)
            {
                iVar12 = unk_0x9DBE48BD26DE1888(Local_151.f_2A2[iVar7]);
                if (unk_0x2700CB8907086DF3(iVar12))
                {
                    iVar1 = unk_0xD7EB9DC48246DA95(iVar12);
                    if (func_13(iVar1, 0, 1))
                    {
                        if (!func_94(iVar1, 0))
                        {
                            iVar0[iVar7] = iVar1;
                            uVar2[iVar7] = Local_1518[Local_151.f_2A2[iVar7] /*5*/].f_4;
                            if (func_277(1))
                            {
                                if (func_81(iVar1, 1))
                                {
                                    uVar11[iVar7] = func_61(iVar1, -2, 0, 0, 0);
                                }
                            }
                        }
                    }
                }
            }
            iVar7++;
        }
        iVar8 = unk_0x2E40EEA43EF34BD6();
        if (func_92(unk_0x7C7787D2D7139A85()))
        {
            iVar13 = func_301();
            iVar14 = unk_0x74D4E16E179B8F53(iVar13);
            if (unk_0xD56C8C2B75BF9665(iVar14))
            {
                iVar15 = unk_0x932F91FB8ED4D272(iVar14);
                if (unk_0x2700CB8907086DF3(iVar15))
                {
                    iVar8 = iVar15;
                }
            }
        }
        iVar3 = func_479(0, Local_151.f_2C4);
        iVar4 = Local_151.f_2C5;
        iVar5 = func_479(0, Local_1518[iVar8 /*5*/].f_4);
        iVar6 = func_479(0, (Global_40001.f_2B69 - func_481(&(Local_151.f_295), 0, 0)));
        func_300(iVar6);
        if (iVar6 > 30000)
        {
            iVar10 = 1;
        }
        else
        {
            iVar10 = 6;
        }
        func_287(iVar0[0], iVar0[1], iVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar3, iVar4, iVar5, iVar6, &iVar9, iVar10, func_297(), uVar11[0], uVar11[1], uVar11[2]);
    }
}

void func_287(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, var uParam13, var uParam14, var uParam15)//Position - 0xEE73
{
    char* sVar0;
    int iVar1;
    char* sVar2;
    
    if (func_294(0) == 0)
    {
        return;
    }
    func_293();
    iVar1 = 0;
    if (((Global_2589A2[0] != iParam0 || Global_2589A2[1] != iParam1) || Global_2589A2[2] != iParam2) || *iParam10)
    {
        iVar1 = 1;
    }
    Global_2589A2[0] = iParam0;
    Global_2589A2[1] = iParam1;
    Global_2589A2[2] = iParam2;
    Global_2589A2[3] = 0;
    Global_2589A2[4] = 0;
    if (Global_2589A2[0] != func_96())
    {
        if (iVar1 == 1)
        {
            sVar0 = unk_0xA09A99AC02B24954(Global_2589A2[0]);
            Global_2589A8[0 /*16*/] = { func_292(1, sVar0) };
        }
        if (iParam3 > 0)
        {
            func_289(iParam3, &(Global_2589A8[0 /*16*/]), -1, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam13, 255, 0, 0, 0, 0, 1, -1);
        }
    }
    if (Global_2589A2[1] != func_96())
    {
        if (iVar1 == 1)
        {
            sVar0 = unk_0xA09A99AC02B24954(Global_2589A2[1]);
            Global_2589A8[1 /*16*/] = { func_292(2, sVar0) };
        }
        if (iParam4 > 0)
        {
            func_289(iParam4, &(Global_2589A8[1 /*16*/]), -1, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam14, 255, 0, 0, 0, 0, 1, -1);
        }
    }
    if (Global_2589A2[2] != func_96())
    {
        if (iVar1 == 1)
        {
            sVar0 = unk_0xA09A99AC02B24954(Global_2589A2[2]);
            Global_2589A8[2 /*16*/] = { func_292(3, sVar0) };
        }
        if (iParam5 > 0)
        {
            func_289(iParam5, &(Global_2589A8[2 /*16*/]), -1, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam15, 255, 0, 0, 0, 0, 1, -1);
        }
    }
    func_288(iParam6, iParam7, "HUD_CHECKPOINTS", -1, 1, 5, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
    if (func_517(unk_0x7C7787D2D7139A85()) == 0)
    {
        func_289(iParam8, "HUD_USCORE", -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
    }
    sVar2 = "HUD_COUNTDOWN";
    if (!func_237(sParam12))
    {
        sVar2 = sParam12;
    }
    func_141(iParam9, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
    *iParam10 = 0;
    func_140();
}

void func_288(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)//Position - 0xF094
{
    int iVar0;
    int iVar1;
    
    iVar0 = -1;
    iVar1 = 0;
    while (iVar1 <= 9)
    {
        if (iVar0 == -1)
        {
            if (func_143(4, iVar1) == 0)
            {
                iVar0 = iVar1;
            }
        }
        iVar1++;
    }
    if (iVar0 > -1)
    {
        Global_14FB1E.f_1 = 1;
        func_142(4, iVar0);
        Global_14FB1E.f_C5B[iVar0] = iParam0;
        Global_14FB1E.f_C5B.f_AC[iVar0] = iParam1;
        StringCopy(&(Global_14FB1E.f_C5B.f_B[iVar0 /*16*/]), sParam2, 64);
        Global_14FB1E.f_C5B.f_B7[iVar0] = iParam3;
        Global_14FB1E.f_C5B.f_D8[iVar0] = iParam5;
        Global_14FB1E.f_C5B.f_C2[iVar0] = iParam4;
        Global_14FB1E.f_C5B.f_E3[iVar0] = iParam6;
        Global_14FB1E.f_C5B.f_10E[iVar0] = iParam7;
        Global_14FB1E.f_C5B.f_119[iVar0] = iParam8;
        Global_14FB1E.f_C5B.f_124[iVar0] = iParam9;
        Global_14FB1E.f_C5B.f_12F[iVar0] = iParam10;
        Global_14FB1E.f_C5B.f_13A[iVar0] = iParam11;
        Global_14FB1E.f_C5B.f_145[iVar0] = iParam13;
        Global_14FB1E.f_C5B.f_150[iVar0] = iParam14;
        Global_14FB1E.f_C5B.f_15B[iVar0] = iParam15;
        if (((iParam0 > 9 && iParam1 > 9) && unk_0xE434AB6E3DE89861()) && iParam12)
        {
            Global_14FB1E.f_455 = 1;
        }
    }
}

void func_289(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0xF1EE
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    iVar0 = -1;
    iVar1 = 0;
    while (iVar1 <= 9)
    {
        if (iVar0 == -1)
        {
            if (func_143(6, iVar1) == 0)
            {
                iVar0 = iVar1;
            }
        }
        iVar1++;
    }
    if (iVar0 > -1)
    {
        Global_14FB1E.f_1 = 1;
        func_142(6, iVar0);
        Global_14FB1E.f_EFB[iVar0] = iParam0;
        StringCopy(&(Global_14FB1E.f_EFB.f_B[iVar0 /*16*/]), sParam1, 64);
        Global_14FB1E.f_EFB.f_B7[iVar0] = iParam3;
        Global_14FB1E.f_EFB.f_AC[iVar0] = iParam2;
        Global_14FB1E.f_EFB.f_104[iVar0] = iParam4;
        Global_14FB1E.f_EFB.f_10F[iVar0] = iParam5;
        StringCopy(&(Global_14FB1E.f_EFB.f_11A[iVar0 /*16*/]), sParam6, 64);
        Global_14FB1E.f_EFB.f_1BB[iVar0] = iParam7;
        Global_14FB1E.f_EFB.f_1C6[iVar0] = iParam8;
        Global_14FB1E.f_EFB.f_1F1[iVar0] = iParam9;
        Global_14FB1E.f_EFB.f_1FC[iVar0] = iParam10;
        Global_14FB1E.f_EFB.f_CD[iVar0] = iParam11;
        Global_14FB1E.f_EFB.f_D8[iVar0] = iParam12;
        Global_14FB1E.f_EFB.f_E3[iVar0] = iParam13;
        Global_14FB1E.f_EFB.f_EE[iVar0] = iParam14;
        Global_14FB1E.f_EFB.f_F9[iVar0] = iParam15;
        Global_14FB1E.f_EFB.f_207[iVar0] = iParam16;
        Global_14FB1E.f_EFB.f_212[iVar0] = iParam17;
        Global_14FB1E.f_EFB.f_21D[iVar0] = iParam18;
        Global_14FB1E.f_EFB.f_228[iVar0] = iParam19;
        Global_14FB1E.f_EFB.f_233[iVar0] = iParam20;
        Global_14FB1E.f_EFB.f_23E[iVar0] = iParam21;
        Global_14FB1E.f_EFB.f_249[iVar0] = iParam22;
        Global_14FB1E.f_EFB.f_254[iVar0] = iParam23;
        Global_14FB1E.f_EFB.f_25F[iVar0] = iParam24;
        Global_14FB1E.f_EFB.f_C2[iVar0] = iParam25;
        if (iParam15 == 5 && func_291())
        {
            Global_14FB1E.f_455 = 1;
        }
        if (unk_0xE434AB6E3DE89861())
        {
            iVar2 = 0;
            unk_0x419479F67BC2C70F(&iVar3, &iVar4);
            if (iVar3 == 1280 && iVar4 >= 960)
            {
                iVar2 = 1;
            }
            if (iParam0 > 99999999)
            {
                Global_14FB1E.f_459 = 1;
            }
            else if (iParam0 > 9999999 || iVar2)
            {
                Global_14FB1E.f_458 = 1;
            }
            else if (iParam0 > 999)
            {
                Global_14FB1E.f_455 = 1;
            }
            if (func_290())
            {
                Global_14FB1E.f_459 = 1;
            }
        }
    }
}

int func_290()//Position - 0xF45F
{
    int iVar0;
    var uVar1;
    
    if (unk_0xE434AB6E3DE89861())
    {
        unk_0x419479F67BC2C70F(&iVar0, &uVar1);
        if (iVar0 <= 1024)
        {
            return 1;
        }
    }
    return 0;
}

int func_291()//Position - 0xF483
{
    if (((unk_0xB859EDA9E476E45A() == 8 || unk_0xB859EDA9E476E45A() == 9) || unk_0xB859EDA9E476E45A() == 10) || unk_0xB859EDA9E476E45A() == 12)
    {
        return 1;
    }
    return 0;
}

struct<16> func_292(int iParam0, char* sParam1)//Position - 0xF4C1
{
    struct<16> Var0;
    
    switch (iParam0)
    {
        case 0:
            StringCopy(&Var0, sParam1, 64);
            return Var0;
            break;
        
        case 1:
            StringCopy(&Var0, unk_0xD54FB72F71EFE6C4("HUD_POSFIRST"), 64);
            break;
        
        case 2:
            StringCopy(&Var0, unk_0xD54FB72F71EFE6C4("HUD_POSSECOND"), 64);
            break;
        
        case 3:
            StringCopy(&Var0, unk_0xD54FB72F71EFE6C4("HUD_POSTHIRD"), 64);
            break;
        
        case 4:
            StringCopy(&Var0, unk_0xD54FB72F71EFE6C4("HUD_POSFOURTH"), 64);
            break;
        
        case 5:
            StringCopy(&Var0, unk_0xD54FB72F71EFE6C4("HUD_POSFIFTH"), 64);
            break;
    }
    StringConCat(&Var0, " ", 64);
    StringConCat(&Var0, sParam1, 64);
    return Var0;
}

void func_293()//Position - 0xF563
{
    unk_0x0AF55029F939BA65(8);
    unk_0x0AF55029F939BA65(9);
    unk_0x0AF55029F939BA65(6);
    unk_0x0AF55029F939BA65(7);
    Global_258B80 = 1;
}

int func_294(bool bParam0)//Position - 0xF586
{
    if (func_296())
    {
        return 0;
    }
    if (func_295())
    {
        return 0;
    }
    if (!bParam0)
    {
        if (func_13(unk_0x7C7787D2D7139A85(), 1, 1) == 0)
        {
            return 0;
        }
    }
    return 1;
}

bool func_295()//Position - 0xF5BD
{
    return Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_C4 != 0;
}

bool func_296()//Position - 0xF5D4
{
    return unk_0xA2BC31158C8CEFD2(Global_240006, 12);
}

char* func_297()//Position - 0xF5E6
{
    return "HUD_COUNTDOWN";
    switch (func_299(unk_0x7C7787D2D7139A85()))
    {
        case 131:
            return "AET_HOT_TARG";
        
        case 132:
            return "AET_CHK_COLL";
        
        case 133:
            switch (func_298())
            {
                case 0:
                    return "AET_CHALL_LJ";
                
                case 1:
                    return "AET_CHALL_LS";
                
                case 2:
                    return "AET_CHALL_HS";
                
                case 3:
                    return "AET_CHALL_LST";
                
                case 4:
                    return "AET_CHALL_LW";
                
                case 5:
                    return "AET_CHALL_NC";
                
                case 6:
                    return "AET_CHALL_LP";
                
                case 7:
                    return "AET_CHALL_VS";
                
                case 8:
                    return "AET_CHALL_NM";
                
                case 9:
                    return "AET_CHALL_RD";
                
                case 10:
                    return "AET_CHALL_LF";
                
                case 11:
                    return "AET_CHALL_LFL";
                
                case 12:
                    return "AET_CHALL_LFI";
                
                case 13:
                    return "AET_CHALL_LB";
                
                case 14:
                    return "AET_CHALL_MB";
                
                case 15:
                    return "AET_CHALL_HSH";
                
                case 16:
                    return "AET_CHALL_DB";
                
                case 17:
                    return "AET_CHALL_ML";
                
                case 18:
                    return "AET_CHALL_LSN";
                
                default:
            }
            break;
        
        case 136:
            return "AET_PENNED";
        
        case 138:
            return "AET_PARCEL";
        
        case 139:
            return "AET_PROPERTY";
        
        case 140:
            return "AET_DDROP";
        
        case 141:
            return "AET_KCASTLE";
        
        case 144:
            return "AET_BLAST";
        
        case 129:
            return "AET_UWARF";
        
        case 146:
            return "AET_BEAST";
    }
    return "";
}

int func_298()//Position - 0xF790
{
    if (func_299(unk_0x7C7787D2D7139A85()) == 133)
    {
        return Global_26A0A9.f_12D3;
    }
    return -1;
}

int func_299(int iParam0)//Position - 0xF7B3
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        return Global_18DB1B[iVar0 /*614*/];
    }
    return -1;
}

void func_300(int iParam0)//Position - 0xF7D2
{
    if (IntToFloat(iParam0) < unk_0x9927BD5F023FA79D())
    {
        if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 0))
        {
            if (!unk_0x9591DE0F00127F2A(&(Global_26A0A9.f_1281)))
            {
                unk_0x530EC874503CCE08(&(Global_26A0A9.f_1281));
            }
            unk_0x597D844D285B9272(1);
            unk_0x81995F6F93D8C987("FM_COUNTDOWN_30S_FIRA");
            unk_0x8E3496DF5BF7F24D("GTAO_FM_Events_30_Sec_Countdown_Scene");
            unk_0x70431C02FF392D24("DisableFlightMusic", 0);
            unk_0x70431C02FF392D24("WantedMusicDisabled", 0);
            unk_0x70431C02FF392D24("AllowScoreAndRadio", 0);
            if (Global_26A0A9.f_1289 > -1)
            {
                unk_0x0972EA9E8102C153(Global_26A0A9.f_1289);
                Global_26A0A9.f_1289 = -1;
            }
            Global_26A0A9.f_127F = 0;
        }
    }
    else if (iParam0 < 30000)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 0))
        {
            if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 4))
            {
                if (!unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 2))
                {
                    if (unk_0xA033123384B9C948())
                    {
                        if ((!unk_0x2553916E420E8EF0(unk_0x3F8B5B092A20BEB5(unk_0x3C40E7561F9217C8()), "OFF") && unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0)) && !unk_0x9591DE0F00127F2A(&(Global_26A0A9.f_1281)))
                        {
                            StringCopy(&(Global_26A0A9.f_1281), "", 32);
                            unk_0x81995F6F93D8C987("FM_COUNTDOWN_30S_FIRA");
                            unk_0x8E3496DF5BF7F24D("GTAO_FM_Events_30_Sec_Countdown_Scene");
                            unk_0x70431C02FF392D24("DisableFlightMusic", 0);
                            unk_0x70431C02FF392D24("WantedMusicDisabled", 0);
                            unk_0x70431C02FF392D24("AllowScoreAndRadio", 0);
                            unk_0x597D844D285B9272(1);
                            unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 2);
                        }
                    }
                }
                else if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) && unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 5))
                {
                    unk_0x530EC874503CCE08("OFF");
                }
            }
            else if (!unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 1))
            {
                if (iParam0 < 10000)
                {
                    unk_0x81995F6F93D8C987("FM_COUNTDOWN_10S");
                }
                else if (iParam0 < 20000)
                {
                    unk_0x81995F6F93D8C987("FM_COUNTDOWN_20S");
                }
                else
                {
                    unk_0x81995F6F93D8C987("FM_COUNTDOWN_30S");
                }
                unk_0x7D17F1A2E0EEDBB9("GTAO_FM_Events_30_Sec_Countdown_Scene");
                unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 1);
            }
            else if (!unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 4))
            {
                if (iParam0 < 27500)
                {
                    if (unk_0xF4A14417C01DEC46() != 0)
                    {
                        if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) && !unk_0xC9AC836B1D10CB0F())
                        {
                            StringCopy(&(Global_26A0A9.f_1281), unk_0xF3539EA77B126430(), 32);
                            unk_0x530EC874503CCE08("OFF");
                        }
                        unk_0x597D844D285B9272(1);
                        unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 4);
                    }
                }
            }
            if (iParam0 < 10000)
            {
                if (!unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 3))
                {
                    Global_26A0A9.f_1289 = unk_0x04B8CCFB93858A27();
                    unk_0x9964F5BBD9415AB7(Global_26A0A9.f_1289, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
                    unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 3);
                }
            }
        }
        else if (iParam0 > 10000)
        {
            if (!unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 0))
            {
                Global_26A0A9.f_127F = 0;
                Global_26A0A9.f_1289 = -1;
                unk_0xF45B7CAEA9F06737("FM_COUNTDOWN_30S_KILL");
                unk_0x597D844D285B9272(0);
                unk_0x81995F6F93D8C987("FM_PRE_COUNTDOWN_30S");
                unk_0x70431C02FF392D24("DisableFlightMusic", 1);
                unk_0x70431C02FF392D24("WantedMusicDisabled", 1);
                unk_0x70431C02FF392D24("AllowScoreAndRadio", 1);
                unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 0);
                if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) || unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 2))
                {
                    unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 2);
                    unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 5);
                }
                else
                {
                    unk_0x3B76114EC84D5812(&(Global_26A0A9.f_127F), 5);
                    unk_0x3B76114EC84D5812(&(Global_26A0A9.f_127F), 2);
                }
            }
        }
    }
    else if (iParam0 < 40000 && iParam0 > 30000)
    {
        if (!unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 0))
        {
            Global_26A0A9.f_127F = 0;
            Global_26A0A9.f_1289 = -1;
            unk_0xF45B7CAEA9F06737("FM_COUNTDOWN_30S_KILL");
            unk_0x597D844D285B9272(0);
            unk_0x81995F6F93D8C987("FM_PRE_COUNTDOWN_30S");
            unk_0x70431C02FF392D24("DisableFlightMusic", 1);
            unk_0x70431C02FF392D24("WantedMusicDisabled", 1);
            unk_0x70431C02FF392D24("AllowScoreAndRadio", 1);
            unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 0);
            if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
            {
                unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 2);
                unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 5);
            }
            else
            {
                unk_0x3B76114EC84D5812(&(Global_26A0A9.f_127F), 2);
                unk_0x3B76114EC84D5812(&(Global_26A0A9.f_127F), 5);
            }
        }
    }
}

var func_301()//Position - 0xFBB5
{
    if (unk_0xD4B321D9096B01FC(func_302()))
    {
        return func_302();
    }
    return func_89();
}

var func_302()//Position - 0xFBD3
{
    return Global_240006.f_3;
}

void func_303()//Position - 0xFBE1
{
    int iVar0;
    struct<42> Var1;
    int iVar2;
    int iVar3;
    var uVar4;
    
    Var1 = -1;
    Var1.f_16 = -1082130432;
    Var1.f_17 = 3;
    Var1.f_27 = -1;
    Var1.f_29 = -1;
    iVar0 = 0;
    while (iVar0 < unk_0xACF7D965CEBE5714())
    {
        Local_172.f_216[iVar0 /*42*/] = { Var1 };
        Local_172.f_216[iVar0 /*42*/].f_1 = func_96();
        if (Local_151.f_2A2[iVar0] > -1)
        {
            iVar3 = unk_0x9DBE48BD26DE1888(Local_151.f_2A2[iVar0]);
            if (unk_0x2700CB8907086DF3(iVar3))
            {
                iVar2 = unk_0xD7EB9DC48246DA95(iVar3);
                if (!func_94(iVar2, 0))
                {
                    Local_172.f_216[iVar0 /*42*/] = Local_151.f_2A2[iVar0];
                    Local_172.f_216[iVar0 /*42*/].f_1 = iVar2;
                    uVar4 = Local_1518[Local_151.f_2A2[iVar0] /*5*/].f_4;
                    Local_172.f_216[iVar0 /*42*/].f_9 = uVar4;
                    Local_172.f_216[iVar0 /*42*/].f_1F = -1;
                }
            }
        }
        iVar0++;
    }
}

void func_304()//Position - 0xFCCD
{
    if (Local_150 != -1 && Local_150.f_1 != -1)
    {
        if (unk_0x21781F428055C674() != func_306() && unk_0x2700CB8907086DF3(unk_0x21781F428055C674()))
        {
            func_305(Local_150.f_1, Local_150, func_258(unk_0xD7EB9DC48246DA95(unk_0x21781F428055C674())));
            Local_150 = -1;
            Local_150.f_1 = -1;
        }
    }
}

void func_305(int iParam0, int iParam1, int iParam2)//Position - 0xFD24
{
    struct<4> Var0;
    
    Var0 = 1826420594;
    Var0.f_1 = unk_0x7C7787D2D7139A85();
    Var0.f_2 = iParam0;
    Var0.f_3 = iParam1;
    if (!iParam2 == 0)
    {
        unk_0x990C4E4B3665A4D6(1, &Var0, 4, iParam2);
    }
}

int func_306()//Position - 0xFD5C
{
    return -1;
}

void func_307()//Position - 0xFD65
{
    if (func_311(0))
    {
        if (!unk_0xA2BC31158C8CEFD2(iLocal_116, 4))
        {
            if (func_276(1))
            {
                unk_0x9964F5BBD9415AB7(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
            }
            else
            {
                unk_0x9964F5BBD9415AB7(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
            }
            unk_0xA1E7A40E1F56E511(&iLocal_116, 4);
        }
    }
    else if (unk_0xA2BC31158C8CEFD2(iLocal_116, 4))
    {
        if (func_276(1))
        {
            unk_0x9964F5BBD9415AB7(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
        }
        else
        {
            unk_0x9964F5BBD9415AB7(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
        }
        unk_0x3B76114EC84D5812(&iLocal_116, 4);
    }
}

void func_308()//Position - 0xFDE7
{
    unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_6C6), 26);
}

int func_309(int iParam0)//Position - 0xFDFC
{
    if ((unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_44.f_2, 9) && !(unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_44.f_2, 6) && unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_44.f_2, 7))) || ((unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_44.f_2, 6) && !unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_44.f_2, 7)) && !unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_44.f_2, 9)))
    {
        return 1;
    }
    return 0;
}

void func_310()//Position - 0xFE97
{
    unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_6C6), 19);
}

int func_311(int iParam0)//Position - 0xFEAC
{
    if (iParam0 >= 0)
    {
        if (Local_151.f_2A2[iParam0] == unk_0x2E40EEA43EF34BD6() && Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_4 > 0)
        {
            return 1;
        }
    }
    return 0;
}

int func_312(int iParam0)//Position - 0xFEE3
{
    int iVar0;
    
    if (iParam0 >= 0)
    {
        iVar0 = Local_151.f_2A2[iParam0];
        if (iVar0 >= 0)
        {
            if (func_313(Local_1518[iVar0 /*5*/].f_4, 0))
            {
                return 1;
            }
        }
    }
    return 0;
}

bool func_313(int iParam0, int iParam1)//Position - 0xFF19
{
    return iParam0 > iParam1;
}

bool func_314(int iParam0)//Position - 0xFF26
{
    return func_315(unk_0x0FA8183DAD2B3203(), Local_151.f_A[iParam0 /*5*/], 1) < 500f;
}

float func_315(int iParam0, vector3 vParam1, bool bParam2)//Position - 0xFF48
{
    vector3 vVar0;
    
    if (!unk_0xF4B969E0807E76C7(iParam0, 0))
    {
        vVar0 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
    }
    else
    {
        vVar0 = { unk_0xACE5E491FC1B0D37(iParam0, 0) };
    }
    return unk_0xD34AF93E9BCF12F0(vVar0, vParam1, bParam2);
}

bool func_316(int iParam0)//Position - 0xFF82
{
    return func_315(unk_0x0FA8183DAD2B3203(), Local_151.f_A[iParam0 /*5*/], 1) < 750f;
}

void func_317(int iParam0)//Position - 0xFFA4
{
    func_349(&(vLocal_134[iParam0 /*3*/]), Local_151.f_A[iParam0 /*5*/], iParam0);
    if (uLocal_117[iParam0])
    {
        func_344(Local_151.f_A[iParam0 /*5*/], iParam0);
        func_318(Local_151.f_A[iParam0 /*5*/], iParam0);
    }
}

void func_318(struct<4> Param0, var uParam1, int iParam2)//Position - 0xFFEF
{
    int iVar0;
    int iVar1;
    var uVar2;
    var uVar3;
    
    if (Param0.f_3 == unk_0x2E40EEA43EF34BD6() && !unk_0xA2BC31158C8CEFD2(uLocal_123[func_17(iParam2)], func_16(iParam2)))
    {
        Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_4++;
        if (iLocal_114 == 0)
        {
            iLocal_114 = unk_0x169A8AC9F93C2727();
        }
        iVar0 = func_342(SYSTEM::CEIL((IntToFloat(Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_4) / func_343())));
        iVar1 = func_340(SYSTEM::CEIL((IntToFloat(Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_4) / func_341())));
        iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * Global_40001.f_2CB6));
        iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * Global_40001.f_2CB7));
        if (func_34())
        {
            iVar0 = SYSTEM::ROUND((IntToFloat(iVar0) * func_339()));
            iVar1 = SYSTEM::ROUND((IntToFloat(iVar1) * func_338()));
        }
        if (func_259())
        {
            func_247(-59668082, iVar0, &uVar2, 0, 1, 0);
        }
        else
        {
            unk_0xD9E4BA7E1787178D(iVar0, "AM_CP_COLLECTION", &uVar3);
        }
        func_245();
        func_192(0, unk_0x0FA8183DAD2B3203(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
        iLocal_125 = (iLocal_125 + iVar0);
        Global_258E0F = iVar0;
        Local_1517.f_7 = (Local_1517.f_7 + iVar1);
        unk_0xA1E7A40E1F56E511(&(uLocal_123[func_17(iParam2)]), func_16(iParam2));
        if (Local_1517.f_B == 0)
        {
            Local_1517.f_B = unk_0x71EC776E812C6A0A();
        }
        func_319();
        unk_0x9964F5BBD9415AB7(-1, "Checkpoint_Cash_Hit", "GTAO_FM_Events_Soundset", 0);
    }
}

void func_319()//Position - 0x1015B
{
    if (!unk_0xA2BC31158C8CEFD2(Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_2, 2))
    {
        unk_0xA1E7A40E1F56E511(&(Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_2), 2);
        func_320(1);
    }
}

void func_320(bool bParam0)//Position - 0x1018C
{
    var uVar0;
    
    if (bParam0)
    {
        if (!unk_0xA2BC31158C8CEFD2(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1, 7))
        {
            if (((!func_100(unk_0x7C7787D2D7139A85()) && !func_6(unk_0x7C7787D2D7139A85())) && !func_517(unk_0x7C7787D2D7139A85())) && !func_337(unk_0x7C7787D2D7139A85()))
            {
                if (func_336())
                {
                    func_329(2, 0, 1);
                    func_328();
                }
                if (func_515(0))
                {
                    uVar0 = func_228(2480, -1, 0);
                    unk_0x3B76114EC84D5812(&uVar0, 0);
                    func_328();
                }
                if (func_515(func_514(func_299(unk_0x7C7787D2D7139A85()))))
                {
                    uVar0 = func_228(2480, -1, 0);
                    unk_0x3B76114EC84D5812(&uVar0, func_514(func_299(unk_0x7C7787D2D7139A85())));
                    func_328();
                }
                if (func_327())
                {
                    func_328();
                }
                if (func_299(unk_0x7C7787D2D7139A85()) > -1)
                {
                    unk_0xA1E7A40E1F56E511(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 7);
                    if (func_299(unk_0x7C7787D2D7139A85()) == 236)
                    {
                        func_326();
                    }
                    func_323(func_325(func_299(unk_0x7C7787D2D7139A85())));
                }
            }
        }
    }
    else if (unk_0xA2BC31158C8CEFD2(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1, 7))
    {
        unk_0x3B76114EC84D5812(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 7);
        func_321();
    }
}

void func_321()//Position - 0x102C1
{
    if (func_322())
    {
        unk_0x3B76114EC84D5812(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 17);
    }
}

bool func_322()//Position - 0x102E3
{
    return unk_0xA2BC31158C8CEFD2(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1, 17);
}

void func_323(int iParam0)//Position - 0x102FE
{
    int iVar0;
    
    if (Global_40001.f_217B)
    {
        return;
    }
    iVar0 = 0;
    while (iVar0 < 3)
    {
        if (Global_200000[func_324() /*10828*/].f_1818.f_FAF[iVar0 /*3*/] == iParam0)
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

int func_324()//Position - 0x10361
{
    int iVar0;
    
    iVar0 = 0;
    return iVar0;
}

int func_325(int iParam0)//Position - 0x1036E
{
    switch (iParam0)
    {
        case 236:
            return 67;
        
        case 133:
            return 69;
        
        default:
    }
    return 68;
}

void func_326()//Position - 0x10395
{
    if (!func_322())
    {
        Global_26A0A9.f_18A1 = unk_0x169A8AC9F93C2727();
        unk_0xA1E7A40E1F56E511(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 17);
    }
}

int func_327()//Position - 0x103C3
{
    if (Global_2531AD.f_483.f_5 == -1)
    {
        return 0;
    }
    return 1;
}

void func_328()//Position - 0x103DD
{
    if (func_327())
    {
        Global_2531AD.f_483.f_10 = 1;
    }
}

void func_329(int iParam0, int iParam1, bool bParam2)//Position - 0x103F6
{
    if (func_336())
    {
        if (iParam1 == 1)
        {
            if (Global_26A0A9.f_112B == -1)
            {
                Global_26A0A9.f_112B = Global_40001.f_66D9;
            }
            func_20(&(Global_26A0A9.f_1129), 0, 0);
            if (bParam2)
            {
                if (Global_26A0A9.f_112E == -1)
                {
                    Global_26A0A9.f_112E = Global_40001.f_66DA;
                }
                func_20(&(Global_26A0A9.f_112C), 0, 0);
            }
            else
            {
                Global_1406A1 = 0;
                Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_8 = 0;
                func_335(1);
            }
        }
        else
        {
            Global_1406A1 = 0;
            Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_8 = 0;
            func_335(1);
        }
        if ((!unk_0xA51CBC95AC3A4B14() && !func_334()) && !func_330(unk_0x7C7787D2D7139A85()))
        {
            Global_EC6CC = 0;
        }
        unk_0xD1BC874F2613DFA7(0, -1, -1, iParam0);
    }
}

int func_330(int iParam0)//Position - 0x104C0
{
    if (func_331(iParam0, 1, 0))
    {
        if (Global_1844AE[iParam0 /*871*/] != 6)
        {
            return 1;
        }
    }
    return 0;
}

int func_331(int iParam0, bool bParam1, bool bParam2)//Position - 0x104E5
{
    if (bParam1)
    {
        if (func_332(iParam0))
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

bool func_332(int iParam0)//Position - 0x10517
{
    return func_333(iParam0);
}

bool func_333(int iParam0)//Position - 0x10525
{
    return unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_D.f_1, 0);
}

bool func_334()//Position - 0x1053F
{
    return Global_255E41.f_2E4;
}

void func_335(bool bParam0)//Position - 0x1054E
{
    if (unk_0x393E9918BC37548A())
    {
        if (!func_336())
        {
            if (func_13(unk_0x7C7787D2D7139A85(), 1, 0))
            {
                unk_0x66882C4C10EA83B3(unk_0x0FA8183DAD2B3203(), 1);
                unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 342, false);
                unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 122, false);
            }
            unk_0xDA125B58E613D8FB(unk_0x7C7787D2D7139A85(), 1f);
            unk_0x62644D7A979A06C2(0);
            unk_0x426221D97FBAC579(1);
            if (Global_1406A1.f_1 == 0 || Global_1406A1.f_2 == 1)
            {
                Global_1406A1.f_2 = 0;
                if (bParam0)
                {
                    unk_0xD00A04276B590461(0, 0);
                }
            }
        }
        else
        {
            if (func_13(unk_0x7C7787D2D7139A85(), 1, 1))
            {
                unk_0x66882C4C10EA83B3(unk_0x0FA8183DAD2B3203(), 0);
                unk_0xE5DAA5553A176799(unk_0x0FA8183DAD2B3203(), joaat("weapon_unarmed"), true);
                unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 342, true);
                unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 122, true);
                unk_0xDA125B58E613D8FB(unk_0x7C7787D2D7139A85(), 0.5f);
                if (Global_1406A1.f_1 == 0 || Global_1406A1.f_2 == 1)
                {
                    unk_0xD00A04276B590461(1, 0);
                }
            }
            unk_0x62644D7A979A06C2(1);
            unk_0x426221D97FBAC579(0);
        }
    }
}

bool func_336()//Position - 0x10647
{
    return Global_1406A1;
}

int func_337(int iParam0)//Position - 0x10653
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

float func_338()//Position - 0x106BF
{
    return Global_40001.f_2BFB;
}

float func_339()//Position - 0x106CE
{
    return Global_40001.f_2BFA;
}

var func_340(int iParam0)//Position - 0x106DD
{
    switch (iParam0)
    {
        case 1:
            return Global_40001.f_2C06;
        
        case 2:
            return Global_40001.f_2C07;
        
        case 3:
            return Global_40001.f_2C08;
        
        case 4:
            return Global_40001.f_2C09;
        
        default:
    }
    return Global_40001.f_2C09;
}

float func_341()//Position - 0x10733
{
    return Global_40001.f_2B0A;
}

var func_342(int iParam0)//Position - 0x10742
{
    switch (iParam0)
    {
        case 1:
            return Global_40001.f_2BFC;
        
        case 2:
            return Global_40001.f_2BFD;
        
        case 3:
            return Global_40001.f_2BFE;
        
        case 4:
            return Global_40001.f_2BFF;
        
        case 5:
            return Global_40001.f_2C00;
        
        case 6:
            return Global_40001.f_2C01;
        
        case 7:
            return Global_40001.f_2C02;
        
        case 8:
            return Global_40001.f_2C03;
        
        case 9:
        case 10:
        case 11:
        case 12:
            return Global_40001.f_2C04;
        
        default:
    }
    return Global_40001.f_2C05;
}

float func_343()//Position - 0x107FA
{
    return Global_40001.f_2B09;
}

void func_344(vector3 vParam0, var uParam1, var uParam2, int iParam3)//Position - 0x10809
{
    float fVar0;
    float fVar1;
    float fVar2;
    
    if (!unk_0xA2BC31158C8CEFD2(Local_151.f_3[func_17(iParam3)], func_16(iParam3)))
    {
        if (!unk_0xA2BC31158C8CEFD2(uLocal_122[func_17(iParam3)], func_16(iParam3)))
        {
            if (func_34())
            {
                fVar0 = 6f;
                fVar1 = 6f;
                fVar2 = 4f;
            }
            else
            {
                fVar0 = 3f;
                fVar1 = 2.5f;
                fVar2 = 2.8f;
            }
            if (unk_0xC49563EAE7AACA6C(unk_0x0FA8183DAD2B3203(), vParam0 + Vector(fVar2, 0f, 0f), fVar1, fVar1, fVar0, 0, 1, 0))
            {
                if (func_345())
                {
                    iLocal_121 = unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), Local_151.f_9);
                    if (unk_0x21781F428055C674() != func_306() && unk_0x2700CB8907086DF3(unk_0x21781F428055C674()))
                    {
                        func_305(iLocal_121, iParam3, func_258(unk_0xD7EB9DC48246DA95(unk_0x21781F428055C674())));
                        Local_150 = -1;
                        Local_150.f_1 = -1;
                    }
                    else
                    {
                        Local_150 = iParam3;
                        Local_150.f_1 = iLocal_121;
                    }
                    unk_0xA1E7A40E1F56E511(&(uLocal_122[func_17(iParam3)]), func_16(iParam3));
                }
            }
        }
        else if (func_1(&uLocal_128, 250, 0))
        {
            if (unk_0x21781F428055C674() != func_306() && unk_0x2700CB8907086DF3(unk_0x21781F428055C674()))
            {
                func_305(iLocal_121, iParam3, func_258(unk_0xD7EB9DC48246DA95(unk_0x21781F428055C674())));
                Local_150.f_1 = -1;
                Local_150 = -1;
            }
            else
            {
                Local_150 = iParam3;
                Local_150.f_1 = iLocal_121;
            }
            func_37(&uLocal_128);
        }
    }
}

int func_345()//Position - 0x10959
{
    if (!func_13(unk_0x7C7787D2D7139A85(), 1, 1))
    {
        return 0;
    }
    if (func_517(unk_0x7C7787D2D7139A85()))
    {
        if (((func_336() && !func_348()) || func_347(unk_0x7C7787D2D7139A85(), 21)) || func_347(unk_0x7C7787D2D7139A85(), 25))
        {
            func_484(0);
        }
        else
        {
            func_484(7);
        }
        return 0;
    }
    if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
    {
        if (func_346(unk_0x0FA8183DAD2B3203(), 0) != -1)
        {
            return 0;
        }
    }
    if (func_94(unk_0x7C7787D2D7139A85(), 0))
    {
        return 0;
    }
    if (!func_34())
    {
        if (unk_0x2F879C0BDBED0194(unk_0x0FA8183DAD2B3203()))
        {
            func_484(1);
            return 0;
        }
    }
    return 1;
}

int func_346(int iParam0, int iParam1)//Position - 0x10A0A
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    
    if (!unk_0x2BF5E63466422C38(iParam0))
    {
        if (unk_0x5294582CE404D3F4(iParam0, iParam1))
        {
            iVar0 = unk_0x4D57D3E5ECE15A41(iParam0, iParam1);
            if (unk_0xD4B321D9096B01FC(iVar0))
            {
                iVar1 = unk_0x26BC048DC7E3F551(unk_0x7F375072508F738F(iVar0));
                if (iVar1 == 1)
                {
                    iVar3 = -1;
                    return iVar3;
                }
                iVar2 = 0;
                while (iVar2 < iVar1)
                {
                    iVar3 = (iVar2 - 1);
                    if (!unk_0xBAA38708D7439CA7(iVar0, iVar3, 0))
                    {
                        if (unk_0x300C62F79A4441EB(iVar0, iVar3, 0) == iParam0)
                        {
                            return iVar3;
                        }
                    }
                    iVar2++;
                }
            }
        }
    }
    return iVar3;
}

bool func_347(int iParam0, int iParam1)//Position - 0x10A8F
{
    return unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_D0, iParam1);
}

bool func_348()//Position - 0x10AA8
{
    return Global_1406A1.f_1;
}

void func_349(int iParam0, vector3 vParam1, var uParam2, var uParam3, int iParam4)//Position - 0x10AB6
{
    vector3 vVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    var uVar4;
    int iVar5;
    
    vVar0 = { vParam1 };
    unk_0xE0A2E1F5E75D9DF8(12, &iVar1, &iVar2, &iVar3, &uVar4);
    if (!unk_0xA2BC31158C8CEFD2(uLocal_122[func_17(iParam4)], func_16(iParam4)) && !unk_0xA2BC31158C8CEFD2(Local_151.f_3[func_17(iParam4)], func_16(iParam4)))
    {
        if (!unk_0x39A01A052D9B5FF0(*iParam0))
        {
            if (!func_416(vVar0, 0f, 0f, 0f, 0) && !func_416(vVar0, 0f, 0f, -2000f, 0))
            {
                *iParam0 = unk_0xACAD99314B51277E(vVar0);
                unk_0xD1773DD05FE2AB54(*iParam0, 431);
                unk_0x6089156CDC87FE4B(*iParam0, 9);
                unk_0x058B6969CEED705F(*iParam0, "CPC_BLIP");
                func_356(*iParam0, 25, 1152319488, 1137180672);
                func_354(iParam0, 12);
                unk_0x73DF1B751952DA65(*iParam0, 1);
            }
        }
        else if (unk_0xCD97B9861557C025())
        {
            unk_0x9C47809EE2CC69F5(*iParam0, 255);
        }
        else
        {
            func_356(*iParam0, 25, 1152319488, 1137180672);
        }
        if (uLocal_118[iParam4])
        {
            if (!unk_0xA2BC31158C8CEFD2(iLocal_124[func_17(iParam4)], func_16(iParam4)))
            {
                iVar5 = 52;
                if (func_34())
                {
                    iParam0->f_1 = unk_0xCAD49063D4833510(iVar5, vVar0 + Vector(4f, 0f, 0f), vVar0, 10f, iVar1, iVar2, iVar3, iParam0->f_2, 0);
                    unk_0xC5846F42159E130E(iParam0->f_1, 7.5f, 7.5f, 100f);
                }
                else
                {
                    iParam0->f_1 = unk_0xCAD49063D4833510(iVar5, vVar0 + Vector(2.8f, 0f, 0f), vVar0, 5f, iVar1, iVar2, iVar3, iParam0->f_2, 0);
                    unk_0xC5846F42159E130E(iParam0->f_1, 5f, 5f, 100f);
                }
                unk_0xA1E7A40E1F56E511(&(iLocal_124[func_17(iParam4)]), func_16(iParam4));
            }
            else
            {
                func_353(&(iParam0->f_1), &(iParam0->f_2));
            }
            func_352(&vParam1);
        }
        else if (unk_0xA2BC31158C8CEFD2(iLocal_124[func_17(iParam4)], func_16(iParam4)))
        {
            if (func_351(&(iParam0->f_1), &(iParam0->f_2)))
            {
                unk_0xD0D7EA2E45FB6395(iParam0->f_1);
                unk_0x3B76114EC84D5812(&(iLocal_124[func_17(iParam4)]), func_16(iParam4));
            }
        }
    }
    else if (unk_0xA2BC31158C8CEFD2(iLocal_124[func_17(iParam4)], func_16(iParam4)))
    {
        func_350(&(iParam0->f_1), &(iParam0->f_2), iParam0, iParam4);
    }
    else if (unk_0x39A01A052D9B5FF0(*iParam0))
    {
        unk_0xAA2276003B2ADF1B(iParam0);
    }
}

void func_350(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x10D02
{
    int iVar0;
    int iVar1;
    int iVar2;
    var uVar3;
    
    if (*uParam0 != 0)
    {
        *uParam1 = (*uParam1 - 25);
        if (*uParam1 > 0)
        {
            unk_0xE0A2E1F5E75D9DF8(1, &iVar0, &iVar1, &iVar2, &uVar3);
            unk_0x481B032B84B061A4(*uParam0, iVar0, iVar1, iVar2, *uParam1);
            unk_0xEED737C37148283B(*uParam0, iVar0, iVar1, iVar2, *uParam1);
        }
        else
        {
            if (unk_0x39A01A052D9B5FF0(*iParam2))
            {
                unk_0xAA2276003B2ADF1B(iParam2);
            }
            unk_0xD0D7EA2E45FB6395(*uParam0);
            *uParam0 = 0;
            unk_0x3B76114EC84D5812(&(iLocal_124[func_17(iParam3)]), func_16(iParam3));
        }
    }
}

int func_351(var uParam0, var uParam1)//Position - 0x10D84
{
    int iVar0;
    int iVar1;
    int iVar2;
    var uVar3;
    
    *uParam1 = (*uParam1 - 10);
    if (*uParam1 > 0)
    {
        unk_0xE0A2E1F5E75D9DF8(12, &iVar0, &iVar1, &iVar2, &uVar3);
        unk_0x481B032B84B061A4(*uParam0, iVar0, iVar1, iVar2, *uParam1);
        unk_0xEED737C37148283B(*uParam0, iVar0, iVar1, iVar2, *uParam1);
        return 0;
    }
    else
    {
        return 1;
    }
    return 1;
}

void func_352(var uParam0)//Position - 0x10DD6
{
    int iVar0;
    int iVar1;
    int iVar2;
    float fVar3;
    float fVar4;
    float fVar5;
    
    iVar0 = 239;
    iVar1 = 250;
    iVar2 = 187;
    fVar3 = 5f;
    fVar5 = 64f;
    if (func_34())
    {
        fVar4 = 40f;
    }
    else
    {
        fVar4 = 15f;
    }
    if (!func_131(*uParam0))
    {
        *uParam0 = { *uParam0 + Vector(1.7f, 1.7f, 1.7f) };
        unk_0x0DE235B77DBEA5EA(*uParam0, iVar0, iVar1, iVar2, fVar4, fVar3, fVar5);
    }
}

int func_353(var uParam0, var uParam1)//Position - 0x10E3B
{
    int iVar0;
    int iVar1;
    int iVar2;
    var uVar3;
    
    if (*uParam1 < 175)
    {
        *uParam1 += 10;
        unk_0xE0A2E1F5E75D9DF8(12, &iVar0, &iVar1, &iVar2, &uVar3);
        unk_0x481B032B84B061A4(*uParam0, iVar0, iVar1, iVar2, *uParam1);
        unk_0xEED737C37148283B(*uParam0, iVar0, iVar1, iVar2, *uParam1);
        return 0;
    }
    else
    {
        return 1;
    }
    return 1;
}

void func_354(var uParam0, int iParam1)//Position - 0x10E8D
{
    int iVar0;
    
    if (unk_0x39A01A052D9B5FF0(*uParam0))
    {
        iVar0 = func_355(iParam1);
        unk_0x088577CF98F96D05(*uParam0, iVar0);
    }
}

int func_355(int iParam0)//Position - 0x10EB3
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

void func_356(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x1111B
{
    unk_0x9C47809EE2CC69F5(iParam0, func_357(iParam0, iParam1, fParam2, fParam3));
}

int func_357(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x11135
{
    float fVar0;
    
    if (!func_309(Global_2531AD) && !func_73())
    {
        fVar0 = func_361(iParam0, fParam3, fParam2);
        if (iParam1 == 0)
        {
            iParam1 = func_358();
        }
        return (SYSTEM::ROUND((SYSTEM::TO_FLOAT((255 - iParam1)) * fVar0)) + iParam1);
    }
    return 255;
}

int func_358()//Position - 0x11183
{
    if (func_359(Global_2531AD, 1))
    {
        return 50;
    }
    return 0;
}

bool func_359(int iParam0, bool bParam1)//Position - 0x1119D
{
    if (Global_1406C0 != 0)
    {
        return func_360(iParam0) != 0;
    }
    return func_331(iParam0, bParam1, 0);
}

int func_360(int iParam0)//Position - 0x111C4
{
    if (func_13(iParam0, 0, 1))
    {
        return Global_24FD09[iParam0 /*421*/].f_1;
    }
    return 0;
}

float func_361(int iParam0, float fParam1, float fParam2)//Position - 0x111E6
{
    int iVar0;
    float fVar1;
    vector3 vVar2;
    vector3 vVar3;
    
    iVar0 = Global_2531AD;
    vVar2 = { func_415(iParam0) };
    vVar2.z = 0f;
    if (Global_1420C3 || func_411())
    {
        if (func_410(iVar0))
        {
            vVar3 = { func_364(iVar0) };
        }
        else if (func_363(iVar0))
        {
            vVar3 = { func_362(iVar0) };
        }
    }
    else
    {
        vVar3 = { unk_0xACE5E491FC1B0D37(unk_0x23625FE58BACEBFD(iVar0), 0) };
    }
    vVar3.z = 0f;
    fVar1 = SYSTEM::VMAG(vVar3 - vVar2);
    if (fVar1 < fParam1)
    {
        fVar1 = fParam1;
    }
    if (fVar1 > fParam2)
    {
        fVar1 = fParam2;
    }
    fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
    fVar1 = (fVar1 - 1f);
    fVar1 = (fVar1 * -1f);
    return fVar1;
}

Vector3 func_362(int iParam0)//Position - 0x11296
{
    int iVar0;
    
    if (func_363(iParam0))
    {
        iVar0 = unk_0x23625FE58BACEBFD(iParam0);
        if (unk_0xD4B321D9096B01FC(iVar0))
        {
            return unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0);
        }
    }
    return 0f, 0f, 0f;
}

int func_363(int iParam0)//Position - 0x112CA
{
    int iVar0;
    
    if (iParam0 != func_96())
    {
        if (func_13(iParam0, 1, 1))
        {
            iVar0 = unk_0x23625FE58BACEBFD(iParam0);
            if (unk_0xD4B321D9096B01FC(iVar0))
            {
                if (unk_0xC49563EAE7AACA6C(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, 0, 1, 0))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

Vector3 func_364(int iParam0)//Position - 0x11326
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
    
    if (iParam0 == func_96())
    {
    }
    if (func_409(iParam0))
    {
        iVar0 = func_408(iParam0);
        if (iVar0 != func_96())
        {
            if (!func_407(iVar0))
            {
                if (unk_0xD4B321D9096B01FC(Global_2531AD.f_294[iVar0 /*3*/][1]))
                {
                    return unk_0xACE5E491FC1B0D37(Global_2531AD.f_294[iVar0 /*3*/][1], 0);
                }
                else
                {
                    return Global_24FD09[func_408(iParam0) /*421*/].f_135.f_9;
                }
            }
            else
            {
                iVar1 = func_403(iVar0);
                if (!iVar1 == -1)
                {
                    return Global_19964F.f_1C9[iVar1 /*3*/];
                }
            }
        }
    }
    else if (func_402(iParam0))
    {
        if (unk_0xD4B321D9096B01FC(Global_26A0A9.f_131))
        {
            return unk_0xACE5E491FC1B0D37(Global_26A0A9.f_131, 0);
        }
    }
    else if (func_401(iParam0) && !func_400(iParam0))
    {
        iVar2 = Global_24FD09[iParam0 /*421*/].f_135.f_8;
        if (iVar2 != func_96())
        {
            iVar3 = func_403(iVar2);
            if (!iVar3 == -1)
            {
                return Global_19964F.f_1C9[iVar3 /*3*/];
            }
        }
    }
    else if (func_399(iParam0) && !func_398(iParam0))
    {
        if (func_410(iParam0) && func_397())
        {
            return Global_19964F.f_1C9[Global_24FD09[iParam0 /*421*/].f_135.f_5 /*3*/];
        }
        iVar4 = Global_24FD09[iParam0 /*421*/].f_135.f_8;
        if (iVar4 != func_96())
        {
            if (func_396(iVar4))
            {
                iVar5 = func_392(iVar4);
                if (iVar5 != -1)
                {
                    return Global_19964F.f_1C9[iVar5 /*3*/];
                }
            }
        }
    }
    else if (func_391(iParam0))
    {
        iVar6 = func_390(iParam0);
        if (iVar6 != func_96())
        {
            if (!func_389(iVar6))
            {
                if (unk_0xD4B321D9096B01FC(Global_2531AD.f_2F5[iVar6]))
                {
                    return unk_0xACE5E491FC1B0D37(Global_2531AD.f_2F5[iVar6], 0);
                }
                else
                {
                    return Global_24FD09[func_390(iParam0) /*421*/].f_135.f_10;
                }
            }
            else
            {
                iVar7 = func_392(iVar6);
                if (!iVar7 == -1)
                {
                    return Global_19964F.f_1C9[iVar7 /*3*/];
                }
            }
        }
    }
    else if (func_388(iParam0))
    {
        if (unk_0xD4B321D9096B01FC(Global_26A0A9.f_133))
        {
            return unk_0xACE5E491FC1B0D37(Global_26A0A9.f_133, 0);
        }
    }
    else if (func_387(iParam0) && !func_386(iParam0))
    {
        iVar8 = Global_24FD09[iParam0 /*421*/].f_135.f_8;
        if (iVar8 != func_96())
        {
            if (func_385(iVar8))
            {
                iVar9 = func_381(iVar8);
                if (iVar9 != -1)
                {
                    return func_380(iVar9);
                }
            }
        }
    }
    else if (func_379(iParam0) && !func_378(iParam0))
    {
        iVar10 = Global_24FD09[iParam0 /*421*/].f_135.f_8;
        if (iVar10 != func_96())
        {
            if (func_377(iVar10))
            {
                iVar11 = func_373(iVar10);
                if (iVar11 != -1)
                {
                    return Global_19964F.f_1C9[iVar11 /*3*/];
                }
            }
        }
    }
    else if (func_372(iParam0, 0))
    {
        iVar12 = func_371(iParam0);
        if (iVar12 != func_96())
        {
            if (!func_370(iVar12))
            {
                if (unk_0xD4B321D9096B01FC(Global_2531AD.f_316[iVar12]))
                {
                    return unk_0xACE5E491FC1B0D37(Global_2531AD.f_316[iVar12], 0);
                }
                else
                {
                    return Global_18DB1B[func_371(iParam0) /*614*/].f_257;
                }
            }
            else
            {
                iVar13 = func_373(iVar12);
                if (!iVar13 == -1)
                {
                    return Global_19964F.f_1C9[iVar13 /*3*/];
                }
            }
        }
    }
    else if (func_369(iParam0))
    {
        return -366.7f, -1909.6f, 20f;
    }
    if (func_387(iParam0))
    {
        return func_380(Global_24FD09[iParam0 /*421*/].f_135.f_5);
    }
    if (func_365(iParam0))
    {
        return 965.8165f, 42.25042f, 122.1267f;
    }
    return Global_19964F.f_1C9[Global_24FD09[iParam0 /*421*/].f_135.f_5 /*3*/];
}

int func_365(int iParam0)//Position - 0x11734
{
    if ((func_368(iParam0) || func_367(iParam0)) || func_366(iParam0))
    {
        return 1;
    }
    return 0;
}

int func_366(int iParam0)//Position - 0x11762
{
    if (iParam0 != func_96())
    {
        if (func_13(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_170(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 15;
            }
        }
    }
    return 0;
}

int func_367(int iParam0)//Position - 0x117A9
{
    if (iParam0 != func_96())
    {
        if (func_13(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_170(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 16;
            }
        }
    }
    return 0;
}

int func_368(int iParam0)//Position - 0x117F0
{
    if (iParam0 != func_96())
    {
        if (func_13(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_170(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 14;
            }
        }
    }
    return 0;
}

int func_369(int iParam0)//Position - 0x11837
{
    if (iParam0 != func_96())
    {
        if (func_13(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_170(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 13;
            }
        }
    }
    return 0;
}

int func_370(int iParam0)//Position - 0x1187E
{
    if (iParam0 != func_96())
    {
        return unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_135.f_3, 4);
    }
    return 0;
}

int func_371(int iParam0)//Position - 0x118A6
{
    if (iParam0 == func_96())
    {
        return iParam0;
    }
    return Global_24FD09[iParam0 /*421*/].f_135.f_8;
}

int func_372(int iParam0, bool bParam1)//Position - 0x118CA
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
    if (iParam0 != func_96())
    {
        if (func_13(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1 && Global_24FD09[iParam0 /*421*/].f_135.f_8 != func_96())
            {
                return func_170(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 12;
            }
        }
    }
    return 0;
}

int func_373(int iParam0)//Position - 0x11958
{
    int iVar0;
    
    if (iParam0 != func_96())
    {
        iVar0 = func_376(iParam0);
        if (iVar0 != 0)
        {
            return func_374(iVar0);
        }
    }
    return -1;
}

int func_374(int iParam0)//Position - 0x11981
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 136)
    {
        if (func_170(iVar0) == 11)
        {
            if (func_375(iVar0) == iParam0)
            {
                return iVar0;
            }
        }
        iVar0++;
    }
    return -1;
}

int func_375(int iParam0)//Position - 0x119B8
{
    switch (iParam0)
    {
        case 102:
            return 1;
        
        case 103:
            return 2;
        
        case 104:
            return 3;
        
        case 105:
            return 4;
        
        case 106:
            return 5;
        
        case 107:
            return 6;
        
        case 108:
            return 7;
        
        case 109:
            return 8;
        
        case 110:
            return 9;
        
        case 111:
            return 10;
        
        default:
    }
    return 0;
}

int func_376(int iParam0)//Position - 0x11A2F
{
    if (iParam0 != func_96())
    {
        return Global_1844AE[iParam0 /*871*/].f_111.f_115;
    }
    return 0;
}

int func_377(int iParam0)//Position - 0x11A53
{
    if (iParam0 != func_96())
    {
        if (Global_1844AE[iParam0 /*871*/].f_111.f_115 != 0)
        {
            return 1;
        }
    }
    return 0;
}

int func_378(int iParam0)//Position - 0x11A7C
{
    if (iParam0 != func_96())
    {
        if (func_379(iParam0) && Global_24FD09[iParam0 /*421*/].f_135.f_8 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

int func_379(int iParam0)//Position - 0x11AB1
{
    if (iParam0 != func_96())
    {
        if (func_13(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_170(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 11;
            }
        }
    }
    return 0;
}

Vector3 func_380(int iParam0)//Position - 0x11AF8
{
    switch (iParam0)
    {
        case 102:
            return 750.5f, -1322.3f, 26.2802f;
        
        case 103:
            return 331.9f, -974.9f, 30f;
        
        case 104:
            return -146f, -1270f, 28.3088f;
        
        case 105:
            return -17.7f, 225.7f, 106.7566f;
        
        case 106:
            return 894.4f, -2106.4f, 29.4768f;
        
        case 107:
            return -668f, -2431.5f, 12.9444f;
        
        case 108:
            return 213.4f, -3166.6f, 4.7903f;
        
        case 109:
            return 366.6f, 237.6f, 104.9f;
        
        case 110:
            return -1275.3f, -666.8f, 25.6332f;
        
        case 111:
            return -1188.8f, -1156.9f, 4.6582f;
        
        default:
    }
    return Global_19964F.f_1C9[iParam0 /*3*/];
}

int func_381(int iParam0)//Position - 0x11C04
{
    int iVar0;
    
    if (iParam0 != func_96())
    {
        iVar0 = func_384(iParam0);
        if (iVar0 != 0)
        {
            return func_382(iVar0);
        }
    }
    return -1;
}

int func_382(int iParam0)//Position - 0x11C2D
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 136)
    {
        if (func_170(iVar0) == 11)
        {
            if (func_383(iVar0) == iParam0)
            {
                return iVar0;
            }
        }
        iVar0++;
    }
    return -1;
}

int func_383(int iParam0)//Position - 0x11C64
{
    switch (iParam0)
    {
        case 102:
            return 1;
        
        case 103:
            return 2;
        
        case 104:
            return 3;
        
        case 105:
            return 4;
        
        case 106:
            return 5;
        
        case 107:
            return 6;
        
        case 108:
            return 7;
        
        case 109:
            return 8;
        
        case 110:
            return 9;
        
        case 111:
            return 10;
        
        default:
    }
    return 0;
}

int func_384(int iParam0)//Position - 0x11CDB
{
    if (iParam0 != func_96())
    {
        return Global_1844AE[iParam0 /*871*/].f_111.f_13E;
    }
    return 0;
}

int func_385(int iParam0)//Position - 0x11CFF
{
    if (iParam0 != func_96())
    {
        return Global_1844AE[iParam0 /*871*/].f_111.f_13E != 0;
    }
    return 0;
}

int func_386(int iParam0)//Position - 0x11D25
{
    if (iParam0 != func_96())
    {
        if (func_387(iParam0) && Global_24FD09[iParam0 /*421*/].f_135.f_8 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

int func_387(int iParam0)//Position - 0x11D5A
{
    if (iParam0 != func_96())
    {
        if (func_13(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_170(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 11;
            }
        }
    }
    return 0;
}

int func_388(int iParam0)//Position - 0x11DA1
{
    if (iParam0 != func_96())
    {
        if (func_13(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_170(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 10;
            }
        }
    }
    return 0;
}

int func_389(int iParam0)//Position - 0x11DE8
{
    if (iParam0 != func_96())
    {
        return unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_135.f_2, 6);
    }
    return 0;
}

int func_390(int iParam0)//Position - 0x11E10
{
    if (iParam0 == func_96())
    {
        return iParam0;
    }
    return Global_24FD09[iParam0 /*421*/].f_135.f_8;
}

int func_391(int iParam0)//Position - 0x11E34
{
    if (iParam0 != func_96())
    {
        if (func_13(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1 && Global_24FD09[iParam0 /*421*/].f_135.f_8 != func_96())
            {
                return func_170(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 8;
            }
        }
    }
    return 0;
}

int func_392(int iParam0)//Position - 0x11E94
{
    int iVar0;
    
    if (iParam0 == func_96())
    {
        return -1;
    }
    iVar0 = func_395(iParam0);
    if (!iVar0 == 0)
    {
        return func_393(iVar0);
    }
    return -1;
}

int func_393(int iParam0)//Position - 0x11EC3
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 136)
    {
        if (func_170(iVar0) == 9)
        {
            if (func_394(iVar0) == iParam0)
            {
                return iVar0;
            }
        }
        iVar0++;
    }
    return -1;
}

int func_394(int iParam0)//Position - 0x11EFA
{
    switch (iParam0)
    {
        case 89:
            return 1;
            break;
        
        case 90:
            return 2;
            break;
        
        case 91:
            return 3;
            break;
        
        case 92:
            return 4;
            break;
        
        case 93:
            return 5;
            break;
        
        case 94:
            return 6;
            break;
        
        case 95:
            return 7;
            break;
        
        case 96:
            return 8;
            break;
        
        case 97:
            return 9;
            break;
    }
    return 0;
}

int func_395(int iParam0)//Position - 0x11F81
{
    if (iParam0 == func_96())
    {
        return 0;
    }
    return Global_1844AE[iParam0 /*871*/].f_111.f_10B;
}

int func_396(int iParam0)//Position - 0x11FA5
{
    if (iParam0 != func_96())
    {
        return Global_1844AE[iParam0 /*871*/].f_111.f_10B != 0;
    }
    return 0;
}

int func_397()//Position - 0x11FCB
{
    if (unk_0xA2BC31158C8CEFD2(Global_19964F.f_2, 13) || Global_19964F.f_AFE)
    {
        return 1;
    }
    return 0;
}

int func_398(int iParam0)//Position - 0x11FF4
{
    if (iParam0 == func_96())
    {
        return 0;
    }
    if (func_399(iParam0) && Global_24FD09[iParam0 /*421*/].f_135.f_8 == iParam0)
    {
        return 1;
    }
    return 0;
}

int func_399(int iParam0)//Position - 0x1202D
{
    if (iParam0 != func_96())
    {
        if (func_13(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_170(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 9;
            }
        }
    }
    return 0;
}

int func_400(int iParam0)//Position - 0x12074
{
    if (iParam0 == func_96())
    {
        return 0;
    }
    if (func_401(iParam0) && Global_24FD09[iParam0 /*421*/].f_135.f_8 == iParam0)
    {
        return 1;
    }
    return 0;
}

int func_401(int iParam0)//Position - 0x120AD
{
    if (iParam0 != func_96())
    {
        if (func_13(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_170(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 4;
            }
        }
    }
    return 0;
}

int func_402(int iParam0)//Position - 0x120F3
{
    if (iParam0 != func_96())
    {
        if (func_13(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_170(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 6;
            }
        }
    }
    return 0;
}

int func_403(int iParam0)//Position - 0x12139
{
    int iVar0;
    
    if (iParam0 == func_96())
    {
        return -1;
    }
    iVar0 = func_406(iParam0);
    if (!iVar0 == 0)
    {
        return func_404(iVar0);
    }
    return -1;
}

int func_404(int iParam0)//Position - 0x12168
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 136)
    {
        if (func_405(iVar0) == iParam0)
        {
            return iVar0;
        }
        iVar0++;
    }
    return -1;
}

int func_405(int iParam0)//Position - 0x12194
{
    switch (iParam0)
    {
        case 22:
            return 1;
            break;
        
        case 23:
            return 2;
            break;
        
        case 24:
            return 3;
            break;
        
        case 25:
            return 4;
            break;
        
        case 26:
            return 5;
            break;
        
        case 27:
            return 6;
            break;
        
        case 28:
            return 7;
            break;
        
        case 29:
            return 8;
            break;
        
        case 30:
            return 9;
            break;
        
        case 31:
            return 10;
            break;
        
        case 32:
            return 11;
            break;
        
        case 33:
            return 12;
            break;
        
        case 34:
            return 13;
            break;
        
        case 35:
            return 14;
            break;
        
        case 36:
            return 15;
            break;
        
        case 37:
            return 16;
            break;
        
        case 38:
            return 17;
            break;
        
        case 39:
            return 18;
            break;
        
        case 40:
            return 19;
            break;
        
        case 41:
            return 20;
            break;
        
        case 70:
            return 21;
            break;
        
        case 71:
            return 22;
            break;
        
        case 72:
            return 23;
            break;
        
        case 73:
            return 24;
            break;
        
        case 74:
            return 25;
            break;
        
        case 75:
            return 26;
            break;
        
        case 76:
            return 27;
            break;
        
        case 77:
            return 28;
            break;
        
        case 78:
            return 29;
            break;
        
        case 79:
            return 30;
            break;
        
        case 80:
            return 31;
            break;
    }
    return 0;
}

int func_406(int iParam0)//Position - 0x1234F
{
    if (iParam0 == func_96())
    {
        return 0;
    }
    return Global_1844AE[iParam0 /*871*/].f_111.f_B3[5 /*12*/];
}

int func_407(int iParam0)//Position - 0x12375
{
    if (iParam0 != func_96())
    {
        return unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_135, 6);
    }
    return 0;
}

int func_408(int iParam0)//Position - 0x1239B
{
    if (iParam0 == func_96())
    {
        return iParam0;
    }
    return Global_24FD09[iParam0 /*421*/].f_135.f_8;
}

int func_409(int iParam0)//Position - 0x123BF
{
    if (iParam0 != func_96())
    {
        if (func_13(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1 && Global_24FD09[iParam0 /*421*/].f_135.f_8 != func_96())
            {
                return func_170(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 5;
            }
        }
    }
    return 0;
}

int func_410(int iParam0)//Position - 0x1241E
{
    if (iParam0 != func_96())
    {
        if (func_13(iParam0, 1, 1))
        {
            return Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1;
        }
        else if ((Global_140869 && iParam0 == unk_0x7C7787D2D7139A85()) && func_13(iParam0, 1, 0))
        {
            return Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1;
        }
    }
    return 0;
}

int func_411()//Position - 0x12484
{
    if ((func_414() || func_413()) || func_412(unk_0x7C7787D2D7139A85()))
    {
        return 1;
    }
    return 0;
}

bool func_412(int iParam0)//Position - 0x124B0
{
    if (iParam0 == func_96())
    {
        return 0;
    }
    return unk_0xA2BC31158C8CEFD2(Global_18D65A[iParam0 /*38*/].f_1D, 20);
}

bool func_413()//Position - 0x124D5
{
    return unk_0xA2BC31158C8CEFD2(Global_19C147, 1);
}

bool func_414()//Position - 0x124E6
{
    return unk_0xA2BC31158C8CEFD2(Global_19C148, 5);
}

Vector3 func_415(int iParam0)//Position - 0x124F7
{
    int iVar0;
    
    switch (unk_0x76E52B9D61EA86DC(iParam0))
    {
        case 1:
        case 2:
        case 3:
            iVar0 = unk_0x38FCF58E261BE1CC(iParam0);
            if (unk_0xD4B321D9096B01FC(iVar0))
            {
                return unk_0xACE5E491FC1B0D37(iVar0, 0);
            }
            break;
    }
    return unk_0xE3063EF8E0D6C8AD(iParam0);
}

bool func_416(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x12540
{
    if (bParam2)
    {
        return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
    }
    return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_417()//Position - 0x12587
{
    if (func_309(unk_0x7C7787D2D7139A85()))
    {
        if (!unk_0xA2BC31158C8CEFD2(iLocal_116, 2))
        {
            unk_0xA1E7A40E1F56E511(&iLocal_116, 2);
            return 1;
        }
    }
    else if (unk_0xA2BC31158C8CEFD2(iLocal_116, 2))
    {
        unk_0x3B76114EC84D5812(&iLocal_116, 2);
        return 1;
    }
    return 0;
}

int func_418(vector3 vParam0, float fParam1, int iParam2)//Position - 0x125C9
{
    int iVar0;
    
    iVar0 = -1;
    if (func_432() < 10)
    {
        iVar0 = func_431();
        func_419(vParam0, fParam1, iVar0, iParam2);
    }
    return iVar0;
}

void func_419(vector3 vParam0, var uParam1, int iParam2, var uParam3)//Position - 0x125F6
{
    func_420(vParam0, 0f, 0f, 0f, uParam1, 0, iParam2, uParam3);
}

void func_420(vector3 vParam0, vector3 vParam1, var uParam2, int iParam3, int iParam4, var uParam5)//Position - 0x12610
{
    struct<12> Var0;
    
    if (func_428(unk_0x7C7787D2D7139A85()) || uParam5)
    {
        if (Var0.f_A == 1)
        {
            func_427(&vParam0, &vParam1);
        }
        Var0 = { vParam0 };
        Var0.f_3 = { vParam1 };
        Var0.f_6 = uParam2;
        Var0.f_A = iParam3;
        if (func_422(Var0))
        {
            Global_24B2CF.f_2D.f_40 = func_360(unk_0x7C7787D2D7139A85());
            func_421(Var0, iParam4);
        }
    }
}

void func_421(struct<12> Param0, int iParam1)//Position - 0x12686
{
    Global_24B2CF.f_16B[iParam1 /*12*/] = { Param0 };
    Global_24B2CF.f_16B[iParam1 /*12*/].f_9 = 1;
}

int func_422(struct<12> Param0)//Position - 0x126AF
{
    struct<12> Var0[1];
    int iVar1;
    
    Var0[0 /*12*/] = { Param0 };
    Var0[0 /*12*/].f_9 = 1;
    iVar1 = 0;
    while (iVar1 < 4)
    {
        if (Global_24B2CF.f_2D[iVar1 /*12*/].f_9 == 1)
        {
            if (!func_423(Global_24B2CF.f_2D[iVar1 /*12*/], &Var0))
            {
                return 0;
            }
        }
        iVar1++;
    }
    return 1;
}

int func_423(vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)//Position - 0x1270F
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < *uParam10)
    {
        if ((uParam10[iVar0 /*12*/])->f_9)
        {
            switch ((uParam10[iVar0 /*12*/])->f_A)
            {
                case 0:
                    switch (vParam0.f_A)
                    {
                        case 0:
                            if (func_426(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
                            {
                                return 0;
                            }
                            break;
                        
                        case 1:
                            if (func_424(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
                            {
                                return 0;
                            }
                            break;
                        
                        case 2:
                            break;
                    }
                    break;
                
                case 1:
                    switch (vParam0.f_A)
                    {
                        case 0:
                            if (func_426(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
                            {
                                return 0;
                            }
                            break;
                        
                        case 1:
                            if (func_424(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
                            {
                                return 0;
                            }
                            break;
                        
                        case 2:
                            break;
                    }
                    break;
                
                case 2:
                    break;
                }
        }
        iVar0++;
    }
    if (SYSTEM::VMAG(vParam0) == 0f)
    {
        return 0;
    }
    return 1;
}

bool func_424(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x12848
{
    vector3 vVar0;
    vector3 vVar1;
    float fVar2;
    
    fVar2 = (fParam3 * 0.7071068f);
    vVar0 = { vParam2 - Vector(fVar2, fVar2, fVar2) };
    vVar1 = { vParam2 + Vector(fVar2, fVar2, fVar2) };
    return func_425(vParam0, vParam1, vVar0, vVar1);
}

int func_425(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)//Position - 0x1288C
{
    if (((((vParam0.x >= vParam2.x && vParam0.y >= vParam2.y) && vParam0.z >= vParam2.z) && vParam1.x <= vParam3.x) && vParam1.y <= vParam3.y) && vParam1.z <= vParam3.z)
    {
        return 1;
    }
    return 0;
}

int func_426(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)//Position - 0x128E3
{
    vector3 vVar0;
    
    vVar0 = { vParam2 - vParam0 };
    if ((SYSTEM::VMAG(vVar0) + fParam1) < fParam3)
    {
        return 1;
    }
    return 0;
}

void func_427(var uParam0, var uParam1)//Position - 0x1290E
{
    vector3 vVar0;
    vector3 vVar1;
    
    if (*uParam0 <= *uParam1)
    {
        vVar0.x = *uParam0;
        vVar1.x = *uParam1;
    }
    else
    {
        vVar0.x = *uParam1;
        vVar1.x = *uParam0;
    }
    if (uParam0->f_1 <= uParam1->f_1)
    {
        vVar0.y = uParam0->f_1;
        vVar1.y = uParam1->f_1;
    }
    else
    {
        vVar0.y = uParam1->f_1;
        vVar1.y = uParam0->f_1;
    }
    if (uParam0->f_2 <= uParam1->f_2)
    {
        vVar0.z = uParam0->f_2;
        vVar1.z = uParam1->f_2;
    }
    else
    {
        vVar0.z = uParam1->f_2;
        vVar1.z = uParam0->f_2;
    }
    *uParam0 = { vVar0 };
    *uParam1 = { vVar1 };
}

int func_428(int iParam0)//Position - 0x129A5
{
    if (((func_359(iParam0, 1) || func_430(iParam0)) || func_106(iParam0, 0)) || func_429(iParam0))
    {
        return 1;
    }
    return 0;
}

int func_429(int iParam0)//Position - 0x129E1
{
    if (!func_13(iParam0, 0, 1))
    {
        return 0;
    }
    return Global_1844AE[iParam0 /*871*/].f_23;
}

int func_430(int iParam0)//Position - 0x12A04
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        return Global_18DB1B[iVar0 /*614*/] != -1;
    }
    return 0;
}

int func_431()//Position - 0x12A25
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 10)
    {
        if (!Global_24B2CF.f_16B[iVar0 /*12*/].f_9)
        {
            return iVar0;
        }
        iVar0++;
    }
    return -1;
}

int func_432()//Position - 0x12A57
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

void func_433()//Position - 0x12A8A
{
    if (!func_153())
    {
        return;
    }
    if (!unk_0xA8C462EF7D9DC564(unk_0x0037AFCBDC61F351()) == Global_140749.f_9)
    {
        return;
    }
    func_149();
}

void func_434()//Position - 0x12AB7
{
    Global_198455 = 1;
    if (!unk_0xA2BC31158C8CEFD2(Global_26C29F, 0))
    {
        unk_0xA1E7A40E1F56E511(&Global_26C29F, 0);
        unk_0xA1E7A40E1F56E511(&Global_198456, 0);
    }
    if (!unk_0xA2BC31158C8CEFD2(Global_26C29F, 1))
    {
        unk_0xA1E7A40E1F56E511(&Global_26C29F, 1);
        unk_0xA1E7A40E1F56E511(&Global_198456, 1);
    }
    if (!unk_0xA2BC31158C8CEFD2(Global_26C29F, 5))
    {
        unk_0xA1E7A40E1F56E511(&Global_26C29F, 5);
        unk_0xA1E7A40E1F56E511(&Global_198456, 5);
    }
    if (unk_0xF6C55F777DC175F4(-355737150))
    {
        unk_0xF58083E4652F7505(-355737150, 0, 0, 0);
    }
    if (unk_0xF6C55F777DC175F4(-580979506))
    {
        unk_0xF58083E4652F7505(-580979506, 0, 0, 0);
    }
    if (unk_0xF6C55F777DC175F4(-1426452475))
    {
        unk_0xF58083E4652F7505(-1426452475, 0, 0, 0);
    }
    if (unk_0xF6C55F777DC175F4(745417724))
    {
        unk_0xF58083E4652F7505(745417724, 0, 0, 0);
    }
    if (unk_0xF6C55F777DC175F4(-1305304906))
    {
        unk_0xF58083E4652F7505(-1305304906, 0, 0, 0);
    }
    if (unk_0xF6C55F777DC175F4(-1543175077))
    {
        unk_0xF58083E4652F7505(-1543175077, 0, 0, 0);
    }
    if (unk_0xF6C55F777DC175F4(-811770997))
    {
        unk_0xF58083E4652F7505(-811770997, 0, 0, 0);
    }
}

void func_435()//Position - 0x12BC9
{
    char* sVar0;
    
    if (!unk_0xA2BC31158C8CEFD2(iLocal_116, 5) && !unk_0xBCFD7D14E63DFD63())
    {
        if (Local_151.f_2C3)
        {
            sVar0 = "CPC_TITLEA";
        }
        else
        {
            sVar0 = "CPC_TITLE";
        }
        func_44(63, sVar0, "CPC_START", func_58(), -1, func_58(), 1, 0);
        unk_0x10C716954B3795A8();
        unk_0xA1E7A40E1F56E511(&iLocal_116, 5);
    }
}

void func_436(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x12C21
{
    bool bVar0;
    
    unk_0x70431C02FF392D24("DisableFlightMusic", 1);
    if (iParam0 != 133)
    {
        unk_0x70431C02FF392D24("WantedMusicDisabled", 1);
    }
    Global_26A0A9.f_1289 = -1;
    bVar0 = (func_106(unk_0x7C7787D2D7139A85(), 0) && func_102(unk_0x7C7787D2D7139A85()));
    if (bParam6)
    {
        func_454(func_455(iParam0), 1);
    }
    else
    {
        func_453(iParam0, -1);
        if (func_7(unk_0x7C7787D2D7139A85()))
        {
            Global_1806F7.f_3 = iParam0;
        }
        else
        {
            func_452(iParam0);
        }
        Global_1806F7.f_4 = -1;
        if (func_7(unk_0x7C7787D2D7139A85()))
        {
            unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 5);
        }
        if (((func_336() && !func_348()) || func_347(unk_0x7C7787D2D7139A85(), 21)) || func_347(unk_0x7C7787D2D7139A85(), 25))
        {
            unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 4);
        }
        unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 17);
        unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 20);
        if (func_451(iParam0))
        {
            func_450();
        }
    }
    if (!bVar0)
    {
        if (fParam1 != 1f)
        {
            func_446(fParam1);
        }
        if (fParam2 != 1f)
        {
            unk_0xB7F4DA52DE3AAF24(fParam2);
            if (iParam0 == 146)
            {
                unk_0x60F310C72311BCA8(0);
                unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), 0, 0);
                unk_0xF1E958D9BB4D1EF6(unk_0x7C7787D2D7139A85(), 0);
            }
        }
        if (func_444(iParam0))
        {
            unk_0x60F310C72311BCA8(0);
            unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), 0, 0);
            unk_0xF1E958D9BB4D1EF6(unk_0x7C7787D2D7139A85(), 0);
            unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 8);
        }
        if (bParam3)
        {
            if (!Global_247C05)
            {
                func_442(1);
                if (func_282(0))
                {
                    unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 9);
                }
                if (!bParam6)
                {
                    unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 14);
                }
            }
        }
        if (bParam4)
        {
            func_440(1);
            unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 12);
        }
        if (bParam5)
        {
            func_439();
            unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 12);
        }
        if (!bParam6)
        {
            if (func_437(iParam0))
            {
                unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 21);
            }
        }
    }
    Global_26432A = 1;
}

int func_437(int iParam0)//Position - 0x12E05
{
    switch (iParam0)
    {
        case 129:
        case 131:
        case 141:
        case 136:
        case 138:
        case 139:
        case 140:
        case 144:
        case 146:
        case 236:
            return 1;
        
        default:
    }
    if (func_438())
    {
        return 1;
    }
    return 0;
}

int func_438()//Position - 0x12E60
{
    switch (func_298())
    {
        case 15:
        case 16:
        case 17:
        case 18:
            return 1;
        
        default:
    }
    return 0;
}

void func_439()//Position - 0x12E8E
{
    unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_1280), 0);
}

void func_440(bool bParam0)//Position - 0x12EA2
{
    int iVar0;
    
    if (bParam0)
    {
        Global_181A1.f_8 = 1;
    }
    else
    {
        Global_181A1.f_8 = 0;
    }
    iVar0 = 0;
    while (iVar0 < 53)
    {
        func_441(iVar0);
        iVar0++;
    }
}

void func_441(int iParam0)//Position - 0x12ED9
{
    Global_181A1.f_B5[iParam0] = 1;
    Global_181A1.f_B4 = 1;
}

void func_442(int iParam0)//Position - 0x12EF3
{
    if (func_443() && iParam0)
    {
        return;
    }
    if (iParam0 == Global_247C05)
    {
        return;
    }
    Global_247C05 = iParam0;
    Global_247C07 = 0;
    Global_247C08 = 0;
}

int func_443()//Position - 0x12F28
{
    if ((((Global_EC6CD != -1 && Global_EC6CD != 33) && Global_EC6CD != 35) && Global_EC6CD != 37) && Global_EC6CD != 21)
    {
        return 1;
    }
    return 0;
}

int func_444(int iParam0)//Position - 0x12F6E
{
    switch (iParam0)
    {
        case 136:
        case 144:
        case 129:
            return 1;
        
        case 141:
            if (func_445(unk_0x7C7787D2D7139A85()))
            {
                return 1;
            }
            break;
    }
    return 0;
}

int func_445(int iParam0)//Position - 0x12FAC
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iVar0 /*614*/].f_1, 0);
    }
    return 0;
}

void func_446(float fParam0)//Position - 0x12FD2
{
    float fVar0;
    
    if (unk_0xA8C462EF7D9DC564(unk_0x0037AFCBDC61F351()) == func_447())
    {
        return;
    }
    fVar0 = (Global_26A0A9.f_131D - fParam0);
    if (unk_0xAB2A82A2838B61B7(Global_26A0A9.f_131E))
    {
        if (!Global_26A0A9.f_131E == unk_0x429EE9FF15BB9033() && unk_0x01CBD71E072E9F33(fVar0) > 0.001f)
        {
            return;
        }
    }
    Global_26A0A9.f_131D = fParam0;
    Global_26A0A9.f_131E = unk_0x429EE9FF15BB9033();
}

int func_447()//Position - 0x1303E
{
    switch (func_449())
    {
        case 0:
            return func_448();
            break;
        
        case 2:
            return joaat("creator");
            break;
    }
    return 0;
}

int func_448()//Position - 0x13071
{
    switch (Global_258E9F)
    {
        case 0:
            return joaat("freemode");
        
        default:
    }
    return joaat("freemode");
}

int func_449()//Position - 0x13095
{
    return Global_7810;
}

void func_450()//Position - 0x130A0
{
    Global_24FD09[unk_0x7C7787D2D7139A85() /*421*/].f_C8 = 0;
    unk_0x3B76114EC84D5812(&(Global_26A0A9.f_11D1), 1);
}

int func_451(int iParam0)//Position - 0x130C2
{
    switch (iParam0)
    {
        case 136:
            return 1;
        
        default:
    }
    return 0;
}

void func_452(int iParam0)//Position - 0x130DC
{
    Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/] = iParam0;
}

void func_453(int iParam0, int iParam1)//Position - 0x130F1
{
    int iVar0;
    
    if (iParam0 != -1 || iParam1 != -1)
    {
        iVar0 = iParam0;
        if (iVar0 == -1)
        {
            iVar0 = iParam1;
        }
        if (func_515(0) || func_515(func_514(iVar0)))
        {
            unk_0xA1E7A40E1F56E511(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 2);
        }
        else
        {
            unk_0x3B76114EC84D5812(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 2);
        }
    }
}

void func_454(int iParam0, bool bParam1)//Position - 0x13157
{
    if (bParam1)
    {
        if (!unk_0xA2BC31158C8CEFD2(Global_24FD09[unk_0x7C7787D2D7139A85() /*421*/].f_D0, iParam0))
        {
            unk_0xA1E7A40E1F56E511(&(Global_24FD09[unk_0x7C7787D2D7139A85() /*421*/].f_D0), iParam0);
        }
    }
    else if (unk_0xA2BC31158C8CEFD2(Global_24FD09[unk_0x7C7787D2D7139A85() /*421*/].f_D0, iParam0))
    {
        unk_0x3B76114EC84D5812(&(Global_24FD09[unk_0x7C7787D2D7139A85() /*421*/].f_D0), iParam0);
    }
}

int func_455(int iParam0)//Position - 0x131BA
{
    switch (iParam0)
    {
        case 134:
            return 21;
        
        case 254:
            return 25;
        
        default:
    }
    return 0;
}

void func_456()//Position - 0x131E0
{
    vector3 vVar0;
    var uVar1;
    int iVar2;
    float fVar3;
    int iVar4;
    var uVar5;
    vector3 vVar6;
    bool bVar7;
    bool bVar8;
    int iVar9;
    vector3 vVar10;
    float fVar11;
    
    if (func_13(unk_0x7C7787D2D7139A85(), 1, 1))
    {
        if ((!func_295() && !func_472(unk_0x7C7787D2D7139A85(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) && !func_471(unk_0x7C7787D2D7139A85()))
        {
            fVar3 = 2.147484E+09f;
            iVar4 = -1;
            vVar6 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
            bVar7 = unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0);
            bVar8 = func_469();
            iVar2 = 0;
            while (iVar2 < 10)
            {
                iVar9 = Local_151.f_2D9[iVar2 /*2*/].f_1;
                if (unk_0x8A7BBB98FFB32893(iVar9) && unk_0xD960230552BC4165(unk_0x40237B62400B4BCC(iVar9), 0))
                {
                    if (!bVar8)
                    {
                        if (bVar7 && unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0) == unk_0x40237B62400B4BCC(iVar9))
                        {
                            func_320(1);
                        }
                    }
                    if (func_32(iVar2, &vVar0, &uVar1))
                    {
                        vVar10 = { unk_0xACE5E491FC1B0D37(unk_0x40237B62400B4BCC(iVar9), 1) };
                        if (SYSTEM::VDIST(vVar10, vVar0) <= 10f)
                        {
                            if (func_468(vVar10))
                            {
                                unk_0xA1E7A40E1F56E511(&uVar5, iVar2);
                            }
                            if (func_466(vVar10, vVar6))
                            {
                                if (!func_464(vVar0, 100f))
                                {
                                    fVar11 = SYSTEM::VDIST(vVar10, vVar6);
                                    if (fVar11 < fVar3)
                                    {
                                        fVar3 = fVar11;
                                        iVar4 = iVar2;
                                    }
                                }
                            }
                        }
                    }
                }
                iVar2++;
            }
            Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_7 = uVar5;
            if ((unk_0x2F879C0BDBED0194(unk_0x0FA8183DAD2B3203()) || (unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203()) && !unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()))) || Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_4 > 0)
            {
                if ((fVar3 < 2.147484E+09f && iVar4 >= 0) && iVar4 < 10)
                {
                    if (func_32(iVar4, &vVar0, &uVar1))
                    {
                        iLocal_137 = 1;
                        func_463(vVar0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
                        func_462(vVar0, 1, 0);
                        func_458(10, 0, 0, 0, 0);
                    }
                }
            }
            else
            {
                func_457();
            }
        }
        else
        {
            func_457();
        }
    }
}

void func_457()//Position - 0x133F6
{
    if (iLocal_137)
    {
        func_161();
        func_159();
        iLocal_137 = 0;
    }
}

void func_458(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x13410
{
    if (Global_2531AD.f_765.f_2B2.f_10 != func_96())
    {
        if (unk_0xA2BC31158C8CEFD2(Global_24FD09[Global_2531AD.f_765.f_2B2.f_10 /*421*/].f_192, 0) && func_459())
        {
            iParam0 = 23;
        }
    }
    if (iParam0 != 18 && iParam0 != 17)
    {
        Global_24D05D = 0;
    }
    Global_24B2CF.f_1E5 = iParam0;
    Global_24B2CF.f_1E5.f_1 = unk_0x429EE9FF15BB9033();
    Global_24B2CF.f_1E5.f_2 = iParam1;
    Global_24B2CF.f_1E5.f_3 = iParam2;
    Global_24B2CF.f_1E5.f_4 = iParam3;
    Global_24B2CF.f_1E5.f_5 = iParam4;
}

int func_459()//Position - 0x134AF
{
    if (((((func_240(unk_0x7C7787D2D7139A85()) == 229 || func_240(unk_0x7C7787D2D7139A85()) == 191) || func_461()) || func_460()) || func_337(unk_0x7C7787D2D7139A85())) || Global_26463D.f_E2 == 1)
    {
        return 0;
    }
    return 1;
}

bool func_460()//Position - 0x1350B
{
    return Global_180602;
}

int func_461()//Position - 0x13517
{
    if (Global_440000 == 6)
    {
        return 1;
    }
    return 0;
}

void func_462(vector3 vParam0, int iParam1, int iParam2)//Position - 0x1352C
{
    Global_24B2CF.f_2D.f_31 = { vParam0 };
    Global_24B2CF.f_2D.f_34 = iParam1;
    Global_24B2CF.f_2D.f_35 = iParam2;
}

void func_463(vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x13556
{
    struct<28> Var0;
    
    Var0.f_7 = 1;
    Var0.f_8 = 1;
    Var0.f_15 = 1115815936;
    Var0.f_1B = -1082130432;
    if (unk_0xAB2A82A2838B61B7(Global_24D546.f_6))
    {
        if (!Global_24D546.f_6 == unk_0x429EE9FF15BB9033())
        {
            return;
        }
    }
    if (SYSTEM::VMAG(vParam0) == 0f)
    {
        return;
    }
    if (!unk_0xAB2A82A2838B61B7(Global_24D546.f_6))
    {
        Global_24D546.f_6 = unk_0x429EE9FF15BB9033();
    }
    Var0.f_6 = Global_24D546.f_6;
    Var0 = { vParam0 };
    Var0.f_5 = fParam1;
    Var0.f_4 = fParam2;
    Var0.f_7 = iParam3;
    Var0.f_3 = fParam4;
    Var0.f_8 = iParam6;
    Var0.f_9 = iParam5;
    Var0.f_A = 0;
    Var0.f_B = { 0f, 0f, 0f };
    Var0.f_E = { 0f, 0f, 0f };
    Var0.f_11 = 0f;
    Var0.f_15 = fParam7;
    Var0.f_16 = iParam8;
    if (func_428(unk_0x7C7787D2D7139A85()))
    {
        if (iParam11 || iParam5)
        {
            Var0.f_17 = 1;
        }
        else
        {
            Var0.f_17 = 0;
        }
    }
    else
    {
        Var0.f_17 = 0;
    }
    if (Var0.f_15 < 1f)
    {
        Var0.f_15 = 1f;
    }
    Var0.f_18 = iParam9;
    Var0.f_1A = iParam10;
    Var0.f_1B = iParam12;
    Global_24D546 = { Var0 };
}

bool func_464(vector3 vParam0, float fParam1)//Position - 0x1367F
{
    return func_465(vParam0, fParam1, unk_0x7C7787D2D7139A85(), 0, 0);
}

int func_465(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x13697
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
                if (func_13(iVar1, 0, 1) && func_13(iParam2, 0, 1))
                {
                    if (unk_0xC69A85EEB9CA3B95(iVar1) == unk_0xC69A85EEB9CA3B95(iParam2))
                    {
                        bVar2 = true;
                    }
                }
            }
            if (!bVar2)
            {
                if (func_13(iVar1, 0, 1) && func_13(iParam2, 0, 1))
                {
                    if (Global_24E477.f_105[iVar0])
                    {
                        if (SYSTEM::VDIST(Global_24E477.f_83[iVar0 /*3*/], vParam0) < fParam1)
                        {
                            return 1;
                        }
                    }
                    else if (SYSTEM::VDIST(func_31(iVar1), vParam0) < 1f)
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
                else if (func_13(iVar1, 0, 1))
                {
                    if (SYSTEM::VDIST(func_31(iVar1), vParam0) < 1f)
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

int func_466(vector3 vParam0, vector3 vParam1)//Position - 0x137B4
{
    vector3 vVar0;
    
    if (Local_151.f_8 == 3)
    {
        vVar0 = { func_467(Local_151.f_2C8) };
        if (SYSTEM::VDIST(vParam1, vVar0) < 3500f)
        {
            if (SYSTEM::VDIST(vParam0, vVar0) > 3500f)
            {
                return 0;
            }
        }
    }
    return 1;
}

Vector3 func_467(int iParam0)//Position - 0x13802
{
    switch (iParam0)
    {
        case 0:
            return 1710.367f, -464.7253f, 169.8001f;
        
        case 1:
            return -966.3996f, -973.0624f, 2.8632f;
        
        case 2:
            return -1347.06f, 4123.072f, 62.2841f;
        
        case 3:
            return 1941.779f, 3847.167f, 34.3796f;
        
        default:
    }
    return 0f, 0f, 0f;
}

int func_468(vector3 vParam0)//Position - 0x13874
{
    vector3 vVar0;
    
    if (Local_151.f_8 == 3)
    {
        vVar0 = { func_467(Local_151.f_2C8) };
        if (SYSTEM::VDIST(vParam0, vVar0) > 2500f)
        {
            return 0;
        }
    }
    return 1;
}

int func_469()//Position - 0x138AD
{
    if ((((((func_470(unk_0x7C7787D2D7139A85()) || func_336()) || func_348()) || func_347(unk_0x7C7787D2D7139A85(), 21)) || func_347(unk_0x7C7787D2D7139A85(), 25)) || func_7(unk_0x7C7787D2D7139A85())) || func_6(unk_0x7C7787D2D7139A85()))
    {
        return 1;
    }
    return 0;
}

int func_470(int iParam0)//Position - 0x13915
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iVar0 /*614*/].f_1, 7);
    }
    return 0;
}

int func_471(int iParam0)//Position - 0x1393B
{
    if (unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_111.f_18, 14))
    {
        return 1;
    }
    if (unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_111.f_18, 11))
    {
        return 1;
    }
    return 0;
}

int func_472(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)//Position - 0x1397A
{
    if (Global_1844AE[iParam0 /*871*/].f_111.f_1A > 0)
    {
        if (bParam1)
        {
            if (unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_111.f_18, 0))
            {
                return 1;
            }
        }
        else
        {
            return 1;
        }
    }
    if (!bParam2)
    {
        if (func_476(iParam0))
        {
            return 1;
        }
    }
    if (!bParam3)
    {
        if (func_169(iParam0))
        {
            return 1;
        }
    }
    if (!bParam4)
    {
        if (func_475(iParam0))
        {
            return 1;
        }
    }
    if (!bParam5)
    {
        if (func_401(iParam0))
        {
            return 1;
        }
    }
    if (!bParam6)
    {
        if (func_474(iParam0))
        {
            return 1;
        }
    }
    if (!bParam7)
    {
        if (func_399(iParam0))
        {
            return 1;
        }
    }
    if (!bParam8)
    {
        if (func_391(iParam0))
        {
            return 1;
        }
    }
    if (!bParam9)
    {
        if (func_387(iParam0))
        {
            return 1;
        }
    }
    if (!bParam10)
    {
        if (func_379(iParam0))
        {
            return 1;
        }
    }
    if (!bParam11)
    {
        if (func_372(iParam0, 0))
        {
            return 1;
        }
    }
    if (!bParam12)
    {
        if (func_369(iParam0))
        {
            return 1;
        }
    }
    if (!bParam13)
    {
        if (func_368(iParam0))
        {
            return 1;
        }
    }
    if (!bParam14)
    {
        if (func_366(iParam0))
        {
            return 1;
        }
    }
    if (!bParam15)
    {
        if (func_367(iParam0))
        {
            return 1;
        }
    }
    if (!bParam16)
    {
        if (func_473(iParam0))
        {
            return 1;
        }
    }
    return 0;
}

int func_473(int iParam0)//Position - 0x13AD9
{
    if (iParam0 != func_96())
    {
        if (func_13(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_170(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 17;
            }
        }
    }
    return 0;
}

int func_474(int iParam0)//Position - 0x13B20
{
    if (iParam0 != func_96())
    {
        if (func_13(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_170(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 7;
            }
        }
    }
    return 0;
}

int func_475(int iParam0)//Position - 0x13B66
{
    if (iParam0 != func_96())
    {
        if (func_13(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_170(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 1;
            }
        }
    }
    return 0;
}

int func_476(int iParam0)//Position - 0x13BAC
{
    if (iParam0 != func_96())
    {
        if (func_13(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_170(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 0;
            }
        }
    }
    return 0;
}

void func_477(var uParam0, char* sParam1)//Position - 0x13BF2
{
    char* sVar0;
    
    if (func_294(0) == 0)
    {
        return;
    }
    sVar0 = "HUD_STARTING";
    if (!func_237(sParam1))
    {
        sVar0 = sParam1;
    }
    func_141(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_478(int iParam0)//Position - 0x13C32
{
    char* sVar0;
    
    sVar0 = unk_0x0037AFCBDC61F351();
    return "HUD_STARTING";
    if (unk_0x2553916E420E8EF0(sVar0, "am_hot_target"))
    {
        return "AST_HOT_TARG";
    }
    else if (unk_0x2553916E420E8EF0(sVar0, "am_cp_collection"))
    {
        return "AST_CHK_COLL";
    }
    else if (unk_0x2553916E420E8EF0(sVar0, "am_challenges"))
    {
        switch (iParam0)
        {
            case 0:
                return "AST_CHALL_LJ";
            
            case 1:
                return "AST_CHALL_LS";
            
            case 2:
                return "AST_CHALL_HS";
            
            case 3:
                return "AST_CHALL_LST";
            
            case 4:
                return "AST_CHALL_LW";
            
            case 5:
                return "AST_CHALL_NC";
            
            case 6:
                return "AST_CHALL_LP";
            
            case 7:
                return "AST_CHALL_VS";
            
            case 8:
                return "AST_CHALL_NM";
            
            case 9:
                return "AST_CHALL_RD";
            
            case 10:
                return "AST_CHALL_LF";
            
            case 11:
                return "AST_CHALL_LFL";
            
            case 12:
                return "AST_CHALL_LFI";
            
            case 13:
                return "AST_CHALL_LB";
            
            case 14:
                return "AST_CHALL_MB";
            
            case 15:
                return "AST_CHALL_HSH";
            
            case 16:
                return "AST_CHALL_DB";
            
            case 17:
                return "AST_CHALL_ML";
            
            case 18:
                return "AST_CHALL_LSN";
            
            default:
        }
    }
    else if (unk_0x2553916E420E8EF0(sVar0, "am_penned_in"))
    {
        return "AST_PENNED";
    }
    else if (unk_0x2553916E420E8EF0(sVar0, "am_pass_the_parcel"))
    {
        return "AST_PARCEL";
    }
    else if (unk_0x2553916E420E8EF0(sVar0, "am_hot_property"))
    {
        return "AST_PROPERTY";
    }
    else if (unk_0x2553916E420E8EF0(sVar0, "am_dead_drop"))
    {
        return "AST_DDROP";
    }
    else if (unk_0x2553916E420E8EF0(sVar0, "am_king_of_the_castle"))
    {
        return "AST_KCASTLE";
    }
    else if (unk_0x2553916E420E8EF0(sVar0, "AM_CRIMINAL_DAMAGE"))
    {
        return "AST_BLAST";
    }
    else if (unk_0x2553916E420E8EF0(sVar0, "AM_KILL_LIST"))
    {
        return "AST_UWARF";
    }
    else if (unk_0x2553916E420E8EF0(sVar0, "AM_HUNT_THE_BEAST"))
    {
        return "AST_BEAST";
    }
    return "";
}

int func_479(int iParam0, int iParam1)//Position - 0x13E3B
{
    if (iParam0 > iParam1)
    {
        return iParam0;
    }
    return iParam1;
}

void func_480(int iParam0)//Position - 0x13E51
{
    if (IntToFloat(iParam0) < unk_0x9927BD5F023FA79D())
    {
        Global_26A0A9.f_127F = 0;
    }
    else if (iParam0 < 6000)
    {
        if (!unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 1))
        {
            unk_0x9964F5BBD9415AB7(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
            Global_26A0A9.f_127F = 0;
            unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 1);
        }
    }
}

int func_481(var uParam0, bool bParam1, bool bParam2)//Position - 0x13EA8
{
    if (unk_0x393E9918BC37548A() && !bParam1)
    {
        if (!bParam2)
        {
            return unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), *uParam0);
        }
        else
        {
            return unk_0x675EE3FED67AA436(unk_0x50D85685589EFCBD(), *uParam0);
        }
    }
    return unk_0x675EE3FED67AA436(unk_0x9B35D07DCD0F0B43(), *uParam0);
}

void func_482(bool bParam0)//Position - 0x13EEF
{
    int iVar0;
    vector3 vVar1;
    
    if (func_34())
    {
        if (func_13(unk_0x7C7787D2D7139A85(), 1, 1))
        {
            iVar0 = 0;
            while (iVar0 < 10)
            {
                if (((!bParam0 && unk_0x8A7BBB98FFB32893(Local_151.f_2D9[iVar0 /*2*/].f_1)) && unk_0xD960230552BC4165(unk_0x40237B62400B4BCC(Local_151.f_2D9[iVar0 /*2*/].f_1), 0)) && unk_0xBAA38708D7439CA7(unk_0x40237B62400B4BCC(Local_151.f_2D9[iVar0 /*2*/].f_1), -1, 0))
                {
                    if (!unk_0x39A01A052D9B5FF0(iLocal_145[iVar0]))
                    {
                        iLocal_145[iVar0] = unk_0xADA89D4F1A58FCBA(unk_0xAEA6D4EC961DFA03(Local_151.f_2D9[iVar0 /*2*/].f_1));
                        unk_0x6089156CDC87FE4B(iLocal_145[iVar0], 9);
                        unk_0x058B6969CEED705F(iLocal_145[iVar0], "AMCH_AC");
                        unk_0xD1773DD05FE2AB54(iLocal_145[iVar0], func_483(iVar0));
                        func_354(&(iLocal_145[iVar0]), 9);
                    }
                    else
                    {
                        vVar1 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
                        if (SYSTEM::VDIST(vVar1, unk_0xACE5E491FC1B0D37(unk_0x40237B62400B4BCC(Local_151.f_2D9[iVar0 /*2*/].f_1), 1)) <= 150f)
                        {
                            unk_0x73DF1B751952DA65(iLocal_145[iVar0], 1);
                        }
                        else
                        {
                            unk_0x73DF1B751952DA65(iLocal_145[iVar0], 0);
                        }
                    }
                }
                else if (unk_0x39A01A052D9B5FF0(iLocal_145[iVar0]))
                {
                    unk_0xAA2276003B2ADF1B(&(iLocal_145[iVar0]));
                }
                iVar0++;
            }
        }
    }
}

int func_483(int iParam0)//Position - 0x14041
{
    switch (Local_151.f_2D9[iParam0 /*2*/])
    {
        case joaat("maverick"):
            return 64;
        
        case joaat("mammatus"):
            return 423;
        
        default:
    }
    return -1;
}

void func_484(int iParam0)//Position - 0x14070
{
    char* sVar0;
    char* sVar1;
    char* sVar2;
    
    if (!unk_0xBCFD7D14E63DFD63())
    {
        switch (iParam0)
        {
            case 0:
                if (!unk_0xA2BC31158C8CEFD2(iLocal_135, iParam0))
                {
                    if (!unk_0xCD97B9861557C025())
                    {
                        func_487("CPC_PASSIVE", 30000);
                        func_165(1);
                        unk_0xA1E7A40E1F56E511(&iLocal_135, iParam0);
                    }
                }
                break;
            
            case 1:
                if (!unk_0xA2BC31158C8CEFD2(iLocal_135, iParam0))
                {
                    if (!unk_0xCD97B9861557C025())
                    {
                        func_487("CPC_NOAIR", 30000);
                        func_165(1);
                        unk_0xA1E7A40E1F56E511(&iLocal_135, iParam0);
                    }
                }
                break;
            
            case 2:
                if (!unk_0xA2BC31158C8CEFD2(iLocal_135, iParam0))
                {
                    if ((!unk_0xCD97B9861557C025() && !unk_0x0945988C02AF3025()) && func_34())
                    {
                        func_487("AMCH_AIRAV", 30000);
                        func_165(1);
                        unk_0xA1E7A40E1F56E511(&iLocal_135, iParam0);
                    }
                }
                break;
            
            case 3:
                if (!unk_0xA2BC31158C8CEFD2(iLocal_135, iParam0))
                {
                    if (!unk_0xCD97B9861557C025())
                    {
                        func_487("AMCH_BLOW", 30000);
                        func_165(1);
                        unk_0xA1E7A40E1F56E511(&iLocal_135, iParam0);
                    }
                }
                break;
            
            case 4:
                if (!unk_0xA2BC31158C8CEFD2(iLocal_135, iParam0))
                {
                    if (!unk_0xCD97B9861557C025() && !func_486(63))
                    {
                        if (Local_151.f_2C3)
                        {
                            sVar0 = "CPC_HELPA";
                        }
                        else
                        {
                            sVar0 = "CPC_HELP";
                        }
                        func_487(sVar0, 30000);
                        func_165(1);
                        unk_0xA1E7A40E1F56E511(&iLocal_135, iParam0);
                    }
                }
                break;
            
            case 5:
                if (!unk_0xA2BC31158C8CEFD2(iLocal_135, iParam0))
                {
                    if (((!unk_0xCD97B9861557C025() && !func_486(63)) && !unk_0x0945988C02AF3025()) && unk_0xA2BC31158C8CEFD2(iLocal_135, 4))
                    {
                        if (Local_151.f_2C3)
                        {
                            sVar1 = "CPC_HELPA2";
                        }
                        else
                        {
                            sVar1 = "CPC_HELP2";
                        }
                        func_487(sVar1, 30000);
                        func_165(1);
                        unk_0xA1E7A40E1F56E511(&iLocal_135, iParam0);
                    }
                }
                break;
            
            case 6:
                if (!unk_0xA2BC31158C8CEFD2(iLocal_135, iParam0))
                {
                    if (((!unk_0xCD97B9861557C025() && !func_486(63)) && !unk_0x0945988C02AF3025()) && unk_0xA2BC31158C8CEFD2(iLocal_135, 5))
                    {
                        if (Local_151.f_2C3)
                        {
                            sVar2 = "CPC_WARNA";
                        }
                        else
                        {
                            sVar2 = "CPC_WARN";
                        }
                        func_485(sVar2, func_156(), 30000);
                        func_165(1);
                        unk_0x9964F5BBD9415AB7(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
                        unk_0xA1E7A40E1F56E511(&iLocal_135, iParam0);
                    }
                }
                break;
            
            case 7:
                if (!unk_0xA2BC31158C8CEFD2(iLocal_135, iParam0))
                {
                    if (!unk_0xCD97B9861557C025())
                    {
                        func_487("CPC_PASSIV1", 30000);
                        func_165(1);
                        unk_0xA1E7A40E1F56E511(&iLocal_135, iParam0);
                    }
                }
                break;
            }
    }
}

void func_485(char* sParam0, char* sParam1, int iParam2)//Position - 0x142F7
{
    unk_0xD95C12E1062B7D5E(sParam0);
    unk_0x0AC9F8E1AFCEC860(sParam1);
    unk_0x40DC0B0D5BD91E06(0, 0, 0, iParam2);
}

bool func_486(int iParam0)//Position - 0x14314
{
    return Global_2531AD.f_A94[0 /*80*/].f_1 == iParam0;
}

void func_487(char* sParam0, int iParam1)//Position - 0x1432B
{
    unk_0xD95C12E1062B7D5E(sParam0);
    unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

void func_488(int iParam0)//Position - 0x14342
{
    Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_3 = iParam0;
}

void func_489(bool bParam0)//Position - 0x14357
{
    if (bParam0)
    {
        unk_0xA1E7A40E1F56E511(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 4);
    }
    else
    {
        unk_0x3B76114EC84D5812(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 4);
    }
}

int func_490(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1438B
{
    if (func_513(unk_0x7C7787D2D7139A85(), 29))
    {
        return 0;
    }
    if (func_347(unk_0x7C7787D2D7139A85(), 21))
    {
        return 0;
    }
    if (func_347(unk_0x7C7787D2D7139A85(), 25))
    {
        return 0;
    }
    if (unk_0xEDC68E498B715C56())
    {
        return 0;
    }
    if (bParam1)
    {
        if (unk_0xED4D72D338501085())
        {
            return 0;
        }
    }
    if (func_330(unk_0x7C7787D2D7139A85()))
    {
        return 0;
    }
    if (func_512())
    {
        return 0;
    }
    if (bParam2)
    {
        if (func_511(unk_0x7C7787D2D7139A85()))
        {
            return 0;
        }
    }
    if (func_510())
    {
        return 0;
    }
    if (bParam0)
    {
        if (func_100(unk_0x7C7787D2D7139A85()))
        {
            return 0;
        }
    }
    else if (func_503(unk_0x7C7787D2D7139A85()) == 3)
    {
        return 0;
    }
    if (func_502(unk_0x7C7787D2D7139A85()) != func_96() && func_502(unk_0x7C7787D2D7139A85()) == func_80(unk_0x7C7787D2D7139A85()))
    {
        return 0;
    }
    if (func_501(func_189()) && func_299(unk_0x7C7787D2D7139A85()) != 236)
    {
        return 0;
    }
    if (func_500())
    {
        return 0;
    }
    if (func_295())
    {
        return 0;
    }
    if (unk_0xA51CBC95AC3A4B14())
    {
        return 0;
    }
    if (func_332(unk_0x7C7787D2D7139A85()))
    {
        return 0;
    }
    if (!func_498())
    {
        return 0;
    }
    if (func_347(unk_0x7C7787D2D7139A85(), 0) || func_347(unk_0x7C7787D2D7139A85(), 3))
    {
        return 0;
    }
    if ((func_347(unk_0x7C7787D2D7139A85(), 12) || func_347(unk_0x7C7787D2D7139A85(), 14)) || func_347(unk_0x7C7787D2D7139A85(), 13))
    {
        return 0;
    }
    if (func_497(unk_0x7C7787D2D7139A85(), 1, 1))
    {
        if (!func_414() && !Global_2644A5)
        {
            return 0;
        }
    }
    if (func_496(unk_0x7C7787D2D7139A85()))
    {
        return 0;
    }
    if (func_495())
    {
        return 0;
    }
    if (Global_195E58)
    {
        return 0;
    }
    if (func_429(unk_0x7C7787D2D7139A85()))
    {
        return 0;
    }
    if (func_494())
    {
        return 0;
    }
    if (func_492(unk_0x7C7787D2D7139A85()) && Global_18434F.f_AB)
    {
        return 0;
    }
    if (func_491())
    {
        return 0;
    }
    if (func_337(unk_0x7C7787D2D7139A85()))
    {
        return 0;
    }
    if (Global_269CFC)
    {
        return 0;
    }
    if (Global_19DA4F)
    {
        return 0;
    }
    return 1;
}

bool func_491()//Position - 0x145C3
{
    return Global_19964F.f_1BB;
}

int func_492(int iParam0)//Position - 0x145D2
{
    if (func_493(Global_1844AE[iParam0 /*871*/].f_111.f_1A))
    {
        return 1;
    }
    return 0;
}

int func_493(int iParam0)//Position - 0x145F4
{
    switch (iParam0)
    {
        case 87:
        case 88:
        case 89:
        case 90:
            return 1;
            break;
    }
    return 0;
}

int func_494()//Position - 0x14623
{
    if (Global_40EAC7.f_388 > -1)
    {
        return 1;
    }
    return 0;
}

bool func_495()//Position - 0x1463B
{
    return Global_181A1.f_15A > 0;
}

bool func_496(int iParam0)//Position - 0x1464C
{
    return unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_111.f_18, 11);
}

int func_497(int iParam0, bool bParam1, bool bParam2)//Position - 0x14668
{
    if (iParam0 == func_96())
    {
        return 0;
    }
    if (unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_111.f_18, 0))
    {
        return 1;
    }
    if (bParam1)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_111.f_18, 1))
        {
            return 1;
        }
    }
    if (bParam2)
    {
        if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
        {
            return 1;
        }
    }
    return 0;
}

int func_498()//Position - 0x146D2
{
    if (func_499() == 0)
    {
        return 1;
    }
    return 0;
}

int func_499()//Position - 0x146E7
{
    return Global_1406D3.f_12;
}

bool func_500()//Position - 0x146F5
{
    return Global_140869;
}

int func_501(int iParam0)//Position - 0x14701
{
    switch (iParam0)
    {
        case 87:
        case 88:
        case 89:
        case 100:
        case 101:
        case 102:
        case 103:
        case 90:
        case 110:
            return 1;
        
        default:
    }
    return 0;
}

int func_502(int iParam0)//Position - 0x1474B
{
    return Global_18DB1B[iParam0 /*614*/].f_B.f_23;
}

int func_503(int iParam0)//Position - 0x14760
{
    int iVar0;
    bool bVar1;
    bool bVar2;
    var uVar3;
    var uVar4;
    
    iVar0 = 2;
    bVar1 = ((func_430(iParam0) && !func_7(iParam0)) && !unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_1, 8));
    bVar2 = func_100(iParam0);
    uVar3 = func_336();
    uVar4 = func_504();
    if ((bVar1 && (func_470(iParam0) || func_445(iParam0))) || uVar4)
    {
        iVar0 = 0;
    }
    else if (uVar3 || ((!bVar2 && !func_102(iParam0)) && !func_171(iParam0)))
    {
        iVar0 = 2;
    }
    else
    {
        iVar0 = 3;
    }
    if (Global_26A0A9.f_1322.f_D6 != iVar0)
    {
        Global_26A0A9.f_1322.f_D6 = iVar0;
    }
    return iVar0;
}

int func_504()//Position - 0x1481E
{
    if ((func_101(unk_0x7C7787D2D7139A85(), 21) || func_101(unk_0x7C7787D2D7139A85(), 22)) || func_508())
    {
        return 1;
    }
    if (func_506())
    {
        func_505(22);
        return 1;
    }
    return 0;
}

void func_505(int iParam0)//Position - 0x14863
{
    unk_0xA1E7A40E1F56E511(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_B.f_4), iParam0);
}

int func_506()//Position - 0x14880
{
    if (func_106(unk_0x7C7787D2D7139A85(), 0))
    {
        if (((func_336() && !func_348()) || func_347(unk_0x7C7787D2D7139A85(), 21)) || func_347(unk_0x7C7787D2D7139A85(), 25))
        {
            return 1;
        }
        else
        {
            func_507(27);
        }
    }
    return 0;
}

void func_507(int iParam0)//Position - 0x148D3
{
    unk_0x3B76114EC84D5812(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_B.f_4), iParam0);
}

int func_508()//Position - 0x148F0
{
    return func_509(356, -1);
}

int func_509(int iParam0, int iParam1)//Position - 0x14900
{
    var uVar0;
    var uVar1;
    
    uVar0 = Global_274F55[iParam0 /*3*/][func_223(iParam1)];
    if (unk_0xF7B5584413D4EA03(uVar0, &uVar1, -1))
    {
        return uVar1;
    }
    return 0;
}

bool func_510()//Position - 0x1492C
{
    return Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/] == 5;
}

int func_511(int iParam0)//Position - 0x14941
{
    if (Global_24FD09[iParam0 /*421*/].f_105.f_4 != 0 || Global_24FD09[iParam0 /*421*/].f_105.f_5)
    {
        return 1;
    }
    return 0;
}

bool func_512()//Position - 0x14975
{
    return unk_0xA2BC31158C8CEFD2(Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_27.f_12, 0);
}

bool func_513(int iParam0, int iParam1)//Position - 0x14991
{
    return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_B.f_5, iParam1);
}

int func_514(int iParam0)//Position - 0x149AC
{
    switch (iParam0)
    {
        case 131:
            return 10;
        
        case 132:
            return 1;
        
        case 133:
            return 2;
        
        case 136:
            return 11;
        
        case 138:
            return 5;
        
        case 139:
            return 6;
        
        case 129:
            return 8;
        
        case 140:
            return 4;
        
        case 141:
            return 9;
        
        case 144:
            return 3;
        
        case 146:
            return 7;
        
        case 236:
            return 12;
        
        default:
    }
    return Global_40001.f_5C46;
}

bool func_515(int iParam0)//Position - 0x14A3F
{
    int iVar0;
    
    iVar0 = func_228(2480, -1, 0);
    return unk_0xA2BC31158C8CEFD2(iVar0, iParam0);
}

void func_516()//Position - 0x14A5A
{
    if (Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_4 != 0)
    {
        Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_4 = 0;
    }
}

bool func_517(int iParam0)//Position - 0x14A7D
{
    if (iParam0 == unk_0x7C7787D2D7139A85())
    {
        if (((func_336() && !func_348()) || func_347(unk_0x7C7787D2D7139A85(), 21)) || func_347(unk_0x7C7787D2D7139A85(), 25))
        {
            return 1;
        }
        if (func_38(&(Global_1806F7.f_D)))
        {
            if (!func_1(&(Global_1806F7.f_D), Global_40001.f_E, 0))
            {
                return 1;
            }
            func_37(&(Global_1806F7.f_D));
        }
    }
    else if (unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_1, 10))
    {
        return 1;
    }
    return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_1, 9);
}

bool func_518(int iParam0)//Position - 0x14B1F
{
    return func_94(iParam0, 0);
}

void func_519()//Position - 0x14B2E
{
    func_520(&(Local_172.f_216), &Local_172, 26, &(Local_172.f_1), &(Local_172.f_75), -1, 0, 0);
}

void func_520(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x14B52
{
    int iVar0;
    int iVar1[32];
    bool bVar2;
    int iVar3;
    char* sVar4;
    int iVar5;
    struct<4> Var6;
    int iVar7;
    int iVar8;
    int iVar9;
    float fVar10;
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
    struct<2> Var22;
    
    if (func_634(iParam2))
    {
        return;
    }
    fVar10 = -1f;
    iVar11 = -1;
    iVar12 = -1;
    iVar14 = 0;
    iVar15 = 0;
    uParam3->f_24 = 0;
    if (func_632() || iParam2 == 27)
    {
        if (func_587(iParam1, iParam2, uParam3, Global_180526, 0, func_635(), sParam7))
        {
            func_586(1);
            if ((!func_585() && !func_584()) || unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_11EC, 1))
            {
                if (func_583())
                {
                    func_582();
                }
                else
                {
                    unk_0xE0EE6551C6D522E7(76, 84);
                    if (uParam3->f_1B == 0)
                    {
                        func_581(1);
                        Global_180526 = 0;
                        iVar19 = -1;
                        if (Global_180603 != 1)
                        {
                            func_580(iParam1, 0, 0);
                            if (unk_0xA2BC31158C8CEFD2(uParam3->f_21, 7))
                            {
                                unk_0x3B76114EC84D5812(&(uParam3->f_21), 7);
                            }
                        }
                        if (iParam2 == 27)
                        {
                            iVar17 = 0;
                            while (iVar17 < 32)
                            {
                                iVar1[iVar17] = -1;
                                iVar17++;
                            }
                            iVar17 = 0;
                            while (iVar17 < 32)
                            {
                                if (func_13(unk_0x0C98179F08C6DA4F(iVar17), 0, 1))
                                {
                                    iVar3 = unk_0x0C98179F08C6DA4F(iVar17);
                                    if (!func_94(iVar3, 0))
                                    {
                                        if ((func_579(iVar3) || Global_24FD09[iVar3 /*421*/].f_EC != -1) || func_578(iVar3))
                                        {
                                            iVar9 = iVar3;
                                            if (func_82(iVar3))
                                            {
                                                iVar1[iVar9] = iVar20;
                                                iVar20++;
                                                iVar0++;
                                                func_575(&iVar1, iVar3, &iVar20, &iVar0);
                                            }
                                        }
                                    }
                                }
                                iVar17++;
                            }
                        }
                        if (!func_103(unk_0x7C7787D2D7139A85(), 0) && func_240(unk_0x7C7787D2D7139A85()) != 188)
                        {
                            bVar2 = iVar0 > 0;
                        }
                        iVar17 = 0;
                        while (iVar17 < 32)
                        {
                            if (func_574())
                            {
                                if (func_13(unk_0x0C98179F08C6DA4F(iVar17), 0, 1))
                                {
                                    iVar3 = unk_0x0C98179F08C6DA4F(iVar17);
                                }
                                else
                                {
                                    iVar3 = func_96();
                                }
                            }
                            else
                            {
                                iVar3 = (uParam0[iVar17 /*42*/])->f_1;
                            }
                            if ((func_573(iVar3) && func_570(iVar3, iParam2)) && func_13(iVar3, 0, 1))
                            {
                                iVar9 = iVar3;
                                iVar7 = Global_1844AE[iVar9 /*871*/].f_D3.f_6;
                                Var6 = { func_565(iVar3) };
                                if (iVar3 == unk_0x7C7787D2D7139A85())
                                {
                                    uParam3->f_23 = iVar18;
                                }
                                StringCopy(&(uParam3->f_1), unk_0xA09A99AC02B24954(iVar3), 64);
                                *(uParam4[iVar17 /*13*/]) = { func_135(iVar3) };
                                iVar5 = func_559(iVar3);
                                sVar4 = "";
                                if (iVar5 != 0)
                                {
                                    sVar4 = unk_0x5C3CC258CDC18660(iVar5);
                                }
                                Global_180526++;
                                if ((uParam0[iVar17 /*42*/])->f_16 != -1f)
                                {
                                    fVar10 = (uParam0[iVar17 /*42*/])->f_16;
                                }
                                if ((uParam0[iVar17 /*42*/])->f_1F != -1)
                                {
                                    iVar11 = (uParam0[iVar17 /*42*/])->f_1F;
                                }
                                if ((uParam0[iVar17 /*42*/])->f_29 != -1)
                                {
                                    iVar12 = (uParam0[iVar17 /*42*/])->f_29;
                                }
                                iVar8 = (uParam0[iVar17 /*42*/])->f_9;
                                if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_16 != -1f) || (uParam0[iVar17 /*42*/])->f_1F != -1)
                                {
                                    if (!func_574())
                                    {
                                        iVar15 = 1;
                                    }
                                }
                                if (iParam5 != -1)
                                {
                                    func_554(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
                                    StringCopy(&(uParam3->f_68), func_553(iParam5, 1, 0, 0), 16);
                                }
                                if (bParam6)
                                {
                                    iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
                                    if (iVar19 != iVar13)
                                    {
                                        iVar19 = iVar13;
                                    }
                                    else
                                    {
                                        iVar13 = -2;
                                    }
                                }
                                iVar16 = func_552(iVar3, 0);
                                if (bVar2)
                                {
                                    if (func_81(iVar3, 1) && iVar1[iVar9] != -1)
                                    {
                                        iVar18 = iVar1[iVar9];
                                    }
                                    else
                                    {
                                        iVar18 = (iVar0 + iVar21);
                                        iVar21++;
                                    }
                                }
                                uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
                                if ((uParam0[iVar17 /*42*/])->f_27 != -1)
                                {
                                    StringCopy(&Var22, "UW_TM", 16);
                                    StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_27, 16);
                                }
                                if (func_551(iParam5))
                                {
                                    func_550(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
                                }
                                else
                                {
                                    func_550(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
                                }
                                unk_0xA1E7A40E1F56E511(&iVar14, iVar3);
                                iVar18++;
                            }
                            iVar17++;
                        }
                        iVar17 = 0;
                        while (iVar17 < 32)
                        {
                            iVar3 = unk_0x0C98179F08C6DA4F(iVar17);
                            if (func_13(iVar3, 0, 1) && !unk_0xA2BC31158C8CEFD2(iVar14, iVar3))
                            {
                                iVar3 = unk_0x0C98179F08C6DA4F(iVar17);
                            }
                            else
                            {
                                iVar3 = func_96();
                            }
                            if (func_573(iVar3))
                            {
                                if (func_13(unk_0x0C98179F08C6DA4F(iVar17), 0, 1))
                                {
                                    iVar9 = iVar3;
                                    iVar7 = Global_1844AE[iVar9 /*871*/].f_D3.f_6;
                                    Var6 = { func_565(iVar3) };
                                    *(uParam4[iVar17 /*13*/]) = { func_135(iVar3) };
                                    iVar5 = func_559(iVar3);
                                    sVar4 = "";
                                    if (iVar5 != 0)
                                    {
                                        sVar4 = unk_0x5C3CC258CDC18660(iVar5);
                                    }
                                    Global_180526++;
                                    iVar16 = func_552(iVar3, 1);
                                    if (bVar2)
                                    {
                                        if (func_81(iVar3, 1))
                                        {
                                            iVar18 = iVar1[iVar17];
                                        }
                                        else
                                        {
                                            iVar18 = (iVar0 + iVar21);
                                            iVar21++;
                                        }
                                    }
                                    uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
                                    func_533(iVar3, unk_0xA09A99AC02B24954(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
                                    iVar18++;
                                }
                            }
                            iVar17++;
                        }
                        if (unk_0xA2BC31158C8CEFD2(uParam3->f_21, 11))
                        {
                            func_530(uParam3, iParam1);
                        }
                        func_37(&(uParam3->f_15));
                        func_529();
                        uParam3->f_1B = 2;
                    }
                    if (uParam3->f_1B == 2)
                    {
                        if (!unk_0xA2BC31158C8CEFD2(uParam3->f_21, 7))
                        {
                            func_528(uParam3, iParam1);
                            func_527(iParam1, 0, 1);
                            unk_0xA1E7A40E1F56E511(&(uParam3->f_21), 7);
                        }
                        func_528(uParam3, iParam1);
                        if (!unk_0xA2BC31158C8CEFD2(uParam3->f_21, 11))
                        {
                            unk_0xA1E7A40E1F56E511(&(uParam3->f_21), 11);
                        }
                        if (func_523(uParam3))
                        {
                            Global_180603 = 1;
                        }
                        func_521(uParam3);
                        if (Global_180603 == 1)
                        {
                            uParam3->f_1B = 0;
                        }
                        if (Global_180603 == 2)
                        {
                            uParam3->f_1B = 0;
                        }
                    }
                    if (unk_0x08EA887200715AD9(*iParam1))
                    {
                        unk_0xF314976CA3E17AC7(7);
                        unk_0x1C65AC18AFC2CA39(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
                        unk_0xF314976CA3E17AC7(4);
                    }
                }
            }
        }
        else
        {
            uParam3->f_1B = 0;
            func_529();
            func_581(0);
            if (unk_0xA2BC31158C8CEFD2(uParam3->f_21, 7))
            {
                unk_0x3B76114EC84D5812(&(uParam3->f_21), 7);
            }
            if (unk_0xA2BC31158C8CEFD2(uParam3->f_21, 10))
            {
                unk_0x3B76114EC84D5812(&(uParam3->f_21), 10);
            }
        }
    }
    unk_0x01C11ACADC5D0A74();
}

void func_521(var uParam0)//Position - 0x151A3
{
    if (!func_38(&(uParam0->f_15)))
    {
        func_2(&(uParam0->f_15), 0, 0);
    }
    else if (func_1(&(uParam0->f_15), 250, 0))
    {
        func_37(&(uParam0->f_15));
        func_522(0);
    }
}

void func_522(bool bParam0)//Position - 0x151DF
{
    if (bParam0)
    {
        if (Global_180603 != 2)
        {
            Global_180603 = 2;
        }
    }
    else
    {
        switch (Global_180603)
        {
            case 0:
                Global_180603 = 1;
                break;
            
            case 1:
                break;
            
            case 2:
                break;
            }
    }
}

int func_523(var uParam0)//Position - 0x15225
{
    int iVar0;
    int iVar1;
    struct<13> Var2;
    int iVar3;
    int iVar4;
    
    iVar4 = 0;
    iVar0 = uParam0->f_25;
    iVar3 = unk_0x0C98179F08C6DA4F(uParam0->f_25);
    if (iVar3 != func_96() && func_13(iVar3, 0, 1))
    {
        Var2 = { func_135(iVar3) };
        iVar1 = func_526(uParam0, uParam0->f_25);
        if (func_525(Var2))
        {
            switch (iVar1)
            {
                case 0:
                    if (unk_0xAD7967B7C2B6B4CA(&Var2))
                    {
                        if (unk_0x4E0A7769ED6F98FD(&Var2))
                        {
                            iVar4 = 1;
                            func_524(uParam0, iVar0, 2);
                        }
                    }
                    else if (unk_0xCE08CBA13236EC65(&Var2))
                    {
                        iVar4 = 1;
                        func_524(uParam0, iVar0, 1);
                    }
                    break;
                
                case 2:
                    if (unk_0xAD7967B7C2B6B4CA(&Var2))
                    {
                        if (!unk_0x4E0A7769ED6F98FD(&Var2))
                        {
                            iVar4 = 1;
                            func_524(uParam0, iVar0, 0);
                        }
                    }
                    else
                    {
                        iVar4 = 1;
                        func_524(uParam0, iVar0, 0);
                    }
                    break;
                
                case 1:
                    if (unk_0xAD7967B7C2B6B4CA(&Var2))
                    {
                        if (!unk_0xCE08CBA13236EC65(&Var2))
                        {
                            iVar4 = 1;
                            func_524(uParam0, iVar0, 0);
                        }
                    }
                    else if (!unk_0xCE08CBA13236EC65(&Var2))
                    {
                        iVar4 = 1;
                        func_524(uParam0, iVar0, 0);
                    }
                    break;
                }
            }
    }
    uParam0->f_25++;
    if (uParam0->f_25 >= 32)
    {
        uParam0->f_25 = 0;
    }
    return iVar4;
}

void func_524(var uParam0, int iParam1, int iParam2)//Position - 0x15352
{
    uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_525(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x15364
{
    return unk_0x5D17AB84230A234B(&uParam0, 13);
}

var func_526(var uParam0, int iParam1)//Position - 0x15374
{
    return uParam0->f_26[iParam1 /*2*/];
}

void func_527(int iParam0, bool bParam1, int iParam2)//Position - 0x15384
{
    if (unk_0xF1BC72CEC2746995(*iParam0, "COLLAPSE"))
    {
        unk_0x282C78036676E0C2(bParam1);
        unk_0xAC7C2DE2DDC7AF03();
    }
    if (iParam2 == 1)
    {
        if (unk_0xF1BC72CEC2746995(*iParam0, "DISPLAY_VIEW"))
        {
            unk_0xAC7C2DE2DDC7AF03();
        }
    }
}

void func_528(var uParam0, int iParam1)//Position - 0x153BC
{
    if (!unk_0xA2BC31158C8CEFD2(uParam0->f_21, 10))
    {
        unk_0xF1BC72CEC2746995(*iParam1, "SET_HIGHLIGHT");
        unk_0xD02F24F3E2DB263A(uParam0->f_23);
        unk_0xAC7C2DE2DDC7AF03();
        unk_0xA1E7A40E1F56E511(&(uParam0->f_21), 10);
    }
}

void func_529()//Position - 0x153F4
{
    if (Global_180603 != 0)
    {
        Global_180603 = 0;
    }
}

void func_530(var uParam0, int iParam1)//Position - 0x15409
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    iVar0 = 0;
    while (iVar0 < 32)
    {
        iVar2 = unk_0x0C98179F08C6DA4F(iVar0);
        if (iVar2 != func_96())
        {
            if (func_13(iVar2, 0, 1))
            {
                if (uParam0->f_26[iVar0 /*2*/].f_1 != -1)
                {
                    iVar1 = func_532(uParam0->f_26[iVar0 /*2*/], 0);
                    func_531(iParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_1844AE[iVar0 /*871*/].f_D3.f_6);
                }
            }
        }
        iVar0++;
    }
}

void func_531(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1547C
{
    if (unk_0x08EA887200715AD9(*uParam0))
    {
        if (unk_0xF1BC72CEC2746995(*uParam0, "SET_ICON"))
        {
            unk_0xD02F24F3E2DB263A(iParam1);
            unk_0xD02F24F3E2DB263A(iParam2);
            if (iParam2 == 65)
            {
                unk_0xD02F24F3E2DB263A(iParam3);
            }
            unk_0xAC7C2DE2DDC7AF03();
        }
    }
}

int func_532(int iParam0, bool bParam1)//Position - 0x154B9
{
    int iVar0;
    
    iVar0 = 65;
    if (bParam1)
    {
        iVar0 = 116;
    }
    switch (iParam0)
    {
        case 2:
            return 47;
        
        case 1:
            return 49;
        
        default:
    }
    return iVar0;
}

void func_533(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x154ED
{
    int iVar0;
    char* sVar1;
    
    if (iParam4 >= func_549() && iParam4 < func_548())
    {
        iParam4 = (iParam4 % 16);
        iVar0 = iParam4 + 1;
        if (Global_180528)
        {
            iVar0 += 16;
        }
        sVar1 = "SET_DATA_SLOT";
        if (Global_180603 == 1)
        {
            sVar1 = "UPDATE_SLOT";
        }
        if (unk_0xF1BC72CEC2746995(*iParam2, sVar1))
        {
            unk_0xD02F24F3E2DB263A(iParam4);
            if (unk_0xA2BC31158C8CEFD2(uParam3->f_21, 8) || uParam3->f_6C == 6)
            {
                func_547("");
            }
            else
            {
                unk_0xD02F24F3E2DB263A(iParam10);
            }
            func_547(sParam1);
            unk_0xD02F24F3E2DB263A(iParam11);
            if (uParam3->f_6C == 6)
            {
                func_547("");
            }
            else
            {
                unk_0xD02F24F3E2DB263A(65);
            }
            unk_0xD02F24F3E2DB263A(-1);
            func_547("");
            if (uParam3->f_6C == 6)
            {
                func_547("");
            }
            else
            {
                func_547(&sParam5);
            }
            func_538(uParam3, iParam0);
            unk_0xE2603C088682FC07(sParam9);
            unk_0xE2603C088682FC07(sParam9);
            if (func_537(uParam3))
            {
                func_536("DPAD_FRIEND");
            }
            else if (func_535(uParam3))
            {
                func_536("DPAD_FRIEND");
            }
            else if (func_534(uParam3))
            {
                func_536("DPAD_CREW");
            }
            else
            {
                func_536("");
            }
            unk_0xAC7C2DE2DDC7AF03();
        }
    }
}

bool func_534(var uParam0)//Position - 0x15617
{
    return unk_0xA2BC31158C8CEFD2(uParam0->f_21, 6);
}

bool func_535(var uParam0)//Position - 0x15628
{
    return unk_0xA2BC31158C8CEFD2(uParam0->f_21, 5);
}

void func_536(char* sParam0)//Position - 0x15639
{
    unk_0x759AC38FBC6CCA9E(sParam0);
    unk_0x81019766FF500CCA();
}

int func_537(var uParam0)//Position - 0x1564B
{
    if (func_535(uParam0) && func_534(uParam0))
    {
        return 1;
    }
    return 0;
}

void func_538(var uParam0, int iParam1)//Position - 0x1566C
{
    if (func_546(iParam1))
    {
        unk_0xD02F24F3E2DB263A(121);
    }
    else if (func_542(iParam1))
    {
        unk_0xD02F24F3E2DB263A(122);
    }
    else if (((unk_0xA2BC31158C8CEFD2(Global_440000.f_1B, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam1 /*421*/].f_19B, 0))
    {
        unk_0xD02F24F3E2DB263A(123);
    }
    else
    {
        if (func_539())
        {
            uParam0->f_24 = 0;
        }
        unk_0x282C78036676E0C2(uParam0->f_24);
    }
}

int func_539()//Position - 0x156ED
{
    if (unk_0xA51CBC95AC3A4B14())
    {
        if (func_540() || func_86())
        {
            return 1;
        }
    }
    return 0;
}

int func_540()//Position - 0x15712
{
    if (unk_0xA51CBC95AC3A4B14())
    {
        return func_86();
    }
    return func_541(Global_440000.f_25AF8);
}

int func_541(int iParam0)//Position - 0x15736
{
    int iVar0;
    
    if (iParam0 == 0)
    {
        return 0;
    }
    iVar0 = 0;
    while (iVar0 < 8)
    {
        if (Global_40001.f_137E[iVar0] == iParam0)
        {
            return 1;
        }
        iVar0++;
    }
    return 0;
}

int func_542(int iParam0)//Position - 0x15770
{
    if ((func_13(iParam0, 0, 1) && func_543()) && func_183(iParam0, 1))
    {
        return 1;
    }
    return 0;
}

int func_543()//Position - 0x1579D
{
    if (func_430(unk_0x7C7787D2D7139A85()) || func_545())
    {
        if (!func_544(unk_0x7C7787D2D7139A85(), 236))
        {
            return 0;
        }
    }
    return 1;
}

int func_544(int iParam0, int iParam1)//Position - 0x157CD
{
    if (func_299(iParam0) == iParam1)
    {
        return func_470(iParam0);
    }
    return 0;
}

int func_545()//Position - 0x157EA
{
    switch (func_240(unk_0x7C7787D2D7139A85()))
    {
        case 193:
        case 194:
        case 199:
        case 205:
        case 210:
        case 188:
            return 1;
        
        default:
    }
    return 0;
}

int func_546(int iParam0)//Position - 0x15828
{
    if (func_539())
    {
        if (func_13(iParam0, 0, 1))
        {
            return func_82(iParam0);
        }
    }
    if ((func_13(iParam0, 0, 1) && func_543()) && func_185(iParam0, 0))
    {
        return 1;
    }
    return 0;
}

void func_547(char* sParam0)//Position - 0x15870
{
    unk_0x7151302E2AA285DC(sParam0);
}

int func_548()//Position - 0x1587E
{
    int iVar0;
    
    if (Global_180528)
    {
        iVar0 = 32;
    }
    else
    {
        iVar0 = 16;
    }
    return iVar0;
}

int func_549()//Position - 0x1589A
{
    int iVar0;
    
    iVar0 = 0;
    if (Global_180528)
    {
        iVar0 = 16;
    }
    return iVar0;
}

void func_550(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x158B2
{
    int iVar0;
    char* sVar1;
    
    if (iParam3 >= func_549() && iParam3 < func_548())
    {
        iParam3 = (iParam3 % 16);
        iVar0 = iParam3 + 1;
        if (Global_180528)
        {
            iVar0 += 16;
        }
        if (bParam19)
        {
            iVar0 = iParam18;
            if (iVar0 == -2)
            {
                iParam10 = -1;
            }
        }
        sVar1 = "SET_DATA_SLOT";
        if (Global_180603 == 1)
        {
            sVar1 = "UPDATE_SLOT";
        }
        if (unk_0x08EA887200715AD9(*iParam1))
        {
            if (unk_0xF1BC72CEC2746995(*iParam1, sVar1))
            {
                unk_0xD02F24F3E2DB263A(iParam3);
                if (unk_0xA2BC31158C8CEFD2(uParam2->f_21, 8) || uParam2->f_6C == 6)
                {
                    func_547("");
                }
                else
                {
                    unk_0xD02F24F3E2DB263A(iParam9);
                }
                if (uParam2->f_6C == 6 && !unk_0x9591DE0F00127F2A(sParam16))
                {
                    func_536(sParam16);
                }
                else
                {
                    func_547(&(uParam2->f_1));
                }
                unk_0xD02F24F3E2DB263A(iParam11);
                if (uParam2->f_6C == 6)
                {
                    func_547("");
                }
                else
                {
                    unk_0xD02F24F3E2DB263A(65);
                }
                if (iParam12 == 1)
                {
                    unk_0xD02F24F3E2DB263A(iVar0);
                }
                else
                {
                    unk_0xD02F24F3E2DB263A(-1);
                }
                if (func_574())
                {
                    func_547("");
                }
                else if (uParam2->f_6C == 6 && !unk_0x9591DE0F00127F2A(sParam16))
                {
                    unk_0x759AC38FBC6CCA9E("FM_AE_ONE_INT");
                    unk_0x0AC9F8E1AFCEC860(sParam16);
                    unk_0x6A8B3CC08A759F44(iParam17);
                    unk_0x81019766FF500CCA();
                }
                else if (uParam2->f_6C == 5 && !unk_0x9591DE0F00127F2A(sParam16))
                {
                    unk_0x759AC38FBC6CCA9E("FM_AE_ONE_INT");
                    unk_0x0AC9F8E1AFCEC860(sParam16);
                    unk_0x6A8B3CC08A759F44(iParam17);
                    unk_0x81019766FF500CCA();
                }
                else if (uParam2->f_6C == 7 && !unk_0x9591DE0F00127F2A(sParam16))
                {
                    unk_0x759AC38FBC6CCA9E("FM_AE_TWO_INT");
                    unk_0x0AC9F8E1AFCEC860(sParam16);
                    unk_0x6A8B3CC08A759F44(iParam17);
                    unk_0x81019766FF500CCA();
                }
                else if (uParam2->f_6C == 8 && !unk_0x9591DE0F00127F2A(&(uParam2->f_68)))
                {
                    unk_0x759AC38FBC6CCA9E("FM_AE_UNIT");
                    if (fParam13 != -1f)
                    {
                        unk_0x10D1E89D0C3D279B(fParam13, 1);
                    }
                    if (iParam10 != -1)
                    {
                        unk_0x6A8B3CC08A759F44(iParam10);
                    }
                    unk_0x0AC9F8E1AFCEC860(&(uParam2->f_68));
                    unk_0x81019766FF500CCA();
                }
                else if (uParam2->f_6C == 9)
                {
                    unk_0x759AC38FBC6CCA9E("FM_AE_CASH");
                    unk_0x4BDF2F68AA4EAA77(iParam10, 1);
                    unk_0x81019766FF500CCA();
                }
                else if (uParam2->f_6C == 10)
                {
                    if (iParam10 == 0)
                    {
                        unk_0x759AC38FBC6CCA9E("FM_AE_CASH");
                        unk_0x4BDF2F68AA4EAA77(iParam10, 1);
                        unk_0x81019766FF500CCA();
                    }
                    else
                    {
                        unk_0x759AC38FBC6CCA9E("FM_NG_CASH");
                        unk_0x4BDF2F68AA4EAA77(iParam10, 1);
                        unk_0x81019766FF500CCA();
                    }
                }
                else if (iParam15 > -1)
                {
                    if (iParam15 == 0 && !unk_0x9591DE0F00127F2A(&(uParam2->f_68)))
                    {
                        func_536(&(uParam2->f_68));
                    }
                    else
                    {
                        func_547("");
                    }
                }
                else if (iParam14 != -1)
                {
                    unk_0x759AC38FBC6CCA9E("STRING");
                    unk_0xC5B1209EEC9E6603(iParam14, 6);
                    unk_0x81019766FF500CCA();
                }
                else if (fParam13 != -1f)
                {
                    unk_0x759AC38FBC6CCA9E("NUMBER");
                    unk_0x10D1E89D0C3D279B(fParam13, 1);
                    unk_0x81019766FF500CCA();
                }
                else if (iParam10 != -1)
                {
                    unk_0xD02F24F3E2DB263A(iParam10);
                }
                else
                {
                    func_547("");
                }
                if (uParam2->f_6C == 6)
                {
                    func_547("");
                }
                else
                {
                    func_547(&sParam4);
                }
                func_538(uParam2, iParam0);
                if (iParam12 == 1 || unk_0x9591DE0F00127F2A(sParam8))
                {
                    func_547("");
                    func_547("");
                }
                else
                {
                    unk_0xE2603C088682FC07(sParam8);
                    unk_0xE2603C088682FC07(sParam8);
                }
                if (func_537(uParam2))
                {
                    func_536("DPAD_FRIEND");
                }
                else if (func_535(uParam2))
                {
                    func_536("DPAD_FRIEND");
                }
                else if (func_534(uParam2))
                {
                    func_536("DPAD_CREW");
                }
                else
                {
                    func_536("");
                }
                unk_0xAC7C2DE2DDC7AF03();
            }
        }
    }
}

int func_551(int iParam0)//Position - 0x15C0C
{
    return 0;
    switch (iParam0)
    {
        case 11:
        case 12:
            return 1;
        
        default:
    }
    return 0;
}

int func_552(int iParam0, bool bParam1)//Position - 0x15C30
{
    int iVar0;
    int iVar1;
    
    iVar0 = 116;
    if ((!bParam1 && func_430(iParam0)) && !func_100(iParam0))
    {
        iVar0 = func_58();
    }
    iVar1 = func_79(iParam0);
    if (!iVar1 == -1)
    {
        return func_77(iVar1);
    }
    return iVar0;
}

char* func_553(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x15C7A
{
    switch (iParam0)
    {
        case 0:
        case 3:
        case 4:
        case 5:
        case 1:
        case 6:
        case 9:
        case 10:
        case 13:
        case 11:
        case 12:
            if (unk_0xB28FEB6F176CE84A())
            {
                if (bParam1)
                {
                    return "AMCH_M_LB";
                }
                else if (bParam2)
                {
                    return "AMCH_M";
                }
                else
                {
                    return "AMCH_METRES";
                }
            }
            else if (bParam1)
            {
                return "AMCH_FT_LB";
            }
            else if (bParam2)
            {
                return "AMCH_FT";
            }
            else
            {
                return "AMCH_FEET";
            }
            break;
        
        case 2:
            if (unk_0xB28FEB6F176CE84A())
            {
                if (bParam1)
                {
                    return "AMCH_KMH_LB";
                }
                else if (bParam2)
                {
                    return "AMCH_KMHN";
                }
                else
                {
                    return "AMCH_KMH";
                }
            }
            else if (bParam1)
            {
                return "AMCH_MPH_LB";
            }
            else if (bParam2)
            {
                return "AMCH_MPHN";
            }
            else
            {
                return "AMCH_MPH";
            }
            break;
        
        case 7:
            if (bParam1 || bParam2)
            {
                return "";
            }
            else
            {
                return "AMCH_VEH";
            }
            break;
        
        case 15:
        case 16:
        case 17:
        case 18:
            if (bParam1 || bParam2)
            {
                return "";
            }
            else if (iParam3 != 1)
            {
                return "AMCH_KILLS";
            }
            else
            {
                return "AMCH_KILL";
            }
            break;
    }
    if (bParam1 || bParam2)
    {
        return "";
    }
    return "AMCH_EMPTY";
}

int func_554(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x15E07
{
    if (func_558(iParam3))
    {
        *fParam1 = (func_555(iParam3, iParam2) / 10f);
        return 1;
    }
    if (func_551(iParam3))
    {
        *fParam1 = (func_555(iParam3, iParam2) / 1000f);
        return 1;
    }
    *uParam0 = iParam2;
    return 0;
}

float func_555(int iParam0, int iParam1)//Position - 0x15E57
{
    switch (iParam0)
    {
        case 0:
        case 3:
        case 4:
        case 5:
        case 1:
        case 6:
        case 9:
        case 10:
        case 13:
        case 11:
        case 12:
            if (unk_0xB28FEB6F176CE84A())
            {
                return SYSTEM::TO_FLOAT(iParam1);
            }
            else
            {
                return func_557(SYSTEM::TO_FLOAT(iParam1));
            }
            break;
        
        case 2:
            if (unk_0xB28FEB6F176CE84A())
            {
                return SYSTEM::TO_FLOAT(iParam1);
            }
            else
            {
                return func_556(SYSTEM::TO_FLOAT(iParam1));
            }
            break;
    }
    return SYSTEM::TO_FLOAT(iParam1);
}

float func_556(float fParam0)//Position - 0x15EFA
{
    return (fParam0 / 1.609344f);
}

float func_557(float fParam0)//Position - 0x15F0A
{
    return (fParam0 / 0.3048f);
}

int func_558(int iParam0)//Position - 0x15F1A
{
    switch (iParam0)
    {
        case 0:
        case 2:
        case 3:
        case 5:
        case 4:
        case 1:
        case 6:
        case 9:
        case 10:
        case 13:
        case 11:
        case 12:
            return 1;
        
        default:
    }
    return 0;
}

int func_559(int iParam0)//Position - 0x15F76
{
    int iVar0;
    
    iVar0 = func_562(iParam0);
    if (iVar0 == -1)
    {
        func_560(iParam0, 1);
        return 0;
    }
    Global_15234E[iVar0 /*5*/].f_4 = 1;
    return Global_15234E[iVar0 /*5*/].f_2;
}

void func_560(int iParam0, bool bParam1)//Position - 0x15FAC
{
    if (!func_13(iParam0, 0, 1))
    {
        return;
    }
    if (func_562(iParam0) != -1)
    {
        return;
    }
    if (Global_1523F1)
    {
        if (iParam0 == Global_1523F1.f_1)
        {
            return;
        }
    }
    if (func_561(iParam0))
    {
        return;
    }
    if (Global_152417 >= 32)
    {
        return;
    }
    Global_1523F6[Global_152417] = iParam0;
    Global_152417++;
    if (bParam1)
    {
    }
}

int func_561(int iParam0)//Position - 0x16018
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < Global_152417)
    {
        if (Global_1523F6[iVar0] == iParam0)
        {
            return 1;
        }
        iVar0++;
    }
    return 0;
}

int func_562(int iParam0)//Position - 0x1604A
{
    int iVar0;
    
    if (!func_13(iParam0, 0, 1))
    {
        return -1;
    }
    if (Global_1523EF == 0)
    {
        return -1;
    }
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < Global_1523EF)
    {
        if (Global_15234E[iVar0 /*5*/].f_1 == iParam0)
        {
            if (unk_0xA78F5AF1E2C5FDAB(Global_15234E[iVar0 /*5*/].f_2) && unk_0x7E9D01EC258BE530(Global_15234E[iVar0 /*5*/].f_2))
            {
                return iVar0;
            }
            func_563(iVar0);
            return -1;
        }
        iVar0++;
    }
    return -1;
}

void func_563(int iParam0)//Position - 0x160C9
{
    char cVar0[64];
    char cVar1[64];
    int iVar2;
    int iVar3;
    
    if (iParam0 >= Global_1523EF)
    {
        return;
    }
    if (unk_0xA78F5AF1E2C5FDAB(Global_15234E[iParam0 /*5*/].f_2))
    {
        StringCopy(&cVar0, "CHAR_DEFAULT", 64);
        if (Global_15234E[iParam0 /*5*/].f_2 != 0)
        {
            StringCopy(&cVar1, unk_0x5C3CC258CDC18660(Global_15234E[iParam0 /*5*/].f_2), 64);
            unk_0x41E6991C564E55CD(&cVar1, &cVar1, &cVar0, &cVar0);
        }
        unk_0xF0502EB385D5B3C4(Global_15234E[iParam0 /*5*/].f_2);
    }
    iVar2 = iParam0;
    iVar3 = iVar2 + 1;
    while (iVar3 < Global_1523EF)
    {
        Global_15234E[iVar2 /*5*/] = { Global_15234E[iVar3 /*5*/] };
        iVar2++;
        iVar3++;
    }
    func_564(&(Global_15234E[iVar2 /*5*/]));
    Global_1523EF = (Global_1523EF - 1);
}

void func_564(var uParam0)//Position - 0x1617F
{
    *uParam0 = 0;
    uParam0->f_1 = func_96();
    uParam0->f_2 = 0;
    uParam0->f_4 = 0;
    if (unk_0x393E9918BC37548A())
    {
        uParam0->f_3 = unk_0x169A8AC9F93C2727();
    }
}

struct<4> func_565(int iParam0)//Position - 0x161AC
{
    char cVar0[32];
    
    if (func_13(iParam0, 0, 1))
    {
        Global_264397 = { func_135(iParam0) };
        if (unk_0x77BA37DB22C66465())
        {
            if (func_525(Global_264397))
            {
                if (!unk_0xCA3736B46FE270BB(&Global_264397))
                {
                    return cVar0;
                }
            }
        }
        else if (!unk_0x7B3E18C7DAC336C3(0))
        {
            return cVar0;
        }
        if (func_569(&Global_264397))
        {
            Global_264351 = { func_567(iParam0) };
            func_566(&Global_264351, &cVar0);
        }
    }
    return cVar0;
}

void func_566(var uParam0, char* sParam1)//Position - 0x1622D
{
    unk_0x1E527CF40C25B139(uParam0, 35, sParam1);
}

struct<35> func_567(int iParam0)//Position - 0x1623F
{
    struct<13> Var0;
    struct<35> Var1;
    
    if (func_568(iParam0))
    {
        return Global_140889[unk_0x7C7787D2D7139A85() /*35*/];
    }
    Var0 = { func_135(iParam0) };
    unk_0x4065D3D900AB253F(&Var1, 35, &Var0);
    return Var1;
}

int func_568(int iParam0)//Position - 0x1627B
{
    if (iParam0 == unk_0x7C7787D2D7139A85())
    {
        return 1;
    }
    return 0;
}

int func_569(var uParam0)//Position - 0x16291
{
    if (unk_0xE7017554E7BCFB0E())
    {
        if (unk_0xFF6895C150414C31() && unk_0xF10E9BDC0C546560(uParam0))
        {
            return 1;
        }
    }
    return 0;
}

int func_570(int iParam0, int iParam1)//Position - 0x162B7
{
    if (iParam1 == 26)
    {
        if ((func_7(iParam0) || func_572(iParam0)) || func_6(iParam0))
        {
            return 0;
        }
    }
    if (!func_571(iParam0))
    {
        return 0;
    }
    if ((!func_579(iParam0) && Global_24FD09[iParam0 /*421*/].f_EC == -1) && !func_578(iParam0))
    {
        return 0;
    }
    return 1;
}

bool func_571(int iParam0)//Position - 0x16326
{
    return unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_8E, 22);
}

int func_572(int iParam0)//Position - 0x1633F
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        return (unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_1, 10) || unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_1, 9));
    }
    return 0;
}

int func_573(int iParam0)//Position - 0x1637D
{
    int iVar0;
    
    if (iParam0 == func_96())
    {
        return 0;
    }
    if (func_94(iParam0, 0))
    {
        return 0;
    }
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_1844AE[iVar0 /*871*/].f_8E, 2))
        {
            return 0;
        }
    }
    return 1;
}

int func_574()//Position - 0x163C2
{
    switch (func_240(unk_0x7C7787D2D7139A85()))
    {
        case 179:
        case 180:
        case 182:
        case 183:
        case 184:
        case 185:
        case 186:
        case 189:
        case 190:
        case 191:
        case 192:
        case 195:
        case 197:
        case 198:
        case 200:
        case 201:
        case 202:
        case 203:
        case 204:
        case 206:
        case 207:
        case 208:
        case 209:
        case 211:
            return 1;
        
        default:
    }
    switch (func_299(unk_0x7C7787D2D7139A85()))
    {
        case 131:
        case 140:
        case 138:
        case 146:
            return 1;
            break;
    }
    if (func_100(unk_0x7C7787D2D7139A85()))
    {
        switch (func_240(unk_0x7C7787D2D7139A85()))
        {
            case 148:
            case 151:
            case 152:
            case 153:
            case 157:
            case 159:
            case 162:
            case 164:
            case 142:
                return 1;
                break;
            }
    }
    if (func_544(unk_0x7C7787D2D7139A85(), 236))
    {
        return 1;
    }
    return 0;
}

void func_575(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x164FE
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    while (iVar0 < 32)
    {
        if (func_13(unk_0x0C98179F08C6DA4F(iVar0), 0, 1))
        {
            iVar1 = unk_0x0C98179F08C6DA4F(iVar0);
            if (!func_94(iVar1, 0))
            {
                if ((func_579(iVar1) || Global_24FD09[iVar1 /*421*/].f_EC != -1) || func_578(iVar1))
                {
                    if (func_576(iVar1, iParam1, 0))
                    {
                        (*iParam0)[iVar0] = *iParam2;
                        *iParam2++;
                        *iParam3++;
                    }
                }
            }
        }
        iVar0++;
    }
}

int func_576(int iParam0, int iParam1, bool bParam2)//Position - 0x16588
{
    if (iParam1 != func_96())
    {
        if (!bParam2)
        {
            if (func_577(iParam0, iParam1))
            {
                return 0;
            }
        }
        if (Global_18DB1B[iParam0 /*614*/].f_B != func_96())
        {
            return iParam1 == Global_18DB1B[iParam0 /*614*/].f_B;
        }
    }
    return 0;
}

int func_577(int iParam0, int iParam1)//Position - 0x165D2
{
    if (iParam1 != func_96())
    {
        if (iParam0 != func_96())
        {
            if (Global_18DB1B[iParam0 /*614*/].f_B != func_96())
            {
                if (Global_18DB1B[iParam0 /*614*/].f_B == iParam0)
                {
                    return iParam1 == iParam0;
                }
            }
        }
    }
    return 0;
}

bool func_578(int iParam0)//Position - 0x16617
{
    return Global_1844AE[iParam0 /*871*/].f_C4 != 0;
}

int func_579(int iParam0)//Position - 0x1662C
{
    if (func_13(iParam0, 0, 1))
    {
        if (func_13(unk_0x7C7787D2D7139A85(), 0, 1))
        {
            if (unk_0x645A04F62406C561(iParam0, unk_0x7C7787D2D7139A85()) || func_240(iParam0) == 233)
            {
                return 1;
            }
        }
    }
    return 0;
}

void func_580(int iParam0, int iParam1, int iParam2)//Position - 0x1666D
{
    if (unk_0x08EA887200715AD9(*iParam0))
    {
        unk_0xF1BC72CEC2746995(*iParam0, "SET_DATA_SLOT_EMPTY");
        unk_0xD02F24F3E2DB263A(iParam1);
        unk_0xD02F24F3E2DB263A(iParam2);
        unk_0xAC7C2DE2DDC7AF03();
    }
}

void func_581(bool bParam0)//Position - 0x1669B
{
    if (bParam0)
    {
        if (Global_14F539.f_2 == 0)
        {
            Global_14F539.f_2 = 1;
        }
    }
    else if (Global_14F539.f_2 == 1)
    {
        Global_14F539.f_2 = 0;
    }
}

void func_582()//Position - 0x166CD
{
    if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_11EC, 1))
    {
        if (func_172())
        {
            func_188();
        }
    }
}

int func_583()//Position - 0x166EF
{
    if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_11EC, 0) && func_172())
    {
        return 1;
    }
    if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_11EC, 1) && func_172())
    {
        return 1;
    }
    return 0;
}

int func_584()//Position - 0x16730
{
    if (func_172())
    {
        if (func_46(Global_2531AD.f_A94[0 /*80*/].f_1))
        {
            return 1;
        }
    }
    return 0;
}

int func_585()//Position - 0x16757
{
    if (func_172())
    {
        if (func_59(Global_2531AD.f_A94[0 /*80*/].f_1))
        {
            return 1;
        }
    }
    return 0;
}

void func_586(int iParam0)//Position - 0x1677E
{
    if (Global_14F539.f_1 != Global_14F539)
    {
        Global_14F539.f_1 = Global_14F539;
    }
    if (Global_14F539 != iParam0)
    {
        Global_14F539 = iParam0;
    }
}

int func_587(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x167AC
{
    struct<4> Var0;
    char* sVar1;
    bool bVar2;
    bool bVar3;
    float fVar4;
    int iVar5;
    char* sVar6;
    
    StringCopy(&Var0, "", 16);
    bVar3 = func_631(iParam1);
    if (iParam1 == 20)
    {
        bVar2 = true;
    }
    fVar4 = func_630();
    iVar5 = -1;
    if (iParam1 == 26 || iParam1 == 27)
    {
        if (func_629())
        {
            if (func_628() > 0 && Global_180528)
            {
                unk_0x1C0FEAA5C83F343B();
                unk_0xF3F61F23853206CB(fVar4);
                unk_0x0AF55029F939BA65(18);
                if (unk_0x0945988C02AF3025())
                {
                    unk_0x3D0BC3CE4D5E1DD0();
                }
                unk_0x0AF55029F939BA65(10);
            }
        }
    }
    if (!bParam5)
    {
        if (!func_617())
        {
            func_616(iParam0, uParam2, 1);
            return 0;
        }
    }
    if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_11EF, 26))
    {
        func_616(iParam0, uParam2, 1);
        return 0;
    }
    if (!func_38(&(uParam2->f_13)))
    {
        if (func_628() == 1)
        {
            func_615(bVar3, iParam0, 0);
            func_2(&(uParam2->f_13), 0, 0);
            func_616(iParam0, uParam2, 0);
            unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_11F0), 5);
        }
    }
    if (func_38(&(uParam2->f_13)) || bParam5)
    {
        if (unk_0x0945988C02AF3025())
        {
            unk_0x3D0BC3CE4D5E1DD0();
        }
        unk_0x0AF55029F939BA65(10);
        if (func_1(&(uParam2->f_13), 10000, 0) || (func_628() == 0 && !bParam5))
        {
            func_616(iParam0, uParam2, 1);
            return 0;
        }
        else
        {
            if (bVar2 == 0)
            {
                func_614();
                if (iParam1 == 26 || iParam1 == 27)
                {
                    unk_0x1C0FEAA5C83F343B();
                }
                unk_0x0AF55029F939BA65(18);
            }
            if (!unk_0xA2BC31158C8CEFD2(uParam2->f_21, 0))
            {
                if (bVar2 == 0)
                {
                    func_614();
                    if (iParam1 == 26 || iParam1 == 27)
                    {
                        unk_0x1C0FEAA5C83F343B();
                    }
                    unk_0x0AF55029F939BA65(18);
                }
                unk_0xF3F61F23853206CB(fVar4);
                if (func_615(bVar3, iParam0, 0))
                {
                    func_580(iParam0, 0, 0);
                    sVar1 = func_612(iParam1, &(Global_440000.f_25AFF), bParam4);
                    Var0 = { func_610(iParam1) };
                    if (bParam4)
                    {
                        func_607(iParam0, sVar1, "", 0, -1, -1, 1);
                    }
                    else if (iParam1 == 26)
                    {
                        func_601(iParam0, func_604(uParam2), func_602(uParam2), -1);
                    }
                    else if (iParam1 == 27)
                    {
                        sVar6 = func_595(uParam2);
                        if (!unk_0x9591DE0F00127F2A(sParam6))
                        {
                            sVar6 = sParam6;
                        }
                        func_593(iParam0, sVar6, func_594(), -1);
                    }
                    else if (func_539())
                    {
                        uParam2->f_22 = Global_180527;
                        func_607(iParam0, sVar1, &Var0, 1, -1, Global_180527, 1);
                    }
                    else if (bVar2)
                    {
                        iVar5 = func_588(iParam1);
                        uParam2->f_22 = Global_180527;
                        func_607(iParam0, sVar1, "", 0, iVar5, Global_180527, 1);
                    }
                    else
                    {
                        iVar5 = func_588(iParam1);
                        func_607(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
                    }
                    unk_0xA1E7A40E1F56E511(&(uParam2->f_21), 0);
                }
            }
            if (unk_0xA2BC31158C8CEFD2(uParam2->f_21, 0))
            {
                Global_180526 = uParam3;
                Global_180525 = 1;
                unk_0xF3F61F23853206CB(fVar4);
                if (bVar2)
                {
                    if (uParam2->f_22 != Global_180527)
                    {
                        unk_0x3B76114EC84D5812(&(uParam2->f_21), 0);
                    }
                }
                return 1;
            }
        }
    }
    return 0;
}

int func_588(int iParam0)//Position - 0x16A8B
{
    int iVar0;
    
    iVar0 = -1;
    if (func_592())
    {
        iVar0 = 2;
    }
    switch (iParam0)
    {
        case 39:
            iVar0 = 22;
            break;
        
        case 0:
        case 30:
        case 29:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
            iVar0 = 3;
            break;
        
        case 2:
            iVar0 = 3;
            break;
        
        case 1:
            iVar0 = 6;
            break;
        
        case 3:
            iVar0 = 5;
            break;
        
        case 25:
            iVar0 = 21;
            break;
        
        case 4:
        case 5:
        case 6:
        case 8:
        case 9:
        case 10:
        case 11:
            iVar0 = 4;
            break;
        
        case 7:
            iVar0 = 10;
            break;
        
        case 12:
        case 13:
        case 14:
        case 17:
            iVar0 = 2;
            break;
        
        case 15:
            iVar0 = 17;
            break;
        
        case 16:
            iVar0 = 18;
            break;
        
        case 18:
            if (func_591(unk_0x7C7787D2D7139A85()))
            {
                iVar0 = 20;
            }
            if (func_590(unk_0x7C7787D2D7139A85()))
            {
                iVar0 = 19;
            }
            break;
    }
    if (func_589(unk_0x7C7787D2D7139A85()))
    {
        iVar0 = 2;
    }
    if (func_241())
    {
        iVar0 = 20;
    }
    return iVar0;
}

bool func_589(int iParam0)//Position - 0x16BE4
{
    return Global_24FD09[iParam0 /*421*/].f_73 == 4;
}

bool func_590(int iParam0)//Position - 0x16BF9
{
    return Global_24FD09[iParam0 /*421*/].f_73 == 7;
}

bool func_591(int iParam0)//Position - 0x16C0E
{
    return Global_24FD09[iParam0 /*421*/].f_73 == 2;
}

bool func_592()//Position - 0x16C23
{
    return Global_440000.f_1 == 0;
}

void func_593(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x16C33
{
    if (unk_0x08EA887200715AD9(*iParam0))
    {
        unk_0xF1BC72CEC2746995(*iParam0, "SET_TITLE");
        if (unk_0x9591DE0F00127F2A(sParam2))
        {
            func_536(sParam1);
        }
        else
        {
            unk_0x759AC38FBC6CCA9E("FM_AE_BRACKT");
            unk_0x0AC9F8E1AFCEC860(sParam1);
            unk_0x0AC9F8E1AFCEC860(sParam2);
            unk_0x81019766FF500CCA();
        }
        func_536("");
        if (iParam3 != -1)
        {
            unk_0xD02F24F3E2DB263A(iParam3);
        }
        unk_0xAC7C2DE2DDC7AF03();
    }
}

char* func_594()//Position - 0x16C92
{
    switch (func_240(unk_0x7C7787D2D7139A85()))
    {
        case 163:
            return "BD_SORT_1";
            break;
        
        case 160:
            return "BD_SORT_4";
            break;
        
        case 154:
            return "BD_SORT_3";
            break;
        
        case 155:
            return "BD_SORT_3";
            break;
    }
    return "";
}

char* func_595(var uParam0)//Position - 0x16CEA
{
    switch (uParam0->f_70)
    {
        case 0:
            return "GR_DPD_E";
            break;
        
        case 1:
            return "GR_DPD_F";
            break;
        
        case 2:
            return "GR_DPD_S";
            break;
    }
    switch (uParam0->f_6E)
    {
        case 0:
            return "GR_DPD_A";
            break;
        
        case 1:
            return "GR_DPD_B";
            break;
        
        case 2:
            return "GR_DPD_C";
            break;
        
        case 3:
            return "GR_DPD_D";
            break;
    }
    switch (func_240(unk_0x7C7787D2D7139A85()))
    {
        case 233:
            return "H2_DPAD_SET";
            break;
        
        case 180:
            return "GB_BIGUNLOAD_T";
            break;
        
        case 182:
            return "DEAL_DEALN";
            break;
        
        case 194:
            return "PI_BIK_13_0";
            break;
        
        case 189:
            return "PI_BIK_4_1";
            break;
        
        case 193:
            return "PI_BIK_13_1";
            break;
        
        case 205:
            return "PI_BIK_13_3";
            break;
        
        case 186:
            return "CELL_BIKER_CK";
            break;
        
        case 207:
            return "DV_SH_TITLE";
            break;
        
        case 208:
            return "BA_SH_TITLE";
            break;
        
        case 209:
            return "SHU_SH_TITLE";
            break;
        
        case 210:
            return "PI_BIK_13_4";
            break;
        
        case 183:
            return "CELL_BIKER_RESC";
            break;
        
        case 199:
            return "CELL_BIKER_SEAR";
            break;
        
        case 201:
            return "CELL_BIKER_STAN";
            break;
        
        case 142:
            return "PIM_MAGM210";
            break;
        
        case 163:
            return "PIM_MAGM608";
            break;
        
        case 160:
            return "PIM_MAGM604";
            break;
        
        case 154:
            return "PIM_MAGM602";
            break;
        
        case 155:
            return "PIM_MAGM603";
            break;
        
        case 148:
            if (func_597())
            {
                return "LBD_BKVBK";
            }
            return "PIM_MAGM201";
            break;
        
        case 151:
            if (func_276(1))
            {
                return "GB_DPAD_BMFD";
            }
            return "PIM_MAGM202";
            break;
        
        case 152:
            return "PIM_MAGM204";
            break;
        
        case 153:
            if (func_276(1))
            {
                return "PI_BIK_3_2";
            }
            return "PIM_MAGM601";
            break;
        
        case 157:
            return "PIM_MAGM207";
            break;
        
        case 159:
            return "PIM_MAGM206";
            break;
        
        case 162:
            return "PIM_MAGM607";
            break;
        
        case 164:
            return "PIM_MAGM212";
            break;
        
        case 166:
            return "GB_DPAD_HEAD";
        
        case 167:
            return "GB_DPAD_BUY";
        
        case 168:
            return "GB_DPAD_SELL";
        
        case 169:
            return "GB_DPAD_DEF";
        
        case 170:
            return "GB_DPAD_AIR";
        
        case 171:
            return "GB_DPAD_CASH";
        
        case 172:
            return "GB_DPAD_SAL";
        
        case 173:
            return "GB_DPAD_FRA";
        
        case 178:
            return "VEX_TITLEa";
        
        case 188:
            return "VEX_TITLEb";
        
        case 218:
            return "FRT_MODE";
        
        case 217:
            return "FRT_TRNS";
        
        case 214:
            return "MODE_PLW";
        
        case 215:
            return "MODE_FUL";
        
        case 216:
            return "MODE_AA";
        
        case 219:
            return "MODE_VEL";
        
        case 220:
            return "MODE_RMP";
        
        case 221:
            return "MODE_STK";
        
        case 225:
            return "GR_TITLEL";
        
        case 226:
            return "GRS_TITLEL";
        
        case 227:
            return "GRD_TITLEL";
        
        case 195:
            return "GB_STEAL_T";
        
        case 198:
            return "SC_MENU_TITLE";
        
        case 190:
            return "GB_DPAD_BSEL";
        
        case 191:
            return "GB_DPAD_BDEF";
        
        case 185:
            return "GB_DPAD_GFH";
        
        case 197:
            return "GB_DPAD_JB";
        
        case 179:
            return "CELL_JOUST";
        
        case 200:
            return "CAG_BLIP";
        
        case 192:
            if (func_596(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_B.f_B5))
            {
                return "GB_DPAD_BSET";
            }
            return "GB_DPAD_BBUY";
            break;
    }
    return "";
}

int func_596(int iParam0)//Position - 0x17116
{
    switch (iParam0)
    {
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
            return 1;
        
        default:
    }
    return 0;
}

bool func_597()//Position - 0x17148
{
    return (func_600() && func_598(func_599()));
}

int func_598(int iParam0)//Position - 0x17161
{
    return func_185(iParam0, 1);
}

int func_599()//Position - 0x17170
{
    return Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_B.f_23;
}

bool func_600()//Position - 0x17187
{
    return Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/] == 148;
}

void func_601(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x1719D
{
    if (unk_0x08EA887200715AD9(*iParam0))
    {
        unk_0xF1BC72CEC2746995(*iParam0, "SET_TITLE");
        if (unk_0x9591DE0F00127F2A(sParam2))
        {
            func_536(sParam1);
        }
        else if (func_299(unk_0x7C7787D2D7139A85()) == 133)
        {
            unk_0x759AC38FBC6CCA9E("FM_AE_BRACKT_C");
            unk_0x0AC9F8E1AFCEC860(sParam1);
            unk_0x0AC9F8E1AFCEC860(sParam2);
            unk_0x81019766FF500CCA();
        }
        else
        {
            unk_0x759AC38FBC6CCA9E("FM_AE_BRACKT");
            unk_0x0AC9F8E1AFCEC860(sParam1);
            unk_0x0AC9F8E1AFCEC860(sParam2);
            unk_0x81019766FF500CCA();
        }
        func_536("");
        if (iParam3 != -1)
        {
            unk_0xD02F24F3E2DB263A(iParam3);
        }
        unk_0xAC7C2DE2DDC7AF03();
    }
}

char* func_602(var uParam0)//Position - 0x17224
{
    int iVar0;
    
    iVar0 = func_299(unk_0x7C7787D2D7139A85());
    if (func_603())
    {
        if (uParam0->f_67 != -1)
        {
            iVar0 = uParam0->f_67;
        }
    }
    switch (iVar0)
    {
        case 131:
            return "";
        
        case 132:
            return "FM_AE_SORT_5";
        
        case 133:
            switch (func_298())
            {
                case 0:
                    return "FM_AE_SORT_2";
                
                case 1:
                    return "FM_AE_SORT_2";
                
                case 2:
                    return "FM_AE_SORT_3";
                
                case 3:
                    return "FM_AE_SORT_2";
                
                case 4:
                    return "FM_AE_SORT_2";
                
                case 5:
                    return "FM_AE_SORT_2";
                
                case 6:
                    return "FM_AE_SORT_2";
                
                case 7:
                    return "FM_AE_SORT_13";
                
                case 8:
                    return "FM_AE_SORT_4";
                
                case 9:
                    return "FM_AE_SORT_2";
                
                case 10:
                    return "FM_AE_SORT_2";
                
                case 11:
                    return "FM_AE_SORT_2";
                
                case 12:
                    return "FM_AE_SORT_2";
                
                case 13:
                    return "FM_AE_SORT_2";
                
                case 14:
                    return "FM_AE_SORT_5";
                
                case 15:
                    return "FM_AE_SORT_9";
                
                case 16:
                    return "FM_AE_SORT_9";
                
                case 17:
                    return "FM_AE_SORT_9";
                
                case 18:
                    return "FM_AE_SORT_9";
                
                default:
            }
            break;
        
        case 136:
            return "";
        
        case 138:
            return "";
        
        case 139:
            return "FM_AE_SORT_10";
        
        case 140:
            return "";
        
        case 141:
            return "FM_AE_SORT_5";
        
        case 144:
            return "FM_AE_SORT_1";
        
        case 129:
            return "FM_AE_SORT_9";
    }
    return "";
}

bool func_603()//Position - 0x173CF
{
    return Global_18442F;
}

char* func_604(var uParam0)//Position - 0x173DB
{
    int iVar0;
    
    iVar0 = func_299(unk_0x7C7787D2D7139A85());
    if (func_603())
    {
        if (uParam0->f_67 != -1)
        {
            iVar0 = uParam0->f_67;
        }
    }
    switch (iVar0)
    {
        case 131:
            return "PIM_TA9";
        
        case 132:
            if (func_606() == 0)
            {
                return "CPC_TILEL";
            }
            else if (func_606() == 1)
            {
                return "CPC_TILELA";
            }
            return "PIM_TA0";
            break;
        
        case 133:
            switch (func_298())
            {
                case 0:
                    return "AMCH_0SLC";
                
                case 1:
                    return "AMCH_1SLC";
                
                case 2:
                    return "AMCH_2SLC";
                
                case 3:
                    return "AMCH_3SLC";
                
                case 4:
                    return "AMCH_4SLC";
                
                case 5:
                    return "AMCH_5SLC";
                
                case 6:
                    return "AMCH_6SLC";
                
                case 7:
                    return "AMCH_7SLC";
                
                case 8:
                    return "AMCH_8SLC";
                
                case 9:
                    return "AMCH_12SLC";
                
                case 10:
                    return "AMCH_13SLC";
                
                case 11:
                    return "AMCH_15SLC";
                
                case 12:
                    return "AMCH_16SLC";
                
                case 13:
                    return "AMCH_23SLC";
                
                case 14:
                    return "AMCH_9SLC";
                
                case 15:
                    return "AMCH_19SLC";
                
                case 16:
                    return "AMCH_20SLC";
                
                case 17:
                    return "AMCH_21SLC";
                
                case 18:
                    return "AMCH_22SLC";
                
                default:
            }
            break;
        
        case 136:
            return "PIM_TA10";
        
        case 138:
            return "PIM_TA4";
        
        case 139:
            return "PIM_TA5";
        
        case 140:
            return "PIM_TA3";
        
        case 141:
            return "PIM_TA8";
        
        case 144:
            return "PIM_TA2";
        
        case 129:
            if (func_605() == 1)
            {
                return "FM_AE_TITL_12";
            }
            else
            {
                return "PIM_TA7";
            }
            break;
        
        case 146:
            return "PIM_TA6";
    }
    return "";
}

int func_605()//Position - 0x175CE
{
    return Global_26A0A9.f_12D6;
}

int func_606()//Position - 0x175DD
{
    if (func_299(unk_0x7C7787D2D7139A85()) == 132)
    {
        return Global_26A0A9.f_12D1;
    }
    return -1;
}

void func_607(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x17600
{
    int iVar0;
    int iVar1;
    
    if (unk_0x08EA887200715AD9(*iParam0))
    {
        unk_0xF1BC72CEC2746995(*iParam0, "SET_TITLE");
        if (bParam3)
        {
            func_547(sParam1);
        }
        else if (iParam5 != -1)
        {
            unk_0x759AC38FBC6CCA9E(sParam1);
            unk_0x6A8B3CC08A759F44(iParam5);
            unk_0x81019766FF500CCA();
        }
        else
        {
            func_536(sParam1);
        }
        if (func_629() && iParam6)
        {
            if (func_609())
            {
                iVar0 = 2;
                iVar1 = 2;
            }
            else
            {
                iVar0 = 1;
                iVar1 = 2;
            }
            unk_0x759AC38FBC6CCA9E("LBD_DPD_CNT");
            unk_0x6A8B3CC08A759F44(iVar0);
            unk_0x6A8B3CC08A759F44(iVar1);
            unk_0x81019766FF500CCA();
        }
        else
        {
            func_536(sParam2);
        }
        if (iParam4 != -1)
        {
            unk_0xD02F24F3E2DB263A(iParam4);
            if (func_608(unk_0x7C7787D2D7139A85()))
            {
                unk_0xD02F24F3E2DB263A(166);
            }
            else if (func_56())
            {
                unk_0xD02F24F3E2DB263A(220);
            }
        }
        unk_0xAC7C2DE2DDC7AF03();
    }
}

int func_608(int iParam0)//Position - 0x176C1
{
    if (func_591(iParam0) || func_590(iParam0))
    {
        return 1;
    }
    return 0;
}

bool func_609()//Position - 0x176E3
{
    return Global_180528;
}

struct<4> func_610(int iParam0)//Position - 0x176EF
{
    struct<4> Var0;
    
    StringCopy(&Var0, "", 16);
    if (func_611(unk_0x7C7787D2D7139A85()) || func_589(unk_0x7C7787D2D7139A85()))
    {
        return Var0;
    }
    switch (iParam0)
    {
        case 12:
        case 13:
        case 14:
        case 17:
        case 15:
        case 16:
        case 18:
            StringCopy(&Var0, "LBD_DIF_", 16);
            StringIntConCat(&Var0, Global_440000.f_28, 16);
            break;
    }
    if (func_539() && unk_0xA51CBC95AC3A4B14())
    {
        StringCopy(&Var0, "LBD_DIF_", 16);
        StringIntConCat(&Var0, Global_440000.f_28, 16);
    }
    return Var0;
}

bool func_611(int iParam0)//Position - 0x1778A
{
    return Global_24FD09[iParam0 /*421*/].f_73 == 5;
}

char* func_612(int iParam0, char* sParam1, bool bParam2)//Position - 0x1779F
{
    var uVar0;
    
    if (iParam0 == 20 && (!func_539() || unk_0x9591DE0F00127F2A(sParam1)))
    {
        uVar0 = func_613();
        return uVar0;
    }
    else if (bParam2)
    {
        return "HUD_LBD_IMP";
    }
    else if (iParam0 == 24)
    {
        if (Global_180616 == 0)
        {
            Global_180616 = 1;
        }
        return "HUD_LBD_OVR";
    }
    else if (!unk_0x9591DE0F00127F2A(sParam1))
    {
        if (Global_180616 == 1)
        {
            Global_180616 = 0;
        }
        return sParam1;
    }
    else
    {
        if (Global_180616 == 0)
        {
            Global_180616 = 1;
        }
        switch (iParam0)
        {
            case 0:
            case 30:
                return "HUD_LBD_DM";
                break;
            
            case 1:
                return "HUD_LBD_TDM";
                break;
            
            case 5:
                return "HUD_LBD_GRCE";
                break;
            
            case 4:
            case 9:
            case 10:
            case 6:
            case 25:
            case 11:
                return "HUD_LBD_RCE";
                break;
            
            case 7:
                return "HUD_LBD_BRCE";
                break;
            
            case 18:
            case 14:
            case 17:
            case 15:
            case 13:
            case 12:
            case 16:
            case 19:
                return "HUD_TITLEMC";
                break;
            
            case 3:
                return "HUD_LBD_HRD";
                break;
            
            case 21:
                return "HUD_LBD_SHOO";
                break;
            }
    }
    return sParam1;
}

char* func_613()//Position - 0x17903
{
    if (unk_0xB60C981253946EC0())
    {
        return "HUD_LBD_FMF";
    }
    if (unk_0x28B56AB7204D753B())
    {
        return "HUD_LBD_FMC";
    }
    if (unk_0x2D635A9E46DA733C())
    {
        return "HUD_LBD_FMS";
    }
    if (unk_0xF74FDCB441C8F4C2())
    {
        return "HUD_LBD_FMI";
    }
    return "HUD_LBD_FMP";
}

void func_614()//Position - 0x17947
{
    Global_A54C = 1;
}

bool func_615(bool bParam0, int iParam1, bool bParam2)//Position - 0x17953
{
    if (bParam0)
    {
        *iParam1 = unk_0x1FAFE9BB9D8960C1("mp_mm_card_freemode");
    }
    else if (bParam2)
    {
        *iParam1 = unk_0x1FAFE9BB9D8960C1("MP_SPECTATOR_CARD");
    }
    else
    {
        *iParam1 = unk_0x1FAFE9BB9D8960C1("mp_matchmaking_card");
    }
    return unk_0x08EA887200715AD9(*iParam1);
}

void func_616(int iParam0, var uParam1, bool bParam2)//Position - 0x17993
{
    unk_0x3B76114EC84D5812(&(uParam1->f_21), 7);
    Global_180526 = 0;
    func_529();
    Global_180525 = 0;
    uParam1->f_1B = 0;
    if (bParam2)
    {
        if (func_38(&(uParam1->f_13)))
        {
            func_37(&(uParam1->f_13));
            unk_0x3B76114EC84D5812(&(Global_26A0A9.f_11F0), 5);
        }
    }
    if (unk_0x08EA887200715AD9(*iParam0))
    {
        unk_0x749CA887CB0AFEC9(iParam0);
    }
    if (unk_0xA2BC31158C8CEFD2(uParam1->f_21, 0))
    {
        unk_0x3B76114EC84D5812(&(uParam1->f_21), 0);
    }
    unk_0xF3F61F23853206CB(0f);
}

int func_617()//Position - 0x17A05
{
    if (func_627())
    {
        return 0;
    }
    if (func_510())
    {
        return 0;
    }
    if (!func_625())
    {
        return 0;
    }
    if (!func_498())
    {
        return 0;
    }
    if (func_624(8, -1))
    {
        return 0;
    }
    if (func_628() == 2)
    {
        return 0;
    }
    if (Global_26A0A9.f_11BF)
    {
        return 0;
    }
    if (func_295())
    {
        return 0;
    }
    else if (!func_331(unk_0x7C7787D2D7139A85(), 1, 0) && Global_1403E4[0 /*4*/] > 0)
    {
        return 0;
    }
    if (((func_623(1) || func_621(1)) || Global_56C3.f_7C) || Global_56C3)
    {
        return 0;
    }
    if (unk_0xCD97B9861557C025())
    {
        return 0;
    }
    if (func_620() && Global_19DF71 == 2)
    {
        return 0;
    }
    if (func_92(unk_0x7C7787D2D7139A85()) && !func_620())
    {
        return 0;
    }
    if (Global_195E58)
    {
        return 0;
    }
    if (Global_195E5D)
    {
        return 0;
    }
    if (func_619(0))
    {
        return 0;
    }
    if (unk_0xA2BC31158C8CEFD2(Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_111.f_18, 4))
    {
        return 0;
    }
    if (Global_14DA20)
    {
        return 0;
    }
    if ((Global_19C52A.f_2C1.f_5 || Global_19D025.f_2C1.f_5) || Global_19C16D.f_2C1.f_5)
    {
        return 0;
    }
    if ((Global_19E336.f_2C7.f_5 || Global_19E336.f_2DB.f_2C7.f_5) || Global_19E336.f_5BD.f_2C7.f_5)
    {
        return 0;
    }
    if (func_618(unk_0x7C7787D2D7139A85()))
    {
        return 0;
    }
    if ((Global_14DA43 || Global_14DA44) || Global_14DA45)
    {
        return 0;
    }
    return 1;
}

bool func_618(int iParam0)//Position - 0x17BD0
{
    if (iParam0 == func_96())
    {
        return 0;
    }
    return unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_135.f_4, 6);
}

bool func_619(int iParam0)//Position - 0x17BF8
{
    return unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_1322.f_2B, iParam0);
}

bool func_620()//Position - 0x17C0F
{
    return (unk_0xA2BC31158C8CEFD2(Global_440000.f_1E, 12) && unk_0xA2BC31158C8CEFD2(Global_19DF72, 0));
}

int func_621(bool bParam0)//Position - 0x17C31
{
    if (unk_0x8F0856319BE615A3())
    {
        if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
        {
            if (func_622(unk_0x0FA8183DAD2B3203()))
            {
                if (unk_0x3772881BFFE6C3F8(0, 25) || unk_0x3772881BFFE6C3F8(0, 68))
                {
                    return 0;
                }
            }
        }
    }
    if (Global_56C3.f_82)
    {
        return 0;
    }
    if (unk_0x3772881BFFE6C3F8(0, 19) || (!bParam0 && unk_0x0B6782DED1C4B3B1(0, 19)))
    {
        return 1;
    }
    if (unk_0xE434AB6E3DE89861())
    {
        if (((unk_0x3772881BFFE6C3F8(0, 166) || unk_0x3772881BFFE6C3F8(0, 167)) || unk_0x3772881BFFE6C3F8(0, 168)) || unk_0x3772881BFFE6C3F8(0, 169))
        {
            return 1;
        }
        if (!bParam0)
        {
            if (((unk_0x0B6782DED1C4B3B1(0, 166) || unk_0x0B6782DED1C4B3B1(0, 167)) || unk_0x0B6782DED1C4B3B1(0, 168)) || unk_0x0B6782DED1C4B3B1(0, 169))
            {
                return 1;
            }
        }
    }
    return 0;
}

int func_622(int iParam0)//Position - 0x17D1C
{
    int iVar0;
    
    if (unk_0xC6649C48084573DA())
    {
        if (!unk_0x2BF5E63466422C38(iParam0))
        {
            unk_0x63EA4FAF7CDEFEC7(iParam0, &iVar0, 1);
            if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
            {
                return 1;
            }
        }
    }
    return 0;
}

bool func_623(bool bParam0)//Position - 0x17D79
{
    if (bParam0)
    {
        return (Global_56C3.f_4 && Global_56C3.f_68 == 4);
    }
    return Global_56C3.f_4;
}

bool func_624(int iParam0, int iParam1)//Position - 0x17DA2
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

int func_625()//Position - 0x17DDD
{
    if (func_626())
    {
        return 1;
    }
    if (unk_0x260395BA7F0C83CB())
    {
        return 0;
    }
    if (unk_0xA710300CD13D2877() || unk_0xC862E94A8ABC89B8())
    {
        return 0;
    }
    if (unk_0x75EBF5007DD359C9())
    {
        return 0;
    }
    return 1;
}

bool func_626()//Position - 0x17E1C
{
    return Global_1406B7;
}

bool func_627()//Position - 0x17E28
{
    return unk_0x9B35D07DCD0F0B43() <= Global_574E.f_16F6 + 100;
}

int func_628()//Position - 0x17E3D
{
    return Global_14F53C.f_44;
}

int func_629()//Position - 0x17E4B
{
    if (Global_180527 > 16)
    {
        return 1;
    }
    return 0;
}

float func_630()//Position - 0x17E61
{
    float fVar0;
    float fVar1;
    float fVar2;
    
    fVar2 = 0.6347182f;
    fVar1 = (1f - (1f - unk_0x7BC897FD6110BBB4()));
    fVar0 = (1f - (fVar1 - fVar2));
    return fVar0;
}

int func_631(int iParam0)//Position - 0x17E85
{
    switch (iParam0)
    {
        case 20:
        case 26:
        case 27:
        case 39:
            return 1;
        
        default:
    }
    return 0;
}

int func_632()//Position - 0x17EB1
{
    if (func_635())
    {
        return 1;
    }
    if (func_6(unk_0x7C7787D2D7139A85()))
    {
        return 0;
    }
    if (func_603())
    {
        return 1;
    }
    if (func_430(unk_0x7C7787D2D7139A85()))
    {
        switch (func_299(unk_0x7C7787D2D7139A85()))
        {
            case 131:
            case 132:
            case 133:
            case 136:
            case 138:
            case 139:
            case 141:
            case 144:
            case 146:
                return 1;
                break;
            
            case 140:
                if (!func_633(unk_0x7C7787D2D7139A85()))
                {
                    return 1;
                }
                break;
            
            case 129:
                if (!func_633(unk_0x7C7787D2D7139A85()))
                {
                    return 1;
                }
                break;
            
            case 174:
                if (!func_633(unk_0x7C7787D2D7139A85()))
                {
                    return 1;
                }
                break;
            
            case 175:
                return 1;
                break;
            }
    }
    return 0;
}

bool func_633(int iParam0)//Position - 0x17F8C
{
    return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_1, 4);
}

int func_634(int iParam0)//Position - 0x17FA4
{
    if (iParam0 == 27)
    {
        if ((func_430(unk_0x7C7787D2D7139A85()) && !func_100(unk_0x7C7787D2D7139A85())) && !func_544(unk_0x7C7787D2D7139A85(), 236))
        {
            return 1;
        }
    }
    if (iParam0 == 26)
    {
        if (func_106(unk_0x7C7787D2D7139A85(), 0) && func_100(unk_0x7C7787D2D7139A85()))
        {
            return 1;
        }
        if (func_503(unk_0x7C7787D2D7139A85()) == 3)
        {
            return 1;
        }
    }
    return 0;
}

int func_635()//Position - 0x18017
{
    if (func_636(unk_0x7C7787D2D7139A85()))
    {
        return Global_1420B9;
    }
    return 0;
}

int func_636(int iParam0)//Position - 0x18032
{
    if (unk_0x393E9918BC37548A())
    {
        if (func_94(iParam0, 0))
        {
            return unk_0xC0E0C265EFDEC931(iParam0);
        }
    }
    return 0;
}

void func_637()//Position - 0x18055
{
    int iVar0;
    
    if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iLocal_120)))
    {
        iVar0 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iLocal_120));
        if (unk_0xD56C8C2B75BF9665(iVar0))
        {
            func_638(iVar0, 2);
        }
    }
    iLocal_120++;
    if (iLocal_120 >= unk_0xACF7D965CEBE5714())
    {
        iLocal_120 = 0;
    }
}

void func_638(int iParam0, int iParam1)//Position - 0x1809E
{
    bool bVar0;
    
    if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 0))
    {
        return;
    }
    if (func_38(&(Global_1806F7.f_12)))
    {
        return;
    }
    if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_2, iParam0))
    {
        if (Global_1806F7 < iParam1 && unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 1))
        {
            unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 0);
            return;
        }
        if (Global_1806F7 != 0)
        {
            unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 1);
        }
        Global_1806F7 = 0;
        Global_1806F7.f_2 = 0;
    }
    unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_2), iParam0);
    bVar0 = true;
    if (func_7(iParam0))
    {
        bVar0 = false;
    }
    if (func_639(iParam0))
    {
        bVar0 = false;
    }
    if (func_94(iParam0, 0))
    {
        bVar0 = false;
    }
    if (func_6(iParam0))
    {
        bVar0 = false;
    }
    if (bVar0)
    {
        Global_1806F7++;
    }
}

bool func_639(int iParam0)//Position - 0x1816C
{
    return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_1, 10);
}

void func_640(int iParam0, int iParam1)//Position - 0x18185
{
    Local_1518[iParam0 /*5*/] = iParam1;
}

int func_641()//Position - 0x18196
{
    struct<71> Var0;
    int iVar1;
    int iVar2;
    
    Var0 = 4;
    Var0.f_5 = 32;
    Var0.f_26 = 32;
    Global_26A0A9.f_128A = { Var0 };
    iVar1 = 0;
    while (iVar1 < func_642())
    {
        Global_26A0A9.f_128A.f_26[iVar1] = -1;
        iVar1++;
    }
    iVar2 = 0;
    while (iVar2 < 32)
    {
        Local_172.f_216[iVar2 /*42*/].f_1 = func_96();
        iVar2++;
    }
    return 1;
}

int func_642()//Position - 0x18209
{
    if (Global_257AFC)
    {
        return 32;
    }
    return (32 - Global_257AFD);
}

int func_643()//Position - 0x18224
{
    return Local_151;
}

int func_644(int iParam0)//Position - 0x1822F
{
    return Local_1518[iParam0 /*5*/];
}

void func_645()//Position - 0x1823E
{
    if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 6))
    {
        func_669();
        unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 6);
    }
    if (!unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 7))
    {
        if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 4) || unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 16))
        {
            if (((!unk_0xBCFD7D14E63DFD63() && !unk_0x0945988C02AF3025()) && !func_172()) && func_13(unk_0x7C7787D2D7139A85(), 1, 1))
            {
                unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 7);
                func_166("FME_PASINT", 30000);
                func_165(1);
            }
        }
        else if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 17))
        {
            if (func_336() && !func_348())
            {
                unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 17);
                unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 16);
            }
        }
    }
    if (!unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 23))
    {
        if (((((!unk_0xBCFD7D14E63DFD63() && !unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_31B, 2)) && func_13(unk_0x7C7787D2D7139A85(), 1, 1)) && !Global_12038) && !Global_E51C) && !unk_0x0945988C02AF3025())
        {
            if (func_667())
            {
                func_166("AMEV_GA_RP", -1);
                if (func_240(unk_0x7C7787D2D7139A85()) != 200)
                {
                    func_165(1);
                }
                unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 23);
            }
        }
    }
    if (unk_0xCD97B9861557C025() && unk_0x097FC2B62E383500() == 15)
    {
        if (func_445(unk_0x7C7787D2D7139A85()))
        {
            if (!unk_0xCE5F730CE5D2B3B2(1344549371))
            {
                unk_0x339AECE514362B5F(1344549371);
            }
        }
        else if (unk_0xCE5F730CE5D2B3B2(1344549371))
        {
            unk_0x545AD6392BF558B6(1344549371);
        }
    }
    if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 9))
    {
        if (((((!unk_0xBCFD7D14E63DFD63() && !unk_0x0945988C02AF3025()) && !func_172()) && func_13(unk_0x7C7787D2D7139A85(), 1, 1)) && !func_347(unk_0x7C7787D2D7139A85(), 21)) && !func_347(unk_0x7C7787D2D7139A85(), 25))
        {
            unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 9);
            func_666(0);
            func_166("FME_TBL00", -1);
            func_165(1);
        }
    }
    if (func_430(unk_0x7C7787D2D7139A85()))
    {
        if (!unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 18))
        {
            if ((func_347(unk_0x7C7787D2D7139A85(), 21) && unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 20)) && !unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 19))
            {
                unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 18);
            }
        }
        else if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 18))
        {
            if (((((!unk_0xBCFD7D14E63DFD63() && !unk_0x0945988C02AF3025()) && !func_172()) && func_13(unk_0x7C7787D2D7139A85(), 1, 1)) && unk_0xBF28CCACDDFF5346()) && !Global_26A0A9.f_12DF)
            {
                unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 18);
                unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 19);
                func_166("AMTT_RPAS", -1);
                func_165(1);
            }
        }
    }
    if (((((func_430(unk_0x7C7787D2D7139A85()) && !func_7(unk_0x7C7787D2D7139A85())) && func_299(unk_0x7C7787D2D7139A85()) != 146) && !func_6(unk_0x7C7787D2D7139A85())) && !func_517(unk_0x7C7787D2D7139A85())) && !func_656())
    {
        if (func_444(func_299(unk_0x7C7787D2D7139A85())))
        {
            unk_0xDA1C9614D8C6EE61(unk_0x7C7787D2D7139A85());
        }
        if (!unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 22))
        {
            unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 22);
        }
        if (func_470(unk_0x7C7787D2D7139A85()) || func_438())
        {
            if (!unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 10))
            {
                if (func_654(func_299(unk_0x7C7787D2D7139A85())))
                {
                    if (func_282(0) && !Global_247C05)
                    {
                        unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 9);
                    }
                    if (!Global_247C05)
                    {
                        func_442(1);
                        unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 14);
                    }
                }
                unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 10);
            }
        }
        if (func_445(unk_0x7C7787D2D7139A85()))
        {
            if (!unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 11))
            {
                if (!Global_181A1.f_8)
                {
                    unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 12);
                    func_440(1);
                }
                if (!func_653())
                {
                    unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 13);
                    func_439();
                }
                if (!Global_247C05)
                {
                    unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 14);
                    if (func_282(0) && !Global_247C05)
                    {
                        unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 9);
                    }
                    func_442(1);
                }
                unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 11);
            }
        }
        else
        {
            func_651(0);
        }
    }
    else
    {
        func_651(1);
    }
    func_646();
    if (func_437(func_299(unk_0x7C7787D2D7139A85())) && !unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 21))
    {
        unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 21);
    }
    if (((func_336() && !func_348()) || func_347(unk_0x7C7787D2D7139A85(), 21)) || func_347(unk_0x7C7787D2D7139A85(), 25))
    {
        if (!unk_0xA2BC31158C8CEFD2(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1, 10))
        {
            unk_0xA1E7A40E1F56E511(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 10);
        }
    }
    else if (unk_0xA2BC31158C8CEFD2(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1, 10))
    {
        unk_0x3B76114EC84D5812(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 10);
    }
}

void func_646()//Position - 0x1877E
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    if (func_172())
    {
        iVar2 = 63;
        iVar2 = 0;
        while (iVar2 < 83)
        {
            if (func_486(iVar2))
            {
                iVar0 = iVar2;
                if (iVar0 == 63 || iVar0 >= 81)
                {
                    iVar1 = 15000;
                }
                else
                {
                    iVar1 = 3000;
                }
                if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 26))
                {
                    unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 26);
                }
                func_647(iVar0, iVar1);
                iVar2 = 83;
            }
            iVar2++;
        }
    }
    else if (!unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 26))
    {
        func_37(&(Global_1806F7.f_16));
        unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 26);
    }
}

void func_647(int iParam0, int iParam1)//Position - 0x18821
{
    if (!func_38(&(Global_1806F7.f_16)))
    {
        func_2(&(Global_1806F7.f_16), 0, 0);
    }
    else if (func_1(&(Global_1806F7.f_16), iParam1, 0))
    {
        if (func_628() > 0)
        {
            func_650(iParam0);
            if (func_163("AMEV_LBD_HELP"))
            {
                unk_0x0D23E3918F7AF11B(1);
            }
            func_37(&(Global_1806F7.f_16));
        }
    }
    else
    {
        func_649(0);
        func_648();
    }
}

void func_648()//Position - 0x18889
{
    Global_26A0A9.f_11B4 = 0;
}

void func_649(int iParam0)//Position - 0x18899
{
    Global_14F53C.f_44 = iParam0;
}

void func_650(int iParam0)//Position - 0x188A9
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 <= 3)
    {
        if (Global_2531AD.f_A94[iVar0 /*80*/].f_1 == iParam0)
        {
            Global_2531AD.f_A94[iVar0 /*80*/].f_2 = 5;
            func_97(&(Global_2531AD.f_A94[iVar0 /*80*/].f_45), 1);
        }
        iVar0++;
    }
}

void func_651(int iParam0)//Position - 0x188F5
{
    if ((unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 11) || (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 10) && iParam0)) || (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 22) && iParam0))
    {
        if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 12))
        {
            unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 12);
            func_440(0);
        }
        if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 13))
        {
            unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 13);
            func_652();
        }
        if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 14) && !func_106(unk_0x7C7787D2D7139A85(), 0))
        {
            unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 14);
            func_442(0);
        }
        unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 11);
        unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 10);
        unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 22);
    }
}

void func_652()//Position - 0x189D0
{
    unk_0x3B76114EC84D5812(&(Global_26A0A9.f_1280), 0);
}

bool func_653()//Position - 0x189E4
{
    return unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_1280, 0);
}

int func_654(int iParam0)//Position - 0x189F8
{
    switch (iParam0)
    {
        case 129:
        case 132:
        case 136:
        case 138:
        case 139:
        case 140:
        case 141:
            return 1;
        
        case 131:
        case 146:
            return func_445(unk_0x7C7787D2D7139A85());
        
        case 133:
            return (func_438() || func_655(func_298()));
        
        default:
    }
    return 0;
}

int func_655(int iParam0)//Position - 0x18A68
{
    switch (iParam0)
    {
        case 1:
        case 10:
        case 6:
        case 12:
        case 11:
        case 14:
            return 1;
        
        default:
    }
    return 0;
}

int func_656()//Position - 0x18AA0
{
    if (((((((((func_665() || func_664()) || func_663()) || func_295()) || (func_662() && !unk_0xA51CBC95AC3A4B14())) || (func_659() && !func_658())) || Global_248A6D) || Global_248A6D.f_1 != 0) || Global_248AB7 != 0) || (func_657() == 2 && !unk_0xA51CBC95AC3A4B14()))
    {
        return 1;
    }
    return 0;
}

int func_657()//Position - 0x18B34
{
    return Global_EC6CD;
}

bool func_658()//Position - 0x18B40
{
    return unk_0xA2BC31158C8CEFD2(Global_255E41.f_2, 27);
}

int func_659()//Position - 0x18B54
{
    if (func_661() || func_660())
    {
        return Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_62 == 8;
    }
    return 0;
}

var func_660()//Position - 0x18B81
{
    return Global_255E41.f_27B;
}

bool func_661()//Position - 0x18B90
{
    return unk_0xA2BC31158C8CEFD2(Global_255E41.f_2, 11);
}

bool func_662()//Position - 0x18BA4
{
    return unk_0xA2BC31158C8CEFD2(Global_255E41, 5);
}

bool func_663()//Position - 0x18BB5
{
    return unk_0xA2BC31158C8CEFD2(Global_255E41, 2);
}

bool func_664()//Position - 0x18BC6
{
    return unk_0xA2BC31158C8CEFD2(Global_255E41, 20);
}

bool func_665()//Position - 0x18BD8
{
    return Global_255E41.f_256;
}

void func_666(int iParam0)//Position - 0x18BE7
{
    int iVar0;
    
    iVar0 = func_228(2534, -1, 0);
    if (iParam0 == 0)
    {
        if (!unk_0xA2BC31158C8CEFD2(iVar0, 0))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 0);
        }
        else if (!unk_0xA2BC31158C8CEFD2(iVar0, 1))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 1);
        }
        else if (!unk_0xA2BC31158C8CEFD2(iVar0, 2))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 2);
        }
    }
    else if (iParam0 == 1)
    {
        if (!unk_0xA2BC31158C8CEFD2(iVar0, 3))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 3);
        }
        else if (!unk_0xA2BC31158C8CEFD2(iVar0, 4))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 4);
        }
        else if (!unk_0xA2BC31158C8CEFD2(iVar0, 5))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 5);
        }
    }
    else if (iParam0 == 2)
    {
        if (!unk_0xA2BC31158C8CEFD2(iVar0, 6))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 6);
        }
        else if (!unk_0xA2BC31158C8CEFD2(iVar0, 7))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 7);
        }
        else if (!unk_0xA2BC31158C8CEFD2(iVar0, 8))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 8);
        }
    }
    else if (iParam0 == 3)
    {
        if (!unk_0xA2BC31158C8CEFD2(iVar0, 9))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 9);
        }
        else if (!unk_0xA2BC31158C8CEFD2(iVar0, 10))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 10);
        }
        else if (!unk_0xA2BC31158C8CEFD2(iVar0, 11))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 11);
        }
    }
    func_218(2534, iVar0, -1, 1, 0);
}

int func_667()//Position - 0x18D1F
{
    int iVar0;
    
    if (!func_38(&(Global_1806F7.f_F)))
    {
        func_2(&(Global_1806F7.f_F), 0, 0);
        Global_1806F7.f_11 = 0;
    }
    else if (func_1(&(Global_1806F7.f_F), 1000, 0))
    {
        if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(Global_1806F7.f_11)))
        {
            iVar0 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(Global_1806F7.f_11));
            if (unk_0xD56C8C2B75BF9665(iVar0))
            {
                if (func_13(iVar0, 1, 1) && func_668(iVar0, 6))
                {
                    if (SYSTEM::VDIST(func_31(unk_0x7C7787D2D7139A85()), func_31(iVar0)) < 80f)
                    {
                        return 1;
                    }
                }
            }
        }
        Global_1806F7.f_11++;
        if (Global_1806F7.f_11 >= 32)
        {
            Global_1806F7.f_11 = 0;
            func_37(&(Global_1806F7.f_F));
        }
    }
    return 0;
}

int func_668(int iParam0, int iParam1)//Position - 0x18DE7
{
    int iVar0;
    
    if (Global_1406C0 != 0)
    {
        return 0;
    }
    if (!func_222(iParam0))
    {
        return 0;
    }
    iVar0 = iParam0;
    if (Global_1844AE[iVar0 /*871*/] == iParam1)
    {
        return 1;
    }
    return 0;
}

void func_669()//Position - 0x18E20
{
    unk_0x60F310C72311BCA8(5);
    func_671();
    unk_0xB7F4DA52DE3AAF24(1f);
    unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 8);
    func_670();
}

void func_670()//Position - 0x18E46
{
    if (Global_198455)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_198456, 0))
        {
            unk_0x3B76114EC84D5812(&Global_26C29F, 0);
        }
        if (unk_0xA2BC31158C8CEFD2(Global_198456, 1))
        {
            unk_0x3B76114EC84D5812(&Global_26C29F, 1);
        }
        if (unk_0xA2BC31158C8CEFD2(Global_198456, 5))
        {
            unk_0x3B76114EC84D5812(&Global_26C29F, 5);
        }
        if (unk_0xF6C55F777DC175F4(-355737150))
        {
            unk_0xF58083E4652F7505(-355737150, 1, 0, 0);
        }
        if (unk_0xF6C55F777DC175F4(-580979506))
        {
            unk_0xF58083E4652F7505(-580979506, 1, 0, 0);
        }
        if (unk_0xF6C55F777DC175F4(-1426452475))
        {
            unk_0xF58083E4652F7505(-1426452475, 1, 0, 0);
        }
        if (unk_0xF6C55F777DC175F4(745417724))
        {
            unk_0xF58083E4652F7505(745417724, 1, 0, 0);
        }
        if (unk_0xF6C55F777DC175F4(-1305304906))
        {
            unk_0xF58083E4652F7505(-1305304906, 1, 0, 0);
        }
        if (unk_0xF6C55F777DC175F4(-1543175077))
        {
            unk_0xF58083E4652F7505(-1543175077, 1, 0, 0);
        }
        if (unk_0xF6C55F777DC175F4(-811770997))
        {
            unk_0xF58083E4652F7505(-811770997, 1, 0, 0);
        }
        Global_198456 = 0;
    }
    Global_198455 = 0;
}

void func_671()//Position - 0x18F46
{
    if (unk_0xAB2A82A2838B61B7(Global_26A0A9.f_131E))
    {
        if (!Global_26A0A9.f_131E == unk_0x429EE9FF15BB9033() && Global_26A0A9.f_131D < 1f)
        {
            return;
        }
    }
    Global_26A0A9.f_131E = -1;
    Global_26A0A9.f_131D = 1f;
}

int func_672()//Position - 0x18F8D
{
    if (func_673())
    {
        return 1;
    }
    return 0;
}

bool func_673()//Position - 0x18FA1
{
    return Global_1806F7.f_18;
}

int func_674()//Position - 0x18FAF
{
    var uVar0;
    
    func_678(&uVar0);
    if (Global_140852 == 0)
    {
        if (!unk_0x393E9918BC37548A())
        {
            return 1;
        }
    }
    if (func_677())
    {
        return 1;
    }
    if (Global_258E39)
    {
        return 1;
    }
    if (func_676())
    {
        return 1;
    }
    if (func_675(159))
    {
        if (!func_665())
        {
            return 1;
        }
    }
    if (func_675(157))
    {
        return 1;
    }
    if (!unk_0x2A983C9CF4EE0D5E())
    {
        return 1;
    }
    if (func_447() != 0)
    {
        if (unk_0x222F76006659B0EB(func_447()) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int func_675(int iParam0)//Position - 0x19039
{
    if (unk_0xD076BFB919B20653(1, iParam0))
    {
        return 1;
    }
    return 0;
}

bool func_676()//Position - 0x19050
{
    return Global_258577;
}

bool func_677()//Position - 0x1905C
{
    return Global_255E41.f_251;
}

void func_678(var uParam0)//Position - 0x1906B
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
                    func_679(iVar0);
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

void func_679(int iParam0)//Position - 0x190DE
{
    vector3 vVar0;
    int iVar1;
    int iVar2;
    bool bVar3;
    
    if (unk_0x3C1EC42A2CC175C5(1, iParam0, &vVar0, 3))
    {
        if (func_13(vVar0.y, 1, 1))
        {
            iVar1 = unk_0x23625FE58BACEBFD(vVar0.y);
            if (unk_0xD4B321D9096B01FC(iVar1))
            {
                if (unk_0x5294582CE404D3F4(iVar1, 0))
                {
                    iVar2 = unk_0x4D57D3E5ECE15A41(iVar1, 0);
                    if (unk_0x3D65AB2C3D476E32(iVar2, vVar0.z) && unk_0xF77CF4BC35906B30())
                    {
                        if (func_680(iVar2, &bVar3))
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

int func_680(int iParam0, var uParam1)//Position - 0x1915F
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

void func_681()//Position - 0x191BE
{
    SYSTEM::WAIT(0);
}

void func_682()//Position - 0x191CB
{
    var uVar0[4];
    int iVar1;
    var uVar2;
    
    func_174();
    iVar1 = 0;
    while (iVar1 < 10)
    {
        if (unk_0xA2BC31158C8CEFD2(iLocal_146, iVar1) && !unk_0xDE3C2FB26058823A(iLocal_147[iVar1]))
        {
            unk_0xCFF6AB47B7B014FF(iLocal_147[iVar1]);
            unk_0x0972EA9E8102C153(iLocal_147[iVar1]);
        }
        iVar1++;
    }
    func_433();
    func_489(0);
    func_686(132, 0, Local_151.f_8 == 6);
    func_454(22, 0);
    Global_26A0A9.f_12D1 = -1;
    uVar0[0] = Local_151.f_3[0];
    uVar0[1] = Local_151.f_3[1];
    uVar0[2] = Local_151.f_3[2];
    uVar0[3] = Local_151.f_3[3];
    func_685(&(uVar0[0]));
    func_685(&(uVar0[1]));
    func_685(&(uVar0[2]));
    func_685(&(uVar0[3]));
    if (func_674())
    {
        Local_1517.f_5 = 5;
    }
    else if (unk_0xA2BC31158C8CEFD2(Local_151.f_2, 2))
    {
        Local_1517.f_5 = 6;
    }
    else if (Local_1517.f_5 != 1)
    {
        Local_1517.f_5 = 2;
    }
    Local_1517 = Local_151.f_2D4;
    Local_1517.f_1 = Local_151.f_2D5;
    Local_1517.f_4 = Local_151.f_2D6;
    Local_1517.f_3 = Local_151.f_2D8;
    Local_1517.f_A = (unk_0x71EC776E812C6A0A() - Local_1517.f_9);
    uVar2 = Local_151.f_2C8;
    if (Local_151.f_2C3)
    {
        uVar2 = Local_151.f_2C8 + 4;
    }
    if (!Global_40001.f_2CEB)
    {
        if (Local_1517.f_6 > 0)
        {
        }
    }
    Local_1517.f_6 = (Local_1517.f_6 + iLocal_125);
    if (unk_0x2E40EEA43EF34BD6() != -1)
    {
        func_683(Local_1517, uVar2, Local_1518[unk_0x2E40EEA43EF34BD6() /*5*/].f_4, uVar0[0], uVar0[1], uVar0[2], uVar0[3]);
    }
    func_482(1);
    unk_0x9C9E32388A7886A2();
}

void func_683(struct<12> Param0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x19387
{
    char* sVar0;
    struct<13> Var1;
    struct<14> Var2;
    struct<18> Var3;
    struct<14> Var4;
    struct<13> Var5;
    struct<14> Var6;
    struct<14> Var7;
    struct<16> Var8;
    struct<13> Var9;
    struct<14> Var10;
    struct<14> Var11;
    struct<13> Var12;
    
    sVar0 = unk_0x0037AFCBDC61F351();
    if (Param0.f_9 == 0)
    {
        Param0.f_A = 0;
    }
    if (Param0.f_8 > Param0.f_9)
    {
        Param0.f_8 = Param0.f_9;
    }
    if (Global_12B21)
    {
        if (unk_0x2553916E420E8EF0(sVar0, "am_hot_target"))
        {
            Var1 = { Param0 };
            Var1.f_C = uParam1;
            unk_0x810C484A087C3042(&Var1);
        }
        else if (unk_0x2553916E420E8EF0(sVar0, func_684()))
        {
            Var2 = { Param0 };
            Var2.f_C = uParam1;
            Var2.f_D = iParam2;
            unk_0xFB33DABCFB43A8EF(&Var2);
        }
        else if (unk_0x2553916E420E8EF0(sVar0, "am_cp_collection"))
        {
            Var3 = { Param0 };
            Var3.f_C = uParam1;
            Var3.f_D = iParam2;
            Var3.f_E = iParam3;
            Var3.f_F = uParam4;
            Var3.f_10 = uParam5;
            Var3.f_11 = uParam6;
            unk_0x7F6382D827BD9C07(&Var3);
        }
        else if (unk_0x2553916E420E8EF0(sVar0, "am_challenges"))
        {
            Var4 = { Param0 };
            Var4.f_C = uParam1;
            Var4.f_D = SYSTEM::TO_FLOAT(iParam2);
            if (iParam3 == 1)
            {
                Var4.f_D = (Var4.f_D / 10f);
            }
            unk_0x06D386BCE22EF5BF(&Var4);
        }
        else if (unk_0x2553916E420E8EF0(sVar0, "am_penned_in"))
        {
            unk_0x0EF81B156D425380(&Param0);
        }
        else if (unk_0x2553916E420E8EF0(sVar0, "am_pass_the_parcel"))
        {
            Var5 = { Param0 };
            Var5.f_C = uParam1;
            unk_0x025486AF8C0DB17E(&Var5);
        }
        else if (unk_0x2553916E420E8EF0(sVar0, "am_hot_property"))
        {
            Var6 = { Param0 };
            Var6.f_C = uParam1;
            Var6.f_D = iParam2;
            unk_0xF1C4981FBCAD9EA4(&Var6);
        }
        else if (unk_0x2553916E420E8EF0(sVar0, "am_dead_drop"))
        {
            Var7 = { Param0 };
            Var7.f_C = uParam1;
            Var7.f_D = iParam2;
            unk_0x03C7E03F649AA413(&Var7);
        }
        else if (unk_0x2553916E420E8EF0(sVar0, "am_king_of_the_castle"))
        {
            Var8 = { Param0 };
            Var8.f_C = uParam1;
            Var8.f_D = iParam2;
            Var8.f_E = iParam3;
            Var8.f_F = uParam4;
            unk_0xFE31CFF883023A7D(&Var8);
        }
        else if (unk_0x2553916E420E8EF0(sVar0, "AM_CRIMINAL_DAMAGE"))
        {
            Var9 = { Param0 };
            Var9.f_C = uParam1;
            unk_0x8000E4289D8A77C5(&Var9);
        }
        else if (unk_0x2553916E420E8EF0(sVar0, "AM_KILL_LIST"))
        {
            if (iParam3 == 0)
            {
                Var10 = { Param0 };
                Var10.f_C = uParam1;
                Var10.f_D = iParam2;
                unk_0x8B02E3FF6F2D8B3D(&Var10);
            }
            else
            {
                Var11 = { Param0 };
                Var11.f_C = uParam1;
                Var11.f_D = iParam2;
                unk_0xFC3F784B5E1FB53F(&Var11);
            }
        }
        else if (unk_0x2553916E420E8EF0(sVar0, "am_hunt_the_beast"))
        {
            Var12 = { Param0 };
            Var12.f_C = uParam1;
            unk_0x7B89749159C363EC(&Var12);
        }
    }
}

char* func_684()//Position - 0x195FC
{
    switch (Global_258E9F)
    {
        case 0:
            return "freemode";
        
        default:
    }
    return "freemode";
}

void func_685(int iParam0)//Position - 0x1961E
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 32)
    {
        if (unk_0xA2BC31158C8CEFD2(*iParam0, iVar0))
        {
            unk_0x3B76114EC84D5812(iParam0, iVar0);
        }
        else
        {
            unk_0xA1E7A40E1F56E511(iParam0, iVar0);
        }
        iVar0++;
    }
}

void func_686(int iParam0, bool bParam1, bool bParam2)//Position - 0x19658
{
    var uVar0;
    int iVar1;
    
    if (iParam0 == 0)
    {
    }
    if (unk_0x7C7787D2D7139A85() != -1)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1, 13))
        {
            unk_0x3B76114EC84D5812(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 13);
        }
        if (unk_0xA2BC31158C8CEFD2(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1, 14))
        {
            unk_0x3B76114EC84D5812(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 14);
        }
    }
    if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 21))
    {
        unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 21);
    }
    func_716();
    unk_0x70431C02FF392D24("DisableFlightMusic", 0);
    unk_0x70431C02FF392D24("WantedMusicDisabled", 0);
    if (bParam1)
    {
        uVar0 = func_715(func_299(unk_0x7C7787D2D7139A85()));
        func_454(func_455(iParam0), 0);
    }
    else
    {
        if ((bParam2 && unk_0x7C7787D2D7139A85() != -1) && func_714(unk_0x7C7787D2D7139A85()) >= 12)
        {
            func_713(2546, -1);
            iVar1 = func_228(2546, -1, 0);
            if (iVar1 == 2)
            {
                unk_0xA1E7A40E1F56E511(&Global_180711, 0);
            }
            else if (iVar1 == 4)
            {
                unk_0xA1E7A40E1F56E511(&Global_180711, 1);
            }
            else if (iVar1 == 6)
            {
                unk_0xA1E7A40E1F56E511(&Global_180711, 2);
            }
            else if (iVar1 == 8)
            {
                unk_0xA1E7A40E1F56E511(&Global_180711, 3);
            }
            else if (iVar1 == 10)
            {
                unk_0xA1E7A40E1F56E511(&Global_180711, 4);
            }
            else if (iVar1 == 12)
            {
                unk_0xA1E7A40E1F56E511(&Global_180711, 5);
            }
        }
        func_712();
        func_711();
        func_710();
        if ((!func_102(unk_0x7C7787D2D7139A85()) && !func_171(unk_0x7C7787D2D7139A85())) && !func_460())
        {
            func_694();
        }
        func_693();
        if (!unk_0xA2BC31158C8CEFD2(Global_198E64.f_3, 0) && !unk_0xA2BC31158C8CEFD2(Global_198E64.f_3, 1))
        {
            func_669();
        }
        func_692();
        unk_0x3B76114EC84D5812(&(Global_26A0A9.f_6D2), 2);
        func_173();
        func_158();
    }
    if (unk_0xCE5F730CE5D2B3B2(1344549371))
    {
        unk_0x545AD6392BF558B6(1344549371);
    }
    if (!bParam1 || uVar0)
    {
        if (((unk_0x7C7787D2D7139A85() != -1 && !func_347(unk_0x7C7787D2D7139A85(), 21)) && !func_347(unk_0x7C7787D2D7139A85(), 25)) && !func_106(unk_0x7C7787D2D7139A85(), 0))
        {
            func_442(0);
            func_440(0);
            if (!bParam1)
            {
                func_691();
            }
        }
    }
    if (bParam2 && !bParam1)
    {
        if (func_42(26, -1))
        {
            Global_258DF5 = -1;
            func_39(26, -1);
        }
    }
    if (!func_687())
    {
        Global_26432A = 1;
    }
}

int func_687()//Position - 0x198C4
{
    if ((((((!func_608(unk_0x7C7787D2D7139A85()) && !func_589(unk_0x7C7787D2D7139A85())) && func_299(unk_0x7C7787D2D7139A85()) != 146) && !func_690()) && !func_689()) && !func_688(Global_440000.f_2E9D2)) && !func_84())
    {
        return 0;
    }
    return 1;
}

bool func_688(int iParam0)//Position - 0x19930
{
    return iParam0 == 57;
}

int func_689()//Position - 0x1993D
{
    if (Global_440000.f_25AF8 == Global_40001.f_257C)
    {
        return 1;
    }
    return 0;
}

int func_690()//Position - 0x1995E
{
    if ((Global_440000 == 0 && unk_0xA51CBC95AC3A4B14()) && (((((((Global_440000.f_5 != 0 || Global_440000.f_2E9D2 > 0) || unk_0xA2BC31158C8CEFD2(Global_440000.f_4, 15)) || unk_0xA2BC31158C8CEFD2(Global_440000.f_4, 18)) || unk_0xA2BC31158C8CEFD2(Global_440000.f_4, 19)) || unk_0xA2BC31158C8CEFD2(Global_440000.f_4, 29)) || unk_0xA2BC31158C8CEFD2(Global_440000.f_4, 28)) || unk_0xA2BC31158C8CEFD2(Global_440000.f_5, 23)))
    {
        return 1;
    }
    return 0;
}

void func_691()//Position - 0x19A08
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < Global_1403FD)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_2401A9[iVar0 /*26*/].f_C, 11))
        {
            if (unk_0xA2BC31158C8CEFD2(Global_2401A9[iVar0 /*26*/].f_D, 26))
            {
                unk_0x3B76114EC84D5812(&(Global_2401A9[iVar0 /*26*/].f_D), 26);
            }
        }
        iVar0++;
    }
}

void func_692()//Position - 0x19A5E
{
    struct<25> Var0;
    
    Var0.f_3 = -1;
    Var0.f_4 = -1;
    Var0.f_5 = -1;
    Var0.f_15 = -1;
    Global_1806F7 = { Var0 };
}

void func_693()//Position - 0x19A8D
{
    var uVar0;
    
    Global_1420B9 = uVar0;
}

void func_694()//Position - 0x19A9B
{
    unk_0xD3DFD1F239A937DB(&(Global_24B2CF.f_18), &Global_24C36C, 2);
    unk_0xD3DFD1F239A937DB(&(Global_24B2CF.f_1A), &Global_24C36E, 19);
    func_708();
    func_697(1, 1, 0);
    func_695();
}

void func_695()//Position - 0x19AD1
{
    func_696(0, 0);
}

void func_696(int iParam0, int iParam1)//Position - 0x19ADF
{
    Global_24B2CF.f_16 = iParam0;
    Global_24B2CF.f_17 = iParam1;
}

void func_697(bool bParam0, bool bParam1, bool bParam2)//Position - 0x19AF7
{
    if (bParam1)
    {
        unk_0xD3DFD1F239A937DB(&(Global_24B2CF.f_2D), &Global_24C381, 318);
    }
    else
    {
        Global_24B2CF.f_2D = { Global_24C381 };
        Global_24B2CF.f_2D.f_31 = { Global_24C381.f_31 };
        Global_24B2CF.f_2D.f_34 = Global_24C381.f_34;
        Global_24B2CF.f_2D.f_35 = Global_24C381.f_35;
    }
    if (bParam0)
    {
        func_707();
    }
    if (!bParam2)
    {
        func_699(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
    }
    func_698(0);
    func_161();
}

void func_698(bool bParam0)//Position - 0x19B9D
{
    if (bParam0)
    {
        Global_24B2CF.f_2BF = 0;
    }
    else
    {
        Global_24B2CF.f_2BF = 1;
    }
}

void func_699(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x19BBD
{
    if (bParam0)
    {
        if (func_706())
        {
            func_705();
        }
        Global_24B2CF.f_2C0.f_206 = unk_0x429EE9FF15BB9033();
        Global_24B2CF.f_2C0.f_1F8 = iParam1;
        Global_24B2CF.f_2C0.f_1F9 = iParam2;
        Global_24B2CF.f_2C0.f_1FA = iParam10;
        func_703();
        func_458(8, 0, 0, 0, 0);
        Global_24B2CF.f_2C0.f_1FB = iParam11;
        Global_24B2CF.f_2C0.f_200 = iParam3;
        Global_24B2CF.f_2C0.f_201 = iParam4;
        Global_24B2CF.f_2C0.f_1FE = iParam5;
        Global_24B2CF.f_2C0.f_1FF = iParam6;
        Global_24B2CF.f_2C0.f_202 = iParam7;
        Global_24B2CF.f_2C0.f_203 = iParam8;
        Global_24B2CF.f_2C0.f_204 = iParam9;
        Global_24B2CF.f_2C0.f_205 = iParam14;
        Global_24B2CF.f_2C0.f_1FC = iParam12;
        Global_24B2CF.f_2C0.f_1FD = iParam13;
        Global_24B2CF.f_6CF = 1;
    }
    else
    {
        func_700();
    }
}

void func_700()//Position - 0x19CA8
{
    if (func_706() && !func_702())
    {
        func_705();
    }
    if (func_702())
    {
        func_701();
    }
    else
    {
        func_703();
        func_458(0, 0, 0, 0, 0);
        Global_24B2CF.f_6CF = 0;
        Global_24B2CF.f_6CE = 0;
    }
}

void func_701()//Position - 0x19CF0
{
    unk_0xD3DFD1F239A937DB(&(Global_24B2CF.f_2C0), &(Global_24B2CF.f_4C7), 519);
    Global_24B2CF.f_1E5 = { Global_24B2CF.f_1EB };
    if (unk_0x429EE9FF15BB9033() == Global_24B2CF.f_2C0.f_206)
    {
        Global_24B2CF.f_6CE = 0;
    }
}

int func_702()//Position - 0x19D38
{
    if ((Global_24B2CF.f_6CE && !unk_0x429EE9FF15BB9033() == Global_24B2CF.f_4C7.f_206) && unk_0xAB2A82A2838B61B7(Global_24B2CF.f_4C7.f_206))
    {
        return 1;
    }
    return 0;
}

void func_703()//Position - 0x19D77
{
    if (func_706() && !func_702())
    {
        func_705();
    }
    func_704();
    Global_24B2CF.f_2C0 = 0;
}

void func_704()//Position - 0x19DA0
{
    int iVar0;
    struct<5> Var1;
    
    Var1.f_4 = 1065353216;
    iVar0 = 0;
    while (iVar0 < 100)
    {
        Global_24B2CF.f_2C0.f_1[iVar0 /*5*/] = { Var1 };
        iVar0++;
    }
}

void func_705()//Position - 0x19DDB
{
    if (func_702())
    {
        if (Global_24B2CF.f_2C0.f_206 == Global_24B2CF.f_4C7.f_206)
        {
            return;
        }
    }
    if (!unk_0x429EE9FF15BB9033() == Global_24B2CF.f_2C0.f_206)
    {
        unk_0xD3DFD1F239A937DB(&(Global_24B2CF.f_4C7), &(Global_24B2CF.f_2C0), 519);
        Global_24B2CF.f_1EB = { Global_24B2CF.f_1E5 };
        Global_24B2CF.f_6CE = 1;
    }
}

int func_706()//Position - 0x19E49
{
    if ((Global_24B2CF.f_6CF && !unk_0x429EE9FF15BB9033() == Global_24B2CF.f_2C0.f_206) && unk_0xAB2A82A2838B61B7(Global_24B2CF.f_2C0.f_206))
    {
        return 1;
    }
    return 0;
}

void func_707()//Position - 0x19E88
{
    unk_0xD3DFD1F239A937DB(&(Global_24B2CF.f_16B), &Global_24C4BF, 121);
}

void func_708()//Position - 0x19EA1
{
    func_709();
    Global_24B2CF.f_8CC = 0;
}

void func_709()//Position - 0x19EB5
{
    int iVar0;
    struct<4> Var1;
    
    iVar0 = 0;
    while (iVar0 < 50)
    {
        Global_24B2CF.f_8CD[iVar0 /*4*/] = { Var1 };
        iVar0++;
    }
}

void func_710()//Position - 0x19EE1
{
    Global_26A0A9.f_1280 = 0;
}

void func_711()//Position - 0x19EF1
{
    if (unk_0x7C7787D2D7139A85() != -1)
    {
        Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1 = 0;
    }
}

void func_712()//Position - 0x19F0F
{
    int iVar0;
    
    iVar0 = unk_0x7C7787D2D7139A85();
    if (iVar0 != -1)
    {
        Global_18DB1B[iVar0 /*614*/] = -1;
    }
}

void func_713(int iParam0, int iParam1)//Position - 0x19F2D
{
    int iVar0;
    
    iVar0 = func_228(iParam0, func_223(iParam1), 0);
    iVar0++;
    if (!func_227(iParam0))
    {
        func_218(iParam0, iVar0, iParam1, 1, 0);
    }
    else
    {
        func_219(iParam0, iVar0, iParam1, 1);
    }
}

int func_714(int iParam0)//Position - 0x19F6E
{
    return Global_1844AE[iParam0 /*871*/].f_D3.f_6;
}

int func_715(int iParam0)//Position - 0x19F83
{
    switch (iParam0)
    {
        case 133:
        case 132:
        case 138:
        case 144:
        case 140:
        case 139:
        case 131:
        case 141:
        case -1:
            return 1;
        
        case 146:
            if (func_445(unk_0x7C7787D2D7139A85()))
            {
                return 1;
            }
            break;
    }
    return 0;
}

void func_716()//Position - 0x19FE5
{
    if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_6C7, 3) || unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_6C7, 4))
    {
        if (unk_0x260395BA7F0C83CB() || unk_0xA710300CD13D2877())
        {
            unk_0xCF33E56642B34516(800);
        }
    }
    if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_6C7, 5))
    {
        unk_0x3B76114EC84D5812(&(Global_26A0A9.f_6C7), 5);
    }
    if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_6C7, 3))
    {
        unk_0x3B76114EC84D5812(&(Global_26A0A9.f_6C7), 3);
    }
    if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_6C7, 4))
    {
        unk_0x3B76114EC84D5812(&(Global_26A0A9.f_6C7), 4);
    }
    func_719(0);
    func_718(0);
    func_717(0);
}

void func_717(int iParam0)//Position - 0x1A086
{
    if (Global_26A0A9.f_11A8 != iParam0)
    {
        Global_26A0A9.f_11A8 = iParam0;
    }
}

void func_718(bool bParam0)//Position - 0x1A0A3
{
    if (Global_26A0A9.f_11A7 != bParam0)
    {
        if (bParam0)
        {
        }
        Global_26A0A9.f_11A7 = bParam0;
    }
}

void func_719(int iParam0)//Position - 0x1A0C8
{
    if (Global_26A0A9.f_11A5 != iParam0)
    {
        Global_26A0A9.f_11A5 = iParam0;
    }
}

int func_720(struct<21> Param0)//Position - 0x1A0E5
{
    func_728(func_729(Param0), Param0);
    unk_0x58B4DE842733F8D9(0);
    unk_0xA019A9258930EC41(func_727(8));
    func_724(0, -1, 0);
    func_722(132);
    unk_0xCCD47D736BFD5DE3(&Local_151, 750);
    unk_0xFF584A1B7842F821(&Local_1518, 161);
    unk_0x50E03C7D74E352C4(0);
    if (!func_721())
    {
        func_682();
    }
    if (unk_0x722688699565161D())
    {
        unk_0x3B462AFBC888A3F1(&(Local_151.f_2D4), &(Local_151.f_2D5));
    }
    Local_1517.f_2 = unk_0xABA4FE93FAF93E28();
    Local_1517.f_9 = unk_0x71EC776E812C6A0A();
    Local_1517.f_8 = unk_0x71EC776E812C6A0A();
    func_454(22, 1);
    return 1;
}

int func_721()//Position - 0x1A178
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
        if (func_677())
        {
            return 0;
        }
        if (func_675(157))
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

void func_722(int iParam0)//Position - 0x1A1D1
{
    func_692();
    func_723();
    func_710();
    Global_1806F7.f_4 = iParam0;
    Global_1806F7.f_5 = iParam0;
    func_453(iParam0, -1);
    func_20(&(Global_1806F7.f_12), 0, 0);
    Global_26A0A9.f_11EC = 0;
    Global_2589A2[0] = func_96();
    Global_2589A2[1] = func_96();
    Global_2589A2[2] = func_96();
    Global_2589A2[3] = func_96();
    Global_2589A2[4] = func_96();
    func_158();
    if (!func_501(func_189()))
    {
        func_188();
    }
    if (func_336() && !func_348())
    {
        unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 16);
    }
    else
    {
        unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 17);
    }
}

void func_723()//Position - 0x1A287
{
    var uVar0;
    
    Global_180710 = uVar0;
}

int func_724(int iParam0, int iParam1, bool bParam2)//Position - 0x1A295
{
    int iVar0;
    
    iVar0 = unk_0x306B26A377F9A5BE();
    while (iVar0 != 2)
    {
        if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
        {
            if (!bParam2)
            {
                func_726();
            }
            else
            {
                return 0;
            }
        }
        if (!func_725())
        {
            if (iParam0 == 0)
            {
                if (!unk_0x393E9918BC37548A())
                {
                    if (!bParam2)
                    {
                        func_726();
                    }
                    else
                    {
                        return 0;
                    }
                }
                if (func_677())
                {
                    if (!bParam2)
                    {
                        func_726();
                    }
                    else
                    {
                        return 0;
                    }
                }
                if (func_675(157))
                {
                    if (!bParam2)
                    {
                        func_726();
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
                    func_726();
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
                func_726();
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
            func_726();
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

bool func_725()//Position - 0x1A3AA
{
    return Global_140852;
}

void func_726()//Position - 0x1A3B6
{
    unk_0x9C9E32388A7886A2();
}

int func_727(int iParam0)//Position - 0x1A3C2
{
    switch (iParam0)
    {
        case 0:
            return 1;
        
        case 1:
            return 1;
        
        case 2:
            return 1;
        
        case 3:
            return 1;
        
        case 4:
            return 1;
        
        case 5:
            return 1;
        
        case 6:
            return 0;
        
        case 7:
            return 1;
        
        case 8:
            return 10;
        
        case 9:
            return 10;
        
        case 10:
            return 1;
        
        case 11:
            return 6;
        
        case 12:
            return 0;
        
        case 13:
            return 1;
        
        case 14:
            return 0;
        
        case 15:
            return 0;
        
        case 16:
            return 0;
        
        case 17:
            return 0;
        
        case 18:
            return 0;
        
        case 19:
            return 0;
        
        default:
    }
    return 0;
}

void func_728(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1A49C
{
    if (!unk_0x393E9918BC37548A())
    {
        func_726();
    }
    unk_0x4CF6FBF2580A447D(iParam0, 0, Param1.f_10);
}

int func_729(int iParam0)//Position - 0x1A4BB
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

