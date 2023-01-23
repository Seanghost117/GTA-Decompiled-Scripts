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
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_36[2] = { 0, 0 };
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
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
	int iLocal_59 = 0;
	int iLocal_60[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80[2] = { 0, 0 };
	int iLocal_81[2] = { 0, 0 };
	int iLocal_82[2] = { 0, 0 };
	int iLocal_83[2] = { 0, 0 };
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<3> Local_94 = { 0, 0, 0 } ;
	struct<3> Local_95[2];
	struct<3> Local_96 = { 0, 0, 0 } ;
	float fLocal_97 = 0f;
	char* sLocal_98 = NULL;
	var uLocal_99 = 16;
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
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_278[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_279 = 0;
	int iLocal_280[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_281[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_282[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_283[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_284[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_285[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303[2] = { 0, 0 };
	int iLocal_304[2] = { 0, 0 };
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328[2] = { 0, 0 };
	int iLocal_329[2] = { 0, 0 };
	int iLocal_330[2] = { 0, 0 };
	int iLocal_331[2] = { 0, 0 };
	int iLocal_332[2] = { 0, 0 };
	int iLocal_333[2] = { 0, 0 };
	int iLocal_334[2] = { 0, 0 };
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340[2] = { 0, 0 };
	int iLocal_341[2] = { 0, 0 };
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361[2] = { 0, 0 };
	int iLocal_362 = 0;
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
	Local_92 = { 27.7189f, -608.7927f, 30.6293f };
	Local_96 = { 903.1f, -1548.8f, 29.8f };
	fLocal_97 = 0f;
	if (unk_0xED06FD5709A59F02(3))
	{
		unk_0x21723EF7B2FCC4CC("FHPRB_STOP");
		func_210();
		func_209();
	}
	if (func_208(0))
	{
		unk_0xBAA4D421B8B8A744("FINPRB", 0);
	}
	unk_0xDE8F8016287F771F("WorkerPedMainGroup", &iLocal_264);
	unk_0xDE8F8016287F771F("GuardMainGroup", &iLocal_265);
	unk_0x410A1E7AD7D5C774(joaat("packer"), true);
	unk_0xEFBCE8F8316F89EA(5, iLocal_265, 1862763509);
	unk_0xEFBCE8F8316F89EA(5, iLocal_264, 1862763509);
	unk_0xEFBCE8F8316F89EA(1, iLocal_265, iLocal_264);
	unk_0xEFBCE8F8316F89EA(1, iLocal_264, iLocal_265);
	unk_0xEFBCE8F8316F89EA(1, iLocal_265, joaat("COP"));
	unk_0xEFBCE8F8316F89EA(1, joaat("COP"), iLocal_265);
	unk_0xEFBCE8F8316F89EA(1, iLocal_264, joaat("COP"));
	unk_0xEFBCE8F8316F89EA(1, joaat("COP"), iLocal_264);
	while (true)
	{
		unk_0xAEF7C45DAFB8E9B0("M_FINPRB", 0);
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 230, false);
		}
		func_206();
		if (iLocal_272 == 0)
		{
			if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0)
			{
				func_205(27, 1);
				iLocal_272 = 1;
			}
		}
		if (iLocal_295 == 1)
		{
			func_201();
		}
		func_198();
		func_191();
		func_183();
		func_178();
		func_175();
		switch (iLocal_28)
		{
			case 0:
				func_174();
				break;
			
			case 1:
				func_171();
				break;
			
			case 2:
				func_147();
				break;
			
			case 3:
				func_145();
				break;
			
			case 4:
				func_116();
				break;
			
			case 5:
				func_21();
				break;
			
			case 6:
				func_1();
				break;
		}
		wait(0);
	}
}

void func_1()
{
	switch (iLocal_53)
	{
		case 0:
			unk_0xB80B2936A29B2666();
			unk_0xD289B55B6AADBA10(1);
			unk_0x21723EF7B2FCC4CC("FHPRA_FAIL");
			switch (iLocal_30)
			{
				case 0:
					break;
				
				case 4:
					sLocal_98 = "FPB_FAIL1";
					break;
				
				case 3:
					sLocal_98 = "FPB_FAIL2";
					break;
				
				case 1:
					sLocal_98 = "FPB_FAIL3";
					break;
				
				case 2:
					sLocal_98 = "FPB_FAIL10";
					break;
				
				case 5:
					if (func_14() == 0)
					{
						sLocal_98 = "FPB_FAIL7";
					}
					if (func_14() == 2)
					{
						sLocal_98 = "FPB_FAIL8";
					}
					if (func_14() == 1)
					{
						sLocal_98 = "FPB_FAIL9";
					}
					break;
				
				case 6:
					sLocal_98 = "FPB_FAIL11";
					break;
			}
			if (iLocal_30 == 0)
			{
				func_6(0);
			}
			else
			{
				func_4(sLocal_98);
			}
			iLocal_53 = 1;
			break;
		
		case 1:
			if (func_3())
			{
				if (func_2())
				{
				}
				func_209();
			}
			break;
	}
}

int func_2()
{
	if (Global_98955 == 7)
	{
		return 1;
	}
	return 0;
}

int func_3()
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_98955 == 7 || Global_98955 == 8)
	{
		return 1;
	}
	return 0;
}

void func_4(char* sParam0)
{
	func_5(sParam0);
	func_6(0);
}

void func_5(char* sParam0)
{
	if (!unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		if (unk_0x984EC4F65F95F1DF(sParam0) <= 16)
		{
			StringCopy(&Global_77065, sParam0, 16);
			StringCopy(&Global_77069, "", 16);
			if (unk_0xCF9EB097E33B913A())
			{
				unk_0xCC8906A635D85E47();
			}
		}
	}
}

void func_6(int iParam0)
{
	int iVar0;
	
	if (Global_111858.f_9081 || func_208(0))
	{
		iVar0 = func_13();
		if (!func_7(iVar0))
		{
			return;
		}
		unk_0xBE20AB8238688965(&(Global_89707[iVar0 /*5*/].f_1), 5);
		Global_98991 = iParam0;
	}
}

int func_7(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_12();
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		unk_0xD1A73960312CB3DD(5000);
	}
	iVar0 = Global_89707[iParam0 /*5*/];
	iVar1 = Global_77102.f_109[iVar0 /*4*/];
	func_11(iVar1, 1);
	unk_0xD2B5F38167F36F20(unk_0x460153A63B9477BC(), 0);
	unk_0xD25321EB4A616B93(unk_0x460153A63B9477BC(), 0);
	func_8(&(Global_111858.f_2359.f_539), iVar1);
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

void func_8(var uParam0, int iParam1)
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
			if (!func_10(Global_111858.f_18529[iVar0], &Var2, &fVar3))
			{
				Global_111858.f_18529[iVar0] = 318;
				func_9(&(uParam0->f_2296[iVar0]));
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

void func_9(var uParam0)
{
	*uParam0 = -15;
}

int func_10(int iParam0, var uParam1, float fParam2)
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
			return func_10(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_10(8, uParam1, fParam2);
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

void func_11(int iParam0, bool bParam1)
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

void func_12()
{
	Global_98990 = 1;
	if (unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1))
	{
		if (unk_0x7BCC91F3C1CF24E8(&Global_77065))
		{
			switch (func_14())
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
			switch (func_14())
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

int func_13()
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

int func_14()
{
	func_15();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_15()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_19(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_18(unk_0x9B0761B4C3EB8BC7());
			if (func_17(iVar0) && (!func_16(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_17(Global_111858.f_2359.f_539.f_4321))
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

bool func_16(int iParam0)
{
	return Global_41631 == iParam0;
}

bool func_17(int iParam0)
{
	return iParam0 < 3;
}

int func_18(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_19(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_19(int iParam0)
{
	if (func_17(iParam0))
	{
		return func_20(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_20(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

void func_21()
{
	func_175();
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_35();
			iLocal_266 = 0;
		}
		iLocal_273 = 0;
		iLocal_274 = 0;
		iLocal_275 = 0;
		unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
		if (func_34(iLocal_37, 0))
		{
			if (!func_33(iLocal_37))
			{
				while (!func_32(iLocal_37, 0))
				{
					wait(0);
				}
			}
		}
		if (func_34(iLocal_39, 0))
		{
			if (!func_33(iLocal_39))
			{
				while (!func_32(iLocal_39, 0))
				{
					wait(0);
				}
			}
		}
		if (func_34(iLocal_38, 0))
		{
			if (!func_33(iLocal_38))
			{
				while (!func_32(iLocal_38, 0))
				{
					wait(0);
				}
			}
		}
		if (unk_0x03DB5C6AABF8DA46())
		{
			if (!func_31())
			{
				unk_0x9F7ADA6298BEF7E5(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true));
			}
			func_28(iLocal_33, -1, 1);
		}
		if (!unk_0x87F0CB19476706C3())
		{
			unk_0xFD45D90342D2A0CD(800);
		}
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_33))
		{
			if (unk_0x80FF6C016CDB0FAF(iLocal_33, 0))
			{
				if (func_14() == 0)
				{
					if (func_34(iLocal_39, 0))
					{
						if (unk_0xE0B3BC41DDA88DF0(iLocal_39, iLocal_33, 0))
						{
							unk_0x9B94F6169B0DAEFD(iLocal_39);
							unk_0x59478CBBF96AF7D1(iLocal_39);
							unk_0x4E65320BC9AD521C(iLocal_39, true);
							unk_0x1FBAE3B250A7D06D(iLocal_39, iLocal_33, 0);
						}
					}
					if (func_34(iLocal_38, 0))
					{
						if (unk_0xE0B3BC41DDA88DF0(iLocal_38, iLocal_33, 0))
						{
							unk_0x9B94F6169B0DAEFD(iLocal_38);
							unk_0x59478CBBF96AF7D1(iLocal_38);
							unk_0x4E65320BC9AD521C(iLocal_38, true);
							unk_0x1FBAE3B250A7D06D(iLocal_38, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 2)
				{
					if (func_34(iLocal_37, 0))
					{
						if (unk_0xE0B3BC41DDA88DF0(iLocal_37, iLocal_33, 0))
						{
							unk_0x9B94F6169B0DAEFD(iLocal_37);
							unk_0x59478CBBF96AF7D1(iLocal_37);
							unk_0x4E65320BC9AD521C(iLocal_37, true);
							unk_0x1FBAE3B250A7D06D(iLocal_37, iLocal_33, 0);
						}
					}
					if (func_34(iLocal_38, 0))
					{
						if (unk_0xE0B3BC41DDA88DF0(iLocal_38, iLocal_33, 0))
						{
							unk_0x9B94F6169B0DAEFD(iLocal_38);
							unk_0x59478CBBF96AF7D1(iLocal_38);
							unk_0x4E65320BC9AD521C(iLocal_38, true);
							unk_0x1FBAE3B250A7D06D(iLocal_38, iLocal_33, 0);
						}
					}
				}
				if (func_14() == 1)
				{
					if (func_34(iLocal_37, 0))
					{
						if (unk_0xE0B3BC41DDA88DF0(iLocal_37, iLocal_33, 0))
						{
							unk_0x9B94F6169B0DAEFD(iLocal_37);
							unk_0x59478CBBF96AF7D1(iLocal_37);
							unk_0x4E65320BC9AD521C(iLocal_37, true);
							unk_0x1FBAE3B250A7D06D(iLocal_37, iLocal_33, 0);
						}
					}
					if (func_34(iLocal_39, 0))
					{
						if (unk_0xE0B3BC41DDA88DF0(iLocal_39, iLocal_33, 0))
						{
							unk_0x9B94F6169B0DAEFD(iLocal_39);
							unk_0x59478CBBF96AF7D1(iLocal_39);
							unk_0x4E65320BC9AD521C(iLocal_39, true);
							unk_0x1FBAE3B250A7D06D(iLocal_39, iLocal_33, 0);
						}
					}
				}
				if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_33, 0))
				{
					unk_0x1FBAE3B250A7D06D(unk_0x9B0761B4C3EB8BC7(), iLocal_33, 0);
				}
			}
		}
		settimerb(0);
		iLocal_53 = 2;
	}
	if (iLocal_53 == 2)
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_33))
		{
			if (unk_0x80FF6C016CDB0FAF(iLocal_33, 0))
			{
				if (iLocal_275 == 0)
				{
					if (func_14() == 0)
					{
						if (func_34(iLocal_39, 0))
						{
							if (!unk_0xE0B3BC41DDA88DF0(iLocal_39, iLocal_33, 0))
							{
								if (func_33(iLocal_39))
								{
									if (func_25(iLocal_39))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (func_34(iLocal_38, 0))
						{
							if (!unk_0xE0B3BC41DDA88DF0(iLocal_38, iLocal_33, 0))
							{
								if (func_33(iLocal_38))
								{
									if (func_25(iLocal_38))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (func_14() == 2)
					{
						if (func_34(iLocal_37, 0))
						{
							if (!unk_0xE0B3BC41DDA88DF0(iLocal_37, iLocal_33, 0))
							{
								if (func_33(iLocal_37))
								{
									if (func_25(iLocal_37))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (func_34(iLocal_38, 0))
						{
							if (!unk_0xE0B3BC41DDA88DF0(iLocal_38, iLocal_33, 0))
							{
								if (func_33(iLocal_38))
								{
									if (func_25(iLocal_38))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (func_14() == 1)
					{
						if (func_34(iLocal_37, 0))
						{
							if (!unk_0xE0B3BC41DDA88DF0(iLocal_37, iLocal_33, 0))
							{
								if (func_33(iLocal_37))
								{
									if (func_25(iLocal_37))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_273 = 1;
						}
						if (func_34(iLocal_39, 0))
						{
							if (!unk_0xE0B3BC41DDA88DF0(iLocal_39, iLocal_33, 0))
							{
								if (func_33(iLocal_39))
								{
									if (func_25(iLocal_39))
									{
										iLocal_275 = 1;
									}
								}
								else
								{
									iLocal_275 = 1;
								}
							}
						}
						else
						{
							iLocal_274 = 1;
						}
					}
					if (iLocal_273 == 1 && iLocal_274 == 1)
					{
						iLocal_275 = 1;
					}
				}
				else if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_33, 1))
				{
					unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
					settimerb(0);
					iLocal_53 = 3;
				}
			}
		}
	}
	if (iLocal_53 == 3)
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_33))
		{
			if (unk_0x80FF6C016CDB0FAF(iLocal_33, 0))
			{
				unk_0xFC34FFD7661206B7(iLocal_33, 0);
				unk_0x5DC21979EC6C531F(iLocal_33, 2);
				unk_0x6A8F948698B360B4(iLocal_33, true);
			}
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_32))
		{
			if (unk_0x80FF6C016CDB0FAF(iLocal_32, 0))
			{
				unk_0x6A8F948698B360B4(iLocal_32, true);
			}
		}
		iLocal_53 = 4;
	}
	if (iLocal_53 == 4)
	{
		func_22();
	}
}

void func_22()
{
	func_23(0, 0);
	func_209();
}

void func_23(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_61719)
	{
		Global_61719 = iParam1;
	}
	if (bParam0)
	{
		if ((func_208(0) && Global_77079.f_1 == 1) && func_24(Global_77079))
		{
		}
		else
		{
			Global_61717 = 1;
		}
	}
	if (Global_111858.f_9081 || func_208(0))
	{
		iVar0 = func_13();
		iVar1 = Global_89707[iVar0 /*5*/];
		uVar2 = Global_77102.f_109[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_111858.f_9081)
			{
			}
			return;
		}
		if (unk_0xCE990E643CD9D0E5(Global_89707[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (unk_0xCE990E643CD9D0E5(Global_89707[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		unk_0xBE20AB8238688965(&(Global_89707[iVar0 /*5*/].f_1), 4);
		unk_0xBE20AB8238688965(&Global_77081, 1);
		Global_77097 = uVar2;
		Global_77098 = unk_0x578C4EF320340AF7();
	}
}

int func_24(int iParam0)
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

int func_25(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_26(iVar0) != iParam0)
		{
			return 0;
		}
		if (!unk_0xCE990E643CD9D0E5(Global_94809, iVar0))
		{
			return 0;
		}
		unk_0xD2459066EA58CE43(&Global_94809, iVar0);
		return 1;
	}
	return 0;
}

int func_26(int iParam0)
{
	if (iParam0 > 3)
	{
		return 0;
	}
	if (iParam0 == func_14())
	{
		return unk_0x9B0761B4C3EB8BC7();
	}
	return Global_96433[func_27(iParam0)];
}

int func_27(int iParam0)
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

void func_28(int iParam0, int iParam1, int iParam2)
{
	if (func_30() && func_31())
	{
		while (Global_98950 != 6)
		{
			wait(0);
		}
		unk_0x73D73FA241EA4AB7(0);
		if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				unk_0x17C709475B6CA386(unk_0x9B0761B4C3EB8BC7());
			}
		}
		if (iParam0 != 0)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0xAE06B9E39EBDE049(iParam0))
				{
					if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
					{
						if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iParam0, 0))
						{
							unk_0x13A4BD6CC31F7B8F(unk_0x9B0761B4C3EB8BC7(), iParam0, iParam1);
							unk_0x7965943E39128B42(0f, 1065353216);
							unk_0x4C4FC7841A5FB983(0f);
							wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
			{
				unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
			}
		}
		unk_0x8249F4DC11CAA13C();
		func_29(0);
	}
}

void func_29(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&(Global_98955.f_20), 13);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_98955.f_20), 13);
	}
}

int func_30()
{
	if (Global_98955 == 10 || Global_98955 == 9)
	{
		return 1;
	}
	return 0;
}

bool func_31()
{
	return unk_0xCE990E643CD9D0E5(Global_98955.f_20, 13);
}

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_26(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0xCE990E643CD9D0E5(Global_94809, iVar0))
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x9B0761B4C3EB8BC7())
			{
				return 0;
			}
		}
		if (unk_0xCE990E643CD9D0E5(Global_94808, iVar0))
		{
			unk_0x2BE0D197755AB177(iParam0, 0, 0);
			unk_0xA5EAD2ACE2C8BBB2(iParam0, false, 1);
			unk_0xBE20AB8238688965(&Global_94809, iVar0);
			return 1;
		}
	}
	return 0;
}

int func_33(int iParam0)
{
	int iVar0;
	
	return 0;
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_26(iVar0) != iParam0)
		{
			return 0;
		}
		if (unk_0xCE990E643CD9D0E5(Global_94809, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_34(int iParam0, int iParam1)
{
	int iVar0;
	
	return 0;
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		iVar0 = func_18(iParam0);
		if (iVar0 > 3)
		{
			return 0;
		}
		if (func_26(iVar0) != iParam0)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iParam0 == unk_0x9B0761B4C3EB8BC7())
			{
				return 0;
			}
		}
		if (unk_0xCE990E643CD9D0E5(Global_94808, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_35()
{
	iLocal_295 = 0;
	iLocal_337 = 0;
	unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 0, 0);
	unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
	if (!unk_0x03DB5C6AABF8DA46())
	{
		unk_0x1D40553EDD51A1B8(0);
	}
	func_114();
	unk_0xB80B2936A29B2666();
	func_113();
	func_112();
	func_37();
	if (!func_31())
	{
		func_36();
	}
	unk_0x4C4FC7841A5FB983(0f);
}

void func_36()
{
	switch (iLocal_28)
	{
		case 2:
			unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), 856.9501f, -1573.177f, 29.4751f, 1, false, 0, 1);
			unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), 288.3586f);
			break;
		
		case 3:
			unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), 856.9501f, -1573.177f, 29.4751f, 1, false, 0, 1);
			unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), 288.3586f);
			break;
		
		case 4:
			if (unk_0xAE06B9E39EBDE049(iLocal_33))
			{
				if (unk_0x80FF6C016CDB0FAF(iLocal_33, 0))
				{
					if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_33, 0))
					{
						unk_0x13A4BD6CC31F7B8F(unk_0x9B0761B4C3EB8BC7(), iLocal_33, -1);
					}
				}
			}
			break;
		
		case 5:
			if (unk_0xAE06B9E39EBDE049(iLocal_33))
			{
				if (unk_0x80FF6C016CDB0FAF(iLocal_33, 0))
				{
					if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_33, 0))
					{
						unk_0x13A4BD6CC31F7B8F(unk_0x9B0761B4C3EB8BC7(), iLocal_33, -1);
					}
				}
			}
			break;
	}
}

void func_37()
{
	switch (iLocal_28)
	{
		case 3:
			iLocal_313 = 0;
			iLocal_314 = 0;
			iLocal_315 = 0;
			func_108();
			if (func_107() && func_104(7f, 7f, 7f, 1))
			{
				func_102();
				while (!func_101())
				{
					wait(0);
				}
				iLocal_34 = func_38(818.8139f, -1610.406f, 30.7951f, 264.412f);
			}
			unk_0x34FEEAC2548C3789(0.01f);
			break;
		
		case 4:
			iLocal_313 = 0;
			iLocal_314 = 0;
			iLocal_315 = 0;
			func_108();
			if (unk_0xAE06B9E39EBDE049(iLocal_33))
			{
				if (unk_0x80FF6C016CDB0FAF(iLocal_33, 0))
				{
					unk_0x03D382CB0B44E2FC(iLocal_33, 89.2131f, -596.9456f, 30.6224f, 1, false, 0, 1);
					unk_0xE922BAA80E8F9324(iLocal_33, 161.1163f);
				}
			}
			unk_0x555EE41D7C7078E6(41f, -615f, 30f, 50f, 1, 1, 0, false);
			break;
		
		case 5:
			iLocal_313 = 1;
			iLocal_314 = 1;
			iLocal_315 = 1;
			func_108();
			unk_0x555EE41D7C7078E6(41f, -615f, 30f, 50f, 1, 1, 0, false);
			if (unk_0xAE06B9E39EBDE049(iLocal_33))
			{
				if (unk_0x80FF6C016CDB0FAF(iLocal_33, 0))
				{
					unk_0x03D382CB0B44E2FC(iLocal_33, 28.4065f, -608.9371f, 30.6293f, 1, false, 0, 1);
					unk_0xE922BAA80E8F9324(iLocal_33, 70.7778f);
				}
			}
			unk_0x78FCB2E22C41B9D5(joaat("s_m_m_security_01"));
			while (!unk_0x7D167B9A0CCDA347(joaat("s_m_m_security_01")))
			{
				wait(0);
			}
			if (!unk_0xAE06B9E39EBDE049(iLocal_40))
			{
				iLocal_40 = unk_0xB3116B49FE00E2F1(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, true);
				unk_0x74528AC0906CBABE(joaat("s_m_m_security_01"));
				unk_0x694113444F21E39F(iLocal_40, 324, true);
			}
			break;
	}
}

int func_38(struct<3> Param0, float fParam1)
{
	return func_39(&(Global_102423.f_2890), Param0, fParam1, 0);
}

int func_39(var uParam0, struct<3> Param1, float fParam2, bool bParam3)
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_100(uParam0))
	{
		if (func_99(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (unk_0x3BC3A4E4A1827EEE(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (func_98(uParam0))
		{
			unk_0x555EE41D7C7078E6(Param1, 5f, 1, 0, 0, false);
			func_97(Param1, 5f, 0);
			iVar0 = unk_0xCE4780E24AFDFBF9(uParam0->f_12.f_66, Param1, fParam2, 1, 1, 0);
			if (unk_0xAE06B9E39EBDE049(iVar0))
			{
				Var1 = { unk_0x3E4D3CCC220BDFB1(iVar0, true) };
				if (vdist2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					unk_0xCBF81D3222C77066(iVar0, Param1, 0, 0, 1);
				}
				func_80(iVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (unk_0x5874D60325749F00(uParam0->f_12.f_66) || unk_0x8EB87975F59A9367(uParam0->f_12.f_66))
				{
					if (!unk_0x42E95F596AE3AE51(Param1.x, Param1.f_1, (Param1.f_2 + 30f), Param1.x, Param1.f_1, (Param1.f_2 - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					unk_0xB11D151E210D4FAC(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (unk_0xB86B8E85030B1552(unk_0x36FE6D3220816ADA(iVar0)))
						{
							func_79(uParam0->f_11, 1);
						}
						else if (unk_0x97AFEF6099069369(unk_0x36FE6D3220816ADA(iVar0)))
						{
							func_79(uParam0->f_11, 2);
						}
					}
					unk_0x617A5A74E1FE26A7(iVar0, 0);
					unk_0x29B700FB89C9DAC1(iVar0, 0);
					unk_0x494ACC4552B7881B(iVar0, true);
					func_78(iVar0, uParam0->f_11);
				}
				else if ((!func_75(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && unk_0xF005CCA4263DF67F(unk_0x6C5C6B207AA78253(), "startup_positioning"))
				{
					iVar4 = func_74(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						func_67(iVar4);
					}
				}
				if (((Global_98955 != 13 && Global_98955 != 10) && Global_98955 != 11) && Global_98955 != 12)
				{
					if (unk_0x856D5567211886A2(&(Global_98955.f_3)) == Global_76642)
					{
						if (uParam0->f_12.f_66 == Global_111858.f_32745.f_69[21 /*78*/].f_66)
						{
							func_64(24, 0);
							func_67(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_40(iVar0, uParam0->f_11);
				}
				unk_0x74528AC0906CBABE(uParam0->f_12.f_66);
				Var1 = { unk_0x3E4D3CCC220BDFB1(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_46(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = unk_0x10D3F7E169A49C44(iParam0, -1, 0);
		if (!unk_0xAE06B9E39EBDE049(iVar0))
		{
			iVar0 = unk_0x37022B7FE1589189(iParam0, -1);
		}
		if (unk_0xAE06B9E39EBDE049(iVar0) && !unk_0x5AEB5DDFFAD43CA5(iVar0))
		{
			if (unk_0x36FE6D3220816ADA(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (unk_0x36FE6D3220816ADA(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (unk_0x36FE6D3220816ADA(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_111858.f_2359.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (unk_0x36FE6D3220816ADA(iParam0) == Global_111858.f_32745.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!unk_0x7BCC91F3C1CF24E8(&(Global_111858.f_32745.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (unk_0xF005CCA4263DF67F(unk_0x6984AA4EC2FF9734(iParam0), &(Global_111858.f_32745.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_111858.f_32745.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_111858.f_32745.f_5592[iVar1] = iVar2;
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
		if (unk_0x36FE6D3220816ADA(iParam0) == Global_111858.f_32745.f_5600[iVar1 /*78*/].f_66)
		{
			if (!unk_0x7BCC91F3C1CF24E8(&(Global_111858.f_32745.f_5600[iVar1 /*78*/].f_1)))
			{
				if (unk_0xF005CCA4263DF67F(unk_0x6984AA4EC2FF9734(iParam0), &(Global_111858.f_32745.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_111858.f_32745.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_111858.f_32745.f_5590 = iParam1;
	Global_76559 = iParam0;
	Global_111858.f_32745.f_5588 = 1;
	func_41(iParam0, &(Global_111858.f_32745.f_5510));
}

void func_41(int iParam0, var uParam1)
{
	int iVar0;
	
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		func_45(uParam1);
		uParam1->f_66 = unk_0x36FE6D3220816ADA(iParam0);
		StringCopy(&(uParam1->f_1), unk_0x6984AA4EC2FF9734(iParam0), 16);
		*uParam1 = unk_0x999BFF5D72C9701A(iParam0);
		unk_0x255499E0D27A1780(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		unk_0x7E545979AF9FCA10(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		unk_0xA681FAA57125DB66(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = unk_0xA3DDFC0A00C22ED3(iParam0);
		uParam1->f_67 = unk_0x16628A9DDE9875CC(iParam0);
		uParam1->f_69 = unk_0x74BE6BA308A7B62F(iParam0);
		uParam1->f_70 = unk_0xB9FAC5FDE6272EE5(iParam0);
		unk_0x7984C9503C733252(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		unk_0xEC53ED0C29BA8483(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (unk_0x8CC64DFDB61877EA(iParam0, 2))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 28);
		}
		if (unk_0x8CC64DFDB61877EA(iParam0, 3))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 29);
		}
		if (unk_0x8CC64DFDB61877EA(iParam0, 0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 30);
		}
		if (unk_0x8CC64DFDB61877EA(iParam0, 1))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_44(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (unk_0xD501F7099396F726(iParam0, 0))
		{
			uParam1->f_68 = unk_0x4B3B9AC15296615C(iParam0);
		}
		if (unk_0xF9C3E2B9AA9E2294(uParam1->f_66))
		{
			if (unk_0xCA87E17B66918D00(iParam0))
			{
				switch (unk_0x38EAEB8EE9D858CF(iParam0))
				{
					case 3:
					case 0:
						unk_0xD2459066EA58CE43(&(uParam1->f_77), 23);
						unk_0xBE20AB8238688965(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						unk_0xD2459066EA58CE43(&(uParam1->f_77), 23);
						unk_0xD2459066EA58CE43(&(uParam1->f_77), 22);
						break;
					
					case 5:
						unk_0xBE20AB8238688965(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), 23);
			}
		}
		if (!unk_0x5EF4A66EF7630445(iParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 9);
		}
		if (unk_0x93846124A64E7DEC(iParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 10);
		}
		if (unk_0xB41668EFA7045047(iParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 13);
			unk_0x2CB46B57EB6A7F5D(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (unk_0x3FE1C23F43A4E29E(iParam0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 12);
		}
		func_43(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (unk_0xAACD889100BCBCFA(iParam0, iVar0 + 1))
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), func_42(iVar0 + 1));
			}
			iVar0++;
		}
		if (unk_0x62B133F8490E0B2E(iParam0, 0))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 11);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(uParam1->f_77), 11);
		}
		if (unk_0x871819940BD2E434(iParam0, "IgnoredByQuickSave") && unk_0x84E72BB19D4FDE12(iParam0, "IgnoredByQuickSave"))
		{
			unk_0xBE20AB8238688965(&(uParam1->f_77), 27);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(uParam1->f_77), 27);
		}
	}
}

int func_42(int iParam0)
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

int func_43(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x80FF6C016CDB0FAF(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xC71761E30ACCF098(*iParam0) == 0)
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
			if (unk_0xC59714C8D4D5117D(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (unk_0xC59714C8D4D5117D(*iParam0, iVar1))
			{
				switch (unk_0x0523E2B914021FFF(*iParam0))
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
			(*uParam1)[iVar0] = unk_0x7F8B14CBFB9813E5(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = unk_0x9CE7070F0EBF111F(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = unk_0x9CE7070F0EBF111F(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_44(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_45(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
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
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_46(int iParam0)
{
	if ((((((((((!unk_0xAE06B9E39EBDE049(iParam0) || !unk_0x80FF6C016CDB0FAF(iParam0, 0)) || func_62(iParam0, 0, 0)) || func_62(iParam0, 1, 0)) || func_62(iParam0, 2, 0)) || func_61(iParam0) != 145) || func_60(iParam0)) || func_59(iParam0)) || func_58(iParam0)) || func_57(iParam0)) || !func_47(unk_0x36FE6D3220816ADA(iParam0)))
	{
		if (func_59(iParam0))
		{
		}
		if (func_59(iParam0))
		{
		}
		if (func_62(iParam0, 0, 0))
		{
		}
		if (func_62(iParam0, 1, 0))
		{
		}
		if (func_62(iParam0, 2, 0))
		{
		}
		if (func_61(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_47(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_48(iParam0, 0))
	{
		return 0;
	}
	if (((unk_0x5874D60325749F00(iParam0) || unk_0xF9C3E2B9AA9E2294(iParam0)) || unk_0x442D6659150AF4B3(iParam0)) || unk_0xCA6AF782C906AC86(iParam0))
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
		case joaat("firetruk"):
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

int func_48(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!unk_0x653AAFF7E08B7D39(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !unk_0x25DDB354A40FFCDB()) || (iParam0 == joaat("buffalo3") && !unk_0x25DDB354A40FFCDB())) || (iParam0 == joaat("gauntlet2") && !unk_0x25DDB354A40FFCDB())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !unk_0x25DDB354A40FFCDB()))
	{
		if (!func_56())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < unk_0x81BDFC133086F533())
		{
			if (unk_0xA2F4B5E51CE10D19(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (unk_0x14AC70FD8926649E(Var1))
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
		if ((((!func_55() && !func_54()) && !func_53()) && !func_52()) && !func_56())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((unk_0xC6C08C02733D02C8() || unk_0xF8EDFF98A9C94C74()) || unk_0xDCA0815D900F27F8())
		{
		}
		else if (!func_53())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_51(iParam0))
		{
			return 0;
		}
	}
	if (!func_49(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_49(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_50())
	{
		return 1;
	}
	unk_0x69DA2BD216554CB9(&iVar0, &uVar1);
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
	if (!unk_0x18A09013B66E9BB4(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_50()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		return unk_0xC5AA3415F982DC6C();
	}
	return 0;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2515213)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = unk_0x5A002C4821A13338();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6600 && !Global_262145.f_12930) && iVar1 < Global_262145.f_12931)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14230 && iVar1 < Global_262145.f_14242)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14226 && iVar1 < Global_262145.f_14238)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14227 && iVar1 < Global_262145.f_14239)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14228 && iVar1 < Global_262145.f_14240)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14229 && iVar1 < Global_262145.f_14241)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14231 && iVar1 < Global_262145.f_14243)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14232 && iVar1 < Global_262145.f_14235)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14233 && iVar1 < Global_262145.f_14236)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14234 && iVar1 < Global_262145.f_14237)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16861 && iVar1 < Global_262145.f_16826)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16856 && iVar1 < Global_262145.f_16821)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16860 && iVar1 < Global_262145.f_16825)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16859 && iVar1 < Global_262145.f_16824)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16853 && iVar1 < Global_262145.f_16818)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16854 && iVar1 < Global_262145.f_16819)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16857 && iVar1 < Global_262145.f_16822)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16858 && iVar1 < Global_262145.f_16823)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16855 && iVar1 < Global_262145.f_16820)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16863 && iVar1 < Global_262145.f_16828)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16864 && iVar1 < Global_262145.f_16829)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16852 && iVar1 < Global_262145.f_16817)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16851 && iVar1 < Global_262145.f_16816)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16850 && iVar1 < Global_262145.f_16815)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16862 && iVar1 < Global_262145.f_16827)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16865 && iVar1 < Global_262145.f_16830)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16866 && iVar1 < Global_262145.f_16831)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16867 && iVar1 < Global_262145.f_16832)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16868 && iVar1 < Global_262145.f_16833)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17015 && iVar1 < Global_262145.f_17037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17016 && iVar1 < Global_262145.f_17038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17017 && iVar1 < Global_262145.f_17039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17018 && iVar1 < Global_262145.f_17040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17019 && iVar1 < Global_262145.f_17041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17020 && iVar1 < Global_262145.f_17042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17022 && iVar1 < Global_262145.f_17043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17023 && iVar1 < Global_262145.f_17044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17024 && iVar1 < Global_262145.f_17045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17025 && iVar1 < Global_262145.f_17046)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17026 && iVar1 < Global_262145.f_17047)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17027 && iVar1 < Global_262145.f_17048)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17028 && iVar1 < Global_262145.f_17049)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17034 && iVar1 < Global_262145.f_17056)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17031 && iVar1 < Global_262145.f_17052)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17032 && iVar1 < Global_262145.f_17053)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17033 && iVar1 < Global_262145.f_17054)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17021 && iVar1 < Global_262145.f_17055)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17035 && iVar1 < Global_262145.f_17057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17029 && iVar1 < Global_262145.f_17050)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17030 && iVar1 < Global_262145.f_17051)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17036 && iVar1 < Global_262145.f_17058)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18667 && iVar1 < Global_262145.f_18764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18668 && iVar1 < Global_262145.f_18765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18669 && iVar1 < Global_262145.f_18766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18670 && iVar1 < Global_262145.f_18767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18671 && iVar1 < Global_262145.f_18768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18672 && iVar1 < Global_262145.f_18769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18673 && iVar1 < Global_262145.f_18770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18674 && iVar1 < Global_262145.f_18771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18675 && iVar1 < Global_262145.f_18772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18676 && iVar1 < Global_262145.f_18773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18677 && iVar1 < Global_262145.f_18774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18678 && iVar1 < Global_262145.f_18775)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18679 && iVar1 < Global_262145.f_18776)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18680 && iVar1 < Global_262145.f_18777)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18681 && iVar1 < Global_262145.f_18778)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18682 && iVar1 < Global_262145.f_18779)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18683 && iVar1 < Global_262145.f_18780)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18684 && iVar1 < Global_262145.f_18781)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18685 && iVar1 < Global_262145.f_18782)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18686 && iVar1 < Global_262145.f_18783)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18687 && iVar1 < Global_262145.f_18784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18688 && iVar1 < Global_262145.f_18785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18689 && iVar1 < Global_262145.f_18786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18690 && iVar1 < Global_262145.f_18787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18691 && iVar1 < Global_262145.f_18788)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19748 && iVar1 < Global_262145.f_19744)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19749 && iVar1 < Global_262145.f_19745)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19750 && iVar1 < Global_262145.f_19746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19751 && iVar1 < Global_262145.f_19747)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20629 && iVar1 < Global_262145.f_20637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20630 && iVar1 < Global_262145.f_20638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20631 && iVar1 < Global_262145.f_20639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20632 && iVar1 < Global_262145.f_20640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20633 && iVar1 < Global_262145.f_20641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20634 && iVar1 < Global_262145.f_20642)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21409 && iVar1 < Global_262145.f_21429)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21421 && iVar1 < Global_262145.f_21441)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21412 && iVar1 < Global_262145.f_21432)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21422 && iVar1 < Global_262145.f_21442)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21410 && iVar1 < Global_262145.f_21430)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21426 && iVar1 < Global_262145.f_21446)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21424 && iVar1 < Global_262145.f_21444)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21425 && iVar1 < Global_262145.f_21445)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21420 && iVar1 < Global_262145.f_21440)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21427 && iVar1 < Global_262145.f_21447)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21423 && iVar1 < Global_262145.f_21443)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21419 && iVar1 < Global_262145.f_21439)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21411 && iVar1 < Global_262145.f_21431)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21413 && iVar1 < Global_262145.f_21433)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21414 && iVar1 < Global_262145.f_21434)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21415 && iVar1 < Global_262145.f_21435)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21416 && iVar1 < Global_262145.f_21436)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21417 && iVar1 < Global_262145.f_21437)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21418 && iVar1 < Global_262145.f_21438)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22370 && iVar1 < Global_262145.f_22398)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22371 && iVar1 < Global_262145.f_22399)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22372 && iVar1 < Global_262145.f_22400)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22373 && iVar1 < Global_262145.f_22401)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22374 && iVar1 < Global_262145.f_22402)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22375 && iVar1 < Global_262145.f_22403)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22376 && iVar1 < Global_262145.f_22404)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22377 && iVar1 < Global_262145.f_22405)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22378 && iVar1 < Global_262145.f_22406)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22379 && iVar1 < Global_262145.f_22407)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22380 && iVar1 < Global_262145.f_22408)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22381 && iVar1 < Global_262145.f_22409)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22382 && iVar1 < Global_262145.f_22410)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22383 && iVar1 < Global_262145.f_22411)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22384 && iVar1 < Global_262145.f_22412)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22385 && iVar1 < Global_262145.f_22413)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22386 && iVar1 < Global_262145.f_22414)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22387 && iVar1 < Global_262145.f_22415)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22388 && iVar1 < Global_262145.f_22416)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22389 && iVar1 < Global_262145.f_22417)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22390 && iVar1 < Global_262145.f_22418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22391 && iVar1 < Global_262145.f_22419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22392 && iVar1 < Global_262145.f_22420)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22393 && iVar1 < Global_262145.f_22421)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22394 && iVar1 < Global_262145.f_22422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22395 && iVar1 < Global_262145.f_22423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22396 && iVar1 < Global_262145.f_22424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22397 && iVar1 < Global_262145.f_22425)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23586 && iVar1 < Global_262145.f_23602)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23587 && iVar1 < Global_262145.f_23603)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23591 && iVar1 < Global_262145.f_23607)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23594 && iVar1 < Global_262145.f_23610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23599 && iVar1 < Global_262145.f_23615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23593 && iVar1 < Global_262145.f_23609)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23585 && iVar1 < Global_262145.f_23601)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23592 && iVar1 < Global_262145.f_23608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23598 && iVar1 < Global_262145.f_23614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23597 && iVar1 < Global_262145.f_23613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23588 && iVar1 < Global_262145.f_23604)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23590 && iVar1 < Global_262145.f_23606)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23600 && iVar1 < Global_262145.f_23616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23596 && iVar1 < Global_262145.f_23612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23589 && iVar1 < Global_262145.f_23605)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23595 && iVar1 < Global_262145.f_23611)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23676 && iVar1 < Global_262145.f_23663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23677 && iVar1 < Global_262145.f_23664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23682 && iVar1 < Global_262145.f_23669)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23681 && iVar1 < Global_262145.f_23668)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23679 && iVar1 < Global_262145.f_23666)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23685 && iVar1 < Global_262145.f_23672)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23687 && iVar1 < Global_262145.f_23674)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23688 && iVar1 < Global_262145.f_23675)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23686 && iVar1 < Global_262145.f_23673)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23678 && iVar1 < Global_262145.f_23665)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23680 && iVar1 < Global_262145.f_23667)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23684 && iVar1 < Global_262145.f_23671)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23683 && iVar1 < Global_262145.f_23670)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26051 && iVar1 < Global_262145.f_26053)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25064 && iVar1 < Global_262145.f_25057)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25065 && iVar1 < Global_262145.f_25058)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25066 && iVar1 < Global_262145.f_25059)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25067 && iVar1 < Global_262145.f_25060)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26052 && iVar1 < Global_262145.f_26054)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25068 && iVar1 < Global_262145.f_25061)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25069 && iVar1 < Global_262145.f_25062)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25070 && iVar1 < Global_262145.f_25063)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25075 && iVar1 < Global_262145.f_25096)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25076 && iVar1 < Global_262145.f_25097)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25077 && iVar1 < Global_262145.f_25098)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25078 && iVar1 < Global_262145.f_25099)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25079 && iVar1 < Global_262145.f_25100)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25080 && iVar1 < Global_262145.f_25101)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25081 && iVar1 < Global_262145.f_25102)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25082 && iVar1 < Global_262145.f_25103)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25083 && iVar1 < Global_262145.f_25104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25084 && iVar1 < Global_262145.f_25105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25085 && iVar1 < Global_262145.f_25106)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25086 && iVar1 < Global_262145.f_25107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25087 && iVar1 < Global_262145.f_25108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25088 && iVar1 < Global_262145.f_25109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25089 && iVar1 < Global_262145.f_25110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25090 && iVar1 < Global_262145.f_25111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25091 && iVar1 < Global_262145.f_25112)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25092 && iVar1 < Global_262145.f_25113)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25093 && iVar1 < Global_262145.f_25114)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25094 && iVar1 < Global_262145.f_25115)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25095 && iVar1 < Global_262145.f_25116)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_27895 && iVar1 < Global_262145.f_27916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_27896 && iVar1 < Global_262145.f_27917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_27897 && iVar1 < Global_262145.f_27918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_27898 && iVar1 < Global_262145.f_27919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_27899 && iVar1 < Global_262145.f_27920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_27900 && iVar1 < Global_262145.f_27921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_27901 && iVar1 < Global_262145.f_27922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_27902 && iVar1 < Global_262145.f_27923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_27903 && iVar1 < Global_262145.f_27924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_27904 && iVar1 < Global_262145.f_27925)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_27905 && iVar1 < Global_262145.f_27926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_27906 && iVar1 < Global_262145.f_27927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_27907 && iVar1 < Global_262145.f_27928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_27908 && iVar1 < Global_262145.f_27929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_27909 && iVar1 < Global_262145.f_27930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_27910 && iVar1 < Global_262145.f_27931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_27911 && iVar1 < Global_262145.f_27932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_27912 && iVar1 < Global_262145.f_27933)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_27913 && iVar1 < Global_262145.f_27934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_27914 && iVar1 < Global_262145.f_27935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_27915 && iVar1 < Global_262145.f_27936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_27938 && iVar1 < Global_262145.f_27939) && !Global_262145.f_27893)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_27941 && iVar1 < Global_262145.f_27942) && !Global_262145.f_27894)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_27946 && iVar1 < Global_262145.f_27949)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_27947 && iVar1 < Global_262145.f_27950)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_27948 && iVar1 < Global_262145.f_27951)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_28950 && iVar1 < Global_262145.f_28615)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_28601 && iVar1 < Global_262145.f_28622)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_28602 && iVar1 < Global_262145.f_28608)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_28948 && iVar1 < Global_262145.f_28616)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_28949 && iVar1 < Global_262145.f_28617)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_28595 && iVar1 < Global_262145.f_28614)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_28596 && iVar1 < Global_262145.f_28623)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_28597 && iVar1 < Global_262145.f_28613)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_28598 && iVar1 < Global_262145.f_28611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_28944 && iVar1 < Global_262145.f_28618)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_28945 && iVar1 < Global_262145.f_28619)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_28946 && iVar1 < Global_262145.f_28620)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_28947 && iVar1 < Global_262145.f_28621)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_28599 && iVar1 < Global_262145.f_28610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_28600 && iVar1 < Global_262145.f_28612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_29392 && iVar1 < Global_262145.f_29375)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_29393 && iVar1 < Global_262145.f_29376)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_29394 && iVar1 < Global_262145.f_29377)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_29395 && iVar1 < Global_262145.f_29378)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_29396 && iVar1 < Global_262145.f_29379)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_29397 && iVar1 < Global_262145.f_29380)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_29398 && iVar1 < Global_262145.f_29381)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_29399 && iVar1 < Global_262145.f_29382)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_29400 && iVar1 < Global_262145.f_29383)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_29409)
		{
		}
		else if (!Global_262145.f_29401 && iVar1 < Global_262145.f_29384)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_29402 && iVar1 < Global_262145.f_29385)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_29403 && iVar1 < Global_262145.f_29386)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_29404 && iVar1 < Global_262145.f_29387)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_29405 && iVar1 < Global_262145.f_29388)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_29410)
		{
		}
		else if (!Global_262145.f_29406 && iVar1 < Global_262145.f_29389)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_29407 && iVar1 < Global_262145.f_29390)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_29408 && iVar1 < Global_262145.f_29391)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_52()
{
	return 0;
}

int func_53()
{
	return 1;
}

int func_54()
{
	return 1;
}

int func_55()
{
	if (unk_0x95C5B896CB42B20E(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_56()
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

int func_57(int iParam0)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = unk_0x36FE6D3220816ADA(iParam0);
	sVar1 = unk_0x6984AA4EC2FF9734(iParam0);
	if (iVar0 == joaat("speedo") && unk_0xF005CCA4263DF67F(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_48(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (unk_0xAE06B9E39EBDE049(Global_96316[iVar0]))
		{
			if (Global_96316[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_59(int iParam0)
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (unk_0xAE06B9E39EBDE049(Global_96286[iVar0]) && unk_0x80FF6C016CDB0FAF(Global_96286[iVar0], 0))
			{
				if (Global_96286[iVar0] == iParam0 && unk_0x36FE6D3220816ADA(Global_96286[iVar0]) == unk_0x36FE6D3220816ADA(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(Global_75654.f_484[24]))
	{
		if (iParam0 == Global_75654.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (unk_0xAE06B9E39EBDE049(Global_75654.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_75654.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_61(int iParam0)
{
	int iVar0;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 145;
	}
	if (!unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xAE06B9E39EBDE049(Global_96286[iVar0]))
		{
			if (Global_96286[iVar0] == iParam0)
			{
				return Global_96296[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_62(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0) || !unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_63(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || unk_0xCE990E643CD9D0E5(Global_111858.f_7225[iVar2], 0))
		{
			if (unk_0x1362F9BE8812B12C(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_63(int iParam0, int iParam1, char* sParam2, var uParam3)
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

void func_64(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_66(iParam0, 0))
		{
			func_65(iParam0, 1, 0);
			func_65(iParam0, 2, 0);
			func_65(iParam0, 3, 0);
			func_65(iParam0, 4, 0);
			func_65(iParam0, 0, 1);
			Global_75654[iParam0] = 1;
		}
	}
	else
	{
		func_65(iParam0, 0, 0);
	}
}

void func_65(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		unk_0xBE20AB8238688965(&(Global_111858.f_32745[iParam0]), iParam1);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_111858.f_32745[iParam0]), iParam1);
	}
}

bool func_66(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_111858.f_32745[iParam0], iParam1);
}

void func_67(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_71(&(Global_75654.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xAE06B9E39EBDE049(Global_75654.f_139[iParam0]))
		{
			bVar0 = true;
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0x80FF6C016CDB0FAF(Global_75654.f_139[iParam0], 0))
				{
					if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Global_75654.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				unk_0x4F3C4F457D44BB0F(Global_75654.f_139[iParam0], true, 1);
				unk_0x03A2522C845CFAC6(&(Global_75654.f_139[iParam0]));
			}
		}
		Global_75654[iParam0] = 1;
		if (unk_0xCE990E643CD9D0E5(Global_75654.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_66(iParam0, 0)) && Global_76563.f_66 == 0) && Global_111858.f_32745.f_1958[Global_75654.f_555[0 /*21*/].f_14] != 0) && Global_111858.f_32745.f_1958[Global_75654.f_555[0 /*21*/].f_14] > 3) && (!func_69(0, Global_75654.f_555[0 /*21*/].f_12) || !func_69(1, Global_75654.f_555[0 /*21*/].f_12)))
			{
				func_68(&(Global_111858.f_32745.f_69[Global_75654.f_555[0 /*21*/].f_14 /*78*/]), &Global_76563);
				Global_76641 = Global_111858.f_32745.f_5591;
			}
			func_64(iParam0, 0);
		}
	}
}

void func_68(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_69(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_70(&(Global_111858.f_32745.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_48(Global_111858.f_32745.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_70(var uParam0)
{
	return *uParam0;
}

int func_71(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_72(0, 1);
			uParam0->f_12 = 0;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_72(0, 1);
			uParam0->f_12 = 0;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_72(1, 1);
			uParam0->f_12 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_72(1, 2);
			uParam0->f_12 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 19);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_72(1, 1);
			uParam0->f_12 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_72(1, 2);
			uParam0->f_12 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 19);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_72(2, 1);
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_72(2, 1);
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_72(2, 1);
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 20);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 22);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 22);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 22);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 14);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 28);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 27);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 27);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 7);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 27);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 24);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 11);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 10);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 11);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 9);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 9);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 8);
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
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 2);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 30);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 2);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 22);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
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
			if (func_56())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 2);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 1);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_56())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 13);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 2);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 1);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			unk_0xBE20AB8238688965(&(uParam0->f_9), 0);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 21);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 30);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			unk_0xBE20AB8238688965(&(uParam0->f_9), 30);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 23);
			unk_0xBE20AB8238688965(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (unk_0xCE990E643CD9D0E5(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_111858.f_32745.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_99(Global_111858.f_32745.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111858.f_32745.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_111858.f_32745.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_111858.f_32745.f_1934[uParam0->f_14];
		}
	}
	if (unk_0xCE990E643CD9D0E5(uParam0->f_9, 19))
	{
		if (!func_99(Global_111858.f_2359.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111858.f_2359.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111858.f_2359.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (unk_0xCE990E643CD9D0E5(uParam0->f_9, 20))
	{
		if (!func_99(Global_111858.f_2359.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_111858.f_2359.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_111858.f_2359.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_72(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_17(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_73(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_73(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_111858.f_9081.f_99.f_58[128] && !Global_111858.f_9081.f_99.f_58[131])
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
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
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
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_111858.f_9081.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
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
			else if (Global_111858.f_9081.f_99.f_58[118])
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
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_74(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((unk_0xAE06B9E39EBDE049(Global_75654.f_484[iVar0]) && !unk_0xA59F96B50B97E63C(Global_75654.f_484[iVar0], 0)) && unk_0x80FF6C016CDB0FAF(Global_75654.f_484[iVar0], 0))
		{
			unk_0x255499E0D27A1780(iParam0, &iVar1, &iVar2);
			unk_0x255499E0D27A1780(Global_75654.f_484[iVar0], &iVar3, &iVar4);
			if (((unk_0x36FE6D3220816ADA(iParam0) == unk_0x36FE6D3220816ADA(Global_75654.f_484[iVar0]) && unk_0x16628A9DDE9875CC(iParam0) == unk_0x16628A9DDE9875CC(Global_75654.f_484[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_75(int iParam0, struct<3> Param1, bool bParam2)
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = unk_0x36FE6D3220816ADA(iParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_77(iParam0, Global_75654.f_139[38], 0))
			{
				func_67(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_77(iParam0, Global_75654.f_139[43], 1))
			{
				func_67(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = unk_0x95417ED29DDF58E6(unk_0x9B0761B4C3EB8BC7(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_77(iParam0, uVar1[iVar3], 1) && func_76(unk_0x3E4D3CCC220BDFB1(uVar1[iVar3], true), 2136.133f, 4780.563f, 39.9702f, 5f, 0))
				{
					if ((!bParam2 || func_99(Param1, 0f, 0f, 0f, 0)) || unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(iParam0, true), unk_0x3E4D3CCC220BDFB1(uVar1[iVar3], true), true) < 10f)
					{
						unk_0x03A2522C845CFAC6(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((unk_0xAE06B9E39EBDE049(Global_75654.f_484[14]) && unk_0x80FF6C016CDB0FAF(iParam0, 0)) && unk_0x80FF6C016CDB0FAF(Global_75654.f_484[14], 0))
			{
				if (unk_0x36FE6D3220816ADA(Global_75654.f_484[14]) == joaat("luxor2") && unk_0x16628A9DDE9875CC(iParam0) == unk_0x16628A9DDE9875CC(Global_75654.f_484[14]))
				{
					func_67(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((unk_0xAE06B9E39EBDE049(Global_75654.f_484[20]) && unk_0x80FF6C016CDB0FAF(iParam0, 0)) && unk_0x80FF6C016CDB0FAF(Global_75654.f_484[20], 0))
			{
				if (unk_0x36FE6D3220816ADA(Global_75654.f_484[20]) == joaat("swift2") && unk_0x16628A9DDE9875CC(iParam0) == unk_0x16628A9DDE9875CC(Global_75654.f_484[20]))
				{
					func_67(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_76(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
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

int func_77(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((unk_0xAE06B9E39EBDE049(iParam1) && !unk_0xA59F96B50B97E63C(iParam1, 0)) && unk_0x80FF6C016CDB0FAF(iParam1, 0))
	{
		if (bParam2)
		{
			unk_0x255499E0D27A1780(iParam0, &iVar0, &iVar1);
			unk_0x255499E0D27A1780(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_78(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!unk_0xAE06B9E39EBDE049(Global_96286[iVar0]))
		{
			Global_96286[iVar0] = iParam0;
			Global_96296[iVar0] = iParam1;
			Global_96306[iVar0] = unk_0x36FE6D3220816ADA(iParam0);
			if (unk_0xB86B8E85030B1552(Global_96306[iVar0]))
			{
				Global_96334[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_96334[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_79(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (unk_0xAE06B9E39EBDE049(Global_96286[iVar0]))
		{
			if (iParam0 == 145 || Global_96296[iVar0] == iParam0)
			{
				if (iParam1 == 0 || unk_0x36FE6D3220816ADA(Global_96286[iVar0]) == func_72(iParam0, iParam1))
				{
					if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Global_96286[iVar0], 0))
					{
						unk_0x4F3C4F457D44BB0F(Global_96286[iVar0], false, 1);
						unk_0x03A2522C845CFAC6(&(Global_96286[iVar0]));
						Global_96296[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_80(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		if (!func_89(iParam0))
		{
			if (unk_0x856D5567211886A2(&(uParam1->f_1)) != 0)
			{
				unk_0xC29A9E1088D83B1B(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < unk_0x2C8D182979CFA409())
			{
				unk_0xE704D9F37B4C2203(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_42(iVar0 + 1)))
			{
			}
			else
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), func_42(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_42(iVar1 + 1)))
			{
			}
			else
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), func_42(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_42(iVar2)))
				{
				}
				else
				{
					unk_0xBE20AB8238688965(&(uParam1->f_77), func_42(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_42(iVar3)))
				{
				}
				else
				{
					unk_0xBE20AB8238688965(&(uParam1->f_77), func_42(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_42(iVar4)))
					{
					}
					else
					{
						unk_0xBE20AB8238688965(&(uParam1->f_77), func_42(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_42(4)))
			{
			}
			else
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), func_42(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (unk_0x7F8B14CBFB9813E5(iParam0, 10) != 0)
			{
				unk_0xBE20AB8238688965(&(uParam1->f_77), 0);
			}
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			unk_0xE3FF4A5CC7C44EF4(iParam0, 0);
			if (unk_0x7F8B14CBFB9813E5(iParam0, 5) != -1)
			{
				unk_0xE3FF4A5CC7C44EF4(iParam0, 1);
			}
		}
		if (unk_0xCE990E643CD9D0E5(uParam1->f_77, 13))
		{
			unk_0xE77150AD7B3A75D0(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0x91BD4FF2323B189E(iParam0);
		}
		if (unk_0xCE990E643CD9D0E5(uParam1->f_77, 12))
		{
			unk_0xE492EED87CB95A5E(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			unk_0xDA7C54DAC349948E(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			unk_0x38633C69DE516059(iParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		unk_0x88FCE2696F59472E(iParam0, uParam1->f_7, uParam1->f_8);
		if (((unk_0xCE990E643CD9D0E5(uParam1->f_77, 15) || func_88(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_87())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		unk_0x80AB5AFB575FF63B(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_44(uParam1->f_66))
		{
			unk_0x7E69FCE3F08F853A(iParam0, 0);
		}
		else
		{
			unk_0x7E69FCE3F08F853A(iParam0, 0);
			unk_0x7E69FCE3F08F853A(iParam0, uParam1->f_65);
		}
		unk_0x0E765FE8467F7839(iParam0, !unk_0xCE990E643CD9D0E5(uParam1->f_77, 9));
		if (bParam2)
		{
			unk_0x5DC21979EC6C531F(iParam0, uParam1->f_70);
		}
		unk_0x1EC0ADF14D3A546D(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		unk_0xC87500F291715C64(iParam0, 2, unk_0xCE990E643CD9D0E5(uParam1->f_77, 28));
		unk_0xC87500F291715C64(iParam0, 3, unk_0xCE990E643CD9D0E5(uParam1->f_77, 29));
		unk_0xC87500F291715C64(iParam0, 0, unk_0xCE990E643CD9D0E5(uParam1->f_77, 30));
		unk_0xC87500F291715C64(iParam0, 1, unk_0xCE990E643CD9D0E5(uParam1->f_77, 31));
		unk_0xDBDEDE7005EE04EF(iParam0, unk_0xCE990E643CD9D0E5(uParam1->f_77, 10));
		if (unk_0x1D3BB414B1AF67E6(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			unk_0xA6595E9B6170C788(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!unk_0x72B9CC2155AEDF58(unk_0x36FE6D3220816ADA(iParam0)))
			{
				if (unk_0x97AFEF6099069369(unk_0x36FE6D3220816ADA(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_86(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_86(iParam0, uParam1->f_69);
				}
			}
		}
		if (unk_0xD501F7099396F726(iParam0, 0))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				unk_0x8E02133B2800E7EB(iParam0, 1);
			}
			else
			{
				unk_0xD7ABCA2B7FE975F3(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_81(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!unk_0x442D6659150AF4B3(uParam1->f_66) && !unk_0x5874D60325749F00(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (unk_0xCE990E643CD9D0E5(uParam1->f_77, func_42(iVar5 + 1)))
				{
					if (!unk_0xAACD889100BCBCFA(iParam0, iVar5 + 1))
					{
						unk_0xF242CEB863060ABC(iParam0, iVar5 + 1, false);
					}
				}
				else if (unk_0xAACD889100BCBCFA(iParam0, iVar5 + 1))
				{
					unk_0xF242CEB863060ABC(iParam0, iVar5 + 1, true);
				}
				iVar5++;
			}
		}
		if ((unk_0x36FE6D3220816ADA(iParam0) == joaat("sheava") || unk_0x36FE6D3220816ADA(iParam0) == joaat("omnis")) || unk_0x36FE6D3220816ADA(iParam0) == joaat("le7b"))
		{
			if (unk_0x7F8B14CBFB9813E5(iParam0, 0) == -1)
			{
				unk_0xF242CEB863060ABC(iParam0, 1, false);
			}
		}
		if (((unk_0xF9C3E2B9AA9E2294(uParam1->f_66) && unk_0x3E082C70B59E7522(iParam0)) && !unk_0x68AEFA37A65085FD(iParam0, joaat("avenger"))) && !((((Global_4456448.f_74284 == 6 || Global_4456448.f_74284 == 7) || Global_4456448.f_74284 == 18) || Global_4456448.f_74284 == 19) && Global_4456448.f_2 == 20))
		{
			if (!unk_0xCE990E643CD9D0E5(uParam1->f_77, 23))
			{
				if (unk_0xCE990E643CD9D0E5(uParam1->f_77, 22))
				{
					unk_0xEE6FDB1E2B95E783(iParam0, 2);
				}
				else
				{
					unk_0xEE6FDB1E2B95E783(iParam0, 3);
				}
			}
			else
			{
				unk_0xEE6FDB1E2B95E783(iParam0, 4);
			}
		}
		if (unk_0xCE990E643CD9D0E5(uParam1->f_77, 27))
		{
			unk_0x6AAFCA9C4D72022D(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			unk_0x6AAFCA9C4D72022D(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_81(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x80FF6C016CDB0FAF(*iParam0, 0))
	{
		return 0;
	}
	if (unk_0xC71761E30ACCF098(*iParam0) == 0)
	{
		return 0;
	}
	unk_0x249EEEE65626B20C(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			unk_0x136FC3422AADC5DD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				unk_0x136FC3422AADC5DD(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					unk_0xEA1AFD77A8446630(*iParam0, 255);
				}
				else
				{
					unk_0xEA1AFD77A8446630(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				unk_0x136FC3422AADC5DD(*iParam0, iVar1, false);
			}
		}
		else if (unk_0x7F8B14CBFB9813E5(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			unk_0x4C1DD6A89EF34554(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					unk_0x8DFB45E7317A7ED7(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					unk_0x8DFB45E7317A7ED7(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					unk_0x8DFB45E7317A7ED7(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_85(unk_0x36FE6D3220816ADA(*iParam0), 1) && unk_0x7F8B14CBFB9813E5(*iParam0, 24) != func_84(*iParam0, ((*uParam1)[38] - 1)))
	{
		unk_0x8DFB45E7317A7ED7(*iParam0, 24, func_84(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_83(iParam0);
	if (func_82(*iParam0))
	{
		unk_0xAEBB7D261688301C(*iParam0, 1);
		unk_0x494ACC4552B7881B(*iParam0, true);
	}
	return 1;
}

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0)) && unk_0xC71761E30ACCF098(iParam0) > 0)
	{
		unk_0x249EEEE65626B20C(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (unk_0x7F8B14CBFB9813E5(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, unk_0x214B1F24249CD428(iParam0, iVar1, unk_0x7F8B14CBFB9813E5(iParam0, iVar1)), 32);
				iVar2 = unk_0x856D5567211886A2(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == unk_0x856D5567211886A2("MNU_CAGE") || iVar2 == unk_0x856D5567211886A2("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_83(var uParam0)
{
	switch (unk_0x36FE6D3220816ADA(*uParam0))
	{
		case joaat("starling"):
			if (unk_0x7F8B14CBFB9813E5(*uParam0, 4) == 0)
			{
				unk_0x8DFB45E7317A7ED7(*uParam0, 13, 0, false);
			}
			else
			{
				unk_0x4C1DD6A89EF34554(*uParam0, 13);
			}
			break;
	}
}

int func_84(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		switch (unk_0x36FE6D3220816ADA(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = unk_0xAB92DA7B6007DAAA(iParam0, 38);
		iVar1 = unk_0xAB92DA7B6007DAAA(iParam0, 24);
		fVar2 = (to_float(iParam1 + 1) / to_float(iVar0));
		iVar3 = (floor((to_float(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_85(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14227)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14228)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14226)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14229)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14231)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14230)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18677)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18679)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18683)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18680)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18687)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18685)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18690)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20635)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20636)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

void func_86(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xC71761E30ACCF098(iParam0) > 0)
	{
		unk_0x249EEEE65626B20C(iParam0, 0);
		iVar0 = unk_0x7F8B14CBFB9813E5(iParam0, 24);
		iVar1 = unk_0x9CE7070F0EBF111F(iParam0, 24);
		unk_0x499726ABB88D627B(iParam0, iParam1);
		if (unk_0x36FE6D3220816ADA(iParam0) == joaat("tornado6") || unk_0x36FE6D3220816ADA(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			unk_0x4C1DD6A89EF34554(iParam0, 24);
		}
		else
		{
			unk_0x8DFB45E7317A7ED7(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

bool func_87()
{
	return unk_0x95C5B896CB42B20E(-1691188696);
}

int func_88(int iParam0)
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (unk_0x6844807B17DC2DFC("MPBitset", 3))
			{
				if (unk_0x871819940BD2E434(iParam0, "MPBitset"))
				{
					iVar0 = unk_0x8C0800114C2864BE(iParam0, "MPBitset");
				}
				return unk_0xCE990E643CD9D0E5(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_89(int iParam0)
{
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (!func_95(unk_0x460153A63B9477BC(), -1))
		{
			iParam0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
		}
	}
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	if (unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		return 0;
	}
	if (!unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		return 0;
	}
	if (func_91(unk_0x460153A63B9477BC()) == 3)
	{
		if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (func_90(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_90(int iParam0)
{
	if (unk_0x6844807B17DC2DFC("FMDeliverableID", 3))
	{
		if (unk_0x871819940BD2E434(iParam0, "FMDeliverableID"))
		{
			return unk_0x8C0800114C2864BE(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_91(int iParam0)
{
	if (func_94(iParam0) == 233)
	{
		return func_92(iParam0);
	}
	return -1;
}

int func_92(int iParam0)
{
	if (func_93(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_181;
	}
	return -1;
}

int func_93(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_94(int iParam0)
{
	if (func_93(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_95(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_96(iParam0, 1, 1))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x1FA7B77001D60F9D(iParam0), 0))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x1FA7B77001D60F9D(iParam0), 0);
			if (unk_0x80FF6C016CDB0FAF(iVar0, 0))
			{
				if (unk_0x9B0761B4C3EB8BC7() == unk_0x10D3F7E169A49C44(iVar0, iParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_96(int iParam0, bool bParam1, bool bParam2)
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

void func_97(struct<3> Param0, float fParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_71(&(Global_75654.f_555[0 /*21*/]), iVar0))
		{
			if (unk_0x272784C60C397DB6(Param0, Global_75654.f_555[0 /*21*/], bParam2) <= fParam1)
			{
				func_67(iVar0);
			}
		}
		iVar0++;
	}
}

int func_98(var uParam0)
{
	if (func_100(uParam0))
	{
		if (unk_0x7D167B9A0CCDA347(uParam0->f_12.f_66))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_99(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_100(var uParam0)
{
	if (uParam0->f_12.f_66 == 0)
	{
		return 0;
	}
	if (!func_48(uParam0->f_12.f_66, 0))
	{
		return 0;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_76(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0))
	{
		return 0;
	}
	return 1;
}

bool func_101()
{
	return func_98(&(Global_102423.f_2890));
}

void func_102()
{
	func_103(&(Global_102423.f_2890));
}

void func_103(var uParam0)
{
	if (func_100(uParam0))
	{
		unk_0x78FCB2E22C41B9D5(uParam0->f_12.f_66);
	}
}

int func_104(struct<3> Param0, int iParam1)
{
	return func_105(Global_102423.f_2890.f_12.f_66, Param0, iParam1);
}

int func_105(int iParam0, struct<3> Param1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (iParam2 == 1)
	{
		Param1 = { func_106() };
	}
	unk_0x140662B520844E45(iParam0, &Var0, &Var1);
	if ((Var1.x - Var0.x) > Param1.x)
	{
		return 0;
	}
	else if ((Var1.f_1 - Var0.f_1) > Param1.f_1)
	{
		return 0;
	}
	else if ((Var1.f_2 - Var0.f_2) > Param1.f_2)
	{
		return 0;
	}
	return 1;
}

Vector3 func_106()
{
	return 2.55f, 5.665f, 2.55f;
}

int func_107()
{
	return func_100(&(Global_102423.f_2890));
}

void func_108()
{
	unk_0x78FCB2E22C41B9D5(joaat("armytrailer2"));
	unk_0x78FCB2E22C41B9D5(joaat("packer"));
	unk_0x78FCB2E22C41B9D5(joaat("s_m_y_construct_01"));
	unk_0x78FCB2E22C41B9D5(joaat("s_m_m_security_01"));
	unk_0x78FCB2E22C41B9D5(joaat("bison2"));
	while ((((!unk_0x7D167B9A0CCDA347(joaat("armytrailer2")) || !unk_0x7D167B9A0CCDA347(joaat("packer"))) || !unk_0x7D167B9A0CCDA347(joaat("s_m_y_construct_01"))) || !unk_0x7D167B9A0CCDA347(joaat("s_m_m_security_01"))) || !unk_0x7D167B9A0CCDA347(joaat("bison2")))
	{
		wait(0);
	}
	if (!unk_0xAE06B9E39EBDE049(iLocal_32))
	{
		if (unk_0xAE06B9E39EBDE049(Global_95452[1]))
		{
			unk_0x4F3C4F457D44BB0F(Global_95452[1], true, 1);
			iLocal_32 = Global_95452[1];
			unk_0x7C4F70F41134C357(iLocal_32);
		}
		else
		{
			iLocal_32 = unk_0xCE4780E24AFDFBF9(joaat("armytrailer2"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1, 0);
			unk_0x7C4F70F41134C357(iLocal_32);
		}
	}
	if (!unk_0xAE06B9E39EBDE049(iLocal_33))
	{
		if (unk_0xAE06B9E39EBDE049(Global_95452[2]))
		{
			unk_0x4F3C4F457D44BB0F(Global_95452[2], true, 1);
			iLocal_33 = Global_95452[2];
			unk_0x494ACC4552B7881B(iLocal_33, true);
			unk_0x5DC21979EC6C531F(iLocal_33, 7);
			func_111(iLocal_33, -1);
			func_110(iLocal_33, -1);
		}
		else
		{
			iLocal_33 = unk_0xCE4780E24AFDFBF9(joaat("packer"), 919.303f, -1553.88f, 29.7789f, 167.1917f, 1, 1, 0);
			unk_0x494ACC4552B7881B(iLocal_33, true);
			unk_0x5DC21979EC6C531F(iLocal_33, 7);
			func_111(iLocal_33, -1);
			func_110(iLocal_33, -1);
		}
	}
	unk_0x0CAEF43C62E0BD03(iLocal_33, iLocal_32, 0.5f);
	unk_0x74528AC0906CBABE(joaat("armytrailer2"));
	unk_0x74528AC0906CBABE(joaat("packer"));
	unk_0x74528AC0906CBABE(joaat("bison2"));
	if (!unk_0xAE06B9E39EBDE049(iLocal_35[0]))
	{
		if (unk_0xAE06B9E39EBDE049(Global_95452.f_9[0]))
		{
			unk_0x4F3C4F457D44BB0F(Global_95452.f_9[0], true, 1);
			iLocal_35[0] = Global_95452.f_9[0];
			unk_0xD3D9D7C84656DAE5(iLocal_35[0], iLocal_264);
			func_109(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4E65320BC9AD521C(iLocal_35[0], true);
		}
		else
		{
			iLocal_35[0] = unk_0xB3116B49FE00E2F1(26, joaat("s_m_y_construct_01"), 912.34f, -1543.297f, 29.6469f, 16.169f, 1, true);
			unk_0xD3D9D7C84656DAE5(iLocal_35[0], iLocal_264);
			if (unk_0xFDE4ABD9A796190D(912.3f, -1542.6f, 30.4f, 3f, 0))
			{
				unk_0x87A8613873AF5C36(iLocal_35[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
			}
			unk_0x4E65320BC9AD521C(iLocal_35[0], true);
			func_109(iLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		}
	}
	if (!unk_0xAE06B9E39EBDE049(iLocal_35[1]))
	{
		if (unk_0xAE06B9E39EBDE049(Global_95452.f_9[1]))
		{
			unk_0x4F3C4F457D44BB0F(Global_95452.f_9[1], true, 1);
			iLocal_35[1] = Global_95452.f_9[1];
			unk_0xD3D9D7C84656DAE5(iLocal_35[1], iLocal_264);
			func_109(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4E65320BC9AD521C(iLocal_35[1], true);
		}
		else
		{
			iLocal_35[1] = unk_0xB3116B49FE00E2F1(26, joaat("s_m_y_construct_01"), 917.5028f, -1517.401f, 29.9673f, 158.5738f, 1, true);
			unk_0xD3D9D7C84656DAE5(iLocal_35[1], iLocal_264);
			if (unk_0xFDE4ABD9A796190D(917.5028f, -1517.401f, 29.9673f, 3f, 0))
			{
				unk_0x87A8613873AF5C36(iLocal_35[1], 917.5028f, -1517.401f, 29.9673f, 5f, 0);
			}
			func_109(iLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4E65320BC9AD521C(iLocal_35[1], true);
		}
	}
	if (!unk_0xAE06B9E39EBDE049(iLocal_35[2]))
	{
		if (unk_0xAE06B9E39EBDE049(Global_95452.f_9[2]))
		{
			unk_0x4F3C4F457D44BB0F(Global_95452.f_9[2], true, 1);
			iLocal_35[2] = Global_95452.f_9[2];
			unk_0xD3D9D7C84656DAE5(iLocal_35[2], iLocal_264);
			func_109(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4E65320BC9AD521C(iLocal_35[2], true);
		}
		else
		{
			iLocal_35[2] = unk_0xB3116B49FE00E2F1(26, joaat("s_m_y_construct_01"), 869.6423f, -1541.423f, 29.2516f, 346.9848f, 1, true);
			unk_0xD3D9D7C84656DAE5(iLocal_35[2], iLocal_264);
			if (unk_0xFDE4ABD9A796190D(869.6423f, -1541.423f, 29.2516f, 3f, 0))
			{
				unk_0x87A8613873AF5C36(iLocal_35[2], 869.6423f, -1541.423f, 29.2516f, 5f, 0);
			}
			func_109(iLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4E65320BC9AD521C(iLocal_35[2], true);
		}
	}
	if (!unk_0xAE06B9E39EBDE049(iLocal_35[3]))
	{
		if (unk_0xAE06B9E39EBDE049(Global_95452.f_9[3]))
		{
			unk_0x4F3C4F457D44BB0F(Global_95452.f_9[3], true, 1);
			iLocal_35[3] = Global_95452.f_9[3];
			unk_0xD3D9D7C84656DAE5(iLocal_35[3], iLocal_264);
			func_109(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4E65320BC9AD521C(iLocal_35[3], true);
		}
		else
		{
			iLocal_35[3] = unk_0xB3116B49FE00E2F1(26, joaat("s_m_y_construct_01"), 884.3046f, -1573.188f, 29.8247f, 182.9722f, 1, true);
			unk_0xD3D9D7C84656DAE5(iLocal_35[3], iLocal_264);
			if (unk_0xFDE4ABD9A796190D(884.3046f, -1573.188f, 29.8247f, 3f, 0))
			{
				unk_0x87A8613873AF5C36(iLocal_35[3], 884.3046f, -1573.188f, 29.8247f, 5f, 0);
			}
			func_109(iLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4E65320BC9AD521C(iLocal_35[3], true);
		}
	}
	if (!unk_0xAE06B9E39EBDE049(iLocal_35[4]))
	{
		if (unk_0xAE06B9E39EBDE049(Global_95452.f_9[4]))
		{
			unk_0x4F3C4F457D44BB0F(Global_95452.f_9[4], true, 1);
			iLocal_35[4] = Global_95452.f_9[4];
			unk_0xD3D9D7C84656DAE5(iLocal_35[4], iLocal_264);
			func_109(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4E65320BC9AD521C(iLocal_35[4], true);
		}
		else
		{
			iLocal_35[4] = unk_0xB3116B49FE00E2F1(26, joaat("s_m_y_construct_01"), 903.8805f, -1575.02f, 29.8327f, 308.1952f, 1, true);
			unk_0xD3D9D7C84656DAE5(iLocal_35[4], iLocal_264);
			if (unk_0xFDE4ABD9A796190D(903.8805f, -1575.02f, 29.8327f, 3f, 0))
			{
				unk_0x87A8613873AF5C36(iLocal_35[4], 903.8805f, -1575.02f, 29.8327f, 5f, 0);
			}
			func_109(iLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4E65320BC9AD521C(iLocal_35[4], true);
		}
	}
	if (!unk_0xAE06B9E39EBDE049(iLocal_35[5]))
	{
		if (unk_0xAE06B9E39EBDE049(Global_95452.f_9[5]))
		{
			unk_0x4F3C4F457D44BB0F(Global_95452.f_9[5], true, 1);
			iLocal_35[5] = Global_95452.f_9[5];
			unk_0xD3D9D7C84656DAE5(iLocal_35[5], iLocal_264);
			func_109(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4E65320BC9AD521C(iLocal_35[5], true);
		}
		else
		{
			iLocal_35[5] = unk_0xB3116B49FE00E2F1(26, joaat("s_m_y_construct_01"), 906.2186f, -1575.108f, 29.8125f, 55.9906f, 1, true);
			unk_0xD3D9D7C84656DAE5(iLocal_35[5], iLocal_264);
			if (unk_0xFDE4ABD9A796190D(906.2186f, -1575.108f, 29.8125f, 3f, 0))
			{
				unk_0x87A8613873AF5C36(iLocal_35[5], 906.2186f, -1575.108f, 29.8125f, 5f, 0);
			}
			func_109(iLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4E65320BC9AD521C(iLocal_35[5], true);
		}
	}
	if (!unk_0xAE06B9E39EBDE049(iLocal_35[6]))
	{
		if (unk_0xAE06B9E39EBDE049(Global_95452.f_9[8]))
		{
			unk_0x4F3C4F457D44BB0F(Global_95452.f_9[8], true, 1);
			iLocal_35[6] = Global_95452.f_9[8];
			unk_0xD3D9D7C84656DAE5(iLocal_35[6], iLocal_264);
			func_109(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			unk_0x4E65320BC9AD521C(iLocal_35[6], true);
		}
		else
		{
			iLocal_35[6] = unk_0xB3116B49FE00E2F1(26, joaat("s_m_y_construct_01"), 889.285f, -1561.485f, 29.6539f, 22.2456f, 1, true);
			unk_0xD3D9D7C84656DAE5(iLocal_35[6], iLocal_264);
			if (unk_0xFDE4ABD9A796190D(889.285f, -1561.485f, 29.6539f, 3f, 0))
			{
				unk_0x87A8613873AF5C36(iLocal_35[6], 889.285f, -1561.485f, 29.6539f, 5f, 0);
			}
			func_109(iLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			unk_0x4E65320BC9AD521C(iLocal_35[6], true);
		}
	}
	if (!unk_0xAE06B9E39EBDE049(iLocal_36[0]))
	{
		if (unk_0xAE06B9E39EBDE049(Global_95452.f_9[6]))
		{
			unk_0x4F3C4F457D44BB0F(Global_95452.f_9[6], true, 1);
			iLocal_36[0] = Global_95452.f_9[6];
			unk_0xD3D9D7C84656DAE5(iLocal_36[0], iLocal_265);
			func_109(iLocal_36[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4E65320BC9AD521C(iLocal_36[0], true);
			unk_0x92BD213E6A0E666B(iLocal_36[0], joaat("weapon_pistol"), 100, false, false);
			unk_0x3A2AAE59B4681DAF(iLocal_36[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			iLocal_36[0] = unk_0xB3116B49FE00E2F1(26, joaat("s_m_m_security_01"), 863.1551f, -1564.572f, 29.3231f, 130.7946f, 1, true);
			unk_0xD3D9D7C84656DAE5(iLocal_36[0], iLocal_265);
			func_109(iLocal_36[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4E65320BC9AD521C(iLocal_36[0], true);
			unk_0x92BD213E6A0E666B(iLocal_36[0], joaat("weapon_pistol"), 100, false, false);
			unk_0x3A2AAE59B4681DAF(iLocal_36[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}
	if (!unk_0xAE06B9E39EBDE049(iLocal_36[1]))
	{
		if (unk_0xAE06B9E39EBDE049(Global_95452.f_9[7]))
		{
			unk_0x4F3C4F457D44BB0F(Global_95452.f_9[7], true, 1);
			iLocal_36[1] = Global_95452.f_9[7];
			unk_0xD3D9D7C84656DAE5(iLocal_36[1], iLocal_265);
			func_109(iLocal_36[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4E65320BC9AD521C(iLocal_36[1], true);
			unk_0x92BD213E6A0E666B(iLocal_36[1], joaat("weapon_pistol"), 100, false, false);
			unk_0x3A2AAE59B4681DAF(iLocal_36[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			iLocal_36[1] = unk_0xB3116B49FE00E2F1(26, joaat("s_m_m_security_01"), 940.2881f, -1573.877f, 29.3866f, 269.1856f, 1, true);
			unk_0xD3D9D7C84656DAE5(iLocal_36[1], iLocal_265);
			func_109(iLocal_36[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			unk_0x4E65320BC9AD521C(iLocal_36[1], true);
			unk_0x92BD213E6A0E666B(iLocal_36[1], joaat("weapon_pistol"), 100, false, false);
			unk_0x3A2AAE59B4681DAF(iLocal_36[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}
	unk_0x74528AC0906CBABE(joaat("s_m_y_construct_01"));
	unk_0x74528AC0906CBABE(joaat("s_m_m_security_01"));
}

void func_109(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		unk_0x6C08F93084C348FC(iParam0, fParam1);
		unk_0x9445ACA80D2E87F9(iParam0, fParam2);
		unk_0x0D6B1ECCACFEEDCB(iParam0, (fParam3 / 2f));
		unk_0xC275806AC780442D(iParam0, fParam4);
		unk_0x6E54718C637039FE(iParam0, fParam5);
	}
}

void func_110(int iParam0, int iParam1)
{
	Global_61728 = iParam0;
	Global_61729 = iParam1;
}

void func_111(int iParam0, int iParam1)
{
	int iVar0;
	
	Global_61730 = iParam0;
	iVar0 = 0;
	while (iVar0 < Global_73812)
	{
		if (iParam1 == -1 || Global_73813[iVar0 /*9*/] == iParam1)
		{
			if (Global_73813[iVar0 /*9*/].f_6 != iParam0)
			{
				Global_73813[iVar0 /*9*/].f_6 = iParam0;
				Global_73813[iVar0 /*9*/].f_7 = 1;
				Global_73813[iVar0 /*9*/].f_8 = 0;
			}
		}
		iVar0++;
	}
}

void func_112()
{
	iLocal_54 = 0;
	while (iLocal_54 <= 6)
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_35[iLocal_54]) && unk_0x1D2A3118784C0272(iLocal_35[iLocal_54], 1))
		{
			unk_0x586DDC617E714637(&(iLocal_35[iLocal_54]));
		}
		iLocal_54++;
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_36[0]) && unk_0x1D2A3118784C0272(iLocal_36[0], 1))
	{
		unk_0x586DDC617E714637(&(iLocal_36[0]));
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_36[1]) && unk_0x1D2A3118784C0272(iLocal_36[1], 1))
	{
		unk_0x586DDC617E714637(&(iLocal_36[1]));
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_37) && unk_0x1D2A3118784C0272(iLocal_37, 1))
	{
		unk_0x586DDC617E714637(&iLocal_37);
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_38) && unk_0x1D2A3118784C0272(iLocal_38, 1))
	{
		unk_0x586DDC617E714637(&iLocal_38);
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_39) && unk_0x1D2A3118784C0272(iLocal_39, 1))
	{
		unk_0x586DDC617E714637(&iLocal_39);
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_40) && unk_0x1D2A3118784C0272(iLocal_40, 1))
	{
		unk_0x586DDC617E714637(&iLocal_40);
	}
	if (!func_31())
	{
		unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), 519.1906f, -2980.994f, 5.0443f, 1, false, 0, 1);
		unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), 270.1911f);
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_32) && unk_0x1D2A3118784C0272(iLocal_32, 1))
	{
		unk_0x03A2522C845CFAC6(&iLocal_32);
	}
	if (unk_0xAE06B9E39EBDE049(Global_95452[3]))
	{
		unk_0x4F3C4F457D44BB0F(Global_95452[3], true, 0);
		unk_0x03A2522C845CFAC6(&(Global_95452[3]));
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_33) && unk_0x1D2A3118784C0272(iLocal_33, 1))
	{
		unk_0x03A2522C845CFAC6(&iLocal_33);
	}
	unk_0x1082C25039B168F8("cellphone@str");
	unk_0x1082C25039B168F8("misscarsteal4@director_grip");
	unk_0x296C8A46F264E8F7("FHPRB_START");
	unk_0x296C8A46F264E8F7("FHPRB_TRUCK");
	unk_0x296C8A46F264E8F7("FHPRB_COPS");
	unk_0x296C8A46F264E8F7("FHPRB_LOST");
	unk_0x296C8A46F264E8F7("FHPRB_STOP");
	unk_0x555EE41D7C7078E6(889.5f, -1553.8f, 30f, 150f, 1, 0, 0, false);
}

void func_113()
{
	if (unk_0x8F678487EEBD8CE4(iLocal_49))
	{
		unk_0x93370FA10F15BE44(&iLocal_49);
	}
	if (unk_0x8F678487EEBD8CE4(iLocal_50))
	{
		unk_0x93370FA10F15BE44(&iLocal_50);
	}
	if (unk_0x8F678487EEBD8CE4(iLocal_51))
	{
		unk_0x93370FA10F15BE44(&iLocal_51);
	}
	if (unk_0x8F678487EEBD8CE4(iLocal_52))
	{
		unk_0x93370FA10F15BE44(&iLocal_52);
	}
}

void func_114()
{
	Global_19871 = 0;
	func_115();
}

void func_115()
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

void func_116()
{
	func_139();
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_35();
			iLocal_266 = 0;
		}
		iLocal_267 = 0;
		iLocal_269 = 0;
		iLocal_346 = 0;
		iLocal_85 = 0;
		iLocal_86 = 0;
		unk_0x53797676AD34A9AA(5);
		unk_0x1082C25039B168F8("cellphone@str");
		unk_0x1082C25039B168F8("misscarsteal4@director_grip");
		if (!unk_0x87F0CB19476706C3())
		{
			unk_0x9F7ADA6298BEF7E5(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true));
			unk_0xFD45D90342D2A0CD(800);
		}
		unk_0x34FEEAC2548C3789(1f);
		unk_0xBE1CA603598C1441(10f, 5f, 4);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		func_138(&uLocal_99, 3, 0, "LESTER", 0, 1);
		if (func_14() == 0)
		{
			func_138(&uLocal_99, 0, unk_0x9B0761B4C3EB8BC7(), "MICHAEL", 0, 1);
		}
		if (func_14() == 1)
		{
			func_138(&uLocal_99, 1, unk_0x9B0761B4C3EB8BC7(), "FRANKLIN", 0, 1);
		}
		if (func_14() == 2)
		{
			func_138(&uLocal_99, 2, unk_0x9B0761B4C3EB8BC7(), "TREVOR", 0, 1);
		}
		iLocal_53 = 2;
	}
	if (iLocal_53 == 2)
	{
		if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) == 0)
		{
			if (func_14() == 0)
			{
				if (func_123(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, 0))
				{
					unk_0xBE1CA603598C1441(5f, 5f, 4);
					settimera(0);
					iLocal_53 = 3;
				}
			}
			if (func_14() == 1)
			{
				if (func_123(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, 0))
				{
					unk_0xBE1CA603598C1441(5f, 5f, 4);
					settimera(0);
					iLocal_53 = 3;
				}
			}
			if (func_14() == 2)
			{
				if (func_123(&uLocal_99, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, 0))
				{
					unk_0xBE1CA603598C1441(5f, 5f, 4);
					settimera(0);
					iLocal_53 = 3;
				}
			}
		}
	}
	if (iLocal_53 == 3)
	{
		if (!unk_0x8F678487EEBD8CE4(iLocal_50))
		{
			if (!func_122())
			{
				if (timera() > 10500)
				{
					iLocal_50 = func_120(Local_92, 1);
				}
			}
		}
		if (func_122())
		{
			iLocal_53 = 4;
		}
	}
	if (iLocal_53 == 4)
	{
		if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) == 0)
		{
			if (unk_0x80FF6C016CDB0FAF(iLocal_33, 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_33, 0))
				{
					if (unk_0xD3DD4CF5121550D3(iLocal_33))
					{
						if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_92, 4f, 4f, 2f, true, true, 2))
						{
							if (func_118(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 4f, 3, 0.5f, 0, 1, 0))
							{
								unk_0x21723EF7B2FCC4CC("FHPRB_STOP");
								if (unk_0x8F678487EEBD8CE4(iLocal_50))
								{
									unk_0x93370FA10F15BE44(&iLocal_50);
								}
								unk_0xBE1CA603598C1441(5f, 5f, 4);
								func_117(0, -1);
								iLocal_53 = 0;
								iLocal_28 = 5;
							}
						}
					}
				}
			}
		}
	}
}

void func_117(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (Global_61725)
	{
	}
	Global_61725 = 0;
	if (bParam0)
	{
		Global_61726 = 1;
	}
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73812)
		{
			if (Global_61942[Global_73813[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_73813[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_73812)
		{
			if (Global_73813[iVar0 /*9*/] > 0)
			{
				if (Global_73813[iVar0 /*9*/] == iParam1)
				{
					Global_73813[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_118(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	unk_0x779660A9E5364C4D(0, 71, 1);
	unk_0x779660A9E5364C4D(0, 72, 1);
	unk_0x779660A9E5364C4D(0, 76, 1);
	unk_0x779660A9E5364C4D(0, 73, 1);
	unk_0x779660A9E5364C4D(0, 59, 1);
	unk_0x779660A9E5364C4D(0, 60, 1);
	if (bParam5)
	{
		unk_0x779660A9E5364C4D(0, 75, 1);
	}
	unk_0x779660A9E5364C4D(0, 80, 1);
	if (!bParam6)
	{
		unk_0x779660A9E5364C4D(0, 69, 1);
		unk_0x779660A9E5364C4D(0, 70, 1);
		unk_0x779660A9E5364C4D(0, 68, 1);
	}
	unk_0x779660A9E5364C4D(0, 74, 1);
	unk_0x779660A9E5364C4D(0, 86, 1);
	unk_0x779660A9E5364C4D(0, 81, 1);
	unk_0x779660A9E5364C4D(0, 82, 1);
	unk_0x779660A9E5364C4D(0, 138, 1);
	unk_0x779660A9E5364C4D(0, 136, 1);
	unk_0x779660A9E5364C4D(0, 114, 1);
	unk_0x779660A9E5364C4D(0, 107, 1);
	unk_0x779660A9E5364C4D(0, 110, 1);
	unk_0x779660A9E5364C4D(0, 89, 1);
	unk_0x779660A9E5364C4D(0, 89, 1);
	unk_0x779660A9E5364C4D(0, 87, 1);
	unk_0x779660A9E5364C4D(0, 88, 1);
	unk_0x779660A9E5364C4D(0, 113, 1);
	unk_0x779660A9E5364C4D(0, 115, 1);
	unk_0x779660A9E5364C4D(0, 116, 1);
	unk_0x779660A9E5364C4D(0, 117, 1);
	unk_0x779660A9E5364C4D(0, 118, 1);
	unk_0x779660A9E5364C4D(0, 119, 1);
	unk_0x779660A9E5364C4D(0, 352, 1);
	unk_0x779660A9E5364C4D(0, 131, 1);
	unk_0x779660A9E5364C4D(0, 132, 1);
	unk_0x779660A9E5364C4D(0, 123, 1);
	unk_0x779660A9E5364C4D(0, 126, 1);
	unk_0x779660A9E5364C4D(0, 129, 1);
	unk_0x779660A9E5364C4D(0, 130, 1);
	unk_0x779660A9E5364C4D(0, 133, 1);
	unk_0x779660A9E5364C4D(0, 134, 1);
	unk_0xB78DC40D63D4FBA3();
	func_119(iParam0);
	if ((unk_0x578C4EF320340AF7() - Global_29) > 500)
	{
		unk_0xD4C86DEC93F19FB0(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = unk_0x578C4EF320340AF7();
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (unk_0x0D77CDCF403AEBD2(unk_0xF3A639BEE7AADF55(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_119(int iParam0)
{
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (unk_0xAADB7E66E4BD2B67(iParam0))
		{
			if (unk_0xC1067169688057A8(iParam0))
			{
				unk_0x348DC18FDCA78997(iParam0, 0);
			}
		}
	}
}

int func_120(struct<3> Param0, bool bParam1)
{
	int iVar0;
	
	iVar0 = unk_0x6820C712C1DD618A(Param0);
	unk_0xFA81E0FBD7F5ACA0(iVar0, func_121(unk_0x25DDB354A40FFCDB(), 1f, 1f));
	unk_0x72BEFB9451782F60(iVar0, bParam1);
	return iVar0;
}

float func_121(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_122()
{
	if (Global_21005 == 0)
	{
		return 1;
	}
	return 0;
}

bool func_123(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	func_137(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21053 = 0;
	Global_21012 = 1;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_21010 = 0;
	Global_21057 = 0;
	Global_21059 = 0;
	if (iParam5 == 1)
	{
		Global_21017 = 1;
	}
	else
	{
		Global_21017 = 0;
	}
	Global_2621441 = 0;
	return func_124(sParam3, iParam4, bParam8);
}

int func_124(char* sParam0, int iParam1, bool bParam2)
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
					func_115();
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
		if (func_136(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_135();
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
				func_134();
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
				if (func_133())
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
			if (func_132())
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
			func_131();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_130();
		func_125();
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
		func_115();
	}
	return 0;
}

void func_125()
{
	if (!func_126())
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

int func_126()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (unk_0x460153A63B9477BC() == func_129())
	{
		return 0;
	}
	if (func_127(unk_0x460153A63B9477BC()))
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

bool func_127(int iParam0)
{
	return func_128(iParam0, 20);
}

bool func_128(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_129()
{
	return -1;
}

void func_130()
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

void func_131()
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

int func_132()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_133()
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

void func_134()
{
	if (func_16(14))
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
		Global_19681 = func_14();
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

void func_135()
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

bool func_136(int iParam0, int iParam1)
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

void func_137(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20459 = { *uParam0 };
	Global_6867 = iParam1;
	StringCopy(&Global_21075, sParam2, 24);
	Global_21994 = iParam5;
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

void func_138(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_139()
{
	if (unk_0x80FF6C016CDB0FAF(iLocal_33, 0))
	{
		if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_33, 0))
		{
			if (unk_0xD3DD4CF5121550D3(iLocal_33))
			{
				if (func_144("HELP_1"))
				{
					unk_0xD289B55B6AADBA10(1);
				}
				if (unk_0x8F678487EEBD8CE4(iLocal_49))
				{
					unk_0x93370FA10F15BE44(&iLocal_49);
				}
				if (unk_0x8F678487EEBD8CE4(iLocal_52))
				{
					if (iLocal_294 == 1)
					{
						if (unk_0x578C4EF320340AF7() < iLocal_85 + 7500)
						{
							unk_0xB80B2936A29B2666();
						}
					}
					unk_0x93370FA10F15BE44(&iLocal_52);
				}
				if (iLocal_28 == 4)
				{
					if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) == 0)
					{
						if (iLocal_346 == 0)
						{
							unk_0x296C8A46F264E8F7("FHPRB_COPS");
							unk_0x21723EF7B2FCC4CC("FHPRB_LOST");
							iLocal_346 = 1;
						}
						if (iLocal_269 == 1)
						{
							if (unk_0x578C4EF320340AF7() < iLocal_86 + 7500)
							{
								unk_0xB80B2936A29B2666();
							}
							iLocal_269 = 0;
						}
						if (iLocal_53 > 3)
						{
							if (!unk_0x8F678487EEBD8CE4(iLocal_50))
							{
								iLocal_50 = func_120(Local_92, 1);
							}
							if (iLocal_267 == 0)
							{
								if (!unk_0x2F80DB5A41D045E6())
								{
									func_143("GOD_2", 7500, 1);
									iLocal_267 = 1;
								}
							}
						}
					}
					else
					{
						if (unk_0x8F678487EEBD8CE4(iLocal_50))
						{
							unk_0x93370FA10F15BE44(&iLocal_50);
						}
						if (iLocal_269 == 0)
						{
							unk_0xB80B2936A29B2666();
							func_143("GOD_4", 7500, -1);
							unk_0x21723EF7B2FCC4CC("FHPRB_COPS");
							iLocal_86 = unk_0x578C4EF320340AF7();
							iLocal_269 = 1;
							iLocal_346 = 0;
						}
					}
				}
			}
			else
			{
				if (unk_0x8F678487EEBD8CE4(iLocal_49))
				{
					unk_0x93370FA10F15BE44(&iLocal_49);
				}
				if (unk_0x8F678487EEBD8CE4(iLocal_50))
				{
					unk_0x93370FA10F15BE44(&iLocal_50);
				}
				if (unk_0x80FF6C016CDB0FAF(iLocal_32, 0))
				{
					if (!unk_0x8F678487EEBD8CE4(iLocal_52))
					{
						iLocal_52 = func_141(iLocal_32, 0, 0);
						unk_0x3060C53EAE54BBE7(iLocal_52, true);
						if (unk_0x2F80DB5A41D045E6())
						{
							unk_0xB80B2936A29B2666();
						}
						if (iLocal_294 == 0)
						{
							func_143("GOD_6", 7500, -1);
							iLocal_85 = unk_0x578C4EF320340AF7();
							iLocal_294 = 1;
						}
						if (!func_144("HELP_1"))
						{
							func_140("HELP_1");
						}
					}
				}
			}
		}
		else
		{
			if (unk_0x8F678487EEBD8CE4(iLocal_52))
			{
				unk_0x93370FA10F15BE44(&iLocal_52);
			}
			if (unk_0x8F678487EEBD8CE4(iLocal_50))
			{
				unk_0x93370FA10F15BE44(&iLocal_50);
			}
			if (unk_0x80FF6C016CDB0FAF(iLocal_33, 0))
			{
				if (!unk_0x8F678487EEBD8CE4(iLocal_49))
				{
					iLocal_49 = func_141(iLocal_33, 0, 0);
					unk_0x3060C53EAE54BBE7(iLocal_49, true);
				}
			}
			if (iLocal_270 == 0)
			{
				unk_0xB80B2936A29B2666();
				func_143("GOD_5", 7500, -1);
				iLocal_270 = 1;
			}
		}
	}
}

void func_140(char* sParam0)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 1, true, -1);
}

int func_141(int iParam0, bool bParam1, bool bParam2)
{
	return func_142(iParam0, !bParam1, bParam2);
}

int func_142(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x2BE000892D65EA2A(iParam0);
	if (unk_0x20F7576FDB52E2B0(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_121(unk_0x25DDB354A40FFCDB(), 1f, 1f));
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
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_121(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
		unk_0x3060C53EAE54BBE7(iVar0, bParam1);
	}
	else if (unk_0x49116E591C7E1412(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_121(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_143(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	unk_0xAEFB51FB8888AE0F(sParam0);
	unk_0x823A1D66E6A4D141(iParam1, 1);
}

bool func_144(char* sParam0)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_145()
{
	if (iLocal_53 > 1)
	{
		func_139();
	}
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_35();
			iLocal_266 = 0;
		}
		iLocal_296 = 0;
		iLocal_297 = 0;
		iLocal_298 = 0;
		iLocal_299 = 0;
		iLocal_300 = 0;
		iLocal_301 = 0;
		iLocal_302 = 0;
		iLocal_303[0] = 0;
		iLocal_303[1] = 0;
		iLocal_304[0] = 0;
		iLocal_304[1] = 0;
		iLocal_305 = 0;
		iLocal_306 = 0;
		iLocal_307 = 0;
		iLocal_308 = 0;
		iLocal_309 = 0;
		iLocal_310 = 0;
		iLocal_311 = 0;
		iLocal_318 = 0;
		iLocal_319 = 0;
		iLocal_320 = 0;
		iLocal_321 = 0;
		iLocal_322 = 0;
		iLocal_323 = 0;
		iLocal_324 = 0;
		iLocal_325 = 0;
		iLocal_326 = 0;
		iLocal_327 = 0;
		iLocal_328[0] = 0;
		iLocal_328[1] = 0;
		iLocal_329[0] = 0;
		iLocal_329[1] = 0;
		iLocal_330[0] = 0;
		iLocal_330[1] = 0;
		iLocal_331[0] = 0;
		iLocal_331[1] = 0;
		iLocal_332[0] = 0;
		iLocal_332[1] = 0;
		iLocal_333[0] = 0;
		iLocal_333[1] = 0;
		iLocal_334[0] = 0;
		iLocal_334[1] = 0;
		iLocal_336 = 0;
		iLocal_339 = 0;
		iLocal_340[0] = 0;
		iLocal_341[0] = 0;
		iLocal_340[1] = 0;
		iLocal_341[1] = 0;
		iLocal_343 = 0;
		iLocal_344 = 0;
		iLocal_345 = 0;
		iLocal_359 = 0;
		iLocal_270 = 0;
		iLocal_271 = 0;
		iLocal_276 = 0;
		iLocal_286 = 0;
		iLocal_287 = 0;
		iLocal_288 = 0;
		iLocal_289 = 0;
		iLocal_290 = 0;
		iLocal_291 = 0;
		iLocal_292 = 0;
		iLocal_293 = 0;
		iLocal_294 = 0;
		iLocal_312 = 0;
		iLocal_342 = 0;
		iLocal_360 = 0;
		iLocal_362 = 0;
		iLocal_335 = 0;
		iLocal_85 = 0;
		iLocal_86 = 0;
		iLocal_54 = 0;
		while (iLocal_54 <= 6)
		{
			iLocal_268[iLocal_54] = 0;
			iLocal_282[iLocal_54] = 0;
			iLocal_284[iLocal_54] = 0;
			iLocal_285[iLocal_54] = 0;
			iLocal_283[iLocal_54] = 0;
			iLocal_54++;
		}
		unk_0x131ED02492676000("cellphone@str");
		unk_0x131ED02492676000("misscarsteal4@director_grip");
		if (unk_0x80FF6C016CDB0FAF(iLocal_33, 0))
		{
			if (!unk_0x8F678487EEBD8CE4(iLocal_49))
			{
				iLocal_49 = func_141(iLocal_33, 0, 0);
				unk_0x3060C53EAE54BBE7(iLocal_49, true);
			}
		}
		unk_0x53797676AD34A9AA(0);
		if (unk_0x03DB5C6AABF8DA46())
		{
			if (!func_31())
			{
				unk_0x9F7ADA6298BEF7E5(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true));
			}
			if (unk_0xAE06B9E39EBDE049(iLocal_34))
			{
				func_28(iLocal_34, -1, 1);
				unk_0xE730EAF558C97567(&iLocal_34);
			}
			else
			{
				func_28(0, -1, 1);
			}
		}
		if (!unk_0x87F0CB19476706C3())
		{
			unk_0xFD45D90342D2A0CD(800);
		}
		unk_0x21723EF7B2FCC4CC("FHPRB_START");
		unk_0x555EE41D7C7078E6(43.5f, -615.8f, 32.4f, 50f, 1, 0, 0, false);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		if (iLocal_342 == 0)
		{
			if (!unk_0x2F80DB5A41D045E6())
			{
				unk_0xBE1CA603598C1441(5f, 8f, 4);
				func_143("GOD_1", 7500, 1);
				iLocal_342 = 1;
			}
		}
		if (unk_0x80FF6C016CDB0FAF(iLocal_33, 0))
		{
			if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_33, 0))
			{
				unk_0x21723EF7B2FCC4CC("FHPRB_TRUCK");
				if (unk_0x8F678487EEBD8CE4(iLocal_49))
				{
					unk_0x93370FA10F15BE44(&iLocal_49);
				}
				func_146(656, 0);
				unk_0x34FEEAC2548C3789(1f);
				iLocal_53 = 2;
			}
		}
	}
	if (iLocal_53 == 2)
	{
		if (unk_0x80FF6C016CDB0FAF(iLocal_33, 0))
		{
			if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_33, 0))
			{
				if (unk_0xD3DD4CF5121550D3(iLocal_33))
				{
					if (func_144("HELP_1"))
					{
						unk_0xD289B55B6AADBA10(1);
					}
					if (unk_0x8F678487EEBD8CE4(iLocal_49))
					{
						unk_0x93370FA10F15BE44(&iLocal_49);
					}
					if (unk_0x8F678487EEBD8CE4(iLocal_52))
					{
						unk_0x93370FA10F15BE44(&iLocal_52);
					}
					if (unk_0x272784C60C397DB6(Local_93, Local_96, true) < 100f)
					{
						if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) == 0)
						{
							if (iLocal_271 == 1)
							{
								if (unk_0x578C4EF320340AF7() < iLocal_86 + 7500)
								{
									unk_0xB80B2936A29B2666();
									iLocal_271 = 0;
								}
							}
							if (iLocal_312 == 0)
							{
								unk_0xBE1CA603598C1441(5f, 8f, 4);
								func_143("GOD_7", 7500, -1);
								iLocal_312 = 1;
							}
						}
						else if (iLocal_271 == 0)
						{
							unk_0xBE1CA603598C1441(5f, 8f, 4);
							unk_0x2D806C94B9A84B20("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_86 = unk_0x578C4EF320340AF7();
							func_143("GOD_4", 7500, -1);
							iLocal_271 = 1;
						}
					}
					else if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) == 0)
					{
						iLocal_53 = 0;
						iLocal_28 = 4;
					}
				}
				else
				{
					if (unk_0x8F678487EEBD8CE4(iLocal_49))
					{
						unk_0x93370FA10F15BE44(&iLocal_49);
					}
					if (unk_0x80FF6C016CDB0FAF(iLocal_32, 0))
					{
						if (!unk_0x8F678487EEBD8CE4(iLocal_52))
						{
							iLocal_52 = func_141(iLocal_32, 0, 0);
							unk_0x3060C53EAE54BBE7(iLocal_52, true);
							if (unk_0x2F80DB5A41D045E6())
							{
								unk_0xB80B2936A29B2666();
							}
							if (iLocal_294 == 0)
							{
								func_143("GOD_6", 7500, -1);
								iLocal_294 = 1;
							}
							if (!func_144("HELP_1"))
							{
								func_140("HELP_1");
							}
						}
					}
				}
			}
			else
			{
				if (unk_0x8F678487EEBD8CE4(iLocal_52))
				{
					unk_0x93370FA10F15BE44(&iLocal_52);
				}
				if (unk_0x80FF6C016CDB0FAF(iLocal_33, 0))
				{
					if (!unk_0x8F678487EEBD8CE4(iLocal_49))
					{
						iLocal_49 = func_141(iLocal_33, 0, 0);
						unk_0x3060C53EAE54BBE7(iLocal_49, true);
					}
				}
				if (iLocal_270 == 0)
				{
					unk_0xB80B2936A29B2666();
					func_143("GOD_5", 7500, -1);
					iLocal_270 = 1;
				}
			}
		}
	}
}

void func_146(int iParam0, bool bParam1)
{
	int iVar0;
	
	Global_61727 = iParam0;
	if (!Global_61725)
	{
		Global_61725 = 1;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Global_73812)
		{
			if (Global_73813[iVar0 /*9*/] == iParam0)
			{
				Global_73813[iVar0 /*9*/].f_1 = 0;
			}
			iVar0++;
		}
	}
}

void func_147()
{
	if (iLocal_53 == 0)
	{
		if (iLocal_266 == 1)
		{
			func_35();
			iLocal_266 = 0;
		}
		func_170();
		func_108();
		if (!unk_0x87F0CB19476706C3())
		{
			unk_0x9F7ADA6298BEF7E5(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true));
			unk_0xFD45D90342D2A0CD(800);
		}
		if (unk_0xAE06B9E39EBDE049(Global_95452[3]))
		{
			if (unk_0x80FF6C016CDB0FAF(Global_95452[3], 0))
			{
				if (unk_0x442D6659150AF4B3(unk_0x36FE6D3220816ADA(Global_95452[3])))
				{
					unk_0x4F3C4F457D44BB0F(Global_95452[3], true, 1);
					func_149(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
				if (((unk_0xB86B8E85030B1552(unk_0x36FE6D3220816ADA(Global_95452[3])) || unk_0x97AFEF6099069369(unk_0x36FE6D3220816ADA(Global_95452[3]))) || unk_0x72B9CC2155AEDF58(unk_0x36FE6D3220816ADA(Global_95452[3]))) || unk_0x0CE6C9C2E6F95026(unk_0x36FE6D3220816ADA(Global_95452[3])))
				{
					unk_0x4F3C4F457D44BB0F(Global_95452[3], true, 1);
					func_149(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
		func_148(79);
		iLocal_295 = 1;
		iLocal_53 = 1;
	}
	if (iLocal_53 == 1)
	{
		iLocal_53 = 0;
		iLocal_28 = 3;
	}
}

void func_148(int iParam0)
{
	if (Global_95877 != -1)
	{
		if (iParam0 == Global_95877)
		{
			Global_95881 = 1;
			return;
		}
	}
}

void func_149(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	var uVar1;
	
	if (unk_0xAE06B9E39EBDE049(Global_102423.f_4))
	{
		if (unk_0x80FF6C016CDB0FAF(Global_102423.f_4, 0))
		{
			if (func_169(24) != Global_102423.f_4)
			{
				if (iParam2 == 1)
				{
					if (func_166(unk_0x3E4D3CCC220BDFB1(Global_102423.f_4, true), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				func_150(Global_102423.f_4, Param0, fParam1, 24, 0);
			}
		}
	}
}

void func_150(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)
{
	struct<60> Var0;
	
	if (unk_0xAE06B9E39EBDE049(iParam0) && unk_0x80FF6C016CDB0FAF(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (unk_0xAE06B9E39EBDE049(Global_75654.f_484[25]) && unk_0x80FF6C016CDB0FAF(Global_75654.f_484[25], 0))
			{
				if (Global_75654.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((unk_0x7A3E3E24F50F2AAB(iParam0) || unk_0x36FE6D3220816ADA(iParam0) == joaat("bus")) || unk_0x36FE6D3220816ADA(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_165(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_41(iParam0, &Var0);
		if (func_99(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { unk_0x3E4D3CCC220BDFB1(iParam0, true) };
			fParam2 = unk_0xEF7858F25585F853(iParam0);
		}
		if (iParam3 == 24)
		{
			if (unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) != joaat("vehicle_gen_controller"))
			{
				Global_76642 = unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253());
			}
		}
		func_163(iParam3, &Var0, Param1, fParam2, func_61(iParam0));
		func_151(iParam3, iParam0, 0);
	}
}

void func_151(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_71(&(Global_75654.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!unk_0xCE990E643CD9D0E5(Global_75654.f_555[0 /*21*/].f_9, 12) && !unk_0xCE990E643CD9D0E5(Global_75654.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_75654.f_555[0 /*21*/].f_4 != unk_0x36FE6D3220816ADA(iParam1))
		{
			return;
		}
	}
	if (Global_76561 != -1 && Global_76561 != iParam0)
	{
		return;
	}
	if (unk_0xAE06B9E39EBDE049(iParam1))
	{
		if (unk_0x80FF6C016CDB0FAF(iParam1, 0))
		{
			if (!unk_0x1758275D343D5BA3(iParam1))
			{
				unk_0x4F3C4F457D44BB0F(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_111858.f_32745.f_4801 = func_152();
			}
			if (iParam1 != Global_75654.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_169(iParam0);
					if ((unk_0xAE06B9E39EBDE049(iVar0) && unk_0x80FF6C016CDB0FAF(iVar0, 0)) && iParam1 != iVar0)
					{
						func_40(iVar0, 145);
					}
				}
				Global_76560 = iParam1;
				Global_76561 = iParam0;
				Global_76562 = iParam2;
			}
		}
	}
}

var func_152()
{
	var uVar0;
	
	func_162(&uVar0, unk_0x1D3A3697182AD8B3());
	func_161(&uVar0, unk_0x81F2E25F8C019191());
	func_160(&uVar0, unk_0x1F596C965B00E290());
	func_155(&uVar0, unk_0x371CFD525753F70C());
	func_154(&uVar0, unk_0xF225116F449A5CC6());
	func_153(&uVar0, unk_0x2E48CFA70ABFC06A());
	return uVar0;
}

void func_153(var uParam0, int iParam1)
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

void func_154(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_155(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_159(*uParam0);
	iVar1 = func_157(*uParam0);
	if (iParam1 < 1 || iParam1 > func_156(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

int func_156(int iParam0, int iParam1)
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

var func_157(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_158(unk_0xCE990E643CD9D0E5(iParam0, 31), -1, 1)) + 2011;
}

int func_158(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_159(var uParam0)
{
	return uParam0 & 15;
}

void func_160(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_161(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_162(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

void func_163(int iParam0, var uParam1, struct<3> Param2, float fParam3, int iParam4)
{
	if (func_71(&(Global_75654.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xCE990E643CD9D0E5(Global_75654.f_555[0 /*21*/].f_9, 10))
		{
			func_164(iParam0);
			func_68(uParam1, &(Global_111858.f_32745.f_69[Global_75654.f_555[0 /*21*/].f_14 /*78*/]));
			if (unk_0xCE990E643CD9D0E5(Global_75654.f_555[0 /*21*/].f_9, 11))
			{
				Global_111858.f_32745.f_1864[Global_75654.f_555[0 /*21*/].f_14 /*3*/] = { Param2 };
				Global_111858.f_32745.f_1934[Global_75654.f_555[0 /*21*/].f_14] = fParam3;
			}
			else
			{
				Global_111858.f_32745.f_1864[Global_75654.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_111858.f_32745.f_1934[Global_75654.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_111858.f_32745.f_1958[Global_75654.f_555[0 /*21*/].f_14] = iParam4 + 1;
			func_64(iParam0, 1);
		}
	}
}

void func_164(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_71(&(Global_75654.f_555[0 /*21*/]), iParam0))
	{
		if (unk_0xAE06B9E39EBDE049(Global_75654.f_139[iParam0]))
		{
			unk_0x4F3C4F457D44BB0F(Global_75654.f_139[iParam0], true, 1);
			unk_0xE730EAF558C97567(&(Global_75654.f_139[iParam0]));
			Global_75654.f_139[iParam0] = 0;
		}
		if (unk_0xCE990E643CD9D0E5(Global_75654.f_555[0 /*21*/].f_9, 13))
		{
			func_64(iParam0, 0);
		}
	}
}

void func_165(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_164(iParam0);
	func_64(iParam0, 0);
}

int func_166(struct<3> Param0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	
	iVar0 = func_167(Param0, iParam1, 1);
	switch (iVar0)
	{
		case 0:
			*uParam2 = { -827.351f, 157.785f, 68.2143f };
			*uParam3 = 85.1509f;
			return 1;
			break;
		
		case 1:
		case 2:
			*uParam2 = { 1992.523f, 3813.916f, 31.1008f };
			*uParam3 = 122.1498f;
			return 1;
			break;
		
		case 3:
			*uParam2 = { -1184.258f, -1496.556f, 3.3895f };
			*uParam3 = 303.2098f;
			return 1;
			break;
		
		case 4:
			*uParam2 = { 118.1067f, -1325.906f, 28.3706f };
			*uParam3 = 123.5016f;
			return 1;
			break;
		
		case 5:
			*uParam2 = { -18.118f, -1455.126f, 29.5004f };
			*uParam3 = 273.2822f;
			return 1;
			break;
		
		case 6:
			*uParam2 = { 1.5947f, 543.4017f, 173.4644f };
			*uParam3 = 310.7556f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

int func_167(struct<3> Param0, int iParam1, int iParam2)
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
		if (Global_93993[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_93993[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_168(iVar0) || iParam2 == 0)
				{
					fVar1 = unk_0x272784C60C397DB6(Param0, Global_93993[iVar0 /*10*/].f_3, true);
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

bool func_168(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_111858.f_7225[iParam0], 0);
}

int func_169(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_75654.f_139[iParam0];
}

void func_170()
{
	Global_93133 = 1;
}

void func_171()
{
	unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 1);
	unk_0x34FEEAC2548C3789(0.01f);
	iLocal_44 = unk_0xC08A186299DFDA0A(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, 0, 1, 1, 1);
	iLocal_45 = unk_0xC08A186299DFDA0A(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, 0, 1, 1, 1);
	iLocal_46 = unk_0xC08A186299DFDA0A(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, 0, 1, 1, 1);
	iLocal_47 = unk_0xC08A186299DFDA0A(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, 0, 1, 1, 1);
	iLocal_42 = unk_0xC08A186299DFDA0A(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, 0, 1, 1, 1);
	iLocal_43 = unk_0xC08A186299DFDA0A(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, 0, 1, 1, 1);
	if (func_30())
	{
		if (Global_93132 == 1)
		{
			func_173(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_360 = 1;
			iLocal_266 = 1;
			iLocal_53 = 0;
			iLocal_28 = 5;
		}
		else if (func_172() == 0)
		{
			if (func_107() && func_104(7f, 7f, 7f, 1))
			{
				func_173(818.8139f, -1610.406f, 30.7951f, 264.412f, 1, 0);
			}
			else
			{
				func_173(825.5603f, -1605.825f, 30.9548f, 312.5221f, 1, 0);
			}
			iLocal_266 = 1;
			iLocal_360 = 1;
			iLocal_53 = 0;
			iLocal_28 = 3;
		}
	}
	else if (func_208(0))
	{
		iLocal_266 = 1;
		iLocal_360 = 1;
		iLocal_53 = 0;
		iLocal_28 = 3;
	}
	else
	{
		iLocal_53 = 0;
		iLocal_28 = 2;
	}
}

int func_172()
{
	if (!Global_98955 == 10 && !Global_98955 == 9)
	{
		return 0;
	}
	return Global_98955.f_2;
}

void func_173(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	if (func_30())
	{
		unk_0x3A396632EB359434(0);
		unk_0xD2459066EA58CE43(&(Global_98955.f_20), 2);
		unk_0x73D73FA241EA4AB7(1);
		if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
		{
			unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
		}
		Global_98951 = { Param0 };
		Global_98954 = fParam1;
		Global_98950 = 1;
		if (iParam2 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_98955.f_20), 14);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(Global_98955.f_20), 14);
		}
		if (iParam3 == 1)
		{
			unk_0xBE20AB8238688965(&(Global_98955.f_20), 24);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(Global_98955.f_20), 24);
		}
		func_29(1);
	}
}

void func_174()
{
	if (!func_30())
	{
		iLocal_28 = 1;
	}
	else
	{
		iLocal_28 = 1;
	}
}

void func_175()
{
	if (!unk_0xAE06B9E39EBDE049(iLocal_40))
	{
		if (unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), 45f, -616.2f, 30.8f, true) < 150f)
		{
			unk_0x78FCB2E22C41B9D5(joaat("s_m_m_security_01"));
			if (unk_0x7D167B9A0CCDA347(joaat("s_m_m_security_01")))
			{
				iLocal_40 = unk_0xB3116B49FE00E2F1(26, joaat("s_m_m_security_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, 1, true);
				unk_0x694113444F21E39F(iLocal_40, 324, true);
			}
			unk_0x74528AC0906CBABE(joaat("s_m_m_security_01"));
		}
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_40))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_40))
		{
			if (unk_0xFDE4ABD9A796190D(65.2f, -617.2f, 30.8f, 5f, 0))
			{
				if (iLocal_337 == 0)
				{
					if (unk_0xA38BFCB05DBE439D(iLocal_40))
					{
						unk_0x9B94F6169B0DAEFD(iLocal_40);
					}
					else
					{
						unk_0x2BB0EF9DE445EA13(iLocal_40);
					}
					unk_0x1AC55EB440F64E41(iLocal_40, 65.2f, -617.2f, 31f, 2f, 0);
					unk_0xCBA6B2B569DCAFD8(iLocal_40, true);
					iLocal_89 = unk_0x578C4EF320340AF7();
					iLocal_337 = 1;
				}
				else if (unk_0x578C4EF320340AF7() > iLocal_89 + 5000)
				{
					if (!unk_0x72F0AF5428620E43(iLocal_40))
					{
						iLocal_337 = 0;
					}
				}
			}
			if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_40, 1) < 20f)
			{
				if (iLocal_316 == 0)
				{
					unk_0xA785552633ED203B(iLocal_40, unk_0x9B0761B4C3EB8BC7(), -1, 1072, 3);
					iLocal_316 = 1;
				}
			}
			else if (iLocal_316 == 1)
			{
				unk_0xA785552633ED203B(iLocal_40, unk_0x9B0761B4C3EB8BC7(), 1, 0, 2);
				iLocal_316 = 0;
			}
		}
	}
	if (unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), 45f, -616.2f, 30.8f, true) < 50f)
	{
		if (iLocal_338 == 0)
		{
			iLocal_90 = 498972213;
			iLocal_91 = -512924631;
			unk_0x6ADE529A7C2BA641(iLocal_90, joaat("prop_sec_barrier_ld_01a"), 61f, -633f, 32f, 1, 1, 0);
			unk_0x6ADE529A7C2BA641(iLocal_91, joaat("prop_sec_barrier_ld_01a"), 66f, -618f, 32f, 1, 1, 0);
			iLocal_338 = 1;
		}
		if (iLocal_338 == 1)
		{
			if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) == 0)
			{
				if (Local_93.x > 35f)
				{
					if (fLocal_97 < 1f)
					{
						fLocal_97 = (fLocal_97 + 0.02f);
					}
					else
					{
						fLocal_97 = 1f;
					}
					if (fLocal_97 <= 1f)
					{
						unk_0xCCD157619BAD6BE2(iLocal_90, fLocal_97, 0, 1);
						unk_0xCCD157619BAD6BE2(iLocal_91, fLocal_97, 0, 1);
						unk_0xDC5C33A98881772F(iLocal_90, 4, 0, 1);
						unk_0xDC5C33A98881772F(iLocal_91, 4, 0, 1);
						iLocal_317 = 0;
					}
				}
				if (Local_93.x < 35f)
				{
					if (fLocal_97 > 0f)
					{
						fLocal_97 = (fLocal_97 - 0.02f);
					}
					else
					{
						fLocal_97 = 0f;
					}
					if (fLocal_97 >= 0f)
					{
						unk_0xCCD157619BAD6BE2(iLocal_90, fLocal_97, 0, 1);
						unk_0xCCD157619BAD6BE2(iLocal_91, fLocal_97, 0, 1);
						unk_0xDC5C33A98881772F(iLocal_90, 4, 0, 1);
						unk_0xDC5C33A98881772F(iLocal_91, 4, 0, 1);
						iLocal_317 = 0;
					}
				}
			}
			else if (iLocal_317 == 0)
			{
				if (Local_93.x < 35f)
				{
					if (fLocal_97 > 0f)
					{
						fLocal_97 = (fLocal_97 - 0.02f);
					}
					else
					{
						fLocal_97 = 0f;
					}
					if (fLocal_97 >= 0f)
					{
						unk_0xCCD157619BAD6BE2(iLocal_90, fLocal_97, 0, 1);
						unk_0xCCD157619BAD6BE2(iLocal_91, fLocal_97, 0, 1);
						unk_0xDC5C33A98881772F(iLocal_90, 4, 0, 1);
						unk_0xDC5C33A98881772F(iLocal_91, 4, 0, 1);
						iLocal_317 = 1;
					}
				}
			}
		}
		if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 62.90151f, -638.6329f, 29.9188f, 70.78919f, -617.1338f, 36.91788f, 10.75f, 0, true, 0))
		{
			if (unk_0xAE06B9E39EBDE049(iLocal_40))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_40))
				{
					if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) == 0)
					{
						if (iLocal_314 == 0)
						{
							if (iLocal_313 == 0)
							{
								func_138(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
								if (func_176(&uLocal_99, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
								{
									iLocal_313 = 1;
								}
							}
						}
						else if (iLocal_315 == 0)
						{
							func_138(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
							if (func_176(&uLocal_99, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
							{
								iLocal_315 = 1;
							}
						}
					}
					else if (iLocal_314 == 0)
					{
						func_138(&uLocal_99, 4, iLocal_40, "FHPBSecGuard", 0, 1);
						if (func_176(&uLocal_99, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
						{
							iLocal_314 = 1;
						}
					}
				}
			}
		}
	}
}

bool func_176(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_137(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_124(sParam2, iParam3, 0);
}

float func_177(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, true) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, false) };
	}
	if (!unk_0xA59F96B50B97E63C(iParam1, 0))
	{
		Var1 = { unk_0x3E4D3CCC220BDFB1(iParam1, true) };
	}
	else
	{
		Var1 = { unk_0x3E4D3CCC220BDFB1(iParam1, false) };
	}
	return unk_0x272784C60C397DB6(Var0, Var1, bParam2);
}

void func_178()
{
	int iVar0;
	
	if (!unk_0x2F80DB5A41D045E6())
	{
		if (!func_182() || !unk_0x67F1A5C89249817A())
		{
			if (iLocal_28 == 3)
			{
				if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) && iLocal_31 == 0)
				{
					if (func_14() == 0)
					{
						if (iLocal_29 == 1)
						{
							if (iLocal_291 == 0)
							{
								if (func_180() && func_179())
								{
									if (func_176(&uLocal_99, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_88 = unk_0x578C4EF320340AF7();
										iLocal_291 = 1;
									}
								}
							}
						}
						if (iLocal_29 == 1)
						{
							if (iLocal_291 == 1 && unk_0x578C4EF320340AF7() > iLocal_88 + 7000)
							{
								if (func_180() && func_179())
								{
									if (func_176(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
									{
										iLocal_88 = unk_0x578C4EF320340AF7();
									}
								}
							}
						}
					}
					if (iLocal_29 == 2)
					{
						if (iLocal_325 == 0)
						{
							if (func_180())
							{
								if (func_176(&uLocal_99, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_79 = unk_0x578C4EF320340AF7();
									iLocal_325 = 1;
								}
							}
						}
					}
				}
				else if (iLocal_31 == 2 && iLocal_29 == 1)
				{
					if (iLocal_336 == 0)
					{
						if (func_180() && func_179())
						{
							if (func_176(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_84 = unk_0x578C4EF320340AF7();
								iLocal_336 = 1;
							}
						}
					}
					else if (unk_0x578C4EF320340AF7() > iLocal_84 + 8000)
					{
						if (func_180() && func_179())
						{
							if (func_176(&uLocal_99, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_84 = unk_0x578C4EF320340AF7();
							}
						}
					}
				}
				if (iLocal_29 == 4)
				{
					if (iLocal_290 == 0)
					{
						func_114();
						if (func_180())
						{
							unk_0x1386E5E658CE3032(unk_0x9B0761B4C3EB8BC7(), &iVar0, 1);
							if (iVar0 != joaat("weapon_unarmed") && iVar0 != 0)
							{
								if (func_176(&uLocal_99, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_61 = unk_0x578C4EF320340AF7();
									iLocal_286 = 1;
									iLocal_290 = 1;
								}
							}
							else
							{
								iLocal_61 = unk_0x578C4EF320340AF7();
								iLocal_286 = 1;
								iLocal_290 = 1;
							}
						}
					}
					if (iLocal_290 == 1)
					{
						if (iLocal_286 == 0)
						{
							iLocal_61 = unk_0x578C4EF320340AF7();
							iLocal_286 = 1;
						}
						if (iLocal_286 == 1)
						{
							if (unk_0x578C4EF320340AF7() > iLocal_61 + 9000)
							{
								if (func_180())
								{
									if (func_176(&uLocal_99, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
									{
										iLocal_286 = 0;
									}
								}
							}
						}
					}
				}
				if (iLocal_29 == 3)
				{
					if (iLocal_322 == 1)
					{
						if (iLocal_288 == 0)
						{
							if (iLocal_289 == 1)
							{
								if (func_180())
								{
									if (func_176(&uLocal_99, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
									{
										iLocal_288 = 1;
									}
								}
							}
						}
					}
					if (iLocal_287 == 0)
					{
						if (unk_0xAE06B9E39EBDE049(iLocal_33))
						{
							if (unk_0x80FF6C016CDB0FAF(iLocal_33, 0))
							{
								if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_33, 0))
								{
									if (func_180())
									{
										if (func_176(&uLocal_99, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_62 = unk_0x578C4EF320340AF7();
											iLocal_288 = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0x578C4EF320340AF7() > iLocal_62 + 10000)
					{
						if (unk_0xAE06B9E39EBDE049(iLocal_33))
						{
							if (unk_0x80FF6C016CDB0FAF(iLocal_33, 0))
							{
								if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_33, 0))
								{
									if (func_180())
									{
										if (func_176(&uLocal_99, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_62 = unk_0x578C4EF320340AF7();
										}
									}
								}
							}
						}
					}
					if (iLocal_323 == 1)
					{
						if (iLocal_324 == 0)
						{
							if (func_180())
							{
								if (func_176(&uLocal_99, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_324 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
}

int func_179()
{
	if (func_14() == 0)
	{
		func_138(&uLocal_99, 0, unk_0x9B0761B4C3EB8BC7(), "MICHAEL", 0, 1);
		return 1;
	}
	if (func_14() == 1)
	{
		func_138(&uLocal_99, 1, unk_0x9B0761B4C3EB8BC7(), "FRANKLIN", 0, 1);
		return 1;
	}
	if (func_14() == 2)
	{
		func_138(&uLocal_99, 2, unk_0x9B0761B4C3EB8BC7(), "TREVOR", 0, 1);
		return 1;
	}
	return 0;
}

int func_180()
{
	int iVar0;
	
	iLocal_57 = 0;
	while (iLocal_57 <= 6)
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_35[iLocal_57]))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_35[iLocal_57]))
			{
				iVar0 = func_181(unk_0x9B0761B4C3EB8BC7(), iLocal_264, 0, 0, -1);
				if (unk_0xAE06B9E39EBDE049(iVar0))
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iVar0))
					{
					}
				}
				if (iVar0 == iLocal_35[iLocal_57] && func_177(unk_0x9B0761B4C3EB8BC7(), iVar0, 1) < 15f)
				{
					func_138(&uLocal_99, 5, iLocal_35[iLocal_57], "CONSTRUCTION3", 0, 1);
					return 1;
				}
			}
		}
		iLocal_57++;
	}
	return 0;
}

int func_181(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0[16];
	int iVar1;
	
	iVar1 = 0;
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		unk_0x3214CDFE45D11916(iParam0, &iVar0, iParam4);
		iVar1 = 0;
		while (iVar1 <= (iVar0 - 1))
		{
			if (unk_0xAE06B9E39EBDE049(iVar0[iVar1]))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iVar0[iVar1]))
				{
					if (unk_0x86FB3A0D4870FE62(iVar0[iVar1]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (unk_0xA38BFCB05DBE439D(iVar0[iVar1]))
								{
									return iVar0[iVar1];
								}
							}
							else
							{
								return iVar0[iVar1];
							}
						}
						else if (iVar1 + iParam2) <= (iVar0 - 1)
						{
							if (unk_0xAE06B9E39EBDE049(iVar0[(iVar1 + iParam2)]))
							{
								if (!unk_0x5AEB5DDFFAD43CA5(iVar0[(iVar1 + iParam2)]))
								{
									if (unk_0x86FB3A0D4870FE62(iVar0[(iVar1 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (unk_0xA38BFCB05DBE439D(iVar0[(iVar1 + iParam2)]))
											{
												return iVar0[(iVar1 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar1 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_182()
{
	if (Global_21005 != 0 || unk_0x6A5CC4A2C9D9ED8D())
	{
		return 1;
	}
	return 0;
}

void func_183()
{
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0xEBFC112B3EEB18E5(unk_0x9B0761B4C3EB8BC7()) && unk_0x7922FF28ED63354A(unk_0x9B0761B4C3EB8BC7()))
		{
			unk_0x34FEEAC2548C3789(0f);
		}
		else
		{
			unk_0x34FEEAC2548C3789(1f);
		}
	}
	func_190();
	if (iLocal_303[0])
	{
		if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 1) < 20f && unk_0xD5E14AF69C7C4DA9(iLocal_36[0], unk_0x9B0761B4C3EB8BC7()))
		{
			if (iLocal_328[0] == 0)
			{
				unk_0xA785552633ED203B(iLocal_36[0], unk_0x9B0761B4C3EB8BC7(), -1, 1072, 3);
				iLocal_328[0] = 1;
			}
			if (iLocal_328[0] == 1)
			{
				if (unk_0x16BC17A8EDC701A2(iLocal_36[0], 150319005) != 0 || unk_0x16BC17A8EDC701A2(iLocal_36[0], 150319005) != 1)
				{
					iLocal_328[0] = 0;
				}
			}
		}
		else if (iLocal_328[0] == 1)
		{
			unk_0xA785552633ED203B(iLocal_36[0], unk_0x9B0761B4C3EB8BC7(), 1, 0, 2);
			iLocal_328[0] = 0;
		}
	}
	if (iLocal_303[1])
	{
		if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 1) < 20f && unk_0xD5E14AF69C7C4DA9(iLocal_36[1], unk_0x9B0761B4C3EB8BC7()))
		{
			if (iLocal_328[1] == 0)
			{
				unk_0xA785552633ED203B(iLocal_36[1], unk_0x9B0761B4C3EB8BC7(), -1, 1072, 3);
				iLocal_328[1] = 1;
			}
			if (iLocal_328[1] == 1)
			{
				if (unk_0x16BC17A8EDC701A2(iLocal_36[1], 150319005) != 0 || unk_0x16BC17A8EDC701A2(iLocal_36[1], 150319005) != 1)
				{
					iLocal_328[1] = 0;
				}
			}
		}
		else if (iLocal_328[1] == 1)
		{
			unk_0xA785552633ED203B(iLocal_36[1], unk_0x9B0761B4C3EB8BC7(), 1, 0, 2);
			iLocal_328[1] = 0;
		}
	}
	if (iLocal_303[0] && iLocal_303[1])
	{
		if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 1) < func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 1))
		{
			iLocal_298 = 1;
			iLocal_299 = 0;
		}
		else
		{
			iLocal_298 = 0;
			iLocal_299 = 1;
		}
	}
	else
	{
		if (iLocal_303[0] && !iLocal_303[1])
		{
			iLocal_298 = 1;
			iLocal_299 = 0;
		}
		if (iLocal_303[1] && !iLocal_303[0])
		{
			iLocal_298 = 0;
			iLocal_299 = 1;
		}
	}
	switch (iLocal_31)
	{
		case 0:
			if (unk_0xC21859D80F5EE520("SCRAP_SECURITY"))
			{
				if (!unk_0xDA606CB5AFEE806C("SCRAP_SECURITY"))
				{
					unk_0x5291BAF5B96E07D9("SCRAP_SECURITY", true);
				}
				if (unk_0xDA606CB5AFEE806C("SCRAP_SECURITY"))
				{
					if (unk_0xAE06B9E39EBDE049(iLocal_36[0]))
					{
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[0]))
						{
							if (!unk_0xD2E9CCDC3186A6E0(iLocal_36[0]))
							{
								if (unk_0xFDE4ABD9A796190D(863.1551f, -1564.572f, 29.3231f, 5f, 1))
								{
									iLocal_83[0] = unk_0x578C4EF320340AF7();
									if (!unk_0x71F7FCEF2AC163AF(iLocal_36[0]))
									{
										if (iLocal_341[0] == 0)
										{
											unk_0xA9F85E798FF1068D(iLocal_36[0], 863.1551f, -1564.572f, 29.3231f, 5f, 0);
											iLocal_340[0] = 0;
											iLocal_341[0] = 1;
										}
									}
								}
								else if (unk_0x578C4EF320340AF7() > iLocal_83[0] + 2000)
								{
									if (unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(iLocal_36[0], true), 863.1551f, -1564.572f, 29.3231f, true) > 3f)
									{
										if (iLocal_340[0] == 0)
										{
											unk_0x3C1B180EE30D36EF(iLocal_36[0], 863.1551f, -1564.572f, 29.3231f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_341[0] = 0;
											iLocal_340[0] = 1;
										}
									}
								}
							}
						}
					}
					if (unk_0xAE06B9E39EBDE049(iLocal_36[1]))
					{
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[1]))
						{
							if (!unk_0xD2E9CCDC3186A6E0(iLocal_36[1]))
							{
								if (unk_0xFDE4ABD9A796190D(940.2881f, -1573.877f, 29.3866f, 5f, 1))
								{
									iLocal_83[1] = unk_0x578C4EF320340AF7();
									if (!unk_0x71F7FCEF2AC163AF(iLocal_36[1]))
									{
										if (iLocal_341[1] == 0)
										{
											unk_0xA9F85E798FF1068D(iLocal_36[1], 940.2881f, -1573.877f, 29.3866f, 5f, 0);
											iLocal_340[1] = 0;
											iLocal_341[1] = 1;
										}
									}
								}
								else if (unk_0x578C4EF320340AF7() > iLocal_83[1] + 2000)
								{
									if (unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(iLocal_36[1], true), 940.2881f, -1573.877f, 29.3866f, true) > 3f)
									{
										if (iLocal_340[1] == 0)
										{
											unk_0x3C1B180EE30D36EF(iLocal_36[1], 940.2881f, -1573.877f, 29.3866f, 1f, -1, 1048576000, 0, 1193033728);
											iLocal_341[1] = 0;
											iLocal_340[1] = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (unk_0xAE06B9E39EBDE049(iLocal_36[0]))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[0]))
				{
					if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 1) < 20f)
					{
						if ((func_189(unk_0x9B0761B4C3EB8BC7()) == joaat("weapon_unarmed") || unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0)) || func_188(0))
						{
							if (unk_0x04055E36623F131B(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 100f) || unk_0xD5E14AF69C7C4DA9(iLocal_36[0], unk_0x9B0761B4C3EB8BC7()))
							{
								if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, true, 0) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, true, 0))
								{
									if (iLocal_334[0] == 0)
									{
										if (!unk_0x04055E36623F131B(iLocal_36[0], unk_0x9B0761B4C3EB8BC7(), 45f))
										{
											if (!unk_0xA38BFCB05DBE439D(iLocal_36[0]))
											{
												unk_0x2BB0EF9DE445EA13(iLocal_36[0]);
											}
											else
											{
												unk_0x9B94F6169B0DAEFD(iLocal_36[0]);
											}
											unk_0xD08E9EAF091A1AAB(iLocal_36[0], unk_0x9B0761B4C3EB8BC7(), 5000);
											iLocal_82[0] = unk_0x578C4EF320340AF7();
											func_187(iLocal_36[0]);
											iLocal_334[0] = 1;
										}
									}
									if (iLocal_334[0] == 1)
									{
										if (unk_0x578C4EF320340AF7() > iLocal_82[0] + 5000)
										{
											iLocal_334[0] = 0;
										}
									}
									if (iLocal_304[0] == 0 && iLocal_304[1] == 0)
									{
										if (iLocal_302 == 0)
										{
											func_185(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
											iLocal_66 = unk_0x578C4EF320340AF7();
											iLocal_302 = 1;
										}
										else if (unk_0x578C4EF320340AF7() > iLocal_66 + 15000)
										{
											func_185(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
											iLocal_66 = unk_0x578C4EF320340AF7();
										}
									}
									else
									{
										if (iLocal_304[0] == 1)
										{
											if (iLocal_305 == 0)
											{
												func_185(iLocal_36[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_72 = unk_0x578C4EF320340AF7();
												iLocal_305 = 1;
											}
											else if (unk_0x578C4EF320340AF7() > iLocal_72 + 15000)
											{
												func_185(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_72 = unk_0x578C4EF320340AF7();
											}
										}
										if (iLocal_304[1] == 1)
										{
											if (iLocal_306 == 0)
											{
												func_185(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_73 = unk_0x578C4EF320340AF7();
												iLocal_306 = 1;
											}
											else if (unk_0x578C4EF320340AF7() > iLocal_73 + 15000)
											{
												func_185(iLocal_36[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_73 = unk_0x578C4EF320340AF7();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (unk_0xAE06B9E39EBDE049(iLocal_36[1]))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[1]))
				{
					if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 1) < 15f)
					{
						if ((func_189(unk_0x9B0761B4C3EB8BC7()) == joaat("weapon_unarmed") || unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0)) || func_188(0))
						{
							if (unk_0x04055E36623F131B(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 100f))
							{
								if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, true, 0))
								{
									if (iLocal_334[1] == 0)
									{
										if (!unk_0x04055E36623F131B(iLocal_36[1], unk_0x9B0761B4C3EB8BC7(), 45f))
										{
											if (!unk_0xA38BFCB05DBE439D(iLocal_36[1]))
											{
												unk_0x2BB0EF9DE445EA13(iLocal_36[1]);
											}
											else
											{
												unk_0x9B94F6169B0DAEFD(iLocal_36[1]);
											}
											unk_0xD08E9EAF091A1AAB(iLocal_36[1], unk_0x9B0761B4C3EB8BC7(), 5000);
											iLocal_82[1] = unk_0x578C4EF320340AF7();
											func_187(iLocal_36[1]);
											iLocal_334[1] = 1;
										}
									}
									if (iLocal_334[1] == 1)
									{
										if (unk_0x578C4EF320340AF7() > iLocal_82[1] + 5000)
										{
											iLocal_334[1] = 0;
										}
									}
									if (iLocal_304[0] == 0 && iLocal_304[1] == 0)
									{
										if (iLocal_302 == 0)
										{
											func_185(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
											iLocal_66 = unk_0x578C4EF320340AF7();
											iLocal_302 = 1;
										}
										else if (unk_0x578C4EF320340AF7() > iLocal_66 + 15000)
										{
											func_185(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
											iLocal_66 = unk_0x578C4EF320340AF7();
										}
									}
									else
									{
										if (iLocal_304[1] == 1)
										{
											if (iLocal_305 == 0)
											{
												func_185(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_72 = unk_0x578C4EF320340AF7();
												iLocal_305 = 1;
											}
											else if (unk_0x578C4EF320340AF7() > iLocal_72 + 15000)
											{
												func_185(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_72 = unk_0x578C4EF320340AF7();
											}
										}
										if (iLocal_304[0] == 1)
										{
											if (iLocal_306 == 0)
											{
												func_185(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_73 = unk_0x578C4EF320340AF7();
												iLocal_306 = 1;
											}
											else if (unk_0x578C4EF320340AF7() > iLocal_73 + 15000)
											{
												func_185(iLocal_36[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_73 = unk_0x578C4EF320340AF7();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (func_184() || iLocal_297 == 1)
			{
				if (unk_0xAE06B9E39EBDE049(iLocal_36[0]))
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[0]))
					{
						if (unk_0xD5E14AF69C7C4DA9(iLocal_36[0], unk_0x9B0761B4C3EB8BC7()))
						{
							iLocal_81[0] = unk_0x578C4EF320340AF7();
							iLocal_332[0] = 1;
							if (iLocal_331[0] == 0)
							{
								if (unk_0xA38BFCB05DBE439D(iLocal_36[0]))
								{
									unk_0x9B94F6169B0DAEFD(iLocal_36[0]);
								}
								else
								{
									unk_0x2BB0EF9DE445EA13(iLocal_36[0]);
								}
								unk_0x6673CC701BC8E9C1(iLocal_36[0], 50, true);
								unk_0x8FF9CE1C0F94F59A(iLocal_36[0], unk_0x9B0761B4C3EB8BC7(), 0, 16);
								func_187(iLocal_36[0]);
								iLocal_331[0] = 1;
							}
						}
						else if (iLocal_333[0] == 0)
						{
							if (iLocal_332[0] == 0)
							{
								if (unk_0xA38BFCB05DBE439D(iLocal_36[0]))
								{
									unk_0x9B94F6169B0DAEFD(iLocal_36[0]);
								}
								else
								{
									unk_0x2BB0EF9DE445EA13(iLocal_36[0]);
								}
								unk_0x3C1B180EE30D36EF(iLocal_36[0], unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), 3f, -1, 1048576000, 0, 1193033728);
								func_187(iLocal_36[0]);
								iLocal_333[0] = 1;
							}
							if (iLocal_332[0] == 1)
							{
								if (unk_0x578C4EF320340AF7() > iLocal_81[0] + 500)
								{
									if (unk_0xA38BFCB05DBE439D(iLocal_36[0]))
									{
										unk_0x9B94F6169B0DAEFD(iLocal_36[0]);
									}
									else
									{
										unk_0x2BB0EF9DE445EA13(iLocal_36[0]);
									}
									unk_0x3C1B180EE30D36EF(iLocal_36[0], unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), 3f, -1, 1048576000, 0, 1193033728);
									func_187(iLocal_36[0]);
									iLocal_333[0] = 1;
								}
							}
						}
					}
				}
				if (unk_0xAE06B9E39EBDE049(iLocal_36[1]))
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[1]))
					{
						if (unk_0xD5E14AF69C7C4DA9(iLocal_36[1], unk_0x9B0761B4C3EB8BC7()))
						{
							iLocal_81[1] = unk_0x578C4EF320340AF7();
							iLocal_332[1] = 1;
							if (iLocal_331[1] == 0)
							{
								if (unk_0xA38BFCB05DBE439D(iLocal_36[1]))
								{
									unk_0x9B94F6169B0DAEFD(iLocal_36[1]);
								}
								else
								{
									unk_0x2BB0EF9DE445EA13(iLocal_36[1]);
								}
								unk_0x6673CC701BC8E9C1(iLocal_36[1], 50, true);
								unk_0x8FF9CE1C0F94F59A(iLocal_36[1], unk_0x9B0761B4C3EB8BC7(), 0, 16);
								func_187(iLocal_36[1]);
								iLocal_331[1] = 1;
							}
						}
						else if (iLocal_333[1] == 0)
						{
							if (iLocal_332[1] == 0)
							{
								if (unk_0xA38BFCB05DBE439D(iLocal_36[1]))
								{
									unk_0x9B94F6169B0DAEFD(iLocal_36[1]);
								}
								else
								{
									unk_0x2BB0EF9DE445EA13(iLocal_36[1]);
								}
								unk_0x3C1B180EE30D36EF(iLocal_36[1], unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), 3f, -1, 1048576000, 0, 1193033728);
								func_187(iLocal_36[1]);
								iLocal_333[1] = 1;
							}
							if (iLocal_332[1] == 1)
							{
								if (unk_0x578C4EF320340AF7() > iLocal_81[1] + 500)
								{
									if (unk_0xA38BFCB05DBE439D(iLocal_36[1]))
									{
										unk_0x9B94F6169B0DAEFD(iLocal_36[1]);
									}
									else
									{
										unk_0x2BB0EF9DE445EA13(iLocal_36[1]);
									}
									unk_0x3C1B180EE30D36EF(iLocal_36[1], unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), 3f, -1, 1048576000, 0, 1193033728);
									func_187(iLocal_36[1]);
									iLocal_333[1] = 1;
								}
							}
						}
					}
				}
				if (func_184())
				{
					if (iLocal_307 == 0)
					{
						if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) < 2)
						{
							unk_0x53797676AD34A9AA(5);
							unk_0x34FEEAC2548C3789(1f);
							unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 2, 0);
							unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
							iLocal_307 = 1;
						}
					}
					if (iLocal_298 == 1)
					{
						if (iLocal_300 == 0)
						{
							if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 1) < 20f)
							{
								if (!unk_0x6F683C1C0BB1BA8D(iLocal_36[0]))
								{
									func_185(iLocal_36[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
									iLocal_71 = unk_0x578C4EF320340AF7();
									iLocal_300 = 1;
								}
							}
						}
						else if (unk_0x578C4EF320340AF7() > iLocal_71 + 7000)
						{
							if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 1) < 20f)
							{
								if (!unk_0x6F683C1C0BB1BA8D(iLocal_36[0]))
								{
									func_185(iLocal_36[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
									iLocal_71 = unk_0x578C4EF320340AF7();
								}
							}
						}
					}
					if (iLocal_299 == 1)
					{
						if (iLocal_300 == 0)
						{
							if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 1) < 20f)
							{
								if (!unk_0x6F683C1C0BB1BA8D(iLocal_36[1]))
								{
									func_185(iLocal_36[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_71 = unk_0x578C4EF320340AF7();
									iLocal_300 = 1;
								}
							}
						}
						else if (unk_0x578C4EF320340AF7() > iLocal_71 + 7000)
						{
							if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 1) < 20f)
							{
								if (!unk_0x6F683C1C0BB1BA8D(iLocal_36[1]))
								{
									func_185(iLocal_36[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_71 = unk_0x578C4EF320340AF7();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_339 == 0)
					{
						iLocal_41 = func_181(unk_0x9B0761B4C3EB8BC7(), joaat("COP"), 0, 0, 28);
						if (iLocal_41 != 0)
						{
							if (unk_0xAE06B9E39EBDE049(iLocal_41))
							{
								if (!unk_0x5AEB5DDFFAD43CA5(iLocal_41))
								{
									if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_41, 1) < 35f)
									{
										iLocal_339 = 1;
									}
								}
							}
						}
					}
					if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0 && iLocal_339 == 0)
					{
						if (iLocal_298 == 1)
						{
							if (iLocal_301 == 0)
							{
								if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 1) < 20f)
								{
									if (!unk_0x6F683C1C0BB1BA8D(iLocal_36[0]))
									{
										func_185(iLocal_36[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_70 = unk_0x578C4EF320340AF7();
										iLocal_301 = 1;
									}
								}
							}
							else if (unk_0x578C4EF320340AF7() > iLocal_70 + 7000)
							{
								if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 1) < 20f)
								{
									if (!unk_0x6F683C1C0BB1BA8D(iLocal_36[0]))
									{
										func_185(iLocal_36[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_70 = unk_0x578C4EF320340AF7();
									}
								}
							}
						}
						if (iLocal_299 == 1)
						{
							if (iLocal_301 == 0)
							{
								if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 1) < 20f)
								{
									if (!unk_0x6F683C1C0BB1BA8D(iLocal_36[1]))
									{
										func_185(iLocal_36[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_70 = unk_0x578C4EF320340AF7();
										iLocal_301 = 1;
									}
								}
							}
							else if (unk_0x578C4EF320340AF7() > iLocal_70 + 7000)
							{
								if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 1) < 20f)
								{
									if (!unk_0x6F683C1C0BB1BA8D(iLocal_36[1]))
									{
										func_185(iLocal_36[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_70 = unk_0x578C4EF320340AF7();
									}
								}
							}
						}
					}
				}
			}
			if (!func_184())
			{
				if (iLocal_309 == 0)
				{
					if (unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), 893.2f, -1556.5f, 30f, true) < 18f)
					{
						if (unk_0xAE06B9E39EBDE049(iLocal_36[0]))
						{
							if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[0]))
							{
								if (unk_0xD5E14AF69C7C4DA9(iLocal_36[0], unk_0x9B0761B4C3EB8BC7()))
								{
									iLocal_65 = unk_0x578C4EF320340AF7();
									iLocal_309 = 1;
								}
							}
						}
						if (unk_0xAE06B9E39EBDE049(iLocal_36[1]))
						{
							if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[1]))
							{
								if (unk_0xD5E14AF69C7C4DA9(iLocal_36[1], unk_0x9B0761B4C3EB8BC7()))
								{
									iLocal_65 = unk_0x578C4EF320340AF7();
									iLocal_309 = 1;
								}
							}
						}
					}
				}
				if (iLocal_297 == 0)
				{
					if (unk_0xAE06B9E39EBDE049(iLocal_36[0]))
					{
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[0]))
						{
							if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 1) > 4f)
							{
								if (unk_0xD5E14AF69C7C4DA9(iLocal_36[0], unk_0x9B0761B4C3EB8BC7()))
								{
									if (iLocal_329[0] == 0)
									{
										if (unk_0xA38BFCB05DBE439D(iLocal_36[0]))
										{
											unk_0x9B94F6169B0DAEFD(iLocal_36[0]);
										}
										else
										{
											unk_0x2BB0EF9DE445EA13(iLocal_36[0]);
										}
										unk_0xE021DCE1063D5DC2(iLocal_36[0], unk_0x9B0761B4C3EB8BC7(), -1, 0.5f, 2f, 1073741824, 0);
										func_187(iLocal_36[0]);
										iLocal_329[0] = 1;
									}
									iLocal_80[0] = unk_0x578C4EF320340AF7();
								}
								else if (unk_0x578C4EF320340AF7() > iLocal_80[0] + 500)
								{
									if (iLocal_330[0] == 0)
									{
										if (unk_0xA38BFCB05DBE439D(iLocal_36[0]))
										{
											unk_0x9B94F6169B0DAEFD(iLocal_36[0]);
										}
										else
										{
											unk_0x2BB0EF9DE445EA13(iLocal_36[0]);
										}
										unk_0x3C1B180EE30D36EF(iLocal_36[0], unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), 2f, -1, 1048576000, 0, 1193033728);
										func_187(iLocal_36[0]);
										iLocal_330[0] = 1;
									}
								}
							}
							else if (iLocal_361[0] == 0)
							{
								if (unk_0xA38BFCB05DBE439D(iLocal_36[0]))
								{
									unk_0x9B94F6169B0DAEFD(iLocal_36[0]);
								}
								else
								{
									unk_0x2BB0EF9DE445EA13(iLocal_36[0]);
								}
								unk_0x9DC06E2A59C5AEBB(&uLocal_48);
								unk_0xD08E9EAF091A1AAB(0, unk_0x9B0761B4C3EB8BC7(), 0);
								unk_0xC1C7DE768F7675E5(0, 2000);
								unk_0x62726974410B1305(uLocal_48, 1);
								unk_0x19F29730874AD6F1(uLocal_48);
								unk_0x9B6EC2CECE1010EF(iLocal_36[0], uLocal_48);
								unk_0x4F83FEE4454169D4(&uLocal_48);
								func_187(iLocal_36[0]);
								iLocal_361[0] = 1;
							}
							if (iLocal_335 == 0)
							{
								if (iLocal_326 == 0 || iLocal_302 == 1)
								{
									if (iLocal_296 == 0)
									{
										if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 1) < 10f)
										{
											if (!unk_0x6F683C1C0BB1BA8D(iLocal_36[0]))
											{
												func_185(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
												iLocal_67 = unk_0x578C4EF320340AF7();
												iLocal_68 = unk_0x578C4EF320340AF7();
												iLocal_65 = unk_0x578C4EF320340AF7();
												iLocal_309 = 1;
												iLocal_296 = 1;
												iLocal_304[0] = 1;
											}
										}
									}
									else if (unk_0x578C4EF320340AF7() > iLocal_67 + 7000)
									{
										if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 1) < 10f)
										{
											if (!unk_0x6F683C1C0BB1BA8D(iLocal_36[0]))
											{
												func_185(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
												iLocal_67 = unk_0x578C4EF320340AF7();
											}
										}
									}
								}
								else if (iLocal_302 == 0)
								{
									if (iLocal_327 == 0)
									{
										if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 1) < 10f)
										{
											if (!unk_0x6F683C1C0BB1BA8D(iLocal_36[0]))
											{
												func_185(iLocal_36[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
												iLocal_296 = 1;
												iLocal_327 = 1;
											}
										}
									}
								}
							}
							else if (unk_0x578C4EF320340AF7() > iLocal_68 + 7000)
							{
								if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 1) < 15f)
								{
									if (!unk_0x6F683C1C0BB1BA8D(iLocal_36[0]))
									{
										func_185(iLocal_36[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
										iLocal_68 = unk_0x578C4EF320340AF7();
									}
								}
							}
						}
					}
					if (unk_0xAE06B9E39EBDE049(iLocal_36[1]))
					{
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[1]))
						{
							if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 1) > 4f)
							{
								if (unk_0xD5E14AF69C7C4DA9(iLocal_36[1], unk_0x9B0761B4C3EB8BC7()))
								{
									if (iLocal_329[1] == 0)
									{
										if (unk_0xA38BFCB05DBE439D(iLocal_36[1]))
										{
											unk_0x9B94F6169B0DAEFD(iLocal_36[1]);
										}
										else
										{
											unk_0x2BB0EF9DE445EA13(iLocal_36[1]);
										}
										unk_0xE021DCE1063D5DC2(iLocal_36[1], unk_0x9B0761B4C3EB8BC7(), -1, 0.5f, 2f, 1073741824, 0);
										func_187(iLocal_36[1]);
										iLocal_329[1] = 1;
									}
									iLocal_80[1] = unk_0x578C4EF320340AF7();
								}
								else if (unk_0x578C4EF320340AF7() > iLocal_80[1] + 500)
								{
									if (iLocal_330[1] == 0)
									{
										if (unk_0xA38BFCB05DBE439D(iLocal_36[1]))
										{
											unk_0x9B94F6169B0DAEFD(iLocal_36[1]);
										}
										else
										{
											unk_0x2BB0EF9DE445EA13(iLocal_36[1]);
										}
										unk_0x3C1B180EE30D36EF(iLocal_36[1], unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), 2f, -1, 1048576000, 0, 1193033728);
										func_187(iLocal_36[1]);
										iLocal_330[1] = 1;
									}
								}
							}
							else if (iLocal_361[1] == 0)
							{
								if (unk_0xA38BFCB05DBE439D(iLocal_36[1]))
								{
									unk_0x9B94F6169B0DAEFD(iLocal_36[1]);
								}
								else
								{
									unk_0x2BB0EF9DE445EA13(iLocal_36[1]);
								}
								unk_0x9DC06E2A59C5AEBB(&uLocal_48);
								unk_0xD08E9EAF091A1AAB(0, unk_0x9B0761B4C3EB8BC7(), 0);
								unk_0xC1C7DE768F7675E5(0, 2000);
								unk_0x62726974410B1305(uLocal_48, 1);
								unk_0x19F29730874AD6F1(uLocal_48);
								unk_0x9B6EC2CECE1010EF(iLocal_36[1], uLocal_48);
								unk_0x4F83FEE4454169D4(&uLocal_48);
								func_187(iLocal_36[1]);
								iLocal_361[1] = 1;
							}
							if (iLocal_335 == 0)
							{
								if (iLocal_326 == 0 || iLocal_302 == 1)
								{
									if (iLocal_296 == 0)
									{
										if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 1) < 10f)
										{
											if (!unk_0x6F683C1C0BB1BA8D(iLocal_36[1]))
											{
												func_185(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_67 = unk_0x578C4EF320340AF7();
												iLocal_69 = unk_0x578C4EF320340AF7();
												iLocal_65 = unk_0x578C4EF320340AF7();
												iLocal_309 = 1;
												iLocal_296 = 1;
												iLocal_304[1] = 1;
											}
										}
									}
									else if (unk_0x578C4EF320340AF7() > iLocal_67 + 7000)
									{
										if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 1) < 10f)
										{
											if (!unk_0x6F683C1C0BB1BA8D(iLocal_36[1]))
											{
												func_185(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
												iLocal_67 = unk_0x578C4EF320340AF7();
											}
										}
									}
								}
								else if (iLocal_302 == 0)
								{
									if (iLocal_327 == 0)
									{
										if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 1) < 10f)
										{
											if (!unk_0x6F683C1C0BB1BA8D(iLocal_36[1]))
											{
												func_185(iLocal_36[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
												iLocal_296 = 1;
												iLocal_327 = 1;
											}
										}
									}
								}
							}
							else if (unk_0x578C4EF320340AF7() > iLocal_69 + 7000)
							{
								if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 1) < 10f)
								{
									if (!unk_0x6F683C1C0BB1BA8D(iLocal_36[1]))
									{
										func_185(iLocal_36[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
										iLocal_69 = unk_0x578C4EF320340AF7();
									}
								}
							}
						}
					}
					if (iLocal_309 == 1)
					{
						if (iLocal_335 == 0)
						{
							if (unk_0x578C4EF320340AF7() > iLocal_65 + 22000)
							{
								iLocal_335 = 1;
							}
						}
					}
					if (iLocal_309 == 1)
					{
						if (iLocal_297 == 0)
						{
							if (unk_0x578C4EF320340AF7() > iLocal_65 + 30000)
							{
								unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 2, 0);
								iLocal_297 = 1;
							}
						}
					}
					if (unk_0xAE06B9E39EBDE049(iLocal_33))
					{
						if (unk_0x80FF6C016CDB0FAF(iLocal_33, 0))
						{
							if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_33, 1))
							{
								if (unk_0xD5E14AF69C7C4DA9(iLocal_36[0], unk_0x9B0761B4C3EB8BC7()) || unk_0xD5E14AF69C7C4DA9(iLocal_36[1], unk_0x9B0761B4C3EB8BC7()))
								{
									iLocal_297 = 1;
								}
							}
							if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_33, 1) < 5f && unk_0x11B7C25143EE2F29(unk_0x9B0761B4C3EB8BC7()))
							{
								if (unk_0xD5E14AF69C7C4DA9(iLocal_36[0], unk_0x9B0761B4C3EB8BC7()) || unk_0xD5E14AF69C7C4DA9(iLocal_36[1], unk_0x9B0761B4C3EB8BC7()))
								{
									iLocal_297 = 1;
								}
							}
						}
					}
					if (unk_0xAE06B9E39EBDE049(iLocal_36[0]))
					{
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[0]))
						{
							if (unk_0x42A04E707DE50816(unk_0x9B0761B4C3EB8BC7()))
							{
								if (unk_0x0560EC393A88465B(unk_0x9B0761B4C3EB8BC7()))
								{
									if (unk_0xD5E14AF69C7C4DA9(iLocal_36[0], unk_0x9B0761B4C3EB8BC7()))
									{
										iLocal_297 = 1;
									}
								}
							}
						}
					}
					if (unk_0xAE06B9E39EBDE049(iLocal_36[1]))
					{
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[1]))
						{
							if (unk_0x42A04E707DE50816(unk_0x9B0761B4C3EB8BC7()))
							{
								if (unk_0x0560EC393A88465B(unk_0x9B0761B4C3EB8BC7()))
								{
									if (unk_0xD5E14AF69C7C4DA9(iLocal_36[1], unk_0x9B0761B4C3EB8BC7()))
									{
										iLocal_297 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_184()
{
	if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		iLocal_64 = 0;
		while (iLocal_64 <= 6)
		{
			if (unk_0xAE06B9E39EBDE049(iLocal_35[iLocal_64]))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_35[iLocal_64]))
				{
					if (func_189(unk_0x9B0761B4C3EB8BC7()) != joaat("weapon_unarmed") && !func_188(0))
					{
						if (unk_0xD5E14AF69C7C4DA9(iLocal_35[iLocal_64], unk_0x9B0761B4C3EB8BC7()))
						{
							return 1;
						}
					}
				}
			}
			iLocal_64++;
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_36[0]))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[0]))
			{
				if (func_189(unk_0x9B0761B4C3EB8BC7()) != joaat("weapon_unarmed") && !func_188(0))
				{
					if (unk_0xD5E14AF69C7C4DA9(iLocal_36[0], unk_0x9B0761B4C3EB8BC7()))
					{
						return 1;
					}
				}
			}
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_36[1]))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[1]))
			{
				if (func_189(unk_0x9B0761B4C3EB8BC7()) != joaat("weapon_unarmed") && !func_188(0))
				{
					if (unk_0xD5E14AF69C7C4DA9(iLocal_36[1], unk_0x9B0761B4C3EB8BC7()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_185(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x1A454EFB8BC73430(iParam0, sParam1, sParam2, func_186(iParam3), 0);
}

int func_186(int iParam0)
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

void func_187(int iParam0)
{
	if (iParam0 == iLocal_36[0])
	{
		iLocal_328[0] = 0;
		iLocal_340[0] = 0;
		iLocal_341[0] = 0;
		iLocal_334[0] = 0;
		iLocal_331[0] = 0;
		iLocal_333[0] = 0;
		iLocal_329[0] = 0;
		iLocal_330[0] = 0;
		iLocal_361[0] = 0;
	}
	if (iParam0 == iLocal_36[1])
	{
		iLocal_328[1] = 0;
		iLocal_340[1] = 0;
		iLocal_341[1] = 0;
		iLocal_334[1] = 0;
		iLocal_331[1] = 0;
		iLocal_333[1] = 0;
		iLocal_329[1] = 0;
		iLocal_330[1] = 0;
		iLocal_361[1] = 0;
	}
}

int func_188(int iParam0)
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

int func_189(int iParam0)
{
	var uVar0;
	
	unk_0x1386E5E658CE3032(iParam0, &uVar0, 1);
	return uVar0;
}

void func_190()
{
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			Local_93 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true) };
		}
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_36[0]))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[0]))
		{
			Local_95[0 /*3*/] = { unk_0x3E4D3CCC220BDFB1(iLocal_36[0], true) };
		}
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_36[1]))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[1]))
		{
			Local_95[1 /*3*/] = { unk_0x3E4D3CCC220BDFB1(iLocal_36[1], true) };
		}
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_36[0]))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[0]))
		{
			iLocal_303[0] = 1;
		}
		else
		{
			iLocal_303[0] = 0;
		}
	}
	else
	{
		iLocal_303[0] = 0;
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_36[1]))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[1]))
		{
			iLocal_303[1] = 1;
		}
		else
		{
			iLocal_303[1] = 0;
		}
	}
	else
	{
		iLocal_303[1] = 0;
	}
	if (iLocal_31 != 0)
	{
		if (iLocal_31 == 1)
		{
			if (iLocal_303[0] == 1)
			{
				if (iLocal_303[1] == 1)
				{
					if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 1) < func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 1))
					{
						if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 1) < 20f)
						{
							if (((Local_93.x < Local_95[0 /*3*/] && !unk_0x04055E36623F131B(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 90f)) && !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, true, 0)) && !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, true, 0))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = unk_0x578C4EF320340AF7();
								iLocal_83[1] = unk_0x578C4EF320340AF7();
							}
						}
						else if (Local_93.x < Local_95[0 /*3*/])
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = unk_0x578C4EF320340AF7();
							iLocal_83[1] = unk_0x578C4EF320340AF7();
						}
					}
					else if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 1) < 15f)
					{
						if ((Local_93.x > Local_95[1 /*3*/] && !unk_0x04055E36623F131B(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 90f)) && !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, true, 0))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = unk_0x578C4EF320340AF7();
							iLocal_83[1] = unk_0x578C4EF320340AF7();
						}
					}
					else if (Local_93.x > Local_95[1 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = unk_0x578C4EF320340AF7();
						iLocal_83[1] = unk_0x578C4EF320340AF7();
					}
				}
				else if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 1) < func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 1))
				{
					if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 1) < 15f)
					{
						if ((Local_93.x < Local_95[0 /*3*/] && !unk_0x04055E36623F131B(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 90f)) && !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, true, 0))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = unk_0x578C4EF320340AF7();
							iLocal_83[1] = unk_0x578C4EF320340AF7();
						}
					}
					else if (Local_93.x < Local_95[0 /*3*/])
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = unk_0x578C4EF320340AF7();
						iLocal_83[1] = unk_0x578C4EF320340AF7();
					}
				}
			}
			else if (iLocal_303[1] == 1)
			{
				if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 1) < 15f)
				{
					if ((Local_93.x > Local_95[1 /*3*/] && !unk_0x04055E36623F131B(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 90f)) && !unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, true, 0))
					{
						iLocal_31 = 0;
						iLocal_340[0] = 0;
						iLocal_341[0] = 0;
						iLocal_340[1] = 0;
						iLocal_341[1] = 0;
						iLocal_83[0] = unk_0x578C4EF320340AF7();
						iLocal_83[1] = unk_0x578C4EF320340AF7();
					}
				}
				else if (Local_93.x > Local_95[1 /*3*/])
				{
					iLocal_31 = 0;
					iLocal_340[0] = 0;
					iLocal_341[0] = 0;
					iLocal_340[1] = 0;
					iLocal_341[1] = 0;
					iLocal_83[0] = unk_0x578C4EF320340AF7();
					iLocal_83[1] = unk_0x578C4EF320340AF7();
				}
			}
		}
		if (iLocal_31 == 2)
		{
			if (iLocal_297 == 0)
			{
				if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, true, 0) || Local_93.x > 942f)
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[1]))
					{
						if (Local_93.x > Local_95[1 /*3*/])
						{
							if (!unk_0x04055E36623F131B(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 90f))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = unk_0x578C4EF320340AF7();
								iLocal_83[1] = unk_0x578C4EF320340AF7();
							}
						}
					}
					else if (Local_93.x > 942f)
					{
						if (!unk_0x04055E36623F131B(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 90f))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = unk_0x578C4EF320340AF7();
							iLocal_83[1] = unk_0x578C4EF320340AF7();
						}
					}
				}
				if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, true, 0) || Local_93.x < 860f)
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[0]))
					{
						if (Local_93.x < Local_95[0 /*3*/])
						{
							if (!unk_0x04055E36623F131B(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 90f))
							{
								iLocal_31 = 0;
								iLocal_340[0] = 0;
								iLocal_341[0] = 0;
								iLocal_340[1] = 0;
								iLocal_341[1] = 0;
								iLocal_83[0] = unk_0x578C4EF320340AF7();
								iLocal_83[1] = unk_0x578C4EF320340AF7();
							}
						}
					}
					else if (Local_93.x < 860f)
					{
						if (!unk_0x04055E36623F131B(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 90f))
						{
							iLocal_31 = 0;
							iLocal_340[0] = 0;
							iLocal_341[0] = 0;
							iLocal_340[1] = 0;
							iLocal_341[1] = 0;
							iLocal_83[0] = unk_0x578C4EF320340AF7();
							iLocal_83[1] = unk_0x578C4EF320340AF7();
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 1)
	{
		if (iLocal_31 != 2)
		{
			if (iLocal_303[0] == 1)
			{
				if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 1) < 20f)
				{
					if ((func_189(unk_0x9B0761B4C3EB8BC7()) == joaat("weapon_unarmed") || unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0)) || func_188(0))
					{
						if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 860.4606f, -1563.58f, 28.81788f, 865.0807f, -1575.088f, 30.93324f, 5.75f, 0, true, 0))
						{
							if (Local_93.x > Local_95[0 /*3*/] || unk_0x04055E36623F131B(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 90f))
							{
								iLocal_31 = 1;
							}
						}
						if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 855.4593f, -1548.228f, 28.27722f, 863.1765f, -1563.288f, 33.31375f, 4.75f, 0, true, 0))
						{
							iLocal_31 = 1;
						}
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 1) < 15f)
				{
					if ((func_189(unk_0x9B0761B4C3EB8BC7()) == joaat("weapon_unarmed") || unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0)) || func_188(0))
					{
						if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 939.8862f, -1575.635f, 28.59783f, 952.9254f, -1575.484f, 33.19459f, 13.75f, 0, true, 0))
						{
							if (Local_93.x < Local_95[1 /*3*/] || unk_0x04055E36623F131B(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 90f))
							{
								iLocal_31 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_31 != 2)
	{
		if (unk_0x3628D28B8671F14F(-1, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_31 = 2;
			iLocal_297 = 1;
		}
		if (iLocal_359 == 1)
		{
			iLocal_31 = 2;
			iLocal_297 = 1;
		}
		if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) != 0)
		{
			if (unk_0xAE06B9E39EBDE049(iLocal_36[0]))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[0]))
				{
					if (unk_0xD5E14AF69C7C4DA9(iLocal_36[0], unk_0x9B0761B4C3EB8BC7()))
					{
						iLocal_31 = 2;
						iLocal_297 = 1;
					}
				}
			}
			if (unk_0xAE06B9E39EBDE049(iLocal_36[1]))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_36[1]))
				{
					if (unk_0xD5E14AF69C7C4DA9(iLocal_36[1], unk_0x9B0761B4C3EB8BC7()))
					{
						iLocal_31 = 2;
						iLocal_297 = 1;
					}
				}
			}
		}
		if (iLocal_326 == 0)
		{
			if (iLocal_325 == 1)
			{
				if (unk_0x578C4EF320340AF7() > iLocal_79 + 4000)
				{
					iLocal_78 = 0;
					while (iLocal_78 <= 6)
					{
						if (func_182())
						{
							if (unk_0xAE06B9E39EBDE049(iLocal_35[iLocal_78]))
							{
								if (!unk_0x5AEB5DDFFAD43CA5(iLocal_35[iLocal_78]))
								{
									if (unk_0xCB21B99A8BFC080B(iLocal_35[iLocal_78]))
									{
										iLocal_31 = 2;
										iLocal_326 = 1;
									}
								}
							}
						}
						iLocal_78++;
					}
				}
			}
		}
		if ((iLocal_29 == 4 || iLocal_29 == 3) || iLocal_325 == 1)
		{
			iLocal_31 = 2;
			iLocal_322 = 1;
			iLocal_297 = 1;
		}
		if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (iLocal_303[0] == 1)
			{
				if (func_189(unk_0x9B0761B4C3EB8BC7()) != joaat("weapon_unarmed") && !func_188(0))
				{
					if (unk_0xD5E14AF69C7C4DA9(iLocal_36[0], unk_0x9B0761B4C3EB8BC7()))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (func_189(unk_0x9B0761B4C3EB8BC7()) != joaat("weapon_unarmed") && !func_188(0))
				{
					if (unk_0xD5E14AF69C7C4DA9(iLocal_36[1], unk_0x9B0761B4C3EB8BC7()))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (unk_0x272784C60C397DB6(Local_93, Local_96, true) < 36f)
		{
			if (iLocal_303[0] == 1)
			{
				if (unk_0xD5E14AF69C7C4DA9(iLocal_36[0], unk_0x9B0761B4C3EB8BC7()))
				{
					iLocal_31 = 2;
				}
				if (func_177(iLocal_36[0], unk_0x9B0761B4C3EB8BC7(), 1) < 20f)
				{
					if (unk_0xA163F00216900D64(unk_0x460153A63B9477BC(), iLocal_36[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
			if (iLocal_303[1] == 1)
			{
				if (Local_93.f_2 < 36f || unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					if (unk_0xD5E14AF69C7C4DA9(iLocal_36[1], unk_0x9B0761B4C3EB8BC7()))
					{
						iLocal_31 = 2;
					}
					if (func_177(iLocal_36[1], unk_0x9B0761B4C3EB8BC7(), 1) < 20f)
					{
						if (unk_0xA163F00216900D64(unk_0x460153A63B9477BC(), iLocal_36[1]))
						{
							iLocal_31 = 2;
						}
					}
				}
			}
		}
		if (iLocal_303[0] == 1)
		{
			if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[0], 1) < 20f)
			{
				if (Local_93.x > Local_95[0 /*3*/] && unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 868.5617f, -1579.476f, 33.30448f, 866.5635f, -1560.984f, 28.90482f, 8.25f, 0, true, 0))
				{
					if (unk_0xD5E14AF69C7C4DA9(iLocal_36[0], unk_0x9B0761B4C3EB8BC7()) || unk_0xA163F00216900D64(unk_0x460153A63B9477BC(), iLocal_36[0]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
		if (iLocal_303[1] == 1)
		{
			if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_36[1], 1) < 20f)
			{
				if (Local_93.x < Local_95[1 /*3*/] && unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 936.7849f, -1569.337f, 31.49661f, 936.3553f, -1581.973f, 27.77812f, 8.25f, 0, true, 0))
				{
					if (unk_0xD5E14AF69C7C4DA9(iLocal_36[1], unk_0x9B0761B4C3EB8BC7()) || unk_0xA163F00216900D64(unk_0x460153A63B9477BC(), iLocal_36[1]))
					{
						iLocal_31 = 2;
					}
				}
			}
		}
	}
}

void func_191()
{
	iLocal_55 = 0;
	while (iLocal_55 <= 6)
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_35[iLocal_55]))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_35[iLocal_55]))
			{
				if (iLocal_278[iLocal_55] == 0)
				{
					if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_35[iLocal_55], 1) > 20f)
					{
						iLocal_278[iLocal_55] = 1;
					}
				}
				if (iLocal_278[iLocal_55] == 1)
				{
					if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_35[iLocal_55], 1) < 20f)
					{
						iLocal_278[iLocal_55] = 0;
					}
				}
			}
			else if (iLocal_278[iLocal_55] == 0)
			{
				iLocal_278[iLocal_55] = 1;
			}
		}
		else if (iLocal_278[iLocal_55] == 0)
		{
			iLocal_278[iLocal_55] = 1;
		}
		iLocal_55++;
	}
	if (((((iLocal_278[0] == 1 && iLocal_278[1] == 1) && iLocal_278[2] == 1) && iLocal_278[3] == 1) && iLocal_278[4] == 1) && iLocal_278[5] == 1)
	{
		iLocal_279 = 1;
	}
	else
	{
		iLocal_279 = 0;
	}
	iLocal_54 = 0;
	while (iLocal_54 <= 6)
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_35[iLocal_54]))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_35[iLocal_54]))
			{
				func_196(iLocal_35[iLocal_54]);
				if (iLocal_28 == 3 || iLocal_28 == 4)
				{
					if (iLocal_31 == 2 && iLocal_29 == 0)
					{
						func_195(1);
						if (iLocal_311 == 1)
						{
							func_114();
						}
					}
					if (unk_0x8ACC62181BFB4F25(iLocal_35[iLocal_54], 18))
					{
						if (iLocal_29 != 4)
						{
							func_195(4);
							if (iLocal_311 == 1)
							{
								func_193();
							}
							iLocal_359 = 1;
						}
					}
					if (iLocal_29 != 4)
					{
						if (unk_0x3628D28B8671F14F(-1, 892.9f, -1552.4f, 30f, 40f))
						{
							func_195(4);
							if (iLocal_311 == 1)
							{
								func_193();
							}
						}
					}
					if ((((((((func_192(iLocal_35[iLocal_54], iLocal_35[0]) || func_192(iLocal_35[iLocal_54], iLocal_35[1])) || func_192(iLocal_35[iLocal_54], iLocal_35[2])) || func_192(iLocal_35[iLocal_54], iLocal_35[3])) || func_192(iLocal_35[iLocal_54], iLocal_35[4])) || func_192(iLocal_35[iLocal_54], iLocal_35[5])) || func_192(iLocal_35[iLocal_54], iLocal_35[6])) || func_192(iLocal_35[iLocal_54], iLocal_36[0])) || func_192(iLocal_35[iLocal_54], iLocal_36[1]))
					{
						if (iLocal_29 != 4)
						{
							func_195(4);
							if (iLocal_311 == 1)
							{
								func_193();
							}
							iLocal_359 = 1;
						}
					}
					if ((func_189(unk_0x9B0761B4C3EB8BC7()) == joaat("weapon_unarmed") || unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 1)) || func_188(0))
					{
						if (iLocal_297 == 0)
						{
							if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_35[iLocal_54], 1) > 20f)
							{
								if (iLocal_277[iLocal_54] == 1)
								{
									iLocal_277[iLocal_54] = 0;
								}
								if (((((iLocal_279 == 1 && iLocal_29 != 0) && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4) && iLocal_31 != 2)
								{
									func_195(0);
								}
							}
							if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_35[iLocal_54], 1) < 20f && unk_0xD5E14AF69C7C4DA9(iLocal_35[iLocal_54], unk_0x9B0761B4C3EB8BC7()))
							{
								if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
								{
									if (iLocal_326 == 0 && iLocal_297 == 0)
									{
										func_195(1);
										if (iLocal_311 == 1)
										{
											func_114();
										}
									}
									else
									{
										func_195(3);
										if (iLocal_311 == 1)
										{
											func_193();
										}
									}
								}
							}
							if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_35[iLocal_54], 1) < 20f && unk_0xD5E14AF69C7C4DA9(iLocal_35[iLocal_54], unk_0x9B0761B4C3EB8BC7()))
							{
								if (iLocal_277[iLocal_54] == 0)
								{
									iLocal_60[iLocal_54] = unk_0x578C4EF320340AF7();
									iLocal_277[iLocal_54] = 1;
								}
								if (iLocal_277[iLocal_54] == 1)
								{
									if (unk_0x578C4EF320340AF7() > iLocal_60[iLocal_54] + 24000)
									{
										if ((iLocal_29 != 2 && iLocal_29 != 3) && iLocal_29 != 4)
										{
											func_195(2);
											if (iLocal_311 == 1)
											{
												func_193();
											}
										}
									}
								}
							}
						}
						if (iLocal_297 == 1)
						{
							if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_35[iLocal_54], 1) < 20f && unk_0xD5E14AF69C7C4DA9(iLocal_35[iLocal_54], unk_0x9B0761B4C3EB8BC7()))
							{
								if (iLocal_29 != 3 && iLocal_29 != 4)
								{
									func_195(3);
									if (iLocal_311 == 1)
									{
										func_193();
									}
								}
							}
						}
						if (unk_0x42A04E707DE50816(unk_0x9B0761B4C3EB8BC7()))
						{
							if (iLocal_308 == 0)
							{
								iLocal_74 = unk_0x578C4EF320340AF7();
								iLocal_308 = 1;
							}
							else if (unk_0x578C4EF320340AF7() > iLocal_74 + 3000)
							{
								if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_35[iLocal_54], 1) < 20f && unk_0xD5E14AF69C7C4DA9(iLocal_35[iLocal_54], unk_0x9B0761B4C3EB8BC7()))
								{
									if (iLocal_29 != 3 && iLocal_29 != 4)
									{
										func_195(3);
										if (iLocal_311 == 1)
										{
											func_193();
										}
									}
								}
							}
						}
						else if (iLocal_308 == 1)
						{
							iLocal_308 = 0;
						}
						if (unk_0xAE06B9E39EBDE049(iLocal_33))
						{
							if (unk_0x80FF6C016CDB0FAF(iLocal_33, 0))
							{
								if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_33, 1))
								{
									if (unk_0xD5E14AF69C7C4DA9(iLocal_35[iLocal_54], unk_0x9B0761B4C3EB8BC7()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_289 = 1;
											func_195(3);
											if (iLocal_311 == 1)
											{
												func_193();
											}
										}
									}
								}
								if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_33, 1) < 5f && unk_0x11B7C25143EE2F29(unk_0x9B0761B4C3EB8BC7()))
								{
									if (unk_0xD5E14AF69C7C4DA9(iLocal_35[iLocal_54], unk_0x9B0761B4C3EB8BC7()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_289 = 1;
											func_195(3);
											if (iLocal_311 == 1)
											{
												func_193();
											}
										}
									}
									if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 917.3436f, -1554.42f, 29.26611f, 916.8774f, -1556.441f, 33.00661f, 2.25f, 0, true, 0))
									{
										if (unk_0xAE06B9E39EBDE049(iLocal_35[0]))
										{
											if (!unk_0x5AEB5DDFFAD43CA5(iLocal_35[0]))
											{
												if (unk_0xC2169C00B643278B(iLocal_35[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, false, true, 0))
												{
													if (iLocal_29 != 3 && iLocal_29 != 4)
													{
														iLocal_289 = 1;
														func_195(3);
														if (iLocal_311 == 1)
														{
															func_193();
														}
													}
												}
											}
										}
									}
								}
							}
						}
						if (unk_0xAE06B9E39EBDE049(iLocal_35[6]))
						{
							if (!unk_0x5AEB5DDFFAD43CA5(iLocal_35[6]))
							{
								if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_35[6], 1) < 20f)
								{
									if ((unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 928.7163f, -1546.671f, 27.34603f, 921.8971f, -1549.752f, 34.04724f, 6.25f, 0, true, 0) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 931.868f, -1545.185f, 27.3653f, 925.8857f, -1547.303f, 34.07205f, 3.5f, 0, true, 0)) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 929.4908f, -1524.829f, 32.84098f, 929.3696f, -1545.288f, 37.34258f, 5f, 0, true, 0))
									{
										if (unk_0xD5E14AF69C7C4DA9(iLocal_35[6], unk_0x9B0761B4C3EB8BC7()))
										{
											if (Local_93.f_2 > 31f)
											{
												if (iLocal_29 != 3 && iLocal_29 != 4)
												{
													iLocal_323 = 1;
													func_195(3);
													if (iLocal_311 == 1)
													{
														func_193();
													}
												}
											}
											else if (((iLocal_29 != 1 && iLocal_29 != 2) && iLocal_29 != 3) && iLocal_29 != 4)
											{
												func_195(1);
												if (iLocal_311 == 1)
												{
													func_114();
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if (iLocal_276 == 0)
						{
							iLocal_59 = unk_0x578C4EF320340AF7();
							iLocal_276 = 1;
						}
						if (iLocal_276 == 1)
						{
							if (unk_0x578C4EF320340AF7() > iLocal_59 + 4000 || iLocal_29 == 3)
							{
								if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_35[iLocal_54], 1) < 20f)
								{
									if (unk_0xD5E14AF69C7C4DA9(iLocal_35[iLocal_54], unk_0x9B0761B4C3EB8BC7()))
									{
										if (iLocal_29 != 4)
										{
											func_195(4);
											if (iLocal_311 == 1)
											{
												func_193();
											}
										}
									}
								}
							}
						}
						if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_35[iLocal_54], 1) < 40f)
						{
							if (unk_0x7922FF28ED63354A(unk_0x9B0761B4C3EB8BC7()))
							{
								if (unk_0xD5E14AF69C7C4DA9(iLocal_35[iLocal_54], unk_0x9B0761B4C3EB8BC7()) || unk_0xA163F00216900D64(unk_0x460153A63B9477BC(), iLocal_35[iLocal_54]))
								{
									if (iLocal_29 != 4)
									{
										func_195(4);
										if (iLocal_311 == 1)
										{
											func_193();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_54++;
	}
}

int func_192(int iParam0, int iParam1)
{
	if (((func_177(iParam0, iParam1, 1) < 20f && unk_0x04055E36623F131B(iParam0, iParam1, 90f)) && !unk_0x5AEB5DDFFAD43CA5(iParam0)) && unk_0x5AEB5DDFFAD43CA5(iParam1))
	{
		return 1;
	}
	return 0;
}

void func_193()
{
	Global_19871 = 0;
	func_194();
}

void func_194()
{
	unk_0x62B2C9892E3E142D();
	Global_22016 = 0;
	if (unk_0x6A5CC4A2C9D9ED8D())
	{
		unk_0xBE4122AC23440E7D(false);
		Global_21005 = 6;
	}
}

void func_195(int iParam0)
{
	iLocal_29 = iParam0;
	iLocal_58 = 0;
}

void func_196(int iParam0)
{
	iLocal_56 = 0;
	while (iLocal_56 <= 6)
	{
		if (iParam0 == iLocal_35[iLocal_56])
		{
			if (func_177(unk_0x9B0761B4C3EB8BC7(), iParam0, 1) < 20f && unk_0xD5E14AF69C7C4DA9(iParam0, unk_0x9B0761B4C3EB8BC7()))
			{
				if (iLocal_280[iLocal_56] == 0)
				{
					unk_0xA785552633ED203B(iParam0, unk_0x9B0761B4C3EB8BC7(), -1, 1072, 3);
					iLocal_280[iLocal_56] = 1;
				}
			}
			else if (iLocal_280[iLocal_56] == 1)
			{
				unk_0xA785552633ED203B(iParam0, unk_0x9B0761B4C3EB8BC7(), 1, 1072, 3);
				iLocal_280[iLocal_56] = 0;
			}
		}
		iLocal_56++;
	}
	switch (iLocal_29)
	{
		case 0:
			if (iLocal_58 == 0)
			{
				unk_0x4E65320BC9AD521C(iParam0, true);
				if (iParam0 == iLocal_35[0])
				{
					if (unk_0xFDE4ABD9A796190D(912.2f, -1542.5f, 29.8f, 3f, 0))
					{
						if (unk_0x16BC17A8EDC701A2(iLocal_35[0], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[0], -1680762137) != 1)
						{
							unk_0xA9F85E798FF1068D(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[1])
				{
					if (unk_0xFDE4ABD9A796190D(917.4f, -1517.4f, 30f, 3f, 0))
					{
						if (unk_0x16BC17A8EDC701A2(iLocal_35[1], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[1], -1680762137) != 1)
						{
							unk_0xA9F85E798FF1068D(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[2])
				{
					if (unk_0xFDE4ABD9A796190D(869.8f, -1541.2f, 29.4f, 3f, 0))
					{
						if (unk_0x16BC17A8EDC701A2(iLocal_35[2], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[2], -1680762137) != 1)
						{
							unk_0xA9F85E798FF1068D(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[3])
				{
					if (unk_0xFDE4ABD9A796190D(884.2f, -1574.1f, 30f, 3f, 0))
					{
						if (unk_0x16BC17A8EDC701A2(iLocal_35[3], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[3], -1680762137) != 1)
						{
							unk_0xA9F85E798FF1068D(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[4])
				{
					if (unk_0xFDE4ABD9A796190D(904f, -1575f, 30f, 3f, 0))
					{
						if (unk_0x16BC17A8EDC701A2(iLocal_35[4], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[4], -1680762137) != 1)
						{
							unk_0xA9F85E798FF1068D(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[5])
				{
					if (unk_0xFDE4ABD9A796190D(905.9f, -1574.8f, 29.9f, 3f, 0))
					{
						if (unk_0x16BC17A8EDC701A2(iLocal_35[5], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[5], -1680762137) != 1)
						{
							unk_0xA9F85E798FF1068D(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (unk_0xFDE4ABD9A796190D(889.5f, -1562f, 29.7f, 3f, 0))
					{
						if (unk_0x16BC17A8EDC701A2(iLocal_35[6], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[6], -1680762137) != 1)
						{
							unk_0xA9F85E798FF1068D(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
						}
					}
				}
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				if (unk_0xAE06B9E39EBDE049(iLocal_35[4]))
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_35[4]))
					{
						if (unk_0xAE06B9E39EBDE049(iLocal_35[5]))
						{
							if (!unk_0x5AEB5DDFFAD43CA5(iLocal_35[5]))
							{
								if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_35[4], 1) < 25f)
								{
									if (unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 926.455f, -1582.384f, 29.32759f, 909.6322f, -1581.374f, 31.58907f, 9.5f, 0, true, 0) || Local_93.f_1 > -1573f)
									{
										if (iLocal_311 == 0)
										{
											func_138(&uLocal_99, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
											func_138(&uLocal_99, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
											unk_0xA785552633ED203B(iLocal_35[4], iLocal_35[5], -1, 0, 2);
											unk_0xA785552633ED203B(iLocal_35[5], iLocal_35[4], -1, 0, 2);
											if (!func_182())
											{
												if (!unk_0x2F80DB5A41D045E6() || !unk_0x67F1A5C89249817A())
												{
													if (func_176(&uLocal_99, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
													{
														iLocal_311 = 1;
													}
												}
											}
										}
									}
								}
								if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, false, true, 1))
								{
									if (iLocal_318 == 0)
									{
										iLocal_76 = unk_0x578C4EF320340AF7();
										iLocal_318 = 1;
									}
									if (iLocal_318 == 1)
									{
										if (unk_0x578C4EF320340AF7() > iLocal_76 + 4000)
										{
											if (iLocal_311 == 0)
											{
												func_138(&uLocal_99, 3, iLocal_35[4], "CONSTRUCTION2", 0, 1);
												func_138(&uLocal_99, 5, iLocal_35[5], "CONSTRUCTION3", 0, 1);
												unk_0xA785552633ED203B(iLocal_35[4], iLocal_35[5], -1, 0, 2);
												unk_0xA785552633ED203B(iLocal_35[5], iLocal_35[4], -1, 0, 2);
												if (!func_182())
												{
													if (!unk_0x2F80DB5A41D045E6() || !unk_0x67F1A5C89249817A())
													{
														if (func_176(&uLocal_99, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														{
															iLocal_311 = 1;
														}
													}
												}
											}
										}
									}
								}
								if (iLocal_311 == 1 && !func_182())
								{
									if (iLocal_310 == 0)
									{
										if (unk_0xFDE4ABD9A796190D(865f, -1558.1f, 29.5f, 3f, 0))
										{
											unk_0xE2348E4036041923(iLocal_35[4]);
											unk_0xE2348E4036041923(iLocal_35[5]);
											unk_0x1AC55EB440F64E41(iLocal_35[4], 865f, -1558.1f, 29.5f, 3f, 0);
											iLocal_310 = 1;
										}
									}
								}
							}
						}
					}
				}
				if (iParam0 == iLocal_35[6])
				{
					if (iLocal_319 == 0)
					{
						if (iLocal_320 == 0)
						{
							iLocal_77 = unk_0x578C4EF320340AF7();
							iLocal_320 = 1;
						}
						if (unk_0x578C4EF320340AF7() > iLocal_77 + 30000)
						{
							if (iLocal_319 == 0)
							{
								if (unk_0xFDE4ABD9A796190D(925f, -1561f, 30f, 3f, 0))
								{
									unk_0x1AC55EB440F64E41(iLocal_35[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_319 = 1;
									iLocal_320 = 0;
								}
							}
						}
					}
					if (iLocal_319 == 1)
					{
						if (unk_0xC2169C00B643278B(iLocal_35[6], 925f, -1561f, 30f, 3f, 3f, 3f, false, true, 0))
						{
							if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_35[6], 1) < 15f && Local_93.f_2 < 40f)
							{
								if (iLocal_321 == 0)
								{
									if (unk_0xFDE4ABD9A796190D(909.5f, -1515.5f, 30f, 3f, 0))
									{
										unk_0xA9F85E798FF1068D(iLocal_35[6], 909.5f, -1515.5f, 30f, 50f, 0);
										iLocal_321 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_58 == 0)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_31 == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (func_177(unk_0x9B0761B4C3EB8BC7(), iParam0, 1) < 20f)
							{
								if (iLocal_281[iLocal_56] == 0)
								{
									if (unk_0xD5E14AF69C7C4DA9(iParam0, unk_0x9B0761B4C3EB8BC7()) || unk_0xA163F00216900D64(unk_0x460153A63B9477BC(), iParam0))
									{
										if (!unk_0xA38BFCB05DBE439D(iParam0))
										{
											unk_0x2BB0EF9DE445EA13(iParam0);
										}
										if (unk_0xA38BFCB05DBE439D(iParam0))
										{
											unk_0x9B94F6169B0DAEFD(iParam0);
										}
										unk_0x9DC06E2A59C5AEBB(&uLocal_48);
										unk_0xE021DCE1063D5DC2(0, unk_0x9B0761B4C3EB8BC7(), -1, 2f, 1f, 1073741824, 0);
										unk_0xD08E9EAF091A1AAB(0, unk_0x9B0761B4C3EB8BC7(), 0);
										unk_0x19F29730874AD6F1(uLocal_48);
										unk_0x9B6EC2CECE1010EF(iParam0, uLocal_48);
										unk_0x4F83FEE4454169D4(&uLocal_48);
										unk_0x4E65320BC9AD521C(iParam0, true);
										iLocal_280[iLocal_56] = 0;
										iLocal_281[iLocal_56] = 1;
									}
								}
								if (iLocal_281[iLocal_56] == 1)
								{
									if (!unk_0x04055E36623F131B(iParam0, unk_0x9B0761B4C3EB8BC7(), 45f))
									{
										unk_0xD08E9EAF091A1AAB(iParam0, unk_0x9B0761B4C3EB8BC7(), 0);
										iLocal_281[iLocal_56] = 0;
									}
								}
							}
							else
							{
								if (iLocal_281[iLocal_56] == 1)
								{
									iLocal_281[iLocal_56] = 0;
								}
								if (iParam0 == iLocal_35[0])
								{
									if (unk_0xFDE4ABD9A796190D(912.2f, -1542.5f, 29.8f, 3f, 0))
									{
										if (unk_0x16BC17A8EDC701A2(iLocal_35[0], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[0], -1680762137) != 1)
										{
											unk_0xA9F85E798FF1068D(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
											unk_0x4E65320BC9AD521C(iLocal_35[0], true);
										}
									}
								}
								if (iParam0 == iLocal_35[1])
								{
									if (unk_0xFDE4ABD9A796190D(917.4f, -1517.4f, 30f, 3f, 0))
									{
										if (unk_0x16BC17A8EDC701A2(iLocal_35[1], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[1], -1680762137) != 1)
										{
											unk_0xA9F85E798FF1068D(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
											unk_0x4E65320BC9AD521C(iLocal_35[1], true);
										}
									}
								}
								if (iParam0 == iLocal_35[2])
								{
									if (unk_0xFDE4ABD9A796190D(869.8f, -1541.2f, 29.4f, 3f, 0))
									{
										if (unk_0x16BC17A8EDC701A2(iLocal_35[2], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[2], -1680762137) != 1)
										{
											unk_0xA9F85E798FF1068D(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
											unk_0x4E65320BC9AD521C(iLocal_35[2], true);
										}
									}
								}
								if (iParam0 == iLocal_35[3])
								{
									if (unk_0xFDE4ABD9A796190D(884.2f, -1574.1f, 30f, 3f, 0))
									{
										if (unk_0x16BC17A8EDC701A2(iLocal_35[3], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[3], -1680762137) != 1)
										{
											unk_0xA9F85E798FF1068D(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
											unk_0x4E65320BC9AD521C(iLocal_35[3], true);
										}
									}
								}
								if (iParam0 == iLocal_35[4])
								{
									if (unk_0xFDE4ABD9A796190D(904f, -1575f, 30f, 3f, 0))
									{
										if (unk_0x16BC17A8EDC701A2(iLocal_35[4], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[4], -1680762137) != 1)
										{
											unk_0xA9F85E798FF1068D(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
											unk_0x4E65320BC9AD521C(iLocal_35[4], true);
										}
									}
								}
								if (iParam0 == iLocal_35[5])
								{
									if (unk_0xFDE4ABD9A796190D(905.9f, -1574.8f, 29.9f, 3f, 0))
									{
										if (unk_0x16BC17A8EDC701A2(iLocal_35[5], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[5], -1680762137) != 1)
										{
											unk_0xA9F85E798FF1068D(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
											unk_0x4E65320BC9AD521C(iLocal_35[5], true);
										}
									}
								}
								if (iParam0 == iLocal_35[6])
								{
									if (unk_0xFDE4ABD9A796190D(889.5f, -1562f, 29.7f, 3f, 0))
									{
										if (unk_0x16BC17A8EDC701A2(iLocal_35[6], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[6], -1680762137) != 1)
										{
											unk_0xA9F85E798FF1068D(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
											unk_0x4E65320BC9AD521C(iLocal_35[6], true);
										}
									}
								}
							}
						}
					}
					else if (iParam0 == iLocal_35[iLocal_56])
					{
						if (func_177(unk_0x9B0761B4C3EB8BC7(), iParam0, 1) < 20f)
						{
							if (iLocal_281[iLocal_56] == 0)
							{
								if (unk_0xD5E14AF69C7C4DA9(iParam0, unk_0x9B0761B4C3EB8BC7()) || unk_0xA163F00216900D64(unk_0x460153A63B9477BC(), iParam0))
								{
									if (!unk_0xA38BFCB05DBE439D(iParam0))
									{
										unk_0x2BB0EF9DE445EA13(iParam0);
									}
									if (unk_0xA38BFCB05DBE439D(iParam0))
									{
										unk_0x9B94F6169B0DAEFD(iParam0);
									}
									unk_0x9DC06E2A59C5AEBB(&uLocal_48);
									unk_0xD08E9EAF091A1AAB(0, unk_0x9B0761B4C3EB8BC7(), 0);
									unk_0xA785552633ED203B(0, unk_0x9B0761B4C3EB8BC7(), -1, 1072, 3);
									unk_0x19F29730874AD6F1(uLocal_48);
									unk_0x9B6EC2CECE1010EF(iParam0, uLocal_48);
									unk_0x4F83FEE4454169D4(&uLocal_48);
									unk_0x4E65320BC9AD521C(iParam0, true);
									iLocal_280[iLocal_56] = 0;
									iLocal_281[iLocal_56] = 1;
								}
							}
							if (iLocal_281[iLocal_56] == 1)
							{
								if (!unk_0x04055E36623F131B(iParam0, unk_0x9B0761B4C3EB8BC7(), 45f))
								{
									unk_0xD08E9EAF091A1AAB(iParam0, unk_0x9B0761B4C3EB8BC7(), 0);
									iLocal_281[iLocal_56] = 0;
								}
							}
						}
						else
						{
							if (iLocal_281[iLocal_56] == 1)
							{
								iLocal_281[iLocal_56] = 0;
							}
							if (iParam0 == iLocal_35[0])
							{
								if (unk_0xFDE4ABD9A796190D(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (unk_0x16BC17A8EDC701A2(iLocal_35[0], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[0], -1680762137) != 1)
									{
										unk_0xA9F85E798FF1068D(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										unk_0x4E65320BC9AD521C(iLocal_35[0], true);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (unk_0xFDE4ABD9A796190D(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (unk_0x16BC17A8EDC701A2(iLocal_35[1], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[1], -1680762137) != 1)
									{
										unk_0xA9F85E798FF1068D(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										unk_0x4E65320BC9AD521C(iLocal_35[1], true);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (unk_0xFDE4ABD9A796190D(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (unk_0x16BC17A8EDC701A2(iLocal_35[2], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[2], -1680762137) != 1)
									{
										unk_0xA9F85E798FF1068D(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										unk_0x4E65320BC9AD521C(iLocal_35[2], true);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (unk_0xFDE4ABD9A796190D(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (unk_0x16BC17A8EDC701A2(iLocal_35[3], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[3], -1680762137) != 1)
									{
										unk_0xA9F85E798FF1068D(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										unk_0x4E65320BC9AD521C(iLocal_35[3], true);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (unk_0xFDE4ABD9A796190D(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0x16BC17A8EDC701A2(iLocal_35[4], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[4], -1680762137) != 1)
									{
										unk_0xA9F85E798FF1068D(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										unk_0x4E65320BC9AD521C(iLocal_35[4], true);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (unk_0xFDE4ABD9A796190D(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (unk_0x16BC17A8EDC701A2(iLocal_35[5], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[5], -1680762137) != 1)
									{
										unk_0xA9F85E798FF1068D(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										unk_0x4E65320BC9AD521C(iLocal_35[5], true);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (unk_0xFDE4ABD9A796190D(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (unk_0x16BC17A8EDC701A2(iLocal_35[6], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[6], -1680762137) != 1)
									{
										unk_0xA9F85E798FF1068D(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										unk_0x4E65320BC9AD521C(iLocal_35[6], true);
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 2:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_58 == 0)
			{
				unk_0xEFBCE8F8316F89EA(5, iLocal_264, 1862763509);
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iParam0 == iLocal_35[iLocal_56])
					{
						if (func_177(iParam0, unk_0x9B0761B4C3EB8BC7(), 1) < 15f)
						{
							if (func_177(iParam0, unk_0x9B0761B4C3EB8BC7(), 1) > 3f)
							{
								if (unk_0x16BC17A8EDC701A2(iParam0, 242628503) != 0 || unk_0x16BC17A8EDC701A2(iParam0, 242628503) != 1)
								{
									if (!unk_0xA38BFCB05DBE439D(iParam0))
									{
										unk_0x2BB0EF9DE445EA13(iParam0);
									}
									if (unk_0xA38BFCB05DBE439D(iParam0))
									{
										unk_0x9B94F6169B0DAEFD(iParam0);
									}
									unk_0x9DC06E2A59C5AEBB(&uLocal_48);
									unk_0xE021DCE1063D5DC2(0, unk_0x9B0761B4C3EB8BC7(), -1, 1f, 1f, 1073741824, 0);
									unk_0xD08E9EAF091A1AAB(0, unk_0x9B0761B4C3EB8BC7(), 0);
									unk_0x19F29730874AD6F1(uLocal_48);
									unk_0x9B6EC2CECE1010EF(iParam0, uLocal_48);
									unk_0x4F83FEE4454169D4(&uLocal_48);
									iLocal_280[iLocal_56] = 0;
								}
							}
						}
						else
						{
							if (iParam0 == iLocal_35[0])
							{
								if (unk_0xFDE4ABD9A796190D(912.2f, -1542.5f, 29.8f, 3f, 0))
								{
									if (unk_0x16BC17A8EDC701A2(iLocal_35[0], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[0], -1680762137) != 1)
									{
										unk_0xA9F85E798FF1068D(iLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										unk_0x4E65320BC9AD521C(iLocal_35[0], true);
									}
								}
							}
							if (iParam0 == iLocal_35[1])
							{
								if (unk_0xFDE4ABD9A796190D(917.4f, -1517.4f, 30f, 3f, 0))
								{
									if (unk_0x16BC17A8EDC701A2(iLocal_35[1], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[1], -1680762137) != 1)
									{
										unk_0xA9F85E798FF1068D(iLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										unk_0x4E65320BC9AD521C(iLocal_35[1], true);
									}
								}
							}
							if (iParam0 == iLocal_35[2])
							{
								if (unk_0xFDE4ABD9A796190D(869.8f, -1541.2f, 29.4f, 3f, 0))
								{
									if (unk_0x16BC17A8EDC701A2(iLocal_35[2], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[2], -1680762137) != 1)
									{
										unk_0xA9F85E798FF1068D(iLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										unk_0x4E65320BC9AD521C(iLocal_35[2], true);
									}
								}
							}
							if (iParam0 == iLocal_35[3])
							{
								if (unk_0xFDE4ABD9A796190D(884.2f, -1574.1f, 30f, 3f, 0))
								{
									if (unk_0x16BC17A8EDC701A2(iLocal_35[3], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[3], -1680762137) != 1)
									{
										unk_0xA9F85E798FF1068D(iLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										unk_0x4E65320BC9AD521C(iLocal_35[3], true);
									}
								}
							}
							if (iParam0 == iLocal_35[4])
							{
								if (unk_0xFDE4ABD9A796190D(904f, -1575f, 30f, 3f, 0))
								{
									if (unk_0x16BC17A8EDC701A2(iLocal_35[4], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[4], -1680762137) != 1)
									{
										unk_0xA9F85E798FF1068D(iLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										unk_0x4E65320BC9AD521C(iLocal_35[4], true);
									}
								}
							}
							if (iParam0 == iLocal_35[5])
							{
								if (unk_0xFDE4ABD9A796190D(905.9f, -1574.8f, 29.9f, 3f, 0))
								{
									if (unk_0x16BC17A8EDC701A2(iLocal_35[5], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[5], -1680762137) != 1)
									{
										unk_0xA9F85E798FF1068D(iLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										unk_0x4E65320BC9AD521C(iLocal_35[5], true);
									}
								}
							}
							if (iParam0 == iLocal_35[6])
							{
								if (unk_0xFDE4ABD9A796190D(889.5f, -1562f, 29.7f, 3f, 0))
								{
									if (unk_0x16BC17A8EDC701A2(iLocal_35[6], 1647992574) != 1 && unk_0x16BC17A8EDC701A2(iLocal_35[6], -1680762137) != 1)
									{
										unk_0xA9F85E798FF1068D(iLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										unk_0x4E65320BC9AD521C(iLocal_35[6], true);
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 3:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_292 == 0)
			{
				if (iLocal_293 == 0)
				{
					iLocal_63 = unk_0x578C4EF320340AF7();
					iLocal_293 = 1;
				}
				if (iLocal_293 == 1)
				{
					if (unk_0x578C4EF320340AF7() > iLocal_63 + 9000)
					{
						unk_0x53797676AD34A9AA(5);
						unk_0x34FEEAC2548C3789(1f);
						unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 2, 0);
						unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
						iLocal_292 = 1;
					}
				}
			}
			if (iLocal_58 == 0)
			{
				unk_0xEFBCE8F8316F89EA(5, iLocal_264, 1862763509);
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				if (iLocal_28 == 3)
				{
					iLocal_56 = 0;
					while (iLocal_56 <= 6)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (func_177(iParam0, unk_0x9B0761B4C3EB8BC7(), 1) < 100f)
							{
								if (iLocal_282[iLocal_56] == 0)
								{
									unk_0x4E65320BC9AD521C(iParam0, true);
									iLocal_282[iLocal_56] = 1;
								}
								if (iLocal_283[iLocal_56] == 0)
								{
									if (!unk_0xA38BFCB05DBE439D(iParam0))
									{
										unk_0x2BB0EF9DE445EA13(iParam0);
									}
									if (unk_0xA38BFCB05DBE439D(iParam0))
									{
										unk_0x9B94F6169B0DAEFD(iParam0);
									}
									unk_0xB94133249C84B1E3(iParam0, 100f, 0);
									iLocal_280[iLocal_56] = 0;
									iLocal_283[iLocal_56] = 1;
								}
							}
						}
						iLocal_56++;
					}
					if (iLocal_345 == 0)
					{
						if (unk_0xAE06B9E39EBDE049(iLocal_35[0]))
						{
							if (!unk_0x5AEB5DDFFAD43CA5(iLocal_35[0]))
							{
								if (unk_0xAE06B9E39EBDE049(iLocal_33))
								{
									if (unk_0x80FF6C016CDB0FAF(iLocal_33, 0))
									{
										if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_33, 1) && unk_0xC2169C00B643278B(iLocal_33, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, false, true, 0))
										{
											if (!unk_0xA38BFCB05DBE439D(iLocal_35[0]))
											{
												unk_0x2BB0EF9DE445EA13(iLocal_35[0]);
											}
											if (unk_0xA38BFCB05DBE439D(iLocal_35[0]))
											{
												unk_0x9B94F6169B0DAEFD(iLocal_35[0]);
											}
											unk_0x9DC06E2A59C5AEBB(&uLocal_48);
											unk_0x3C1B180EE30D36EF(0, 917.8f, -1561f, 29f, 3f, -1, 1048576000, 0, 1193033728);
											unk_0xD08E9EAF091A1AAB(0, unk_0x9B0761B4C3EB8BC7(), 0);
											unk_0x756D74A3EF0AB788(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0, 0, 0, 0);
											unk_0x19F29730874AD6F1(uLocal_48);
											unk_0x9B6EC2CECE1010EF(iLocal_35[0], uLocal_48);
											unk_0x4F83FEE4454169D4(&uLocal_48);
											iLocal_345 = 1;
										}
									}
								}
							}
						}
					}
					if (iLocal_345 == 1 && iLocal_362 == 0)
					{
						if (unk_0xAE06B9E39EBDE049(iLocal_35[0]))
						{
							if (!unk_0x5AEB5DDFFAD43CA5(iLocal_35[0]))
							{
								if (unk_0xC2169C00B643278B(iLocal_35[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, false, true, 0))
								{
									func_138(&uLocal_99, 3, iLocal_35[0], "FHPrepBWorker", 0, 1);
									func_185(iLocal_35[0], "FHPB_BBAA", "FHPrepBWorker", 4);
									iLocal_362 = 1;
								}
							}
						}
					}
					if (iLocal_344 == 0)
					{
						if (unk_0x578C4EF320340AF7() > iLocal_63 + 3000)
						{
							if (unk_0xAE06B9E39EBDE049(iLocal_35[5]))
							{
								if (!unk_0x5AEB5DDFFAD43CA5(iLocal_35[5]))
								{
									unk_0x756D74A3EF0AB788(iLocal_35[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0, 0, 0, 0);
									iLocal_87 = unk_0x578C4EF320340AF7();
									iLocal_344 = 1;
								}
							}
						}
					}
					else if (iLocal_343 == 0)
					{
						if (unk_0x578C4EF320340AF7() > iLocal_87 + 5000)
						{
							if (unk_0xAE06B9E39EBDE049(iLocal_35[5]))
							{
								if (!unk_0x5AEB5DDFFAD43CA5(iLocal_35[5]))
								{
									unk_0x9B94F6169B0DAEFD(iLocal_35[5]);
									unk_0x8FF9CE1C0F94F59A(iLocal_35[5], unk_0x9B0761B4C3EB8BC7(), 0, 16);
									iLocal_343 = 1;
								}
							}
						}
					}
				}
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_268[iLocal_56] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (unk_0xAE06B9E39EBDE049(iParam0))
							{
								if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
								{
									unk_0x4E65320BC9AD521C(iParam0, true);
									if (unk_0x47DBF174A0CB9D55(iParam0, 0))
									{
										if (func_177(iParam0, unk_0x9B0761B4C3EB8BC7(), 1) > 200f)
										{
											if (!unk_0xA38BFCB05DBE439D(iParam0))
											{
												unk_0x2BB0EF9DE445EA13(iParam0);
											}
											if (unk_0xA38BFCB05DBE439D(iParam0))
											{
												unk_0x9B94F6169B0DAEFD(iParam0);
											}
											unk_0x8B18A80E8EB15510(iParam0, unk_0x9B0761B4C3EB8BC7(), 1000f, -1, 0, 0);
											iLocal_268[iLocal_56] = 1;
										}
									}
									else if (func_177(iParam0, unk_0x9B0761B4C3EB8BC7(), 1) > 100f)
									{
										if (!unk_0xA38BFCB05DBE439D(iParam0))
										{
											unk_0x2BB0EF9DE445EA13(iParam0);
										}
										if (unk_0xA38BFCB05DBE439D(iParam0))
										{
											unk_0x9B94F6169B0DAEFD(iParam0);
										}
										unk_0x8B18A80E8EB15510(iParam0, unk_0x9B0761B4C3EB8BC7(), 1000f, -1, 0, 0);
										iLocal_268[iLocal_56] = 1;
									}
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			if (iLocal_28 == 4)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (iLocal_268[iLocal_56] == 0)
					{
						if (iParam0 == iLocal_35[iLocal_56])
						{
							if (unk_0xAE06B9E39EBDE049(iParam0))
							{
								if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
								{
									if (!unk_0xA38BFCB05DBE439D(iParam0))
									{
										unk_0x2BB0EF9DE445EA13(iParam0);
									}
									if (unk_0xA38BFCB05DBE439D(iParam0))
									{
										unk_0x9B94F6169B0DAEFD(iParam0);
									}
									unk_0x4E65320BC9AD521C(iParam0, true);
									unk_0x8B18A80E8EB15510(iParam0, unk_0x9B0761B4C3EB8BC7(), 1000f, -1, 0, 0);
									unk_0xCBA6B2B569DCAFD8(iParam0, true);
									unk_0x2481907DEE6B85EA(&iParam0);
									iLocal_268[iLocal_56] = 1;
								}
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
		
		case 4:
			if (iLocal_360 == 0)
			{
				iLocal_360 = 1;
			}
			if (iLocal_292 == 0)
			{
				if (iLocal_293 == 0)
				{
					iLocal_63 = unk_0x578C4EF320340AF7();
					iLocal_293 = 1;
				}
				if (iLocal_293 == 1)
				{
					if (unk_0x578C4EF320340AF7() > iLocal_63 + 6000)
					{
						unk_0x53797676AD34A9AA(5);
						unk_0x34FEEAC2548C3789(1f);
						unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 2, 0);
						unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
						iLocal_292 = 1;
					}
				}
			}
			if (iLocal_58 == 0)
			{
				unk_0xEFBCE8F8316F89EA(5, iLocal_264, 1862763509);
				unk_0x4E65320BC9AD521C(iParam0, true);
				iLocal_58++;
			}
			if (iLocal_58 == 1)
			{
				iLocal_56 = 0;
				while (iLocal_56 <= 6)
				{
					if (unk_0xAE06B9E39EBDE049(iLocal_35[iLocal_56]))
					{
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_35[iLocal_56]))
						{
							if (func_177(unk_0x9B0761B4C3EB8BC7(), iLocal_35[iLocal_56], 1) < 15f)
							{
								if (func_197(iLocal_35[iLocal_56], 6))
								{
									if (unk_0xD5E14AF69C7C4DA9(iLocal_35[iLocal_56], unk_0x9B0761B4C3EB8BC7()))
									{
										if (iLocal_285[iLocal_56] == 0)
										{
											if (!unk_0xA38BFCB05DBE439D(iLocal_35[iLocal_56]))
											{
												unk_0x2BB0EF9DE445EA13(iLocal_35[iLocal_56]);
											}
											if (unk_0xA38BFCB05DBE439D(iLocal_35[iLocal_56]))
											{
												unk_0x9B94F6169B0DAEFD(iLocal_35[iLocal_56]);
											}
											unk_0x10EEEC3CDCEF0099(iLocal_35[iLocal_56], -1, unk_0x9B0761B4C3EB8BC7(), -1, 0);
											iLocal_285[iLocal_56] = 1;
											iLocal_284[iLocal_56] = 0;
											iLocal_280[iLocal_56] = 0;
											iLocal_75 = unk_0x578C4EF320340AF7();
										}
									}
									else if (unk_0x578C4EF320340AF7() > iLocal_75 + 300)
									{
										iLocal_284[iLocal_56] = 0;
									}
								}
								else if (iLocal_284[iLocal_56] == 0)
								{
									if (!unk_0xA38BFCB05DBE439D(iLocal_35[iLocal_56]))
									{
										unk_0x2BB0EF9DE445EA13(iLocal_35[iLocal_56]);
									}
									if (unk_0xA38BFCB05DBE439D(iLocal_35[iLocal_56]))
									{
										unk_0x9B94F6169B0DAEFD(iLocal_35[iLocal_56]);
									}
									unk_0x8B18A80E8EB15510(iLocal_35[iLocal_56], unk_0x9B0761B4C3EB8BC7(), 250f, -1, 0, 0);
									iLocal_284[iLocal_56] = 1;
									iLocal_285[iLocal_56] = 0;
								}
							}
							else if (iLocal_284[iLocal_56] == 0)
							{
								if (!unk_0xA38BFCB05DBE439D(iLocal_35[iLocal_56]))
								{
									unk_0x2BB0EF9DE445EA13(iLocal_35[iLocal_56]);
								}
								if (unk_0xA38BFCB05DBE439D(iLocal_35[iLocal_56]))
								{
									unk_0x9B94F6169B0DAEFD(iLocal_35[iLocal_56]);
								}
								unk_0x8B18A80E8EB15510(iLocal_35[iLocal_56], unk_0x9B0761B4C3EB8BC7(), 250f, -1, 0, 0);
								iLocal_284[iLocal_56] = 1;
								iLocal_285[iLocal_56] = 0;
							}
						}
					}
					iLocal_56++;
				}
			}
			break;
	}
}

int func_197(int iParam0, int iParam1)
{
	if (unk_0xAE06B9E39EBDE049(iParam0) && !unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), iParam1))
		{
			if (unk_0x2311EB213A0CB707(unk_0x460153A63B9477BC(), iParam0) || unk_0x5E5402F6D3B26AFB(unk_0x460153A63B9477BC(), iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_198()
{
	iLocal_37 = func_26(0);
	iLocal_38 = func_26(1);
	iLocal_39 = func_26(2);
	if (func_34(iLocal_37, 0))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_37))
		{
			if (!func_33(iLocal_37))
			{
				if (!func_200())
				{
					if (func_199(iLocal_37))
					{
						if (func_32(iLocal_37, 0))
						{
							unk_0x4F3C4F457D44BB0F(iLocal_37, true, 1);
							unk_0x4E65320BC9AD521C(iLocal_37, true);
							unk_0x9B94F6169B0DAEFD(iLocal_37);
							iLocal_350 = 0;
							iLocal_353 = 0;
							iLocal_356 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_350 == 0)
				{
					if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
					{
						iLocal_350 = 1;
					}
					else if (unk_0x47DBF174A0CB9D55(iLocal_37, 0))
					{
						if (!unk_0xE0B3BC41DDA88DF0(iLocal_37, unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 0))
						{
							iLocal_350 = 1;
						}
					}
				}
				if (iLocal_350 == 0)
				{
					if (func_200())
					{
						iLocal_350 = 1;
					}
				}
				if (iLocal_347 == 1)
				{
					if ((func_199(iLocal_37) && unk_0x1D2A3118784C0272(iLocal_37, 1)) && iLocal_350 == 0)
					{
						Local_94 = { unk_0x3E4D3CCC220BDFB1(iLocal_37, true) };
						unk_0xB65F86FFF1334E95(Local_94.x, Local_94.f_1, Local_92.x, Local_92.f_1);
						if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) == 0)
						{
							if (iLocal_353 == 0)
							{
								if (unk_0x71B5E9AB554C28B8(Local_94.x, Local_94.f_1, Local_92.x, Local_92.f_1))
								{
									unk_0x47107451B20C1093(iLocal_37, unk_0xA5D5B1042E8F47BD(iLocal_37, 0), Local_92, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_356 = 0;
									iLocal_353 = 1;
								}
							}
						}
						else if (unk_0xAE06B9E39EBDE049(unk_0xC2E2CC6CF95AF8A3(Local_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_356 == 0)
							{
								unk_0x63898068FDE8F8E4(iLocal_37, unk_0xA5D5B1042E8F47BD(iLocal_37, 0), unk_0xC2E2CC6CF95AF8A3(Local_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_353 = 0;
								iLocal_356 = 1;
							}
						}
						else if (iLocal_353 == 0)
						{
							if (unk_0x71B5E9AB554C28B8(Local_94.x, Local_94.f_1, Local_92.x, Local_92.f_1))
							{
								unk_0x47107451B20C1093(iLocal_37, unk_0xA5D5B1042E8F47BD(iLocal_37, 0), Local_92, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_356 = 0;
								iLocal_353 = 1;
							}
						}
					}
					else
					{
						iLocal_350 = 1;
					}
				}
				if (iLocal_350 == 1)
				{
					if (func_25(iLocal_37))
					{
						iLocal_350 = 0;
					}
				}
			}
		}
	}
	if (func_34(iLocal_39, 0))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_39))
		{
			if (!func_33(iLocal_39))
			{
				if (!func_200())
				{
					if (func_199(iLocal_39))
					{
						if (func_32(iLocal_39, 0))
						{
							unk_0x4F3C4F457D44BB0F(iLocal_39, true, 1);
							unk_0x4E65320BC9AD521C(iLocal_39, true);
							unk_0x9B94F6169B0DAEFD(iLocal_39);
							iLocal_352 = 0;
							iLocal_354 = 0;
							iLocal_357 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_352 == 0)
				{
					if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
					{
						iLocal_352 = 1;
					}
					else if (unk_0x47DBF174A0CB9D55(iLocal_39, 0))
					{
						if (!unk_0xE0B3BC41DDA88DF0(iLocal_39, unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 0))
						{
							iLocal_352 = 1;
						}
					}
				}
				if (iLocal_352 == 0)
				{
					if (func_200())
					{
						iLocal_352 = 1;
					}
				}
				if (iLocal_348 == 1)
				{
					if ((func_199(iLocal_39) && unk_0x1D2A3118784C0272(iLocal_39, 1)) && iLocal_352 == 0)
					{
						Local_94 = { unk_0x3E4D3CCC220BDFB1(iLocal_39, true) };
						unk_0xB65F86FFF1334E95(Local_94.x, Local_94.f_1, Local_92.x, Local_92.f_1);
						if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) == 0)
						{
							if (iLocal_354 == 0)
							{
								if (unk_0x71B5E9AB554C28B8(Local_94.x, Local_94.f_1, Local_92.x, Local_92.f_1))
								{
									unk_0x47107451B20C1093(iLocal_39, unk_0xA5D5B1042E8F47BD(iLocal_39, 0), Local_92, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_357 = 0;
									iLocal_354 = 1;
								}
							}
						}
						else if (unk_0xAE06B9E39EBDE049(unk_0xC2E2CC6CF95AF8A3(Local_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_357 == 0)
							{
								unk_0x63898068FDE8F8E4(iLocal_39, unk_0xA5D5B1042E8F47BD(iLocal_39, 0), unk_0xC2E2CC6CF95AF8A3(Local_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_354 = 0;
								iLocal_357 = 1;
							}
						}
						else if (iLocal_354 == 0)
						{
							if (unk_0x71B5E9AB554C28B8(Local_94.x, Local_94.f_1, Local_92.x, Local_92.f_1))
							{
								unk_0x47107451B20C1093(iLocal_39, unk_0xA5D5B1042E8F47BD(iLocal_39, 0), Local_92, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_357 = 0;
								iLocal_354 = 1;
							}
						}
					}
					else
					{
						iLocal_352 = 1;
					}
				}
				if (iLocal_352 == 1)
				{
					if (func_25(iLocal_39))
					{
						iLocal_352 = 0;
					}
				}
			}
		}
	}
	if (func_34(iLocal_38, 0))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_38))
		{
			if (!func_33(iLocal_38))
			{
				if (!func_200())
				{
					if (func_199(iLocal_38))
					{
						if (func_32(iLocal_38, 0))
						{
							unk_0x4F3C4F457D44BB0F(iLocal_38, true, 1);
							unk_0x4E65320BC9AD521C(iLocal_38, true);
							unk_0x9B94F6169B0DAEFD(iLocal_38);
							iLocal_351 = 0;
							iLocal_355 = 0;
							iLocal_358 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_351 == 0)
				{
					if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
					{
						iLocal_351 = 1;
					}
					else if (unk_0x47DBF174A0CB9D55(iLocal_38, 0))
					{
						if (!unk_0xE0B3BC41DDA88DF0(iLocal_38, unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 0))
						{
							iLocal_351 = 1;
						}
					}
				}
				if (iLocal_351 == 0)
				{
					if (func_200())
					{
						iLocal_351 = 1;
					}
				}
				if (iLocal_349 == 1)
				{
					if ((func_199(iLocal_38) && unk_0x1D2A3118784C0272(iLocal_38, 1)) && iLocal_351 == 0)
					{
						Local_94 = { unk_0x3E4D3CCC220BDFB1(iLocal_38, true) };
						unk_0xB65F86FFF1334E95(Local_94.x, Local_94.f_1, Local_92.x, Local_92.f_1);
						if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) == 0)
						{
							if (iLocal_355 == 0)
							{
								if (unk_0x71B5E9AB554C28B8(Local_94.x, Local_94.f_1, Local_92.x, Local_92.f_1))
								{
									unk_0x47107451B20C1093(iLocal_38, unk_0xA5D5B1042E8F47BD(iLocal_38, 0), Local_92, 4, 30f, 786468, 3f, 15f, 0);
									iLocal_358 = 0;
									iLocal_355 = 1;
								}
							}
						}
						else if (unk_0xAE06B9E39EBDE049(unk_0xC2E2CC6CF95AF8A3(Local_94, 200f, joaat("police3"), 32768)))
						{
							if (iLocal_358 == 0)
							{
								unk_0x63898068FDE8F8E4(iLocal_38, unk_0xA5D5B1042E8F47BD(iLocal_38, 0), unk_0xC2E2CC6CF95AF8A3(Local_94, 200f, joaat("police3"), 32768), 8, 40f, 262144, 300f, 1f, 1);
								iLocal_355 = 0;
								iLocal_358 = 1;
							}
						}
						else if (iLocal_355 == 0)
						{
							if (unk_0x71B5E9AB554C28B8(Local_94.x, Local_94.f_1, Local_92.x, Local_92.f_1))
							{
								unk_0x47107451B20C1093(iLocal_38, unk_0xA5D5B1042E8F47BD(iLocal_38, 0), Local_92, 4, 30f, 786468, 3f, 15f, 0);
								iLocal_358 = 0;
								iLocal_355 = 1;
							}
						}
					}
					else
					{
						iLocal_351 = 1;
					}
				}
				if (iLocal_351 == 1)
				{
					if (func_25(iLocal_38))
					{
						iLocal_351 = 0;
					}
				}
			}
		}
	}
}

int func_199(int iParam0)
{
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
		{
			if (unk_0xE0B3BC41DDA88DF0(iParam0, unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), 0) && unk_0x10D3F7E169A49C44(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0), -1, 0) == iParam0)
			{
				if (unk_0xAE06B9E39EBDE049(iLocal_33))
				{
					if (unk_0x80FF6C016CDB0FAF(iLocal_33, 0))
					{
						if ((unk_0xE0B3BC41DDA88DF0(iParam0, iLocal_33, 0) && unk_0x10D3F7E169A49C44(iLocal_33, -1, 0) == iParam0) && !unk_0xC2169C00B643278B(iLocal_33, Local_92, 3f, 3f, 3f, false, true, 0))
						{
							if (iParam0 == iLocal_37)
							{
								iLocal_347 = 1;
							}
							if (iParam0 == iLocal_39)
							{
								iLocal_348 = 1;
							}
							if (iParam0 == iLocal_38)
							{
								iLocal_349 = 1;
							}
							return 1;
						}
					}
				}
			}
		}
	}
	if (iParam0 == iLocal_37)
	{
		iLocal_347 = 0;
	}
	if (iParam0 == iLocal_39)
	{
		iLocal_348 = 0;
	}
	if (iParam0 == iLocal_38)
	{
		iLocal_349 = 0;
	}
	return 0;
}

bool func_200()
{
	return Global_22409;
}

void func_201()
{
	if (unk_0xAE06B9E39EBDE049(iLocal_33))
	{
		if (!unk_0x80FF6C016CDB0FAF(iLocal_33, 0))
		{
			func_204(3);
			return;
		}
		else
		{
			if (func_203(&iLocal_33))
			{
				func_204(2);
				return;
			}
			if (unk_0xAE06B9E39EBDE049(iLocal_32))
			{
				if (!unk_0x80FF6C016CDB0FAF(iLocal_32, 0))
				{
					func_204(1);
					return;
				}
				if (unk_0x80FF6C016CDB0FAF(iLocal_32, 0))
				{
					if (!unk_0xD3DD4CF5121550D3(iLocal_33))
					{
						if ((unk_0x1ADEE74BA60EE218(iLocal_32) || func_202(iLocal_32)) || func_203(&iLocal_32))
						{
							func_204(1);
							return;
						}
					}
				}
			}
		}
	}
	if (iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_32))
		{
			if (unk_0x80FF6C016CDB0FAF(iLocal_32, 0))
			{
				if (func_177(iLocal_32, unk_0x9B0761B4C3EB8BC7(), 1) > 600f)
				{
					func_204(5);
					return;
				}
			}
		}
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_40))
	{
		if (unk_0x5AEB5DDFFAD43CA5(iLocal_40))
		{
			func_204(6);
			return;
		}
	}
}

int func_202(int iParam0)
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

int func_203(int iParam0)
{
	if (unk_0x80FF6C016CDB0FAF(*iParam0, 0))
	{
		if (((unk_0xBCB2BD5C2E502335(*iParam0, 0, 7000) || unk_0xBCB2BD5C2E502335(*iParam0, 3, 30000)) || unk_0xBCB2BD5C2E502335(*iParam0, 2, 30000)) || unk_0xBCB2BD5C2E502335(*iParam0, 1, 40000))
		{
			return 1;
		}
	}
	return 0;
}

void func_204(int iParam0)
{
	iLocal_30 = iParam0;
	if (iLocal_28 != 6)
	{
		iLocal_28 = 6;
		iLocal_53 = 0;
	}
}

void func_205(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_111858.f_9081.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_111858.f_9081.f_99.f_58[iParam0] = iParam1;
}

void func_206()
{
	if (iLocal_28 == 5)
	{
		if (iLocal_360 == 0)
		{
			func_207(657);
		}
	}
}

void func_207(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	Global_61718 = 0;
	if (!Global_61942[iParam0 /*13*/] == 3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_73812)
	{
		if (Global_73813[iVar1 /*9*/] == iParam0)
		{
			bVar0 = true;
			Global_73813[iVar1 /*9*/].f_1 = 1;
			Global_73813[iVar1 /*9*/].f_2 = 0f;
			if (Global_73813[iVar1 /*9*/].f_3 == 2)
			{
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
	}
}

bool func_208(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_209()
{
	unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 0);
	unk_0x410A1E7AD7D5C774(joaat("packer"), false);
	unk_0x410A1E7AD7D5C774(joaat("phantom"), false);
	unk_0x296C8A46F264E8F7("FHPRB_START");
	unk_0x296C8A46F264E8F7("FHPRB_TRUCK");
	unk_0x296C8A46F264E8F7("FHPRB_COPS");
	unk_0x296C8A46F264E8F7("FHPRB_LOST");
	unk_0x296C8A46F264E8F7("FHPRB_STOP");
	unk_0x1E337EE68290597A(iLocal_42, 0);
	unk_0x1E337EE68290597A(iLocal_43, 0);
	unk_0x1E337EE68290597A(iLocal_44, 0);
	unk_0x1E337EE68290597A(iLocal_45, 0);
	unk_0x1E337EE68290597A(iLocal_46, 0);
	unk_0x1E337EE68290597A(iLocal_47, 0);
	if (unk_0xC21859D80F5EE520("SCRAP_SECURITY"))
	{
		if (unk_0xDA606CB5AFEE806C("SCRAP_SECURITY"))
		{
			unk_0x5291BAF5B96E07D9("SCRAP_SECURITY", false);
		}
	}
	unk_0x53797676AD34A9AA(5);
	if (unk_0x60C47897C07F44B1(iLocal_90))
	{
		unk_0x830F38EF3826B066(iLocal_90);
	}
	if (unk_0x60C47897C07F44B1(iLocal_91))
	{
		unk_0x830F38EF3826B066(iLocal_91);
	}
	unk_0xD39E529EBE5DB04F();
}

void func_210()
{
	int iVar0;
	
	if (unk_0x8DC2EFD1CECAA468("buddyDeathResponse"))
	{
		start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_111858.f_9081 || func_208(0))
	{
		if (!func_211())
		{
			iVar0 = func_13();
			if (iVar0 != -1)
			{
				if (!func_7(iVar0))
				{
					return;
				}
				unk_0xBE20AB8238688965(&(Global_89707[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_12();
		}
	}
}

int func_211()
{
	if (((Global_98955 == 13 || Global_98955 == 10) || Global_98955 == 11) || Global_98955 == 12)
	{
		return 0;
	}
	return 1;
}

