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
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	var uLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_64 = { 0, 0, 0 } ;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	int iLocal_69 = 0;
	bool bLocal_70 = 0;
	int iLocal_71 = 0;
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
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	bool bLocal_242 = 0;
	bool bLocal_243 = 0;
	struct<3> Local_244 = { 0, 0, 0 } ;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	char* sLocal_248 = NULL;
	char* sLocal_249 = NULL;
	char* sLocal_250 = NULL;
	char* sLocal_251 = NULL;
	char* sLocal_252 = NULL;
	bool bLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	char* sLocal_257 = NULL;
	char* sLocal_258 = NULL;
	char* sLocal_259 = NULL;
	char* sLocal_260 = NULL;
	char* sLocal_261 = NULL;
	char* sLocal_262 = NULL;
	char* sLocal_263 = NULL;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	struct<3> Local_271 = { 0, 0, 0 } ;
	struct<3> Local_272 = { 0, 0, 0 } ;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	bool bLocal_276 = 0;
	bool bLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	bool bLocal_282 = 0;
	struct<3> Local_283 = { 0, 0, 0 } ;
	bool bLocal_284 = 0;
	struct<2> Local_285 = { 0, 5 } ;
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
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 5;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
#endregion

void __EntryFunction__()
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_238 = 8000;
	iLocal_241 = 8;
	iLocal_243 = 1;
	sLocal_249 = "S_M_Y_RANGER_01_WHITE_FULL_01";
	sLocal_250 = "RANDOM@ARRESTS";
	sLocal_251 = "RANDOM@ARRESTS@BUSTED";
	iLocal_255 = 1;
	Local_63 = { ScriptParam_285.f_1[0 /*3*/] };
	if (unk_0xED06FD5709A59F02(11))
	{
		bLocal_70 = true;
		func_209();
		func_179();
	}
	if (vdist(2411.32f, 4958.76f, 45.19f, Local_63) < 10f)
	{
		iLocal_51 = 1;
	}
	else
	{
		iLocal_51 = 2;
	}
	if (func_136(Local_63, 15, iLocal_51, 0, 0))
	{
		func_131(15);
	}
	else
	{
		unk_0xD39E529EBE5DB04F();
	}
	while (true)
	{
		wait(0);
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			unk_0xDC54E6DC6372260F(unk_0x460153A63B9477BC());
		}
		switch (iLocal_46)
		{
			case 0:
				if ((unk_0x1116855A2A7A342C() && !func_130()) && !func_117())
				{
					if (func_114())
					{
						iLocal_46 = 1;
					}
				}
				else
				{
					func_179();
				}
				break;
			
			case 1:
				if (func_110())
				{
					unk_0x01A2F6B26EAAEAC5(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 0, true, 1);
					unk_0x34FEEAC2548C3789(0f);
					func_99(1);
					iLocal_46 = 2;
				}
				else if (!func_98(200f))
				{
					func_179();
				}
				break;
			
			case 2:
				if (func_98(1128792064))
				{
					func_1();
				}
				else
				{
					func_179();
				}
				break;
		}
	}
}

void func_1()
{
	var uVar0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	float fVar4;
	
	unk_0xBE20AB8238688965(&uVar0, 3);
	unk_0xBE20AB8238688965(&uVar0, 4);
	iVar3 = 0;
	func_97();
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
		unk_0x8342E6CB98CD545C(iLocal_53, 129, true);
	}
	if (func_96(iLocal_53))
	{
		if (unk_0x02275D26F97B0510(iLocal_53, 0))
		{
			bLocal_284 = true;
		}
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52) && (iLocal_47 != 2 && iLocal_47 != 1))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
		{
			switch (iLocal_50)
			{
				case 0:
					unk_0xB3D61EC1CD2AC612("copChasesCriminal", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					if (timera() > 10)
					{
						if (!bLocal_68)
						{
							if (unk_0x16BC17A8EDC701A2(iLocal_52, 1227113341) == 7)
							{
								unk_0xE021DCE1063D5DC2(iLocal_52, iLocal_53, -1, 1f, 3f, 1073741824, 0);
							}
						}
					}
					if (timera() > 4000)
					{
						if (!bLocal_68)
						{
							if (unk_0x16BC17A8EDC701A2(iLocal_53, 1805844857) == 7)
							{
								if (unk_0x16BC17A8EDC701A2(iLocal_53, -2017877118) == 1)
								{
									unk_0x3D1D83230EDB53BF(iLocal_53, 2, 1);
								}
								unk_0x8B18A80E8EB15510(iLocal_53, iLocal_52, 150f, -1, 0, 0);
							}
						}
					}
					fVar2 = unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(iLocal_52, true), unk_0x3E4D3CCC220BDFB1(iLocal_53, true), true);
					if (timera() > 8000 || fVar2 < 1.5f)
					{
						iVar3 = func_92();
						if (iVar3 == 1)
						{
							unk_0xE021DCE1063D5DC2(iLocal_52, iLocal_53, -1, 1f, 0.01f, 1073741824, 0);
						}
					}
					if (timera() > 30000 && fVar2 < 10f)
					{
						iVar3 = 1;
					}
					if (timera() > 2000)
					{
						if (iVar3 || iLocal_270 == 1)
						{
							if (!func_91())
							{
								if (func_76(&uLocal_72, "REARRAU", "REARR_PCUFF", 4, iLocal_246, 0, 0))
								{
								}
								bLocal_282 = (unk_0xCED6B5226244381C(iLocal_53) || unk_0x12C99794D883929B(iLocal_53));
								if (!unk_0x15D88F65956DC2F6(iLocal_52, joaat("weapon_pistol"), 0))
								{
									unk_0x92BD213E6A0E666B(iLocal_52, joaat("weapon_pistol"), -1, false, true);
								}
								unk_0x69C71C91F56D82B9(iLocal_52, joaat("weapon_pistol"), true);
								Local_64 = { unk_0x3E4D3CCC220BDFB1(iLocal_53, true) };
								unk_0x9B94F6169B0DAEFD(iLocal_52);
								unk_0x9DC06E2A59C5AEBB(&iLocal_67);
								if (!bLocal_282 && fVar2 > 2f)
								{
									unk_0x1CFE480FE307CCD9(0, Local_64.x, Local_64.f_1, (Local_64.f_2 + 4f), 1000, 1566631136);
								}
								unk_0xA785552633ED203B(0, iLocal_53, -1, 2048, 2);
								unk_0x0197C7AF76B72D09(0, iLocal_53, iLocal_53, 1f, 0, 3f, 1082130432, 1, 0, -957453492);
								unk_0xDEA135D03FA041A8(0, iLocal_53, 5000, 0);
								unk_0x19F29730874AD6F1(iLocal_67);
								unk_0x9B6EC2CECE1010EF(iLocal_52, iLocal_67);
								unk_0x4F83FEE4454169D4(&iLocal_67);
								unk_0xBB7976F6FB9C9DD2(iLocal_52);
								unk_0xCBA6B2B569DCAFD8(iLocal_52, true);
								settimera(0);
								iLocal_240 = unk_0x578C4EF320340AF7();
								if (bLocal_282)
								{
									unk_0x9B94F6169B0DAEFD(iLocal_53);
									unk_0xBD04E8CCD5F747C4(iLocal_53);
									iLocal_50 = 4;
								}
								else
								{
									iLocal_50 = 2;
								}
							}
							else if (!iLocal_270)
							{
								unk_0xE021DCE1063D5DC2(iLocal_52, iLocal_53, -1, 1f, 0.01f, 1073741824, 0);
								iLocal_270 = 1;
							}
						}
						else
						{
							func_75();
						}
					}
					else
					{
						unk_0xB3D61EC1CD2AC612("copChasesCriminal TIMERA() < 2000", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
					}
					if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
					{
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52) && !unk_0xA59F96B50B97E63C(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false), 0))
						{
							if (unk_0xA65352E7FEA59881(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false), iLocal_52))
							{
								unk_0x9B94F6169B0DAEFD(iLocal_52);
								iLocal_50 = 1;
								unk_0xC1C7DE768F7675E5(iLocal_52, 500);
							}
						}
					}
					break;
				
				case 1:
					if (unk_0x16BC17A8EDC701A2(iLocal_52, -982327190) == 7)
					{
						unk_0xE021DCE1063D5DC2(iLocal_52, iLocal_53, -1, 1f, 3f, 1073741824, 0);
						iLocal_50 = 0;
					}
					break;
				
				case 2:
					if ((unk_0x578C4EF320340AF7() - iLocal_240) > 1000)
					{
						Var1 = { 0f, 0f, (unk_0xEF7858F25585F853(iLocal_53) * 3f) };
						unk_0x3C1B180EE30D36EF(iLocal_53, Var1, 2f, -1, 1f, 1024, 1193033728);
						iLocal_50 = 3;
					}
					break;
				
				case 3:
					if ((unk_0x578C4EF320340AF7() - iLocal_240) > 4500)
					{
						iLocal_50 = 4;
					}
					break;
				
				case 4:
					bLocal_68 = true;
					unk_0x9DC06E2A59C5AEBB(&iLocal_67);
					unk_0x756D74A3EF0AB788(0, sLocal_250, "idle_2_hands_up", 2f, -8f, -1, 0, 0, 0, 0, 0);
					unk_0x756D74A3EF0AB788(0, sLocal_250, "kneeling_arrest_idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
					unk_0x19F29730874AD6F1(iLocal_67);
					unk_0x9B6EC2CECE1010EF(iLocal_53, iLocal_67);
					unk_0x4F83FEE4454169D4(&iLocal_67);
					unk_0xBB7976F6FB9C9DD2(iLocal_53);
					unk_0xCBA6B2B569DCAFD8(iLocal_53, true);
					unk_0xD5D11F714F236D78(iLocal_53, 1);
					iLocal_50 = 5;
					break;
				
				case 5:
					if (iLocal_48 == 3)
					{
						if (unk_0x16BC17A8EDC701A2(iLocal_52, 242628503) == 7)
						{
							unk_0x9B94F6169B0DAEFD(iLocal_52);
							if (!unk_0x15D88F65956DC2F6(iLocal_52, joaat("weapon_pistol"), 0))
							{
								unk_0x92BD213E6A0E666B(iLocal_52, joaat("weapon_pistol"), -1, false, true);
							}
							unk_0x69C71C91F56D82B9(iLocal_52, joaat("weapon_pistol"), true);
							unk_0x9DC06E2A59C5AEBB(&iLocal_67);
							unk_0xDEA135D03FA041A8(0, iLocal_53, -1, 0);
							unk_0x19F29730874AD6F1(iLocal_67);
							unk_0x9B6EC2CECE1010EF(iLocal_52, iLocal_67);
							unk_0x4F83FEE4454169D4(&iLocal_67);
							unk_0xCBA6B2B569DCAFD8(iLocal_52, true);
							iLocal_50 = 6;
						}
					}
					break;
				
				case 6:
					if (unk_0x80FF6C016CDB0FAF(iLocal_55, 0) && !unk_0x5AEB5DDFFAD43CA5(iLocal_54))
					{
						unk_0x0A985DBE2A5EEE65(iLocal_55, 1);
						if (unk_0x16BC17A8EDC701A2(iLocal_52, -2017877118) == 7)
						{
							if (unk_0x16BC17A8EDC701A2(iLocal_54, -1273030092) == 7)
							{
								if (unk_0xC7C55C82599F980F(iLocal_53, iLocal_55, 2, 0, false))
								{
									if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
									{
										if (!unk_0xACBCFA3095C5A434(iLocal_53, iLocal_55))
										{
											if (!unk_0xF83D0A2EC884A4DD(iLocal_53, 0))
											{
												if (unk_0x16BC17A8EDC701A2(iLocal_53, -1794415470) == 7)
												{
													unk_0x9DC06E2A59C5AEBB(&iLocal_67);
													unk_0x756D74A3EF0AB788(0, sLocal_250, "kneeling_arrest_get_up", 8f, -2f, -1, 0, 0, 0, 0, 0);
													unk_0x19F29730874AD6F1(iLocal_67);
													unk_0x9B6EC2CECE1010EF(iLocal_53, iLocal_67);
													unk_0x4F83FEE4454169D4(&iLocal_67);
													unk_0xEFBCE8F8316F89EA(0, iLocal_66, iLocal_65);
													unk_0xEFBCE8F8316F89EA(0, iLocal_65, iLocal_66);
												}
											}
										}
									}
									if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52))
									{
										unk_0xB2C1D6D444EE963F(iLocal_52);
										if (!unk_0xF83D0A2EC884A4DD(iLocal_52, 0))
										{
											if (unk_0x80FF6C016CDB0FAF(iLocal_55, 0))
											{
												if (!func_91())
												{
													if (func_76(&uLocal_72, "REARRAU", "REARR_INCAR", 4, iLocal_246, 0, 0))
													{
														if (func_74(iLocal_52, iLocal_55) == 2)
														{
															if (unk_0x04055E36623F131B(iLocal_54, iLocal_53, 180f))
															{
																Local_283 = { 2.978f, -0.75f, 1f };
															}
															else
															{
																Local_283 = { 2.978f, 0.75f, 1f };
															}
														}
														else if (unk_0x04055E36623F131B(iLocal_54, iLocal_53, 180f))
														{
															Local_283 = { -2.978f, -0.75f, 1f };
														}
														else
														{
															Local_283 = { -2.978f, 0.75f, 1f };
														}
														unk_0x9DC06E2A59C5AEBB(&iLocal_67);
														unk_0x88AEDBE3A7557929(0, unk_0x7EC595B99EA7C4B1(iLocal_55, Local_283), iLocal_53, 0.75f, false, 0.5f, 4f, true, 0, 0, -957453492, 60000);
														unk_0xDEA135D03FA041A8(0, iLocal_53, -1, 0);
														unk_0x19F29730874AD6F1(iLocal_67);
														unk_0x9B6EC2CECE1010EF(iLocal_52, iLocal_67);
														unk_0x4F83FEE4454169D4(&iLocal_67);
														unk_0xCBA6B2B569DCAFD8(iLocal_52, true);
														unk_0x8777F28BE786D09D(iLocal_55, 0);
														iLocal_238 = 8000;
														settimerb(0);
														iLocal_269 = unk_0x578C4EF320340AF7();
														iLocal_50 = 7;
													}
												}
											}
										}
									}
								}
								else
								{
									func_73();
								}
							}
						}
					}
					break;
				
				case 7:
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52))
					{
						if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_52, 35f, 35f, 35f, 0, 1, 0))
						{
							if ((unk_0x578C4EF320340AF7() - iLocal_269) > 8000)
							{
								if (!func_91())
								{
									unk_0xA785552633ED203B(iLocal_52, unk_0x9B0761B4C3EB8BC7(), 6000, 2048, 2);
									func_76(&uLocal_72, "REARRAU", "REARR_PLEAVE", 4, iLocal_246, 0, 0);
									iLocal_238 = 8000;
									iLocal_269 = unk_0x578C4EF320340AF7();
								}
							}
						}
						if (unk_0x80FF6C016CDB0FAF(iLocal_55, 0))
						{
							if (iLocal_62)
							{
								if (func_74(iLocal_52, iLocal_55) == 2)
								{
									unk_0xC584E49FC3559A86(iLocal_53, iLocal_55, -1, 2, 1f, 1, 0);
								}
								else
								{
									unk_0xC584E49FC3559A86(iLocal_53, iLocal_55, -1, 1, 1f, 1, 0);
								}
								iLocal_50 = 8;
							}
							else if (iLocal_61)
							{
								fVar4 = unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(iLocal_53, true), unk_0x3E4D3CCC220BDFB1(iLocal_55, true), true);
								if (fVar4 < 4f && iLocal_273 == 0)
								{
									unk_0x3EB758EF32893357(iLocal_53, iLocal_55, 60000, 0.5f, Local_283.x, Local_283.f_1, 1f, 1);
									iLocal_273 = 1;
								}
								else if (fVar4 < 3f)
								{
									unk_0x9B94F6169B0DAEFD(iLocal_53);
									iLocal_62 = 1;
								}
							}
							else if (!unk_0x9934470AA0A08B57(iLocal_53, sLocal_250, "kneeling_arrest_get_up", 3))
							{
								if (func_74(iLocal_52, iLocal_55) == 2)
								{
									Local_283 = { 1.578f, -0.5f, 1f };
								}
								else
								{
									Local_283 = { -1.578f, -0.5f, 1f };
								}
								unk_0x3EB758EF32893357(iLocal_53, iLocal_55, 60000, 0.5f, Local_283.x, Local_283.f_1, 1f, 1);
								if (bLocal_284)
								{
									unk_0xA3AB9D48A7E8EA48(iLocal_53, "MOVE_M@BAIL_BOND_TAZERED", 1048576000);
								}
								else
								{
									unk_0xA3AB9D48A7E8EA48(iLocal_53, "MOVE_M@BAIL_BOND_NOT_TAZERED", 1048576000);
								}
								iLocal_61 = 1;
							}
						}
					}
					break;
				
				case 8:
					if (unk_0x80FF6C016CDB0FAF(iLocal_55, 0))
					{
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54))
						{
							if (unk_0xACBCFA3095C5A434(iLocal_53, iLocal_55))
							{
								if (unk_0x8F678487EEBD8CE4(iLocal_56))
								{
									unk_0x93370FA10F15BE44(&iLocal_56);
								}
								if (unk_0x8F678487EEBD8CE4(iLocal_57))
								{
									unk_0x93370FA10F15BE44(&iLocal_57);
								}
								if (unk_0xACBCFA3095C5A434(iLocal_52, iLocal_55))
								{
									unk_0xD8C1C38EE8BC2AC6(iLocal_54, iLocal_55, 10f, 786603);
									unk_0xCBA6B2B569DCAFD8(iLocal_54, true);
									unk_0x4E65320BC9AD521C(iLocal_52, false);
									func_179();
								}
								else if (unk_0x16BC17A8EDC701A2(iLocal_52, -1794415470) == 7)
								{
									unk_0x9B94F6169B0DAEFD(iLocal_52);
									unk_0xC584E49FC3559A86(iLocal_52, iLocal_55, 20000, 0, 1f, 1, 0);
									unk_0xCBA6B2B569DCAFD8(iLocal_52, true);
								}
							}
						}
					}
					break;
				}
			}
	}
	func_59();
	if (unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
	}
	if (unk_0x5AEB5DDFFAD43CA5(iLocal_52))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
		{
			if (iLocal_47 == 2)
			{
				func_12();
			}
			else
			{
				if (iLocal_47 == 1 || iLocal_47 == 3)
				{
					if (!func_91())
					{
						if (unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(iLocal_53, true), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), true) < 20f)
						{
							func_76(&uLocal_72, "REARRAU", sLocal_266, 4, iLocal_246, 0, 0);
						}
					}
				}
				if (unk_0x9934470AA0A08B57(iLocal_53, sLocal_250, "kneeling_arrest_idle", 3))
				{
					unk_0x9DC06E2A59C5AEBB(&iLocal_67);
					unk_0x756D74A3EF0AB788(0, sLocal_250, "kneeling_arrest_get_up", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0x8B18A80E8EB15510(0, unk_0x9B0761B4C3EB8BC7(), 150f, -1, 0, 0);
					unk_0x19F29730874AD6F1(iLocal_67);
					unk_0x9B6EC2CECE1010EF(iLocal_53, iLocal_67);
					unk_0x4F83FEE4454169D4(&iLocal_67);
				}
				else
				{
					unk_0x8B18A80E8EB15510(iLocal_53, unk_0x9B0761B4C3EB8BC7(), 150f, -1, 0, 0);
					unk_0xCBA6B2B569DCAFD8(iLocal_53, true);
				}
				wait(0);
				if (iLocal_47 == 0)
				{
					iLocal_47 = 2;
				}
				func_179();
			}
		}
	}
	if (unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
		if (!bLocal_59)
		{
			if (func_11())
			{
				func_3(0);
			}
		}
	}
	if (iLocal_50 == 5 || iLocal_50 == 6)
	{
		if (!bLocal_59)
		{
			if (iLocal_47 == 3)
			{
				if (func_11())
				{
					func_3(0);
				}
			}
			else
			{
				func_3(1);
			}
		}
	}
	func_2();
}

void func_2()
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { 40f, 40f, 20f };
	if (unk_0x578C4EF320340AF7() > iLocal_247 + 1000)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52))
		{
			if (!unk_0x910DFF8E55ABB8EC(iLocal_52, unk_0x9B0761B4C3EB8BC7(), Var1, 0, 1, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
		{
			if (!unk_0x910DFF8E55ABB8EC(iLocal_53, unk_0x9B0761B4C3EB8BC7(), Var1, 0, 1, 0))
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			iLocal_246 = 1;
		}
		else
		{
			iLocal_246 = 0;
		}
		iLocal_247 = unk_0x578C4EF320340AF7();
	}
}

void func_3(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	if (bParam0)
	{
		sVar0 = "radio_enter";
		sVar1 = "radio_chatter";
		sVar2 = "radio_exit";
	}
	else
	{
		sVar0 = "generic_radio_enter";
		sVar1 = "generic_radio_chatter";
		sVar2 = "generic_radio_exit";
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52))
	{
		switch (iLocal_48)
		{
			case 0:
				if ((iLocal_237 == 3 || iLocal_50 == 5) || iLocal_50 == 6)
				{
					if (!func_91())
					{
						unk_0x9B94F6169B0DAEFD(iLocal_52);
						unk_0x9DC06E2A59C5AEBB(&iLocal_67);
						unk_0x439AF5D920F78274(0, unk_0x3E4D3CCC220BDFB1(iLocal_53, false), 10000, 0, 2);
						unk_0x756D74A3EF0AB788(0, sLocal_250, sVar0, 8f, -4f, -1, 0, 0, 0, 0, 0);
						unk_0x756D74A3EF0AB788(0, sLocal_250, sVar1, 16f, -8f, -1, 1, 0, 0, 0, 0);
						unk_0x19F29730874AD6F1(iLocal_67);
						unk_0x9B6EC2CECE1010EF(iLocal_52, iLocal_67);
						unk_0x4F83FEE4454169D4(&iLocal_67);
						iLocal_48 = 1;
					}
				}
				break;
			
			case 1:
				if (unk_0x9934470AA0A08B57(iLocal_52, sLocal_250, sVar1, 3))
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
					{
						if (!func_91())
						{
							if (func_76(&uLocal_72, "REARRAU", "REARR_PRAD1", 4, iLocal_246, 0, 0))
							{
								iLocal_48 = 2;
							}
						}
					}
					else if (func_10())
					{
						if (!func_91())
						{
							if (func_76(&uLocal_72, "REARRAU", "REARR_PRAD2", 4, iLocal_246, 0, 0))
							{
								iLocal_48 = 2;
							}
						}
					}
				}
				break;
			
			case 2:
				if (!func_91())
				{
					if (func_10())
					{
						if (unk_0x80FF6C016CDB0FAF(iLocal_55, 0))
						{
							unk_0xC8C76D5126102B09(iLocal_55, 0);
							unk_0x8777F28BE786D09D(iLocal_55, 1);
						}
						unk_0x9B94F6169B0DAEFD(iLocal_52);
						unk_0x9DC06E2A59C5AEBB(&iLocal_67);
						unk_0x756D74A3EF0AB788(0, sLocal_250, sVar2, 8f, -1.5f, -1, 0, 0, 0, 0, 0);
						unk_0x19F29730874AD6F1(iLocal_67);
						unk_0x9B6EC2CECE1010EF(iLocal_52, iLocal_67);
						unk_0x4F83FEE4454169D4(&iLocal_67);
						unk_0x1322CA891C5DF18A(iLocal_52, 0, 0);
						func_8();
						iLocal_48 = 3;
					}
				}
				break;
			
			case 3:
				if (!bLocal_68)
				{
					func_7();
				}
				if (unk_0xAE06B9E39EBDE049(iLocal_53) || !unk_0xA59F96B50B97E63C(iLocal_53, 0))
				{
					if (unk_0xA65352E7FEA59881(unk_0x9B0761B4C3EB8BC7(), iLocal_53))
					{
						if (!func_91())
						{
							func_76(&uLocal_72, "REARRAU", "REARR_PWTF", 4, iLocal_246, 0, 0);
						}
					}
				}
				if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_52, 35f, 35f, 35f, 0, 1, 0))
				{
					unk_0xF484013CCAFEC04B(iLocal_52, 1, unk_0x9B0761B4C3EB8BC7(), 31086, 0f, 0f, 0f, 0, -1, -1);
					unk_0xF484013CCAFEC04B(unk_0x9B0761B4C3EB8BC7(), 1, iLocal_52, 31086, 0f, 0f, 0f, 0, -1, -1);
					if (timerb() > iLocal_238 || iLocal_254)
					{
						if (iLocal_47 == 3 || iLocal_47 == 0)
						{
							if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
							{
								if (iLocal_238 == 8000 || iLocal_254)
								{
									if (bLocal_253)
									{
										func_6();
									}
									else
									{
										func_4();
									}
								}
								else if (!func_91())
								{
									unk_0xA785552633ED203B(iLocal_52, unk_0x9B0761B4C3EB8BC7(), 500, 2048, 2);
									func_76(&uLocal_72, "REARRAU", "REARR_PLEAVE", 4, iLocal_246, 0, 0);
									iLocal_238 = 8000;
								}
							}
							else if (iLocal_238 == 8000)
							{
								if (!func_91())
								{
									func_76(&uLocal_72, "REARRAU", "REARR_PRA2", 4, iLocal_246, 0, 0);
									iLocal_238 = 20000;
								}
							}
							else if (!func_91())
							{
								func_76(&uLocal_72, "REARRAU", "REARR_PRA2", 4, iLocal_246, 0, 0);
								iLocal_238 = 8000;
							}
							settimerb(0);
						}
						else
						{
							if (unk_0x5AEB5DDFFAD43CA5(iLocal_53))
							{
								if (!func_91())
								{
									func_76(&uLocal_72, "REARRAU", "REARR_PRA2", 4, iLocal_246, 0, 0);
									iLocal_238 = 30000;
								}
							}
							else if (!func_91())
							{
								unk_0xA785552633ED203B(iLocal_52, unk_0x9B0761B4C3EB8BC7(), 6000, 2048, 2);
								func_76(&uLocal_72, "REARRAU", "REARR_PLEAVE", 4, iLocal_246, 0, 0);
								iLocal_238 = unk_0x344C570D6F8700DF(8, 22);
								iLocal_238 *= 30000;
							}
							settimerb(0);
						}
					}
				}
				if (iLocal_50 != 8)
				{
					if (unk_0x80FF6C016CDB0FAF(iLocal_55, 0))
					{
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
						{
							if (!unk_0xE0B3BC41DDA88DF0(iLocal_53, iLocal_55, false))
							{
								func_73();
							}
						}
					}
					else
					{
						func_73();
					}
				}
				break;
			}
	}
}

void func_4()
{
	if (!iLocal_254)
	{
		switch (unk_0x344C570D6F8700DF(0, 3))
		{
			case 0:
				sLocal_252 = "idle_a";
				break;
			
			case 1:
				sLocal_252 = "idle_b";
				break;
			
			case 2:
				sLocal_252 = "idle_c";
				break;
		}
		unk_0x9DC06E2A59C5AEBB(&iLocal_67);
		unk_0x756D74A3EF0AB788(0, sLocal_251, "enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x756D74A3EF0AB788(0, sLocal_251, sLocal_252, 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x756D74A3EF0AB788(0, sLocal_251, "exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x756D74A3EF0AB788(0, sLocal_250, "kneeling_arrest_idle", 8f, -8f, -1, 9, 0, 0, 0, 0);
		unk_0x19F29730874AD6F1(iLocal_67);
		unk_0x9B6EC2CECE1010EF(iLocal_53, iLocal_67);
		unk_0x4F83FEE4454169D4(&iLocal_67);
		iLocal_254 = 1;
	}
	else if (unk_0x9934470AA0A08B57(iLocal_53, sLocal_251, "enter", 3))
	{
		if (func_5())
		{
			func_76(&uLocal_72, "REARRAU", "REARR_PRAND", 4, iLocal_246, 0, 0);
		}
	}
	else if (unk_0x9934470AA0A08B57(iLocal_53, sLocal_251, "exit", 3))
	{
	}
	else if (unk_0x9934470AA0A08B57(iLocal_53, sLocal_251, sLocal_252, 3))
	{
		func_76(&uLocal_72, "REARRAU", sLocal_264, 4, iLocal_246, 0, 0);
	}
	else
	{
		func_8();
	}
}

int func_5()
{
	if (unk_0x578C4EF320340AF7() > iLocal_256 + 6000)
	{
		iLocal_256 = unk_0x578C4EF320340AF7();
		return 1;
	}
	return 0;
}

void func_6()
{
	if (!iLocal_254)
	{
		unk_0x9DC06E2A59C5AEBB(&iLocal_67);
		unk_0x756D74A3EF0AB788(0, sLocal_250, "radio_enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x756D74A3EF0AB788(0, sLocal_250, "radio_chatter", 8f, -4f, -1, 0, 0, 0, 0, 0);
		unk_0x756D74A3EF0AB788(0, sLocal_250, "radio_exit", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
		unk_0xDEA135D03FA041A8(0, iLocal_53, -1, 0);
		unk_0x19F29730874AD6F1(iLocal_67);
		unk_0x9B6EC2CECE1010EF(iLocal_52, iLocal_67);
		unk_0x4F83FEE4454169D4(&iLocal_67);
		iLocal_254 = 1;
	}
	else if (unk_0x9934470AA0A08B57(iLocal_52, sLocal_250, "radio_chatter", 3))
	{
		if (func_5())
		{
			func_76(&uLocal_72, "REARRAU", "REARR_PRAD3", 4, iLocal_246, 0, 0);
		}
	}
	else if (unk_0x9934470AA0A08B57(iLocal_52, sLocal_250, "radio_exit", 3))
	{
		iLocal_255 = 0;
		func_8();
	}
}

void func_7()
{
	switch (iLocal_49)
	{
		case 0:
			if (!bLocal_68)
			{
				if (iLocal_47 == 3)
				{
					iLocal_49 = 1;
				}
				else if (iLocal_47 == 0)
				{
					iLocal_49 = 1;
				}
				unk_0xA59F96B50B97E63C(iLocal_52, 0);
				unk_0xA59F96B50B97E63C(iLocal_53, 0);
				if (unk_0xAE06B9E39EBDE049(iLocal_52) && unk_0xAE06B9E39EBDE049(iLocal_53))
				{
					unk_0x3EB758EF32893357(iLocal_52, iLocal_53, -1, 3f, 0f, 0f, 1f, 0);
				}
				settimerb(0);
			}
			break;
		
		case 1:
			if (unk_0x8F678487EEBD8CE4(iLocal_56))
			{
				unk_0x93370FA10F15BE44(&iLocal_56);
			}
			iLocal_49 = 2;
			iLocal_238 = 8000;
			iLocal_279 = unk_0x578C4EF320340AF7();
			break;
		
		case 2:
			if (unk_0x80FF6C016CDB0FAF(iLocal_55, 0))
			{
				if ((unk_0x578C4EF320340AF7() - iLocal_279) > 20000)
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54))
					{
						if (unk_0x16BC17A8EDC701A2(iLocal_54, -1273030092) == 7)
						{
							unk_0xC584E49FC3559A86(iLocal_52, iLocal_55, -1, 0, 1f, 1, 0);
							iLocal_49 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			if (unk_0x80FF6C016CDB0FAF(iLocal_55, 0))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54))
				{
					if (unk_0xACBCFA3095C5A434(iLocal_52, iLocal_55))
					{
						unk_0xD8C1C38EE8BC2AC6(iLocal_54, iLocal_55, 10f, 786603);
						unk_0xCBA6B2B569DCAFD8(iLocal_54, true);
						func_179();
					}
				}
			}
			break;
	}
}

void func_8()
{
	bLocal_253 = func_9();
	bLocal_253 = iLocal_255;
	iLocal_238 = 20000;
	iLocal_254 = 0;
}

int func_9()
{
	if (unk_0xCE990E643CD9D0E5(unk_0x344C570D6F8700DF(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_10()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	var uVar3;
	int iVar4;
	
	iVar4 = joaat("pranger");
	if (unk_0x80FF6C016CDB0FAF(iLocal_55, 0))
	{
		return 1;
	}
	unk_0x78FCB2E22C41B9D5(iVar4);
	if (unk_0x7D167B9A0CCDA347(iVar4))
	{
		if (unk_0x204D69DA02AB1105(unk_0x3E4D3CCC220BDFB1(iLocal_52, false), 1, &Var0, 1, 3f, 0f))
		{
			if (unk_0xB4A07AE91EF58820(&Var0, &Var2, &uVar3, 0f, 180f, 50f, true, 1, 1))
			{
				iLocal_55 = unk_0xCE4780E24AFDFBF9(iVar4, Var2, 0f, true, true, false);
				iLocal_54 = unk_0x6A7A2C83BD302BA4(iLocal_55, 6, joaat("s_m_y_ranger_01"), -1, 1, true);
				unk_0x694113444F21E39F(iLocal_54, 294, true);
				if (!unk_0x15D88F65956DC2F6(iLocal_54, joaat("weapon_pistol"), 0))
				{
					unk_0x92BD213E6A0E666B(iLocal_54, joaat("weapon_pistol"), -1, false, true);
				}
				unk_0x69C71C91F56D82B9(iLocal_54, joaat("weapon_pistol"), true);
				unk_0xD3D9D7C84656DAE5(iLocal_54, iLocal_65);
				unk_0x5DC21979EC6C531F(iLocal_55, 3);
				unk_0x4E65320BC9AD521C(iLocal_54, true);
				unk_0xB11D151E210D4FAC(iLocal_55, 1084227584);
				unk_0x1AB8D7ECA49F6A6C(iLocal_55, true);
				unk_0x756046956300306A(iLocal_55, 1);
				Var0 = { unk_0x3E4D3CCC220BDFB1(iLocal_55, true) };
				Var1 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true) - Var0 };
				unk_0xE922BAA80E8F9324(iLocal_55, unk_0x9075769DD4F148B7(Var1.x, Var1.f_1));
				unk_0x204D69DA02AB1105(unk_0x3E4D3CCC220BDFB1(iLocal_52, false), 1, &Var0, 1, 3f, 0f);
				if (unk_0x272784C60C397DB6(Var0, 2528.563f, 2639.115f, 36.9446f, true) < 75f)
				{
					Var0 = { 2473.601f, 2496.765f, 40.87f };
				}
				if (unk_0x272784C60C397DB6(2538.71f, 2592.007f, 36.9446f, Var0, true) < 16f)
				{
					Var0 = { 2473.601f, 2496.765f, 40.87f };
				}
				unk_0x47107451B20C1093(iLocal_54, iLocal_55, Var0, 4, 7f, 786471, 5f, -1f, 1);
				unk_0x316E0389ADF56E20(iLocal_55, 4f);
				unk_0x8777F28BE786D09D(iLocal_55, 1);
				iLocal_71 = 1;
				unk_0xD77467CC38DD0DE2(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_11()
{
	if (iLocal_47 != 3)
	{
		iLocal_237 = 3;
	}
	switch (iLocal_237)
	{
		case 0:
			if (unk_0x16BC17A8EDC701A2(iLocal_52, 242628503) == 7 || unk_0x578C4EF320340AF7() > iLocal_240 + 15000)
			{
				if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_52, 25f, 25f, 25f, 0, 1, 0))
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52))
					{
						unk_0x9B94F6169B0DAEFD(iLocal_52);
						unk_0x9DC06E2A59C5AEBB(&iLocal_67);
						if (!unk_0xA59F96B50B97E63C(iLocal_53, 0))
						{
							unk_0xE021DCE1063D5DC2(0, iLocal_53, -1, 3.5f, 2f, 1073741824, 0);
						}
						unk_0xD08E9EAF091A1AAB(0, unk_0x9B0761B4C3EB8BC7(), 2000);
						unk_0x19F29730874AD6F1(iLocal_67);
						unk_0x9B6EC2CECE1010EF(iLocal_52, iLocal_67);
						unk_0x4F83FEE4454169D4(&iLocal_67);
						iLocal_237 = 1;
					}
				}
				else
				{
					iLocal_237 = 3;
				}
			}
			break;
		
		case 1:
			if (unk_0x16BC17A8EDC701A2(iLocal_52, 242628503) == 1)
			{
				if (unk_0x18B8D57C51EEB5CC(iLocal_52) > 0)
				{
					if (!func_91())
					{
						if (iLocal_239 < 2)
						{
							func_76(&uLocal_72, "REARRAU", "REARR_PTHANK", 4, iLocal_246, 0, 0);
							if (unk_0x8F678487EEBD8CE4(iLocal_56))
							{
								unk_0x3060C53EAE54BBE7(iLocal_56, true);
							}
						}
						else
						{
							func_76(&uLocal_72, "REARRAU", "REARR_PHELP", 4, iLocal_246, 0, 0);
						}
						iLocal_237 = 2;
					}
				}
			}
			else if (!func_91())
			{
				if (iLocal_239 < 2)
				{
					func_76(&uLocal_72, "REARRAU", "REARR_PTHANK", 4, iLocal_246, 0, 0);
					if (unk_0x8F678487EEBD8CE4(iLocal_56))
					{
						unk_0x3060C53EAE54BBE7(iLocal_56, true);
					}
				}
				else
				{
					func_76(&uLocal_72, "REARRAU", "REARR_PHELP", 4, iLocal_246, 0, 0);
				}
				iLocal_237 = 2;
			}
			break;
		
		case 2:
			if (!func_91())
			{
				iLocal_237 = 3;
			}
			unk_0xD08E9EAF091A1AAB(iLocal_52, unk_0x9B0761B4C3EB8BC7(), 100);
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_12()
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = unk_0xCDF860E56BBCC6B4(iLocal_53, unk_0x9B0761B4C3EB8BC7(), 1);
	bVar1 = func_58();
	if (bVar1)
	{
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
		if (!bVar0)
		{
			if (!bVar1)
			{
				if (iLocal_47 == 2 || bLocal_68 == 1)
				{
					switch (iLocal_241)
					{
						case 8:
							unk_0xB3D61EC1CD2AC612("criminal_thanks 8", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							unk_0x3060C53EAE54BBE7(iLocal_57, true);
							if (!unk_0xA59F96B50B97E63C(iLocal_53, 0) && unk_0x9934470AA0A08B57(iLocal_53, sLocal_250, "kneeling_arrest_idle", 3))
							{
								unk_0x9DC06E2A59C5AEBB(&iLocal_67);
								unk_0x756D74A3EF0AB788(0, sLocal_250, "kneeling_arrest_get_up", 8f, -8f, -1, 0, 0, 0, 0, 0);
								unk_0x19F29730874AD6F1(iLocal_67);
								unk_0x9B6EC2CECE1010EF(iLocal_53, iLocal_67);
								unk_0x4F83FEE4454169D4(&iLocal_67);
								iLocal_241 = 9;
							}
							else
							{
								iLocal_241 = 3;
							}
							break;
						
						case 9:
							unk_0xB3D61EC1CD2AC612("criminal_thanks 9", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x16BC17A8EDC701A2(iLocal_53, 242628503) == 7)
							{
								iLocal_241 = 0;
							}
							break;
						
						case 0:
							unk_0xB3D61EC1CD2AC612("criminal_thanks 0", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x910DFF8E55ABB8EC(iLocal_53, unk_0x9B0761B4C3EB8BC7(), 75f, 75f, 75f, 0, 1, 0))
							{
								unk_0x44225B42FE388400(iLocal_53, true);
								iLocal_241 = 3;
							}
							break;
						
						case 1:
							unk_0xB3D61EC1CD2AC612("criminal_thanks 1", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0xC2169C00B643278B(iLocal_53, unk_0x3E4D3CCC220BDFB1(iLocal_52, false), 4f, 4f, 3f, false, true, 0))
							{
								iLocal_241 = 2;
							}
							else
							{
								unk_0x9B94F6169B0DAEFD(iLocal_53);
								unk_0x9DC06E2A59C5AEBB(&iLocal_67);
								unk_0x439AF5D920F78274(0, unk_0x3E4D3CCC220BDFB1(iLocal_52, false), 1000, 0, 2);
								unk_0x3C1B180EE30D36EF(0, unk_0x3E4D3CCC220BDFB1(iLocal_52, false), 2f, -1, 3f, 0, 1193033728);
								unk_0x19F29730874AD6F1(iLocal_67);
								unk_0x9B6EC2CECE1010EF(iLocal_53, iLocal_67);
								unk_0x4F83FEE4454169D4(&iLocal_67);
								iLocal_241 = 2;
							}
							break;
						
						case 2:
							unk_0xB3D61EC1CD2AC612("criminal_thanks 2", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0xC2169C00B643278B(iLocal_53, unk_0x3E4D3CCC220BDFB1(iLocal_52, false), 4f, 4f, 3f, false, true, 0))
							{
								if (unk_0x16BC17A8EDC701A2(iLocal_53, 242628503) == 7 || func_76(&uLocal_72, "REARRAU", sLocal_263, 4, iLocal_246, 0, 0))
								{
									iLocal_241 = 6;
								}
							}
							else if (unk_0x16BC17A8EDC701A2(iLocal_53, 242628503) == 7)
							{
								unk_0x9DC06E2A59C5AEBB(&iLocal_67);
								unk_0x439AF5D920F78274(0, unk_0x3E4D3CCC220BDFB1(iLocal_52, false), 1000, 0, 2);
								unk_0x3C1B180EE30D36EF(0, unk_0x3E4D3CCC220BDFB1(iLocal_52, false), 2f, -1, 3f, 0, 1193033728);
								unk_0x19F29730874AD6F1(iLocal_67);
								unk_0x9B6EC2CECE1010EF(iLocal_53, iLocal_67);
								unk_0x4F83FEE4454169D4(&iLocal_67);
							}
							break;
						
						case 3:
							unk_0xB3D61EC1CD2AC612("criminal_thanks 3", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x910DFF8E55ABB8EC(iLocal_53, unk_0x9B0761B4C3EB8BC7(), 5f, 5f, 3f, 0, 1, 0))
							{
								iLocal_241 = 4;
							}
							else if (unk_0x910DFF8E55ABB8EC(iLocal_53, unk_0x9B0761B4C3EB8BC7(), 75f, 75f, 75f, 0, 1, 0))
							{
								if (!func_91())
								{
									unk_0x9B94F6169B0DAEFD(iLocal_53);
									unk_0x9DC06E2A59C5AEBB(&iLocal_67);
									unk_0xE021DCE1063D5DC2(0, unk_0x9B0761B4C3EB8BC7(), -1, 8f, 2f, 1073741824, 0);
									unk_0x19F29730874AD6F1(iLocal_67);
									unk_0x9B6EC2CECE1010EF(iLocal_53, iLocal_67);
									unk_0x4F83FEE4454169D4(&iLocal_67);
									iLocal_241 = 4;
								}
							}
							else
							{
								iLocal_241 = 6;
							}
							break;
						
						case 4:
							unk_0xB3D61EC1CD2AC612("criminal_thanks 4", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x910DFF8E55ABB8EC(iLocal_53, unk_0x9B0761B4C3EB8BC7(), 9f, 9f, 9f, 0, 1, 0))
							{
								iLocal_280 = unk_0x578C4EF320340AF7();
								iLocal_241 = 7;
							}
							break;
						
						case 7:
							unk_0xB3D61EC1CD2AC612("criminal_thanks 7", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!unk_0x60D775F2D5B6439B(iLocal_53, unk_0x9B0761B4C3EB8BC7()))
							{
								unk_0xA785552633ED203B(iLocal_53, unk_0x9B0761B4C3EB8BC7(), -1, 2064, 2);
							}
							if (!unk_0x04055E36623F131B(iLocal_53, unk_0x9B0761B4C3EB8BC7(), 30f))
							{
								unk_0xD08E9EAF091A1AAB(iLocal_53, unk_0x9B0761B4C3EB8BC7(), -1);
							}
							if ((unk_0x578C4EF320340AF7() - iLocal_280) > 2000)
							{
								iLocal_241 = 5;
							}
							break;
						
						case 5:
							unk_0xB3D61EC1CD2AC612("criminal_thanks 5", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (unk_0x9934470AA0A08B57(iLocal_53, sLocal_250, "Thanks_Male_05", 3) || unk_0x16BC17A8EDC701A2(iLocal_53, 242628503) == 7)
							{
								if (!func_91())
								{
									if (iLocal_239 < 2)
									{
										func_76(&uLocal_72, "REARRAU", sLocal_258, 4, iLocal_246, 0, 0);
										unk_0x756D74A3EF0AB788(iLocal_53, sLocal_250, "Thanks_Male_05", 16f, -16f, -1, 16, 0, 0, 0, 0);
									}
									else
									{
										func_76(&uLocal_72, "REARRAU", sLocal_262, 4, iLocal_246, 0, 0);
									}
									func_15(func_52(), 1, 250, 0, 0);
									unk_0xE2348E4036041923(iLocal_53);
									iLocal_241 = 6;
								}
							}
							break;
						
						case 6:
							unk_0xB3D61EC1CD2AC612("criminal_thanks 6", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
							if (!func_91())
							{
								unk_0x8B18A80E8EB15510(iLocal_53, unk_0x9B0761B4C3EB8BC7(), 150f, -1, 0, 0);
								func_179();
							}
							break;
						}
				}
			}
			else
			{
				if (!func_91())
				{
					func_76(&uLocal_72, "REARRAU", sLocal_265, 4, iLocal_246, 0, 0);
				}
				unk_0x8B18A80E8EB15510(iLocal_53, unk_0x9B0761B4C3EB8BC7(), 150f, -1, 0, 0);
				func_179();
			}
		}
		else
		{
			func_13();
			unk_0x8B18A80E8EB15510(iLocal_53, unk_0x9B0761B4C3EB8BC7(), 150f, -1, 0, 0);
			if (bVar0 == 1)
			{
				iLocal_47 = 1;
			}
			if (!func_91())
			{
				func_76(&uLocal_72, "REARRAU", sLocal_262, 4, iLocal_246, 0, 0);
			}
			func_179();
		}
	}
}

void func_13()
{
	Global_19871 = 0;
	func_14();
}

void func_14()
{
	if (unk_0x6A5CC4A2C9D9ED8D())
	{
		unk_0x62B2C9892E3E142D();
		Global_22016 = 0;
		unk_0xBE4122AC23440E7D(true);
		Global_21005 = 6;
		return;
	}
}

void func_15(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_51(iParam0) == 3)
	{
		return;
	}
	if (func_51(iParam0) == 4)
	{
		return;
	}
	func_16(func_51(iParam0), 1, iParam1, iParam2, 0);
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

int func_16(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_50();
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
					func_49(99, 1);
					func_48(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_48(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_48(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_32(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_27(5))
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
							func_48(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_48(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_48(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_27(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_48(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_48(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_48(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_48(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_48(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_48(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_48(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_48(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_48(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_48(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_48(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_48(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_48(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_48(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_48(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_27(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_48(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_48(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_48(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_48(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_48(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_48(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_26(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_49(95, iParam3);
					break;
				
				case 1:
					func_49(97, iParam3);
					break;
				
				case 2:
					func_49(96, iParam3);
					break;
			}
			func_49(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_19(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_19(iVar1);
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
					func_48(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_48(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_48(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
	func_18(iParam0);
	if (Global_41631 == 15)
	{
		func_17(0);
	}
	return 1;
}

void func_17(bool bParam0)
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

void func_18(int iParam0)
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

void func_19(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_25(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_25(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_25(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_25(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_22(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_22(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_22(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_22(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_22(8274, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_22(8275, 0, -1, 1, 0);
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
	else if (unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, iParam0) || unk_0xCE990E643CD9D0E5(Global_2097152[func_21() /*10931*/].f_6175.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xD2459066EA58CE43(&(Global_111858.f_20560.f_471), iParam0);
		unk_0xD2459066EA58CE43(&(Global_2097152[func_21() /*10931*/].f_6175.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x5B8DD855EAFD33B5("COUP_RED");
		unk_0x6A826E35A3096ED0(func_20(iParam0));
		unk_0x39E1440587355CC1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_20(int iParam0)
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

int func_21()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_22(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_23(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
}

int func_23(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_24();
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

int func_24()
{
	return Global_1312763;
}

int func_25(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_24();
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

void func_26(int iParam0)
{
	func_49(93, iParam0);
	func_49(29, iParam0);
	func_49(30, iParam0);
}

bool func_27(int iParam0)
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
		return func_29(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_29(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_29(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_29(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x5A002C4821A13338();
		iVar1 = func_28(8270, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x5A002C4821A13338();
		iVar3 = func_28(8271, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x5A002C4821A13338();
		iVar5 = func_28(8272, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x5A002C4821A13338();
		iVar7 = func_28(8273, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x5A002C4821A13338();
		iVar9 = func_28(8274, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x5A002C4821A13338();
		iVar11 = func_28(8275, -1, 0);
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
	return unk_0xCE990E643CD9D0E5(Global_2097152[func_21() /*10931*/].f_6175.f_10, iParam0);
}

int func_28(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_23(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_24();
	}
	iVar1 = func_31(iParam0, iParam1);
	uVar2 = func_30(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x9FD0AD883E4A7C1E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_30(int iParam0)
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

int func_31(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_24();
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

int func_32(bool bParam0)
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
		func_47(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_33(27, 1);
	return 1;
}

int func_33(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_34(iParam0, iParam1);
}

int func_34(int iParam0, int iParam1)
{
	if (func_46(14) && !func_45(iParam0))
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
	if (func_44(&Global_4271324))
	{
		if (func_42(&Global_4271324, iParam0))
		{
			return 0;
		}
		if (func_35(&Global_4271324, iParam0))
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

int func_35(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x027BA2E902FAC118(iParam1))
	{
		return 0;
	}
	if (func_46(14) && !func_45(iParam1))
	{
		return 0;
	}
	if (func_42(uParam0, iParam1))
	{
		return 0;
	}
	if (func_41(uParam0) < 0f)
	{
		func_40(uParam0, 0);
	}
	func_38(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_36(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_36(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x027BA2E902FAC118(iParam1))
	{
		return 0;
	}
	if (func_46(14) && !func_45(iParam1))
	{
		return 0;
	}
	if (func_42(uParam0, iParam1))
	{
		return 0;
	}
	if (func_41(uParam0) < 0f)
	{
		func_40(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_37(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_37(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_38(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_39(uParam0, iVar0);
		iVar0++;
	}
	func_40(uParam0, (Global_4271323 - 0.5f));
}

void func_39(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_40(var uParam0, float fParam1)
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

float func_41(var uParam0)
{
	return uParam0->f_80;
}

bool func_42(var uParam0, int iParam1)
{
	return func_43(uParam0, iParam1) != -1;
}

int func_43(var uParam0, int iParam1)
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

bool func_44(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_45(int iParam0)
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

bool func_46(int iParam0)
{
	return Global_41631 == iParam0;
}

int func_47(int iParam0, int iParam1)
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

void func_48(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD2F202166691EDB2(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x6000E4684CB4330B(iParam0, iVar0, 1);
}

void func_49(int iParam0, int iParam1)
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

void func_50()
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

int func_51(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_17;
}

int func_52()
{
	func_53();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_53()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_56(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_55(unk_0x9B0761B4C3EB8BC7());
			if (func_54(iVar0) && (!func_46(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_54(Global_111858.f_2359.f_539.f_4321))
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

bool func_54(int iParam0)
{
	return iParam0 < 3;
}

int func_55(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_56(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_56(int iParam0)
{
	if (func_54(iParam0))
	{
		return func_57(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_57(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

int func_58()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (unk_0x80FF6C016CDB0FAF(iLocal_55, 0))
	{
		if (unk_0x910DFF8E55ABB8EC(iLocal_55, iLocal_53, fVar0, fVar0, fVar0, 0, 1, 0))
		{
			return 1;
		}
	}
	iVar1 = unk_0x433E7C216B9F29E0(unk_0x3E4D3CCC220BDFB1(iLocal_53, false), fVar0, fVar0, fVar0, -1);
	if (!unk_0x5AEB5DDFFAD43CA5(iVar1))
	{
		if (unk_0x36FE6D3220816ADA(iVar1) == joaat("s_f_y_cop_01") || unk_0x36FE6D3220816ADA(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar1 = unk_0x433E7C216B9F29E0(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), fVar0, fVar0, fVar0, -1);
	if (!unk_0x5AEB5DDFFAD43CA5(iVar1))
	{
		if (unk_0x36FE6D3220816ADA(iVar1) == joaat("s_f_y_cop_01") || unk_0x36FE6D3220816ADA(iVar1) == joaat("s_m_y_cop_01"))
		{
			return 1;
		}
	}
	iVar2 = unk_0x84F0027A508D7D7D(unk_0x3E4D3CCC220BDFB1(iLocal_53, false), fVar0, 0, 1024);
	if (unk_0x80FF6C016CDB0FAF(iVar2, 0))
	{
		return 1;
	}
	iVar2 = unk_0x84F0027A508D7D7D(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), fVar0, 0, 1024);
	if (unk_0x80FF6C016CDB0FAF(iVar2, 0))
	{
		return 1;
	}
	return 0;
}

void func_59()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
		bVar0 = unk_0xA65352E7FEA59881(unk_0x9B0761B4C3EB8BC7(), iLocal_53);
		bVar1 = unk_0xCDF860E56BBCC6B4(iLocal_53, unk_0x9B0761B4C3EB8BC7(), 1);
		if (((bVar1 || func_72()) || func_70()) || bVar0)
		{
			func_69();
			if (bLocal_68)
			{
				if (((bVar0 || bVar1) && !unk_0xCED6B5226244381C(iLocal_53)) && !unk_0x47DBF174A0CB9D55(iLocal_53, false))
				{
					unk_0x9B94F6169B0DAEFD(iLocal_53);
					unk_0xF3FE01181D2D2479(iLocal_53, 500, 2000, 0, 0, 0, 0);
					unk_0xAEC92B0DA8075AC9(iLocal_53, -1);
					unk_0xCBA6B2B569DCAFD8(iLocal_53, true);
				}
				else if (!unk_0x47DBF174A0CB9D55(iLocal_53, false) && !unk_0xCED6B5226244381C(iLocal_53))
				{
					unk_0x9B94F6169B0DAEFD(iLocal_53);
					unk_0xAEC92B0DA8075AC9(iLocal_53, -1);
					unk_0xCBA6B2B569DCAFD8(iLocal_53, true);
				}
				func_65(0);
				if (!func_91())
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52) && iLocal_274 == 0)
					{
						if (func_76(&uLocal_72, "REARRAU", "REARR_PWTF", 4, iLocal_246, 0, 0))
						{
							iLocal_274 = 1;
						}
					}
				}
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 3;
			}
		}
	}
	else
	{
		if (unk_0x8F678487EEBD8CE4(iLocal_57))
		{
			unk_0x93370FA10F15BE44(&iLocal_57);
			func_64(&uLocal_72, 2);
		}
		func_69();
		if (unk_0xCDF860E56BBCC6B4(iLocal_53, unk_0x9B0761B4C3EB8BC7(), 1))
		{
			if (bLocal_68)
			{
				func_65(1);
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 3;
			}
		}
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52))
	{
		if (bLocal_59)
		{
			if (!unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
			{
				func_179();
			}
		}
		if (unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
		{
		}
		iVar2 = 0;
		if (unk_0xAE06B9E39EBDE049(iLocal_54))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54))
			{
				if ((unk_0xCDF860E56BBCC6B4(iLocal_54, unk_0x9B0761B4C3EB8BC7(), 1) && unk_0x4F5F2FB7AE0EB7AB(iLocal_54) < 190) || (unk_0xCDF860E56BBCC6B4(iLocal_54, unk_0x9B0761B4C3EB8BC7(), 1) && unk_0xCED6B5226244381C(iLocal_54)))
				{
					iVar2 = 1;
				}
				if (unk_0xAE06B9E39EBDE049(iLocal_55) && unk_0xCDF860E56BBCC6B4(iLocal_55, unk_0x9B0761B4C3EB8BC7(), 1))
				{
					iVar2 = 1;
				}
			}
			else
			{
				iVar2 = 1;
			}
		}
		if ((((((unk_0xCDF860E56BBCC6B4(iLocal_52, unk_0x9B0761B4C3EB8BC7(), 1) && unk_0x4F5F2FB7AE0EB7AB(iLocal_52) < 190) || func_63()) || unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0)) || func_62()) || (unk_0xCDF860E56BBCC6B4(iLocal_52, unk_0x9B0761B4C3EB8BC7(), 1) && unk_0xCED6B5226244381C(iLocal_52))) || iVar2 == 1)
		{
			func_65(1);
			if (iLocal_47 == 3 || iLocal_47 == 1)
			{
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 2;
			}
		}
	}
	else
	{
		if (unk_0xCDF860E56BBCC6B4(iLocal_52, unk_0x9B0761B4C3EB8BC7(), 1))
		{
			if (iLocal_275 == 0)
			{
				iLocal_275 = 1;
				iLocal_278 = unk_0x578C4EF320340AF7();
			}
			if (iLocal_47 == 3 || iLocal_47 == 1)
			{
				iLocal_47 = 1;
			}
			else
			{
				iLocal_47 = 2;
			}
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
		{
			unk_0xBB7976F6FB9C9DD2(iLocal_53);
		}
		if (unk_0x8F678487EEBD8CE4(iLocal_56))
		{
			unk_0x93370FA10F15BE44(&iLocal_56);
			func_64(&uLocal_72, 1);
		}
	}
	if (iLocal_275)
	{
		if ((unk_0x578C4EF320340AF7() - iLocal_278) > 5000)
		{
			unk_0x26152FD46A297C2F(unk_0x460153A63B9477BC(), 3, 0);
			unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
			iLocal_275 = 0;
		}
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52) && !unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
		if (unk_0xCDF860E56BBCC6B4(iLocal_52, unk_0x9B0761B4C3EB8BC7(), 1) && unk_0xCDF860E56BBCC6B4(iLocal_53, unk_0x9B0761B4C3EB8BC7(), 1))
		{
			if (unk_0x4F5F2FB7AE0EB7AB(iLocal_52) < 190 && unk_0x4F5F2FB7AE0EB7AB(iLocal_53) < 190)
			{
				func_69();
				func_65(1);
				iLocal_47 = 1;
			}
		}
		if (!unk_0x910DFF8E55ABB8EC(iLocal_53, iLocal_52, 110f, 110f, 40f, 0, 1, 0))
		{
			if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_52, 20f, 20f, 20f, 0, 1, 0))
			{
				func_60();
				wait(0);
				func_76(&uLocal_72, "REARRAU", "REARR_PORUN", 4, iLocal_246, 0, 0);
			}
			else if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_53, 40f, 40f, 40f, 0, 1, 0))
			{
				func_60();
				wait(0);
				func_76(&uLocal_72, "REARRAU", sLocal_259, 4, iLocal_246, 0, 0);
			}
			func_179();
		}
	}
	if (unk_0x5AEB5DDFFAD43CA5(iLocal_52) && unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
		func_179();
	}
	if (unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52))
		{
			if (!unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_52, 100f, 100f, 40f, 0, 1, 0))
			{
				func_179();
			}
		}
	}
}

void func_60()
{
	Global_19871 = 0;
	func_61();
}

void func_61()
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

bool func_62()
{
	bool bVar0;
	
	bVar0 = false;
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		if (unk_0x36FE6D3220816ADA(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false)) == joaat("bulldozer"))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52))
			{
				if (unk_0xA65352E7FEA59881(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false), iLocal_52))
				{
					bVar0 = true;
				}
			}
		}
		if (unk_0x80FF6C016CDB0FAF(iLocal_55, 0))
		{
			if (unk_0xA65352E7FEA59881(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false), iLocal_55))
			{
				bVar0 = true;
			}
		}
		else if (iLocal_71)
		{
			if (unk_0xCDF860E56BBCC6B4(iLocal_55, unk_0x9B0761B4C3EB8BC7(), 1))
			{
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_63()
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	
	Var0 = { 3f, 3f, 3f };
	Var1 = { -3f, -3f, -3f };
	if (unk_0xC7EB33BFDB436C87(unk_0x1D5C49FCA9BC5B02(iLocal_52, 31086, 0f, 0f, 0f), 0.5f, 1))
	{
		if (unk_0x5AEB5DDFFAD43CA5(iLocal_53))
		{
			return 1;
		}
		else if (!unk_0xC7EB33BFDB436C87(unk_0x1D5C49FCA9BC5B02(iLocal_53, 31086, 0f, 0f, 0f), 2f, 1))
		{
			return 1;
		}
	}
	if (unk_0x1F9CD729737E8653(unk_0x1D5C49FCA9BC5B02(iLocal_52, 31086, 0f, 0f, 0f), 3f))
	{
		return 1;
	}
	if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_52, 5f, 5f, 5f, 0, 1, 0))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52))
		{
			if (unk_0x5E5402F6D3B26AFB(unk_0x460153A63B9477BC(), iLocal_52) || unk_0x2311EB213A0CB707(unk_0x460153A63B9477BC(), iLocal_52))
			{
				if (unk_0x1386E5E658CE3032(unk_0x9B0761B4C3EB8BC7(), &iVar2, 1))
				{
					if (iVar2 != joaat("weapon_unarmed"))
					{
						return 1;
					}
				}
			}
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
		{
			if (unk_0x5E5402F6D3B26AFB(unk_0x460153A63B9477BC(), iLocal_53) || unk_0x2311EB213A0CB707(unk_0x460153A63B9477BC(), iLocal_53))
			{
				if (unk_0x1386E5E658CE3032(unk_0x9B0761B4C3EB8BC7(), &iVar2, 1))
				{
					if (iVar2 != joaat("weapon_unarmed"))
					{
						if (bLocal_68)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	Var0 = { Var0 + unk_0x1D5C49FCA9BC5B02(iLocal_52, 31086, 0f, 0f, 0f) };
	Var1 = { Var1 + unk_0x1D5C49FCA9BC5B02(iLocal_52, 31086, 0f, 0f, 0f) };
	if (((unk_0x261234EE652E3D8D(Var1, Var0, joaat("weapon_smokegrenade"), 1) || unk_0x261234EE652E3D8D(Var1, Var0, joaat("weapon_grenade"), 1)) || unk_0x261234EE652E3D8D(Var1, Var0, joaat("weapon_stickybomb"), 1)) || unk_0x261234EE652E3D8D(Var1, Var0, joaat("vehicle_weapon_tank"), 1))
	{
		return 1;
	}
	return 0;
}

void func_64(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_65(int iParam0)
{
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52))
	{
		unk_0xBB7976F6FB9C9DD2(iLocal_52);
		if (!bLocal_59)
		{
			unk_0x26152FD46A297C2F(unk_0x460153A63B9477BC(), 2, 0);
			unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
			unk_0x0DC39BE87E4C5599(iLocal_52, true);
			if (unk_0x8F678487EEBD8CE4(iLocal_56))
			{
				unk_0x3060C53EAE54BBE7(iLocal_56, false);
			}
			if (iParam0 == 1)
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
				{
					if (unk_0x16BC17A8EDC701A2(iLocal_53, 1805844857) == 7)
					{
						if (unk_0x9934470AA0A08B57(iLocal_53, sLocal_250, "kneeling_arrest_idle", 3))
						{
							unk_0x9DC06E2A59C5AEBB(&iLocal_67);
							unk_0x756D74A3EF0AB788(0, sLocal_250, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, 0, 0, 0);
							unk_0x8B18A80E8EB15510(0, iLocal_52, 150f, -1, 0, 0);
							unk_0x19F29730874AD6F1(iLocal_67);
							unk_0x9B6EC2CECE1010EF(iLocal_53, iLocal_67);
							unk_0x4F83FEE4454169D4(&iLocal_67);
							unk_0x854FB153F2EA838B(iLocal_53, -530524, false, 0, 0);
							unk_0xCBA6B2B569DCAFD8(iLocal_53, true);
						}
						else
						{
							unk_0x9B94F6169B0DAEFD(iLocal_53);
							unk_0x8B18A80E8EB15510(iLocal_53, iLocal_52, 150f, -1, 0, 0);
						}
					}
				}
				if ((!unk_0xA59F96B50B97E63C(iLocal_53, 0) && !unk_0x5AEB5DDFFAD43CA5(iLocal_53)) && !unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					if (unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(iLocal_53, true), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), true) < 20f)
					{
						if (!func_91())
						{
							func_76(&uLocal_72, "REARRAU", sLocal_265, 4, iLocal_246, 0, 0);
						}
					}
				}
			}
			unk_0x9B94F6169B0DAEFD(iLocal_52);
			unk_0x9DC06E2A59C5AEBB(&iLocal_67);
			unk_0xA785552633ED203B(0, unk_0x9B0761B4C3EB8BC7(), -1, 2048, 2);
			unk_0x8FF9CE1C0F94F59A(0, unk_0x9B0761B4C3EB8BC7(), 0, 16);
			unk_0x19F29730874AD6F1(iLocal_67);
			unk_0x9B6EC2CECE1010EF(iLocal_52, iLocal_67);
			unk_0x4F83FEE4454169D4(&iLocal_67);
			unk_0xCBA6B2B569DCAFD8(iLocal_52, true);
			unk_0x82FF25D1808866E5(iLocal_52, 1, 0);
			if (unk_0x80FF6C016CDB0FAF(iLocal_55, 0))
			{
				unk_0x5DC21979EC6C531F(iLocal_55, 1);
			}
			func_67();
			wait(0);
			wait(0);
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52))
			{
				if (!unk_0xCED6B5226244381C(iLocal_52))
				{
				}
			}
			if (unk_0xAE06B9E39EBDE049(iLocal_54))
			{
				func_66();
			}
			bLocal_59 = true;
		}
	}
}

void func_66()
{
	if (unk_0xAE06B9E39EBDE049(iLocal_54))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54))
		{
			unk_0x9DC06E2A59C5AEBB(&iLocal_67);
			unk_0xA785552633ED203B(0, unk_0x9B0761B4C3EB8BC7(), -1, 2048, 2);
			unk_0x8FF9CE1C0F94F59A(0, unk_0x9B0761B4C3EB8BC7(), 0, 16);
			unk_0x19F29730874AD6F1(iLocal_67);
			unk_0x9B6EC2CECE1010EF(iLocal_54, iLocal_67);
			unk_0x4F83FEE4454169D4(&iLocal_67);
			unk_0xCBA6B2B569DCAFD8(iLocal_54, true);
			unk_0x82FF25D1808866E5(iLocal_54, 1, 0);
		}
	}
}

void func_67()
{
	Global_19871 = 0;
	func_68();
}

void func_68()
{
	unk_0x62B2C9892E3E142D();
	Global_22016 = 0;
	if (unk_0x6A5CC4A2C9D9ED8D())
	{
		unk_0xBE4122AC23440E7D(false);
		Global_21005 = 6;
	}
}

void func_69()
{
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
		if (unk_0x8F678487EEBD8CE4(iLocal_57))
		{
			unk_0x3060C53EAE54BBE7(iLocal_57, false);
		}
		unk_0xBB7976F6FB9C9DD2(iLocal_53);
	}
}

int func_70()
{
	if (!unk_0xA59F96B50B97E63C(iLocal_52, 0))
	{
		if (bLocal_68)
		{
			if (unk_0xA65352E7FEA59881(unk_0x9B0761B4C3EB8BC7(), iLocal_52))
			{
				if ((unk_0x578C4EF320340AF7() - iLocal_268) > 1000)
				{
					func_71();
				}
			}
		}
	}
	if (iLocal_267 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_71()
{
	if (!func_91())
	{
		if (iLocal_267 < 3)
		{
			unk_0xA785552633ED203B(iLocal_52, unk_0x9B0761B4C3EB8BC7(), 6000, 2048, 2);
			func_76(&uLocal_72, "REARRAU", "REARR_PLEAVE", 4, iLocal_246, 0, 0);
		}
	}
	iLocal_267++;
	iLocal_268 = unk_0x578C4EF320340AF7();
}

int func_72()
{
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		if (unk_0xA65352E7FEA59881(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false), iLocal_53))
		{
			if (bLocal_68)
			{
				if (iLocal_50 != 7)
				{
					if (vdist(unk_0x3E4D3CCC220BDFB1(iLocal_53, true), Local_64) > 2.5f)
					{
						return 1;
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
		}
	}
	if (bLocal_68)
	{
		if (unk_0xA65352E7FEA59881(unk_0x9B0761B4C3EB8BC7(), iLocal_53))
		{
			if (unk_0xCED6B5226244381C(iLocal_53))
			{
				if (iLocal_50 != 7)
				{
					if (vdist(unk_0x3E4D3CCC220BDFB1(iLocal_53, true), Local_64) > 2.5f)
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			else if (bLocal_68)
			{
				if ((unk_0x578C4EF320340AF7() - iLocal_268) > 1000)
				{
					func_71();
				}
			}
		}
	}
	if (iLocal_267 >= 3)
	{
		return 1;
	}
	return 0;
}

void func_73()
{
	if (!iLocal_69)
	{
		switch (iLocal_239)
		{
			case 0:
				if (!bLocal_59)
				{
					if (timera() > 80000)
					{
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52))
						{
							if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
							{
								func_60();
								wait(0);
								func_76(&uLocal_72, "REARRAU", "REARR_PRAD3", 4, iLocal_246, 0, 0);
							}
						}
						iLocal_239 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_91())
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
					{
						if (unk_0x9934470AA0A08B57(iLocal_53, sLocal_250, "kneeling_arrest_idle", 3))
						{
							unk_0x9DC06E2A59C5AEBB(&iLocal_67);
							unk_0x756D74A3EF0AB788(0, sLocal_250, "kneeling_arrest_escape", 8f, -8f, -1, 4096, 0, 0, 0, 0);
							unk_0x8B18A80E8EB15510(0, iLocal_52, 150f, -1, 0, 0);
							unk_0x19F29730874AD6F1(iLocal_67);
							unk_0x9B6EC2CECE1010EF(iLocal_53, iLocal_67);
							unk_0x4F83FEE4454169D4(&iLocal_67);
							unk_0x854FB153F2EA838B(iLocal_53, -530524, false, 0, 0);
							unk_0xCBA6B2B569DCAFD8(iLocal_53, true);
						}
						else
						{
							unk_0x8B18A80E8EB15510(iLocal_53, iLocal_52, 150f, -1, 0, 0);
						}
						unk_0xCBA6B2B569DCAFD8(iLocal_53, true);
						unk_0x697DA7132EE43ABC(iLocal_53, 101, 0);
						func_76(&uLocal_72, "REARRAU", sLocal_261, 4, iLocal_246, 0, 0);
						iLocal_239 = 2;
					}
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52))
					{
						unk_0x9B94F6169B0DAEFD(iLocal_52);
						iLocal_239 = 2;
					}
				}
				break;
			
			case 2:
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52))
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
					{
						unk_0xEFBCE8F8316F89EA(2, iLocal_66, iLocal_65);
						unk_0xEFBCE8F8316F89EA(2, iLocal_65, iLocal_66);
						unk_0x8FF9CE1C0F94F59A(iLocal_52, iLocal_53, 0, 16);
					}
					else
					{
						unk_0x30291E2E564E9B47(iLocal_52, 1193033728, 0);
						func_179();
					}
					unk_0xCBA6B2B569DCAFD8(iLocal_52, true);
				}
				iLocal_69 = 1;
				break;
			}
	}
}

int func_74(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	
	if (unk_0x80FF6C016CDB0FAF(iParam1, 0))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
		{
			Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, true) };
		}
		else
		{
			return -1;
		}
		Var1 = { unk_0x7EC595B99EA7C4B1(iParam1, 1f, -0.5f, 0f) };
		Var3 = { Var1 - Var0 };
		Var2 = { unk_0x7EC595B99EA7C4B1(iParam1, -1f, -0.5f, 0f) };
		Var4 = { Var2 - Var0 };
		if (vmag(Var3) < vmag(Var4))
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	return -1;
}

void func_75()
{
	if (!func_91())
	{
		if (!iLocal_281)
		{
			if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_52, 30f, 30f, 30f, 0, 1, 0))
			{
				func_76(&uLocal_72, "REARRAU", "REARR_PSTOP", 4, iLocal_246, 0, 0);
				iLocal_281 = 1;
				settimerb(0);
			}
		}
		else if (timerb() > 8000)
		{
			if (unk_0x344C570D6F8700DF(0, 99) > 50)
			{
				func_76(&uLocal_72, "REARRAU", "REARR_PRAND", 4, iLocal_246, 0, 0);
			}
			else if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_53, 10f, 10f, 10f, 0, 1, 0))
			{
				func_76(&uLocal_72, "REARRAU", sLocal_260, 4, iLocal_246, 0, 0);
			}
			else if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_52, 10f, 10f, 10f, 0, 1, 0))
			{
				func_76(&uLocal_72, "REARRAU", sLocal_260, 4, iLocal_246, 0, 0);
			}
			else
			{
				func_76(&uLocal_72, "REARRAU", sLocal_264, 4, iLocal_246, 0, 0);
			}
			settimerb(0);
		}
	}
}

bool func_76(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_90(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21012 = 0;
	Global_21014 = 0;
	Global_21019 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_2621441 = 0;
	return func_77(sParam2, iParam3, 0);
}

int func_77(char* sParam0, int iParam1, bool bParam2)
{
	Global_21006 = 0;
	if (Global_21005 == 0 || Global_21007 == 2)
	{
		if (Global_21005 != 0)
		{
			if (iParam1 > Global_21007)
			{
				if (Global_21012 == 0)
				{
					unk_0xBE4122AC23440E7D(false);
					Global_19681.f_1 = 3;
					Global_21005 = 0;
					Global_21006 = 1;
					Global_21058 = 0;
					Global_21001 = 0;
					Global_21002 = 0;
					Global_21016 = 0;
					Global_21015 = 0;
					Global_19680 = 0;
				}
				else
				{
					func_61();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x6A5CC4A2C9D9ED8D())
		{
			return 0;
		}
		if (func_89(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_88();
		Global_20294 = { Global_20459 };
		Global_21011 = Global_21012;
		Global_21018 = Global_21019;
		Global_2621442 = Global_2621441;
		Global_21020 = { Global_21036 };
		Global_21013 = Global_21014;
		Global_21995 = Global_21996;
		Global_22003 = { Global_22009 };
		Global_21997 = Global_21998;
		Global_21999 = Global_22000;
		Global_22001 = Global_22002;
		Global_20624.f_370 = Global_21994;
		Global_20624.f_368 = Global_21992;
		Global_20624.f_369 = Global_21993;
		Global_21001 = Global_21002;
		if (Global_21011)
		{
			unk_0xD2459066EA58CE43(&Global_7551, 20);
			unk_0xD2459066EA58CE43(&Global_7552, 17);
			unk_0xD2459066EA58CE43(&Global_7553, 0);
			if (bParam2)
			{
				func_87();
				if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19681.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19647 == 1)
			{
				return 0;
			}
			if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
			{
				if (unk_0x42A04E707DE50816(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (func_86())
				{
					return 0;
				}
				if (unk_0x7587087519CF4F83(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0xAACBFCE60AF94F2D(unk_0x9B0761B4C3EB8BC7()))
				{
					return 0;
				}
				if (unk_0x02D1369035663875(unk_0x9B0761B4C3EB8BC7(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76833)
				{
					if (unk_0xE72C9284B5143451(unk_0x9B0761B4C3EB8BC7()))
					{
						return 0;
					}
					if (unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC()))
					{
						return 0;
					}
					if (unk_0x887D491E579FA61E(unk_0x9B0761B4C3EB8BC7()))
					{
						return 0;
					}
					if (unk_0x4C9EC9A10C274889(unk_0x460153A63B9477BC(), 0))
					{
						return 0;
					}
				}
			}
			if (func_85())
			{
				return 0;
			}
			else
			{
				switch (Global_19681.f_1)
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
				if (unk_0xCE990E643CD9D0E5(Global_7551, 9))
				{
					return 0;
				}
			}
			func_84();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_83();
		func_78();
		return 1;
	}
	if (Global_21005 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21007 || iParam1 == Global_21007)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_61();
	}
	return 0;
}

void func_78()
{
	if (!func_79())
	{
		return;
	}
	if (Global_21011)
	{
		MemCopy(&(Global_1703978.f_1), {Global_20624}, 4);
		Global_1703978 = Global_6866;
		Global_1703978.f_6 = Global_21015;
	}
}

int func_79()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (unk_0x460153A63B9477BC() == func_82())
	{
		return 0;
	}
	if (func_80(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 7))
	{
		return 0;
	}
	if (unk_0xFC559366953F62B3())
	{
		return 0;
	}
	return 1;
}

bool func_80(int iParam0)
{
	return func_81(iParam0, 20);
}

bool func_81(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_82()
{
	return -1;
}

void func_83()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19873[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	unk_0xBE4122AC23440E7D(false);
	Global_21005 = 1;
}

void func_84()
{
	Global_21058 = Global_21057;
	Global_21052 = Global_21053;
	Global_21099 = { Global_21087 };
	Global_21105 = { Global_21093 };
	Global_21060 = Global_21059;
	Global_21129 = { Global_21111 };
	Global_21135 = { Global_21117 };
	Global_21141 = { Global_21123 };
	Global_21147 = { Global_21153 };
	Global_6866 = Global_6867;
	Global_6868 = Global_6869;
	Global_21016 = Global_21017;
	Global_21018 = Global_21019;
	Global_21020 = { Global_21036 };
	Global_21009 = Global_21010;
	Global_22021 = 0;
	Global_21054 = 0;
	Global_21055 = 0;
	unk_0xD2459066EA58CE43(&Global_7552, 16);
}

int func_85()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_86()
{
	int iVar0;
	int iVar1;
	
	if (Global_76833)
	{
		iVar0 = 0;
		unk_0x1386E5E658CE3032(unk_0x9B0761B4C3EB8BC7(), &iVar1, 1);
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (unk_0x5BFE1F305D18843B() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0xD15202C6B03220B8(unk_0x9B0761B4C3EB8BC7(), 78, 1))
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

void func_87()
{
	if (func_46(14))
	{
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[0 /*29*/])
			{
				Global_19681 = 0;
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[1 /*29*/])
			{
				Global_19681 = 1;
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[2 /*29*/])
			{
				Global_19681 = 2;
			}
			else
			{
				Global_19681 = 0;
			}
		}
	}
	else
	{
		Global_19681 = func_52();
		if (Global_19681 == 145)
		{
			Global_19681 = 3;
		}
		if (Global_76833)
		{
			Global_19681 = 3;
		}
		if (Global_19681 > 3)
		{
			Global_19681 = 3;
		}
	}
}

void func_88()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20294[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20294[iVar0 /*10*/].f_1), "", 24);
		Global_20294[iVar0 /*10*/].f_7 = 0;
		Global_20294[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20294.f_161 = -99;
	Global_20294.f_162 = { 0f, 0f, 0f };
}

bool func_89(int iParam0, int iParam1)
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

void func_90(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_20459 = { *uParam0 };
	Global_6867 = iParam1;
	StringCopy(&Global_21075, sParam2, 24);
	Global_21994 = uParam5;
	if (iParam3 == 0)
	{
		Global_21992 = 1;
		Global_21990 = 0;
	}
	else
	{
		Global_21992 = 0;
		Global_21990 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21993 = 1;
		Global_21991 = 0;
	}
	else
	{
		Global_21993 = 0;
		Global_21991 = 1;
	}
}

int func_91()
{
	if (Global_21005 != 0 || unk_0x6A5CC4A2C9D9ED8D())
	{
		return 1;
	}
	return 0;
}

int func_92()
{
	if (unk_0x910DFF8E55ABB8EC(iLocal_53, iLocal_52, 3.5f, 3.5f, 3.5f, 0, 1, 0) || func_95())
	{
		if (!func_93(1063675494))
		{
			return 1;
		}
	}
	return 0;
}

int func_93(float fParam0)
{
	var uVar0;
	struct<3> Var1;
	
	if (unk_0xF9972FB6E29D81CB(unk_0x3E4D3CCC220BDFB1(iLocal_53, true), &uVar0, &Var1))
	{
		if (func_94(Var1, 0f, 0f, 1f) < fParam0)
		{
			return 1;
		}
	}
	return 0;
}

float func_94(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

int func_95()
{
	return 0;
}

int func_96(int iParam0)
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

void func_97()
{
	if ((unk_0x578C4EF320340AF7() - iLocal_245) > 500)
	{
		if ((iLocal_47 != 1 && iLocal_47 != 3) && iLocal_47 != 2)
		{
			if (unk_0x8F678487EEBD8CE4(iLocal_57))
			{
				unk_0x3060C53EAE54BBE7(iLocal_57, iLocal_242);
				if (bLocal_242 == 1)
				{
					bLocal_242 = false;
				}
				else
				{
					bLocal_242 = true;
				}
			}
		}
		else
		{
			bLocal_276 = true;
		}
		if (!bLocal_59)
		{
			if (unk_0x8F678487EEBD8CE4(iLocal_56))
			{
				unk_0x3060C53EAE54BBE7(iLocal_56, iLocal_243);
				if (bLocal_243 == 1)
				{
					bLocal_243 = false;
				}
				else
				{
					bLocal_243 = true;
				}
			}
		}
		else
		{
			bLocal_276 = true;
		}
		iLocal_245 = unk_0x578C4EF320340AF7();
	}
	if (!bLocal_277 == bLocal_276)
	{
		if (bLocal_276)
		{
			if (unk_0x8F678487EEBD8CE4(iLocal_57))
			{
				unk_0x3DBD102E8C35EA16(iLocal_57, true);
			}
			if (unk_0x8F678487EEBD8CE4(iLocal_56))
			{
				unk_0x3DBD102E8C35EA16(iLocal_56, true);
			}
		}
		else
		{
			if (unk_0x8F678487EEBD8CE4(iLocal_57))
			{
				unk_0x3DBD102E8C35EA16(iLocal_57, false);
			}
			if (unk_0x8F678487EEBD8CE4(iLocal_56))
			{
				unk_0x3DBD102E8C35EA16(iLocal_56, false);
			}
		}
		bLocal_277 = bLocal_276;
	}
}

int func_98(float fParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 0;
	Var2 = { fParam0, fParam0, 50f };
	if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_271, Local_272, 194.75f, 0, true, 0))
	{
		return 1;
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52))
	{
		if (unk_0x910DFF8E55ABB8EC(iLocal_52, unk_0x9B0761B4C3EB8BC7(), Var2, 0, 1, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
	{
		if (unk_0x910DFF8E55ABB8EC(iLocal_53, unk_0x9B0761B4C3EB8BC7(), Var2, 0, 1, 0))
		{
			iVar0 = 1;
		}
		else
		{
			iVar1++;
		}
	}
	else
	{
		iVar1++;
	}
	if (iVar1 == 2)
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_99(int iParam0)
{
	if (func_104())
	{
		Global_111848 = 1;
		Global_111845 = unk_0x578C4EF320340AF7();
		if (func_103(Global_111847))
		{
			func_100(0);
		}
		unk_0x694F632EFD1F47D0(1, "RE_TITLE");
		if (iParam0 && func_103(Global_111847))
		{
			unk_0x1D42FFF20D06E356();
		}
		return 1;
	}
	return 0;
}

void func_100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111858.f_24991.f_2 < 3)
			{
				if (!unk_0x19D4274B54F9D9FA())
				{
					func_101(func_102(iParam0), -1);
					Global_111858.f_24991.f_2++;
					unk_0xBE20AB8238688965(&Global_111854, 0);
				}
			}
			break;
		
		case 1:
			if (!unk_0xCE990E643CD9D0E5(Global_111854, 1))
			{
				if (!unk_0x19D4274B54F9D9FA())
				{
					func_101(func_102(iParam0), -1);
					Global_111858.f_24991.f_3++;
					unk_0xBE20AB8238688965(&Global_111854, 1);
				}
			}
			break;
		
		case 2:
			if (!unk_0xCE990E643CD9D0E5(Global_111854, 2))
			{
				if (!unk_0x19D4274B54F9D9FA())
				{
					func_101(func_102(iParam0), -1);
					Global_111858.f_24991.f_4++;
					unk_0xBE20AB8238688965(&Global_111854, 2);
				}
			}
			break;
	}
}

void func_101(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, true, iParam1);
}

char* func_102(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_103(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

int func_104()
{
	switch (func_105(&Global_31027, 0, 5, 0, unk_0x354AD085195C5FA6()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_105(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_96433.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_109(0))
		{
			return 0;
		}
		Global_41595++;
		*uParam0 = Global_41595;
		unk_0xBF70D1B666A353F5(unk_0x2639A2323BEA8CC6(), false);
		Global_22411.f_5 = 0;
		if (iParam2 != 5)
		{
			unk_0x09BA0099935AAA6B(8);
		}
		Global_41631 = iParam2;
		Global_41593 = *uParam0;
		Global_41594 = iParam4;
		Global_41592 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_41592 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_41592)
			{
				if (Global_41598[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_41593 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_107(iParam2))
		{
			return 0;
		}
		if (Global_41592 == 8)
		{
			return 0;
		}
		Global_41595++;
		*uParam0 = Global_41595;
		Global_41598[Global_41592 /*4*/] = Global_41595;
		Global_41598[Global_41592 /*4*/].f_1 = iParam1;
		Global_41598[Global_41592 /*4*/].f_2 = iParam2;
		Global_41598[Global_41592 /*4*/].f_3 = 0;
		Global_41592++;
		if (iParam4 != 0)
		{
			func_106(uParam0, iParam4);
		}
	}
	return 2;
}

void func_106(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_41592 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_41592)
	{
		if (Global_41598[iVar0 /*4*/] == *uParam0)
		{
			Global_41598[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_107(int iParam0)
{
	return func_108(iParam0, Global_41631);
}

int func_108(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_109(int iParam0)
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	if (func_107(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_110()
{
	float fVar0;
	
	fVar0 = 50f;
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
		{
			if ((unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_52, fVar0, fVar0, fVar0, 0, 1, 0) || unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_53, fVar0, fVar0, fVar0, 0, 1, 0)) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_271, Local_272, 194.75f, 0, true, 0))
			{
				if (!unk_0x8F678487EEBD8CE4(iLocal_57))
				{
					iLocal_57 = func_111(iLocal_53, 0, 145);
				}
				if (!unk_0x8F678487EEBD8CE4(iLocal_56))
				{
					iLocal_56 = func_111(iLocal_52, 0, 145);
				}
				unk_0x3DBD102E8C35EA16(iLocal_57, false);
				unk_0x3DBD102E8C35EA16(iLocal_56, false);
				settimera(0);
				return 1;
			}
		}
		else
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52))
			{
				if (!unk_0x8F678487EEBD8CE4(iLocal_56))
				{
					iLocal_56 = func_111(iLocal_52, 0, 145);
				}
			}
			if (unk_0x8F678487EEBD8CE4(iLocal_57))
			{
				unk_0x93370FA10F15BE44(&iLocal_57);
			}
			return 1;
		}
	}
	else
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53))
		{
			if (!unk_0x8F678487EEBD8CE4(iLocal_57))
			{
				iLocal_57 = func_111(iLocal_53, 0, 145);
			}
		}
		if (unk_0x8F678487EEBD8CE4(iLocal_56))
		{
			unk_0x93370FA10F15BE44(&iLocal_56);
		}
		return 1;
	}
	return 0;
}

int func_111(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_112(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x8F678487EEBD8CE4(iVar0)) && unk_0x3030AE9FCF1BC243(&(Global_1848[iParam2 /*29*/].f_3)))
	{
		unk_0xB023F5C66F5716C7(iVar0, &(Global_1848[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_112(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x2BE000892D65EA2A(iParam0);
	if (unk_0x20F7576FDB52E2B0(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_113(unk_0x25DDB354A40FFCDB(), 1f, 1f));
		if (!bParam2)
		{
			unk_0x3060C53EAE54BBE7(iVar0, bParam1);
		}
		else
		{
			unk_0xECC9A00CF1181EC2(iVar0, 2);
		}
	}
	else if (unk_0xA1914E72A0EB31D0(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_113(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
		unk_0x3060C53EAE54BBE7(iVar0, bParam1);
	}
	else if (unk_0x49116E591C7E1412(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_113(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_113(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_114()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	
	iVar0 = joaat("s_m_y_ranger_01");
	if (iLocal_51 == 1)
	{
		Var2 = { 2429.822f, 4952.938f, 44.8892f };
		fVar4 = 218.3434f;
		Var3 = { 2431.685f, 4945.31f, 44.6996f };
		fVar5 = 220.0087f;
		Local_271 = { 2378.284f, 4863.027f, 32.50883f };
		Local_272 = { 2512.797f, 4998.586f, 90.12283f };
		sLocal_248 = "A_M_M_HillBilly_02_WHITE_MINI_02";
		sLocal_257 = "arrestcriminal";
		sLocal_258 = "REARR_CTHANK";
		sLocal_259 = "REARR_CORUN";
		sLocal_260 = "REARR_CWTF";
		sLocal_261 = "REARR_CTURN";
		sLocal_262 = "REARR_CHELP";
		sLocal_263 = "REARR_HATE";
		sLocal_264 = "REARR_CRAND";
		sLocal_265 = "REARR_CRAND";
		sLocal_266 = "REARR_CRAND";
		iVar1 = joaat("a_m_m_hillbilly_02");
	}
	else if (iLocal_51 == 2)
	{
		Var2 = { 2592.637f, 2540.05f, 30.4162f };
		fVar4 = 90.5639f;
		Var3 = { 2586.005f, 2541.41f, 31.0379f };
		fVar5 = 75.5943f;
		Local_271 = { 2543.135f, 2683.917f, 0.307461f };
		Local_272 = { 2597.603f, 2408.885f, 121.901f };
		sLocal_248 = "G_M_M_ArmGoon_01_White_Armenian_MINI_01";
		sLocal_257 = "arrestcriminal2";
		sLocal_258 = "REARR_THANK2";
		sLocal_259 = "REARR_CORUN2";
		sLocal_260 = "REARR_CWTF2";
		sLocal_261 = "REARR_CTURN2";
		sLocal_262 = "REARR_CHELP2";
		sLocal_263 = "REARR_HATE2";
		sLocal_264 = "REARR_CRAND2";
		sLocal_265 = "REARR_CRAND2";
		sLocal_266 = "REARR_CRAND2";
		iVar1 = joaat("g_m_m_armgoon_01");
	}
	unk_0x78FCB2E22C41B9D5(iVar0);
	unk_0x78FCB2E22C41B9D5(iVar1);
	unk_0x78FCB2E22C41B9D5(joaat("prop_ld_binbag_01"));
	unk_0x131ED02492676000(sLocal_250);
	unk_0x131ED02492676000(sLocal_251);
	unk_0x08E33007524DAD35("MOVE_M@BAIL_BOND_NOT_TAZERED");
	unk_0x08E33007524DAD35("MOVE_M@BAIL_BOND_TAZERED");
	if ((((((unk_0x7D167B9A0CCDA347(iVar0) && unk_0x7D167B9A0CCDA347(iVar1)) && unk_0x7D167B9A0CCDA347(joaat("prop_ld_binbag_01"))) && unk_0xC614DDE265D18415(sLocal_250)) && unk_0xC614DDE265D18415(sLocal_251)) && unk_0x8FBC2B79465DEB9E("MOVE_M@BAIL_BOND_NOT_TAZERED")) && unk_0x8FBC2B79465DEB9E("MOVE_M@BAIL_BOND_TAZERED"))
	{
		iLocal_52 = unk_0xB3116B49FE00E2F1(6, iVar0, Var2, fVar4, 1, true);
		unk_0x694113444F21E39F(iLocal_52, 294, true);
		unk_0x82FF25D1808866E5(iLocal_52, 1, 0);
		unk_0xD5D11F714F236D78(iLocal_52, 1);
		unk_0x4E65320BC9AD521C(iLocal_52, true);
		func_116(&uLocal_72, 1, iLocal_52, "ArrestCop", 0, 1);
		unk_0xA5EAD2ACE2C8BBB2(iLocal_52, true, 1);
		unk_0x38CCFC7E1952A745(iLocal_52, 1);
		iLocal_53 = unk_0xB3116B49FE00E2F1(26, iVar1, Var3, fVar5, 1, true);
		unk_0x82FF25D1808866E5(iLocal_53, 1, 0);
		unk_0x694113444F21E39F(iLocal_53, 42, true);
		unk_0x694113444F21E39F(iLocal_53, 281, true);
		unk_0x4E65320BC9AD521C(iLocal_53, true);
		func_116(&uLocal_72, 2, iLocal_53, sLocal_257, 0, 1);
		unk_0xA5EAD2ACE2C8BBB2(iLocal_53, true, 1);
		if (iLocal_51 == 1)
		{
			unk_0x45F588C0DD767737(iLocal_53, 0, 0, 2, 0);
			unk_0x45F588C0DD767737(iLocal_53, 2, 0, 0, 0);
			unk_0x45F588C0DD767737(iLocal_53, 3, 2, 0, 0);
			unk_0x45F588C0DD767737(iLocal_53, 4, 0, 0, 0);
		}
		func_115();
		if (func_52() == 0)
		{
			func_116(&uLocal_72, 0, unk_0x9B0761B4C3EB8BC7(), "MICHAEL", 0, 1);
		}
		else if (func_52() == 1)
		{
			func_116(&uLocal_72, 0, unk_0x9B0761B4C3EB8BC7(), "FRANKLIN", 0, 1);
		}
		else if (func_52() == 2)
		{
			func_116(&uLocal_72, 0, unk_0x9B0761B4C3EB8BC7(), "TREVOR", 0, 1);
		}
		if (!unk_0x15D88F65956DC2F6(iLocal_52, joaat("weapon_pistol"), 0))
		{
			unk_0x92BD213E6A0E666B(iLocal_52, joaat("weapon_pistol"), -1, false, true);
		}
		unk_0x69C71C91F56D82B9(iLocal_52, joaat("weapon_pistol"), true);
		iLocal_58 = unk_0x79CC07752E7432A1(joaat("prop_ld_binbag_01"), Local_63.x, Local_63.f_1, (Local_63.f_2 + 100f), true, true, false);
		unk_0x80250B8368A4E611(iLocal_58, false, 0);
		if (vdist(2411.32f, 4958.76f, 45.19f, Local_63) < 10f)
		{
			iLocal_51 = 1;
			unk_0x9DC06E2A59C5AEBB(&iLocal_67);
			unk_0x61A4368E32A293D8(0, 2473.254f, 4901.651f, 43.1488f, 3f, -1, 2f, 1, Local_244, 1193033728);
			unk_0x8B18A80E8EB15510(0, iLocal_52, 150f, -1, 0, 0);
			unk_0x19F29730874AD6F1(iLocal_67);
			unk_0x9B6EC2CECE1010EF(iLocal_53, iLocal_67);
			unk_0xCBA6B2B569DCAFD8(iLocal_53, true);
			unk_0x4F83FEE4454169D4(&iLocal_67);
			unk_0x5FEF237DD22FAAC2(2544.862f, 4729.893f, 27.8986f, 2564.862f, 4749.893f, 28.8986f, 1);
		}
		else
		{
			iLocal_51 = 2;
			unk_0x9DC06E2A59C5AEBB(&iLocal_67);
			unk_0x61A4368E32A293D8(0, 2531.445f, 2521.749f, 38.2072f, 3f, -1, 2f, 1, Local_244, 1193033728);
			unk_0x8B18A80E8EB15510(0, iLocal_52, 150f, -1, 0, 0);
			unk_0x19F29730874AD6F1(iLocal_67);
			unk_0x9B6EC2CECE1010EF(iLocal_53, iLocal_67);
			unk_0xCBA6B2B569DCAFD8(iLocal_53, true);
			unk_0x4F83FEE4454169D4(&iLocal_67);
		}
		if (iLocal_51 == 1)
		{
		}
		unk_0xE021DCE1063D5DC2(iLocal_52, iLocal_53, -1, 1f, 3f, 1073741824, 0);
		unk_0xCBA6B2B569DCAFD8(iLocal_52, true);
		return 1;
	}
	return 0;
}

void func_115()
{
	Local_244.x = 0f;
	Local_244.f_1 = 10f;
	unk_0x73745F8F1D07995D(iLocal_52, 2);
	unk_0x6673CC701BC8E9C1(iLocal_52, 13, true);
	unk_0x6673CC701BC8E9C1(iLocal_52, 2, true);
	unk_0x6673CC701BC8E9C1(iLocal_52, 1, true);
	unk_0x6673CC701BC8E9C1(iLocal_52, 11, false);
	unk_0x54E3EF0852DA2CA4(iLocal_52, 0);
	unk_0x73745F8F1D07995D(iLocal_53, 3);
	unk_0x6673CC701BC8E9C1(iLocal_53, 17, true);
	unk_0x6673CC701BC8E9C1(iLocal_53, 6, true);
	unk_0x6673CC701BC8E9C1(iLocal_53, 1, true);
	unk_0x6673CC701BC8E9C1(iLocal_53, 11, false);
	unk_0x6AC7395A8E313A46(iLocal_53, 128, true);
	unk_0x6AC7395A8E313A46(iLocal_53, 1, false);
	unk_0xDE8F8016287F771F("RE_ARREST_COP", &iLocal_65);
	unk_0xDE8F8016287F771F("RE_ARREST_CRIM", &iLocal_66);
	unk_0xD3D9D7C84656DAE5(iLocal_52, iLocal_65);
	unk_0xD3D9D7C84656DAE5(iLocal_53, iLocal_66);
	unk_0xEFBCE8F8316F89EA(4, iLocal_66, iLocal_65);
	unk_0xEFBCE8F8316F89EA(3, iLocal_65, 1862763509);
	unk_0xEFBCE8F8316F89EA(3, iLocal_66, 1862763509);
	unk_0xEFBCE8F8316F89EA(4, iLocal_66, joaat("COP"));
	unk_0x3A2AAE59B4681DAF(iLocal_52, sLocal_249);
	unk_0x3A2AAE59B4681DAF(iLocal_53, sLocal_248);
}

void func_116(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_117()
{
	if (!func_107(5))
	{
		return 1;
	}
	if (func_126())
	{
		return 1;
	}
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (vmag2(unk_0x97C0B1E5FCD8E08A(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_125())
		{
			return 0;
		}
	}
	if (func_118(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_118(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (func_54(func_52()))
		{
			iVar5 = func_124();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 2) && !unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 3))
				{
					func_119(iVar1, &Var0);
					fVar4 = unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), Var0.f_6, true);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_26)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_119(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_120(uParam1, "Abigail1", func_122(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 1:
			func_120(uParam1, "Abigail2", func_122(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 2:
			func_120(uParam1, "Barry1", func_122(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 3:
			func_120(uParam1, "Barry2", func_122(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 4:
			func_120(uParam1, "Barry3", func_122(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 5:
			func_120(uParam1, "Barry3A", func_122(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 6:
			func_120(uParam1, "Barry3C", func_122(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 7:
			func_120(uParam1, "Barry4", func_122(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_121(iParam0), 0, 0);
			break;
		
		case 8:
			func_120(uParam1, "Dreyfuss1", func_122(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 9:
			func_120(uParam1, "Epsilon1", func_122(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 10:
			func_120(uParam1, "Epsilon2", func_122(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 11:
			func_120(uParam1, "Epsilon3", func_122(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 12:
			func_120(uParam1, "Epsilon4", func_122(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 13:
			func_120(uParam1, "Epsilon5", func_122(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 14:
			func_120(uParam1, "Epsilon6", func_122(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 15:
			func_120(uParam1, "Epsilon7", func_122(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 16:
			func_120(uParam1, "Epsilon8", func_122(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 17:
			func_120(uParam1, "Extreme1", func_122(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 18:
			func_120(uParam1, "Extreme2", func_122(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 19:
			func_120(uParam1, "Extreme3", func_122(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 20:
			func_120(uParam1, "Extreme4", func_122(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 21:
			func_120(uParam1, "Fanatic1", func_122(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_121(iParam0), 1, 0);
			break;
		
		case 22:
			func_120(uParam1, "Fanatic2", func_122(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_121(iParam0), 1, 0);
			break;
		
		case 23:
			func_120(uParam1, "Fanatic3", func_122(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_121(iParam0), 0, 1);
			break;
		
		case 24:
			func_120(uParam1, "Hao1", func_122(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_121(iParam0), 0, 1);
			break;
		
		case 25:
			func_120(uParam1, "Hunting1", func_122(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 26:
			func_120(uParam1, "Hunting2", func_122(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 27:
			func_120(uParam1, "Josh1", func_122(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 28:
			func_120(uParam1, "Josh2", func_122(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 29:
			func_120(uParam1, "Josh3", func_122(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 30:
			func_120(uParam1, "Josh4", func_122(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 31:
			func_120(uParam1, "Maude1", func_122(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 32:
			func_120(uParam1, "Minute1", func_122(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 33:
			func_120(uParam1, "Minute2", func_122(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 34:
			func_120(uParam1, "Minute3", func_122(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 35:
			func_120(uParam1, "MrsPhilips1", func_122(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 36:
			func_120(uParam1, "MrsPhilips2", func_122(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 37:
			func_120(uParam1, "Nigel1", func_122(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 38:
			func_120(uParam1, "Nigel1A", func_122(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 39:
			func_120(uParam1, "Nigel1B", func_122(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_121(iParam0), 1, 1);
			break;
		
		case 40:
			func_120(uParam1, "Nigel1C", func_122(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_121(iParam0), 1, 1);
			break;
		
		case 41:
			func_120(uParam1, "Nigel1D", func_122(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_121(iParam0), 1, 1);
			break;
		
		case 42:
			func_120(uParam1, "Nigel2", func_122(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 43:
			func_120(uParam1, "Nigel3", func_122(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 1, 1);
			break;
		
		case 44:
			func_120(uParam1, "Omega1", func_122(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 45:
			func_120(uParam1, "Omega2", func_122(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 46:
			func_120(uParam1, "Paparazzo1", func_122(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 47:
			func_120(uParam1, "Paparazzo2", func_122(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 48:
			func_120(uParam1, "Paparazzo3", func_122(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 49:
			func_120(uParam1, "Paparazzo3A", func_122(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 50:
			func_120(uParam1, "Paparazzo3B", func_122(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 51:
			func_120(uParam1, "Paparazzo4", func_122(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 52:
			func_120(uParam1, "Rampage1", func_122(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 54:
			func_120(uParam1, "Rampage3", func_122(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 55:
			func_120(uParam1, "Rampage4", func_122(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 56:
			func_120(uParam1, "Rampage5", func_122(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_121(iParam0), 0, 0);
			break;
		
		case 53:
			func_120(uParam1, "Rampage2", func_122(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_121(iParam0), 1, 0);
			break;
		
		case 57:
			func_120(uParam1, "TheLastOne", func_122(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 58:
			func_120(uParam1, "Tonya1", func_122(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 59:
			func_120(uParam1, "Tonya2", func_122(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 60:
			func_120(uParam1, "Tonya3", func_122(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 61:
			func_120(uParam1, "Tonya4", func_122(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		case 62:
			func_120(uParam1, "Tonya5", func_122(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_121(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_120(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_10), sParam8, 16);
	uParam0->f_14 = iParam9;
	uParam0->f_15 = iParam10;
	StringCopy(&(uParam0->f_16), sParam11, 24);
	uParam0->f_22 = iParam12;
	uParam0->f_23 = iParam13;
	uParam0->f_24 = iParam14;
	uParam0->f_25 = iParam15;
	uParam0->f_26 = iParam16;
	uParam0->f_27 = iParam17;
	uParam0->f_28 = iParam18;
	uParam0->f_29 = uParam19;
	uParam0->f_30 = iParam20;
	uParam0->f_31 = iParam21;
}

int func_121(int iParam0)
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

struct<2> func_122(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_123(iParam0) };
	if (unk_0x7BCC91F3C1CF24E8(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_123(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_124()
{
	func_53();
	switch (Global_111858.f_2359.f_539.f_4321)
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

int func_125()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (unk_0xC047A11F7A99E6B4() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_126()
{
	if (func_129() && !func_125())
	{
		return 1;
	}
	if (func_128() && func_127())
	{
		return 1;
	}
	return 0;
}

bool func_127()
{
	return Global_111576 > 0;
}

int func_128()
{
	if (Global_95877 != -1)
	{
		return 1;
	}
	return 0;
}

int func_129()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 20);
	}
	return 0;
}

int func_130()
{
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x97C0B1E5FCD8E08A(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_125())
		{
			return 0;
		}
	}
	if (func_126())
	{
		return 1;
	}
	if (func_118(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

void func_131(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_134();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_133(iParam0);
	unk_0x92B2940A0A0441A9(0);
	unk_0x659A1C3A1508626C(1);
	Global_111844 = 0;
	func_132();
}

void func_132()
{
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
		{
			unk_0x410A1E7AD7D5C774(unk_0x36FE6D3220816ADA(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false)), true);
		}
		unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 32, false);
	}
}

void func_133(int iParam0)
{
	Global_111847 = iParam0;
}

int func_134()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x6C5C6B207AA78253(), 64);
	uVar1 = func_135(Var0);
	return uVar1;
}

int func_135(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (unk_0x856D5567211886A2(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_136(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	if (!Global_150438)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_134();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_178())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			Var1 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true) };
			if (vmag2(unk_0x97C0B1E5FCD8E08A(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_125())
			{
				return 0;
			}
		}
		if (!Global_111858.f_9081)
		{
			return 0;
		}
		if (func_177(0))
		{
			return 0;
		}
		if (func_126())
		{
			return 0;
		}
		if (func_176())
		{
			return 0;
		}
		if (Global_111847 != -1)
		{
			return 0;
		}
		if (func_54(func_52()))
		{
			if (func_118(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) && !bParam4)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_175(iParam1))
		{
			return 0;
		}
		if (func_54(func_52()))
		{
			if (func_174(func_52()) == 4 || func_174(func_52()) == 5)
			{
				return 0;
			}
		}
		if (func_54(func_52()))
		{
			if (!func_173(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_172(Global_111858.f_24991.f_43[iParam1]))
		{
			return 0;
		}
		if ((unk_0x578C4EF320340AF7() - Global_111849) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_171())
		{
			return 0;
		}
		if (unk_0x963B7BFFD2743281())
		{
			return 0;
		}
		if (unk_0xA706863F1E1DD66C())
		{
			return 0;
		}
		if (!func_162(4))
		{
			return 0;
		}
		if (!func_107(5))
		{
			return 0;
		}
		if (func_161(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (unk_0x0B1B45E748AD48BA(unk_0x518D695E2DBA9DB8(unk_0x9B0761B4C3EB8BC7())))
		{
			if ((unk_0x518D695E2DBA9DB8(unk_0x9B0761B4C3EB8BC7()) == unk_0xD5C5CDCF5230F2BA(377.153f, -717.567f, 10.0536f) || unk_0x518D695E2DBA9DB8(unk_0x9B0761B4C3EB8BC7()) == unk_0xD5C5CDCF5230F2BA(320.9934f, 265.2515f, 82.1221f)) || unk_0x518D695E2DBA9DB8(unk_0x9B0761B4C3EB8BC7()) == unk_0xD5C5CDCF5230F2BA(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_161(0, 0))
		{
			return 0;
		}
		if (Global_31114)
		{
			return 0;
		}
		if (func_175(30) && !func_161(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_54(func_52()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_111858.f_2359.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_111858.f_2359.f_539.f_2296[iVar2];
				if (func_160(iVar4))
				{
					if (func_138(iVar2))
					{
						if (!func_137(Var3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), Var3) < (210f * 210f))
							{
								if (func_52() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_137(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_138(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_111858.f_2359.f_539.f_2296[iParam0];
	return func_139(iVar0);
}

int func_139(int iParam0)
{
	return func_140(iParam0, 1);
}

int func_140(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_160(iParam0))
	{
		return 0;
	}
	func_141(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_141(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_142(func_153(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_142(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_152(iParam0, iParam1))
	{
		iVar0 = func_151(iParam1);
		iVar1 = func_149(iParam0);
		iVar2 = (func_149(iParam0) - func_149(iParam1));
		iVar3 = (func_151(iParam0) - func_151(iParam1));
		iVar4 = (func_148(iParam0) - func_148(iParam1));
		iVar5 = (func_147(iParam0) - func_147(iParam1));
		iVar6 = (func_146(iParam0) - func_146(iParam1));
		iVar7 = (func_145(iParam0) - func_145(iParam1));
	}
	else
	{
		iVar0 = func_151(iParam0);
		iVar1 = func_149(iParam1);
		iVar2 = (func_149(iParam1) - func_149(iParam0));
		iVar3 = (func_151(iParam1) - func_151(iParam0));
		iVar4 = (func_148(iParam1) - func_148(iParam0));
		iVar5 = (func_147(iParam1) - func_147(iParam0));
		iVar6 = (func_146(iParam1) - func_146(iParam0));
		iVar7 = (func_145(iParam1) - func_145(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_144(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_143(to_float(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_143(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_144(int iParam0, int iParam1)
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

int func_145(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_146(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_147(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_148(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_149(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_150(unk_0xCE990E643CD9D0E5(iParam0, 31), -1, 1)) + 2011;
}

int func_150(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_151(int iParam0)
{
	return iParam0 & 15;
}

int func_152(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_160(iParam1) || !func_160(iParam0))
	{
		return 1;
	}
	iVar0 = func_149(iParam0);
	iVar1 = func_149(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_151(iParam0);
	iVar1 = func_151(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_148(iParam0);
	iVar1 = func_148(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_147(iParam0);
	iVar1 = func_147(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_146(iParam0);
	iVar1 = func_146(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_145(iParam0);
	iVar1 = func_145(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_153()
{
	var uVar0;
	
	func_159(&uVar0, unk_0x1D3A3697182AD8B3());
	func_158(&uVar0, unk_0x81F2E25F8C019191());
	func_157(&uVar0, unk_0x1F596C965B00E290());
	func_156(&uVar0, unk_0x371CFD525753F70C());
	func_155(&uVar0, unk_0xF225116F449A5CC6());
	func_154(&uVar0, unk_0x2E48CFA70ABFC06A());
	return uVar0;
}

void func_154(var uParam0, int iParam1)
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
		*uParam0 = (*uParam0 || shift_left((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_155(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_156(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_151(*uParam0);
	iVar1 = func_149(*uParam0);
	if (iParam1 < 1 || iParam1 > func_144(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_157(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_158(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_159(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_160(int iParam0)
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
	iVar0 = func_145(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_146(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_147(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_149(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_151(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_148(iParam0);
	if (iVar5 < 1 || iVar5 > func_144(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_161(int iParam0, int iParam1)
{
	if (unk_0xCE990E643CD9D0E5(Global_111858.f_24991.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_162(int iParam0)
{
	int iVar0;
	
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				iVar0 = func_52();
				if (!func_54(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC()) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0x11B7C25143EE2F29(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0)) || func_170()) || Global_110905) || Global_30970) || func_169()) || func_89(8, -1)) || func_168()) || func_167()) || func_166()) || func_165()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1) || func_170()) || Global_30970) || func_169()) || func_89(8, -1)) || func_166()) || func_168()) || func_167()) || func_165()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC()) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0x11B7C25143EE2F29(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0)) || func_170()) || Global_110905) || Global_30970) || func_169()) || func_89(8, -1)) || func_166()) || func_168()) || func_167()) || func_165()) || Global_111858.f_7684.f_919[iVar0] == 5) || Global_42178 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7()) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0)) || func_170()) || Global_110905) || Global_30970) || func_169()) || func_89(8, -1)) || func_168()) || func_167()) || func_165()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_170() || unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0) || func_89(8, -1)) || func_165()) || func_164()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_89(8, -1) || func_168()) || func_167()) || func_164()) || func_163())
						{
							return 0;
						}
						if ((unk_0x9CC4D06F5338CA6B() && unk_0xEE67CF13DD662F51() != 3) && unk_0x69222D599BA78994() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
						{
							if ((((((((((((((unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0) || unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || func_170()) || Global_30970) || func_169()) || func_89(8, -1)) || func_167()) || func_166()) || func_165()) || Global_111858.f_7684.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0) || !unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) || !unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC())) || !unk_0x87F0CB19476706C3()) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || func_170()) || func_167()) || Global_110905) || Global_30970) || func_169()) || Global_42801) || func_89(8, -1)) || func_166()) || func_164()) || func_165()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0) || !unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) || !unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC())) || !unk_0x87F0CB19476706C3()) || unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0)) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true)) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0x9D7D76BBBFE285E0(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || func_170()) || Global_110905) || Global_30970) || func_169()) || func_89(8, -1)) || func_166()) || func_164()) || func_168()) || func_167()) || func_165())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_163()
{
	return Global_98994.f_1;
}

int func_164()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 13);
	}
	return 0;
}

int func_165()
{
	if (unk_0x7B70881748D166CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_166()
{
	if (Global_77093)
	{
		return 1;
	}
	else if (Global_61711 && !Global_61717)
	{
		return 1;
	}
	return 0;
}

bool func_167()
{
	return Global_99007.f_352 > 0;
}

bool func_168()
{
	return Global_99007.f_351 > 0;
}

var func_169()
{
	return Global_1312896;
}

int func_170()
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		return Global_96433.f_44 == 1;
	}
	return 0;
}

int func_171()
{
	func_87();
	if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_172(int iParam0)
{
	return func_152(func_153(), iParam0);
}

int func_173(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_52();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_174(int iParam0)
{
	if (!func_54(iParam0))
	{
		return 7;
	}
	return Global_111858.f_7684.f_919[iParam0];
}

bool func_175(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_178())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = unk_0xCE990E643CD9D0E5(Global_111858.f_24991, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = unk_0xCE990E643CD9D0E5(Global_111858.f_24991.f_1, iVar0);
	}
	return bVar1;
}

int func_176()
{
	int iVar0;
	
	if (Global_31118)
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
			if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(unk_0x10D3F7E169A49C44(iVar0, 0, 0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_177(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

int func_178()
{
	int iVar0;
	
	if (unk_0x011A67D2B195B6EB())
	{
		if (unk_0xB6E5F77B7062D58A())
		{
			if (unk_0xE06C56C6444527A6())
			{
				unk_0xD2F202166691EDB2(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				unk_0xBE20AB8238688965(&iVar0, 2);
				unk_0xBE20AB8238688965(&iVar0, 4);
				unk_0xBE20AB8238688965(&iVar0, 6);
				unk_0xBE20AB8238688965(&Global_25, 2);
				unk_0xBE20AB8238688965(&Global_25, 4);
				unk_0xBE20AB8238688965(&Global_25, 6);
				unk_0x6000E4684CB4330B(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, 1);
				if (unk_0x3D1E37C2BD9F339F())
				{
					iVar0 = unk_0xFCBF95335DD16537(866);
					unk_0xBE20AB8238688965(&iVar0, 0);
					unk_0xB2B72C9FCE371E70(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_150693 == 2)
	{
		return 1;
	}
	else if (Global_150693 == 3)
	{
		return 0;
	}
	if (unk_0x3D1E37C2BD9F339F())
	{
		if (unk_0xCE990E643CD9D0E5(unk_0xFCBF95335DD16537(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_179()
{
	if (unk_0xA706863F1E1DD66C())
	{
		switch (iLocal_47)
		{
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				func_208(6);
				func_193();
				break;
			
			case 3:
				func_208(5);
				func_193();
				break;
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_53))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_53) && !unk_0xA59F96B50B97E63C(iLocal_53, 0))
			{
				unk_0xA59F96B50B97E63C(iLocal_52, 0);
				if (unk_0xAE06B9E39EBDE049(iLocal_52))
				{
					unk_0xD66FADEF7D42D49B(iLocal_53, unk_0x3E4D3CCC220BDFB1(iLocal_52, true), 9000f, -1, 0, 0);
				}
				else
				{
					unk_0xD66FADEF7D42D49B(iLocal_53, unk_0x3E4D3CCC220BDFB1(iLocal_53, true), 9000f, -1, 0, 0);
				}
				unk_0x4E65320BC9AD521C(iLocal_53, false);
				unk_0xCBA6B2B569DCAFD8(iLocal_53, true);
			}
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_52))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52))
			{
				unk_0xCBA6B2B569DCAFD8(iLocal_52, true);
				unk_0x4E65320BC9AD521C(iLocal_52, false);
				unk_0xD78F28ADCAD8C88C(iLocal_52, 1);
				unk_0x0DC39BE87E4C5599(iLocal_52, true);
			}
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_54))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_54))
			{
				if (unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
				{
					func_66();
				}
				unk_0x4E65320BC9AD521C(iLocal_54, false);
				unk_0xD78F28ADCAD8C88C(iLocal_54, 1);
			}
		}
		if (func_192())
		{
			unk_0x34FEEAC2548C3789(1f);
			unk_0xEFBCE8F8316F89EA(2, iLocal_66, iLocal_65);
			unk_0xEFBCE8F8316F89EA(2, iLocal_65, iLocal_66);
		}
		if (iLocal_71)
		{
			unk_0xD77467CC38DD0DE2(1);
		}
	}
	unk_0x6F9222C1283B5094(2551.038f, 4708.613f, 32.6775f, 2536.979f, 5022.179f, 43.8519f, 300f, 1);
	if (iLocal_275)
	{
		unk_0x26152FD46A297C2F(unk_0x460153A63B9477BC(), 3, 0);
		unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
	}
	func_180(-1);
	wait(0);
	unk_0xD39E529EBE5DB04F();
}

void func_180(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_134();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_192())
	{
		func_185(iParam0);
		unk_0x694F632EFD1F47D0(0, 0);
		Global_111849 = unk_0x578C4EF320340AF7();
		func_184(30000);
		StringCopy(&cVar0, func_183(Global_111847, 1), 64);
		if (func_182(Global_111847) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_111846, 64);
		}
		unk_0xFA6F384991B22C4D(&cVar0, Global_111844, (unk_0x578C4EF320340AF7() - Global_111845), 0);
	}
	else if (unk_0xCE990E643CD9D0E5(Global_111854, 0) && Global_111858.f_24991.f_2 < 3)
	{
		unk_0xD2459066EA58CE43(&Global_111854, 0);
	}
	func_181(&Global_31027);
	Global_111848 = 0;
	func_133(-1);
}

void func_181(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_41593)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_41592 = 0;
	Global_41594 = 0;
	Global_41631 = 15;
	Global_61714 = 0;
	Global_61715 = 0;
}

int func_182(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

char* func_183(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_184(int iParam0)
{
	Global_42182 = (unk_0x578C4EF320340AF7() + iParam0);
}

void func_185(int iParam0)
{
	func_186(iParam0, 0, func_191(iParam0));
}

void func_186(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_153();
	func_189(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_188(iParam0, &uVar0);
	Var1 = { func_187(&uVar0) };
}

struct<16> func_187(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_147(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_146(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_145(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_148(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_151(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_149(*uParam0), 64);
	return Var0;
}

void func_188(int iParam0, var uParam1)
{
	Global_111858.f_24991.f_43[iParam0] = *uParam1;
}

void func_189(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_149(*uParam0);
	iVar1 = func_151(*uParam0);
	iVar2 = func_148(*uParam0);
	iVar3 = func_147(*uParam0);
	iVar4 = func_146(*uParam0);
	iVar5 = func_145(*uParam0);
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
	iVar6 = func_144(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_144(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_190(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_190(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_159(uParam0, iParam1);
	func_158(uParam0, iParam2);
	func_157(uParam0, iParam3);
	func_155(uParam0, iParam5);
	func_156(uParam0, iParam4);
	func_154(uParam0, iParam6);
}

int func_191(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_192()
{
	if ((Global_111847 == func_134() && unk_0xA706863F1E1DD66C()) && Global_111848)
	{
		return 1;
	}
	return 0;
}

void func_193()
{
	if (!bLocal_70)
	{
		func_207();
	}
	func_196(15, iLocal_51);
	func_194();
}

void func_194()
{
	func_195();
}

int func_195()
{
	if (func_177(0))
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

void func_196(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_134();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_182(iParam0))
	{
		func_206(iParam0, iParam1);
		if (!func_205(51))
		{
			func_202("RE_REWARD", 1, 0, 4000, 10000, func_124(), 0, 138, 0);
			func_201(51);
		}
		if (func_103(iParam0))
		{
			Global_111858.f_24991.f_2 = 3;
		}
		if (func_200(iParam0, iParam1) != 322)
		{
			func_197(func_200(iParam0, iParam1), Local_44.x, Local_44.f_1);
		}
		Global_111846 = iParam1;
		if (Global_111844 == 0)
		{
			if (((Global_111847 == 1 || Global_111847 == 5) || Global_111847 == 11) || Global_111847 == 25)
			{
				func_208(2);
			}
			else if ((Global_111847 == 26 || Global_111847 == 8) || Global_111847 == 17)
			{
				func_208(7);
			}
			else
			{
				func_208(1);
			}
		}
	}
}

void func_197(int iParam0, var uParam1, var uParam2)
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
		func_25((891 + iParam0), 1, -1, 1);
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
		Global_111858.f_10190[iParam0 /*12*/].f_10 = uParam1;
		Global_111858.f_10190[iParam0 /*12*/].f_11 = uParam2;
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
		func_198();
	}
}

void func_198()
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
		func_47(13, floor(Global_111858.f_10190.f_3853));
	}
	if (!unk_0xC4A02490EB1F450B())
	{
		if (!Global_76833)
		{
			if (func_199() == 2 == 0 && !unk_0x25DDB354A40FFCDB())
			{
				if (unk_0x70E5C9630A26FB40())
				{
					Global_111592 = 0;
				}
				if (!Global_61717)
				{
					func_195();
				}
			}
		}
	}
}

int func_199()
{
	return Global_30968;
}

int func_200(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

void func_201(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		unk_0xBE20AB8238688965(&(Global_111858.f_20406.f_150[iVar1]), iVar0);
	}
}

void func_202(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_203(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_203(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (unk_0xF005CCA4263DF67F(sParam0, ""))
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
	while (iVar0 < Global_111858.f_20406.f_145)
	{
		if (unk_0xF005CCA4263DF67F(&(Global_111858.f_20406[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_111858.f_20406.f_145 < 9)
	{
		StringCopy(&(Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_4), sParam1, 16);
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_8 = (unk_0x578C4EF320340AF7() + iParam3);
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_9 = iParam5;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_11 = iParam6;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_12 = uParam2;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_13 = iParam7;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_14 = iParam8;
		Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_10 = ((unk_0x578C4EF320340AF7() + iParam3) + iParam4);
		}
		else
		{
			Global_111858.f_20406[Global_111858.f_20406.f_145 /*16*/].f_10 = -1;
		}
		Global_111858.f_20406.f_145++;
		func_204();
	}
}

void func_204()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_111858.f_20406.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_111858.f_20406.f_145)
	{
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20406[iVar0 /*16*/].f_11, 0))
		{
			if (Global_111858.f_20406[iVar0 /*16*/].f_12 > Global_111858.f_20406.f_146[0])
			{
				Global_111858.f_20406.f_146[0] = Global_111858.f_20406[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20406[iVar0 /*16*/].f_11, 1))
		{
			if (Global_111858.f_20406[iVar0 /*16*/].f_12 > Global_111858.f_20406.f_146[1])
			{
				Global_111858.f_20406.f_146[1] = Global_111858.f_20406[iVar0 /*16*/].f_12;
			}
		}
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_20406[iVar0 /*16*/].f_11, 2))
		{
			if (Global_111858.f_20406[iVar0 /*16*/].f_12 > Global_111858.f_20406.f_146[2])
			{
				Global_111858.f_20406.f_146[2] = Global_111858.f_20406[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_205(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return unk_0xCE990E643CD9D0E5(Global_111858.f_20406.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_206(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_111858.f_24991.f_8[iParam0]), iParam1);
}

int func_207()
{
	return 1;
}

void func_208(int iParam0)
{
	Global_111844 = iParam0;
}

void func_209()
{
	if (!bLocal_68 && iLocal_49 == 0)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_52) && !unk_0x5AEB5DDFFAD43CA5(iLocal_53))
		{
			unk_0x83CAF206A9B8748C(iLocal_52, unk_0x3E4D3CCC220BDFB1(iLocal_53, true), 3f, 20000, 1193033728, 1056964608);
			unk_0xCBA6B2B569DCAFD8(iLocal_52, true);
			wait(0);
		}
	}
}

