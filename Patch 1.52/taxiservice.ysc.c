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
	struct<3> Local_43 = { 0, 0, 0 } ;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	bool bLocal_64 = 0;
	bool bLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	float fLocal_82 = 0f;
	float fLocal_83 = 0f;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	float fLocal_86 = 0f;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
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
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	char* sLocal_107 = NULL;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 12;
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
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
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
	var uLocal_573 = 0;
	var uLocal_574 = 0;
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
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
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
	var uLocal_615 = 0;
	var uLocal_616 = 0;
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
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
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
	var uLocal_657 = 0;
	var uLocal_658 = 0;
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
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
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
	var uLocal_699 = 0;
	var uLocal_700 = 0;
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
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
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
	var uLocal_741 = 0;
	var uLocal_742 = 0;
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
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
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
	var uLocal_783 = 0;
	var uLocal_784 = 0;
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
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 1065353216;
	int iLocal_813 = 0;
	struct<9> Local_814 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	int iLocal_817 = 0;
	int iLocal_818 = 0;
	struct<3> Local_819[40];
	int iLocal_820 = 0;
	int iLocal_821 = 0;
	int iLocal_822 = 0;
	int iLocal_823 = 0;
	char cLocal_824[32] = "";
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	struct<3> Local_829 = { 0, 0, 0 } ;
	struct<3> Local_830 = { 0, 0, 0 } ;
	struct<3> Local_831 = { 0, 0, 0 } ;
	struct<3> Local_832 = { 0, 0, 0 } ;
	struct<3> Local_833 = { 0, 0, 0 } ;
	struct<3> Local_834 = { 0, 0, 0 } ;
	struct<3> Local_835 = { 0, 0, 0 } ;
	struct<3> Local_836 = { 0, 0, 0 } ;
	struct<3> Local_837 = { 0, 0, 0 } ;
	struct<3> Local_838 = { 0, 0, 0 } ;
	int iLocal_839 = 0;
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
	iLocal_44 = unk_0x0CD0167AEB96E096();
	iLocal_45 = unk_0xE66C877C9033DBB0();
	iLocal_69 = 1076369579;
	iLocal_70 = 1076631591;
	fLocal_73 = 0.22f;
	fLocal_74 = 50f;
	fLocal_75 = -4f;
	fLocal_76 = 4f;
	fLocal_77 = -89f;
	fLocal_78 = 89f;
	fLocal_79 = 4f;
	fLocal_82 = 0f;
	fLocal_84 = 0.4f;
	fLocal_85 = 0.6f;
	fLocal_86 = 0.201f;
	fLocal_87 = 0.351f;
	iLocal_90 = -1;
	iLocal_105 = -1;
	iLocal_106 = -1;
	sLocal_107 = unk_0xED026A379B794F61(2, 195, true);
	iLocal_108 = joaat("prop_taxi_meter_2");
	iLocal_110 = 3;
	iLocal_816 = -1;
	iLocal_817 = 263;
	StringCopy(&cLocal_824, "oddjobs@taxi@driver", 32);
	Local_830 = { 0f, 0f, 0f };
	Local_831 = { 0f, 0f, 0f };
	Local_835 = { 0f, -0.25f, 0.55f };
	Local_836 = { -0.3f, 1f, 0.35f };
	Local_837 = { -0.01f, 0.6f, 0.24f };
	Local_838 = { -5f, 0f, 0f };
	if (unk_0xED06FD5709A59F02(66))
	{
		if (unk_0xEC7DB118B815F890() == 64)
		{
			func_239(0);
		}
		else
		{
			func_239(1);
		}
		unk_0xD39E529EBE5DB04F();
	}
	if (!func_232())
	{
		func_239(1);
	}
	while (true)
	{
		if (!func_231())
		{
			func_239(1);
		}
		if (func_230(iLocal_822))
		{
			func_239(1);
		}
		switch (iLocal_822)
		{
			case 1:
				func_65();
				break;
			
			case 2:
				func_1();
				break;
			
			case 3:
				break;
		}
		wait(0);
	}
}

void func_1()
{
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (Global_110905)
		{
			Global_110905 = 0;
			if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
			{
				unk_0xDDEDC06C88DA4E04(unk_0x460153A63B9477BC(), true, 0);
				unk_0xE8775836E165BF34(unk_0x460153A63B9477BC(), 1);
			}
			unk_0x44225B42FE388400(unk_0x9B0761B4C3EB8BC7(), false);
			if ((iLocal_821 == 2 || iLocal_821 == 3) || iLocal_821 == 4)
			{
				func_7();
			}
		}
	}
	func_5();
	if (func_3(Global_110889) && unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Global_110889, true))
	{
		if (!func_2(unk_0x9B0761B4C3EB8BC7(), -828834893) && !func_2(unk_0x9B0761B4C3EB8BC7(), 451360105))
		{
			unk_0x0AB756271BADC8DF(unk_0x9B0761B4C3EB8BC7(), 0, 0);
		}
	}
	else
	{
		if (unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(Global_110890) && unk_0x80FF6C016CDB0FAF(Global_110889, 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(Global_110890, Global_110889, false))
				{
					if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
					{
						unk_0xBD204892D76E6303(Global_110890, Global_110889, unk_0x9B0761B4C3EB8BC7(), 8, 25f, 790564, 300f, 15f, 1);
					}
				}
				else if (!unk_0xA26A1295C5145A11(Global_110890))
				{
					if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
					{
						unk_0x8B18A80E8EB15510(Global_110890, unk_0x9B0761B4C3EB8BC7(), 300f, -1, 0, 0);
					}
				}
				unk_0xCBA6B2B569DCAFD8(Global_110890, true);
				unk_0x4E65320BC9AD521C(Global_110890, false);
			}
		}
		else if (!unk_0x5AEB5DDFFAD43CA5(Global_110890) && unk_0x80FF6C016CDB0FAF(Global_110889, 0))
		{
			if (unk_0xE0B3BC41DDA88DF0(Global_110890, Global_110889, false))
			{
				if (!func_2(Global_110890, -258271821))
				{
					unk_0xD8C1C38EE8BC2AC6(Global_110890, Global_110889, 12f, 790699);
				}
			}
			unk_0xCBA6B2B569DCAFD8(Global_110890, true);
			unk_0x4E65320BC9AD521C(Global_110890, false);
		}
		func_239(1);
	}
}

int func_2(int iParam0, int iParam1)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
			{
				if (unk_0x16BC17A8EDC701A2(iParam0, iParam1) == 1 || unk_0x16BC17A8EDC701A2(iParam0, iParam1) == 0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_3(int iParam0)
{
	if (func_4(iParam0))
	{
		if (unk_0x80FF6C016CDB0FAF(iParam0, 0))
		{
			if (!unk_0x0922C2E075A5F18C(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_4(int iParam0)
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

void func_5()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (unk_0xA9612D351EFBCEE5(func_6()))
	{
		unk_0x611FFFF42603C2CD(func_6(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			iVar2 = unk_0x1615D8CF888EABB9(func_6(), 0);
			if (!unk_0x5AEB5DDFFAD43CA5(iVar2))
			{
				unk_0x9B94F6169B0DAEFD(iVar2);
				if (!unk_0xA59F96B50B97E63C(Global_110889, 0))
				{
					if (unk_0xE0B3BC41DDA88DF0(iVar2, Global_110889, false))
					{
						unk_0x1FBAE3B250A7D06D(iVar2, Global_110889, 64);
					}
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = unk_0x1615D8CF888EABB9(func_6(), 1);
				if (!unk_0x5AEB5DDFFAD43CA5(iVar2))
				{
					unk_0x9B94F6169B0DAEFD(iVar2);
					if (!unk_0xA59F96B50B97E63C(Global_110889, 0))
					{
						if (unk_0xE0B3BC41DDA88DF0(iVar2, Global_110889, false))
						{
							unk_0x1FBAE3B250A7D06D(iVar2, Global_110889, 64);
						}
					}
				}
			}
		}
	}
}

int func_6()
{
	return unk_0x14A1FF4316FA17CB(unk_0x2639A2323BEA8CC6());
}

void func_7()
{
	bool bVar0;
	
	if (unk_0x80FF6C016CDB0FAF(Global_110889, 0))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(Global_110890))
		{
			if (unk_0xACBCFA3095C5A434(Global_110890, Global_110889))
			{
				if (!func_63())
				{
					bVar0 = true;
					if (func_56(func_57()) >= iLocal_101)
					{
						if (bLocal_65)
						{
							if (iLocal_101 > 0)
							{
								if (fLocal_72 > 75f)
								{
									iLocal_818 = 6;
								}
								else
								{
									iLocal_818 = 5;
								}
								func_46(Global_110890, &iLocal_818);
								func_9(func_57(), 21, iLocal_101);
								bVar0 = false;
							}
						}
						else if (iLocal_66 || iLocal_821 == 3)
						{
							if (iLocal_101 > 0)
							{
								iLocal_818 = 13;
								func_46(Global_110890, &iLocal_818);
								func_9(func_57(), 21, iLocal_101);
								bVar0 = false;
							}
						}
						else if (unk_0xF3A639BEE7AADF55(Global_110889) > 5f)
						{
							if (!func_8())
							{
								iLocal_818 = 12;
								func_46(Global_110890, &iLocal_818);
								unk_0x26152FD46A297C2F(unk_0x460153A63B9477BC(), 1, 0);
								unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
							}
						}
						else
						{
							iLocal_818 = 13;
							func_46(Global_110890, &iLocal_818);
							if (iLocal_101 > 0)
							{
								func_9(func_57(), 21, iLocal_101);
							}
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						if (iLocal_101 > 0)
						{
							iLocal_818 = 7;
							func_46(Global_110890, &iLocal_818);
							unk_0x26152FD46A297C2F(unk_0x460153A63B9477BC(), 1, 0);
							unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
						}
					}
				}
			}
		}
	}
}

int func_8()
{
	if (((Global_98955 == 13 || Global_98955 == 10) || Global_98955 == 11) || Global_98955 == 12)
	{
		return 0;
	}
	return 1;
}

int func_9(int iParam0, int iParam1, int iParam2)
{
	if (func_45(iParam0) == 3)
	{
		return 0;
	}
	if (func_45(iParam0) == 4)
	{
		return 0;
	}
	return func_10(func_45(iParam0), 0, iParam1, iParam2, 0);
}

int func_10(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_44();
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
					func_43(99, 1);
					func_42(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_42(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_42(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_26(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_21(5))
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
							func_42(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_42(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_42(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_21(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_42(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_42(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_42(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_42(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_42(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_42(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_42(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_42(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_42(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_42(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_42(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_42(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_42(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_42(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_42(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_21(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_42(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_42(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_42(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_42(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_42(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_42(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_20(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_43(95, iParam3);
					break;
				
				case 1:
					func_43(97, iParam3);
					break;
				
				case 2:
					func_43(96, iParam3);
					break;
			}
			func_43(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_13(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_13(iVar1);
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
					func_42(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_42(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_42(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
	func_12(iParam0);
	if (Global_41631 == 15)
	{
		func_11(0);
	}
	return 1;
}

void func_11(bool bParam0)
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

void func_12(int iParam0)
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

void func_13(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_19(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_19(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_19(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_19(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_16(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_16(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_16(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_16(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_16(8274, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_16(8275, 0, -1, 1, 0);
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
	else if (unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, iParam0) || unk_0xCE990E643CD9D0E5(Global_2097152[func_15() /*10931*/].f_6175.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xD2459066EA58CE43(&(Global_111858.f_20560.f_471), iParam0);
		unk_0xD2459066EA58CE43(&(Global_2097152[func_15() /*10931*/].f_6175.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x5B8DD855EAFD33B5("COUP_RED");
		unk_0x6A826E35A3096ED0(func_14(iParam0));
		unk_0x39E1440587355CC1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_14(int iParam0)
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

int func_15()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_16(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_17(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
}

int func_17(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
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

int func_18()
{
	return Global_1312763;
}

int func_19(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_18();
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

void func_20(int iParam0)
{
	func_43(93, iParam0);
	func_43(29, iParam0);
	func_43(30, iParam0);
}

bool func_21(int iParam0)
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
		return func_23(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_23(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_23(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_23(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x5A002C4821A13338();
		iVar1 = func_22(8270, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x5A002C4821A13338();
		iVar3 = func_22(8271, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x5A002C4821A13338();
		iVar5 = func_22(8272, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x5A002C4821A13338();
		iVar7 = func_22(8273, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x5A002C4821A13338();
		iVar9 = func_22(8274, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x5A002C4821A13338();
		iVar11 = func_22(8275, -1, 0);
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
	return unk_0xCE990E643CD9D0E5(Global_2097152[func_15() /*10931*/].f_6175.f_10, iParam0);
}

int func_22(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_17(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_23(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	iVar1 = func_25(iParam0, iParam1);
	uVar2 = func_24(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x9FD0AD883E4A7C1E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_24(int iParam0)
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

int func_25(int iParam0, int iParam1)
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

int func_26(bool bParam0)
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
		func_41(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_27(27, 1);
	return 1;
}

int func_27(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_28(iParam0, iParam1);
}

int func_28(int iParam0, int iParam1)
{
	if (func_40(14) && !func_39(iParam0))
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
	if (func_38(&Global_4271324))
	{
		if (func_36(&Global_4271324, iParam0))
		{
			return 0;
		}
		if (func_29(&Global_4271324, iParam0))
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

int func_29(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x027BA2E902FAC118(iParam1))
	{
		return 0;
	}
	if (func_40(14) && !func_39(iParam1))
	{
		return 0;
	}
	if (func_36(uParam0, iParam1))
	{
		return 0;
	}
	if (func_35(uParam0) < 0f)
	{
		func_34(uParam0, 0);
	}
	func_32(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_30(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_30(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x027BA2E902FAC118(iParam1))
	{
		return 0;
	}
	if (func_40(14) && !func_39(iParam1))
	{
		return 0;
	}
	if (func_36(uParam0, iParam1))
	{
		return 0;
	}
	if (func_35(uParam0) < 0f)
	{
		func_34(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_31(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_31(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_32(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_33(uParam0, iVar0);
		iVar0++;
	}
	func_34(uParam0, (Global_4271323 - 0.5f));
}

void func_33(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_34(var uParam0, float fParam1)
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

float func_35(var uParam0)
{
	return uParam0->f_80;
}

bool func_36(var uParam0, int iParam1)
{
	return func_37(uParam0, iParam1) != -1;
}

int func_37(var uParam0, int iParam1)
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

bool func_38(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_39(int iParam0)
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

bool func_40(int iParam0)
{
	return Global_41631 == iParam0;
}

int func_41(int iParam0, int iParam1)
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

void func_42(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD2F202166691EDB2(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x6000E4684CB4330B(iParam0, iVar0, 1);
}

void func_43(int iParam0, int iParam1)
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

void func_44()
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

int func_45(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_17;
}

void func_46(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (!func_52(iParam0, 0))
		{
			if (!*iParam1 == 0)
			{
				if (*iParam1 == 1)
				{
					func_50(iParam0, "TAXID_WHERE_TO", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 2)
				{
					if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
					{
						func_47();
						*iParam1 = 3;
					}
				}
				else if (*iParam1 == 3)
				{
					func_50(iParam0, "TAXID_BEGIN_JOURNEY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 4)
				{
					func_50(iParam0, "TAXID_BANTER", 24);
					*iParam1 = 22;
				}
				else if (*iParam1 == 5)
				{
					func_50(iParam0, "TAXID_ARRIVE_AT_DEST", 7);
					*iParam1 = 23;
				}
				else if (*iParam1 == 6)
				{
					func_50(iParam0, "TAXID_CLOSE_AS_POSS", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 7)
				{
					func_50(iParam0, "TAXID_NO_MONEY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 9)
				{
					if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
					{
						bVar0 = unk_0x871C5006E008A592(unk_0x9B0761B4C3EB8BC7());
						if (bVar0)
						{
							unk_0x44225B42FE388400(unk_0x9B0761B4C3EB8BC7(), false);
						}
						func_50(unk_0x9B0761B4C3EB8BC7(), "TAXI_CHANGE_DEST", 7);
						if (bVar0)
						{
							unk_0x44225B42FE388400(unk_0x9B0761B4C3EB8BC7(), true);
						}
						*iParam1 = 10;
					}
				}
				else if (*iParam1 == 10)
				{
					if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
					{
						func_47();
						*iParam1 = 11;
					}
				}
				else if (*iParam1 == 11)
				{
					func_50(iParam0, "TAXID_CHANGE_DEST", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 12)
				{
					func_50(iParam0, "TAXID_RUN_AWAY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 13)
				{
					func_50(iParam0, "TAXID_GET_OUT_EARLY", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 14)
				{
					func_50(iParam0, "TAXID_TRASHED", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 15)
				{
					if (!Global_110910)
					{
						func_50(iParam0, "TAXID_AFFORD_PART_JOURNEY", 7);
						Global_110910 = 1;
					}
					*iParam1 = 22;
				}
				else if (*iParam1 == 16)
				{
					func_50(iParam0, "TAXID_TAKE_FIRST_CAB", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 17)
				{
					*iParam1 = 18;
				}
				else if (*iParam1 == 18)
				{
					if (unk_0x420C14BB30A8A7AA())
					{
						settimera(0);
					}
					else if (timera() > 4000)
					{
						if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
						{
							bVar0 = unk_0x871C5006E008A592(unk_0x9B0761B4C3EB8BC7());
							if (bVar0)
							{
								unk_0x44225B42FE388400(unk_0x9B0761B4C3EB8BC7(), false);
							}
							switch (unk_0x9301B13EC408DE79())
							{
								case 0:
									func_50(unk_0x9B0761B4C3EB8BC7(), "RADIO_REQ_VIBE", 7);
									break;
								
								case 1:
									func_50(unk_0x9B0761B4C3EB8BC7(), "RADIO_REQ_LRR", 7);
									break;
								
								case 2:
									func_50(unk_0x9B0761B4C3EB8BC7(), "RADIO_REQ_JNR", 7);
									break;
								
								case 3:
									func_50(unk_0x9B0761B4C3EB8BC7(), "RADIO_REQ_MASSIVEB", 7);
									break;
								
								case 4:
									func_50(unk_0x9B0761B4C3EB8BC7(), "RADIO_REQ_K109", 7);
									break;
								
								case 5:
									func_50(unk_0x9B0761B4C3EB8BC7(), "RADIO_REQ_WKTT", 7);
									break;
								
								case 6:
									func_50(unk_0x9B0761B4C3EB8BC7(), "RADIO_REQ_LCHC", 7);
									break;
								
								case 7:
									func_50(unk_0x9B0761B4C3EB8BC7(), "RADIO_REQ_JOURNEY", 7);
									break;
								
								case 8:
									func_50(unk_0x9B0761B4C3EB8BC7(), "RADIO_REQ_FUSION", 7);
									break;
								
								case 9:
									func_50(unk_0x9B0761B4C3EB8BC7(), "RADIO_REQ_BEAT", 7);
									break;
								
								case 10:
									func_50(unk_0x9B0761B4C3EB8BC7(), "RADIO_REQ_BROKER", 7);
									break;
								
								case 11:
									func_50(unk_0x9B0761B4C3EB8BC7(), "RADIO_REQ_VLADIVOSTOK", 7);
									break;
								
								case 12:
									func_50(unk_0x9B0761B4C3EB8BC7(), "RADIO_REQ_PLR", 7);
									break;
								
								case 13:
									func_50(unk_0x9B0761B4C3EB8BC7(), "RADIO_REQ_SANJUAN", 7);
									break;
								
								case 14:
									func_50(unk_0x9B0761B4C3EB8BC7(), "RADIO_REQ_FRANCOIS", 7);
									break;
								
								case 15:
									func_50(unk_0x9B0761B4C3EB8BC7(), "RADIO_REQ_CLASSICS", 7);
									break;
							}
							if (bVar0)
							{
								unk_0x44225B42FE388400(unk_0x9B0761B4C3EB8BC7(), true);
							}
						}
						*iParam1 = 22;
					}
				}
				else if (*iParam1 == 19)
				{
					*iParam1 = 22;
				}
				else if (*iParam1 == 20)
				{
					if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
					{
						bVar0 = unk_0x871C5006E008A592(unk_0x9B0761B4C3EB8BC7());
						if (bVar0)
						{
							unk_0x44225B42FE388400(unk_0x9B0761B4C3EB8BC7(), false);
						}
						func_50(unk_0x9B0761B4C3EB8BC7(), "TAXI_STEP_ON_IT", 7);
						if (bVar0)
						{
							unk_0x44225B42FE388400(unk_0x9B0761B4C3EB8BC7(), true);
						}
						*iParam1 = 21;
					}
				}
				else if (*iParam1 == 21)
				{
					func_50(iParam0, "TAXID_SPEED_UP", 7);
					*iParam1 = 22;
				}
				else if (*iParam1 == 23)
				{
					if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
					{
						bVar0 = unk_0x871C5006E008A592(unk_0x9B0761B4C3EB8BC7());
						if (bVar0)
						{
							unk_0x44225B42FE388400(unk_0x9B0761B4C3EB8BC7(), false);
						}
						func_50(unk_0x9B0761B4C3EB8BC7(), "THANKS", 7);
						if (bVar0)
						{
							unk_0x44225B42FE388400(unk_0x9B0761B4C3EB8BC7(), true);
						}
						*iParam1 = 22;
					}
				}
				else if (*iParam1 == 22)
				{
					if (!func_52(iParam0, 0))
					{
						*iParam1 = 0;
					}
				}
			}
		}
	}
}

void func_47()
{
	char* sVar0;
	bool bVar1;
	
	sVar0 = func_48();
	if (!unk_0x7BCC91F3C1CF24E8(sVar0))
	{
		bVar1 = unk_0x871C5006E008A592(unk_0x9B0761B4C3EB8BC7());
		if (bVar1)
		{
			unk_0x44225B42FE388400(unk_0x9B0761B4C3EB8BC7(), false);
		}
		func_50(unk_0x9B0761B4C3EB8BC7(), sVar0, 7);
		if (bVar1)
		{
			unk_0x44225B42FE388400(unk_0x9B0761B4C3EB8BC7(), true);
		}
	}
}

char* func_48()
{
	char cVar0[32];
	
	StringCopy(&cVar0, unk_0x5455B0009696FA6A(func_49(Local_43.x)), 32);
	if (unk_0xF005CCA4263DF67F("SanAnd", &cVar0))
	{
		return "LOCATION_SAN_ANDREAS";
	}
	else if (unk_0xF005CCA4263DF67F("Alamo", &cVar0))
	{
		return "LOCATION_ALAMO_SEA";
	}
	else if (unk_0xF005CCA4263DF67F("Alta", &cVar0))
	{
		return "LOCATION_ALTA";
	}
	else if (unk_0xF005CCA4263DF67F("Airp", &cVar0))
	{
		return "LOCATION_LOS_SANTOS_INTERNATIONAL_AIRPORT";
	}
	else if (unk_0xF005CCA4263DF67F("ArmyB", &cVar0))
	{
		return "LOCATION_FORT_ZANCUDO";
	}
	else if (unk_0xF005CCA4263DF67F("BhamCa", &cVar0))
	{
		return "LOCATION_BANHAM_CANYON";
	}
	else if (unk_0xF005CCA4263DF67F("Banning", &cVar0))
	{
		return "LOCATION_BANNING";
	}
	else if (unk_0xF005CCA4263DF67F("Baytre", &cVar0))
	{
		return "LOCATION_BAYTREE_CANYON";
	}
	else if (unk_0xF005CCA4263DF67F("Beach", &cVar0))
	{
		return "LOCATION_VESPUCCI_BEACH";
	}
	else if (unk_0xF005CCA4263DF67F("BradT", &cVar0))
	{
		return "LOCATION_BRADDOCK_TUNNEL";
	}
	else if (unk_0xF005CCA4263DF67F("BradP", &cVar0))
	{
		return "LOCATION_BRADDOCK_PASS";
	}
	else if (unk_0xF005CCA4263DF67F("Burton", &cVar0))
	{
		return "LOCATION_BURTON";
	}
	else if (unk_0xF005CCA4263DF67F("CANNY", &cVar0))
	{
		return "LOCATION_RATON_CANYON";
	}
	else if (unk_0xF005CCA4263DF67F("CCreak", &cVar0))
	{
		return "LOCATION_CASSIDY_CREEK";
	}
	else if (unk_0xF005CCA4263DF67F("CalafB", &cVar0))
	{
		return "LOCATION_CALAFIA_BRIDGE";
	}
	else if (unk_0xF005CCA4263DF67F("ChamH", &cVar0))
	{
		return "LOCATION_CHAMBERLAIN_HILLS";
	}
	else if (unk_0xF005CCA4263DF67F("CHU", &cVar0))
	{
		return "LOCATION_CHUMASH";
	}
	else if (unk_0xF005CCA4263DF67F("CHIL", &cVar0))
	{
		return "LOCATION_VINEWOOD_HILLS";
	}
	else if (unk_0xF005CCA4263DF67F("COSI", &cVar0))
	{
		return "LOCATION_COUNTRYSIDE";
	}
	else if (unk_0xF005CCA4263DF67F("CMSW", &cVar0))
	{
		return "LOCATION_CHILIAD_MOUNTAIN_STATE_WILDERNESS";
	}
	else if (unk_0xF005CCA4263DF67F("Cypre", &cVar0))
	{
		return "LOCATION_CYPRESS_FLATS";
	}
	else if (unk_0xF005CCA4263DF67F("Davis", &cVar0))
	{
		return "LOCATION_DAVIS";
	}
	else if (unk_0xF005CCA4263DF67F("Desrt", &cVar0))
	{
		return "LOCATION_GRAND_SENORA_DESERT";
	}
	else if (unk_0xF005CCA4263DF67F("DelBe", &cVar0))
	{
		return "LOCATION_DEL_PERRO_BEACH";
	}
	else if (unk_0xF005CCA4263DF67F("DelPe", &cVar0))
	{
		return "LOCATION_DEL_PERRO";
	}
	else if (unk_0xF005CCA4263DF67F("DelSol", &cVar0))
	{
		return "LOCATION_LA_PUERTA";
	}
	else if (unk_0xF005CCA4263DF67F("Downt", &cVar0))
	{
		return "LOCATION_DOWNTOWN";
	}
	else if (unk_0xF005CCA4263DF67F("DTVine", &cVar0))
	{
		return "LOCATION_DOWNTOWN_VINEWOOD";
	}
	else if (unk_0xF005CCA4263DF67F("Eclips", &cVar0))
	{
		return "LOCATION_ECLIPSE";
	}
	else if (unk_0xF005CCA4263DF67F("ELSant", &cVar0))
	{
		return "LOCATION_EAST_LOS_SANTOS";
	}
	else if (unk_0xF005CCA4263DF67F("EBuro", &cVar0))
	{
		return "LOCATION_EL_BURRO_HEIGHTS";
	}
	else if (unk_0xF005CCA4263DF67F("ELGorl", &cVar0))
	{
		return "LOCATION_EL_GORDO_LIGHTHOUSE";
	}
	else if (unk_0xF005CCA4263DF67F("Elysian", &cVar0))
	{
		return "LOCATION_ELYSIAN_ISLAND";
	}
	else if (unk_0xF005CCA4263DF67F("Galli", &cVar0))
	{
		return "LOCATION_GALILEO_PARK";
	}
	else if (unk_0xF005CCA4263DF67F("Galfish", &cVar0))
	{
		return "LOCATION_GALILEE";
	}
	else if (unk_0xF005CCA4263DF67F("Greatc", &cVar0))
	{
		return "LOCATION_GREAT_CHAPARRAL";
	}
	else if (unk_0xF005CCA4263DF67F("Golf", &cVar0))
	{
		return "LOCATION_GWC_AND_GOLFING_SOCIETY";
	}
	else if (unk_0xF005CCA4263DF67F("GrapeS", &cVar0))
	{
		return "LOCATION_GRAPESEED";
	}
	else if (unk_0xF005CCA4263DF67F("Hawick", &cVar0))
	{
		return "LOCATION_HAWICK";
	}
	else if (unk_0xF005CCA4263DF67F("Harmo", &cVar0))
	{
		return "LOCATION_HARMONY";
	}
	else if (unk_0xF005CCA4263DF67F("Heart", &cVar0))
	{
		return "LOCATION_HEART_ATTACKS_BEACH";
	}
	else if (unk_0xF005CCA4263DF67F("HumLab", &cVar0))
	{
		return "LOCATION_HUMANE_LABS_AND_RESEARCH";
	}
	else if (unk_0xF005CCA4263DF67F("HORS", &cVar0))
	{
		return "LOCATION_VINEWOOD_RACETRACK";
	}
	else if (unk_0xF005CCA4263DF67F("Koreat", &cVar0))
	{
		return "LOCATION_LITTLE_SEOUL";
	}
	else if (unk_0xF005CCA4263DF67F("Jail", &cVar0))
	{
		return "LOCATION_BOLINGBROKE_PENITENTIARY";
	}
	else if (unk_0xF005CCA4263DF67F("LAct", &cVar0))
	{
		return "LOCATION_LAND_ACT_RESERVOIR";
	}
	else if (unk_0xF005CCA4263DF67F("LDam", &cVar0))
	{
		return "LOCATION_LAND_ACT_DAM";
	}
	else if (unk_0xF005CCA4263DF67F("Lago", &cVar0))
	{
		return "LOCATION_LAGO_ZANCUDO";
	}
	else if (unk_0xF005CCA4263DF67F("LegSqu", &cVar0))
	{
		return "LOCATION_LEGION_SQUARE";
	}
	else if (unk_0xF005CCA4263DF67F("LosSF", &cVar0))
	{
		return "LOCATION_LOS_SANTOS_FREEWAY";
	}
	else if (unk_0xF005CCA4263DF67F("LMesa", &cVar0))
	{
		return "LOCATION_LA_MESA";
	}
	else if (unk_0xF005CCA4263DF67F("LosPuer", &cVar0))
	{
		return "LOCATION_LA_PUERTA";
	}
	else if (unk_0xF005CCA4263DF67F("LosPFy", &cVar0))
	{
		return "LOCATION_LA_PUERTA_FWY";
	}
	else if (unk_0xF005CCA4263DF67F("Mirr", &cVar0))
	{
		return "LOCATION_MIRROR_PARK";
	}
	else if (unk_0xF005CCA4263DF67F("Morn", &cVar0))
	{
		return "LOCATION_MORNINGWOOD";
	}
	else if (unk_0xF005CCA4263DF67F("Murri", &cVar0))
	{
		return "LOCATION_MURRIETA_HEIGHTS";
	}
	else if (unk_0xF005CCA4263DF67F("MTChil", &cVar0))
	{
		return "LOCATION_MOUNT_CHILIAD";
	}
	else if (unk_0xF005CCA4263DF67F("MTJose", &cVar0))
	{
		return "LOCATION_MOUNT_JOSIAH";
	}
	else if (unk_0xF005CCA4263DF67F("MTGordo", &cVar0))
	{
		return "LOCATION_MOUNT_GORDO";
	}
	else if (unk_0xF005CCA4263DF67F("Movie", &cVar0))
	{
		return "LOCATION_RICHARDS_MAJESTIC";
	}
	else if (unk_0xF005CCA4263DF67F("NCHU", &cVar0))
	{
		return "LOCATION_NORTH_CHUMASH";
	}
	else if (unk_0xF005CCA4263DF67F("Oceana", &cVar0))
	{
		return "LOCATION_PACIFIC_OCEAN";
	}
	else if (unk_0xF005CCA4263DF67F("Observ", &cVar0))
	{
		return "LOCATION_GALILEO_OBSERVATORY";
	}
	else if (unk_0xF005CCA4263DF67F("Palmpow", &cVar0))
	{
		return "LOCATION_PALMER-TAYLOR_POWER_STATION";
	}
	else if (unk_0xF005CCA4263DF67F("PBOX", &cVar0))
	{
		return "LOCATION_PILLBOX_HILL";
	}
	else if (unk_0xF005CCA4263DF67F("PBluff", &cVar0))
	{
		return "LOCATION_PACIFIC_BLUFFS";
	}
	else if (unk_0xF005CCA4263DF67F("Paleto", &cVar0))
	{
		return "LOCATION_PALETO_BAY";
	}
	else if (unk_0xF005CCA4263DF67F("PalCov", &cVar0))
	{
		return "LOCATION_PALETO_COVE";
	}
	else if (unk_0xF005CCA4263DF67F("PalFor", &cVar0))
	{
		return "LOCATION_PALETO_FOREST";
	}
	else if (unk_0xF005CCA4263DF67F("PalHigh", &cVar0))
	{
		return "LOCATION_PALOMINO_HIGHLANDS";
	}
	else if (unk_0xF005CCA4263DF67F("ProcoB", &cVar0))
	{
		return "LOCATION_PROCOPIO_BEACH";
	}
	else if (unk_0xF005CCA4263DF67F("Prol", &cVar0))
	{
		return "LOCATION_NORTH_YANKTON";
	}
	else if (unk_0xF005CCA4263DF67F("RTRAK", &cVar0))
	{
		return "LOCATION_REDWOOD_LIGHTS_TRACK";
	}
	else if (unk_0xF005CCA4263DF67F("Rancho", &cVar0))
	{
		return "LOCATION_RANCHO";
	}
	else if (unk_0xF005CCA4263DF67F("RGLEN", &cVar0))
	{
		return "LOCATION_RICHMAN_GLEN";
	}
	else if (unk_0xF005CCA4263DF67F("Richm", &cVar0))
	{
		return "LOCATION_RICHMAN";
	}
	else if (unk_0xF005CCA4263DF67F("Rockf", &cVar0))
	{
		return "LOCATION_ROCKFORD_HILLS";
	}
	else if (unk_0xF005CCA4263DF67F("SANDY", &cVar0))
	{
		return "LOCATION_SANDY_SHORES";
	}
	else if (unk_0xF005CCA4263DF67F("TongvaH", &cVar0))
	{
		return "LOCATION_TONGVA_HILLS";
	}
	else if (unk_0xF005CCA4263DF67F("TongvaV", &cVar0))
	{
		return "LOCATION_TONGVA_VALLEY";
	}
	else if (unk_0xF005CCA4263DF67F("East_V", &cVar0))
	{
		return "LOCATION_EAST_VINEWOOD";
	}
	else if (unk_0xF005CCA4263DF67F("Zenora", &cVar0))
	{
		return "LOCATION_SENORA_FREEWAY";
	}
	else if (unk_0xF005CCA4263DF67F("Slab", &cVar0))
	{
		return "LOCATION_SLAB_CITY";
	}
	else if (unk_0xF005CCA4263DF67F("SKID", &cVar0))
	{
		return "LOCATION_MISSION_ROW";
	}
	else if (unk_0xF005CCA4263DF67F("SLSant", &cVar0))
	{
		return "LOCATION_SOUTH_LOS_SANTOS";
	}
	else if (unk_0xF005CCA4263DF67F("Stad", &cVar0))
	{
		return "LOCATION_MAZE_BANK_ARENA";
	}
	else if (unk_0xF005CCA4263DF67F("Tatamo", &cVar0))
	{
		return "LOCATION_TATAVIAM_MOUNTAINS";
	}
	else if (unk_0xF005CCA4263DF67F("Termina", &cVar0))
	{
		return "LOCATION_TERMINAL";
	}
	else if (unk_0xF005CCA4263DF67F("TEXTI", &cVar0))
	{
		return "LOCATION_TEXTILE_CITY";
	}
	else if (unk_0xF005CCA4263DF67F("WVine", &cVar0))
	{
		return "LOCATION_WEST_VINEWOOD";
	}
	else if (unk_0xF005CCA4263DF67F("UtopiaG", &cVar0))
	{
		return "LOCATION_UTOPIA_GARDENS";
	}
	else if (unk_0xF005CCA4263DF67F("Vesp", &cVar0))
	{
		return "LOCATION_VESPUCCI";
	}
	else if (unk_0xF005CCA4263DF67F("VCana", &cVar0))
	{
		return "LOCATION_VESPUCCI_CANALS";
	}
	else if (unk_0xF005CCA4263DF67F("Vine", &cVar0))
	{
		return "LOCATION_VINEWOOD";
	}
	else if (unk_0xF005CCA4263DF67F("WMirror", &cVar0))
	{
		return "LOCATION_W_MIRROR_DRIVE";
	}
	else if (unk_0xF005CCA4263DF67F("WindF", &cVar0))
	{
		return "LOCATION_RON_ALTERNATES_WIND_WARM";
	}
	else if (unk_0xF005CCA4263DF67F("Zancudo", &cVar0))
	{
		return "LOCATION_ZANCUDO_RIVER";
	}
	else if (unk_0xF005CCA4263DF67F("SanChia", &cVar0))
	{
		return "LOCATION_SAN_CHIANSKI_MOUNTAIN_RANGE";
	}
	else if (unk_0xF005CCA4263DF67F("STRAW", &cVar0))
	{
		return "LOCATION_STRAWBERRY";
	}
	else if (unk_0xF005CCA4263DF67F("zQ_UAR", &cVar0))
	{
		return "LOCATION_DAVIS_QUARTZ";
	}
	else if (unk_0xF005CCA4263DF67F("ZP_ORT", &cVar0))
	{
		return "LOCATION_PORT_OF_SOUTH_LOS_SANTOS";
	}
	return "";
}

Vector3 func_49(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	Var0 = { 0f, 0f, 0f };
	iVar5 = unk_0x04FA724B68B59AC3(iParam0);
	if (iVar5 == 1)
	{
		iVar1 = unk_0x255EBCF840E6A9BB(iParam0);
		if (unk_0x80FF6C016CDB0FAF(iVar1, 0))
		{
			Var0 = { unk_0x3E4D3CCC220BDFB1(iVar1, true) };
		}
	}
	else if (iVar5 == 2)
	{
		iVar2 = unk_0x9048E8838E822F21(unk_0x255EBCF840E6A9BB(iParam0));
		if (!unk_0x5AEB5DDFFAD43CA5(iVar2))
		{
			Var0 = { unk_0x3E4D3CCC220BDFB1(iVar2, true) };
		}
	}
	else if (iVar5 == 3)
	{
		iVar3 = unk_0x12A172E7609C3E0E(unk_0x255EBCF840E6A9BB(iParam0));
		if (unk_0xAE06B9E39EBDE049(iVar3))
		{
			Var0 = { unk_0x3E4D3CCC220BDFB1(iVar3, true) };
		}
	}
	else if (iVar5 == 4)
	{
		Var0 = { unk_0x41A1ED9BB4ED4772(iParam0) };
	}
	else if (iVar5 == 6)
	{
		iVar4 = unk_0x6B251360897FB3D0(iParam0);
		if (unk_0xF10E878C0879E7E9(iVar4))
		{
			Var0 = { unk_0xC8C0D624848783ED(iVar4) };
		}
	}
	else if (iVar5 == 5)
	{
		Var0 = { unk_0x41A1ED9BB4ED4772(iParam0) };
	}
	return Var0;
}

void func_50(int iParam0, char* sParam1, int iParam2)
{
	unk_0xFDCFA91E51EDB61F(iParam0, sParam1, func_51(iParam2), 1);
}

int func_51(int iParam0)
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

int func_52(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
	{
		if (unk_0x6F683C1C0BB1BA8D(iParam0))
		{
			func_54("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(DriverID)\n");
			return 1;
		}
	}
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0x6F683C1C0BB1BA8D(unk_0x9B0761B4C3EB8BC7()))
		{
			func_54("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(PLAYER_PED_ID())\n");
			return 1;
		}
	}
	if (func_53())
	{
		func_54("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_ANY_CONVERSATION_ONGOING_OR_QUEUED()\n");
		return 1;
	}
	if (bParam1)
	{
		if (unk_0x2F80DB5A41D045E6())
		{
			func_54("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_MESSAGE_BEING_DISPLAYED()\n");
			return 1;
		}
	}
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0xA9612D351EFBCEE5(func_6()))
		{
			unk_0x611FFFF42603C2CD(func_6(), &iVar2, &iVar1);
			if (iVar1 > 0)
			{
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar0 = unk_0x1615D8CF888EABB9(func_6(), iVar2);
					if (!unk_0x5AEB5DDFFAD43CA5(iVar0))
					{
						if (unk_0x6F683C1C0BB1BA8D(iVar0))
						{
							func_54("\ntaxi_functions - IS_ANY_DIALOGUE_PLAYING - IS_AMBIENT_SPEECH_PLAYING(TempGroupPedID)\n");
							return 1;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return 0;
}

int func_53()
{
	if (Global_21005 != 0 || unk_0x6A5CC4A2C9D9ED8D())
	{
		return 1;
	}
	return 0;
}

void func_54(char* sParam0)
{
	func_55(sParam0);
}

void func_55(char* sParam0)
{
	if (unk_0xF005CCA4263DF67F(sParam0, sParam0))
	{
	}
}

int func_56(int iParam0)
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			unk_0xD2F202166691EDB2(joaat("SP0_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		case 1:
			unk_0xD2F202166691EDB2(joaat("SP1_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		case 2:
			unk_0xD2F202166691EDB2(joaat("SP2_TOTAL_CASH"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_57()
{
	func_58();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_58()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_61(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_60(unk_0x9B0761B4C3EB8BC7());
			if (func_59(iVar0) && (!func_40(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_59(Global_111858.f_2359.f_539.f_4321))
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

bool func_59(int iParam0)
{
	return iParam0 < 3;
}

int func_60(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_61(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_61(int iParam0)
{
	if (func_59(iParam0))
	{
		return func_62(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_62(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

int func_63()
{
	if (func_64(1) == func_57())
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0)
{
	return Global_111858.f_24900[iParam0 /*4*/];
}

void func_65()
{
	if (func_228())
	{
		func_226();
		func_225();
		func_224();
		if (!func_221())
		{
			func_215();
		}
		func_214();
		if (iLocal_821 != 4)
		{
			func_46(Global_110890, &iLocal_818);
			if (iLocal_821 != 0)
			{
				if (func_212())
				{
					if (unk_0x95EF219D38B20CFF(iLocal_111))
					{
						func_189();
						iLocal_58 = 1;
					}
				}
				func_180();
			}
		}
		switch (iLocal_821)
		{
			case 0:
				if (!unk_0x5AEB5DDFFAD43CA5(Global_110890) && unk_0x80FF6C016CDB0FAF(Global_110889, 0))
				{
					if (unk_0xACBCFA3095C5A434(Global_110890, Global_110889))
					{
						if (!unk_0x9934470AA0A08B57(Global_110890, &cLocal_824, "leanover_enter", 3) && !unk_0x9934470AA0A08B57(Global_110890, &cLocal_824, "leanover_idle", 3))
						{
							if (!func_2(Global_110890, -2118855366))
							{
								unk_0xDC3073F7CC12181D(Global_110890, Global_110889, 1, 1000000);
							}
						}
					}
				}
				if (func_179())
				{
					if (func_178() && !unk_0x11B7C25143EE2F29(unk_0x9B0761B4C3EB8BC7()))
					{
						func_189();
						iLocal_818 = 1;
						iLocal_820 = 0;
						Global_110926 = 0;
						iLocal_88 = 0;
						iLocal_66 = 0;
						iLocal_56 = 0;
						iLocal_58 = 1;
						func_177();
						iLocal_821 = 1;
					}
				}
				break;
			
			case 1:
				if (!unk_0x5AEB5DDFFAD43CA5(Global_110890) && unk_0x80FF6C016CDB0FAF(Global_110889, 0))
				{
					if (unk_0xACBCFA3095C5A434(Global_110890, Global_110889))
					{
						if (!unk_0x9934470AA0A08B57(Global_110890, &cLocal_824, "leanover_enter", 3) && !unk_0x9934470AA0A08B57(Global_110890, &cLocal_824, "leanover_idle", 3))
						{
							if (!func_2(Global_110890, -2118855366))
							{
								unk_0xDC3073F7CC12181D(Global_110890, Global_110889, 1, 1000000);
							}
						}
					}
				}
				func_176(&Global_110889, iLocal_839);
				if (func_175())
				{
					unk_0x1C7D71D8BB1A7035(joaat("SP_NUMBER_OF_TAXIS_USED"), 1f);
					iLocal_58 = 1;
					iLocal_821 = 2;
				}
				break;
			
			case 2:
				if (func_175())
				{
					func_172();
				}
				break;
			
			case 3:
				func_171();
				break;
			
			case 4:
				func_81();
				break;
		}
		func_66();
	}
	else
	{
		iLocal_822 = 2;
	}
}

void func_66()
{
	char* sVar0;
	
	if (!func_221())
	{
		if (unk_0x95EF219D38B20CFF(iLocal_112))
		{
			if (iLocal_821 != 0)
			{
				sVar0 = unk_0xED026A379B794F61(2, 218, true);
				if (!unk_0xF005CCA4263DF67F(sLocal_107, sVar0))
				{
					sLocal_107 = sVar0;
					iLocal_58 = 1;
				}
				if (iLocal_58)
				{
					Local_814 = { func_80() };
					func_78(&uLocal_113);
					func_77(0, 75, "TXM_EXIT", &uLocal_113, 0, 361);
					if (iLocal_91 > 1)
					{
						func_77(2, 218, "TXM_CDES", &uLocal_113, 0, 361);
					}
					if (!bLocal_60)
					{
						if (iLocal_91 > 0)
						{
							func_77(2, 176, "TXM_SLCT", &uLocal_113, 0, 361);
						}
					}
					else if (iLocal_821 == 2)
					{
						func_77(2, 177, "TXM_STOP", &uLocal_113, 0, 361);
						if (bLocal_59)
						{
							func_77(2, 176, "TXM_SLCT", &uLocal_113, 0, 361);
						}
						if (func_76())
						{
							func_77(2, 176, "TXM_SKIP", &uLocal_113, 0, 361);
						}
						if (!bLocal_64)
						{
							func_77(2, 179, "TXM_HURY", &uLocal_113, 0, 361);
						}
					}
					else if (iLocal_821 == 3)
					{
						func_77(2, 177, "TXM_STRT", &uLocal_113, 0, 361);
						if (bLocal_59)
						{
							func_77(2, 176, "TXM_SLCT", &uLocal_113, 0, 361);
						}
					}
					iLocal_58 = 0;
				}
				unk_0xCA1F114B668562E5(unk_0xC48A590C39E17456());
				unk_0xD8D551845E3EA730(0);
				func_75(1);
				func_74(1);
				func_67(&iLocal_112, &Local_814, &uLocal_113, func_73(&uLocal_113));
			}
		}
		else
		{
			iLocal_112 = unk_0x5DEA4192B46CB99B("instructional_buttons");
		}
	}
	else
	{
		unk_0x2E352DDBBF674246(&iLocal_112);
		iLocal_58 = 1;
	}
}

void func_67(int iParam0, var uParam1, var uParam2, int iParam3)
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
		if (unk_0x95EF219D38B20CFF(*iParam0))
		{
			if (unk_0xF8EDFF98A9C94C74())
			{
				unk_0x830F007E19C63E14(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0xF1B28F753235CE2A(false);
				unk_0xE1FDD153F5858534();
			}
			unk_0x830F007E19C63E14(*iParam0, "CLEAR_ALL");
			unk_0xE1FDD153F5858534();
		}
		func_72(uParam2);
	}
	if (Global_1315735 < 2)
	{
		func_74(1);
	}
	if (*uParam2 == 0)
	{
		if (!unk_0x95EF219D38B20CFF(*iParam0))
		{
			*iParam0 = unk_0x5DEA4192B46CB99B("instructional_buttons");
		}
		if (unk_0x95EF219D38B20CFF(*iParam0))
		{
			unk_0x903663B04BCCB2FB(*iParam0, "CLEAR_ALL");
			if (unk_0xF8EDFF98A9C94C74())
			{
				unk_0x830F007E19C63E14(*iParam0, "TOGGLE_MOUSE_BUTTONS");
				unk_0xF1B28F753235CE2A(true);
				unk_0xE1FDD153F5858534();
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < uParam2->f_693)
			{
				if (unk_0xCE990E643CD9D0E5(uParam2->f_689, iVar0))
				{
					unk_0x830F007E19C63E14(*iParam0, "SET_DATA_SLOT");
					unk_0xAD291B8F75D737AD(iVar0);
					if (!unk_0xCE990E643CD9D0E5(uParam2->f_690, iVar0))
					{
						iVar1 = uParam2->f_1[iVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[iVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[iVar0 /*57*/].f_56;
						func_71(unk_0xED026A379B794F61(iVar1, iVar2, true));
						if (iVar3 < 361)
						{
							func_71(unk_0xED026A379B794F61(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[iVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[iVar0 /*57*/].f_55;
						func_71(unk_0x32F8D6499042A233(iVar4, iVar5, true));
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
						func_70(&(uParam2->f_1[iVar0 /*57*/].f_32));
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
					unk_0x830F007E19C63E14(*iParam0, "SET_DATA_SLOT");
					unk_0xAD291B8F75D737AD(iVar0);
					func_71(&(uParam2->f_1[iVar0 /*57*/]));
					if (!unk_0x7BCC91F3C1CF24E8(&(uParam2->f_1[iVar0 /*57*/].f_16)))
					{
						func_71(&(uParam2->f_1[iVar0 /*57*/].f_16));
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
						func_70(&(uParam2->f_1[iVar0 /*57*/].f_32));
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
			unk_0x830F007E19C63E14(*iParam0, "SET_MAX_WIDTH");
			unk_0x49B9B8101B158AEE(uParam2->f_699);
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(*iParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
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
		func_69(*iParam0, uParam1);
	}
	func_68();
}

void func_68()
{
	unk_0x4CB4237D8858ADA6(7);
	unk_0x4CB4237D8858ADA6(6);
	unk_0x4CB4237D8858ADA6(8);
	unk_0x4CB4237D8858ADA6(9);
}

void func_69(int iParam0, var uParam1)
{
	unk_0x37FC7E88C7659D33(iParam0, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_70(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

void func_71(char* sParam0)
{
	unk_0x54AED56A452DCB4F(sParam0);
}

void func_72(var uParam0)
{
	uParam0->f_692 = 0;
}

int func_73(var uParam0)
{
	return uParam0->f_692;
}

void func_74(int iParam0)
{
	Global_1315735 = iParam0;
}

void func_75(int iParam0)
{
	Global_1378744.f_1121 = iParam0;
}

int func_76()
{
	if (iLocal_821 != 2)
	{
		return 0;
	}
	if (bLocal_59)
	{
		return 0;
	}
	if (fLocal_83 < 50f)
	{
		return 0;
	}
	if (unk_0x40397A9A17EEC1C5(iLocal_68))
	{
		if (unk_0xC516FEEB950FFD58(iLocal_68))
		{
			return 0;
		}
	}
	return 1;
}

void func_77(int iParam0, int iParam1, char* sParam2, var uParam3, bool bParam4, int iParam5)
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
	uParam3->f_1[iVar0 /*57*/].f_56 = iParam5;
	if (bParam4)
	{
		unk_0xBE20AB8238688965(&(uParam3->f_691), iVar0);
		if (iParam5 < 361)
		{
		}
	}
	uParam3->f_693++;
}

void func_78(var uParam0)
{
	func_79(uParam0);
	uParam0->f_692 = 1;
}

void func_79(var uParam0)
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

struct<9> func_80()
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

void func_81()
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	
	fVar2 = 1f;
	unk_0xABAEEAE8870E046D(0);
	unk_0xABAEEAE8870E046D(1);
	unk_0xABAEEAE8870E046D(2);
	switch (iLocal_823)
	{
		case 0:
			func_163(1);
			if (func_162(iLocal_89, 500))
			{
				unk_0x1D40553EDD51A1B8(250);
				unk_0x17E478571720218F("FADE_OUT_WORLD_250MS_SCENE");
				iLocal_823 = 1;
			}
			break;
		
		case 1:
			if (unk_0x03DB5C6AABF8DA46() && unk_0x306BF588BD8151E8("FADE_OUT_WORLD_250MS_SCENE"))
			{
				if (unk_0x80FF6C016CDB0FAF(Global_110889, 0))
				{
					unk_0x0A9768A52FEE2064(Global_110889, false);
				}
				unk_0xB80B2936A29B2666();
				unk_0x3ED9330214992278(false, false, 3000, true, 0, 0);
				if (unk_0xA9A353D835A7867C("taxi"))
				{
					unk_0x07FF72DF7F314523("taxi");
				}
				if (unk_0xAE06B9E39EBDE049(iLocal_109))
				{
					unk_0x315F7D8C33F0AB37(&iLocal_109);
					unk_0x74528AC0906CBABE(iLocal_108);
				}
				if (unk_0xC516FEEB950FFD58(iLocal_68))
				{
					unk_0x92B14FF2F31BE63D(0);
					Global_110906 = 0;
					unk_0x856549C07003344B(iLocal_68, false);
					unk_0x3ED9330214992278(false, false, 3000, true, 0, 0);
					unk_0xEAF342510C682548();
					unk_0x49EAC3B3479D60FE();
					unk_0x70EEA67CF09450BA(0);
				}
				func_160(iLocal_839);
				iLocal_89 = unk_0x578C4EF320340AF7();
				if (bLocal_59)
				{
					bLocal_61 = false;
					bLocal_59 = false;
					Local_43 = { Local_819[iLocal_92 /*3*/] };
				}
				if (!bLocal_61)
				{
					iLocal_88 = 0;
					iLocal_820 = 0;
					iLocal_823 = 2;
				}
				else
				{
					func_159();
					iLocal_823 = 3;
				}
			}
			else
			{
				unk_0x17E478571720218F("FADE_OUT_WORLD_250MS_SCENE");
			}
			break;
		
		case 2:
			if (func_126(&Local_43, &Global_110896, &Global_110902))
			{
				func_159();
				iLocal_823 = 3;
			}
			break;
		
		case 3:
			if (Global_76849 == -1)
			{
				func_125();
				func_124();
				func_122();
				func_118();
				func_117();
				unk_0x555EE41D7C7078E6(Global_110896, 5f, 1, 0, 0, false);
				func_113(1097859072);
				if (!unk_0x5AEB5DDFFAD43CA5(Global_110890) && unk_0x80FF6C016CDB0FAF(Global_110889, 0))
				{
					unk_0x03D382CB0B44E2FC(Global_110889, Global_110896, 1, false, 0, 1);
					unk_0xE922BAA80E8F9324(Global_110889, Global_110902);
					unk_0x6A8F948698B360B4(Global_110889, true);
				}
				unk_0x4C4FC7841A5FB983(0f);
				unk_0x7965943E39128B42(0f, 1065353216);
				unk_0xF990EDED7D25FB88();
				unk_0x555EE41D7C7078E6(Global_110896, 5000f, 1, 0, 0, false);
				unk_0x4BAC0F0B99F7DCF9(Global_110896, 5000f, 0);
				unk_0x801B883D25479F23(Global_110896, 30f, 0);
				unk_0x6D5673CA7E01D619(Global_110896, 5000f);
				unk_0x57B4EC087C9D7478(Global_110896, 5000f);
				if (Global_95877 != -1)
				{
					func_112(Global_95877, 1);
					func_111(Global_95877);
				}
				iLocal_815 = func_110(Local_43.x);
				if (iLocal_815 != -1)
				{
					func_112(iLocal_815, 1);
				}
				iLocal_57 = 0;
				iLocal_823 = 4;
			}
			break;
		
		case 4:
			if (unk_0xF16CDD1D05F4411A(Global_110896, 4500f, 0))
			{
				iLocal_57 = 1;
				iLocal_823 = 5;
			}
			else if (func_162(iLocal_89, 2500))
			{
				iLocal_823 = 5;
			}
			break;
		
		case 5:
			if (unk_0xE9159DB182CF0841())
			{
				if (unk_0x0C7F95EB5CFEFB8B())
				{
					if (iLocal_815 != -1)
					{
						unk_0xF990EDED7D25FB88();
						iLocal_57 = 0;
						func_108(iLocal_815);
						func_112(iLocal_815, 0);
					}
					iLocal_823 = 6;
				}
				else if (func_162(iLocal_89, 20000))
				{
					if (iLocal_815 != -1)
					{
						unk_0xF990EDED7D25FB88();
						iLocal_57 = 0;
						func_108(iLocal_815);
						func_112(iLocal_815, 0);
					}
					iLocal_823 = 6;
				}
			}
			else
			{
				if (iLocal_815 != -1)
				{
					func_108(iLocal_815);
					func_112(iLocal_815, 0);
				}
				iLocal_57 = 0;
				iLocal_823 = 6;
			}
			break;
		
		case 6:
			func_107();
			unk_0x5800807F2B551FCA();
			unk_0x4EDACCA1B614E2BA();
			unk_0xB8866F4BAE5E8ABA();
			if (iLocal_815 != -1)
			{
				bVar1 = true;
				if (Global_89743[iLocal_815 /*34*/].f_13 == -1 && Global_89743[iLocal_815 /*34*/].f_14 == -1)
				{
					bVar1 = false;
				}
				if (bVar1)
				{
					if (((func_57() == 0 && !unk_0xCE990E643CD9D0E5(Global_89743[iLocal_815 /*34*/].f_15, 8)) || (func_57() == 1 && !unk_0xCE990E643CD9D0E5(Global_89743[iLocal_815 /*34*/].f_15, 9))) || (func_57() == 2 && !unk_0xCE990E643CD9D0E5(Global_89743[iLocal_815 /*34*/].f_15, 10)))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					if (func_105(Global_89743[iLocal_815 /*34*/].f_13, Global_89743[iLocal_815 /*34*/].f_14))
					{
						bVar1 = false;
					}
				}
				if (bVar1)
				{
					unk_0x3C37ED7460FDB99E(Global_89743[iLocal_815 /*34*/].f_13, 0, 0);
				}
			}
			iLocal_105 = func_98(1129381888, 1);
			iLocal_823 = 7;
			break;
		
		case 7:
			bVar0 = true;
			if (func_97(iLocal_105))
			{
				bVar0 = false;
			}
			if (!func_87(Global_110896))
			{
				bVar0 = false;
			}
			if (!func_86())
			{
				bVar0 = false;
			}
			if (!unk_0x8A83B64FAAF9045D())
			{
				bVar0 = false;
			}
			if (iLocal_57)
			{
				if (unk_0xE9159DB182CF0841())
				{
					if (!unk_0x0C7F95EB5CFEFB8B())
					{
						bVar0 = false;
					}
				}
			}
			if (iLocal_815 != -1 && Global_95882)
			{
				bVar0 = false;
			}
			if (func_162(iLocal_89, 29500))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				if (iLocal_57)
				{
					if (unk_0xE9159DB182CF0841())
					{
						unk_0xF990EDED7D25FB88();
					}
					iLocal_57 = 0;
				}
				if (iLocal_67)
				{
					iLocal_67 = 0;
					unk_0xE5CC8E2D904E42CE(Global_110896 + Vector(100f, 0f, 0f), &fVar2, 0, 0);
					if (fVar2 > Global_110896.f_2)
					{
						Global_110896.f_2 = (fVar2 + 0.5f);
					}
				}
				func_113(12f);
				func_83();
				if (!unk_0x5AEB5DDFFAD43CA5(Global_110890) && unk_0x80FF6C016CDB0FAF(Global_110889, 0))
				{
					unk_0x6A8F948698B360B4(Global_110889, false);
					unk_0xE922BAA80E8F9324(Global_110889, Global_110902);
					unk_0x03D382CB0B44E2FC(Global_110889, Global_110896, 1, false, 0, 1);
					unk_0xB11D151E210D4FAC(Global_110889, 1084227584);
					unk_0xDC3073F7CC12181D(Global_110890, Global_110889, 24, 5000);
				}
				iLocal_89 = unk_0x578C4EF320340AF7();
				iLocal_823 = 8;
			}
			break;
		
		case 8:
			if (func_162(iLocal_89, 500))
			{
				if (unk_0x306BF588BD8151E8("FADE_OUT_WORLD_250MS_SCENE"))
				{
					unk_0xFA07F8BEBDAAFBA8("FADE_OUT_WORLD_250MS_SCENE");
				}
				if (unk_0x80FF6C016CDB0FAF(Global_110889, 0))
				{
					unk_0x0A9768A52FEE2064(Global_110889, true);
				}
				if (!func_82())
				{
					unk_0xFD45D90342D2A0CD(250);
				}
				iLocal_823 = 9;
			}
			break;
		
		case 9:
			if (unk_0x87F0CB19476706C3() || func_82())
			{
				if (((!Global_95883 && iLocal_815 != -1) && iLocal_815 != 72) && iLocal_815 != 87)
				{
					func_111(iLocal_815);
				}
				func_163(0);
				if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
				{
					if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Global_110889, true))
					{
						unk_0x0AB756271BADC8DF(unk_0x9B0761B4C3EB8BC7(), 0, 0);
					}
				}
				unk_0xDC3073F7CC12181D(Global_110890, Global_110889, 24, 5000);
				unk_0xCBA6B2B569DCAFD8(Global_110890, true);
				bLocal_65 = true;
				iLocal_822 = 2;
				iLocal_823 = 10;
			}
			break;
		
		case 10:
			break;
	}
}

bool func_82()
{
	return unk_0xCE990E643CD9D0E5(Global_98955.f_20, 13);
}

void func_83()
{
	struct<3> Var0;
	float fVar1;
	
	switch (iLocal_816)
	{
		case 92:
			Var0 = { func_85(229, 0) };
			fVar1 = unk_0x272784C60C397DB6(Global_110896, Var0, true);
			if (fVar1 < 100f)
			{
				Var0 = { func_84(Global_110896 - Var0) };
				Var0 = { (Global_110896 + (Var0.x * IntToFloat((100 - round(fVar1))))), (Global_110896.f_1 + (Var0.f_1 * IntToFloat((100 - round(fVar1))))), Global_110896.f_2 };
				unk_0xB58FB85092C26027(Var0, &Global_110896, &Global_110902, 1, 1077936128, 0);
				unk_0x03D382CB0B44E2FC(Global_110889, Global_110896, 1, false, 0, 1);
				unk_0xE922BAA80E8F9324(Global_110889, Global_110902);
			}
			break;
	}
}

Vector3 func_84(struct<3> Param0)
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

Vector3 func_85(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_31346[iVar0 /*23*/][iParam1 /*3*/];
}

bool func_86()
{
	return !Global_75654.f_553;
}

int func_87(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = func_95(Param0);
	if (!func_94(&iLocal_50))
	{
		iLocal_49 = 0;
		func_92(&iLocal_50, 0f);
	}
	if (iVar0 == iLocal_49 || func_89(&iLocal_50) > 8f)
	{
		func_88(&iLocal_50);
		iLocal_49 = 0;
		return 1;
	}
	return 0;
}

void func_88(int iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

float func_89(int iParam0)
{
	if (func_94(iParam0))
	{
		if (func_91(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_90(unk_0xCE990E643CD9D0E5(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_90(bool bParam0)
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

bool func_91(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 2);
}

void func_92(int iParam0, float fParam1)
{
	if (!func_94(iParam0))
	{
		func_93(iParam0, fParam1);
	}
}

void func_93(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_90(unk_0xCE990E643CD9D0E5(*iParam0, 4)) - fParam1);
	unk_0xBE20AB8238688965(iParam0, 1);
	unk_0xD2459066EA58CE43(iParam0, 2);
	iParam0->f_2 = 0f;
}

bool func_94(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 1);
}

int func_95(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	if (func_96(0, 4))
	{
		iVar1 = 70;
		while (iVar1 <= 72)
		{
			fVar2 = vdist2(func_85(iVar1, 0), Param0);
			if (fVar2 <= 1225f)
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_96(0, 0))
	{
		iVar1 = 125;
		while (iVar1 <= 137)
		{
			fVar2 = vdist2(func_85(iVar1, 0), Param0);
			if (fVar2 <= 1225f)
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	if (func_96(0, 10))
	{
		iVar1 = 125;
		fVar2 = vdist2(func_85(iVar1, 0), Param0);
		if (fVar2 <= 1225f)
		{
			iVar0++;
		}
	}
	return iVar0;
}

bool func_96(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = unk_0xCE990E643CD9D0E5(Global_111858.f_9081.f_99.f_219[iParam0], iParam1);
	return bVar0;
}

int func_97(int iParam0)
{
	if (iParam0 != -1)
	{
		if (!Global_110945[iParam0 /*10*/].f_1)
		{
			return 1;
		}
	}
	return 0;
}

int func_98(int iParam0, bool bParam1)
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
	fVar3 = iParam0;
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (func_59(func_57()))
		{
			iVar5 = func_104();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 2) && !unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 3))
				{
					func_99(iVar1, &Var0);
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

void func_99(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_100(uParam1, "Abigail1", func_102(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 1:
			func_100(uParam1, "Abigail2", func_102(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 2:
			func_100(uParam1, "Barry1", func_102(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 3:
			func_100(uParam1, "Barry2", func_102(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_101(iParam0), 1, 1);
			break;
		
		case 4:
			func_100(uParam1, "Barry3", func_102(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 5:
			func_100(uParam1, "Barry3A", func_102(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 6:
			func_100(uParam1, "Barry3C", func_102(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 7:
			func_100(uParam1, "Barry4", func_102(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_101(iParam0), 0, 0);
			break;
		
		case 8:
			func_100(uParam1, "Dreyfuss1", func_102(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 9:
			func_100(uParam1, "Epsilon1", func_102(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 10:
			func_100(uParam1, "Epsilon2", func_102(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 11:
			func_100(uParam1, "Epsilon3", func_102(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 12:
			func_100(uParam1, "Epsilon4", func_102(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 13:
			func_100(uParam1, "Epsilon5", func_102(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 14:
			func_100(uParam1, "Epsilon6", func_102(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 15:
			func_100(uParam1, "Epsilon7", func_102(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 16:
			func_100(uParam1, "Epsilon8", func_102(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 17:
			func_100(uParam1, "Extreme1", func_102(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 18:
			func_100(uParam1, "Extreme2", func_102(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 19:
			func_100(uParam1, "Extreme3", func_102(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 20:
			func_100(uParam1, "Extreme4", func_102(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 21:
			func_100(uParam1, "Fanatic1", func_102(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_101(iParam0), 1, 0);
			break;
		
		case 22:
			func_100(uParam1, "Fanatic2", func_102(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_101(iParam0), 1, 0);
			break;
		
		case 23:
			func_100(uParam1, "Fanatic3", func_102(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_101(iParam0), 0, 1);
			break;
		
		case 24:
			func_100(uParam1, "Hao1", func_102(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_101(iParam0), 0, 1);
			break;
		
		case 25:
			func_100(uParam1, "Hunting1", func_102(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 26:
			func_100(uParam1, "Hunting2", func_102(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 27:
			func_100(uParam1, "Josh1", func_102(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 28:
			func_100(uParam1, "Josh2", func_102(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_101(iParam0), 1, 1);
			break;
		
		case 29:
			func_100(uParam1, "Josh3", func_102(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_101(iParam0), 1, 1);
			break;
		
		case 30:
			func_100(uParam1, "Josh4", func_102(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 31:
			func_100(uParam1, "Maude1", func_102(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 32:
			func_100(uParam1, "Minute1", func_102(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 33:
			func_100(uParam1, "Minute2", func_102(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 34:
			func_100(uParam1, "Minute3", func_102(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 35:
			func_100(uParam1, "MrsPhilips1", func_102(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 36:
			func_100(uParam1, "MrsPhilips2", func_102(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 37:
			func_100(uParam1, "Nigel1", func_102(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 38:
			func_100(uParam1, "Nigel1A", func_102(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_101(iParam0), 1, 1);
			break;
		
		case 39:
			func_100(uParam1, "Nigel1B", func_102(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_101(iParam0), 1, 1);
			break;
		
		case 40:
			func_100(uParam1, "Nigel1C", func_102(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_101(iParam0), 1, 1);
			break;
		
		case 41:
			func_100(uParam1, "Nigel1D", func_102(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_101(iParam0), 1, 1);
			break;
		
		case 42:
			func_100(uParam1, "Nigel2", func_102(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_101(iParam0), 1, 1);
			break;
		
		case 43:
			func_100(uParam1, "Nigel3", func_102(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_101(iParam0), 1, 1);
			break;
		
		case 44:
			func_100(uParam1, "Omega1", func_102(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 45:
			func_100(uParam1, "Omega2", func_102(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 46:
			func_100(uParam1, "Paparazzo1", func_102(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 47:
			func_100(uParam1, "Paparazzo2", func_102(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 48:
			func_100(uParam1, "Paparazzo3", func_102(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 49:
			func_100(uParam1, "Paparazzo3A", func_102(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 50:
			func_100(uParam1, "Paparazzo3B", func_102(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 51:
			func_100(uParam1, "Paparazzo4", func_102(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 52:
			func_100(uParam1, "Rampage1", func_102(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 54:
			func_100(uParam1, "Rampage3", func_102(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 55:
			func_100(uParam1, "Rampage4", func_102(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 56:
			func_100(uParam1, "Rampage5", func_102(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_101(iParam0), 0, 0);
			break;
		
		case 53:
			func_100(uParam1, "Rampage2", func_102(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_101(iParam0), 1, 0);
			break;
		
		case 57:
			func_100(uParam1, "TheLastOne", func_102(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 58:
			func_100(uParam1, "Tonya1", func_102(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 59:
			func_100(uParam1, "Tonya2", func_102(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 60:
			func_100(uParam1, "Tonya3", func_102(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 61:
			func_100(uParam1, "Tonya4", func_102(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		case 62:
			func_100(uParam1, "Tonya5", func_102(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_101(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_100(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_101(int iParam0)
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

struct<2> func_102(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_103(iParam0) };
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

struct<2> func_103(int iParam0)
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

int func_104()
{
	func_58();
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

bool func_105(int iParam0, int iParam1)
{
	return func_106(unk_0x1F596C965B00E290(), iParam0, iParam1);
}

int func_106(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 24)
	{
		iParam1 = 0;
	}
	if (iParam1 < 0 || iParam1 >= 24)
	{
		return 0;
	}
	if (iParam2 == 24)
	{
		iParam2 = 0;
	}
	if (iParam2 < 0 || iParam2 >= 24)
	{
		return 0;
	}
	if (iParam1 == iParam2)
	{
		return 1;
	}
	bVar0 = iParam2 < iParam1;
	iVar1 = iParam1;
	iVar2 = iParam2;
	if (bVar0)
	{
		iVar2 = 24;
	}
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	if (!bVar0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = iParam2;
	if (iParam0 >= iVar1 && iParam0 < iVar2)
	{
		return 1;
	}
	return 0;
}

void func_107()
{
	Global_75654.f_553 = 1;
	Global_75654.f_554 = 0;
}

void func_108(int iParam0)
{
	if (func_109(iParam0))
	{
		Global_95878 = iParam0;
		Global_95882 = 1;
		return;
	}
}

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 67:
		case 90:
		case 0:
		case 31:
		case 27:
		case 28:
		case 50:
		case 51:
		case 52:
		case 53:
		case 56:
		case 57:
			return 0;
			break;
	}
	return 1;
}

int func_110(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_95888[iVar0 /*17*/])
		{
			if (Global_95888[iVar0 /*17*/].f_9 != 263)
			{
				if (Global_31346[Global_95888[iVar0 /*17*/].f_9 /*23*/].f_19 == iParam0)
				{
					return Global_95888[iVar0 /*17*/].f_5;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

void func_111(int iParam0)
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

void func_112(int iParam0, bool bParam1)
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

void func_113(float fParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	
	if (!(((((((func_116(89) || func_116(88)) || func_116(92)) || func_116(33)) || func_115() == 89) || func_115() == 88) || func_115() == 92) || func_115() == 33))
	{
		return;
	}
	iVar0 = 0;
	bVar1 = false;
	iVar2 = 1;
	Var3 = { Global_110896 };
	while (!bVar1 && iVar2 < 10)
	{
		bVar1 = true;
		if (func_114(&iVar0, Var3, fParam0))
		{
			bVar1 = false;
			if (unk_0x204D69DA02AB1105(Global_110896, iVar2, &Var3, 1, 3f, 0f))
			{
				iVar2++;
			}
		}
	}
	if (vdist2(Var3, Global_110896) > 2f)
	{
		unk_0x6AF63A4C741270B8(Var3, 0, &Global_110896, 0);
	}
}

int func_114(int iParam0, struct<3> Param1, float fParam2)
{
	int iVar0[5];
	int iVar1;
	
	iVar0[0] = joaat("crusader");
	iVar0[1] = joaat("barracks");
	iVar0[2] = joaat("trash");
	iVar0[3] = joaat("boxville3");
	iVar0[4] = joaat("fbi2");
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		*iParam0 = unk_0xC2E2CC6CF95AF8A3(Param1, fParam2, iVar0[iVar1], 67590);
		if (*iParam0 != 0)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_115()
{
	return Global_77095;
}

int func_116(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	if (Global_92940[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_89707)
	{
		if (Global_89707[iVar0 /*5*/] != -1)
		{
			if (Global_77102.f_109[Global_89707[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_117()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_73812)
	{
		switch (Global_61942[Global_73813[iVar0 /*9*/] /*13*/])
		{
			case 1:
				Global_73813[iVar0 /*9*/].f_3 = 3;
				break;
			
			case 4:
				if (Global_61725)
				{
					Global_73813[iVar0 /*9*/].f_3 = 3;
				}
				break;
		}
		iVar0++;
	}
}

void func_118()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	iVar2 = 0;
	if (iVar1 == 0)
	{
		if (iVar2 == 0)
		{
		}
	}
	fVar0 = func_121(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), Global_110896);
	if (bLocal_64)
	{
		iVar1 = floor(((fVar0 / 200f) / 60f));
		iVar2 = round(((fVar0 / 200f) - (60f * to_float(iVar1))));
	}
	else
	{
		iVar1 = floor(((fVar0 / 100f) / 60f));
		iVar2 = round(((fVar0 / 100f) - (60f * to_float(iVar1))));
	}
	unk_0x5FBCC63C80BBBFE1(iVar1, iVar2, 0);
	func_119((to_float((iVar1 * 60 + iVar2)) / 60f));
}

void func_119(float fParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_94(&(Global_111858.f_18099.f_175[iVar0 /*19*/].f_5)))
		{
			func_120(&(Global_111858.f_18099.f_175[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_94(&(Global_111858.f_18099.f_362[iVar1 /*3*/])))
		{
			func_120(&(Global_111858.f_18099.f_362[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	unk_0x553F30BE4A085845();
}

void func_120(int iParam0, float fParam1)
{
	if (func_94(iParam0))
	{
		func_93(iParam0, (func_89(iParam0) + fParam1));
	}
}

float func_121(struct<3> Param0, struct<3> Param1)
{
	return (vmag(Param1 - Param0) * 1.3f);
}

void func_122()
{
	float fVar0;
	int iVar1;
	
	fVar0 = (((func_121(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), Global_110896) / 50f) * fLocal_73) * 2.4f);
	iVar1 = (floor(fLocal_82) + round(fVar0));
	fVar0 = to_float(iVar1);
	fVar0 = (fVar0 * 1.33f);
	iVar1 = round(fVar0);
	iLocal_101 = (iLocal_101 + iVar1);
	fLocal_82 = (fLocal_82 + IntToFloat(iLocal_101));
	func_123();
}

void func_123()
{
	iLocal_103 = (iLocal_103 + round((unk_0x9E3DAF75EFC49F5B() * 1000f)));
	if (iLocal_103 > 5000)
	{
		fLocal_82 = (fLocal_82 + fLocal_73);
		iLocal_103 = 0;
	}
	if (unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), Local_833, false) > 50f)
	{
		fLocal_82 = (fLocal_82 + fLocal_73);
		iLocal_103 = 0;
		Local_833 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false) };
	}
	iLocal_101 = ceil(fLocal_82);
	if (iLocal_101 != iLocal_102)
	{
		unk_0x830F007E19C63E14(iLocal_111, "SET_TAXI_PRICE");
		unk_0xAD291B8F75D737AD(iLocal_101);
		unk_0xE1FDD153F5858534();
		fLocal_83 = vdist(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), Global_110896);
		iLocal_102 = iLocal_101;
	}
}

void func_124()
{
	int iVar0;
	float fVar1;
	
	switch (iLocal_71)
	{
		case 0:
			iVar0 = joaat("SP0_DIST_AS_PASSENGER_TAXI");
			break;
		
		case 1:
			iVar0 = joaat("SP1_DIST_AS_PASSENGER_TAXI");
			break;
		
		case 2:
			iVar0 = joaat("SP2_DIST_AS_PASSENGER_TAXI");
			break;
		
		default:
			if (!func_40(14))
			{
			}
			break;
	}
	if (!func_40(14))
	{
		fVar1 = unk_0x0CF478954D6036DC(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), Global_110896);
		unk_0x1C7D71D8BB1A7035(iVar0, fVar1);
	}
}

void func_125()
{
	unk_0xF990EDED7D25FB88();
	if (unk_0x86F247DFAD57449B(Global_110568.f_218))
	{
		unk_0x53BA4C977A9AB012(Global_110568.f_218);
	}
}

int func_126(int iParam0, var uParam1, float fParam2)
{
	struct<3> Var0;
	
	if (unk_0x8F678487EEBD8CE4(*iParam0))
	{
		switch (iLocal_820)
		{
			case 0:
				iLocal_110 = 3;
				Local_829 = { func_49(*iParam0) };
				if (unk_0x8F678487EEBD8CE4(Global_110894) && *iParam0 == Global_110894)
				{
					*uParam1 = { Global_110899 };
					*fParam2 = Global_110903;
					Var0 = { Local_829 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_72 = vmag(Var0);
					iLocal_110 = 7;
					iLocal_820 = 4;
					return 1;
				}
				else
				{
					if (func_146(Local_829, uParam1, fParam2))
					{
						Var0 = { Local_829 - *uParam1 };
						Var0.f_2 = 0f;
						fLocal_72 = vmag(Var0);
						iLocal_110 = 7;
						iLocal_820 = 4;
						return 1;
					}
					iLocal_820 = 1;
					return 0;
				}
				break;
			
			case 1:
				if (func_135(Local_829, uParam1, fParam2, 1))
				{
					Var0 = { Local_829 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_72 = vmag(Var0);
					iLocal_110 = 7;
					iLocal_820 = 4;
					return 1;
				}
				else
				{
					iLocal_88 = 0;
					iLocal_820 = 2;
					return 0;
				}
				break;
			
			case 2:
				if (unk_0xAE06B9E39EBDE049(Global_110889))
				{
					if (func_127(&Global_110889, unk_0x3E4D3CCC220BDFB1(Global_110889, false), Local_829, uParam1, fParam2, &iLocal_88, iParam0, 1000))
					{
						iLocal_820 = 3;
						return 0;
					}
					else
					{
						return 0;
					}
				}
				break;
			
			case 3:
				if (func_146(*uParam1, uParam1, fParam2))
				{
					Var0 = { Local_829 - *uParam1 };
					Var0.f_2 = 0f;
					fLocal_72 = vmag(Var0);
					iLocal_110 = 7;
				}
				iLocal_820 = 4;
				return 1;
				break;
			
			case 4:
				return 1;
				break;
			
			case 5:
				break;
		}
	}
	return 0;
}

int func_127(var uParam0, struct<3> Param1, struct<3> Param2, var uParam3, float fParam4, int iParam5, var uParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	var uVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	
	fVar0 = 3f;
	fVar1 = 2.5f;
	iVar5 = 0;
	bVar13 = false;
	iVar14 = 1;
	if (!func_134(Param2))
	{
		iVar14 = 9;
	}
	iVar15 = 1;
	iVar18 = *iParam5 + 2;
	iVar19 = 50;
	func_132(Param1, Param2, &Local_830, &Local_831, iParam7);
	if (func_131(Local_830, Local_831))
	{
		while (!bVar13 && *iParam5 < iVar18)
		{
			if (Param2.f_2 == 1f)
			{
				fVar0 = 0f;
			}
			if (unk_0x1485BFBB1EC6FE22(Param2, *iParam5, uParam3, fParam4, &iVar6, iVar14, fVar0, fVar1))
			{
				iVar12 = unk_0xBD67304F930F21E4(*uParam3, 1, iVar14, 1077936128, 0);
				if (unk_0xB4D59BAA683CC8ED(iVar12))
				{
					if (unk_0x7F270824E67C2031(*uParam3, 1f, 1, &uVar4, &uVar3, &iVar8, &iVar7, &fVar10, iVar15))
					{
						if (*fParam4 < 90f || *fParam4 >= 270f)
						{
							bVar17 = true;
						}
						else
						{
							bVar17 = false;
						}
						bVar16 = false;
						if (bVar17)
						{
							if (iVar6 == iVar8)
							{
								bVar16 = true;
							}
						}
						else if (iVar6 == iVar7)
						{
							bVar16 = true;
						}
						if (fVar10 < 0f)
						{
							fVar9 = 0f;
						}
						else if (unk_0xEF445D270DD603D8(iVar12) || !unk_0x061CA1649D051C95(iVar12))
						{
							fVar9 = 0f;
						}
						else
						{
							if (bVar17)
							{
								if (bVar16)
								{
									fVar9 = (4.2f * (to_float(iVar8) * 0.5f));
								}
								else
								{
									fVar9 = (4.2f * to_float(iVar8));
								}
								if (bVar16)
								{
									if (iVar8 > 2)
									{
										fVar9 = (fVar9 + (IntToFloat((iVar8 - 2)) * 1f));
									}
								}
								else if (iVar8 > 1)
								{
									fVar9 = (fVar9 + (IntToFloat((iVar8 - 1)) * 1f));
								}
							}
							else
							{
								if (bVar16)
								{
									fVar9 = (4.2f * (to_float(iVar7) * 0.5f));
								}
								else
								{
									fVar9 = (4.2f * to_float(iVar7));
								}
								if (bVar16)
								{
									if (iVar7 > 2)
									{
										fVar9 = (fVar9 + (IntToFloat((iVar7 - 2)) * 1f));
									}
								}
								else if (iVar7 > 1)
								{
									fVar9 = (fVar9 + (IntToFloat((iVar7 - 1)) * 1f));
								}
							}
							if (unk_0x4645311C71338838(*uParam3, &uVar21, &uVar20))
							{
								if (!uVar20 & 64 == 0)
								{
									fVar9 = (fVar9 + (0.9f * fVar10));
								}
								if (!uVar20 & 4 == 0)
								{
									fVar9 = (fVar9 + -0.7f);
								}
							}
						}
						fVar11 = (Param2.f_2 - uParam3->f_2);
						if (fVar11 < 0f)
						{
							fVar11 = (fVar11 * -1f);
						}
						if ((func_130(Param2, *uParam3) || fVar11 < 0.5f) || func_128(uParam6))
						{
							*uParam3 = { unk_0x1BAE5C94E38E44FE(*uParam3, *fParam4, fVar9, 0f, 0f) };
							if (unk_0x80FF6C016CDB0FAF(*uParam0, 0))
							{
								iVar5 = *uParam0;
							}
							if (!unk_0x874E47AE21D605A5(*uParam3, 3f, 3f, 3f, iVar5))
							{
								if (func_135(*uParam3, uParam3, fParam4, 1))
								{
								}
								bVar13 = true;
							}
						}
					}
				}
			}
			*iParam5++;
			if (*iParam5 >= iVar19)
			{
				*uParam3 = { Param2 };
				if (uParam3->f_2 == 1f)
				{
					fVar11 = 1f;
					fVar11 = unk_0x64FF297058C79581((*uParam3 - 2f), (uParam3->f_1 - 2f), (*uParam3 + 2f), (uParam3->f_1 + 2f));
					if (fVar11 > 1f)
					{
						iLocal_67 = 1;
						uParam3->f_2 = fVar11;
						uParam3->f_2 = (uParam3->f_2 + 0.5f);
					}
				}
				bVar13 = true;
			}
		}
		if (bVar13)
		{
			Var2 = { Param2 - *uParam3 };
			Var2.f_2 = 0f;
			fLocal_72 = vmag(Var2);
			if (fLocal_72 != 0f)
			{
			}
			return 1;
		}
	}
	return 0;
}

int func_128(var uParam0)
{
	if (unk_0x8F678487EEBD8CE4(*uParam0) && func_129(*uParam0) == unk_0xE66C877C9033DBB0())
	{
		return 1;
	}
	return 0;
}

int func_129(int iParam0)
{
	int iVar0;
	
	if (unk_0x8F678487EEBD8CE4(iParam0))
	{
		iVar0 = unk_0x456314646600276D(iParam0);
	}
	return iVar0;
}

int func_130(struct<3> Param0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (Param1.f_2 - Param0.f_2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 * -1f);
	}
	if (Param0.f_2 <= 1f)
	{
		func_54("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - vCoord1.z <= 1, probably a waypoint blip - RETURN TRUE\n");
		return 1;
	}
	fVar0 = vdist(Param0, Param1);
	fVar0 = (fVar0 / 1.75f);
	if (fVar1 < fVar0)
	{
		func_54("\nIS_COORD_ON_SAME_LEVEL_AS_COORD - fTemp < acceptableHeight, RETURN TRUE\n");
		return 1;
	}
	return 0;
}

int func_131(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	if (unk_0x71B5E9AB554C28B8(Param0, Param0.f_1, Param2, Param2.f_1))
	{
		return 1;
	}
	return 0;
}

void func_132(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, var uParam4, var uParam5, int iParam6)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (Param2 <= Param0)
	{
		Var0.x = Param2;
		Var1.x = Param0;
	}
	else
	{
		Var0.x = Param0;
		Var1.x = Param2;
	}
	if (Param2.f_1 <= Param0.f_1)
	{
		Var0.f_1 = Param2.f_1;
		Var1.f_1 = Param0.f_1;
	}
	else
	{
		Var0.f_1 = Param0.f_1;
		Var1.f_1 = Param2.f_1;
	}
	Var0 = { Var0 - Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
	Var1 = { Var1 + Vector(IntToFloat(iParam6), IntToFloat(iParam6), IntToFloat(iParam6)) };
	if (!func_133(Var0, *uParam4, 1056964608, 0) || !func_133(Var0, *uParam4, 1056964608, 0))
	{
		*uParam4 = { Var0 };
		*uParam5 = { Var1 };
	}
	unk_0xB65F86FFF1334E95(*uParam4, uParam4->f_1, *uParam5, uParam5->f_1);
}

int func_133(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
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

int func_134(struct<3> Param0)
{
	char* sVar0;
	
	sVar0 = unk_0x5455B0009696FA6A(Param0);
	if (((((((((((((((((((((((((((((((((((((((((((((unk_0xF005CCA4263DF67F("SanAnd", sVar0) || unk_0xF005CCA4263DF67F("Alamo", sVar0)) || unk_0xF005CCA4263DF67F("ArmyB", sVar0)) || unk_0xF005CCA4263DF67F("BhamCa", sVar0)) || unk_0xF005CCA4263DF67F("Baytre", sVar0)) || unk_0xF005CCA4263DF67F("BradT", sVar0)) || unk_0xF005CCA4263DF67F("BradP", sVar0)) || unk_0xF005CCA4263DF67F("CANNY", sVar0)) || unk_0xF005CCA4263DF67F("CCreak", sVar0)) || unk_0xF005CCA4263DF67F("ChamH", sVar0)) || unk_0xF005CCA4263DF67F("CHU", sVar0)) || unk_0xF005CCA4263DF67F("COSI", sVar0)) || unk_0xF005CCA4263DF67F("CMSW", sVar0)) || unk_0xF005CCA4263DF67F("Cypre", sVar0)) || unk_0xF005CCA4263DF67F("Desrt", sVar0)) || unk_0xF005CCA4263DF67F("ELGorl", sVar0)) || unk_0xF005CCA4263DF67F("Galli", sVar0)) || unk_0xF005CCA4263DF67F("Galfish", sVar0)) || unk_0xF005CCA4263DF67F("Harmo", sVar0)) || unk_0xF005CCA4263DF67F("HumLab", sVar0)) || unk_0xF005CCA4263DF67F("Jail", sVar0)) || unk_0xF005CCA4263DF67F("LAct", sVar0)) || unk_0xF005CCA4263DF67F("LDam", sVar0)) || unk_0xF005CCA4263DF67F("Lago", sVar0)) || unk_0xF005CCA4263DF67F("MTChil", sVar0)) || unk_0xF005CCA4263DF67F("MTJose", sVar0)) || unk_0xF005CCA4263DF67F("MTGordo", sVar0)) || unk_0xF005CCA4263DF67F("NCHU", sVar0)) || unk_0xF005CCA4263DF67F("Oceana", sVar0)) || unk_0xF005CCA4263DF67F("Palmpow", sVar0)) || unk_0xF005CCA4263DF67F("PBluff", sVar0)) || unk_0xF005CCA4263DF67F("Paleto", sVar0)) || unk_0xF005CCA4263DF67F("PalCov", sVar0)) || unk_0xF005CCA4263DF67F("PalFor", sVar0)) || unk_0xF005CCA4263DF67F("PalHigh", sVar0)) || unk_0xF005CCA4263DF67F("RTRAK", sVar0)) || unk_0xF005CCA4263DF67F("Rancho", sVar0)) || unk_0xF005CCA4263DF67F("SANDY", sVar0)) || unk_0xF005CCA4263DF67F("TongvaH", sVar0)) || unk_0xF005CCA4263DF67F("TongvaV", sVar0)) || unk_0xF005CCA4263DF67F("Zenora", sVar0)) || unk_0xF005CCA4263DF67F("Slab", sVar0)) || unk_0xF005CCA4263DF67F("WindF", sVar0)) || unk_0xF005CCA4263DF67F("Zancudo", sVar0)) || unk_0xF005CCA4263DF67F("SanChia", sVar0)) || unk_0xF005CCA4263DF67F("zQ_UAR", sVar0))
	{
		return 1;
	}
	return 0;
}

int func_135(struct<3> Param0, var uParam1, float fParam2, int iParam3)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2[6];
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	struct<3> Var7;
	float fVar8;
	float fVar9;
	struct<3> Var10;
	float fVar11;
	float fVar12;
	bool bVar13;
	
	if (func_145(Param0, 1900f, -6600f, 100f, 6900f, -3600f, 140f))
	{
		*uParam1 = { 1261.58f, -3332.685f, 5.4191f };
		*fParam2 = 163.87f;
		return 1;
	}
	else if (func_145(Param0, -3800f, 5400f, -100f, -1900f, 8500f, 100f))
	{
		*uParam1 = { -1577.16f, 5166.51f, 19.1864f };
		*fParam2 = 0f;
		return 1;
	}
	else if (func_145(Param0, -874.9833f, 125.7645f, -100f, -768.6254f, 193.0297f, 100f))
	{
		*uParam1 = { -856.6151f, 163.7361f, 65.093f };
		*fParam2 = 355.3355f;
		return 1;
	}
	else if (func_145(Param0, -39.2005f, -1473.55f, -100f, 10.6133f, -1430.099f, 100f))
	{
		*uParam1 = { -15.5181f, -1456.4f, 29.4244f };
		*fParam2 = 94.6893f;
		return 1;
	}
	else if (func_145(Param0, 1964.742f, 3792.59f, -100f, 1992.636f, 3840.253f, 100f))
	{
		*uParam1 = { 1996.372f, 3818.831f, 31.1612f };
		*fParam2 = 170.0221f;
		return 1;
	}
	else if (unk_0x3BC3A4E4A1827EEE(Param0, -68.2187f, -1086.951f, -100f, -10.54518f, -1106.895f, 100f, 43.5f, 0, true))
	{
		*uParam1 = { -63.5854f, -1074.732f, 26.0995f };
		*fParam2 = 324.1257f;
		return 1;
	}
	else if (unk_0x3BC3A4E4A1827EEE(Param0, 398.7899f, -1651.417f, -100f, 423.8372f, -1619.432f, 100f, 45f, 0, true))
	{
		*uParam1 = { 416.871f, -1613.081f, 28.1401f };
		*fParam2 = 227.9333f;
		return 1;
	}
	else if (unk_0x3BC3A4E4A1827EEE(Param0, -988.8535f, -2553.177f, -100f, -1041.486f, -2644.97f, 100f, 49.75f, 0, true) && !unk_0x25DDB354A40FFCDB())
	{
		*uParam1 = { -1039.542f, -2574.467f, 12.7566f };
		*fParam2 = 162.2744f;
		return 1;
	}
	else if (unk_0x3BC3A4E4A1827EEE(Param0, -906.902f, -2600.461f, -100f, -959.7651f, -2692.057f, 100f, 49.75f, 0, true) && !unk_0x25DDB354A40FFCDB())
	{
		*uParam1 = { -911.1597f, -2676.132f, 12.7567f };
		*fParam2 = 338.9414f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, -209.3372f, -2011.099f, 26.62037f, -257.2225f, -2076.963f, 36.62037f, 30f, 0, true))
	{
		*uParam1 = { -211.8546f, -2030.771f, 26.6204f };
		*fParam2 = 154.4302f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 159f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, -804.05f, 4216.412f, 204.4872f, -509.0679f, 4135.19f, 123.2502f, 250f, 0, true))
	{
		*uParam1 = { -623.3622f, 3996f, 120.7669f };
		*fParam2 = 37.8784f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 180f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, -2203.167f, 183.3549f, 167.4022f, -2311.587f, 434.3828f, 195.4669f, 138.5f, 0, true))
	{
		*uParam1 = { -2294.945f, 376.2506f, 173.4669f };
		*fParam2 = 296.6963f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, -2041.478f, -553.2159f, -0.089962f, -1787.08f, -768.0886f, 37.99918f, 220f, 0, true))
	{
		*uParam1 = { -1897.077f, -557.3334f, 10.7279f };
		*fParam2 = 228.7709f;
		if (unk_0x3BC3A4E4A1827EEE(Var1, -1882.883f, -541.7442f, 4.675224f, -1929.626f, -598.6026f, 40.4298f, 35f, 0, true))
		{
			return 1;
		}
		else
		{
			Var2[0 /*3*/] = { -1962.468f, -503.4229f, 10.8349f };
			Var2[1 /*3*/] = { -1924.472f, -534.7357f, 10.8181f };
			Var2[2 /*3*/] = { -1896.324f, -557.768f, 10.7256f };
			Var2[3 /*3*/] = { -1850.661f, -595.8367f, 10.4649f };
			Var2[4 /*3*/] = { -1809f, -632.1207f, 10.0016f };
			Var2[5 /*3*/] = { -1745.043f, -694.4053f, 9.1245f };
			iVar3 = -1;
			fVar4 = 99999f;
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				fVar5 = vdist(Var2[iVar6 /*3*/], Var1);
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
					iVar3 = iVar6;
				}
				iVar6++;
			}
			*uParam1 = { Var2[iVar3 /*3*/] };
			if (iVar3 == 0)
			{
				*fParam2 = 234.3999f;
			}
			else if (iVar3 == 1)
			{
				*fParam2 = 232.2255f;
			}
			else if (iVar3 == 2)
			{
				*fParam2 = 228.2855f;
			}
			else if (iVar3 == 3)
			{
				*fParam2 = 231.4914f;
			}
			else if (iVar3 == 4)
			{
				*fParam2 = 230.6703f;
			}
			else if (iVar3 == 5)
			{
				*fParam2 = 228.7709f;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 330f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, -446.12f, 1057.452f, 318.6169f, -405.8336f, 1194.486f, 337.0966f, 106.25f, 0, true))
	{
		*uParam1 = { -411.3629f, 1174.587f, 324.6421f };
		*fParam2 = 255.2881f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, -1362.091f, -29.26777f, -100f, -1377.953f, 152.2389f, 100f, 50f, 0, true))
	{
		iVar0 = (iParam3 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam1 = { -1380.101f, 95.1566f, 53.5054f };
				*fParam2 = 4.555f;
				break;
			
			case 2:
				*uParam1 = { -1379.139f, 84.2472f, 53.0592f };
				*fParam2 = 6.9278f;
				break;
			
			case 3:
				*uParam1 = { -1378.427f, 74.5077f, 52.6622f };
				*fParam2 = 2.6813f;
				break;
			
			case 4:
				*uParam1 = { -1384.177f, 73.9207f, 52.7438f };
				*fParam2 = 5.542f;
				break;
			
			case 5:
				*uParam1 = { -1381.118f, 35.7838f, 52.659f };
				*fParam2 = 7.6687f;
				break;
			
			case 6:
				*uParam1 = { -1383.741f, 64.1491f, 52.6647f };
				*fParam2 = 2.5572f;
				break;
			
			case 7:
				*uParam1 = { -1382.616f, 49.6876f, 52.6585f };
				*fParam2 = 3.0185f;
				break;
			
			default:
				*uParam1 = { -1383.299f, 54.4598f, 52.6562f };
				*fParam2 = 6.2155f;
				break;
		}
		return 1;
	}
	else if (unk_0x25DDB354A40FFCDB())
	{
		if (unk_0x3BC3A4E4A1827EEE(Param0, 48.31006f, -1120.669f, 28.0305f, -12.12345f, -1112.084f, 36.08567f, 60f, 0, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { 50.9889f, -1092.525f, 28.2152f };
					*fParam2 = 150.8833f;
					break;
				
				case 2:
					*uParam1 = { 46.7725f, -1099.751f, 28.1639f };
					*fParam2 = 149.4322f;
					break;
				
				case 3:
					*uParam1 = { 41.6146f, -1107.742f, 28.1318f };
					*fParam2 = 154.1378f;
					break;
				
				case 4:
					*uParam1 = { 38.1922f, -1113.394f, 28.1507f };
					*fParam2 = 146.3778f;
					break;
				
				case 5:
					*uParam1 = { 13.0436f, -1124.767f, 27.7359f };
					*fParam2 = 91.163f;
					break;
				
				case 6:
					*uParam1 = { 1.4336f, -1125.042f, 27.1705f };
					*fParam2 = 91.0578f;
					break;
				
				case 7:
					*uParam1 = { -11.1811f, -1125.811f, 26.3688f };
					*fParam2 = 91.866f;
					break;
				
				default:
					*uParam1 = { 21.9431f, -1124.573f, 27.9417f };
					*fParam2 = 91.6961f;
					break;
			}
			return 1;
		}
		else if (unk_0x3BC3A4E4A1827EEE(Param0, -1061.018f, -2540.235f, 18.66932f, -1023.332f, -2562.115f, 31.57616f, 250f, 0, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -1023.982f, -2489.882f, 19.0755f };
					*fParam2 = 148.7004f;
					break;
				
				case 2:
					*uParam1 = { -1029.968f, -2500.438f, 19.0803f };
					*fParam2 = 148.7144f;
					break;
				
				case 3:
					*uParam1 = { -1070.546f, -2570.859f, 19.0836f };
					*fParam2 = 150.0955f;
					break;
				
				case 4:
					*uParam1 = { -1056.065f, -2545.662f, 19.0809f };
					*fParam2 = 149.5649f;
					break;
				
				case 5:
					*uParam1 = { -1050.578f, -2536.219f, 19.0824f };
					*fParam2 = 150.7363f;
					break;
				
				case 6:
					*uParam1 = { -1036.032f, -2510.902f, 19.0794f };
					*fParam2 = 147.2113f;
					break;
				
				case 7:
					*uParam1 = { -1044.487f, -2525.534f, 19.079f };
					*fParam2 = 150.7597f;
					break;
				
				default:
					*uParam1 = { -1064.5f, -2560.653f, 19.0905f };
					*fParam2 = 150.7081f;
					break;
			}
			return 1;
		}
		else if (unk_0x3BC3A4E4A1827EEE(Param0, -1061.059f, -2540.254f, 10.94467f, -1023.297f, -2562.052f, 18.51685f, 250f, 0, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -1044.741f, -2528.786f, 12.7568f };
					*fParam2 = 150.9439f;
					break;
				
				case 2:
					*uParam1 = { -1050.763f, -2539.498f, 12.7566f };
					*fParam2 = 150.851f;
					break;
				
				case 3:
					*uParam1 = { -1054.952f, -2546.86f, 12.7566f };
					*fParam2 = 149.9285f;
					break;
				
				case 4:
					*uParam1 = { -1060.397f, -2556.898f, 12.6066f };
					*fParam2 = 150.8244f;
					break;
				
				case 5:
					*uParam1 = { -1020.744f, -2490.084f, 12.6396f };
					*fParam2 = 148.6134f;
					break;
				
				case 6:
					*uParam1 = { -1076.904f, -2589.179f, 12.6858f };
					*fParam2 = 149.0112f;
					break;
				
				case 7:
					*uParam1 = { -1026.387f, -2501.952f, 12.6923f };
					*fParam2 = 149.7553f;
					break;
				
				default:
					*uParam1 = { -1070.506f, -2578.389f, 12.6932f };
					*fParam2 = 148.5232f;
					break;
			}
			return 1;
		}
		else if (unk_0x3BC3A4E4A1827EEE(Param0, -1043.364f, -2747.29f, 16.96057f, -991.5368f, -2657.682f, 69.12349f, 200f, 0, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -1067.846f, -2708.94f, 19.0588f };
					*fParam2 = 230.9025f;
					break;
				
				case 2:
					*uParam1 = { -1058.224f, -2716.217f, 19.06f };
					*fParam2 = 237.1285f;
					break;
				
				case 3:
					*uParam1 = { -1004.567f, -2744.797f, 19.0811f };
					*fParam2 = 255.6885f;
					break;
				
				case 4:
					*uParam1 = { -1049.509f, -2721.58f, 19.0546f };
					*fParam2 = 242.3581f;
					break;
				
				case 5:
					*uParam1 = { -1017.154f, -2740.117f, 19.0525f };
					*fParam2 = 243.5798f;
					break;
				
				case 6:
					*uParam1 = { -1042.087f, -2726.077f, 19.0452f };
					*fParam2 = 240.2381f;
					break;
				
				case 7:
					*uParam1 = { -1027.353f, -2734.462f, 19.0509f };
					*fParam2 = 239.8703f;
					break;
				
				default:
					*uParam1 = { -1033.74f, -2730.746f, 19.0521f };
					*fParam2 = 239.9237f;
					break;
			}
			return 1;
		}
		else if (unk_0x3BC3A4E4A1827EEE(Param0, -1047.646f, -2754.947f, 2.941969f, -991.7314f, -2653.153f, 16.89228f, 200f, 0, true))
		{
			iVar0 = (iParam3 % 8);
			switch (iVar0)
			{
				case 1:
					*uParam1 = { -971.9154f, -2749.122f, 12.6069f };
					*fParam2 = 265.8022f;
					break;
				
				case 2:
					*uParam1 = { -980.6166f, -2748.535f, 12.757f };
					*fParam2 = 263.5472f;
					break;
				
				case 3:
					*uParam1 = { -987.6072f, -2747.273f, 12.6069f };
					*fParam2 = 257.2886f;
					break;
				
				case 4:
					*uParam1 = { -1006.815f, -2739.345f, 12.6334f };
					*fParam2 = 242.1315f;
					break;
				
				case 5:
					*uParam1 = { -1051.83f, -2713.553f, 12.6333f };
					*fParam2 = 239.9312f;
					break;
				
				case 6:
					*uParam1 = { -1041.004f, -2719.647f, 12.6402f };
					*fParam2 = 240.1081f;
					break;
				
				case 7:
					*uParam1 = { -1023.832f, -2729.465f, 12.6445f };
					*fParam2 = 239.6737f;
					break;
				
				default:
					*uParam1 = { -1012.848f, -2735.172f, 12.6656f };
					*fParam2 = 237.6545f;
					break;
			}
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, 845.7216f, -990.7473f, 37.4696f, 846.3397f, -1066.88f, 16.96623f, 90f, 0, true))
	{
		iVar0 = (iParam3 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam1 = { 868.1039f, -995.9224f, 29.7369f };
				*fParam2 = 93.132f;
				break;
			
			case 2:
				*uParam1 = { 859.283f, -996.4102f, 28.7865f };
				*fParam2 = 92.2581f;
				break;
			
			case 3:
				*uParam1 = { 849.4288f, -997.1062f, 27.5347f };
				*fParam2 = 92.714f;
				break;
			
			case 4:
				*uParam1 = { 841.1268f, -997.4826f, 26.5744f };
				*fParam2 = 92.8628f;
				break;
			
			case 5:
				*uParam1 = { 831.2605f, -1009.556f, 25.599f };
				*fParam2 = 268.6186f;
				break;
			
			case 6:
				*uParam1 = { 844.6506f, -1010.09f, 26.9894f };
				*fParam2 = 270.076f;
				break;
			
			case 7:
				*uParam1 = { 852.2498f, -1010.132f, 27.8091f };
				*fParam2 = 269.722f;
				break;
			
			default:
				*uParam1 = { 861.4028f, -1010.025f, 28.808f };
				*fParam2 = 270.7686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 20f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, 767.3736f, -1077.429f, -10.78654f, 682.8284f, -1080.686f, 79.67303f, 60f, 0, true))
	{
		iVar0 = (iParam3 % 8);
		switch (iVar0)
		{
			case 1:
				*uParam1 = { 703.2726f, -1067.7f, 21.4765f };
				*fParam2 = 181.3629f;
				break;
			
			case 2:
				*uParam1 = { 715.2089f, -1070.399f, 21.2708f };
				*fParam2 = 175.4362f;
				break;
			
			case 3:
				*uParam1 = { 715.2911f, -1059.42f, 21.0876f };
				*fParam2 = 181.0347f;
				break;
			
			case 4:
				*uParam1 = { 709.6841f, -1086.78f, 21.419f };
				*fParam2 = 233.169f;
				break;
			
			case 5:
				*uParam1 = { 703.807f, -1057.866f, 21.4152f };
				*fParam2 = 170.1609f;
				break;
			
			case 6:
				*uParam1 = { 708.1994f, -1048.194f, 21.216f };
				*fParam2 = 134.2729f;
				break;
			
			case 7:
				*uParam1 = { 711.1124f, -1069.423f, 21.3129f };
				*fParam2 = 177.9198f;
				break;
			
			default:
				*uParam1 = { 703.545f, -1078.718f, 21.3987f };
				*fParam2 = 180.5686f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 31f;
	}
	if (func_142(3, Var1))
	{
		if (func_141(Var1, 3, 0, 0))
		{
			*uParam1 = { -1520.121f, 2731.511f, 16.6437f };
			*fParam2 = 48.1572f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 77.2f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, 1535.987f, -2041.497f, 68.21275f, 1529.357f, -2204.463f, 96.11195f, 105f, 0, true))
	{
		*uParam1 = { 1540.75f, -2051.49f, 76.85f };
		*fParam2 = 255.41f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 51.1739f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, 1185.81f, -1768.367f, 28.31145f, 1369.068f, -1701.452f, 66.25389f, 70f, 1, true))
	{
		if (func_140(Var1, 1283.326f, -1731.522f, 51.78555f, 17f))
		{
			*uParam1 = { 1283.326f, -1731.522f, 51.78555f };
			*fParam2 = 275.4274f;
			return 1;
		}
		if (func_140(Var1, 1334.386f, -1709.762f, 55.70131f, 41f))
		{
			*uParam1 = { 1334.386f, -1709.762f, 55.70131f };
			*fParam2 = 275.4411f;
			return 1;
		}
		if (func_140(Var1, 1246.166f, -1750.625f, 45.35691f, 28f))
		{
			*uParam1 = { 1246.166f, -1750.625f, 45.35691f };
			*fParam2 = 301.2981f;
			return 1;
		}
		if (func_140(Var1, 1196.272f, -1753.051f, 37.63976f, 32f))
		{
			*uParam1 = { 1196.272f, -1753.051f, 37.63976f };
			*fParam2 = 209.4354f;
			return 1;
		}
		*uParam1 = { 1283.326f, -1731.522f, 51.78555f };
		*fParam2 = 275.4274f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 25f;
	}
	if (func_140(Var1, -1693.302f, -1109.13f, 17.89778f, 240f))
	{
		if ((unk_0x3BC3A4E4A1827EEE(Var1, -1538.981f, -941.1323f, 10.56623f, -1715.57f, -1139.766f, 52.20361f, 110f, 0, true) || unk_0x3BC3A4E4A1827EEE(Var1, -1739.989f, -1115.973f, 10.08726f, -1800.515f, -1187.18f, 52.0172f, 25f, 0, true)) || unk_0x3BC3A4E4A1827EEE(Var1, -1801.766f, -1180.252f, 4.017236f, -1857.718f, -1244.628f, 38.49653f, 85f, 0, true))
		{
			*uParam1 = { -1624.445f, -976.9755f, 12.0175f };
			*fParam2 = 141.167f;
			return 1;
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 10f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, -1140.89f, -1573.135f, -6.566939f, -1067.084f, -1675.976f, 23.53153f, 52f, 0, true))
	{
		*uParam1 = { -1095.63f, -1577.24f, 3.82f };
		*fParam2 = 216.12f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 114f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0, true))
	{
		iVar0 = 3;
		switch (unk_0x344C570D6F8700DF(0, iVar0))
		{
			case 0:
				*uParam1 = { 1369.246f, 1147.653f, 112.7592f };
				*fParam2 = 182.0998f;
				break;
			
			case 1:
				*uParam1 = { 1360.848f, 1139.121f, 112.7592f };
				*fParam2 = 83.3356f;
				break;
			
			case 2:
				*uParam1 = { 1364.751f, 1154.367f, 112.7592f };
				*fParam2 = 223.2795f;
				break;
		}
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 40f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, 1737.39f, 3287.795f, 35.13897f, 1724.345f, 3337.854f, 57.20038f, 40f, 0, true))
	{
		*uParam1 = { 1782.19f, 3300.076f, 40.4593f };
		*fParam2 = 142.426f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 7f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, -695.7981f, -1379.678f, 24.48124f, -777.3731f, -1491.13f, -3.594945f, 72f, 0, true))
	{
		*uParam1 = { -658.2056f, -1388.789f, 9.499f };
		*fParam2 = 174.6945f;
		return 1;
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 325f;
	}
	if (vdist2(Var1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
	{
		*uParam1 = { -142.367f, -895.0251f, 28.191f };
		*fParam2 = 71.6555f;
		return 1;
	}
	if (!func_138())
	{
		Var1 = { Param0 };
		if (Param0.f_2 == 1f)
		{
			Var1.f_2 = 36.1141f;
		}
		if (func_142(7, Var1))
		{
			if (func_141(Var1, 7, 0, 0))
			{
				*uParam1 = { -1012.31f, -465.1634f, 36.1141f };
				*fParam2 = 112.1485f;
				return 1;
			}
		}
	}
	Var1 = { Param0 };
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 12.7091f;
	}
	if (func_142(2, Var1))
	{
		if (func_141(Var1, 2, 0, 0))
		{
			iVar0 = 4;
			if (!unk_0x25DDB354A40FFCDB())
			{
				switch (unk_0x344C570D6F8700DF(0, iVar0))
				{
					case 0:
						*uParam1 = { -979.95f, -2746.109f, 12.7091f };
						*fParam2 = 91.4929f;
						break;
					
					case 1:
						*uParam1 = { -1025.193f, -2728.218f, 12.6647f };
						*fParam2 = 239.0041f;
						break;
					
					case 2:
						*uParam1 = { -1051.315f, -2713.069f, 12.6676f };
						*fParam2 = 236.4666f;
						break;
					
					case 3:
						*uParam1 = { -1095.742f, -2637.871f, 12.6461f };
						*fParam2 = 188.9897f;
						break;
				}
			}
			else
			{
				iVar0 = (iParam3 % 8);
				switch (iVar0)
				{
					case 1:
						*uParam1 = { -1023.982f, -2489.882f, 19.0755f };
						*fParam2 = 148.7004f;
						break;
					
					case 2:
						*uParam1 = { -1029.968f, -2500.438f, 19.0803f };
						*fParam2 = 148.7144f;
						break;
					
					case 3:
						*uParam1 = { -1070.546f, -2570.859f, 19.0836f };
						*fParam2 = 150.0955f;
						break;
					
					case 4:
						*uParam1 = { -1056.065f, -2545.662f, 19.0809f };
						*fParam2 = 149.5649f;
						break;
					
					case 5:
						*uParam1 = { -1050.578f, -2536.219f, 19.0824f };
						*fParam2 = 150.7363f;
						break;
					
					case 6:
						*uParam1 = { -1036.032f, -2510.902f, 19.0794f };
						*fParam2 = 147.2113f;
						break;
					
					case 7:
						*uParam1 = { -1044.487f, -2525.534f, 19.079f };
						*fParam2 = 150.7597f;
						break;
					
					default:
						*uParam1 = { -1064.5f, -2560.653f, 19.0905f };
						*fParam2 = 150.7081f;
						break;
					}
			}
			return 1;
		}
	}
	Var7 = { -509.5746f, 4938.918f, 146.3271f };
	fVar8 = 232.0109f;
	fVar9 = func_137(Param0, Var7);
	Var10 = { 2450.604f, 5129.224f, 45.9722f };
	fVar11 = 241.1957f;
	fVar12 = func_137(Param0, Var10);
	Var1 = { Param0 };
	bVar13 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 400f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, -148.8777f, 4862.204f, 305.6442f, 454.6274f, 5573.104f, 804.097f, 250f, 0, true))
	{
		bVar13 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 200f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, -482.8931f, 4990.255f, 155.1601f, 7.830751f, 5009.371f, 430.7604f, 250f, 0, true))
	{
		bVar13 = true;
	}
	if (bVar13)
	{
		*uParam1 = { Var7 };
		*fParam2 = fVar8;
		if (fVar12 < fVar9)
		{
			*uParam1 = { Var10 };
			*fParam2 = fVar11;
		}
		return 1;
	}
	bVar13 = false;
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 700f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, 441.3999f, 5579.99f, 802.5138f, 965.7776f, 5675.921f, 601.2646f, 250f, 0, true))
	{
		bVar13 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 300f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, 954.1139f, 5641.051f, 646.5054f, 2140.375f, 5377.753f, 149.1221f, 250f, 0, true))
	{
		bVar13 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 100f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, 2117.348f, 5377.259f, 173.3297f, 2439.934f, 5297.445f, 62.68662f, 100f, 0, true))
	{
		bVar13 = true;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 65f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, 2393.347f, 5321.58f, 107.0624f, 2523.946f, 5124.746f, 41.68384f, 70f, 0, true))
	{
		bVar13 = true;
	}
	if (bVar13)
	{
		*uParam1 = { Var10 };
		*fParam2 = fVar11;
		if (fVar9 < fVar12)
		{
			*uParam1 = { Var7 };
			*fParam2 = fVar8;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 6f;
	}
	if (func_136(Var1, -99.68751f, -2448.891f, 5.01731f, 230f))
	{
		if ((((unk_0x3BC3A4E4A1827EEE(Var1, 85.05448f, -2511.884f, -2.996267f, -57.59977f, -2412.716f, 15.00095f, 75f, 0, true) || unk_0x3BC3A4E4A1827EEE(Var1, 7.516524f, -2546.741f, 1.331557f, -177.3268f, -2417.047f, 19.16044f, 80f, 0, true)) || unk_0x3BC3A4E4A1827EEE(Var1, -260.0354f, -2419.978f, 1.399635f, -27.26375f, -2423.848f, 25.00064f, 80f, 0, true)) || unk_0x3BC3A4E4A1827EEE(Var1, -187.4256f, -2516.086f, -6.849975f, -186.7518f, -2438.149f, 25.0016f, 40f, 0, true)) || unk_0x3BC3A4E4A1827EEE(Var1, -73.60813f, -2538.564f, -6.989857f, -183.2556f, -2465.145f, 25.0203f, 70f, 0, true))
		{
			iVar0 = 2;
			if (unk_0x344C570D6F8700DF(0, iVar0) == 0)
			{
				*uParam1 = { 29.5582f, -2553.587f, 5.0004f };
				*fParam2 = 253.9545f;
			}
			else
			{
				*uParam1 = { -189.6824f, -2531.649f, 5.0031f };
				*fParam2 = 0.0408f;
			}
			return 1;
		}
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.4f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, 412.279f, 6481.868f, 25.80821f, 468.9353f, 6442.752f, 45.60727f, 24f, 0, true))
	{
		*uParam1 = { 445.231f, 6476.948f, 28.4862f };
		*fParam2 = 219.4788f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, 476.5394f, -1301.548f, 44.82458f, 499.5822f, -1339.025f, 26.31703f, 35f, 0, true))
	{
		*uParam1 = { 498.185f, -1288.535f, 28.1923f };
		*fParam2 = 181.3208f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 28.2065f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, 496.9816f, -1412.255f, 43.29391f, 497.269f, -1339.364f, 26.31648f, 40f, 0, true))
	{
		*uParam1 = { 504.1738f, -1421.251f, 28.2065f };
		*fParam2 = 83.2905f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 73f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, 951.1704f, -147.0047f, 71.54326f, 1005.245f, -98.44745f, 95.62679f, 70f, 0, true))
	{
		*uParam1 = { 961.3104f, -150.1964f, 73.4016f };
		*fParam2 = 58.9938f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 52f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, 0, true))
	{
		*uParam1 = { 1118.751f, 262.0209f, 79.8555f };
		*fParam2 = 52.3086f;
		return 1;
	}
	else if (unk_0x3BC3A4E4A1827EEE(Var1, 1137.022f, 89.06853f, 71.89022f, 1010.046f, -91.56699f, 103.4568f, 180f, 0, true))
	{
		*uParam1 = { 1134.053f, 53.1835f, 79.7553f };
		*fParam2 = 145.5134f;
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 30.6f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, 191.8731f, -723.553f, 40.23576f, 79.58656f, -687.6684f, 29.54734f, 85f, 0, true))
	{
		iVar0 = 2;
		if (unk_0x344C570D6F8700DF(0, iVar0) == 0)
		{
			*uParam1 = { 182.6361f, -753.5836f, 31.8051f };
			*fParam2 = 162.0019f;
		}
		else
		{
			*uParam1 = { 81.5318f, -675.4875f, 30.5695f };
			*fParam2 = 341.8541f;
		}
		return 1;
	}
	if (Param0.f_2 == 1f)
	{
		Var1.f_2 = 33.5f;
	}
	if (unk_0x3BC3A4E4A1827EEE(Var1, -40f, -687.7f, 36.6f, -72.7f, -682f, 29.6f, 15f, 0, true) || unk_0x3BC3A4E4A1827EEE(Var1, -45.3f, -687.8f, 29.3f, 5.9f, -688.7f, 36.8f, 55f, 0, true))
	{
		*uParam1 = { -88.4f, -660.9f, 35f };
		*fParam2 = -20f;
		return 1;
	}
	else if (unk_0x3BC3A4E4A1827EEE(Var1, 8.1f, -685.5f, 31.2f, 26.3f, -665.7f, 35.2f, 10f, 0, true))
	{
		*uParam1 = { 61.4f, -653.2f, 32f };
		*fParam2 = 160f;
		return 1;
	}
	if (unk_0x3BC3A4E4A1827EEE(Param0, 496.2593f, -3116.586f, 13.6414f, 471.4366f, -3116.258f, 5.7109f, 10f, 0, true))
	{
		*uParam1 = { 484.0132f, -3033.162f, 5.0717f };
		*fParam2 = 140.7302f;
		return 1;
	}
	return 0;
}

bool func_136(struct<3> Param0, struct<3> Param1, float fParam2)
{
	return vdist2(Param0, Param1) <= (fParam2 * fParam2);
}

float func_137(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)
{
	return vdist2(Param0, Param0.f_1, 0f, Param2, Param2.f_1, 0f);
}

int func_138()
{
	int iVar0;
	
	iVar0 = func_57();
	if (iVar0 == 0)
	{
		if (func_139(65))
		{
			return 1;
		}
		if (unk_0x7B70881748D166CD(joaat("ambient_solomon")) > 0)
		{
			return 1;
		}
	}
	else if (iVar0 == 1)
	{
		if (func_139(66))
		{
			return 1;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_139(65))
		{
			return 1;
		}
	}
	return 0;
}

int func_139(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_111858.f_9081.f_99.f_58[iParam0];
}

bool func_140(struct<3> Param0, struct<3> Param1, float fParam2)
{
	struct<3> Var0;
	
	Var0 = { Param1 - Param0 };
	return ((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) <= (fParam2 * fParam2);
}

int func_141(struct<3> Param0, int iParam1, int iParam2, bool bParam3)
{
	struct<3> Var0[15];
	struct<3> Var1[15];
	float fVar2[15];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar5 = 0;
	switch (iParam1)
	{
		case 1:
			Var0[0 /*3*/] = { -1332.211f, 100.4608f, 40.38437f };
			Var1[0 /*3*/] = { -1094.238f, 148.4274f, 73f };
			fVar2[0] = 171.25f;
			Var0[1 /*3*/] = { -999.7344f, -110.2231f, 25.25706f };
			Var1[1 /*3*/] = { -1149.494f, 109.2558f, 73f };
			fVar2[1] = 132f;
			Var0[2 /*3*/] = { -1035.113f, -84.95885f, 28.2746f };
			Var1[2 /*3*/] = { -1261.103f, 50.08148f, 73f };
			fVar2[2] = 132f;
			iVar3 = 3;
			break;
		
		case 2:
			Var0[0 /*3*/] = { -804.3439f, -3346.5f, 10f };
			Var1[0 /*3*/] = { -1816.954f, -2768.893f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 247f;
			Var0[1 /*3*/] = { -1911.488f, -2934.197f, 10f };
			Var1[1 /*3*/] = { -968.6236f, -3477.748f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 149f;
			Var0[2 /*3*/] = { -844.9433f, -2802.785f, 10f };
			Var1[2 /*3*/] = { -1011.081f, -3086.904f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 185.5f;
			Var0[3 /*3*/] = { -1021.086f, -2952.277f, 10f };
			Var1[3 /*3*/] = { -1599.008f, -2616.271f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 250f;
			Var0[4 /*3*/] = { -1027.136f, -2436.457f, 10f };
			Var1[4 /*3*/] = { -1392.61f, -2226.763f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 193.5f;
			Var0[5 /*3*/] = { -1497.549f, -2408.712f, 10f };
			Var1[5 /*3*/] = { -1136.917f, -2617.955f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 234.5f;
			Var0[6 /*3*/] = { -982.7924f, -2831.709f, 12.93313f };
			Var1[6 /*3*/] = { -966.4677f, -2803.458f, 16.68313f };
			fVar2[6] = 16f;
			Var0[7 /*3*/] = { -1110.083f, -3496.806f, 12f };
			Var1[7 /*3*/] = { -1955.298f, -3010.431f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 80f;
			Var0[8 /*3*/] = { -1886.899f, -3193.024f, 12f };
			Var1[8 /*3*/] = { -1836.143f, -3105.268f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 142f;
			Var0[9 /*3*/] = { -1134.337f, -3535.648f, 12f };
			Var1[9 /*3*/] = { -1259.649f, -3463.486f, IntToFloat((250 + iParam2)) };
			fVar2[9] = 30.75f;
			Var0[10 /*3*/] = { -969.1279f, -3463.899f, 12f };
			Var1[10 /*3*/] = { -896.3734f, -3505.715f, IntToFloat((250 + iParam2)) };
			fVar2[10] = 150f;
			Var0[11 /*3*/] = { -1369.491f, -2173.579f, 10f };
			Var1[11 /*3*/] = { -1685.626f, -2720.364f, IntToFloat((250 + iParam2)) };
			fVar2[11] = 29.25f;
			Var0[12 /*3*/] = { -1010.926f, -3550.943f, 10f };
			Var1[12 /*3*/] = { -1110.198f, -3493.617f, IntToFloat((250 + iParam2)) };
			fVar2[12] = 43f;
			iVar3 = 13;
			break;
		
		case 3:
			Var0[0 /*3*/] = { -1773.944f, 3287.334f, 30f };
			Var1[0 /*3*/] = { -2029.776f, 2845.083f, IntToFloat((250 + iParam2)) };
			fVar2[0] = 255f;
			Var0[1 /*3*/] = { -2725.889f, 3291.099f, 30f };
			Var1[1 /*3*/] = { -2009.182f, 2879.835f, IntToFloat((250 + iParam2)) };
			fVar2[1] = 180f;
			Var0[2 /*3*/] = { -2442.026f, 3326.699f, 30f };
			Var1[2 /*3*/] = { -2033.928f, 3089.049f, IntToFloat((250 + iParam2)) };
			fVar2[2] = 205f;
			Var0[3 /*3*/] = { -1917.165f, 3374.209f, 30f };
			Var1[3 /*3*/] = { -2016.791f, 3195.058f, IntToFloat((250 + iParam2)) };
			fVar2[3] = 86.25f;
			Var0[4 /*3*/] = { -2192.753f, 3373.278f, 30f };
			Var1[4 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[4] = 150.5f;
			Var0[5 /*3*/] = { -2077.663f, 3344.514f, 30f };
			Var1[5 /*3*/] = { -2191.544f, 3150.417f, IntToFloat((250 + iParam2)) };
			fVar2[5] = 140.5f;
			Var0[6 /*3*/] = { -2861.755f, 3352.661f, 30f };
			Var1[6 /*3*/] = { -2715.871f, 3269.916f, IntToFloat((250 + iParam2)) };
			fVar2[6] = 90f;
			Var0[7 /*3*/] = { -2005.574f, 3364.533f, 30f };
			Var1[7 /*3*/] = { -1977.569f, 3330.888f, IntToFloat((250 + iParam2)) };
			fVar2[7] = 100f;
			Var0[8 /*3*/] = { -1682.235f, 3004.285f, 30f };
			Var1[8 /*3*/] = { -1942.747f, 2947.441f, IntToFloat((250 + iParam2)) };
			fVar2[8] = 248.75f;
			Var0[9 /*3*/] = { -2393.295f, 2936.406f, 31.6801f };
			Var1[9 /*3*/] = { -2453.037f, 3006.863f, 52.31003f };
			fVar2[9] = 128f;
			Var0[10 /*3*/] = { -2347.185f, 3023.83f, 31.56573f };
			Var1[10 /*3*/] = { -2517.33f, 2989.063f, 49.95644f };
			fVar2[10] = 140f;
			Var0[11 /*3*/] = { -2259.922f, 3358.04f, 29.99972f };
			Var1[11 /*3*/] = { -2299.772f, 3385.79f, 38.06014f };
			fVar2[11] = 16f;
			Var0[12 /*3*/] = { -2476.309f, 3363.914f, 31.67933f };
			Var1[12 /*3*/] = { -2431.981f, 3287.669f, 39.97826f };
			fVar2[12] = 214.25f;
			Var0[13 /*3*/] = { -2103.081f, 2797.783f, 29.37864f };
			Var1[13 /*3*/] = { -2096.821f, 2874.423f, 57.80989f };
			fVar2[13] = 65.75f;
			if (bParam3)
			{
				iVar6 = iParam2;
			}
			else
			{
				iVar6 = 0;
			}
			Var1[9 /*3*/].f_2 = (Var1[9 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[10 /*3*/].f_2 = (Var1[10 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[11 /*3*/].f_2 = (Var1[11 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[12 /*3*/].f_2 = (Var1[12 /*3*/].f_2 + IntToFloat(iVar6));
			Var1[13 /*3*/].f_2 = (Var1[13 /*3*/].f_2 + IntToFloat(iVar6));
			iVar3 = 14;
			break;
		
		case 4:
			Var0[0 /*3*/] = { 1541.607f, 2527.555f, 40f };
			Var1[0 /*3*/] = { 1815.575f, 2535.06f, IntToFloat((150 + iParam2)) };
			fVar2[0] = 114f;
			Var0[1 /*3*/] = { 1788.879f, 2445.727f, 40f };
			Var1[1 /*3*/] = { 1716.96f, 2502.957f, IntToFloat((150 + iParam2)) };
			fVar2[1] = 88.5f;
			Var0[2 /*3*/] = { 1601.157f, 2436.244f, 40f };
			Var1[2 /*3*/] = { 1650.078f, 2515.923f, IntToFloat((150 + iParam2)) };
			fVar2[2] = 133.25f;
			Var0[3 /*3*/] = { 1706.331f, 2407.597f, 40f };
			Var1[3 /*3*/] = { 1698.555f, 2460.208f, IntToFloat((150 + iParam2)) };
			fVar2[3] = 104.5f;
			Var0[4 /*3*/] = { 1712.452f, 2756.218f, 40f };
			Var1[4 /*3*/] = { 1718.848f, 2589.162f, IntToFloat((150 + iParam2)) };
			fVar2[4] = 121.75f;
			Var0[5 /*3*/] = { 1830.228f, 2661.24f, 40f };
			Var1[5 /*3*/] = { 1774.812f, 2679.419f, IntToFloat((150 + iParam2)) };
			fVar2[5] = 84.5f;
			Var0[6 /*3*/] = { 1559.05f, 2632.22f, 40f };
			Var1[6 /*3*/] = { 1657.208f, 2595.484f, IntToFloat((150 + iParam2)) };
			fVar2[6] = 103.75f;
			Var0[7 /*3*/] = { 1612.021f, 2716.869f, 40f };
			Var1[7 /*3*/] = { 1657.165f, 2669.721f, IntToFloat((150 + iParam2)) };
			fVar2[7] = 104.25f;
			Var0[8 /*3*/] = { 1809.872f, 2729.827f, 40f };
			Var1[8 /*3*/] = { 1789.855f, 2705.037f, IntToFloat((150 + iParam2)) };
			fVar2[8] = 91f;
			Var0[9 /*3*/] = { 1818.789f, 2605.948f, 40f };
			Var1[9 /*3*/] = { 1783.114f, 2606.783f, IntToFloat((150 + iParam2)) };
			fVar2[9] = 51.25f;
			iVar3 = 10;
			break;
		
		case 5:
			Var0[0 /*3*/] = { 3411.002f, 3663.185f, 20f };
			Var1[0 /*3*/] = { 3615.583f, 3626.194f, IntToFloat((40 + iParam2)) };
			fVar2[0] = 45.75f;
			Var0[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			Var1[1 /*3*/] = { 3643.801f, 3694.362f, IntToFloat((40 + iParam2)) };
			fVar2[1] = 99f;
			Var0[2 /*3*/] = { 3446.036f, 3795.688f, 20f };
			Var1[2 /*3*/] = { 3650.914f, 3766.152f, IntToFloat((40 + iParam2)) };
			fVar2[2] = 81.5f;
			iVar3 = 3;
			break;
		
		case 6:
			Var0[0 /*3*/] = { 526.053f, -3391.497f, -10f };
			Var1[0 /*3*/] = { 523.2289f, -3118.678f, IntToFloat((10 + iParam2)) };
			fVar2[0] = 120f;
			Var0[1 /*3*/] = { 459.4397f, -3199.99f, 4.819676f };
			Var1[1 /*3*/] = { 593.8928f, -3199.998f, 30.06926f };
			fVar2[1] = 170f;
			Var0[2 /*3*/] = { 552.8467f, -3111.054f, 4.819394f };
			Var1[2 /*3*/] = { 585.3137f, -3111.844f, 17.56923f };
			fVar2[2] = 12.5f;
			Var0[3 /*3*/] = { 598.4666f, -3140.147f, 4.819257f };
			Var1[3 /*3*/] = { 597.4973f, -3117.063f, 17.31926f };
			fVar2[3] = 9.75f;
			iVar3 = 4;
			break;
		
		case 7:
			Var0[0 /*3*/] = { -1108.55f, -570.8798f, 20f };
			Var1[0 /*3*/] = { -1187.811f, -477.5037f, IntToFloat((50 + iParam2)) };
			fVar2[0] = 162f;
			Var0[1 /*3*/] = { -1201.378f, -485.9673f, 20f };
			Var1[1 /*3*/] = { -1215.796f, -464.8281f, IntToFloat((50 + iParam2)) };
			fVar2[1] = 124f;
			Var0[2 /*3*/] = { -985.6311f, -525.4233f, 20f };
			Var1[2 /*3*/] = { -1013.393f, -475.2057f, IntToFloat((50 + iParam2)) };
			fVar2[2] = 55f;
			Var0[3 /*3*/] = { -1055.849f, -477.8226f, 20f };
			Var1[3 /*3*/] = { -1073.333f, -498.717f, IntToFloat((50 + iParam2)) };
			fVar2[3] = 142f;
			iVar3 = 4;
			break;
		
		case 8:
			Var0[0 /*3*/] = { 461.5684f, -984.572f, 29.43951f };
			Var1[0 /*3*/] = { 471.17f, -984.4292f, 40.14212f };
			fVar2[0] = 7.75f;
			Var0[1 /*3*/] = { 457.3404f, -984.756f, 34.43951f };
			Var1[1 /*3*/] = { 457.2084f, -993.7189f, 29.38958f };
			fVar2[1] = 14.75f;
			Var0[2 /*3*/] = { 477.6227f, -986.6f, 40.00819f };
			Var1[2 /*3*/] = { 424.8687f, -986.3279f, 48.71241f };
			fVar2[2] = 31.5f;
			Var0[3 /*3*/] = { 474.3889f, -974.4613f, 39.55761f };
			Var1[3 /*3*/] = { 474.0358f, -1021.972f, 49.10033f };
			fVar2[3] = 30.5f;
			Var0[4 /*3*/] = { 442.1768f, -974.1888f, 29.68951f };
			Var1[4 /*3*/] = { 442.1855f, -979.8635f, 33.43951f };
			fVar2[4] = 6.75f;
			iVar3 = 5;
			break;
	}
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		if (unk_0x3BC3A4E4A1827EEE(Param0, Var0[iVar4 /*3*/], Var1[iVar4 /*3*/], fVar2[iVar4], iVar5, true))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

bool func_142(int iParam0, struct<3> Param1)
{
	return vdist2(Param1, func_144(iParam0)) < func_143(iParam0);
}

float func_143(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000000f;
			break;
		
		case 2:
			return 1000000f;
			break;
		
		case 3:
			return 1500000f;
			break;
		
		case 4:
			return 500000f;
			break;
		
		case 5:
			return 500000f;
			break;
		
		case 6:
			return 500000f;
			break;
		
		case 7:
			return 500000f;
			break;
		
		case 8:
			return 500000f;
			break;
	}
	return 0f;
}

Vector3 func_144(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1155.877f, 48.3426f, 52.4985f;
			break;
		
		case 2:
			return -1245.12f, -2818.38f, 12.94f;
			break;
		
		case 3:
			return -2176.19f, 3092.07f, 31.81f;
			break;
		
		case 4:
			return 1701.666f, 2586.261f, 51.4925f;
			break;
		
		case 5:
			return 3525.058f, 3711.323f, 35.6423f;
			break;
		
		case 6:
			return 548.1421f, -3157.961f, 5.0696f;
			break;
		
		case 7:
			return -1142.411f, -526.4487f, 31.6878f;
			break;
		
		case 8:
			return 456.8879f, -985.2783f, 35.6895f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_145(struct<3> Param0, struct<3> Param1, struct<3> Param2)
{
	if (((((Param0.x > Param1.x && Param0.x < Param2.x) && Param0.f_1 > Param1.f_1) && Param0.f_1 < Param2.f_1) && Param0.f_2 > Param1.f_2) && Param0.f_2 < Param2.f_2)
	{
		return 1;
	}
	return 0;
}

int func_146(struct<3> Param0, var uParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = 1E+08f;
	fVar1 = 1E+08f;
	fVar2 = 1E+08f;
	func_158(&Param0, &iLocal_816, &fVar0);
	func_156(&Param0, &iLocal_106, &fVar1);
	func_153(&Param0, &iLocal_817, &fVar2);
	if (fVar0 < fVar1 && fVar0 < fVar2)
	{
		if (func_152(iLocal_816, Param0))
		{
			if (func_151(iLocal_816, uParam1, fParam2))
			{
				return 1;
			}
		}
	}
	else if (fVar1 < fVar0 && fVar1 < fVar2)
	{
		if (func_150(iLocal_106, Param0))
		{
			if (func_149(iLocal_106, uParam1, fParam2))
			{
				return 1;
			}
		}
	}
	else if (fVar2 != 1E+08f)
	{
		if (func_148(iLocal_817, Param0))
		{
			if (func_147(iLocal_817, uParam1, fParam2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_147(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 76:
			*uParam1 = { -1094.711f, -2641.982f, 12.7071f };
			*uParam2 = 188.2694f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { -1917.719f, 4445.75f, 38.6592f };
			*uParam2 = 45.822f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { -482.5762f, 1993.85f, 206.3482f };
			*uParam2 = 263.9373f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { -208.3305f, 4195.341f, 43.1714f };
			*uParam2 = 333.4403f;
			return 1;
			break;
		
		case 74:
			*uParam1 = { 1619.446f, 3820.96f, 33.9381f };
			*uParam2 = 129.6464f;
			return 1;
			break;
		
		case 75:
			*uParam1 = { 2045.169f, 2155.887f, 94.3423f };
			*uParam2 = 347.9475f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 2952.767f, 2807.028f, 40.7635f };
			*uParam2 = 121.2574f;
			return 1;
			break;
		
		case 105:
		case 106:
			*uParam1 = { 2119.676f, 4747.198f, 40.1793f };
			*uParam2 = 305.2213f;
			return 1;
			break;
		
		case 125:
			*uParam1 = { -817.3487f, -1303.89f, 4.0005f };
			*uParam2 = 253.9379f;
			return 1;
			break;
		
		case 126:
			*uParam1 = { 1118.751f, 262.0209f, 79.8555f };
			*uParam2 = 52.3086f;
			return 1;
			break;
		
		case 127:
			*uParam1 = { 2414.063f, 1503.77f, 35.6614f };
			*uParam2 = 124.0994f;
			return 1;
			break;
		
		case 128:
			*uParam1 = { -203.2552f, 6536.089f, 10.0979f };
			*uParam2 = 311.0677f;
			return 1;
			break;
		
		case 129:
			*uParam1 = { -142.367f, -895.0251f, 28.191f };
			*uParam2 = 71.6555f;
			return 1;
			break;
		
		case 131:
			*uParam1 = { -1214.252f, 4629.887f, 133.873f };
			*uParam2 = 123.1562f;
			return 1;
			break;
		
		case 132:
			*uParam1 = { -767.9527f, 4521.882f, 91.6871f };
			*uParam2 = 85.6363f;
			return 1;
			break;
		
		case 134:
			*uParam1 = { -1363.183f, 4468.691f, 23.1468f };
			*uParam2 = 272.2546f;
			return 1;
			break;
		
		case 135:
			*uParam1 = { 2477.088f, 4948.677f, 44.0936f };
			*uParam2 = 49.3948f;
			return 1;
			break;
		
		case 136:
			*uParam1 = { 1047.931f, -203.879f, 69.0164f };
			*uParam2 = 62.0197f;
			return 1;
			break;
		
		case 107:
			*uParam1 = { -1200.863f, -2049.46f, 12.9248f };
			*uParam2 = 334.965f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1960.388f, 3124.797f, 46.877f };
			*uParam2 = 233.484f;
			return 1;
			break;
	}
	return 0;
}

int func_148(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 76:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 15f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, -1157.595f, -2726.636f, 12.94464f, -1110.794f, -2679.33f, 22.94466f, 26f, 0, true))
			{
				return 1;
			}
			break;
		
		case 70:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 38.5f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, -1908.065f, 4432.693f, 51.3842f, -1962.212f, 4473.8f, 22.93989f, 70f, 0, true))
			{
				return 1;
			}
			break;
		
		case 71:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 206.5f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, -541.8311f, 2050.599f, 186.3904f, -499.787f, 1968.325f, 228.0183f, 70f, 0, true))
			{
				return 1;
			}
			break;
		
		case 73:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 43.1f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, -179.8588f, 4216.167f, 30.26505f, -246.32f, 4226.653f, 53.77886f, 70f, 0, true))
			{
				return 1;
			}
			break;
		
		case 74:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 34f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 1634.122f, 3858.049f, 28.33912f, 1573.259f, 3800.442f, 48.35476f, 70f, 0, true))
			{
				return 1;
			}
			break;
		
		case 75:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 94f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 2057.873f, 2059.198f, 63.88074f, 1999.045f, 2190.544f, 122.2642f, 110f, 0, true))
			{
				return 1;
			}
			break;
		
		case 72:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 40.7f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 3028.084f, 2768.167f, 57.72984f, 2944.284f, 2772.836f, 30.23068f, 85f, 0, true))
			{
				return 1;
			}
			break;
		
		case 105:
		case 106:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 305f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 2097.951f, 4820.308f, 55.48169f, 2151.254f, 4726.398f, 31.0732f, 120f, 0, true))
			{
				return 1;
			}
			break;
		
		case 125:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 4.7f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, -763.5086f, -1297.98f, 2.000373f, -864.1372f, -1278.007f, 24.15038f, 85f, 0, true))
			{
				return 1;
			}
			break;
		
		case 126:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 52f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 1137.022f, 89.06853f, 74.89022f, 1267.821f, 292.0106f, 102.9904f, 195f, 0, true))
			{
				return 1;
			}
			break;
		
		case 127:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35.6f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 2512.305f, 1519.462f, 28.55504f, 2380.374f, 1521.587f, 58.80984f, 90f, 0, true))
			{
				return 1;
			}
			break;
		
		case 128:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 10.0979f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, -193.5583f, 6533.439f, -1.902109f, -299.2512f, 6645.049f, 20.45973f, 120f, 0, true))
			{
				return 1;
			}
			break;
		
		case 129:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 325f;
			}
			if (vdist2(Param1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
			{
				return 1;
			}
			break;
		
		case 131:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 133f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, -1171.147f, 4647.89f, 203.7937f, -1280.149f, 4457.597f, 5.653551f, 120f, 0, true))
			{
				return 1;
			}
			break;
		
		case 132:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 91.6f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, -687.974f, 4499.52f, 114.781f, -826.0081f, 4496.864f, 49.88359f, 140f, 0, true))
			{
				return 1;
			}
			break;
		
		case 134:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 23f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, -1364.701f, 4490.626f, 49.52477f, -1367.169f, 4340.34f, -1.682158f, 100f, 0, true))
			{
				return 1;
			}
			break;
		
		case 135:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 44f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 2566.189f, 5007.007f, 97.36896f, 2491.714f, 4923.261f, 30.43494f, 80f, 0, true))
			{
				return 1;
			}
			break;
		
		case 136:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 69f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 1009.917f, -163.4684f, 102.1028f, 1113.474f, -221.3295f, 49.8745f, 90f, 0, true))
			{
				return 1;
			}
			break;
		
		case 107:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 12f;
			}
			if (vdist2(Param1, -1230.622f, -2049.97f, 12.8882f) < (75f * 75f))
			{
				return 1;
			}
			break;
		
		case 65:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 47f;
			}
			if (vdist2(Param1, -1968.1f, 3116.7f, 46.8882f) < (30f * 30f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_149(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 9:
			iVar0 = 2;
			switch (unk_0x344C570D6F8700DF(0, iVar0))
			{
				case 0:
					*uParam1 = { -1646.118f, 4206.743f, 82.9658f };
					*uParam2 = 251.0217f;
					break;
				
				case 1:
					*uParam1 = { -1582.89f, 4201.409f, 79.5905f };
					*uParam2 = 95.4232f;
					break;
			}
			return 1;
			break;
		
		case 11:
			iVar0 = 2;
			switch (unk_0x344C570D6F8700DF(0, iVar0))
			{
				case 0:
					*uParam1 = { 1885.446f, 4738.612f, 39.4154f };
					*uParam2 = 43.9908f;
					break;
				
				case 1:
					*uParam1 = { 1702.424f, 4687.697f, 41.9431f };
					*uParam2 = 2.4487f;
					break;
			}
			return 1;
			break;
		
		case 12:
			iVar0 = 2;
			switch (unk_0x344C570D6F8700DF(0, iVar0))
			{
				case 0:
					*uParam1 = { 1885.446f, 4738.612f, 39.4154f };
					*uParam2 = 43.9908f;
					break;
				
				case 1:
					*uParam1 = { 1702.424f, 4687.697f, 41.9431f };
					*uParam2 = 2.4487f;
					break;
			}
			return 1;
			break;
		
		case 14:
			iVar0 = 2;
			switch (unk_0x344C570D6F8700DF(0, iVar0))
			{
				case 0:
					*uParam1 = { -2934.66f, 3238.404f, 9.4456f };
					*uParam2 = 228.5574f;
					break;
				
				case 1:
					*uParam1 = { -2842.023f, 3145.086f, 9.24f };
					*uParam2 = 45.7287f;
					break;
			}
			return 1;
			break;
		
		case 17:
			*uParam1 = { -204.0333f, 1313.973f, 303.4189f };
			*uParam2 = 126.7738f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { -906.4329f, -2694.28f, 12.8182f };
			*uParam2 = 329.3241f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { -142.367f, -895.0251f, 28.191f };
			*uParam2 = 71.6555f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1753.901f, 107.8206f, 170.2481f };
			*uParam2 = 288.8676f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { -1859.543f, -411.3196f, 44.9677f };
			*uParam2 = 242.8712f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 827.072f, 1282.288f, 359.2872f };
			*uParam2 = 90f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -640.2675f, 6050.98f, 7.4082f };
			*uParam2 = 138.3021f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { -92.2052f, -1254.828f, 28.1682f };
			*uParam2 = 349.959f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { -701.0541f, 5819.116f, 16.198f };
			*uParam2 = 336.3649f;
			return 1;
			break;
		
		case 28:
		case 29:
			*uParam1 = { 569.276f, -1730.967f, 28.1277f };
			*uParam2 = 246.5764f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { -1110.088f, 253.6757f, 63.5431f };
			*uParam2 = 279.1973f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 67.1562f, 4560.134f, 97.8678f };
			*uParam2 = 113.412f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { -1069.076f, 789.2375f, 164.9551f };
			*uParam2 = 98.4554f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { -1073.129f, 364.1223f, 67.3617f };
			*uParam2 = 359.3075f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { -91.4237f, -1305.558f, 28.1569f };
			*uParam2 = 2.2198f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 2479.249f, 3401.234f, 48.9551f };
			*uParam2 = 35.1009f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { -60.0571f, 292.1416f, 104.6818f };
			*uParam2 = 74.4771f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 166.2055f, 194.86f, 104.9587f };
			*uParam2 = 247.5814f;
			return 1;
			break;
		
		case 50:
			*uParam1 = { 1149.978f, -506.4045f, 63.7076f };
			*uParam2 = 97.5469f;
			return 1;
			break;
		
		case 58:
		case 59:
		case 62:
			*uParam1 = { -27.2198f, -1467.933f, 29.8592f };
			*uParam2 = 273.1409f;
			return 1;
			break;
	}
	return 0;
}

int func_150(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 9:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 83.3f;
			}
			if (vdist2(Param1, -1619.53f, 4204.1f, 83.3f) < (20f * 20f))
			{
				return 1;
			}
			break;
		
		case 11:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 1882.79f, 4725.034f, 34.74373f, 1701.497f, 4677.47f, 47.89289f, 159.5f, 0, true))
			{
				return 1;
			}
			break;
		
		case 12:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 35f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 1882.79f, 4725.034f, 34.74373f, 1701.497f, 4677.47f, 47.89289f, 159.5f, 0, true))
			{
				return 1;
			}
			break;
		
		case 14:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 11.66f;
			}
			if (vdist2(Param1, -2892.93f, 3192.37f, 11.66f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 17:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 302.86f;
			}
			if (vdist2(Param1, -188.22f, 1296.1f, 302.86f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 18:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 14.64f;
			}
			if (vdist2(Param1, -954.19f, -2760.05f, 14.64f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 19:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 325f;
			}
			if (vdist2(Param1, -75.59782f, -818.6082f, 325.1745f) < (58f * 58f))
			{
				return 1;
			}
			break;
		
		case 20:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 170.29f;
			}
			if (vdist2(Param1, 1732.27f, 96.36f, 170.29f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 21:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 44.9677f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, -1903.322f, -401.2384f, 19.23456f, -1844.879f, -445.7261f, 73.56197f, 115f, 0, true))
			{
				return 1;
			}
			break;
		
		case 22:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 359f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 794.2453f, 1277.443f, -100f, 833.8215f, 1277.108f, 400f, 19f, 0, true))
			{
				return 1;
			}
			break;
		
		case 23:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 5f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, -1015.526f, 6287.513f, -10.94449f, -761.3104f, 5895.014f, 45.33727f, 167.75f, 0, true))
			{
				return 1;
			}
			break;
		
		case 24:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29.6f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, -72.13491f, -1267.587f, 27.68361f, -72.18015f, -1256.712f, 31f, 30f, 0, true))
			{
				return 1;
			}
			break;
		
		case 26:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 16.3f;
			}
			if (vdist2(Param1, -683.4159f, 5841.043f, 16.3306f) < (20f * 20f))
			{
				return 1;
			}
			break;
		
		case 28:
		case 29:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29f;
			}
			if (vdist2(Param1, 566.1639f, -1773.817f, 29f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 30:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 63.1146f;
			}
			if (vdist2(Param1, -1103.628f, 288.1084f, 63.1146f) < (50f * 50f))
			{
				return 1;
			}
			break;
		
		case 33:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 100f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, -21.12362f, 4518.907f, 119.7836f, 43.13283f, 4538.929f, 72.58955f, 48f, 0, true))
			{
				return 1;
			}
			break;
		
		case 37:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 67.5f;
			}
			if (vdist2(Param1, -1099.502f, 790.2614f, 163.3998f) < (30f * 30f))
			{
				return 1;
			}
			break;
		
		case 39:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 67.5f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, -1088.425f, 372.0723f, 62.75896f, -967.03f, 363.5976f, 101.3483f, 75f, 0, true))
			{
				return 1;
			}
			break;
		
		case 43:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28.2f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, -91.45676f, -1296.975f, 26.15437f, 40.67288f, -1297.459f, 58.29368f, 110f, 0, true))
			{
				return 1;
			}
			break;
		
		case 44:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 49.9f;
			}
			if (vdist2(Param1, 2468.51f, 3437.39f, 49.9f) < (30f * 30f))
			{
				return 1;
			}
			break;
		
		case 47:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 110f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, -78.38029f, 285.5254f, 102.6286f, -51.1546f, 357.5217f, 122.0617f, 40f, 0, true))
			{
				return 1;
			}
			break;
		
		case 49:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 100f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 420.5196f, 116.2892f, 77.57532f, 212.2937f, 193.6794f, 131.8767f, 250f, 0, true))
			{
				return 1;
			}
			break;
		
		case 50:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 64f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 1140.158f, -540.9644f, 49.99944f, 972.3716f, -535.1002f, 85.64397f, 168.25f, 0, true))
			{
				return 1;
			}
			break;
		
		case 58:
		case 59:
		case 62:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 29.6f;
			}
			if (vdist2(Param1, -16.5304f, -1473.121f, 29.611f) < (8f * 8f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_151(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 3:
			*uParam1 = { -1456.347f, -962.5814f, 6.3112f };
			*uParam2 = 140.57f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { 147.6034f, -404.7993f, 40.0892f };
			*uParam2 = 164.0206f;
			return 1;
			break;
		
		case 32:
		case 38:
			*uParam1 = { 1361.675f, -2040.575f, 51.0214f };
			*uParam2 = 281.5022f;
			return 1;
			break;
		
		case 41:
		case 47:
			iVar0 = 2;
			switch (unk_0x344C570D6F8700DF(0, iVar0))
			{
				case 0:
					*uParam1 = { -43.9252f, -1460.432f, 30.7052f };
					*uParam2 = 104.5827f;
					break;
				
				case 1:
					*uParam1 = { 14.0313f, -1460.48f, 29.4397f };
					*uParam2 = 61.9499f;
					break;
			}
			return 1;
			break;
		
		case 48:
			*uParam1 = { -2313.9f, 450.9f, 173.47f };
			*uParam2 = 178.6132f;
			return 1;
			break;
		
		case 45:
			iVar0 = 3;
			switch (unk_0x344C570D6F8700DF(0, iVar0))
			{
				case 0:
					*uParam1 = { 1369.246f, 1147.653f, 112.7592f };
					*uParam2 = 182.0998f;
					break;
				
				case 1:
					*uParam1 = { 1360.848f, 1139.121f, 112.7592f };
					*uParam2 = 83.3356f;
					break;
				
				case 2:
					*uParam1 = { 1364.751f, 1154.367f, 112.7592f };
					*uParam2 = 223.2795f;
					break;
			}
			return 1;
			break;
		
		case 24:
			iVar0 = 2;
			*uParam1 = { 1430.097f, -2588.065f, 47.0326f };
			*uParam2 = 353.6747f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { -943.9154f, -487.7569f, 35.7331f };
			*uParam2 = 27.4f;
			return 1;
			break;
		
		case 86:
			*uParam1 = { 764.6179f, -972.5101f, 24.903f };
			*uParam2 = 162.2939f;
			return 1;
			break;
		
		case 87:
			*uParam1 = { 185.1471f, -3047.229f, 4.7824f };
			*uParam2 = 163.8686f;
			return 1;
			break;
		
		case 78:
			iVar0 = 2;
			switch (unk_0x344C570D6F8700DF(0, iVar0))
			{
				case 0:
					*uParam1 = { 504.1742f, -1652.472f, 28.1893f };
					*uParam2 = 52.3367f;
					break;
				
				case 1:
					*uParam1 = { 275.9677f, -1554.22f, 28.0311f };
					*uParam2 = 303.3013f;
					break;
			}
			return 1;
			break;
		
		case joaat("MPSV_LP0_31"):
			iVar0 = 2;
			switch (unk_0x344C570D6F8700DF(0, iVar0))
			{
				case 0:
					*uParam1 = { 853.9595f, -1590.922f, 30.5996f };
					*uParam2 = 7.148f;
					break;
				
				case 1:
					*uParam1 = { 847.5631f, -1559.719f, 28.7923f };
					*uParam2 = 20.965f;
					break;
			}
			return 1;
			break;
		
		case 83:
			iVar0 = 2;
			switch (unk_0x344C570D6F8700DF(0, iVar0))
			{
				case 0:
					*uParam1 = { 2602.427f, 2852.173f, 35.28f };
					*uParam2 = 19.36f;
					break;
				
				case 1:
					*uParam1 = { 2686.404f, 2957.39f, 35.4683f };
					*uParam2 = 106.36f;
					break;
			}
			return 1;
			break;
		
		case 76:
		case 84:
			*uParam1 = { 135.4725f, -1309.896f, 28.0485f };
			*uParam2 = 301.12f;
			return 1;
			break;
	}
	return 0;
}

int func_152(int iParam0, struct<3> Param1)
{
	switch (iParam0)
	{
		case 3:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 7f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, -1535.754f, -922.101f, 4.122119f, -1487.87f, -961.3929f, 26.71922f, 50f, 0, true))
			{
				return 1;
			}
			break;
		
		case 8:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 40f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 53.12898f, -463.9999f, 36.9208f, 99.3761f, -329.3476f, 118.0454f, 125f, 0, true))
			{
				return 1;
			}
			break;
		
		case 32:
		case 38:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 51.0214f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 1420.347f, -2036.558f, 47.36072f, 1341.11f, -2103.844f, 72.32651f, 55f, 0, true))
			{
				return 1;
			}
			break;
		
		case 41:
		case 47:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 51.0214f;
			}
			if (vdist2(Param1, -13.89061f, -1449.29f, 29.64636f) < (36f * 36f))
			{
				return 1;
			}
			break;
		
		case 48:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 173.47f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, -2306.98f, 435.3038f, 171.4666f, -2303.291f, 366.3199f, 179.6018f, 65.5f, 0, true))
			{
				return 1;
			}
			break;
		
		case 45:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 114f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 1324.172f, 1110.748f, 99.65493f, 1523.097f, 1110.473f, 132.8859f, 170f, 0, true))
			{
				return 1;
			}
			break;
		
		case 24:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 46f;
			}
			if (vdist2(Param1, 1330.389f, -2553.744f, 45.9221f) < (30f * 30f))
			{
				return 1;
			}
			break;
		
		case 60:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 34.5f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, -995.978f, -517.4324f, 11.37763f, -1060.725f, -547.5588f, 65.33043f, 35.75f, 0, true))
			{
				return 1;
			}
			break;
		
		case 86:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 23.18f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 682.6544f, -968.7439f, 19.97575f, 762.8684f, -964.4064f, 43.03712f, 53f, 0, true))
			{
				return 1;
			}
			break;
		
		case 87:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 5f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 148.8361f, -3029.146f, 4.277727f, 148.1396f, -3342.344f, 22.90379f, 97.75f, 0, true))
			{
				return 1;
			}
			break;
		
		case 78:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28.1893f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 446.8174f, -1691.708f, 23.28233f, 288.5565f, -1552.352f, 108.3117f, 155f, 0, true))
			{
				return 1;
			}
			break;
		
		case joaat("MPSV_LP0_31"):
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28.1893f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 910.9382f, -1749.91f, 14.50614f, 921.7415f, -1455.248f, 99.67125f, 210f, 0, true))
			{
				return 1;
			}
			break;
		
		case 83:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 37f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 2657.302f, 2974.529f, 34.53447f, 2591.657f, 2880.223f, 68.08156f, 78.75f, 0, true))
			{
				return 1;
			}
			break;
		
		case 76:
		case 84:
			if (Param1.f_2 == 1f)
			{
				Param1.f_2 = 28f;
			}
			if (unk_0x3BC3A4E4A1827EEE(Param1, 83.32325f, -1312.172f, 23.33694f, 148.383f, -1273.553f, 49.46651f, 65f, 0, true))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_153(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	
	iVar0 = 263;
	fVar1 = 999999f;
	iVar3 = 65;
	while (iVar3 <= 111)
	{
		*iParam1 = iVar3;
		if (func_155(iParam1))
		{
			if (func_154(*iParam1))
			{
				Var4 = { func_85(*iParam1, 0) };
				if (uParam0->f_2 == 1f)
				{
					Var4.f_2 = 1f;
				}
				fVar2 = vdist(*uParam0, Var4);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 35f)
					{
						fVar1 = fVar2;
						iVar0 = *iParam1;
					}
				}
			}
		}
		iVar3++;
	}
	iVar3 = 125;
	while (iVar3 <= 137)
	{
		*iParam1 = iVar3;
		if (func_155(iParam1))
		{
			if (func_154(*iParam1))
			{
				Var4 = { func_85(*iParam1, 0) };
				if (uParam0->f_2 == 1f)
				{
					Var4.f_2 = 1f;
				}
				fVar2 = vdist(*uParam0, Var4);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 35f)
					{
						fVar1 = fVar2;
						iVar0 = *iParam1;
					}
				}
			}
		}
		iVar3++;
	}
	if (iVar0 != 263)
	{
		*iParam1 = iVar0;
		*fParam2 = fVar1;
		return 1;
	}
	*iParam1 = 263;
	*fParam2 = 999999f;
	return 0;
}

bool func_154(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0;
	}
	return unk_0x8F678487EEBD8CE4(Global_31346[iVar0 /*23*/].f_19);
}

int func_155(var uParam0)
{
	if ((((((((((((((((((((*uParam0 == 70 || *uParam0 == 71) || *uParam0 == 73) || *uParam0 == 74) || *uParam0 == 75) || *uParam0 == 72) || *uParam0 == 76) || *uParam0 == 105) || *uParam0 == 106) || *uParam0 == 125) || *uParam0 == 126) || *uParam0 == 127) || *uParam0 == 128) || *uParam0 == 129) || *uParam0 == 131) || *uParam0 == 132) || *uParam0 == 134) || *uParam0 == 135) || *uParam0 == 136) || *uParam0 == 107) || *uParam0 == 65)
	{
		return 1;
	}
	return 0;
}

int func_156(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar4;
	struct<27> Var5;
	
	iVar0 = -1;
	fVar1 = 999999f;
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 63)
	{
		*iParam1 = iVar4;
		if (unk_0xCE990E643CD9D0E5(Global_111858.f_18570[*iParam1 /*6*/], 0) && !unk_0xCE990E643CD9D0E5(Global_111858.f_18570[*iParam1 /*6*/], 3))
		{
			func_99(*iParam1, &Var5);
			if (unk_0xCE990E643CD9D0E5(Var5.f_26, func_157()))
			{
				Var3 = { Var5.f_6 };
				if (uParam0->f_2 == 1f)
				{
					Var3.f_2 = 1f;
				}
				fVar2 = vdist(*uParam0, Var3);
				if (fVar2 < fVar1)
				{
					if (fVar2 < 209f)
					{
						fVar1 = fVar2;
						iVar0 = iVar4;
					}
				}
			}
		}
		iVar4++;
	}
	if (iVar0 != -1)
	{
		*fParam2 = fVar1;
		*iParam1 = iVar0;
		return 1;
	}
	*iParam1 = -1;
	*fParam2 = 999999f;
	return 0;
}

int func_157()
{
	if (func_40(14))
	{
		if (!unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[0 /*29*/])
			{
				return 0;
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[1 /*29*/])
			{
				return 1;
			}
			else if (unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()) == Global_111858.f_28046[2 /*29*/])
			{
				return 2;
			}
			else
			{
				return 3;
			}
		}
		else
		{
			return 3;
		}
	}
	return func_57();
}

int func_158(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	int iVar4;
	
	iVar0 = -1;
	fVar1 = 999999f;
	iVar4 = 0;
	while (iVar4 < 8)
	{
		if (Global_95888[iVar4 /*17*/])
		{
			if (Global_95888[iVar4 /*17*/].f_9 != 263)
			{
				if (unk_0x8F678487EEBD8CE4(Global_31346[Global_95888[iVar4 /*17*/].f_9 /*23*/].f_19))
				{
					Var3 = { unk_0x41A1ED9BB4ED4772(Global_31346[Global_95888[iVar4 /*17*/].f_9 /*23*/].f_19) };
					if (uParam0->f_2 == 1f)
					{
						Var3.f_2 = 1f;
					}
					fVar2 = vdist(*uParam0, Var3);
					if (fVar2 < fVar1)
					{
						if (fVar2 < Global_95888[iVar4 /*17*/].f_10.f_2)
						{
							fVar1 = fVar2;
							iVar0 = iVar4;
						}
					}
				}
			}
		}
		iVar4++;
	}
	if (iVar0 != -1)
	{
		*fParam2 = fVar1;
		*iParam1 = Global_95888[iVar0 /*17*/].f_5;
		return 1;
	}
	*iParam1 = -1;
	*fParam2 = 999999f;
	return 0;
}

void func_159()
{
	if (Global_111858.f_9081)
	{
		Global_76850 = 1;
	}
}

void func_160(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	if (unk_0xA9612D351EFBCEE5(func_6()))
	{
		unk_0x611FFFF42603C2CD(func_6(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			if (iVar0 > 1)
			{
				iVar2 = unk_0x1615D8CF888EABB9(func_6(), 1);
				if (!unk_0x5AEB5DDFFAD43CA5(iVar2))
				{
					if (!unk_0xACBCFA3095C5A434(iVar2, Global_110889))
					{
						iVar3 = 0;
						if (!unk_0xB064AF9925F5537B(Global_110889, iVar3, 0))
						{
							iVar3 = func_161(&Global_110889);
							if (unk_0xB064AF9925F5537B(Global_110889, iVar3, 0))
							{
								unk_0x9B94F6169B0DAEFD(iVar2);
								unk_0x13A4BD6CC31F7B8F(iVar2, Global_110889, iVar3);
							}
						}
						else
						{
							unk_0x9B94F6169B0DAEFD(iVar2);
							unk_0x13A4BD6CC31F7B8F(iVar2, Global_110889, iVar3);
						}
					}
				}
			}
			iVar2 = unk_0x1615D8CF888EABB9(func_6(), 0);
			if (!unk_0x5AEB5DDFFAD43CA5(iVar2))
			{
				if (!unk_0xACBCFA3095C5A434(iVar2, Global_110889))
				{
					unk_0x9B94F6169B0DAEFD(iVar2);
					iVar3 = 1;
					if (iParam0 == 1)
					{
						iVar3 = 2;
					}
					if (!unk_0xB064AF9925F5537B(Global_110889, iVar3, 0))
					{
						iVar3 = func_161(&Global_110889);
						if (unk_0xB064AF9925F5537B(Global_110889, iVar3, 0))
						{
							unk_0x9B94F6169B0DAEFD(iVar2);
							unk_0x13A4BD6CC31F7B8F(iVar2, Global_110889, iVar3);
						}
					}
					else
					{
						unk_0x9B94F6169B0DAEFD(iVar2);
						unk_0x13A4BD6CC31F7B8F(iVar2, Global_110889, iVar3);
					}
				}
			}
		}
	}
}

int func_161(var uParam0)
{
	if (unk_0xAE06B9E39EBDE049(*uParam0))
	{
		if (!unk_0xA59F96B50B97E63C(*uParam0, 0))
		{
			if (unk_0xB064AF9925F5537B(*uParam0, 0, 0))
			{
				return 0;
			}
			if (unk_0xB064AF9925F5537B(*uParam0, 1, 0))
			{
				return 1;
			}
			if (unk_0xB064AF9925F5537B(*uParam0, 2, 0))
			{
				return 2;
			}
		}
	}
	return -2;
}

bool func_162(int iParam0, int iParam1)
{
	return (unk_0x578C4EF320340AF7() - iParam0) > iParam1;
}

void func_163(bool bParam0)
{
	if (bParam0)
	{
		func_170();
		if (Global_19681.f_1 == 10 || Global_19681.f_1 == 9)
		{
			unk_0xBE20AB8238688965(&Global_7552, 16);
		}
		Global_19681.f_1 = 1;
		if (func_169(0))
		{
			func_164(0);
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

void func_164(int iParam0)
{
	if (func_168())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_167())
		{
			func_166(1, 1);
		}
		else
		{
			func_166(0, 0);
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
	if (!func_165())
	{
		Global_19681.f_1 = 3;
	}
}

int func_165()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_166(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_169(0))
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

bool func_167()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

bool func_168()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

int func_169(int iParam0)
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

void func_170()
{
	if (Global_19681.f_1 == 9 || Global_19681.f_1 == 10)
	{
		Global_21058 = 0;
		Global_21054 = 1;
	}
}

void func_171()
{
	struct<3> Var0;
	float fVar1;
	
	if (!unk_0x5AEB5DDFFAD43CA5(Global_110890) && unk_0x80FF6C016CDB0FAF(Global_110889, 0))
	{
		if (unk_0xACBCFA3095C5A434(Global_110890, Global_110889))
		{
			if (unk_0xFD7B900D58065E3B(Global_110889))
			{
				if (!unk_0x9934470AA0A08B57(Global_110890, &cLocal_824, "leanover_enter", 3) && !unk_0x9934470AA0A08B57(Global_110890, &cLocal_824, "leanover_idle", 3))
				{
					if (!func_2(Global_110890, -2118855366))
					{
						unk_0xDC3073F7CC12181D(Global_110890, Global_110889, 1, 1000000);
					}
					else
					{
						func_177();
					}
				}
				func_176(&Global_110889, iLocal_839);
			}
			else if (!func_2(Global_110890, -272084098))
			{
				Var0 = { unk_0x3E4D3CCC220BDFB1(Global_110889, true) };
				fVar1 = unk_0xEF7858F25585F853(Global_110889);
				unk_0x2976DB62CAE67C30(Global_110890, Global_110889, Var0, fVar1, 3, 60f, 0);
			}
		}
	}
}

void func_172()
{
	int iVar0;
	float fVar1;
	
	if (bLocal_60)
	{
		if (bLocal_61)
		{
			func_123();
			if (unk_0x80FF6C016CDB0FAF(Global_110889, 0))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(Global_110890))
				{
					if (func_174())
					{
						if (unk_0xF3A639BEE7AADF55(Global_110889) < 2f)
						{
							if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
							{
								if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Global_110889, true))
								{
									unk_0x0AB756271BADC8DF(unk_0x9B0761B4C3EB8BC7(), 0, 0);
								}
							}
							unk_0xDC3073F7CC12181D(Global_110890, Global_110889, 24, 5000);
							unk_0xCBA6B2B569DCAFD8(Global_110890, true);
							bLocal_65 = true;
							iLocal_822 = 2;
						}
					}
					else if (unk_0x9934470AA0A08B57(Global_110890, &cLocal_824, "leanover_enter", 3) || unk_0x9934470AA0A08B57(Global_110890, &cLocal_824, "leanover_idle", 3))
					{
						if (unk_0x60D775F2D5B6439B(Global_110890, unk_0x9B0761B4C3EB8BC7()))
						{
							unk_0xE2348E4036041923(Global_110890);
						}
						unk_0x756D74A3EF0AB788(Global_110890, &cLocal_824, "leanover_exit", 4f, -4f, -1, 0, 0, 0, 0, 0);
					}
					else if (unk_0x9934470AA0A08B57(Global_110890, &cLocal_824, "leanover_exit", 3))
					{
						unk_0x6C8C728392173000(Global_110890, &cLocal_824, "leanover_exit", 1.2f);
						iLocal_90 = unk_0x578C4EF320340AF7();
						func_176(&Global_110889, iLocal_839);
					}
					else if (!func_2(Global_110890, 242628503))
					{
						if (func_173(&iLocal_90, iLocal_839))
						{
							if (!func_2(Global_110890, -2118855366))
							{
								unk_0xDC3073F7CC12181D(Global_110890, Global_110889, 1, 1000000);
							}
						}
						else
						{
							iLocal_56 = 0;
							if (bLocal_64)
							{
								fVar1 = 25f;
								iVar0 = iLocal_70;
							}
							else
							{
								fVar1 = 12f;
								iVar0 = iLocal_69;
							}
							unk_0x9B94F6169B0DAEFD(Global_110890);
							unk_0xE2348E4036041923(Global_110890);
							unk_0x8F4C441CE8099187(Global_110890, 0.5f);
							unk_0x9DC06E2A59C5AEBB(&iLocal_813);
							unk_0x07A8BD8DA27FA9CE(0, Global_110889, Global_110896, fVar1, iVar0, 45f);
							unk_0x2976DB62CAE67C30(0, Global_110889, Global_110896, Global_110902, iLocal_110, 60f, 1);
							unk_0x19F29730874AD6F1(iLocal_813);
							unk_0x9B6EC2CECE1010EF(Global_110890, iLocal_813);
							unk_0x4F83FEE4454169D4(&iLocal_813);
						}
					}
				}
			}
		}
	}
}

int func_173(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	
	if (func_162(*iParam0, 2000) || *iParam0 == -1)
	{
		return 0;
	}
	if (!unk_0xA9612D351EFBCEE5(func_6()))
	{
		*iParam0 = -1;
		return 0;
	}
	unk_0x611FFFF42603C2CD(func_6(), &uVar1, &iVar0);
	if (iVar0 < 1)
	{
		*iParam0 = -1;
		return 0;
	}
	bVar4 = true;
	bVar5 = false;
	iVar3 = unk_0x1615D8CF888EABB9(func_6(), 0);
	if (!unk_0x5AEB5DDFFAD43CA5(iVar3))
	{
		iVar6 = 1;
		if (iParam1 == 1)
		{
			iVar6 = 2;
		}
		bVar4 = true;
		iVar2 = unk_0x10D3F7E169A49C44(Global_110889, iVar6, 0);
		if (unk_0xAE06B9E39EBDE049(iVar2))
		{
			if (iVar2 == unk_0x9B0761B4C3EB8BC7())
			{
				bVar4 = false;
			}
			else if (iVar2 == iVar3)
			{
				bVar4 = false;
			}
		}
		if (unk_0xD15202C6B03220B8(iVar3, 167, 0))
		{
			bVar4 = false;
		}
		if (func_2(iVar3, -1794415470))
		{
			bVar4 = false;
			bVar5 = true;
		}
		if (bVar4)
		{
			unk_0xC584E49FC3559A86(iVar3, Global_110889, 20000, iVar6, 2f, 9437185, 0);
			bVar5 = true;
		}
	}
	if (iVar0 > 1)
	{
		iVar3 = unk_0x1615D8CF888EABB9(func_6(), 1);
		if (!unk_0x5AEB5DDFFAD43CA5(iVar3))
		{
			bVar4 = true;
			iVar6 = 0;
			iVar2 = unk_0x10D3F7E169A49C44(Global_110889, iVar6, 0);
			if (unk_0xAE06B9E39EBDE049(iVar2))
			{
				if (iVar2 == unk_0x9B0761B4C3EB8BC7())
				{
					bVar4 = false;
				}
				else if (iVar2 == iVar3)
				{
					bVar4 = false;
				}
			}
			if (unk_0xD15202C6B03220B8(iVar3, 167, 0))
			{
				bVar4 = false;
			}
			if (func_2(iVar3, -1794415470))
			{
				bVar4 = false;
				bVar5 = true;
			}
			if (bVar4)
			{
				unk_0xC584E49FC3559A86(iVar3, Global_110889, 20000, iVar6, 2f, 9437185, 0);
				bVar5 = true;
			}
		}
	}
	if (bVar5)
	{
		return 1;
	}
	return 0;
}

int func_174()
{
	if ((unk_0xC2169C00B643278B(Global_110889, Global_110896, 45f, 45f, 20f, false, true, 0) || iLocal_56) || iLocal_821 == 4)
	{
		iLocal_56 = 1;
		if (unk_0x16BC17A8EDC701A2(Global_110890, 242628503) == 7)
		{
			return 1;
		}
	}
	return 0;
}

int func_175()
{
	if (bLocal_60)
	{
		if (bLocal_61)
		{
			return 1;
		}
		else if (func_126(&Local_43, &Global_110896, &Global_110902))
		{
			iLocal_103 = 0;
			Local_833 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false) };
			fLocal_83 = vdist(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), Global_110896);
			bLocal_61 = true;
			return 1;
		}
	}
	return 0;
}

void func_176(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	
	if (unk_0xA9612D351EFBCEE5(func_6()))
	{
		unk_0x611FFFF42603C2CD(func_6(), &uVar1, &iVar0);
		if (iVar0 > 0)
		{
			iVar2 = unk_0x1615D8CF888EABB9(func_6(), 0);
			if (!unk_0x5AEB5DDFFAD43CA5(iVar2))
			{
				iVar5 = 1;
				if (iParam1 == 1)
				{
					iVar5 = 2;
				}
				bVar4 = true;
				iVar3 = unk_0x10D3F7E169A49C44(*uParam0, iVar5, 0);
				if (unk_0xAE06B9E39EBDE049(iVar3))
				{
					if (iVar3 == unk_0x9B0761B4C3EB8BC7())
					{
						bVar4 = false;
					}
					else if (iVar3 == iVar2)
					{
						bVar4 = false;
					}
				}
				if (unk_0xD15202C6B03220B8(iVar2, 167, 0))
				{
					bVar4 = false;
				}
				if (func_2(iVar2, -1794415470))
				{
					bVar4 = false;
				}
				if (bVar4)
				{
					unk_0xC584E49FC3559A86(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0);
				}
			}
			if (iVar0 > 1)
			{
				iVar2 = unk_0x1615D8CF888EABB9(func_6(), 1);
				if (!unk_0x5AEB5DDFFAD43CA5(iVar2))
				{
					bVar4 = true;
					iVar5 = 0;
					iVar3 = unk_0x10D3F7E169A49C44(*uParam0, iVar5, 0);
					if (unk_0xAE06B9E39EBDE049(iVar3))
					{
						if (iVar3 == unk_0x9B0761B4C3EB8BC7())
						{
							bVar4 = false;
						}
						else if (iVar3 == iVar2)
						{
							bVar4 = false;
						}
					}
					if (unk_0xD15202C6B03220B8(iVar2, 167, 0))
					{
						bVar4 = false;
					}
					if (func_2(iVar2, -1794415470))
					{
						bVar4 = false;
					}
					if (bVar4)
					{
						unk_0xC584E49FC3559A86(iVar2, *uParam0, 20000, iVar5, 2f, 9437185, 0);
					}
				}
			}
		}
	}
}

int func_177()
{
	if (!unk_0x5AEB5DDFFAD43CA5(Global_110890) && unk_0x80FF6C016CDB0FAF(Global_110889, 0))
	{
		if (unk_0xACBCFA3095C5A434(Global_110890, Global_110889))
		{
			unk_0x131ED02492676000(&cLocal_824);
			if (unk_0xC614DDE265D18415(&cLocal_824))
			{
				if (unk_0x60D775F2D5B6439B(Global_110890, unk_0x9B0761B4C3EB8BC7()))
				{
					unk_0xE2348E4036041923(Global_110890);
				}
				unk_0x9DC06E2A59C5AEBB(&iLocal_813);
				unk_0x756D74A3EF0AB788(0, &cLocal_824, "leanover_enter", 4f, -8f, -1, 0, 0, 0, 0, 0);
				unk_0x756D74A3EF0AB788(0, &cLocal_824, "leanover_idle", 4f, -8f, -1, 1, 0, 0, 0, 0);
				unk_0x19F29730874AD6F1(iLocal_813);
				unk_0x9B6EC2CECE1010EF(Global_110890, iLocal_813);
				unk_0x4F83FEE4454169D4(&iLocal_813);
				return 1;
			}
		}
	}
	return 0;
}

int func_178()
{
	if (unk_0xAE06B9E39EBDE049(iLocal_109))
	{
		return 1;
	}
	if (unk_0xAE06B9E39EBDE049(Global_110889))
	{
		if (unk_0x80FF6C016CDB0FAF(Global_110889, 0))
		{
			iLocal_109 = unk_0x79CC07752E7432A1(iLocal_108, unk_0x3E4D3CCC220BDFB1(Global_110889, true), true, true, false);
			unk_0xF8A652CE310FFC53(iLocal_109, Global_110889, unk_0x0724529FC474C803(Global_110889, "Chassis"), Local_837, Local_838, 0, 0, 0, 0, 2, 1);
			unk_0x57E53AC681422647(Global_110889, 0);
			if (!unk_0xA9A353D835A7867C("taxi"))
			{
				unk_0x3FF471D4A18A5ED5("taxi", 0);
				unk_0xC7DE5B846819A9B2(unk_0x36FE6D3220816ADA(iLocal_109));
			}
			iLocal_93 = unk_0x2BC38EC678978375("taxi");
		}
	}
	return 0;
}

int func_179()
{
	unk_0x78FCB2E22C41B9D5(iLocal_108);
	iLocal_111 = unk_0x5DEA4192B46CB99B("taxi_display");
	iLocal_112 = unk_0x5DEA4192B46CB99B("instructional_buttons");
	unk_0x131ED02492676000(&cLocal_824);
	if (((unk_0x7D167B9A0CCDA347(iLocal_108) && unk_0x95EF219D38B20CFF(iLocal_111)) && unk_0x95EF219D38B20CFF(iLocal_112)) && unk_0xC614DDE265D18415(&cLocal_824))
	{
		return 1;
	}
	return 0;
}

void func_180()
{
	if (!unk_0x80FF6C016CDB0FAF(Global_110889, 0))
	{
		return;
	}
	if (!unk_0x40397A9A17EEC1C5(iLocal_68))
	{
		if (!func_188() && !func_187(8, -1))
		{
			iLocal_68 = unk_0x68C2E3309DCAD71E("DEFAULT_SCRIPTED_CAMERA", false);
			unk_0x3B1D5D044BC72834(iLocal_68, Global_110889, Local_835, 1);
			func_184();
			unk_0x0473DA77B4E870C1(iLocal_68, 1);
		}
	}
	else if (!bLocal_60 || bLocal_59)
	{
		if (!func_188() && !func_187(8, -1))
		{
			if (!unk_0xC516FEEB950FFD58(iLocal_68))
			{
				func_183(4, 1, -1);
				unk_0x0473DA77B4E870C1(iLocal_68, 1);
				func_182();
				unk_0x856549C07003344B(iLocal_68, true);
				unk_0x3ED9330214992278(true, false, 3000, true, 0, 0);
				Global_110906 = 1;
				unk_0x92B14FF2F31BE63D(1);
				func_184();
				iLocal_58 = 1;
			}
			else
			{
				func_184();
			}
			unk_0x779660A9E5364C4D(0, 0, 1);
		}
	}
	else if (unk_0xC516FEEB950FFD58(iLocal_68))
	{
		unk_0x856549C07003344B(iLocal_68, false);
		unk_0x4C4FC7841A5FB983(0f);
		unk_0x7965943E39128B42(0f, 1065353216);
		unk_0x3ED9330214992278(false, false, 3000, true, 0, 0);
		Global_110906 = 0;
		unk_0x92B14FF2F31BE63D(0);
		unk_0xEAF342510C682548();
		unk_0x49EAC3B3479D60FE();
		unk_0x70EEA67CF09450BA(0);
		iLocal_58 = 1;
		func_181();
	}
}

void func_181()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_91)
	{
		if (bLocal_60)
		{
			if (Local_43.x == Local_819[iVar0 /*3*/])
			{
				iLocal_92 = iVar0;
			}
		}
		iVar0++;
	}
	unk_0x830F007E19C63E14(iLocal_111, "HIGHLIGHT_DESTINATION");
	unk_0xAD291B8F75D737AD(iLocal_92);
	unk_0xE1FDD153F5858534();
}

void func_182()
{
	struct<3> Var0;
	
	if (unk_0x8F678487EEBD8CE4(Local_43.x))
	{
		Var0 = { unk_0x41A1ED9BB4ED4772(Local_43.x) };
		if (unk_0x40397A9A17EEC1C5(iLocal_68) && unk_0xC516FEEB950FFD58(iLocal_68))
		{
			unk_0x016283822C39A5D8(Var0.x, Var0.f_1);
			unk_0x5F199185DD70A092(0);
			unk_0x70EEA67CF09450BA(1400);
		}
	}
}

void func_183(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1377236.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				unk_0xBE20AB8238688965(&(Global_1377236.f_1046), iParam0);
			}
			else
			{
				unk_0xD2459066EA58CE43(&(Global_1377236.f_1046), iParam0);
			}
			break;
	}
}

void func_184()
{
	if (unk_0x40397A9A17EEC1C5(iLocal_68))
	{
		func_185(Global_110889, &iLocal_68, Local_836);
		unk_0xD64C2E5B5BA2D347(iLocal_68, fLocal_74);
		unk_0x8FFDD70F5142C6E0(iLocal_68, 0.01f);
		unk_0x32BA7619D645115E(iLocal_68, 1);
		unk_0xEE0C30F080302B85(1);
	}
}

void func_185(int iParam0, int iParam1, struct<3> Param2)
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (unk_0x40397A9A17EEC1C5(*iParam1))
		{
			Var0 = { unk_0x090239DEAF625B17(iParam0, 2) };
			fVar3 = Var0.f_1;
			Var4 = { func_84(unk_0x7EC595B99EA7C4B1(Global_110889, Param2) - unk_0x7EC595B99EA7C4B1(Global_110889, Local_835)) };
			func_186(Var4, &fVar1, &fVar2, 1);
			unk_0xBF92D2A60C7C686E(*iParam1, fVar1, fVar3, fVar2, 2);
		}
	}
}

void func_186(struct<3> Param0, var uParam1, var uParam2, int iParam3)
{
	float fVar0;
	
	if (Param0.f_1 != 0f)
	{
		*uParam2 = unk_0x8C91FF3D82E6FB27(Param0.x, Param0.f_1);
	}
	else if (Param0.x < 0f)
	{
		*uParam2 = -90f;
	}
	else
	{
		*uParam2 = 90f;
	}
	if (iParam3 == 1)
	{
		*uParam2 = (*uParam2 * -1f);
		if (*uParam2 < 0f)
		{
			*uParam2 = (*uParam2 + 360f);
		}
	}
	fVar0 = sqrt(((Param0.x * Param0.x) + (Param0.f_1 * Param0.f_1)));
	if (fVar0 != 0f)
	{
		*uParam1 = unk_0x8C91FF3D82E6FB27(Param0.f_2, fVar0);
	}
	else if (Param0.f_2 < 0f)
	{
		*uParam1 = -90f;
	}
	else
	{
		*uParam1 = 90f;
	}
}

bool func_187(int iParam0, int iParam1)
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

bool func_188()
{
	return Global_22409;
}

void func_189()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<3> Var5;
	int iVar6;
	
	iVar0 = 0;
	func_194();
	unk_0x830F007E19C63E14(iLocal_111, "CLEAR_TAXI_DISPLAY");
	unk_0xE1FDD153F5858534();
	iVar0 = 0;
	while (iVar0 < iLocal_91)
	{
		if (!unk_0x8F678487EEBD8CE4(Local_819[iVar0 /*3*/]))
		{
		}
		else if (func_129(Local_819[iVar0 /*3*/]) == -1)
		{
		}
		else if (func_133(unk_0x41A1ED9BB4ED4772(Local_819[iVar0 /*3*/]), 0f, 0f, 0f, 1056964608, 0))
		{
		}
		else
		{
			unk_0x830F007E19C63E14(iLocal_111, "ADD_TAXI_DESTINATION");
			unk_0xAD291B8F75D737AD(iVar0);
			unk_0xAD291B8F75D737AD(unk_0x456314646600276D(Local_819[iVar0 /*3*/]));
			unk_0x28DD484BAEAF8437(unk_0x0F8169DD7499794D(Local_819[iVar0 /*3*/]), &iVar1, &iVar2, &iVar3, &uVar4);
			unk_0xAD291B8F75D737AD(iVar1);
			unk_0xAD291B8F75D737AD(iVar2);
			unk_0xAD291B8F75D737AD(iVar3);
			iVar6 = func_192(Local_819[iVar0 /*3*/]);
			if (iVar6 == -1)
			{
				unk_0xB23270F3D5E62FDE("STRING");
				unk_0x7E09E9BB7DBA3F8D(Local_819[iVar0 /*3*/]);
				unk_0x2042E9CA4306F725();
			}
			else
			{
				unk_0xB23270F3D5E62FDE("STRING");
				unk_0x6A826E35A3096ED0(func_190(iVar6));
				unk_0x2042E9CA4306F725();
			}
			if (unk_0x04FA724B68B59AC3(Local_819[iVar0 /*3*/]) == 2)
			{
				if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9048E8838E822F21(unk_0x255EBCF840E6A9BB(Local_819[iVar0 /*3*/]))))
				{
					Var5 = { unk_0x3E4D3CCC220BDFB1(unk_0x9048E8838E822F21(unk_0x255EBCF840E6A9BB(Local_819[iVar0 /*3*/])), true) };
				}
			}
			else if (unk_0x04FA724B68B59AC3(Local_819[iVar0 /*3*/]) == 1)
			{
				if (unk_0x80FF6C016CDB0FAF(unk_0x255EBCF840E6A9BB(Local_819[iVar0 /*3*/]), 0))
				{
					Var5 = { unk_0x3E4D3CCC220BDFB1(unk_0x255EBCF840E6A9BB(Local_819[iVar0 /*3*/]), true) };
				}
			}
			else
			{
				Var5 = { unk_0x41A1ED9BB4ED4772(Local_819[iVar0 /*3*/]) };
			}
			func_70(unk_0x5455B0009696FA6A(Var5));
			if (Local_819[iVar0 /*3*/].f_2 == 0)
			{
				if (Local_819[iVar0 /*3*/].f_1 != 0)
				{
					unk_0xB23270F3D5E62FDE("STRTNM1");
					unk_0x08DE05B7F087C219(Local_819[iVar0 /*3*/].f_1);
					unk_0x2042E9CA4306F725();
				}
			}
			else
			{
				unk_0xB23270F3D5E62FDE("STRTNM2");
				unk_0x08DE05B7F087C219(Local_819[iVar0 /*3*/].f_1);
				unk_0x08DE05B7F087C219(Local_819[iVar0 /*3*/].f_2);
				unk_0x2042E9CA4306F725();
			}
			unk_0xE1FDD153F5858534();
			if (bLocal_60)
			{
				if (Local_43.x == Local_819[iVar0 /*3*/])
				{
					iLocal_92 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (bLocal_60)
	{
		unk_0x830F007E19C63E14(iLocal_111, "SHOW_TAXI_DESTINATION");
		unk_0xE1FDD153F5858534();
		unk_0x830F007E19C63E14(iLocal_111, "HIGHLIGHT_DESTINATION");
		unk_0xAD291B8F75D737AD(iLocal_92);
		unk_0xE1FDD153F5858534();
	}
	else
	{
		unk_0x830F007E19C63E14(iLocal_111, "SET_TAXI_PRICE");
		unk_0xAD291B8F75D737AD(iLocal_101);
		unk_0xE1FDD153F5858534();
		unk_0x830F007E19C63E14(iLocal_111, "SHOW_TAXI_DESTINATION");
		unk_0xE1FDD153F5858534();
		unk_0x830F007E19C63E14(iLocal_111, "HIGHLIGHT_DESTINATION");
		unk_0xAD291B8F75D737AD(iLocal_92);
		unk_0xE1FDD153F5858534();
	}
}

char* func_190(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL";
			break;
		
		case 1:
			return "SB_BAR";
			break;
		
		case 2:
			return "SB_BAR";
			break;
		
		case 3:
			return "SB_BAR";
			break;
		
		case 4:
			return "SB_BAR";
			break;
		
		case 5:
			return "SB_BAR";
			break;
		
		case 6:
			return "SB_BAR";
			break;
		
		case 7:
			return func_191(iParam0, 0);
			break;
		
		case 8:
			return func_191(iParam0, 0);
			break;
		
		case 9:
			return func_191(iParam0, 0);
			break;
		
		case 10:
			return func_191(iParam0, 0);
			break;
		
		case 11:
			return func_191(iParam0, 0);
			break;
		
		case 12:
			return func_191(iParam0, 0);
			break;
		
		case 13:
			return func_191(iParam0, 0);
			break;
		
		case 14:
			return func_191(iParam0, 0);
			break;
		
		case 15:
			return func_191(iParam0, 0);
			break;
		
		case 16:
			return func_191(iParam0, 0);
			break;
		
		case 17:
			return func_191(iParam0, 0);
			break;
		
		case 18:
			return func_191(iParam0, 0);
			break;
		
		case 19:
			return func_191(iParam0, 0);
			break;
		
		case 20:
			return func_191(iParam0, 0);
			break;
		
		case 21:
			return func_191(iParam0, 0);
			break;
		
		case 22:
			return "SB_TAT";
			break;
		
		case 23:
			return "SB_TAT";
			break;
		
		case 24:
			return "SB_TAT";
			break;
		
		case 25:
			return "SB_TAT";
			break;
		
		case 26:
			return "SB_TAT";
			break;
		
		case 27:
			return "SB_TAT";
			break;
		
		case 28:
			return "SB_AMU2";
			break;
		
		case 29:
			return "SB_AMU";
			break;
		
		case 30:
			return "SB_AMU";
			break;
		
		case 31:
			return "SB_AMU";
			break;
		
		case 32:
			return "SB_AMU";
			break;
		
		case 33:
			return "SB_AMU";
			break;
		
		case 34:
			return "SB_AMU";
			break;
		
		case 35:
			return "SB_AMU";
			break;
		
		case 36:
			return "SB_AMU";
			break;
		
		case 37:
			return "SB_AMU";
			break;
		
		case 38:
			return "SB_AMU2";
			break;
		
		case 39:
			return func_191(iParam0, 0);
			break;
		
		case 40:
			return func_191(iParam0, 0);
			break;
		
		case 41:
			return func_191(iParam0, 0);
			break;
		
		case 42:
			return func_191(iParam0, 0);
			break;
		
		case 43:
			return func_191(iParam0, 0);
			break;
		
		case 44:
			return func_191(iParam0, 0);
			break;
		
		case 45:
			return func_191(iParam0, 0);
			break;
		
		case 46:
			return "SB_AMU";
			break;
		
		case 47:
			return "SB_AMU";
			break;
		
		case 48:
			return "SB_AMU";
			break;
		
		case 49:
			return "SB_AMU";
			break;
		
		case 52:
			return "SB_AMU";
			break;
		
		case 50:
			return "SB_BAR";
			break;
		
		case 51:
			return "S_CL_BL";
			break;
		
		case 53:
			return "SB_AMU";
			break;
	}
	return "SHOP_BLIP_INV";
}

char* func_191(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
		
		case 44:
			return "S_MO_09";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "S_MO_10";
				
				case 11:
					return "S_MO_B";
				
				case 10:
					return "S_MO_T";
				
				case 12:
					return "S_MO_HA";
				
				case 13:
					return "S_MO_AOC";
				
				case 14:
					return "S_MO_AOC";
					break;
				
				case 15:
					return "S_MO_AOC";
					break;
				
				case 16:
					return "S_MO_AOC";
					break;
				
				case 17:
					return "S_MO_AOC";
					break;
			}
			return "S_MO_11";
			break;
		
		case 46:
			return "S_G_12";
			break;
		
		case 47:
			return "S_G_13";
			break;
		
		case 48:
			return "S_G_14";
			break;
		
		case 49:
			return "S_G_15";
			break;
		
		case 52:
			return "S_G_16";
			break;
		
		case 53:
			return "S_G_17";
			break;
		
		case 50:
			return "S_H_08";
			break;
		
		case 51:
			return "S_CL_09";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_192(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 54)
	{
		iVar1 = iVar0;
		iVar2 = func_193(iVar1);
		if (Global_31346[iVar2 /*23*/].f_19 == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 263;
			break;
		
		case 0:
			return 19;
			break;
		
		case 1:
			return 20;
			break;
		
		case 2:
			return 21;
			break;
		
		case 3:
			return 22;
			break;
		
		case 4:
			return 23;
			break;
		
		case 5:
			return 24;
			break;
		
		case 6:
			return 25;
			break;
		
		case 7:
			return 26;
			break;
		
		case 8:
			return 27;
			break;
		
		case 9:
			return 28;
			break;
		
		case 10:
			return 29;
			break;
		
		case 11:
			return 30;
			break;
		
		case 12:
			return 31;
			break;
		
		case 13:
			return 32;
			break;
		
		case 14:
			return 33;
			break;
		
		case 15:
			return 35;
			break;
		
		case 16:
			return 36;
			break;
		
		case 17:
			return 37;
			break;
		
		case 18:
			return 38;
			break;
		
		case 19:
			return 39;
			break;
		
		case 20:
			return 40;
			break;
		
		case 21:
			return 41;
			break;
		
		case 22:
			return 42;
			break;
		
		case 23:
			return 43;
			break;
		
		case 24:
			return 44;
			break;
		
		case 25:
			return 45;
			break;
		
		case 26:
			return 46;
			break;
		
		case 27:
			return 47;
			break;
		
		case 28:
			return 48;
			break;
		
		case 29:
			return 49;
			break;
		
		case 30:
			return 50;
			break;
		
		case 31:
			return 51;
			break;
		
		case 32:
			return 52;
			break;
		
		case 33:
			return 53;
			break;
		
		case 34:
			return 54;
			break;
		
		case 35:
			return 55;
			break;
		
		case 36:
			return 56;
			break;
		
		case 37:
			return 57;
			break;
		
		case 38:
			return 58;
			break;
		
		case 39:
			return 59;
			break;
		
		case 40:
			return 60;
			break;
		
		case 41:
			return 61;
			break;
		
		case 42:
			return 62;
			break;
		
		case 43:
			return 63;
			break;
		
		case 44:
			return 64;
			break;
		
		case 45:
			return 64;
			break;
		
		case 46:
			return 48;
			break;
		
		case 47:
			return 48;
			break;
		
		case 48:
			return 48;
			break;
		
		case 49:
			return 48;
			break;
		
		case 52:
			return 48;
			break;
		
		case 50:
			return 25;
			break;
		
		case 51:
			return 40;
			break;
		
		case 53:
			return 48;
			break;
		
		default:
			break;
	}
	return 263;
}

void func_194()
{
	int iVar0;
	
	iLocal_91 = 0;
	func_211();
	func_198(iLocal_44, 0);
	func_198(iLocal_45, 0);
	func_198(32, 0);
	func_198(143, 0);
	func_198(144, 0);
	func_198(145, 0);
	func_198(146, 0);
	func_198(78, 0);
	func_198(79, 0);
	func_198(88, 0);
	func_198(124, 0);
	func_198(112, 0);
	func_198(123, 0);
	func_198(293, 0);
	func_198(86, 0);
	func_198(77, 0);
	func_198(89, 0);
	func_198(106, 0);
	func_198(108, 0);
	func_198(120, 0);
	func_198(352, 0);
	func_198(107, 0);
	func_198(96, 0);
	func_198(104, 0);
	func_198(105, 0);
	func_198(80, 0);
	func_198(113, 0);
	func_198(118, 0);
	func_198(207, 1);
	func_198(208, 1);
	func_198(209, 1);
	func_198(210, 1);
	func_198(211, 1);
	func_198(212, 1);
	func_198(213, 1);
	func_198(214, 1);
	func_198(321, 1);
	func_198(320, 1);
	func_198(319, 1);
	func_198(322, 1);
	func_198(325, 1);
	func_198(324, 1);
	func_198(349, 1);
	func_198(323, 1);
	func_198(326, 1);
	func_198(317, 1);
	func_198(318, 1);
	func_198(363, 0);
	func_198(355, 0);
	func_198(263, 1);
	func_198(262, 1);
	func_198(267, 1);
	func_198(266, 1);
	func_198(265, 1);
	func_198(400, 0);
	func_198(381, 0);
	func_198(384, 0);
	func_198(382, 0);
	func_198(206, 0);
	func_198(405, 0);
	func_198(385, 0);
	func_198(383, 0);
	func_198(386, 0);
	func_198(387, 0);
	func_198(389, 0);
	func_198(388, 0);
	func_198(149, 0);
	func_198(66, 0);
	func_198(115, 0);
	func_198(114, 0);
	func_198(205, 1);
	func_198(48, 0);
	func_198(40, 1);
	func_198(357, 1);
	func_198(356, 1);
	func_198(359, 1);
	func_198(110, 1);
	func_198(60, 1);
	func_198(41, 1);
	func_198(61, 1);
	func_198(374, 1);
	func_198(375, 1);
	func_198(64, 1);
	func_198(165, 1);
	func_198(166, 1);
	func_198(167, 1);
	func_198(168, 1);
	func_198(169, 1);
	func_198(170, 1);
	func_198(172, 1);
	func_198(280, 1);
	func_198(37, 1);
	func_198(147, 1);
	func_198(62, 0);
	func_198(95, 1);
	func_198(99, 1);
	func_198(102, 1);
	func_198(135, 1);
	func_198(103, 1);
	func_198(90, 1);
	func_198(109, 1);
	func_198(141, 1);
	func_198(136, 1);
	func_198(127, 1);
	func_198(142, 1);
	func_198(38, 1);
	func_198(84, 1);
	func_198(119, 1);
	func_198(121, 1);
	func_198(122, 1);
	func_198(68, 1);
	func_198(126, 1);
	func_198(85, 1);
	func_198(140, 1);
	func_198(197, 1);
	func_198(162, 1);
	func_198(315, 1);
	func_198(71, 1);
	func_198(72, 1);
	func_198(446, 1);
	func_198(225, 1);
	func_198(73, 1);
	func_198(111, 1);
	func_198(75, 1);
	func_198(93, 1);
	func_198(98, 1);
	func_198(117, 1);
	iLocal_94 = func_195();
	iLocal_95 = unk_0xCE0E55FD6C5BB2E3();
	if (unk_0x963B7BFFD2743281())
	{
		if (iLocal_94 == 0)
		{
			if (unk_0x8F678487EEBD8CE4(Global_110893))
			{
				iVar0 = 0;
				while (iVar0 < 40)
				{
					if (unk_0x8F678487EEBD8CE4(Local_819[iVar0 /*3*/]))
					{
						if (Local_819[iVar0 /*3*/] == Global_110893)
						{
							iLocal_92 = iVar0;
							iVar0 = 40;
						}
					}
					iVar0++;
				}
			}
		}
	}
	else if (!Global_110893 == 0)
	{
		Global_110893 = 0;
	}
	if (unk_0x963B7BFFD2743281())
	{
		if (!Global_110895 == -1)
		{
			iVar0 = 0;
			while (iVar0 < 40)
			{
				if (unk_0x8F678487EEBD8CE4(Local_819[iVar0 /*3*/]))
				{
					if (func_129(Local_819[iVar0 /*3*/]) == Global_110895)
					{
						iLocal_92 = iVar0;
						iVar0 = 40;
					}
				}
				iVar0++;
			}
		}
	}
	else if (!Global_110895 == -1)
	{
		Global_110895 = -1;
	}
}

int func_195()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = unk_0xD9191A35088457A8(iLocal_44);
	while (unk_0x8F678487EEBD8CE4(iVar1))
	{
		if (func_197(iVar1))
		{
			if ((unk_0x04FA724B68B59AC3(iVar1) == 4 || unk_0x04FA724B68B59AC3(iVar1) == 6) || unk_0x04FA724B68B59AC3(iVar1) == 3)
			{
				iVar0++;
			}
			if (unk_0x04FA724B68B59AC3(iVar1) == 2 || unk_0x04FA724B68B59AC3(iVar1) == 1)
			{
				if (func_196(iVar1))
				{
					iVar0++;
				}
			}
		}
		iVar1 = unk_0x6786C09FEC467C47(iLocal_44);
	}
	iVar1 = unk_0xD9191A35088457A8(iLocal_45);
	while (unk_0x8F678487EEBD8CE4(iVar1))
	{
		if (func_197(iVar1))
		{
			if (unk_0x04FA724B68B59AC3(iVar1) == 4)
			{
				iVar0++;
			}
		}
		iVar1 = unk_0x6786C09FEC467C47(iLocal_45);
	}
	return iVar0;
}

int func_196(int iParam0)
{
	if (((unk_0x0F8169DD7499794D(iParam0) == 9 || unk_0x0F8169DD7499794D(iParam0) == 11) || unk_0x0F8169DD7499794D(iParam0) == 10) || unk_0x0F8169DD7499794D(iParam0) == 61)
	{
		return 1;
	}
	return 0;
}

int func_197(int iParam0)
{
	int iVar0;
	
	if (unk_0x8F678487EEBD8CE4(iParam0))
	{
		iVar0 = unk_0x27E91FAE2A3D84D0(iParam0);
		if (!iVar0 == 0 && !iVar0 == 1)
		{
			return 1;
		}
	}
	return 0;
}

void func_198(int iParam0, bool bParam1)
{
	struct<3> Var0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar2 = unk_0xD9191A35088457A8(iParam0);
	iVar3 = 20;
	while (unk_0x8F678487EEBD8CE4(iVar2))
	{
		if (iLocal_98 >= iVar3)
		{
			wait(0);
			iLocal_98 = 0;
			if (!func_231())
			{
				func_239(1);
			}
			func_184();
			func_226();
			func_225();
		}
		if (iLocal_91 < 40)
		{
			if (func_197(iVar2))
			{
				if (func_210(iVar2))
				{
					if (!func_208(&iVar2))
					{
						bVar1 = false;
						switch (iParam0)
						{
							case 32:
							case 143:
							case 144:
							case 145:
							case 146:
							case 78:
							case joaat("MPSV_LP0_31"):
							case 88:
							case 124:
							case 112:
							case 123:
							case 293:
							case 86:
							case 77:
							case 89:
							case 106:
							case 108:
							case 120:
							case 352:
							case 107:
							case 96:
							case 104:
							case 105:
							case 80:
							case 113:
							case 118:
							case 62:
							case 400:
							case 381:
							case 384:
							case 382:
							case 206:
							case 405:
							case 385:
							case 383:
							case 386:
							case 387:
							case 389:
							case 388:
							case 149:
							case 66:
							case 115:
							case 114:
							case 48:
							case 40:
							case 357:
							case 356:
							case 359:
							case 110:
							case 60:
							case 41:
							case 61:
							case 374:
							case 375:
							case 64:
							case 37:
							case 147:
							case 95:
							case 99:
							case 102:
							case 135:
							case 103:
							case 90:
							case 109:
							case 141:
							case 136:
							case 127:
							case 142:
							case 38:
							case 84:
							case 119:
							case 121:
							case 122:
							case 68:
							case 126:
							case 85:
							case 140:
							case 71:
							case 72:
							case 446:
							case 225:
							case 73:
							case 111:
							case 75:
							case 93:
							case 98:
							case 117:
							case 315:
							case 197:
							case 162:
							case 205:
							case 207:
							case 208:
							case 209:
							case 210:
							case 211:
							case 212:
							case 213:
							case 214:
							case 165:
							case 166:
							case 167:
							case 168:
							case 169:
							case 170:
							case 172:
							case 280:
							case 355:
							case 263:
							case 262:
							case 267:
							case 266:
							case 265:
							case 321:
							case 320:
							case 319:
							case 322:
							case 325:
							case 324:
							case 349:
							case 323:
							case 326:
							case 317:
							case 318:
								bVar1 = true;
								break;
							
							case 363:
								iVar5 = func_207(&iVar2);
								if (((iVar5 == 33 || iVar5 == 92) || iVar5 == 89) || iVar5 == 88)
								{
									bVar1 = false;
								}
								else
								{
									bVar1 = true;
								}
								break;
							
							default:
								bVar1 = false;
								if (iParam0 == iLocal_45)
								{
									bVar1 = true;
								}
								else if (iParam0 == iLocal_44)
								{
									if (func_206(&iVar2))
									{
										bVar1 = true;
									}
								}
								break;
						}
						if (unk_0x8F678487EEBD8CE4(Global_110892))
						{
							if (func_129(iVar2) == iLocal_44)
							{
								if (!Global_110892 == iVar2)
								{
									bVar1 = false;
								}
							}
						}
						if (bVar1)
						{
							bVar1 = false;
							if (func_197(iVar2))
							{
								iVar4 = unk_0x04FA724B68B59AC3(iVar2);
								if (((iVar4 == 4 || iVar4 == 5) || iVar4 == 2) || iVar4 == 1)
								{
									bVar1 = true;
								}
							}
							if (bVar1)
							{
								func_205(&iVar2, &Var0);
								func_199(Var0, bParam1);
							}
						}
					}
				}
			}
		}
		iLocal_98++;
		iVar2 = unk_0x6786C09FEC467C47(iParam0);
	}
}

void func_199(struct<3> Param0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	if (func_129(Param0.x) == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (func_129(Local_819[iVar0 /*3*/]) == func_129(Param0.x))
		{
			iVar1 = iVar0;
			iVar0 = 40;
		}
		else if (iVar0 == iLocal_91)
		{
			iVar1 = iVar0;
			iVar0 = 40;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (iVar0 < iVar1)
		{
			iVar0 = iVar1;
		}
		if (iVar0 < iLocal_91)
		{
			if (func_129(Local_819[iVar0 /*3*/]) == func_129(Param0.x))
			{
				if (func_203(Param0, Local_819[iVar0 /*3*/]))
				{
					if (bParam1)
					{
						func_202(Param0, iVar0);
						iVar0 = 40;
						return;
					}
					else
					{
						func_200(Param0, iVar0);
						iLocal_91++;
						iVar0 = 40;
						return;
					}
				}
				else if (bParam1)
				{
					iVar0 = 40;
					return;
				}
			}
			else
			{
				func_200(Param0, iVar0);
				iLocal_91++;
				iVar0 = 40;
				return;
			}
		}
		else
		{
			func_200(Param0, iVar0);
			iLocal_91++;
			iVar0 = 40;
			return;
		}
		iVar0++;
	}
}

void func_200(struct<3> Param0, int iParam1)
{
	func_201(iParam1);
	Local_819[iParam1 /*3*/] = { Param0 };
	if (func_129(Local_819[iParam1 /*3*/]) == unk_0xE66C877C9033DBB0())
	{
		iLocal_97 = iParam1;
		Local_834 = { unk_0x41A1ED9BB4ED4772(Local_819[iParam1 /*3*/]) };
	}
}

void func_201(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 39;
	while (iVar0 > iParam0)
	{
		Var1 = { Local_819[(iVar0 - 1) /*3*/] };
		Local_819[iVar0 /*3*/] = { Var1 };
		if ((iVar0 - 1) == iLocal_97)
		{
			iLocal_97 = iVar0;
		}
		iVar0 = (iVar0 - 1);
	}
}

void func_202(struct<3> Param0, int iParam1)
{
	Local_819[iParam1 /*3*/] = { Param0 };
	if (func_129(Local_819[iParam1 /*3*/]) == unk_0xE66C877C9033DBB0())
	{
		iLocal_97 = iParam1;
		Local_834 = { unk_0x41A1ED9BB4ED4772(Local_819[iParam1 /*3*/]) };
	}
}

int func_203(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5)
{
	if (func_204(iParam0) < func_204(iParam3))
	{
		return 1;
	}
	return 0;
}

float func_204(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 1E+07f };
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0x8F678487EEBD8CE4(iParam0))
		{
			Var0 = { func_49(iParam0) - unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true) };
		}
	}
	return vmag(Var0);
}

void func_205(int iParam0, var uParam1)
{
	struct<3> Var0;
	
	*uParam1 = *iParam0;
	if (!*uParam1 == Global_110894)
	{
		Var0 = { func_49(*uParam1) };
		unk_0x7611152BED1D6B7C(Var0, &(uParam1->f_1), &(uParam1->f_2));
	}
	else
	{
		unk_0x7611152BED1D6B7C(Global_110896, &(uParam1->f_1), &(uParam1->f_2));
	}
}

int func_206(int iParam0)
{
	int iVar0;
	
	if (unk_0x8F678487EEBD8CE4(*iParam0))
	{
		iVar0 = unk_0x0F8169DD7499794D(*iParam0);
		if (((iVar0 == 9 || iVar0 == 11) || iVar0 == 10) || iVar0 == 61)
		{
			return 1;
		}
		else if ((iVar0 == 12 || iVar0 == 14) || iVar0 == 13)
		{
			return 1;
		}
	}
	return 0;
}

int func_207(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_95888[iVar0 /*17*/])
		{
			if (Global_95888[iVar0 /*17*/].f_9 != 263)
			{
				if (unk_0x8F678487EEBD8CE4(Global_31346[Global_95888[iVar0 /*17*/].f_9 /*23*/].f_19))
				{
					if (Global_31346[Global_95888[iVar0 /*17*/].f_9 /*23*/].f_19 == *iParam0)
					{
						return Global_95888[iVar0 /*17*/].f_5;
					}
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_208(int iParam0)
{
	if (!unk_0x8F678487EEBD8CE4(*iParam0))
	{
		return 1;
	}
	if (Global_110891 == *iParam0)
	{
		return 1;
	}
	if (unk_0xB5E6347DF3BDF00E(*iParam0) == 39)
	{
		return 1;
	}
	if (func_209(unk_0x41A1ED9BB4ED4772(*iParam0), 0f, 0f, 0f, 0))
	{
		return 1;
	}
	if (func_129(*iParam0) == -1)
	{
		return 1;
	}
	return 0;
}

bool func_209(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_210(int iParam0)
{
	float fVar0;
	
	if (!func_129(iParam0) == iLocal_44)
	{
		fVar0 = func_204(iParam0);
		if (fVar0 > 50f)
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

void func_211()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 40)
	{
		Local_819[iVar0 /*3*/] = 0;
		iVar0++;
	}
	iLocal_91 = 0;
	iLocal_97 = -1;
	Local_834 = { 0f, 0f, 0f };
	iLocal_98 = 0;
}

bool func_212()
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	
	bVar0 = false;
	if (!unk_0x8F678487EEBD8CE4(Local_819[iLocal_92 /*3*/]))
	{
		if (iLocal_92 != iLocal_97)
		{
			return 1;
		}
	}
	if (timerb() > 250)
	{
		if (!bVar0)
		{
			if (iLocal_95 != unk_0xCE0E55FD6C5BB2E3())
			{
				bVar0 = true;
			}
			iLocal_95 = unk_0xCE0E55FD6C5BB2E3();
			if (iLocal_96 != func_213())
			{
				bVar0 = true;
			}
			iLocal_96 = func_213();
		}
		if (!bVar0)
		{
			if (iLocal_97 != -1)
			{
				if (unk_0x8F678487EEBD8CE4(Local_819[iLocal_97 /*3*/]))
				{
					if (func_129(Local_819[iLocal_97 /*3*/]) == unk_0xE66C877C9033DBB0())
					{
						Var1 = { unk_0x41A1ED9BB4ED4772(Local_819[iLocal_97 /*3*/]) };
						if (!func_133(Var1, Local_834, 1056964608, 0))
						{
							bVar0 = true;
						}
					}
				}
				else
				{
					iVar2 = unk_0xD9191A35088457A8(unk_0xE66C877C9033DBB0());
					if (unk_0x8F678487EEBD8CE4(iVar2))
					{
						Var1 = { unk_0x41A1ED9BB4ED4772(iVar2) };
						if (!func_133(Var1, Local_834, 1056964608, 0))
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		settimerb(0);
	}
	return bVar0;
}

int func_213()
{
	int iVar0;
	
	iVar0 = 0;
	if (func_3(Global_110889))
	{
		if (!unk_0xB064AF9925F5537B(Global_110889, -1, 0))
		{
			iVar0++;
		}
		if (!unk_0xB064AF9925F5537B(Global_110889, 0, 0))
		{
			iVar0++;
		}
		if (!unk_0xB064AF9925F5537B(Global_110889, 1, 0))
		{
			iVar0++;
		}
		if (!unk_0xB064AF9925F5537B(Global_110889, 2, 0))
		{
			iVar0++;
		}
	}
	return iVar0;
}

void func_214()
{
	if (iLocal_821 != 0)
	{
		unk_0xCA1F114B668562E5(iLocal_93);
		unk_0x9D15035C6653D1B1(4);
		unk_0xD8D551845E3EA730(1);
		if (unk_0x80FF6C016CDB0FAF(Global_110889, 0))
		{
			unk_0xE6A03BA84586E67B(iLocal_111, fLocal_86, fLocal_87, fLocal_84, fLocal_85, 0, 0, 0, 255, 0);
		}
	}
}

void func_215()
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (iLocal_821 != 0)
	{
		if (iLocal_91 > 1)
		{
			func_220(&iVar0, &uVar1, &uVar2, &uVar3, 0);
			if (unk_0xC1F43F8D0D5EB664(2))
			{
				unk_0x26A60F42A1132477(2, 241);
				unk_0x26A60F42A1132477(2, 242);
				unk_0x26A60F42A1132477(2, 180);
				unk_0x26A60F42A1132477(2, 181);
			}
			if (iVar0 > 28 || unk_0x79800E51B3B6D197(2, 180))
			{
				if (!iLocal_62)
				{
					if (bLocal_60)
					{
						if (bLocal_59)
						{
							func_219();
						}
						else
						{
							iLocal_58 = 1;
						}
						bLocal_59 = true;
					}
					else
					{
						func_219();
					}
					iLocal_104 = unk_0x578C4EF320340AF7();
					iLocal_62 = 1;
				}
			}
			else
			{
				iLocal_62 = 0;
			}
			if (iVar0 < -28 || unk_0x1BD7199394D7F19A(2, 181))
			{
				if (!iLocal_63)
				{
					if (bLocal_60)
					{
						if (bLocal_59)
						{
							func_217();
						}
						else
						{
							iLocal_58 = 1;
						}
						bLocal_59 = true;
					}
					else
					{
						func_217();
					}
					iLocal_104 = unk_0x578C4EF320340AF7();
					iLocal_63 = 1;
				}
			}
			else
			{
				iLocal_63 = 0;
			}
		}
		if (!bLocal_60)
		{
			if (iLocal_91 > 0)
			{
				unk_0x0C23023B6B6C6051(false);
				if (unk_0x1BD7199394D7F19A(2, 176))
				{
					if (unk_0x8F678487EEBD8CE4(Local_819[iLocal_92 /*3*/]))
					{
						iLocal_818 = 2;
						Local_43 = { Local_819[iLocal_92 /*3*/] };
						iLocal_56 = 0;
						iLocal_90 = unk_0x578C4EF320340AF7();
						iLocal_99 = unk_0x578C4EF320340AF7();
						iLocal_100 = unk_0x578C4EF320340AF7();
						iLocal_88 = 0;
						iLocal_820 = 0;
						bLocal_60 = true;
						iLocal_58 = 1;
						bLocal_59 = false;
					}
				}
			}
		}
		else
		{
			unk_0x0C23023B6B6C6051(false);
			if (iLocal_821 == 2)
			{
				if (unk_0x1BD7199394D7F19A(2, 177))
				{
					iLocal_818 = 13;
					iLocal_58 = 1;
					if (!unk_0x5AEB5DDFFAD43CA5(Global_110890))
					{
						unk_0x9B94F6169B0DAEFD(Global_110890);
					}
					iLocal_821 = 3;
				}
				if (!bLocal_64)
				{
					if (unk_0x1BD7199394D7F19A(2, 179))
					{
						iLocal_818 = 20;
						bLocal_64 = true;
						iLocal_58 = 1;
						fLocal_73 = (0.22f * 2f);
						if (!unk_0x5AEB5DDFFAD43CA5(Global_110890))
						{
							if (!unk_0x9934470AA0A08B57(Global_110890, &cLocal_824, "leanover_enter", 3))
							{
								if (!unk_0x9934470AA0A08B57(Global_110890, &cLocal_824, "leanover_idle", 3))
								{
									if (!unk_0x9934470AA0A08B57(Global_110890, &cLocal_824, "leanover_exit", 3))
									{
										unk_0x9B94F6169B0DAEFD(Global_110890);
									}
								}
							}
						}
					}
				}
				if (func_76())
				{
					if (unk_0x1BD7199394D7F19A(2, 176))
					{
						if (bLocal_61)
						{
							iLocal_58 = 1;
							iLocal_89 = unk_0x578C4EF320340AF7();
							iLocal_823 = 0;
							iLocal_821 = 4;
						}
					}
				}
				if (iLocal_818 == 0)
				{
					if (iLocal_99 != -1)
					{
						if (func_162(iLocal_99, 68000))
						{
							iLocal_818 = 4;
							iLocal_99 = -1;
						}
					}
				}
				if (iLocal_818 == 0)
				{
					if (iLocal_100 != -1)
					{
						if (func_162(iLocal_100, 5000))
						{
							if ((unk_0x22D6FB6153F774D3(2, 81) || unk_0x22D6FB6153F774D3(2, 82)) || unk_0x22D6FB6153F774D3(2, 85))
							{
								iLocal_818 = 17;
								iLocal_99 = -1;
							}
						}
					}
				}
			}
			else if (iLocal_821 == 3)
			{
				if (unk_0x1BD7199394D7F19A(2, 177))
				{
					iLocal_818 = 3;
					iLocal_58 = 1;
					iLocal_821 = 2;
				}
			}
			if (bLocal_59)
			{
				if (func_216())
				{
					if (unk_0x1BD7199394D7F19A(2, 176))
					{
						if (unk_0x8F678487EEBD8CE4(Local_819[iLocal_92 /*3*/]))
						{
							iLocal_818 = 9;
							bLocal_61 = false;
							if (iLocal_821 == 3)
							{
								iLocal_821 = 2;
							}
							iLocal_58 = 1;
							Local_43 = { Local_819[iLocal_92 /*3*/] };
							iLocal_56 = 0;
							iLocal_90 = unk_0x578C4EF320340AF7();
							iLocal_88 = 0;
							iLocal_820 = 0;
							if (!unk_0x5AEB5DDFFAD43CA5(Global_110890))
							{
								if (!unk_0x9934470AA0A08B57(Global_110890, &cLocal_824, "leanover_enter", 3))
								{
									if (!unk_0x9934470AA0A08B57(Global_110890, &cLocal_824, "leanover_idle", 3))
									{
										if (!unk_0x9934470AA0A08B57(Global_110890, &cLocal_824, "leanover_exit", 3))
										{
											unk_0x9B94F6169B0DAEFD(Global_110890);
										}
									}
								}
							}
							iLocal_104 = unk_0x578C4EF320340AF7();
							bLocal_59 = false;
						}
					}
					if (func_162(iLocal_104, 3000))
					{
						bLocal_59 = false;
					}
				}
			}
		}
	}
}

int func_216()
{
	if (unk_0x40397A9A17EEC1C5(iLocal_68))
	{
		if (unk_0xC516FEEB950FFD58(iLocal_68))
		{
			return 1;
		}
	}
	if (bLocal_59)
	{
		return 1;
	}
	return 0;
}

void func_217()
{
	struct<3> Var0;
	
	unk_0x830F007E19C63E14(iLocal_111, "SET_INPUT_EVENT");
	unk_0xAD291B8F75D737AD(8);
	unk_0xE1FDD153F5858534();
	iLocal_92 = (iLocal_92 - 1);
	if (iLocal_92 < 0)
	{
		iLocal_92 = (iLocal_91 - 1);
	}
	if (unk_0x8F678487EEBD8CE4(Local_819[iLocal_92 /*3*/]))
	{
		Var0 = { unk_0x41A1ED9BB4ED4772(Local_819[iLocal_92 /*3*/]) };
		if (!func_218(Var0))
		{
			unk_0x016283822C39A5D8(Var0.x, Var0.f_1);
		}
	}
}

int func_218(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_219()
{
	struct<3> Var0;
	
	unk_0x830F007E19C63E14(iLocal_111, "SET_INPUT_EVENT");
	unk_0xAD291B8F75D737AD(9);
	unk_0xE1FDD153F5858534();
	iLocal_92++;
	if (iLocal_92 > (iLocal_91 - 1))
	{
		iLocal_92 = 0;
	}
	if (unk_0x8F678487EEBD8CE4(Local_819[iLocal_92 /*3*/]))
	{
		Var0 = { unk_0x41A1ED9BB4ED4772(Local_819[iLocal_92 /*3*/]) };
		if (!func_218(Var0))
		{
			unk_0x016283822C39A5D8(Var0.x, Var0.f_1);
		}
	}
}

void func_220(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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

int func_221()
{
	if (iLocal_821 == 4)
	{
		return 1;
	}
	if (func_223())
	{
		return 1;
	}
	if (unk_0xF0C12886E5C1B20E())
	{
		return 1;
	}
	if (func_222())
	{
		return 1;
	}
	if (func_187(8, -1))
	{
		return 1;
	}
	if (func_169(0))
	{
		return 1;
	}
	if (unk_0x689B0FFC8081E57F())
	{
		return 1;
	}
	if (func_188())
	{
		return 1;
	}
	if (Global_77093 || Global_77094)
	{
		return 1;
	}
	return 0;
}

bool func_222()
{
	return unk_0x578C4EF320340AF7() <= Global_22550.f_5878 + 100;
}

bool func_223()
{
	return Global_74030;
}

void func_224()
{
	if (!Global_110894 == 0)
	{
		if (!unk_0x8F678487EEBD8CE4(Global_110894))
		{
			Global_110894 = 0;
		}
	}
}

void func_225()
{
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		unk_0xDC54E6DC6372260F(unk_0x460153A63B9477BC());
		unk_0x1EB94DDA4813A04B(unk_0x460153A63B9477BC());
		unk_0xACBA79A91C121E78(unk_0x460153A63B9477BC(), 2);
		unk_0xACBA79A91C121E78(unk_0x460153A63B9477BC(), 3);
		unk_0xACBA79A91C121E78(unk_0x460153A63B9477BC(), 4);
		unk_0xACBA79A91C121E78(unk_0x460153A63B9477BC(), 5);
		unk_0xACBA79A91C121E78(unk_0x460153A63B9477BC(), 15);
	}
}

void func_226()
{
	unk_0x2B6C81DF4CD1093C(0);
	unk_0x2B6C81DF4CD1093C(1);
	unk_0x2B6C81DF4CD1093C(2);
	unk_0x779660A9E5364C4D(0, 99, 1);
	unk_0x779660A9E5364C4D(0, 100, 1);
	unk_0x779660A9E5364C4D(0, 16, 1);
	unk_0x779660A9E5364C4D(0, 17, 1);
	unk_0x779660A9E5364C4D(0, 73, 1);
	unk_0x779660A9E5364C4D(0, 25, 1);
	func_227();
	unk_0x779660A9E5364C4D(0, 200, 1);
	if (func_223() || func_169(0))
	{
		unk_0x779660A9E5364C4D(0, 75, 1);
	}
}

void func_227()
{
	unk_0xBE20AB8238688965(&Global_7552, 4);
}

int func_228()
{
	int iVar0;
	
	if (Global_110890 == 0)
	{
		return 0;
	}
	if (!unk_0x5AEB5DDFFAD43CA5(Global_110890))
	{
		if (unk_0x80FF6C016CDB0FAF(Global_110889, 0))
		{
			if (!unk_0xACBCFA3095C5A434(Global_110890, Global_110889))
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
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0x6E0C5E7AAF8B6214(unk_0x9B0761B4C3EB8BC7()))
		{
			if (unk_0x80FF6C016CDB0FAF(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false), 0))
			{
				if (func_229(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false)))
				{
					iVar0 = unk_0x10D3F7E169A49C44(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false), -1, 0);
					if (!iVar0 == unk_0x9B0761B4C3EB8BC7())
					{
						if (!unk_0x5AEB5DDFFAD43CA5(iVar0))
						{
							Global_110905 = 1;
							unk_0xE8775836E165BF34(unk_0x460153A63B9477BC(), 0);
							unk_0x4CB4237D8858ADA6(2);
							unk_0x44225B42FE388400(unk_0x9B0761B4C3EB8BC7(), true);
							return 1;
						}
					}
				}
			}
		}
	}
	if (unk_0x40397A9A17EEC1C5(iLocal_68))
	{
		if (unk_0xC516FEEB950FFD58(iLocal_68))
		{
			unk_0x92B14FF2F31BE63D(0);
			Global_110906 = 0;
		}
		unk_0x856549C07003344B(iLocal_68, false);
		unk_0xB8B0F7C8C1548C5B(iLocal_68, 0);
		unk_0x3ED9330214992278(false, false, 3000, true, 0, 0);
		unk_0xEAF342510C682548();
		unk_0x49EAC3B3479D60FE();
		unk_0x70EEA67CF09450BA(0);
	}
	return 0;
}

int func_229(int iParam0)
{
	if (unk_0x68AEFA37A65085FD(iParam0, joaat("taxi")))
	{
		return 1;
	}
	return 0;
}

int func_230(int iParam0)
{
	struct<3> Var0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	if (unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		return 1;
	}
	if (func_60(unk_0x9B0761B4C3EB8BC7()) != iLocal_71)
	{
		return 1;
	}
	if (!unk_0xAE06B9E39EBDE049(Global_110889))
	{
		return 1;
	}
	if (!unk_0x80FF6C016CDB0FAF(Global_110889, 0))
	{
		return 1;
	}
	if (!unk_0xAE06B9E39EBDE049(Global_110890))
	{
		return 1;
	}
	if (unk_0x5AEB5DDFFAD43CA5(Global_110890))
	{
		return 1;
	}
	if (iLocal_821 != 4)
	{
		if (iParam0 == 1)
		{
			if (unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0)
			{
				return 1;
			}
			if (((unk_0xBCB2BD5C2E502335(Global_110889, 2, 30000) || unk_0xBCB2BD5C2E502335(Global_110889, 3, 30000)) || unk_0xBCB2BD5C2E502335(Global_110889, 0, 7000)) || unk_0xBCB2BD5C2E502335(Global_110889, 1, 7000))
			{
				return 1;
			}
		}
		Var0 = { unk_0x3E4D3CCC220BDFB1(Global_110889, false) };
		if (unk_0xC7EB33BFDB436C87(Var0, 7f, 0))
		{
			return 1;
		}
		fVar1 = 15f;
		Var2 = { Var0 };
		Var3 = { Var2 };
		Var2.x = (Var2.x - fVar1);
		Var2.f_1 = (Var2.f_1 - fVar1);
		Var2.f_2 = (Var2.f_2 - fVar1);
		Var3.x = (Var3.x + fVar1);
		Var3.f_1 = (Var3.f_1 + fVar1);
		Var3.f_2 = (Var3.f_2 + fVar1);
		if (unk_0x5AC0C31BB5BC0343(Var2, Var3, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_231()
{
	if (unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		return 0;
	}
	if (Global_95875 == 1)
	{
		return 0;
	}
	if (unk_0x3EBB66F936A3436E())
	{
		return 0;
	}
	if (Global_110909)
	{
		return 0;
	}
	if (Global_4)
	{
		return 0;
	}
	if (unk_0xEE02AF6BC32C9B5C())
	{
		return 0;
	}
	return 1;
}

int func_232()
{
	int iVar0;
	int iVar1;
	
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
		iLocal_95 = unk_0xCE0E55FD6C5BB2E3();
		if (func_236(&iVar0, func_238(), func_237()))
		{
			iVar1 = unk_0x10D3F7E169A49C44(iVar0, -1, 0);
			func_224();
			unk_0xE8775836E165BF34(unk_0x460153A63B9477BC(), 0);
			unk_0x4CB4237D8858ADA6(2);
			unk_0x44225B42FE388400(unk_0x9B0761B4C3EB8BC7(), true);
			if (unk_0x10D3F7E169A49C44(iVar0, 1, 0) == unk_0x9B0761B4C3EB8BC7())
			{
				iLocal_839 = 1;
			}
			else
			{
				iLocal_839 = 2;
			}
			if (func_234(&iVar0, &iVar1, 1))
			{
				Local_832 = { unk_0x3E4D3CCC220BDFB1(Global_110889, true) - unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true) };
				Local_832.f_2 = 0f;
				fLocal_72 = vmag(Local_832);
				iLocal_71 = func_60(unk_0x9B0761B4C3EB8BC7());
				func_233();
				iLocal_96 = func_213();
				iLocal_58 = 1;
				unk_0x779660A9E5364C4D(0, 75, 1);
				Global_110905 = 1;
				iLocal_821 = 0;
				iLocal_822 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_233()
{
	int iVar0;
	
	if (unk_0x80FF6C016CDB0FAF(Global_110889, 0))
	{
		if (!unk_0xB064AF9925F5537B(Global_110889, 1, 0))
		{
			iVar0 = unk_0x10D3F7E169A49C44(Global_110889, 1, 0);
			if (unk_0x9B0761B4C3EB8BC7() != iVar0)
			{
				if (!unk_0xFE6F151E15A69B3A(iVar0, unk_0x14A1FF4316FA17CB(unk_0x460153A63B9477BC())))
				{
					unk_0x8B18A80E8EB15510(iVar0, unk_0x9B0761B4C3EB8BC7(), 200f, -1, 0, 0);
				}
			}
		}
		if (!unk_0xB064AF9925F5537B(Global_110889, 2, 0))
		{
			iVar0 = unk_0x10D3F7E169A49C44(Global_110889, 2, 0);
			if (unk_0x9B0761B4C3EB8BC7() != iVar0)
			{
				if (!unk_0xFE6F151E15A69B3A(iVar0, unk_0x14A1FF4316FA17CB(unk_0x460153A63B9477BC())))
				{
					unk_0x8B18A80E8EB15510(iVar0, unk_0x9B0761B4C3EB8BC7(), 200f, -1, 0, 0);
				}
			}
		}
	}
}

int func_234(int iParam0, int iParam1, bool bParam2)
{
	if (!*iParam0 == Global_110889 && !Global_110889 == 0)
	{
		func_235();
	}
	if (unk_0xAE06B9E39EBDE049(*iParam0) && unk_0xAE06B9E39EBDE049(*iParam1))
	{
		if (unk_0x80FF6C016CDB0FAF(*iParam0, 0))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(*iParam1))
			{
				if (unk_0xACBCFA3095C5A434(*iParam1, *iParam0))
				{
					Global_110889 = *iParam0;
					Global_110890 = *iParam1;
					Global_110904 = 1;
					if (bParam2)
					{
						unk_0x4F3C4F457D44BB0F(Global_110890, true, 1);
						unk_0x4F3C4F457D44BB0F(Global_110889, true, 1);
						StringCopy(&Global_110920, unk_0x6C5C6B207AA78253(), 24);
					}
					else
					{
						if (!unk_0x1758275D343D5BA3(Global_110890))
						{
							unk_0x4F3C4F457D44BB0F(Global_110890, true, 0);
						}
						if (!unk_0x1758275D343D5BA3(Global_110889))
						{
							unk_0x4F3C4F457D44BB0F(Global_110889, true, 0);
							StringCopy(&Global_110920, unk_0x6C5C6B207AA78253(), 24);
						}
					}
					unk_0x694113444F21E39F(Global_110890, 251, true);
					unk_0x6673CC701BC8E9C1(Global_110890, 5, false);
					unk_0x6673CC701BC8E9C1(Global_110890, 17, true);
					unk_0x6AC7395A8E313A46(Global_110890, 512, false);
					unk_0x4E65320BC9AD521C(Global_110890, true);
					unk_0x3A2AAE59B4681DAF(Global_110890, "A_M_M_EASTSA_02_LATINO_FULL_01");
					unk_0x5DC21979EC6C531F(Global_110889, 1);
					unk_0x4CA49291FF980F54(Global_110889, 1);
					unk_0x74172B5AFD503628(Global_110889, false, 0);
					unk_0x0A985DBE2A5EEE65(Global_110889, 1);
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_235()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(Global_110890))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(Global_110890))
		{
			unk_0x694113444F21E39F(Global_110890, 251, false);
			unk_0x4E65320BC9AD521C(Global_110890, false);
			if (!unk_0xA26A1295C5145A11(Global_110890) && !unk_0xF83D0A2EC884A4DD(Global_110890, 0))
			{
				if (unk_0x47DBF174A0CB9D55(Global_110890, false))
				{
					if (unk_0xAE06B9E39EBDE049(Global_110889))
					{
						if (unk_0x80FF6C016CDB0FAF(Global_110889, 0))
						{
							if (unk_0xACBCFA3095C5A434(Global_110890, Global_110889))
							{
								if (unk_0x16BC17A8EDC701A2(Global_110890, -258271821) != 1 && unk_0x16BC17A8EDC701A2(Global_110890, -258271821) != 0)
								{
									unk_0x9DC06E2A59C5AEBB(&iVar0);
									if ((!unk_0xB064AF9925F5537B(Global_110889, 1, 0) || !unk_0xB064AF9925F5537B(Global_110889, 2, 0)) || !unk_0xB064AF9925F5537B(Global_110889, 0, 0))
									{
										unk_0xC67F9BF03C2472AB(0, 2000);
									}
									else
									{
										unk_0xC67F9BF03C2472AB(0, 500);
									}
									unk_0xD8C1C38EE8BC2AC6(0, Global_110889, 12f, 790699);
									unk_0x19F29730874AD6F1(iVar0);
									unk_0x9B6EC2CECE1010EF(Global_110890, iVar0);
									unk_0x4F83FEE4454169D4(&iVar0);
								}
							}
							else
							{
								unk_0x8B18A80E8EB15510(Global_110890, unk_0x9B0761B4C3EB8BC7(), 500f, -1, 0, 0);
							}
						}
						else
						{
							unk_0x8B18A80E8EB15510(Global_110890, unk_0x9B0761B4C3EB8BC7(), 500f, -1, 0, 0);
						}
					}
				}
				else if (unk_0x16BC17A8EDC701A2(Global_110890, -1146898486) != 1 && unk_0x16BC17A8EDC701A2(Global_110890, -1146898486) != 0)
				{
					unk_0x30291E2E564E9B47(Global_110890, 1193033728, 0);
				}
			}
		}
	}
	if (unk_0xAE06B9E39EBDE049(Global_110890))
	{
		if (unk_0x1758275D343D5BA3(Global_110890))
		{
			if (unk_0x1D2A3118784C0272(Global_110890, 0))
			{
				if (!unk_0x5AEB5DDFFAD43CA5(Global_110890))
				{
					unk_0xA5EAD2ACE2C8BBB2(Global_110890, false, 1);
					unk_0x4E65320BC9AD521C(Global_110890, false);
				}
				unk_0x2481907DEE6B85EA(&Global_110890);
			}
		}
	}
	if (unk_0xAE06B9E39EBDE049(Global_110889))
	{
		if (unk_0x1758275D343D5BA3(Global_110889))
		{
			if (unk_0x1D2A3118784C0272(Global_110889, 0))
			{
				if (unk_0x80FF6C016CDB0FAF(Global_110889, 0))
				{
					unk_0x4CA49291FF980F54(Global_110889, 0);
					unk_0x74172B5AFD503628(Global_110889, true, 0);
					unk_0x0A985DBE2A5EEE65(Global_110889, 0);
				}
				unk_0xE730EAF558C97567(&Global_110889);
			}
		}
	}
	Global_110890 = 0;
	Global_110889 = 0;
	StringCopy(&Global_110920, "NULL", 24);
	Global_110926 = -1;
}

int func_236(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(*iParam0))
	{
		if (unk_0x80FF6C016CDB0FAF(*iParam0, 0))
		{
			if (unk_0x36FE6D3220816ADA(*iParam0) == iParam1)
			{
				iVar0 = unk_0x10D3F7E169A49C44(*iParam0, -1, 0);
				if (unk_0xAE06B9E39EBDE049(iVar0))
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iVar0))
					{
						if (!unk_0xA26A1295C5145A11(iVar0))
						{
							if (!unk_0xF83D0A2EC884A4DD(iVar0, 0))
							{
								if (unk_0xE95077C1E15F6307(iVar0, iParam2))
								{
									if (unk_0x1D92A4A6F3D3A021(*iParam0, 90f))
									{
										iVar1 = unk_0xB9FAC5FDE6272EE5(*iParam0);
										if (iVar1 != 3 && iVar1 != 2)
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
	}
	return 0;
}

int func_237()
{
	return joaat("a_m_y_stlat_01");
}

int func_238()
{
	return joaat("taxi");
}

void func_239(bool bParam0)
{
	unk_0x0C23023B6B6C6051(true);
	if (unk_0xA9A353D835A7867C("taxi"))
	{
		unk_0x07FF72DF7F314523("taxi");
	}
	if (unk_0x40397A9A17EEC1C5(iLocal_68))
	{
		if (unk_0xC516FEEB950FFD58(iLocal_68))
		{
			unk_0x92B14FF2F31BE63D(0);
		}
		unk_0x856549C07003344B(iLocal_68, false);
		unk_0xB8B0F7C8C1548C5B(iLocal_68, 0);
		unk_0x3ED9330214992278(false, false, 3000, true, 0, 0);
		unk_0xEAF342510C682548();
		unk_0x49EAC3B3479D60FE();
		unk_0x70EEA67CF09450BA(0);
	}
	Global_110906 = 0;
	if (unk_0xAE06B9E39EBDE049(iLocal_109))
	{
		unk_0x315F7D8C33F0AB37(&iLocal_109);
		unk_0x74528AC0906CBABE(iLocal_108);
	}
	unk_0x2E352DDBBF674246(&iLocal_111);
	unk_0x2E352DDBBF674246(&iLocal_112);
	if (func_240(Global_110890))
	{
		if (unk_0x9934470AA0A08B57(Global_110890, &cLocal_824, "leanover_enter", 3))
		{
			unk_0x81AFEA3A8897B1F9(Global_110890, "leanover_enter", &cLocal_824, -2f);
		}
		else if (unk_0x9934470AA0A08B57(Global_110890, &cLocal_824, "leanover_idle", 3))
		{
			unk_0x81AFEA3A8897B1F9(Global_110890, "leanover_idle", &cLocal_824, -2f);
		}
		else if (unk_0x9934470AA0A08B57(Global_110890, &cLocal_824, "leanover_exit", 3))
		{
			unk_0x81AFEA3A8897B1F9(Global_110890, "leanover_exit", &cLocal_824, -2f);
		}
		if (unk_0x60D775F2D5B6439B(Global_110890, unk_0x9B0761B4C3EB8BC7()))
		{
			unk_0xE2348E4036041923(Global_110890);
		}
	}
	unk_0x1082C25039B168F8(&cLocal_824);
	if (iLocal_821 == 4)
	{
		if (iLocal_823 != 10)
		{
			if (iLocal_57)
			{
				if (unk_0xE9159DB182CF0841())
				{
					unk_0xF990EDED7D25FB88();
				}
				iLocal_57 = 0;
			}
			func_163(0);
			if (unk_0x306BF588BD8151E8("FADE_OUT_WORLD_250MS_SCENE"))
			{
				unk_0xFA07F8BEBDAAFBA8("FADE_OUT_WORLD_250MS_SCENE");
			}
			if (unk_0xAE06B9E39EBDE049(Global_110889))
			{
				if (unk_0x80FF6C016CDB0FAF(Global_110889, 0))
				{
					unk_0x0A9768A52FEE2064(Global_110889, true);
					unk_0x6A8F948698B360B4(Global_110889, false);
				}
			}
			if (bParam0)
			{
				if (unk_0x03DB5C6AABF8DA46() || unk_0x5DA78AD6801A0523())
				{
					if (!unk_0x5B772EFCB84373BE())
					{
						if ((!func_82() && !func_8()) && Global_98955 != 10)
						{
							unk_0xFD45D90342D2A0CD(250);
						}
					}
				}
			}
		}
	}
	if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_3(Global_110889))
		{
			if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), Global_110889, true))
			{
				if (unk_0x10D3F7E169A49C44(Global_110889, -1, 0) != unk_0x9B0761B4C3EB8BC7())
				{
					if (!func_2(unk_0x9B0761B4C3EB8BC7(), -828834893) && !func_2(unk_0x9B0761B4C3EB8BC7(), 451360105))
					{
						unk_0x0AB756271BADC8DF(unk_0x9B0761B4C3EB8BC7(), 0, 0);
					}
				}
			}
		}
	}
	func_5();
	func_235();
	Global_110926 = -1;
	Global_110905 = 0;
	Global_110909 = 0;
	unk_0xD39E529EBE5DB04F();
}

int func_240(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0xA59F96B50B97E63C(iParam0, 0))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

