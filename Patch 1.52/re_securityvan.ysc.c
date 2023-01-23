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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49[2] = { 0, 0 };
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56[2] = { 0, 0 };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	struct<3> Local_61[2];
	float fLocal_62[2] = { 0f, 0f };
	struct<3> Local_63 = { 0, 0, 0 } ;
	float fLocal_64 = 0f;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	float fLocal_72 = 0f;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	bool bLocal_79 = 0;
	bool bLocal_80 = 0;
	bool bLocal_81 = 0;
	bool bLocal_82 = 0;
	bool bLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88[2] = { 0, 0 };
	bool bLocal_89 = 0;
	bool bLocal_90 = 0;
	int iLocal_91[2] = { 0, 0 };
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	char[] cLocal_105[8] = 0;
	struct<10> Local_106[16];
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = -1;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 1000;
	var uLocal_121 = 1000;
	var uLocal_122 = 0;
	var uLocal_123 = 8;
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
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
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
	var uLocal_270 = 1;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	float fLocal_275 = 0f;
	struct<3> Local_276 = { 0, 0, 0 } ;
	struct<3> Local_277 = { 0, 0, 0 } ;
	int iLocal_278 = 0;
	struct<3> Local_279 = { 0, 0, 0 } ;
	float fLocal_280 = 0f;
	int iLocal_281[2] = { 0, 0 };
	int iLocal_282 = 0;
	struct<3> Local_283 = { 0, 0, 0 } ;
	struct<3> Local_284 = { 0, 0, 0 } ;
	struct<3> Local_285 = { 0, 0, 0 } ;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	bool bLocal_288 = 0;
	int iLocal_289 = 0;
	float fLocal_290 = 0f;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	struct<3> Local_293 = { 0, 0, 0 } ;
	int iLocal_294[2] = { 0, 0 };
	int iLocal_295 = 0;
	float fLocal_296 = 0f;
	float fLocal_297 = 0f;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300[2] = { 0, 0 };
	int iLocal_301[2] = { 0, 0 };
	struct<2> Local_302 = { 0, 5 } ;
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
	var uLocal_318 = 5;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	Local_65 = { 0.0203f, -3.1441f, 0.5027f };
	Local_66 = { 90f, 0f, 0f };
	Local_68 = { 0f, 0f, 0f };
	Local_69 = { 0f, 0f, 0f };
	iLocal_95 = 1;
	iLocal_96 = 1;
	cLocal_105 = "RESECAU";
	iLocal_271 = -1;
	fLocal_275 = -3.55f;
	Local_276 = { 0.014f, -0.9111f, 1.2317f };
	Local_277 = { 0f, -3.4368f, 1.2317f };
	iLocal_286 = -1;
	iLocal_287 = -1;
	iLocal_295 = -1;
	Local_67 = { Local_67 };
	Local_67 = { ScriptParam_302.f_1[0 /*3*/] };
	if (vdist(Local_67, -337.3338f, -1460.373f, 29.5668f) < 5f)
	{
		iLocal_45 = 1;
	}
	else if (vdist(Local_67, -588.4711f, -866.9462f, 25.3292f) < 5f)
	{
		iLocal_45 = 2;
	}
	else if (vdist(Local_67, -389f, 6061f, 31f) < 5f)
	{
		iLocal_45 = 3;
	}
	else if (vdist(Local_67, -600f, -1094f, 22.76f) < 5f)
	{
		iLocal_45 = 4;
	}
	else if (vdist(Local_67, -1025f, -1086f, 2f) < 5f)
	{
		iLocal_45 = 5;
	}
	else if (vdist(Local_67, -595.5618f, -667.7235f, 31.0544f) < 5f)
	{
		iLocal_45 = 6;
	}
	else if (vdist(Local_67, 3018.384f, 3634.017f, 70.4076f) < 5f)
	{
		iLocal_45 = 7;
	}
	else if (vdist(Local_67, -2815.661f, 2208.171f, 27.8382f) < 5f)
	{
		iLocal_45 = 8;
	}
	else if (vdist(Local_67, 856.7742f, -2067.845f, 29.0704f) < 5f)
	{
		iLocal_45 = 9;
	}
	else if (vdist(Local_67, 805.1932f, -703.1327f, 28.1632f) < 5f)
	{
		iLocal_45 = 10;
	}
	else
	{
		unk_0xD39E529EBE5DB04F();
	}
	if (Global_3)
	{
		if (iLocal_45 != 2)
		{
			unk_0xD39E529EBE5DB04F();
		}
	}
	else
	{
		if (unk_0xED06FD5709A59F02(11))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_49)
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar0]))
				{
					if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0))
					{
						if (!unk_0xE0B3BC41DDA88DF0(iLocal_49[iVar0], iLocal_50, false))
						{
							unk_0xC584E49FC3559A86(iLocal_49[iVar0], iLocal_50, -1, func_248(iLocal_50), 2f, 1, 0);
						}
					}
					else
					{
						unk_0xC1C7DE768F7675E5(iLocal_49[iVar0], 10000);
					}
				}
				iVar0++;
			}
			func_231();
		}
		if (!func_191(Local_67, 9, iLocal_45, 1, 0))
		{
			unk_0xD39E529EBE5DB04F();
		}
		else
		{
			func_188(-1);
		}
	}
	func_187();
	iLocal_59 = unk_0xC08A186299DFDA0A(Local_63 + Vector(30f, 30f, 30f), Local_63 - Vector(30f, 30f, 30f), 0, 1, 1, 1);
	while (true)
	{
		wait(0);
		func_184(&uLocal_123);
		if (!func_183())
		{
			if (func_182())
			{
				func_231();
			}
			unk_0xAEF7C45DAFB8E9B0("RE_SV", 0);
			switch (iLocal_298)
			{
				case 0:
					if (unk_0x1116855A2A7A342C() && !func_170())
					{
						if (func_161())
						{
							if ((iLocal_44 == 3 && !(unk_0x9A70B1BD2A5BA09C(Local_63, 3f) && func_160(unk_0x9B0761B4C3EB8BC7(), Local_63, 1) < 150f)) || iLocal_44 != 3)
							{
								if (iLocal_44 == 3)
								{
									if (!unk_0x9A70B1BD2A5BA09C(Local_63, 8f))
									{
										unk_0x555EE41D7C7078E6(Local_63, 4f, 1, 0, 0, false);
									}
									iLocal_46 = 4;
									bLocal_79 = true;
								}
								else
								{
									iLocal_46 = 1;
								}
								func_159();
								if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && iLocal_44 == 3)
								{
									unk_0x316E0389ADF56E20(iLocal_50, 5f);
								}
								settimera(0);
								iLocal_298++;
							}
						}
					}
					else
					{
						func_231();
					}
					break;
				
				case 1:
					if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && unk_0x80FF6C016CDB0FAF(iLocal_50, 0))
					{
						if (((vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(iLocal_50, true)) < 10000f || !unk_0x1D88F87079AF2FA7(iLocal_50)) || (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) && !unk_0x1D88F87079AF2FA7(iLocal_49[0]))) || (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]) && !unk_0x1D88F87079AF2FA7(iLocal_49[1])))
						{
							iLocal_298++;
						}
					}
					if (func_158())
					{
						iLocal_298++;
					}
					if (iLocal_298 != 1)
					{
						settimera(0);
					}
					break;
				
				case 2:
					if (timera() > 2000)
					{
						if (iLocal_44 != 3)
						{
							func_153();
						}
					}
					if (unk_0xAE06B9E39EBDE049(iLocal_50) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
					{
						if (iLocal_44 == 3)
						{
							func_148();
							if (!unk_0x1D88F87079AF2FA7(iLocal_50) && (vdist(unk_0x3E4D3CCC220BDFB1(iLocal_50, true), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true)) < 100f || func_158()))
							{
								func_139(1);
							}
						}
						else if (((!unk_0x1D88F87079AF2FA7(iLocal_50) && iLocal_46 == 4) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_70, Local_71, fLocal_72, 0, true, 0)) || func_158())
						{
							func_139(1);
						}
						if ((iLocal_46 == 4 && unk_0x1D88F87079AF2FA7(iLocal_50)) && iLocal_44 != 3)
						{
							if (vdist(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(iLocal_50, true)) > 100f)
							{
								func_231();
							}
							else
							{
								func_139(1);
							}
						}
					}
					break;
			}
			if (iLocal_298 > 0)
			{
				if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && unk_0x1D88F87079AF2FA7(iLocal_50))
				{
					if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(iLocal_50, true)) > 62500f)
					{
						func_231();
					}
					if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(iLocal_50, true)) > 10000f && !unk_0x1116855A2A7A342C())
					{
						func_231();
					}
				}
			}
		}
		else
		{
			unk_0xDC54E6DC6372260F(unk_0x460153A63B9477BC());
			if (!unk_0x8F678487EEBD8CE4(iLocal_57))
			{
				if (!func_138(2) && !bLocal_84)
				{
					if (!unk_0xDABD547F0DF2906C())
					{
						func_137("SV_VANHELP1", 15000);
						func_136(2);
					}
				}
				if (unk_0xAE06B9E39EBDE049(iLocal_52))
				{
					if (iLocal_299 != 0)
					{
						if (vdist2(unk_0x3E4D3CCC220BDFB1(iLocal_52, true), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true)) < pow(50f, 2f))
						{
							iLocal_299 = 0;
							func_135(&uLocal_111, 0, 0);
						}
					}
				}
				else if (((bLocal_79 && !unk_0xF10E878C0879E7E9(iLocal_103)) && unk_0x80FF6C016CDB0FAF(iLocal_50, 0)) && !bLocal_89)
				{
					if (iLocal_299 != 1)
					{
						if (vdist2(unk_0x3E4D3CCC220BDFB1(iLocal_50, true), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true)) < pow(50f, 2f))
						{
							iLocal_299 = 1;
							func_135(&uLocal_111, 0, 0);
						}
					}
				}
				else if (unk_0xF10E878C0879E7E9(iLocal_103))
				{
					if (iLocal_299 != 2)
					{
						if (vdist2(unk_0xC8C0D624848783ED(iLocal_103), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true)) < pow(50f, 2f))
						{
							iLocal_299 = 2;
							func_135(&uLocal_111, 0, 0);
						}
					}
				}
				if (iLocal_299 == 0)
				{
					if (unk_0xAE06B9E39EBDE049(iLocal_52))
					{
						func_128(&uLocal_111, iLocal_52, 0, 0, 1, 1, 1);
						if (vdist2(unk_0x3E4D3CCC220BDFB1(iLocal_52, true), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true)) > pow(50f, 2f))
						{
							iLocal_299 = -1;
							func_135(&uLocal_111, 0, 0);
						}
					}
				}
				else if (iLocal_299 == 1)
				{
					if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && !unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_50, true))
					{
						func_128(&uLocal_111, iLocal_50, 0, 0, 1, 1, 1);
						if (vdist2(unk_0x3E4D3CCC220BDFB1(iLocal_50, true), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true)) > pow(50f, 2f))
						{
							iLocal_299 = -1;
							func_135(&uLocal_111, 0, 0);
						}
					}
				}
				else if (iLocal_299 == 2)
				{
					if (unk_0xF10E878C0879E7E9(iLocal_103))
					{
						func_105(&uLocal_111, unk_0xC8C0D624848783ED(iLocal_103), 0, 0, 1, 1, 1);
						if (vdist2(unk_0xC8C0D624848783ED(iLocal_103), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true)) > pow(50f, 2f))
						{
							iLocal_299 = -1;
							func_135(&uLocal_111, 0, 0);
						}
					}
				}
				if (((!unk_0xA59F96B50B97E63C(iLocal_50, 0) && bLocal_79) && !bLocal_81) && (!func_138(0) || (unk_0x15D88F65956DC2F6(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_stickybomb"), 0) && !func_138(1))))
				{
					switch (iLocal_100)
					{
						case 0:
							if (!unk_0xDABD547F0DF2906C() && vdist2(unk_0x3E4D3CCC220BDFB1(iLocal_50, true), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true)) < 225f)
							{
								func_137("SV_DOORHELP1", 15000);
								func_136(0);
								iLocal_100++;
							}
							break;
						
						case 1:
							if (!unk_0xDABD547F0DF2906C())
							{
								iLocal_101 = unk_0x578C4EF320340AF7();
								iLocal_100++;
							}
							break;
						
						case 2:
							if ((unk_0x578C4EF320340AF7() - iLocal_101) > 2000 && unk_0x15D88F65956DC2F6(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_stickybomb"), 0))
							{
								func_137("SV_DOORHELP2", 15000);
								func_136(1);
								iLocal_100++;
							}
							break;
						}
				}
				if (bLocal_81 || bLocal_89)
				{
					if (func_104("SV_DOORHELP1") || func_104("SV_DOORHELP2"))
					{
						unk_0xD289B55B6AADBA10(1);
					}
				}
			}
			switch (iLocal_46)
			{
				case 1:
					func_153();
					break;
				
				case 2:
					func_96();
					break;
				
				case 3:
					func_94();
					break;
				
				case 4:
					func_148();
					break;
				
				case 5:
					func_90();
					break;
				
				case 6:
					func_86();
					break;
				
				case 7:
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]))
					{
						if (unk_0xFA12F1C445CB8142(iLocal_49[0]) != 3)
						{
							unk_0xBF116DA809C8B7AA(iLocal_49[0], 3);
						}
					}
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]))
					{
						if (unk_0xFA12F1C445CB8142(iLocal_49[1]) != 3)
						{
							unk_0xBF116DA809C8B7AA(iLocal_49[1], 3);
						}
					}
					if (((!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) && !unk_0xA59F96B50B97E63C(iLocal_49[0], 0)) && !unk_0x5AEB5DDFFAD43CA5(iLocal_49[1])) && !unk_0xA59F96B50B97E63C(iLocal_49[1], 0))
					{
						iLocal_95 = 1;
						func_79(iLocal_49[1]);
						func_77(0, 1);
					}
					else if (iLocal_95 == 1)
					{
						if (unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]) || unk_0xA59F96B50B97E63C(iLocal_49[1], 0))
						{
							iLocal_48 = 0;
							iLocal_95 = 0;
						}
						else
						{
							func_79(iLocal_49[1]);
						}
					}
					else if (iLocal_95 == 0)
					{
						if (unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) || unk_0xA59F96B50B97E63C(iLocal_49[0], 0))
						{
							iLocal_95 = -1;
						}
						else
						{
							func_79(iLocal_49[0]);
						}
					}
					break;
				
				case 8:
					func_71();
					break;
				
				case 9:
					func_231();
					break;
			}
			if (func_69())
			{
				func_68(9);
			}
			if ((((unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7())) && unk_0x10D3F7E169A49C44(iLocal_50, -1, 0) == unk_0x9B0761B4C3EB8BC7()) && !bLocal_83) && iLocal_46 != 8)
			{
				if (bLocal_79)
				{
					func_68(8);
				}
				else
				{
					func_68(5);
				}
			}
			if (bLocal_80)
			{
				if (unk_0x991DEF33C181865B(iLocal_60, 1862763509) != 5)
				{
					unk_0xEFBCE8F8316F89EA(5, iLocal_60, 1862763509);
					unk_0xEFBCE8F8316F89EA(5, 1862763509, iLocal_60);
				}
			}
			if (bLocal_81)
			{
				if ((unk_0xF10E878C0879E7E9(iLocal_103) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7())) && vdist(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0xC8C0D624848783ED(iLocal_103)) > 250f)
				{
					func_68(9);
				}
			}
			if (!bLocal_89)
			{
				if (func_67())
				{
					bLocal_89 = true;
				}
			}
			else
			{
				iVar1 = 1;
				iVar2 = 0;
				if (unk_0xAE06B9E39EBDE049(iLocal_49[iVar2]))
				{
					if ((!unk_0xA59F96B50B97E63C(iLocal_49[iVar2], 0) && !unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar2])) && vdist2(unk_0x3E4D3CCC220BDFB1(iLocal_49[0], true), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true)) < 10000f)
					{
						iVar1 = 0;
					}
				}
				if (unk_0xAE06B9E39EBDE049(iLocal_50))
				{
					if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0))
					{
						if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_50, false))
						{
							iVar3 = 1;
						}
					}
					if ((vdist2(unk_0x3E4D3CCC220BDFB1(iLocal_50, true), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true)) > 10000f && unk_0x1D88F87079AF2FA7(iLocal_50)) || vdist2(unk_0x3E4D3CCC220BDFB1(iLocal_50, true), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true)) > 62500f)
					{
						iVar3 = 1;
					}
				}
				if (iVar3 && iVar1)
				{
					func_43();
				}
			}
			func_39();
			func_34();
			func_29();
		}
		if (!bLocal_77)
		{
			if (func_28())
			{
				iLocal_93 = unk_0x578C4EF320340AF7();
				bLocal_77 = true;
			}
		}
		if (bLocal_77)
		{
			if (!bLocal_78)
			{
				if ((unk_0x578C4EF320340AF7() - iLocal_93) > 5000)
				{
					unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 2, 0);
					if (func_27() < 30f)
					{
						if (func_4(&Local_106, cLocal_105, "RESEC_COPS", 8, 0, 0, 0))
						{
							bLocal_78 = true;
						}
					}
					else
					{
						bLocal_78 = true;
					}
				}
			}
		}
		if (((unk_0x578C4EF320340AF7() - iLocal_93) > 10000 && unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0) && !iLocal_92)
		{
			iVar4 = unk_0x344C570D6F8700DF(0, 3);
			if (iVar4 == 0)
			{
				unk_0x2D806C94B9A84B20("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			}
			else if (iVar4 == 1)
			{
				unk_0x2D806C94B9A84B20("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			}
			else
			{
				unk_0x2D806C94B9A84B20("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
			}
			iLocal_92 = 1;
		}
		if (bLocal_78)
		{
			if ((!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) || !unk_0x5AEB5DDFFAD43CA5(iLocal_49[1])) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(func_3(), true)) < pow(50f, 2f))
				{
					if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) == 0)
					{
						unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 2, 0);
						unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
					}
					unk_0x05CF4AC1444712FE(unk_0x460153A63B9477BC(), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true));
				}
			}
		}
		if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) == 0 && func_2())
		{
			unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 2, 0);
			unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
		}
		if (func_1())
		{
			func_68(9);
		}
		if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			if (unk_0x24B1E142845E309A(iLocal_50, 0) > 0f || unk_0x24B1E142845E309A(iLocal_50, 1) > 0f)
			{
				if (unk_0xB9FAC5FDE6272EE5(iLocal_50) == 3)
				{
					unk_0x5DC21979EC6C531F(iLocal_50, 1);
				}
			}
			if (!bLocal_82)
			{
				if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_50, false))
				{
					bLocal_82 = true;
				}
			}
			if (!bLocal_82)
			{
				if (unk_0x24B1E142845E309A(iLocal_50, 0) == 0f && unk_0x24B1E142845E309A(iLocal_50, 1) == 0f)
				{
					if (unk_0xB9FAC5FDE6272EE5(iLocal_50) == 1)
					{
						unk_0x5DC21979EC6C531F(iLocal_50, 3);
					}
				}
			}
		}
		if (iLocal_97 != 0)
		{
			if ((iLocal_46 == 8 || iLocal_46 == 6) || iLocal_46 == 4)
			{
				unk_0x531C743590D58F43(iLocal_97);
			}
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_52))
		{
			iVar5 = 0;
			while (iVar5 < iLocal_49)
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar5]) && !unk_0xA59F96B50B97E63C(iLocal_49[iVar5], 0))
				{
					if (unk_0x0A43129B43E05B32(iLocal_52, iLocal_49[iVar5]))
					{
						if (iLocal_46 == 1)
						{
							if (!iLocal_300[iVar5])
							{
								unk_0xC2229B9DD448D1E5(iLocal_49[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0xC2229B9DD448D1E5(iLocal_49[iVar5], 1, "random@security_van", "sec_walk_calm", 1090519040, 1);
								iLocal_300[iVar5] = 1;
							}
						}
						if (iLocal_46 == 7)
						{
							if (!iLocal_301[iVar5])
							{
								unk_0xC2229B9DD448D1E5(iLocal_49[iVar5], 0, "random@security_van", "sec_idle", 1090519040, 1);
								unk_0xC2229B9DD448D1E5(iLocal_49[iVar5], 1, "random@security_van", "sec_walk_panic", 1090519040, 1);
								iLocal_301[iVar5] = 1;
							}
						}
						if (unk_0xC0A3F78AF5448915(iLocal_49[iVar5], 4) && !iLocal_85)
						{
							unk_0x98EFE9ABE449C2A3(iLocal_49[iVar5], true);
							iLocal_85 = 1;
						}
					}
					else
					{
						if (iLocal_300[iVar5])
						{
							unk_0x08873F531E33D7A7(iLocal_49[iVar5], 0, -8f);
							unk_0x08873F531E33D7A7(iLocal_49[iVar5], 1, -8f);
							iLocal_300[iVar5] = 0;
						}
						if (iLocal_301[iVar5])
						{
							unk_0x08873F531E33D7A7(iLocal_49[iVar5], 0, -8f);
							unk_0x08873F531E33D7A7(iLocal_49[iVar5], 1, -8f);
							iLocal_301[iVar5] = 0;
						}
						if (iLocal_300[iVar5] || iLocal_301[iVar5])
						{
							iLocal_300[iVar5] = 0;
							iLocal_301[iVar5] = 0;
							unk_0x08873F531E33D7A7(iLocal_49[iVar5], 0, -8f);
							unk_0x08873F531E33D7A7(iLocal_49[iVar5], 1, -8f);
						}
						if (unk_0xC0A3F78AF5448915(iLocal_49[iVar5], 4) && iLocal_85)
						{
							unk_0x98EFE9ABE449C2A3(iLocal_49[iVar5], true);
							iLocal_85 = 0;
						}
					}
				}
				iVar5++;
			}
		}
		else
		{
			iVar5 = 0;
			while (iVar5 < iLocal_49)
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar5]))
				{
					if (iLocal_300[iVar5] || iLocal_301[iVar5])
					{
						iLocal_300[iVar5] = 0;
						iLocal_301[iVar5] = 0;
						unk_0x08873F531E33D7A7(iLocal_49[iVar5], 0, -8f);
						unk_0x08873F531E33D7A7(iLocal_49[iVar5], 1, -8f);
					}
				}
				iVar5++;
			}
		}
		if (!bLocal_79 && !bLocal_288)
		{
			if (((((unk_0xAE06B9E39EBDE049(iLocal_52) && unk_0xB77B1396EAA80D8F(iLocal_52)) && !unk_0x5AEB5DDFFAD43CA5(iLocal_49[iLocal_96])) && !unk_0x9934470AA0A08B57(iLocal_49[iLocal_96], "random@security_van", "sec_hand_override", 3)) && !unk_0x9934470AA0A08B57(iLocal_49[iLocal_96], "random@security_van", "sec_case_into_van_panic", 3)) && !unk_0x9934470AA0A08B57(iLocal_49[iLocal_96], "random@security_van", "sec_case_into_van_calm", 3))
			{
				unk_0x756D74A3EF0AB788(iLocal_49[iLocal_96], "random@security_van", "sec_hand_override", 1000f, -4f, -1, 49, 0, 0, 0, 0);
			}
		}
		if (!iLocal_86)
		{
			if (unk_0xAE06B9E39EBDE049(iLocal_50))
			{
				if (unk_0xCDF860E56BBCC6B4(iLocal_50, unk_0x9B0761B4C3EB8BC7(), 1))
				{
					iLocal_86 = 1;
				}
				unk_0xBB7976F6FB9C9DD2(iLocal_50);
			}
		}
	}
}

int func_1()
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		return Global_96433.f_44 == 1;
	}
	return 0;
}

int func_2()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && (((unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && bLocal_84) && unk_0xF10E878C0879E7E9(iLocal_103)) || (!unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && unk_0xF10E878C0879E7E9(iLocal_103)))) && vdist(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(iLocal_50, true)) < 20f) && vdist(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0xC8C0D624848783ED(iLocal_103)) < 20f)
	{
		iVar1 = unk_0x433E7C216B9F29E0(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), fVar0, fVar0, fVar0, -1);
		if (!unk_0x5AEB5DDFFAD43CA5(iVar1))
		{
			if (unk_0x36FE6D3220816ADA(iVar1) == joaat("s_m_y_cop_01") || unk_0x36FE6D3220816ADA(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar1 = unk_0x433E7C216B9F29E0(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), fVar0, fVar0, fVar0, -1);
		if (!unk_0x5AEB5DDFFAD43CA5(iVar1))
		{
			if (unk_0x36FE6D3220816ADA(iVar1) == joaat("s_m_y_cop_01") || unk_0x36FE6D3220816ADA(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar2 = unk_0x84F0027A508D7D7D(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), fVar0, 0, 1024);
		if (unk_0x80FF6C016CDB0FAF(iVar2, 0))
		{
			return 1;
		}
		iVar2 = unk_0x84F0027A508D7D7D(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), fVar0, 0, 1024);
		if (unk_0x80FF6C016CDB0FAF(iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

var func_3()
{
	float fVar0;
	int iVar1;
	
	fVar0 = 999999f;
	iVar1 = 0;
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]))
		{
			fVar0 = vdist(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(iLocal_49[0], true));
			iVar1 = 0;
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]))
		{
			if (vdist(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(iLocal_49[1], true)) < fVar0)
			{
				fVar0 = vdist(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(iLocal_49[1], true));
				iVar1 = 1;
			}
		}
	}
	return iLocal_49[iVar1];
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_26(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
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
					func_25();
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
		if (func_24(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_23();
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
				func_15();
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
				if (func_14())
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
			if (func_13())
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
			func_12();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_11();
		func_6();
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
		func_25();
	}
	return 0;
}

void func_6()
{
	if (!func_7())
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

int func_7()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (unk_0x460153A63B9477BC() == func_10())
	{
		return 0;
	}
	if (func_8(unk_0x460153A63B9477BC()))
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

bool func_8(int iParam0)
{
	return func_9(iParam0, 20);
}

bool func_9(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_10()
{
	return -1;
}

void func_11()
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

void func_12()
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

int func_13()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_14()
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

void func_15()
{
	if (func_22(14))
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
		Global_19681 = func_16();
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

int func_16()
{
	func_17();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_17()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_20(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_19(unk_0x9B0761B4C3EB8BC7());
			if (func_18(iVar0) && (!func_22(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_18(Global_111858.f_2359.f_539.f_4321))
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

bool func_18(int iParam0)
{
	return iParam0 < 3;
}

int func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_20(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_20(int iParam0)
{
	if (func_18(iParam0))
	{
		return func_21(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_21(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

bool func_22(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_23()
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

bool func_24(int iParam0, int iParam1)
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

void func_25()
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

void func_26(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

float func_27()
{
	float fVar0;
	
	fVar0 = 999999f;
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]))
		{
			fVar0 = vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(iLocal_49[0], true));
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]))
		{
			if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(iLocal_49[1], true)) < fVar0)
			{
				fVar0 = vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(iLocal_49[1], true));
			}
		}
	}
	return sqrt(fVar0);
}

int func_28()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		iVar1 = 0;
		while (iVar1 < iLocal_49)
		{
			if (unk_0xAE06B9E39EBDE049(iLocal_49[iVar1]))
			{
				if (((!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar1]) && unk_0xCDF860E56BBCC6B4(iLocal_49[iVar1], unk_0x9B0761B4C3EB8BC7(), 1)) || unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar1])) || unk_0xA59F96B50B97E63C(iLocal_49[iVar1], 0))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
		if ((!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) && !unk_0x5AEB5DDFFAD43CA5(iLocal_49[1])) && iLocal_86)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_29()
{
	if (!bLocal_89)
	{
		if (!bLocal_79)
		{
			if (unk_0xAE06B9E39EBDE049(iLocal_52))
			{
				if (!unk_0xB77B1396EAA80D8F(iLocal_52))
				{
					unk_0x315F7D8C33F0AB37(&iLocal_52);
					if (!unk_0xF10E878C0879E7E9(iLocal_103) && !bLocal_81)
					{
						func_30(0f, 0f, 0f, 0);
					}
				}
				else if ((unk_0x578C4EF320340AF7() - iLocal_102) > 3000)
				{
					if (unk_0x5AEB5DDFFAD43CA5(iLocal_49[iLocal_96]) || unk_0xCED6B5226244381C(iLocal_49[iLocal_96]))
					{
						unk_0x1F8106DB8796859F(iLocal_52, 1, true);
						iLocal_102 = unk_0x578C4EF320340AF7();
					}
				}
			}
			else if (!unk_0xF10E878C0879E7E9(iLocal_103))
			{
				if (unk_0x5AEB5DDFFAD43CA5(iLocal_49[iLocal_96]) || ((!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iLocal_96]) && unk_0xCED6B5226244381C(iLocal_49[iLocal_96])) && !bLocal_81))
				{
					func_30(0f, 0f, 0f, 0);
				}
			}
		}
	}
	else
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_52))
		{
			unk_0x315F7D8C33F0AB37(&iLocal_52);
		}
		if (unk_0xF10E878C0879E7E9(iLocal_103))
		{
			unk_0x73A2C4B5D6915500(iLocal_103);
		}
	}
}

void func_30(struct<3> Param0, bool bParam1)
{
	if (!bLocal_89 && !bLocal_81)
	{
		if (!bParam1)
		{
			if (bLocal_79)
			{
				Param0 = { unk_0xEDE1ACBAFB1C36AE(unk_0x7EC595B99EA7C4B1(iLocal_50, 0f, -3.3f, 0f), 1.2f, 1.5f) };
			}
			else
			{
				Param0 = { unk_0xEDE1ACBAFB1C36AE(unk_0x3E4D3CCC220BDFB1(iLocal_49[iLocal_96], false), 1.2f, 1.5f) };
			}
		}
		unk_0xBE20AB8238688965(&iLocal_104, 3);
		unk_0xBE20AB8238688965(&iLocal_104, 4);
		unk_0xBE20AB8238688965(&iLocal_104, 1);
		if (bParam1)
		{
			iLocal_103 = unk_0xB1C0B7CD03D4467D(joaat("pickup_money_security_case"), Param0, unk_0x090239DEAF625B17(iLocal_52, 2), 0, iLocal_94, 2, 1, 0);
		}
		else
		{
			iLocal_103 = unk_0x745986B99A8C6D46(joaat("pickup_money_security_case"), Param0, iLocal_104, iLocal_94, 1, 0);
		}
		if (!unk_0x8F678487EEBD8CE4(iLocal_58))
		{
			iLocal_58 = func_31(iLocal_103);
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_52))
		{
			unk_0x315F7D8C33F0AB37(&iLocal_52);
		}
		bLocal_81 = true;
	}
}

int func_31(int iParam0)
{
	return func_32(iParam0);
}

int func_32(int iParam0)
{
	int iVar0;
	
	if (!unk_0xF10E878C0879E7E9(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x852EB51D8B26C4A3(iParam0);
	unk_0xFA81E0FBD7F5ACA0(iVar0, func_33(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
	return iVar0;
}

float func_33(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_34()
{
	if (func_36())
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_53))
		{
			unk_0xFF90B7B5F1AF504A(iLocal_50, 2, 0, false);
			unk_0xFF90B7B5F1AF504A(iLocal_50, 3, 0, false);
			if (unk_0xAE06B9E39EBDE049(iLocal_53))
			{
				unk_0x315F7D8C33F0AB37(&iLocal_53);
			}
		}
	}
	switch (iLocal_47)
	{
		case 0:
			if (bLocal_79)
			{
				iLocal_47 = 1;
			}
			break;
		
		case 1:
			if (unk_0x24B1E142845E309A(iLocal_50, 2) == 0f && unk_0x24B1E142845E309A(iLocal_50, 3) == 0f)
			{
				if (unk_0xAE06B9E39EBDE049(iLocal_52))
				{
					if (unk_0xB77B1396EAA80D8F(iLocal_52))
					{
						unk_0x1F8106DB8796859F(iLocal_52, 1, true);
					}
					unk_0xF8A652CE310FFC53(iLocal_52, iLocal_50, 0, Local_65, Local_66, 0, 0, 0, 0, 2, 1);
					iLocal_47 = 2;
				}
			}
			break;
		
		case 2:
			if (!bLocal_81 && !bLocal_89)
			{
				if (!unk_0xA59F96B50B97E63C(iLocal_50, 0))
				{
					if (((unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && unk_0x24B1E142845E309A(iLocal_50, 2) > 0.25f) && unk_0x24B1E142845E309A(iLocal_50, 3) > 0.25f) || !unk_0x80FF6C016CDB0FAF(iLocal_50, 0))
					{
						if (unk_0xAE06B9E39EBDE049(iLocal_52))
						{
							if (unk_0xB77B1396EAA80D8F(iLocal_52))
							{
								unk_0x057194D526464DC0(unk_0x5E54B0823F46079E(), "DOORS_BLOWN", unk_0xBB88AFC535E469A3(iLocal_50, 13), "RE_SECURITY_VAN_SOUNDSET", false, 0, 0);
								unk_0x1F8106DB8796859F(iLocal_52, 1, false);
								unk_0x58ADF88C51AAFDC5(iLocal_52, true, 0);
								unk_0xAFB24BC90ACA6210(iLocal_52);
								unk_0xEF6C40CE5DEBAAE3(iLocal_52, 1);
								Local_279 = { unk_0x3E4D3CCC220BDFB1(iLocal_52, true) - unk_0x3E4D3CCC220BDFB1(iLocal_50, true) * Vector(1.5f, 1.5f, 1.5f) };
								if (vmag(Local_279) > 10f)
								{
									Local_279 = { func_35(Local_279) };
									Local_279 = { Local_279 * Vector(10f, 10f, 10f) };
								}
								if (iLocal_99 < 100)
								{
									iLocal_87 = 1;
								}
								unk_0x8B77B020136E915A(iLocal_52, 1, 0f, 1f, 5f, 0f, 0f, 0f, 0, 1, 1, 1, 0, 1);
								iLocal_278 = unk_0x578C4EF320340AF7();
							}
							else if (unk_0xE8D3F6977D791E7C(unk_0x3E4D3CCC220BDFB1(iLocal_52, true), unk_0x7EC595B99EA7C4B1(iLocal_50, Local_276), unk_0x7EC595B99EA7C4B1(iLocal_50, Local_277), 0) >= 1f)
							{
								iLocal_47 = 3;
								iLocal_91[0] = 0;
								iLocal_91[1] = 0;
							}
							else if ((unk_0x578C4EF320340AF7() - iLocal_278) > 5000)
							{
								func_30(0f, 0f, 0f, 0);
							}
						}
					}
				}
				else if (unk_0xAE06B9E39EBDE049(iLocal_50))
				{
					unk_0xFF90B7B5F1AF504A(iLocal_50, 2, 0, false);
					unk_0xFF90B7B5F1AF504A(iLocal_50, 3, 0, false);
					func_30(unk_0x7EC595B99EA7C4B1(iLocal_50, 0f, 2f, 0f), 0);
				}
			}
			break;
		
		case 3:
			if (iLocal_46 != 8)
			{
				func_68(8);
			}
			if (unk_0xAE06B9E39EBDE049(iLocal_52) && !unk_0xF10E878C0879E7E9(iLocal_103))
			{
				if (unk_0xF3A639BEE7AADF55(iLocal_52) == 0f && (unk_0x578C4EF320340AF7() - iLocal_278) > 1000)
				{
					func_30(unk_0x3E4D3CCC220BDFB1(iLocal_52, true), 1);
					unk_0x315F7D8C33F0AB37(&iLocal_52);
				}
				else if ((unk_0x578C4EF320340AF7() - iLocal_278) > 5000)
				{
					func_30(0f, 0f, 0f, 0);
				}
			}
			break;
	}
}

Vector3 func_35(struct<3> Param0)
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

int func_36()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(iLocal_53) && unk_0xB77B1396EAA80D8F(iLocal_53))
	{
		if (!iLocal_272)
		{
			if (unk_0x811BEDF8A732443A(unk_0x3E4D3CCC220BDFB1(iLocal_53, true), joaat("weapon_stickybomb"), 0.25f, 0) || unk_0x8865B8E834909D76(unk_0x3E4D3CCC220BDFB1(iLocal_53, true), 0.3f, unk_0xB3A5FF195E1A8192(joaat("weapon_stickybomb")), 0))
			{
				iLocal_272 = 1;
			}
		}
		iVar0 = 0;
		unk_0xF749BC0D76727CBD(unk_0x3E4D3CCC220BDFB1(iLocal_53, true), 0.1f, 255, 0, 0, 255);
		if (func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x3E4D3CCC220BDFB1(iLocal_53, true), 1f, 1) || (unk_0x3628D28B8671F14F(2, unk_0x3E4D3CCC220BDFB1(iLocal_53, true), 0.3f) && iLocal_272))
		{
			iLocal_87 = 1;
			iVar0 = 1;
		}
		if (unk_0x4F5F2FB7AE0EB7AB(iLocal_53) < iLocal_98 && unk_0xCDF860E56BBCC6B4(iLocal_53, unk_0x9B0761B4C3EB8BC7(), 0))
		{
			iLocal_99 = (iLocal_99 + (iLocal_98 - unk_0x4F5F2FB7AE0EB7AB(iLocal_53)));
			unk_0xBB7976F6FB9C9DD2(iLocal_53);
		}
		if ((unk_0x578C4EF320340AF7() - iLocal_273) > 200 && unk_0xAE06B9E39EBDE049(iLocal_50))
		{
			if (unk_0xD21635E3A532AA86(unk_0x7EC595B99EA7C4B1(iLocal_50, 0f, 0f, (1.2195f - 0.27f)), unk_0x7EC595B99EA7C4B1(iLocal_50, 0f, fLocal_275, (1.2195f + 0.09f)), 0.45f, 1))
			{
				iLocal_273 = unk_0x578C4EF320340AF7();
				iLocal_274++;
			}
		}
		if (iLocal_274 > 5)
		{
			return 1;
		}
		if (iLocal_99 > 100 || iVar0)
		{
			return 1;
		}
		iLocal_98 = unk_0x4F5F2FB7AE0EB7AB(iLocal_53);
	}
	return 0;
}

int func_37(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_38(Param0 + Param1))
	{
		if ((((((((((((((((((((((unk_0xEA84479CCF7AA647(5, Param1, Param0) || (unk_0xEA84479CCF7AA647(2, Param1, Param0) && !bParam4)) || (unk_0xEA84479CCF7AA647(20, Param1, Param0) && !bParam4)) || unk_0xEA84479CCF7AA647(4, Param1, Param0)) || (unk_0xEA84479CCF7AA647(28, Param1, Param0) && !bParam4)) || unk_0xEA84479CCF7AA647(32, Param1, Param0)) || unk_0xEA84479CCF7AA647(25, Param1, Param0)) || unk_0xEA84479CCF7AA647(9, Param1, Param0)) || (unk_0xEA84479CCF7AA647(3, Param1, Param0) && !bParam4)) || (unk_0xEA84479CCF7AA647(6, Param1, Param0) && !bParam4)) || unk_0xEA84479CCF7AA647(0, Param1, Param0)) || unk_0xEA84479CCF7AA647(1, Param1, Param0)) || unk_0xEA84479CCF7AA647(23, Param1, Param0)) || unk_0xEA84479CCF7AA647(34, Param1, Param0)) || unk_0xEA84479CCF7AA647(14, Param1, Param0)) || (unk_0xEA84479CCF7AA647(30, Param1, Param0) && !bParam4)) || (unk_0xEA84479CCF7AA647(12, Param1, Param0) && !bParam4)) || unk_0xEA84479CCF7AA647(7, Param1, Param0)) || (unk_0xEA84479CCF7AA647(21, Param1, Param0) && !bParam4)) || (unk_0xEA84479CCF7AA647(18, Param1, Param0) && !bParam4)) || unk_0xEA84479CCF7AA647(15, Param1, Param0)) || unk_0xEA84479CCF7AA647(10, Param1, Param0)) || unk_0xEA84479CCF7AA647(27, Param1, Param0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((unk_0x3628D28B8671F14F(5, Param2, fParam3) || (unk_0x3628D28B8671F14F(2, Param2, fParam3) && !bParam4)) || (unk_0x3628D28B8671F14F(20, Param2, fParam3) && !bParam4)) || unk_0x3628D28B8671F14F(4, Param2, fParam3)) || (unk_0x3628D28B8671F14F(28, Param2, fParam3) && !bParam4)) || unk_0x3628D28B8671F14F(32, Param2, fParam3)) || unk_0x3628D28B8671F14F(25, Param2, fParam3)) || unk_0x3628D28B8671F14F(9, Param2, fParam3)) || (unk_0x3628D28B8671F14F(3, Param2, fParam3) && !bParam4)) || (unk_0x3628D28B8671F14F(6, Param2, fParam3) && !bParam4)) || unk_0x3628D28B8671F14F(0, Param2, fParam3)) || unk_0x3628D28B8671F14F(1, Param2, fParam3)) || unk_0x3628D28B8671F14F(23, Param2, fParam3)) || unk_0x3628D28B8671F14F(34, Param2, fParam3)) || unk_0x3628D28B8671F14F(14, Param2, fParam3)) || (unk_0x3628D28B8671F14F(30, Param2, fParam3) && !bParam4)) || (unk_0x3628D28B8671F14F(12, Param2, fParam3) && !bParam4)) || unk_0x3628D28B8671F14F(7, Param2, fParam3)) || (unk_0x3628D28B8671F14F(21, Param2, fParam3) && !bParam4)) || (unk_0x3628D28B8671F14F(18, Param2, fParam3) && !bParam4)) || unk_0x3628D28B8671F14F(15, Param2, fParam3)) || unk_0x3628D28B8671F14F(10, Param2, fParam3)) || unk_0x3628D28B8671F14F(27, Param2, fParam3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_38(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_39()
{
	int iVar0;
	bool bVar1;
	int iVar2[2];
	
	if (!unk_0x8F678487EEBD8CE4(iLocal_57))
	{
		if (!bLocal_80)
		{
			if ((!unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]) && unk_0x80FF6C016CDB0FAF(iLocal_50, 0)) && !bLocal_89)
			{
				if (!bLocal_79)
				{
					if (!unk_0x8F678487EEBD8CE4(uLocal_56[1]))
					{
						uLocal_56[1] = func_42(iLocal_49[1], 0, 145);
					}
				}
				else
				{
					if (unk_0x8F678487EEBD8CE4(uLocal_56[1]))
					{
						unk_0x93370FA10F15BE44(&(uLocal_56[1]));
					}
					if (!unk_0x8F678487EEBD8CE4(iLocal_55))
					{
						iLocal_55 = func_40(iLocal_50, 0, 0);
					}
				}
			}
			else
			{
				if (unk_0x8F678487EEBD8CE4(uLocal_56[1]))
				{
					unk_0x93370FA10F15BE44(&(uLocal_56[1]));
				}
				if (unk_0x8F678487EEBD8CE4(iLocal_55))
				{
					unk_0x93370FA10F15BE44(&iLocal_55);
				}
			}
		}
		else
		{
			if (unk_0x8F678487EEBD8CE4(uLocal_56[0]) && unk_0x0F8169DD7499794D(uLocal_56[0]) != 119)
			{
				unk_0x93370FA10F15BE44(&(uLocal_56[0]));
			}
			if (unk_0x8F678487EEBD8CE4(uLocal_56[1]) && unk_0x0F8169DD7499794D(uLocal_56[1]) != 119)
			{
				unk_0x93370FA10F15BE44(&(uLocal_56[1]));
			}
			if (unk_0x8F678487EEBD8CE4(iLocal_55) && unk_0x0F8169DD7499794D(iLocal_55) != 119)
			{
				unk_0x93370FA10F15BE44(&iLocal_55);
			}
			if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_49)
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar0]))
					{
						if (unk_0xE0B3BC41DDA88DF0(iLocal_49[iVar0], iLocal_50, false))
						{
							bVar1 = true;
						}
					}
					iVar0++;
				}
			}
			if (bVar1)
			{
				if (!unk_0x8F678487EEBD8CE4(iLocal_55))
				{
					iLocal_55 = func_40(iLocal_50, 1, 0);
				}
			}
			else if (unk_0x8F678487EEBD8CE4(iLocal_55))
			{
				unk_0x93370FA10F15BE44(&iLocal_55);
			}
			if ((unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && unk_0x8F678487EEBD8CE4(iLocal_55)) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_50, false))
				{
					if (unk_0xC259BFDC20BB2EAF(iLocal_55) != 0)
					{
						unk_0xB7F03636BDF7080E(iLocal_55, 0);
					}
				}
				else if (unk_0xC259BFDC20BB2EAF(iLocal_55) != 255)
				{
					unk_0xB7F03636BDF7080E(iLocal_55, 255);
				}
			}
			iVar0 = 0;
			while (iVar0 < iLocal_49)
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
				{
					if (!unk_0xF10E878C0879E7E9(iLocal_103) && !unk_0x47DBF174A0CB9D55(iLocal_49[iVar0], false))
					{
						if (!unk_0xA26A1295C5145A11(iLocal_49[iVar0]) || vdist(unk_0x3E4D3CCC220BDFB1(iLocal_49[iVar0], true), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true)) < 30f)
						{
							iVar2[iVar0] = 1;
						}
					}
					if (iLocal_46 == 8 && !unk_0x47DBF174A0CB9D55(iLocal_49[iVar0], false))
					{
						iVar2[iVar0] = 1;
					}
					if (iLocal_46 == 5)
					{
						iVar2[iVar0] = 0;
					}
				}
				if (iVar2[iVar0])
				{
					if (!unk_0x8F678487EEBD8CE4(uLocal_56[iVar0]))
					{
						uLocal_56[iVar0] = func_42(iLocal_49[iVar0], 1, 145);
					}
				}
				else if (unk_0x8F678487EEBD8CE4(uLocal_56[iVar0]))
				{
					unk_0x93370FA10F15BE44(&(uLocal_56[iVar0]));
				}
				iVar0++;
			}
			if (unk_0xF10E878C0879E7E9(iLocal_103) && !bLocal_89)
			{
				if (!unk_0x8F678487EEBD8CE4(iLocal_58))
				{
					iLocal_58 = func_32(iLocal_103);
				}
			}
			else if (unk_0x8F678487EEBD8CE4(iLocal_58))
			{
				unk_0x93370FA10F15BE44(&iLocal_58);
			}
		}
	}
	else if ((unk_0xAE06B9E39EBDE049(iLocal_50) && unk_0xAE06B9E39EBDE049(iLocal_49[0])) && unk_0xAE06B9E39EBDE049(iLocal_49[1]))
	{
		if ((((((!unk_0x1D88F87079AF2FA7(iLocal_50) && unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_50, 100f, 100f, 30f, 0, 1, 0)) || (!unk_0x1D88F87079AF2FA7(iLocal_49[0]) && unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_49[0], 100f, 100f, 30f, 0, 1, 0))) || (!unk_0x1D88F87079AF2FA7(iLocal_49[1]) && unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_49[1], 100f, 100f, 30f, 0, 1, 0))) || unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_50, 50f, 50f, 20f, 0, 1, 0)) || unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_49[0], 50f, 50f, 20f, 0, 1, 0)) || unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_49[1], 50f, 50f, 20f, 0, 1, 0))
		{
			unk_0x93370FA10F15BE44(&iLocal_57);
		}
	}
	if (unk_0x8F678487EEBD8CE4(uLocal_56[0]))
	{
		unk_0x3DBD102E8C35EA16(uLocal_56[0], iLocal_90);
	}
	if (unk_0x8F678487EEBD8CE4(uLocal_56[1]))
	{
		unk_0x3DBD102E8C35EA16(uLocal_56[1], bLocal_90);
	}
	if (unk_0x8F678487EEBD8CE4(iLocal_55))
	{
		unk_0x3DBD102E8C35EA16(iLocal_55, bLocal_90);
	}
	if (unk_0x8F678487EEBD8CE4(iLocal_58))
	{
		unk_0x3DBD102E8C35EA16(iLocal_58, bLocal_90);
	}
	if (!bLocal_90)
	{
		if (bLocal_80 || iLocal_47 == 3)
		{
			bLocal_90 = false;
		}
	}
}

int func_40(int iParam0, bool bParam1, bool bParam2)
{
	return func_41(iParam0, !bParam1, bParam2);
}

int func_41(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x2BE000892D65EA2A(iParam0);
	if (unk_0x20F7576FDB52E2B0(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_33(unk_0x25DDB354A40FFCDB(), 1f, 1f));
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
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_33(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
		unk_0x3060C53EAE54BBE7(iVar0, bParam1);
	}
	else if (unk_0x49116E591C7E1412(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_33(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_42(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_41(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x8F678487EEBD8CE4(iVar0)) && unk_0x3030AE9FCF1BC243(&(Global_1848[iParam2 /*29*/].f_3)))
	{
		unk_0xB023F5C66F5716C7(iVar0, &(Global_1848[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

void func_43()
{
	func_45(9, iLocal_45);
	while (!func_44())
	{
		wait(0);
	}
	func_231();
}

int func_44()
{
	return 1;
}

void func_45(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_64(iParam0))
	{
		func_63(iParam0, iParam1);
		if (!func_62(51))
		{
			func_58("RE_REWARD", 1, 0, 4000, 10000, func_61(), 0, 138, 0);
			func_57(51);
		}
		if (func_56(iParam0))
		{
			Global_111858.f_24991.f_2 = 3;
		}
		if (func_55(iParam0, iParam1) != 322)
		{
			func_47(func_55(iParam0, iParam1), Local_43.x, Local_43.f_1);
		}
		Global_111846 = iParam1;
		if (Global_111844 == 0)
		{
			if (((Global_111847 == 1 || Global_111847 == 5) || Global_111847 == 11) || Global_111847 == 25)
			{
				func_46(2);
			}
			else if ((Global_111847 == 26 || Global_111847 == 8) || Global_111847 == 17)
			{
				func_46(7);
			}
			else
			{
				func_46(1);
			}
		}
	}
}

void func_46(int iParam0)
{
	Global_111844 = iParam0;
}

void func_47(int iParam0, var uParam1, var uParam2)
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
		func_53((891 + iParam0), 1, -1, 1);
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
		func_48();
	}
}

void func_48()
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
		func_52(13, floor(Global_111858.f_10190.f_3853));
	}
	if (!unk_0xC4A02490EB1F450B())
	{
		if (!Global_76833)
		{
			if (func_51() == 2 == 0 && !unk_0x25DDB354A40FFCDB())
			{
				if (unk_0x70E5C9630A26FB40())
				{
					Global_111592 = 0;
				}
				if (!Global_61717)
				{
					func_49();
				}
			}
		}
	}
}

int func_49()
{
	if (func_50(0))
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

bool func_50(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

int func_51()
{
	return Global_30968;
}

int func_52(int iParam0, int iParam1)
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

int func_53(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_54();
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

int func_54()
{
	return Global_1312763;
}

int func_55(int iParam0, int iParam1)
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

int func_56(int iParam0)
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

void func_57(int iParam0)
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

void func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_59(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_59(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_60();
	}
}

void func_60()
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

int func_61()
{
	func_17();
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

int func_62(int iParam0)
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

void func_63(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_111858.f_24991.f_8[iParam0]), iParam1);
}

int func_64(int iParam0)
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

int func_65()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x6C5C6B207AA78253(), 64);
	uVar1 = func_66(Var0);
	return uVar1;
}

int func_66(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_67()
{
	if (bLocal_81)
	{
		if (unk_0x73DBD7E437DA0553(iLocal_103))
		{
			return 1;
		}
	}
	return 0;
}

void func_68(int iParam0)
{
	iLocal_46 = iParam0;
	iLocal_48 = 0;
}

int func_69()
{
	if (!unk_0xF10E878C0879E7E9(iLocal_103))
	{
		if (bLocal_79)
		{
			if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0))
			{
				if (!func_70(iLocal_50))
				{
					if (iLocal_271 == -1)
					{
						iLocal_271 = unk_0x578C4EF320340AF7();
					}
				}
				else if (iLocal_271 != -1)
				{
					iLocal_271 = -1;
				}
			}
		}
		if (!bLocal_79)
		{
			if (iLocal_96 != -1)
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iLocal_96]))
				{
					if (!func_70(iLocal_50))
					{
						if (iLocal_271 == -1)
						{
							iLocal_271 = unk_0x578C4EF320340AF7();
						}
					}
					else if (iLocal_271 != -1)
					{
						iLocal_271 = -1;
					}
				}
			}
		}
		if (iLocal_271 != -1)
		{
			if ((unk_0x578C4EF320340AF7() - iLocal_271) > 3000)
			{
				unk_0x2481907DEE6B85EA(&(iLocal_49[0]));
				unk_0x2481907DEE6B85EA(&(iLocal_49[1]));
				unk_0x1CD098484842AE0B(iLocal_50, -1000f, 1);
				unk_0x58ADF88C51AAFDC5(iLocal_50, true, 0);
				unk_0xE730EAF558C97567(&iLocal_50);
				return 1;
			}
		}
	}
	else
	{
		if (iLocal_271 != -1)
		{
			iLocal_271 = -1;
		}
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && vdist(unk_0xC8C0D624848783ED(iLocal_103), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true)) > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_70(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (vdist(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(iParam0, true)) < 150f)
		{
			return 1;
		}
		else if (!unk_0x1D88F87079AF2FA7(iParam0) && vdist(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(iParam0, true)) < 300f)
		{
			return 1;
		}
	}
	return 0;
}

void func_71()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_295 == -1)
	{
		iLocal_295 = unk_0x578C4EF320340AF7();
	}
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		switch (iLocal_48)
		{
			case 0:
				bLocal_80 = true;
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) || !unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]))
				{
					if (func_27() < 30f && !unk_0x5AEB5DDFFAD43CA5(Local_106[3 /*10*/]))
					{
						func_4(&Local_106, cLocal_105, "RESEC_SHT1", 8, 0, 0, 0);
					}
				}
				iVar0 = 0;
				while (iVar0 < iLocal_49)
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar0]) && unk_0xAE06B9E39EBDE049(iLocal_52))
					{
						if ((iVar0 != iLocal_96 || bLocal_79) || !unk_0x0A43129B43E05B32(iLocal_52, iLocal_49[iVar0]))
						{
							unk_0x9B94F6169B0DAEFD(iLocal_49[iVar0]);
							unk_0x9DC06E2A59C5AEBB(&iLocal_54);
							if (unk_0x47DBF174A0CB9D55(iLocal_49[iVar0], false))
							{
								if (iLocal_87)
								{
									if (unk_0x8FBC2B79465DEB9E("move_injured_generic"))
									{
										unk_0xA3AB9D48A7E8EA48(iLocal_49[iVar0], "move_injured_generic", 1048576000);
										iLocal_88[iVar0] = 1;
									}
								}
								unk_0x0AB756271BADC8DF(0, 0, 256);
							}
							unk_0xE2348E4036041923(0);
							if (iLocal_88[iVar0])
							{
								unk_0xC1C7DE768F7675E5(0, unk_0x344C570D6F8700DF(1000, 3000));
							}
							unk_0x8FF9CE1C0F94F59A(0, unk_0x9B0761B4C3EB8BC7(), 0, 16);
							unk_0x19F29730874AD6F1(iLocal_54);
							unk_0x9B6EC2CECE1010EF(iLocal_49[iVar0], iLocal_54);
							unk_0x4F83FEE4454169D4(&iLocal_54);
						}
						unk_0x6673CC701BC8E9C1(iLocal_49[iVar0], 6, false);
						unk_0x6673CC701BC8E9C1(iLocal_49[iVar0], 0, true);
						unk_0x6673CC701BC8E9C1(iLocal_49[iVar0], 1, false);
						unk_0x73745F8F1D07995D(iLocal_49[iVar0], 1);
						unk_0x38CCFC7E1952A745(iLocal_49[iVar0], 1);
						unk_0x4E65320BC9AD521C(iLocal_49[iVar0], true);
					}
					iVar0++;
				}
				if ((unk_0xAE06B9E39EBDE049(iLocal_52) && unk_0xB77B1396EAA80D8F(iLocal_52)) && !unk_0x5AEB5DDFFAD43CA5(iLocal_49[iLocal_96]))
				{
					unk_0x9B94F6169B0DAEFD(iLocal_49[iLocal_96]);
				}
				settimera(0);
				iLocal_48++;
				break;
			
			case 1:
				if (func_76(iLocal_96))
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iLocal_96]))
					{
						unk_0x9B94F6169B0DAEFD(iLocal_49[iLocal_96]);
						unk_0x9DC06E2A59C5AEBB(&iLocal_54);
						if (unk_0x47DBF174A0CB9D55(iLocal_49[iLocal_96], false))
						{
							unk_0x0AB756271BADC8DF(0, 0, 256);
						}
						unk_0xE2348E4036041923(0);
						unk_0x8FF9CE1C0F94F59A(0, unk_0x9B0761B4C3EB8BC7(), 0, 16);
						unk_0x19F29730874AD6F1(iLocal_54);
						unk_0x9B6EC2CECE1010EF(iLocal_49[iLocal_96], iLocal_54);
						unk_0x4F83FEE4454169D4(&iLocal_54);
					}
					iLocal_48++;
				}
				break;
			
			case 2:
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) || !unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]))
				{
					if (unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) && !unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]))
					{
						if (Local_106[3 /*10*/] != iLocal_49[1])
						{
							func_75(&Local_106, 3);
							func_75(&Local_106, 4);
							func_74(&Local_106, 3, iLocal_49[1], "SECVANGUY1", 0, 1);
						}
					}
					iVar0 = 0;
					while (iVar0 < iLocal_49)
					{
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar0]))
						{
							if ((iLocal_47 == 2 && !iLocal_91[iVar0]) && !unk_0xA59F96B50B97E63C(iLocal_50, 0))
							{
								unk_0x317384610BBEE59A(iLocal_49[iVar0], iLocal_50, unk_0x7EC595B99EA7C4B1(iLocal_50, 0f, -4f, 0f), 5f, 0);
								iLocal_91[iVar0] = 1;
							}
							if (((unk_0xF10E878C0879E7E9(iLocal_103) && !iLocal_91[iVar0]) && iLocal_47 == 3) && !bLocal_89)
							{
								unk_0x317384610BBEE59A(iLocal_49[iVar0], iLocal_50, unk_0xC8C0D624848783ED(iLocal_103), 5f, 0);
								iLocal_91[iVar0] = 1;
							}
							if (bLocal_89)
							{
								if (iLocal_91[iVar0])
								{
									unk_0x81DDE522A653D11A(iLocal_49[iVar0], 0);
									iLocal_91[iVar0] = 0;
								}
							}
						}
						iVar0++;
					}
					if (IntToFloat((unk_0x578C4EF320340AF7() - iLocal_292)) > unk_0x658086F2B3C5E4E4(10000f, 15000f))
					{
						if (!func_73() && func_27() < 30f)
						{
							if (unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 4))
							{
								if (func_4(&Local_106, cLocal_105, "RESEC_SHT2", 8, 0, 0, 0))
								{
									iLocal_292 = unk_0x578C4EF320340AF7();
								}
							}
						}
					}
					if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0))
					{
						if (!bLocal_79)
						{
							if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_50, false) && (unk_0x578C4EF320340AF7() - iLocal_295) > 5000)
							{
								if (func_27() > (30f + (30f / 10f)))
								{
									func_68(7);
								}
								if (func_27() > (30f / 2f) && !func_72())
								{
									if (!bLocal_79)
									{
										func_68(7);
									}
									else
									{
										func_68(6);
									}
								}
								if (iLocal_46 != 8)
								{
									iLocal_91[0] = 0;
									iLocal_91[1] = 0;
									iLocal_295 = -1;
								}
							}
						}
					}
				}
				break;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_49)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar0]))
			{
				if (iVar0 == 0)
				{
					iVar1 = 7000;
				}
				else
				{
					iVar1 = 9000;
				}
				if (timera() > iVar1 && iLocal_88[iVar0])
				{
					unk_0xE18B77DC016551AA(iLocal_49[iVar0], 1048576000);
					iLocal_88[iVar0] = 0;
				}
			}
			iVar0++;
		}
	}
}

bool func_72()
{
	int iVar0;
	
	if ((unk_0x578C4EF320340AF7() - iLocal_282) > 250)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_49)
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar0]))
				{
					if (unk_0xD44D03437956A1ED(iLocal_49[iVar0], unk_0x9B0761B4C3EB8BC7(), 19) && unk_0x67E2125E6EC33DB7(iLocal_49[iVar0], unk_0x9B0761B4C3EB8BC7()))
					{
						iLocal_281[iVar0] = 1;
					}
					else
					{
						iLocal_281[iVar0] = 0;
					}
				}
				iVar0++;
			}
		}
	}
	return (iLocal_281[0] || iLocal_281[1]);
}

int func_73()
{
	if (Global_21005 != 0 || unk_0x6A5CC4A2C9D9ED8D())
	{
		return 1;
	}
	return 0;
}

void func_74(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_75(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_76(int iParam0)
{
	bool bVar0;
	
	if (unk_0xAE06B9E39EBDE049(iLocal_52))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iParam0]))
		{
			if (unk_0x0A43129B43E05B32(iLocal_52, iLocal_49[iParam0]))
			{
				if (unk_0x9934470AA0A08B57(iLocal_49[iParam0], "weapons@holster_1h", "holster", 3))
				{
					if (unk_0x4C06B15B376AA145(iLocal_49[iParam0], "weapons@holster_1h", "holster") > 0.9f)
					{
						unk_0x1F8106DB8796859F(iLocal_52, 1, true);
						unk_0x315F7D8C33F0AB37(&iLocal_52);
					}
				}
				else
				{
					unk_0x4E65320BC9AD521C(iLocal_49[iParam0], true);
					unk_0x756D74A3EF0AB788(iLocal_49[iParam0], "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
			}
		}
	}
	bVar0 = (!unk_0xAE06B9E39EBDE049(iLocal_52) || (unk_0xAE06B9E39EBDE049(iLocal_52) && !unk_0x0A43129B43E05B32(iLocal_52, iLocal_49[iParam0])));
	if (bVar0)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iParam0]))
		{
			unk_0x4E65320BC9AD521C(iLocal_49[iParam0], false);
		}
	}
	return bVar0;
}

void func_77(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	struct<3> Var3[2];
	int iVar4;
	bool bVar5;
	int iVar6;
	
	if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		Var0 = { func_35(unk_0x71C23069714A27B9(iLocal_50, unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true))) };
		fVar1 = ((unk_0xEF7858F25585F853(iLocal_50) + unk_0x9075769DD4F148B7(Var0.x, Var0.f_1)) + 45f);
		fVar2 = ((unk_0xEF7858F25585F853(iLocal_50) + unk_0x9075769DD4F148B7(Var0.x, Var0.f_1)) - 45f);
		Var3[0 /*3*/] = { unk_0x1BAE5C94E38E44FE(unk_0x3E4D3CCC220BDFB1(iLocal_50, true), fVar1, 0f, 4.5f, 0f) };
		Var3[1 /*3*/] = { unk_0x1BAE5C94E38E44FE(unk_0x3E4D3CCC220BDFB1(iLocal_50, true), fVar2, 0f, 4.5f, 0f) };
		func_78(&fVar1);
		func_78(&fVar2);
		if (vdist(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), Local_293) > 2f)
		{
			bVar5 = true;
		}
		iVar4 = 0;
		while (iVar4 < iLocal_49)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar4]))
			{
				if (vdist(unk_0x3E4D3CCC220BDFB1(iLocal_49[iVar4], true), Var3[iVar4 /*3*/]) > 2f)
				{
					bVar5 = true;
				}
			}
			iVar4++;
		}
		if (bVar5)
		{
			iVar4 = 0;
			while (iVar4 < iLocal_49)
			{
				if ((((((!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar4]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7())) && vdist(unk_0x3E4D3CCC220BDFB1(iLocal_49[iVar4], true), Var3[iVar4 /*3*/]) > 2f) && (unk_0x578C4EF320340AF7() - iLocal_294[iVar4]) > 1000) && !unk_0x47DBF174A0CB9D55(iLocal_49[iVar4], false)) && !iLocal_281[iVar4]) && (iParam0 == -1 || iParam0 == iVar4))
				{
					if (bParam1)
					{
						if (func_72())
						{
							Local_293 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true) };
						}
						unk_0x9DC06E2A59C5AEBB(&iVar6);
						if (func_72() || func_38(Local_293))
						{
							unk_0x88AEDBE3A7557929(0, Var3[iVar4 /*3*/], unk_0x9B0761B4C3EB8BC7(), 2f, false, 0.5f, 4f, true, 0, 0, -957453492, 20000);
							unk_0xDEA135D03FA041A8(0, unk_0x9B0761B4C3EB8BC7(), -1, 1);
						}
						else
						{
							unk_0xE7B54B17B0C09EB6(0, Var3[iVar4 /*3*/], Local_293, 2f, false, 0.5f, 4f, 1, 0, 0, -957453492);
							unk_0xE6AD6C3FB8E29792(0, Local_293, -1, 1, 0);
						}
						unk_0x19F29730874AD6F1(iVar6);
						unk_0x9B6EC2CECE1010EF(iLocal_49[iVar4], iVar6);
						unk_0x4F83FEE4454169D4(&iVar6);
					}
					iLocal_294[iVar4] = unk_0x578C4EF320340AF7();
				}
				iVar4++;
			}
		}
	}
}

void func_78(float fParam0)
{
	if (*fParam0 > 180f)
	{
		*fParam0 = (*fParam0 - 360f);
	}
	else if (*fParam0 < -180f)
	{
		*fParam0 = (*fParam0 + 360f);
	}
}

void func_79(int iParam0)
{
	float fVar0;
	
	if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0))
	{
		switch (iLocal_48)
		{
			case 0:
				if (!bLocal_79)
				{
					unk_0x4E65320BC9AD521C(iParam0, true);
					unk_0x9B94F6169B0DAEFD(iParam0);
					Local_283 = { unk_0xBB88AFC535E469A3(iLocal_50, 0) };
					Local_284 = { unk_0x090239DEAF625B17(iLocal_50, 2) };
					Local_285 = { unk_0xD7D25254A712E758("random@security_van", "sec_case_into_van_panic", Local_283, Local_284, 0, 2) };
					if (((!unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]) && !unk_0xA59F96B50B97E63C(iLocal_49[1], 0)) && !unk_0x5AEB5DDFFAD43CA5(iLocal_49[0])) && !unk_0xA59F96B50B97E63C(iLocal_49[0], 0))
					{
						if (func_27() < 20f)
						{
							if (bLocal_80)
							{
								func_4(&Local_106, cLocal_105, "RESEC_REC", 8, 0, 0, 0);
							}
						}
						if (unk_0xF10E878C0879E7E9(iLocal_103))
						{
							if (bLocal_80)
							{
								unk_0x3C1B180EE30D36EF(iParam0, unk_0xC8C0D624848783ED(iLocal_103), 2f, -1, 1048576000, 0, 1193033728);
							}
							else
							{
								unk_0x3C1B180EE30D36EF(iParam0, unk_0xC8C0D624848783ED(iLocal_103), 1f, -1, 1048576000, 0, 1193033728);
							}
							iLocal_48++;
						}
						else
						{
							func_85(iParam0);
							iLocal_48 = 2;
						}
					}
					else if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
					{
						if (unk_0xF10E878C0879E7E9(iLocal_103))
						{
							unk_0x3C1B180EE30D36EF(iParam0, unk_0xC8C0D624848783ED(iLocal_103), 2f, -1, 1048576000, 0, 1193033728);
							iLocal_48++;
						}
						else
						{
							func_85(iParam0);
							iLocal_48 = 2;
						}
					}
				}
				else
				{
					iLocal_48 = 4;
				}
				break;
			
			case 1:
				if (!unk_0x5AEB5DDFFAD43CA5(iParam0) && unk_0xF10E878C0879E7E9(iLocal_103))
				{
					if ((unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(iParam0, true), unk_0xC8C0D624848783ED(iLocal_103), true) < 2f && !unk_0xCED6B5226244381C(iParam0)) && (unk_0x578C4EF320340AF7() - iLocal_102) > 3000)
					{
						if (unk_0xC0A3F78AF5448915(iParam0, 4))
						{
							unk_0x69C71C91F56D82B9(iParam0, joaat("weapon_unarmed"), true);
						}
						unk_0x73A2C4B5D6915500(iLocal_103);
						func_85(iParam0);
						unk_0x69C71C91F56D82B9(iParam0, joaat("weapon_unarmed"), true);
						bLocal_81 = false;
						iLocal_96 = iLocal_95;
						iLocal_48++;
					}
				}
				break;
			
			case 2:
				if (!unk_0x5AEB5DDFFAD43CA5(iParam0) && unk_0x80FF6C016CDB0FAF(iLocal_50, 0))
				{
					if (unk_0x16BC17A8EDC701A2(iParam0, 713668775) != 1)
					{
						if (bLocal_80)
						{
							unk_0x3C1B180EE30D36EF(iParam0, Local_285, 2f, -1, 0.1f, 512, Local_284.f_2);
						}
						else
						{
							unk_0x3C1B180EE30D36EF(iParam0, Local_285, 1f, -1, 0.1f, 512, Local_284.f_2);
						}
						iLocal_48++;
					}
				}
				break;
			
			case 3:
				if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
				{
					if (unk_0xF10E878C0879E7E9(iLocal_103))
					{
						iLocal_48 = 0;
					}
					else
					{
						fVar0 = unk_0xEF7858F25585F853(iParam0);
						if (fVar0 > 180f)
						{
							fVar0 = (fVar0 - 360f);
						}
						if (fVar0 <= -180f)
						{
							fVar0 = (fVar0 + 360f);
						}
						if (Local_284.f_2 > 180f)
						{
							Local_284.f_2 = (Local_284.f_2 - 360f);
						}
						if (Local_284.f_2 <= -180f)
						{
							Local_284.f_2 = (Local_284.f_2 + 360f);
						}
						if (vdist(Local_285, unk_0x3E4D3CCC220BDFB1(iParam0, true)) < 0.3f)
						{
							if (unk_0x0D77CDCF403AEBD2((fVar0 - Local_284.f_2)) < 15f)
							{
								unk_0x4E3E373422FB398D(iParam0, -1056964608);
								unk_0x9B94F6169B0DAEFD(iParam0);
								bLocal_288 = true;
								iLocal_286 = unk_0xF341A134A5B8D4F6(Local_283, Local_284, 2);
								if (bLocal_80)
								{
									unk_0xDFDB9C533700BC17(iParam0, iLocal_286, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 3, 0, 4f, 0);
									unk_0x1FEB07A1AF22700F(iLocal_50, iLocal_286, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								else
								{
									unk_0xDFDB9C533700BC17(iParam0, iLocal_286, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
									unk_0x1FEB07A1AF22700F(iLocal_50, iLocal_286, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								unk_0x1322CA891C5DF18A(iParam0, 0, 0);
								iLocal_48++;
							}
						}
						else if (unk_0x1D88F87079AF2FA7(iParam0) && !unk_0x9A70B1BD2A5BA09C(Local_283, 2f))
						{
							unk_0x03D382CB0B44E2FC(iParam0, Local_283, 1, false, 0, 1);
						}
					}
				}
				break;
			
			case 4:
				if (unk_0xFC5D6FB6EECB392F(iLocal_286))
				{
					if (bLocal_80)
					{
						fLocal_296 = 0.42f;
					}
					else
					{
						fLocal_296 = 0.3893f;
					}
					if (bLocal_80)
					{
						fLocal_297 = 0.52f;
					}
					else
					{
						fLocal_297 = 0.546243f;
					}
					if (!bLocal_79)
					{
						if ((unk_0xAE06B9E39EBDE049(iLocal_52) && unk_0x0A43129B43E05B32(iLocal_52, iParam0)) && unk_0x369E69441C066912(iLocal_286) > fLocal_296)
						{
							if (!unk_0x0A43129B43E05B32(iLocal_52, iLocal_50))
							{
								unk_0x1F8106DB8796859F(iLocal_52, 1, true);
								unk_0x58ADF88C51AAFDC5(iLocal_52, false, 0);
								unk_0xF8A652CE310FFC53(iLocal_52, iLocal_50, 0, unk_0x71C23069714A27B9(iLocal_50, unk_0x3E4D3CCC220BDFB1(iLocal_52, true)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_79 = true;
						}
					}
					else if (unk_0x369E69441C066912(iLocal_286) > fLocal_297)
					{
						unk_0x1CD098484842AE0B(iLocal_50, -4f, 1);
						unk_0x9B94F6169B0DAEFD(iParam0);
						if (unk_0xAE06B9E39EBDE049(iLocal_52))
						{
							iLocal_76 = 0;
							unk_0x7CC9C12947A9030C(iLocal_50, 2, 1);
							unk_0x7CC9C12947A9030C(iLocal_50, 3, 1);
							unk_0x4E65320BC9AD521C(iParam0, false);
							iLocal_48++;
						}
					}
				}
				break;
			
			case 5:
				if ((unk_0xFC5D6FB6EECB392F(iLocal_286) && unk_0x369E69441C066912(iLocal_286) > fLocal_297) || !unk_0xFC5D6FB6EECB392F(iLocal_286))
				{
					if (!bLocal_80)
					{
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]))
						{
							unk_0xC584E49FC3559A86(iLocal_49[0], iLocal_50, -1, -1, 1f, 1, 0);
						}
					}
					iLocal_48++;
				}
				break;
			
			case 6:
				if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0))
				{
					if (bLocal_80)
					{
						func_68(6);
					}
					else
					{
						func_68(4);
					}
				}
				else
				{
					func_68(8);
				}
				break;
			}
	}
	if (!unk_0x80FF6C016CDB0FAF(iLocal_50, 0))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) || !unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]))
		{
			func_68(8);
		}
	}
	if ((!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) || !unk_0x5AEB5DDFFAD43CA5(iLocal_49[1])) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (!bLocal_79)
		{
			if ((((((func_27() < 10f && unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 6)) && func_72()) || ((func_27() < 20f && unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 6)) && unk_0x7922FF28ED63354A(unk_0x9B0761B4C3EB8BC7()))) || (func_27() < 5f && bLocal_80)) || (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false) && func_80(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false)))) || ((!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false) && unk_0xAE06B9E39EBDE049(unk_0xA5D3CD332CD10EE9())) && func_80(unk_0xA5D3CD332CD10EE9())))
			{
				func_68(8);
			}
		}
	}
	if (iLocal_46 != 7)
	{
		if (bLocal_79)
		{
			if (unk_0xFC5D6FB6EECB392F(iLocal_286))
			{
				unk_0x1CD098484842AE0B(iLocal_50, -8f, 1);
			}
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
		{
			unk_0x4E65320BC9AD521C(iParam0, false);
		}
	}
	if ((unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && iLocal_46 != 7) && unk_0xFC5D6FB6EECB392F(iLocal_286))
	{
		unk_0x1CD098484842AE0B(iLocal_50, -8f, 1);
	}
}

int func_80(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var2;
	struct<3> Var3[4];
	struct<3> Var4[4];
	struct<3> Var5[4];
	struct<3> Var6[4];
	var uVar7;
	float fVar8;
	float fVar9;
	
	iVar0 = 0;
	if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0xAE06B9E39EBDE049(iLocal_50))
	{
		uVar7 = 4;
		unk_0x140662B520844E45(unk_0x36FE6D3220816ADA(iParam0), &Var1, &Var2);
		Var3[0 /*3*/] = { unk_0x7EC595B99EA7C4B1(iParam0, Var1, Var2.f_1, 0f) };
		Var3[1 /*3*/] = { unk_0x7EC595B99EA7C4B1(iParam0, Var2, Var2.f_1, 0f) };
		Var3[2 /*3*/] = { unk_0x7EC595B99EA7C4B1(iParam0, Var2, Var1.f_1, 0f) };
		Var3[3 /*3*/] = { unk_0x7EC595B99EA7C4B1(iParam0, Var1, Var1.f_1, 0f) };
		fVar8 = -3.7f;
		fVar9 = 1.35f;
		Var4[0 /*3*/] = { unk_0x7EC595B99EA7C4B1(iLocal_50, (-fVar9 - 0.25f), fVar8, 0f) };
		Var4[1 /*3*/] = { unk_0x7EC595B99EA7C4B1(iLocal_50, (fVar9 + 0.25f), fVar8, 0f) };
		Var4[2 /*3*/] = { unk_0x7EC595B99EA7C4B1(iLocal_50, (fVar9 - 0.25f), (fVar8 - 1.55f), 0f) };
		Var4[3 /*3*/] = { unk_0x7EC595B99EA7C4B1(iLocal_50, (-fVar9 + 0.25f), (fVar8 - 1.55f), 0f) };
		Var5[0 /*3*/] = { unk_0x7EC595B99EA7C4B1(iLocal_50, -fVar9, 0.5f, 0f) };
		Var5[1 /*3*/] = { unk_0x7EC595B99EA7C4B1(iLocal_50, (-fVar9 - 0.75f), 0.5f, 0f) };
		Var5[2 /*3*/] = { unk_0x7EC595B99EA7C4B1(iLocal_50, (-fVar9 - 0.75f), 1.5f, 0f) };
		Var5[3 /*3*/] = { unk_0x7EC595B99EA7C4B1(iLocal_50, -fVar9, 1.5f, 0f) };
		Var6[0 /*3*/] = { unk_0x7EC595B99EA7C4B1(iLocal_50, fVar9, 0.5f, 0f) };
		Var6[1 /*3*/] = { unk_0x7EC595B99EA7C4B1(iLocal_50, (fVar9 + 0.75f), 0.5f, 0f) };
		Var6[2 /*3*/] = { unk_0x7EC595B99EA7C4B1(iLocal_50, (fVar9 + 0.75f), 1.5f, 0f) };
		Var6[3 /*3*/] = { unk_0x7EC595B99EA7C4B1(iLocal_50, fVar9, 1.5f, 0f) };
		if (!bLocal_79)
		{
			if (func_81(&Var4, &Var3, &uVar7))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) && !unk_0xE0B3BC41DDA88DF0(iLocal_49[0], iLocal_50, true))
		{
			if (func_81(&Var5, &Var3, &uVar7))
			{
				iVar0 = 1;
			}
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]) && !unk_0xE0B3BC41DDA88DF0(iLocal_49[1], iLocal_50, true))
		{
			if (func_81(&Var6, &Var3, &uVar7))
			{
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_81(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar2 = iVar0 + 1;
		if (iVar2 == *uParam0)
		{
			iVar2 = 0;
		}
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			iVar3 = iVar1 + 1;
			if (iVar3 == *uParam1)
			{
				iVar3 = 0;
			}
			if (func_82(*(uParam0[iVar0 /*3*/]), *(uParam0[iVar2 /*3*/]), *(uParam1[iVar1 /*3*/]), *(uParam1[iVar3 /*3*/]), uParam2[iVar0 /*3*/]))
			{
				return 1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

int func_82(struct<3> Param0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, struct<2> Param5, var uParam6, var uParam7)
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
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = Param0.x;
	fVar1 = Param1;
	fVar2 = Param3;
	fVar3 = Param5;
	fVar4 = Param0.f_1;
	fVar5 = Param1.f_1;
	fVar6 = Param3.f_1;
	fVar7 = Param5.f_1;
	fVar8 = (((fVar0 - fVar1) * (fVar6 - fVar7)) - ((fVar4 - fVar5) * (fVar2 - fVar3)));
	if (fVar8 == 0f)
	{
		return 0;
	}
	fVar9 = ((fVar0 * fVar5) - (fVar4 * fVar1));
	fVar10 = ((fVar2 * fVar7) - (fVar6 * fVar3));
	fVar11 = (((fVar9 * (fVar2 - fVar3)) - ((fVar0 - fVar1) * fVar10)) / fVar8);
	fVar12 = (((fVar9 * (fVar6 - fVar7)) - ((fVar4 - fVar5) * fVar10)) / fVar8);
	if (((fVar11 < func_84(fVar0, fVar1) || fVar11 > func_83(fVar0, fVar1)) || fVar11 < func_84(fVar2, fVar3)) || fVar11 > func_83(fVar2, fVar3))
	{
		return 0;
	}
	if (((fVar12 < func_84(fVar4, fVar5) || fVar12 > func_83(fVar4, fVar5)) || fVar12 < func_84(fVar6, fVar7)) || fVar12 > func_83(fVar6, fVar7))
	{
		return 0;
	}
	*uParam7 = fVar11;
	uParam7->f_1 = fVar12;
	uParam7->f_2 = Param0.f_2;
	return 1;
}

float func_83(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_84(float fParam0, float fParam1)
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_85(int iParam0)
{
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (!unk_0xAE06B9E39EBDE049(iLocal_52))
		{
			iLocal_52 = unk_0x79CC07752E7432A1(iLocal_75, Local_63, true, true, false);
			unk_0xC62EE91883AF24A2(iLocal_52, false);
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_52))
		{
			unk_0xF8A652CE310FFC53(iLocal_52, iParam0, unk_0xE6B87C42793036AA(iParam0, 28422), Local_68, Local_69, 1, 0, 0, 0, 2, 1);
		}
	}
}

void func_86()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_48)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < iLocal_49)
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar0]))
				{
					unk_0x4E65320BC9AD521C(iLocal_49[iVar0], true);
				}
				iVar0++;
			}
			bLocal_80 = true;
			if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0))
			{
				if (unk_0xAE06B9E39EBDE049(func_89()))
				{
					if (!unk_0x5AEB5DDFFAD43CA5(func_89()))
					{
						if (unk_0x10D3F7E169A49C44(iLocal_50, -1, 0) != func_89() && unk_0xB064AF9925F5537B(iLocal_50, -1, 0))
						{
							unk_0xC584E49FC3559A86(func_89(), iLocal_50, 20000, -1, 2f, 1, 0);
						}
					}
				}
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]) && func_89() != iLocal_49[1])
				{
					if (unk_0x10D3F7E169A49C44(iLocal_50, 0, 0) != iLocal_49[1] && unk_0xB064AF9925F5537B(iLocal_50, 0, 0))
					{
						unk_0xC584E49FC3559A86(iLocal_49[1], iLocal_50, -1, 0, 2f, 1, 0);
					}
				}
				iLocal_48++;
			}
			else
			{
				func_68(8);
			}
			break;
		
		case 1:
			if (func_88())
			{
				if (unk_0xAE06B9E39EBDE049(func_89()) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
				{
					unk_0xBD204892D76E6303(func_89(), iLocal_50, unk_0x9B0761B4C3EB8BC7(), 8, 50f, 786484, 100f, 5f, 1);
					iLocal_48++;
				}
			}
			break;
		
		case 2:
			if (func_87())
			{
				if (unk_0xAE06B9E39EBDE049(func_89()))
				{
					unk_0x63898068FDE8F8E4(func_89(), iLocal_50, 0, 5, 0f, 786484, 100f, 100f, 1);
					iLocal_48++;
				}
			}
			break;
		
		case 3:
			if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0))
			{
				if (unk_0xF3A639BEE7AADF55(iLocal_50) < 2f)
				{
					func_68(8);
				}
			}
			break;
	}
	if ((unk_0xAE06B9E39EBDE049(iLocal_50) && unk_0xAE06B9E39EBDE049(unk_0x10D3F7E169A49C44(iLocal_50, -1, 0))) && (unk_0xA59F96B50B97E63C(unk_0x10D3F7E169A49C44(iLocal_50, -1, 0), 0) || unk_0x5AEB5DDFFAD43CA5(unk_0x10D3F7E169A49C44(iLocal_50, -1, 0))))
	{
		iVar1 = 0;
		if (unk_0x10D3F7E169A49C44(iLocal_50, -1, 0) == iLocal_49[0])
		{
			iVar1 = 1;
		}
		if (vdist2(unk_0x3E4D3CCC220BDFB1(iLocal_50, true), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true)) > 100f)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar1]) && unk_0x16BC17A8EDC701A2(iLocal_49[iVar1], 242628503) != 1)
			{
				unk_0x6AC7395A8E313A46(iLocal_49[iVar1], 2, true);
				unk_0x9DC06E2A59C5AEBB(&iVar2);
				unk_0xD544FE5B026DBAA6(0, iLocal_50, 0);
				unk_0xBD204892D76E6303(0, iLocal_50, unk_0x9B0761B4C3EB8BC7(), 8, 50f, 786484, 100f, 5f, 1);
				unk_0x19F29730874AD6F1(iVar2);
				unk_0x9B6EC2CECE1010EF(iLocal_49[iVar1], iVar2);
				unk_0x4F83FEE4454169D4(&iVar2);
			}
		}
		else
		{
			func_68(8);
		}
	}
	if (((((((!unk_0x80FF6C016CDB0FAF(iLocal_50, 0) || unk_0xF10E878C0879E7E9(iLocal_103)) || iLocal_47 == 3) || unk_0xBCB2BD5C2E502335(iLocal_50, 0, 7000)) || unk_0xBCB2BD5C2E502335(iLocal_50, 3, 30000)) || unk_0xBCB2BD5C2E502335(iLocal_50, 2, 30000)) || unk_0xBCB2BD5C2E502335(iLocal_50, 1, 40000)) || (iLocal_48 > 1 && !func_88()))
	{
		if (!func_88())
		{
		}
		func_68(8);
	}
}

int func_87()
{
	if (unk_0xAE06B9E39EBDE049(iLocal_50))
	{
		if (!unk_0xA59F96B50B97E63C(iLocal_50, 0))
		{
			if (((((unk_0x4F5F2FB7AE0EB7AB(iLocal_50) < 300 || unk_0xDAD5E5518E960CD1(iLocal_50) < 200f) || (unk_0x5C87AA49B5DF6712(iLocal_50, 0, 0) && unk_0x5C87AA49B5DF6712(iLocal_50, 1, 0))) || (unk_0x5C87AA49B5DF6712(iLocal_50, 4, 0) && unk_0x5C87AA49B5DF6712(iLocal_50, 5, 0))) || (unk_0x5C87AA49B5DF6712(iLocal_50, 0, 0) && unk_0x5C87AA49B5DF6712(iLocal_50, 4, 0))) || (unk_0x5C87AA49B5DF6712(iLocal_50, 1, 0) && unk_0x5C87AA49B5DF6712(iLocal_50, 5, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_88()
{
	int iVar0;
	
	iVar0 = 1;
	if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) && !unk_0xA59F96B50B97E63C(iLocal_49[0], 0))
		{
			if (!unk_0xE0B3BC41DDA88DF0(iLocal_49[0], iLocal_50, false))
			{
				iVar0 = 0;
			}
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]) && !unk_0xA59F96B50B97E63C(iLocal_49[1], 0))
		{
			if (!unk_0xE0B3BC41DDA88DF0(iLocal_49[1], iLocal_50, false))
			{
				iVar0 = 0;
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_89()
{
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) && !unk_0xA59F96B50B97E63C(iLocal_49[0], 0))
	{
		return iLocal_49[0];
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]) && !unk_0xA59F96B50B97E63C(iLocal_49[1], 0))
	{
		return iLocal_49[1];
	}
	return 0;
}

void func_90()
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_48)
	{
		case 0:
			if (!bLocal_79)
			{
				if (unk_0xAE06B9E39EBDE049(iLocal_52) && unk_0xB77B1396EAA80D8F(iLocal_52))
				{
					unk_0x1F8106DB8796859F(iLocal_52, 1, true);
				}
			}
			if ((!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) || !unk_0x5AEB5DDFFAD43CA5(iLocal_49[1])) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if (func_27() < 20f)
				{
					func_4(&Local_106, cLocal_105, "RESEC_FFLEE", 8, 0, 0, 0);
				}
				iVar0 = 0;
				while (iVar0 < iLocal_49)
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar0]))
					{
						unk_0x6673CC701BC8E9C1(iLocal_49[iVar0], 17, true);
						unk_0x6AC7395A8E313A46(iLocal_49[iVar0], 128, true);
						unk_0x6AC7395A8E313A46(iLocal_49[iVar0], 16, true);
						unk_0x6673CC701BC8E9C1(iLocal_49[iVar0], 1, false);
						unk_0x9DC06E2A59C5AEBB(&iVar1);
						if (unk_0x47DBF174A0CB9D55(iLocal_49[iVar0], true))
						{
							unk_0x0AB756271BADC8DF(iLocal_49[iVar0], 0, 256);
						}
						unk_0x8B18A80E8EB15510(0, unk_0x9B0761B4C3EB8BC7(), 300f, -1, 0, 0);
						unk_0x19F29730874AD6F1(iVar1);
						unk_0x9B6EC2CECE1010EF(iLocal_49[iVar0], iVar1);
						unk_0x4F83FEE4454169D4(&iVar1);
					}
					iVar0++;
				}
			}
			bLocal_83 = true;
			iLocal_48++;
			break;
		
		case 1:
			if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0))
			{
				if (func_91(iLocal_50, 1, 0, 0, 0, 0, 1, 0, 1))
				{
					iLocal_48++;
				}
			}
			break;
	}
}

int func_91(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = unk_0x99E61B3887CC8E71(iParam0) + 1;
	if (iParam4 || !unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_93(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (unk_0xAE06B9E39EBDE049(iVar2))
			{
				if (iParam3 && iVar2 == unk_0x9B0761B4C3EB8BC7())
				{
				}
				else if (bParam2)
				{
					if (unk_0xD0390A93AF3907B8(iVar2))
					{
						iVar3 = unk_0xE4400E48E081F17A(iVar2);
						if (((!unk_0x5AEB5DDFFAD43CA5(iVar2) && iVar3 != func_10()) && func_92(iVar3, 1, 1)) || iParam8)
						{
							if (unk_0x1A3D0DF92BF7D8C4(unk_0xE4400E48E081F17A(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!unk_0x5AEB5DDFFAD43CA5(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_92(int iParam0, bool bParam1, bool bParam2)
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

int func_93(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!unk_0xB064AF9925F5537B(iParam0, iParam1, iParam3))
	{
		iVar0 = unk_0x10D3F7E169A49C44(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!unk_0xAE06B9E39EBDE049(iVar0) && !unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			iVar0 = unk_0x37022B7FE1589189(iParam0, iParam1);
			if (!unk_0xA59F96B50B97E63C(iVar0, 0))
			{
				if (unk_0x16BC17A8EDC701A2(iVar0, 451360105) == 1 || unk_0x16BC17A8EDC701A2(iVar0, -828834893) == 1)
				{
					if (vdist(unk_0x3E4D3CCC220BDFB1(iParam0, false), unk_0x3E4D3CCC220BDFB1(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_94()
{
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) && !unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]))
	{
		switch (iLocal_48)
		{
			case 0:
				if (func_4(&Local_106, cLocal_105, "RESEC_CAR1", 8, 0, 0, 0))
				{
					if (unk_0xAE06B9E39EBDE049(iLocal_52) && unk_0xB77B1396EAA80D8F(iLocal_52))
					{
						if (!unk_0x0A43129B43E05B32(iLocal_52, iLocal_49[0]))
						{
							func_95(0);
						}
						else
						{
							unk_0x9B94F6169B0DAEFD(iLocal_49[0]);
						}
						if (!unk_0x0A43129B43E05B32(iLocal_52, iLocal_49[1]))
						{
							func_95(1);
						}
						else
						{
							unk_0x9B94F6169B0DAEFD(iLocal_49[1]);
						}
						iLocal_48++;
					}
					else
					{
						func_95(0);
						func_95(1);
						iLocal_48 = 2;
					}
				}
				break;
			
			case 1:
				if (func_76(iLocal_96))
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iLocal_96]))
					{
						func_95(iLocal_96);
					}
					iLocal_48++;
				}
				break;
			
			case 2:
				if (!func_73())
				{
					if (func_4(&Local_106, cLocal_105, "RESEC_CAR2", 8, 0, 0, 0))
					{
						settimera(0);
						iLocal_48++;
					}
				}
				break;
			
			case 3:
				if ((timera() > 12000 && !func_73()) && func_4(&Local_106, cLocal_105, "RESEC_CAR3", 8, 0, 0, 0))
				{
					settimera(0);
					iLocal_48++;
				}
				break;
			
			case 4:
				if ((timera() > 7000 && !func_73()) && func_4(&Local_106, cLocal_105, "RESEC_CAR4", 8, 0, 0, 0))
				{
					settimera(0);
					func_68(8);
				}
				break;
			}
	}
	if (iLocal_48 > 0)
	{
		func_77(-1, 1);
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_51))
	{
		if (!unk_0xA59F96B50B97E63C(iLocal_51, 0) && unk_0x80FF6C016CDB0FAF(iLocal_50, 0))
		{
			if (vdist(unk_0x3E4D3CCC220BDFB1(iLocal_51, true), unk_0x3E4D3CCC220BDFB1(iLocal_50, true)) > 10f)
			{
				func_68(7);
			}
		}
		if ((unk_0xA59F96B50B97E63C(iLocal_51, 0) || !unk_0x80FF6C016CDB0FAF(iLocal_51, 0)) || (!unk_0x1D92A4A6F3D3A021(iLocal_51, 90f) && !unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_51, true)))
		{
			if (!func_80(iLocal_51))
			{
				func_68(7);
			}
			else
			{
				func_68(8);
			}
		}
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0xCDF860E56BBCC6B4(iLocal_49[0], unk_0x9B0761B4C3EB8BC7(), 1))
		{
			func_68(8);
		}
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0xCDF860E56BBCC6B4(iLocal_49[1], unk_0x9B0761B4C3EB8BC7(), 1))
		{
			func_68(8);
		}
	}
	if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (iLocal_86)
		{
			func_68(8);
		}
	}
	if (bLocal_89)
	{
		func_68(8);
	}
	if ((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && func_72()) && unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 7))
	{
		func_68(2);
	}
	if (!unk_0x80FF6C016CDB0FAF(iLocal_50, 0))
	{
		func_68(5);
	}
}

void func_95(int iParam0)
{
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iParam0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		unk_0x9B94F6169B0DAEFD(iLocal_49[iParam0]);
		unk_0x9DC06E2A59C5AEBB(&iLocal_54);
		if (unk_0x47DBF174A0CB9D55(iLocal_49[iParam0], false))
		{
			unk_0x0AB756271BADC8DF(0, 0, 256);
		}
		unk_0xE2348E4036041923(0);
		unk_0xA785552633ED203B(0, unk_0x9B0761B4C3EB8BC7(), -1, 0, 2);
		unk_0xDEA135D03FA041A8(0, unk_0x9B0761B4C3EB8BC7(), -1, 0);
		unk_0x19F29730874AD6F1(iLocal_54);
		unk_0x9B6EC2CECE1010EF(iLocal_49[iParam0], iLocal_54);
		unk_0x4F83FEE4454169D4(&iLocal_54);
		if (iLocal_97 == 0)
		{
			iLocal_97 = unk_0x077EB65374D89330(118, unk_0x3E4D3CCC220BDFB1(iLocal_49[iParam0], true), -1f);
		}
	}
}

void func_96()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_48)
	{
		case 0:
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]))
			{
				unk_0x4E65320BC9AD521C(iLocal_49[0], true);
			}
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]))
			{
				unk_0x4E65320BC9AD521C(iLocal_49[1], true);
			}
			if (func_103())
			{
				if (func_4(&Local_106, cLocal_105, "RESEC_ATT1", 8, 0, 0, 0))
				{
					settimera(0);
					func_68(8);
				}
			}
			else if ((!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) && !unk_0x5AEB5DDFFAD43CA5(iLocal_49[1])) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if (func_102() || func_101())
				{
					func_4(&Local_106, cLocal_105, "RESEC_ENT1", 8, 0, 0, 0);
				}
				else if (unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 4))
				{
					func_4(&Local_106, cLocal_105, "RESEC_WEP1", 8, 0, 0, 0);
				}
				else
				{
					func_4(&Local_106, cLocal_105, "RESEC_WARN", 8, 0, 0, 0);
				}
				settimera(0);
				if (unk_0xAE06B9E39EBDE049(iLocal_52) && unk_0xB77B1396EAA80D8F(iLocal_52))
				{
					if (!unk_0x0A43129B43E05B32(iLocal_52, iLocal_49[0]))
					{
						func_95(0);
					}
					else
					{
						unk_0x9B94F6169B0DAEFD(iLocal_49[0]);
					}
					if (!unk_0x0A43129B43E05B32(iLocal_52, iLocal_49[1]))
					{
						func_95(1);
					}
					else
					{
						unk_0x9B94F6169B0DAEFD(iLocal_49[1]);
					}
					iLocal_48++;
				}
				else
				{
					func_95(0);
					func_95(1);
					iLocal_48 = 2;
				}
			}
			break;
		
		case 1:
			if (func_76(iLocal_96))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iLocal_96]))
				{
					func_95(iLocal_96);
				}
				iLocal_48++;
			}
			break;
		
		case 2:
			if (!func_100())
			{
				if (!func_99(iLocal_50, 1000) && timera() > 10000)
				{
					bVar0 = true;
				}
				else if (timera() > 7000)
				{
					settimera(7000);
				}
				if (timera() > 5000)
				{
					if (func_102())
					{
						bVar0 = true;
					}
				}
				if (timera() > 10000)
				{
					if (func_101())
					{
						bVar0 = true;
					}
				}
				iVar1 = 0;
				while (iVar1 < iLocal_49)
				{
					if (!func_99(iLocal_49[iVar1], 1000) && (func_27() < 2f && unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 6)))
					{
						bVar0 = true;
					}
					if (!unk_0xA59F96B50B97E63C(iLocal_49[iVar1], 0))
					{
						if (unk_0x2311EB213A0CB707(unk_0x460153A63B9477BC(), iLocal_49[iVar1]) || unk_0x5E5402F6D3B26AFB(unk_0x460153A63B9477BC(), iLocal_49[iVar1]))
						{
							bVar0 = true;
						}
					}
					iVar1++;
				}
				func_77(-1, 1);
				if (IntToFloat((unk_0x578C4EF320340AF7() - iLocal_292)) > unk_0x658086F2B3C5E4E4(5000f, 7500f))
				{
					if (!func_73())
					{
						if (func_4(&Local_106, cLocal_105, "RESEC_WARN", 8, 0, 0, 0))
						{
							iLocal_292 = unk_0x578C4EF320340AF7();
						}
					}
				}
				if (bVar0)
				{
					func_97();
					func_68(8);
				}
			}
			break;
	}
	iVar2 = 0;
	while (iVar2 < iLocal_49)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && unk_0xAE06B9E39EBDE049(iLocal_49[iVar2]))
		{
			if ((unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar2]) || unk_0xA59F96B50B97E63C(iLocal_49[iVar2], 0)) && unk_0xCDF860E56BBCC6B4(iLocal_49[iVar2], unk_0x9B0761B4C3EB8BC7(), 0))
			{
				func_68(8);
			}
		}
		iVar2++;
	}
	if ((unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) || unk_0x5AEB5DDFFAD43CA5(iLocal_49[1])) || bLocal_89)
	{
		func_68(8);
	}
	if ((unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7())) && func_72())
	{
		if (unk_0xCDF860E56BBCC6B4(iLocal_50, unk_0x9B0761B4C3EB8BC7(), 1))
		{
			func_68(8);
		}
	}
	if (!unk_0x80FF6C016CDB0FAF(iLocal_50, 0))
	{
		func_68(5);
	}
	if ((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 6)) && unk_0x7922FF28ED63354A(unk_0x9B0761B4C3EB8BC7()))
	{
		func_68(8);
	}
	if (func_27() > 20f || ((!iLocal_281[0] && !iLocal_281[1]) && func_27() > 5f))
	{
		func_68(7);
	}
}

void func_97()
{
	Global_19871 = 0;
	func_98();
}

void func_98()
{
	unk_0x62B2C9892E3E142D();
	Global_22016 = 0;
	if (unk_0x6A5CC4A2C9D9ED8D())
	{
		unk_0xBE4122AC23440E7D(false);
		Global_21005 = 6;
	}
}

int func_99(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0xAE06B9E39EBDE049(iParam0))
		{
			if ((unk_0xA1914E72A0EB31D0(iParam0) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9048E8838E822F21(iParam0))) || (unk_0x20F7576FDB52E2B0(iParam0) && unk_0x80FF6C016CDB0FAF(unk_0xEA90A5DC55A2F652(iParam0), 0)))
			{
				if (vdist(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(iParam0, true)) > fLocal_290)
				{
					iVar0 = 1;
				}
				if ((unk_0x578C4EF320340AF7() - iLocal_291) > iParam1)
				{
					fLocal_290 = vdist(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(iParam0, true));
					iLocal_291 = unk_0x578C4EF320340AF7();
				}
			}
		}
	}
	return iVar0;
}

int func_100()
{
	if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (!unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_50, 20f, 20f, 5f, 0, 1, 0) && !unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_101()
{
	int iVar0;
	
	if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), unk_0x7EC595B99EA7C4B1(iLocal_50, 0f, 1.7532f, 0.5984f), unk_0x7EC595B99EA7C4B1(iLocal_50, 0f, 3.3477f, 3.5984f), 2.8f, 0, true, 0))
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_49)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar0]))
			{
				if ((!unk_0xE0B3BC41DDA88DF0(iLocal_49[iVar0], iLocal_50, false) && unk_0x424918D1615FDC73(unk_0x9B0761B4C3EB8BC7(), iLocal_50)) && vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(iLocal_49[iVar0], true)) < 400f)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_102()
{
	if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0xB0919F8F7C8097BD(unk_0x9B0761B4C3EB8BC7()) == iLocal_50)
		{
			if (unk_0xB9D0431C6F6D21BC(unk_0x9B0761B4C3EB8BC7()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_103()
{
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if ((!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) && unk_0x910DFF8E55ABB8EC(iLocal_49[0], unk_0x9B0761B4C3EB8BC7(), 20f, 20f, 5f, 0, 1, 0)) || (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]) && unk_0x910DFF8E55ABB8EC(iLocal_49[1], unk_0x9B0761B4C3EB8BC7(), 20f, 20f, 5f, 0, 1, 0)))
		{
			if (unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 4) && unk_0x7922FF28ED63354A(unk_0x9B0761B4C3EB8BC7()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_104(char* sParam0)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_105(var uParam0, struct<3> Param1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
	{
		func_135(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_106(uParam0, Param1, iParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_106(var uParam0, struct<3> Param1, var uParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	int iVar0;
	
	if (uParam0->f_1 && unk_0x28BD5A3E7899F23D())
	{
		if (unk_0x578C4EF320340AF7() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam2;
	if (unk_0x211E6DB3335430B4(iVar0))
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_104(iVar0))
	{
		func_127();
	}
	if (!unk_0x28BD5A3E7899F23D())
	{
		if (func_122(uParam0, bParam4, bParam6, 0))
		{
			func_121(uParam0, Param1, iParam3);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_111(iVar0))
			{
				if ((unk_0x211E6DB3335430B4(uParam0->f_3) && !unk_0x211E6DB3335430B4(iVar0)) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
				{
					if ((unk_0x9A70B1BD2A5BA09C(Param1, 1f) && !unk_0xDABD547F0DF2906C()) && uParam5)
					{
						if (!func_104(iVar0))
						{
							func_137(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xF005CCA4263DF67F("CMN_HINT", iVar0))
							{
								func_110(1);
							}
						}
					}
				}
			}
		}
		else if (func_111(iVar0))
		{
			if (unk_0x211E6DB3335430B4(uParam0->f_3) && !unk_0x211E6DB3335430B4(iVar0))
			{
				if ((unk_0x9A70B1BD2A5BA09C(Param1, 1f) && !unk_0xDABD547F0DF2906C()) && uParam5)
				{
					if (!func_104(iVar0))
					{
						func_137(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (unk_0xF005CCA4263DF67F("CMN_HINT", iVar0))
						{
							func_110(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!unk_0x211E6DB3335430B4(iVar0))
		{
			if (func_104(iVar0) && unk_0xDABD547F0DF2906C())
			{
				unk_0xD289B55B6AADBA10(1);
			}
		}
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
		{
			if (unk_0xDF1110AC39C733FE(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xF7B3A1430308F92B(3) == 3 || unk_0xF7B3A1430308F92B(3) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x94BF5C4EB0D40E9E(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xF7B3A1430308F92B(6) == 3 || unk_0xF7B3A1430308F92B(6) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xAABDC18B9F6EC79D(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xF7B3A1430308F92B(4) == 3 || unk_0xF7B3A1430308F92B(4) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xF1263D4D1D8024EF(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xF7B3A1430308F92B(5) == 3 || unk_0xF7B3A1430308F92B(5) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0xE4B70EFD14220305(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xF7B3A1430308F92B(2) == 3 || unk_0xF7B3A1430308F92B(2) == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			else if (unk_0x1075BD5031B0682E() == 3 || unk_0x1075BD5031B0682E() == 4)
			{
				func_135(uParam0, iVar0, 1);
			}
		}
		if (!func_122(uParam0, bParam4, bParam6, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_109(uParam0))
			{
				func_107(uParam0);
			}
		}
	}
}

void func_107(var uParam0)
{
	if (func_108(unk_0x9B0761B4C3EB8BC7()))
	{
		unk_0xE2348E4036041923(unk_0x9B0761B4C3EB8BC7());
	}
	if (unk_0x28BD5A3E7899F23D())
	{
		unk_0x0C23023B6B6C6051(true);
		unk_0x8B4966914EE5EB9F(0);
		unk_0xFA07F8BEBDAAFBA8("HINT_CAM_SCENE");
		unk_0x50E637E6CAC936B2("FocusIn");
		if (uParam0->f_11)
		{
			unk_0x0A794A8277A63161("FocusOut", 0, 0);
			unk_0xC4CC25B68A91D144(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_108(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (unk_0x20F7576FDB52E2B0(iParam0))
		{
			if (unk_0x80FF6C016CDB0FAF(unk_0xEA90A5DC55A2F652(iParam0), 0))
			{
				return 1;
			}
		}
		else if (unk_0xA1914E72A0EB31D0(iParam0))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9048E8838E822F21(iParam0)))
			{
				return 1;
			}
		}
		else if (unk_0x49116E591C7E1412(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_109(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > unk_0x578C4EF320340AF7()
		{
			return 1;
		}
	}
	return 0;
}

int func_110(bool bParam0)
{
	switch (Global_41631)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_111858.f_10045.f_100++;
			}
			return Global_111858.f_10045.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_111858.f_10045.f_101++;
			}
			return Global_111858.f_10045.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_111858.f_10045.f_102++;
			}
			return Global_111858.f_10045.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_111(char* sParam0)
{
	if (!func_112(1, 1, 0))
	{
		if ((!unk_0x7BCC91F3C1CF24E8(sParam0) && func_104(sParam0)) || func_104("CMN_HINT"))
		{
			unk_0xD289B55B6AADBA10(1);
		}
		return 0;
	}
	switch (Global_41631)
	{
		case 0:
		case 3:
			if (func_110(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_110(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_110(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_112(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (unk_0x9CC4D06F5338CA6B())
	{
		return 0;
	}
	if (func_120(0))
	{
		return 0;
	}
	if (func_119())
	{
		return 0;
	}
	if (unk_0xDFAB5E5CBE16E8B1())
	{
		return 0;
	}
	if (Global_74030)
	{
		return 0;
	}
	if (unk_0x7B70881748D166CD(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_58898)
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
		{
			if (unk_0xDF1110AC39C733FE(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xF7B3A1430308F92B(3) == 3 || unk_0xF7B3A1430308F92B(3) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x94BF5C4EB0D40E9E(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xF7B3A1430308F92B(6) == 3 || unk_0xF7B3A1430308F92B(6) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xAABDC18B9F6EC79D(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xF7B3A1430308F92B(4) == 3 || unk_0xF7B3A1430308F92B(4) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xF1263D4D1D8024EF(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xF7B3A1430308F92B(5) == 3 || unk_0xF7B3A1430308F92B(5) == 4)
				{
					return 0;
				}
			}
			else if (unk_0xE4B70EFD14220305(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xF7B3A1430308F92B(2) == 3 || unk_0xF7B3A1430308F92B(2) == 4)
				{
					return 0;
				}
			}
			else if (unk_0x1075BD5031B0682E() == 3 || unk_0x1075BD5031B0682E() == 4)
			{
				return 0;
			}
			if (unk_0xB2E78D7FD7EFCFD1())
			{
				return 0;
			}
		}
	}
	if ((func_118() || func_117(Global_4456448.f_129348)) || func_116())
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
			iVar1 = func_115(unk_0x9B0761B4C3EB8BC7(), 0);
			if (((unk_0x09F8284D2E03269D(iVar0, iVar1) || (unk_0x36FE6D3220816ADA(iVar0) == joaat("apc") && iVar1 != -1)) || (unk_0x36FE6D3220816ADA(iVar0) == joaat("akula") && iVar1 != -1)) || (((unk_0x36FE6D3220816ADA(iVar0) == joaat("riot2") && iVar1 == 0) && func_114(iVar0, 10)) && unk_0x7F8B14CBFB9813E5(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1688745)
	{
		return 0;
	}
	if (func_113(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	return 1;
}

int func_113(int iParam0)
{
	if (iParam0 != func_10())
	{
		if (func_92(iParam0, 1, 1))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6 != -1;
		}
		else if ((Global_1312896 && iParam0 == unk_0x460153A63B9477BC()) && func_92(iParam0, 1, 0))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6 != -1;
		}
	}
	return 0;
}

int func_114(int iParam0, int iParam1)
{
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		if (unk_0xC71761E30ACCF098(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (unk_0xAB92DA7B6007DAAA(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_115(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (unk_0x47DBF174A0CB9D55(iParam0, bParam1))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(iParam0, bParam1);
			if (unk_0xAE06B9E39EBDE049(iVar0))
			{
				iVar1 = unk_0x112A81273D7187A5(unk_0x36FE6D3220816ADA(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!unk_0xB064AF9925F5537B(iVar0, iVar3, 0))
					{
						if (unk_0x10D3F7E169A49C44(iVar0, iVar3, 0) == iParam0)
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

var func_116()
{
	return Global_2451787.f_18;
}

bool func_117(int iParam0)
{
	return iParam0 == 51;
}

var func_118()
{
	return Global_2451787.f_17;
}

bool func_119()
{
	return unk_0x578C4EF320340AF7() <= Global_22550.f_5878 + 100;
}

int func_120(int iParam0)
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

void func_121(var uParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x0C23023B6B6C6051(false);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam2 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	unk_0x04934C9E3CC881A2(Param1, -1, iVar0, iVar1, iParam2);
	iVar2 = 2048;
	iVar3 = 3;
	unk_0x439AF5D920F78274(unk_0x9B0761B4C3EB8BC7(), Param1, -1, iVar2, iVar3);
	unk_0x0A794A8277A63161("FocusIn", 0, 0);
	unk_0x17E478571720218F("HINT_CAM_SCENE");
	unk_0xC4CC25B68A91D144(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x578C4EF320340AF7();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_122(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (unk_0x578C4EF320340AF7() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
				{
					if (func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x578C4EF320340AF7();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x578C4EF320340AF7();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x578C4EF320340AF7();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = unk_0x578C4EF320340AF7();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_109(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((unk_0x578C4EF320340AF7() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
					{
						if (!func_126(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = unk_0x578C4EF320340AF7();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x578C4EF320340AF7();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x578C4EF320340AF7();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = unk_0x578C4EF320340AF7();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
				{
					if (!func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_125(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_125(bParam1, bParam2, bParam3) || unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true) || unk_0xA4E17AE82A76F738(unk_0x9B0761B4C3EB8BC7(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((unk_0x578C4EF320340AF7() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
					{
						if (func_124(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true) || func_123(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true) || unk_0xA4E17AE82A76F738(unk_0x9B0761B4C3EB8BC7(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_124(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_109(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_112(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_127();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_123(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		if (!unk_0x8B1FF66E0C62B7AE(unk_0x460153A63B9477BC()))
		{
			unk_0x779660A9E5364C4D(0, 140, 1);
			unk_0x779660A9E5364C4D(0, 80, 1);
			if (unk_0x275A6259432E6B3C(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_124(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		unk_0x779660A9E5364C4D(0, 80, 1);
		if (unk_0xF86D3D6D2985D768())
		{
			if (unk_0x275A6259432E6B3C(0, 80))
			{
				unk_0x0C23023B6B6C6051(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_125(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		if (!unk_0x8B1FF66E0C62B7AE(unk_0x460153A63B9477BC()))
		{
			unk_0x779660A9E5364C4D(0, 140, 1);
			unk_0x779660A9E5364C4D(0, 80, 1);
			if (unk_0xB9C0D9B37277621D(0, 80) && unk_0x578C4EF320340AF7() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_126(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_112(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		unk_0x779660A9E5364C4D(0, 80, 1);
		if (unk_0xF86D3D6D2985D768())
		{
			if (unk_0xB9C0D9B37277621D(0, 80) && unk_0x578C4EF320340AF7() > Global_116)
			{
				unk_0x0C23023B6B6C6051(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_127()
{
	unk_0xBE20AB8238688965(&Global_7552, 4);
}

void func_128(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_129(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_129(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
	{
		func_135(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_130(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_130(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && unk_0x28BD5A3E7899F23D())
	{
		if (unk_0x578C4EF320340AF7() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (unk_0x211E6DB3335430B4(iVar0))
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_104(iVar0))
	{
		func_127();
	}
	if (func_108(iParam1) && unk_0xDC79F755CB11603C(iParam1))
	{
		iVar1 = 0;
		if (unk_0xA1914E72A0EB31D0(iParam1))
		{
			unk_0x2D5FBCB5F3775D68(unk_0x9048E8838E822F21(iParam1));
			unk_0xD406B5CBBDDAAC9A(unk_0x9048E8838E822F21(iParam1), 1);
			if (unk_0x81FEEBF9E5FB5F68(unk_0x9048E8838E822F21(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x20F7576FDB52E2B0(iParam1))
		{
			unk_0x66E3DC03D85A1C4A(unk_0xEA90A5DC55A2F652(iParam1));
			if (unk_0xDBB6DC5D5008C6CA(unk_0xEA90A5DC55A2F652(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (unk_0x49116E591C7E1412(iParam1))
		{
			unk_0xDE8B4334708FAB1C(unk_0x12A172E7609C3E0E(iParam1));
			if (unk_0x724265F5B01A8251(unk_0x12A172E7609C3E0E(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!unk_0x28BD5A3E7899F23D())
		{
			if (func_122(uParam0, bParam5, bParam7, 0))
			{
				func_131(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_111(iVar0))
				{
					if ((unk_0x211E6DB3335430B4(uParam0->f_3) && !unk_0x211E6DB3335430B4(iVar0)) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
					{
						if ((iVar1 && !unk_0xDABD547F0DF2906C()) && uParam6)
						{
							if (!func_104(iVar0))
							{
								func_137(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (unk_0xF005CCA4263DF67F("CMN_HINT", iVar0))
								{
									func_110(1);
								}
							}
						}
					}
				}
			}
			else if (func_111(iVar0))
			{
				if (unk_0x211E6DB3335430B4(uParam0->f_3) && !unk_0x211E6DB3335430B4(iVar0))
				{
					if (((unk_0xA38BFCB05DBE439D(iParam1) && iVar1) && !unk_0xDABD547F0DF2906C()) && uParam6)
					{
						if (!func_104(iVar0))
						{
							func_137(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (unk_0xF005CCA4263DF67F("CMN_HINT", iVar0))
							{
								func_110(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!unk_0x211E6DB3335430B4(sParam3))
			{
				if (func_104(sParam3))
				{
					unk_0xD289B55B6AADBA10(1);
				}
			}
			if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true))
			{
				if (unk_0xDF1110AC39C733FE(unk_0x9B0761B4C3EB8BC7()))
				{
					if (unk_0xF7B3A1430308F92B(3) == 3 || unk_0xF7B3A1430308F92B(3) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x94BF5C4EB0D40E9E(unk_0x9B0761B4C3EB8BC7()))
				{
					if (unk_0xF7B3A1430308F92B(6) == 3 || unk_0xF7B3A1430308F92B(6) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xAABDC18B9F6EC79D(unk_0x9B0761B4C3EB8BC7()))
				{
					if (unk_0xF7B3A1430308F92B(4) == 3 || unk_0xF7B3A1430308F92B(4) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xF1263D4D1D8024EF(unk_0x9B0761B4C3EB8BC7()))
				{
					if (unk_0xF7B3A1430308F92B(5) == 3 || unk_0xF7B3A1430308F92B(5) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0xE4B70EFD14220305(unk_0x9B0761B4C3EB8BC7()))
				{
					if (unk_0xF7B3A1430308F92B(2) == 3 || unk_0xF7B3A1430308F92B(2) == 4)
					{
						func_135(uParam0, iVar0, 1);
					}
				}
				else if (unk_0x1075BD5031B0682E() == 3 || unk_0x1075BD5031B0682E() == 4)
				{
					func_135(uParam0, iVar0, 1);
				}
			}
			if (!func_122(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_109(uParam0))
				{
					func_107(uParam0);
				}
			}
		}
	}
	else
	{
		func_135(uParam0, iVar0, 0);
	}
}

void func_131(var uParam0, int iParam1, struct<3> Param2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1319178 == 1)
	{
		return;
	}
	if (unk_0xA59F96B50B97E63C(iParam1, 0))
	{
		func_135(uParam0, 0, 0);
	}
	if (func_134(Param2, 0f, 0f, 0f, 0))
	{
		if (unk_0xA1914E72A0EB31D0(iParam1))
		{
			iVar0 = unk_0x9048E8838E822F21(iParam1);
			if (!unk_0x47DBF174A0CB9D55(iVar0, false))
			{
				if (unk_0xD0390A93AF3907B8(iVar0))
				{
					if (!func_132())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (unk_0xE080FA9EB010F041(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	unk_0x0C23023B6B6C6051(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	unk_0xF1B800B6646C4019(iParam1, Param2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	unk_0xA785552633ED203B(unk_0x9B0761B4C3EB8BC7(), iParam1, -1, iVar3, iVar4);
	unk_0x0A794A8277A63161("FocusIn", 0, 0);
	unk_0x17E478571720218F("HINT_CAM_SCENE");
	unk_0xC4CC25B68A91D144(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = unk_0x578C4EF320340AF7();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_132()
{
	return func_133(unk_0x460153A63B9477BC());
}

int func_133(int iParam0)
{
	if (unk_0x36FE6D3220816ADA(unk_0x1FA7B77001D60F9D(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_134(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

void func_135(var uParam0, int iParam1, int iParam2)
{
	char* sVar0;
	
	if (unk_0x25DDB354A40FFCDB())
	{
		if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 26))
		{
			return;
		}
	}
	if (unk_0x28BD5A3E7899F23D())
	{
		unk_0x8B4966914EE5EB9F(iParam2);
		unk_0x50E637E6CAC936B2("FocusIn");
		unk_0xFA07F8BEBDAAFBA8("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			unk_0x0A794A8277A63161("FocusOut", 0, 0);
			unk_0xC4CC25B68A91D144(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	unk_0x0C23023B6B6C6051(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (unk_0x211E6DB3335430B4(sVar0))
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!unk_0x211E6DB3335430B4(uParam0->f_3))
	{
		if (func_104(uParam0->f_3))
		{
			unk_0xD289B55B6AADBA10(1);
		}
	}
	if (!unk_0x211E6DB3335430B4(sVar0))
	{
		if (func_104(sVar0))
		{
			unk_0xD289B55B6AADBA10(1);
		}
	}
}

void func_136(int iParam0)
{
	unk_0xBE20AB8238688965(&(Global_111858.f_24991.f_6), iParam0);
}

void func_137(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, true, iParam1);
}

bool func_138(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_111858.f_24991.f_6, iParam0);
}

int func_139(int iParam0)
{
	if (func_142())
	{
		Global_111848 = 1;
		Global_111845 = unk_0x578C4EF320340AF7();
		if (func_56(Global_111847))
		{
			func_140(0);
		}
		unk_0x694F632EFD1F47D0(1, "RE_TITLE");
		if (iParam0 && func_56(Global_111847))
		{
			unk_0x1D42FFF20D06E356();
		}
		return 1;
	}
	return 0;
}

void func_140(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111858.f_24991.f_2 < 3)
			{
				if (!unk_0x19D4274B54F9D9FA())
				{
					func_137(func_141(iParam0), -1);
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
					func_137(func_141(iParam0), -1);
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
					func_137(func_141(iParam0), -1);
					Global_111858.f_24991.f_4++;
					unk_0xBE20AB8238688965(&Global_111854, 2);
				}
			}
			break;
	}
}

char* func_141(int iParam0)
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

int func_142()
{
	switch (func_143(&Global_31027, 0, 5, 0, unk_0x354AD085195C5FA6()))
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

int func_143(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_147(0))
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
		if (!func_145(iParam2))
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
			func_144(uParam0, iParam4);
		}
	}
	return 2;
}

void func_144(var uParam0, int iParam1)
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

bool func_145(int iParam0)
{
	return func_146(iParam0, Global_41631);
}

int func_146(int iParam0, int iParam1)
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

int func_147(int iParam0)
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	if (func_145(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_148()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	switch (iLocal_48)
	{
		case 0:
			if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) && !unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]))
				{
					unk_0x6673CC701BC8E9C1(iLocal_49[0], 6, true);
					unk_0x6673CC701BC8E9C1(iLocal_49[1], 6, true);
					unk_0x4E65320BC9AD521C(iLocal_49[0], true);
					unk_0x4E65320BC9AD521C(iLocal_49[1], true);
					if (unk_0xE0B3BC41DDA88DF0(iLocal_49[0], iLocal_50, false) && unk_0xE0B3BC41DDA88DF0(iLocal_49[1], iLocal_50, false))
					{
						if (iLocal_45 == 2)
						{
							unk_0x9DC06E2A59C5AEBB(&iVar0);
							unk_0xDEFE57D3575A1A8A(0, iLocal_50, -574.6195f, -847.232f, 25.2925f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0xD8C1C38EE8BC2AC6(0, iLocal_50, 10f, 786603);
							unk_0x19F29730874AD6F1(iVar0);
							unk_0x9B6EC2CECE1010EF(iLocal_49[0], iVar0);
							unk_0x4F83FEE4454169D4(&iVar0);
							iLocal_48++;
						}
						else if (iLocal_45 == 4)
						{
							unk_0x9DC06E2A59C5AEBB(&iVar1);
							unk_0xDEFE57D3575A1A8A(0, iLocal_50, -551.2968f, -1119.418f, 20.4011f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0xD8C1C38EE8BC2AC6(0, iLocal_50, 10f, 786603);
							unk_0x19F29730874AD6F1(iVar1);
							unk_0x9B6EC2CECE1010EF(iLocal_49[0], iVar1);
							unk_0x4F83FEE4454169D4(&iVar1);
							iLocal_48++;
						}
						else if (iLocal_45 == 7)
						{
							unk_0x9DC06E2A59C5AEBB(&iVar2);
							unk_0xDEFE57D3575A1A8A(0, iLocal_50, 2786.752f, 4358.032f, 48.6794f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							unk_0xD8C1C38EE8BC2AC6(0, iLocal_50, 10f, 786603);
							unk_0x19F29730874AD6F1(iVar2);
							unk_0x9B6EC2CECE1010EF(iLocal_49[0], iVar2);
							unk_0x4F83FEE4454169D4(&iVar2);
							iLocal_48++;
						}
						else
						{
							unk_0xD8C1C38EE8BC2AC6(iLocal_49[0], iLocal_50, 10f, 786603);
							iLocal_48++;
						}
					}
					else
					{
						if (!unk_0xE0B3BC41DDA88DF0(iLocal_49[0], iLocal_50, false) && unk_0x16BC17A8EDC701A2(iLocal_49[0], -1794415470) != 1)
						{
							unk_0xC584E49FC3559A86(iLocal_49[0], iLocal_50, -1, -1, 1f, 8388608, 0);
						}
						if (!unk_0xE0B3BC41DDA88DF0(iLocal_49[1], iLocal_50, false) && unk_0x16BC17A8EDC701A2(iLocal_49[1], -1794415470) != 1)
						{
							unk_0xC584E49FC3559A86(iLocal_49[1], iLocal_50, -1, 0, 1f, 8388608, 0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (((((func_152() || func_151()) || func_102()) || func_101()) || func_150()) || func_149())
			{
				if (func_27() < 20f)
				{
					func_97();
					func_4(&Local_106, cLocal_105, "RESEC_VFLEE1", 8, 0, 0, 0);
				}
				func_68(6);
			}
			if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				iVar3 = 0;
				while (iVar3 < iLocal_49)
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar3]) && !unk_0xA59F96B50B97E63C(iLocal_49[iVar3], 0))
					{
						if (unk_0xF534AF93C1412379(unk_0x9B0761B4C3EB8BC7()) && unk_0xC0736D5851285045(iLocal_49[iVar3]))
						{
							func_68(8);
						}
					}
					else
					{
						func_68(6);
					}
					iVar3++;
				}
				if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_50, true))
				{
					func_68(8);
				}
			}
			break;
	}
	if (iLocal_46 == 4)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			unk_0x1386E5E658CE3032(unk_0x9B0761B4C3EB8BC7(), &iVar4, 1);
			if ((iVar4 == joaat("weapon_stickybomb") || iVar4 == joaat("weapon_molotov")) || iVar4 == joaat("weapon_grenade"))
			{
				unk_0xF57FA1E5E392D162("PLAYER HAS PROJECTILE WEAPON", unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), 0, 0, 255, 255);
				if ((unk_0x7922FF28ED63354A(unk_0x9B0761B4C3EB8BC7()) && !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), unk_0x7EC595B99EA7C4B1(iLocal_50, 0f, -3.44f, -3f), unk_0x7EC595B99EA7C4B1(iLocal_50, 0f, -13.44f, 3f), 2.3f, 0, true, 0)) && vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(iLocal_50, true)) < 225f)
				{
					func_68(6);
				}
				if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), unk_0x7EC595B99EA7C4B1(iLocal_50, 0f, -3.44f, -3f), unk_0x7EC595B99EA7C4B1(iLocal_50, 0f, -13.44f, 3f), 2.3f, 0, true, 0))
				{
					unk_0xB3D61EC1CD2AC612("PLAYER IS BEHIND VAN", 0.1f, 0.8f, 0f, 0, 0, 255, 255);
				}
				if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(iLocal_50, true)) < 225f)
				{
					unk_0xB3D61EC1CD2AC612("PLAYER IS CLOSE TO VAN", 0.1f, 0.82f, 0f, 0, 0, 255, 255);
				}
				if (unk_0x7922FF28ED63354A(unk_0x9B0761B4C3EB8BC7()))
				{
				}
			}
		}
		if (((unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x3E4D3CCC220BDFB1(iLocal_50, true), 25f, 0)) || (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x3E4D3CCC220BDFB1(iLocal_49[0], true), 20f, 0))) || (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x3E4D3CCC220BDFB1(iLocal_49[1], true), 20f, 0)))
		{
			func_68(6);
		}
		if (iLocal_46 != 4)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]))
			{
				unk_0x6673CC701BC8E9C1(iLocal_49[0], 6, false);
				unk_0x4E65320BC9AD521C(iLocal_49[0], false);
			}
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]))
			{
				unk_0x6673CC701BC8E9C1(iLocal_49[1], 6, false);
				unk_0x4E65320BC9AD521C(iLocal_49[1], false);
			}
		}
	}
}

int func_149()
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	
	if ((unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC())) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true) - unk_0x3E4D3CCC220BDFB1(iLocal_50, true) };
		Var1 = { unk_0x2E6A35AC161797A7(iLocal_50) };
		Var2 = { unk_0x71C23069714A27B9(iLocal_50, unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true)) };
		if (((Var2.f_1 > 1f && (((unk_0x5E5402F6D3B26AFB(unk_0x460153A63B9477BC(), iLocal_50) || unk_0x2311EB213A0CB707(unk_0x460153A63B9477BC(), iLocal_50)) || unk_0x2311EB213A0CB707(unk_0x460153A63B9477BC(), iLocal_49[0])) || unk_0x2311EB213A0CB707(unk_0x460153A63B9477BC(), iLocal_49[1]))) && unk_0x0D77CDCF403AEBD2(unk_0xED4B54A984E6E361(Var1.x, Var1.f_1, Var0.x, Var0.f_1)) < 60f) && unk_0xED4B54A984E6E361(Var1.f_2, Var1.f_1, Var0.f_2, Var0.f_1) < 30f)
		{
			return 1;
		}
	}
	return 0;
}

int func_150()
{
	if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if ((unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), unk_0x7EC595B99EA7C4B1(iLocal_50, 2.7f, 7f, -2f), unk_0x7EC595B99EA7C4B1(iLocal_50, 2.7f, -3.25f, 3f), 3f, 0, true, 0) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), unk_0x7EC595B99EA7C4B1(iLocal_50, -2.7f, 7f, -2f), unk_0x7EC595B99EA7C4B1(iLocal_50, -2.7f, -3.25f, 3f), 3f, 0, true, 0)) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), unk_0x7EC595B99EA7C4B1(iLocal_50, 0f, 7f, -2f), unk_0x7EC595B99EA7C4B1(iLocal_50, 0f, 0f, 3f), 2.4f, 0, true, 0))
		{
			if (unk_0x887D491E579FA61E(unk_0x9B0761B4C3EB8BC7()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_151()
{
	int iVar0;
	
	if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
		{
			if (unk_0x80FF6C016CDB0FAF(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false), 0))
			{
				iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
			}
		}
		else if (unk_0xAE06B9E39EBDE049(unk_0xA5D3CD332CD10EE9()))
		{
			iVar0 = unk_0xA5D3CD332CD10EE9();
		}
		if (unk_0xAE06B9E39EBDE049(iVar0) && unk_0xAE06B9E39EBDE049(iLocal_50))
		{
			return ((unk_0x80FF6C016CDB0FAF(iVar0, 0) && unk_0xA65352E7FEA59881(iVar0, iLocal_50)) && unk_0xF3A639BEE7AADF55(iVar0) > 10f);
		}
	}
	return 0;
}

int func_152()
{
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (iLocal_86)
		{
			return 1;
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) || unk_0xA59F96B50B97E63C(iLocal_49[0], 0))
		{
			if (unk_0xCDF860E56BBCC6B4(iLocal_49[0], unk_0x9B0761B4C3EB8BC7(), 1))
			{
				return 1;
			}
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]) || unk_0xA59F96B50B97E63C(iLocal_49[1], 0))
		{
			if (unk_0xCDF860E56BBCC6B4(iLocal_49[1], unk_0x9B0761B4C3EB8BC7(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_153()
{
	float fVar0;
	
	if ((!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) && !unk_0x5AEB5DDFFAD43CA5(iLocal_49[1])) && unk_0x80FF6C016CDB0FAF(iLocal_50, 0))
	{
		switch (iLocal_48)
		{
			case 0:
				Local_283 = { unk_0xBB88AFC535E469A3(iLocal_50, 0) };
				Local_284 = { unk_0x090239DEAF625B17(iLocal_50, 2) };
				Local_285 = { unk_0xD7D25254A712E758("random@security_van", "sec_case_into_van_calm", Local_283, Local_284, 0, 2) };
				bLocal_288 = false;
				iLocal_289 = 0;
				unk_0xB11D151E210D4FAC(iLocal_50, 1084227584);
				unk_0x9DC06E2A59C5AEBB(&iLocal_54);
				unk_0xC1C7DE768F7675E5(0, 5000);
				unk_0x3C1B180EE30D36EF(0, Local_285, 1f, -1, 0.1f, 512, Local_284.f_2);
				unk_0xF4726838A5A40509(0, Local_284.f_2, 0);
				unk_0x19F29730874AD6F1(iLocal_54);
				unk_0x9B6EC2CECE1010EF(iLocal_49[1], iLocal_54);
				unk_0x4F83FEE4454169D4(&iLocal_54);
				iLocal_48++;
				break;
			
			case 1:
				Local_283 = { unk_0xBB88AFC535E469A3(iLocal_50, 0) };
				Local_284 = { unk_0x090239DEAF625B17(iLocal_50, 2) };
				Local_285 = { unk_0xD7D25254A712E758("random@security_van", "sec_case_into_van_calm", Local_283, Local_284, 0, 2) };
				if (!unk_0xFC5D6FB6EECB392F(iLocal_287))
				{
					if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), Local_63) < 22500f && unk_0x0FF5AAEB0E1AC224(iLocal_50))
					{
						iLocal_287 = unk_0xF341A134A5B8D4F6(Local_283, Local_284, 2);
						unk_0xDFDB9C533700BC17(iLocal_49[0], iLocal_287, "random@security_van", "driver_idle", 2f, -8f, 13, 0, 1148846080, 0);
						unk_0x81493F39713559B1(iLocal_287, true);
					}
				}
				if (unk_0x16BC17A8EDC701A2(iLocal_49[1], 242628503) != 1)
				{
					unk_0x9DC06E2A59C5AEBB(&iLocal_54);
					unk_0x3C1B180EE30D36EF(0, Local_285, 1f, -1, 0.1f, 512, Local_284.f_2);
					unk_0xF4726838A5A40509(0, Local_284.f_2, 0);
					unk_0x19F29730874AD6F1(iLocal_54);
					unk_0x9B6EC2CECE1010EF(iLocal_49[1], iLocal_54);
					unk_0x4F83FEE4454169D4(&iLocal_54);
				}
				fVar0 = unk_0xEF7858F25585F853(iLocal_49[1]);
				if (fVar0 > 180f)
				{
					fVar0 = (fVar0 - 360f);
				}
				if (fVar0 <= -180f)
				{
					fVar0 = (fVar0 + 360f);
				}
				if (Local_284.f_2 > 180f)
				{
					Local_284.f_2 = (Local_284.f_2 - 360f);
				}
				if (Local_284.f_2 <= -180f)
				{
					Local_284.f_2 = (Local_284.f_2 + 360f);
				}
				if (unk_0x0D77CDCF403AEBD2((fVar0 - Local_284.f_2)) < 15f && vdist(Local_285, unk_0x3E4D3CCC220BDFB1(iLocal_49[1], true)) < 0.2f)
				{
					unk_0x4E3E373422FB398D(iLocal_49[1], -1056964608);
					unk_0x9B94F6169B0DAEFD(iLocal_49[1]);
					bLocal_288 = true;
					iLocal_286 = unk_0xF341A134A5B8D4F6(Local_283, Local_284, 2);
					unk_0xDFDB9C533700BC17(iLocal_49[1], iLocal_286, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
					unk_0x1FEB07A1AF22700F(iLocal_50, iLocal_286, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
					iLocal_48++;
				}
				break;
			
			case 2:
				if (!iLocal_76)
				{
					if (((unk_0xFC5D6FB6EECB392F(iLocal_286) && unk_0x369E69441C066912(iLocal_286) > 0.09f) && unk_0x369E69441C066912(iLocal_286) < 0.11f) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
					{
						if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_49[1], 20f, 20f, 5f, 0, 1, 0))
						{
							if (func_4(&Local_106, cLocal_105, "RESEC_CHT1", 3, 0, 0, 0))
							{
								iLocal_76 = 1;
							}
						}
					}
				}
				if (unk_0xFC5D6FB6EECB392F(iLocal_286))
				{
					if (!bLocal_79)
					{
						if ((unk_0xAE06B9E39EBDE049(iLocal_52) && unk_0x0A43129B43E05B32(iLocal_52, iLocal_49[1])) && unk_0x369E69441C066912(iLocal_286) > 0.3793f)
						{
							if (!unk_0x0A43129B43E05B32(iLocal_52, iLocal_50))
							{
								unk_0x1F8106DB8796859F(iLocal_52, 1, true);
								unk_0x58ADF88C51AAFDC5(iLocal_52, false, 0);
								unk_0xF8A652CE310FFC53(iLocal_52, iLocal_50, 0, unk_0x71C23069714A27B9(iLocal_50, unk_0x3E4D3CCC220BDFB1(iLocal_52, true)), 90f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							}
							bLocal_79 = true;
						}
					}
					else if (unk_0x369E69441C066912(iLocal_286) > 0.546243f)
					{
						unk_0x1CD098484842AE0B(iLocal_50, -4f, 1);
						if (unk_0xAE06B9E39EBDE049(iLocal_52))
						{
							iLocal_76 = 0;
							unk_0x7CC9C12947A9030C(iLocal_50, 2, 1);
							unk_0x7CC9C12947A9030C(iLocal_50, 3, 1);
							iLocal_48++;
						}
					}
				}
				break;
			
			case 3:
				if (!iLocal_76)
				{
					if (((unk_0xFC5D6FB6EECB392F(iLocal_286) && unk_0x369E69441C066912(iLocal_286) > 0.56f) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7())) && unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_49[1], 20f, 20f, 5f, 0, 1, 0))
					{
						if (func_4(&Local_106, cLocal_105, "RESEC_CHT2", 3, 0, 0, 0))
						{
							iLocal_76 = 1;
						}
					}
				}
				if (!iLocal_289)
				{
					if ((unk_0xFC5D6FB6EECB392F(iLocal_286) && unk_0x369E69441C066912(iLocal_286) > 0.6f) || !unk_0xFC5D6FB6EECB392F(iLocal_286))
					{
						if (unk_0xFC5D6FB6EECB392F(iLocal_287))
						{
							unk_0x9B94F6169B0DAEFD(iLocal_49[0]);
							iLocal_287 = unk_0xF341A134A5B8D4F6(Local_283, Local_284, 2);
							unk_0xDFDB9C533700BC17(iLocal_49[0], iLocal_287, "random@security_van", "driver_exit_calm", 4f, -4f, 9, 0, 1148846080, 0);
						}
						iLocal_289 = 1;
					}
				}
				else if ((unk_0xFC5D6FB6EECB392F(iLocal_287) && unk_0x369E69441C066912(iLocal_287) >= 0.92f) || !unk_0xFC5D6FB6EECB392F(iLocal_287))
				{
					if (!unk_0xE0B3BC41DDA88DF0(iLocal_49[0], iLocal_50, false) && unk_0x16BC17A8EDC701A2(iLocal_49[0], -1794415470) != 1)
					{
						unk_0x9B94F6169B0DAEFD(iLocal_49[0]);
						unk_0xC584E49FC3559A86(iLocal_49[0], iLocal_50, -1, -1, 1f, 1, 0);
					}
				}
				if (unk_0xFC5D6FB6EECB392F(iLocal_286) && unk_0x39CABCD7925B9200(iLocal_49[1], unk_0x856D5567211886A2("ENDS_IN_WALK")))
				{
					unk_0x9B94F6169B0DAEFD(iLocal_49[1]);
					unk_0xC584E49FC3559A86(iLocal_49[1], iLocal_50, -1, 0, 1f, 1, 0);
					settimera(0);
				}
				if ((func_88() && unk_0x24B1E142845E309A(iLocal_50, 0) == 0f) && unk_0x24B1E142845E309A(iLocal_50, 1) == 0f)
				{
					func_68(4);
				}
				break;
			
			case 4:
				if (timera() > 15000)
				{
					unk_0x7CC9C12947A9030C(iLocal_50, 0, 1);
					unk_0x7CC9C12947A9030C(iLocal_50, 1, 1);
				}
				break;
		}
		if (((!unk_0x5AEB5DDFFAD43CA5(func_3()) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7())) && vdist(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(func_3(), true)) < 30f) && unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) != 0)
		{
			func_68(8);
		}
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]))
	{
		if (unk_0xF10E878C0879E7E9(iLocal_103))
		{
			func_68(7);
		}
	}
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_157())
		{
			if (func_88())
			{
				func_68(6);
			}
			else
			{
				func_68(8);
			}
		}
		else if (func_155())
		{
			func_68(2);
		}
		else if (func_154())
		{
			func_68(3);
		}
	}
	if (iLocal_46 != 1)
	{
		if (iLocal_46 != 4)
		{
			func_97();
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]))
			{
				if (unk_0x9934470AA0A08B57(iLocal_49[0], "random@security_van", "driver_idle", 3))
				{
					if (iLocal_45 != 2)
					{
						unk_0x81DCDE42A0B23C21(iLocal_49[0], "random@security_van", "driver_exit_panic", Local_283, Local_284, 1000f, -8f, -1, 4096, 0f, 2, 0);
					}
					else
					{
						unk_0x9B94F6169B0DAEFD(iLocal_49[0]);
						unk_0x756D74A3EF0AB788(iLocal_49[0], "random@security_van", "driver_exit_panic", 1000f, -8f, -1, 0, 0, 0, 0, 0);
					}
				}
			}
			if ((unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && unk_0xFC5D6FB6EECB392F(iLocal_286)) && !unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]))
			{
				unk_0x1CD098484842AE0B(iLocal_50, -1000f, 1);
				unk_0x9B94F6169B0DAEFD(iLocal_49[1]);
			}
		}
		if (bLocal_79 && !unk_0xF10E878C0879E7E9(iLocal_103))
		{
			unk_0x7CC9C12947A9030C(iLocal_50, 2, 1);
			unk_0x7CC9C12947A9030C(iLocal_50, 3, 1);
		}
	}
}

int func_154()
{
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
		{
			if (!unk_0xA59F96B50B97E63C(unk_0xA5D3CD332CD10EE9(), 0))
			{
				if (func_80(unk_0xA5D3CD332CD10EE9()))
				{
					iLocal_51 = unk_0xA5D3CD332CD10EE9();
					return 1;
				}
			}
		}
		else if (!unk_0xA59F96B50B97E63C(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false), 0))
		{
			if (func_80(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false)))
			{
				fLocal_280 = (fLocal_280 + unk_0x9E3DAF75EFC49F5B());
			}
			else if (fLocal_280 > 0f)
			{
				fLocal_280 = (fLocal_280 - (unk_0x9E3DAF75EFC49F5B() * 10f));
			}
			else if (fLocal_280 < 0f)
			{
				fLocal_280 = 0f;
			}
			if (fLocal_280 > 3f)
			{
				iLocal_51 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
				return 1;
			}
		}
	}
	return 0;
}

int func_155()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		if ((((((!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar0]) && unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC())) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7())) && (unk_0x5E5402F6D3B26AFB(unk_0x460153A63B9477BC(), iLocal_49[iVar0]) || unk_0x42A04E707DE50816(unk_0x9B0761B4C3EB8BC7()))) && vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), unk_0x3E4D3CCC220BDFB1(iLocal_49[iVar0], true)) < 9f) && !unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 7)) && func_72())
		{
			return 1;
		}
		if (unk_0xCED6B5226244381C(iLocal_49[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_101())
	{
		return 1;
	}
	if ((func_156() || func_102()) && func_72())
	{
		if (!unk_0xE0B3BC41DDA88DF0(iLocal_49[0], iLocal_50, false) || !unk_0xE0B3BC41DDA88DF0(iLocal_49[1], iLocal_50, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_156()
{
	int iVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		unk_0x1386E5E658CE3032(unk_0x9B0761B4C3EB8BC7(), &iVar0, 1);
		if (unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 7) || (iVar0 == joaat("weapon_petrolcan") && unk_0x7922FF28ED63354A(unk_0x9B0761B4C3EB8BC7())))
		{
			if (unk_0xEEB37DB9533AA764(unk_0x9B0761B4C3EB8BC7()))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]))
				{
					if (unk_0x910DFF8E55ABB8EC(iLocal_49[0], unk_0x9B0761B4C3EB8BC7(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]))
				{
					if (unk_0x910DFF8E55ABB8EC(iLocal_49[1], unk_0x9B0761B4C3EB8BC7(), 12f, 12f, 5f, 0, 1, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_157()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		if ((((((!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar0]) && unk_0xCDF860E56BBCC6B4(iLocal_49[iVar0], unk_0x9B0761B4C3EB8BC7(), 1)) || (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar0]) && unk_0xF83D0A2EC884A4DD(iLocal_49[iVar0], unk_0x9B0761B4C3EB8BC7()))) || unk_0xCDF860E56BBCC6B4(iLocal_49[iVar0], unk_0x9B0761B4C3EB8BC7(), 1)) || (unk_0xCDF860E56BBCC6B4(iLocal_50, unk_0x9B0761B4C3EB8BC7(), 1) && func_72())) || unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar0])) || unk_0xA59F96B50B97E63C(iLocal_49[iVar0], 0))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_150() || func_103())
	{
		return 1;
	}
	if (unk_0x80FF6C016CDB0FAF(iLocal_50, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_49)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar0]))
			{
				if (unk_0xF534AF93C1412379(unk_0x9B0761B4C3EB8BC7()) && unk_0xC0736D5851285045(iLocal_49[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_50, true))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (unk_0x94BF5C4EB0D40E9E(unk_0x9B0761B4C3EB8BC7()) || unk_0xAABDC18B9F6EC79D(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_63, 25f, 25f, 20f, false, true, 0))
		{
			return 1;
		}
	}
	if (((unk_0x80FF6C016CDB0FAF(iLocal_50, 0) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x3E4D3CCC220BDFB1(iLocal_50, true), 25f, 0)) || (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[0]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x3E4D3CCC220BDFB1(iLocal_49[0], true), 20f, 0))) || (!unk_0x5AEB5DDFFAD43CA5(iLocal_49[1]) && func_37(0f, 0f, 0f, 0f, 0f, 0f, unk_0x3E4D3CCC220BDFB1(iLocal_49[1], true), 20f, 0)))
	{
		return 1;
	}
	return 0;
}

int func_158()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_49[iVar0]))
		{
			if ((!unk_0x5AEB5DDFFAD43CA5(iLocal_49[iVar0]) && !unk_0xA59F96B50B97E63C(iLocal_49[iVar0], 0)) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if ((unk_0xC7EB33BFDB436C87(unk_0x3E4D3CCC220BDFB1(iLocal_49[iVar0], true), 5f, 1) || func_37(unk_0x3E4D3CCC220BDFB1(iLocal_49[iVar0], true) + Vector(5f, 10f, 10f), unk_0x3E4D3CCC220BDFB1(iLocal_49[iVar0], true) - Vector(5f, 5f, 5f), 0f, 0f, 0f, 0, 0)) || unk_0xCDF860E56BBCC6B4(iLocal_49[iVar0], unk_0x9B0761B4C3EB8BC7(), 1))
				{
					bLocal_80 = true;
					return 1;
				}
			}
			else
			{
				bLocal_80 = true;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_159()
{
	int iVar0;
	
	iLocal_50 = unk_0xCE4780E24AFDFBF9(iLocal_74, Local_63, fLocal_64, true, true, false);
	iLocal_53 = unk_0x79CC07752E7432A1(joaat("prop_security_case_01"), Local_63, true, true, false);
	unk_0xF8A652CE310FFC53(iLocal_53, iLocal_50, 0, 0f, -2.4589f, 1.2195f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	unk_0x80250B8368A4E611(iLocal_53, false, 0);
	unk_0x9498922886494CFC(iLocal_53, iLocal_50, false);
	unk_0xB11D151E210D4FAC(iLocal_50, 1084227584);
	unk_0x5DC21979EC6C531F(iLocal_50, 3);
	unk_0x52090984B5C8A3E4(iLocal_53, false, true, true, true, true, true, 0, false);
	unk_0x82FF25D1808866E5(iLocal_50, 1, 0);
	unk_0x697DA7132EE43ABC(iLocal_50, 700, 0);
	unk_0x74172B5AFD503628(iLocal_50, false, 0);
	unk_0xA5EAD2ACE2C8BBB2(iLocal_50, true, 1);
	unk_0xC8BC7260D3CB6E86(iLocal_50, 0);
	unk_0x15A6C88D3C7C1882(iLocal_50, 1);
	unk_0xB65F86FFF1334E95((Local_63.x - 200f), (Local_63.f_1 - 200f), (Local_63.x + 200f), (Local_63.f_1 + 200f));
	if (iLocal_44 == 3)
	{
		iLocal_49[0] = unk_0x6A7A2C83BD302BA4(iLocal_50, 26, iLocal_73, -1, 1, true);
		iLocal_49[1] = unk_0x6A7A2C83BD302BA4(iLocal_50, 26, iLocal_73, 0, 1, true);
		unk_0xC160551F55D6365A(iLocal_50, true, true, 0);
		unk_0xA5EAD2ACE2C8BBB2(iLocal_50, true, 1);
	}
	else
	{
		iLocal_49[1] = unk_0xB3116B49FE00E2F1(26, iLocal_73, Local_61[1 /*3*/], fLocal_62[1], 1, true);
		iLocal_49[0] = unk_0xB3116B49FE00E2F1(26, iLocal_73, Local_61[0 /*3*/], fLocal_62[0], 1, true);
		unk_0xA785552633ED203B(iLocal_49[1], iLocal_49[0], -1, 0, 2);
	}
	func_85(iLocal_49[1]);
	unk_0xDE8F8016287F771F("Security_guards", &iLocal_60);
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		unk_0x055A73D4AFD214F1(iLocal_49[iVar0], 0);
		unk_0x6673CC701BC8E9C1(iLocal_49[iVar0], 1, false);
		unk_0x6673CC701BC8E9C1(iLocal_49[iVar0], 13, false);
		unk_0x6673CC701BC8E9C1(iLocal_49[iVar0], 6, true);
		unk_0x6673CC701BC8E9C1(iLocal_49[iVar0], 8, false);
		unk_0x6673CC701BC8E9C1(iLocal_49[iVar0], 10, true);
		unk_0x6AC7395A8E313A46(iLocal_49[iVar0], 512, true);
		unk_0x694113444F21E39F(iLocal_49[iVar0], 118, false);
		unk_0x6AC7395A8E313A46(iLocal_49[iVar0], 128, true);
		unk_0x5A5A1DD32AC33C2B(iLocal_49[iVar0], 0);
		unk_0x82FF25D1808866E5(iLocal_49[iVar0], 1, 0);
		unk_0xB281D47677468287(iLocal_49[iVar0], 1);
		unk_0x503A0C9176F8BB0C(iLocal_49[iVar0], 1);
		unk_0x92BD213E6A0E666B(iLocal_49[iVar0], joaat("weapon_pistol"), -1, false, true);
		unk_0xD3D9D7C84656DAE5(iLocal_49[iVar0], iLocal_60);
		unk_0xCBA6B2B569DCAFD8(iLocal_49[iVar0], true);
		unk_0x1CCBC799127EA27B(iLocal_49[iVar0], 250);
		iVar0++;
	}
	unk_0xA5EAD2ACE2C8BBB2(iLocal_49[1], true, 1);
	unk_0xEFBCE8F8316F89EA(1, joaat("COP"), iLocal_60);
	unk_0xEFBCE8F8316F89EA(1, iLocal_60, joaat("COP"));
	unk_0xEFBCE8F8316F89EA(2, iLocal_60, 1862763509);
	unk_0xEFBCE8F8316F89EA(2, 1862763509, iLocal_60);
	if (iLocal_44 == 1)
	{
		unk_0x78024EFD31A7FAD4(iLocal_49[0], 0, 1, 0, false);
		unk_0x389E871B0B67CCCC(iLocal_49[0], 0);
		unk_0x78024EFD31A7FAD4(iLocal_49[1], 0, 1, 0, false);
		unk_0x389E871B0B67CCCC(iLocal_49[1], 0);
	}
	if (func_16() == 0 && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		func_74(&Local_106, 0, unk_0x9B0761B4C3EB8BC7(), "MICHAEL", 0, 1);
	}
	if (func_16() == 1 && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		func_74(&Local_106, 1, unk_0x9B0761B4C3EB8BC7(), "FRANKLIN", 0, 1);
	}
	if (func_16() == 2 && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		func_74(&Local_106, 2, unk_0x9B0761B4C3EB8BC7(), "TREVOR", 0, 1);
	}
	func_74(&Local_106, 3, iLocal_49[0], "SECVANGUY1", 0, 1);
	func_74(&Local_106, 4, iLocal_49[1], "SECVANGUY2", 0, 1);
	unk_0x410A1E7AD7D5C774(iLocal_74, true);
	unk_0x5476B2D1DCA6FE9D(iLocal_73, true);
	if (iLocal_44 != 3)
	{
	}
}

float func_160(int iParam0, struct<3> Param1, bool bParam2)
{
	struct<3> Var0;
	
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, false) };
	}
	return unk_0x272784C60C397DB6(Var0, Param1, bParam2);
}

bool func_161()
{
	func_169(&uLocal_123, iLocal_73);
	func_169(&uLocal_123, iLocal_74);
	func_169(&uLocal_123, iLocal_75);
	func_167(&uLocal_123, "random@security_van");
	func_167(&uLocal_123, "weapons@holster_1h");
	func_167(&uLocal_123, "move_injured_generic");
	func_166(&uLocal_123, 3);
	return func_162(&uLocal_123);
}

int func_162(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_163(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_163(var uParam0)
{
	return func_164(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_164(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xCE990E643CD9D0E5(iParam0, 30))
	{
		if (unk_0xCE990E643CD9D0E5(iParam0, 29))
		{
			switch (func_165(iParam0))
			{
				case 0:
					return unk_0x7D167B9A0CCDA347(iParam2);
					break;
				
				case 1:
					return unk_0xC614DDE265D18415(sParam1);
					break;
				
				case 2:
					return unk_0x8FBC2B79465DEB9E(sParam1);
					break;
				
				case 3:
					return unk_0xC7F5A2E99D75A65C(sParam1);
					break;
				
				case 4:
					return unk_0x08A8988B88C144BE(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x338C0BA03A21B0DB(sParam1);
					break;
				
				case 6:
					return unk_0x8B917081F9836EDD(sParam1, unk_0xCE990E643CD9D0E5(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x70D85C10C7EFA22C(iParam2);
					break;
				
				case 8:
					return unk_0xF5EE205091CE6DB2(iParam2);
					break;
				
				case 9:
					return unk_0x4F144789C4312F35();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_165(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xCE990E643CD9D0E5(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_166(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

void func_167(var uParam0, char* sParam1)
{
	func_168(uParam0, 1, -1, sParam1, 0);
}

void func_168(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0xF005CCA4263DF67F(sParam3, "NULL"))
					{
						if (unk_0xF005CCA4263DF67F(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xBE20AB8238688965(uParam0[iVar0 /*18*/], iParam1);
			unk_0xBE20AB8238688965(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_169(var uParam0, int iParam1)
{
	func_168(uParam0, 0, iParam1, "NULL", 0);
}

int func_170()
{
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (vmag2(unk_0x97C0B1E5FCD8E08A(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_181())
		{
			return 0;
		}
	}
	if (func_177())
	{
		return 1;
	}
	if (func_171(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_171(float fParam0, bool bParam1)
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
		if (func_18(func_16()))
		{
			iVar5 = func_61();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 2) && !unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 3))
				{
					func_172(iVar1, &Var0);
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

void func_172(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_173(uParam1, "Abigail1", func_175(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 1:
			func_173(uParam1, "Abigail2", func_175(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 2:
			func_173(uParam1, "Barry1", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 3:
			func_173(uParam1, "Barry2", func_175(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 4:
			func_173(uParam1, "Barry3", func_175(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 5:
			func_173(uParam1, "Barry3A", func_175(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 6:
			func_173(uParam1, "Barry3C", func_175(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 7:
			func_173(uParam1, "Barry4", func_175(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_174(iParam0), 0, 0);
			break;
		
		case 8:
			func_173(uParam1, "Dreyfuss1", func_175(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 9:
			func_173(uParam1, "Epsilon1", func_175(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 10:
			func_173(uParam1, "Epsilon2", func_175(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 11:
			func_173(uParam1, "Epsilon3", func_175(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 12:
			func_173(uParam1, "Epsilon4", func_175(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 13:
			func_173(uParam1, "Epsilon5", func_175(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 14:
			func_173(uParam1, "Epsilon6", func_175(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 15:
			func_173(uParam1, "Epsilon7", func_175(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 16:
			func_173(uParam1, "Epsilon8", func_175(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 17:
			func_173(uParam1, "Extreme1", func_175(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 18:
			func_173(uParam1, "Extreme2", func_175(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 19:
			func_173(uParam1, "Extreme3", func_175(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 20:
			func_173(uParam1, "Extreme4", func_175(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 21:
			func_173(uParam1, "Fanatic1", func_175(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_174(iParam0), 1, 0);
			break;
		
		case 22:
			func_173(uParam1, "Fanatic2", func_175(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_174(iParam0), 1, 0);
			break;
		
		case 23:
			func_173(uParam1, "Fanatic3", func_175(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_174(iParam0), 0, 1);
			break;
		
		case 24:
			func_173(uParam1, "Hao1", func_175(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_174(iParam0), 0, 1);
			break;
		
		case 25:
			func_173(uParam1, "Hunting1", func_175(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 26:
			func_173(uParam1, "Hunting2", func_175(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 27:
			func_173(uParam1, "Josh1", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 28:
			func_173(uParam1, "Josh2", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 29:
			func_173(uParam1, "Josh3", func_175(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 30:
			func_173(uParam1, "Josh4", func_175(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 31:
			func_173(uParam1, "Maude1", func_175(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 32:
			func_173(uParam1, "Minute1", func_175(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 33:
			func_173(uParam1, "Minute2", func_175(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 34:
			func_173(uParam1, "Minute3", func_175(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 35:
			func_173(uParam1, "MrsPhilips1", func_175(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 36:
			func_173(uParam1, "MrsPhilips2", func_175(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 37:
			func_173(uParam1, "Nigel1", func_175(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 38:
			func_173(uParam1, "Nigel1A", func_175(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 39:
			func_173(uParam1, "Nigel1B", func_175(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 40:
			func_173(uParam1, "Nigel1C", func_175(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 41:
			func_173(uParam1, "Nigel1D", func_175(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_174(iParam0), 1, 1);
			break;
		
		case 42:
			func_173(uParam1, "Nigel2", func_175(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 43:
			func_173(uParam1, "Nigel3", func_175(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 1);
			break;
		
		case 44:
			func_173(uParam1, "Omega1", func_175(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 45:
			func_173(uParam1, "Omega2", func_175(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 46:
			func_173(uParam1, "Paparazzo1", func_175(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 47:
			func_173(uParam1, "Paparazzo2", func_175(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 48:
			func_173(uParam1, "Paparazzo3", func_175(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 49:
			func_173(uParam1, "Paparazzo3A", func_175(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 50:
			func_173(uParam1, "Paparazzo3B", func_175(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 51:
			func_173(uParam1, "Paparazzo4", func_175(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 52:
			func_173(uParam1, "Rampage1", func_175(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 54:
			func_173(uParam1, "Rampage3", func_175(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 55:
			func_173(uParam1, "Rampage4", func_175(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 56:
			func_173(uParam1, "Rampage5", func_175(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_174(iParam0), 0, 0);
			break;
		
		case 53:
			func_173(uParam1, "Rampage2", func_175(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_174(iParam0), 1, 0);
			break;
		
		case 57:
			func_173(uParam1, "TheLastOne", func_175(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 58:
			func_173(uParam1, "Tonya1", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 59:
			func_173(uParam1, "Tonya2", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 60:
			func_173(uParam1, "Tonya3", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 61:
			func_173(uParam1, "Tonya4", func_175(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		case 62:
			func_173(uParam1, "Tonya5", func_175(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_174(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_173(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_174(int iParam0)
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

struct<2> func_175(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_176(iParam0) };
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

struct<2> func_176(int iParam0)
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

int func_177()
{
	if (func_180() && !func_181())
	{
		return 1;
	}
	if (func_179() && func_178())
	{
		return 1;
	}
	return 0;
}

bool func_178()
{
	return Global_111576 > 0;
}

int func_179()
{
	if (Global_95877 != -1)
	{
		return 1;
	}
	return 0;
}

int func_180()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 20);
	}
	return 0;
}

int func_181()
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

int func_182()
{
	if (!func_145(5))
	{
		return 1;
	}
	if (func_177())
	{
		return 1;
	}
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (vmag2(unk_0x97C0B1E5FCD8E08A(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_181())
		{
			return 0;
		}
	}
	if (func_171(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_183()
{
	if ((Global_111847 == func_65() && unk_0xA706863F1E1DD66C()) && Global_111848)
	{
		return 1;
	}
	return 0;
}

void func_184(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0xD3137A576BE9EC5C() >= (uParam0->f_146 + uParam0->f_147) || unk_0xCE990E643CD9D0E5(Global_98955.f_20, 2)) || unk_0xCE990E643CD9D0E5(Global_98955.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 29))
					{
						func_185(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0xD3137A576BE9EC5C();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_185(int iParam0)
{
	func_186(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_186(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xCE990E643CD9D0E5(*iParam0, 30))
	{
		switch (func_165(*iParam0))
		{
			case 0:
				unk_0x78FCB2E22C41B9D5(iParam2);
				break;
			
			case 1:
				unk_0x131ED02492676000(sParam1);
				break;
			
			case 2:
				unk_0x08E33007524DAD35(sParam1);
				break;
			
			case 3:
				unk_0x494D5FF88119CDC0(sParam1, unk_0xCE990E643CD9D0E5(*iParam0, 28));
				break;
			
			case 4:
				unk_0x766028370E52319B(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xBBF766AC368C3EB1(sParam1);
				break;
			
			case 6:
				unk_0x8B917081F9836EDD(sParam1, unk_0xCE990E643CD9D0E5(*iParam0, 27), -1);
				break;
			
			case 7:
				unk_0xA9CFCFCA622D2A46(iParam2);
				break;
			
			case 8:
				unk_0xBAA4D421B8B8A744(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x22043B0E5A2FE456();
				break;
			
			default:
				break;
		}
		unk_0xBE20AB8238688965(iParam0, 29);
	}
}

void func_187()
{
	iLocal_75 = joaat("prop_security_case_01");
	iLocal_74 = joaat("stockade");
	iLocal_73 = joaat("s_m_m_armoured_01");
	iLocal_94 = unk_0x344C570D6F8700DF(3000, 8000);
	switch (iLocal_45)
	{
		case 1:
			Local_70 = { -315.889f, -1550.554f, 7.233013f };
			Local_71 = { -315.2352f, -1366.581f, 45.29617f };
			fLocal_72 = 180f;
			Local_63 = { -331.8429f, -1461.042f, 30.153f };
			fLocal_64 = -64.3539f;
			Local_61[0 /*3*/] = { -335.564f, -1462.237f, 29.5452f };
			fLocal_62[0] = 158.3857f;
			Local_61[1 /*3*/] = { -342.7024f, -1475.043f, 29.6004f };
			fLocal_62[1] = 290.3041f;
			iLocal_44 = 1;
			break;
		
		case 2:
			Local_70 = { -538.2149f, -868.7426f, 17.96054f };
			Local_71 = { -663.8162f, -867.9987f, 53.66249f };
			fLocal_72 = 121.5f;
			Local_63 = { -588.5128f, -866.9584f, 25.32786f };
			fLocal_64 = -89.02679f;
			Local_61[0 /*3*/] = { -589.4673f, -865.4055f, 24.7622f };
			fLocal_62[0] = 12.5464f;
			Local_61[1 /*3*/] = { -578.4414f, -874.5964f, 24.9183f };
			fLocal_62[1] = 352.4951f;
			iLocal_44 = 1;
			break;
		
		case 3:
			Local_70 = { -468.6309f, 6101.907f, 14.8912f };
			Local_71 = { -359.9734f, 5994.152f, 50.36843f };
			fLocal_72 = 152.25f;
			Local_63 = { -395.6852f, 6056.967f, 30.5001f };
			fLocal_64 = 188.9862f;
			Local_61[0 /*3*/] = { -398.4612f, 6051.296f, 30.5003f };
			fLocal_62[0] = 251.7138f;
			Local_61[1 /*3*/] = { -378.408f, 6035.689f, 30.498f };
			fLocal_62[1] = 154.0836f;
			iLocal_44 = 2;
			break;
		
		case 4:
			Local_70 = { -631.3408f, -1105.581f, 7.220509f };
			Local_71 = { -462.1721f, -1103.597f, 62.53583f };
			fLocal_72 = 177.25f;
			Local_63 = { -595.7766f, -1094.089f, 21.1785f };
			fLocal_64 = 263.4662f;
			Local_61[0 /*3*/] = { -600.8182f, -1103.778f, 21.3292f };
			fLocal_62[0] = 338.8304f;
			Local_61[1 /*3*/] = { -595.3461f, -1096.054f, 21.1785f };
			fLocal_62[1] = 151.297f;
			iLocal_44 = 1;
			break;
		
		case 5:
			Local_63 = { -1042.768f, -1049.296f, 1.0825f };
			fLocal_64 = 26.9919f;
			iLocal_44 = 3;
			break;
		
		case 6:
			Local_63 = { -595.5618f, -667.7325f, 31.0544f };
			fLocal_64 = 271.1543f;
			iLocal_44 = 3;
			break;
		
		case 7:
			Local_63 = { 3018.384f, 3634.017f, 70.4076f };
			fLocal_64 = 335.9052f;
			iLocal_44 = 3;
			break;
		
		case 8:
			Local_63 = { -2815.661f, 2208.171f, 27.8382f };
			fLocal_64 = 119.1519f;
			iLocal_44 = 3;
			break;
		
		case 9:
			Local_63 = { 856.7742f, -2067.845f, 29.0704f };
			fLocal_64 = 83.1204f;
			iLocal_44 = 3;
			break;
		
		case 10:
			Local_63 = { 805.1932f, -703.1327f, 28.1632f };
			fLocal_64 = 248.8625f;
			iLocal_44 = 3;
			break;
		
		default:
			break;
	}
}

void func_188(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_190(iParam0);
	unk_0x92B2940A0A0441A9(0);
	unk_0x659A1C3A1508626C(1);
	Global_111844 = 0;
	func_189();
}

void func_189()
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

void func_190(int iParam0)
{
	Global_111847 = iParam0;
}

int func_191(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_65();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_230())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			Var1 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true) };
			if (vmag2(unk_0x97C0B1E5FCD8E08A(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_181())
			{
				return 0;
			}
		}
		if (!Global_111858.f_9081)
		{
			return 0;
		}
		if (func_50(0))
		{
			return 0;
		}
		if (func_177())
		{
			return 0;
		}
		if (func_229())
		{
			return 0;
		}
		if (Global_111847 != -1)
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_171(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) && !bParam4)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_228(iParam1))
		{
			return 0;
		}
		if (func_18(func_16()))
		{
			if (func_227(func_16()) == 4 || func_227(func_16()) == 5)
			{
				return 0;
			}
		}
		if (func_18(func_16()))
		{
			if (!func_226(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_225(Global_111858.f_24991.f_43[iParam1]))
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
		if (func_224())
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
		if (!func_216(4))
		{
			return 0;
		}
		if (!func_145(5))
		{
			return 0;
		}
		if (func_215(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_215(0, 0))
		{
			return 0;
		}
		if (Global_31114)
		{
			return 0;
		}
		if (func_228(30) && !func_215(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_18(func_16()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_111858.f_2359.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_111858.f_2359.f_539.f_2296[iVar2];
				if (func_214(iVar4))
				{
					if (func_192(iVar2))
					{
						if (!func_134(Var3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), Var3) < (210f * 210f))
							{
								if (func_16() != iVar2)
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

bool func_192(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_111858.f_2359.f_539.f_2296[iParam0];
	return func_193(iVar0);
}

int func_193(int iParam0)
{
	return func_194(iParam0, 1);
}

int func_194(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_214(iParam0))
	{
		return 0;
	}
	func_195(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_195(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_196(func_207(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_196(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_206(iParam0, iParam1))
	{
		iVar0 = func_205(iParam1);
		iVar1 = func_203(iParam0);
		iVar2 = (func_203(iParam0) - func_203(iParam1));
		iVar3 = (func_205(iParam0) - func_205(iParam1));
		iVar4 = (func_202(iParam0) - func_202(iParam1));
		iVar5 = (func_201(iParam0) - func_201(iParam1));
		iVar6 = (func_200(iParam0) - func_200(iParam1));
		iVar7 = (func_199(iParam0) - func_199(iParam1));
	}
	else
	{
		iVar0 = func_205(iParam0);
		iVar1 = func_203(iParam1);
		iVar2 = (func_203(iParam1) - func_203(iParam0));
		iVar3 = (func_205(iParam1) - func_205(iParam0));
		iVar4 = (func_202(iParam1) - func_202(iParam0));
		iVar5 = (func_201(iParam1) - func_201(iParam0));
		iVar6 = (func_200(iParam1) - func_200(iParam0));
		iVar7 = (func_199(iParam1) - func_199(iParam0));
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
		iVar4 = (iVar4 + func_198(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_197(to_float(iVar0 + 1), 0f, 12f));
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

float func_197(float fParam0, float fParam1, float fParam2)
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

int func_198(int iParam0, int iParam1)
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

int func_199(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_200(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_201(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_202(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_203(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_204(unk_0xCE990E643CD9D0E5(iParam0, 31), -1, 1)) + 2011;
}

int func_204(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_205(int iParam0)
{
	return iParam0 & 15;
}

int func_206(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_214(iParam1) || !func_214(iParam0))
	{
		return 1;
	}
	iVar0 = func_203(iParam0);
	iVar1 = func_203(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_205(iParam0);
	iVar1 = func_205(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_201(iParam0);
	iVar1 = func_201(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_199(iParam0);
	iVar1 = func_199(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_207()
{
	var uVar0;
	
	func_213(&uVar0, unk_0x1D3A3697182AD8B3());
	func_212(&uVar0, unk_0x81F2E25F8C019191());
	func_211(&uVar0, unk_0x1F596C965B00E290());
	func_210(&uVar0, unk_0x371CFD525753F70C());
	func_209(&uVar0, unk_0xF225116F449A5CC6());
	func_208(&uVar0, unk_0x2E48CFA70ABFC06A());
	return uVar0;
}

void func_208(var uParam0, int iParam1)
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

void func_209(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_210(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_205(*uParam0);
	iVar1 = func_203(*uParam0);
	if (iParam1 < 1 || iParam1 > func_198(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_211(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_213(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_214(int iParam0)
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
	iVar0 = func_199(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_200(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_201(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_203(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_205(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_202(iParam0);
	if (iVar5 < 1 || iVar5 > func_198(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_215(int iParam0, int iParam1)
{
	if (unk_0xCE990E643CD9D0E5(Global_111858.f_24991.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0)
{
	int iVar0;
	
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				iVar0 = func_16();
				if (!func_18(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC()) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0x11B7C25143EE2F29(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0)) || func_1()) || Global_110905) || Global_30970) || func_223()) || func_24(8, -1)) || func_222()) || func_221()) || func_220()) || func_219()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1) || func_1()) || Global_30970) || func_223()) || func_24(8, -1)) || func_220()) || func_222()) || func_221()) || func_219()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC()) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0x11B7C25143EE2F29(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0)) || func_1()) || Global_110905) || Global_30970) || func_223()) || func_24(8, -1)) || func_220()) || func_222()) || func_221()) || func_219()) || Global_111858.f_7684.f_919[iVar0] == 5) || Global_42178 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7()) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0)) || func_1()) || Global_110905) || Global_30970) || func_223()) || func_24(8, -1)) || func_222()) || func_221()) || func_219()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_1() || unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0) || func_24(8, -1)) || func_219()) || func_218()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_24(8, -1) || func_222()) || func_221()) || func_218()) || func_217())
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
							if ((((((((((((((unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0) || unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || func_1()) || Global_30970) || func_223()) || func_24(8, -1)) || func_221()) || func_220()) || func_219()) || Global_111858.f_7684.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0) || !unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) || !unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC())) || !unk_0x87F0CB19476706C3()) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || func_1()) || func_221()) || Global_110905) || Global_30970) || func_223()) || Global_42801) || func_24(8, -1)) || func_220()) || func_218()) || func_219()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0) || !unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) || !unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC())) || !unk_0x87F0CB19476706C3()) || unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0)) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true)) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0x9D7D76BBBFE285E0(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || func_1()) || Global_110905) || Global_30970) || func_223()) || func_24(8, -1)) || func_220()) || func_218()) || func_222()) || func_221()) || func_219())
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

var func_217()
{
	return Global_98994.f_1;
}

int func_218()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 13);
	}
	return 0;
}

int func_219()
{
	if (unk_0x7B70881748D166CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_220()
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

bool func_221()
{
	return Global_99007.f_352 > 0;
}

bool func_222()
{
	return Global_99007.f_351 > 0;
}

var func_223()
{
	return Global_1312896;
}

int func_224()
{
	func_15();
	if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_225(int iParam0)
{
	return func_206(func_207(), iParam0);
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_16();
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

int func_227(int iParam0)
{
	if (!func_18(iParam0))
	{
		return 7;
	}
	return Global_111858.f_7684.f_919[iParam0];
}

bool func_228(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_230())
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

int func_229()
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

int func_230()
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

void func_231()
{
	if (func_183())
	{
		if (unk_0xF10E878C0879E7E9(iLocal_103))
		{
			if (unk_0x8F678487EEBD8CE4(iLocal_58))
			{
				unk_0x93370FA10F15BE44(&iLocal_58);
			}
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_53))
		{
			unk_0x315F7D8C33F0AB37(&iLocal_53);
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_52))
		{
			if (unk_0x1D88F87079AF2FA7(iLocal_52))
			{
				unk_0x315F7D8C33F0AB37(&iLocal_52);
			}
			else
			{
				unk_0x95178967C65CAD85(&iLocal_52);
			}
		}
		unk_0x74528AC0906CBABE(iLocal_74);
		unk_0x74528AC0906CBABE(iLocal_73);
		unk_0x74528AC0906CBABE(iLocal_75);
		unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 0);
		unk_0x5476B2D1DCA6FE9D(iLocal_73, false);
		unk_0x410A1E7AD7D5C774(iLocal_74, false);
	}
	if (iLocal_97 != 0)
	{
		unk_0x531C743590D58F43(iLocal_97);
	}
	unk_0x1E337EE68290597A(iLocal_59, 0);
	func_135(&uLocal_111, 0, 0);
	func_237(-1);
	func_232(&uLocal_123, 0);
	unk_0xD39E529EBE5DB04F();
}

void func_232(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_234(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_233(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_233(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_234(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 30))
		{
			func_235(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_235(var uParam0)
{
	func_236(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_236(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xCE990E643CD9D0E5(iParam0, 30))
	{
		switch (func_165(iParam0))
		{
			case 0:
				unk_0x74528AC0906CBABE(iParam2);
				break;
			
			case 1:
				unk_0x1082C25039B168F8(sParam1);
				break;
			
			case 2:
				unk_0x8300D71BCDF3F00B(sParam1);
				break;
			
			case 3:
				unk_0x2DDA2C702A92866E(sParam1);
				break;
			
			case 4:
				unk_0x0506FDB9D8A504E1(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x63713E5A16B21379(sParam1);
				break;
			
			case 6:
				unk_0x08020BC2A66F5B71();
				break;
			
			case 7:
				unk_0x83EEF5A24C995E79(iParam2);
				break;
			
			case 8:
				unk_0x5D52AA94798846BB(iParam2, unk_0xCE990E643CD9D0E5(iParam0, 26));
				break;
			
			case 9:
				unk_0x0C58CE82DF2CA879();
				break;
			
			default:
				break;
		}
	}
}

void func_237(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_65();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_183())
	{
		func_241(iParam0);
		unk_0x694F632EFD1F47D0(0, 0);
		Global_111849 = unk_0x578C4EF320340AF7();
		func_240(30000);
		StringCopy(&cVar0, func_239(Global_111847, 1), 64);
		if (func_64(Global_111847) > 0)
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
	func_238(&Global_31027);
	Global_111848 = 0;
	func_190(-1);
}

void func_238(var uParam0)
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

char* func_239(int iParam0, bool bParam1)
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

void func_240(int iParam0)
{
	Global_42182 = (unk_0x578C4EF320340AF7() + iParam0);
}

void func_241(int iParam0)
{
	func_242(iParam0, 0, func_247(iParam0));
}

void func_242(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_207();
	func_245(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_244(iParam0, &uVar0);
	Var1 = { func_243(&uVar0) };
}

struct<16> func_243(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_201(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_200(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_199(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_202(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_205(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_203(*uParam0), 64);
	return Var0;
}

void func_244(int iParam0, var uParam1)
{
	Global_111858.f_24991.f_43[iParam0] = *uParam1;
}

void func_245(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_203(*uParam0);
	iVar1 = func_205(*uParam0);
	iVar2 = func_202(*uParam0);
	iVar3 = func_201(*uParam0);
	iVar4 = func_200(*uParam0);
	iVar5 = func_199(*uParam0);
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
	iVar6 = func_198(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_198(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_246(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_246(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_213(uParam0, iParam1);
	func_212(uParam0, iParam2);
	func_211(uParam0, iParam3);
	func_209(uParam0, iParam5);
	func_210(uParam0, iParam4);
	func_208(uParam0, iParam6);
}

int func_247(int iParam0)
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

int func_248(int iParam0)
{
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (unk_0xB064AF9925F5537B(iParam0, -1, 0))
		{
			return -1;
		}
		if (unk_0xB064AF9925F5537B(iParam0, 0, 0))
		{
			return 0;
		}
		if (unk_0xB064AF9925F5537B(iParam0, 1, 0))
		{
			return 1;
		}
		if (unk_0xB064AF9925F5537B(iParam0, 2, 0))
		{
			return 2;
		}
		if (unk_0xB064AF9925F5537B(iParam0, 3, 0))
		{
			return 3;
		}
		if (unk_0xB064AF9925F5537B(iParam0, 4, 0))
		{
			return 4;
		}
		if (unk_0xB064AF9925F5537B(iParam0, 5, 0))
		{
			return 5;
		}
		if (unk_0xB064AF9925F5537B(iParam0, 6, 0))
		{
			return 6;
		}
		if (unk_0xB064AF9925F5537B(iParam0, 7, 0))
		{
			return 7;
		}
		if (unk_0xB064AF9925F5537B(iParam0, 8, 0))
		{
			return 8;
		}
	}
	return -2;
}

