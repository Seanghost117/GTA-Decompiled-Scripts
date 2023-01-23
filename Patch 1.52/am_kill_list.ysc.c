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
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	struct<617> Local_82 = { 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 782665360, 1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1275859404, -1860900134, 0, 5, 4, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_83 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_84[4] = { 0, 0, 0, 0 };
	struct<18> Local_85[32];
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88[5] = { 0, 0, 0, 0, 0 };
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	float fLocal_92 = 0f;
	int iLocal_93[4] = { 0, 0, 0, 0 };
	struct<8> Local_94[24];
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98[4] = { 0, 0, 0, 0 };
	int iLocal_99[4] = { 0, 0, 0, 0 };
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	struct<42> Local_103[32];
	struct<104> Local_104 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1 } ;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = -1;
	var uLocal_111 = -1;
	var uLocal_112 = -1;
	var uLocal_113 = -1;
	var uLocal_114 = -1;
	var uLocal_115 = -1;
	var uLocal_116 = 0;
	var uLocal_117 = 32;
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
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
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
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	int iLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544[4] = { 0, 0, 0, 0 };
	int iLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	int iLocal_548 = 0;
	int iLocal_549 = 0;
	struct<2> Local_550[10];
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	struct<2> Local_561[5];
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	int iLocal_566 = 0;
	struct<3> Local_567 = { 0, 0, 0 } ;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_574 = 0;
	int iLocal_575[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_576 = 0;
	var uLocal_577[4] = { 0, 0, 0, 0 };
	var uLocal_578[4] = { 0, 0, 0, 0 };
	struct<21> Local_579 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	sLocal_18 = "NULL";
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
	fLocal_92 = -100f;
	iLocal_542 = -1;
	iLocal_543 = -1;
	iLocal_570 = -1;
	if (unk_0x25DDB354A40FFCDB() && func_850(unk_0x460153A63B9477BC(), 0, 1))
	{
		func_839(ScriptParam_579);
	}
	else
	{
		func_793();
	}
	while (true)
	{
		func_792();
		if (func_785())
		{
			func_793();
		}
		else if (func_782(19))
		{
			func_793();
		}
		if (func_781())
		{
			func_793();
		}
		func_757();
		switch (func_756(unk_0x59E2AD1A8ACEDA31()))
		{
			case 0:
				if ((func_755() == 1 && Local_82.f_1 != -1) && Local_82.f_2 != -1)
				{
					func_753();
					func_749(129, Local_82.f_1, Local_82.f_2, 0);
					if (Global_2540384.f_5112 == -1)
					{
						if (!func_748())
						{
							Global_2540384.f_5112 = 0;
						}
						else
						{
							Global_2540384.f_5112 = 1;
						}
					}
					func_747(Local_82.f_30[0 /*3*/]);
					Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/] = 1;
				}
				else if (func_755() == 4)
				{
					Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/] = 3;
				}
				break;
			
			case 1:
				if (func_755() == 1)
				{
					func_742();
					func_741();
					func_723();
					func_423();
					func_164();
					func_163();
					func_162();
				}
				else if (func_755() == 4)
				{
					Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/] = 3;
				}
				break;
			
			case 3:
				func_161(&(Local_82.f_320));
				if (func_160(&(Local_82.f_320)))
				{
					Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/] = 4;
				}
				break;
			
			case 2:
				Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/] = 4;
			
			case 4:
				func_793();
				break;
		}
		if (unk_0xAFF96FDC3971E7EA())
		{
			switch (func_755())
			{
				case 0:
					if (func_145())
					{
						if (func_140())
						{
							func_137(func_139(129, Local_82.f_1, Local_82.f_2, 0));
							Local_82 = 1;
						}
					}
					break;
				
				case 1:
					func_128();
					func_32();
					func_24();
					if (func_1())
					{
						Local_82 = 4;
					}
					break;
				
				case 4:
					break;
				}
		}
	}
}

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	if ((unk_0xCE990E643CD9D0E5(Local_82.f_3, 0) && unk_0xCE990E643CD9D0E5(Local_82.f_3, 1)) && unk_0xCE990E643CD9D0E5(Local_82.f_3, 2))
	{
		if (!unk_0xCE990E643CD9D0E5(Local_82.f_3, 11))
		{
			return 0;
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 6))
	{
		if (!unk_0xCE990E643CD9D0E5(Local_82.f_3, 11))
		{
			return 0;
		}
	}
	if (Local_82.f_241 > 0)
	{
		if (Local_82 != 4)
		{
			if (func_23())
			{
				if (Local_82.f_241 == 3)
				{
					if (func_21())
					{
						if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 11))
						{
							return 1;
						}
					}
				}
				else if (func_19(&(Local_82.f_322), 3000, 0))
				{
					if (func_21())
					{
						return 1;
					}
				}
			}
		}
		if (Local_82.f_241 < 3)
		{
			iVar0 = 0;
			if (Local_82.f_241 >= 1)
			{
				iVar0 = 1;
				iVar1 = 0;
				while (iVar1 < unk_0xEFA28384DDD283E1())
				{
					if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
					{
						if (!func_16(unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar1)), 0))
						{
							if (Local_85[iVar1 /*18*/].f_17 < 2)
							{
								iVar0 = 0;
							}
						}
					}
					iVar1++;
				}
			}
			if (iVar0 == 1)
			{
				if ((!((unk_0xCE990E643CD9D0E5(Local_82.f_3, 0) && unk_0xCE990E643CD9D0E5(Local_82.f_3, 1)) && unk_0xCE990E643CD9D0E5(Local_82.f_3, 2)) && !unk_0xCE990E643CD9D0E5(Local_82.f_3, 6)) && !unk_0xCE990E643CD9D0E5(Local_82.f_3, 14))
				{
					unk_0xBE20AB8238688965(&(Local_82.f_3), 15);
				}
				func_7();
			}
			else if (Local_82.f_241 < 3)
			{
				if (func_3())
				{
					unk_0xBE20AB8238688965(&(Local_82.f_3), 16);
					unk_0xBE20AB8238688965(&(Local_82.f_3), 15);
					func_7();
				}
			}
		}
	}
	return 0;
}

int func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iVar0]))
		{
			if (!func_4(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 1, 0, 0, 0, 0, 1, 0, 1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_4(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
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
			iVar2 = func_6(iParam0, (iVar0 - 1), bParam6, iParam7);
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
						if (((!unk_0x5AEB5DDFFAD43CA5(iVar2) && iVar3 != func_5()) && func_850(iVar3, 1, 1)) || iParam8)
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

int func_5()
{
	return -1;
}

int func_6(int iParam0, int iParam1, bool bParam2, int iParam3)
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
					if (vdist(unk_0x3E4D3CCC220BDFB1(iParam0, 0), unk_0x3E4D3CCC220BDFB1(iVar0, 0)) < 10f)
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

void func_7()
{
	if (Local_82.f_241 != 3)
	{
		func_9();
		func_8(&(Local_82.f_324), 0, 0);
		Local_82.f_241 = 3;
	}
}

void func_8(var uParam0, bool bParam1, bool bParam2)
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

void func_9()
{
	if (!func_15())
	{
		return;
	}
	if (!unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) == Global_1312603.f_9)
	{
		return;
	}
	func_10();
}

void func_10()
{
	func_12();
	func_11(0);
}

void func_11(bool bParam0)
{
	bool bVar0;
	
	bVar0 = unk_0x25DDB354A40FFCDB();
	Global_1312603 = 20;
	StringCopy(&(Global_1312603.f_1), "", 32);
	Global_1312603.f_9 = 0;
	if (bVar0)
	{
		Global_1312603.f_10 = unk_0x6CAAB7E78B5D978A();
		Global_1312603.f_11 = unk_0x6CAAB7E78B5D978A();
	}
	StringCopy(&(Global_1312603.f_12), "", 16);
	StringCopy(&(Global_1312603.f_16), "", 64);
	StringCopy(&(Global_1312603.f_32), "", 64);
	Global_1312603.f_52 = 0;
	Global_1312603.f_53 = 0;
	Global_1312603.f_54 = 0;
	Global_1312603.f_55 = -1;
	Global_1312603.f_56 = 0;
	Global_1312603.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_12()
{
	if (!func_14())
	{
	}
	if (func_15())
	{
		unk_0x6BF33E036B49E0DD(&(Global_1312603.f_12));
		func_13();
		unk_0x9F579D40FBAC4233();
	}
}

void func_13()
{
	switch (Global_1312603)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			unk_0x42710E9E08FA375A(Global_1312603.f_52);
			return;
		
		case 2:
			unk_0x42710E9E08FA375A(Global_1312603.f_52);
			unk_0x42710E9E08FA375A(Global_1312603.f_53);
			return;
		
		case 3:
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 4:
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 5:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			return;
		
		case 6:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			return;
		
		case 7:
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 8:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 9:
			unk_0x05CA0125610AB2F4(&(Global_1312603.f_16));
			return;
		
		case 10:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_32));
			return;
		
		case 12:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 13:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_57);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 11:
			unk_0x05CA0125610AB2F4(&(Global_1312603.f_16));
			return;
		
		case 14:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 15:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_57);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_32));
			return;
		
		case 17:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_32));
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_48));
			return;
		
		case 16:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			return;
		
		case 19:
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_16));
			return;
		
		case 18:
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_16));
			unk_0x7006FC1051C85FCA(Global_1312603.f_56);
			unk_0x6A826E35A3096ED0(&(Global_1312603.f_48));
			unk_0x9EFD301E3BE8324E(&(Global_1312603.f_32));
			return;
		
		default:
	}
}

int func_14()
{
	if (!func_15())
	{
		return 0;
	}
	unk_0xCD7691F7F3015C57(&(Global_1312603.f_12));
	func_13();
	return unk_0x5E0AC8AED85CE7CB();
}

int func_15()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_16(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_17(-1, 0) == 8;
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

int func_17(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_18();
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

int func_18()
{
	return Global_1312763;
}

int func_19(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_20(uParam0, bParam2, 0);
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

void func_20(var uParam0, bool bParam1, bool bParam2)
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

int func_21()
{
	int iVar0;
	
	if (!func_22(&(Local_82.f_328)))
	{
		func_20(&(Local_82.f_328), 0, 0);
	}
	else if (func_19(&(Local_82.f_328), 20000, 0))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_48[iVar0]))
		{
			if (Local_82.f_85[iVar0] < 4)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_22(var uParam0)
{
	return uParam0->f_1;
}

int func_23()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iVar0]))
		{
			if (!unk_0xA59F96B50B97E63C(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_24()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!unk_0xAFF96FDC3971E7EA())
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_48[iVar1]))
		{
			if (!func_31(Local_82.f_48[iVar1]))
			{
				switch (Local_82.f_85[iVar1])
				{
					case 0:
						if (!unk_0x47DBF174A0CB9D55(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar1]), 0))
						{
							Local_82.f_85[iVar1] = 1;
						}
						else if (unk_0x47DBF174A0CB9D55(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar1]), 0) && func_30(iVar1))
						{
							Local_82.f_85[iVar1] = 1;
						}
						break;
					
					case 1:
						if (Local_82.f_241 == 1)
						{
							if (!func_23())
							{
								if (unk_0x47DBF174A0CB9D55(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar1]), 0))
								{
									iVar4 = unk_0xA5D5B1042E8F47BD(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar1]), 0);
									if (func_29(iVar4, 250f))
									{
										Local_82.f_85[iVar1] = 2;
									}
									else if (unk_0xF9C3E2B9AA9E2294(unk_0x36FE6D3220816ADA(iVar4)))
									{
										if ((iVar1 % 4) == 0)
										{
											iVar0 = (iVar1 / 4);
											if (iVar0 < 5)
											{
												if (Local_82.f_110[iVar0] == -1 || !func_28(iVar1))
												{
													iVar2 = func_27();
													if (iVar2 != func_5())
													{
														iVar3 = unk_0x1FA7B77001D60F9D(iVar2);
														if (!unk_0x5AEB5DDFFAD43CA5(iVar3))
														{
															if (func_26(iVar4, iVar3, 1) > 250f)
															{
																Local_82.f_110[iVar0] = iVar2;
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
									Local_82.f_85[iVar1] = 2;
								}
							}
							else
							{
								Local_82.f_85[iVar1] = 3;
							}
						}
						else
						{
							Local_82.f_85[iVar1] = 3;
						}
						break;
					
					case 2:
						if (Local_82.f_241 == 1)
						{
							if (func_23())
							{
								Local_82.f_85[iVar1] = 3;
							}
							else if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 6))
							{
								Local_82.f_85[iVar1] = 3;
							}
							else if (unk_0xCE990E643CD9D0E5(Local_82.f_464, iVar1))
							{
								Local_82.f_85[iVar1] = 1;
								unk_0xD2459066EA58CE43(&(Local_82.f_464), iVar1);
							}
						}
						else
						{
							Local_82.f_85[iVar1] = 3;
						}
						break;
					
					case 3:
						if (unk_0xA26A1295C5145A11(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar1])))
						{
							func_25(&(Local_82.f_48[iVar1]));
							Local_82.f_85[iVar1] = 4;
						}
						break;
					}
				}
		}
		iVar1++;
	}
}

void func_25(var uParam0)
{
	int iVar0;
	
	if (unk_0x3D70CCF2C9B362CD(*uParam0))
	{
		iVar0 = unk_0x62D2FF718BC7717D(*uParam0);
		unk_0x95047B5978C3543C(&iVar0);
	}
}

float func_26(int iParam0, int iParam1, int iParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 1) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 0) };
	}
	if (!unk_0xA59F96B50B97E63C(iParam1, 0))
	{
		Var1 = { unk_0x3E4D3CCC220BDFB1(iParam1, 1) };
	}
	else
	{
		Var1 = { unk_0x3E4D3CCC220BDFB1(iParam1, 0) };
	}
	return unk_0x272784C60C397DB6(Var0, Var1, iParam2);
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_5();
	iVar1 = 0;
	while (iVar1 < unk_0xEFA28384DDD283E1())
	{
		if (iVar0 == func_5())
		{
			if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
			{
				if (Local_85[iVar1 /*18*/].f_1 != 0)
				{
					if (Local_85[iVar1 /*18*/].f_17 == 1)
					{
						iVar0 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar1));
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((iParam0 % 4) == 0)
	{
		iVar0 = (iParam0 / 4);
		if (iVar0 < 5)
		{
			if (Local_82.f_110[iVar0] != -1)
			{
				iVar3 = Local_82.f_110[iVar0];
				iVar1 = unk_0xF1110FE23C67293A(iVar3);
				if (unk_0x166E920FB00B2DBB(iVar1))
				{
					if (func_850(iVar1, 1, 1))
					{
						if (unk_0xFA298F06F67BBD4A(iVar1))
						{
							iVar2 = unk_0x653D75F1BBF766B3(iVar1);
							iVar3 = iVar2;
							if (Local_85[iVar3 /*18*/].f_17 != 1)
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
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_29(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
		{
			if (Local_85[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_85[iVar0 /*18*/].f_17 == 1)
				{
					iVar1 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar0));
					iVar2 = unk_0x1FA7B77001D60F9D(iVar1);
					if (!unk_0x5AEB5DDFFAD43CA5(iVar2))
					{
						if (func_26(iParam0, iVar2, 1) < fParam1)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	if (!unk_0x47DBF174A0CB9D55(unk_0x3C6C6327BA564AEE(Local_82.f_48[iParam0]), 0))
	{
		return 0;
	}
	iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x3C6C6327BA564AEE(Local_82.f_48[iParam0]), 0);
	if (!unk_0x80FF6C016CDB0FAF(iVar0, 0))
	{
		return 0;
	}
	return 1;
}

int func_31(var uParam0)
{
	if (unk_0xF7DE07F319727299(uParam0))
	{
		return unk_0x5AEB5DDFFAD43CA5(unk_0x3C6C6327BA564AEE(uParam0));
	}
	return 1;
}

void func_32()
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	
	if (Local_82.f_463 > 0)
	{
		if (Local_82.f_28 != Local_82.f_463)
		{
			Local_82.f_28 = Local_82.f_463;
		}
	}
	switch (Local_82.f_241)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_82.f_28)
			{
				if (Local_82.f_17[iVar0] == func_5())
				{
				}
				else
				{
					iVar1++;
					if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 4))
					{
					}
				}
				iVar0++;
			}
			func_125();
			func_124();
			if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 4))
			{
				Local_82.f_463 = iVar1;
			}
			if (func_122())
			{
				func_115();
				Local_82.f_241 = 1;
			}
			else if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 4) && func_112() > 1)
			{
				func_111();
				func_115();
				Local_82.f_241 = 1;
			}
			if (!func_748())
			{
				if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[0]))
				{
					if (!func_109(Local_82.f_7[0]))
					{
						Var2.f_2 = 1938563328;
						func_107(Var2, func_108(unk_0x770D3B2B4702434A(Local_82.f_7[0]), 1, 0));
						Local_82.f_241 = 2;
					}
				}
			}
			if (Local_82.f_241 == 0)
			{
				if (!func_22(&(Local_82.f_330)))
				{
					if (!func_22(&(Local_82.f_326)))
					{
						func_20(&(Local_82.f_330), 0, 0);
					}
				}
				else if (func_22(&(Local_82.f_326)))
				{
					func_106(&(Local_82.f_330));
				}
				else if (func_19(&(Local_82.f_330), func_105(), 0))
				{
					Var2.f_2 = 1938563328;
					func_107(Var2, func_104(1));
					unk_0xBE20AB8238688965(&(Local_82.f_3), 12);
					func_7();
				}
				if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 14))
				{
					func_7();
				}
			}
			break;
		
		case 1:
			func_35();
			func_33();
			func_111();
			if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 6))
			{
				Local_82.f_241 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}

void func_33()
{
	if (!unk_0xCE990E643CD9D0E5(Local_82.f_3, 19))
	{
		return;
	}
	if (!unk_0xCE990E643CD9D0E5(Local_82.f_3, 6))
	{
		if (!func_22(&(Local_82.f_332)))
		{
			func_20(&(Local_82.f_332), 0, 0);
			unk_0xBE20AB8238688965(&(Local_82.f_3), 7);
		}
		else if (func_19(&(Local_82.f_332), func_34(), 0))
		{
			unk_0xBE20AB8238688965(&(Local_82.f_3), 6);
		}
	}
}

int func_34()
{
	if (func_748())
	{
		return Global_262145.f_11117;
	}
	return Global_262145.f_11094;
}

void func_35()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar2 = true;
	bVar3 = false;
	if (Local_82.f_278 > 0)
	{
		if (Local_82.f_279 >= Local_82.f_278)
		{
			if (Local_82.f_254 >= Local_82.f_255)
			{
				unk_0xBE20AB8238688965(&(Local_82.f_3), 0);
				unk_0xBE20AB8238688965(&(Local_82.f_3), 1);
				unk_0xBE20AB8238688965(&(Local_82.f_3), 2);
				return;
			}
		}
	}
	iVar5 = 0;
	if (bVar2)
	{
		if (Local_82.f_278 > 0)
		{
			if (Local_82.f_279 >= Local_82.f_278)
			{
				if (Local_82.f_256[0] >= 0)
				{
					iVar5 = (iVar5 + Local_82.f_256[0]);
				}
				if (Local_82.f_256[1] >= 0)
				{
					iVar5 = (iVar5 + Local_82.f_256[1]);
				}
				if (Local_82.f_256[2] >= 0)
				{
					iVar5 = (iVar5 + Local_82.f_256[2]);
				}
				if (Local_82.f_256[3] >= 0)
				{
					iVar5 = (iVar5 + Local_82.f_256[3]);
				}
				if (iVar5 >= Local_82.f_255)
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 24)
					{
						if (unk_0x3D70CCF2C9B362CD(Local_82.f_48[iVar4]))
						{
							if (!func_31(Local_82.f_48[iVar4]))
							{
								bVar3 = true;
							}
						}
						iVar4++;
					}
					if (!bVar3)
					{
						unk_0xBE20AB8238688965(&(Local_82.f_3), 0);
						unk_0xBE20AB8238688965(&(Local_82.f_3), 1);
						unk_0xBE20AB8238688965(&(Local_82.f_3), 2);
						return;
					}
				}
				bVar3 = false;
				iVar4 = 0;
				iVar4 = 0;
				while (iVar4 < 24)
				{
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_48[iVar4]))
					{
						if (!func_31(Local_82.f_48[iVar4]))
						{
							bVar3 = true;
						}
					}
					iVar4++;
				}
				if (!bVar3)
				{
					if (!func_22(&(Local_82.f_347)))
					{
						func_20(&(Local_82.f_347), 0, 0);
					}
					else if (func_19(&(Local_82.f_347), 3000, 0))
					{
						unk_0xBE20AB8238688965(&(Local_82.f_3), 0);
						unk_0xBE20AB8238688965(&(Local_82.f_3), 1);
						unk_0xBE20AB8238688965(&(Local_82.f_3), 2);
						return;
					}
				}
			}
		}
	}
	if (!unk_0xCE990E643CD9D0E5(Local_82.f_3, 0) || !unk_0xCE990E643CD9D0E5(Local_82.f_3, 1))
	{
		if (Local_82.f_249 >= func_103())
		{
			unk_0xBE20AB8238688965(&(Local_82.f_3), 0);
			unk_0xBE20AB8238688965(&(Local_82.f_3), 1);
		}
		iVar0 = 0;
		while (iVar0 < Local_82.f_242)
		{
			if (unk_0xF7DE07F319727299(Local_82.f_73[iVar0]))
			{
				if (func_102(iVar0))
				{
					if (!unk_0xCE990E643CD9D0E5(Local_82.f_245, iVar0))
					{
						if ((Local_82.f_27 != joaat("hydra") && !func_4(unk_0x770D3B2B4702434A(Local_82.f_73[iVar0]), 1, 0, 0, 0, 0, 1, 0, 1)) || Local_82.f_27 == joaat("hydra"))
						{
							unk_0xD2459066EA58CE43(&(Local_82.f_3), 0);
							if (func_22(&(Local_561[iVar0 /*2*/])))
							{
								func_106(&(Local_561[iVar0 /*2*/]));
							}
						}
						else if (func_4(unk_0x770D3B2B4702434A(Local_82.f_73[iVar0]), 1, 0, 0, 0, 0, 1, 0, 1) && unk_0x36FE6D3220816ADA(unk_0x770D3B2B4702434A(Local_82.f_73[iVar0])) == joaat("savage"))
						{
							if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 0))
							{
								unk_0xD2459066EA58CE43(&(Local_82.f_3), 0);
							}
							if (!unk_0xCE990E643CD9D0E5(Local_82.f_3, 18))
							{
								func_101(func_104(1), iVar0);
								unk_0xBE20AB8238688965(&(Local_82.f_3), 18);
							}
						}
						else if (func_100(iVar0) || !func_748())
						{
							if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 0))
							{
								unk_0xD2459066EA58CE43(&(Local_82.f_3), 0);
							}
							if (!unk_0xCE990E643CD9D0E5(Local_82.f_303, iVar0))
							{
								func_99(func_104(1), iVar0);
								unk_0xBE20AB8238688965(&(Local_82.f_303), iVar0);
							}
						}
						else
						{
							func_25(&(Local_82.f_73[iVar0]));
							if (!unk_0xCE990E643CD9D0E5(Local_82.f_253, iVar0))
							{
								Local_82.f_251 = (Local_82.f_251 - 1);
								if (func_98() > 1)
								{
									if (Local_82.f_252 > 0)
									{
										Local_82.f_302++;
										func_97(iVar0, func_104(1));
									}
								}
								unk_0xBE20AB8238688965(&(Local_82.f_253), iVar0);
							}
							func_106(&(Local_561[iVar0 /*2*/]));
						}
					}
				}
				else if (func_96(iVar0))
				{
					if (!unk_0xCE990E643CD9D0E5(Local_82.f_253, iVar0))
					{
						Local_82.f_251 = (Local_82.f_251 - 1);
						if (func_98() > 1)
						{
							if (Local_82.f_252 > 0)
							{
								Local_82.f_302++;
								func_97(iVar0, func_104(1));
							}
						}
						if (Local_82.f_27 == joaat("hydra"))
						{
							Local_82.f_254++;
						}
						unk_0xBE20AB8238688965(&(Local_82.f_253), iVar0);
					}
					if (func_22(&(Local_82.f_336[iVar0 /*2*/])))
					{
						func_106(&(Local_82.f_336[iVar0 /*2*/]));
					}
					func_25(&(Local_82.f_73[iVar0]));
				}
				else
				{
					if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 0))
					{
						unk_0xD2459066EA58CE43(&(Local_82.f_3), 0);
					}
					if (!unk_0xCE990E643CD9D0E5(Local_82.f_271, iVar0))
					{
						if (!func_22(&(Local_82.f_336[iVar0 /*2*/])))
						{
							func_20(&(Local_82.f_336[iVar0 /*2*/]), 0, 0);
						}
						else if (func_19(&(Local_82.f_336[iVar0 /*2*/]), 5000, 0))
						{
							unk_0xBE20AB8238688965(&(Local_82.f_271), iVar0);
						}
						else if (func_19(&(Local_82.f_336[iVar0 /*2*/]), 3000, 0))
						{
							if (unk_0x36FE6D3220816ADA(unk_0x770D3B2B4702434A(Local_82.f_73[iVar0])) == joaat("savage"))
							{
								if (!unk_0xCE990E643CD9D0E5(Local_82.f_3, 18))
								{
									func_101(func_104(1), iVar0);
									unk_0xBE20AB8238688965(&(Local_82.f_3), 18);
								}
							}
							else if (func_100(iVar0) || !func_748())
							{
								if (!unk_0xCE990E643CD9D0E5(Local_82.f_303, iVar0))
								{
									func_99(func_104(1), iVar0);
									unk_0xBE20AB8238688965(&(Local_82.f_303), iVar0);
								}
							}
						}
					}
				}
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_82.f_116)
			{
				if (unk_0xF7DE07F319727299(Local_82.f_48[(iVar0 * 4 + iVar1)]))
				{
					iVar6 = (iVar0 * 4 + iVar1);
					if (!func_31(Local_82.f_48[(iVar0 * 4 + iVar1)]))
					{
						if (unk_0x47DBF174A0CB9D55(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iVar0 * 4 + iVar1)]), 0))
						{
							if (!func_94((iVar0 * 4 + iVar1)))
							{
								unk_0xD2459066EA58CE43(&(Local_82.f_3), 0);
							}
							else if (func_93(iVar6))
							{
								if (!func_19(&(Local_82.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
								{
								}
								if (unk_0xD2160441D64A7913(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iVar0 * 4 + iVar1)])))
								{
									func_92(&(Local_94[(iVar0 * 4 + iVar1) /*8*/]));
								}
								func_25(&(Local_82.f_48[(iVar0 * 4 + iVar1)]));
								if (unk_0xCE990E643CD9D0E5(Local_82.f_272[func_91(iVar6)], func_90(iVar6)))
								{
									if (Local_82.f_85[(iVar0 * 4 + iVar1)] > 0)
									{
										func_89((iVar0 * 4 + iVar1), func_104(1));
										Local_82.f_254++;
									}
								}
								Local_82.f_85[(iVar0 * 4 + iVar1)] = 0;
								if (func_22(&(Local_82.f_364[iVar6 /*2*/])))
								{
									func_106(&(Local_82.f_364[iVar6 /*2*/]));
								}
								if (unk_0xCE990E643CD9D0E5(Local_82.f_275[func_91(iVar6)], func_90(iVar6)))
								{
									unk_0xD2459066EA58CE43(&(Local_82.f_275[func_91(iVar6)]), func_90(iVar6));
								}
							}
							else
							{
								if (!unk_0xCE990E643CD9D0E5(Local_82.f_272[func_91(iVar6)], func_90(iVar6)))
								{
									if (!func_22(&(Local_82.f_364[iVar6 /*2*/])))
									{
										func_20(&(Local_82.f_364[iVar6 /*2*/]), 0, 0);
									}
									else if (func_19(&(Local_82.f_364[iVar6 /*2*/]), 7000, 0))
									{
										unk_0xBE20AB8238688965(&(Local_82.f_272[func_91(iVar6)]), func_90(iVar6));
										func_106(&(Local_82.f_364[iVar6 /*2*/]));
									}
								}
								if (!unk_0xCE990E643CD9D0E5(Local_82.f_275[func_91(iVar6)], func_90(iVar6)))
								{
									unk_0xBE20AB8238688965(&(Local_82.f_275[func_91(iVar6)]), func_90(iVar6));
								}
							}
						}
					}
					else if (unk_0xCE990E643CD9D0E5(Local_82.f_272[func_91(iVar6)], func_90(iVar6)) || Local_82.f_27 == joaat("hydra"))
					{
						if (!func_19(&(Local_82.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
						{
						}
						func_25(&(Local_82.f_48[(iVar0 * 4 + iVar1)]));
						if (unk_0xCE990E643CD9D0E5(Local_82.f_272[func_91(iVar6)], func_90(iVar6)))
						{
							if (Local_82.f_85[(iVar0 * 4 + iVar1)] > 0)
							{
								Local_82.f_254++;
								func_89((iVar0 * 4 + iVar1), func_104(1));
							}
						}
						Local_82.f_85[(iVar0 * 4 + iVar1)] = 0;
						if (unk_0xCE990E643CD9D0E5(Local_82.f_275[func_91(iVar6)], func_90(iVar6)))
						{
							unk_0xD2459066EA58CE43(&(Local_82.f_275[func_91(iVar6)]), func_90(iVar6));
						}
					}
					else
					{
						if (!unk_0xCE990E643CD9D0E5(Local_82.f_272[func_91(iVar6)], func_90(iVar6)))
						{
							if (!func_22(&(Local_82.f_364[iVar6 /*2*/])))
							{
								func_20(&(Local_82.f_364[iVar6 /*2*/]), 0, 0);
							}
							else if (func_19(&(Local_82.f_364[iVar6 /*2*/]), 7000, 0))
							{
								unk_0xBE20AB8238688965(&(Local_82.f_272[func_91(iVar6)]), func_90(iVar6));
								func_106(&(Local_82.f_364[iVar6 /*2*/]));
							}
						}
						if (!unk_0xCE990E643CD9D0E5(Local_82.f_275[func_91(iVar6)], func_90(iVar6)))
						{
							unk_0xBE20AB8238688965(&(Local_82.f_275[func_91(iVar6)]), func_90(iVar6));
						}
					}
				}
				iVar1++;
			}
			if (Local_82.f_249 < func_103())
			{
				if (func_73(iVar0))
				{
				}
				unk_0xD2459066EA58CE43(&(Local_82.f_3), 0);
			}
			iVar0++;
		}
	}
	if (!unk_0xCE990E643CD9D0E5(Local_82.f_3, 2))
	{
		if (Local_82.f_247 >= Global_262145.f_10209)
		{
			unk_0xBE20AB8238688965(&(Local_82.f_3), 2);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Local_82.f_243)
		{
			if (unk_0xF7DE07F319727299(Local_82.f_48[(20 + iVar1)]))
			{
				iVar7 = (20 + iVar1);
				if (!unk_0xA59F96B50B97E63C(unk_0x3C6C6327BA564AEE(Local_82.f_48[(20 + iVar1)]), 0))
				{
					unk_0xD2459066EA58CE43(&(Local_82.f_3), 2);
				}
				else if (unk_0xCE990E643CD9D0E5(Local_82.f_272[func_91(iVar7)], func_90(iVar7)))
				{
					if (!func_19(&(Local_82.f_414[(20 + iVar1) /*2*/]), 5000, 0))
					{
					}
					if (func_22(&(Local_82.f_364[iVar7 /*2*/])))
					{
						func_106(&(Local_82.f_364[iVar7 /*2*/]));
					}
					func_25(&(Local_82.f_48[(20 + iVar1)]));
					if (Local_82.f_85[(20 + iVar1)] > 0)
					{
						Local_82.f_254++;
						if (func_98() > 1)
						{
							if (Local_82.f_317 > 0)
							{
								Local_82.f_316++;
							}
						}
						func_89((20 + iVar1), func_104(1));
					}
					Local_82.f_85[(20 + iVar1)] = 0;
					if (unk_0xCE990E643CD9D0E5(Local_82.f_275[func_91(iVar7)], func_90(iVar7)))
					{
						unk_0xD2459066EA58CE43(&(Local_82.f_275[func_91(iVar7)]), func_90(iVar7));
					}
				}
				else
				{
					if (!unk_0xCE990E643CD9D0E5(Local_82.f_272[func_91(iVar7)], func_90(iVar7)))
					{
						if (!func_22(&(Local_82.f_364[iVar7 /*2*/])))
						{
							func_20(&(Local_82.f_364[iVar7 /*2*/]), 0, 0);
						}
						else if (func_19(&(Local_82.f_364[iVar7 /*2*/]), 7000, 0))
						{
							unk_0xBE20AB8238688965(&(Local_82.f_272[func_91(iVar7)]), func_90(iVar7));
							func_106(&(Local_82.f_364[iVar7 /*2*/]));
						}
					}
					if (!unk_0xCE990E643CD9D0E5(Local_82.f_275[func_91(iVar7)], func_90(iVar7)))
					{
						unk_0xBE20AB8238688965(&(Local_82.f_275[func_91(iVar7)]), func_90(iVar7));
					}
				}
			}
			if (Local_82.f_247 < func_72())
			{
				if (func_51(iVar1))
				{
				}
				unk_0xD2459066EA58CE43(&(Local_82.f_3), 2);
			}
			iVar1++;
		}
	}
	func_36();
}

void func_36()
{
	int iVar0;
	int iVar1;
	
	if (func_98() == 1)
	{
		return;
	}
	if (func_98() == 2)
	{
		if (Local_82.f_252 > 0)
		{
			if (Local_82.f_302 > 0)
			{
				if (Local_82.f_302 >= (Local_82.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							iVar0 = Local_82.f_279 + 1;
							if (iVar0 < 10)
							{
								iVar1 = Local_82.f_280[iVar0];
								if (iVar1 != 5)
								{
									func_47();
									Local_82.f_279++;
									func_40();
								}
								else if (Local_82.f_318 >= func_39())
								{
									func_47();
									Local_82.f_279++;
									func_40();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_98() == 3)
	{
		if (Local_82.f_317 > 0)
		{
			if (Local_82.f_316 > 0)
			{
				if (Local_82.f_316 >= Local_82.f_317)
				{
					if (Local_82.f_317 >= func_38())
					{
						func_47();
						Local_82.f_279++;
						func_40();
					}
				}
			}
		}
	}
	else if (func_98() == 4)
	{
		if (Local_82.f_316 > 0)
		{
			if (Local_82.f_302 > 0)
			{
				if (Local_82.f_317 > 0)
				{
					if (Local_82.f_316 >= (Local_82.f_317 - 2))
					{
						if (Local_82.f_252 > 0)
						{
							if (Local_82.f_302 >= (Local_82.f_252 - 2))
							{
								if (func_50() <= func_49())
								{
									if (func_48() <= func_37())
									{
										iVar0 = Local_82.f_279 + 1;
										if (iVar0 < 10)
										{
											iVar1 = Local_82.f_280[iVar0];
											if (iVar1 != 5)
											{
												func_47();
												Local_82.f_279++;
												func_40();
											}
											else if (Local_82.f_318 >= func_39())
											{
												func_47();
												Local_82.f_279++;
												func_40();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_98() == 5)
	{
		if (Local_82.f_252 > 0)
		{
			if (Local_82.f_302 > 0)
			{
				if (Local_82.f_302 >= (Local_82.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							func_47();
							Local_82.f_279++;
							func_40();
						}
					}
				}
			}
		}
	}
}

int func_37()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_82.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_82.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_98() == 4)
				{
					return 2;
				}
				else if (func_98() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_38()
{
	return Local_82.f_305[Local_82.f_279];
}

int func_39()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < Local_82.f_278)
	{
		iVar0 = (iVar0 + Local_82.f_305[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_40()
{
	int iVar0;
	
	if (Local_82.f_29 == -1)
	{
		iVar0 = func_46(Local_82.f_27);
		Local_82.f_29 = unk_0x344C570D6F8700DF(0, iVar0);
		if (func_748())
		{
			if (Local_82.f_27 == joaat("hydra"))
			{
				if (Local_82.f_29 == 2)
				{
					Local_82.f_29 = 4;
				}
			}
			else if (Local_82.f_27 == joaat("savage"))
			{
				if (Local_82.f_29 == 0)
				{
					Local_82.f_29 = 1;
				}
				else if (Local_82.f_29 == 1)
				{
					Local_82.f_29 = 2;
				}
				else if (Local_82.f_29 == 2)
				{
					Local_82.f_29 = 3;
				}
			}
			else if (Local_82.f_27 == joaat("valkyrie"))
			{
				if (Local_82.f_29 == 2)
				{
					Local_82.f_29 = 3;
				}
				else if (Local_82.f_29 == 3)
				{
					Local_82.f_29 = 4;
				}
			}
			else if (Local_82.f_27 == joaat("buzzard"))
			{
				if (Local_82.f_29 == 0)
				{
					Local_82.f_29 = 1;
				}
				else if (Local_82.f_29 == 1)
				{
					Local_82.f_29 = 2;
				}
				else if (Local_82.f_29 == 2)
				{
					Local_82.f_29 = 3;
				}
				else if (Local_82.f_29 == 3)
				{
					Local_82.f_29 = 4;
				}
			}
		}
		else if (Local_82.f_27 == joaat("savage"))
		{
			if (Local_82.f_29 == 0)
			{
				Local_82.f_29 = 1;
			}
			else if (Local_82.f_29 == 1)
			{
				Local_82.f_29 = 2;
			}
			else if (Local_82.f_29 == 2)
			{
				Local_82.f_29 = 3;
			}
		}
	}
	switch (Local_82.f_27)
	{
		case joaat("rhino"):
			Local_82.f_280[0] = 4;
			Local_82.f_291[0] = func_45(4);
			Local_82.f_305[0] = func_44(4);
			Local_82.f_280[1] = 4;
			Local_82.f_291[1] = func_45(4);
			Local_82.f_305[1] = func_44(4);
			Local_82.f_280[2] = 4;
			Local_82.f_291[2] = func_45(4);
			Local_82.f_305[2] = func_44(4);
			if (Local_82.f_12 <= 2 || !func_748())
			{
				Local_82.f_278 = 3;
			}
			else if (Local_82.f_12 == 3)
			{
				Local_82.f_280[3] = 4;
				Local_82.f_291[3] = func_45(4);
				Local_82.f_305[3] = func_44(4);
				Local_82.f_278 = 4;
			}
			else
			{
				Local_82.f_280[3] = 4;
				Local_82.f_291[3] = func_45(4);
				Local_82.f_305[3] = func_44(4);
				Local_82.f_280[4] = 4;
				Local_82.f_291[4] = func_45(4);
				Local_82.f_305[4] = func_44(4);
				Local_82.f_278 = 5;
			}
			Local_82.f_255 = func_41();
			if (!func_748())
			{
				Local_82.f_1 = 0;
			}
			else
			{
				Local_82.f_1 = 5;
			}
			Local_82.f_2 = Local_82.f_29;
			switch (Local_82.f_29)
			{
				case 0:
					Local_82.f_30[0 /*3*/] = { 1016.734f, 2360.83f, 50.4559f };
					Local_82.f_43[0] = 269.414f;
					Local_82.f_30[1 /*3*/] = { 1002.526f, 2390.64f, 50.5438f };
					Local_82.f_43[1] = 3.5491f;
					Local_82.f_30[2 /*3*/] = { 986.0139f, 2301.592f, 48.8235f };
					Local_82.f_43[2] = 54.4509f;
					Local_82.f_30[3 /*3*/] = { 977.1004f, 2371.714f, 51.0115f };
					Local_82.f_43[3] = 178.1948f;
					Local_82.f_159[0 /*3*/] = { 1028.325f, 2436.455f, 44.2365f };
					Local_82.f_175[0] = 270.8322f;
					Local_82.f_159[1 /*3*/] = { 1166.498f, 2403.021f, 56.662f };
					Local_82.f_175[1] = 177.3506f;
					Local_82.f_159[2 /*3*/] = { 892.8997f, 2465.881f, 49.7859f };
					Local_82.f_175[2] = 318.1089f;
					Local_82.f_159[3 /*3*/] = { 1078.988f, 2246.879f, 43.7942f };
					Local_82.f_175[3] = 272.0801f;
					Local_82.f_159[4 /*3*/] = { 1016.784f, 2259.447f, 43.8512f };
					Local_82.f_175[4] = 104.0591f;
					Local_82.f_117[0 /*3*/] = { 1042.504f, 2280.497f, 48.6315f };
					Local_82.f_148[0] = 296.4225f;
					Local_82.f_117[1 /*3*/] = { 991.9136f, 2278.353f, 48.1838f };
					Local_82.f_148[1] = 164.9695f;
					Local_82.f_117[2 /*3*/] = { 1029.763f, 2447.042f, 44.5979f };
					Local_82.f_148[2] = 136.0596f;
					Local_82.f_117[3 /*3*/] = { 971.0186f, 2422.765f, 50.6913f };
					Local_82.f_148[3] = 116.379f;
					Local_82.f_117[4 /*3*/] = { 1017.264f, 2432.009f, 45.2054f };
					Local_82.f_148[4] = 86.6586f;
					Local_82.f_117[5 /*3*/] = { 1072.751f, 2237.599f, 43.3802f };
					Local_82.f_148[5] = 74.6822f;
					Local_82.f_117[6 /*3*/] = { 944.4364f, 2407.392f, 50.0925f };
					Local_82.f_148[6] = 206.8863f;
					Local_82.f_117[7 /*3*/] = { 1059.804f, 2280.784f, 48.5613f };
					Local_82.f_148[7] = 267.8581f;
					Local_82.f_117[8 /*3*/] = { 1004.272f, 2372.344f, 54.5719f };
					Local_82.f_148[8] = 267.5856f;
					Local_82.f_117[9 /*3*/] = { 972.3055f, 2235.821f, 53.1094f };
					Local_82.f_148[9] = 325.0964f;
					break;
				
				case 1:
					Local_82.f_30[0 /*3*/] = { 1733.134f, 3302.545f, 40.2235f };
					Local_82.f_43[0] = 194.8062f;
					Local_82.f_30[1 /*3*/] = { 1761.281f, 3309.879f, 40.1489f };
					Local_82.f_43[1] = 238.9372f;
					Local_82.f_30[2 /*3*/] = { 1755.753f, 3236.49f, 41.0341f };
					Local_82.f_43[2] = 16.3071f;
					Local_82.f_30[3 /*3*/] = { 1676.76f, 3279.734f, 39.8901f };
					Local_82.f_43[3] = 209.9883f;
					Local_82.f_117[0 /*3*/] = { 1758.449f, 3309.247f, 40.1417f };
					Local_82.f_148[0] = 221.3913f;
					Local_82.f_117[1 /*3*/] = { 1746.445f, 3323.75f, 40.1528f };
					Local_82.f_148[1] = 246.3415f;
					Local_82.f_117[2 /*3*/] = { 1775.057f, 3332.943f, 40.3398f };
					Local_82.f_148[2] = 213.4087f;
					Local_82.f_117[3 /*3*/] = { 1713.24f, 3302.458f, 40.1851f };
					Local_82.f_148[3] = 100.5405f;
					Local_82.f_117[4 /*3*/] = { 1693.817f, 3293.163f, 40.1465f };
					Local_82.f_148[4] = 289.6017f;
					Local_82.f_117[5 /*3*/] = { 1697.449f, 3176.312f, 44.0261f };
					Local_82.f_148[5] = 285.6456f;
					Local_82.f_117[6 /*3*/] = { 1710.565f, 3180.909f, 43.2884f };
					Local_82.f_148[6] = 310.9245f;
					Local_82.f_117[7 /*3*/] = { 1627.436f, 3198.51f, 39.9059f };
					Local_82.f_148[7] = 46.7117f;
					Local_82.f_117[8 /*3*/] = { 1788.401f, 3208.964f, 43.0201f };
					Local_82.f_148[8] = 35.9192f;
					Local_82.f_117[9 /*3*/] = { 1698.308f, 3289.254f, 47.8594f };
					Local_82.f_148[9] = 207.53f;
					Local_82.f_159[0 /*3*/] = { 1669.932f, 3132.549f, 42.2874f };
					Local_82.f_175[0] = 286.6127f;
					Local_82.f_159[1 /*3*/] = { 1943.321f, 3263.146f, 44.7265f };
					Local_82.f_175[1] = 124.1428f;
					Local_82.f_159[2 /*3*/] = { 1151.224f, 3172.348f, 40.6704f };
					Local_82.f_175[2] = 275.0147f;
					Local_82.f_159[3 /*3*/] = { 1134.716f, 3169.23f, 40.6443f };
					Local_82.f_175[3] = 287.91f;
					Local_82.f_159[4 /*3*/] = { 1311.352f, 2963.962f, 40.0443f };
					Local_82.f_175[4] = 270.287f;
					break;
				
				case 2:
					Local_82.f_30[0 /*3*/] = { 2703.281f, 1576.7f, 23.527f };
					Local_82.f_43[0] = 172.439f;
					Local_82.f_30[1 /*3*/] = { 2702.781f, 1512.725f, 23.5199f };
					Local_82.f_43[1] = 53.9805f;
					Local_82.f_30[2 /*3*/] = { 2678.432f, 1518.734f, 23.5295f };
					Local_82.f_43[2] = 303.2142f;
					Local_82.f_30[3 /*3*/] = { 2677.509f, 1566.525f, 23.501f };
					Local_82.f_43[3] = 218.5974f;
					Local_82.f_117[0 /*3*/] = { 2621.796f, 1695.869f, 26.5983f };
					Local_82.f_148[0] = 264.5842f;
					Local_82.f_117[1 /*3*/] = { 2746.846f, 1567.683f, 23.501f };
					Local_82.f_148[1] = 133.7932f;
					Local_82.f_117[2 /*3*/] = { 2664.273f, 1599.201f, 23.7604f };
					Local_82.f_148[2] = 205.1215f;
					Local_82.f_117[3 /*3*/] = { 2757.255f, 1576.939f, 23.501f };
					Local_82.f_148[3] = 66.1065f;
					Local_82.f_117[4 /*3*/] = { 2714.176f, 1480.445f, 23.5007f };
					Local_82.f_148[4] = 7.8064f;
					Local_82.f_117[5 /*3*/] = { 2713.364f, 1450.272f, 23.6191f };
					Local_82.f_148[5] = 358.7563f;
					Local_82.f_117[6 /*3*/] = { 2739.862f, 1463.719f, 23.5015f };
					Local_82.f_148[6] = 142.1748f;
					Local_82.f_117[7 /*3*/] = { 2676.403f, 1589.224f, 26.2548f };
					Local_82.f_148[7] = 247.816f;
					Local_82.f_117[8 /*3*/] = { 2703.085f, 1685.568f, 23.4887f };
					Local_82.f_148[8] = 124.4666f;
					Local_82.f_117[9 /*3*/] = { 2665.022f, 1409.433f, 23.538f };
					Local_82.f_148[9] = 348.6588f;
					Local_82.f_159[0 /*3*/] = { 2737.115f, 1697.578f, 23.6755f };
					Local_82.f_175[0] = 89.8563f;
					Local_82.f_159[1 /*3*/] = { 2778.598f, 1458.218f, 23.5382f };
					Local_82.f_175[1] = 163.8004f;
					Local_82.f_159[2 /*3*/] = { 2529.779f, 1641.113f, 27.9752f };
					Local_82.f_175[2] = 270.0754f;
					Local_82.f_159[3 /*3*/] = { 2665.372f, 1702.379f, 23.4882f };
					Local_82.f_175[3] = 184.9752f;
					Local_82.f_159[4 /*3*/] = { 2726.623f, 1640.299f, 23.5607f };
					Local_82.f_175[4] = 90.4555f;
					break;
				
				case 3:
				case 4:
					Local_82.f_30[0 /*3*/] = { 1088.383f, -3024.919f, 4.901f };
					Local_82.f_43[0] = 0.5044f;
					Local_82.f_30[1 /*3*/] = { 1086.846f, -2975.534f, 4.9012f };
					Local_82.f_43[1] = 179.2507f;
					Local_82.f_30[2 /*3*/] = { 986.4979f, -3024.68f, 4.9008f };
					Local_82.f_43[2] = 0.3066f;
					Local_82.f_30[3 /*3*/] = { 986.1768f, -2972.394f, 4.9012f };
					Local_82.f_43[3] = 180.2973f;
					Local_82.f_117[0 /*3*/] = { 991.85f, -2969.792f, 4.9008f };
					Local_82.f_148[0] = 336.7541f;
					Local_82.f_117[1 /*3*/] = { 1178.155f, -3022.33f, 4.9021f };
					Local_82.f_148[1] = 6.0929f;
					Local_82.f_117[2 /*3*/] = { 1107.679f, -2983.992f, 4.901f };
					Local_82.f_148[2] = 4.2803f;
					Local_82.f_117[3 /*3*/] = { 1043.869f, -2979.597f, 4.901f };
					Local_82.f_148[3] = 274.985f;
					Local_82.f_117[4 /*3*/] = { 1042.952f, -3031.76f, 4.901f };
					Local_82.f_148[4] = 267.2555f;
					Local_82.f_117[5 /*3*/] = { 1095.349f, -3077.492f, 4.8877f };
					Local_82.f_148[5] = 6.5529f;
					Local_82.f_117[6 /*3*/] = { 1114.924f, -3031.319f, 4.901f };
					Local_82.f_148[6] = 89.1724f;
					Local_82.f_117[7 /*3*/] = { 1048.021f, -3077.814f, 4.901f };
					Local_82.f_148[7] = 348.279f;
					Local_82.f_117[8 /*3*/] = { 995.4651f, -3036.897f, 4.9008f };
					Local_82.f_148[8] = 267.8075f;
					Local_82.f_117[9 /*3*/] = { 1101.347f, -2968.894f, 13.3329f };
					Local_82.f_148[9] = 0.5237f;
					Local_82.f_159[0 /*3*/] = { 1254.191f, -3126.908f, 4.8012f };
					Local_82.f_175[0] = 357.9713f;
					Local_82.f_159[1 /*3*/] = { 856.4759f, -3118.969f, 4.9008f };
					Local_82.f_175[1] = 269.3234f;
					Local_82.f_159[2 /*3*/] = { 838.2247f, -3118.748f, 4.9008f };
					Local_82.f_175[2] = 269.3055f;
					Local_82.f_159[3 /*3*/] = { 1197.595f, -2983.872f, 4.9021f };
					Local_82.f_175[3] = 359.1497f;
					Local_82.f_159[4 /*3*/] = { 962.6804f, -3016.159f, 4.9017f };
					Local_82.f_175[4] = 270.0873f;
					break;
			}
			break;
		
		case joaat("savage"):
			Local_82.f_240 = joaat("insurgent");
			Local_82.f_280[0] = 2;
			Local_82.f_291[0] = func_45(2);
			Local_82.f_280[1] = 4;
			Local_82.f_291[1] = func_45(4);
			Local_82.f_305[1] = func_44(4);
			Local_82.f_280[2] = 2;
			Local_82.f_291[2] = func_45(2);
			if (Local_82.f_12 <= 2 || !func_748())
			{
				Local_82.f_280[3] = 5;
				Local_82.f_291[3] = func_45(5);
				Local_82.f_278 = 4;
			}
			else if (Local_82.f_12 == 3)
			{
				Local_82.f_280[3] = 4;
				Local_82.f_291[3] = func_45(4);
				Local_82.f_305[3] = func_44(4);
				Local_82.f_280[4] = 2;
				Local_82.f_291[4] = func_45(2);
				Local_82.f_280[5] = 5;
				Local_82.f_291[5] = func_45(5);
				Local_82.f_278 = 6;
			}
			else
			{
				Local_82.f_280[3] = 4;
				Local_82.f_291[3] = func_45(4);
				Local_82.f_305[3] = func_44(4);
				Local_82.f_280[4] = 2;
				Local_82.f_291[4] = func_45(2);
				Local_82.f_280[5] = 4;
				Local_82.f_291[5] = func_45(4);
				Local_82.f_305[5] = func_44(4);
				Local_82.f_280[6] = 5;
				Local_82.f_291[6] = func_45(5);
				Local_82.f_278 = 7;
			}
			Local_82.f_255 = func_41();
			if (!func_748())
			{
				Local_82.f_1 = 2;
			}
			else
			{
				Local_82.f_1 = 7;
			}
			Local_82.f_2 = Local_82.f_29;
			switch (Local_82.f_29)
			{
				case 0:
					Local_82.f_30[0 /*3*/] = { -1177.65f, -2845.542f, 12.9458f };
					Local_82.f_43[0] = 331.74f;
					Local_82.f_30[1 /*3*/] = { -1082.479f, -2900.191f, 12.9478f };
					Local_82.f_43[1] = 327.7335f;
					Local_82.f_30[2 /*3*/] = { -1202.019f, -2873.67f, 12.9454f };
					Local_82.f_43[2] = 149.1604f;
					Local_82.f_30[3 /*3*/] = { -1126.58f, -2918.416f, 12.9454f };
					Local_82.f_43[3] = 150.6753f;
					Local_82.f_117[0 /*3*/] = { -985.8373f, -2942.973f, 12.9451f };
					Local_82.f_148[0] = 147.2177f;
					Local_82.f_117[1 /*3*/] = { -1051.412f, -2880.828f, 29.3631f };
					Local_82.f_148[1] = 103.9461f;
					Local_82.f_117[2 /*3*/] = { -1154.54f, -2821.091f, 29.3631f };
					Local_82.f_148[2] = 160.822f;
					Local_82.f_117[3 /*3*/] = { -1211.898f, -2789.125f, 12.9523f };
					Local_82.f_148[3] = 205.8375f;
					Local_82.f_117[4 /*3*/] = { -1199.493f, -2724.709f, 12.9771f };
					Local_82.f_148[4] = 124.7328f;
					break;
				
				case 1:
					Local_82.f_30[0 /*3*/] = { 1930.067f, 4710.339f, 40.1633f };
					Local_82.f_43[0] = 344.2504f;
					Local_82.f_30[1 /*3*/] = { 1954.56f, 4724.181f, 40.0604f };
					Local_82.f_43[1] = 340.3425f;
					Local_82.f_30[2 /*3*/] = { 2004.913f, 4748.04f, 40.0604f };
					Local_82.f_43[2] = 351.5693f;
					Local_82.f_30[3 /*3*/] = { 2027.928f, 4757.387f, 40.0595f };
					Local_82.f_43[3] = 354.2446f;
					Local_82.f_117[0 /*3*/] = { 1954.209f, 4653.232f, 39.7136f };
					Local_82.f_148[0] = 245.2865f;
					Local_82.f_117[1 /*3*/] = { 2116.177f, 4761.993f, 40.2281f };
					Local_82.f_148[1] = 74.1185f;
					Local_82.f_117[2 /*3*/] = { 2123.414f, 4784.407f, 39.9703f };
					Local_82.f_148[2] = 10.2312f;
					Local_82.f_117[3 /*3*/] = { 1925.159f, 4817.925f, 43.9706f };
					Local_82.f_148[3] = 222.4017f;
					Local_82.f_117[4 /*3*/] = { 2009.58f, 4802.505f, 41.009f };
					Local_82.f_148[4] = 150.2763f;
					Local_82.f_117[5 /*3*/] = { 2133.472f, 4834.528f, 40.347f };
					Local_82.f_148[5] = 105.4526f;
					Local_82.f_117[6 /*3*/] = { 2139.058f, 4792.084f, 39.9703f };
					Local_82.f_148[6] = 88.9429f;
					Local_82.f_117[7 /*3*/] = { 2014.276f, 4721.062f, 40.6111f };
					Local_82.f_148[7] = 51.1733f;
					Local_82.f_117[8 /*3*/] = { 2060.417f, 4847.691f, 40.8344f };
					Local_82.f_148[8] = 169.7083f;
					Local_82.f_117[9 /*3*/] = { 2151.434f, 4789.446f, 39.9594f };
					Local_82.f_148[9] = 29.5849f;
					Local_82.f_243 = 3;
					break;
				
				case 2:
					if (!func_748())
					{
						Local_82.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_82.f_43[0] = 319.153f;
					}
					else
					{
						Local_82.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_82.f_43[0] = 319.153f;
						Local_82.f_30[1 /*3*/] = { 218.7712f, 7018.654f, 1.0042f };
						Local_82.f_43[1] = 316.7079f;
						Local_82.f_30[2 /*3*/] = { 230.1561f, 7001.589f, 1.2508f };
						Local_82.f_43[2] = 316.9623f;
						Local_82.f_30[3 /*3*/] = { 242.3287f, 6987.263f, 1.7354f };
						Local_82.f_43[3] = 314.2003f;
					}
					Local_82.f_117[0 /*3*/] = { 131.5444f, 6956.887f, 12.1839f };
					Local_82.f_148[0] = 326.4292f;
					Local_82.f_117[1 /*3*/] = { 201.7152f, 6842.864f, 21.2216f };
					Local_82.f_148[1] = 6.8118f;
					Local_82.f_117[2 /*3*/] = { 66.3015f, 6924.146f, 12.2944f };
					Local_82.f_148[2] = 32.8776f;
					Local_82.f_117[3 /*3*/] = { 42.4962f, 7055.19f, 1.3986f };
					Local_82.f_148[3] = 8.387f;
					Local_82.f_117[4 /*3*/] = { 146.7828f, 6849.039f, 17.571f };
					Local_82.f_148[4] = 291.5504f;
					Local_82.f_117[5 /*3*/] = { 290.266f, 6946.917f, 3.1171f };
					Local_82.f_148[5] = 333.1838f;
					Local_82.f_117[6 /*3*/] = { 50.5669f, 7102.213f, 2.0034f };
					Local_82.f_148[6] = 203.8353f;
					Local_82.f_117[7 /*3*/] = { 274.1516f, 6856.506f, 15.8452f };
					Local_82.f_148[7] = 32.2329f;
					Local_82.f_117[8 /*3*/] = { 88.9963f, 7113.472f, 24.5763f };
					Local_82.f_148[8] = 195.4847f;
					Local_82.f_117[9 /*3*/] = { 131.6119f, 6956.082f, 12.2413f };
					Local_82.f_148[9] = 327.4941f;
					Local_82.f_243 = 4;
					break;
				
				case 3:
					if (!func_748())
					{
						Local_82.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_82.f_43[0] = 156.0209f;
					}
					else
					{
						Local_82.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_82.f_43[0] = 156.0209f;
						Local_82.f_30[1 /*3*/] = { 699.7866f, -1637.337f, 8.7086f };
						Local_82.f_43[1] = 41.8571f;
						Local_82.f_30[2 /*3*/] = { 663.725f, -1634.052f, 8.7086f };
						Local_82.f_43[2] = 305.7411f;
						Local_82.f_30[3 /*3*/] = { 662.7472f, -1596.468f, 8.7086f };
						Local_82.f_43[3] = 223.2489f;
					}
					if (func_98() == 2 || func_98() == 5)
					{
						Local_82.f_242 = 3;
					}
					else
					{
						Local_82.f_242 = 4;
					}
					Local_82.f_117[0 /*3*/] = { 585.7374f, -1450.264f, 19.043f };
					Local_82.f_148[0] = 197.3456f;
					Local_82.f_117[1 /*3*/] = { 784.6684f, -1526.172f, 9.5498f };
					Local_82.f_148[1] = 140.7211f;
					Local_82.f_117[2 /*3*/] = { 790.8864f, -1603.665f, 30.2421f };
					Local_82.f_148[2] = 98.9528f;
					Local_82.f_117[3 /*3*/] = { 782.042f, -1487.963f, 19.2726f };
					Local_82.f_148[3] = 107.0238f;
					Local_82.f_117[4 /*3*/] = { 698.9001f, -1443.555f, 21.3382f };
					Local_82.f_148[4] = 202.129f;
					Local_82.f_117[5 /*3*/] = { 566.2017f, -1506.386f, 27.1027f };
					Local_82.f_148[5] = 230.1207f;
					Local_82.f_117[6 /*3*/] = { 752.1943f, -1491.94f, 19.4421f };
					Local_82.f_148[6] = 36.194f;
					Local_82.f_117[7 /*3*/] = { 702.7894f, -1452.929f, 30.3215f };
					Local_82.f_148[7] = 48.2522f;
					Local_82.f_117[8 /*3*/] = { 592.6577f, -1452.304f, 28.8626f };
					Local_82.f_148[8] = 296.114f;
					Local_82.f_117[9 /*3*/] = { 794.9213f, -1660.62f, 43.147f };
					Local_82.f_148[9] = 3.1632f;
					break;
			}
			break;
		
		case joaat("hydra"):
			Local_82.f_240 = joaat("lazer");
			Local_82.f_280[0] = 2;
			Local_82.f_291[0] = func_45(2);
			Local_82.f_280[1] = 2;
			Local_82.f_291[1] = func_45(2);
			Local_82.f_280[2] = 2;
			Local_82.f_291[2] = func_45(2);
			if (Local_82.f_12 <= 2 || !func_748())
			{
				Local_82.f_278 = 3;
			}
			else if (Local_82.f_12 == 3)
			{
				Local_82.f_280[3] = 2;
				Local_82.f_291[3] = func_45(2);
				Local_82.f_280[4] = 2;
				Local_82.f_291[4] = func_45(2);
				Local_82.f_278 = 5;
			}
			else
			{
				Local_82.f_280[3] = 2;
				Local_82.f_291[3] = func_45(2);
				Local_82.f_280[4] = 2;
				Local_82.f_291[4] = func_45(2);
				Local_82.f_280[5] = 2;
				Local_82.f_291[5] = func_45(2);
				Local_82.f_278 = 6;
			}
			Local_82.f_255 = func_41();
			if (!func_748())
			{
				Local_82.f_1 = 1;
			}
			else
			{
				Local_82.f_1 = 6;
			}
			Local_82.f_2 = Local_82.f_29;
			switch (Local_82.f_29)
			{
				case 0:
					if (!func_748())
					{
						Local_82.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_82.f_43[0] = 197.4435f;
					}
					else
					{
						Local_82.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_82.f_43[0] = 197.4435f;
						Local_82.f_30[1 /*3*/] = { 132.5468f, -2805.181f, 5.0002f };
						Local_82.f_43[1] = 197.1133f;
						Local_82.f_30[2 /*3*/] = { 123.1125f, -2823.665f, 5.0002f };
						Local_82.f_43[2] = 272.2065f;
						Local_82.f_30[3 /*3*/] = { 163.5494f, -2795.92f, 5.0002f };
						Local_82.f_43[3] = 142.941f;
					}
					Local_82.f_159[0 /*3*/] = { 887.9951f, -3884.45f, 54.3252f };
					Local_82.f_175[0] = 34.149f;
					Local_82.f_159[1 /*3*/] = { -255.1527f, -4101.981f, 100.1964f };
					Local_82.f_175[1] = -26.0182f;
					Local_82.f_159[2 /*3*/] = { 1271.189f, -3196.243f, 104.9035f };
					Local_82.f_175[2] = 88.3998f;
					Local_82.f_159[3 /*3*/] = { -879.6379f, -2210.024f, 245.712f };
					Local_82.f_175[3] = -141.7949f;
					Local_82.f_228[0] = 10000;
					Local_82.f_228[1] = 10000;
					Local_82.f_228[2] = 10000;
					Local_82.f_228[3] = 10000;
					Local_82.f_117[0 /*3*/] = { 546.2563f, -3289.316f, 17.714f };
					Local_82.f_148[0] = 143.4012f;
					Local_82.f_117[1 /*3*/] = { 596.183f, -3288.174f, 17.714f };
					Local_82.f_148[1] = 212.1136f;
					Local_82.f_117[2 /*3*/] = { 500.3511f, -3338.894f, 23.591f };
					Local_82.f_148[2] = 95.8248f;
					Local_82.f_117[3 /*3*/] = { 480.8767f, -3238.414f, 5.0696f };
					Local_82.f_148[3] = 113.3084f;
					Local_82.f_117[4 /*3*/] = { 444.4339f, -3187.956f, 5.0703f };
					Local_82.f_148[4] = 260.1329f;
					Local_82.f_242 = 4;
					break;
				
				case 1:
					if (!func_748())
					{
						Local_82.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_82.f_43[0] = 131.0993f;
					}
					else
					{
						Local_82.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_82.f_43[0] = 131.0993f;
						Local_82.f_30[1 /*3*/] = { -1734.978f, -796.148f, 8.3998f };
						Local_82.f_43[1] = 127.8408f;
						Local_82.f_30[2 /*3*/] = { -1762.095f, -758.1465f, 8.6368f };
						Local_82.f_43[2] = 131.1571f;
						Local_82.f_30[3 /*3*/] = { -1792.501f, -751.6967f, 8.1782f };
						Local_82.f_43[3] = 132.943f;
					}
					Local_82.f_159[0 /*3*/] = { -1876.497f, -665.6128f, 109.1172f };
					Local_82.f_175[0] = 316.9068f;
					Local_82.f_159[1 /*3*/] = { -1099.297f, 20.5145f, 150.0107f };
					Local_82.f_175[1] = 142.3075f;
					Local_82.f_159[2 /*3*/] = { -803.6566f, -866.03f, 137.4505f };
					Local_82.f_175[2] = 93.1231f;
					Local_82.f_159[3 /*3*/] = { -1697.535f, -1306.955f, 127.8882f };
					Local_82.f_175[3] = -9.0334f;
					Local_82.f_228[0] = 10000;
					Local_82.f_228[1] = 10000;
					Local_82.f_228[2] = 10000;
					Local_82.f_228[3] = 10000;
					Local_82.f_117[0 /*3*/] = { -1468.446f, -546.457f, 84.073f };
					Local_82.f_148[0] = 236.3566f;
					Local_82.f_117[1 /*3*/] = { -1288.024f, -439.2769f, 102.47f };
					Local_82.f_148[1] = 212.7533f;
					Local_82.f_117[2 /*3*/] = { -1556.831f, -589.7376f, 32.9884f };
					Local_82.f_148[2] = 299.3619f;
					Local_82.f_117[3 /*3*/] = { -1353.281f, -514.1478f, 22.2694f };
					Local_82.f_148[3] = 115.7556f;
					Local_82.f_117[4 /*3*/] = { -1314.693f, -570.6011f, 28.3023f };
					Local_82.f_148[4] = 191.3862f;
					Local_82.f_242 = 4;
					break;
				
				case 2:
					Local_82.f_30[0 /*3*/] = { 737.7632f, 1292.348f, 359.296f };
					Local_82.f_43[0] = 176.244f;
					Local_82.f_159[0 /*3*/] = { 737.1152f, 1296.363f, 459.296f };
					Local_82.f_175[0] = 93.8354f;
					Local_82.f_159[1 /*3*/] = { -425.5261f, 1185.381f, 324.6416f };
					Local_82.f_175[1] = 250.5173f;
					Local_82.f_159[2 /*3*/] = { 1157.617f, 116.7023f, 180.3293f };
					Local_82.f_175[2] = 337.8961f;
					Local_82.f_159[3 /*3*/] = { 1604.747f, 2094.859f, 184.1727f };
					Local_82.f_175[3] = 142.1369f;
					Local_82.f_228[0] = 10000;
					Local_82.f_228[1] = 10000;
					Local_82.f_228[2] = 10000;
					Local_82.f_228[3] = 10000;
					Local_82.f_117[0 /*3*/] = { 662.439f, 1284.189f, 359.296f };
					Local_82.f_148[0] = 208.2624f;
					Local_82.f_117[1 /*3*/] = { 782.1017f, 1279.344f, 359.2967f };
					Local_82.f_148[1] = 349.048f;
					Local_82.f_117[2 /*3*/] = { 769.1426f, 1300.744f, 359.2967f };
					Local_82.f_148[2] = 69.8162f;
					Local_82.f_117[3 /*3*/] = { 750.6609f, 1209.155f, 326.5541f };
					Local_82.f_148[3] = 286.6181f;
					Local_82.f_242 = 4;
					Local_82.f_243 = 4;
					break;
				
				case 3:
					Local_82.f_30[0 /*3*/] = { 2521.121f, -471.1436f, 91.9971f };
					Local_82.f_43[0] = 292.0822f;
					Local_82.f_30[1 /*3*/] = { 2510.273f, -473.5832f, 91.9929f };
					Local_82.f_43[1] = 43.3907f;
					Local_82.f_30[2 /*3*/] = { 2481.39f, -320.2297f, 91.9927f };
					Local_82.f_43[2] = 124.2279f;
					Local_82.f_30[3 /*3*/] = { 2560.314f, -438.3987f, 91.9926f };
					Local_82.f_43[3] = 129.3366f;
					Local_82.f_159[0 /*3*/] = { 2870.504f, 368.2049f, 101.6602f };
					Local_82.f_175[0] = 137.5025f;
					Local_82.f_159[1 /*3*/] = { 1859.596f, 272.0942f, 162.159f };
					Local_82.f_175[1] = 227.9336f;
					Local_82.f_159[2 /*3*/] = { 2666.033f, -931.6996f, 100.6606f };
					Local_82.f_175[2] = 6.0299f;
					Local_82.f_159[3 /*3*/] = { 1336.474f, -345.6518f, 424.9653f };
					Local_82.f_175[3] = -87.5596f;
					Local_82.f_228[0] = 10000;
					Local_82.f_228[1] = 10000;
					Local_82.f_228[2] = 10000;
					Local_82.f_228[3] = 10000;
					Local_82.f_242 = 4;
					Local_82.f_117[0 /*3*/] = { 2528.376f, -424.9132f, 113.09f };
					Local_82.f_148[0] = 338.8487f;
					Local_82.f_117[1 /*3*/] = { 2473.828f, -384.0913f, 108.6521f };
					Local_82.f_148[1] = 272.5443f;
					Local_82.f_117[2 /*3*/] = { 2535.322f, -335.4323f, 113.0844f };
					Local_82.f_148[2] = 223.0158f;
					Local_82.f_117[3 /*3*/] = { 2478.752f, -416.0706f, 92.7351f };
					Local_82.f_148[3] = 355.6682f;
					Local_82.f_117[4 /*3*/] = { 2482.176f, -353.0269f, 92.7351f };
					Local_82.f_148[4] = 179.3658f;
					break;
				
				case 4:
					if (!func_748())
					{
						Local_82.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_82.f_43[0] = 331.7771f;
					}
					else
					{
						Local_82.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_82.f_43[0] = 331.7771f;
						Local_82.f_30[1 /*3*/] = { -1841.38f, -3156.666f, 12.9444f };
						Local_82.f_43[1] = 324.1843f;
						Local_82.f_30[2 /*3*/] = { -1860.858f, -3143.922f, 12.9444f };
						Local_82.f_43[2] = 330.0586f;
						Local_82.f_30[3 /*3*/] = { -1885.131f, -3129.948f, 12.9444f };
						Local_82.f_43[3] = 329.5413f;
					}
					Local_82.f_159[0 /*3*/] = { -1185.202f, -2364.726f, 112.9452f };
					Local_82.f_175[0] = 146.9594f;
					Local_82.f_159[1 /*3*/] = { -382.1712f, -2495.05f, 105.0008f };
					Local_82.f_175[1] = 137.6555f;
					Local_82.f_159[2 /*3*/] = { -412.0741f, -2847.307f, 105.0004f };
					Local_82.f_175[2] = 114.7478f;
					Local_82.f_159[3 /*3*/] = { -2538.447f, -3165.758f, 133.9589f };
					Local_82.f_175[3] = -84.6269f;
					Local_82.f_228[0] = 10000;
					Local_82.f_228[1] = 10000;
					Local_82.f_228[2] = 10000;
					Local_82.f_228[3] = 10000;
					Local_82.f_242 = 4;
					Local_82.f_117[0 /*3*/] = { -1051.566f, -2880.667f, 29.3631f };
					Local_82.f_148[0] = 153.0449f;
					Local_82.f_117[1 /*3*/] = { -1154.167f, -2821.089f, 29.3631f };
					Local_82.f_148[1] = 153.1271f;
					Local_82.f_117[2 /*3*/] = { -1441.866f, -3280.676f, 12.9449f };
					Local_82.f_148[2] = 331.3771f;
					Local_82.f_117[3 /*3*/] = { -1209.32f, -2789.023f, 12.9523f };
					Local_82.f_148[3] = 183.2579f;
					Local_82.f_117[4 /*3*/] = { -1239.188f, -2688.943f, 12.9449f };
					Local_82.f_148[4] = 149.3518f;
					break;
				
				case 5:
					Local_82.f_30[0 /*3*/] = { -144.0471f, -593.1377f, 210.7752f };
					Local_82.f_43[0] = 184.7817f;
					Local_82.f_159[0 /*3*/] = { 449.0346f, -981.1837f, 142.6917f };
					Local_82.f_175[0] = 91.7761f;
					Local_82.f_159[1 /*3*/] = { -665.604f, -932.722f, 145.3242f };
					Local_82.f_175[1] = 269.7376f;
					Local_82.f_159[2 /*3*/] = { -686.7255f, 217.4708f, 136.5301f };
					Local_82.f_175[1] = 211.4614f;
					Local_82.f_159[3 /*3*/] = { 314.4621f, -130.8896f, 222.2372f };
					Local_82.f_175[3] = 148.9204f;
					Local_82.f_228[0] = 10000;
					Local_82.f_228[1] = 10000;
					Local_82.f_228[2] = 10000;
					Local_82.f_228[3] = 10000;
					Local_82.f_242 = 4;
					Local_82.f_117[0 /*3*/] = { -159.1301f, -600.2693f, 200.7354f };
					Local_82.f_148[0] = 113.298f;
					Local_82.f_117[1 /*3*/] = { -145.0832f, -578.3243f, 200.7354f };
					Local_82.f_148[1] = 353.0292f;
					Local_82.f_117[2 /*3*/] = { -135.3186f, -606.2405f, 200.7354f };
					Local_82.f_148[2] = 216.1793f;
					Local_82.f_117[3 /*3*/] = { -208.5985f, -725.582f, 219.5222f };
					Local_82.f_148[3] = 347.4008f;
					Local_82.f_243 = 4;
					break;
			}
			break;
		
		case joaat("valkyrie"):
			Local_82.f_240 = joaat("buzzard");
			Local_82.f_280[0] = 2;
			Local_82.f_291[0] = func_45(2);
			Local_82.f_305[0] = func_44(4);
			Local_82.f_280[1] = 4;
			Local_82.f_291[1] = func_45(4);
			Local_82.f_305[1] = func_44(4);
			Local_82.f_280[2] = 2;
			Local_82.f_291[2] = func_45(2);
			Local_82.f_305[2] = func_44(4);
			if (Local_82.f_12 <= 2 || !func_748())
			{
				Local_82.f_280[3] = 5;
				Local_82.f_291[3] = func_45(5);
				Local_82.f_278 = 4;
			}
			else if (Local_82.f_12 == 3)
			{
				Local_82.f_280[3] = 4;
				Local_82.f_291[3] = func_45(4);
				Local_82.f_305[3] = func_44(4);
				Local_82.f_280[4] = 2;
				Local_82.f_291[4] = func_45(2);
				Local_82.f_280[5] = 5;
				Local_82.f_291[5] = func_45(5);
				Local_82.f_278 = 6;
			}
			else
			{
				Local_82.f_280[3] = 4;
				Local_82.f_291[3] = func_45(4);
				Local_82.f_305[3] = func_44(4);
				Local_82.f_280[4] = 2;
				Local_82.f_291[4] = func_45(2);
				Local_82.f_280[5] = 4;
				Local_82.f_291[5] = func_45(4);
				Local_82.f_305[5] = func_44(4);
				Local_82.f_280[6] = 5;
				Local_82.f_291[6] = func_45(5);
				Local_82.f_278 = 7;
			}
			Local_82.f_255 = func_41();
			if (!func_748())
			{
				Local_82.f_1 = 3;
			}
			else
			{
				Local_82.f_1 = 8;
			}
			Local_82.f_2 = Local_82.f_29;
			switch (Local_82.f_29)
			{
				case 0:
					if (!func_748())
					{
						Local_82.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_82.f_43[0] = 290.0732f;
					}
					else
					{
						Local_82.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_82.f_43[0] = 290.0732f;
						Local_82.f_30[1 /*3*/] = { -754.8721f, -1442.684f, 4.0005f };
						Local_82.f_43[1] = 231.5867f;
						Local_82.f_30[2 /*3*/] = { -712.4144f, -1459.331f, 4.0005f };
						Local_82.f_43[2] = 49.6234f;
						Local_82.f_30[3 /*3*/] = { -729.9052f, -1418.734f, 4.0005f };
						Local_82.f_43[3] = 229.3317f;
					}
					Local_82.f_117[0 /*3*/] = { -692.5144f, -1384.774f, 4.1503f };
					Local_82.f_148[0] = 230.0049f;
					Local_82.f_117[1 /*3*/] = { -724.5416f, -1374.024f, 0.6002f };
					Local_82.f_148[1] = 147.9421f;
					Local_82.f_117[2 /*3*/] = { -763.0113f, -1531.637f, 4.4284f };
					Local_82.f_148[2] = 22.3204f;
					Local_82.f_117[3 /*3*/] = { -622.6572f, -1346.997f, 10.7793f };
					Local_82.f_148[3] = 80.7676f;
					Local_82.f_117[4 /*3*/] = { -650.5557f, -1313.337f, 9.8688f };
					Local_82.f_148[4] = 162.0507f;
					Local_82.f_117[5 /*3*/] = { -687.8698f, -1314.519f, 4.1019f };
					Local_82.f_148[5] = 225.9002f;
					Local_82.f_117[6 /*3*/] = { -719.8957f, -1300.4f, 4.1019f };
					Local_82.f_148[6] = 140.0515f;
					Local_82.f_117[7 /*3*/] = { -661.9195f, -1213.277f, 9.7043f };
					Local_82.f_148[7] = 90.6966f;
					Local_82.f_117[8 /*3*/] = { -758.4667f, -1332.722f, 8.6f };
					Local_82.f_148[8] = 226.042f;
					Local_82.f_117[9 /*3*/] = { -597.2482f, -1415.324f, 11.0923f };
					Local_82.f_148[9] = 79.7294f;
					Local_82.f_243 = 4;
					break;
				
				case 1:
					Local_82.f_30[0 /*3*/] = { 307.4523f, 2835.238f, 42.4361f };
					Local_82.f_43[0] = 122.9714f;
					Local_82.f_30[1 /*3*/] = { 358.6979f, 2863.14f, 42.0979f };
					Local_82.f_43[1] = 118.6931f;
					Local_82.f_30[2 /*3*/] = { 356.6689f, 2806.741f, 52.9669f };
					Local_82.f_43[2] = 26.5272f;
					Local_82.f_30[3 /*3*/] = { 310.0119f, 2875.712f, 42.5068f };
					Local_82.f_43[3] = 211.0638f;
					Local_82.f_117[0 /*3*/] = { 346.145f, 2861.565f, 42.4603f };
					Local_82.f_148[0] = 203.4084f;
					Local_82.f_117[1 /*3*/] = { 264.2803f, 2872.275f, 42.6105f };
					Local_82.f_148[1] = 123.7895f;
					Local_82.f_117[2 /*3*/] = { 290.4762f, 2853.89f, 42.6424f };
					Local_82.f_148[2] = 115.9053f;
					Local_82.f_117[3 /*3*/] = { 290.606f, 2810.906f, 47.9461f };
					Local_82.f_148[3] = 330.5807f;
					Local_82.f_117[4 /*3*/] = { 341.4013f, 2863.181f, 42.4361f };
					Local_82.f_148[4] = 116.311f;
					Local_82.f_117[5 /*3*/] = { 254.767f, 2880.256f, 42.5168f };
					Local_82.f_148[5] = 145.855f;
					Local_82.f_117[6 /*3*/] = { 301.125f, 2814.328f, 42.4361f };
					Local_82.f_148[6] = 41.353f;
					Local_82.f_117[7 /*3*/] = { 306.254f, 2865.798f, 42.5755f };
					Local_82.f_148[7] = 266.0158f;
					Local_82.f_117[8 /*3*/] = { 195.36f, 2808.636f, 44.3806f };
					Local_82.f_148[8] = 290.3963f;
					Local_82.f_117[9 /*3*/] = { 269.1239f, 2866.509f, 73.1797f };
					Local_82.f_148[9] = 243.2495f;
					Local_82.f_243 = 4;
					break;
				
				case 2:
					Local_82.f_30[0 /*3*/] = { 714.882f, 4175.296f, 39.7092f };
					Local_82.f_43[0] = 280.2862f;
					Local_82.f_30[1 /*3*/] = { 765.1945f, 4182.796f, 39.7152f };
					Local_82.f_43[1] = 32.9157f;
					Local_82.f_30[2 /*3*/] = { 750.664f, 4238.85f, 54.7686f };
					Local_82.f_43[2] = 106.2954f;
					Local_82.f_30[3 /*3*/] = { 569.2263f, 4178.386f, 37.2124f };
					Local_82.f_43[3] = 272.3807f;
					Local_82.f_117[0 /*3*/] = { 724.4003f, 4198.888f, 39.7092f };
					Local_82.f_148[0] = 254.5411f;
					Local_82.f_117[1 /*3*/] = { 792.2949f, 4184.186f, 39.5336f };
					Local_82.f_148[1] = 183.227f;
					Local_82.f_117[2 /*3*/] = { 754.1003f, 4181.829f, 39.7131f };
					Local_82.f_148[2] = 338.6039f;
					Local_82.f_117[3 /*3*/] = { 849.6327f, 4224.779f, 49.5859f };
					Local_82.f_148[3] = 71.8258f;
					Local_82.f_117[4 /*3*/] = { 856.303f, 4257.466f, 49.48f };
					Local_82.f_148[4] = 179.6626f;
					Local_82.f_117[5 /*3*/] = { 611.6555f, 4222.132f, 52.4756f };
					Local_82.f_148[5] = 272.7491f;
					Local_82.f_117[6 /*3*/] = { 643.0641f, 4213.754f, 52.6579f };
					Local_82.f_148[6] = 270.8252f;
					Local_82.f_117[7 /*3*/] = { 665.9061f, 4263.513f, 53.7219f };
					Local_82.f_148[7] = 180.4937f;
					Local_82.f_117[8 /*3*/] = { 876.0669f, 4247.905f, 48.9739f };
					Local_82.f_148[8] = 107.4297f;
					Local_82.f_117[9 /*3*/] = { 509.1728f, 4239.358f, 54.4925f };
					Local_82.f_148[9] = 247.5728f;
					break;
				
				case 3:
					Local_82.f_30[0 /*3*/] = { 3279.497f, 5204.456f, 17.3168f };
					Local_82.f_43[0] = 117.7311f;
					Local_82.f_30[1 /*3*/] = { 3280.456f, 5166.343f, 17.9564f };
					Local_82.f_43[1] = 46.3958f;
					Local_82.f_30[2 /*3*/] = { 3258.509f, 5225.87f, 17.2293f };
					Local_82.f_43[2] = 189.2091f;
					Local_82.f_30[3 /*3*/] = { 3302.896f, 5136.244f, 17.3101f };
					Local_82.f_43[3] = 50.0778f;
					Local_82.f_117[0 /*3*/] = { 3318.215f, 5186.109f, 17.4503f };
					Local_82.f_148[0] = 229.5714f;
					Local_82.f_117[1 /*3*/] = { 3309.254f, 5167.526f, 17.4491f };
					Local_82.f_148[1] = 136.4963f;
					Local_82.f_117[2 /*3*/] = { 3372.606f, 5183.914f, 0.4652f };
					Local_82.f_148[2] = 88.3908f;
					Local_82.f_117[3 /*3*/] = { 3222.684f, 5187.734f, 30.0174f };
					Local_82.f_148[3] = 271.8922f;
					Local_82.f_117[4 /*3*/] = { 3217.351f, 5145.03f, 18.4178f };
					Local_82.f_148[4] = 316.4374f;
					Local_82.f_117[5 /*3*/] = { 3155.562f, 5285.246f, 28.0707f };
					Local_82.f_148[5] = 246.1521f;
					Local_82.f_117[6 /*3*/] = { 3311.935f, 5176.247f, 18.6196f };
					Local_82.f_148[6] = 198.8985f;
					Local_82.f_117[7 /*3*/] = { 3230.142f, 5200.801f, 22.8278f };
					Local_82.f_148[7] = 257.2332f;
					Local_82.f_117[8 /*3*/] = { 3420.069f, 5169.133f, 4.8574f };
					Local_82.f_148[8] = 104.7808f;
					Local_82.f_117[9 /*3*/] = { 3242.868f, 5035.166f, 20.011f };
					Local_82.f_148[9] = 339.2293f;
					break;
				
				case 4:
					Local_82.f_30[0 /*3*/] = { -1736.989f, 162.0228f, 63.371f };
					Local_82.f_43[0] = 306.7662f;
					Local_82.f_30[1 /*3*/] = { -1736.938f, 137.1991f, 63.371f };
					Local_82.f_43[1] = 303.3918f;
					Local_82.f_30[2 /*3*/] = { -1756.272f, 172.5584f, 63.3711f };
					Local_82.f_43[2] = 302.365f;
					Local_82.f_30[3 /*3*/] = { -1710.748f, 129.7035f, 63.3716f };
					Local_82.f_43[3] = 304.9788f;
					Local_82.f_117[0 /*3*/] = { -1674.868f, 141.795f, 62.4627f };
					Local_82.f_148[0] = 30.9787f;
					Local_82.f_117[1 /*3*/] = { -1668.265f, 190.8298f, 60.7573f };
					Local_82.f_148[1] = 97.3626f;
					Local_82.f_117[2 /*3*/] = { -1661.135f, 236.6263f, 61.391f };
					Local_82.f_148[2] = 218.2636f;
					Local_82.f_117[3 /*3*/] = { -1706.443f, 186.8354f, 62.9277f };
					Local_82.f_148[3] = 257.6324f;
					Local_82.f_117[4 /*3*/] = { -1722.395f, 227.362f, 60.7408f };
					Local_82.f_148[4] = 244.6777f;
					Local_82.f_117[5 /*3*/] = { -1623.344f, 165.8969f, 59.7796f };
					Local_82.f_148[5] = 12.745f;
					Local_82.f_117[6 /*3*/] = { -1627.188f, 242.7915f, 58.648f };
					Local_82.f_148[6] = 196.3743f;
					Local_82.f_117[7 /*3*/] = { -1796.215f, 150.6246f, 67.7735f };
					Local_82.f_148[7] = 283.2556f;
					Local_82.f_117[8 /*3*/] = { -1774.033f, 105.8673f, 69.3384f };
					Local_82.f_148[8] = 243.4268f;
					Local_82.f_117[9 /*3*/] = { -1594.717f, 210.4007f, 73.3379f };
					Local_82.f_148[9] = 27.7876f;
					break;
			}
			break;
		
		case joaat("buzzard"):
			Local_82.f_240 = joaat("buzzard");
			Local_82.f_280[0] = 2;
			Local_82.f_291[0] = func_45(2);
			Local_82.f_280[1] = 4;
			Local_82.f_291[1] = func_45(4);
			Local_82.f_305[1] = func_44(4);
			Local_82.f_280[2] = 2;
			Local_82.f_291[2] = func_45(2);
			if (Local_82.f_12 <= 2 || !func_748())
			{
				Local_82.f_280[3] = 5;
				Local_82.f_291[3] = func_45(5);
				Local_82.f_278 = 4;
			}
			else if (Local_82.f_12 == 3)
			{
				Local_82.f_280[3] = 4;
				Local_82.f_291[3] = func_45(4);
				Local_82.f_305[3] = func_44(4);
				Local_82.f_280[4] = 2;
				Local_82.f_291[4] = func_45(2);
				Local_82.f_280[5] = 5;
				Local_82.f_291[5] = func_45(5);
				Local_82.f_278 = 6;
			}
			else
			{
				Local_82.f_280[3] = 4;
				Local_82.f_291[3] = func_45(4);
				Local_82.f_305[3] = func_44(4);
				Local_82.f_280[4] = 2;
				Local_82.f_291[4] = func_45(2);
				Local_82.f_280[5] = 4;
				Local_82.f_291[5] = func_45(4);
				Local_82.f_305[5] = func_44(4);
				Local_82.f_280[6] = 5;
				Local_82.f_291[6] = func_45(5);
				Local_82.f_278 = 7;
			}
			Local_82.f_255 = func_41();
			if (!func_748())
			{
				Local_82.f_1 = 4;
			}
			else
			{
				Local_82.f_1 = 9;
			}
			Local_82.f_2 = Local_82.f_29;
			switch (Local_82.f_29)
			{
				case 0:
					Local_82.f_30[0 /*3*/] = { 1139.943f, -1289.195f, 33.6127f };
					Local_82.f_43[0] = 180.7904f;
					Local_82.f_30[1 /*3*/] = { 1156.358f, -1327.402f, 33.7312f };
					Local_82.f_43[1] = 269.3001f;
					Local_82.f_30[2 /*3*/] = { 1204.963f, -1265.334f, 34.2267f };
					Local_82.f_43[2] = 180.39f;
					Local_82.f_30[3 /*3*/] = { 1220.954f, -1214.883f, 34.9485f };
					Local_82.f_43[3] = 276.7351f;
					Local_82.f_117[0 /*3*/] = { 1195.556f, -1277.914f, 34.3601f };
					Local_82.f_148[0] = 329.9165f;
					Local_82.f_117[1 /*3*/] = { 1197.899f, -1297.386f, 34.1985f };
					Local_82.f_148[1] = 264.7702f;
					Local_82.f_117[2 /*3*/] = { 1168.435f, -1382.305f, 33.784f };
					Local_82.f_148[2] = 359.5203f;
					Local_82.f_117[3 /*3*/] = { 1160.796f, -1253.626f, 33.5659f };
					Local_82.f_148[3] = 111.3101f;
					Local_82.f_117[4 /*3*/] = { 1178.2f, -1272.399f, 33.8277f };
					Local_82.f_148[4] = 176.3058f;
					Local_82.f_117[5 /*3*/] = { 1185.282f, -1355.494f, 33.9506f };
					Local_82.f_148[5] = 213.1969f;
					Local_82.f_117[6 /*3*/] = { 1217.704f, -1381.659f, 34.3114f };
					Local_82.f_148[6] = 275.2275f;
					Local_82.f_117[7 /*3*/] = { 1193.388f, -1257.564f, 34.2036f };
					Local_82.f_148[7] = 220.0349f;
					Local_82.f_117[8 /*3*/] = { 1174.833f, -1381.064f, 41.8297f };
					Local_82.f_148[8] = 359.15f;
					Local_82.f_117[9 /*3*/] = { 1154.647f, -1338.613f, 33.7034f };
					Local_82.f_148[9] = 83.4212f;
					break;
				
				case 1:
					Local_82.f_30[0 /*3*/] = { 129.1966f, -368.0656f, 42.257f };
					Local_82.f_43[0] = 247.4892f;
					Local_82.f_30[1 /*3*/] = { 147.9662f, -363.0619f, 42.257f };
					Local_82.f_43[1] = 66.129f;
					Local_82.f_30[2 /*3*/] = { 116.6446f, -436.4488f, 40.1294f };
					Local_82.f_43[2] = 340.0713f;
					Local_82.f_30[3 /*3*/] = { 90.0879f, -385.0907f, 40.2506f };
					Local_82.f_43[3] = 245.7466f;
					Local_82.f_117[0 /*3*/] = { 47.0236f, -401.9681f, 38.9218f };
					Local_82.f_148[0] = 252.6017f;
					Local_82.f_117[1 /*3*/] = { 36.934f, -438.6162f, 38.9206f };
					Local_82.f_148[1] = 245.262f;
					Local_82.f_117[2 /*3*/] = { 69.7929f, -461.295f, 38.9215f };
					Local_82.f_148[2] = 44.7945f;
					Local_82.f_117[3 /*3*/] = { 48.4389f, -397.2337f, 54.29f };
					Local_82.f_148[3] = 255.6518f;
					Local_82.f_117[4 /*3*/] = { 204.0561f, -439.34f, 41.9848f };
					Local_82.f_148[4] = 124.8391f;
					Local_82.f_117[5 /*3*/] = { 142.2612f, -291.4343f, 45.3084f };
					Local_82.f_148[5] = 188.9979f;
					Local_82.f_117[6 /*3*/] = { 163.2065f, -291.4264f, 45.1553f };
					Local_82.f_148[6] = 159.3613f;
					Local_82.f_117[7 /*3*/] = { 115.7637f, -459.3909f, 40.1269f };
					Local_82.f_148[7] = 5.7762f;
					Local_82.f_117[8 /*3*/] = { 76.8378f, -337.484f, 66.2022f };
					Local_82.f_148[8] = 89.3388f;
					Local_82.f_117[9 /*3*/] = { 134.533f, -346.3627f, 101.6362f };
					Local_82.f_148[9] = 85.9158f;
					break;
				
				case 2:
					Local_82.f_30[0 /*3*/] = { -509.9767f, 1186.854f, 323.8415f };
					Local_82.f_43[0] = 310.6241f;
					Local_82.f_30[1 /*3*/] = { -398.0129f, 1230.508f, 324.6416f };
					Local_82.f_43[1] = 166.0191f;
					Local_82.f_30[2 /*3*/] = { -455.6342f, 1141.998f, 324.9044f };
					Local_82.f_43[2] = 343.1715f;
					Local_82.f_30[3 /*3*/] = { -412.4245f, 1133.032f, 324.9044f };
					Local_82.f_43[3] = 342.4984f;
					Local_82.f_117[0 /*3*/] = { -426.3299f, 1216.66f, 324.7585f };
					Local_82.f_148[0] = 248.8594f;
					Local_82.f_117[1 /*3*/] = { -363.2418f, 1266.761f, 329.8745f };
					Local_82.f_148[1] = 195.7758f;
					Local_82.f_117[2 /*3*/] = { -453.9799f, 1074.992f, 326.6897f };
					Local_82.f_148[2] = 28.6127f;
					Local_82.f_117[3 /*3*/] = { -392.485f, 1078.562f, 323.2558f };
					Local_82.f_148[3] = 296.7476f;
					Local_82.f_117[4 /*3*/] = { -413.6003f, 1086.831f, 326.6821f };
					Local_82.f_148[4] = 240.9422f;
					Local_82.f_117[5 /*3*/] = { -381.0179f, 1141.269f, 321.6503f };
					Local_82.f_148[5] = 2.473f;
					Local_82.f_117[6 /*3*/] = { -482.3448f, 1118.646f, 319.0963f };
					Local_82.f_148[6] = 343.6776f;
					Local_82.f_117[7 /*3*/] = { -397.3531f, 1127.527f, 321.7288f };
					Local_82.f_148[7] = 0.2495f;
					Local_82.f_117[8 /*3*/] = { -435.3902f, 1092.162f, 331.5411f };
					Local_82.f_148[8] = 72.7889f;
					Local_82.f_117[9 /*3*/] = { -424.5132f, 1225.076f, 324.7585f };
					Local_82.f_148[9] = 238.4196f;
					break;
				
				case 3:
					Local_82.f_30[0 /*3*/] = { 341.0539f, 3569.789f, 32.4743f };
					Local_82.f_43[0] = 351.0324f;
					Local_82.f_30[1 /*3*/] = { 373.5018f, 3512.322f, 33.1732f };
					Local_82.f_43[1] = 3.5452f;
					Local_82.f_30[2 /*3*/] = { 353.5068f, 3483.839f, 34.0848f };
					Local_82.f_43[2] = 7.3237f;
					Local_82.f_30[3 /*3*/] = { 245.8774f, 3580.881f, 32.9612f };
					Local_82.f_43[3] = 332.0844f;
					Local_82.f_117[0 /*3*/] = { 447.4214f, 3566.317f, 32.2386f };
					Local_82.f_148[0] = 2.6416f;
					Local_82.f_117[1 /*3*/] = { 445.3309f, 3512.088f, 32.9825f };
					Local_82.f_148[1] = 171.8638f;
					Local_82.f_117[2 /*3*/] = { 353.2316f, 3396.212f, 35.4033f };
					Local_82.f_148[2] = 257.0332f;
					Local_82.f_117[3 /*3*/] = { 454.5527f, 3530.242f, 32.4254f };
					Local_82.f_148[3] = 91.7869f;
					Local_82.f_117[4 /*3*/] = { 395.8559f, 3577.025f, 32.2922f };
					Local_82.f_148[4] = 4.2016f;
					Local_82.f_117[5 /*3*/] = { 380.2437f, 3560.991f, 32.342f };
					Local_82.f_148[5] = 339.729f;
					Local_82.f_117[6 /*3*/] = { 408.4627f, 3458.313f, 32.6961f };
					Local_82.f_148[6] = 359.2033f;
					Local_82.f_117[7 /*3*/] = { 476.5523f, 3557.328f, 32.2386f };
					Local_82.f_148[7] = 333.6298f;
					Local_82.f_117[8 /*3*/] = { 325.6323f, 3390.666f, 35.4033f };
					Local_82.f_148[8] = 73.2788f;
					Local_82.f_117[9 /*3*/] = { 461.6116f, 3535.257f, 32.318f };
					Local_82.f_148[9] = 96.8181f;
					break;
				
				case 4:
					Local_82.f_30[0 /*3*/] = { 1493.166f, 1177.555f, 113.2209f };
					Local_82.f_43[0] = 42.1535f;
					Local_82.f_30[1 /*3*/] = { 1433.476f, 1179.544f, 113.1842f };
					Local_82.f_43[1] = 315.0261f;
					Local_82.f_30[2 /*3*/] = { 1471.486f, 1108.967f, 113.3343f };
					Local_82.f_43[2] = 1.2527f;
					Local_82.f_30[3 /*3*/] = { 1448.914f, 1110.622f, 113.3363f };
					Local_82.f_43[3] = 1.9403f;
					Local_82.f_117[0 /*3*/] = { 1485.622f, 1047.388f, 113.334f };
					Local_82.f_148[0] = 352.9674f;
					Local_82.f_117[1 /*3*/] = { 1461.541f, 1083.658f, 113.3344f };
					Local_82.f_148[1] = 88.8285f;
					Local_82.f_117[2 /*3*/] = { 1411.874f, 1126.96f, 113.3341f };
					Local_82.f_148[2] = 177.2297f;
					Local_82.f_117[3 /*3*/] = { 1442.497f, 1148.469f, 113.3342f };
					Local_82.f_148[3] = 273.1487f;
					Local_82.f_117[4 /*3*/] = { 1406.476f, 1256.695f, 106.6555f };
					Local_82.f_148[4] = 225.394f;
					Local_82.f_117[5 /*3*/] = { 1464.077f, 1134.808f, 113.3227f };
					Local_82.f_148[5] = 175.5423f;
					Local_82.f_117[6 /*3*/] = { 1410.314f, 1162.317f, 113.3342f };
					Local_82.f_148[6] = 191.1842f;
					Local_82.f_117[7 /*3*/] = { 1487.483f, 1102.243f, 113.3346f };
					Local_82.f_148[7] = 269.6831f;
					Local_82.f_117[8 /*3*/] = { 1391.034f, 1154.223f, 113.4433f };
					Local_82.f_148[8] = 29.4203f;
					Local_82.f_117[9 /*3*/] = { 1484.87f, 1039.553f, 113.2318f };
					Local_82.f_148[9] = 287.677f;
					break;
			}
			break;
	}
}

int func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_82.f_255 != -1)
	{
		return Local_82.f_255;
	}
	if (Local_82.f_278 == 0)
	{
		return ((4 * Global_262145.f_10208) + Global_262145.f_10209);
	}
	iVar2 = func_98();
	iVar3 = func_43(iVar2);
	iVar4 = func_42(iVar3);
	switch (Local_82.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar1 = 0;
			while (iVar1 < Local_82.f_278)
			{
				iVar0 = (iVar0 + ((Local_82.f_291[iVar1] * iVar4) + Local_82.f_305[iVar1]));
				iVar1++;
			}
			break;
	}
	return iVar0;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case joaat("insurgent"):
			return 2;
			break;
		
		case joaat("lazer"):
			return 1;
			break;
		
		case joaat("buzzard"):
			return 4;
			break;
		
		case joaat("mesa3"):
			return 4;
			break;
		
		case joaat("savage"):
			return 4;
			break;
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			if (Local_82.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
		
		case 4:
			if (Local_82.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else
			{
				iVar0 = joaat("mesa3");
			}
			break;
		
		case 5:
			iVar0 = joaat("savage");
			break;
		
		default:
			if (Local_82.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else if (Local_82.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
	}
	return iVar0;
}

int func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 4:
		case 3:
			if (func_748())
			{
				iVar0 = Global_262145.f_11390;
			}
			else
			{
				iVar0 = Global_262145.f_11110;
			}
			break;
	}
	return iVar0;
}

int func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 2:
			if (func_748())
			{
				iVar0 = Global_262145.f_11391;
			}
			else
			{
				iVar0 = Global_262145.f_11111;
			}
			break;
		
		case 5:
			if (func_748())
			{
				iVar0 = Global_262145.f_11392;
			}
			else
			{
				iVar0 = Global_262145.f_11112;
			}
			break;
		
		case 4:
			if (func_748())
			{
				iVar0 = Global_262145.f_11389;
			}
			else
			{
				iVar0 = Global_262145.f_11109;
			}
			break;
	}
	return iVar0;
}

int func_46(int iParam0)
{
	if (!func_748())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			
			case joaat("hydra"):
				return 5;
			
			case joaat("savage"):
				return 3;
			
			case joaat("valkyrie"):
				return 5;
			
			case joaat("buzzard"):
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			
			case joaat("hydra"):
				return 3;
			
			case joaat("savage"):
				return 3;
			
			case joaat("valkyrie"):
				return 4;
			
			case joaat("buzzard"):
				return 4;
			}
		
		default:
	}
	return 5;
}

void func_47()
{
	Local_82.f_252 = 0;
	Local_82.f_302 = 0;
	Local_82.f_317 = 0;
	Local_82.f_316 = 0;
}

int func_48()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 20;
	iVar0 = 20;
	while (iVar0 <= 23)
	{
		if (!func_31(Local_82.f_48[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_49()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_82.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_82.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_98() == 4)
				{
					return 2;
				}
				else if (func_98() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_50()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_109(Local_82.f_73[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	if (Local_82.f_318 == 0 || Local_82.f_318 == func_39())
	{
		if (func_98() == 2 || func_98() == 5)
		{
			return 0;
		}
	}
	if (func_98() == 3 || func_98() == 4)
	{
		if (Local_82.f_317 >= func_38())
		{
			iVar0 = Local_82.f_279 + 1;
			if (iVar0 < 10)
			{
				iVar1 = Local_82.f_280[iVar0];
				if (iVar1 == 5)
				{
					bVar2 = true;
				}
			}
			if (!bVar2)
			{
				return 0;
			}
		}
	}
	else if (Local_82.f_317 == 2)
	{
		iVar0 = Local_82.f_279 + 1;
		if (iVar0 < 10)
		{
			iVar1 = Local_82.f_280[iVar0];
			if (iVar1 == 5)
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			return 0;
		}
	}
	if (Local_82.f_318 == func_39())
	{
		return 0;
	}
	if (Local_82.f_318 == func_71())
	{
		return 0;
	}
	if (func_98() == 1)
	{
		return 0;
	}
	if (!unk_0xF7DE07F319727299(Local_82.f_48[(20 + iParam0)]))
	{
		if (func_70(Local_82.f_239) && unk_0xB597185B810C7743(0, 1, 0, 0))
		{
			if (func_68(&iVar3))
			{
				if (func_55(Local_82.f_117[iVar3 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_54(&(Local_82.f_48[(20 + iParam0)]), 22, Local_82.f_239, Local_82.f_117[iVar3 /*3*/], Local_82.f_148[iVar3], 1, 1, 1))
					{
						unk_0xD3D9D7C84656DAE5(unk_0x3C6C6327BA564AEE(Local_82.f_48[(20 + iParam0)]), iLocal_96);
						unk_0x82FF25D1808866E5(unk_0x3C6C6327BA564AEE(Local_82.f_48[(20 + iParam0)]), 1, 0);
						unk_0xD93D982926D0D8B3(unk_0x3C6C6327BA564AEE(Local_82.f_48[(20 + iParam0)]), 0);
						if (iVar3 == 8 || iVar3 == 9)
						{
							unk_0x92BD213E6A0E666B(unk_0x3C6C6327BA564AEE(Local_82.f_48[(20 + iParam0)]), joaat("weapon_rpg"), 25000, true, true);
						}
						else
						{
							unk_0xEB879F62C8DFA9E2(unk_0x3C6C6327BA564AEE(Local_82.f_48[(20 + iParam0)]), joaat("weapon_advancedrifle"), 25000, true);
						}
						fVar6 = (30f * func_53());
						unk_0xF94DFEAE3DD1EE7E(unk_0x3C6C6327BA564AEE(Local_82.f_48[(20 + iParam0)]), round(fVar6));
						unk_0x3EA9EB775DF15E76(unk_0x3C6C6327BA564AEE(Local_82.f_48[(20 + iParam0)]), 1);
						unk_0x73745F8F1D07995D(unk_0x3C6C6327BA564AEE(Local_82.f_48[(20 + iParam0)]), 2);
						unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_82.f_48[(20 + iParam0)]), 0, 1);
						unk_0x38CCFC7E1952A745(unk_0x3C6C6327BA564AEE(Local_82.f_48[(20 + iParam0)]), 1);
						unk_0x17253AF44F6ED2DA(unk_0x3C6C6327BA564AEE(Local_82.f_48[(20 + iParam0)]), 1);
						unk_0x694113444F21E39F(unk_0x3C6C6327BA564AEE(Local_82.f_48[(20 + iParam0)]), 42, true);
						unk_0x697DA7132EE43ABC(unk_0x3C6C6327BA564AEE(Local_82.f_48[(20 + iParam0)]), round((200f * Global_262145.f_154)), 0);
						unk_0x9B20C082E40178C8(unk_0x3C6C6327BA564AEE(Local_82.f_48[(20 + iParam0)]), 1);
						unk_0xCBA6B2B569DCAFD8(unk_0x3C6C6327BA564AEE(Local_82.f_48[(20 + iParam0)]), 1);
						unk_0x44EEDB6E2FB6904F(unk_0x3C6C6327BA564AEE(Local_82.f_48[(20 + iParam0)]), true);
						unk_0x694113444F21E39F(unk_0x3C6C6327BA564AEE(Local_82.f_48[(20 + iParam0)]), 151, false);
						iVar4 = unk_0x4F5F2FB7AE0EB7AB(unk_0x3C6C6327BA564AEE(Local_82.f_48[(20 + iParam0)]));
						fVar5 = func_52();
						iVar4 = round((fVar5 * to_float(iVar4)));
						unk_0x697DA7132EE43ABC(unk_0x3C6C6327BA564AEE(Local_82.f_48[(20 + iParam0)]), iVar4, 0);
						iVar7 = (20 + iParam0);
						if (unk_0xCE990E643CD9D0E5(Local_82.f_272[func_91(iVar7)], func_90(iVar7)))
						{
							unk_0xD2459066EA58CE43(&(Local_82.f_272[func_91(iVar7)]), func_90(iVar7));
						}
						Local_82.f_247++;
						Local_82.f_317++;
						Local_82.f_250++;
						Local_82.f_318++;
						func_106(&(Local_82.f_414[iVar7 /*2*/]));
						func_20(&(Local_82.f_414[iVar7 /*2*/]), 0, 0);
						if (func_22(&(Local_82.f_364[iVar7 /*2*/])))
						{
							func_106(&(Local_82.f_364[iVar7 /*2*/]));
						}
						func_20(&(Local_550[iVar3 /*2*/]), 0, 0);
						unk_0x617FDF8FC3AB369D(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar7]), 1, iLocal_95);
					}
				}
			}
		}
	}
	if (!unk_0xF7DE07F319727299(Local_82.f_48[(20 + iParam0)]))
	{
		return 0;
	}
	return 1;
}

var func_52()
{
	if (func_748())
	{
		return Global_262145.f_11378;
	}
	return Global_262145.f_11098;
}

float func_53()
{
	if (func_748())
	{
		return Global_262145.f_11380;
	}
	return Global_262145.f_11100;
}

int func_54(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (!unk_0xCFED0F4D63A92A70(1))
	{
		return 0;
	}
	iVar0 = unk_0xB3116B49FE00E2F1(iParam1, iParam2, Param3, fParam4, iParam6, bParam5);
	*uParam0 = unk_0x28207B405DA4E61E(iVar0);
	if (unk_0xF7DE07F319727299(*uParam0))
	{
		unk_0x7C47E49129337557(iVar0, iParam7);
		if (unk_0x4349BF35C5B9A49B(iVar0))
		{
			if (bParam5)
			{
				unk_0x342AB3CE1C296A56(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_55(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2405074.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (unk_0x160FF3CA76647557(Param0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (unk_0x11C93463B5150761(Param0.x, Param0.f_1, (Param0.f_2 + 1f), fParam2) || unk_0x11C93463B5150761(Param0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (unk_0xF666C0F9CA439368(Param0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam11)
	{
		if (unk_0x7B4B68137DA4DF12(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (fParam12 > 0f)
	{
		if (func_62(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_56(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405074.f_2++;
	return 1;
}

int func_56(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_850(unk_0x460153A63B9477BC(), 1, 1))
		{
			if (!unk_0x03DB5C6AABF8DA46())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x272784C60C397DB6(func_58(unk_0x460153A63B9477BC()), Param0, 1) <= (fVar2 + fParam1))
				{
					if (unk_0x9A70B1BD2A5BA09C(Param0, fParam1))
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
		if (func_850(iVar1, 1, 1))
		{
			if (!func_16(iVar1, 0) && unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x460153A63B9477BC()))
				{
					if ((func_57(iVar1) || !bParam8) && !Global_2425869[iVar1 /*443*/].f_263)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!unk_0x6CC163E30ECE0790(iVar1) == -1)
							{
								if (unk_0x6CC163E30ECE0790(iVar1) == unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && unk_0x6CC163E30ECE0790(iVar1) != unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()))) || unk_0x6CC163E30ECE0790(iVar1) == -1)
							{
								if (unk_0x272784C60C397DB6(func_58(iVar1), Param0, 1) <= (fVar2 + fParam1))
								{
									if (unk_0xC3BA5B8F1CF9CD22(iVar1, Param0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (unk_0x6CC163E30ECE0790(iVar1) != iParam6 || unk_0x6CC163E30ECE0790(iVar1) == -1)
						{
							if (unk_0x272784C60C397DB6(func_58(iVar1), Param0, 1) <= (fVar2 + fParam1))
							{
								if (unk_0xC3BA5B8F1CF9CD22(iVar1, Param0, fParam1))
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

int func_57(int iParam0)
{
	if (unk_0xEB7D4DA50142DE0A(unk_0x1FA7B77001D60F9D(iParam0)) || Global_2425869[iParam0 /*443*/].f_249)
	{
		return 1;
	}
	return 0;
}

Vector3 func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_61() && Global_1590682[iVar0 /*883*/].f_854) && !func_60(Global_1590682[iVar0 /*883*/].f_855))
	{
		return Global_1590682[iVar0 /*883*/].f_855;
	}
	return func_59(iParam0);
}

Vector3 func_59(int iParam0)
{
	return unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iParam0), 0);
}

int func_60(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_61()
{
	return Global_2451787.f_18;
}

int func_62(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x460153A63B9477BC() != iVar1) || iParam6 == 0)
		{
			if (func_850(iVar1, bParam2, bParam3))
			{
				if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
				{
					if (!bParam5 || (!unk_0x5AEB5DDFFAD43CA5(unk_0x1FA7B77001D60F9D(iVar1)) && func_57(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) != unk_0x6CC163E30ECE0790(iVar1))) || unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1)
						{
							if (((unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1 && uParam7) && bParam4) && func_63(iVar1))
							{
							}
							else if (unk_0xAE06B9E39EBDE049(unk_0x1FA7B77001D60F9D(iVar1)))
							{
								if (unk_0x272784C60C397DB6(func_59(iVar1), Param0, 1) < fParam1)
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

int func_63(int iParam0)
{
	if (func_67(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	Global_2515173 = { func_66(iParam0) };
	if (unk_0x78A7795C9C51946D(&Global_2515173))
	{
		return 1;
	}
	if (func_64(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_65(iParam0);
	if (!iVar0 == func_5())
	{
		if (iVar0 == func_65(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_65(int iParam0)
{
	if (iParam0 != func_5())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_5();
}

struct<13> func_66(int iParam0)
{
	struct<13> Var0;
	
	unk_0x2BDD80E79441BD36(iParam0, &Var0, 13);
	return Var0;
}

int func_67(int iParam0, int iParam1)
{
	if (unk_0xE2FBD13450B2DA21())
	{
		Global_2515173 = { func_66(iParam0) };
		Global_2515186 = { func_66(iParam1) };
		if (unk_0xBF9EC1ED7E386622(&Global_2515173))
		{
			if (unk_0xBF9EC1ED7E386622(&Global_2515186))
			{
				unk_0x192BD21E18525C69(&Global_2515103, 35, &Global_2515173);
				unk_0x192BD21E18525C69(&Global_2515138, 35, &Global_2515186);
				if (Global_2515103 == Global_2515138)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_68(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x344C570D6F8700DF(0, 10);
	if (!func_69(Local_82.f_117[iVar0 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_22(&(Local_550[iVar0 /*2*/])) || (func_22(&(Local_550[iVar0 /*2*/])) && func_19(&(Local_550[iVar0 /*2*/]), 10000, 0)))
		{
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

bool func_69(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_70(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x78FCB2E22C41B9D5(iParam0);
	return unk_0x7D167B9A0CCDA347(iParam0);
}

int func_71()
{
	int iVar0;
	int iVar1;
	
	if (Local_82.f_279 == 0)
	{
		iVar0 = Local_82.f_305[0];
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Local_82.f_279)
		{
			iVar0 = (iVar0 + Local_82.f_305[iVar1]);
			iVar1++;
		}
	}
	return iVar0;
}

int func_72()
{
	int iVar0;
	int iVar1;
	
	switch (Local_82.f_27)
	{
		case joaat("savage"):
		case joaat("rhino"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_82.f_305[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_73(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4;
	if (func_98() == 3)
	{
		return 0;
	}
	if (Local_82.f_242 < iVar0)
	{
	}
	if (Local_82.f_251 >= iVar0)
	{
		return 0;
	}
	if (func_98() > 1)
	{
		iVar1 = func_88();
		if (Local_82.f_252 >= iVar1)
		{
			return 0;
		}
	}
	if (func_70(Local_82.f_240) && func_70(Local_82.f_239))
	{
		if (func_74(iParam0))
		{
			if (unk_0xCE990E643CD9D0E5(Local_82.f_245, iParam0))
			{
				Local_82.f_249++;
				Local_82.f_251++;
				Local_82.f_252++;
				unk_0xD2459066EA58CE43(&(Local_82.f_245), iParam0);
				if (!unk_0xCE990E643CD9D0E5(Local_82.f_3, 19))
				{
					unk_0xBE20AB8238688965(&(Local_82.f_3), 19);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_74(int iParam0)
{
	if (unk_0xB597185B810C7743(4, 1, 0, 0))
	{
		if (func_80(iParam0))
		{
			if (func_75(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_75(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	
	if (func_109(Local_82.f_73[iParam0]) && unk_0xCE990E643CD9D0E5(Local_82.f_245, iParam0))
	{
		if (func_79(Local_82.f_73[iParam0]))
		{
			if (Local_82.f_116 <= 0)
			{
				if (unk_0x36FE6D3220816ADA(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0])) == joaat("insurgent"))
				{
					Local_82.f_116 = 2;
				}
				else
				{
					Local_82.f_116 = unk_0x99E61B3887CC8E71(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0])) + 1;
					if (Local_82.f_116 > 4)
					{
						Local_82.f_116 = 4;
					}
				}
			}
			iVar6 = 0;
			while (iVar6 < Local_82.f_116)
			{
				if (!unk_0xF7DE07F319727299(Local_82.f_48[(iParam0 * 4 + iVar6)]))
				{
					if (func_70(Local_82.f_239))
					{
						iVar4 = (iVar6 - 1);
						if (unk_0x36FE6D3220816ADA(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0])) == joaat("insurgent"))
						{
							if (iVar4 == 0)
							{
								iVar4 = 7;
							}
						}
						if (func_78(&(Local_82.f_48[(iParam0 * 4 + iVar6)]), Local_82.f_73[iParam0], 22, Local_82.f_239, iVar4, 1, 1, 1))
						{
							unk_0xD3D9D7C84656DAE5(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), iLocal_96);
							unk_0x82FF25D1808866E5(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 1, 0);
							unk_0xD93D982926D0D8B3(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 0);
							unk_0xEB879F62C8DFA9E2(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_appistol"), 25000, false);
							if (func_77())
							{
								unk_0xEB879F62C8DFA9E2(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, true);
							}
							else
							{
								unk_0xEB879F62C8DFA9E2(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, true);
							}
							fVar5 = 10f;
							fVar5 = (fVar5 * func_53());
							unk_0xF94DFEAE3DD1EE7E(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), round(fVar5));
							unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 2, 1);
							unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 3, 0);
							unk_0x3EA9EB775DF15E76(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x73745F8F1D07995D(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 2);
							unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 0, 1);
							unk_0x38CCFC7E1952A745(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x17253AF44F6ED2DA(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x697DA7132EE43ABC(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), round((200f * Global_262145.f_154)), 0);
							unk_0x9B20C082E40178C8(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xCBA6B2B569DCAFD8(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x694113444F21E39F(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 42, true);
							unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
							unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
							unk_0xB1AC1F996633F5B4(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0xEB3B17B6D0100376(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x5B91E038374B8BD8(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x694113444F21E39F(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 151, false);
							if (unk_0x442D6659150AF4B3(unk_0x36FE6D3220816ADA(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]))))
							{
								if (iVar6 == 0)
								{
									unk_0x6C08F93084C348FC(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 299f);
									fVar5 = 3f;
									fVar5 = (fVar5 * func_76());
									unk_0xF94DFEAE3DD1EE7E(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), round(fVar5));
									unk_0xB51236BFABA70F7E(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 50);
									unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
									unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
									unk_0x8DE81126922BBEDD(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), -1857128337);
								}
								fVar0 = Global_262145.f_11362;
								fVar1 = Global_262145.f_11363;
								fVar2 = Global_262145.f_11364;
								fVar3 = Global_262145.f_11365;
								unk_0xC1080142F19925ED(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 23, fVar0);
								unk_0xC1080142F19925ED(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 24, fVar1);
								unk_0xC1080142F19925ED(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 25, fVar2);
								unk_0xC1080142F19925ED(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 26, fVar3);
							}
							else if (unk_0xF9C3E2B9AA9E2294(unk_0x36FE6D3220816ADA(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]))))
							{
								unk_0x6C08F93084C348FC(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 299f);
								fVar5 = 3f;
								fVar5 = (fVar5 * func_76());
								unk_0xF94DFEAE3DD1EE7E(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), round(fVar5));
								unk_0xB51236BFABA70F7E(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 50);
								unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 52, 1);
								unk_0x6673CC701BC8E9C1(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 53, 1);
								fVar0 = Global_262145.f_11362;
								fVar1 = Global_262145.f_11363;
								fVar2 = Global_262145.f_11364;
								fVar3 = Global_262145.f_11365;
								unk_0xC1080142F19925ED(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 23, fVar0);
								unk_0xC1080142F19925ED(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 24, fVar1);
								unk_0xC1080142F19925ED(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 25, fVar2);
								unk_0xC1080142F19925ED(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 26, fVar3);
							}
							iVar7 = (iParam0 * 4 + iVar6);
							if (unk_0xCE990E643CD9D0E5(Local_82.f_272[func_91(iVar7)], func_90(iVar7)))
							{
								unk_0xD2459066EA58CE43(&(Local_82.f_272[func_91(iVar7)]), func_90(iVar7));
							}
							unk_0x44EEDB6E2FB6904F(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), true);
							unk_0xCBA6B2B569DCAFD8(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x911BA6A7B46C75BA(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 1);
							unk_0x617FDF8FC3AB369D(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), 1, iLocal_95);
							Local_82.f_250++;
							func_106(&(Local_82.f_414[(iParam0 * 4 + iVar6) /*2*/]));
							func_20(&(Local_82.f_414[(iParam0 * 4 + iVar6) /*2*/]), 0, 0);
							if (func_22(&(Local_82.f_364[(iParam0 * 4 + iVar6) /*2*/])))
							{
								func_106(&(Local_82.f_364[(iParam0 * 4 + iVar6) /*2*/]));
							}
						}
					}
				}
				iVar6++;
			}
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < Local_82.f_116)
			{
				if (!unk_0xF7DE07F319727299(Local_82.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (func_31(Local_82.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (!unk_0xACBCFA3095C5A434(unk_0x3C6C6327BA564AEE(Local_82.f_48[(iParam0 * 4 + iVar6)]), unk_0x770D3B2B4702434A(Local_82.f_73[iParam0])))
				{
					return 0;
				}
				iVar6++;
			}
			return 1;
		}
	}
	return 0;
}

float func_76()
{
	if (func_748())
	{
		return Global_262145.f_11381;
	}
	return Global_262145.f_11101;
}

int func_77()
{
	if (unk_0xCE990E643CD9D0E5(unk_0x344C570D6F8700DF(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_78(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!unk_0xCFED0F4D63A92A70(1))
	{
		return 0;
	}
	if (!unk_0xF7DE07F319727299(uParam1))
	{
		return 0;
	}
	if (!unk_0x80FF6C016CDB0FAF(unk_0x770D3B2B4702434A(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = unk_0x28207B405DA4E61E(unk_0x6A7A2C83BD302BA4(unk_0x770D3B2B4702434A(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (unk_0xF7DE07F319727299(*uParam0))
	{
		unk_0x7C47E49129337557(unk_0x3C6C6327BA564AEE(*uParam0), iParam7);
		if (unk_0x4349BF35C5B9A49B(unk_0x3C6C6327BA564AEE(*uParam0)))
		{
			if (bParam5)
			{
				unk_0x342AB3CE1C296A56(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_79(var uParam0)
{
	if (unk_0xF7DE07F319727299(uParam0))
	{
		unk_0x5F00FA3094B612F5(uParam0);
		return unk_0xF05B7723022657B3(uParam0);
	}
	return 0;
}

int func_80(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	struct<3> Var10;
	var uVar11;
	int iVar12;
	
	iVar0 = func_98();
	Local_82.f_240 = func_43(iVar0);
	if (!unk_0xF7DE07F319727299(Local_82.f_73[iParam0]))
	{
		iVar2 = 0;
		while (iVar2 < Local_82.f_116)
		{
			iVar3 = (iParam0 * 4 + iVar2);
			if (unk_0xF7DE07F319727299(Local_82.f_48[iVar3]))
			{
				return 0;
			}
			iVar2++;
		}
		if (func_70(Local_82.f_240) && !unk_0xCE990E643CD9D0E5(Local_82.f_245, iParam0))
		{
			fVar8 = 300f;
			if (unk_0x442D6659150AF4B3(Local_82.f_240) || unk_0xF9C3E2B9AA9E2294(Local_82.f_240))
			{
				fVar7 = 300f;
			}
			else
			{
				fVar7 = 100f;
			}
			if (unk_0xF9C3E2B9AA9E2294(Local_82.f_240))
			{
				fVar8 = 800f;
			}
			iVar9 = 0;
			while (iVar9 < Local_82.f_242)
			{
				if (func_87(iVar9))
				{
					func_86(Local_82.f_240, iVar9, &Var10, &uVar11);
					if (!func_69(Var10, 0f, 0f, 0f, 0))
					{
						if (func_55(Var10, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, fVar8, 0, -1, 1, fVar7, 0, 0, 0, 0))
						{
							Var4 = { Var10 };
							fVar5 = uVar11;
							iVar6 = 1;
							func_8(&(Local_82.f_186[iVar9 /*2*/]), 0, 0);
							iVar9 = Local_82.f_242;
						}
					}
				}
				iVar9++;
			}
			if (iVar6 == 1)
			{
				iVar12 = 1;
				if (unk_0x442D6659150AF4B3(Local_82.f_240) || unk_0xF9C3E2B9AA9E2294(Local_82.f_240))
				{
					iVar12 = 0;
				}
				if (func_85(iParam0))
				{
					if (func_82(&(Local_82.f_73[iParam0]), Local_82.f_240, Var4, fVar5, 1, 1, 1, 0, iVar12, 1, 0, 0, 0, 0))
					{
						unk_0x5DC21979EC6C531F(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), 2);
						unk_0x1491D110B8361BFE(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), 1);
						unk_0x74172B5AFD503628(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), 0, 0);
						unk_0x5DC21979EC6C531F(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), 2);
						unk_0xC160551F55D6365A(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), true, 1, 0);
						unk_0x22BA2B3490860247(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), 0);
						unk_0x131A211B8EEF6BF0(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), 0);
						if (unk_0x442D6659150AF4B3(Local_82.f_240))
						{
							unk_0xDF383F338BF25208(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]));
							unk_0x9729E0DCF1C3C9A9(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), 1);
							unk_0xAFB24BC90ACA6210(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]));
							unk_0x7C47E49129337557(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), 0);
						}
						else if (unk_0xF9C3E2B9AA9E2294(Local_82.f_240))
						{
							unk_0xEE6FDB1E2B95E783(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), 3);
							unk_0x7C47E49129337557(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), 0);
							unk_0x9729E0DCF1C3C9A9(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), 1);
							unk_0xAFB24BC90ACA6210(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]));
							unk_0x316E0389ADF56E20(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), 30f);
							unk_0xC59575D2040DFC11(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), 1);
							unk_0xD8CF3B58B8429B96(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), 1);
							fVar1 = 500f;
							unk_0x697DA7132EE43ABC(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), round(fVar1), 0);
						}
						else
						{
							unk_0xA5EAD2ACE2C8BBB2(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), 1, 1);
						}
						if (func_98() == 5)
						{
							fVar1 = to_float(func_81());
							unk_0x697DA7132EE43ABC(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), round(fVar1), 0);
							unk_0x16E50383DEE2A560(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), round(fVar1));
							unk_0x4A9F6CA267EF14FE(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), fVar1);
							unk_0x98274131166DCEF5(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), fVar1);
							unk_0x0FC504FAF5EB94FB(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), fVar1);
							unk_0xF7F003F7673B7CDD(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), 0);
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0x5A697853E59DDF86(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), fVar1);
							unk_0x3EF27175A7AD5150(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), fVar1);
						}
						if (func_22(&(Local_82.f_336[iParam0 /*2*/])))
						{
							func_106(&(Local_82.f_336[iParam0 /*2*/]));
						}
						unk_0xD2459066EA58CE43(&(Local_82.f_253), iParam0);
						unk_0xBE20AB8238688965(&(Local_82.f_245), iParam0);
						unk_0x617FDF8FC3AB369D(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), 1, iLocal_95);
						if (unk_0xCE990E643CD9D0E5(Local_82.f_271, iParam0))
						{
							unk_0xD2459066EA58CE43(&(Local_82.f_271), iParam0);
						}
						if (unk_0xCE990E643CD9D0E5(Local_82.f_303, iParam0))
						{
							unk_0xD2459066EA58CE43(&(Local_82.f_303), iParam0);
						}
						if (Local_82.f_240 == joaat("hydra") || Local_82.f_240 == joaat("savage"))
						{
						}
					}
				}
			}
		}
	}
	if (!unk_0xF7DE07F319727299(Local_82.f_73[iParam0]))
	{
		return 0;
	}
	return 1;
}

var func_81()
{
	if (func_748())
	{
		return Global_262145.f_11379;
	}
	return Global_262145.f_11099;
}

int func_82(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!unk_0x003F998A2839DD5E(iParam1))
	{
		return 0;
	}
	if (!unk_0xCAF3836E98C401B1(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		unk_0xF27E737981AFB47D(Param2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = unk_0xCE4780E24AFDFBF9(iParam1, Param2, fParam3, iParam5, iParam4, iParam12);
	if (unk_0xAE06B9E39EBDE049(iVar1))
	{
		*uParam0 = unk_0x50ACD47FCBAD9F89(iVar1);
		Global_2540384.f_6583 = iVar1;
		if (unk_0xF7DE07F319727299(*uParam0))
		{
			if (bParam13)
			{
				unk_0xFA6E875B9DF13F14(iVar1, 1);
			}
			unk_0x7C47E49129337557(iVar1, iParam8);
			if (unk_0x4349BF35C5B9A49B(iVar1))
			{
				if (bParam6)
				{
					unk_0x342AB3CE1C296A56(*uParam0, 1);
				}
				else
				{
					unk_0x342AB3CE1C296A56(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0xDB600F30FAA757F3(*uParam0, unk_0x460153A63B9477BC(), 1);
				}
			}
			unk_0xDBDEDE7005EE04EF(iVar1, bParam7);
			unk_0x6B75B3B5FAC90C06(iVar1, 1);
			if (bParam10)
			{
				unk_0x9DFE5167DB83E411(iVar1);
				unk_0x7C3ECA5C7ACE0DDB(iVar1, 5, 5, 1f);
			}
			func_83(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_83(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_84(unk_0x460153A63B9477BC(), Param0, iParam2) > -1)
	{
		if ((Global_2405074.f_2914[1 /*6*/].f_5 == iParam3 && Global_2405074.f_2914[1 /*6*/].f_4 == iParam2) && vdist(Global_2405074.f_2914[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405074.f_2914[iVar0 /*6*/] = { Global_2405074.f_2914[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405074.f_2914[1 /*6*/] = { Param0 };
		Global_2405074.f_2914[1 /*6*/].f_3 = fParam1;
		Global_2405074.f_2914[1 /*6*/].f_4 = iParam2;
		Global_2405074.f_2914[1 /*6*/].f_5 = iParam3;
	}
}

int func_84(int iParam0, struct<3> Param1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
			{
				Var2 = { Param1 };
				if (unk_0x0D77CDCF403AEBD2((Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (vdist(Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_85(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
		{
			if (unk_0xCE990E643CD9D0E5(Local_85[iVar0 /*18*/].f_6, iParam0))
			{
				iVar1 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar0));
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_86(int iParam0, int iParam1, var uParam2, var uParam3)
{
	bool bVar0;
	
	bVar0 = (unk_0xF9C3E2B9AA9E2294(iParam0) || unk_0x442D6659150AF4B3(iParam0));
	switch (Local_82.f_27)
	{
		case joaat("rhino"):
			if (!func_69(Local_82.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_82.f_159[iParam1 /*3*/] };
				*uParam3 = Local_82.f_175[iParam1];
			}
			break;
		
		case joaat("hydra"):
			if (!func_69(Local_82.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_82.f_159[iParam1 /*3*/] };
				*uParam3 = Local_82.f_175[iParam1];
			}
			break;
		
		case joaat("savage"):
			switch (Local_82.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1292.189f, -2572.868f, 22.9452f };
								*uParam3 = 332.6443f;
								break;
							
							case 1:
								*uParam2 = { -1062.843f, -3502.913f, 23.1484f };
								*uParam3 = 326.474f;
								break;
							
							case 2:
								*uParam2 = { -1842.189f, -3149.964f, 22.9444f };
								*uParam3 = 177.2589f;
								break;
							
							case 3:
								*uParam2 = { -1271.333f, -2267.149f, 12.9454f };
								*uParam3 = 243.2036f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -892.8904f, -2935.942f, 12.9444f };
								*uParam3 = 50.7848f;
								break;
							
							case 1:
								*uParam2 = { -1290.713f, -2658.844f, 13.0516f };
								*uParam3 = 152.2952f;
								break;
							
							case 2:
								*uParam2 = { -1157.682f, -2725.707f, 12.9534f };
								*uParam3 = 187.5114f;
								break;
							
							case 3:
								*uParam2 = { -949.6019f, -3072.991f, 12.9444f };
								*uParam3 = 63.8501f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
							
							case 1:
								*uParam2 = { 2259.96f, 5608.534f, 63.366f };
								*uParam3 = 171.56f;
								break;
							
							case 2:
								*uParam2 = { 1042.117f, 4282.784f, 47.277f };
								*uParam3 = 284.7637f;
								break;
							
							case 3:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							
							case 1:
								*uParam2 = { 2439.703f, 4993.831f, 44.9932f };
								*uParam3 = 136.377f;
								break;
							
							case 2:
								*uParam2 = { 1972.487f, 4843.981f, 43.13f };
								*uParam3 = 315.4388f;
								break;
							
							case 3:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -822.0636f, 5744.907f, 16.2672f };
								*uParam3 = 305.7653f;
								break;
							
							case 1:
								*uParam2 = { 22.328f, 6898.096f, 21.23f };
								*uParam3 = 151.4785f;
								break;
							
							case 2:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
							
							case 3:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							
							case 1:
								*uParam2 = { -38.6174f, 6281.176f, 30.2043f };
								*uParam3 = 32.7307f;
								break;
							
							case 2:
								*uParam2 = { -313.5567f, 6436.651f, 11.6953f };
								*uParam3 = 129.4952f;
								break;
							
							case 3:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1490.884f, -1955.97f, 79.7973f };
								*uParam3 = 78.8897f;
								break;
							
							case 1:
								*uParam2 = { 594.3433f, -1979.466f, 28.9706f };
								*uParam3 = 319.8794f;
								break;
							
							case 2:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
							
							case 3:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 983.6414f, -1848.797f, 30.0987f };
								*uParam3 = 178.6463f;
								break;
							
							case 1:
								*uParam2 = { 992.1669f, -1506.845f, 30.4275f };
								*uParam3 = 90.1264f;
								break;
							
							case 2:
								*uParam2 = { 771.2441f, -1620.786f, 29.9058f };
								*uParam3 = 313.4008f;
								break;
							
							case 3:
								*uParam2 = { 840.4948f, -1950.51f, 27.9516f };
								*uParam3 = 87.2509f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("valkyrie"):
			switch (Local_82.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -619.1071f, -1856.811f, 38.0408f };
								*uParam3 = 10.5487f;
								break;
							
							case 1:
								*uParam2 = { -273.1338f, -1627.779f, 40.8488f };
								*uParam3 = 77.2743f;
								break;
							
							case 2:
								*uParam2 = { -1157.959f, -1697.113f, 40.3479f };
								*uParam3 = 299.9692f;
								break;
							
							case 3:
								*uParam2 = { -1150.749f, -1708.635f, 40.2485f };
								*uParam3 = 295.9259f;
								break;
							
							case 4:
								*uParam2 = { -1001.754f, -731.3828f, 85.5368f };
								*uParam3 = 232.7072f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -648.1588f, -1632.12f, 23.9175f };
								*uParam3 = 145.9387f;
								break;
							
							case 1:
								*uParam2 = { -850.9597f, -1194.948f, 4.7312f };
								*uParam3 = 2.3024f;
								break;
							
							case 2:
								*uParam2 = { -513.3444f, -967.2039f, 22.5742f };
								*uParam3 = 111.3599f;
								break;
							
							case 3:
								*uParam2 = { -720.752f, -1143.745f, 9.6125f };
								*uParam3 = 126.5029f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1384.463f, 3175.862f, 49.4674f };
								*uParam3 = 107.9207f;
								break;
							
							case 1:
								*uParam2 = { 848.3471f, 3587.832f, 42.0217f };
								*uParam3 = 117.8402f;
								break;
							
							case 2:
								*uParam2 = { -390.1283f, 2557.157f, 99.8288f };
								*uParam3 = 292.5476f;
								break;
							
							case 3:
								*uParam2 = { 1084.247f, 2367.027f, 53.6989f };
								*uParam3 = 53.4222f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 654.4302f, 2752.401f, 40.9669f };
								*uParam3 = 192.1139f;
								break;
							
							case 1:
								*uParam2 = { 91.7939f, 3432.573f, 38.5904f };
								*uParam3 = 246.3809f;
								break;
							
							case 2:
								*uParam2 = { -361.922f, 2954.955f, 24.1579f };
								*uParam3 = 273.6807f;
								break;
							
							case 3:
								*uParam2 = { -180.3412f, 2508.928f, 71.8451f };
								*uParam3 = 7.1243f;
								break;
							
							case 4:
								*uParam2 = { 142.7533f, 2271.567f, 93.6005f };
								*uParam3 = 255.3593f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -394.287f, 4340.043f, 65.1832f };
								*uParam3 = 263.3693f;
								break;
							
							case 1:
								*uParam2 = { 1002.483f, 3175.867f, 48.6918f };
								*uParam3 = 0.497f;
								break;
							
							case 2:
								*uParam2 = { 2325.472f, 3922.296f, 45.2575f };
								*uParam3 = 57.4066f;
								break;
							
							case 3:
								*uParam2 = { 1962.95f, 4785.836f, 51.8872f };
								*uParam3 = 134.6506f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1398.018f, 4520.393f, 52.8047f };
								*uParam3 = 105.7989f;
								break;
							
							case 1:
								*uParam2 = { 366.9009f, 4432.027f, 61.6888f };
								*uParam3 = 204.5592f;
								break;
							
							case 2:
								*uParam2 = { 128.2849f, 4454.878f, 80.3457f };
								*uParam3 = 226.3244f;
								break;
							
							case 3:
								*uParam2 = { -132.4943f, 4295.465f, 41.7475f };
								*uParam3 = 276.3481f;
								break;
							
							case 4:
								*uParam2 = { 1908.425f, 4607f, 36.8242f };
								*uParam3 = 174.8533f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3841.898f, 4234.117f, 15.4291f };
								*uParam3 = 336.9579f;
								break;
							
							case 1:
								*uParam2 = { 2836.958f, 5957.465f, 362.3982f };
								*uParam3 = 225.8444f;
								break;
							
							case 2:
								*uParam2 = { 2624.236f, 5310.019f, 52.1567f };
								*uParam3 = 215.63f;
								break;
							
							case 3:
								*uParam2 = { 2780.447f, 4758.9f, 55.0574f };
								*uParam3 = 326.934f;
								break;
							
							case 4:
								*uParam2 = { 3201.127f, 4657.409f, 190.8286f };
								*uParam3 = 359.7683f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3756.635f, 4434.785f, 11.7586f };
								*uParam3 = 138.6266f;
								break;
							
							case 1:
								*uParam2 = { 3680.549f, 4492.803f, 23.5887f };
								*uParam3 = 113.1337f;
								break;
							
							case 2:
								*uParam2 = { 3337.639f, 5482.484f, 19.0418f };
								*uParam3 = 157.3183f;
								break;
							
							case 3:
								*uParam2 = { 2766.238f, 4974.986f, 32.7262f };
								*uParam3 = 225.2302f;
								break;
							
							case 4:
								*uParam2 = { 2797.095f, 4923.666f, 33.1334f };
								*uParam3 = 34.0949f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1988.479f, -219.2565f, 42.6251f };
								*uParam3 = 325.2252f;
								break;
							
							case 1:
								*uParam2 = { -1567.165f, -555.6394f, 123.4493f };
								*uParam3 = 24.7442f;
								break;
							
							case 2:
								*uParam2 = { -713.2371f, 195.5196f, 149.754f };
								*uParam3 = 75.542f;
								break;
							
							case 3:
								*uParam2 = { -509.8761f, 1187.824f, 333.8082f };
								*uParam3 = 128.2553f;
								break;
							
							case 4:
								*uParam2 = { -1265.789f, 1493.722f, 203.9673f };
								*uParam3 = 187.8592f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1570.476f, 1366.453f, 127.6559f };
								*uParam3 = 115.4139f;
								break;
							
							case 1:
								*uParam2 = { -1581.127f, 955.6403f, 157.1481f };
								*uParam3 = 39.5031f;
								break;
							
							case 2:
								*uParam2 = { -1813.683f, 799.5704f, 137.5134f };
								*uParam3 = 188.8774f;
								break;
							
							case 3:
								*uParam2 = { -1912.698f, 509.3147f, 110.6628f };
								*uParam3 = 70.3926f;
								break;
							
							case 4:
								*uParam2 = { -2298.497f, 441.8974f, 173.4667f };
								*uParam3 = 1.8886f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("buzzard"):
			switch (Local_82.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1351.441f, -641.5107f, 83.2342f };
								*uParam3 = 186.1368f;
								break;
							
							case 1:
								*uParam2 = { 636.2282f, -434.6195f, 33.632f };
								*uParam3 = 203.6348f;
								break;
							
							case 2:
								*uParam2 = { 352.4392f, -590.8399f, 83.1657f };
								*uParam3 = 209.917f;
								break;
							
							case 3:
								*uParam2 = { 375.2908f, -1020.433f, 66.5363f };
								*uParam3 = 271.2396f;
								break;
							
							case 4:
								*uParam2 = { 345.1868f, -1426.622f, 85.1742f };
								*uParam3 = 284.6382f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1248.49f, -1131.338f, 37.2874f };
								*uParam3 = 153.8083f;
								break;
							
							case 1:
								*uParam2 = { 1396.414f, -1518.39f, 56.7703f };
								*uParam3 = 134.0967f;
								break;
							
							case 2:
								*uParam2 = { 972.8618f, -1464.828f, 30.3558f };
								*uParam3 = 0.609f;
								break;
							
							case 3:
								*uParam2 = { 935.6596f, -909.6719f, 39.5752f };
								*uParam3 = 271.1971f;
								break;
							
							case 4:
								*uParam2 = { 1156.687f, -768.8879f, 56.4831f };
								*uParam3 = 275.3533f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -137.5082f, -168.3033f, 102.7024f };
								*uParam3 = 160.3978f;
								break;
							
							case 1:
								*uParam2 = { -174.828f, -214.6927f, 156.6312f };
								*uParam3 = 258.2675f;
								break;
							
							case 2:
								*uParam2 = { 404.7129f, -24.3335f, 169.3952f };
								*uParam3 = 95.0683f;
								break;
							
							case 3:
								*uParam2 = { 168.3323f, 668.6285f, 215.7082f };
								*uParam3 = 172.5901f;
								break;
							
							case 4:
								*uParam2 = { -608.792f, 660.9065f, 165.6164f };
								*uParam3 = 207.7868f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -166.1217f, -214.9006f, 45.8637f };
								*uParam3 = 257.5103f;
								break;
							
							case 1:
								*uParam2 = { 33.7482f, -95.8814f, 55.3626f };
								*uParam3 = 73.0413f;
								break;
							
							case 2:
								*uParam2 = { 36.568f, 47.4427f, 71.3139f };
								*uParam3 = 158.1279f;
								break;
							
							case 3:
								*uParam2 = { -501.5253f, -67.3569f, 38.6901f };
								*uParam3 = 155.0279f;
								break;
							
							case 4:
								*uParam2 = { -430.6903f, -423.6864f, 31.7928f };
								*uParam3 = 352.977f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -468.3117f, 2034.281f, 225.8829f };
								*uParam3 = 183.5655f;
								break;
							
							case 1:
								*uParam2 = { -1572.228f, 838.9957f, 193.9097f };
								*uParam3 = 278.9509f;
								break;
							
							case 2:
								*uParam2 = { -175.6009f, -162.3506f, 102.7024f };
								*uParam3 = 12.7537f;
								break;
							
							case 3:
								*uParam2 = { 494.7073f, 706.4063f, 205.6965f };
								*uParam3 = 75.8614f;
								break;
							
							case 4:
								*uParam2 = { 821.3636f, 1308.909f, 372.5396f };
								*uParam3 = 113.467f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -803.5167f, 1295.326f, 257.4832f };
								*uParam3 = 209.5666f;
								break;
							
							case 1:
								*uParam2 = { -925.5961f, 1124.77f, 218.7065f };
								*uParam3 = 215.2912f;
								break;
							
							case 2:
								*uParam2 = { -404.5761f, 833.0574f, 224.6128f };
								*uParam3 = 218.3907f;
								break;
							
							case 3:
								*uParam2 = { -303.0683f, 1010.302f, 232.2905f };
								*uParam3 = 78.2628f;
								break;
							
							case 4:
								*uParam2 = { 56.7959f, 1080.651f, 220.6167f };
								*uParam3 = 18.8188f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 377.1972f, 4405.938f, 71.4024f };
								*uParam3 = 157.1671f;
								break;
							
							case 1:
								*uParam2 = { -210.0587f, 4223.346f, 53.7504f };
								*uParam3 = 206.9778f;
								break;
							
							case 2:
								*uParam2 = { -318.9394f, 3790.772f, 77.5459f };
								*uParam3 = 258.802f;
								break;
							
							case 3:
								*uParam2 = { -236.0281f, 3088.237f, 47.229f };
								*uParam3 = 304.6536f;
								break;
							
							case 4:
								*uParam2 = { 312.2873f, 2783.272f, 54.9498f };
								*uParam3 = 10.4182f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1111.445f, 3430.153f, 33.0281f };
								*uParam3 = 351.5004f;
								break;
							
							case 1:
								*uParam2 = { 940.4324f, 3582.793f, 32.0891f };
								*uParam3 = 71.8698f;
								break;
							
							case 2:
								*uParam2 = { -177.7739f, 3695.669f, 43.0132f };
								*uParam3 = 195.3546f;
								break;
							
							case 3:
								*uParam2 = { -241.2375f, 3905.453f, 37.3939f };
								*uParam3 = 207.658f;
								break;
							
							case 4:
								*uParam2 = { -77.8371f, 3185.706f, 37.1225f };
								*uParam3 = 280.9105f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 815.4335f, 1311.455f, 372.12f };
								*uParam3 = 258.8483f;
								break;
							
							case 1:
								*uParam2 = { 609.2955f, 205.9871f, 146.2221f };
								*uParam3 = 316.1886f;
								break;
							
							case 2:
								*uParam2 = { 1150.014f, 130.2795f, 90.7203f };
								*uParam3 = 340.2898f;
								break;
							
							case 3:
								*uParam2 = { 1876.22f, 285.6447f, 171.779f };
								*uParam3 = 18.4441f;
								break;
							
							case 4:
								*uParam2 = { 2105.892f, 1586.21f, 99.9212f };
								*uParam3 = 107.1124f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1199.866f, 1852.856f, 77.9143f };
								*uParam3 = 147.2836f;
								break;
							
							case 1:
								*uParam2 = { 1526.959f, 1717.267f, 108.9733f };
								*uParam3 = 116.5075f;
								break;
							
							case 2:
								*uParam2 = { 1962.413f, 1297.095f, 166.6211f };
								*uParam3 = 14.5081f;
								break;
							
							case 3:
								*uParam2 = { 958.8857f, 1717.174f, 163.6494f };
								*uParam3 = 280.2715f;
								break;
							
							case 4:
								*uParam2 = { 703.955f, 777.3345f, 204.8183f };
								*uParam3 = 308.1731f;
								break;
							}
					}
					break;
			}
			break;
	}
}

int func_87(int iParam0)
{
	if (Local_82.f_228[iParam0] > 0)
	{
		if (!func_22(&(Local_82.f_207[iParam0 /*2*/])))
		{
			func_20(&(Local_82.f_207[iParam0 /*2*/]), 0, 0);
			return 0;
		}
		else if (!func_19(&(Local_82.f_207[iParam0 /*2*/]), Local_82.f_228[iParam0], 0))
		{
			return 0;
		}
	}
	if (func_22(&(Local_82.f_186[iParam0 /*2*/])))
	{
		if (!func_19(&(Local_82.f_186[iParam0 /*2*/]), 20000, 0))
		{
			return 0;
		}
	}
	return 1;
}

var func_88()
{
	return Local_82.f_291[Local_82.f_279];
}

void func_89(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = 671199305;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0xB802750B43D4047C(1, &Var0, 3, iParam1);
	}
}

int func_90(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_91(iParam0) * 31);
}

int func_91(int iParam0)
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

void func_92(int iParam0)
{
	bool bVar0;
	struct<8> Var1;
	
	if (unk_0x8F678487EEBD8CE4(*iParam0))
	{
		unk_0x93370FA10F15BE44(iParam0);
		bVar0 = true;
	}
	if (unk_0x8F678487EEBD8CE4(iParam0->f_1))
	{
		unk_0x93370FA10F15BE44(&(iParam0->f_1));
		bVar0 = true;
	}
	if (unk_0xAE06B9E39EBDE049(iParam0->f_7))
	{
		if (!unk_0xA59F96B50B97E63C(iParam0->f_7, 0))
		{
			if (unk_0xD2160441D64A7913(iParam0->f_7))
			{
				unk_0x40144464F4EFCB95(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

int func_93(int iParam0)
{
	if (Local_82.f_27 == joaat("hydra"))
	{
		return 1;
	}
	if (unk_0xCE990E643CD9D0E5(Local_82.f_272[func_91(iParam0)], func_90(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_94(int iParam0)
{
	return func_95(iParam0);
}

int func_95(int iParam0)
{
	int iVar0;
	
	if (!unk_0x47DBF174A0CB9D55(unk_0x3C6C6327BA564AEE(Local_82.f_48[iParam0]), 0))
	{
		return 1;
	}
	iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x3C6C6327BA564AEE(Local_82.f_48[iParam0]), 0);
	if (unk_0xA59F96B50B97E63C(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_96(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x36FE6D3220816ADA(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]));
	if (iVar0 == joaat("savage"))
	{
		if (unk_0xCE990E643CD9D0E5(Local_82.f_271, iParam0))
		{
			return 1;
		}
	}
	else if (iVar0 == joaat("buzzard"))
	{
		if (unk_0xCE990E643CD9D0E5(Local_82.f_271, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (Local_82.f_27 != joaat("hydra"))
		{
			return 1;
		}
		if (Local_82.f_27 == joaat("hydra"))
		{
			if (unk_0xCE990E643CD9D0E5(Local_82.f_271, iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_97(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = 379276800;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0xB802750B43D4047C(1, &Var0, 3, iParam1);
	}
}

int func_98()
{
	return Local_82.f_280[Local_82.f_279];
}

void func_99(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = -1200143999;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xB802750B43D4047C(1, &Var0, 3, iParam0);
	}
}

int func_100(int iParam0)
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
			if (!unk_0xA59F96B50B97E63C(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), 0))
			{
				if (unk_0xBD2036D2FAD4E1E0(iVar2, unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), &uVar0))
				{
					return 1;
				}
			}
			else if (unk_0x469631D583428EDB(iVar2, unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), &uVar0))
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_101(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = -576874683;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		unk_0xB802750B43D4047C(1, &Var0, 3, iParam0);
	}
}

bool func_102(int iParam0)
{
	int iVar0;
	
	iVar0 = unk_0x36FE6D3220816ADA(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]));
	if (unk_0xF9C3E2B9AA9E2294(iVar0) || unk_0x442D6659150AF4B3(iVar0))
	{
		return !unk_0xA59F96B50B97E63C(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), 0);
	}
	return !unk_0xA59F96B50B97E63C(unk_0x770D3B2B4702434A(Local_82.f_73[iParam0]), 0);
}

int func_103()
{
	int iVar0;
	int iVar1;
	
	switch (Local_82.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_82.f_291[iVar0]);
				iVar0++;
			}
			break;
		
		case joaat("hydra"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_82.f_291[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_104(int iParam0)
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
			if (func_850(iVar2, 0, 0))
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

int func_105()
{
	if (func_748())
	{
		return Global_262145.f_11372;
	}
	return Global_262145.f_11095;
}

void func_106(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_107(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = -1949011582;
	Param0.f_1 = unk_0x460153A63B9477BC();
	if (!iParam13 == 0)
	{
		unk_0xB802750B43D4047C(1, &Param0, 14, iParam13);
	}
}

int func_108(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF1110FE23C67293A(iVar1);
		if (func_850(iVar2, 1, 0))
		{
			if (!unk_0xE0B3BC41DDA88DF0(unk_0x1FA7B77001D60F9D(iVar2), iParam0, 0))
			{
				if (unk_0x6CC163E30ECE0790(iVar2) == unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) || !bParam2)
				{
					if (iVar2 != unk_0x460153A63B9477BC() || iParam1)
					{
						unk_0xBE20AB8238688965(&uVar0, iVar1);
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_109(var uParam0)
{
	if (unk_0xF7DE07F319727299(uParam0))
	{
		return !func_110(unk_0x770D3B2B4702434A(uParam0));
	}
	return 0;
}

int func_110(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			return 1;
		}
		else if (!unk_0x80FF6C016CDB0FAF(iParam0, 0))
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

void func_111()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 20))
	{
		return;
	}
	if (!func_22(&uLocal_564))
	{
		func_20(&uLocal_564, 0, 0);
		return;
	}
	if (!func_19(&uLocal_564, 5000, 0))
	{
		return;
	}
	iVar0 = func_112();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_4(unk_0x770D3B2B4702434A(Local_82.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0, 1))
		{
			func_25(&(Local_82.f_7[iVar1]));
		}
		iVar1++;
	}
	unk_0xBE20AB8238688965(&(Local_82.f_3), 20);
}

int func_112()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_82.f_12 != 0)
	{
		return Local_82.f_12;
	}
	if (!func_748())
	{
		Local_82.f_12 = 1;
		return Local_82.f_12;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xF1110FE23C67293A(iVar0);
		if (unk_0x166E920FB00B2DBB(iVar2))
		{
			if (!func_16(iVar2, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 < func_114())
	{
		Local_82.f_12 = 2;
	}
	else if (iVar1 < func_113())
	{
		Local_82.f_12 = 3;
	}
	else
	{
		Local_82.f_12 = 4;
	}
	return Local_82.f_12;
}

int func_113()
{
	return Global_262145.f_11120;
}

int func_114()
{
	return Global_262145.f_11119;
}

void func_115()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iVar0]))
		{
			func_121(iVar0);
			func_120(iVar0, Local_82.f_256[iVar0], Local_82.f_22[iVar0]);
		}
		else if (Local_82.f_594[iVar0 /*4*/].f_1 != -1)
		{
			func_121(iVar0);
		}
		iVar0++;
	}
	func_119();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
		{
			iVar2 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar0));
			func_118(iVar0);
			if (Local_85[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_85[iVar0 /*18*/].f_9 > -1)
				{
					uVar1 = Local_85[iVar0 /*18*/].f_9;
					func_117(uVar1, Local_85[iVar0 /*18*/].f_8, iVar2);
				}
			}
			else
			{
				func_117(-1, -1, iVar2);
			}
		}
		else if (Local_82.f_465[iVar0 /*4*/].f_1 != -1)
		{
			func_118(iVar0);
		}
		iVar0++;
	}
	func_116();
}

void func_116()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_82.f_465[iVar1 /*4*/].f_1 > Local_82.f_465[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_82.f_465[iVar1 /*4*/].f_1;
					uVar3 = Local_82.f_465[iVar1 /*4*/];
					uVar4 = Local_82.f_465[iVar1 /*4*/].f_2;
					Local_82.f_465[iVar1 /*4*/].f_1 = Local_82.f_465[(iVar1 - 1) /*4*/].f_1;
					Local_82.f_465[iVar1 /*4*/] = Local_82.f_465[(iVar1 - 1) /*4*/];
					Local_82.f_465[iVar1 /*4*/].f_2 = Local_82.f_465[(iVar1 - 1) /*4*/].f_2;
					Local_82.f_465[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_82.f_465[(iVar1 - 1) /*4*/] = uVar3;
					Local_82.f_465[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_117(int iParam0, int iParam1, int iParam2)
{
	Local_82.f_465[iParam2 /*4*/] = iParam0;
	Local_82.f_465[iParam2 /*4*/].f_1 = iParam1;
	Local_82.f_465[iParam2 /*4*/].f_2 = iParam2;
}

void func_118(int iParam0)
{
	Local_82.f_465[iParam0 /*4*/] = -1;
	Local_82.f_465[iParam0 /*4*/].f_2 = -1;
	Local_82.f_465[iParam0 /*4*/].f_1 = -1;
}

void func_119()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 3;
	while (iVar0 >= 0)
	{
		iVar1 = 3;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_82.f_594[iVar1 /*4*/].f_1 > Local_82.f_594[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_82.f_594[iVar1 /*4*/].f_1;
					uVar3 = Local_82.f_594[iVar1 /*4*/];
					uVar4 = Local_82.f_594[iVar1 /*4*/].f_2;
					Local_82.f_594[iVar1 /*4*/].f_1 = Local_82.f_594[(iVar1 - 1) /*4*/].f_1;
					Local_82.f_594[iVar1 /*4*/] = Local_82.f_594[(iVar1 - 1) /*4*/];
					Local_82.f_594[iVar1 /*4*/].f_2 = Local_82.f_594[(iVar1 - 1) /*4*/].f_2;
					Local_82.f_594[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_82.f_594[(iVar1 - 1) /*4*/] = uVar3;
					Local_82.f_594[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_120(int iParam0, var uParam1, var uParam2)
{
	Local_82.f_594[iParam0 /*4*/] = iParam0;
	Local_82.f_594[iParam0 /*4*/].f_1 = uParam1;
	Local_82.f_594[iParam0 /*4*/].f_2 = uParam2;
}

void func_121(int iParam0)
{
	Local_82.f_594[iParam0 /*4*/] = -1;
	Local_82.f_594[iParam0 /*4*/].f_1 = -1;
	Local_82.f_594[iParam0 /*4*/].f_2 = -1;
}

int func_122()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_112();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_123(iVar1))
		{
			func_106(&(Local_82.f_5));
			return 0;
		}
		if (!unk_0xCE990E643CD9D0E5(Local_82.f_13, iVar1))
		{
			func_106(&(Local_82.f_5));
			return 0;
		}
		else if (func_4(unk_0x770D3B2B4702434A(Local_82.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0, 1))
		{
			func_106(&(Local_82.f_5));
			return 0;
		}
		iVar1++;
	}
	if (!func_22(&(Local_82.f_5)))
	{
		func_20(&(Local_82.f_5), 0, 0);
	}
	else if (func_19(&(Local_82.f_5), 1500, 0))
	{
		return 1;
	}
	return 0;
}

int func_123(int iParam0)
{
	if (func_109(Local_82.f_7[iParam0]))
	{
		if (unk_0x10D3F7E169A49C44(unk_0x770D3B2B4702434A(Local_82.f_7[iParam0]), -1, 0) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_124()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_748())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iVar0]))
		{
			if (func_109(Local_82.f_7[iVar0]))
			{
				iVar1++;
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < Local_82.f_12)
	{
		Local_82.f_12 = iVar1;
	}
	if (Local_82.f_12 <= 1)
	{
		unk_0xD2459066EA58CE43(&(Local_82.f_3), 8);
		if (!func_109(Local_82.f_7[0]))
		{
			if (func_109(Local_82.f_7[iVar2]))
			{
				func_25(&(Local_82.f_7[0]));
				Local_82.f_7[0] = Local_82.f_7[iVar2];
			}
		}
	}
}

void func_125()
{
	bool bVar0;
	
	if (!func_748())
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[0]))
		{
			if (unk_0x36FE6D3220816ADA(unk_0x770D3B2B4702434A(Local_82.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_82.f_15 != false;
			}
			else
			{
				bVar0 = Local_82.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = unk_0xCE990E643CD9D0E5(Local_82.f_3, 9);
	}
	if (bVar0)
	{
		if (Local_82.f_413 == -1)
		{
			Local_82.f_413 = func_127();
		}
		if (!func_22(&(Local_82.f_326)))
		{
			func_20(&(Local_82.f_326), 0, 0);
		}
		else if (!unk_0xCE990E643CD9D0E5(Local_82.f_3, 4))
		{
			if ((Local_82.f_413 - func_126(&(Local_82.f_326), 0, 0)) < 0)
			{
				unk_0xBE20AB8238688965(&(Local_82.f_3), 4);
			}
		}
	}
	else if (func_22(&(Local_82.f_326)))
	{
		func_106(&(Local_82.f_326));
		Local_82.f_413 = (Local_82.f_413 - func_126(&(Local_82.f_326), 0, 0));
	}
}

int func_126(var uParam0, bool bParam1, bool bParam2)
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

var func_127()
{
	if (func_748())
	{
		return Global_262145.f_11382;
	}
	return Global_262145.f_11102;
}

void func_128()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	bVar5 = false;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_98[iVar0] = 0;
		iLocal_84[iVar0] = -2;
		iLocal_99[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	if (Local_82 != 4)
	{
		iLocal_89 = 0;
		while (iLocal_89 < unk_0xEFA28384DDD283E1())
		{
			if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iLocal_89)))
			{
				iVar7 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iLocal_89));
				if (!func_16(iVar7, 0))
				{
					if (Local_85[iLocal_89 /*18*/].f_1 != 0)
					{
						iVar2++;
					}
					iVar1++;
					iVar0 = 0;
					while (iVar0 < 4)
					{
						func_135(iLocal_89, iVar0, iVar7);
						iVar0++;
					}
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 5)
					{
						func_134(iLocal_89, iVar0);
						iVar0++;
					}
					if (!unk_0xCE990E643CD9D0E5(Local_82.f_3, 14))
					{
						if (!unk_0xCE990E643CD9D0E5(Local_85[iLocal_89 /*18*/].f_2, 9))
						{
							iVar6++;
						}
					}
					iVar0 = 0;
					while (iVar0 <= 23)
					{
						func_133(iLocal_89, iVar0);
						iVar0++;
					}
					if (!bVar5)
					{
						if (!unk_0xCE990E643CD9D0E5(Local_85[iLocal_89 /*18*/].f_2, 8))
						{
							bVar5 = true;
						}
					}
					func_131(iLocal_89, iVar7);
					if (func_850(iVar7, 1, 1))
					{
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (Local_82.f_17[iVar0] == func_5())
							{
								if (unk_0xCE990E643CD9D0E5(Local_85[iLocal_89 /*18*/].f_2, (0 + iVar0)))
								{
									Local_82.f_17[iVar0] = iVar7;
								}
							}
							else if (Local_82.f_17[iVar0] == iVar7 && Local_82.f_241 == 0)
							{
								if (!unk_0xCE990E643CD9D0E5(Local_85[iLocal_89 /*18*/].f_2, (0 + iVar0)))
								{
									Local_82.f_17[iVar0] = func_5();
								}
							}
							iVar0++;
						}
					}
				}
			}
			iLocal_89++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0xCE990E643CD9D0E5(Local_82.f_13, iVar0))
		{
			if (iLocal_98[iVar0] == func_130() && func_123(iVar0))
			{
				unk_0xBE20AB8238688965(&(Local_82.f_13), iVar0);
			}
			if (!unk_0xCE990E643CD9D0E5(Local_82.f_14, iVar0))
			{
				if (iLocal_98[iVar0] >= 1 && func_123(iVar0))
				{
					unk_0xBE20AB8238688965(&(Local_82.f_14), iVar0);
				}
			}
			else if (iLocal_98[iVar0] == 0 || !func_123(iVar0))
			{
				if (unk_0xCE990E643CD9D0E5(Local_82.f_14, iVar0))
				{
					unk_0xD2459066EA58CE43(&(Local_82.f_14), iVar0);
					if (iLocal_98[iVar0] == 0)
					{
						if (Local_82.f_241 >= 1)
						{
							if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iVar0]))
							{
								func_25(&(Local_82.f_7[iVar0]));
							}
						}
					}
				}
			}
			if (!unk_0xCE990E643CD9D0E5(Local_82.f_15, iVar0) && func_123(iVar0))
			{
				if (iLocal_98[iVar0] >= 2)
				{
					unk_0xBE20AB8238688965(&(Local_82.f_15), iVar0);
				}
			}
			else if (iLocal_98[iVar0] <= 1 || !func_123(iVar0))
			{
				if (unk_0xCE990E643CD9D0E5(Local_82.f_15, iVar0))
				{
					unk_0xD2459066EA58CE43(&(Local_82.f_15), iVar0);
				}
			}
		}
		else if (iLocal_98[iVar0] < func_130() || !func_123(iVar0))
		{
			unk_0xD2459066EA58CE43(&(Local_82.f_13), iVar0);
		}
		if (Local_82.f_266[iVar0] != iLocal_98[iVar0])
		{
			Local_82.f_266[iVar0] = iLocal_98[iVar0];
			if (Local_82.f_241 == 1)
			{
				if (Local_82.f_266[iVar0] == 0)
				{
					if (!unk_0xCE990E643CD9D0E5(Local_82.f_616, iVar0))
					{
						unk_0xBE20AB8238688965(&(Local_82.f_616), iVar0);
					}
				}
			}
		}
		if (Local_82.f_241 == 0)
		{
			if (func_748())
			{
				if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iVar0]))
				{
					iVar3 = unk_0x36FE6D3220816ADA(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]));
					if (iLocal_98[iVar0] >= func_129(iVar3) && func_123(iVar0))
					{
						iLocal_99[iVar0] = 1;
					}
				}
			}
		}
		if (Local_82.f_241 == 1)
		{
			if (Local_82.f_256[iVar0] != iLocal_84[iVar0])
			{
				if (iLocal_84[iVar0] >= 0)
				{
					if (iLocal_84[iVar0] > Local_82.f_256[iVar0])
					{
						Local_82.f_256[iVar0] = iLocal_84[iVar0];
						bVar4 = true;
					}
					else
					{
						iVar8 = (Local_82.f_256[iVar0] - iLocal_84[iVar0]);
						if (Local_82.f_261[iVar0] != iVar8)
						{
							Local_82.f_261[iVar0] = iVar8;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar4)
	{
		func_115();
	}
	if (!unk_0xCE990E643CD9D0E5(Local_82.f_3, 11))
	{
		if (!bVar5)
		{
			unk_0xBE20AB8238688965(&(Local_82.f_3), 11);
		}
	}
	iVar0 = 0;
	iVar9 = 0;
	if (Local_82.f_241 == 0)
	{
		if (func_748())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (iLocal_99[iVar0])
				{
					iVar9++;
				}
				iVar0++;
			}
			if (!unk_0xCE990E643CD9D0E5(Local_82.f_3, 9))
			{
				if (iVar9 >= 2)
				{
					unk_0xBE20AB8238688965(&(Local_82.f_3), 9);
				}
			}
			else if (iVar9 < 2)
			{
				unk_0xD2459066EA58CE43(&(Local_82.f_3), 9);
			}
		}
	}
	if (Local_82.f_241 == 0)
	{
		if (!func_22(&(Local_82.f_360)))
		{
			func_20(&(Local_82.f_360), 0, 0);
		}
		else if (func_19(&(Local_82.f_360), 5000, 0))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_82.f_3, 14))
			{
				if (func_748())
				{
					if (Local_82.f_27 == joaat("valkyrie"))
					{
						if (iVar6 < 4)
						{
							unk_0xBE20AB8238688965(&(Local_82.f_3), 14);
						}
					}
					else if (iVar6 < 2)
					{
						unk_0xBE20AB8238688965(&(Local_82.f_3), 14);
					}
				}
				else if (Local_82.f_27 == joaat("valkyrie"))
				{
					if (iVar6 < 2)
					{
						unk_0xBE20AB8238688965(&(Local_82.f_3), 14);
					}
				}
				else if (iVar6 < 1)
				{
					unk_0xBE20AB8238688965(&(Local_82.f_3), 14);
				}
			}
		}
	}
	if (iVar1 > Local_82.f_614)
	{
		Local_82.f_614 = iVar1;
	}
	else
	{
		Local_82.f_613 = (Local_82.f_614 - iVar1);
	}
	if (iVar2 > Local_82.f_615)
	{
		Local_82.f_615 = iVar2;
	}
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case joaat("rhino"):
			return 1;
		
		case joaat("hydra"):
			return 1;
		
		case joaat("savage"):
			return 1;
		
		case joaat("valkyrie"):
			return 2;
		
		case joaat("buzzard"):
			return 1;
		
		default:
	}
	return 99;
}

int func_130()
{
	return Local_82.f_28;
}

void func_131(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (!unk_0xCE990E643CD9D0E5(Local_82.f_16, iParam0))
	{
		if (unk_0xCE990E643CD9D0E5(Local_85[iParam0 /*18*/].f_2, 12))
		{
			func_132(iParam1, 1);
			unk_0xBE20AB8238688965(&(Local_82.f_16), iParam0);
		}
		else if (Local_82.f_241 >= 1)
		{
			if (Local_85[iParam0 /*18*/].f_1 == 0)
			{
				func_132(iParam1, 1);
				unk_0xBE20AB8238688965(&(Local_82.f_16), iParam0);
			}
			else if (Local_85[iParam0 /*18*/].f_17 >= 2)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iVar1]))
					{
						if (func_109(Local_82.f_7[iVar1]))
						{
							if (unk_0xE0B3BC41DDA88DF0(unk_0x1FA7B77001D60F9D(iParam1), unk_0x770D3B2B4702434A(Local_82.f_7[iVar1]), 0))
							{
								bVar0 = true;
							}
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_132(iParam1, 1);
					unk_0xBE20AB8238688965(&(Local_82.f_16), iParam0);
				}
			}
		}
	}
	else if (Local_82.f_241 < 1)
	{
		if (!unk_0xCE990E643CD9D0E5(Local_85[iParam0 /*18*/].f_2, 12))
		{
			func_132(iParam1, 0);
			unk_0xD2459066EA58CE43(&(Local_82.f_16), iParam0);
		}
	}
}

void func_132(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iVar0]))
		{
			unk_0xA33CABD77BE9CAC1(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), iParam0, iParam1);
		}
		iVar0++;
	}
}

void func_133(int iParam0, int iParam1)
{
	if (!unk_0xCE990E643CD9D0E5(Local_82.f_272[func_91(iParam1)], func_90(iParam1)))
	{
		if (unk_0xCE990E643CD9D0E5(Local_85[iParam0 /*18*/].f_3[func_91(iParam1)], func_90(iParam1)))
		{
			unk_0xBE20AB8238688965(&(Local_82.f_272[func_91(iParam1)]), func_90(iParam1));
			if (Local_85[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (unk_0x3D70CCF2C9B362CD(Local_82.f_48[iParam1]))
			{
				if (!func_31(Local_82.f_48[iParam1]))
				{
					if (!func_94(iParam1))
					{
						unk_0xD2459066EA58CE43(&(Local_82.f_272[func_91(iParam1)]), func_90(iParam1));
					}
					else if (!unk_0x47DBF174A0CB9D55(unk_0x3C6C6327BA564AEE(Local_82.f_48[iParam1]), 0))
					{
						if (iParam1 >= 20)
						{
							unk_0xD2459066EA58CE43(&(Local_82.f_272[func_91(iParam1)]), func_90(iParam1));
						}
					}
				}
			}
		}
	}
}

void func_134(int iParam0, int iParam1)
{
	if (!unk_0xCE990E643CD9D0E5(Local_82.f_271, iParam1))
	{
		if (unk_0xCE990E643CD9D0E5(Local_85[iParam0 /*18*/].f_6, iParam1))
		{
			unk_0xBE20AB8238688965(&(Local_82.f_271), iParam1);
			if (Local_85[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (unk_0xCE990E643CD9D0E5(Local_82.f_303, iParam1))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_82.f_253, iParam1))
				{
					Local_82.f_251 = (Local_82.f_251 - 1);
					if (func_98() > 1)
					{
						if (Local_82.f_252 > 0)
						{
							Local_82.f_302++;
							func_97(iParam1, func_104(1));
						}
					}
					unk_0xBE20AB8238688965(&(Local_82.f_253), iParam1);
				}
				if (func_22(&(Local_82.f_336[iParam1 /*2*/])))
				{
					func_106(&(Local_82.f_336[iParam1 /*2*/]));
				}
				func_25(&(Local_82.f_73[iParam1]));
				unk_0xD2459066EA58CE43(&(Local_82.f_303), iParam1);
			}
		}
	}
}

void func_135(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCE990E643CD9D0E5(Local_85[iParam0 /*18*/].f_1, iParam1))
	{
		iLocal_98[iParam1]++;
		if (iLocal_84[iParam1] < 0)
		{
			if (Local_85[iParam0 /*18*/].f_8 >= 0)
			{
				if (Local_82.f_261[iParam1] > 0)
				{
					iLocal_84[iParam1] = Local_82.f_261[iParam1];
				}
				else
				{
					iLocal_84[iParam1] = 0;
				}
			}
		}
		iLocal_84[iParam1] = (iLocal_84[iParam1] + Local_85[iParam0 /*18*/].f_8);
		if (Local_82.f_241 >= 1)
		{
			if (Local_82.f_22[iParam1] == func_5())
			{
				if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iParam1]))
				{
					if (func_109(Local_82.f_7[iParam1]))
					{
						iVar1 = unk_0x10D3F7E169A49C44(unk_0x770D3B2B4702434A(Local_82.f_7[iParam1]), -1, 0);
						if (iVar1 != 0)
						{
							if (unk_0xD0390A93AF3907B8(iVar1))
							{
								iVar0 = unk_0xE4400E48E081F17A(iVar1);
								if (iVar0 == iParam2)
								{
									Local_82.f_22[iParam1] = iParam2;
									func_115();
								}
							}
						}
					}
				}
			}
		}
		if (!unk_0xCE990E643CD9D0E5(Local_82.f_319, iParam1))
		{
			if (Local_85[iParam0 /*18*/].f_10 > -1)
			{
				unk_0xBE20AB8238688965(&(Local_82.f_319), iParam1);
				func_20(&(Local_82.f_349[iParam1 /*2*/]), 0, 0);
			}
		}
	}
	if (Local_82.f_22[iParam1] != func_5())
	{
		if (!unk_0x166E920FB00B2DBB(Local_82.f_22[iParam1]))
		{
			iVar0 = func_136(iParam1, 1);
			if (iVar0 != func_5())
			{
				Local_82.f_22[iParam1] = iVar0;
			}
			else
			{
				Local_82.f_22[iParam1] = func_5();
			}
		}
		else if (func_16(Local_82.f_22[iParam1], 0))
		{
			Local_82.f_22[iParam1] = func_5();
			func_115();
		}
		else
		{
			iVar1 = unk_0x1FA7B77001D60F9D(Local_82.f_22[iParam1]);
			if (!unk_0x5AEB5DDFFAD43CA5(iVar1))
			{
				if (func_109(Local_82.f_7[iParam1]))
				{
					if (!unk_0xE0B3BC41DDA88DF0(iVar1, unk_0x770D3B2B4702434A(Local_82.f_7[iParam1]), 0))
					{
						iVar0 = func_136(iParam1, 1);
						if (iVar0 != func_5())
						{
							Local_82.f_22[iParam1] = iVar0;
						}
						else
						{
							Local_82.f_22[iParam1] = func_5();
						}
					}
				}
			}
		}
	}
}

int func_136(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_5();
	if (iParam0 >= 0)
	{
		iVar3 = 0;
		while (iVar3 < unk_0xEFA28384DDD283E1())
		{
			if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar3)))
			{
				if (iVar0 == func_5())
				{
					if (Local_85[iVar3 /*18*/].f_17 == 1)
					{
						if (unk_0xCE990E643CD9D0E5(Local_85[iVar3 /*18*/].f_1, iParam0))
						{
							if (!bParam1)
							{
								iVar0 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar3));
							}
							else
							{
								iVar1 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar3));
								if (func_109(Local_82.f_7[iParam0]))
								{
									iVar2 = unk_0x1FA7B77001D60F9D(iVar1);
									if (!unk_0x5AEB5DDFFAD43CA5(iVar2))
									{
										if (unk_0xE0B3BC41DDA88DF0(iVar2, unk_0x770D3B2B4702434A(Local_82.f_7[iParam0]), 0))
										{
											iVar0 = iVar1;
										}
									}
								}
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	return iVar0;
}

void func_137(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	
	Var0.x = -438498801;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = iParam0;
	iVar1 = func_138(1, 1);
	if (!iVar1 == 0)
	{
		unk_0xB802750B43D4047C(1, &Var0, 3, iVar1);
	}
}

var func_138(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF1110FE23C67293A(iVar1);
		if (func_850(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x460153A63B9477BC() || iParam0)
			{
				if (bParam1)
				{
					unk_0xBE20AB8238688965(&uVar0, iVar1);
				}
				else if (!func_16(iVar2, 0))
				{
					unk_0xBE20AB8238688965(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_139(int iParam0, int iParam1, int iParam2, int iParam3)
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
		case 150:
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

int func_140()
{
	func_112();
	if (func_70(Local_82.f_27))
	{
		if (func_141())
		{
			unk_0x74528AC0906CBABE(Local_82.f_27);
			return 1;
		}
	}
	return 0;
}

int func_141()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < Local_82.f_12)
	{
		if (!unk_0xF7DE07F319727299(Local_82.f_7[iVar0]))
		{
			if (func_70(Local_82.f_27))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_82.f_244, iVar0))
				{
					unk_0x555EE41D7C7078E6(Local_82.f_30[iVar0 /*3*/], 5f, 1, 0, 0, true);
					unk_0xBE20AB8238688965(&(Local_82.f_244), iVar0);
				}
				if (func_82(&(Local_82.f_7[iVar0]), Local_82.f_27, Local_82.f_30[iVar0 /*3*/], Local_82.f_43[iVar0], 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					unk_0xE8E8B0AB0DDA30F4(unk_0x62D2FF718BC7717D(Local_82.f_7[iVar0]), 1, 1);
					unk_0x5DC21979EC6C531F(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 1);
					unk_0x54907AF8D51E6B48(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 1);
					unk_0x336658B90E275904(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 0);
					unk_0x74172B5AFD503628(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 0, 0);
					unk_0x6A8F948698B360B4(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), false);
					unk_0x9729E0DCF1C3C9A9(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 1);
					unk_0xAFB24BC90ACA6210(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]));
					unk_0xC160551F55D6365A(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), true, 1, 0);
					unk_0x7C47E49129337557(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 1);
					unk_0x22BA2B3490860247(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 0);
					if (unk_0x442D6659150AF4B3(Local_82.f_27) || unk_0xF9C3E2B9AA9E2294(Local_82.f_27))
					{
						unk_0xF7F003F7673B7CDD(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 0);
						if (unk_0x442D6659150AF4B3(Local_82.f_27))
						{
							fVar1 = to_float(func_144());
						}
						else if (unk_0xF9C3E2B9AA9E2294(Local_82.f_27))
						{
							fVar1 = to_float(func_143());
						}
						else
						{
							fVar1 = to_float(func_142());
						}
						unk_0x697DA7132EE43ABC(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), round(fVar1), 0);
						unk_0x16E50383DEE2A560(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), round(fVar1));
						unk_0x4A9F6CA267EF14FE(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), fVar1);
						unk_0x98274131166DCEF5(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), fVar1);
						unk_0x0FC504FAF5EB94FB(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), fVar1);
						if (unk_0xF9C3E2B9AA9E2294(Local_82.f_27))
						{
							unk_0xC59575D2040DFC11(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 1);
						}
						if (unk_0x442D6659150AF4B3(Local_82.f_27))
						{
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							unk_0x5A697853E59DDF86(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), fVar1);
							unk_0x3EF27175A7AD5150(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), fVar1);
						}
					}
					else
					{
						if (unk_0x442D6659150AF4B3(Local_82.f_27))
						{
							fVar1 = to_float(func_144());
						}
						else if (unk_0xF9C3E2B9AA9E2294(Local_82.f_27))
						{
							fVar1 = to_float(func_143());
						}
						else
						{
							fVar1 = to_float(func_142());
						}
						unk_0x697DA7132EE43ABC(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), round(fVar1), 0);
						unk_0x16E50383DEE2A560(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), round(fVar1));
						unk_0x4A9F6CA267EF14FE(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), fVar1);
						unk_0x98274131166DCEF5(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), fVar1);
						unk_0x0FC504FAF5EB94FB(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), fVar1);
					}
					unk_0xAEBB7D261688301C(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 1);
					if (Local_82.f_27 == joaat("savage"))
					{
					}
					if (unk_0x6844807B17DC2DFC("Not_Allow_As_Saved_Veh", 3))
					{
						unk_0x00AF6A2AAFB41525(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), "Not_Allow_As_Saved_Veh", 1);
					}
					if (unk_0x6844807B17DC2DFC("MPBitset", 3))
					{
						if (unk_0x871819940BD2E434(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), "MPBitset"))
						{
							iVar2 = unk_0x8C0800114C2864BE(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), "MPBitset");
						}
						unk_0xBE20AB8238688965(&iVar2, 10);
						unk_0xBE20AB8238688965(&iVar2, 15);
						unk_0x00AF6A2AAFB41525(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), "MPBitset", iVar2);
					}
					unk_0x45ADCE43E87D2472(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 0, iLocal_95);
					iVar3 = 0;
					while (iVar3 < 32)
					{
						unk_0x45ADCE43E87D2472(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 0, Global_1574973[iVar3]);
						iVar3++;
					}
					unk_0x40AC0CCFE1307C5A(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 0, 0);
					unk_0xD9F5F4019E9DF2FF(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 0);
					unk_0x0312E5501F93E5AB(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 1);
					unk_0xD4D34706EA3EAF64(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), false);
					unk_0x131A211B8EEF6BF0(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 0);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_82.f_12)
	{
		if (!unk_0xF7DE07F319727299(Local_82.f_7[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

var func_142()
{
	if (func_748())
	{
		return Global_262145.f_11376;
	}
	return Global_262145.f_11115;
}

var func_143()
{
	if (func_748())
	{
		return Global_262145.f_11377;
	}
	return Global_262145.f_11116;
}

var func_144()
{
	if (func_748())
	{
		return Global_262145.f_11375;
	}
	return Global_262145.f_11114;
}

bool func_145()
{
	int iVar0;
	int iVar1;
	
	if (!func_22(&(Local_82.f_362)))
	{
		func_20(&(Local_82.f_362), 0, 0);
		return 0;
	}
	else if (!func_19(&(Local_82.f_362), 3000, 0))
	{
		return 0;
	}
	if (!unk_0xCE990E643CD9D0E5(Local_82.f_3, 10))
	{
		if (func_159(&iVar0))
		{
			if (iVar0 < func_158())
			{
				unk_0xBE20AB8238688965(&(Local_82.f_3), 10);
			}
			else
			{
				iVar1 = unk_0x344C570D6F8700DF(0, 100);
				if ((IntToFloat(iVar1) < (50f * Global_262145.f_11370) && !Global_262145.f_11368) || Global_262145.f_11369)
				{
					unk_0xBE20AB8238688965(&(Local_82.f_3), 8);
					unk_0xBE20AB8238688965(&(Local_82.f_3), 10);
				}
				else
				{
					unk_0xBE20AB8238688965(&(Local_82.f_3), 10);
				}
			}
		}
	}
	if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 10))
	{
		if (Local_82.f_12 == 0)
		{
			func_112();
			return 0;
		}
		if (!unk_0xCE990E643CD9D0E5(Local_82.f_3, 13))
		{
			if (func_154())
			{
				if (!func_152(129, Local_82.f_1, Local_82.f_2, 0))
				{
					if (func_146())
					{
						unk_0xBE20AB8238688965(&(Local_82.f_3), 13);
					}
					else
					{
						Local_82.f_29 = -1;
					}
				}
				else
				{
					Local_82.f_29 = -1;
				}
			}
		}
	}
	return unk_0xCE990E643CD9D0E5(Local_82.f_3, 13);
}

int func_146()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_112();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_147(Local_82.f_30[iVar1 /*3*/], 1125515264))
		{
			return 0;
		}
		if (!func_55(Local_82.f_30[iVar1 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_147(struct<3> Param0, float fParam1)
{
	int iVar0[32];
	int iVar1;
	int iVar2;
	bool bVar3;
	struct<3> Var4;
	struct<3> Var5;
	int iVar6;
	struct<10> Var7;
	int iVar8;
	
	if (Global_2424339.f_327.f_225 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = 0;
	bVar3 = true;
	while (bVar3)
	{
		if (Global_2424339.f_327[iVar2 /*7*/] != -1)
		{
			iVar0[iVar1] = unk_0x856D5567211886A2(&(Global_2424339.f_327[iVar2 /*7*/].f_1));
			iVar1++;
			if (iVar1 == Global_2424339.f_327.f_225)
			{
				bVar3 = false;
			}
		}
		iVar2++;
		if (iVar2 >= 32)
		{
			bVar3 = false;
		}
	}
	if (iVar1 == 0)
	{
		return 0;
	}
	Var4 = { 0f, 0f, 0f };
	Var5 = { Param0 };
	iVar6 = 0;
	Var7.f_1 = -1;
	Var7.f_2 = -1;
	Var7.f_9 = -1;
	iVar8 = 0;
	iVar2 = 0;
	while (iVar2 < Global_1311741)
	{
		if (unk_0xCE990E643CD9D0E5(Global_2359721[iVar2 /*26*/].f_12, 11))
		{
			Var4 = { Global_2359721[iVar2 /*26*/].f_3 };
			Var5.f_2 = Var4.f_2;
			if (unk_0x272784C60C397DB6(Var4, Var5, 1) < fParam1)
			{
				Var7 = { Global_2359721[iVar2 /*26*/].f_15 };
				iVar8 = func_148(&Var7);
				iVar6 = 0;
				while (iVar6 < iVar1)
				{
					if (iVar8 == iVar0[iVar6])
					{
						return 1;
					}
					iVar6++;
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_148(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_149(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar1 /*13*/].f_3;
		
		case 62:
			return Global_917806.f_9405[iVar1 /*13*/].f_3;
		
		default:
	}
	return iVar0;
}

int func_149(var uParam0)
{
	int iVar0;
	
	if (unk_0x7BCC91F3C1CF24E8(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_151(uParam0->f_1))
	{
		if (func_150(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (unk_0xCE990E643CD9D0E5(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0xF005CCA4263DF67F(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xCE990E643CD9D0E5(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1218)
			{
				if (unk_0xCE990E643CD9D0E5(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0xF005CCA4263DF67F(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (unk_0xCE990E643CD9D0E5(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (unk_0xF005CCA4263DF67F(&(Global_917806.f_604[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!unk_0xCE990E643CD9D0E5(Global_917806.f_604[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 100)
			{
				if (unk_0xCE990E643CD9D0E5(Global_917806.f_604[iVar0 /*88*/].f_76, 13))
				{
					if (unk_0xF005CCA4263DF67F(&(Global_917806.f_604[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == unk_0x460153A63B9477BC())
	{
		if (unk_0xCE990E643CD9D0E5(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (unk_0xF005CCA4263DF67F(&(Global_939452.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (unk_0xCE990E643CD9D0E5(Global_939452.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (unk_0xCE990E643CD9D0E5(Global_939452.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (unk_0xF005CCA4263DF67F(&(Global_939452.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_150(var uParam0)
{
	if (Global_2398103)
	{
		if (unk_0xF005CCA4263DF67F(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_151(int iParam0)
{
	return iParam0 == 9999;
}

int func_152(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
		case 236:
		case 150:
			return 0;
		
		default:
	}
	iVar1 = func_153(iParam0);
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 < Global_262145.f_8113)
		{
			if (Global_2508189.f_136[iVar0 /*2*/] == iVar1 && Global_2508189.f_136[iVar0 /*2*/].f_1 == func_139(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_153(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		case 236:
			return 19;
		
		case 150:
			return 20;
		
		default:
	}
	return -1;
}

int func_154()
{
	if (func_156(&(Local_82.f_27)))
	{
		if (Local_82.f_4)
		{
			func_155();
		}
		func_40();
		return 1;
	}
	return 0;
}

void func_155()
{
	Global_1673529 = 1;
	if (!unk_0xCE990E643CD9D0E5(Global_2549478, 0))
	{
		unk_0xBE20AB8238688965(&Global_2549478, 0);
		unk_0xBE20AB8238688965(&Global_1673530, 0);
	}
	if (!unk_0xCE990E643CD9D0E5(Global_2549478, 1))
	{
		unk_0xBE20AB8238688965(&Global_2549478, 1);
		unk_0xBE20AB8238688965(&Global_1673530, 1);
	}
	if (!unk_0xCE990E643CD9D0E5(Global_2549478, 5))
	{
		unk_0xBE20AB8238688965(&Global_2549478, 5);
		unk_0xBE20AB8238688965(&Global_1673530, 5);
	}
	if (unk_0x60C47897C07F44B1(-355737150))
	{
		unk_0xDC5C33A98881772F(-355737150, 0, 0, 0);
	}
	if (unk_0x60C47897C07F44B1(-580979506))
	{
		unk_0xDC5C33A98881772F(-580979506, 0, 0, 0);
	}
	if (unk_0x60C47897C07F44B1(-1426452475))
	{
		unk_0xDC5C33A98881772F(-1426452475, 0, 0, 0);
	}
	if (unk_0x60C47897C07F44B1(745417724))
	{
		unk_0xDC5C33A98881772F(745417724, 0, 0, 0);
	}
	if (unk_0x60C47897C07F44B1(-1305304906))
	{
		unk_0xDC5C33A98881772F(-1305304906, 0, 0, 0);
	}
	if (unk_0x60C47897C07F44B1(-1543175077))
	{
		unk_0xDC5C33A98881772F(-1543175077, 0, 0, 0);
	}
	if (unk_0x60C47897C07F44B1(-811770997))
	{
		unk_0xDC5C33A98881772F(-811770997, 0, 0, 0);
	}
}

int func_156(var uParam0)
{
	int iVar0;
	
	iVar0 = unk_0x344C570D6F8700DF(0, 5);
	switch (iVar0)
	{
		case 0:
			if (!func_157(joaat("rhino")))
			{
				Local_82.f_28 = 1;
				*uParam0 = joaat("rhino");
				return 1;
			}
			break;
		
		case 1:
			if (!func_157(joaat("hydra")))
			{
				Local_82.f_28 = 1;
				*uParam0 = joaat("hydra");
				Local_82.f_4 = 1;
				return 1;
			}
			break;
		
		case 2:
			if (!func_157(joaat("savage")))
			{
				Local_82.f_28 = 4;
				*uParam0 = joaat("savage");
				Local_82.f_4 = 1;
				return 1;
			}
			break;
		
		case 3:
			if (!func_157(joaat("valkyrie")))
			{
				Local_82.f_28 = 4;
				*uParam0 = joaat("valkyrie");
				return 1;
			}
			break;
		
		case 4:
			if (!func_157(joaat("buzzard")))
			{
				Local_82.f_28 = 4;
				*uParam0 = joaat("buzzard");
				return 1;
			}
			break;
	}
	return 0;
}

int func_157(int iParam0)
{
	if (!func_748())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_11104;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_11106;
				break;
			
			case joaat("savage"):
				return Global_262145.f_11105;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_11108;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_11107;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_11384;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_11386;
				break;
			
			case joaat("savage"):
				return Global_262145.f_11385;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_11388;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_11387;
				break;
			}
	}
	return 0;
}

int func_158()
{
	return Global_262145.f_11118;
}

int func_159(var uParam0)
{
	int iVar0;
	
	if (!func_22(&(Local_82.f_334)))
	{
		func_20(&(Local_82.f_334), 0, 0);
	}
	else if (func_19(&(Local_82.f_334), 3000, 0))
	{
		iVar0 = 0;
		while (iVar0 < unk_0xEFA28384DDD283E1())
		{
			if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
			{
				if (!func_16(unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar0)), 0))
				{
					if (!unk_0xCE990E643CD9D0E5(Local_85[iVar0 /*18*/].f_2, 7))
					{
						*uParam0++;
					}
				}
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

int func_160(var uParam0)
{
	if (uParam0->f_1)
	{
		if (unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_161(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (unk_0xAFF96FDC3971E7EA())
		{
			func_20(uParam0, 0, 0);
		}
	}
}

void func_162()
{
	struct<3> Var0;
	
	if (iLocal_571 < 4)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iLocal_571]))
		{
			if (unk_0xF05B7723022657B3(Local_82.f_7[iLocal_571]))
			{
				Var0 = { unk_0x3E4D3CCC220BDFB1(unk_0x770D3B2B4702434A(Local_82.f_7[iLocal_571]), 0) };
				if (Var0.f_2 < -25f)
				{
					func_25(&(Local_82.f_7[iLocal_571]));
				}
			}
		}
	}
	iLocal_571++;
	if (iLocal_571 >= 4)
	{
		iLocal_571 = 0;
	}
}

void func_163()
{
	if (func_16(unk_0x460153A63B9477BC(), 0))
	{
		return;
	}
	if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 == 1)
	{
		if (!unk_0xCE990E643CD9D0E5(iLocal_87, 13))
		{
			unk_0xBE20AB8238688965(&iLocal_87, 13);
			unk_0x6543AC06C231023E(1, 0);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(iLocal_87, 13))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				unk_0x6543AC06C231023E(0, 0);
				unk_0xD2459066EA58CE43(&iLocal_87, 13);
			}
		}
	}
}

void func_164()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_16(unk_0x460153A63B9477BC(), 0))
	{
		return;
	}
	if (func_421())
	{
		func_272(0);
	}
	iVar0 = Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_747;
	if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0)
	{
		Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 = 0;
	}
	if (iVar0 != func_5())
	{
		if (unk_0x166E920FB00B2DBB(iVar0))
		{
			if (unk_0xFA298F06F67BBD4A(iVar0))
			{
				iVar1 = unk_0x653D75F1BBF766B3(iVar0);
				iVar2 = iVar1;
				iVar3 = Local_85[iVar2 /*18*/].f_17;
				switch (iVar3)
				{
					case 0:
						func_199();
						func_196(iVar2);
						break;
					
					case 1:
						func_195();
						func_169();
						func_165(1);
						break;
					
					case 2:
						func_165(0);
						break;
					}
				}
			}
	}
}

void func_165(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (bParam0)
		{
			func_166(Local_82.f_48[iVar0], &(Local_94[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, -1, -1, 1);
		}
		else
		{
			func_166(Local_82.f_48[iVar0], &(Local_94[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, 55, -1, 1);
		}
		if (unk_0x8F678487EEBD8CE4(Local_94[iVar0 /*8*/]))
		{
			unk_0xB023F5C66F5716C7(Local_94[iVar0 /*8*/], "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				unk_0x91136D871CEAF8CC(Local_94[iVar0 /*8*/], 1);
			}
		}
		if (unk_0x8F678487EEBD8CE4(Local_94[iVar0 /*8*/].f_1))
		{
			unk_0xB023F5C66F5716C7(Local_94[iVar0 /*8*/].f_1, "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				unk_0x91136D871CEAF8CC(Local_94[iVar0 /*8*/].f_1, 1);
			}
		}
		if (Local_82.f_27 != joaat("hydra"))
		{
			if (unk_0xCE990E643CD9D0E5(Local_82.f_272[func_91(iVar0)], func_90(iVar0)) || unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar0)], func_90(iVar0)))
			{
				if (unk_0x3D70CCF2C9B362CD(Local_82.f_48[iVar0]))
				{
					func_92(&(Local_94[iVar0 /*8*/]));
				}
			}
		}
		else if ((iVar0 % 4) == 0)
		{
			iVar1 = (iVar0 / 4);
			if (unk_0xCE990E643CD9D0E5(Local_82.f_271, iVar1) || unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_6, iVar1))
			{
				if (unk_0x3D70CCF2C9B362CD(Local_82.f_48[iVar0]))
				{
					func_92(&(Local_94[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_166(var uParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (unk_0xF7DE07F319727299(uParam0))
	{
		if (func_168())
		{
			Global_2440049 = unk_0x460153A63B9477BC();
		}
		if (bParam3)
		{
			func_167(unk_0x3C6C6327BA564AEE(uParam0), iParam1, 1, Global_2440049, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_167(unk_0x3C6C6327BA564AEE(uParam0), iParam1, -1, Global_2440049, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (unk_0x8F678487EEBD8CE4(*iParam1))
	{
		func_92(iParam1);
	}
}

int func_167(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
	if (iParam3 == 0)
	{
		iParam3 = unk_0x2639A2323BEA8CC6();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (!unk_0xD2160441D64A7913(iParam0))
		{
			if (iParam8 == -1)
			{
				unk_0x40144464F4EFCB95(iParam0, 1);
			}
			else
			{
				unk_0xA38FAE649193A9D3(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			unk_0x8C9D58FFAD1E5F5D(iParam0, iParam2);
			unk_0x952C4BC7DD66CA43(iParam0, fParam6);
			if (unk_0x8F678487EEBD8CE4(*uParam1))
			{
				unk_0xE346A71235BB8065(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			unk_0x9E980DBD91D84D38(iParam0, iParam9);
		}
		unk_0xF3AD674A9CA93CB7(iParam0, iParam4);
		unk_0xB9FCCCD8AB1F5190(iParam0, iParam5);
		*uParam1 = unk_0xD5903D08ABF95646(iParam0);
		if (!iParam9 == -1)
		{
			if (unk_0x8F678487EEBD8CE4(*uParam1))
			{
				if (!iParam8 == -1)
				{
					unk_0xECC9A00CF1181EC2(*uParam1, iParam8);
				}
				if (!unk_0x7BCC91F3C1CF24E8(sParam7))
				{
					unk_0xE595D9125F918A6F("STRING");
					if (bParam10)
					{
						unk_0x9EFD301E3BE8324E(sParam7);
					}
					else
					{
						unk_0x6A826E35A3096ED0(sParam7);
					}
					unk_0x70103B2A126717C6(*uParam1);
				}
				unk_0xE346A71235BB8065(*uParam1, 7);
			}
		}
		if (!unk_0xCE990E643CD9D0E5(uParam1->f_6, 2))
		{
			if (unk_0x8F678487EEBD8CE4(*uParam1))
			{
				unk_0xBE20AB8238688965(&(uParam1->f_6), 2);
			}
		}
		if (unk_0x47DBF174A0CB9D55(iParam0, 0))
		{
			uParam1->f_1 = unk_0x9E0AACA1FCE0CBEC(iParam0);
			if (!unk_0xCE990E643CD9D0E5(uParam1->f_6, 3))
			{
				if (unk_0x8F678487EEBD8CE4(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						unk_0xECC9A00CF1181EC2(uParam1->f_1, iParam8);
					}
					if (!unk_0x7BCC91F3C1CF24E8(sParam7))
					{
						unk_0xE595D9125F918A6F("STRING");
						if (bParam10)
						{
							unk_0x9EFD301E3BE8324E(sParam7);
						}
						else
						{
							unk_0x6A826E35A3096ED0(sParam7);
						}
						unk_0x70103B2A126717C6(uParam1->f_1);
					}
					unk_0xE346A71235BB8065(uParam1->f_1, 7);
					unk_0xBE20AB8238688965(&(uParam1->f_6), 3);
				}
			}
			else if (!unk_0x8F678487EEBD8CE4(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				unk_0xD2459066EA58CE43(&(uParam1->f_6), 3);
			}
		}
		else if (unk_0x8F678487EEBD8CE4(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			unk_0xD2459066EA58CE43(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_168()
{
	return Global_1312872;
}

void func_169()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4[4];
	bool bVar5;
	int iVar6[4];
	var uVar7[4];
	int iVar8;
	int iVar9;
	
	iVar2 = (func_34() - func_126(&(Local_82.f_332), 0, 0));
	if (iLocal_549 == 0)
	{
		if (unk_0xCE990E643CD9D0E5(iLocal_86, 26))
		{
			if ((unk_0xCE990E643CD9D0E5(Local_82.f_3, 0) && unk_0xCE990E643CD9D0E5(Local_82.f_3, 1)) && unk_0xCE990E643CD9D0E5(Local_82.f_3, 2))
			{
				iLocal_549 = (func_34() - func_126(&(Local_82.f_332), 0, 0));
				iVar2 = iLocal_549;
			}
		}
	}
	else
	{
		iVar2 = iLocal_549;
	}
	if (unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 11))
	{
		return;
	}
	if (unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 10))
	{
		return;
	}
	if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_10 >= 0)
	{
		return;
	}
	if (func_748())
	{
		iVar0 = (((Local_82.f_256[0] + Local_82.f_256[1]) + Local_82.f_256[2]) + Local_82.f_256[3]);
	}
	else
	{
		iVar0 = Local_82.f_256[0];
	}
	func_191(iVar2);
	if (iVar2 > 30000)
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 6;
	}
	if (func_748())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar9 = unk_0xF1110FE23C67293A(Local_82.f_594[iVar1 /*4*/].f_2);
			if (iVar9 != func_5())
			{
				if (unk_0x166E920FB00B2DBB(iVar9))
				{
					sVar4[iVar1] = unk_0x72C1D3A1AB8CAA5B(iVar9);
					iVar6[iVar1] = Local_82.f_594[iVar1 /*4*/].f_1;
					uVar7[iVar1] = Local_82.f_594[iVar1 /*4*/];
					if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_9 == uVar7[iVar1])
					{
						iVar8 = uVar7[iVar1];
						iVar8++;
					}
					uVar7[iVar1]++;
				}
				else
				{
					sVar4[iVar1] = "";
					iVar6[iVar1] = -1;
				}
			}
			else
			{
				sVar4[iVar1] = "";
				iVar6[iVar1] = -1;
			}
			iVar1++;
		}
		if ((func_34() - func_126(&(Local_82.f_332), 0, 0)) >= 0)
		{
			if (Local_82.f_27 == joaat("rhino") || Local_82.f_27 == joaat("hydra"))
			{
				func_187(sVar4[0], uVar7[0], sVar4[1], uVar7[1], sVar4[2], uVar7[2], sVar4[3], uVar7[3], iVar6[0], iVar6[1], iVar6[2], iVar6[3], iVar2, iVar3, func_188(), iVar8);
			}
			else
			{
				func_185(iVar6[0], uVar7[0], iVar6[1], uVar7[1], iVar6[2], uVar7[2], iVar6[3], uVar7[3], iVar2, iVar3, func_188(), iVar8);
			}
		}
	}
	else if (iVar2 >= 0)
	{
		if (iVar0 > Local_82.f_255)
		{
			iVar0 = Local_82.f_255;
		}
		if (Local_82.f_27 == joaat("rhino") || Local_82.f_27 == joaat("hydra"))
		{
			func_184(unk_0x72C1D3A1AB8CAA5B(unk_0x460153A63B9477BC()), iVar0, iVar0, Local_82.f_255, iVar2, iVar3, 0, func_188());
		}
		else
		{
			func_170(iVar0, iVar0, Local_82.f_255, iVar2, iVar3, 0, func_188(), 1);
		}
		if (bVar5)
		{
			func_115();
		}
	}
}

void func_170(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, char* sParam6, int iParam7)
{
	struct<8> Var0;
	char* sVar1;
	
	if (func_181(0) == 0)
	{
		return;
	}
	func_180();
	func_179();
	StringCopy(&Var0, "HUD_TEAM", 64);
	if (bParam5)
	{
		func_176(iParam0, &Var0, -1, iParam7, 5, 1, "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	func_175(iParam1, iParam2, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar1 = "HUD_COUNTDOWN";
	if (!func_174(sParam6))
	{
		sVar1 = sParam6;
	}
	func_171(iParam3, sVar1, 0, 0, -1, 0, 3, 0, iParam4, 0, 0, 0, iParam4, 0, 0, 0, 0, -1);
}

void func_171(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_173(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_172(7, iVar0);
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

void func_172(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_1378744.f_6304[iParam0]), iParam1);
}

bool func_173(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1378744.f_6304[iParam0], iParam1);
}

int func_174(char* sParam0)
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

void func_175(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_173(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_172(4, iVar0);
		Global_1378744.f_3283[iVar0] = iParam0;
		Global_1378744.f_3283.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1378744.f_3283.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1378744.f_3283.f_183[iVar0] = iParam3;
		Global_1378744.f_3283.f_216[iVar0] = iParam5;
		Global_1378744.f_3283.f_194[iVar0] = iParam4;
		Global_1378744.f_3283.f_227[iVar0] = iParam6;
		Global_1378744.f_3283.f_270[iVar0] = iParam7;
		Global_1378744.f_3283.f_281[iVar0] = iParam8;
		Global_1378744.f_3283.f_292[iVar0] = iParam9;
		Global_1378744.f_3283.f_303[iVar0] = iParam10;
		Global_1378744.f_3283.f_314[iVar0] = iParam11;
		Global_1378744.f_3283.f_325[iVar0] = iParam13;
		Global_1378744.f_3283.f_336[iVar0] = iParam14;
		Global_1378744.f_3283.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && unk_0xF8EDFF98A9C94C74()) && iParam12)
		{
			Global_1378744.f_1130 = 1;
		}
	}
}

void func_176(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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
			if (func_173(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_172(6, iVar0);
		Global_1378744.f_3955[iVar0] = iParam0;
		StringCopy(&(Global_1378744.f_3955.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1378744.f_3955.f_183[iVar0] = iParam3;
		Global_1378744.f_3955.f_172[iVar0] = iParam2;
		Global_1378744.f_3955.f_260[iVar0] = iParam4;
		Global_1378744.f_3955.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1378744.f_3955.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1378744.f_3955.f_443[iVar0] = iParam7;
		Global_1378744.f_3955.f_454[iVar0] = iParam8;
		Global_1378744.f_3955.f_497[iVar0] = iParam9;
		Global_1378744.f_3955.f_508[iVar0] = iParam10;
		Global_1378744.f_3955.f_205[iVar0] = iParam11;
		Global_1378744.f_3955.f_216[iVar0] = iParam12;
		Global_1378744.f_3955.f_227[iVar0] = iParam13;
		Global_1378744.f_3955.f_238[iVar0] = iParam14;
		Global_1378744.f_3955.f_249[iVar0] = iParam15;
		Global_1378744.f_3955.f_519[iVar0] = iParam16;
		Global_1378744.f_3955.f_530[iVar0] = iParam17;
		Global_1378744.f_3955.f_541[iVar0] = iParam18;
		Global_1378744.f_3955.f_552[iVar0] = iParam19;
		Global_1378744.f_3955.f_563[iVar0] = iParam20;
		Global_1378744.f_3955.f_574[iVar0] = iParam21;
		Global_1378744.f_3955.f_585[iVar0] = iParam22;
		Global_1378744.f_3955.f_596[iVar0] = iParam23;
		Global_1378744.f_3955.f_607[iVar0] = iParam24;
		Global_1378744.f_3955.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_178())
		{
			Global_1378744.f_1130 = 1;
		}
		if (unk_0xF8EDFF98A9C94C74())
		{
			iVar2 = 0;
			unk_0x9DD549AAA043F83A(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1378744.f_1134 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1378744.f_1133 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1378744.f_1130 = 1;
			}
			if (func_177())
			{
				Global_1378744.f_1134 = 1;
			}
		}
	}
}

int func_177()
{
	int iVar0;
	var uVar1;
	
	if (unk_0xF8EDFF98A9C94C74())
	{
		unk_0x9DD549AAA043F83A(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_178()
{
	if (((unk_0xA2C6E70C9BCA9C34() == 8 || unk_0xA2C6E70C9BCA9C34() == 9) || unk_0xA2C6E70C9BCA9C34() == 10) || unk_0xA2C6E70C9BCA9C34() == 12)
	{
		return 1;
	}
	return 0;
}

void func_179()
{
	unk_0x4CB4237D8858ADA6(8);
	unk_0x4CB4237D8858ADA6(9);
	unk_0x4CB4237D8858ADA6(6);
	unk_0x4CB4237D8858ADA6(7);
	Global_2463796 = 1;
}

void func_180()
{
	Global_1378744.f_1130 = 1;
}

int func_181(bool bParam0)
{
	if (func_183())
	{
		return 0;
	}
	if (func_182())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_850(unk_0x460153A63B9477BC(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_182()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_196 != 0;
}

bool func_183()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 12);
}

void func_184(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7)
{
	char* sVar0;
	
	if (func_181(0) == 0)
	{
		return;
	}
	func_179();
	func_180();
	if (bParam6)
	{
		func_176(iParam1, sParam0, -1, 1, 5, 1, "HUD_NUMKILLS", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	func_175(iParam2, iParam3, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_174(sParam7))
	{
		sVar0 = sParam7;
	}
	func_171(iParam4, sVar0, 0, 0, -1, 0, 3, 0, iParam5, 0, 0, 0, iParam5, 0, 0, 0, 0, -1);
}

void func_185(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11)
{
	struct<16> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	
	if (func_181(0) == 0)
	{
		return;
	}
	func_180();
	func_179();
	if (iParam0 > -1)
	{
		Var0 = { func_186(iParam1) };
		iVar1 = 1;
		if (iParam11 == iParam1)
		{
			iVar1 = 9;
		}
		func_176(iParam0, &Var0, -1, iVar1, 7, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam2 > -1)
	{
		Var0 = { func_186(iParam3) };
		iVar2 = 1;
		if (iParam11 == iParam3)
		{
			iVar2 = 9;
		}
		func_176(iParam2, &Var0, -1, iVar2, 6, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam4 > -1)
	{
		Var0 = { func_186(iParam5) };
		iVar3 = 1;
		if (iParam11 == iParam5)
		{
			iVar3 = 9;
		}
		func_176(iParam4, &Var0, -1, iVar3, 5, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam6 > -1)
	{
		Var0 = { func_186(iParam7) };
		iVar4 = 1;
		if (iParam11 == iParam7)
		{
			iVar4 = 9;
		}
		func_176(iParam6, &Var0, -1, iVar4, 4, 1, "", 0, 0, 0, 0, iVar4, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar5 = "HUD_COUNTDOWN";
	if (!func_174(sParam10))
	{
		sVar5 = sParam10;
	}
	func_171(iParam8, sVar5, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0, -1);
}

struct<16> func_186(int iParam0)
{
	struct<16> Var0;
	
	StringConCat(&Var0, unk_0x7C774D8CB8DC6FE3("HUD_TEAM"), 64);
	StringConCat(&Var0, " ", 64);
	StringIntConCat(&Var0, iParam0, 64);
	return Var0;
}

void func_187(char* sParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, char* sParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	
	if (func_181(0) == 0)
	{
		return;
	}
	func_180();
	func_179();
	if (iParam8 > -1)
	{
		iVar0 = 1;
		if (iParam15 == iParam1)
		{
			iVar0 = 9;
		}
		func_176(iParam8, sParam0, -1, 1, 7, 1, "", 0, 0, 0, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam9 > -1)
	{
		iVar1 = 1;
		if (iParam15 == iParam3)
		{
			iVar1 = 9;
		}
		func_176(iParam9, sParam2, -1, 1, 6, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam10 > -1)
	{
		iVar2 = 1;
		if (iParam15 == iParam5)
		{
			iVar2 = 9;
		}
		func_176(iParam10, sParam4, -1, 1, 5, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	if (iParam11 > -1)
	{
		iVar3 = 1;
		if (iParam15 == iParam7)
		{
			iVar3 = 9;
		}
		func_176(iParam11, sParam6, -1, 1, 4, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar4 = "HUD_COUNTDOWN";
	if (!func_174(sParam14))
	{
		sVar4 = sParam14;
	}
	func_171(iParam12, sVar4, 0, 0, -1, 0, 3, 0, iParam13, 0, 0, 0, iParam13, 0, 0, 0, 0, -1);
}

char* func_188()
{
	return "HUD_COUNTDOWN";
	switch (func_190(unk_0x460153A63B9477BC()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_189())
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

int func_189()
{
	if (func_190(unk_0x460153A63B9477BC()) == 133)
	{
		return Global_2540384.f_5109;
	}
	return -1;
}

int func_190(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/];
	}
	return -1;
}

void func_191(int iParam0)
{
	if (func_193(unk_0x460153A63B9477BC()) || func_192(unk_0x460153A63B9477BC()) == 146)
	{
		return;
	}
	if (IntToFloat(iParam0) < unk_0x9E3DAF75EFC49F5B())
	{
		if (unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 0))
		{
			if (!unk_0x7BCC91F3C1CF24E8(&(Global_2540384.f_5027)))
			{
				unk_0x08F33B91E190227C(&(Global_2540384.f_5027));
			}
			unk_0x96F763331D19ED14(1);
			unk_0x21723EF7B2FCC4CC("FM_COUNTDOWN_30S_FIRA");
			unk_0xFA07F8BEBDAAFBA8("GTAO_FM_Events_30_Sec_Countdown_Scene");
			unk_0x0C0DE28672975DC3("DisableFlightMusic", 0);
			unk_0x0C0DE28672975DC3("WantedMusicDisabled", 0);
			unk_0x0C0DE28672975DC3("AllowScoreAndRadio", 0);
			if (Global_2540384.f_5035 > -1)
			{
				unk_0xADB6EEE689FE86DE(Global_2540384.f_5035);
				Global_2540384.f_5035 = -1;
			}
			Global_2540384.f_5025 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 0))
		{
			if (unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 4))
			{
				if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 2))
				{
					if (unk_0xEB3E13794C74EC98())
					{
						if ((!unk_0xF005CCA4263DF67F(unk_0xA15491F33A2A9467(unk_0x9301B13EC408DE79()), "OFF") && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0)) && !unk_0x7BCC91F3C1CF24E8(&(Global_2540384.f_5027)))
						{
							StringCopy(&(Global_2540384.f_5027), "", 32);
							unk_0x21723EF7B2FCC4CC("FM_COUNTDOWN_30S_FIRA");
							unk_0xFA07F8BEBDAAFBA8("GTAO_FM_Events_30_Sec_Countdown_Scene");
							unk_0x0C0DE28672975DC3("DisableFlightMusic", 0);
							unk_0x0C0DE28672975DC3("WantedMusicDisabled", 0);
							unk_0x0C0DE28672975DC3("AllowScoreAndRadio", 0);
							unk_0x96F763331D19ED14(1);
							unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 2);
						}
					}
				}
				else if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) && unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 5))
				{
					unk_0x08F33B91E190227C("OFF");
				}
			}
			else if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 1))
			{
				if (iParam0 < 10000)
				{
					unk_0x21723EF7B2FCC4CC("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					unk_0x21723EF7B2FCC4CC("FM_COUNTDOWN_20S");
				}
				else
				{
					unk_0x21723EF7B2FCC4CC("FM_COUNTDOWN_30S");
				}
				unk_0x17E478571720218F("GTAO_FM_Events_30_Sec_Countdown_Scene");
				unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 1);
			}
			else if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 4))
			{
				if (iParam0 < 27500)
				{
					if (unk_0x344CF631FC7C50AD() != 0)
					{
						if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) && !unk_0x66955F4E33E53A73())
						{
							StringCopy(&(Global_2540384.f_5027), unk_0x29E54CBCA7932BF9(), 32);
							unk_0x08F33B91E190227C("OFF");
						}
						unk_0x96F763331D19ED14(1);
						unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 3))
				{
					Global_2540384.f_5035 = unk_0x5E54B0823F46079E();
					unk_0xC4CC25B68A91D144(Global_2540384.f_5035, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
					unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 0))
			{
				Global_2540384.f_5025 = 0;
				Global_2540384.f_5035 = -1;
				unk_0x1BDBFE8EFF10BC95("FM_COUNTDOWN_30S_KILL");
				unk_0x96F763331D19ED14(0);
				unk_0x21723EF7B2FCC4CC("FM_PRE_COUNTDOWN_30S");
				unk_0x0C0DE28672975DC3("DisableFlightMusic", 1);
				unk_0x0C0DE28672975DC3("WantedMusicDisabled", 1);
				unk_0x0C0DE28672975DC3("AllowScoreAndRadio", 1);
				unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 0);
				if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) || unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 2))
				{
					unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 2);
					unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 5);
				}
				else
				{
					unk_0xD2459066EA58CE43(&(Global_2540384.f_5025), 5);
					unk_0xD2459066EA58CE43(&(Global_2540384.f_5025), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 0))
		{
			Global_2540384.f_5025 = 0;
			Global_2540384.f_5035 = -1;
			unk_0x1BDBFE8EFF10BC95("FM_COUNTDOWN_30S_KILL");
			unk_0x96F763331D19ED14(0);
			unk_0x21723EF7B2FCC4CC("FM_PRE_COUNTDOWN_30S");
			unk_0x0C0DE28672975DC3("DisableFlightMusic", 1);
			unk_0x0C0DE28672975DC3("WantedMusicDisabled", 1);
			unk_0x0C0DE28672975DC3("AllowScoreAndRadio", 1);
			unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 0);
			if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
			{
				unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 2);
				unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 5);
			}
			else
			{
				unk_0xD2459066EA58CE43(&(Global_2540384.f_5025), 2);
				unk_0xD2459066EA58CE43(&(Global_2540384.f_5025), 5);
			}
		}
	}
}

int func_192(int iParam0)
{
	if (iParam0 != func_5() && func_850(iParam0, 1, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_314.f_15;
	}
	return -1;
}

int func_193(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_850(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_194(Global_2425869[iParam0 /*443*/].f_314.f_6) == 19;
			}
		}
	}
	return 0;
}

int func_194(int iParam0)
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

void func_195()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x8F678487EEBD8CE4(iLocal_93[iVar0]))
		{
			unk_0x93370FA10F15BE44(&(iLocal_93[iVar0]));
		}
		iVar0++;
	}
}

void func_196(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!unk_0x8F678487EEBD8CE4(iLocal_93[iVar0]))
		{
			if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iVar0]))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_82.f_13, iVar0))
				{
					if (!unk_0xCE990E643CD9D0E5(Local_85[iParam0 /*18*/].f_1, iVar0))
					{
						iLocal_93[iVar0] = unk_0x2BE000892D65EA2A(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]));
						unk_0xE7B8403ABCA0391D(iLocal_93[iVar0], 429);
						func_197(&(iLocal_93[iVar0]), 29);
						if (func_748())
						{
							unk_0xB023F5C66F5716C7(iLocal_93[iVar0], "UW_BLIPC");
						}
						else
						{
							unk_0xB023F5C66F5716C7(iLocal_93[iVar0], "UW_BLIP");
						}
						unk_0xE346A71235BB8065(iLocal_93[iVar0], 9);
					}
					else if (unk_0x8F678487EEBD8CE4(iLocal_93[iVar0]))
					{
						unk_0x93370FA10F15BE44(&(iLocal_93[iVar0]));
					}
				}
				else if (unk_0x8F678487EEBD8CE4(iLocal_93[iVar0]))
				{
					unk_0x93370FA10F15BE44(&(iLocal_93[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_197(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x8F678487EEBD8CE4(*uParam0))
	{
		iVar0 = func_198(iParam1);
		unk_0xECC9A00CF1181EC2(*uParam0, iVar0);
	}
}

int func_198(int iParam0)
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
	unk_0x28DD484BAEAF8437(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_199()
{
	bool bVar0;
	
	bVar0 = func_264();
	if (bVar0)
	{
		if (Local_82.f_413 > -1)
		{
			if ((Local_82.f_413 - func_126(&(Local_82.f_326), 0, 0)) >= 0)
			{
				if (!func_203())
				{
					func_202((Local_82.f_413 - func_126(&(Local_82.f_326), 0, 0)));
					func_200((Local_82.f_413 - func_126(&(Local_82.f_326), 0, 0)), func_201(-1));
				}
			}
			else
			{
				if (!func_203())
				{
					func_200(0, func_201(-1));
				}
				if (unk_0xAFF96FDC3971E7EA())
				{
					unk_0xBE20AB8238688965(&(Local_82.f_3), 4);
				}
			}
		}
	}
}

void func_200(int iParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_181(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_174(sParam1))
	{
		sVar0 = sParam1;
	}
	func_171(iParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_201(int iParam0)
{
	char* sVar0;
	
	sVar0 = unk_0x6C5C6B207AA78253();
	return "HUD_STARTING";
	if (unk_0xF005CCA4263DF67F(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "am_challenges"))
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
	else if (unk_0xF005CCA4263DF67F(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (unk_0xF005CCA4263DF67F(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_202(int iParam0)
{
	if (IntToFloat(iParam0) < unk_0x9E3DAF75EFC49F5B())
	{
		Global_2540384.f_5025 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 1))
		{
			unk_0xC4CC25B68A91D144(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
			Global_2540384.f_5025 = 0;
			unk_0xBE20AB8238688965(&(Global_2540384.f_5025), 1);
		}
	}
}

bool func_203()
{
	bool bVar0;
	int iVar1;
	
	if (func_262(8))
	{
		bVar0 = true;
	}
	if (func_262(0))
	{
		bVar0 = true;
	}
	if (!func_254(129, 0, 0))
	{
		bVar0 = true;
	}
	if (!func_210(0, 1, 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 9))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				iVar1 = unk_0xCE078AEFF5C495DE(unk_0x9B0761B4C3EB8BC7());
				if (!unk_0x80FF6C016CDB0FAF(iVar1, 0))
				{
					func_208(0, -1);
					unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), 9);
				}
			}
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 9))
	{
		unk_0xD2459066EA58CE43(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), 9);
	}
	if (Global_1663771)
	{
		bVar0 = true;
	}
	if (func_207(unk_0x460153A63B9477BC()))
	{
		bVar0 = true;
	}
	if (func_206(unk_0x460153A63B9477BC(), 2))
	{
		bVar0 = true;
	}
	if (func_204(unk_0x460153A63B9477BC()))
	{
		bVar0 = true;
	}
	return bVar0;
}

bool func_204(int iParam0)
{
	if (func_205(iParam0))
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 8);
}

bool func_205(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 2);
}

bool func_206(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_212, iParam1);
}

int func_207(int iParam0)
{
	if (!func_850(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_35;
}

void func_208(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!Global_1590555)
		{
			if (!func_262(0) && !func_262(func_209(iParam1)))
			{
				Global_1590555 = 1;
			}
		}
	}
	else if (Global_1590555)
	{
		Global_1590555 = 0;
	}
}

int func_209(int iParam0)
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
		
		case 150:
			return 12;
		
		default:
	}
	return Global_262145.f_23647;
}

int func_210(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_253(unk_0x460153A63B9477BC(), 29))
	{
		return 0;
	}
	if (func_206(unk_0x460153A63B9477BC(), 21))
	{
		return 0;
	}
	if (func_206(unk_0x460153A63B9477BC(), 25))
	{
		return 0;
	}
	if (unk_0xD0E70037A973A810())
	{
		return 0;
	}
	if (bParam1)
	{
		if (unk_0x450A8984AFF05042())
		{
			return 0;
		}
	}
	if (func_251(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_250())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_249(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	if (func_248())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_247(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	else if (func_231(unk_0x460153A63B9477BC()) == 3)
	{
		return 0;
	}
	if (func_230(unk_0x460153A63B9477BC()) != func_5() && func_230(unk_0x460153A63B9477BC()) == func_65(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_228(func_229()) && !func_227(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_226())
	{
		return 0;
	}
	if (func_182())
	{
		return 0;
	}
	if (unk_0xFC559366953F62B3())
	{
		return 0;
	}
	if (func_224(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (!func_222())
	{
		return 0;
	}
	if (func_206(unk_0x460153A63B9477BC(), 0) || func_206(unk_0x460153A63B9477BC(), 3))
	{
		return 0;
	}
	if ((func_206(unk_0x460153A63B9477BC(), 12) || func_206(unk_0x460153A63B9477BC(), 14)) || func_206(unk_0x460153A63B9477BC(), 13))
	{
		return 0;
	}
	if (func_221(unk_0x460153A63B9477BC(), 1, 1))
	{
		if (!func_220() && !Global_2515442)
		{
			return 0;
		}
	}
	if (func_219(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_218())
	{
		return 0;
	}
	if (Global_1663771)
	{
		return 0;
	}
	if (func_207(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_217())
	{
		return 0;
	}
	if (func_215(unk_0x460153A63B9477BC()) && Global_1590329.f_171)
	{
		return 0;
	}
	if (func_214())
	{
		return 0;
	}
	if (func_213(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (Global_2539443)
	{
		return 0;
	}
	if (Global_1694999)
	{
		return 0;
	}
	if (!func_212(unk_0x460153A63B9477BC()))
	{
		if (func_211(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	return 1;
}

int func_211(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627436[iVar0 /*90*/].f_77.f_12 != 0;
	}
	return 0;
}

int func_212(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1630317[iVar0 /*595*/].f_1, 7);
	}
	return 0;
}

int func_213(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x25DDB354A40FFCDB())
	{
		return 0;
	}
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		return Global_2515846;
	}
	else
	{
		iVar0 = unk_0x1FA7B77001D60F9D(iParam0);
		if (unk_0xAE06B9E39EBDE049(iVar0))
		{
			iVar1 = unk_0x36FE6D3220816ADA(iVar0);
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

bool func_214()
{
	return Global_1678288.f_482;
}

int func_215(int iParam0)
{
	if (func_216(Global_1590682[iParam0 /*883*/].f_274.f_28))
	{
		return 1;
	}
	return 0;
}

int func_216(int iParam0)
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

int func_217()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_218()
{
	return Global_99007.f_352 > 0;
}

bool func_219(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 11);
}

bool func_220()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

int func_221(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_222()
{
	if (func_223() == 0)
	{
		return 1;
	}
	return 0;
}

int func_223()
{
	return Global_1312485.f_18;
}

bool func_224(int iParam0)
{
	return func_225(iParam0);
}

bool func_225(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

bool func_226()
{
	return Global_1312896;
}

int func_227(int iParam0)
{
	if (func_190(iParam0) == 236 || func_190(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_228(int iParam0)
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

int func_229()
{
	return Global_2440049.f_2834[0 /*80*/].f_1;
}

int func_230(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_35;
}

int func_231(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_246(iParam0) && !func_205(iParam0)) && !unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 8));
	bVar2 = func_247(iParam0);
	bVar3 = func_245();
	uVar4 = func_236();
	if ((bVar1 && (func_212(iParam0) || func_235(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_234(iParam0)) && !func_232(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2540384.f_5188.f_217 != iVar0)
	{
		Global_2540384.f_5188.f_217 = iVar0;
	}
	return iVar0;
}

bool func_232(int iParam0)
{
	return func_233(iParam0, 19);
}

bool func_233(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_234(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_233(iParam0, 9);
	}
	return 0;
}

int func_235(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1630317[iVar0 /*595*/].f_1, 0);
	}
	return 0;
}

int func_236()
{
	if ((func_233(unk_0x460153A63B9477BC(), 21) || func_233(unk_0x460153A63B9477BC(), 22)) || func_242())
	{
		return 1;
	}
	if (func_238())
	{
		func_237(22);
		return 1;
	}
	return 0;
}

void func_237(int iParam0)
{
	unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_4), iParam0);
}

int func_238()
{
	if (func_241(unk_0x460153A63B9477BC(), 0))
	{
		if (((func_245() && !func_240()) || func_206(unk_0x460153A63B9477BC(), 21)) || func_206(unk_0x460153A63B9477BC(), 25))
		{
			return 1;
		}
		else
		{
			func_239(27);
		}
	}
	return 0;
}

void func_239(int iParam0)
{
	unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_4), iParam0);
}

bool func_240()
{
	return Global_1312436.f_1;
}

int func_241(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_242()
{
	return func_243(377, -1);
}

int func_243(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587834[iParam0 /*3*/][func_244(iParam1)];
	if (unk_0xB9112C701DE2A810(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_244(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_18();
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

bool func_245()
{
	return Global_1312436;
}

int func_246(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/] != -1;
	}
	return 0;
}

bool func_247(int iParam0)
{
	return func_233(iParam0, 20);
}

bool func_248()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 5;
}

int func_249(int iParam0)
{
	if (Global_2425869[iParam0 /*443*/].f_265.f_4 != 0 || Global_2425869[iParam0 /*443*/].f_265.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_250()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 0);
}

int func_251(int iParam0)
{
	if (func_252(iParam0, 1, 0))
	{
		if (Global_1590682[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_252(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_224(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590682[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_253(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_5, iParam1);
}

bool func_254(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7687 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_258(unk_0x460153A63B9477BC(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4719 == 1)
		{
			return 1;
		}
	}
	if (func_257() || func_256())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_255())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1574643[iVar1], iVar0);
}

int func_255()
{
	int iVar0;
	
	if (Global_1312466)
	{
		return 1;
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_1791, 23))
	{
		return 1;
	}
	if (func_257())
	{
		return 1;
	}
	if (func_256())
	{
		return 1;
	}
	iVar0 = Global_1388185[func_244(-1)];
	if (unk_0xCE990E643CD9D0E5(iVar0, 7))
	{
		unk_0xBE20AB8238688965(&(Global_2540384.f_1791), 23);
		return 1;
	}
	return 0;
}

bool func_256()
{
	return Global_1312884;
}

bool func_257()
{
	return Global_1312886;
}

bool func_258(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_261())
	{
		return 0;
	}
	if (func_260())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_259(iParam1);
	iVar1 = uVar0;
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_737, iVar1);
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		case 22:
			return 8;
		
		case 53:
			return 9;
		
		case 34:
			return 10;
		
		case 152:
			return 11;
		
		case 85:
			return 12;
		
		case 84:
			return 13;
		
		case 0:
			return 14;
		
		case 1:
			return 15;
		
		case 153:
			return 16;
		
		case 151:
			return 17;
		
		case 14:
			return 18;
		
		case 15:
			return 19;
		
		case 24:
			return 20;
		
		case 30:
			return 21;
		
		case 46:
			return 22;
		
		case 47:
			return 23;
		
		case 54:
			return 24;
		
		case 51:
			return 25;
		
		case 60:
			return 26;
		
		case 62:
			return 27;
		
		case 66:
			return 28;
		
		case 69:
			return 29;
		
		case 154:
			return 30;
		
		case 82:
			return 31;
		
		case 157:
			return 32;
		
		case 167:
			return 34;
		
		case 169:
			return 35;
		
		default:
	}
	return 1;
}

bool func_260()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_146, 3);
}

int func_261()
{
	if (Global_1312466)
	{
		return 1;
	}
	if (func_257())
	{
		return 1;
	}
	if (func_256())
	{
		return 1;
	}
	return func_243(120, -1);
}

bool func_262(int iParam0)
{
	int iVar0;
	
	iVar0 = func_263(2481, -1, 0);
	return unk_0xCE990E643CD9D0E5(iVar0, iParam0);
}

int func_263(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_244(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

bool func_264()
{
	bool bVar0;
	
	if (!func_748())
	{
		if (Local_82.f_27 == joaat("hydra") || Local_82.f_27 == joaat("rhino"))
		{
			return 0;
		}
	}
	else if (Local_82.f_27 == joaat("hydra") || Local_82.f_27 == joaat("rhino"))
	{
		if (func_112() == 2)
		{
			return 0;
		}
	}
	if (!func_748())
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[0]))
		{
			if (unk_0x36FE6D3220816ADA(unk_0x770D3B2B4702434A(Local_82.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_82.f_15 != false;
			}
			else
			{
				bVar0 = Local_82.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = unk_0xCE990E643CD9D0E5(Local_82.f_3, 9);
	}
	if (!func_16(unk_0x460153A63B9477BC(), 0))
	{
		if (bVar0 && !func_203())
		{
			if (func_748())
			{
				if (!func_271("UW_ABTSC"))
				{
					func_265("UW_ABTSC", 0);
				}
			}
			else if (!func_271("UW_ABTS"))
			{
				func_265("UW_ABTS", 0);
			}
		}
		else if (func_271("UW_ABTSC") || func_271("UW_ABTS"))
		{
			func_9();
		}
	}
	return bVar0;
}

void func_265(char* sParam0, bool bParam1)
{
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return;
	}
	if (unk_0xA221A4BC051BFCCE(sParam0) > 23)
	{
		return;
	}
	if (func_269(sParam0))
	{
		return;
	}
	func_10();
	Global_1312603 = 0;
	StringCopy(&(Global_1312603.f_1), unk_0x6C5C6B207AA78253(), 32);
	Global_1312603.f_9 = unk_0x856D5567211886A2(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	func_268();
	func_267(bParam1);
	func_266();
}

void func_266()
{
	unk_0xBE20AB8238688965(&(Global_1312603.f_59), 1);
}

void func_267(bool bParam0)
{
	if (bParam0)
	{
		unk_0xBE20AB8238688965(&(Global_1312603.f_59), 0);
		return;
	}
	unk_0xD2459066EA58CE43(&(Global_1312603.f_59), 0);
}

void func_268()
{
	Global_1312603.f_10 = unk_0x8C358101651A3F7C(unk_0x6CAAB7E78B5D978A(), 86400000);
	Global_1312603.f_11 = unk_0x6CAAB7E78B5D978A();
}

bool func_269(char* sParam0)
{
	if (!func_15())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		return func_270(sParam0);
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	return unk_0x856D5567211886A2(sParam0) == unk_0x856D5567211886A2(&(Global_1312603.f_12));
}

bool func_270(char* sParam0)
{
	if (!func_15())
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	return unk_0x856D5567211886A2(sParam0) == unk_0x856D5567211886A2(&(Global_1312603.f_16));
}

int func_271(char* sParam0)
{
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	if (!func_15())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		if (unk_0xA221A4BC051BFCCE(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (unk_0xA221A4BC051BFCCE(sParam0) > 23)
	{
		return 0;
	}
	return func_269(sParam0);
}

void func_272(bool bParam0)
{
	int iVar0;
	struct<4> Var1;
	bool bVar2;
	
	Var1 = { func_420() };
	bVar2 = false;
	if (Local_82.f_27 == joaat("rhino") || Local_82.f_27 == joaat("hydra"))
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_103[iVar0 /*42*/] = -1;
			Local_103[iVar0 /*42*/].f_1 = func_5();
			Local_103[iVar0 /*42*/].f_9 = 0;
			Local_103[iVar0 /*42*/].f_31 = -1;
			if (Local_82.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_103[iVar0 /*42*/].f_1 = Local_82.f_465[iVar0 /*4*/].f_2;
				Local_103[iVar0 /*42*/].f_9 = Local_82.f_465[iVar0 /*4*/].f_1;
			}
			iVar0++;
		}
		if (bParam0)
		{
			if (!func_419())
			{
				if (Local_104.f_103 != 129)
				{
					Local_104.f_103 = 129;
				}
				else
				{
					func_208(1, 129);
				}
			}
		}
		else if (Local_104.f_103 != 129)
		{
			Local_104.f_103 = 129;
		}
		func_277(&Local_103, &uLocal_102, 27, &Local_104, &uLocal_117, -1, 0, 0);
		if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 == 1)
		{
			if (Local_103[0 /*42*/].f_1 != unk_0x460153A63B9477BC())
			{
				if (Local_82.f_465[0 /*4*/].f_1 > 0)
				{
					func_276();
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_103[iVar0 /*42*/] = -1;
			Local_103[iVar0 /*42*/].f_1 = func_5();
			Local_103[iVar0 /*42*/].f_9 = 0;
			Local_103[iVar0 /*42*/].f_31 = -1;
			Local_103[iVar0 /*42*/].f_39 = -1;
			if (Local_82.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_103[iVar0 /*42*/].f_39 = Local_82.f_465[iVar0 /*4*/] + 1;
				Local_103[iVar0 /*42*/].f_1 = unk_0xF1110FE23C67293A(Local_82.f_465[iVar0 /*4*/].f_2);
				Local_103[iVar0 /*42*/].f_40 = Local_82.f_465[iVar0 /*4*/].f_1;
				Local_103[iVar0 /*42*/].f_9 = Local_82.f_465[iVar0 /*4*/].f_1;
				Local_103[iVar0 /*42*/].f_2 = Local_82.f_465[iVar0 /*4*/];
			}
			iVar0++;
		}
		func_273();
		if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 == 1)
		{
			if (Local_82.f_594[0 /*4*/] > 0)
			{
				if (Local_82.f_594[0 /*4*/] != Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_9)
				{
					if (Local_82.f_256[Local_82.f_594[0 /*4*/]] > 0)
					{
						func_276();
					}
				}
			}
		}
		func_277(&Local_103, &uLocal_102, 27, &Local_104, &uLocal_117, -1, 1, 0);
		if (bParam0)
		{
			if (!func_419())
			{
				if (Local_104.f_103 != 129)
				{
					Local_104.f_103 = 129;
				}
				else
				{
					func_208(1, 129);
				}
			}
		}
		else if (Local_104.f_103 != 129)
		{
			Local_104.f_103 = 129;
		}
	}
}

void func_273()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	
	uLocal_577[0] = Local_82.f_594[0 /*4*/];
	uLocal_577[1] = Local_82.f_594[1 /*4*/];
	uLocal_577[2] = Local_82.f_594[2 /*4*/];
	uLocal_577[3] = Local_82.f_594[3 /*4*/];
	iVar3 = Local_82.f_594[0 /*4*/];
	iVar4 = Local_82.f_594[1 /*4*/];
	iVar5 = Local_82.f_594[2 /*4*/];
	iVar6 = Local_82.f_594[3 /*4*/];
	if (iVar3 != -1)
	{
		uVar7 = Local_82.f_266[iVar3];
	}
	if (iVar4 != -1)
	{
		uVar8 = Local_82.f_266[iVar4];
	}
	if (iVar5 != -1)
	{
		uVar9 = Local_82.f_266[iVar5];
	}
	if (iVar6 != -1)
	{
		uVar10 = Local_82.f_266[iVar6];
	}
	uLocal_578[0] = uVar7;
	uLocal_578[1] = uVar8;
	uLocal_578[2] = uVar9;
	uLocal_578[3] = uVar10;
	iVar11 = 0;
	while (iVar11 < unk_0xB9E6DF0411C3488E())
	{
		iVar2 = func_275(uLocal_577[iVar0], iVar11);
		if (iVar2 != -1)
		{
			Local_103[iVar2 /*42*/].f_9 = Local_82.f_594[iVar0 /*4*/].f_1;
		}
		func_274(iVar2, iVar11);
		iVar1++;
		if (iVar1 >= uLocal_578[iVar0])
		{
			iVar0++;
			iVar1 = 0;
		}
		if (iVar0 >= 4)
		{
			return;
		}
		iVar11++;
	}
}

void func_274(int iParam0, int iParam1)
{
	struct<42> Var0;
	
	if (iParam0 == -1 || iParam1 == -1)
	{
		return;
	}
	Var0 = { Local_103[iParam1 /*42*/] };
	Local_103[iParam1 /*42*/] = { Local_103[iParam0 /*42*/] };
	Local_103[iParam0 /*42*/] = { Var0 };
}

int func_275(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = iParam1;
	while (iVar0 <= (unk_0xB9E6DF0411C3488E() - 1))
	{
		if (iParam0 == Local_103[iVar0 /*42*/].f_2)
		{
			iVar1 = iVar0;
			iVar0 = unk_0xB9E6DF0411C3488E();
		}
		iVar0++;
	}
	return iVar1;
}

void func_276()
{
	unk_0xBE20AB8238688965(&(Global_2540384.f_1794), 19);
}

void func_277(int iParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
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
	
	if (func_418(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_416() || iParam2 == 28)
	{
		if (func_367(uParam1, iParam2, uParam3, Global_1574191, 0, func_421(), sParam7))
		{
			func_366(1);
			if ((!func_364() && !func_362()) || unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 1))
			{
				if (func_361())
				{
					func_356();
				}
				else
				{
					unk_0xFCC7EAA298CE7AC2(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_355(1);
						Global_1574191 = 0;
						iVar19 = -1;
						if (Global_1574412 != 1)
						{
							func_354(uParam1, 0, 0);
							if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 7))
							{
								unk_0xD2459066EA58CE43(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 28)
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
								if (func_850(unk_0xF1110FE23C67293A(iVar17), 0, 1))
								{
									iVar3 = unk_0xF1110FE23C67293A(iVar17);
									if (!func_16(iVar3, 0))
									{
										if ((func_350(iVar3) || Global_2425869[iVar3 /*443*/].f_240 != -1) || func_349(iVar3))
										{
											iVar9 = iVar3;
											if (func_348(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_345(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_342(unk_0x460153A63B9477BC(), 0) && func_341(unk_0x460153A63B9477BC()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_340())
							{
								if (func_850(unk_0xF1110FE23C67293A(iVar17), 0, 1))
								{
									iVar3 = unk_0xF1110FE23C67293A(iVar17);
								}
								else
								{
									iVar3 = func_5();
								}
							}
							else
							{
								iVar3 = (iParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_339(iVar3) && func_336(iVar3, iParam2)) && func_850(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1590682[iVar9 /*883*/].f_211.f_6;
								Var6 = { func_331(iVar3) };
								if (iVar3 == unk_0x460153A63B9477BC())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0x72C1D3A1AB8CAA5B(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_66(iVar3) };
								iVar5 = func_325(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0x3EF2973864CBE5FC(iVar5);
								}
								Global_1574191++;
								if ((iParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (iParam0[iVar17 /*42*/])->f_22;
								}
								if ((iParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (iParam0[iVar17 /*42*/])->f_31;
								}
								if ((iParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (iParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (iParam0[iVar17 /*42*/])->f_9;
								if (((iParam0[iVar17 /*42*/])->f_9 != -1 || (iParam0[iVar17 /*42*/])->f_22 != -1f) || (iParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_340())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_320(&iVar8, &fVar10, (iParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_319(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (iParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_314(iVar3, 0);
								if (bVar2)
								{
									if (func_313(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((iParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (iParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_312(iParam5))
								{
									func_311(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (iParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_311(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (iParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								unk_0xBE20AB8238688965(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = unk_0xF1110FE23C67293A(iVar17);
							if (func_850(iVar3, 0, 1) && !unk_0xCE990E643CD9D0E5(iVar14, iVar3))
							{
								iVar3 = unk_0xF1110FE23C67293A(iVar17);
							}
							else
							{
								iVar3 = func_5();
							}
							if (func_339(iVar3))
							{
								if (func_850(unk_0xF1110FE23C67293A(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1590682[iVar9 /*883*/].f_211.f_6;
									Var6 = { func_331(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_66(iVar3) };
									iVar5 = func_325(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0x3EF2973864CBE5FC(iVar5);
									}
									Global_1574191++;
									iVar16 = func_314(iVar3, 1);
									if (bVar2)
									{
										if (func_313(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_290(iVar3, unk_0x72C1D3A1AB8CAA5B(iVar3), uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 11))
						{
							func_287(uParam3, uParam1, iParam2);
						}
						func_106(&(uParam3->f_21));
						func_286();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xCE990E643CD9D0E5(uParam3->f_33, 7))
						{
							func_285(uParam3, uParam1);
							func_284(uParam1, 0, 1);
							unk_0xBE20AB8238688965(&(uParam3->f_33), 7);
						}
						func_285(uParam3, uParam1);
						if (!unk_0xCE990E643CD9D0E5(uParam3->f_33, 11))
						{
							unk_0xBE20AB8238688965(&(uParam3->f_33), 11);
						}
						if (func_280(uParam3))
						{
							Global_1574412 = 1;
						}
						func_278(uParam3);
						if (Global_1574412 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574412 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (unk_0x95EF219D38B20CFF(*uParam1))
					{
						unk_0x9D15035C6653D1B1(7);
						unk_0xE6A03BA84586E67B(*uParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						unk_0x9D15035C6653D1B1(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_286();
			func_355(0);
			if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 7))
			{
				unk_0xD2459066EA58CE43(&(uParam3->f_33), 7);
			}
			if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 10))
			{
				unk_0xD2459066EA58CE43(&(uParam3->f_33), 10);
			}
		}
	}
	unk_0x5C64FD27DB62AF7A();
}

void func_278(var uParam0)
{
	if (!func_22(&(uParam0->f_21)))
	{
		func_20(&(uParam0->f_21), 0, 0);
	}
	else if (func_19(&(uParam0->f_21), 250, 0))
	{
		func_106(&(uParam0->f_21));
		func_279(0);
	}
}

void func_279(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574412 != 2)
		{
			Global_1574412 = 2;
		}
	}
	else
	{
		switch (Global_1574412)
		{
			case 0:
				Global_1574412 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_280(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0xF1110FE23C67293A(uParam0->f_37);
	if (iVar3 != func_5() && func_850(iVar3, 0, 1))
	{
		Var2 = { func_66(iVar3) };
		iVar1 = func_283(uParam0, uParam0->f_37);
		if (func_282(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x4B9AEC757F715980(&Var2))
					{
						if (unk_0x30EE34228B1AF045(&Var2))
						{
							iVar4 = 1;
							func_281(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x7677D662EB0C9C8A(&Var2))
					{
						iVar4 = 1;
						func_281(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x4B9AEC757F715980(&Var2))
					{
						if (!unk_0x30EE34228B1AF045(&Var2))
						{
							iVar4 = 1;
							func_281(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_281(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x4B9AEC757F715980(&Var2))
					{
						if (!unk_0x7677D662EB0C9C8A(&Var2))
						{
							iVar4 = 1;
							func_281(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x7677D662EB0C9C8A(&Var2))
					{
						iVar4 = 1;
						func_281(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_281(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_282(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xF6B8932480699645(&uParam0, 13);
}

var func_283(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_284(var uParam0, bool bParam1, int iParam2)
{
	if (unk_0x830F007E19C63E14(*uParam0, "COLLAPSE"))
	{
		unk_0xF1B28F753235CE2A(bParam1);
		unk_0xE1FDD153F5858534();
	}
	if (iParam2 == 1)
	{
		if (unk_0x830F007E19C63E14(*uParam0, "DISPLAY_VIEW"))
		{
			unk_0xE1FDD153F5858534();
		}
	}
}

void func_285(var uParam0, var uParam1)
{
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_33, 10))
	{
		unk_0x830F007E19C63E14(*uParam1, "SET_HIGHLIGHT");
		unk_0xAD291B8F75D737AD(uParam0->f_35);
		unk_0xE1FDD153F5858534();
		unk_0xBE20AB8238688965(&(uParam0->f_33), 10);
	}
}

void func_286()
{
	if (Global_1574412 != 0)
	{
		Global_1574412 = 0;
	}
}

void func_287(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xF1110FE23C67293A(iVar0);
		if (iVar2 != func_5())
		{
			if (func_850(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_289(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_288(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590682[iVar0 /*883*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_288(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		if (unk_0x830F007E19C63E14(*uParam0, "SET_ICON"))
		{
			unk_0xAD291B8F75D737AD(iParam1);
			unk_0xAD291B8F75D737AD(iParam2);
			if (iParam2 == 65)
			{
				unk_0xAD291B8F75D737AD(iParam3);
			}
			unk_0xE1FDD153F5858534();
		}
	}
}

int func_289(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = 65;
	switch (iParam2)
	{
		case 21:
			iVar0 = 0;
			break;
	}
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

void func_290(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_310() && iParam4 < func_309())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574193)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574412 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x830F007E19C63E14(*uParam2, sVar1))
		{
			unk_0xAD291B8F75D737AD(iParam4);
			if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_308("");
			}
			else
			{
				unk_0xAD291B8F75D737AD(iParam10);
			}
			func_308(sParam1);
			unk_0xAD291B8F75D737AD(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_308("");
			}
			else
			{
				unk_0xAD291B8F75D737AD(65);
			}
			unk_0xAD291B8F75D737AD(-1);
			func_308("");
			if (uParam3->f_108 == 6)
			{
				func_308("");
			}
			else
			{
				func_308(&sParam5);
			}
			func_295(uParam3, iParam0);
			unk_0x4A096F645CED26D9(sParam9);
			unk_0x4A096F645CED26D9(sParam9);
			if (func_294(uParam3))
			{
				func_293("DPAD_FRIEND");
			}
			else if (func_292(uParam3))
			{
				func_293("DPAD_FRIEND");
			}
			else if (func_291(uParam3))
			{
				func_293("DPAD_CREW");
			}
			else
			{
				func_293("");
			}
			unk_0xE1FDD153F5858534();
		}
	}
}

bool func_291(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(uParam0->f_33, 6);
}

bool func_292(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(uParam0->f_33, 5);
}

void func_293(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

int func_294(var uParam0)
{
	if (func_292(uParam0) && func_291(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_295(var uParam0, int iParam1)
{
	if (func_307(iParam1))
	{
		unk_0xAD291B8F75D737AD(121);
	}
	else if (func_300(iParam1))
	{
		unk_0xAD291B8F75D737AD(122);
	}
	else if (((unk_0xCE990E643CD9D0E5(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xCE990E643CD9D0E5(Global_2425869[iParam1 /*443*/].f_420, 0))
	{
		unk_0xAD291B8F75D737AD(123);
	}
	else
	{
		if (func_296())
		{
			uParam0->f_36 = 0;
		}
		unk_0xF1B28F753235CE2A(uParam0->f_36);
	}
}

int func_296()
{
	if (unk_0xFC559366953F62B3())
	{
		if (func_298() || func_297())
		{
			return 1;
		}
	}
	return 0;
}

var func_297()
{
	return Global_2451787.f_16;
}

int func_298()
{
	if (unk_0xFC559366953F62B3())
	{
		return func_297();
	}
	return func_299(Global_4456448.f_82708);
}

int func_299(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4991[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_300(int iParam0)
{
	if ((func_850(iParam0, 0, 1) && func_304()) && func_301(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_301(int iParam0, bool bParam1)
{
	return func_302(iParam0, bParam1, 1);
}

int func_302(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_303(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630317[iParam0 /*595*/].f_11;
	if (iVar0 != func_5() && Global_1630317[iVar0 /*595*/].f_11.f_423 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_303(int iParam0, int iParam1)
{
	if (iParam0 != func_5())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_5())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 == iParam0 && Global_1630317[iParam0 /*595*/].f_11.f_423 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_304()
{
	if (func_246(unk_0x460153A63B9477BC()) || func_306())
	{
		if (!func_305(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	return 1;
}

int func_305(int iParam0)
{
	if (func_190(iParam0) == 236 || func_190(iParam0) == 150)
	{
		return func_212(iParam0);
	}
	return 0;
}

int func_306()
{
	switch (func_341(unk_0x460153A63B9477BC()))
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

int func_307(int iParam0)
{
	if (func_296())
	{
		if (func_850(iParam0, 0, 1))
		{
			return func_348(iParam0);
		}
	}
	if ((func_850(iParam0, 0, 1) && func_304()) && func_303(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_308(char* sParam0)
{
	unk_0x54AED56A452DCB4F(sParam0);
}

int func_309()
{
	int iVar0;
	
	if (Global_1574193)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_310()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574193)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_311(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_310() && iParam3 < func_309())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574193)
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
		if (Global_1574412 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (unk_0x95EF219D38B20CFF(*uParam1))
		{
			if (unk_0x830F007E19C63E14(*uParam1, sVar1))
			{
				unk_0xAD291B8F75D737AD(iParam3);
				if (unk_0xCE990E643CD9D0E5(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_308("");
				}
				else
				{
					unk_0xAD291B8F75D737AD(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x7BCC91F3C1CF24E8(sParam16))
				{
					func_293(sParam16);
				}
				else
				{
					func_308(&(uParam2->f_1));
				}
				unk_0xAD291B8F75D737AD(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_308("");
				}
				else
				{
					unk_0xAD291B8F75D737AD(65);
				}
				if (iParam12 == 1)
				{
					unk_0xAD291B8F75D737AD(iVar0);
				}
				else
				{
					unk_0xAD291B8F75D737AD(-1);
				}
				if (func_340())
				{
					func_308("");
				}
				else if (uParam2->f_108 == 6 && !unk_0x7BCC91F3C1CF24E8(sParam16))
				{
					unk_0xB23270F3D5E62FDE("FM_AE_ONE_INT");
					unk_0x6A826E35A3096ED0(sParam16);
					unk_0x42710E9E08FA375A(iParam17);
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 5 && !unk_0x7BCC91F3C1CF24E8(sParam16))
				{
					unk_0xB23270F3D5E62FDE("FM_AE_ONE_INT");
					unk_0x6A826E35A3096ED0(sParam16);
					unk_0x42710E9E08FA375A(iParam17);
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 7 && !unk_0x7BCC91F3C1CF24E8(sParam16))
				{
					unk_0xB23270F3D5E62FDE("FM_AE_TWO_INT");
					unk_0x6A826E35A3096ED0(sParam16);
					unk_0x42710E9E08FA375A(iParam17);
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 8 && !unk_0x7BCC91F3C1CF24E8(&(uParam2->f_104)))
				{
					unk_0xB23270F3D5E62FDE("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						unk_0x5BC8B357341A4FEE(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						unk_0x42710E9E08FA375A(iParam10);
					}
					unk_0x6A826E35A3096ED0(&(uParam2->f_104));
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 9)
				{
					unk_0xB23270F3D5E62FDE("FM_AE_CASH");
					unk_0x5181FCFE1210A213(iParam10, 1);
					unk_0x2042E9CA4306F725();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						unk_0xB23270F3D5E62FDE("FM_AE_CASH");
						unk_0x5181FCFE1210A213(iParam10, 1);
						unk_0x2042E9CA4306F725();
					}
					else
					{
						unk_0xB23270F3D5E62FDE("FM_NG_CASH");
						unk_0x5181FCFE1210A213(iParam10, 1);
						unk_0x2042E9CA4306F725();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !unk_0x7BCC91F3C1CF24E8(&(uParam2->f_104)))
					{
						func_293(&(uParam2->f_104));
					}
					else
					{
						func_308("");
					}
				}
				else if (iParam14 != -1)
				{
					unk_0xB23270F3D5E62FDE("STRING");
					unk_0x7899A951E85F4B28(iParam14, 6);
					unk_0x2042E9CA4306F725();
				}
				else if (fParam13 != -1f)
				{
					unk_0xB23270F3D5E62FDE("NUMBER");
					unk_0x5BC8B357341A4FEE(fParam13, 1);
					unk_0x2042E9CA4306F725();
				}
				else if (iParam10 != -1)
				{
					unk_0xAD291B8F75D737AD(iParam10);
				}
				else
				{
					func_308("");
				}
				if (uParam2->f_108 == 6)
				{
					func_308("");
				}
				else
				{
					func_308(&sParam4);
				}
				func_295(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x7BCC91F3C1CF24E8(sParam8))
				{
					func_308("");
					func_308("");
				}
				else
				{
					unk_0x4A096F645CED26D9(sParam8);
					unk_0x4A096F645CED26D9(sParam8);
				}
				if (func_294(uParam2))
				{
					func_293("DPAD_FRIEND");
				}
				else if (func_292(uParam2))
				{
					func_293("DPAD_FRIEND");
				}
				else if (func_291(uParam2))
				{
					func_293("DPAD_CREW");
				}
				else
				{
					func_293("");
				}
				unk_0xE1FDD153F5858534();
			}
		}
	}
}

int func_312(int iParam0)
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

bool func_313(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_348(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_5();
}

int func_314(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_246(iParam0)) && !func_247(iParam0))
	{
		iVar0 = func_318();
	}
	iVar1 = func_317(iParam0);
	if (!iVar1 == -1)
	{
		return func_315(iVar1);
	}
	return iVar0;
}

int func_315(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_316(iParam0);
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

var func_316(int iParam0)
{
	return Global_2417956.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_317(int iParam0)
{
	if (!iParam0 == func_5())
	{
		if (func_313(iParam0, 1))
		{
			return Global_2417956.f_818.f_11[func_65(iParam0)];
		}
	}
	return -1;
}

int func_318()
{
	return 21;
}

char* func_319(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
			if (unk_0x1CB1AF03C74FCE70())
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
			if (unk_0x1CB1AF03C74FCE70())
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

int func_320(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_324(iParam3))
	{
		*fParam1 = (func_321(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_312(iParam3))
	{
		*fParam1 = (func_321(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_321(int iParam0, int iParam1)
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
			if (unk_0x1CB1AF03C74FCE70())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_323(to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x1CB1AF03C74FCE70())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_322(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_322(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_323(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_324(int iParam0)
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

int func_325(int iParam0)
{
	int iVar0;
	
	iVar0 = func_328(iParam0);
	if (iVar0 == -1)
	{
		func_326(iParam0, 1);
		return 0;
	}
	Global_1389221[iVar0 /*5*/].f_4 = 1;
	return Global_1389221[iVar0 /*5*/].f_2;
}

void func_326(int iParam0, bool bParam1)
{
	if (!func_850(iParam0, 0, 1))
	{
		return;
	}
	if (func_328(iParam0) != -1)
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
	if (func_327(iParam0))
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

int func_327(int iParam0)
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

int func_328(int iParam0)
{
	int iVar0;
	
	if (!func_850(iParam0, 0, 1))
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
			func_329(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_329(int iParam0)
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
	func_330(&(Global_1389221[iVar2 /*5*/]));
	Global_1389382 = (Global_1389382 - 1);
}

void func_330(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_5();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x25DDB354A40FFCDB())
	{
		uParam0->f_3 = unk_0x6CAAB7E78B5D978A();
	}
}

struct<4> func_331(int iParam0)
{
	char cVar0[32];
	
	if (func_850(iParam0, 0, 1))
	{
		Global_2515173 = { func_66(iParam0) };
		if (unk_0xC6C08C02733D02C8())
		{
			if (func_282(Global_2515173))
			{
				if (!unk_0xA20DDBBB15EC6235(&Global_2515173))
				{
					return cVar0;
				}
			}
		}
		else if (!unk_0xF9A94F315B890564(0))
		{
			return cVar0;
		}
		if (func_335(&Global_2515173))
		{
			Global_2515103 = { func_333(iParam0) };
			func_332(&Global_2515103, &cVar0);
		}
	}
	return cVar0;
}

void func_332(var uParam0, char* sParam1)
{
	unk_0xA36843D7CCD081D6(uParam0, 35, sParam1);
}

struct<35> func_333(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_334(iParam0))
	{
		return Global_1312928[unk_0x460153A63B9477BC() /*35*/];
	}
	Var0 = { func_66(iParam0) };
	unk_0x192BD21E18525C69(&Var1, 35, &Var0);
	return Var1;
}

int func_334(int iParam0)
{
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		return 1;
	}
	return 0;
}

int func_335(var uParam0)
{
	if (unk_0xDCA94C1EA9942FBD())
	{
		if (unk_0xE2FBD13450B2DA21() && unk_0xBF9EC1ED7E386622(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_336(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_205(iParam0) || func_338(iParam0)) || func_204(iParam0))
		{
			return 0;
		}
	}
	if (!func_337(iParam0))
	{
		return 0;
	}
	if ((!func_350(iParam0) && Global_2425869[iParam0 /*443*/].f_240 == -1) && !func_349(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_337(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_142, 22);
}

int func_338(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 10) || unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 9));
	}
	return 0;
}

int func_339(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_5())
	{
		return 0;
	}
	if (func_16(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (unk_0xCE990E643CD9D0E5(Global_1590682[iVar0 /*883*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_340()
{
	switch (func_341(unk_0x460153A63B9477BC()))
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
	switch (func_190(unk_0x460153A63B9477BC()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_247(unk_0x460153A63B9477BC()))
	{
		switch (func_341(unk_0x460153A63B9477BC()))
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
	if (func_305(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	return 0;
}

int func_341(int iParam0)
{
	if (func_241(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_342(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 && func_343(Global_1630317[iParam0 /*595*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1)
	{
		if (func_343(Global_1630317[iParam0 /*595*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_343(int iParam0)
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
	return func_344(iParam0, 0);
	return 0;
}

int func_344(int iParam0, int iParam1)
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

void func_345(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_850(unk_0xF1110FE23C67293A(iVar0), 0, 1))
		{
			iVar1 = unk_0xF1110FE23C67293A(iVar0);
			if (!func_16(iVar1, 0))
			{
				if ((func_350(iVar1) || Global_2425869[iVar1 /*443*/].f_240 != -1) || func_349(iVar1))
				{
					if (func_346(iVar1, iParam1, 0))
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

int func_346(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_5())
	{
		if (!bParam2)
		{
			if (func_347(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1630317[iParam0 /*595*/].f_11 != func_5())
		{
			return iParam1 == Global_1630317[iParam0 /*595*/].f_11;
		}
	}
	return 0;
}

int func_347(int iParam0, int iParam1)
{
	if (iParam1 != func_5())
	{
		if (iParam0 != func_5())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 != func_5())
			{
				if (Global_1630317[iParam0 /*595*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_348(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_5())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_349(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_196 != 0;
}

int func_350(int iParam0)
{
	if (func_850(iParam0, 0, 1))
	{
		if (func_850(unk_0x460153A63B9477BC(), 0, 1))
		{
			if (unk_0x56B60AE958412839(iParam0, unk_0x460153A63B9477BC()) || (func_341(iParam0) == 233 && func_351(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_351(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_352(unk_0x460153A63B9477BC());
	bVar1 = func_352(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

bool func_352(int iParam0)
{
	return func_353(&(Global_2425869[iParam0 /*443*/].f_429), 0);
}

bool func_353(var uParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, iParam1);
}

void func_354(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		unk_0x830F007E19C63E14(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xAD291B8F75D737AD(iParam1);
		unk_0xAD291B8F75D737AD(iParam2);
		unk_0xE1FDD153F5858534();
	}
}

void func_355(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1377233.f_2 == 0)
		{
			Global_1377233.f_2 = 1;
		}
	}
	else if (Global_1377233.f_2 == 1)
	{
		Global_1377233.f_2 = 0;
	}
}

void func_356()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 1))
	{
		if (func_360())
		{
			func_357();
		}
	}
}

void func_357()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2440049.f_2834[iVar0 /*80*/].f_2 != 0)
		{
			Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
			func_358(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_358(var uParam0, int iParam1)
{
	func_359(uParam0, iParam1);
}

void func_359(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_360()
{
	return Global_2440049.f_2834[0 /*80*/].f_1 != 0;
}

int func_361()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 0) && func_360())
	{
		return 1;
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 1) && func_360())
	{
		return 1;
	}
	return 0;
}

int func_362()
{
	if (func_360())
	{
		if (func_363(Global_2440049.f_2834[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_363(int iParam0)
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

int func_364()
{
	if (func_360())
	{
		if (func_365(Global_2440049.f_2834[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_365(int iParam0)
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
		case joaat("MPSV_LP0_31"):
		case 80:
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_366(int iParam0)
{
	if (Global_1377233.f_1 != Global_1377233)
	{
		Global_1377233.f_1 = Global_1377233;
	}
	if (Global_1377233 != iParam0)
	{
		Global_1377233 = iParam0;
	}
}

int func_367(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	char* sVar6;
	
	StringCopy(&Var0, "", 16);
	bVar2 = iParam1 == 20;
	bVar3 = func_415(iParam1);
	fVar4 = func_414();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_413())
		{
			if (func_412() > 0 && Global_1574193)
			{
				unk_0xD10328357EA7B9E5();
				unk_0x530DC1525CA60B00(fVar4);
				unk_0x4CB4237D8858ADA6(18);
				if (unk_0xDABD547F0DF2906C())
				{
					unk_0x64083C4199676F44();
				}
				unk_0x4CB4237D8858ADA6(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_399())
		{
			func_398(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 26))
	{
		func_398(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_22(&(uParam2->f_19)))
	{
		if (func_412() == 1)
		{
			func_397(bVar3, uParam0, 0);
			func_20(&(uParam2->f_19), 0, 0);
			func_398(uParam0, uParam2, 0);
			unk_0xBE20AB8238688965(&(Global_2540384.f_4656), 5);
		}
	}
	if (func_22(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xDABD547F0DF2906C())
		{
			unk_0x64083C4199676F44();
		}
		unk_0x4CB4237D8858ADA6(10);
		if (func_19(&(uParam2->f_19), 10000, 0) || (func_412() == 0 && !bParam5))
		{
			func_398(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_396();
				if (iParam1 == 27 || iParam1 == 28)
				{
					unk_0xD10328357EA7B9E5();
				}
				unk_0x4CB4237D8858ADA6(18);
			}
			if (!unk_0xCE990E643CD9D0E5(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_396();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0xD10328357EA7B9E5();
					}
					unk_0x4CB4237D8858ADA6(18);
				}
				unk_0x530DC1525CA60B00(fVar4);
				if (func_397(bVar3, uParam0, 0))
				{
					func_354(uParam0, 0, 0);
					sVar1 = func_394(iParam1, &(Global_4456448.f_82715), bParam4);
					Var0 = { func_392(iParam1) };
					if (bParam4)
					{
						func_389(uParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_384(uParam0, func_386(uParam2), func_385(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_377(uParam2);
						if (!unk_0x7BCC91F3C1CF24E8(sParam6))
						{
							sVar6 = sParam6;
						}
						func_375(uParam0, sVar6, func_376(), -1);
					}
					else if (func_296())
					{
						uParam2->f_34 = Global_1574192;
						func_389(uParam0, sVar1, &Var0, 1, -1, Global_1574192, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_368(iParam1);
						uParam2->f_34 = Global_1574192;
						func_389(uParam0, sVar1, "", 0, iVar5, Global_1574192, 1);
					}
					else
					{
						iVar5 = func_368(iParam1);
						func_389(uParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					unk_0xBE20AB8238688965(&(uParam2->f_33), 0);
				}
			}
			if (unk_0xCE990E643CD9D0E5(uParam2->f_33, 0))
			{
				Global_1574191 = uParam3;
				Global_1574190 = 1;
				unk_0x530DC1525CA60B00(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574192)
					{
						unk_0xD2459066EA58CE43(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_368(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_374())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 40:
			iVar0 = 22;
			break;
		
		case 0:
		case 31:
		case 30:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
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
		
		case 26:
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
			if (func_373(unk_0x460153A63B9477BC()))
			{
				iVar0 = 20;
			}
			if (func_372(unk_0x460153A63B9477BC()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_371(unk_0x460153A63B9477BC()))
	{
		iVar0 = 2;
	}
	if (func_369())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_369()
{
	if (unk_0xFC559366953F62B3())
	{
		return func_61();
	}
	return func_370(Global_4456448.f_82708);
}

int func_370(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5009[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_371(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 4;
}

bool func_372(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 7;
}

bool func_373(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 2;
}

bool func_374()
{
	return Global_4456448.f_1 == 0;
}

void func_375(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		unk_0x830F007E19C63E14(*uParam0, "SET_TITLE");
		if (unk_0x7BCC91F3C1CF24E8(sParam2))
		{
			func_293(sParam1);
		}
		else
		{
			unk_0xB23270F3D5E62FDE("FM_AE_BRACKT");
			unk_0x6A826E35A3096ED0(sParam1);
			unk_0x6A826E35A3096ED0(sParam2);
			unk_0x2042E9CA4306F725();
		}
		func_293("");
		if (iParam3 != -1)
		{
			unk_0xAD291B8F75D737AD(iParam3);
		}
		unk_0xE1FDD153F5858534();
	}
}

char* func_376()
{
	switch (func_341(unk_0x460153A63B9477BC()))
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

char* func_377(var uParam0)
{
	switch (uParam0->f_112)
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
	switch (uParam0->f_110)
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
	switch (func_341(unk_0x460153A63B9477BC()))
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
			if (func_380())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_379(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_379(1))
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
			if (func_378(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_378(int iParam0)
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

bool func_379(bool bParam0)
{
	return func_301(unk_0x460153A63B9477BC(), bParam0);
}

bool func_380()
{
	return (func_383() && func_381(func_382()));
}

int func_381(int iParam0)
{
	return func_303(iParam0, 1);
}

int func_382()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_35;
}

bool func_383()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 148;
}

void func_384(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		unk_0x830F007E19C63E14(*uParam0, "SET_TITLE");
		if (unk_0x7BCC91F3C1CF24E8(sParam2))
		{
			func_293(sParam1);
		}
		else if (func_190(unk_0x460153A63B9477BC()) == 133)
		{
			unk_0xB23270F3D5E62FDE("FM_AE_BRACKT_C");
			unk_0x6A826E35A3096ED0(sParam1);
			unk_0x6A826E35A3096ED0(sParam2);
			unk_0x2042E9CA4306F725();
		}
		else
		{
			unk_0xB23270F3D5E62FDE("FM_AE_BRACKT");
			unk_0x6A826E35A3096ED0(sParam1);
			unk_0x6A826E35A3096ED0(sParam2);
			unk_0x2042E9CA4306F725();
		}
		func_293("");
		if (iParam3 != -1)
		{
			unk_0xAD291B8F75D737AD(iParam3);
		}
		unk_0xE1FDD153F5858534();
	}
}

char* func_385(var uParam0)
{
	int iVar0;
	
	iVar0 = func_190(unk_0x460153A63B9477BC());
	if (func_419())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_189())
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

char* func_386(var uParam0)
{
	int iVar0;
	
	iVar0 = func_190(unk_0x460153A63B9477BC());
	if (func_419())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_388() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_388() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_189())
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
			if (func_387() == 1)
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

int func_387()
{
	return Global_2540384.f_5112;
}

int func_388()
{
	if (func_190(unk_0x460153A63B9477BC()) == 132)
	{
		return Global_2540384.f_5107;
	}
	return -1;
}

void func_389(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		unk_0x830F007E19C63E14(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_308(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0xB23270F3D5E62FDE(sParam1);
			unk_0x42710E9E08FA375A(iParam5);
			unk_0x2042E9CA4306F725();
		}
		else
		{
			func_293(sParam1);
		}
		if (func_413() && iParam6)
		{
			if (func_391())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			unk_0xB23270F3D5E62FDE("LBD_DPD_CNT");
			unk_0x42710E9E08FA375A(iVar0);
			unk_0x42710E9E08FA375A(iVar1);
			unk_0x2042E9CA4306F725();
		}
		else
		{
			func_293(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xAD291B8F75D737AD(iParam4);
			if (func_390(unk_0x460153A63B9477BC()))
			{
				unk_0xAD291B8F75D737AD(166);
			}
			else if (func_61())
			{
				unk_0xAD291B8F75D737AD(220);
			}
		}
		unk_0xE1FDD153F5858534();
	}
}

int func_390(int iParam0)
{
	if (func_373(iParam0) || func_372(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_391()
{
	return Global_1574193;
}

struct<4> func_392(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_393(unk_0x460153A63B9477BC()) || func_371(unk_0x460153A63B9477BC()))
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
			StringIntConCat(&Var0, Global_4456448.f_525, 16);
			break;
	}
	if (func_296() && unk_0xFC559366953F62B3())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_525, 16);
	}
	return Var0;
}

bool func_393(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 5;
}

char* func_394(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_296() || unk_0x7BCC91F3C1CF24E8(sParam1)))
	{
		uVar0 = func_395();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 25)
	{
		if (Global_1574431 == 0)
		{
			Global_1574431 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!unk_0x7BCC91F3C1CF24E8(sParam1))
	{
		if (Global_1574431 == 1)
		{
			Global_1574431 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574431 == 0)
		{
			Global_1574431 = 1;
		}
		switch (iParam0)
		{
			case 0:
			case 31:
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
			case 26:
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
			
			case 22:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_395()
{
	if (unk_0x45A083C1167D5EA3())
	{
		return "HUD_LBD_FMF";
	}
	if (unk_0x8F4B4AF1CA27A518())
	{
		return "HUD_LBD_FMC";
	}
	if (unk_0xE598AA6FDE2D9C78())
	{
		return "HUD_LBD_FMS";
	}
	if (unk_0x0287AAEDDA576E74())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_396()
{
	Global_42556 = 1;
}

bool func_397(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		*uParam1 = unk_0x5DEA4192B46CB99B("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*uParam1 = unk_0x5DEA4192B46CB99B("MP_SPECTATOR_CARD");
	}
	else
	{
		*uParam1 = unk_0x5DEA4192B46CB99B("mp_matchmaking_card");
	}
	return unk_0x95EF219D38B20CFF(*uParam1);
}

void func_398(var uParam0, var uParam1, bool bParam2)
{
	unk_0xD2459066EA58CE43(&(uParam1->f_33), 7);
	Global_1574191 = 0;
	func_286();
	Global_1574190 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_22(&(uParam1->f_19)))
		{
			func_106(&(uParam1->f_19));
			unk_0xD2459066EA58CE43(&(Global_2540384.f_4656), 5);
		}
	}
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		unk_0x2E352DDBBF674246(uParam0);
	}
	if (unk_0xCE990E643CD9D0E5(uParam1->f_33, 0))
	{
		unk_0xD2459066EA58CE43(&(uParam1->f_33), 0);
	}
	unk_0x530DC1525CA60B00(0f);
}

int func_399()
{
	if (func_411())
	{
		return 0;
	}
	if (func_248())
	{
		return 0;
	}
	if (!func_409())
	{
		return 0;
	}
	if (!func_222())
	{
		return 0;
	}
	if (func_408(8, -1))
	{
		return 0;
	}
	if (func_412() == 2)
	{
		return 0;
	}
	if (Global_2540384.f_4607)
	{
		return 0;
	}
	if (func_182())
	{
		return 0;
	}
	else if (!func_252(unk_0x460153A63B9477BC(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_407(1) || func_405(1)) || Global_22411.f_124) || Global_22411)
	{
		return 0;
	}
	if (unk_0xF0C12886E5C1B20E())
	{
		return 0;
	}
	if (func_404() && Global_1696334 == 2)
	{
		return 0;
	}
	if (func_402(unk_0x460153A63B9477BC()) && !func_404())
	{
		return 0;
	}
	if (Global_1663771)
	{
		return 0;
	}
	if (Global_1663776)
	{
		return 0;
	}
	if (func_401(0))
	{
		return 0;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 4))
	{
		return 0;
	}
	if (Global_1370294)
	{
		return 0;
	}
	if ((Global_1690739.f_718.f_5 || Global_1693565.f_718.f_5) || Global_1689767.f_718.f_5)
	{
		return 0;
	}
	if ((Global_1697303.f_724.f_5 || Global_1697303.f_744.f_724.f_5) || Global_1697303.f_1497.f_724.f_5)
	{
		return 0;
	}
	if (Global_1704127.f_726.f_5)
	{
		return 0;
	}
	if (func_400(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if ((Global_1370330 || Global_1370331) || Global_1370332)
	{
		return 0;
	}
	return 1;
}

bool func_400(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314.f_4, 6);
}

bool func_401(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_45, iParam0);
}

int func_402(int iParam0)
{
	if (func_16(iParam0, 0))
	{
		return 1;
	}
	if (func_403())
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

bool func_403()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

bool func_404()
{
	return (unk_0xCE990E643CD9D0E5(Global_4456448.f_30, 12) && unk_0xCE990E643CD9D0E5(Global_1696335, 0));
}

int func_405(bool bParam0)
{
	if (unk_0xDE4629DF35A51BEF())
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			if (func_406(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0x22D6FB6153F774D3(0, 25) || unk_0x22D6FB6153F774D3(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_22411.f_130)
	{
		return 0;
	}
	if (unk_0x22D6FB6153F774D3(0, 19) || (!bParam0 && unk_0xB9C0D9B37277621D(0, 19)))
	{
		return 1;
	}
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (((unk_0x22D6FB6153F774D3(0, 166) || unk_0x22D6FB6153F774D3(0, 167)) || unk_0x22D6FB6153F774D3(0, 168)) || unk_0x22D6FB6153F774D3(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((unk_0xB9C0D9B37277621D(0, 166) || unk_0xB9C0D9B37277621D(0, 167)) || unk_0xB9C0D9B37277621D(0, 168)) || unk_0xB9C0D9B37277621D(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_406(int iParam0)
{
	int iVar0;
	
	if (unk_0xE8CD061CB2B99F32())
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
		{
			unk_0x1386E5E658CE3032(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("WEAPON_HEAVYSNIPER_MK2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_407(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22411.f_4 && Global_22411.f_104 == 4);
	}
	return Global_22411.f_4;
}

bool func_408(int iParam0, int iParam1)
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

int func_409()
{
	if (func_410())
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

bool func_410()
{
	return Global_1312458;
}

bool func_411()
{
	return unk_0x578C4EF320340AF7() <= Global_22550.f_5878 + 100;
}

int func_412()
{
	return Global_1377236.f_68;
}

int func_413()
{
	if (Global_1574192 > 16)
	{
		return 1;
	}
	return 0;
}

float func_414()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x1D5FD59B82DB8734()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_415(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 21:
		case 27:
		case 28:
		case 40:
			return 1;
		
		default:
	}
	return 0;
}

int func_416()
{
	if (func_421())
	{
		return 1;
	}
	if (func_204(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_419())
	{
		return 1;
	}
	if (func_246(unk_0x460153A63B9477BC()))
	{
		switch (func_190(unk_0x460153A63B9477BC()))
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
				if (!func_417(unk_0x460153A63B9477BC()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_417(unk_0x460153A63B9477BC()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_417(unk_0x460153A63B9477BC()))
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

bool func_417(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 4);
}

int func_418(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_246(unk_0x460153A63B9477BC()) && !func_247(unk_0x460153A63B9477BC())) && !func_305(unk_0x460153A63B9477BC()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_241(unk_0x460153A63B9477BC(), 0) && func_247(unk_0x460153A63B9477BC()))
		{
			return 1;
		}
		if (func_231(unk_0x460153A63B9477BC()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_419()
{
	return Global_1590555;
}

struct<4> func_420()
{
	struct<4> Var0;
	
	switch (Local_82.f_27)
	{
		case joaat("rhino"):
			StringCopy(&Var0, "UW_TMRHN", 16);
			break;
		
		case joaat("hydra"):
			StringCopy(&Var0, "UW_TMHYD", 16);
			break;
		
		case joaat("savage"):
			StringCopy(&Var0, "UW_TMSAV", 16);
			break;
		
		case joaat("valkyrie"):
			StringCopy(&Var0, "UW_TMVALK", 16);
			break;
		
		case joaat("buzzard"):
			StringCopy(&Var0, "UW_TMBUZ", 16);
			break;
	}
	return Var0;
}

int func_421()
{
	if (func_422(unk_0x460153A63B9477BC()))
	{
		return Global_1319161;
	}
	return 0;
}

int func_422(int iParam0)
{
	if (unk_0x25DDB354A40FFCDB())
	{
		if (func_16(iParam0, 0))
		{
			return unk_0x118E43E714532022(iParam0);
		}
	}
	return 0;
}

void func_423()
{
	struct<2> Var0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (func_16(unk_0x460153A63B9477BC(), 0))
	{
		return;
	}
	switch (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17)
	{
		case 0:
			if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 == 0)
			{
				if (Local_82.f_241 == 0)
				{
					func_753();
				}
			}
			if (!unk_0xCE990E643CD9D0E5(iLocal_86, 22))
			{
				if (Local_82.f_27 == joaat("rhino") && Local_82.f_29 == 2)
				{
					func_722(Local_82.f_30[0 /*3*/]);
					unk_0xBE20AB8238688965(&iLocal_86, 22);
				}
				else if (!func_69(Local_82.f_30[0 /*3*/], 0f, 0f, 0f, 0))
				{
					func_722(Local_82.f_30[0 /*3*/]);
					unk_0xBE20AB8238688965(&iLocal_86, 22);
				}
			}
			func_721();
			func_715();
			if (Local_82.f_241 == 0)
			{
				func_712(1);
			}
			func_711(0);
			if (Local_82.f_241 == 0)
			{
				if (!Local_82.f_27 == joaat("hydra") && !Local_82.f_27 == joaat("rhino"))
				{
					func_199();
				}
				else if (func_748())
				{
					func_199();
				}
				if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0)
				{
					if (!unk_0xCE990E643CD9D0E5(iLocal_87, 1))
					{
						func_710(129);
						func_689(1);
						unk_0xBE20AB8238688965(&iLocal_87, 1);
						unk_0x873FC7B9D84F77F0(0);
					}
					if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 6))
					{
						if (Local_82.f_28 > 1 || (Local_82.f_28 == 1 && func_112() > 1))
						{
							if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 4))
							{
								Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 = 0;
								unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), 6);
							}
						}
					}
				}
				else if (unk_0xCE990E643CD9D0E5(iLocal_87, 1))
				{
					unk_0xD2459066EA58CE43(&iLocal_87, 1);
					func_688(1);
					func_687();
					func_689(0);
				}
			}
			if (Local_82.f_241 == 1)
			{
				func_686(&iVar1, &uVar2);
				iLocal_543 = iVar1;
				func_685(0);
				if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0)
				{
					if (!func_684())
					{
						unk_0xBE20AB8238688965(&iLocal_87, 19);
					}
					if (func_271("UW_ABTSC") || func_271("UW_ABTS"))
					{
						func_9();
					}
					unk_0x873FC7B9D84F77F0(0);
					if ((func_683("UW_MINV") || func_683("UW_TIMELA")) || func_683("UW_TIMEL"))
					{
						unk_0xD289B55B6AADBA10(1);
					}
					func_195();
					func_672(129, 0f, 0f, 1, 1, 1, 0);
					func_662(1);
					func_661();
					unk_0x34FEEAC2548C3789(0.1f);
					iLocal_91 = unk_0xB9FD7D4438BECDFC();
					unk_0x53797676AD34A9AA(0);
					func_660(1);
					func_659(1);
					if (Local_82.f_27 != joaat("rhino"))
					{
						func_638(1);
					}
					iLocal_97 = unk_0x86FB3A0D4870FE62(unk_0x9B0761B4C3EB8BC7());
					unk_0xD3D9D7C84656DAE5(unk_0x9B0761B4C3EB8BC7(), iLocal_95);
					unk_0x0C0DE28672975DC3("DisableFlightMusic", 1);
					unk_0x21723EF7B2FCC4CC("MP_MC_START");
					unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 184, true);
					unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 151, false);
					func_637(0);
					Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_9 = iLocal_543;
					if (!func_748())
					{
						func_636(63, "UW_TITLE", "UW_DESC", func_318(), -1, func_318(), 1, 0);
					}
					else if (Local_82.f_27 == joaat("hydra") || Local_82.f_27 == joaat("rhino"))
					{
						func_636(63, "UW_TITLEC", "UW_DESCC", func_318(), -1, func_318(), 1, 0);
					}
					else
					{
						iVar1++;
						StringCopy(&Var0, "UW_TM", 16);
						StringIntConCat(&Var0, iVar1, 16);
						func_635(63, &Var0, "UW_DESCCT", "UW_TITLE", 15000, -1, -1082130432, "", func_318(), func_318(), 0);
					}
					Local_83.f_9 = unk_0x5A002C4821A13338();
					func_637(0);
					func_633(3, 0, 1);
					func_20(&uLocal_557, 0, 0);
					Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 = 1;
				}
				else
				{
					func_195();
					if (func_271("UW_ABTSC") || func_271("UW_ABTS"))
					{
						func_9();
					}
					if (func_630("UW_HELP1", func_632(), func_631(1)) || func_630("UW_HELP1C", func_632(), func_631(1)))
					{
						unk_0xD289B55B6AADBA10(1);
					}
					Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 = 2;
					func_637(0);
					if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 == 0)
					{
					}
					else if (!func_629())
					{
					}
				}
			}
			else if (Local_82.f_241 == 3)
			{
				func_637(0);
				if (func_630("UW_HELP1", func_632(), func_631(1)) || func_630("UW_HELP1C", func_632(), func_631(1)))
				{
					unk_0xD289B55B6AADBA10(1);
				}
				if (!func_628())
				{
				}
				if (func_271("UW_ABTSC") || func_271("UW_ABTS"))
				{
					func_9();
				}
				func_195();
				Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 = 3;
			}
			else if (Local_82.f_241 > 3)
			{
				if (func_271("UW_ABTSC") || func_271("UW_ABTS"))
				{
					func_9();
				}
				func_637(0);
				Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 = 4;
			}
			else
			{
				if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0)
				{
					func_627();
					func_626();
					if (func_122())
					{
						func_661();
					}
				}
				if (func_748())
				{
					if (func_620(2, 0, 1, 0, 0))
					{
						if (func_271("UW_ABTSC") || func_271("UW_ABTS"))
						{
							func_9();
						}
						func_637(0);
						Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 = 4;
					}
				}
				else if (Local_82.f_27 == joaat("valkyrie"))
				{
					if (func_620(2, 0, 1, 0, 0))
					{
						if (func_271("UW_ABTSC") || func_271("UW_ABTS"))
						{
							func_9();
						}
						func_637(0);
						Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 = 4;
					}
				}
			}
			break;
		
		case 1:
			func_165(1);
			func_715();
			func_548();
			func_169();
			func_546();
			func_534();
			func_272(0);
			func_530();
			func_527();
			func_627();
			func_626();
			if (!unk_0xCE990E643CD9D0E5(iLocal_86, 26))
			{
				if (!func_526(55))
				{
					if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 11))
					{
						if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 10))
						{
							if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_10 == -1)
							{
								if (!func_748())
								{
									if (!func_271("UW_ATTK"))
									{
										func_265("UW_ATTK", 0);
									}
								}
								else if (Local_82.f_27 == joaat("hydra") || Local_82.f_27 == joaat("rhino"))
								{
									if (!func_271("UW_ATTK"))
									{
										func_265("UW_ATTK", 0);
									}
								}
								else if (!func_271("UW_ATTK"))
								{
									func_686(&iVar1, &uVar2);
									iVar1++;
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar1, 16);
									func_265("UW_ATTK", 0);
								}
							}
							else if (func_271("UW_ATTK"))
							{
								func_9();
							}
						}
					}
				}
			}
			func_525();
			if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0)
			{
				if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_10 == -1)
				{
					func_661();
				}
			}
			if (!func_850(unk_0x460153A63B9477BC(), 1, 1))
			{
				Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 = 2;
				func_9();
				unk_0xBE20AB8238688965(&iLocal_86, 21);
			}
			else if (func_182())
			{
				Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 = 2;
				func_9();
			}
			if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 == 1)
			{
				if (!func_524())
				{
					unk_0xBE20AB8238688965(&iLocal_86, 23);
					func_9();
					if (iLocal_543 > -1)
					{
						if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iLocal_543]))
						{
							func_25(&(Local_82.f_7[iLocal_543]));
						}
					}
					Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 = 2;
				}
			}
			if (Local_82.f_241 == 3)
			{
				func_688(1);
				Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 = 3;
			}
			else if (Local_82.f_241 > 3)
			{
				func_688(1);
				Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 = 4;
			}
			else if (func_748())
			{
				if (func_620(2, 0, 1, 0, 0))
				{
					Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 = 4;
				}
			}
			break;
		
		case 2:
			if (Local_82.f_241 == 3)
			{
				Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 = 3;
			}
			else if (Local_82.f_241 > 3)
			{
				Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 = 4;
			}
			func_458();
			if (func_628())
			{
				if (func_190(unk_0x460153A63B9477BC()) == 129)
				{
					if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !unk_0xEBB78303C505A9D7())
					{
						unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 398, false);
						if (unk_0xCE990E643CD9D0E5(iLocal_86, 22))
						{
							func_457();
							unk_0xD2459066EA58CE43(&iLocal_86, 22);
						}
						func_687();
						func_454();
						func_452(0);
						func_450(0);
						unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 184, false);
						unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 151, true);
						func_689(0);
						func_688(1);
					}
					func_449();
				}
			}
			else if (!unk_0xCE990E643CD9D0E5(iLocal_87, 8))
			{
				unk_0xBE20AB8238688965(&iLocal_87, 8);
			}
			if (!func_203())
			{
				func_448();
				func_546();
				func_165(0);
				func_534();
				func_272(1);
				func_530();
				if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0)
				{
				}
			}
			else
			{
				func_447();
			}
			func_440();
			func_439();
			func_548();
			if (!unk_0xCE990E643CD9D0E5(iLocal_87, 7))
			{
				iVar3 = 0;
				while (iVar3 < 24)
				{
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_48[iVar3]))
					{
						if (!func_31(Local_82.f_48[iVar3]))
						{
							unk_0x46E5E2D7B31743C8(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar3]), unk_0x460153A63B9477BC(), 0);
						}
					}
					iVar3++;
				}
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_80[iVar3]))
					{
						if (!func_31(Local_82.f_80[iVar3]))
						{
							unk_0x46E5E2D7B31743C8(unk_0x3C6C6327BA564AEE(Local_82.f_80[iVar3]), unk_0x460153A63B9477BC(), 0);
						}
					}
					iVar3++;
				}
				unk_0xBE20AB8238688965(&iLocal_87, 7);
			}
			else if (Local_82.f_247 != iLocal_541)
			{
				iLocal_541 = Local_82.f_247;
				unk_0xD2459066EA58CE43(&iLocal_87, 7);
			}
			if (unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 11))
			{
				unk_0xD2459066EA58CE43(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), 11);
			}
			if (unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 10))
			{
				unk_0xD2459066EA58CE43(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), 10);
			}
			if (unk_0x86FB3A0D4870FE62(unk_0x9B0761B4C3EB8BC7()) == iLocal_95)
			{
				unk_0xD3D9D7C84656DAE5(unk_0x9B0761B4C3EB8BC7(), iLocal_97);
			}
			break;
		
		case 3:
			if (!unk_0xCE990E643CD9D0E5(iLocal_86, 31))
			{
				if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 12))
				{
					func_195();
					unk_0xBE20AB8238688965(&iLocal_86, 31);
				}
			}
			func_525();
			func_434();
			if (!func_203())
			{
				if (!unk_0xCE990E643CD9D0E5(Local_82.f_3, 14) && !unk_0xCE990E643CD9D0E5(Local_82.f_3, 12))
				{
					func_272(1);
				}
				func_534();
				func_546();
				func_530();
				func_425();
			}
			func_458();
			func_439();
			func_548();
			if (Local_82.f_241 > 3)
			{
				Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 = 4;
			}
			break;
		
		case 4:
			func_793();
			break;
	}
	func_424();
}

void func_424()
{
	int iVar0;
	
	if (iLocal_568 != Local_82.f_616)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xCE990E643CD9D0E5(Local_82.f_616, iVar0))
			{
				if (!unk_0xCE990E643CD9D0E5(iLocal_568, iVar0))
				{
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iVar0]))
					{
						if (unk_0xF05B7723022657B3(Local_82.f_7[iVar0]))
						{
							unk_0x5DC21979EC6C531F(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 2);
							func_25(&(Local_82.f_7[iVar0]));
							unk_0xBE20AB8238688965(&iLocal_568, iVar0);
						}
					}
					else
					{
						unk_0xBE20AB8238688965(&iLocal_568, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_425()
{
	if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 14))
	{
		if (!unk_0xCE990E643CD9D0E5(iLocal_87, 5))
		{
			if (func_428(0, 1, 1, 1))
			{
				if (func_748())
				{
					func_427("UW_TFEWC", 30000);
				}
				else
				{
					func_427("UW_TFEW", 30000);
				}
				func_426(1);
				unk_0xBE20AB8238688965(&iLocal_87, 5);
			}
		}
	}
}

void func_426(int iParam0)
{
	unk_0x642EF0F7FC397A2C(3, 21, 200, 0, 0);
	if (iParam0 && !func_360())
	{
		unk_0xC4CC25B68A91D144(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_427(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, 0, iParam1);
}

int func_428(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && unk_0xDABD547F0DF2906C())
	{
		return 0;
	}
	if (func_433())
	{
		return 0;
	}
	if (!unk_0x87F0CB19476706C3())
	{
		return 0;
	}
	if (func_411())
	{
		return 0;
	}
	if (func_250())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_252(unk_0x460153A63B9477BC(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_432(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	if (func_431())
	{
		return 0;
	}
	if (unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		return 0;
	}
	if (unk_0xF0C12886E5C1B20E())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	if (Global_1574190)
	{
		return 0;
	}
	if (func_430())
	{
		return 0;
	}
	if (func_429())
	{
		return 0;
	}
	if (func_182())
	{
		return 0;
	}
	if (Global_74030)
	{
		return 0;
	}
	if (Global_2550454)
	{
		return 0;
	}
	if (func_213(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	return 1;
}

bool func_429()
{
	return Global_2451787.f_689;
}

bool func_430()
{
	return Global_2451787.f_842;
}

bool func_431()
{
	return Global_2440049.f_3158.f_578;
}

int func_432(int iParam0)
{
	if (Global_2425869[iParam0 /*443*/].f_212 == 0)
	{
		return 0;
	}
	return 1;
}

int func_433()
{
	if (Global_21005 != 0 || unk_0x6A5CC4A2C9D9ED8D())
	{
		return 1;
	}
	return 0;
}

void func_434()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (!func_271("UW_EXPL") && !func_271("UW_EXPLC"))
	{
		func_9();
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (!unk_0xCE990E643CD9D0E5(iLocal_86, (27 + iVar2)))
		{
			if (unk_0xF7DE07F319727299(Local_82.f_7[iVar2]))
			{
				if (!unk_0xA59F96B50B97E63C(unk_0x770D3B2B4702434A(Local_82.f_7[iVar2]), 0))
				{
					unk_0xBE20AB8238688965(&iLocal_86, (27 + iVar2));
					iLocal_544[iVar2] = unk_0x5E54B0823F46079E();
					unk_0x2DB2D4C3CB88500D(iLocal_544[iVar2], "Explosion_Countdown", unk_0x770D3B2B4702434A(Local_82.f_7[iVar2]), "GTAO_FM_Events_Soundset", 0, 0);
					unk_0xD4974F3117C9F232(iLocal_544[iVar2], "Time", 30f);
				}
			}
		}
		iVar2++;
	}
	if (!func_748())
	{
		if (unk_0xF7DE07F319727299(Local_82.f_7[0]))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_82.f_319, 0))
			{
				if (!unk_0xA59F96B50B97E63C(unk_0x770D3B2B4702434A(Local_82.f_7[0]), 0))
				{
					if ((func_438() - func_126(&(Local_82.f_324), 0, 0)) >= 0)
					{
						if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0 || unk_0xCE990E643CD9D0E5(Local_82.f_3, 14))
						{
							if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_82.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_203())
								{
									func_437();
									func_171((func_438() - func_126(&(Local_82.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
					}
					else
					{
						if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0 || unk_0xCE990E643CD9D0E5(Local_82.f_3, 14))
						{
							if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_82.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_203())
								{
									func_437();
									func_171(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
						if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0)
						{
							func_688(1);
						}
						if (unk_0xF05B7723022657B3(Local_82.f_7[0]))
						{
							unk_0x0312E5501F93E5AB(unk_0x770D3B2B4702434A(Local_82.f_7[0]), 0);
							unk_0xD4D34706EA3EAF64(unk_0x770D3B2B4702434A(Local_82.f_7[0]), true);
							if (!unk_0x442D6659150AF4B3(unk_0x36FE6D3220816ADA(unk_0x770D3B2B4702434A(Local_82.f_7[0]))))
							{
								unk_0x9B751DD1E3DE899A(unk_0x770D3B2B4702434A(Local_82.f_7[0]), 1, 0, -1);
								func_25(&(Local_82.f_7[0]));
							}
							else
							{
								unk_0x4D55B0532FB83535(unk_0x770D3B2B4702434A(Local_82.f_7[0]), 1, 0, 0);
								func_25(&(Local_82.f_7[0]));
							}
						}
					}
				}
			}
		}
		func_195();
		if (!func_203())
		{
			if (!unk_0xCE990E643CD9D0E5(iLocal_86, 12))
			{
				if (func_109(Local_82.f_7[0]))
				{
					if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
					{
						if (unk_0xACBCFA3095C5A434(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_82.f_7[0])))
						{
							if (!func_748())
							{
								if (!func_271("UW_EXPL"))
								{
									func_265("UW_EXPL", 0);
								}
							}
							else if (!func_271("UW_EXPLC"))
							{
								func_265("UW_EXPLC", 0);
							}
							unk_0xBE20AB8238688965(&iLocal_86, 12);
						}
					}
				}
			}
			else if (func_271("UW_EXPL") || func_271("UW_EXPLC"))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
				{
					if (!unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
					{
						func_9();
					}
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (unk_0xF7DE07F319727299(Local_82.f_7[iVar0]))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_82.f_319, iVar0))
				{
					if (!unk_0xA59F96B50B97E63C(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 0))
					{
						if ((func_438() - func_126(&(Local_82.f_324), 0, 0)) >= 0)
						{
							if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0 || unk_0xCE990E643CD9D0E5(Local_82.f_3, 14))
							{
								if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_203())
									{
										if (!bVar1)
										{
											func_437();
											func_171((func_438() - func_126(&(Local_82.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
											bVar1 = true;
										}
									}
								}
							}
						}
						else
						{
							if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0 || unk_0xCE990E643CD9D0E5(Local_82.f_3, 14))
							{
								if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_203())
									{
										if (!bVar1)
										{
											func_437();
											func_171(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
											bVar1 = true;
										}
									}
								}
							}
							if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0)
							{
								func_688(1);
							}
							if (func_435(Local_82.f_7[iVar0]))
							{
								if (unk_0xF05B7723022657B3(Local_82.f_7[iVar0]))
								{
									unk_0x0312E5501F93E5AB(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 0);
									unk_0xD4D34706EA3EAF64(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), true);
									if (!unk_0x442D6659150AF4B3(unk_0x36FE6D3220816ADA(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]))))
									{
										unk_0x9B751DD1E3DE899A(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 1, 0, -1);
										func_25(&(Local_82.f_7[iVar0]));
									}
									else
									{
										unk_0x4D55B0532FB83535(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 1, 0, 0);
										func_25(&(Local_82.f_7[iVar0]));
									}
								}
							}
						}
					}
				}
				if (!unk_0xCE990E643CD9D0E5(iLocal_86, 12))
				{
					if (func_109(Local_82.f_7[iVar0]))
					{
						if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
						{
							if (unk_0xACBCFA3095C5A434(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_82.f_7[iVar0])))
							{
								if (!func_203())
								{
									if (!func_748())
									{
										if (!func_271("UW_EXPL"))
										{
											func_265("UW_EXPL", 0);
										}
									}
									else if (!func_271("UW_EXPLC"))
									{
										func_265("UW_EXPLC", 0);
									}
									unk_0xBE20AB8238688965(&iLocal_86, 12);
								}
							}
						}
					}
				}
				else if (func_271("UW_EXPL") || func_271("UW_EXPLC"))
				{
					if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
					{
						if (!unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
						{
							func_9();
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_435(var uParam0)
{
	if (unk_0x663F84E7375B82E6(uParam0))
	{
		return 1;
	}
	if (func_436(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_436(var uParam0)
{
	if (!unk_0xAFF96FDC3971E7EA())
	{
		return 0;
	}
	if (!unk_0x3D70CCF2C9B362CD(uParam0))
	{
		return 0;
	}
	if (func_79(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_437()
{
	Global_1378744.f_1131 = 1;
}

int func_438()
{
	if (func_748())
	{
		return Global_262145.f_11383;
	}
	return Global_262145.f_11103;
}

void func_439()
{
	if (!unk_0xCE990E643CD9D0E5(iLocal_87, 4))
	{
		if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
				{
					func_688(1);
					unk_0xBE20AB8238688965(&iLocal_87, 4);
				}
			}
		}
	}
}

void func_440()
{
	int iVar0;
	int iVar1;
	
	iVar0 = unk_0x628A51AC66E80772(iLocal_90);
	if (unk_0xBD09DF93F957A0CF(iVar0))
	{
		iVar1 = unk_0x9019589211A13B02(iVar0);
		if (unk_0x166E920FB00B2DBB(iVar1))
		{
			if (iLocal_90 != unk_0x59E2AD1A8ACEDA31())
			{
				if (!unk_0xCE990E643CD9D0E5(iLocal_569, iLocal_90))
				{
					if (!func_203())
					{
						if (Local_85[iLocal_90 /*18*/].f_17 == 1)
						{
							unk_0xBE20AB8238688965(&iLocal_569, iLocal_90);
							func_441(iVar1, 55, 1, 0);
						}
					}
				}
				else if (func_203())
				{
					func_441(iVar1, 55, 0, 0);
					unk_0xD2459066EA58CE43(&iLocal_569, iLocal_90);
				}
				else if (Local_85[iLocal_90 /*18*/].f_17 > 1)
				{
					unk_0xD2459066EA58CE43(&iLocal_569, iLocal_90);
					func_441(iVar1, 55, 0, 0);
				}
			}
		}
	}
	iLocal_90++;
	if (iLocal_90 >= unk_0xEFA28384DDD283E1())
	{
		iLocal_90 = 0;
	}
}

void func_441(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	
	if (func_443(iParam0))
	{
		return;
	}
	if (func_442(&(Global_2416085.f_624[iParam0]), &(Global_2416085.f_987[iParam0]), &(Global_2416085.f_389), bParam2, iParam0, bParam3, &uVar0))
	{
		if (bParam2)
		{
			Global_2416085.f_459[iParam0] = iParam1;
		}
	}
}

int func_442(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, var uParam6)
{
	if (bParam5)
	{
		if (!unk_0x7FD2BDF03806FD9D(*uParam1) || *uParam1 == unk_0x354AD085195C5FA6())
		{
			*uParam1 = unk_0x354AD085195C5FA6();
			*uParam0 = unk_0x354AD085195C5FA6();
		}
	}
	if (!unk_0x7FD2BDF03806FD9D(*uParam0) || *uParam0 == unk_0x354AD085195C5FA6())
	{
		if (bParam3)
		{
			if (!unk_0xCE990E643CD9D0E5(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xBE20AB8238688965(iParam2, iParam4);
			}
			*uParam0 = unk_0x354AD085195C5FA6();
		}
		else
		{
			if (unk_0xCE990E643CD9D0E5(*iParam2, iParam4))
			{
				*uParam6 = 1;
				unk_0xD2459066EA58CE43(iParam2, iParam4);
			}
			if (*uParam1 == unk_0x354AD085195C5FA6())
			{
				*uParam1 = -1;
			}
			*uParam0 = -1;
		}
		return 1;
	}
	else if (unk_0x7FD2BDF03806FD9D(*uParam1) && !*uParam1 == unk_0x354AD085195C5FA6())
	{
	}
	return 0;
}

int func_443(int iParam0)
{
	if (iParam0 == func_5())
	{
		return 1;
	}
	if (unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) == func_444())
	{
		return 1;
	}
	return 0;
}

int func_444()
{
	switch (func_446())
	{
		case 0:
			return func_445();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_445()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_446()
{
	return Global_30968;
}

void func_447()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0x8F678487EEBD8CE4(Local_94[iVar0 /*8*/]))
		{
			unk_0x93370FA10F15BE44(&(Local_94[iVar0 /*8*/]));
		}
		if (unk_0x8F678487EEBD8CE4(Local_94[iVar0 /*8*/].f_1))
		{
			unk_0x93370FA10F15BE44(&(Local_94[iVar0 /*8*/].f_1));
		}
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_48[iVar0]))
		{
			if (!func_31(Local_82.f_48[iVar0]))
			{
				if (unk_0xD2160441D64A7913(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0])))
				{
					func_92(&(Local_94[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_448()
{
	if (!unk_0xCE990E643CD9D0E5(iLocal_86, 11))
	{
		if (!unk_0xCE990E643CD9D0E5(Local_82.f_3, 6))
		{
			if (!unk_0xCE990E643CD9D0E5(iLocal_86, 13))
			{
				if (func_190(unk_0x460153A63B9477BC()) != 129)
				{
					if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0)
					{
						if (!func_526(65) && !func_526(66))
						{
							if (unk_0xCE990E643CD9D0E5(iLocal_87, 11))
							{
								if (!unk_0xCE990E643CD9D0E5(iLocal_87, 12))
								{
									if (func_428(0, 1, 1, 1))
									{
										if (func_748())
										{
											func_427("UW_HELIMC", -1);
										}
										else
										{
											func_427("UW_HELIM", -1);
										}
										func_426(1);
										unk_0xBE20AB8238688965(&iLocal_87, 12);
									}
								}
							}
							else if (!(Local_82.f_27 == joaat("rhino") || Local_82.f_27 == joaat("hydra")))
							{
								if (func_428(0, 1, 1, 1))
								{
									if (!func_748())
									{
										func_427("UW_TAVAIL", 30000);
									}
									else
									{
										func_427("UW_TAVAILC", 30000);
									}
									func_426(1);
									unk_0xBE20AB8238688965(&iLocal_86, 11);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_449()
{
	float fVar0;
	
	if (iLocal_566 != 0)
	{
		return;
	}
	if (func_22(&uLocal_557))
	{
		iLocal_566 = func_126(&uLocal_557, 0, 0);
	}
	fVar0 = to_float(iLocal_566);
	fVar0 = (fVar0 / 60000f);
	iLocal_566 = floor(fVar0);
	if (iLocal_566 >= 1)
	{
	}
	else
	{
		iLocal_566 = 1;
	}
	if (iLocal_566 > Global_262145.f_11443)
	{
		iLocal_566 = Global_262145.f_11443;
	}
}

void func_450(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_99007.f_8 = 1;
	}
	else
	{
		Global_99007.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 54)
	{
		func_451(iVar0);
		iVar0++;
	}
}

void func_451(int iParam0)
{
	Global_99007.f_184[iParam0] = 1;
	Global_99007.f_183 = 1;
}

void func_452(int iParam0)
{
	if (func_453() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_453()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

void func_454()
{
	unk_0x53797676AD34A9AA(5);
	func_456();
	unk_0x34FEEAC2548C3789(1f);
	unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 8);
	func_455();
}

void func_455()
{
	if (Global_1673529)
	{
		if (unk_0xCE990E643CD9D0E5(Global_1673530, 0))
		{
			unk_0xD2459066EA58CE43(&Global_2549478, 0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_1673530, 1))
		{
			unk_0xD2459066EA58CE43(&Global_2549478, 1);
		}
		if (unk_0xCE990E643CD9D0E5(Global_1673530, 5))
		{
			unk_0xD2459066EA58CE43(&Global_2549478, 5);
		}
		if (unk_0x60C47897C07F44B1(-355737150))
		{
			unk_0xDC5C33A98881772F(-355737150, 1, 0, 0);
		}
		if (unk_0x60C47897C07F44B1(-580979506))
		{
			unk_0xDC5C33A98881772F(-580979506, 1, 0, 0);
		}
		if (unk_0x60C47897C07F44B1(-1426452475))
		{
			unk_0xDC5C33A98881772F(-1426452475, 1, 0, 0);
		}
		if (unk_0x60C47897C07F44B1(745417724))
		{
			unk_0xDC5C33A98881772F(745417724, 1, 0, 0);
		}
		if (unk_0x60C47897C07F44B1(-1305304906))
		{
			unk_0xDC5C33A98881772F(-1305304906, 1, 0, 0);
		}
		if (unk_0x60C47897C07F44B1(-1543175077))
		{
			unk_0xDC5C33A98881772F(-1543175077, 1, 0, 0);
		}
		if (unk_0x60C47897C07F44B1(-811770997))
		{
			unk_0xDC5C33A98881772F(-811770997, 1, 0, 0);
		}
		Global_1673530 = 0;
	}
	Global_1673529 = 0;
}

void func_456()
{
	if (unk_0x7FD2BDF03806FD9D(Global_2540384.f_5184))
	{
		if (!Global_2540384.f_5184 == unk_0x354AD085195C5FA6() && Global_2540384.f_5183 < 1f)
		{
			return;
		}
	}
	Global_2540384.f_5184 = -1;
	Global_2540384.f_5183 = 1f;
}

void func_457()
{
	Global_2391049 = { 0f, 0f, 0f };
	Global_2391052 = 0;
}

void func_458()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	
	if (unk_0xCE990E643CD9D0E5(iLocal_86, 13))
	{
		return;
	}
	bVar0 = unk_0xCE990E643CD9D0E5(Local_82.f_3, 6);
	bVar1 = unk_0xCE990E643CD9D0E5(iLocal_86, 21);
	bVar2 = unk_0xCE990E643CD9D0E5(iLocal_86, 23);
	bVar3 = Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_10 != -1;
	if (bVar3)
	{
		bVar1 = false;
		bVar2 = false;
	}
	if (func_628())
	{
		if (!unk_0xCE990E643CD9D0E5(iLocal_87, 17))
		{
			if (func_850(unk_0x460153A63B9477BC(), 1, 1))
			{
				if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0) || bVar2)
				{
					if (!func_203())
					{
						if (!func_748())
						{
							if (bVar0)
							{
								func_636(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2, 1, 0);
							}
							else if (bVar1)
							{
								if (Local_82.f_27 == joaat("rhino") || Local_82.f_27 == joaat("hydra"))
								{
									func_636(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
								else if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[0]) && func_109(Local_82.f_7[0]))
								{
									unk_0xBE20AB8238688965(&iLocal_87, 11);
									unk_0xBE20AB8238688965(&iLocal_87, 16);
									func_636(66, "UW_BIGE", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
								else
								{
									func_636(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
							}
							else if (bVar2)
							{
								func_636(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
							}
							else if (bVar3 || unk_0xCE990E643CD9D0E5(Local_82.f_3, 16))
							{
								func_636(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar0)
						{
							func_636(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2, 1, 0);
						}
						else if (bVar1)
						{
							if (Local_82.f_27 == joaat("rhino") || Local_82.f_27 == joaat("hydra"))
							{
								if (func_523())
								{
									unk_0xBE20AB8238688965(&iLocal_87, 11);
									unk_0xBE20AB8238688965(&iLocal_87, 16);
									func_636(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
								}
								else
								{
									func_636(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2, 1, 0);
								}
							}
							else if (func_523())
							{
								unk_0xBE20AB8238688965(&iLocal_87, 11);
								unk_0xBE20AB8238688965(&iLocal_87, 16);
								func_636(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
							else
							{
								func_636(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar2)
						{
							if (func_523())
							{
								unk_0xBE20AB8238688965(&iLocal_87, 11);
								unk_0xBE20AB8238688965(&iLocal_87, 16);
								func_636(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
							else
							{
								func_636(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2, 1, 0);
							}
						}
						else if (bVar3 || unk_0xCE990E643CD9D0E5(Local_82.f_3, 16))
						{
							func_636(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
						}
					}
					iVar4 = func_522(1);
					Local_83.f_6 = (Local_83.f_6 + iVar4);
					if (!Global_262145.f_11510)
					{
						if (Local_83.f_6 > 0)
						{
							func_521(19, Local_83.f_6);
						}
					}
					Global_2464451 = iVar4;
					if (iVar4 > 0)
					{
						if (func_520())
						{
							func_508(210955503, iVar4, &uVar5, 0, 1, 0);
						}
						else
						{
							unk_0x41E465DD667BCD29(iVar4, "AM_KILL_LIST", &uVar6);
						}
					}
					iVar7 = func_507(1);
					Local_83.f_7 = (Local_83.f_7 + iVar7);
					func_506();
					func_459(0, unk_0x9B0761B4C3EB8BC7(), "", -1636175450, 153786435, iVar7, 1, -1, 0, 0, 0);
					Local_83.f_5 = 2;
					unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 398, false);
					if (!unk_0xCE990E643CD9D0E5(iLocal_87, 16))
					{
						unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), 8);
					}
					unk_0xBE20AB8238688965(&iLocal_87, 17);
					unk_0xBE20AB8238688965(&iLocal_87, 18);
				}
			}
		}
	}
}

int func_459(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_460(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_460(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_470(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xAE06B9E39EBDE049(iParam1))
		{
			if (unk_0xA1914E72A0EB31D0(iParam1))
			{
				iVar1 = unk_0x9048E8838E822F21(iParam1);
				func_466(unk_0x1D5C49FCA9BC5B02(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_461(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_461(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_464(iParam0, 1) };
	if (iParam0 == func_463(unk_0x9B0761B4C3EB8BC7()))
	{
		func_462(1);
	}
	func_466(Var0, iParam1, 0, sParam2, iParam3);
}

void func_462(int iParam0)
{
	Global_2440049.f_2002 = iParam0;
}

int func_463(int iParam0)
{
	return iParam0;
}

Vector3 func_464(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (unk_0xC337F69A1938DDA2())
	{
		Var1 = { unk_0x1DB2F48A1F5B2CD3(2) };
	}
	if (iParam0 == func_465(unk_0x9B0761B4C3EB8BC7()) && unk_0xF7B3A1430308F92B(unk_0xFA3A11B011BBD7F6()) == 4)
	{
		Var0 = { unk_0x7EC595B99EA7C4B1(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		fVar2 = unk_0xEF7858F25585F853(iParam0);
		if (unk_0xF7B3A1430308F92B(unk_0xFA3A11B011BBD7F6()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	unk_0x140662B520844E45(unk_0x36FE6D3220816ADA(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { unk_0x1BAE5C94E38E44FE(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_465(int iParam0)
{
	return iParam0;
}

void func_466(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2440049.f_1401[iVar0 /*30*/].f_6 == 0 || Global_2440049.f_1401[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2440049.f_1401[iVar1 /*30*/] = { Param0 };
			Global_2440049.f_1401[iVar1 /*30*/].f_6 = 1;
			Global_2440049.f_1401[iVar1 /*30*/].f_4 = func_469(Global_2440049.f_1401[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2440049.f_1401[iVar1 /*30*/].f_7 = unk_0x6CAAB7E78B5D978A();
			Global_2440049.f_1401[iVar1 /*30*/].f_3 = iParam1;
			Global_2440049.f_1401[iVar1 /*30*/].f_8 = iParam2;
			Global_2440049.f_1401[iVar1 /*30*/].f_9 = func_468();
			Global_2440049.f_1401[iVar1 /*30*/].f_10 = func_467();
			StringCopy(&(Global_2440049.f_1401[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2440049.f_1401[iVar1 /*30*/].f_26 = unk_0x8C358101651A3F7C(unk_0x6CAAB7E78B5D978A(), iParam4);
		}
	}
}

int func_467()
{
	if (Global_2440049.f_2002)
	{
		Global_2440049.f_2002 = 0;
		return 1;
	}
	Global_2440049.f_2002 = 0;
	return 0;
}

var func_468()
{
	var uVar0;
	
	uVar0 = Global_2440049.f_2004;
	Global_2440049.f_2004 = 1;
	return uVar0;
}

float func_469(struct<3> Param0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = unk_0x272784C60C397DB6(unk_0x0F1DDC797C100E7F(), Param0, 1);
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

var func_470(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_471(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_471(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_505(unk_0x460153A63B9477BC()) || func_504(unk_0x460153A63B9477BC()))
	{
		if (Global_262145.f_9637 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9637;
		}
	}
	else if (func_369() || func_502(unk_0x460153A63B9477BC()))
	{
		if (Global_262145.f_22787 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22787;
		}
	}
	else if (Global_262145.f_6636 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6636;
	}
	if (func_174(sParam2))
	{
	}
	if (func_501())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_499(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_498(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_496(0, &iVar1);
					break;
				
				case 3:
					func_496(1, &iVar1);
					break;
				
				case 1:
					func_493(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1688737)
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
			func_491(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_481((func_490(unk_0x460153A63B9477BC()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xC0B1609C742F66E3(iVar1, iParam8, iParam9);
				if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_2 != -1)
				{
					func_491(1165, iVar1, -1);
				}
				func_476(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_472((func_474(unk_0x460153A63B9477BC()) + iVar1));
			}
			else
			{
				func_472((func_474(unk_0x460153A63B9477BC()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_472(int iParam0)
{
	if (func_501())
	{
		Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_5 = iParam0;
		func_473(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_473(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, 1);
	}
}

int func_474(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_850(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x460153A63B9477BC())
			{
				return func_475(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_5;
			}
		}
		else
		{
			return func_475(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_475(int iParam0)
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

void func_476(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_66(unk_0x460153A63B9477BC()) };
	if (unk_0xE2FBD13450B2DA21())
	{
		if (unk_0xBF9EC1ED7E386622(&Var0))
		{
			iVar1 = func_479(func_480(&Var0));
			if (iVar1 == 0)
			{
				func_478(&Global_1388052, iParam0);
				func_477(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1388052);
			}
			else if (iVar1 == 1)
			{
				func_478(&Global_1388053, iParam0);
				func_477(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1388053);
			}
			else if (iVar1 == 2)
			{
				func_478(&Global_1388054, iParam0);
				func_477(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1388054);
			}
			else if (iVar1 == 3)
			{
				func_478(&Global_1388055, iParam0);
				func_477(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1388055);
			}
			else if (iVar1 == 4)
			{
				func_478(&Global_1388056, iParam0);
				func_477(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1388056);
			}
		}
	}
}

void func_477(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1388047 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_1_ID"):
			Global_1388049 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_2_ID"):
			Global_1388049 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_3_ID"):
			Global_1388050 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_4_ID"):
			Global_1388051 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1388052 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1388053 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1388054 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1388055 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1388056 = iParam1;
			break;
		
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1388057 = iParam1;
			break;
		
		case joaat("MPPLY_FRIENDLY"):
			Global_1388058 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1388059 = iParam1;
			break;
		
		case joaat("MPPLY_GRIEFING"):
			Global_1388060 = iParam1;
			break;
		
		case joaat("MPPLY_HELPFUL"):
			Global_1388061 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1388062 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1388063 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_478(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_479(int iParam0)
{
	if (iParam0 == Global_1388047)
	{
		return 0;
	}
	else if (iParam0 == Global_1388048)
	{
		return 1;
	}
	else if (iParam0 == Global_1388049)
	{
		return 2;
	}
	else if (iParam0 == Global_1388050)
	{
		return 3;
	}
	else if (iParam0 == Global_1388051)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_480(var uParam0)
{
	if (unk_0xE2FBD13450B2DA21())
	{
		if (unk_0xBF9EC1ED7E386622(uParam0))
		{
			return Global_2462175;
		}
	}
	return Global_2462175;
}

void func_481(int iParam0, int iParam1, int iParam2)
{
	if (func_501())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9605 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388197[func_244(-1)])
				{
					unk_0xC0B1609C742F66E3(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388197[func_244(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9604 == 0)
		{
			if (iParam0 == 0)
			{
				unk_0xC0B1609C742F66E3(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9604 == 0)
		{
			if (iParam0 < 0)
			{
				unk_0xC0B1609C742F66E3(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_489(unk_0x460153A63B9477BC()))
		{
			Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_1 = iParam0;
			Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_6 = func_487(iParam0, 1);
		}
		func_486(639, iParam0, -1, 1);
		func_485(640, func_487(iParam0, 1), -1, 1, 0);
		Global_1388197[func_244(-1)] = iParam0;
		func_482(-1109644434, 7, 0);
	}
}

void func_482(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_484(iParam1, iParam2))
	{
		iVar0 = func_483();
		Global_2462127[iVar0] = iParam1;
		Global_2462138[iVar0] = iParam0;
	}
}

int func_483()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2462127[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_484(int iParam0, var uParam1)
{
	if (Global_1312884)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312896) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_485(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_244(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
}

void func_486(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2551832[iParam0 /*3*/][func_244(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_244(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1388131[func_244(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388137[func_244(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388143[func_244(iParam2)] = iParam1;
			break;
		
		case 8727:
			Global_1388149[func_244(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1388095[func_244(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1388101[func_244(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1388107[func_244(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1388113[func_244(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1388119[func_244(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1388065[func_244(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1388071[func_244(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1388077[func_244(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1388083[func_244(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388089[func_244(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388155[func_244(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388161[func_244(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388167[func_244(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388173[func_244(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1388179[func_244(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388185[func_244(iParam2)] = iParam1;
			break;
		
		case 7234:
			Global_1388191[func_244(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388197[func_244(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388203[func_244(iParam2)] = iParam1;
			break;
		
		case 1877:
			Global_2590417[0 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 2268:
			Global_2590417[1 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 2930:
			Global_2590417[2 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2590417[3 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 10138:
			Global_2590566[func_244(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388209[func_244(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388215[func_244(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388221[func_244(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388227[func_244(iParam2)] = iParam1;
			break;
		
		case 9534:
			Global_1388233[func_244(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388239[func_244(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2590490[0 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2590490[1 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2590490[2 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2590490[3 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2590490[4 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2590569[0 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2590569[1 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2590569[2 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2590569[3 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2590569[4 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2590585[0 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2590585[1 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2590585[2 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2590585[3 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2590585[4 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2590490[5 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2590417[4 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2590601[func_244(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2590610[func_244(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2590604[func_244(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2590613[func_244(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2590607[func_244(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2590616[func_244(iParam2)] = iParam1;
			break;
		
		case 3690:
			Global_2590619[func_244(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2590490[6 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2590417[5 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2590490[7 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2590417[6 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2590490[8 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2590417[7 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2590490[9 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2590417[8 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2590490[10 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2590417[9 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2590490[11 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2590417[10 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2590490[12 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2590417[11 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2590490[13 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2590417[12 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2590490[14 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2590417[13 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2590490[15 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2590417[14 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2590490[16 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2590417[15 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2590490[17 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2590417[16 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 7284:
			Global_2590417[17 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2590417[18 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2590417[19 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 8011:
			Global_2590417[20 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2590622[func_244(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2590625[func_244(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2590628[func_244(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2590631[func_244(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2590634[func_244(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2590637[func_244(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2590640[func_244(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2590643[func_244(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2590646[func_244(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2590649[func_244(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2590652[func_244(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2590655[func_244(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2590658[func_244(iParam2)] = iParam1;
			break;
		
		case 8901:
			Global_2590661[func_244(iParam2)] = iParam1;
			break;
		
		case 8535:
			Global_2590417[21 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2590490[23 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 8976:
			Global_2590417[22 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2590490[24 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2590417[23 /*3*/][func_244(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_487(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_488(iParam0, 0);
}

int func_488(int iParam0, int iParam1)
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
		if (Global_292402[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_292402[iVar3] < iParam0)
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
		fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
		iVar3 = round(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_489(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return unk_0xCE990E643CD9D0E5(Global_2440049.f_1, iParam0);
	}
	return 1;
}

int func_490(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x460153A63B9477BC())
			{
				return Global_1388197[func_244(-1)];
			}
			else if (func_489(iParam0))
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388197[func_244(-1)];
	}
	return 0;
}

void func_491(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_263(iParam0, func_244(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_492(iParam0))
	{
		func_485(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_486(iParam0, iVar0, iParam2, 1);
	}
}

int func_492(int iParam0)
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

void func_493(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC());
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		iVar4 = unk_0x628A51AC66E80772(iVar0);
		if (unk_0xBD09DF93F957A0CF(iVar4))
		{
			iVar5 = unk_0x9019589211A13B02(iVar4);
			if (unk_0x6CC163E30ECE0790(iVar5) != -1)
			{
				if (unk_0x6CC163E30ECE0790(iVar5) == iVar1 || func_495(unk_0x6CC163E30ECE0790(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x460153A63B9477BC())
					{
						if (func_67(unk_0x460153A63B9477BC(), iVar5))
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
		iVar6 = round((func_494(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_494(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_494(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_495(int iParam0, int iParam1, int iParam2)
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
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 0);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 1);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 2);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 4);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 5);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 6);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 8);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 9);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 10);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 12);
				
				case 1:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 13);
				
				case 2:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 14);
				
				case 3:
					return unk_0xCE990E643CD9D0E5(Global_4456448.f_541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_496(bool bParam0, int iParam1)
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
		while (iVar0 < unk_0xEFA28384DDD283E1())
		{
			iVar3 = iVar0;
			if (unk_0xBD09DF93F957A0CF(iVar3))
			{
				iVar4 = unk_0x9019589211A13B02(iVar3);
				if (func_850(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x460153A63B9477BC())
					{
						iVar1++;
						if (func_67(unk_0x460153A63B9477BC(), iVar4))
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
			if (func_850(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x460153A63B9477BC())
				{
					if (func_497(unk_0x460153A63B9477BC(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_67(unk_0x460153A63B9477BC(), iVar4))
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
		iVar5 = round((func_494(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_494(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_497(int iParam0, int iParam1)
{
	return vdist(func_59(iParam0), func_59(iParam1));
	return 0f;
}

int func_498(int iParam0)
{
	int iVar0;
	
	if (unk_0x2F9269FB5C4717C0() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_494(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_499(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x44F29CF6A0675F4F(iParam0) > func_490(unk_0x460153A63B9477BC()))
		{
			iParam0 = -func_490(unk_0x460153A63B9477BC());
		}
	}
	if (func_500(8000, 0, 0) > 0)
	{
		if (func_500(8000, 0, 0) < (iParam0 + func_490(unk_0x460153A63B9477BC())))
		{
			iParam0 = (func_500(8000, 0, 0) - func_490(unk_0x460153A63B9477BC()));
		}
	}
	return iParam0;
}

int func_500(int iParam0, bool bParam1, int iParam2)
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
	return Global_292402[iParam0];
}

int func_501()
{
	return 1;
}

int func_502(int iParam0)
{
	return func_503(func_341(iParam0));
}

int func_503(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_504(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 2;
}

bool func_505(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 7;
}

void func_506()
{
	Global_2463792 = 1;
}

int func_507(bool bParam0)
{
	int iVar0;
	
	if (unk_0xCE990E643CD9D0E5(iLocal_87, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_748())
		{
			return Global_262145.f_11324;
		}
		else
		{
			return Global_262145.f_11263;
		}
	}
	func_449();
	if (func_748())
	{
		iVar0 = (Global_262145.f_11324 * iLocal_566);
	}
	else
	{
		iVar0 = (Global_262145.f_11263 * iLocal_566);
	}
	return iVar0;
}

void func_508(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_520())
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
			if (iParam1 > 0 || Global_262145.f_27657)
			{
				func_509(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_509(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
			if (iParam1 > 0 || Global_262145.f_27657)
			{
				func_509(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
		case 1775876058:
		case -842062976:
		case -518651910:
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
			func_509(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_509(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_520())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x5053392075AA583C(func_18()) || unk_0x701B05C16EF4F48E())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463410)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4264051[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0x734A68E809CC23F0(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x9F5556ED9A739FBC(iVar4))
		{
			*uParam0 = func_516(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4264051[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4264051[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4265538 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4265552 = 1;
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_515(1, iParam4);
			Global_4265552 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_510(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_510(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xBE20AB8238688965(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_511(iParam0);
	}
}

void func_511(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_520())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_514(iParam0))
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
		func_512(&(Global_4264051[iParam0 /*85*/]));
	}
}

void func_512(var uParam0)
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
	func_513(&(uParam0->f_14));
	func_513(&(uParam0->f_14.f_13));
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

void func_513(var uParam0)
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

int func_514(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_515(int iParam0, int iParam1)
{
	Global_2464590 = iParam1;
	Global_2464589 = iParam0;
}

int func_516(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4264051[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_520())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4264051[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4264051[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4264051[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4264051[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4264051[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4264051[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4264051[iVar0 /*85*/].f_66 = iParam0;
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
			if (iParam1 == -1135378931 && iParam10)
			{
				func_517(Global_4264051[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_517(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_519(Var0.f_1);
	if ((Global_262145.f_23581 && !Global_262145.f_23582) && !Global_262145.f_23583)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_518();
		unk_0xB802750B43D4047C(1, &Var0, 36, iVar1);
	}
}

void func_518()
{
	unk_0xBE9B3870B1B370E3("AM_ARENA_SHP");
}

var func_519(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xBE20AB8238688965(&uVar0, iParam0);
	}
	return uVar0;
}

int func_520()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		return unk_0xC5AA3415F982DC6C();
	}
	return 0;
}

void func_521(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23502 == 0 || Global_262145.f_23502 == 1)
		{
			if (!unk_0xF8EDFF98A9C94C74() || Global_262145.f_23502 == 1)
			{
				Global_2540384.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6585)
				{
					iParam1 = Global_262145.f_6585;
				}
				Global_2540384.f_284 = iParam1;
				Global_2540384.f_285 = 0;
			}
		}
	}
}

int func_522(bool bParam0)
{
	int iVar0;
	
	if (unk_0xCE990E643CD9D0E5(iLocal_87, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_748())
		{
			return Global_262145.f_11323;
		}
		else
		{
			return Global_262145.f_11262;
		}
	}
	func_449();
	if (func_748())
	{
		iVar0 = (Global_262145.f_11323 * iLocal_566);
	}
	else
	{
		iVar0 = (Global_262145.f_11262 * iLocal_566);
	}
	return iVar0;
}

int func_523()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iLocal_543]))
	{
		if (func_109(Local_82.f_7[iLocal_543]))
		{
			bVar0 = true;
		}
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_82.f_256[iVar1] > 0)
		{
			iVar2++;
		}
		iVar1++;
	}
	iVar3 = Local_82.f_256[iLocal_543];
	if (!bVar0)
	{
		if (Local_82.f_594[0 /*4*/] != iLocal_543)
		{
			return 0;
		}
		else if (iVar3 > 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (Local_82.f_594[0 /*4*/] == iLocal_543)
	{
		return 1;
	}
	else
	{
		iVar4 = Local_82.f_256[Local_82.f_594[0 /*4*/]];
		iVar5 = (iVar4 - iVar3);
		iVar6 = (Local_82.f_255 - iVar2);
		if (iVar5 > iVar6)
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

int func_524()
{
	int iVar0;
	var uVar1;
	
	func_686(&iVar0, &uVar1);
	if (iLocal_543 > -1)
	{
		if (func_109(Local_82.f_7[iLocal_543]))
		{
			return 1;
		}
	}
	return 0;
}

void func_525()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_82.f_241 == 1)
	{
		if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0)
		{
			if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_10 == -1)
			{
				if (!func_22(&uLocal_555) || (func_22(&uLocal_555) && func_19(&uLocal_555, 5000, 0)))
				{
					if (Local_82.f_27 == joaat("savage") || Local_82.f_27 == joaat("buzzard"))
					{
						iVar1 = iLocal_543;
						if (iVar1 > -1)
						{
							if (func_109(Local_82.f_7[iVar1]))
							{
								iVar0 = unk_0x10D3F7E169A49C44(unk_0x770D3B2B4702434A(Local_82.f_7[iVar1]), -1, 0);
								if (iVar0 == 0)
								{
									Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_10 = iVar1;
								}
								else if (unk_0x5AEB5DDFFAD43CA5(iVar0))
								{
									Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_10 = iVar1;
								}
								else if (!unk_0xD0390A93AF3907B8(iVar0))
								{
									Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_10 = iVar1;
								}
							}
						}
					}
					else if (Local_82.f_27 == joaat("valkyrie"))
					{
						iVar1 = iLocal_543;
						if (iVar1 > -1)
						{
							if (func_109(Local_82.f_7[iVar1]))
							{
								iVar0 = unk_0x10D3F7E169A49C44(unk_0x770D3B2B4702434A(Local_82.f_7[iVar1]), -1, 0);
								if (iVar0 == 0)
								{
									Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_10 = iVar1;
								}
								else if (unk_0x5AEB5DDFFAD43CA5(iVar0))
								{
									Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_10 = iVar1;
								}
								else if (!unk_0xD0390A93AF3907B8(iVar0))
								{
									Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_10 = iVar1;
								}
								if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_10 == -1)
								{
									iVar4 = unk_0x112A81273D7187A5(joaat("valkyrie"));
									iVar2 = 0;
									while (iVar2 < iVar4)
									{
										iVar0 = unk_0x10D3F7E169A49C44(unk_0x770D3B2B4702434A(Local_82.f_7[iVar1]), iVar2, 0);
										if (iVar0 != 0)
										{
											if (!unk_0x5AEB5DDFFAD43CA5(iVar0))
											{
												if (unk_0xD0390A93AF3907B8(iVar0))
												{
													iVar3++;
												}
											}
										}
										iVar2++;
									}
									if (iVar3 == 0)
									{
										Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_10 = iVar1;
									}
								}
							}
						}
					}
					func_106(&uLocal_555);
					func_20(&uLocal_555, 0, 0);
				}
			}
		}
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (unk_0xCE990E643CD9D0E5(Local_82.f_319, iVar2))
		{
			if (unk_0xF7DE07F319727299(Local_82.f_7[iVar2]))
			{
				if (!unk_0xA59F96B50B97E63C(unk_0x770D3B2B4702434A(Local_82.f_7[iVar2]), 0))
				{
					if ((func_438() - func_126(&(Local_82.f_349[iVar2 /*2*/]), 0, 0)) >= 0)
					{
						if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0)
						{
							if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_82.f_7[iVar2]), 0))
							{
								if (!func_203())
								{
									func_437();
									func_171((func_438() - func_126(&(Local_82.f_349[iVar2 /*2*/]), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
					}
					else
					{
						if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0)
						{
							if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_82.f_7[iVar2]), 0))
							{
								if (!func_203())
								{
									func_437();
									func_171(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
								}
							}
						}
						if (unk_0xF05B7723022657B3(Local_82.f_7[iVar2]))
						{
							unk_0x0312E5501F93E5AB(unk_0x770D3B2B4702434A(Local_82.f_7[iVar2]), 0);
							unk_0xD4D34706EA3EAF64(unk_0x770D3B2B4702434A(Local_82.f_7[iVar2]), true);
							if (!unk_0x442D6659150AF4B3(unk_0x36FE6D3220816ADA(unk_0x770D3B2B4702434A(Local_82.f_7[iVar2]))))
							{
								unk_0x9B751DD1E3DE899A(unk_0x770D3B2B4702434A(Local_82.f_7[iVar2]), 1, 0, -1);
								func_25(&(Local_82.f_7[iVar2]));
							}
							else
							{
								unk_0x4D55B0532FB83535(unk_0x770D3B2B4702434A(Local_82.f_7[iVar2]), 1, 0, 0);
								func_25(&(Local_82.f_7[iVar2]));
							}
						}
					}
				}
			}
			if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_10 == iVar2)
			{
				if (!unk_0xCE990E643CD9D0E5(iLocal_87, 6))
				{
					if (func_428(0, 1, 1, 1))
					{
						if (func_748())
						{
							if (!unk_0xCE990E643CD9D0E5(iLocal_87, 19))
							{
								func_427("UW_NOPILC", 30000);
							}
							else
							{
								func_427("UW_NOGUN", 30000);
							}
						}
						else
						{
							func_427("UW_NOPIL", 30000);
						}
						func_426(1);
						unk_0xBE20AB8238688965(&iLocal_87, 6);
					}
					else if (unk_0xCE990E643CD9D0E5(iLocal_87, 19))
					{
						if (unk_0xDABD547F0DF2906C())
						{
							unk_0xD289B55B6AADBA10(1);
						}
					}
				}
				if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
				{
					iVar5 = Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_10;
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iVar5]))
					{
						if (unk_0xACBCFA3095C5A434(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_82.f_7[iVar5])))
						{
							if (!func_748())
							{
								if (!func_271("UW_EXPL"))
								{
									func_265("UW_EXPL", 0);
								}
							}
							else if (!func_271("UW_EXPLC"))
							{
								func_265("UW_EXPLC", 0);
							}
						}
						else if (func_271("UW_EXPL") || func_271("UW_EXPLC"))
						{
							func_9();
						}
					}
					else if (func_271("UW_EXPL") || func_271("UW_EXPLC"))
					{
						func_9();
					}
				}
			}
		}
		iVar2++;
	}
}

bool func_526(int iParam0)
{
	return Global_2440049.f_2834[0 /*80*/].f_1 == iParam0;
}

void func_527()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0)
	{
		if (Local_82.f_27 == joaat("rhino"))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 11))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 10))
				{
					if (!func_22(&uLocal_551) || (func_22(&uLocal_551) && func_19(&uLocal_551, 5000, 0)))
					{
						if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
						{
							if (func_69(Local_567, 0f, 0f, 0f, 0))
							{
								Local_567 = { Local_82.f_30[0 /*3*/] };
							}
							fVar0 = func_529(unk_0x9B0761B4C3EB8BC7(), Local_567, 1);
							if (fVar0 > 750f)
							{
								unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), 10);
							}
						}
						func_106(&uLocal_551);
						func_20(&uLocal_551, 0, 0);
					}
				}
				else if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
				{
					if (!func_271("UW_OOB"))
					{
						func_265("UW_OOB", 0);
					}
					if (!func_22(&uLocal_553))
					{
						iVar2 = unk_0x5E54B0823F46079E();
						unk_0x2DB2D4C3CB88500D(iVar2, "Explosion_Countdown", unk_0x770D3B2B4702434A(Local_82.f_7[func_528()]), "GTAO_FM_Events_Soundset", 0, 0);
						unk_0xD4974F3117C9F232(iVar2, "Time", 30f);
						func_20(&uLocal_553, 0, 0);
					}
					if (func_22(&uLocal_553))
					{
						if ((func_438() - func_126(&uLocal_553, 0, 0)) >= 0)
						{
							func_437();
							func_171((func_438() - func_126(&uLocal_553, 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
						}
						else
						{
							func_437();
							func_171(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
							func_9();
							unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), 11);
						}
					}
					if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 11))
					{
						fVar0 = func_529(unk_0x9B0761B4C3EB8BC7(), Local_82.f_30[0 /*3*/], 1);
						if (fVar0 < 750f)
						{
							unk_0xD2459066EA58CE43(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), 10);
							func_106(&uLocal_553);
							unk_0xC5E5600D1CF5CEF9(iVar2);
						}
					}
				}
			}
		}
	}
	if (unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 11))
	{
		func_688(1);
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar1 = func_528();
			if (iVar1 > -1)
			{
				if (func_109(Local_82.f_7[iVar1]))
				{
					if (unk_0xF05B7723022657B3(Local_82.f_7[iVar1]))
					{
						unk_0x0312E5501F93E5AB(unk_0x770D3B2B4702434A(Local_82.f_7[iVar1]), 0);
						unk_0xD4D34706EA3EAF64(unk_0x770D3B2B4702434A(Local_82.f_7[iVar1]), true);
						unk_0x9B751DD1E3DE899A(unk_0x770D3B2B4702434A(Local_82.f_7[iVar1]), 1, 0, -1);
						func_25(&(Local_82.f_7[iVar1]));
					}
				}
			}
		}
	}
}

int func_528()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar0 == -1)
		{
			if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iVar1]))
			{
				if (func_109(Local_82.f_7[iVar1]))
				{
					if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
					{
						if (unk_0xACBCFA3095C5A434(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_82.f_7[iVar1])))
						{
							iVar0 = iVar1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_529(int iParam0, struct<3> Param1, int iParam2)
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
	return unk_0x272784C60C397DB6(Var0, Param1, iParam2);
}

void func_530()
{
	var uVar0;
	int iVar1;
	
	iVar1 = -1;
	if (Local_82.f_27 == joaat("hydra") || Local_82.f_27 == joaat("rhino"))
	{
		return;
	}
	if (!unk_0xCE990E643CD9D0E5(iLocal_86, 24))
	{
		if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 == 1)
		{
			func_686(&iVar1, &uVar0);
			if (func_533(iVar1))
			{
				if (iVar1 > -1)
				{
					if (Local_82.f_22[iVar1] != func_5())
					{
						fLocal_92 = unk_0xDD0A630DE1A568F2();
						unk_0x023CF98830DD8435(-1f);
						func_532(1, iVar1);
						unk_0xBE20AB8238688965(&iLocal_86, 24);
						func_531(1);
					}
				}
			}
			else
			{
				unk_0xBE20AB8238688965(&iLocal_86, 24);
				unk_0xBE20AB8238688965(&iLocal_86, 25);
			}
		}
	}
	if (!unk_0xCE990E643CD9D0E5(iLocal_86, 25))
	{
		if (unk_0xCE990E643CD9D0E5(iLocal_86, 24))
		{
			if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 > 1)
			{
				unk_0x023CF98830DD8435(fLocal_92);
				func_686(&iVar1, &uVar0);
				if (iVar1 > -1)
				{
					func_532(0, iVar1);
					unk_0xBE20AB8238688965(&iLocal_86, 25);
					func_531(0);
				}
			}
		}
	}
}

void func_531(bool bParam0)
{
	if (bParam0)
	{
		unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 15);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 4);
	}
}

void func_532(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
		{
			iVar1 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar0));
			if (func_850(iVar1, 0, 1) && iVar1 != unk_0x460153A63B9477BC())
			{
				if (unk_0xCE990E643CD9D0E5(Local_85[iVar0 /*18*/].f_1, iParam1) || !bParam0)
				{
					unk_0x064B1FAD99834444(iVar1, 1);
				}
				else if (bParam0)
				{
					unk_0x064B1FAD99834444(iVar1, 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_533(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < unk_0xEFA28384DDD283E1())
	{
		if (!bVar0)
		{
			if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar1)))
			{
				if (iVar1 != unk_0x59E2AD1A8ACEDA31())
				{
					if (unk_0xCE990E643CD9D0E5(Local_85[iVar1 /*18*/].f_1, iParam0))
					{
						bVar0 = true;
					}
				}
			}
		}
		iVar1++;
	}
	return bVar0;
}

void func_534()
{
	int iVar0;
	int iVar1;
	
	if (unk_0xD0E70037A973A810())
	{
		return;
	}
	if (!unk_0xCE990E643CD9D0E5(iLocal_86, 15))
	{
		if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 == 2)
		{
			if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 == 0)
			{
				if (Local_82.f_22[0] != func_5())
				{
					if (func_428(0, 0, 1, 1))
					{
						if (!func_748())
						{
							if (Local_82.f_27 == joaat("rhino") || Local_82.f_27 == joaat("hydra"))
							{
								if (!func_748())
								{
									func_545("UW_START1P", unk_0x72C1D3A1AB8CAA5B(Local_82.f_22[0]), 1, 30000);
								}
								else
								{
									func_545("UW_START1PC", unk_0x72C1D3A1AB8CAA5B(Local_82.f_22[0]), 1, 30000);
								}
								func_426(1);
							}
							else if (unk_0xCE990E643CD9D0E5(Local_82.f_15, 0))
							{
								if (!unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 14))
								{
									if (!func_748())
									{
										func_427("UW_STARTM", 30000);
									}
									else
									{
										func_427("UW_STARTMC", 30000);
									}
									func_426(1);
								}
							}
							else
							{
								func_545("UW_START1P", unk_0x72C1D3A1AB8CAA5B(Local_82.f_22[0]), 1, 30000);
								func_426(1);
							}
						}
						else if (!unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 14))
						{
							if (!func_748())
							{
								func_427("UW_STARTM", 30000);
							}
							else
							{
								func_427("UW_STARTMC", 30000);
							}
							func_426(1);
						}
						unk_0xBE20AB8238688965(&iLocal_86, 15);
					}
				}
			}
		}
	}
	if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 == 2)
	{
		if (Local_82.f_241 == 1)
		{
			if (Local_82.f_27 != joaat("hydra") && Local_82.f_27 != joaat("rhino"))
			{
				if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0)
				{
					if (iLocal_543 >= 0)
					{
						if (!unk_0xCE990E643CD9D0E5(iLocal_87, 10))
						{
							if (!unk_0xCE990E643CD9D0E5(iLocal_87, 9))
							{
								if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iLocal_543]))
								{
									if (func_109(Local_82.f_7[iLocal_543]))
									{
										unk_0xBE20AB8238688965(&iLocal_87, 9);
									}
								}
							}
							else if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iLocal_543]))
							{
								if (!func_109(Local_82.f_7[iLocal_543]))
								{
									func_544("UW_TEAMV");
									unk_0xBE20AB8238688965(&iLocal_87, 10);
								}
							}
						}
					}
				}
			}
		}
	}
	iVar1 = 0;
	if (!func_748())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!unk_0xCE990E643CD9D0E5(Local_82.f_3, 6))
			{
				if (!unk_0xCE990E643CD9D0E5(iLocal_86, (16 + iVar1)))
				{
					if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 >= 2)
					{
						if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 == 0)
						{
							if ((unk_0xCE990E643CD9D0E5(Local_82.f_3, 0) && unk_0xCE990E643CD9D0E5(Local_82.f_3, 1)) && unk_0xCE990E643CD9D0E5(Local_82.f_3, 2))
							{
								if (unk_0xF7DE07F319727299(Local_82.f_7[0]))
								{
									if (func_109(Local_82.f_7[0]))
									{
										if (unk_0x10D3F7E169A49C44(unk_0x770D3B2B4702434A(Local_82.f_7[0]), -1, 0) != 0)
										{
											iVar0 = func_543(iVar1, 0);
											if (iVar0 != func_5())
											{
												func_535("UW_COMP", iVar0, 1, 0, 0, 0, 1, 0);
											}
											unk_0xBE20AB8238688965(&iLocal_86, (16 + iVar1));
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
}

int func_535(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	struct<16> Var1;
	int iVar2;
	int iVar3;
	
	iVar0 = -1;
	if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iParam1) || iParam4)
	{
		if (!bParam3)
		{
			StringCopy(&Var1, unk_0x72C1D3A1AB8CAA5B(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x72C1D3A1AB8CAA5B(iParam1), 64);
		}
		if (unk_0x7BCC91F3C1CF24E8(&Var1))
		{
		}
		unk_0x5B8DD855EAFD33B5(sParam0);
		unk_0x7006FC1051C85FCA(iParam2);
		unk_0x9EFD301E3BE8324E(func_541(&Var1));
		if (!bParam5)
		{
			iVar0 = unk_0xD60C2975A14D763D(0, 1);
		}
		else
		{
			Global_2515173 = { func_66(iParam1) };
			if (unk_0x192BD21E18525C69(&Global_2515103, 35, &Global_2515173))
			{
				iVar2 = 0;
				if (unk_0xF005CCA4263DF67F(&(Global_2515103.f_22), "Leader") && Global_2515103.f_30 == 0)
				{
					iVar2 = 1;
				}
				if (Global_2515103.f_21 > 0)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var1 = { func_540(&Var1) };
					}
					iVar0 = unk_0x2262CFE2DD056505(iVar3, unk_0xCF44EDAC07B5D763(&Global_2515103, 35), &(Global_2515103.f_17), Global_2515103.f_30, iVar2, 0, Global_2515103, &Var1, Global_1314053, Global_1314054, Global_1314055);
				}
				else
				{
					iVar0 = unk_0x1BC599B343F6767F(iVar3, unk_0xCF44EDAC07B5D763(&Global_2515103, 35), &(Global_2515103.f_17), Global_2515103.f_30, iVar2, 0, Global_2515103, Global_1314053, Global_1314054, Global_1314055);
				}
			}
			else
			{
				iVar0 = unk_0xD60C2975A14D763D(0, 1);
			}
		}
		func_536(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_536(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_539() || !unk_0xFC559366953F62B3()) || !func_16(unk_0x460153A63B9477BC(), 0))
	{
		return;
	}
	iVar0 = func_537(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1672611.f_5[iVar0 /*53*/] = iParam0;
		Global_1672611.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1672611.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1672611.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1672611.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1672611.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1672611.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_537(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1672611 - 1))
	{
		if (iParam0 > Global_1672611.f_5[iVar0 /*53*/].f_1)
		{
			func_538(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1672611++;
	if (Global_1672611 > 5)
	{
		Global_1672611 = 5;
		return Global_1672611;
	}
	return (Global_1672611 - 1);
}

void func_538(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1672611.f_5[iVar0 /*53*/] = { Global_1672611.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_539()
{
	return unk_0x95C5B896CB42B20E(-1762644250);
}

struct<16> func_540(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_541(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_542(&cVar0);
}

var func_542(char[4] cParam0)
{
	return cParam0;
}

int func_543(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_5();
	iVar2 = (iParam0 - 1);
	if (unk_0xF7DE07F319727299(Local_82.f_7[iParam1]))
	{
		if (func_109(Local_82.f_7[iParam1]))
		{
			iVar1 = unk_0x10D3F7E169A49C44(unk_0x770D3B2B4702434A(Local_82.f_7[iParam1]), iVar2, 0);
			if (iVar1 != 0)
			{
				if (unk_0xD0390A93AF3907B8(iVar1))
				{
					iVar0 = unk_0xE4400E48E081F17A(iVar1);
				}
			}
		}
	}
	return iVar0;
}

int func_544(char* sParam0)
{
	int iVar0;
	
	iVar0 = -1;
	unk_0x5B8DD855EAFD33B5(sParam0);
	iVar0 = unk_0xD60C2975A14D763D(0, 1);
	func_536(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_545(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	unk_0x17751E107423AFE9(sParam0);
	if (!iParam2 == 0)
	{
		unk_0x7006FC1051C85FCA(iParam2);
	}
	unk_0x9EFD301E3BE8324E(sParam1);
	unk_0x1A169149B3D18FCB(0, 0, 0, iParam3);
}

void func_546()
{
	if (!unk_0xCE990E643CD9D0E5(iLocal_86, 9))
	{
		if (Local_82.f_241 == 1)
		{
			if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0)
			{
				if (unk_0x21723EF7B2FCC4CC("KILL_LIST_START_MUSIC"))
				{
					unk_0xBE20AB8238688965(&iLocal_86, 9);
				}
			}
		}
	}
	if (!unk_0xCE990E643CD9D0E5(iLocal_86, 10))
	{
		if (unk_0xCE990E643CD9D0E5(iLocal_86, 9))
		{
			if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 > 1)
			{
				if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0)
				{
					if (unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
					{
						if (unk_0x21723EF7B2FCC4CC("MP_MC_FAIL"))
						{
							unk_0xBE20AB8238688965(&iLocal_86, 10);
						}
					}
					else if (unk_0x21723EF7B2FCC4CC("KILL_LIST_STOP_MUSIC"))
					{
						unk_0xBE20AB8238688965(&iLocal_86, 10);
						func_547();
					}
				}
			}
		}
	}
}

void func_547()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_5025, 1))
	{
		unk_0xD2459066EA58CE43(&(Global_2540384.f_5025), 1);
	}
	if (Global_2540384.f_5025 > 0)
	{
		unk_0x21723EF7B2FCC4CC("FM_COUNTDOWN_30S_KILL");
		unk_0x21723EF7B2FCC4CC("FM_COUNTDOWN_30S_FIRA");
		unk_0xFA07F8BEBDAAFBA8("GTAO_FM_Events_30_Sec_Countdown_Scene");
		unk_0x96F763331D19ED14(1);
		Global_2540384.f_5025 = 0;
		unk_0x0C0DE28672975DC3("DisableFlightMusic", 0);
		unk_0x0C0DE28672975DC3("WantedMusicDisabled", 0);
		unk_0x0C0DE28672975DC3("AllowScoreAndRadio", 0);
		if (!unk_0xF005CCA4263DF67F(unk_0x6C5C6B207AA78253(), "am_pi_menu"))
		{
			if (Global_2540384.f_5035 > -1)
			{
				unk_0xADB6EEE689FE86DE(Global_2540384.f_5035);
				Global_2540384.f_5035 = -1;
			}
		}
	}
}

void func_548()
{
	struct<2> Var0;
	struct<2> Var1;
	int iVar2;
	int iVar3[2];
	int iVar4;
	int iVar5;
	int iVar6[4];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	bool bVar25;
	int iVar26;
	char* sVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	
	iVar8 = 1;
	if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0)
	{
		if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 8))
		{
			if (!unk_0xCE990E643CD9D0E5(iLocal_86, 26))
			{
				if ((((unk_0xCE990E643CD9D0E5(Local_82.f_3, 0) && unk_0xCE990E643CD9D0E5(Local_82.f_3, 1)) && unk_0xCE990E643CD9D0E5(Local_82.f_3, 2)) || (func_748() && unk_0xCE990E643CD9D0E5(Local_82.f_3, 6))) || (func_748() && unk_0xCE990E643CD9D0E5(Local_82.f_3, 15)))
				{
					if (!func_22(&uLocal_562))
					{
						func_20(&uLocal_562, 0, 0);
					}
					if (func_19(&uLocal_562, 1000, 0))
					{
						if (func_271("UW_ATTK"))
						{
							func_9();
						}
						func_619();
						if (func_618())
						{
							iVar13 = func_522(1);
							if (iVar13 > 0)
							{
								Local_83.f_6 = (Local_83.f_6 + iVar13);
								if ((!Global_262145.f_11510 && !unk_0xCE990E643CD9D0E5(Local_82.f_3, 8)) || (!Global_262145.f_11511 && unk_0xCE990E643CD9D0E5(Local_82.f_3, 8)))
								{
									if (Local_83.f_6 > 0)
									{
										func_521(19, Local_83.f_6);
									}
								}
								Global_2464451 = iVar13;
								if (func_520())
								{
									func_508(210955503, iVar13, &uVar15, 0, 1, 0);
								}
								else
								{
									unk_0x41E465DD667BCD29(iVar13, "AM_KILL_LIST", &uVar16);
								}
							}
							iVar11 = func_507(1);
							func_506();
							Local_83.f_7 = (Local_83.f_7 + iVar11);
							func_459(0, unk_0x9B0761B4C3EB8BC7(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
							Local_83.f_5 = 2;
							func_636(65, "UW_BIGF", "UW_DRAWZ", 1, 15000, 2, 1, 0);
						}
						else if (!func_748())
						{
							iVar13 = func_631(0);
							func_606(&iVar13, 1);
							iVar13 = (iVar13 + func_522(1));
							if (iVar13 > 0)
							{
								Local_83.f_6 = (Local_83.f_6 + iVar13);
								if (!Global_262145.f_11510)
								{
									if (Local_83.f_6 > 0)
									{
										func_521(19, Local_83.f_6);
									}
								}
								Global_2464451 = iVar13;
								if (func_520())
								{
									func_508(210955503, iVar13, &uVar17, 0, 1, 0);
								}
								else
								{
									unk_0x41E465DD667BCD29(iVar13, "AM_KILL_LIST", &uVar18);
								}
							}
							iVar11 = func_507(1);
							iVar11 = (iVar11 + func_605());
							Local_83.f_7 = (Local_83.f_7 + iVar11);
							func_506();
							func_459(0, unk_0x9B0761B4C3EB8BC7(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
							Local_83.f_5 = 1;
							func_635(64, "", "UW_BIG_BMEXP", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, 0);
						}
						else if (func_604())
						{
							if (!func_603(1))
							{
								if (!func_271("UW_EXPL") && !func_271("UW_EXPLC"))
								{
									func_9();
								}
								iVar13 = func_631(0);
								func_606(&iVar13, 1);
								iVar13 = (iVar13 + func_522(1));
								Local_83.f_6 = (Local_83.f_6 + iVar13);
								if (!Global_262145.f_11511)
								{
									if (Local_83.f_6 > 0)
									{
										func_521(19, Local_83.f_6);
									}
								}
								Global_2464451 = iVar13;
								if (iVar13 > 0)
								{
									if (func_520())
									{
										func_508(210955503, iVar13, &uVar19, 0, 1, 0);
									}
									else
									{
										unk_0x41E465DD667BCD29(iVar13, "AM_KILL_LIST", &uVar20);
									}
								}
								if (Local_82.f_27 == joaat("rhino") || Local_82.f_27 == joaat("hydra"))
								{
									func_635(64, "", "UW_WON1P", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								else
								{
									func_635(64, "", "UW_WON", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								Local_83.f_5 = 1;
								iVar11 = func_605();
								iVar11 = (iVar11 + func_507(1));
								Local_83.f_7 = (Local_83.f_7 + iVar11);
								func_506();
								func_459(0, unk_0x9B0761B4C3EB8BC7(), "", -875716015, 459130717, iVar11, 1, -1, 0, 0, 0);
							}
							else
							{
								iVar13 = func_522(1);
								iVar11 = func_507(1);
								iVar8 = 0;
								iVar10 = 0;
								while (iVar10 <= 3)
								{
									if (Local_82.f_465[iVar10 /*4*/].f_1 == Local_82.f_465[0 /*4*/].f_1)
									{
										iVar8++;
										iVar6[iVar10] = -1;
										if (Local_82.f_27 == joaat("hydra") || Local_82.f_27 == joaat("rhino"))
										{
											if (Local_82.f_465[iVar10 /*4*/].f_2 > -1)
											{
												if (Local_82.f_465[iVar10 /*4*/].f_2 != unk_0x460153A63B9477BC())
												{
													if (unk_0x166E920FB00B2DBB(unk_0xF1110FE23C67293A(Local_82.f_465[iVar10 /*4*/].f_2)))
													{
														iVar3[iVar4] = unk_0xF1110FE23C67293A(Local_82.f_465[iVar10 /*4*/].f_2);
														iVar4++;
													}
												}
											}
										}
										else if (iLocal_543 > -1)
										{
											if (iLocal_543 != Local_82.f_465[iVar10 /*4*/])
											{
												iVar6[iVar7] = Local_82.f_465[iVar10 /*4*/];
												iVar7++;
											}
										}
									}
									iVar10++;
								}
								if (Local_82.f_27 == joaat("hydra") || Local_82.f_27 == joaat("rhino"))
								{
									if (iVar8 > 2)
									{
										bVar9 = true;
									}
									else if (iVar3[0] == func_5())
									{
										bVar9 = true;
									}
									else
									{
										func_602(68, "UW_DRAWP", unk_0x72C1D3A1AB8CAA5B(iVar3[0]), 1, 15000, "UW_BIGO", 2);
									}
								}
								else if (iVar8 > 2)
								{
									bVar9 = true;
								}
								else if (iVar6[0] == -1)
								{
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar6[0] + 1, 16);
									func_635(68, &Var0, "UW_DRAWP", "UW_BIGO", 15000, -1, -1082130432, 0, 1, 2, 0);
								}
								if (bVar9)
								{
									if (!func_748())
									{
										func_636(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2, 1, 0);
									}
									else
									{
										func_636(68, "UW_BIGO", "UW_DRAWC", 1, 15000, 2, 1, 0);
									}
								}
								iVar14 = round((to_float(func_631(0)) / to_float(iVar8)));
								iVar12 = round((to_float(func_605()) / to_float(iVar8)));
								func_606(&iVar14, 1);
								iVar13 = (iVar13 + iVar14);
								iVar11 = (iVar11 + iVar12);
								Local_83.f_6 = (Local_83.f_6 + iVar13);
								if (!Global_262145.f_11511)
								{
									if (Local_83.f_6 > 0)
									{
										func_521(19, Local_83.f_6);
									}
								}
								Global_2464451 = iVar13;
								if (iVar13 > 0)
								{
									if (func_520())
									{
										func_508(210955503, iVar13, &uVar21, 0, 1, 0);
									}
									else
									{
										unk_0x41E465DD667BCD29(iVar13, "AM_KILL_LIST", &uVar22);
									}
								}
								Local_83.f_7 = (Local_83.f_7 + iVar11);
								func_506();
								func_459(0, unk_0x9B0761B4C3EB8BC7(), "", -875716015, 459130717, iVar11, 1, -1, 0, 0, 0);
							}
						}
						else
						{
							func_600(1);
							iVar13 = func_522(1);
							iVar11 = func_507(1);
							Local_83.f_6 = (Local_83.f_6 + iVar13);
							if (!Global_262145.f_11511)
							{
								if (Local_83.f_6 > 0)
								{
									func_521(19, Local_83.f_6);
								}
							}
							Global_2464451 = iVar13;
							if (iVar13 > 0)
							{
								if (func_520())
								{
									func_508(210955503, iVar13, &uVar23, 0, 1, 0);
								}
								else
								{
									unk_0x41E465DD667BCD29(iVar13, "AM_KILL_LIST", &uVar24);
								}
							}
							Local_83.f_7 = (Local_83.f_7 + iVar11);
							func_506();
							func_459(0, unk_0x9B0761B4C3EB8BC7(), "", -875716015, 459130717, iVar11, 1, -1, 0, 0, 0);
							if (!func_603(0))
							{
								iVar5 = Local_82.f_465[0 /*4*/];
								if (!func_271("UW_EXPL") && !func_271("UW_EXPLC"))
								{
									func_9();
								}
								if (Local_82.f_27 == joaat("hydra") || Local_82.f_27 == joaat("rhino"))
								{
									iVar2 = unk_0xF1110FE23C67293A(Local_82.f_465[0 /*4*/].f_2);
									if (func_313(iVar2, 1))
									{
										iVar26 = func_317(iVar2);
										if (iVar26 > -1)
										{
											uVar28 = func_315(iVar26);
											sVar27 = func_594(iVar2);
											bVar25 = true;
										}
									}
									if (iVar2 != func_5())
									{
										if (!bVar25)
										{
											if (!func_748())
											{
												func_602(65, "UW_FWONP", unk_0x72C1D3A1AB8CAA5B(iVar2), 6, 15000, "UW_BIGF", 2);
											}
											else
											{
												func_602(65, "UW_FWONPC", unk_0x72C1D3A1AB8CAA5B(iVar2), 6, 15000, "UW_BIGF", 2);
											}
										}
										else if (!func_748())
										{
											func_592(66, "PEN_OVR", "UW_FWONG", sVar27, uVar28, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_592(66, "PEN_OVR", "UW_FWONGC", sVar27, uVar28, 0, -1, -1, -1, 2, -1);
										}
									}
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar5 + 1, 16);
									if (!func_748())
									{
										func_635(65, &Var0, "UW_FWONT", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2, 0);
									}
									else
									{
										func_635(65, &Var0, "UW_FWONTC", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2, 0);
									}
								}
							}
							else
							{
								if (!func_271("UW_EXPL") && !func_271("UW_EXPLC"))
								{
									func_9();
								}
								iVar10 = 1;
								while (iVar10 <= 3)
								{
									if (Local_82.f_465[iVar10 /*4*/].f_1 == Local_82.f_465[0 /*4*/].f_1)
									{
										iVar8++;
										if (Local_82.f_27 == joaat("hydra") || Local_82.f_27 == joaat("rhino"))
										{
											if (Local_82.f_465[iVar10 /*4*/].f_2 > -1)
											{
												if (unk_0x166E920FB00B2DBB(unk_0xF1110FE23C67293A(Local_82.f_465[iVar10 /*4*/].f_2)))
												{
													iVar3[iVar4] = unk_0xF1110FE23C67293A(Local_82.f_465[iVar10 /*4*/].f_2);
													iVar4++;
												}
											}
										}
										else if (iLocal_543 > -1)
										{
											if (iLocal_543 != Local_82.f_465[iVar10 /*4*/])
											{
												iVar6[iVar7] = Local_82.f_465[iVar10 /*4*/];
												iVar7++;
											}
										}
									}
									iVar10++;
								}
								if (Local_82.f_27 == joaat("hydra") || Local_82.f_27 == joaat("rhino"))
								{
									if (iVar8 == 2)
									{
										if (iVar3[0] != func_5() && unk_0x166E920FB00B2DBB(iVar3[0]))
										{
											if (iVar3[1] != func_5() && unk_0x166E920FB00B2DBB(iVar3[1]))
											{
												func_554(68, func_5(), func_5(), -1, "UW_DRAW2P", "UW_BIGF", func_318(), 15000, func_318(), unk_0x72C1D3A1AB8CAA5B(iVar3[0]), unk_0x72C1D3A1AB8CAA5B(iVar3[1]), 0);
											}
											else
											{
												bVar9 = true;
											}
										}
										else
										{
											bVar9 = true;
										}
									}
									else
									{
										bVar9 = true;
									}
								}
								else if (iVar8 == 2)
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar6[0] + 1, 16);
									StringCopy(&Var1, "UW_TM", 16);
									StringIntConCat(&Var1, iVar6[1] + 1, 16);
									func_635(11, &Var0, "UW_DRAW2P", "UW_BIGO", 15000, -1, -1082130432, &Var1, 1, 2, 0);
									bVar9 = true;
								}
								else
								{
									bVar9 = true;
								}
								if (bVar9)
								{
									func_636(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2, 1, 0);
								}
							}
						}
						func_659(0);
						if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 < 2)
						{
							Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 = 2;
						}
						unk_0xBE20AB8238688965(&iLocal_86, 13);
						unk_0xBE20AB8238688965(&iLocal_86, 26);
					}
				}
				else if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 6) || (!func_748() && unk_0xCE990E643CD9D0E5(Local_82.f_3, 15)))
				{
					if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_10 != -1)
					{
						func_636(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2, 1, 0);
					}
					else
					{
						func_635(65, "", "UW_FAIL", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2, 0);
					}
					func_659(0);
					unk_0xBE20AB8238688965(&iLocal_86, 26);
					iVar13 = func_522(1);
					Local_83.f_6 = (Local_83.f_6 + iVar13);
					if (!Global_262145.f_11510)
					{
						if (Local_83.f_6 > 0)
						{
							func_521(19, Local_83.f_6);
						}
					}
					Global_2464451 = iVar13;
					if (iVar13 > 0)
					{
						if (func_520())
						{
							func_508(210955503, iVar13, &uVar29, 0, 1, 0);
						}
						else
						{
							unk_0x41E465DD667BCD29(iVar13, "AM_KILL_LIST", &uVar30);
						}
					}
					iVar11 = func_507(1);
					Local_83.f_7 = (Local_83.f_7 + iVar11);
					func_506();
					func_459(0, unk_0x9B0761B4C3EB8BC7(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
					Local_83.f_5 = 2;
					if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 < 2)
					{
						Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 = 2;
					}
				}
				else if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 14))
				{
					func_659(0);
					unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), 8);
					if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 < 3)
					{
						Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 = 3;
					}
				}
				else if (unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 11))
				{
					func_635(65, "", "UW_FAILD", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2, 0);
					func_659(0);
					unk_0xBE20AB8238688965(&iLocal_86, 26);
					unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), 8);
					iVar13 = func_522(1);
					Local_83.f_6 = (Local_83.f_6 + iVar13);
					if (!Global_262145.f_11510)
					{
						if (Local_83.f_6 > 0)
						{
							func_521(19, Local_83.f_6);
						}
					}
					Global_2464451 = iVar13;
					if (iVar13 > 0)
					{
						if (func_520())
						{
							func_508(210955503, iVar13, &uVar31, 0, 1, 0);
						}
						else
						{
							unk_0x41E465DD667BCD29(iVar13, "AM_KILL_LIST", &uVar32);
						}
					}
					iVar11 = func_507(1);
					Local_83.f_7 = (Local_83.f_7 + iVar11);
					func_506();
					func_459(0, unk_0x9B0761B4C3EB8BC7(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
					Local_83.f_5 = 2;
					if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 < 2)
					{
						Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 = 2;
					}
				}
				else if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 12))
				{
					unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), 8);
				}
			}
			if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 8))
			{
				if (unk_0xCE990E643CD9D0E5(iLocal_86, 26))
				{
					if (func_271("UW_ATTK"))
					{
						func_9();
					}
					if (func_549(&uLocal_534, 1))
					{
						unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), 8);
					}
					if (!func_271("UW_EXPL") && !func_271("UW_EXPLC"))
					{
						if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_9 > -1)
						{
							if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_9]))
							{
								if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
								{
									if (func_109(Local_82.f_7[Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_9]))
									{
										if (unk_0xACBCFA3095C5A434(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_82.f_7[Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_9])))
										{
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 8))
	{
		unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), 8);
	}
}

int func_549(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_360()) && !(func_241(unk_0x460153A63B9477BC(), 0) && (func_234(unk_0x460153A63B9477BC()) || func_232(unk_0x460153A63B9477BC())))) && !func_553(unk_0x460153A63B9477BC()))
	{
		func_552();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_22(&(uParam0->f_3)))
			{
				func_20(&(uParam0->f_3), 0, 0);
			}
			else if (func_19(&(uParam0->f_3), 1000, 0))
			{
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 25);
				if (bParam1)
				{
					unk_0xBE20AB8238688965(&(Global_2540384.f_4652), 0);
					func_20(&(uParam0->f_5), 0, 0);
				}
				func_20(&(uParam0->f_1), 0, 0);
				func_551(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_22(&(uParam0->f_5)))
			{
				if (func_19(&(uParam0->f_5), 3000, 0))
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
				func_550();
				func_551(uParam0, 2);
			}
			break;
		
		case 2:
			func_550();
			if (func_19(&(uParam0->f_1), 15000, 0))
			{
				if (func_683("AMEV_LBD_HELP"))
				{
					unk_0xD289B55B6AADBA10(1);
				}
				func_551(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_19(&(uParam0->f_1), 23500, 0))
			{
				unk_0xD2459066EA58CE43(&(Global_2540384.f_4652), 1);
				func_551(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xD2459066EA58CE43(&(Global_2540384.f_4652), 1);
			return 1;
	}
	return 0;
}

void func_550()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 0))
	{
		if (((((!unk_0xEBB78303C505A9D7() && !unk_0xCE990E643CD9D0E5(Global_2540384.f_833, 2)) && func_850(unk_0x460153A63B9477BC(), 1, 1)) && !Global_74030) && !Global_58898) && !unk_0x03DB5C6AABF8DA46())
		{
			unk_0xBE20AB8238688965(&(Global_2540384.f_4652), 1);
			func_427("AMEV_LBD_HELP", -1);
			func_426(1);
			unk_0xD2459066EA58CE43(&(Global_2540384.f_4652), 0);
		}
	}
}

void func_551(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_552()
{
	Global_2463793 = 1;
}

int func_553(int iParam0)
{
	if (iParam0 != func_5())
	{
		if (func_850(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_194(Global_2425869[iParam0 /*443*/].f_314.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_554(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_591(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_17 = iParam1;
	Var0.f_18 = iParam2;
	Var0.f_71 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_72 = iParam8;
	StringCopy(&(Var0.f_25), sParam9, 64);
	StringCopy(&(Var0.f_41), sParam10, 64);
	StringCopy(&(Var0.f_57), sParam11, 16);
	return func_555(&Var0);
}

int func_555(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2440049.f_3156)
		{
			return 0;
		}
	}
	func_566(uParam0, uParam0->f_17);
	func_565(uParam0);
	if (func_61())
	{
		func_565(uParam0);
	}
	if (func_564(uParam0->f_1))
	{
		func_557();
		if (Global_2440049.f_2834[0 /*80*/].f_2 == 0)
		{
			Global_2440049.f_2834[0 /*80*/] = { *uParam0 };
			if (func_556(uParam0->f_69, 8192))
			{
				Global_1663777 = 1;
			}
			return 1;
		}
		if (((Global_2440049.f_2834[0 /*80*/].f_1 == 13 || Global_2440049.f_2834[0 /*80*/].f_1 == 53) || Global_2440049.f_2834[0 /*80*/].f_1 == 54) || Global_2440049.f_2834[0 /*80*/].f_1 == 58)
		{
			Global_2440049.f_2834[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2440049.f_2834[iVar0 + 1 /*80*/] = { Global_2440049.f_2834[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2440049.f_2834[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2440049.f_2834[iVar0 /*80*/].f_2 == 0)
		{
			Global_2440049.f_2834[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_557();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_358(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 2);
				Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_556(uParam0->f_69, 128))
			{
				if (func_363(Global_2440049.f_2834[iVar0 /*80*/].f_1))
				{
					Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
					func_358(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_556(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_557()
{
	bool bVar0;
	
	if (Global_2440049.f_3157)
	{
		return;
	}
	if (!Global_77101)
	{
		Global_77101 = 1;
		bVar0 = true;
	}
	func_558();
	if (bVar0)
	{
		Global_77101 = 0;
	}
}

void func_558()
{
	Global_2440049.f_3158 = 0;
	Global_2440049.f_3158.f_578 = 0;
	func_562(&(Global_2440049.f_3158.f_1));
	Global_2440049.f_3158.f_1.f_1 = 0;
	func_559(&(Global_2440049.f_3158.f_1), 1);
}

void func_559(var uParam0, int iParam1)
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
				if (unk_0x03DB5C6AABF8DA46() && !func_561(0))
				{
					unk_0xFD45D90342D2A0CD(800);
				}
			}
		}
	}
	func_560(0);
}

void func_560(int iParam0)
{
	Global_77093 = iParam0;
	Global_77094 = iParam0;
}

bool func_561(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_562(var uParam0)
{
	func_563(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_563(var uParam0)
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

int func_564(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_565(var uParam0)
{
	if (func_365(uParam0->f_1))
	{
		uParam0->f_72 = func_318();
	}
}

void func_566(var uParam0, int iParam1)
{
	if (func_365(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_5() || !func_850(iParam1, 0, 1))
	{
		return;
	}
	if (func_363(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_567(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_567(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_402(iParam0) && !bParam4)
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
		iVar0 = unk_0x6CC163E30ECE0790(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_77785[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_402(unk_0x460153A63B9477BC()) || (func_590() && func_589())) && !unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 31)) && !bParam4)
	{
		iVar1 = func_588();
		if (unk_0xAE06B9E39EBDE049(iVar1))
		{
			if (unk_0xD0390A93AF3907B8(iVar1))
			{
				if (unk_0xE4400E48E081F17A(iVar1) != -1)
				{
					if (func_850(unk_0xE4400E48E081F17A(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
						{
							if (Global_4456448.f_77785[iParam1] != -1)
							{
								return func_586(iParam1, iParam0, 0);
							}
							else
							{
								return func_579(iParam0, unk_0xE4400E48E081F17A(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_579(iParam0, unk_0xE4400E48E081F17A(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
			{
				if (Global_4456448.f_77785[iParam1] != -1)
				{
					return func_586(iParam1, iParam0, 0);
				}
				else
				{
					return func_568(0, -1, 0);
				}
			}
			else
			{
				return func_568(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
	{
		if (Global_4456448.f_77785[iParam1] != -1)
		{
			return func_586(iParam1, iParam0, 0);
		}
		else
		{
			return func_579(iParam0, unk_0x460153A63B9477BC(), iParam1, bParam2, bParam3);
		}
	}
	return func_579(iParam0, unk_0x460153A63B9477BC(), iParam1, bParam2, bParam3);
}

int func_568(bool bParam0, int iParam1, bool bParam2)
{
	return func_569(unk_0x460153A63B9477BC(), bParam0, iParam1, bParam2);
}

int func_569(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x166E920FB00B2DBB(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x6CC163E30ECE0790(iParam0);
	if ((func_578() || (func_577() && func_575())) && Global_1388252.f_1)
	{
		if (bParam1)
		{
			return func_574(iParam2, iVar0);
		}
		else
		{
			return func_574(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_495(iVar0, iParam2, 0) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_573(1);
				}
				else
				{
					return func_573(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 20))
			{
				return func_570(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_570(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_573(1);
	}
	return func_573(0);
}

int func_570(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_572(iParam0, iParam1, iParam3);
	if (func_571(Global_4456448.f_82708, 1))
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

int func_571(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_129348 == 65)
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
		if (iParam0 == Global_262145.f_9021[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_572(int iParam0, int iParam1, int iParam2)
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
			if (!func_495(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_573(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_574(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_572(iParam1, iParam0, 4);
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

bool func_575()
{
	if (func_576())
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 4);
}

bool func_576()
{
	return unk_0xCE990E643CD9D0E5(Global_4456448.f_123318, 12);
}

bool func_577()
{
	if (unk_0xFC559366953F62B3())
	{
		return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0);
	}
	return ((unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0) || Global_1655243) && unk_0x7B70881748D166CD(joaat("fm_deathmatch_creator")) > 0);
}

int func_578()
{
	if (func_576() && unk_0xFC559366953F62B3())
	{
		return 1;
	}
	return 0;
}

int func_579(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = unk_0x6CC163E30ECE0790(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590682[iVar2 /*883*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_582())
			{
				iVar3 = func_317(iParam0);
				if (!iVar3 == -1)
				{
					return func_315(iVar3);
				}
			}
			if ((func_581(iParam1, iParam0, iVar0, 0) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18)) || ((func_495(unk_0x6CC163E30ECE0790(iParam1), unk_0x6CC163E30ECE0790(iParam0), 0) && unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 23)) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18)))
			{
				return func_573(1);
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 26))
			{
				return func_580(1);
			}
			else
			{
				return func_569(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574416 || Global_1574407) || Global_1590682[iParam0 /*883*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574416 == 1 && Global_1574426 == 0))
			{
				return func_573(1);
			}
			else
			{
				return func_569(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574411 && Global_1573907.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_317(iParam0);
	if (!iVar4 == -1)
	{
		return func_315(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_580(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_581(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (unk_0x6CC163E30ECE0790(iParam0) == -1 && unk_0x6CC163E30ECE0790(iParam1) == -1)
			{
				return 0;
			}
		}
		return unk_0x6CC163E30ECE0790(iParam0) == unk_0x6CC163E30ECE0790(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (unk_0x6CC163E30ECE0790(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return unk_0x6CC163E30ECE0790(iParam0) == iParam2;
	}
	return unk_0x6CC163E30ECE0790(iParam0) == iParam2;
}

int func_582()
{
	if ((((func_297() || func_585()) || func_61()) || func_584()) || func_583())
	{
		return 1;
	}
	if (unk_0xFC559366953F62B3() && unk_0xCE990E643CD9D0E5(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

var func_583()
{
	return Global_2451787.f_23;
}

bool func_584()
{
	return Global_2451787.f_20;
}

var func_585()
{
	return Global_2451787.f_17;
}

int func_586(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969055.f_14[iParam0];
	if (func_582())
	{
		iVar2 = func_317(iParam1);
		if (!iVar2 == -1)
		{
			return func_315(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_592[iParam0 /*16355*/].f_7079[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_5())
	{
		if (Global_4456448.f_77785[iParam0] != -1 && Global_4456448.f_77785[iParam0] <= 4)
		{
			if (Global_4456448.f_77785[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_77785[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_77785[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_77785[iParam0] == 4)
			{
				if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_77785[iParam0];
			}
		}
		else
		{
			iVar0 = func_569(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_21, 13))
		{
			iVar0 = func_587(iParam0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 26) && !func_495(iParam0, unk_0x6CC163E30ECE0790(iParam1), 0))
		{
			iVar0 = func_580(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_587(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_129476;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_129477;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_129478;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_129479;
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

var func_588()
{
	return Global_2359302.f_2;
}

bool func_589()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 4);
}

bool func_590()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 14);
}

void func_591(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_5();
	uParam1->f_18 = func_5();
	uParam1->f_19 = func_5();
	uParam1->f_20 = func_5();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_592(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_5();
	iVar1 = func_5();
	iVar2 = func_5();
	return func_593(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_593(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_591(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_17 = iParam5;
	Var0.f_18 = iParam6;
	Var0.f_19 = iParam7;
	StringCopy(&(Var0.f_25), sParam3, 64);
	StringCopy(&(Var0.f_57), sParam8, 16);
	Var0.f_73 = uParam4;
	Var0.f_71 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_72 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_71 = iParam14;
	}
	func_358(&(Var0.f_69), 4);
	return func_555(&Var0);
}

char* func_594(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		sVar0 = func_599(&(Global_1630317[iParam0 /*595*/].f_11.f_104));
		return sVar0;
	}
	if (Global_1630317[iParam0 /*595*/].f_11.f_120 != Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_120)
	{
		sVar0 = func_597(iParam0, 0);
		return sVar0;
	}
	if (((func_233(iParam0, 28) || func_233(unk_0x460153A63B9477BC(), 28)) || func_596(iParam0)) && !func_595(iParam0))
	{
		return func_597(iParam0, 0);
	}
	iVar1 = func_65(iParam0);
	if (iVar1 != func_5())
	{
		if (iVar1 != unk_0x460153A63B9477BC())
		{
			if (!unk_0xC6C08C02733D02C8() && !unk_0xB454B9D1010ED3BA(0, -1, 1))
			{
				return func_597(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_5())
	{
		sVar0 = func_599(&(Global_1630317[iVar1 /*595*/].f_11.f_104));
		if (unk_0x7BCC91F3C1CF24E8(sVar0))
		{
			return func_597(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_595(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_66(iParam0) };
	if (unk_0xC6C08C02733D02C8())
	{
		if (unk_0xF9A94F315B890564(0))
		{
			if (unk_0xA20DDBBB15EC6235(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_596(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_5())
	{
		Var0 = { func_66(iParam0) };
		if (unk_0xDCA0815D900F27F8() || unk_0xF8EDFF98A9C94C74())
		{
			if (unk_0xF9A94F315B890564(0))
			{
				return 0;
			}
		}
		else if (unk_0xC6C08C02733D02C8())
		{
			if (unk_0xF9A94F315B890564(0))
			{
				if (unk_0xA20DDBBB15EC6235(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_597(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_301(iParam0, 1))
		{
			return func_598();
		}
	}
	return unk_0x7C774D8CB8DC6FE3("GB_REST_ACC");
}

char* func_598()
{
	return unk_0x7C774D8CB8DC6FE3("GB_REST_ACCM");
}

var func_599(var uParam0)
{
	return uParam0;
}

void func_600(bool bParam0)
{
	if (bParam0)
	{
		if (func_601(1))
		{
			unk_0xBE20AB8238688965(&Global_1574681, 1);
		}
	}
	else if (func_601(2))
	{
		unk_0xBE20AB8238688965(&Global_1574681, 2);
	}
}

int func_601(int iParam0)
{
	int iVar0;
	
	iVar0 = func_263(2535, -1, 0);
	if (iParam0 == 0)
	{
		if ((unk_0xCE990E643CD9D0E5(iVar0, 0) && unk_0xCE990E643CD9D0E5(iVar0, 1)) && unk_0xCE990E643CD9D0E5(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((unk_0xCE990E643CD9D0E5(iVar0, 3) && unk_0xCE990E643CD9D0E5(iVar0, 4)) && unk_0xCE990E643CD9D0E5(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((unk_0xCE990E643CD9D0E5(iVar0, 6) && unk_0xCE990E643CD9D0E5(iVar0, 7)) && unk_0xCE990E643CD9D0E5(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((unk_0xCE990E643CD9D0E5(iVar0, 9) && unk_0xCE990E643CD9D0E5(iVar0, 10)) && unk_0xCE990E643CD9D0E5(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_602(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_591(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_25), sParam2, 64);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam6;
	return func_555(&Var0);
}

int func_603(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		func_686(&iVar1, &iVar2);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar0 != iVar1)
			{
				if (Local_82.f_256[iVar0] == iVar2)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else if (Local_82.f_27 == joaat("rhino") || Local_82.f_27 == joaat("hydra"))
	{
		return Local_82.f_465[0 /*4*/].f_1 == Local_82.f_465[1 /*4*/].f_1;
	}
	else
	{
		return Local_82.f_594[0 /*4*/].f_1 == Local_82.f_594[1 /*4*/].f_1;
	}
	return 0;
}

int func_604()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_686(&iVar1, &iVar2);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iVar1)
		{
			if (Local_82.f_256[iVar0] > iVar2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_605()
{
	if (!func_748())
	{
		return round((to_float(Global_262145.f_11259) * Global_262145.f_11449));
	}
	if ((unk_0xCE990E643CD9D0E5(Local_82.f_3, 0) && unk_0xCE990E643CD9D0E5(Local_82.f_3, 1)) && unk_0xCE990E643CD9D0E5(Local_82.f_3, 2))
	{
		return round((to_float(Global_262145.f_11320) * Global_262145.f_11451));
	}
	if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 6))
	{
		return round((to_float(Global_262145.f_11320) * Global_262145.f_11451));
	}
	return 0;
}

void func_606(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_617())
		{
			if (func_616(0))
			{
				if (!func_379(0))
				{
					if (unk_0x166E920FB00B2DBB(func_615()))
					{
						if (func_614() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_614());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_612(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_611("GB_BCUT_TICK1", func_615(), iVar0, 0, 0, 1);
						}
						func_610(20);
						func_607(func_615(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_607(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_850(iParam0, 0, 1))
	{
		Var0 = 1596100569;
		Var0.f_1 = unk_0x460153A63B9477BC();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_609(iParam0);
		func_608(&(Var0.f_6), &(Var0.f_7));
		unk_0xB802750B43D4047C(1, &Var0, 8, func_519(iParam0));
	}
}

void func_608(var uParam0, var uParam1)
{
	*uParam0 = Global_1652336.f_9;
	*uParam1 = Global_1652336.f_10;
}

var func_609(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_506;
}

void func_610(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xBE20AB8238688965(&(Global_2540384.f_5188.f_7[iVar0]), iVar1);
}

int func_611(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, unk_0x72C1D3A1AB8CAA5B(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, unk_0x72C1D3A1AB8CAA5B(iParam1), 64);
		}
		if (unk_0x7BCC91F3C1CF24E8(&Var1))
		{
		}
		unk_0x5B8DD855EAFD33B5(sParam0);
		unk_0x7006FC1051C85FCA(func_567(iParam1, -2, 1, 0, 0));
		unk_0x9EFD301E3BE8324E(func_541(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x7006FC1051C85FCA(iParam3);
		}
		unk_0x42710E9E08FA375A(iParam2);
		iVar0 = unk_0xD60C2975A14D763D(0, 1);
		func_536(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_612(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_613(1);
	}
	else
	{
		iVar1 = func_613(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_613(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12398;
}

int func_614()
{
	return Global_262145.f_12397;
}

int func_615()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11;
}

bool func_616(bool bParam0)
{
	return func_313(unk_0x460153A63B9477BC(), bParam0);
}

bool func_617()
{
	return func_348(unk_0x460153A63B9477BC());
}

int func_618()
{
	int iVar0;
	
	if (!unk_0xCE990E643CD9D0E5(Local_82.f_3, 6) && !unk_0xCE990E643CD9D0E5(Local_82.f_3, 15))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_82.f_256[iVar0] > 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_619()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_73[iVar0]))
		{
			if (!func_109(Local_82.f_73[iVar0]))
			{
				func_25(&(Local_82.f_73[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_48[iVar0]))
		{
			if (func_31(Local_82.f_48[iVar0]))
			{
				func_25(&(Local_82.f_48[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_620(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_241(unk_0x460153A63B9477BC(), 0) || func_342(unk_0x460153A63B9477BC(), 0))
	{
		if (func_234(unk_0x460153A63B9477BC()) || func_247(unk_0x460153A63B9477BC()))
		{
			bParam2 = false;
		}
	}
	if (unk_0xDD3720600B3FC529() < iParam0)
	{
		if (bParam2)
		{
			func_625(sParam3, sParam4, 1);
		}
		if (func_624(26, -1))
		{
			func_622(26, -1);
		}
		return 1;
	}
	if (func_22(&(Global_1574656.f_18)))
	{
		if (!func_19(&(Global_1574656.f_18), 7500, 0))
		{
			return 0;
		}
		func_106(&(Global_1574656.f_18));
	}
	if (func_621())
	{
		if (bParam2)
		{
			func_625(sParam3, sParam4, 0);
		}
		if (func_624(26, -1))
		{
			func_622(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0xB9E6DF0411C3488E() < iParam0)
	{
		if (bParam2)
		{
			func_625(sParam3, sParam4, 1);
		}
		if (func_624(26, -1))
		{
			func_622(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_621()
{
	return unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 0);
}

void func_622(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xA2C3707E24751958(0, iParam1);
			break;
		
		default:
			iVar1 = func_623(iParam1);
			iVar0 = unk_0xFCBF95335DD16537(iVar1);
			if (unk_0xCE990E643CD9D0E5(iVar0, iParam0))
			{
				unk_0xD2459066EA58CE43(&iVar0, iParam0);
				unk_0xA2C3707E24751958(iVar0, iParam1);
			}
			break;
	}
}

int func_623(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_18();
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

bool func_624(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar0 = func_623(iParam1);
	iVar1 = unk_0xFCBF95335DD16537(iVar0);
	return unk_0xCE990E643CD9D0E5(iVar1, iParam0);
}

void func_625(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 2) && !func_205(unk_0x460153A63B9477BC())) && !func_204(unk_0x460153A63B9477BC()))
	{
		if (unk_0x7BCC91F3C1CF24E8(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (unk_0x7BCC91F3C1CF24E8(sParam1))
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
		func_636(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		unk_0xBE20AB8238688965(&(Global_1574656.f_1), 2);
	}
}

void func_626()
{
	Global_2540384.f_1852.f_56 = 1;
}

void func_627()
{
	Global_2540384.f_1852.f_54 = 1;
}

bool func_628()
{
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_1794, 11);
}

int func_629()
{
	if (iLocal_543 > -1)
	{
		if (func_109(Local_82.f_7[iLocal_543]))
		{
			if (unk_0xACBCFA3095C5A434(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_82.f_7[iLocal_543])))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_630(char* sParam0, int iParam1, int iParam2)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x42710E9E08FA375A(iParam2);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

int func_631(bool bParam0)
{
	if (!func_748())
	{
		return round((to_float(Global_262145.f_11258) * Global_262145.f_11448));
	}
	if (bParam0)
	{
		return round((to_float(Global_262145.f_11319) * Global_262145.f_11450));
	}
	if ((unk_0xCE990E643CD9D0E5(Local_82.f_3, 0) && unk_0xCE990E643CD9D0E5(Local_82.f_3, 1)) && unk_0xCE990E643CD9D0E5(Local_82.f_3, 2))
	{
		return round((to_float(Global_262145.f_11319) * Global_262145.f_11450));
	}
	if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 6))
	{
		return round((to_float(Global_262145.f_11319) * Global_262145.f_11450));
	}
	return 0;
}

char* func_632()
{
	if (Local_82.f_27 == joaat("rhino"))
	{
		return "ABLIP_TANK";
	}
	else if (unk_0xF9C3E2B9AA9E2294(Local_82.f_27))
	{
		return "ABLIP_PLANE";
	}
	return "ABLIP_HELI";
}

void func_633(int iParam0, int iParam1, bool bParam2)
{
	if (func_245())
	{
		if (iParam1 == 1)
		{
			if (Global_2540384.f_4458 == -1)
			{
				Global_2540384.f_4458 = Global_262145.f_26466;
			}
			func_8(&(Global_2540384.f_4456), 0, 0);
			if (bParam2)
			{
				if (Global_2540384.f_4461 == -1)
				{
					Global_2540384.f_4461 = Global_262145.f_26467;
				}
				func_8(&(Global_2540384.f_4459), 0, 0);
			}
			else
			{
				Global_1312436 = 0;
				Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_8 = 0;
				func_688(1);
			}
		}
		else
		{
			Global_1312436 = 0;
			Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_8 = 0;
			func_688(1);
		}
		if ((!unk_0xFC559366953F62B3() && !func_634()) && !func_251(unk_0x460153A63B9477BC()))
		{
			Global_968396 = 0;
		}
		unk_0x88B39313953E52DA(0, -1, -1, iParam0);
	}
}

bool func_634()
{
	return Global_2451787.f_838;
}

int func_635(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_591(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_358(&(Var0.f_69), iParam10);
	}
	return func_555(&Var0);
}

int func_636(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_591(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_358(&(Var0.f_69), iParam7);
	}
	return func_555(&Var0);
}

void func_637(bool bParam0)
{
	if (bParam0)
	{
		unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 4);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 4);
	}
}

void func_638(bool bParam0)
{
	int iVar0;
	
	if (unk_0x3FB4D40A857CEA77(unk_0x9B0761B4C3EB8BC7(), 5) != 0)
	{
		unk_0x8342E6CB98CD545C(unk_0x9B0761B4C3EB8BC7(), 177, 1);
		unk_0xCCBF08403B8F5FE7(unk_0x460153A63B9477BC(), func_263(585, -1, 0));
		if (func_658())
		{
			unk_0xA383674598131A24(unk_0x460153A63B9477BC(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_657())
		{
			unk_0xA383674598131A24(unk_0x460153A63B9477BC(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_654(3610, -1, -1))
		{
		}
		iVar0 = func_263(2041, -1, 0);
		unk_0x7A5A002019151CCC(unk_0x460153A63B9477BC(), func_653(unk_0x1FA7B77001D60F9D(unk_0x460153A63B9477BC()), iVar0));
		if (func_616(0))
		{
			unk_0xCCBF08403B8F5FE7(unk_0x460153A63B9477BC(), func_263(585, -1, 0));
		}
		else
		{
			unk_0xCCBF08403B8F5FE7(unk_0x460153A63B9477BC(), func_652(Global_2549779));
		}
		func_651(unk_0x460153A63B9477BC(), iVar0);
		unk_0xA853059BD252952D(unk_0x460153A63B9477BC(), 5, func_644(unk_0x9B0761B4C3EB8BC7(), iVar0), func_643(unk_0x9B0761B4C3EB8BC7(), iVar0), 0);
		func_642(func_263(2041, -1, 0), 1);
		Global_2540384.f_287 = 1;
		func_639(unk_0x460153A63B9477BC(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_639(int iParam0, int iParam1, int iParam2)
{
	if (unk_0x25DDB354A40FFCDB())
	{
		func_641();
		if (iParam2 == -1)
		{
			iParam2 = func_263(2041, -1, 0);
		}
		unk_0xA853059BD252952D(iParam0, 5, func_644(unk_0x1FA7B77001D60F9D(iParam0), iParam2), func_643(unk_0x1FA7B77001D60F9D(iParam0), iParam2), 0);
		unk_0x7A5A002019151CCC(iParam0, func_653(unk_0x1FA7B77001D60F9D(iParam0), iParam2));
		unk_0x45F588C0DD767737(unk_0x1FA7B77001D60F9D(iParam0), 5, func_644(unk_0x1FA7B77001D60F9D(iParam0), iParam2), func_643(unk_0x1FA7B77001D60F9D(iParam0), iParam2), func_653(unk_0x1FA7B77001D60F9D(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_263(585, -1, 0);
		}
		if (func_616(1) && func_640(iParam0))
		{
			unk_0xCCBF08403B8F5FE7(iParam0, func_652(Global_2549779));
		}
		else
		{
			unk_0xCCBF08403B8F5FE7(iParam0, iParam1);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_28, 4))
		{
			unk_0xCCBF08403B8F5FE7(iParam0, Global_1574444);
			unk_0xA383674598131A24(iParam0, joaat("xm_prop_x17_para_sp_s"));
		}
		func_651(iParam0, iParam2);
		unk_0x8342E6CB98CD545C(unk_0x1FA7B77001D60F9D(iParam0), 177, 1);
	}
}

bool func_640(int iParam0)
{
	return func_233(iParam0, 10);
}

void func_641()
{
	Global_76808 = 0;
	Global_76809 = -1;
	Global_76810 = -1;
	Global_76811 = -1;
	Global_76812 = -1;
	Global_76813 = -1;
}

void func_642(int iParam0, int iParam1)
{
	if (unk_0x25DDB354A40FFCDB())
	{
		func_641();
		func_485(2041, iParam0, -1, 1, 0);
		unk_0xA853059BD252952D(unk_0x460153A63B9477BC(), 5, func_644(unk_0x9B0761B4C3EB8BC7(), iParam0), func_643(unk_0x9B0761B4C3EB8BC7(), iParam0), 0);
		func_651(unk_0x460153A63B9477BC(), iParam0);
		unk_0x7A5A002019151CCC(unk_0x460153A63B9477BC(), func_653(unk_0x9B0761B4C3EB8BC7(), iParam0));
		if ((iParam1 && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7())) && unk_0x3FB4D40A857CEA77(unk_0x9B0761B4C3EB8BC7(), 5) != 0)
		{
			func_639(unk_0x460153A63B9477BC(), -1, -1);
		}
	}
}

int func_643(int iParam0, int iParam1)
{
	if (iParam1 >= 62)
	{
		return (iParam1 - 62);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_644(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = unk_0x3FB4D40A857CEA77(iParam0, 9) != false;
	iVar1 = unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8));
	iVar2 = unk_0x21A69BE7599CD8B7(iParam0, 11, unk_0x3FB4D40A857CEA77(iParam0, 11), unk_0x79AFA009D186C4FB(iParam0, 11));
	iVar3 = unk_0x21A69BE7599CD8B7(iParam0, 4, unk_0x3FB4D40A857CEA77(iParam0, 4), unk_0x79AFA009D186C4FB(iParam0, 4));
	if ((((!bVar0 == Global_76808 || !iParam1 == Global_76809) || !iVar1 == Global_76810) || !iVar2 == Global_76811) || !iVar3 == Global_76812)
	{
		Global_76808 = bVar0;
		Global_76809 = iParam1;
		Global_76810 = iVar1;
		Global_76811 = iVar2;
		Global_76812 = iVar3;
		Global_76813 = func_645(iParam0, iParam1);
		if (iParam1 == 63 || iParam1 == 62)
		{
			if (unk_0x36FE6D3220816ADA(unk_0x1FA7B77001D60F9D(unk_0x460153A63B9477BC())) == joaat("mp_f_freemode_01"))
			{
				if (Global_76813 == 61)
				{
					Global_76813 = 79;
				}
				else if (Global_76813 == 39)
				{
					Global_76813 = 79;
				}
				else if (Global_76813 == 76)
				{
					Global_76813 = 80;
				}
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x1FA7B77001D60F9D(unk_0x460153A63B9477BC())) == joaat("mp_m_freemode_01"))
			{
				if (Global_76813 == 61)
				{
					Global_76813 = 78;
				}
				else if (Global_76813 == 39)
				{
					Global_76813 = 78;
				}
			}
		}
	}
	return Global_76813;
}

int func_645(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = unk_0x3FB4D40A857CEA77(iParam0, 11);
	if (unk_0x3FB4D40A857CEA77(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = unk_0x36FE6D3220816ADA(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 69;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	iVar4 = unk_0x21A69BE7599CD8B7(iParam0, 8, unk_0x3FB4D40A857CEA77(iParam0, 8), unk_0x79AFA009D186C4FB(iParam0, 8));
	if (unk_0x4D0432E34C5996D9(iVar4, joaat("OVER_JACKET"), 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_2"), 8) || unk_0x4D0432E34C5996D9(iVar4, 1293534210, 8))
			{
				return (2 + iVar3);
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_3"), 8) || unk_0x4D0432E34C5996D9(iVar4, 1072212384, 8))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_2"), 8))
			{
				return (7 + iVar3);
			}
			if ((unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_3"), 8) || unk_0x4D0432E34C5996D9(iVar4, 1072212384, 8)) || unk_0x4D0432E34C5996D9(iVar4, 1293534210, 8))
			{
				return (8 + iVar3);
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_4"), 8))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_5"), 8))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			if (unk_0x4D0432E34C5996D9(iVar4, joaat("X17_DRAW_6"), 8))
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		return func_650(iParam0, iParam1);
	}
	if (func_649(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = unk_0x21A69BE7599CD8B7(iParam0, 11, iVar0, unk_0x79AFA009D186C4FB(iParam0, 11));
		if (unk_0x4D0432E34C5996D9(iVar5, joaat("HIPSTER_DRESS"), 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("DRESS"), 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("PILOT_SUIT"), 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("COMBAT_GEAR"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("HOODED_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_5"), 0))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_32"), 0))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_33"), 0))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_COAT"), 0) && !unk_0x4D0432E34C5996D9(iVar5, joaat("X17_DRAW_3"), 0))
		{
			iVar6 = func_648(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_647(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
						break;
					
					default:
						iVar0 = func_647(iVar5);
						break;
					}
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_BOMB"), 0))
		{
			if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_DRAW_4"), 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("HEIST_GEAR"), 0))
		{
			iVar7 = func_646(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_647(iVar5);
					break;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("XMAS2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_7"), 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("JAN_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_8"), 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("JAN_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (unk_0x4D0432E34C5996D9(iVar5, joaat("AIR_DRAW_3"), 0))
				{
					return func_650(iParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((unk_0x4D0432E34C5996D9(iVar5, -1086258388, 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_SWEAT"), 0)) || unk_0x4D0432E34C5996D9(iVar5, joaat("LOW_SWEAT"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (bVar1)
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_650(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_22"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_0"), 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("AIR_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("STUNT_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_8"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_10"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return func_650(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_11"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_13"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_14"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_16"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_18"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return func_650(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_21"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_25"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_27"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_28"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_30"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_650(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_32"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("BIKER_DRAW_33"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_1"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return (48 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("GUN_DRAW_19"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("GUN_DRAW_20"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("GUN_DRAW_23"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("GUN_DRAW_24"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("SMUG_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("AIR_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("X17_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("X17_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("X17_DRAW_6"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("X17_DRAW_7"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("ASSAULT_DRAW_0"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (1 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (unk_0x4D0432E34C5996D9(iVar5, joaat("ARENA_DRAW_14"), 0))
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return func_650(iParam0, iParam1) + 15;
				}
				else
				{
					return func_650(iParam0, iParam1) + 15;
				}
			}
			else if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("ARENA_DRAW_3"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("ARENA_DRAW_4"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return func_650(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("APART_DRAW_5"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LOW2_DRAW_9"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (4 + iVar3);
			}
			else
			{
				return func_650(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("ARENA_DRAW_12"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("IE_DRAW_15"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return func_650(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("LUXE2_DRAW_2"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1);
			}
			else
			{
				return func_650(iParam0, iParam1) + 15;
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("ARENA_DRAW_17"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_650(iParam0, iParam1) + 15;
			}
			else
			{
				return func_650(iParam0, iParam1);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("VEST_SHIRT"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("TAILS_JACKET"), 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (unk_0x4D0432E34C5996D9(iVar5, joaat("SMOKING_JACKET"), 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if ((unk_0x4D0432E34C5996D9(iVar5, joaat("SILK_PYJAMAS"), 0) || unk_0x4D0432E34C5996D9(iVar5, joaat("SILK_ROBE"), 0)) || unk_0x4D0432E34C5996D9(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_647(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 9:
				return (2 + iVar3);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (4 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			}
	}
	return (1 + iVar3);
	return 0;
}

int func_646(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_12"), iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_13"), iParam1))
	{
		iVar0 = 13;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_14"), iParam1))
	{
		iVar0 = 14;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_15"), iParam1))
	{
		iVar0 = 15;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_16"), iParam1))
	{
		iVar0 = 16;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("HEIST_DRAW_17"), iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_647(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_0"), 0))
	{
		iVar0 = 0;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_1"), 0))
	{
		iVar0 = 1;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_2"), 0))
	{
		iVar0 = 2;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_3"), 0))
	{
		iVar0 = 3;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_4"), 0))
	{
		iVar0 = 4;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_5"), 0))
	{
		iVar0 = 5;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_6"), 0))
	{
		iVar0 = 6;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_7"), 0))
	{
		iVar0 = 7;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_8"), 0))
	{
		iVar0 = 8;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_9"), 0))
	{
		iVar0 = 9;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_10"), 0))
	{
		iVar0 = 10;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_11"), 0))
	{
		iVar0 = 11;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_12"), 0))
	{
		iVar0 = 12;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_13"), 0))
	{
		iVar0 = 13;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_14"), 0))
	{
		iVar0 = 14;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("DRAW_15"), 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_648(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_0"), iParam1))
	{
		iVar0 = 0;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_1"), iParam1))
	{
		iVar0 = 1;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_2"), iParam1))
	{
		iVar0 = 2;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_3"), iParam1))
	{
		iVar0 = 3;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_4"), iParam1))
	{
		iVar0 = 4;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_5"), iParam1))
	{
		iVar0 = 5;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_6"), iParam1))
	{
		iVar0 = 6;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_7"), iParam1))
	{
		iVar0 = 7;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_8"), iParam1))
	{
		iVar0 = 8;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_9"), iParam1))
	{
		iVar0 = 9;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_10"), iParam1))
	{
		iVar0 = 10;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, joaat("LUXE_DRAW_11"), iParam1))
	{
		iVar0 = 11;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (unk_0x4D0432E34C5996D9(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_649(int iParam0)
{
	if (unk_0x4D0432E34C5996D9(unk_0x21A69BE7599CD8B7(iParam0, 4, unk_0x3FB4D40A857CEA77(iParam0, 4), unk_0x79AFA009D186C4FB(iParam0, 4)), joaat("DUNGAREES"), 0))
	{
		return 1;
	}
	return 0;
}

int func_650(int iParam0, int iParam1)
{
	if (iParam1 > 69)
	{
		return 69;
	}
	if (iParam1 > 61)
	{
		return 61;
	}
	if (iParam1 == 53 || iParam1 == 54)
	{
		return 61;
	}
	if (iParam1 > 51)
	{
		return 51;
	}
	if (iParam1 > 46)
	{
		return 51;
	}
	if (iParam1 > 26)
	{
		return 50;
	}
	if (iParam1 > 0)
	{
		return 49;
	}
	return 48;
}

void func_651(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("vw_p_para_bag_vine_s"));
	}
	else if (iParam1 > 51)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else if (iParam1 > 46)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("p_para_bag_xmas_s"));
	}
	else if (iParam1 > 26)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("lts_p_para_bag_lts_s"));
	}
	else if (iParam1 > 0)
	{
		unk_0x2335ABA3DB9BD0AC(iParam0, joaat("lts_p_para_bag_pilot2_s"));
	}
	else
	{
		unk_0x32ECE704AD6A4E0B(iParam0);
	}
}

int func_652(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1:
			return 9;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 8;
			break;
		
		case 7:
			return 11;
			break;
		
		case 8:
			return 11;
			break;
		
		case 9:
			return 6;
			break;
		
		case 10:
			return 6;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 10;
			break;
	}
	return 0;
}

int func_653(int iParam0, int iParam1)
{
	return 0;
}

int func_654(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar1 = func_656(iParam0, iParam1);
	uVar2 = func_655(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x9FD0AD883E4A7C1E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_655(int iParam0)
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

int func_656(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
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

bool func_657()
{
	return unk_0x95C5B896CB42B20E(1428761799);
}

bool func_658()
{
	return unk_0x95C5B896CB42B20E(-1005876368);
}

void func_659(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_1794, 11))
		{
			unk_0xBE20AB8238688965(&(Global_2540384.f_1794), 11);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_2540384.f_1794, 11))
	{
		unk_0xD2459066EA58CE43(&(Global_2540384.f_1794), 11);
	}
}

void func_660(bool bParam0)
{
	if (bParam0)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_1794, 9))
		{
			unk_0xBE20AB8238688965(&(Global_2540384.f_1794), 9);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_2540384.f_1794, 9))
	{
		unk_0xD2459066EA58CE43(&(Global_2540384.f_1794), 9);
	}
}

void func_661()
{
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 1))
	{
		unk_0x779660A9E5364C4D(0, 75, 1);
	}
}

void func_662(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 7))
		{
			if (((!func_247(unk_0x460153A63B9477BC()) && !func_204(unk_0x460153A63B9477BC())) && !func_671(unk_0x460153A63B9477BC())) && !func_213(unk_0x460153A63B9477BC()))
			{
				if (func_245())
				{
					func_633(2, 0, 1);
					func_670();
				}
				if (func_262(0))
				{
					iVar0 = func_263(2481, -1, 0);
					unk_0xD2459066EA58CE43(&iVar0, 0);
					func_670();
				}
				if (func_262(func_209(func_190(unk_0x460153A63B9477BC()))))
				{
					iVar0 = func_263(2481, -1, 0);
					unk_0xD2459066EA58CE43(&iVar0, func_209(func_190(unk_0x460153A63B9477BC())));
					func_670();
				}
				if (func_669())
				{
					func_670();
				}
				if (func_190(unk_0x460153A63B9477BC()) > -1)
				{
					unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 7);
					if (func_227(unk_0x460153A63B9477BC()))
					{
						func_668();
					}
					func_665(func_667(func_190(unk_0x460153A63B9477BC())));
				}
			}
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 7))
	{
		unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 7);
		func_663();
	}
}

void func_663()
{
	if (func_664())
	{
		unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 17);
	}
}

bool func_664()
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 17);
}

void func_665(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8572)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_666() /*10931*/].f_6175.f_4111[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312588.f_1[iVar0] == -1)
			{
				Global_1312588.f_1[iVar0] = iParam0;
				Global_1312588 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_666()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_667(int iParam0)
{
	switch (iParam0)
	{
		case 150:
			return 67;
		
		case 236:
			return 67;
		
		case 133:
			return 69;
		
		default:
	}
	return 68;
}

void func_668()
{
	if (!func_664())
	{
		Global_2540384.f_6648 = unk_0x6CAAB7E78B5D978A();
		unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 17);
	}
}

int func_669()
{
	if (Global_2440049.f_1267.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_670()
{
	if (func_669())
	{
		Global_2440049.f_1267.f_16 = 1;
	}
}

bool func_671(int iParam0)
{
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		if (((func_245() && !func_240()) || func_206(unk_0x460153A63B9477BC(), 21)) || func_206(unk_0x460153A63B9477BC(), 25))
		{
			return 1;
		}
		if (func_22(&(Global_1574656.f_13)))
		{
			if (!func_19(&(Global_1574656.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_106(&(Global_1574656.f_13));
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 9);
}

void func_672(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x0C0DE28672975DC3("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x0C0DE28672975DC3("WantedMusicDisabled", 1);
	}
	Global_2540384.f_5035 = -1;
	bVar0 = (func_241(unk_0x460153A63B9477BC(), 0) && func_234(unk_0x460153A63B9477BC()));
	if (bParam6)
	{
		func_681(func_682(iParam0), 1);
	}
	else
	{
		func_680(iParam0, -1);
		if (func_205(unk_0x460153A63B9477BC()))
		{
			Global_1574656.f_3 = iParam0;
		}
		else
		{
			func_710(iParam0);
		}
		Global_1574656.f_4 = -1;
		if (func_205(unk_0x460153A63B9477BC()))
		{
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 5);
		}
		if (((func_245() && !func_240()) || func_206(unk_0x460153A63B9477BC(), 21)) || func_206(unk_0x460153A63B9477BC(), 25))
		{
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 4);
		}
		unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 17);
		unk_0xBE20AB8238688965(&(Global_1574656.f_1), 20);
		if (func_679(iParam0))
		{
			func_678();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_677(fParam1);
		}
		if (fParam2 != 1f)
		{
			unk_0x34FEEAC2548C3789(fParam2);
			if (iParam0 == 146)
			{
				unk_0x53797676AD34A9AA(0);
				unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 0, 0);
				unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
			}
		}
		if (func_676(iParam0))
		{
			unk_0x53797676AD34A9AA(0);
			unk_0xCAD5C18968E57C30(unk_0x460153A63B9477BC(), 0, 0);
			unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391045)
			{
				func_452(1);
				if (func_601(0))
				{
					unk_0xBE20AB8238688965(&(Global_1574656.f_1), 9);
				}
				if (!bParam6)
				{
					unk_0xBE20AB8238688965(&(Global_1574656.f_1), 14);
				}
			}
		}
		if (bParam4)
		{
			func_450(1);
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 12);
		}
		if (bParam5)
		{
			func_675();
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_673(iParam0))
			{
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 21);
			}
		}
	}
	Global_2515064 = 1;
}

int func_673(int iParam0)
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
		case 150:
			return 1;
		
		default:
	}
	if (func_674())
	{
		return 1;
	}
	return 0;
}

int func_674()
{
	switch (func_189())
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

void func_675()
{
	unk_0xBE20AB8238688965(&(Global_2540384.f_5026), 0);
}

int func_676(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_235(unk_0x460153A63B9477BC()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_677(float fParam0)
{
	float fVar0;
	
	if (unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) == func_444())
	{
		return;
	}
	fVar0 = (Global_2540384.f_5183 - fParam0);
	if (unk_0x7FD2BDF03806FD9D(Global_2540384.f_5184))
	{
		if (!Global_2540384.f_5184 == unk_0x354AD085195C5FA6() && unk_0x0D77CDCF403AEBD2(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2540384.f_5183 = fParam0;
	Global_2540384.f_5184 = unk_0x354AD085195C5FA6();
}

void func_678()
{
	Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_204 = 0;
	unk_0xD2459066EA58CE43(&(Global_2540384.f_4625), 1);
}

int func_679(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_680(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_262(0) || func_262(func_209(iVar0)))
		{
			unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 2);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 2);
		}
	}
}

void func_681(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_212, iParam0))
		{
			unk_0xBE20AB8238688965(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_212), iParam0);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_212, iParam0))
	{
		unk_0xD2459066EA58CE43(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_212), iParam0);
	}
}

int func_682(int iParam0)
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

int func_683(char* sParam0)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

int func_684()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_82.f_27 != joaat("valkyrie"))
	{
		return 1;
	}
	if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		return 0;
	}
	iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
	iVar1 = unk_0x112A81273D7187A5(joaat("valkyrie"));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar4 = unk_0x10D3F7E169A49C44(iVar0, iVar2, 0);
		if (iVar4 != 0)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iVar4))
			{
				if (unk_0xD0390A93AF3907B8(iVar4))
				{
					iVar3++;
				}
			}
		}
		iVar2++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_685(bool bParam0)
{
	int iVar0;
	
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
		if (unk_0xAA5B806352173DEA(iVar0))
		{
			unk_0x0312E5501F93E5AB(iVar0, bParam0);
			unk_0xD4D34706EA3EAF64(iVar0, !bParam0);
		}
	}
}

void func_686(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1, iVar0))
		{
			*iParam0 = iVar0;
			*uParam1 = Local_82.f_256[iVar0];
		}
		iVar0++;
	}
}

void func_687()
{
	int iVar0;
	
	iVar0 = unk_0x460153A63B9477BC();
	if (iVar0 != -1)
	{
		Global_1630317[iVar0 /*595*/] = -1;
	}
}

void func_688(bool bParam0)
{
	if (unk_0x25DDB354A40FFCDB())
	{
		if (!func_245())
		{
			if (func_850(unk_0x460153A63B9477BC(), 1, 0))
			{
				unk_0x7542EFCD7D27E5D2(unk_0x9B0761B4C3EB8BC7(), 1);
				unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 342, false);
				unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 122, false);
			}
			unk_0x6C017D65D396CE15(unk_0x460153A63B9477BC(), 1f);
			unk_0x74803B5FA5C6AE45(0);
			unk_0x873FC7B9D84F77F0(1);
			if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
			{
				Global_1312436.f_2 = 0;
				if (bParam0)
				{
					unk_0x6543AC06C231023E(0, 0);
				}
			}
		}
		else
		{
			if (func_850(unk_0x460153A63B9477BC(), 1, 1))
			{
				unk_0x7542EFCD7D27E5D2(unk_0x9B0761B4C3EB8BC7(), 0);
				unk_0x69C71C91F56D82B9(unk_0x9B0761B4C3EB8BC7(), joaat("weapon_unarmed"), true);
				unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 342, true);
				unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 122, true);
				unk_0x6C017D65D396CE15(unk_0x460153A63B9477BC(), 0.5f);
				if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
				{
					unk_0x6543AC06C231023E(1, 0);
				}
			}
			unk_0x74803B5FA5C6AE45(1);
			unk_0x873FC7B9D84F77F0(0);
		}
	}
}

void func_689(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 0))
		{
			Global_2464425 = func_190(unk_0x460153A63B9477BC());
			if (Global_2464425 == -1)
			{
				Global_2464425 = Global_1574656.f_4;
			}
			if (func_709(Global_2464425) == 0)
			{
				if (func_708(1) > 0)
				{
					func_707(26, -1);
				}
			}
			if (func_245())
			{
				func_633(2, 0, 1);
				func_670();
			}
			if (func_262(0))
			{
				iVar1 = func_263(2481, -1, 0);
				unk_0xD2459066EA58CE43(&iVar1, 0);
				func_670();
			}
			if (func_262(func_209(func_190(unk_0x460153A63B9477BC()))))
			{
				iVar1 = func_263(2481, -1, 0);
				unk_0xD2459066EA58CE43(&iVar1, func_209(func_190(unk_0x460153A63B9477BC())));
				func_670();
			}
			if (func_669())
			{
				func_670();
			}
			unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 0);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 0))
	{
		if ((!func_226() && !func_706()) && !func_705())
		{
			Global_2464425 = -1;
			func_622(26, -1);
		}
		else if (func_709(Global_2464425) == 0)
		{
			iVar0 = func_692(1);
			if (iVar0 > 0)
			{
				func_690(joaat("MPPLY_FMEVN_CHEAT_END"), iVar0);
				func_491(1933, 1, -1);
				func_690(joaat("MPPLY_ACTIVITY_ENDED"), 1);
			}
		}
		else if (func_624(26, -1))
		{
			Global_2464425 = -1;
			func_622(26, -1);
		}
		unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 0);
	}
}

void func_690(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_475(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_691(iParam0))
	{
		func_473(iParam0, iVar0);
	}
	else
	{
		func_477(iParam0, iVar0);
	}
}

int func_691(int iParam0)
{
	if (Global_1388046)
	{
		switch (iParam0)
		{
			case joaat("MPPLY_CREW_0_ID"):
			case joaat("MPPLY_CREW_1_ID"):
			case joaat("MPPLY_CREW_2_ID"):
			case joaat("MPPLY_CREW_3_ID"):
			case joaat("MPPLY_CREW_4_ID"):
			case joaat("MPPLY_CREW_LOCAL_XP_0"):
			case joaat("MPPLY_CREW_LOCAL_XP_1"):
			case joaat("MPPLY_CREW_LOCAL_XP_2"):
			case joaat("MPPLY_CREW_LOCAL_XP_3"):
			case joaat("MPPLY_CREW_LOCAL_XP_4"):
			case joaat("MPPLY_BECAME_CHEATER_NUM"):
			case joaat("MPPLY_FRIENDLY"):
			case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			case joaat("MPPLY_GRIEFING"):
			case joaat("MPPLY_HELPFUL"):
			case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			case joaat("MPPLY_OFFENSIVE_UGC"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_692(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2463308 == 0)
	{
		return 0;
	}
	if (func_705())
	{
		if (unk_0xFC559366953F62B3() || (func_704() || func_702()))
		{
			Global_2462254 = 1;
		}
	}
	Global_2463308 = 0;
	if (Global_1315723)
	{
		iVar0 = 1;
	}
	if (Global_2462254)
	{
		iVar0 = 1;
	}
	if (Global_2462253)
	{
		iVar0 = 1;
	}
	if (func_556(Global_110886.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2462176)
	{
		iVar0 = 1;
	}
	if (func_701(512))
	{
		iVar0 = 1;
	}
	if (func_700(128))
	{
		iVar0 = 1;
	}
	if (Global_1315747 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_168())
	{
		iVar0 = 0;
	}
	if (Global_2462747)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_698())
		{
			if (Global_4456448.f_83167 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_16(unk_0x460153A63B9477BC(), 0))
	{
		iVar0 = 0;
	}
	if (func_697())
	{
		iVar0 = 0;
	}
	if ((Global_2462254 || Global_2462253) || Global_1315723)
	{
		if (func_702())
		{
			iVar0 = 0;
		}
	}
	Global_2462747 = 0;
	Global_2462253 = 0;
	Global_2462254 = 0;
	Global_1315723 = 0;
	Global_2462176 = 0;
	func_695(&(Global_110886.f_1), 32);
	func_694(512);
	func_693(128);
	return iVar0;
}

void func_693(int iParam0)
{
	Global_110943 = (Global_110943 - (Global_110943 && iParam0));
}

void func_694(int iParam0)
{
	Global_110944 = (Global_110944 - (Global_110944 && iParam0));
}

void func_695(var uParam0, int iParam1)
{
	func_696(uParam0, iParam1);
}

void func_696(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_697()
{
	if (((Global_1574434 || Global_1574404) || func_16(unk_0x460153A63B9477BC(), 0)) || func_590())
	{
		return 1;
	}
	return 0;
}

int func_698()
{
	switch (func_699())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_699()
{
	return Global_2452679.f_1.f_2822;
}

bool func_700(int iParam0)
{
	return (Global_110943 && iParam0) != 0;
}

bool func_701(int iParam0)
{
	return (Global_110944 && iParam0) != 0;
}

int func_702()
{
	if (func_709(Global_2464425))
	{
		return 0;
	}
	if (func_703(unk_0x460153A63B9477BC(), 146))
	{
		return 1;
	}
	return 0;
}

int func_703(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/] == iParam1)
	{
		return func_235(iParam0);
	}
	return 0;
}

int func_704()
{
	if (func_709(Global_2464425))
	{
		return 0;
	}
	if (func_235(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	return 0;
}

bool func_705()
{
	return unk_0xCE990E643CD9D0E5(Global_1312443, 0);
}

bool func_706()
{
	return Global_1312864;
}

void func_707(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xA2C3707E24751958(0, iParam1);
			break;
		
		default:
			iVar1 = func_623(iParam1);
			iVar0 = unk_0xFCBF95335DD16537(iVar1);
			if (!unk_0xCE990E643CD9D0E5(iVar0, iParam0))
			{
				unk_0xBE20AB8238688965(&iVar0, iParam0);
				unk_0xA2C3707E24751958(iVar0, iParam1);
			}
			break;
	}
}

int func_708(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1315747 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_168())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_698())
		{
			if (Global_4456448.f_83167 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_16(unk_0x460153A63B9477BC(), 0))
	{
		iVar0 = 0;
	}
	if (func_697())
	{
		iVar0 = 0;
	}
	Global_2463308 = 1;
	return iVar0;
}

int func_709(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_11397)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_11399)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_11396)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_11400)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_11401)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_11402)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_11398)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_11403)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_11404)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_11405)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_11406)
			{
				return 1;
			}
			break;
		
		case 236:
		case 150:
			break;
	}
	return 0;
}

void func_710(int iParam0)
{
	Global_1630317[unk_0x460153A63B9477BC() /*595*/] = iParam0;
}

void func_711(int iParam0)
{
	Global_2463545 = iParam0;
}

void func_712(int iParam0)
{
	if (func_203())
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (!unk_0xCE990E643CD9D0E5(iLocal_86, 0))
			{
				if ((((func_714(60000) && !unk_0xDABD547F0DF2906C()) && !func_411()) && !unk_0xF0C12886E5C1B20E()) && func_428(0, 1, 1, 1))
				{
					if (!func_748())
					{
						func_713("UW_HELP1", func_632(), func_631(1), 30000);
					}
					else
					{
						func_713("UW_HELP1C", func_632(), func_631(1), 30000);
					}
					func_426(0);
					unk_0xC4CC25B68A91D144(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
					unk_0xBE20AB8238688965(&iLocal_86, 0);
				}
			}
			break;
	}
}

void func_713(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x42710E9E08FA375A(iParam2);
	unk_0x1A169149B3D18FCB(0, 0, 0, iParam3);
}

bool func_714(int iParam0)
{
	return unk_0x44F29CF6A0675F4F(unk_0x624736CA66E14161(Global_2413901, unk_0x6CAAB7E78B5D978A())) > iParam0;
}

void func_715()
{
	int iVar0;
	
	unk_0xD2459066EA58CE43(&iLocal_87, 15);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_716(iVar0);
		iVar0++;
	}
	if (unk_0xCE990E643CD9D0E5(iLocal_87, 15))
	{
		if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 15))
		{
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 15);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 15))
	{
		unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 15);
	}
}

void func_716(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
	if (unk_0xF7DE07F319727299(Local_82.f_7[iParam0]))
	{
		if (!unk_0x80FF6C016CDB0FAF(unk_0x770D3B2B4702434A(Local_82.f_7[iParam0]), 0))
		{
			if (Local_82.f_241 == 0)
			{
			}
		}
		if (!unk_0xA59F96B50B97E63C(unk_0x770D3B2B4702434A(Local_82.f_7[iParam0]), 0))
		{
			if (!func_203())
			{
				if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1, iParam0))
				{
					if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
					{
						if (!unk_0xCE990E643CD9D0E5(iLocal_87, 15))
						{
							if (unk_0xB0919F8F7C8097BD(unk_0x9B0761B4C3EB8BC7()) == unk_0x770D3B2B4702434A(Local_82.f_7[iParam0]))
							{
								unk_0xBE20AB8238688965(&iLocal_87, 15);
							}
						}
						if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_82.f_7[iParam0]), 0))
						{
							if (func_720("UW_HELP2", func_632()) || func_720("UW_HELP2C", func_632()))
							{
								unk_0xD289B55B6AADBA10(1);
							}
							if (!func_417(unk_0x460153A63B9477BC()))
							{
								func_637(1);
							}
							iVar0 = func_719(unk_0x9B0761B4C3EB8BC7(), 0);
							if (func_630("UW_HELP1", func_632(), func_631(1)) || func_630("UW_HELP1C", func_632(), func_631(1)))
							{
								unk_0xD289B55B6AADBA10(1);
							}
							if (Local_82.f_463 != -1)
							{
								if (iVar0 > (Local_82.f_463 - 2))
								{
									iVar0 = (Local_82.f_463 - 2);
									if (iVar0 < -1)
									{
										iVar0 = -1;
									}
								}
							}
							unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), (0 + iVar0 + 1));
							unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1), iParam0);
							Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_9 = iParam0;
							unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 398, true);
							func_195();
							iLocal_570 = iVar0;
						}
						else if (Local_82.f_241 == 0)
						{
							if (!unk_0xCE990E643CD9D0E5(iLocal_86, 1))
							{
								if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) == 0)
								{
									if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), unk_0x3E4D3CCC220BDFB1(unk_0x770D3B2B4702434A(Local_82.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_428(0, 1, 1, 1))
										{
											if (!func_748())
											{
												func_718("UW_HELP2", func_632(), 30000);
											}
											else
											{
												func_718("UW_HELP2C", func_632(), 30000);
											}
											func_426(1);
											unk_0xBE20AB8238688965(&iLocal_86, 1);
										}
									}
								}
							}
							if (!func_245())
							{
								if (unk_0xCE990E643CD9D0E5(iLocal_87, 2))
								{
									unk_0xD2459066EA58CE43(&iLocal_87, 2);
								}
								if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0)
								{
									if (!unk_0xCE990E643CD9D0E5(iLocal_86, 4))
									{
										if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 12))
										{
											unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), 12);
										}
										if (!unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
										{
											if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), unk_0x3E4D3CCC220BDFB1(unk_0x770D3B2B4702434A(Local_82.f_7[iParam0]), 1)) < 2500f)
											{
												if (func_428(0, 1, 1, 1))
												{
													if (!func_748())
													{
														func_427("UW_COPS", 30000);
													}
													else
													{
														func_427("UW_COPSC", 30000);
													}
													func_426(1);
													unk_0xBE20AB8238688965(&iLocal_86, 4);
												}
											}
										}
									}
									else if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), unk_0x3E4D3CCC220BDFB1(unk_0x770D3B2B4702434A(Local_82.f_7[iParam0]), 1)) > 10000f)
									{
										unk_0xD2459066EA58CE43(&iLocal_86, 4);
									}
								}
								else
								{
									if (unk_0xCE990E643CD9D0E5(iLocal_86, 4))
									{
										unk_0xD2459066EA58CE43(&iLocal_86, 4);
									}
									if (unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 12))
									{
										unk_0xD2459066EA58CE43(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), 12);
									}
								}
							}
							else
							{
								if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 12))
								{
									unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), 12);
								}
								if (!unk_0xCE990E643CD9D0E5(iLocal_87, 2))
								{
									if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), unk_0x3E4D3CCC220BDFB1(unk_0x770D3B2B4702434A(Local_82.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_428(0, 1, 1, 1))
										{
											if (!func_748())
											{
												func_427("UW_PASSMD", 30000);
											}
											else
											{
												func_427("UW_PASSMD", 30000);
											}
											func_426(1);
											unk_0xBE20AB8238688965(&iLocal_87, 2);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 == 0)
					{
						if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
						{
							if (!unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_82.f_7[iParam0]), 0))
							{
								iVar2 = 0;
								while (iVar2 < Local_82.f_28)
								{
									if (unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, (0 + iVar2)))
									{
										func_9();
										unk_0xD2459066EA58CE43(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), (0 + iVar2));
									}
									iVar2++;
								}
								if (unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1, iParam0))
								{
									unk_0xD2459066EA58CE43(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1), iParam0);
								}
								if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_9 != -1)
								{
									Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_9 = -1;
								}
								if (func_683("UW_TIMEL"))
								{
									unk_0xD289B55B6AADBA10(1);
								}
								if (func_683("UW_TIMELA"))
								{
									unk_0xD289B55B6AADBA10(1);
								}
								if (func_417(unk_0x460153A63B9477BC()))
								{
									func_637(0);
								}
								unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 398, false);
							}
							else
							{
								if (Local_82.f_241 == 0 && !unk_0xCE990E643CD9D0E5(Local_82.f_3, 4))
								{
									iVar0 = func_719(unk_0x9B0761B4C3EB8BC7(), 0);
									if (Local_82.f_463 != -1)
									{
										if (iVar0 > (Local_82.f_463 - 2))
										{
											iVar0 = (Local_82.f_463 - 2);
										}
									}
									if (iVar0 != iLocal_570)
									{
										unk_0xD2459066EA58CE43(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1), iParam0);
										unk_0xD2459066EA58CE43(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), (0 + iLocal_570 + 1));
									}
								}
								bVar1 = false;
								if (func_264())
								{
									if (Local_82.f_413 > -1)
									{
										iVar3 = (Local_82.f_413 - func_126(&(Local_82.f_326), 0, 0));
										if (iVar3 < 2000)
										{
											bVar1 = true;
										}
									}
								}
								func_717(bVar1);
								if (unk_0x36FE6D3220816ADA(unk_0x770D3B2B4702434A(Local_82.f_7[iParam0])) == joaat("rhino"))
								{
									unk_0xEF5DD3653580835F(unk_0x770D3B2B4702434A(Local_82.f_7[iParam0]));
								}
								if (!func_22(&uLocal_100))
								{
									func_20(&uLocal_100, 0, 0);
								}
								else if (func_19(&uLocal_100, 2000, 0))
								{
									if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 9) || !func_748())
									{
										if (func_683("UW_MINV"))
										{
										}
										if (!unk_0xCE990E643CD9D0E5(iLocal_86, 5))
										{
											if (Local_82.f_28 > 1 || (Local_82.f_28 == 1 && func_112() > 1))
											{
												if (func_22(&(Local_82.f_326)))
												{
													if (!unk_0xDABD547F0DF2906C())
													{
														if (func_112() > 1)
														{
															func_427("UW_TIMELA", 30000);
														}
														else
														{
															func_427("UW_TIMEL", 30000);
														}
														func_426(1);
														unk_0xBE20AB8238688965(&iLocal_86, 5);
													}
												}
											}
										}
									}
									else if (func_748())
									{
										if (!unk_0xCE990E643CD9D0E5(Local_82.f_3, 9))
										{
											if (unk_0x36FE6D3220816ADA(unk_0x770D3B2B4702434A(Local_82.f_7[iParam0])) != joaat("valkyrie"))
											{
												if (!unk_0xCE990E643CD9D0E5(iLocal_86, 14))
												{
													if (!unk_0xDABD547F0DF2906C())
													{
														func_427("UW_MINV", 30000);
														func_426(1);
														unk_0xBE20AB8238688965(&iLocal_86, 14);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (Local_82.f_241 == 0)
					{
						if (unk_0x36FE6D3220816ADA(unk_0x770D3B2B4702434A(Local_82.f_7[iParam0])) == joaat("valkyrie"))
						{
							if (!func_683("UW_VALK") && !func_683("UW_VALKC"))
							{
								unk_0xF6D7145773FE3ADD();
								if (unk_0xCE990E643CD9D0E5(iLocal_86, 8))
								{
									unk_0xD2459066EA58CE43(&iLocal_86, 8);
								}
							}
							if (!unk_0xCE990E643CD9D0E5(iLocal_86, 8))
							{
								if (!unk_0xDABD547F0DF2906C())
								{
									iVar6 = 0;
									iVar4 = unk_0x99E61B3887CC8E71(unk_0x770D3B2B4702434A(Local_82.f_7[iParam0])) + 1;
									iVar5 = 0;
									while (iVar5 < iVar4)
									{
										if (!unk_0xB064AF9925F5537B(unk_0x770D3B2B4702434A(Local_82.f_7[iParam0]), (iVar5 - 1), 0))
										{
											iVar6++;
										}
										iVar5++;
									}
									if (iVar6 == 1)
									{
										if (!func_748())
										{
											func_427("UW_VALK", 30000);
										}
										else
										{
											func_427("UW_VALKC", 30000);
										}
										func_426(1);
										unk_0xBE20AB8238688965(&iLocal_86, 8);
									}
									if (!unk_0xCE990E643CD9D0E5(iLocal_86, 8))
									{
										if (func_748())
										{
											iVar7 = 0;
											iVar7 = 0;
											while (iVar7 < 4)
											{
												if (!bVar8)
												{
													if (iVar7 != iParam0)
													{
														iVar5 = 0;
														iVar6 = 0;
														if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iVar7]))
														{
															if (func_109(Local_82.f_7[iVar7]))
															{
																iVar5 = 0;
																while (iVar5 < iVar4)
																{
																	if (!unk_0xB064AF9925F5537B(unk_0x770D3B2B4702434A(Local_82.f_7[iVar7]), (iVar5 - 1), 0))
																	{
																		iVar6++;
																	}
																	iVar5++;
																}
																if (iVar6 > 1)
																{
																	bVar8 = true;
																}
															}
														}
													}
												}
												iVar7++;
											}
											if (!bVar8)
											{
												func_427("UW_VALKC", 30000);
												func_426(1);
												unk_0xBE20AB8238688965(&iLocal_86, 8);
											}
										}
									}
								}
							}
						}
					}
					if (Local_82.f_241 == 1)
					{
						if (unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1, iParam0))
						{
							if (!unk_0xCE990E643CD9D0E5(iLocal_86, 6))
							{
								if (func_109(Local_82.f_7[iParam0]))
								{
									if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
									{
										if (unk_0xACBCFA3095C5A434(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_82.f_7[iParam0])))
										{
											if (!unk_0xCE990E643CD9D0E5(iLocal_86, 7))
											{
												if ((unk_0x1BD7199394D7F19A(0, 75) || unk_0x22D6FB6153F774D3(0, 75)) || unk_0xB9C0D9B37277621D(0, 75))
												{
													unk_0xBE20AB8238688965(&iLocal_86, 7);
												}
											}
											if (unk_0xCE990E643CD9D0E5(iLocal_86, 7))
											{
												if (!unk_0xDABD547F0DF2906C())
												{
													if (func_748())
													{
														func_427("UW_EXITVC", 30000);
													}
													else
													{
														func_427("UW_EXITV", 30000);
													}
													func_426(1);
													unk_0xBE20AB8238688965(&iLocal_86, 6);
												}
											}
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
				iVar10 = 0;
				while (iVar10 < 4)
				{
					if (unk_0xF7DE07F319727299(Local_82.f_7[iVar10]))
					{
						if (unk_0x80FF6C016CDB0FAF(unk_0x770D3B2B4702434A(Local_82.f_7[iVar10]), 0))
						{
							if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_82.f_7[iVar10]), 0))
							{
								bVar11 = true;
							}
						}
					}
					iVar10++;
				}
				if (bVar11)
				{
					if (func_262(0))
					{
						iVar9 = func_263(2481, -1, 0);
						unk_0xD2459066EA58CE43(&iVar9, 0);
						func_485(2481, iVar9, -1, 1, 0);
						func_670();
						if (unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 9))
						{
							unk_0xD2459066EA58CE43(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), 9);
						}
					}
					if (func_262(8))
					{
						iVar9 = func_263(2481, -1, 0);
						unk_0xD2459066EA58CE43(&iVar9, 8);
						func_485(2481, iVar9, -1, 1, 0);
						func_670();
						if (unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 9))
						{
							unk_0xD2459066EA58CE43(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), 9);
						}
					}
				}
				else
				{
					if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0)
					{
						Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 = 0;
					}
					if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 12))
					{
						unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), 12);
					}
				}
				if (!unk_0xCE990E643CD9D0E5(iLocal_87, 14))
				{
					if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
					{
						if (func_109(Local_82.f_7[iParam0]))
						{
							if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1), unk_0x3E4D3CCC220BDFB1(unk_0x770D3B2B4702434A(Local_82.f_7[iParam0]), 1)) < 2500f)
							{
								if (func_428(0, 1, 1, 1))
								{
									if (!func_254(129, 0, 0))
									{
										if (!func_748())
										{
											func_427("UW_TUT", -1);
										}
										else
										{
											func_427("UW_TUTC", -1);
										}
										func_426(1);
										unk_0xBE20AB8238688965(&iLocal_87, 14);
									}
									else
									{
										if (!func_748())
										{
											func_427("UW_HIDE", -1);
										}
										else
										{
											func_427("UW_HIDEC", -1);
										}
										func_426(1);
										unk_0xBE20AB8238688965(&iLocal_87, 14);
									}
								}
							}
						}
					}
				}
			}
			if (func_850(unk_0x460153A63B9477BC(), 1, 1) && Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_1 != 0)
			{
				if (!unk_0xCE990E643CD9D0E5(Global_2540384.f_4656, 1))
				{
					unk_0xBE20AB8238688965(&(Global_2540384.f_4656), 1);
				}
			}
			else if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4656, 1))
			{
				unk_0xD2459066EA58CE43(&(Global_2540384.f_4656), 1);
			}
		}
	}
}

void func_717(bool bParam0)
{
	unk_0x779660A9E5364C4D(0, 71, 1);
	unk_0x779660A9E5364C4D(0, 72, 1);
	unk_0x779660A9E5364C4D(0, 76, 1);
	unk_0x779660A9E5364C4D(0, 59, 1);
	unk_0x779660A9E5364C4D(0, 60, 1);
	if (bParam0)
	{
		unk_0x779660A9E5364C4D(0, 75, 1);
	}
	unk_0x779660A9E5364C4D(0, 80, 1);
	unk_0x779660A9E5364C4D(0, 69, 1);
	unk_0x779660A9E5364C4D(0, 70, 1);
	unk_0x779660A9E5364C4D(0, 92, 1);
	unk_0x779660A9E5364C4D(0, 68, 1);
	unk_0x779660A9E5364C4D(0, 91, 1);
	unk_0x779660A9E5364C4D(0, 74, 1);
	unk_0x779660A9E5364C4D(0, 86, 1);
	unk_0x779660A9E5364C4D(0, 81, 1);
	unk_0x779660A9E5364C4D(0, 82, 1);
	unk_0x779660A9E5364C4D(0, 99, 1);
	unk_0x779660A9E5364C4D(0, 100, 1);
	unk_0x779660A9E5364C4D(0, 65, 1);
	unk_0x779660A9E5364C4D(0, 105, 1);
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
	unk_0x779660A9E5364C4D(0, 51, 1);
	unk_0x779660A9E5364C4D(0, 47, 1);
	unk_0x779660A9E5364C4D(0, 24, 1);
	unk_0x779660A9E5364C4D(0, 257, 1);
}

void func_718(char* sParam0, int iParam1, int iParam2)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x1A169149B3D18FCB(0, 0, 0, iParam2);
}

int func_719(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (unk_0x47DBF174A0CB9D55(iParam0, iParam1))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(iParam0, iParam1);
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

int func_720(char* sParam0, int iParam1)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_721()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0xF7DE07F319727299(Local_82.f_7[iVar0]) && unk_0xF05B7723022657B3(Local_82.f_7[iVar0]))
		{
			iVar1 = unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]);
			if (unk_0xAE06B9E39EBDE049(iVar1) && !unk_0xA59F96B50B97E63C(iVar1, 0))
			{
				unk_0xF312B73897E34A12(iVar1, 1);
			}
		}
		iVar0++;
	}
}

void func_722(struct<3> Param0)
{
	Global_2391049 = { Param0 };
	Global_2391052 = 1;
}

void func_723()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0x2AC1C68C7CCA90E5(1))
	{
		iVar1 = unk_0x39BE1B4CEB4DAEC8(1, iVar0);
		switch (iVar1)
		{
			case 185:
				func_739(iVar0);
				break;
			
			case 174:
				func_724(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_724(int iParam0)
{
	int iVar0;
	
	unk_0x477FAFFE21935947(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case 379276800:
			func_738(iParam0);
			break;
		
		case 671199305:
			func_737(iParam0);
			break;
		
		case 1670013720:
			func_736(iParam0);
			break;
		
		case -1235116728:
			func_735(iParam0);
			break;
		
		case 273055911:
			func_734(iParam0);
			break;
		
		case -576874683:
			func_731(iParam0);
			break;
		
		case -1200143999:
			func_725(iParam0);
			break;
	}
}

void func_725(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		iVar4 = Var0.f_2;
		if (!unk_0x3D70CCF2C9B362CD(Local_82.f_73[iVar4]))
		{
			return;
		}
		if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_6, iVar4))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_82.f_271, iVar4))
			{
				if (func_100(iVar4))
				{
					if (!unk_0xA59F96B50B97E63C(unk_0x770D3B2B4702434A(Local_82.f_73[iVar4]), 0))
					{
						if (unk_0xBD2036D2FAD4E1E0(unk_0x460153A63B9477BC(), unk_0x770D3B2B4702434A(Local_82.f_73[iVar4]), &uVar3))
						{
							bVar6 = true;
						}
					}
					else if (unk_0x469631D583428EDB(unk_0x460153A63B9477BC(), unk_0x770D3B2B4702434A(Local_82.f_73[iVar4]), &uVar3))
					{
						bVar6 = true;
					}
				}
				else if (!func_748())
				{
					if (Local_82.f_465[0 /*4*/].f_1 > 0)
					{
						iVar7 = unk_0xF1110FE23C67293A(Local_82.f_465[0 /*4*/].f_2);
						if (iVar7 != func_5())
						{
							if (iVar7 == unk_0x460153A63B9477BC())
							{
								bVar6 = true;
							}
						}
					}
					else if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[0]))
					{
						if (func_109(Local_82.f_7[0]))
						{
							iVar9 = unk_0x10D3F7E169A49C44(unk_0x770D3B2B4702434A(Local_82.f_7[0]), -1, 0);
							if (iVar9 != 0)
							{
								if (unk_0xD0390A93AF3907B8(iVar9))
								{
									iVar8 = unk_0xE4400E48E081F17A(iVar9);
									if (iVar8 == unk_0x460153A63B9477BC())
									{
										bVar6 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar6)
		{
			if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 < 2)
			{
				iVar2 = func_730();
				iVar10 = unk_0x36FE6D3220816ADA(unk_0x770D3B2B4702434A(Local_82.f_73[iVar4]));
				iVar5 = iVar4 * 4;
				if (func_729(iVar10))
				{
					iVar1 = func_42(iVar10);
					iVar12 = iVar5;
					while (iVar12 <= (iVar5 + (iVar1 - 1)))
					{
						if (unk_0x3D70CCF2C9B362CD(Local_82.f_48[iVar12]) && !unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar12)], func_90(iVar12)))
						{
							iVar11++;
							unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar12)]), func_90(iVar12));
						}
						iVar12++;
					}
					Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8 = (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8 + iVar11);
					iVar2 = (iVar2 * iVar11);
				}
				else
				{
					Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8++;
				}
				if (Local_83.f_11 == 0)
				{
					Local_83.f_11 = unk_0x5A002C4821A13338();
				}
				if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8 <= func_728())
				{
					Local_83.f_7 = (Local_83.f_7 + iVar2);
					func_727(0, "", -875716015, 153786435, iVar2, 1, -1, 0);
					func_726();
				}
			}
			unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_6), iVar4);
		}
	}
}

void func_726()
{
	if (!func_22(&uLocal_559) || (func_22(&uLocal_559) && func_19(&uLocal_559, 2000, 0)))
	{
		unk_0xC4CC25B68A91D144(-1, "Kill_List_Counter", "GTAO_FM_Events_Soundset", 0);
		func_106(&uLocal_559);
		func_20(&uLocal_559, 0, 0);
	}
}

var func_727(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_470(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

int func_728()
{
	if (func_748())
	{
		return Global_262145.f_11322;
	}
	return Global_262145.f_11261;
}

bool func_729(int iParam0)
{
	return (((iParam0 == joaat("insurgent") || iParam0 == joaat("lazer")) || iParam0 == joaat("buzzard")) || iParam0 == joaat("mesa3"));
}

int func_730()
{
	if (func_748())
	{
		return Global_262145.f_11321;
	}
	return Global_262145.f_11260;
}

void func_731(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		iVar4 = Var0.f_2;
		if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_6, iVar4))
		{
			if (!unk_0xCE990E643CD9D0E5(Local_82.f_271, iVar4))
			{
				if (func_733(iVar4))
				{
					bVar6 = true;
				}
				else if (!func_732(iVar4))
				{
					if (func_100(iVar4))
					{
						if (!unk_0xA59F96B50B97E63C(unk_0x770D3B2B4702434A(Local_82.f_73[iVar4]), 0))
						{
							if (unk_0xBD2036D2FAD4E1E0(unk_0x460153A63B9477BC(), unk_0x770D3B2B4702434A(Local_82.f_73[iVar4]), &uVar3))
							{
								bVar6 = true;
							}
						}
						else if (unk_0x469631D583428EDB(unk_0x460153A63B9477BC(), unk_0x770D3B2B4702434A(Local_82.f_73[iVar4]), &uVar3))
						{
							bVar6 = true;
						}
					}
					else if (!func_748())
					{
						if (Local_82.f_465[0 /*4*/].f_1 > 0)
						{
							iVar7 = unk_0xF1110FE23C67293A(Local_82.f_465[0 /*4*/].f_2);
							if (iVar7 != func_5())
							{
								if (iVar7 == unk_0x460153A63B9477BC())
								{
									bVar6 = true;
								}
							}
						}
						else if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[0]))
						{
							if (func_109(Local_82.f_7[0]))
							{
								iVar9 = unk_0x10D3F7E169A49C44(unk_0x770D3B2B4702434A(Local_82.f_7[0]), -1, 0);
								if (iVar9 != 0)
								{
									if (unk_0xD0390A93AF3907B8(iVar9))
									{
										iVar8 = unk_0xE4400E48E081F17A(iVar9);
										if (iVar8 == unk_0x460153A63B9477BC())
										{
											bVar6 = true;
										}
									}
								}
							}
						}
					}
				}
				if (bVar6)
				{
					if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 < 2)
					{
						iVar1 = func_42(joaat("savage"));
						iVar5 = iVar4 * 4;
						iVar11 = 0;
						iVar10 = iVar5;
						while (iVar10 <= (iVar5 + (iVar1 - 1)))
						{
							if (unk_0x3D70CCF2C9B362CD(Local_82.f_48[iVar10]) && !unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar10)], func_90(iVar10)))
							{
								iVar11++;
								unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar10)]), func_90(iVar10));
							}
							iVar10++;
						}
						Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8 = (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8 + iVar11);
						iVar2 = (iVar2 * iVar11);
						if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8 <= func_728())
						{
							iVar2 = func_730();
							iVar2 = (iVar2 * iVar1);
							Local_83.f_7 = (Local_83.f_7 + iVar2);
							func_727(0, "", -875716015, 153786435, iVar2, 1, -1, 0);
							func_726();
							if (Local_83.f_11 == 0)
							{
								Local_83.f_11 = unk_0x5A002C4821A13338();
							}
						}
						unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_6), iVar4);
					}
				}
			}
		}
	}
}

int func_732(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
		{
			if (Local_85[iVar0 /*18*/].f_11[iParam0] > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_733(int iParam0)
{
	int iVar0;
	
	if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_11[iParam0] == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
		{
			if (iVar0 != unk_0x59E2AD1A8ACEDA31())
			{
				if (Local_85[iVar0 /*18*/].f_11[iParam0] > Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_11[iParam0])
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_734(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (unk_0xCCF088254BE59A9B("am_kill_list", -1, 0) != func_5())
		{
		}
		if (unk_0xAFF96FDC3971E7EA())
		{
			unk_0xBE20AB8238688965(&(Local_82.f_464), Var0.f_2);
		}
	}
}

void func_735(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		unk_0xBE20AB8238688965(&uLocal_546, Var0.f_2);
	}
}

void func_736(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		unk_0xBE20AB8238688965(&uLocal_547, Var0.f_2);
	}
}

void func_737(int iParam0)
{
	struct<3> Var0;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(Var0.f_2)], func_90(Var0.f_2)))
		{
			unk_0xD2459066EA58CE43(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(Var0.f_2)]), func_90(Var0.f_2));
		}
	}
}

void func_738(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		iVar1 = Var0.f_2;
		if (unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_6, iVar1))
		{
			unk_0xD2459066EA58CE43(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_6), iVar1);
		}
	}
}

void func_739(int iParam0)
{
	struct<6> Var0;
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
	var uVar12;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 13))
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_6, iVar1))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_82.f_271, iVar1))
				{
					if (unk_0xAE06B9E39EBDE049(Var0))
					{
						if (unk_0x20F7576FDB52E2B0(Var0))
						{
							if (unk_0x3D70CCF2C9B362CD(Local_82.f_73[iVar1]))
							{
								if (unk_0xAE06B9E39EBDE049(unk_0x770D3B2B4702434A(Local_82.f_73[iVar1])))
								{
									if (unk_0xEA90A5DC55A2F652(Var0) == unk_0x770D3B2B4702434A(Local_82.f_73[iVar1]))
									{
										if (unk_0xAE06B9E39EBDE049(Var0.f_1))
										{
											if (unk_0xA1914E72A0EB31D0(Var0.f_1))
											{
												if (unk_0x9048E8838E822F21(Var0.f_1) == unk_0x9B0761B4C3EB8BC7())
												{
													if (Var0.f_5)
													{
														iVar4 = unk_0x36FE6D3220816ADA(Var0);
														if (Local_82.f_27 == joaat("hydra"))
														{
															if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 < 2)
															{
																iVar7 = func_730();
																if (func_729(iVar4))
																{
																	iVar2 = func_42(iVar4);
																	Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8 = (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8 + iVar2);
																	iVar7 = (iVar7 * iVar2);
																}
																else
																{
																	Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8++;
																}
																if (Local_83.f_11 == 0)
																{
																	Local_83.f_11 = unk_0x5A002C4821A13338();
																}
																if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8 <= func_728())
																{
																	Local_83.f_7 = (Local_83.f_7 + iVar7);
																	func_727(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																	func_726();
																}
															}
															unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_6), iVar1);
														}
														else if (iVar4 == joaat("buzzard"))
														{
															iVar9 = -1;
															iVar9 = -1;
															while (iVar9 <= 3)
															{
																iVar6 = unk_0x10D3F7E169A49C44(unk_0x770D3B2B4702434A(Local_82.f_73[iVar1]), iVar9, 0);
																if (iVar6 != 0)
																{
																	iVar8 = func_740(iVar6);
																	if (iVar8 > -1)
																	{
																		if (!unk_0xCE990E643CD9D0E5(Local_82.f_272[func_91(iVar8)], func_90(iVar8)))
																		{
																			if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar8)], func_90(iVar8)))
																			{
																				unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar8)]), func_90(iVar8));
																				iVar7 = func_730();
																				Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8++;
																				if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8 <= func_728())
																				{
																					Local_83.f_7 = (Local_83.f_7 + iVar7);
																					func_727(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																					func_726();
																				}
																				if (unk_0xD2160441D64A7913(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar8])))
																				{
																					func_92(&(Local_94[iVar8 /*8*/]));
																				}
																			}
																		}
																	}
																}
																iVar9++;
															}
															unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_6), iVar1);
														}
													}
													else if (!func_109(Local_82.f_73[iVar1]))
													{
													}
												}
												else if (Var0.f_5)
												{
													if (unk_0xD0390A93AF3907B8(unk_0x9048E8838E822F21(Var0.f_1)))
													{
													}
												}
											}
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
		if (Local_82.f_27 != joaat("hydra"))
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (!unk_0xCE990E643CD9D0E5(Local_82.f_272[func_91(iVar1)], func_90(iVar1)))
				{
					if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar1)], func_90(iVar1)))
					{
						if (unk_0xAE06B9E39EBDE049(Var0))
						{
							if (unk_0xA1914E72A0EB31D0(Var0))
							{
								if (unk_0x3D70CCF2C9B362CD(Local_82.f_48[iVar1]))
								{
									if (unk_0xAE06B9E39EBDE049(unk_0x770D3B2B4702434A(Local_82.f_48[iVar1])))
									{
										if (unk_0x9048E8838E822F21(Var0) == unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar1]))
										{
											if (Var0.f_5)
											{
												if (unk_0xAE06B9E39EBDE049(Var0.f_1))
												{
													if (unk_0xA1914E72A0EB31D0(Var0.f_1))
													{
														iVar5 = unk_0x9048E8838E822F21(Var0.f_1);
														if (unk_0xD0390A93AF3907B8(iVar5))
														{
															if (iVar5 == unk_0x9B0761B4C3EB8BC7())
															{
																if (Var0.f_5)
																{
																	iVar7 = func_730();
																	if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 < 2)
																	{
																		Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8++;
																		if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8 <= func_728())
																		{
																			func_727(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																			Local_83.f_7 = (Local_83.f_7 + iVar7);
																			func_726();
																		}
																	}
																	if (Local_83.f_11 == 0)
																	{
																		Local_83.f_11 = unk_0x5A002C4821A13338();
																	}
																	unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar1)]), func_90(iVar1));
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (iVar1 < 5)
				{
					if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_6, iVar1))
					{
						if (!unk_0xCE990E643CD9D0E5(Local_82.f_271, iVar1))
						{
							if (unk_0xAE06B9E39EBDE049(Var0))
							{
								if (unk_0x20F7576FDB52E2B0(Var0))
								{
									if (unk_0x3D70CCF2C9B362CD(Local_82.f_73[iVar1]))
									{
										if (unk_0xAE06B9E39EBDE049(unk_0x770D3B2B4702434A(Local_82.f_73[iVar1])))
										{
											if (unk_0xEA90A5DC55A2F652(Var0) == unk_0x770D3B2B4702434A(Local_82.f_73[iVar1]))
											{
												if (unk_0x36FE6D3220816ADA(Var0) == joaat("savage"))
												{
													if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar1)], func_90(iVar1)))
													{
														if (Var0.f_5)
														{
															if (unk_0xAE06B9E39EBDE049(Var0.f_1))
															{
																if (unk_0xA1914E72A0EB31D0(Var0.f_1))
																{
																	iVar5 = unk_0x9048E8838E822F21(Var0.f_1);
																	if (unk_0xD0390A93AF3907B8(iVar5))
																	{
																		if (iVar5 == unk_0x9B0761B4C3EB8BC7())
																		{
																			if (Var0.f_5)
																			{
																				if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 < 2)
																				{
																					iVar2 = func_42(joaat("savage"));
																					Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8 = (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8 + iVar2);
																					iVar7 = func_730();
																					iVar7 = (iVar7 * iVar2);
																					if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8 <= func_728())
																					{
																						func_727(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																						Local_83.f_7 = (Local_83.f_7 + iVar7);
																						func_726();
																						if (Local_83.f_11 == 0)
																						{
																							Local_83.f_11 = unk_0x5A002C4821A13338();
																						}
																					}
																					iVar10 = iVar1 * 4;
																					unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar10)]), func_90(iVar10));
																					unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar10 + 1)]), func_90(iVar10 + 1));
																					unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar10 + 2)]), func_90(iVar10 + 2));
																					unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar10 + 3)]), func_90(iVar10 + 3));
																					unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_6), iVar1);
																				}
																			}
																		}
																	}
																	else if (func_733(iVar1))
																	{
																		if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 < 2)
																		{
																			iVar2 = func_42(joaat("savage"));
																			Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8 = (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8 + iVar2);
																			if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8 <= func_728())
																			{
																				iVar7 = func_730();
																				iVar7 = (iVar7 * iVar2);
																				Local_83.f_7 = (Local_83.f_7 + iVar7);
																				func_727(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																				func_726();
																				if (Local_83.f_11 == 0)
																				{
																					Local_83.f_11 = unk_0x5A002C4821A13338();
																				}
																			}
																			iVar10 = iVar1 * 4;
																			unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar10)]), func_90(iVar10));
																			unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar10 + 1)]), func_90(iVar10 + 1));
																			unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar10 + 2)]), func_90(iVar10 + 2));
																			unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar10 + 3)]), func_90(iVar10 + 3));
																			unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_6), iVar1);
																		}
																	}
																	else if (func_732(iVar1))
																	{
																	}
																	else if (unk_0x469631D583428EDB(iVar11, Var0, &uVar12))
																	{
																		if (iVar11 == unk_0x460153A63B9477BC())
																		{
																			if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 < 2)
																			{
																				iVar2 = func_42(joaat("savage"));
																				Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8 = (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8 + iVar2);
																				if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8 <= func_728())
																				{
																					iVar7 = func_730();
																					iVar7 = (iVar7 * iVar2);
																					Local_83.f_7 = (Local_83.f_7 + iVar7);
																					func_727(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																					func_726();
																					if (Local_83.f_11 == 0)
																					{
																						Local_83.f_11 = unk_0x5A002C4821A13338();
																					}
																				}
																				iVar10 = iVar1 * 4;
																				unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar10)]), func_90(iVar10));
																				unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar10 + 1)]), func_90(iVar10 + 1));
																				unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar10 + 2)]), func_90(iVar10 + 2));
																				unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar10 + 3)]), func_90(iVar10 + 3));
																				unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_6), iVar1);
																			}
																		}
																	}
																}
															}
														}
														else
														{
															if (unk_0xAE06B9E39EBDE049(Var0.f_1))
															{
																if (unk_0xA1914E72A0EB31D0(Var0.f_1))
																{
																	iVar5 = unk_0x9048E8838E822F21(Var0.f_1);
																	if (unk_0xD0390A93AF3907B8(iVar5))
																	{
																		if (iVar5 == unk_0x9B0761B4C3EB8BC7())
																		{
																			iVar3 = unk_0x5A002C4821A13338();
																			Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_11[iVar1] = iVar3;
																		}
																	}
																}
															}
															if (!unk_0x80FF6C016CDB0FAF(unk_0xEA90A5DC55A2F652(Var0), 0))
															{
															}
														}
													}
												}
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
			iVar1 = 20;
			while (iVar1 <= 23)
			{
				if (!unk_0xCE990E643CD9D0E5(Local_82.f_272[func_91(iVar1)], func_90(iVar1)))
				{
					if (!unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar1)], func_90(iVar1)))
					{
						if (unk_0xAE06B9E39EBDE049(Var0))
						{
							if (unk_0xA1914E72A0EB31D0(Var0))
							{
								if (unk_0x3D70CCF2C9B362CD(Local_82.f_48[iVar1]))
								{
									if (unk_0xAE06B9E39EBDE049(unk_0x770D3B2B4702434A(Local_82.f_48[iVar1])))
									{
										if (unk_0x9048E8838E822F21(Var0) == unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar1]))
										{
											if (Var0.f_5)
											{
												if (unk_0xAE06B9E39EBDE049(Var0.f_1))
												{
													if (unk_0xA1914E72A0EB31D0(Var0.f_1))
													{
														iVar5 = unk_0x9048E8838E822F21(Var0.f_1);
														if (unk_0xD0390A93AF3907B8(iVar5))
														{
															if (iVar5 == unk_0x9B0761B4C3EB8BC7())
															{
																if (Var0.f_5)
																{
																	if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_17 < 2)
																	{
																		Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8++;
																		if (Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8 <= func_728())
																		{
																			iVar7 = func_730();
																			Local_83.f_7 = (Local_83.f_7 + iVar7);
																			if (Local_83.f_11 == 0)
																			{
																				Local_83.f_11 = unk_0x5A002C4821A13338();
																			}
																			func_727(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																			func_726();
																		}
																	}
																	unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar1)]), func_90(iVar1));
																}
															}
														}
													}
												}
												else
												{
													unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_3[func_91(iVar1)]), func_90(iVar1));
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (unk_0x3D70CCF2C9B362CD(Local_82.f_48[iVar1]))
				{
				}
				iVar1++;
			}
		}
	}
}

int func_740(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (iVar0 == -1)
		{
			if (unk_0x3D70CCF2C9B362CD(Local_82.f_48[iVar1]))
			{
				if (unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar1]) == iParam0)
				{
					iVar0 = iVar1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_741()
{
	int iVar0;
	int iVar1;
	
	if (Local_82.f_27 != joaat("hydra"))
	{
		if (iLocal_572 == 0)
		{
			iLocal_572 = 20;
		}
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_48[iLocal_572]))
		{
			if (!func_31(Local_82.f_48[iLocal_572]))
			{
				iVar0 = unk_0x62394BB0E2F7D27A(unk_0x3C6C6327BA564AEE(Local_82.f_48[iLocal_572]));
				if (iLocal_573[iLocal_572] != iVar0)
				{
					iLocal_573[iLocal_572] = iVar0;
					unk_0x338B931E8668A259(Local_82.f_48[iLocal_572], 1);
				}
			}
		}
		iLocal_572++;
		if (iLocal_572 == 23)
		{
			iLocal_572 = 20;
		}
	}
	if (Local_82.f_27 != joaat("hydra") && Local_82.f_27 != joaat("rhino"))
	{
		if (!bLocal_576)
		{
			if (func_98() == 5)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (unk_0x3D70CCF2C9B362CD(Local_82.f_73[iVar1]))
					{
						if (func_109(Local_82.f_73[iVar1]))
						{
							if (unk_0x36FE6D3220816ADA(unk_0x770D3B2B4702434A(Local_82.f_73[iVar1])) == joaat("savage"))
							{
								unk_0x338B931E8668A259(Local_82.f_73[iVar1], 1);
								bLocal_576 = true;
							}
						}
					}
					iVar1++;
				}
			}
		}
	}
	if (unk_0x3D70CCF2C9B362CD(Local_82.f_73[iLocal_574]))
	{
		if (func_109(Local_82.f_73[iLocal_574]))
		{
			iVar0 = unk_0x62394BB0E2F7D27A(unk_0x3C6C6327BA564AEE(Local_82.f_73[iLocal_574]));
			if (iLocal_575[iLocal_574] != iVar0)
			{
				iLocal_575[iLocal_574] = iVar0;
				if (!bLocal_576)
				{
					unk_0x338B931E8668A259(Local_82.f_73[iLocal_574], 1);
				}
			}
		}
	}
	iLocal_574++;
	if (iLocal_574 == 5)
	{
		iLocal_574 = 0;
	}
}

void func_742()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar9 = -1;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (unk_0xCE990E643CD9D0E5(iLocal_548, iVar0))
		{
			if (Local_82.f_85[iVar0] != 2)
			{
				unk_0xD2459066EA58CE43(&iLocal_548, iVar0);
			}
		}
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_48[iVar0]))
		{
			func_746(iVar0);
			if (!func_31(Local_82.f_48[iVar0]))
			{
				switch (Local_82.f_85[iVar0])
				{
					case 1:
						if (unk_0xF05B7723022657B3(Local_82.f_48[iVar0]))
						{
							if (unk_0x47DBF174A0CB9D55(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), 0))
							{
								iVar2 = unk_0xA5D5B1042E8F47BD(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), 0);
								iVar1 = unk_0x36FE6D3220816ADA(iVar2);
								if (unk_0x442D6659150AF4B3(iVar1))
								{
									if (unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), -1273030092) != 1 && unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), -1273030092) != 0)
									{
										if (unk_0x10D3F7E169A49C44(iVar2, -1, 0) == unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]))
										{
											iVar5 = func_27();
											if (iVar5 != func_5())
											{
												iVar6 = unk_0x1FA7B77001D60F9D(iVar5);
												if (!unk_0x5AEB5DDFFAD43CA5(iVar6))
												{
													if (func_26(iVar2, iVar6, 1) > 250f)
													{
														Var3 = { unk_0x3E4D3CCC220BDFB1(iVar6, 1) };
														unk_0x978007212AAC392F(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), iVar2, 0, iVar6, Var3, 4, 50f, 5f, -1f, 0, 100, -1f, 4096);
													}
												}
											}
										}
									}
								}
								else if (unk_0xF9C3E2B9AA9E2294(iVar1))
								{
									if (unk_0x10D3F7E169A49C44(iVar2, -1, 0) == unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]))
									{
										iVar11 = 1;
										iVar10 = (iVar0 / 4);
									}
									if ((unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), -1273030092) != 1 && unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), -1273030092) != 0) || ((iVar11 && iVar10 < 5) && iLocal_88[iVar10] != Local_82.f_110[iVar10]))
									{
										if (unk_0x10D3F7E169A49C44(iVar2, -1, 0) == unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]))
										{
											iVar9 = Local_82.f_110[iVar10];
											if (iVar9 > -1)
											{
												iVar5 = unk_0xF1110FE23C67293A(iVar9);
												if (iVar5 != func_5())
												{
													iVar6 = unk_0x1FA7B77001D60F9D(iVar5);
													if (!unk_0x5AEB5DDFFAD43CA5(iVar6))
													{
														Var3 = { unk_0x3E4D3CCC220BDFB1(iVar6, 1) };
														unk_0x95B4DF5308CFD8F9(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), iVar2, 0, iVar6, Var3, 4, 50f, 5f, -1f, 100, 50, 1);
														if (iLocal_88[iVar10] != Local_82.f_110[iVar10])
														{
															iLocal_88[iVar10] = Local_82.f_110[iVar10];
														}
													}
												}
											}
										}
									}
								}
								else if (((unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), -1273030092) != 1 && unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), -1273030092) != 0) && unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), 1306903184) != 0) && unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), 1306903184) != 1)
								{
									if (unk_0x10D3F7E169A49C44(iVar2, -1, 0) == unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]))
									{
										iVar5 = func_27();
										if (iVar5 != func_5())
										{
											iVar6 = unk_0x1FA7B77001D60F9D(iVar5);
											if (!unk_0x5AEB5DDFFAD43CA5(iVar6))
											{
												fVar7 = func_26(iVar2, iVar6, 1);
												if (fVar7 > 500f)
												{
													unk_0x91B671591BF5340C(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), unk_0x3E4D3CCC220BDFB1(iVar6, 1), 2f, iVar2, 1, 786469, -1082130432, 0, 1101004800, 0, 30f, 1082130432);
												}
												else if (fVar7 > 250f)
												{
													unk_0xBD204892D76E6303(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), iVar2, iVar6, 4, 30f, 786469, 5f, 5f, 1);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (unk_0xF05B7723022657B3(Local_82.f_48[iVar0]))
						{
							if (!func_23())
							{
								if (unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), -1442466670) != 1 && unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), -1442466670) != 0)
								{
									if (unk_0x47DBF174A0CB9D55(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), 0))
									{
										if (!unk_0xCE990E643CD9D0E5(iLocal_548, iVar0))
										{
											iVar8 = func_745(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), 1133084672);
											if (iVar8 > -1)
											{
												unk_0xB94133249C84B1E3(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), 299f, 0);
											}
											else if (!unk_0xCE990E643CD9D0E5(iLocal_548, iVar0))
											{
												func_744(iVar0, func_104(1));
												unk_0xBE20AB8238688965(&iLocal_548, iVar0);
											}
										}
									}
									else
									{
										unk_0xB94133249C84B1E3(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), 299f, 0);
									}
								}
							}
						}
						break;
					
					case 3:
						if (unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), -251125078) != 1 && unk_0x16BC17A8EDC701A2(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), -251125078) != 0)
						{
							Var4 = { func_743() };
							unk_0x9B94F6169B0DAEFD(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]));
							unk_0x4E65320BC9AD521C(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), 1);
							unk_0xD66FADEF7D42D49B(unk_0x3C6C6327BA564AEE(Local_82.f_48[iVar0]), Var4, 10000f, 999999, 0, 0);
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

Vector3 func_743()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iVar0]))
		{
			return unk_0x3E4D3CCC220BDFB1(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 0);
		}
		iVar0++;
	}
	return Local_82.f_30[0 /*3*/];
}

void func_744(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = 273055911;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = iParam0;
	if (!iParam1 == 0)
	{
		unk_0xB802750B43D4047C(1, &Var0, 3, iParam1);
	}
}

int func_745(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	
	iVar0 = -1;
	fVar1 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iVar3]))
		{
			if (func_109(Local_82.f_7[iVar3]))
			{
				iVar5 = unk_0x10D3F7E169A49C44(unk_0x770D3B2B4702434A(Local_82.f_7[iVar3]), -1, 0);
				if (!unk_0x5AEB5DDFFAD43CA5(iVar5))
				{
					if (unk_0xD0390A93AF3907B8(iVar5))
					{
						Var4 = { unk_0x3E4D3CCC220BDFB1(unk_0x770D3B2B4702434A(Local_82.f_7[iVar3]), 1) };
						fVar2 = func_529(iParam0, Var4, 1);
						if (fVar2 < fVar1)
						{
							if (fVar2 < fParam1)
							{
								fVar1 = fVar2;
								iVar0 = iVar3;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

void func_746(int iParam0)
{
	int iVar0;
	
	return;
	if (!func_31(Local_82.f_48[iParam0]))
	{
		if (unk_0xF05B7723022657B3(Local_82.f_48[iParam0]))
		{
			if (unk_0x6E0C5E7AAF8B6214(unk_0x3C6C6327BA564AEE(Local_82.f_48[iParam0])))
			{
				iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x3C6C6327BA564AEE(Local_82.f_48[iParam0]), 0);
				if (unk_0xF9C3E2B9AA9E2294(unk_0x36FE6D3220816ADA(iVar0)) || unk_0x442D6659150AF4B3(unk_0x36FE6D3220816ADA(iVar0)))
				{
					if (!unk_0x80FF6C016CDB0FAF(iVar0, 0))
					{
						unk_0x697DA7132EE43ABC(unk_0x3C6C6327BA564AEE(Local_82.f_48[iParam0]), 5, 0);
					}
				}
			}
		}
	}
}

void func_747(struct<3> Param0)
{
	Global_1574656.f_6 = { Param0 };
}

bool func_748()
{
	return unk_0xCE990E643CD9D0E5(Local_82.f_3, 8);
}

void func_749(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_750("kwUfKUus6EuQyNSL8KpY-w");
					func_750("yMTOFLfO2UKwzKrmgPP7kg");
					func_750("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_750("tP5HSeCA0UiHnkRzakdO2Q");
					func_750("uEkrqoerQEmQ0uZRtp4rkw");
					func_750("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_750("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_750("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_750("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_750("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_750("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_750("uEkrqoerQEmQ0uZRtp4rkw");
					func_750("92t91kL3Wkqvl2Kc82cNSA");
					func_750("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_750("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_750("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_750("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_750("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_750("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_750("fOfm7nzMLkav0ldcSCNAzA");
					func_750("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_750("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_750("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_750("Ma78E44OMkGfYPmCPZXUNA");
					func_750("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_750("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_750("gxmtJHj2OUWQDt8nNMy3TQ");
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
							func_750("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_750("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_750("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_750("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_750("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_750("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_750("3AAj-muvN0iHI5IMyGlboA");
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
							func_750("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_750("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_750("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_750("fOfm7nzMLkav0ldcSCNAzA");
							func_750("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_750("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_750("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_750("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_750("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_750("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_750("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_750("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_750("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_750("fOfm7nzMLkav0ldcSCNAzA");
							func_750("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_750("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_750("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_750("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_750("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_750("xIXaDwts7kKz0sbMnwYlCQ");
							break;
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
								case 1:
									func_750("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_750("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_750("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_750("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_750("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_750("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_750("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_750("aGBjo2rKi0yMDLl3a2ATGA");
									func_750("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_750("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_750("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_750("f2lnL6wZPkGWUowu0yLm1Q");
									func_750("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_750("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_750("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_750("W-OJzHlM-0ym9PsIASYZtw");
									func_750("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_750("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_750("TjGz31AMYE6bGCjAIitu6w");
									func_750("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_750("QmlvLMLCwkOvoZlkAstYxw");
									func_750("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_750("BktATxH9R0Wp2x0kWSbqjw");
									func_750("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_750("f2lnL6wZPkGWUowu0yLm1Q");
									break;
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
								case 1:
									func_750("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_750("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_750("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_750("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_750("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_750("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_750("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
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
									func_750("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_750("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_750(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return;
	}
	iVar0 = unk_0x856D5567211886A2(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (unk_0xCE990E643CD9D0E5(Global_2359721[iVar1 /*26*/].f_12, 11))
		{
			if (func_751(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!unk_0xCE990E643CD9D0E5(Global_2359721[iVar1 /*26*/].f_13, 26))
				{
					unk_0xBE20AB8238688965(&(Global_2359721[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_751(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = 0;
	iVar2 = func_149(uParam0);
	if (iVar2 == -1)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_752(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_752(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = func_149(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_107189[iVar1 /*13*/];
		
		case 62:
			return Global_917806.f_9405[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

void func_753()
{
	int iVar0;
	struct<3> Var1;
	
	if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 12))
	{
		func_195();
	}
	if (func_748())
	{
		if (iLocal_542 != Local_82.f_12)
		{
			iLocal_542 = Local_82.f_12;
			func_195();
		}
	}
	if (!func_203())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!unk_0x8F678487EEBD8CE4(iLocal_93[iVar0]))
			{
				if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iVar0]))
				{
					if (func_109(Local_82.f_7[iVar0]))
					{
						Var1 = { unk_0x3E4D3CCC220BDFB1(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 0) };
						if (!func_754(iVar0, Var1))
						{
							if (!unk_0xCE990E643CD9D0E5(Local_82.f_13, iVar0))
							{
								iLocal_93[iVar0] = unk_0x2BE000892D65EA2A(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]));
								unk_0xE7B8403ABCA0391D(iLocal_93[iVar0], 429);
								func_197(&(iLocal_93[iVar0]), 29);
								if (!unk_0xCE990E643CD9D0E5(iLocal_86, 20))
								{
									unk_0x009A89A6CD1E6C3E(iLocal_93[iVar0], 1);
									unk_0x9178C42B36234BF1(iLocal_93[iVar0], 7000);
									unk_0xBE20AB8238688965(&iLocal_86, 20);
								}
								unk_0xE346A71235BB8065(iLocal_93[iVar0], 9);
								if (func_748())
								{
									unk_0xB023F5C66F5716C7(iLocal_93[iVar0], "UW_BLIPC");
								}
								else
								{
									unk_0xB023F5C66F5716C7(iLocal_93[iVar0], "UW_BLIP");
								}
								if (!unk_0xCE990E643CD9D0E5(iLocal_87, 3))
								{
									unk_0x1D42FFF20D06E356();
									unk_0xBE20AB8238688965(&iLocal_87, 3);
								}
							}
						}
					}
				}
			}
			else if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iVar0]))
			{
				if (!func_109(Local_82.f_7[iVar0]))
				{
					unk_0x93370FA10F15BE44(&(iLocal_93[iVar0]));
				}
				else if (unk_0xCE990E643CD9D0E5(Local_82.f_13, iVar0))
				{
					unk_0x93370FA10F15BE44(&(iLocal_93[iVar0]));
				}
			}
			else
			{
				unk_0x93370FA10F15BE44(&(iLocal_93[iVar0]));
			}
			iVar0++;
		}
	}
	else
	{
		func_195();
	}
}

int func_754(int iParam0, struct<3> Param1)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iParam0)
		{
			if (unk_0x3D70CCF2C9B362CD(Local_82.f_7[iVar0]))
			{
				Var1 = { unk_0x3E4D3CCC220BDFB1(unk_0x770D3B2B4702434A(Local_82.f_7[iVar0]), 0) };
				if (func_69(Param1, Var1, 0))
				{
					if (unk_0x8F678487EEBD8CE4(iLocal_93[iVar0]))
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

int func_755()
{
	return Local_82;
}

int func_756(int iParam0)
{
	return Local_85[iParam0 /*18*/];
}

void func_757()
{
	if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 6))
	{
		func_454();
		unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 6);
	}
	if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 7))
	{
		if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 4) || unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 16))
		{
			if (((!unk_0xEBB78303C505A9D7() && !unk_0xDABD547F0DF2906C()) && !func_360()) && func_850(unk_0x460153A63B9477BC(), 1, 1))
			{
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 7);
				func_427("FME_PASINT", 30000);
				func_426(1);
			}
		}
		else if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 17))
		{
			if (func_245() && !func_240())
			{
				unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 17);
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 16);
			}
		}
	}
	if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 23))
	{
		if (((((!unk_0xEBB78303C505A9D7() && !unk_0xCE990E643CD9D0E5(Global_2540384.f_833, 2)) && func_850(unk_0x460153A63B9477BC(), 1, 1)) && !Global_74030) && !Global_58898) && !unk_0xDABD547F0DF2906C())
		{
			if (func_779())
			{
				func_427("AMEV_GA_RP", -1);
				if (func_341(unk_0x460153A63B9477BC()) != 200)
				{
					func_426(1);
				}
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 23);
			}
		}
	}
	if (unk_0xF0C12886E5C1B20E() && unk_0xCFB49FF4012D7C68() == 15)
	{
		if (func_235(unk_0x460153A63B9477BC()))
		{
			if (!unk_0x9257D9337B908AFC(1344549371))
			{
				unk_0x16611E08D2E0FBE9(1344549371);
			}
		}
		else if (unk_0x9257D9337B908AFC(1344549371))
		{
			unk_0x9182C03E20E1D981(1344549371);
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 9))
	{
		if (((((!unk_0xEBB78303C505A9D7() && !unk_0xDABD547F0DF2906C()) && !func_360()) && func_850(unk_0x460153A63B9477BC(), 1, 1)) && !func_206(unk_0x460153A63B9477BC(), 21)) && !func_206(unk_0x460153A63B9477BC(), 25))
		{
			unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 9);
			func_778(0);
			func_427("FME_TBL00", -1);
			func_426(1);
		}
	}
	if (func_246(unk_0x460153A63B9477BC()))
	{
		if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 18))
		{
			if ((func_206(unk_0x460153A63B9477BC(), 21) && unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 20)) && !unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 19))
			{
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 18);
			}
		}
		else if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 18))
		{
			if (((((!unk_0xEBB78303C505A9D7() && !unk_0xDABD547F0DF2906C()) && !func_360()) && func_850(unk_0x460153A63B9477BC(), 1, 1)) && unk_0x87F0CB19476706C3()) && !Global_2540384.f_5121)
			{
				unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 18);
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 19);
				func_427("AMTT_RPAS", -1);
				func_426(1);
			}
		}
	}
	if (((((func_246(unk_0x460153A63B9477BC()) && !func_205(unk_0x460153A63B9477BC())) && func_190(unk_0x460153A63B9477BC()) != 146) && !func_204(unk_0x460153A63B9477BC())) && !func_671(unk_0x460153A63B9477BC())) && !func_768())
	{
		if (func_676(func_190(unk_0x460153A63B9477BC())))
		{
			unk_0xA2FFEA2766563CF9(unk_0x460153A63B9477BC());
		}
		if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 22))
		{
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 22);
		}
		if (func_212(unk_0x460153A63B9477BC()) || func_674())
		{
			if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 10))
			{
				if (func_766(func_190(unk_0x460153A63B9477BC())))
				{
					if (func_601(0) && !Global_2391045)
					{
						unk_0xBE20AB8238688965(&(Global_1574656.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_452(1);
						unk_0xBE20AB8238688965(&(Global_1574656.f_1), 14);
					}
				}
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 10);
			}
		}
		if (func_235(unk_0x460153A63B9477BC()))
		{
			if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 11))
			{
				if (!Global_99007.f_8)
				{
					unk_0xBE20AB8238688965(&(Global_1574656.f_1), 12);
					func_450(1);
				}
				if (!func_765())
				{
					unk_0xBE20AB8238688965(&(Global_1574656.f_1), 13);
					func_675();
				}
				if (!Global_2391045)
				{
					unk_0xBE20AB8238688965(&(Global_1574656.f_1), 14);
					if (func_601(0) && !Global_2391045)
					{
						unk_0xBE20AB8238688965(&(Global_1574656.f_1), 9);
					}
					func_452(1);
				}
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 11);
			}
		}
		else
		{
			func_763(0);
		}
	}
	else
	{
		func_763(1);
	}
	func_758();
	if (func_673(func_190(unk_0x460153A63B9477BC())) && !unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 21))
	{
		unk_0xBE20AB8238688965(&(Global_1574656.f_1), 21);
	}
	if (((func_245() && !func_240()) || func_206(unk_0x460153A63B9477BC(), 21)) || func_206(unk_0x460153A63B9477BC(), 25))
	{
		if (!unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 10))
		{
			unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 10);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 10))
	{
		unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 10);
	}
}

void func_758()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_360())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_526(iVar2))
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
				if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 26))
				{
					unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 26);
				}
				func_759(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 26))
	{
		func_106(&(Global_1574656.f_22));
		unk_0xBE20AB8238688965(&(Global_1574656.f_1), 26);
	}
}

void func_759(int iParam0, int iParam1)
{
	if (!func_22(&(Global_1574656.f_22)))
	{
		func_20(&(Global_1574656.f_22), 0, 0);
	}
	else if (func_19(&(Global_1574656.f_22), iParam1, 0))
	{
		if (func_412() > 0)
		{
			func_762(iParam0);
			if (func_683("AMEV_LBD_HELP"))
			{
				unk_0xD289B55B6AADBA10(1);
			}
			func_106(&(Global_1574656.f_22));
		}
	}
	else
	{
		func_761(0);
		func_760();
	}
}

void func_760()
{
	Global_2540384.f_4595 = 0;
}

void func_761(int iParam0)
{
	Global_1377236.f_68 = iParam0;
}

void func_762(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2440049.f_2834[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
			func_358(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_763(int iParam0)
{
	if ((unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 11) || (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 10) && iParam0)) || (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 22) && iParam0))
	{
		if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 12))
		{
			unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 12);
			func_450(0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 13))
		{
			unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 13);
			func_764();
		}
		if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 14) && !func_241(unk_0x460153A63B9477BC(), 0))
		{
			unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 14);
			func_452(0);
		}
		unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 11);
		unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 10);
		unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 22);
	}
}

void func_764()
{
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5026), 0);
}

bool func_765()
{
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5026, 0);
}

int func_766(int iParam0)
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
			return func_235(unk_0x460153A63B9477BC());
		
		case 133:
			return (func_674() || func_767(func_189()));
		
		default:
	}
	return 0;
}

int func_767(int iParam0)
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

int func_768()
{
	if (((((((((func_777() || func_776()) || func_775()) || func_182()) || (func_774() && !unk_0xFC559366953F62B3())) || (func_771() && !func_770())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_769() == 2 && !unk_0xFC559366953F62B3()))
	{
		return 1;
	}
	return 0;
}

int func_769()
{
	return Global_968397;
}

bool func_770()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787.f_2, 27);
}

int func_771()
{
	if (func_773() || func_772())
	{
		return Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_98 == 8;
	}
	return 0;
}

var func_772()
{
	return Global_2451787.f_733;
}

bool func_773()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787.f_2, 11);
}

bool func_774()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787, 5);
}

bool func_775()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787, 2);
}

bool func_776()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787, 20);
}

bool func_777()
{
	return Global_2451787.f_696;
}

void func_778(int iParam0)
{
	int iVar0;
	
	iVar0 = func_263(2535, -1, 0);
	if (iParam0 == 0)
	{
		if (!unk_0xCE990E643CD9D0E5(iVar0, 0))
		{
			unk_0xBE20AB8238688965(&iVar0, 0);
		}
		else if (!unk_0xCE990E643CD9D0E5(iVar0, 1))
		{
			unk_0xBE20AB8238688965(&iVar0, 1);
		}
		else if (!unk_0xCE990E643CD9D0E5(iVar0, 2))
		{
			unk_0xBE20AB8238688965(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!unk_0xCE990E643CD9D0E5(iVar0, 3))
		{
			unk_0xBE20AB8238688965(&iVar0, 3);
		}
		else if (!unk_0xCE990E643CD9D0E5(iVar0, 4))
		{
			unk_0xBE20AB8238688965(&iVar0, 4);
		}
		else if (!unk_0xCE990E643CD9D0E5(iVar0, 5))
		{
			unk_0xBE20AB8238688965(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!unk_0xCE990E643CD9D0E5(iVar0, 6))
		{
			unk_0xBE20AB8238688965(&iVar0, 6);
		}
		else if (!unk_0xCE990E643CD9D0E5(iVar0, 7))
		{
			unk_0xBE20AB8238688965(&iVar0, 7);
		}
		else if (!unk_0xCE990E643CD9D0E5(iVar0, 8))
		{
			unk_0xBE20AB8238688965(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!unk_0xCE990E643CD9D0E5(iVar0, 9))
		{
			unk_0xBE20AB8238688965(&iVar0, 9);
		}
		else if (!unk_0xCE990E643CD9D0E5(iVar0, 10))
		{
			unk_0xBE20AB8238688965(&iVar0, 10);
		}
		else if (!unk_0xCE990E643CD9D0E5(iVar0, 11))
		{
			unk_0xBE20AB8238688965(&iVar0, 11);
		}
	}
	func_485(2535, iVar0, -1, 1, 0);
}

int func_779()
{
	int iVar0;
	
	if (!func_22(&(Global_1574656.f_15)))
	{
		func_20(&(Global_1574656.f_15), 0, 0);
		Global_1574656.f_17 = 0;
	}
	else if (func_19(&(Global_1574656.f_15), 1000, 0))
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(Global_1574656.f_17)))
		{
			iVar0 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(Global_1574656.f_17));
			if (unk_0x166E920FB00B2DBB(iVar0))
			{
				if (func_850(iVar0, 1, 1) && func_780(iVar0, 6))
				{
					if (vdist(func_59(unk_0x460153A63B9477BC()), func_59(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574656.f_17++;
		if (Global_1574656.f_17 >= 32)
		{
			Global_1574656.f_17 = 0;
			func_106(&(Global_1574656.f_15));
		}
	}
	return 0;
}

int func_780(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_446() != 0)
	{
		return 0;
	}
	if (!func_489(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1590682[iVar0 /*883*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_781()
{
	return Global_1574656.f_24;
}

bool func_782(int iParam0)
{
	return !func_783(iParam0);
}

int func_783(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6661)
			{
				return 0;
			}
			if (func_206(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6662)
			{
				return 0;
			}
			if (func_206(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6663)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6664)
			{
				return 0;
			}
			if (func_206(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_784(4))
			{
				return 0;
			}
			if (func_206(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_784(4))
			{
				return 0;
			}
			if (func_206(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_784(4))
			{
				return 0;
			}
			if (func_206(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_784(4))
			{
				return 0;
			}
			if (func_206(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			if (unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 0) || unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_784(4))
			{
				return 0;
			}
			if (func_206(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_784(4))
			{
				return 0;
			}
			if (func_206(unk_0x460153A63B9477BC(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_784(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_850(unk_0xF1110FE23C67293A(iVar0), 0, 1))
		{
			if (unk_0xCE990E643CD9D0E5(Global_2425869[iVar0 /*443*/].f_212, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_785()
{
	var uVar0;
	
	func_789(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 1;
		}
	}
	if (func_788())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_787())
	{
		return 1;
	}
	if (func_786(159))
	{
		if (!func_777())
		{
			return 1;
		}
	}
	if (func_786(157))
	{
		return 1;
	}
	if (!unk_0x0EB6C63A09FD9DF1())
	{
		return 1;
	}
	if (func_444() != 0)
	{
		if (unk_0x7B70881748D166CD(func_444()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_786(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_787()
{
	return Global_2462250;
}

bool func_788()
{
	return Global_2451787.f_691;
}

void func_789(var uParam0)
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
					func_790(iVar0);
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

void func_790(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_850(Var0.f_1, 1, 1))
		{
			iVar1 = unk_0x1FA7B77001D60F9D(Var0.f_1);
			if (unk_0xAE06B9E39EBDE049(iVar1))
			{
				if (unk_0x47DBF174A0CB9D55(iVar1, 0))
				{
					iVar2 = unk_0xA5D5B1042E8F47BD(iVar1, 0);
					if (unk_0x292280AF1BBBD6AC(iVar2, Var0.f_2) && unk_0x82CC259B7B4F4AD9())
					{
						if (func_791(iVar2, &bVar3))
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

int func_791(int iParam0, var uParam1)
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

void func_792()
{
	wait(0);
}

void func_793()
{
	int iVar0;
	
	func_195();
	if (func_755() == 4 && Local_82.f_27 != 0)
	{
		unk_0x410A1E7AD7D5C774(Local_82.f_27, 0);
	}
	unk_0xD2459066EA58CE43(&(Global_2540384.f_4656), 1);
	func_681(19, 0);
	func_660(0);
	if (unk_0x59E2AD1A8ACEDA31() != -1)
	{
		func_799(129, 0, unk_0xCE990E643CD9D0E5(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2, 8));
	}
	func_798(129);
	unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 184, false);
	unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 151, true);
	unk_0x34FEEAC2548C3789(1f);
	if (iLocal_91 > 0)
	{
		unk_0x53797676AD34A9AA(iLocal_91);
	}
	if (unk_0x460153A63B9477BC() != -1)
	{
		if (Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 129)
		{
			Global_1590682[unk_0x460153A63B9477BC() /*883*/] = -1;
		}
	}
	if (unk_0x86FB3A0D4870FE62(unk_0x9B0761B4C3EB8BC7()) == iLocal_95)
	{
		unk_0xD3D9D7C84656DAE5(unk_0x9B0761B4C3EB8BC7(), iLocal_97);
	}
	func_797();
	func_208(0, 129);
	if (unk_0xCE990E643CD9D0E5(iLocal_86, 22))
	{
		func_457();
		unk_0xD2459066EA58CE43(&iLocal_86, 22);
	}
	if (unk_0xCE990E643CD9D0E5(iLocal_86, 9))
	{
		unk_0x0C0DE28672975DC3("DisableFlightMusic", 0);
		if (!unk_0xCE990E643CD9D0E5(iLocal_86, 10))
		{
			unk_0x21723EF7B2FCC4CC("KILL_LIST_STOP_MUSIC");
		}
	}
	if (fLocal_92 != -100f)
	{
		func_532(0, 0);
		unk_0x023CF98830DD8435(fLocal_92);
	}
	func_531(0);
	if (func_785())
	{
		Local_83.f_5 = 5;
	}
	else if (func_620(2, 0, 0, 0, 0))
	{
		Local_83.f_5 = 6;
	}
	else if (Local_83.f_5 != 1)
	{
		Local_83.f_5 = 2;
	}
	unk_0xC5E5600D1CF5CEF9(iLocal_545);
	Local_83 = Local_82.f_611;
	Local_83.f_1 = Local_82.f_612;
	Local_83.f_4 = Local_82.f_613;
	Local_83.f_3 = Local_82.f_615;
	if (Local_83.f_9 > 0)
	{
		Local_83.f_10 = (unk_0x5A002C4821A13338() - Local_83.f_9);
	}
	if ((!Global_262145.f_11510 && !unk_0xCE990E643CD9D0E5(Local_82.f_3, 8)) || (!Global_262145.f_11511 && unk_0xCE990E643CD9D0E5(Local_82.f_3, 8)))
	{
		if (Local_83.f_6 > 0)
		{
		}
	}
	if (unk_0xCE990E643CD9D0E5(Local_82.f_3, 8))
	{
		iVar0 = 1;
	}
	if (unk_0xCE990E643CD9D0E5(iLocal_87, 1))
	{
		func_688(1);
		unk_0x6543AC06C231023E(0, 0);
	}
	if (iVar0 == 0)
	{
		func_795(Local_83, Local_82.f_27, Local_82.f_279, iVar0, -1, -1, -1);
	}
	else if (unk_0x59E2AD1A8ACEDA31() != -1)
	{
		func_795(Local_83, Local_82.f_279, Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_8, iVar0, -1, -1, -1);
	}
	if (func_417(unk_0x460153A63B9477BC()))
	{
		func_637(0);
	}
	func_659(0);
	func_711(1);
	func_794();
}

void func_794()
{
	unk_0xD39E529EBE5DB04F();
}

void func_795(struct<12> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	
	sVar0 = unk_0x6C5C6B207AA78253();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_76833)
	{
		if (unk_0xF005CCA4263DF67F(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam1;
			unk_0x7A1FE8774C6CCDB2(&Var1);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, func_796()))
		{
			Var2 = { Param0 };
			Var2.f_12 = uParam1;
			Var2.f_13 = iParam2;
			unk_0x707C34C133F50E05(&Var2);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "am_cp_collection"))
		{
			Var3 = { Param0 };
			Var3.f_12 = uParam1;
			Var3.f_13 = iParam2;
			Var3.f_14 = iParam3;
			Var3.f_15 = iParam4;
			Var3.f_16 = iParam5;
			Var3.f_17 = iParam6;
			unk_0x61C2147DC67E7638(&Var3);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "am_challenges"))
		{
			Var4 = { Param0 };
			Var4.f_12 = uParam1;
			Var4.f_13 = to_float(iParam2);
			if (iParam3 == 1)
			{
				Var4.f_13 = (Var4.f_13 / 10f);
			}
			unk_0xC022C2B135B742F0(&Var4);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "am_penned_in"))
		{
			unk_0x7073A8DA2E39CB33(&Param0);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "am_pass_the_parcel"))
		{
			Var5 = { Param0 };
			Var5.f_12 = uParam1;
			unk_0xFA977DAD2F5E152B(&Var5);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "am_hot_property"))
		{
			Var6 = { Param0 };
			Var6.f_12 = uParam1;
			Var6.f_13 = iParam2;
			unk_0x576C97A880B1C7BB(&Var6);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "am_dead_drop"))
		{
			Var7 = { Param0 };
			Var7.f_12 = uParam1;
			Var7.f_13 = iParam2;
			unk_0xB13914A146D1D7EC(&Var7);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "am_king_of_the_castle"))
		{
			Var8 = { Param0 };
			Var8.f_12 = uParam1;
			Var8.f_13 = iParam2;
			Var8.f_14 = iParam3;
			Var8.f_15 = iParam4;
			unk_0x2596209CA815D28C(&Var8);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var9 = { Param0 };
			Var9.f_12 = uParam1;
			unk_0x8205D6ABC67C4813(&Var9);
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "AM_KILL_LIST"))
		{
			if (iParam3 == 0)
			{
				Var10 = { Param0 };
				Var10.f_12 = uParam1;
				Var10.f_13 = iParam2;
				unk_0x7D2F115EE19C1884(&Var10);
			}
			else
			{
				Var11 = { Param0 };
				Var11.f_12 = uParam1;
				Var11.f_13 = iParam2;
				unk_0xE20893E626B564CC(&Var11);
			}
		}
		else if (unk_0xF005CCA4263DF67F(sVar0, "am_hunt_the_beast"))
		{
			Var12 = { Param0 };
			Var12.f_12 = uParam1;
			unk_0xD1843280A6D1A0F0(&Var12);
		}
	}
}

char* func_796()
{
	switch (Global_2464595)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_797()
{
	unk_0xF4F95D084B662764(iLocal_96);
	unk_0xF4F95D084B662764(iLocal_95);
}

void func_798(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_799(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (unk_0x460153A63B9477BC() != -1)
	{
		if (unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 13))
		{
			unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 13);
		}
		if (unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 14))
		{
			unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 14);
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 21))
	{
		unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 21);
	}
	func_835();
	unk_0x0C0DE28672975DC3("DisableFlightMusic", 0);
	unk_0x0C0DE28672975DC3("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_834(func_190(unk_0x460153A63B9477BC()));
		func_681(func_682(iParam0), 0);
	}
	else
	{
		if ((bParam2 && unk_0x460153A63B9477BC() != -1) && func_833(unk_0x460153A63B9477BC()) >= 12)
		{
			func_832(2547, -1);
			iVar1 = func_263(2547, -1, 0);
			if (iVar1 == 2)
			{
				unk_0xBE20AB8238688965(&Global_1574682, 0);
			}
			else if (iVar1 == 4)
			{
				unk_0xBE20AB8238688965(&Global_1574682, 1);
			}
			else if (iVar1 == 6)
			{
				unk_0xBE20AB8238688965(&Global_1574682, 2);
			}
			else if (iVar1 == 8)
			{
				unk_0xBE20AB8238688965(&Global_1574682, 3);
			}
			else if (iVar1 == 10)
			{
				unk_0xBE20AB8238688965(&Global_1574682, 4);
			}
			else if (iVar1 == 12)
			{
				unk_0xBE20AB8238688965(&Global_1574682, 5);
			}
		}
		func_687();
		func_831();
		func_830();
		if ((!func_234(unk_0x460153A63B9477BC()) && !func_232(unk_0x460153A63B9477BC())) && !func_829())
		{
			func_808();
		}
		func_807();
		if (!unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 0) && !unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 1))
		{
			func_454();
		}
		func_806();
		unk_0xD2459066EA58CE43(&(Global_2540384.f_1807), 2);
		func_547();
		func_805();
	}
	if (unk_0x9257D9337B908AFC(1344549371))
	{
		unk_0x9182C03E20E1D981(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((unk_0x460153A63B9477BC() != -1 && !func_206(unk_0x460153A63B9477BC(), 21)) && !func_206(unk_0x460153A63B9477BC(), 25)) && !func_241(unk_0x460153A63B9477BC(), 0))
		{
			func_452(0);
			func_450(0);
			if (!bParam1)
			{
				func_804();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_624(26, -1))
		{
			Global_2464425 = -1;
			func_622(26, -1);
		}
	}
	if (!func_800())
	{
		Global_2515064 = 1;
	}
}

int func_800()
{
	if ((((((!func_390(unk_0x460153A63B9477BC()) && !func_371(unk_0x460153A63B9477BC())) && func_190(unk_0x460153A63B9477BC()) != 146) && !func_803()) && !func_802()) && !func_801(Global_4456448.f_129348)) && !func_584())
	{
		return 0;
	}
	return 1;
}

bool func_801(int iParam0)
{
	return iParam0 == 57;
}

int func_802()
{
	if (Global_4456448.f_82708 == Global_262145.f_9598)
	{
		return 1;
	}
	return 0;
}

int func_803()
{
	if ((Global_4456448 == 0 && unk_0xFC559366953F62B3()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_129348 > 0) || unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 15)) || unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 18)) || unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 19)) || unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 29)) || unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 28)) || unk_0xCE990E643CD9D0E5(Global_4456448.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_804()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (unk_0xCE990E643CD9D0E5(Global_2359721[iVar0 /*26*/].f_12, 11))
		{
			if (unk_0xCE990E643CD9D0E5(Global_2359721[iVar0 /*26*/].f_13, 26))
			{
				unk_0xD2459066EA58CE43(&(Global_2359721[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_805()
{
	Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_7 = 0;
}

void func_806()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574656 = { Var0 };
}

void func_807()
{
	var uVar0;
	
	Global_1319161 = uVar0;
}

void func_808()
{
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_24), &Global_2409333, 2);
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_26), &Global_2409335, 19);
	func_827();
	func_811(1, 1, 0);
	func_809();
}

void func_809()
{
	func_810(0, 0);
}

void func_810(int iParam0, int iParam1)
{
	Global_2405074.f_22 = iParam0;
	Global_2405074.f_23 = iParam1;
}

void func_811(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		unk_0x13AF25746D6C3CA9(&(Global_2405074.f_45), &Global_2409354, 320);
	}
	else
	{
		Global_2405074.f_45 = { Global_2409354 };
		Global_2405074.f_45.f_49 = { Global_2409354.f_49 };
		Global_2405074.f_45.f_52 = Global_2409354.f_52;
		Global_2405074.f_45.f_53 = Global_2409354.f_53;
	}
	if (bParam0)
	{
		func_826();
	}
	if (!bParam2)
	{
		func_814(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_813(0);
	func_812();
}

void func_812()
{
	struct<6> Var0;
	
	if (Global_2405074.f_487.f_1 == unk_0x354AD085195C5FA6())
	{
		Global_2405074.f_487 = { Var0 };
	}
}

void func_813(bool bParam0)
{
	if (bParam0)
	{
		Global_2405074.f_707 = 0;
	}
	else
	{
		Global_2405074.f_707 = 1;
	}
}

void func_814(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_825())
		{
			func_824();
		}
		Global_2405074.f_708.f_518 = unk_0x354AD085195C5FA6();
		Global_2405074.f_708.f_504 = iParam1;
		Global_2405074.f_708.f_505 = iParam2;
		Global_2405074.f_708.f_506 = iParam10;
		func_822();
		func_818(8, 0, 0, 0, 0);
		Global_2405074.f_708.f_507 = iParam11;
		Global_2405074.f_708.f_512 = iParam3;
		Global_2405074.f_708.f_513 = iParam4;
		Global_2405074.f_708.f_510 = iParam5;
		Global_2405074.f_708.f_511 = iParam6;
		Global_2405074.f_708.f_514 = iParam7;
		Global_2405074.f_708.f_515 = iParam8;
		Global_2405074.f_708.f_516 = iParam9;
		Global_2405074.f_708.f_517 = iParam14;
		Global_2405074.f_708.f_508 = iParam12;
		Global_2405074.f_708.f_509 = iParam13;
		Global_2405074.f_1747 = 1;
	}
	else
	{
		func_815();
	}
}

void func_815()
{
	if (func_825() && !func_817())
	{
		func_824();
	}
	if (func_817())
	{
		func_816();
	}
	else
	{
		func_822();
		func_818(0, 0, 0, 0, 0);
		Global_2405074.f_1747 = 0;
		Global_2405074.f_1746 = 0;
	}
}

void func_816()
{
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_708), &(Global_2405074.f_1227), 519);
	Global_2405074.f_487 = { Global_2405074.f_493 };
	if (unk_0x354AD085195C5FA6() == Global_2405074.f_708.f_518)
	{
		Global_2405074.f_1746 = 0;
	}
}

int func_817()
{
	if ((Global_2405074.f_1746 && !unk_0x354AD085195C5FA6() == Global_2405074.f_1227.f_518) && unk_0x7FD2BDF03806FD9D(Global_2405074.f_1227.f_518))
	{
		return 1;
	}
	return 0;
}

void func_818(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2440049.f_2005.f_703.f_16 != func_5())
	{
		if (unk_0xCE990E643CD9D0E5(Global_2425869[Global_2440049.f_2005.f_703.f_16 /*443*/].f_411, 0) && func_819())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412648 = 0;
	}
	Global_2405074.f_487 = iParam0;
	Global_2405074.f_487.f_1 = unk_0x354AD085195C5FA6();
	Global_2405074.f_487.f_2 = iParam1;
	Global_2405074.f_487.f_3 = iParam2;
	Global_2405074.f_487.f_4 = iParam3;
	Global_2405074.f_487.f_5 = iParam4;
}

int func_819()
{
	if ((((((func_341(unk_0x460153A63B9477BC()) == 229 || func_341(unk_0x460153A63B9477BC()) == 191) || func_821()) || func_829()) || func_213(unk_0x460153A63B9477BC())) || Global_2515847.f_227 == 1) || (Global_2405074.f_1747 && func_820(unk_0x460153A63B9477BC())))
	{
		return 0;
	}
	return 1;
}

int func_820(int iParam0)
{
	if (func_212(iParam0))
	{
		return 1;
	}
	if (func_247(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_821()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_822()
{
	if (func_825() && !func_817())
	{
		func_824();
	}
	func_823();
	Global_2405074.f_708 = 0;
}

void func_823()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405074.f_708.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_824()
{
	if (func_817())
	{
		if (Global_2405074.f_708.f_518 == Global_2405074.f_1227.f_518)
		{
			return;
		}
	}
	if (!unk_0x354AD085195C5FA6() == Global_2405074.f_708.f_518)
	{
		unk_0x13AF25746D6C3CA9(&(Global_2405074.f_1227), &(Global_2405074.f_708), 519);
		Global_2405074.f_493 = { Global_2405074.f_487 };
		Global_2405074.f_1746 = 1;
	}
}

int func_825()
{
	if ((Global_2405074.f_1747 && !unk_0x354AD085195C5FA6() == Global_2405074.f_708.f_518) && unk_0x7FD2BDF03806FD9D(Global_2405074.f_708.f_518))
	{
		return 1;
	}
	return 0;
}

void func_826()
{
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_365), &Global_2409674, 121);
}

void func_827()
{
	func_828();
}

void func_828()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405074.f_2257[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2405074.f_2256 = 0;
}

bool func_829()
{
	return Global_1574411;
}

void func_830()
{
	Global_2540384.f_5026 = 0;
}

void func_831()
{
	if (unk_0x460153A63B9477BC() != -1)
	{
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1 = 0;
	}
}

void func_832(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_263(iParam0, func_244(iParam1), 0);
	iVar0++;
	if (!func_492(iParam0))
	{
		func_485(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_486(iParam0, iVar0, iParam1, 1);
	}
}

int func_833(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_211.f_6;
}

int func_834(int iParam0)
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
			if (func_235(unk_0x460153A63B9477BC()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_835()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_1795, 3) || unk_0xCE990E643CD9D0E5(Global_2540384.f_1795, 4))
	{
		if (unk_0x03DB5C6AABF8DA46() || unk_0x5DA78AD6801A0523())
		{
			unk_0xFD45D90342D2A0CD(800);
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_1795, 5))
	{
		unk_0xD2459066EA58CE43(&(Global_2540384.f_1795), 5);
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_1795, 3))
	{
		unk_0xD2459066EA58CE43(&(Global_2540384.f_1795), 3);
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_1795, 4))
	{
		unk_0xD2459066EA58CE43(&(Global_2540384.f_1795), 4);
	}
	func_838(0);
	func_837(0);
	func_836(0);
}

void func_836(int iParam0)
{
	if (Global_2540384.f_4583 != iParam0)
	{
		Global_2540384.f_4583 = iParam0;
	}
}

void func_837(bool bParam0)
{
	if (Global_2540384.f_4582 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2540384.f_4582 = bParam0;
	}
}

void func_838(int iParam0)
{
	if (Global_2540384.f_4580 != iParam0)
	{
		Global_2540384.f_4580 = iParam0;
	}
}

void func_839(struct<21> Param0)
{
	int iVar0;
	
	func_848(func_849(Param0), Param0);
	unk_0x9CAB3AADEB4C2F8D(24);
	unk_0x628BF6B677C62F7E(9);
	func_847(0, -1, 0);
	func_845(129);
	unk_0x97D2F2E2C92FD519(&Local_82, 617);
	unk_0xBB96A3ECD45D0317(&Local_85, 577);
	func_844(1);
	if (!func_843())
	{
		func_793();
	}
	if (unk_0x25DDB354A40FFCDB())
	{
		unk_0x3A396632EB359434(0);
		if (unk_0xAFF96FDC3971E7EA())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_82.f_17[iVar0] = func_5();
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_82.f_22[iVar0] = func_5();
				Local_82.f_256[iVar0] = -1;
				Local_82.f_110[iVar0] = -1;
				iVar0++;
			}
			unk_0xF73A2DAF57FFFE87(&(Local_82.f_611), &(Local_82.f_612));
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_88[iVar0] = -1;
			iVar0++;
		}
		Local_83.f_2 = unk_0xDD3720600B3FC529();
		Local_83.f_8 = unk_0x5A002C4821A13338();
		func_681(19, 1);
		func_840();
		if (func_203())
		{
			unk_0xBE20AB8238688965(&(Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_2), 7);
		}
		Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/].f_9 = -1;
		Global_2540384.f_5112 = -1;
		Local_85[unk_0x59E2AD1A8ACEDA31() /*18*/] = 0;
	}
	else
	{
		func_793();
	}
}

void func_840()
{
	int iVar0;
	
	unk_0xDE8F8016287F771F("relUWPlayer", &iLocal_95);
	unk_0xDE8F8016287F771F("relUWAi", &iLocal_96);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		unk_0xEFBCE8F8316F89EA(1, Global_1574973[iVar0], iLocal_95);
		unk_0xEFBCE8F8316F89EA(1, iLocal_95, Global_1574973[iVar0]);
		unk_0xEFBCE8F8316F89EA(1, Global_1574973[iVar0], iLocal_96);
		unk_0xEFBCE8F8316F89EA(1, iLocal_96, Global_1574973[iVar0]);
		unk_0xEFBCE8F8316F89EA(1, iLocal_95, joaat("COP"));
		unk_0xEFBCE8F8316F89EA(1, joaat("COP"), iLocal_95);
		unk_0xEFBCE8F8316F89EA(1, iLocal_95, Global_1575021[5]);
		unk_0xEFBCE8F8316F89EA(1, Global_1575021[5], iLocal_95);
		unk_0xEFBCE8F8316F89EA(1, iLocal_95, Global_1575006);
		unk_0xEFBCE8F8316F89EA(1, Global_1575006, iLocal_95);
		iVar0++;
	}
	unk_0xEFBCE8F8316F89EA(5, iLocal_95, iLocal_96);
	unk_0xEFBCE8F8316F89EA(5, iLocal_96, iLocal_95);
	unk_0xEFBCE8F8316F89EA(1, 2017343592, iLocal_96);
	unk_0xEFBCE8F8316F89EA(5, 2017343592, iLocal_95);
	func_842(1, &iLocal_96);
	func_841(&iLocal_96);
	func_841(&iLocal_95);
}

void func_841(int iParam0)
{
	unk_0xEFBCE8F8316F89EA(1, -1865950624, *iParam0);
	unk_0xEFBCE8F8316F89EA(1, *iParam0, -1865950624);
	unk_0xEFBCE8F8316F89EA(1, 296331235, *iParam0);
	unk_0xEFBCE8F8316F89EA(1, *iParam0, 296331235);
	unk_0xEFBCE8F8316F89EA(1, 1166638144, *iParam0);
	unk_0xEFBCE8F8316F89EA(1, *iParam0, 1166638144);
	unk_0xEFBCE8F8316F89EA(1, 2037579709, *iParam0);
	unk_0xEFBCE8F8316F89EA(1, *iParam0, 2037579709);
	unk_0xEFBCE8F8316F89EA(1, 2017343592, *iParam0);
	unk_0xEFBCE8F8316F89EA(1, *iParam0, 2017343592);
	unk_0xEFBCE8F8316F89EA(1, -1821475077, *iParam0);
	unk_0xEFBCE8F8316F89EA(1, *iParam0, -1821475077);
	unk_0xEFBCE8F8316F89EA(1, 1782292358, *iParam0);
	unk_0xEFBCE8F8316F89EA(1, *iParam0, 1782292358);
	unk_0xEFBCE8F8316F89EA(1, -1033021910, *iParam0);
	unk_0xEFBCE8F8316F89EA(1, *iParam0, -1033021910);
	unk_0xEFBCE8F8316F89EA(1, -1285976420, *iParam0);
	unk_0xEFBCE8F8316F89EA(1, *iParam0, -1285976420);
}

void func_842(int iParam0, int iParam1)
{
	unk_0xEFBCE8F8316F89EA(iParam0, joaat("COP"), *iParam1);
	unk_0xEFBCE8F8316F89EA(iParam0, *iParam1, joaat("COP"));
	unk_0xEFBCE8F8316F89EA(iParam0, -472287501, *iParam1);
	unk_0xEFBCE8F8316F89EA(iParam0, *iParam1, -472287501);
	unk_0xEFBCE8F8316F89EA(iParam0, -183807561, *iParam1);
	unk_0xEFBCE8F8316F89EA(iParam0, *iParam1, -183807561);
}

int func_843()
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
		if (func_788())
		{
			return 0;
		}
		if (func_786(157))
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

void func_844(bool bParam0)
{
	if (unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) == func_444())
	{
		return;
	}
	if (!unk_0x7FD2BDF03806FD9D(Global_2416085.f_1317) || Global_2416085.f_1317 == unk_0x354AD085195C5FA6())
	{
		if (bParam0)
		{
			Global_2416085.f_1317 = unk_0x354AD085195C5FA6();
		}
		else
		{
			Global_2416085.f_1317 = -1;
		}
	}
}

void func_845(int iParam0)
{
	func_806();
	func_846();
	func_830();
	Global_1574656.f_4 = iParam0;
	Global_1574656.f_5 = iParam0;
	func_680(iParam0, -1);
	func_8(&(Global_1574656.f_18), 0, 0);
	Global_2540384.f_4652 = 0;
	Global_2463318[0] = func_5();
	Global_2463318[1] = func_5();
	Global_2463318[2] = func_5();
	Global_2463318[3] = func_5();
	Global_2463318[4] = func_5();
	func_805();
	if (!func_228(func_229()))
	{
		func_357();
	}
	if (func_245() && !func_240())
	{
		unk_0xBE20AB8238688965(&(Global_1574656.f_1), 16);
	}
	else
	{
		unk_0xBE20AB8238688965(&(Global_1574656.f_1), 17);
	}
}

void func_846()
{
	var uVar0;
	
	Global_1574681 = uVar0;
}

int func_847(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x361B374A50D875B4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_794();
			}
			else
			{
				return 0;
			}
		}
		if (!func_168())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x25DDB354A40FFCDB())
				{
					if (!bParam2)
					{
						func_794();
					}
					else
					{
						return 0;
					}
				}
				if (func_788())
				{
					if (!bParam2)
					{
						func_794();
					}
					else
					{
						return 0;
					}
				}
				if (func_786(157))
				{
					if (!bParam2)
					{
						func_794();
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
					func_794();
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
				func_794();
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
			func_794();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_848(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		func_794();
	}
	unk_0xA88557896B79E30D(iParam0, 0, Param1.f_16);
}

int func_849(int iParam0)
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
		
		case joaat("MPSV_LP0_31"):
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
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
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
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 8;
		
		case 131:
			return 8;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
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
		
		case 134:
			return 32;
		
		case 135:
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
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 141:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 148:
			return 32;
		
		case 149:
			return 32;
		
		case 150:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 2;
		
		case 157:
			return 1;
		
		case 153:
			return 2;
		
		case 154:
			return 4;
		
		case 155:
			return 2;
		
		case 156:
			return 2;
		
		case 138:
			return 1;
		
		case 158:
			return 2;
		
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
			return 0;
		
		case 180:
			return 1;
		
		case 165:
			return 4;
		
		case 168:
			return 4;
		
		case 169:
			return 1;
		
		case 170:
			return 1;
		
		case 176:
			return 1;
		
		case 172:
			return 2;
		
		case 177:
			return 1;
		
		case 173:
			return 1;
		
		case 171:
			return 2;
		
		case 174:
			return 8;
		
		case 175:
			return 8;
		
		case 178:
			return 1;
		
		case 179:
			return 2;
		
		case 166:
			return 16;
		
		case 167:
			return 32;
		
		default:
	}
	return 0;
}

int func_850(int iParam0, bool bParam1, bool bParam2)
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

