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
	var uLocal_68 = -1;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
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
	int iLocal_96 = 0;
	var uLocal_97 = 0;
	float fLocal_98 = 0f;
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
	struct<6> Local_141[16];
	var uLocal_142[4] = { 0, 0, 0, 0 };
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	struct<16> Local_148[4];
	struct<78> Local_149 = { 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<2> Local_150[4];
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
	var uLocal_186 = 4;
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
	var uLocal_197 = 2;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = -2147483647;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 60;
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
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 2;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = -2147483647;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 60;
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
	var uLocal_357 = 2;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = -2147483647;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 60;
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
	var uLocal_436 = 0;
	var uLocal_437 = 2;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = -2147483647;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 60;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
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
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
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
	var uLocal_489 = 0;
	var uLocal_490 = 0;
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
	var uLocal_506 = 0;
	struct<21> Local_507 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_76 = 3f;
	fLocal_77 = 0f;
	fLocal_78 = 2f;
	fLocal_79 = 100f;
	iLocal_96 = -1;
	fLocal_98 = 0.5f;
	iLocal_143 = -1;
	iLocal_145 = -1;
	ScriptParam_507 = 165;
	if (unk_0x25DDB354A40FFCDB())
	{
		func_221(ScriptParam_507);
	}
	func_220(1);
	while (true)
	{
		func_219();
		if (func_209())
		{
			func_208();
		}
		if (unk_0x25DDB354A40FFCDB())
		{
			func_1(&uLocal_151);
		}
		else
		{
			func_208();
		}
	}
}

void func_1(var uParam0)
{
	if (Local_149 < 11)
	{
		func_187(uParam0);
	}
	switch (*uParam0)
	{
		case 0:
			if (Local_149 > 3 && !Local_149 == 9)
			{
				func_186(uParam0, 11);
				return;
			}
			func_184(uParam0);
			break;
		
		case 1:
			func_181(uParam0);
			break;
		
		case 2:
			func_177(uParam0);
			break;
		
		case 3:
			func_173(uParam0);
			break;
		
		case 4:
			func_171(uParam0);
			break;
		
		case 5:
			func_169(uParam0);
			break;
		
		case 6:
			func_165(uParam0);
			break;
		
		case 7:
			func_128(uParam0);
			break;
		
		case 8:
			func_86(uParam0);
			break;
		
		case 9:
			func_62(uParam0);
			break;
		
		case 10:
			func_53(uParam0);
			break;
		
		case 11:
			func_29(uParam0);
			break;
	}
	switch (Local_149)
	{
		case 0:
			func_28(uParam0);
			break;
		
		case 1:
			func_27(uParam0);
			break;
		
		case 2:
			func_26(uParam0);
			break;
		
		case 3:
			func_25(uParam0);
			break;
		
		case 4:
			func_23(uParam0);
			break;
		
		case 5:
			func_22(uParam0);
			break;
		
		case 6:
			func_18(uParam0);
			break;
		
		case 7:
			func_17(uParam0);
			break;
		
		case 8:
			func_13(uParam0);
			break;
		
		case 9:
			func_4(uParam0);
			break;
		
		case 10:
			break;
		
		case 11:
			break;
	}
	func_2(uParam0);
}

void func_2(var uParam0)
{
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_2, 5))
	{
		unk_0x64083C4199676F44();
	}
	unk_0xD2459066EA58CE43(&(uParam0->f_2), 5);
	if (((*uParam0 > 1 && *uParam0 < 11) && unk_0x95EF219D38B20CFF(uParam0->f_34)) && !unk_0xF0C12886E5C1B20E())
	{
		unk_0x37FC7E88C7659D33(uParam0->f_34, 255, 255, 255, 255, 0);
	}
	if (unk_0xCE990E643CD9D0E5(uParam0->f_2, 17))
	{
		func_3(uParam0);
		unk_0xD2459066EA58CE43(&(uParam0->f_2), 17);
	}
}

void func_3(var uParam0)
{
	unk_0x177AA645FB4B3A38("LineArcadeMinigame", "Degenatron_DontCrossTheLine_Home", 0.5f, 0.5f, (1f * uParam0->f_9), 1f, 0f, 255, 255, 255, 255, 0);
}

void func_4(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xAFF96FDC3971E7EA())
	{
		bVar0 = true;
		bVar1 = false;
		bVar2 = false;
		iVar3 = 0;
		iVar4 = 0;
		while (iVar4 <= (unk_0xEFA28384DDD283E1() - 1))
		{
			if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar4)) && Local_150[iVar4 /*2*/] > -1)
			{
				if (!unk_0xCE990E643CD9D0E5(Local_150[iVar4 /*2*/].f_1, 6))
				{
					bVar2 = true;
				}
				if (unk_0xCE990E643CD9D0E5(Local_150[iVar4 /*2*/].f_1, 2))
				{
					bVar1 = true;
				}
				if (!unk_0xCE990E643CD9D0E5(Local_150[iVar4 /*2*/].f_1, 4))
				{
					bVar0 = false;
				}
				if (unk_0xCE990E643CD9D0E5(Local_150[iVar4 /*2*/].f_1, 3))
				{
					iVar3++;
				}
			}
			else if (Local_149.f_7[iVar4] != 0)
			{
				Local_149.f_7[iVar4] = 0;
			}
			iVar4++;
		}
		if ((!func_12(&(uParam0->f_28)) && !func_11(uParam0)) && !bVar1)
		{
			func_10(&(uParam0->f_28), 0, 0);
		}
		else
		{
			if ((bVar2 || bVar1) || func_11(uParam0))
			{
				func_9(&(uParam0->f_28));
			}
			if (((func_8(&(uParam0->f_28), 3000, 0) && func_12(&(uParam0->f_28))) && !func_11(uParam0)) && !bVar1)
			{
				if (bVar0)
				{
					func_7(uParam0, 10);
					return;
				}
				else if (!bVar1)
				{
					Local_149.f_77 = 0;
					func_7(uParam0, 4);
					Local_149.f_1 = -1;
					return;
				}
			}
		}
		if (!func_12(&(uParam0->f_26)) && !bVar2)
		{
			func_10(&(uParam0->f_26), 0, 0);
		}
		else
		{
			if (bVar2)
			{
				func_9(&(uParam0->f_26));
				return;
			}
			if (func_8(&(uParam0->f_26), 10000, 0))
			{
				if (iVar3 > 1)
				{
					func_6(0);
					func_5(0, 0);
					Local_149.f_77 = 0;
					func_7(uParam0, 4);
				}
				else
				{
					func_7(uParam0, 10);
				}
			}
		}
	}
}

void func_5(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_3, 0))
		{
			unk_0xBE20AB8238688965(&Global_1663764, 7);
		}
		unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_3), 0);
	}
	else
	{
		if (bParam1)
		{
			if (unk_0xCE990E643CD9D0E5(Global_1663764, 4))
			{
				unk_0xD2459066EA58CE43(&Global_1663764, 4);
			}
			if (unk_0xCE990E643CD9D0E5(Global_1663764, 0))
			{
				unk_0xBE20AB8238688965(&Global_1663764, 1);
				unk_0xD2459066EA58CE43(&Global_1663764, 0);
			}
		}
		unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_3), 0);
	}
}

void func_6(bool bParam0)
{
	if (bParam0)
	{
		unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_3), 1);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_3), 1);
	}
}

void func_7(var uParam0, int iParam1)
{
	uParam0->f_4 = 0;
	Local_149 = iParam1;
}

int func_8(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
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

void func_9(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)
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

int func_11(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_150[iLocal_143 /*2*/].f_1, 6) && (*uParam0 != 9 || *uParam0 != 3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_12(var uParam0)
{
	return uParam0->f_1;
}

void func_13(var uParam0)
{
	int iVar0;
	bool bVar1;
	
	if (unk_0xAFF96FDC3971E7EA())
	{
		if (!func_12(&(uParam0->f_22)))
		{
			func_10(&(uParam0->f_22), 0, 0);
			if (Local_149.f_1 != -1)
			{
				Local_149.f_7[Local_149.f_1]++;
			}
			iVar0 = 0;
			while (iVar0 <= (unk_0xEFA28384DDD283E1() - 1))
			{
				if (!unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
				{
					Local_149.f_7[iVar0] = 0;
				}
				iVar0++;
			}
		}
		else if (func_8(&(uParam0->f_22), 3000, 0))
		{
			bVar1 = true;
			iVar0 = 0;
			while (iVar0 <= (unk_0xEFA28384DDD283E1() - 1))
			{
				if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)) && Local_150[iVar0 /*2*/] > -1)
				{
					if (!unk_0xCE990E643CD9D0E5(Local_150[iVar0 /*2*/].f_1, 2))
					{
						bVar1 = false;
					}
					else
					{
						iVar0++;
					}
					if (bVar1)
					{
						func_14(uParam0);
						func_5(1, 0);
						func_7(uParam0, 9);
					}
				}

void func_14(var uParam0)
{
	int iVar0;
	
	func_9(&(uParam0->f_12));
	func_9(&(uParam0->f_16));
	func_9(&(uParam0->f_18));
	func_9(&(uParam0->f_20));
	func_9(&(uParam0->f_22));
	func_9(&(uParam0->f_26));
	func_9(&(uParam0->f_28));
	func_9(&(uParam0->f_30));
	func_9(&(uParam0->f_24));
	unk_0xD2459066EA58CE43(&(uParam0->f_2), 0);
	unk_0xD2459066EA58CE43(&(uParam0->f_2), 1);
	unk_0xD2459066EA58CE43(&(uParam0->f_2), 2);
	unk_0xD2459066EA58CE43(&(uParam0->f_2), 3);
	unk_0xD2459066EA58CE43(&(uParam0->f_2), 9);
	unk_0xD2459066EA58CE43(&(uParam0->f_2), 8);
	unk_0xD2459066EA58CE43(&(uParam0->f_2), 7);
	unk_0xD2459066EA58CE43(&(uParam0->f_2), 10);
	unk_0xD2459066EA58CE43(&(uParam0->f_2), 12);
	unk_0xD2459066EA58CE43(&(uParam0->f_2), 6);
	unk_0xD2459066EA58CE43(&(uParam0->f_2), 11);
	unk_0xD2459066EA58CE43(&(uParam0->f_2), 13);
	unk_0xD2459066EA58CE43(&(uParam0->f_2), 15);
	unk_0xD2459066EA58CE43(&(uParam0->f_2), 16);
	unk_0xD2459066EA58CE43(&(uParam0->f_2), 18);
	iVar0 = 0;
	while (iVar0 <= (unk_0xEFA28384DDD283E1() - 1))
	{
		if (iVar0 < 4)
		{
			uParam0->f_35[iVar0 /*80*/].f_3 = 0;
			uParam0->f_35[iVar0 /*80*/].f_18 = 1f;
		}
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
		{
			func_16(&(uParam0->f_35), 0, iVar0);
		}
		else
		{
			func_15(&(uParam0->f_35[iVar0 /*80*/].f_19));
			func_16(&(uParam0->f_35), 3, iVar0);
		}
		iVar0++;
	}
}

void func_15(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0f;
		iVar0++;
	}
}

void func_16(var uParam0, int iParam1, int iParam2)
{
	(*uParam0)[iParam2 /*80*/] = iParam1;
}

void func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (unk_0xAFF96FDC3971E7EA())
	{
		iVar1 = 4;
		iVar2 = -1;
		iVar0 = 0;
		while (iVar0 <= (unk_0xEFA28384DDD283E1() - 1))
		{
			if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)) && Local_150[iVar0 /*2*/] > -1)
			{
				if (uParam0->f_35[iVar0 /*80*/] == 3)
				{
					iVar1 = (iVar1 - 1);
				}
				else if (uParam0->f_35[iVar0 /*80*/] == 2)
				{
					iVar2 = iVar0;
				}
			}
			else
			{
				iVar1 = (iVar1 - 1);
			}
			iVar0++;
		}
		if (iVar1 <= 1)
		{
			if (!func_12(&(uParam0->f_24)))
			{
				func_10(&(uParam0->f_24), 0, 0);
			}
			else if (func_8(&(uParam0->f_24), 1000, 0))
			{
				func_7(uParam0, 8);
			}
			else if (func_8(&(uParam0->f_24), 500, 0))
			{
				if (iVar2 > -1)
				{
					Local_149.f_1 = iVar2;
				}
			}
		}
	}
}

void func_18(var uParam0)
{
	if (unk_0xAFF96FDC3971E7EA())
	{
		if (func_12(&(uParam0->f_18)))
		{
			if (func_8(&(uParam0->f_18), 2000, 0) && !unk_0xCE990E643CD9D0E5(iLocal_144, 1))
			{
				func_19(unk_0x29B9AF1CB5B8175D() + 1250);
				unk_0xBE20AB8238688965(&iLocal_144, 1);
			}
			if (func_8(&(uParam0->f_18), 3000, 0))
			{
				func_7(uParam0, 7);
				unk_0xD2459066EA58CE43(&iLocal_144, 1);
			}
		}
	}
}

void func_19(var uParam0)
{
	struct<3> Var0;
	int iVar1;
	
	Var0.x = -704173214;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = uParam0;
	iVar1 = func_20(1);
	if (!iVar1 == 0)
	{
		unk_0xB802750B43D4047C(1, &Var0, 3, iVar1);
	}
}

var func_20(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
		{
			iVar2 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar1));
			if (func_21(iVar2, 0, 0))
			{
				if (iVar2 != unk_0x460153A63B9477BC() || iParam0)
				{
					unk_0xBE20AB8238688965(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_21(int iParam0, bool bParam1, bool bParam2)
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

void func_22(var uParam0)
{
	int iVar0;
	
	if (unk_0xAFF96FDC3971E7EA())
	{
		iVar0 = unk_0xB9E6DF0411C3488E();
		if (iVar0 == 1)
		{
			func_7(uParam0, 10);
			return;
		}
		if (func_12(&(uParam0->f_16)))
		{
			if (func_8(&(uParam0->f_16), 2000, 0))
			{
				func_7(uParam0, 6);
			}
		}
	}
}

void func_23(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	
	if (unk_0xAFF96FDC3971E7EA())
	{
		if (!func_12(&(uParam0->f_32)))
		{
			func_10(&(uParam0->f_32), 0, 0);
		}
		else if (func_8(&(uParam0->f_32), 1000, 0))
		{
			iVar0 = unk_0xB9E6DF0411C3488E();
			if (iVar0 == 1)
			{
				func_7(uParam0, 10);
				return;
			}
			bVar4 = true;
			switch (Local_149.f_77)
			{
				case 0:
					iVar1 = 0;
					while (iVar1 <= (unk_0xEFA28384DDD283E1() - 1))
					{
						if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)) && Local_150[iVar1 /*2*/] > -1)
						{
							Local_149.f_2[iVar1] = Local_150[iVar1 /*2*/];
						}
						else
						{
							Local_149.f_2[iVar1] = -1;
						}
						iVar1++;
					}
					Local_149.f_77 = 1;
					break;
				
				case 1:
					iVar1 = 0;
					while (iVar1 <= (unk_0xEFA28384DDD283E1() - 1))
					{
						if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
						{
							if (Local_149.f_2[iVar1] == -1)
							{
								Local_149.f_2[iVar1] = func_24();
							}
						}
						iVar1++;
					}
					Local_149.f_77 = 2;
					break;
				
				case 2:
					iVar1 = 0;
					while (iVar1 <= (unk_0xEFA28384DDD283E1() - 1))
					{
						if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
						{
							iVar2 = 0;
							while (iVar2 <= (unk_0xEFA28384DDD283E1() - 1))
							{
								if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar2)))
								{
									if (iVar2 != iVar1 && (Local_149.f_2[iVar1] == Local_149.f_2[iVar2] || Local_149.f_2[iVar1] == -1))
									{
										Local_149.f_2[iVar1] = -1;
										Local_149.f_77 = 1;
										return;
									}
								}
								iVar2++;
							}
						}
						iVar1++;
					}
					iVar1 = 0;
					while (iVar1 <= (unk_0xEFA28384DDD283E1() - 1))
					{
						if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
						{
							if (Local_149.f_2[iVar1] != -1)
							{
								iVar3 = func_24();
								if (iVar3 != -1 && iVar3 < Local_149.f_2[iVar1])
								{
									Local_149.f_2[iVar1] = iVar3;
									return;
								}
							}
						}
						iVar1++;
					}
					Local_149.f_77 = 3;
					break;
				
				case 3:
					iVar1 = 0;
					while (iVar1 <= (unk_0xEFA28384DDD283E1() - 1))
					{
						if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
						{
							if (!unk_0xCE990E643CD9D0E5(Local_150[iVar1 /*2*/].f_1, 5))
							{
								bVar4 = false;
							}
						}
						iVar1++;
					}
					if (bVar4)
					{
						func_9(&(uParam0->f_12));
						func_9(&(uParam0->f_32));
						func_7(uParam0, 5);
					}
					break;
				}
			}
	}
}

int func_24()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= (unk_0xEFA28384DDD283E1() - 1))
	{
		iVar2 = 0;
		iVar1 = 0;
		while (iVar1 <= (unk_0xEFA28384DDD283E1() - 1))
		{
			if (Local_149.f_2[iVar1] == iVar0)
			{
				iVar2 = 1;
			}
			else
			{
				iVar1++;
			}
		}
		if (iVar2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_25(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (unk_0xAFF96FDC3971E7EA())
	{
		iVar0 = 1;
		bVar1 = false;
		iVar2 = 0;
		while (iVar2 <= (unk_0xEFA28384DDD283E1() - 1))
		{
			if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar2)) && Local_150[iVar2 /*2*/] > -1)
			{
				if (!unk_0xCE990E643CD9D0E5(Local_150[iVar2 /*2*/].f_1, 6))
				{
					bVar1 = true;
				}
				if (unk_0xCE990E643CD9D0E5(Local_150[iVar2 /*2*/].f_1, 2))
				{
					iVar0 = 0;
				}
			}
			iVar2++;
		}
		if ((!func_12(&(uParam0->f_14)) && !func_11(uParam0)) && !bVar1)
		{
			func_10(&(uParam0->f_14), 0, 0);
		}
		else
		{
			if (bVar1 || func_11(uParam0))
			{
				func_9(&(uParam0->f_14));
				return;
			}
			iVar3 = unk_0xB9E6DF0411C3488E();
			iVar4 = 30000;
			if (iVar3 == 1 && !func_11(uParam0))
			{
				iVar4 = (iVar4 / 2);
			}
			if ((iVar0 && iVar3 > 1) || func_8(&(uParam0->f_14), iVar4, 0))
			{
				if (!func_12(&(uParam0->f_12)))
				{
					func_10(&(uParam0->f_12), 0, 0);
				}
				else if (func_8(&(uParam0->f_12), 3000, 0) && !func_11(uParam0))
				{
					func_9(&(uParam0->f_12));
					if (iVar3 == 1)
					{
						func_7(uParam0, 10);
						return;
					}
					Local_149.f_77 = 0;
					func_7(uParam0, 4);
					func_6(0);
					func_5(0, 0);
				}
			}
		}
	}
}

void func_26(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (unk_0xAFF96FDC3971E7EA())
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= (unk_0xEFA28384DDD283E1() - 1))
		{
			if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)) && Local_150[iVar1 /*2*/] > -1)
			{
				if (!unk_0xCE990E643CD9D0E5(Local_150[iVar1 /*2*/].f_1, 1))
				{
					bVar0 = false;
				}
				else
				{
					iVar1++;
				}
				if (bVar0)
				{
					func_7(uParam0, 3);
				}
			}

void func_27(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	if (unk_0xAFF96FDC3971E7EA())
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= (unk_0xEFA28384DDD283E1() - 1))
		{
			if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)) && Local_150[iVar1 /*2*/] > -1)
			{
				if (!unk_0xCE990E643CD9D0E5(Local_150[iVar1 /*2*/].f_1, 0))
				{
					bVar0 = false;
				}
				else
				{
					iVar1++;
				}
				if (bVar0)
				{
					func_7(uParam0, 2);
				}
			}

void func_28(var uParam0)
{
	int iVar0;
	
	if (unk_0xAFF96FDC3971E7EA())
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0xEFA28384DDD283E1() - 1))
		{
			if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
			{
				if (Local_150[iVar0 /*2*/] == -1)
				{
					return;
				}
			}
			iVar0++;
		}
		func_7(uParam0, 1);
	}
}

void func_29(var uParam0)
{
	unk_0xFA07F8BEBDAAFBA8("DLC_Exec_Arc_Mac_Playing_Game_Scene");
	unk_0xC5E5600D1CF5CEF9(uParam0->f_3);
	unk_0xC5E5600D1CF5CEF9(uParam0->f_7);
	if (unk_0x25DDB354A40FFCDB())
	{
		if (unk_0x59E2AD1A8ACEDA31() != -1)
		{
			unk_0xC5E5600D1CF5CEF9(uParam0->f_35[unk_0x59E2AD1A8ACEDA31() /*80*/].f_5);
		}
	}
	if (unk_0x6F58AF991C7B1C91())
	{
		unk_0xAF628A2D7A8449B4();
	}
	func_51();
	Global_4456448.f_123773 = 0;
	func_50();
	Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_757 = 0;
	func_49(0, 1, 1, 0);
	func_48();
	func_47();
	unk_0x5D52AA94798846BB(3, true);
	if (unk_0x95EF219D38B20CFF(uParam0->f_34))
	{
		unk_0x2E352DDBBF674246(&(uParam0->f_34));
	}
	if (func_45() && !unk_0xE9159DB182CF0841())
	{
		if (unk_0x25DDB354A40FFCDB())
		{
			func_32(unk_0x460153A63B9477BC(), 1, 0, 0);
		}
		else
		{
			unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
		}
	}
	func_31(1);
	func_186(uParam0, 12);
	func_220(0);
	func_30();
}

void func_30()
{
	unk_0xD39E529EBE5DB04F();
}

void func_31(bool bParam0)
{
	Global_1663764.f_1 = 0;
	Global_1663764 = 0;
	if (unk_0x460153A63B9477BC() != -1)
	{
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_3 = 0;
	}
	if (bParam0)
	{
		func_10(&(Global_1663764.f_2), 0, 0);
	}
	else
	{
		func_9(&(Global_1663764.f_2));
	}
}

void func_32(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_44())
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
		if (!func_45())
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
				else if (bVar14 || (!func_41(unk_0x460153A63B9477BC(), 0) && !func_40()))
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
					func_37(0, 0, 0);
					if (bVar25)
					{
						unk_0x701364DD9F501826();
					}
				}
				if (!func_36(iVar27) && !unk_0xEB1D872D96DDA8E2(iVar27))
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
					func_35();
					func_34();
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
				if (!func_36(iVar27) && !unk_0xEB1D872D96DDA8E2(iVar27))
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
					if (func_33(Global_4456448.f_129348))
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

bool func_33(int iParam0)
{
	return iParam0 == 17;
}

void func_34()
{
	struct<3> Var0;
	
	Global_2440049.f_1344 = 0;
	Global_2440049.f_1345 = 0;
	Global_2440049.f_1346 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2440049.f_1351 = -1;
	Global_2440049.f_1352 = 0;
	Global_2405074.f_2685 = { Var0 };
}

void func_35()
{
	Global_2405074.f_696 = 0;
	Global_2405074.f_2728 = 0;
	Global_2405074.f_512 = 0;
	Global_2405074.f_601 = 0;
	Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_211 = 0;
	Global_2405074.f_2683 = 0;
}

int func_36(int iParam0)
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

void func_37(int iParam0, int iParam1, int iParam2)
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
				func_39();
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
		if (func_41(unk_0x460153A63B9477BC(), 0))
		{
			unk_0x80B3C69DE260B92D(iParam0, iParam1, 1);
		}
		else
		{
			unk_0xE86692F29AFB9043(iParam0, iParam1);
		}
		unk_0x0F9CBC63296852FD(iParam0, iParam1);
		func_38(joaat("MPPLY_IS_CHAR_SPECTATING"), iParam0);
	}
}

void func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0xBD9D9E72ABB288E4(iVar0, iParam1, 1);
	}
}

void func_39()
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

bool func_40()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

bool func_41(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_42(-1, 0) == 8;
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

int func_42(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_43();
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

int func_43()
{
	return Global_1312763;
}

int func_44()
{
	if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_35 && !Global_2452679.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

int func_45()
{
	if (func_46() == 0)
	{
		return 1;
	}
	return 0;
}

int func_46()
{
	return Global_1312485.f_18;
}

void func_47()
{
	unk_0x2DDA2C702A92866E("LineArcadeMinigame");
	unk_0x9128BA5F998AA176("DLC_EXEC1/OFFICE_BOARDROOM");
	unk_0x5D52AA94798846BB(3, false);
	unk_0xD2459066EA58CE43(&Global_1663764, 6);
	unk_0xD2459066EA58CE43(&Global_1663764, 7);
}

void func_48()
{
	Global_2440049.f_1267.f_10 = 0;
}

int func_49(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (unk_0x93914DE00496FC78() != iParam0 && iParam2)
		{
			unk_0x6D883C27212BF370(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_50()
{
	if (Global_1664241)
	{
	}
	Global_1664241 = 0;
}

void func_51()
{
	if (!Global_1312593)
	{
		return;
	}
	func_52();
}

void func_52()
{
	Global_1312593 = 0;
	StringCopy(&(Global_1312593.f_1), "", 32);
	Global_1312593.f_9 = 0;
}

void func_53(var uParam0)
{
	func_60(uParam0);
	func_56(uParam0);
	if (unk_0xCE990E643CD9D0E5(uParam0->f_2, 16))
	{
		func_55(uParam0);
		unk_0xD2459066EA58CE43(&(uParam0->f_2), 16);
	}
	if (unk_0x046706CBB367B768(uParam0->f_7))
	{
		unk_0xC4CC25B68A91D144(uParam0->f_7, "Game_Over_Blink", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
	}
	if (!func_12(&(uParam0->f_30)))
	{
		func_10(&(uParam0->f_30), 0, 0);
	}
	else if (func_8(&(uParam0->f_30), 5000, 0))
	{
		func_186(uParam0, 11);
		func_54(0);
	}
	if (unk_0x1BD7199394D7F19A(2, 201) || unk_0x1BD7199394D7F19A(2, 202))
	{
		func_186(uParam0, 11);
		func_54(0);
	}
}

void func_54(bool bParam0)
{
	if (bParam0)
	{
		unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_3), 5);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_3), 5);
	}
}

void func_55(var uParam0)
{
	if (unk_0x95EF219D38B20CFF(uParam0->f_34))
	{
		unk_0x830F007E19C63E14(uParam0->f_34, "HIDE_LOBBY");
		unk_0xE1FDD153F5858534();
	}
}

void func_56(var uParam0)
{
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_2, 12))
	{
		func_57(uParam0, "DCTL_GAMEOVER", 0, 1);
		unk_0xBE20AB8238688965(&(uParam0->f_2), 12);
	}
}

void func_57(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (unk_0x95EF219D38B20CFF(uParam0->f_34))
	{
		unk_0x830F007E19C63E14(uParam0->f_34, "SET_CENTRAL_MESSAGE");
		func_59(sParam1);
		unk_0xAD291B8F75D737AD(iParam2);
		unk_0xAD291B8F75D737AD(iParam3);
		func_58("");
		unk_0xE1FDD153F5858534();
	}
}

void func_58(char* sParam0)
{
	unk_0x54AED56A452DCB4F(sParam0);
}

void func_59(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

void func_60(var uParam0)
{
	int iVar0;
	
	iVar0 = 255;
	func_61(0f, 0f, 1f, 1f, 0, 0, 0, iVar0);
	unk_0x177AA645FB4B3A38("LineArcadeMinigame", "Degenatron_DontCrossTheLine_Game", 0.5f, 0.5f, (1f * uParam0->f_9), 1f, 0f, 255, 255, 255, iVar0, 0);
}

void func_61(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x8DDE075026DB7EFD((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

void func_62(var uParam0)
{
	if (unk_0xCE990E643CD9D0E5(uParam0->f_2, 15))
	{
		func_85(uParam0);
		unk_0xD2459066EA58CE43(&(uParam0->f_2), 15);
	}
	func_60(uParam0);
	func_80(uParam0);
	if (unk_0xF8EDFF98A9C94C74())
	{
		unk_0x779660A9E5364C4D(2, 200, 1);
	}
	if (!unk_0xF0C12886E5C1B20E())
	{
		if ((unk_0x1BD7199394D7F19A(2, 201) && !unk_0xCE990E643CD9D0E5(Local_150[iLocal_143 /*2*/].f_1, 3)) && !unk_0xCE990E643CD9D0E5(Local_150[iLocal_143 /*2*/].f_1, 4))
		{
			func_79(3);
		}
		else if ((unk_0x1BD7199394D7F19A(2, 202) && !unk_0xCE990E643CD9D0E5(Local_150[iLocal_143 /*2*/].f_1, 3)) && !unk_0xCE990E643CD9D0E5(Local_150[iLocal_143 /*2*/].f_1, 4))
		{
			func_79(4);
		}
	}
	if (func_78())
	{
		func_6(1);
	}
	if (!unk_0xCE990E643CD9D0E5(Local_150[iLocal_143 /*2*/].f_1, 3) && !unk_0xCE990E643CD9D0E5(Local_150[iLocal_143 /*2*/].f_1, 4))
	{
		if (!unk_0xCE990E643CD9D0E5(uParam0->f_2, 4))
		{
			unk_0x4F09C0B0476C63DC("DCTL_REPLAYHELP", 0);
			unk_0xBE20AB8238688965(&(uParam0->f_2), 5);
		}
	}
	func_64(uParam0, 1);
	func_63(uParam0);
	if (Local_149 == 10)
	{
		unk_0xC5E5600D1CF5CEF9(uParam0->f_3);
		unk_0xC4CC25B68A91D144(-1, "Music_Game_Over", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		unk_0xBE20AB8238688965(&(uParam0->f_2), 4);
		func_186(uParam0, 10);
		func_54(1);
		func_6(0);
		func_5(0, 0);
	}
	else if (Local_149 == 4)
	{
		if (unk_0xCE990E643CD9D0E5(Local_150[iLocal_143 /*2*/].f_1, 4) || unk_0xCE990E643CD9D0E5(Local_150[iLocal_143 /*2*/].f_1, 2))
		{
			func_186(uParam0, 11);
			return;
		}
		unk_0xD2459066EA58CE43(&iLocal_144, 0);
		func_14(uParam0);
		func_6(0);
		func_5(0, 0);
		unk_0xBE20AB8238688965(&(uParam0->f_2), 4);
		func_186(uParam0, 4);
	}
}

void func_63(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)) && Local_150[iVar0 /*2*/] > -1)
		{
			if (unk_0xCE990E643CD9D0E5(Local_150[iVar0 /*2*/].f_1, 3) && !unk_0xCE990E643CD9D0E5(uParam0->f_35[iVar0 /*80*/].f_3, 2))
			{
				unk_0xC4CC25B68A91D144(uParam0->f_6, "Insert_Coin", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				unk_0xBE20AB8238688965(&(uParam0->f_35[iVar0 /*80*/].f_3), 2);
				if (unk_0xCE990E643CD9D0E5(uParam0->f_35[iVar0 /*80*/].f_3, 3))
				{
					unk_0xD2459066EA58CE43(&(uParam0->f_35[iVar0 /*80*/].f_3), 3);
				}
			}
			else if (unk_0xCE990E643CD9D0E5(Local_150[iVar0 /*2*/].f_1, 4) && !unk_0xCE990E643CD9D0E5(uParam0->f_35[iVar0 /*80*/].f_3, 3))
			{
				unk_0xC4CC25B68A91D144(uParam0->f_6, "Cancel", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				unk_0xBE20AB8238688965(&(uParam0->f_35[iVar0 /*80*/].f_3), 3);
				if (unk_0xCE990E643CD9D0E5(uParam0->f_35[iVar0 /*80*/].f_3, 2))
				{
					unk_0xD2459066EA58CE43(&(uParam0->f_35[iVar0 /*80*/].f_3), 2);
				}
			}
		}
		iVar0++;
	}
}

void func_64(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (Local_149.f_2[iLocal_143] != Local_150[iLocal_143 /*2*/])
	{
		Local_150[iLocal_143 /*2*/] = Local_149.f_2[iLocal_143];
	}
	if (!unk_0xCE990E643CD9D0E5(iLocal_144, 2))
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0xEFA28384DDD283E1() - 1))
		{
			if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
			{
				if (Local_150[iVar0 /*2*/] > -1 && (unk_0x7BCC91F3C1CF24E8(&(Local_149.f_12[iVar0 /*16*/])) || unk_0x7BCC91F3C1CF24E8(&(Local_148[iVar0 /*16*/]))))
				{
					unk_0xBE20AB8238688965(&iLocal_144, 2);
				}
			}
			else if (!(unk_0x7BCC91F3C1CF24E8(&(Local_149.f_12[iVar0 /*16*/])) || unk_0x7BCC91F3C1CF24E8(&(Local_148[iVar0 /*16*/]))))
			{
				unk_0xBE20AB8238688965(&iLocal_144, 2);
			}
			iVar0++;
		}
	}
	if (unk_0xCE990E643CD9D0E5(iLocal_144, 2))
	{
		func_70();
		iVar1 = 1;
		iVar0 = 0;
		while (iVar0 <= (unk_0xEFA28384DDD283E1() - 1))
		{
			if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
			{
				if ((Local_150[iVar0 /*2*/] == -1 || unk_0x7BCC91F3C1CF24E8(&(Local_149.f_12[iVar0 /*16*/]))) || unk_0x7BCC91F3C1CF24E8(&(Local_148[iVar0 /*16*/])))
				{
					iVar1 = 0;
				}
			}
			else if (!unk_0x7BCC91F3C1CF24E8(&(Local_149.f_12[iVar0 /*16*/])) || !unk_0x7BCC91F3C1CF24E8(&(Local_148[iVar0 /*16*/])))
			{
				iVar1 = 0;
			}
			iVar0++;
		}
		if (iVar1 == 1)
		{
			if (bParam1)
			{
				func_65(uParam0, "DCTL_REPLAY", 0);
			}
			else
			{
				func_65(uParam0, "DCTL_INSERT", 0);
			}
			unk_0xD2459066EA58CE43(&iLocal_144, 2);
		}
	}
}

void func_65(var uParam0, char* sParam1, int iParam2)
{
	if (unk_0x95EF219D38B20CFF(uParam0->f_34))
	{
		unk_0x830F007E19C63E14(uParam0->f_34, "INIT_LOBBY");
		func_59(sParam1);
		unk_0xAD291B8F75D737AD(iParam2);
		func_66(0);
		func_66(1);
		func_66(2);
		func_66(3);
		if (iLocal_143 > -1 && Local_150[iLocal_143 /*2*/] > -1)
		{
			unk_0xAD291B8F75D737AD(Local_150[iLocal_143 /*2*/]);
		}
		unk_0xE1FDD153F5858534();
	}
}

void func_66(int iParam0)
{
	struct<16> Var0;
	struct<16> Var1;
	
	Var0 = { func_69(iParam0) };
	Var1 = { func_67(iParam0) };
	unk_0x4A096F645CED26D9(&Var1);
	func_58(&Var0);
}

struct<16> func_67(int iParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, func_68(), 64);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)) && Local_150[iVar1 /*2*/] == iParam0)
		{
			Var0 = { Local_148[iVar1 /*16*/] };
		}
		iVar1++;
	}
	return Var0;
}

var func_68()
{
	var uVar0;
	
	return uVar0;
}

struct<16> func_69(int iParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)) && Local_150[iVar1 /*2*/] == iParam0)
		{
			Var0 = { Local_149.f_12[iVar1 /*16*/] };
		}
		iVar1++;
	}
	return Var0;
}

void func_70()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= (unk_0xEFA28384DDD283E1() - 1))
	{
		if (iVar0 < 4)
		{
			if (unk_0xAFF96FDC3971E7EA())
			{
				StringCopy(&(Local_149.f_12[iVar0 /*16*/]), "", 64);
			}
			StringCopy(&(Local_148[iVar0 /*16*/]), func_68(), 64);
		}
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)) && Local_150[iVar0 /*2*/] > -1)
		{
			if (unk_0xAFF96FDC3971E7EA())
			{
				StringCopy(&(Local_149.f_12[iVar0 /*16*/]), unk_0x72C1D3A1AB8CAA5B(unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar0))), 64);
			}
			iVar1 = func_71(unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar0)));
			if (iVar1 != 0)
			{
				StringCopy(&(Local_148[iVar0 /*16*/]), unk_0x3EF2973864CBE5FC(iVar1), 64);
			}
		}
		iVar0++;
	}
}

int func_71(int iParam0)
{
	int iVar0;
	
	iVar0 = func_74(iParam0);
	if (iVar0 == -1)
	{
		func_72(iParam0, 1);
		return 0;
	}
	Global_1389221[iVar0 /*5*/].f_4 = 1;
	return Global_1389221[iVar0 /*5*/].f_2;
}

void func_72(int iParam0, bool bParam1)
{
	if (!func_21(iParam0, 0, 1))
	{
		return;
	}
	if (func_74(iParam0) != -1)
	{
		return;
	}
	if (Global_1389384)
	{
		if (iParam0 == Global_1389384.f_1)
		{
			return;
		}
	}
	if (func_73(iParam0))
	{
		return;
	}
	if (Global_1389422 >= 32)
	{
		return;
	}
	Global_1389389[Global_1389422] = iParam0;
	Global_1389422++;
	if (bParam1)
	{
	}
}

int func_73(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389422)
	{
		if (Global_1389389[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_74(int iParam0)
{
	int iVar0;
	
	if (!func_21(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389382 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389382)
	{
		if (Global_1389221[iVar0 /*5*/].f_1 == iParam0)
		{
			if (unk_0x3F2B70A051A32606(Global_1389221[iVar0 /*5*/].f_2) && unk_0xCA635244223E5D25(Global_1389221[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_75(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_75(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1389382)
	{
		return;
	}
	if (unk_0x3F2B70A051A32606(Global_1389221[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389221[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, unk_0x3EF2973864CBE5FC(Global_1389221[iParam0 /*5*/].f_2), 64);
			unk_0xC16699C9E79C9231(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		unk_0x709B7208105825BB(Global_1389221[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1389382)
	{
		Global_1389221[iVar2 /*5*/] = { Global_1389221[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_76(&(Global_1389221[iVar2 /*5*/]));
	Global_1389382 = (Global_1389382 - 1);
}

void func_76(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_77();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x25DDB354A40FFCDB())
	{
		uParam0->f_3 = unk_0x6CAAB7E78B5D978A();
	}
}

int func_77()
{
	return -1;
}

int func_78()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
		{
			if (unk_0xCE990E643CD9D0E5(Local_150[iVar1 /*2*/].f_1, 3))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	if (iVar0 > 1)
	{
		return 1;
	}
	return 0;
}

void func_79(int iParam0)
{
	unk_0xD2459066EA58CE43(&(Local_150[iLocal_143 /*2*/].f_1), 2);
	unk_0xD2459066EA58CE43(&(Local_150[iLocal_143 /*2*/].f_1), 3);
	unk_0xD2459066EA58CE43(&(Local_150[iLocal_143 /*2*/].f_1), 4);
	unk_0xBE20AB8238688965(&(Local_150[iLocal_143 /*2*/].f_1), iParam0);
}

void func_80(var uParam0)
{
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_2, 16))
	{
		func_65(uParam0, "DCTL_REPLAY", 0);
		unk_0xBE20AB8238688965(&(uParam0->f_2), 16);
	}
	func_83(uParam0);
	func_81(uParam0);
}

void func_81(var uParam0)
{
	if (unk_0x95EF219D38B20CFF(uParam0->f_34))
	{
		unk_0x830F007E19C63E14(uParam0->f_34, "SET_MICS");
		unk_0xAD291B8F75D737AD(func_82(0));
		unk_0xAD291B8F75D737AD(func_82(1));
		unk_0xAD291B8F75D737AD(func_82(2));
		unk_0xAD291B8F75D737AD(func_82(3));
		unk_0xE1FDD153F5858534();
	}
}

int func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)) && Local_150[iVar0 /*2*/] == iParam0)
		{
			iVar1 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar0));
			if (!unk_0x1A796F8F5A500C0E(iVar1))
			{
				return 0;
			}
			if (unk_0xC108F57FC8B4950A(iVar1))
			{
				return 1;
			}
			if (unk_0x0CFFCB7E7A27C208(iVar1))
			{
				return 3;
			}
			return 2;
		}
		iVar0++;
	}
	return 0;
}

void func_83(var uParam0)
{
	if (unk_0x95EF219D38B20CFF(uParam0->f_34))
	{
		unk_0x830F007E19C63E14(uParam0->f_34, "UPDATE_LOBBY");
		func_84(0);
		func_84(1);
		func_84(2);
		func_84(3);
		unk_0xE1FDD153F5858534();
	}
}

void func_84(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < Local_150)
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)) && Local_150[iVar1 /*2*/] == iParam0)
		{
			bVar0 = true;
			if (unk_0xCE990E643CD9D0E5(Local_150[iVar1 /*2*/].f_1, 3))
			{
				unk_0xAD291B8F75D737AD(2);
			}
			else if (unk_0xCE990E643CD9D0E5(Local_150[iVar1 /*2*/].f_1, 4))
			{
				unk_0xAD291B8F75D737AD(1);
			}
			else
			{
				unk_0xAD291B8F75D737AD(0);
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		unk_0xAD291B8F75D737AD(0);
	}
}

void func_85(var uParam0)
{
	if (unk_0x95EF219D38B20CFF(uParam0->f_34))
	{
		unk_0x830F007E19C63E14(uParam0->f_34, "HIDE_HUD");
		unk_0xE1FDD153F5858534();
	}
}

void func_86(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCE990E643CD9D0E5(uParam0->f_2, 15))
	{
		func_85(uParam0);
		unk_0xD2459066EA58CE43(&(uParam0->f_2), 15);
	}
	func_60(uParam0);
	func_125(uParam0);
	if (Local_149 >= 9)
	{
		func_5(1, 0);
		if (unk_0x046706CBB367B768(uParam0->f_3))
		{
			unk_0xC4CC25B68A91D144(uParam0->f_3, "Background", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		}
		iVar0 = func_124(3791, -1, 0);
		iVar0++;
		func_123(3791, iVar0, -1, 1, 0);
		if (Local_149.f_1 == iLocal_143)
		{
			iVar1 = func_124(3790, -1, 0);
			iVar1++;
			func_123(3790, iVar1, -1, 1, 0);
			if (iVar1 >= Global_262145.f_16316)
			{
				func_122(7551, 1, -1, 1);
				if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == joaat("mp_m_freemode_01"))
				{
					func_87(func_121(joaat("MP_exec_prizes_015_M"), 3), 1, 1, 0, 0, -1);
				}
				else
				{
					func_87(func_121(joaat("MP_exec_prizes_015_F"), 4), 1, 1, 0, 0, -1);
				}
			}
		}
		func_70();
		func_186(uParam0, 9);
	}
	if (!unk_0xCE990E643CD9D0E5(Local_150[iLocal_143 /*2*/].f_1, 2))
	{
		func_79(2);
	}
}

void func_87(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	if (iParam4 || bParam1)
	{
		if ((((((iParam0 != 87 && iParam0 != 89) && iParam0 != 88) && iParam0 != 13) && iParam0 != 14) && iParam0 != 15) && iParam0 != 16)
		{
			if (iParam0 != 71 && iParam0 != 72)
			{
				func_120(1238, iParam5);
			}
		}
		else
		{
			func_120(1238, iParam5);
		}
	}
	if (bParam1)
	{
		if (!func_119(iParam0, iParam5))
		{
			func_116(iParam0, 1, iParam5);
		}
		if (iParam2 && iParam0 < 129)
		{
			if (func_114(iParam0) == 0)
			{
				func_108(12, func_113(iParam0, 3), func_112(iParam0, 3), func_111(iParam0, 3), func_110(iParam0, 3), -1, 0, 0, 0, -1, 0);
				func_107(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_102(iParam0, 1, iParam5);
		}
		if (Global_1377236.f_1043 == 0)
		{
			Global_1377236.f_1044 = iParam0;
		}
	}
	else
	{
		if (func_119(iParam0, iParam5))
		{
			func_116(iParam0, 0, iParam5);
			func_98(1238, -1, iParam5);
		}
		if (iParam0 < 129)
		{
			if (func_114(iParam0) == 1)
			{
				func_107(iParam0, 0);
			}
		}
		if (func_97(iParam0, iParam5))
		{
			func_88(iParam0, 0, iParam5);
		}
	}
}

void func_88(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_97(iParam0, iParam2))
		{
			func_89(iParam0, 1, iParam2);
		}
	}
	else if (func_97(iParam0, iParam2))
	{
		func_89(iParam0, 0, iParam2);
	}
}

void func_89(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_96(iParam0, iParam2);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			unk_0xBE20AB8238688965(&iVar0, func_95(iVar1));
		}
		else
		{
			unk_0xD2459066EA58CE43(&iVar0, func_95(iVar1));
		}
		if (!func_94())
		{
			iVar2 = func_90(iParam0);
			if (iVar2 != 11771)
			{
				func_123(iVar2, iVar0, iParam2, 1, 0);
			}
		}
	}
}

int func_90(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = func_93(iVar0);
	if ((func_92() == 0 || func_91() == 0) || (func_92() == 999 && func_91() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1048;
				break;
			
			case 1:
				return 1049;
				break;
			
			case 2:
				return 1050;
				break;
			
			case 3:
				return 1051;
				break;
			
			case 4:
				return 1052;
				break;
			
			case 5:
				return 1053;
				break;
			
			case 6:
				return 1487;
				break;
			
			case 7:
				return 1488;
				break;
			
			case 8:
				return 1489;
				break;
			
			case 9:
				return 1490;
				break;
			
			case 10:
				return 1948;
				break;
			
			case 11:
				return 1949;
				break;
			
			case 12:
				return 1950;
				break;
			
			case 13:
				return 2424;
				break;
			
			case 14:
				return 2444;
				break;
			
			case 15:
				return 2447;
				break;
			
			case 16:
				return 2450;
				break;
			
			case 17:
				return 2613;
				break;
			
			case 18:
				return 2616;
				break;
			
			case 19:
				return 2619;
				break;
			
			case 20:
				return 3785;
				break;
			
			case 21:
				return 3788;
				break;
			
			case 22:
				return 3863;
				break;
			
			case 23:
				return 3866;
				break;
			
			case 24:
				return 3869;
				break;
			
			case 25:
				return 3872;
				break;
			
			case 26:
				return 5363;
			
			case 27:
				return 5366;
				break;
			
			case 28:
				return 5468;
				break;
			
			case 29:
				return 5471;
				break;
			
			case 30:
				return 6430;
				break;
			
			case 31:
				return 6433;
				break;
			
			case 32:
				return 7254;
				break;
			
			case 33:
				return 7257;
				break;
			
			case 34:
				return 7260;
				break;
			
			case 35:
				return 7969;
				break;
			
			case 36:
				return 7972;
				break;
			
			case 37:
				return 7975;
				break;
			
			case 38:
				return 7978;
				break;
			
			case 39:
				return 8500;
				break;
			
			case 40:
				return 8503;
				break;
			
			case 41:
				return 8506;
				break;
			
			case 42:
				return 8509;
				break;
			
			case 43:
				return 8903;
				break;
			
			case 44:
				return 8906;
				break;
			
			case 45:
				return 8909;
				break;
			
			case 46:
				break;
		}
		return 11771;
	}
	if (func_92() == 2 && func_91() == 2)
	{
		return 11771;
	}
	return 11771;
}

int func_91()
{
	return Global_30969;
}

int func_92()
{
	return Global_30968;
}

int func_93(int iParam0)
{
	return (iParam0 / 32);
}

bool func_94()
{
	return Global_1312872;
}

int func_95(int iParam0)
{
	return (iParam0 % 32);
}

int func_96(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_90(iParam0);
	if (iVar0 == 11771)
	{
		if (func_92() == 2 && func_91() == 2)
		{
			return 0;
		}
		else
		{
			return 0;
		}
	}
	uVar1 = func_124(iVar0, iParam1, 0);
	return uVar1;
}

bool func_97(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_96(iParam0, iParam1);
	iVar1 = func_95(iParam0);
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(iVar0, iVar1);
}

void func_98(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_124(iParam0, func_101(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_100(iParam0))
	{
		func_123(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_99(iParam0, iVar0, iParam2, 1);
	}
}

void func_99(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2551832[iParam0 /*3*/][func_101(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_101(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1388131[func_101(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388137[func_101(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388143[func_101(iParam2)] = iParam1;
			break;
		
		case 8727:
			Global_1388149[func_101(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1388095[func_101(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1388101[func_101(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1388107[func_101(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1388113[func_101(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1388119[func_101(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1388065[func_101(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1388071[func_101(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1388077[func_101(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1388083[func_101(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388089[func_101(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388155[func_101(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388161[func_101(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388167[func_101(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388173[func_101(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1388179[func_101(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388185[func_101(iParam2)] = iParam1;
			break;
		
		case 7234:
			Global_1388191[func_101(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388197[func_101(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388203[func_101(iParam2)] = iParam1;
			break;
		
		case 1877:
			Global_2590417[0 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 2268:
			Global_2590417[1 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 2930:
			Global_2590417[2 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2590417[3 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 10138:
			Global_2590566[func_101(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388209[func_101(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388215[func_101(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388221[func_101(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388227[func_101(iParam2)] = iParam1;
			break;
		
		case 9534:
			Global_1388233[func_101(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388239[func_101(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2590490[0 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2590490[1 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2590490[2 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2590490[3 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2590490[4 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2590569[0 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2590569[1 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2590569[2 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2590569[3 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2590569[4 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2590585[0 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2590585[1 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2590585[2 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2590585[3 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2590585[4 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2590490[5 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2590417[4 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2590601[func_101(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2590610[func_101(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2590604[func_101(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2590613[func_101(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2590607[func_101(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2590616[func_101(iParam2)] = iParam1;
			break;
		
		case 3690:
			Global_2590619[func_101(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2590490[6 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2590417[5 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2590490[7 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2590417[6 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2590490[8 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2590417[7 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2590490[9 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2590417[8 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2590490[10 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2590417[9 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2590490[11 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2590417[10 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2590490[12 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2590417[11 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2590490[13 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2590417[12 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2590490[14 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2590417[13 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2590490[15 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2590417[14 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2590490[16 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2590417[15 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2590490[17 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2590417[16 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 7284:
			Global_2590417[17 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2590417[18 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2590417[19 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 8011:
			Global_2590417[20 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2590622[func_101(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2590625[func_101(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2590628[func_101(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2590631[func_101(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2590634[func_101(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2590637[func_101(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2590640[func_101(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2590643[func_101(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2590646[func_101(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2590649[func_101(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2590652[func_101(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2590655[func_101(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2590658[func_101(iParam2)] = iParam1;
			break;
		
		case 8901:
			Global_2590661[func_101(iParam2)] = iParam1;
			break;
		
		case 8535:
			Global_2590417[21 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2590490[23 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 8976:
			Global_2590417[22 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2590490[24 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2590417[23 /*3*/][func_101(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_100(int iParam0)
{
	if (Global_1388046)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8727:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8729:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8731:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8733:
			case 1303:
			case 7234:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8732:
			case 9534:
			case 1236:
			case 1877:
			case 2268:
			case 2930:
			case 3059:
			case 10138:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3233:
			case 3235:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3228:
			case 3222:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3690:
			case 3231:
			case 3230:
			case 4021:
			case 4020:
			case 4024:
			case 4023:
			case 4027:
			case 4026:
			case 4030:
			case 4029:
			case 6111:
			case 6110:
			case 6169:
			case 6168:
			case 6534:
			case 6533:
			case 6547:
			case 6546:
			case 6560:
			case 6559:
			case 6563:
			case 6562:
			case 6566:
			case 6565:
			case 7284:
			case 7286:
			case 7288:
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
			case 8295:
			case 8011:
			case 8535:
			case 8976:
			case 8978:
			case 8979:
			case 8981:
				return 1;
				break;
			}
	}
	return 0;
}

int func_101(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_43();
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

void func_102(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!func_106(iParam0))
		{
			func_103(iParam0, 1, iParam2);
		}
	}
	else if (func_106(iParam0))
	{
		func_103(iParam0, 0, iParam2);
	}
}

void func_103(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_105(uParam0);
	iVar1 = uParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			unk_0xBE20AB8238688965(&iVar0, func_95(iVar1));
		}
		else
		{
			unk_0xD2459066EA58CE43(&iVar0, func_95(iVar1));
		}
		func_123(func_104(uParam0), iVar0, iParam2, 1, 0);
	}
}

int func_104(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_93(iVar0);
	if ((func_92() == 0 || func_91() == 0) || (func_92() == 999 && func_91() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1043;
				break;
			
			case 1:
				return 1044;
				break;
			
			case 2:
				return 1045;
				break;
			
			case 3:
				return 1046;
				break;
			
			case 4:
				return 1047;
				break;
			
			case 5:
				return 1491;
				break;
			
			case 6:
				return 1492;
				break;
			
			case 7:
				return 1493;
				break;
			
			case 8:
				return 1494;
				break;
			
			case 9:
				return 1944;
				break;
			
			case 10:
				return 1945;
				break;
			
			case 11:
				return 1946;
				break;
			
			case 12:
				return 1947;
				break;
			
			case 13:
				return 2425;
				break;
			
			case 14:
				return 2445;
				break;
			
			case 15:
				return 2448;
				break;
			
			case 16:
				return 2451;
				break;
			
			case 17:
				return 2614;
				break;
			
			case 18:
				return 2617;
				break;
			
			case 19:
				return 2620;
				break;
			
			case 20:
				return 3786;
				break;
			
			case 21:
				return 3789;
				break;
			
			case 22:
				return 3864;
				break;
			
			case 23:
				return 3867;
				break;
			
			case 24:
				return 3870;
				break;
			
			case 25:
				return 3873;
				break;
			
			case 26:
				return 5364;
				break;
			
			case 27:
				return 5367;
				break;
			
			case 28:
				return 5469;
				break;
			
			case 29:
				return 5472;
				break;
			
			case 30:
				return 6431;
				break;
			
			case 31:
				return 6434;
				break;
			
			case 32:
				return 7255;
				break;
			
			case 33:
				return 7258;
				break;
			
			case 34:
				return 7261;
				break;
			
			case 35:
				return 7970;
				break;
			
			case 36:
				return 7973;
				break;
			
			case 37:
				return 7976;
				break;
			
			case 38:
				return 7979;
				break;
			
			case 39:
				return 8501;
				break;
			
			case 40:
				return 8504;
				break;
			
			case 41:
				return 8507;
				break;
			
			case 42:
				return 8510;
				break;
			
			case 43:
				return 8904;
				break;
			
			case 44:
				return 8907;
				break;
			
			case 45:
				return 8910;
				break;
		}
	}
	return 11771;
}

var func_105(var uParam0)
{
	var uVar0;
	
	uVar0 = func_124(func_104(uParam0), -1, 0);
	return uVar0;
}

bool func_106(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_105(uParam0);
	iVar1 = uParam0;
	return unk_0xCE990E643CD9D0E5(iVar0, func_95(iVar1));
}

void func_107(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			unk_0xBE20AB8238688965(&(Global_2550458.f_1032[func_93(iVar0)]), func_95(iVar0));
		}
		else
		{
			unk_0xD2459066EA58CE43(&(Global_2550458.f_1032[func_93(iVar0)]), func_95(iVar0));
		}
	}
}

void func_108(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = func_109(&Global_1385106);
	Global_1385106[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1385106[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1385106[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1385106[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1385106[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1385106[iVar0 /*106*/].f_97 = iParam5;
	Global_1385106[iVar0 /*106*/].f_104 = iParam9;
	Global_1385106[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!unk_0x7BCC91F3C1CF24E8(sParam8))
	{
		StringCopy(&(Global_1385106[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_109(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_110(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "MPTATTOOS";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "MPTattoos3";
			break;
		
		case 89:
			return "MPTSHIRTAWARDS";
			break;
		
		case 88:
			return "MPTSHIRTAWARDS";
			break;
		
		case 87:
			return "MPTSHIRTAWARDS";
			break;
		
		case 57:
			return "MPTattoos2";
			break;
		
		case 58:
			return "MPTattoos2";
			break;
		
		case 59:
			return "MPTattoos2";
			break;
		
		case 60:
			return "MPTattoos2";
			break;
		
		case 12:
		case 55:
		case 49:
		case 48:
		case 46:
		case 45:
		case 34:
		case 65:
		case 25:
			return "MPTattoos3";
			break;
	}
	return sVar0;
}

char* func_111(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 56:
			return "TATTOO_WIN_PARLEY";
			break;
		
		case 57:
			return "TATTOO_HOLD_UP_SHOPS_10";
			break;
		
		case 58:
			return "TATTOO_HOLD_UP_SHOPS_25";
			break;
		
		case 59:
			return "TATTOO_HOLD_UP_SHOPS_50";
			break;
		
		case 60:
			return "TATTOO_HOLD_UP_SHOPS_100";
			break;
		
		case 0:
			return "HeadBanger";
			break;
		
		case 1:
			return "theslayer";
			break;
		
		case 2:
			return "clearout";
			break;
		
		case 4:
			return "thehustler";
			break;
		
		case 3:
			return "armoredvantakedowns";
			break;
		
		case 54:
			return "wineverymodeonce";
			break;
		
		case 5:
			return "killplayerbountyhead";
			break;
		
		case 6:
			return "holdworldrecord";
			break;
		
		case 55:
			return "MP_FM_Tat_Award_008";
			break;
		
		case 7:
			return "getrevengekills";
			break;
		
		case 8:
			return "kill3otherracers";
			break;
		
		case 9:
			return "reachrank1";
			break;
		
		case 10:
			return "reachrank2";
			break;
		
		case 11:
			return "reachrank3";
			break;
		
		case 13:
			return "HeadBanger";
			break;
		
		case 14:
			return "HeadBanger";
			break;
		
		case 15:
			return "HeadBanger";
			break;
		
		case 16:
			return "HeadBanger";
			break;
		
		case 89:
			return "RockstarVerifiied";
			break;
		
		case 87:
			return "ReachHordeModeWave";
			break;
		
		case 12:
			return "TATTOO_RACES_WON";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "Headbanger";
			break;
		
		case 18:
			return "Headbanger";
			break;
		
		case 19:
			return "Headbanger";
			break;
		
		case 20:
			return "Headbanger";
			break;
		
		case 21:
			return "Headbanger";
			break;
		
		case 22:
			return "Headbanger";
			break;
		
		case 23:
			return "Headbanger";
			break;
		
		case 24:
			return "Headbanger";
			break;
		
		case 25:
			return "MP_FM_Tat_002";
			break;
		
		case 26:
			return "Headbanger";
			break;
		
		case 27:
			return "Headbanger";
			break;
		
		case 28:
			return "Headbanger";
			break;
		
		case 61:
			return "Headbanger";
			break;
		
		case 62:
			return "Headbanger";
			break;
		
		case 63:
			return "Headbanger";
			break;
		
		case 64:
			return "Headbanger";
			break;
		
		case 65:
			return "MP_FM_Tat_019";
			break;
		
		case 29:
			return "Headbanger";
			break;
		
		case 30:
			return "Headbanger";
			break;
		
		case 31:
			return "Headbanger";
			break;
		
		case 66:
			return "Headbanger";
			break;
		
		case 32:
			return "Headbanger";
			break;
		
		case 33:
			return "Headbanger";
			break;
		
		case 34:
			return "MP_FM_Tat_023";
			break;
		
		case 35:
			return "Headbanger";
			break;
		
		case 36:
			return "Headbanger";
			break;
		
		case 37:
			return "Headbanger";
			break;
		
		case 38:
			return "Headbanger";
			break;
		
		case 39:
			return "Headbanger";
			break;
		
		case 40:
			return "Headbanger";
			break;
		
		case 67:
			return "Headbanger";
			break;
		
		case 41:
			return "Headbanger";
			break;
		
		case 68:
			return "Headbanger";
			break;
		
		case 42:
			return "Headbanger";
			break;
		
		case 43:
			return "Headbanger";
			break;
		
		case 44:
			return "Headbanger";
			break;
		
		case 45:
			return "MP_FM_Tat_036";
			break;
		
		case 46:
			return "MP_FM_Tat_037";
			break;
		
		case 47:
			return "Headbanger";
			break;
		
		case 48:
			return "MP_FM_Tat_039";
			break;
		
		case 49:
			return "MP_FM_Tat_040";
			break;
		
		case 50:
			return "Headbanger";
			break;
		
		case 51:
			return "Headbanger";
			break;
		
		case 52:
			return "Headbanger";
			break;
		
		case 53:
			return "Headbanger";
			break;
		
		case 69:
			return "Headbanger";
			break;
	}
	return sVar0;
}

char* func_112(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 7:
			return "TAT_FM_REVENKIL_D";
			break;
		
		case 6:
			return "TAT_FM_RECHOLD_d";
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE_D";
			break;
		
		case 5:
			return "TAT_FM_KILb_D";
			break;
		
		case 0:
			return "TAT_FM_HEADBANG_D";
			break;
		
		case 12:
			return "TAT_RACE50_D";
			break;
		
		case 2:
			return "TAT_CLEAROUT_D";
			break;
		
		case 9:
			return "TAT_FM_RANK1_D";
			break;
		
		case 10:
			return "TAT_FM_RANK2_D";
			break;
		
		case 11:
			return "TAT_FM_RANK3_D";
			break;
		
		case 4:
			return "TAT_FM_HUST_D";
			break;
		
		case 1:
			return "TAT_FM_SLAY_D";
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1_D";
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE_D";
			break;
		
		case 56:
			return "TAT_CHEATER_D";
			break;
		
		case 13:
			return "TAT_CRANKA_D";
			break;
		
		case 14:
			return "TAT_CRANKB_D";
			break;
		
		case 15:
			return "TAT_CRANKC_D";
			break;
		
		case 16:
			return "TAT_CRANKD_D";
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR_D";
			break;
		
		case 87:
			return "TAT_FM_REDSKULL_D";
			break;
		
		case 55:
			return "TAT_FM_MODDED_D";
			break;
	}
	switch (iParam0)
	{
		case 17:
			return "TAT_RANK10_D";
			break;
		
		case 18:
			return "TAT_RANK20_D";
			break;
		
		case 19:
			return "TAT_RANK20_D";
			break;
		
		case 20:
			return "TAT_RANK10_D";
			break;
		
		case 21:
			return "TAT_RANK20_D";
			break;
		
		case 22:
			return "TAT_RANK10_D";
			break;
		
		case 23:
			return "TAT_RANK10_D";
			break;
		
		case 24:
			return "TAT_RANK20_D";
			break;
		
		case 25:
			return "TAT_TAT9U";
			break;
		
		case 26:
			return "TAT_RANK20_D";
			break;
		
		case 27:
			return "TAT_RANK20_D";
			break;
		
		case 28:
			return "TAT_RANK10_D";
			break;
		
		case 61:
			return "TAT_RANK10_D";
			break;
		
		case 62:
			return "TAT_RANK10_D";
			break;
		
		case 63:
			return "TAT_RANK10_D";
			break;
		
		case 64:
			return "TAT_RANK10_D";
			break;
		
		case 65:
			return "TAT_TAT17U";
			break;
		
		case 29:
			return "TAT_RANK10_D";
			break;
		
		case 30:
			return "TAT_RANK10_D";
			break;
		
		case 31:
			return "TAT_RANK10_D";
			break;
		
		case 66:
			return "TAT_RANK20_D";
			break;
		
		case 32:
			return "TAT_RANK20_D";
			break;
		
		case 33:
			return "TAT_RANK20_D";
			break;
		
		case 34:
			return "TAT_TAT24U";
			break;
		
		case 35:
			return "TAT_RANK20_D";
			break;
		
		case 36:
			return "TAT_RANK20_D";
			break;
		
		case 37:
			return "TAT_RANK20_D";
			break;
		
		case 38:
			return "TAT_RANK20_D";
			break;
		
		case 39:
			return "TAT_RANK20_D";
			break;
		
		case 40:
			return "TAT_RANK20_D";
			break;
		
		case 67:
			return "TAT_RANK20_D";
			break;
		
		case 41:
			return "TAT_RANK20_D";
			break;
		
		case 68:
			return "TAT_RANK20_D";
			break;
		
		case 42:
			return "TAT_RANK20_D";
			break;
		
		case 43:
			return "TAT_RANK20_D";
			break;
		
		case 44:
			return "TAT_RANK20_D";
			break;
		
		case 45:
			return "TAT_TAT37U";
			break;
		
		case 46:
			return "TAT_TAT38U";
			break;
		
		case 47:
			return "TAT_RANK20_D";
			break;
		
		case 48:
			return "TAT_TAT40U";
			break;
		
		case 49:
			return "TAT_TAT41U";
			break;
		
		case 50:
			return "TAT_RANK20_D";
			break;
		
		case 51:
			return "TAT_RANK20_D";
			break;
		
		case 52:
			return "TAT_RANK20_D";
			break;
		
		case 53:
			return "TAT_RANK20_D";
			break;
		
		case 69:
			return "TAT_RANK20_D";
			break;
		
		case 57:
			return "TAT_HOLDUP1V_D";
			break;
		
		case 58:
			return "TAT_HOLDUP5V_D";
			break;
		
		case 59:
			return "TAT_HOLDUP10V_D";
			break;
		
		case 60:
			return "TAT_HOLDUP20V_D";
			break;
	}
	return sVar0;
}

char* func_113(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	if (iParam0 == iParam0)
	{
	}
	if (iParam1 == iParam1)
	{
	}
	switch (iParam0)
	{
		case 0:
			return "TAT_FM_HEADBANG";
			break;
		
		case 2:
			return "TAT_CLEAROUT";
			break;
		
		case 9:
			return "TAT_FM_RANK1";
			break;
		
		case 10:
			return "TAT_FM_RANK2";
			break;
		
		case 11:
			return "TAT_FM_RANK3";
			break;
		
		case 4:
			return "TAT_FM_HUST";
			break;
		
		case 1:
			return "TAT_FM_SLAY";
			break;
		
		case 54:
			return "TAT_FM_EVERMODE1";
			break;
		
		case 3:
			return "TAT_FM_ARVANTAKE";
			break;
		
		case 7:
			return "TAT_FM_REVENKIL";
			break;
		
		case 5:
			return "TAT_FM_KILb";
			break;
		
		case 8:
			return "TAT_FM_KIL3RACE";
			break;
		
		case 6:
			return "TAT_FM_RECHOLD";
			break;
		
		case 12:
			return "TAT_RACE50";
			break;
		
		case 13:
			return "TAT_CRANKA";
			break;
		
		case 14:
			return "TAT_CRANKB";
			break;
		
		case 15:
			return "TAT_CRANKC";
			break;
		
		case 16:
			return "TAT_CRANKD";
			break;
		
		case 87:
			return "TAT_FM_REDSKULL";
			break;
		
		case 88:
			return "TAT_FM_BELLE";
			break;
		
		case 89:
			return "TAT_FM_ROCKSTAR";
			break;
		
		case 55:
			return "TAT_FM_MODDED";
			break;
		
		case 17:
			return "TAT_FM_TAT1";
			break;
		
		case 18:
			return "TAT_FM_TAT2";
			break;
		
		case 19:
			return "TAT_FM_TAT3";
			break;
		
		case 20:
			return "TAT_FM_TAT4";
			break;
		
		case 21:
			return "TAT_FM_TAT5";
			break;
		
		case 22:
			return "TAT_FM_TAT6";
			break;
		
		case 56:
			return "TAT_CHEATER";
			break;
	}
	switch (iParam0)
	{
		case 23:
			return "TAT_FM_TAT7";
			break;
		
		case 24:
			return "TAT_FM_TAT8";
			break;
		
		case 25:
			return "TAT_FM_TAT9";
			break;
		
		case 26:
			return "TAT_FM_TAT10";
			break;
		
		case 27:
			return "TAT_FM_TAT11";
			break;
		
		case 28:
			return "TAT_FM_TAT12";
			break;
		
		case 61:
			return "TAT_FM_TAT13";
			break;
		
		case 62:
			return "TAT_FM_TAT14";
			break;
		
		case 63:
			return "TAT_FM_TAT15";
			break;
		
		case 64:
			return "TAT_FM_TAT16";
			break;
		
		case 65:
			return "TAT_FM_TAT38";
			break;
		
		case 29:
			return "TAT_FM_TAT18";
			break;
		
		case 30:
			return "TAT_FM_TAT19";
			break;
		
		case 31:
			return "TAT_FM_TAT20";
			break;
		
		case 66:
			return "TAT_FM_TAT21";
			break;
		
		case 32:
			return "TAT_FM_TAT22";
			break;
		
		case 33:
			return "TAT_FM_TAT23";
			break;
		
		case 34:
			return "TAT_FM_TAT24";
			break;
		
		case 35:
			return "TAT_FM_TAT25";
			break;
		
		case 36:
			return "TAT_FM_TAT26";
			break;
		
		case 37:
			return "TAT_FM_TAT27";
			break;
		
		case 38:
			return "TAT_FM_TAT28";
			break;
		
		case 39:
			return "TAT_FM_TAT29";
			break;
		
		case 40:
			return "TAT_FM_TAT30";
			break;
		
		case 67:
			return "TAT_FM_TAT31";
			break;
		
		case 41:
			return "TAT_FM_TAT32";
			break;
		
		case 68:
			return "TAT_FM_TAT33";
			break;
		
		case 42:
			return "TAT_FM_TAT34";
			break;
		
		case 43:
			return "TAT_FM_TAT35";
			break;
		
		case 44:
			return "TAT_FM_TAT36";
			break;
		
		case 45:
			return "TAT_FM_TAT37";
			break;
		
		case 46:
			return "TAT_FM_TAT41";
			break;
		
		case 47:
			return "TAT_FM_TAT39";
			break;
		
		case 48:
			return "TAT_FM_TAT40";
			break;
		
		case 49:
			return "TAT_FM_TAT17";
			break;
		
		case 50:
			return "TAT_FM_TAT42";
			break;
		
		case 51:
			return "TAT_FM_TAT43";
			break;
		
		case 52:
			return "TAT_FM_TAT44";
			break;
		
		case 53:
			return "TAT_FM_TAT45";
			break;
		
		case 69:
			return "TAT_FM_TAT46";
			break;
		
		case 57:
			return "TAT_HOLDUP1V";
			break;
		
		case 58:
			return "TAT_HOLDUP5V";
			break;
		
		case 59:
			return "TAT_HOLDUP10V";
			break;
		
		case 60:
			return "TAT_HOLDUP20V";
			break;
	}
	return sVar0;
}

bool func_114(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_115(iParam0);
	iVar1 = iParam0;
	return unk_0xCE990E643CD9D0E5(iVar0, func_95(iVar1));
}

var func_115(int iParam0)
{
	var uVar0;
	
	uVar0 = Global_2550458.f_1032[func_93(iParam0)];
	return uVar0;
}

void func_116(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_118(iParam0) == 11771)
	{
		return;
	}
	iVar0 = func_117(iParam0, -1);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			unk_0xBE20AB8238688965(&iVar0, func_95(iVar1));
		}
		else
		{
			unk_0xD2459066EA58CE43(&iVar0, func_95(iVar1));
		}
		func_123(func_118(iParam0), iVar0, iParam2, 1, 0);
	}
}

var func_117(var uParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = func_124(func_118(uParam0), iParam1, 0);
	return uVar0;
}

int func_118(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_93(iVar0);
	if ((func_92() == 0 || func_91() == 0) || (func_92() == 999 && func_91() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 1038;
				break;
			
			case 1:
				return 1039;
				break;
			
			case 2:
				return 1040;
				break;
			
			case 3:
				return 1041;
				break;
			
			case 4:
				return 1042;
				break;
			
			case 5:
				return 1502;
				break;
			
			case 6:
				return 1757;
				break;
			
			case 7:
				return 1951;
				break;
			
			case 8:
				return 1952;
				break;
			
			case 9:
				return 1953;
				break;
			
			case 10:
				return 1954;
				break;
			
			case 11:
				return 1955;
				break;
			
			case 12:
				return 1956;
				break;
			
			case 13:
				return 2423;
				break;
			
			case 14:
				return 2443;
				break;
			
			case 15:
				return 2446;
				break;
			
			case 16:
				return 2449;
				break;
			
			case 17:
				return 2612;
				break;
			
			case 18:
				return 2615;
				break;
			
			case 19:
				return 2618;
				break;
			
			case 20:
				return 3784;
				break;
			
			case 21:
				return 3787;
				break;
			
			case 22:
				return 3862;
				break;
			
			case 23:
				return 3865;
				break;
			
			case 24:
				return 3868;
				break;
			
			case 25:
				return 3871;
				break;
			
			case 26:
				return 5362;
				break;
			
			case 27:
				return 5365;
				break;
			
			case 28:
				return 5467;
				break;
			
			case 29:
				return 5470;
				break;
			
			case 30:
				return 6429;
				break;
			
			case 31:
				return 6432;
				break;
			
			case 32:
				return 7253;
				break;
			
			case 33:
				return 7256;
				break;
			
			case 34:
				return 7259;
				break;
			
			case 35:
				return 7968;
				break;
			
			case 36:
				return 7971;
				break;
			
			case 37:
				return 7974;
				break;
			
			case 38:
				return 7977;
				break;
			
			case 39:
				return 8499;
				break;
			
			case 40:
				return 8502;
				break;
			
			case 41:
				return 8505;
				break;
			
			case 42:
				return 8508;
				break;
			
			case 43:
				return 8902;
				break;
			
			case 44:
				return 8905;
				break;
			
			case 45:
				return 8908;
				break;
		}
	}
	return 11771;
}

bool func_119(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (func_118(iParam0) == 11771)
	{
		return 0;
	}
	iVar0 = func_117(iParam0, iParam1);
	iVar1 = iParam0;
	return unk_0xCE990E643CD9D0E5(iVar0, func_95(iVar1));
}

void func_120(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_124(iParam0, func_101(iParam1), 0);
	iVar0++;
	if (!func_100(iParam0))
	{
		func_123(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_99(iParam0, iVar0, iParam1, 1);
	}
}

int func_121(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = unk_0x10144267DD22866C(iParam1, -1, iParam0);
	if (iVar0 != -1)
	{
		return (129 + iVar0);
	}
	return -1;
}

int func_122(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_43();
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

void func_123(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_101(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
}

int func_124(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_101(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_125(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	if (Local_149.f_1 != -1)
	{
		if (!unk_0xCE990E643CD9D0E5(uParam0->f_2, 11))
		{
			Var0 = { func_69(Local_150[Local_149.f_1 /*2*/]) };
			iVar1 = func_127(Local_150[Local_149.f_1 /*2*/]);
			func_126(uParam0, "DCTL_WINNERV2", &Var0, 0, 1, iVar1);
			unk_0xBE20AB8238688965(&(uParam0->f_2), 11);
		}
	}
	else if (!unk_0xCE990E643CD9D0E5(uParam0->f_2, 11))
	{
		func_57(uParam0, "DCTL_DRAW", 0, 1);
		unk_0xBE20AB8238688965(&(uParam0->f_2), 11);
	}
}

void func_126(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	if (unk_0x95EF219D38B20CFF(uParam0->f_34))
	{
		unk_0x830F007E19C63E14(uParam0->f_34, "SET_CENTRAL_MESSAGE");
		func_59(sParam1);
		unk_0xAD291B8F75D737AD(iParam3);
		unk_0xAD291B8F75D737AD(iParam4);
		func_58(sParam2);
		unk_0xAD291B8F75D737AD(iParam5);
		unk_0xE1FDD153F5858534();
	}
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 211;
		
		case 1:
			return 213;
		
		case 2:
			return 210;
		
		case 3:
			return 209;
		
		default:
	}
	return 0;
}

void func_128(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= (unk_0xEFA28384DDD283E1() - 1))
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)) && Local_150[iVar0 /*2*/] > -1)
		{
			uParam0->f_35[iVar0 /*80*/].f_8 = uParam0->f_35[iVar0 /*80*/].f_2;
			uParam0->f_35[iVar0 /*80*/].f_9 = uParam0->f_35[iVar0 /*80*/].f_2;
		}
		iVar0++;
	}
	func_159(uParam0);
	func_153(uParam0);
	func_151(uParam0);
	func_147(uParam0);
	func_146(uParam0);
	if (unk_0xCE990E643CD9D0E5(iLocal_144, 0))
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0xEFA28384DDD283E1() - 1))
		{
			if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)) && Local_150[iVar0 /*2*/] > -1)
			{
				func_131(uParam0, &(uParam0->f_35), iVar0);
				if (unk_0xCE990E643CD9D0E5(iLocal_144, (11 + iVar0)))
				{
					unk_0xD2459066EA58CE43(&iLocal_144, (11 + iVar0));
				}
				if (unk_0xCE990E643CD9D0E5(iLocal_144, (7 + iVar0)))
				{
					unk_0xBE20AB8238688965(&iLocal_144, (11 + iVar0));
					unk_0xD2459066EA58CE43(&iLocal_144, (7 + iVar0));
				}
			}
			else if (uParam0->f_35[iVar0 /*80*/] == 2)
			{
				func_16(&(uParam0->f_35), 3, iVar0);
				uParam0->f_35[iVar0 /*80*/].f_1 = 0;
			}
			iVar0++;
		}
		if (!func_12(&uLocal_146))
		{
			func_10(&uLocal_146, 0, 0);
		}
		else if (func_8(&uLocal_146, 500, 0))
		{
			iVar1 = unk_0xB9E6DF0411C3488E();
			if (iVar1 == 1)
			{
				unk_0xC4CC25B68A91D144(-1, "Music_Game_Over", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				func_186(uParam0, 10);
				return;
			}
			func_129(4, func_130(uParam0->f_35[iLocal_143 /*80*/].f_15, uParam0->f_35[iLocal_143 /*80*/].f_16, 9974), iLocal_143, 99999);
			func_9(&uLocal_146);
		}
		if (!unk_0xCE990E643CD9D0E5(uParam0->f_2, 4) && uParam0->f_35[iLocal_143 /*80*/] == 2)
		{
			unk_0x4F09C0B0476C63DC("DCTL_GAMEHELP", 0);
			unk_0xBE20AB8238688965(&(uParam0->f_2), 5);
		}
		if (Local_149 >= 8)
		{
			unk_0xC4CC25B68A91D144(-1, "Music_Win", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				unk_0xC5E5600D1CF5CEF9(uParam0->f_35[iVar0 /*80*/].f_5);
				iVar0++;
			}
			if (unk_0x6F58AF991C7B1C91())
			{
				unk_0xAF628A2D7A8449B4();
			}
			unk_0xD2459066EA58CE43(&iLocal_144, 0);
			func_186(uParam0, 8);
		}
	}
	else if (iLocal_145 != -1 && unk_0x29B9AF1CB5B8175D() >= iLocal_145)
	{
		unk_0xBE20AB8238688965(&iLocal_144, 0);
	}
}

void func_129(int iParam0, var uParam1, int iParam2, int iParam3)
{
	struct<6> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_3 = -1082130432;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0 = -1877958358;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = iParam3;
	iVar1 = func_20(0);
	if (!iVar1 == 0)
	{
		unk_0xB802750B43D4047C(1, &Var0, 6, iVar1);
	}
}

float func_130(float fParam0, float fParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	
	fVar0 = to_float(floor((fParam0 * IntToFloat((iParam2 - 1)))));
	fVar1 = to_float(floor((fParam1 * IntToFloat((iParam2 - 1)))));
	return ((fVar0 * IntToFloat(iParam2)) + fVar1);
}

void func_131(var uParam0, var uParam1, int iParam2)
{
	switch ((*uParam1)[iParam2 /*80*/])
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					(uParam1[iParam2 /*80*/])->f_4 = 0;
					(uParam1[iParam2 /*80*/])->f_1 = 255;
					(uParam1[iParam2 /*80*/])->f_3 = 0;
					(uParam1[iParam2 /*80*/])->f_9 = -1;
					func_145(Local_150[iParam2 /*2*/], &((uParam1[iParam2 /*80*/])->f_2), &((uParam1[iParam2 /*80*/])->f_15), &((uParam1[iParam2 /*80*/])->f_16), &((uParam1[iParam2 /*80*/])->f_8));
					break;
				
				case 1:
					(uParam1[iParam2 /*80*/])->f_4 = 0;
					(uParam1[iParam2 /*80*/])->f_1 = 255;
					(uParam1[iParam2 /*80*/])->f_3 = 0;
					(uParam1[iParam2 /*80*/])->f_9 = -1;
					func_145(Local_150[iParam2 /*2*/], &((uParam1[iParam2 /*80*/])->f_2), &((uParam1[iParam2 /*80*/])->f_15), &((uParam1[iParam2 /*80*/])->f_16), &((uParam1[iParam2 /*80*/])->f_8));
					break;
				
				case 2:
					(uParam1[iParam2 /*80*/])->f_4 = 0;
					(uParam1[iParam2 /*80*/])->f_1 = 255;
					(uParam1[iParam2 /*80*/])->f_3 = 0;
					(uParam1[iParam2 /*80*/])->f_9 = -1;
					func_145(Local_150[iParam2 /*2*/], &((uParam1[iParam2 /*80*/])->f_2), &((uParam1[iParam2 /*80*/])->f_15), &((uParam1[iParam2 /*80*/])->f_16), &((uParam1[iParam2 /*80*/])->f_8));
					break;
				
				case 3:
					(uParam1[iParam2 /*80*/])->f_4 = 0;
					(uParam1[iParam2 /*80*/])->f_1 = 255;
					(uParam1[iParam2 /*80*/])->f_3 = 0;
					(uParam1[iParam2 /*80*/])->f_9 = -1;
					func_145(Local_150[iParam2 /*2*/], &((uParam1[iParam2 /*80*/])->f_2), &((uParam1[iParam2 /*80*/])->f_15), &((uParam1[iParam2 /*80*/])->f_16), &((uParam1[iParam2 /*80*/])->f_8));
					break;
			}
			unk_0xD2459066EA58CE43(&iLocal_144, (15 + iParam2));
			func_144(uParam1, iParam2);
			func_15(&((uParam1[iParam2 /*80*/])->f_19));
			func_16(uParam1, 1, iParam2);
			break;
		
		case 1:
			if (Local_149 == 7)
			{
				func_16(uParam1, 2, iParam2);
			}
			break;
		
		case 2:
			if (iParam2 == iLocal_143)
			{
				if (!unk_0xF0C12886E5C1B20E())
				{
					func_143(uParam1);
				}
			}
			if (func_142(uParam0) <= 1)
			{
				(uParam1[iParam2 /*80*/])->f_18 = 0f;
				(uParam1[iParam2 /*80*/])->f_9 = (uParam1[iParam2 /*80*/])->f_2;
			}
			if (!unk_0xCE990E643CD9D0E5(iLocal_144, (3 + iParam2)))
			{
				func_139(uParam0, uParam1, iParam2);
			}
			unk_0xD2459066EA58CE43(&iLocal_144, (3 + iParam2));
			if (iParam2 == iLocal_143)
			{
				func_135(uParam0, uParam1, 1);
				if (func_134(uParam0, uParam1, iLocal_143))
				{
					func_133(iLocal_143);
				}
			}
			else if (func_134(uParam0, uParam1, iParam2))
			{
				(uParam1[iParam2 /*80*/])->f_18 = 0f;
				if ((uParam1[iParam2 /*80*/])->f_14 == -2147483647)
				{
					(uParam1[iParam2 /*80*/])->f_14 = unk_0x6CAAB7E78B5D978A();
				}
			}
			else if ((uParam1[iParam2 /*80*/])->f_14 != -2147483647)
			{
				(uParam1[iParam2 /*80*/])->f_14 = -2147483647;
			}
			break;
		
		case 3:
			func_132(uParam1, iParam2);
			break;
	}
}

void func_132(var uParam0, int iParam1)
{
	float fVar0;
	
	fVar0 = to_float((uParam0[iParam1 /*80*/])->f_1);
	fVar0 = (fVar0 - (300f * timestep()));
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	(uParam0[iParam1 /*80*/])->f_1 = floor(fVar0);
}

void func_133(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	
	Var0.x = -459915941;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = iParam0;
	iVar1 = func_20(1);
	if (!iVar1 == 0)
	{
		unk_0xB802750B43D4047C(1, &Var0, 3, iVar1);
	}
}

int func_134(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (0.5f - ((0.5f - (uParam1[iParam2 /*80*/])->f_15) * uParam0->f_9));
	fVar1 = (0.0068f * uParam0->f_9);
	switch ((uParam1[iParam2 /*80*/])->f_2)
	{
		case 0:
			if (((uParam1[iParam2 /*80*/])->f_16 - (0.012f * 0.42f)) <= 0.229f)
			{
				return 1;
			}
			break;
		
		case 1:
			if (((uParam1[iParam2 /*80*/])->f_16 + (0.012f * 0.42f)) >= 0.851f)
			{
				return 1;
			}
			break;
		
		case 2:
			if (fVar0 - (fVar1 * 0.42f)) <= (0.5f - (0.339f * uParam0->f_9))
			{
				return 1;
			}
			break;
		
		case 3:
			if (fVar0 + (fVar1 * 0.42f)) >= (0.5f + (0.343f * uParam0->f_9))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_135(var uParam0, var uParam1, bool bParam2)
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
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	bool bVar23;
	float fVar24;
	float fVar25;
	bool bVar26;
	float fVar27;
	
	fVar0 = (0.5f - ((0.5f - (uParam1[iLocal_143 /*80*/])->f_15) * uParam0->f_9));
	fVar1 = (0.0068f * uParam0->f_9);
	iVar20 = ((uParam1[iLocal_143 /*80*/])->f_4 - 1);
	if (iVar20 > -1 && iVar20 < 59)
	{
		func_138((uParam1[iLocal_143 /*80*/])->f_19[iVar20], &fVar12, &fVar13, 9974);
		if ((uParam1[iLocal_143 /*80*/])->f_2 == 2)
		{
			fVar14 = ((uParam1[iLocal_143 /*80*/])->f_15 + (fVar1 * 0.5f));
			fVar15 = (uParam1[iLocal_143 /*80*/])->f_16;
			if (fVar14 > fVar12)
			{
				fVar14 = fVar12;
			}
		}
		else if ((uParam1[iLocal_143 /*80*/])->f_2 == 3)
		{
			fVar14 = ((uParam1[iLocal_143 /*80*/])->f_15 - (fVar1 * 0.5f));
			fVar15 = (uParam1[iLocal_143 /*80*/])->f_16;
			if (fVar14 < fVar12)
			{
				fVar14 = fVar12;
			}
		}
		else if ((uParam1[iLocal_143 /*80*/])->f_2 == 0)
		{
			fVar14 = (uParam1[iLocal_143 /*80*/])->f_15;
			fVar15 = ((uParam1[iLocal_143 /*80*/])->f_16 + (0.012f * 0.5f));
			if (fVar15 > fVar13)
			{
				fVar15 = fVar13;
			}
		}
		else if ((uParam1[iLocal_143 /*80*/])->f_2 == 1)
		{
			fVar14 = (uParam1[iLocal_143 /*80*/])->f_15;
			fVar15 = ((uParam1[iLocal_143 /*80*/])->f_16 - (0.012f * 0.5f));
			if (fVar15 < fVar13)
			{
				fVar15 = fVar13;
			}
		}
	}
	iVar21 = 0;
	while (iVar21 <= 3)
	{
		bVar23 = false;
		if (iVar21 == iLocal_143)
		{
		}
		else if ((uParam1[iVar21 /*80*/])->f_14 != -2147483647 && unk_0x6CAAB7E78B5D978A() > (uParam1[iVar21 /*80*/])->f_14 + 1000)
		{
		}
		else if ((*uParam1)[iVar21 /*80*/] == 2 && (*uParam1)[iLocal_143 /*80*/] == 2)
		{
			iVar22 = 0;
			while (iVar22 <= 59)
			{
				func_138((uParam1[iVar21 /*80*/])->f_19[iVar22], &fVar2, &fVar3, 9974);
				if (fVar2 != 0f || fVar3 != 0f)
				{
					if (iVar22 + 1 >= 60)
					{
						fVar4 = (uParam1[iVar21 /*80*/])->f_15;
						fVar5 = (uParam1[iVar21 /*80*/])->f_16;
					}
					else
					{
						func_138((uParam1[iVar21 /*80*/])->f_19[iVar22 + 1], &fVar4, &fVar5, 9974);
						if (fVar4 == 0f && fVar5 == 0f)
						{
							fVar4 = (uParam1[iVar21 /*80*/])->f_15;
							fVar5 = (uParam1[iVar21 /*80*/])->f_16;
						}
					}
					fVar6 = (fVar4 - fVar2);
					fVar7 = (fVar5 - fVar3);
					fVar8 = (fVar2 + (fVar6 * 0.5f));
					fVar9 = (fVar3 + (fVar7 * 0.5f));
					if (unk_0x0D77CDCF403AEBD2(fVar6) > 0.001f)
					{
						fVar10 = (unk_0x0D77CDCF403AEBD2(fVar6) + (0.003f * 0.5f));
						fVar11 = (0.003f * uParam0->f_8);
					}
					else if (unk_0x0D77CDCF403AEBD2(fVar7) > 0.001f)
					{
						fVar10 = 0.003f;
						fVar11 = (unk_0x0D77CDCF403AEBD2(fVar7) + ((0.003f * 0.5f) * uParam0->f_8));
					}
					else
					{
						fVar10 = 0.0001f;
						fVar11 = 0.0001f;
					}
					fVar24 = (0.5f - ((0.5f - fVar8) * uParam0->f_9));
					fVar25 = (fVar10 * uParam0->f_9);
					bVar26 = false;
					if ((uParam1[iLocal_143 /*80*/])->f_2 == 2 || (uParam1[iLocal_143 /*80*/])->f_2 == 3)
					{
						bVar26 = func_137(fVar0, (uParam1[iLocal_143 /*80*/])->f_16, (fVar1 * 0.42f), (0.012f * 0.42f), fVar24, fVar9, (fVar25 * 0.95f), fVar11);
					}
					if ((uParam1[iLocal_143 /*80*/])->f_2 == 0 || (uParam1[iLocal_143 /*80*/])->f_2 == 1)
					{
						bVar26 = func_137(fVar0, (uParam1[iLocal_143 /*80*/])->f_16, (fVar1 * 0.42f), (0.012f * 0.42f), fVar24, fVar9, fVar25, (fVar11 * 0.95f));
					}
					if (bVar26)
					{
						if (bParam2)
						{
							func_133(iLocal_143);
						}
						bVar23 = true;
					}
					else if (!unk_0xCE990E643CD9D0E5(iLocal_144, (7 + iVar21)) && unk_0xCE990E643CD9D0E5(iLocal_144, (11 + iVar21)))
					{
						if (iVar22 == ((uParam1[iVar21 /*80*/])->f_4 - 1))
						{
							if (((fVar12 != 0f && fVar13 != 0f) && fVar14 != 0f) && fVar15 != 0f)
							{
								func_136(uParam0, fVar12, fVar13, fVar14, fVar15, &fVar16, &fVar17, &fVar18, &fVar19, 0.0015f);
								if (func_137(fVar24, fVar9, fVar25, fVar11, fVar16, fVar17, fVar18, fVar19))
								{
									if (bParam2)
									{
										func_133(iLocal_143);
									}
									bVar23 = true;
								}
							}
						}
					}
				}
				iVar22++;
			}
			if (!bVar23)
			{
				fVar27 = (0.5f - ((0.5f - (uParam1[iVar21 /*80*/])->f_15) * uParam0->f_9));
				if (func_137(fVar0, (uParam1[iLocal_143 /*80*/])->f_16, (fVar1 * 0.42f), (0.012f * 0.42f), fVar27, (uParam1[iVar21 /*80*/])->f_16, (fVar1 * 0.42f), (0.012f * 0.42f)))
				{
					if (bParam2)
					{
						func_133(iLocal_143);
					}
				}
			}
		}
		iVar21++;
	}
}

void func_136(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9)
{
	float fVar0;
	float fVar1;
	
	if (fParam9 == 0f)
	{
		fParam9 = 0.003f;
	}
	fVar0 = (fParam3 - fParam1);
	fVar1 = (fParam4 - fParam2);
	*uParam5 = (fParam1 + (fVar0 * 0.5f));
	*uParam6 = (fParam2 + (fVar1 * 0.5f));
	if (unk_0x0D77CDCF403AEBD2(fVar0) > 0.001f)
	{
		*uParam7 = (unk_0x0D77CDCF403AEBD2(fVar0) + (fParam9 * 0.5f));
		*uParam8 = (fParam9 * uParam0->f_8);
	}
	else
	{
		*uParam7 = fParam9;
		*uParam8 = (unk_0x0D77CDCF403AEBD2(fVar1) + ((fParam9 * 0.5f) * uParam0->f_8));
	}
	*uParam5 = (0.5f - ((0.5f - *uParam5) * uParam0->f_9));
	*uParam7 = (*uParam7 * uParam0->f_9);
}

int func_137(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7)
{
	if (fParam0 + (fParam2 * 0.5f)) < (fParam4 - (fParam6 * 0.5f))
	{
		return 0;
	}
	if (fParam4 + (fParam6 * 0.5f)) < (fParam0 - (fParam2 * 0.5f))
	{
		return 0;
	}
	if (fParam1 + (fParam3 * 0.5f)) < (fParam5 - (fParam7 * 0.5f))
	{
		return 0;
	}
	if (fParam5 + (fParam7 * 0.5f)) < (fParam1 - (fParam3 * 0.5f))
	{
		return 0;
	}
	return 1;
}

void func_138(float fParam0, float fParam1, float fParam2, int iParam3)
{
	*fParam1 = to_float(floor((fParam0 / IntToFloat(iParam3))));
	*fParam2 = (fParam0 % IntToFloat(iParam3));
	*fParam1 = (*fParam1 / IntToFloat((iParam3 - 1)));
	*fParam2 = (*fParam2 / IntToFloat((iParam3 - 1)));
}

void func_139(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iParam2)) && (*uParam1)[iParam2 /*80*/] == 2)
	{
		if (unk_0x046706CBB367B768((uParam1[iParam2 /*80*/])->f_5))
		{
			if (Local_150[iParam2 /*2*/] == 0)
			{
				unk_0xC4CC25B68A91D144((uParam1[iParam2 /*80*/])->f_5, "Trail_1", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
			else if (Local_150[iParam2 /*2*/] == 1)
			{
				unk_0xC4CC25B68A91D144((uParam1[iParam2 /*80*/])->f_5, "Trail_2", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
			else if (Local_150[iParam2 /*2*/] == 2)
			{
				unk_0xC4CC25B68A91D144((uParam1[iParam2 /*80*/])->f_5, "Trail_3", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
			else
			{
				unk_0xC4CC25B68A91D144((uParam1[iParam2 /*80*/])->f_5, "Trail_4", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
		}
		if (!unk_0x046706CBB367B768((uParam1[iParam2 /*80*/])->f_5))
		{
			unk_0xD4974F3117C9F232((uParam1[iParam2 /*80*/])->f_5, "X", (uParam1[iParam2 /*80*/])->f_15);
			unk_0xD4974F3117C9F232((uParam1[iParam2 /*80*/])->f_5, "Y", (uParam1[iParam2 /*80*/])->f_16);
		}
	}
	if ((uParam1[iParam2 /*80*/])->f_9 != (uParam1[iParam2 /*80*/])->f_2 && (uParam1[iParam2 /*80*/])->f_4 > 0)
	{
		func_138((uParam1[iParam2 /*80*/])->f_19[((uParam1[iParam2 /*80*/])->f_4 - 1)], &fVar0, &fVar1, 9974);
		fVar4 = 0.2f;
		if (((((uParam1[iParam2 /*80*/])->f_9 == 0 && (uParam1[iParam2 /*80*/])->f_10[1] == 1) || ((uParam1[iParam2 /*80*/])->f_9 == 1 && (uParam1[iParam2 /*80*/])->f_10[1] == 0)) || ((uParam1[iParam2 /*80*/])->f_9 == 2 && (uParam1[iParam2 /*80*/])->f_10[1] == 3)) || ((uParam1[iParam2 /*80*/])->f_9 == 3 && (uParam1[iParam2 /*80*/])->f_10[1] == 2))
		{
			fVar4 = 0.25f;
		}
		if ((uParam1[iParam2 /*80*/])->f_9 == 0 || (uParam1[iParam2 /*80*/])->f_9 == 1)
		{
			fVar2 = unk_0x0D77CDCF403AEBD2(((uParam1[iParam2 /*80*/])->f_15 - fVar0));
			fVar3 = ((0.0068f * uParam0->f_8) * fVar4);
		}
		else if ((uParam1[iParam2 /*80*/])->f_9 == 2 || (uParam1[iParam2 /*80*/])->f_9 == 3)
		{
			fVar2 = unk_0x0D77CDCF403AEBD2(((uParam1[iParam2 /*80*/])->f_16 - fVar1));
			fVar3 = ((0.0068f * uParam0->f_8) * (fVar4 * uParam0->f_8));
		}
		if (fVar2 >= fVar3 || (iParam2 != iLocal_143 && !unk_0xCE990E643CD9D0E5(iLocal_144, (15 + iParam2))))
		{
			if (iParam2 == iLocal_143)
			{
				unk_0xC4CC25B68A91D144((uParam1[iParam2 /*80*/])->f_7, "Turn", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				func_129((uParam1[iParam2 /*80*/])->f_9, func_130((uParam1[iParam2 /*80*/])->f_15, (uParam1[iParam2 /*80*/])->f_16, 9974), iLocal_143, uLocal_142[iLocal_143]);
				func_9(&uLocal_146);
				uLocal_142[iLocal_143]++;
			}
			else
			{
				unk_0xC4CC25B68A91D144((uParam1[iParam2 /*80*/])->f_7, "Turn_NPC", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			}
			unk_0xD4974F3117C9F232((uParam1[iParam2 /*80*/])->f_7, "X", (uParam1[iParam2 /*80*/])->f_15);
			unk_0xD4974F3117C9F232((uParam1[iParam2 /*80*/])->f_7, "Y", (uParam1[iParam2 /*80*/])->f_16);
			if (!unk_0x046706CBB367B768((uParam1[iParam2 /*80*/])->f_5))
			{
				unk_0xD4974F3117C9F232((uParam1[iParam2 /*80*/])->f_5, "Turning", 1f);
			}
			(uParam1[iParam2 /*80*/])->f_2 = (uParam1[iParam2 /*80*/])->f_9;
			(uParam1[iParam2 /*80*/])->f_10[1] = (uParam1[iParam2 /*80*/])->f_10[0];
			(uParam1[iParam2 /*80*/])->f_10[0] = (uParam1[iParam2 /*80*/])->f_2;
			(uParam1[iParam2 /*80*/])->f_13 = unk_0x578C4EF320340AF7();
		}
	}
	else if (!unk_0x046706CBB367B768((uParam1[iParam2 /*80*/])->f_5))
	{
		unk_0xD4974F3117C9F232((uParam1[iParam2 /*80*/])->f_5, "Turning", 0f);
	}
	func_141(uParam0, iParam2);
	func_140(uParam0, uParam1, iParam2);
	func_144(uParam1, iParam2);
	unk_0xBE20AB8238688965(&iLocal_144, (3 + iParam2));
}

void func_140(var uParam0, var uParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	
	fVar0 = (0.06f * (uParam1[iParam2 /*80*/])->f_18);
	fVar1 = ((0.06f * (uParam1[iParam2 /*80*/])->f_18) * uParam0->f_8);
	switch ((uParam1[iParam2 /*80*/])->f_2)
	{
		case 0:
			(uParam1[iParam2 /*80*/])->f_16 = ((uParam1[iParam2 /*80*/])->f_16 - (fVar1 * timestep()));
			break;
		
		case 1:
			(uParam1[iParam2 /*80*/])->f_16 = ((uParam1[iParam2 /*80*/])->f_16 + (fVar1 * timestep()));
			break;
		
		case 2:
			(uParam1[iParam2 /*80*/])->f_15 = ((uParam1[iParam2 /*80*/])->f_15 - (fVar0 * timestep()));
			break;
		
		case 3:
			(uParam1[iParam2 /*80*/])->f_15 = ((uParam1[iParam2 /*80*/])->f_15 + (fVar0 * timestep()));
			break;
	}
	(uParam1[iParam2 /*80*/])->f_18 = 1f;
}

void func_141(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	if (uParam0->f_35[iParam1 /*80*/].f_4 == 0)
	{
		uParam0->f_35[iParam1 /*80*/].f_19[uParam0->f_35[iParam1 /*80*/].f_4] = func_130(uParam0->f_35[iParam1 /*80*/].f_15, uParam0->f_35[iParam1 /*80*/].f_16, 9974);
		uParam0->f_35[iParam1 /*80*/].f_4++;
	}
	if (uParam0->f_35[iParam1 /*80*/].f_2 != uParam0->f_35[iParam1 /*80*/].f_8)
	{
		if (uParam0->f_35[iParam1 /*80*/].f_4 >= 60)
		{
			iVar0 = 0;
			while (iVar0 <= 59)
			{
				if (iVar0 == 59)
				{
					uParam0->f_35[iParam1 /*80*/].f_19[iVar0] = func_130(uParam0->f_35[iParam1 /*80*/].f_15, uParam0->f_35[iParam1 /*80*/].f_16, 9974);
				}
				else
				{
					fVar1 = 0f;
					fVar2 = 0f;
					func_138(uParam0->f_35[iParam1 /*80*/].f_19[iVar0 + 1], &fVar1, &fVar2, 9974);
					uParam0->f_35[iParam1 /*80*/].f_19[iVar0] = func_130(fVar1, fVar2, 9974);
				}
				iVar0++;
			}
		}
		else
		{
			uParam0->f_35[iParam1 /*80*/].f_19[uParam0->f_35[iParam1 /*80*/].f_4] = func_130(uParam0->f_35[iParam1 /*80*/].f_15, uParam0->f_35[iParam1 /*80*/].f_16, 9974);
			uParam0->f_35[iParam1 /*80*/].f_4++;
		}
		uParam0->f_35[iParam1 /*80*/].f_8 = uParam0->f_35[iParam1 /*80*/].f_2;
	}
}

int func_142(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= (unk_0xEFA28384DDD283E1() - 1))
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)) && Local_150[iVar1 /*2*/] > -1)
		{
			if (uParam0->f_35[iVar1 /*80*/] != 3)
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_143(var uParam0)
{
	float fVar0;
	float fVar1;
	
	if ((uParam0[iLocal_143 /*80*/])->f_9 < 0)
	{
		(uParam0[iLocal_143 /*80*/])->f_9 = (uParam0[iLocal_143 /*80*/])->f_2;
	}
	if ((unk_0x578C4EF320340AF7() - (uParam0[iLocal_143 /*80*/])->f_13) >= 66)
	{
		fVar0 = unk_0xAAC78749C4BB5219(2, 218);
		fVar1 = unk_0xAAC78749C4BB5219(2, 219);
		if (fVar1 < -0.65f || unk_0x22D6FB6153F774D3(2, 188))
		{
			if ((uParam0[iLocal_143 /*80*/])->f_2 != 1)
			{
				(uParam0[iLocal_143 /*80*/])->f_9 = 0;
			}
		}
		if (fVar1 > 0.65f || unk_0x22D6FB6153F774D3(2, 187))
		{
			if ((uParam0[iLocal_143 /*80*/])->f_2 != 0)
			{
				(uParam0[iLocal_143 /*80*/])->f_9 = 1;
			}
		}
		if (fVar0 < -0.65f || unk_0x22D6FB6153F774D3(2, 189))
		{
			if ((uParam0[iLocal_143 /*80*/])->f_2 != 3)
			{
				(uParam0[iLocal_143 /*80*/])->f_9 = 2;
			}
		}
		if (fVar0 > 0.65f || unk_0x22D6FB6153F774D3(2, 190))
		{
			if ((uParam0[iLocal_143 /*80*/])->f_2 != 2)
			{
				(uParam0[iLocal_143 /*80*/])->f_9 = 3;
			}
		}
	}
}

void func_144(var uParam0, int iParam1)
{
	switch ((uParam0[iParam1 /*80*/])->f_2)
	{
		case 0:
			(uParam0[iParam1 /*80*/])->f_17 = 0f;
			break;
		
		case 1:
			(uParam0[iParam1 /*80*/])->f_17 = 180f;
			break;
		
		case 2:
			(uParam0[iParam1 /*80*/])->f_17 = 270f;
			break;
		
		case 3:
			(uParam0[iParam1 /*80*/])->f_17 = 90f;
			break;
	}
}

void func_145(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
			*fParam2 = (0.5f + -0.32f);
			*fParam3 = 0.54f;
			*iParam1 = 3;
			*iParam4 = 3;
			break;
		
		case 1:
			*fParam2 = (0.5f + 0.321f);
			*fParam3 = 0.54f;
			*iParam1 = 2;
			*iParam4 = 2;
			break;
		
		case 2:
			*fParam2 = (0.5f + 0f);
			*fParam3 = 0.26f;
			*iParam1 = 1;
			*iParam4 = 1;
			break;
		
		case 3:
			*fParam2 = (0.5f + 0f);
			*fParam3 = 0.822f;
			*iParam1 = 0;
			*iParam4 = 0;
			break;
	}
}

void func_146(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (uParam0->f_35[iVar0 /*80*/] == 2)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (*uParam0 < 7)
	{
		unk_0x33CDB98869100CA5("Music_Stream", "DLC_EXEC_ARC_MAC_SOUNDS");
	}
	else if (iVar1 > 1)
	{
		if (!unk_0xCE990E643CD9D0E5(uParam0->f_2, 3))
		{
			unk_0x85359168A2D8A513();
			unk_0xBE20AB8238688965(&(uParam0->f_2), 3);
		}
	}
	else if (unk_0x6F58AF991C7B1C91())
	{
		unk_0xAF628A2D7A8449B4();
	}
}

void func_147(var uParam0)
{
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_2, 15))
	{
		func_148(uParam0);
		unk_0xBE20AB8238688965(&(uParam0->f_2), 15);
	}
	func_81(uParam0);
}

void func_148(var uParam0)
{
	if (unk_0x95EF219D38B20CFF(uParam0->f_34))
	{
		unk_0x830F007E19C63E14(uParam0->f_34, "SHOW_HUD");
		func_149(0);
		func_149(1);
		func_149(2);
		func_149(3);
		if (iLocal_143 > -1 && Local_150[iLocal_143 /*2*/] > -1)
		{
			unk_0xAD291B8F75D737AD(Local_150[iLocal_143 /*2*/]);
		}
		unk_0xE1FDD153F5858534();
	}
}

void func_149(int iParam0)
{
	struct<16> Var0;
	struct<16> Var1;
	int iVar2;
	
	Var0 = { func_69(iParam0) };
	Var1 = { func_67(iParam0) };
	iVar2 = func_150(iParam0);
	unk_0xAD291B8F75D737AD(iVar2);
	unk_0x4A096F645CED26D9(&Var1);
	func_58(&Var0);
}

int func_150(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)) && Local_150[iVar0 /*2*/] == iParam0)
		{
			return Local_149.f_7[iVar0];
		}
		iVar0++;
	}
	return -1;
}

void func_151(var uParam0)
{
	if (!func_8(&(uParam0->f_20), 1000, 0))
	{
		if (!unk_0xCE990E643CD9D0E5(uParam0->f_2, 10))
		{
			func_57(uParam0, "DCTL_COUNTDOWNGO", 0, 0);
			unk_0xBE20AB8238688965(&(uParam0->f_2), 10);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(uParam0->f_2, 10))
	{
		func_152(uParam0);
		unk_0xD2459066EA58CE43(&(uParam0->f_2), 10);
	}
}

void func_152(var uParam0)
{
	if (unk_0x95EF219D38B20CFF(uParam0->f_34))
	{
		unk_0x830F007E19C63E14(uParam0->f_34, "CLEAR_CENTRAL_MESSAGE");
		unk_0xE1FDD153F5858534();
	}
}

void func_153(var uParam0)
{
	int iVar0;
	
	func_60(uParam0);
	iVar0 = 0;
	while (iVar0 <= (unk_0xEFA28384DDD283E1() - 1))
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)) && Local_150[iVar0 /*2*/] > -1)
		{
			if (uParam0->f_35[iVar0 /*80*/].f_1 != 0)
			{
				func_154(uParam0, &(uParam0->f_35), iVar0);
			}
		}
		iVar0++;
	}
}

void func_154(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	bool bVar20;
	bool bVar21;
	
	if ((uParam1[iParam2 /*80*/])->f_14 != -2147483647 && unk_0x6CAAB7E78B5D978A() > (uParam1[iParam2 /*80*/])->f_14 + 1000)
	{
		return;
	}
	func_155(Local_150[iParam2 /*2*/], &iVar0, &iVar1, &iVar2);
	if ((*uParam1)[iParam2 /*80*/] == 3)
	{
		iVar0 = 255;
		iVar1 = 255;
		iVar2 = 255;
	}
	fVar3 = (0.5f - ((0.5f - (uParam1[iParam2 /*80*/])->f_15) * uParam0->f_9));
	fVar4 = (0.0068f * uParam0->f_9);
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 < 60)
	{
		func_138((uParam1[iParam2 /*80*/])->f_19[iVar5], &fVar7, &fVar8, 9974);
		if (fVar7 != 0f || fVar8 != 0f)
		{
			if (iVar5 + 1 >= 60)
			{
				fVar9 = (uParam1[iParam2 /*80*/])->f_15;
				fVar10 = (uParam1[iParam2 /*80*/])->f_16;
			}
			else
			{
				func_138((uParam1[iParam2 /*80*/])->f_19[iVar5 + 1], &fVar9, &fVar10, 9974);
				if (fVar9 == 0f && fVar10 == 0f)
				{
					fVar9 = (uParam1[iParam2 /*80*/])->f_15;
					fVar10 = (uParam1[iParam2 /*80*/])->f_16;
				}
			}
			fVar11 = (fVar9 - fVar7);
			fVar12 = (fVar10 - fVar8);
			fVar13 = (fVar7 + (fVar11 * 0.5f));
			fVar14 = (fVar8 + (fVar12 * 0.5f));
			if (unk_0x0D77CDCF403AEBD2(fVar11) > 0.001f)
			{
				if (fVar11 > 0f)
				{
					iVar6 = 3;
				}
				else
				{
					iVar6 = 2;
				}
				fVar15 = 90f;
				fVar16 = (unk_0x0D77CDCF403AEBD2(fVar11) + 0.003f);
				fVar17 = (0.003f * uParam0->f_8);
			}
			if (unk_0x0D77CDCF403AEBD2(fVar12) > 0.001f)
			{
				if (fVar12 > 0f)
				{
					iVar6 = 1;
				}
				else
				{
					iVar6 = 0;
				}
				fVar15 = 0f;
				fVar16 = 0.003f;
				fVar17 = (unk_0x0D77CDCF403AEBD2(fVar12) + ((0.003f * 0.5f) * uParam0->f_8));
			}
			fVar18 = (0.5f - ((0.5f - fVar13) * uParam0->f_9));
			fVar19 = (fVar16 * uParam0->f_9);
			unk_0x177AA645FB4B3A38("LineArcadeMinigame", "Tail", fVar18, fVar14, fVar19, fVar17, fVar15, iVar0, iVar1, iVar2, (uParam1[iParam2 /*80*/])->f_1, 0);
			if (iParam2 == iLocal_143)
			{
				if ((*uParam1)[iParam2 /*80*/] == 2)
				{
					bVar20 = false;
					if ((uParam1[iParam2 /*80*/])->f_2 == 2 || (uParam1[iParam2 /*80*/])->f_2 == 3)
					{
						bVar20 = func_137(fVar3, (uParam1[iParam2 /*80*/])->f_16, (fVar4 * 0.42f), (0.012f * 0.42f), fVar18, fVar14, (fVar19 * 0.95f), fVar17);
					}
					if ((uParam1[iParam2 /*80*/])->f_2 == 0 || (uParam1[iParam2 /*80*/])->f_2 == 1)
					{
						bVar20 = func_137(fVar3, (uParam1[iParam2 /*80*/])->f_16, (fVar4 * 0.42f), (0.012f * 0.42f), fVar18, fVar14, fVar19, (fVar17 * 0.95f));
					}
					if (bVar20)
					{
						bVar21 = false;
						if (iVar5 == ((uParam1[iParam2 /*80*/])->f_4 - 3))
						{
							if (iVar6 == (uParam1[iParam2 /*80*/])->f_2)
							{
								bVar21 = true;
							}
						}
						if (iVar5 < ((uParam1[iParam2 /*80*/])->f_4 - 2) && !bVar21)
						{
							func_133(iParam2);
						}
					}
				}
			}
			fVar15 = 0f;
			fVar16 = 0f;
			fVar17 = 0f;
		}
		iVar5++;
	}
	unk_0x177AA645FB4B3A38("LineArcadeMinigame", "HeadPixel", fVar3, (uParam1[iParam2 /*80*/])->f_16, fVar4, 0.012f, (uParam1[iParam2 /*80*/])->f_17, iVar0, iVar1, iVar2, (uParam1[iParam2 /*80*/])->f_1, 0);
}

void func_155(int iParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	
	func_156(func_157(func_127(iParam0)), uParam1, uParam2, uParam3, &uVar0);
}

void func_156(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam1 = unk_0x039D1DD18D3EA3F3(iParam0, 24, 31);
	*uParam2 = unk_0x039D1DD18D3EA3F3(iParam0, 16, 23);
	*uParam3 = unk_0x039D1DD18D3EA3F3(iParam0, 8, 15);
	*uParam4 = unk_0x039D1DD18D3EA3F3(iParam0, 0, 7);
}

int func_157(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x28DD484BAEAF8437(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return func_158(iVar0, iVar1, iVar2, iVar3);
}

var func_158(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	unk_0xB995B3D5D361AF59(&uVar0, 24, 31, iParam0);
	unk_0xB995B3D5D361AF59(&uVar0, 16, 23, iParam1);
	unk_0xB995B3D5D361AF59(&uVar0, 8, 15, iParam2);
	unk_0xB995B3D5D361AF59(&uVar0, 0, 7, iParam3);
	return uVar0;
}

void func_159(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<6> Var4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	int iVar10;
	struct<6> Var11;
	int iVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	
	Var1.f_2 = -1;
	Var1.f_3 = -1082130432;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var4 = 32;
	Var4.f_1.f_2 = -1;
	Var4.f_1.f_3 = -1082130432;
	Var4.f_1.f_4 = -1;
	Var4.f_1.f_5 = -1;
	Var4.f_1.f_6.f_2 = -1;
	Var4.f_1.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_4 = -1;
	Var4.f_1.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_3 = -1082130432;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_4 = -1;
	Var4.f_1.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_6.f_5 = -1;
	iVar5 = 0;
	iVar6 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0x2AC1C68C7CCA90E5(1))
	{
		if (unk_0x39BE1B4CEB4DAEC8(1, iVar0) == 174)
		{
			if (unk_0xCE990E643CD9D0E5(iLocal_144, 0))
			{
				if (unk_0x477FAFFE21935947(1, iVar0, &Var1, 6))
				{
					if (Var1 == -1877958358)
					{
						if (iVar5 < 16)
						{
							Var4[iVar5 /*6*/] = { Var1 };
							if (!unk_0xCE990E643CD9D0E5(iLocal_144, (7 + Var1.f_4)))
							{
								unk_0xBE20AB8238688965(&iLocal_144, (7 + Var1.f_4));
							}
							iVar5++;
						}
					}
				}
				if (unk_0x477FAFFE21935947(1, iVar0, &Var2, 3))
				{
					if (Var2.x == -459915941)
					{
						func_164(&(uParam0->f_35), Var2.f_2);
					}
				}
			}
			else if (unk_0x477FAFFE21935947(1, iVar0, &Var3, 3))
			{
				if (Var3.x == -704173214)
				{
					iLocal_145 = Var3.f_2;
				}
			}
		}
		iVar0++;
	}
	Var11.f_2 = -1;
	Var11.f_3 = -1082130432;
	Var11.f_4 = -1;
	Var11.f_5 = -1;
	iVar9 = iVar5;
	while (iVar9 <= 15)
	{
		if (Local_141[iVar9 /*6*/].f_5 < 99999 && Local_141[iVar9 /*6*/].f_5 > -1)
		{
			Var4[(iVar5 + iVar9) /*6*/] = { Local_141[iVar9 /*6*/] };
			Local_141[iVar9 /*6*/] = { Var11 };
			iVar10++;
		}
		iVar9++;
	}
	iVar5 = (iVar5 + iVar10);
	if (iVar5 > 1)
	{
		iVar0 = 0;
		while (iVar0 <= (iVar5 - 1))
		{
			iVar0++;
		}
		func_162(&Var4, 0, (iVar5 - 1));
		iVar0 = 0;
		while (iVar0 <= (iVar5 - 1))
		{
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iVar5 - 1))
	{
		func_138(Var4[iVar0 /*6*/].f_3, &fVar7, &fVar8, 9974);
		if (Var4[iVar0 /*6*/].f_5 < 99999)
		{
			if (!uLocal_142[Var4[iVar0 /*6*/].f_4] == Var4[iVar0 /*6*/].f_4 * 10000)
			{
				if (Var4[iVar0 /*6*/].f_5 > uLocal_142[Var4[iVar0 /*6*/].f_4] + 2)
				{
					iVar12 = 0;
					if (func_161(&iVar12))
					{
						Local_141[iVar12 /*6*/] = { Var4[iVar0 /*6*/] };
					}
					if (Var4[iVar0 /*6*/].f_5 > uLocal_142[Var4[iVar0 /*6*/].f_4] + 4)
					{
						uLocal_142[Var4[iVar0 /*6*/].f_4]++;
					}
					Jump @2261; //curOff = 1568
				}
				else if (Var4[iVar0 /*6*/].f_5 < uLocal_142[Var4[iVar0 /*6*/].f_4])
				{
				}
				else
				{
					if (Var4[iVar0 /*6*/].f_5 == uLocal_142[Var4[iVar0 /*6*/].f_4] + 2)
					{
						fVar13 = 0f;
						fVar14 = 0f;
						fVar15 = 0f;
						fVar16 = 0f;
						iVar17 = -1;
						if (uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*80*/].f_4 > 0)
						{
							func_138(uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*80*/].f_19[(uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*80*/].f_4 - 1)], &fVar15, &fVar16, 9974);
						}
						else
						{
							iVar18 = 0;
							iVar19 = 0;
							func_145(Local_150[Var4[iVar0 /*6*/].f_4 /*2*/], &iVar18, &fVar15, &fVar16, &iVar19);
						}
						switch (uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*80*/].f_2)
						{
							case 0:
							case 1:
								if (fVar15 > fVar7)
								{
									iVar17 = 3;
								}
								else
								{
									iVar17 = 2;
								}
								break;
							
							case 3:
							case 2:
								if (fVar16 > fVar8)
								{
									iVar17 = 1;
								}
								else
								{
									iVar17 = 0;
								}
								break;
						}
						switch (iVar17)
						{
							case 0:
								fVar13 = fVar7;
								fVar14 = fVar16;
								break;
							
							case 1:
								fVar13 = fVar7;
								fVar14 = fVar16;
								break;
							
							case 3:
								fVar13 = fVar15;
								fVar14 = fVar8;
								break;
							
							case 2:
								fVar13 = fVar15;
								fVar14 = fVar8;
								break;
						}
						func_160(uParam0, Var4[iVar0 /*6*/].f_4, iVar17, fVar13, fVar14, &iVar6);
						func_139(uParam0, &(uParam0->f_35), Var4[iVar0 /*6*/].f_4);
						func_160(uParam0, Var4[iVar0 /*6*/].f_4, Var4[iVar0 /*6*/].f_2, fVar7, fVar8, &iVar6);
						func_139(uParam0, &(uParam0->f_35), Var4[iVar0 /*6*/].f_4);
					}
					else
					{
						if (!Var4[iVar0 /*6*/].f_5 == uLocal_142[Var4[iVar0 /*6*/].f_4] + 1 && !Var4[iVar0 /*6*/].f_5 == Var4[iVar0 /*6*/].f_4 * 10000)
						{
						}
						func_138(Var4[iVar0 /*6*/].f_3, &fVar7, &fVar8, 9974);
						func_160(uParam0, Var4[iVar0 /*6*/].f_4, Var4[iVar0 /*6*/].f_2, fVar7, fVar8, &iVar6);
						func_139(uParam0, &(uParam0->f_35), Var4[iVar0 /*6*/].f_4);
					}
					uLocal_142[Var4[iVar0 /*6*/].f_4] = Var4[iVar0 /*6*/].f_5;
					Jump @2261; //curOff = 2131
					if (Var4[iVar0 /*6*/].f_2 == 4 && !unk_0xCE990E643CD9D0E5(iVar6, Var4[iVar0 /*6*/].f_4))
					{
						if (!unk_0xCE990E643CD9D0E5(iLocal_144, (15 + Var4[iVar0 /*6*/].f_4)))
						{
							unk_0xBE20AB8238688965(&iLocal_144, (15 + Var4[iVar0 /*6*/].f_4));
						}
						uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*80*/].f_15 = fVar7;
						uParam0->f_35[Var4[iVar0 /*6*/].f_4 /*80*/].f_16 = fVar8;
						func_139(uParam0, &(uParam0->f_35), Var4[iVar0 /*6*/].f_4);
					}
				}
				iVar0++;
			}

void func_160(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5)
{
	uParam0->f_35[iParam1 /*80*/].f_9 = iParam2;
	uParam0->f_35[iParam1 /*80*/].f_15 = fParam3;
	uParam0->f_35[iParam1 /*80*/].f_16 = fParam4;
	if (unk_0xCE990E643CD9D0E5(*iParam5, iParam1))
	{
		uParam0->f_35[iParam1 /*80*/].f_8 = uParam0->f_35[iParam1 /*80*/].f_2;
	}
	else
	{
		unk_0xBE20AB8238688965(iParam5, iParam1);
	}
}

int func_161(int iParam0)
{
	*iParam0 = 0;
	while (*iParam0 <= 15)
	{
		if (Local_141[*iParam0 /*6*/].f_5 == -1)
		{
			return 1;
		}
		*iParam0++;
	}
	return 0;
}

void func_162(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_163(uParam0, iParam1, iParam2);
	if (iParam1 < (iVar0 - 1))
	{
		func_162(uParam0, iParam1, (iVar0 - 1));
	}
	if (iVar0 < iParam2)
	{
		func_162(uParam0, iVar0, iParam2);
	}
}

int func_163(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<6> Var2;
	int iVar3;
	
	iVar0 = iParam1;
	iVar1 = iParam2;
	Var2.f_2 = -1;
	Var2.f_3 = -1082130432;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	iVar3 = (uParam0[((iParam1 + iParam2) / 2) /*6*/])->f_5;
	while (iVar0 <= iVar1)
	{
		while ((uParam0[iVar0 /*6*/])->f_5 < iVar3)
		{
			iVar0++;
		}
		while ((uParam0[iVar1 /*6*/])->f_5 > iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		if (iVar0 <= iVar1)
		{
			Var2 = { *(uParam0[iVar0 /*6*/]) };
			*(uParam0[iVar0 /*6*/]) = { *(uParam0[iVar1 /*6*/]) };
			*(uParam0[iVar1 /*6*/]) = { Var2 };
			iVar0++;
			iVar1 = (iVar1 - 1);
		}
	}
	return iVar0;
}

void func_164(var uParam0, int iParam1)
{
	if (!unk_0x046706CBB367B768((uParam0[iParam1 /*80*/])->f_5))
	{
		unk_0xC5E5600D1CF5CEF9((uParam0[iParam1 /*80*/])->f_5);
	}
	if (iParam1 == iLocal_143)
	{
		unk_0xC4CC25B68A91D144((uParam0[iParam1 /*80*/])->f_6, "Crash", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
	}
	else
	{
		unk_0xC4CC25B68A91D144((uParam0[iParam1 /*80*/])->f_6, "Crash_NPC", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
	}
	unk_0xD4974F3117C9F232((uParam0[iParam1 /*80*/])->f_6, "X", (uParam0[iParam1 /*80*/])->f_15);
	unk_0xD4974F3117C9F232((uParam0[iParam1 /*80*/])->f_6, "Y", (uParam0[iParam1 /*80*/])->f_16);
	func_16(uParam0, 3, iParam1);
}

void func_165(var uParam0)
{
	int iVar0;
	
	if (!func_12(&(uParam0->f_18)))
	{
		func_10(&(uParam0->f_18), 0, 0);
	}
	iVar0 = 0;
	while (iVar0 <= (unk_0xEFA28384DDD283E1() - 1))
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)) && Local_150[iVar0 /*2*/] > -1)
		{
			func_131(uParam0, &(uParam0->f_35), iVar0);
		}
		iVar0++;
	}
	func_153(uParam0);
	func_168(uParam0);
	func_147(uParam0);
	func_159(uParam0);
	func_167(uParam0);
	func_146(uParam0);
	if (Local_149 >= 7)
	{
		unk_0xC5E5600D1CF5CEF9(uParam0->f_3);
		unk_0xC4CC25B68A91D144(-1, "Go", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		func_9(&(uParam0->f_18));
		func_166();
		func_186(uParam0, 7);
	}
}

void func_166()
{
	int iVar0;
	struct<6> Var1;
	
	Var1.f_2 = -1;
	Var1.f_3 = -1082130432;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		uLocal_142[iVar0] = iVar0 * 10000;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Local_141[iVar0 /*6*/] = { Var1 };
		iVar0++;
	}
}

void func_167(var uParam0)
{
	if (!func_8(&(uParam0->f_18), 1000, 0))
	{
		if (!unk_0xCE990E643CD9D0E5(uParam0->f_2, 2))
		{
			unk_0xC4CC25B68A91D144(-1, "321", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			unk_0xBE20AB8238688965(&(uParam0->f_2), 2);
		}
	}
	else if (!func_8(&(uParam0->f_18), 2000, 0))
	{
		if (!unk_0xCE990E643CD9D0E5(uParam0->f_2, 1))
		{
			unk_0xC4CC25B68A91D144(-1, "321", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
			unk_0xBE20AB8238688965(&(uParam0->f_2), 1);
		}
	}
	else if (!unk_0xCE990E643CD9D0E5(uParam0->f_2, 0))
	{
		unk_0xC4CC25B68A91D144(-1, "321", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		unk_0xBE20AB8238688965(&(uParam0->f_2), 0);
	}
}

void func_168(var uParam0)
{
	if (!func_8(&(uParam0->f_18), 1000, 0))
	{
		if (!unk_0xCE990E643CD9D0E5(uParam0->f_2, 7))
		{
			func_57(uParam0, "DCTL_COUNTDOWN3", 0, 0);
			unk_0xBE20AB8238688965(&(uParam0->f_2), 7);
		}
	}
	else if (!func_8(&(uParam0->f_18), 2000, 0))
	{
		if (!unk_0xCE990E643CD9D0E5(uParam0->f_2, 8))
		{
			func_57(uParam0, "DCTL_COUNTDOWN2", 0, 0);
			unk_0xBE20AB8238688965(&(uParam0->f_2), 8);
		}
	}
	else if (!unk_0xCE990E643CD9D0E5(uParam0->f_2, 9))
	{
		func_57(uParam0, "DCTL_COUNTDOWN1", 0, 0);
		unk_0xBE20AB8238688965(&(uParam0->f_2), 9);
	}
}

void func_169(var uParam0)
{
	int iVar0;
	
	if (!func_12(&(uParam0->f_16)))
	{
		func_10(&(uParam0->f_16), 0, 0);
	}
	iVar0 = 0;
	while (iVar0 <= (unk_0xEFA28384DDD283E1() - 1))
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)) && Local_150[iVar0 /*2*/] > -1)
		{
			func_131(uParam0, &(uParam0->f_35), iVar0);
		}
		iVar0++;
	}
	if (unk_0xCE990E643CD9D0E5(uParam0->f_2, 16))
	{
		func_55(uParam0);
		unk_0xD2459066EA58CE43(&(uParam0->f_2), 16);
	}
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_2, 18))
	{
		unk_0xC4CC25B68A91D144(-1, "Ready", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
		unk_0xBE20AB8238688965(&(uParam0->f_2), 18);
	}
	func_153(uParam0);
	func_170(uParam0);
	func_147(uParam0);
	func_146(uParam0);
	if (Local_149 == 10)
	{
		func_186(uParam0, 10);
		func_54(1);
	}
	else if (Local_149 >= 6)
	{
		func_186(uParam0, 6);
	}
}

void func_170(var uParam0)
{
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_2, 6))
	{
		func_57(uParam0, "DCTL_READY", 0, 2);
		unk_0xBE20AB8238688965(&(uParam0->f_2), 6);
	}
}

void func_171(var uParam0)
{
	bool bVar0;
	int iVar1;
	
	func_60(uParam0);
	func_172(uParam0);
	if (unk_0xCE990E643CD9D0E5(uParam0->f_2, 16))
	{
		func_55(uParam0);
		unk_0xD2459066EA58CE43(&(uParam0->f_2), 16);
	}
	if (Local_149.f_77 == 3 && !unk_0xCE990E643CD9D0E5(Local_150[iLocal_143 /*2*/].f_1, 5))
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= (unk_0xEFA28384DDD283E1() - 1))
		{
			if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
			{
				if (Local_149.f_2[iVar1] == -1)
				{
					bVar0 = false;
				}
				else
				{
					if (iVar1 == iLocal_143)
					{
						Local_150[iLocal_143 /*2*/] = Local_149.f_2[iLocal_143];
						func_145(Local_150[iVar1 /*2*/], &(uParam0->f_35[iVar1 /*80*/].f_2), &(uParam0->f_35[iVar1 /*80*/].f_15), &(uParam0->f_35[iVar1 /*80*/].f_16), &(uParam0->f_35[iVar1 /*80*/].f_8));
					}
					else if (Local_150[iVar1 /*2*/] == Local_149.f_2[iVar1])
					{
						func_145(Local_150[iVar1 /*2*/], &(uParam0->f_35[iVar1 /*80*/].f_2), &(uParam0->f_35[iVar1 /*80*/].f_15), &(uParam0->f_35[iVar1 /*80*/].f_16), &(uParam0->f_35[iVar1 /*80*/].f_8));
					}
					else
					{
						bVar0 = false;
					}
					iVar1++;
				}
				if (bVar0)
				{
					unk_0xBE20AB8238688965(&(Local_150[iLocal_143 /*2*/].f_1), 5);
				}
				if (Local_149 == 10)
				{
					unk_0xC5E5600D1CF5CEF9(uParam0->f_3);
					unk_0xC4CC25B68A91D144(-1, "Music_Game_Over", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
					func_186(uParam0, 10);
					func_54(0);
				}
				else if (Local_149 >= 5)
				{
					uParam0->f_5 = unk_0xB9E6DF0411C3488E();
					unk_0xD4974F3117C9F232(uParam0->f_3, "FadeOut", 7f);
					func_70();
					func_186(uParam0, 5);
					unk_0xD2459066EA58CE43(&(Local_150[iLocal_143 /*2*/].f_1), 5);
				}
			}

void func_172(var uParam0)
{
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_2, 13))
	{
		func_57(uParam0, "DCTL_LOADING", 0, 2);
		unk_0xBE20AB8238688965(&(uParam0->f_2), 13);
	}
}

void func_173(var uParam0)
{
	if (unk_0xCE990E643CD9D0E5(uParam0->f_2, 14))
	{
		func_176(uParam0);
		unk_0xD2459066EA58CE43(&(uParam0->f_2), 14);
		unk_0xBE20AB8238688965(&(uParam0->f_2), 17);
	}
	func_60(uParam0);
	func_175(uParam0);
	if (unk_0xF8EDFF98A9C94C74())
	{
		unk_0x779660A9E5364C4D(2, 200, 1);
	}
	if (!unk_0xF0C12886E5C1B20E())
	{
		if ((unk_0x1BD7199394D7F19A(2, 201) && !unk_0xCE990E643CD9D0E5(Local_150[iLocal_143 /*2*/].f_1, 3)) && !unk_0xCE990E643CD9D0E5(Local_150[iLocal_143 /*2*/].f_1, 4))
		{
			func_79(3);
		}
		if ((unk_0x1BD7199394D7F19A(2, 202) && !unk_0xCE990E643CD9D0E5(Local_150[iLocal_143 /*2*/].f_1, 3)) && !unk_0xCE990E643CD9D0E5(Local_150[iLocal_143 /*2*/].f_1, 4))
		{
			func_79(4);
		}
	}
	if (func_78())
	{
		func_6(1);
	}
	if ((!unk_0xCE990E643CD9D0E5(uParam0->f_2, 4) && !unk_0xCE990E643CD9D0E5(Local_150[iLocal_143 /*2*/].f_1, 3)) && !unk_0xCE990E643CD9D0E5(Local_150[iLocal_143 /*2*/].f_1, 4))
	{
		unk_0x4F09C0B0476C63DC("DCTL_TITLEHELP", 0);
		unk_0xBE20AB8238688965(&(uParam0->f_2), 5);
	}
	func_174(uParam0);
	func_146(uParam0);
	func_64(uParam0, 0);
	if (Local_149 > 3)
	{
		if (unk_0xCE990E643CD9D0E5(Local_150[iLocal_143 /*2*/].f_1, 4) || unk_0xCE990E643CD9D0E5(Local_150[iLocal_143 /*2*/].f_1, 2))
		{
			func_186(uParam0, 11);
		}
		else
		{
			if (Local_149 == 10)
			{
				func_6(0);
				func_5(0, 0);
				func_186(uParam0, 10);
				func_54(1);
				return;
			}
			func_14(uParam0);
			func_6(0);
			func_5(0, 0);
			if (Local_149 == 4)
			{
				func_186(uParam0, 4);
			}
			else
			{
				uParam0->f_5 = unk_0xB9E6DF0411C3488E();
				unk_0xD4974F3117C9F232(uParam0->f_3, "FadeOut", 7f);
				func_186(uParam0, 5);
			}
		}
	}
	else if (unk_0x046706CBB367B768(uParam0->f_3))
	{
		unk_0xC4CC25B68A91D144(uParam0->f_3, "Background", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
	}
}

void func_174(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)) && Local_150[iVar0 /*2*/] > -1)
		{
			if (unk_0xCE990E643CD9D0E5(Local_150[iVar0 /*2*/].f_1, 3) && !unk_0xCE990E643CD9D0E5(uParam0->f_35[iVar0 /*80*/].f_3, 0))
			{
				unk_0xC4CC25B68A91D144(uParam0->f_6, "Insert_Coin", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				unk_0xBE20AB8238688965(&(uParam0->f_35[iVar0 /*80*/].f_3), 0);
				if (unk_0xCE990E643CD9D0E5(uParam0->f_35[iVar0 /*80*/].f_3, 1))
				{
					unk_0xD2459066EA58CE43(&(uParam0->f_35[iVar0 /*80*/].f_3), 1);
				}
			}
			else if (unk_0xCE990E643CD9D0E5(Local_150[iVar0 /*2*/].f_1, 4) && !unk_0xCE990E643CD9D0E5(uParam0->f_35[iVar0 /*80*/].f_3, 1))
			{
				unk_0xC4CC25B68A91D144(uParam0->f_6, "Cancel", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				unk_0xBE20AB8238688965(&(uParam0->f_35[iVar0 /*80*/].f_3), 1);
				if (unk_0xCE990E643CD9D0E5(uParam0->f_35[iVar0 /*80*/].f_3, 0))
				{
					unk_0xD2459066EA58CE43(&(uParam0->f_35[iVar0 /*80*/].f_3), 0);
				}
			}
		}
		iVar0++;
	}
}

void func_175(var uParam0)
{
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_2, 16))
	{
		unk_0xBE20AB8238688965(&(uParam0->f_2), 16);
	}
	func_65(uParam0, "DCTL_INSERT", 0);
	func_83(uParam0);
	func_81(uParam0);
}

void func_176(var uParam0)
{
	if (unk_0x95EF219D38B20CFF(uParam0->f_34))
	{
		unk_0x830F007E19C63E14(uParam0->f_34, "HIDE_LOADING_SCREEN");
		unk_0xE1FDD153F5858534();
	}
}

void func_177(var uParam0)
{
	if (!unk_0xCE990E643CD9D0E5(Local_150[iLocal_143 /*2*/].f_1, 1))
	{
		if (unk_0x25DDB354A40FFCDB())
		{
			func_32(unk_0x460153A63B9477BC(), 0, 0, 0);
			func_180();
		}
		else
		{
			unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), false, 0);
		}
		func_49(1, 0, 1, 0);
		unk_0x17E478571720218F("DLC_Exec_Arc_Mac_Playing_Game_Scene");
		func_179(uParam0);
		func_10(&(uParam0->f_10), 0, 0);
		unk_0xBE20AB8238688965(&(uParam0->f_2), 14);
		unk_0xBE20AB8238688965(&(Local_150[iLocal_143 /*2*/].f_1), 1);
	}
	else
	{
		switch (uParam0->f_1)
		{
			case 0:
				unk_0xC4CC25B68A91D144(-1, "Degenatron_Logo", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
				func_178(uParam0, 1);
				break;
			
			case 1:
				if (func_8(&(uParam0->f_10), 1800, 0))
				{
					unk_0xC4CC25B68A91D144(-1, "Degenatron_Star", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
					func_178(uParam0, 2);
				}
				break;
			
			case 2:
				if (func_8(&(uParam0->f_10), 2250, 0))
				{
					if (unk_0x046706CBB367B768(uParam0->f_3))
					{
						unk_0xC4CC25B68A91D144(uParam0->f_3, "Background", "DLC_EXEC_ARC_MAC_SOUNDS", 1);
					}
					func_178(uParam0, 3);
				}
				break;
		}
		if (func_8(&(uParam0->f_10), 2200, 0))
		{
			unk_0xBE20AB8238688965(&(uParam0->f_2), 17);
		}
		if (func_8(&(uParam0->f_10), 6000, 0) || ((uParam0->f_1 == 3 && func_8(&(uParam0->f_10), 3000, 0)) && unk_0x1BD7199394D7F19A(2, 201)))
		{
			unk_0xBE20AB8238688965(&(Local_150[iLocal_143 /*2*/].f_1), 6);
			func_70();
			if (Local_149 == 9)
			{
				func_186(uParam0, 9);
			}
			else if (Local_149 >= 3)
			{
				func_186(uParam0, 3);
			}
		}
	}
}

void func_178(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_179(var uParam0)
{
	if (unk_0x95EF219D38B20CFF(uParam0->f_34))
	{
		unk_0x830F007E19C63E14(uParam0->f_34, "SHOW_LOADING_SCREEN");
		unk_0xE1FDD153F5858534();
	}
}

void func_180()
{
	Global_2440049.f_1267.f_10 = 1;
}

void func_181(var uParam0)
{
	if (!unk_0xCE990E643CD9D0E5(Local_150[iLocal_143 /*2*/].f_1, 0))
	{
		func_183();
		uParam0->f_34 = unk_0x5DEA4192B46CB99B("dont_cross_the_line");
		if (func_182() && unk_0x95EF219D38B20CFF(uParam0->f_34))
		{
			unk_0xBE20AB8238688965(&(Local_150[iLocal_143 /*2*/].f_1), 0);
			func_186(uParam0, 2);
		}
	}
}

int func_182()
{
	if ((unk_0x8B917081F9836EDD("DLC_EXEC1/OFFICE_BOARDROOM", false, -1) && unk_0xC7F5A2E99D75A65C("LineArcadeMinigame")) && unk_0xF5EE205091CE6DB2(3))
	{
		return 1;
	}
	return 0;
}

int func_183()
{
	if (unk_0x8B917081F9836EDD("DLC_EXEC1/OFFICE_BOARDROOM", false, -1))
	{
		unk_0x494D5FF88119CDC0("LineArcadeMinigame", false);
		unk_0xBAA4D421B8B8A744("DCTL", 3);
		unk_0xBE20AB8238688965(&Global_1663764, 6);
		return 1;
	}
	return 0;
}

void func_184(var uParam0)
{
	int iVar0;
	
	if (iLocal_143 == -1)
	{
		Global_4456448.f_123773 = 1;
		uParam0->f_8 = func_185();
		uParam0->f_3 = unk_0x5E54B0823F46079E();
		uParam0->f_6 = unk_0x5E54B0823F46079E();
		uParam0->f_7 = unk_0x5E54B0823F46079E();
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_35[iVar0 /*80*/].f_5 = unk_0x5E54B0823F46079E();
			uParam0->f_35[iVar0 /*80*/].f_6 = unk_0x5E54B0823F46079E();
			uParam0->f_35[iVar0 /*80*/].f_7 = unk_0x5E54B0823F46079E();
			iVar0++;
		}
		Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_757 = 1;
		iLocal_143 = unk_0x59E2AD1A8ACEDA31();
		Local_150[iLocal_143 /*2*/] = -1;
		uParam0->f_34 = 0;
		func_79(2);
		func_178(uParam0, 0);
	}
	if (Local_150[iLocal_143 /*2*/] == -1)
	{
		if (Local_149.f_2[iLocal_143] > -1)
		{
			Local_150[iLocal_143 /*2*/] = Local_149.f_2[iLocal_143];
		}
	}
	else
	{
		func_186(uParam0, 1);
	}
	func_6(0);
}

float func_185()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	unk_0x9DD549AAA043F83A(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (fVar2 >= 4f)
		{
			fVar2 = (fVar2 / 3f);
		}
	}
	return fVar2;
}

void func_186(var uParam0, int iParam1)
{
	uParam0->f_4 = 0;
	*uParam0 = iParam1;
}

void func_187(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	unk_0x2B6C81DF4CD1093C(0);
	unk_0x2B6C81DF4CD1093C(2);
	unk_0xD8D551845E3EA730(0);
	func_207(1);
	func_206(4, -1);
	unk_0x689789B905574795(19);
	func_205();
	func_204();
	func_203();
	unk_0xD10328357EA7B9E5();
	if ((!func_201(unk_0x460153A63B9477BC()) && !func_200(unk_0x460153A63B9477BC())) && !func_198(unk_0x460153A63B9477BC()))
	{
		func_186(uParam0, 11);
	}
	if (!func_45())
	{
		func_186(uParam0, 11);
	}
	if (func_200(unk_0x460153A63B9477BC()) && unk_0x03DB5C6AABF8DA46())
	{
		func_186(uParam0, 11);
	}
	if (func_198(unk_0x460153A63B9477BC()) && unk_0x03DB5C6AABF8DA46())
	{
		func_186(uParam0, 11);
	}
	func_197();
	unk_0x0037AEC7A79CCCB4();
	if (Local_149 > 2)
	{
		func_190(0);
	}
	func_188(uParam0);
	if (!unk_0xF0C12886E5C1B20E() && Local_149 > 2)
	{
		unk_0xA86915034F55A3BF();
		unk_0x9D15035C6653D1B1(1);
	}
	if (unk_0xAFF96FDC3971E7EA() && !Local_149 == 4)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
			{
				if (Local_149.f_2[iVar1] == -1)
				{
					Local_149.f_2[iVar1] = func_24();
					bVar0 = true;
				}
			}
			else if (Local_149.f_2[iVar1] != -1)
			{
				Local_149.f_2[iVar1] = -1;
				bVar0 = true;
			}
			iVar1++;
		}
		if (bVar0)
		{
			iVar1 = 0;
			while (iVar1 <= (unk_0xEFA28384DDD283E1() - 1))
			{
				if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
				{
					iVar2 = 0;
					while (iVar2 <= (unk_0xEFA28384DDD283E1() - 1))
					{
						if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar2)))
						{
							if (iVar2 != iVar1 && (Local_149.f_2[iVar1] == Local_149.f_2[iVar2] || Local_149.f_2[iVar1] == -1))
							{
								Local_149.f_2[iVar1] = -1;
								return;
							}
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
}

void func_188(var uParam0)
{
	uParam0->f_8 = func_185();
	uParam0->f_9 = func_189(uParam0->f_8);
}

float func_189(float fParam0)
{
	return (1.778f / fParam0);
}

void func_190(int iParam0)
{
	if (func_196())
	{
		return;
	}
	if (!Global_19681.f_1 == 1)
	{
		if (func_195(0))
		{
			func_191(iParam0);
		}
		unk_0xBE20AB8238688965(&Global_7552, 2);
	}
}

void func_191(int iParam0)
{
	if (func_196())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_194())
		{
			func_193(1, 1);
		}
		else
		{
			func_193(0, 0);
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
	if (!func_192())
	{
		Global_19681.f_1 = 3;
	}
}

int func_192()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_193(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_195(0))
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

bool func_194()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

int func_195(int iParam0)
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

bool func_196()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

void func_197()
{
	Global_22411.f_134 = 1;
}

int func_198(int iParam0)
{
	if (iParam0 != func_77())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_199(Global_2425869[iParam0 /*443*/].f_314.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_199(int iParam0)
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

int func_200(int iParam0)
{
	if (iParam0 != func_77())
	{
		if (func_21(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_199(Global_2425869[iParam0 /*443*/].f_314.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_201(int iParam0)
{
	if (func_202(Global_1590682[iParam0 /*883*/].f_274.f_28))
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0)
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

void func_203()
{
	Global_2540384.f_4595 = 0;
}

void func_204()
{
	Global_22411.f_6 = 1;
}

void func_205()
{
	Global_1312593 = 1;
	StringCopy(&(Global_1312593.f_1), unk_0x6C5C6B207AA78253(), 32);
	Global_1312593.f_9 = unk_0x856D5567211886A2(&(Global_1312593.f_1));
}

void func_206(int iParam0, int iParam1)
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

void func_207(int iParam0)
{
	Global_1378744.f_1121 = iParam0;
}

void func_208()
{
	func_29(&uLocal_151);
	func_30();
}

int func_209()
{
	var uVar0;
	
	func_216(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 1;
		}
	}
	if (func_215())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_214())
	{
		return 1;
	}
	if (func_213(159))
	{
		if (!func_212())
		{
			return 1;
		}
	}
	if (func_213(157))
	{
		return 1;
	}
	if (!unk_0x0EB6C63A09FD9DF1())
	{
		return 1;
	}
	if (func_210() != 0)
	{
		if (unk_0x7B70881748D166CD(func_210()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_210()
{
	switch (func_92())
	{
		case 0:
			return func_211();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_211()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_212()
{
	return Global_2451787.f_696;
}

int func_213(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_214()
{
	return Global_2462250;
}

bool func_215()
{
	return Global_2451787.f_691;
}

void func_216(var uParam0)
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
					func_217(iVar0);
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

void func_217(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_21(Var0.f_1, 1, 1))
		{
			iVar1 = unk_0x1FA7B77001D60F9D(Var0.f_1);
			if (unk_0xAE06B9E39EBDE049(iVar1))
			{
				if (unk_0x47DBF174A0CB9D55(iVar1, 0))
				{
					iVar2 = unk_0xA5D5B1042E8F47BD(iVar1, 0);
					if (unk_0x292280AF1BBBD6AC(iVar2, Var0.f_2) && unk_0x82CC259B7B4F4AD9())
					{
						if (func_218(iVar2, &bVar3))
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

int func_218(int iParam0, var uParam1)
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

void func_219()
{
	wait(0);
}

void func_220(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_3, 3))
		{
			func_183();
		}
		unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_3), 3);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_3), 3);
	}
}

void func_221(struct<21> Param0)
{
	func_225(4, Param0);
	if (!func_224(0, -1, 1))
	{
		func_208();
	}
	func_223();
	unk_0x97D2F2E2C92FD519(&Local_149, 78);
	unk_0xBB96A3ECD45D0317(&Local_150, 9);
	if (!func_222())
	{
		func_208();
	}
}

int func_222()
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
		if (func_215())
		{
			return 0;
		}
		if (func_213(157))
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

void func_223()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_149.f_2[iVar0] = -1;
		iVar0++;
	}
}

int func_224(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x361B374A50D875B4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_30();
			}
			else
			{
				return 0;
			}
		}
		if (!func_94())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x25DDB354A40FFCDB())
				{
					if (!bParam2)
					{
						func_30();
					}
					else
					{
						return 0;
					}
				}
				if (func_215())
				{
					if (!bParam2)
					{
						func_30();
					}
					else
					{
						return 0;
					}
				}
				if (func_213(157))
				{
					if (!bParam2)
					{
						func_30();
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
					func_30();
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
				func_30();
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
			func_30();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_225(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		func_30();
	}
	unk_0xA88557896B79E30D(iParam0, 0, Param1.f_16);
}

