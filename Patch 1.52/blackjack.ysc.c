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
	float fLocal_62 = 0f;
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
	var uLocal_77 = -1;
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
	struct<1652> Local_122 = { 0, 4, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 32, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4 } ;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	struct<8> Local_131[32];
	struct<1583> Local_132 = { 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 4, -1, -1, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	struct<26> Local_137 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<21> Local_138 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	bool bLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141[4] = { 0, 0, 0, 0 };
	int iLocal_142 = 0;
	bool bLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	bool bLocal_151 = 0;
	bool bLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	bool bLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
#endregion

void __EntryFunction__()
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
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	iLocal_142 = 1;
	func_443();
	while (true)
	{
		wait(0);
		if (func_432())
		{
			func_428();
		}
		if (Global_1696903)
		{
			Global_1696903 = 0;
			func_428();
		}
		if (Global_2405074.f_2674 && Global_2409291 != 0)
		{
			if (Global_2409291 != 6)
			{
				func_428();
			}
		}
		if (func_427() && unk_0x03DB5C6AABF8DA46())
		{
			func_428();
		}
		if ((!func_426(unk_0x460153A63B9477BC()) && !func_425(unk_0x460153A63B9477BC())) && !func_424(unk_0x460153A63B9477BC()))
		{
			func_428();
		}
		if (unk_0xFC559366953F62B3() && !unk_0xCE990E643CD9D0E5(Global_4456448.f_34, 7))
		{
			func_428();
		}
		if (func_425(unk_0x460153A63B9477BC()) && func_420() != func_419())
		{
			if (unk_0xCE990E643CD9D0E5(Global_2425869[func_420() /*443*/].f_314.f_4, 1) && unk_0x03DB5C6AABF8DA46())
			{
				func_428();
			}
		}
		if (func_425(unk_0x460153A63B9477BC()) && func_420() != func_419())
		{
			if (Global_2425869[func_420() /*443*/].f_442 != Global_1696913 && unk_0x03DB5C6AABF8DA46())
			{
				func_428();
			}
		}
		if (func_425(unk_0x460153A63B9477BC()) && func_417() != 0)
		{
			func_428();
		}
		iVar0 = 0;
		while (iVar0 < Local_132.f_257)
		{
			if (!func_416())
			{
				if (unk_0xF7DE07F319727299(Local_122.f_1595[iVar0]) && unk_0xF05B7723022657B3(Local_122.f_1595[iVar0]))
				{
					unk_0x22C69FB63CD1A86A(Local_122.f_1595[iVar0], 1);
				}
			}
			iVar0++;
		}
		func_86();
		if (func_416())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	func_85();
	func_82();
	func_75();
	iVar0 = 0;
	while (iVar0 < Local_132.f_257)
	{
		switch (Local_122.f_1520[iVar0])
		{
			case 0:
				if (Global_2516405 != iVar0 && (Global_2516405 != -1 || func_425(unk_0x460153A63B9477BC())))
				{
					Local_122.f_1560[iVar0] = 1;
					func_74(&(Local_122.f_1[iVar0 /*211*/]));
					func_73(1, iVar0);
				}
				break;
			
			case 1:
				if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iVar0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar0])))
				{
					if (unk_0xF05B7723022657B3(Local_122.f_1595[iVar0]))
					{
						Local_122.f_1590[iVar0] = unk_0xAB6BAF5BFCAFB141(Local_122.f_1580[iVar0]);
						if (Local_122.f_1590[iVar0] != -1)
						{
							if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar0]), func_72(), func_71(iVar0), 3))
							{
								if ((unk_0x369E69441C066912(Local_122.f_1590[iVar0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar0]), 2116425869))
								{
									Local_122.f_1580[iVar0] = unk_0xAA579EC5104BFDA9(func_70(iVar0), 0f, 0f, func_69(iVar0), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar0]), Local_122.f_1580[iVar0], func_72(), func_68(iVar0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xB88AF19828BF16ED(Local_122.f_1580[iVar0]);
								}
							}
							else if ((unk_0x369E69441C066912(Local_122.f_1590[iVar0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar0]), 2116425869))
							{
								Local_122.f_1580[iVar0] = unk_0xAA579EC5104BFDA9(func_70(iVar0), 0f, 0f, func_69(iVar0), 2, false, true, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar0]), Local_122.f_1580[iVar0], func_72(), func_71(iVar0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_1580[iVar0]);
							}
						}
					}
					else
					{
						unk_0x5F00FA3094B612F5(Local_122.f_1595[iVar0]);
					}
				}
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if ((Local_122.f_1600[(iVar0 * 4 + iVar1)] != func_419() && Global_2516405 != iVar0) && (Global_2516405 != -1 || func_425(unk_0x460153A63B9477BC())))
					{
						func_73(2, iVar0);
						Local_122.f_1585[iVar0] = iVar1;
						func_67(&(Local_122.f_1651[iVar0 /*2*/]), 0, 0);
						return;
					}
					iVar1++;
				}
				break;
			
			case 2:
				if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iVar0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar0])))
				{
					if (func_66(&(Local_122.f_1651[iVar0 /*2*/])) && func_65(&(Local_122.f_1651[iVar0 /*2*/]), 2000, 0))
					{
						Local_122.f_1580[iVar0] = unk_0xAA579EC5104BFDA9(func_70(iVar0), 0f, 0f, func_69(iVar0), 2, true, false, 1065353216, 0, 1065353216);
						unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar0]), Local_122.f_1580[iVar0], func_72(), func_64(iVar0, Local_122.f_1585[iVar0]), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0xB88AF19828BF16ED(Local_122.f_1580[iVar0]);
						func_63(&(Local_122.f_1651[iVar0 /*2*/]));
					}
				}
				func_2(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_2(int iParam0)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	struct<13> Var10;
	struct<9> Var11;
	
	bVar5 = false;
	if (Local_122.f_1515[iParam0] > 4 && Local_122.f_1515[iParam0] < 9)
	{
		bVar5 = true;
	}
	if ((!func_62(iParam0, bVar5) || Global_2516405 == iParam0) || Local_122.f_1530[iParam0])
	{
		Local_122.f_1530[iParam0] = 1;
		func_61(iParam0);
		return;
	}
	if (unk_0xF7DE07F319727299(Local_122.f_1595[iParam0]))
	{
		if (!unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
		{
			Local_122.f_1540[iParam0] = 0;
			unk_0x5F00FA3094B612F5(Local_122.f_1595[iParam0]);
		}
		else if (!Local_122.f_1540[iParam0])
		{
			unk_0x22C69FB63CD1A86A(Local_122.f_1595[iParam0], 0);
			Local_122.f_1540[iParam0] = 1;
		}
	}
	Local_122.f_1590[iParam0] = unk_0xAB6BAF5BFCAFB141(Local_122.f_1580[iParam0]);
	switch (Local_122.f_1515[iParam0])
	{
		case 0:
			func_60(1, iParam0);
			break;
		
		case 1:
			bVar1 = true;
			iVar3 = 0;
			while (iVar3 < 4)
			{
				iVar2 = Local_122.f_1600[(iParam0 * 4 + iVar3)];
				if (iVar2 != -1)
				{
					if (Local_131[iVar2 /*8*/] != 0 || Local_131[iVar2 /*8*/].f_5 != 0)
					{
						bVar1 = false;
					}
				}
				iVar3++;
			}
			if (bVar1)
			{
				func_59(&(Local_122.f_1[iParam0 /*211*/]));
				func_60(2, iParam0);
			}
			break;
		
		case 2:
			bVar1 = true;
			iVar3 = 0;
			while (iVar3 < 4)
			{
				iVar2 = Local_122.f_1600[(iParam0 * 4 + iVar3)];
				if (iVar2 != -1)
				{
					if (!unk_0xCE990E643CD9D0E5(Local_131[iVar2 /*8*/].f_5, 0))
					{
						bVar1 = false;
					}
				}
				iVar3++;
			}
			if (bVar1)
			{
				if ((unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]))) && unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
				{
					Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
					unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_57(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
					unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
					func_47(4, &(Local_122.f_1595[iParam0]), -1, 0, 0, -1);
				}
				func_60(3, iParam0);
			}
			break;
		
		case 3:
			bVar1 = true;
			if ((unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]))) && unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
			{
				if ((Local_122.f_1590[iParam0] != -1 && unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_57(iParam0), 3)) && ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869)))
				{
					Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1065353216, 0, 1065353216);
					unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
					unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
				}
			}
			if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
			{
				if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
				{
					if (Local_122.f_1590[iParam0] != -1)
					{
						if (Local_122.f_1570[iParam0] == 1)
						{
							if (((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869)) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_72(), func_71(iParam0), 3))
							{
								Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_46(iParam0, -1), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
							}
						}
						else if (((unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_72(), func_46(iParam0, 0), 3) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_72(), func_46(iParam0, 1), 3)) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_72(), func_46(iParam0, 2), 3)) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_72(), func_46(iParam0, 3), 3))
						{
							Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
							unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_45(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
						}
						else if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_72(), func_71(iParam0), 3))
						{
							if ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
							{
								Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_68(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
							}
						}
						else if ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
						{
							Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1065353216, 0, 1065353216);
							unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
						}
					}
				}
				else
				{
					unk_0x5F00FA3094B612F5(Local_122.f_1595[iParam0]);
				}
			}
			if (!func_66(&(Local_122.f_1642[iParam0 /*2*/])))
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					iVar2 = Local_122.f_1600[(iParam0 * 4 + iVar3)];
					if (iVar2 != -1)
					{
						if (unk_0xCE990E643CD9D0E5(Local_131[iVar2 /*8*/], 15))
						{
							func_67(&(Local_122.f_1642[iParam0 /*2*/]), 0, 0);
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					iVar2 = Local_122.f_1600[(iParam0 * 4 + iVar3)];
					if (iVar2 != -1)
					{
						if (!unk_0xCE990E643CD9D0E5(Local_131[iVar2 /*8*/], 15) && !unk_0xCE990E643CD9D0E5(Local_131[iVar2 /*8*/], 16))
						{
							bVar1 = false;
						}
						else
						{
							iVar6++;
						}
					}
					iVar3++;
				}
				if (iVar6 > 0)
				{
					if (bVar1)
					{
						func_63(&(Local_122.f_1642[iParam0 /*2*/]));
						func_47(16, &(Local_122.f_1595[iParam0]), -1, 0, 0, -1);
						func_60(4, iParam0);
					}
					else if (func_65(&(Local_122.f_1642[iParam0 /*2*/]), 15000, 0))
					{
						if (!func_44(iParam0, 22))
						{
							if (func_47(14, &(Local_122.f_1595[iParam0]), -1, 0, 0, -1))
							{
								func_43(iParam0, 22);
							}
						}
					}
				}
				else
				{
					func_63(&(Local_122.f_1642[iParam0 /*2*/]));
				}
			}
			break;
		
		case 4:
			func_36(iParam0);
			break;
		
		case 5:
			if (func_35(Local_122.f_846[iParam0 /*13*/][1]) == 10 || func_35(Local_122.f_846[iParam0 /*13*/][1]) == 11)
			{
				if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
				{
					if (func_34(&(Local_122.f_846[iParam0 /*13*/]), 0) == 21)
					{
						if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
						{
							if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
							{
								Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_33(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
								unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 12);
							}
							else if (((Local_122.f_1590[iParam0] == -1 || unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
							{
								unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
								func_47(3, &(Local_122.f_1595[iParam0]), func_34(&(Local_122.f_846[iParam0 /*13*/]), 0), Local_122.f_846[iParam0 /*13*/].f_12, 1, -1);
								func_29(iParam0);
								func_60(9, iParam0);
							}
							else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 585557868))
							{
								Local_122.f_1525[iParam0] = 1;
							}
						}
					}
					else if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
					{
						if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
						{
							Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
							unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_28(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
							unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
							unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 12);
						}
						else if (((Local_122.f_1590[iParam0] == -1 || unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
						{
							unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
							func_63(&(Local_122.f_1633[iParam0 /*2*/]));
							Local_122.f_1535[iParam0] = 0;
							func_60(6, iParam0);
						}
					}
				}
				else
				{
					func_63(&(Local_122.f_1633[iParam0 /*2*/]));
					Local_122.f_1535[iParam0] = 0;
					func_60(6, iParam0);
				}
			}
			else
			{
				func_63(&(Local_122.f_1633[iParam0 /*2*/]));
				Local_122.f_1535[iParam0] = 0;
				func_60(6, iParam0);
			}
			break;
		
		case 6:
			iVar3 = (iParam0 * 4 + Local_122.f_1575[iParam0]);
			iVar4 = Local_122.f_1600[iVar3];
			if (Local_122.f_1575[iParam0] < 4)
			{
				if ((iVar4 != func_419() && unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 15)) && !((!unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 14) && func_27(&(Local_122.f_899[iVar4 /*9*/])) == 21) && Local_122.f_899[iVar4 /*9*/].f_8 == 2))
				{
					if ((unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]))) && unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
					{
						if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], (0 + Local_122.f_1575[iParam0] * 3)))
						{
							if (((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869)) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_72(), func_71(iParam0), 3))
							{
								Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_26(iParam0, Local_122.f_1575[iParam0], iVar4), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
								unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), (0 + Local_122.f_1575[iParam0] * 3));
							}
						}
						else if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], (1 + Local_122.f_1575[iParam0] * 3)))
						{
							if ((Local_122.f_1590[iParam0] != -1 && ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))) && unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_26(iParam0, Local_122.f_1575[iParam0], iVar4), 3))
							{
								Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_25(iParam0, Local_122.f_1575[iParam0], iVar4, 0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
								unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), (1 + Local_122.f_1575[iParam0] * 3));
							}
						}
						if (unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 14) && (unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 13) || unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 11)))
						{
							if (((((((unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_24(iParam0, 0, 1), 3) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_24(iParam0, 1, 1), 3)) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_24(iParam0, 2, 1), 3)) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_24(iParam0, 3, 1), 3)) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_24(iParam0, 0, 0), 3)) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_24(iParam0, 1, 0), 3)) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_24(iParam0, 2, 0), 3)) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_24(iParam0, 3, 0), 3))
							{
								Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_25(iParam0, Local_122.f_1575[iParam0], iVar4, 0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
								func_23(iParam0);
								unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), (1 + Local_122.f_1575[iParam0] * 3));
							}
						}
						if (((unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_25(iParam0, 0, iVar4, 0), 3) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_25(iParam0, 1, iVar4, 0), 3)) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_25(iParam0, 2, iVar4, 0), 3)) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_25(iParam0, 3, iVar4, 0), 3))
						{
							if (!func_66(&(Local_122.f_1633[iParam0 /*2*/])))
							{
								func_67(&(Local_122.f_1633[iParam0 /*2*/]), 0, 0);
							}
							else if (func_65(&(Local_122.f_1633[iParam0 /*2*/]), 20000, 0))
							{
								Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_25(iParam0, Local_122.f_1575[iParam0], iVar4, 1), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
							}
						}
						else
						{
							func_63(&(Local_122.f_1633[iParam0 /*2*/]));
						}
					}
					if (unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], (1 + Local_122.f_1575[iParam0] * 3)))
					{
						if ((unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 14) && !unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 13)) && !(unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 11) && Local_122.f_1188[iVar4 /*9*/].f_8 > 2))
						{
							if (!unk_0xCE990E643CD9D0E5(Local_122.f_1565[iParam0], iVar4))
							{
								if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
								{
									if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
									{
										if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
										{
											Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
											unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_22(iParam0, Local_122.f_1575[iParam0]), 4f, -2f, 13, 16, 1148846080, 0);
											unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
											Local_122.f_1535[iParam0] = 0;
											func_15(func_21(iParam0, 0, Local_122.f_1575[iParam0], 1), Local_122.f_899[iVar4 /*9*/][1], 0, 0);
											unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 12);
										}
									}
								}
								else if (Local_122.f_1590[iParam0] != -1 && unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
								{
									fVar7 = unk_0x369E69441C066912(Local_122.f_1590[iParam0]);
									if ((fVar7 >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
									{
										if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
										{
											if (Local_122.f_899[iVar4 /*9*/].f_8 == 1)
											{
												Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1065353216, 0, 1065353216);
												unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_14(iParam0, Local_122.f_1575[iParam0], 0), 4f, -2f, 13, 16, 1148846080, 0);
												unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
												Local_122.f_1535[iParam0] = 1;
												func_15(func_21(iParam0, Local_122.f_899[iVar4 /*9*/].f_8, Local_122.f_1575[iParam0], 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
											}
											else if (Local_122.f_1188[iVar4 /*9*/].f_8 == 1)
											{
												Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1065353216, 0, 1065353216);
												unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_14(iParam0, Local_122.f_1575[iParam0], 1), 4f, -4f, 13, 16, 1148846080, 0);
												unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
												func_15(func_21(iParam0, Local_122.f_1188[iVar4 /*9*/].f_8, Local_122.f_1575[iParam0], 1), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
											}
											else
											{
												Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1065353216, 0, 1065353216);
												unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_25(iParam0, Local_122.f_1575[iParam0], iVar4, 0), 2f, -2f, 13, 16, 1148846080, 0);
												unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
												unk_0xBE20AB8238688965(&(Local_122.f_1565[iParam0]), iVar4);
												unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
												unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 19);
												if (Local_122.f_899[iVar4 /*9*/].f_8 == 1)
												{
													func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
													Local_122.f_899[iVar4 /*9*/][1] = uVar0;
													Local_122.f_899[iVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar4 /*9*/])), Local_122.f_899[iVar4 /*9*/].f_8, 0, -1);
												}
												if (Local_122.f_1188[iVar4 /*9*/].f_8 == 1)
												{
													func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
													Local_122.f_1188[iVar4 /*9*/][1] = uVar0;
													Local_122.f_1188[iVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_1188[iVar4 /*9*/])), Local_122.f_1188[iVar4 /*9*/].f_8, 0, -1);
												}
											}
										}
									}
									else if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_14(iParam0, Local_122.f_1575[iParam0], 1), 3))
									{
										if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 585557868))
										{
											Local_122.f_1535[iParam0] = 1;
											if (Local_122.f_1188[iVar4 /*9*/].f_8 == 1)
											{
												func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
												Local_122.f_1188[iVar4 /*9*/][1] = uVar0;
												Local_122.f_1188[iVar4 /*9*/].f_8++;
												func_23(iParam0);
												func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_1188[iVar4 /*9*/])), Local_122.f_1188[iVar4 /*9*/].f_8, 0, -1);
											}
										}
									}
									else if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_14(iParam0, Local_122.f_1575[iParam0], 0), 3))
									{
										if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 585557868))
										{
											if (Local_122.f_899[iVar4 /*9*/].f_8 == 1)
											{
												func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
												Local_122.f_899[iVar4 /*9*/][1] = uVar0;
												Local_122.f_899[iVar4 /*9*/].f_8++;
												func_23(iParam0);
												func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar4 /*9*/])), Local_122.f_899[iVar4 /*9*/].f_8, 0, -1);
											}
										}
									}
									else if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_22(iParam0, Local_122.f_1575[iParam0]), 3))
									{
										if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1345695206))
										{
											if (Local_122.f_899[iVar4 /*9*/].f_8 == 2)
											{
												Local_122 = Local_122.f_899[iVar4 /*9*/][1];
												Local_122.f_899[iVar4 /*9*/][1] = 0;
												Local_122.f_899[iVar4 /*9*/].f_8 = 1;
											}
										}
										else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 585557868))
										{
											if (Local_122.f_1188[iVar4 /*9*/].f_8 == 0)
											{
												Local_122.f_1188[iVar4 /*9*/][0] = Local_122;
												Local_122.f_1188[iVar4 /*9*/].f_8 = 1;
												Local_122.f_899[iVar4 /*9*/][1] = 0;
												Local_122.f_899[iVar4 /*9*/].f_8 = 1;
												unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 19);
											}
											Local_122.f_1535[iParam0] = 1;
										}
									}
								}
							}
							else if (!unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 11))
							{
								if ((((func_27(&(Local_122.f_1188[iVar4 /*9*/])) < 21 && !unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 13)) && Local_122.f_1188[iVar4 /*9*/].f_8 <= 6) && Local_122.f_1188[iVar4 /*9*/].f_8 > 0) || unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
								{
									if ((((((unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 5) && Local_122.f_1188[iVar4 /*9*/].f_8 == 2) || (unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 6) && Local_122.f_1188[iVar4 /*9*/].f_8 == 3)) || (unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 7) && Local_122.f_1188[iVar4 /*9*/].f_8 == 4)) || (unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 8) && Local_122.f_1188[iVar4 /*9*/].f_8 == 5)) || (unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 9) && Local_122.f_1188[iVar4 /*9*/].f_8 == 6)) || unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
									{
										if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
										{
											if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
											{
												if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
												{
													Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
													unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_14(iParam0, Local_122.f_1575[iParam0], 1), 4f, -2f, 13, 16, 1148846080, 0);
													unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
													func_15(func_21(iParam0, Local_122.f_1188[iVar4 /*9*/].f_8, Local_122.f_1575[iParam0], 1), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
													unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 12);
												}
											}
										}
										else if (Local_122.f_1590[iParam0] != -1 && unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
										{
											fVar7 = unk_0x369E69441C066912(Local_122.f_1590[iParam0]);
											if ((fVar7 >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
											{
												if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
												{
													Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1065353216, 0, 1065353216);
													unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_25(iParam0, Local_122.f_1575[iParam0], iVar4, 0), 2f, -2f, 13, 16, 1148846080, 0);
													unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
													unk_0xBE20AB8238688965(&(Local_122.f_1565[iParam0]), iVar4);
													if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 19))
													{
														func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
														Local_122.f_1188[iVar4 /*9*/][Local_122.f_1188[iVar4 /*9*/].f_8] = uVar0;
														Local_122.f_1188[iVar4 /*9*/].f_8++;
														func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_1188[iVar4 /*9*/])), Local_122.f_1188[iVar4 /*9*/].f_8, 0, -1);
														unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 19);
													}
													unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
													unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 19);
												}
											}
											else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 585557868))
											{
												if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 19))
												{
													func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
													Local_122.f_1188[iVar4 /*9*/][Local_122.f_1188[iVar4 /*9*/].f_8] = uVar0;
													Local_122.f_1188[iVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_1188[iVar4 /*9*/])), Local_122.f_1188[iVar4 /*9*/].f_8, 0, -1);
													unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 19);
												}
											}
										}
									}
									else if (!func_44(iParam0, 20))
									{
										if (func_47(2, &(Local_122.f_1595[iParam0]), -1, 0, 0, -1))
										{
											func_43(iParam0, 20);
										}
									}
									else if (func_65(&(Local_122.f_1642[Local_131[iVar4 /*8*/].f_4 /*2*/]), 15000, 0))
									{
										if (!func_44(iParam0, 21))
										{
											if (func_47(15, &(Local_122.f_1595[iParam0]), -1, 0, 0, -1))
											{
												func_43(iParam0, 21);
											}
										}
									}
								}
							}
							else if (Local_122.f_1188[iVar4 /*9*/].f_8 == 2 || unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
							{
								if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
								{
									if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
									{
										if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
										{
											Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
											unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_14(iParam0, Local_122.f_1575[iParam0], 1), 4f, -2f, 13, 16, 1148846080, 0);
											unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
											func_15(func_21(iParam0, Local_122.f_1188[iVar4 /*9*/].f_8, Local_122.f_1575[iParam0], 1), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 1);
											unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 12);
										}
									}
								}
								else if (Local_122.f_1590[iParam0] != -1 && unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
								{
									fVar7 = unk_0x369E69441C066912(Local_122.f_1590[iParam0]);
									if ((fVar7 >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
									{
										if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
										{
											Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1065353216, 0, 1065353216);
											unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_25(iParam0, Local_122.f_1575[iParam0], iVar4, 0), 2f, -2f, 13, 16, 1148846080, 0);
											unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
											unk_0xBE20AB8238688965(&(Local_122.f_1565[iParam0]), iVar4);
											if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 19))
											{
												func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
												Local_122.f_1188[iVar4 /*9*/][Local_122.f_1188[iVar4 /*9*/].f_8] = uVar0;
												Local_122.f_1188[iVar4 /*9*/].f_8++;
												unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 19);
												func_23(iParam0);
												func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_1188[iVar4 /*9*/])), Local_122.f_1188[iVar4 /*9*/].f_8, 0, -1);
											}
											unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
											unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 19);
										}
									}
									else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 585557868))
									{
										if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 19))
										{
											func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
											Local_122.f_1188[iVar4 /*9*/][Local_122.f_1188[iVar4 /*9*/].f_8] = uVar0;
											Local_122.f_1188[iVar4 /*9*/].f_8++;
											unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 19);
											func_23(iParam0);
											func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_1188[iVar4 /*9*/])), Local_122.f_1188[iVar4 /*9*/].f_8, 0, -1);
										}
									}
								}
							}
						}
						else if (!unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 10))
						{
							if ((((func_27(&(Local_122.f_899[iVar4 /*9*/])) < 21 && !unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 12)) && Local_122.f_899[iVar4 /*9*/].f_8 <= 6) && Local_122.f_899[iVar4 /*9*/].f_8 > 0) || unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
							{
								if ((((((unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 0) && Local_122.f_899[iVar4 /*9*/].f_8 == 2) || (unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 1) && Local_122.f_899[iVar4 /*9*/].f_8 == 3)) || (unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 2) && Local_122.f_899[iVar4 /*9*/].f_8 == 4)) || (unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 3) && Local_122.f_899[iVar4 /*9*/].f_8 == 5)) || (unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 4) && Local_122.f_899[iVar4 /*9*/].f_8 == 6)) || unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
								{
									if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
									{
										if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
										{
											if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
											{
												Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
												unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_14(iParam0, Local_122.f_1575[iParam0], 0), 4f, -2f, 13, 16, 1148846080, 0);
												unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
												func_15(func_21(iParam0, Local_122.f_899[iVar4 /*9*/].f_8, Local_122.f_1575[iParam0], 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
												unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 12);
											}
										}
									}
									else if (Local_122.f_1590[iParam0] != -1 && unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
									{
										fVar7 = unk_0x369E69441C066912(Local_122.f_1590[iParam0]);
										if ((fVar7 >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
										{
											if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
											{
												if (((!unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 10) && func_27(&(Local_122.f_899[iVar4 /*9*/])) < 21) && !unk_0xCE990E643CD9D0E5(Local_131[iVar4 /*8*/], 12)) && Local_122.f_899[iVar4 /*9*/].f_8 <= 6)
												{
													Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1065353216, 0, 1065353216);
													unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_25(iParam0, Local_122.f_1575[iParam0], iVar4, 0), 2f, -2f, 13, 16, 1148846080, 0);
													unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
												}
												unk_0xBE20AB8238688965(&(Local_122.f_1565[iParam0]), iVar4);
												if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 19))
												{
													func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
													Local_122.f_899[iVar4 /*9*/][Local_122.f_899[iVar4 /*9*/].f_8] = uVar0;
													Local_122.f_899[iVar4 /*9*/].f_8++;
													func_23(iParam0);
													func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar4 /*9*/])), Local_122.f_899[iVar4 /*9*/].f_8, 0, -1);
													unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 19);
												}
												unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
												unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 19);
											}
										}
										else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 585557868))
										{
											if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 19))
											{
												func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
												Local_122.f_899[iVar4 /*9*/][Local_122.f_899[iVar4 /*9*/].f_8] = uVar0;
												Local_122.f_899[iVar4 /*9*/].f_8++;
												func_23(iParam0);
												func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar4 /*9*/])), Local_122.f_899[iVar4 /*9*/].f_8, 0, -1);
												unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 19);
											}
										}
									}
								}
								else if (!func_44(iParam0, 20))
								{
									if (func_47(2, &(Local_122.f_1595[iParam0]), -1, 0, 0, -1))
									{
										func_43(iParam0, 20);
									}
								}
								else if (func_65(&(Local_122.f_1642[Local_131[iVar4 /*8*/].f_4 /*2*/]), 15000, 0))
								{
									if (!func_44(iParam0, 21))
									{
										if (func_47(15, &(Local_122.f_1595[iParam0]), -1, 0, 0, -1))
										{
											func_43(iParam0, 21);
										}
									}
								}
							}
							else if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
							{
								if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
								{
									Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_12(iParam0, Local_122.f_1575[iParam0], iVar4), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
									func_23(iParam0);
									Local_122.f_1575[iParam0]++;
									Local_122.f_1535[iParam0] = 0;
									func_63(&(Local_122.f_1633[iParam0 /*2*/]));
									unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
									unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 19);
								}
							}
							else if (Local_122.f_1590[iParam0] != -1 && unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
							{
								fVar7 = unk_0x369E69441C066912(Local_122.f_1590[iParam0]);
								if ((fVar7 >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
								{
									Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_12(iParam0, Local_122.f_1575[iParam0], iVar4), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
									func_23(iParam0);
									Local_122.f_1575[iParam0]++;
									Local_122.f_1535[iParam0] = 0;
									func_63(&(Local_122.f_1633[iParam0 /*2*/]));
									unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
									unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 19);
								}
							}
						}
						else if (Local_122.f_899[iVar4 /*9*/].f_8 == 2 || unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
						{
							if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
							{
								if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
								{
									if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
									{
										Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
										unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_14(iParam0, Local_122.f_1575[iParam0], 0), 4f, -2f, 13, 16, 1148846080, 0);
										unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
										func_15(func_21(iParam0, Local_122.f_899[iVar4 /*9*/].f_8, Local_122.f_1575[iParam0], 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 1);
										unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 12);
									}
								}
							}
							else if (Local_122.f_1590[iParam0] != -1 && unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
							{
								fVar7 = unk_0x369E69441C066912(Local_122.f_1590[iParam0]);
								if ((fVar7 >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
								{
									if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
									{
										Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
										unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_12(iParam0, Local_122.f_1575[iParam0], iVar4), 2f, -2f, 13, 16, 1148846080, 0);
										unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
										if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 19))
										{
											func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
											Local_122.f_899[iVar4 /*9*/][Local_122.f_899[iVar4 /*9*/].f_8] = uVar0;
											Local_122.f_899[iVar4 /*9*/].f_8++;
											func_23(iParam0);
											func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar4 /*9*/])), Local_122.f_899[iVar4 /*9*/].f_8, 0, -1);
											unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 19);
										}
										unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
										unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 19);
										func_23(iParam0);
										Local_122.f_1575[iParam0]++;
										Local_122.f_1535[iParam0] = 0;
										func_63(&(Local_122.f_1633[iParam0 /*2*/]));
									}
								}
								else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 585557868))
								{
									if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 19))
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar4 /*9*/][Local_122.f_899[iVar4 /*9*/].f_8] = uVar0;
										Local_122.f_899[iVar4 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar4 /*9*/])), Local_122.f_899[iVar4 /*9*/].f_8, 0, -1);
										unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 19);
									}
								}
							}
						}
					}
				}
				else
				{
					unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), (0 + Local_122.f_1575[iParam0] * 3));
					unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), (1 + Local_122.f_1575[iParam0] * 3));
					unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), (2 + Local_122.f_1575[iParam0] * 3));
					func_23(iParam0);
					Local_122.f_1575[iParam0]++;
					Local_122.f_1535[iParam0] = 0;
					func_63(&(Local_122.f_1633[iParam0 /*2*/]));
					unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
					unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 19);
				}
			}
			if (Local_122.f_1575[iParam0] >= 4)
			{
				if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
				{
					if (!unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_72(), func_71(iParam0), 3))
					{
						if (Local_122.f_1590[iParam0] != -1 && ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869)))
						{
							if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
							{
								unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
								func_60(7, iParam0);
							}
						}
					}
					else
					{
						unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
						func_60(7, iParam0);
					}
				}
				else
				{
					unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
					func_60(7, iParam0);
				}
			}
			break;
		
		case 7:
			if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
				{
					if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
					{
						Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
						unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_11(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
						unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
						unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 12);
					}
				}
				else if (Local_122.f_1590[iParam0] != -1 && unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
				{
					if ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
					{
						unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
						unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 19);
						func_23(iParam0);
						func_47(3, &(Local_122.f_1595[iParam0]), func_34(&(Local_122.f_846[iParam0 /*13*/]), 0), Local_122.f_846[iParam0 /*13*/].f_12, 1, -1);
						func_60(8, iParam0);
					}
					else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 585557868))
					{
						Local_122.f_1525[iParam0] = 1;
					}
				}
			}
			else
			{
				unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
				unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 19);
				func_23(iParam0);
				func_47(3, &(Local_122.f_1595[iParam0]), func_34(&(Local_122.f_846[iParam0 /*13*/]), 0), Local_122.f_846[iParam0 /*13*/].f_12, 1, -1);
				func_60(8, iParam0);
			}
			break;
		
		case 8:
			Local_122.f_1525[iParam0] = 1;
			iVar9 = 0;
			while (iVar9 < 4)
			{
				iVar3 = (iParam0 * 4 + iVar9);
				iVar4 = Local_122.f_1600[iVar3];
				if (iVar4 != func_419())
				{
					if (((((func_27(&(Local_122.f_899[iVar4 /*9*/])) == 21 && Local_122.f_899[iVar4 /*9*/].f_8 > 2) && Local_122.f_899[iVar4 /*9*/].f_8 < 7) || ((func_27(&(Local_122.f_1188[iVar4 /*9*/])) == 21 && Local_122.f_1188[iVar4 /*9*/].f_8 > 2) && Local_122.f_1188[iVar4 /*9*/].f_8 < 7)) || ((func_27(&(Local_122.f_899[iVar4 /*9*/])) < 21 && Local_122.f_899[iVar4 /*9*/].f_8 >= 2) && Local_122.f_899[iVar4 /*9*/].f_8 < 7)) || ((func_27(&(Local_122.f_1188[iVar4 /*9*/])) < 21 && Local_122.f_1188[iVar4 /*9*/].f_8 >= 2) && Local_122.f_1188[iVar4 /*9*/].f_8 < 7))
					{
						iVar8 = 1;
					}
				}
				iVar9++;
			}
			if (func_34(&(Local_122.f_846[iParam0 /*13*/]), 0) >= 17)
			{
				iVar8 = 0;
			}
			if (iVar8 || unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
			{
				if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
				{
					if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
					{
						if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
						{
							Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
							unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_10(iParam0, Local_122.f_846[iParam0 /*13*/].f_12), 4f, -2f, 13, 16, 1148846080, 0);
							unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
							func_15(func_9(iParam0, Local_122.f_846[iParam0 /*13*/].f_12), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 1, 0);
							unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 12);
						}
					}
					else if (Local_122.f_1590[iParam0] != -1 && unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
					{
						fVar7 = unk_0x369E69441C066912(Local_122.f_1590[iParam0]);
						if ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
						{
							if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 19))
							{
								func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
								Local_122.f_846[iParam0 /*13*/][Local_122.f_846[iParam0 /*13*/].f_12] = uVar0;
								Local_122.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
								func_47(3, &(Local_122.f_1595[iParam0]), func_34(&(Local_122.f_846[iParam0 /*13*/]), 0), Local_122.f_846[iParam0 /*13*/].f_12, 1, -1);
								unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 19);
							}
							unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
							unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 19);
						}
						else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 585557868))
						{
							if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 19))
							{
								func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
								Local_122.f_846[iParam0 /*13*/][Local_122.f_846[iParam0 /*13*/].f_12] = uVar0;
								Local_122.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
								func_47(3, &(Local_122.f_1595[iParam0]), func_34(&(Local_122.f_846[iParam0 /*13*/]), 0), Local_122.f_846[iParam0 /*13*/].f_12, 1, -1);
								unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 19);
							}
						}
					}
				}
			}
			else
			{
				func_29(iParam0);
				func_60(9, iParam0);
			}
			break;
		
		case 9:
			Var10 = 11;
			Var11 = 7;
			func_29(iParam0);
			if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 13))
				{
					if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
					{
						if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
						{
							Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
							unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_8(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
							unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 12);
						}
					}
					else if ((Local_122.f_1590[iParam0] != -1 && ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))) && unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
					{
						unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
						unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 13);
					}
				}
				else if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 14))
				{
					iVar3 = iParam0 * 4;
					iVar4 = Local_122.f_1600[iVar3];
					if (iVar4 != func_419() && iVar4 > -1)
					{
						if (Local_122.f_899[iVar4 /*9*/].f_8 > 0 || unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
						{
							if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
							{
								if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
								{
									Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_7(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
									unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 12);
								}
							}
							else if (Local_122.f_1590[iParam0] != -1 && unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
							{
								if ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
								{
									unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
									unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 14);
									Local_122.f_899[iVar4 /*9*/] = { Var11 };
									Local_122.f_1188[iVar4 /*9*/] = { Var11 };
								}
								else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1345695206))
								{
									Local_122.f_899[iVar4 /*9*/] = { Var11 };
									Local_122.f_1188[iVar4 /*9*/] = { Var11 };
								}
							}
						}
						else
						{
							unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 14);
						}
					}
					else
					{
						unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 14);
					}
				}
				else if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 15))
				{
					iVar3 = iParam0 * 4 + 1;
					iVar4 = Local_122.f_1600[iVar3];
					if (iVar4 != func_419() && iVar4 > -1)
					{
						if (Local_122.f_899[iVar4 /*9*/].f_8 > 0 || unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
						{
							if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
							{
								if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
								{
									Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_6(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
									unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 12);
								}
							}
							else if (Local_122.f_1590[iParam0] != -1 && unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
							{
								if ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
								{
									unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
									unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 15);
									Local_122.f_899[iVar4 /*9*/] = { Var11 };
									Local_122.f_1188[iVar4 /*9*/] = { Var11 };
								}
								else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1345695206))
								{
									Local_122.f_899[iVar4 /*9*/] = { Var11 };
									Local_122.f_1188[iVar4 /*9*/] = { Var11 };
								}
							}
						}
						else
						{
							unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 15);
						}
					}
					else
					{
						unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 15);
					}
				}
				else if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 16))
				{
					iVar3 = iParam0 * 4 + 2;
					iVar4 = Local_122.f_1600[iVar3];
					if (iVar4 != func_419() && iVar4 > -1)
					{
						if (Local_122.f_899[iVar4 /*9*/].f_8 > 0 || unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
						{
							if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
							{
								if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
								{
									Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_5(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
									unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 12);
								}
							}
							else if (Local_122.f_1590[iParam0] != -1 && unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
							{
								if ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
								{
									unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
									unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 16);
									Local_122.f_899[iVar4 /*9*/] = { Var11 };
									Local_122.f_1188[iVar4 /*9*/] = { Var11 };
								}
								else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1345695206))
								{
									Local_122.f_899[iVar4 /*9*/] = { Var11 };
									Local_122.f_1188[iVar4 /*9*/] = { Var11 };
								}
							}
						}
						else
						{
							unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 16);
						}
					}
					else
					{
						unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 16);
					}
				}
				else if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 17))
				{
					iVar3 = iParam0 * 4 + 3;
					iVar4 = Local_122.f_1600[iVar3];
					if (iVar4 != func_419() && iVar4 > -1)
					{
						if (Local_122.f_899[iVar4 /*9*/].f_8 > 0 || unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
						{
							if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
							{
								if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
								{
									Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_4(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
									unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 12);
								}
							}
							else if (Local_122.f_1590[iParam0] != -1 && unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
							{
								if ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
								{
									unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
									unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 17);
									Local_122.f_899[iVar4 /*9*/] = { Var11 };
									Local_122.f_1188[iVar4 /*9*/] = { Var11 };
								}
								else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1345695206))
								{
									Local_122.f_899[iVar4 /*9*/] = { Var11 };
									Local_122.f_1188[iVar4 /*9*/] = { Var11 };
								}
							}
						}
						else
						{
							unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 17);
						}
					}
					else
					{
						unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 17);
					}
				}
				else if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 18))
				{
					if (Local_122.f_846[iParam0 /*13*/].f_12 > 0 || unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
					{
						if (!unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], 12))
						{
							if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
							{
								Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_3(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
								unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 12);
							}
						}
						else if (Local_122.f_1590[iParam0] != -1 && unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
						{
							if ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
							{
								if (Local_122.f_1570[iParam0] == 1)
								{
									Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1065353216, 0, 1065353216);
									unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_46(iParam0, -1), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
								}
								else
								{
									Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1065353216, 0, 1065353216);
									unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
									unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
								}
								unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 12);
								unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 18);
								Local_122.f_846[iParam0 /*13*/] = { Var10 };
							}
							else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1345695206))
							{
								Local_122.f_846[iParam0 /*13*/] = { Var10 };
							}
						}
					}
					else
					{
						unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), 18);
					}
				}
				else if (!func_66(&(Local_122.f_1642[iParam0 /*2*/])))
				{
					func_67(&(Local_122.f_1642[iParam0 /*2*/]), 0, 0);
				}
				else if (func_65(&(Local_122.f_1642[iParam0 /*2*/]), 1000, 0))
				{
					Local_122.f_1525[iParam0] = 0;
					Local_122.f_1575[iParam0] = 0;
					Local_122.f_1555[iParam0] = 0;
					Local_122.f_1565[iParam0] = 0;
					func_63(&(Local_122.f_1633[iParam0 /*2*/]));
					func_63(&(Local_122.f_1642[iParam0 /*2*/]));
					Local_122.f_1560[iParam0]++;
					func_60(1, iParam0);
				}
			}
			break;
	}
}

char* func_3(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_own_cards_and_remove";
	}
	return "retrieve_own_cards_and_remove";
}

char* func_4(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_04";
	}
	return "retrieve_cards_player_04";
}

char* func_5(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_03";
	}
	return "retrieve_cards_player_03";
}

char* func_6(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_02";
	}
	return "retrieve_cards_player_02";
}

char* func_7(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_retrieve_cards_player_01";
	}
	return "retrieve_cards_player_01";
}

char* func_8(int iParam0)
{
	int iVar0;
	
	iVar0 = func_27(&(Local_122.f_846[iParam0 /*13*/]));
	if (Local_122.f_1550[iParam0] >= 7)
	{
		if (iVar0 > 21)
		{
			switch (unk_0x344C570D6F8700DF(0, 3))
			{
				case 0:
					return "female_dealer_reaction_good_var01";
				
				case 1:
					return "female_dealer_reaction_good_var02";
				
				case 2:
					return "female_dealer_reaction_good_var03";
				
				default:
			}
		}
		else if (iVar0 == 21)
		{
			switch (unk_0x344C570D6F8700DF(0, 3))
			{
				case 0:
					return "female_dealer_reaction_bad_var01";
				
				case 1:
					return "female_dealer_reaction_bad_var02";
				
				case 2:
					return "female_dealer_reaction_bad_var03";
				
				default:
			}
		}
		else
		{
			switch (unk_0x344C570D6F8700DF(0, 3))
			{
				case 0:
					return "female_dealer_reaction_impartial_var01";
				
				case 1:
					return "female_dealer_reaction_impartial_var02";
				
				case 2:
					return "female_dealer_reaction_impartial_var03";
				}
			
			default:
		}
	}
	else if (iVar0 > 21)
	{
		switch (unk_0x344C570D6F8700DF(0, 3))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			default:
		}
	}
	else if (iVar0 == 21)
	{
		switch (unk_0x344C570D6F8700DF(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			
			default:
		}
	}
	else
	{
		switch (unk_0x344C570D6F8700DF(0, 4))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			}
		
		default:
	}
	return "";
}

int func_9(int iParam0, int iParam1)
{
	return (iParam0 * 11 + iParam1);
}

char* func_10(int iParam0, int iParam1)
{
	if (iParam1 > 8)
	{
		if (Local_122.f_1550[iParam0] >= 7)
		{
			return "female_deal_card_self_card_10";
		}
		return "deal_card_self_card_10";
	}
	else if (iParam1 > 4)
	{
		if (Local_122.f_1550[iParam0] >= 7)
		{
			return "female_deal_card_self_card_06";
		}
		return "deal_card_self_card_06";
	}
	else
	{
		if (Local_122.f_1550[iParam0] >= 7)
		{
			return "female_deal_card_self_second_card";
		}
		return "deal_card_self_second_card";
	}
	return "deal_card_self_second_card";
}

char* func_11(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_turn_card";
	}
	return "turn_card";
}

char* func_12(int iParam0, int iParam1, int iParam2)
{
	if (((iParam2 != func_419() && unk_0xCE990E643CD9D0E5(Local_131[iParam2 /*8*/], 14)) && !unk_0xCE990E643CD9D0E5(Local_131[iParam2 /*8*/], 13)) && !(unk_0xCE990E643CD9D0E5(Local_131[iParam2 /*8*/], 11) && Local_122.f_1188[iParam2 /*9*/].f_8 > 2))
	{
		if (Local_122.f_1550[iParam0] >= 7)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_outro_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_outro_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_outro_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_outro_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_outro_split";
				
				case 1:
					return "dealer_focus_player_02_idle_outro_split";
				
				case 2:
					return "dealer_focus_player_03_idle_outro_split";
				
				case 3:
					return "dealer_focus_player_04_idle_outro_split";
				}
			
			default:
		}
	}
	else if (Local_122.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_dealer_focus_player_01_idle_outro";
			
			case 1:
				return "female_dealer_focus_player_02_idle_outro";
			
			case 2:
				return "female_dealer_focus_player_03_idle_outro";
			
			case 3:
				return "female_dealer_focus_player_04_idle_outro";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_outro";
			
			case 1:
				return "dealer_focus_player_02_idle_outro";
			
			case 2:
				return "dealer_focus_player_03_idle_outro";
			
			case 3:
				return "dealer_focus_player_04_idle_outro";
			}
		
		default:
	}
	return "";
}

int func_13(var uParam0, var uParam1)
{
	if (uParam0->f_209 >= uParam0->f_210)
	{
		return 0;
	}
	*uParam1 = (*uParam0)[uParam0->f_209];
	uParam0->f_209++;
	return 1;
}

char* func_14(int iParam0, int iParam1, bool bParam2)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0:
					return "female_hit_second_card_player_01";
				
				case 1:
					return "female_hit_second_card_player_02";
				
				case 2:
					return "female_hit_second_card_player_03";
				
				case 3:
					return "female_hit_second_card_player_04";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "female_hit_card_player_01";
				
				case 1:
					return "female_hit_card_player_02";
				
				case 2:
					return "female_hit_card_player_03";
				
				case 3:
					return "female_hit_card_player_04";
				}
			
			default:
		}
	}
	else if (bParam2)
	{
		switch (iParam1)
		{
			case 0:
				return "hit_second_card_player_01";
			
			case 1:
				return "hit_second_card_player_02";
			
			case 2:
				return "hit_second_card_player_03";
			
			case 3:
				return "hit_second_card_player_04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "hit_card_player_01";
			
			case 1:
				return "hit_card_player_02";
			
			case 2:
				return "hit_card_player_03";
			
			case 3:
				return "hit_card_player_04";
			}
		
		default:
	}
	return "";
}

void func_15(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	
	Var0 = 1614484900;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	unk_0xB802750B43D4047C(1, &Var0, 6, func_16(1, 1));
}

var func_16(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF1110FE23C67293A(iVar1);
		if (func_20(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x460153A63B9477BC() || iParam0)
			{
				if (bParam1)
				{
					unk_0xBE20AB8238688965(&uVar0, iVar1);
				}
				else if (!func_17(iVar2, 0))
				{
					unk_0xBE20AB8238688965(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_17(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_18(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			bVar0 = unk_0x6CC163E30ECE0790(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_18(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_19();
	}
	if (Global_1312876[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_19()
{
	return Global_1312763;
}

int func_20(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0x166E920FB00B2DBB(iParam0))
		{
			if (bParam1)
			{
				if (!unk_0x5A228A6A51E757C8(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2440049.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_21(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		return (((Local_132.f_257 * 7 * 4 + iParam0 * 7 * 4) + iParam2 * 7) + iParam1);
	}
	return ((iParam0 * 7 * 4 + iParam2 * 7) + iParam1);
}

char* func_22(int iParam0, int iParam1)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_split_card_player_01";
			
			case 1:
				return "female_split_card_player_02";
			
			case 2:
				return "female_split_card_player_03";
			
			case 3:
				return "female_split_card_player_04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "split_card_player_01";
			
			case 1:
				return "split_card_player_02";
			
			case 2:
				return "split_card_player_03";
			
			case 3:
				return "split_card_player_04";
			}
		
		default:
	}
	return "";
}

void func_23(int iParam0)
{
	unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 20);
	unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 21);
	unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 22);
	unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 23);
	unk_0xD2459066EA58CE43(&(Local_122.f_1555[iParam0]), 24);
}

char* func_24(int iParam0, int iParam1, bool bParam2)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		if (bParam2)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_impatient_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_impatient_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_impatient_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_impatient_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_split";
				}
			
			default:
		}
	}
	else if (bParam2)
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_impatient_split";
			
			case 1:
				return "dealer_focus_player_02_idle_impatient_split";
			
			case 2:
				return "dealer_focus_player_03_idle_impatient_split";
			
			case 3:
				return "dealer_focus_player_04_idle_impatient_split";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_split";
			
			case 1:
				return "dealer_focus_player_02_idle_split";
			
			case 2:
				return "dealer_focus_player_03_idle_split";
			
			case 3:
				return "dealer_focus_player_04_idle_split";
			}
		
		default:
	}
	return "";
}

char* func_25(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (((iParam2 != func_419() && unk_0xCE990E643CD9D0E5(Local_131[iParam2 /*8*/], 14)) && !unk_0xCE990E643CD9D0E5(Local_131[iParam2 /*8*/], 13)) && !(unk_0xCE990E643CD9D0E5(Local_131[iParam2 /*8*/], 11) && Local_122.f_1188[iParam2 /*9*/].f_8 > 2))
	{
		if (Local_122.f_1550[iParam0] >= 7)
		{
			if (bParam3)
			{
				switch (iParam1)
				{
					case 0:
						return "female_dealer_focus_player_01_idle_impatient_split";
					
					case 1:
						return "female_dealer_focus_player_02_idle_impatient_split";
					
					case 2:
						return "female_dealer_focus_player_03_idle_impatient_split";
					
					case 3:
						return "female_dealer_focus_player_04_idle_impatient_split";
					
					default:
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						return "female_dealer_focus_player_01_idle_split";
					
					case 1:
						return "female_dealer_focus_player_02_idle_split";
					
					case 2:
						return "female_dealer_focus_player_03_idle_split";
					
					case 3:
						return "female_dealer_focus_player_04_idle_split";
					}
				
				default:
			}
		}
		else if (bParam3)
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_impatient_split";
				
				case 1:
					return "dealer_focus_player_02_idle_impatient_split";
				
				case 2:
					return "dealer_focus_player_03_idle_impatient_split";
				
				case 3:
					return "dealer_focus_player_04_idle_impatient_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_split";
				
				case 1:
					return "dealer_focus_player_02_idle_split";
				
				case 2:
					return "dealer_focus_player_03_idle_split";
				
				case 3:
					return "dealer_focus_player_04_idle_split";
				}
			
			default:
		}
	}
	else if (Local_122.f_1550[iParam0] >= 7)
	{
		if (bParam3)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_impatient";
				
				case 1:
					return "female_dealer_focus_player_02_idle_impatient";
				
				case 2:
					return "female_dealer_focus_player_03_idle_impatient";
				
				case 3:
					return "female_dealer_focus_player_04_idle_impatient";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle";
				
				case 1:
					return "female_dealer_focus_player_02_idle";
				
				case 2:
					return "female_dealer_focus_player_03_idle";
				
				case 3:
					return "female_dealer_focus_player_04_idle";
				}
			
			default:
		}
	}
	else if (bParam3)
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_impatient";
			
			case 1:
				return "dealer_focus_player_02_idle_impatient";
			
			case 2:
				return "dealer_focus_player_03_idle_impatient";
			
			case 3:
				return "dealer_focus_player_04_idle_impatient";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle";
			
			case 1:
				return "dealer_focus_player_02_idle";
			
			case 2:
				return "dealer_focus_player_03_idle";
			
			case 3:
				return "dealer_focus_player_04_idle";
			}
		
		default:
	}
	return "";
}

char* func_26(int iParam0, int iParam1, int iParam2)
{
	if (((iParam2 != func_419() && unk_0xCE990E643CD9D0E5(Local_131[iParam2 /*8*/], 14)) && !unk_0xCE990E643CD9D0E5(Local_131[iParam2 /*8*/], 13)) && !(unk_0xCE990E643CD9D0E5(Local_131[iParam2 /*8*/], 11) && Local_122.f_1188[iParam2 /*9*/].f_8 > 2))
	{
		if (Local_122.f_1550[iParam0] >= 7)
		{
			switch (iParam1)
			{
				case 0:
					return "female_dealer_focus_player_01_idle_intro_split";
				
				case 1:
					return "female_dealer_focus_player_02_idle_intro_split";
				
				case 2:
					return "female_dealer_focus_player_03_idle_intro_split";
				
				case 3:
					return "female_dealer_focus_player_04_idle_intro_split";
				
				default:
			}
		}
		else
		{
			switch (iParam1)
			{
				case 0:
					return "dealer_focus_player_01_idle_intro_split";
				
				case 1:
					return "dealer_focus_player_02_idle_intro_split";
				
				case 2:
					return "dealer_focus_player_03_idle_intro_split";
				
				case 3:
					return "dealer_focus_player_04_idle_intro_split";
				}
			
			default:
		}
	}
	else if (Local_122.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_dealer_focus_player_01_idle_intro";
			
			case 1:
				return "female_dealer_focus_player_02_idle_intro";
			
			case 2:
				return "female_dealer_focus_player_03_idle_intro";
			
			case 3:
				return "female_dealer_focus_player_04_idle_intro";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "dealer_focus_player_01_idle_intro";
			
			case 1:
				return "dealer_focus_player_02_idle_intro";
			
			case 2:
				return "dealer_focus_player_03_idle_intro";
			
			case 3:
				return "dealer_focus_player_04_idle_intro";
			}
		
		default:
	}
	return "";
}

int func_27(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iVar3 = func_35((*uParam0)[iVar2]);
		iVar0 = (iVar0 + iVar3);
		if (iVar3 == 11)
		{
			iVar1++;
		}
		iVar2++;
	}
	while (iVar0 > 21 && iVar1 > 0)
	{
		iVar0 = (iVar0 - 10);
		iVar1 = (iVar1 - 1);
	}
	return iVar0;
}

char* func_28(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_check_card";
	}
	return "check_card";
}

void func_29(int iParam0)
{
	if (func_44(iParam0, 23))
	{
		return;
	}
	if (func_44(iParam0, 24))
	{
		if (func_47(13, &(Local_122.f_1595[iParam0]), -1, 0, 0, -1))
		{
			func_43(iParam0, 23);
		}
		return;
	}
	if (func_30(iParam0))
	{
		func_43(iParam0, 24);
	}
	else
	{
		func_43(iParam0, 23);
	}
}

int func_30(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = (iParam0 * 4 + iVar0);
		iVar2 = Local_122.f_1600[iVar1];
		if (iVar2 == func_419())
		{
		}
		else if (!func_31(&iVar2, iParam0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = *iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 1;
	}
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return 1;
	}
	iVar1 = func_34(&(Local_122.f_846[iParam1 /*13*/]), 0);
	iVar2 = Local_122.f_846[iParam1 /*13*/].f_12;
	iVar3 = func_27(&(Local_122.f_899[iVar0 /*9*/]));
	iVar4 = Local_122.f_899[iVar0 /*9*/].f_8;
	iVar5 = func_27(&(Local_122.f_1188[iVar0 /*9*/]));
	iVar6 = Local_122.f_1188[iVar0 /*9*/].f_8;
	if (func_32(iVar1, iVar2, iVar3, iVar4) && func_32(iVar1, iVar2, iVar5, iVar6))
	{
		return 1;
	}
	return 0;
}

int func_32(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam3 <= 0)
	{
		return 1;
	}
	bVar0 = (iParam1 == 2 && iParam0 == 21);
	bVar1 = (iParam3 == 2 && iParam2 == 21);
	if (bVar1)
	{
		return 0;
	}
	if (bVar0)
	{
		return 1;
	}
	if (iParam0 > 21)
	{
		return 0;
	}
	if (iParam2 > 21)
	{
		return 1;
	}
	if (iParam3 >= 7)
	{
		return 0;
	}
	if (iParam0 > iParam2)
	{
		return 1;
	}
	return 0;
}

char* func_33(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_check_and_turn_card";
	}
	return "check_and_turn_card";
}

int func_34(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 11)
	{
		if (iParam1 && iVar2 == 0)
		{
		}
		else
		{
			iVar3 = func_35((*uParam0)[iVar2]);
			iVar0 = (iVar0 + iVar3);
			if (iVar3 == 11)
			{
				iVar1++;
			}
		}
		iVar2++;
	}
	while (iVar0 > 21 && iVar1 > 0)
	{
		iVar0 = (iVar0 - 10);
		iVar1 = (iVar1 - 1);
	}
	return iVar0;
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 15:
		case 28:
		case 41:
			return 2;
		
		case 3:
		case 16:
		case 29:
		case 42:
			return 3;
		
		case 4:
		case 17:
		case 30:
		case 43:
			return 4;
		
		case 5:
		case 18:
		case 31:
		case 44:
			return 5;
		
		case 6:
		case 19:
		case 32:
		case 45:
			return 6;
		
		case 7:
		case 20:
		case 33:
		case 46:
			return 7;
		
		case 8:
		case 21:
		case 34:
		case 47:
			return 8;
		
		case 9:
		case 22:
		case 35:
		case 48:
			return 9;
		
		case 10:
		case 23:
		case 36:
		case 49:
		case 11:
		case 24:
		case 37:
		case 50:
		case 12:
		case 25:
		case 38:
		case 51:
		case 13:
		case 26:
		case 39:
		case 52:
			return 10;
		
		case 1:
		case 14:
		case 27:
		case 40:
			return 11;
		
		default:
	}
	return 0;
}

void func_36(int iParam0)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	
	switch (Local_122.f_1510[iParam0])
	{
		case 0:
			iVar2 = Local_122.f_1600[iParam0 * 4];
			if (iVar2 >= 0)
			{
				if (Local_131[iVar2 /*8*/].f_4 == iParam0 && unk_0xCE990E643CD9D0E5(Local_131[iVar2 /*8*/], 15))
				{
					if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
					{
						if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
						{
							if (!unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_42(iParam0), 3))
							{
								Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_42(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_122.f_899[iVar2 /*9*/].f_8, 0, 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_122.f_1590[iParam0] != -1)
							{
								if ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][0] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 585557868))
								{
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][0] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
									Local_122.f_899[iVar2 /*9*/][0] = uVar0;
									Local_122.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(1, iParam0);
			}
			break;
		
		case 1:
			iVar2 = Local_122.f_1600[iParam0 * 4 + 1];
			if (iVar2 >= 0)
			{
				if (Local_131[iVar2 /*8*/].f_4 == iParam0 && unk_0xCE990E643CD9D0E5(Local_131[iVar2 /*8*/], 15))
				{
					if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
					{
						if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
						{
							if (!unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_40(iParam0), 3))
							{
								Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_40(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_122.f_899[iVar2 /*9*/].f_8, 1, 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_122.f_1590[iParam0] != -1)
							{
								if ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][0] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 585557868))
								{
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][0] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
									Local_122.f_899[iVar2 /*9*/][0] = uVar0;
									Local_122.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(2, iParam0);
			}
			break;
		
		case 2:
			iVar2 = Local_122.f_1600[iParam0 * 4 + 2];
			if (iVar2 >= 0)
			{
				if (Local_131[iVar2 /*8*/].f_4 == iParam0 && unk_0xCE990E643CD9D0E5(Local_131[iVar2 /*8*/], 15))
				{
					if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
					{
						if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
						{
							if (!unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_39(iParam0), 3))
							{
								Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_39(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_122.f_899[iVar2 /*9*/].f_8, 2, 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_122.f_1590[iParam0] != -1)
							{
								if ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][0] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 585557868))
								{
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][0] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
									Local_122.f_899[iVar2 /*9*/][0] = uVar0;
									Local_122.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(3, iParam0);
			}
			break;
		
		case 3:
			iVar2 = Local_122.f_1600[iParam0 * 4 + 3];
			if (iVar2 >= 0)
			{
				if (Local_131[iVar2 /*8*/].f_4 == iParam0 && unk_0xCE990E643CD9D0E5(Local_131[iVar2 /*8*/], 15))
				{
					if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
					{
						if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
						{
							if (!unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_38(iParam0), 3))
							{
								Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_38(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_122.f_899[iVar2 /*9*/].f_8, 3, 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_122.f_1590[iParam0] != -1)
							{
								if ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][0] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 585557868))
								{
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][0] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_122.f_899[iVar2 /*9*/].f_8 == 0)
								{
									func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
									Local_122.f_899[iVar2 /*9*/][0] = uVar0;
									Local_122.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(4, iParam0);
			}
			break;
		
		case 4:
			if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
			{
				if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
				{
					if (!unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_37(iParam0), 3))
					{
						Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
						unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_37(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
						unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
						func_15(func_9(iParam0, 0), 0, 1, 0);
					}
					else if (Local_122.f_1590[iParam0] != -1)
					{
						if ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
						{
							bVar1 = true;
							if (Local_122.f_846[iParam0 /*13*/].f_12 == 0)
							{
								func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
								Local_122.f_846[iParam0 /*13*/][0] = uVar0;
								Local_122.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
							}
						}
						else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 585557868))
						{
							if (Local_122.f_846[iParam0 /*13*/].f_12 == 0)
							{
								func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
								Local_122.f_846[iParam0 /*13*/][0] = uVar0;
								Local_122.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
							}
						}
					}
					else
					{
						bVar1 = true;
						if (Local_122.f_846[iParam0 /*13*/].f_12 == 0)
						{
							func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
							Local_122.f_846[iParam0 /*13*/][0] = uVar0;
							Local_122.f_846[iParam0 /*13*/].f_12++;
							func_23(iParam0);
						}
					}
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(5, iParam0);
			}
			break;
		
		case 5:
			iVar2 = Local_122.f_1600[iParam0 * 4];
			if (iVar2 >= 0)
			{
				if (Local_131[iVar2 /*8*/].f_4 == iParam0 && unk_0xCE990E643CD9D0E5(Local_131[iVar2 /*8*/], 15))
				{
					if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
					{
						if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
						{
							if (!unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_42(iParam0), 3))
							{
								Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_42(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_122.f_899[iVar2 /*9*/].f_8, 0, 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_122.f_1590[iParam0] != -1)
							{
								if ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][1] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 585557868))
								{
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][1] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
									Local_122.f_899[iVar2 /*9*/][1] = uVar0;
									Local_122.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(6, iParam0);
			}
			break;
		
		case 6:
			iVar2 = Local_122.f_1600[iParam0 * 4 + 1];
			if (iVar2 >= 0)
			{
				if (Local_131[iVar2 /*8*/].f_4 == iParam0 && unk_0xCE990E643CD9D0E5(Local_131[iVar2 /*8*/], 15))
				{
					if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
					{
						if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
						{
							if (!unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_40(iParam0), 3))
							{
								Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_40(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_122.f_899[iVar2 /*9*/].f_8, 1, 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_122.f_1590[iParam0] != -1)
							{
								if ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][1] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 585557868))
								{
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][1] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
									Local_122.f_899[iVar2 /*9*/][1] = uVar0;
									Local_122.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(7, iParam0);
			}
			break;
		
		case 7:
			iVar2 = Local_122.f_1600[iParam0 * 4 + 2];
			if (iVar2 >= 0)
			{
				if (Local_131[iVar2 /*8*/].f_4 == iParam0 && unk_0xCE990E643CD9D0E5(Local_131[iVar2 /*8*/], 15))
				{
					if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
					{
						if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
						{
							if (!unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_39(iParam0), 3))
							{
								Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_39(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_122.f_899[iVar2 /*9*/].f_8, 2, 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_122.f_1590[iParam0] != -1)
							{
								if ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][1] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 585557868))
								{
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][1] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
									Local_122.f_899[iVar2 /*9*/][1] = uVar0;
									Local_122.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(8, iParam0);
			}
			break;
		
		case 8:
			iVar2 = Local_122.f_1600[iParam0 * 4 + 3];
			if (iVar2 >= 0)
			{
				if (Local_131[iVar2 /*8*/].f_4 == iParam0 && unk_0xCE990E643CD9D0E5(Local_131[iVar2 /*8*/], 15))
				{
					if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
					{
						if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
						{
							if (!unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_38(iParam0), 3))
							{
								Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
								unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_38(iParam0), 4f, -2f, 13, 16, 1148846080, 0);
								unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
								func_15(func_21(iParam0, Local_122.f_899[iVar2 /*9*/].f_8, 3, 0), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 0, 0);
							}
							else if (Local_122.f_1590[iParam0] != -1)
							{
								if ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
								{
									bVar1 = true;
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][1] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
								else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 585557868))
								{
									if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
									{
										func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
										Local_122.f_899[iVar2 /*9*/][1] = uVar0;
										Local_122.f_899[iVar2 /*9*/].f_8++;
										func_23(iParam0);
										func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
									}
								}
							}
							else
							{
								bVar1 = true;
								if (Local_122.f_899[iVar2 /*9*/].f_8 == 1)
								{
									func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
									Local_122.f_899[iVar2 /*9*/][1] = uVar0;
									Local_122.f_899[iVar2 /*9*/].f_8++;
									func_23(iParam0);
									func_47(3, &(Local_122.f_1595[iParam0]), func_27(&(Local_122.f_899[iVar2 /*9*/])), Local_122.f_899[iVar2 /*9*/].f_8, 0, -1);
								}
							}
						}
					}
					else
					{
						bVar1 = true;
					}
				}
				else
				{
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				bVar1 = false;
				func_41(9, iParam0);
			}
			break;
		
		case 9:
			if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
			{
				if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
				{
					if (!unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_58(), func_10(iParam0, 0), 3))
					{
						Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, true, false, 1065353216, 0, 1065353216);
						unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_58(), func_10(iParam0, 0), 4f, -2f, 13, 16, 1148846080, 0);
						unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
						func_15(func_9(iParam0, 1), Local_122.f_1[iParam0 /*211*/][Local_122.f_1[iParam0 /*211*/].f_209], 1, 0);
					}
					else if (Local_122.f_1590[iParam0] != -1)
					{
						if ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869))
						{
							Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1065353216, 0, 1065353216);
							unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
							if (Local_122.f_846[iParam0 /*13*/].f_12 == 1)
							{
								func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
								Local_122.f_846[iParam0 /*13*/][1] = uVar0;
								Local_122.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
								func_47(3, &(Local_122.f_1595[iParam0]), func_34(&(Local_122.f_846[iParam0 /*13*/]), 1), Local_122.f_846[iParam0 /*13*/].f_12, 1, -1);
							}
							bVar1 = true;
						}
						else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 585557868))
						{
							if (Local_122.f_846[iParam0 /*13*/].f_12 == 1)
							{
								func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
								Local_122.f_846[iParam0 /*13*/][1] = uVar0;
								Local_122.f_846[iParam0 /*13*/].f_12++;
								func_23(iParam0);
								func_47(3, &(Local_122.f_1595[iParam0]), func_34(&(Local_122.f_846[iParam0 /*13*/]), 1), Local_122.f_846[iParam0 /*13*/].f_12, 1, -1);
							}
						}
					}
					else
					{
						Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1065353216, 0, 1065353216);
						unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
						bVar1 = true;
						if (Local_122.f_846[iParam0 /*13*/].f_12 == 1)
						{
							func_13(&(Local_122.f_1[iParam0 /*211*/]), &uVar0);
							Local_122.f_846[iParam0 /*13*/][1] = uVar0;
							Local_122.f_846[iParam0 /*13*/].f_12++;
							func_23(iParam0);
							func_47(3, &(Local_122.f_1595[iParam0]), func_34(&(Local_122.f_846[iParam0 /*13*/]), 1), Local_122.f_846[iParam0 /*13*/].f_12, 1, -1);
						}
					}
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_41(0, iParam0);
				func_60(5, iParam0);
			}
			break;
	}
}

char* func_37(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_self";
	}
	return "deal_card_self";
}

char* func_38(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_04";
	}
	return "deal_card_player_04";
}

char* func_39(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_03";
	}
	return "deal_card_player_03";
}

char* func_40(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_02";
	}
	return "deal_card_player_02";
}

void func_41(int iParam0, int iParam1)
{
	Local_122.f_1510[iParam1] = iParam0;
}

char* func_42(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_deal_card_player_01";
	}
	return "deal_card_player_01";
}

void func_43(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return;
	}
	unk_0xBE20AB8238688965(&(Local_122.f_1555[iParam0]), iParam1);
}

bool func_44(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 > 4)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Local_122.f_1555[iParam0], iParam1);
}

char* func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_72(), func_46(iParam0, 0), 3))
	{
		iVar0 = 0;
	}
	else if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_72(), func_46(iParam0, 1), 3))
	{
		iVar0 = 1;
	}
	else if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_72(), func_46(iParam0, 2), 3))
	{
		iVar0 = 2;
	}
	else if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_72(), func_46(iParam0, 3), 3))
	{
		iVar0 = 3;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 != iVar0 && Local_122.f_1600[(iParam0 * 4 + iVar2)] != func_419())
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (Local_122.f_1550[iParam0] >= 7)
	{
		switch (iVar1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

char* func_46(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_122.f_1600[(iParam0 * 4 + iVar1)] != func_419())
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (iParam1 >= 0)
	{
		iVar0 = iParam1;
	}
	if (Local_122.f_1550[iParam0] >= 7)
	{
		switch (iVar0)
		{
			case 0:
				return "female_idle_single_p01";
			
			case 1:
				return "female_idle_single_p02";
			
			case 2:
				return "female_idle_single_p03";
			
			case 3:
				return "female_idle_single_p04";
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return "idle_single_p01";
			
			case 1:
				return "idle_single_p02";
			
			case 2:
				return "idle_single_p03";
			
			case 3:
				return "idle_single_p04";
			}
		
		default:
	}
	return "";
}

int func_47(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	char cVar0[64];
	int iVar1;
	char* sVar2;
	
	if (iParam0 == 3)
	{
		if (iParam2 > 21)
		{
			if (bParam4)
			{
				iParam0 = 12;
			}
			else
			{
				iParam0 = 0;
			}
		}
		else if (iParam2 == 21)
		{
			if (iParam3 == 2)
			{
				iParam0 = 1;
			}
		}
	}
	StringCopy(&cVar0, func_49(iParam0, iParam2, iParam5), 64);
	if (unk_0x7BCC91F3C1CF24E8(&cVar0))
	{
		return 0;
	}
	iVar1 = unk_0x3C6C6327BA564AEE(*uParam1);
	if (unk_0xA59F96B50B97E63C(iVar1, 0))
	{
		return 0;
	}
	if (!unk_0x3D70CCF2C9B362CD(*uParam1))
	{
		return 0;
	}
	if (!unk_0xAA5B806352173DEA(iVar1))
	{
		return 0;
	}
	if (unk_0x6F683C1C0BB1BA8D(iVar1))
	{
		return 0;
	}
	sVar2 = func_48(7);
	unk_0xFDCFA91E51EDB61F(iVar1, &cVar0, sVar2, 1);
	return 1;
}

int func_48(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

char* func_49(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_BJACK_DEALER_PLAYER_BUST";
		
		case 1:
			return "MINIGAME_BJACK_DEALER_BLACKJACK";
		
		case 2:
			return "MINIGAME_BJACK_DEALER_ANOTHER_CARD";
		
		case 3:
			return func_56(iParam1);
		
		case 4:
			return "MINIGAME_DEALER_PLACE_BET";
		
		case 5:
			return "MINIGAME_DEALER_ANOTHER_GO";
		
		case 7:
			return "MINIGAME_DEALER_REJOIN_TABLE";
		
		case 6:
			return func_50(iParam2);
		
		case 8:
			return "MINIGAME_DEALER_LEAVE_GOOD_GAME";
		
		case 9:
			return "MINIGAME_DEALER_LEAVE_BAD_GAME";
		
		case 10:
			return "MINIGAME_DEALER_LEAVE_NEUTRAL_GAME";
		
		case 11:
			return "MINIGAME_DEALER_REFUSE_BETS";
		
		case 12:
			return "MINIGAME_DEALER_BUSTS";
		
		case 13:
			return "MINIGAME_DEALER_WINS";
		
		case 15:
			return "MINIGAME_DEALER_COMMENT_SLOW";
		
		case 16:
			return "MINIGAME_DEALER_CLOSED_BETS";
		
		case 14:
			return "MINIGAME_DEALER_PLACE_CHIPS";
		
		default:
	}
	return "";
}

char* func_50(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = unk_0x628A51AC66E80772(iParam0);
	if (!unk_0xBD09DF93F957A0CF(iVar0))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar1 = unk_0x9019589211A13B02(iVar0);
	if (!func_20(iVar1, 1, 1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	iVar2 = unk_0x1FA7B77001D60F9D(iVar1);
	if (func_54(iVar2))
	{
		return "MINIGAME_DEALER_GREET_DRUNK";
	}
	if (!func_52(&iVar1))
	{
		return "MINIGAME_DEALER_GREET";
	}
	if (func_51(iVar1))
	{
		return "MINIGAME_DEALER_GREET_FEMALE";
	}
	return "MINIGAME_DEALER_GREET_MALE";
}

int func_51(int iParam0)
{
	if (unk_0x36FE6D3220816ADA(unk_0x1FA7B77001D60F9D(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_52(int iParam0)
{
	int iVar0;
	
	iVar0 = Local_131[*iParam0 /*8*/].f_4;
	return func_53(iVar0, Local_132.f_257);
}

int func_53(int iParam0, int iParam1)
{
	if ((iParam0 == 2 || iParam0 == 3) || iParam1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_55(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_55(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_42588[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_42588[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

char* func_56(int iParam0)
{
	if (iParam0 <= 1 || iParam0 > 21)
	{
		return "";
	}
	switch (iParam0)
	{
		case 2:
			return "MINIGAME_BJACK_DEALER_2";
		
		case 3:
			return "MINIGAME_BJACK_DEALER_3";
		
		case 4:
			return "MINIGAME_BJACK_DEALER_4";
		
		case 5:
			return "MINIGAME_BJACK_DEALER_5";
		
		case 6:
			return "MINIGAME_BJACK_DEALER_6";
		
		case 7:
			return "MINIGAME_BJACK_DEALER_7";
		
		case 8:
			return "MINIGAME_BJACK_DEALER_8";
		
		case 9:
			return "MINIGAME_BJACK_DEALER_9";
		
		case 10:
			return "MINIGAME_BJACK_DEALER_10";
		
		case 11:
			return "MINIGAME_BJACK_DEALER_11";
		
		case 12:
			return "MINIGAME_BJACK_DEALER_12";
		
		case 13:
			return "MINIGAME_BJACK_DEALER_13";
		
		case 14:
			return "MINIGAME_BJACK_DEALER_14";
		
		case 15:
			return "MINIGAME_BJACK_DEALER_15";
		
		case 16:
			return "MINIGAME_BJACK_DEALER_16";
		
		case 17:
			return "MINIGAME_BJACK_DEALER_17";
		
		case 18:
			return "MINIGAME_BJACK_DEALER_18";
		
		case 19:
			return "MINIGAME_BJACK_DEALER_19";
		
		case 20:
			return "MINIGAME_BJACK_DEALER_20";
		
		case 21:
			return "MINIGAME_BJACK_DEALER_21";
		
		default:
	}
	return "";
}

char* func_57(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_place_bet_request";
	}
	return "place_bet_request";
}

char* func_58()
{
	return "anim_casino_b@amb@casino@games@blackjack@dealer";
}

void func_59(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	uParam0->f_209 = 0;
	uParam0->f_210 = 208;
	iVar3 = 0;
	while (iVar3 < 5)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_210)
		{
			iVar1 = unk_0xE4106B13B93D6F83(0, uParam0->f_210);
			uVar0 = (*uParam0)[iVar2];
			(*uParam0)[iVar2] = (*uParam0)[iVar1];
			(*uParam0)[iVar1] = uVar0;
			iVar2++;
		}
		iVar3++;
	}
}

void func_60(int iParam0, int iParam1)
{
	Local_122.f_1515[iParam1] = iParam0;
}

void func_61(int iParam0)
{
	struct<13> Var0;
	
	Local_122.f_1530[iParam0] = 1;
	if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0])))
	{
		if (!unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), func_72(), func_71(iParam0), 3))
		{
			if (unk_0xF05B7723022657B3(Local_122.f_1595[iParam0]))
			{
				Local_122.f_1590[iParam0] = unk_0xAB6BAF5BFCAFB141(Local_122.f_1580[iParam0]);
				if (Local_122.f_1590[iParam0] == -1 || ((unk_0x369E69441C066912(Local_122.f_1590[iParam0]) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), -1424880317)) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), 2116425869)))
				{
					Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1065353216, 0, 1065353216);
					unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_71(iParam0), 2f, -2f, 13, 16, 1148846080, 0);
					unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
				}
			}
			else
			{
				unk_0x5F00FA3094B612F5(Local_122.f_1595[iParam0]);
			}
			return;
		}
	}
	Local_122.f_1555[iParam0] = 0;
	Local_122.f_1565[iParam0] = 0;
	func_63(&(Local_122.f_1633[iParam0 /*2*/]));
	Var0 = 11;
	Local_122.f_846[iParam0 /*13*/] = { Var0 };
	Local_122.f_1525[iParam0] = 0;
	Local_122.f_1575[iParam0] = 0;
	func_63(&(Local_122.f_1642[iParam0 /*2*/]));
	func_73(1, iParam0);
	func_60(0, iParam0);
	func_41(0, iParam0);
	Local_122.f_1560[iParam0]++;
	Local_122.f_1530[iParam0] = 0;
}

int func_62(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (bParam1)
		{
			if (Local_122.f_1600[(iParam0 * 4 + iVar1)] != func_419() && Local_122.f_899[Local_122.f_1600[(iParam0 * 4 + iVar1)] /*9*/].f_8 > 0)
			{
				iVar0++;
			}
		}
		else if (Local_122.f_1600[(iParam0 * 4 + iVar1)] != func_419())
		{
			iVar0++;
		}
		iVar1++;
	}
	if (Local_122.f_1570[iParam0] != iVar0)
	{
		Local_122.f_1570[iParam0] = iVar0;
	}
	if (iVar0 > 0)
	{
		return 1;
	}
	return 0;
}

void func_63(var uParam0)
{
	uParam0->f_1 = 0;
}

char* func_64(int iParam0, int iParam1)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		switch (iParam1)
		{
			case 0:
				return "female_acknowledge_p01";
			
			case 1:
				return "female_acknowledge_p02";
			
			case 2:
				return "female_acknowledge_p03";
			
			case 3:
				return "female_acknowledge_p04";
			
			default:
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				return "acknowledge_p01";
			
			case 1:
				return "acknowledge_p02";
			
			case 2:
				return "acknowledge_p03";
			
			case 3:
				return "acknowledge_p04";
			}
		
		default:
	}
	return "";
}

int func_65(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_67(uParam0, bParam2, 0);
	if (unk_0x25DDB354A40FFCDB() && !bParam2)
	{
		if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x578C4EF320340AF7(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_66(var uParam0)
{
	return uParam0->f_1;
}

void func_67(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (unk_0x25DDB354A40FFCDB() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = unk_0x6CAAB7E78B5D978A();
			}
			else
			{
				*uParam0 = unk_0x29B9AF1CB5B8175D();
			}
		}
		else
		{
			*uParam0 = unk_0x578C4EF320340AF7();
		}
		uParam0->f_1 = 1;
	}
}

char* func_68(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		switch (unk_0x344C570D6F8700DF(0, 5))
		{
			case 0:
				return "female_idle_var_01";
			
			case 1:
				return "female_idle_var_02";
			
			case 2:
				return "female_idle_var_03";
			
			case 3:
				return "female_idle_var_04";
			
			case 4:
				return "female_idle_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0x344C570D6F8700DF(0, 5))
		{
			case 0:
				return "idle_var_01";
			
			case 1:
				return "idle_var_02";
			
			case 2:
				return "idle_var_03";
			
			case 3:
				return "idle_var_04";
			
			case 4:
				return "idle_var_05";
			}
		
		default:
	}
	return "";
}

float func_69(int iParam0)
{
	if (Local_132.f_257 == 1)
	{
		return -122f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return -134.69f;
			
			case 1:
				return 45.31f;
			
			case 2:
				return 135.31f;
			
			case 3:
				return 135.31f;
			}
		
		default:
	}
	return 0f;
}

Vector3 func_70(int iParam0)
{
	if (Local_132.f_257 == 1)
	{
		return 967.33f, 32.0191f, 115.1742f;
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1148.837f, 269.747f, -52.8409f;
			
			case 1:
				return 1151.84f, 266.747f, -52.8409f;
			
			case 2:
				return 1129.406f, 262.3578f, -52.041f;
			
			case 3:
				return 1144.429f, 247.3352f, -52.041f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_71(int iParam0)
{
	if (Local_122.f_1550[iParam0] >= 7)
	{
		return "female_idle";
	}
	return "idle";
}

char* func_72()
{
	return "anim_casino_b@amb@casino@games@shared@dealer@";
}

void func_73(int iParam0, int iParam1)
{
	Local_122.f_1520[iParam1] = iParam0;
}

void func_74(var uParam0)
{
	var uVar0[7];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar2 = 208;
	iVar3 = 0;
	while (iVar3 < 208)
	{
		iVar1 = unk_0xE4106B13B93D6F83(0, iVar2);
		iVar4 = 0;
		while (iVar4 < 208)
		{
			iVar6 = (iVar4 / 32);
			iVar7 = (iVar4 % 32);
			if (iVar5 == iVar1 && !unk_0xCE990E643CD9D0E5(uVar0[iVar6], iVar7))
			{
				unk_0xBE20AB8238688965(&(uVar0[iVar6]), iVar7);
				while (iVar4 + 1 > 52)
				{
					iVar4 = (iVar4 - 52);
				}
				(*uParam0)[iVar3] = iVar4 + 1;
			}
			else
			{
				if (!unk_0xCE990E643CD9D0E5(uVar0[iVar6], iVar7))
				{
					iVar5++;
				}
				iVar4++;
			}
		}
		iVar5 = 0;
		iVar2 = (iVar2 - 1);
		iVar3++;
	}
	uParam0->f_210 = 208;
}

void func_75()
{
	int iVar0;
	
	if (!func_80(unk_0x460153A63B9477BC()))
	{
		iVar0 = iLocal_166;
		if (Global_2516405 != iVar0 && (Global_2516405 != -1 || func_425(unk_0x460153A63B9477BC())))
		{
			if (!unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iVar0]))
			{
				func_77(iVar0);
			}
		}
		else if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iVar0]))
		{
			if (unk_0xF05B7723022657B3(Local_122.f_1595[iVar0]))
			{
				func_76(&(Local_122.f_1595[iVar0]));
			}
			else
			{
				unk_0x5F00FA3094B612F5(Local_122.f_1595[iVar0]);
			}
		}
	}
	iLocal_166++;
	if (iLocal_166 >= Local_132.f_257)
	{
		iLocal_166 = 0;
	}
}

void func_76(var uParam0)
{
	int iVar0;
	
	if (unk_0xF7DE07F319727299(*uParam0))
	{
		if (!unk_0xF05B7723022657B3(*uParam0))
		{
		}
	}
	if (unk_0x3D70CCF2C9B362CD(*uParam0))
	{
		iVar0 = unk_0x62D2FF718BC7717D(*uParam0);
		unk_0x5896A99BC0571F36(&iVar0);
	}
}

void func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = joaat("S_M_Y_Casino_01");
	if (Local_122.f_1550[iParam0] >= 7)
	{
		iVar0 = joaat("S_F_Y_Casino_01");
	}
	unk_0x78FCB2E22C41B9D5(iVar0);
	if (!unk_0x7D167B9A0CCDA347(iVar0))
	{
		return;
	}
	unk_0x131ED02492676000(func_72());
	if (!unk_0xC614DDE265D18415(func_72()))
	{
		return;
	}
	if (!unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iParam0]))
	{
		if (unk_0xCFED0F4D63A92A70(1))
		{
			iVar1 = unk_0xB3116B49FE00E2F1(26, iVar0, func_70(iParam0), func_69(iParam0), 1, true);
			unk_0x74528AC0906CBABE(iVar0);
			unk_0xC62EE91883AF24A2(iVar1, 0);
			unk_0x9B20C082E40178C8(iVar1, 0);
			unk_0x4E65320BC9AD521C(iVar1, 1);
			unk_0x8342E6CB98CD545C(iVar1, 249, 1);
			unk_0x694113444F21E39F(iVar1, 185, true);
			unk_0x694113444F21E39F(iVar1, 108, true);
			unk_0xFA6E875B9DF13F14(iVar1, 1);
			unk_0x7F1F4156EF7FAD8F(iVar1, 1);
			unk_0x161DCD5F8BF8AA2B(iVar1, 0);
			unk_0xE18A8D2C753E82F1(iVar1, 1);
			unk_0x5A5A1DD32AC33C2B(iVar1, 0);
			unk_0x694113444F21E39F(iVar1, 208, true);
			unk_0x4478D8ED4673EF14(iVar1, 0);
			func_79(Local_122.f_1550[iParam0], &iVar1);
			func_78(Local_122.f_1550[iParam0], &iVar1);
			unk_0xCBF81D3222C77066(iVar1, func_70(iParam0), 0, 0, 1);
			unk_0xE922BAA80E8F9324(iVar1, func_69(iParam0));
			Local_122.f_1595[iParam0] = unk_0x28207B405DA4E61E(iVar1);
			unk_0x22C69FB63CD1A86A(Local_122.f_1595[iParam0], 0);
			Local_122.f_1540[iParam0] = 1;
			Local_122.f_1580[iParam0] = unk_0xAA579EC5104BFDA9(func_70(iParam0), 0f, 0f, func_69(iParam0), 2, false, true, 1065353216, 0, 1065353216);
			unk_0x54D6514F20DE2E13(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iParam0]), Local_122.f_1580[iParam0], func_72(), func_71(iParam0), 1000f, -2f, 13, 16, 1148846080, 0);
			unk_0xB88AF19828BF16ED(Local_122.f_1580[iParam0]);
			unk_0x1082C25039B168F8(func_58());
		}
	}
}

void func_78(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 1:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 2:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_M_Y_Casino_01_ASIAN_02"));
			break;
		
		case 3:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_M_Y_Casino_01_ASIAN_01"));
			break;
		
		case 4:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 5:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_M_Y_Casino_01_WHITE_02"));
			break;
		
		case 6:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_M_Y_Casino_01_WHITE_01"));
			break;
		
		case 7:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 8:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 9:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_F_Y_Casino_01_ASIAN_01"));
			break;
		
		case 10:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_F_Y_Casino_01_ASIAN_02"));
			break;
		
		case 11:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_F_Y_Casino_01_LATINA_01"));
			break;
		
		case 12:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_F_Y_Casino_01_LATINA_02"));
			break;
		
		case 13:
			unk_0xC3EA5D3FE3BE4ECE(*iParam1, unk_0x856D5567211886A2("S_F_Y_Casino_01_LATINA_01"));
			break;
	}
}

void func_79(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 3, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 3, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 3, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 1, 0, 0);
			break;
		
		case 1:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 2, 2, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 4, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 0, 3, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 1, 0, 0);
			break;
		
		case 2:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 2, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 0, 3, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 1, 0, 0);
			break;
		
		case 3:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 3, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 1, 3, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 3, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 1, 0, 0);
			break;
		
		case 4:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 4, 2, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 3, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 1, 0, 0);
			break;
		
		case 5:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 4, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 1, 0, 0);
			break;
		
		case 6:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 4, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 4, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 3, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 1, 0, 0);
			break;
		
		case 7:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 1, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 0, 3, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 0, 0, 0);
			break;
		
		case 8:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 1, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 1, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 1, 3, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 0, 0, 0);
			break;
		
		case 9:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 2, 3, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 0, 0, 0);
			break;
		
		case 10:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 2, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 2, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 3, 3, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 3, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 0, 0, 0);
			break;
		
		case 11:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 3, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 3, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 0, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 0, 0, 0);
			unk_0x78024EFD31A7FAD4(*iParam1, 1, 0, 0, false);
			break;
		
		case 12:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 3, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 3, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 1, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 0, 0, 0);
			break;
		
		case 13:
			unk_0x6D2F52D05ED0E1F6(*iParam1);
			unk_0x45F588C0DD767737(*iParam1, 0, 4, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 1, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 2, 4, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 3, 2, 1, 0);
			unk_0x45F588C0DD767737(*iParam1, 4, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 6, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 7, 1, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 8, 2, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 10, 0, 0, 0);
			unk_0x45F588C0DD767737(*iParam1, 11, 0, 0, 0);
			unk_0x78024EFD31A7FAD4(*iParam1, 1, 0, 0, false);
			break;
	}
}

int func_80(int iParam0)
{
	if (iParam0 != func_419() && func_20(iParam0, 1, 1))
	{
		if (func_81(iParam0) && !func_424(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_81(int iParam0)
{
	if (iParam0 != func_419() && func_20(iParam0, 1, 1))
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314, 3);
	}
	return 0;
}

void func_82()
{
	struct<9> Var0;
	bool bVar1;
	int iVar2;
	
	Var0 = 7;
	bVar1 = false;
	iVar2 = iLocal_165;
	if (Local_131[iVar2 /*8*/].f_4 == -1)
	{
		Local_122.f_899[iVar2 /*9*/] = { Var0 };
		Local_122.f_1188[iVar2 /*9*/] = { Var0 };
	}
	if (Local_131[iVar2 /*8*/].f_6 == 0)
	{
		if (Local_122.f_1477[iVar2] != 0)
		{
			Local_122.f_1477[iVar2] = 0;
		}
	}
	if (!bVar1)
	{
		if (func_83(iVar2))
		{
			bVar1 = true;
		}
	}
	iLocal_165++;
	if (iLocal_165 >= 32)
	{
		iLocal_165 = 0;
	}
}

int func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_416())
	{
		return 0;
	}
	iVar0 = unk_0x628A51AC66E80772(iParam0);
	if (!unk_0xBD09DF93F957A0CF(iVar0))
	{
		return 0;
	}
	iVar1 = unk_0x9019589211A13B02(iVar0);
	if (!func_20(iVar1, 1, 1))
	{
		return 0;
	}
	iVar2 = Local_131[iParam0 /*8*/].f_6.f_1;
	if (iVar2 < 0 || iVar2 >= 4)
	{
		return 0;
	}
	if (Local_131[iParam0 /*8*/].f_6 == 1)
	{
		if (func_47(6, &(Local_122.f_1595[iVar2]), -1, 0, 0, iParam0))
		{
			func_84(iParam0, 1);
		}
		return 1;
	}
	if (Local_131[iParam0 /*8*/].f_6 == 2)
	{
		if (func_47(7, &(Local_122.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 2);
		}
		return 1;
	}
	if (Local_131[iParam0 /*8*/].f_6 == 4)
	{
		if (func_47(8, &(Local_122.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 4);
		}
		return 1;
	}
	if (Local_131[iParam0 /*8*/].f_6 == 5)
	{
		if (func_47(9, &(Local_122.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 5);
		}
		return 1;
	}
	if (Local_131[iParam0 /*8*/].f_6 == 6)
	{
		if (func_47(10, &(Local_122.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 6);
		}
		return 1;
	}
	if (Local_131[iParam0 /*8*/].f_6 == 7)
	{
		if (func_47(11, &(Local_122.f_1595[iVar2]), -1, 0, 0, -1))
		{
			func_84(iParam0, 7);
		}
		return 1;
	}
	return 0;
}

void func_84(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	unk_0xBE20AB8238688965(&(Local_122.f_1477[iParam0]), iVar0);
}

void func_85()
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_164;
	if (Local_122.f_1600[iVar0] != func_419())
	{
		iVar1 = Local_122.f_1600[iVar0];
		if (((!func_20(Local_122.f_1600[iVar0], 1, 1) || Local_131[iVar1 /*8*/].f_3 == -1) || Local_131[iVar1 /*8*/].f_3 != iVar0) || !unk_0xFA298F06F67BBD4A(Local_122.f_1600[iVar0]))
		{
			Local_122.f_1600[iVar0] = func_419();
			if (Local_122.f_1477[iVar0] != 0)
			{
				Local_122.f_1477[iVar0] = 0;
			}
		}
	}
	if (func_20(iVar0, 1, 1) && unk_0xFA298F06F67BBD4A(iVar0))
	{
		if (Local_131[iVar0 /*8*/].f_3 > -1 && Local_131[iVar0 /*8*/].f_3 < 32)
		{
			if (Local_122.f_1600[Local_131[iVar0 /*8*/].f_3] == func_419())
			{
				if (func_20(unk_0xF1110FE23C67293A(iVar0), 1, 1))
				{
					Local_122.f_1600[Local_131[iVar0 /*8*/].f_3] = unk_0xF1110FE23C67293A(iVar0);
				}
			}
		}
	}
	iLocal_164++;
	if (iLocal_164 >= 32)
	{
		iLocal_164 = 0;
	}
}

void func_86()
{
	bool bVar0;
	var uVar1;
	char* sVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<21> Var6;
	struct<3> Var7;
	
	func_413();
	if (!Local_132.f_236)
	{
		if (func_425(unk_0x460153A63B9477BC()) && func_420() != func_419())
		{
			if (unk_0xCE990E643CD9D0E5(Global_2425869[func_420() /*443*/].f_314.f_4, 4))
			{
				Local_132.f_236 = 1;
				func_412();
				func_411();
				iLocal_159 = 1;
			}
		}
	}
	else if (iLocal_159)
	{
		if (func_410())
		{
			iLocal_159 = 0;
		}
	}
	func_406();
	func_405();
	Local_132.f_248 = func_402();
	func_383();
	if (Local_132.f_1 > 2)
	{
		unk_0x779660A9E5364C4D(2, 210, 1);
		unk_0x26A60F42A1132477(2, 210);
		unk_0x779660A9E5364C4D(2, 26, 1);
		if (unk_0x275A6259432E6B3C(2, 210))
		{
		}
		if (func_382(Local_132.f_247) >= 0 && unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), func_70(func_382(Local_132.f_247)), true) > 5f)
		{
			func_376(0);
		}
	}
	if (Local_132.f_1 > 5)
	{
		unk_0xA86915034F55A3BF();
		unk_0xD10328357EA7B9E5();
		unk_0x689789B905574795(19);
		func_374(1);
		func_373(1, 0);
	}
	if (Local_132.f_1 > 6)
	{
		unk_0x779660A9E5364C4D(2, 0, 1);
		if (unk_0x275A6259432E6B3C(2, 0))
		{
			if (unk_0xF7B3A1430308F92B(0) == 0)
			{
				unk_0x80610B7EA03DE232(0, 4);
			}
			else if (unk_0xF7B3A1430308F92B(0) == 4)
			{
				unk_0x80610B7EA03DE232(0, 0);
			}
		}
		unk_0x0EBFC252513F1870();
	}
	if (Local_132.f_1 > 7)
	{
		func_369(&(Local_131[unk_0x460153A63B9477BC() /*8*/]));
	}
	if (func_368())
	{
		bLocal_161 = true;
	}
	else if (bLocal_161)
	{
		func_367(&uLocal_162, 0, 0);
		bLocal_161 = false;
	}
	else if (func_66(&uLocal_162) && func_65(&uLocal_162, 500, 0))
	{
		func_63(&uLocal_162);
	}
	switch (Local_132.f_1)
	{
		case 0:
			if (func_362())
			{
				Local_132.f_1582 = "idle_cardgames";
				Local_132.f_252 = 0;
				Local_131[unk_0x460153A63B9477BC() /*8*/] = 0;
				Local_131[unk_0x460153A63B9477BC() /*8*/].f_3 = -1;
				Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 = -1;
				Local_131[unk_0x460153A63B9477BC() /*8*/].f_5 = 0;
				func_361(unk_0x460153A63B9477BC());
				func_360(1);
			}
			break;
		
		case 1:
			switch (func_382(Local_132.f_247))
			{
				case 0:
				case 1:
					bVar0 = false;
					Local_132.f_245 = 5000;
					Local_132.f_246 = 10;
					break;
				
				case 2:
				case 3:
					bVar0 = true;
					Local_132.f_245 = 50000;
					Local_132.f_246 = 1000;
					break;
			}
			if (Local_132.f_257 == 1)
			{
				bVar0 = true;
				Local_132.f_245 = 50000;
				Local_132.f_246 = 1000;
			}
			Local_132.f_244 = Local_132.f_246;
			if ((((((((((((((((((((((((!Global_262145.f_26235 && !(Global_262145.f_26237 && !bVar0)) && !(Global_262145.f_26236 && bVar0)) && ((func_359(1581559923) || func_359(272405600)) || func_425(unk_0x460153A63B9477BC()))) && func_357(unk_0x9B0761B4C3EB8BC7(), func_358(Local_132.f_247), 1.5f)) && func_352(unk_0x9B0761B4C3EB8BC7(), func_356(Local_132.f_247), 40f)) && Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 0) && Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 == 0) && !unk_0xCE990E643CD9D0E5(Global_1678288.f_4, 2)) && !Global_2405074.f_2674) && Global_2516405 != func_382(Local_132.f_247)) && (Global_2516405 != -1 || func_425(unk_0x460153A63B9477BC()))) && func_351()) && !func_345()) && !unk_0x03DB5C6AABF8DA46()) && !unk_0x5DA78AD6801A0523()) && func_342(unk_0x9B0761B4C3EB8BC7()) <= 9) && !Global_2405074.f_2674) && !unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) && !func_341()) && !func_340()) && !func_338()) && !Global_2462286.f_12) && Global_1678282 != 32) && !func_337())
			{
				func_360(2);
			}
			else
			{
				Local_132.f_247++;
				if (Local_132.f_247 >= Local_132.f_257 * 4)
				{
					Local_132.f_247 = 0;
				}
			}
			break;
		
		case 2:
			func_336();
			func_361(unk_0x460153A63B9477BC());
			if (((((((((((((((((((((func_359(1581559923) || func_359(272405600)) || func_425(unk_0x460153A63B9477BC())) && func_357(unk_0x9B0761B4C3EB8BC7(), func_358(Local_132.f_247), 1.5f)) && func_352(unk_0x9B0761B4C3EB8BC7(), func_356(Local_132.f_247), 40f)) && Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 0) && Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 == 0) && Global_2516405 != func_382(Local_132.f_247)) && (Global_2516405 != -1 || func_425(unk_0x460153A63B9477BC()))) && func_351()) && !func_345()) && !unk_0x03DB5C6AABF8DA46()) && !unk_0x5DA78AD6801A0523()) && func_342(unk_0x9B0761B4C3EB8BC7()) <= 9) && !Global_2405074.f_2674) && !unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) && !func_341()) && !func_340()) && !func_338()) && !Global_2462286.f_12) && Global_1678282 != 32) && !func_337())
			{
				if ((((((func_20(unk_0x460153A63B9477BC(), 1, 1) && unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) && !func_335()) && !func_334()) && !unk_0x06EBE4F22EC30D45()) && !bLocal_161) && !func_66(&uLocal_162))
				{
					if (func_333(1, &uVar1))
					{
						if (!func_332("BJACK_NA"))
						{
							func_331("BJACK_NA");
						}
					}
					else if (Local_122.f_1600[Local_132.f_247] != func_419())
					{
						if (!func_332("BJACK_USED"))
						{
							func_331("BJACK_USED");
						}
					}
					else if (func_330())
					{
						if (func_326() == 2)
						{
							if (!func_332("CAS_MG_CTIME"))
							{
								func_331("CAS_MG_CTIME");
							}
						}
						else if (!func_332("CAS_MG_CBAN"))
						{
							func_331("CAS_MG_CBAN");
						}
					}
					else if ((!func_325(unk_0x460153A63B9477BC()) && (func_382(Local_132.f_247) == 2 || func_382(Local_132.f_247) == 3)) && !(func_324(1) && func_325(func_323())))
					{
						if (!func_332("CAS_MG_SUITE2"))
						{
							func_331("CAS_MG_SUITE2");
						}
					}
					else if (!func_322() && !(func_324(1) && func_321(func_323())))
					{
						if (!func_319("CAS_MG_MEMB2", func_320(1)))
						{
							func_318("CAS_MG_MEMB2", func_320(1));
						}
						else if (unk_0x1BD7199394D7F19A(2, 52))
						{
							unk_0xD289B55B6AADBA10(1);
							func_317();
							func_360(3);
						}
					}
					else if (Local_132.f_248 <= 0)
					{
						if (func_425(unk_0x460153A63B9477BC()))
						{
							if (!func_332("CAS_MG_NOCHIPS6"))
							{
								func_331("CAS_MG_NOCHIPS6");
							}
						}
						else if (!func_332("CAS_MG_NOCHIPS2"))
						{
							func_331("CAS_MG_NOCHIPS2");
						}
					}
					else if (Local_132.f_248 < Local_132.f_246)
					{
						if (func_425(unk_0x460153A63B9477BC()))
						{
							if (!func_332("CAS_MG_LOWCHIPS6"))
							{
								func_331("CAS_MG_LOWCHIPS6");
							}
						}
						else if (!func_332("CAS_MG_LOWCHIPS2"))
						{
							func_331("CAS_MG_LOWCHIPS2");
						}
					}
					else if (Local_132.f_259 == -1)
					{
						if (func_316())
						{
							unk_0xD289B55B6AADBA10(1);
						}
						if (((!func_325(unk_0x460153A63B9477BC()) && (func_382(Local_132.f_247) == 2 || func_382(Local_132.f_247) == 3)) && !(func_324(1) && func_325(func_323()))) || (!func_322() && (func_324(1) && func_321(func_323()))))
						{
							if (func_313(func_323()) == 1)
							{
								Local_132.f_256 = 1;
								func_312(&(Local_132.f_259), 4, "BJACK_PLAY_A", 0, 0, 0, 0);
							}
							else if (func_311(func_323()))
							{
								Local_132.f_256 = 2;
								func_312(&(Local_132.f_259), 4, "BJACK_PLAY_B", 0, 0, 0, 0);
							}
							else
							{
								Local_132.f_256 = 3;
								func_312(&(Local_132.f_259), 4, "BJACK_PLAY_C", 0, 0, 0, 0);
							}
						}
						else
						{
							Local_132.f_256 = 0;
							func_312(&(Local_132.f_259), 4, "BJACK_PLAY", 0, 0, 0, 0);
						}
					}
					else if (func_310(Local_132.f_259, 1))
					{
						func_308(&(Local_132.f_259));
						Local_132.f_259 = -1;
						unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 185, true);
						func_307();
						func_297(unk_0x460153A63B9477BC(), 0, 1048832, 0);
						if (unk_0xF7B3A1430308F92B(0) == 4 && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
						{
							unk_0x2BB0EF9DE445EA13(unk_0x9B0761B4C3EB8BC7());
							unk_0x1322CA891C5DF18A(unk_0x9B0761B4C3EB8BC7(), 0, 0);
						}
						func_360(4);
					}
				}
				else
				{
					if (func_316())
					{
						unk_0xD289B55B6AADBA10(1);
					}
					if (Local_132.f_259 != -1)
					{
						func_308(&(Local_132.f_259));
						Local_132.f_259 = -1;
					}
					Local_132.f_247 = 0;
					func_360(1);
				}
			}
			else
			{
				if (func_316())
				{
					unk_0xD289B55B6AADBA10(1);
				}
				if (Local_132.f_259 != -1)
				{
					func_308(&(Local_132.f_259));
					Local_132.f_259 = -1;
				}
				Local_132.f_247 = 0;
				func_360(1);
			}
			break;
		
		case 3:
			if (!func_296())
			{
				func_360(2);
			}
			break;
		
		case 4:
			func_374(1);
			sVar2 = "CasinoUI_Cards_Blackjack";
			if ((func_382(Local_132.f_247) == 2 || func_382(Local_132.f_247) == 3) || func_425(unk_0x460153A63B9477BC()))
			{
				sVar2 = "CasinoUI_Cards_Blackjack_High";
			}
			if (unk_0xCE990E643CD9D0E5(Global_1678288.f_5, 21))
			{
				func_367(&(Local_132.f_1578), 0, 0);
				func_295(Local_132.f_247);
				if (unk_0xF7B3A1430308F92B(0) == 4)
				{
					func_297(unk_0x460153A63B9477BC(), 0, 0, 0);
				}
				else
				{
					func_297(unk_0x460153A63B9477BC(), 0, 256, 0);
				}
				func_360(5);
			}
			else
			{
				unk_0x494D5FF88119CDC0(sVar2, false);
				if (func_293(0, -1, 0) && unk_0xC7F5A2E99D75A65C(sVar2))
				{
					if (!iLocal_160)
					{
						unk_0xC4CC25B68A91D144(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
						func_292(0, 0);
						func_290(1, sVar2, sVar2);
						func_289("BJACK_TITLE");
						func_288(-1, 1, 1);
						func_287("BJACK_DIS", 0, 0);
						func_286("BJACK_DIS1");
						func_286("BJACK_DIS2");
						func_286("BJACK_DIS3");
						func_285(202, "BJACK_EXIT", -1);
						func_285(201, "BJACK_CONT", -1);
						iLocal_160 = 1;
					}
					func_247(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
				}
				if (unk_0x275A6259432E6B3C(2, 202))
				{
					unk_0xC4CC25B68A91D144(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
					func_244(1, -1);
					unk_0x2DDA2C702A92866E(sVar2);
					iLocal_160 = 0;
					func_235();
				}
				else if (unk_0x275A6259432E6B3C(2, 201))
				{
					unk_0xC4CC25B68A91D144(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
					func_244(1, -1);
					unk_0x2DDA2C702A92866E(sVar2);
					iLocal_160 = 0;
					unk_0xBE20AB8238688965(&(Global_1678288.f_5), 21);
					func_367(&(Local_132.f_1578), 0, 0);
					func_295(Local_132.f_247);
					if (unk_0xF7B3A1430308F92B(0) == 4)
					{
						func_297(unk_0x460153A63B9477BC(), 0, 0, 0);
					}
					else
					{
						func_297(unk_0x460153A63B9477BC(), 0, 256, 0);
					}
					func_360(5);
				}
			}
			break;
		
		case 5:
			if ((((func_234(Local_132.f_247) && !func_334()) && !func_368()) && func_351()) && !func_345())
			{
				func_63(&(Local_132.f_1578));
				unk_0xBE20AB8238688965(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_4), 2);
				func_225(1);
				func_360(6);
			}
			else
			{
				if (func_334())
				{
					func_235();
				}
				if (func_368())
				{
					func_235();
				}
				if (func_224(Local_132.f_247))
				{
					func_235();
				}
				if (func_223())
				{
					func_235();
				}
				if (!func_351())
				{
					func_235();
				}
				if (func_345())
				{
					func_235();
				}
			}
			break;
		
		case 6:
			if (!func_334() && !func_368())
			{
				if (func_222())
				{
					if (unk_0xF7B3A1430308F92B(0) == 1 || unk_0xF7B3A1430308F92B(0) == 2)
					{
						unk_0x80610B7EA03DE232(0, 0);
					}
					fVar3 = func_220(unk_0x9B0761B4C3EB8BC7(), func_221(Local_132.f_247, 0), 1);
					fVar4 = func_220(unk_0x9B0761B4C3EB8BC7(), func_221(Local_132.f_247, 1), 1);
					fVar5 = func_220(unk_0x9B0761B4C3EB8BC7(), func_221(Local_132.f_247, 2), 1);
					if (fVar4 < fVar5 && fVar4 < fVar3)
					{
						Local_132.f_251 = 1;
					}
					else if (fVar5 < fVar4 && fVar5 < fVar3)
					{
						Local_132.f_251 = 2;
					}
					else
					{
						Local_132.f_251 = 0;
					}
					unk_0x83CAF206A9B8748C(unk_0x9B0761B4C3EB8BC7(), func_221(Local_132.f_247, Local_132.f_251), 1f, 5000, func_219(Local_132.f_247, Local_132.f_251), 0.01f);
					func_360(7);
				}
			}
			else
			{
				func_235();
			}
			break;
		
		case 7:
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && unk_0x16BC17A8EDC701A2(unk_0x9B0761B4C3EB8BC7(), 2106541073) != 0)
			{
				Local_132.f_255 = unk_0xAA579EC5104BFDA9(func_358(Local_132.f_247), func_217(Local_132.f_247), 2, true, false, 1065353216, 0, 1065353216);
				unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_132.f_255, func_216(), func_215(Local_132.f_251), 2f, -2f, 13, 16, 2f, 0);
				unk_0xB88AF19828BF16ED(Local_132.f_255);
				Local_131[unk_0x460153A63B9477BC() /*8*/].f_6.f_1 = Local_131[unk_0x460153A63B9477BC() /*8*/].f_4;
				func_360(8);
			}
			break;
		
		case 8:
			unk_0x7DB1794EFB0DF2F8(-2124244681);
			Local_132.f_258 = unk_0xAB6BAF5BFCAFB141(Local_132.f_255);
			if (func_214())
			{
				func_213(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 2);
			}
			else
			{
				func_213(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 1);
			}
			if (Local_132.f_258 != -1)
			{
				if ((unk_0x369E69441C066912(Local_132.f_258) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), 2038294702)) || unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), -1424880317))
				{
					Local_132.f_1582 = "idle_cardgames";
					Local_132.f_255 = unk_0xAA579EC5104BFDA9(func_358(Local_132.f_247), func_217(Local_132.f_247), 2, true, false, 1065353216, 0, 1065353216);
					unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_132.f_255, func_216(), Local_132.f_1582, 2f, -2f, 13, 16, 1148846080, 0);
					unk_0xB88AF19828BF16ED(Local_132.f_255);
					func_297(unk_0x460153A63B9477BC(), 0, 256, 0);
					Local_138 = { Var6 };
					if (func_425(unk_0x460153A63B9477BC()))
					{
						Local_138 = 1695074466;
					}
					else if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 == 2 || Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 == 3)
					{
						Local_138 = 1952785842;
					}
					else
					{
						Local_138 = -1125105727;
					}
					Local_138.f_1 = Local_131[unk_0x460153A63B9477BC() /*8*/].f_4;
					Local_138.f_6 = 1;
					if (func_325(unk_0x460153A63B9477BC()))
					{
						Local_138.f_15 = 1983458449;
					}
					else if (func_322())
					{
						Local_138.f_15 = 1334658487;
					}
					else if (func_324(1) && (func_325(func_323()) || func_211(unk_0x460153A63B9477BC())))
					{
						Local_138.f_15 = 980726932;
					}
					else
					{
						Local_138.f_15 = 939907746;
					}
					func_367(&uLocal_135, 0, 0);
					func_210();
					Local_132.f_249 = func_402();
					func_360(9);
				}
			}
			break;
		
		case 9:
			if (!unk_0x306BF588BD8151E8("DLC_VW_Casino_Table_Games"))
			{
				unk_0x17E478571720218F("DLC_VW_Casino_Table_Games");
			}
			unk_0x7DB1794EFB0DF2F8(-2124244681);
			func_90();
			break;
		
		case 10:
			if (unk_0x306BF588BD8151E8("DLC_VW_Casino_Table_Games"))
			{
				unk_0xFA07F8BEBDAAFBA8("DLC_VW_Casino_Table_Games");
			}
			if (unk_0x16BC17A8EDC701A2(unk_0x9B0761B4C3EB8BC7(), 1785177548) == 1)
			{
				func_213(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), func_89());
				Var7 = { unk_0xAAC78749C4BB5219(2, 218), unk_0xAAC78749C4BB5219(2, 219), 0f };
				Local_132.f_258 = unk_0xAB6BAF5BFCAFB141(Local_132.f_255);
				if (Local_132.f_258 != -1 && ((unk_0x369E69441C066912(Local_132.f_258) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), -1424880317)) || (vmag(Var7) >= 0.24f && unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), 2116425869))))
				{
					unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
					func_297(unk_0x460153A63B9477BC(), 1, 0, 0);
					unk_0x1082C25039B168F8(func_58());
					unk_0x1082C25039B168F8(func_72());
					unk_0x1082C25039B168F8(func_88());
					unk_0x1082C25039B168F8(func_216());
					unk_0xD2459066EA58CE43(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_4), 2);
					func_336();
					func_87();
					func_360(2);
				}
			}
			else
			{
				unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
				func_297(unk_0x460153A63B9477BC(), 1, 0, 0);
				unk_0x1082C25039B168F8(func_58());
				unk_0x1082C25039B168F8(func_72());
				unk_0x1082C25039B168F8(func_88());
				unk_0x1082C25039B168F8(func_216());
				unk_0xD2459066EA58CE43(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_4), 2);
				func_336();
				func_87();
				func_360(2);
			}
			break;
	}
}

void func_87()
{
	unk_0xD2459066EA58CE43(&(Local_132.f_252), 21);
	unk_0xD2459066EA58CE43(&(Local_132.f_252), 22);
}

char* func_88()
{
	return "anim_casino_b@amb@casino@games@blackjack@player";
}

int func_89()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_402();
	iVar1 = (iVar0 - Local_132.f_249);
	if (iVar1 < 0)
	{
		return 5;
	}
	if (iVar1 > 0)
	{
		return 4;
	}
	return 6;
}

void func_90()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<9> Var3;
	struct<9> Var4;
	struct<26> Var5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	char* sVar21;
	char* sVar22;
	char* sVar23;
	char* sVar24;
	bool bVar25;
	char* sVar26;
	
	if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 >= 0)
	{
		iVar1 = (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 * 4 + Local_122.f_1575[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4]);
		iVar0 = Local_122.f_1600[iVar1];
	}
	if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 >= 0)
	{
		if (func_209(Local_131[unk_0x460153A63B9477BC() /*8*/].f_4))
		{
			func_208("BJACK_ERROR", -1);
			return;
		}
	}
	bVar2 = false;
	if (func_53(Local_131[unk_0x460153A63B9477BC() /*8*/].f_4, Local_132.f_257))
	{
		bVar2 = true;
	}
	func_194();
	if (func_416())
	{
		Local_138.f_10 = 1;
	}
	Local_138.f_11 = func_192();
	if (Local_122.f_1515[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4] != 6 || Local_122.f_1575[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4] != (Local_131[unk_0x460153A63B9477BC() /*8*/].f_3 - (4 * Local_131[unk_0x460153A63B9477BC() /*8*/].f_4)))
	{
		if ((((((unk_0x1BD7199394D7F19A(2, 202) && !unk_0xDFAB5E5CBE16E8B1()) && !func_334()) && !unk_0x06EBE4F22EC30D45()) && !unk_0xCE990E643CD9D0E5(Local_132.f_250, 0)) && !Local_132.f_234) && !func_191())
		{
			if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 > -1)
			{
				Local_137.f_9 = Local_122.f_1570[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4];
			}
			Local_137.f_18 = func_416();
			Local_137.f_19 = func_192();
			Local_137.f_17 = func_190(&uLocal_133, 0, 0);
			Local_137.f_7 = func_402();
			Local_138.f_2 = joaat("QUIT");
			Local_137.f_4 = joaat("QUIT");
			Local_137.f_25 = joaat("QUIT");
			if (Local_132 > 1 || Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 != 0)
			{
				if (Global_262145.f_26108)
				{
					unk_0x69805A4C17F46811(&Local_137);
				}
			}
			if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 > 0 && !Local_132.f_232)
			{
				func_189(Local_131[unk_0x460153A63B9477BC() /*8*/].f_1);
			}
			if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_2 > 0 && !Local_132.f_233)
			{
				func_189(Local_131[unk_0x460153A63B9477BC() /*8*/].f_2);
			}
			func_376(1);
			unk_0xD289B55B6AADBA10(1);
			return;
		}
	}
	if (((Global_2516405 == Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 || Global_2462286.f_12) || Global_1678282 == 32) || !func_187())
	{
		if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 > -1)
		{
			Local_137.f_9 = Local_122.f_1570[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4];
		}
		Local_137.f_18 = func_416();
		Local_137.f_19 = func_192();
		Local_137.f_17 = func_190(&uLocal_133, 0, 0);
		Local_137.f_7 = func_402();
		if (Global_262145.f_26108)
		{
			unk_0x69805A4C17F46811(&Local_137);
		}
		func_376(1);
		unk_0xD289B55B6AADBA10(1);
		return;
	}
	if (Local_132.f_255 > -1)
	{
		Local_132.f_258 = unk_0xAB6BAF5BFCAFB141(Local_132.f_255);
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !Local_132.f_234)
		{
			if (!unk_0x9934470AA0A08B57(unk_0x9B0761B4C3EB8BC7(), func_216(), "idle_cardgames", 3))
			{
				if (Local_132.f_258 != -1 && (unk_0x369E69441C066912(Local_132.f_258) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), -1424880317)))
				{
					Local_132.f_255 = unk_0xAA579EC5104BFDA9(func_358(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), func_217(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), 2, true, false, 1065353216, 0, 1065353216);
					unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_132.f_255, func_216(), "idle_cardgames", 2f, -2f, 13, 16, 1148846080, 0);
					unk_0xB88AF19828BF16ED(Local_132.f_255);
					Local_132.f_1582 = "idle_cardgames";
					unk_0xD2459066EA58CE43(&(Local_132.f_252), 0);
				}
			}
			else if (unk_0x9934470AA0A08B57(unk_0x9B0761B4C3EB8BC7(), func_216(), "idle_cardgames", 3))
			{
				if (Local_132.f_258 != -1 && (unk_0x369E69441C066912(Local_132.f_258) >= 0.99f || unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), -1424880317)))
				{
					Local_132.f_255 = unk_0xAA579EC5104BFDA9(func_358(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), func_217(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), 2, true, false, 1065353216, 0, 1065353216);
					unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_132.f_255, func_216(), func_186(0), 2f, -2f, 13, 16, 1148846080, 0);
					unk_0xB88AF19828BF16ED(Local_132.f_255);
					unk_0xD2459066EA58CE43(&(Local_132.f_252), 0);
				}
			}
		}
	}
	if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 >= 0)
	{
		func_184(&(Local_132.f_874));
		if ((unk_0x3D70CCF2C9B362CD(Local_122.f_1595[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4]))) && !unk_0xCE990E643CD9D0E5(Local_132.f_250, 0))
		{
			if (Local_122.f_1515[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4] != 6 || Local_122.f_1575[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4] != (Local_131[unk_0x460153A63B9477BC() /*8*/].f_3 - (4 * Local_131[unk_0x460153A63B9477BC() /*8*/].f_4)))
			{
				func_183(unk_0xED026A379B794F61(0, 202, true), "BJACK_EXIT", &(Local_132.f_874), 0);
			}
			else if (((unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4]), func_58(), func_25(Local_131[unk_0x460153A63B9477BC() /*8*/].f_4, (Local_131[unk_0x460153A63B9477BC() /*8*/].f_3 - (4 * Local_131[unk_0x460153A63B9477BC() /*8*/].f_4)), iVar0, 0), 3) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4]), func_58(), func_25(Local_131[unk_0x460153A63B9477BC() /*8*/].f_4, (Local_131[unk_0x460153A63B9477BC() /*8*/].f_3 - (4 * Local_131[unk_0x460153A63B9477BC() /*8*/].f_4)), iVar0, 1), 3)) && !unk_0xCE990E643CD9D0E5(Local_122.f_1555[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4], 12)) && !unk_0xCE990E643CD9D0E5(Local_132.f_252, 0))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 14))
				{
					if (((!unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 12) && !(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 2 && func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) == 21)) && func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) <= 21) && Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 <= 7)
					{
						func_183(unk_0xED026A379B794F61(0, 201, true), "BJACK_HIT", &(Local_132.f_874), 0);
						func_183(unk_0xED026A379B794F61(0, 203, true), "BJACK_STAND", &(Local_132.f_874), 0);
					}
				}
				else if ((((!unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 12) && !(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 2 && func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) == 21)) && func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) <= 21) && Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 <= 7) || (((!unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 13) && !(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 == 2 && func_27(&(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/])) == 21)) && func_27(&(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/])) <= 21) && Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 <= 7))
				{
					func_183(unk_0xED026A379B794F61(0, 201, true), "BJACK_HIT", &(Local_132.f_874), 0);
					func_183(unk_0xED026A379B794F61(0, 203, true), "BJACK_STAND", &(Local_132.f_874), 0);
				}
				if (Local_132.f_248 >= Local_132.f_244)
				{
					if (!unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 14))
					{
						if ((func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) < 21 && Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 2) && !unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 10))
						{
							func_183(unk_0xED026A379B794F61(0, 204, true), "BJACK_DOUBLE", &(Local_132.f_874), 0);
						}
					}
					else if (!unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 13) && !unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 11))
					{
						if (Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 == 2)
						{
							if (func_27(&(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/])) < 21)
							{
								func_183(unk_0xED026A379B794F61(0, 204, true), "BJACK_DOUBLE", &(Local_132.f_874), 0);
							}
						}
					}
					else if ((func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) < 21 && Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 2) && !unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 10))
					{
						func_183(unk_0xED026A379B794F61(0, 204, true), "BJACK_DOUBLE", &(Local_132.f_874), 0);
					}
				}
				if (Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 2 && !unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 14))
				{
					if (Local_132.f_248 >= Local_132.f_244)
					{
						if (func_35(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/][0]) == func_35(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/][1]))
						{
							func_183(unk_0xED026A379B794F61(0, 206, true), "BJACK_SPLIT", &(Local_132.f_874), 0);
						}
					}
				}
			}
		}
		if ((Local_122.f_1515[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4] == 3 && !unk_0xCE990E643CD9D0E5(Local_132.f_250, 0)) && (Local_132.f_248 >= Local_132.f_246 || Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 != 0))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 15) && !unk_0xCE990E643CD9D0E5(Local_132.f_252, 0))
			{
				func_183(unk_0xED026A379B794F61(0, 201, true), "BJACK_PLACE", &(Local_132.f_874), 0);
				if (!unk_0xCE990E643CD9D0E5(Local_132.f_252, 20))
				{
					func_183(unk_0xED026A379B794F61(0, 204, true), "BJACK_BET_MAX", &(Local_132.f_874), 0);
				}
				func_182(2, 7, "BJACK_BET_NUM", &(Local_132.f_874));
			}
		}
		if (unk_0xCE990E643CD9D0E5(Local_132.f_250, 0))
		{
			func_183(unk_0xED026A379B794F61(0, 202, true), "IB_BACK", &(Local_132.f_874), 0);
			func_182(2, 8, "IB_TAB", &(Local_132.f_874));
		}
		if (Local_122.f_1515[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4] < 9 || !unk_0xCE990E643CD9D0E5(Local_122.f_1555[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4], 13))
		{
			if (Local_122.f_846[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 /*13*/].f_12 >= 2)
			{
				func_183(unk_0xED026A379B794F61(0, 208, true), "BJACK_DLR", &(Local_132.f_874), 0);
			}
			if (Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 > 0)
			{
				func_183(unk_0xED026A379B794F61(0, 207, true), "BJACK_CARDS", &(Local_132.f_874), 0);
			}
		}
		if (bLocal_152 && Local_122.f_1570[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4] > 1)
		{
			func_183(unk_0xED026A379B794F61(0, 195, true), "BJACK_LR", &(Local_132.f_874), 0);
		}
		if (!unk_0xCE990E643CD9D0E5(Local_132.f_250, 0))
		{
			func_183(unk_0xED026A379B794F61(2, 210, true), "BJACK_RULESb", &(Local_132.f_874), 0);
		}
		Var3 = { func_181() };
		func_180(&(Local_132.f_874), 1f);
		func_172(&(Local_132.f_873), &Var3, &(Local_132.f_874), func_179(&(Local_132.f_874)));
		func_171(1);
	}
	func_166();
	switch (Local_132)
	{
		case 0:
			if (Local_122.f_1515[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4] == 3)
			{
				if ((Local_132.f_244 > Local_132.f_248 || Local_132.f_244 < Local_132.f_246) || Local_132.f_244 > Local_132.f_245)
				{
					Local_132.f_244 = Local_132.f_246;
				}
				Var4 = 7;
				Local_132.f_213 = { Var4 };
				Local_132.f_222 = { Var4 };
				Local_137 = { Var5 };
				Local_137.f_10 = 1;
				Local_137 = joaat("blackjack");
				Local_137.f_11 = func_325(unk_0x460153A63B9477BC());
				if (func_325(unk_0x460153A63B9477BC()))
				{
					Local_137.f_20 = 1983458449;
				}
				else if (func_322())
				{
					Local_137.f_20 = 1334658487;
				}
				else if (func_324(1) && (func_325(func_323()) || func_211(unk_0x460153A63B9477BC())))
				{
					Local_137.f_20 = 980726932;
				}
				else
				{
					Local_137.f_20 = 939907746;
				}
				if (func_425(unk_0x460153A63B9477BC()))
				{
					Local_137.f_1 = 1695074466;
				}
				else if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 == 2 || Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 == 3)
				{
					Local_137.f_1 = 1952785842;
				}
				else
				{
					Local_137.f_1 = -1125105727;
				}
				func_367(&uLocal_133, 0, 0);
				Local_137.f_3 = Local_122.f_1560[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4];
				Local_137.f_2 = Local_131[unk_0x460153A63B9477BC() /*8*/].f_4;
				func_165(1);
			}
			break;
		
		case 1:
			if ((!func_322() && !(func_324(1) && func_321(func_323()))) || ((!func_325(unk_0x460153A63B9477BC()) && (func_382(Local_132.f_247) == 2 || func_382(Local_132.f_247) == 3)) && !(func_324(1) && func_325(func_323()))))
			{
				if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 > -1)
				{
					Local_137.f_9 = Local_122.f_1570[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4];
				}
				Local_137.f_18 = func_416();
				Local_137.f_19 = func_192();
				Local_137.f_17 = func_190(&uLocal_133, 0, 0);
				Local_137.f_7 = func_402();
				Local_138.f_2 = 939907746;
				Local_137.f_4 = 939907746;
				if (Global_262145.f_26108)
				{
					unk_0x69805A4C17F46811(&Local_137);
				}
				func_376(1);
				unk_0xD289B55B6AADBA10(1);
				if (Local_132.f_256 == 1)
				{
					func_208("IT_MEMBOc", -1);
				}
				else if (Local_132.f_256 == 2)
				{
					func_208("IT_MEMBOa", -1);
				}
				else if (Local_132.f_256 == 3)
				{
					func_208("IT_MEMBOb", -1);
				}
				return;
			}
			if ((Local_132.f_248 < Local_132.f_246 && Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 == 0) && !Local_132.f_234)
			{
				if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 > -1)
				{
					Local_137.f_9 = Local_122.f_1570[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4];
				}
				Local_137.f_18 = func_416();
				Local_137.f_19 = func_192();
				Local_137.f_17 = func_190(&uLocal_133, 0, 0);
				Local_137.f_7 = func_402();
				Local_138.f_2 = -1275559872;
				Local_137.f_4 = -1275559872;
				if (Global_262145.f_26108)
				{
					unk_0x69805A4C17F46811(&Local_137);
				}
				func_376(1);
				unk_0xD289B55B6AADBA10(1);
				if (func_425(unk_0x460153A63B9477BC()))
				{
					if (Local_132.f_248 <= 0)
					{
						func_208("CAS_MG_NOCHIPS6", -1);
					}
					else
					{
						func_208("CAS_MG_LOWCHIPS6", -1);
					}
				}
				else if (Local_132.f_248 <= 0)
				{
					func_208("CAS_MG_NOCHIPS2", -1);
				}
				else
				{
					func_208("CAS_MG_LOWCHIPS2", -1);
				}
				return;
			}
			if (func_330())
			{
				switch (func_326())
				{
					case 0:
						Local_138.f_2 = 1982714739;
						break;
					
					case 1:
						Local_138.f_2 = -633175758;
						break;
					
					case 2:
						Local_138.f_2 = -1625999354;
						break;
				}
				switch (func_326())
				{
					case 0:
						Local_137.f_4 = 1982714739;
						break;
					
					case 1:
						Local_137.f_4 = -633175758;
						break;
					
					case 2:
						Local_137.f_4 = -1625999354;
						break;
				}
				if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 > -1)
				{
					Local_137.f_9 = Local_122.f_1570[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4];
				}
				Local_137.f_18 = func_416();
				Local_137.f_19 = func_192();
				Local_137.f_17 = func_190(&uLocal_133, 0, 0);
				Local_137.f_7 = func_402();
				if (Global_262145.f_26108)
				{
					unk_0x69805A4C17F46811(&Local_137);
				}
				func_376(1);
				unk_0xD289B55B6AADBA10(1);
				if (func_326() == 2)
				{
					func_208("CAS_MG_CTIME", -1);
				}
				else
				{
					func_208("CAS_MG_CBAN", -1);
				}
				return;
			}
			if ((!unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 15) && !unk_0xCE990E643CD9D0E5(Local_132.f_252, 0)) && (!func_351() || func_345()))
			{
				if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 > -1)
				{
					Local_137.f_9 = Local_122.f_1570[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4];
				}
				Local_137.f_18 = func_416();
				Local_137.f_19 = func_192();
				Local_137.f_17 = func_190(&uLocal_133, 0, 0);
				Local_137.f_7 = func_402();
				if (Global_262145.f_26108)
				{
					unk_0x69805A4C17F46811(&Local_137);
				}
				func_376(1);
				unk_0xD289B55B6AADBA10(1);
				return;
			}
			if (!unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 15) && !unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 16))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_132.f_252, 0))
				{
					if (((((!unk_0xCE990E643CD9D0E5(Local_132.f_253, 1) && !unk_0xDFAB5E5CBE16E8B1()) && !unk_0x1BD7199394D7F19A(2, 204)) && !func_334()) && !unk_0x06EBE4F22EC30D45()) && !unk_0xCE990E643CD9D0E5(Local_132.f_250, 0))
					{
						bVar7 = unk_0x22D6FB6153F774D3(2, 188);
						bVar8 = unk_0x22D6FB6153F774D3(2, 187);
						if (bVar8 || (((((bVar7 && !unk_0x1BD7199394D7F19A(2, 204)) && !unk_0xDFAB5E5CBE16E8B1()) && !func_334()) && !unk_0x06EBE4F22EC30D45()) && !unk_0xCE990E643CD9D0E5(Local_132.f_250, 0)))
						{
							func_67(&(Local_132.f_1574), 0, 0);
							unk_0xBE20AB8238688965(&(Local_132.f_253), 1);
						}
					}
					else if (func_65(&(Local_132.f_1574), 100, 0))
					{
						func_63(&(Local_132.f_1574));
						unk_0xD2459066EA58CE43(&(Local_132.f_253), 1);
					}
					if (((((((unk_0x1BD7199394D7F19A(2, 204) && !bVar8) && !bVar7) && !unk_0xDFAB5E5CBE16E8B1()) && !func_334()) && !unk_0x06EBE4F22EC30D45()) && !unk_0xCE990E643CD9D0E5(Local_132.f_250, 0)) && !unk_0xCE990E643CD9D0E5(Local_132.f_252, 20))
					{
						unk_0xC4CC25B68A91D144(-1, "DLC_VW_BET_MAX", "dlc_vw_table_games_frontend_sounds", 1);
						bVar6 = true;
					}
					if (bVar6)
					{
						while (bVar6)
						{
							if (Local_132.f_244 >= 10000)
							{
								iVar9 = 5000;
							}
							else if (Local_132.f_244 >= 5000)
							{
								iVar9 = 1000;
							}
							else if (Local_132.f_244 >= 500)
							{
								iVar9 = 500;
							}
							else if (Local_132.f_244 >= 100)
							{
								iVar9 = 50;
							}
							else
							{
								iVar9 = 10;
							}
							if (Local_132.f_244 > Local_132.f_248)
							{
								Local_132.f_244 = (Local_132.f_244 - iVar9);
							}
							if (Local_132.f_244 < Local_132.f_246)
							{
								Local_132.f_244 = Local_132.f_246;
							}
							Local_132.f_244 = (Local_132.f_244 + iVar9);
							if (Local_132.f_244 > Local_132.f_245)
							{
								bVar6 = false;
								Local_132.f_244 = Local_132.f_245;
							}
							if (Local_132.f_244 > Local_132.f_248)
							{
								bVar6 = false;
								Local_132.f_244 = (Local_132.f_244 - iVar9);
							}
						}
					}
					else
					{
						if (Local_132.f_244 >= 10000)
						{
							iVar9 = 5000;
						}
						else if (Local_132.f_244 >= 5000)
						{
							iVar9 = 1000;
						}
						else if (Local_132.f_244 >= 500)
						{
							iVar9 = 500;
						}
						else if (Local_132.f_244 >= 100)
						{
							iVar9 = 50;
						}
						else
						{
							iVar9 = 10;
						}
						if (Local_132.f_244 > Local_132.f_248)
						{
							Local_132.f_244 = (Local_132.f_244 - iVar9);
						}
						if (Local_132.f_244 < Local_132.f_246)
						{
							Local_132.f_244 = Local_132.f_246;
						}
						iVar10 = Local_132.f_244;
						if (bVar7)
						{
							Local_132.f_244 = (Local_132.f_244 + iVar9);
							if (Local_132.f_244 > Local_132.f_245)
							{
								Local_132.f_244 = Local_132.f_245;
							}
							if (Local_132.f_244 > Local_132.f_248)
							{
								Local_132.f_244 = (Local_132.f_244 - iVar9);
							}
							if (Local_132.f_244 == iVar10)
							{
								if (unk_0x1BD7199394D7F19A(2, 188) || !unk_0xCE990E643CD9D0E5(Local_132.f_252, 23))
								{
									unk_0xC4CC25B68A91D144(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 1);
									unk_0xBE20AB8238688965(&(Local_132.f_252), 23);
								}
							}
							else
							{
								unk_0xD2459066EA58CE43(&(Local_132.f_252), 23);
								unk_0xC4CC25B68A91D144(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", 1);
							}
						}
						if (bVar8)
						{
							if (Local_132.f_244 <= 100)
							{
								iVar9 = 10;
							}
							else if (Local_132.f_244 <= 500)
							{
								iVar9 = 50;
							}
							else if (Local_132.f_244 <= 5000)
							{
								iVar9 = 500;
							}
							else if (Local_132.f_244 <= 10000)
							{
								iVar9 = 1000;
							}
							else
							{
								iVar9 = 5000;
							}
							Local_132.f_244 = (Local_132.f_244 - iVar9);
							if (Local_132.f_244 < Local_132.f_246)
							{
								Local_132.f_244 = Local_132.f_246;
							}
							if (Local_132.f_244 == iVar10)
							{
								if (unk_0x1BD7199394D7F19A(2, 187) || !unk_0xCE990E643CD9D0E5(Local_132.f_252, 23))
								{
									unk_0xC4CC25B68A91D144(-1, "DLC_VW_ERROR_MAX", "dlc_vw_table_games_frontend_sounds", 1);
									unk_0xBE20AB8238688965(&(Local_132.f_252), 23);
								}
							}
							else
							{
								unk_0xD2459066EA58CE43(&(Local_132.f_252), 23);
								unk_0xC4CC25B68A91D144(-1, "DLC_VW_BET_UP", "dlc_vw_table_games_frontend_sounds", 1);
							}
						}
					}
					if ((Local_132.f_244 == Local_132.f_245 || (Local_132.f_244 + iVar9) > Local_132.f_245) || (Local_132.f_244 + iVar9) > Local_132.f_248)
					{
						unk_0xBE20AB8238688965(&(Local_132.f_252), 20);
					}
					else
					{
						unk_0xD2459066EA58CE43(&(Local_132.f_252), 20);
					}
					unk_0xBE20AB8238688965(&(Local_132.f_253), 0);
					iVar11 = (30 - (func_190(&(Local_122.f_1642[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 /*2*/]), 0, 0) / 1000));
					if (iVar11 > 0 || !func_66(&(Local_122.f_1642[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 /*2*/])))
					{
						if (((((((unk_0x1BD7199394D7F19A(2, 201) && !unk_0x22D6FB6153F774D3(2, 202)) && !unk_0x22D6FB6153F774D3(2, 203)) && Local_132.f_244 >= Local_132.f_246) && !unk_0xDFAB5E5CBE16E8B1()) && !func_334()) && !unk_0x06EBE4F22EC30D45()) && !unk_0xCE990E643CD9D0E5(Local_132.f_250, 0))
						{
							unk_0xBE20AB8238688965(&(Local_132.f_252), 0);
							Local_132.f_255 = unk_0xAA579EC5104BFDA9(func_358(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), func_217(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), 2, true, false, 1065353216, 0, 1065353216);
							unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_132.f_255, func_88(), func_164(Local_132.f_244, bVar2, 0, 0), 4f, -2f, 13, 16, 1148846080, 0);
							unk_0xB88AF19828BF16ED(Local_132.f_255);
							unk_0xD289B55B6AADBA10(1);
						}
						if (!func_332("BJACK_BET") && !unk_0xCE990E643CD9D0E5(Local_132.f_252, 0))
						{
							if ((!bLocal_151 && !bLocal_152) && !bLocal_143)
							{
								func_163("BJACK_BET");
							}
						}
					}
					else if (func_66(&(Local_122.f_1642[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 /*2*/])) && func_65(&(Local_122.f_1642[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 /*2*/]), 30000, 0))
					{
						if (!unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 15))
						{
							unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 16);
						}
					}
				}
				else
				{
					if ((Local_132.f_258 != -1 && unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), 1503712844)) && !unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 15))
					{
						Local_132.f_234 = 1;
					}
					if (Local_132.f_234 && !unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 15))
					{
						if (func_160(Local_132.f_244, &(Local_132.f_243), 1, Local_132.f_231))
						{
							if (Local_132.f_243 == 3)
							{
								Local_132.f_234 = 0;
								Local_132.f_243 = 0;
							}
							else
							{
								Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 = Local_132.f_244;
								Local_138.f_3 = (Local_138.f_3 - Local_132.f_244);
								Local_137.f_6 = (Local_137.f_6 - Local_132.f_244);
								if (unk_0xCE990E643CD9D0E5(Local_132.f_252, 20))
								{
									Local_137.f_5 = 1;
								}
								Local_138.f_12++;
								Local_138.f_7 = (Local_138.f_7 + Local_132.f_244);
								Local_137.f_12 = (Local_137.f_12 + Local_132.f_244);
								unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 15);
								Local_132.f_234 = 0;
							}
						}
					}
				}
			}
			if ((func_66(&(Local_122.f_1642[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 /*2*/])) && Local_122.f_1570[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4] > 1) && (30000 - func_190(&(Local_122.f_1642[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 /*2*/]), 0, 0)) > 0)
			{
				if (func_190(&(Local_122.f_1642[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 /*2*/]), 0, 0) <= 24000)
				{
					func_159((30000 - func_190(&(Local_122.f_1642[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 /*2*/]), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					func_159((30000 - func_190(&(Local_122.f_1642[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 /*2*/]), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
				}
			}
			if (Local_122.f_1515[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4] > 3)
			{
				if (unk_0xCE990E643CD9D0E5(Local_132.f_253, 0) && !Local_132.f_234)
				{
					unk_0xD289B55B6AADBA10(1);
					unk_0xD2459066EA58CE43(&(Local_132.f_252), 0);
					if (!unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 15))
					{
						unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 16);
					}
					func_165(2);
				}
			}
			func_155(Local_132.f_244, "BJACK_BET2", -1, 1, 2, 0, 0, 1, 0, 0, 0, 0, 0, 0, -1);
			break;
		
		case 2:
			if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 >= 0)
			{
				if (Local_122.f_846[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 /*13*/].f_12 >= 2)
				{
					func_63(&(Local_132.f_1576));
					iLocal_155 = 0;
					func_165(3);
				}
			}
			break;
		
		case 3:
			iVar12 = func_34(&(Local_122.f_846[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 /*13*/]), 0);
			iVar13 = func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/]));
			iVar14 = func_27(&(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/]));
			iVar15 = Local_122.f_846[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 /*13*/].f_12;
			iVar16 = Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8;
			iVar17 = Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8;
			bVar18 = (iVar15 == 2 && iVar12 == 21);
			bVar19 = (iVar16 == 2 && iVar13 == 21);
			bVar20 = (iVar17 == 2 && iVar14 == 21);
			if (((bVar20 || iVar14 >= 21) || iVar17 == 7) && !unk_0xCE990E643CD9D0E5(Local_122.f_1555[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4], 12))
			{
				unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 13);
			}
			if (((bVar19 || iVar13 >= 21) || iVar16 == 7) && !unk_0xCE990E643CD9D0E5(Local_122.f_1555[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4], 12))
			{
				if (iVar13 > 21)
				{
					if (!unk_0xCE990E643CD9D0E5(Local_132.f_252, 19))
					{
						Local_132.f_255 = unk_0xAA579EC5104BFDA9(func_358(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), func_217(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), 2, true, false, 1065353216, 0, 1065353216);
						unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_132.f_255, func_216(), func_154(), 2f, -2f, 13, 16, 1148846080, 0);
						unk_0xB88AF19828BF16ED(Local_132.f_255);
						unk_0xBE20AB8238688965(&(Local_132.f_252), 19);
					}
				}
				unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 12);
			}
			if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4])))
			{
				if ((unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4]), func_58(), func_25(Local_131[unk_0x460153A63B9477BC() /*8*/].f_4, (Local_131[unk_0x460153A63B9477BC() /*8*/].f_3 - (4 * Local_131[unk_0x460153A63B9477BC() /*8*/].f_4)), iVar0, 0), 3) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4]), func_58(), func_25(Local_131[unk_0x460153A63B9477BC() /*8*/].f_4, (Local_131[unk_0x460153A63B9477BC() /*8*/].f_3 - (4 * Local_131[unk_0x460153A63B9477BC() /*8*/].f_4)), iVar0, 1), 3)) && !unk_0xCE990E643CD9D0E5(Local_122.f_1555[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4], 12))
				{
					if (func_66(&(Local_132.f_1576)))
					{
						if ((30000 - func_190(&(Local_132.f_1576), 0, 0)) >= 0)
						{
							if (func_190(&(Local_132.f_1576), 0, 0) <= 24000)
							{
								func_159((30000 - func_190(&(Local_132.f_1576), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1);
							}
							else
							{
								func_159((30000 - func_190(&(Local_132.f_1576), 0, 0)), "BJACK_TIME", 0, 0, -1, 0, 3, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							}
						}
						if (func_65(&(Local_132.f_1576), 30000, 0))
						{
							unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 12);
							unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 13);
							func_63(&(Local_132.f_1576));
							return;
						}
					}
					else if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
					{
						if (unk_0x9934470AA0A08B57(unk_0x9B0761B4C3EB8BC7(), func_216(), func_186(1), 3))
						{
							func_367(&(Local_132.f_1576), 0, 0);
						}
					}
					if (bVar18)
					{
						unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 12);
						unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 13);
					}
					else if (((unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 14) && unk_0xCE990E643CD9D0E5(Local_122.f_1565[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4], unk_0x460153A63B9477BC())) && !unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 13)) && !(unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 11) && Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 > 2))
					{
						if (!unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 11) || unk_0xCE990E643CD9D0E5(Local_132.f_252, 0))
						{
							if (!unk_0xCE990E643CD9D0E5(Local_132.f_252, 0))
							{
								if (((!unk_0xDFAB5E5CBE16E8B1() && !func_334()) && !unk_0x06EBE4F22EC30D45()) && !unk_0xCE990E643CD9D0E5(Local_132.f_250, 0))
								{
									if (unk_0x1BD7199394D7F19A(2, 201))
									{
										Local_137.f_22 = 1;
										if (Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 == 2)
										{
											unk_0xBE20AB8238688965(&(Local_132.f_252), 6);
										}
										else if (Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 == 3)
										{
											unk_0xBE20AB8238688965(&(Local_132.f_252), 7);
										}
										else if (Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 == 4)
										{
											unk_0xBE20AB8238688965(&(Local_132.f_252), 8);
										}
										else if (Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 == 5)
										{
											unk_0xBE20AB8238688965(&(Local_132.f_252), 9);
										}
										else if (Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 == 6)
										{
											unk_0xBE20AB8238688965(&(Local_132.f_252), 10);
										}
										switch (unk_0x344C570D6F8700DF(0, 3))
										{
											case 0:
												sVar21 = "request_card";
												break;
											
											case 1:
												sVar21 = "request_card_alt1";
												break;
											
											case 2:
												sVar21 = "request_card_alt2";
												break;
										}
										Local_132.f_255 = unk_0xAA579EC5104BFDA9(func_358(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), func_217(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), 2, true, false, 1065353216, 0, 1065353216);
										unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_132.f_255, func_88(), sVar21, 4f, -2f, 13, 16, 1148846080, 0);
										unk_0xB88AF19828BF16ED(Local_132.f_255);
										unk_0xBE20AB8238688965(&(Local_132.f_252), 0);
										func_63(&(Local_132.f_1576));
									}
									else if (unk_0x1BD7199394D7F19A(2, 203))
									{
										Local_137.f_21 = 1;
										switch (unk_0x344C570D6F8700DF(0, 3))
										{
											case 0:
												sVar22 = "decline_card_001";
												break;
											
											case 1:
												sVar22 = "decline_card_alt1";
												break;
											
											case 2:
												sVar22 = "decline_card_alt2";
												break;
										}
										Local_132.f_255 = unk_0xAA579EC5104BFDA9(func_358(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), func_217(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), 2, true, false, 1065353216, 0, 1065353216);
										unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_132.f_255, func_88(), sVar22, 4f, -2f, 13, 16, 1148846080, 0);
										unk_0xB88AF19828BF16ED(Local_132.f_255);
										unk_0xBE20AB8238688965(&(Local_132.f_252), 14);
										unk_0xBE20AB8238688965(&(Local_132.f_252), 0);
										func_63(&(Local_132.f_1576));
									}
									else if (unk_0x1BD7199394D7F19A(2, 204))
									{
										if (Local_132.f_248 >= Local_132.f_244 && iVar17 == 2)
										{
											Local_137.f_23 = 1;
											Local_132.f_255 = unk_0xAA579EC5104BFDA9(func_358(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), func_217(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), 2, true, false, 1065353216, 0, 1065353216);
											unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_132.f_255, func_88(), func_164(Local_132.f_244, bVar2, 1, 1), 4f, -2f, 13, 16, 1148846080, 0);
											unk_0xB88AF19828BF16ED(Local_132.f_255);
											unk_0xBE20AB8238688965(&(Local_132.f_252), 12);
											unk_0xBE20AB8238688965(&(Local_132.f_252), 0);
											func_63(&(Local_132.f_1576));
										}
									}
								}
							}
							else if (Local_132.f_258 != -1)
							{
								if (((unk_0x9934470AA0A08B57(unk_0x9B0761B4C3EB8BC7(), func_88(), "request_card", 3) || unk_0x9934470AA0A08B57(unk_0x9B0761B4C3EB8BC7(), func_88(), "request_card_alt1", 3)) || unk_0x9934470AA0A08B57(unk_0x9B0761B4C3EB8BC7(), func_88(), "request_card_alt2", 3)) && unk_0x369E69441C066912(Local_132.f_258) >= 0.3f)
								{
									if (unk_0xCE990E643CD9D0E5(Local_132.f_252, 6))
									{
										unk_0xD2459066EA58CE43(&(Local_132.f_252), 6);
										unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 5);
									}
									else if (unk_0xCE990E643CD9D0E5(Local_132.f_252, 7))
									{
										unk_0xD2459066EA58CE43(&(Local_132.f_252), 7);
										unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 6);
									}
									else if (unk_0xCE990E643CD9D0E5(Local_132.f_252, 8))
									{
										unk_0xD2459066EA58CE43(&(Local_132.f_252), 8);
										unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 7);
									}
									else if (unk_0xCE990E643CD9D0E5(Local_132.f_252, 9))
									{
										unk_0xD2459066EA58CE43(&(Local_132.f_252), 9);
										unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 8);
									}
									else if (unk_0xCE990E643CD9D0E5(Local_132.f_252, 10))
									{
										unk_0xD2459066EA58CE43(&(Local_132.f_252), 10);
										unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 9);
									}
								}
								if (((unk_0x9934470AA0A08B57(unk_0x9B0761B4C3EB8BC7(), func_88(), "decline_card_001", 3) || unk_0x9934470AA0A08B57(unk_0x9B0761B4C3EB8BC7(), func_88(), "decline_card_alt1", 3)) || unk_0x9934470AA0A08B57(unk_0x9B0761B4C3EB8BC7(), func_88(), "decline_card_alt2", 3)) && unk_0x369E69441C066912(Local_132.f_258) >= 0.3f)
								{
									if (unk_0xCE990E643CD9D0E5(Local_132.f_252, 14))
									{
										unk_0xD2459066EA58CE43(&(Local_132.f_252), 14);
										unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 13);
									}
								}
								if (unk_0xCE990E643CD9D0E5(Local_132.f_252, 12))
								{
									if (unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), 1503712844))
									{
										Local_132.f_234 = 1;
									}
									if (!unk_0xCE990E643CD9D0E5(Local_132.f_252, 17) && Local_132.f_234)
									{
										if (func_160(Local_132.f_244, &(Local_132.f_243), 1, Local_132.f_231))
										{
											if (Local_132.f_243 == 3)
											{
												unk_0xD2459066EA58CE43(&(Local_132.f_252), 12);
												Local_132.f_234 = 0;
												Local_132.f_243 = 0;
											}
											else
											{
												Local_138.f_3 = (Local_138.f_3 - Local_132.f_244);
												Local_137.f_6 = (Local_137.f_6 - Local_132.f_244);
												Local_138.f_8 = (Local_138.f_8 + Local_132.f_244);
												Local_137.f_13 = (Local_137.f_13 + Local_132.f_244);
												Local_131[unk_0x460153A63B9477BC() /*8*/].f_2 = (Local_131[unk_0x460153A63B9477BC() /*8*/].f_2 + Local_132.f_244);
												unk_0xBE20AB8238688965(&(Local_132.f_252), 17);
												unk_0xD2459066EA58CE43(&(Local_132.f_252), 12);
												unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 11);
												Local_132.f_234 = 0;
											}
										}
									}
								}
							}
						}
					}
					else if ((!unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 10) && !unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 12)) || unk_0xCE990E643CD9D0E5(Local_132.f_252, 0))
					{
						if (!unk_0xCE990E643CD9D0E5(Local_132.f_252, 0))
						{
							if (((!unk_0xDFAB5E5CBE16E8B1() && !func_334()) && !unk_0x06EBE4F22EC30D45()) && !unk_0xCE990E643CD9D0E5(Local_132.f_250, 0))
							{
								if (unk_0x1BD7199394D7F19A(2, 201))
								{
									Local_137.f_22 = 1;
									if (Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 2)
									{
										unk_0xBE20AB8238688965(&(Local_132.f_252), 1);
									}
									else if (Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 3)
									{
										unk_0xBE20AB8238688965(&(Local_132.f_252), 2);
									}
									else if (Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 4)
									{
										unk_0xBE20AB8238688965(&(Local_132.f_252), 3);
									}
									else if (Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 5)
									{
										unk_0xBE20AB8238688965(&(Local_132.f_252), 4);
									}
									else if (Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 6)
									{
										unk_0xBE20AB8238688965(&(Local_132.f_252), 5);
									}
									switch (unk_0x344C570D6F8700DF(0, 3))
									{
										case 0:
											sVar23 = "request_card";
											break;
										
										case 1:
											sVar23 = "request_card_alt1";
											break;
										
										case 2:
											sVar23 = "request_card_alt2";
											break;
									}
									Local_132.f_255 = unk_0xAA579EC5104BFDA9(func_358(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), func_217(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_132.f_255, func_88(), sVar23, 4f, -2f, 13, 16, 1148846080, 0);
									unk_0xB88AF19828BF16ED(Local_132.f_255);
									unk_0xBE20AB8238688965(&(Local_132.f_252), 0);
									func_63(&(Local_132.f_1576));
								}
								else if (unk_0x1BD7199394D7F19A(2, 203))
								{
									Local_137.f_21 = 1;
									switch (unk_0x344C570D6F8700DF(0, 3))
									{
										case 0:
											sVar24 = "decline_card_001";
											break;
										
										case 1:
											sVar24 = "decline_card_alt1";
											break;
										
										case 2:
											sVar24 = "decline_card_alt2";
											break;
									}
									Local_132.f_255 = unk_0xAA579EC5104BFDA9(func_358(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), func_217(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), 2, true, false, 1065353216, 0, 1065353216);
									unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_132.f_255, func_88(), sVar24, 4f, -2f, 13, 16, 1148846080, 0);
									unk_0xB88AF19828BF16ED(Local_132.f_255);
									unk_0xBE20AB8238688965(&(Local_132.f_252), 13);
									unk_0xBE20AB8238688965(&(Local_132.f_252), 0);
									func_63(&(Local_132.f_1576));
								}
								else if (unk_0x1BD7199394D7F19A(2, 204))
								{
									if (Local_132.f_248 >= Local_132.f_244 && iVar16 == 2)
									{
										Local_137.f_23 = 1;
										Local_132.f_255 = unk_0xAA579EC5104BFDA9(func_358(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), func_217(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), 2, true, false, 1065353216, 0, 1065353216);
										unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_132.f_255, func_88(), func_164(Local_132.f_244, bVar2, 1, 0), 4f, -2f, 13, 16, 1148846080, 0);
										unk_0xB88AF19828BF16ED(Local_132.f_255);
										unk_0xBE20AB8238688965(&(Local_132.f_252), 11);
										unk_0xBE20AB8238688965(&(Local_132.f_252), 0);
										func_63(&(Local_132.f_1576));
									}
								}
								else if (unk_0x1BD7199394D7F19A(2, 206))
								{
									if (!unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 14))
									{
										if ((func_35(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/][0]) == func_35(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/][1]) && Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 2) && Local_132.f_248 >= Local_132.f_244)
										{
											Local_137.f_24 = 1;
											Local_132.f_255 = unk_0xAA579EC5104BFDA9(func_358(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), func_217(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), 2, true, false, 1065353216, 0, 1065353216);
											unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_132.f_255, func_88(), func_164(Local_132.f_244, bVar2, 0, 1), 4f, -2f, 13, 16, 1148846080, 0);
											unk_0xB88AF19828BF16ED(Local_132.f_255);
											unk_0xBE20AB8238688965(&(Local_132.f_252), 15);
											unk_0xBE20AB8238688965(&(Local_132.f_252), 0);
											func_63(&(Local_132.f_1576));
										}
									}
								}
							}
						}
						else if (Local_132.f_258 != -1)
						{
							if (((unk_0x9934470AA0A08B57(unk_0x9B0761B4C3EB8BC7(), func_88(), "request_card", 3) || unk_0x9934470AA0A08B57(unk_0x9B0761B4C3EB8BC7(), func_88(), "request_card_alt1", 3)) || unk_0x9934470AA0A08B57(unk_0x9B0761B4C3EB8BC7(), func_88(), "request_card_alt2", 3)) && unk_0x369E69441C066912(Local_132.f_258) >= 0.3f)
							{
								if (unk_0xCE990E643CD9D0E5(Local_132.f_252, 1))
								{
									unk_0xD2459066EA58CE43(&(Local_132.f_252), 1);
									unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 0);
								}
								else if (unk_0xCE990E643CD9D0E5(Local_132.f_252, 2))
								{
									unk_0xD2459066EA58CE43(&(Local_132.f_252), 2);
									unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 1);
								}
								else if (unk_0xCE990E643CD9D0E5(Local_132.f_252, 3))
								{
									unk_0xD2459066EA58CE43(&(Local_132.f_252), 3);
									unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 2);
								}
								else if (unk_0xCE990E643CD9D0E5(Local_132.f_252, 4))
								{
									unk_0xD2459066EA58CE43(&(Local_132.f_252), 4);
									unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 3);
								}
								else if (unk_0xCE990E643CD9D0E5(Local_132.f_252, 5))
								{
									unk_0xD2459066EA58CE43(&(Local_132.f_252), 5);
									unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 4);
								}
							}
							if (((unk_0x9934470AA0A08B57(unk_0x9B0761B4C3EB8BC7(), func_88(), "decline_card_001", 3) || unk_0x9934470AA0A08B57(unk_0x9B0761B4C3EB8BC7(), func_88(), "decline_card_alt1", 3)) || unk_0x9934470AA0A08B57(unk_0x9B0761B4C3EB8BC7(), func_88(), "decline_card_alt2", 3)) && unk_0x369E69441C066912(Local_132.f_258) >= 0.3f)
							{
								if (unk_0xCE990E643CD9D0E5(Local_132.f_252, 13))
								{
									unk_0xD2459066EA58CE43(&(Local_132.f_252), 13);
									unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 12);
								}
							}
							if (unk_0xCE990E643CD9D0E5(Local_132.f_252, 11))
							{
								if (unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), 1503712844))
								{
									Local_132.f_234 = 1;
								}
								if (!unk_0xCE990E643CD9D0E5(Local_132.f_252, 16) && Local_132.f_234)
								{
									if (func_160(Local_132.f_244, &(Local_132.f_243), 1, Local_132.f_231))
									{
										if (Local_132.f_243 == 3)
										{
											unk_0xD2459066EA58CE43(&(Local_132.f_252), 11);
											Local_132.f_234 = 0;
											Local_132.f_243 = 0;
										}
										else
										{
											Local_138.f_3 = (Local_138.f_3 - Local_132.f_244);
											Local_137.f_6 = (Local_137.f_6 - Local_132.f_244);
											Local_138.f_7 = (Local_138.f_7 + Local_132.f_244);
											Local_137.f_12 = (Local_137.f_12 + Local_132.f_244);
											Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 = (Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 + Local_132.f_244);
											unk_0xBE20AB8238688965(&(Local_132.f_252), 16);
											unk_0xD2459066EA58CE43(&(Local_132.f_252), 11);
											unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 10);
											Local_132.f_234 = 0;
										}
									}
								}
							}
							if (unk_0xCE990E643CD9D0E5(Local_132.f_252, 15))
							{
								if (unk_0x39CABCD7925B9200(unk_0x9B0761B4C3EB8BC7(), 1503712844))
								{
									Local_132.f_234 = 1;
								}
								if (!unk_0xCE990E643CD9D0E5(Local_132.f_252, 18) && Local_132.f_234)
								{
									if (func_160(Local_132.f_244, &(Local_132.f_243), 1, Local_132.f_231))
									{
										if (Local_132.f_243 == 3)
										{
											unk_0xD2459066EA58CE43(&(Local_132.f_252), 15);
											Local_132.f_234 = 0;
											Local_132.f_243 = 0;
										}
										else
										{
											Local_138.f_3 = (Local_138.f_3 - Local_132.f_244);
											Local_137.f_6 = (Local_137.f_6 - Local_132.f_244);
											Local_138.f_8 = (Local_138.f_8 + Local_132.f_244);
											Local_137.f_13 = (Local_137.f_13 + Local_132.f_244);
											Local_131[unk_0x460153A63B9477BC() /*8*/].f_2 = (Local_131[unk_0x460153A63B9477BC() /*8*/].f_2 + Local_132.f_244);
											unk_0xBE20AB8238688965(&(Local_132.f_252), 18);
											unk_0xD2459066EA58CE43(&(Local_132.f_252), 15);
											unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/]), 14);
											Local_132.f_234 = 0;
										}
									}
								}
							}
						}
					}
				}
				else if (iVar0 != unk_0x460153A63B9477BC() && iVar0 != func_419())
				{
					if (!func_332("BJACK_WAIT"))
					{
						if ((!bLocal_151 && !bLocal_152) && !bLocal_143)
						{
							func_163("BJACK_WAIT");
						}
					}
				}
				else if (func_332("BJACK_WAIT"))
				{
					unk_0xD289B55B6AADBA10(1);
				}
			}
			if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 >= 0)
			{
				if (Local_122.f_1515[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4] == 6)
				{
					if ((Local_122.f_1575[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4] == (Local_131[unk_0x460153A63B9477BC() /*8*/].f_3 - (4 * Local_131[unk_0x460153A63B9477BC() /*8*/].f_4)) && !(!unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 14) && unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 12))) && !((unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 14) && unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 12)) && unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 13)))
					{
						if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4]), func_58(), func_25(Local_131[unk_0x460153A63B9477BC() /*8*/].f_4, (Local_131[unk_0x460153A63B9477BC() /*8*/].f_3 - (4 * Local_131[unk_0x460153A63B9477BC() /*8*/].f_4)), iVar0, 0), 3) || unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4]), func_58(), func_25(Local_131[unk_0x460153A63B9477BC() /*8*/].f_4, (Local_131[unk_0x460153A63B9477BC() /*8*/].f_3 - (4 * Local_131[unk_0x460153A63B9477BC() /*8*/].f_4)), iVar0, 1), 3))
						{
							if (((Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 2 && !unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 14)) && Local_132.f_248 >= Local_132.f_244) && func_35(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/][0]) == func_35(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/][1]))
							{
								if ((!bLocal_151 && !bLocal_152) && !bLocal_143)
								{
									if (!func_332("BJACK_TURN_S"))
									{
										func_163("BJACK_TURN_S");
									}
								}
							}
							else if (Local_132.f_248 >= Local_132.f_244 && (((((!unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 14) && func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) < 21) && Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 2) && !unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 10)) || (((!unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 13) && !unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 11)) && Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 == 2) && func_27(&(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/])) < 21)) || ((func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) < 21 && Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 2) && !unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 10))))
							{
								if ((!bLocal_151 && !bLocal_152) && !bLocal_143)
								{
									if (!func_332("BJACK_TURN_D"))
									{
										func_163("BJACK_TURN_D");
									}
								}
							}
							else if ((!bLocal_151 && !bLocal_152) && !bLocal_143)
							{
								if (!func_332("BJACK_TURN"))
								{
									func_163("BJACK_TURN");
								}
							}
						}
						else if ((func_332("BJACK_TURN") || func_332("BJACK_TURN_D")) || func_332("BJACK_TURN_S"))
						{
							unk_0xD289B55B6AADBA10(1);
						}
					}
					else if ((func_332("BJACK_TURN") || func_332("BJACK_TURN_D")) || func_332("BJACK_TURN_S"))
					{
						unk_0xD289B55B6AADBA10(1);
					}
				}
				if (Local_122.f_1515[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4] == 1)
				{
					if (unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 16))
					{
						bVar25 = true;
					}
					if (Local_132.f_259 != -1)
					{
						func_308(&(Local_132.f_259));
						Local_132.f_259 = -1;
					}
					Local_131[unk_0x460153A63B9477BC() /*8*/] = 0;
					Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 = 0;
					Local_131[unk_0x460153A63B9477BC() /*8*/].f_2 = 0;
					Local_131[unk_0x460153A63B9477BC() /*8*/].f_5 = 0;
					Local_132.f_232 = 0;
					Local_132.f_233 = 0;
					Local_132.f_235 = 0;
					Local_132.f_252 = 0;
					unk_0xD289B55B6AADBA10(1);
					func_165(0);
					Local_137.f_18 = func_416();
					Local_137.f_19 = func_192();
					Local_137.f_17 = func_190(&uLocal_133, 0, 0);
					Local_137.f_7 = func_402();
					if (!func_351() || func_345())
					{
						func_376(1);
						unk_0xD289B55B6AADBA10(1);
						if (Global_262145.f_26108 && !bVar25)
						{
							unk_0x69805A4C17F46811(&Local_137);
						}
						return;
					}
					if (func_330())
					{
						switch (func_326())
						{
							case 0:
								Local_138.f_2 = 1982714739;
								break;
							
							case 1:
								Local_138.f_2 = -633175758;
								break;
							
							case 2:
								Local_138.f_2 = -1625999354;
								break;
						}
						switch (func_326())
						{
							case 0:
								Local_137.f_4 = 1982714739;
								break;
							
							case 1:
								Local_137.f_4 = -633175758;
								break;
							
							case 2:
								Local_137.f_4 = -1625999354;
								break;
						}
						if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 > -1)
						{
							Local_137.f_9 = Local_122.f_1570[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4];
						}
						Local_137.f_18 = func_416();
						Local_137.f_19 = func_192();
						Local_137.f_17 = func_190(&uLocal_133, 0, 0);
						Local_137.f_7 = func_402();
						if (Global_262145.f_26108 && !bVar25)
						{
							unk_0x69805A4C17F46811(&Local_137);
						}
						func_376(1);
						unk_0xD289B55B6AADBA10(1);
						if (func_326() == 2)
						{
							func_208("CAS_MG_CTIME", -1);
						}
						else
						{
							func_208("CAS_MG_CBAN", -1);
						}
						return;
					}
					if (Global_262145.f_26108 && !bVar25)
					{
						unk_0x69805A4C17F46811(&Local_137);
					}
				}
				if (Local_122.f_1515[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4] > 6)
				{
					if ((func_332("BJACK_TURN") || func_332("BJACK_TURN_D")) || func_332("BJACK_TURN_S"))
					{
						unk_0xD289B55B6AADBA10(1);
					}
				}
				if (Local_122.f_1515[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4] == 9 && iVar13 > 0)
				{
					if (Local_132.f_232 && Local_132.f_233)
					{
						if (!unk_0xCE990E643CD9D0E5(Local_132.f_252, 19))
						{
							if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 > -1)
							{
								Local_137.f_9 = Local_122.f_1570[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4];
							}
							Local_132.f_255 = unk_0xAA579EC5104BFDA9(func_358(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), func_217(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3), 2, false, true, 1065353216, 0, 1065353216);
							sVar26 = func_153(Local_137.f_6);
							if (func_53(Local_131[unk_0x460153A63B9477BC() /*8*/].f_4, Local_132.f_257))
							{
								if (Local_132.f_244 >= 35000)
								{
									if (((iVar13 <= 21 && iVar16 == 7) || (iVar14 <= 21 && iVar17 == 7)) || ((iVar13 == 21 && iVar14 == 21) && iVar12 != 21))
									{
										sVar26 = func_152();
									}
									else if (Local_132.f_244 >= 45000)
									{
										if ((((iVar16 >= 2 && iVar13 < 21) && iVar12 == iVar13 + 1) && iVar15 > 2) || (((iVar17 >= 2 && iVar14 < 21) && iVar12 == iVar14 + 1) && iVar15 > 2))
										{
											sVar26 = func_150();
										}
									}
								}
							}
							else if (Local_132.f_244 >= 4500)
							{
								if (((iVar13 <= 21 && iVar16 == 7) || (iVar14 <= 21 && iVar17 == 7)) || ((iVar13 == 21 && iVar14 == 21) && iVar12 != 21))
								{
									sVar26 = func_152();
								}
							}
							unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_132.f_255, func_216(), sVar26, 2f, -2f, 13, 16, 1148846080, 0);
							unk_0xB88AF19828BF16ED(Local_132.f_255);
							unk_0xBE20AB8238688965(&(Local_132.f_252), 19);
						}
					}
					if ((Local_132.f_232 && Local_132.f_233) && !Local_132.f_235)
					{
						if (Local_137.f_14 > 0)
						{
							if (func_106(Local_137.f_14, &(Local_132.f_243), 1))
							{
								unk_0xC4CC25B68A91D144(-1, "DLC_VW_WIN_CHIPS", "dlc_vw_table_games_frontend_sounds", 1);
								Local_132.f_235 = 1;
							}
						}
					}
					if ((((Local_132.f_232 && Local_132.f_233) && !bLocal_151) && !bLocal_152) && !bLocal_143)
					{
						if (Local_137.f_14 > 0)
						{
							if (Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 <= 0)
							{
								if (bVar19 && !bVar18)
								{
									if (!func_105("BJACK_WIN_2", "BJACK_BJ", Local_137.f_14))
									{
										func_104("BJACK_WIN_2", "BJACK_BJ", Local_137.f_14);
									}
								}
								else if (iVar13 <= 21 && iVar16 == 7)
								{
									if (!func_105("BJACK_WIN_2", "BJACK_7CC", Local_137.f_14))
									{
										func_104("BJACK_WIN_2", "BJACK_7CC", Local_137.f_14);
									}
								}
								else if (iVar13 == iVar12)
								{
									if (!func_332("BJACK_PUSH"))
									{
										func_163("BJACK_PUSH");
									}
								}
								else if (!func_103("BJACK_WIN_1", iVar13, Local_137.f_14))
								{
									func_102("BJACK_WIN_1", iVar13, Local_137.f_14);
								}
							}
							else if ((bVar19 || bVar20) && !bVar18)
							{
								if (bVar19 && bVar20)
								{
									if (!func_101("BJACK_WIN_6", "BJACK_BJ", "BJACK_BJ", Local_137.f_14))
									{
										func_100("BJACK_WIN_6", "BJACK_BJ", "BJACK_BJ", Local_137.f_14);
									}
								}
								else if (bVar19)
								{
									if (iVar14 <= 21 && iVar17 == 7)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_BJ", "BJACK_7CC", Local_137.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_BJ", "BJACK_7CC", Local_137.f_14);
										}
									}
									else if (iVar14 > 21)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_BJ", "BJACK_BUSTED", Local_137.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_BJ", "BJACK_BUSTED", Local_137.f_14);
										}
									}
									else if (!func_99("BJACK_WIN_4", "BJACK_BJ", iVar14, Local_137.f_14))
									{
										func_98("BJACK_WIN_4", "BJACK_BJ", iVar14, Local_137.f_14);
									}
								}
								else if (bVar20)
								{
									if (iVar13 <= 21 && iVar16 == 7)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_7CC", "BJACK_BJ", Local_137.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_7CC", "BJACK_BJ", Local_137.f_14);
										}
									}
									else if (iVar13 > 21)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_BJ", Local_137.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_BJ", Local_137.f_14);
										}
									}
									else if (!func_99("BJACK_WIN_5", "BJACK_BJ", iVar13, Local_137.f_14))
									{
										func_98("BJACK_WIN_5", "BJACK_BJ", iVar13, Local_137.f_14);
									}
								}
							}
							else if ((iVar13 <= 21 && iVar16 == 7) || (iVar14 <= 21 && iVar17 == 7))
							{
								if ((iVar13 <= 21 && iVar16 == 7) && (iVar14 <= 21 && iVar17 == 7))
								{
									if (!func_101("BJACK_WIN_6", "BJACK_7CC", "BJACK_7CC", Local_137.f_14))
									{
										func_100("BJACK_WIN_6", "BJACK_7CC", "BJACK_7CC", Local_137.f_14);
									}
								}
								else if (iVar13 <= 21 && iVar16 == 7)
								{
									if (iVar14 > 21)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_7CC", "BJACK_BUSTED", Local_137.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_7CC", "BJACK_BUSTED", Local_137.f_14);
										}
									}
									else if (!func_99("BJACK_WIN_4", "BJACK_7CC", iVar14, Local_137.f_14))
									{
										func_98("BJACK_WIN_4", "BJACK_7CC", iVar14, Local_137.f_14);
									}
								}
								else if (iVar14 <= 21 && iVar17 == 7)
								{
									if (iVar13 > 21)
									{
										if (!func_101("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_7CC", Local_137.f_14))
										{
											func_100("BJACK_WIN_6", "BJACK_BUSTED", "BJACK_7CC", Local_137.f_14);
										}
									}
									else if (!func_99("BJACK_WIN_5", "BJACK_7CC", iVar13, Local_137.f_14))
									{
										func_98("BJACK_WIN_5", "BJACK_7CC", iVar13, Local_137.f_14);
									}
								}
							}
							else if (iVar13 == iVar12 && iVar14 == iVar12)
							{
								if (!func_332("BJACK_PUSH"))
								{
									func_163("BJACK_PUSH");
								}
							}
							else if (iVar13 <= 21 && iVar14 <= 21)
							{
								if (!func_97("BJACK_WIN_3", iVar13, iVar14, Local_137.f_14))
								{
									func_96("BJACK_WIN_3", iVar13, iVar14, Local_137.f_14);
								}
							}
							else if (iVar13 <= 21)
							{
								if (!func_99("BJACK_WIN_5", "BJACK_BUSTED", iVar13, Local_137.f_14))
								{
									func_98("BJACK_WIN_5", "BJACK_BUSTED", iVar13, Local_137.f_14);
								}
							}
							else if (iVar14 <= 21)
							{
								if (!func_99("BJACK_WIN_4", "BJACK_BUSTED", iVar14, Local_137.f_14))
								{
									func_98("BJACK_WIN_4", "BJACK_BUSTED", iVar14, Local_137.f_14);
								}
							}
						}
						else if (bVar18)
						{
							if (!func_95("BJACK_LOSE_2", "BJACK_BJ"))
							{
								func_94("BJACK_LOSE_2", "BJACK_BJ");
							}
						}
						else if (Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 <= 0)
						{
							if (iVar13 > 21)
							{
								if (!func_95("BJACK_LOSE_3", "BJACK_BUSTED"))
								{
									func_94("BJACK_LOSE_3", "BJACK_BUSTED");
								}
							}
							else if (!func_319("BJACK_LOSE_1", iVar12))
							{
								func_93("BJACK_LOSE_1", iVar12);
							}
						}
						else if (iVar13 > 21 && iVar14 > 21)
						{
							if (!func_92("BJACK_LOSE_4", "BJACK_BUSTED", "BJACK_BUSTED"))
							{
								func_91("BJACK_LOSE_4", "BJACK_BUSTED", "BJACK_BUSTED");
							}
						}
						else if (!func_319("BJACK_LOSE_1", iVar12))
						{
							func_93("BJACK_LOSE_1", iVar12);
						}
					}
					if (!unk_0xCE990E643CD9D0E5(iLocal_155, 0))
					{
						if (bVar19)
						{
							Local_138.f_17++;
						}
						unk_0xBE20AB8238688965(&iLocal_155, 0);
					}
					if (!unk_0xCE990E643CD9D0E5(iLocal_155, 1))
					{
						if (bVar20)
						{
							Local_138.f_17++;
						}
						unk_0xBE20AB8238688965(&iLocal_155, 1);
					}
					if (!unk_0xCE990E643CD9D0E5(iLocal_155, 2))
					{
						if (iVar16 == 7 && iVar13 <= 21)
						{
							Local_138.f_20++;
						}
						unk_0xBE20AB8238688965(&iLocal_155, 2);
					}
					if (!unk_0xCE990E643CD9D0E5(iLocal_155, 3))
					{
						if (iVar17 == 7 && iVar14 <= 21)
						{
							Local_138.f_20++;
						}
						unk_0xBE20AB8238688965(&iLocal_155, 3);
					}
					if (!unk_0xCE990E643CD9D0E5(iLocal_155, 4))
					{
						if (iVar13 > 21)
						{
							Local_138.f_19++;
						}
						unk_0xBE20AB8238688965(&iLocal_155, 4);
					}
					if (!unk_0xCE990E643CD9D0E5(iLocal_155, 5))
					{
						if (iVar14 > 21)
						{
							Local_138.f_19++;
						}
						unk_0xBE20AB8238688965(&iLocal_155, 5);
					}
					if (!unk_0xCE990E643CD9D0E5(iLocal_155, 6))
					{
						if (bVar18)
						{
							Local_138.f_16++;
						}
						unk_0xBE20AB8238688965(&iLocal_155, 6);
					}
					if (bVar18 && !bVar19)
					{
						if (!Local_132.f_232)
						{
							func_189(Local_131[unk_0x460153A63B9477BC() /*8*/].f_1);
							Local_137.f_4 = 1183160994;
							Local_137.f_25 = 1183160994;
							Local_138.f_14++;
							Local_132.f_232 = 1;
							Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 = 0;
						}
					}
					else if (iVar13 <= 21)
					{
						if (bVar19 && !bVar18)
						{
							if (!Local_132.f_232)
							{
								Local_138.f_3 = (Local_138.f_3 + floor((IntToFloat(Local_131[unk_0x460153A63B9477BC() /*8*/].f_1) * 2.5f)));
								Local_137.f_6 = (Local_137.f_6 + floor((IntToFloat(Local_131[unk_0x460153A63B9477BC() /*8*/].f_1) * 2.5f)));
								Local_137.f_14 = (Local_137.f_14 + floor((IntToFloat(Local_131[unk_0x460153A63B9477BC() /*8*/].f_1) * 2.5f)));
								Local_137.f_15 = 1;
								Local_138.f_13++;
								Local_137.f_4 = -67503841;
								Local_137.f_25 = -67503841;
								Local_132.f_232 = 1;
								Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 = 0;
							}
						}
						else if (iVar16 == 7 && !bVar18)
						{
							if (!Local_132.f_232)
							{
								Local_138.f_3 = (Local_138.f_3 + Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 * 2);
								Local_137.f_6 = (Local_137.f_6 + Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 * 2);
								Local_137.f_14 = (Local_137.f_14 + Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 * 2);
								Local_137.f_15 = 1;
								Local_138.f_13++;
								Local_137.f_4 = 579613221;
								Local_137.f_25 = 579613221;
								Local_132.f_232 = 1;
								Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 = 0;
							}
						}
						else if (iVar13 > iVar12 || iVar12 > 21)
						{
							if (!Local_132.f_232)
							{
								Local_137.f_25 = -562306862;
								Local_138.f_3 = (Local_138.f_3 + Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 * 2);
								Local_137.f_6 = (Local_137.f_6 + Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 * 2);
								Local_137.f_14 = (Local_137.f_14 + Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 * 2);
								Local_137.f_15 = 1;
								Local_138.f_13++;
								Local_137.f_4 = -562306862;
								Local_137.f_25 = -562306862;
								Local_132.f_232 = 1;
								Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 = 0;
							}
						}
						else if (iVar13 < iVar12 || (bVar18 && !bVar19))
						{
							if (!Local_132.f_232)
							{
								func_189(Local_131[unk_0x460153A63B9477BC() /*8*/].f_1);
								Local_137.f_4 = -1851302466;
								Local_137.f_25 = -1851302466;
								Local_138.f_14++;
								Local_132.f_232 = 1;
								Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 = 0;
							}
						}
						else if (!Local_132.f_232)
						{
							Local_137.f_25 = 1960114521;
							Local_137.f_4 = 1960114521;
							Local_138.f_3 = (Local_138.f_3 + Local_131[unk_0x460153A63B9477BC() /*8*/].f_1);
							Local_137.f_6 = (Local_137.f_6 + Local_131[unk_0x460153A63B9477BC() /*8*/].f_1);
							Local_137.f_14 = (Local_137.f_14 + Local_131[unk_0x460153A63B9477BC() /*8*/].f_1);
							Local_137.f_15 = 0;
							Local_132.f_232 = 1;
							func_189(Local_131[unk_0x460153A63B9477BC() /*8*/].f_1);
							Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 = 0;
						}
					}
					else if (!Local_132.f_232)
					{
						func_189(Local_131[unk_0x460153A63B9477BC() /*8*/].f_1);
						Local_137.f_4 = -1052705919;
						Local_137.f_25 = -1052705919;
						Local_138.f_14++;
						Local_132.f_232 = 1;
						Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 = 0;
					}
					if (unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 14))
					{
						if (bVar18 && !bVar20)
						{
							if (!Local_132.f_233)
							{
								func_189(Local_131[unk_0x460153A63B9477BC() /*8*/].f_2);
								if (Local_137.f_25 == -1052705919)
								{
									Local_137.f_4 = 1702151977;
									Local_137.f_25 = 1702151977;
								}
								else if (Local_137.f_25 == 579613221)
								{
									Local_137.f_4 = -2136370424;
									Local_137.f_25 = -2136370424;
								}
								else if (Local_137.f_25 == -1851302466)
								{
									Local_137.f_4 = -1858785397;
									Local_137.f_25 = -1858785397;
								}
								else if (Local_137.f_25 == -562306862)
								{
									Local_137.f_4 = 1946656957;
									Local_137.f_25 = 1946656957;
								}
								else if (Local_137.f_25 == -67503841)
								{
									Local_137.f_4 = -2105313098;
									Local_137.f_25 = -2105313098;
								}
								else if (Local_137.f_25 == 1960114521)
								{
									Local_137.f_4 = -185627827;
									Local_137.f_25 = -185627827;
								}
								else if (Local_137.f_25 == 1183160994)
								{
									Local_137.f_4 = -1498042471;
									Local_137.f_25 = -1498042471;
								}
								Local_138.f_14++;
								Local_132.f_233 = 1;
								Local_131[unk_0x460153A63B9477BC() /*8*/].f_2 = 0;
							}
						}
						else if (iVar14 <= 21)
						{
							if (bVar20 && !bVar18)
							{
								if (!Local_132.f_233)
								{
									Local_138.f_3 = (Local_138.f_3 + floor((IntToFloat(Local_131[unk_0x460153A63B9477BC() /*8*/].f_2) * 2.5f)));
									Local_137.f_6 = (Local_137.f_6 + floor((IntToFloat(Local_131[unk_0x460153A63B9477BC() /*8*/].f_2) * 2.5f)));
									Local_137.f_14 = (Local_137.f_14 + floor((IntToFloat(Local_131[unk_0x460153A63B9477BC() /*8*/].f_2) * 2.5f)));
									Local_137.f_15 = 1;
									Local_138.f_13++;
									if (Local_137.f_25 == -1052705919)
									{
										Local_137.f_4 = 124952027;
										Local_137.f_25 = 124952027;
									}
									else if (Local_137.f_25 == 579613221)
									{
										Local_137.f_4 = 670083824;
										Local_137.f_25 = 670083824;
									}
									else if (Local_137.f_25 == -1851302466)
									{
										Local_137.f_4 = 446908156;
										Local_137.f_25 = 446908156;
									}
									else if (Local_137.f_25 == -562306862)
									{
										Local_137.f_4 = -1508284701;
										Local_137.f_25 = -1508284701;
									}
									else if (Local_137.f_25 == -67503841)
									{
										Local_137.f_4 = 179647057;
										Local_137.f_25 = 179647057;
									}
									else if (Local_137.f_25 == 1960114521)
									{
										Local_137.f_4 = -890276844;
										Local_137.f_25 = -890276844;
									}
									else if (Local_137.f_25 == 1183160994)
									{
										Local_137.f_4 = 1647364704;
										Local_137.f_25 = 1647364704;
									}
									Local_132.f_233 = 1;
									Local_131[unk_0x460153A63B9477BC() /*8*/].f_2 = 0;
								}
							}
							else if (iVar17 == 7 && !bVar18)
							{
								if (!Local_132.f_233)
								{
									Local_138.f_3 = (Local_138.f_3 + Local_131[unk_0x460153A63B9477BC() /*8*/].f_2 * 2);
									Local_137.f_6 = (Local_137.f_6 + Local_131[unk_0x460153A63B9477BC() /*8*/].f_2 * 2);
									Local_137.f_14 = (Local_137.f_14 + Local_131[unk_0x460153A63B9477BC() /*8*/].f_2 * 2);
									Local_137.f_15 = 1;
									Local_138.f_13++;
									if (Local_137.f_25 == -1052705919)
									{
										Local_137.f_4 = -1196919212;
										Local_137.f_25 = -1196919212;
									}
									else if (Local_137.f_25 == 579613221)
									{
										Local_137.f_4 = 505925496;
										Local_137.f_25 = 505925496;
									}
									else if (Local_137.f_25 == -1851302466)
									{
										Local_137.f_4 = 2012692421;
										Local_137.f_25 = 2012692421;
									}
									else if (Local_137.f_25 == -562306862)
									{
										Local_137.f_4 = 326925312;
										Local_137.f_25 = 326925312;
									}
									else if (Local_137.f_25 == -67503841)
									{
										Local_137.f_4 = 487743337;
										Local_137.f_25 = 487743337;
									}
									else if (Local_137.f_25 == 1960114521)
									{
										Local_137.f_4 = 526318358;
										Local_137.f_25 = 526318358;
									}
									else if (Local_137.f_25 == 1183160994)
									{
										Local_137.f_4 = -1506449922;
										Local_137.f_25 = -1506449922;
									}
									Local_132.f_233 = 1;
									Local_131[unk_0x460153A63B9477BC() /*8*/].f_2 = 0;
								}
							}
							else if (iVar14 > iVar12 || iVar12 > 21)
							{
								if (!Local_132.f_233)
								{
									Local_138.f_3 = (Local_138.f_3 + Local_131[unk_0x460153A63B9477BC() /*8*/].f_2 * 2);
									Local_137.f_6 = (Local_137.f_6 + Local_131[unk_0x460153A63B9477BC() /*8*/].f_2 * 2);
									Local_137.f_14 = (Local_137.f_14 + Local_131[unk_0x460153A63B9477BC() /*8*/].f_2 * 2);
									Local_137.f_15 = 1;
									Local_138.f_13++;
									if (Local_137.f_25 == -1052705919)
									{
										Local_137.f_4 = -1738969561;
										Local_137.f_25 = -1738969561;
									}
									else if (Local_137.f_25 == 579613221)
									{
										Local_137.f_4 = -67385374;
										Local_137.f_25 = -67385374;
									}
									else if (Local_137.f_25 == -1851302466)
									{
										Local_137.f_4 = 299063546;
										Local_137.f_25 = 299063546;
									}
									else if (Local_137.f_25 == -562306862)
									{
										Local_137.f_4 = 639742496;
										Local_137.f_25 = 639742496;
									}
									else if (Local_137.f_25 == -67503841)
									{
										Local_137.f_4 = -833750355;
										Local_137.f_25 = -833750355;
									}
									else if (Local_137.f_25 == 1960114521)
									{
										Local_137.f_4 = 656184401;
										Local_137.f_25 = 656184401;
									}
									else if (Local_137.f_25 == 1183160994)
									{
										Local_137.f_4 = 1380168920;
										Local_137.f_25 = 1380168920;
									}
									Local_132.f_233 = 1;
									Local_131[unk_0x460153A63B9477BC() /*8*/].f_2 = 0;
								}
							}
							else if (iVar14 < iVar12 || (bVar18 && !bVar20))
							{
								if (!Local_132.f_233)
								{
									func_189(Local_131[unk_0x460153A63B9477BC() /*8*/].f_2);
									if (Local_137.f_25 == -1052705919)
									{
										Local_137.f_4 = 1702151977;
										Local_137.f_25 = 1702151977;
									}
									else if (Local_137.f_25 == 579613221)
									{
										Local_137.f_4 = -2136370424;
										Local_137.f_25 = -2136370424;
									}
									else if (Local_137.f_25 == -1851302466)
									{
										Local_137.f_4 = -1858785397;
										Local_137.f_25 = -1858785397;
									}
									else if (Local_137.f_25 == -562306862)
									{
										Local_137.f_4 = 1946656957;
										Local_137.f_25 = 1946656957;
									}
									else if (Local_137.f_25 == -67503841)
									{
										Local_137.f_4 = -2105313098;
										Local_137.f_25 = -2105313098;
									}
									else if (Local_137.f_25 == 1960114521)
									{
										Local_137.f_4 = -185627827;
										Local_137.f_25 = -185627827;
									}
									else if (Local_137.f_25 == 1183160994)
									{
										Local_137.f_4 = -1498042471;
										Local_137.f_25 = -1498042471;
									}
									Local_138.f_14++;
									Local_132.f_233 = 1;
									Local_131[unk_0x460153A63B9477BC() /*8*/].f_2 = 0;
								}
							}
							else if (!Local_132.f_233)
							{
								Local_138.f_3 = (Local_138.f_3 + Local_131[unk_0x460153A63B9477BC() /*8*/].f_2);
								Local_137.f_6 = (Local_137.f_6 + Local_131[unk_0x460153A63B9477BC() /*8*/].f_2);
								Local_137.f_14 = (Local_137.f_14 + Local_131[unk_0x460153A63B9477BC() /*8*/].f_2);
								Local_137.f_15 = 1;
								func_189(Local_131[unk_0x460153A63B9477BC() /*8*/].f_2);
								if (Local_137.f_25 == -1052705919)
								{
									Local_137.f_4 = -546469405;
									Local_137.f_25 = -546469405;
								}
								else if (Local_137.f_25 == 579613221)
								{
									Local_137.f_4 = -1749032290;
									Local_137.f_25 = -1749032290;
								}
								else if (Local_137.f_25 == -1851302466)
								{
									Local_137.f_4 = 1067415172;
									Local_137.f_25 = 1067415172;
								}
								else if (Local_137.f_25 == -562306862)
								{
									Local_137.f_4 = 297125168;
									Local_137.f_25 = 297125168;
								}
								else if (Local_137.f_25 == -67503841)
								{
									Local_137.f_4 = 2030981611;
									Local_137.f_25 = 2030981611;
								}
								else if (Local_137.f_25 == 1960114521)
								{
									Local_137.f_4 = -684984318;
									Local_137.f_25 = -684984318;
								}
								else if (Local_137.f_25 == 1183160994)
								{
									Local_137.f_4 = 497946612;
									Local_137.f_25 = 497946612;
								}
								Local_132.f_233 = 1;
								Local_131[unk_0x460153A63B9477BC() /*8*/].f_2 = 0;
							}
						}
						else if (!Local_132.f_233)
						{
							func_189(Local_131[unk_0x460153A63B9477BC() /*8*/].f_2);
							if (Local_137.f_25 == -1052705919)
							{
								Local_137.f_4 = 1449908402;
								Local_137.f_25 = 1449908402;
							}
							else if (Local_137.f_25 == 579613221)
							{
								Local_137.f_4 = 1210238154;
								Local_137.f_25 = 1210238154;
							}
							else if (Local_137.f_25 == -1851302466)
							{
								Local_137.f_4 = 1540383360;
								Local_137.f_25 = 1540383360;
							}
							else if (Local_137.f_25 == -562306862)
							{
								Local_137.f_4 = -457084933;
								Local_137.f_25 = -457084933;
							}
							else if (Local_137.f_25 == -67503841)
							{
								Local_137.f_4 = -740134090;
								Local_137.f_25 = -740134090;
							}
							else if (Local_137.f_25 == 1960114521)
							{
								Local_137.f_4 = -1825077928;
								Local_137.f_25 = -1825077928;
							}
							else if (Local_137.f_25 == 1183160994)
							{
								Local_137.f_4 = 1676117351;
								Local_137.f_25 = 1676117351;
							}
							Local_138.f_14++;
							Local_132.f_233 = 1;
							Local_131[unk_0x460153A63B9477BC() /*8*/].f_2 = 0;
						}
					}
					else
					{
						Local_132.f_233 = 1;
					}
				}
			}
			break;
	}
}

void func_91(char* sParam0, int iParam1, int iParam2)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x6A826E35A3096ED0(iParam2);
	unk_0x1A169149B3D18FCB(0, 1, false, -1);
}

bool func_92(char* sParam0, int iParam1, int iParam2)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x6A826E35A3096ED0(iParam2);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_93(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	unk_0x1A169149B3D18FCB(0, 1, false, -1);
}

void func_94(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x1A169149B3D18FCB(0, 1, false, -1);
}

bool func_95(char* sParam0, int iParam1)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_96(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	unk_0x42710E9E08FA375A(iParam2);
	unk_0x42710E9E08FA375A(iParam3);
	unk_0x1A169149B3D18FCB(0, 1, false, -1);
}

bool func_97(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	unk_0x42710E9E08FA375A(iParam2);
	unk_0x42710E9E08FA375A(iParam3);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_98(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x42710E9E08FA375A(iParam2);
	unk_0x42710E9E08FA375A(iParam3);
	unk_0x1A169149B3D18FCB(0, 1, false, -1);
}

bool func_99(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x42710E9E08FA375A(iParam2);
	unk_0x42710E9E08FA375A(iParam3);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_100(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x6A826E35A3096ED0(iParam2);
	unk_0x42710E9E08FA375A(iParam3);
	unk_0x1A169149B3D18FCB(0, 1, false, -1);
}

bool func_101(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x6A826E35A3096ED0(iParam2);
	unk_0x42710E9E08FA375A(iParam3);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_102(char* sParam0, int iParam1, int iParam2)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	unk_0x42710E9E08FA375A(iParam2);
	unk_0x1A169149B3D18FCB(0, 1, false, -1);
}

bool func_103(char* sParam0, int iParam1, int iParam2)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	unk_0x42710E9E08FA375A(iParam2);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_104(char* sParam0, int iParam1, int iParam2)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x42710E9E08FA375A(iParam2);
	unk_0x1A169149B3D18FCB(0, 1, false, -1);
}

bool func_105(char* sParam0, int iParam1, int iParam2)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x42710E9E08FA375A(iParam2);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

bool func_106(int iParam0, var uParam1, int iParam2)
{
	return func_107(iParam0, 3, uParam1, iParam2, -1);
}

int func_107(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	
	if (iParam0 <= 0)
	{
	}
	else if (!func_149(iParam1))
	{
	}
	else
	{
		iVar0 = func_402();
		iVar1 = (Global_262145.f_26468 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_147();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_128(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_402() - Global_1696910);
			func_127(iVar4, 1);
			func_125();
			func_124();
			Global_1696910 = (Global_1696910 + iVar4);
			if (iParam1 == 0)
			{
				func_118(iVar4);
				Global_2462183 = 1;
			}
			else if (iParam1 == 3)
			{
				func_111(iVar4);
				if (iVar4 >= Global_262145.f_26476)
				{
					Global_2462182 = 1;
				}
				else if (iVar4 >= Global_262145.f_26475)
				{
					Global_2462183 = 1;
				}
			}
			Var5 = func_110(iParam1);
			Var5.f_1 = func_109(iParam1, iParam3, iParam4);
			if (func_108(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (unk_0x982EAC40778C4B0A(-1) + unk_0x043DDE27C7AA3445());
			Var5.f_6 = Global_1696910;
			unk_0xBE75FF31A3167DE9(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_109(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			
			case 1:
				iVar0 = 21;
				break;
			
			case 4:
				iVar0 = 22;
				break;
			
			case 5:
				iVar0 = 23;
				break;
			
			case 6:
				iVar0 = 24;
				break;
			
			case 7:
				iVar0 = 25;
				break;
			
			case 9:
				iVar0 = 26;
				break;
			
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
			
			case 11:
				iVar0 = 29;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
			}
	}
	return iVar0;
}

int func_110(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -2043662707;
			break;
		
		case 1:
			iVar0 = -1612659516;
			break;
		
		case 2:
			iVar0 = -1304782539;
			break;
		
		case 3:
			iVar0 = 1196301501;
			break;
		
		case 4:
			iVar0 = -1964607937;
			break;
		
		case 5:
			iVar0 = -2125268726;
			break;
		
		case 6:
			iVar0 = 1138851024;
			break;
		
		case 11:
			iVar0 = 1138851024;
			break;
		
		case 7:
			iVar0 = 1848798713;
			break;
		
		case 8:
			iVar0 = 1196301501;
			break;
		
		case 9:
			iVar0 = -1297103179;
			break;
		
		case 10:
			iVar0 = 1754365518;
			break;
	}
	return iVar0;
}

void func_111(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_117();
	iVar1 = unk_0x5A002C4821A13338();
	iVar2 = func_115();
	if (iVar0 == 0)
	{
		func_114();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26470)
	{
		func_113();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_26472)
	{
		func_112(joaat("MPPLY_CASINO_CHIPS_WON_GD"), Global_262145.f_26472);
		func_113();
		Global_2462183 = 1;
	}
	else
	{
		func_112(joaat("MPPLY_CASINO_CHIPS_WON_GD"), (iVar2 + iParam0));
	}
}

void func_112(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, 1);
	}
}

void func_113()
{
	func_114();
}

void func_114()
{
	func_112(joaat("MPPLY_CASINO_CHIPS_WONTIM"), unk_0x5A002C4821A13338());
}

int func_115()
{
	return func_116(joaat("MPPLY_CASINO_CHIPS_WON_GD"));
}

int func_116(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_117()
{
	return func_116(joaat("MPPLY_CASINO_CHIPS_WONTIM"));
}

void func_118(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_123();
	iVar1 = unk_0x5A002C4821A13338();
	iVar2 = func_122();
	if (iVar0 == 0)
	{
		func_121();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26469)
	{
		func_120();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_119()
	{
		func_112(joaat("MPPLY_CASINO_CHIPS_PUR_GD"), func_119());
		func_120();
	}
	else
	{
		func_112(joaat("MPPLY_CASINO_CHIPS_PUR_GD"), (iVar2 + iParam0));
	}
}

int func_119()
{
	if (func_325(unk_0x460153A63B9477BC()))
	{
		return Global_262145.f_26264;
	}
	return Global_262145.f_26263;
}

void func_120()
{
	func_121();
}

void func_121()
{
	func_112(joaat("MPPLY_CASINO_CHIPS_PURTIM"), unk_0x5A002C4821A13338());
}

int func_122()
{
	return func_116(joaat("MPPLY_CASINO_CHIPS_PUR_GD"));
}

int func_123()
{
	return func_116(joaat("MPPLY_CASINO_CHIPS_PURTIM"));
}

void func_124()
{
	if (unk_0xCE990E643CD9D0E5(Global_1696949, 6))
	{
		unk_0xBE20AB8238688965(&Global_1696949, 9);
		func_367(&Global_1696952, 0, 0);
	}
}

void func_125()
{
	if (func_126())
	{
		unk_0xBE20AB8238688965(&Global_1696949, 1);
	}
}

bool func_126()
{
	return (unk_0xCE990E643CD9D0E5(Global_1696949, 6) || unk_0xCE990E643CD9D0E5(Global_1696949, 5));
}

void func_127(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	unk_0xBE20AB8238688965(&Global_1696949, 6);
	Global_1696950 = iParam0;
	Global_1696951 = iParam1;
}

bool func_128(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_108(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_146())
	{
		if (*uParam0 == 0)
		{
			if (func_145() != -1)
			{
				return 0;
			}
			iVar3 = 657241867;
			iVar4 = func_110(iParam1);
			iVar5 = -22148635;
			if (func_149(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_141(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_141(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_136())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_135(func_145()))
			{
				if (func_134(func_145()) == 2)
				{
					unk_0xA6292C176D37A114(func_133(func_145()));
					if (func_149(iParam1))
					{
						unk_0xFD1477B29C5CAB48(iVar0, iParam2);
					}
					else
					{
						unk_0xA1ADC53367E34B7C(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_129(func_145());
			}
		}
	}
	else if (iVar0 > 0 || unk_0x6914A85D2E17013B(iVar0, false, true, 0, -1, 0))
	{
		if (func_149(iParam1))
		{
			unk_0xFD1477B29C5CAB48(iVar0, iParam2);
		}
		else
		{
			unk_0xA1ADC53367E34B7C(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

void func_129(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_146())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_132(iParam0))
		{
			if (!bVar0)
			{
				unk_0x2ABDF07188759AF4();
			}
		}
		else if (!bVar0)
		{
			unk_0x7365588A145923CE(Global_4264051[iParam0 /*85*/].f_66);
		}
		func_130(&(Global_4264051[iParam0 /*85*/]));
	}
}

void func_130(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_131(&(uParam0->f_14));
	func_131(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_131(var uParam0)
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
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_132(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_133(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_134(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_135(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_136()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_146())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_145();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!unk_0x5053392075AA583C(func_19()) || unk_0x701B05C16EF4F48E())
		{
			if (func_140(Global_4264051[iVar2 /*85*/].f_66.f_6, Global_4264051[iVar2 /*85*/].f_66.f_4, Global_4264051[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4265553 = 1;
			}
			return 0;
		}
		if (Global_2463410)
		{
			if (Global_4264051[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4264051[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_133(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || unk_0x9F5556ED9A739FBC(iVar3))
		{
			Global_4264051[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4264051[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4264051[iVar2 /*85*/].f_66.f_14 = unk_0xD3137A576BE9EC5C();
			if (bVar0)
			{
				Global_4264051[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4264051[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4264051[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_137(Global_4264051[iVar2 /*85*/], iVar2);
			}
			Global_4265538 = 1;
			return 1;
		}
	}
	return 0;
}

void func_137(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 1191422458;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_139(Var0.f_1);
	if ((Global_262145.f_23581 && !Global_262145.f_23582) && !Global_262145.f_23583)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_138();
		unk_0xB802750B43D4047C(1, &Var0, 36, iVar1);
	}
}

void func_138()
{
	unk_0xBE9B3870B1B370E3("AM_ARENA_SHP");
}

var func_139(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xBE20AB8238688965(&uVar0, iParam0);
	}
	return uVar0;
}

int func_140(int iParam0, int iParam1, int iParam2)
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
			case -842062976:
			case 14658715:
			case -604793592:
			case -823426392:
			case -1401862980:
			case -173354274:
			case 409533976:
			case -1472522337:
			case 542574408:
			case -1261799063:
			case 784631574:
			case -2027479156:
			case -837690641:
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_141(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_146())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x5053392075AA583C(func_19()) || unk_0x701B05C16EF4F48E())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463410)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_145();
	if (iVar1 == -1)
	{
		if (!func_143(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_142(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4264051[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4264051[iVar1 /*85*/].f_66.f_15 = Var2;
		Global_4264051[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || unk_0x9ED721597A55C9F9(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_142(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_143(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_146())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!unk_0x5053392075AA583C(func_19()) || unk_0x701B05C16EF4F48E())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463410)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4264051[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4264051[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0x4BEB563BB33B9937())
		{
			unk_0x2ABDF07188759AF4();
		}
	}
	if (bVar0 || unk_0x2B083CB3B730204F(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_144(uVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_144(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4264051[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_146())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4264051[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4264051[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4264051[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4264051[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4264051[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4264051[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4264051[iVar0 /*85*/].f_66 = uParam0;
			Global_4264051[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4264051[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4264051[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4264051[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4264051[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4264051[iVar0 /*85*/].f_66.f_14 = unk_0xD3137A576BE9EC5C();
			Global_4264051[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4265538 = 0;
			if (bParam6)
			{
				Global_4264051[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_137(Global_4264051[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_145()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_133(iVar0) != 2147483647)
		{
			if (func_132(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_146()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		return unk_0xC5AA3415F982DC6C();
	}
	return 0;
}

int func_147()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_119() - func_122());
	iVar1 = (Global_262145.f_26468 - func_402());
	iVar2 = func_148();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_148()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_119();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (unk_0x8686B1F0487AE4B9())
	{
		if (unk_0x6914A85D2E17013B(iVar0, false, true, 0, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (unk_0x043DDE27C7AA3445() + unk_0x982EAC40778C4B0A(-1));
		}
	}
	else if (unk_0x6914A85D2E17013B(iVar0, false, true, 0, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = unk_0x5C556DABD4C01559();
	}
	return iVar1;
}

int func_149(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

char* func_150()
{
	if (func_151())
	{
		switch (unk_0x344C570D6F8700DF(0, 5))
		{
			case 0:
				return "female_reaction_terrible_var_01";
			
			case 1:
				return "female_reaction_terrible_var_02";
			
			case 2:
				return "female_reaction_terrible_var_03";
			
			case 3:
				return "female_reaction_terrible_var_04";
			
			case 4:
				return "female_reaction_terrible_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0x344C570D6F8700DF(0, 4))
		{
			case 0:
				return "reaction_terrible_var_01";
			
			case 1:
				return "reaction_terrible_var_02";
			
			case 2:
				return "reaction_terrible_var_03";
			
			case 3:
				return "reaction_terrible_var_04";
			}
		
		default:
	}
	return "";
}

bool func_151()
{
	return func_51(unk_0x460153A63B9477BC());
}

char* func_152()
{
	if (func_151())
	{
		switch (unk_0x344C570D6F8700DF(0, 5))
		{
			case 0:
				return "female_reaction_great_var_01";
			
			case 1:
				return "female_reaction_great_var_02";
			
			case 2:
				return "female_reaction_great_var_03";
			
			case 3:
				return "female_reaction_great_var_04";
			
			case 4:
				return "female_reaction_great_var_05";
			
			default:
		}
	}
	else
	{
		switch (unk_0x344C570D6F8700DF(0, 4))
		{
			case 0:
				return "reaction_great_var_01";
			
			case 1:
				return "reaction_great_var_02";
			
			case 2:
				return "reaction_great_var_03";
			
			case 3:
				return "reaction_great_var_04";
			}
		
		default:
	}
	return "";
}

char* func_153(int iParam0)
{
	if (func_151())
	{
		if ((func_425(unk_0x460153A63B9477BC()) || func_382(Local_132.f_247) == 2) || func_382(Local_132.f_247) == 3)
		{
			if (iParam0 > 10000 && Local_137.f_4 != 1960114521)
			{
				switch (unk_0x344C570D6F8700DF(0, 4))
				{
					case 0:
						return "female_reaction_good_var_01";
					
					case 1:
						return "female_reaction_good_var_02";
					
					case 2:
						return "female_reaction_good_var_03";
					
					case 3:
						return "female_reaction_good_var_04";
					
					default:
				}
			}
			else if (iParam0 > -10000 || Local_137.f_4 == 1960114521)
			{
				switch (unk_0x344C570D6F8700DF(0, 7))
				{
					case 0:
						return "female_reaction_impartial_var_01";
					
					case 1:
						return "female_reaction_impartial_var_02";
					
					case 2:
						return "female_reaction_impartial_var_03";
					
					case 3:
						return "female_reaction_impartial_var_04";
					
					case 4:
						return "female_reaction_impartial_var_05";
					
					case 5:
						return "female_reaction_impartial_var_06";
					
					case 6:
						return "female_reaction_impartial_var_07";
					
					default:
				}
			}
			else
			{
				switch (unk_0x344C570D6F8700DF(0, 4))
				{
					case 0:
						return "female_reaction_bad_var_01";
					
					case 1:
						return "female_reaction_bad_var_02";
					
					case 2:
						return "female_reaction_bad_var_03";
					
					case 3:
						return "female_reaction_bad_var_04";
					}
				
				default:
			}
		}
		else if (iParam0 > 1000 && Local_137.f_4 != 1960114521)
		{
			switch (unk_0x344C570D6F8700DF(0, 4))
			{
				case 0:
					return "female_reaction_good_var_01";
				
				case 1:
					return "female_reaction_good_var_02";
				
				case 2:
					return "female_reaction_good_var_03";
				
				case 3:
					return "female_reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -1000 || Local_137.f_4 == 1960114521)
		{
			switch (unk_0x344C570D6F8700DF(0, 7))
			{
				case 0:
					return "female_reaction_impartial_var_01";
				
				case 1:
					return "female_reaction_impartial_var_02";
				
				case 2:
					return "female_reaction_impartial_var_03";
				
				case 3:
					return "female_reaction_impartial_var_04";
				
				case 4:
					return "female_reaction_impartial_var_05";
				
				case 5:
					return "female_reaction_impartial_var_06";
				
				case 6:
					return "female_reaction_impartial_var_07";
				
				default:
			}
		}
		else
		{
			switch (unk_0x344C570D6F8700DF(0, 4))
			{
				case 0:
					return "female_reaction_bad_var_01";
				
				case 1:
					return "female_reaction_bad_var_02";
				
				case 2:
					return "female_reaction_bad_var_03";
				
				case 3:
					return "female_reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if ((func_425(unk_0x460153A63B9477BC()) || func_382(Local_132.f_247) == 2) || func_382(Local_132.f_247) == 3)
	{
		if (iParam0 > 10000 && Local_137.f_4 != 1960114521)
		{
			switch (unk_0x344C570D6F8700DF(0, 4))
			{
				case 0:
					return "reaction_good_var_01";
				
				case 1:
					return "reaction_good_var_02";
				
				case 2:
					return "reaction_good_var_03";
				
				case 3:
					return "reaction_good_var_04";
				
				default:
			}
		}
		else if (iParam0 > -10000 || Local_137.f_4 == 1960114521)
		{
			switch (unk_0x344C570D6F8700DF(0, 8))
			{
				case 0:
					return "reaction_impartial_var_01";
				
				case 1:
					return "reaction_impartial_var_02";
				
				case 2:
					return "reaction_impartial_var_03";
				
				case 3:
					return "reaction_impartial_var_04";
				
				case 4:
					return "reaction_impartial_var_05";
				
				case 5:
					return "reaction_impartial_var_06";
				
				case 6:
					return "reaction_impartial_var_07";
				
				case 7:
					return "reaction_impartial_var_08";
				
				default:
			}
		}
		else
		{
			switch (unk_0x344C570D6F8700DF(0, 4))
			{
				case 0:
					return "reaction_bad_var_01";
				
				case 1:
					return "reaction_bad_var_02";
				
				case 2:
					return "reaction_bad_var_03";
				
				case 3:
					return "reaction_bad_var_04";
				}
			
			default:
		}
	}
	else if (iParam0 > 1000 && Local_137.f_4 != 1960114521)
	{
		switch (unk_0x344C570D6F8700DF(0, 4))
		{
			case 0:
				return "reaction_good_var_01";
			
			case 1:
				return "reaction_good_var_02";
			
			case 2:
				return "reaction_good_var_03";
			
			case 3:
				return "reaction_good_var_04";
			
			default:
		}
	}
	else if (iParam0 > -1000 || Local_137.f_4 == 1960114521)
	{
		switch (unk_0x344C570D6F8700DF(0, 8))
		{
			case 0:
				return "reaction_impartial_var_01";
			
			case 1:
				return "reaction_impartial_var_02";
			
			case 2:
				return "reaction_impartial_var_03";
			
			case 3:
				return "reaction_impartial_var_04";
			
			case 4:
				return "reaction_impartial_var_05";
			
			case 5:
				return "reaction_impartial_var_06";
			
			case 6:
				return "reaction_impartial_var_07";
			
			case 7:
				return "reaction_impartial_var_08";
			
			default:
		}
	}
	else
	{
		switch (unk_0x344C570D6F8700DF(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

char* func_154()
{
	if (func_151())
	{
		switch (unk_0x344C570D6F8700DF(0, 4))
		{
			case 0:
				return "female_reaction_bad_var_01";
			
			case 1:
				return "female_reaction_bad_var_02";
			
			case 2:
				return "female_reaction_bad_var_03";
			
			case 3:
				return "female_reaction_bad_var_04";
			
			default:
		}
	}
	else
	{
		switch (unk_0x344C570D6F8700DF(0, 4))
		{
			case 0:
				return "reaction_bad_var_01";
			
			case 1:
				return "reaction_bad_var_02";
			
			case 2:
				return "reaction_bad_var_03";
			
			case 3:
				return "reaction_bad_var_04";
			}
		
		default:
	}
	return "";
}

void func_155(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	if (func_158(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_157(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_156(3, iVar0);
		Global_1378744.f_2775[iVar0] = uParam0;
		StringCopy(&(Global_1378744.f_2775.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378744.f_2775.f_183[iVar0] = iParam3;
		Global_1378744.f_2775.f_172[iVar0] = iParam2;
		Global_1378744.f_2775.f_205[iVar0] = iParam4;
		Global_1378744.f_2775.f_216[iVar0] = iParam5;
		StringCopy(&(Global_1378744.f_2775.f_259[iVar0 /*16*/]), sParam6, 64);
		Global_1378744.f_2775.f_420[iVar0] = iParam7;
		Global_1378744.f_2775.f_453[iVar0] = iParam8;
		Global_1378744.f_2775.f_431[iVar0] = iParam9;
		Global_1378744.f_2775.f_442[iVar0] = iParam10;
		Global_1378744.f_2775.f_464[iVar0] = iParam11;
		Global_1378744.f_2775.f_475[iVar0] = iParam12;
		Global_1378744.f_2775.f_486[iVar0] = iParam13;
		Global_1378744.f_2775.f_497[iVar0] = iParam14;
	}
}

void func_156(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_1378744.f_6304[iParam0]), iParam1);
}

bool func_157(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1378744.f_6304[iParam0], iParam1);
}

int func_158(char* sParam0)
{
	if (unk_0x211E6DB3335430B4(sParam0))
	{
		return 1;
	}
	else if (unk_0xF005CCA4263DF67F(sParam0, "") || unk_0xF005CCA4263DF67F(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

void func_159(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_157(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_156(7, iVar0);
		Global_1378744.f_4573[iVar0] = iParam0;
		StringCopy(&(Global_1378744.f_4573.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378744.f_4573.f_172[iVar0] = iParam2;
		Global_1378744.f_4573.f_216[iVar0] = iParam3;
		Global_1378744.f_4573.f_183[iVar0] = iParam4;
		Global_1378744.f_4573.f_194[iVar0] = iParam5;
		Global_1378744.f_4573.f_249[iVar0] = iParam6;
		Global_1378744.f_4573.f_260[iVar0] = iParam7;
		Global_1378744.f_4573.f_205[iVar0] = iParam8;
		Global_1378744.f_4573.f_314[iVar0] = iParam9;
		Global_1378744.f_4573.f_325[iVar0] = iParam10;
		Global_1378744.f_4573.f_357[iVar0] = iParam11;
		Global_1378744.f_4573.f_238[iVar0] = iParam12;
		Global_1378744.f_4573.f_271[iVar0] = iParam13;
		Global_1378744.f_4573.f_368[iVar0] = iParam14;
		Global_1378744.f_4573.f_379[iVar0] = iParam15;
		Global_1378744.f_4573.f_390[iVar0] = iParam16;
		Global_1378744.f_4573.f_227[iVar0] = iParam17;
	}
}

int func_160(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (func_146() && *uParam1 == 1)
	{
		bParam3 = false;
	}
	if (!bParam3 || func_162(iParam0))
	{
		return func_161(iParam0, 2, uParam1, iParam2, -1, -1);
	}
	else
	{
		*uParam1 = 3;
	}
	return 1;
}

int func_161(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (iParam0 <= 0)
	{
	}
	else if (func_149(iParam1))
	{
	}
	else
	{
		iVar0 = func_402();
		iVar1 = (iVar0 - iParam0);
		if (iVar1 < 0 && (!func_146() || *uParam2 != 1))
		{
			iVar1 = iVar0;
			iParam0 = iVar0;
		}
		if (func_128(uParam2, iParam1, iParam0))
		{
			iVar2 = (Global_1696910 - func_402());
			if (iParam1 == 1)
			{
				Global_2462182 = 1;
			}
			else if (iVar2 >= Global_262145.f_26477)
			{
				Global_2462183 = 1;
			}
			func_127(iVar2, 0);
			func_125();
			func_124();
			Global_1696910 = (Global_1696910 - iVar2);
			Var3 = func_110(iParam1);
			Var3.f_1 = func_109(iParam1, iParam3, iParam4);
			if (func_108(iParam1))
			{
				Var3.f_2 = iVar2;
			}
			else
			{
				Var3.f_2 = 0;
			}
			Var3.f_3 = iVar2;
			Var3.f_4 = iParam1;
			Var3.f_5 = (unk_0x982EAC40778C4B0A(-1) + unk_0x043DDE27C7AA3445());
			Var3.f_6 = Global_1696910;
			Var3.f_7 = iParam5;
			unk_0xBE75FF31A3167DE9(&Var3);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_162(int iParam0)
{
	int iVar0;
	
	if (func_330())
	{
		return 0;
	}
	iVar0 = func_402();
	if (iVar0 < iParam0)
	{
		return 0;
	}
	return 1;
}

void func_163(char* sParam0)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 1, false, -1);
}

char* func_164(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		if (bParam1)
		{
			switch (iParam0)
			{
				case 5000:
				case 10000:
				case 15000:
				case 20000:
				case 25000:
				case 30000:
				case 35000:
				case 40000:
				case 45000:
				case 50000:
					return "place_bet_large_split";
				}
			
			default:
		}
		return "place_bet_small_split";
	}
	if (((Local_132.f_247 == 1 || Local_132.f_247 == 5) || Local_132.f_247 == 9) || Local_132.f_247 == 13)
	{
		if (bParam2)
		{
			if (bParam1)
			{
				switch (iParam0)
				{
					case 5000:
					case 10000:
					case 15000:
					case 20000:
					case 25000:
					case 30000:
					case 35000:
					case 40000:
					case 45000:
					case 50000:
						return "place_bet_double_down_player_02";
					
					default:
				}
			}
			else
			{
				return "place_bet_small_player_02";
			}
		}
		if (!bParam1)
		{
			return "place_bet_small_player_02";
		}
		else
		{
			switch (iParam0)
			{
				case 5000:
				case 10000:
				case 15000:
				case 20000:
				case 25000:
				case 30000:
				case 35000:
				case 40000:
				case 45000:
				case 50000:
					return "place_bet_large_player_02";
				
				default:
			}
			return "place_bet_small_player_02";
		}
	}
	else
	{
		if (bParam2)
		{
			if (bParam1)
			{
				switch (iParam0)
				{
					case 5000:
					case 10000:
					case 15000:
					case 20000:
					case 25000:
					case 30000:
					case 35000:
					case 40000:
					case 45000:
					case 50000:
						return "place_bet_double_down";
					
					default:
				}
			}
			else
			{
				switch (unk_0x344C570D6F8700DF(0, 4))
				{
					case 0:
						return "place_bet_small";
					
					case 1:
						return "place_bet_small_alt1";
					
					case 2:
						return "place_bet_small_alt2";
					
					case 3:
						return "place_bet_small_alt3";
					}
				}
			
			default:
		}
		if (!bParam1)
		{
			switch (unk_0x344C570D6F8700DF(0, 4))
			{
				case 0:
					return "place_bet_small";
				
				case 1:
					return "place_bet_small_alt1";
				
				case 2:
					return "place_bet_small_alt2";
				
				case 3:
					return "place_bet_small_alt3";
				
				default:
			}
		}
		else
		{
			switch (iParam0)
			{
				case 5000:
				case 10000:
				case 15000:
				case 20000:
				case 25000:
				case 30000:
				case 35000:
				case 40000:
				case 45000:
				case 50000:
					return "place_bet_large";
				
				default:
			}
			switch (unk_0x344C570D6F8700DF(0, 4))
			{
				case 0:
					return "place_bet_small";
				
				case 1:
					return "place_bet_small_alt1";
				
				case 2:
					return "place_bet_small_alt2";
				
				case 3:
					return "place_bet_small_alt3";
				}
			}
		
		default:
	}
	return "";
}

void func_165(int iParam0)
{
	Local_132 = iParam0;
}

void func_166()
{
	char* sVar0;
	
	if (unk_0xCE990E643CD9D0E5(Local_132.f_250, 2))
	{
		unk_0xD2459066EA58CE43(&(Local_132.f_250), 2);
	}
	unk_0x779660A9E5364C4D(2, 210, 1);
	unk_0x26A60F42A1132477(2, 210);
	if (!unk_0xCE990E643CD9D0E5(Local_132.f_250, 0))
	{
		if (unk_0x275A6259432E6B3C(2, 210))
		{
			unk_0xC4CC25B68A91D144(-1, "DLC_VW_RULES", "dlc_vw_table_games_frontend_sounds", 1);
			unk_0xBE20AB8238688965(&(Local_132.f_250), 0);
		}
	}
	else
	{
		sVar0 = "CasinoUI_Cards_Blackjack";
		if ((func_382(Local_132.f_247) == 2 || func_382(Local_132.f_247) == 3) || func_425(unk_0x460153A63B9477BC()))
		{
			sVar0 = "CasinoUI_Cards_Blackjack_High";
		}
		unk_0x494D5FF88119CDC0(sVar0, false);
		if (func_293(0, -1, 0) && unk_0xC7F5A2E99D75A65C(sVar0))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_132.f_250, 1))
			{
				func_292(0, 0);
				func_290(1, sVar0, sVar0);
				func_289("BJACK_RULES");
				func_170(1, iLocal_142, 9);
				func_169(1, 1, 1, 1, 1);
				func_288(-1, 1, 1);
				func_287(func_168(iLocal_142), 0, 0);
				func_286(func_167(iLocal_142));
				unk_0xBE20AB8238688965(&(Local_132.f_250), 1);
			}
			func_247(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		}
		if (unk_0x275A6259432E6B3C(2, 202))
		{
			unk_0xC4CC25B68A91D144(-1, "DLC_VW_CONTINUE", "dlc_vw_table_games_frontend_sounds", 1);
			func_244(1, -1);
			unk_0x2DDA2C702A92866E(sVar0);
			iLocal_142 = 1;
			Local_132.f_250 = 0;
			unk_0xBE20AB8238688965(&(Local_132.f_250), 2);
		}
		else if (unk_0x275A6259432E6B3C(2, 190))
		{
			iLocal_142++;
			if (iLocal_142 > 9)
			{
				iLocal_142 = 1;
			}
			unk_0xD2459066EA58CE43(&(Local_132.f_250), 1);
		}
		else if (unk_0x275A6259432E6B3C(2, 189))
		{
			iLocal_142 = (iLocal_142 - 1);
			if (iLocal_142 < 1)
			{
				iLocal_142 = 9;
			}
			unk_0xD2459066EA58CE43(&(Local_132.f_250), 1);
		}
	}
}

char* func_167(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BJACK_RULE_1";
		
		case 2:
			return "BJACK_RULE_2";
		
		case 3:
			return "BJACK_RULE_3";
		
		case 4:
			return "BJACK_RULE_4";
		
		case 5:
			return "BJACK_RULE_5";
		
		case 6:
			return "BJACK_RULE_6";
		
		case 7:
			return "BJACK_RULE_7";
		
		case 8:
			return "BJACK_RULE_8";
		
		case 9:
			if ((func_382(Local_132.f_247) == 2 || func_382(Local_132.f_247) == 3) || func_425(unk_0x460153A63B9477BC()))
			{
				return "BJACK_RULE_9b";
			}
			else
			{
				return "BJACK_RULE_9a";
			}
			break;
	}
	return "";
}

char* func_168(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "BJACK_RULE_1T";
		
		case 2:
			return "BJACK_RULE_2T";
		
		case 3:
			return "BJACK_RULE_3T";
		
		case 4:
			return "BJACK_RULE_4T";
		
		case 5:
			return "BJACK_RULE_5T";
		
		case 6:
			return "BJACK_RULE_6T";
		
		case 7:
			return "BJACK_RULE_7T";
		
		case 8:
			return "BJACK_RULE_8T";
		
		case 9:
			if ((func_382(Local_132.f_247) == 2 || func_382(Local_132.f_247) == 3) || func_425(unk_0x460153A63B9477BC()))
			{
				return "BJACK_RULE_9Tb";
			}
			else
			{
				return "BJACK_RULE_9Ta";
			}
			break;
	}
	return "";
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22550.f_5075[0] = iParam0;
	Global_22550.f_5075[1] = iParam1;
	Global_22550.f_5075[2] = iParam2;
	Global_22550.f_5075[3] = iParam3;
	Global_22550.f_5075[4] = iParam4;
}

void func_170(int iParam0, int iParam1, int iParam2)
{
	Global_22550.f_5735 = iParam0;
	Global_22550.f_5736 = iParam1;
	Global_22550.f_5737 = iParam2;
}

void func_171(int iParam0)
{
	Global_1378744.f_1121 = iParam0;
}

void func_172(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || unk_0x628AF533B14EF310(2))
	{
		*uParam2 = 0;
		if (unk_0x95EF219D38B20CFF(*uParam0))
		{
			if (unk_0xF8EDFF98A9C94C74())
			{
				unk_0x830F007E19C63E14(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0xF1B28F753235CE2A(false);
				unk_0xE1FDD153F5858534();
			}
			unk_0x830F007E19C63E14(*uParam0, "CLEAR_ALL");
			unk_0xE1FDD153F5858534();
		}
		func_178(uParam2);
	}
	if (Global_1315735 < 2)
	{
		func_177(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x95EF219D38B20CFF(*uParam0))
		{
			*uParam0 = unk_0x5DEA4192B46CB99B("instructional_buttons");
		}
		if (unk_0x95EF219D38B20CFF(*uParam0))
		{
			unk_0x903663B04BCCB2FB(*uParam0, "CLEAR_ALL");
			if (unk_0xF8EDFF98A9C94C74())
			{
				unk_0x830F007E19C63E14(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0xF1B28F753235CE2A(true);
				unk_0xE1FDD153F5858534();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_693)
			{
				if (unk_0xCE990E643CD9D0E5(uParam2->f_689, iVar0))
				{
					unk_0x830F007E19C63E14(*uParam0, "SET_DATA_SLOT");
					unk_0xAD291B8F75D737AD(iVar0);
					if (!unk_0xCE990E643CD9D0E5(uParam2->f_690, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[iVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[iVar0 /*57*/].f_56;
						func_176(unk_0xED026A379B794F61(iVar1, iVar2, true));
						if (iVar3 < 361)
						{
							func_176(unk_0xED026A379B794F61(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[iVar0 /*57*/].f_55;
						func_176(unk_0x32F8D6499042A233(iVar4, iVar5, true));
					}
					if (unk_0xCE990E643CD9D0E5(uParam2->f_686, iVar0))
					{
						unk_0xB23270F3D5E62FDE(&(uParam2->f_1[iVar0 /*57*/].f_32));
						if (uParam2->f_694 == iVar0)
						{
							unk_0x7899A951E85F4B28(uParam2->f_1[iVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x42710E9E08FA375A(uParam2->f_1[iVar0 /*57*/].f_36);
							if (unk_0xCE990E643CD9D0E5(uParam2->f_687, iVar0))
							{
								unk_0x42710E9E08FA375A(uParam2->f_1[iVar0 /*57*/].f_37);
							}
						}
						unk_0x2042E9CA4306F725();
					}
					else if (unk_0xCE990E643CD9D0E5(uParam2->f_688, iVar0))
					{
						unk_0xB23270F3D5E62FDE(&(uParam2->f_1[iVar0 /*57*/].f_32));
						unk_0x9EFD301E3BE8324E(&(uParam2->f_1[iVar0 /*57*/].f_38));
						unk_0x2042E9CA4306F725();
					}
					else
					{
						func_175(&(uParam2->f_1[iVar0 /*57*/].f_32));
					}
					if (unk_0xF8EDFF98A9C94C74())
					{
						if (unk_0xCE990E643CD9D0E5(uParam2->f_691, iVar0))
						{
							unk_0xF1B28F753235CE2A(true);
							unk_0xAD291B8F75D737AD(uParam2->f_1[iVar0 /*57*/].f_55);
						}
						else
						{
							unk_0xF1B28F753235CE2A(false);
							unk_0xAD291B8F75D737AD(361);
						}
					}
					unk_0xE1FDD153F5858534();
				}
				else
				{
					unk_0x830F007E19C63E14(*uParam0, "SET_DATA_SLOT");
					unk_0xAD291B8F75D737AD(iVar0);
					func_176(&(uParam2->f_1[iVar0 /*57*/]));
					if (!unk_0x7BCC91F3C1CF24E8(&(uParam2->f_1[iVar0 /*57*/].f_16)))
					{
						func_176(&(uParam2->f_1[iVar0 /*57*/].f_16));
					}
					if (unk_0xCE990E643CD9D0E5(uParam2->f_686, iVar0))
					{
						unk_0xB23270F3D5E62FDE(&(uParam2->f_1[iVar0 /*57*/].f_32));
						if (uParam2->f_694 == iVar0)
						{
							unk_0x7899A951E85F4B28(uParam2->f_1[iVar0 /*57*/].f_36, 70);
						}
						else
						{
							unk_0x42710E9E08FA375A(uParam2->f_1[iVar0 /*57*/].f_36);
							if (unk_0xCE990E643CD9D0E5(uParam2->f_687, iVar0))
							{
								unk_0x42710E9E08FA375A(uParam2->f_1[iVar0 /*57*/].f_37);
							}
						}
						unk_0x2042E9CA4306F725();
					}
					else if (unk_0xCE990E643CD9D0E5(uParam2->f_688, iVar0))
					{
						unk_0xB23270F3D5E62FDE(&(uParam2->f_1[iVar0 /*57*/].f_32));
						unk_0x9EFD301E3BE8324E(&(uParam2->f_1[iVar0 /*57*/].f_38));
						unk_0x2042E9CA4306F725();
					}
					else
					{
						func_175(&(uParam2->f_1[iVar0 /*57*/].f_32));
					}
					if (unk_0xF8EDFF98A9C94C74())
					{
						unk_0xF1B28F753235CE2A(false);
						unk_0xAD291B8F75D737AD(361);
					}
					unk_0xE1FDD153F5858534();
				}
				iVar0++;
			}
			unk_0x830F007E19C63E14(*uParam0, "SET_MAX_WIDTH");
			unk_0x49B9B8101B158AEE(uParam2->f_699);
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			unk_0xAD291B8F75D737AD(0);
			unk_0xE1FDD153F5858534();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_174(*uParam0, uParam1);
	}
	func_173();
}

void func_173()
{
	unk_0x4CB4237D8858ADA6(7);
	unk_0x4CB4237D8858ADA6(6);
	unk_0x4CB4237D8858ADA6(8);
	unk_0x4CB4237D8858ADA6(9);
}

void func_174(int iParam0, var uParam1)
{
	unk_0x37FC7E88C7659D33(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_175(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

void func_176(char* sParam0)
{
	unk_0x54AED56A452DCB4F(sParam0);
}

void func_177(int iParam0)
{
	Global_1315735 = iParam0;
}

void func_178(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_179(var uParam0)
{
	return uParam0->f_692;
}

void func_180(var uParam0, float fParam1)
{
	uParam0->f_699 = fParam1;
}

struct<9> func_181()
{
	struct<9> Var0;
	
	Var0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_182(int iParam0, int iParam1, char* sParam2, var uParam3)
{
	int iVar0;
	
	if (uParam3->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam3->f_693;
	StringCopy(&(uParam3->f_1[iVar0 /*57*/].f_32), sParam2, 16);
	unk_0xBE20AB8238688965(&(uParam3->f_689), iVar0);
	uParam3->f_1[iVar0 /*57*/].f_54 = iParam0;
	uParam3->f_1[iVar0 /*57*/].f_55 = iParam1;
	unk_0xBE20AB8238688965(&(uParam3->f_690), iVar0);
	uParam3->f_693++;
}

void func_183(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

void func_184(var uParam0)
{
	func_185(uParam0);
	uParam0->f_692 = 1;
}

void func_185(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 361;
		uParam0->f_1[iVar0 /*57*/].f_56 = 361;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
}

var func_186(bool bParam0)
{
	if (func_151())
	{
		if (!bParam0)
		{
			switch (unk_0x344C570D6F8700DF(0, 8))
			{
				case 0:
					Local_132.f_1582 = "female_idle_cardgames_var_01";
					break;
				
				case 1:
					Local_132.f_1582 = "female_idle_cardgames_var_02";
					break;
				
				case 2:
					Local_132.f_1582 = "female_idle_cardgames_var_03";
					break;
				
				case 3:
					Local_132.f_1582 = "female_idle_cardgames_var_04";
					break;
				
				case 4:
					Local_132.f_1582 = "female_idle_cardgames_var_05";
					break;
				
				case 5:
					Local_132.f_1582 = "female_idle_cardgames_var_06";
					break;
				
				case 6:
					Local_132.f_1582 = "female_idle_cardgames_var_07";
					break;
				
				case 7:
					Local_132.f_1582 = "female_idle_cardgames_var_08";
					break;
				}
		}
	}
	else if (!bParam0)
	{
		switch (unk_0x344C570D6F8700DF(0, 13))
		{
			case 0:
				Local_132.f_1582 = "idle_cardgames_var_01";
				break;
			
			case 1:
				Local_132.f_1582 = "idle_cardgames_var_02";
				break;
			
			case 2:
				Local_132.f_1582 = "idle_cardgames_var_03";
				break;
			
			case 3:
				Local_132.f_1582 = "idle_cardgames_var_04";
				break;
			
			case 4:
				Local_132.f_1582 = "idle_cardgames_var_05";
				break;
			
			case 5:
				Local_132.f_1582 = "idle_cardgames_var_06";
				break;
			
			case 6:
				Local_132.f_1582 = "idle_cardgames_var_07";
				break;
			
			case 7:
				Local_132.f_1582 = "idle_cardgames_var_08";
				break;
			
			case 8:
				Local_132.f_1582 = "idle_cardgames_var_09";
				break;
			
			case 9:
				Local_132.f_1582 = "idle_cardgames_var_10";
				break;
			
			case 10:
				Local_132.f_1582 = "idle_cardgames_var_11";
				break;
			
			case 11:
				Local_132.f_1582 = "idle_cardgames_var_12";
				break;
			
			case 12:
				Local_132.f_1582 = "idle_cardgames_var_13";
				break;
			}
	}
	return Local_132.f_1582;
}

int func_187()
{
	if (func_188() == 0)
	{
		return 1;
	}
	return 0;
}

int func_188()
{
	return Global_1312485.f_18;
}

void func_189(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_117();
	iVar1 = unk_0x5A002C4821A13338();
	iVar2 = func_115();
	if (iVar0 == 0)
	{
		func_114();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26470)
	{
		func_113();
		iVar2 = 0;
	}
	if ((iVar2 - iParam0) >= Global_262145.f_26471)
	{
		func_112(joaat("MPPLY_CASINO_CHIPS_WON_GD"), Global_262145.f_26471);
		func_113();
		Global_2462183 = 1;
	}
	else
	{
		func_112(joaat("MPPLY_CASINO_CHIPS_WON_GD"), (iVar2 - iParam0));
	}
}

int func_190(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x25DDB354A40FFCDB() && !bParam1)
	{
		if (!bParam2)
		{
			return unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0);
		}
		else
		{
			return unk_0x624736CA66E14161(unk_0x29B9AF1CB5B8175D(), *uParam0);
		}
	}
	return unk_0x624736CA66E14161(unk_0x578C4EF320340AF7(), *uParam0);
}

int func_191()
{
	if ((Local_132.f_232 && Local_132.f_233) && (!Local_132.f_235 && Local_137.f_14 > 0))
	{
		return 1;
	}
	return 0;
}

int func_192()
{
	if (unk_0xC739CCA778931489() != func_193())
	{
		return unk_0xDBFD8BF43C56A525(unk_0x9019589211A13B02(unk_0xC739CCA778931489()));
	}
	return 0;
}

int func_193()
{
	return -1;
}

void func_194()
{
	float fVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	struct<3> Var10;
	struct<3> Var11;
	int iVar12;
	
	if (!unk_0x22D6FB6153F774D3(2, 207))
	{
		if (bLocal_152)
		{
			func_297(unk_0x460153A63B9477BC(), 0, 256, 0);
		}
		bLocal_152 = false;
	}
	if (!unk_0x22D6FB6153F774D3(2, 208))
	{
		if (bLocal_151)
		{
			func_297(unk_0x460153A63B9477BC(), 0, 256, 0);
		}
		bLocal_151 = false;
	}
	if ((((Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 >= 0 && !unk_0xDFAB5E5CBE16E8B1()) && !func_334()) && !unk_0x06EBE4F22EC30D45()) && (Local_122.f_1515[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4] < 9 || !unk_0xCE990E643CD9D0E5(Local_122.f_1555[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4], 13)))
	{
		if (Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 > 0)
		{
			if ((((unk_0x22D6FB6153F774D3(2, 207) && !unk_0x22D6FB6153F774D3(2, 208)) && !bLocal_151) && !func_66(&uLocal_153)) && !unk_0x40397A9A17EEC1C5(Local_132.f_242))
			{
				if (!bLocal_152)
				{
					if (unk_0xF7B3A1430308F92B(0) == 4)
					{
					}
					func_297(unk_0x460153A63B9477BC(), 0, 0, 0);
					bLocal_152 = true;
				}
			}
		}
		else
		{
			if (bLocal_152)
			{
				func_297(unk_0x460153A63B9477BC(), 0, 256, 0);
			}
			bLocal_152 = false;
		}
		if (Local_122.f_846[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 /*13*/].f_12 >= 2)
		{
			if ((((unk_0x22D6FB6153F774D3(2, 208) && !unk_0x22D6FB6153F774D3(2, 207)) && !bLocal_152) && !func_66(&uLocal_153)) && !unk_0x40397A9A17EEC1C5(Local_132.f_242))
			{
				if (unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
				{
					func_297(unk_0x460153A63B9477BC(), 0, 0, 0);
				}
				bLocal_151 = true;
			}
		}
		else
		{
			if (bLocal_151)
			{
				func_297(unk_0x460153A63B9477BC(), 0, 256, 0);
			}
			bLocal_151 = false;
		}
	}
	else
	{
		if (bLocal_152 || bLocal_151)
		{
			func_297(unk_0x460153A63B9477BC(), 0, 256, 0);
		}
		bLocal_152 = false;
		bLocal_151 = false;
	}
	if (bLocal_151 || bLocal_152)
	{
		unk_0xEE0C30F080302B85(1);
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			unk_0x8342E6CB98CD545C(unk_0x9B0761B4C3EB8BC7(), 166, 1);
		}
		if (!unk_0x306BF588BD8151E8("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			unk_0x17E478571720218F("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (!unk_0x40397A9A17EEC1C5(Local_132.f_242))
		{
			Local_132.f_242 = unk_0x7CD2F129A4A837A8(26379945, 1);
			unk_0x3FD8029C7A771A0E(Local_132.f_242, func_207(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3, Local_131[unk_0x460153A63B9477BC() /*8*/].f_4, bLocal_151), func_206(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3, Local_131[unk_0x460153A63B9477BC() /*8*/].f_4, bLocal_151), func_205(bLocal_151), 0, 1, 1, 2);
			unk_0x2311A669433389E8(Local_132.f_242, "HAND_SHAKE", 0.03f);
			unk_0x3ED9330214992278(true, 0, 3000, 1, 0, 0);
		}
		else if (bLocal_151)
		{
			if (Local_122.f_1525[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4])
			{
				if (func_27(&(Local_122.f_846[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 /*13*/])) == 21 && Local_122.f_846[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 /*13*/].f_12 == 2)
				{
					if (!func_95("BJACK_D_HAND2", "BJACK_BJ"))
					{
						func_94("BJACK_D_HAND2", "BJACK_BJ");
					}
				}
				else if (func_27(&(Local_122.f_846[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 /*13*/])) > 21)
				{
					if (!func_95("BJACK_D_HAND2", "BJACK_BUSTED"))
					{
						func_94("BJACK_D_HAND2", "BJACK_BUSTED");
					}
				}
				else if (!func_319("BJACK_D_HAND1", func_27(&(Local_122.f_846[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 /*13*/]))))
				{
					func_93("BJACK_D_HAND1", func_27(&(Local_122.f_846[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 /*13*/])));
				}
			}
			else if (!func_319("BJACK_D_HAND1", func_35(Local_122.f_846[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 /*13*/][1])))
			{
				func_93("BJACK_D_HAND1", func_35(Local_122.f_846[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 /*13*/][1]));
			}
			fVar0 = unk_0x9CF655D210CC30DC(Local_132.f_242);
			fVar1 = 50f;
			fVar1 = func_204(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3, 1);
			fVar0 = func_202(fVar0, fVar1, 0.2f, 4);
			unk_0x3FD8029C7A771A0E(Local_132.f_242, func_207(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3, Local_131[unk_0x460153A63B9477BC() /*8*/].f_4, bLocal_151), func_206(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3, Local_131[unk_0x460153A63B9477BC() /*8*/].f_4, bLocal_151), fVar0, 0, 1, 1, 2);
		}
		else if (bLocal_152)
		{
			fVar4 = unk_0x9CF655D210CC30DC(Local_132.f_242);
			fVar5 = 50f;
			Var6 = { unk_0x64F296BB45631A29(Local_132.f_242, 2) };
			Var7 = { 0f, 0f, 0f };
			Var8 = { -38.1166f, -0.0930717f, -102.613f };
			Var9 = { unk_0xC29BFC65584F2213(Local_132.f_242) };
			Var10 = { 0f, 0f, 0f };
			Var11 = { 966.621f, 32.009f, 116.621f };
			if (Var6.f_2 < 0f)
			{
				Var6.f_2 = (Var6.f_2 + 360f);
			}
			if (!func_66(&uLocal_149))
			{
				iVar12 = unk_0x0EEB12E4AD6BD29B(2, 30);
				bVar2 = iVar12 < 100;
				bVar3 = iVar12 > 150;
				if (bVar2 || bVar3)
				{
					func_67(&uLocal_149, 0, 0);
				}
			}
			else if (func_65(&uLocal_149, 500, 0))
			{
				func_63(&uLocal_149);
			}
			if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 >= 0 && Local_122.f_1570[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4] > 1)
			{
				if (bVar2)
				{
					iLocal_144 = (iLocal_144 - 1);
					if (iLocal_144 < func_201(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3))
					{
						iLocal_144 = func_201(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3);
					}
				}
				if (bVar3)
				{
					iLocal_144++;
					if (iLocal_144 > func_200(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3))
					{
						iLocal_144 = func_200(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3);
					}
				}
			}
			else
			{
				iLocal_144 = 0;
			}
			Var11 = { func_207(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3, Local_131[unk_0x460153A63B9477BC() /*8*/].f_4, 0) };
			Var8 = { func_199(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3) };
			fVar5 = func_204(Local_131[unk_0x460153A63B9477BC() /*8*/].f_3, 0);
			if (Var8.f_2 < 0f)
			{
				Var8.f_2 = (Var8.f_2 + 360f);
			}
			Var7 = { func_197(Var6, Var8, 0.2f, 4) };
			Var10 = { func_196(Var9, Var11, 0.2f, 4) };
			if (Var7.f_2 > 180f)
			{
				Var7.f_2 = (Var7.f_2 - 360f);
			}
			else if (Var7.f_2 < -180f)
			{
				Var7.f_2 = (Var7.f_2 + 360f);
			}
			if (func_195(Var6, Var8, 10f, 0) && func_195(Var9, Var11, 0.1f, 0))
			{
				fVar4 = func_202(fVar4, fVar5, 0.2f, 4);
			}
			unk_0x3FD8029C7A771A0E(Local_132.f_242, Var10, Var7, fVar4, 0, 1, 1, 2);
		}
	}
	else
	{
		if (unk_0x306BF588BD8151E8("DLC_VW_Casino_Cards_Focus_Hand"))
		{
			unk_0xFA07F8BEBDAAFBA8("DLC_VW_Casino_Cards_Focus_Hand");
		}
		if (unk_0x40397A9A17EEC1C5(Local_132.f_242))
		{
			unk_0xEE0C30F080302B85(1);
			if (!func_66(&uLocal_153) && bLocal_143)
			{
				func_67(&uLocal_153, 0, 0);
				unk_0x0A794A8277A63161("DefaultBlinkOutro", 0, 0);
			}
			else if (func_65(&uLocal_153, 100, 0) || !bLocal_143)
			{
				unk_0x3ED9330214992278(false, 0, 3000, 1, 0, 0);
				unk_0xB8B0F7C8C1548C5B(Local_132.f_242, 0);
				unk_0xD289B55B6AADBA10(1);
				func_63(&uLocal_153);
				bLocal_143 = false;
				iLocal_144 = 0;
			}
		}
	}
	if (bLocal_152 || bLocal_143)
	{
		if ((Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 >= 2 && ((!unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 13) && !unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 11)) || (((unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 11) && unk_0xF7DE07F319727299(Local_122.f_1595[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4])) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4]))) && unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4]), func_58(), func_14(Local_131[unk_0x460153A63B9477BC() /*8*/].f_4, Local_122.f_1575[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4], 1), 3)))) || (unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/], 11) && Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 < 3))
		{
			if (func_27(&(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/])) == 21 && Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 == 2)
			{
				if (!func_95("BJACK_P_HAND2", "BJACK_BJ"))
				{
					func_94("BJACK_P_HAND2", "BJACK_BJ");
				}
			}
			else if (func_27(&(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/])) <= 21 && Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 == 7)
			{
				if (!func_95("BJACK_P_HAND2", "BJACK_7CC"))
				{
					func_94("BJACK_P_HAND2", "BJACK_7CC");
				}
			}
			else if (func_27(&(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/])) > 21)
			{
				if (!func_95("BJACK_P_HAND2", "BJACK_BUSTED"))
				{
					func_94("BJACK_P_HAND2", "BJACK_BUSTED");
				}
			}
			else if (!func_319("BJACK_P_HAND1", func_27(&(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/]))))
			{
				func_93("BJACK_P_HAND1", func_27(&(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/])));
			}
		}
		else if (Local_122.f_1575[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4] != (Local_131[unk_0x460153A63B9477BC() /*8*/].f_3 - (4 * Local_131[unk_0x460153A63B9477BC() /*8*/].f_4)) && Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 >= 2)
		{
			if (func_27(&(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/])) == 21 && Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 == 2)
			{
				if (func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) == 21 && Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 2)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BJ"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BJ");
					}
				}
				else if (func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) <= 21 && Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 7)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BJ"))
					{
						func_91("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BJ");
					}
				}
				else if (func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) > 21)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BJ"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BJ");
					}
				}
				else if (!func_105("BJACK_SHOW_3", "BJACK_BJ", func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/]))))
				{
					func_104("BJACK_SHOW_3", "BJACK_BJ", func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])));
				}
			}
			else if (func_27(&(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/])) <= 21 && Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 == 7)
			{
				if (func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) == 21 && Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 2)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BJ", "BJACK_7CC"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BJ", "BJACK_7CC");
					}
				}
				else if (func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) <= 21 && Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 7)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_7CC", "BJACK_7CC"))
					{
						func_91("BJACK_SHOW_4", "BJACK_7CC", "BJACK_7CC");
					}
				}
				else if (func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) > 21)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_7CC"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_7CC");
					}
				}
				else if (!func_105("BJACK_SHOW_3", "BJACK_7CC", func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/]))))
				{
					func_104("BJACK_SHOW_3", "BJACK_7CC", func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])));
				}
			}
			else if (func_27(&(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/])) > 21)
			{
				if (func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) == 21 && Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 2)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BUSTED"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BJ", "BJACK_BUSTED");
					}
				}
				else if (func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) <= 21 && Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 7)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BUSTED"))
					{
						func_91("BJACK_SHOW_4", "BJACK_7CC", "BJACK_BUSTED");
					}
				}
				else if (func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) > 21)
				{
					if (!func_92("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BUSTED"))
					{
						func_91("BJACK_SHOW_4", "BJACK_BUSTED", "BJACK_BUSTED");
					}
				}
				else if (!func_105("BJACK_SHOW_3", "BJACK_BUSTED", func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/]))))
				{
					func_104("BJACK_SHOW_3", "BJACK_BUSTED", func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])));
				}
			}
			else if (func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) == 21 && Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 2)
			{
				if (!func_105("BJACK_SHOW_2", "BJACK_BJ", func_27(&(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/]))))
				{
					func_104("BJACK_SHOW_2", "BJACK_BJ", func_27(&(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/])));
				}
			}
			else if (func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) <= 21 && Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 7)
			{
				if (!func_105("BJACK_SHOW_2", "BJACK_7CC", func_27(&(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/]))))
				{
					func_104("BJACK_SHOW_2", "BJACK_7CC", func_27(&(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/])));
				}
			}
			else if (func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) > 21)
			{
				if (!func_105("BJACK_SHOW_2", "BJACK_BUSTED", func_27(&(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/]))))
				{
					func_104("BJACK_SHOW_2", "BJACK_BUSTED", func_27(&(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/])));
				}
			}
			else if (!func_103("BJACK_SHOW_1", func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])), func_27(&(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/]))))
			{
				func_102("BJACK_SHOW_1", func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])), func_27(&(Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/])));
			}
		}
		else if (func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) == 21 && Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 2)
		{
			if (!func_95("BJACK_P_HAND2", "BJACK_BJ"))
			{
				func_94("BJACK_P_HAND2", "BJACK_BJ");
			}
		}
		else if (func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) <= 21 && Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 == 7)
		{
			if (!func_95("BJACK_P_HAND2", "BJACK_7CC"))
			{
				func_94("BJACK_P_HAND2", "BJACK_7CC");
			}
		}
		else if (func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])) > 21)
		{
			if (!func_95("BJACK_P_HAND2", "BJACK_BUSTED"))
			{
				func_94("BJACK_P_HAND2", "BJACK_BUSTED");
			}
		}
		else if (!func_319("BJACK_P_HAND1", func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/]))))
		{
			func_93("BJACK_P_HAND1", func_27(&(Local_122.f_899[unk_0x460153A63B9477BC() /*9*/])));
		}
	}
}

int func_195(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (unk_0x0D77CDCF403AEBD2((Param0.x - Param1.x)) <= fParam2)
		{
			if (unk_0x0D77CDCF403AEBD2((Param0.f_1 - Param1.f_1)) <= fParam2)
			{
				if (unk_0x0D77CDCF403AEBD2((Param0.f_2 - Param1.f_2)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (unk_0x0D77CDCF403AEBD2((Param0.x - Param1.x)) <= fParam2)
	{
		if (unk_0x0D77CDCF403AEBD2((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_196(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0.x = func_202(Param0.x, Param1.x, fParam2, iParam3);
	Var0.f_1 = func_202(Param0.f_1, Param1.f_1, fParam2, iParam3);
	Var0.f_2 = func_202(Param0.f_2, Param1.f_2, fParam2, iParam3);
	return Var0;
}

Vector3 func_197(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0.x = func_198(Param0.x, Param1.x, fParam2, iParam3);
	Var0.f_1 = func_198(Param0.f_1, Param1.f_1, fParam2, iParam3);
	Var0.f_2 = func_198(Param0.f_2, Param1.f_2, fParam2, iParam3);
	return Var0;
}

float func_198(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = unk_0x0D77CDCF403AEBD2((fParam1 - fParam0));
	if (fVar0 > 180f)
	{
		if (fParam1 > fParam0)
		{
			fParam0 = (fParam0 + 360f);
		}
		else
		{
			fParam1 = (fParam1 + 360f);
		}
	}
	fVar1 = func_202(fParam0, fParam1, fParam2, iParam3);
	fVar2 = 360f;
	if (fVar1 >= 0f && fVar1 <= 360f)
	{
		return fVar1;
	}
	return (fVar1 % fVar2);
}

Vector3 func_199(int iParam0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { func_217(iParam0) };
	Var1 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			switch (iLocal_144)
			{
				case 0:
					Var1 = { -60.84f, 0f, -87.48f };
					break;
				
				case -1:
					Var1 = { -33.84f, 0f, -51.84f };
					break;
				
				case -2:
					Var1 = { -22.68f, 0f, -58.68f };
					break;
				
				case -3:
					Var1 = { -18f, 0f, -72f };
					break;
			}
			break;
		
		case 1:
		case 5:
		case 9:
		case 13:
			switch (iLocal_144)
			{
				case 0:
					Var1 = { -60.84f, 0f, -87.48f };
					break;
				
				case 1:
					Var1 = { -33.48f, 0f, -123.48f };
					break;
				
				case -1:
					Var1 = { -36f, 0f, -45f };
					break;
				
				case -2:
					Var1 = { -22.68f, 0f, -51.48f };
					break;
			}
			break;
		
		case 2:
		case 6:
		case 10:
		case 14:
			switch (iLocal_144)
			{
				case 0:
					Var1 = { -60.84f, 0f, -87.48f };
					break;
				
				case 1:
					Var1 = { -33.84f, 0f, -130.32f };
					break;
				
				case 2:
					Var1 = { -22.32f, 0f, -124.92f };
					break;
				
				case -1:
					Var1 = { -35.64f, 0f, -50.4f };
					break;
			}
			break;
		
		case 3:
		case 7:
		case 11:
		case 15:
			switch (iLocal_144)
			{
				case 0:
					Var1 = { -60.84f, 0f, -87.48f };
					break;
				
				case 1:
					Var1 = { -34.56f, 0f, -126f };
					break;
				
				case 2:
					Var1 = { -22.32f, 0f, -119.52f };
					break;
				
				case 3:
					Var1 = { -18.36f, 0f, -104.4f };
					break;
			}
			break;
	}
	return Vector(Var0.f_2, 0f, 0f) + Var1;
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return 0;
		
		case 1:
		case 5:
		case 9:
		case 13:
			return 1;
		
		case 2:
		case 6:
		case 10:
		case 14:
			return 2;
		
		case 3:
		case 7:
		case 11:
		case 15:
			return 3;
		
		default:
	}
	return 0;
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			return -3;
		
		case 1:
		case 5:
		case 9:
		case 13:
			return -2;
		
		case 2:
		case 6:
		case 10:
		case 14:
			return -1;
		
		case 3:
		case 7:
		case 11:
		case 15:
			return 0;
		
		default:
	}
	return 0;
}

float func_202(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = pow(fParam2, 2f);
			break;
		
		case 2:
		case 7:
			fParam2 = (1f - pow((1f - fParam2), 2f));
			break;
		
		case 3:
		case 8:
			fParam2 = ((-cos(func_203((3.141593f * fParam2))) / 2f) + 0.5f);
			break;
		
		case 4:
		case 9:
			fParam2 = (pow(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_202(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_202(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_203(float fParam0)
{
	return (fParam0 * 57.29578f);
}

float func_204(int iParam0, bool bParam1)
{
	float fVar0;
	
	fVar0 = 50f;
	if (bParam1)
	{
		return 37.8425f;
	}
	switch (iParam0)
	{
		case 0:
		case 4:
		case 8:
		case 12:
			switch (iLocal_144)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				
				case -1:
					fVar0 = 34.3684f;
					break;
				
				case -2:
					fVar0 = 26.8741f;
					break;
				
				case -3:
					fVar0 = 26.8741f;
					break;
			}
			break;
		
		case 1:
		case 5:
		case 9:
		case 13:
			switch (iLocal_144)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				
				case 1:
					fVar0 = 34.3684f;
					break;
				
				case -1:
					fVar0 = 34.3684f;
					break;
				
				case -2:
					fVar0 = 26.8741f;
					break;
			}
			break;
		
		case 2:
		case 6:
		case 10:
		case 14:
			switch (iLocal_144)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				
				case 1:
					fVar0 = 34.3684f;
					break;
				
				case 2:
					fVar0 = 26.8741f;
					break;
				
				case -1:
					fVar0 = 34.3684f;
					break;
			}
			break;
		
		case 3:
		case 7:
		case 11:
		case 15:
			switch (iLocal_144)
			{
				case 0:
					fVar0 = 33.8659f;
					break;
				
				case 1:
					fVar0 = 34.3684f;
					break;
				
				case 2:
					fVar0 = 26.8741f;
					break;
				
				case 3:
					fVar0 = 26.8741f;
					break;
			}
			break;
	}
	return fVar0;
}

float func_205(bool bParam0)
{
	float fVar0;
	
	fVar0 = 35.3669f;
	if (bParam0)
	{
		fVar0 = 40.5607f;
	}
	return fVar0;
}

Vector3 func_206(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	
	if (bParam2)
	{
		return Vector(func_69(iParam1), 0f, 0f) + Vector(0f, 0.061f, -59.1316f);
	}
	else
	{
		Var0 = { func_217(iParam0) };
		return Vector(Var0.f_2, 0f, 0f) + Vector(-87.48f, 0f, -60.84f);
	}
	return 0f, 0f, 0f;
}

Vector3 func_207(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	
	if (bParam2)
	{
		return unk_0x1BAE5C94E38E44FE(func_70(iParam1), func_69(iParam1), -0.0094f, -0.0611f, 1.5098f);
	}
	else
	{
		Var0 = { func_217(iParam0) };
		return unk_0x1BAE5C94E38E44FE(func_358(iParam0), Var0.f_2, 0.245f, 0f, 1.415f);
	}
	return 0f, 0f, 0f;
}

void func_208(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, true, iParam1);
}

int func_209(int iParam0)
{
	if (Local_122.f_1515[iParam0] == 2)
	{
		if (!unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/].f_5, 0))
		{
			Local_132.f_2 = { Local_122.f_1[iParam0 /*211*/] };
			unk_0xBE20AB8238688965(&(Local_131[unk_0x460153A63B9477BC() /*8*/].f_5), 0);
		}
	}
	else if (Local_122.f_1515[iParam0] > 2 && unk_0xCE990E643CD9D0E5(Local_131[unk_0x460153A63B9477BC() /*8*/].f_5, 0))
	{
		if (Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 > 0)
		{
			if (Local_132.f_213.f_8 != Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 || (Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 > 0 && Local_132.f_222.f_8 != Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8))
			{
				Local_132.f_213 = { Local_122.f_899[unk_0x460153A63B9477BC() /*9*/] };
			}
			else
			{
				if (Local_132.f_213[iLocal_147] != Local_122.f_899[unk_0x460153A63B9477BC() /*9*/][iLocal_147])
				{
					iLocal_146 = 0;
					iLocal_147 = 0;
					iLocal_148 = 0;
					if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 > -1)
					{
						Local_137.f_9 = Local_122.f_1570[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4];
					}
					Local_137.f_18 = func_416();
					Local_137.f_19 = func_192();
					Local_137.f_17 = func_190(&uLocal_133, 0, 0);
					Local_137.f_7 = func_402();
					if (Global_262145.f_26108)
					{
						unk_0x69805A4C17F46811(&Local_137);
					}
					func_376(1);
					unk_0xD289B55B6AADBA10(1);
					return 1;
				}
				iLocal_147++;
				if (iLocal_147 >= Local_132.f_213.f_8)
				{
					iLocal_147 = 0;
				}
			}
		}
		if (Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 > 0)
		{
			if (Local_132.f_222.f_8 != Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/].f_8 || (Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8 > 0 && Local_132.f_213.f_8 != Local_122.f_899[unk_0x460153A63B9477BC() /*9*/].f_8))
			{
				Local_132.f_222 = { Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/] };
			}
			else
			{
				if (Local_132.f_222[iLocal_148] != Local_122.f_1188[unk_0x460153A63B9477BC() /*9*/][iLocal_148])
				{
					iLocal_146 = 0;
					iLocal_147 = 0;
					iLocal_148 = 0;
					if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 > -1)
					{
						Local_137.f_9 = Local_122.f_1570[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4];
					}
					Local_137.f_18 = func_416();
					Local_137.f_19 = func_192();
					Local_137.f_17 = func_190(&uLocal_133, 0, 0);
					Local_137.f_7 = func_402();
					if (Global_262145.f_26108)
					{
						unk_0x69805A4C17F46811(&Local_137);
					}
					func_376(1);
					unk_0xD289B55B6AADBA10(1);
					return 1;
				}
				iLocal_148++;
				if (iLocal_148 >= Local_132.f_222.f_8)
				{
					iLocal_148 = 0;
				}
			}
		}
		if (Local_122.f_1[iParam0 /*211*/][iLocal_146] != Local_132.f_2[iLocal_146])
		{
			iLocal_146 = 0;
			iLocal_147 = 0;
			iLocal_148 = 0;
			if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 > -1)
			{
				Local_137.f_9 = Local_122.f_1570[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4];
			}
			Local_137.f_18 = func_416();
			Local_137.f_19 = func_192();
			Local_137.f_17 = func_190(&uLocal_133, 0, 0);
			Local_137.f_7 = func_402();
			if (Global_262145.f_26108)
			{
				unk_0x69805A4C17F46811(&Local_137);
			}
			func_376(1);
			unk_0xD289B55B6AADBA10(1);
			return 1;
		}
		iLocal_146++;
		if (iLocal_146 >= 208)
		{
			iLocal_146 = 0;
		}
	}
	return 0;
}

void func_210()
{
	int iVar0;
	
	iVar0 = func_382(Local_132.f_247);
	if (iVar0 < 32)
	{
		unk_0xBE20AB8238688965(&(Local_132.f_254), iVar0);
	}
}

int func_211(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_419())
	{
		return 0;
	}
	iVar0 = func_212(iParam0);
	if (iVar0 != func_419())
	{
		return func_321(iVar0);
	}
	return 0;
}

int func_212(int iParam0)
{
	if (iParam0 != func_419())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_419();
}

void func_213(var uParam0, int iParam1)
{
	if (uParam0->f_6 == iParam1)
	{
		return;
	}
	if (iParam1 < uParam0->f_6 && iParam1 != 0)
	{
		return;
	}
	if ((iParam1 == 4 || iParam1 == 5) || iParam1 == 6)
	{
		if (func_330())
		{
			func_213(uParam0, 7);
			return;
		}
	}
	uParam0->f_6 = iParam1;
	func_63(&(Local_132.f_1580));
	if ((iParam1 != 0 && iParam1 != 3) && iParam1 != 8)
	{
		func_67(&(Local_132.f_1580), 0, 0);
	}
}

int func_214()
{
	int iVar0;
	
	iVar0 = func_382(Local_132.f_247);
	if (iVar0 < 32)
	{
		return unk_0xCE990E643CD9D0E5(Local_132.f_254, iVar0);
	}
	return 0;
}

char* func_215(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "sit_enter_left";
		
		case 1:
			return "sit_enter_left_side";
		
		case 2:
			return "sit_enter_right_side";
		
		default:
	}
	return "sit_enter_left";
}

char* func_216()
{
	return "anim_casino_b@amb@casino@games@shared@player@";
}

Vector3 func_217(int iParam0)
{
	int iVar0;
	
	if (Local_132.f_257 == 1)
	{
		if (func_420() != func_419())
		{
			iVar0 = unk_0x5BBA0055476D633A(func_70(func_382(iParam0)), 1f, func_218(Global_2425869[func_420() /*443*/].f_442), 0, 0, 0);
		}
	}
	else if (func_382(iParam0) == 0 || func_382(iParam0) == 1)
	{
		iVar0 = unk_0x5BBA0055476D633A(func_70(func_382(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01"), 0, 0, 0);
	}
	else
	{
		iVar0 = unk_0x5BBA0055476D633A(func_70(func_382(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01b"), 0, 0, 0);
	}
	if (unk_0xAE06B9E39EBDE049(iVar0) && unk_0xEE37CF67E6E839EA(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_04"));
			
			case 1:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_03"));
			
			case 2:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_02"));
			
			case 3:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_01"));
			
			case 4:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_04"));
			
			case 5:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_03"));
			
			case 6:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_02"));
			
			case 7:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_01"));
			
			case 8:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_04"));
			
			case 9:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_03"));
			
			case 10:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_02"));
			
			case 11:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_01"));
			
			case 12:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_04"));
			
			case 13:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_03"));
			
			case 14:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_02"));
			
			case 15:
				return unk_0x729B801EF59B8369(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 177789876;
			break;
		
		case 2:
			return 248767530;
			break;
		
		case 3:
			return -552237906;
			break;
		
		case 4:
			return -322953213;
			break;
		
		case 5:
			return 1284693927;
			break;
	}
	return joaat("vw_prop_casino_blckjack_01b");
}

var func_219(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { unk_0xD78F5800B90C4843(func_216(), func_215(iParam1), func_358(iParam0), func_217(iParam0), 0.01f, 2) };
	return Var0.f_2;
}

float func_220(int iParam0, struct<3> Param1, bool bParam2)
{
	struct<3> Var0;
	
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 0) };
	}
	return unk_0x272784C60C397DB6(Var0, Param1, bParam2);
}

Vector3 func_221(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0 = { unk_0xD7D25254A712E758(func_216(), func_215(iParam1), func_358(iParam0), func_217(iParam0), 0.01f, 2) };
	return Var0;
}

int func_222()
{
	unk_0x131ED02492676000(func_58());
	unk_0x131ED02492676000(func_72());
	unk_0x131ED02492676000(func_88());
	unk_0x131ED02492676000(func_216());
	if (((unk_0xC614DDE265D18415(func_58()) && unk_0xC614DDE265D18415(func_72())) && unk_0xC614DDE265D18415(func_88())) && unk_0xC614DDE265D18415(func_216()))
	{
		return 1;
	}
	return 0;
}

int func_223()
{
	if (func_65(&(Local_132.f_1578), 3500, 0))
	{
		func_63(&(Local_132.f_1578));
		return 1;
	}
	return 0;
}

bool func_224(int iParam0)
{
	if (Local_122.f_1600[iParam0] == func_419())
	{
		return 0;
	}
	return Local_122.f_1600[iParam0] != unk_0x460153A63B9477BC();
}

void func_225(int iParam0)
{
	Global_1696922 = unk_0x5A002C4821A13338();
	Global_1696940 = iParam0;
	if (!func_233())
	{
		func_230();
	}
	if (!func_229())
	{
		func_226();
	}
}

void func_226()
{
	func_112(joaat("MPPLY_CAS_GMBLNG_L24_PX"), unk_0x5A002C4821A13338());
	func_228();
	func_227();
	Global_1696936 = 1;
	Global_1696931 = 0;
}

void func_227()
{
	func_112(joaat("MPPLY_CAS_24H_GMBLNG_PX"), unk_0x5A002C4821A13338());
}

void func_228()
{
	func_112(joaat("MPPLY_CAS_GMBLNG_L24"), 0);
	func_112(joaat("MPPLY_CAS_GMBLNG_L24_1"), 0);
	func_112(joaat("MPPLY_CAS_GMBLNG_L24_2"), 0);
	func_112(joaat("MPPLY_CAS_GMBLNG_L24_3"), 0);
	func_112(joaat("MPPLY_CAS_GMBLNG_L24_4"), 0);
	func_112(joaat("MPPLY_CAS_GMBLNG_L24_5"), 0);
	func_112(joaat("MPPLY_CAS_GMBLNG_L24_6"), 0);
	func_112(joaat("MPPLY_CAS_GMBLNG_L24_7"), 0);
	func_112(joaat("MPPLY_CAS_GMBLNG_L24_8"), 0);
	func_112(joaat("MPPLY_CAS_CUR_GMBLNG_HR"), 0);
	func_112(joaat("MPPLY_CAS_24H_GMBLNG_PX"), 0);
}

bool func_229()
{
	return Global_1696936;
}

void func_230()
{
	func_112(joaat("MPPLY_CASINO_GMBLNG_GD"), unk_0x5A002C4821A13338());
	func_232();
	func_231((unk_0x5A002C4821A13338() + 86400));
	Global_1696935 = 1;
}

void func_231(int iParam0)
{
	Global_1696930 = iParam0;
}

void func_232()
{
	func_112(joaat("MPPLY_CAS_CUR_GMBLNG_PX"), unk_0x5A002C4821A13338());
}

bool func_233()
{
	return func_116(joaat("MPPLY_CASINO_GMBLNG_GD")) != 0;
}

bool func_234(int iParam0)
{
	return Local_122.f_1600[iParam0] == unk_0x460153A63B9477BC();
}

void func_235()
{
	func_360(2);
	unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 185, false);
	func_336();
	func_297(unk_0x460153A63B9477BC(), 1, 0, 0);
	func_243();
	unk_0xD2459066EA58CE43(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_4), 2);
	func_236();
}

void func_236()
{
	int iVar0;
	int iVar1;
	
	if (Global_1696940 != -1)
	{
		iVar0 = (unk_0x5A002C4821A13338() - Global_1696922);
		iVar1 = (unk_0x5A002C4821A13338() - Global_1696923);
		if (Global_1696923 == -1)
		{
			func_237(iVar0);
		}
		else
		{
			func_237(iVar1);
		}
		func_232();
		func_227();
		Global_1696922 = -1;
		Global_1696923 = -1;
		Global_1696940 = -1;
	}
}

void func_237(int iParam0)
{
	int iVar0;
	
	iVar0 = func_242();
	Global_1696931 = (Global_1696931 + iParam0);
	func_238(iVar0, iParam0);
	func_227();
}

void func_238(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1[9];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	iVar2 = (iParam0 + 1 * 12 - 12);
	iVar3 = 1;
	if ((iVar2 % 32) + 12 > 32)
	{
		iVar3 = 2;
	}
	iVar4 = floor((to_float(iVar2) / 32f));
	if (iVar4 < 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		if ((iVar4 + iVar0) >= 9)
		{
			return;
		}
		iVar5 = func_241((iVar4 + iVar0));
		uVar1[(iVar4 + iVar0)] = func_116(iVar5);
		iVar0++;
	}
	iVar6 = func_240(&uVar1, iParam0, 12);
	iVar6 = (iVar6 + iParam1);
	func_239(&uVar1, iParam0, 12, iVar6);
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		uVar7 = func_241((iVar4 + iVar0));
		func_112(uVar7, uVar1[(iVar4 + iVar0)]);
		iVar0++;
	}
}

void func_239(var uParam0, int iParam1, int iParam2, int iParam3)
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
	
	iVar2 = (iParam1 + 1 * iParam2);
	iVar3 = (iVar2 - iParam2);
	iVar4 = floor((to_float(iVar3) / 32f));
	iVar5 = ceil((to_float((((iVar3 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar4 - 1) + iVar5) >= *uParam0)
	{
		return;
	}
	iVar6 = 0;
	iVar7 = (iVar3 % 32);
	iVar0 = 0;
	while (iVar0 < iVar5)
	{
		iVar8 = (32 - iVar7);
		if (iVar8 > (iParam2 - iVar6))
		{
			iVar8 = (iParam2 - iVar6);
		}
		iVar1 = iVar7;
		while (iVar1 <= ((iVar7 + iVar8) - 1))
		{
			if (unk_0xCE990E643CD9D0E5(iParam3, iVar6))
			{
				unk_0xBE20AB8238688965(uParam0[(iVar4 + iVar0)], iVar1);
			}
			else
			{
				unk_0xD2459066EA58CE43(uParam0[(iVar4 + iVar0)], iVar1);
			}
			iVar6++;
			iVar1++;
		}
		if (iVar7 > 0)
		{
			iVar7 = 0;
		}
		else
		{
			iVar7 = (iVar7 + iVar8);
		}
		iVar0++;
	}
}

int func_240(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	iVar3 = (iParam1 + 1 * iParam2);
	iVar4 = (iVar3 - iParam2);
	iVar5 = floor((to_float(iVar4) / 32f));
	iVar6 = ceil((to_float((((iVar4 % 32) + iParam2) - 32)) / 32f)) + 1;
	if (((iVar5 - 1) + iVar6) >= *uParam0)
	{
		return 0;
	}
	iVar7 = 0;
	iVar8 = (iVar4 % 32);
	iVar0 = 0;
	while (iVar0 < iVar6)
	{
		iVar9 = (32 - iVar8);
		if (iVar9 > (iParam2 - iVar7))
		{
			iVar9 = (iParam2 - iVar7);
		}
		iVar1 = iVar8;
		while (iVar1 <= ((iVar8 + iVar9) - 1))
		{
			if (unk_0xCE990E643CD9D0E5((*uParam0)[(iVar5 + iVar0)], iVar1))
			{
				unk_0xBE20AB8238688965(&uVar2, iVar7);
			}
			iVar7++;
			iVar1++;
		}
		if (iVar8 > 0)
		{
			iVar8 = 0;
		}
		else
		{
			iVar8 = (iVar8 + iVar9);
		}
		iVar0++;
	}
	return uVar2;
}

int func_241(int iParam0)
{
	char cVar0[24];
	
	StringCopy(&cVar0, "MPPLY_CAS_GMBLNG_L24", 24);
	if (iParam0 > 0)
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, iParam0, 24);
	}
	return unk_0x856D5567211886A2(&cVar0);
}

int func_242()
{
	return func_116(joaat("MPPLY_CAS_CUR_GMBLNG_HR"));
}

void func_243()
{
	Global_2440049.f_1267.f_10 = 0;
}

void func_244(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_246(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22550.f_8417)
	{
		unk_0x610B4083B1F95914(15);
		Global_22550.f_8417 = 0;
	}
	unk_0x530DC1525CA60B00(0f);
	if (Global_22550.f_5628[iVar0])
	{
		unk_0x5D52AA94798846BB(9, false);
		Global_22550.f_5628[iVar0] = 0;
	}
	if (Global_22550.f_5614[iVar0])
	{
		unk_0x2DDA2C702A92866E("CommonMenu");
		Global_22550.f_5614[iVar0] = 0;
	}
	if (Global_22550.f_5621[iVar0])
	{
		unk_0x2DDA2C702A92866E("MPShopSale");
		Global_22550.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_245(&(Global_22550.f_5660[iVar0 /*10*/]));
		Global_22550.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22550.f_5721[iVar0] = 0;
	}
}

void func_245(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x95EF219D38B20CFF(*iParam0))
		{
			unk_0x2E352DDBBF674246(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_246(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x25DDB354A40FFCDB() && unk_0x82CC259B7B4F4AD9())
		{
			iParam2 = unk_0x1D39C24C852E6DFA();
		}
	}
	StringCopy(&cVar0, unk_0x6C5C6B207AA78253(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x856D5567211886A2(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_22550.f_5721[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_22550.f_5721[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_22550.f_5721[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_247(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int iVar58;
	int iVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	char cVar63[64];
	char cVar64[64];
	float fVar65;
	int iVar66;
	float fVar67;
	float fVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_246(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_282(0, bParam6))
	{
		return;
	}
	unk_0xFCC7EAA298CE7AC2(76, 84);
	unk_0xFFA39C4568552522(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_22550)
	{
		if (func_280(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar55 = fVar37;
			fVar56 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_22550 = 0;
		}
	}
	if (unk_0x856D5567211886A2(&(Global_22550.f_1)) == unk_0x856D5567211886A2("HIDE"))
	{
		fVar57 = Global_22548;
	}
	else
	{
		fVar57 = (((Global_22548 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22549;
	}
	fVar60 = 1f;
	if (bParam7)
	{
		unk_0x9DD549AAA043F83A(&iVar58, &iVar59);
		fVar61 = unk_0x8940B46482DD0A7D(0);
		if (func_279())
		{
			iVar58 = round((to_float(iVar59) * fVar61));
		}
		fVar62 = (to_float(iVar58) / to_float(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_279())
		{
			fVar60 = 1f;
		}
		iVar58 = round((to_float(iVar58) / fVar60));
		iVar59 = round((to_float(iVar59) / fVar60));
	}
	else
	{
		unk_0x8BAB7B3A2C7777A5(&iVar58, &iVar59);
	}
	if (bParam3)
	{
		if (Global_22550.f_5218 <= 1)
		{
			func_275(Global_22550.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22550.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22550.f_5728)
		{
			if (unk_0x856D5567211886A2(&(Global_22550.f_1)) == unk_0x856D5567211886A2("HIDE"))
			{
				fVar49 = Global_22548;
			}
			else
			{
				if (Global_22550)
				{
					StringCopy(&cVar63, func_274(29), 64);
					StringCopy(&cVar64, func_271(29, 1), 64);
					if (unk_0x856D5567211886A2(&(Global_22550.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_270(Global_22547, Global_22548, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
						unk_0x177AA645FB4B3A38(&cVar63, &cVar64, (Global_22547 + (fParam5 * 0.5f)), (Global_22548 + ((fVar55 - 0f) * 0.5f)), fVar56, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x177AA645FB4B3A38(&cVar63, &cVar64, (Global_22547 + (fParam5 * 0.5f)), (Global_22548 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22550.f_8387)
				{
					iVar1 = Global_22550.f_8383;
					iVar2 = Global_22550.f_8384;
					iVar3 = Global_22550.f_8385;
					iVar4 = Global_22550.f_8386;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_270(Global_22547, (Global_22548 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_22548 + fVar55) + 0.034722f) + 0f);
				if (unk_0x856D5567211886A2(&(Global_22550.f_1)) != 0)
				{
					func_269();
					unk_0x40A75E32D30C605F(&(Global_22550.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22550.f_68)
					{
						if (Global_22550.f_5[iVar14] == 2)
						{
							unk_0x42710E9E08FA375A(Global_22550.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22550.f_5[iVar14] == 3)
						{
							unk_0x5BC8B357341A4FEE(Global_22550.f_14[iVar16], Global_22550.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22550.f_5[iVar14] == 1)
						{
							unk_0x6A826E35A3096ED0(&(Global_22550.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22550.f_5[iVar14] == 8)
						{
							unk_0x6A826E35A3096ED0(&(Global_22550.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22550.f_5[iVar14] == 5)
						{
							unk_0x9EFD301E3BE8324E(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22550.f_5[iVar14] == 6)
						{
							unk_0x6A826E35A3096ED0(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22550.f_5[iVar14] == 7)
						{
							unk_0x9EFD301E3BE8324E(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22550.f_5[iVar14] == 9)
						{
							unk_0x9EFD301E3BE8324E(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xA434CC17B5517E4E((Global_22547 + 0.00390625f), ((Global_22548 + fVar55) + 0.00416664f), 0);
				}
				if (Global_22550.f_5735)
				{
					func_269();
					func_267((((Global_22547 + fParam5) - 0.00390625f) - func_268("CM_ITEM_COUNT", Global_22550.f_5736, Global_22550.f_5737)), ((Global_22548 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22550.f_5736, Global_22550.f_5737);
				}
				else if (Global_22550.f_5731 > Global_22550.f_5225)
				{
					if (Global_22550.f_5734 != 0)
					{
						func_269();
						func_267((((Global_22547 + fParam5) - 0.00390625f) - func_268("CM_ITEM_COUNT", Global_22550.f_5734, Global_22550.f_5733)), ((Global_22548 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22550.f_5734, Global_22550.f_5733);
					}
				}
			}
			iVar6 = Global_22550.f_5738;
			iVar9 = 0;
			fVar65 = fVar49;
			if (Global_22550.f_8397)
			{
				iVar1 = Global_22550.f_8393;
				iVar2 = Global_22550.f_8394;
				iVar3 = Global_22550.f_8395;
				iVar4 = Global_22550.f_8396;
			}
			else
			{
				unk_0x28DD484BAEAF8437(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22550.f_5225 && iVar6 <= Global_22550.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22550.f_5485[iVar6])
					{
						if (Global_22550.f_5356[iVar6] && iVar6 != Global_22550.f_5738)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_22550.f_5745[iVar6] != 0f)
						{
							fVar54 = Global_22550.f_5745[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0x177AA645FB4B3A38("CommonMenu", "Gradient_Bgd", (Global_22547 + (fParam5 * 0.5f)), ((fVar65 + ((fVar49 - fVar65) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar65), 0f, 255, 255, 255, 255, 0);
			if (Global_22550.f_5731 > Global_22550.f_5225)
			{
				if (Global_22550.f_8402)
				{
					iVar1 = Global_22550.f_8398;
					iVar2 = Global_22550.f_8399;
					iVar3 = Global_22550.f_8400;
					iVar4 = Global_22550.f_8401;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_270(Global_22547, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0x282B86763E4DCFC4("CommonMenu", "shop_arrows_upANDdown") };
				Var38.x = (Var38.x * (0.5f / fVar60));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar60));
				if (Global_22550.f_8415)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x28DD484BAEAF8437(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x177AA645FB4B3A38("CommonMenu", "shop_arrows_upANDdown", (Global_22547 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.x / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x856D5567211886A2(&(Global_22550.f_4690)) != 0 && Global_22550.f_4766 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_22547 + 0.0046875f);
				if (Global_22550.f_4768 != 0)
				{
					func_280(Global_22550.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22547 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_266(fVar40);
				unk_0x989558F5DCFEFA52(&(Global_22550.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22550.f_4762)
				{
					if (Global_22550.f_4696[iVar14] == 2)
					{
						unk_0x42710E9E08FA375A(Global_22550.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22550.f_4696[iVar14] == 3)
					{
						unk_0x5BC8B357341A4FEE(Global_22550.f_4705[iVar16], Global_22550.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22550.f_4696[iVar14] == 1)
					{
						unk_0x6A826E35A3096ED0(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 5)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 6)
					{
						unk_0x6A826E35A3096ED0(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 7)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 9)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x76C71C9B09716523(fVar40, (fVar49 + 0.00277776f));
				unk_0x28DD484BAEAF8437(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_270(Global_22547, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22550.f_8407)
				{
					iVar1 = Global_22550.f_8403;
					iVar2 = Global_22550.f_8404;
					iVar3 = Global_22550.f_8405;
					iVar4 = Global_22550.f_8406;
				}
				else
				{
					unk_0x28DD484BAEAF8437(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x177AA645FB4B3A38("CommonMenu", "Gradient_Bgd", (Global_22547 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xBA269EB4693A8C47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xBA269EB4693A8C47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_266(fVar40);
				unk_0x40A75E32D30C605F(&(Global_22550.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22550.f_4762)
				{
					if (Global_22550.f_4696[iVar14] == 2)
					{
						unk_0x42710E9E08FA375A(Global_22550.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22550.f_4696[iVar14] == 3)
					{
						unk_0x5BC8B357341A4FEE(Global_22550.f_4705[iVar16], Global_22550.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22550.f_4696[iVar14] == 1)
					{
						unk_0x6A826E35A3096ED0(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 5)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 6)
					{
						unk_0x6A826E35A3096ED0(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 7)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 9)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 8)
					{
						unk_0x6A826E35A3096ED0(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xA434CC17B5517E4E(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_22550.f_4768 != 0)
				{
					func_280(Global_22550.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_265(Global_22550.f_4768, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x177AA645FB4B3A38(func_274(Global_22550.f_4768), func_271(Global_22550.f_4768, 1), ((Global_22547 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0xBA269EB4693A8C47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22550.f_4766 > 0)
				{
					if ((unk_0x578C4EF320340AF7() - Global_22550.f_4767) > Global_22550.f_4766)
					{
						StringCopy(&(Global_22550.f_4690), "", 24);
						Global_22550.f_4766 = -1;
					}
				}
			}
			if (unk_0x856D5567211886A2(&(Global_4269680.f_21)) != 0 && Global_4269680.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_22547 + 0.0046875f);
				if (Global_4269680.f_67 != 0)
				{
					func_280(Global_4269680.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22547 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_266(fVar40);
				unk_0x989558F5DCFEFA52(&(Global_4269680.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4269680.f_61)
				{
					if (Global_4269680.f_25[iVar14] == 2)
					{
						unk_0x42710E9E08FA375A(Global_4269680.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4269680.f_25[iVar14] == 3)
					{
						unk_0x5BC8B357341A4FEE(Global_4269680.f_34[iVar16], Global_4269680.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4269680.f_25[iVar14] == 1)
					{
						unk_0x6A826E35A3096ED0(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 5)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 6)
					{
						unk_0x6A826E35A3096ED0(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 7)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 9)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 8)
					{
						unk_0x6A826E35A3096ED0(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x76C71C9B09716523(fVar40, (fVar49 + 0.00277776f));
				unk_0x28DD484BAEAF8437(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_270(Global_22547, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22550.f_8407)
				{
					iVar1 = Global_22550.f_8403;
					iVar2 = Global_22550.f_8404;
					iVar3 = Global_22550.f_8405;
					iVar4 = Global_22550.f_8406;
				}
				else
				{
					unk_0x28DD484BAEAF8437(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x177AA645FB4B3A38("CommonMenu", "Gradient_Bgd", (Global_22547 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xBA269EB4693A8C47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xBA269EB4693A8C47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_266(fVar40);
				unk_0x40A75E32D30C605F(&(Global_4269680.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4269680.f_61)
				{
					if (Global_4269680.f_25[iVar14] == 2)
					{
						unk_0x42710E9E08FA375A(Global_4269680.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4269680.f_25[iVar14] == 3)
					{
						unk_0x5BC8B357341A4FEE(Global_4269680.f_34[iVar16], Global_4269680.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4269680.f_25[iVar14] == 1)
					{
						unk_0x6A826E35A3096ED0(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 8)
					{
						unk_0x6A826E35A3096ED0(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 5)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 6)
					{
						unk_0x6A826E35A3096ED0(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 7)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 9)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xA434CC17B5517E4E(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4269680.f_67 != 0)
				{
					func_280(Global_4269680.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_265(Global_4269680.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x177AA645FB4B3A38(func_274(Global_4269680.f_67), func_271(Global_4269680.f_67, 1), ((Global_22547 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0xBA269EB4693A8C47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4269680.f_65 > 0)
				{
					if ((unk_0x578C4EF320340AF7() - Global_4269680.f_66) > Global_4269680.f_65)
					{
						StringCopy(&(Global_4269680.f_21), "", 16);
						Global_4269680.f_65 = -1;
					}
				}
			}
			func_262(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0xFCC7EAA298CE7AC2(76, 84);
			unk_0xFFA39C4568552522(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22550.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar66 = Global_22550.f_5218;
			if (Global_22550.f_5729)
			{
				iVar66 = (Global_22550.f_5732 - 1);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0.034722f;
				if (Global_22550.f_5745[iVar6] != 0f)
				{
					fVar54 = Global_22550.f_5745[iVar6];
				}
				if (Global_22550.f_5729)
				{
					iVar6 = Global_22550.f_8038[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22550.f_5738 && iVar9 < Global_22550.f_5225)
				{
					bVar33 = true;
					if (Global_22550.f_5739 == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_22550.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22550.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22547 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_22550.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_22550.f_8409)
					{
						unk_0x28DD484BAEAF8437(Global_22550.f_8408, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0x28DD484BAEAF8437(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0x177AA645FB4B3A38("CommonMenu", "Gradient_Nav", (Global_22547 + (fParam5 * 0.5f)), (((fVar57 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_22550.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22550.f_5226)
				{
					if (unk_0xCE990E643CD9D0E5(Global_22550.f_5089[iVar6], iVar8) || Global_22550.f_5056[iVar8] == 5)
					{
						if (Global_22550.f_5729)
						{
							iVar19 = Global_22550.f_8054[((iVar9 * Global_22550.f_5226) + iVar8)];
							iVar20 = Global_22550.f_8095[((iVar9 * Global_22550.f_5226) + iVar8)];
							iVar21 = Global_22550.f_8136[((iVar9 * Global_22550.f_5226) + iVar8)];
							iVar22 = Global_22550.f_8177[((iVar9 * Global_22550.f_5226) + iVar8)];
							iVar23 = Global_22550.f_8218[((iVar9 * Global_22550.f_5226) + iVar8)];
						}
						else
						{
							Global_22550.f_8054[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar19;
							Global_22550.f_8095[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar20;
							Global_22550.f_8136[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar21;
							Global_22550.f_8177[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar22;
							Global_22550.f_8218[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar23;
						}
						iVar74 = 0;
						bVar53 = false;
						if (Global_22550.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22550.f_6008[0])
							{
								bVar53 = true;
								iVar74 = 0;
							}
						}
						if (Global_22550.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22550.f_6008[1])
							{
								bVar53 = true;
								iVar74 = 1;
							}
						}
						if (Global_22550.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_22547 + 0.0046875f) + Global_22550.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_22550.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_22550.f_5062[iVar8 + 1])
						{
							fVar44 = (Global_22550.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_22547 + Global_22549) - 0.0046875f) - fVar34);
						}
						if ((Global_22550.f_5075[iVar8] && Global_22550.f_5874) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_22550.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22550.f_5729)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_260(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, iVar74, bVar51, bVar50);
											unk_0x456829A212A690D7(&(Global_22550.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6A826E35A3096ED0(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6A826E35A3096ED0(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6A826E35A3096ED0(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x42710E9E08FA375A(Global_22550.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x5BC8B357341A4FEE(Global_22550.f_4175[(iVar21 + iVar27)], Global_22550.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
										{
											fVar41 = unk_0x842CB5919E31EB1F(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_280(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_22550.f_4433[(iVar22 + iVar14)] == 2 || Global_22550.f_4433[(iVar22 + iVar14)] == 51) || Global_22550.f_4433[(iVar22 + iVar14)] == 61)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_22550.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_22550.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar40;
										Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar41;
										Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar42;
										if (Global_22550.f_5083[iVar8] == 2)
										{
											iVar69 = (iVar8 - 1);
											while (iVar69 >= 0)
											{
												if (Global_22550.f_5083[iVar69] == 2)
												{
													Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar69)] = (Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar69)] - Global_22550.f_5068[iVar8]);
												}
												iVar69 = (iVar69 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)];
										fVar41 = Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)];
										fVar42 = Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_280(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_280(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_265(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_274(26), func_271(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_280(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_280(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_265(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_274(27), func_271(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										func_260(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_259(bVar32);
										}
										unk_0x40A75E32D30C605F(&(Global_22550.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6A826E35A3096ED0(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6A826E35A3096ED0(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6A826E35A3096ED0(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x42710E9E08FA375A(Global_22550.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x5BC8B357341A4FEE(Global_22550.f_4175[(iVar21 + iVar27)], Global_22550.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_22550.f_4433[(iVar22 + iVar28)] == 2 || Global_22550.f_4433[(iVar22 + iVar28)] == 51) || Global_22550.f_4433[(iVar22 + iVar28)] == 61)
											{
												if (func_280(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_280(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_265(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_22550.f_5083[iVar8] == 2)
															{
																unk_0x177AA645FB4B3A38(func_274(Global_22550.f_4433[(iVar22 + iVar28)]), func_271(Global_22550.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x177AA645FB4B3A38(func_274(Global_22550.f_4433[(iVar22 + iVar28)]), func_271(Global_22550.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22550.f_5083[iVar8] == 2)
										{
											unk_0xA434CC17B5517E4E(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0xA434CC17B5517E4E((fVar34 + fVar40), fVar35, 0);
											if (func_258() && unk_0x7B70881748D166CD(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_260(0, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0.0185f;
													fVar79 = 0.004f;
													fVar80 = 0.02f;
													unk_0x151E2F6EE4A34CFE(0f, (0.35f * 0.7f));
													unk_0xA11D279671F2289C(255, 255, 255, 150);
													unk_0x8DDE075026DB7EFD((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, floor(fVar76), floor(fVar76), floor(fVar76), floor(fVar77), 0);
													unk_0x40A75E32D30C605F(&cVar75);
													unk_0x42710E9E08FA375A((Global_22550.f_5738 + iVar30));
													unk_0xA434CC17B5517E4E((fVar34 - fVar80), (fVar35 + fVar79), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22550.f_4433[(iVar22 + iVar14)] != 2 && Global_22550.f_4433[(iVar22 + iVar14)] != 51) && Global_22550.f_4433[(iVar22 + iVar14)] != 61)
											{
												if (func_280(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_280(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_265(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_22550.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x177AA645FB4B3A38(func_274(Global_22550.f_4433[(iVar22 + iVar14)]), func_271(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), (Global_22547 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_22550.f_5083[iVar8] == 2)
															{
																unk_0x177AA645FB4B3A38(func_274(Global_22550.f_4433[(iVar22 + iVar14)]), func_271(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x177AA645FB4B3A38(func_274(Global_22550.f_4433[(iVar22 + iVar14)]), func_271(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22550.f_5729)
									{
										func_260(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_259(bVar32);
										}
										unk_0x456829A212A690D7("NUMBER");
										unk_0x42710E9E08FA375A(Global_22550.f_3918[iVar20]);
										fVar41 = unk_0x842CB5919E31EB1F(1);
										fVar40 = 0f;
										if (Global_22550.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_22550.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar40;
										Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)];
										fVar41 = Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_280(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_280(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_265(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_274(26), func_271(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_280(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_280(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_265(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_274(27), func_271(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_260(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
										func_257((fVar34 + fVar40), fVar35, "NUMBER", Global_22550.f_3918[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22550.f_5729)
									{
										func_260(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_259(bVar32);
										}
										unk_0x456829A212A690D7("NUMBER");
										unk_0x5BC8B357341A4FEE(Global_22550.f_4175[iVar21], Global_22550.f_4304[iVar21]);
										fVar41 = unk_0x842CB5919E31EB1F(1);
										fVar40 = 0f;
										if (Global_22550.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_22550.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar40;
										Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)];
										fVar41 = Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_280(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_280(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_265(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_274(26), func_271(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_280(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_280(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_265(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_274(27), func_271(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									func_260(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
									func_256((fVar34 + fVar40), fVar35, "NUMBER", Global_22550.f_4175[iVar21], Global_22550.f_4304[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_280(Global_22550.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22550.f_5729)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_22550.f_5083[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar40;
											Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)];
											fVar42 = Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + iVar8)];
										}
										if (bVar52)
										{
											if (func_280(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22550.f_5083[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_280(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_265(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x177AA645FB4B3A38(func_274(26), func_271(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_280(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_280(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_265(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x177AA645FB4B3A38(func_274(27), func_271(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_280(Global_22550.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_265(Global_22550.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x177AA645FB4B3A38(func_274(Global_22550.f_4433[iVar22]), func_271(Global_22550.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_255(Global_22550.f_4433[iVar22])), (fVar37 * func_255(Global_22550.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_22550.f_5056[iVar8] == 5)
						{
							if (Global_22550.f_5068[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22550.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22550.f_5068[iVar8]);
							if (Global_22550.f_5075[iVar8])
							{
								if (func_280(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22550.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_22550.f_8038[iVar9] = iVar6;
						Global_22550.f_5740 = iVar6;
						iVar9++;
						if (Global_22550.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22550.f_5745[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_22550.f_5745[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0.034722f);
						}
					}
					if (!Global_22550.f_5728)
					{
						Global_22550.f_5485[iVar6] = 1;
						if (Global_22550.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22550.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22550.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22550.f_5728)
			{
				Global_22550.f_5730 = ((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12)));
				Global_22550.f_5733 = iVar11;
				Global_22550.f_5731 = iVar10;
				Global_22550.f_5728 = 1;
			}
		}
		if (!Global_22550.f_5729)
		{
			Global_22550.f_5732 = iVar9;
			Global_22550.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22550.f_5876 = fVar49;
	Global_22550.f_5878 = unk_0x578C4EF320340AF7();
	unk_0x530DC1525CA60B00(Global_22550.f_5876);
	if (!Global_22550.f_8382)
	{
		func_248(0);
	}
	Global_22550.f_8382 = 0;
	if (bParam2)
	{
		unk_0x4CB4237D8858ADA6(10);
	}
	unk_0x4CB4237D8858ADA6(6);
	unk_0x4CB4237D8858ADA6(7);
	unk_0x4CB4237D8858ADA6(9);
	unk_0x4CB4237D8858ADA6(8);
	if (bParam0)
	{
		func_171(1);
	}
	unk_0x5C64FD27DB62AF7A();
}

void func_248(int iParam0)
{
	if (func_254())
	{
		return;
	}
	if (!Global_19681.f_1 == 1)
	{
		if (func_253(0))
		{
			func_249(iParam0);
		}
		unk_0xBE20AB8238688965(&Global_7552, 2);
	}
}

void func_249(int iParam0)
{
	if (func_254())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_252())
		{
			func_251(1, 1);
		}
		else
		{
			func_251(0, 0);
		}
	}
	if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
	{
		unk_0xBE20AB8238688965(&Global_7552, 16);
	}
	if (unk_0x6B12213471F330A3())
	{
		unk_0xBE4122AC23440E7D(false);
	}
	Global_21005 = 5;
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 30);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_7551, 30);
	}
	if (!func_250())
	{
		Global_19681.f_1 = 3;
	}
}

int func_250()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_251(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_253(0))
		{
			Global_19864 = 1;
			if (bParam1)
			{
				unk_0x1F1B1269BB6217F7(&Global_19618);
			}
			Global_19609 = { Global_19627[Global_19626 /*3*/] };
			unk_0x241AFEE3D5B4FF70(Global_19609);
		}
	}
	else if (Global_19864 == 1)
	{
		Global_19864 = 0;
		Global_19609 = { Global_19634[Global_19626 /*3*/] };
		if (bParam1)
		{
			unk_0x241AFEE3D5B4FF70(Global_19618);
		}
		else
		{
			unk_0x241AFEE3D5B4FF70(Global_19609);
		}
	}
}

bool func_252()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

int func_253(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19681.f_1 > 3)
		{
			if (unk_0xCE990E643CD9D0E5(Global_7551, 14))
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
	if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_254()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

float func_255(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_256(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x40A75E32D30C605F(sParam2);
	unk_0x5BC8B357341A4FEE(fParam3, iParam4);
	unk_0xA434CC17B5517E4E(fParam0, fParam1, 0);
}

void func_257(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x40A75E32D30C605F(sParam2);
	unk_0x42710E9E08FA375A(iParam3);
	unk_0xA434CC17B5517E4E(fParam0, fParam1, iParam4);
}

bool func_258()
{
	return unk_0x95C5B896CB42B20E(-1762644250);
}

void func_259(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x28DD484BAEAF8437(Global_22550.f_8410[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x28DD484BAEAF8437(Global_22550.f_8410[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, 255);
}

void func_260(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_261(Global_22550.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x28DD484BAEAF8437(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x28DD484BAEAF8437(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x28DD484BAEAF8437(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xA11D279671F2289C(155, 155, 155, 255);
		}
		else
		{
			unk_0xA11D279671F2289C(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xA11D279671F2289C(0, 0, 0, floor((255f * 0.8f)));
		}
		else
		{
			unk_0x28DD484BAEAF8437(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xA11D279671F2289C(155, 155, 155, 255);
	}
	else
	{
		unk_0xA11D279671F2289C(155, 155, 155, 255);
	}
	unk_0x151E2F6EE4A34CFE(0f, 0.35f);
	unk_0xBC2BD09DB91678C5(1);
	if (bParam5)
	{
		unk_0x151E2F6EE4A34CFE(0f, 0.425f);
		unk_0xE9FEE5ECCAD48813(4);
	}
	else if (bParam6)
	{
		unk_0x151E2F6EE4A34CFE(0f, 0.425f);
		unk_0xE9FEE5ECCAD48813(6);
	}
	else
	{
		unk_0xE9FEE5ECCAD48813(0);
	}
	unk_0x86520D0C56F68D3F(0f, 1f);
	unk_0x9CB19F83A6C8E47F(0);
	unk_0xACADD4647896AEBE(0, 0, 0, 0, 0);
	unk_0xA5C56390CC2323FE(0, 0, 0, 0, 0);
}

void func_261(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_262(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_246(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_282(bParam4, bParam8))
	{
		return;
	}
	if (func_263())
	{
		return;
	}
	if (unk_0xDFAB5E5CBE16E8B1())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_17(unk_0x460153A63B9477BC(), 0))
		{
			return;
		}
	}
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (unk_0x913D69ADE739309E() == 0 || unk_0xDFAB5E5CBE16E8B1())
		{
			return;
		}
	}
	if (Global_22550.f_4769 != 0)
	{
		if (unk_0x628AF533B14EF310(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22550.f_4769)
			{
				if (Global_22550.f_5026[iVar1] != 361)
				{
					StringCopy(&(Global_22550.f_4771[iVar1 /*16*/]), unk_0xED026A379B794F61(2, Global_22550.f_5026[iVar1], true), 64);
				}
				else if (Global_22550.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22550.f_4771[iVar1 /*16*/]), unk_0x32F8D6499042A233(2, Global_22550.f_5039[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_22550.f_4770 = 0;
		}
		if (!Global_22550.f_4770)
		{
			unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x49B9B8101B158AEE((1f - (Global_22550.f_5081 / 100f)));
			unk_0xE1FDD153F5858534();
			if (unk_0xF8EDFF98A9C94C74())
			{
				unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xF1B28F753235CE2A(true);
				unk_0xE1FDD153F5858534();
			}
			iVar1 = 0;
			while (iVar1 < Global_22550.f_4769)
			{
				if (unk_0x856D5567211886A2(&(Global_22550.f_4964[iVar1 /*4*/])) != unk_0x856D5567211886A2("PREV"))
				{
					unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xAD291B8F75D737AD(iVar1);
					func_176(&(Global_22550.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x856D5567211886A2(&(Global_22550.f_4964[iVar2 /*4*/])) == unk_0x856D5567211886A2("PREV"))
					{
						func_176(&(Global_22550.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22550.f_5013[iVar1] == -1)
					{
						func_175(&(Global_22550.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22550.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0xB23270F3D5E62FDE(&(Global_22550.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x7899A951E85F4B28(iVar3, 70);
						}
						else
						{
							unk_0x42710E9E08FA375A(iVar3);
						}
						unk_0x2042E9CA4306F725();
					}
					if (unk_0xF8EDFF98A9C94C74())
					{
						if (Global_22550.f_5026[iVar1] != 361 && unk_0xCE990E643CD9D0E5(Global_22550.f_5052, iVar1))
						{
							unk_0xF1B28F753235CE2A(true);
							unk_0xAD291B8F75D737AD(Global_22550.f_5026[iVar1]);
						}
						else
						{
							unk_0xF1B28F753235CE2A(false);
							unk_0xAD291B8F75D737AD(361);
						}
					}
					unk_0xE1FDD153F5858534();
				}
				iVar1++;
			}
			if (unk_0x856D5567211886A2(&(Global_4269680.f_16)) != unk_0x856D5567211886A2(""))
			{
				unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xAD291B8F75D737AD(Global_22550.f_4769);
				func_176(&Global_4269680);
				if (Global_4269680.f_20 == -1)
				{
					func_175(&(Global_4269680.f_16));
				}
				else
				{
					iVar4 = Global_22550.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0xB23270F3D5E62FDE(&(Global_4269680.f_16));
					if (bParam5)
					{
						unk_0x7899A951E85F4B28(iVar4, 70);
					}
					else
					{
						unk_0x42710E9E08FA375A(iVar4);
					}
					unk_0x2042E9CA4306F725();
				}
				unk_0xE1FDD153F5858534();
			}
			unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xAD291B8F75D737AD(0);
			unk_0xAD291B8F75D737AD(0);
			unk_0xAD291B8F75D737AD(0);
			unk_0xAD291B8F75D737AD(80);
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22550.f_5082)
			{
				unk_0xAD291B8F75D737AD(1);
			}
			else
			{
				unk_0xAD291B8F75D737AD(0);
			}
			unk_0xE1FDD153F5858534();
			Global_22550.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22550.f_4769)
		{
			if (Global_22550.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xAD291B8F75D737AD(iVar1);
					unk_0xB23270F3D5E62FDE(&(Global_22550.f_4964[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x7899A951E85F4B28(iParam2, 70);
					}
					else
					{
						unk_0x42710E9E08FA375A(iParam2);
					}
					unk_0x2042E9CA4306F725();
					unk_0xE1FDD153F5858534();
				}
			}
			iVar1++;
		}
		if (Global_4269680.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xAD291B8F75D737AD(iVar1);
				unk_0xB23270F3D5E62FDE(&(Global_4269680.f_16));
				if (bParam5)
				{
					unk_0x7899A951E85F4B28(iParam2, 70);
				}
				else
				{
					unk_0x42710E9E08FA375A(iParam2);
				}
				unk_0x2042E9CA4306F725();
				unk_0xE1FDD153F5858534();
			}
		}
		unk_0xFCC7EAA298CE7AC2(76, 66);
		unk_0xFFA39C4568552522(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22550.f_8417)
			{
				unk_0x36FA9C099416853E(15, 0f, -0.0375f);
				Global_22550.f_8417 = 1;
			}
		}
		else if (Global_22550.f_8417)
		{
			unk_0x610B4083B1F95914(15);
			Global_22550.f_8417 = 0;
		}
		unk_0x5C64FD27DB62AF7A();
		if (Global_22550.f_5055)
		{
			unk_0xFCC7EAA298CE7AC2(82, 66);
			unk_0xFFA39C4568552522(0f, 0f, 0f, 0f);
			unk_0xE6A03BA84586E67B(Global_22550.f_5660[iVar0 /*10*/], Global_22550.f_5053, Global_22550.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x5C64FD27DB62AF7A();
		}
		else
		{
			unk_0x37FC7E88C7659D33(Global_22550.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

int func_263()
{
	struct<3> Var0;
	
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	if (func_264())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x1F1B1269BB6217F7(&Var0);
		if (Global_19626 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
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

int func_264()
{
	if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_265(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x28DD484BAEAF8437(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			unk_0x28DD484BAEAF8437(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_266(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x28DD484BAEAF8437(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xE9FEE5ECCAD48813(0);
	unk_0x151E2F6EE4A34CFE(0f, 0.35f);
	unk_0x7508E89F04871147(2);
	unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, iVar3);
	unk_0x86520D0C56F68D3F(fParam0, ((Global_22547 + Global_22549) - 0.0046875f));
	unk_0x9CB19F83A6C8E47F(0);
	unk_0xACADD4647896AEBE(0, 0, 0, 0, 0);
	unk_0xA5C56390CC2323FE(0, 0, 0, 0, 0);
}

void func_267(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x40A75E32D30C605F(sParam2);
	unk_0x42710E9E08FA375A(iParam3);
	unk_0x42710E9E08FA375A(iParam4);
	unk_0xA434CC17B5517E4E(fParam0, fParam1, 0);
}

float func_268(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x211E6DB3335430B4(sParam0))
	{
		if (unk_0x856D5567211886A2(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_269();
	unk_0x456829A212A690D7(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	unk_0x42710E9E08FA375A(iParam2);
	return unk_0x842CB5919E31EB1F(1);
}

void func_269()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x28DD484BAEAF8437(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22550.f_8392)
	{
		iVar0 = Global_22550.f_8388;
		iVar1 = Global_22550.f_8389;
		iVar2 = Global_22550.f_8390;
		iVar3 = Global_22550.f_8391;
	}
	unk_0xE9FEE5ECCAD48813(0);
	unk_0x151E2F6EE4A34CFE(0f, 0.35f);
	unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, iVar3);
	unk_0x86520D0C56F68D3F((Global_22547 + 0.0046875f), ((Global_22547 + Global_22549) - 0.0046875f));
	unk_0x9CB19F83A6C8E47F(0);
	unk_0xACADD4647896AEBE(0, 0, 0, 0, 0);
	unk_0xA5C56390CC2323FE(0, 0, 0, 0, 0);
}

void func_270(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x8DDE075026DB7EFD((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_271(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0x7BCC91F3C1CF24E8(&(Global_22550.f_7029[iParam0 /*16*/])))
	{
		if (unk_0x856D5567211886A2(&(Global_22550.f_7029[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_273(unk_0x460153A63B9477BC()) };
			if (unk_0x716812D32AF6C4C0(&Var2, &uVar1))
			{
				return func_272(&uVar1);
			}
		}
		else
		{
			return func_272(&(Global_22550.f_7029[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_272(var uParam0)
{
	return uParam0;
}

struct<13> func_273(int iParam0)
{
	struct<13> Var0;
	
	unk_0x2BDD80E79441BD36(iParam0, &Var0, 13);
	return Var0;
}

char* func_274(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0x7BCC91F3C1CF24E8(&(Global_22550.f_6020[iParam0 /*16*/])))
	{
		if (unk_0x856D5567211886A2(&(Global_22550.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_273(unk_0x460153A63B9477BC()) };
			unk_0x716812D32AF6C4C0(&Var1, &uVar0);
			return func_272(&uVar0);
		}
		else
		{
			return func_272(&(Global_22550.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_275(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_22550.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22550.f_5218 >= 128)
	{
		return;
	}
	if (Global_22550.f_5220 >= 256)
	{
		return;
	}
	if (Global_22550.f_5743 < Global_22550.f_5741)
	{
		return;
	}
	if (Global_22550.f_5218 != iParam0)
	{
		Global_22550.f_5218 = iParam0;
		Global_22550.f_5219 = 0;
	}
	iVar0 = Global_22550.f_5056[Global_22550.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22550.f_5219 < 4 && iVar0 != 1)
		{
			Global_22550.f_5219++;
			iVar0 = Global_22550.f_5056[Global_22550.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]), sParam1, 24);
	if (!unk_0x7BCC91F3C1CF24E8(sParam1) && !unk_0x3030AE9FCF1BC243(sParam1))
	{
	}
	Global_22550.f_1610[Global_22550.f_5220] = bParam3;
	Global_22550.f_1867[Global_22550.f_5220] = iParam4;
	Global_22550.f_5220++;
	if (!bParam3)
	{
		func_278(Global_22550.f_5218, 1);
	}
	else
	{
		func_278(Global_22550.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_277(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]));
		if (Global_22550.f_5075[Global_22550.f_5219])
		{
			func_280(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22550.f_5068[Global_22550.f_5219])
		{
			Global_22550.f_5068[Global_22550.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_276(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]));
			if (fVar4 > Global_22550.f_5745[iParam0])
			{
				Global_22550.f_5745[iParam0] = fVar4;
			}
		}
	}
	unk_0xBE20AB8238688965(&(Global_22550.f_5089[iParam0]), Global_22550.f_5219);
	Global_22550.f_5219++;
	Global_22550.f_5744 = 1;
	Global_22550.f_5742 = (Global_22550.f_5220 - 1);
	Global_22550.f_5743 = 0;
	Global_22550.f_5741 = iParam2;
}

float func_276(char* sParam0)
{
	if (!unk_0x3030AE9FCF1BC243(sParam0))
	{
	}
	return unk_0xBA269EB4693A8C47(0.35f, 0);
}

float func_277(char* sParam0)
{
	if (!unk_0x211E6DB3335430B4(sParam0))
	{
		if (unk_0x856D5567211886A2(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_260(0, 1, 0, 0, 0, 0, 0);
	unk_0x456829A212A690D7(sParam0);
	return unk_0x842CB5919E31EB1F(1);
}

void func_278(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&(Global_22550.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_22550.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_279()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x9DD549AAA043F83A(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_280(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	StringCopy(&cVar0, func_274(iParam0), 64);
	StringCopy(&cVar1, func_271(iParam0, bParam1), 64);
	if (unk_0x856D5567211886A2(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x9DD549AAA043F83A(&iVar2, &iVar3);
			fVar5 = unk_0x8940B46482DD0A7D(0);
			if (func_279())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_279())
			{
				fVar4 = 1f;
			}
			if (unk_0x7B70881748D166CD(joaat("director_mode")) > 0)
			{
				unk_0x8BAB7B3A2C7777A5(&iVar2, &iVar3);
			}
			iVar2 = round((to_float(iVar2) / fVar4));
			iVar3 = round((to_float(iVar3) / fVar4));
		}
		else
		{
			unk_0x8BAB7B3A2C7777A5(&iVar2, &iVar3);
		}
		Var7 = { unk_0x282B86763E4DCFC4(&cVar0, &cVar1) };
		Var7.x = (Var7.x * (func_281(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_281(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.x = (Var7.x - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.x = 288f;
			Var7.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x856D5567211886A2(&(Global_22550.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var7.x = 106f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0xE5EF21F14D0F9D25() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22549)
			{
				*fParam4 = (*fParam4 * (Global_22549 / *fParam3));
				*fParam3 = Global_22549;
			}
		}
		return 1;
	}
	return 0;
}

float func_281(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_282(bool bParam0, bool bParam1)
{
	if (Global_2440049.f_2005.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x87F0CB19476706C3() || (func_284(8, -1) && func_283() != 65)) || (unk_0xCFB49FF4012D7C68() != 0 && !bParam1)) || (unk_0x9CC4D06F5338CA6B() && !bParam0)) || unk_0x954BAB46FBB90036()) || Global_77093) || Global_22550.f_8416) || unk_0x06EBE4F22EC30D45()) || Global_99007.f_1425)
	{
		return 0;
	}
	return 1;
}

int func_283()
{
	return Global_1312830;
}

bool func_284(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377236.f_203[iParam1];
			}
			break;
	}
	return unk_0xCE990E643CD9D0E5(Global_1377236.f_1048, iParam0);
}

void func_285(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xED026A379B794F61(2, iParam0, true);
	if (Global_22550.f_4769 >= 12)
	{
		StringCopy(&Global_4269680, sVar0, 64);
		StringCopy(&(Global_4269680.f_16), sParam1, 16);
		Global_4269680.f_20 = iParam2;
		return;
		return;
	}
	unk_0xD2459066EA58CE43(&(Global_22550.f_5052), Global_22550.f_4769);
	StringCopy(&(Global_22550.f_4771[Global_22550.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22550.f_4964[Global_22550.f_4769 /*4*/]), sParam1, 16);
	Global_22550.f_5013[Global_22550.f_4769] = iParam2;
	Global_22550.f_5026[Global_22550.f_4769] = iParam0;
	Global_22550.f_5039[Global_22550.f_4769] = 32;
	Global_22550.f_4769++;
}

void func_286(char* sParam0)
{
	if (Global_22550.f_4765 >= 3 || Global_22550.f_4762 >= 4)
	{
		return;
	}
	Global_22550.f_4696[Global_22550.f_4762] = 1;
	Global_22550.f_4762++;
	StringCopy(&(Global_22550.f_4713[Global_22550.f_4765 /*16*/]), sParam0, 64);
	Global_22550.f_4765++;
}

void func_287(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_22550.f_4690), sParam0, 24);
	Global_22550.f_4762 = 0;
	Global_22550.f_4763 = 0;
	Global_22550.f_4764 = 0;
	Global_22550.f_4765 = 0;
	Global_22550.f_4766 = iParam1;
	Global_22550.f_4767 = unk_0x578C4EF320340AF7();
	Global_22550.f_4768 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_4696[iVar0] = 0;
		iVar0++;
	}
}

void func_288(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_22550.f_5739 = iParam0;
	Global_22550.f_5874 = iParam2;
	if (Global_22550.f_5739 < Global_22550.f_5738)
	{
		Global_22550.f_5738 = Global_22550.f_5739;
	}
	else if ((Global_22550.f_5729 && Global_22550.f_5739 > Global_22550.f_5740) || (!Global_22550.f_5729 && Global_22550.f_5739 >= (Global_22550.f_5738 + Global_22550.f_5225)))
	{
		iVar0 = Global_22550.f_5738;
		while (iVar0 <= Global_22550.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22550.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22550.f_5225 && Global_22550.f_5738 < 128)
		{
			Global_22550.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22550.f_5738;
			while (iVar0 <= Global_22550.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22550.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22550.f_5728 = 0;
	Global_22550.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22550.f_4690), "", 24);
		StringCopy(&(Global_4269680.f_21), "", 16);
	}
}

void func_289(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_22550.f_1), sParam0, 16);
	Global_22550.f_68 = 0;
	Global_22550.f_69 = 0;
	Global_22550.f_70 = 0;
	Global_22550.f_71 = 0;
	Global_22550.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_290(int iParam0, char* sParam1, char* sParam2)
{
	Global_22550 = iParam0;
	func_291(29, sParam1, sParam2);
}

void func_291(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22550.f_6020[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_22550.f_7029[iParam0 /*16*/]), sParam2, 64);
}

void func_292(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22550.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22550.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2462791[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22550.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22550.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22550.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22550.f_5089[iVar0] = 0;
		Global_22550.f_5227[iVar0] = 0;
		Global_22550.f_5356[iVar0] = 0;
		Global_22550.f_5879[iVar0] = 0f;
		Global_22550.f_5485[iVar0] = 0;
		Global_22550.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22550.f_5056[iVar0] = 0;
		Global_22550.f_5068[iVar0] = 0f;
		Global_22550.f_5062[iVar0] = -1f;
		Global_22550.f_5075[iVar0] = 0;
		Global_22550.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22550.f_4964[iVar0 /*4*/]), "", 16);
		Global_22550.f_5013[iVar0] = -1;
		Global_22550.f_5026[iVar0] = 361;
		Global_22550.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22550.f_6020[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_22550.f_7029[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22550.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4269680.f_16), "", 16);
	Global_4269680.f_20 = -1;
	Global_22550 = 0;
	Global_22550.f_5218 = 0;
	Global_22550.f_5219 = 0;
	Global_22550.f_5220 = 0;
	Global_22550.f_5222 = 0;
	Global_22550.f_5223 = 0;
	Global_22550.f_5224 = 0;
	Global_22550.f_5221 = 0;
	Global_22550.f_5874 = 0;
	Global_22550.f_6014 = 0;
	Global_22550.f_5739 = 0;
	Global_22550.f_5738 = 0;
	Global_22550.f_5740 = 0;
	StringCopy(&(Global_22550.f_4690), "", 24);
	Global_22550.f_4762 = 0;
	Global_22550.f_4763 = 0;
	Global_22550.f_4764 = 0;
	Global_22550.f_4765 = 0;
	Global_22550.f_4766 = 0;
	Global_22550.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22550.f_4768 = 0;
	StringCopy(&(Global_4269680.f_21), "", 16);
	Global_4269680.f_61 = 0;
	Global_4269680.f_62 = 0;
	Global_4269680.f_63 = 0;
	Global_4269680.f_64 = 0;
	Global_4269680.f_65 = 0;
	Global_4269680.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4269680.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4269680.f_67 = 0;
	StringCopy(&(Global_22550.f_1), "", 16);
	Global_22550.f_5074 = 0f;
	Global_22550.f_68 = 0;
	Global_22550.f_69 = 0;
	Global_22550.f_70 = 0;
	Global_22550.f_71 = 0;
	Global_22550.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22550.f_5744 = 0;
	Global_22550.f_5743 = 0;
	Global_22550.f_5741 = 0;
	Global_22550.f_5742 = 0;
	Global_22550.f_4769 = 0;
	Global_22550.f_4770 = 0;
	Global_22550.f_5225 = 10;
	Global_22550.f_5226 = 0;
	Global_22550.f_5876 = 0f;
	Global_22550.f_5877 = 0f;
	Global_22550.f_5728 = 0;
	Global_22550.f_5729 = 0;
	Global_22550.f_5730 = 0f;
	Global_22550.f_5731 = 0;
	Global_22550.f_5733 = 0;
	Global_22550.f_5732 = 0;
	Global_22550.f_5734 = 0;
	Global_22550.f_5735 = 0;
	Global_22550.f_5736 = 0;
	Global_22550.f_5737 = 0;
	Global_22550.f_8413 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22550.f_6008[iVar0] = -1;
		Global_22550.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22550.f_5081 = 0f;
	Global_22550.f_5052 = 0;
	Global_22550.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22550.f_6015)
	{
		Global_22550.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22550.f_8392 = 0;
	Global_22550.f_8387 = 0;
	Global_22550.f_8397 = 0;
	Global_22550.f_8402 = 0;
	Global_22550.f_8407 = 0;
	Global_22550.f_8409 = 0;
	Global_22550.f_8415 = 0;
	Global_22547 = 0.05f;
	Global_22548 = 0.05f;
	Global_22549 = 0.225f;
	fVar2 = unk_0x8940B46482DD0A7D(0);
	if (bParam0)
	{
		Global_22549 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22549 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22549 = 0.225f;
	}
}

bool func_293(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_246(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22550.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x7BCC91F3C1CF24E8(&(Global_22550.f_5635[iVar0 /*4*/])))
	{
		unk_0xBAA4D421B8B8A744(&(Global_22550.f_5635[iVar0 /*4*/]), 9);
		Global_22550.f_5628[iVar0] = 1;
		if (!unk_0xD77C5A1792C02DA1(&(Global_22550.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x494D5FF88119CDC0("CommonMenu", false);
	Global_22550.f_5614[iVar0] = 1;
	if (!unk_0xC7F5A2E99D75A65C("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x494D5FF88119CDC0("MPShopSale", false);
		Global_22550.f_5621[iVar0] = 1;
		if (!unk_0xC7F5A2E99D75A65C("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22550.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_294(&(Global_22550.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_294(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x95EF219D38B20CFF(*uParam0))
			{
				*uParam0 = unk_0x5DEA4192B46CB99B(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x95EF219D38B20CFF(*uParam0))
					{
						uParam0->f_8 = unk_0x578C4EF320340AF7();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x578C4EF320340AF7();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x95EF219D38B20CFF(*uParam0))
			{
				uParam0->f_8 = unk_0x578C4EF320340AF7();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x95EF219D38B20CFF(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_295(int iParam0)
{
	Local_131[unk_0x460153A63B9477BC() /*8*/].f_3 = iParam0;
	Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 = func_382(iParam0);
}

bool func_296()
{
	return Global_4265545 == 1;
}

void func_297(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (unk_0x4F315B95B1461ED4())
		{
			unk_0xFF8E7A064055ECA6(false);
		}
	}
	if (func_306())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!unk_0x25DDB354A40FFCDB())
	{
		iVar0 = iParam2;
		unk_0xDDEDC06C88DA4E04(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || unk_0xFC559366953F62B3())
		{
			bVar1 = false;
		}
		if (!func_187())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (unk_0x166E920FB00B2DBB(iParam0) && (unk_0x5A228A6A51E757C8(iParam0) || iParam3 == 1))
		{
			if (iParam3 && unk_0xA59F96B50B97E63C(unk_0x1FA7B77001D60F9D(iParam0), 0))
			{
				return;
			}
			iVar27 = unk_0x1FA7B77001D60F9D(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && unk_0x25DDB354A40FFCDB())
				{
					unk_0x9675999D57D9F953(1);
				}
				else if (bVar14 || (!func_17(unk_0x460153A63B9477BC(), 0) && !func_305()))
				{
					unk_0x80250B8368A4E611(iVar27, !bVar14, 0);
				}
				if (!bVar14)
				{
					if (unk_0x25DDB354A40FFCDB() && !bVar19)
					{
						unk_0x9675999D57D9F953(0);
					}
					Global_2425869[iParam0 /*443*/].f_248 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_302(0, 0, 0);
					if (bVar25)
					{
						unk_0x701364DD9F501826();
					}
				}
				if (!func_301(iVar27) && !unk_0xEB1D872D96DDA8E2(iVar27))
				{
					if (!bVar22)
					{
						unk_0x58ADF88C51AAFDC5(iVar27, true, 0);
					}
				}
				if (!unk_0xB77B1396EAA80D8F(iVar27))
				{
					if (!bVar21)
					{
						unk_0x6A8F948698B360B4(iVar27, false);
					}
					unk_0x7C47E49129337557(iVar27, 1);
				}
				else if (!bVar21)
				{
					unk_0x6A8F948698B360B4(iVar27, false);
				}
				unk_0x0DC39BE87E4C5599(iVar27, true);
				unk_0xBF70D1B666A353F5(iParam0, 0);
				unk_0x330ACDACFF26728A(iParam0, 0);
				if (unk_0x36E2FC4B39D3018D(iVar27) && unk_0x51E339346E2220A4(iVar27))
				{
					unk_0x46468389F464E317(iVar27);
				}
				unk_0x4478D8ED4673EF14(iVar27, 1);
				if (unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()) == 0)
				{
					func_300();
					func_299();
				}
				if (unk_0x5C6122477A723551())
				{
					if (!bVar23)
					{
					}
				}
				if (unk_0xE9159DB182CF0841())
				{
				}
				Global_2425869[iParam0 /*443*/].f_249 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405074.f_2674)
				{
					Global_2405074.f_2674 = 0;
				}
			}
			else
			{
				if (!func_301(iVar27) && !unk_0xEB1D872D96DDA8E2(iVar27))
				{
					if (!bVar22)
					{
						unk_0x58ADF88C51AAFDC5(iVar27, !bVar15, 0);
					}
					if (!unk_0xB77B1396EAA80D8F(iVar27))
					{
						if (!bVar21)
						{
							unk_0x6A8F948698B360B4(iVar27, bVar16);
						}
						if (!bVar16)
						{
							unk_0x7C47E49129337557(iVar27, 1);
						}
					}
					if (func_298(Global_4456448.f_129348))
					{
						unk_0x6A8F948698B360B4(iVar27, true);
					}
				}
				if (Global_1312872)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					unk_0xBF70D1B666A353F5(iParam0, 0);
				}
				else
				{
					unk_0xBF70D1B666A353F5(iParam0, 1);
				}
				unk_0x0DC39BE87E4C5599(iVar27, bVar17);
				if (bVar3)
				{
					if (!unk_0x5A898C4DF17FB664(iVar27) && !unk_0x47DBF174A0CB9D55(iVar27, 0))
					{
						unk_0x2BB0EF9DE445EA13(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			unk_0xDDEDC06C88DA4E04(iParam0, bParam1, iVar28);
		}
	}
}

bool func_298(int iParam0)
{
	return iParam0 == 17;
}

void func_299()
{
	struct<3> Var0;
	
	Global_2440049.f_1344 = 0;
	Global_2440049.f_1345 = 0;
	Global_2440049.f_1346 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2440049.f_1351 = -1;
	Global_2440049.f_1352 = 0;
	Global_2405074.f_2685 = { Var0 };
}

void func_300()
{
	Global_2405074.f_696 = 0;
	Global_2405074.f_2728 = 0;
	Global_2405074.f_512 = 0;
	Global_2405074.f_601 = 0;
	Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_211 = 0;
	Global_2405074.f_2683 = 0;
}

int func_301(int iParam0)
{
	int iVar0;
	
	if (unk_0x47DBF174A0CB9D55(iParam0, 1))
	{
		return 1;
	}
	else
	{
		iVar0 = unk_0x16BC17A8EDC701A2(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_302(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xA59F96B50B97E63C(iParam1, 0))
	{
	}
	if (iParam0 == 1)
	{
		if (unk_0xAE06B9E39EBDE049(iParam1))
		{
			if (unk_0xD0390A93AF3907B8(iParam1))
			{
				if (!unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), unk_0xE4400E48E081F17A(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (iParam0 == 1)
			{
				func_304();
			}
			else if (!unk_0xCE990E643CD9D0E5(Global_2359302.f_67, 1))
			{
				if (unk_0xCE990E643CD9D0E5(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						unk_0x80610B7EA03DE232(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				unk_0xBE20AB8238688965(&(Global_2359302.f_67), 1);
			}
		}
		if (func_17(unk_0x460153A63B9477BC(), 0))
		{
			unk_0x80B3C69DE260B92D(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xE86692F29AFB9043(iParam0, iParam1);
		}
		unk_0x0F9CBC63296852FD(iParam0, iParam1);
		func_303(joaat("MPPLY_IS_CHAR_SPECTATING"), iParam0);
	}
}

void func_303(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBD9D9E72ABB288E4(iVar0, iParam1, 1);
	}
}

void func_304()
{
	int iVar0;
	
	if (!unk_0x509C03DADAEE0A94())
	{
		if (!unk_0xCE990E643CD9D0E5(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = unk_0xF7B3A1430308F92B(iVar0);
				iVar0++;
			}
			unk_0xBE20AB8238688965(&(Global_2359302.f_67), 2);
			unk_0xBE20AB8238688965(&(Global_2359302.f_67), 0);
		}
	}
}

bool func_305()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

int func_306()
{
	if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_35 && !Global_2452679.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_307()
{
	Global_2440049.f_1267.f_10 = 1;
}

void func_308(var uParam0)
{
	int iVar0;
	
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = func_309(*uParam0);
	if (iVar0 == -1)
	{
		*uParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/])
		{
			Global_42356[iVar0 /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}
	*uParam0 = -1;
}

int func_309(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_310(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_309(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!unk_0x5A228A6A51E757C8(unk_0x2639A2323BEA8CC6()))
	{
		return 0;
	}
	if (func_253(0))
	{
		return 0;
	}
	if (unk_0x3EBB66F936A3436E())
	{
		return 0;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/] == 1 && Global_42356[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_42356[iVar0 /*32*/].f_29)
				{
					return 0;
				}
			}
			Global_42356[iVar0 /*32*/].f_5 = 1;
			Global_42356[iVar0 /*32*/].f_29 = 1;
			return 1;
		}
		else
		{
			if (Global_42356[iVar0 /*32*/] == 0)
			{
			}
			if (Global_42356[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

bool func_311(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 26);
}

void func_312(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	int iVar0;
	
	if (unk_0x7B70881748D166CD(joaat("context_controller")) < 1)
	{
	}
	if (unk_0x9CC4D06F5338CA6B())
	{
		if (!*uParam0 == -1)
		{
			func_308(uParam0);
		}
		return;
	}
	if (!*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_42356[iVar0 /*32*/])
		{
			Global_42356[iVar0 /*32*/] = 1;
			Global_42356[iVar0 /*32*/].f_1 = Global_42557;
			Global_42557++;
			Global_42356[iVar0 /*32*/].f_4 = 0;
			Global_42356[iVar0 /*32*/].f_29 = 0;
			Global_42356[iVar0 /*32*/].f_5 = 0;
			Global_42356[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_42356[iVar0 /*32*/].f_8), sParam2, 16);
			Global_42356[iVar0 /*32*/].f_6 = iParam3;
			Global_42356[iVar0 /*32*/].f_31 = unk_0x354AD085195C5FA6();
			Global_42356[iVar0 /*32*/].f_7 = 0;
			Global_42356[iVar0 /*32*/].f_3 = iParam5;
			if (!unk_0x7BCC91F3C1CF24E8(sParam4))
			{
				Global_42356[iVar0 /*32*/].f_12 = 1;
				StringCopy(&(Global_42356[iVar0 /*32*/].f_13), sParam4, 64);
				Global_42356[iVar0 /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_42356[iVar0 /*32*/].f_12 = 0;
				Global_42356[iVar0 /*32*/].f_30 = 0;
			}
			*uParam0 = Global_42356[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_313(int iParam0)
{
	if (func_314(iParam0, 1))
	{
		return Global_1630317[func_323() /*595*/].f_11.f_423;
	}
	return -1;
}

bool func_314(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_315(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_419();
}

int func_315(int iParam0)
{
	if (iParam0 != func_419())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_419())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_316()
{
	if (((((((((func_332("BJACK_USED") || func_332("CAS_MG_CBAN")) || func_332("CAS_MG_CTIME")) || func_319("CAS_MG_MEMB2", func_320(1))) || func_332("CAS_MG_SUITE2")) || func_332("CAS_MG_NOCHIPS2")) || func_332("CAS_MG_LOWCHIPS2")) || func_332("CAS_MG_NOCHIPS6")) || func_332("CAS_MG_LOWCHIPS6")) || func_332("BJACK_NA"))
	{
		return 1;
	}
	return 0;
}

void func_317()
{
	if (!unk_0x6914A85D2E17013B(func_320(0), false, true, 0, -1, 0))
	{
		func_208("MAITRD_M_D0E", -1);
	}
	else if (func_321(unk_0x460153A63B9477BC()))
	{
	}
	else if (unk_0xCE990E643CD9D0E5(Global_1678288.f_5, 31))
	{
	}
	else if (Global_4265545 != 0)
	{
	}
	else
	{
		unk_0xBE20AB8238688965(&(Global_1678288.f_5), 30);
	}
}

void func_318(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	unk_0x1A169149B3D18FCB(0, 1, true, -1);
}

bool func_319(char* sParam0, int iParam1)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

int func_320(bool bParam0)
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

bool func_321(int iParam0)
{
	if (iParam0 == func_419())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_369.f_1, 18);
}

bool func_322()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_369.f_1, 18);
}

int func_323()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11;
}

bool func_324(bool bParam0)
{
	return func_314(unk_0x460153A63B9477BC(), bParam0);
}

int func_325(int iParam0)
{
	if (iParam0 != func_419())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_369 != 0;
	}
	return 0;
}

int func_326()
{
	if (func_329() <= 0)
	{
		return 0;
	}
	if (func_328() <= 0)
	{
		return 1;
	}
	if (func_327())
	{
		return 2;
	}
	return 3;
}

bool func_327()
{
	return Global_1696929 != 0;
}

int func_328()
{
	return (Global_262145.f_26471 + func_115());
}

int func_329()
{
	return (Global_262145.f_26472 - func_115());
}

bool func_330()
{
	return func_326() != 3;
}

void func_331(char* sParam0)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 1, true, -1);
}

bool func_332(char* sParam0)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

int func_333(int iParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = -850297695;
			break;
		
		case 1:
			iVar0 = 1316161270;
			break;
		
		case 2:
			iVar0 = 1023703758;
			break;
		
		case 5:
			iVar0 = 1045499606;
			break;
		
		case 3:
			iVar0 = 1697066635;
			break;
		
		case 4:
			iVar0 = 1144169546;
			break;
	}
	if (!unk_0x13FA75E7125B8A33(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_334()
{
	return unk_0xCFB49FF4012D7C68() != 0;
}

int func_335()
{
	if (Global_4254512.f_910 == 1)
	{
		return 1;
	}
	return 0;
}

void func_336()
{
	if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_3 != -1)
	{
		Local_132.f_232 = 0;
		Local_132.f_233 = 0;
		Local_132.f_235 = 0;
		Local_132.f_252 = 0;
		Local_131[unk_0x460153A63B9477BC() /*8*/] = 0;
		Local_131[unk_0x460153A63B9477BC() /*8*/].f_1 = 0;
		Local_131[unk_0x460153A63B9477BC() /*8*/].f_2 = 0;
		Local_131[unk_0x460153A63B9477BC() /*8*/].f_3 = -1;
		Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 = -1;
		Local_131[unk_0x460153A63B9477BC() /*8*/].f_5 = 0;
	}
}

bool func_337()
{
	return Global_2540384.f_6662;
}

int func_338()
{
	if (((func_339() != -1 && func_339() != 28) && func_339() != 17) && func_339() != 12)
	{
		return 1;
	}
	return 0;
}

int func_339()
{
	return Global_968397;
}

bool func_340()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787.f_2, 11);
}

bool func_341()
{
	return Global_2451787.f_689;
}

int func_342(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	iVar0 = func_344(iParam0);
	iVar1 = func_343(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_42588[iVar1 /*5*/].f_3;
}

int func_343(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_42588[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_344(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_42588[iVar0 /*5*/].f_1)
		{
			return Global_42588[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

int func_345()
{
	int iVar0;
	
	if (func_314(unk_0x460153A63B9477BC(), 1))
	{
		iVar0 = func_323();
		if (func_20(iVar0, 1, 1) && unk_0xCE990E643CD9D0E5(Global_1590682[iVar0 /*883*/].f_274.f_369.f_3, 6))
		{
			return 1;
		}
		if ((func_350(unk_0x460153A63B9477BC(), 0) && func_348(unk_0x460153A63B9477BC())) || func_346(unk_0x460153A63B9477BC()))
		{
			return 1;
		}
	}
	return 0;
}

int func_346(int iParam0)
{
	if (func_347(iParam0) != func_419())
	{
		return func_347(iParam0) == func_212(iParam0);
	}
	return 0;
}

int func_347(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_35;
}

int func_348(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_349(iParam0, 9);
	}
	return 0;
}

bool func_349(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_350(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_351()
{
	if (func_425(unk_0x460153A63B9477BC()) && func_420() != func_419())
	{
		if ((unk_0xCE990E643CD9D0E5(Global_2425869[func_420() /*443*/].f_314.f_4, 1) || unk_0xCE990E643CD9D0E5(Global_1678288.f_6, 10)) || Global_2425869[func_420() /*443*/].f_442 != Global_1696913)
		{
			return 0;
		}
	}
	return 1;
}

bool func_352(int iParam0, struct<3> Param1, float fParam2)
{
	return func_353(unk_0x3E4D3CCC220BDFB1(iParam0, 1), unk_0xEF7858F25585F853(iParam0), Param1, fParam2);
}

bool func_353(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	float fVar1;
	
	Var0 = { unk_0x1BAE5C94E38E44FE(0f, 0f, 0f, fParam1, 0f, 1f, 0f) };
	fVar1 = func_354(func_355(Var0), func_355(Param2 - Param0));
	return unk_0x8B79DA7BA972578F(fVar1) <= fParam3;
}

float func_354(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_355(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = vmag(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

Vector3 func_356(int iParam0)
{
	if (Local_132.f_257 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return 966.9982f, 31.2594f, 116.2281f;
			
			case 1:
				return 966.8203f, 31.9305f, 116.2222f;
			
			case 2:
				return 967.2217f, 32.4899f, 116.2216f;
			
			case 3:
				return 967.8962f, 32.6604f, 116.218f;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 1148.367f, 269.0835f, -51.7879f;
			
			case 1:
				return 1148.345f, 269.7643f, -51.7876f;
			
			case 2:
				return 1148.821f, 270.2321f, -51.7708f;
			
			case 3:
				return 1149.495f, 270.2401f, -51.7632f;
			
			case 4:
				return 1152.317f, 267.4195f, -51.8003f;
			
			case 5:
				return 1152.337f, 266.7202f, -51.7913f;
			
			case 6:
				return 1151.849f, 266.2183f, -51.7916f;
			
			case 7:
				return 1151.182f, 266.2501f, -51.7864f;
			
			case 8:
				return 1128.713f, 262.8658f, -51.0035f;
			
			case 9:
				return 1129.446f, 262.8649f, -51.0121f;
			
			case 10:
				return 1129.932f, 262.3822f, -51.0027f;
			
			case 11:
				return 1129.899f, 261.6921f, -51.0422f;
			
			case 12:
				return 1143.738f, 247.8562f, -51.034f;
			
			case 13:
				return 1144.459f, 247.8673f, -51.0229f;
			
			case 14:
				return 1144.951f, 247.3612f, -51.015f;
			
			case 15:
				return 1144.913f, 246.663f, -51.0236f;
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_357(int iParam0, struct<3> Param1, float fParam2)
{
	return vdist2(unk_0x3E4D3CCC220BDFB1(iParam0, 1), Param1) <= (fParam2 * fParam2);
}

Vector3 func_358(int iParam0)
{
	int iVar0;
	
	if (Local_132.f_257 == 1)
	{
		if (func_420() != func_419())
		{
			iVar0 = unk_0x5BBA0055476D633A(func_70(func_382(iParam0)), 1f, func_218(Global_2425869[func_420() /*443*/].f_442), 0, 0, 0);
		}
	}
	else if (func_382(iParam0) == 0 || func_382(iParam0) == 1)
	{
		iVar0 = unk_0x5BBA0055476D633A(func_70(func_382(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01"), 0, 0, 0);
	}
	else
	{
		iVar0 = unk_0x5BBA0055476D633A(func_70(func_382(iParam0)), 1f, joaat("vw_prop_casino_blckjack_01b"), 0, 0, 0);
	}
	if (unk_0xAE06B9E39EBDE049(iVar0) && unk_0xEE37CF67E6E839EA(iVar0))
	{
		switch (iParam0)
		{
			case 0:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_04"));
			
			case 1:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_03"));
			
			case 2:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_02"));
			
			case 3:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_01"));
			
			case 4:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_04"));
			
			case 5:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_03"));
			
			case 6:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_02"));
			
			case 7:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_01"));
			
			case 8:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_04"));
			
			case 9:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_03"));
			
			case 10:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_02"));
			
			case 11:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_01"));
			
			case 12:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_04"));
			
			case 13:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_03"));
			
			case 14:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_02"));
			
			case 15:
				return unk_0xB4B055AEC4A3D847(iVar0, unk_0x0724529FC474C803(iVar0, "Chair_Base_01"));
			}
		
		default:
	}
	return 0f, 0f, 0f;
}

bool func_359(int iParam0)
{
	return Global_99007.f_350 == iParam0;
}

void func_360(int iParam0)
{
	Local_132.f_1 = iParam0;
}

void func_361(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	func_213(&(Local_131[iParam0 /*8*/]), 0);
	Local_131[iParam0 /*8*/].f_6.f_1 = -1;
}

int func_362()
{
	int iVar0;
	
	if (Local_132.f_257 == 1)
	{
		if (!unk_0xAE06B9E39EBDE049(Local_132.f_537))
		{
			if (func_420() != func_419())
			{
				iVar0 = func_218(Global_2425869[func_420() /*443*/].f_442);
				unk_0x78FCB2E22C41B9D5(iVar0);
				if (!unk_0x7D167B9A0CCDA347(iVar0))
				{
					return 0;
				}
				Local_132.f_537 = unk_0x79CC07752E7432A1(iVar0, func_70(0), 0, false, 1);
				unk_0xCBF81D3222C77066(Local_132.f_537, func_70(0), 0, 0, 1);
				unk_0xE922BAA80E8F9324(Local_132.f_537, func_69(0));
				unk_0xEA7F43E3A860E22C(Local_132.f_537, func_363(func_420()));
				unk_0x6A8F948698B360B4(Local_132.f_537, true);
				unk_0x74528AC0906CBABE(iVar0);
			}
		}
		else
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

int func_363(int iParam0)
{
	if (func_366(iParam0))
	{
		return 1;
	}
	else if (func_365(iParam0))
	{
		return 2;
	}
	else if (func_364(iParam0))
	{
		return 3;
	}
	return 1;
}

int func_364(int iParam0)
{
	if (iParam0 != func_419())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_369.f_1, 21);
	}
	return 0;
}

int func_365(int iParam0)
{
	if (iParam0 != func_419())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_369.f_1, 20);
	}
	return 0;
}

int func_366(int iParam0)
{
	if (iParam0 != func_419())
	{
		return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_369.f_1, 19);
	}
	return 0;
}

void func_367(var uParam0, bool bParam1, bool bParam2)
{
	if (unk_0x25DDB354A40FFCDB() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = unk_0x6CAAB7E78B5D978A();
		}
		else
		{
			*uParam0 = unk_0x29B9AF1CB5B8175D();
		}
	}
	else
	{
		*uParam0 = unk_0x578C4EF320340AF7();
	}
	uParam0->f_1 = 1;
}

int func_368()
{
	if (Global_2440049.f_1267.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_369(var uParam0)
{
	switch (uParam0->f_6)
	{
		case 0:
			break;
		
		case 1:
			if ((func_372(unk_0x460153A63B9477BC(), 1) || func_372(unk_0x460153A63B9477BC(), 2)) || func_371())
			{
				func_213(uParam0, 3);
			}
			break;
		
		case 2:
			if ((func_372(unk_0x460153A63B9477BC(), 1) || func_372(unk_0x460153A63B9477BC(), 2)) || func_371())
			{
				func_213(uParam0, 3);
			}
			break;
		
		case 3:
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
			if (func_370())
			{
				func_213(uParam0, 8);
			}
			break;
		
		case 8:
			break;
	}
}

int func_370()
{
	if ((((func_372(unk_0x460153A63B9477BC(), 4) || func_372(unk_0x460153A63B9477BC(), 5)) || func_372(unk_0x460153A63B9477BC(), 6)) || func_372(unk_0x460153A63B9477BC(), 7)) || func_371())
	{
		return 1;
	}
	return 0;
}

int func_371()
{
	if (func_65(&(Local_132.f_1580), 3500, 0))
	{
		func_63(&(Local_132.f_1580));
		return 1;
	}
	return 0;
}

bool func_372(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Local_122.f_1477[iParam0], iVar0);
}

void func_373(int iParam0, int iParam1)
{
	Global_22411.f_9 = iParam0;
	Global_22411.f_10 = iParam1;
}

void func_374(bool bParam0)
{
	if (bParam0)
	{
		func_375(1);
		func_249(1);
	}
	if (!unk_0x689B0FFC8081E57F() && !unk_0xF0C12886E5C1B20E())
	{
		unk_0x7A242994FB80B8A6();
		unk_0xABAEEAE8870E046D(0);
		unk_0x78BD44DB7D1A8D59(1);
		unk_0x779660A9E5364C4D(2, 200, 1);
		unk_0x779660A9E5364C4D(2, 199, 1);
		unk_0x26A60F42A1132477(0, 200);
		unk_0x26A60F42A1132477(2, 200);
		unk_0x26A60F42A1132477(0, 199);
		unk_0x26A60F42A1132477(2, 199);
		unk_0x26A60F42A1132477(0, 201);
		unk_0x26A60F42A1132477(0, 202);
		unk_0x26A60F42A1132477(0, 187);
	}
}

void func_375(bool bParam0)
{
	if (bParam0)
	{
		if (func_340())
		{
			Global_2451787.f_40 = 1;
		}
	}
	else
	{
		Global_2451787.f_40 = 0;
	}
}

void func_376(bool bParam0)
{
	char* sVar0;
	
	if (Local_132.f_1 > 2 && unk_0xF7B3A1430308F92B(0) != 4)
	{
		if (((((!func_381() && !func_380()) && !func_379()) && !func_378()) && !func_81(unk_0x460153A63B9477BC())) && !unk_0x5C6122477A723551())
		{
			func_297(unk_0x460153A63B9477BC(), 1, 0, 0);
		}
		func_243();
	}
	if (Local_132.f_1 > 2)
	{
		func_243();
	}
	if (unk_0xCE990E643CD9D0E5(Local_132.f_250, 0))
	{
		sVar0 = "CasinoUI_Cards_Blackjack";
		if ((func_382(Local_132.f_247) == 2 || func_382(Local_132.f_247) == 3) || func_425(unk_0x460153A63B9477BC()))
		{
			sVar0 = "CasinoUI_Cards_Blackjack_High";
		}
		func_244(1, -1);
		unk_0x2DDA2C702A92866E(sVar0);
		iLocal_142 = 1;
		Local_132.f_250 = 0;
	}
	if (unk_0x40397A9A17EEC1C5(Local_132.f_242))
	{
		unk_0x3ED9330214992278(false, 0, 3000, 1, 0, 0);
		unk_0xB8B0F7C8C1548C5B(Local_132.f_242, 0);
		bLocal_143 = false;
		iLocal_144 = 0;
	}
	if (Local_132.f_259 != -1)
	{
		func_308(&(Local_132.f_259));
		Local_132.f_259 = -1;
	}
	Local_132.f_244 = 0;
	Local_132.f_253 = 0;
	Local_132.f_252 = 0;
	Local_132.f_232 = 0;
	Local_132.f_233 = 0;
	Local_132.f_234 = 0;
	Local_132.f_235 = 0;
	Local_132.f_243 = 0;
	Local_131[unk_0x460153A63B9477BC() /*8*/].f_5 = 0;
	if (!bParam0)
	{
		func_336();
	}
	Local_138.f_4 = func_402();
	Local_138.f_5 = func_190(&uLocal_135, 0, 0);
	if (Local_132.f_1 > 2)
	{
		if (Global_262145.f_26114)
		{
			unk_0x78E09F6BE93AFF7F(&Local_138);
		}
	}
	if (bParam0)
	{
		Local_132.f_255 = unk_0xAA579EC5104BFDA9(func_358(Local_132.f_247), func_217(Local_132.f_247), 2, false, false, 1065353216, 0, 1065353216);
		unk_0x54D6514F20DE2E13(unk_0x9B0761B4C3EB8BC7(), Local_132.f_255, func_216(), func_377(Local_132.f_247), 2f, -2f, 13, 16, 1148846080, 0);
		unk_0xB88AF19828BF16ED(Local_132.f_255);
	}
	if (!bParam0)
	{
		unk_0xD2459066EA58CE43(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_4), 2);
	}
	if (bParam0 || Local_132.f_1 > 2)
	{
		func_236();
	}
	func_360(10);
	func_165(0);
}

char* func_377(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 4:
		case 5:
		case 8:
		case 9:
		case 12:
		case 13:
			return "sit_exit_left";
		
		default:
	}
	return "sit_exit_left";
}

int func_378()
{
	if (unk_0x7B70881748D166CD(joaat("maintransition")) > 0)
	{
		return 1;
	}
	return 0;
}

bool func_379()
{
	return Global_1312896;
}

int func_380()
{
	if (func_188() == 3 || func_188() == 2)
	{
		return 1;
	}
	return 0;
}

int func_381()
{
	if (func_188() == 1 || func_188() == 4)
	{
		return 1;
	}
	return 0;
}

int func_382(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 0;
		
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
		
		case 8:
		case 9:
		case 10:
		case 11:
			return 2;
		
		case 12:
		case 13:
		case 14:
		case 15:
			return 3;
		
		default:
	}
	return 0;
}

void func_383()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<3> Var8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	if (((func_359(1581559923) || func_359(272405600)) || func_425(unk_0x460153A63B9477BC())) && !func_401())
	{
		iLocal_140 = 1;
		if (!bLocal_139)
		{
			bLocal_139 = (func_410() && func_400());
		}
	}
	else
	{
		if (iLocal_140)
		{
			func_412();
			func_398();
			iLocal_140 = 0;
		}
		return;
	}
	if (!Global_1391942.f_791)
	{
		iVar1 = 0;
		while (iVar1 < unk_0x2AC1C68C7CCA90E5(1))
		{
			if (unk_0x39BE1B4CEB4DAEC8(1, iVar1) == 174)
			{
				if (unk_0x477FAFFE21935947(1, iVar1, &Var0, 6))
				{
					if (Var0 == 1614484900)
					{
						if (((unk_0xFA298F06F67BBD4A(Var0.f_1) && Var0.f_2 >= 0) && Var0.f_2 < 224) && func_397(Var0.f_3, Local_132.f_236) != 0)
						{
							if (Var0.f_4)
							{
								Local_132.f_260[Var0.f_2] = Var0.f_3;
							}
							else
							{
								Local_132.f_305[Var0.f_2] = Var0.f_3;
								if (Var0.f_5)
								{
									func_396(Var0.f_2);
								}
								else
								{
									func_395(Var0.f_2);
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	iVar2 = 0;
	while (iVar2 < Local_132.f_257)
	{
		if (iVar2 != iLocal_145 && iVar2 != Local_131[unk_0x460153A63B9477BC() /*8*/].f_4)
		{
		}
		else
		{
			Var3 = { func_70(iVar2) };
			Var3.f_2 = (Var3.f_2 + 0.914f);
			bVar4 = false;
			if (func_53(iVar2, Local_132.f_257))
			{
				bVar4 = true;
			}
			Var8 = { 0f, 0f, func_69(iVar2) };
			iVar9 = 0;
			while (iVar9 < 4)
			{
				iVar10 = Local_122.f_1600[(iVar2 * 4 + iVar9)];
				if (iVar10 < 0 || ((!func_359(1581559923) && !func_359(272405600)) && !func_425(unk_0x460153A63B9477BC())))
				{
					iVar5 = 0;
					while (iVar5 < 7)
					{
						iVar6 = func_21(iVar2, iVar5, iVar9, 1);
						if (unk_0xAE06B9E39EBDE049(Local_132.f_648[iVar6]))
						{
							if (unk_0x75A784DE9819D6EC(Local_132.f_648[iVar6]) > 0)
							{
								unk_0x4D0062B514A63E5E(Local_132.f_648[iVar6], floor(func_202(to_float(unk_0x75A784DE9819D6EC(Local_132.f_648[iVar6])), 0f, 0.1f, 0)), 1);
							}
							else
							{
								unk_0x315F7D8C33F0AB37(&(Local_132.f_648[iVar6]));
							}
						}
						if (Local_132.f_305[iVar6] != -1)
						{
							Local_132.f_305[iVar6] = -1;
						}
						if (func_394(iVar6))
						{
							func_395(iVar6);
						}
						iVar6 = func_21(iVar2, iVar5, iVar9, 0);
						if (unk_0xAE06B9E39EBDE049(Local_132.f_648[iVar6]))
						{
							if (unk_0x75A784DE9819D6EC(Local_132.f_648[iVar6]) > 0)
							{
								unk_0x4D0062B514A63E5E(Local_132.f_648[iVar6], floor(func_202(to_float(unk_0x75A784DE9819D6EC(Local_132.f_648[iVar6])), 0f, 0.1f, 0)), 1);
							}
							else
							{
								unk_0x315F7D8C33F0AB37(&(Local_132.f_648[iVar6]));
							}
						}
						if (Local_132.f_305[iVar6] != -1)
						{
							Local_132.f_305[iVar6] = -1;
						}
						if (func_394(iVar6))
						{
							func_395(iVar6);
						}
						iVar5++;
					}
					iVar5 = 0;
					while (iVar5 < 4)
					{
						if (unk_0xAE06B9E39EBDE049(Local_132.f_538[func_393(iVar2, iVar9, iVar5)]))
						{
							if (unk_0x75A784DE9819D6EC(Local_132.f_538[func_393(iVar2, iVar9, iVar5)]) > 0)
							{
								unk_0x4D0062B514A63E5E(Local_132.f_538[func_393(iVar2, iVar9, iVar5)], floor(func_202(to_float(unk_0x75A784DE9819D6EC(Local_132.f_538[func_393(iVar2, iVar9, iVar5)])), 0f, 0.1f, 0)), 1);
							}
							else
							{
								unk_0x315F7D8C33F0AB37(&(Local_132.f_538[func_393(iVar2, iVar9, iVar5)]));
							}
						}
						iVar5++;
					}
				}
				else
				{
					iVar5 = 0;
					iVar5 = 0;
					while (iVar5 < 7)
					{
						iVar6 = func_21(iVar2, iVar5, iVar9, 0);
						sVar7 = func_392(Local_122.f_899[iVar10 /*9*/][iVar5], 1);
						if (iVar6 >= 0 && iVar6 < (56 * Local_132.f_257))
						{
							if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iVar2]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2])))
							{
								if ((((iVar9 == 0 && unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), func_58(), func_7(iVar2), 3)) || (iVar9 == 1 && unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), func_58(), func_6(iVar2), 3))) || (iVar9 == 2 && unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), func_58(), func_5(iVar2), 3))) || (iVar9 == 3 && unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), func_58(), func_4(iVar2), 3)))
								{
									if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), -1345695206))
									{
										iVar12 = 0;
										while (iVar12 < 7)
										{
											iVar13 = func_21(iVar2, iVar12, iVar9, 0);
											if (unk_0xAE06B9E39EBDE049(Local_132.f_648[iVar13]))
											{
												iVar11 = iVar12;
											}
											iVar12++;
										}
										if (iVar5 == iVar11)
										{
											if (unk_0xAE06B9E39EBDE049(Local_132.f_648[iVar6]) && !unk_0xB77B1396EAA80D8F(Local_132.f_648[iVar6]))
											{
												unk_0xF8A652CE310FFC53(Local_132.f_648[iVar6], unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), unk_0xE6B87C42793036AA(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
											}
										}
										else if (unk_0xAE06B9E39EBDE049(Local_132.f_648[iVar6]))
										{
											unk_0x315F7D8C33F0AB37(&(Local_132.f_648[iVar6]));
											Local_132.f_305[iVar6] = -1;
										}
									}
									else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), 585557868))
									{
										if (unk_0xAE06B9E39EBDE049(Local_132.f_648[iVar6]))
										{
											unk_0x315F7D8C33F0AB37(&(Local_132.f_648[iVar6]));
											Local_132.f_305[iVar6] = -1;
										}
									}
								}
								else if (!unk_0x7BCC91F3C1CF24E8(sVar7))
								{
									Local_132.f_305[iVar6] = -1;
									if (!unk_0xAE06B9E39EBDE049(Local_132.f_648[iVar6]))
									{
										if ((((unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iVar2]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]))) && unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), func_58(), func_22(iVar2, iVar9), 3)) && unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), -1345695206)) && iVar5 == 1)
										{
										}
										else
										{
											if (func_397(Local_122.f_899[iVar10 /*9*/][iVar5], Local_132.f_236) != 0)
											{
												Local_132.f_648[iVar6] = unk_0x6E52E47D436A2C77(func_397(Local_122.f_899[iVar10 /*9*/][iVar5], Local_132.f_236), unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_391(iVar5, iVar9, 0)), 0, false, 1);
												unk_0xCBF81D3222C77066(Local_132.f_648[iVar6], unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_391(iVar5, iVar9, 0)), 0, 0, 1);
												unk_0xC82085403E46A869(Local_132.f_648[iVar6], Var8 + func_390(iVar5, iVar9, 0, func_394(iVar6)), 2, 1);
											}
											Jump @2149; //curOff = 1854
											if (unk_0x36FE6D3220816ADA(Local_132.f_648[iVar6]) != func_397(Local_122.f_899[iVar10 /*9*/][iVar5], Local_132.f_236))
											{
												unk_0x315F7D8C33F0AB37(&(Local_132.f_648[iVar6]));
											}
											else if ((((unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iVar2]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]))) && unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), func_58(), func_22(iVar2, iVar9), 3)) && unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), -1345695206)) && iVar5 == 1)
											{
												unk_0x315F7D8C33F0AB37(&(Local_132.f_648[iVar6]));
											}
											else if (unk_0xB77B1396EAA80D8F(Local_132.f_648[iVar6]))
											{
												unk_0x1F8106DB8796859F(Local_132.f_648[iVar6], 0, 1);
												unk_0xCBF81D3222C77066(Local_132.f_648[iVar6], unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_391(iVar5, iVar9, 0)), 0, 0, 1);
												unk_0xC82085403E46A869(Local_132.f_648[iVar6], Var8 + func_390(iVar5, iVar9, 0, func_394(iVar6)), 2, 1);
											}
											Jump @2890; //curOff = 2149
											if (Local_132.f_305[iVar6] != -1)
											{
												if (!unk_0xAE06B9E39EBDE049(Local_132.f_648[iVar6]))
												{
													Local_132.f_648[iVar6] = unk_0x6E52E47D436A2C77(func_397(Local_132.f_305[iVar6], Local_132.f_236), Var3, 0, false, 1);
													if (((unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iVar2]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]))) && !unk_0x8E805E09B82CCE5F(Local_132.f_648[iVar6])) && unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), -1345695206))
													{
														if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), func_58(), func_22(iVar2, iVar9), 3))
														{
															unk_0xF8A652CE310FFC53(Local_132.f_648[iVar6], unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), unk_0xE6B87C42793036AA(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
														}
														else
														{
															unk_0xF8A652CE310FFC53(Local_132.f_648[iVar6], unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), unk_0xE6B87C42793036AA(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
														}
													}
												}
												else if (unk_0x36FE6D3220816ADA(Local_132.f_648[iVar6]) != func_397(Local_132.f_305[iVar6], Local_132.f_236))
												{
													unk_0x315F7D8C33F0AB37(&(Local_132.f_648[iVar6]));
													Local_132.f_305[iVar6] = -1;
													func_395(iVar6);
												}
												else if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iVar2]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2])))
												{
													if (!unk_0x8E805E09B82CCE5F(Local_132.f_648[iVar6]) && unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), -1345695206))
													{
														unk_0xF8A652CE310FFC53(Local_132.f_648[iVar6], unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), unk_0xE6B87C42793036AA(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
													}
													if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), 585557868))
													{
														if (unk_0xB77B1396EAA80D8F(Local_132.f_648[iVar6]))
														{
															unk_0x1F8106DB8796859F(Local_132.f_648[iVar6], 0, 1);
															unk_0xCBF81D3222C77066(Local_132.f_648[iVar6], unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_391(iVar5, iVar9, 0)), 0, 0, 1);
															unk_0xC82085403E46A869(Local_132.f_648[iVar6], Var8 + func_390(iVar5, iVar9, 0, func_394(iVar6)), 2, 1);
														}
													}
												}
											}
											else if (iVar6 >= 0 && iVar6 < (56 * Local_132.f_257))
											{
												if (unk_0xAE06B9E39EBDE049(Local_132.f_648[iVar6]))
												{
													unk_0x315F7D8C33F0AB37(&(Local_132.f_648[iVar6]));
													Local_132.f_305[iVar6] = -1;
													func_395(iVar6);
												}
											}
										}
										iVar5++;
										if (Local_131[iVar10 /*8*/].f_1 > 0)
										{
											iVar14 = Local_131[iVar10 /*8*/].f_1;
											if (unk_0xCE990E643CD9D0E5(Local_131[iVar10 /*8*/], 10))
											{
												iVar14 = (Local_131[iVar10 /*8*/].f_1 / 2);
											}
											if (!unk_0xAE06B9E39EBDE049(Local_132.f_538[func_393(iVar2, iVar9, 0)]))
											{
												if (func_389(iVar14, bVar4) != 0)
												{
													Local_132.f_538[func_393(iVar2, iVar9, 0)] = unk_0x6E52E47D436A2C77(func_389(iVar14, bVar4), unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_388(iVar14, 0, iVar9, bVar4)), 0, false, 1);
													unk_0xCBF81D3222C77066(Local_132.f_538[func_393(iVar2, iVar9, 0)], unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_388(iVar14, 0, iVar9, bVar4)), 0, 0, 1);
													unk_0xC82085403E46A869(Local_132.f_538[func_393(iVar2, iVar9, 0)], Var8 + func_387(iVar14, 0, iVar9, bVar4), 2, 1);
													if (!unk_0x7BCC91F3C1CF24E8(func_386(iVar14)))
													{
														unk_0x2DB2D4C3CB88500D(-1, func_386(iVar14), Local_132.f_538[func_393(iVar2, iVar9, 0)], "dlc_vw_table_games_sounds", 0, 0);
													}
												}
											}
											else if (unk_0x75A784DE9819D6EC(Local_132.f_538[func_393(iVar2, iVar9, 0)]) != 255)
											{
												unk_0x315F7D8C33F0AB37(&(Local_132.f_538[func_393(iVar2, iVar9, 0)]));
											}
											if (unk_0xCE990E643CD9D0E5(Local_131[iVar10 /*8*/], 10))
											{
												if (!unk_0xAE06B9E39EBDE049(Local_132.f_538[func_393(iVar2, iVar9, 1)]))
												{
													if (func_389(iVar14, bVar4) != 0)
													{
														Local_132.f_538[func_393(iVar2, iVar9, 1)] = unk_0x6E52E47D436A2C77(func_389(iVar14, bVar4), unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_388(iVar14, 1, iVar9, bVar4)), 0, false, 1);
														unk_0xCBF81D3222C77066(Local_132.f_538[func_393(iVar2, iVar9, 1)], unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_388(iVar14, 1, iVar9, bVar4)), 0, 0, 1);
														unk_0xC82085403E46A869(Local_132.f_538[func_393(iVar2, iVar9, 1)], Var8 + func_387(iVar14, 1, iVar9, bVar4), 2, 1);
														if (!unk_0x7BCC91F3C1CF24E8(func_386(iVar14)))
														{
															unk_0x2DB2D4C3CB88500D(-1, func_386(iVar14), Local_132.f_538[func_393(iVar2, iVar9, 1)], "dlc_vw_table_games_sounds", 0, 0);
														}
													}
												}
												else if (unk_0x75A784DE9819D6EC(Local_132.f_538[func_393(iVar2, iVar9, 1)]) != 255)
												{
													unk_0x315F7D8C33F0AB37(&(Local_132.f_538[func_393(iVar2, iVar9, 1)]));
												}
											}
										}
										else
										{
											if (unk_0xAE06B9E39EBDE049(Local_132.f_538[func_393(iVar2, iVar9, 0)]))
											{
												if (unk_0x75A784DE9819D6EC(Local_132.f_538[func_393(iVar2, iVar9, 0)]) > 0)
												{
													unk_0x4D0062B514A63E5E(Local_132.f_538[func_393(iVar2, iVar9, 0)], floor(func_202(to_float(unk_0x75A784DE9819D6EC(Local_132.f_538[func_393(iVar2, iVar9, 0)])), 0f, 0.1f, 0)), 1);
												}
												else
												{
													unk_0x315F7D8C33F0AB37(&(Local_132.f_538[func_393(iVar2, iVar9, 0)]));
												}
											}
											if (unk_0xAE06B9E39EBDE049(Local_132.f_538[func_393(iVar2, iVar9, 1)]))
											{
												if (unk_0x75A784DE9819D6EC(Local_132.f_538[func_393(iVar2, iVar9, 1)]) > 0)
												{
													unk_0x4D0062B514A63E5E(Local_132.f_538[func_393(iVar2, iVar9, 1)], floor(func_202(to_float(unk_0x75A784DE9819D6EC(Local_132.f_538[func_393(iVar2, iVar9, 1)])), 0f, 0.1f, 0)), 1);
												}
												else
												{
													unk_0x315F7D8C33F0AB37(&(Local_132.f_538[func_393(iVar2, iVar9, 1)]));
												}
											}
										}
										iVar5 = 0;
										iVar5 = 0;
										while (iVar5 < 7)
										{
											iVar6 = func_21(iVar2, iVar5, iVar9, 1);
											sVar7 = func_392(Local_122.f_1188[iVar10 /*9*/][iVar5], 1);
											if (iVar6 >= 0 && iVar6 < (56 * Local_132.f_257))
											{
												if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iVar2]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2])))
												{
													if ((((iVar9 == 0 && unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), func_58(), func_7(iVar2), 3)) || (iVar9 == 1 && unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), func_58(), func_6(iVar2), 3))) || (iVar9 == 2 && unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), func_58(), func_5(iVar2), 3))) || (iVar9 == 3 && unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), func_58(), func_4(iVar2), 3)))
													{
														if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), -1345695206) || unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), 585557868))
														{
															if (unk_0xAE06B9E39EBDE049(Local_132.f_648[iVar6]))
															{
																unk_0x315F7D8C33F0AB37(&(Local_132.f_648[iVar6]));
																Local_132.f_305[iVar6] = -1;
															}
														}
													}
													else if (!unk_0x7BCC91F3C1CF24E8(sVar7))
													{
														Local_132.f_305[iVar6] = -1;
														if (!unk_0xAE06B9E39EBDE049(Local_132.f_648[iVar6]))
														{
															if (func_397(Local_122.f_1188[iVar10 /*9*/][iVar5], Local_132.f_236) != 0)
															{
																Local_132.f_648[iVar6] = unk_0x6E52E47D436A2C77(func_397(Local_122.f_1188[iVar10 /*9*/][iVar5], Local_132.f_236), unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_391(iVar5, iVar9, 1)), 0, false, 1);
																unk_0xCBF81D3222C77066(Local_132.f_648[iVar6], unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_391(iVar5, iVar9, 1)), 0, 0, 1);
																unk_0xC82085403E46A869(Local_132.f_648[iVar6], Var8 + func_390(iVar5, iVar9, 1, func_394(iVar6)), 2, 1);
															}
														}
														else if (unk_0x36FE6D3220816ADA(Local_132.f_648[iVar6]) != func_397(Local_122.f_1188[iVar10 /*9*/][iVar5], Local_132.f_236))
														{
															unk_0x315F7D8C33F0AB37(&(Local_132.f_648[iVar6]));
														}
														else if (unk_0xB77B1396EAA80D8F(Local_132.f_648[iVar6]))
														{
															unk_0x1F8106DB8796859F(Local_132.f_648[iVar6], 0, 1);
															unk_0xCBF81D3222C77066(Local_132.f_648[iVar6], unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_391(iVar5, iVar9, 1)), 0, 0, 1);
															unk_0xC82085403E46A869(Local_132.f_648[iVar6], Var8 + func_390(iVar5, iVar9, 1, func_394(iVar6)), 2, 1);
														}
													}
													else if (Local_132.f_305[iVar6] != -1)
													{
														if (!unk_0xAE06B9E39EBDE049(Local_132.f_648[iVar6]))
														{
															Local_132.f_648[iVar6] = unk_0x6E52E47D436A2C77(func_397(Local_132.f_305[iVar6], Local_132.f_236), Var3, 0, false, 1);
															if (((unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iVar2]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]))) && !unk_0x8E805E09B82CCE5F(Local_132.f_648[iVar6])) && unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), -1345695206))
															{
																unk_0xF8A652CE310FFC53(Local_132.f_648[iVar6], unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), unk_0xE6B87C42793036AA(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
															}
														}
														else if (unk_0x36FE6D3220816ADA(Local_132.f_648[iVar6]) != func_397(Local_132.f_305[iVar6], Local_132.f_236))
														{
															unk_0x315F7D8C33F0AB37(&(Local_132.f_648[iVar6]));
															Local_132.f_305[iVar6] = -1;
															func_395(iVar6);
														}
														else if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iVar2]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2])))
														{
															if (!unk_0x8E805E09B82CCE5F(Local_132.f_648[iVar6]) && unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), -1345695206))
															{
																unk_0xF8A652CE310FFC53(Local_132.f_648[iVar6], unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), unk_0xE6B87C42793036AA(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
															}
															if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), 585557868))
															{
																if (unk_0xB77B1396EAA80D8F(Local_132.f_648[iVar6]))
																{
																	unk_0x1F8106DB8796859F(Local_132.f_648[iVar6], 0, 1);
																	unk_0xCBF81D3222C77066(Local_132.f_648[iVar6], unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_391(iVar5, iVar9, 1)), 0, 0, 1);
																	unk_0xC82085403E46A869(Local_132.f_648[iVar6], Var8 + func_390(iVar5, iVar9, 1, func_394(iVar6)), 2, 1);
																}
															}
														}
													}
													else if (iVar6 >= 0 && iVar6 < (56 * Local_132.f_257))
													{
														if (unk_0xAE06B9E39EBDE049(Local_132.f_648[iVar6]))
														{
															unk_0x315F7D8C33F0AB37(&(Local_132.f_648[iVar6]));
															Local_132.f_305[iVar6] = -1;
															func_395(iVar6);
														}
													}
													iVar5++;
													if (Local_131[iVar10 /*8*/].f_2 > 0)
													{
														iVar14 = Local_131[iVar10 /*8*/].f_2;
														if (unk_0xCE990E643CD9D0E5(Local_131[iVar10 /*8*/], 11))
														{
															iVar14 = (Local_131[iVar10 /*8*/].f_2 / 2);
														}
														if (!unk_0xAE06B9E39EBDE049(Local_132.f_538[func_393(iVar2, iVar9, 2)]))
														{
															if (func_389(iVar14, bVar4) != 0)
															{
																Local_132.f_538[func_393(iVar2, iVar9, 2)] = unk_0x6E52E47D436A2C77(func_389(iVar14, bVar4), unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_388(iVar14, 2, iVar9, bVar4)), 0, false, 1);
																unk_0xCBF81D3222C77066(Local_132.f_538[func_393(iVar2, iVar9, 2)], unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_388(iVar14, 2, iVar9, bVar4)), 0, 0, 1);
																unk_0xC82085403E46A869(Local_132.f_538[func_393(iVar2, iVar9, 2)], Var8 + func_387(iVar14, 2, iVar9, bVar4), 2, 1);
																if (!unk_0x7BCC91F3C1CF24E8(func_386(iVar14)))
																{
																	unk_0x2DB2D4C3CB88500D(-1, func_386(iVar14), Local_132.f_538[func_393(iVar2, iVar9, 2)], "dlc_vw_table_games_sounds", 0, 0);
																}
															}
														}
														else if (unk_0x75A784DE9819D6EC(Local_132.f_538[func_393(iVar2, iVar9, 2)]) != 255)
														{
															unk_0x315F7D8C33F0AB37(&(Local_132.f_538[func_393(iVar2, iVar9, 2)]));
														}
														if (unk_0xCE990E643CD9D0E5(Local_131[iVar10 /*8*/], 11))
														{
															if (!unk_0xAE06B9E39EBDE049(Local_132.f_538[func_393(iVar2, iVar9, 3)]))
															{
																if (func_389(iVar14, bVar4) != 0)
																{
																	Local_132.f_538[func_393(iVar2, iVar9, 3)] = unk_0x6E52E47D436A2C77(func_389(iVar14, bVar4), unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_388(iVar14, 3, iVar9, bVar4)), 0, false, 1);
																	unk_0xCBF81D3222C77066(Local_132.f_538[func_393(iVar2, iVar9, 3)], unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_388(iVar14, 3, iVar9, bVar4)), 0, 0, 1);
																	unk_0xC82085403E46A869(Local_132.f_538[func_393(iVar2, iVar9, 3)], Var8 + func_387(iVar14, 3, iVar9, bVar4), 2, 1);
																	if (!unk_0x7BCC91F3C1CF24E8(func_386(iVar14)))
																	{
																		unk_0x2DB2D4C3CB88500D(-1, func_386(iVar14), Local_132.f_538[func_393(iVar2, iVar9, 3)], "dlc_vw_table_games_sounds", 0, 0);
																	}
																}
															}
															else if (unk_0x75A784DE9819D6EC(Local_132.f_538[func_393(iVar2, iVar9, 3)]) != 255)
															{
																unk_0x315F7D8C33F0AB37(&(Local_132.f_538[func_393(iVar2, iVar9, 3)]));
															}
														}
													}
													else
													{
														if (unk_0xAE06B9E39EBDE049(Local_132.f_538[func_393(iVar2, iVar9, 2)]))
														{
															if (unk_0x75A784DE9819D6EC(Local_132.f_538[func_393(iVar2, iVar9, 2)]) > 0)
															{
																unk_0x4D0062B514A63E5E(Local_132.f_538[func_393(iVar2, iVar9, 2)], floor(func_202(to_float(unk_0x75A784DE9819D6EC(Local_132.f_538[func_393(iVar2, iVar9, 2)])), 0f, 0.1f, 0)), 1);
															}
															else
															{
																unk_0x315F7D8C33F0AB37(&(Local_132.f_538[func_393(iVar2, iVar9, 2)]));
															}
														}
														if (unk_0xAE06B9E39EBDE049(Local_132.f_538[func_393(iVar2, iVar9, 3)]))
														{
															if (unk_0x75A784DE9819D6EC(Local_132.f_538[func_393(iVar2, iVar9, 3)]) > 0)
															{
																unk_0x4D0062B514A63E5E(Local_132.f_538[func_393(iVar2, iVar9, 3)], floor(func_202(to_float(unk_0x75A784DE9819D6EC(Local_132.f_538[func_393(iVar2, iVar9, 3)])), 0f, 0.1f, 0)), 1);
															}
															else
															{
																unk_0x315F7D8C33F0AB37(&(Local_132.f_538[func_393(iVar2, iVar9, 3)]));
															}
														}
													}
													iVar9++;
													iVar5 = 0;
													iVar5 = 0;
													while (iVar5 < 11)
													{
														bVar16 = true;
														if (!Local_122.f_1525[iVar2] && iVar5 == 0)
														{
															bVar16 = false;
														}
														sVar7 = func_392(Local_122.f_846[iVar2 /*13*/][iVar5], bVar16);
														iVar6 = func_9(iVar2, iVar5);
														if (iVar6 >= 0 && iVar6 < (11 * Local_132.f_257))
														{
															if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iVar2]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2])))
															{
																if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), func_58(), func_3(iVar2), 3))
																{
																	if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), -1345695206))
																	{
																		iVar18 = 0;
																		while (iVar18 < 11)
																		{
																			iVar19 = func_9(iVar2, iVar18);
																			if (unk_0xAE06B9E39EBDE049(Local_132.f_603[iVar19]))
																			{
																				iVar17 = iVar18;
																			}
																			iVar18++;
																		}
																		if (iVar5 == iVar17)
																		{
																			if (unk_0xAE06B9E39EBDE049(Local_132.f_603[iVar6]) && !unk_0xB77B1396EAA80D8F(Local_132.f_603[iVar6]))
																			{
																				unk_0xF8A652CE310FFC53(Local_132.f_603[iVar6], unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), unk_0xE6B87C42793036AA(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
																			}
																		}
																		else if (unk_0xAE06B9E39EBDE049(Local_132.f_603[iVar6]))
																		{
																			unk_0x315F7D8C33F0AB37(&(Local_132.f_603[iVar6]));
																			Local_132.f_260[iVar6] = -1;
																		}
																	}
																	else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), 585557868))
																	{
																		if (unk_0xAE06B9E39EBDE049(Local_132.f_603[iVar6]))
																		{
																			unk_0x315F7D8C33F0AB37(&(Local_132.f_603[iVar6]));
																			Local_132.f_260[iVar6] = -1;
																		}
																	}
																}
																else if (Local_122.f_1520[iVar2] == 2 && ((!unk_0x7BCC91F3C1CF24E8(sVar7) && Local_122.f_846[iVar2 /*13*/][iVar5] != 0) || Local_132.f_260[iVar6] != -1))
																{
																	if (!unk_0x7BCC91F3C1CF24E8(func_392(Local_122.f_846[iVar2 /*13*/][iVar5], 1)) && func_397(Local_122.f_846[iVar2 /*13*/][iVar5], Local_132.f_236) != 0)
																	{
																		Local_132.f_260[iVar6] = -1;
																		if (!unk_0xAE06B9E39EBDE049(Local_132.f_603[iVar6]))
																		{
																			iVar15 = Local_122.f_846[iVar2 /*13*/][iVar5];
																			if (!bVar16)
																			{
																				iVar15 = 0;
																			}
																			if (!unk_0x7BCC91F3C1CF24E8(func_392(Local_122.f_846[iVar2 /*13*/][iVar5], 1)) && func_397(iVar15, Local_132.f_236) != 0)
																			{
																				Local_132.f_603[iVar6] = unk_0x6E52E47D436A2C77(func_397(iVar15, Local_132.f_236), unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_385(iVar5)), 0, false, 1);
																				unk_0xCBF81D3222C77066(Local_132.f_603[iVar6], unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_385(iVar5)), 0, 0, 1);
																				unk_0xC82085403E46A869(Local_132.f_603[iVar6], Var8 + func_384(iVar5, bVar16), 2, 1);
																				Local_132.f_260[iVar6] = -1;
																			}
																		}
																		else if (iVar5 == 0)
																		{
																			if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iVar2]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2])))
																			{
																				if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), func_58(), func_33(iVar2), 3))
																				{
																					if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), -1345695206))
																					{
																						if (!unk_0xB77B1396EAA80D8F(Local_132.f_603[iVar6]))
																						{
																							unk_0x315F7D8C33F0AB37(&(Local_132.f_603[iVar6]));
																							Local_132.f_260[iVar6] = -1;
																							Local_132.f_603[iVar6] = unk_0x6E52E47D436A2C77(func_397(Local_122.f_846[iVar2 /*13*/][iVar5], Local_132.f_236), unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_385(iVar5)), 0, false, 1);
																							unk_0xCBF81D3222C77066(Local_132.f_603[iVar6], unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_385(iVar5)), 0, 0, 1);
																							unk_0xC82085403E46A869(Local_132.f_603[iVar6], Var8 + func_384(iVar5, 0), 2, 1);
																							unk_0xF8A652CE310FFC53(Local_132.f_603[iVar6], unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), unk_0xE6B87C42793036AA(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
																						}
																					}
																					else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), 585557868))
																					{
																						if (unk_0xB77B1396EAA80D8F(Local_132.f_603[iVar6]))
																						{
																							unk_0x1F8106DB8796859F(Local_132.f_603[iVar6], 0, 1);
																							unk_0xCBF81D3222C77066(Local_132.f_603[iVar6], unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_385(iVar5)), 0, 0, 1);
																							unk_0xC82085403E46A869(Local_132.f_603[iVar6], Var8 + func_384(iVar5, 1), 2, 1);
																						}
																					}
																				}
																				else if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), func_58(), func_28(iVar2), 3))
																				{
																					if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), -1345695206))
																					{
																						if (!unk_0xB77B1396EAA80D8F(Local_132.f_603[iVar6]))
																						{
																							unk_0xF8A652CE310FFC53(Local_132.f_603[iVar6], unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), unk_0xE6B87C42793036AA(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
																						}
																					}
																					else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), 585557868))
																					{
																						if (unk_0xB77B1396EAA80D8F(Local_132.f_603[iVar6]))
																						{
																							unk_0x1F8106DB8796859F(Local_132.f_603[iVar6], 0, 1);
																							unk_0xCBF81D3222C77066(Local_132.f_603[iVar6], unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_385(iVar5)), 0, 0, 1);
																							unk_0xC82085403E46A869(Local_132.f_603[iVar6], Var8 + func_384(iVar5, 0), 2, 1);
																						}
																					}
																				}
																				else if (unk_0x9934470AA0A08B57(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), func_58(), func_11(iVar2), 3))
																				{
																					if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), -1345695206))
																					{
																						if (!unk_0xB77B1396EAA80D8F(Local_132.f_603[iVar6]))
																						{
																							unk_0x315F7D8C33F0AB37(&(Local_132.f_603[iVar6]));
																							Local_132.f_260[iVar6] = -1;
																							Local_132.f_603[iVar6] = unk_0x6E52E47D436A2C77(func_397(Local_122.f_846[iVar2 /*13*/][iVar5], Local_132.f_236), unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_385(iVar5)), 0, false, 1);
																							unk_0xCBF81D3222C77066(Local_132.f_603[iVar6], unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_385(iVar5)), 0, 0, 1);
																							unk_0xC82085403E46A869(Local_132.f_603[iVar6], Var8 + func_384(iVar5, 0), 2, 1);
																							unk_0xF8A652CE310FFC53(Local_132.f_603[iVar6], unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), unk_0xE6B87C42793036AA(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
																						}
																					}
																					else if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), 585557868))
																					{
																						if (unk_0xB77B1396EAA80D8F(Local_132.f_603[iVar6]))
																						{
																							unk_0x1F8106DB8796859F(Local_132.f_603[iVar6], 0, 1);
																							unk_0xCBF81D3222C77066(Local_132.f_603[iVar6], unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_385(iVar5)), 0, 0, 1);
																							unk_0xC82085403E46A869(Local_132.f_603[iVar6], Var8 + func_384(iVar5, 1), 2, 1);
																						}
																					}
																				}
																				else if (unk_0xB77B1396EAA80D8F(Local_132.f_603[iVar6]))
																				{
																					unk_0x1F8106DB8796859F(Local_132.f_603[iVar6], 0, 1);
																					unk_0xCBF81D3222C77066(Local_132.f_603[iVar6], unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_385(iVar5)), 0, 0, 1);
																					unk_0xC82085403E46A869(Local_132.f_603[iVar6], Var8 + func_384(iVar5, bVar16), 2, 1);
																				}
																			}
																		}
																		else if (unk_0xB77B1396EAA80D8F(Local_132.f_603[iVar6]))
																		{
																			unk_0x1F8106DB8796859F(Local_132.f_603[iVar6], 0, 1);
																			unk_0xCBF81D3222C77066(Local_132.f_603[iVar6], unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_385(iVar5)), 0, 0, 1);
																			unk_0xC82085403E46A869(Local_132.f_603[iVar6], Var8 + func_384(iVar5, bVar16), 2, 1);
																		}
																	}
																	else if (Local_132.f_260[iVar6] != -1)
																	{
																		if (!unk_0xAE06B9E39EBDE049(Local_132.f_603[iVar6]))
																		{
																			iVar15 = Local_132.f_260[iVar6];
																			if (!bVar16)
																			{
																				iVar15 = 0;
																			}
																			Local_132.f_603[iVar6] = unk_0x6E52E47D436A2C77(func_397(iVar15, Local_132.f_236), Var3, 0, false, 1);
																			if (((unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iVar2]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]))) && !unk_0x8E805E09B82CCE5F(Local_132.f_603[iVar6])) && unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), -1345695206))
																			{
																				unk_0xF8A652CE310FFC53(Local_132.f_603[iVar6], unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), unk_0xE6B87C42793036AA(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
																			}
																		}
																		else if (unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iVar2]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2])))
																		{
																			if (!unk_0x8E805E09B82CCE5F(Local_132.f_603[iVar6]) && unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), -1345695206))
																			{
																				unk_0xF8A652CE310FFC53(Local_132.f_603[iVar6], unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), unk_0xE6B87C42793036AA(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 1, 2, 1);
																			}
																			if (unk_0x39CABCD7925B9200(unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar2]), 585557868))
																			{
																				if (unk_0xB77B1396EAA80D8F(Local_132.f_603[iVar6]))
																				{
																					unk_0x1F8106DB8796859F(Local_132.f_603[iVar6], 0, 1);
																					unk_0xCBF81D3222C77066(Local_132.f_603[iVar6], unk_0x1BAE5C94E38E44FE(func_70(iVar2), Var8.f_2, func_385(iVar5)), 0, 0, 1);
																					unk_0xC82085403E46A869(Local_132.f_603[iVar6], Var8 + func_384(iVar5, bVar16), 2, 1);
																				}
																			}
																		}
																	}
																}
																else if (iVar6 >= 0 && iVar6 < (11 * Local_132.f_257))
																{
																	if (unk_0xAE06B9E39EBDE049(Local_132.f_603[iVar6]))
																	{
																		unk_0x315F7D8C33F0AB37(&(Local_132.f_603[iVar6]));
																		Local_132.f_260[iVar6] = -1;
																	}
																}
																iVar5++;
																iVar2++;
																iLocal_145++;
																if (iLocal_145 >= Local_132.f_257)
																{
																	iLocal_145 = 0;
																}
															}

Vector3 func_384(int iParam0, bool bParam1)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 0f, 0f, 178.92f };
			break;
		
		case 1:
			Var0 = { 0f, 0f, -180f };
			break;
		
		case 2:
			Var0 = { 0f, 0f, -178.92f };
			break;
		
		case 3:
			Var0 = { 0f, 0f, -177.12f };
			break;
		
		case 4:
			Var0 = { 0f, 0f, 180f };
			break;
		
		case 5:
			Var0 = { 0f, 0f, 178.56f };
			break;
		
		case 6:
			Var0 = { 0f, 0f, 180f };
			break;
		
		case 7:
			Var0 = { 0f, 0f, 178.2f };
			break;
		
		case 8:
			Var0 = { 0f, 0f, -177.12f };
			break;
		
		case 9:
			Var0 = { 0f, 0f, 180f };
			break;
		
		case 10:
			Var0 = { 0f, 0f, 178.56f };
			break;
	}
	if (!bParam1)
	{
		Var0.x = 180f;
	}
	return Var0;
}

Vector3 func_385(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0.0356f, 0.2105f, 0.94885f;
		
		case 1:
			return -0.0436f, 0.21205f, 0.948875f;
		
		case 2:
			return -0.0636f, 0.213825f, 0.9496f;
		
		case 3:
			return -0.0806f, 0.2137f, 0.950225f;
		
		case 4:
			return -0.1006f, 0.21125f, 0.950875f;
		
		case 5:
			return -0.1256f, 0.21505f, 0.951875f;
		
		case 6:
			return -0.1416f, 0.21305f, 0.953f;
		
		case 7:
			return -0.1656f, 0.21205f, 0.954025f;
		
		case 8:
			return -0.1836f, 0.21255f, 0.95495f;
		
		case 9:
			return -0.2076f, 0.21105f, 0.956025f;
		
		case 10:
			return -0.2246f, 0.21305f, 0.957f;
		
		default:
	}
	return 0f, 0f, 0f;
}

char* func_386(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 20:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 30:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 40:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 50:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 60:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 70:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 80:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 90:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 100:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 150:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 200:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 250:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 300:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 350:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 400:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 450:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 500:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1000:
			return "DLC_VW_CHIP_BET_SML_SINGLE";
		
		case 1500:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 2500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 3000:
			return "DLC_VW_CHIP_BET_SML_SMALL";
		
		case 3500:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 4500:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 5000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 6000:
			return "DLC_VW_CHIP_BET_SML_MEDIUM";
		
		case 7000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 8000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 9000:
			return "DLC_VW_CHIP_BET_SML_LARGE";
		
		case 10000:
			return "DLC_VW_CHIP_BET_LRG_SINGLE";
		
		case 15000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 20000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 25000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 30000:
			return "DLC_VW_CHIP_BET_LRG_SMALL";
		
		case 35000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 40000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		case 45000:
			return "DLC_VW_CHIP_BET_LRG_LARGE";
		
		case 50000:
			return "DLC_VW_CHIP_BET_LRG_MEDIUM";
		
		default:
	}
	return "";
}

Vector3 func_387(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!bParam3)
	{
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 72f;
					
					case 1:
						return 0f, 0f, 64.8f;
					
					case 2:
						return 0f, 0f, 74.52f;
					
					case 3:
						return 0f, 0f, 72f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, 12.96f;
					
					case 1:
						return 0f, 0f, 29.16f;
					
					case 2:
						return 0f, 0f, 32.04f;
					
					case 3:
						return 0f, 0f, 32.04f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -18.36f;
					
					case 1:
						return 0f, 0f, -18.72f;
					
					case 2:
						return 0f, 0f, -15.48f;
					
					case 3:
						return 0f, 0f, -18f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						return 0f, 0f, -79.2f;
					
					case 1:
						return 0f, 0f, -68.76f;
					
					case 2:
						return 0f, 0f, -57.6f;
					
					case 3:
						return 0f, 0f, -64.8f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -16.56f;
							
							case 1:
								return 0f, 0f, -22.32f;
							
							case 2:
								return 0f, 0f, -10.8f;
							
							case 3:
								return 0f, 0f, -9.72f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -69.12f;
							
							case 1:
								return 0f, 0f, -64.8f;
							
							case 2:
								return 0f, 0f, -58.68f;
							
							case 3:
								return 0f, 0f, -51.12f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -112.32f;
							
							case 1:
								return 0f, 0f, -108.36f;
							
							case 2:
								return 0f, 0f, -99.72f;
							
							case 3:
								return 0f, 0f, -102.6f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -155.88f;
							
							case 1:
								return 0f, 0f, -151.92f;
							
							case 2:
								return 0f, 0f, -147.24f;
							
							case 3:
								return 0f, 0f, -146.52f;
							
							default:
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 72f;
							
							case 1:
								return 0f, 0f, 64.8f;
							
							case 2:
								return 0f, 0f, 74.52f;
							
							case 3:
								return 0f, 0f, 72f;
							
							default:
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, 12.96f;
							
							case 1:
								return 0f, 0f, 29.16f;
							
							case 2:
								return 0f, 0f, 32.04f;
							
							case 3:
								return 0f, 0f, 32.04f;
							
							default:
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -18.36f;
							
							case 1:
								return 0f, 0f, -18.72f;
							
							case 2:
								return 0f, 0f, -15.48f;
							
							case 3:
								return 0f, 0f, -18f;
							
							default:
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								return 0f, 0f, -79.2f;
							
							case 1:
								return 0f, 0f, -68.76f;
							
							case 2:
								return 0f, 0f, -57.6f;
							
							case 3:
								return 0f, 0f, -64.8f;
							
							default:
						}
						break;
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

Vector3 func_388(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	float fVar0;
	struct<3> Var1;
	
	if (!bParam3)
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			
			case 20:
				fVar0 = 0.896f;
				break;
			
			case 30:
				fVar0 = 0.901f;
				break;
			
			case 40:
				fVar0 = 0.907f;
				break;
			
			case 50:
				fVar0 = 0.95f;
				break;
			
			case 60:
				fVar0 = 0.917f;
				break;
			
			case 70:
				fVar0 = 0.922f;
				break;
			
			case 80:
				fVar0 = 0.927f;
				break;
			
			case 90:
				fVar0 = 0.932f;
				break;
			
			case 100:
				fVar0 = 0.95f;
				break;
			
			case 150:
				fVar0 = 0.904f;
				break;
			
			case 200:
				fVar0 = 0.899f;
				break;
			
			case 250:
				fVar0 = 0.914f;
				break;
			
			case 300:
				fVar0 = 0.904f;
				break;
			
			case 350:
				fVar0 = 0.924f;
				break;
			
			case 400:
				fVar0 = 0.91f;
				break;
			
			case 450:
				fVar0 = 0.935f;
				break;
			
			case 500:
				fVar0 = 0.95f;
				break;
			
			case 1000:
				fVar0 = 0.95f;
				break;
			
			case 1500:
				fVar0 = 0.904f;
				break;
			
			case 2000:
				fVar0 = 0.899f;
				break;
			
			case 2500:
				fVar0 = 0.915f;
				break;
			
			case 3000:
				fVar0 = 0.904f;
				break;
			
			case 3500:
				fVar0 = 0.925f;
				break;
			
			case 4000:
				fVar0 = 0.91f;
				break;
			
			case 4500:
				fVar0 = 0.935f;
				break;
			
			case 5000:
				fVar0 = 0.95f;
				break;
			
			case 6000:
				fVar0 = 0.919f;
				break;
			
			case 7000:
				fVar0 = 0.924f;
				break;
			
			case 8000:
				fVar0 = 0.93f;
				break;
			
			case 9000:
				fVar0 = 0.935f;
				break;
			
			case 10000:
				fVar0 = 0.95f;
				break;
			
			case 15000:
				fVar0 = 0.902f;
				break;
			
			case 20000:
				fVar0 = 0.897f;
				break;
			
			case 25000:
				fVar0 = 0.912f;
				break;
			
			case 30000:
				fVar0 = 0.902f;
				break;
			
			case 35000:
				fVar0 = 0.922f;
				break;
			
			case 40000:
				fVar0 = 0.907f;
				break;
			
			case 45000:
				fVar0 = 0.932f;
				break;
			
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam2)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.712625f, 0.170625f, 0f };
						break;
					
					case 1:
						Var1 = { 0.6658f, 0.218375f, 0f };
						break;
					
					case 2:
						Var1 = { 0.756775f, 0.292775f, 0f };
						break;
					
					case 3:
						Var1 = { 0.701875f, 0.3439f, 0f };
						break;
				}
				break;
			
			case 1:
				switch (iParam1)
				{
					case 0:
						Var1 = { 0.278125f, -0.2571f, 0f };
						break;
					
					case 1:
						Var1 = { 0.280375f, -0.190375f, 0f };
						break;
					
					case 2:
						Var1 = { 0.397775f, -0.208525f, 0f };
						break;
					
					case 3:
						Var1 = { 0.39715f, -0.1354f, 0f };
						break;
				}
				break;
			
			case 2:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.30305f, -0.2464f, 0f };
						break;
					
					case 1:
						Var1 = { -0.257975f, -0.19715f, 0f };
						break;
					
					case 2:
						Var1 = { -0.186575f, -0.2861f, 0f };
						break;
					
					case 3:
						Var1 = { -0.141675f, -0.237925f, 0f };
						break;
				}
				break;
			
			case 3:
				switch (iParam1)
				{
					case 0:
						Var1 = { -0.72855f, 0.17345f, 0f };
						break;
					
					case 1:
						Var1 = { -0.652825f, 0.177525f, 0f };
						break;
					
					case 2:
						Var1 = { -0.6783f, 0.0744f, 0f };
						break;
					
					case 3:
						Var1 = { -0.604425f, 0.082575f, 0f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				fVar0 = 0.95f;
				break;
			
			case 20:
				fVar0 = 0.896f;
				break;
			
			case 30:
				fVar0 = 0.901f;
				break;
			
			case 40:
				fVar0 = 0.907f;
				break;
			
			case 50:
				fVar0 = 0.95f;
				break;
			
			case 60:
				fVar0 = 0.917f;
				break;
			
			case 70:
				fVar0 = 0.922f;
				break;
			
			case 80:
				fVar0 = 0.927f;
				break;
			
			case 90:
				fVar0 = 0.932f;
				break;
			
			case 100:
				fVar0 = 0.95f;
				break;
			
			case 150:
				fVar0 = 0.904f;
				break;
			
			case 200:
				fVar0 = 0.899f;
				break;
			
			case 250:
				fVar0 = 0.914f;
				break;
			
			case 300:
				fVar0 = 0.904f;
				break;
			
			case 350:
				fVar0 = 0.924f;
				break;
			
			case 400:
				fVar0 = 0.91f;
				break;
			
			case 450:
				fVar0 = 0.935f;
				break;
			
			case 500:
				fVar0 = 0.95f;
				break;
			
			case 1000:
				fVar0 = 0.95f;
				break;
			
			case 1500:
				fVar0 = 0.904f;
				break;
			
			case 2000:
				fVar0 = 0.899f;
				break;
			
			case 2500:
				fVar0 = 0.915f;
				break;
			
			case 3000:
				fVar0 = 0.904f;
				break;
			
			case 3500:
				fVar0 = 0.925f;
				break;
			
			case 4000:
				fVar0 = 0.91f;
				break;
			
			case 4500:
				fVar0 = 0.935f;
				break;
			
			case 5000:
				fVar0 = 0.953f;
				break;
			
			case 6000:
				fVar0 = 0.919f;
				break;
			
			case 7000:
				fVar0 = 0.924f;
				break;
			
			case 8000:
				fVar0 = 0.93f;
				break;
			
			case 9000:
				fVar0 = 0.935f;
				break;
			
			case 10000:
				fVar0 = 0.95f;
				break;
			
			case 15000:
				fVar0 = 0.902f;
				break;
			
			case 20000:
				fVar0 = 0.897f;
				break;
			
			case 25000:
				fVar0 = 0.912f;
				break;
			
			case 30000:
				fVar0 = 0.902f;
				break;
			
			case 35000:
				fVar0 = 0.922f;
				break;
			
			case 40000:
				fVar0 = 0.907f;
				break;
			
			case 45000:
				fVar0 = 0.932f;
				break;
			
			case 50000:
				fVar0 = 0.912f;
				break;
		}
		switch (iParam0)
		{
			case 5000:
			case 10000:
			case 15000:
			case 20000:
			case 25000:
			case 30000:
			case 35000:
			case 40000:
			case 45000:
			case 50000:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.6931f, 0.1952f, 0f };
								break;
							
							case 1:
								Var1 = { 0.724925f, 0.26955f, 0f };
								break;
							
							case 2:
								Var1 = { 0.7374f, 0.349625f, 0f };
								break;
							
							case 3:
								Var1 = { 0.76415f, 0.419225f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.2827f, -0.227825f, 0f };
								break;
							
							case 1:
								Var1 = { 0.3605f, -0.1898f, 0f };
								break;
							
							case 2:
								Var1 = { 0.4309f, -0.16365f, 0f };
								break;
							
							case 3:
								Var1 = { 0.49275f, -0.111575f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.279425f, -0.2238f, 0f };
								break;
							
							case 1:
								Var1 = { -0.200775f, -0.25855f, 0f };
								break;
							
							case 2:
								Var1 = { -0.125775f, -0.26815f, 0f };
								break;
							
							case 3:
								Var1 = { -0.05615f, -0.29435f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.685925f, 0.173275f, 0f };
								break;
							
							case 1:
								Var1 = { -0.6568f, 0.092525f, 0f };
								break;
							
							case 2:
								Var1 = { -0.612875f, 0.033025f, 0f };
								break;
							
							case 3:
								Var1 = { -0.58465f, -0.0374f, 0f };
								break;
						}
						break;
				}
				break;
			
			default:
				switch (iParam2)
				{
					case 0:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.712625f, 0.170625f, 0f };
								break;
							
							case 1:
								Var1 = { 0.6658f, 0.218375f, 0f };
								break;
							
							case 2:
								Var1 = { 0.756775f, 0.292775f, 0f };
								break;
							
							case 3:
								Var1 = { 0.701875f, 0.3439f, 0f };
								break;
						}
						break;
					
					case 1:
						switch (iParam1)
						{
							case 0:
								Var1 = { 0.278125f, -0.2571f, 0f };
								break;
							
							case 1:
								Var1 = { 0.280375f, -0.190375f, 0f };
								break;
							
							case 2:
								Var1 = { 0.397775f, -0.208525f, 0f };
								break;
							
							case 3:
								Var1 = { 0.39715f, -0.1354f, 0f };
								break;
						}
						break;
					
					case 2:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.30305f, -0.2464f, 0f };
								break;
							
							case 1:
								Var1 = { -0.257975f, -0.19715f, 0f };
								break;
							
							case 2:
								Var1 = { -0.186575f, -0.2861f, 0f };
								break;
							
							case 3:
								Var1 = { -0.141675f, -0.237925f, 0f };
								break;
						}
						break;
					
					case 3:
						switch (iParam1)
						{
							case 0:
								Var1 = { -0.72855f, 0.17345f, 0f };
								break;
							
							case 1:
								Var1 = { -0.652825f, 0.177525f, 0f };
								break;
							
							case 2:
								Var1 = { -0.6783f, 0.0744f, 0f };
								break;
							
							case 3:
								Var1 = { -0.604425f, 0.082575f, 0f };
								break;
						}
						break;
				}
				break;
			}
	}
	Var1.f_2 = fVar0;
	return Var1;
}

int func_389(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 5000:
				return joaat("vw_prop_chip_5kdollar_x1");
			
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 10000:
				return joaat("vw_prop_chip_10kdollar_x1");
			
			case 15000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 20000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 25000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 30000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 35000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 40000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			case 45000:
				return joaat("vw_prop_chip_5kdollar_st");
			
			case 50000:
				return joaat("vw_prop_chip_10kdollar_st");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 10:
				return joaat("vw_prop_chip_10dollar_x1");
			
			case 20:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 30:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 40:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 50:
				return joaat("vw_prop_chip_50dollar_x1");
			
			case 60:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 70:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 80:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 90:
				return joaat("vw_prop_chip_10dollar_st");
			
			case 100:
				return joaat("vw_prop_chip_100dollar_x1");
			
			case 150:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 200:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 250:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 300:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 350:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 400:
				return joaat("vw_prop_chip_100dollar_st");
			
			case 450:
				return joaat("vw_prop_chip_50dollar_st");
			
			case 500:
				return joaat("vw_prop_chip_500dollar_x1");
			
			case 1000:
				return joaat("vw_prop_chip_1kdollar_x1");
			
			case 1500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 2000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 2500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 3000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 3500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 4000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 4500:
				return joaat("vw_prop_chip_500dollar_st");
			
			case 5000:
				return joaat("vw_prop_plaq_5kdollar_x1");
			
			case 6000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 7000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 8000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 9000:
				return joaat("vw_prop_chip_1kdollar_st");
			
			case 10000:
				return joaat("vw_prop_plaq_10kdollar_x1");
			
			case 15000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 20000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 25000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 30000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 35000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 40000:
				return joaat("vw_prop_plaq_10kdollar_st");
			
			case 45000:
				return joaat("vw_prop_plaq_5kdollar_st");
			
			case 50000:
				return joaat("vw_prop_plaq_10kdollar_st");
			}
		
		default:
	}
	return 0;
}

Vector3 func_390(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 69.12f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, 67.8f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, 66.6f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, 70.44f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, 70.84f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, 67.88f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, 69.56f };
						break;
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 22.11f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, 22.32f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, 20.8f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, 19.8f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, 19.44f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, 26.28f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, 22.68f };
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -21.43f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, -20.16f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, -16.92f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, -23.4f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, -21.24f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, -23.76f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, -19.44f };
						break;
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -67.03f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, -69.12f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, -64.44f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, -67.68f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, -63.72f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, -68.4f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, -64.44f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 68.57f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, 67.52f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, 67.76f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, 67.04f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, 68.84f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, 65.96f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, 67.76f };
						break;
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, 22.11f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, 22f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, 24.44f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, 21.08f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, 25.96f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, 26.16f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, 28.76f };
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -14.04f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, -15.48f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, -16.56f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, -15.84f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, -16.92f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, -14.4f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, -14.28f };
						break;
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						Var0 = { 0f, 0f, -67.03f };
						break;
					
					case 1:
						Var0 = { 0f, 0f, -67.6f };
						break;
					
					case 2:
						Var0 = { 0f, 0f, -69.4f };
						break;
					
					case 3:
						Var0 = { 0f, 0f, -69.04f };
						break;
					
					case 4:
						Var0 = { 0f, 0f, -68.68f };
						break;
					
					case 5:
						Var0 = { 0f, 0f, -66.16f };
						break;
					
					case 6:
						Var0 = { 0f, 0f, -63.28f };
						break;
				}
				break;
			}
	}
	if (bParam3)
	{
		Var0.f_2 = (Var0.f_2 + 90f);
	}
	return Var0;
}

Vector3 func_391(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 0.5737f, 0.2376f, 0.948025f;
					
					case 1:
						return 0.562975f, 0.2523f, 0.94875f;
					
					case 2:
						return 0.553875f, 0.266325f, 0.94955f;
					
					case 3:
						return 0.5459f, 0.282075f, 0.9501f;
					
					case 4:
						return 0.536125f, 0.29645f, 0.95085f;
					
					case 5:
						return 0.524975f, 0.30975f, 0.9516f;
					
					case 6:
						return 0.515775f, 0.325325f, 0.95235f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						return 0.2325f, -0.1082f, 0.94805f;
					
					case 1:
						return 0.23645f, -0.0918f, 0.949f;
					
					case 2:
						return 0.2401f, -0.074475f, 0.950225f;
					
					case 3:
						return 0.244625f, -0.057675f, 0.951125f;
					
					case 4:
						return 0.249675f, -0.041475f, 0.95205f;
					
					case 5:
						return 0.257575f, -0.0256f, 0.9532f;
					
					case 6:
						return 0.2601f, -0.008175f, 0.954375f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						return -0.2359f, -0.1091f, 0.9483f;
					
					case 1:
						return -0.221025f, -0.100675f, 0.949f;
					
					case 2:
						return -0.20625f, -0.092875f, 0.949725f;
					
					case 3:
						return -0.193225f, -0.07985f, 0.950325f;
					
					case 4:
						return -0.1776f, -0.072f, 0.951025f;
					
					case 5:
						return -0.165f, -0.060025f, 0.951825f;
					
					case 6:
						return -0.14895f, -0.05155f, 0.95255f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						return -0.5765f, 0.2229f, 0.9482f;
					
					case 1:
						return -0.558925f, 0.2197f, 0.949175f;
					
					case 2:
						return -0.5425f, 0.213025f, 0.9499f;
					
					case 3:
						return -0.525925f, 0.21105f, 0.95095f;
					
					case 4:
						return -0.509475f, 0.20535f, 0.9519f;
					
					case 5:
						return -0.491775f, 0.204075f, 0.952825f;
					
					case 6:
						return -0.4752f, 0.197525f, 0.9543f;
					
					default:
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return 0.6083f, 0.3523f, 0.94795f;
					
					case 1:
						return 0.598475f, 0.366475f, 0.948925f;
					
					case 2:
						return 0.589525f, 0.3807f, 0.94975f;
					
					case 3:
						return 0.58045f, 0.39435f, 0.950375f;
					
					case 4:
						return 0.571975f, 0.4092f, 0.951075f;
					
					case 5:
						return 0.5614f, 0.4237f, 0.951775f;
					
					case 6:
						return 0.554325f, 0.4402f, 0.952525f;
					
					default:
				}
				break;
			
			case 1:
				switch (iParam0)
				{
					case 0:
						return 0.3431f, -0.0527f, 0.94855f;
					
					case 1:
						return 0.348575f, -0.0348f, 0.949425f;
					
					case 2:
						return 0.35465f, -0.018825f, 0.9502f;
					
					case 3:
						return 0.3581f, -0.001625f, 0.95115f;
					
					case 4:
						return 0.36515f, 0.015275f, 0.952075f;
					
					case 5:
						return 0.368525f, 0.032475f, 0.95335f;
					
					case 6:
						return 0.373275f, 0.0506f, 0.9543f;
					
					default:
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 0:
						return -0.116f, -0.1501f, 0.947875f;
					
					case 1:
						return -0.102725f, -0.13795f, 0.948525f;
					
					case 2:
						return -0.08975f, -0.12665f, 0.949175f;
					
					case 3:
						return -0.075025f, -0.1159f, 0.949875f;
					
					case 4:
						return -0.0614f, -0.104775f, 0.9507f;
					
					case 5:
						return -0.046275f, -0.095025f, 0.9516f;
					
					case 6:
						return -0.031425f, -0.0846f, 0.952675f;
					
					default:
				}
				break;
			
			case 3:
				switch (iParam0)
				{
					case 0:
						return -0.5205f, 0.1122f, 0.9478f;
					
					case 1:
						return -0.503175f, 0.108525f, 0.94865f;
					
					case 2:
						return -0.485125f, 0.10475f, 0.949175f;
					
					case 3:
						return -0.468275f, 0.099175f, 0.94995f;
					
					case 4:
						return -0.45155f, 0.09435f, 0.95085f;
					
					case 5:
						return -0.434475f, 0.089725f, 0.95145f;
					
					case 6:
						return -0.415875f, 0.0846f, 0.9523f;
					
					default:
				}
				break;
			}
	}
	return 0f, 0f, 0f;
}

char* func_392(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		return " ---- ";
	}
	switch (iParam0)
	{
		case 1:
			return " A  C ";
		
		case 2:
			return " 2  C ";
		
		case 3:
			return " 3  C ";
		
		case 4:
			return " 4  C ";
		
		case 5:
			return " 5  C ";
		
		case 6:
			return " 6  C ";
		
		case 7:
			return " 7  C ";
		
		case 8:
			return " 8  C ";
		
		case 9:
			return " 9  C ";
		
		case 10:
			return " 10 C ";
		
		case 11:
			return " J  C ";
		
		case 12:
			return " Q  C ";
		
		case 13:
			return " K  C ";
		
		case 14:
			return " A  D ";
		
		case 15:
			return " 2  D ";
		
		case 16:
			return " 3  D ";
		
		case 17:
			return " 4  D ";
		
		case 18:
			return " 5  D ";
		
		case 19:
			return " 6  D ";
		
		case 20:
			return " 7  D ";
		
		case 21:
			return " 8  D ";
		
		case 22:
			return " 9  D ";
		
		case 23:
			return " 10 D ";
		
		case 24:
			return " J  D ";
		
		case 25:
			return " Q  D ";
		
		case 26:
			return " K  D ";
		
		case 27:
			return " A  H ";
		
		case 28:
			return " 2  H ";
		
		case 29:
			return " 3  H ";
		
		case 30:
			return " 4  H ";
		
		case 31:
			return " 5  H ";
		
		case 32:
			return " 6  H ";
		
		case 33:
			return " 7  H ";
		
		case 34:
			return " 8  H ";
		
		case 35:
			return " 9  H ";
		
		case 36:
			return " 10 H ";
		
		case 37:
			return " J  H ";
		
		case 38:
			return " Q  H ";
		
		case 39:
			return " K  H ";
		
		case 40:
			return " A  S ";
		
		case 41:
			return " 2  S ";
		
		case 42:
			return " 3  S ";
		
		case 43:
			return " 4  S ";
		
		case 44:
			return " 5  S ";
		
		case 45:
			return " 6  S ";
		
		case 46:
			return " 7  S ";
		
		case 47:
			return " 8  S ";
		
		case 48:
			return " 9  S ";
		
		case 49:
			return " 10 S ";
		
		case 50:
			return " J  S ";
		
		case 51:
			return " Q  S ";
		
		case 52:
			return " K  S ";
		
		default:
	}
	return "";
}

int func_393(int iParam0, int iParam1, int iParam2)
{
	return ((iParam0 * 4 * 4 + iParam1 * 4) + iParam2);
}

int func_394(int iParam0)
{
	switch (floor((IntToFloat(iParam0) / 32f)))
	{
		case 0:
			return unk_0xCE990E643CD9D0E5(Local_132.f_530, (iParam0 % 32));
		
		case 1:
			return unk_0xCE990E643CD9D0E5(Local_132.f_531, (iParam0 % 32));
		
		case 2:
			return unk_0xCE990E643CD9D0E5(Local_132.f_532, (iParam0 % 32));
		
		case 3:
			return unk_0xCE990E643CD9D0E5(Local_132.f_533, (iParam0 % 32));
		
		case 4:
			return unk_0xCE990E643CD9D0E5(Local_132.f_534, (iParam0 % 32));
		
		case 5:
			return unk_0xCE990E643CD9D0E5(Local_132.f_535, (iParam0 % 32));
		
		case 6:
			return unk_0xCE990E643CD9D0E5(Local_132.f_536, (iParam0 % 32));
		
		default:
	}
	return 0;
}

void func_395(int iParam0)
{
	switch (floor((IntToFloat(iParam0) / 32f)))
	{
		case 0:
			unk_0xD2459066EA58CE43(&(Local_132.f_530), (iParam0 % 32));
			break;
		
		case 1:
			unk_0xD2459066EA58CE43(&(Local_132.f_531), (iParam0 % 32));
			break;
		
		case 2:
			unk_0xD2459066EA58CE43(&(Local_132.f_532), (iParam0 % 32));
			break;
		
		case 3:
			unk_0xD2459066EA58CE43(&(Local_132.f_533), (iParam0 % 32));
			break;
		
		case 4:
			unk_0xD2459066EA58CE43(&(Local_132.f_534), (iParam0 % 32));
			break;
		
		case 5:
			unk_0xD2459066EA58CE43(&(Local_132.f_535), (iParam0 % 32));
			break;
		
		case 6:
			unk_0xD2459066EA58CE43(&(Local_132.f_536), (iParam0 % 32));
			break;
	}
}

void func_396(int iParam0)
{
	switch (floor((IntToFloat(iParam0) / 32f)))
	{
		case 0:
			unk_0xBE20AB8238688965(&(Local_132.f_530), (iParam0 % 32));
			break;
		
		case 1:
			unk_0xBE20AB8238688965(&(Local_132.f_531), (iParam0 % 32));
			break;
		
		case 2:
			unk_0xBE20AB8238688965(&(Local_132.f_532), (iParam0 % 32));
			break;
		
		case 3:
			unk_0xBE20AB8238688965(&(Local_132.f_533), (iParam0 % 32));
			break;
		
		case 4:
			unk_0xBE20AB8238688965(&(Local_132.f_534), (iParam0 % 32));
			break;
		
		case 5:
			unk_0xBE20AB8238688965(&(Local_132.f_535), (iParam0 % 32));
			break;
		
		case 6:
			unk_0xBE20AB8238688965(&(Local_132.f_536), (iParam0 % 32));
			break;
	}
}

int func_397(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_a_a");
			
			case 2:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_02a");
			
			case 3:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_03a");
			
			case 4:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_04a");
			
			case 5:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_05a");
			
			case 6:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_06a");
			
			case 7:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_07a");
			
			case 8:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_08a");
			
			case 9:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_09a");
			
			case 10:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_10a");
			
			case 11:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_j_a");
			
			case 12:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_q_a");
			
			case 13:
				return unk_0x856D5567211886A2("vw_prop_vw_club_char_k_a");
			
			case 14:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_a_a");
			
			case 15:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_02a");
			
			case 16:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_03a");
			
			case 17:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_04a");
			
			case 18:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_05a");
			
			case 19:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_06a");
			
			case 20:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_07a");
			
			case 21:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_08a");
			
			case 22:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_09a");
			
			case 23:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_10a");
			
			case 24:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_j_a");
			
			case 25:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_q_a");
			
			case 26:
				return unk_0x856D5567211886A2("vw_prop_vw_dia_char_k_a");
			
			case 27:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_a_a");
			
			case 28:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_02a");
			
			case 29:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_03a");
			
			case 30:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_04a");
			
			case 31:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_05a");
			
			case 32:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_06a");
			
			case 33:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_07a");
			
			case 34:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_08a");
			
			case 35:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_09a");
			
			case 36:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_10a");
			
			case 37:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_j_a");
			
			case 38:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_q_a");
			
			case 39:
				return unk_0x856D5567211886A2("vw_prop_vw_hrt_char_k_a");
			
			case 40:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_a_a");
			
			case 41:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_02a");
			
			case 42:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_03a");
			
			case 43:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_04a");
			
			case 44:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_05a");
			
			case 45:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_06a");
			
			case 46:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_07a");
			
			case 47:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_08a");
			
			case 48:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_09a");
			
			case 49:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_10a");
			
			case 50:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_j_a");
			
			case 51:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_q_a");
			
			case 52:
				return unk_0x856D5567211886A2("vw_prop_vw_spd_char_k_a");
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_ace");
			
			case 2:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_02");
			
			case 3:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_03");
			
			case 4:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_04");
			
			case 5:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_05");
			
			case 6:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_06");
			
			case 7:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_07");
			
			case 8:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_08");
			
			case 9:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_09");
			
			case 10:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_10");
			
			case 11:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_jack");
			
			case 12:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_queen");
			
			case 13:
				return unk_0x856D5567211886A2("vw_prop_cas_card_club_king");
			
			case 14:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_ace");
			
			case 15:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_02");
			
			case 16:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_03");
			
			case 17:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_04");
			
			case 18:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_05");
			
			case 19:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_06");
			
			case 20:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_07");
			
			case 21:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_08");
			
			case 22:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_09");
			
			case 23:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_10");
			
			case 24:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_jack");
			
			case 25:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_queen");
			
			case 26:
				return unk_0x856D5567211886A2("vw_prop_cas_card_dia_king");
			
			case 27:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_ace");
			
			case 28:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_02");
			
			case 29:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_03");
			
			case 30:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_04");
			
			case 31:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_05");
			
			case 32:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_06");
			
			case 33:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_07");
			
			case 34:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_08");
			
			case 35:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_09");
			
			case 36:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_10");
			
			case 37:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_jack");
			
			case 38:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_queen");
			
			case 39:
				return unk_0x856D5567211886A2("vw_prop_cas_card_hrt_king");
			
			case 40:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_ace");
			
			case 41:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_02");
			
			case 42:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_03");
			
			case 43:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_04");
			
			case 44:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_05");
			
			case 45:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_06");
			
			case 46:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_07");
			
			case 47:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_08");
			
			case 48:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_09");
			
			case 49:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_10");
			
			case 50:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_jack");
			
			case 51:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_queen");
			
			case 52:
				return unk_0x856D5567211886A2("vw_prop_cas_card_spd_king");
			}
		
		default:
	}
	if (bParam1)
	{
		return unk_0x856D5567211886A2("vw_prop_vw_jo_char_01a");
	}
	return unk_0x856D5567211886A2("vw_prop_casino_cards_single");
}

void func_398()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar1 = func_399(iVar0);
		unk_0x74528AC0906CBABE(iVar1);
		iVar0++;
	}
}

int func_399(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("vw_prop_chip_10dollar_x1");
		
		case 1:
			return joaat("vw_prop_chip_50dollar_x1");
		
		case 2:
			return joaat("vw_prop_chip_100dollar_x1");
		
		case 3:
			return joaat("vw_prop_chip_500dollar_x1");
		
		case 4:
			return joaat("vw_prop_chip_1kdollar_x1");
		
		case 5:
			return joaat("vw_prop_chip_5kdollar_x1");
		
		case 6:
			return joaat("vw_prop_chip_10kdollar_x1");
		
		case 7:
			return joaat("vw_prop_chip_10dollar_st");
		
		case 8:
			return joaat("vw_prop_chip_50dollar_st");
		
		case 9:
			return joaat("vw_prop_chip_100dollar_st");
		
		case 10:
			return joaat("vw_prop_chip_500dollar_st");
		
		case 11:
			return joaat("vw_prop_chip_1kdollar_st");
		
		case 12:
			return joaat("vw_prop_chip_5kdollar_st");
		
		case 13:
			return joaat("vw_prop_chip_10kdollar_st");
		
		case 14:
			return joaat("vw_prop_plaq_5kdollar_x1");
		
		case 15:
			return joaat("vw_prop_plaq_5kdollar_st");
		
		case 16:
			return joaat("vw_prop_plaq_10kdollar_x1");
		
		case 17:
			return joaat("vw_prop_plaq_10kdollar_st");
		
		default:
	}
	return 0;
}

int func_400()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		iVar1 = func_399(iVar0);
		unk_0x78FCB2E22C41B9D5(iVar1);
		if (!unk_0x7D167B9A0CCDA347(iVar1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_401()
{
	return unk_0xCE990E643CD9D0E5(Global_1678288.f_6, 12);
}

int func_402()
{
	return func_403(8249, -1, 0);
}

int func_403(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_404(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_404(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_19();
		if (iVar1 > -1)
		{
			Global_2551544 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551544 = 1;
		}
	}
	return iVar0;
}

void func_405()
{
	if (Local_132.f_257 == 1)
	{
		if (!unk_0xAE06B9E39EBDE049(iLocal_156))
		{
			if (func_420() != func_419())
			{
				iLocal_156 = unk_0x5BBA0055476D633A(func_70(0), 1f, func_218(Global_2425869[func_420() /*443*/].f_442), 0, 0, 0);
			}
		}
		else if (func_420() != func_419() && unk_0x03DB5C6AABF8DA46())
		{
			if (unk_0x97BAFB6812B7DB68(iLocal_156) != func_363(func_420()))
			{
				unk_0xEA7F43E3A860E22C(iLocal_156, func_363(func_420()));
			}
		}
	}
	else
	{
		if (!unk_0xAE06B9E39EBDE049(iLocal_157))
		{
			iLocal_157 = unk_0x5BBA0055476D633A(1129.406f, 262.3578f, -52.041f, 1f, joaat("vw_prop_casino_blckjack_01b"), 0, 0, 0);
		}
		else if (unk_0x97BAFB6812B7DB68(iLocal_157) != 3)
		{
			unk_0xEA7F43E3A860E22C(iLocal_157, 3);
		}
		if (!unk_0xAE06B9E39EBDE049(iLocal_158))
		{
			iLocal_158 = unk_0x5BBA0055476D633A(1144.429f, 247.3352f, -52.041f, 1f, joaat("vw_prop_casino_blckjack_01b"), 0, 0, 0);
		}
		else if (unk_0xAE06B9E39EBDE049(iLocal_158) && unk_0x97BAFB6812B7DB68(iLocal_158) != 3)
		{
			unk_0xEA7F43E3A860E22C(iLocal_158, 3);
		}
	}
}

void func_406()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_132.f_257)
	{
		if (!unk_0xAE06B9E39EBDE049(iLocal_141[iVar0]))
		{
			func_407(iVar0);
		}
		iVar0++;
	}
}

void func_407(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Local_132.f_236)
	{
		iVar0 = joaat("vw_prop_vw_jo_char_01a");
	}
	else
	{
		iVar0 = joaat("vw_prop_casino_cards_single");
	}
	unk_0x78FCB2E22C41B9D5(iVar0);
	if (!unk_0x7D167B9A0CCDA347(iVar0))
	{
		return;
	}
	if (!unk_0xAE06B9E39EBDE049(iLocal_141[iParam0]))
	{
		iVar1 = unk_0x6E52E47D436A2C77(iVar0, func_409(iParam0), 0, false, 1);
		unk_0x74528AC0906CBABE(iVar0);
		unk_0xCBF81D3222C77066(iVar1, func_409(iParam0), 0, 0, 1);
		unk_0xC82085403E46A869(iVar1, func_408(iParam0), 2, 1);
		unk_0x6A8F948698B360B4(iVar1, true);
		iLocal_141[iParam0] = iVar1;
	}
}

Vector3 func_408(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 164.52f, 11.5f };
	return Vector(func_69(iParam0), 0f, 0f) + Var0;
}

Vector3 func_409(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0.526f, 0.571f, 0.963f };
	return unk_0x1BAE5C94E38E44FE(func_70(iParam0), func_69(iParam0), Var0);
}

int func_410()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_397(iVar1, Local_132.f_236);
		unk_0x78FCB2E22C41B9D5(iVar2);
		if (!unk_0x7D167B9A0CCDA347(iVar2))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_411()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_132.f_257)
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_141[iVar0]))
		{
			unk_0x315F7D8C33F0AB37(&(iLocal_141[iVar0]));
		}
		iVar0++;
	}
}

void func_412()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 52)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_397(iVar1, Local_132.f_236);
		unk_0x74528AC0906CBABE(iVar2);
		iVar0++;
	}
}

void func_413()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_132.f_257)
	{
		if (!unk_0x3D70CCF2C9B362CD(Local_122.f_1595[iVar0]))
		{
		}
		else
		{
			iVar1 = unk_0x3C6C6327BA564AEE(Local_122.f_1595[iVar0]);
			if (func_415(iVar1))
			{
				if (func_414(iVar0))
				{
					unk_0xA621A0534C11EC43(iVar1, false, 1);
				}
				else
				{
					unk_0xA621A0534C11EC43(iVar1, true, 0);
				}
			}
		}
		iVar0++;
	}
}

int func_414(int iParam0)
{
	if (unk_0xCE990E643CD9D0E5(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_4, 5) || unk_0xCE990E643CD9D0E5(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_4, 3))
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_4, 2))
	{
		if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 != iParam0)
		{
			return 0;
		}
	}
	return 1;
}

int func_415(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_416()
{
	if (unk_0x25DDB354A40FFCDB() && unk_0xAFF96FDC3971E7EA())
	{
		return 1;
	}
	return 0;
}

int func_417()
{
	return func_418(unk_0x460153A63B9477BC());
}

var func_418(int iParam0)
{
	return unk_0x039D1DD18D3EA3F3(Global_2425869[iParam0 /*443*/].f_314.f_3, 28, 31);
}

int func_419()
{
	return -1;
}

int func_420()
{
	return func_421(unk_0x460153A63B9477BC());
}

int func_421(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_419())
	{
		return iParam0;
	}
	if (func_423(iParam0) != -1)
	{
		iVar0 = func_422(func_423(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_314(iParam0, 0))
			{
				return func_212(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_419();
		}
		return Global_2425869[iParam0 /*443*/].f_314.f_9;
	}
	return func_419();
}

int func_422(int iParam0)
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
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
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
		case joaat("MPSV_LP0_31"):
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
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
	}
	return -1;
}

int func_423(int iParam0)
{
	if (iParam0 != func_419())
	{
		if (func_20(iParam0, 1, 1))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6;
		}
		else if (((Global_1312896 || Global_2405074.f_2673) && iParam0 == unk_0x460153A63B9477BC()) && func_20(iParam0, 1, 0))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6;
		}
	}
	return -1;
}

int func_424(int iParam0)
{
	if (iParam0 != func_419() && func_20(iParam0, 1, 1))
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314, 4);
	}
	return 0;
}

int func_425(int iParam0)
{
	if (iParam0 != func_419())
	{
		if (func_20(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_422(Global_2425869[iParam0 /*443*/].f_314.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_426(int iParam0)
{
	if (iParam0 != func_419())
	{
		if (func_20(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_422(Global_2425869[iParam0 /*443*/].f_314.f_6) == 14;
			}
		}
	}
	return 0;
}

bool func_427()
{
	return unk_0xCE990E643CD9D0E5(Global_1678288.f_3, 2);
}

void func_428()
{
	if (Local_132.f_1 > 2)
	{
		if (Local_131[unk_0x460153A63B9477BC() /*8*/].f_4 > -1)
		{
			Local_137.f_9 = Local_122.f_1570[Local_131[unk_0x460153A63B9477BC() /*8*/].f_4];
		}
		Local_137.f_18 = func_416();
		Local_137.f_19 = func_192();
		Local_137.f_17 = func_190(&uLocal_133, 0, 0);
		Local_137.f_7 = func_402();
		if (Global_262145.f_26108)
		{
			unk_0x69805A4C17F46811(&Local_137);
		}
	}
	if (unk_0x306BF588BD8151E8("DLC_VW_Casino_Table_Games"))
	{
		unk_0xFA07F8BEBDAAFBA8("DLC_VW_Casino_Table_Games");
	}
	if (unk_0x306BF588BD8151E8("DLC_VW_Casino_Cards_Focus_Hand"))
	{
		unk_0xFA07F8BEBDAAFBA8("DLC_VW_Casino_Cards_Focus_Hand");
	}
	func_376(0);
	func_412();
	func_398();
	func_431();
	func_430();
	func_411();
	if (unk_0xAE06B9E39EBDE049(Local_132.f_537))
	{
		unk_0x315F7D8C33F0AB37(&(Local_132.f_537));
	}
	if (Local_132.f_1 > 0)
	{
		unk_0x1082C25039B168F8(func_58());
		unk_0x1082C25039B168F8(func_72());
		unk_0x1082C25039B168F8(func_88());
		unk_0x1082C25039B168F8(func_216());
	}
	Global_1696911 = 0;
	func_429();
}

void func_429()
{
	unk_0xD39E529EBE5DB04F();
}

void func_430()
{
	int iVar0;
	int iVar1;
	
	iVar0 = (16 * Local_132.f_257);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (unk_0xAE06B9E39EBDE049(Local_132.f_538[iVar1]))
		{
			unk_0x315F7D8C33F0AB37(&(Local_132.f_538[iVar1]));
		}
		iVar1++;
	}
}

void func_431()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (11 * Local_132.f_257);
	iVar1 = (56 * Local_132.f_257);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (unk_0xAE06B9E39EBDE049(Local_132.f_648[iVar2]))
		{
			unk_0x315F7D8C33F0AB37(&(Local_132.f_648[iVar2]));
			Local_132.f_305[iVar2] = -1;
			func_395(iVar2);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		if (unk_0xAE06B9E39EBDE049(Local_132.f_603[iVar2]))
		{
			unk_0x315F7D8C33F0AB37(&(Local_132.f_603[iVar2]));
			Local_132.f_260[iVar2] = -1;
		}
		iVar2++;
	}
}

int func_432()
{
	var uVar0;
	
	func_440(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 1;
		}
	}
	if (func_439())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_438())
	{
		return 1;
	}
	if (func_437(159))
	{
		if (!func_436())
		{
			return 1;
		}
	}
	if (func_437(157))
	{
		return 1;
	}
	if (!unk_0x0EB6C63A09FD9DF1())
	{
		return 1;
	}
	if (func_433() != 0)
	{
		if (unk_0x7B70881748D166CD(func_433()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_433()
{
	switch (func_435())
	{
		case 0:
			return func_434();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_434()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_435()
{
	return Global_30968;
}

bool func_436()
{
	return Global_2451787.f_696;
}

int func_437(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_438()
{
	return Global_2462250;
}

bool func_439()
{
	return Global_2451787.f_691;
}

void func_440(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2AC1C68C7CCA90E5(1))
	{
		iVar1 = unk_0x39BE1B4CEB4DAEC8(1, iVar0);
		if (iVar1 == 174)
		{
			unk_0x477FAFFE21935947(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1035596089:
					func_441(iVar0);
					break;
				
				case 1120313136:
					unk_0x477FAFFE21935947(1, iVar0, &Var3, 4);
					if (Var3.f_2 == 397890833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_441(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_20(Var0.f_1, 1, 1))
		{
			iVar1 = unk_0x1FA7B77001D60F9D(Var0.f_1);
			if (unk_0xAE06B9E39EBDE049(iVar1))
			{
				if (unk_0x47DBF174A0CB9D55(iVar1, 0))
				{
					iVar2 = unk_0xA5D5B1042E8F47BD(iVar1, 0);
					if (unk_0x292280AF1BBBD6AC(iVar2, Var0.f_2) && unk_0x82CC259B7B4F4AD9())
					{
						if (func_442(iVar2, &bVar3))
						{
							unk_0xADCDA8AF77C0D19D(iVar2, Var0.f_2);
						}
						if (bVar3)
						{
							unk_0xE730EAF558C97567(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_442(int iParam0, var uParam1)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0x1758275D343D5BA3(iParam0))
		{
			if (unk_0x38CC98C4A0688263(iParam0))
			{
				if (!unk_0xCA6AF782C906AC86(unk_0x36FE6D3220816ADA(iParam0)))
				{
					unk_0x4F3C4F457D44BB0F(iParam0, false, 1);
					*uParam1 = 1;
				}
			}
		}
		if (unk_0x1D2A3118784C0272(iParam0, 0))
		{
			if (unk_0xAA5B806352173DEA(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_443()
{
	int iVar0;
	int iVar1;
	
	if (Global_1696903)
	{
		Global_1696903 = 0;
	}
	if (func_425(unk_0x460153A63B9477BC()) && func_420() != func_419())
	{
		if (unk_0xCE990E643CD9D0E5(Global_2425869[func_420() /*443*/].f_314.f_4, 4))
		{
			Local_132.f_236 = 1;
		}
		Global_1696913 = Global_2425869[func_420() /*443*/].f_442;
	}
	while (!(Global_2516405 != -1 || func_425(unk_0x460153A63B9477BC())))
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			func_428();
		}
		if (func_432())
		{
			func_428();
		}
		wait(0);
	}
	iVar0 = -1;
	if (func_425(unk_0x460153A63B9477BC()))
	{
		iVar0 = func_447();
	}
	unk_0xA88557896B79E30D(32, 0, iVar0);
	func_445(0, -1, 0);
	unk_0x97D2F2E2C92FD519(&Local_122, 1660);
	unk_0xBB96A3ECD45D0317(&Local_131, 257);
	if (func_425(unk_0x460153A63B9477BC()))
	{
		Local_132.f_257 = 1;
		unk_0xC1E7BB775EF0FA2E(1);
	}
	else
	{
		unk_0xC1E7BB775EF0FA2E(3);
	}
	if (!func_444())
	{
		func_428();
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		unk_0x3A396632EB359434(0);
	}
	else
	{
		func_428();
	}
	if (unk_0xAFF96FDC3971E7EA())
	{
		if (func_425(unk_0x460153A63B9477BC()))
		{
			Local_122.f_1550[0] = unk_0x344C570D6F8700DF(0, 14);
		}
		else
		{
			Local_122.f_1550[0] = Global_2516419[0];
			Local_122.f_1550[1] = Global_2516419[1];
			Local_122.f_1550[2] = Global_2516419[2];
			Local_122.f_1550[3] = Global_2516419[3];
		}
	}
	Global_1696911 = 1;
	iVar1 = 0;
	while (iVar1 < 44)
	{
		Local_132.f_260[iVar1] = -1;
		iVar1++;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 224)
	{
		Local_132.f_305[iVar1] = -1;
		func_395(iVar1);
		iVar1++;
	}
}

int func_444()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 0;
		}
		if (unk_0x331F7CFA5515B989())
		{
			return 1;
		}
		if (func_439())
		{
			return 0;
		}
		if (func_437(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		wait(0);
	}
	return 0;
}

int func_445(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x361B374A50D875B4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_429();
			}
			else
			{
				return 0;
			}
		}
		if (!func_446())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x25DDB354A40FFCDB())
				{
					if (!bParam2)
					{
						func_429();
					}
					else
					{
						return 0;
					}
				}
				if (func_439())
				{
					if (!bParam2)
					{
						func_429();
					}
					else
					{
						return 0;
					}
				}
				if (func_437(157))
				{
					if (!bParam2)
					{
						func_429();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!unk_0x3BF0BB5923982C0D())
			{
				if (!bParam2)
				{
					func_429();
				}
				else
				{
					return 0;
				}
			}
		}
		wait(0);
		iVar0 = unk_0x361B374A50D875B4();
	}
	if (iParam1 > -1)
	{
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			if (!bParam2)
			{
				func_429();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!unk_0x3BF0BB5923982C0D())
	{
		if (!bParam2)
		{
			func_429();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_446()
{
	return Global_1312872;
}

int func_447()
{
	var uVar0;
	
	uVar0 = Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_314.f_7;
	return uVar0;
}

