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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
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
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	float fLocal_34 = 0f;
	struct<3> Local_35 = { 0, 0, 0 } ;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	struct<9> Local_38 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<9> Local_39 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_40 = { 0, 0, 0 } ;
	struct<3> Local_41 = { 0, 0, 0 } ;
	struct<3> Local_42 = { 0, 0, 0 } ;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	float fLocal_46 = 0f;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	char* sLocal_57 = NULL;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	float fLocal_61 = 0f;
	float fLocal_62 = 0f;
	float fLocal_63 = 0f;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	bool bLocal_88 = 0;
	float fLocal_89 = 0f;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	float fLocal_98 = 0f;
	float fLocal_99 = 0f;
	float fLocal_100 = 0f;
	float fLocal_101 = 0f;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	float fLocal_104 = 0f;
	float fLocal_105 = 0f;
	int iLocal_106[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_107 = 0;
	struct<68> Local_108 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
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
	float fLocal_130 = 0f;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	struct<3> Local_137 = { 0, 0, 0 } ;
	int iLocal_138[2] = { 0, 0 };
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	bool bLocal_146 = 0;
	bool bLocal_147 = 0;
	bool bLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	bool bLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	bool bLocal_154 = 0;
	bool bLocal_155 = 0;
	bool bLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	bool bLocal_161 = 0;
	var uLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	var uLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
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
	struct<3> Local_207 = { 0, 0, 0 } ;
	struct<3> Local_208 = { 0, 0, 0 } ;
	struct<3> Local_209 = { 0, 0, 0 } ;
	struct<3> Local_210 = { 0, 0, 0 } ;
	struct<3> Local_211 = { 0, 0, 0 } ;
	struct<3> Local_212 = { 0, 0, 0 } ;
	float fLocal_213 = 0f;
	float fLocal_214 = 0f;
	float fLocal_215 = 0f;
	float fLocal_216 = 0f;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	char* sLocal_219 = NULL;
	char* sLocal_220 = NULL;
	int iLocal_221 = 0;
	char* sLocal_222 = NULL;
	char* sLocal_223 = NULL;
	char* sLocal_224[3] = { NULL, NULL, NULL };
	char* sLocal_225[3] = { NULL, NULL, NULL };
	char* sLocal_226[3] = { NULL, NULL, NULL };
	char* sLocal_227[3] = { NULL, NULL, NULL };
	struct<5> Local_228 = { 0, 0, 0, 0, 0 } ;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
#endregion

void __EntryFunction__()
{
	struct<460> Var0;
	int iVar1;
	struct<4> Var2;
	struct<3> Var3;
	struct<25> Var4;
	struct<682> Var5;
	struct<532> Var6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	struct<3> Var17;
	struct<3> Var18;
	struct<3> Var19;
	struct<3> Var20;
	struct<3> Var21;
	char* sVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	var uVar26[20];
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	int iVar35;
	
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
	iLocal_28 = joaat("prop_dart_1");
	iLocal_29 = joaat("prop_dart_2");
	iLocal_32 = joaat("prop_dart_bd_cab_01");
	fLocal_34 = 0.063f;
	Local_35 = { -0.0035f, 0f, -0.001f };
	iLocal_37 = joaat("prop_target_bull");
	Local_42 = { 987.8541f, -98.4173f, 73.8599f };
	fLocal_47 = 0.1f;
	iLocal_58 = 3;
	fLocal_61 = 80f;
	fLocal_62 = 140f;
	fLocal_63 = 180f;
	iLocal_69 = 1;
	iLocal_70 = 65;
	iLocal_71 = 49;
	iLocal_72 = 64;
	iLocal_95 = 65;
	iLocal_97 = 660;
	fLocal_102 = 0.27f;
	fLocal_103 = 0.1f;
	fLocal_104 = -120f;
	fLocal_105 = 127f;
	fLocal_130 = ((0.05f + 0.275f) - 0.01f);
	Local_137 = { 500f, 500f, 500f };
	bLocal_148 = true;
	Local_209 = { -573.1373f, 294.0269f, 78.1765f };
	Local_210 = { -574.1169f, 292.7964f, 78.1766f };
	Local_211 = { 1995.295f, 3050.084f, 46.91535f };
	Local_212 = { 1995.488f, 3047.383f, 46.91535f };
	fLocal_213 = 172.6813f;
	fLocal_214 = 274.5094f;
	fLocal_215 = 142.6717f;
	fLocal_216 = 44.8785f;
	Var0.f_1 = 2;
	Var0.f_5 = 2;
	Var0.f_5.f_1 = 3;
	Var0.f_5.f_1.f_79 = 3;
	Var0.f_164 = 3;
	Var0.f_257 = 16;
	Var0.f_422 = 2;
	Var0.f_425 = 2;
	Var0.f_429 = 2;
	Var0.f_432 = 2;
	Var0.f_437 = 2;
	Var0.f_440 = 2;
	Var0.f_443 = 2;
	Var0.f_446 = 2;
	Var0.f_449 = 2;
	Var4.f_1 = 2;
	Var4.f_1.f_1 = 7;
	Var4.f_1.f_1.f_8 = 7;
	Var5.f_3 = 8;
	Var5.f_12 = 8;
	Var5.f_21 = 4;
	Var5.f_26.f_3 = 8;
	Var5.f_26.f_12 = 8;
	Var5.f_26.f_21 = 4;
	Var5.f_72 = 3;
	Var5.f_72.f_44.f_3.f_1 = 4;
	Var5.f_72.f_113 = 2;
	Var5.f_72.f_113.f_1.f_1 = 4;
	Var5.f_72.f_113.f_1.f_66.f_1 = 4;
	Var5.f_72.f_246.f_6 = 12;
	Var5.f_72.f_246.f_187 = 3;
	Var5.f_509.f_2 = 8;
	Var5.f_509.f_2.f_1.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_509.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var5.f_681 = 2;
	Var6.f_32 = 3;
	Var6.f_36 = 1;
	Var6.f_53 = 2;
	Var6.f_57 = 13;
	Var6.f_71 = 13;
	Var6.f_280 = 13;
	Var6.f_489 = 13;
	Var6.f_503 = 13;
	Var6.f_517 = 13;
	Var6.f_531 = 13;
	iVar13 = 0;
	sLocal_222 = "facials@gen_female@variations@happy";
	switch (func_500(unk_0x9B0761B4C3EB8BC7()))
	{
		case 0:
			sLocal_223 = "facials@p_m_zero@variations@happy";
			break;
		
		case 1:
			sLocal_223 = "facials@p_m_one@variations@happy";
			break;
		
		case 2:
			sLocal_223 = "facials@p_m_two@variations@happy";
			break;
	}
	sLocal_224[0] = "mood_happy_1";
	sLocal_224[1] = "mood_happy_2";
	sLocal_224[2] = "mood_happy_3";
	sLocal_225[0] = "darts_outro_01_guy1";
	sLocal_225[1] = "darts_outro_02_guy2";
	sLocal_225[2] = "darts_outro_03_guy2";
	sLocal_226[0] = "darts_outro_01_guy2";
	sLocal_226[1] = "darts_outro_02_guy1";
	sLocal_226[2] = "darts_outro_03_guy1";
	sLocal_227[0] = "darts_outro_01_cam";
	sLocal_227[1] = "darts_outro_02_cam";
	sLocal_227[2] = "darts_outro_03_cam";
	iLocal_138[0] = unk_0x9B0761B4C3EB8BC7();
	bLocal_151 = true;
	Var17 = { 1992.293f, 3050.583f, 47.98973f };
	Var18 = { -572.0406f, 294.1958f, 79.9374f };
	func_499();
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		iLocal_175 = 1;
		switch (unk_0x344C570D6F8700DF(0, 2))
		{
			case 0:
				iLocal_172 = joaat("a_f_m_salton_01");
				break;
			
			case 1:
				iLocal_172 = joaat("a_f_o_salton_01");
				break;
		}
		iLocal_170 = 10;
		unk_0x69C71C91F56D82B9(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_unarmed"), true);
	}
	if (!unk_0xAE06B9E39EBDE049(ScriptParam_228.f_4))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			if (iLocal_175 == 2)
			{
				ScriptParam_228 = { Var18 };
				ScriptParam_228.f_3 = -0.09f;
			}
			else
			{
				ScriptParam_228 = { Var17 };
				ScriptParam_228.f_3 = 57.78315f;
			}
			if (unk_0x8865B8E834909D76(ScriptParam_228, 5f, joaat("prop_dart_bd_cab_01"), 0))
			{
				ScriptParam_228.f_4 = unk_0x5BBA0055476D633A(ScriptParam_228, 5f, joaat("prop_dart_bd_cab_01"), 1, 0, 1);
				unk_0x2827E7CE06E4B3F6(ScriptParam_228, 5f, joaat("prop_dart_bd_cab_01"), &ScriptParam_228, &Var19, 0);
				ScriptParam_228.f_3 = Var19.f_2;
			}
		}
	}
	else
	{
		Var19 = { unk_0x3E4D3CCC220BDFB1(ScriptParam_228.f_4, true) };
	}
	if (!unk_0xA59F96B50B97E63C(func_498(), 0))
	{
		func_496(iLocal_170, 1);
		if (unk_0x47DBF174A0CB9D55(func_498(), 0))
		{
			unk_0x0AB756271BADC8DF(func_498(), 0, 0);
		}
		iLocal_138[1] = func_498();
	}
	else
	{
		unk_0x227BB9ED71ECB6E8(1);
	}
	if (unk_0xED06FD5709A59F02(67))
	{
		func_487();
		func_469(&Var0, &Var5, &Var6);
	}
	unk_0x07CCC8C1B2AFEB92(0);
	unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
	func_467(1);
	iLocal_166 = func_464(func_500(iLocal_138[0]), 1);
	fVar15 = (to_float(iLocal_166) / 100f);
	fVar16 = (fVar15 * 1200f);
	iLocal_97 = round(fVar16);
	if (iLocal_97 < 660)
	{
		iLocal_97 = 660;
	}
	func_463(23, 1);
	while (true)
	{
		wait(0);
		unk_0x4CB4237D8858ADA6(2);
		unk_0xA86915034F55A3BF();
		unk_0x36FA9C099416853E(15, 0f, -0.0375f);
		if (iLocal_158 && Var0 < 13)
		{
			unk_0x77EEA044DF18081A(Var4, Var4.f_18, Var4.f_21, Var4.f_24, Var4.f_24, 2);
		}
		if ((unk_0x5AEB5DDFFAD43CA5(ScriptParam_228.f_5) && !unk_0xAE06B9E39EBDE049(func_498())) || (unk_0xAE06B9E39EBDE049(func_498()) && unk_0x5AEB5DDFFAD43CA5(func_498())))
		{
			func_469(&Var0, &Var5, &Var6);
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_138[0]))
		{
			unk_0x8342E6CB98CD545C(iLocal_138[0], 239, 1);
			unk_0x8342E6CB98CD545C(iLocal_138[0], 124, 1);
			func_462();
			unk_0x2B6C81DF4CD1093C(0);
			unk_0x2B6C81DF4CD1093C(2);
			iVar14 = 0;
			while (iVar14 < unk_0x3214CDFE45D11916(unk_0x9B0761B4C3EB8BC7(), &uVar26, -1))
			{
				if (uVar26[iVar14] != iLocal_138[1])
				{
					if (!unk_0x5AEB5DDFFAD43CA5(uVar26[iVar14]))
					{
						unk_0x8342E6CB98CD545C(uVar26[iVar14], 240, 1);
					}
				}
				iVar14++;
			}
			switch (Var0)
			{
				case 0:
					unk_0xD289B55B6AADBA10(1);
					func_461(&(Var0.f_243), &ScriptParam_228);
					func_460(Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0xAE06B9E39EBDE049(Var0.f_243))
					{
						Local_207 = { unk_0x7EC595B99EA7C4B1(Var0.f_243, 0.7792f, -1.138f, 0.1814f) };
						Local_208 = { -7.9947f, 0f, (Var0.f_243.f_4 + 36.19176f) };
						iLocal_84 = unk_0xB5B018137EBE06D3(26379945, Local_207, Local_208, 65f, 0, 2);
						unk_0xD64C2E5B5BA2D347(iLocal_84, 30f);
					}
					func_459();
					settimera(0);
					Var0 = 1;
					break;
				
				case 1:
					if (timera() > 500 && !unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7()))
					{
						unk_0x555EE41D7C7078E6(ScriptParam_228, 0.5f, 1, 0, 0, false);
						if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 1))
						{
							unk_0x4F83FEE4454169D4(&uLocal_173);
							unk_0x9DC06E2A59C5AEBB(&uLocal_173);
							unk_0x0AB756271BADC8DF(0, 0, 0);
							unk_0x19F29730874AD6F1(uLocal_173);
							unk_0x9B6EC2CECE1010EF(unk_0x9B0761B4C3EB8BC7(), uLocal_173);
						}
						Local_42 = { Local_42 };
						Var0 = 2;
					}
					break;
				
				case 2:
					iVar28 = 0;
					while (iVar28 < 2)
					{
						iVar29 = 0;
						while (iVar29 < 3)
						{
							func_458(&(Var0.f_5[iVar28 /*79*/][iVar29 /*26*/]), iVar28);
							iVar29++;
						}
						iVar28++;
					}
					iVar30 = 0;
					while (iVar30 < 3)
					{
						func_458(&(Var0.f_164[iVar30 /*26*/]), 0);
						iVar30++;
					}
					iVar1 = 2;
					func_457(0);
					func_455(&Var4, iLocal_175, Var0.f_243.f_1, Var0.f_243.f_4);
					if (unk_0xAE06B9E39EBDE049(Var0.f_243))
					{
						Var19 = { unk_0x71C23069714A27B9(Var0.f_243, Var4.f_18) };
					}
					func_452(&Var4, &Var5);
					unk_0xA0E955FEBF04F874(0);
					Var0 = 3;
					break;
				
				case 3:
					if (func_449(&Var4, &Var5))
					{
						func_446(&(Var0.f_243), &Var2, &Var3, 0);
						iLocal_217 = func_500(iLocal_138[0]);
						switch (iLocal_217)
						{
							case 0:
								sLocal_219 = func_445("MICHAEL");
								if (!unk_0xCE990E643CD9D0E5(Global_111819, 0))
								{
									sVar22 = "darts_ig_intro_player_0_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_0_face";
								}
								break;
							
							case 1:
								sLocal_219 = func_445("FRANKLIN");
								bLocal_155 = true;
								if (!unk_0xCE990E643CD9D0E5(Global_111819, 0))
								{
									sVar22 = "darts_ig_intro_player_1_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_1_face";
								}
								break;
							
							case 2:
								sLocal_219 = func_445("TREVOR");
								if (!unk_0xCE990E643CD9D0E5(Global_111819, 0))
								{
									sVar22 = "darts_ig_intro_player_2_face";
								}
								else
								{
									sVar22 = "darts_ig_intro_alt1_player_2_face";
								}
								break;
						}
						if (!unk_0xA59F96B50B97E63C(func_498(), 0))
						{
							iLocal_218 = func_500(func_498());
							if (iLocal_218 == 145)
							{
								iLocal_218 = func_442(func_498());
							}
							switch (iLocal_218)
							{
								case 0:
									sLocal_220 = func_445("MICHAEL");
									break;
								
								case 1:
									sLocal_220 = func_445("FRANKLIN");
									break;
								
								case 2:
									sLocal_220 = func_445("TREVOR");
									break;
								
								case 19:
									sLocal_220 = func_445("LAMAR");
									unk_0x45F588C0DD767737(func_498(), 5, 2, 0, 0);
									break;
								
								case 14:
									sLocal_220 = func_445("JIMMY");
									break;
								
								default:
									sLocal_220 = "NEW_GUY";
									break;
							}
						}
						else
						{
							iVar12 = unk_0x344C570D6F8700DF(0, 200);
							if (iLocal_175 == 2)
							{
								if (iVar12 < 51)
								{
									sLocal_220 = func_445("RAYMOND");
									iLocal_221 = 954610991;
								}
								else if (iVar12 < 101)
								{
									sLocal_220 = func_445("JOHAN");
									iLocal_221 = 94453331;
								}
								else if (iVar12 < 151)
								{
									sLocal_220 = func_445("STAN");
									iLocal_221 = 1891555423;
								}
								else
								{
									sLocal_220 = func_445("VINCE");
									iLocal_221 = -1067630349;
								}
							}
							else if (iVar12 < 51)
							{
								sLocal_220 = func_445("KRISTY");
								iLocal_221 = 885327384;
							}
							else if (iVar12 < 101)
							{
								sLocal_220 = func_445("MARLENE");
								iLocal_221 = -1791000994;
							}
							else if (iVar12 < 151)
							{
								sLocal_220 = func_445("LORIE");
								iLocal_221 = 1954368234;
							}
							else
							{
								sLocal_220 = func_445("SHELLEY");
								iLocal_221 = -863218904;
							}
						}
						iLocal_36 = unk_0x79CC07752E7432A1(iLocal_37, Var3, 1, true, 0);
						Var0.f_446[0] = 0;
						Var0.f_446[1] = 0;
						Var0 = 4;
					}
					break;
				
				case 4:
					if (!unk_0x6F5D5D6CB30417FF())
					{
						iVar27 = unk_0x79CC07752E7432A1(joaat("prop_dart_1"), Var3, 1, true, 0);
						func_439(Var0.f_243.f_4, Var2, &uVar26, &ScriptParam_228);
						func_438(&Var4, sLocal_219, sLocal_220);
						unk_0x9B94F6169B0DAEFD(iLocal_138[1]);
						iLocal_174 = unk_0xB5B018137EBE06D3(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
						if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
						{
							unk_0x854FB153F2EA838B(unk_0x9B0761B4C3EB8BC7(), -1871534317, 0, 0, 0);
						}
						func_437(&(Var0.f_257), 0, unk_0x9B0761B4C3EB8BC7(), sLocal_219, 0, 1);
						if (unk_0xA59F96B50B97E63C(func_498(), 0))
						{
							if (iLocal_175 == 2)
							{
								func_437(&(Var0.f_257), 3, iLocal_138[1], "DartsBillLost1", 0, 1);
							}
							else
							{
								func_437(&(Var0.f_257), 3, iLocal_138[1], "DartsMelHick1", 0, 1);
							}
							iVar13 = -1;
						}
						else
						{
							func_437(&(Var0.f_257), 3, func_498(), sLocal_220, 0, 1);
							func_435(&iVar25);
							iVar13 = 6;
						}
						if (!unk_0xCE990E643CD9D0E5(Global_111819, 0))
						{
							iVar13 = -1;
						}
						else
						{
							iVar13 = 3;
						}
						func_434(&Var4, 0);
						Var0 = 5;
					}
					break;
				
				case 5:
					if ((((!unk_0x5AEB5DDFFAD43CA5(iLocal_138[1]) && unk_0xEEB37DB9533AA764(iLocal_138[0])) && !unk_0x47DBF174A0CB9D55(iLocal_138[0], 1)) && unk_0xEEB37DB9533AA764(iLocal_138[1])) && !unk_0x47DBF174A0CB9D55(iLocal_138[1], 1))
					{
						bLocal_146 = func_432(&uLocal_162);
						if ((func_431() && unk_0x578C4EF320340AF7() >= iLocal_164 + 1000) && iVar13 != 9)
						{
							if (!unk_0x03DB5C6AABF8DA46() && !unk_0x5DA78AD6801A0523())
							{
								unk_0x1D40553EDD51A1B8(500);
							}
						}
						if (unk_0x03DB5C6AABF8DA46() && iVar13 != 9)
						{
							func_427(0);
							func_425();
							iVar13 = 9;
						}
						switch (iVar13)
						{
							case -1:
								if (!unk_0x5AEB5DDFFAD43CA5(iLocal_138[1]))
								{
									iLocal_168 = unk_0xF341A134A5B8D4F6(unk_0x7EC595B99EA7C4B1(ScriptParam_228.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0xEF7858F25585F853(ScriptParam_228.f_4) - 3.783146f), 2);
									iLocal_174 = unk_0x68C2E3309DCAD71E("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0x00736EE41CC355ED(iLocal_174, iLocal_168, "darts_ig_intro_cam", "mini@dartsintro");
									unk_0x856549C07003344B(iLocal_174, true);
									unk_0x3ED9330214992278(true, false, 3000, 1, 0, 0);
									unk_0xE2348E4036041923(iLocal_138[0]);
									unk_0xE2348E4036041923(iLocal_138[1]);
									unk_0x2BB0EF9DE445EA13(iLocal_138[0]);
									unk_0x2BB0EF9DE445EA13(iLocal_138[1]);
									unk_0xDFDB9C533700BC17(iLocal_138[1], iLocal_168, "mini@dartsintro", "darts_ig_intro_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0xDFDB9C533700BC17(iLocal_138[0], iLocal_168, "mini@dartsintro", "darts_ig_intro_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x756D74A3EF0AB788(iLocal_138[1], "mini@dartsintro", "darts_ig_intro_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x756D74A3EF0AB788(iLocal_138[0], "mini@dartsintro", sVar22, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x1FEB07A1AF22700F(iVar27, iLocal_168, "darts_ig_intro_dart", "mini@dartsintro", 1000f, 8f, 0, 1148846080);
									func_424(&iVar25);
									iVar13++;
								}
								break;
							
							case 0:
								if (unk_0xFC5D6FB6EECB392F(iLocal_168))
								{
									if (!bVar9)
									{
										if (func_423(&iVar25) > 1.5f)
										{
											func_422(iLocal_138[0], "DARTS_REQUEST_GAME", 6);
											bVar9 = true;
											func_421(&iVar25);
										}
									}
									else if (!unk_0x6F683C1C0BB1BA8D(iLocal_138[0]))
									{
										if (!bVar10)
										{
											if (!func_420(&iVar25))
											{
												func_435(&iVar25);
											}
											else if (func_423(&iVar25) > 0.5f)
											{
												func_419(iLocal_138[1]);
												func_421(&iVar25);
												bVar10 = true;
											}
										}
									}
									switch (iLocal_31)
									{
										case 0:
											func_424(&iVar25);
											func_418("DARTS_HOW_TO_2", -1);
											iLocal_31++;
											break;
										
										case 1:
											if (unk_0x369E69441C066912(iLocal_168) > 0.25f)
											{
												func_424(&iVar25);
												func_418("DARTS_HOW_TO_3", -1);
												iLocal_31++;
											}
											break;
										
										case 2:
											if (unk_0x369E69441C066912(iLocal_168) > 0.55f)
											{
												func_418("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
										
										case 3:
											if (unk_0x369E69441C066912(iLocal_168) > 0.85f)
											{
												func_418("DARTS_HOW_3A", -1);
												iLocal_31++;
											}
											break;
									}
									if (unk_0x369E69441C066912(iLocal_168) > 0.95f)
									{
										iLocal_158 = 1;
										iVar13++;
									}
									else if ((unk_0x578C4EF320340AF7() % 1000) < 50)
									{
									}
								}
								break;
							
							case 1:
								if (unk_0x369E69441C066912(iLocal_168) > 0.99f)
								{
									if (!unk_0x5AEB5DDFFAD43CA5(iLocal_138[1]))
									{
										func_415(Var0.f_243.f_1, Var0.f_243.f_4, func_417(2), func_416(0), 0, 1);
										iLocal_31 = 0;
										unk_0xD289B55B6AADBA10(1);
										unk_0xB8B0F7C8C1548C5B(iLocal_174, 0);
										unk_0x9B94F6169B0DAEFD(iLocal_138[0]);
										unk_0x9B94F6169B0DAEFD(iLocal_138[1]);
										unk_0x1CD098484842AE0B(iVar27, -1000f, 0);
										unk_0x315F7D8C33F0AB37(&iVar27);
										unk_0xFA07F8BEBDAAFBA8(func_414(0));
										func_421(&iVar25);
										Var0 = 6;
										iVar13 = 0;
									}
								}
								break;
							
							case 3:
								if (!unk_0x5AEB5DDFFAD43CA5(iLocal_138[1]))
								{
									iLocal_168 = unk_0xF341A134A5B8D4F6(unk_0x7EC595B99EA7C4B1(ScriptParam_228.f_4, 0.337842f, -0.243051f, -0.329731f), 0f, 0f, (unk_0xEF7858F25585F853(ScriptParam_228.f_4) - 3.783146f), 2);
									iLocal_174 = unk_0x68C2E3309DCAD71E("DEFAULT_ANIMATED_CAMERA", 0);
									unk_0x00736EE41CC355ED(iLocal_174, iLocal_168, "darts_ig_intro_alt1_cam", "mini@dartsintro_alt1");
									unk_0x856549C07003344B(iLocal_174, true);
									unk_0x3ED9330214992278(true, false, 3000, 1, 0, 0);
									unk_0xE2348E4036041923(iLocal_138[0]);
									unk_0xE2348E4036041923(iLocal_138[1]);
									unk_0x2BB0EF9DE445EA13(iLocal_138[0]);
									unk_0x2BB0EF9DE445EA13(iLocal_138[1]);
									unk_0xDFDB9C533700BC17(iLocal_138[1], iLocal_168, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0xDFDB9C533700BC17(iLocal_138[0], iLocal_168, "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy2", 1000f, -1000f, 0, 0, 1148846080, 0);
									unk_0x756D74A3EF0AB788(iLocal_138[1], "mini@dartsintro_alt1", "darts_ig_intro_alt1_guy1_face", 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x756D74A3EF0AB788(iLocal_138[0], "mini@dartsintro_alt1", sVar22, 8f, -8f, -1, 32, 0, 0, 0, 0);
									unk_0x1FEB07A1AF22700F(iVar27, iLocal_168, "darts_ig_intro_alt1_dart", "mini@dartsintro_alt1", 1000f, 8f, 0, 1148846080);
									func_424(&iVar25);
									iVar13++;
								}
								break;
							
							case 4:
								if (unk_0xFC5D6FB6EECB392F(iLocal_168))
								{
									if (!bVar9)
									{
										if (func_423(&iVar25) > 0.5f)
										{
											func_422(iLocal_138[0], "DARTS_REQUEST_GAME", 6);
											bVar9 = true;
											func_421(&iVar25);
										}
									}
									else if (!unk_0x6F683C1C0BB1BA8D(iLocal_138[0]))
									{
										if (!bVar10)
										{
											if (!func_420(&iVar25))
											{
												func_435(&iVar25);
											}
											else if (func_423(&iVar25) > 0.25f)
											{
												func_419(iLocal_138[1]);
												func_421(&iVar25);
												bVar10 = true;
											}
										}
									}
									if (unk_0x369E69441C066912(iLocal_168) > 0.95f)
									{
										iLocal_158 = 1;
										iVar13++;
									}
									else if ((unk_0x578C4EF320340AF7() % 1000) < 50)
									{
									}
								}
								break;
							
							case 5:
								if (unk_0x369E69441C066912(iLocal_168) > 0.99f)
								{
									if (!unk_0x5AEB5DDFFAD43CA5(iLocal_138[1]))
									{
										func_413();
										unk_0xB8B0F7C8C1548C5B(iLocal_174, 0);
										unk_0x9B94F6169B0DAEFD(iLocal_138[0]);
										unk_0x9B94F6169B0DAEFD(iLocal_138[1]);
										unk_0x1CD098484842AE0B(iVar27, -1000f, 0);
										unk_0x315F7D8C33F0AB37(&iVar27);
										unk_0xFA07F8BEBDAAFBA8(func_414(0));
										func_421(&iVar25);
										Var0 = 6;
										iVar13 = 0;
									}
								}
								break;
							
							case 9:
								if (unk_0x03DB5C6AABF8DA46())
								{
									iLocal_158 = 1;
									iLocal_31 = 0;
									unk_0xD289B55B6AADBA10(1);
									if (!unk_0x5AEB5DDFFAD43CA5(iLocal_138[1]))
									{
										unk_0x03D382CB0B44E2FC(iLocal_138[0], Var2, 1, 0, 0, 1);
										unk_0xE922BAA80E8F9324(iLocal_138[0], Var0.f_243.f_4);
										unk_0x03D382CB0B44E2FC(iLocal_138[1], Var2.f_3, 1, 0, 0, 1);
										unk_0xE922BAA80E8F9324(iLocal_138[1], Var0.f_243.f_4);
										unk_0x9B94F6169B0DAEFD(iLocal_138[0]);
										unk_0x9B94F6169B0DAEFD(iLocal_138[1]);
									}
									unk_0xB8B0F7C8C1548C5B(iLocal_174, 0);
									unk_0x1CD098484842AE0B(iVar27, -1000f, 0);
									unk_0x315F7D8C33F0AB37(&iVar27);
									if (!unk_0xCE990E643CD9D0E5(Global_111819, 0))
									{
										func_415(Var0.f_243.f_1, Var0.f_243.f_4, func_417(2), func_416(0), 0, 1);
									}
									else
									{
										func_413();
									}
									unk_0xFA07F8BEBDAAFBA8(func_414(0));
									func_421(&iVar25);
									unk_0xFD45D90342D2A0CD(500);
									Var0 = 6;
									iVar13 = 0;
								}
								break;
							}
					}
					break;
				
				case 6:
					switch (iVar13)
					{
						case 0:
							iLocal_164 = unk_0x578C4EF320340AF7();
							if (!unk_0x5AEB5DDFFAD43CA5(iLocal_138[1]))
							{
								unk_0x03D382CB0B44E2FC(iLocal_138[0], Var2, 1, 0, 0, 1);
								unk_0xE922BAA80E8F9324(iLocal_138[0], Var0.f_243.f_4);
								unk_0x03D382CB0B44E2FC(iLocal_138[1], Var2.f_3, 1, 0, 0, 1);
								unk_0xE922BAA80E8F9324(iLocal_138[1], Var0.f_243.f_4);
							}
							unk_0x17E478571720218F(func_414(1));
							iVar13 = 0;
							Var0 = 7;
							break;
						
						case 1:
							if ((unk_0x578C4EF320340AF7() - iLocal_164) > 1500)
							{
								func_411(&(Var5.f_57), "DARTS_TITLE", 0, 4000, 12, 2, 0, 0);
								iVar13++;
							}
							break;
						
						case 2:
							if (!func_410(&(Var5.f_57), 1, 0))
							{
								unk_0x17E478571720218F(func_414(1));
								iVar13 = 0;
								Var0 = 7;
							}
							break;
					}
					break;
				
				case 7:
					if (!unk_0xCE990E643CD9D0E5(Global_111819, 0))
					{
						if (func_407(&iVar1, &(Var0.f_243), &(Var0.f_249), &(Var0.f_1), &(Var0.f_164), &iVar24))
						{
							unk_0xBE20AB8238688965(&Global_111819, 0);
							Var0 = 8;
						}
					}
					else
					{
						unk_0x856549C07003344B(iLocal_75, true);
						Var0 = 8;
					}
					break;
				
				case 8:
					if (unk_0x03DB5C6AABF8DA46())
					{
						unk_0xFD45D90342D2A0CD(500);
					}
					switch (iVar13)
					{
						case 0:
							if (!unk_0xAE06B9E39EBDE049(func_498()))
							{
								if (!unk_0xCE990E643CD9D0E5(Global_111819, 10))
								{
									unk_0xBE20AB8238688965(&Global_111819, 10);
								}
								else
								{
									unk_0xD2459066EA58CE43(&Global_111819, 10);
								}
								func_405(&Var5);
								iVar13++;
							}
							else
							{
								func_405(&Var5);
								iVar13++;
							}
							break;
						
						case 1:
							if (unk_0xF8EDFF98A9C94C74())
							{
								if (fLocal_89 != unk_0x8940B46482DD0A7D(0))
								{
									fLocal_89 = unk_0x8940B46482DD0A7D(0);
									unk_0xD64C2E5B5BA2D347(iLocal_75, func_404(fLocal_89));
									unk_0xD64C2E5B5BA2D347(iLocal_76, func_404(fLocal_89));
								}
							}
							if (func_344(&Var5, &(Var0.f_452), &(Var0.f_453)))
							{
								unk_0xFA07F8BEBDAAFBA8(func_414(1));
								if (Var0.f_452 > 0)
								{
									iVar13 = 0;
									if (Var0.f_452 > 1 || Var0.f_453 > 1)
									{
										func_343(&Var4, 0, 0, 0, 0);
										bVar8 = true;
									}
									func_340(1, -1);
									Var0 = 9;
								}
								else if (Var0.f_452 < 0)
								{
									Var0 = 15;
								}
							}
							break;
					}
					break;
				
				case 9:
					if (func_333(&Var0, &Var4, &Var5))
					{
						Var0.f_249.f_4 = 1;
						if (Global_111858.f_18966.f_5 >= 5 && Global_111858.f_18966.f_7 >= 0.8f)
						{
							Var0.f_249.f_4 = 2;
						}
						else if (Global_111858.f_18966.f_5 >= 3 && Global_111858.f_18966.f_7 >= 0.66f)
						{
							Var0.f_249.f_4 = 1;
						}
						else
						{
							Var0.f_249.f_4 = 0;
						}
						if (func_332(Global_111858.f_18966.f_5, &iLocal_167))
						{
							func_331(&(Var5.f_666), 24, 1);
						}
						fLocal_45 = func_330(Global_111858.f_18966.f_5);
						fLocal_46 = func_329(Global_111858.f_18966.f_5);
						fLocal_43 = fLocal_45;
						fLocal_44 = fLocal_46;
						iLocal_106[4]++;
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_138[1]))
						{
							unk_0x2BB0EF9DE445EA13(iLocal_138[1]);
							unk_0x03D382CB0B44E2FC(iLocal_138[1], Var2.f_3, 1, 0, 0, 1);
							unk_0xE922BAA80E8F9324(iLocal_138[1], Var0.f_243.f_4);
						}
						if (func_420(&iVar23))
						{
							func_421(&iVar23);
						}
						unk_0x17E478571720218F(func_414(2));
						func_328(iLocal_138[1]);
						Var0 = 10;
						Var0.f_1 = 2;
					}
					break;
				
				case 10:
					if (unk_0xF8EDFF98A9C94C74())
					{
						if (fLocal_89 != unk_0x8940B46482DD0A7D(0))
						{
							fLocal_89 = unk_0x8940B46482DD0A7D(0);
							unk_0xD64C2E5B5BA2D347(iLocal_75, func_404(fLocal_89));
							unk_0xD64C2E5B5BA2D347(iLocal_76, func_404(fLocal_89));
						}
					}
					if (!bLocal_156)
					{
						unk_0x131ED02492676000("mini@dartsoutro");
						bLocal_156 = true;
					}
					if (!iLocal_157)
					{
						if (bLocal_156)
						{
							if (!unk_0xC614DDE265D18415("mini@dartsoutro"))
							{
							}
							else
							{
								iLocal_157 = 1;
							}
						}
					}
					func_246(&Var0, &Var3, &Var4, &Var5, &iVar23);
					break;
				
				case 11:
					switch (iVar13)
					{
						case 0:
							if (func_423(&(Var0.f_254)) > 0.5f)
							{
								unk_0xD289B55B6AADBA10(1);
								unk_0xB80B2936A29B2666();
								func_245(unk_0x9B0761B4C3EB8BC7());
								func_343(&Var4, Var0.f_449[0], Var0.f_449[1], Var0.f_446[0], Var0.f_446[1]);
								iVar31 = 0;
								while (iVar31 < 2)
								{
									iVar32 = 0;
									while (iVar32 < 3)
									{
										func_244(&(Var0.f_5[iVar31 /*79*/][iVar32 /*26*/]));
										iVar32++;
									}
									func_243(&Var4, iVar31);
									iVar31++;
								}
								if (Var0.f_459)
								{
									if (Var0.f_454)
									{
										func_241(&(Var5.f_62), "DARTS_WINNER", "DARTS_SETW", 4000, 5, 12);
									}
									else
									{
										func_241(&(Var5.f_62), "DARTS_LOSER", "DARTS_SETL", 4000, 5, 6);
									}
									Var0.f_459 = 0;
								}
								else if (Var0.f_454)
								{
									func_241(&(Var5.f_62), "DARTS_WINNER", "DARTS_LEGW", 4000, 5, 12);
								}
								else
								{
									func_241(&(Var5.f_62), "DARTS_LOSER", "DARTS_LEGL", 4000, 5, 6);
								}
								fVar34 = unk_0x8940B46482DD0A7D(1);
								if (fVar34 > 2f)
								{
									Var20 = { 1992.294f, 3047.577f, 46.21517f };
									Var21 = { 0f, 0f, 138.74f };
								}
								else
								{
									Var20 = { 1992.336f, 3047.924f, 46.21517f };
									Var21 = { 0f, 0f, 136.74f };
								}
								iVar33 = func_240();
								iLocal_168 = unk_0xF341A134A5B8D4F6(Var20, Var21, 2);
								iLocal_174 = unk_0x68C2E3309DCAD71E("DEFAULT_ANIMATED_CAMERA", 0);
								unk_0x00736EE41CC355ED(iLocal_174, iLocal_168, sLocal_227[iVar33], "mini@dartsoutro");
								unk_0x856549C07003344B(iLocal_174, true);
								unk_0x3ED9330214992278(true, false, 3000, 1, 0, 0);
								if (!unk_0x5AEB5DDFFAD43CA5(iLocal_138[0]) && !unk_0x5AEB5DDFFAD43CA5(iLocal_138[1]))
								{
									if (Var0.f_454)
									{
										if ((Var0.f_437[0] + Var0.f_437[1]) == 1)
										{
											iVar35 = 1;
										}
										else
										{
											iVar35 = 0;
										}
										unk_0xC4CC25B68A91D144(-1, "TENNIS_POINT_WON", "HUD_AWARDS", 1);
										func_239(&iLocal_138, iVar35);
										unk_0xDFDB9C533700BC17(iLocal_138[0], iLocal_168, "mini@dartsoutro", sLocal_225[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0xDFDB9C533700BC17(iLocal_138[1], iLocal_168, "mini@dartsoutro", sLocal_226[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x756D74A3EF0AB788(unk_0x9B0761B4C3EB8BC7(), sLocal_223, sLocal_224[unk_0x344C570D6F8700DF(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
									else
									{
										unk_0xC4CC25B68A91D144(-1, "OTHER_TEXT", "HUD_AWARDS", 1);
										func_238(&iLocal_138);
										unk_0xDFDB9C533700BC17(iLocal_138[1], iLocal_168, "mini@dartsoutro", sLocal_225[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0xDFDB9C533700BC17(iLocal_138[0], iLocal_168, "mini@dartsoutro", sLocal_226[iVar33], 1000f, -1.5f, 0, 0, 1148846080, 0);
										unk_0x756D74A3EF0AB788(iLocal_138[1], sLocal_222, sLocal_224[unk_0x344C570D6F8700DF(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
									}
								}
								iVar13++;
							}
							break;
						
						case 1:
							if (!func_236(&(Var5.f_62), 1))
							{
								iVar13++;
							}
							break;
						
						case 2:
							func_421(&(Var0.f_254));
							iLocal_152 = 0;
							unk_0xFA07F8BEBDAAFBA8(func_414(3));
							func_413();
							if (unk_0x40397A9A17EEC1C5(iLocal_174))
							{
								unk_0xB8B0F7C8C1548C5B(iLocal_174, 0);
							}
							iVar13 = 0;
							Var0 = 9;
							break;
					}
					break;
				
				case 12:
					if (func_423(&(Var0.f_254)) > 0.92f)
					{
						func_41(&Var0, &Var5, &Var4, &Var6, bVar8);
					}
					break;
				
				case 13:
					uVar11 = func_10(&Var6, 0, 1065353216, 0, 0, 0);
					if (!unk_0xA59F96B50B97E63C(func_498(), 0))
					{
						unk_0x9B94F6169B0DAEFD(iLocal_138[1]);
						Var0 = 15;
					}
					switch (iVar13)
					{
						case 0:
							unk_0x9B94F6169B0DAEFD(iLocal_138[0]);
							if (!bLocal_154)
							{
								unk_0x3ED9330214992278(false, bLocal_154, 3000, 1, 0, 0);
							}
							else
							{
								unk_0x47012CDD5C524D7B(0, 0, 3, 0);
							}
							unk_0x4C4FC7841A5FB983(0f);
							unk_0x7965943E39128B42(0f, 1065353216);
							unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
							unk_0xB80B2936A29B2666();
							unk_0xA785552633ED203B(iLocal_138[0], iLocal_138[1], 5000, 2049, 3);
							func_435(&iVar25);
							iVar13++;
							break;
						
						case 1:
							if (func_7(&iVar25) > 0.1f)
							{
								if (!bVar7)
								{
								}
								func_435(&iVar25);
								iVar13++;
							}
							break;
						
						case 2:
							if (func_7(&iVar25) > 0.3f)
							{
								if (!unk_0x5AEB5DDFFAD43CA5(iLocal_138[1]))
								{
									if (!bVar7)
									{
										func_4(iLocal_138[0], "GENERIC_THANKS", 1, 4);
									}
								}
								func_435(&iVar25);
								iVar13++;
							}
							break;
						
						case 3:
							if (uVar11 || bVar7)
							{
								Var0 = 15;
								iVar13++;
							}
							break;
					}
					break;
				
				case 14:
					func_2(&Var5);
					if (unk_0xC27AEE8B64EE0F8D(2, 201))
					{
						func_1(iLocal_138[1]);
						iLocal_171 = 2;
						bVar7 = true;
						if (unk_0x306BF588BD8151E8(func_414(2)))
						{
							unk_0xFA07F8BEBDAAFBA8(func_414(2));
						}
						Var0 = 13;
					}
					if (unk_0xC27AEE8B64EE0F8D(2, 202))
					{
						if (Var0.f_1 == 2)
						{
							iLocal_55 = 0;
						}
						func_331(&(Var5.f_666), 8, 0);
						Var0 = 10;
					}
					break;
				
				case 15:
					func_469(&Var0, &Var5, &Var6);
					break;
				}
		}
	}
}

void func_1(int iParam0)
{
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		func_4(iParam0, "GAME_QUIT_EARLY", 0, 6);
	}
}

void func_2(var uParam0)
{
	if (!unk_0xF0C12886E5C1B20E())
	{
		if (!func_3(&(uParam0->f_666), 8))
		{
			func_331(&(uParam0->f_666), 8, 1);
			func_331(&(uParam0->f_666), 15, 0);
			func_331(&(uParam0->f_666), 16, 0);
			func_331(&(uParam0->f_666), 17, 0);
		}
		unk_0x7AE6510630033F17();
		set_warning_message_with_header("DARTS_QUIT", "DARTS_QUIT_DET", 36, 0, false, -1, 0, 0, true, 0);
	}
	else if (func_3(&(uParam0->f_666), 8))
	{
		func_331(&(uParam0->f_666), 8, 0);
	}
}

bool func_3(var uParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, iParam1);
}

void func_4(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	if (!unk_0xA59F96B50B97E63C(func_498(), 0) || iParam2)
	{
		func_422(iParam0, sParam1, iParam3);
	}
	else if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		func_5(iParam0, sParam1, sLocal_57, iParam3);
	}
}

void func_5(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x1A454EFB8BC73430(iParam0, sParam1, sParam2, func_6(iParam3), 0);
}

int func_6(int iParam0)
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

float func_7(int iParam0)
{
	if (func_420(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xCE990E643CD9D0E5(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_8(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = to_float(unk_0x578C4EF320340AF7());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		iVar2 = unk_0x6CAAB7E78B5D978A();
		fVar3 = to_float(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (to_float(unk_0x578C4EF320340AF7()) / 1000f);
}

bool func_9(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(*iParam0, 2);
}

int func_10(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (unk_0xD3137A576BE9EC5C() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = unk_0xD3137A576BE9EC5C();
	if (!unk_0x25DDB354A40FFCDB())
	{
		if (unk_0x7C4984752F886E92(unk_0x1FA7B77001D60F9D(unk_0x2639A2323BEA8CC6()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (unk_0x83D81979576E65F2(unk_0x1FA7B77001D60F9D(unk_0x2639A2323BEA8CC6())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (unk_0x03DB5C6AABF8DA46() || unk_0x5DA78AD6801A0523())
		{
			unk_0xFF8E7A064055ECA6(true);
			uParam0->f_564 = 1;
		}
	}
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			if (unk_0x4C9EC9A10C274889(unk_0x460153A63B9477BC(), 0))
			{
				unk_0xD25321EB4A616B93(unk_0x460153A63B9477BC(), 0);
			}
		}
	}
	unk_0x4CB4237D8858ADA6(7);
	unk_0x4CB4237D8858ADA6(8);
	unk_0x4CB4237D8858ADA6(9);
	unk_0x4CB4237D8858ADA6(6);
	unk_0x4CB4237D8858ADA6(19);
	unk_0x779660A9E5364C4D(2, 19, 1);
	unk_0x779660A9E5364C4D(0, 37, 1);
	unk_0x779660A9E5364C4D(0, 21, 1);
	unk_0x779660A9E5364C4D(0, 28, 1);
	unk_0x779660A9E5364C4D(0, 29, 1);
	unk_0x779660A9E5364C4D(0, 171, 1);
	func_38(0);
	if (unk_0xC1F43F8D0D5EB664(2))
	{
		if (unk_0x6E3E4CA07C060994() || (unk_0x03DB5C6AABF8DA46() && !unk_0x5B772EFCB84373BE()))
		{
			unk_0x670AE643E0B07F1D();
		}
	}
	Global_42181 = 1;
	if (!uParam0->f_563)
	{
		switch (func_500(unk_0x1FA7B77001D60F9D(unk_0x2639A2323BEA8CC6())))
		{
			case 1:
				unk_0x0A794A8277A63161("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				unk_0x0A794A8277A63161("SuccessTrevor", 1000, 0);
				break;
			
			default:
				unk_0x0A794A8277A63161("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + floor((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_37(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_37(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_37((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_37(30f) - func_37(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_36(1);
		uParam0->f_572 = (uParam0->f_572 + round((0f + (1000f * timestep()))));
		func_15(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * timestep())));
			}
		}
		uParam0->f_30 = func_14(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					unk_0x830F007E19C63E14(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xE1FDD153F5858534();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * timestep())));
			}
		}
		uParam0->f_547 = func_14(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			unk_0x830F007E19C63E14(uParam0->f_1, "TRANSITION_OUT");
			unk_0xE1FDD153F5858534();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * timestep())));
				}
			}
		}
		uParam0->f_548 = func_14(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (unk_0x628AF533B14EF310(2))
			{
				if (unk_0x95EF219D38B20CFF(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_11(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (unk_0x1BD7199394D7F19A(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && unk_0x95EF219D38B20CFF(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					unk_0x830F007E19C63E14(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xE1FDD153F5858534();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					unk_0x830F007E19C63E14(uParam0->f_1, "ROLL_UP_BACKGROUND");
					unk_0xE1FDD153F5858534();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_11(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					unk_0x830F007E19C63E14(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					unk_0xE1FDD153F5858534();
				}
				uParam0->f_559 = func_14((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * timestep())), 0f, 1f);
				uParam0->f_573 = func_14((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_14((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * timestep())), 0f, 1f);
			uParam0->f_573 = func_14((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (unk_0x1BD7199394D7F19A(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			wait(0);
		}
		else
		{
			if (!bVar0)
			{
				func_36(0);
			}
			return !bVar0;
		}
	}
	func_36(0);
	return 1;
}

void func_11(var uParam0, bool bParam1)
{
	unk_0x830F007E19C63E14(uParam0->f_4, "CLEAR_ALL");
	unk_0xE1FDD153F5858534();
	if (unk_0xF8EDFF98A9C94C74())
	{
		unk_0x830F007E19C63E14(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0xF1B28F753235CE2A(true);
		unk_0xE1FDD153F5858534();
	}
	unk_0x830F007E19C63E14(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xAD291B8F75D737AD(0);
	func_13(unk_0xED026A379B794F61(2, 215, true));
	func_12("ES_HELP");
	if (unk_0xF8EDFF98A9C94C74())
	{
		unk_0xF1B28F753235CE2A(true);
		unk_0xAD291B8F75D737AD(215);
	}
	unk_0xE1FDD153F5858534();
	if (bParam1)
	{
		unk_0x830F007E19C63E14(uParam0->f_4, "SET_DATA_SLOT");
		unk_0xAD291B8F75D737AD(1);
		func_13(unk_0xED026A379B794F61(2, 216, true));
		func_12("ES_XPAND");
		if (unk_0xF8EDFF98A9C94C74())
		{
			unk_0xF1B28F753235CE2A(true);
			unk_0xAD291B8F75D737AD(216);
		}
		unk_0xE1FDD153F5858534();
	}
	unk_0x830F007E19C63E14(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xE1FDD153F5858534();
}

void func_12(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

void func_13(char* sParam0)
{
	unk_0x54AED56A452DCB4F(sParam0);
}

float func_14(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_15(var uParam0, float fParam1, bool bParam2)
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = round((uParam0->f_547 * 255f));
	fVar1 = (func_35() * 0.25f);
	if (unk_0x95EF219D38B20CFF(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				unk_0x830F007E19C63E14(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_12(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_34(&(uParam0->f_13));
				}
				else
				{
					func_12(&(uParam0->f_13));
				}
				if (unk_0x25DDB354A40FFCDB())
				{
					unk_0xAD291B8F75D737AD(150);
				}
				else
				{
					unk_0xAD291B8F75D737AD(100);
				}
				unk_0xF1B28F753235CE2A(true);
				if (uParam0->f_556 == 4)
				{
					unk_0xAD291B8F75D737AD((uParam0->f_56 - 1));
				}
				else
				{
					unk_0xAD291B8F75D737AD(uParam0->f_56);
				}
				unk_0xF1B28F753235CE2A(bParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					unk_0xAD291B8F75D737AD(2);
				}
				else
				{
					unk_0xAD291B8F75D737AD(69);
				}
				unk_0xE1FDD153F5858534();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				unk_0x830F007E19C63E14(uParam0->f_1, "TRANSITION_UP");
				unk_0x49B9B8101B158AEE(0.15f);
				unk_0xF1B28F753235CE2A(true);
				unk_0xE1FDD153F5858534();
				uParam0->f_3 = 1;
			}
		}
		func_33();
		unk_0x37FC7E88C7659D33(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_37((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_35());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_32(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (unk_0x8940B46482DD0A7D(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_32(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_35()) / 2.5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	unk_0x26A60F42A1132477(2, 215);
	unk_0x26A60F42A1132477(2, 216);
	unk_0x26A60F42A1132477(2, 200);
	unk_0x779660A9E5364C4D(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_29((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * timestep())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (unk_0x03DB5C6AABF8DA46())
			{
				unk_0xEF408E7129CB009B();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				unk_0x4CB4237D8858ADA6(7);
				unk_0x4CB4237D8858ADA6(8);
				unk_0x4CB4237D8858ADA6(9);
				unk_0x4CB4237D8858ADA6(6);
				unk_0x37FC7E88C7659D33(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				unk_0x779660A9E5364C4D(0, 140, 1);
				unk_0x779660A9E5364C4D(0, 141, 1);
				unk_0x779660A9E5364C4D(0, 142, 1);
				unk_0x779660A9E5364C4D(2, 188, 1);
				if (unk_0x79800E51B3B6D197(2, 188))
				{
					unk_0xC4CC25B68A91D144(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					unk_0xC4CC25B68A91D144(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x779660A9E5364C4D(2, 187, 1);
				if (unk_0x79800E51B3B6D197(2, 187))
				{
					unk_0xC4CC25B68A91D144(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					unk_0xC4CC25B68A91D144(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				unk_0x779660A9E5364C4D(2, 202, 1);
				if (unk_0x79800E51B3B6D197(2, 202))
				{
					unk_0xC4CC25B68A91D144(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					unk_0xC4CC25B68A91D144(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				unk_0x4CB4237D8858ADA6(7);
				unk_0x4CB4237D8858ADA6(8);
				unk_0x4CB4237D8858ADA6(9);
				unk_0x4CB4237D8858ADA6(6);
				unk_0x779660A9E5364C4D(0, 140, 1);
				unk_0x779660A9E5364C4D(0, 141, 1);
				unk_0x779660A9E5364C4D(0, 142, 1);
				if (unk_0x1BD7199394D7F19A(2, 215) || unk_0x79800E51B3B6D197(2, 200))
				{
					unk_0xC4CC25B68A91D144(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					unk_0xC4CC25B68A91D144(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	unk_0x28DD484BAEAF8437(1, &iVar13, &iVar14, &iVar15, &iVar16);
	unk_0xA11D279671F2289C(iVar13, iVar14, iVar15, iVar0);
	unk_0x86520D0C56F68D3F(fVar9, fVar10);
	unk_0xBC2BD09DB91678C5(0);
	unk_0x151E2F6EE4A34CFE(1f, 0.4f);
	fVar1 = (fVar1 - func_37(6f));
	fVar1 = (fVar1 + (func_37(30f) - func_37((2f * 2f))));
	fVar11 = (fVar2 - func_37((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
		func_33();
		unk_0x8DDE075026DB7EFD(0.5f, (fVar1 - (func_37((2f - 0.5f)) - 0.001388889f)), fVar6, func_28(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_37((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_37(25f))), 0f, 1f);
			func_25(uParam0, iVar17, (fVar1 + func_37(2f)), fVar9, fVar10, round((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_37(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_37((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_37(2f));
					fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
					func_33();
					unk_0x8DDE075026DB7EFD(0.5f, (fVar1 + func_37((2f * 0.5f))), fVar6, func_28(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_37((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_37((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_37(2f));
			fVar12 = func_14((fVar11 / (0.6f * func_37(25f))), 0f, 1f);
			func_33();
			unk_0x8DDE075026DB7EFD(0.5f, (fVar1 + func_37((2f * 0.5f))), fVar6, func_28(1f), iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_37((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_35())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_14((fVar11 / (0.8f * func_37(25f))), 0f, 1f);
			unk_0xA11D279671F2289C(iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar0))));
			func_18(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0xA2C6E70C9BCA9C34() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_35()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_35()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_35()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_35()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				unk_0x86520D0C56F68D3F(fVar20, fVar21);
				unk_0xBC2BD09DB91678C5(1);
			}
			else
			{
				fVar20 = 0.5f;
				unk_0xBC2BD09DB91678C5(0);
			}
			unk_0x151E2F6EE4A34CFE(1f, 0.4f);
			func_17(&(uParam0->f_550), fVar20, (fVar1 + func_37((2f * 2f))), 0, 0, 0);
			unk_0x86520D0C56F68D3F(fVar20, fVar21);
			unk_0xBC2BD09DB91678C5(2);
			unk_0x151E2F6EE4A34CFE(1f, 0.4f);
			unk_0x9CB19F83A6C8E47F(0);
			func_33();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			unk_0x86520D0C56F68D3F(fVar20, fVar22);
			unk_0xA11D279671F2289C(iVar13, iVar14, iVar15, round((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					unk_0x40A75E32D30C605F("PERCENTAGE");
					unk_0x42710E9E08FA375A(uParam0->f_554);
					unk_0xA434CC17B5517E4E(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 1:
					unk_0x40A75E32D30C605F("FO_TWO_NUM");
					unk_0x42710E9E08FA375A(uParam0->f_554);
					unk_0x42710E9E08FA375A(uParam0->f_555);
					unk_0xA434CC17B5517E4E(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 2:
					unk_0x40A75E32D30C605F("MTPHPER_XPNO");
					unk_0x42710E9E08FA375A(uParam0->f_554);
					unk_0xA434CC17B5517E4E(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
				
				case 5:
					unk_0x40A75E32D30C605F("ESDOLLA");
					unk_0x5181FCFE1210A213(uParam0->f_554, 1);
					unk_0xA434CC17B5517E4E(fVar20, (fVar1 + func_37((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						unk_0x28DD484BAEAF8437(107, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 3:
						unk_0x28DD484BAEAF8437(109, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 2:
						unk_0x28DD484BAEAF8437(108, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0.001388889f * 5f);
				fVar30 = ((0.00078125f * 16f) * 2f);
				fVar31 = ((0.001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_16(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_37(10f)) + fVar29);
				if (uParam0->f_556 == -1)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				unk_0x177AA645FB4B3A38(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, round((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_37(30f) - 2f));
		}
	}
}

float func_16(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_17(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	unk_0x9CB19F83A6C8E47F(iParam3);
	unk_0xE9FEE5ECCAD48813(iParam5);
	func_33();
	if (bParam4)
	{
		unk_0x40A75E32D30C605F("STRING");
		unk_0x9EFD301E3BE8324E(sParam0);
	}
	else
	{
		unk_0x40A75E32D30C605F(sParam0);
	}
	unk_0xA434CC17B5517E4E(fParam1, fParam2, 0);
}

int func_18(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	StringCopy(&cVar0, func_24(iParam0), 64);
	StringCopy(&cVar1, func_21(iParam0, bParam1), 64);
	if (unk_0x856D5567211886A2(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x9DD549AAA043F83A(&iVar2, &iVar3);
			fVar5 = unk_0x8940B46482DD0A7D(0);
			if (func_20())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_20())
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
		Var7.x = (Var7.x * (func_19(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_19(iParam0) / fVar4));
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

float func_19(int iParam0)
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

int func_20()
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

var func_21(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0x7BCC91F3C1CF24E8(&(Global_22550.f_7029[iParam0 /*16*/])))
	{
		if (unk_0x856D5567211886A2(&(Global_22550.f_7029[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_23(unk_0x460153A63B9477BC()) };
			if (unk_0x716812D32AF6C4C0(&Var2, &uVar1))
			{
				return func_22(&uVar1);
			}
		}
		else
		{
			return func_22(&(Global_22550.f_7029[iParam0 /*16*/]));
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

var func_22(var uParam0)
{
	return uParam0;
}

struct<13> func_23(int iParam0)
{
	struct<13> Var0;
	
	unk_0x2BDD80E79441BD36(iParam0, &Var0, 13);
	return Var0;
}

char* func_24(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0x7BCC91F3C1CF24E8(&(Global_22550.f_6020[iParam0 /*16*/])))
	{
		if (unk_0x856D5567211886A2(&(Global_22550.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_23(unk_0x460153A63B9477BC()) };
			unk_0x716812D32AF6C4C0(&Var1, &uVar0);
			return func_22(&uVar0);
		}
		else
		{
			return func_22(&(Global_22550.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_25(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	unk_0x28DD484BAEAF8437(1, &iVar0, &iVar1, &iVar2, &uVar3);
	unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, iParam5);
	unk_0x86520D0C56F68D3F(fParam3, fParam4);
	unk_0xBC2BD09DB91678C5(1);
	unk_0x151E2F6EE4A34CFE(1f, func_27(14f));
	unk_0x9CB19F83A6C8E47F(0);
	unk_0xE9FEE5ECCAD48813(0);
	func_33();
	if (uParam0->f_531[iParam1])
	{
		unk_0x40A75E32D30C605F("STRING");
		unk_0x9EFD301E3BE8324E(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		unk_0x40A75E32D30C605F(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			unk_0x42710E9E08FA375A(uParam0->f_489[iParam1]);
		}
	}
	unk_0xA434CC17B5517E4E(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_18(7, 0, 1, &fVar5, &fVar6, 0);
			unk_0x177AA645FB4B3A38("CommonMenu", func_21(7, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_18(5, 0, 1, &fVar5, &fVar6, 0);
			unk_0x177AA645FB4B3A38("CommonMenu", func_21(5, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_18(6, 0, 1, &fVar5, &fVar6, 0);
			unk_0x177AA645FB4B3A38("CommonMenu", func_21(6, 0), (fParam4 - 0.006f), ((fParam2 + func_37(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		unk_0xBC2BD09DB91678C5(1);
	}
	else
	{
		unk_0xBC2BD09DB91678C5(2);
	}
	unk_0x151E2F6EE4A34CFE(1f, func_27(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		unk_0x86520D0C56F68D3F(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		unk_0x86520D0C56F68D3F(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, iParam5);
	func_26(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_26(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	unk_0x9CB19F83A6C8E47F(0);
	unk_0xE9FEE5ECCAD48813(0);
	func_33();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			unk_0x151E2F6EE4A34CFE(1f, func_27(18f));
			unk_0xE9FEE5ECCAD48813(4);
			if (iParam0 < 0)
			{
				unk_0x456829A212A690D7("ESMINDOLLA");
				unk_0x5181FCFE1210A213((-1 * iParam0), 1);
				fVar1 = unk_0x842CB5919E31EB1F(0);
			}
			else
			{
				unk_0x456829A212A690D7("ESDOLLA");
				unk_0x5181FCFE1210A213(iParam0, 1);
				fVar1 = unk_0x842CB5919E31EB1F(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			unk_0x177AA645FB4B3A38("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x177AA645FB4B3A38("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x177AA645FB4B3A38("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			unk_0x151E2F6EE4A34CFE(1f, func_27(14f));
			break;
	}
	unk_0x7006FC1051C85FCA(iVar0);
	switch (iParam5)
	{
		case 11:
			unk_0x40A75E32D30C605F("PERCENTAGE");
			unk_0x42710E9E08FA375A(iParam0);
			break;
		
		case 1:
			unk_0xE9FEE5ECCAD48813(5);
			unk_0x40A75E32D30C605F("FO_NUM");
			unk_0x42710E9E08FA375A(iParam0);
			break;
		
		case 2:
			unk_0xE9FEE5ECCAD48813(5);
			unk_0x40A75E32D30C605F("FO_TWO_NUM");
			unk_0x42710E9E08FA375A(iParam0);
			unk_0x42710E9E08FA375A(iParam1);
			break;
		
		case 4:
		case 5:
			unk_0x151E2F6EE4A34CFE(1f, func_27(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				unk_0x40A75E32D30C605F("ESMINDOLLA");
				unk_0x5181FCFE1210A213((-1 * iParam0), 1);
			}
			else
			{
				unk_0x40A75E32D30C605F("ESDOLLA");
				unk_0x5181FCFE1210A213(iParam0, 1);
			}
			break;
		
		case 6:
			unk_0x40A75E32D30C605F(sParam4);
			break;
		
		case 7:
			unk_0x40A75E32D30C605F("STRING");
			unk_0x9EFD301E3BE8324E(sParam4);
			break;
		
		case 8:
			unk_0xE9FEE5ECCAD48813(5);
			unk_0x40A75E32D30C605F("STRING");
			unk_0x7899A951E85F4B28(iParam0, 14);
			break;
		
		case 9:
			unk_0xE9FEE5ECCAD48813(5);
			unk_0x40A75E32D30C605F("STRING");
			unk_0x7899A951E85F4B28(iParam0, 6);
			break;
		
		case 10:
			unk_0xE9FEE5ECCAD48813(5);
			unk_0x40A75E32D30C605F("STRING");
			unk_0x7899A951E85F4B28(iParam0, 2055);
			break;
		
		case 18:
			unk_0xE9FEE5ECCAD48813(5);
			unk_0x40A75E32D30C605F("STRING");
			unk_0x7899A951E85F4B28(iParam0, 2055);
			break;
		
		case 12:
			unk_0x40A75E32D30C605F("AHD_DIST");
			unk_0x42710E9E08FA375A(iParam0);
			break;
		
		case 13:
			unk_0x40A75E32D30C605F(sParam4);
			unk_0x42710E9E08FA375A(iParam0);
			unk_0x42710E9E08FA375A(iParam1);
			break;
		
		case 15:
		case 14:
			unk_0x40A75E32D30C605F(sParam4);
			unk_0x42710E9E08FA375A(iParam0);
			unk_0x42710E9E08FA375A(iParam1);
			break;
		
		case 16:
			unk_0x40A75E32D30C605F(sParam4);
			unk_0x42710E9E08FA375A(iParam1);
			break;
		
		case 20:
			unk_0x40A75E32D30C605F(sParam4);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			unk_0xA434CC17B5517E4E((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			unk_0x151E2F6EE4A34CFE(1f, func_27(14f));
		}
		else
		{
			unk_0xA434CC17B5517E4E(fParam2, fParam3, 0);
		}
	}
}

float func_27(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_28(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_29(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_31(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_30(7, iVar0);
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

void func_30(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_1378744.f_6304[iParam0]), iParam1);
}

bool func_31(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1378744.f_6304[iParam0], iParam1);
}

float func_32(char* sParam0)
{
	unk_0x456829A212A690D7(sParam0);
	return (unk_0x842CB5919E31EB1F(1) / 2f);
}

void func_33()
{
	unk_0x9D15035C6653D1B1(1);
	if (unk_0x5DA78AD6801A0523() || unk_0x03DB5C6AABF8DA46())
	{
		unk_0x9D15035C6653D1B1(7);
	}
	unk_0xD8D551845E3EA730(0);
}

void func_34(char* sParam0)
{
	unk_0x54AED56A452DCB4F(sParam0);
}

float func_35()
{
	float fVar0;
	
	fVar0 = 1f;
	if (unk_0xF8EDFF98A9C94C74())
	{
	}
	return fVar0;
}

void func_36(int iParam0)
{
	Global_77093 = iParam0;
	Global_77094 = iParam0;
}

float func_37(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_38(int iParam0)
{
	if (func_40())
	{
		return;
	}
	if (!Global_19681.f_1 == 1)
	{
		if (func_39(0))
		{
			func_427(iParam0);
		}
		unk_0xBE20AB8238688965(&Global_7552, 2);
	}
}

int func_39(int iParam0)
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

bool func_40()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

void func_41(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (unk_0xC1F43F8D0D5EB664(2))
	{
		unk_0x779660A9E5364C4D(2, 199, 1);
	}
	if (unk_0xDCA94C1EA9942FBD())
	{
		if (!iLocal_159)
		{
			if (func_213(uParam1, 0, &iLocal_160))
			{
				func_331(&(uParam1->f_666), 9, 0);
				iLocal_159 = 1;
			}
		}
	}
	if (iLocal_141)
	{
		if (unk_0xC1F43F8D0D5EB664(2))
		{
			unk_0x670AE643E0B07F1D();
		}
		bVar1 = true;
		if (uParam1->f_680)
		{
			if (!uParam1->f_646 && !unk_0xDCA94C1EA9942FBD())
			{
				uParam1->f_646 = func_204(&(uParam1->f_647), 0);
				bVar1 = false;
				if (uParam1->f_646)
				{
					uParam1->f_680 = 0;
					func_331(&(uParam1->f_666), 9, 0);
					uParam1->f_646 = 0;
				}
			}
			else
			{
				func_126(&(uParam1->f_72), &(uParam1->f_645));
			}
			if (bVar1)
			{
				func_122(&(uParam1->f_509), 1128792064, 1, 0, 1, 1065353216);
				if (unk_0x1BD7199394D7F19A(2, 202))
				{
					uParam1->f_680 = 0;
					func_331(&(uParam1->f_666), 9, 0);
				}
				else if (unk_0x1BD7199394D7F19A(2, 215))
				{
					iVar0 = 2;
				}
				else if (unk_0x1BD7199394D7F19A(2, 216))
				{
					iVar0 = 1;
				}
			}
			if (func_121(&(uParam1->f_72)))
			{
				if (!bLocal_161)
				{
					bLocal_161 = true;
					func_120(&(uParam1->f_509), 0, 0, 1, 1);
					func_119(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
					func_119(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
					func_119(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
					func_119(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
					func_116(&(uParam1->f_509), 1);
				}
			}
		}
		else
		{
			iVar0 = func_109(uParam1, 0, 0, iLocal_159);
			func_10(uParam3, 0, 1065353216, 0, 0, 0);
		}
		if ((unk_0xFC5D6FB6EECB392F(iLocal_168) && unk_0x369E69441C066912(iLocal_168) >= 0.995f) || !unk_0xFC5D6FB6EECB392F(iLocal_168))
		{
			bLocal_154 = true;
			if (unk_0x40397A9A17EEC1C5(iLocal_174))
			{
				unk_0xB8B0F7C8C1548C5B(iLocal_174, 0);
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_138[0]) && !unk_0x5AEB5DDFFAD43CA5(iLocal_138[1]))
				{
					unk_0x2BB0EF9DE445EA13(iLocal_138[0]);
					unk_0x2BB0EF9DE445EA13(iLocal_138[1]);
					unk_0x1322CA891C5DF18A(iLocal_138[0], 0, 0);
					unk_0x1322CA891C5DF18A(iLocal_138[1], 0, 0);
				}
			}
			func_108();
		}
		if (func_423(&(uParam0->f_254)) > 2f)
		{
			if (!iLocal_152)
			{
				if (uParam0->f_454)
				{
					if ((uParam0->f_437[0] + uParam0->f_437[1]) == 1)
					{
						iVar2 = 1;
					}
					else
					{
						iVar2 = 0;
					}
					func_239(&iLocal_138, iVar2);
				}
				else
				{
					func_238(&iLocal_138);
				}
				iLocal_152 = 1;
			}
		}
		if (iVar0 == 1)
		{
			unk_0xD289B55B6AADBA10(1);
			unk_0xFA07F8BEBDAAFBA8(func_414(3));
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_138[0]) && !unk_0x5AEB5DDFFAD43CA5(iLocal_138[1]))
			{
				unk_0xE2348E4036041923(iLocal_138[0]);
				unk_0xE2348E4036041923(iLocal_138[1]);
			}
			func_107(uParam3);
			if (bParam4)
			{
				func_343(uParam2, 0, 0, 0, 0);
			}
			uParam0->f_429[0] = 0;
			uParam0->f_429[1] = 0;
			uParam0->f_432[0] = 0;
			uParam0->f_432[1] = 0;
			iLocal_30 = 1;
			func_421(&(uParam0->f_254));
			*uParam0 = 9;
			iLocal_152 = 0;
			iLocal_150 = 0;
			bLocal_154 = false;
			func_104();
			iLocal_159 = 0;
			iLocal_134 = 0;
			uParam1->f_680 = 0;
			iLocal_160 = 0;
			bLocal_161 = false;
			func_96(&(uParam1->f_72), 0);
			func_459();
		}
		else if (iVar0 == 2)
		{
			func_95(uParam3);
			unk_0xFA07F8BEBDAAFBA8(func_414(3));
			if (uParam0->f_446[0] * 10 > 0)
			{
				func_53(func_90(), 21, uParam0->f_446[0] * 10, 0, 0);
			}
			unk_0xB80B2936A29B2666();
			*uParam0 = 13;
		}
		else if (((unk_0x1BD7199394D7F19A(0, 234) || unk_0x1BD7199394D7F19A(0, 235)) && uParam0->f_248 == 1) && bVar1)
		{
			uParam0->f_457 = 0;
			if (iLocal_140)
			{
				Var3 = { unk_0x3E4D3CCC220BDFB1(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], true) };
				func_52(Var3, 0, iLocal_140);
				iLocal_140 = 0;
			}
			else if (unk_0x1BD7199394D7F19A(2, 190))
			{
				iLocal_163++;
				if (iLocal_163 >= uParam0->f_436)
				{
					iLocal_163 = 0;
				}
				Var3 = { unk_0x3E4D3CCC220BDFB1(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], true) };
				func_50(Var3);
			}
			else if (unk_0x1BD7199394D7F19A(2, 189))
			{
				iLocal_163 = (iLocal_163 - 1);
				if (iLocal_163 < 0)
				{
					iLocal_163 = (uParam0->f_436 - 1);
				}
				Var3 = { unk_0x3E4D3CCC220BDFB1(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], true) };
				func_50(Var3);
			}
		}
		else if (((unk_0x1BD7199394D7F19A(0, 211) || unk_0x79800E51B3B6D197(0, 211)) && bVar1) && (iLocal_159 || !unk_0xDCA94C1EA9942FBD()))
		{
			uParam1->f_680 = 1;
			func_120(&(uParam1->f_509), 0, 0, 1, 1);
			func_119(&(uParam1->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			func_119(&(uParam1->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			func_119(&(uParam1->f_509), "IB_BACK", 2, 202, 1, 1, 0);
			if (bLocal_161)
			{
				func_119(&(uParam1->f_509), "SCLB_PROFILE", 2, 217, 1, 1, 0);
			}
			func_116(&(uParam1->f_509), 1);
		}
	}
	else if (!uParam0->f_457)
	{
		unk_0xD289B55B6AADBA10(1);
		unk_0xB80B2936A29B2666();
		func_46(uParam3, uParam0->f_454, uParam0->f_429[iLocal_30], uParam0->f_432[iLocal_30], iLocal_106[2], uParam0->f_437[0], uParam0->f_437[1], uParam0->f_440[0], uParam0->f_440[1], uParam0->f_443[0], uParam0->f_443[1], bParam4);
		fVar4 = unk_0x8940B46482DD0A7D(1);
		if (fVar4 > 2f)
		{
			Var5 = { 1992.294f, 3047.577f, 46.21517f };
			Var6 = { 0f, 0f, 138.74f };
		}
		else
		{
			Var5 = { 1992.336f, 3047.924f, 46.21517f };
			Var6 = { 0f, 0f, 136.74f };
		}
		iVar7 = func_240();
		iLocal_168 = unk_0xF341A134A5B8D4F6(Var5, Var6, 2);
		iLocal_174 = unk_0x68C2E3309DCAD71E("DEFAULT_ANIMATED_CAMERA", 0);
		unk_0x00736EE41CC355ED(iLocal_174, iLocal_168, sLocal_227[iVar7], "mini@dartsoutro");
		unk_0x856549C07003344B(iLocal_174, true);
		unk_0x3ED9330214992278(true, false, 3000, 1, 0, 0);
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_138[0]) && !unk_0x5AEB5DDFFAD43CA5(iLocal_138[1]))
		{
			if (uParam0->f_454)
			{
				unk_0xDFDB9C533700BC17(iLocal_138[0], iLocal_168, "mini@dartsoutro", sLocal_225[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xDFDB9C533700BC17(iLocal_138[1], iLocal_168, "mini@dartsoutro", sLocal_226[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x756D74A3EF0AB788(unk_0x9B0761B4C3EB8BC7(), sLocal_223, sLocal_224[unk_0x344C570D6F8700DF(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
			else
			{
				unk_0xDFDB9C533700BC17(iLocal_138[1], iLocal_168, "mini@dartsoutro", sLocal_225[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0xDFDB9C533700BC17(iLocal_138[0], iLocal_168, "mini@dartsoutro", sLocal_226[iVar7], 1000f, -1.5f, 0, 0, 1148846080, 0);
				unk_0x756D74A3EF0AB788(iLocal_138[1], sLocal_222, sLocal_224[unk_0x344C570D6F8700DF(0, 3)], 4f, -4f, -1, 32, 0, 0, 0, 0);
			}
		}
		bLocal_154 = false;
		uParam0->f_457 = 1;
		uParam1->f_671 = unk_0x578C4EF320340AF7();
		iVar8 = 0;
		while (iVar8 < 2)
		{
			iVar9 = 0;
			while (iVar9 < 3)
			{
				func_244(&(uParam0->f_5[iVar8 /*79*/][iVar9 /*26*/]));
				iVar9++;
			}
			func_243(uParam2, iVar8);
			iVar8++;
		}
	}
	else if ((unk_0x578C4EF320340AF7() - uParam1->f_671) > 400 && func_42(uParam3, 0, 0))
	{
		if (!uParam0->f_454)
		{
			unk_0xC4CC25B68A91D144(-1, "LOOSE_MATCH", "HUD_MINI_GAME_SOUNDSET", 1);
		}
		iLocal_141 = 1;
	}
}

int func_42(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_45(uParam0);
	func_44(uParam0);
	if (unk_0xF005CCA4263DF67F(&(uParam0->f_550), "SPR_RESULT") || (unk_0xF005CCA4263DF67F(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		unk_0x494D5FF88119CDC0("MPHud", false);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0x494D5FF88119CDC0("CommonMenu", false);
		unk_0x494D5FF88119CDC0("MPLeaderboard", false);
		unk_0x494D5FF88119CDC0("MPHud", false);
		uParam0->f_1 = unk_0x5DEA4192B46CB99B("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = unk_0x940C9218621394EA("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!unk_0x95EF219D38B20CFF(uParam0->f_1) || !unk_0xC7F5A2E99D75A65C("CommonMenu")) || !unk_0xC7F5A2E99D75A65C("MPLeaderboard")) || !unk_0xC7F5A2E99D75A65C("MPHud"))
		{
			wait(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!unk_0x95EF219D38B20CFF(uParam0->f_4))
			{
				wait(0);
			}
		}
	}
	else
	{
		if (((!unk_0x95EF219D38B20CFF(uParam0->f_1) || !unk_0xC7F5A2E99D75A65C("CommonMenu")) || !unk_0xC7F5A2E99D75A65C("MPLeaderboard")) || !unk_0xC7F5A2E99D75A65C("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!unk_0x95EF219D38B20CFF(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_43(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_11(uParam0, 1);
		}
		else
		{
			func_11(uParam0, 0);
		}
	}
	Global_77094 = 1;
	return 1;
}

void func_43(var uParam0)
{
	unk_0x830F007E19C63E14(uParam0->f_4, "CLEAR_ALL");
	unk_0xE1FDD153F5858534();
	if (unk_0xF8EDFF98A9C94C74())
	{
		unk_0x830F007E19C63E14(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		unk_0xF1B28F753235CE2A(true);
		unk_0xE1FDD153F5858534();
	}
	unk_0x830F007E19C63E14(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xAD291B8F75D737AD(2);
	func_13(unk_0xED026A379B794F61(2, 188, true));
	func_12("ES_HELP_TU");
	unk_0xE1FDD153F5858534();
	unk_0x830F007E19C63E14(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xAD291B8F75D737AD(1);
	func_13(unk_0xED026A379B794F61(2, 187, true));
	func_12("ES_HELP_TD");
	unk_0xE1FDD153F5858534();
	unk_0x830F007E19C63E14(uParam0->f_4, "SET_DATA_SLOT");
	unk_0xAD291B8F75D737AD(0);
	func_13(unk_0xED026A379B794F61(2, 202, true));
	func_12("ES_HELP_AB");
	unk_0xE1FDD153F5858534();
	unk_0x830F007E19C63E14(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	unk_0xE1FDD153F5858534();
}

void func_44(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	unk_0xBC2BD09DB91678C5(0);
	unk_0x151E2F6EE4A34CFE(1f, func_27(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			unk_0x456829A212A690D7("STRING");
			unk_0x9EFD301E3BE8324E(&(uParam0->f_13));
			fVar0 = unk_0x842CB5919E31EB1F(1);
		}
		else
		{
			unk_0x456829A212A690D7(&(uParam0->f_13));
			fVar0 = unk_0x842CB5919E31EB1F(1);
		}
	}
	else
	{
		unk_0x456829A212A690D7("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					unk_0x42710E9E08FA375A(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					unk_0x6A826E35A3096ED0(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					unk_0x9EFD301E3BE8324E(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = unk_0x842CB5919E31EB1F(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_45(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

void func_46(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	uParam0->f_561 = 1;
	if (bParam1)
	{
		func_49(uParam0, "DARTS_WINNER", "DARTS_YJ", 0);
	}
	else
	{
		func_49(uParam0, "DARTS_LOSE_R", "DARTS_YJ", 0);
	}
	func_48(uParam0, 1, "DARTS_NUM_T", "", uParam2, 0, 0, 0);
	func_48(uParam0, 1, "DARTS_NUM_B", "", uParam3, 0, 0, 0);
	func_48(uParam0, 1, "DARTS_NUM_180", "", uParam4, 0, 0, 0);
	if (bParam11)
	{
		func_48(uParam0, 2, "DARTS_WIN", "", iParam5, (iParam5 + iParam6), 0, 0);
		func_48(uParam0, 2, "DARTS_SWIN", "", iParam7, (iParam7 + iParam8), 0, 0);
	}
	func_48(uParam0, 2, "DARTS_GWIN", "", iParam9, (iParam9 + iParam10), 0, 0);
	func_47(uParam0, 0, "", 0, 0, 0, 0, 0);
	func_36(1);
}

void func_47(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	uParam0->f_549 = iParam1;
	StringCopy(&(uParam0->f_550), sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
	uParam0->f_576 = iParam7;
}

void func_48(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = uParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_49(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_50(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0 = { func_51(Param0) };
	if (bLocal_88)
	{
		unk_0x8A3898631CCEC253(iLocal_86, Var0);
		unk_0xF674D9B2033F5F86(iLocal_86, iLocal_85, 500, 1, 1);
		bLocal_88 = false;
	}
	else
	{
		unk_0x8A3898631CCEC253(iLocal_85, Var0);
		unk_0xF674D9B2033F5F86(iLocal_85, iLocal_86, 500, 1, 1);
		bLocal_88 = true;
	}
}

Vector3 func_51(struct<3> Param0)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var1 = { 0.3495f, -0.0276f, -0.0114f };
	Var0 = { Param0 - Var1 };
	return Var0;
}

void func_52(struct<3> Param0, bool bParam1, bool bParam2)
{
	struct<3> Var0;
	
	Var0 = { func_51(Param0) };
	if (bParam1)
	{
		unk_0x8A3898631CCEC253(iLocal_85, Var0);
		unk_0xF674D9B2033F5F86(iLocal_85, iLocal_84, 1500, 1, 1);
		unk_0x856549C07003344B(iLocal_84, false);
		unk_0x8A3898631CCEC253(iLocal_86, Var0);
		bLocal_88 = true;
	}
	else if (bParam2)
	{
		unk_0x8A3898631CCEC253(iLocal_85, Var0);
		unk_0xF674D9B2033F5F86(iLocal_85, iLocal_77, 2000, 1, 1);
		bLocal_88 = true;
	}
	else
	{
		if (bLocal_88)
		{
			unk_0xF674D9B2033F5F86(iLocal_84, iLocal_85, 1500, 1, 1);
		}
		else
		{
			unk_0xF674D9B2033F5F86(iLocal_84, iLocal_86, 1500, 1, 1);
		}
		unk_0x856549C07003344B(iLocal_85, false);
	}
}

void func_53(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_89(iParam0) == 3)
	{
		return;
	}
	if (func_89(iParam0) == 4)
	{
		return;
	}
	func_54(func_89(iParam0), 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("SP0_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 1:
					iVar1 = joaat("SP1_MONEY_MADE_FROM_MISSIONS");
					break;
				
				case 2:
					iVar1 = joaat("SP2_MONEY_MADE_FROM_MISSIONS");
					break;
				
				default:
					return;
				}
		}
		unk_0xD2F202166691EDB2(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		unk_0x6000E4684CB4330B(iVar1, iVar0, 1);
	}
}

int func_54(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_88();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_87(99, 1);
					func_86(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_86(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_86(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_70(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_65(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_86(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_86(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_86(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_65(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_86(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_86(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_86(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_86(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_86(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_86(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_86(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_86(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_86(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
				
				default:
					switch (unk_0x02406178CDC27728())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_86(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_86(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_86(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_86(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_65(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_86(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_86(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_86(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_86(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_86(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_64(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_87(95, iParam3);
					break;
				
				case 1:
					func_87(97, iParam3);
					break;
				
				case 2:
					func_87(96, iParam3);
					break;
			}
			func_87(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_57(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_57(iVar1);
	}
	iVar5 = (Global_58891[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_58891[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_58891[iVar2] = 2147483647;
				}
				else
				{
					Global_58891[iVar2] = (Global_58891[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_86(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_86(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_86(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_58891[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_58891[iVar2];
			Global_58891[iVar2] = (Global_58891[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_2[Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_2[Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_2[Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_111858.f_20560.f_233[iVar2 /*69*/]++;
		Global_111858.f_20560.f_233[iVar2 /*69*/].f_1++;
		if (Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_111858.f_20560.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_56(iParam0);
	if (Global_41631 == 15)
	{
		func_55(0);
	}
	return 1;
}

void func_55(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_111858.f_20560.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_58899[iVar0 /*3*/][0] = Global_111858.f_20560[iVar0];
		Global_58899.f_31[iVar0 /*3*/][0] = Global_111858.f_20560.f_11[iVar0];
		Global_58899.f_62[iVar0 /*3*/][0] = Global_111858.f_20560.f_22[iVar0];
		Global_58899.f_93[iVar0 /*3*/][0] = Global_111858.f_20560.f_33[iVar0];
		Global_58899.f_124[iVar0 /*3*/][0] = Global_111858.f_20560.f_44[iVar0];
		Global_58899.f_155[iVar0 /*3*/][0] = Global_111858.f_20560.f_55[iVar0];
		Global_58899.f_186[iVar0 /*3*/][0] = Global_111858.f_20560.f_66[iVar0];
		Global_58899.f_217[iVar0 /*3*/][0] = Global_111858.f_20560.f_77[iVar0];
		Global_58899.f_248[iVar0 /*3*/][0] = Global_111858.f_20560.f_88[iVar0];
		if (!bParam0)
		{
			Global_58899[iVar0 /*3*/][1] = Global_111858.f_20560[iVar0];
			Global_58899.f_31[iVar0 /*3*/][1] = Global_111858.f_20560.f_11[iVar0];
			Global_58899.f_62[iVar0 /*3*/][1] = Global_111858.f_20560.f_22[iVar0];
			Global_58899.f_93[iVar0 /*3*/][1] = Global_111858.f_20560.f_33[iVar0];
			Global_58899.f_124[iVar0 /*3*/][1] = Global_111858.f_20560.f_44[iVar0];
			Global_58899.f_155[iVar0 /*3*/][1] = Global_111858.f_20560.f_55[iVar0];
			Global_58899.f_186[iVar0 /*3*/][1] = Global_111858.f_20560.f_66[iVar0];
			Global_58899.f_217[iVar0 /*3*/][1] = Global_111858.f_20560.f_77[iVar0];
			Global_58899.f_248[iVar0 /*3*/][1] = Global_111858.f_20560.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_56(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_58891[iParam0];
	switch (iParam0)
	{
		case 0:
			unk_0x6000E4684CB4330B(joaat("SP0_TOTAL_CASH"), iVar0, 1);
			break;
		
		case 1:
			unk_0x6000E4684CB4330B(joaat("SP1_TOTAL_CASH"), iVar0, 1);
			break;
		
		case 2:
			unk_0x6000E4684CB4330B(joaat("SP2_TOTAL_CASH"), iVar0, 1);
			break;
	}
}

void func_57(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_63(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_63(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_63(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_63(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_60(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_60(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_60(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_60(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_60(8274, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_60(8275, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!unk_0x25DDB354A40FFCDB())
	{
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, iParam0))
		{
			bVar0 = true;
			unk_0xD2459066EA58CE43(&(Global_111858.f_20560.f_471), iParam0);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, iParam0) || unk_0xCE990E643CD9D0E5(Global_2097152[func_59() /*10931*/].f_6175.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xD2459066EA58CE43(&(Global_111858.f_20560.f_471), iParam0);
		unk_0xD2459066EA58CE43(&(Global_2097152[func_59() /*10931*/].f_6175.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x5B8DD855EAFD33B5("COUP_RED");
		unk_0x6A826E35A3096ED0(func_58(iParam0));
		unk_0x39E1440587355CC1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_58(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_59()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_60(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_61(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
}

int func_61(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_62();
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

int func_62()
{
	return Global_1312763;
}

int func_63(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	
	if (iParam2 == -1)
	{
		iParam2 = func_62();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x43BE40E27DB6DC2E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x12730A13C85FC896((iParam0 - 0)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x43BE40E27DB6DC2E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x12730A13C85FC896((iParam0 - 192)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x43BE40E27DB6DC2E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x12730A13C85FC896((iParam0 - 513)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x43BE40E27DB6DC2E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x12730A13C85FC896((iParam0 - 705)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x840F9A9E6D216561((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x12730A13C85FC896((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x840F9A9E6D216561((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x12730A13C85FC896((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x12730A13C85FC896((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x12730A13C85FC896((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x4B2E4855CB2B4FAA((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x12730A13C85FC896((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x12730A13C85FC896((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x12730A13C85FC896((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x4B2E4855CB2B4FAA((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x12730A13C85FC896((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x12730A13C85FC896((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x12730A13C85FC896((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x12730A13C85FC896((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x4B2E4855CB2B4FAA((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x12730A13C85FC896((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar17, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x4B2E4855CB2B4FAA((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x12730A13C85FC896((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x4B2E4855CB2B4FAA((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x12730A13C85FC896((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar19, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x4B2E4855CB2B4FAA((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x12730A13C85FC896((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar20, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x12730A13C85FC896((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar21, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x12730A13C85FC896((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar22, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x12730A13C85FC896((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar23, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x12730A13C85FC896((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar24, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar25 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x12730A13C85FC896((iParam0 - 30515)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar25, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_64(int iParam0)
{
	func_87(93, iParam0);
	func_87(29, iParam0);
	func_87(30, iParam0);
}

bool func_65(int iParam0)
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
	
	if (iParam0 == 8)
	{
		return func_67(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_67(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_67(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_67(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x5A002C4821A13338();
		iVar1 = func_66(8270, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x5A002C4821A13338();
		iVar3 = func_66(8271, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x5A002C4821A13338();
		iVar5 = func_66(8272, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x5A002C4821A13338();
		iVar7 = func_66(8273, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x5A002C4821A13338();
		iVar9 = func_66(8274, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x5A002C4821A13338();
		iVar11 = func_66(8275, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!unk_0x25DDB354A40FFCDB())
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, iParam0);
	}
	return unk_0xCE990E643CD9D0E5(Global_2097152[func_59() /*10931*/].f_6175.f_10, iParam0);
}

int func_66(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_61(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_67(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_62();
	}
	iVar1 = func_69(iParam0, iParam1);
	uVar2 = func_68(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x9FD0AD883E4A7C1E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_68(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - unk_0x12730A13C85FC896((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - unk_0x12730A13C85FC896((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - unk_0x12730A13C85FC896((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - unk_0x12730A13C85FC896((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - unk_0x12730A13C85FC896((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - unk_0x12730A13C85FC896((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - unk_0x12730A13C85FC896((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - unk_0x12730A13C85FC896((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - unk_0x12730A13C85FC896((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - unk_0x12730A13C85FC896((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - unk_0x12730A13C85FC896((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - unk_0x12730A13C85FC896((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - unk_0x12730A13C85FC896((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - unk_0x12730A13C85FC896((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - unk_0x12730A13C85FC896((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - unk_0x12730A13C85FC896((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - unk_0x12730A13C85FC896((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - unk_0x12730A13C85FC896((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - unk_0x12730A13C85FC896((iParam0 - 26810)) * 64);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = ((iParam0 - 28098) - unk_0x12730A13C85FC896((iParam0 - 28098)) * 64);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = ((iParam0 - 28355) - unk_0x12730A13C85FC896((iParam0 - 28355)) * 64);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = ((iParam0 - 30227) - unk_0x12730A13C85FC896((iParam0 - 30227)) * 64);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = ((iParam0 - 30355) - unk_0x12730A13C85FC896((iParam0 - 30355)) * 64);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = ((iParam0 - 30515) - unk_0x12730A13C85FC896((iParam0 - 30515)) * 64);
	}
	return iVar0;
}

int func_69(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_62();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = unk_0x43BE40E27DB6DC2E((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = unk_0x840F9A9E6D216561((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = unk_0x840F9A9E6D216561((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30227), 0, 1, iParam1, "_SU20PSTAT_BOOL");
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30355), 0, 1, iParam1, "_SU20TATTOOSTAT_BOOL");
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar0 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30515), 0, 1, iParam1, "_HISLANDPSTAT_BOOL");
	}
	return iVar0;
}

int func_70(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (unk_0x027BA2E902FAC118(27))
	{
		return 0;
	}
	if (unk_0xD2F202166691EDB2(joaat("SP0_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD2F202166691EDB2(joaat("SP1_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (unk_0xD2F202166691EDB2(joaat("SP2_MONEY_TOTAL_SPENT"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	unk_0xD2F202166691EDB2(joaat("NUM_CASH_SPENT"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		unk_0x6000E4684CB4330B(joaat("NUM_CASH_SPENT"), iVar1, 1);
		func_85(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_71(27, 1);
	return 1;
}

int func_71(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_72(iParam0, iParam1);
}

int func_72(int iParam0, int iParam1)
{
	if (func_84(14) && !func_83(iParam0))
	{
		return 0;
	}
	if (unk_0x027BA2E902FAC118(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_31217 != 0 && !Global_76833)
	{
		return 0;
	}
	if (func_82(&Global_4271324))
	{
		if (func_80(&Global_4271324, iParam0))
		{
			return 0;
		}
		if (func_73(&Global_4271324, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!unk_0x1C382E0E92F57545(iParam0))
		{
			return 0;
		}
		if (unk_0x027BA2E902FAC118(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_73(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x027BA2E902FAC118(iParam1))
	{
		return 0;
	}
	if (func_84(14) && !func_83(iParam1))
	{
		return 0;
	}
	if (func_80(uParam0, iParam1))
	{
		return 0;
	}
	if (func_79(uParam0) < 0f)
	{
		func_78(uParam0, 0);
	}
	func_76(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_74(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_74(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x027BA2E902FAC118(iParam1))
	{
		return 0;
	}
	if (func_84(14) && !func_83(iParam1))
	{
		return 0;
	}
	if (func_80(uParam0, iParam1))
	{
		return 0;
	}
	if (func_79(uParam0) < 0f)
	{
		func_78(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_75(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_75(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_76(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_77(uParam0, iVar0);
		iVar0++;
	}
	func_78(uParam0, (Global_4271323 - 0.5f));
}

void func_77(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_78(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_79(var uParam0)
{
	return uParam0->f_80;
}

bool func_80(var uParam0, int iParam1)
{
	return func_81(uParam0, iParam1) != -1;
}

int func_81(var uParam0, int iParam1)
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

bool func_82(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_83(int iParam0)
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

bool func_84(int iParam0)
{
	return Global_41631 == iParam0;
}

int func_85(int iParam0, int iParam1)
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
	iVar0 = unk_0x76B47D2BF8F31200(iParam0);
	if (iParam1 > iVar0)
	{
		return unk_0xD4563E24351CCDF9(iParam0, iParam1);
	}
	return 0;
}

void func_86(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD2F202166691EDB2(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x6000E4684CB4330B(iParam0, iVar0, 1);
}

void func_87(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_57459[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		return;
	}
	if (Global_57459[iParam0 /*7*/])
	{
		unk_0xD2F202166691EDB2(Global_57459[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		unk_0x6000E4684CB4330B(Global_57459[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_88()
{
	int iVar0;
	
	if (unk_0x011A67D2B195B6EB())
	{
		unk_0xD2F202166691EDB2(joaat("SP0_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58891[0] == iVar0)
		{
			Global_58891[0] = iVar0;
		}
		unk_0xD2F202166691EDB2(joaat("SP1_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58891[1] == iVar0)
		{
			Global_58891[1] = iVar0;
		}
		unk_0xD2F202166691EDB2(joaat("SP2_TOTAL_CASH"), &iVar0, -1);
		if (!Global_58891[2] == iVar0)
		{
			Global_58891[2] = iVar0;
		}
	}
}

int func_89(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_17;
}

int func_90()
{
	func_91();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_91()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_93(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_500(unk_0x9B0761B4C3EB8BC7());
			if (func_92(iVar0) && (!func_84(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_92(Global_111858.f_2359.f_539.f_4321))
				{
					Global_111858.f_2359.f_539.f_4322 = Global_111858.f_2359.f_539.f_4321;
				}
				Global_111858.f_2359.f_539.f_4323 = iVar0;
				Global_111858.f_2359.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111858.f_2359.f_539.f_4321 != 145)
			{
				Global_111858.f_2359.f_539.f_4323 = Global_111858.f_2359.f_539.f_4321;
			}
			return;
		}
	}
	Global_111858.f_2359.f_539.f_4321 = 145;
}

bool func_92(int iParam0)
{
	return iParam0 < 3;
}

int func_93(int iParam0)
{
	if (func_92(iParam0))
	{
		return func_94(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_94(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

void func_95(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

void func_96(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0)
	{
		func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_102(uParam0);
		func_101(uParam0);
		func_100(&Global_1839723);
	}
	if (Global_1835392.f_2708 != 0 || Global_1835392.f_3184)
	{
		func_98();
	}
	if (unk_0x306BF588BD8151E8("LEADERBOARD_SCENE"))
	{
		unk_0xFA07F8BEBDAAFBA8("LEADERBOARD_SCENE");
	}
	if (unk_0x0EB6C63A09FD9DF1())
	{
		func_97(&(Global_1840924.f_49));
	}
	Global_2540384.f_4028 = 0;
}

void func_97(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_98()
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1835392[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1835392.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2708 = 0;
	Global_1835392.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1835392.f_2710[iVar0] = 0;
		StringCopy(&(Global_1835392.f_2717[iVar0 /*6*/]), "", 24);
		Global_1835392.f_2754[iVar0] = 0;
		Global_1835392.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2768 = 0;
	Global_1835392.f_2769 = 0;
	Global_1835392.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835392.f_2771[iVar0] = 0;
		Global_1835392.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2779 = 0;
	func_99(&(Global_1835392.f_2780));
	func_97(&(Global_1835392.f_2823));
	Global_1835392.f_2825 = -1;
	Global_1835392.f_2826 = 0;
	func_97(&(Global_1835392.f_2827));
	Global_1835392.f_2829 = 0;
	func_97(&(Global_1835392.f_2830));
	Global_1835392.f_2832 = 0;
	Global_1835392.f_2780.f_28 = 0;
	Global_1835392.f_2780.f_27 = 0;
	Global_1835392.f_3184 = 0;
}

void func_99(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_100(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 12)
	{
		StringCopy(uParam0[iVar1 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar1 /*100*/])->f_16), "", 64);
		(uParam0[iVar1 /*100*/])->f_32 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_45 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_58 = 0;
		(uParam0[iVar1 /*100*/])->f_59 = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			(uParam0[iVar1 /*100*/])->f_60[iVar2] = 0f;
			(uParam0[iVar1 /*100*/])->f_67[iVar2] = 0;
			iVar2++;
		}
		(uParam0[iVar1 /*100*/])->f_75 = 0;
		(uParam0[iVar1 /*100*/])->f_74 = 0;
		(uParam0[iVar1 /*100*/])->f_76 = 0;
		(uParam0[iVar1 /*100*/])->f_77 = 0;
		(uParam0[iVar1 /*100*/])->f_78 = 0;
		(uParam0[iVar1 /*100*/])->f_79 = 0;
		StringCopy(&((uParam0[iVar1 /*100*/])->f_80), "", 16);
		iVar1++;
	}
	func_97(&(Global_1835392.f_2830));
}

void func_101(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_97(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0 /*15*/] = -1;
		uParam0->f_246.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_246.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_102(var uParam0)
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

void func_103(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_97(&(Global_1835008.f_1));
	unk_0xEB3E12B03B57D9D4(*uParam2, uParam2->f_1, -1);
}

void func_104()
{
	struct<68> Var0;
	
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_106(&(Global_1835013.f_73));
	func_106(&(Global_1835013.f_142));
	func_106(&(Global_1835013.f_211));
	func_106(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_105(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_105(var uParam0)
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

void func_106(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_107(var uParam0)
{
	func_45(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_108()
{
	unk_0x856549C07003344B(iLocal_81, true);
}

int func_109(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_3(&(uParam0->f_666), 7))
	{
		if (!func_3(&(uParam0->f_666), 9))
		{
			func_36(1);
			func_120(&(uParam0->f_509), 0, 0, 1, 1);
			func_119(&(uParam0->f_509), "DARTS_CONT", 2, 215, 1, 1, 0);
			if (!bParam2)
			{
				func_119(&(uParam0->f_509), "DARTS_REMATCH", 2, 216, 1, 1, 0);
			}
			else
			{
				func_119(&(uParam0->f_509), "DARTS_REPLAY", 2, 216, 1, 1, 0);
			}
			if (iParam3 || !unk_0xDCA94C1EA9942FBD())
			{
				func_119(&(uParam0->f_509), "HUD_LBD_LBD", 2, 211, 1, 1, 0);
			}
			func_116(&(uParam0->f_509), 1);
			func_331(&(uParam0->f_666), 8, 0);
			func_331(&(uParam0->f_666), 9, 1);
		}
		if (!func_3(&(uParam0->f_666), 14))
		{
			if (bParam1)
			{
				if (!bParam2)
				{
					func_112(func_115(uParam0->f_668 < uParam0->f_669, uParam0->f_668, uParam0->f_669), func_114(uParam0->f_668 < uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
					func_112(func_115(uParam0->f_668 >= uParam0->f_669, uParam0->f_668, uParam0->f_669), func_114(uParam0->f_668 >= uParam0->f_669, &(uParam0->f_648), &(uParam0->f_654)), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
				else
				{
					func_112(uParam0->f_668, &(uParam0->f_648), -1, 1, 2, 1, 0, 1, 0, 0, 0, 0, 0, 0, -1);
				}
				func_410(&(uParam0->f_57), 0, 0);
			}
			func_122(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
		}
		if (!unk_0xF0C12886E5C1B20E())
		{
			if ((unk_0x578C4EF320340AF7() - uParam0->f_671) > 900)
			{
				if (unk_0x22D6FB6153F774D3(2, 216))
				{
					unk_0xC4CC25B68A91D144(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_331(&(uParam0->f_666), 9, 0);
					return 1;
				}
				else if (unk_0x1BD7199394D7F19A(2, 215))
				{
					unk_0xC4CC25B68A91D144(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					func_111();
					func_110();
					return 2;
				}
			}
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0xC27AEE8B64EE0F8D(2, 201))
		{
			return 2;
		}
		else if (unk_0xC27AEE8B64EE0F8D(2, 202))
		{
			func_331(&(uParam0->f_666), 9, 0);
			func_331(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_110()
{
	if (Global_2440049.f_2834[0 /*80*/].f_2 != 0)
	{
		Global_2440049.f_2834[0 /*80*/].f_2 = 5;
	}
}

void func_111()
{
	Global_31112 = 1;
}

void func_112(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	int iVar0;
	int iVar1;
	
	if (func_113(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_31(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_30(3, iVar0);
		Global_1378744.f_2775[iVar0] = iParam0;
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

int func_113(char* sParam0)
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

char* func_114(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_115(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_116(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_118(&(uParam0->f_1), 1024);
	}
	else
	{
		func_117(&(uParam0->f_1), 1024);
	}
}

void func_117(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_118(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_119(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			unk_0xBE20AB8238688965(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_120(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x940C9218621394EA("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_118(&(uParam0->f_1), 32);
	}
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		func_118(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x331FC4694C14FA44(*uParam0, 1);
		}
	}
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (bParam3)
		{
			func_118(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_118(&(uParam0->f_1), 8192);
	}
}

int func_121(var uParam0)
{
	if ((unk_0xCE990E643CD9D0E5(uParam0->f_42, 1) && Global_1835392.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

void func_122(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((unk_0x5DA78AD6801A0523() || unk_0x5B772EFCB84373BE()) || unk_0x03DB5C6AABF8DA46()) || unk_0x463040FA7A1E5224())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_125(uParam0))
	{
		return;
	}
	unk_0xEF408E7129CB009B();
	unk_0x9D15035C6653D1B1(iParam2);
	if (!func_124(uParam0->f_1, 256) || (func_124(uParam0->f_1, 8192) && unk_0x628AF533B14EF310(2)))
	{
		unk_0x830F007E19C63E14(*uParam0, "SET_CLEAR_SPACE");
		unk_0x49B9B8101B158AEE(fParam1);
		unk_0xE1FDD153F5858534();
		unk_0x830F007E19C63E14(*uParam0, "SET_MAX_WIDTH");
		unk_0x49B9B8101B158AEE(fParam5);
		unk_0xE1FDD153F5858534();
		unk_0x830F007E19C63E14(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xE1FDD153F5858534();
		if (unk_0xF8EDFF98A9C94C74())
		{
			unk_0x830F007E19C63E14(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			unk_0xF1B28F753235CE2A(func_124(uParam0->f_1, 4096));
			unk_0xE1FDD153F5858534();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = unk_0xC1F43F8D0D5EB664(2);
					break;
				
				case 2:
					bVar4 = !unk_0xC1F43F8D0D5EB664(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (unk_0x830F007E19C63E14(*uParam0, "SET_DATA_SLOT"))
				{
					unk_0xAD291B8F75D737AD(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = unk_0xCE990E643CD9D0E5(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!unk_0xCE990E643CD9D0E5(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							sVar3 = unk_0xED026A379B794F61(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = unk_0x32F8D6499042A233(iVar0, iVar1, bVar2);
						}
						if (!unk_0x7BCC91F3C1CF24E8(sVar3))
						{
							func_13(sVar3);
						}
						iVar7++;
					}
					if (!unk_0x7BCC91F3C1CF24E8(uParam0->f_2[iVar6 /*15*/]))
					{
						func_12(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0xF8EDFF98A9C94C74())
					{
						if (func_124(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								unk_0xF1B28F753235CE2A(true);
								unk_0xAD291B8F75D737AD(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								unk_0xF1B28F753235CE2A(false);
								unk_0xAD291B8F75D737AD(-1);
							}
						}
					}
					unk_0xE1FDD153F5858534();
				}
			}
			iVar6++;
		}
		fVar8 = func_123(bParam4, func_123(func_124(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x830F007E19C63E14(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x49B9B8101B158AEE(fVar8);
		unk_0xE1FDD153F5858534();
		unk_0x830F007E19C63E14(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x49B9B8101B158AEE(0f);
		unk_0x49B9B8101B158AEE(0f);
		unk_0x49B9B8101B158AEE(0f);
		unk_0x49B9B8101B158AEE(80f);
		unk_0xE1FDD153F5858534();
		func_118(&(uParam0->f_1), 256);
		func_117(&(uParam0->f_1), 128);
	}
	unk_0x37FC7E88C7659D33(*uParam0, 255, 255, 255, 0, 0);
}

float func_123(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_124(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_125(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x95EF219D38B20CFF(*uParam0))
		{
			func_118(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_126(var uParam0, var uParam1)
{
	func_127(uParam1, uParam0);
}

void func_127(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	int iVar3;
	bool bVar4;
	bool bVar5;
	struct<8> Var6;
	char[] cVar7[8];
	int iVar8[3];
	int iVar9;
	struct<13> Var10;
	var uVar11;
	struct<3> Var12;
	struct<3> Var13;
	bool bVar14;
	
	func_203(&(Global_1840924.f_49), 1, 0);
	unk_0x64083C4199676F44();
	func_202();
	func_38(0);
	unk_0xA86915034F55A3BF();
	func_200(1);
	unk_0x4CB4237D8858ADA6(10);
	func_199(1);
	func_198(1);
	if (!func_195())
	{
		if (!unk_0x306BF588BD8151E8("LEADERBOARD_SCENE"))
		{
			unk_0x17E478571720218F("LEADERBOARD_SCENE");
		}
	}
	if (!unk_0xCE990E643CD9D0E5(uParam1->f_42, 3))
	{
		*uParam0 = func_194();
		unk_0xBE20AB8238688965(&(uParam1->f_42), 3);
	}
	Var10 = { func_23(unk_0x460153A63B9477BC()) };
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		if (((!unk_0xB6E5F77B7062D58A() || !unk_0xDCA94C1EA9942FBD()) || (!unk_0x51C955B55E9F6E86() && unk_0xAC9BDC8868BA314A())) || Global_1835392.f_2832 != 0)
		{
			if (!unk_0xDCA94C1EA9942FBD())
			{
				if (Global_1835392.f_2829 != 2)
				{
					unk_0xD2459066EA58CE43(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 2;
				}
			}
			else if (!unk_0x51C955B55E9F6E86() && unk_0xAC9BDC8868BA314A())
			{
				if (Global_1835392.f_2829 != 3)
				{
					unk_0xD2459066EA58CE43(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 3;
				}
			}
			else if (!unk_0xB6E5F77B7062D58A())
			{
				if (Global_1835392.f_2829 != 4)
				{
					unk_0xD2459066EA58CE43(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 4;
				}
			}
			else if (Global_1835392.f_2832 != 0)
			{
				if (Global_1835392.f_2829 != 5)
				{
					unk_0xD2459066EA58CE43(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 5;
				}
			}
			if (!unk_0xCE990E643CD9D0E5(uParam1->f_42, 1))
			{
				unk_0x830F007E19C63E14(*uParam0, "CLEAR_ALL_SLOTS");
				unk_0xE1FDD153F5858534();
				func_193(*uParam0, Global_1835392.f_2780);
				if (unk_0x3030AE9FCF1BC243(&(Global_1835392.f_2780.f_1)))
				{
					if (!func_192(uParam1->f_44))
					{
						if (Global_1835392.f_2780.f_26 > 0)
						{
							Var6 = { Global_1835392.f_2780.f_9 };
							func_191(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &Var6, Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_191(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835392.f_2780.f_27)
					{
						StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_191(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_191(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_191(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_191(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					func_190(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
				}
				iVar9 = 0;
				unk_0xBE20AB8238688965(&iVar9, 4);
				func_189(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0xBE20AB8238688965(&iVar9, 5);
				func_189(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				unk_0xBE20AB8238688965(&iVar9, 6);
				func_189(*uParam0, &iVar3, iVar9, 1, 1);
				unk_0xBE20AB8238688965(&(uParam1->f_42), 1);
				func_188(*uParam0);
				unk_0xD2459066EA58CE43(&(uParam1->f_42), 2);
				unk_0xD289B55B6AADBA10(1);
			}
			else
			{
				func_188(*uParam0);
			}
		}
		else
		{
			if (Global_1835392.f_2829 != 1)
			{
				unk_0xD2459066EA58CE43(&(uParam1->f_42), 1);
				Global_1835392.f_2829 = 1;
			}
			if (!func_153(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				unk_0xD2459066EA58CE43(&(uParam1->f_42), 1);
				if (!unk_0xCE990E643CD9D0E5(uParam1->f_42, 0))
				{
					unk_0x830F007E19C63E14(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xE1FDD153F5858534();
					func_193(*uParam0, Global_1835392.f_2780);
					if (unk_0x3030AE9FCF1BC243(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_192(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								Var6 = { Global_1835392.f_2780.f_9 };
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &Var6, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_190(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					unk_0xBE20AB8238688965(&(uParam1->f_42), 0);
					unk_0xD2459066EA58CE43(&(uParam1->f_42), 2);
				}
				iVar3 = 0;
				iVar0 = 0;
				if (Global_1835392.f_2825 == -1)
				{
					StringCopy(&Var12, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							unk_0xBE20AB8238688965(&iVar9, 4);
							func_189(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0xBE20AB8238688965(&iVar9, 5);
							func_189(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0xBE20AB8238688965(&iVar9, 6);
							func_189(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0xBE20AB8238688965(&iVar9, 7);
						func_152(*uParam0, iVar3, iVar9, &Var12);
						iVar3++;
						iVar0++;
					}
					Global_1835392.f_2825 = 1;
					func_97(&(Global_1835392.f_2823));
				}
				else if (func_150(&(Global_1835392.f_2823), 300, 0))
				{
					StringCopy(&Var13, "SC_LB_DL", 24);
					StringIntConCat(&Var13, Global_1835392.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							unk_0xBE20AB8238688965(&iVar9, 4);
							func_189(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							unk_0xBE20AB8238688965(&iVar9, 5);
							func_189(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							unk_0xBE20AB8238688965(&iVar9, 6);
							func_189(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						unk_0xBE20AB8238688965(&iVar9, 7);
						func_152(*uParam0, iVar3, iVar9, &Var13);
						iVar3++;
						iVar0++;
					}
					Global_1835392.f_2825++;
					if (Global_1835392.f_2825 > 3)
					{
						Global_1835392.f_2825 = 0;
					}
					func_97(&(Global_1835392.f_2823));
				}
				func_188(*uParam0);
			}
			else
			{
				unk_0xD2459066EA58CE43(&(uParam1->f_42), 0);
				if (!unk_0xCE990E643CD9D0E5(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					unk_0x830F007E19C63E14(*uParam0, "CLEAR_ALL_SLOTS");
					unk_0xE1FDD153F5858534();
					func_193(*uParam0, Global_1835392.f_2780);
					if (unk_0x3030AE9FCF1BC243(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_192(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								Var6 = { Global_1835392.f_2780.f_9 };
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &Var6, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &cVar7, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_191(*uParam0, &(Global_1835392.f_2780.f_1), &Var6, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_190(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					if (!unk_0xCE990E643CD9D0E5(uParam1->f_42, 6))
					{
						func_100(&Global_1839723);
						func_146(uParam1, &Global_1839723);
						func_145(uParam1, &Global_1839723);
					}
					iVar3 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835392.f_2704[0] > 1 || (Global_1835392.f_2704[0] > 0 && Global_1835392.f_2775[0] != -1)) || (((Global_1835392.f_2704[0] > 0 && Global_1835392.f_2780.f_27) && func_192(uParam1->f_44)) && Global_1835392.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar14 = false;
							if (Global_1839723[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar8[0])
								{
									iVar9 = 0;
									unk_0xBE20AB8238688965(&iVar9, 4);
									func_189(*uParam0, &iVar3, iVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_1839723[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar8[1])
								{
									iVar9 = 0;
									unk_0xBE20AB8238688965(&iVar9, 5);
									if ((Global_1835392.f_2704[1] < 1 && Global_1835392.f_2775[1] == -1) && !(((Global_1835392.f_2704[1] > 0 && Global_1835392.f_2780.f_27) && func_192(uParam1->f_44)) && Global_1835392.f_2775[1] != -1))
									{
										func_189(*uParam0, &iVar3, iVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_189(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[1] = 1;
								}
							}
							else if (Global_1839723[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar8[2])
								{
									iVar9 = 0;
									unk_0xBE20AB8238688965(&iVar9, 6);
									if (!unk_0x2A4512DFA7EDB2F9())
									{
										bVar14 = true;
									}
									else if (!unk_0x09F9E89C9E3B9FEC())
									{
										bVar14 = true;
									}
									if ((Global_1835392.f_2704[2] < 2 && Global_1835392.f_2775[2] == -1) && !(((Global_1835392.f_2704[2] > 0 && Global_1835392.f_2780.f_27) && func_192(uParam1->f_44)) && Global_1835392.f_2775[2] != -1))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_189(*uParam0, &iVar3, iVar9, 1, 0);
									}
									else
									{
										func_189(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (func_144(Global_1839723[iVar0 /*100*/].f_32))
							{
								if (func_192(uParam1->f_44))
								{
									unk_0x72F711FF7DB52EBD(unk_0x460153A63B9477BC(), &uVar11);
									if (!Global_1839723[iVar0 /*100*/].f_74 && unk_0xF005CCA4263DF67F(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar11))
									{
										bVar14 = true;
									}
								}
								if (!bVar14)
								{
									iVar9 = 0;
									if (!Global_1835392.f_2780.f_27)
									{
										if (func_143(&(Global_1839723[iVar0 /*100*/].f_32), &Var10))
										{
											unk_0xBE20AB8238688965(&iVar9, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar4 = true;
												uParam1->f_246.f_1 = iVar0;
												unk_0xBE20AB8238688965(&iVar9, 3);
											}
										}
									}
									if (func_192(uParam1->f_44))
									{
										Var6 = { Global_1839723[iVar0 /*100*/] };
										if (!unk_0x7BCC91F3C1CF24E8(&(Global_1839723[iVar0 /*100*/].f_84)) && !unk_0xF005CCA4263DF67F(&(Global_1839723[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&Var6, "/", 64);
											StringConCat(&Var6, &(Global_1839723[iVar0 /*100*/].f_84), 64);
										}
										func_142(*uParam0, iVar3, iVar9, Global_1839723[iVar0 /*100*/].f_59, &Var6, &(Global_1839723[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839723[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_142(*uParam0, iVar3, iVar9, Global_1839723[iVar0 /*100*/].f_59, &(Global_1839723[iVar0 /*100*/]), &(Global_1839723[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839723[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835392.f_2708)
									{
										bVar5 = false;
										if (unk_0xCE990E643CD9D0E5(Global_1835392.f_2770, iVar1))
										{
											if (unk_0xCE990E643CD9D0E5(Global_1835392.f_2768, iVar1))
											{
												if (Global_1835392.f_2754[iVar1] == Global_1839723[iVar0 /*100*/].f_67[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_136(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_67[iVar1], 0, Global_1839723[iVar0 /*100*/].f_58);
											}
											else
											{
												func_136(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_67[iVar1], Global_1839723[iVar0 /*100*/].f_74, Global_1839723[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (unk_0xCE990E643CD9D0E5(Global_1835392.f_2768, iVar1))
											{
												if (Global_1835392.f_2761[iVar1] == Global_1839723[iVar0 /*100*/].f_67[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_133(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												func_133(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_60[iVar1], Global_1839723[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									func_132();
									uVar2[(Global_1839723[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839723[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839723[iVar0 /*100*/].f_59 > 2)
										{
											unk_0xBE20AB8238688965(&iVar9, 2);
											unk_0xBE20AB8238688965(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_131(*uParam0, (iVar3 - 1), iVar9);
										}
									}
									iVar3++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar9 = 0;
						unk_0xBE20AB8238688965(&iVar9, 4);
						func_189(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0xBE20AB8238688965(&iVar9, 5);
						func_189(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						unk_0xBE20AB8238688965(&iVar9, 6);
						func_189(*uParam0, &iVar3, iVar9, 1, 0);
					}
					unk_0xBE20AB8238688965(&(uParam1->f_42), 1);
					unk_0xD2459066EA58CE43(&(uParam1->f_42), 2);
					func_188(*uParam0);
					unk_0xD289B55B6AADBA10(1);
					if (uParam1->f_246.f_1 == -1 && !bVar4 == 1)
					{
						if (Global_1835392.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							unk_0xBE20AB8238688965(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_131(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_188(*uParam0);
					func_128(uParam0, uParam1);
				}
			}
		}
	}
}

void func_128(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_246.f_1;
	if (unk_0xC1F43F8D0D5EB664(2))
	{
		unk_0x670AE643E0B07F1D();
		unk_0x26A60F42A1132477(2, 239);
		unk_0x26A60F42A1132477(2, 240);
		unk_0x26A60F42A1132477(2, 237);
		unk_0x26A60F42A1132477(2, 238);
		unk_0x779660A9E5364C4D(2, 200, 1);
		if (unk_0xB9C0D9B37277621D(2, 241))
		{
			unk_0x43F408C9BC016B33(2, 188, 1f);
		}
		if (unk_0xB9C0D9B37277621D(2, 242))
		{
			unk_0x43F408C9BC016B33(2, 187, 1f);
		}
		if (unk_0xDA9E26C9CB10E34B(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					unk_0xC4CC25B68A91D144(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					unk_0x43F408C9BC016B33(2, 217, 1f);
				}
			}
		}
	}
	if (!unk_0xC1F43F8D0D5EB664(2))
	{
		func_130(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!unk_0xCE990E643CD9D0E5(uParam1->f_246, 0))
		{
			if ((unk_0x22D6FB6153F774D3(2, 188) || unk_0xB9C0D9B37277621D(2, 188)) || iVar6 < -100)
			{
				unk_0xC4CC25B68A91D144(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				unk_0xBE20AB8238688965(&(uParam1->f_246), 0);
				func_97(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_129(uParam1, 188))
		{
			unk_0xD2459066EA58CE43(&(uParam1->f_246), 0);
		}
		if (!unk_0xCE990E643CD9D0E5(uParam1->f_246, 1))
		{
			if ((unk_0x22D6FB6153F774D3(2, 187) || unk_0xB9C0D9B37277621D(2, 187)) || iVar6 > 100)
			{
				unk_0xC4CC25B68A91D144(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				unk_0xBE20AB8238688965(&(uParam1->f_246), 1);
				func_97(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_129(uParam1, 187))
		{
			unk_0xD2459066EA58CE43(&(uParam1->f_246), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!unk_0xCE990E643CD9D0E5(uParam1->f_246, 3))
	{
		if ((unk_0x22D6FB6153F774D3(2, 204) || unk_0x79800E51B3B6D197(2, 204)) || unk_0x1BD7199394D7F19A(2, 237))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_246), 3);
			func_97(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_129(uParam1, 204))
	{
		unk_0xD2459066EA58CE43(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				unk_0xD2459066EA58CE43(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_131(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			unk_0xBE20AB8238688965(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_131(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			unk_0xD2459066EA58CE43(&(uParam1->f_42), 2);
		}
		if (func_144(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!unk_0xCE990E643CD9D0E5(uParam1->f_246, 2))
			{
				if (unk_0x22D6FB6153F774D3(2, 217) || unk_0x79800E51B3B6D197(2, 217))
				{
					if (!unk_0x689B0FFC8081E57F())
					{
						unk_0xC4CC25B68A91D144(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						unk_0xBE20AB8238688965(&(uParam1->f_246), 2);
						unk_0x95B0B37E5A65C8E6(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!unk_0x22D6FB6153F774D3(2, 217))
			{
				unk_0xD2459066EA58CE43(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_129(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_130(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!unk_0x22D6FB6153F774D3(2, iParam1) && !unk_0xB9C0D9B37277621D(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_150(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!unk_0x22D6FB6153F774D3(2, iParam1) && !unk_0xB9C0D9B37277621D(2, iParam1)) || func_150(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_130(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = floor((unk_0xAAC78749C4BB5219(2, 218) * 127f));
	*uParam1 = floor((unk_0xAAC78749C4BB5219(2, 219) * 127f));
	*uParam2 = floor((unk_0xAAC78749C4BB5219(2, 220) * 127f));
	*uParam3 = floor((unk_0xAAC78749C4BB5219(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = floor((unk_0x9A36B66CB7B51691(2, 218) * 127f));
			*uParam1 = floor((unk_0x9A36B66CB7B51691(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = floor((unk_0x9A36B66CB7B51691(2, 220) * 127f));
			*uParam3 = floor((unk_0x9A36B66CB7B51691(2, 221) * 127f));
		}
	}
}

void func_131(int iParam0, int iParam1, int iParam2)
{
	unk_0x830F007E19C63E14(iParam0, "SET_SLOT_STATE");
	unk_0xAD291B8F75D737AD(iParam1);
	unk_0xAD291B8F75D737AD(iParam2);
	unk_0xE1FDD153F5858534();
}

void func_132()
{
	unk_0xE1FDD153F5858534();
}

void func_133(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, float fParam15, bool bParam16)
{
	switch (Param0.f_29[iParam14])
	{
		case 4:
			if (bParam16)
			{
				unk_0xB23270F3D5E62FDE("NUMBER");
				unk_0x5BC8B357341A4FEE(fParam15, 2);
				unk_0x2042E9CA4306F725();
			}
			else
			{
				unk_0xB23270F3D5E62FDE("SC_LB_EMPTY");
				unk_0x2042E9CA4306F725();
			}
			break;
		
		case 12:
			if (bParam16)
			{
				unk_0xB23270F3D5E62FDE("NUMBER");
				unk_0x42710E9E08FA375A(floor(fParam15));
				unk_0x2042E9CA4306F725();
			}
			else
			{
				unk_0xB23270F3D5E62FDE("SC_LB_EMPTY");
				unk_0x2042E9CA4306F725();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam16)
			{
				if (Param0.f_29[iParam14] == 18 || Param0.f_29[iParam14] == 20)
				{
					fParam15 = (fParam15 * -1f);
				}
				if (!unk_0x1CB1AF03C74FCE70())
				{
					if (Param0.f_29[iParam14] == 19 || Param0.f_29[iParam14] == 20)
					{
						fParam15 = func_135(fParam15);
					}
					else
					{
						fParam15 = func_134(fParam15);
					}
				}
				unk_0xB23270F3D5E62FDE("NUMBER");
				unk_0x5BC8B357341A4FEE(fParam15, 2);
				unk_0x2042E9CA4306F725();
			}
			else
			{
				unk_0xB23270F3D5E62FDE("SC_LB_EMPTY");
				unk_0x2042E9CA4306F725();
			}
			break;
		
		case 0:
			break;
	}
}

float func_134(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_135(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_136(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)
{
	struct<4> Var0;
	
	if (iParam15 == 2147483647 || iParam15 == -2147483647)
	{
		bParam16 = false;
	}
	StringCopy(&Var0, "", 16);
	switch (Param0.f_29[iParam14])
	{
		case 5:
			if (bParam16)
			{
				unk_0xB23270F3D5E62FDE("NUMBER");
				unk_0x42710E9E08FA375A(iParam15);
				unk_0x2042E9CA4306F725();
			}
			else
			{
				unk_0xB23270F3D5E62FDE("SC_LB_EMPTY");
				unk_0x2042E9CA4306F725();
			}
			break;
		
		case 7:
			if (bParam16)
			{
				unk_0xB23270F3D5E62FDE("NUMBER");
				unk_0x42710E9E08FA375A(-iParam15);
				unk_0x2042E9CA4306F725();
			}
			else
			{
				unk_0xB23270F3D5E62FDE("SC_LB_EMPTY");
				unk_0x2042E9CA4306F725();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam16)
			{
				if (Param0.f_29[iParam14] == 11 && iParam15 < 0)
				{
					iParam15 = (iParam15 * -1);
				}
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0xB23270F3D5E62FDE("STRING");
					unk_0x7899A951E85F4B28(iParam15, 14);
					unk_0x2042E9CA4306F725();
				}
				else if (Param0.f_29[iParam14] == 9)
				{
					unk_0xB23270F3D5E62FDE("STRING");
					unk_0x7899A951E85F4B28(iParam15, 6);
					unk_0x2042E9CA4306F725();
				}
				else
				{
					unk_0xB23270F3D5E62FDE("STRING");
					unk_0x7899A951E85F4B28(iParam15, 2055);
					unk_0x2042E9CA4306F725();
				}
			}
			else
			{
				unk_0xB23270F3D5E62FDE("SC_LB_EMPTY");
				unk_0x2042E9CA4306F725();
			}
			break;
		
		case 6:
			if (bParam16)
			{
				if (iParam15 == 2147483647)
				{
					unk_0xB23270F3D5E62FDE("SC_LB_EMPTY");
					unk_0x2042E9CA4306F725();
				}
				else if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0xB23270F3D5E62FDE("STRING");
					unk_0x7899A951E85F4B28(iParam15, 14);
					unk_0x2042E9CA4306F725();
				}
				else
				{
					unk_0xB23270F3D5E62FDE("STRING");
					unk_0x7899A951E85F4B28(iParam15, 2055);
					unk_0x2042E9CA4306F725();
				}
			}
			else
			{
				unk_0xB23270F3D5E62FDE("SC_LB_EMPTY");
				unk_0x2042E9CA4306F725();
			}
			break;
		
		case 2:
		case 10:
			if (bParam16)
			{
				iParam15 = (iParam15 * -1);
				if (iParam15 >= 3600000 || iParam15 <= -3600000)
				{
					unk_0xB23270F3D5E62FDE("STRING");
					unk_0x7899A951E85F4B28(iParam15, 14);
					unk_0x2042E9CA4306F725();
				}
				else if (Param0.f_29[iParam14] == 10)
				{
					unk_0xB23270F3D5E62FDE("STRING");
					unk_0x7899A951E85F4B28(iParam15, 6);
					unk_0x2042E9CA4306F725();
				}
				else
				{
					unk_0xB23270F3D5E62FDE("STRING");
					unk_0x7899A951E85F4B28(iParam15, 2055);
					unk_0x2042E9CA4306F725();
				}
			}
			else
			{
				unk_0xB23270F3D5E62FDE("SC_LB_EMPTY");
				unk_0x2042E9CA4306F725();
			}
			break;
		
		case 3:
			if (bParam17)
			{
				if (unk_0xA620E7D1DFDADB5C(iParam15))
				{
					unk_0xB23270F3D5E62FDE("SCLB_VEH_CUST");
					unk_0x6A826E35A3096ED0(unk_0xBBF5A53C394969AA(iParam15));
					unk_0x2042E9CA4306F725();
				}
				else
				{
					unk_0xB23270F3D5E62FDE("SC_LB_EMPTY");
					unk_0x2042E9CA4306F725();
				}
			}
			else if (unk_0xA620E7D1DFDADB5C(iParam15))
			{
				unk_0xB23270F3D5E62FDE(unk_0xBBF5A53C394969AA(iParam15));
				unk_0x2042E9CA4306F725();
			}
			else
			{
				unk_0xB23270F3D5E62FDE("SC_LB_EMPTY");
				unk_0x2042E9CA4306F725();
			}
			break;
		
		case 8:
			if (func_141(iParam15) != 0)
			{
				unk_0xB23270F3D5E62FDE(func_138(func_141(iParam15), 0));
				unk_0x2042E9CA4306F725();
			}
			else
			{
				unk_0xB23270F3D5E62FDE("SC_LB_EMPTY");
				unk_0x2042E9CA4306F725();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam16)
			{
				if (Param0.f_29[iParam14] == 14 || Param0.f_29[iParam14] == 16)
				{
					iParam15 = (iParam15 * -1);
				}
				if (!unk_0x1CB1AF03C74FCE70())
				{
					if (Param0.f_29[iParam14] == 15 || Param0.f_29[iParam14] == 16)
					{
						iParam15 = floor(func_135(to_float(iParam15)));
					}
					else
					{
						iParam15 = floor(func_134(to_float(iParam15)));
					}
				}
				unk_0xB23270F3D5E62FDE("NUMBER");
				unk_0x42710E9E08FA375A(iParam15);
				unk_0x2042E9CA4306F725();
			}
			else
			{
				unk_0xB23270F3D5E62FDE("SC_LB_EMPTY");
				unk_0x2042E9CA4306F725();
			}
			break;
		
		case 21:
			if (iParam15 > 20)
			{
				unk_0xB23270F3D5E62FDE("SC_LB_EMPTY");
				unk_0x2042E9CA4306F725();
			}
			else
			{
				Var0 = { func_137(iParam15) };
				unk_0xB23270F3D5E62FDE(&Var0);
				unk_0x2042E9CA4306F725();
			}
			break;
		
		case 0:
			break;
	}
}

struct<4> func_137(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "ARENA_C_SL", 16);
	if (iParam0 > 20)
	{
		StringCopy(&Var0, "**INVALID**", 16);
		return Var0;
	}
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_138(int iParam0, bool bParam1)
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case joaat("AMMO_RPG"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case joaat("AMMO_TANK"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case joaat("AMMO_SPACE_ROCKET"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case joaat("AMMO_PLAYER_LASER"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case joaat("AMMO_ENEMY_LASER"):
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case joaat("WEAPON_AUTOSHOTGUN"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case joaat("WEAPON_BATTLEAXE"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case joaat("WEAPON_COMPACTLAUNCHER"):
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case joaat("WEAPON_PIPEBOMB"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case joaat("WEAPON_POOLCUE"):
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case joaat("WEAPON_WRENCH"):
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case joaat("WEAPON_PISTOL_MK2"):
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case joaat("WEAPON_SMG_MK2"):
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case joaat("WEAPON_HEAVYSNIPER_MK2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case joaat("WEAPON_COMBATMG_MK2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case joaat("WEAPON_ASSAULTRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case joaat("WEAPON_CARBINERIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case joaat("WEAPON_PUMPSHOTGUN_MK2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case joaat("WEAPON_SPECIALCARBINE_MK2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case joaat("WEAPON_SNSPISTOL_MK2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case joaat("WEAPON_MARKSMANRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case joaat("WEAPON_REVOLVER_MK2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case joaat("WEAPON_BULLPUPRIFLE_MK2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case joaat("WEAPON_DOUBLEACTION"):
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case joaat("WEAPON_STONE_HATCHET"):
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case joaat("WEAPON_RAYPISTOL"):
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case joaat("WEAPON_RAYCARBINE"):
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case joaat("WEAPON_RAYMINIGUN"):
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		case joaat("WEAPON_NAVYREVOLVER"):
			if (bParam1)
			{
				return "WTU_REV_NV";
			}
			else
			{
				return "WT_REV_NV";
			}
			break;
		
		case joaat("WEAPON_CERAMICPISTOL"):
			if (bParam1)
			{
				return "WTU_CERPST";
			}
			else
			{
				return "WT_CERPST";
			}
			break;
		
		case 1470379660:
			if (bParam1)
			{
				return "WTU_GDGTPST";
			}
			else
			{
				return "WT_GDGTPST";
			}
			break;
		
		case -1658906650:
			if (bParam1)
			{
				return "WTU_MLTRYRFL";
			}
			else
			{
				return "WT_MLTRYRFL";
			}
			break;
		
		case 94989220:
			if (bParam1)
			{
				return "WTU_CMBSHGN";
			}
			else
			{
				return "WT_CMBSHGN";
			}
			break;
		
		default:
			if (func_140(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_139(&(Var0.f_31));
				}
				else
				{
					return func_139(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_139(var uParam0)
{
	return uParam0;
}

int func_140(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = unk_0x5D2674C71F97E2ED();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (unk_0x53C7411361231D87(iVar0, uParam1))
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

int func_141(int iParam0)
{
	if (iParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 402)
	{
		return -572349828;
	}
	else if (iParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 303)
	{
		return -947031628;
	}
	else if (iParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_142(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)
{
	unk_0x830F007E19C63E14(iParam0, "SET_SLOT");
	unk_0xAD291B8F75D737AD(iParam1);
	unk_0xAD291B8F75D737AD(iParam2);
	if (iParam3 > 0)
	{
		unk_0xB23270F3D5E62FDE("NUMBER");
		unk_0x42710E9E08FA375A(iParam3);
		unk_0x2042E9CA4306F725();
	}
	else
	{
		unk_0xB23270F3D5E62FDE("SC_LB_EMPTY");
		unk_0x2042E9CA4306F725();
	}
	unk_0x54AED56A452DCB4F(sParam4);
	unk_0x54AED56A452DCB4F(sParam5);
}

int func_143(var uParam0, var uParam1)
{
	if (!func_144(*uParam0))
	{
		return 0;
	}
	if (!func_144(*uParam1))
	{
		return 0;
	}
	if (unk_0xFFC66A35D4B5E605(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_144(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xF6B8932480699645(&uParam0, 13);
}

void func_145(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar3;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_42, 5) && !unk_0xCE990E643CD9D0E5(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_75 != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75)
						{
							uVar3 = (uParam1[iVar1 /*100*/])->f_75;
							(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
							(uParam1[iVar0 /*100*/])->f_75 = uVar3;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_75 == (uParam1[iVar0 /*100*/])->f_75)
						{
							if ((uParam1[iVar1 /*100*/])->f_59 != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59 == -1)
								{
									uVar3 = (uParam1[iVar1 /*100*/])->f_75;
									(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
									(uParam1[iVar0 /*100*/])->f_75 = uVar3;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_146(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_42, 5) && !unk_0xCE990E643CD9D0E5(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_149(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_149(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_149(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_147(uParam1);
	}
}

void func_147(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835392.f_2704[iVar0] = 0;
		Global_1835392.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_23(unk_0x460153A63B9477BC()) };
	if (unk_0x4FD26744D3418E79(Global_1835392.f_2826))
	{
		iVar4 = unk_0xDD365116D1EC259D(Global_1835392.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 12)
			{
				func_148(&Global_1839593);
				iVar2 = 0;
				unk_0x0D5FBF872D335DA5(Global_1835392.f_2826, iVar0, &Global_1839593);
				*(uParam0[iVar0 /*100*/]) = { Global_1839593.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_1839593.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_1839593.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_1839593.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_1839593.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_1839593.f_60;
				Global_1835392.f_2708 = Global_1839593.f_62;
				Global_1835392.f_2769 = Global_1839593.f_63;
				iVar2 = 0;
				if (unk_0xCE990E643CD9D0E5(Global_1839593.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (unk_0xCE990E643CD9D0E5(Global_1839593.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (unk_0xCE990E643CD9D0E5(Global_1839593.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835392.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (unk_0xCE990E643CD9D0E5(Global_1839593.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_143(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_1835392.f_2775[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1839593.f_62)
				{
					if (unk_0xCE990E643CD9D0E5(Global_1839593.f_63, iVar1))
					{
						(uParam0[iVar0 /*100*/])->f_67[iVar1] = Global_1839593.f_97[iVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_60[iVar1] = Global_1839593.f_64[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_148(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		uParam0->f_64[iVar1] = 0f;
		uParam0->f_97[iVar1] = 0;
		iVar1++;
	}
}

int func_149(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_1835392[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][0 /*75*/] };
			Global_1839536[iParam3 /*16*/] = { Global_1835392[iParam3 /*901*/][0 /*75*/] };
			Global_1839536.f_49[iParam3] = Global_1835392[iParam3 /*901*/][0 /*75*/].f_67[Global_1835392.f_2779];
			Global_1839536.f_53[iParam3] = Global_1835392[iParam3 /*901*/][0 /*75*/].f_60[Global_1835392.f_2779];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1835392.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][Global_1835392.f_2775[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_1835392.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], unk_0x72C1D3A1AB8CAA5B(unk_0x460153A63B9477BC()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_23(unk_0x460153A63B9477BC()) };
				(uParam0[iParam1 /*100*/])->f_59 = -1;
				(uParam0[iParam1 /*100*/])->f_67[0] = -1;
				(uParam0[iParam1 /*100*/])->f_67[1] = -1;
				(uParam0[iParam1 /*100*/])->f_67[2] = -1;
				(uParam0[iParam1 /*100*/])->f_67[3] = -1;
				(uParam0[iParam1 /*100*/])->f_60[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1835392.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = floor(to_float((*uParam2 / 2)));
		if ((Global_1835392.f_2775[iParam3] + iVar0) < 12 && (Global_1835392.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

int func_150(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_151(uParam0, bParam2, 0);
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

void func_151(var uParam0, bool bParam1, bool bParam2)
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

void func_152(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	unk_0xBE20AB8238688965(&iParam2, 7);
	unk_0x830F007E19C63E14(iParam0, "SET_SLOT");
	unk_0xAD291B8F75D737AD(iParam1);
	unk_0xAD291B8F75D737AD(iParam2);
	unk_0xB23270F3D5E62FDE(sParam3);
	unk_0xF8101CA70E0D01A6();
	unk_0xE1FDD153F5858534();
}

int func_153(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_187(&(Global_1835392.f_2827)))
		{
			func_151(&(Global_1835392.f_2827), 1, 0);
			return 0;
		}
		else if (!func_150(&(Global_1835392.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!unk_0xB6E5F77B7062D58A() || !unk_0xDCA94C1EA9942FBD()) || (!unk_0x51C955B55E9F6E86() && unk_0xAC9BDC8868BA314A())) || Global_1835392.f_2832 != 0)
	{
		unk_0xD2459066EA58CE43(&(uParam0->f_42), 4);
		return 1;
	}
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_42, 4))
	{
		func_186(uParam0);
		unk_0xBE20AB8238688965(&(uParam0->f_42), 4);
		return 0;
	}
	else if (unk_0xCE990E643CD9D0E5(uParam0->f_42, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_184(uParam0))
	{
		return 0;
	}
	if (!func_182(uParam0))
	{
		return 0;
	}
	if (!func_169(uParam0))
	{
		return 0;
	}
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_42, 6))
	{
		func_100(&Global_1839723);
		func_146(uParam0, &Global_1839723);
		func_145(uParam0, &Global_1839723);
		unk_0xBE20AB8238688965(&(uParam0->f_42), 6);
	}
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_42, 7))
	{
		if (!func_187(&(Global_1835392.f_2830)))
		{
			func_151(&(Global_1835392.f_2830), 1, 0);
		}
		else if (func_150(&(Global_1835392.f_2830), 30000, 1))
		{
			unk_0xBE20AB8238688965(&(uParam0->f_42), 7);
		}
		if (func_166(&Global_1839723))
		{
		}
		else
		{
			return 0;
		}
		if (func_163(&Global_1839723))
		{
		}
		else
		{
			return 0;
		}
		if (func_158(&Global_1839723))
		{
			func_154(&Global_1839723);
			unk_0xBE20AB8238688965(&(uParam0->f_42), 7);
			func_154(&Global_1839723);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_154(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_157(Global_1835392.f_2826);
	if (Global_1838577.f_81[iVar2] != 0)
	{
		func_156(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_148(&Global_1839593);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_1839593 = Global_1835392.f_2826;
			Global_1839593.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (unk_0xF005CCA4263DF67F(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_1839593.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1839593.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_1839593.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_144((uParam0[iVar0 /*100*/])->f_45))
			{
				Global_1839593.f_46 = { (uParam0[iVar0 /*100*/])->f_45 };
			}
			else
			{
				Global_1839593.f_46 = { (uParam0[iVar0 /*100*/])->f_32 };
			}
			Global_1839593.f_59 = (uParam0[iVar0 /*100*/])->f_58;
			Global_1839593.f_60 = (uParam0[iVar0 /*100*/])->f_59;
			Global_1839593.f_62 = Global_1835392.f_2708;
			Global_1839593.f_63 = Global_1835392.f_2770;
			if ((uParam0[iVar0 /*100*/])->f_74)
			{
				unk_0xBE20AB8238688965(&(Global_1839593.f_61), 0);
			}
			else
			{
				unk_0xD2459066EA58CE43(&(Global_1839593.f_61), 0);
			}
			unk_0xBE20AB8238688965(&(Global_1839593.f_61), (uParam0[iVar0 /*100*/])->f_75);
			iVar1 = 0;
			while (iVar1 < Global_1839593.f_62)
			{
				if (unk_0xCE990E643CD9D0E5(Global_1839593.f_63, iVar1))
				{
					Global_1839593.f_97[iVar1] = (uParam0[iVar0 /*100*/])->f_67[iVar1];
				}
				else
				{
					Global_1839593.f_64[iVar1] = (uParam0[iVar0 /*100*/])->f_60[iVar1];
				}
				iVar1++;
			}
			Global_1838577.f_81[iVar2] = Global_1835392.f_2826;
			unk_0xD72D669737E01A73(&Global_1839593);
		}
		iVar0++;
	}
	Global_1838577.f_87[iVar2 /*3*/] = { func_155(unk_0x460153A63B9477BC()) };
}

Vector3 func_155(int iParam0)
{
	return unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iParam0), false);
}

void func_156(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (unk_0x4FD26744D3418E79(Global_1838577.f_81[iParam1]))
		{
			unk_0x97439AD9ECF3F298(Global_1838577.f_81[iParam1]);
		}
		Global_1838577.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (unk_0x4FD26744D3418E79(iParam0))
		{
			unk_0x97439AD9ECF3F298(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1838577.f_81[iVar0] == iParam0)
			{
				Global_1838577.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_157(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838577.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838577.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (unk_0x4FD26744D3418E79(Global_1838577.f_81[iVar0]))
		{
			iVar3 = unk_0x1810EA965A938383(Global_1838577.f_81[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_158(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_162(uParam0);
			if (unk_0xDCA0815D900F27F8() && !unk_0xF9A94F315B890564(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_144((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_161(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841022))
					{
						Global_1841022[Global_1841022.f_206 /*13*/] = { (uParam0[iVar0 /*100*/])->f_32 };
						Global_1841022.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_1841022.f_206 > 0)
			{
				(uParam0[0 /*100*/])->f_76 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_76 = 3;
			}
			break;
		
		case 1:
			if (func_159(&((uParam0[1 /*100*/])->f_76), &(Global_1841022.f_206), &Global_1841022, &(Global_1841022.f_157)))
			{
				(uParam0[0 /*100*/])->f_76 = 2;
			}
			break;
		
		case 2:
			if (Global_1841022.f_206 > 12)
			{
				Global_1841022.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1841022.f_206)
				{
					if (func_144((uParam0[iVar0 /*100*/])->f_32) && func_144(Global_1841022[iVar1 /*13*/]))
					{
						if (unk_0xFFC66A35D4B5E605(&((uParam0[iVar0 /*100*/])->f_32), &(Global_1841022[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_80 = { Global_1841022.f_157[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_76 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_159(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar1;
	
	switch (*uParam0)
	{
		case 0:
			if (unk_0x7090A8C950EB080D())
			{
			}
			else
			{
				unk_0x01D3BF6802734A3D();
				unk_0x8A0BB7338892EC84(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!unk_0x7090A8C950EB080D())
			{
				if (unk_0x2CFFE5F8BC33D64F())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar1 = 0;
			while (iVar1 < *uParam1)
			{
				if (unk_0x8477301FC2E32D86(uParam2[iVar1 /*13*/], &uVar0))
				{
					func_160(&uVar0, uParam3[iVar1 /*4*/]);
				}
				iVar1++;
			}
			if (unk_0x7090A8C950EB080D())
			{
				unk_0x5E7351DF8918E140();
			}
			else
			{
				unk_0x01D3BF6802734A3D();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_160(var uParam0, char* sParam1)
{
	unk_0xA36843D7CCD081D6(uParam0, 35, sParam1);
}

int func_161(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_144(*(uParam1[iVar0 /*13*/])))
		{
			if (unk_0xFFC66A35D4B5E605(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_162(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_105(&(Global_1841022[iVar0 /*13*/]));
		StringCopy(&(Global_1841022.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!unk_0x7090A8C950EB080D())
		{
			unk_0x01D3BF6802734A3D();
		}
	}
	if (unk_0x7090A8C950EB080D())
	{
		unk_0x5E7351DF8918E140();
	}
	Global_1841022.f_206 = 0;
}

int func_163(var uParam0)
{
	int iVar0;
	
	if (unk_0xF8EDFF98A9C94C74())
	{
		return 1;
	}
	else if (unk_0xC6C08C02733D02C8() || unk_0xDCA0815D900F27F8())
	{
		if (!func_165(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_164(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_164(var uParam0, var uParam1, char* sParam2)
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_144(*uParam1))
			{
				if (!unk_0x29EC5130E3AD4D5A(uParam1))
				{
					if (unk_0xC6C08C02733D02C8() || unk_0xDCA0815D900F27F8())
					{
						if (unk_0x190054A458CEA91B(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (unk_0x11E5DE894D6A8A5F())
					{
						if (unk_0x190054A458CEA91B(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, unk_0xAFA62A5813E1DD32(uParam1), 64);
						if (unk_0x59ED414969A48197())
						{
						}
						else if (unk_0xDCA0815D900F27F8())
						{
						}
						else if (unk_0xF8EDFF98A9C94C74())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, unk_0x72C1D3A1AB8CAA5B(unk_0xAAA938655BBB5286(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x29EC5130E3AD4D5A(uParam1))
			{
				if (!unk_0x00AF5518D74B83B5())
				{
					if (unk_0x0FFBCF0B10BBD8F2())
					{
						StringCopy(sParam2, unk_0xAFA62A5813E1DD32(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, unk_0x72C1D3A1AB8CAA5B(unk_0xAAA938655BBB5286(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_165(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0xC6C08C02733D02C8() && !unk_0xDCA0815D900F27F8())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_78 == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_78)
	{
		case 0:
			Global_1835392.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1835392.f_2833[iVar1 /*16*/]), "", 64);
				func_105(&(Global_1835392.f_3026[iVar1 /*13*/]));
				if (func_144((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_1835392.f_3026[Global_1835392.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_1835392.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835392.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = unk_0xE7746A0D51702E3C(&(Global_1835392.f_3026), Global_1835392.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x8DF7D641A8ECA71F((uParam0[0 /*100*/])->f_79, &(Global_1835392.f_2833), Global_1835392.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_144((uParam0[iVar1 /*100*/])->f_32))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1835392.f_2833[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_79 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_166(var uParam0)
{
	int iVar0;
	
	if (unk_0xC6C08C02733D02C8() || unk_0xDCA0815D900F27F8())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_168(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835392.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_167(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_167(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0x7BCC91F3C1CF24E8(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xBE347DE2A7F4BBD4(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_144(Var0))
			{
				if (!unk_0x29EC5130E3AD4D5A(&Var0))
				{
					if ((unk_0x11E5DE894D6A8A5F() || unk_0xC6C08C02733D02C8()) || unk_0xDCA0815D900F27F8())
					{
						if (unk_0x190054A458CEA91B(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, unk_0xAFA62A5813E1DD32(&Var0), 64);
						if (unk_0x59ED414969A48197())
						{
						}
						else if (unk_0xDCA0815D900F27F8())
						{
						}
						else if (unk_0xF8EDFF98A9C94C74())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, unk_0x72C1D3A1AB8CAA5B(unk_0xAAA938655BBB5286(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!unk_0x29EC5130E3AD4D5A(&Var0))
			{
				if (!unk_0x00AF5518D74B83B5())
				{
					if (unk_0x0FFBCF0B10BBD8F2())
					{
						StringCopy(sParam17, unk_0xAFA62A5813E1DD32(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, unk_0x72C1D3A1AB8CAA5B(unk_0xAAA938655BBB5286(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_168(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!unk_0xC6C08C02733D02C8() && !unk_0xDCA0815D900F27F8())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (unk_0x7BCC91F3C1CF24E8(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	unk_0xBE347DE2A7F4BBD4(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_144(Var1[0 /*13*/]))
			{
				if (!unk_0x29EC5130E3AD4D5A(&(Var1[0 /*13*/])))
				{
					*uParam4 = unk_0xE7746A0D51702E3C(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, unk_0x72C1D3A1AB8CAA5B(unk_0xAAA938655BBB5286(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = unk_0x8DF7D641A8ECA71F(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_169(var uParam0)
{
	struct<97> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	struct<13> Var12;
	
	Var0.f_19.f_1 = 4;
	iVar5 = -1;
	iVar9 = 2;
	Var12 = { func_23(unk_0x460153A63B9477BC()) };
	switch ((*uParam0)[iVar9])
	{
		case 0:
			Global_1835392.f_2775[iVar9] = -1;
			Global_1835392.f_2704[iVar9] = 0;
			Global_1835013.f_374 = -1;
			if (unk_0xE2FBD13450B2DA21())
			{
				if (unk_0xBF9EC1ED7E386622(&Var12))
				{
					if (unk_0x192BD21E18525C69(&(uParam0->f_7), 35, &Var12))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						(*uParam0)[iVar9] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar9] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar9] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_44.f_1 = 3;
			Var1 = uParam0->f_44;
			Var1.f_1 = uParam0->f_44.f_1;
			if (func_180(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var12, func_181(), 0, 0, 0))
			{
				func_179(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xF8C2A806CC1DA7C7(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar7 = 0;
						iVar2 = 0;
						if (func_181())
						{
							iVar7 = 0;
							while (iVar7 < Var1.f_3)
							{
								unk_0x8714DED49483ADC8(iVar7, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_143(&Var0, &Var12) || func_143(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar5 < 0)
								{
									if (unk_0xCE990E643CD9D0E5(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xC4E9DE5522F14176(iVar7, 0))
										{
											iVar5 = iVar7;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0x38E6B5BF2C659A2C(iVar7, 0))
									{
										iVar5 = iVar7;
									}
								}
								func_178(&Var0);
								iVar7++;
							}
							if (iVar5 < 0)
							{
								iVar5 = Var1.f_3;
							}
						}
						iVar7 = 0;
						unk_0x8714DED49483ADC8(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835392.f_2704[iVar9] < 11)
							{
								if (func_181() && iVar5 == 0)
								{
									func_177(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Var0.f_96);
									Global_1835392.f_2775[iVar9] = 0;
									Global_1835392.f_2704[iVar9]++;
								}
								if (func_181() && (func_143(&Var0, &Var12) || func_143(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_143(&Var0, &Var12))
									{
										iVar5 = 0;
										Global_1835392.f_2775[iVar9] = 0;
									}
									MemCopy(&(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
									Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_32 = { Var0 };
									Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
									if (func_176(uParam0->f_44))
									{
										iVar4 = unk_0xC4E9DE5522F14176(0, Global_1835392.f_2709);
										if (iVar4 == 1)
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 0;
										}
									}
									if (func_192(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1835392.f_2708)
									{
										if (unk_0xCE990E643CD9D0E5(Global_1835392.f_2769, Global_1835392.f_2710[iVar3]))
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_67[iVar3] = unk_0xC4E9DE5522F14176(0, Global_1835392.f_2710[iVar3]);
										}
										else
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_60[iVar3] = unk_0x38E6B5BF2C659A2C(0, Global_1835392.f_2710[iVar3]);
										}
										iVar3++;
									}
									Global_1835392.f_2704[iVar9]++;
								}
								bVar8 = true;
							}
						}
						if (!bVar8)
						{
							Global_1835392.f_2704[iVar9]++;
						}
						if (!func_181())
						{
							iVar5 = Var1.f_5;
						}
						if (iVar5 > 6)
						{
							iVar6 = (iVar5 - 6);
						}
						else if (bVar8)
						{
							iVar6 = 1;
						}
						else
						{
							iVar6 = 0;
						}
						iVar7 = iVar6;
						func_178(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 1))
						{
							unk_0x8714DED49483ADC8(iVar7, &Var0);
							if (Global_1835392.f_2704[iVar9] < 11 && Var0.f_96 > 1)
							{
								if (func_181() && iVar5 == iVar7)
								{
									if (!func_143(&(Global_1835392[iVar9 /*901*/][0 /*75*/].f_32), &Var12))
									{
										func_177(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Var0.f_96);
										Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
										Global_1835392.f_2704[iVar9]++;
									}
								}
								if (func_181() && (func_143(&Var0, &Var12) || func_143(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[iVar9] < 11)
								{
									if (func_144(Var0) && !func_143(&Var0, &(Global_1835392[iVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_143(&Var0, &Var12))
										{
											if (Global_1835392.f_2775[iVar9] < 0)
											{
												Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
											}
										}
										MemCopy(&(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
										Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_32 = { Var0 };
										Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
										Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_74 = 1;
										if (func_176(uParam0->f_44))
										{
											iVar4 = unk_0xC4E9DE5522F14176(iVar7, Global_1835392.f_2709);
											if (iVar4 == 1)
											{
												Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 0;
											}
										}
										if (func_192(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										iVar2 = 0;
										while (iVar2 < Global_1835392.f_2708)
										{
											if (unk_0xCE990E643CD9D0E5(Global_1835392.f_2769, Global_1835392.f_2710[iVar2]))
											{
												Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_67[iVar2] = unk_0xC4E9DE5522F14176(iVar7, Global_1835392.f_2710[iVar2]);
											}
											else
											{
												Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_60[iVar2] = unk_0x38E6B5BF2C659A2C(iVar7, Global_1835392.f_2710[iVar2]);
											}
											iVar2++;
										}
										Global_1835392.f_2704[iVar9]++;
									}
								}
							}
							func_178(&Var0);
							iVar7++;
						}
						unk_0x73C92978714C5E7C();
						func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar8)
						{
							if (Global_1835392.f_2775[iVar9] == -1 && func_181())
							{
								if (Global_1835392.f_2704[iVar9] >= 1)
								{
									func_177(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Global_1835392[iVar9 /*901*/][(Global_1835392.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_177(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
								}
								Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
								Global_1835392.f_2704[iVar9]++;
							}
							(*uParam0)[iVar9] = 3;
						}
						else
						{
							(*uParam0)[iVar9] = 2;
						}
					}
					else
					{
						if (!bVar8)
						{
							Global_1835392.f_2704[iVar9]++;
						}
						unk_0x73C92978714C5E7C();
						func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[iVar9] = -1;
						(*uParam0)[iVar9] = 2;
					}
				}
				else
				{
					func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2775[iVar9] = -1;
					(*uParam0)[iVar9] = 2;
					unk_0xBE20AB8238688965(&(Global_1835392.f_2832), iVar9);
				}
			}
			break;
		
		case 2:
			if (Global_1835392.f_2775[iVar9] == -1)
			{
				iVar11 = 11;
			}
			else
			{
				iVar11 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var1 = uParam0->f_44;
			Var1.f_1 = uParam0->f_44.f_1;
			if (func_171(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar11))
			{
				func_179(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xF8C2A806CC1DA7C7(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar2 = 0;
						while (iVar2 < Var1.f_3)
						{
							unk_0x8714DED49483ADC8(iVar2, &Var0);
							bVar10 = false;
							if (Global_1835392[iVar9 /*901*/][0 /*75*/].f_59 > 1 || Global_1835392[iVar9 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar10 = true;
							}
							if (Global_1835392.f_2704[iVar9] < 11 || bVar10)
							{
								if (func_181() && (func_143(&Var0, &Var12) || func_143(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar2 == 0 || bVar10)
								{
									MemCopy(&(Global_1835392[iVar9 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835392[iVar9 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835392[iVar9 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_176(uParam0->f_44))
									{
										iVar4 = unk_0xC4E9DE5522F14176(0, Global_1835392.f_2709);
										if (iVar4 == 1)
										{
											Global_1835392[iVar9 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar9 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_192(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar9 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[iVar9 /*901*/][0 /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1835392.f_2708)
									{
										if (unk_0xCE990E643CD9D0E5(Global_1835392.f_2769, Global_1835392.f_2710[iVar3]))
										{
											Global_1835392[iVar9 /*901*/][0 /*75*/].f_67[iVar3] = unk_0xC4E9DE5522F14176(0, Global_1835392.f_2710[iVar3]);
										}
										else
										{
											Global_1835392[iVar9 /*901*/][0 /*75*/].f_60[iVar3] = unk_0x38E6B5BF2C659A2C(0, Global_1835392.f_2710[iVar3]);
										}
										iVar3++;
									}
									if (Global_1835392.f_2704[iVar9] == 0)
									{
										if (bVar10)
										{
										}
										else
										{
											Global_1835392.f_2704[iVar9]++;
										}
									}
								}
								else if (Global_1835392.f_2704[iVar9] < 11)
								{
									MemCopy(&(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
									Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_32 = { Var0 };
									if (func_176(uParam0->f_44))
									{
										iVar4 = unk_0xC4E9DE5522F14176(iVar2, Global_1835392.f_2709);
										if (iVar4 == 1)
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 0;
										}
									}
									if (func_192(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_59 = Var0.f_96;
									Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_74 = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1835392.f_2708)
									{
										if (unk_0xCE990E643CD9D0E5(Global_1835392.f_2769, Global_1835392.f_2710[iVar3]))
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_67[iVar3] = unk_0xC4E9DE5522F14176(iVar2, Global_1835392.f_2710[iVar3]);
										}
										else
										{
											Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_60[iVar3] = unk_0x38E6B5BF2C659A2C(iVar2, Global_1835392.f_2710[iVar3]);
										}
										iVar3++;
									}
									if (iVar2 != 0)
									{
										Global_1835392.f_2704[iVar9]++;
									}
								}
							}
							func_178(&Var0);
							iVar2++;
						}
					}
					unk_0x73C92978714C5E7C();
					func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar9] = 3;
				}
				else
				{
					unk_0x73C92978714C5E7C();
					func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					unk_0xBE20AB8238688965(&(Global_1835392.f_2832), iVar9);
					Global_1835392.f_2704[iVar9] = 0;
					(*uParam0)[iVar9] = 3;
				}
				if (Global_1835392.f_2775[iVar9] == -1 && func_181())
				{
					if (Global_1835392.f_2704[iVar9] >= 1)
					{
						func_177(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Global_1835392[iVar9 /*901*/][(Global_1835392.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_177(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
					}
					Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
					Global_1835392.f_2704[iVar9]++;
				}
			}
			break;
		
		case 3:
			func_170(iVar9, Global_1835013.f_374);
			(*uParam0)[iVar9] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_170(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_181() && Global_1835392.f_2704[iParam0] > Global_1835392.f_2775[iParam0]) && Global_1835392.f_2775[iParam0] >= 0)
	{
		if (iParam1 != Global_1835392[iParam0 /*901*/][Global_1835392.f_2775[iParam0] /*75*/].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_1835392.f_2704[iParam0])
			{
				if (iVar0 != Global_1835392.f_2775[iParam0])
				{
					if (Global_1835392[iParam0 /*901*/][iVar0 /*75*/].f_59 >= Global_1835392[iParam0 /*901*/][Global_1835392.f_2775[iParam0] /*75*/].f_59)
					{
						if (Global_1835392[iParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1 == -1)
						{
							Global_1835392[iParam0 /*901*/][iVar0 /*75*/].f_59++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_181())
		{
		}
		if (Global_1835392.f_2704[iParam0] <= Global_1835392.f_2775[iParam0])
		{
		}
		if (Global_1835392.f_2775[iParam0] < 0)
		{
		}
	}
}

int func_171(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_174() && !func_173())
			{
				func_172(*uParam2);
				if (unk_0xE828D44BBC7E9F37(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0xF9ED010877BD7ABC(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x26A455891223E980(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_172(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)
{
	Global_1835008 = 1;
	func_203(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0;
	Global_1835008.f_4 = Param0.f_1;
}

int func_173()
{
	if (unk_0xF0C12886E5C1B20E() && !func_195())
	{
		return 1;
	}
	return 0;
}

int func_174()
{
	if (unk_0x5F7BD680A72156D2() || Global_1835008)
	{
		func_175();
		return 1;
	}
	return 0;
}

void func_175()
{
	if (func_150(&(Global_1835008.f_1), 120000, 1))
	{
		unk_0xEB3E12B03B57D9D4(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_97(&(Global_1835008.f_1));
	}
}

int func_176(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_177(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_192(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, unk_0x72C1D3A1AB8CAA5B(unk_0x460153A63B9477BC()), 64);
		sParam1->f_32 = { func_23(unk_0x460153A63B9477BC()) };
	}
	sParam1->f_59 = iParam2;
	if (func_176(uParam0->f_44))
	{
		iVar0 = Global_1835013.f_211.f_36[Global_1835392.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1835392.f_2708)
	{
		if (unk_0xCE990E643CD9D0E5(Global_1835013.f_142.f_2, Global_1835392.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_1835013.f_211.f_36[Global_1835392.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_1835013.f_211.f_3[Global_1835392.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_178(var uParam0)
{
	int iVar0;
	
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
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

void func_179(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_180(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1835013.f_211.f_36[0];
	uVar1 = Global_1835013.f_211.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_174() && !func_173())
			{
				func_172(*uParam2);
				if (bParam5)
				{
					if (unk_0xCE990E643CD9D0E5(Global_1835013.f_142.f_2, 0))
					{
						if (unk_0xA586B63641DE0EB8(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (unk_0xCA9587C0210D9F0C(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (unk_0xBB46C699F621A386(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0xF9ED010877BD7ABC(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x26A455891223E980(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_181()
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_182(var uParam0)
{
	struct<20> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	struct<13> Var10;
	
	Var0.f_19.f_1 = 4;
	iVar4 = -1;
	iVar9 = 1;
	Var10 = { func_23(unk_0x460153A63B9477BC()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar3 = unk_0xA5330793F2DF46E6();
			Global_1835392.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835392.f_2704[iVar9] = 0;
			if (iVar3 > 0)
			{
				if (func_181())
				{
					bVar8 = false;
				}
				else
				{
					bVar8 = true;
				}
				if (func_183(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], bVar8, 0, 100))
				{
					func_179(&Var1, &(uParam0->f_44));
					if (uParam0->f_5 && unk_0xF8C2A806CC1DA7C7(&Var1))
					{
						if (func_181())
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0)
								{
									unk_0x8714DED49483ADC8(iVar6, &Var0);
									if (func_192(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_143(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (unk_0xCE990E643CD9D0E5(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xC4E9DE5522F14176(iVar6, 0))
										{
											iVar4 = iVar6;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0x38E6B5BF2C659A2C(iVar6, 0))
									{
										iVar4 = iVar6;
									}
									func_178(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0;
						if (func_181() && iVar4 == 0)
						{
							if (Global_1835392.f_2704[iVar9] < 11)
							{
								func_177(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
								Global_1835392.f_2775[iVar9] = 0;
								Global_1835392.f_2704[iVar9]++;
							}
						}
						if (Var1.f_3 > 0)
						{
							unk_0x8714DED49483ADC8(0, &Var0);
							if (func_181() && (func_143(&Var0, &Var10) || func_143(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_144(Var0) && Global_1835392.f_2704[iVar9] < 11)
							{
								if (func_143(&Var0, &Var10))
								{
									iVar4 = 0;
									Global_1835392.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), {Var0.f_13}, 16);
								Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_32 = { Var0 };
								Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_59 = 1;
								if (func_176(uParam0->f_44))
								{
									iVar7 = unk_0xC4E9DE5522F14176(0, Global_1835392.f_2709);
									if (iVar7 == 1)
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_58 = 0;
									}
								}
								if (func_192(uParam0->f_44))
								{
									MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_74 = 1;
								iVar2 = 0;
								while (iVar2 < Global_1835392.f_2708)
								{
									if (unk_0xCE990E643CD9D0E5(Global_1835392.f_2769, Global_1835392.f_2710[iVar2]))
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_67[iVar2] = unk_0xC4E9DE5522F14176(0, Global_1835392.f_2710[iVar2]);
									}
									else
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar9] /*75*/].f_60[iVar2] = unk_0x38E6B5BF2C659A2C(0, Global_1835392.f_2710[iVar2]);
									}
									iVar2++;
								}
								Global_1835392.f_2704[1]++;
							}
							else
							{
								func_178(&Var0);
								unk_0x73C92978714C5E7C();
								func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835392.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835392.f_2775[iVar9] == -1 && func_181())
								{
									if (Global_1835392.f_2704[iVar9] >= 1)
									{
										func_177(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Global_1835392[iVar9 /*901*/][(Global_1835392.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_177(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
									}
									Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
									Global_1835392.f_2704[iVar9]++;
								}
								return 0;
							}
							func_178(&Var0);
						}
						else
						{
							Global_1835392.f_2704[1] = 0;
							func_178(&Var0);
							unk_0x73C92978714C5E7C();
							func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835392.f_2775[iVar9] == -1 && func_181())
							{
								if (Global_1835392.f_2704[iVar9] >= 1)
								{
									func_177(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Global_1835392[iVar9 /*901*/][(Global_1835392.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_177(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
								}
								Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
								Global_1835392.f_2704[iVar9]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_181())
						{
							iVar4 = Var1.f_5;
						}
						if (iVar4 > 6)
						{
							iVar5 = (iVar4 - 6);
						}
						else
						{
							iVar5 = 1;
						}
						iVar6 = iVar5;
						iVar6 = iVar5;
						while (iVar6 <= (Var1.f_3 - 1))
						{
							unk_0x8714DED49483ADC8(iVar6, &Var0);
							if (Global_1835392.f_2704[iVar9] < 11 && Var0.f_96 > 1)
							{
								if (func_181() && iVar4 == iVar6)
								{
									if (!func_143(&(Global_1835392[iVar9 /*901*/][0 /*75*/].f_32), &Var10))
									{
										func_177(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Var0.f_96);
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_59 = iVar6 + 1;
										Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
										Global_1835392.f_2704[iVar9]++;
									}
								}
								if (func_181() && (func_143(&Var0, &Var10) || func_143(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[1] < 12)
								{
									if (func_144(Var0) && !func_143(&Var0, &(Global_1835392[iVar9 /*901*/][0 /*75*/].f_32)))
									{
										if (func_143(&Var0, &Var10))
										{
											if (Global_1835392.f_2775[1] < 0)
											{
												Global_1835392.f_2775[1] = Global_1835392.f_2704[1];
											}
										}
										MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/]), {Var0.f_13}, 16);
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_32 = { Var0 };
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_59 = iVar6 + 1;
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_74 = 1;
										if (func_176(uParam0->f_44))
										{
											iVar7 = unk_0xC4E9DE5522F14176(iVar6, Global_1835392.f_2709);
											if (iVar7 == 1)
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_192(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										while (iVar2 < Global_1835392.f_2708)
										{
											if (unk_0xCE990E643CD9D0E5(Global_1835392.f_2769, Global_1835392.f_2710[iVar2]))
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_67[iVar2] = unk_0xC4E9DE5522F14176(iVar6, Global_1835392.f_2710[iVar2]);
											}
											else
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_60[iVar2] = unk_0x38E6B5BF2C659A2C(iVar6, Global_1835392.f_2710[iVar2]);
											}
											iVar2++;
										}
										Global_1835392.f_2704[1]++;
									}
								}
							}
							func_178(&Var0);
							iVar6++;
						}
						unk_0x73C92978714C5E7C();
						func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835392.f_2775[iVar9] == -1 && func_181())
						{
							if (Global_1835392.f_2704[iVar9] >= 1)
							{
								func_177(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), Global_1835392[iVar9 /*901*/][(Global_1835392.f_2704[iVar9] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_177(uParam0, &(Global_1835392[iVar9 /*901*/][Global_1835392.f_2704[iVar9] /*75*/]), 1);
							}
							Global_1835392.f_2775[iVar9] = Global_1835392.f_2704[iVar9];
							Global_1835392.f_2704[iVar9]++;
						}
						return 0;
					}
					else
					{
						func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						unk_0xBE20AB8238688965(&(Global_1835392.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835392.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_170(iVar9, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_183(var uParam0, var uParam1, var* uParam2, var* uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_174() && !func_173())
			{
				func_172(*uParam2);
				if (leaderboards2_read_friends_by_row(uParam2, uParam3, iParam4, bParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0xF9ED010877BD7ABC(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x26A455891223E980(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_184(var uParam0)
{
	struct<13> Var0;
	struct<97> Var1;
	struct<6> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	
	Var1.f_19.f_1 = 4;
	iVar6 = -1;
	iVar10 = 0;
	Var0 = { func_23(unk_0x460153A63B9477BC()) };
	switch ((*uParam0)[iVar10])
	{
		case 0:
			Global_1835392.f_2775[iVar10] = -1;
			Global_1835392.f_2704[iVar10] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_185(uParam0->f_44))
			{
				if (!Global_1835389)
				{
					Global_1835389 = 1;
				}
			}
			else if (Global_1835389)
			{
				Global_1835389 = 0;
			}
			if (!Global_1835389)
			{
			}
			if (func_180(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_181(), 0, 0, 0))
			{
				func_179(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xF8C2A806CC1DA7C7(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar8 = 0;
						iVar3 = 0;
						if (func_181())
						{
							iVar8 = 0;
							while (iVar8 < Var2.f_3)
							{
								unk_0x8714DED49483ADC8(iVar8, &Var1);
								if (Global_1835013.f_374 < 0)
								{
									if (func_143(&Var1, &Var0) || func_143(&Var1, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var1.f_96;
									}
								}
								if (iVar6 < 0)
								{
									if (unk_0xCE990E643CD9D0E5(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= unk_0xC4E9DE5522F14176(iVar8, 0))
										{
											iVar6 = iVar8;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= unk_0x38E6B5BF2C659A2C(iVar8, 0))
									{
										iVar6 = iVar8;
									}
								}
								func_178(&Var1);
								iVar8++;
							}
							if (iVar6 < 0)
							{
								iVar6 = Var2.f_3;
							}
						}
						iVar8 = 0;
						unk_0x8714DED49483ADC8(0, &Var1);
						if (Var1.f_96 <= 1)
						{
							if (Global_1835392.f_2704[iVar10] < 11)
							{
								if (func_181() && iVar6 == 0)
								{
									func_177(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), Var1.f_96);
									Global_1835392.f_2775[iVar10] = 0;
									Global_1835392.f_2704[iVar10]++;
								}
								if (func_181() && (func_143(&Var1, &Var0) || func_143(&Var1, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_143(&Var1, &Var0))
									{
										iVar6 = 0;
										Global_1835392.f_2775[iVar10] = 0;
									}
									MemCopy(&(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
									Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_32 = { Var1 };
									Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
									if (func_176(uParam0->f_44))
									{
										iVar5 = unk_0xC4E9DE5522F14176(0, Global_1835392.f_2709);
										if (iVar5 == 1)
										{
											Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_58 = 0;
										}
									}
									if (func_192(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_74 = 1;
									iVar3 = 0;
									while (iVar3 < Global_1835392.f_2708)
									{
										if (unk_0xCE990E643CD9D0E5(Global_1835392.f_2769, Global_1835392.f_2710[iVar3]))
										{
											Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_67[iVar3] = unk_0xC4E9DE5522F14176(0, Global_1835392.f_2710[iVar3]);
										}
										else
										{
											Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_60[iVar3] = unk_0x38E6B5BF2C659A2C(0, Global_1835392.f_2710[iVar3]);
										}
										iVar3++;
									}
									Global_1835392.f_2704[iVar10]++;
								}
								bVar9 = true;
							}
						}
						if (!bVar9)
						{
							Global_1835392.f_2704[iVar10]++;
						}
						if (!func_181())
						{
							iVar6 = Var2.f_5;
						}
						if (iVar6 > 6)
						{
							iVar7 = (iVar6 - 6);
						}
						else if (bVar9)
						{
							iVar7 = 1;
						}
						else
						{
							iVar7 = 0;
						}
						iVar8 = iVar7;
						func_178(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 1))
						{
							unk_0x8714DED49483ADC8(iVar8, &Var1);
							if (Global_1835392.f_2704[iVar10] < 11 && Var1.f_96 > 1)
							{
								if (func_181() && iVar6 == iVar8)
								{
									if (!func_143(&(Global_1835392[iVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										func_177(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), Var1.f_96);
										Global_1835392.f_2775[iVar10] = Global_1835392.f_2704[iVar10];
										Global_1835392.f_2704[iVar10]++;
									}
								}
								if (func_181() && (func_143(&Var1, &Var0) || func_143(&Var1, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[iVar10] < 11)
								{
									if (func_144(Var1) && !func_143(&(Global_1835392[iVar10 /*901*/][0 /*75*/].f_32), &Var1))
									{
										if (func_143(&Var1, &Var0))
										{
											if (Global_1835392.f_2775[iVar10] < 0)
											{
												Global_1835392.f_2775[iVar10] = Global_1835392.f_2704[iVar10];
											}
										}
										MemCopy(&(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
										Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_32 = { Var1 };
										Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
										Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_74 = 1;
										if (func_176(uParam0->f_44))
										{
											iVar5 = unk_0xC4E9DE5522F14176(iVar8, Global_1835392.f_2709);
											if (iVar5 == 1)
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_58 = 0;
											}
										}
										if (func_192(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar3 = 0;
										iVar3 = 0;
										while (iVar3 < Global_1835392.f_2708)
										{
											if (unk_0xCE990E643CD9D0E5(Global_1835392.f_2769, Global_1835392.f_2710[iVar3]))
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_67[iVar3] = unk_0xC4E9DE5522F14176(iVar8, Global_1835392.f_2710[iVar3]);
											}
											else
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_60[iVar3] = unk_0x38E6B5BF2C659A2C(iVar8, Global_1835392.f_2710[iVar3]);
											}
											iVar3++;
										}
										Global_1835392.f_2704[iVar10]++;
									}
								}
							}
							func_178(&Var1);
							iVar8++;
						}
						unk_0x73C92978714C5E7C();
						func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar9)
						{
							if (Global_1835392.f_2775[iVar10] == -1 && func_181())
							{
								if (Global_1835392.f_2704[iVar10] >= 1)
								{
									func_177(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), Global_1835392[iVar10 /*901*/][(Global_1835392.f_2704[iVar10] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_177(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), 1);
								}
								Global_1835392.f_2775[iVar10] = Global_1835392.f_2704[iVar10];
								Global_1835392.f_2704[iVar10]++;
							}
							(*uParam0)[iVar10] = 2;
						}
						else
						{
							(*uParam0)[iVar10] = 1;
						}
					}
					else
					{
						if (!bVar9)
						{
							Global_1835392.f_2704[iVar10]++;
						}
						unk_0x73C92978714C5E7C();
						func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[iVar10] = -1;
						(*uParam0)[iVar10] = 1;
					}
				}
				else
				{
					func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2775[iVar10] = -1;
					(*uParam0)[iVar10] = 1;
					unk_0xBE20AB8238688965(&(Global_1835392.f_2832), iVar10);
				}
			}
			break;
		
		case 1:
			if (Global_1835392.f_2775[iVar10] == -1)
			{
				iVar12 = 11;
			}
			else
			{
				iVar12 = 1;
			}
			if (func_171(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar12))
			{
				func_179(&Var2, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xF8C2A806CC1DA7C7(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar3 = 0;
						while (iVar3 < Var2.f_3)
						{
							unk_0x8714DED49483ADC8(iVar3, &Var1);
							if (func_181() && (func_143(&Var1, &Var0) || func_143(&Var1, &(Global_1835013.f_361))))
							{
							}
							else
							{
								bVar11 = false;
								if (Global_1835392[iVar10 /*901*/][0 /*75*/].f_59 > 1 || Global_1835392[iVar10 /*901*/][0 /*75*/].f_59 <= 0)
								{
									bVar11 = true;
								}
								if (Global_1835392.f_2704[iVar10] < 11 || bVar11)
								{
									if (iVar3 == 0 || bVar11)
									{
										MemCopy(&(Global_1835392[iVar10 /*901*/][0 /*75*/]), {Var1.f_13}, 16);
										Global_1835392[iVar10 /*901*/][0 /*75*/].f_32 = { Var1 };
										Global_1835392[iVar10 /*901*/][0 /*75*/].f_59 = Var1.f_96;
										if (func_176(uParam0->f_44))
										{
											iVar5 = unk_0xC4E9DE5522F14176(0, Global_1835392.f_2709);
											if (iVar5 == 1)
											{
												Global_1835392[iVar10 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar10 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_192(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar10 /*901*/][0 /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835392[iVar10 /*901*/][0 /*75*/].f_74 = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1835392.f_2708)
										{
											if (unk_0xCE990E643CD9D0E5(Global_1835392.f_2769, Global_1835392.f_2710[iVar4]))
											{
												Global_1835392[iVar10 /*901*/][iVar3 /*75*/].f_67[iVar4] = unk_0xC4E9DE5522F14176(iVar3, Global_1835392.f_2710[iVar4]);
											}
											else
											{
												Global_1835392[iVar10 /*901*/][iVar3 /*75*/].f_60[iVar4] = unk_0x38E6B5BF2C659A2C(iVar3, Global_1835392.f_2710[iVar4]);
											}
											iVar4++;
										}
										if (Global_1835392.f_2704[iVar10] == 0)
										{
											if (bVar11)
											{
											}
											else
											{
												Global_1835392.f_2704[iVar10]++;
											}
										}
										else if (Global_1835392.f_2704[iVar10] == 1 && Global_1835392.f_2775[iVar10] == -1)
										{
											Global_1835392.f_2704[iVar10]++;
										}
									}
									else if (Global_1835392.f_2704[iVar10] < 11)
									{
										MemCopy(&(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), {Var1.f_13}, 16);
										Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_32 = { Var1 };
										if (func_176(uParam0->f_44))
										{
											iVar5 = unk_0xC4E9DE5522F14176(iVar3, Global_1835392.f_2709);
											if (iVar5 == 1)
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_58 = 0;
											}
										}
										if (func_192(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_16), {Var1.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_59 = Var1.f_96;
										Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_74 = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1835392.f_2708)
										{
											if (unk_0xCE990E643CD9D0E5(Global_1835392.f_2769, Global_1835392.f_2710[iVar4]))
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_67[iVar4] = unk_0xC4E9DE5522F14176(iVar3, Global_1835392.f_2710[iVar4]);
											}
											else
											{
												Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/].f_60[iVar4] = unk_0x38E6B5BF2C659A2C(iVar3, Global_1835392.f_2710[iVar4]);
											}
											iVar4++;
										}
										if (iVar3 != 0)
										{
											Global_1835392.f_2704[iVar10]++;
										}
									}
								}
							}
							func_178(&Var1);
							iVar3++;
						}
					}
					unk_0x73C92978714C5E7C();
					func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar10] = 2;
				}
				else
				{
					unk_0xBE20AB8238688965(&(Global_1835392.f_2832), iVar10);
					func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2704[iVar10] = 0;
					(*uParam0)[iVar10] = 2;
					Global_1835392.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835392.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835392.f_2775[iVar10] == -1 && func_181())
			{
				if (Global_1835392.f_2704[iVar10] >= 1)
				{
					func_177(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), Global_1835392[iVar10 /*901*/][(Global_1835392.f_2704[iVar10] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_177(uParam0, &(Global_1835392[iVar10 /*901*/][Global_1835392.f_2704[iVar10] /*75*/]), 1);
				}
				Global_1835392.f_2775[iVar10] = Global_1835392.f_2704[iVar10];
				Global_1835392.f_2704[iVar10]++;
			}
			break;
		
		case 2:
			func_170(iVar10, Global_1835013.f_374);
			(*uParam0)[iVar10] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_185(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)
{
	int iVar0;
	
	if (Global_1835388)
	{
		if (Global_1835013.f_5 != 0)
		{
			if (Global_1835013.f_5 == Param0)
			{
				if (Global_1835013.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!unk_0xF005CCA4263DF67F(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !unk_0xF005CCA4263DF67F(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_186(var uParam0)
{
	int iVar0;
	
	if (unk_0x4FD26744D3418E79(Global_1835392.f_2826))
	{
		iVar0 = unk_0x1810EA965A938383(Global_1835392.f_2826);
		if (iVar0 < 300000)
		{
			unk_0xBE20AB8238688965(&(uParam0->f_42), 5);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(uParam0->f_42), 5);
			func_156(Global_1835392.f_2826, -1);
		}
	}
}

bool func_187(var uParam0)
{
	return uParam0->f_1;
}

void func_188(int iParam0)
{
	if (unk_0x95EF219D38B20CFF(iParam0))
	{
		unk_0x37FC7E88C7659D33(iParam0, 255, 255, 255, 0, 0);
	}
}

void func_189(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var2;
	bool bVar3;
	struct<13> Var4;
	int iVar5;
	struct<13> Var6;
	int iVar7;
	
	sVar0 = "";
	if (unk_0xCE990E643CD9D0E5(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (unk_0xCE990E643CD9D0E5(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (unk_0xCE990E643CD9D0E5(iParam2, 6))
	{
		*iParam1++;
		if (unk_0x0EB6C63A09FD9DF1() && unk_0xE2FBD13450B2DA21())
		{
			if (unk_0xDCA0815D900F27F8() && !unk_0xF9A94F315B890564(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var4 = { func_23(unk_0x460153A63B9477BC()) };
				if (unk_0xBF9EC1ED7E386622(&Var4))
				{
					unk_0x192BD21E18525C69(&Var1, 35, &Var4);
					if (!unk_0x7BCC91F3C1CF24E8(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var2 = { Var1.f_1 };
						bVar3 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	unk_0x830F007E19C63E14(iParam0, "SET_SLOT");
	unk_0xAD291B8F75D737AD(*iParam1);
	unk_0xAD291B8F75D737AD(iParam2);
	if (bVar3)
	{
		unk_0xB23270F3D5E62FDE(sVar0);
		unk_0x05CA0125610AB2F4(&Var2);
		unk_0x2042E9CA4306F725();
	}
	else
	{
		unk_0xB23270F3D5E62FDE(sVar0);
		unk_0x2042E9CA4306F725();
	}
	unk_0xE1FDD153F5858534();
	*iParam1++;
	if (bParam4)
	{
		iVar5 = 0;
		unk_0xBE20AB8238688965(&iVar5, 7);
		unk_0x830F007E19C63E14(iParam0, "SET_SLOT");
		unk_0xAD291B8F75D737AD(*iParam1);
		unk_0xAD291B8F75D737AD(iVar5);
		if (!unk_0x0EB6C63A09FD9DF1())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!unk_0xB6E5F77B7062D58A())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1835392.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		unk_0xB23270F3D5E62FDE(sVar0);
		unk_0xF8101CA70E0D01A6();
		unk_0xE1FDD153F5858534();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (unk_0xCE990E643CD9D0E5(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (unk_0xCE990E643CD9D0E5(iParam2, 5))
		{
			if (unk_0xA5330793F2DF46E6() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (unk_0xCE990E643CD9D0E5(iParam2, 6))
		{
			if (unk_0x2A4512DFA7EDB2F9())
			{
				if (unk_0x09F9E89C9E3B9FEC())
				{
					if (unk_0x0EB6C63A09FD9DF1() && unk_0xE2FBD13450B2DA21())
					{
						if (unk_0xDCA0815D900F27F8() && !unk_0xF9A94F315B890564(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var6 = { func_23(unk_0x460153A63B9477BC()) };
							if (unk_0xBF9EC1ED7E386622(&Var6))
							{
								unk_0x192BD21E18525C69(&Var1, 35, &Var6);
								if (!unk_0x7BCC91F3C1CF24E8(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var2 = { Var1.f_1 };
									bVar3 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar7 = 0;
		unk_0xBE20AB8238688965(&iVar7, 7);
		unk_0x830F007E19C63E14(iParam0, "SET_SLOT");
		unk_0xAD291B8F75D737AD(*iParam1);
		unk_0xAD291B8F75D737AD(iVar7);
		if (bVar3)
		{
			unk_0xB23270F3D5E62FDE(sVar0);
			unk_0x05CA0125610AB2F4(&Var2);
			unk_0xF8101CA70E0D01A6();
		}
		else
		{
			unk_0xB23270F3D5E62FDE(sVar0);
			unk_0xF8101CA70E0D01A6();
		}
		unk_0xE1FDD153F5858534();
		*iParam1++;
	}
}

void func_190(int iParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	unk_0x830F007E19C63E14(iParam0, "SET_TITLE");
	unk_0xB23270F3D5E62FDE(sParam1);
	unk_0x2042E9CA4306F725();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		unk_0xB23270F3D5E62FDE(uParam2[iVar0 /*6*/]);
		unk_0x2042E9CA4306F725();
		iVar0++;
	}
	unk_0xE1FDD153F5858534();
}

void func_191(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)
{
	unk_0x830F007E19C63E14(iParam0, "SET_MULTIPLAYER_TITLE");
	unk_0xB23270F3D5E62FDE(sParam1);
	if (!unk_0x7BCC91F3C1CF24E8(sParam2))
	{
		unk_0x6A826E35A3096ED0(sParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!unk_0x7BCC91F3C1CF24E8(sParam3))
			{
				unk_0x05CA0125610AB2F4(sParam3);
			}
		}
		else if (!unk_0x7BCC91F3C1CF24E8(sParam3))
		{
			unk_0x6A826E35A3096ED0(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!unk_0x7BCC91F3C1CF24E8(sParam3))
			{
				unk_0x05CA0125610AB2F4(sParam3);
			}
		}
		else if (!unk_0x7BCC91F3C1CF24E8(sParam3))
		{
			unk_0x6A826E35A3096ED0(sParam3);
		}
		unk_0x42710E9E08FA375A(iParam5);
	}
	unk_0x2042E9CA4306F725();
	unk_0xE1FDD153F5858534();
}

int func_192(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_193(int iParam0, int iParam1)
{
	unk_0x830F007E19C63E14(iParam0, "SET_DISPLAY_TYPE");
	unk_0xAD291B8F75D737AD(iParam1);
	unk_0xE1FDD153F5858534();
}

int func_194()
{
	return unk_0x5DEA4192B46CB99B("SC_LEADERBOARD");
}

bool func_195()
{
	return func_196(unk_0x460153A63B9477BC());
}

int func_196(int iParam0)
{
	switch (func_197(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 42:
		case 37:
		case 40:
		case 43:
			return 0;
		
		default:
	}
	return 1;
}

int func_197(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_196;
}

void func_198(int iParam0)
{
	Global_1315735 = iParam0;
}

void func_199(int iParam0)
{
	Global_1378744.f_1121 = iParam0;
}

void func_200(bool bParam0)
{
	if (bParam0)
	{
		func_202();
	}
	func_201(4, -1);
	func_201(6, -1);
	func_201(7, -1);
	func_201(3, -1);
	func_201(1, -1);
	func_201(2, -1);
	func_201(11, -1);
	func_201(13, -1);
	func_201(14, -1);
	func_201(16, -1);
}

void func_201(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_1377236.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1377236.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_202()
{
	Global_2540384.f_4595 = 0;
}

void func_203(var uParam0, bool bParam1, bool bParam2)
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

int func_204(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1840924.f_2 + 5 < unk_0xD3137A576BE9EC5C() && Global_1840924.f_2 > 0)
	{
		func_97(&Global_1840924);
		func_97(&(Global_1840924.f_49));
		*iParam0 = 0;
		Global_1840924.f_2 = 0;
		func_212(0);
	}
	Global_1840924.f_2 = unk_0xD3137A576BE9EC5C();
	iVar1 = -1;
	if (unk_0xDCA0815D900F27F8())
	{
		if (unk_0x5C5E5AC1740BDB59() == 0)
		{
			iVar1 = unk_0x80D7CAE43BEE171B();
		}
	}
	if ((unk_0xDCA0815D900F27F8() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_210() && unk_0x0EB6C63A09FD9DF1()))
	{
		if (unk_0xBEEF23D05331EDE7())
		{
			func_207(&(Global_1840924.f_3), func_209(&(Global_1840924.f_3)));
			if (!unk_0xCE990E643CD9D0E5(*iParam0, 4))
			{
				unk_0xBE20AB8238688965(iParam0, 4);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_205(&(Global_1840924.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				set_warning_message_with_header("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 2)
			{
				set_warning_message_with_header("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 1)
			{
				set_warning_message_with_header("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (iVar1 == 5)
			{
				set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			else if (!func_210())
			{
				set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, false, -1, 0, 0, true, 0);
			}
			if (!unk_0xCE990E643CD9D0E5(*iParam0, 0))
			{
				if (!unk_0x22D6FB6153F774D3(2, 201))
				{
					unk_0xBE20AB8238688965(iParam0, 0);
				}
			}
			else if (unk_0xC27AEE8B64EE0F8D(2, 201))
			{
				func_97(&(Global_1840924.f_49));
				func_97(&Global_1840924);
				*iParam0 = 0;
				Global_1840924.f_2 = 0;
				func_212(0);
				return 1;
			}
		}
	}
	else
	{
		func_207(&(Global_1840924.f_3), func_209(&(Global_1840924.f_3)));
		if ((func_187(&(Global_1840924.f_49)) && !func_150(&(Global_1840924.f_49), 2000, 1)) && !unk_0x0EB6C63A09FD9DF1())
		{
			unk_0xBE20AB8238688965(iParam0, 3);
			StringCopy(&(Global_1840924.f_3.f_1), "", 64);
			func_205(&(Global_1840924.f_3), 0);
		}
		else if (!unk_0xCE990E643CD9D0E5(*iParam0, 3))
		{
			if (!unk_0xCE990E643CD9D0E5(*iParam0, 1))
			{
				unk_0x6F60936103CA52CD(0);
				unk_0xBE20AB8238688965(iParam0, 1);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_205(&(Global_1840924.f_3), 0);
			}
		}
		if (func_187(&Global_1840924))
		{
			if (!func_150(&Global_1840924, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!unk_0x0EB6C63A09FD9DF1())
				{
					if (unk_0xA93A2D016A6306D9())
					{
						set_warning_message_with_header("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
					}
					else
					{
						set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
					}
					if (!unk_0x689B0FFC8081E57F())
					{
						if (!unk_0xCE990E643CD9D0E5(*iParam0, 0))
						{
							if (!unk_0x22D6FB6153F774D3(2, 201))
							{
								unk_0xBE20AB8238688965(iParam0, 0);
							}
						}
						else if (unk_0xC27AEE8B64EE0F8D(2, 201))
						{
							func_97(&Global_1840924);
							*iParam0 = 0;
							Global_1840924.f_2 = 0;
							func_212(0);
							return 1;
						}
					}
				}
				else
				{
					func_97(&Global_1840924);
					*iParam0 = 0;
					Global_1840924.f_2 = 0;
					func_212(0);
					return 1;
				}
			}
			else if (unk_0xCE990E643CD9D0E5(*iParam0, 3))
			{
				if (unk_0xA93A2D016A6306D9())
				{
					set_warning_message_with_header("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				if (!unk_0xCE990E643CD9D0E5(*iParam0, 0))
				{
					if (!unk_0x22D6FB6153F774D3(2, 201))
					{
						unk_0xBE20AB8238688965(iParam0, 0);
					}
				}
				else if (unk_0xC27AEE8B64EE0F8D(2, 201))
				{
					func_97(&(Global_1840924.f_49));
					func_97(&Global_1840924);
					*iParam0 = 0;
					Global_1840924.f_2 = 0;
					func_212(0);
					return 1;
				}
			}
			else
			{
				if (unk_0xA93A2D016A6306D9())
				{
					set_warning_message_with_header("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				else
				{
					set_warning_message_with_header("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, false, -1, 0, 0, true, 0);
				}
				if (!unk_0x689B0FFC8081E57F())
				{
					if (!unk_0xCE990E643CD9D0E5(*iParam0, 0))
					{
						if (!unk_0x22D6FB6153F774D3(2, 201))
						{
							unk_0xBE20AB8238688965(iParam0, 0);
						}
					}
					else if (unk_0xC27AEE8B64EE0F8D(2, 201))
					{
						func_97(&(Global_1840924.f_49));
						func_97(&Global_1840924);
						*iParam0 = 0;
						Global_1840924.f_2 = 0;
						func_212(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_205(var uParam0, bool bParam1)
{
	func_206(uParam0);
	if (bParam1)
	{
		func_212(0);
	}
	uParam0->f_35 = 1;
}

void func_206(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_207(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_208(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			unk_0x1F096ADCD1F99FB1(&(uParam0->f_1));
			unk_0x42710E9E08FA375A(uParam0->f_33);
			unk_0x42710E9E08FA375A(uParam0->f_34);
			unk_0xA7C9EA826799BF5D(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			unk_0x1F096ADCD1F99FB1(&(uParam0->f_1));
			unk_0x42710E9E08FA375A(uParam0->f_33);
			unk_0xA7C9EA826799BF5D(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			unk_0x1F096ADCD1F99FB1(&(uParam0->f_1));
			unk_0x9EFD301E3BE8324E(&(uParam0->f_17));
			unk_0x42710E9E08FA375A(uParam0->f_33);
			unk_0x42710E9E08FA375A(uParam0->f_34);
			unk_0xA7C9EA826799BF5D(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			unk_0x1F096ADCD1F99FB1(&(uParam0->f_1));
			unk_0x9EFD301E3BE8324E(&(uParam0->f_17));
			unk_0xA7C9EA826799BF5D(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			unk_0x1F096ADCD1F99FB1(&(uParam0->f_1));
			unk_0x7899A951E85F4B28(uParam0->f_33, 70);
			unk_0xA7C9EA826799BF5D(uParam0->f_41);
		}
		else
		{
			unk_0x1F096ADCD1F99FB1(&(uParam0->f_1));
			unk_0xA7C9EA826799BF5D(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_208(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_209(var uParam0)
{
	return uParam0->f_35;
}

int func_210()
{
	if (func_211())
	{
		return 0;
	}
	if (unk_0x70E5C9630A26FB40() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_211()
{
	return Global_2462752;
}

void func_212(bool bParam0)
{
	unk_0xEE377857147BD117();
	if (bParam0)
	{
		unk_0xC28BE5B4E43DE25D();
	}
}

int func_213(var uParam0, bool bParam1, bool bParam2)
{
	if (!iLocal_134)
	{
		func_225(&(uParam0->f_72), bParam1);
		iLocal_134 = 1;
		func_331(&(uParam0->f_666), 9, 0);
	}
	else
	{
		if (Global_1835013.f_1 && !Global_1835013.f_2)
		{
			func_222(190, bParam1);
			Global_1835013.f_2 = 1;
			*bParam2 = 1;
		}
		if (func_214(&(uParam0->f_72)))
		{
			Global_1835388 = 1;
			return 1;
		}
	}
	return 0;
}

int func_214(var uParam0)
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	int iVar4;
	
	Var0.f_19.f_1 = 4;
	Var2.f_3 = 32;
	Var2.f_36 = 32;
	if (func_192(uParam0->f_44))
	{
		Var3 = { Global_1835013.f_361 };
	}
	else
	{
		Var3 = { func_23(unk_0x460153A63B9477BC()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_221(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var3))
			{
				func_179(&Var1, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = unk_0xA679606E80F40EAE(uParam0->f_44, 0);
				iVar4 = 0;
				while (iVar4 < Global_1835013.f_142.f_1)
				{
					if (!func_220(uParam0->f_44, iVar4))
					{
						if (func_219(uParam0->f_44, 4, iVar4))
						{
							unk_0xBE20AB8238688965(&(Global_1835013.f_142.f_2), iVar4);
						}
						else
						{
							unk_0xD2459066EA58CE43(&(Global_1835013.f_142.f_2), iVar4);
						}
					}
					iVar4++;
				}
				if (uParam0->f_5 && unk_0xF8C2A806CC1DA7C7(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0x8714DED49483ADC8(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_144(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < Global_1835013.f_142.f_1)
							{
								if (!func_220(uParam0->f_44, iVar4))
								{
									if (func_219(uParam0->f_44, 4, iVar4))
									{
										Global_1835013.f_73.f_36[iVar4] = unk_0xC4E9DE5522F14176(0, iVar4);
										if (Global_1835013.f_73.f_36[iVar4] == -1)
										{
											if (iVar4 > Var0.f_97)
											{
												Global_1835013.f_73.f_36[iVar4] = 0;
											}
										}
									}
									else
									{
										Global_1835013.f_73.f_3[iVar4] = unk_0x38E6B5BF2C659A2C(0, iVar4);
										if (Global_1835013.f_73.f_3[iVar4] == -1f)
										{
											if (iVar4 > Var0.f_97)
											{
												Global_1835013.f_73.f_3[iVar4] = 0f;
											}
										}
									}
								}
								iVar4++;
							}
						}
					}
					else
					{
						Global_1835013.f_4 = 1;
					}
					unk_0x73C92978714C5E7C();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_218();
				if (Global_1835013.f_4)
				{
					if (func_217(uParam0->f_44))
					{
						Global_1835013 = 3;
					}
					else
					{
						Global_1835013 = 2;
					}
				}
				else
				{
					Global_1835013 = 2;
				}
			}
			break;
		
		case 2:
			unk_0xE889F583F9944A27(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_1835013.f_211 = { Global_1835013.f_142 };
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (unk_0x25DDB354A40FFCDB() && func_216())
			{
				if (func_215())
				{
					Global_1835013 = 99;
				}
				else
				{
					Global_1835013 = 999;
					return 1;
				}
			}
			else
			{
				Global_1835013 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_217(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var2 = Global_1835013.f_142;
				Var2.f_1 = Global_1835013.f_142.f_1;
				Var2.f_2 = Global_1835013.f_142.f_2;
				unk_0xE889F583F9944A27(&Var2, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_180(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var3, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_179(&Var1, &(uParam0->f_44));
				if (uParam0->f_5 && unk_0xF8C2A806CC1DA7C7(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						unk_0x8714DED49483ADC8(0, &Var0);
						if (unk_0xF005CCA4263DF67F(&(Var0.f_13), ""))
						{
							Global_968151.f_1 = -1;
						}
						else
						{
							Global_968151.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_968151.f_1 = -1;
					}
					unk_0x73C92978714C5E7C();
				}
				else
				{
					Global_968151.f_1 = -1;
				}
				Global_1835013 = 999;
				func_103(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_215()
{
	return unk_0xCE990E643CD9D0E5(Global_959568.f_8, 1);
}

var func_216()
{
	return Global_2460478.f_3;
}

int func_217(int iParam0)
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_218()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

int func_219(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = unk_0x2E89B7E2AD25489D(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_220(int iParam0, int iParam1)
{
	if (unk_0xB5B2A91544E73F64(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_221(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_174() && !func_173())
			{
				func_172(*uParam2);
				if (unk_0x50A2D9C055B7FECE(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!unk_0xF9ED010877BD7ABC(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (unk_0x26A455891223E980(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_222(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	if (!unk_0xDCA94C1EA9942FBD())
	{
		return;
	}
	StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_224(iParam0, &Var0, &Var1, 1, -1, 1, 0))
	{
		func_223(190, 131, 0, 0f, 1);
		func_223(190, 103, iLocal_106[1], 0f, 0);
		func_223(190, 99, iLocal_106[2], 0f, 0);
		func_223(190, 109, iLocal_106[3], 0f, 0);
		func_223(190, 106, iLocal_106[5], 0f, 0);
		func_223(190, 2, iLocal_106[10], 0f, 0);
		func_223(190, 107, iLocal_106[8], 0f, 0);
		func_223(190, 116, iLocal_106[6], 0f, 0);
		iLocal_106[1] = 0;
		iLocal_106[2] = 0;
		iLocal_106[3] = 0;
		iLocal_106[5] = 0;
		iLocal_106[10] = 0;
		iLocal_106[8] = 0;
		iLocal_106[6] = 0;
	}
}

void func_223(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		unk_0x5DFCCEA807F4355D(iParam1, iParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = unk_0xA679606E80F40EAE(Global_1835013.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_219(iParam0, 4, iVar1))
				{
					unk_0xBE20AB8238688965(&(Global_1835013.f_142.f_2), iVar1);
				}
				else
				{
					unk_0xD2459066EA58CE43(&(Global_1835013.f_142.f_2), iVar1);
				}
			}
			else
			{
				unk_0xD2459066EA58CE43(&(Global_1835013.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == unk_0xB5B2A91544E73F64(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_1835013.f_142.f_36[iVar0] = iParam2;
	Global_1835013.f_142.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		unk_0xBE20AB8238688965(&(Global_1835013.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		unk_0xD2459066EA58CE43(&(Global_1835013.f_142.f_2), iVar0);
	}
}

int func_224(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!unk_0x0EB6C63A09FD9DF1())
	{
	}
	if ((!unk_0x8EF2E8B1E5E21C71() && (unk_0x51C955B55E9F6E86() || !unk_0xAC9BDC8868BA314A())) && unk_0xFD2965A38DED101B())
	{
		Var0.f_2.f_1 = 4;
		Var0 = uParam0;
		if (iParam4 == -1)
		{
			if (unk_0xE2FBD13450B2DA21())
			{
				Var2 = { func_23(unk_0x460153A63B9477BC()) };
				if (unk_0xBF9EC1ED7E386622(&Var2))
				{
					if (unk_0x192BD21E18525C69(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (unk_0x25DDB354A40FFCDB() && Global_2460478.f_3)
			{
				unk_0xB88FC77A56665324(&Var0, &(Global_1663920.f_10));
			}
			else
			{
				unk_0x06271DA851DE126B(&Var0);
			}
		}
		return 1;
	}
	if (unk_0x8EF2E8B1E5E21C71())
	{
	}
	if (!unk_0x51C955B55E9F6E86())
	{
	}
	if (unk_0xAC9BDC8868BA314A())
	{
	}
	if (!unk_0xFD2965A38DED101B())
	{
	}
	return 0;
}

void func_225(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	func_226(uParam0, 14, "DartsLB", "", iVar0, -1, 0, 0);
}

void func_226(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var1;
	int iVar2;
	struct<6> Var3;
	
	if (!unk_0x7BCC91F3C1CF24E8(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1835392.f_2769 = 0;
	Global_1835392.f_2770 = 0;
	Global_1835392.f_2768 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_235())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_235())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!unk_0x7BCC91F3C1CF24E8(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0x7BCC91F3C1CF24E8(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835392.f_2780.f_26 = -1;
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_235())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 3;
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_235())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_235())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!unk_0x7BCC91F3C1CF24E8(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!unk_0x7BCC91F3C1CF24E8(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_235())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 5;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 6;
					Global_1835392.f_2708 = 2;
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 5;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					Global_1835392.f_2709 = 6;
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_235())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					unk_0x72F711FF7DB52EBD(unk_0x460153A63B9477BC(), &Var3);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var3}, 8);
					Global_1835392.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_235())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var1 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!unk_0x7BCC91F3C1CF24E8(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!unk_0x7BCC91F3C1CF24E8(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_235())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					Global_1835392.f_2709 = 4;
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_235())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_235())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!unk_0x7BCC91F3C1CF24E8(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!unk_0x7BCC91F3C1CF24E8(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_235())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 0;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 0;
					Global_1835392.f_2708 = 1;
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 2;
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_235())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_235())
				{
					Global_1835392.f_2780.f_26 = iParam5;
					if (!unk_0x7BCC91F3C1CF24E8(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!unk_0x7BCC91F3C1CF24E8(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835392.f_2780.f_26 = -1;
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_235())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 3;
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0 || iParam4 == 3)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (iParam4 == 3)
				{
					if (!unk_0x7BCC91F3C1CF24E8(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_KOTH", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_KOTH_NN", 32);
					}
				}
				else if (!unk_0x7BCC91F3C1CF24E8(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				unk_0xD2459066EA58CE43(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				unk_0xD2459066EA58CE43(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1 || iParam4 == 4)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (iParam4 == 4)
				{
					if (!unk_0x7BCC91F3C1CF24E8(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TKOTH", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TKOTH_NN", 32);
					}
				}
				else if (!unk_0x7BCC91F3C1CF24E8(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				unk_0xD2459066EA58CE43(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				unk_0xD2459066EA58CE43(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!unk_0x7BCC91F3C1CF24E8(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				unk_0xD2459066EA58CE43(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				unk_0xD2459066EA58CE43(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 7;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 7;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), "CMSW", 64);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 4;
			Global_1835392.f_2710[4] = 6;
			Global_1835392.f_2708 = 5;
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 6;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 6;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 0;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0xD2459066EA58CE43(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 4;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 7;
			Global_1835392.f_2710[2] = 5;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			unk_0xD2459066EA58CE43(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			if (unk_0x7BCC91F3C1CF24E8(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1835392.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 9;
			Global_1835392.f_2710[2] = 7;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 2;
			Global_1835392.f_2708 = 5;
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 9;
			Global_1835392.f_2710[2] = 7;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 2;
			Global_1835392.f_2708 = 5;
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_ACC", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 2;
			Global_1835392.f_2710[2] = 1;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			unk_0xD2459066EA58CE43(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0xD2459066EA58CE43(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
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
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1835392.f_2780.f_9), {func_234(iParam1)}, 16);
			Global_1835392.f_2780.f_25 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 7;
			Global_1835392.f_2708 = 2;
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			Global_1835392.f_2780.f_25 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 0;
			Global_1835392.f_2710[2] = 0;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 1;
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 2;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 0;
			Global_1835392.f_2780.f_29[3] = 0;
			break;
		
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835392.f_2710[0] = 3;
			Global_1835392.f_2708 = 1;
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 1;
			break;
		
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!unk_0x7BCC91F3C1CF24E8(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!unk_0x7BCC91F3C1CF24E8(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 1;
				Global_1835392.f_2710[2] = 4;
				Global_1835392.f_2710[3] = 5;
				Global_1835392.f_2710[4] = 6;
				Global_1835392.f_2708 = 3;
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0xD2459066EA58CE43(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				Global_1835392.f_2780.f_28 = 6;
				Global_1835392.f_2780.f_29[0] = 5;
				Global_1835392.f_2780.f_29[1] = 11;
				Global_1835392.f_2780.f_29[2] = 4;
				Global_1835392.f_2780.f_29[3] = 5;
				Global_1835392.f_2780.f_29[4] = 5;
			}
			else if (Global_4456448.f_548 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!unk_0x7BCC91F3C1CF24E8(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 1;
				Global_1835392.f_2710[2] = 2;
				Global_1835392.f_2710[3] = 0;
				Global_1835392.f_2708 = 3;
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 2;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!unk_0x7BCC91F3C1CF24E8(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_233(Global_4456448.f_129348) || func_230(Global_4456448.f_129348))
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 2;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2708 = 2;
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else if (func_229(Global_4456448.f_129348))
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 2;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2708 = 2;
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 2;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!unk_0x7BCC91F3C1CF24E8(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			unk_0xBE20AB8238688965(&(Global_1835392.f_2768), 1);
			Global_1835392.f_2754[1] = -1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 11;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!unk_0x7BCC91F3C1CF24E8(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 3;
			Global_1835392.f_2708 = 2;
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_44 = 965;
							break;
						
						case 9:
							uParam0->f_44 = 966;
							break;
						
						case 4:
							uParam0->f_44 = 967;
							break;
						
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!unk_0x7BCC91F3C1CF24E8(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						
						case 2:
							uParam0->f_44 = 970;
							break;
						
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!unk_0x7BCC91F3C1CF24E8(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					unk_0xD2459066EA58CE43(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 4;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!unk_0x7BCC91F3C1CF24E8(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					unk_0xD2459066EA58CE43(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 4;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!unk_0x7BCC91F3C1CF24E8(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 2;
					Global_1835392.f_2710[3] = 1;
					Global_1835392.f_2708 = 4;
					unk_0xD2459066EA58CE43(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 12;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!unk_0x7BCC91F3C1CF24E8(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 4;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			unk_0xD2459066EA58CE43(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_29[0] = 17;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!unk_0x7BCC91F3C1CF24E8(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 4;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 2;
			Global_1835392.f_2708 = 4;
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_29[0] = 10;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!unk_0x7BCC91F3C1CF24E8(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 4;
			Global_1835392.f_2710[5] = 3;
			Global_1835392.f_2708 = 6;
			unk_0xD2459066EA58CE43(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0xD2459066EA58CE43(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 9;
			Global_1835392.f_2780.f_29[2] = 4;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			Global_1835392.f_2780.f_29[5] = 5;
			break;
		
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!unk_0x7BCC91F3C1CF24E8(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2708 = 1;
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 1;
			break;
		
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835392.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
				Global_1835392.f_2710[0] = 3;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 1;
				Global_1835392.f_2710[3] = 0;
				Global_1835392.f_2709 = 6;
				Global_1835392.f_2708 = 2;
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				Global_1835392.f_2780.f_28 = 4;
				Global_1835392.f_2780.f_29[0] = 1;
				Global_1835392.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
				Global_1835392.f_2710[0] = 3;
				Global_1835392.f_2710[1] = 2;
				Global_1835392.f_2710[2] = 4;
				Global_1835392.f_2710[3] = 1;
				Global_1835392.f_2709 = 4;
				Global_1835392.f_2708 = 3;
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 1;
				Global_1835392.f_2780.f_29[1] = 1;
				Global_1835392.f_2780.f_29[2] = 3;
			}
			Global_1835392.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
		
		case 888:
			uParam0->f_44 = 1201;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "ArenaMode", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 3;
			MemCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), {func_228(iParam4)}, 8);
			Global_1835392.f_2708 = 4;
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			switch (iParam4)
			{
				case 1:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_BUZZ", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1835392.f_2780.f_29[3] = 9;
					break;
				
				case 2:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_CARN", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 3:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_FLAGW", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_FLAGS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 4:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_WRECK", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 5:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_BOMBB", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_POINTS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_GOALS", 24);
					break;
				
				case 6:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_GAMEM", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_CPOINTS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 7:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_MNSTR", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 8:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_HOTB", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_PASSES", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1835392.f_2780.f_29[3] = 9;
					break;
				
				case 9:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_TAGT", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TAGS", 24);
					break;
			}
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2708 = 4;
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 889:
			uParam0->f_44 = 1202;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_CAREER", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_CARPT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MATCHES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TITLE", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 4;
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2708 = 4;
			Global_1835392.f_2780.f_28 = 5;
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			unk_0xD2459066EA58CE43(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			unk_0xBE20AB8238688965(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 4;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 21;
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_1835392.f_2708)
	{
		if (unk_0xCE990E643CD9D0E5(Global_1835392.f_2769, Global_1835392.f_2710[iVar2]))
		{
			unk_0xBE20AB8238688965(&(Global_1835392.f_2770), iVar2);
		}
		iVar2++;
	}
	Global_1835392.f_2826 = func_227(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

int func_227(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_192(iParam1))
	{
		if (bParam5)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam2, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam3, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam4, 64);
	return unk_0x856D5567211886A2(&cVar0);
}

struct<6> func_228(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "BuzzerBeater", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "Carnage", 24);
			break;
		
		case 3:
			StringCopy(&Var0, "FlagWar", 24);
			break;
		
		case 4:
			StringCopy(&Var0, "WreckIt", 24);
			break;
		
		case 5:
			StringCopy(&Var0, "BombBall", 24);
			break;
		
		case 6:
			StringCopy(&Var0, "GamesMasters", 24);
			break;
		
		case 7:
			StringCopy(&Var0, "Monsters", 24);
			break;
		
		case 8:
			StringCopy(&Var0, "HotBomb", 24);
			break;
		
		case 9:
			StringCopy(&Var0, "TagTeam", 24);
			break;
		
		default:
			break;
	}
	return Var0;
}

bool func_229(int iParam0)
{
	return iParam0 == 74;
}

var func_230(int iParam0)
{
	return (func_232(iParam0) || func_231(iParam0));
}

bool func_231(int iParam0)
{
	return iParam0 == 44;
}

bool func_232(int iParam0)
{
	return iParam0 == 45;
}

bool func_233(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_234(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_235()
{
	if (((((((((((Global_4456448.f_74284 == 1 || Global_4456448.f_74284 == 3) || Global_4456448.f_74284 == 5) || Global_4456448.f_74284 == 7) || Global_4456448.f_74284 == 19) || Global_4456448.f_74284 == 8) || Global_4456448.f_74284 == 9) || Global_4456448.f_74284 == 11) || Global_4456448.f_74284 == 13) || Global_4456448.f_74284 == 21) || Global_4456448.f_74284 == 23) || Global_4456448.f_74284 == 25)
	{
		return 1;
	}
	return 0;
}

int func_236(var uParam0, int iParam1)
{
	if (!func_420(&(uParam0->f_2)))
	{
		func_435(&(uParam0->f_2));
	}
	unk_0x4CB4237D8858ADA6(14);
	unk_0x37FC7E88C7659D33(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (unk_0x1BD7199394D7F19A(2, 201) || uParam0->f_8)
		{
			if (!func_420(&(uParam0->f_5)))
			{
				func_435(&(uParam0->f_5));
				func_237(uParam0, 1051260355);
			}
		}
		if (func_420(&(uParam0->f_5)))
		{
			if (func_7(&(uParam0->f_5)) > 0.33f)
			{
				func_421(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1)
	{
		if (!func_420(&(uParam0->f_5)))
		{
			func_435(&(uParam0->f_5));
			func_237(uParam0, 1051260355);
		}
		else if (func_7(&(uParam0->f_5)) > 0.33f)
		{
			func_421(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_237(var uParam0, float fParam1)
{
	unk_0x830F007E19C63E14(*uParam0, "SHARD_ANIM_OUT");
	unk_0xAD291B8F75D737AD(uParam0->f_9);
	unk_0x49B9B8101B158AEE(fParam1);
	unk_0xE1FDD153F5858534();
}

void func_238(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x344C570D6F8700DF(0, 100);
	if (iVar0 < 40)
	{
		if (!unk_0x5AEB5DDFFAD43CA5((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_LOSE", 0, 4);
		}
	}
	else if (iVar0 < 70)
	{
		if (!unk_0x5AEB5DDFFAD43CA5((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "GAME_LOSE_SELF", 1, 4);
		}
	}
	else if (!unk_0x5AEB5DDFFAD43CA5((*iParam0)[1]))
	{
		func_4((*iParam0)[1], "GAME_WIN_SELF", 0, 4);
	}
}

void func_239(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x344C570D6F8700DF(0, 100);
	if (iVar0 < 30)
	{
		if (!unk_0x5AEB5DDFFAD43CA5((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "DARTS_LOSE", 1, 4);
		}
	}
	else if (iVar0 < 50)
	{
		if (!unk_0x5AEB5DDFFAD43CA5((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_WIN", 0, 4);
		}
	}
	else if (iVar0 < 75 && iParam1)
	{
		if (!unk_0x5AEB5DDFFAD43CA5((*iParam0)[1]))
		{
			func_4((*iParam0)[1], "DARTS_LOSING_BADLY", 0, 4);
		}
	}
	else if (iVar0 < 88)
	{
		if (!unk_0x5AEB5DDFFAD43CA5((*iParam0)[0]))
		{
			func_4((*iParam0)[0], "GAME_WIN_SELF", 1, 4);
		}
	}
	else if (!unk_0x5AEB5DDFFAD43CA5((*iParam0)[1]))
	{
		func_4((*iParam0)[1], "GAME_LOSE_SELF", 0, 4);
	}
}

int func_240()
{
	int iVar0;
	
	if (!bLocal_155)
	{
		iVar0 = (unk_0x344C570D6F8700DF(0, 65535) % 3);
	}
	else
	{
		iLocal_169++;
		iVar0 = (iLocal_169 % 2);
	}
	return iVar0;
}

void func_241(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char* sVar0;
	
	sVar0 = func_242(iParam4);
	if (iParam4 != 5)
	{
		unk_0x830F007E19C63E14(*uParam0, "RESET_MOVIE");
		unk_0xE1FDD153F5858534();
	}
	unk_0x830F007E19C63E14(*uParam0, sVar0);
	unk_0xB23270F3D5E62FDE("STRING");
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x2042E9CA4306F725();
	func_12(sParam2);
	unk_0xE1FDD153F5858534();
	func_435(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
	uParam0->f_9 = iParam5;
}

char* func_242(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_SHARD_CENTERED_MP_MESSAGE";
		
		case 1:
			return "SHOW_SHARD_CENTERED_TOP_MP_MESSAGE";
		
		case 2:
			return "SHOW_SHARD_WASTED_MP_MESSAGE";
		
		case 3:
			return "SHOW_SHARD_RANKUP_MP_MESSAGE";
		
		case 4:
			return "SHOW_SHARD_CREW_RANKUP_MP_MESSAGE";
		
		case 5:
			if (unk_0x25DDB354A40FFCDB())
			{
				return "SHOW_COND_SHARD_MESSAGE";
			}
			return "SHOW_SHARD_MIDSIZED_MESSAGE";
		
		default:
	}
	return "SHOW_SHARD_CENTERED_MP_MESSAGE";
}

void func_243(var uParam0, int iParam1)
{
	unk_0x830F007E19C63E14(*uParam0, "CLEAR_SCORES");
	unk_0xAD291B8F75D737AD(iParam1);
	unk_0xE1FDD153F5858534();
}

int func_244(int iParam0)
{
	iParam0->f_2 = { 0f, -2.3685f, -0.2f };
	iParam0->f_5 = { 0f, 0f, 0f };
	iParam0->f_8 = { 0f, 0f, 0f };
	iParam0->f_20 = 0;
	iParam0->f_23 = 0;
	iParam0->f_24 = 0;
	iParam0->f_25 = 0;
	if (unk_0xAE06B9E39EBDE049(*iParam0))
	{
		unk_0x315F7D8C33F0AB37(iParam0);
	}
	return 1;
}

void func_245(int iParam0)
{
	unk_0xF674D9B2033F5F86(iLocal_77, iLocal_75, 1500, 1, 1);
	unk_0x856549C07003344B(iLocal_78, true);
	unk_0xF674D9B2033F5F86(iLocal_77, iLocal_78, 8000, 1, 1);
	unk_0x3B1D5D044BC72834(iLocal_80, iParam0, -0.0301f, 1.498f, 0.7435f, 1);
	unk_0x46FC5C9D2F1078AF(iLocal_80, iParam0, 0.0557f, -1.4905f, 0.4958f, 1);
	unk_0xD64C2E5B5BA2D347(iLocal_80, 35f);
}

void func_246(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	bool bVar0;
	
	if (!unk_0xC70648DE87CC1919(iLocal_75))
	{
		bVar0 = false;
		func_327(uParam0);
		if (!bLocal_147)
		{
			if (uParam0->f_1 == 5)
			{
				if (uParam3->f_672)
				{
					unk_0xD289B55B6AADBA10(1);
					uParam3->f_672 = 0;
				}
			}
			else if (!bLocal_107)
			{
				if (func_3(&(uParam3->f_666), 18))
				{
					if (!func_3(&(uParam3->f_666), 21))
					{
						if (!unk_0xCE990E643CD9D0E5(Global_111819, 3))
						{
							func_418("DARTS_INSTR_W", -1);
							unk_0xBE20AB8238688965(&Global_111819, 3);
						}
						func_331(&(uParam3->f_666), 21, 1);
					}
					else if (!func_3(&(uParam3->f_666), 20) && func_3(&(uParam3->f_666), 19))
					{
						if (!unk_0xCE990E643CD9D0E5(Global_111819, 4))
						{
							func_418("DARTS_INSTR_B", -1);
							unk_0xBE20AB8238688965(&Global_111819, 4);
						}
						func_331(&(uParam3->f_666), 20, 1);
					}
				}
				uParam3->f_672 = 1;
			}
			else if (uParam3->f_672)
			{
				unk_0xD289B55B6AADBA10(1);
				uParam3->f_672 = 0;
			}
		}
		if (uParam0->f_1 == 1)
		{
			if (!unk_0xC70648DE87CC1919(iLocal_84) && uParam0->f_3 == 2)
			{
				func_326(uParam3);
			}
		}
		else
		{
			func_324(uParam3, iLocal_30);
		}
		func_323(&(uParam0->f_1));
	}
	else
	{
		bVar0 = true;
	}
	func_320(uParam3);
	switch (uParam0->f_1)
	{
		case 1:
			if (!func_312(&(uParam0->f_3)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 0:
			if (func_305(uParam0->f_422[iLocal_30], &(uParam0->f_243), &(uParam0->f_4), &(uParam0->f_461)))
			{
				uParam0->f_1 = 2;
			}
			break;
		
		case 2:
			if (unk_0x22D6FB6153F774D3(2, 228) && iLocal_30 == 0)
			{
				uParam0->f_1 = 1;
			}
			if (iLocal_30 == 0)
			{
				func_304(iLocal_31, 0);
				if (((((!func_303("DARTS_SHT_USE") && !func_303("DARTS_INSTR_W")) && !func_303("DARTS_INSTR_B")) && !func_303("DARTS_AIM_HLP")) && !func_303("DARTS_STD_HLP")) && !func_303("DARTS_FST_HLP"))
				{
					if (func_3(&(uParam3->f_666), 24))
					{
						func_418("DARTS_LEVEL", -1);
						unk_0xBE20AB8238688965(&(Global_111858.f_18966.f_6), iLocal_167);
						func_331(&(uParam3->f_666), 24, 0);
					}
				}
				if ((((uParam0->f_422[iLocal_30] % 2) == 0 && uParam0->f_422[iLocal_30] < 41) && iLocal_31 == 0) && !iLocal_145)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_331(&(uParam3->f_666), 6, 1);
					}
					iLocal_145 = 1;
				}
				else if (uParam0->f_422[iLocal_30] == 50 && !iLocal_145)
				{
					if (!func_3(&(uParam3->f_666), 6))
					{
						func_331(&(uParam3->f_666), 6, 1);
					}
					iLocal_145 = 1;
				}
				else if (func_293(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam1, bVar0, 0, 0, uParam0->f_248))
				{
					unk_0xB80B2936A29B2666();
					uParam3->f_670 = (uParam3->f_670 - 1);
					uParam0->f_1 = 3;
				}
				else if (!iLocal_142)
				{
					if (!func_420(iParam4))
					{
						func_291(iParam4);
					}
					else if (func_7(iParam4) > 20f)
					{
						func_290(iLocal_138[(1 - iLocal_30)]);
						func_421(iParam4);
						iLocal_142 = 1;
					}
				}
			}
			else if (iLocal_31 == 0)
			{
				iLocal_165 = 0;
				func_289(&(uParam0->f_422), &(uParam0->f_249));
				func_286(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			else if (timera() > unk_0x344C570D6F8700DF(1250, 2500))
			{
				func_289(&(uParam0->f_422), &(uParam0->f_249));
				func_286(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			}
			break;
		
		case 3:
			if (func_273(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_248, 0))
			{
				uParam0->f_436++;
				uParam0->f_455 = func_272(uParam0);
				uParam0->f_1 = 4;
			}
			break;
		
		case 4:
			if (!func_3(&(uParam3->f_666), 5))
			{
				func_270(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), uParam0->f_455);
			}
			func_255(uParam0, uParam3);
			break;
		
		case 5:
			func_248(uParam0, uParam2, uParam3);
			if (func_420(iParam4))
			{
				func_421(iParam4);
			}
			break;
		
		case 6:
			func_247(uParam0, uParam3);
			break;
	}
}

void func_247(var uParam0, var uParam1)
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	float fVar3;
	
	iLocal_165++;
	iLocal_30 = 1;
	iLocal_31 = 0;
	iLocal_149 = 1;
	while (iLocal_31 < 3 && uParam0->f_1 == 6)
	{
		if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_25)
			{
				iLocal_31++;
			}
			else
			{
				func_270(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
				func_255(uParam0, uParam1);
			}
		}
		else if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24)
		{
			if (bLocal_148)
			{
				if (unk_0xAE06B9E39EBDE049(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0x315F7D8C33F0AB37(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]));
				}
			}
			else
			{
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
				uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				Var0 = { unk_0x1BAE5C94E38E44FE(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
				if (unk_0xAE06B9E39EBDE049(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]))
				{
					unk_0x03D382CB0B44E2FC(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], Var0, 1, 0, 0, 1);
				}
			}
			func_270(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			func_255(uParam0, uParam1);
			if (bLocal_148)
			{
				if (iLocal_150)
				{
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/] = unk_0x79CC07752E7432A1(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_1, Local_40, 1, true, 0);
					Var0 = { unk_0x1BAE5C94E38E44FE(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_11.f_2) };
					unk_0x03D382CB0B44E2FC(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], Var0, 1, 0, 0, 1);
					fVar1 = unk_0x658086F2B3C5E4E4(0f, 90f);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17 = { 90f, fVar1, uParam0->f_243.f_4 };
					unk_0xC82085403E46A869(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_17, 0, 1);
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_23 = 1;
					uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_24 = 0;
				}
			}
		}
		else
		{
			func_289(&(uParam0->f_422), &(uParam0->f_249));
			func_286(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), &(uParam0->f_1), &(uParam0->f_249), 0);
			uParam0->f_436++;
			func_270(&(uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/]), &(uParam0->f_243), 0);
			if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
			{
				if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
				{
					uParam0->f_432[iLocal_30]++;
				}
				func_331(&(uParam1->f_666), 2, 0);
				func_331(&(uParam1->f_666), 3, 0);
				func_331(&(uParam1->f_666), 4, 0);
				func_331(&(uParam1->f_666), 5, 1);
				settimerb(0);
			}
			func_255(uParam0, uParam1);
			if (bLocal_148)
			{
				if (iLocal_150)
				{
					iVar2 = 0;
					while (iVar2 < iLocal_31 + 1)
					{
						if (!uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_23)
						{
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/] = unk_0x79CC07752E7432A1(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_1, Local_40, 1, true, 0);
							Var0 = { unk_0x1BAE5C94E38E44FE(uParam0->f_243.f_1, uParam0->f_243.f_4, uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11, (uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11.f_1 + fLocal_34), uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_11.f_2) };
							if (unk_0xAE06B9E39EBDE049(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/]))
							{
								unk_0x03D382CB0B44E2FC(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/], Var0, 1, 0, 0, 1);
							}
							fVar3 = unk_0x658086F2B3C5E4E4(0f, 90f);
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_17 = { 90f, fVar3, uParam0->f_243.f_4 };
							unk_0xC82085403E46A869(uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/], uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_17, 0, 1);
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_23 = 1;
							uParam0->f_5[iLocal_30 /*79*/][iVar2 /*26*/].f_24 = 0;
						}
						iVar2++;
					}
				}
			}
		}
	}
	uParam0->f_1 = 5;
	if (iLocal_165 > 2)
	{
		uParam0->f_1 = 5;
	}
}

void func_248(var uParam0, var uParam1, var uParam2)
{
	struct<3> Var0;
	int iVar1;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (uParam0->f_248 == 1)
			{
				func_254();
			}
			if (iLocal_30 == 0)
			{
				if (func_3(&(uParam2->f_666), 3))
				{
					func_253("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 4))
				{
					func_252("DARTS_ONE_PT", 5000, 0);
				}
				else if (func_3(&(uParam2->f_666), 2))
				{
					func_253("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				}
				else
				{
					func_253("DARTS_SWITCH_C", uParam0->f_422[iLocal_30], 5000, 0);
				}
			}
			else if (func_3(&(uParam2->f_666), 3))
			{
				func_253("DARTS_OPP_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 4))
			{
				func_252("DARTS_ONE_PT", 5000, 0);
			}
			else if (func_3(&(uParam2->f_666), 2))
			{
				func_253("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_253("DARTS_SWITCH_B", uParam0->f_422[iLocal_30], 5000, 0);
			}
			settimerb(0);
			uParam0->f_2 = 2;
			break;
		
		case 1:
			if (unk_0x1BD7199394D7F19A(2, 190))
			{
				iLocal_163++;
				if (iLocal_163 >= uParam0->f_436)
				{
					iLocal_163 = 0;
				}
				Var0 = { unk_0x3E4D3CCC220BDFB1(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], true) };
				func_50(Var0);
			}
			if (unk_0x1BD7199394D7F19A(2, 189))
			{
				iLocal_163 = (iLocal_163 - 1);
				if (iLocal_163 < 0)
				{
					iLocal_163 = (uParam0->f_436 - 1);
				}
				Var0 = { unk_0x3E4D3CCC220BDFB1(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], true) };
				func_50(Var0);
			}
			if (unk_0x1BD7199394D7F19A(2, 202))
			{
				Var0 = { unk_0x3E4D3CCC220BDFB1(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], true) };
				func_52(Var0, 0, 0);
				uParam0->f_2 = 2;
			}
			if (unk_0x1BD7199394D7F19A(2, 201))
			{
				iLocal_139 = 1;
				uParam0->f_2 = 2;
			}
			break;
		
		case 2:
			if (unk_0x1BD7199394D7F19A(2, 201) || (iLocal_149 && bLocal_148))
			{
				iLocal_139 = 1;
			}
			if ((unk_0x1BD7199394D7F19A(2, 189) || unk_0x1BD7199394D7F19A(2, 190)) && uParam0->f_248 == 1)
			{
				Var0 = { unk_0x3E4D3CCC220BDFB1(uParam0->f_5[iLocal_30 /*79*/][iLocal_163 /*26*/], true) };
				func_52(Var0, 1, 0);
				uParam0->f_2 = 1;
			}
			if (!func_3(&(uParam2->f_666), 6))
			{
				if (!iLocal_144)
				{
					if (func_251(iLocal_30 == 0, &(iLocal_138[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
					{
						iLocal_144 = 1;
					}
				}
				else if ((unk_0x578C4EF320340AF7() % 500) < 50)
				{
				}
			}
			else if (!iLocal_144)
			{
				if (func_250(iLocal_30 == 0, &(iLocal_138[1]), (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[0], uParam0->f_422[1]))
				{
					iLocal_144 = 1;
				}
			}
			else if ((unk_0x578C4EF320340AF7() % 500) < 50)
			{
			}
			if (iLocal_139 || timerb() > 2000)
			{
				iLocal_149 = 0;
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_244(&(uParam0->f_5[iLocal_30 /*79*/][iVar1 /*26*/]));
					iVar1++;
				}
				if (uParam0->f_425[iLocal_30] != uParam0->f_422[iLocal_30])
				{
					func_249(uParam1, iLocal_30, uParam0->f_422[iLocal_30]);
					unk_0x057194D526464DC0(-1, "DARTS_SCOREBOARD_MASTER", uParam0->f_243.f_1, 0, 0, 0, 0);
				}
				uParam0->f_425[iLocal_30] = uParam0->f_422[iLocal_30];
				iLocal_31 = 0;
				uParam0->f_428 = 0;
				if (iLocal_30 == 0)
				{
					iLocal_30 = 1;
				}
				else
				{
					iLocal_30 = 0;
				}
				func_434(uParam1, iLocal_30);
				iLocal_54 = 0;
				func_413();
				if (!bLocal_148)
				{
					unk_0x7AE6510630033F17();
				}
				iLocal_48 = 0;
				uParam2->f_670 = 3;
				iLocal_145 = 0;
				iLocal_142 = 0;
				iLocal_144 = 0;
				iLocal_139 = 0;
				iLocal_163 = 0;
				uParam0->f_436 = 0;
				uParam0->f_1 = 2;
				uParam0->f_2 = 0;
			}
			break;
	}
}

void func_249(var uParam0, int iParam1, int iParam2)
{
	unk_0x830F007E19C63E14(*uParam0, "ADD_DARTS_SCORE");
	unk_0xAD291B8F75D737AD(iParam1);
	unk_0xAD291B8F75D737AD(iParam2);
	unk_0xE1FDD153F5858534();
}

int func_250(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 30 && bParam0) || iParam3 < 20)
		{
			unk_0xBE20AB8238688965(&iVar0, 0);
		}
		if ((iParam2 <= 30 && bParam0) || iParam3 >= 20)
		{
			unk_0xBE20AB8238688965(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 20 && !bParam0) || iParam4 < 30)
		{
			unk_0xBE20AB8238688965(&iVar0, 1);
		}
		if ((iParam2 <= 20 && !bParam0) || iParam4 >= 30)
		{
			unk_0xBE20AB8238688965(&iVar0, 3);
		}
	}
	iVar1 = unk_0x344C570D6F8700DF(0, 100);
	iVar2 = unk_0x344C570D6F8700DF(0, 100);
	if (iVar2 < 85)
	{
		if (unk_0xCE990E643CD9D0E5(iVar0, 0))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x9B0761B4C3EB8BC7(), "GAME_GOOD_SELF", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (unk_0xCE990E643CD9D0E5(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x9B0761B4C3EB8BC7(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68)
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (unk_0xCE990E643CD9D0E5(iVar0, 1))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x9B0761B4C3EB8BC7(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 75)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (unk_0xCE990E643CD9D0E5(iVar0, 3))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x9B0761B4C3EB8BC7(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_251(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		if ((iParam2 > 100 && bParam0) || (iParam4 - iParam3) > 75)
		{
			unk_0xBE20AB8238688965(&iVar0, 0);
		}
		if ((iParam2 < 70 && bParam0) || (iParam3 - iParam4) < 50)
		{
			unk_0xBE20AB8238688965(&iVar0, 2);
		}
	}
	else
	{
		if ((iParam2 > 75 && !bParam0) || (iParam3 - iParam4) > 50)
		{
			unk_0xBE20AB8238688965(&iVar0, 1);
		}
		if ((iParam2 < 40 && !bParam0) || (iParam4 - iParam3) < 30)
		{
			unk_0xBE20AB8238688965(&iVar0, 3);
		}
	}
	iVar1 = unk_0x344C570D6F8700DF(0, 100);
	iVar2 = unk_0x344C570D6F8700DF(0, 100);
	if (iVar2 < 75)
	{
		if (unk_0xCE990E643CD9D0E5(iVar0, 0))
		{
			if (iVar1 < 35)
			{
				func_4(unk_0x9B0761B4C3EB8BC7(), "DARTS_HAPPY", 1, 4);
			}
			else if (iVar1 < 70)
			{
				func_4(*uParam1, "DARTS_PLAYING_WELL", 0, 4);
			}
			else if (iVar1 < 85)
			{
				func_4(unk_0x9B0761B4C3EB8BC7(), "GAME_GOOD_SELF", 1, 4);
			}
			else
			{
				func_4(*uParam1, "GAME_GOOD_OTHER", 0, 4);
			}
			return 1;
		}
		else if (unk_0xCE990E643CD9D0E5(iVar0, 2))
		{
			if (iVar1 < 50)
			{
				func_4(unk_0x9B0761B4C3EB8BC7(), "GAME_BAD_SELF", 1, 4);
			}
			else if (iVar1 < 68 && !unk_0xAE06B9E39EBDE049(func_498()))
			{
				func_4(*uParam1, "DARTS_PLAYING_POORLY", 0, 4);
			}
			else if (iVar1 < 86)
			{
				func_4(*uParam1, "GAME_BAD_OTHER", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_HECKLE", 0, 4);
			}
			return 1;
		}
		else if (unk_0xCE990E643CD9D0E5(iVar0, 1))
		{
			if (iVar1 < 40)
			{
				func_4(unk_0x9B0761B4C3EB8BC7(), "DARTS_PLAYING_WELL", 1, 4);
			}
			else if (iVar1 < 60)
			{
				func_4(unk_0x9B0761B4C3EB8BC7(), "GAME_GOOD_OTHER", 1, 4);
			}
			else if (iVar1 < 80)
			{
				func_4(*uParam1, "DARTS_HAPPY", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(*uParam1, "GAME_GOOD_SELF", 0, 4);
			}
			return 1;
		}
		else if (unk_0xCE990E643CD9D0E5(iVar0, 3))
		{
			if (iVar1 < 33)
			{
				func_4(unk_0x9B0761B4C3EB8BC7(), "GAME_BAD_OTHER", 1, 4);
			}
			else if (iVar1 < 66)
			{
				func_4(*uParam1, "GAME_BAD_SELF", 0, 4);
			}
			else if (iVar1 < 100)
			{
				func_4(unk_0x9B0761B4C3EB8BC7(), "GAME_HECKLE", 1, 4);
			}
			return 1;
		}
	}
	return 0;
}

void func_252(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xAEFB51FB8888AE0F(sParam0);
	unk_0x823A1D66E6A4D141(iParam1, 1);
}

void func_253(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	unk_0xAEFB51FB8888AE0F(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	unk_0x823A1D66E6A4D141(iParam2, 1);
}

void func_254()
{
	unk_0x856549C07003344B(iLocal_84, true);
	unk_0x856549C07003344B(iLocal_75, false);
}

void func_255(var uParam0, var uParam1)
{
	uParam0->f_455 = 0;
	if (!func_3(&(uParam1->f_666), 5))
	{
		uParam0->f_422[iLocal_30] = (uParam0->f_422[iLocal_30] - uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
		uParam0->f_428 = (uParam0->f_428 + uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20);
	}
	if (func_3(&(uParam1->f_666), 5))
	{
		func_267(uParam0);
		func_331(&(uParam1->f_666), 5, 0);
	}
	else
	{
		uParam0->f_429[iLocal_30]++;
		if (iLocal_30 == 0)
		{
			func_265(4);
			iLocal_106[10]++;
		}
		if ((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 == 2 || uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50) && uParam0->f_422[iLocal_30] == 0)
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_265(0);
					iLocal_106[1]++;
				}
			}
			func_331(&(uParam1->f_666), 2, 0);
			func_331(&(uParam1->f_666), 3, 0);
			func_331(&(uParam1->f_666), 4, 0);
			func_331(&(uParam1->f_666), 5, 1);
			func_267(uParam0);
			func_331(&(uParam1->f_666), 5, 0);
			settimerb(0);
		}
		else if ((uParam0->f_422[iLocal_30] == 1 || uParam0->f_422[iLocal_30] < 0) || (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2))
		{
			if (uParam0->f_422[iLocal_30] == 0 && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_21 != 2)
			{
				func_253("DARTS_PLR_DUB", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
				func_331(&(uParam1->f_666), 3, 1);
			}
			else if (uParam0->f_422[iLocal_30] == 1)
			{
				func_331(&(uParam1->f_666), 4, 1);
			}
			else if (iLocal_30 == 1)
			{
				func_253("DARTS_OPP_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			else
			{
				func_253("DARTS_PLR_BUST", uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20, 5000, 0);
			}
			if (!iLocal_144)
			{
				if (func_264(iLocal_138[(1 - iLocal_30)]))
				{
					iLocal_144 = 1;
				}
			}
			uParam0->f_422[iLocal_30] = uParam0->f_425[iLocal_30];
			if (uParam0->f_1 == 6)
			{
			}
			settimera(0);
			uParam0->f_1 = 5;
			if (iLocal_30 == 0)
			{
				uParam0->f_435++;
			}
			func_331(&(uParam1->f_666), 2, 1);
		}
		else
		{
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 50)
			{
				uParam0->f_432[iLocal_30]++;
				if (iLocal_30 == 0)
				{
					func_263(uParam1, 1);
					func_265(0);
					iLocal_106[1]++;
				}
				if (!iLocal_144 && !iLocal_149)
				{
					if (func_262(iLocal_138[iLocal_30]))
					{
						iLocal_144 = 1;
					}
				}
			}
			if (uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_20 == 0)
			{
				if (!iLocal_144 && !iLocal_149)
				{
					func_261(iLocal_138[(1 - iLocal_30)]);
					iLocal_144 = 1;
				}
			}
			if (uParam0->f_428 == 180)
			{
				if (!iLocal_144 && !iLocal_149)
				{
					if (func_260(iLocal_138[1], iLocal_30 == 0))
					{
						iLocal_144 = 1;
					}
				}
				if (iLocal_30 == 0)
				{
					func_263(uParam1, 0);
					func_265(1);
					iLocal_106[2]++;
				}
			}
			if (uParam0->f_428 == 140)
			{
				if (!iLocal_144 && !iLocal_149)
				{
					if (func_258(iLocal_138[iLocal_30], iLocal_30 == 0))
					{
						iLocal_144 = 1;
					}
				}
			}
			if (iLocal_30 == 0)
			{
				if (iLocal_31 < 2)
				{
					if (uParam0->f_422[iLocal_30] <= 170 && !func_3(&(uParam1->f_666), 18))
					{
						func_331(&(uParam1->f_666), 18, 1);
					}
					if (!func_3(&(uParam1->f_666), 19) && func_3(&(uParam1->f_666), 21))
					{
						func_331(&(uParam1->f_666), 19, 1);
					}
					if (((uParam0->f_422[iLocal_30] < 41 && uParam0->f_422[iLocal_30] > 0) && (uParam0->f_422[iLocal_30] % 2) == 0) || uParam0->f_422[iLocal_30] == 50)
					{
						if (uParam0->f_422[iLocal_30] == 50)
						{
						}
						if (!iLocal_143)
						{
							func_257(iLocal_138[1]);
							iLocal_143 = 1;
						}
						if (!uParam0->f_456)
						{
							uParam0->f_456 = 1;
						}
						if (!func_3(&(uParam1->f_666), 6))
						{
							func_331(&(uParam1->f_666), 6, 1);
						}
					}
					else if (uParam0->f_456)
					{
						uParam0->f_456 = 0;
					}
				}
			}
			if (iLocal_30 == 0 && iLocal_31 < 2)
			{
				func_256("DARTS_REMAIN", (uParam0->f_425[iLocal_30] - uParam0->f_422[iLocal_30]), uParam0->f_422[iLocal_30], 7500, 0);
			}
			else if (iLocal_30 == 1 && iLocal_31 == 2)
			{
			}
			else if (uParam0->f_1 != 6)
			{
				func_323(&(uParam0->f_1));
			}
			uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_25 = 1;
			iLocal_31++;
			settimera(0);
			if (uParam0->f_1 != 6)
			{
				if (uParam0->f_456 && uParam0->f_248 == 1)
				{
					uParam0->f_1 = 0;
				}
				else
				{
					uParam0->f_1 = 2;
				}
			}
			if (iLocal_31 == 3)
			{
				iLocal_31 = 2;
				uParam0->f_1 = 5;
			}
			if (iLocal_30 == 0)
			{
				uParam0->f_435 = 0;
			}
			func_331(&(uParam1->f_666), 3, 0);
			func_331(&(uParam1->f_666), 2, 0);
			func_331(&(uParam1->f_666), 4, 0);
		}
	}
}

void func_256(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	iParam4 = iParam4;
	unk_0xAEFB51FB8888AE0F(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	unk_0x42710E9E08FA375A(iParam2);
	unk_0x823A1D66E6A4D141(iParam3, 1);
}

void func_257(int iParam0)
{
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		func_4(iParam0, "DARTS_1_DART_AWAY", 0, 4);
	}
}

int func_258(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x344C570D6F8700DF(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0xAE06B9E39EBDE049(func_498()))
		{
			if (bParam1)
			{
				func_4(unk_0x9B0761B4C3EB8BC7(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(func_498(), "DARTS_140", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_259())
			{
				func_4(unk_0x9B0761B4C3EB8BC7(), "DARTS_140", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_140", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_259()
{
	if (unk_0xCE990E643CD9D0E5(unk_0x344C570D6F8700DF(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_260(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x344C570D6F8700DF(0, 100);
	if (iVar0 < 75)
	{
		if (unk_0xAE06B9E39EBDE049(func_498()))
		{
			if (bParam1)
			{
				func_4(unk_0x9B0761B4C3EB8BC7(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(func_498(), "DARTS_180", 0, 4);
			}
			return 1;
		}
		else if (bParam1)
		{
			if (func_259())
			{
				func_4(unk_0x9B0761B4C3EB8BC7(), "DARTS_180", 1, 4);
			}
			else
			{
				func_4(iParam0, "DARTS_180", 0, 4);
			}
			return 1;
		}
	}
	return 0;
}

int func_261(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x344C570D6F8700DF(0, 100);
	if (iVar0 < 75)
	{
		if (iParam0 == unk_0x9B0761B4C3EB8BC7())
		{
			iVar1 = 1;
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
		{
			func_4(iParam0, "DARTS_MISS_BOARD", iVar1, 4);
		}
		return 1;
	}
	return 0;
}

int func_262(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x344C570D6F8700DF(0, 100);
	if (iVar0 < 100)
	{
		func_4(iParam0, "DARTS_BULLSEYE", 0, 4);
		return 1;
	}
	return 0;
}

void func_263(var uParam0, int iParam1)
{
	uParam0->f_679 = 1;
	uParam0->f_682 = iParam1;
}

int func_264(int iParam0)
{
	int iVar0;
	
	if (iParam0 == unk_0x9B0761B4C3EB8BC7())
	{
		iVar0 = 1;
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		func_4(iParam0, "DARTS_BUST", iVar0, 4);
	}
	return 1;
}

void func_265(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			Global_111858.f_18966++;
			func_266("DARTS_STAT_NUM_BULLSEYES", Global_111858.f_18966);
			break;
		
		case 1:
			Global_111858.f_18966.f_1++;
			func_266("DARTS_STAT_NUM_180S", Global_111858.f_18966.f_1);
			break;
		
		case 2:
			Global_111858.f_18966.f_2++;
			func_266("DARTS_STAT_NUM_WINS", Global_111858.f_18966.f_2);
			break;
		
		case 3:
			Global_111858.f_18966.f_3++;
			func_266("DARTS_STAT_NUM_LOSS", Global_111858.f_18966.f_3);
			break;
		
		case 4:
			Global_111858.f_18966.f_4++;
			func_266("DARTS_STAT_DARTS_THROWN", Global_111858.f_18966.f_4);
			break;
		
		case 5:
			Global_111858.f_18966.f_5++;
			func_266("DARTS_STAT_NUM_GAMES", Global_111858.f_18966.f_5);
			break;
		
		case 7:
			Global_111858.f_18966.f_7 = (to_float(Global_111858.f_18966.f_2) / to_float(Global_111858.f_18966.f_5));
			break;
		
		case 8:
			Global_111858.f_18966.f_8 = (to_float(Global_111858.f_18966.f_4) / to_float(Global_111858.f_18966.f_5));
			break;
	}
}

void func_266(char* sParam0, var uParam1)
{
}

void func_267(var uParam0)
{
	if (!uParam0->f_460)
	{
		uParam0->f_460 = 1;
	}
	func_265(5);
	unk_0x7AE6510630033F17();
	unk_0xD289B55B6AADBA10(1);
	if (unk_0x306BF588BD8151E8(func_414(2)))
	{
		unk_0xFA07F8BEBDAAFBA8(func_414(2));
	}
	if (uParam0->f_248 == 1)
	{
		func_254();
	}
	if (iLocal_30 == 0)
	{
		uParam0->f_454 = 1;
		iLocal_153 = 1;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_265(2);
		iLocal_106[8]++;
	}
	else
	{
		uParam0->f_454 = 0;
		uParam0->f_446[iLocal_30]++;
		uParam0->f_437[iLocal_30]++;
		func_265(3);
		iLocal_106[9]++;
	}
	func_265(7);
	func_435(&(uParam0->f_254));
	if (func_269(uParam0))
	{
		uParam0->f_449[0] = 0;
		uParam0->f_449[1] = 0;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_443[iLocal_30]++;
		if (!uParam0->f_458)
		{
			if (uParam0->f_454)
			{
				func_268(1);
			}
			uParam0->f_458 = 1;
		}
		if (uParam0->f_454)
		{
			iLocal_106[3]++;
			iLocal_171 = 0;
		}
		else
		{
			iLocal_106[5]++;
			iLocal_171 = 3;
		}
		*uParam0 = 12;
	}
	else
	{
		*uParam0 = 11;
	}
	uParam0->f_1 = 2;
	unk_0x17E478571720218F(func_414(3));
	iLocal_150 = 1;
	uParam0->f_428 = 0;
	iLocal_54 = 0;
	uParam0->f_425[0] = 301;
	uParam0->f_425[1] = 301;
}

void func_268(bool bParam0)
{
	char* sVar0;
	
	unk_0xA0E955FEBF04F874(0);
	switch (func_90())
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
	unk_0x04ADC97245FE028F(sVar0);
}

int func_269(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_115(uParam0->f_454, 0, 1);
	switch (uParam0->f_452)
	{
		case 1:
			iVar1 = 1;
			break;
		
		case 3:
			iVar1 = 2;
			break;
		
		case 5:
			iVar1 = 3;
			break;
	}
	if (uParam0->f_446[iVar0] == iVar1)
	{
		uParam0->f_449[iVar0]++;
		uParam0->f_440[iVar0]++;
		uParam0->f_446[0] = 0;
		uParam0->f_446[1] = 0;
		uParam0->f_459 = 1;
		if (iVar0 == 0)
		{
			iLocal_106[6]++;
		}
		if (uParam0->f_449[iVar0] == uParam0->f_453)
		{
			uParam0->f_459 = 0;
			return 1;
		}
	}
	return 0;
}

void func_270(var uParam0, var uParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar4;
	int iVar5;
	
	Var3 = { uParam0->f_8 };
	Var3.x = (Var3.x + 0.0041f);
	Var3.f_2 = (Var3.f_2 + 0.0002f);
	fVar1 = unk_0xED4B54A984E6E361(0f, 1f, Var3.x, Var3.f_2);
	fVar0 = func_271(Var3);
	uParam0->f_22 = fVar0;
	if (bParam2)
	{
		unk_0x057194D526464DC0(-1, "DARTS_HIT_DART_MASTER", uParam1->f_1, 0, 0, 0, 0);
	}
	if (fVar0 < 0.009f)
	{
		unk_0x057194D526464DC0(-1, "DARTS_HIT_BULLSEYE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 50;
	}
	else if (fVar0 < 0.021f)
	{
		unk_0x057194D526464DC0(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 25;
	}
	else if (fVar0 > 0.3f)
	{
		unk_0x057194D526464DC0(-1, "DARTS_HIT_WALL_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else if (fVar0 >= 0.226f)
	{
		unk_0x057194D526464DC0(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		uParam0->f_20 = 0;
	}
	else
	{
		if (fVar0 > 0.1285f && fVar0 < 0.1405f)
		{
			uParam0->f_21 = 3;
			unk_0x057194D526464DC0(-1, "DARTS_SCORE_TRIPLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else if (fVar0 > 0.2132f && fVar0 < 0.226f)
		{
			uParam0->f_21 = 2;
			unk_0x057194D526464DC0(-1, "DARTS_SCORE_DOUBLE_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		else
		{
			uParam0->f_21 = 1;
			unk_0x057194D526464DC0(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
		}
		if (uParam0->f_8 < 0f)
		{
			fVar1 = (360f - fVar1);
		}
		fVar2 = 0f;
		iVar4 = 0;
		iVar4 = 0;
		while (iVar4 < 21)
		{
			if (fVar1 >= (fVar2 - 9f) && fVar1 < (fVar2 + 9f))
			{
				if ((fVar1 <= (fVar2 - 8.1f) && fVar1 >= (fVar2 - 9.9f)) || (fVar1 >= (fVar2 + 8.1f) && fVar1 <= (fVar2 + 9.9f)))
				{
					unk_0x057194D526464DC0(-1, "DARTS_HIT_WIRE_MASTER", uParam1->f_1, 0, 0, 0, 0);
				}
				iVar5 = (iLocal_33[iVar4] * uParam0->f_21);
				uParam0->f_20 = iVar5;
			}
			fVar2 = (fVar2 + 18f);
			iVar4++;
		}
	}
}

float func_271(struct<3> Param0)
{
	return sqrt(((Param0.x * Param0.x) + (Param0.f_2 * Param0.f_2)));
}

int func_272(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_31)
	{
		if (((uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 - 0.008f) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8 + 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 > (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 - 0.008f)) && uParam0->f_5[iLocal_30 /*79*/][iLocal_31 /*26*/].f_8.f_2 < (uParam0->f_5[iLocal_30 /*79*/][iVar0 /*26*/].f_8.f_2 + 0.008f))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_273(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (iLocal_30 == 0 && iParam2 == 1)
	{
		func_274("Darts", "Dart_Reticules", &Local_39, 1, 0, 4, 0);
	}
	fVar2 = unk_0x9E3DAF75EFC49F5B();
	Var1 = { uParam0->f_5 * Vector(fVar2, fVar2, fVar2) * Vector(8.5f, 8.5f, 8.5f) };
	uParam0->f_2 = { uParam0->f_2 - Var1 };
	if (uParam0->f_2.f_1 > (uParam0->f_8.f_1 - 0.04f))
	{
		uParam0->f_23 = 1;
		uParam0->f_24 = 0;
		Var0 = { unk_0x1BAE5C94E38E44FE(uParam1->f_1, uParam1->f_4, uParam0->f_11, (uParam0->f_11.f_1 + fLocal_34), uParam0->f_11.f_2) };
		unk_0x03D382CB0B44E2FC(*uParam0, Var0, 1, 0, 0, 1);
		return 1;
	}
	Var0 = { unk_0x1BAE5C94E38E44FE(uParam1->f_1, uParam1->f_4, uParam0->f_2, (uParam0->f_2.f_1 + fLocal_34), uParam0->f_2.f_2) };
	unk_0x03D382CB0B44E2FC(*uParam0, Var0, 1, 0, 0, 1);
	uParam0->f_17.f_1 = (uParam0->f_17.f_1 + (1000f * fVar2));
	unk_0xC82085403E46A869(*uParam0, uParam0->f_17, 0, 1);
	if (unk_0xAE06B9E39EBDE049(*uParam0))
	{
		if (bParam3)
		{
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_274(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<9> Var0;
	
	Var0 = { *uParam2 };
	switch (iParam4)
	{
		case 0:
			func_285(&Var0);
			break;
		
		case 1:
			func_284(&Var0);
			break;
		
		case 5:
			func_283(&Var0);
			break;
		
		case 6:
			func_282(&Var0);
			break;
		
		case 7:
			func_281(&Var0);
			break;
		
		case 8:
			func_280(&Var0);
			break;
		
		case 9:
			func_279(&Var0);
			break;
	}
	if (func_277())
	{
		unk_0x9D15035C6653D1B1(iParam5);
		if (iParam3 == 1)
		{
			unk_0x177AA645FB4B3A38(sParam0, sParam1, func_276(Var0), func_275(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			unk_0x177AA645FB4B3A38(sParam0, sParam1, func_276(Var0), func_275(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		unk_0x9D15035C6653D1B1(4);
	}
}

float func_275(float fParam0)
{
	return (fParam0 + fLocal_13);
}

float func_276(float fParam0)
{
	return (fParam0 + fLocal_12);
}

int func_277()
{
	if (func_278())
	{
		return 1;
	}
	if (unk_0x03DB5C6AABF8DA46())
	{
		return 0;
	}
	if (unk_0x5DA78AD6801A0523() || unk_0x5B772EFCB84373BE())
	{
		return 0;
	}
	if (unk_0x463040FA7A1E5224())
	{
		return 0;
	}
	return 1;
}

bool func_278()
{
	return Global_1312458;
}

void func_279(var uParam0)
{
	uParam0->f_4 = 128;
	uParam0->f_5 = 128;
	uParam0->f_6 = 128;
}

void func_280(var uParam0)
{
	uParam0->f_7 = 2;
}

void func_281(var uParam0)
{
	uParam0->f_7 = 5;
}

void func_282(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 70;
}

void func_283(var uParam0)
{
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 100;
}

void func_284(var uParam0)
{
	uParam0->f_4 = (uParam0->f_4 - 50);
	uParam0->f_5 = (uParam0->f_5 - 50);
	uParam0->f_6 = (uParam0->f_6 - 50);
}

void func_285(var uParam0)
{
	uParam0->f_4 = uParam0->f_4;
	uParam0->f_5 = uParam0->f_5;
	uParam0->f_6 = uParam0->f_6;
	uParam0->f_7 = uParam0->f_7;
}

void func_286(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	float fVar9;
	
	if (*uParam3 == 50)
	{
		fVar3 = 0f;
		fVar4 = unk_0x658086F2B3C5E4E4(0f, 360f);
	}
	else if (*uParam3 == 25)
	{
		fVar3 = 0.14f;
		fVar4 = unk_0x658086F2B3C5E4E4(0f, 360f);
	}
	else
	{
		if (uParam3->f_1 == 3)
		{
			fVar3 = 0.1345f;
		}
		else if (uParam3->f_1 == 2)
		{
			fVar3 = 0.218f;
		}
		else
		{
			fVar3 = 0.18f;
		}
		fVar9 = 0f;
		iVar5 = 0;
		iVar5 = 0;
		while (iVar5 < 21)
		{
			if (*uParam3 == iLocal_33[iVar5])
			{
				fVar4 = fVar9;
			}
			fVar9 = (fVar9 + 18f);
			iVar5++;
		}
	}
	if (!bParam4 && uParam3->f_3 < 30)
	{
		iVar5 = unk_0x344C570D6F8700DF(0, 100);
		iVar6 = unk_0x344C570D6F8700DF(func_288(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0x658086F2B3C5E4E4(-35f, 35f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0x658086F2B3C5E4E4(-80f, 80f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0x658086F2B3C5E4E4(-60f, 60f);
		}
		else
		{
			fVar0 = unk_0x658086F2B3C5E4E4(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0x658086F2B3C5E4E4(-200f, -60f);
			}
			else
			{
				fVar0 = unk_0x658086F2B3C5E4E4(60f, 200f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar4 = (fVar4 + fVar0);
		iVar5 = unk_0x344C570D6F8700DF(0, 100);
		iVar6 = unk_0x344C570D6F8700DF(func_288(uParam3), 150);
		if (uParam3->f_2 > 140)
		{
			fVar0 = unk_0x658086F2B3C5E4E4(-0.25f, 0.25f);
		}
		else if (iVar5 < iVar6 && uParam3->f_4 == 2)
		{
			fVar0 = unk_0x658086F2B3C5E4E4(-0.07f, 0.07f);
		}
		else if (iVar5 < iVar6 && uParam3->f_2 > -140)
		{
			fVar0 = unk_0x658086F2B3C5E4E4(-0.15f, 0.15f);
		}
		else
		{
			fVar0 = unk_0x658086F2B3C5E4E4(-100f, 100f);
			if (fVar0 > 0f)
			{
				fVar0 = unk_0x658086F2B3C5E4E4(-1f, -0.3f);
			}
			else
			{
				fVar0 = unk_0x658086F2B3C5E4E4(0.3f, 1f);
			}
		}
		fVar0 = (fVar0 / 10f);
		fVar3 = (fVar3 + fVar0);
	}
	uParam0->f_8 = (sin(fVar4) * fVar3);
	uParam0->f_8.f_1 = -0.23f;
	uParam0->f_8.f_2 = (cos(fVar4) * fVar3);
	uParam0->f_8 = (uParam0->f_8 - 0.0035f);
	uParam0->f_8.f_2 = (uParam0->f_8.f_2 - 0.0002f);
	if (*uParam2 == 6)
	{
		func_287(uParam0);
	}
	else
	{
		uParam0->f_23 = 0;
		uParam0->f_24 = 1;
		func_287(uParam0);
		*uParam0 = unk_0x79CC07752E7432A1(uParam0->f_1, Local_40, 0, false, 0);
		fVar1 = unk_0x658086F2B3C5E4E4(0f, 90f);
		Var7 = { unk_0x1BAE5C94E38E44FE(uParam1->f_1, uParam1->f_4, Local_41) };
		Var8 = { unk_0x1BAE5C94E38E44FE(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_34), uParam0->f_8.f_2) };
		fVar2 = unk_0x9075769DD4F148B7((Var7.x - Var8.x), (Var7.f_1 - Var8.f_1));
		fVar2 = (fVar2 - 180f);
		uParam0->f_17 = { 90f, fVar1, fVar2 };
		unk_0xC82085403E46A869(*uParam0, uParam0->f_17, 0, 1);
		uParam0->f_2 = { Local_41 };
		*uParam2 = 3;
		unk_0x2DB2D4C3CB88500D(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
	}
}

void func_287(var uParam0)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	fVar4 = 0.08f;
	uParam0->f_8.f_1 = -0.213f;
	Var0 = { Local_41 - uParam0->f_8 };
	fVar1 = vmag(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar1, fVar1, fVar1) };
	fVar2 = unk_0x9075769DD4F148B7(uParam0->f_5, uParam0->f_5.f_1);
	uParam0->f_17.f_2 = (fVar2 - 180f);
	fVar3 = (unk_0xD4A4A32551357673(uParam0->f_17.f_2) * fVar4);
	uParam0->f_11 = { uParam0->f_8 };
	uParam0->f_11 = (uParam0->f_11 + fVar3);
	Var0 = { Local_41 - uParam0->f_11 };
	fVar1 = vmag(Var0);
	uParam0->f_5 = { Var0 / Vector(fVar1, fVar1, fVar1) };
}

int func_288(var uParam0)
{
	switch (uParam0->f_4)
	{
		case 0:
			return 25;
		
		case 1:
			return 75;
		
		case 2:
			return 90;
		
		default:
	}
	return 25;
}

void func_289(var uParam0, var uParam1)
{
	int iVar0;
	
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = ((*uParam0)[1] - (*uParam0)[0]);
	uParam1->f_3++;
	if ((*uParam0)[iLocal_30] > 121)
	{
		*uParam1 = 20;
		uParam1->f_1 = 3;
	}
	else if ((*uParam0)[iLocal_30] > 60)
	{
		if (((*uParam0)[iLocal_30] % 2) == 1)
		{
			if (func_259())
			{
				*uParam1 = 19;
			}
			else
			{
				*uParam1 = 17;
			}
			uParam1->f_1 = 3;
		}
		else
		{
			*uParam1 = 20;
			uParam1->f_1 = 3;
		}
	}
	else if ((*uParam0)[iLocal_30] < 61)
	{
		if ((*uParam0)[iLocal_30] == 50)
		{
			*uParam1 = 50;
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 52)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 40);
			uParam1->f_1 = 1;
		}
		else if ((*uParam0)[iLocal_30] > 40)
		{
			*uParam1 = ((*uParam0)[iLocal_30] - 32);
			uParam1->f_1 = 1;
		}
		else if (((*uParam0)[iLocal_30] % 2) == 0)
		{
			iVar0 = 1;
			iVar0 = 0;
			while (iVar0 < 20)
			{
				*uParam1 = ((*uParam0)[iLocal_30] / 2);
				uParam1->f_1 = 2;
				iVar0++;
			}
		}
		else
		{
			iVar0 = 32;
			while (*uParam1 == 0 && iVar0 > 1)
			{
				if ((*uParam0)[iLocal_30] > iVar0)
				{
					*uParam1 = ((*uParam0)[iLocal_30] - iVar0);
					uParam1->f_1 = 1;
				}
				iVar0 = (iVar0 / 2);
			}
		}
	}
}

int func_290(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x344C570D6F8700DF(0, 100);
	if (iVar0 < 33)
	{
		func_4(iParam0, "DARTS_BORED", 0, 4);
		return 1;
	}
	return 0;
}

void func_291(int iParam0)
{
	func_292(iParam0, 0f);
}

void func_292(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_8(unk_0xCE990E643CD9D0E5(*iParam0, 4)) + fParam1);
	unk_0xBE20AB8238688965(iParam0, 1);
	unk_0xD2459066EA58CE43(iParam0, 2);
	iParam0->f_2 = 0f;
}

int func_293(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	float fVar0;
	int iVar1;
	
	switch (iParam6)
	{
		case 0:
			if (iLocal_52)
			{
				if (timerb() > 50)
				{
					iLocal_53 = 0;
					iLocal_54 = 0;
					iLocal_56 = 0;
					if (func_302(uParam0, uParam1, 0))
					{
						unk_0x2DB2D4C3CB88500D(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_52 = 0;
						return 1;
					}
				}
			}
			else if (!bParam3)
			{
				if (!(unk_0x1BD7199394D7F19A(2, 223) && iLocal_56) && !bParam4)
				{
					iLocal_53 = 1;
					iLocal_54 = 1;
					if (!iLocal_55)
					{
						func_301(uParam0, *uParam2);
						iLocal_55 = 1;
					}
					else
					{
						if (!bParam5)
						{
							func_300();
						}
						func_299(uParam0, iParam6);
						func_298(uParam0, uParam1, bParam3, 0);
					}
				}
				else
				{
					if (bParam4)
					{
						fVar0 = unk_0x658086F2B3C5E4E4(0.02f, 0.1f);
						iVar1 = unk_0x344C570D6F8700DF(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8 + fVar0) < 0.33f)
							{
								uParam0->f_8 = (uParam0->f_8 + fVar0);
							}
							else
							{
								uParam0->f_8 = (uParam0->f_8 - fVar0);
							}
						}
						else if ((uParam0->f_8 - fVar0) > -0.33f)
						{
							uParam0->f_8 = (uParam0->f_8 - fVar0);
						}
						else
						{
							uParam0->f_8 = (uParam0->f_8 + fVar0);
						}
						fVar0 = unk_0x658086F2B3C5E4E4(0.02f, 0.1f);
						iVar1 = unk_0x344C570D6F8700DF(0, 100);
						if (iVar1 < 50)
						{
							if ((uParam0->f_8.f_2 + fVar0) < 0.29f)
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
							}
							else
							{
								uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
							}
						}
						else if ((uParam0->f_8.f_2 - fVar0) > -0.29f)
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fVar0);
						}
						else
						{
							uParam0->f_8.f_2 = (uParam0->f_8.f_2 + fVar0);
						}
						uParam0->f_2 = { Local_41 };
						iLocal_53 = 1;
						iLocal_54 = 1;
					}
					if (iLocal_53 && iLocal_54)
					{
						if (!iLocal_52)
						{
							unk_0xB80B2936A29B2666();
							iLocal_52 = 1;
							settimerb(0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_52)
			{
				func_274("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
				if (timerb() > 25)
				{
					if (func_302(uParam0, uParam1, 1))
					{
						unk_0x2DB2D4C3CB88500D(-1, "DARTS_THROW_DART_MASTER", *uParam0, 0, 0, 0);
						iLocal_52 = 0;
						return 1;
					}
				}
			}
			else if (!func_294(uParam0))
			{
				if (!iLocal_55)
				{
					func_301(uParam0, *uParam2);
				}
				else
				{
					func_300();
					func_299(uParam0, iParam6);
					func_298(uParam0, uParam1, bParam3, 0);
				}
			}
			else if (!iLocal_52)
			{
				iLocal_52 = 1;
				settimerb(0);
			}
			break;
	}
	return 0;
}

int func_294(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = unk_0xAAC78749C4BB5219(2, 220);
	fVar2 = unk_0xAAC78749C4BB5219(2, 221);
	iLocal_91 = round(fVar2);
	switch (iLocal_90)
	{
		case 0:
			if (iLocal_91 > 120)
			{
				iLocal_92 = unk_0x578C4EF320340AF7();
				iLocal_90 = 1;
			}
			if (iLocal_91 < -100)
			{
				iLocal_96 = round(fVar1);
			}
			break;
		
		case 1:
			if (iLocal_91 > 120)
			{
				iLocal_92 = unk_0x578C4EF320340AF7();
			}
			else if ((iLocal_91 < 120 && iLocal_91 > -120) && (unk_0x578C4EF320340AF7() - iLocal_92) > 500)
			{
				iLocal_90 = 0;
			}
			else if (iLocal_91 < -100)
			{
				iLocal_93 = unk_0x578C4EF320340AF7();
				if ((iLocal_93 - iLocal_92) < 500)
				{
					iLocal_96 = round(fVar1);
					iLocal_94 = (iLocal_93 - iLocal_92);
					iLocal_90 = 2;
				}
			}
			break;
		
		case 2:
			if (iLocal_94 > iLocal_95)
			{
				if (iLocal_94 > 100 && iLocal_94 < 150)
				{
					fLocal_99 = 0.066477f;
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_99);
				}
				else
				{
					fLocal_98 = (to_float(iLocal_95) / to_float(iLocal_94));
					fLocal_99 = ((1f - fLocal_98) * fLocal_102);
					uParam0->f_8.f_2 = (uParam0->f_8.f_2 - fLocal_99);
				}
			}
			else
			{
				fLocal_99 = 0f;
			}
			if (iLocal_96 > 7)
			{
				fLocal_100 = (to_float(iLocal_96) / fLocal_105);
				fLocal_101 = (fLocal_103 * fLocal_100);
				uParam0->f_8 = (uParam0->f_8 + fLocal_101);
			}
			else if (iLocal_96 < -7)
			{
				fLocal_100 = (to_float(iLocal_96) / fLocal_104);
				fLocal_101 = (fLocal_103 * fLocal_100);
				uParam0->f_8 = (uParam0->f_8 - fLocal_101);
			}
			else
			{
				fLocal_101 = 0f;
			}
			if (fLocal_99 < 0.066477f && fLocal_101 == 0f)
			{
				func_297();
			}
			else if (fLocal_99 <= 0.066477f && fLocal_101 < 0.06f)
			{
				func_296();
			}
			else
			{
				func_295();
			}
			iVar0 = 1;
			iLocal_90 = 0;
			break;
	}
	return iVar0;
}

void func_295()
{
	Local_39.f_4 = 210;
	Local_39.f_5 = 23;
	Local_39.f_6 = 19;
}

void func_296()
{
	Local_39.f_4 = 183;
	Local_39.f_5 = 137;
	Local_39.f_6 = 0;
}

void func_297()
{
	Local_39.f_4 = 16;
	Local_39.f_5 = 184;
	Local_39.f_6 = 10;
}

void func_298(var uParam0, var uParam1, bool bParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { unk_0x1BAE5C94E38E44FE(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_34), uParam0->f_14.f_2) };
	if (iParam3 == 1)
	{
		Var0 = { unk_0x1BAE5C94E38E44FE(uParam1->f_1, uParam1->f_4, uParam0->f_14, (uParam0->f_14.f_1 + fLocal_34), uParam0->f_14.f_2) };
	}
	unk_0xBDB1710B5B37E6CE(Var0, &Local_38, &(Local_38.f_1));
	if ((unk_0x578C4EF320340AF7() % 1000) < 50)
	{
	}
	if (!bParam2)
	{
		if (bLocal_49)
		{
			func_274("Darts", "Dart_Reticules_Zoomed", &Local_38, 1, 0, 4, 0);
		}
		else
		{
			func_274("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
		}
		if (!iLocal_56)
		{
			iLocal_56 = 1;
		}
	}
}

void func_299(var uParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	
	fVar0 = 0.033367f;
	bVar7 = false;
	fVar3 = unk_0xB0F4BDC84084072E(2, 218);
	fVar4 = unk_0xB0F4BDC84084072E(2, 219);
	fVar5 = unk_0xAAC78749C4BB5219(2, 220);
	fVar6 = unk_0xAAC78749C4BB5219(2, 221);
	if (unk_0xC1F43F8D0D5EB664(2))
	{
		if (unk_0x0D77CDCF403AEBD2(fVar5) > unk_0x0D77CDCF403AEBD2(fVar3) || unk_0x0D77CDCF403AEBD2(fVar6) > unk_0x0D77CDCF403AEBD2(fVar4))
		{
			fVar3 = fVar5;
			fVar4 = fVar6;
			bVar7 = false;
		}
		else
		{
			if (unk_0x4940106A0CAC814B())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0xB12E59C58CB342A4())
			{
				fVar4 = (fVar4 * -1f);
			}
			if (unk_0x22D6FB6153F774D3(2, 227))
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.06f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.06f));
			}
			else
			{
				uParam0->f_8 = (uParam0->f_8 + (fVar3 * 0.03f));
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fVar4 * 0.03f));
			}
			uParam0->f_8 = func_14(uParam0->f_8, -0.33f, 0.33f);
			uParam0->f_8.f_2 = func_14(uParam0->f_8.f_2, -0.29f, 0.29f);
			bVar7 = true;
		}
	}
	if (!bVar7)
	{
		if (unk_0xC1F43F8D0D5EB664(2))
		{
			if (fVar5 != 0f || fVar6 != 0f)
			{
				fVar3 = fVar5;
				fVar4 = fVar6;
			}
		}
		if (fVar3 > 0f)
		{
			if ((uParam0->f_8 + (fLocal_47 * fVar0)) < 0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 + (fLocal_47 * fVar0));
			}
		}
		else if (fVar3 < 0f)
		{
			if ((uParam0->f_8 - (fLocal_47 * fVar0)) > -0.33f)
			{
				uParam0->f_8 = (uParam0->f_8 - (fLocal_47 * fVar0));
			}
		}
		if (fVar4 > 0f)
		{
			if ((uParam0->f_8.f_2 - (fLocal_47 * fVar0)) > -0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 - (fLocal_47 * fVar0));
			}
		}
		else if (fVar4 < 0f)
		{
			if ((uParam0->f_8.f_2 + (fLocal_47 * fVar0)) < 0.29f)
			{
				uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fLocal_47 * fVar0));
			}
		}
	}
	uParam0->f_14 = { uParam0->f_8 };
	if (iParam1 == 0)
	{
		fVar2 = unk_0x658086F2B3C5E4E4((0f - fLocal_44), (0f + fLocal_44));
		fVar1 = unk_0x658086F2B3C5E4E4((0f - fLocal_43), (0f + fLocal_43));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0x658086F2B3C5E4E4((0f - fLocal_44), (0f + fLocal_44));
		fVar1 = unk_0x658086F2B3C5E4E4((0f - fLocal_43), (0f + fLocal_43));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.29f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.29f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
	if (iParam1 == 1)
	{
		fLocal_47 = 0.5f;
		if (iLocal_90 == 1)
		{
			fVar8 = 0.06f;
			fVar9 = 0.08f;
		}
		else
		{
			fVar8 = 0.02f;
			fVar9 = 0.03f;
		}
		fVar2 = unk_0x658086F2B3C5E4E4((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0x658086F2B3C5E4E4((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8 = (uParam0->f_8 + (fVar2 * fVar0));
			uParam0->f_14 = uParam0->f_8;
			uParam0->f_14 = (uParam0->f_14 + (fVar1 * fVar0));
		}
		fVar2 = unk_0x658086F2B3C5E4E4((0f - fVar9), (0f + fVar9));
		fVar1 = unk_0x658086F2B3C5E4E4((0f - fVar8), (0f + fVar8));
		if ((uParam0->f_8.f_2 + (fVar1 * fVar0)) > -0.33f && (uParam0->f_8.f_2 + (fVar1 * fVar0)) < 0.33f)
		{
			uParam0->f_8.f_2 = (uParam0->f_8.f_2 + (fVar2 * fVar0));
			uParam0->f_14.f_2 = uParam0->f_8.f_2;
			uParam0->f_14.f_2 = (uParam0->f_14.f_2 + (fVar1 * fVar0));
		}
	}
}

void func_300()
{
	if (unk_0x22D6FB6153F774D3(2, 227))
	{
		fLocal_47 = 0.3f;
	}
	else
	{
		fLocal_47 = 0.1f;
	}
	if (unk_0x22D6FB6153F774D3(2, 229))
	{
		if (bLocal_49)
		{
			if (timera() > iLocal_97)
			{
				fLocal_43 = fLocal_45;
				fLocal_44 = fLocal_46;
				fLocal_47 = 0.1f;
				bLocal_49 = false;
			}
		}
		else if (iLocal_48 < 1)
		{
			fLocal_43 = 0.03f;
			fLocal_44 = 0.05f;
			fLocal_47 = 0.1f;
			settimera(0);
			bLocal_49 = true;
			iLocal_48++;
		}
		else if ((((((!func_303("DARTS_FST_HLP") && !func_303("DARTS_AIM_HLP")) && !func_303("DARTS_CLOCK")) && !func_303("DARTS_STD_HLP")) && !func_303("DARTS_INSTR_W")) && !func_303("DARTS_INSTR_B")) && !iLocal_50)
		{
			iLocal_50 = 1;
			if (!unk_0xCE990E643CD9D0E5(Global_111819, 1))
			{
				func_418("DARTS_SHT_USE", -1);
				unk_0xBE20AB8238688965(&Global_111819, 1);
			}
		}
	}
	else if (bLocal_49)
	{
		fLocal_43 = fLocal_45;
		fLocal_44 = fLocal_46;
		fLocal_47 = 0.1f;
		bLocal_49 = false;
	}
}

void func_301(var uParam0, struct<4> Param1, var uParam2, var uParam3)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	Var0.x = (Var0.x + unk_0x658086F2B3C5E4E4(-0.1f, 0.1f));
	Var0.f_2 = (Var0.f_2 + unk_0x658086F2B3C5E4E4(-0.1f, 0.1f));
	uParam0->f_8 = { Param1.f_3 + Var0 };
	uParam0->f_2 = { Local_41 };
}

int func_302(var uParam0, var uParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	if (unk_0xAE06B9E39EBDE049(*uParam0))
	{
		unk_0x03D382CB0B44E2FC(*uParam0, Local_40, 1, 0, 0, 1);
	}
	else
	{
		*uParam0 = unk_0x79CC07752E7432A1(uParam0->f_1, Local_40, 0, false, 0);
	}
	bLocal_49 = false;
	fLocal_47 = 0.1f;
	fLocal_43 = fLocal_45;
	fLocal_44 = fLocal_46;
	uParam0->f_23 = 0;
	uParam0->f_24 = 1;
	func_287(uParam0);
	fVar4 = unk_0x658086F2B3C5E4E4(0f, 90f);
	Var1 = { unk_0x1BAE5C94E38E44FE(uParam1->f_1, uParam1->f_4, Local_41) };
	Var2 = { unk_0x1BAE5C94E38E44FE(uParam1->f_1, uParam1->f_4, (uParam0->f_14 + 0.0035f), (uParam0->f_14.f_1 + fLocal_34), uParam0->f_14.f_2) };
	fVar5 = unk_0x9075769DD4F148B7((Var1.x - Var2.x), (Var1.f_1 - Var2.f_1));
	fVar5 = (fVar5 - 180f);
	fVar3 = 90f;
	uParam0->f_17 = { fVar3, fVar4, fVar5 };
	unk_0xC82085403E46A869(*uParam0, uParam0->f_17, 0, 1);
	iLocal_53 = 0;
	iLocal_55 = 0;
	if (bParam2)
	{
		func_274("Darts", "Dart_Reticules", &Local_38, 1, 0, 4, 0);
	}
	Var0 = { unk_0x1BAE5C94E38E44FE(uParam1->f_1, uParam1->f_4, uParam0->f_8, (uParam0->f_8.f_1 + fLocal_34), uParam0->f_8.f_2) };
	unk_0xBDB1710B5B37E6CE(Var0, &Local_39, &(Local_39.f_1));
	return 1;
}

bool func_303(char* sParam0)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_304(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_111819, 9))
		{
			if ((!func_303("DARTS_SHT_USE") && !func_303("DARTS_INSTR_W")) && !func_303("DARTS_INSTR_B"))
			{
				func_418("DARTS_AIM_HLP", -1);
				unk_0xBE20AB8238688965(&Global_111819, 9);
			}
		}
		else if (iParam1 && !unk_0xCE990E643CD9D0E5(Global_111819, 7))
		{
			if ((!func_303("DARTS_AIM_HLP") && !func_303("DARTS_INSTR_W")) && !func_303("DARTS_INSTR_B"))
			{
				func_418("DARTS_CLOCK", -1);
				unk_0xBE20AB8238688965(&Global_111819, 7);
			}
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_111819, 8))
		{
			if ((!func_303("DARTS_SHT_USE") && !func_303("DARTS_INSTR_W")) && !func_303("DARTS_INSTR_B"))
			{
				func_418("DARTS_STD_HLP", -1);
				unk_0xBE20AB8238688965(&Global_111819, 8);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (((!iLocal_51 && !func_303("DARTS_SHT_USE")) && !func_303("DARTS_INSTR_W")) && !func_303("DARTS_INSTR_B"))
		{
			if (!unk_0xCE990E643CD9D0E5(Global_111819, 2))
			{
				func_418("DARTS_FST_HLP", -1);
				unk_0xBE20AB8238688965(&Global_111819, 2);
			}
			iLocal_51 = 1;
		}
	}
}

int func_305(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<3> Var0;
	
	switch (*uParam2)
	{
		case 0:
			Var0 = { func_308(iParam0) };
			*uParam3 = { unk_0x7EC595B99EA7C4B1(*uParam1, Var0) };
			func_307(*uParam3);
			settimerb(0);
			*uParam2 = 1;
			break;
		
		case 1:
			if (timerb() > 3000 || unk_0x1BD7199394D7F19A(2, 201))
			{
				func_306();
				*uParam2 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_306()
{
	unk_0xF674D9B2033F5F86(iLocal_75, iLocal_87, 2000, 1, 1);
	unk_0xB8B0F7C8C1548C5B(iLocal_87, 0);
}

void func_307(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0 = { -5.5606f, -0.0106f, -131.6781f };
	iLocal_87 = unk_0xB5B018137EBE06D3(26379945, Param0, Var0, 65f, 0, 2);
	unk_0xF674D9B2033F5F86(iLocal_87, iLocal_75, 2000, 1, 1);
}

Vector3 func_308(int iParam0)
{
	float fVar0;
	struct<3> Var1;
	
	if (iParam0 == 50)
	{
		Var1 = { 0f, -0.5f, 0f };
	}
	else
	{
		fVar0 = func_311(iParam0);
		Var1.f_1 = -0.5f;
		Var1.x = func_310(fVar0);
		Var1.f_2 = func_309(fVar0);
	}
	return Var1;
}

float func_309(float fParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (cos(fParam0) * fVar0);
	return fVar1;
}

float func_310(float fParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0.218f;
	fVar1 = (sin(fParam0) * fVar0);
	return fVar1;
}

var func_311(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	
	iVar1 = (iParam0 / 2);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar1 == iLocal_33[iVar0])
		{
			uVar3 = fVar2;
		}
		fVar2 = (fVar2 + 18f);
		iVar0++;
	}
	return uVar3;
}

int func_312(var uParam0)
{
	switch (*uParam0)
	{
		case 0:
			if (unk_0x22D6FB6153F774D3(2, 228))
			{
				func_319(1);
				*uParam0 = 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (unk_0x22D6FB6153F774D3(2, 228))
			{
				if (!unk_0xC70648DE87CC1919(iLocal_84))
				{
					func_317();
					func_316(&iLocal_176, Local_207, Local_208, 30f, 10, 10, 3, 15f, 0, 0, -1f, 1);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 3;
			}
			break;
		
		case 2:
			if (!unk_0x22D6FB6153F774D3(2, 228))
			{
				*uParam0 = 3;
			}
			else
			{
				func_313(&iLocal_176, 1, 1, 0, 0, 1045220557, 0, 1065353216, 0);
			}
			break;
		
		case 3:
			func_319(0);
			func_499();
			if (unk_0x40397A9A17EEC1C5(iLocal_176))
			{
				if (unk_0xC516FEEB950FFD58(iLocal_176))
				{
					unk_0x856549C07003344B(iLocal_176, false);
				}
				unk_0xB8B0F7C8C1548C5B(iLocal_176, 0);
			}
			*uParam0 = 0;
			return 0;
			break;
	}
	return 1;
}

void func_313(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)
{
	int iVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	
	unk_0x2B6C81DF4CD1093C(2);
	func_315(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (unk_0xB12E59C58CB342A4())
	{
		iVar0[3] = (iVar0[3] * -1);
	}
	if (unk_0xC1F43F8D0D5EB664(2))
	{
		fVar1 = unk_0xB0F4BDC84084072E(2, 239);
		fVar2 = unk_0xB0F4BDC84084072E(2, 240);
		fVar3 = (fVar1 - uParam0->f_29);
		fVar4 = (fVar2 - uParam0->f_30);
		uParam0->f_29 = fVar1;
		uParam0->f_30 = fVar2;
		if (bParam4)
		{
			iVar0[2] = -round(((fVar3 * fParam5) * 127f));
			iVar0[3] = -round(((fVar4 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = round(((unk_0xB0F4BDC84084072E(2, 290) * fParam5) * 127f));
			iVar0[3] = round(((unk_0xB0F4BDC84084072E(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_314((iVar0[2] + uParam0->f_24), -127, 127);
		iVar0[3] = func_314((iVar0[3] + uParam0->f_25), -127, 127);
	}
	if (uParam0->f_24 == iVar0[2] && uParam0->f_25 == iVar0[3])
	{
		if (uParam0->f_27 < unk_0x578C4EF320340AF7())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
			if (unk_0xC1F43F8D0D5EB664(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = iVar0[2];
		uParam0->f_25 = iVar0[3];
		uParam0->f_27 = unk_0x578C4EF320340AF7() + 4000;
		uParam0->f_28 = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(to_float(iVar0[2]) / 127f) * IntToFloat(uParam0->f_20));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_22)) / IntToFloat(uParam0->f_20));
		uParam0->f_8 = (-(to_float(iVar0[3]) / 127f) * IntToFloat(uParam0->f_21));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}
	fVar5 = (30f * timestep());
	Var6 = { uParam0->f_8 + uParam0->f_11 };
	if ((unk_0xC1F43F8D0D5EB664(2) && bParam2) && !uParam0->f_28)
	{
		uParam0->f_14 = Var6.x;
		uParam0->f_14.f_1 = Var6.f_1;
		uParam0->f_14.f_2 = Var6.f_2;
	}
	else
	{
		uParam0->f_14 = (uParam0->f_14 + func_14(((((Var6.x - uParam0->f_14) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_1 = (uParam0->f_14.f_1 + func_14(((((Var6.f_1 - uParam0->f_14.f_1) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_14.f_2 = (uParam0->f_14.f_2 + func_14(((((Var6.f_2 - uParam0->f_14.f_2) * 0.05f) * fVar5) * fParam7), -3f, 3f));
	}
	if (uParam0->f_26)
	{
		uParam0->f_14 = func_14(uParam0->f_14, to_float(-uParam0->f_21), to_float(uParam0->f_21));
		uParam0->f_14.f_1 = func_14(uParam0->f_14.f_1, to_float(-uParam0->f_22), to_float(uParam0->f_22));
		uParam0->f_14.f_2 = func_14(uParam0->f_14.f_2, to_float(-uParam0->f_20), to_float(uParam0->f_20));
	}
	if (unk_0xC1F43F8D0D5EB664(0) && bParam1)
	{
		if (uParam0->f_28)
		{
			uParam0->f_17 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_17 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (unk_0xC1F43F8D0D5EB664(0))
		{
			iVar7 = 40;
			iVar8 = 41;
			if (bParam6)
			{
				iVar7 = 241;
				iVar8 = 242;
			}
			if (unk_0x79800E51B3B6D197(0, iVar7))
			{
				uParam0->f_17 = (uParam0->f_17 - 5f);
				uParam0->f_27 = unk_0x578C4EF320340AF7() + 4000;
				uParam0->f_28 = 0;
			}
			else if (unk_0x79800E51B3B6D197(0, iVar8))
			{
				uParam0->f_17 = (uParam0->f_17 + 5f);
				uParam0->f_27 = unk_0x578C4EF320340AF7() + 4000;
				uParam0->f_28 = 0;
			}
			if (bParam3)
			{
				uParam0->f_17 = func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), uParam0->f_7);
			}
			else
			{
				uParam0->f_17 = func_14(uParam0->f_17, (uParam0->f_7 - uParam0->f_19), (uParam0->f_7 + uParam0->f_19));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = unk_0x0EEB12E4AD6BD29B(2, 207);
			iVar0[3] = unk_0x0EEB12E4AD6BD29B(2, 208);
			if (bParam3)
			{
				if (to_float(iVar0[3]) > 127f)
				{
					uParam0->f_17 = (uParam0->f_17 - IntToFloat(round(((to_float(iVar0[3]) / 128f) * (uParam0->f_19 / 2f)))));
				}
			}
			else
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
				uParam0->f_17 = (uParam0->f_17 - IntToFloat(round(((to_float(iVar0[3]) / 128f) * uParam0->f_19))));
			}
		}
		else if (bParam3)
		{
			if (to_float(iVar0[1]) < 0f)
			{
				uParam0->f_17 = (uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
			}
		}
		else
		{
			uParam0->f_17 = (uParam0->f_17 + IntToFloat(round(((to_float(iVar0[1]) / 128f) * uParam0->f_19))));
		}
	}
	uParam0->f_18 = (uParam0->f_18 + (((uParam0->f_17 - uParam0->f_18) * 0.06f) * fVar5));
	unk_0x3FD8029C7A771A0E(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);
	if (unk_0x40397A9A17EEC1C5(*uParam0))
	{
		if (unk_0xC516FEEB950FFD58(*uParam0))
		{
			if (unk_0x09F689AE170A62EC(*uParam0))
			{
				unk_0x17513DA51251A563();
			}
		}
	}
}

int func_314(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_315(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	*uParam0 = floor((unk_0xB0F4BDC84084072E(2, 218) * 127f));
	*uParam1 = floor((unk_0xB0F4BDC84084072E(2, 219) * 127f));
	*uParam2 = floor((unk_0xB0F4BDC84084072E(2, 220) * 127f));
	*uParam3 = floor((unk_0xB0F4BDC84084072E(2, 221) * 127f));
	if (bParam4)
	{
		if (!unk_0xC6F4182B2D1E3EAD(2, 218))
		{
			*uParam0 = floor((unk_0xAA5DA46D3DBFD541(2, 218) * 127f));
		}
		if (!unk_0xC6F4182B2D1E3EAD(2, 219))
		{
			*uParam1 = floor((unk_0xAA5DA46D3DBFD541(2, 219) * 127f));
		}
		if (!unk_0xC6F4182B2D1E3EAD(2, 220))
		{
			*uParam2 = floor((unk_0xAA5DA46D3DBFD541(2, 220) * 127f));
		}
		if (!unk_0xC6F4182B2D1E3EAD(2, 221))
		{
			*uParam3 = floor((unk_0xAA5DA46D3DBFD541(2, 221) * 127f));
		}
	}
	if (unk_0xC1F43F8D0D5EB664(2))
	{
		if (bParam5)
		{
			if (unk_0xB12E59C58CB342A4())
			{
				*uParam3 = (*uParam3 * -1);
			}
			if (unk_0x4940106A0CAC814B())
			{
				*uParam3 = (*uParam3 * -1);
			}
		}
	}
}

void func_316(var uParam0, struct<3> Param1, struct<3> Param2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, float fParam10, bool bParam11)
{
	uParam0->f_1 = { Param1 };
	uParam0->f_4 = { Param2 };
	uParam0->f_7 = fParam3;
	uParam0->f_20 = iParam4;
	uParam0->f_21 = iParam5;
	uParam0->f_22 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam3;
	uParam0->f_18 = fParam3;
	uParam0->f_23 = iParam8;
	uParam0->f_19 = fParam7;
	*uParam0 = unk_0x68C2E3309DCAD71E("DEFAULT_SCRIPTED_CAMERA", 0);
	unk_0x856549C07003344B(*uParam0, true);
	unk_0x3FD8029C7A771A0E(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		unk_0x2311A669433389E8(*uParam0, "HAND_SHAKE", 0.19f);
	}
	unk_0x3ED9330214992278(true, false, 3000, 1, 0, 0);
	if (fParam10 > 0f)
	{
		unk_0x8FFDD70F5142C6E0(*uParam0, fParam10);
	}
	if (uParam0->f_23)
	{
		unk_0x5F199185DD70A092(iParam9);
	}
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
}

void func_317()
{
	if (iLocal_136)
	{
		return;
	}
	func_318();
	unk_0xD3B15675F54B6FA9("Darts Zoom");
	iLocal_136 = 1;
}

void func_318()
{
	if (iLocal_135 || iLocal_136)
	{
		unk_0x9733E261CA52F1AD();
		iLocal_135 = 0;
		iLocal_136 = 0;
	}
}

void func_319(bool bParam0)
{
	if (bParam0)
	{
		unk_0xF674D9B2033F5F86(iLocal_84, iLocal_75, 1000, 1, 1);
	}
	else
	{
		unk_0xF674D9B2033F5F86(iLocal_75, iLocal_84, 1000, 1, 1);
	}
}

void func_320(var uParam0)
{
	if (uParam0->f_679)
	{
		if (uParam0->f_681 == 2)
		{
			uParam0->f_681 = 0;
		}
		uParam0->f_679 = 0;
	}
	switch (uParam0->f_681)
	{
		case 0:
			func_241(&(uParam0->f_62), func_322(uParam0->f_682), "", 2000, 5, 1);
			uParam0->f_681 = 1;
			break;
		
		case 1:
			if (!func_236(&(uParam0->f_62), 0))
			{
				func_321(&(uParam0->f_62));
				uParam0->f_681 = 2;
			}
			break;
		
		case 2:
			break;
	}
}

void func_321(var uParam0)
{
	uParam0->f_8 = 0;
	func_421(&(uParam0->f_2));
	func_421(&(uParam0->f_5));
}

char* func_322(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "DARTS_180_SPLSH";
		
		case 1:
			return "DARTS_BE_SPLSH";
		
		default:
	}
	return "DARTS_BE_SPLSH";
}

void func_323(var uParam0)
{
	if (!iLocal_54)
	{
		if (!unk_0x22D6FB6153F774D3(2, 201))
		{
			iLocal_54 = 1;
		}
	}
	if ((iLocal_30 == 1 && iLocal_31 < 3) && *uParam0 != 5)
	{
		if ((unk_0x22D6FB6153F774D3(2, 201) || unk_0x1BD7199394D7F19A(2, 223)) && iLocal_54)
		{
			*uParam0 = 6;
		}
	}
}

void func_324(var uParam0, int iParam1)
{
	if (!unk_0xF0C12886E5C1B20E())
	{
		if (iParam1 == 0)
		{
			if (!func_3(&(uParam0->f_666), 15) && !iLocal_48 > 0)
			{
				func_120(&(uParam0->f_509), 0, 0, 0, 1);
				func_119(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_119(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_325(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_119(&(uParam0->f_509), "DARTS_FOCUS", 2, 229, 1, 1, 0);
				func_119(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_119(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_116(&(uParam0->f_509), 1);
				func_331(&(uParam0->f_666), 8, 0);
				func_331(&(uParam0->f_666), 16, 0);
				func_331(&(uParam0->f_666), 23, 0);
			}
			else if (iLocal_48 > 0 && !func_3(&(uParam0->f_666), 17))
			{
				func_120(&(uParam0->f_509), 0, 0, 0, 1);
				func_119(&(uParam0->f_509), "DARTS_THROW", 2, 223, 0, 1, 0);
				func_119(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
				func_325(&(uParam0->f_509), "DARTS_AIM", 2, 20, 1, 0);
				func_119(&(uParam0->f_509), "DARTS_FAST", 2, 227, 1, 1, 0);
				func_119(&(uParam0->f_509), "IB_ZOOM", 2, 228, 1, 1, 0);
				func_116(&(uParam0->f_509), 1);
				func_331(&(uParam0->f_666), 8, 0);
				func_331(&(uParam0->f_666), 16, 0);
				func_331(&(uParam0->f_666), 23, 0);
			}
		}
		else if (!func_3(&(uParam0->f_666), 16))
		{
			func_120(&(uParam0->f_509), 1, 0, 0, 1);
			func_119(&(uParam0->f_509), "DARTS_SKIP", 2, 223, 1, 1, 0);
			func_119(&(uParam0->f_509), "DARTS_END_QT", 2, 235, 1, 1, 0);
			func_116(&(uParam0->f_509), 1);
			func_331(&(uParam0->f_666), 16, 1);
			func_331(&(uParam0->f_666), 8, 0);
			func_331(&(uParam0->f_666), 15, 0);
			func_331(&(uParam0->f_666), 17, 0);
			func_331(&(uParam0->f_666), 23, 0);
		}
		unk_0xFCC7EAA298CE7AC2(76, 66);
		unk_0xFFA39C4568552522(0f, 0f, 0f, 0f);
		unk_0x5C64FD27DB62AF7A();
		func_199(func_115(func_3(&(uParam0->f_666), 16), 1, 2));
		func_122(&(uParam0->f_509), 200f, 1, 0, 0, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_331(&(uParam0->f_666), 15, 0);
		func_331(&(uParam0->f_666), 16, 0);
		func_331(&(uParam0->f_666), 23, 0);
	}
}

int func_325(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = uParam0->f_123;
	if (iVar0 < 8)
	{
		uParam0->f_2[iVar0 /*15*/] = sParam1;
		uParam0->f_2[iVar0 /*15*/].f_1 = 0;
		uParam0->f_2[iVar0 /*15*/].f_2 = iParam5;
		uParam0->f_2[iVar0 /*15*/].f_12 = 0;
		uParam0->f_2[iVar0 /*15*/].f_13 = 0;
		uParam0->f_2[iVar0 /*15*/].f_14 = 0;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar0 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		unk_0xBE20AB8238688965(&(uParam0->f_2[iVar0 /*15*/].f_12), 0);
		if (iParam4 == 1)
		{
			unk_0xBE20AB8238688965(&(uParam0->f_2[iVar0 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar0 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_326(var uParam0)
{
	if (!unk_0xF0C12886E5C1B20E())
	{
		if (!func_3(&(uParam0->f_666), 23))
		{
			func_120(&(uParam0->f_509), 0, 0, 0, 1);
			func_325(&(uParam0->f_509), "IB_MAPMOVE", 2, 21, 1, 0);
			func_119(&(uParam0->f_509), "IB_ZOOM", 2, 39, 1, 1, 0);
			func_116(&(uParam0->f_509), 1);
			func_331(&(uParam0->f_666), 23, 1);
			func_331(&(uParam0->f_666), 8, 0);
			func_331(&(uParam0->f_666), 16, 0);
			func_331(&(uParam0->f_666), 15, 0);
			func_331(&(uParam0->f_666), 17, 0);
		}
		func_122(&(uParam0->f_509), 1128792064, 1, 0, 1, 1065353216);
	}
	else if ((func_3(&(uParam0->f_666), 15) || func_3(&(uParam0->f_666), 16)) || func_3(&(uParam0->f_666), 23))
	{
		func_331(&(uParam0->f_666), 15, 0);
		func_331(&(uParam0->f_666), 16, 0);
		func_331(&(uParam0->f_666), 23, 0);
		func_331(&(uParam0->f_666), 17, 0);
	}
}

void func_327(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!iLocal_54)
	{
		if (!unk_0x22D6FB6153F774D3(2, 201) && !unk_0x22D6FB6153F774D3(2, 202))
		{
			iLocal_54 = 1;
		}
		else
		{
			iLocal_54 = 0;
		}
	}
	if (*uParam0 != 13)
	{
		if (bVar0)
		{
			if (iLocal_54 && iLocal_53 == 0)
			{
				iLocal_54 = 0;
				bVar0 = false;
				bLocal_147 = false;
				unk_0xD289B55B6AADBA10(1);
			}
		}
		if (unk_0xC27AEE8B64EE0F8D(2, 235) || unk_0x275A6259432E6B3C(2, 235))
		{
			if (!bLocal_147)
			{
				*uParam0 = 14;
				bLocal_147 = true;
				unk_0xD289B55B6AADBA10(1);
			}
		}
		else if (func_303("DARTS_QUIT"))
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
			bLocal_147 = false;
		}
	}
}

void func_328(int iParam0)
{
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		func_4(iParam0, "DARTS_BOAST", 0, 4);
	}
}

float func_329(int iParam0)
{
	if (iParam0 < 10)
	{
		return 0.107f;
	}
	if (iParam0 < 25)
	{
		return 0.096f;
	}
	if (iParam0 < 50)
	{
		return 0.085f;
	}
	if (iParam0 < 70)
	{
		return 0.075f;
	}
	return 0.064f;
}

float func_330(int iParam0)
{
	if (iParam0 < 10)
	{
		return 0.08f;
	}
	if (iParam0 < 25)
	{
		return 0.072f;
	}
	if (iParam0 < 50)
	{
		return 0.064f;
	}
	if (iParam0 < 70)
	{
		return 0.056f;
	}
	return 0.048f;
}

void func_331(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		unk_0xBE20AB8238688965(iParam0, iParam1);
	}
	else
	{
		unk_0xD2459066EA58CE43(iParam0, iParam1);
	}
}

int func_332(int iParam0, var uParam1)
{
	if (iParam0 >= 10)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_111858.f_18966.f_6, 12))
		{
			*uParam1 = 12;
			return 1;
		}
	}
	return 0;
}

int func_333(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iParam0->f_422[iVar0] = 301;
		iParam0->f_425[iVar0] = 301;
		iVar0++;
	}
	iParam0->f_454 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_244(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		func_243(uParam1, iVar0);
		func_249(uParam1, iVar0, 301);
		iVar0++;
	}
	iLocal_30 = 0;
	iLocal_31 = 0;
	iParam0->f_428 = 0;
	iParam0->f_249.f_3 = 0;
	iLocal_163 = 0;
	iParam0->f_436 = 0;
	iLocal_48 = 0;
	iLocal_140 = 1;
	iLocal_141 = 0;
	iLocal_143 = 0;
	iLocal_50 = 0;
	iParam0->f_458 = 0;
	iParam0->f_456 = 0;
	iLocal_149 = 0;
	func_331(&(uParam2->f_666), 6, 0);
	func_339();
	func_337(uParam2);
	if (iParam0->f_457)
	{
		func_334(iParam0->f_457);
		iParam0->f_457 = 0;
	}
	return 1;
}

void func_334(bool bParam0)
{
	unk_0x8CFF639CEFF5CF16(false);
	if (unk_0xC516FEEB950FFD58(iLocal_77))
	{
		unk_0x856549C07003344B(iLocal_77, false);
	}
	if (unk_0xC516FEEB950FFD58(iLocal_81))
	{
		unk_0x856549C07003344B(iLocal_81, false);
	}
	if (unk_0x03DB5C6AABF8DA46())
	{
		func_336();
		unk_0x3ED9330214992278(true, false, 3000, 1, 0, 0);
		unk_0xFD45D90342D2A0CD(500);
	}
	func_335(bParam0);
}

void func_335(bool bParam0)
{
	if (bParam0)
	{
		unk_0x856549C07003344B(iLocal_75, true);
	}
}

void func_336()
{
	unk_0x856549C07003344B(iLocal_77, true);
}

void func_337(var uParam0)
{
	func_338();
	uParam0->f_670 = 3;
	func_331(&(uParam0->f_666), 15, 0);
	func_331(&(uParam0->f_666), 16, 0);
	func_331(&(uParam0->f_666), 17, 0);
}

void func_338()
{
	int iVar0;
	
	Local_108.f_66 = -1;
	Local_108.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_108.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_108.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_108.f_9[iVar0 /*7*/].f_5 = 0;
		Local_108.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_108.f_5 = 0;
	Local_108.f_5.f_1 = -1f;
	Local_108.f_5.f_2 = 0;
	Local_108 = 0;
	Local_108.f_1 = 0;
}

void func_339()
{
	settimera(0);
	iLocal_54 = 0;
	unk_0x7AE6510630033F17();
}

void func_340(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_342(&iVar0, 0, iParam1))
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
		func_341(&(Global_22550.f_5660[iVar0 /*10*/]));
		Global_22550.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22550.f_5721[iVar0] = 0;
	}
}

void func_341(int iParam0)
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

int func_342(var uParam0, bool bParam1, int iParam2)
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

void func_343(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	unk_0x830F007E19C63E14(*uParam0, "SET_PLAYER_SETS_AND_LEGS");
	unk_0xAD291B8F75D737AD(iParam1);
	unk_0xAD291B8F75D737AD(iParam2);
	unk_0xAD291B8F75D737AD(iParam3);
	unk_0xAD291B8F75D737AD(iParam4);
	unk_0xE1FDD153F5858534();
}

int func_344(var uParam0, var uParam1, var uParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	unk_0x779660A9E5364C4D(2, 200, 1);
	if (!func_3(&(uParam0->f_666), 7))
	{
		func_401(0, 0, 0, 1);
		func_400(0, -1, 1);
		if (func_399())
		{
			if (Global_4269756 == uParam0->f_660)
			{
				iVar1 = 1;
			}
			else
			{
				uParam0->f_660 = Global_4269756;
				func_398(uParam0->f_660, 1, 1);
				unk_0xC4CC25B68A91D144(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				switch (uParam0->f_660)
				{
					case 0:
						sVar0 = "DARTS_LEGD";
						break;
					
					case 1:
						sVar0 = "DARTS_SETD";
						break;
					
					case 2:
						sVar0 = "";
						break;
				}
				if (unk_0x3030AE9FCF1BC243(sVar0))
				{
					func_397(sVar0, 0, 0);
				}
			}
			Global_4269757 = unk_0x578C4EF320340AF7() + 300;
		}
		else if (func_396() && unk_0x578C4EF320340AF7() > Global_4269757)
		{
			if (Global_4269756 == uParam0->f_660)
			{
				iVar2 = func_395(0);
				if (iVar2 == -1 || iVar2 == 1)
				{
					iVar1 = 1;
				}
			}
			Global_4269757 = unk_0x578C4EF320340AF7() + 300;
		}
		if (func_394(&(uParam0->f_639)))
		{
			uParam0->f_660 = (uParam0->f_660 - 1);
			if (uParam0->f_660 < 0)
			{
				uParam0->f_660 = (uParam0->f_661 - 1);
			}
			func_398(uParam0->f_660, 1, 1);
			unk_0xC4CC25B68A91D144(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (unk_0x3030AE9FCF1BC243(sVar0))
			{
				func_397(sVar0, 0, 0);
			}
		}
		if (func_393(&(uParam0->f_642)))
		{
			uParam0->f_660++;
			if (uParam0->f_660 > (uParam0->f_661 - 1))
			{
				uParam0->f_660 = 0;
			}
			func_398(uParam0->f_660, 1, 1);
			unk_0xC4CC25B68A91D144(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			switch (uParam0->f_660)
			{
				case 0:
					sVar0 = "DARTS_LEGD";
					break;
				
				case 1:
					sVar0 = "DARTS_SETD";
					break;
				
				case 2:
					sVar0 = "";
					break;
			}
			if (unk_0x3030AE9FCF1BC243(sVar0))
			{
				func_397(sVar0, 0, 0);
			}
		}
		if (func_392(&(uParam0->f_633)) || func_391(&(uParam0->f_633), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662 = (uParam0->f_662 - 1);
				if (uParam0->f_662 < 0)
				{
					uParam0->f_662 = (uParam0->f_663 - 1);
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664 = (uParam0->f_664 - 1);
				if (uParam0->f_664 < 0)
				{
					uParam0->f_664 = (uParam0->f_665 - 1);
				}
			}
			unk_0xC4CC25B68A91D144(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_377(uParam0);
		}
		if (func_376(&(uParam0->f_636)) || func_374(&(uParam0->f_636), uParam0->f_660, iVar1))
		{
			if (uParam0->f_660 == 0)
			{
				uParam0->f_662++;
				if (uParam0->f_662 > (uParam0->f_663 - 1))
				{
					uParam0->f_662 = 0;
				}
			}
			else if (uParam0->f_660 == 1)
			{
				uParam0->f_664++;
				if (uParam0->f_664 > (uParam0->f_665 - 1))
				{
					uParam0->f_664 = 0;
				}
			}
			unk_0xC4CC25B68A91D144(-1, "NAV_LEFT_RIGHT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			func_377(uParam0);
		}
		if ((unk_0x1BD7199394D7F19A(2, 201) || iVar1 == 1) && uParam0->f_660 == 2)
		{
			*uParam1 = func_373(uParam0->f_662 + 1, 1);
			*uParam2 = func_373(uParam0->f_664 + 1, 0);
			unk_0xC4CC25B68A91D144(-1, "OK", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			return 1;
		}
		func_347(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
		if (unk_0xC27AEE8B64EE0F8D(2, 202) || func_346())
		{
			func_345(0, 0);
			func_331(&(uParam0->f_666), 8, 0);
			func_331(&(uParam0->f_666), 7, 1);
		}
	}
	else
	{
		func_2(uParam0);
		if (unk_0xC27AEE8B64EE0F8D(2, 201))
		{
			func_36(0);
			*uParam1 = -1;
			return 1;
		}
		else if (unk_0xC27AEE8B64EE0F8D(2, 202))
		{
			func_377(uParam0);
			func_331(&(uParam0->f_666), 7, 0);
		}
	}
	return 0;
}

void func_345(bool bParam0, bool bParam1)
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

int func_346()
{
	if (unk_0xC1F43F8D0D5EB664(2))
	{
		if (unk_0x1BD7199394D7F19A(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

void func_347(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	
	if (!func_342(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_370(0, bParam6))
	{
		return;
	}
	unk_0xFCC7EAA298CE7AC2(76, 84);
	unk_0xFFA39C4568552522(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_22550)
	{
		if (func_18(29, 1, 1, &fVar36, &fVar37, bParam7))
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
		if (func_20())
		{
			iVar58 = round((to_float(iVar59) * fVar61));
		}
		fVar62 = (to_float(iVar58) / to_float(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_20())
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
			func_366(Global_22550.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
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
					StringCopy(&cVar63, func_24(29), 64);
					StringCopy(&cVar64, func_21(29, 1), 64);
					if (unk_0x856D5567211886A2(&(Global_22550.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_365(Global_22547, Global_22548, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
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
				func_365(Global_22547, (Global_22548 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_22548 + fVar55) + 0.034722f) + 0f);
				if (unk_0x856D5567211886A2(&(Global_22550.f_1)) != 0)
				{
					func_364();
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
					func_364();
					func_362((((Global_22547 + fParam5) - 0.00390625f) - func_363("CM_ITEM_COUNT", Global_22550.f_5736, Global_22550.f_5737)), ((Global_22548 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22550.f_5736, Global_22550.f_5737);
				}
				else if (Global_22550.f_5731 > Global_22550.f_5225)
				{
					if (Global_22550.f_5734 != 0)
					{
						func_364();
						func_362((((Global_22547 + fParam5) - 0.00390625f) - func_363("CM_ITEM_COUNT", Global_22550.f_5734, Global_22550.f_5733)), ((Global_22548 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22550.f_5734, Global_22550.f_5733);
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
				func_365(Global_22547, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
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
					func_18(Global_22550.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22547 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_361(fVar40);
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
				func_365(Global_22547, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_361(fVar40);
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
					func_18(Global_22550.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_360(Global_22550.f_4768, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x177AA645FB4B3A38(func_24(Global_22550.f_4768), func_21(Global_22550.f_4768, 1), ((Global_22547 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
					func_18(Global_4269680.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22547 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_361(fVar40);
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
				func_365(Global_22547, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
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
				func_361(fVar40);
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
					func_18(Global_4269680.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_360(Global_4269680.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x177AA645FB4B3A38(func_24(Global_4269680.f_67), func_21(Global_4269680.f_67, 1), ((Global_22547 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
			func_355(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
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
											func_353(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, iVar74, bVar51, bVar50);
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
												if (func_18(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
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
										if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_360(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_360(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
										func_353(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_352(bVar32);
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
												if (func_18(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_18(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_360(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_22550.f_5083[iVar8] == 2)
															{
																unk_0x177AA645FB4B3A38(func_24(Global_22550.f_4433[(iVar22 + iVar28)]), func_21(Global_22550.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x177AA645FB4B3A38(func_24(Global_22550.f_4433[(iVar22 + iVar28)]), func_21(Global_22550.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
											if (func_351() && unk_0x7B70881748D166CD(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_353(0, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
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
												if (func_18(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_18(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_360(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_22550.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x177AA645FB4B3A38(func_24(Global_22550.f_4433[(iVar22 + iVar14)]), func_21(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), (Global_22547 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_22550.f_5083[iVar8] == 2)
															{
																unk_0x177AA645FB4B3A38(func_24(Global_22550.f_4433[(iVar22 + iVar14)]), func_21(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x177AA645FB4B3A38(func_24(Global_22550.f_4433[(iVar22 + iVar14)]), func_21(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
										func_353(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_352(bVar32);
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
										if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_360(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_360(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_353(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
										func_350((fVar34 + fVar40), fVar35, "NUMBER", Global_22550.f_3918[iVar20], 0);
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
										func_353(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_352(bVar32);
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
										if (func_18(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_360(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_360(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									func_353(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
									func_349((fVar34 + fVar40), fVar35, "NUMBER", Global_22550.f_4175[iVar21], Global_22550.f_4304[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_18(Global_22550.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
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
											if (func_18(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22550.f_5083[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_360(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x177AA645FB4B3A38(func_24(26), func_21(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_18(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_18(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_360(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x177AA645FB4B3A38(func_24(27), func_21(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_18(Global_22550.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_360(Global_22550.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x177AA645FB4B3A38(func_24(Global_22550.f_4433[iVar22]), func_21(Global_22550.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_348(Global_22550.f_4433[iVar22])), (fVar37 * func_348(Global_22550.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
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
								if (func_18(26, 1, 1, &fVar36, &fVar37, bParam7))
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
		func_38(0);
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
		func_199(1);
	}
	unk_0x5C64FD27DB62AF7A();
}

float func_348(int iParam0)
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

void func_349(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x40A75E32D30C605F(sParam2);
	unk_0x5BC8B357341A4FEE(fParam3, iParam4);
	unk_0xA434CC17B5517E4E(fParam0, fParam1, 0);
}

void func_350(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x40A75E32D30C605F(sParam2);
	unk_0x42710E9E08FA375A(iParam3);
	unk_0xA434CC17B5517E4E(fParam0, fParam1, iParam4);
}

bool func_351()
{
	return unk_0x95C5B896CB42B20E(-1762644250);
}

void func_352(bool bParam0)
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

void func_353(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_354(Global_22550.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
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

void func_354(int iParam0, var uParam1, var uParam2, var uParam3)
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

void func_355(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_342(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_370(bParam4, bParam8))
	{
		return;
	}
	if (func_358())
	{
		return;
	}
	if (unk_0xDFAB5E5CBE16E8B1())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_356(unk_0x460153A63B9477BC(), 0))
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
					func_13(&(Global_22550.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x856D5567211886A2(&(Global_22550.f_4964[iVar2 /*4*/])) == unk_0x856D5567211886A2("PREV"))
					{
						func_13(&(Global_22550.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22550.f_5013[iVar1] == -1)
					{
						func_12(&(Global_22550.f_4964[iVar1 /*4*/]));
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
				func_13(&Global_4269680);
				if (Global_4269680.f_20 == -1)
				{
					func_12(&(Global_4269680.f_16));
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

bool func_356(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_357(-1, 0) == 8;
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

int func_357(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_62();
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

int func_358()
{
	struct<3> Var0;
	
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	if (func_359())
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

int func_359()
{
	if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_360(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_361(float fParam0)
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

void func_362(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x40A75E32D30C605F(sParam2);
	unk_0x42710E9E08FA375A(iParam3);
	unk_0x42710E9E08FA375A(iParam4);
	unk_0xA434CC17B5517E4E(fParam0, fParam1, 0);
}

float func_363(char* sParam0, int iParam1, int iParam2)
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
	func_364();
	unk_0x456829A212A690D7(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	unk_0x42710E9E08FA375A(iParam2);
	return unk_0x842CB5919E31EB1F(1);
}

void func_364()
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

void func_365(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x8DDE075026DB7EFD((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_366(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
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
		func_369(Global_22550.f_5218, 1);
	}
	else
	{
		func_369(Global_22550.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_368(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]));
		if (Global_22550.f_5075[Global_22550.f_5219])
		{
			func_18(26, 1, 0, &fVar2, &uVar3, 0);
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
			fVar4 = func_367(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]));
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

float func_367(char* sParam0)
{
	if (!unk_0x3030AE9FCF1BC243(sParam0))
	{
	}
	return unk_0xBA269EB4693A8C47(0.35f, 0);
}

float func_368(char* sParam0)
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
	func_353(0, 1, 0, 0, 0, 0, 0);
	unk_0x456829A212A690D7(sParam0);
	return unk_0x842CB5919E31EB1F(1);
}

void func_369(int iParam0, bool bParam1)
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

int func_370(bool bParam0, bool bParam1)
{
	if (Global_2440049.f_2005.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x87F0CB19476706C3() || (func_372(8, -1) && func_371() != 65)) || (unk_0xCFB49FF4012D7C68() != 0 && !bParam1)) || (unk_0x9CC4D06F5338CA6B() && !bParam0)) || unk_0x954BAB46FBB90036()) || Global_77093) || Global_22550.f_8416) || unk_0x06EBE4F22EC30D45()) || Global_99007.f_1425)
	{
		return 0;
	}
	return 1;
}

int func_371()
{
	return Global_1312830;
}

bool func_372(int iParam0, int iParam1)
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

int func_373(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				return 1;
			
			case 2:
				return 3;
			
			case 3:
				return 6;
			
			case 4:
				return 9;
			
			case 5:
				return 11;
			
			case 6:
				return 13;
			
			case 7:
				return 15;
			}
		
		default:
	}
	return 0;
}

int func_374(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xC1F43F8D0D5EB664(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_395(0) == 1 && Global_4269756 == iParam1)
	{
		if (!func_420(iParam0))
		{
			func_375(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_435(iParam0);
			return 1;
		}
	}
	else if (func_420(iParam0))
	{
		func_421(iParam0);
	}
	return 0;
}

void func_375(int iParam0)
{
	if (!func_420(iParam0))
	{
		func_435(iParam0);
	}
}

int func_376(int iParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xC1F43F8D0D5EB664(2))
	{
		fVar0 = unk_0xAAC78749C4BB5219(2, 218);
	}
	if ((fVar0 > 0.8f || unk_0x22D6FB6153F774D3(2, 190)) || unk_0xB9C0D9B37277621D(2, 190))
	{
		if (!func_420(iParam0))
		{
			func_375(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_435(iParam0);
			return 1;
		}
	}
	else if (func_420(iParam0))
	{
		func_421(iParam0);
	}
	return 0;
}

void func_377(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_345(0, 0);
	unk_0x28DD484BAEAF8437(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_390(uVar0, uVar1, uVar2, uVar3, 1);
	func_389(1, 2, 0, 0, 0);
	func_388(1, 2, 1, 1, 1);
	func_387(0, 1, 0, 0, 0);
	func_386("DARTS_TITLE");
	func_384(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_366(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_381(0, func_373(uParam0->f_662 + 1, 1), 0);
	func_366(1, "DARTS_SETS", 0, 1, 0, 0);
	func_381(1, func_373(uParam0->f_664 + 1, 0), 0);
	func_380(2, 141, 141, 1);
	func_366(2, "DARTS_START", 0, 1, 0, 0);
	func_379(0);
	func_398(uParam0->f_660, 1, 1);
	if (uParam0->f_660 != 2)
	{
		func_397(func_114(uParam0->f_660 == 0, "DARTS_LEGD", "DARTS_SETD"), 0, 0);
	}
	func_378(201, "ITEM_SELECT", -1, 0);
	func_378(202, "IB_QUIT", -1, 0);
}

void func_378(int iParam0, char* sParam1, int iParam2, bool bParam3)
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
	if (!bParam3)
	{
		unk_0xBE20AB8238688965(&(Global_22550.f_5052), Global_22550.f_4769);
	}
	StringCopy(&(Global_22550.f_4771[Global_22550.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22550.f_4964[Global_22550.f_4769 /*4*/]), sParam1, 16);
	Global_22550.f_5013[Global_22550.f_4769] = iParam2;
	Global_22550.f_5026[Global_22550.f_4769] = iParam0;
	Global_22550.f_5039[Global_22550.f_4769] = 32;
	Global_22550.f_4769++;
}

void func_379(int iParam0)
{
	Global_22550.f_5738 = iParam0;
}

void func_380(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Global_22550.f_8413 = iParam3;
	Global_22550.f_8410[0] = iParam1;
	Global_22550.f_8410[1] = iParam2;
	Global_22550.f_8414 = iParam0;
}

void func_381(int iParam0, int iParam1, bool bParam2)
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
	if (Global_22550.f_5222 >= 256)
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
	if (iVar0 != 2)
	{
		while (Global_22550.f_5219 < 4 && iVar0 != 2)
		{
			Global_22550.f_5219++;
			iVar0 = Global_22550.f_5056[Global_22550.f_5219];
		}
		if (iVar0 != 2)
		{
			return;
		}
	}
	Global_22550.f_3918[Global_22550.f_5222] = iParam1;
	Global_22550.f_5222++;
	fVar1 = func_383("NUMBER", iParam1);
	if (Global_22550.f_5075[Global_22550.f_5219])
	{
		func_18(26, 1, 0, &fVar2, &uVar3, 0);
		fVar1 = (fVar1 + (fVar2 * 2f));
	}
	if (fVar1 > Global_22550.f_5068[Global_22550.f_5219])
	{
		Global_22550.f_5068[Global_22550.f_5219] = fVar1;
	}
	if (bParam2)
	{
		fVar4 = func_382("NUMBER", iParam1);
		if (fVar4 > Global_22550.f_5745[iParam0])
		{
			Global_22550.f_5745[iParam0] = fVar4;
		}
	}
	unk_0xBE20AB8238688965(&(Global_22550.f_5089[iParam0]), Global_22550.f_5219);
	Global_22550.f_5219++;
	Global_22550.f_5744 = 2;
}

float func_382(char* sParam0, int iParam1)
{
	if (!unk_0x3030AE9FCF1BC243(sParam0))
	{
	}
	if (iParam1 == 0)
	{
	}
	return unk_0xBA269EB4693A8C47(0.35f, 0);
}

float func_383(char* sParam0, int iParam1)
{
	if (!unk_0x3030AE9FCF1BC243(sParam0))
	{
		return 0f;
	}
	func_353(1, 1, 0, 0, 0, 0, 0);
	unk_0x456829A212A690D7(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	return unk_0x842CB5919E31EB1F(1);
}

void func_384(int iParam0, char* sParam1, char* sParam2)
{
	Global_22550 = iParam0;
	func_385(29, sParam1, sParam2);
}

void func_385(int iParam0, char* sParam1, char* sParam2)
{
	StringCopy(&(Global_22550.f_6020[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_22550.f_7029[iParam0 /*16*/]), sParam2, 64);
}

void func_386(char* sParam0)
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

void func_387(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22550.f_5075[0] = iParam0;
	Global_22550.f_5075[1] = iParam1;
	Global_22550.f_5075[2] = iParam2;
	Global_22550.f_5075[3] = iParam3;
	Global_22550.f_5075[4] = iParam4;
}

void func_388(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22550.f_5083[0] = iParam0;
	Global_22550.f_5083[1] = iParam1;
	Global_22550.f_5083[2] = iParam2;
	Global_22550.f_5083[3] = iParam3;
	Global_22550.f_5083[4] = iParam4;
}

void func_389(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22550.f_5056[0] = iParam0;
	Global_22550.f_5056[1] = iParam1;
	Global_22550.f_5056[2] = iParam2;
	Global_22550.f_5056[3] = iParam3;
	Global_22550.f_5056[4] = iParam4;
	Global_22550.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22550.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22550.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22550.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22550.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22550.f_5226++;
	}
}

void func_390(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	Global_22550.f_8387 = iParam4;
	Global_22550.f_8383 = uParam0;
	Global_22550.f_8384 = uParam1;
	Global_22550.f_8385 = uParam2;
	Global_22550.f_8386 = uParam3;
}

int func_391(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xC1F43F8D0D5EB664(2))
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	if (func_395(0) == -1 && Global_4269756 == iParam1)
	{
		if (!func_420(iParam0))
		{
			func_375(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_435(iParam0);
			return 1;
		}
	}
	else if (func_420(iParam0))
	{
		func_421(iParam0);
	}
	return 0;
}

int func_392(int iParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xC1F43F8D0D5EB664(2))
	{
		fVar0 = unk_0xAAC78749C4BB5219(2, 218);
	}
	if (fVar0 < -0.8f || unk_0x22D6FB6153F774D3(2, 189))
	{
		if (!func_420(iParam0))
		{
			func_375(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_435(iParam0);
			return 1;
		}
	}
	else if (func_420(iParam0))
	{
		func_421(iParam0);
	}
	return 0;
}

int func_393(int iParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xC1F43F8D0D5EB664(2))
	{
		fVar0 = unk_0xAAC78749C4BB5219(2, 219);
	}
	if (fVar0 > 0.8f || unk_0x22D6FB6153F774D3(2, 187))
	{
		if (!func_420(iParam0))
		{
			func_375(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_435(iParam0);
			return 1;
		}
	}
	else if (func_420(iParam0))
	{
		func_421(iParam0);
	}
	return 0;
}

int func_394(int iParam0)
{
	float fVar0;
	
	fVar0 = 0f;
	if (!unk_0xC1F43F8D0D5EB664(2))
	{
		fVar0 = unk_0xAAC78749C4BB5219(2, 219);
	}
	if (fVar0 < -0.8f || unk_0x22D6FB6153F774D3(2, 188))
	{
		if (!func_420(iParam0))
		{
			func_375(iParam0);
			return 1;
		}
		else if (func_7(iParam0) > 0.25f)
		{
			func_435(iParam0);
			return 1;
		}
	}
	else if (func_420(iParam0))
	{
		func_421(iParam0);
	}
	return 0;
}

int func_395(float fParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	fVar6 = 0.02f;
	fVar0 = 0.05f;
	fVar2 = (fVar0 + Global_22549);
	fVar1 = (Global_22550.f_5730 - (IntToFloat(Global_22550.f_5732) * 0.034722f));
	fVar5 = (fVar0 + fParam0);
	unk_0xFCC7EAA298CE7AC2(76, 84);
	unk_0xFFA39C4568552522(-0.05f, -0.05f, 0f, 0f);
	unk_0xE1300BFF7C839435(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xE1300BFF7C839435(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x5C64FD27DB62AF7A();
	fVar4 = (fVar2 - fVar6);
	if (fParam0 > 0f)
	{
		if (Global_4269750 >= fVar0 && Global_4269750 < fVar5)
		{
			return -999;
		}
	}
	if (Global_4269750 >= fVar0 && Global_4269750 < fVar4)
	{
		return -1;
	}
	if (Global_4269750 >= fVar4 && Global_4269750 <= fVar2)
	{
		return 1;
	}
	return 0;
}

int func_396()
{
	if (unk_0xC1F43F8D0D5EB664(2))
	{
		return unk_0xB9C0D9B37277621D(2, 237);
	}
	return 0;
}

void func_397(char* sParam0, int iParam1, int iParam2)
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

void func_398(int iParam0, bool bParam1, int iParam2)
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

int func_399()
{
	if (unk_0xC1F43F8D0D5EB664(2))
	{
		if (Global_4269756 > -1)
		{
			if (unk_0x1BD7199394D7F19A(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_400(int iParam0, int iParam1, bool bParam2)
{
	if (!unk_0xC1F43F8D0D5EB664(2))
	{
		return 0;
	}
	if (unk_0xF0C12886E5C1B20E() || unk_0x06EBE4F22EC30D45())
	{
		return 0;
	}
	if (bParam2)
	{
		unk_0x670AE643E0B07F1D();
	}
	if (Global_4269756 == -6)
	{
		unk_0x80DA25AB4C5012E9(4);
		if (iParam0 && unk_0x22D6FB6153F774D3(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4269756 = -1;
			return 0;
		}
	}
	if (((Global_4269756 > -1 || Global_4269756 == -3) || Global_4269756 == -2) || unk_0x300FEC80FC56D5D9())
	{
		unk_0x80DA25AB4C5012E9(1);
		return 0;
	}
	if (Global_4269756 == -1 && iParam0)
	{
		if (unk_0x22D6FB6153F774D3(2, 237))
		{
			unk_0x80DA25AB4C5012E9(4);
			Global_4269756 = -6;
			return 1;
		}
		else
		{
			unk_0x80DA25AB4C5012E9(3);
			return 0;
		}
	}
	unk_0x80DA25AB4C5012E9(1);
	return 0;
}

void func_401(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!unk_0xC1F43F8D0D5EB664(2))
	{
		Global_4269756 = -1;
		return;
	}
	unk_0x46448A93D5DC6258(1);
	fVar0 = Global_22547;
	fVar2 = (fVar0 + Global_22549);
	fVar3 = Global_22550.f_5730;
	fVar1 = (Global_22550.f_5730 - (IntToFloat(Global_22550.f_5732) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_22550.f_5732 < 1)
	{
		fVar1 = (Global_22550.f_5730 - 0.034722f);
	}
	unk_0xFCC7EAA298CE7AC2(76, 84);
	unk_0xFFA39C4568552522(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	unk_0xE1300BFF7C839435(fVar0, fVar1, &fVar0, &fVar1);
	unk_0xE1300BFF7C839435(fVar2, fVar3, &fVar2, &fVar3);
	unk_0x5C64FD27DB62AF7A();
	func_403();
	if (Global_4269756 == -6)
	{
		return;
	}
	Global_4269756 = -1;
	fVar7 = Global_4269750;
	fVar8 = Global_4269751;
	if (Global_22550.f_5733 > Global_22550.f_5732)
	{
		if (((Global_4269750 >= fVar0 && Global_4269750 <= fVar2) && Global_4269751 >= fVar3) && Global_4269751 < (fVar3 + fVar6))
		{
			Global_4269756 = -2;
			if (bParam3)
			{
				func_402(0);
			}
			return;
		}
		if (((Global_4269750 >= fVar0 && Global_4269750 <= fVar2) && Global_4269751 >= (fVar3 + fVar6)) && Global_4269751 < (fVar3 + 0.034722f))
		{
			Global_4269756 = -3;
			if (bParam3)
			{
				func_402(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = floor((fVar9 / 0.034722f));
		if (Global_22550.f_5733 == -1)
		{
			Global_4269756 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_22550.f_5732);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				unk_0xFCC7EAA298CE7AC2(76, 84);
				unk_0xFFA39C4568552522(-0.05f, -0.05f, 0f, 0f);
				func_365(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_22549, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				unk_0x5C64FD27DB62AF7A();
			}
		}
		Global_4269756 = Global_22550.f_8038[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4269756 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4269756 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4269756 = -4;
		return;
	}
	Global_4269756 = -1;
}

void func_402(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_22547;
	fVar1 = Global_22550.f_5730;
	unk_0xFCC7EAA298CE7AC2(76, 84);
	unk_0xFFA39C4568552522(-0.05f, -0.05f, 0f, 0f);
	if (Global_4269756 == -2)
	{
		func_365(fVar0, fVar1, Global_22549, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4269756 == -3)
	{
		func_365(fVar0, (fVar1 + fVar2), Global_22549, fVar2, 255, 255, 255, iVar3);
	}
	unk_0x5C64FD27DB62AF7A();
}

void func_403()
{
	Global_4269752 = Global_4269750;
	Global_4269753 = Global_4269751;
	Global_4269750 = unk_0x9A36B66CB7B51691(2, 239);
	Global_4269751 = unk_0x9A36B66CB7B51691(2, 240);
	Global_4269754 = (Global_4269750 - Global_4269752);
	Global_4269755 = (Global_4269751 - Global_4269753);
}

float func_404(float fParam0)
{
	if (fParam0 < 1.3f)
	{
		return 35f;
	}
	else if (fParam0 < 1.35f)
	{
		return 33f;
	}
	return 30f;
}

void func_405(var uParam0)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	uParam0->f_660 = 0;
	uParam0->f_661 = 3;
	uParam0->f_662 = 0;
	uParam0->f_663 = 3;
	uParam0->f_664 = 0;
	uParam0->f_665 = 7;
	func_345(0, 0);
	unk_0x28DD484BAEAF8437(141, &uVar0, &uVar1, &uVar2, &uVar3);
	func_390(uVar0, uVar1, uVar2, uVar3, 1);
	func_389(1, 2, 0, 0, 0);
	func_388(1, 2, 1, 1, 1);
	func_387(0, 1, 0, 0, 0);
	func_386("DARTS_TITLE");
	func_384(1, "ShopUI_Title_Darts", "ShopUI_Title_Darts");
	func_366(0, "DARTS_LEGS", 0, 1, 0, 0);
	func_381(0, 1, 0);
	func_366(1, "DARTS_SETS", 0, 1, 0, 0);
	func_381(1, 1, 0);
	func_366(2, "DARTS_START", 0, 1, 0, 0);
	func_380(2, 141, 141, 1);
	func_379(0);
	func_398(0, 1, 1);
	func_397("DARTS_LEGD", 0, 0);
	func_406();
	func_378(201, "ITEM_SELECT", -1, 0);
	func_378(202, "IB_QUIT", -1, 0);
}

void func_406()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		unk_0x044DAD4CFF5C769B(0.325f, 0.3f);
	}
}

int func_407(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	
	if ((func_431() && unk_0x578C4EF320340AF7() >= iLocal_164 + 1000) && *iParam0 != 8)
	{
		if (!unk_0x03DB5C6AABF8DA46() && !unk_0x5DA78AD6801A0523())
		{
			unk_0x1D40553EDD51A1B8(500);
		}
	}
	if (unk_0x03DB5C6AABF8DA46() && *iParam0 != 8)
	{
		*iParam0 = 8;
	}
	switch (*iParam0)
	{
		case 2:
			switch (iLocal_31)
			{
				case 0:
					if (*uParam3 == 2)
					{
						iLocal_164 = unk_0x578C4EF320340AF7();
						func_415(uParam1->f_1, uParam1->f_4, func_417(2), func_416(0), 0, 1);
						*uParam2 = 20;
						uParam2->f_1 = 2;
						func_286(uParam4[0 /*26*/], uParam1, uParam3, uParam2, 1);
					}
					if (*uParam3 == 3)
					{
						if (func_273(uParam4[0 /*26*/], uParam1, 0, 0))
						{
							unk_0x057194D526464DC0(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
							iLocal_31++;
							func_435(iParam5);
							*uParam3 = 2;
						}
					}
					break;
				
				case 1:
					if (func_423(iParam5) > 1f && !func_303("DARTS_DOUBLE_T"))
					{
						func_418("DARTS_DOUBLE_T", -1);
					}
					if (func_423(iParam5) > 5f)
					{
						func_435(iParam5);
						unk_0xD289B55B6AADBA10(1);
						func_409(uParam1->f_1, uParam1->f_4, func_417(3), func_416(0), 1000);
						iLocal_31 = 0;
						*iParam0 = 3;
					}
					break;
			}
			break;
		
		case 3:
			switch (iLocal_31)
			{
				case 0:
					if (!unk_0xC70648DE87CC1919(iLocal_83))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 20;
							uParam2->f_1 = 3;
							func_286(uParam4[1 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_273(uParam4[1 /*26*/], uParam1, 0, 0))
							{
								unk_0x057194D526464DC0(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_435(iParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_423(iParam5) > 1f && !func_303("DARTS_TRIPLE_T"))
					{
						func_418("DARTS_TRIPLE_T", -1);
					}
					if (func_423(iParam5) > 5f)
					{
						func_435(iParam5);
						unk_0xD289B55B6AADBA10(1);
						func_415(uParam1->f_1, uParam1->f_4, func_417(4), func_416(0), 1000, 0);
						iLocal_31 = 0;
						*iParam0 = 4;
					}
					break;
			}
			break;
		
		case 4:
			switch (iLocal_31)
			{
				case 0:
					if (!unk_0xC70648DE87CC1919(iLocal_82))
					{
						if (*uParam3 == 2)
						{
							*uParam2 = 50;
							uParam2->f_1 = 1;
							func_286(uParam4[2 /*26*/], uParam1, uParam3, uParam2, 1);
						}
						if (*uParam3 == 3)
						{
							if (func_273(uParam4[2 /*26*/], uParam1, 0, 0))
							{
								unk_0x057194D526464DC0(-1, "DARTS_HIT_BOARD_MASTER", uParam1->f_1, 0, 0, 0, 0);
								iLocal_31++;
								func_435(iParam5);
								*uParam3 = 2;
							}
						}
					}
					break;
				
				case 1:
					if (func_423(iParam5) > 1f && !func_303("DARTS_BULL_T"))
					{
						func_418("DARTS_BULL_T", -1);
					}
					if (func_423(iParam5) > 5f)
					{
						func_435(iParam5);
						unk_0xD289B55B6AADBA10(1);
						unk_0xC4CC25B68A91D144(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
						func_409(uParam1->f_1, uParam1->f_4, func_417(5), func_416(1), 1500);
						iLocal_31 = 0;
						*iParam0 = 5;
					}
					break;
			}
			break;
		
		case 5:
			if (!unk_0xC70648DE87CC1919(iLocal_83) && !func_303("DARTS_DBL_WIN"))
			{
				func_418("DARTS_DBL_WIN", -1);
			}
			if (func_423(iParam5) > 6f)
			{
				func_435(iParam5);
				*iParam0 = 6;
			}
			break;
		
		case 6:
			unk_0xC4CC25B68A91D144(-1, "CAM_PAN_DARTS", "HUD_MINI_GAME_SOUNDSET", 1);
			unk_0xF674D9B2033F5F86(iLocal_75, iLocal_83, 1500, 1, 1);
			*iParam0 = 7;
			break;
		
		case 7:
			if (!unk_0xC70648DE87CC1919(iLocal_75))
			{
				iLocal_31 = 0;
				unk_0xD289B55B6AADBA10(1);
				unk_0xB80B2936A29B2666();
				iVar0 = 0;
				while (iVar0 < 3)
				{
					func_408(uParam4[iVar0 /*26*/]);
					iVar0++;
				}
				return 1;
			}
			break;
		
		case 8:
			if (unk_0x03DB5C6AABF8DA46())
			{
				iLocal_31 = 0;
				unk_0xD289B55B6AADBA10(1);
				unk_0xB80B2936A29B2666();
				iVar1 = 0;
				while (iVar1 < 3)
				{
					func_408(uParam4[iVar1 /*26*/]);
					iVar1++;
				}
				unk_0x856549C07003344B(iLocal_75, true);
				unk_0xFD45D90342D2A0CD(500);
				return 1;
			}
			break;
	}
	return 0;
}

void func_408(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { -1668.044f, -1056.45f, 13.1063f };
	if (unk_0xAE06B9E39EBDE049(*iParam0))
	{
		unk_0x03D382CB0B44E2FC(*iParam0, Var0, 1, 0, 0, 1);
		unk_0x95178967C65CAD85(iParam0);
		unk_0x315F7D8C33F0AB37(iParam0);
	}
}

void func_409(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, int iParam4)
{
	unk_0x61A1DBB09F568406(iLocal_83);
	unk_0xD64C2E5B5BA2D347(iLocal_83, 35f);
	unk_0x8A3898631CCEC253(iLocal_83, unk_0x1BAE5C94E38E44FE(Param0, fParam1, Param2));
	unk_0xBF92D2A60C7C686E(iLocal_83, Vector(fParam1, 0f, 0f) - Param3, 2);
	unk_0xF674D9B2033F5F86(iLocal_83, iLocal_82, iParam4, 1, 1);
}

int func_410(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_420(&(uParam0->f_2)))
	{
		func_435(&(uParam0->f_2));
	}
	unk_0x4CB4237D8858ADA6(14);
	if (!bParam2)
	{
		unk_0x37FC7E88C7659D33(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		unk_0x37FC7E88C7659D33(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (unk_0x22D6FB6153F774D3(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_7(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1)
	{
		func_421(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_411(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6, float fParam7)
{
	char* sVar0;
	
	sVar0 = func_412(iParam5);
	unk_0x830F007E19C63E14(*uParam0, "RESET_MOVIE");
	unk_0xE1FDD153F5858534();
	unk_0x830F007E19C63E14(*uParam0, sVar0);
	unk_0xB23270F3D5E62FDE("STRING");
	unk_0x7006FC1051C85FCA(iParam4);
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x2042E9CA4306F725();
	if (!unk_0x7BCC91F3C1CF24E8(sParam2))
	{
		func_12(sParam2);
	}
	if (bParam6)
	{
		unk_0xAD291B8F75D737AD(100);
		unk_0xF1B28F753235CE2A(true);
	}
	unk_0xE1FDD153F5858534();
	if (bParam6)
	{
		unk_0x830F007E19C63E14(*uParam0, "TRANSITION_UP");
		unk_0x49B9B8101B158AEE(fParam7);
		unk_0xE1FDD153F5858534();
	}
	func_435(&(uParam0->f_2));
	uParam0->f_1 = iParam3;
}

char* func_412(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SHOW_WASTED_MP_MESSAGE";
		
		case 1:
			return "SHOW_BUSTED_MP_MESSAGE";
		
		case 2:
			return "SHOW_CENTERED_MP_MESSAGE_LARGE";
		
		case 3:
			return "SHOW_CENTERED_TOP_MP_MESSAGE";
		
		case 4:
			return "SHOW_MIDSIZED_MESSAGE";
		
		case 5:
			return "SHOW_MISSION_END_MP_MESSAGE";
		
		case 6:
			return "SHOW_MISSION_PASSED_MESSAGE";
		
		case 7:
			return "SHOW_MISSION_FAILED_MP_MESSAGE";
		
		default:
	}
	return "SHOW_CENTERED_MP_MESSAGE_LARGE";
}

void func_413()
{
	unk_0x856549C07003344B(iLocal_75, true);
	unk_0x3ED9330214992278(true, false, 3000, 1, 0, 0);
	if (unk_0xC516FEEB950FFD58(iLocal_82))
	{
		unk_0x856549C07003344B(iLocal_82, false);
	}
	if (unk_0xC516FEEB950FFD58(iLocal_77))
	{
		unk_0x856549C07003344B(iLocal_77, false);
	}
	if (unk_0xC516FEEB950FFD58(iLocal_78))
	{
		unk_0x856549C07003344B(iLocal_78, false);
	}
	if (unk_0xC516FEEB950FFD58(iLocal_79))
	{
		unk_0x856549C07003344B(iLocal_79, false);
	}
	if (unk_0xC516FEEB950FFD58(iLocal_80))
	{
		unk_0x856549C07003344B(iLocal_80, false);
	}
	if (unk_0xC516FEEB950FFD58(iLocal_81))
	{
		unk_0x856549C07003344B(iLocal_81, false);
	}
}

char* func_414(int iParam0)
{
	if (iLocal_175 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_BAR";
			
			case 1:
				return "DARTS_MENU_BAR";
			
			case 2:
				return "DARTS_START_MATCH_BAR";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_BAR";
			
			default:
		}
	}
	else if (iLocal_175 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return "DARTS_MEET_OPPONENT_ROCK";
			
			case 1:
				return "DARTS_MENU_ROCK";
			
			case 2:
				return "DARTS_START_MATCH_ROCK";
			
			case 3:
				return "DARTS_MATCH_COMPLETE_ROCK";
			}
		
		default:
	}
	return "";
}

void func_415(struct<3> Param0, float fParam1, struct<3> Param2, struct<3> Param3, int iParam4, bool bParam5)
{
	unk_0x61A1DBB09F568406(iLocal_82);
	unk_0xD64C2E5B5BA2D347(iLocal_82, 35f);
	unk_0x8A3898631CCEC253(iLocal_82, unk_0x1BAE5C94E38E44FE(Param0, fParam1, Param2));
	unk_0xBF92D2A60C7C686E(iLocal_82, Vector(fParam1, 0f, 0f) - Param3, 2);
	if (bParam5)
	{
		unk_0x856549C07003344B(iLocal_82, true);
	}
	else
	{
		unk_0xF674D9B2033F5F86(iLocal_82, iLocal_83, iParam4, 1, 1);
	}
}

Vector3 func_416(bool bParam0)
{
	if (bParam0)
	{
		return -4.7411f, 0f, -15.32f;
	}
	return 4.9918f, 0f, 4.3916f;
}

Vector3 func_417(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.0588f, -1.6075f, 0.1336f;
		
		case 2:
			return -0.0944f, -1.2308f, 0.3468f;
		
		case 3:
			return -0.0948f, -1.243f, 0.2067f;
		
		case 4:
			return -0.0955f, -1.2524f, 0.1006f;
		
		case 5:
			return -0.0951f, -1.2526f, 0.0895f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_418(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, true, iParam1);
}

int func_419(int iParam0)
{
	if (!unk_0xA59F96B50B97E63C(func_498(), 0))
	{
		func_4(func_498(), "GENERIC_YES", 0, 6);
	}
	else
	{
		func_4(iParam0, "GENERIC_AGREE", 0, 6);
	}
	return 1;
}

bool func_420(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(*iParam0, 1);
}

void func_421(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

void func_422(int iParam0, char* sParam1, int iParam2)
{
	unk_0xFDCFA91E51EDB61F(iParam0, sParam1, func_6(iParam2), 1);
}

float func_423(int iParam0)
{
	if (func_420(iParam0))
	{
		if (func_9(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_8(unk_0xCE990E643CD9D0E5(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

void func_424(int iParam0)
{
	if (!func_420(iParam0))
	{
		func_375(iParam0);
	}
	else
	{
		func_435(iParam0);
	}
}

void func_425()
{
	Global_19871 = 0;
	func_426();
}

void func_426()
{
	unk_0x62B2C9892E3E142D();
	Global_22016 = 0;
	if ((unk_0x6B12213471F330A3() || Global_19681.f_1 == 9) || Global_19680 == 1)
	{
		unk_0xBE4122AC23440E7D(false);
		Global_21005 = 6;
		Global_19681.f_1 = 3;
		return;
	}
	if (unk_0x6A5CC4A2C9D9ED8D())
	{
		unk_0xBE4122AC23440E7D(true);
		Global_21005 = 6;
		return;
	}
}

void func_427(int iParam0)
{
	if (func_40())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_430())
		{
			func_429(1, 1);
		}
		else
		{
			func_429(0, 0);
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
	if (!func_428())
	{
		Global_19681.f_1 = 3;
	}
}

int func_428()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_429(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_39(0))
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

bool func_430()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

int func_431()
{
	if (unk_0xF0C12886E5C1B20E())
	{
		return 0;
	}
	if (unk_0x1BD7199394D7F19A(0, 18) || unk_0x1BD7199394D7F19A(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_432(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0xA5D3CD332CD10EE9();
	if (unk_0xAE06B9E39EBDE049(iVar0))
	{
		if (!func_433(iVar0))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && unk_0x910DFF8E55ABB8EC(iVar0, unk_0x9B0761B4C3EB8BC7(), Local_137, 0, 1, 0))
			{
				unk_0x50BED1B1922FF68E(iVar0);
				unk_0x58ADF88C51AAFDC5(iVar0, false, 0);
				unk_0x80250B8368A4E611(iVar0, false, 0);
				unk_0x6A8F948698B360B4(iVar0, true);
				unk_0x4F3C4F457D44BB0F(iVar0, true, 1);
				*uParam0 = iVar0;
				return 1;
			}
		}
	}
	return 0;
}

int func_433(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (!unk_0x0922C2E075A5F18C(iParam0))
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

void func_434(var uParam0, int iParam1)
{
	iParam1++;
	unk_0x830F007E19C63E14(*uParam0, "SET_PLAYER_HIGHLIGHT");
	unk_0xAD291B8F75D737AD(iParam1);
	unk_0xE1FDD153F5858534();
}

void func_435(int iParam0)
{
	func_436(iParam0, 0f);
}

void func_436(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_8(unk_0xCE990E643CD9D0E5(*iParam0, 4)) - fParam1);
	unk_0xBE20AB8238688965(iParam0, 1);
	unk_0xD2459066EA58CE43(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_437(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76833)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				unk_0x83BBFE5E96C64FBA(iParam2, 0);
			}
			else
			{
				unk_0x83BBFE5E96C64FBA(iParam2, 1);
			}
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				unk_0xE61672E3FEF081AC(iParam2, 0);
			}
			else
			{
				unk_0xE61672E3FEF081AC(iParam2, 1);
			}
		}
	}
}

void func_438(var uParam0, char* sParam1, char* sParam2)
{
	unk_0x830F007E19C63E14(*uParam0, "SET_DARTS_PLAYER_NAMES");
	func_34(sParam1);
	func_34(sParam2);
	unk_0xE1FDD153F5858534();
}

void func_439(float fParam0, struct<4> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(func_498()) && !unk_0x5AEB5DDFFAD43CA5(func_498()))
	{
		unk_0x59478CBBF96AF7D1(func_498());
	}
	else
	{
		if (unk_0xAE06B9E39EBDE049(uParam5->f_5) && !unk_0x5AEB5DDFFAD43CA5(uParam5->f_5))
		{
			unk_0x4F3C4F457D44BB0F(uParam5->f_5, true, 1);
			iLocal_138[1] = uParam5->f_5;
			unk_0x9B94F6169B0DAEFD(iLocal_138[1]);
		}
		else if (func_441(uParam4))
		{
			unk_0x9B94F6169B0DAEFD(iLocal_138[1]);
		}
		else
		{
			iLocal_138[1] = unk_0xB3116B49FE00E2F1(26, iLocal_172, Param1.f_3, fParam0, 1, true);
		}
		if (unk_0x871819940BD2E434(iLocal_138[1], "Darts_name"))
		{
			iVar0 = unk_0x8C0800114C2864BE(iLocal_138[1], "Darts_name");
			if (954610991 == iVar0)
			{
				sLocal_220 = func_445("RAYMOND");
				iLocal_221 = 954610991;
			}
			else if (94453331 == iVar0)
			{
				sLocal_220 = func_445("JOHAN");
				iLocal_221 = 94453331;
			}
			else if (1891555423 == iVar0)
			{
				sLocal_220 = func_445("STAN");
				iLocal_221 = 1891555423;
			}
			else if (-1067630349 == iVar0)
			{
				sLocal_220 = func_445("VINCE");
				iLocal_221 = -1067630349;
			}
			else if (885327384 == iVar0)
			{
				sLocal_220 = func_445("KRISTY");
				iLocal_221 = 885327384;
			}
			else if (-1791000994 == iVar0)
			{
				sLocal_220 = func_445("MARLENE");
				iLocal_221 = -1791000994;
			}
			else if (1954368234 == iVar0)
			{
				sLocal_220 = func_445("LORIE");
				iLocal_221 = 1954368234;
			}
			else if (-863218904 == iVar0)
			{
				sLocal_220 = func_445("SHELLEY");
				iLocal_221 = -863218904;
			}
		}
		unk_0x00AF6A2AAFB41525(iLocal_138[1], "Darts_name", iLocal_221);
	}
	iVar1 = unk_0x36FE6D3220816ADA(iLocal_138[1]);
	func_440(iVar1);
	unk_0xD08E9EAF091A1AAB(iLocal_138[1], iLocal_138[0], 0);
	unk_0xD08E9EAF091A1AAB(iLocal_138[0], iLocal_138[1], 0);
}

void func_440(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x344C570D6F8700DF(0, 2);
	switch (iParam0)
	{
		case joaat("a_f_m_salton_01"):
			switch (iVar0)
			{
				case 0:
					sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_03";
					break;
				
				case 1:
					sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_02";
					break;
			}
			break;
		
		case joaat("a_f_o_salton_01"):
			sLocal_57 = "A_F_M_SALTON_01_WHITE_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_01"):
			sLocal_57 = "G_M_Y_LOST_01_BLACK_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_03"):
			sLocal_57 = "G_M_Y_LOST_02_LATINO_FULL_01";
			break;
		
		case joaat("a_m_y_vinewood_04"):
			sLocal_57 = "G_M_Y_LOST_01_BLACK_FULL_02";
			break;
		
		case joaat("a_m_y_stlat_01"):
			sLocal_57 = "G_M_Y_LOST_02_LATINO_FULL_02";
			break;
		
		case joaat("a_m_y_stwhi_02"):
			sLocal_57 = "G_M_Y_LOST_01_WHITE_FULL_01";
			break;
	}
}

int func_441(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0x3214CDFE45D11916(unk_0x9B0761B4C3EB8BC7(), uParam0, -1))
	{
		if (!unk_0x5AEB5DDFFAD43CA5((*uParam0)[iVar0]))
		{
			if ((((((unk_0x36FE6D3220816ADA((*uParam0)[iVar0]) == joaat("a_f_m_salton_01") || unk_0x36FE6D3220816ADA((*uParam0)[iVar0]) == joaat("a_f_o_salton_01")) || unk_0x36FE6D3220816ADA((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_01")) || unk_0x36FE6D3220816ADA((*uParam0)[iVar0]) == joaat("a_m_y_stlat_01")) || unk_0x36FE6D3220816ADA((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_04")) || unk_0x36FE6D3220816ADA((*uParam0)[iVar0]) == joaat("a_m_y_stwhi_02")) || unk_0x36FE6D3220816ADA((*uParam0)[iVar0]) == joaat("a_m_y_vinewood_03"))
			{
				unk_0x4F3C4F457D44BB0F((*uParam0)[iVar0], true, 1);
				iLocal_138[1] = (*uParam0)[iVar0];
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_442(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar2 = (func_444() - 1);
		iVar0 = 3;
		while (iVar0 <= iVar2)
		{
			if (func_443(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_443(int iParam0)
{
	if (!func_92(iParam0))
	{
		return func_94(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_444()
{
	if (Global_30968 == 0 || Global_30968 == 2)
	{
		return 172;
	}
	return 161;
}

char* func_445(char* sParam0)
{
	if (unk_0xA2C6E70C9BCA9C34() == 7)
	{
		if (unk_0xF005CCA4263DF67F(sParam0, "MICHAEL"))
		{
			return "??????????";
		}
		else if (unk_0xF005CCA4263DF67F(sParam0, "FRANKLIN"))
		{
			return "????????????????";
		}
		else if (unk_0xF005CCA4263DF67F(sParam0, "TREVOR"))
		{
			return "????????????";
		}
		else if (unk_0xF005CCA4263DF67F(sParam0, "LAMAR"))
		{
			return "??????????";
		}
		else if (unk_0xF005CCA4263DF67F(sParam0, "JIMMY"))
		{
			return "????????????";
		}
		else if (unk_0xF005CCA4263DF67F(sParam0, "KRISTY"))
		{
			return "????????????";
		}
		else if (unk_0xF005CCA4263DF67F(sParam0, "MARLENE"))
		{
			return "????????????";
		}
		else if (unk_0xF005CCA4263DF67F(sParam0, "LORIE"))
		{
			return "????????";
		}
		else if (unk_0xF005CCA4263DF67F(sParam0, "SHELLEY"))
		{
			return "??????????";
		}
		else if (unk_0xF005CCA4263DF67F(sParam0, "RAYMOND"))
		{
			return "??????????????";
		}
		else if (unk_0xF005CCA4263DF67F(sParam0, "JOHAN"))
		{
			return "??????????";
		}
		else if (unk_0xF005CCA4263DF67F(sParam0, "STAN"))
		{
			return "????????";
		}
		else if (unk_0xF005CCA4263DF67F(sParam0, "VINCE"))
		{
			return "????????";
		}
	}
	return sParam0;
}

void func_446(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	if (unk_0xAE06B9E39EBDE049(*uParam0))
	{
		uParam0->f_4 = unk_0xEF7858F25585F853(*uParam0);
	}
	if (!bParam3)
	{
		func_448(uParam1, uParam0);
	}
	Local_41 = { 0f, (-2.3685f + fLocal_34), 0.1f };
	Local_41 = { Local_41 + Local_35 };
	Local_40 = { unk_0x1BAE5C94E38E44FE(uParam0->f_1, uParam0->f_4, Local_41) };
	func_447(uParam2, uParam0);
}

void func_447(var uParam0, var uParam1)
{
	uParam0->f_3 = { 0f, -0.15f, 0f };
	uParam0->f_3 = { uParam0->f_3 + Local_35 };
	*uParam0 = { unk_0x1BAE5C94E38E44FE(uParam1->f_1, uParam1->f_4, 0f, 0f, 0f) };
}

void func_448(var uParam0, var uParam1)
{
	*uParam0 = { unk_0x1BAE5C94E38E44FE(uParam1->f_1, uParam1->f_4, -0.4f, (-2.4f + fLocal_34), -1.7272f) };
	uParam0->f_3 = { unk_0x1BAE5C94E38E44FE(uParam1->f_1, uParam1->f_4, 0.5f, (-2.4f + fLocal_34), -1.7272f) };
}

int func_449(var uParam0, var uParam1)
{
	if (!unk_0x8B917081F9836EDD("SCRIPT\DARTS", false, -1))
	{
		return 0;
	}
	if (!unk_0x8B917081F9836EDD("SCRIPT\FAMILY1_2", false, -1))
	{
		return 0;
	}
	if ((((((((((((!unk_0x7D167B9A0CCDA347(iLocal_28) || !unk_0x7D167B9A0CCDA347(iLocal_29)) || !unk_0x7D167B9A0CCDA347(iLocal_37)) || !unk_0x7D167B9A0CCDA347(iLocal_172)) || !unk_0x95EF219D38B20CFF(*uParam0)) || !unk_0x95EF219D38B20CFF(uParam1->f_645)) || !unk_0x95EF219D38B20CFF(uParam1->f_57)) || !unk_0x95EF219D38B20CFF(uParam1->f_62)) || !unk_0xF5EE205091CE6DB2(3)) || !unk_0xC7F5A2E99D75A65C("Darts")) || !unk_0xC614DDE265D18415(sLocal_222)) || !unk_0xC614DDE265D18415(sLocal_223)) || !func_450(0, -1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_450(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_342(&iVar0, 1, iParam1))
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
	bVar2 = func_451(&(Global_22550.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_451(var uParam0)
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

void func_452(var uParam0, var uParam1)
{
	unk_0x78FCB2E22C41B9D5(iLocal_28);
	unk_0x78FCB2E22C41B9D5(iLocal_29);
	unk_0x78FCB2E22C41B9D5(iLocal_37);
	unk_0x78FCB2E22C41B9D5(iLocal_172);
	unk_0x494D5FF88119CDC0("Darts", false);
	unk_0x494D5FF88119CDC0("ShopUI_Title_Darts", false);
	unk_0x131ED02492676000(sLocal_222);
	unk_0x131ED02492676000(sLocal_223);
	*uParam0 = unk_0x5DEA4192B46CB99B("darts_scoreboard");
	uParam1->f_645 = func_194();
	uParam1->f_57 = func_454();
	uParam1->f_62 = func_453();
	unk_0xBAA4D421B8B8A744("DARTS", 3);
}

int func_453()
{
	return unk_0x5DEA4192B46CB99B("MIDSIZED_MESSAGE");
}

int func_454()
{
	return unk_0x5DEA4192B46CB99B("MP_BIG_MESSAGE_FREEMODE");
}

void func_455(var uParam0, int iParam1, struct<3> Param2, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 7)
		{
			uParam0->f_1[iVar0 /*8*/][iVar1] = 1;
			iVar1++;
		}
		iVar0++;
	}
	if (iParam1 == 0)
	{
		uParam0->f_18 = { 989.399f, -99.674f, 75.925f };
		uParam0->f_21 = { 180f, 0f, 252.555f };
		uParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	else
	{
		uParam0->f_18 = { 1992.223f, 3049.814f, 48.333f };
		uParam0->f_21 = { 180f, 0f, 87.77f };
		uParam0->f_24 = { 1.82f, 1.328f, 1f };
	}
	if (!func_456(Param2) && fParam3 != 0f)
	{
		uParam0->f_18 = { unk_0x1BAE5C94E38E44FE(Param2, fParam3, -0.687645f, -0.350352f, 0.343273f) };
		uParam0->f_21 = { 180f, 0f, (fParam3 - -29.98685f) };
	}
	uParam0->f_27 = 0.885f;
	uParam0->f_28 = 0.244f;
	uParam0->f_29 = 0.17f;
	uParam0->f_30 = 0.415f;
}

int func_456(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_457(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0 + 1;
	Local_38 = 0.5f;
	Local_38.f_1 = 0.5f;
	if (unk_0xE5EF21F14D0F9D25())
	{
		Local_38.f_2 = 0.05f;
		Local_38.f_3 = 0.095f;
	}
	else
	{
		Local_38.f_2 = 0.065f;
		Local_38.f_3 = 0.09f;
	}
	Local_38.f_4 = 255;
	Local_38.f_5 = 250;
	Local_38.f_6 = 255;
	Local_38.f_7 = 123;
	if (iVar0 == 1)
	{
		Local_38.f_4 = 255;
		Local_38.f_5 = 255;
		Local_38.f_6 = 255;
	}
	else if (iVar0 == 2)
	{
		Local_38.f_4 = 255;
		Local_38.f_5 = 255;
		Local_38.f_6 = 255;
	}
	Local_38.f_8 = 0f;
	Local_39 = 0f;
	Local_39.f_1 = 0f;
	Local_39.f_2 = 0.061f;
	Local_39.f_3 = 0.105f;
	Local_39.f_4 = 200;
	Local_39.f_5 = 45;
	Local_39.f_6 = 40;
	Local_39.f_7 = 255;
	Local_39.f_8 = 0f;
}

void func_458(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		uParam0->f_1 = iLocal_28;
	}
	else
	{
		uParam0->f_1 = iLocal_29;
	}
	uParam0->f_24 = 0;
	uParam0->f_23 = 0;
}

void func_459()
{
	int iVar0;
	
	unk_0x095BE6BE94388907();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838577.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_460(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	float fVar7;
	struct<3> Var8;
	float fVar9;
	float fVar10;
	struct<3> Var11;
	float fVar12;
	float fVar13;
	struct<3> Var14;
	struct<3> Var15;
	struct<3> Var16;
	
	fLocal_89 = unk_0x8940B46482DD0A7D(0);
	fVar7 = 30f;
	fVar7 = func_404(fLocal_89);
	Var8 = { -0.192784f, -1.73287f, 0.0262985f };
	fVar9 = 1.7939f;
	fVar10 = -1.3346f;
	if (unk_0xE5EF21F14D0F9D25())
	{
		Var11 = { -0.0974819f, -1.65968f, 0.335098f };
		fVar12 = -1.3023f;
		fVar13 = -12.4139f;
	}
	else
	{
		Var11 = { -0.112635f, -1.86963f, 0.45417f };
		fVar12 = -3.7542f;
		fVar13 = -14.4576f;
	}
	Var14 = { 0.261599f, -0.750354f, -0.392929f };
	Var16 = { 0.281314f, -0.573735f, -0.39603f };
	Var1 = { unk_0x1BAE5C94E38E44FE(Param0, fParam1, Var8) };
	Var3 = { fVar10, 0f, (fParam1 - fVar9) };
	Var0 = { unk_0x1BAE5C94E38E44FE(Param0, fParam1, Var11) };
	Var2 = { fVar13, 0f, (fParam1 - fVar12) };
	Var4 = { unk_0x1BAE5C94E38E44FE(Param0, fParam1, Var14) };
	Var5 = { 0.8351f, -0.0048f, (fParam1 - 186.5073f) };
	Var15 = { unk_0x1BAE5C94E38E44FE(Param0, fParam1, Var16) };
	Var6 = { 0.8351f, -0.0048f, (fParam1 - 186.5073f) };
	iLocal_75 = unk_0xB5B018137EBE06D3(26379945, Var0, Var2, fVar7, 0, 2);
	iLocal_76 = unk_0xB5B018137EBE06D3(26379945, Var1, Var3, fVar7, 0, 2);
	iLocal_77 = unk_0xB5B018137EBE06D3(26379945, Var4, Var5, 65f, 0, 2);
	iLocal_78 = unk_0xB5B018137EBE06D3(26379945, Var15, Var6, 65f, 0, 2);
	iLocal_79 = unk_0xB5B018137EBE06D3(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_80 = unk_0xB5B018137EBE06D3(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_82 = unk_0xB5B018137EBE06D3(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_83 = unk_0xB5B018137EBE06D3(26379945, 0f, 0f, 0f, 0f, 0f, 0f, 65f, 0, 2);
	iLocal_81 = unk_0xB5B018137EBE06D3(26379945, 1996.235f, 3048.456f, 48.0237f, -3.4831f, 0.0223f, 60.6925f, 38.1f, 0, 2);
	unk_0xD64C2E5B5BA2D347(iLocal_77, 43.35f);
	unk_0xD64C2E5B5BA2D347(iLocal_78, 42.35f);
	unk_0x2311A669433389E8(iLocal_77, "HAND_SHAKE", 0.1f);
	unk_0x2311A669433389E8(iLocal_78, "HAND_SHAKE", 0.1f);
}

void func_461(var uParam0, var uParam1)
{
	uParam0->f_1 = { *uParam1 };
	uParam0->f_4 = uParam1->f_3;
	if (unk_0xAE06B9E39EBDE049(uParam1->f_4))
	{
		*uParam0 = uParam1->f_4;
	}
	iLocal_33[0] = 20;
	iLocal_33[10] = 3;
	iLocal_33[1] = 1;
	iLocal_33[11] = 19;
	iLocal_33[2] = 18;
	iLocal_33[12] = 7;
	iLocal_33[3] = 4;
	iLocal_33[13] = 16;
	iLocal_33[4] = 13;
	iLocal_33[14] = 8;
	iLocal_33[5] = 6;
	iLocal_33[15] = 11;
	iLocal_33[6] = 10;
	iLocal_33[16] = 14;
	iLocal_33[7] = 15;
	iLocal_33[17] = 9;
	iLocal_33[8] = 2;
	iLocal_33[18] = 12;
	iLocal_33[9] = 17;
	iLocal_33[19] = 5;
	iLocal_33[20] = 20;
}

void func_462()
{
	Global_22411.f_6 = 1;
}

void func_463(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&Global_31215, iParam0);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_31215, iParam0);
	}
}

var func_464(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_465(iParam0, iParam1);
	unk_0xD2F202166691EDB2(iVar1, &uVar0, -1);
	return uVar0;
}

var func_465(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	func_466(iParam0, iParam1, &uVar0, &uVar1);
	return uVar0;
}

void func_466(int iParam0, int iParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_UNLOCKED");
					break;
				
				case 1:
					*uParam2 = joaat("SP0_STAMINA");
					break;
				
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY");
					break;
				
				case 2:
					*uParam2 = joaat("SP0_STRENGTH");
					break;
				
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY");
					break;
				
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY");
					break;
				
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY");
					break;
				
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_UNLOCKED");
					break;
				
				case 1:
					*uParam2 = joaat("SP1_STAMINA");
					break;
				
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY");
					break;
				
				case 2:
					*uParam2 = joaat("SP1_STRENGTH");
					break;
				
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY");
					break;
				
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY");
					break;
				
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY");
					break;
				
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_UNLOCKED");
					break;
				
				case 1:
					*uParam2 = joaat("SP2_STAMINA");
					break;
				
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY");
					break;
				
				case 2:
					*uParam2 = joaat("SP2_STRENGTH");
					break;
				
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY");
					break;
				
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY");
					break;
				
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY");
					break;
				
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_467(bool bParam0)
{
	if (bParam0)
	{
		func_468();
		if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
		{
			unk_0xBE20AB8238688965(&Global_7552, 16);
		}
		Global_19681.f_1 = 1;
		if (func_39(0))
		{
			func_427(0);
		}
	}
	else if (Global_19681.f_1 == 1)
	{
		if (!Global_19681.f_1 == 0)
		{
			Global_19681.f_1 = 3;
		}
	}
}

void func_468()
{
	if (Global_19681.f_1 == 9 || Global_19681.f_1 == 10)
	{
		Global_21058 = 0;
		Global_21054 = 1;
	}
}

void func_469(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	unk_0x07CCC8C1B2AFEB92(1);
	func_265(8);
	func_318();
	if (bLocal_146)
	{
		func_486(&uLocal_162);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			func_408(&(iParam0->f_5[iVar0 /*79*/][iVar1 /*26*/]));
			iVar1++;
		}
		iVar0++;
	}
	unk_0x74528AC0906CBABE(iLocal_28);
	unk_0x74528AC0906CBABE(iLocal_29);
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_138[0]) && !unk_0x5AEB5DDFFAD43CA5(iLocal_138[1]))
	{
		unk_0xE2348E4036041923(iLocal_138[0]);
		unk_0xE2348E4036041923(iLocal_138[1]);
	}
	func_485();
	unk_0x74528AC0906CBABE(iLocal_37);
	func_484();
	func_483(uParam1->f_645);
	func_482(&(uParam1->f_57));
	if (!unk_0xA59F96B50B97E63C(func_498(), 0))
	{
		unk_0xE19B69814D61BBA5(func_498(), func_481());
		func_480(iLocal_170, iLocal_171);
	}
	else
	{
		func_478(&(iLocal_138[1]));
	}
	func_467(0);
	func_477(uParam2, 0);
	func_36(0);
	unk_0x610B4083B1F95914(15);
	if (unk_0xDCA94C1EA9942FBD())
	{
		if (iParam0->f_460 && !iLocal_160)
		{
			func_476(190, 0);
		}
	}
	func_104();
	func_459();
	func_96(&(uParam1->f_72), 0);
	wait(200);
	if (iLocal_153)
	{
		func_473(130, 0, 0);
		func_470();
	}
	func_463(23, 0);
	unk_0xD39E529EBE5DB04F();
}

void func_470()
{
	func_471();
}

int func_471()
{
	if (func_472(0))
	{
		return 0;
	}
	if (Global_98994.f_8)
	{
		if (Global_98994.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_98994.f_10 > 1)
	{
		return 0;
	}
	Global_98994.f_10++;
	return 1;
}

bool func_472(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_473(int iParam0, int iParam1, int iParam2)
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
		func_63((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_111858.f_10190[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_111858.f_10190[iParam0 /*12*/].f_6 == 11 || Global_111858.f_10190[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_111858.f_10190[iParam0 /*12*/].f_5 = 1;
		Global_111858.f_10190[iParam0 /*12*/].f_10 = iParam1;
		Global_111858.f_10190[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			unk_0xFB6CC2C6970D6917(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			unk_0xFB6CC2C6970D6917(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			unk_0xFB6CC2C6970D6917(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_474();
	}
}

void func_474()
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
	Global_111594 = 0;
	Global_111595 = 0;
	Global_111596 = 0;
	Global_111597 = 0;
	Global_111598 = 0;
	Global_111599 = 0;
	Global_111600 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_111858.f_10190.f_3853;
	Global_111858.f_10190.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_111858.f_10190[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_111858.f_10190[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_111594++;
					fVar1 = (fVar1 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_111595++;
					fVar2 = (fVar2 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_111596++;
					fVar3 = (fVar3 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_111597++;
					fVar4 = (fVar4 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_111598++;
					fVar5 = (fVar5 + (Global_111858.f_10190[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_111599++;
					fVar6 = (fVar6 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_111600++;
					fVar7 = (fVar7 + Global_111858.f_10190[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_111577 > 0)
	{
		if (Global_111594 == Global_111577)
		{
			fVar1 = 55f;
		}
	}
	if (Global_111578 > 0)
	{
		if (Global_111595 == Global_111578)
		{
			fVar2 = 10f;
		}
	}
	if (Global_111579 > 0)
	{
		if (Global_111596 == Global_111579)
		{
			fVar3 = 0f;
		}
	}
	if (Global_111580 > 0)
	{
		if (Global_111597 == Global_111580)
		{
			fVar4 = 10f;
		}
	}
	if (Global_111581 > 0)
	{
		if (((Global_111598 == Global_111581 || (Global_111581 * 10 / Global_111598) < 41) || Global_111598 > Global_111584) || Global_111598 == Global_111584)
		{
			if (!unk_0xCE990E643CD9D0E5(Global_111858.f_10190.f_3856, 14))
			{
				if (Global_111598 == Global_111581)
				{
					unk_0xFB6CC2C6970D6917(joaat("NUM_RNDEVENTS_COMPLETED"), Global_111581, 0);
					unk_0xBE20AB8238688965(&(Global_111858.f_10190.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_111582 > 0)
	{
		if (Global_111599 == Global_111582)
		{
			fVar6 = 15f;
		}
	}
	if (Global_111583 > 0)
	{
		if (Global_111600 == Global_111583)
		{
			fVar7 = 5f;
		}
	}
	Global_111858.f_10190.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_111598 > Global_111584 || Global_111598 == Global_111584)
	{
		iVar9 = Global_111584;
	}
	else
	{
		iVar9 = Global_111598;
	}
	unk_0x6000E4684CB4330B(joaat("NUM_MISSIONS_COMPLETED"), Global_111594, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MISSIONS_AVAILABLE"), Global_111577, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MINIGAMES_COMPLETED"), Global_111595, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MINIGAMES_AVAILABLE"), Global_111578, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_ODDJOBS_COMPLETED"), Global_111596, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_ODDJOBS_AVAILABLE"), Global_111579, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_111597, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_111580, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_RNDEVENTS_COMPLETED"), iVar9, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_111584, 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MISC_COMPLETED"), (Global_111600 + Global_111599), 1);
	unk_0x6000E4684CB4330B(joaat("NUM_MISC_AVAILABLE"), (Global_111583 + Global_111582), 1);
	Global_111601 = (Global_111594 * 100 / Global_111577);
	Global_111603 = ((Global_111596 + Global_111595) * 100 / (Global_111579 + Global_111578));
	Global_111602 = ((Global_111597 + iVar9) * 100 / (Global_111580 + Global_111584));
	Global_111604 = ((Global_111599 + Global_111600) * 100 / (Global_111582 + Global_111583));
	unk_0x3C2CA88D6219BB12(joaat("TOTAL_PROGRESS_MADE"), Global_111858.f_10190.f_3853, 1);
	unk_0x6000E4684CB4330B(joaat("PERCENT_STORY_MISSIONS"), Global_111601, 1);
	unk_0x6000E4684CB4330B(joaat("PERCENT_AMBIENT_MISSIONS"), Global_111602, 1);
	unk_0x6000E4684CB4330B(joaat("PERCENT_ODDJOBS"), Global_111603, 1);
	if (fVar8 > 0f && floor(fVar8) < floor(Global_111858.f_10190.f_3853))
	{
		func_85(13, floor(Global_111858.f_10190.f_3853));
	}
	if (!unk_0xC4A02490EB1F450B())
	{
		if (!Global_76833)
		{
			if (func_475() == 2 == 0 && !unk_0x25DDB354A40FFCDB())
			{
				if (unk_0x70E5C9630A26FB40())
				{
					Global_111592 = 0;
				}
				if (!Global_61717)
				{
					func_471();
				}
			}
		}
	}
}

int func_475()
{
	return Global_30968;
}

void func_476(int iParam0, bool bParam1)
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	if (!unk_0xDCA94C1EA9942FBD())
	{
		return;
	}
	StringCopy(&(Var1[0 /*8*/]), "GameType", 32);
	if (bParam1)
	{
		StringCopy(&(Var0[0 /*6*/]), "MP", 24);
	}
	else
	{
		StringCopy(&(Var0[0 /*6*/]), "SP", 24);
	}
	if (func_224(iParam0, &Var0, &Var1, 1, -1, 0, 0))
	{
		unk_0x5DFCCEA807F4355D(103, iLocal_106[1], 0f);
		unk_0x5DFCCEA807F4355D(99, iLocal_106[2], 0f);
		unk_0x5DFCCEA807F4355D(109, iLocal_106[3], 0f);
		unk_0x5DFCCEA807F4355D(106, iLocal_106[5], 0f);
		unk_0x5DFCCEA807F4355D(2, iLocal_106[10], 0f);
		unk_0x5DFCCEA807F4355D(107, iLocal_106[8], 0f);
		unk_0x5DFCCEA807F4355D(116, iLocal_106[6], 0f);
	}
}

void func_477(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		unk_0x2E352DDBBF674246(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_562 || iParam1) && uParam0->f_4 != 0)
	{
		if (unk_0xF8EDFF98A9C94C74())
		{
			unk_0x830F007E19C63E14(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			unk_0xF1B28F753235CE2A(false);
			unk_0xE1FDD153F5858534();
		}
		unk_0x2E352DDBBF674246(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		unk_0xFF8E7A064055ECA6(false);
		uParam0->f_564 = 0;
	}
	if (!Global_77101)
	{
		if (!unk_0x252C34B7867FDDFA(unk_0x2639A2323BEA8CC6()))
		{
			if (!Global_77102)
			{
				if (unk_0x03DB5C6AABF8DA46() && !func_472(0))
				{
					unk_0xFD45D90342D2A0CD(800);
				}
			}
		}
	}
	func_36(0);
}

void func_478(var uParam0)
{
	if (unk_0xAE06B9E39EBDE049(*uParam0) && !unk_0x5AEB5DDFFAD43CA5(*uParam0))
	{
		unk_0x4F83FEE4454169D4(&uLocal_173);
		unk_0x9DC06E2A59C5AEBB(&uLocal_173);
		if (unk_0xAE06B9E39EBDE049(iLocal_138[0]))
		{
			unk_0xA785552633ED203B(0, iLocal_138[0], 8000, 2049, 3);
		}
		unk_0xC1C7DE768F7675E5(0, 1000);
		if (bLocal_151)
		{
			if (!unk_0xCE990E643CD9D0E5(Global_111819, 10))
			{
				unk_0x3C1B180EE30D36EF(0, func_479(iLocal_175 == 2, Local_210, Local_212), 1f, 20000, 0.25f, 0, func_123(iLocal_175 == 2, fLocal_214, fLocal_216));
			}
			else
			{
				unk_0x3C1B180EE30D36EF(0, func_479(iLocal_175 == 2, Local_209, Local_211), 1f, 20000, 0.25f, 0, func_123(iLocal_175 == 2, fLocal_213, fLocal_215));
			}
			unk_0x3964C1CAAE858CB1(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
		}
		else
		{
			unk_0x3C1B180EE30D36EF(0, func_479(iLocal_175 == 2, Local_209, Local_211), 1f, 20000, 0.25f, 0, func_123(iLocal_175 == 2, 172.6813f, 142.6717f));
			unk_0x3964C1CAAE858CB1(0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 1);
		}
		unk_0x19F29730874AD6F1(uLocal_173);
		unk_0x9B6EC2CECE1010EF(*uParam0, uLocal_173);
		unk_0xCBA6B2B569DCAFD8(*uParam0, true);
	}
	unk_0x74528AC0906CBABE(iLocal_172);
}

Vector3 func_479(bool bParam0, struct<3> Param1, struct<3> Param2)
{
	if (bParam0)
	{
		return Param1;
	}
	return Param2;
}

void func_480(int iParam0, var uParam1)
{
	if (Global_94781 == iParam0)
	{
		Global_94782 = Global_94781;
		Global_94783 = uParam1;
		Global_94781 = 23;
	}
}

var func_481()
{
	return unk_0x14A1FF4316FA17CB(unk_0x2639A2323BEA8CC6());
}

void func_482(int iParam0)
{
	if (unk_0x95EF219D38B20CFF(*iParam0))
	{
		unk_0x2E352DDBBF674246(iParam0);
		*iParam0 = 0;
	}
}

void func_483(var uParam0)
{
	unk_0x2E352DDBBF674246(&uParam0);
}

void func_484()
{
	unk_0xD289B55B6AADBA10(1);
	unk_0xE9CB6ED57E83322C(0);
	unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
	unk_0x8CFF639CEFF5CF16(true);
}

void func_485()
{
	if (unk_0xAE06B9E39EBDE049(iLocal_36))
	{
		unk_0x315F7D8C33F0AB37(&iLocal_36);
	}
}

void func_486(var uParam0)
{
	int iVar0;
	
	iVar0 = *uParam0;
	if (unk_0xAE06B9E39EBDE049(iVar0))
	{
		if (!func_433(iVar0))
		{
			unk_0x58ADF88C51AAFDC5(iVar0, true, 0);
			unk_0x80250B8368A4E611(iVar0, true, 0);
			unk_0x6A8F948698B360B4(iVar0, false);
		}
	}
}

void func_487()
{
	int iVar0;
	
	if (unk_0x8DC2EFD1CECAA468("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_111858.f_9081 || func_472(0))
	{
		if (!func_495())
		{
			iVar0 = func_494();
			if (iVar0 != -1)
			{
				if (!func_489(iVar0))
				{
					return;
				}
				unk_0xBE20AB8238688965(&(Global_89707[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_488();
		}
	}
}

void func_488()
{
	Global_98990 = 1;
	if (unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1))
	{
		if (unk_0x7BCC91F3C1CF24E8(&Global_77065))
		{
			switch (func_90())
			{
				case 0:
					StringCopy(&Global_77065, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_77065, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_77065, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_77069, "", 16);
		}
		Global_98990 = 0;
	}
	else if (!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0x7BCC91F3C1CF24E8(&Global_77065))
		{
			switch (func_90())
			{
				case 0:
					StringCopy(&Global_77065, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_77065, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_77065, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_77069, "", 16);
		}
		Global_98990 = 0;
		unk_0xBE20AB8238688965(&(Global_98955.f_20), 25);
	}
}

int func_489(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_488();
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		unk_0xD1A73960312CB3DD(5000);
	}
	iVar0 = Global_89707[iParam0 /*5*/];
	iVar1 = Global_77102.f_109[iVar0 /*4*/];
	func_493(iVar1, 1);
	unk_0xD2B5F38167F36F20(unk_0x460153A63B9477BC(), 0);
	unk_0xD25321EB4A616B93(unk_0x460153A63B9477BC(), 0);
	func_490(&(Global_111858.f_2359.f_539), iVar1);
	if (Global_93130 == Global_98992)
	{
		Global_111858.f_9081.f_330[iVar1 /*6*/].f_1++;
	}
	if (!unk_0xCE990E643CD9D0E5(Global_89743[iVar1 /*34*/].f_15, 1))
	{
		if (!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			unk_0x0B5FDCC374F46B9E(0);
		}
	}
	Global_111858.f_9081.f_330[iVar1 /*6*/].f_2++;
	Global_93130 = Global_98992;
	if (iParam0 == -1)
	{
		if (Global_111858.f_9081)
		{
		}
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_89707[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_89707[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_490(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_111858.f_18529[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !unk_0xCE990E643CD9D0E5(Global_111858.f_9081.f_99.f_219[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_492(Global_111858.f_18529[iVar0], &Var2, &fVar3))
			{
				Global_111858.f_18529[iVar0] = 318;
				func_491(&(uParam0->f_2296[iVar0]));
				uParam0->f_2300[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[iVar0] = 0f;
				uParam0->f_2314[iVar0] = 0;
				uParam0->f_2318[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[iVar0] = 0;
				Global_96345[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_96345[iVar0 /*29*/].f_9 = 0f;
				Global_96345[iVar0 /*29*/].f_12 = 0f;
				Global_96345[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_96345[iVar0 /*29*/].f_10 = 0f;
				Global_96345[iVar0 /*29*/].f_13 = 0f;
				Global_96345[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_96345[iVar0 /*29*/].f_11 = 0f;
				Global_96345[iVar0 /*29*/].f_14 = 0f;
				Global_96345[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_96345[iVar0 /*29*/].f_26 = 0f;
				Global_96345[iVar0 /*29*/].f_20 = { 0f, 0f, 0f };
				Global_96345[iVar0 /*29*/].f_27 = 0f;
				Global_96345[iVar0 /*29*/].f_23 = { 0f, 0f, 0f };
				Global_96345[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

void func_491(var uParam0)
{
	*uParam0 = -15;
}

int func_492(int iParam0, var uParam1, float fParam2)
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_492(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_492(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_493(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_92940[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_92940[iParam0 /*2*/] = 0;
	}
}

int func_494()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (unk_0xCE990E643CD9D0E5(Global_89707[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_495()
{
	if (((Global_98955 == 13 || Global_98955 == 10) || Global_98955 == 11) || Global_98955 == 12)
	{
		return 0;
	}
	return 1;
}

void func_496(int iParam0, bool bParam1)
{
	if (unk_0x5AEB5DDFFAD43CA5(func_498()))
	{
		return;
	}
	if (bParam1)
	{
		if (!unk_0xFE6F151E15A69B3A(func_498(), func_481()))
		{
			return;
		}
		if (!unk_0x5AEB5DDFFAD43CA5(func_497()))
		{
			if (!unk_0xFE6F151E15A69B3A(func_497(), func_481()))
			{
				return;
			}
		}
	}
	if (Global_94781 == 23)
	{
		Global_94783 = 10;
		Global_94781 = iParam0;
	}
}

var func_497()
{
	return Global_94788;
}

int func_498()
{
	return Global_94787;
}

void func_499()
{
	if (iLocal_135 == 1)
	{
		return;
	}
	func_318();
	unk_0xD3B15675F54B6FA9("Darts");
	iLocal_135 = 1;
}

int func_500(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_93(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

