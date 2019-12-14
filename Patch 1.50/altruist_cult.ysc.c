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
    vector3 vLocal_51[16] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
    float fLocal_52[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
    vector3 vLocal_53 = { 0f, 0f, 0f };
    vector3 vLocal_54 = { 0f, 0f, 0f };
    vector3 vLocal_55 = { 0f, 0f, 0f };
    vector3 vLocal_56 = { 0f, 0f, 0f };
    float fLocal_57 = 0f;
    vector3 vLocal_58 = { 0f, 0f, 0f };
    vector3 vLocal_59 = { 0f, 0f, 0f };
    float fLocal_60 = 0f;
    vector3 vLocal_61 = { 0f, 0f, 0f };
    vector3 vLocal_62 = { 0f, 0f, 0f };
    float fLocal_63 = 0f;
    vector3 vLocal_64 = { 0f, 0f, 0f };
    vector3 vLocal_65 = { 0f, 0f, 0f };
    float fLocal_66 = 0f;
    vector3 vLocal_67 = { 0f, 0f, 0f };
    vector3 vLocal_68 = { 0f, 0f, 0f };
    float fLocal_69 = 0f;
    vector3 vLocal_70 = { 0f, 0f, 0f };
    vector3 vLocal_71 = { 0f, 0f, 0f };
    float fLocal_72 = 0f;
    vector3 vLocal_73 = { 0f, 0f, 0f };
    vector3 vLocal_74 = { 0f, 0f, 0f };
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
    int iLocal_102[4] = { 0, 0, 0, 0 };
    int iLocal_103[6] = { 0, 0, 0, 0, 0, 0 };
    int iLocal_104 = 0;
    var uLocal_105[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int iLocal_106 = 0;
    var uLocal_107 = 0;
    int iLocal_108 = 0;
    int iLocal_109 = 0;
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
    int iLocal_259 = 0;
    int iLocal_260 = 0;
    char[] cLocal_261[8] = 0;
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

void __EntryFunction__()//Position - 0x0
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
    vLocal_53 = { -1109.213f, 4914.744f, 216.101f };
    vLocal_54 = { -1034.6f, 4918.6f, 205.9f };
    vLocal_55 = { -1066.963f, 4873.13f, 207.3281f };
    vLocal_56 = { -1112.946f, 4986.957f, 241.133f };
    fLocal_57 = 72.3125f;
    vLocal_58 = { -1138.386f, 4872.04f, 207.5488f };
    vLocal_59 = { -1091.959f, 4983.27f, 241.1698f };
    fLocal_60 = 57.8125f;
    vLocal_61 = { -1171.648f, 4888.658f, 211.0756f };
    vLocal_62 = { -1137.907f, 4926.572f, 240.999f };
    fLocal_63 = 17.9375f;
    vLocal_64 = { -1177.981f, 4903.231f, 212.477f };
    vLocal_65 = { -1153.398f, 4902.631f, 241.155f };
    fLocal_66 = 17.9375f;
    vLocal_67 = { -1175.693f, 4904.839f, 207.5207f };
    vLocal_68 = { -1142.08f, 4985.32f, 241.2887f };
    fLocal_69 = 36.375f;
    vLocal_70 = { -1106.212f, 4860.086f, 206.1207f };
    vLocal_71 = { -1105.016f, 4873.854f, 241.1453f };
    fLocal_72 = 11.5625f;
    vLocal_73 = { -1044.268f, 4916.587f, 209.8365f };
    vLocal_74 = { -1063.605f, 4972.88f, 241.1299f };
    fLocal_75 = 12.875f;
    iLocal_96 = 4;
    cLocal_261 = "REPLAY_TMG";
    sLocal_262 = "CMN_TDIED";
    if (unk_0xD4BE58A7E3E102AC(26))
    {
        func_196();
    }
    if (unk_0x1220054C2E057A12())
    {
        unk_0x9C9E32388A7886A2();
    }
    while (true)
    {
        SYSTEM::WAIT(0);
        if (unk_0xBE1BAAD38691E6DD() || iLocal_77)
        {
            unk_0xB7F4DA52DE3AAF24(0f);
            switch (iLocal_50)
            {
                case 0:
                    if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
                    {
                        if (Global_1B3C8.f_619E.f_5 >= iLocal_96 && !func_195())
                        {
                            iLocal_50 = 2;
                        }
                        func_192();
                        func_189();
                    }
                    break;
                
                case 1:
                    unk_0x3EF8C80DD57B551F(unk_0x7C7787D2D7139A85());
                    if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
                    {
                        if (SYSTEM::TIMERA() > 2000)
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
                        if (SYSTEM::TIMERA() > 1300)
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
                    unk_0x3EF8C80DD57B551F(unk_0x7C7787D2D7139A85());
                    if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
                    {
                        func_116();
                    }
                    unk_0xF58083E4652F7505(Global_9E47[9 /*31*/], 0, 0, 1);
                    unk_0xF58083E4652F7505(Global_9E47[10 /*31*/], 0, 0, 1);
                    break;
                
                case 4:
                    if (!unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
                    {
                        iLocal_50 = 3;
                        break;
                    }
                    bLocal_79 = false;
                    unk_0xB7F4DA52DE3AAF24(0f);
                    iVar0 = 0;
                    while (iVar0 < iLocal_98)
                    {
                        if (unk_0x2BF5E63466422C38(iLocal_98[iVar0]))
                        {
                            if (unk_0x39A01A052D9B5FF0(uLocal_105[iVar0]))
                            {
                                unk_0xAA2276003B2ADF1B(&(uLocal_105[iVar0]));
                            }
                        }
                        else
                        {
                            if (unk_0x6C6D0C248E8758E0(iLocal_98[iVar0]))
                            {
                                if (unk_0x39A01A052D9B5FF0(uLocal_105[iVar0]))
                                {
                                    unk_0xAA2276003B2ADF1B(&(uLocal_105[iVar0]));
                                }
                            }
                            else if (unk_0x9B69E0F5342BA1A8(iLocal_98[iVar0], unk_0x0FA8183DAD2B3203(), 30f, 30f, 30f, 0, 1, 0))
                            {
                                if (!func_115())
                                {
                                    if (iLocal_95 < unk_0x9B35D07DCD0F0B43())
                                    {
                                        iVar1 = unk_0xBAC643F143880136(0, 3);
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
                                        iLocal_95 = (unk_0x9B35D07DCD0F0B43() + unk_0xBAC643F143880136(4500, 6000));
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
                        iLocal_109 = func_62();
                        if (!unk_0x08EA887200715AD9(iLocal_109))
                        {
                            break;
                        }
                        func_61(&uLocal_114, 0);
                        iLocal_77 = 1;
                    }
                    if (func_32(&uLocal_114, &uLocal_120, &iLocal_109, cLocal_261, sLocal_262, &bLocal_76, 78))
                    {
                        iLocal_94 = 0;
                        unk_0x7A9453C2EDBAFB80(iLocal_270);
                        unk_0x7390DF389018C78C(iLocal_108);
                        iVar0 = 0;
                        while (iVar0 < iLocal_98)
                        {
                            if (unk_0xD4B321D9096B01FC(iLocal_98[iVar0]))
                            {
                                unk_0x4F058F27442031CC(&(iLocal_98[iVar0]));
                            }
                            iVar0++;
                        }
                        iVar0 = 0;
                        while (iVar0 < iLocal_103)
                        {
                            if (unk_0xD4B321D9096B01FC(iLocal_103[iVar0]))
                            {
                                unk_0x377C9F2989832369(&(iLocal_103[iVar0]));
                            }
                            iVar0++;
                        }
                        if (unk_0xD2652A8A890B29BA(iLocal_106))
                        {
                            unk_0x0472F75F711AABCE(iLocal_106, false);
                        }
                        if (unk_0xD4B321D9096B01FC(iLocal_101))
                        {
                            unk_0x377C9F2989832369(&iLocal_101);
                        }
                        if (unk_0xD4B321D9096B01FC(iLocal_101))
                        {
                            unk_0x377C9F2989832369(&iLocal_101);
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

void func_1(bool bParam0)//Position - 0x55E
{
    if (bParam0)
    {
        unk_0xECBD7388D13DBB07(0);
        unk_0x87C911B2DB7E78FD(1);
        unk_0xD3B9282395791ADE(0);
        func_2(1);
        Global_16F05 = 1;
    }
    else
    {
        unk_0xECBD7388D13DBB07(1);
        unk_0x87C911B2DB7E78FD(0);
        unk_0xD3B9282395791ADE(1);
        func_2(0);
        Global_16F05 = 0;
    }
}

void func_2(bool bParam0)//Position - 0x5A0
{
    if ((Global_A1B4 == 9 || Global_A1B4 == 10) || Global_A1B4 == 5)
    {
        Global_1AE81 = bParam0;
        if (bParam0)
        {
        }
    }
    else
    {
        if (bParam0)
        {
        }
        Global_1AE81 = 0;
    }
}

void func_3(bool bParam0)//Position - 0x5E6
{
    if (bParam0)
    {
        func_10();
        if (Global_4C1E.f_1 == 10 || Global_4C1E.f_1 == 9)
        {
            unk_0xA1E7A40E1F56E511(&Global_1CBD, 16);
        }
        Global_4C1E.f_1 = 1;
        if (func_9(0))
        {
            func_4(0);
        }
    }
    else if (Global_4C1E.f_1 == 1)
    {
        if (!Global_4C1E.f_1 == 0)
        {
            Global_4C1E.f_1 = 3;
        }
    }
}

void func_4(int iParam0)//Position - 0x649
{
    if (func_8())
    {
        return;
    }
    if (Global_4CD0)
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
    if (Global_4C1E.f_1 == 10 || Global_4C1E.f_1 == 9)
    {
        unk_0xA1E7A40E1F56E511(&Global_1CBD, 16);
    }
    if (unk_0x31634D65216B86B6())
    {
        unk_0x623942A4F366F9BB(false);
    }
    Global_5145 = 5;
    if (iParam0 == 1)
    {
        unk_0xA1E7A40E1F56E511(&Global_1CBC, 30);
    }
    else
    {
        unk_0x3B76114EC84D5812(&Global_1CBC, 30);
    }
    if (!func_5())
    {
        Global_4C1E.f_1 = 3;
    }
}

int func_5()//Position - 0x6D3
{
    if (Global_4C1E.f_1 == 1 || Global_4C1E.f_1 == 0)
    {
        return 1;
    }
    return 0;
}

void func_6(bool bParam0, bool bParam1)//Position - 0x6FA
{
    if (bParam0)
    {
        if (func_9(0))
        {
            Global_4CD0 = 1;
            if (bParam1)
            {
                unk_0xB1B52CCC3333E09F(&Global_4BDF);
            }
            Global_4BD6 = { Global_4BE8[Global_4BE7 /*3*/] };
            unk_0x4577629BF7B43F7F(Global_4BD6);
        }
    }
    else if (Global_4CD0 == 1)
    {
        Global_4CD0 = 0;
        Global_4BD6 = { Global_4BEF[Global_4BE7 /*3*/] };
        if (bParam1)
        {
            unk_0x4577629BF7B43F7F(Global_4BDF);
        }
        else
        {
            unk_0x4577629BF7B43F7F(Global_4BD6);
        }
    }
}

bool func_7()//Position - 0x76E
{
    return unk_0xA2BC31158C8CEFD2(Global_19C148, 5);
}

bool func_8()//Position - 0x77F
{
    return unk_0xA2BC31158C8CEFD2(Global_19C148, 19);
}

int func_9(int iParam0)//Position - 0x791
{
    if (iParam0 == 1)
    {
        if (Global_4C1E.f_1 > 3)
        {
            if (unk_0xA2BC31158C8CEFD2(Global_1CBC, 14))
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
    if (unk_0x222F76006659B0EB(joaat("cellphone_flashhand")) > 0)
    {
        return 1;
    }
    if (Global_4C1E.f_1 > 3)
    {
        return 1;
    }
    return 0;
}

void func_10()//Position - 0x7EB
{
    if (Global_4C1E.f_1 == 9 || Global_4C1E.f_1 == 10)
    {
        Global_517A = 0;
        Global_5176 = 1;
    }
}

void func_11()//Position - 0x814
{
    func_22();
    func_14(0, 1);
    func_12(0, 1);
}

void func_12(int iParam0, int iParam1)//Position - 0x82C
{
    if (iParam0 == 1)
    {
        func_14(0, 0);
        unk_0x3E5A3FD805488EB9("DeathFailOut", 0, 0);
        unk_0xA1E7A40E1F56E511(&iLocal_48, 1);
        func_13(1, 2, 0);
        unk_0x4ABD76ED081F3C69(2);
    }
    else
    {
        if (unk_0xA2BC31158C8CEFD2(iLocal_48, 1) || iParam1)
        {
            unk_0xF530F03252D7AEE0("DeathFailOut");
            func_13(0, 2, 1);
            unk_0x4ABD76ED081F3C69(0);
        }
        unk_0x3B76114EC84D5812(&iLocal_48, 1);
    }
}

void func_13(int iParam0, int iParam1, int iParam2)//Position - 0x88B
{
    if (iParam0 == 1)
    {
        unk_0xA1E7A40E1F56E511(&iLocal_48, 2);
        if (!unk_0x393E9918BC37548A())
        {
            if (iParam1 == 1)
            {
                unk_0x9F761741AA5B98D2(0.2f);
            }
            else
            {
                unk_0x9F761741AA5B98D2(0.075f);
            }
        }
    }
    else
    {
        if (unk_0xA2BC31158C8CEFD2(iLocal_48, 2) || iParam2)
        {
            if (!unk_0x393E9918BC37548A())
            {
                unk_0x9F761741AA5B98D2(1f);
            }
        }
        unk_0x3B76114EC84D5812(&iLocal_48, 2);
    }
}

void func_14(int iParam0, int iParam1)//Position - 0x8EC
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
        if (!unk_0xA2BC31158C8CEFD2(iLocal_48, 0) || iParam1)
        {
            unk_0x3E5A3FD805488EB9(sVar0, 0, 0);
            unk_0xA1E7A40E1F56E511(&iLocal_48, 0);
            func_13(1, 1, 0);
            unk_0x4ABD76ED081F3C69(1);
        }
    }
    else
    {
        if (unk_0xA2BC31158C8CEFD2(iLocal_48, 0) || iParam1)
        {
            unk_0xF530F03252D7AEE0(sVar0);
            func_13(0, 1, 1);
            unk_0x4ABD76ED081F3C69(0);
        }
        unk_0x3B76114EC84D5812(&iLocal_48, 0);
    }
}

int func_15()//Position - 0x989
{
    func_16();
    return Global_1B3C8.f_936.f_21B.f_10E1;
}

void func_16()//Position - 0x9A2
{
    int iVar0;
    
    if (unk_0xD4B321D9096B01FC(unk_0x0FA8183DAD2B3203()))
    {
        if (func_20(Global_1B3C8.f_936.f_21B.f_10E1) != unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()))
        {
            iVar0 = func_19(unk_0x0FA8183DAD2B3203());
            if (func_18(iVar0) && (!func_17(14) || Global_1AFAF))
            {
                if (Global_1B3C8.f_936.f_21B.f_10E1 != iVar0 && func_18(Global_1B3C8.f_936.f_21B.f_10E1))
                {
                    Global_1B3C8.f_936.f_21B.f_10E2 = Global_1B3C8.f_936.f_21B.f_10E1;
                }
                Global_1B3C8.f_936.f_21B.f_10E3 = iVar0;
                Global_1B3C8.f_936.f_21B.f_10E1 = iVar0;
                return;
            }
        }
        else
        {
            if (Global_1B3C8.f_936.f_21B.f_10E1 != 145)
            {
                Global_1B3C8.f_936.f_21B.f_10E3 = Global_1B3C8.f_936.f_21B.f_10E1;
            }
            return;
        }
    }
    Global_1B3C8.f_936.f_21B.f_10E1 = 145;
}

bool func_17(int iParam0)//Position - 0xA9F
{
    return Global_A1B4 == iParam0;
}

bool func_18(int iParam0)//Position - 0xAAD
{
    return iParam0 < 3;
}

int func_19(int iParam0)//Position - 0xAB9
{
    int iVar0;
    int iVar1;
    
    if (unk_0xD4B321D9096B01FC(iParam0))
    {
        iVar1 = unk_0x7F375072508F738F(iParam0);
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

int func_20(int iParam0)//Position - 0xAF6
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

var func_21(int iParam0)//Position - 0xB1B
{
    return Global_706[iParam0 /*29*/];
}

void func_22()//Position - 0xB2A
{
    iLocal_48 = 0;
    iLocal_49 = 0;
    func_23(0, 1, 1, 0, 0, 0);
    func_3(1);
}

void func_23(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0xB47
{
    if (bParam0)
    {
        unk_0x7FFD059D4FA38133(unk_0x7C7787D2D7139A85());
        unk_0xB3414892E3E6016F(unk_0x7C7787D2D7139A85(), 1);
        unk_0xD5BB07C763F1D1D9(unk_0x7C7787D2D7139A85(), 1);
        func_31(1);
        unk_0x0C90AD17B16DE260();
        unk_0x695A752EE2ABAEDE();
        if (Global_4C1E.f_1 > 3)
        {
            if (unk_0x31634D65216B86B6())
            {
                unk_0x623942A4F366F9BB(false);
            }
            if (!func_5())
            {
                Global_4C1E.f_1 = 3;
            }
            Global_5145 = 5;
        }
        func_30(1, iParam3, iParam2, 0);
        Global_F025 = 1;
        Global_1203B = 1;
        Global_12B1F = 1;
    }
    else
    {
        func_31(0);
        unk_0x418A0C9B89A8D0B1();
        Global_F025 = 0;
        if (bParam1)
        {
            unk_0x0BDD50D0AE4552F2();
        }
        unk_0xB3414892E3E6016F(unk_0x7C7787D2D7139A85(), 0);
        unk_0xD5BB07C763F1D1D9(unk_0x7C7787D2D7139A85(), 0);
        func_30(0, iParam3, iParam2, 0);
        if (unk_0x393E9918BC37548A())
        {
            if (((((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !func_28(unk_0x7C7787D2D7139A85())) && !func_25(unk_0x7C7787D2D7139A85(), 0)) && !func_24()) && !bParam4) && !bParam5)
            {
                unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), false);
            }
        }
        else if (((!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()) && !func_28(unk_0x7C7787D2D7139A85())) && !bParam4) && !bParam5)
        {
            unk_0x04F5A8AA60EC662B(unk_0x0FA8183DAD2B3203(), false);
        }
        Global_12B1F = 0;
    }
}

bool func_24()//Position - 0xC80
{
    return unk_0xA2BC31158C8CEFD2(Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_27.f_12, 14);
}

bool func_25(int iParam0, int iParam1)//Position - 0xC9D
{
    bool bVar0;
    
    if (iParam0 == unk_0x7C7787D2D7139A85())
    {
        bVar0 = func_26(-1, 0) == 8;
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

int func_26(int iParam0, bool bParam1)//Position - 0xCE8
{
    int iVar0;
    int iVar1;
    
    iVar1 = iParam0;
    if (iVar1 == -1)
    {
        iVar1 = func_27();
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

int func_27()//Position - 0xD29
{
    return Global_1407E9;
}

int func_28(int iParam0)//Position - 0xD35
{
    if (func_25(iParam0, 0))
    {
        return 1;
    }
    if (func_29())
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

bool func_29()//Position - 0xD77
{
    return unk_0xA2BC31158C8CEFD2(Global_240006, 3);
}

int func_30(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0xD88
{
    int iVar0;
    
    iVar0 = 0;
    if (unk_0xE434AB6E3DE89861())
    {
        if (unk_0xC4741D7AA5AAF9B6() != iParam0 && uParam2)
        {
            unk_0x0696366AB240E4CD(iParam0, iParam1, 1, iParam3);
            iVar0 = 1;
        }
    }
    return iVar0;
}

void func_31(int iParam0)//Position - 0xDBB
{
    if (iParam0 == 1)
    {
        unk_0xA1E7A40E1F56E511(&Global_1CBC, 13);
    }
    else
    {
        unk_0x3B76114EC84D5812(&Global_1CBC, 13);
    }
}

int func_32(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6)//Position - 0xDDE
{
    switch (*uParam0)
    {
        case 0:
            *uParam0 = 1;
            unk_0x7D17F1A2E0EEDBB9("DEATH_SCENE");
            unk_0x9964F5BBD9415AB7(-1, "ScreenFlash", "WastedSounds", 1);
            func_60(&(uParam0->f_1));
            func_22();
            func_59(uParam1, (0.15f * 0.075f), 0.5f);
            unk_0x81394B4515AF31C3(true);
            break;
        
        case 1:
            if (func_57() || unk_0x260395BA7F0C83CB())
            {
                *uParam0 = 2;
            }
            if (!func_56(uParam0->f_4, 4))
            {
                if (unk_0x059780A8877D0C70("OFFMISSION_WASTED", false, -1))
                {
                    unk_0x9964F5BBD9415AB7(-1, "Bed", "WastedSounds", 1);
                    func_54(&(uParam0->f_4), 4);
                }
            }
            if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
            {
                if (!func_56(uParam0->f_4, 2))
                {
                    unk_0x9964F5BBD9415AB7(-1, "TextHit", "WastedSounds", 1);
                    func_54(&(uParam0->f_4), 2);
                }
                func_33(iParam2, uParam1, sParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
            }
            break;
        
        case 2:
            if (func_33(iParam2, uParam1, sParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
            {
                func_14(0, 1);
                func_12(0, 1);
                func_22();
                if (*iParam5)
                {
                    unk_0x5DAA2C840D7342B4(1);
                }
                else if (!uParam0->f_5)
                {
                    func_2(0);
                }
                unk_0x81394B4515AF31C3(false);
                unk_0x87C911B2DB7E78FD(0);
                *uParam0 = 3;
            }
            break;
        
        case 3:
            if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
            {
                unk_0xECBD7388D13DBB07(1);
                func_14(0, 1);
                func_12(0, 1);
                unk_0x8E3496DF5BF7F24D("DEATH_SCENE");
                unk_0x81394B4515AF31C3(false);
                return 1;
            }
            break;
        
        case 4:
            unk_0x81394B4515AF31C3(false);
            return 1;
            break;
    }
    return 0;
}

int func_33(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)//Position - 0xF96
{
    switch (*uParam1)
    {
        case 0:
            if (!unk_0x260395BA7F0C83CB() || unk_0xA710300CD13D2877())
            {
                unk_0x5800A2599806C837(2500);
                unk_0xA42289DB8250C2C0();
            }
            if (bParam9)
            {
                unk_0x81394B4515AF31C3(true);
            }
            unk_0x9F761741AA5B98D2(0.2f);
            if (func_53(iParam5, 4))
            {
                if (unk_0x059780A8877D0C70("generic_failed", false, -1))
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
            unk_0xF1BC72CEC2746995(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
            unk_0x759AC38FBC6CCA9E("STRING");
            unk_0xEB6F6B8EBD6B6648(6);
            unk_0x0AC9F8E1AFCEC860(sParam2);
            unk_0x81019766FF500CCA();
            func_52(sParam3);
            unk_0xD02F24F3E2DB263A(100);
            unk_0x282C78036676E0C2(true);
            unk_0x3EC8759D3C8910D6();
            if (func_53(iParam5, 32))
            {
                if (!uParam1->f_88)
                {
                    unk_0xF1BC72CEC2746995(*uParam0, "TRANSITION_UP");
                    unk_0xD435957F6275B434(uParam1->f_86);
                    unk_0xAC7C2DE2DDC7AF03();
                    uParam1->f_88 = 1;
                }
            }
            if (!func_53(iParam5, 1))
            {
                unk_0xC9772255C238EBFC(0);
            }
            func_51(&(uParam1->f_A), 0, 1, 1, 1);
            func_50(&(uParam1->f_A), "IB_RETRY", 2, 201, 1, 1, 0);
            func_50(&(uParam1->f_A), "FE_HLP16", 2, 202, 1, 1, 0);
            if (func_53(iParam5, 4))
            {
                unk_0x9964F5BBD9415AB7(-1, "ScreenFlash", "MissionFailedSounds", 1);
            }
            if (func_53(iParam5, 8))
            {
                switch (func_15())
                {
                    case 0:
                        unk_0x3E5A3FD805488EB9("MinigameEndMichael", 500, 0);
                        break;
                    
                    case 1:
                        unk_0x3E5A3FD805488EB9("MinigameEndFranklin", 500, 0);
                        break;
                    
                    case 2:
                        unk_0x3E5A3FD805488EB9("MinigameEndTrevor", 500, 0);
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
            unk_0xB8C54F738FBF3E56();
            if (func_53(iParam5, 32))
            {
                if (!uParam1->f_88)
                {
                    unk_0xF1BC72CEC2746995(*uParam0, "TRANSITION_UP");
                    unk_0xD435957F6275B434(uParam1->f_86);
                    unk_0xAC7C2DE2DDC7AF03();
                    uParam1->f_88 = 1;
                }
            }
            unk_0xF314976CA3E17AC7(iParam6);
            func_46(uParam0, 0, 0);
            if (!func_53(iParam5, 16) && (func_44(&(uParam1->f_1)) >= uParam1->f_87 || unk_0x260395BA7F0C83CB()))
            {
                func_38(&(uParam1->f_A), 1128792064, iParam6, bParam7, 1, 1065353216);
                unk_0xC0630C11FB08340A();
                if (unk_0x1EB14C6F68B8F915(2, 201))
                {
                    uParam1->f_8A = 1;
                    unk_0x9964F5BBD9415AB7(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
                    if (!func_53(iParam5, 1))
                    {
                        unk_0xE7DF25E06E8E1153(0);
                    }
                    func_37(&(uParam1->f_A));
                    *uParam1 = 3;
                    return 0;
                }
                else if (unk_0x1EB14C6F68B8F915(2, 202))
                {
                    uParam1->f_8A = 0;
                    unk_0x9964F5BBD9415AB7(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
                    if (!func_53(iParam5, 1))
                    {
                        unk_0xE7DF25E06E8E1153(0);
                    }
                    func_37(&(uParam1->f_A));
                    *uParam1 = 3;
                    return 0;
                }
            }
            if (func_53(iParam5, 2))
            {
                if (func_44(&(uParam1->f_4)) >= fParam8)
                {
                    uParam1->f_8A = 0;
                    unk_0x9964F5BBD9415AB7(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
                    if (!func_53(iParam5, 1))
                    {
                        unk_0xE7DF25E06E8E1153(0);
                    }
                    func_37(&(uParam1->f_A));
                    *uParam1 = 3;
                    return 0;
                }
            }
            break;
        
        case 3:
            func_46(uParam0, 0, 0);
            unk_0x9F761741AA5B98D2(1f);
            if (uParam1->f_8A || !((unk_0x2553916E420E8EF0("stunt_plane_races", unk_0x0037AFCBDC61F351()) || unk_0x2553916E420E8EF0("pilot_school", unk_0x0037AFCBDC61F351())) || (unk_0x2553916E420E8EF0("bj", unk_0x0037AFCBDC61F351()) && unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))))
            {
                unk_0xCF33E56642B34516(2500);
            }
            if (func_53(iParam5, 64) && uParam1->f_8A)
            {
                unk_0x5800A2599806C837(500);
            }
            func_34(&(uParam1->f_4));
            if (bParam9)
            {
                unk_0x81394B4515AF31C3(false);
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
                *uParam4 = uParam1->f_8A;
                return 1;
            }
            break;
    }
    return 0;
}

void func_34(int iParam0)//Position - 0x1376
{
    func_35(iParam0, 0f);
}

void func_35(int iParam0, float fParam1)//Position - 0x1385
{
    iParam0->f_1 = (func_36(unk_0xA2BC31158C8CEFD2(*iParam0, 4)) - fParam1);
    unk_0xA1E7A40E1F56E511(iParam0, 1);
    unk_0x3B76114EC84D5812(iParam0, 2);
    iParam0->f_2 = 0f;
}

float func_36(bool bParam0)//Position - 0x13B3
{
    float fVar0;
    float fVar1;
    int iVar2;
    float fVar3;
    float fVar4;
    
    if (bParam0)
    {
        fVar0 = SYSTEM::TO_FLOAT(unk_0x9B35D07DCD0F0B43());
        fVar1 = (fVar0 / 1000f);
        return fVar1;
    }
    if (unk_0x393E9918BC37548A())
    {
        iVar2 = unk_0x169A8AC9F93C2727();
        fVar3 = SYSTEM::TO_FLOAT(iVar2);
        fVar4 = (fVar3 / 1000f);
        return fVar4;
    }
    return (SYSTEM::TO_FLOAT(unk_0x9B35D07DCD0F0B43()) / 1000f);
}

void func_37(int iParam0)//Position - 0x140B
{
    if (*iParam0 != 0)
    {
        unk_0x749CA887CB0AFEC9(iParam0);
        *iParam0 = 0;
    }
    iParam0->f_1 = 0;
    iParam0->f_7B = 0;
}

void func_38(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x142E
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
    
    if (((unk_0xA710300CD13D2877() || unk_0xC862E94A8ABC89B8()) || unk_0x260395BA7F0C83CB()) || unk_0x75EBF5007DD359C9())
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
    unk_0xB8C54F738FBF3E56();
    unk_0xF314976CA3E17AC7(iParam2);
    if (!func_53(uParam0->f_1, 256) || (func_53(uParam0->f_1, 8192) && unk_0x6BFFC38B3F0D92C2(2)))
    {
        unk_0xF1BC72CEC2746995(*uParam0, "SET_CLEAR_SPACE");
        unk_0xD435957F6275B434(fParam1);
        unk_0xAC7C2DE2DDC7AF03();
        unk_0xF1BC72CEC2746995(*uParam0, "SET_MAX_WIDTH");
        unk_0xD435957F6275B434(fParam5);
        unk_0xAC7C2DE2DDC7AF03();
        unk_0xF1BC72CEC2746995(*uParam0, "SET_DATA_SLOT_EMPTY");
        unk_0xAC7C2DE2DDC7AF03();
        if (unk_0xE434AB6E3DE89861())
        {
            unk_0xF1BC72CEC2746995(*uParam0, "TOGGLE_MOUSE_BUTTONS");
            unk_0x282C78036676E0C2(func_53(uParam0->f_1, 4096));
            unk_0xAC7C2DE2DDC7AF03();
        }
        iVar5 = 0;
        iVar6 = 0;
        while (iVar6 < uParam0->f_7B)
        {
            switch (uParam0->f_2[iVar6 /*15*/].f_2)
            {
                case 0:
                    bVar4 = true;
                    break;
                
                case 1:
                    bVar4 = unk_0x59415A8719336539(2);
                    break;
                
                case 2:
                    bVar4 = !unk_0x59415A8719336539(2);
                    break;
                
                default:
                    bVar4 = false;
                    break;
            }
            if (bVar4)
            {
                if (unk_0xF1BC72CEC2746995(*uParam0, "SET_DATA_SLOT"))
                {
                    unk_0xD02F24F3E2DB263A(iVar5);
                    iVar5++;
                    iVar7 = 0;
                    while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_E)
                    {
                        iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
                        iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
                        bVar2 = unk_0xA2BC31158C8CEFD2(uParam0->f_2[iVar6 /*15*/].f_D, iVar7);
                        if (!unk_0xA2BC31158C8CEFD2(uParam0->f_2[iVar6 /*15*/].f_C, iVar7))
                        {
                            sVar3 = unk_0x357127A2E350E9F6(iVar0, iVar1, bVar2);
                        }
                        else
                        {
                            sVar3 = unk_0xEEC24BCBD00C5C50(iVar0, iVar1, bVar2);
                        }
                        if (!unk_0x9591DE0F00127F2A(sVar3))
                        {
                            func_42(sVar3);
                        }
                        iVar7++;
                    }
                    if (!unk_0x9591DE0F00127F2A(uParam0->f_2[iVar6 /*15*/]))
                    {
                        func_52(uParam0->f_2[iVar6 /*15*/]);
                    }
                    if (unk_0xE434AB6E3DE89861())
                    {
                        if (func_53(uParam0->f_1, 4096))
                        {
                            if (uParam0->f_2[iVar6 /*15*/].f_1)
                            {
                                unk_0x282C78036676E0C2(true);
                                unk_0xD02F24F3E2DB263A(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
                            }
                            else
                            {
                                unk_0x282C78036676E0C2(false);
                                unk_0xD02F24F3E2DB263A(-1);
                            }
                        }
                    }
                    unk_0xAC7C2DE2DDC7AF03();
                }
            }
            iVar6++;
        }
        fVar8 = func_41(bParam4, func_41(func_53(uParam0->f_1, 32), 1f, 0f), -1f);
        unk_0xF1BC72CEC2746995(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
        unk_0xD435957F6275B434(fVar8);
        unk_0xAC7C2DE2DDC7AF03();
        unk_0xF1BC72CEC2746995(*uParam0, "SET_BACKGROUND_COLOUR");
        unk_0xD435957F6275B434(0f);
        unk_0xD435957F6275B434(0f);
        unk_0xD435957F6275B434(0f);
        unk_0xD435957F6275B434(80f);
        unk_0xAC7C2DE2DDC7AF03();
        func_40(&(uParam0->f_1), 256);
        func_39(&(uParam0->f_1), 128);
    }
    unk_0x53F520B89860756C(*uParam0, 255, 255, 255, 0, 0);
}

void func_39(var uParam0, int iParam1)//Position - 0x16EE
{
    *uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_40(var uParam0, int iParam1)//Position - 0x1703
{
    *uParam0 = (*uParam0 || iParam1);
}

float func_41(bool bParam0, float fParam1, float fParam2)//Position - 0x1714
{
    if (bParam0)
    {
        return fParam1;
    }
    return fParam2;
}

void func_42(char* sParam0)//Position - 0x172B
{
    unk_0x7151302E2AA285DC(sParam0);
}

int func_43(var uParam0)//Position - 0x1739
{
    if (*uParam0 != 0)
    {
        if (unk_0x08EA887200715AD9(*uParam0))
        {
            func_40(&(uParam0->f_1), 1);
            return 1;
        }
    }
    return 0;
}

float func_44(var uParam0)//Position - 0x1760
{
    if (func_49(uParam0))
    {
        if (func_45(uParam0))
        {
            return uParam0->f_2;
        }
        else
        {
            return (func_36(unk_0xA2BC31158C8CEFD2(*uParam0, 4)) - uParam0->f_1);
        }
    }
    return uParam0->f_1;
}

bool func_45(var uParam0)//Position - 0x179F
{
    return unk_0xA2BC31158C8CEFD2(*uParam0, 2);
}

int func_46(var uParam0, bool bParam1, bool bParam2)//Position - 0x17AF
{
    if (!func_49(&(uParam0->f_2)))
    {
        func_34(&(uParam0->f_2));
    }
    unk_0x0AF55029F939BA65(14);
    if (!bParam2)
    {
        unk_0x53F520B89860756C(*uParam0, 255, 255, 255, 255, 0);
    }
    else if (bParam2)
    {
        unk_0x53F520B89860756C(*uParam0, 255, 255, 255, 255, 0);
    }
    if (bParam1)
    {
        if (unk_0x3772881BFFE6C3F8(2, 201))
        {
            return 0;
        }
    }
    if (uParam0->f_1 == -1)
    {
        return 1;
    }
    if (func_44(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
    {
        func_47(&(uParam0->f_2));
        return 0;
    }
    return 1;
}

void func_47(var uParam0)//Position - 0x1841
{
    uParam0->f_1 = 0f;
    uParam0->f_2 = 0f;
    *uParam0 = 0;
}

void func_48(int iParam0)//Position - 0x1857
{
    if (!func_49(iParam0))
    {
        func_34(iParam0);
    }
}

bool func_49(var uParam0)//Position - 0x186F
{
    return unk_0xA2BC31158C8CEFD2(*uParam0, 1);
}

int func_50(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x187F
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
    iVar1 = uParam0->f_7B;
    if (iVar1 < 8)
    {
        uParam0->f_2[iVar1 /*15*/] = sParam1;
        uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
        uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
        uParam0->f_2[iVar1 /*15*/].f_C = 0;
        uParam0->f_2[iVar1 /*15*/].f_D = 0;
        uParam0->f_2[iVar1 /*15*/].f_E = 0;
        uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
        uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
        if (iParam4 == 1)
        {
            unk_0xA1E7A40E1F56E511(&(uParam0->f_2[iVar1 /*15*/].f_D), 0);
        }
        uParam0->f_2[iVar1 /*15*/].f_E++;
        uParam0->f_7B++;
        return 1;
    }
    return 0;
}

void func_51(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x1948
{
    if (*uParam0 == 0)
    {
        *uParam0 = unk_0xB46BBCF1DD07D1F9("instructional_buttons");
    }
    uParam0->f_1 = 0;
    uParam0->f_7B = 0;
    if (bParam1)
    {
        func_40(&(uParam0->f_1), 32);
    }
    if (unk_0x08EA887200715AD9(*uParam0))
    {
        func_40(&(uParam0->f_1), 1);
        if (bParam2)
        {
            unk_0x436E2197F3CC6E2D(*uParam0, 1);
        }
    }
    if (unk_0xE434AB6E3DE89861())
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

void func_52(char* sParam0)//Position - 0x19C2
{
    unk_0x759AC38FBC6CCA9E(sParam0);
    unk_0x81019766FF500CCA();
}

bool func_53(var uParam0, int iParam1)//Position - 0x19D4
{
    return (uParam0 && iParam1) != 0;
}

void func_54(var uParam0, int iParam1)//Position - 0x19E3
{
    func_55(uParam0, iParam1);
}

void func_55(var uParam0, var uParam1)//Position - 0x19F3
{
    *uParam0 = (*uParam0 || uParam1);
}

bool func_56(var uParam0, int iParam1)//Position - 0x1A04
{
    return (uParam0 && iParam1) != 0;
}

int func_57()//Position - 0x1A13
{
    if (!unk_0xA2BC31158C8CEFD2(iLocal_48, 0) && !unk_0xA2BC31158C8CEFD2(iLocal_48, 1))
    {
        SYSTEM::SETTIMERA(0);
        func_14(1, 0);
    }
    if (!unk_0x33D7ABC47E81DCF9())
    {
        unk_0x1C9DBC28A851F0A6();
    }
    unk_0x572062A62138FBA2(2, 199, 1);
    unk_0x572062A62138FBA2(0, 59, 1);
    unk_0x572062A62138FBA2(0, 60, 1);
    unk_0x572062A62138FBA2(0, 37, 1);
    unk_0x572062A62138FBA2(0, 25, 1);
    unk_0x9675A38E0E9B3E60();
    if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
    {
        if (!unk_0xA2BC31158C8CEFD2(iLocal_48, 1))
        {
            func_12(1, 0);
            SYSTEM::SETTIMERB(0);
        }
        else if (IntToFloat(SYSTEM::TIMERB()) > (1500f * 0.075f) || unk_0x260395BA7F0C83CB())
        {
            if (!unk_0x260395BA7F0C83CB())
            {
                if (!unk_0xA710300CD13D2877())
                {
                    unk_0x5800A2599806C837(1500);
                }
            }
            else if (iLocal_49 == 0)
            {
                iLocal_49 = unk_0x9B35D07DCD0F0B43() + 1000;
                if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
                {
                    unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), false, 0);
                }
                func_13(0, 2, 1);
                func_23(1, 1, 1, 0, 0, 0);
                func_3(1);
                unk_0xBA07337F647E9A07(0);
                unk_0xEF834116800FFB44(0);
                unk_0x0D23E3918F7AF11B(1);
                unk_0x1C9DBC28A851F0A6();
                if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
                {
                    unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), false, 0);
                }
                func_14(0, 0);
                func_58(0);
            }
            else if (unk_0x9B35D07DCD0F0B43() < iLocal_49)
            {
                return 1;
            }
        }
    }
    return 0;
}

void func_58(int iParam0)//Position - 0x1B59
{
    int iVar0;
    
    iVar0 = 0;
    if (iVar0 == 0)
    {
        if (iParam0 == 1)
        {
            if (!unk_0xA2BC31158C8CEFD2(iLocal_48, 3))
            {
                unk_0x269298D09D57BFCF(true);
                unk_0xA1E7A40E1F56E511(&iLocal_48, 3);
            }
        }
        else if (unk_0xA2BC31158C8CEFD2(iLocal_48, 3))
        {
            unk_0x269298D09D57BFCF(false);
            unk_0x3B76114EC84D5812(&iLocal_48, 3);
        }
    }
}

void func_59(var uParam0, float fParam1, float fParam2)//Position - 0x1BA0
{
    if (func_49(&(uParam0->f_1)))
    {
        func_47(&(uParam0->f_1));
    }
    if (func_49(&(uParam0->f_4)))
    {
        func_47(&(uParam0->f_4));
    }
    func_37(&(uParam0->f_A));
    uParam0->f_86 = fParam1;
    uParam0->f_87 = fParam2;
    uParam0->f_89 = 1;
    uParam0->f_88 = 0;
    *uParam0 = 0;
}

void func_60(int iParam0)//Position - 0x1BF0
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

void func_61(var uParam0, int iParam1)//Position - 0x1C11
{
    *uParam0 = 0;
    uParam0->f_4 = 0;
    uParam0->f_5 = iParam1;
    unk_0x059780A8877D0C70("OFFMISSION_WASTED", false, -1);
}

int func_62()//Position - 0x1C32
{
    return unk_0x1FAFE9BB9D8960C1("MP_BIG_MESSAGE_FREEMODE");
}

void func_63()//Position - 0x1C42
{
    if (!iLocal_80)
    {
        unk_0x0E7DFCFC6E6D9A0C("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
        Global_1B3C8.f_619E.f_5 = 1000;
        unk_0x3887A21BEA2A4646(64);
        Global_1B3C8.f_504F.f_1D8 = 54;
        iLocal_259 = unk_0x1FAFE9BB9D8960C1("MIDSIZED_MESSAGE");
        func_98(1);
        while (!unk_0x08EA887200715AD9(iLocal_259))
        {
            SYSTEM::WAIT(0);
        }
        unk_0xF1BC72CEC2746995(iLocal_259, "SHOW_SHARD_MIDSIZED_MESSAGE");
        func_52("CULT_PASS");
        unk_0x3EC8759D3C8910D6();
        while (!func_97())
        {
            SYSTEM::WAIT(0);
        }
        func_96();
        SYSTEM::SETTIMERA(0);
        unk_0x9964F5BBD9415AB7(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
        iLocal_80 = 1;
    }
    unk_0x53F520B89860756C(iLocal_259, 255, 255, 255, 255, 0);
    if (!iLocal_82)
    {
        if (SYSTEM::TIMERA() > 9500)
        {
            unk_0xF1BC72CEC2746995(iLocal_259, "SHARD_ANIM_OUT");
            unk_0xD02F24F3E2DB263A(1);
            unk_0xD435957F6275B434(0.33f);
            unk_0xAC7C2DE2DDC7AF03();
            iLocal_82 = 1;
        }
    }
    if (SYSTEM::TIMERA() > 10000)
    {
        if (unk_0x08EA887200715AD9(iLocal_259))
        {
            unk_0x749CA887CB0AFEC9(&iLocal_259);
            func_98(0);
        }
        while (unk_0xD34AF93E9BCF12F0(func_95(unk_0x7C7787D2D7139A85()), vLocal_53, true) < 209f && !unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
        {
            SYSTEM::WAIT(0);
        }
        func_64(18);
        func_196();
    }
}

void func_64(int iParam0)//Position - 0x1D76
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
        unk_0x3415792782E2E29A(0, 0);
        Global_1B3BF = unk_0x9B35D07DCD0F0B43();
        func_69(30000);
        StringCopy(&cVar0, func_68(Global_1B3BD, 1), 64);
        if (func_67(Global_1B3BD) > 0)
        {
            StringConCat(&cVar0, " Variation ", 64);
            StringIntConCat(&cVar0, Global_1B3BC, 64);
        }
        unk_0xB9C42DF94EB4ABBE(&cVar0, Global_1B3BA, (unk_0x9B35D07DCD0F0B43() - Global_1B3BB), 0);
    }
    else if (unk_0xA2BC31158C8CEFD2(Global_1B3C4, 0) && Global_1B3C8.f_619E.f_2 < 3)
    {
        unk_0x3B76114EC84D5812(&Global_1B3C4, 0);
    }
    func_66(&Global_784B);
    Global_1B3BE = 0;
    func_65(-1);
}

void func_65(int iParam0)//Position - 0x1E2B
{
    Global_1B3BD = iParam0;
}

void func_66(var uParam0)//Position - 0x1E39
{
    if (*uParam0 == -1)
    {
        return;
    }
    if (!*uParam0 == Global_A18E)
    {
        *uParam0 = -1;
        return;
    }
    *uParam0 = -1;
    Global_A18D = 0;
    Global_A18F = 0;
    Global_A1B4 = 15;
    Global_F01C = 0;
    Global_F01D = 0;
}

int func_67(int iParam0)//Position - 0x1E76
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

char* func_68(int iParam0, bool bParam1)//Position - 0x1F27
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

void func_69(int iParam0)//Position - 0x2170
{
    Global_A3DB = (unk_0x9B35D07DCD0F0B43() + iParam0);
}

void func_70(int iParam0)//Position - 0x2182
{
    func_71(iParam0, 0, func_91(iParam0));
}

void func_71(int iParam0, int iParam1, int iParam2)//Position - 0x2197
{
    var uVar0;
    struct<16> Var1;
    
    uVar0 = func_90();
    func_81(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
    func_80(iParam0, &uVar0);
    Var1 = { func_72(&uVar0) };
}

struct<16> func_72(var uParam0)//Position - 0x21C6
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

int func_73(int iParam0)//Position - 0x2297
{
    return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_74(unk_0xA2BC31158C8CEFD2(iParam0, 31), -1, 1)) + 2011;
}

int func_74(bool bParam0, int iParam1, int iParam2)//Position - 0x22BC
{
    if (bParam0)
    {
        return iParam1;
    }
    return iParam2;
}

int func_75(var uParam0)//Position - 0x22D3
{
    return uParam0 & 15;
}

int func_76(int iParam0)//Position - 0x22E0
{
    return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_77(int iParam0)//Position - 0x22F2
{
    return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_78(int iParam0)//Position - 0x2305
{
    return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_79(int iParam0)//Position - 0x2318
{
    return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

void func_80(int iParam0, var uParam1)//Position - 0x232B
{
    Global_1B3C8.f_619E.f_2B[iParam0] = *uParam1;
}

void func_81(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2343
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

void func_82(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x24C5
{
    func_88(uParam0, iParam1);
    func_87(uParam0, iParam2);
    func_86(uParam0, iParam3);
    func_85(uParam0, iParam5);
    func_84(uParam0, iParam4);
    func_83(uParam0, iParam6);
}

void func_83(var uParam0, int iParam1)//Position - 0x24FD
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
        *uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
        *uParam0 |= -2147483648;
    }
    else
    {
        *uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
        *uParam0 = (*uParam0 - *uParam0 & -2147483648);
    }
}

void func_84(var uParam0, int iParam1)//Position - 0x2583
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
    *uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_85(var uParam0, int iParam1)//Position - 0x25D4
{
    if (iParam1 < 0 || iParam1 > 11)
    {
        return;
    }
    *uParam0 = (*uParam0 - *uParam0 & 15);
    *uParam0 = (*uParam0 || iParam1);
}

void func_86(var uParam0, int iParam1)//Position - 0x2607
{
    if (iParam1 < 0 || iParam1 > 24)
    {
        return;
    }
    *uParam0 = (*uParam0 - *uParam0 & 15872);
    *uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_87(var uParam0, int iParam1)//Position - 0x2641
{
    if (iParam1 < 0 || iParam1 >= 60)
    {
        return;
    }
    *uParam0 = (*uParam0 - *uParam0 & 1032192);
    *uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_88(var uParam0, int iParam1)//Position - 0x267C
{
    if (iParam1 < 0 || iParam1 >= 60)
    {
        return;
    }
    *uParam0 = (*uParam0 - *uParam0 & 66060288);
    *uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_89(int iParam0, int iParam1)//Position - 0x26B8
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

var func_90()//Position - 0x275A
{
    var uVar0;
    
    func_88(&uVar0, unk_0xCA3729F4C3A9E58A());
    func_87(&uVar0, unk_0x8F7802EF0E800F47());
    func_86(&uVar0, unk_0xA63165E74E9A042B());
    func_84(&uVar0, unk_0xFC6CBA5BA4E459A9());
    func_85(&uVar0, unk_0x4EBF6D59B95D29C2());
    func_83(&uVar0, unk_0x10CB21C87A35156F());
    return uVar0;
}

int func_91(int iParam0)//Position - 0x27A0
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

int func_92()//Position - 0x2943
{
    if ((Global_1B3BD == func_93() && unk_0x86652FD1CD2DBA07()) && Global_1B3BE)
    {
        return 1;
    }
    return 0;
}

int func_93()//Position - 0x296E
{
    struct<16> Var0;
    var uVar1;
    
    StringCopy(&Var0, unk_0x0037AFCBDC61F351(), 64);
    uVar1 = func_94(Var0);
    return uVar1;
}

int func_94(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x298B
{
    switch (unk_0xA8C462EF7D9DC564(&cParam0))
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

Vector3 func_95(int iParam0)//Position - 0x2B65
{
    return unk_0xACE5E491FC1B0D37(unk_0x23625FE58BACEBFD(iParam0), 0);
}

void func_96()//Position - 0x2B78
{
    Global_78FB = 0;
    Global_78FC = 0;
    Global_78FE = 0;
    Global_78FF = 0;
    Global_7900 = 0;
}

int func_97()//Position - 0x2B94
{
    return 1;
}

void func_98(int iParam0)//Position - 0x2B9D
{
    Global_12C25 = iParam0;
    Global_12C26 = iParam0;
}

void func_99(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2BB1
{
    if ((uParam0[iParam1 /*10*/])->f_7 == 1)
    {
    }
    (*uParam0)[iParam1 /*10*/] = iParam2;
    StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
    (uParam0[iParam1 /*10*/])->f_7 = 1;
    (uParam0[iParam1 /*10*/])->f_8 = iParam4;
    (uParam0[iParam1 /*10*/])->f_9 = iParam5;
    if (!Global_12B21)
    {
        if (!unk_0x2BF5E63466422C38(iParam2))
        {
            if ((uParam0[iParam1 /*10*/])->f_8 == 0)
            {
                unk_0x773434A2783CA924(iParam2, 0);
            }
            else
            {
                unk_0x773434A2783CA924(iParam2, 1);
            }
        }
        if (!unk_0x2BF5E63466422C38(iParam2))
        {
            if ((uParam0[iParam1 /*10*/])->f_9 == 0)
            {
                unk_0xB35478A1AA54EA1A(iParam2, 0);
            }
            else
            {
                unk_0xB35478A1AA54EA1A(iParam2, 1);
            }
        }
    }
}

int func_100(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2C4C
{
    func_114(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
    if (iParam3 > 7)
    {
        if (iParam3 < 12)
        {
            iParam3 = 7;
        }
    }
    Global_514C = 0;
    Global_514E = 0;
    Global_5153 = 0;
    Global_5524 = 0;
    Global_5526 = 0;
    Global_552A = 0;
    Global_280001 = 0;
    return func_101(sParam2, iParam3, 0);
}

int func_101(char* sParam0, int iParam1, bool bParam2)//Position - 0x2C9A
{
    Global_5146 = 0;
    if (Global_5145 == 0 || Global_5147 == 2)
    {
        if (Global_5145 != 0)
        {
            if (iParam1 > Global_5147)
            {
                if (Global_514C == 0)
                {
                    unk_0x623942A4F366F9BB(false);
                    Global_4C1E.f_1 = 3;
                    Global_5145 = 0;
                    Global_5146 = 1;
                    Global_517A = 0;
                    Global_5141 = 0;
                    Global_5142 = 0;
                    Global_5150 = 0;
                    Global_514F = 0;
                    Global_4C1D = 0;
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
        if (unk_0x04C7A9862FF737E9())
        {
            return 0;
        }
        if (func_112(8, -1))
        {
            return 0;
        }
        Global_5191 = { Global_518B };
        func_111();
        Global_4E7E = { Global_4F23 };
        Global_514B = Global_514C;
        Global_5152 = Global_5153;
        Global_280002 = Global_280001;
        Global_5154 = { Global_5164 };
        Global_514D = Global_514E;
        Global_5523 = Global_5524;
        Global_552B = { Global_5531 };
        Global_5525 = Global_5526;
        Global_5527 = Global_5528;
        Global_5529 = Global_552A;
        Global_4FC8.f_172 = Global_5522;
        Global_4FC8.f_170 = Global_5520;
        Global_4FC8.f_171 = Global_5521;
        Global_5141 = Global_5142;
        if (Global_514B)
        {
            unk_0x3B76114EC84D5812(&Global_1CBC, 20);
            unk_0x3B76114EC84D5812(&Global_1CBD, 17);
            unk_0x3B76114EC84D5812(&Global_1CBE, 0);
            if (bParam2)
            {
                func_110();
                if (Global_1FE1[Global_4C1E /*2811*/][0 /*281*/].f_103 == 2)
                {
                    if (iParam1 == 13)
                    {
                    }
                    else
                    {
                        return 0;
                    }
                }
                if (Global_4C1E.f_1 > 3)
                {
                    return 0;
                }
            }
            if (Global_4BFC == 1)
            {
                return 0;
            }
            if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
            {
                if (unk_0x132DF66D50A7DE4E(unk_0x0FA8183DAD2B3203()))
                {
                    return 0;
                }
                if (func_109())
                {
                    return 0;
                }
                if (unk_0x6B6CB57338FA0319(unk_0x0FA8183DAD2B3203()))
                {
                    return 0;
                }
                if (unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()))
                {
                    return 0;
                }
                if (unk_0x604F402D213D3BE5(unk_0x0FA8183DAD2B3203()))
                {
                    return 0;
                }
                if (unk_0xA6DAB995F3A28615(unk_0x0FA8183DAD2B3203(), joaat("gadget_parachute")))
                {
                    return 0;
                }
                if (!Global_12B21)
                {
                    if (unk_0xE294A1321110B3E9(unk_0x0FA8183DAD2B3203()))
                    {
                        return 0;
                    }
                    if (unk_0x10200426BBC4B4F1(unk_0x7C7787D2D7139A85()))
                    {
                        return 0;
                    }
                    if (unk_0x7E1657C6CCABF258(unk_0x0FA8183DAD2B3203()))
                    {
                        return 0;
                    }
                    if (unk_0xD2E3AF497D091872(unk_0x7C7787D2D7139A85()))
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
                switch (Global_4C1E.f_1)
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
                if (unk_0xA2BC31158C8CEFD2(Global_1CBC, 9))
                {
                    return 0;
                }
            }
            func_108();
            Global_514F = bParam2;
        }
        Global_5147 = iParam1;
        StringCopy(&Global_4FC8, sParam0, 24);
        Global_4CD7 = 0;
        func_107();
        func_102();
        return 1;
    }
    if (Global_5145 == 5)
    {
        return 0;
    }
    if (iParam1 < Global_5147 || iParam1 == Global_5147)
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

void func_102()//Position - 0x2F6A
{
    if (!func_103())
    {
        return;
    }
    if (Global_514B)
    {
        MemCopy(&(Global_19FD20.f_1), {Global_4FC8}, 4);
        Global_19FD20 = Global_1A0F;
        Global_19FD20.f_6 = Global_514F;
    }
}

int func_103()//Position - 0x2FA1
{
    if (!Global_40001.f_6D6D)
    {
        return 0;
    }
    if (!Global_12B21)
    {
        return 0;
    }
    if (unk_0x7C7787D2D7139A85() == func_106())
    {
        return 0;
    }
    if (func_104(unk_0x7C7787D2D7139A85()))
    {
        return 0;
    }
    if (unk_0xA2BC31158C8CEFD2(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1, 7))
    {
        return 0;
    }
    if (unk_0xA51CBC95AC3A4B14())
    {
        return 0;
    }
    return 1;
}

bool func_104(int iParam0)//Position - 0x3007
{
    return func_105(iParam0, 20);
}

bool func_105(int iParam0, int iParam1)//Position - 0x3017
{
    return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_B.f_4, iParam1);
}

int func_106()//Position - 0x3032
{
    return -1;
}

void func_107()//Position - 0x303B
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 <= 69)
    {
        StringCopy(&(Global_4CD9[iVar0 /*6*/]), "", 24);
        iVar0++;
    }
    unk_0x623942A4F366F9BB(false);
    Global_5145 = 1;
}

void func_108()//Position - 0x306D
{
    Global_517A = Global_5179;
    Global_5174 = Global_5175;
    Global_51A3 = { Global_5197 };
    Global_51A9 = { Global_519D };
    Global_517C = Global_517B;
    Global_51C1 = { Global_51AF };
    Global_51C7 = { Global_51B5 };
    Global_51CD = { Global_51BB };
    Global_51D3 = { Global_51D9 };
    Global_1A0F = Global_1A10;
    Global_1A11 = Global_1A12;
    Global_5150 = Global_5151;
    Global_5152 = Global_5153;
    Global_5154 = { Global_5164 };
    Global_5149 = Global_514A;
    Global_553D = 0;
    Global_5176 = 0;
    Global_5177 = 0;
    unk_0x3B76114EC84D5812(&Global_1CBD, 16);
}

int func_109()//Position - 0x3102
{
    int iVar0;
    int iVar1;
    
    if (Global_12B21)
    {
        iVar0 = 0;
        unk_0x63EA4FAF7CDEFEC7(unk_0x0FA8183DAD2B3203(), &iVar1, 1);
        if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
        {
            if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
            {
                iVar0 = 1;
            }
        }
        if (unk_0x9044F3A001B2AC43() && iVar0 == 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if (unk_0xD699DB8EAB756F25(unk_0x7C7787D2D7139A85()))
    {
        if (unk_0xB99AB40226A0C08E(unk_0x0FA8183DAD2B3203(), 78, 1))
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

void func_110()//Position - 0x319B
{
    if (func_17(14))
    {
        if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
        {
            if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_1B3C8.f_6D8D[0 /*29*/])
            {
                Global_4C1E = 0;
            }
            else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_1B3C8.f_6D8D[1 /*29*/])
            {
                Global_4C1E = 1;
            }
            else if (unk_0x7F375072508F738F(unk_0x0FA8183DAD2B3203()) == Global_1B3C8.f_6D8D[2 /*29*/])
            {
                Global_4C1E = 2;
            }
            else
            {
                Global_4C1E = 0;
            }
        }
    }
    else
    {
        Global_4C1E = func_15();
        if (Global_4C1E == 145)
        {
            Global_4C1E = 3;
        }
        if (Global_12B21)
        {
            Global_4C1E = 3;
        }
        if (Global_4C1E > 3)
        {
            Global_4C1E = 3;
        }
    }
}

void func_111()//Position - 0x323D
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 <= 15)
    {
        Global_4E7E[iVar0 /*10*/] = 0;
        StringCopy(&(Global_4E7E[iVar0 /*10*/].f_1), "", 24);
        Global_4E7E[iVar0 /*10*/].f_7 = 0;
        Global_4E7E[iVar0 /*10*/].f_8 = 0;
        iVar0++;
    }
    Global_4E7E.f_A1 = -99;
    Global_4E7E.f_A2 = { 0f, 0f, 0f };
}

bool func_112(int iParam0, int iParam1)//Position - 0x3295
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

void func_113()//Position - 0x32D0
{
    unk_0xE4F88BFF8FB3D84C();
    Global_5538 = 0;
    if ((unk_0x31634D65216B86B6() || Global_4C1E.f_1 == 9) || Global_4C1D == 1)
    {
        unk_0x623942A4F366F9BB(false);
        Global_5145 = 6;
        Global_4C1E.f_1 = 3;
        return;
    }
    if (unk_0x04C7A9862FF737E9())
    {
        unk_0x623942A4F366F9BB(true);
        Global_5145 = 6;
        return;
    }
}

void func_114(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x3327
{
    Global_4F23 = { *uParam0 };
    Global_1A10 = iParam1;
    StringCopy(&Global_518B, sParam2, 24);
    Global_5522 = uParam5;
    if (iParam3 == 0)
    {
        Global_5520 = 1;
        Global_551E = 0;
    }
    else
    {
        Global_5520 = 0;
        Global_551E = 1;
    }
    if (iParam4 == 0)
    {
        Global_5521 = 1;
        Global_551F = 0;
    }
    else
    {
        Global_5521 = 0;
        Global_551F = 1;
    }
}

int func_115()//Position - 0x337D
{
    if (Global_5145 != 0 || unk_0x04C7A9862FF737E9())
    {
        return 1;
    }
    return 0;
}

void func_116()//Position - 0x339F
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    switch (iLocal_94)
    {
        case 0:
            unk_0x145ED320752A1E13("THUNDER", 20f);
            if (!unk_0x9C472738425216B8())
            {
                unk_0xBA51426C369A1164("ac_ig_3_p3_b", 8);
            }
            unk_0x6BB2B1818CAE531E(joaat("a_m_o_acult_02"));
            unk_0x6BB2B1818CAE531E(joaat("a_m_y_acult_02"));
            unk_0x6BB2B1818CAE531E(-2022916910);
            unk_0x6BB2B1818CAE531E(-1322183878);
            unk_0x6BB2B1818CAE531E(joaat("prop_box_wood05a"));
            unk_0x6BB2B1818CAE531E(joaat("prop_security_case_01"));
            while ((((((!func_143() || !unk_0x6DF9C43E3CC645BC(joaat("a_m_o_acult_02"))) || !unk_0x6DF9C43E3CC645BC(joaat("a_m_y_acult_02"))) || !unk_0x6DF9C43E3CC645BC(-2022916910)) || !unk_0x6DF9C43E3CC645BC(-1322183878)) || !unk_0x6DF9C43E3CC645BC(joaat("prop_box_wood05a"))) || !unk_0x6DF9C43E3CC645BC(joaat("prop_security_case_01")))
            {
                SYSTEM::WAIT(0);
            }
            iLocal_436 = func_136(unk_0x0FA8183DAD2B3203(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0, 0, 0);
            if (unk_0xD4B321D9096B01FC(iLocal_436))
            {
                unk_0x38F2C110546BD846(iLocal_436, "Trevors_weapon", 0, 0, 0);
            }
            unk_0x38F2C110546BD846(0, "Rifle_Mag1^1", 3, unk_0xBBE3962D028888DC(joaat("component_assaultrifle_clip_01")), 0);
            if (func_143() && !unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
            {
                unk_0x38F2C110546BD846(unk_0x0FA8183DAD2B3203(), "TREVOR", 0, 0, 0);
                unk_0x38F2C110546BD846(iLocal_98[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
                unk_0x38F2C110546BD846(iLocal_98[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
                unk_0x38F2C110546BD846(iLocal_98[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
                unk_0x38F2C110546BD846(iLocal_98[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
                unk_0x38F2C110546BD846(iLocal_98[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
                unk_0x3268D119250624E8(0);
            }
            SYSTEM::WAIT(0);
            if (!bLocal_76 && Global_1B3C8.f_619E.f_5 != 1000)
            {
                func_135();
            }
            if (unk_0xD4B321D9096B01FC(iLocal_98[0]))
            {
                unk_0x4F058F27442031CC(&(iLocal_98[0]));
            }
            if (unk_0xD4B321D9096B01FC(iLocal_98[1]))
            {
                unk_0x4F058F27442031CC(&(iLocal_98[1]));
            }
            if (unk_0xD2652A8A890B29BA(iLocal_106))
            {
                unk_0x0472F75F711AABCE(iLocal_106, false);
            }
            if (unk_0xD4B321D9096B01FC(iLocal_101))
            {
                unk_0x377C9F2989832369(&iLocal_101);
            }
            if (unk_0xD4B321D9096B01FC(iLocal_101))
            {
                unk_0x377C9F2989832369(&iLocal_101);
            }
            unk_0x0298C8010FD5A69E(false, false, 3000, 1, 0, 0);
            if (unk_0x39A01A052D9B5FF0(iLocal_104))
            {
                unk_0xAA2276003B2ADF1B(&iLocal_104);
            }
            func_23(1, 1, 1, 0, 0, 0);
            unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), false, 0);
            unk_0x0D23E3918F7AF11B(1);
            unk_0x5AC8A91A3FD00B39(false);
            unk_0x4BEE8AE599A4A300(false);
            if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
            {
                unk_0x27E0AD6B82174301(unk_0x0FA8183DAD2B3203(), 1);
            }
            unk_0xB82DC93528F8603C(vLocal_53, 100f, 1, 0, 0, false);
            unk_0x740FE9B7B3FE1CE5(vLocal_53 - Vector(100f, 60f, 80f), vLocal_53 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
            unk_0xB7F4DA52DE3AAF24(0f);
            unk_0x31A175F9EC8E421C(3, 0);
            unk_0x31A175F9EC8E421C(5, 0);
            iLocal_108 = unk_0x0B834E1F891CB410(-1173.509f, 4924.365f, 222.21f, 277.2293f, 2, 0, 2, 1);
            unk_0x6BB2B1818CAE531E(joaat("a_m_o_acult_01"));
            while (!unk_0x6DF9C43E3CC645BC(joaat("a_m_o_acult_01")))
            {
                SYSTEM::WAIT(0);
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
            if (unk_0x5038F629059483A1(0))
            {
                if (unk_0xDFB741CB32BE818E("CULT_MASTER", 0))
                {
                    if (!unk_0xD4B321D9096B01FC(iLocal_98[11]))
                    {
                        iLocal_98[11] = unk_0x3D464779B732760F(unk_0x506161DBA66C9EEB("CULT_MASTER", 0));
                    }
                }
                if (unk_0xDFB741CB32BE818E("REAR_CULT", 0))
                {
                    if (!unk_0xD4B321D9096B01FC(iLocal_98[12]))
                    {
                        iLocal_98[12] = unk_0x3D464779B732760F(unk_0x506161DBA66C9EEB("REAR_CULT", 0));
                    }
                }
                if (unk_0xDFB741CB32BE818E("LEFT_OLD_CULT", 0))
                {
                    if (!unk_0xD4B321D9096B01FC(iLocal_98[13]))
                    {
                        iLocal_98[13] = unk_0x3D464779B732760F(unk_0x506161DBA66C9EEB("LEFT_OLD_CULT", 0));
                    }
                }
                if (unk_0xDFB741CB32BE818E("CARBINE_CULT", 0))
                {
                    if (!unk_0xD4B321D9096B01FC(iLocal_98[14]))
                    {
                        iLocal_98[14] = unk_0x3D464779B732760F(unk_0x506161DBA66C9EEB("CARBINE_CULT", 0));
                    }
                }
                if (unk_0xDFB741CB32BE818E("SHOTGUN_CULT", 0))
                {
                    if (!unk_0xD4B321D9096B01FC(iLocal_98[15]))
                    {
                        iLocal_98[15] = unk_0x3D464779B732760F(unk_0x506161DBA66C9EEB("SHOTGUN_CULT", 0));
                    }
                }
                if (unk_0xDFB741CB32BE818E("TREVOR", 0))
                {
                    unk_0x27E0AD6B82174301(unk_0x0FA8183DAD2B3203(), 0);
                    unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), -1173.531f, 4924.357f, 222.2101f, 1, 0, 0, 1);
                    unk_0x5A2B7C446C0CF087(unk_0x0FA8183DAD2B3203(), 188.9369f);
                    unk_0x156AFCA6CCDE5C3F(unk_0x0FA8183DAD2B3203(), -1173.509f, 4924.365f, 222.21f, -1, 0, 0f, 1, 0, iLocal_108, 0);
                    unk_0xCFEC09B98C6C5993(unk_0x0FA8183DAD2B3203(), 1, 0);
                }
                if (unk_0xDFB741CB32BE818E("Trevors_weapon", 0))
                {
                    unk_0xA4FB2C0FC3DDF8D5(iLocal_436, unk_0x0FA8183DAD2B3203());
                }
                unk_0xB489E71A45CDC02F(91.3878f);
                unk_0xA291E27354439AE9(4.4337f, 1065353216);
                func_23(0, 1, 1, 0, 0, 0);
                unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), true, 0);
                unk_0x5AC8A91A3FD00B39(true);
                unk_0x4BEE8AE599A4A300(true);
                vLocal_51[0 /*3*/] = { -1044.632f, 4918.149f, 211.3315f };
                fLocal_52[0] = 254.8275f;
                vLocal_51[1 /*3*/] = { -1054.92f, 4915.155f, 210.8241f };
                fLocal_52[1] = 270.2025f;
                vLocal_51[2 /*3*/] = { -1051.859f, 4903.902f, 209.6199f };
                fLocal_52[2] = 299.8404f;
                vLocal_51[3 /*3*/] = { -1068.246f, 4899.532f, 213.2755f };
                fLocal_52[3] = 298.4257f;
                vLocal_51[4 /*3*/] = { -1083.322f, 4899.532f, 213.2755f };
                fLocal_52[4] = 283.5311f;
                vLocal_51[5 /*3*/] = { -1084.058f, 4933.805f, 228.2246f };
                fLocal_52[5] = 87.5233f;
                vLocal_51[6 /*3*/] = { -1081.976f, 4937.339f, 232.3275f };
                fLocal_52[6] = 109.6546f;
                vLocal_51[7 /*3*/] = { -1092.075f, 4939.958f, 217.3385f };
                fLocal_52[7] = 210.2433f;
                vLocal_51[8 /*3*/] = { -1101.798f, 4930.33f, 217.3544f };
                fLocal_52[8] = 203.732f;
                vLocal_51[9 /*3*/] = { -1070.675f, 4869.301f, 220.2917f };
                fLocal_52[9] = 39.1109f;
                vLocal_51[10 /*3*/] = { -1115.703f, 4878.439f, 225.8085f };
                fLocal_52[10] = 25.8472f;
                unk_0x8CBD7ED64E4A522F("rghCult", &iLocal_270);
                iVar1 = 0;
                while (iVar1 < iLocal_98)
                {
                    if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
                    {
                        iLocal_98[iVar1] = unk_0xB983F26E7AFB47BF(26, joaat("a_m_o_acult_01"), vLocal_51[iVar1 /*3*/], fLocal_52[iVar1], 1, true);
                        unk_0xCDB7DE4079A7DF65(iLocal_98[iVar1], 0);
                        unk_0xC167C31F20B1FD61(iLocal_98[iVar1], joaat("weapon_assaultrifle"), -1, true, true);
                        unk_0x372133FEEA436533(iLocal_98[iVar1], 0);
                        unk_0x4EB7E1C0903EDB2E(iLocal_98[iVar1], 2);
                        unk_0x9FCB7DB37F426208(iLocal_98[iVar1], 50f, 20);
                        unk_0x160AF5DE0B0878EE(iLocal_98[iVar1], 5);
                        unk_0xF72BBF2E406BE27F(iLocal_98[iVar1], 100f);
                        unk_0x1FB49AA1C2C2A2F3(iLocal_98[iVar1], 100f);
                        unk_0x0BBBAC4546BFE280(iLocal_98[iVar1], 150, 0);
                        unk_0x7FD049FE087DEDB4(iLocal_98[iVar1], unk_0xBAC643F143880136(40, 60));
                        unk_0xF827FEB33E873F71(iLocal_98[iVar1], unk_0x0FA8183DAD2B3203(), 0, 16);
                    }
                    else if (iVar1 == 2)
                    {
                        iLocal_98[iVar1] = unk_0xB983F26E7AFB47BF(26, joaat("a_m_o_acult_02"), vLocal_51[iVar1 /*3*/], fLocal_52[iVar1], 1, true);
                        unk_0xCDB7DE4079A7DF65(iLocal_98[iVar1], 0);
                        unk_0xC167C31F20B1FD61(iLocal_98[iVar1], joaat("weapon_sawnoffshotgun"), -1, true, true);
                        unk_0xDEB0AA30ABFDCF48(iLocal_98[iVar1], 50, 1);
                        unk_0x372133FEEA436533(iLocal_98[iVar1], 2);
                        unk_0x4EB7E1C0903EDB2E(iLocal_98[iVar1], 1);
                        unk_0x9FCB7DB37F426208(iLocal_98[iVar1], 50f, 20);
                        unk_0x160AF5DE0B0878EE(iLocal_98[iVar1], 5);
                        unk_0xF72BBF2E406BE27F(iLocal_98[iVar1], 100f);
                        unk_0x1FB49AA1C2C2A2F3(iLocal_98[iVar1], 100f);
                        unk_0x7FD049FE087DEDB4(iLocal_98[iVar1], unk_0xBAC643F143880136(40, 60));
                        unk_0xF827FEB33E873F71(iLocal_98[iVar1], unk_0x0FA8183DAD2B3203(), 0, 16);
                    }
                    else if (iVar1 > 10 && iVar1 < 20)
                    {
                        if (((((!unk_0x2BF5E63466422C38(iLocal_98[iVar1]) && !unk_0x2BF5E63466422C38(iLocal_98[11])) && !unk_0x2BF5E63466422C38(iLocal_98[12])) && !unk_0x2BF5E63466422C38(iLocal_98[13])) && !unk_0x2BF5E63466422C38(iLocal_98[14])) && !unk_0x2BF5E63466422C38(iLocal_98[15]))
                        {
                            unk_0xC167C31F20B1FD61(iLocal_98[11], joaat("weapon_pistol"), -1, true, true);
                            unk_0xC167C31F20B1FD61(iLocal_98[12], joaat("weapon_assaultrifle"), -1, true, true);
                            unk_0xC167C31F20B1FD61(iLocal_98[13], joaat("weapon_assaultrifle"), -1, true, true);
                            unk_0xC167C31F20B1FD61(iLocal_98[14], joaat("weapon_carbinerifle"), -1, true, true);
                            unk_0xC167C31F20B1FD61(iLocal_98[15], joaat("weapon_pumpshotgun"), -1, true, true);
                            unk_0xDEB0AA30ABFDCF48(iLocal_98[iVar1], 0, 1);
                            unk_0x372133FEEA436533(iLocal_98[iVar1], 3);
                            unk_0x4EB7E1C0903EDB2E(iLocal_98[iVar1], 0);
                            unk_0x160AF5DE0B0878EE(iLocal_98[iVar1], 0);
                            unk_0x10E3A102ECE11DCF(iLocal_98[iVar1], 1f, 1f);
                            unk_0xA12E1659DEF57244(&uLocal_107);
                            unk_0x63D387323969ABE0(0, -1159.33f, 4924.412f, 221.6576f, unk_0x0FA8183DAD2B3203(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
                            unk_0x59D299A96F03A83C(0, unk_0x0FA8183DAD2B3203(), 6000, 0);
                            unk_0x59D299A96F03A83C(0, unk_0x0FA8183DAD2B3203(), 4500, 0);
                            unk_0xF827FEB33E873F71(0, unk_0x0FA8183DAD2B3203(), 0, 16);
                            unk_0x15A7B753872B3CE3(uLocal_107);
                            unk_0xC544A8E1032AC1CF(iLocal_98[15], uLocal_107);
                            unk_0x78829A259A6975CD(&uLocal_107);
                            unk_0xA12E1659DEF57244(&uLocal_107);
                            unk_0x63D387323969ABE0(0, -1163.279f, 4932.933f, 222.541f, unk_0x0FA8183DAD2B3203(), 1f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
                            unk_0x063B82A578F91CF2(0, unk_0x0FA8183DAD2B3203(), 5000, 0);
                            unk_0x59D299A96F03A83C(0, unk_0x0FA8183DAD2B3203(), 7500, 0);
                            unk_0x59D299A96F03A83C(0, unk_0x0FA8183DAD2B3203(), 4500, 0);
                            unk_0xF827FEB33E873F71(0, unk_0x0FA8183DAD2B3203(), 0, 16);
                            unk_0x15A7B753872B3CE3(uLocal_107);
                            unk_0xC544A8E1032AC1CF(iLocal_98[14], uLocal_107);
                            unk_0x78829A259A6975CD(&uLocal_107);
                            unk_0xA12E1659DEF57244(&uLocal_107);
                            unk_0x59D299A96F03A83C(0, unk_0x0FA8183DAD2B3203(), 2500, 0);
                            unk_0x063B82A578F91CF2(0, unk_0x0FA8183DAD2B3203(), 5000, 0);
                            unk_0x63D387323969ABE0(0, -1156.175f, 4926.073f, 221.3447f, unk_0x0FA8183DAD2B3203(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
                            unk_0x59D299A96F03A83C(0, unk_0x0FA8183DAD2B3203(), 6500, 0);
                            unk_0x59D299A96F03A83C(0, unk_0x0FA8183DAD2B3203(), 4500, 0);
                            unk_0xF827FEB33E873F71(0, unk_0x0FA8183DAD2B3203(), 0, 16);
                            unk_0x15A7B753872B3CE3(uLocal_107);
                            unk_0xC544A8E1032AC1CF(iLocal_98[13], uLocal_107);
                            unk_0x78829A259A6975CD(&uLocal_107);
                            unk_0xA12E1659DEF57244(&uLocal_107);
                            unk_0x59D299A96F03A83C(0, unk_0x0FA8183DAD2B3203(), 3000, 0);
                            unk_0x63D387323969ABE0(0, -1157.962f, 4922.196f, 221.309f, unk_0x0FA8183DAD2B3203(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
                            unk_0x59D299A96F03A83C(0, unk_0x0FA8183DAD2B3203(), 5500, 0);
                            unk_0x59D299A96F03A83C(0, unk_0x0FA8183DAD2B3203(), 4500, 0);
                            unk_0xF827FEB33E873F71(0, unk_0x0FA8183DAD2B3203(), 0, 16);
                            unk_0x15A7B753872B3CE3(uLocal_107);
                            unk_0xC544A8E1032AC1CF(iLocal_98[12], uLocal_107);
                            unk_0x78829A259A6975CD(&uLocal_107);
                            unk_0xA12E1659DEF57244(&uLocal_107);
                            unk_0x59D299A96F03A83C(0, unk_0x0FA8183DAD2B3203(), 4500, 0);
                            unk_0x063B82A578F91CF2(0, unk_0x0FA8183DAD2B3203(), 10000, 0);
                            unk_0x63D387323969ABE0(0, -1161.475f, 4916.061f, 220.5658f, unk_0x0FA8183DAD2B3203(), 2f, 1, 0.5f, 4f, 1, 0, 0, -957453492, 20000);
                            unk_0x59D299A96F03A83C(0, unk_0x0FA8183DAD2B3203(), 4500, 0);
                            unk_0x59D299A96F03A83C(0, unk_0x0FA8183DAD2B3203(), 4500, 0);
                            unk_0xF827FEB33E873F71(0, unk_0x0FA8183DAD2B3203(), 0, 16);
                            unk_0x15A7B753872B3CE3(uLocal_107);
                            unk_0xC544A8E1032AC1CF(iLocal_98[11], uLocal_107);
                            unk_0x78829A259A6975CD(&uLocal_107);
                            unk_0x7D81B41B134BD6F2(iLocal_98[iVar1], 1);
                            unk_0x70CBCB37A00F34A2(iLocal_98[iVar1], 156, 1);
                        }
                    }
                    else
                    {
                        iLocal_98[iVar1] = unk_0xB983F26E7AFB47BF(26, joaat("a_m_o_acult_02"), vLocal_51[iVar1 /*3*/], fLocal_52[iVar1], 1, true);
                        unk_0xCDB7DE4079A7DF65(iLocal_98[iVar1], 0);
                        unk_0xC167C31F20B1FD61(iLocal_98[iVar1], joaat("weapon_pistol"), -1, true, true);
                        unk_0xDEB0AA30ABFDCF48(iLocal_98[iVar1], 50, 1);
                        unk_0x372133FEEA436533(iLocal_98[iVar1], 2);
                        unk_0x4EB7E1C0903EDB2E(iLocal_98[iVar1], 0);
                        unk_0x9FCB7DB37F426208(iLocal_98[iVar1], 50f, 20);
                        unk_0x641587D7C7BE76D8(iLocal_98[iVar1], 1);
                        unk_0x160AF5DE0B0878EE(iLocal_98[iVar1], 5);
                        unk_0xF72BBF2E406BE27F(iLocal_98[iVar1], 100f);
                        unk_0x1FB49AA1C2C2A2F3(iLocal_98[iVar1], 100f);
                        unk_0x7FD049FE087DEDB4(iLocal_98[iVar1], unk_0xBAC643F143880136(40, 60));
                        unk_0xF827FEB33E873F71(iLocal_98[iVar1], unk_0x0FA8183DAD2B3203(), 0, 16);
                    }
                    unk_0xDB889DCC8B0139E6(iLocal_98[iVar1], iLocal_270);
                    unk_0x5A2B7C446C0CF087(iLocal_98[iVar1], func_134(unk_0xACE5E491FC1B0D37(iLocal_98[iVar1], 1), func_95(unk_0x7C7787D2D7139A85())));
                    unk_0xCC94EE23853F38E4(iLocal_98[iVar1], 1);
                    unk_0x1DB66BD2267055C0(iLocal_98[iVar1], 42, true);
                    uLocal_105[iVar1] = func_132(iLocal_98[iVar1], 1, 145);
                    iVar1++;
                }
                func_99(&uLocal_271, 0, unk_0x0FA8183DAD2B3203(), "TREVOR", 0, 1);
                func_99(&uLocal_271, 3, iLocal_98[11], "ACULTMaster", 0, 1);
                func_99(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
                unk_0xA1E7A40E1F56E511(&iVar0, 1);
                unk_0xA1E7A40E1F56E511(&iVar0, 3);
                unk_0xA1E7A40E1F56E511(&iVar0, 4);
                if (!bLocal_76)
                {
                    iLocal_102[0] = unk_0x007AE20F9BF069CA(joaat("pickup_money_case"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
                    iLocal_102[1] = unk_0x007AE20F9BF069CA(joaat("pickup_money_case"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
                    iLocal_102[2] = unk_0x007AE20F9BF069CA(joaat("pickup_money_case"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
                    iLocal_102[3] = unk_0x007AE20F9BF069CA(joaat("pickup_money_case"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
                }
                iLocal_102[0] = iLocal_102[0];
                iLocal_102[1] = iLocal_102[1];
                iLocal_102[2] = iLocal_102[2];
                iLocal_102[3] = iLocal_102[3];
                iLocal_103[0] = unk_0x7187764DB5121FC9(-1322183878, -1158.69f, 4915.709f, 220.2644f, true, true, false);
                iLocal_103[1] = unk_0x7187764DB5121FC9(-2022916910, -1156.246f, 4918.6f, 220.5432f, true, true, false);
                iLocal_103[2] = unk_0x7187764DB5121FC9(-1322183878, -1145.802f, 4931.816f, 219.9683f, true, true, false);
                iLocal_103[3] = unk_0x7187764DB5121FC9(-1322183878, -1133.369f, 4919.067f, 218.8385f, true, true, false);
                iLocal_103[4] = unk_0x7187764DB5121FC9(joaat("prop_box_wood05a"), -1132.025f, 4921.483f, 218.8244f, true, true, false);
                iLocal_103[5] = unk_0x7187764DB5121FC9(-2022916910, -1112.66f, 4929.268f, 217.1752f, true, true, false);
                unk_0xF3D48447FACBBE72(iLocal_103[0], 12.24288f, -0.014582f, 27.06056f, 2, 1);
                unk_0xF3D48447FACBBE72(iLocal_103[1], 7.733739f, 9.432779f, -2.865618f, 2, 1);
                unk_0xF3D48447FACBBE72(iLocal_103[2], 3.735082f, 4.551246f, 86.30917f, 2, 1);
                unk_0xF3D48447FACBBE72(iLocal_103[3], 0.240341f, 1.095195f, 36.59031f, 2, 1);
                unk_0xF3D48447FACBBE72(iLocal_103[4], 7.6772f, 1.232743f, 93.27483f, 2, 1);
                unk_0xF3D48447FACBBE72(iLocal_103[5], 3.367802f, -5.14387f, 97.30567f, 2, 1);
                if (func_131() < 50)
                {
                    unk_0x9F435C10D2730B30(unk_0x7C7787D2D7139A85(), 0.5f, 1);
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

int func_117(int iParam0)//Position - 0x435C
{
    if (func_122())
    {
        Global_1B3BE = 1;
        Global_1B3BB = unk_0x9B35D07DCD0F0B43();
        if (func_121(Global_1B3BD))
        {
            func_118(0);
        }
        unk_0x3415792782E2E29A(1, "RE_TITLE");
        if (iParam0 && func_121(Global_1B3BD))
        {
            unk_0x10C716954B3795A8();
        }
        return 1;
    }
    return 0;
}

void func_118(int iParam0)//Position - 0x43AF
{
    switch (iParam0)
    {
        case 0:
            if (Global_1B3C8.f_619E.f_2 < 3)
            {
                if (!unk_0x8F4A1C79B0DAADA3())
                {
                    func_119(func_120(iParam0), -1);
                    Global_1B3C8.f_619E.f_2++;
                    unk_0xA1E7A40E1F56E511(&Global_1B3C4, 0);
                }
            }
            break;
        
        case 1:
            if (!unk_0xA2BC31158C8CEFD2(Global_1B3C4, 1))
            {
                if (!unk_0x8F4A1C79B0DAADA3())
                {
                    func_119(func_120(iParam0), -1);
                    Global_1B3C8.f_619E.f_3++;
                    unk_0xA1E7A40E1F56E511(&Global_1B3C4, 1);
                }
            }
            break;
        
        case 2:
            if (!unk_0xA2BC31158C8CEFD2(Global_1B3C4, 2))
            {
                if (!unk_0x8F4A1C79B0DAADA3())
                {
                    func_119(func_120(iParam0), -1);
                    Global_1B3C8.f_619E.f_4++;
                    unk_0xA1E7A40E1F56E511(&Global_1B3C4, 2);
                }
            }
            break;
    }
}

void func_119(char* sParam0, int iParam1)//Position - 0x4490
{
    unk_0xD95C12E1062B7D5E(sParam0);
    unk_0x40DC0B0D5BD91E06(0, 0, 1, iParam1);
}

char* func_120(int iParam0)//Position - 0x44A7
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

int func_121(int iParam0)//Position - 0x44EB
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

int func_122()//Position - 0x451A
{
    switch (func_123(&Global_784B, 0, 5, 0, unk_0x429EE9FF15BB9033()))
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

int func_123(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x4550
{
    int iVar0;
    
    if (iParam1 == 7)
    {
        return 0;
    }
    if (!bParam3)
    {
        if (Global_177B1.f_2C == 1)
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
        Global_A190++;
        *uParam0 = Global_A190;
        unk_0x80DD2AE2084AED15(unk_0x7A8732CFB5113E77(), 0);
        Global_56C3.f_5 = 0;
        if (iParam2 != 5)
        {
            unk_0x74DBD46763D0F643(8);
        }
        Global_A1B4 = iParam2;
        Global_A18E = *uParam0;
        Global_A18F = iParam4;
        Global_A18D = 0;
        return 1;
    }
    if (*uParam0 != -1)
    {
        if (Global_A18D > 0)
        {
            iVar0 = 0;
            iVar0 = 0;
            while (iVar0 < Global_A18D)
            {
                if (Global_A193[iVar0 /*4*/] == *uParam0)
                {
                    return 2;
                }
                iVar0++;
            }
        }
        else if (Global_A18E == *uParam0)
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
        if (Global_A18D == 8)
        {
            return 0;
        }
        Global_A190++;
        *uParam0 = Global_A190;
        Global_A193[Global_A18D /*4*/] = Global_A190;
        Global_A193[Global_A18D /*4*/].f_1 = iParam1;
        Global_A193[Global_A18D /*4*/].f_2 = iParam2;
        Global_A193[Global_A18D /*4*/].f_3 = 0;
        Global_A18D++;
        if (iParam4 != 0)
        {
            func_124(uParam0, iParam4);
        }
    }
    return 2;
}

void func_124(var uParam0, int iParam1)//Position - 0x4687
{
    int iVar0;
    
    if (Global_A18D == 0)
    {
        return;
    }
    if (*uParam0 == -1)
    {
        return;
    }
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < Global_A18D)
    {
        if (Global_A193[iVar0 /*4*/] == *uParam0)
        {
            Global_A193[iVar0 /*4*/].f_3 = iParam1;
        }
        iVar0++;
    }
    *uParam0 = -1;
}

bool func_125(int iParam0)//Position - 0x46D6
{
    return func_126(iParam0, Global_A1B4);
}

int func_126(int iParam0, int iParam1)//Position - 0x46E7
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

int func_127(int iParam0)//Position - 0x48C8
{
    if (Global_A1B4 == 15)
    {
        return 0;
    }
    if (func_125(iParam0))
    {
        return 0;
    }
    return 1;
}

void func_128(int iParam0)//Position - 0x48EA
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
    unk_0xCFC4E8BEE304113D(0);
    unk_0x2D786727F990DBA9(1);
    Global_1B3BA = 0;
    func_129();
}

void func_129()//Position - 0x4920
{
    if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
    {
        if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
        {
            unk_0x0A43D5D11052D038(unk_0x7F375072508F738F(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0)), 1);
        }
        unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 32, false);
    }
}

int func_130()//Position - 0x495D
{
    return Global_1B3BD;
}

int func_131()//Position - 0x4969
{
    var uVar0;
    
    switch (func_15())
    {
        case 0:
            unk_0x367DA79FE620711B(joaat("sp0_special_ability"), &uVar0, -1);
            break;
        
        case 1:
            unk_0x367DA79FE620711B(joaat("sp1_special_ability"), &uVar0, -1);
            break;
        
        case 2:
            unk_0x367DA79FE620711B(joaat("sp2_special_ability"), &uVar0, -1);
            break;
    }
    return uVar0;
}

int func_132(int iParam0, bool bParam1, int iParam2)//Position - 0x49BE
{
    int iVar0;
    
    iVar0 = func_133(iParam0, !bParam1, 0);
    if ((iParam2 != 145 && unk_0x39A01A052D9B5FF0(iVar0)) && unk_0x005AF94672136563(&(Global_706[iParam2 /*29*/].f_3)))
    {
        unk_0x058B6969CEED705F(iVar0, &(Global_706[iParam2 /*29*/].f_3));
    }
    return iVar0;
}

int func_133(int iParam0, bool bParam1, bool bParam2)//Position - 0x4A08
{
    int iVar0;
    
    if (!unk_0xD4B321D9096B01FC(iParam0))
    {
        return 0;
    }
    iVar0 = unk_0xADA89D4F1A58FCBA(iParam0);
    if (unk_0x905FBA24E7FA8D23(iParam0))
    {
        unk_0xBC0D06064C5B5413(iVar0, func_41(unk_0x393E9918BC37548A(), 1f, 1f));
        if (!bParam2)
        {
            unk_0x14C335BB2F079BD4(iVar0, bParam1);
        }
        else
        {
            unk_0x088577CF98F96D05(iVar0, 2);
        }
    }
    else if (unk_0x4625051E51BA911B(iParam0))
    {
        unk_0xBC0D06064C5B5413(iVar0, func_41(unk_0x393E9918BC37548A(), 0.7f, 0.7f));
        unk_0x14C335BB2F079BD4(iVar0, bParam1);
    }
    else if (unk_0x0F100E7952E44923(iParam0))
    {
        unk_0xBC0D06064C5B5413(iVar0, func_41(unk_0x393E9918BC37548A(), 0.7f, 0.7f));
    }
    return iVar0;
}

float func_134(struct<2> Param0, float fParam1, struct<2> Param2, var uParam3)//Position - 0x4AAC
{
    return unk_0x3BA2E0B9E14A8025((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

void func_135()//Position - 0x4AC6
{
    Global_78FC = 1;
}

int func_136(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x4AD2
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    vector3 vVar5;
    int iVar6;
    int iVar7;
    
    iVar0 = 0;
    iVar2 = iParam1;
    if (!unk_0x980642D66B4A4C61(iParam0, iParam1, 0))
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
        if (!unk_0xF4B969E0807E76C7(iParam0, 0))
        {
            iVar3 = unk_0x65BD637EA0479590(iParam0, iVar2);
        }
        if (iVar3 == -1)
        {
            iVar4 = unk_0x39AB4316D77F1080(iVar2);
            if (iVar4 > 0)
            {
                iVar3 = iVar4;
            }
            else
            {
                unk_0x381EB99C42833B26(iParam0, iVar2, &iVar3);
            }
        }
    }
    vVar5 = { unk_0xACE5E491FC1B0D37(iParam0, 0) - Vector(10f, 0f, 0f) };
    if (bParam3)
    {
        vVar5 = { iParam4, iParam5, iParam6 };
    }
    while (func_140(iVar2, iVar6) != 0)
    {
        if (!unk_0xF4B969E0807E76C7(iParam0, 0))
        {
            if (unk_0xF484FDC5C64733BF(iParam0, iVar2, func_140(iVar2, iVar6)))
            {
                if (func_139(func_140(iVar2, iVar6)))
                {
                    iVar7 = unk_0xBBE3962D028888DC(func_140(iVar2, iVar6));
                }
            }
        }
        iVar6++;
    }
    iVar1 = unk_0x486FDD3D8766659C(iVar2, iVar3, vVar5, iVar0, 1065353216, iVar7, iParam7, iParam8);
    while (func_140(iVar2, iVar6) != 0)
    {
        if (!unk_0xF4B969E0807E76C7(iParam0, 0))
        {
            if (unk_0xF484FDC5C64733BF(iParam0, iVar2, func_140(iVar2, iVar6)))
            {
                unk_0x3238C6050D9D9395(iVar1, func_140(iVar2, iVar6));
                func_137(iVar1, func_140(iVar2, iVar6));
            }
        }
        iVar6++;
    }
    if (!unk_0xF4B969E0807E76C7(iParam0, 0))
    {
        if (unk_0x980642D66B4A4C61(iParam0, iVar2, 0))
        {
            unk_0x7D98E6A27B1B1A8F(iVar1, unk_0x5AFECC8B67A4CAE5(iParam0, iVar2));
        }
    }
    return iVar1;
}

void func_137(int iParam0, int iParam1)//Position - 0x4C46
{
    int iVar0;
    
    iVar0 = func_138(iParam1);
    if (iVar0 != 0)
    {
        unk_0x3238C6050D9D9395(iParam0, iVar0);
    }
}

int func_138(int iParam0)//Position - 0x4C64
{
    switch (iParam0)
    {
        case 1550611612:
            return -1258515792;
            break;
        
        case 368550800:
            return 438243936;
            break;
        
        case -1769069349:
            return -455079056;
            break;
        
        case 24902297:
            return 740920107;
            break;
        
        case -228041614:
            return -541616347;
            break;
        
        case -584961562:
            return 1809261196;
            break;
        
        case -1153175946:
            return -1646538868;
            break;
        
        case 1301287696:
            return -1290164948;
            break;
        
        case 1597093459:
            return -964465134;
            break;
        
        case 1769871776:
            return 1135718771;
            break;
        
        case -1827882671:
            return 1253942266;
            break;
        
        case 259780317:
            return -403805974;
            break;
        
        case -1973342474:
            return 691432737;
            break;
        
        case 1996130345:
            return 987648331;
            break;
        
        case -1455657812:
            return -431680535;
            break;
        
        case -1668263084:
            return -847582310;
            break;
        
        case 1308243489:
            return -92592218;
            break;
        
        case 1122574335:
            return -494548326;
            break;
        
        case 1420313469:
            return 730876697;
            break;
        
        case 109848390:
            return 583159708;
            break;
        
        case 593945703:
            return -1928503603;
            break;
        
        case 1142457062:
            return 520557834;
            break;
    }
    return 0;
}

int func_139(int iParam0)//Position - 0x4DEA
{
    if ((((((((((((((((((((((((((((((((iParam0 == joaat("component_pistol_varmod_luxe") || iParam0 == joaat("component_combatpistol_varmod_lowrider")) || iParam0 == joaat("component_appistol_varmod_luxe")) || iParam0 == joaat("component_microsmg_varmod_luxe")) || iParam0 == joaat("component_smg_varmod_luxe")) || iParam0 == joaat("component_assaultrifle_varmod_luxe")) || iParam0 == joaat("component_carbinerifle_varmod_luxe")) || iParam0 == joaat("component_advancedrifle_varmod_luxe")) || iParam0 == joaat("component_mg_varmod_lowrider")) || iParam0 == joaat("component_combatmg_varmod_lowrider")) || iParam0 == joaat("component_pumpshotgun_varmod_lowrider")) || iParam0 == joaat("component_sniperrifle_varmod_luxe")) || iParam0 == joaat("component_assaultsmg_varmod_lowrider")) || iParam0 == joaat("component_pistol50_varmod_luxe")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_bullpuprifle_varmod_low")) || iParam0 == joaat("component_snspistol_varmod_lowrider")) || iParam0 == joaat("component_specialcarbine_varmod_lowrider")) || iParam0 == joaat("component_sawnoffshotgun_varmod_luxe")) || iParam0 == joaat("component_knuckle_varmod_pimp")) || iParam0 == joaat("component_knuckle_varmod_ballas")) || iParam0 == joaat("component_knuckle_varmod_dollar")) || iParam0 == joaat("component_knuckle_varmod_diamond")) || iParam0 == joaat("component_knuckle_varmod_hate")) || iParam0 == joaat("component_knuckle_varmod_love")) || iParam0 == joaat("component_knuckle_varmod_player")) || iParam0 == joaat("component_knuckle_varmod_king")) || iParam0 == joaat("component_knuckle_varmod_vagos")) || iParam0 == joaat("component_switchblade_varmod_var1")) || iParam0 == joaat("component_switchblade_varmod_var2")) || iParam0 == joaat("component_revolver_varmod_boss")) || iParam0 == joaat("component_revolver_varmod_goon")) || iParam0 == 1623028892)
    {
        return 1;
    }
    return 0;
}

int func_140(int iParam0, int iParam1)//Position - 0x4FC2
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
        
        case -1121678507:
            switch (iParam1)
            {
                case 0:
                    iVar0 = -2067221805;
                    break;
                
                case 1:
                    iVar0 = -1820405577;
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
                    while (iVar2 < unk_0x6E2A2D341D785598(iVar1))
                    {
                        if (unk_0x0575653A26C467A1(iVar1, iVar2, &Var5))
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

int func_141(int iParam0)//Position - 0x5B33
{
    switch (iParam0)
    {
        case -1258515792:
        case 438243936:
        case -455079056:
        case 740920107:
        case -541616347:
        case 1809261196:
        case -1646538868:
        case -1290164948:
        case -964465134:
        case 1135718771:
        case 1253942266:
        case -403805974:
        case 691432737:
        case 987648331:
        case -431680535:
        case -847582310:
        case -92592218:
        case -494548326:
        case 730876697:
        case 583159708:
        case -1928503603:
        case 520557834:
            return 1;
            break;
    }
    return 0;
}

int func_142(int iParam0, var uParam1)//Position - 0x5BCE
{
    int iVar0;
    int iVar1;
    
    iVar1 = unk_0xC71F7DF3A350F7BC();
    iVar0 = 0;
    while (iVar0 < iVar1)
    {
        if (unk_0xF361E8FFC872484A(iVar0, uParam1))
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

bool func_143()//Position - 0x5C09
{
    bool bVar0;
    
    bVar0 = unk_0x9B70128914947222();
    if (!Global_12B20)
    {
        if (!bVar0)
        {
            Global_12B20 = 1;
        }
    }
    return bVar0;
}

int func_144(int iParam0, int iParam1)//Position - 0x5C2C
{
    if (iParam0 >= 78)
    {
        return 0;
    }
    return func_145(iParam0, iParam1);
}

int func_145(int iParam0, int iParam1)//Position - 0x5C47
{
    if (func_17(14) && !func_156(iParam0))
    {
        return 0;
    }
    if (unk_0x17A6988567C0F4A8(iParam0) && iParam1 == 1)
    {
        return 0;
    }
    if (Global_7907 != 0 && !Global_12B21)
    {
        return 0;
    }
    if (func_155(&Global_41275B))
    {
        if (func_153(&Global_41275B, iParam0))
        {
            return 0;
        }
        if (func_146(&Global_41275B, iParam0))
        {
            return 1;
        }
    }
    else
    {
        if (!unk_0xA123C027757634FD(iParam0))
        {
            return 0;
        }
        if (unk_0x17A6988567C0F4A8(iParam0))
        {
            return 1;
        }
        return 0;
    }
    return 0;
}

int func_146(var uParam0, int iParam1)//Position - 0x5CE4
{
    int iVar0;
    var uVar1[78];
    
    if (unk_0x17A6988567C0F4A8(iParam1))
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

int func_147(var uParam0, int iParam1)//Position - 0x5D95
{
    int iVar0;
    
    if (unk_0x17A6988567C0F4A8(iParam1))
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

bool func_148(var uParam0, int iParam1)//Position - 0x5E10
{
    return (*uParam0)[iParam1] == 78;
}

void func_149(var uParam0)//Position - 0x5E21
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < *uParam0)
    {
        func_150(uParam0, iVar0);
        iVar0++;
    }
    func_151(uParam0, (Global_41275A - 0.5f));
}

void func_150(var uParam0, int iParam1)//Position - 0x5E55
{
    (*uParam0)[iParam1] = 78;
}

void func_151(var uParam0, float fParam1)//Position - 0x5E65
{
    if (fParam1 == 0f)
    {
        uParam0->f_50 = 0f;
    }
    else
    {
        uParam0->f_50 = fParam1;
    }
}

float func_152(var uParam0)//Position - 0x5E82
{
    return uParam0->f_50;
}

bool func_153(var uParam0, int iParam1)//Position - 0x5E8E
{
    return func_154(uParam0, iParam1) != -1;
}

int func_154(var uParam0, int iParam1)//Position - 0x5EA0
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

bool func_155(var uParam0)//Position - 0x5ECD
{
    return uParam0->f_4F == 1;
}

int func_156(int iParam0)//Position - 0x5EDB
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

void func_157()//Position - 0x5F2B
{
    if (fLocal_87 > 0f)
    {
        fLocal_87 = (fLocal_87 - (0.6f / (1f / unk_0x9927BD5F023FA79D())));
    }
    else
    {
        fLocal_87 = 0f;
    }
    if (fLocal_87 >= 0f)
    {
        unk_0x2AC14ADFD44CCDAA(Global_9E47[10 /*31*/], fLocal_87, 0, 1);
        unk_0xF58083E4652F7505(Global_9E47[10 /*31*/], 4, 0, 1);
    }
    if (fLocal_86 < 0f)
    {
        fLocal_86 = (fLocal_86 + (0.6f / (1f / unk_0x9927BD5F023FA79D())));
    }
    else
    {
        fLocal_86 = 0f;
    }
    if (fLocal_86 <= 0f)
    {
        unk_0x2AC14ADFD44CCDAA(Global_9E47[9 /*31*/], fLocal_86, 0, 1);
        unk_0xF58083E4652F7505(Global_9E47[9 /*31*/], 4, 0, 1);
    }
}

void func_158()//Position - 0x5FB7
{
    if (fLocal_87 < 1f)
    {
        fLocal_87 = (fLocal_87 + (0.6f / (1f / unk_0x9927BD5F023FA79D())));
    }
    else
    {
        fLocal_87 = 1f;
    }
    if (fLocal_87 <= 1f)
    {
        unk_0x2AC14ADFD44CCDAA(Global_9E47[10 /*31*/], fLocal_87, 0, 1);
        unk_0xF58083E4652F7505(Global_9E47[10 /*31*/], 4, 0, 1);
    }
    if (fLocal_86 > -1f)
    {
        fLocal_86 = (fLocal_86 - (0.6f / (1f / unk_0x9927BD5F023FA79D())));
    }
    else
    {
        fLocal_86 = -1f;
    }
    if (fLocal_86 >= -1f)
    {
        unk_0x2AC14ADFD44CCDAA(Global_9E47[9 /*31*/], fLocal_86, 0, 1);
        unk_0xF58083E4652F7505(Global_9E47[9 /*31*/], 4, 0, 1);
    }
}

void func_159()//Position - 0x6043
{
    switch (iLocal_93)
    {
        case 0:
            unk_0x6BB2B1818CAE531E(joaat("a_m_o_acult_02"));
            unk_0x6BB2B1818CAE531E(joaat("prop_anim_cash_pile_02"));
            unk_0x36B659209EBDD366("random@altruist_cult");
            unk_0xF45B7CAEA9F06737("AC_DELIVERED");
            unk_0xC74EF0456E007BD1(joaat("weapon_assaultrifle"), 31, 0);
            if ((((unk_0x6DF9C43E3CC645BC(joaat("a_m_o_acult_02")) && unk_0x6DF9C43E3CC645BC(joaat("prop_anim_cash_pile_02"))) && unk_0xB25A0D192C6A0A5B("random@altruist_cult")) && unk_0xF45B7CAEA9F06737("AC_DELIVERED")) && unk_0x9304CCDF065E668A(joaat("weapon_assaultrifle")))
            {
                if (Global_1B3C8.f_619E.f_5 < 2)
                {
                    if (Global_1B3C8.f_619E.f_5 == 0)
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
                else if (Global_1B3C8.f_619E.f_5 >= 2)
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
                    unk_0x6BB2B1818CAE531E(-2022916910);
                    unk_0x6BB2B1818CAE531E(-1322183878);
                    unk_0x6BB2B1818CAE531E(joaat("prop_box_wood05a"));
                    unk_0x6BB2B1818CAE531E(joaat("prop_security_case_01"));
                    if (!unk_0x9C472738425216B8())
                    {
                        unk_0xBA51426C369A1164("ac_ig_3_p3_b", 8);
                    }
                }
                if (unk_0x39A01A052D9B5FF0(iLocal_104))
                {
                    unk_0xAA2276003B2ADF1B(&iLocal_104);
                }
                func_23(1, 1, 1, 0, 0, 0);
                unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), false, 0);
                unk_0x0D23E3918F7AF11B(1);
                unk_0x5AC8A91A3FD00B39(false);
                unk_0x4BEE8AE599A4A300(false);
                unk_0x27E0AD6B82174301(unk_0x0FA8183DAD2B3203(), 1);
                unk_0xE5DAA5553A176799(unk_0x0FA8183DAD2B3203(), joaat("weapon_unarmed"), true);
                unk_0x81995F6F93D8C987("AC_DELIVERED");
                if (func_187())
                {
                    func_186(0);
                }
                func_184();
                SYSTEM::WAIT(0);
                if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
                {
                    iLocal_99 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
                    if (unk_0xD960230552BC4165(iLocal_99, 0))
                    {
                        if (unk_0xACA46879E999E35C(iLocal_99))
                        {
                            iLocal_93++;
                        }
                    }
                }
                else
                {
                    iLocal_99 = unk_0x9B79A29933E4A8FA();
                    if (!unk_0x2BF5E63466422C38(uLocal_97[0]) && !unk_0x2BF5E63466422C38(uLocal_97[1]))
                    {
                        unk_0xC6612209077465DD(uLocal_97[0]);
                        unk_0x91F590A9823EB649(uLocal_97[0]);
                        unk_0xC6612209077465DD(uLocal_97[1]);
                        unk_0x91F590A9823EB649(uLocal_97[1]);
                    }
                    iLocal_93++;
                }
            }
            break;
        
        case 1:
            if (unk_0xD4B321D9096B01FC(iLocal_99))
            {
                if (!unk_0x00123AB82C5FAC28(iLocal_99))
                {
                    unk_0xE5C667CF3B4642D2(iLocal_99, 1, 0);
                }
                if (unk_0xC49563EAE7AACA6C(iLocal_99, vLocal_54, 13f, 13f, 13f, 0, 1, 0))
                {
                    unk_0xCB3446C6A91D1A78(iLocal_99, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
                    if (!unk_0xF4B969E0807E76C7(iLocal_99, 0))
                    {
                        unk_0x5A2B7C446C0CF087(iLocal_99, 149.8882f);
                        unk_0x1ECAE5FB4DE78CF8(iLocal_99, 1084227584);
                    }
                }
            }
            unk_0xB82DC93528F8603C(vLocal_54, 12f, 1, 0, 0, false);
            unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
            unk_0x5A2B7C446C0CF087(unk_0x0FA8183DAD2B3203(), 128.2065f);
            if (!unk_0x2BF5E63466422C38(uLocal_97[0]) && !unk_0x2BF5E63466422C38(uLocal_97[1]))
            {
                unk_0xCB3446C6A91D1A78(uLocal_97[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
                unk_0x5A2B7C446C0CF087(uLocal_97[0], 128.2065f);
                unk_0xCB3446C6A91D1A78(uLocal_97[1], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), 1, 0, 0, 1);
                unk_0x5A2B7C446C0CF087(uLocal_97[1], 128.2065f);
            }
            iLocal_98[0] = unk_0xB983F26E7AFB47BF(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, true);
            func_99(&uLocal_271, 1, iLocal_98[0], "ACULTMember1", 0, 1);
            if (Global_1B3C8.f_619E.f_5 >= 2)
            {
                iLocal_98[1] = unk_0xB983F26E7AFB47BF(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, true);
                func_99(&uLocal_271, 2, iLocal_98[1], "ACULTMember2", 0, 1);
            }
            func_99(&uLocal_271, 0, unk_0x0FA8183DAD2B3203(), "TREVOR", 0, 1);
            func_99(&uLocal_271, 3, 0, "ACULTMaster", 0, 1);
            func_99(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
            func_100(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
            unk_0xCC94EE23853F38E4(iLocal_98[0], 1);
            iLocal_101 = unk_0x486FDD3D8766659C(joaat("weapon_assaultrifle"), -1, unk_0xACE5E491FC1B0D37(iLocal_98[0], 1), 1, 1065353216, 0, 0, 1);
            unk_0x01DF2D3988024DB4(iLocal_101, iLocal_98[0], unk_0xDD454299E9E58208(iLocal_98[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
            if (Global_1B3C8.f_619E.f_5 < 2)
            {
                iLocal_100 = unk_0x7187764DB5121FC9(joaat("prop_anim_cash_pile_02"), vLocal_53, true, true, false);
                unk_0x01DF2D3988024DB4(iLocal_100, unk_0x0FA8183DAD2B3203(), unk_0xDD454299E9E58208(unk_0x0FA8183DAD2B3203(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
            }
            else if (Global_1B3C8.f_619E.f_5 >= 2)
            {
                unk_0xC167C31F20B1FD61(iLocal_98[1], joaat("weapon_assaultrifle"), -1, true, true);
            }
            iLocal_106 = unk_0x87B0FFB353287F00("DEFAULT_ANIMATED_CAMERA", 1);
            iLocal_92 = unk_0xF2A54C51C03CADAA(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
            unk_0x8582CCEB95B1F1BE(unk_0x0FA8183DAD2B3203(), iLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1148846080, 0);
            unk_0x8582CCEB95B1F1BE(iLocal_98[0], iLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1148846080, 0);
            if (Global_1B3C8.f_619E.f_5 >= 2)
            {
                unk_0x8582CCEB95B1F1BE(iLocal_98[1], iLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1148846080, 0);
            }
            unk_0x0116AC515A8787A5(iLocal_106, iLocal_92, sLocal_268, "random@altruist_cult");
            unk_0x0298C8010FD5A69E(true, false, 3000, 1, 0, 0);
            if (!unk_0x2BF5E63466422C38(uLocal_97[0]) && !unk_0x2BF5E63466422C38(uLocal_97[1]))
            {
                unk_0x8582CCEB95B1F1BE(uLocal_97[0], iLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 4, 0, 1148846080, 0);
                unk_0x8582CCEB95B1F1BE(uLocal_97[1], iLocal_92, "random@altruist_cult", sLocal_267, 1000f, -2f, 4, 0, 1148846080, 0);
            }
            iLocal_93++;
            break;
        
        case 2:
            if (!unk_0x2BF5E63466422C38(uLocal_97[0]))
            {
                if (unk_0x0F81A86FA23D44FA(uLocal_97[0]))
                {
                    func_182(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
                }
                else
                {
                    func_182(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
                }
            }
            if (!unk_0x2BF5E63466422C38(uLocal_97[1]))
            {
                if (unk_0x0F81A86FA23D44FA(uLocal_97[1]))
                {
                    func_182(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
                }
                else
                {
                    func_182(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
                }
            }
            if (unk_0x91F0628278985DB8(iLocal_92) > fLocal_89)
            {
                iLocal_93++;
            }
            break;
        
        case 3:
            if (!unk_0x2BF5E63466422C38(uLocal_97[0]))
            {
                if (unk_0x0F81A86FA23D44FA(uLocal_97[0]))
                {
                    func_182(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
                }
                else
                {
                    func_182(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
                }
            }
            if (!unk_0x2BF5E63466422C38(uLocal_97[1]))
            {
                if (unk_0x0F81A86FA23D44FA(uLocal_97[1]))
                {
                    func_182(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
                }
                else
                {
                    func_182(uLocal_97[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
                }
            }
            if (unk_0x91F0628278985DB8(iLocal_92) > fLocal_88)
            {
                iLocal_93++;
            }
            break;
        
        case 4:
            if (Global_1B3C8.f_619E.f_5 < 2)
            {
                func_135();
                if (unk_0xD4B321D9096B01FC(iLocal_98[0]))
                {
                    unk_0x4F058F27442031CC(&(iLocal_98[0]));
                }
                if (unk_0xD4B321D9096B01FC(iLocal_98[1]))
                {
                    unk_0x4F058F27442031CC(&(iLocal_98[1]));
                }
                if (unk_0xD4B321D9096B01FC(iLocal_100))
                {
                    unk_0x377C9F2989832369(&iLocal_100);
                }
                if (unk_0xD4B321D9096B01FC(iLocal_101))
                {
                    unk_0x377C9F2989832369(&iLocal_101);
                }
                unk_0xC6612209077465DD(unk_0x0FA8183DAD2B3203());
                unk_0x45F85138C99B8999(0, 0, 3, 0);
                unk_0x0472F75F711AABCE(iLocal_106, false);
                func_23(0, 1, 1, 0, 0, 0);
                unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), true, 0);
                unk_0x5AC8A91A3FD00B39(true);
                unk_0x4BEE8AE599A4A300(true);
                unk_0x27E0AD6B82174301(unk_0x0FA8183DAD2B3203(), 0);
                unk_0xB489E71A45CDC02F(0);
                func_160(func_15(), 1, 2000, 0, 0);
            }
            unk_0x81995F6F93D8C987("AC_DONE");
            Global_1B3C8.f_619E.f_5 += 2;
            iLocal_78 = 1;
            break;
    }
}

void func_160(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x6879
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
                    iVar1 = joaat("sp0_money_made_from_random_peds");
                    break;
                
                case 1:
                    iVar1 = joaat("sp1_money_made_from_random_peds");
                    break;
                
                case 2:
                    iVar1 = joaat("sp2_money_made_from_random_peds");
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
                    iVar1 = joaat("sp0_money_made_from_missions");
                    break;
                
                case 1:
                    iVar1 = joaat("sp1_money_made_from_missions");
                    break;
                
                case 2:
                    iVar1 = joaat("sp2_money_made_from_missions");
                    break;
                
                default:
                    return;
                }
        }
        unk_0x367DA79FE620711B(iVar1, &iVar0, -1);
        iVar0 = (iVar0 + iParam2);
        unk_0x41410A69AD49AFCD(iVar1, iVar0, 1);
    }
}

int func_161(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x694B
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
                    func_178(joaat("sp0_money_total_spent"), iParam3);
                    break;
                
                case 1:
                    func_178(joaat("sp1_money_total_spent"), iParam3);
                    break;
                
                case 2:
                    func_178(joaat("sp2_money_total_spent"), iParam3);
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
                            func_178(joaat("sp0_money_spent_on_tattoos"), iParam3);
                            break;
                        
                        case 1:
                            func_178(joaat("sp1_money_spent_on_tattoos"), iParam3);
                            break;
                        
                        case 2:
                            func_178(joaat("sp2_money_spent_on_tattoos"), iParam3);
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
                            func_178(joaat("sp0_money_spent_on_taxis"), iParam3);
                            break;
                        
                        case 1:
                            func_178(joaat("sp1_money_spent_on_taxis"), iParam3);
                            break;
                        
                        case 2:
                            func_178(joaat("sp2_money_spent_on_taxis"), iParam3);
                            break;
                    }
                    break;
                
                case 25:
                    switch (iParam0)
                    {
                        case 0:
                            func_178(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
                            break;
                        
                        case 1:
                            func_178(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
                            break;
                        
                        case 2:
                            func_178(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
                            func_178(joaat("sp0_money_spent_property"), iParam3);
                            break;
                        
                        case 1:
                            func_178(joaat("sp1_money_spent_property"), iParam3);
                            break;
                        
                        case 2:
                            func_178(joaat("sp2_money_spent_property"), iParam3);
                            break;
                    }
                    break;
                
                default:
                    switch (unk_0xB4D15BCA2CC28DF9())
                    {
                        case joaat("clothes_shop_sp"):
                            switch (iParam0)
                            {
                                case 0:
                                    func_178(joaat("sp0_money_spent_in_clothes"), iParam3);
                                    break;
                                
                                case 1:
                                    func_178(joaat("sp1_money_spent_in_clothes"), iParam3);
                                    break;
                                
                                case 2:
                                    func_178(joaat("sp2_money_spent_in_clothes"), iParam3);
                                    break;
                            }
                            break;
                        
                        case joaat("hairdo_shop_sp"):
                            switch (iParam0)
                            {
                                case 0:
                                    func_178(joaat("sp0_money_spent_on_hairdos"), iParam3);
                                    break;
                                
                                case 1:
                                    func_178(joaat("sp1_money_spent_on_hairdos"), iParam3);
                                    break;
                                
                                case 2:
                                    func_178(joaat("sp2_money_spent_on_hairdos"), iParam3);
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
                                    func_178(joaat("sp0_money_spent_in_buying_guns"), iParam3);
                                    break;
                                
                                case 1:
                                    func_178(joaat("sp1_money_spent_in_buying_guns"), iParam3);
                                    break;
                                
                                case 2:
                                    func_178(joaat("sp2_money_spent_in_buying_guns"), iParam3);
                                    break;
                            }
                            break;
                        
                        case joaat("carmod_shop"):
                            switch (iParam0)
                            {
                                case 0:
                                    func_178(joaat("sp0_money_spent_car_mods"), iParam3);
                                    break;
                                
                                case 1:
                                    func_178(joaat("sp1_money_spent_car_mods"), iParam3);
                                    break;
                                
                                case 2:
                                    func_178(joaat("sp2_money_spent_car_mods"), iParam3);
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
    iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
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
    iVar5 = (Global_E515[iVar2] + iParam3);
    switch (iParam1)
    {
        case 1:
            if (Global_E515[iVar2] >= 0 && iParam3 > 0)
            {
                if (iVar5 <= 0)
                {
                    Global_E515[iVar2] = 2147483647;
                }
                else
                {
                    Global_E515[iVar2] = (Global_E515[iVar2] + iParam3);
                }
            }
            switch (iParam0)
            {
                case 0:
                    func_178(joaat("sp0_total_cash_earned"), iParam3);
                    break;
                
                case 1:
                    func_178(joaat("sp1_total_cash_earned"), iParam3);
                    break;
                
                case 2:
                    func_178(joaat("sp2_total_cash_earned"), iParam3);
                    break;
            }
            break;
        
        case 0:
            if (!bParam4)
            {
                if ((Global_E515[iVar2] - iParam3) < 0)
                {
                    return 0;
                }
            }
            iVar3 = Global_E515[iVar2];
            Global_E515[iVar2] = (Global_E515[iVar2] - iParam3);
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
        Global_1B3C8.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B3C8.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/] = iParam1;
        Global_1B3C8.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B3C8.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
        Global_1B3C8.f_504F.f_E9[iVar2 /*69*/].f_2[Global_1B3C8.f_504F.f_E9[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
        Global_1B3C8.f_504F.f_E9[iVar2 /*69*/]++;
        Global_1B3C8.f_504F.f_E9[iVar2 /*69*/].f_1++;
        if (Global_1B3C8.f_504F.f_E9[iVar2 /*69*/].f_1 > 10)
        {
            Global_1B3C8.f_504F.f_E9[iVar2 /*69*/].f_1 = 0;
        }
    }
    func_163(iParam0);
    if (Global_A1B4 == 15)
    {
        func_162(0);
    }
    return 1;
}

void func_162(bool bParam0)//Position - 0x6F4A
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
            Global_1B3C8.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_1B3C8.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
            Global_1B3C8.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_1B3C8.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
            Global_1B3C8.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_1B3C8.f_504F.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
            iVar1++;
        }
        iVar0++;
    }
    iVar0 = 0;
    while (iVar0 < 10)
    {
        Global_E51D[iVar0 /*3*/][0] = Global_1B3C8.f_504F[iVar0];
        Global_E51D.f_1F[iVar0 /*3*/][0] = Global_1B3C8.f_504F.f_B[iVar0];
        Global_E51D.f_3E[iVar0 /*3*/][0] = Global_1B3C8.f_504F.f_16[iVar0];
        Global_E51D.f_5D[iVar0 /*3*/][0] = Global_1B3C8.f_504F.f_21[iVar0];
        Global_E51D.f_7C[iVar0 /*3*/][0] = Global_1B3C8.f_504F.f_2C[iVar0];
        Global_E51D.f_9B[iVar0 /*3*/][0] = Global_1B3C8.f_504F.f_37[iVar0];
        Global_E51D.f_BA[iVar0 /*3*/][0] = Global_1B3C8.f_504F.f_42[iVar0];
        Global_E51D.f_D9[iVar0 /*3*/][0] = Global_1B3C8.f_504F.f_4D[iVar0];
        Global_E51D.f_F8[iVar0 /*3*/][0] = Global_1B3C8.f_504F.f_58[iVar0];
        if (!bParam0)
        {
            Global_E51D[iVar0 /*3*/][1] = Global_1B3C8.f_504F[iVar0];
            Global_E51D.f_1F[iVar0 /*3*/][1] = Global_1B3C8.f_504F.f_B[iVar0];
            Global_E51D.f_3E[iVar0 /*3*/][1] = Global_1B3C8.f_504F.f_16[iVar0];
            Global_E51D.f_5D[iVar0 /*3*/][1] = Global_1B3C8.f_504F.f_21[iVar0];
            Global_E51D.f_7C[iVar0 /*3*/][1] = Global_1B3C8.f_504F.f_2C[iVar0];
            Global_E51D.f_9B[iVar0 /*3*/][1] = Global_1B3C8.f_504F.f_37[iVar0];
            Global_E51D.f_BA[iVar0 /*3*/][1] = Global_1B3C8.f_504F.f_42[iVar0];
            Global_E51D.f_D9[iVar0 /*3*/][1] = Global_1B3C8.f_504F.f_4D[iVar0];
            Global_E51D.f_F8[iVar0 /*3*/][1] = Global_1B3C8.f_504F.f_58[iVar0];
        }
        iVar0++;
    }
}

void func_163(int iParam0)//Position - 0x71CC
{
    int iVar0;
    
    iVar0 = Global_E515[iParam0];
    switch (iParam0)
    {
        case 0:
            unk_0x41410A69AD49AFCD(joaat("sp0_total_cash"), iVar0, 1);
            break;
        
        case 1:
            unk_0x41410A69AD49AFCD(joaat("sp1_total_cash"), iVar0, 1);
            break;
        
        case 2:
            unk_0x41410A69AD49AFCD(joaat("sp2_total_cash"), iVar0, 1);
            break;
    }
}

void func_164(int iParam0)//Position - 0x7226
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
        func_167(8269, 0, -1, 1, 0);
        return;
    }
    if (iParam0 == 13)
    {
        func_167(8270, 0, -1, 1, 0);
        return;
    }
    if (iParam0 == 14)
    {
        func_167(8271, 0, -1, 1, 0);
        return;
    }
    if (iParam0 == 15)
    {
        func_167(8272, 0, -1, 1, 0);
        return;
    }
    if (iParam0 == 16)
    {
        func_167(8273, 0, -1, 1, 0);
        return;
    }
    if (iParam0 == 17)
    {
        func_167(8274, 0, -1, 1, 0);
        return;
    }
    bVar0 = false;
    if (!unk_0x393E9918BC37548A())
    {
        if (unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_504F.f_1D7, iParam0))
        {
            bVar0 = true;
            unk_0x3B76114EC84D5812(&(Global_1B3C8.f_504F.f_1D7), iParam0);
        }
    }
    else if (unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_504F.f_1D7, iParam0) || unk_0xA2BC31158C8CEFD2(Global_200000[func_166() /*10828*/].f_1818.f_A, iParam0))
    {
        bVar0 = true;
        unk_0x3B76114EC84D5812(&(Global_1B3C8.f_504F.f_1D7), iParam0);
        unk_0x3B76114EC84D5812(&(Global_200000[func_166() /*10828*/].f_1818.f_A), iParam0);
    }
    if (bVar0)
    {
        StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
        unk_0x6C607B5286DEE8D9("COUP_RED");
        unk_0x0AC9F8E1AFCEC860(func_165(iParam0));
        unk_0x480C449653B881B1(&cVar1, &cVar1, 1, 0, "", 0);
    }
}

char* func_165(int iParam0)//Position - 0x73B7
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

int func_166()//Position - 0x74B4
{
    int iVar0;
    
    iVar0 = 0;
    return iVar0;
}

void func_167(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x74C1
{
    int iVar0;
    
    if (bParam4)
    {
    }
    iVar0 = Global_26CBBF[iParam0 /*3*/][func_168(iParam2)];
    if (iVar0 != 0)
    {
        unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
    }
}

int func_168(var uParam0)//Position - 0x74F1
{
    int iVar0;
    int iVar1;
    
    iVar0 = uParam0;
    if (iVar0 == -1)
    {
        iVar1 = func_27();
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

int func_169(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7525
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
    
    if (iParam2 == -1)
    {
        iParam2 = func_27();
    }
    iVar0 = 0;
    if (iParam0 >= 0 && iParam0 < 192)
    {
        iVar2 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam2);
        iVar1 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar2, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 192 && iParam0 < 384)
    {
        iVar3 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam2);
        iVar1 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar3, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 513 && iParam0 < 705)
    {
        iVar4 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
        iVar1 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar4, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 705 && iParam0 < 1281)
    {
        iVar5 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
        iVar1 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar5, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 3111 && iParam0 < 3879)
    {
        iVar6 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam2);
        iVar1 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar6, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 2919 && iParam0 < 3111)
    {
        iVar7 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
        iVar1 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar7, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 4207 && iParam0 < 4335)
    {
        iVar8 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
        iVar1 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar8, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 4335 && iParam0 < 4399)
    {
        iVar9 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
        iVar1 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar9, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 6029 && iParam0 < 6413)
    {
        iVar10 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
        iVar1 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar10, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 7385 && iParam0 < 7641)
    {
        iVar11 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
        iVar1 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar11, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 7321 && iParam0 < 7385)
    {
        iVar12 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
        iVar1 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar12, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 9361 && iParam0 < 9553)
    {
        iVar13 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
        iVar1 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar13, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 15369 && iParam0 < 15561)
    {
        iVar14 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
        iVar1 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar14, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 15562 && iParam0 < 15946)
    {
        iVar15 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
        iVar1 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar15, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 15946 && iParam0 < 16010)
    {
        iVar16 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
        iVar1 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar16, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 18098 && iParam0 < 18162)
    {
        iVar17 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
        iVar1 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar17, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 22066 && iParam0 < 22194)
    {
        iVar18 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
        iVar1 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar18, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 24962 && iParam0 < 25538)
    {
        iVar19 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
        iVar1 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar19, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 26810 && iParam0 < 27258)
    {
        iVar20 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
        iVar1 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar20, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 28098 && iParam0 < 28354)
    {
        iVar21 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam2, "_CASINOHSTPSTAT_BOOL");
        iVar1 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar21, iParam1, iVar1, iParam3);
    }
    else if (iParam0 >= 28355 && iParam0 < 28483)
    {
        iVar22 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam2, "_HEIST3TATTOOSTAT_BOOL");
        iVar1 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
        iVar0 = unk_0xCDCD424692301321(iVar22, iParam1, iVar1, iParam3);
    }
    return iVar0;
}

void func_170(int iParam0)//Position - 0x7B77
{
    func_179(93, iParam0);
    func_179(29, iParam0);
    func_179(30, iParam0);
}

bool func_171(int iParam0)//Position - 0x7B97
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
        iVar0 = unk_0x71EC776E812C6A0A();
        iVar1 = func_172(8269, -1, 0);
        if (iVar1 == 0 || iVar0 >= iVar1)
        {
            return 0;
        }
        return 1;
    }
    if (iParam0 == 13)
    {
        iVar2 = unk_0x71EC776E812C6A0A();
        iVar3 = func_172(8270, -1, 0);
        if (iVar3 == 0 || iVar2 >= iVar3)
        {
            return 0;
        }
        return 1;
    }
    if (iParam0 == 14)
    {
        iVar4 = unk_0x71EC776E812C6A0A();
        iVar5 = func_172(8271, -1, 0);
        if (iVar5 == 0 || iVar4 >= iVar5)
        {
            return 0;
        }
        return 1;
    }
    if (iParam0 == 15)
    {
        iVar6 = unk_0x71EC776E812C6A0A();
        iVar7 = func_172(8272, -1, 0);
        if (iVar7 == 0 || iVar6 >= iVar7)
        {
            return 0;
        }
        return 1;
    }
    if (iParam0 == 16)
    {
        iVar8 = unk_0x71EC776E812C6A0A();
        iVar9 = func_172(8273, -1, 0);
        if (iVar9 == 0 || iVar8 >= iVar9)
        {
            return 0;
        }
        return 1;
    }
    if (iParam0 == 17)
    {
        iVar10 = unk_0x71EC776E812C6A0A();
        iVar11 = func_172(8274, -1, 0);
        if (iVar11 == 0 || iVar10 >= iVar11)
        {
            return 0;
        }
        return 1;
    }
    if (!unk_0x393E9918BC37548A())
    {
        return unk_0xA2BC31158C8CEFD2(Global_1B3C8.f_504F.f_1D7, iParam0);
    }
    return unk_0xA2BC31158C8CEFD2(Global_200000[func_166() /*10828*/].f_1818.f_A, iParam0);
}

int func_172(int iParam0, int iParam1, int iParam2)//Position - 0x7D47
{
    int iVar0;
    var uVar1;
    
    if (iParam2 == 0)
    {
    }
    iVar0 = Global_26CBBF[iParam0 /*3*/][func_168(iParam1)];
    if (unk_0x367DA79FE620711B(iVar0, &uVar1, -1))
    {
        return uVar1;
    }
    return 0;
}

int func_173(int iParam0, int iParam1, int iParam2)//Position - 0x7D79
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
        iVar0 = unk_0x0F1A9E0CCDF4F08D(iVar1, uVar2, iParam2);
    }
    return iVar0;
}

int func_174(int iParam0)//Position - 0x7DB6
{
    int iVar0;
    
    iVar0 = 0;
    if (iParam0 >= 0 && iParam0 < 192)
    {
        iVar0 = ((iParam0 - 0) - unk_0x368CD44C448A9997((iParam0 - 0)) * 64);
    }
    else if (iParam0 >= 192 && iParam0 < 384)
    {
        iVar0 = ((iParam0 - 192) - unk_0x368CD44C448A9997((iParam0 - 192)) * 64);
    }
    else if (iParam0 >= 513 && iParam0 < 705)
    {
        iVar0 = ((iParam0 - 513) - unk_0x368CD44C448A9997((iParam0 - 513)) * 64);
    }
    else if (iParam0 >= 705 && iParam0 < 1281)
    {
        iVar0 = ((iParam0 - 705) - unk_0x368CD44C448A9997((iParam0 - 705)) * 64);
    }
    else if (iParam0 >= 2919 && iParam0 < 3111)
    {
        iVar0 = ((iParam0 - 2919) - unk_0x368CD44C448A9997((iParam0 - 2919)) * 64);
    }
    else if (iParam0 >= 3111 && iParam0 < 3879)
    {
        iVar0 = ((iParam0 - 3111) - unk_0x368CD44C448A9997((iParam0 - 3111)) * 64);
    }
    else if (iParam0 >= 4335 && iParam0 < 4399)
    {
        iVar0 = ((iParam0 - 4335) - unk_0x368CD44C448A9997((iParam0 - 4335)) * 64);
    }
    else if (iParam0 >= 4207 && iParam0 < 4335)
    {
        iVar0 = ((iParam0 - 4207) - unk_0x368CD44C448A9997((iParam0 - 4207)) * 64);
    }
    else if (iParam0 >= 6029 && iParam0 < 6413)
    {
        iVar0 = ((iParam0 - 6029) - unk_0x368CD44C448A9997((iParam0 - 6029)) * 64);
    }
    else if (iParam0 >= 7385 && iParam0 < 7641)
    {
        iVar0 = ((iParam0 - 7385) - unk_0x368CD44C448A9997((iParam0 - 7385)) * 64);
    }
    else if (iParam0 >= 7321 && iParam0 < 7385)
    {
        iVar0 = ((iParam0 - 7321) - unk_0x368CD44C448A9997((iParam0 - 7321)) * 64);
    }
    else if (iParam0 >= 9361 && iParam0 < 9553)
    {
        iVar0 = ((iParam0 - 9361) - unk_0x368CD44C448A9997((iParam0 - 9361)) * 64);
    }
    else if (iParam0 >= 15369 && iParam0 < 15561)
    {
        iVar0 = ((iParam0 - 15369) - unk_0x368CD44C448A9997((iParam0 - 15369)) * 64);
    }
    else if (iParam0 >= 15562 && iParam0 < 15946)
    {
        iVar0 = ((iParam0 - 15562) - unk_0x368CD44C448A9997((iParam0 - 15562)) * 64);
    }
    else if (iParam0 >= 15946 && iParam0 < 16010)
    {
        iVar0 = ((iParam0 - 15946) - unk_0x368CD44C448A9997((iParam0 - 15946)) * 64);
    }
    else if (iParam0 >= 18098 && iParam0 < 18162)
    {
        iVar0 = ((iParam0 - 18098) - unk_0x368CD44C448A9997((iParam0 - 18098)) * 64);
    }
    else if (iParam0 >= 22066 && iParam0 < 22194)
    {
        iVar0 = ((iParam0 - 22066) - unk_0x368CD44C448A9997((iParam0 - 22066)) * 64);
    }
    else if (iParam0 >= 24962 && iParam0 < 25538)
    {
        iVar0 = ((iParam0 - 24962) - unk_0x368CD44C448A9997((iParam0 - 24962)) * 64);
    }
    else if (iParam0 >= 26810 && iParam0 < 27258)
    {
        iVar0 = ((iParam0 - 26810) - unk_0x368CD44C448A9997((iParam0 - 26810)) * 64);
    }
    else if (iParam0 >= 28098 && iParam0 < 28354)
    {
        iVar0 = ((iParam0 - 28098) - unk_0x368CD44C448A9997((iParam0 - 28098)) * 64);
    }
    else if (iParam0 >= 28355 && iParam0 < 28483)
    {
        iVar0 = ((iParam0 - 28355) - unk_0x368CD44C448A9997((iParam0 - 28355)) * 64);
    }
    return iVar0;
}

int func_175(int iParam0, int iParam1)//Position - 0x8153
{
    int iVar0;
    
    if (iParam1 == -1)
    {
        iParam1 = func_27();
    }
    iVar0 = 0;
    if (iParam0 >= 0 && iParam0 < 192)
    {
        iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 0), 0, 1, iParam1);
    }
    else if (iParam0 >= 192 && iParam0 < 384)
    {
        iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 192), 1, 1, iParam1);
    }
    else if (iParam0 >= 513 && iParam0 < 705)
    {
        iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 513), 0, 0, 0);
    }
    else if (iParam0 >= 705 && iParam0 < 1281)
    {
        iVar0 = unk_0x0AF2E9D484CE7B77((iParam0 - 705), 1, 0, 0);
    }
    else if (iParam0 >= 2919 && iParam0 < 3111)
    {
        iVar0 = unk_0x01BC1C30C6CB2497((iParam0 - 2919), 0, 0, 0);
    }
    else if (iParam0 >= 3111 && iParam0 < 3879)
    {
        iVar0 = unk_0x01BC1C30C6CB2497((iParam0 - 3111), 0, 1, iParam1);
    }
    else if (iParam0 >= 4335 && iParam0 < 4399)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
    }
    else if (iParam0 >= 4207 && iParam0 < 4335)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
    }
    else if (iParam0 >= 6029 && iParam0 < 6413)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
    }
    else if (iParam0 >= 7321 && iParam0 < 7385)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
    }
    else if (iParam0 >= 7385 && iParam0 < 7641)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
    }
    else if (iParam0 >= 9361 && iParam0 < 9553)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
    }
    else if (iParam0 >= 15369 && iParam0 < 15561)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
    }
    else if (iParam0 >= 15562 && iParam0 < 15946)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
    }
    else if (iParam0 >= 15946 && iParam0 < 16010)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
    }
    else if (iParam0 >= 18098 && iParam0 < 18162)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
    }
    else if (iParam0 >= 22066 && iParam0 < 22194)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
    }
    else if (iParam0 >= 24962 && iParam0 < 25538)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
    }
    else if (iParam0 >= 26810 && iParam0 < 27258)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
    }
    else if (iParam0 >= 28098 && iParam0 < 28354)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 28098), 0, 1, iParam1, "_CASINOHSTPSTAT_BOOL");
    }
    else if (iParam0 >= 28355 && iParam0 < 28483)
    {
        iVar0 = unk_0xCD032CF93A7EDD1E((iParam0 - 28355), 0, 1, iParam1, "_HEIST3TATTOOSTAT_BOOL");
    }
    return iVar0;
}

int func_176(bool bParam0)//Position - 0x84CC
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    iVar1 = 0;
    if (unk_0x17A6988567C0F4A8(27))
    {
        return 0;
    }
    if (unk_0x367DA79FE620711B(joaat("sp0_money_total_spent"), &iVar0, -1))
    {
        iVar1 = (iVar1 + iVar0);
    }
    if (unk_0x367DA79FE620711B(joaat("sp1_money_total_spent"), &iVar0, -1))
    {
        iVar1 = (iVar1 + iVar0);
    }
    if (unk_0x367DA79FE620711B(joaat("sp2_money_total_spent"), &iVar0, -1))
    {
        iVar1 = (iVar1 + iVar0);
    }
    if (bParam0)
    {
    }
    iVar2 = 0;
    unk_0x367DA79FE620711B(joaat("num_cash_spent"), &iVar2, -1);
    if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
    {
        unk_0x41410A69AD49AFCD(joaat("num_cash_spent"), iVar1, 1);
        func_177(27, iVar1);
    }
    if (iVar1 < 200000000)
    {
        return 0;
    }
    func_144(27, 1);
    return 1;
}

int func_177(int iParam0, int iParam1)//Position - 0x8583
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
    iVar0 = unk_0x7FA0488109D2A795(iParam0);
    if (iParam1 > iVar0)
    {
        return unk_0x968D4E056664C967(iParam0, iParam1);
    }
    return 0;
}

void func_178(int iParam0, int iParam1)//Position - 0x85D4
{
    int iVar0;
    
    unk_0x367DA79FE620711B(iParam0, &iVar0, -1);
    iVar0 = (iVar0 + iParam1);
    unk_0x41410A69AD49AFCD(iParam0, iVar0, 1);
}

void func_179(int iParam0, int iParam1)//Position - 0x85F7
{
    int iVar0;
    
    if (iParam1 < 1)
    {
        return;
    }
    if (Global_DF7D[iParam0 /*7*/].f_2)
    {
        return;
    }
    if (unk_0x393E9918BC37548A())
    {
        return;
    }
    if (Global_DF7D[iParam0 /*7*/])
    {
        unk_0x367DA79FE620711B(Global_DF7D[iParam0 /*7*/].f_1, &iVar0, -1);
        iVar0 = (iVar0 + iParam1);
        unk_0x41410A69AD49AFCD(Global_DF7D[iParam0 /*7*/].f_1, iVar0, 1);
    }
}

void func_180()//Position - 0x8654
{
    int iVar0;
    
    if (unk_0x543B7EB99B8B8637())
    {
        unk_0x367DA79FE620711B(joaat("sp0_total_cash"), &iVar0, -1);
        if (!Global_E515[0] == iVar0)
        {
            Global_E515[0] = iVar0;
        }
        unk_0x367DA79FE620711B(joaat("sp1_total_cash"), &iVar0, -1);
        if (!Global_E515[1] == iVar0)
        {
            Global_E515[1] = iVar0;
        }
        unk_0x367DA79FE620711B(joaat("sp2_total_cash"), &iVar0, -1);
        if (!Global_E515[2] == iVar0)
        {
            Global_E515[2] = iVar0;
        }
    }
}

int func_181(int iParam0)//Position - 0x86C9
{
    return Global_706[iParam0 /*29*/].f_11;
}

void func_182(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x86DA
{
    unk_0x8ED81066343F07B4(iParam0, sParam1, sParam2, func_183(iParam3), 0);
}

int func_183(int iParam0)//Position - 0x86F3
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

void func_184()//Position - 0x88E8
{
    Global_4CD7 = 0;
    func_185();
}

void func_185()//Position - 0x88F8
{
    unk_0xE4F88BFF8FB3D84C();
    Global_5538 = 0;
    if (unk_0x04C7A9862FF737E9())
    {
        unk_0x623942A4F366F9BB(false);
        Global_5145 = 6;
    }
}

void func_186(int iParam0)//Position - 0x8919
{
    Global_5538 = iParam0;
}

int func_187()//Position - 0x8926
{
    if (Global_5538 == 1)
    {
        return 1;
    }
    return 0;
}

void func_188()//Position - 0x893D
{
    switch (iLocal_93)
    {
        case 0:
            unk_0x6BB2B1818CAE531E(joaat("a_m_o_acult_02"));
            unk_0x6BB2B1818CAE531E(joaat("prop_anim_cash_pile_02"));
            unk_0x36B659209EBDD366("random@altruist_cult");
            unk_0xF45B7CAEA9F06737("AC_DELIVERED");
            unk_0xC74EF0456E007BD1(joaat("weapon_assaultrifle"), 31, 0);
            if ((((unk_0x6DF9C43E3CC645BC(joaat("a_m_o_acult_02")) && unk_0x6DF9C43E3CC645BC(joaat("prop_anim_cash_pile_02"))) && unk_0xB25A0D192C6A0A5B("random@altruist_cult")) && unk_0xF45B7CAEA9F06737("AC_DELIVERED")) && unk_0x9304CCDF065E668A(joaat("weapon_assaultrifle")))
            {
                if (Global_1B3C8.f_619E.f_5 == 0)
                {
                    sLocal_269 = "ACULT_HI";
                    sLocal_263 = "cult_p2_guard";
                    sLocal_265 = "cult_p2_trv";
                    sLocal_266 = "cult_p2_victim";
                    sLocal_268 = "cult_p2_cam";
                    fLocal_89 = 0.8f;
                    fLocal_88 = 0.968f;
                }
                else if (Global_1B3C8.f_619E.f_5 == 1)
                {
                    sLocal_269 = "ACULT_LEAVE3";
                    sLocal_263 = "cult_p4_guard";
                    sLocal_265 = "cult_p4_trv";
                    sLocal_266 = "cult_p4_victim";
                    sLocal_268 = "cult_p4_cam";
                    fLocal_89 = 0.77f;
                    fLocal_88 = 0.999f;
                }
                else if (Global_1B3C8.f_619E.f_5 == 2)
                {
                    sLocal_269 = "ACULT_LEAVE3";
                    sLocal_263 = "cult_p4_guard";
                    sLocal_265 = "cult_p4_trv";
                    sLocal_266 = "cult_p4_victim";
                    sLocal_268 = "cult_p4_cam";
                    fLocal_89 = 0.77f;
                    fLocal_88 = 0.999f;
                }
                else if (Global_1B3C8.f_619E.f_5 >= 3)
                {
                    sLocal_269 = "ACULT_CAPT";
                    sLocal_263 = "cult_p7_guard_01";
                    sLocal_264 = "cult_p7_guard_02";
                    sLocal_265 = "cult_p7_trv";
                    sLocal_266 = "cult_p7_victim_01";
                    sLocal_268 = "cult_p7_cam";
                    fLocal_89 = 0.98f;
                    fLocal_88 = 0.98f;
                    unk_0x6BB2B1818CAE531E(-2022916910);
                    unk_0x6BB2B1818CAE531E(-1322183878);
                    unk_0x6BB2B1818CAE531E(joaat("prop_box_wood05a"));
                    unk_0x6BB2B1818CAE531E(joaat("prop_security_case_01"));
                    if (!unk_0x9C472738425216B8())
                    {
                        unk_0xBA51426C369A1164("ac_ig_3_p3_b", 8);
                    }
                }
                if (unk_0x39A01A052D9B5FF0(iLocal_104))
                {
                    unk_0xAA2276003B2ADF1B(&iLocal_104);
                }
                func_23(1, 1, 1, 0, 0, 0);
                unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), false, 0);
                unk_0x0D23E3918F7AF11B(1);
                unk_0x5AC8A91A3FD00B39(false);
                unk_0x4BEE8AE599A4A300(false);
                unk_0x27E0AD6B82174301(unk_0x0FA8183DAD2B3203(), 1);
                unk_0xE5DAA5553A176799(unk_0x0FA8183DAD2B3203(), joaat("weapon_unarmed"), true);
                unk_0x81995F6F93D8C987("AC_DELIVERED");
                if (func_187())
                {
                    func_186(0);
                }
                func_184();
                SYSTEM::WAIT(0);
                if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
                {
                    iLocal_99 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
                    if (unk_0xD960230552BC4165(iLocal_99, 0))
                    {
                        if (unk_0xACA46879E999E35C(iLocal_99))
                        {
                            iLocal_93++;
                        }
                    }
                }
                else
                {
                    iLocal_99 = unk_0x9B79A29933E4A8FA();
                    if (!unk_0x2BF5E63466422C38(uLocal_97[0]))
                    {
                        unk_0xC6612209077465DD(uLocal_97[0]);
                        unk_0x91F590A9823EB649(uLocal_97[0]);
                    }
                    iLocal_93++;
                }
            }
            break;
        
        case 1:
            if (unk_0xD4B321D9096B01FC(iLocal_99))
            {
                if (!unk_0x00123AB82C5FAC28(iLocal_99))
                {
                    unk_0xE5C667CF3B4642D2(iLocal_99, 1, 0);
                }
                if (unk_0xC49563EAE7AACA6C(iLocal_99, vLocal_54, 13f, 13f, 13f, 0, 1, 0))
                {
                    unk_0xCB3446C6A91D1A78(iLocal_99, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
                    if (!unk_0xF4B969E0807E76C7(iLocal_99, 0))
                    {
                        unk_0x5A2B7C446C0CF087(iLocal_99, 149.8882f);
                        unk_0x1ECAE5FB4DE78CF8(iLocal_99, 1084227584);
                    }
                }
            }
            unk_0xB82DC93528F8603C(vLocal_54, 12f, 1, 0, 0, false);
            unk_0xCB3446C6A91D1A78(unk_0x0FA8183DAD2B3203(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
            unk_0x5A2B7C446C0CF087(unk_0x0FA8183DAD2B3203(), 128.2065f);
            if (!unk_0x2BF5E63466422C38(uLocal_97[0]))
            {
                unk_0xCB3446C6A91D1A78(uLocal_97[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
                unk_0x5A2B7C446C0CF087(uLocal_97[0], 128.2065f);
            }
            iLocal_98[0] = unk_0xB983F26E7AFB47BF(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, true);
            func_99(&uLocal_271, 1, iLocal_98[0], "ACULTMember1", 0, 1);
            if (Global_1B3C8.f_619E.f_5 >= 3)
            {
                iLocal_98[1] = unk_0xB983F26E7AFB47BF(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, true);
                func_99(&uLocal_271, 2, iLocal_98[1], "ACULTMember2", 0, 1);
            }
            func_99(&uLocal_271, 0, unk_0x0FA8183DAD2B3203(), "TREVOR", 0, 1);
            func_99(&uLocal_271, 3, 0, "ACULTMaster", 0, 1);
            func_99(&uLocal_271, 4, 0, "ACULTGroup", 0, 1);
            if (Global_1B3C8.f_619E.f_5 != 1 && Global_1B3C8.f_619E.f_5 != 2)
            {
                func_100(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
            }
            SYSTEM::SETTIMERB(0);
            unk_0xCC94EE23853F38E4(iLocal_98[0], 1);
            iLocal_100 = unk_0x7187764DB5121FC9(joaat("prop_anim_cash_pile_02"), vLocal_53, true, true, false);
            iLocal_101 = unk_0x486FDD3D8766659C(joaat("weapon_assaultrifle"), -1, unk_0xACE5E491FC1B0D37(iLocal_98[0], 1), 1, 1065353216, 0, 0, 1);
            unk_0x01DF2D3988024DB4(iLocal_101, iLocal_98[0], unk_0xDD454299E9E58208(iLocal_98[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
            if (Global_1B3C8.f_619E.f_5 < 3)
            {
                if (Global_1B3C8.f_619E.f_5 == 0)
                {
                    unk_0x01DF2D3988024DB4(iLocal_100, unk_0x0FA8183DAD2B3203(), unk_0xDD454299E9E58208(unk_0x0FA8183DAD2B3203(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
                }
                else
                {
                    unk_0x01DF2D3988024DB4(iLocal_100, unk_0x0FA8183DAD2B3203(), unk_0xDD454299E9E58208(unk_0x0FA8183DAD2B3203(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
                }
            }
            else if (Global_1B3C8.f_619E.f_5 >= 3)
            {
                unk_0xC167C31F20B1FD61(iLocal_98[1], joaat("weapon_assaultrifle"), -1, true, true);
            }
            iLocal_106 = unk_0x87B0FFB353287F00("DEFAULT_ANIMATED_CAMERA", 1);
            iLocal_92 = unk_0xF2A54C51C03CADAA(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
            unk_0x8582CCEB95B1F1BE(unk_0x0FA8183DAD2B3203(), iLocal_92, "random@altruist_cult", sLocal_265, 1000f, -2f, 4, 0, 1148846080, 0);
            unk_0x8582CCEB95B1F1BE(iLocal_98[0], iLocal_92, "random@altruist_cult", sLocal_263, 1000f, -2f, 4, 0, 1148846080, 0);
            if (Global_1B3C8.f_619E.f_5 >= 3)
            {
                unk_0x8582CCEB95B1F1BE(iLocal_98[1], iLocal_92, "random@altruist_cult", sLocal_264, 1000f, -2f, 4, 0, 1148846080, 0);
            }
            unk_0x0116AC515A8787A5(iLocal_106, iLocal_92, sLocal_268, "random@altruist_cult");
            unk_0x0298C8010FD5A69E(true, false, 3000, 1, 0, 0);
            if (!unk_0x2BF5E63466422C38(uLocal_97[0]))
            {
                unk_0x8582CCEB95B1F1BE(uLocal_97[0], iLocal_92, "random@altruist_cult", sLocal_266, 1000f, -2f, 4, 0, 1148846080, 0);
            }
            iLocal_93++;
            break;
        
        case 2:
            if (!unk_0x2BF5E63466422C38(uLocal_97[0]))
            {
                if (unk_0x0F81A86FA23D44FA(uLocal_97[0]))
                {
                    func_182(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
                }
                else
                {
                    func_182(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
                }
            }
            if (SYSTEM::TIMERB() > 2000 && SYSTEM::TIMERB() < 2100)
            {
                if (Global_1B3C8.f_619E.f_5 == 1 || Global_1B3C8.f_619E.f_5 == 2)
                {
                    if (!func_115())
                    {
                        func_100(&uLocal_271, "ACULTAU", sLocal_269, 4, 0, 0, 0);
                    }
                }
            }
            if (unk_0x91F0628278985DB8(iLocal_92) > fLocal_89)
            {
                iLocal_93++;
            }
            break;
        
        case 3:
            if (!unk_0x2BF5E63466422C38(uLocal_97[0]))
            {
                if (unk_0x0F81A86FA23D44FA(uLocal_97[0]))
                {
                    func_182(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
                }
                else
                {
                    func_182(uLocal_97[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
                }
            }
            if (Global_1B3C8.f_619E.f_5 == 1 || Global_1B3C8.f_619E.f_5 == 2)
            {
                if ((unk_0x91F0628278985DB8(iLocal_92) > 0.9742857f && !iLocal_85) && unk_0x03DB22289AD822D2() == 4)
                {
                    unk_0x3E5A3FD805488EB9("CamPushInNeutral", 0, 0);
                    unk_0x9964F5BBD9415AB7(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
                    iLocal_85 = 1;
                }
            }
            if (unk_0x91F0628278985DB8(iLocal_92) > fLocal_88)
            {
                iLocal_93++;
            }
            break;
        
        case 4:
            if (Global_1B3C8.f_619E.f_5 < 3)
            {
                if (Global_1B3C8.f_619E.f_5 != 1 && Global_1B3C8.f_619E.f_5 != 2)
                {
                    func_135();
                    if (unk_0xD4B321D9096B01FC(iLocal_98[0]))
                    {
                        unk_0x4F058F27442031CC(&(iLocal_98[0]));
                    }
                    if (unk_0xD4B321D9096B01FC(iLocal_98[1]))
                    {
                        unk_0x4F058F27442031CC(&(iLocal_98[1]));
                    }
                }
                else
                {
                    SYSTEM::SETTIMERB(0);
                    if (unk_0xD4B321D9096B01FC(iLocal_98[0]))
                    {
                        unk_0x2BBEC4B37B923F4B(iLocal_98[0], false, 0);
                    }
                    if (unk_0xD4B321D9096B01FC(iLocal_98[1]))
                    {
                        unk_0x2BBEC4B37B923F4B(iLocal_98[1], false, 0);
                    }
                    if (unk_0xD4B321D9096B01FC(uLocal_97[0]))
                    {
                        unk_0x2BBEC4B37B923F4B(uLocal_97[0], false, 0);
                    }
                    iLocal_93++;
                }
                if (unk_0xD4B321D9096B01FC(iLocal_100))
                {
                    unk_0x377C9F2989832369(&iLocal_100);
                }
                if (unk_0xD4B321D9096B01FC(iLocal_101))
                {
                    unk_0x377C9F2989832369(&iLocal_101);
                }
                unk_0xC6612209077465DD(unk_0x0FA8183DAD2B3203());
                if (Global_1B3C8.f_619E.f_5 == 0)
                {
                    unk_0xB300618E39F089F8(unk_0x0FA8183DAD2B3203(), -668482597, false, 0, 0);
                    unk_0xAE337AF59DE9ECA2(unk_0x7C7787D2D7139A85(), 1f, 750, 0, 1, 0);
                }
                if (unk_0x2553916E420E8EF0(sLocal_268, "cult_p4_cam"))
                {
                    unk_0x0298C8010FD5A69E(false, false, 3000, 1, 0, 0);
                }
                else
                {
                    unk_0x45F85138C99B8999(0, 0, 3, 0);
                }
                unk_0x0472F75F711AABCE(iLocal_106, false);
                func_23(0, 1, 1, 0, 0, 0);
                unk_0x3D0DE925C0536CA0(unk_0x7C7787D2D7139A85(), true, 0);
                unk_0x5AC8A91A3FD00B39(true);
                unk_0x4BEE8AE599A4A300(true);
                unk_0x27E0AD6B82174301(unk_0x0FA8183DAD2B3203(), 0);
                unk_0xB489E71A45CDC02F(0);
                func_160(func_15(), 1, 1000, 0, 0);
            }
            if (Global_1B3C8.f_619E.f_5 != 1 && Global_1B3C8.f_619E.f_5 != 2)
            {
                unk_0x81995F6F93D8C987("AC_DONE");
                Global_1B3C8.f_619E.f_5++;
                iLocal_78 = 1;
            }
            break;
        
        case 5:
            if (!func_115() || SYSTEM::TIMERB() > 7000)
            {
                func_135();
                if (unk_0xD4B321D9096B01FC(iLocal_98[0]))
                {
                    unk_0x4F058F27442031CC(&(iLocal_98[0]));
                }
                if (unk_0xD4B321D9096B01FC(iLocal_98[1]))
                {
                    unk_0x4F058F27442031CC(&(iLocal_98[1]));
                }
                unk_0x81995F6F93D8C987("AC_DONE");
                Global_1B3C8.f_619E.f_5++;
                iLocal_78 = 1;
            }
            break;
    }
}

void func_189()//Position - 0x9307
{
    if (func_191())
    {
        if (func_15() == 2)
        {
            if (unk_0xD3984540ABF2E15B(func_190()))
            {
                unk_0x17E6D21FF223387F(func_190(), &uLocal_90, &iLocal_91);
                if (iLocal_91 == 1)
                {
                    uLocal_97[0] = unk_0x40D2AEA8FCCC1A3D(func_190(), 0);
                    if (unk_0xC49563EAE7AACA6C(uLocal_97[0], vLocal_54, 5f, 5f, 5f, 0, 1, 0))
                    {
                        if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
                        {
                            if (!unk_0xF4B969E0807E76C7(unk_0x9B79A29933E4A8FA(), 0))
                            {
                                unk_0x784753B14715F27F(unk_0x9B79A29933E4A8FA(), 10.5f, 5, 0);
                            }
                        }
                        SYSTEM::SETTIMERA(0);
                        iLocal_50 = 1;
                    }
                }
                else if (iLocal_91 == 2)
                {
                    uLocal_97[0] = unk_0x40D2AEA8FCCC1A3D(func_190(), 0);
                    uLocal_97[1] = unk_0x40D2AEA8FCCC1A3D(func_190(), 1);
                    if (unk_0xC49563EAE7AACA6C(uLocal_97[0], vLocal_54, 5f, 5f, 5f, 0, 1, 0) && unk_0xC49563EAE7AACA6C(uLocal_97[1], vLocal_54, 5f, 5f, 5f, 0, 1, 0))
                    {
                        if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
                        {
                            if (!unk_0xF4B969E0807E76C7(unk_0x9B79A29933E4A8FA(), 0))
                            {
                                unk_0x784753B14715F27F(unk_0x9B79A29933E4A8FA(), 10.5f, 5, 0);
                            }
                        }
                        SYSTEM::SETTIMERA(0);
                        iLocal_50 = 1;
                    }
                }
            }
        }
    }
}

var func_190()//Position - 0x9412
{
    return unk_0x85E4D364E5F296FC(unk_0x7A8732CFB5113E77());
}

bool func_191()//Position - 0x9422
{
    return Global_78FB;
}

void func_192()//Position - 0x942D
{
    if (func_195())
    {
        if (iLocal_260 == 0)
        {
            iLocal_260 = unk_0x740FE9B7B3FE1CE5(vLocal_53 - Vector(100f, 60f, 80f), vLocal_53 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
        }
        while (unk_0xD34AF93E9BCF12F0(func_95(unk_0x7C7787D2D7139A85()), vLocal_53, true) < 209f)
        {
            SYSTEM::WAIT(0);
        }
    }
    if (func_15() == 0 || func_15() == 1)
    {
        if (unk_0x555CE7C4EC845E9D(2017343592, 1862763509) != 5)
        {
            if (func_194())
            {
                unk_0x9B54A3CCAAB4F5FB(5, 2017343592, 1862763509);
            }
            else if (func_193())
            {
                unk_0x9B54A3CCAAB4F5FB(5, 2017343592, 1862763509);
            }
        }
    }
    else if (func_15() == 2)
    {
        if (unk_0x555CE7C4EC845E9D(2017343592, 1862763509) != 5)
        {
            if (func_194())
            {
                if (unk_0x90D8021D13215A35(unk_0x0FA8183DAD2B3203()) || (unk_0x132DF66D50A7DE4E(unk_0x0FA8183DAD2B3203()) && unk_0x5F5EDE61626C58B9(unk_0x7C7787D2D7139A85())))
                {
                    unk_0x9B54A3CCAAB4F5FB(5, 2017343592, 1862763509);
                }
            }
            else if (func_193())
            {
                unk_0x9B54A3CCAAB4F5FB(5, 2017343592, 1862763509);
            }
            else if (unk_0x555CE7C4EC845E9D(2017343592, 1862763509) != 1)
            {
                unk_0x9B54A3CCAAB4F5FB(1, 2017343592, 1862763509);
            }
        }
    }
    if (func_194())
    {
        if (iLocal_83)
        {
            if (!unk_0x586E95A1CE46FC21(unk_0x7C7787D2D7139A85(), 3))
            {
                unk_0x81995F6F93D8C987("AC_START");
            }
            unk_0xB7F4DA52DE3AAF24(0f);
            unk_0x0E7DFCFC6E6D9A0C("COUNTRYSIDE_ALTRUIST_CULT_01", 1);
            if (unk_0x6DBAE8253C1BC686(Global_9E47[9 /*31*/].f_2, 6f, Global_9E47[9 /*31*/].f_5, 0))
            {
                unk_0x943904FF52E8C904(Global_9E47[9 /*31*/].f_5, Global_9E47[9 /*31*/].f_2, 0, 0f, 0);
            }
            if (unk_0x6DBAE8253C1BC686(Global_9E47[10 /*31*/].f_2, 6f, Global_9E47[10 /*31*/].f_5, 0))
            {
                unk_0x943904FF52E8C904(Global_9E47[10 /*31*/].f_5, Global_9E47[10 /*31*/].f_2, 0, 0f, 0);
            }
            bLocal_84 = true;
            iLocal_83 = 0;
        }
    }
    else if (!iLocal_83)
    {
        if (unk_0xB24AEB6C29E01CF3())
        {
            unk_0x81995F6F93D8C987("AC_END");
        }
        unk_0xB7F4DA52DE3AAF24(1f);
        unk_0x0E7DFCFC6E6D9A0C("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
        if (!bLocal_84)
        {
            func_157();
        }
        iLocal_83 = 1;
    }
}

int func_193()//Position - 0x965E
{
    if ((((((unk_0xC6C4485F78CF9C5E(vLocal_55, vLocal_56, fLocal_57, 1) || unk_0xC6C4485F78CF9C5E(vLocal_58, vLocal_59, fLocal_60, 1)) || unk_0xC6C4485F78CF9C5E(vLocal_61, vLocal_62, fLocal_63, 1)) || unk_0xC6C4485F78CF9C5E(vLocal_64, vLocal_65, fLocal_66, 1)) || unk_0xC6C4485F78CF9C5E(vLocal_67, vLocal_68, fLocal_69, 1)) || unk_0xC6C4485F78CF9C5E(vLocal_70, vLocal_71, fLocal_72, 1)) || unk_0xC6C4485F78CF9C5E(vLocal_73, vLocal_74, fLocal_75, 1))
    {
        return 1;
    }
    return 0;
}

int func_194()//Position - 0x96FB
{
    if ((((((unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_55, vLocal_56, fLocal_57, 0, 1, 0) || unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_58, vLocal_59, fLocal_60, 0, 1, 0)) || unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_61, vLocal_62, fLocal_63, 0, 1, 0)) || unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_64, vLocal_65, fLocal_66, 0, 1, 0)) || unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_67, vLocal_68, fLocal_69, 0, 1, 0)) || unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_70, vLocal_71, fLocal_72, 0, 1, 0)) || unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_73, vLocal_74, fLocal_75, 0, 1, 0))
    {
        return 1;
    }
    return 0;
}

int func_195()//Position - 0x97C2
{
    if (Global_1B3C8.f_619E.f_5 == 1000)
    {
        return 1;
    }
    return 0;
}

void func_196()//Position - 0x97DE
{
    unk_0x9B54A3CCAAB4F5FB(255, 2017343592, 1862763509);
    if (Global_1B3C8.f_619E.f_5 >= iLocal_96 && Global_1B3C8.f_619E.f_5 != 1000)
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
            func_197(&iLocal_109);
            Global_16F04 = 0;
            Global_16F05 = 0;
            Global_16F06 = 0;
            func_14(0, 1);
            func_12(0, 1);
            func_2(0);
            unk_0xD3B9282395791ADE(1);
            unk_0x87C911B2DB7E78FD(0);
            unk_0x5DAA2C840D7342B4(0);
            func_3(0);
            unk_0xB7F4DA52DE3AAF24(1f);
            unk_0x31A175F9EC8E421C(3, 1);
            unk_0x31A175F9EC8E421C(5, 1);
            unk_0xF3892E9718C7CF62();
            iLocal_83 = 0;
            func_96();
            Global_1B3C8.f_619E.f_5 = (iLocal_96 - 1);
            unk_0x9C9E32388A7886A2();
        }
    }
    else
    {
        unk_0xD931F7E3EEBC7B7D();
        func_197(&iLocal_109);
        Global_16F04 = 0;
        Global_16F05 = 0;
        Global_16F06 = 0;
        func_14(0, 1);
        func_12(0, 1);
        func_2(0);
        unk_0xD3B9282395791ADE(1);
        unk_0x87C911B2DB7E78FD(0);
        unk_0x5DAA2C840D7342B4(0);
        func_3(0);
        if (unk_0x08EA887200715AD9(iLocal_259))
        {
            unk_0x749CA887CB0AFEC9(&iLocal_259);
            func_98(0);
        }
        unk_0xB7F4DA52DE3AAF24(1f);
        unk_0x31A175F9EC8E421C(3, 1);
        unk_0x31A175F9EC8E421C(5, 1);
        unk_0xF3892E9718C7CF62();
        iLocal_83 = 0;
        unk_0x9C9E32388A7886A2();
    }
}

void func_197(int iParam0)//Position - 0x990A
{
    if (unk_0x08EA887200715AD9(*iParam0))
    {
        unk_0x749CA887CB0AFEC9(iParam0);
        *iParam0 = 0;
    }
}

