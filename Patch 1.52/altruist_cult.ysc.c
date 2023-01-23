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
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	struct<3> Local_51[16];
	float fLocal_52[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_55 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	float fLocal_57 = 0f;
	struct<3> Local_58 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	float fLocal_60 = 0f;
	struct<3> Local_61 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	float fLocal_63 = 0f;
	struct<3> Local_64 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	float fLocal_66 = 0f;
	struct<3> Local_67 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	float fLocal_69 = 0f;
	struct<3> Local_70 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	float fLocal_72 = 0f;
	struct<3> Local_73 = { 0, 0, 0 } ;
	struct<3> Local_74 = { 0, 0, 0 } ;
	float fLocal_75 = 0f;
	bool bLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	bool bLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	bool bLocal_84 = 0;
	int iLocal_85 = 0;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	float fLocal_88 = 0f;
	float fLocal_89 = 0f;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97[2] = { 0, 0 };
	int iLocal_98[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	var uLocal_102[4] = { 0, 0, 0, 0 };
	int iLocal_103[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_104 = 0;
	var uLocal_105[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
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
	var uLocal_132 = 8;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 4;
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
	var uLocal_151 = 4;
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
	var uLocal_166 = 4;
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
	var uLocal_181 = 4;
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
	var uLocal_196 = 4;
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
	var uLocal_211 = 4;
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
	var uLocal_226 = 4;
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
	var uLocal_241 = 4;
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
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	char* sLocal_262 = NULL;
	char* sLocal_263 = NULL;
	char* sLocal_264 = NULL;
	char* sLocal_265 = NULL;
	char* sLocal_266 = NULL;
	char* sLocal_267 = NULL;
	char* sLocal_268 = NULL;
	char* sLocal_269 = NULL;
	int iLocal_270 = 0;
	var uLocal_271 = 16;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
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
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
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
	var uLocal_321 = 0;
	var uLocal_322 = 0;
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
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
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
	var uLocal_363 = 0;
	var uLocal_364 = 0;
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
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
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
	var uLocal_405 = 0;
	var uLocal_406 = 0;
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
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
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
	int iLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 5;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 5;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	
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
	fLocal_46 = -1f;
	Local_53 = { -1109.213f, 4914.744f, 216.101f };
	Local_54 = { -1034.6f, 4918.6f, 205.9f };
	Local_55 = { -1066.963f, 4873.13f, 207.3281f };
	Local_56 = { -1112.946f, 4986.957f, 241.133f };
	fLocal_57 = 72.3125f;
	Local_58 = { -1138.386f, 4872.04f, 207.5488f };
	Local_59 = { -1091.959f, 4983.27f, 241.1698f };
	fLocal_60 = 57.8125f;
	Local_61 = { -1171.648f, 4888.658f, 211.0756f };
	Local_62 = { -1137.907f, 4926.572f, 240.999f };
	fLocal_63 = 17.9375f;
	Local_64 = { -1177.981f, 4903.231f, 212.477f };
	Local_65 = { -1153.398f, 4902.631f, 241.155f };
	fLocal_66 = 17.9375f;
	Local_67 = { -1175.693f, 4904.839f, 207.5207f };
	Local_68 = { -1142.08f, 4985.32f, 241.2887f };
	fLocal_69 = 36.375f;
	Local_70 = { -1106.212f, 4860.086f, 206.1207f };
	Local_71 = { -1105.016f, 4873.854f, 241.1453f };
	fLocal_72 = 11.5625f;
	Local_73 = { -1044.268f, 4916.587f, 209.8365f };
	Local_74 = { -1063.605f, 4972.88f, 241.1299f };
	fLocal_75 = 12.875f;
	iLocal_96 = 4;
	iLocal_261 = "REPLAY_TMG";
	sLocal_262 = "CMN_TDIED";
	if (unk_0xED06FD5709A59F02(26))
	{
		func_196();
	}
	if (unk_0x7E9185F4399AF01D())
	{
		unk_0xD39E529EBE5DB04F();
	}
	while (true)
	{
		wait(0);
		if (unk_0x1116855A2A7A342C() || iLocal_77)
		{
			unk_0x34FEEAC2548C3789(0f);
			switch (iLocal_50)
			{
				case 0:
					if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
					{
						if (Global_111858.f_24991.f_5 >= iLocal_96 && !func_195())
						{
							iLocal_50 = 2;
						}
						func_192();
						func_189();
					}
					break;
				
				case 1:
					unk_0xDC54E6DC6372260F(unk_0x460153A63B9477BC());
					if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
					{
						if (timera() > 2000)
						{
							if (iLocal_91 == 1)
							{
								func_188();
							}
							else if (iLocal_91 == 2)
							{
								func_159();
							}
						}
						if (timera() > 1300)
						{
							if (iLocal_93 < 3)
							{
								func_158();
							}
							else
							{
								func_157();
							}
						}
						if (iLocal_78)
						{
							func_144(26, 1);
							iLocal_78 = 0;
							iLocal_50 = 0;
						}
					}
					break;
				
				case 2:
					unk_0xDC54E6DC6372260F(unk_0x460153A63B9477BC());
					if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
					{
						func_116();
					}
					unk_0xDC5C33A98881772F(Global_40754[9 /*31*/], 0, 0, 1);
					unk_0xDC5C33A98881772F(Global_40754[10 /*31*/], 0, 0, 1);
					break;
				
				case 4:
					if (!unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
					{
						iLocal_50 = 3;
						break;
					}
					bLocal_79 = false;
					unk_0x34FEEAC2548C3789(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_98)
					{
						if (unk_0x5AEB5DDFFAD43CA5(iLocal_98[iVar0]))
						{
							if (unk_0x8F678487EEBD8CE4(uLocal_105[iVar0]))
							{
								unk_0x93370FA10F15BE44(&(uLocal_105[iVar0]));
							}
						}
						else
						{
							if (unk_0x4FCA2ADE072802D1(iLocal_98[iVar0]))
							{
								if (unk_0x8F678487EEBD8CE4(uLocal_105[iVar0]))
								{
									unk_0x93370FA10F15BE44(&(uLocal_105[iVar0]));
								}
							}
							else if (unk_0x910DFF8E55ABB8EC(iLocal_98[iVar0], unk_0x9B0761B4C3EB8BC7(), 30f, 30f, 30f, 0, 1, 0))
							{
								if (!func_115())
								{
									if (iLocal_95 < unk_0x578C4EF320340AF7())
									{
										iVar1 = unk_0x344C570D6F8700DF(0, 3);
										if (iVar1 == 0)
										{
											func_100(&uLocal_271, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
										}
										else if (iVar1 == 1)
										{
											func_99(&uLocal_271, 1, iLocal_98[iVar0], "ACULTMember1", 0, 1);
											func_100(&uLocal_271, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
										}
										else if (iVar1 == 2)
										{
											func_99(&uLocal_271, 2, iLocal_98[iVar0], "ACULTMember2", 0, 1);
											func_100(&uLocal_271, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
										}
										iLocal_95 = (unk_0x578C4EF320340AF7() + unk_0x344C570D6F8700DF(4500, 6000));
									}
								}
							}
							bLocal_79 = true;
						}
						iVar0++;
					}
					if (!bLocal_79)
					{
						func_63();
					}
					break;
				
				case 3:
					if (!iLocal_77)
					{
						uLocal_109 = func_62();
						if (!unk_0x95EF219D38B20CFF(uLocal_109))
						{
							break;
						}
						func_61(&uLocal_114, 0);
						iLocal_77 = 1;
					}
					if (func_32(&uLocal_114, &uLocal_120, &uLocal_109, iLocal_261, sLocal_262, &bLocal_76, 78))
					{
						iLocal_94 = 0;
						unk_0xF4F95D084B662764(iLocal_270);
						unk_0x9DED7A5A35006D61(iLocal_108);
						iVar0 = 0;
						while (iVar0 < iLocal_98)
						{
							if (unk_0xAE06B9E39EBDE049(iLocal_98[iVar0]))
							{
								unk_0x586DDC617E714637(&(iLocal_98[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_103)
						{
							if (unk_0xAE06B9E39EBDE049(iLocal_103[iVar0]))
							{
								unk_0x315F7D8C33F0AB37(&(iLocal_103[iVar0]));
							}
							iVar0++;
						}
						if (unk_0x40397A9A17EEC1C5(iLocal_106))
						{
							unk_0x856549C07003344B(iLocal_106, false);
						}
						if (unk_0xAE06B9E39EBDE049(iLocal_101))
						{
							unk_0x315F7D8C33F0AB37(&iLocal_101);
						}
						if (unk_0xAE06B9E39EBDE049(iLocal_101))
						{
							unk_0x315F7D8C33F0AB37(&iLocal_101);
						}
						if (bLocal_76)
						{
							func_11();
							func_3(0);
							func_1(1);
							iLocal_77 = 0;
							iLocal_50 = 2;
						}
						else
						{
							iLocal_77 = 0;
							func_196();
						}
					}
					break;
			}
		}
		else if (bLocal_81)
		{
		}
		else
		{
			func_196();
		}
	}
}

void func_1(bool bParam0)
{
	if (bParam0)
	{
		unk_0x0B5FDCC374F46B9E(0);
		unk_0x3A73329837AFF65B(1);
		unk_0xA47631D02B6634DB(0);
		func_2(1);
		Global_94213 = 1;
	}
	else
	{
		unk_0x0B5FDCC374F46B9E(1);
		unk_0x3A73329837AFF65B(0);
		unk_0xA47631D02B6634DB(1);
		func_2(0);
		Global_94213 = 0;
	}
}

void func_2(bool bParam0)
{
	if ((Global_41631 == 9 || Global_41631 == 10) || Global_41631 == 5)
	{
		Global_110507 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_110507 = 0;
	}
}

void func_3(bool bParam0)
{
	if (bParam0)
	{
		func_10();
		if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
		{
			unk_0xBE20AB8238688965(&Global_7552, 16);
		}
		Global_19681.f_1 = 1;
		if (func_9(0))
		{
			func_4(0);
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

void func_4(int iParam0)
{
	if (func_8())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_7())
		{
			func_6(1, 1);
		}
		else
		{
			func_6(0, 0);
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
	if (!func_5())
	{
		Global_19681.f_1 = 3;
	}
}

int func_5()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_6(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_9(0))
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

bool func_7()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

bool func_8()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

int func_9(int iParam0)
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

void func_10()
{
	if (Global_19681.f_1 == 9 || Global_19681.f_1 == 10)
	{
		Global_21058 = 0;
		Global_21054 = 1;
	}
}

void func_11()
{
	func_22();
	func_14(0, 1);
	func_12(0, 1);
}

void func_12(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_14(0, 0);
		unk_0x0A794A8277A63161("DeathFailOut", 0, 0);
		unk_0xBE20AB8238688965(&iLocal_48, 1);
		func_13(1, 2, 0);
		unk_0xABD63081455B01CA(2);
	}
	else
	{
		if (unk_0xCE990E643CD9D0E5(iLocal_48, 1) || iParam1)
		{
			unk_0x50E637E6CAC936B2("DeathFailOut");
			func_13(0, 2, 1);
			unk_0xABD63081455B01CA(0);
		}
		unk_0xD2459066EA58CE43(&iLocal_48, 1);
	}
}

void func_13(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&iLocal_48, 2);
		if (!unk_0x25DDB354A40FFCDB())
		{
			if (iParam1 == 1)
			{
				unk_0x01BFF6CEF1167310(0.2f);
			}
			else
			{
				unk_0x01BFF6CEF1167310(0.075f);
			}
		}
	}
	else
	{
		if (unk_0xCE990E643CD9D0E5(iLocal_48, 2) || iParam2)
		{
			if (!unk_0x25DDB354A40FFCDB())
			{
				unk_0x01BFF6CEF1167310(1f);
			}
		}
		unk_0xD2459066EA58CE43(&iLocal_48, 2);
	}
}

void func_14(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_15())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!unk_0xCE990E643CD9D0E5(iLocal_48, 0) || iParam1)
		{
			unk_0x0A794A8277A63161(sVar0, 0, 0);
			unk_0xBE20AB8238688965(&iLocal_48, 0);
			func_13(1, 1, 0);
			unk_0xABD63081455B01CA(1);
		}
	}
	else
	{
		if (unk_0xCE990E643CD9D0E5(iLocal_48, 0) || iParam1)
		{
			unk_0x50E637E6CAC936B2(sVar0);
			func_13(0, 1, 1);
			unk_0xABD63081455B01CA(0);
		}
		unk_0xD2459066EA58CE43(&iLocal_48, 0);
	}
}

int func_15()
{
	func_16();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_16()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_20(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_19(unk_0x9B0761B4C3EB8BC7());
			if (func_18(iVar0) && (!func_17(14) || Global_110809))
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

bool func_17(int iParam0)
{
	return Global_41631 == iParam0;
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

void func_22()
{
	iLocal_48 = 0;
	iLocal_49 = 0;
	func_23(0, 1, 1, 0, 0, 0, 0);
	func_3(1);
}

void func_23(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x967251943AD606D5(unk_0x460153A63B9477BC(), 0);
		unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 1);
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 1);
		func_31(1);
		unk_0x86529CF5C6F9D6AE();
		unk_0x6D3823E5CADC313B();
		if (Global_19681.f_1 > 3 && !bParam6)
		{
			if (unk_0x6B12213471F330A3())
			{
				unk_0xBE4122AC23440E7D(false);
			}
			if (!func_5())
			{
				Global_19681.f_1 = 3;
			}
			Global_21005 = 5;
		}
		func_30(1, iParam3, iParam2, 0);
		Global_61723 = 1;
		Global_74033 = 1;
		Global_76831 = 1;
	}
	else
	{
		func_31(0);
		unk_0x51C14866CB8A57BF();
		Global_61723 = 0;
		if (bParam1)
		{
			unk_0x86A985A804621EB7();
		}
		unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 0);
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 0);
		func_30(0, iParam3, iParam2, 0);
		if (unk_0x25DDB354A40FFCDB())
		{
			if (((((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !func_28(unk_0x460153A63B9477BC())) && !func_25(unk_0x460153A63B9477BC(), 0)) && !func_24()) && !bParam4) && !bParam5)
			{
				unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), 0);
			}
		}
		else if (((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !func_28(unk_0x460153A63B9477BC())) && !bParam4) && !bParam5)
		{
			unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), 0);
		}
		Global_76831 = 0;
	}
}

bool func_24()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 14);
}

bool func_25(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_26(-1, 0) == 8;
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

int func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_27();
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

int func_27()
{
	return Global_1312763;
}

int func_28(int iParam0)
{
	if (func_25(iParam0, 0))
	{
		return 1;
	}
	if (func_29())
	{
		if (iParam0 == unk_0x460153A63B9477BC())
		{
			return 1;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_29()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

int func_30(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (unk_0x93914DE00496FC78() != iParam0 && uParam2)
		{
			unk_0x6D883C27212BF370(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_31(int iParam0)
{
	if (iParam0 == 1)
	{
		unk_0xBE20AB8238688965(&Global_7551, 13);
	}
	else
	{
		unk_0xD2459066EA58CE43(&Global_7551, 13);
	}
}

int func_32(var uParam0, var uParam1, var uParam2, int iParam3, char* sParam4, int iParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			unk_0x17E478571720218F("DEATH_SCENE");
			unk_0xC4CC25B68A91D144(-1, "ScreenFlash", "WastedSounds", 1);
			func_60(&(uParam0->f_1));
			func_22();
			func_59(uParam1, (0.15f * 0.075f), 0.5f);
			unk_0xFF8E7A064055ECA6(1);
			break;
		
		case 1:
			if (func_57() || unk_0x03DB5C6AABF8DA46())
			{
				*uParam0 = 2;
			}
			if (!func_56(uParam0->f_4, 4))
			{
				if (unk_0x8B917081F9836EDD("OFFMISSION_WASTED", 0, -1))
				{
					unk_0xC4CC25B68A91D144(-1, "Bed", "WastedSounds", 1);
					func_54(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(timera()) > (1500f * 0.2f))
			{
				if (!func_56(uParam0->f_4, 2))
				{
					unk_0xC4CC25B68A91D144(-1, "TextHit", "WastedSounds", 1);
					func_54(&(uParam0->f_4), 2);
				}
				func_33(uParam2, uParam1, iParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_33(uParam2, uParam1, iParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_14(0, 1);
				func_12(0, 1);
				func_22();
				if (*iParam5)
				{
					unk_0x2D683744B695AA81(1);
				}
				else if (!uParam0->f_5)
				{
					func_2(0);
				}
				unk_0xFF8E7A064055ECA6(0);
				unk_0x3A73329837AFF65B(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
			{
				unk_0x0B5FDCC374F46B9E(1);
				func_14(0, 1);
				func_12(0, 1);
				unk_0xFA07F8BEBDAAFBA8("DEATH_SCENE");
				unk_0xFF8E7A064055ECA6(0);
				return 1;
			}
			break;
		
		case 4:
			unk_0xFF8E7A064055ECA6(0);
			return 1;
			break;
	}
	return 0;
}

int func_33(var uParam0, var uParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!unk_0x03DB5C6AABF8DA46() || unk_0x5DA78AD6801A0523())
			{
				unk_0x1D40553EDD51A1B8(2500);
				unk_0x0037AEC7A79CCCB4();
			}
			if (bParam9)
			{
				unk_0xFF8E7A064055ECA6(1);
			}
			unk_0x01BFF6CEF1167310(0.2f);
			if (func_53(iParam5, 4))
			{
				if (unk_0x8B917081F9836EDD("generic_failed", 0, -1))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			unk_0x830F007E19C63E14(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			unk_0xB23270F3D5E62FDE("STRING");
			unk_0x7006FC1051C85FCA(6);
			unk_0x6A826E35A3096ED0(iParam2);
			unk_0x2042E9CA4306F725();
			func_52(sParam3);
			unk_0xAD291B8F75D737AD(100);
			unk_0xF1B28F753235CE2A(true);
			unk_0xF4712E16A4C164FE();
			if (func_53(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x830F007E19C63E14(*uParam0, "TRANSITION_UP");
					unk_0x49B9B8101B158AEE(uParam1->f_134);
					unk_0xE1FDD153F5858534();
					uParam1->f_136 = 1;
				}
			}
			if (!func_53(iParam5, 1))
			{
				unk_0xABAEEAE8870E046D(0);
			}
			func_51(&(uParam1->f_10), 0, 1, 1, 1);
			func_50(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_50(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_53(iParam5, 4))
			{
				unk_0xC4CC25B68A91D144(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_53(iParam5, 8))
			{
				switch (func_15())
				{
					case 0:
						unk_0x0A794A8277A63161("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						unk_0x0A794A8277A63161("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						unk_0x0A794A8277A63161("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_49(&(uParam1->f_1)))
			{
				func_48(&(uParam1->f_1));
			}
			if (func_53(iParam5, 2))
			{
				if (!func_49(&(uParam1->f_4)))
				{
					func_48(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			unk_0xEF408E7129CB009B();
			if (func_53(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					unk_0x830F007E19C63E14(*uParam0, "TRANSITION_UP");
					unk_0x49B9B8101B158AEE(uParam1->f_134);
					unk_0xE1FDD153F5858534();
					uParam1->f_136 = 1;
				}
			}
			unk_0x9D15035C6653D1B1(iParam6);
			func_46(uParam0, 0, 0);
			if (!func_53(iParam5, 16) && (func_44(&(uParam1->f_1)) >= uParam1->f_135 || unk_0x03DB5C6AABF8DA46()))
			{
				func_38(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				unk_0x670AE643E0B07F1D();
				if (unk_0xC27AEE8B64EE0F8D(2, 201))
				{
					uParam1->f_138 = 1;
					unk_0xC4CC25B68A91D144(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_53(iParam5, 1))
					{
						unk_0x78BD44DB7D1A8D59(0);
					}
					func_37(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (unk_0xC27AEE8B64EE0F8D(2, 202))
				{
					uParam1->f_138 = 0;
					unk_0xC4CC25B68A91D144(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_53(iParam5, 1))
					{
						unk_0x78BD44DB7D1A8D59(0);
					}
					func_37(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_53(iParam5, 2))
			{
				if (func_44(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					unk_0xC4CC25B68A91D144(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_53(iParam5, 1))
					{
						unk_0x78BD44DB7D1A8D59(0);
					}
					func_37(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_46(uParam0, 0, 0);
			unk_0x01BFF6CEF1167310(1f);
			if (uParam1->f_138 || !((unk_0xF005CCA4263DF67F("stunt_plane_races", unk_0x6C5C6B207AA78253()) || unk_0xF005CCA4263DF67F("pilot_school", unk_0x6C5C6B207AA78253())) || (unk_0xF005CCA4263DF67F("bj", unk_0x6C5C6B207AA78253()) && unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))))
			{
				unk_0xFD45D90342D2A0CD(2500);
			}
			if (func_53(iParam5, 64) && uParam1->f_138)
			{
				unk_0x1D40553EDD51A1B8(500);
			}
			func_34(&(uParam1->f_4));
			if (bParam9)
			{
				unk_0xFF8E7A064055ECA6(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_44(&(uParam1->f_4)) <= 0.1f)
			{
				func_46(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_34(int iParam0)
{
	func_35(iParam0, 0f);
}

void func_35(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_36(unk_0xCE990E643CD9D0E5(*iParam0, 4)) - fParam1);
	unk_0xBE20AB8238688965(iParam0, 1);
	unk_0xD2459066EA58CE43(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_36(bool bParam0)
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

void func_37(var uParam0)
{
	if (*uParam0 != 0)
	{
		unk_0x2E352DDBBF674246(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

void func_38(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)
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
	if (!func_43(uParam0))
	{
		return;
	}
	unk_0xEF408E7129CB009B();
	unk_0x9D15035C6653D1B1(iParam2);
	if (!func_53(uParam0->f_1, 256) || (func_53(uParam0->f_1, 8192) && unk_0x628AF533B14EF310(2)))
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
			unk_0xF1B28F753235CE2A(func_53(uParam0->f_1, 4096));
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
							func_42(sVar3);
						}
						iVar7++;
					}
					if (!unk_0x7BCC91F3C1CF24E8(uParam0->f_2[iVar6 /*15*/]))
					{
						func_52(uParam0->f_2[iVar6 /*15*/]);
					}
					if (unk_0xF8EDFF98A9C94C74())
					{
						if (func_53(uParam0->f_1, 4096))
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
		fVar8 = func_41(bParam4, func_41(func_53(uParam0->f_1, 32), 1f, 0f), -1f);
		unk_0x830F007E19C63E14(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		unk_0x49B9B8101B158AEE(fVar8);
		unk_0xE1FDD153F5858534();
		unk_0x830F007E19C63E14(*uParam0, "SET_BACKGROUND_COLOUR");
		unk_0x49B9B8101B158AEE(0f);
		unk_0x49B9B8101B158AEE(0f);
		unk_0x49B9B8101B158AEE(0f);
		unk_0x49B9B8101B158AEE(80f);
		unk_0xE1FDD153F5858534();
		func_40(&(uParam0->f_1), 256);
		func_39(&(uParam0->f_1), 128);
	}
	unk_0x37FC7E88C7659D33(*uParam0, 255, 255, 255, 0, 0);
}

void func_39(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_40(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_41(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_42(char* sParam0)
{
	unk_0x54AED56A452DCB4F(sParam0);
}

int func_43(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (unk_0x95EF219D38B20CFF(*uParam0))
		{
			func_40(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

float func_44(var uParam0)
{
	if (func_49(uParam0))
	{
		if (func_45(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_36(unk_0xCE990E643CD9D0E5(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_45(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 2);
}

int func_46(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_49(&(uParam0->f_2)))
	{
		func_34(&(uParam0->f_2));
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
	if (func_44(&(uParam0->f_2)) * 1000f) > to_float(uParam0->f_1)
	{
		func_47(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

void func_47(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_48(int iParam0)
{
	if (!func_49(iParam0))
	{
		func_34(iParam0);
	}
}

bool func_49(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 1);
}

int func_50(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_51(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = unk_0x940C9218621394EA("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_40(&(uParam0->f_1), 32);
	}
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		func_40(&(uParam0->f_1), 1);
		if (bParam2)
		{
			unk_0x331FC4694C14FA44(*uParam0, 1);
		}
	}
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (bParam3)
		{
			func_40(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_40(&(uParam0->f_1), 8192);
	}
}

void func_52(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

bool func_53(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_54(var uParam0, int iParam1)
{
	func_55(uParam0, iParam1);
}

void func_55(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_56(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_57()
{
	if (!unk_0xCE990E643CD9D0E5(iLocal_48, 0) && !unk_0xCE990E643CD9D0E5(iLocal_48, 1))
	{
		settimera(0);
		func_14(1, 0);
	}
	if (!unk_0x3EBB66F936A3436E())
	{
		unk_0xB80B2936A29B2666();
	}
	unk_0x779660A9E5364C4D(2, 199, 1);
	unk_0x779660A9E5364C4D(0, 59, 1);
	unk_0x779660A9E5364C4D(0, 60, 1);
	unk_0x779660A9E5364C4D(0, 37, 1);
	unk_0x779660A9E5364C4D(0, 25, 1);
	unk_0x813A2EEC0EE60852();
	if (IntToFloat(timera()) > (1500f * 0.2f))
	{
		if (!unk_0xCE990E643CD9D0E5(iLocal_48, 1))
		{
			func_12(1, 0);
			settimerb(0);
		}
		else if (IntToFloat(timerb()) > (1500f * 0.075f) || unk_0x03DB5C6AABF8DA46())
		{
			if (!unk_0x03DB5C6AABF8DA46())
			{
				if (!unk_0x5DA78AD6801A0523())
				{
					unk_0x1D40553EDD51A1B8(1500);
				}
			}
			else if (iLocal_49 == 0)
			{
				iLocal_49 = unk_0x578C4EF320340AF7() + 1000;
				if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
				{
					unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
				}
				func_13(0, 2, 1);
				func_23(1, 1, 1, 0, 0, 0, 0);
				func_3(1);
				unk_0x80E2CC5FD4FD578B(0);
				unk_0x405677AE50A393A8(0);
				unk_0xD289B55B6AADBA10(1);
				unk_0xB80B2936A29B2666();
				if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
				{
					unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
				}
				func_14(0, 0);
				func_58(0);
			}
			else if (unk_0x578C4EF320340AF7() < iLocal_49)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!unk_0xCE990E643CD9D0E5(iLocal_48, 3))
			{
				unk_0x73D73FA241EA4AB7(1);
				unk_0xBE20AB8238688965(&iLocal_48, 3);
			}
		}
		else if (unk_0xCE990E643CD9D0E5(iLocal_48, 3))
		{
			unk_0x73D73FA241EA4AB7(0);
			unk_0xD2459066EA58CE43(&iLocal_48, 3);
		}
	}
}

void func_59(var uParam0, float fParam1, float fParam2)
{
	if (func_49(&(uParam0->f_1)))
	{
		func_47(&(uParam0->f_1));
	}
	if (func_49(&(uParam0->f_4)))
	{
		func_47(&(uParam0->f_4));
	}
	func_37(&(uParam0->f_10));
	uParam0->f_134 = fParam1;
	uParam0->f_135 = fParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_60(int iParam0)
{
	if (!func_49(iParam0))
	{
		func_48(iParam0);
	}
	else
	{
		func_34(iParam0);
	}
}

void func_61(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	unk_0x8B917081F9836EDD("OFFMISSION_WASTED", 0, -1);
}

var func_62()
{
	return unk_0x5DEA4192B46CB99B("MP_BIG_MESSAGE_FREEMODE");
}

void func_63()
{
	if (!iLocal_80)
	{
		unk_0x309C0E6FCCD30F19("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		Global_111858.f_24991.f_5 = 1000;
		unk_0x03E64CE7CB46657B(64);
		Global_111858.f_20560.f_472 = 54;
		uLocal_259 = unk_0x5DEA4192B46CB99B("MIDSIZED_MESSAGE");
		func_98(1);
		while (!unk_0x95EF219D38B20CFF(uLocal_259))
		{
			wait(0);
		}
		unk_0x830F007E19C63E14(uLocal_259, "SHOW_SHARD_MIDSIZED_MESSAGE");
		func_52("CULT_PASS");
		unk_0xF4712E16A4C164FE();
		while (!func_97())
		{
			wait(0);
		}
		func_96();
		settimera(0);
		unk_0xC4CC25B68A91D144(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
		iLocal_80 = 1;
	}
	unk_0x37FC7E88C7659D33(uLocal_259, 255, 255, 255, 255, 0);
	if (!iLocal_82)
	{
		if (timera() > 9500)
		{
			unk_0x830F007E19C63E14(uLocal_259, "SHARD_ANIM_OUT");
			unk_0xAD291B8F75D737AD(1);
			unk_0x49B9B8101B158AEE(0.33f);
			unk_0xE1FDD153F5858534();
			iLocal_82 = 1;
		}
	}
	if (timera() > 10000)
	{
		if (unk_0x95EF219D38B20CFF(uLocal_259))
		{
			unk_0x2E352DDBBF674246(&uLocal_259);
			func_98(0);
		}
		while (unk_0x272784C60C397DB6(func_95(unk_0x460153A63B9477BC()), Local_53, 1) < 209f && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			wait(0);
		}
		func_64(18);
		func_196();
	}
}

void func_64(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_93();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_92())
	{
		func_70(iParam0);
		unk_0x694F632EFD1F47D0(0, 0);
		Global_111849 = unk_0x578C4EF320340AF7();
		func_69(30000);
		StringCopy(&cVar0, func_68(Global_111847, 1), 64);
		if (func_67(Global_111847) > 0)
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
	func_66(&Global_31027);
	Global_111848 = 0;
	func_65(-1);
}

void func_65(int iParam0)
{
	Global_111847 = iParam0;
}

void func_66(var uParam0)
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

int func_67(int iParam0)
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

char* func_68(int iParam0, bool bParam1)
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

void func_69(int iParam0)
{
	Global_42182 = (unk_0x578C4EF320340AF7() + iParam0);
}

void func_70(int iParam0)
{
	func_71(iParam0, 0, func_91(iParam0));
}

void func_71(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_90();
	func_81(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_80(iParam0, &uVar0);
	Var1 = { func_72(&uVar0) };
}

struct<16> func_72(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_79(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_78(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_77(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_76(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_75(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_73(*uParam0), 64);
	return Var0;
}

int func_73(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_74(unk_0xCE990E643CD9D0E5(iParam0, 31), -1, 1)) + 2011;
}

int func_74(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_75(var uParam0)
{
	return uParam0 & 15;
}

int func_76(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_77(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_78(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_79(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

void func_80(int iParam0, var uParam1)
{
	Global_111858.f_24991.f_43[iParam0] = *uParam1;
}

void func_81(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_73(*uParam0);
	iVar1 = func_75(*uParam0);
	iVar2 = func_76(*uParam0);
	iVar3 = func_79(*uParam0);
	iVar4 = func_78(*uParam0);
	iVar5 = func_77(*uParam0);
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
	iVar6 = func_89(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_89(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_82(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_82(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_88(uParam0, iParam1);
	func_87(uParam0, iParam2);
	func_86(uParam0, iParam3);
	func_85(uParam0, iParam5);
	func_84(uParam0, iParam4);
	func_83(uParam0, iParam6);
}

void func_83(var uParam0, int iParam1)
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

void func_84(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_75(*uParam0);
	iVar1 = func_73(*uParam0);
	if (iParam1 < 1 || iParam1 > func_89(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_85(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_86(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_87(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_88(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_89(int iParam0, int iParam1)
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

var func_90()
{
	var uVar0;
	
	func_88(&uVar0, unk_0x1D3A3697182AD8B3());
	func_87(&uVar0, unk_0x81F2E25F8C019191());
	func_86(&uVar0, unk_0x1F596C965B00E290());
	func_84(&uVar0, unk_0x371CFD525753F70C());
	func_85(&uVar0, unk_0xF225116F449A5CC6());
	func_83(&uVar0, unk_0x2E48CFA70ABFC06A());
	return uVar0;
}

int func_91(int iParam0)
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

int func_92()
{
	if ((Global_111847 == func_93() && unk_0xA706863F1E1DD66C()) && Global_111848)
	{
		return 1;
	}
	return 0;
}

int func_93()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x6C5C6B207AA78253(), 64);
	uVar1 = func_94(Var0);
	return uVar1;
}

int func_94(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

Vector3 func_95(int iParam0)
{
	return unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iParam0), 0);
}

void func_96()
{
	Global_31205 = 0;
	Global_31206 = 0;
	Global_31208 = 0;
	Global_31209 = 0;
	Global_31210 = 0;
}

int func_97()
{
	return 1;
}

void func_98(int iParam0)
{
	Global_77093 = iParam0;
	Global_77094 = iParam0;
}

void func_99(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_100(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_114(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_101(sParam2, iParam3, 0);
}

int func_101(char* sParam0, int iParam1, bool bParam2)
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
					func_113();
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
		if (func_112(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_111();
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
				func_110();
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
				if (func_109())
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
			if (func_5())
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
			func_108();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_107();
		func_102();
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
		func_113();
	}
	return 0;
}

void func_102()
{
	if (!func_103())
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

int func_103()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (unk_0x460153A63B9477BC() == func_106())
	{
		return 0;
	}
	if (func_104(unk_0x460153A63B9477BC()))
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

bool func_104(int iParam0)
{
	return func_105(iParam0, 20);
}

bool func_105(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_106()
{
	return -1;
}

void func_107()
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

void func_108()
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

int func_109()
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

void func_110()
{
	if (func_17(14))
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
		Global_19681 = func_15();
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

void func_111()
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

bool func_112(int iParam0, int iParam1)
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

void func_113()
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

void func_114(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

int func_115()
{
	if (Global_21005 != 0 || unk_0x6A5CC4A2C9D9ED8D())
	{
		return 1;
	}
	return 0;
}

void func_116()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iLocal_94)
	{
		case 0:
			unk_0xC2CB0559CFDC9B5A("THUNDER", 20f);
			if (!unk_0xFFDFD8490027DBA5())
			{
				unk_0x85D9FC15836825C1("ac_ig_3_p3_b", 8);
			}
			unk_0x78FCB2E22C41B9D5(joaat("a_m_o_acult_02"));
			unk_0x78FCB2E22C41B9D5(joaat("a_m_y_acult_02"));
			unk_0x78FCB2E22C41B9D5(joaat("prop_box_wood03a"));
			unk_0x78FCB2E22C41B9D5(joaat("prop_box_wood04a"));
			unk_0x78FCB2E22C41B9D5(joaat("prop_box_wood05a"));
			unk_0x78FCB2E22C41B9D5(joaat("prop_security_case_01"));
			while ((((((!func_143() || !unk_0x7D167B9A0CCDA347(joaat("a_m_o_acult_02"))) || !unk_0x7D167B9A0CCDA347(joaat("a_m_y_acult_02"))) || !unk_0x7D167B9A0CCDA347(joaat("prop_box_wood03a"))) || !unk_0x7D167B9A0CCDA347(joaat("prop_box_wood04a"))) || !unk_0x7D167B9A0CCDA347(joaat("prop_box_wood05a"))) || !unk_0x7D167B9A0CCDA347(joaat("prop_security_case_01")))
			{
				wait(0);
			}
			iLocal_436 = func_136(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0, 0, 0);
			if (unk_0xAE06B9E39EBDE049(iLocal_436))
			{
				unk_0xFA3AB7AE2A01375E(iLocal_436, "Trevors_weapon", 0, 0, 0);
			}
			unk_0xFA3AB7AE2A01375E(0, "Rifle_Mag1^1", 3, unk_0x85CB1D50AB0A0A5B(joaat("component_assaultrifle_clip_01")), 0);
			if (func_143() && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				unk_0xFA3AB7AE2A01375E(unk_0x9B0761B4C3EB8BC7(), "TREVOR", 0, 0, 0);
				unk_0xFA3AB7AE2A01375E(iLocal_98[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
				unk_0xFA3AB7AE2A01375E(iLocal_98[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0xFA3AB7AE2A01375E(iLocal_98[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
				unk_0xFA3AB7AE2A01375E(iLocal_98[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0xFA3AB7AE2A01375E(iLocal_98[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
				unk_0x6EEEEDB625F825CC(0);
			}
			wait(0);
			if (!bLocal_76 && Global_111858.f_24991.f_5 != 1000)
			{
				func_135();
			}
			if (unk_0xAE06B9E39EBDE049(iLocal_98[0]))
			{
				unk_0x586DDC617E714637(&(iLocal_98[0]));
			}
			if (unk_0xAE06B9E39EBDE049(iLocal_98[1]))
			{
				unk_0x586DDC617E714637(&(iLocal_98[1]));
			}
			if (unk_0x40397A9A17EEC1C5(iLocal_106))
			{
				unk_0x856549C07003344B(iLocal_106, false);
			}
			if (unk_0xAE06B9E39EBDE049(iLocal_101))
			{
				unk_0x315F7D8C33F0AB37(&iLocal_101);
			}
			if (unk_0xAE06B9E39EBDE049(iLocal_101))
			{
				unk_0x315F7D8C33F0AB37(&iLocal_101);
			}
			unk_0x3ED9330214992278(false, 0, 3000, 1, 0, 0);
			if (unk_0x8F678487EEBD8CE4(iLocal_104))
			{
				unk_0x93370FA10F15BE44(&iLocal_104);
			}
			func_23(1, 1, 1, 0, 0, 0, 0);
			unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
			unk_0xD289B55B6AADBA10(1);
			unk_0x644F1D0C5427A242(0);
			unk_0x8CFF639CEFF5CF16(0);
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				unk_0x98EFE9ABE449C2A3(unk_0x9B0761B4C3EB8BC7(), 1);
			}
			unk_0x555EE41D7C7078E6(Local_53, 100f, 1, 0, 0, false);
			unk_0xC08A186299DFDA0A(Local_53 - Vector(100f, 60f, 80f), Local_53 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
			unk_0x34FEEAC2548C3789(0f);
			unk_0x40ECEB892E6BDDDB(3, 0);
			unk_0x40ECEB892E6BDDDB(5, 0);
			iLocal_108 = unk_0x094DCAA30E92994C(-1173.509f, 4924.365f, 222.21f, 277.2293f, 2, 0, 2, 1);
			unk_0x78FCB2E22C41B9D5(joaat("a_m_o_acult_01"));
			while (!unk_0x7D167B9A0CCDA347(joaat("a_m_o_acult_01")))
			{
				wait(0);
			}
			iLocal_94 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 6:
			if (unk_0x59B0C38F9A3B22DB(0))
			{
				if (unk_0x10447A1CD8175FC0("CULT_MASTER", 0))
				{
					if (!unk_0xAE06B9E39EBDE049(iLocal_98[11]))
					{
						iLocal_98[11] = unk_0x9048E8838E822F21(unk_0x0057F696C72889AD("CULT_MASTER", 0));
					}
				}
				if (unk_0x10447A1CD8175FC0("REAR_CULT", 0))
				{
					if (!unk_0xAE06B9E39EBDE049(iLocal_98[12]))
					{
						iLocal_98[12] = unk_0x9048E8838E822F21(unk_0x0057F696C72889AD("REAR_CULT", 0));
					}
				}
				if (unk_0x10447A1CD8175FC0("LEFT_OLD_CULT", 0))
				{
					if (!unk_0xAE06B9E39EBDE049(iLocal_98[13]))
					{
						iLocal_98[13] = unk_0x9048E8838E822F21(unk_0x0057F696C72889AD("LEFT_OLD_CULT", 0));
					}
				}
				if (unk_0x10447A1CD8175FC0("CARBINE_CULT", 0))
				{
					if (!unk_0xAE06B9E39EBDE049(iLocal_98[14]))
					{
						iLocal_98[14] = unk_0x9048E8838E822F21(unk_0x0057F696C72889AD("CARBINE_CULT", 0));
					}
				}
				if (unk_0x10447A1CD8175FC0("SHOTGUN_CULT", 0))
				{
					if (!unk_0xAE06B9E39EBDE049(iLocal_98[15]))
					{
						iLocal_98[15] = unk_0x9048E8838E822F21(unk_0x0057F696C72889AD("SHOTGUN_CULT", 0));
					}
				}
				if (unk_0x10447A1CD8175FC0("TREVOR", 0))
				{
					unk_0x98EFE9ABE449C2A3(unk_0x9B0761B4C3EB8BC7(), 0);
					unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), -1173.531f, 4924.357f, 222.2101f, 1, 0, 0, 1);
					unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), 188.9369f);
					unk_0xFE696539D3250000(unk_0x9B0761B4C3EB8BC7(), -1173.509f, 4924.365f, 222.21f, -1, 0, 0f, 1, 0, iLocal_108, 0);
					unk_0x1322CA891C5DF18A(unk_0x9B0761B4C3EB8BC7(), 1, 0);
				}
				if (unk_0x10447A1CD8175FC0("Trevors_weapon", 0))
				{
					unk_0xDF1EDBFFB5215C2C(iLocal_436, unk_0x9B0761B4C3EB8BC7());
				}
				unk_0x4C4FC7841A5FB983(91.3878f);
				unk_0x7965943E39128B42(4.4337f, 1065353216);
				func_23(0, 1, 1, 0, 0, 0, 0);
				unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
				unk_0x644F1D0C5427A242(1);
				unk_0x8CFF639CEFF5CF16(1);
				Local_51[0 /*3*/] = { -1044.632f, 4918.149f, 211.3315f };
				fLocal_52[0] = 254.8275f;
				Local_51[1 /*3*/] = { -1054.92f, 4915.155f, 210.8241f };
				fLocal_52[1] = 270.2025f;
				Local_51[2 /*3*/] = { -1051.859f, 4903.902f, 209.6199f };
				fLocal_52[2] = 299.8404f;
				Local_51[3 /*3*/] = { -1068.246f, 4899.532f, 213.2755f };
				fLocal_52[3] = 298.4257f;
				Local_51[4 /*3*/] = { -1083.322f, 4899.532f, 213.2755f };
				fLocal_52[4] = 283.5311f;
				Local_51[5 /*3*/] = { -1084.058f, 4933.805f, 228.2246f };
				fLocal_52[5] = 87.5233f;
				Local_51[6 /*3*/] = { -1081.976f, 4937.339f, 232.3275f };
				fLocal_52[6] = 109.6546f;
				Local_51[7 /*3*/] = { -1092.075f, 4939.958f, 217.3385f };
				fLocal_52[7] = 210.2433f;
				Local_51[8 /*3*/] = { -1101.798f, 4930.33f, 217.3544f };
				fLocal_52[8] = 203.732f;
				Local_51[9 /*3*/] = { -1070.675f, 4869.301f, 220.2917f };
				fLocal_52[9] = 39.1109f;
				Local_51[10 /*3*/] = { -1115.703f, 4878.439f, 225.8085f };
				fLocal_52[10] = 25.8472f;
				unk_0xDE8F8016287F771F("rghCult", &iLocal_270);
				iVar1 = 0;
				while (iVar1 < iLocal_98)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_98[iVar1] = unk_0xB3116B49FE00E2F1(26, joaat("a_m_o_acult_01"), Local_51[iVar1 /*3*/], fLocal_52[iVar1], 1, 1);
						unk_0xD93D982926D0D8B3(iLocal_98[iVar1], 0);
						unk_0x92BD213E6A0E666B(iLocal_98[iVar1], joaat("weapon_assaultrifle"), -1, 1, 1);
						unk_0x73745F8F1D07995D(iLocal_98[iVar1], 0);
						unk_0x3EA9EB775DF15E76(iLocal_98[iVar1], 2);
						unk_0xD5AB681FC5D86FCC(iLocal_98[iVar1], 50f, 20);
						unk_0xF94DFEAE3DD1EE7E(iLocal_98[iVar1], 5);
						unk_0x567AB34DE5FDB30D(iLocal_98[iVar1], 100f);
						unk_0x6C08F93084C348FC(iLocal_98[iVar1], 100f);
						unk_0x697DA7132EE43ABC(iLocal_98[iVar1], 150, 0);
						unk_0xB51236BFABA70F7E(iLocal_98[iVar1], unk_0x344C570D6F8700DF(40, 60));
						unk_0x8FF9CE1C0F94F59A(iLocal_98[iVar1], unk_0x9B0761B4C3EB8BC7(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_98[iVar1] = unk_0xB3116B49FE00E2F1(26, joaat("a_m_o_acult_02"), Local_51[iVar1 /*3*/], fLocal_52[iVar1], 1, 1);
						unk_0xD93D982926D0D8B3(iLocal_98[iVar1], 0);
						unk_0x92BD213E6A0E666B(iLocal_98[iVar1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
						unk_0x6673CC701BC8E9C1(iLocal_98[iVar1], 50, 1);
						unk_0x73745F8F1D07995D(iLocal_98[iVar1], 2);
						unk_0x3EA9EB775DF15E76(iLocal_98[iVar1], 1);
						unk_0xD5AB681FC5D86FCC(iLocal_98[iVar1], 50f, 20);
						unk_0xF94DFEAE3DD1EE7E(iLocal_98[iVar1], 5);
						unk_0x567AB34DE5FDB30D(iLocal_98[iVar1], 100f);
						unk_0x6C08F93084C348FC(iLocal_98[iVar1], 100f);
						unk_0xB51236BFABA70F7E(iLocal_98[iVar1], unk_0x344C570D6F8700DF(40, 60));
						unk_0x8FF9CE1C0F94F59A(iLocal_98[iVar1], unk_0x9B0761B4C3EB8BC7(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!unk_0x5AEB5DDFFAD43CA5(iLocal_98[iVar1]) && !unk_0x5AEB5DDFFAD43CA5(iLocal_98[11])) && !unk_0x5AEB5DDFFAD43CA5(iLocal_98[12])) && !unk_0x5AEB5DDFFAD43CA5(iLocal_98[13])) && !unk_0x5AEB5DDFFAD43CA5(iLocal_98[14])) && !unk_0x5AEB5DDFFAD43CA5(iLocal_98[15]))
						{
							unk_0x92BD213E6A0E666B(iLocal_98[11], joaat("weapon_pistol"), -1, 1, 1);
							unk_0x92BD213E6A0E666B(iLocal_98[12], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0x92BD213E6A0E666B(iLocal_98[13], joaat("weapon_assaultrifle"), -1, 1, 1);
							unk_0x92BD213E6A0E666B(iLocal_98[14], joaat("weapon_carbinerifle"), -1, 1, 1);
							unk_0x92BD213E6A0E666B(iLocal_98[15], joaat("weapon_pumpshotgun"), -1, 1, 1);
							unk_0x6673CC701BC8E9C1(iLocal_98[iVar1], 0, 1);
							unk_0x73745F8F1D07995D(iLocal_98[iVar1], 3);
							unk_0x3EA9EB775DF15E76(iLocal_98[iVar1], 0);
							unk_0xF94DFEAE3DD1EE7E(iLocal_98[iVar1], 0);
							unk_0x8D536CF9F0F78D9F(iLocal_98[iVar1], 1f, 1f);
							unk_0x9DC06E2A59C5AEBB(&uLocal_107);
							unk_0x88AEDBE3A7557929(0, -1159.33f, 4924.412f, 221.6576f, unk_0x9B0761B4C3EB8BC7(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0xDEA135D03FA041A8(0, unk_0x9B0761B4C3EB8BC7(), 6000, 0);
							unk_0xDEA135D03FA041A8(0, unk_0x9B0761B4C3EB8BC7(), 4500, 0);
							unk_0x8FF9CE1C0F94F59A(0, unk_0x9B0761B4C3EB8BC7(), 0, 16);
							unk_0x19F29730874AD6F1(uLocal_107);
							unk_0x9B6EC2CECE1010EF(iLocal_98[15], uLocal_107);
							unk_0x4F83FEE4454169D4(&uLocal_107);
							unk_0x9DC06E2A59C5AEBB(&uLocal_107);
							unk_0x88AEDBE3A7557929(0, -1163.279f, 4932.933f, 222.541f, unk_0x9B0761B4C3EB8BC7(), 1f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0x56185842FFEB7EE6(0, unk_0x9B0761B4C3EB8BC7(), 5000, 0);
							unk_0xDEA135D03FA041A8(0, unk_0x9B0761B4C3EB8BC7(), 7500, 0);
							unk_0xDEA135D03FA041A8(0, unk_0x9B0761B4C3EB8BC7(), 4500, 0);
							unk_0x8FF9CE1C0F94F59A(0, unk_0x9B0761B4C3EB8BC7(), 0, 16);
							unk_0x19F29730874AD6F1(uLocal_107);
							unk_0x9B6EC2CECE1010EF(iLocal_98[14], uLocal_107);
							unk_0x4F83FEE4454169D4(&uLocal_107);
							unk_0x9DC06E2A59C5AEBB(&uLocal_107);
							unk_0xDEA135D03FA041A8(0, unk_0x9B0761B4C3EB8BC7(), 2500, 0);
							unk_0x56185842FFEB7EE6(0, unk_0x9B0761B4C3EB8BC7(), 5000, 0);
							unk_0x88AEDBE3A7557929(0, -1156.175f, 4926.073f, 221.3447f, unk_0x9B0761B4C3EB8BC7(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0xDEA135D03FA041A8(0, unk_0x9B0761B4C3EB8BC7(), 6500, 0);
							unk_0xDEA135D03FA041A8(0, unk_0x9B0761B4C3EB8BC7(), 4500, 0);
							unk_0x8FF9CE1C0F94F59A(0, unk_0x9B0761B4C3EB8BC7(), 0, 16);
							unk_0x19F29730874AD6F1(uLocal_107);
							unk_0x9B6EC2CECE1010EF(iLocal_98[13], uLocal_107);
							unk_0x4F83FEE4454169D4(&uLocal_107);
							unk_0x9DC06E2A59C5AEBB(&uLocal_107);
							unk_0xDEA135D03FA041A8(0, unk_0x9B0761B4C3EB8BC7(), 3000, 0);
							unk_0x88AEDBE3A7557929(0, -1157.962f, 4922.196f, 221.309f, unk_0x9B0761B4C3EB8BC7(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0xDEA135D03FA041A8(0, unk_0x9B0761B4C3EB8BC7(), 5500, 0);
							unk_0xDEA135D03FA041A8(0, unk_0x9B0761B4C3EB8BC7(), 4500, 0);
							unk_0x8FF9CE1C0F94F59A(0, unk_0x9B0761B4C3EB8BC7(), 0, 16);
							unk_0x19F29730874AD6F1(uLocal_107);
							unk_0x9B6EC2CECE1010EF(iLocal_98[12], uLocal_107);
							unk_0x4F83FEE4454169D4(&uLocal_107);
							unk_0x9DC06E2A59C5AEBB(&uLocal_107);
							unk_0xDEA135D03FA041A8(0, unk_0x9B0761B4C3EB8BC7(), 4500, 0);
							unk_0x56185842FFEB7EE6(0, unk_0x9B0761B4C3EB8BC7(), 10000, 0);
							unk_0x88AEDBE3A7557929(0, -1161.475f, 4916.061f, 220.5658f, unk_0x9B0761B4C3EB8BC7(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
							unk_0xDEA135D03FA041A8(0, unk_0x9B0761B4C3EB8BC7(), 4500, 0);
							unk_0xDEA135D03FA041A8(0, unk_0x9B0761B4C3EB8BC7(), 4500, 0);
							unk_0x8FF9CE1C0F94F59A(0, unk_0x9B0761B4C3EB8BC7(), 0, 16);
							unk_0x19F29730874AD6F1(uLocal_107);
							unk_0x9B6EC2CECE1010EF(iLocal_98[11], uLocal_107);
							unk_0x4F83FEE4454169D4(&uLocal_107);
							unk_0xCBA6B2B569DCAFD8(iLocal_98[iVar1], 1);
							unk_0x8342E6CB98CD545C(iLocal_98[iVar1], 156, 1);
						}
					}
					else
					{
						iLocal_98[iVar1] = unk_0xB3116B49FE00E2F1(26, joaat("a_m_o_acult_02"), Local_51[iVar1 /*3*/], fLocal_52[iVar1], 1, 1);
						unk_0xD93D982926D0D8B3(iLocal_98[iVar1], 0);
						unk_0x92BD213E6A0E666B(iLocal_98[iVar1], joaat("weapon_pistol"), -1, 1, 1);
						unk_0x6673CC701BC8E9C1(iLocal_98[iVar1], 50, 1);
						unk_0x73745F8F1D07995D(iLocal_98[iVar1], 2);
						unk_0x3EA9EB775DF15E76(iLocal_98[iVar1], 0);
						unk_0xD5AB681FC5D86FCC(iLocal_98[iVar1], 50f, 20);
						unk_0x54E3EF0852DA2CA4(iLocal_98[iVar1], 1);
						unk_0xF94DFEAE3DD1EE7E(iLocal_98[iVar1], 5);
						unk_0x567AB34DE5FDB30D(iLocal_98[iVar1], 100f);
						unk_0x6C08F93084C348FC(iLocal_98[iVar1], 100f);
						unk_0xB51236BFABA70F7E(iLocal_98[iVar1], unk_0x344C570D6F8700DF(40, 60));
						unk_0x8FF9CE1C0F94F59A(iLocal_98[iVar1], unk_0x9B0761B4C3EB8BC7(), 0, 16);
					}
					unk_0xD3D9D7C84656DAE5(iLocal_98[iVar1], iLocal_270);
					unk_0xE922BAA80E8F9324(iLocal_98[iVar1], func_134(unk_0x3E4D3CCC220BDFB1(iLocal_98[iVar1], 1), func_95(unk_0x460153A63B9477BC())));
					unk_0x4E65320BC9AD521C(iLocal_98[iVar1], 1);
					unk_0x694113444F21E39F(iLocal_98[iVar1], 42, true);
					uLocal_105[iVar1] = func_132(iLocal_98[iVar1], 1, 145);
					iVar1++;
				}
				func_99(&uLocal_271, 0, unk_0x9B0761B4C3EB8BC7(), "TREVOR", 0, 1);
				func_99(&uLocal_271, 3, iLocal_98[11], "ACULTMaster", 0, 1);
				func_99(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
				unk_0xBE20AB8238688965(&iVar0, 1);
				unk_0xBE20AB8238688965(&iVar0, 3);
				unk_0xBE20AB8238688965(&iVar0, 4);
				if (!bLocal_76)
				{
					uLocal_102[0] = unk_0xB1C0B7CD03D4467D(joaat("pickup_money_case"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_102[1] = unk_0xB1C0B7CD03D4467D(joaat("pickup_money_case"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_102[2] = unk_0xB1C0B7CD03D4467D(joaat("pickup_money_case"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_102[3] = unk_0xB1C0B7CD03D4467D(joaat("pickup_money_case"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
				}
				uLocal_102[0] = uLocal_102[0];
				uLocal_102[1] = uLocal_102[1];
				uLocal_102[2] = uLocal_102[2];
				uLocal_102[3] = uLocal_102[3];
				iLocal_103[0] = unk_0x79CC07752E7432A1(joaat("prop_box_wood04a"), -1158.69f, 4915.709f, 220.2644f, 1, 1, 0);
				iLocal_103[1] = unk_0x79CC07752E7432A1(joaat("prop_box_wood03a"), -1156.246f, 4918.6f, 220.5432f, 1, 1, 0);
				iLocal_103[2] = unk_0x79CC07752E7432A1(joaat("prop_box_wood04a"), -1145.802f, 4931.816f, 219.9683f, 1, 1, 0);
				iLocal_103[3] = unk_0x79CC07752E7432A1(joaat("prop_box_wood04a"), -1133.369f, 4919.067f, 218.8385f, 1, 1, 0);
				iLocal_103[4] = unk_0x79CC07752E7432A1(joaat("prop_box_wood05a"), -1132.025f, 4921.483f, 218.8244f, 1, 1, 0);
				iLocal_103[5] = unk_0x79CC07752E7432A1(joaat("prop_box_wood03a"), -1112.66f, 4929.268f, 217.1752f, 1, 1, 0);
				unk_0xC82085403E46A869(iLocal_103[0], 12.24288f, -0.014582f, 27.06056f, 2, 1);
				unk_0xC82085403E46A869(iLocal_103[1], 7.733739f, 9.432779f, -2.865618f, 2, 1);
				unk_0xC82085403E46A869(iLocal_103[2], 3.735082f, 4.551246f, 86.30917f, 2, 1);
				unk_0xC82085403E46A869(iLocal_103[3], 0.240341f, 1.095195f, 36.59031f, 2, 1);
				unk_0xC82085403E46A869(iLocal_103[4], 7.6772f, 1.232743f, 93.27483f, 2, 1);
				unk_0xC82085403E46A869(iLocal_103[5], 3.367802f, -5.14387f, 97.30567f, 2, 1);
				if (func_131() < 50)
				{
					unk_0x3BAAEE5C832B8645(unk_0x460153A63B9477BC(), 0.5f, 1, 0);
				}
				if (func_130() != 18)
				{
					func_128(18);
				}
				if (!func_92())
				{
					func_117(0);
				}
				func_1(1);
				bLocal_76 = false;
				iLocal_50 = 4;
			}
			break;
	}
}

int func_117(int iParam0)
{
	if (func_122())
	{
		Global_111848 = 1;
		Global_111845 = unk_0x578C4EF320340AF7();
		if (func_121(Global_111847))
		{
			func_118(0);
		}
		unk_0x694F632EFD1F47D0(1, "RE_TITLE");
		if (iParam0 && func_121(Global_111847))
		{
			unk_0x1D42FFF20D06E356();
		}
		return 1;
	}
	return 0;
}

void func_118(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111858.f_24991.f_2 < 3)
			{
				if (!unk_0x19D4274B54F9D9FA())
				{
					func_119(func_120(iParam0), -1);
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
					func_119(func_120(iParam0), -1);
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
					func_119(func_120(iParam0), -1);
					Global_111858.f_24991.f_4++;
					unk_0xBE20AB8238688965(&Global_111854, 2);
				}
			}
			break;
	}
}

void func_119(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, 1, iParam1);
}

char* func_120(int iParam0)
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

int func_121(int iParam0)
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

int func_122()
{
	switch (func_123(&Global_31027, 0, 5, 0, unk_0x354AD085195C5FA6()))
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

int func_123(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_127(0))
		{
			return 0;
		}
		Global_41595++;
		*uParam0 = Global_41595;
		unk_0xBF70D1B666A353F5(unk_0x2639A2323BEA8CC6(), 0);
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
		if (!func_125(iParam2))
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
			func_124(uParam0, iParam4);
		}
	}
	return 2;
}

void func_124(var uParam0, int iParam1)
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

bool func_125(int iParam0)
{
	return func_126(iParam0, Global_41631);
}

int func_126(int iParam0, int iParam1)
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

int func_127(int iParam0)
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	if (func_125(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_128(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_93();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_65(iParam0);
	unk_0x92B2940A0A0441A9(0);
	unk_0x659A1C3A1508626C(1);
	Global_111844 = 0;
	func_129();
}

void func_129()
{
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			unk_0x410A1E7AD7D5C774(unk_0x36FE6D3220816ADA(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0)), 1);
		}
		unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 32, false);
	}
}

int func_130()
{
	return Global_111847;
}

int func_131()
{
	var uVar0;
	
	switch (func_15())
	{
		case 0:
			unk_0xD2F202166691EDB2(joaat("SP0_SPECIAL_ABILITY"), &uVar0, -1);
			break;
		
		case 1:
			unk_0xD2F202166691EDB2(joaat("SP1_SPECIAL_ABILITY"), &uVar0, -1);
			break;
		
		case 2:
			unk_0xD2F202166691EDB2(joaat("SP2_SPECIAL_ABILITY"), &uVar0, -1);
			break;
	}
	return uVar0;
}

int func_132(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_133(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x8F678487EEBD8CE4(iVar0)) && unk_0x3030AE9FCF1BC243(&(Global_1848[iParam2 /*29*/].f_3)))
	{
		unk_0xB023F5C66F5716C7(iVar0, &(Global_1848[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_133(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x2BE000892D65EA2A(iParam0);
	if (unk_0x20F7576FDB52E2B0(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_41(unk_0x25DDB354A40FFCDB(), 1f, 1f));
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
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_41(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
		unk_0x3060C53EAE54BBE7(iVar0, bParam1);
	}
	else if (unk_0x49116E591C7E1412(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_41(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_134(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)
{
	return unk_0x9075769DD4F148B7((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_135()
{
	Global_31206 = 1;
}

int func_136(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = 0;
	iVar2 = iParam1;
	if (!unk_0x15D88F65956DC2F6(iParam0, iParam1, 0))
	{
		iVar0 = 1;
	}
	if (iVar2 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	iVar3 = 0;
	if (iParam2 == 1)
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			iVar3 = unk_0x35DEEA1DC27CF0A2(iParam0, iVar2);
		}
		if (iVar3 == -1)
		{
			iVar4 = unk_0x9CA73249BF1EBC1D(iVar2);
			if (iVar4 > 0)
			{
				iVar3 = iVar4;
			}
			else
			{
				unk_0x0EBD989162AEAFA1(iParam0, iVar2, &iVar3);
			}
		}
	}
	Var5 = { unk_0x3E4D3CCC220BDFB1(iParam0, 0) - Vector(10f, 0f, 0f) };
	if (bParam3)
	{
		Var5 = { iParam4, iParam5, iParam6 };
	}
	while (func_140(iVar2, iVar6) != 0)
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			if (unk_0x0BCEF4D1482DACD2(iParam0, iVar2, func_140(iVar2, iVar6)))
			{
				if (func_139(func_140(iVar2, iVar6)))
				{
					iVar7 = unk_0x85CB1D50AB0A0A5B(func_140(iVar2, iVar6));
				}
			}
		}
		iVar6++;
	}
	iVar1 = unk_0xA3E0B448E324D459(iVar2, iVar3, Var5, iVar0, 1065353216, iVar7, iParam7, iParam8);
	while (func_140(iVar2, iVar8) != 0)
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			if (unk_0x0BCEF4D1482DACD2(iParam0, iVar2, func_140(iVar2, iVar8)))
			{
				unk_0xC53D054996356072(iVar1, func_140(iVar2, iVar8));
				func_137(iVar1, func_140(iVar2, iVar8));
			}
		}
		iVar8++;
	}
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (unk_0x15D88F65956DC2F6(iParam0, iVar2, 0))
		{
			unk_0x1E7F6EF5C57BA4FA(iVar1, unk_0xC524D460B9FE4A6A(iParam0, iVar2));
		}
	}
	return iVar1;
}

void func_137(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_138(iParam1);
	if (iVar0 != 0)
	{
		unk_0xC53D054996356072(iParam0, iVar0);
	}
}

int func_138(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE");
			break;
		
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
			return joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE");
			break;
		
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
			return joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE");
			break;
	}
	return 0;
}

int func_139(int iParam0)
{
	if ((((((((((((((((((((((((((((((((iParam0 == joaat("component_pistol_varmod_luxe") || iParam0 == joaat("component_combatpistol_varmod_lowrider")) || iParam0 == joaat("component_appistol_varmod_luxe")) || iParam0 == joaat("component_microsmg_varmod_luxe")) || iParam0 == joaat("component_smg_varmod_luxe")) || iParam0 == joaat("component_assaultrifle_varmod_luxe")) || iParam0 == joaat("component_carbinerifle_varmod_luxe")) || iParam0 == joaat("component_advancedrifle_varmod_luxe")) || iParam0 == joaat("component_mg_varmod_lowrider")) || iParam0 == joaat("component_combatmg_varmod_lowrider")) || iParam0 == joaat("component_pumpshotgun_varmod_lowrider")) || iParam0 == joaat("component_sniperrifle_varmod_luxe")) || iParam0 == joaat("component_assaultsmg_varmod_lowrider")) || iParam0 == joaat("component_pistol50_varmod_luxe")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_bullpuprifle_varmod_low")) || iParam0 == joaat("component_snspistol_varmod_lowrider")) || iParam0 == joaat("component_specialcarbine_varmod_lowrider")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_knuckle_varmod_pimp")) || iParam0 == joaat("component_knuckle_varmod_ballas")) || iParam0 == joaat("component_knuckle_varmod_dollar")) || iParam0 == joaat("component_knuckle_varmod_diamond")) || iParam0 == joaat("component_knuckle_varmod_hate")) || iParam0 == joaat("component_knuckle_varmod_love")) || iParam0 == joaat("component_knuckle_varmod_player")) || iParam0 == joaat("component_knuckle_varmod_king")) || iParam0 == joaat("component_knuckle_varmod_vagos")) || iParam0 == joaat("component_switchblade_varmod_var1")) || iParam0 == joaat("component_switchblade_varmod_var2")) || iParam0 == joaat("component_revolver_varmod_boss")) || iParam0 == joaat("component_revolver_varmod_goon")) || iParam0 == 1623028892)
	{
		return 1;
	}
	return 0;
}

int func_140(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
				
				case 1:
					iVar0 = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_142(iParam0, &uVar4);
				if (iVar1 != -1)
				{
					iVar2 = 0;
					while (iVar2 < unk_0x4C70B0C3D1E97438(iVar1))
					{
						if (unk_0xF4545E3991F419DA(iVar1, iVar2, &Var5))
						{
							if (!func_141(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_141(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
			return 1;
			break;
	}
	return 0;
}

int func_142(int iParam0, var uParam1)
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

bool func_143()
{
	bool bVar0;
	
	bVar0 = unk_0x9893D61ACB9FB52A();
	if (!Global_76832)
	{
		if (!bVar0)
		{
			Global_76832 = 1;
		}
	}
	return bVar0;
}

int func_144(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_145(iParam0, iParam1);
}

int func_145(int iParam0, int iParam1)
{
	if (func_17(14) && !func_156(iParam0))
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
	if (func_155(&Global_4271324))
	{
		if (func_153(&Global_4271324, iParam0))
		{
			return 0;
		}
		if (func_146(&Global_4271324, iParam0))
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

int func_146(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x027BA2E902FAC118(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_156(iParam1))
	{
		return 0;
	}
	if (func_153(uParam0, iParam1))
	{
		return 0;
	}
	if (func_152(uParam0) < 0f)
	{
		func_151(uParam0, 0);
	}
	func_149(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_147(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_147(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x027BA2E902FAC118(iParam1))
	{
		return 0;
	}
	if (func_17(14) && !func_156(iParam1))
	{
		return 0;
	}
	if (func_153(uParam0, iParam1))
	{
		return 0;
	}
	if (func_152(uParam0) < 0f)
	{
		func_151(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_148(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_148(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_149(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_150(uParam0, iVar0);
		iVar0++;
	}
	func_151(uParam0, (Global_4271323 - 0.5f));
}

void func_150(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_151(var uParam0, float fParam1)
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

float func_152(var uParam0)
{
	return uParam0->f_80;
}

bool func_153(var uParam0, int iParam1)
{
	return func_154(uParam0, iParam1) != -1;
}

int func_154(var uParam0, int iParam1)
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

bool func_155(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_156(int iParam0)
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

void func_157()
{
	if (fLocal_87 > 0f)
	{
		fLocal_87 = (fLocal_87 - (0.6f / (1f / unk_0x9E3DAF75EFC49F5B())));
	}
	else
	{
		fLocal_87 = 0f;
	}
	if (fLocal_87 >= 0f)
	{
		unk_0xCCD157619BAD6BE2(Global_40754[10 /*31*/], fLocal_87, 0, 1);
		unk_0xDC5C33A98881772F(Global_40754[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_86 < 0f)
	{
		fLocal_86 = (fLocal_86 + (0.6f / (1f / unk_0x9E3DAF75EFC49F5B())));
	}
	else
	{
		fLocal_86 = 0f;
	}
	if (fLocal_86 <= 0f)
	{
		unk_0xCCD157619BAD6BE2(Global_40754[9 /*31*/], fLocal_86, 0, 1);
		unk_0xDC5C33A98881772F(Global_40754[9 /*31*/], 4, 0, 1);
	}
}

void func_158()
{
	if (fLocal_87 < 1f)
	{
		fLocal_87 = (fLocal_87 + (0.6f / (1f / unk_0x9E3DAF75EFC49F5B())));
	}
	else
	{
		fLocal_87 = 1f;
	}
	if (fLocal_87 <= 1f)
	{
		unk_0xCCD157619BAD6BE2(Global_40754[10 /*31*/], fLocal_87, 0, 1);
		unk_0xDC5C33A98881772F(Global_40754[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_86 > -1f)
	{
		fLocal_86 = (fLocal_86 - (0.6f / (1f / unk_0x9E3DAF75EFC49F5B())));
	}
	else
	{
		fLocal_86 = -1f;
	}
	if (fLocal_86 >= -1f)
	{
		unk_0xCCD157619BAD6BE2(Global_40754[9 /*31*/], fLocal_86, 0, 1);
		unk_0xDC5C33A98881772F(Global_40754[9 /*31*/], 4, 0, 1);
	}
}

void func_159()
{
	switch (iLocal_93)
	{
		case 0:
			unk_0x78FCB2E22C41B9D5(joaat("a_m_o_acult_02"));
			unk_0x78FCB2E22C41B9D5(joaat("prop_anim_cash_pile_02"));
			unk_0x131ED02492676000("random@altruist_cult");
			unk_0x1BDBFE8EFF10BC95("AC_DELIVERED");
			unk_0xF9AF18903964E678(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x7D167B9A0CCDA347(joaat("a_m_o_acult_02")) && unk_0x7D167B9A0CCDA347(joaat("prop_anim_cash_pile_02"))) && unk_0xC614DDE265D18415("random@altruist_cult")) && unk_0x1BDBFE8EFF10BC95("AC_DELIVERED")) && unk_0x1EC187FFFA21C230(joaat("weapon_assaultrifle")))
			{
				if (Global_111858.f_24991.f_5 < 2)
				{
					if (Global_111858.f_24991.f_5 == 0)
					{
						sLocal_269 = "ACULT_HI";
					}
					else
					{
						sLocal_269 = "ACULT_LEAVE5";
					}
					sLocal_263 = "cult_p5_guard";
					sLocal_265 = "cult_p5_trv";
					sLocal_266 = "cult_p5_victim_01";
					sLocal_267 = "cult_p5_victim_02";
					sLocal_268 = "cult_p5_cam";
					fLocal_89 = 0.75f;
					fLocal_88 = 0.999f;
				}
				else if (Global_111858.f_24991.f_5 >= 2)
				{
					sLocal_269 = "ACULT_CAPT";
					sLocal_263 = "cult_p7_guard_01";
					sLocal_264 = "cult_p7_guard_02";
					sLocal_265 = "cult_p7_trv";
					sLocal_266 = "cult_p7_victim_01";
					sLocal_267 = "cult_p7_victim_02";
					sLocal_268 = "cult_p7_cam";
					fLocal_89 = 0.98f;
					fLocal_88 = 0.98f;
					unk_0x78FCB2E22C41B9D5(joaat("prop_box_wood03a"));
					unk_0x78FCB2E22C41B9D5(joaat("prop_box_wood04a"));
					unk_0x78FCB2E22C41B9D5(joaat("prop_box_wood05a"));
					unk_0x78FCB2E22C41B9D5(joaat("prop_security_case_01"));
					if (!unk_0xFFDFD8490027DBA5())
					{
						unk_0x85D9FC15836825C1("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0x8F678487EEBD8CE4(iLocal_104))
				{
					unk_0x93370FA10F15BE44(&iLocal_104);
				}
				func_23(1, 1, 1, 0, 0, 0, 0);
				unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
				unk_0xD289B55B6AADBA10(1);
				unk_0x644F1D0C5427A242(0);
				unk_0x8CFF639CEFF5CF16(0);
				unk_0x98EFE9ABE449C2A3(unk_0x9B0761B4C3EB8BC7(), 1);
				unk_0x69C71C91F56D82B9(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_unarmed"), 1);
				unk_0x21723EF7B2FCC4CC("AC_DELIVERED");
				if (func_187())
				{
					func_186(0);
				}
				func_184();
				wait(0);
				if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					iLocal_99 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
					if (unk_0x80FF6C016CDB0FAF(iLocal_99, 0))
					{
						if (unk_0xFD7B900D58065E3B(iLocal_99))
						{
							iLocal_93++;
						}
					}
				}
				else
				{
					iLocal_99 = unk_0xA5D3CD332CD10EE9();
					if (!unk_0x5AEB5DDFFAD43CA5(uLocal_97[0]) && !unk_0x5AEB5DDFFAD43CA5(uLocal_97[1]))
					{
						unk_0x9B94F6169B0DAEFD(uLocal_97[0]);
						unk_0x59478CBBF96AF7D1(uLocal_97[0]);
						unk_0x9B94F6169B0DAEFD(uLocal_97[1]);
						unk_0x59478CBBF96AF7D1(uLocal_97[1]);
					}
					iLocal_93++;
				}
			}
			break;
		
		case 1:
			if (unk_0xAE06B9E39EBDE049(iLocal_99))
			{
				if (!unk_0x1758275D343D5BA3(iLocal_99))
				{
					unk_0x4F3C4F457D44BB0F(iLocal_99, 1, 0);
				}
				if (unk_0xC2169C00B643278B(iLocal_99, Local_54, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0x03D382CB0B44E2FC(iLocal_99, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0xA59F96B50B97E63C(iLocal_99, 0))
					{
						unk_0xE922BAA80E8F9324(iLocal_99, 149.8882f);
						unk_0xB11D151E210D4FAC(iLocal_99, 1084227584);
					}
				}
			}
			unk_0x555EE41D7C7078E6(Local_54, 12f, 1, 0, 0, false);
			unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), 128.2065f);
			if (!unk_0x5AEB5DDFFAD43CA5(uLocal_97[0]) && !unk_0x5AEB5DDFFAD43CA5(uLocal_97[1]))
			{
				unk_0x03D382CB0B44E2FC(uLocal_97[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0xE922BAA80E8F9324(uLocal_97[0], 128.2065f);
				unk_0x03D382CB0B44E2FC(uLocal_97[1], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), 1, 0, 0, 1);
				unk_0xE922BAA80E8F9324(uLocal_97[1], 128.2065f);
			}
			iLocal_98[0] = unk_0xB3116B49FE00E2F1(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_99(&uLocal_271, 1, iLocal_98[0], "ACULTMember1", 0, 1);
			if (Global_111858.f_24991.f_5 >= 2)
			{
				iLocal_98[1] = unk_0xB3116B49FE00E2F1(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_99(&uLocal_271, 2, iLocal_98[1], "ACULTMember2", 0, 1);
			}
			func_99(&uLocal_271, 0, unk_0x9B0761B4C3EB8BC7(), "TREVOR", 0, 1);
			func_99(&uLocal_271, 3, 0, "ACULTMaster", 0, 1);
			func_99(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
			func_100(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
			unk_0x4E65320BC9AD521C(iLocal_98[0], 1);
			iLocal_101 = unk_0xA3E0B448E324D459(joaat("weapon_assaultrifle"), -1, unk_0x3E4D3CCC220BDFB1(iLocal_98[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0xF8A652CE310FFC53(iLocal_101, iLocal_98[0], unk_0xE6B87C42793036AA(iLocal_98[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_111858.f_24991.f_5 < 2)
			{
				iLocal_100 = unk_0x79CC07752E7432A1(joaat("prop_anim_cash_pile_02"), Local_53, 1, 1, 0);
				unk_0xF8A652CE310FFC53(iLocal_100, unk_0x9B0761B4C3EB8BC7(), unk_0xE6B87C42793036AA(unk_0x9B0761B4C3EB8BC7(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			else if (Global_111858.f_24991.f_5 >= 2)
			{
				unk_0x92BD213E6A0E666B(iLocal_98[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			iLocal_106 = unk_0x68C2E3309DCAD71E("DEFAULT_ANIMATED_CAMERA", 1);
			iLocal_92 = unk_0xF341A134A5B8D4F6(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0xDFDB9C533700BC17(unk_0x9B0761B4C3EB8BC7(), iLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0xDFDB9C533700BC17(iLocal_98[0], iLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_111858.f_24991.f_5 >= 2)
			{
				unk_0xDFDB9C533700BC17(iLocal_98[1], iLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0x00736EE41CC355ED(iLocal_106, iLocal_92, sLocal_268, "random@altruist_cult");
			unk_0x3ED9330214992278(true, 0, 3000, 1, 0, 0);
			if (!unk_0x5AEB5DDFFAD43CA5(uLocal_97[0]) && !unk_0x5AEB5DDFFAD43CA5(uLocal_97[1]))
			{
				unk_0xDFDB9C533700BC17(uLocal_97[0], iLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 4, 0, 1148846080, 0);
				unk_0xDFDB9C533700BC17(uLocal_97[1], iLocal_92, "random@altruist_cult", sLocal_267, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_93++;
			break;
		
		case 2:
			if (!unk_0x5AEB5DDFFAD43CA5(uLocal_97[0]))
			{
				if (unk_0xE080FA9EB010F041(uLocal_97[0]))
				{
					func_182(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0x5AEB5DDFFAD43CA5(uLocal_97[1]))
			{
				if (unk_0xE080FA9EB010F041(uLocal_97[1]))
				{
					func_182(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0x369E69441C066912(iLocal_92) > fLocal_89)
			{
				iLocal_93++;
			}
			break;
		
		case 3:
			if (!unk_0x5AEB5DDFFAD43CA5(uLocal_97[0]))
			{
				if (unk_0xE080FA9EB010F041(uLocal_97[0]))
				{
					func_182(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!unk_0x5AEB5DDFFAD43CA5(uLocal_97[1]))
			{
				if (unk_0xE080FA9EB010F041(uLocal_97[1]))
				{
					func_182(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (unk_0x369E69441C066912(iLocal_92) > fLocal_88)
			{
				iLocal_93++;
			}
			break;
		
		case 4:
			if (Global_111858.f_24991.f_5 < 2)
			{
				func_135();
				if (unk_0xAE06B9E39EBDE049(iLocal_98[0]))
				{
					unk_0x586DDC617E714637(&(iLocal_98[0]));
				}
				if (unk_0xAE06B9E39EBDE049(iLocal_98[1]))
				{
					unk_0x586DDC617E714637(&(iLocal_98[1]));
				}
				if (unk_0xAE06B9E39EBDE049(iLocal_100))
				{
					unk_0x315F7D8C33F0AB37(&iLocal_100);
				}
				if (unk_0xAE06B9E39EBDE049(iLocal_101))
				{
					unk_0x315F7D8C33F0AB37(&iLocal_101);
				}
				unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
				unk_0x47012CDD5C524D7B(0, 0, 3, 0);
				unk_0x856549C07003344B(iLocal_106, false);
				func_23(0, 1, 1, 0, 0, 0, 0);
				unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
				unk_0x644F1D0C5427A242(1);
				unk_0x8CFF639CEFF5CF16(1);
				unk_0x98EFE9ABE449C2A3(unk_0x9B0761B4C3EB8BC7(), 0);
				unk_0x4C4FC7841A5FB983(0f);
				func_160(func_15(), 1, 2000, 0, 0);
			}
			unk_0x21723EF7B2FCC4CC("AC_DONE");
			Global_111858.f_24991.f_5 += 2;
			iLocal_78 = 1;
			break;
	}
}

void func_160(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_181(iParam0) == 3)
	{
		return;
	}
	if (func_181(iParam0) == 4)
	{
		return;
	}
	func_161(func_181(iParam0), 1, iParam1, iParam2, 0);
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

int func_161(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_180();
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
					func_179(99, 1);
					func_178(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_178(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_178(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_176(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_171(5))
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
							func_178(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_178(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_178(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_171(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_178(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_178(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_178(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_178(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_178(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_178(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_178(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_178(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_178(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_178(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_178(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_178(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_178(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_178(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_178(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_171(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_178(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_178(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_178(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_178(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_178(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_178(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_170(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_179(95, iParam3);
					break;
				
				case 1:
					func_179(97, iParam3);
					break;
				
				case 2:
					func_179(96, iParam3);
					break;
			}
			func_179(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_164(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_164(iVar1);
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
					func_178(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_178(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_178(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
	func_163(iParam0);
	if (Global_41631 == 15)
	{
		func_162(0);
	}
	return 1;
}

void func_162(bool bParam0)
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

void func_163(int iParam0)
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

void func_164(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_169(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_169(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_169(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_169(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_167(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_167(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_167(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_167(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_167(8274, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_167(8275, 0, -1, 1, 0);
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
	else if (unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, iParam0) || unk_0xCE990E643CD9D0E5(Global_2097152[func_166() /*10931*/].f_6175.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xD2459066EA58CE43(&(Global_111858.f_20560.f_471), iParam0);
		unk_0xD2459066EA58CE43(&(Global_2097152[func_166() /*10931*/].f_6175.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x5B8DD855EAFD33B5("COUP_RED");
		unk_0x6A826E35A3096ED0(func_165(iParam0));
		unk_0x39E1440587355CC1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_165(int iParam0)
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

int func_166()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_167(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_168(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
}

int func_168(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_27();
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

int func_169(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_27();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = unk_0x43BE40E27DB6DC2E((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - unk_0x12730A13C85FC896((iParam0 - 0)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = unk_0x43BE40E27DB6DC2E((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - unk_0x12730A13C85FC896((iParam0 - 192)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = unk_0x43BE40E27DB6DC2E((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - unk_0x12730A13C85FC896((iParam0 - 513)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = unk_0x43BE40E27DB6DC2E((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - unk_0x12730A13C85FC896((iParam0 - 705)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = unk_0x840F9A9E6D216561((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - unk_0x12730A13C85FC896((iParam0 - 3111)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = unk_0x840F9A9E6D216561((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - unk_0x12730A13C85FC896((iParam0 - 2919)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - unk_0x12730A13C85FC896((iParam0 - 4207)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = unk_0x4B2E4855CB2B4FAA((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - unk_0x12730A13C85FC896((iParam0 - 4335)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = unk_0x4B2E4855CB2B4FAA((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - unk_0x12730A13C85FC896((iParam0 - 6029)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - unk_0x12730A13C85FC896((iParam0 - 7385)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = unk_0x4B2E4855CB2B4FAA((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - unk_0x12730A13C85FC896((iParam0 - 7321)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = unk_0x4B2E4855CB2B4FAA((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - unk_0x12730A13C85FC896((iParam0 - 9361)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - unk_0x12730A13C85FC896((iParam0 - 15369)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - unk_0x12730A13C85FC896((iParam0 - 15562)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = unk_0x4B2E4855CB2B4FAA((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - unk_0x12730A13C85FC896((iParam0 - 15946)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = unk_0x4B2E4855CB2B4FAA((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - unk_0x12730A13C85FC896((iParam0 - 18098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = unk_0x4B2E4855CB2B4FAA((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - unk_0x12730A13C85FC896((iParam0 - 22066)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = unk_0x4B2E4855CB2B4FAA((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - unk_0x12730A13C85FC896((iParam0 - 24962)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar20 = unk_0x4B2E4855CB2B4FAA((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - unk_0x12730A13C85FC896((iParam0 - 26810)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar20, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28098 && iParam0 < 28354)
	{
		iVar21 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
		iVar1 = ((iParam0 - 28098) - unk_0x12730A13C85FC896((iParam0 - 28098)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar21, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 28355 && iParam0 < 28483)
	{
		iVar22 = unk_0x4B2E4855CB2B4FAA((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 28355) - unk_0x12730A13C85FC896((iParam0 - 28355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar22, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30227 && iParam0 < 30355)
	{
		iVar23 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30227), 0, 1, iParam2, "_SU20PSTAT_BOOL");
		iVar1 = ((iParam0 - 30227) - unk_0x12730A13C85FC896((iParam0 - 30227)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar23, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30355 && iParam0 < 30483)
	{
		iVar24 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30355), 0, 1, iParam2, "_SU20TATTOOSTAT_BOOL");
		iVar1 = ((iParam0 - 30355) - unk_0x12730A13C85FC896((iParam0 - 30355)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar24, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 30515 && iParam0 < 30707)
	{
		iVar25 = unk_0x4B2E4855CB2B4FAA((iParam0 - 30515), 0, 1, iParam2, "_HISLANDPSTAT_BOOL");
		iVar1 = ((iParam0 - 30515) - unk_0x12730A13C85FC896((iParam0 - 30515)) * 64);
		iVar0 = unk_0xC06DB57B81E2C02B(iVar25, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

void func_170(int iParam0)
{
	func_179(93, iParam0);
	func_179(29, iParam0);
	func_179(30, iParam0);
}

bool func_171(int iParam0)
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
		return func_173(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_173(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_173(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_173(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x5A002C4821A13338();
		iVar1 = func_172(8270, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x5A002C4821A13338();
		iVar3 = func_172(8271, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x5A002C4821A13338();
		iVar5 = func_172(8272, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x5A002C4821A13338();
		iVar7 = func_172(8273, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x5A002C4821A13338();
		iVar9 = func_172(8274, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x5A002C4821A13338();
		iVar11 = func_172(8275, -1, 0);
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
	return unk_0xCE990E643CD9D0E5(Global_2097152[func_166() /*10931*/].f_6175.f_10, iParam0);
}

int func_172(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_168(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_173(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_27();
	}
	iVar1 = func_175(iParam0, iParam1);
	uVar2 = func_174(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x9FD0AD883E4A7C1E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_174(int iParam0)
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

int func_175(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_27();
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

int func_176(bool bParam0)
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
		func_177(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_144(27, 1);
	return 1;
}

int func_177(int iParam0, int iParam1)
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

void func_178(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD2F202166691EDB2(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x6000E4684CB4330B(iParam0, iVar0, 1);
}

void func_179(int iParam0, int iParam1)
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

void func_180()
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

int func_181(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_17;
}

void func_182(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x1A454EFB8BC73430(uParam0, sParam1, sParam2, func_183(iParam3), 0);
}

int func_183(int iParam0)
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

void func_184()
{
	Global_19871 = 0;
	func_185();
}

void func_185()
{
	unk_0x62B2C9892E3E142D();
	Global_22016 = 0;
	if (unk_0x6A5CC4A2C9D9ED8D())
	{
		unk_0xBE4122AC23440E7D(false);
		Global_21005 = 6;
	}
}

void func_186(int iParam0)
{
	Global_22016 = iParam0;
}

int func_187()
{
	if (Global_22016 == 1)
	{
		return 1;
	}
	return 0;
}

void func_188()
{
	switch (iLocal_93)
	{
		case 0:
			unk_0x78FCB2E22C41B9D5(joaat("a_m_o_acult_02"));
			unk_0x78FCB2E22C41B9D5(joaat("prop_anim_cash_pile_02"));
			unk_0x131ED02492676000("random@altruist_cult");
			unk_0x1BDBFE8EFF10BC95("AC_DELIVERED");
			unk_0xF9AF18903964E678(joaat("weapon_assaultrifle"), 31, 0);
			if ((((unk_0x7D167B9A0CCDA347(joaat("a_m_o_acult_02")) && unk_0x7D167B9A0CCDA347(joaat("prop_anim_cash_pile_02"))) && unk_0xC614DDE265D18415("random@altruist_cult")) && unk_0x1BDBFE8EFF10BC95("AC_DELIVERED")) && unk_0x1EC187FFFA21C230(joaat("weapon_assaultrifle")))
			{
				if (Global_111858.f_24991.f_5 == 0)
				{
					sLocal_269 = "ACULT_HI";
					sLocal_263 = "cult_p2_guard";
					sLocal_265 = "cult_p2_trv";
					sLocal_266 = "cult_p2_victim";
					sLocal_268 = "cult_p2_cam";
					fLocal_89 = 0.8f;
					fLocal_88 = 0.968f;
				}
				else if (Global_111858.f_24991.f_5 == 1)
				{
					sLocal_269 = "ACULT_LEAVE3";
					sLocal_263 = "cult_p4_guard";
					sLocal_265 = "cult_p4_trv";
					sLocal_266 = "cult_p4_victim";
					sLocal_268 = "cult_p4_cam";
					fLocal_89 = 0.77f;
					fLocal_88 = 0.999f;
				}
				else if (Global_111858.f_24991.f_5 == 2)
				{
					sLocal_269 = "ACULT_LEAVE3";
					sLocal_263 = "cult_p4_guard";
					sLocal_265 = "cult_p4_trv";
					sLocal_266 = "cult_p4_victim";
					sLocal_268 = "cult_p4_cam";
					fLocal_89 = 0.77f;
					fLocal_88 = 0.999f;
				}
				else if (Global_111858.f_24991.f_5 >= 3)
				{
					sLocal_269 = "ACULT_CAPT";
					sLocal_263 = "cult_p7_guard_01";
					sLocal_264 = "cult_p7_guard_02";
					sLocal_265 = "cult_p7_trv";
					sLocal_266 = "cult_p7_victim_01";
					sLocal_268 = "cult_p7_cam";
					fLocal_89 = 0.98f;
					fLocal_88 = 0.98f;
					unk_0x78FCB2E22C41B9D5(joaat("prop_box_wood03a"));
					unk_0x78FCB2E22C41B9D5(joaat("prop_box_wood04a"));
					unk_0x78FCB2E22C41B9D5(joaat("prop_box_wood05a"));
					unk_0x78FCB2E22C41B9D5(joaat("prop_security_case_01"));
					if (!unk_0xFFDFD8490027DBA5())
					{
						unk_0x85D9FC15836825C1("ac_ig_3_p3_b", 8);
					}
				}
				if (unk_0x8F678487EEBD8CE4(iLocal_104))
				{
					unk_0x93370FA10F15BE44(&iLocal_104);
				}
				func_23(1, 1, 1, 0, 0, 0, 0);
				unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
				unk_0xD289B55B6AADBA10(1);
				unk_0x644F1D0C5427A242(0);
				unk_0x8CFF639CEFF5CF16(0);
				unk_0x98EFE9ABE449C2A3(unk_0x9B0761B4C3EB8BC7(), 1);
				unk_0x69C71C91F56D82B9(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_unarmed"), 1);
				unk_0x21723EF7B2FCC4CC("AC_DELIVERED");
				if (func_187())
				{
					func_186(0);
				}
				func_184();
				wait(0);
				if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					iLocal_99 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
					if (unk_0x80FF6C016CDB0FAF(iLocal_99, 0))
					{
						if (unk_0xFD7B900D58065E3B(iLocal_99))
						{
							iLocal_93++;
						}
					}
				}
				else
				{
					iLocal_99 = unk_0xA5D3CD332CD10EE9();
					if (!unk_0x5AEB5DDFFAD43CA5(uLocal_97[0]))
					{
						unk_0x9B94F6169B0DAEFD(uLocal_97[0]);
						unk_0x59478CBBF96AF7D1(uLocal_97[0]);
					}
					iLocal_93++;
				}
			}
			break;
		
		case 1:
			if (unk_0xAE06B9E39EBDE049(iLocal_99))
			{
				if (!unk_0x1758275D343D5BA3(iLocal_99))
				{
					unk_0x4F3C4F457D44BB0F(iLocal_99, 1, 0);
				}
				if (unk_0xC2169C00B643278B(iLocal_99, Local_54, 13f, 13f, 13f, 0, 1, 0))
				{
					unk_0x03D382CB0B44E2FC(iLocal_99, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!unk_0xA59F96B50B97E63C(iLocal_99, 0))
					{
						unk_0xE922BAA80E8F9324(iLocal_99, 149.8882f);
						unk_0xB11D151E210D4FAC(iLocal_99, 1084227584);
					}
				}
			}
			unk_0x555EE41D7C7078E6(Local_54, 12f, 1, 0, 0, false);
			unk_0x03D382CB0B44E2FC(unk_0x9B0761B4C3EB8BC7(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			unk_0xE922BAA80E8F9324(unk_0x9B0761B4C3EB8BC7(), 128.2065f);
			if (!unk_0x5AEB5DDFFAD43CA5(uLocal_97[0]))
			{
				unk_0x03D382CB0B44E2FC(uLocal_97[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				unk_0xE922BAA80E8F9324(uLocal_97[0], 128.2065f);
			}
			iLocal_98[0] = unk_0xB3116B49FE00E2F1(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			func_99(&uLocal_271, 1, iLocal_98[0], "ACULTMember1", 0, 1);
			if (Global_111858.f_24991.f_5 >= 3)
			{
				iLocal_98[1] = unk_0xB3116B49FE00E2F1(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				func_99(&uLocal_271, 2, iLocal_98[1], "ACULTMember2", 0, 1);
			}
			func_99(&uLocal_271, 0, unk_0x9B0761B4C3EB8BC7(), "TREVOR", 0, 1);
			func_99(&uLocal_271, 3, 0, "ACULTMaster", 0, 1);
			func_99(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
			if (Global_111858.f_24991.f_5 != 1 && Global_111858.f_24991.f_5 != 2)
			{
				func_100(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
			}
			settimerb(0);
			unk_0x4E65320BC9AD521C(iLocal_98[0], 1);
			iLocal_100 = unk_0x79CC07752E7432A1(joaat("prop_anim_cash_pile_02"), Local_53, 1, 1, 0);
			iLocal_101 = unk_0xA3E0B448E324D459(joaat("weapon_assaultrifle"), -1, unk_0x3E4D3CCC220BDFB1(iLocal_98[0], 1), 1, 1065353216, 0, 0, 1);
			unk_0xF8A652CE310FFC53(iLocal_101, iLocal_98[0], unk_0xE6B87C42793036AA(iLocal_98[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_111858.f_24991.f_5 < 3)
			{
				if (Global_111858.f_24991.f_5 == 0)
				{
					unk_0xF8A652CE310FFC53(iLocal_100, unk_0x9B0761B4C3EB8BC7(), unk_0xE6B87C42793036AA(unk_0x9B0761B4C3EB8BC7(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					unk_0xF8A652CE310FFC53(iLocal_100, unk_0x9B0761B4C3EB8BC7(), unk_0xE6B87C42793036AA(unk_0x9B0761B4C3EB8BC7(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			else if (Global_111858.f_24991.f_5 >= 3)
			{
				unk_0x92BD213E6A0E666B(iLocal_98[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			iLocal_106 = unk_0x68C2E3309DCAD71E("DEFAULT_ANIMATED_CAMERA", 1);
			iLocal_92 = unk_0xF341A134A5B8D4F6(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			unk_0xDFDB9C533700BC17(unk_0x9B0761B4C3EB8BC7(), iLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1148846080, 0);
			unk_0xDFDB9C533700BC17(iLocal_98[0], iLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_111858.f_24991.f_5 >= 3)
			{
				unk_0xDFDB9C533700BC17(iLocal_98[1], iLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			unk_0x00736EE41CC355ED(iLocal_106, iLocal_92, sLocal_268, "random@altruist_cult");
			unk_0x3ED9330214992278(true, 0, 3000, 1, 0, 0);
			if (!unk_0x5AEB5DDFFAD43CA5(uLocal_97[0]))
			{
				unk_0xDFDB9C533700BC17(uLocal_97[0], iLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_93++;
			break;
		
		case 2:
			if (!unk_0x5AEB5DDFFAD43CA5(uLocal_97[0]))
			{
				if (unk_0xE080FA9EB010F041(uLocal_97[0]))
				{
					func_182(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (timerb() > 2000 && timerb() < 2100)
			{
				if (Global_111858.f_24991.f_5 == 1 || Global_111858.f_24991.f_5 == 2)
				{
					if (!func_115())
					{
						func_100(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
					}
				}
			}
			if (unk_0x369E69441C066912(iLocal_92) > fLocal_89)
			{
				iLocal_93++;
			}
			break;
		
		case 3:
			if (!unk_0x5AEB5DDFFAD43CA5(uLocal_97[0]))
			{
				if (unk_0xE080FA9EB010F041(uLocal_97[0]))
				{
					func_182(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					func_182(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_111858.f_24991.f_5 == 1 || Global_111858.f_24991.f_5 == 2)
			{
				if ((unk_0x369E69441C066912(iLocal_92) > 0.9742857f && !iLocal_85) && unk_0xA860C15A1C027CBB() == 4)
				{
					unk_0x0A794A8277A63161("CamPushInNeutral", 0, 0);
					unk_0xC4CC25B68A91D144(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_85 = 1;
				}
			}
			if (unk_0x369E69441C066912(iLocal_92) > fLocal_88)
			{
				iLocal_93++;
			}
			break;
		
		case 4:
			if (Global_111858.f_24991.f_5 < 3)
			{
				if (Global_111858.f_24991.f_5 != 1 && Global_111858.f_24991.f_5 != 2)
				{
					func_135();
					if (unk_0xAE06B9E39EBDE049(iLocal_98[0]))
					{
						unk_0x586DDC617E714637(&(iLocal_98[0]));
					}
					if (unk_0xAE06B9E39EBDE049(iLocal_98[1]))
					{
						unk_0x586DDC617E714637(&(iLocal_98[1]));
					}
				}
				else
				{
					settimerb(0);
					if (unk_0xAE06B9E39EBDE049(iLocal_98[0]))
					{
						unk_0x80250B8368A4E611(iLocal_98[0], false, 0);
					}
					if (unk_0xAE06B9E39EBDE049(iLocal_98[1]))
					{
						unk_0x80250B8368A4E611(iLocal_98[1], false, 0);
					}
					if (unk_0xAE06B9E39EBDE049(uLocal_97[0]))
					{
						unk_0x80250B8368A4E611(uLocal_97[0], false, 0);
					}
					iLocal_93++;
				}
				if (unk_0xAE06B9E39EBDE049(iLocal_100))
				{
					unk_0x315F7D8C33F0AB37(&iLocal_100);
				}
				if (unk_0xAE06B9E39EBDE049(iLocal_101))
				{
					unk_0x315F7D8C33F0AB37(&iLocal_101);
				}
				unk_0x9B94F6169B0DAEFD(unk_0x9B0761B4C3EB8BC7());
				if (Global_111858.f_24991.f_5 == 0)
				{
					unk_0x854FB153F2EA838B(unk_0x9B0761B4C3EB8BC7(), -668482597, 0, 0, 0);
					unk_0xF0C2AEEDB4BDCF16(unk_0x460153A63B9477BC(), 1f, 750, 0, 1, 0);
				}
				if (unk_0xF005CCA4263DF67F(sLocal_268, "cult_p4_cam"))
				{
					unk_0x3ED9330214992278(false, 0, 3000, 1, 0, 0);
				}
				else
				{
					unk_0x47012CDD5C524D7B(0, 0, 3, 0);
				}
				unk_0x856549C07003344B(iLocal_106, false);
				func_23(0, 1, 1, 0, 0, 0, 0);
				unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
				unk_0x644F1D0C5427A242(1);
				unk_0x8CFF639CEFF5CF16(1);
				unk_0x98EFE9ABE449C2A3(unk_0x9B0761B4C3EB8BC7(), 0);
				unk_0x4C4FC7841A5FB983(0f);
				func_160(func_15(), 1, 1000, 0, 0);
			}
			if (Global_111858.f_24991.f_5 != 1 && Global_111858.f_24991.f_5 != 2)
			{
				unk_0x21723EF7B2FCC4CC("AC_DONE");
				Global_111858.f_24991.f_5++;
				iLocal_78 = 1;
			}
			break;
		
		case 5:
			if (!func_115() || timerb() > 7000)
			{
				func_135();
				if (unk_0xAE06B9E39EBDE049(iLocal_98[0]))
				{
					unk_0x586DDC617E714637(&(iLocal_98[0]));
				}
				if (unk_0xAE06B9E39EBDE049(iLocal_98[1]))
				{
					unk_0x586DDC617E714637(&(iLocal_98[1]));
				}
				unk_0x21723EF7B2FCC4CC("AC_DONE");
				Global_111858.f_24991.f_5++;
				iLocal_78 = 1;
			}
			break;
	}
}

void func_189()
{
	if (func_191())
	{
		if (func_15() == 2)
		{
			if (unk_0xA9612D351EFBCEE5(func_190()))
			{
				unk_0x611FFFF42603C2CD(func_190(), &uLocal_90, &iLocal_91);
				if (iLocal_91 == 1)
				{
					uLocal_97[0] = unk_0x1615D8CF888EABB9(func_190(), 0);
					if (unk_0xC2169C00B643278B(uLocal_97[0], Local_54, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
						{
							if (!unk_0xA59F96B50B97E63C(unk_0xA5D3CD332CD10EE9(), 0))
							{
								unk_0xD4C86DEC93F19FB0(unk_0xA5D3CD332CD10EE9(), 10.5f, 5, 0);
							}
						}
						settimera(0);
						iLocal_50 = 1;
					}
				}
				else if (iLocal_91 == 2)
				{
					uLocal_97[0] = unk_0x1615D8CF888EABB9(func_190(), 0);
					uLocal_97[1] = unk_0x1615D8CF888EABB9(func_190(), 1);
					if (unk_0xC2169C00B643278B(uLocal_97[0], Local_54, 5f, 5f, 5f, 0, 1, 0) && unk_0xC2169C00B643278B(uLocal_97[1], Local_54, 5f, 5f, 5f, 0, 1, 0))
					{
						if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
						{
							if (!unk_0xA59F96B50B97E63C(unk_0xA5D3CD332CD10EE9(), 0))
							{
								unk_0xD4C86DEC93F19FB0(unk_0xA5D3CD332CD10EE9(), 10.5f, 5, 0);
							}
						}
						settimera(0);
						iLocal_50 = 1;
					}
				}
			}
		}
	}
}

var func_190()
{
	return unk_0x14A1FF4316FA17CB(unk_0x2639A2323BEA8CC6());
}

bool func_191()
{
	return Global_31205;
}

void func_192()
{
	if (func_195())
	{
		if (iLocal_260 == 0)
		{
			iLocal_260 = unk_0xC08A186299DFDA0A(Local_53 - Vector(100f, 60f, 80f), Local_53 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
		}
		while (unk_0x272784C60C397DB6(func_95(unk_0x460153A63B9477BC()), Local_53, 1) < 209f)
		{
			wait(0);
		}
	}
	if (func_15() == 0 || func_15() == 1)
	{
		if (unk_0x991DEF33C181865B(2017343592, 1862763509) != 5)
		{
			if (func_194())
			{
				unk_0xEFBCE8F8316F89EA(5, 2017343592, 1862763509);
			}
			else if (func_193())
			{
				unk_0xEFBCE8F8316F89EA(5, 2017343592, 1862763509);
			}
		}
	}
	else if (func_15() == 2)
	{
		if (unk_0x991DEF33C181865B(2017343592, 1862763509) != 5)
		{
			if (func_194())
			{
				if (unk_0x7922FF28ED63354A(unk_0x9B0761B4C3EB8BC7()) || (unk_0x42A04E707DE50816(unk_0x9B0761B4C3EB8BC7()) && unk_0x8B1FF66E0C62B7AE(unk_0x460153A63B9477BC())))
				{
					unk_0xEFBCE8F8316F89EA(5, 2017343592, 1862763509);
				}
			}
			else if (func_193())
			{
				unk_0xEFBCE8F8316F89EA(5, 2017343592, 1862763509);
			}
			else if (unk_0x991DEF33C181865B(2017343592, 1862763509) != 1)
			{
				unk_0xEFBCE8F8316F89EA(1, 2017343592, 1862763509);
			}
		}
	}
	if (func_194())
	{
		if (iLocal_83)
		{
			if (!unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 3))
			{
				unk_0x21723EF7B2FCC4CC("AC_START");
			}
			unk_0x34FEEAC2548C3789(0f);
			unk_0x309C0E6FCCD30F19("COUNTRYSIDE_ALTRUIST_CULT_01", 1);
			if (unk_0x8865B8E834909D76(Global_40754[9 /*31*/].f_2, 6f, Global_40754[9 /*31*/].f_5, 0))
			{
				unk_0x2D4BE3F34B14D5F0(Global_40754[9 /*31*/].f_5, Global_40754[9 /*31*/].f_2, 0, 0f, 0);
			}
			if (unk_0x8865B8E834909D76(Global_40754[10 /*31*/].f_2, 6f, Global_40754[10 /*31*/].f_5, 0))
			{
				unk_0x2D4BE3F34B14D5F0(Global_40754[10 /*31*/].f_5, Global_40754[10 /*31*/].f_2, 0, 0f, 0);
			}
			bLocal_84 = true;
			iLocal_83 = 0;
		}
	}
	else if (!iLocal_83)
	{
		if (unk_0xA52DE5C1ED580F17())
		{
			unk_0x21723EF7B2FCC4CC("AC_END");
		}
		unk_0x34FEEAC2548C3789(1f);
		unk_0x309C0E6FCCD30F19("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		if (!bLocal_84)
		{
			func_157();
		}
		iLocal_83 = 1;
	}
}

int func_193()
{
	if ((((((unk_0xD21635E3A532AA86(Local_55, Local_56, fLocal_57, 1) || unk_0xD21635E3A532AA86(Local_58, Local_59, fLocal_60, 1)) || unk_0xD21635E3A532AA86(Local_61, Local_62, fLocal_63, 1)) || unk_0xD21635E3A532AA86(Local_64, Local_65, fLocal_66, 1)) || unk_0xD21635E3A532AA86(Local_67, Local_68, fLocal_69, 1)) || unk_0xD21635E3A532AA86(Local_70, Local_71, fLocal_72, 1)) || unk_0xD21635E3A532AA86(Local_73, Local_74, fLocal_75, 1))
	{
		return 1;
	}
	return 0;
}

int func_194()
{
	if ((((((unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_55, Local_56, fLocal_57, 0, 1, 0) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_58, Local_59, fLocal_60, 0, 1, 0)) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_61, Local_62, fLocal_63, 0, 1, 0)) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_64, Local_65, fLocal_66, 0, 1, 0)) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_67, Local_68, fLocal_69, 0, 1, 0)) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_70, Local_71, fLocal_72, 0, 1, 0)) || unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), Local_73, Local_74, fLocal_75, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_195()
{
	if (Global_111858.f_24991.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_196()
{
	unk_0xEFBCE8F8316F89EA(255, 2017343592, 1862763509);
	if (Global_111858.f_24991.f_5 >= iLocal_96 && Global_111858.f_24991.f_5 != 1000)
	{
		if (bLocal_76)
		{
			func_1(1);
			func_11();
			func_3(0);
			iLocal_50 = 3;
		}
		else
		{
			func_197(&uLocal_109);
			Global_94212 = 0;
			Global_94213 = 0;
			Global_94214 = 0;
			func_14(0, 1);
			func_12(0, 1);
			func_2(0);
			unk_0xA47631D02B6634DB(1);
			unk_0x3A73329837AFF65B(0);
			unk_0x2D683744B695AA81(0);
			func_3(0);
			unk_0x34FEEAC2548C3789(1f);
			unk_0x40ECEB892E6BDDDB(3, 1);
			unk_0x40ECEB892E6BDDDB(5, 1);
			unk_0x66B68DE096515636();
			iLocal_83 = 0;
			func_96();
			Global_111858.f_24991.f_5 = (iLocal_96 - 1);
			unk_0xD39E529EBE5DB04F();
		}
	}
	else
	{
		unk_0x7C58E35D84128447();
		func_197(&uLocal_109);
		Global_94212 = 0;
		Global_94213 = 0;
		Global_94214 = 0;
		func_14(0, 1);
		func_12(0, 1);
		func_2(0);
		unk_0xA47631D02B6634DB(1);
		unk_0x3A73329837AFF65B(0);
		unk_0x2D683744B695AA81(0);
		func_3(0);
		if (unk_0x95EF219D38B20CFF(uLocal_259))
		{
			unk_0x2E352DDBBF674246(&uLocal_259);
			func_98(0);
		}
		unk_0x34FEEAC2548C3789(1f);
		unk_0x40ECEB892E6BDDDB(3, 1);
		unk_0x40ECEB892E6BDDDB(5, 1);
		unk_0x66B68DE096515636();
		iLocal_83 = 0;
		unk_0xD39E529EBE5DB04F();
	}
}

void func_197(var uParam0)
{
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		unk_0x2E352DDBBF674246(uParam0);
		*uParam0 = 0;
	}
}

