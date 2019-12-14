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
    var uLocal_28 = 0;
    var uLocal_29 = 0;
    float fLocal_30 = 0f;
    float fLocal_31 = 0f;
    float fLocal_32 = 0f;
    var uLocal_33 = 0;
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
    var uLocal_61 = 10;
    var uLocal_62 = 0;
    var uLocal_63 = 0;
    var uLocal_64 = 0;
    var uLocal_65 = 0;
    var uLocal_66 = 0;
    var uLocal_67 = 0;
    var uLocal_68 = 0;
    var uLocal_69 = 0;
    var uLocal_70 = 0;
    var uLocal_71 = 0;
    var uLocal_72 = 2;
    var uLocal_73 = 0;
    var uLocal_74 = 0;
    var uLocal_75 = 8;
    var uLocal_76 = 0;
    var uLocal_77 = 0;
    var uLocal_78 = 0;
    var uLocal_79 = 0;
    var uLocal_80 = 0;
    var uLocal_81 = 0;
    var uLocal_82 = 0;
    var uLocal_83 = 0;
    var uLocal_84 = 8;
    var uLocal_85 = 0;
    var uLocal_86 = 0;
    var uLocal_87 = 0;
    var uLocal_88 = 0;
    var uLocal_89 = 0;
    var uLocal_90 = 0;
    var uLocal_91 = 0;
    var uLocal_92 = 0;
    var uLocal_93 = 0;
    float fLocal_94 = 0f;
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
    int iLocal_110 = 0;
    int iLocal_111 = 0;
    int iLocal_112 = 0;
    int iLocal_113 = 0;
    bool bLocal_114 = 0;
    bool bLocal_115 = 0;
    int iLocal_116 = 0;
    int iLocal_117 = 0;
    int iLocal_118 = 0;
    int iLocal_119 = 0;
    vector3 vLocal_120 = { 0f, 0f, 0f };
    vector3 vLocal_121[65] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
    float fLocal_122 = 0f;
    vector3 vLocal_123 = { 0f, 0f, 0f };
    vector3 vLocal_124 = { 0f, 0f, 0f };
    vector3 vLocal_125 = { 0f, 0f, 0f };
    vector3 vLocal_126 = { 0f, 0f, 0f };
    float fLocal_127 = 0f;
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
    int iLocal_140 = 0;
    int iLocal_141 = 0;
    int iLocal_142 = 0;
    int iLocal_143 = 0;
    int iLocal_144 = 0;
    int iLocal_145 = 0;
    int iLocal_146 = 0;
    int iLocal_147 = 0;
    float fLocal_148 = 0f;
    int iLocal_149 = 0;
    int iLocal_150 = 0;
    int iLocal_151 = 0;
    int iLocal_152 = 0;
    int iLocal_153 = 0;
    var uLocal_154 = 0;
    var uLocal_155 = 0;
    var uLocal_156 = 0;
    var uLocal_157 = 0;
    var uLocal_158 = 0;
    var uLocal_159 = 0;
    var uLocal_160 = 0;
    int iLocal_161 = 0;
    vector3 vLocal_162[65] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
    int iLocal_163[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int iLocal_164[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int iLocal_165 = 0;
    int iLocal_166 = 0;
    int iLocal_167 = 0;
    int iLocal_168[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    int iLocal_169 = 0;
    int iLocal_170 = 0;
    struct<68> Local_171 = { 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
    struct<535> Local_192 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
    var uLocal_193 = -1;
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
    var uLocal_215 = -1082130432;
    var uLocal_216 = 3;
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
    var uLocal_232 = -1;
    var uLocal_233 = 0;
    var uLocal_234 = -1;
    var uLocal_235 = -1;
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
    var uLocal_257 = -1082130432;
    var uLocal_258 = 3;
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
    var uLocal_274 = -1;
    var uLocal_275 = 0;
    var uLocal_276 = -1;
    var uLocal_277 = -1;
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
    var uLocal_299 = -1082130432;
    var uLocal_300 = 3;
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
    var uLocal_316 = -1;
    var uLocal_317 = 0;
    var uLocal_318 = -1;
    var uLocal_319 = -1;
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
    var uLocal_341 = -1082130432;
    var uLocal_342 = 3;
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
    var uLocal_358 = -1;
    var uLocal_359 = 0;
    var uLocal_360 = -1;
    var uLocal_361 = -1;
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
    var uLocal_383 = -1082130432;
    var uLocal_384 = 3;
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
    var uLocal_400 = -1;
    var uLocal_401 = 0;
    var uLocal_402 = -1;
    var uLocal_403 = -1;
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
    var uLocal_425 = -1082130432;
    var uLocal_426 = 3;
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
    var uLocal_442 = -1;
    var uLocal_443 = 0;
    var uLocal_444 = -1;
    var uLocal_445 = -1;
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
    var uLocal_467 = -1082130432;
    var uLocal_468 = 3;
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
    var uLocal_484 = -1;
    var uLocal_485 = 0;
    var uLocal_486 = -1;
    var uLocal_487 = -1;
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
    var uLocal_509 = -1082130432;
    var uLocal_510 = 3;
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
    var uLocal_526 = -1;
    var uLocal_527 = 0;
    var uLocal_528 = -1;
    var uLocal_529 = -1;
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
    var uLocal_551 = -1082130432;
    var uLocal_552 = 3;
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
    var uLocal_568 = -1;
    var uLocal_569 = 0;
    var uLocal_570 = -1;
    var uLocal_571 = -1;
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
    var uLocal_593 = -1082130432;
    var uLocal_594 = 3;
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
    var uLocal_610 = -1;
    var uLocal_611 = 0;
    var uLocal_612 = -1;
    var uLocal_613 = -1;
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
    var uLocal_635 = -1082130432;
    var uLocal_636 = 3;
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
    var uLocal_652 = -1;
    var uLocal_653 = 0;
    var uLocal_654 = -1;
    var uLocal_655 = -1;
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
    var uLocal_677 = -1082130432;
    var uLocal_678 = 3;
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
    var uLocal_694 = -1;
    var uLocal_695 = 0;
    var uLocal_696 = -1;
    var uLocal_697 = -1;
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
    var uLocal_719 = -1082130432;
    var uLocal_720 = 3;
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
    var uLocal_736 = -1;
    var uLocal_737 = 0;
    var uLocal_738 = -1;
    var uLocal_739 = -1;
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
    var uLocal_761 = -1082130432;
    var uLocal_762 = 3;
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
    var uLocal_778 = -1;
    var uLocal_779 = 0;
    var uLocal_780 = -1;
    var uLocal_781 = -1;
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
    var uLocal_803 = -1082130432;
    var uLocal_804 = 3;
    var uLocal_805 = 0;
    var uLocal_806 = 0;
    var uLocal_807 = 0;
    var uLocal_808 = 0;
    var uLocal_809 = 0;
    var uLocal_810 = 0;
    var uLocal_811 = 0;
    var uLocal_812 = 0;
    var uLocal_813 = 0;
    var uLocal_814 = 0;
    var uLocal_815 = 0;
    var uLocal_816 = 0;
    var uLocal_817 = 0;
    var uLocal_818 = 0;
    var uLocal_819 = 0;
    var uLocal_820 = -1;
    var uLocal_821 = 0;
    var uLocal_822 = -1;
    var uLocal_823 = -1;
    var uLocal_824 = 0;
    var uLocal_825 = 0;
    var uLocal_826 = 0;
    var uLocal_827 = 0;
    var uLocal_828 = 0;
    var uLocal_829 = 0;
    var uLocal_830 = 0;
    var uLocal_831 = 0;
    var uLocal_832 = 0;
    var uLocal_833 = 0;
    var uLocal_834 = 0;
    var uLocal_835 = 0;
    var uLocal_836 = 0;
    var uLocal_837 = 0;
    var uLocal_838 = 0;
    var uLocal_839 = 0;
    var uLocal_840 = 0;
    var uLocal_841 = 0;
    var uLocal_842 = 0;
    var uLocal_843 = 0;
    var uLocal_844 = 0;
    var uLocal_845 = -1082130432;
    var uLocal_846 = 3;
    var uLocal_847 = 0;
    var uLocal_848 = 0;
    var uLocal_849 = 0;
    var uLocal_850 = 0;
    var uLocal_851 = 0;
    var uLocal_852 = 0;
    var uLocal_853 = 0;
    var uLocal_854 = 0;
    var uLocal_855 = 0;
    var uLocal_856 = 0;
    var uLocal_857 = 0;
    var uLocal_858 = 0;
    var uLocal_859 = 0;
    var uLocal_860 = 0;
    var uLocal_861 = 0;
    var uLocal_862 = -1;
    var uLocal_863 = 0;
    var uLocal_864 = -1;
    var uLocal_865 = -1;
    var uLocal_866 = 0;
    var uLocal_867 = 0;
    var uLocal_868 = 0;
    var uLocal_869 = 0;
    var uLocal_870 = 0;
    var uLocal_871 = 0;
    var uLocal_872 = 0;
    var uLocal_873 = 0;
    var uLocal_874 = 0;
    var uLocal_875 = 0;
    var uLocal_876 = 0;
    var uLocal_877 = 0;
    var uLocal_878 = 0;
    var uLocal_879 = 0;
    var uLocal_880 = 0;
    var uLocal_881 = 0;
    var uLocal_882 = 0;
    var uLocal_883 = 0;
    var uLocal_884 = 0;
    var uLocal_885 = 0;
    var uLocal_886 = 0;
    var uLocal_887 = -1082130432;
    var uLocal_888 = 3;
    var uLocal_889 = 0;
    var uLocal_890 = 0;
    var uLocal_891 = 0;
    var uLocal_892 = 0;
    var uLocal_893 = 0;
    var uLocal_894 = 0;
    var uLocal_895 = 0;
    var uLocal_896 = 0;
    var uLocal_897 = 0;
    var uLocal_898 = 0;
    var uLocal_899 = 0;
    var uLocal_900 = 0;
    var uLocal_901 = 0;
    var uLocal_902 = 0;
    var uLocal_903 = 0;
    var uLocal_904 = -1;
    var uLocal_905 = 0;
    var uLocal_906 = -1;
    var uLocal_907 = -1;
    var uLocal_908 = 0;
    var uLocal_909 = 0;
    var uLocal_910 = 0;
    var uLocal_911 = 0;
    var uLocal_912 = 0;
    var uLocal_913 = 0;
    var uLocal_914 = 0;
    var uLocal_915 = 0;
    var uLocal_916 = 0;
    var uLocal_917 = 0;
    var uLocal_918 = 0;
    var uLocal_919 = 0;
    var uLocal_920 = 0;
    var uLocal_921 = 0;
    var uLocal_922 = 0;
    var uLocal_923 = 0;
    var uLocal_924 = 0;
    var uLocal_925 = 0;
    var uLocal_926 = 0;
    var uLocal_927 = 0;
    var uLocal_928 = 0;
    var uLocal_929 = -1082130432;
    var uLocal_930 = 3;
    var uLocal_931 = 0;
    var uLocal_932 = 0;
    var uLocal_933 = 0;
    var uLocal_934 = 0;
    var uLocal_935 = 0;
    var uLocal_936 = 0;
    var uLocal_937 = 0;
    var uLocal_938 = 0;
    var uLocal_939 = 0;
    var uLocal_940 = 0;
    var uLocal_941 = 0;
    var uLocal_942 = 0;
    var uLocal_943 = 0;
    var uLocal_944 = 0;
    var uLocal_945 = 0;
    var uLocal_946 = -1;
    var uLocal_947 = 0;
    var uLocal_948 = -1;
    var uLocal_949 = -1;
    var uLocal_950 = 0;
    var uLocal_951 = 0;
    var uLocal_952 = 0;
    var uLocal_953 = 0;
    var uLocal_954 = 0;
    var uLocal_955 = 0;
    var uLocal_956 = 0;
    var uLocal_957 = 0;
    var uLocal_958 = 0;
    var uLocal_959 = 0;
    var uLocal_960 = 0;
    var uLocal_961 = 0;
    var uLocal_962 = 0;
    var uLocal_963 = 0;
    var uLocal_964 = 0;
    var uLocal_965 = 0;
    var uLocal_966 = 0;
    var uLocal_967 = 0;
    var uLocal_968 = 0;
    var uLocal_969 = 0;
    var uLocal_970 = 0;
    var uLocal_971 = -1082130432;
    var uLocal_972 = 3;
    var uLocal_973 = 0;
    var uLocal_974 = 0;
    var uLocal_975 = 0;
    var uLocal_976 = 0;
    var uLocal_977 = 0;
    var uLocal_978 = 0;
    var uLocal_979 = 0;
    var uLocal_980 = 0;
    var uLocal_981 = 0;
    var uLocal_982 = 0;
    var uLocal_983 = 0;
    var uLocal_984 = 0;
    var uLocal_985 = 0;
    var uLocal_986 = 0;
    var uLocal_987 = 0;
    var uLocal_988 = -1;
    var uLocal_989 = 0;
    var uLocal_990 = -1;
    var uLocal_991 = -1;
    var uLocal_992 = 0;
    var uLocal_993 = 0;
    var uLocal_994 = 0;
    var uLocal_995 = 0;
    var uLocal_996 = 0;
    var uLocal_997 = 0;
    var uLocal_998 = 0;
    var uLocal_999 = 0;
    var uLocal_1000 = 0;
    var uLocal_1001 = 0;
    var uLocal_1002 = 0;
    var uLocal_1003 = 0;
    var uLocal_1004 = 0;
    var uLocal_1005 = 0;
    var uLocal_1006 = 0;
    var uLocal_1007 = 0;
    var uLocal_1008 = 0;
    var uLocal_1009 = 0;
    var uLocal_1010 = 0;
    var uLocal_1011 = 0;
    var uLocal_1012 = 0;
    var uLocal_1013 = -1082130432;
    var uLocal_1014 = 3;
    var uLocal_1015 = 0;
    var uLocal_1016 = 0;
    var uLocal_1017 = 0;
    var uLocal_1018 = 0;
    var uLocal_1019 = 0;
    var uLocal_1020 = 0;
    var uLocal_1021 = 0;
    var uLocal_1022 = 0;
    var uLocal_1023 = 0;
    var uLocal_1024 = 0;
    var uLocal_1025 = 0;
    var uLocal_1026 = 0;
    var uLocal_1027 = 0;
    var uLocal_1028 = 0;
    var uLocal_1029 = 0;
    var uLocal_1030 = -1;
    var uLocal_1031 = 0;
    var uLocal_1032 = -1;
    var uLocal_1033 = -1;
    var uLocal_1034 = 0;
    var uLocal_1035 = 0;
    var uLocal_1036 = 0;
    var uLocal_1037 = 0;
    var uLocal_1038 = 0;
    var uLocal_1039 = 0;
    var uLocal_1040 = 0;
    var uLocal_1041 = 0;
    var uLocal_1042 = 0;
    var uLocal_1043 = 0;
    var uLocal_1044 = 0;
    var uLocal_1045 = 0;
    var uLocal_1046 = 0;
    var uLocal_1047 = 0;
    var uLocal_1048 = 0;
    var uLocal_1049 = 0;
    var uLocal_1050 = 0;
    var uLocal_1051 = 0;
    var uLocal_1052 = 0;
    var uLocal_1053 = 0;
    var uLocal_1054 = 0;
    var uLocal_1055 = -1082130432;
    var uLocal_1056 = 3;
    var uLocal_1057 = 0;
    var uLocal_1058 = 0;
    var uLocal_1059 = 0;
    var uLocal_1060 = 0;
    var uLocal_1061 = 0;
    var uLocal_1062 = 0;
    var uLocal_1063 = 0;
    var uLocal_1064 = 0;
    var uLocal_1065 = 0;
    var uLocal_1066 = 0;
    var uLocal_1067 = 0;
    var uLocal_1068 = 0;
    var uLocal_1069 = 0;
    var uLocal_1070 = 0;
    var uLocal_1071 = 0;
    var uLocal_1072 = -1;
    var uLocal_1073 = 0;
    var uLocal_1074 = -1;
    var uLocal_1075 = -1;
    var uLocal_1076 = 0;
    var uLocal_1077 = 0;
    var uLocal_1078 = 0;
    var uLocal_1079 = 0;
    var uLocal_1080 = 0;
    var uLocal_1081 = 0;
    var uLocal_1082 = 0;
    var uLocal_1083 = 0;
    var uLocal_1084 = 0;
    var uLocal_1085 = 0;
    var uLocal_1086 = 0;
    var uLocal_1087 = 0;
    var uLocal_1088 = 0;
    var uLocal_1089 = 0;
    var uLocal_1090 = 0;
    var uLocal_1091 = 0;
    var uLocal_1092 = 0;
    var uLocal_1093 = 0;
    var uLocal_1094 = 0;
    var uLocal_1095 = 0;
    var uLocal_1096 = 0;
    var uLocal_1097 = -1082130432;
    var uLocal_1098 = 3;
    var uLocal_1099 = 0;
    var uLocal_1100 = 0;
    var uLocal_1101 = 0;
    var uLocal_1102 = 0;
    var uLocal_1103 = 0;
    var uLocal_1104 = 0;
    var uLocal_1105 = 0;
    var uLocal_1106 = 0;
    var uLocal_1107 = 0;
    var uLocal_1108 = 0;
    var uLocal_1109 = 0;
    var uLocal_1110 = 0;
    var uLocal_1111 = 0;
    var uLocal_1112 = 0;
    var uLocal_1113 = 0;
    var uLocal_1114 = -1;
    var uLocal_1115 = 0;
    var uLocal_1116 = -1;
    var uLocal_1117 = -1;
    var uLocal_1118 = 0;
    var uLocal_1119 = 0;
    var uLocal_1120 = 0;
    var uLocal_1121 = 0;
    var uLocal_1122 = 0;
    var uLocal_1123 = 0;
    var uLocal_1124 = 0;
    var uLocal_1125 = 0;
    var uLocal_1126 = 0;
    var uLocal_1127 = 0;
    var uLocal_1128 = 0;
    var uLocal_1129 = 0;
    var uLocal_1130 = 0;
    var uLocal_1131 = 0;
    var uLocal_1132 = 0;
    var uLocal_1133 = 0;
    var uLocal_1134 = 0;
    var uLocal_1135 = 0;
    var uLocal_1136 = 0;
    var uLocal_1137 = 0;
    var uLocal_1138 = 0;
    var uLocal_1139 = -1082130432;
    var uLocal_1140 = 3;
    var uLocal_1141 = 0;
    var uLocal_1142 = 0;
    var uLocal_1143 = 0;
    var uLocal_1144 = 0;
    var uLocal_1145 = 0;
    var uLocal_1146 = 0;
    var uLocal_1147 = 0;
    var uLocal_1148 = 0;
    var uLocal_1149 = 0;
    var uLocal_1150 = 0;
    var uLocal_1151 = 0;
    var uLocal_1152 = 0;
    var uLocal_1153 = 0;
    var uLocal_1154 = 0;
    var uLocal_1155 = 0;
    var uLocal_1156 = -1;
    var uLocal_1157 = 0;
    var uLocal_1158 = -1;
    var uLocal_1159 = -1;
    var uLocal_1160 = 0;
    var uLocal_1161 = 0;
    var uLocal_1162 = 0;
    var uLocal_1163 = 0;
    var uLocal_1164 = 0;
    var uLocal_1165 = 0;
    var uLocal_1166 = 0;
    var uLocal_1167 = 0;
    var uLocal_1168 = 0;
    var uLocal_1169 = 0;
    var uLocal_1170 = 0;
    var uLocal_1171 = 0;
    var uLocal_1172 = 0;
    var uLocal_1173 = 0;
    var uLocal_1174 = 0;
    var uLocal_1175 = 0;
    var uLocal_1176 = 0;
    var uLocal_1177 = 0;
    var uLocal_1178 = 0;
    var uLocal_1179 = 0;
    var uLocal_1180 = 0;
    var uLocal_1181 = -1082130432;
    var uLocal_1182 = 3;
    var uLocal_1183 = 0;
    var uLocal_1184 = 0;
    var uLocal_1185 = 0;
    var uLocal_1186 = 0;
    var uLocal_1187 = 0;
    var uLocal_1188 = 0;
    var uLocal_1189 = 0;
    var uLocal_1190 = 0;
    var uLocal_1191 = 0;
    var uLocal_1192 = 0;
    var uLocal_1193 = 0;
    var uLocal_1194 = 0;
    var uLocal_1195 = 0;
    var uLocal_1196 = 0;
    var uLocal_1197 = 0;
    var uLocal_1198 = -1;
    var uLocal_1199 = 0;
    var uLocal_1200 = -1;
    var uLocal_1201 = -1;
    var uLocal_1202 = 0;
    var uLocal_1203 = 0;
    var uLocal_1204 = 0;
    var uLocal_1205 = 0;
    var uLocal_1206 = 0;
    var uLocal_1207 = 0;
    var uLocal_1208 = 0;
    var uLocal_1209 = 0;
    var uLocal_1210 = 0;
    var uLocal_1211 = 0;
    var uLocal_1212 = 0;
    var uLocal_1213 = 0;
    var uLocal_1214 = 0;
    var uLocal_1215 = 0;
    var uLocal_1216 = 0;
    var uLocal_1217 = 0;
    var uLocal_1218 = 0;
    var uLocal_1219 = 0;
    var uLocal_1220 = 0;
    var uLocal_1221 = 0;
    var uLocal_1222 = 0;
    var uLocal_1223 = -1082130432;
    var uLocal_1224 = 3;
    var uLocal_1225 = 0;
    var uLocal_1226 = 0;
    var uLocal_1227 = 0;
    var uLocal_1228 = 0;
    var uLocal_1229 = 0;
    var uLocal_1230 = 0;
    var uLocal_1231 = 0;
    var uLocal_1232 = 0;
    var uLocal_1233 = 0;
    var uLocal_1234 = 0;
    var uLocal_1235 = 0;
    var uLocal_1236 = 0;
    var uLocal_1237 = 0;
    var uLocal_1238 = 0;
    var uLocal_1239 = 0;
    var uLocal_1240 = -1;
    var uLocal_1241 = 0;
    var uLocal_1242 = -1;
    var uLocal_1243 = -1;
    var uLocal_1244 = 0;
    var uLocal_1245 = 0;
    var uLocal_1246 = 0;
    var uLocal_1247 = 0;
    var uLocal_1248 = 0;
    var uLocal_1249 = 0;
    var uLocal_1250 = 0;
    var uLocal_1251 = 0;
    var uLocal_1252 = 0;
    var uLocal_1253 = 0;
    var uLocal_1254 = 0;
    var uLocal_1255 = 0;
    var uLocal_1256 = 0;
    var uLocal_1257 = 0;
    var uLocal_1258 = 0;
    var uLocal_1259 = 0;
    var uLocal_1260 = 0;
    var uLocal_1261 = 0;
    var uLocal_1262 = 0;
    var uLocal_1263 = 0;
    var uLocal_1264 = 0;
    var uLocal_1265 = -1082130432;
    var uLocal_1266 = 3;
    var uLocal_1267 = 0;
    var uLocal_1268 = 0;
    var uLocal_1269 = 0;
    var uLocal_1270 = 0;
    var uLocal_1271 = 0;
    var uLocal_1272 = 0;
    var uLocal_1273 = 0;
    var uLocal_1274 = 0;
    var uLocal_1275 = 0;
    var uLocal_1276 = 0;
    var uLocal_1277 = 0;
    var uLocal_1278 = 0;
    var uLocal_1279 = 0;
    var uLocal_1280 = 0;
    var uLocal_1281 = 0;
    var uLocal_1282 = -1;
    var uLocal_1283 = 0;
    var uLocal_1284 = -1;
    var uLocal_1285 = -1;
    var uLocal_1286 = 0;
    var uLocal_1287 = 0;
    var uLocal_1288 = 0;
    var uLocal_1289 = 0;
    var uLocal_1290 = 0;
    var uLocal_1291 = 0;
    var uLocal_1292 = 0;
    var uLocal_1293 = 0;
    var uLocal_1294 = 0;
    var uLocal_1295 = 0;
    var uLocal_1296 = 0;
    var uLocal_1297 = 0;
    var uLocal_1298 = 0;
    var uLocal_1299 = 0;
    var uLocal_1300 = 0;
    var uLocal_1301 = 0;
    var uLocal_1302 = 0;
    var uLocal_1303 = 0;
    var uLocal_1304 = 0;
    var uLocal_1305 = 0;
    var uLocal_1306 = 0;
    var uLocal_1307 = -1082130432;
    var uLocal_1308 = 3;
    var uLocal_1309 = 0;
    var uLocal_1310 = 0;
    var uLocal_1311 = 0;
    var uLocal_1312 = 0;
    var uLocal_1313 = 0;
    var uLocal_1314 = 0;
    var uLocal_1315 = 0;
    var uLocal_1316 = 0;
    var uLocal_1317 = 0;
    var uLocal_1318 = 0;
    var uLocal_1319 = 0;
    var uLocal_1320 = 0;
    var uLocal_1321 = 0;
    var uLocal_1322 = 0;
    var uLocal_1323 = 0;
    var uLocal_1324 = -1;
    var uLocal_1325 = 0;
    var uLocal_1326 = -1;
    var uLocal_1327 = -1;
    var uLocal_1328 = 0;
    var uLocal_1329 = 0;
    var uLocal_1330 = 0;
    var uLocal_1331 = 0;
    var uLocal_1332 = 0;
    var uLocal_1333 = 0;
    var uLocal_1334 = 0;
    var uLocal_1335 = 0;
    var uLocal_1336 = 0;
    var uLocal_1337 = 0;
    var uLocal_1338 = 0;
    var uLocal_1339 = 0;
    var uLocal_1340 = 0;
    var uLocal_1341 = 0;
    var uLocal_1342 = 0;
    var uLocal_1343 = 0;
    var uLocal_1344 = 0;
    var uLocal_1345 = 0;
    var uLocal_1346 = 0;
    var uLocal_1347 = 0;
    var uLocal_1348 = 0;
    var uLocal_1349 = -1082130432;
    var uLocal_1350 = 3;
    var uLocal_1351 = 0;
    var uLocal_1352 = 0;
    var uLocal_1353 = 0;
    var uLocal_1354 = 0;
    var uLocal_1355 = 0;
    var uLocal_1356 = 0;
    var uLocal_1357 = 0;
    var uLocal_1358 = 0;
    var uLocal_1359 = 0;
    var uLocal_1360 = 0;
    var uLocal_1361 = 0;
    var uLocal_1362 = 0;
    var uLocal_1363 = 0;
    var uLocal_1364 = 0;
    var uLocal_1365 = 0;
    var uLocal_1366 = -1;
    var uLocal_1367 = 0;
    var uLocal_1368 = -1;
    var uLocal_1369 = -1;
    var uLocal_1370 = 0;
    var uLocal_1371 = 0;
    var uLocal_1372 = 0;
    var uLocal_1373 = 0;
    var uLocal_1374 = 0;
    var uLocal_1375 = 0;
    var uLocal_1376 = 0;
    var uLocal_1377 = 0;
    var uLocal_1378 = 0;
    var uLocal_1379 = 0;
    var uLocal_1380 = 0;
    var uLocal_1381 = 0;
    var uLocal_1382 = 0;
    var uLocal_1383 = 0;
    var uLocal_1384 = 0;
    var uLocal_1385 = 0;
    var uLocal_1386 = 0;
    var uLocal_1387 = 0;
    var uLocal_1388 = 0;
    var uLocal_1389 = 0;
    var uLocal_1390 = 0;
    var uLocal_1391 = -1082130432;
    var uLocal_1392 = 3;
    var uLocal_1393 = 0;
    var uLocal_1394 = 0;
    var uLocal_1395 = 0;
    var uLocal_1396 = 0;
    var uLocal_1397 = 0;
    var uLocal_1398 = 0;
    var uLocal_1399 = 0;
    var uLocal_1400 = 0;
    var uLocal_1401 = 0;
    var uLocal_1402 = 0;
    var uLocal_1403 = 0;
    var uLocal_1404 = 0;
    var uLocal_1405 = 0;
    var uLocal_1406 = 0;
    var uLocal_1407 = 0;
    var uLocal_1408 = -1;
    var uLocal_1409 = 0;
    var uLocal_1410 = -1;
    var uLocal_1411 = -1;
    var uLocal_1412 = 0;
    var uLocal_1413 = 0;
    var uLocal_1414 = 0;
    var uLocal_1415 = 0;
    var uLocal_1416 = 0;
    var uLocal_1417 = 0;
    var uLocal_1418 = 0;
    var uLocal_1419 = 0;
    var uLocal_1420 = 0;
    var uLocal_1421 = 0;
    var uLocal_1422 = 0;
    var uLocal_1423 = 0;
    var uLocal_1424 = 0;
    var uLocal_1425 = 0;
    var uLocal_1426 = 0;
    var uLocal_1427 = 0;
    var uLocal_1428 = 0;
    var uLocal_1429 = 0;
    var uLocal_1430 = 0;
    var uLocal_1431 = 0;
    var uLocal_1432 = 0;
    var uLocal_1433 = -1082130432;
    var uLocal_1434 = 3;
    var uLocal_1435 = 0;
    var uLocal_1436 = 0;
    var uLocal_1437 = 0;
    var uLocal_1438 = 0;
    var uLocal_1439 = 0;
    var uLocal_1440 = 0;
    var uLocal_1441 = 0;
    var uLocal_1442 = 0;
    var uLocal_1443 = 0;
    var uLocal_1444 = 0;
    var uLocal_1445 = 0;
    var uLocal_1446 = 0;
    var uLocal_1447 = 0;
    var uLocal_1448 = 0;
    var uLocal_1449 = 0;
    var uLocal_1450 = -1;
    var uLocal_1451 = 0;
    var uLocal_1452 = -1;
    var uLocal_1453 = -1;
    var uLocal_1454 = 0;
    var uLocal_1455 = 0;
    var uLocal_1456 = 0;
    var uLocal_1457 = 0;
    var uLocal_1458 = 0;
    var uLocal_1459 = 0;
    var uLocal_1460 = 0;
    var uLocal_1461 = 0;
    var uLocal_1462 = 0;
    var uLocal_1463 = 0;
    var uLocal_1464 = 0;
    var uLocal_1465 = 0;
    var uLocal_1466 = 0;
    var uLocal_1467 = 0;
    var uLocal_1468 = 0;
    var uLocal_1469 = 0;
    var uLocal_1470 = 0;
    var uLocal_1471 = 0;
    var uLocal_1472 = 0;
    var uLocal_1473 = 0;
    var uLocal_1474 = 0;
    var uLocal_1475 = -1082130432;
    var uLocal_1476 = 3;
    var uLocal_1477 = 0;
    var uLocal_1478 = 0;
    var uLocal_1479 = 0;
    var uLocal_1480 = 0;
    var uLocal_1481 = 0;
    var uLocal_1482 = 0;
    var uLocal_1483 = 0;
    var uLocal_1484 = 0;
    var uLocal_1485 = 0;
    var uLocal_1486 = 0;
    var uLocal_1487 = 0;
    var uLocal_1488 = 0;
    var uLocal_1489 = 0;
    var uLocal_1490 = 0;
    var uLocal_1491 = 0;
    var uLocal_1492 = -1;
    var uLocal_1493 = 0;
    var uLocal_1494 = -1;
    var uLocal_1495 = -1;
    var uLocal_1496 = 0;
    var uLocal_1497 = 0;
    var uLocal_1498 = 0;
    var uLocal_1499 = 0;
    var uLocal_1500 = 0;
    var uLocal_1501 = 0;
    var uLocal_1502 = 0;
    var uLocal_1503 = 0;
    var uLocal_1504 = 0;
    var uLocal_1505 = 0;
    var uLocal_1506 = 0;
    var uLocal_1507 = 0;
    var uLocal_1508 = 0;
    var uLocal_1509 = 0;
    var uLocal_1510 = 0;
    var uLocal_1511 = 0;
    var uLocal_1512 = 0;
    var uLocal_1513 = 0;
    var uLocal_1514 = 0;
    var uLocal_1515 = 0;
    var uLocal_1516 = 0;
    var uLocal_1517 = -1082130432;
    var uLocal_1518 = 3;
    var uLocal_1519 = 0;
    var uLocal_1520 = 0;
    var uLocal_1521 = 0;
    var uLocal_1522 = 0;
    var uLocal_1523 = 0;
    var uLocal_1524 = 0;
    var uLocal_1525 = 0;
    var uLocal_1526 = 0;
    var uLocal_1527 = 0;
    var uLocal_1528 = 0;
    var uLocal_1529 = 0;
    var uLocal_1530 = 0;
    var uLocal_1531 = 0;
    var uLocal_1532 = 0;
    var uLocal_1533 = 0;
    var uLocal_1534 = -1;
    var uLocal_1535 = 0;
    var uLocal_1536 = -1;
    struct<12> Local_1537[32];
    struct<12> Local_1538 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
    struct<21> Local_1539 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
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
    fLocal_30 = 80f;
    fLocal_31 = 140f;
    fLocal_32 = 180f;
    iLocal_36 = 3;
    iLocal_40 = 1;
    iLocal_41 = 65;
    iLocal_42 = 49;
    iLocal_43 = 64;
    fLocal_94 = ((0.05f + 0.275f) - 0.01f);
    iLocal_110 = -1;
    iLocal_111 = -1;
    fLocal_122 = 40000f;
    iLocal_150 = unk_0x04B8CCFB93858A27();
    iLocal_151 = unk_0x04B8CCFB93858A27();
    iLocal_152 = -1;
    iLocal_153 = -1;
    if (unk_0x393E9918BC37548A())
    {
        if (!func_768(ScriptParam_1539))
        {
            func_730();
        }
    }
    while (true)
    {
        func_729();
        if (func_722() || func_720())
        {
            func_730();
        }
        if (func_718())
        {
            func_730();
        }
        func_692();
        switch (func_691(unk_0x45F54089C0F6B392()))
        {
            case 0:
                if (func_690() == 1)
                {
                    if (func_689())
                    {
                        func_688(unk_0x45F54089C0F6B392(), 1);
                    }
                }
                break;
            
            case 1:
                if (func_690() == 1)
                {
                    func_139();
                    func_127();
                }
                else if (func_690() == 3)
                {
                    func_688(unk_0x45F54089C0F6B392(), 3);
                }
                break;
            
            case 3:
                func_730();
                break;
        }
        if (unk_0x722688699565161D())
        {
            switch (func_690())
            {
                case 0:
                    if (func_114())
                    {
                        func_113(1);
                    }
                    break;
                
                case 1:
                    if (Local_171.f_25 == 6)
                    {
                        func_113(2);
                    }
                    else
                    {
                        func_3();
                    }
                    break;
                
                case 2:
                    if (func_1(&uLocal_128, 1000, 0))
                    {
                        func_113(3);
                    }
                    break;
                
                case 3:
                    func_730();
                    break;
                }
        }
    }
}

int func_1(var uParam0, int iParam1, bool bParam2)//Position - 0x1C4
{
    if (iParam1 == -1)
    {
        return 1;
    }
    func_2(uParam0, bParam2, 0);
    if (unk_0x393E9918BC37548A() && !bParam2)
    {
        if (unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), *uParam0)) >= iParam1)
        {
            return 1;
        }
    }
    else if (unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(unk_0x9B35D07DCD0F0B43(), *uParam0)) >= iParam1)
    {
        return 1;
    }
    return 0;
}

void func_2(var uParam0, bool bParam1, bool bParam2)//Position - 0x222
{
    if (uParam0->f_1 == 0)
    {
        if (unk_0x393E9918BC37548A() && !bParam1)
        {
            if (!bParam2)
            {
                *uParam0 = unk_0x169A8AC9F93C2727();
            }
            else
            {
                *uParam0 = unk_0x50D85685589EFCBD();
            }
        }
        else
        {
            *uParam0 = unk_0x9B35D07DCD0F0B43();
        }
        uParam0->f_1 = 1;
    }
}

void func_3()//Position - 0x267
{
    bool bVar0;
    
    if (func_44(2, 0, 0, 0, 0))
    {
        if (!unk_0xA2BC31158C8CEFD2(Local_171.f_2, 0))
        {
            unk_0xA1E7A40E1F56E511(&(Local_171.f_2), 0);
            Local_171.f_1 = unk_0x169A8AC9F93C2727();
        }
    }
    switch (Local_171.f_25)
    {
        case 0:
            if (func_43())
            {
                if (!func_31())
                {
                    bVar0 = true;
                }
            }
            if (!bVar0)
            {
                func_30(1);
            }
            break;
        
        case 1:
            if (func_1(&(Local_171.f_2B), func_29(), 0) || unk_0xA2BC31158C8CEFD2(Local_171.f_2, 0))
            {
                func_30(2);
            }
            func_31();
            break;
        
        case 2:
            Local_171.f_26 = unk_0x169A8AC9F93C2727();
            func_30(3);
            break;
        
        case 3:
            if (func_1(&(Local_171.f_27), func_28(0), 0) || unk_0xA2BC31158C8CEFD2(Local_171.f_2, 0))
            {
                if (!unk_0xA2BC31158C8CEFD2(Local_171.f_2, 1))
                {
                    Local_171.f_1 = unk_0x169A8AC9F93C2727();
                    unk_0xA1E7A40E1F56E511(&(Local_171.f_2), 1);
                    func_27(&(Local_171.f_27), 0, 0);
                }
                else
                {
                    func_30(4);
                }
            }
            func_13();
            func_9(&iLocal_153, &iLocal_152);
            func_31();
            break;
        
        case 4:
            if ((func_1(&(Local_171.f_29), 20000, 0) || Local_171.f_4[0] < 0) || func_6())
            {
                if (func_5(Local_171.f_3))
                {
                    func_27(&(Local_171.f_2D), 0, 0);
                    func_30(5);
                }
                else
                {
                    func_30(6);
                }
            }
            else
            {
                func_31();
            }
            break;
        
        case 5:
            if (func_4())
            {
                func_30(6);
            }
            break;
        
        case 6:
            break;
    }
}

int func_4()//Position - 0x406
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 10)
    {
        if (unk_0x8A7BBB98FFB32893(Local_171.f_43[iVar0 /*2*/].f_1) && !unk_0xF4B969E0807E76C7(unk_0xAEA6D4EC961DFA03(Local_171.f_43[iVar0 /*2*/].f_1), 0))
        {
            return 0;
        }
        iVar0++;
    }
    return 1;
}

int func_5(int iParam0)//Position - 0x452
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

int func_6()//Position - 0x48A
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    iVar0 = 0;
    iVar1 = 0;
    while (iVar1 < unk_0xACF7D965CEBE5714())
    {
        if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar1)))
        {
            iVar2 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar1));
            if (!func_7(iVar2))
            {
                if (!unk_0xA2BC31158C8CEFD2(Local_1537[iVar1 /*12*/].f_1, 1) || Local_1537[iVar1 /*12*/].f_3 != 6)
                {
                    return 0;
                }
                else if (unk_0xA2BC31158C8CEFD2(Local_1537[iVar1 /*12*/].f_1, 0))
                {
                    iVar0 = 1;
                }
            }
            else
            {
                iVar0 = 1;
            }
        }
        iVar1++;
    }
    return iVar0;
}

bool func_7(int iParam0)//Position - 0x513
{
    if (func_8(iParam0))
    {
        return 1;
    }
    return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_1, 8);
}

bool func_8(int iParam0)//Position - 0x539
{
    return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_1, 2);
}

void func_9(int iParam0, int iParam1)//Position - 0x551
{
    struct<14> Var0;
    int iVar1;
    
    if (*iParam0 >= 0 && *iParam1 >= 0)
    {
        iVar1 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(*iParam0));
        if (*iParam1 == 0)
        {
            Var0.f_2 = -1057008853;
            Var0.f_A = iVar1;
            func_10(Var0, func_11(1));
        }
        *iParam0 = -1;
        *iParam1 = -1;
    }
}

void func_10(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0x5A4
{
    Param0 = 564131320;
    Param0.f_1 = unk_0x7C7787D2D7139A85();
    if (!iParam13 == 0)
    {
        unk_0x990C4E4B3665A4D6(1, &Param0, 14, iParam13);
    }
}

int func_11(int iParam0)//Position - 0x5D1
{
    var uVar0;
    int iVar1;
    int iVar2;
    
    iVar1 = 0;
    while (iVar1 < unk_0xACF7D965CEBE5714())
    {
        if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar1)))
        {
            iVar2 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar1));
            if (func_12(iVar2, 0, 0))
            {
                if (iVar2 != unk_0x7C7787D2D7139A85() || iParam0)
                {
                    unk_0xA1E7A40E1F56E511(&uVar0, iVar2);
                }
            }
        }
        iVar1++;
    }
    return uVar0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)//Position - 0x62E
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        if (unk_0xD56C8C2B75BF9665(iParam0))
        {
            if (bParam1)
            {
                if (!unk_0xD699DB8EAB756F25(iParam0))
                {
                    return 0;
                }
            }
            if (bParam2)
            {
                if (!Global_2531AD.f_3[iVar0])
                {
                    return 0;
                }
            }
            return 1;
        }
    }
    return 0;
}

void func_13()//Position - 0x678
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    iVar0 = 0;
    while (iVar0 < unk_0xACF7D965CEBE5714())
    {
        if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar0)))
        {
            unk_0xA1E7A40E1F56E511(&iVar3, iVar0);
        }
        else
        {
            func_26(iVar0);
        }
        iVar0++;
    }
    iVar0 = 0;
    while (iVar0 < unk_0xACF7D965CEBE5714())
    {
        if (unk_0xA2BC31158C8CEFD2(iVar3, iVar0))
        {
            func_23(iVar0);
            unk_0xA1E7A40E1F56E511(&(Local_171.f_2F), iVar0);
            iVar1++;
            if (func_17(iVar0, 0))
            {
                iVar4 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar0));
                if (unk_0xD56C8C2B75BF9665(iVar4) && !func_14(iVar4, 0))
                {
                    iVar2++;
                }
            }
        }
        iVar0++;
    }
    if (iVar1 > Local_171.f_32)
    {
        Local_171.f_32 = iVar1;
    }
    else
    {
        Local_171.f_42 = (Local_171.f_32 - iVar1);
    }
    if (iVar2 > Local_171.f_33)
    {
        Local_171.f_33 = iVar2;
    }
}

bool func_14(int iParam0, int iParam1)//Position - 0x74E
{
    bool bVar0;
    
    if (iParam0 == unk_0x7C7787D2D7139A85())
    {
        bVar0 = func_15(-1, 0) == 8;
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

int func_15(int iParam0, bool bParam1)//Position - 0x799
{
    int iVar0;
    int iVar1;
    
    iVar1 = iParam0;
    if (iVar1 == -1)
    {
        iVar1 = func_16();
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

int func_16()//Position - 0x7DA
{
    return Global_1407E9;
}

int func_17(int iParam0, bool bParam1)//Position - 0x7E6
{
    float fVar0;
    
    if (iParam0 >= 0 && iParam0 < 32)
    {
        fVar0 = SYSTEM::TO_FLOAT(Local_1537[iParam0 /*12*/].f_4);
    }
    else if (iParam0 == -1)
    {
        fVar0 = SYSTEM::TO_FLOAT(Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_4);
    }
    else
    {
        return 0;
    }
    if (bParam1)
    {
        if (func_19())
        {
            return 1;
        }
    }
    if (func_18())
    {
        fVar0 = (fVar0 / 10f);
    }
    switch (Local_171.f_3)
    {
        case 0:
            if (fVar0 >= Global_40001.f_2ABB)
            {
                return 1;
            }
            break;
        
        case 2:
            if (fVar0 >= Global_40001.f_2ABC)
            {
                return 1;
            }
            break;
        
        case 3:
            if (fVar0 >= Global_40001.f_2ABD)
            {
                return 1;
            }
            break;
        
        case 5:
            if (fVar0 >= Global_40001.f_2ABE)
            {
                return 1;
            }
            break;
        
        case 4:
            if (fVar0 >= Global_40001.f_2ABF)
            {
                return 1;
            }
            break;
        
        case 1:
            if (fVar0 >= Global_40001.f_2AC0)
            {
                return 1;
            }
            break;
        
        case 6:
            if (fVar0 <= Global_40001.f_2AC1 && fVar0 != 0f)
            {
                return 1;
            }
            break;
        
        case 9:
            if (fVar0 >= Global_40001.f_2AC2)
            {
                return 1;
            }
            break;
        
        case 10:
            if (fVar0 >= Global_40001.f_2AC3)
            {
                return 1;
            }
            break;
        
        case 18:
            if (fVar0 >= Global_40001.f_2AC4)
            {
                return 1;
            }
            break;
        
        case 13:
            if (fVar0 >= Global_40001.f_2AC5)
            {
                return 1;
            }
            break;
        
        case 7:
            if (fVar0 >= IntToFloat(Global_40001.f_2AC6))
            {
                return 1;
            }
            break;
        
        case 8:
            if (fVar0 >= IntToFloat(Global_40001.f_2AC7))
            {
                return 1;
            }
            break;
        
        case 11:
            if (fVar0 >= Global_40001.f_2B37)
            {
                return 1;
            }
            break;
        
        case 12:
            if (fVar0 >= Global_40001.f_2B38)
            {
                return 1;
            }
            break;
        
        case 14:
            if (fVar0 >= IntToFloat(Global_40001.f_2ACA))
            {
                return 1;
            }
            break;
        
        case 15:
            if (fVar0 >= IntToFloat(Global_40001.f_2ACC))
            {
                return 1;
            }
            break;
        
        case 16:
            if (fVar0 >= IntToFloat(Global_40001.f_2ACD))
            {
                return 1;
            }
            break;
        
        case 17:
            if (fVar0 >= IntToFloat(Global_40001.f_2ACE))
            {
                return 1;
            }
            break;
    }
    return 0;
}

int func_18()//Position - 0xA58
{
    switch (Local_171.f_3)
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

int func_19()//Position - 0xAB7
{
    if ((func_20(0) || func_20(1)) || func_20(2))
    {
        return 1;
    }
    return 0;
}

int func_20(int iParam0)//Position - 0xAE2
{
    if (iParam0 >= 0)
    {
        if (Local_171.f_4[iParam0] == unk_0x2E40EEA43EF34BD6() && func_21(Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_4, 0))
        {
            return 1;
        }
    }
    return 0;
}

bool func_21(int iParam0, int iParam1)//Position - 0xB1B
{
    if (!func_22())
    {
        return iParam0 > iParam1;
    }
    if (iParam0 == 0)
    {
        iParam0 = 2147483647;
    }
    if (iParam1 == 0)
    {
        iParam1 = 2147483647;
    }
    return iParam0 < iParam1;
}

int func_22()//Position - 0xB55
{
    switch (Local_171.f_3)
    {
        case 6:
            return 1;
        
        default:
    }
    return 0;
}

void func_23(int iParam0)//Position - 0xB72
{
    int iVar0;
    int iVar1;
    float fVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    
    iVar0 = Local_1537[iParam0 /*12*/].f_4;
    iVar1 = Local_1537[iParam0 /*12*/].f_4.f_2;
    if (!unk_0xA2BC31158C8CEFD2(Local_171.f_30, iParam0))
    {
        fVar2 = SYSTEM::TO_FLOAT(Local_171.f_4[0]);
        if ((!func_22() && IntToFloat(iVar0) >= (fVar2 / 2f)) || (func_22() && IntToFloat(iVar0) <= (fVar2 * 2f)))
        {
            Local_171.f_31++;
            unk_0xA1E7A40E1F56E511(&(Local_171.f_30), iParam0);
        }
    }
    iVar3 = -1;
    iVar4 = -2;
    iVar3 = 0;
    while (iVar3 < 32)
    {
        if (Local_171.f_4[iVar3] == iParam0)
        {
            iVar3 = 32;
        }
        else if (iVar4 >= -1)
        {
            if (iVar4 >= 0)
            {
                func_25(&(Local_171.f_4[iVar3]), &iVar4);
            }
        }
        else if ((Local_171.f_4[iVar3] < 0 || func_21(iVar0, Local_1537[Local_171.f_4[iVar3] /*12*/].f_4)) || func_24(iVar0, Local_1537[Local_171.f_4[iVar3] /*12*/].f_4, iVar1, Local_1537[Local_171.f_4[iVar3] /*12*/].f_4.f_2))
        {
            iVar4 = Local_171.f_4[iVar3];
            if (func_21(iVar0, 0))
            {
                iLocal_152 = iVar3;
                iLocal_153 = iParam0;
            }
            Local_171.f_4[iVar3] = iParam0;
            iVar5 = iVar3 + 1;
            while (iVar5 <= 31)
            {
                if (Local_171.f_4[iVar5] == iParam0)
                {
                    Local_171.f_4[iVar5] = -1;
                }
                iVar5++;
            }
        }
        iVar3++;
    }
}

int func_24(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xCF2
{
    if (Local_171.f_3 == 2)
    {
        if (iParam0 == iParam1 && iParam2 > iParam3)
        {
            return 1;
        }
    }
    return 0;
}

void func_25(var uParam0, int iParam1)//Position - 0xD1A
{
    *uParam0 = (*uParam0 + *iParam1);
    *iParam1 = (*uParam0 - *iParam1);
    *uParam0 = (*uParam0 - *iParam1);
}

void func_26(int iParam0)//Position - 0xD40
{
    int iVar0;
    
    if (unk_0xA2BC31158C8CEFD2(Local_171.f_2F, iParam0))
    {
        iVar0 = 0;
        while (iVar0 < 32)
        {
            if (Local_171.f_4[iVar0] == iParam0)
            {
                Local_171.f_4[iVar0] = -1;
                iVar0 = 32;
            }
            iVar0++;
        }
        unk_0x3B76114EC84D5812(&(Local_171.f_30), iParam0);
        unk_0x3B76114EC84D5812(&(Local_171.f_2F), iParam0);
    }
}

void func_27(var uParam0, bool bParam1, bool bParam2)//Position - 0xD9B
{
    if (unk_0x393E9918BC37548A() && !bParam1)
    {
        if (!bParam2)
        {
            *uParam0 = unk_0x169A8AC9F93C2727();
        }
        else
        {
            *uParam0 = unk_0x50D85685589EFCBD();
        }
    }
    else
    {
        *uParam0 = unk_0x9B35D07DCD0F0B43();
    }
    uParam0->f_1 = 1;
}

int func_28(bool bParam0)//Position - 0xDD8
{
    if (unk_0xA2BC31158C8CEFD2(Local_171.f_2, 1) && !bParam0)
    {
        return 750;
    }
    switch (Local_171.f_3)
    {
        case 0:
            return Global_40001.f_2810;
        
        case 8:
            return Global_40001.f_2812;
        
        case 3:
            return Global_40001.f_2813;
        
        case 1:
            return Global_40001.f_2B29;
        
        case 6:
            return Global_40001.f_2B2A;
        
        case 10:
            return Global_40001.f_2B2C;
        
        case 11:
            return Global_40001.f_2B2E;
        
        case 12:
            return Global_40001.f_2B2F;
        
        case 15:
            return Global_40001.f_2B33;
        
        case 16:
            return Global_40001.f_2B34;
        
        case 17:
            return Global_40001.f_2B35;
        
        case 18:
            return Global_40001.f_2B36;
        
        case 13:
            return Global_40001.f_2B2D;
        
        case 14:
            return Global_40001.f_2B30;
        
        case 2:
            return Global_40001.f_2815;
        
        case 7:
            return Global_40001.f_2B2B;
        
        case 9:
            return Global_40001.f_2B31;
        
        case 5:
            return Global_40001.f_2816;
        
        case 4:
            return Global_40001.f_2814;
        
        default:
    }
    return -1;
}

int func_29()//Position - 0xF36
{
    return Global_40001.f_2B0B;
}

void func_30(int iParam0)//Position - 0xF45
{
    Local_171.f_25 = iParam0;
}

int func_31()//Position - 0xF54
{
    struct<2> Var0;
    vector3 vVar1;
    float fVar2;
    int iVar3;
    
    if (func_43() && ((Local_171.f_25 == 0 || func_5(Local_171.f_3)) || Local_171.f_36 < 10))
    {
        Var0 = { Local_171.f_43[iLocal_147 /*2*/] };
        if (func_42(Var0))
        {
            if (!unk_0x9C625F4590C97F13(Var0.f_1))
            {
                if (func_40(Local_171.f_3, iLocal_147, &vVar1, &fVar2))
                {
                    Local_171.f_37[iLocal_147] = func_36(iLocal_147);
                    if (unk_0xA2BC31158C8CEFD2(Local_1537[Local_171.f_37[iLocal_147] /*12*/].f_2, iLocal_147))
                    {
                        if (func_33(&(Local_171.f_43[iLocal_147 /*2*/].f_1), Var0, vVar1, fVar2, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
                        {
                            unk_0x7E32D3AD3CEAB498(unk_0xAEA6D4EC961DFA03(Local_171.f_43[iLocal_147 /*2*/].f_1), 1, 1);
                            unk_0x54B5C3A13D3588F0(unk_0x40237B62400B4BCC(Local_171.f_43[iLocal_147 /*2*/].f_1), 1);
                            unk_0x9D3FE4786B8925D2(unk_0x40237B62400B4BCC(Local_171.f_43[iLocal_147 /*2*/].f_1), 1);
                            unk_0xA0D3A754AED6B70B(unk_0x40237B62400B4BCC(Local_171.f_43[iLocal_147 /*2*/].f_1), 0);
                            func_32(unk_0x40237B62400B4BCC(Local_171.f_43[iLocal_147 /*2*/].f_1), 1);
                            if (unk_0xE9FEBBC43DAFBBAC("Not_Allow_As_Saved_Veh", 3))
                            {
                                unk_0x6950A3804E46BC89(unk_0x40237B62400B4BCC(Local_171.f_43[iLocal_147 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
                            }
                            if (unk_0xE9FEBBC43DAFBBAC("MPBitset", 3))
                            {
                                if (unk_0x145DAE1A4D0EA05D(unk_0x40237B62400B4BCC(Local_171.f_43[iLocal_147 /*2*/].f_1), "MPBitset"))
                                {
                                    iVar3 = unk_0x7CE457B32235D9D1(unk_0x40237B62400B4BCC(Local_171.f_43[iLocal_147 /*2*/].f_1), "MPBitset");
                                }
                                unk_0xA1E7A40E1F56E511(&iVar3, 10);
                                unk_0xA1E7A40E1F56E511(&iVar3, 11);
                                unk_0x6950A3804E46BC89(unk_0x40237B62400B4BCC(Local_171.f_43[iLocal_147 /*2*/].f_1), "MPBitset", iVar3);
                            }
                            Local_171.f_37[iLocal_147] = -1;
                            Local_171.f_36++;
                        }
                    }
                }
            }
        }
        iLocal_147++;
        if (iLocal_147 >= 10)
        {
            iLocal_147 = 0;
            return 1;
        }
        return 0;
    }
    return 1;
}

void func_32(int iParam0, bool bParam1)//Position - 0x1143
{
    int iVar0;
    
    if (unk_0xE9FEBBC43DAFBBAC("MPBitset", 3))
    {
        if (unk_0x145DAE1A4D0EA05D(iParam0, "MPBitset"))
        {
            iVar0 = unk_0x7CE457B32235D9D1(iParam0, "MPBitset");
        }
        if (bParam1)
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 13);
        }
        else
        {
            unk_0x3B76114EC84D5812(&iVar0, 13);
        }
        unk_0x6950A3804E46BC89(iParam0, "MPBitset", iVar0);
    }
}

int func_33(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x1191
{
    float fVar0;
    int iVar1;
    
    if (!unk_0xCBBFE6965951B21E(iParam1))
    {
        return 0;
    }
    if (!unk_0x987DF1B2025CC706(1))
    {
        return 0;
    }
    fVar0 = 1.5f;
    if (iParam1 == -32878452)
    {
        fVar0 = 20f;
    }
    if (bParam9)
    {
        unk_0x7FB505C34A14BAAA(vParam2, fVar0, 0, 0, 0, 0, false, 0);
    }
    iVar1 = unk_0x847817A65E16621A(iParam1, vParam2, fParam3, bParam5, iParam4, iParam12);
    if (unk_0xD4B321D9096B01FC(iVar1))
    {
        *uParam0 = unk_0x7B82BDB8FBC5EEF9(iVar1);
        Global_26A0A9.f_1865 = iVar1;
        if (unk_0x9C625F4590C97F13(*uParam0))
        {
            if (bParam13)
            {
                unk_0x18620062E6D68D6E(iVar1, 1);
            }
            unk_0x9D3FE4786B8925D2(iVar1, iParam8);
            if (unk_0x457EF27DC4F63820(iVar1))
            {
                if (bParam6)
                {
                    unk_0x9E11C6A0FFF1E999(*uParam0, 1);
                }
                else
                {
                    unk_0x9E11C6A0FFF1E999(*uParam0, 0);
                }
                if (bParam11)
                {
                    unk_0xA986EE8F099052F4(*uParam0, unk_0x7C7787D2D7139A85(), 1);
                }
            }
            unk_0xEF5C4BC935BFF76E(iVar1, bParam7);
            unk_0x98E94863AB8F55F4(iVar1, 1);
            if (bParam10)
            {
                unk_0x58DFD2EDF224315F(iVar1);
                unk_0x48AB9211DB740DB5(iVar1, 5, 5, 1f);
            }
            func_34(vParam2, fParam3, iParam1, iVar1);
            return 1;
        }
    }
    return 0;
}

void func_34(vector3 vParam0, float fParam1, int iParam2, int iParam3)//Position - 0x1299
{
    int iVar0;
    
    if (func_35(unk_0x7C7787D2D7139A85(), vParam0, iParam2) > -1)
    {
        if ((Global_24B2CF.f_B5E[1 /*6*/].f_5 == iParam3 && Global_24B2CF.f_B5E[1 /*6*/].f_4 == iParam2) && SYSTEM::VDIST(Global_24B2CF.f_B5E[1 /*6*/], vParam0) < 0.5f)
        {
            return;
        }
        iVar0 = 0;
        while (iVar0 < 2)
        {
            if (iVar0 < 1)
            {
                Global_24B2CF.f_B5E[iVar0 /*6*/] = { Global_24B2CF.f_B5E[iVar0 + 1 /*6*/] };
            }
            iVar0++;
        }
        Global_24B2CF.f_B5E[1 /*6*/] = { vParam0 };
        Global_24B2CF.f_B5E[1 /*6*/].f_3 = fParam1;
        Global_24B2CF.f_B5E[1 /*6*/].f_4 = iParam2;
        Global_24B2CF.f_B5E[1 /*6*/].f_5 = iParam3;
    }
}

int func_35(int iParam0, vector3 vParam1, int iParam2)//Position - 0x136C
{
    int iVar0;
    int iVar1;
    vector3 vVar2;
    
    iVar0 = iParam0;
    if (iVar0 > -1)
    {
        iVar1 = 0;
        while (iVar1 < 2)
        {
            if (Global_24E477.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam2)
            {
                vVar2 = { vParam1 };
                if (unk_0x01CBD71E072E9F33((Global_24E477.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
                {
                    vVar2.z = Global_24E477.f_1CD[iVar0 /*11*/][iVar1 /*5*/].f_2;
                }
                if (SYSTEM::VDIST(Global_24E477.f_1CD[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
                {
                    return iVar1;
                }
            }
            iVar1++;
        }
    }
    return -1;
}

int func_36(int iParam0)//Position - 0x140A
{
    int iVar0;
    int iVar1;
    float fVar2;
    float fVar3;
    vector3 vVar4;
    var uVar5;
    int iVar6;
    
    fVar2 = 1000000f;
    if (func_39(iParam0, &vVar4, &uVar5))
    {
        iVar0 = 0;
        while (iVar0 <= (unk_0xACF7D965CEBE5714() - 1))
        {
            if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iVar0)))
            {
                iVar6 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iVar0));
                if (func_12(iVar6, 1, 1))
                {
                    fVar3 = func_37(func_38(iVar6), vVar4);
                    if (fVar3 < fVar2)
                    {
                        fVar2 = fVar3;
                        iVar1 = iVar0;
                    }
                }
            }
            iVar0++;
        }
    }
    return iVar1;
}

float func_37(vector3 vParam0, vector3 vParam1)//Position - 0x1483
{
    vParam0.z = 0f;
    vParam1.z = 0f;
    return SYSTEM::VDIST(vParam0, vParam1);
}

Vector3 func_38(int iParam0)//Position - 0x14A1
{
    return unk_0xACE5E491FC1B0D37(unk_0x23625FE58BACEBFD(iParam0), 0);
}

int func_39(int iParam0, var uParam1, var uParam2)//Position - 0x14B4
{
    switch (iParam0)
    {
        case 0:
            *uParam1 = { -1729.582f, -2943.77f, 12.9443f };
            *uParam2 = 300.078f;
            break;
        
        case 1:
            *uParam1 = { 677.2984f, 769.7758f, 204.6846f };
            *uParam2 = 82.8903f;
            break;
        
        case 2:
            *uParam1 = { 1073.972f, 3003.889f, 40.5508f };
            *uParam2 = 333.2717f;
            break;
        
        case 3:
            *uParam1 = { 1928.635f, 4702.327f, 40.1958f };
            *uParam2 = 327.9112f;
            break;
        
        case 4:
            *uParam1 = { 1278.65f, 6579.366f, 1.505f };
            *uParam2 = 84.26f;
            break;
        
        case 5:
            *uParam1 = { -1700.407f, -829.8932f, 8.2542f };
            *uParam2 = 70.1811f;
            break;
        
        case 6:
            *uParam1 = { -2733.589f, 2925.563f, 1.2152f };
            *uParam2 = 176.5378f;
            break;
        
        case 7:
            *uParam1 = { 1493.418f, -2442.99f, 64.9693f };
            *uParam2 = 52.9918f;
            break;
        
        case 8:
            *uParam1 = { 569.0449f, -772.5692f, 10.4088f };
            *uParam2 = 179.3501f;
            break;
        
        case 9:
            *uParam1 = { -905.1526f, 5548.172f, 5.5251f };
            *uParam2 = 95.8361f;
            break;
        
        default:
            return 0;
    }
    return 1;
}

int func_40(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x1630
{
    if (func_5(iParam0))
    {
        switch (iParam1)
        {
            case 0:
                *uParam2 = { -1729.582f, -2943.77f, 12.9443f };
                *uParam3 = 300.078f;
                break;
            
            case 1:
                *uParam2 = { 677.2984f, 769.7758f, 204.6846f };
                *uParam3 = 82.8903f;
                break;
            
            case 2:
                *uParam2 = { 1073.972f, 3003.889f, 40.5508f };
                *uParam3 = 333.2717f;
                break;
            
            case 3:
                *uParam2 = { 1928.635f, 4702.327f, 40.1958f };
                *uParam3 = 327.9112f;
                break;
            
            case 4:
                *uParam2 = { 1278.65f, 6579.366f, 1.505f };
                *uParam3 = 84.26f;
                break;
            
            case 5:
                *uParam2 = { -1700.407f, -829.8932f, 8.2542f };
                *uParam3 = 70.1811f;
                break;
            
            case 6:
                *uParam2 = { -2733.589f, 2925.563f, 1.2152f };
                *uParam3 = 173.6421f;
                break;
            
            case 7:
                *uParam2 = { 1493.418f, -2442.99f, 64.9693f };
                *uParam3 = 52.9918f;
                break;
            
            case 8:
                *uParam2 = { 569.0449f, -772.5692f, 10.4088f };
                *uParam3 = 179.3501f;
                break;
            
            case 9:
                *uParam2 = { -905.1526f, 5548.172f, 5.5251f };
                *uParam3 = 95.8361f;
                break;
            
            default:
                return 0;
        }
    }
    else if (func_41(iParam0))
    {
        switch (iParam1)
        {
            case 0:
                *uParam2 = { -3132.932f, 1130.534f, 19.683f };
                *uParam3 = 168.7723f;
                break;
            
            case 1:
                *uParam2 = { -1008.917f, -1640.027f, 3.4035f };
                *uParam3 = 235.1491f;
                break;
            
            case 2:
                *uParam2 = { 1075.063f, -2445.105f, 28.2896f };
                *uParam3 = 100.2369f;
                break;
            
            case 3:
                *uParam2 = { 1101.198f, -266.9387f, 68.3046f };
                *uParam3 = 359.2015f;
                break;
            
            case 4:
                *uParam2 = { 2658.878f, 1667.581f, 23.4886f };
                *uParam3 = 90.4833f;
                break;
            
            case 5:
                *uParam2 = { -399.1095f, 874.6328f, 230.2586f };
                *uParam3 = 107.5929f;
                break;
            
            case 6:
                *uParam2 = { 156.5429f, 3117.213f, 41.5677f };
                *uParam3 = 218.5338f;
                break;
            
            case 7:
                *uParam2 = { -2242.923f, 4315.749f, 46.7647f };
                *uParam3 = 236.8359f;
                break;
            
            case 8:
                *uParam2 = { -143.7363f, 6500.573f, 28.7366f };
                *uParam3 = 116.1312f;
                break;
            
            case 9:
                *uParam2 = { 1939.475f, 4628.652f, 39.3984f };
                *uParam3 = 350.0428f;
                break;
            
            default:
                return 0;
            }
    }
    return 1;
}

int func_41(int iParam0)//Position - 0x1934
{
    switch (iParam0)
    {
        case 4:
        case 3:
            return 1;
        
        default:
    }
    return 0;
}

bool func_42(int iParam0)//Position - 0x1954
{
    if (iParam0 == 0)
    {
        return 1;
    }
    unk_0x6BB2B1818CAE531E(iParam0);
    return unk_0x6DF9C43E3CC645BC(iParam0);
}

bool func_43()//Position - 0x1972
{
    return (func_5(Local_171.f_3) || func_41(Local_171.f_3));
}

int func_44(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)//Position - 0x1992
{
    if (func_112(unk_0x7C7787D2D7139A85(), 0) || func_109(unk_0x7C7787D2D7139A85(), 0))
    {
        if (func_108(unk_0x7C7787D2D7139A85()) || func_106(unk_0x7C7787D2D7139A85()))
        {
            bParam2 = false;
        }
    }
    if (unk_0xABA4FE93FAF93E28() < iParam0)
    {
        if (bParam2)
        {
            func_51(sParam3, sParam4, 1);
        }
        if (func_50(26, -1))
        {
            func_48(26, -1);
        }
        return 1;
    }
    if (func_47(&(Global_1806F7.f_12)))
    {
        if (!func_1(&(Global_1806F7.f_12), 7500, 0))
        {
            return 0;
        }
        func_46(&(Global_1806F7.f_12));
    }
    if (func_45())
    {
        if (bParam2)
        {
            func_51(sParam3, sParam4, 0);
        }
        if (func_50(26, -1))
        {
            func_48(26, -1);
        }
        return 1;
    }
    if (iParam1 && unk_0xAAAE7D3270284C4E() < iParam0)
    {
        if (bParam2)
        {
            func_51(sParam3, sParam4, 1);
        }
        if (func_50(26, -1))
        {
            func_48(26, -1);
        }
        return 1;
    }
    return 0;
}

bool func_45()//Position - 0x1A89
{
    return unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 0);
}

void func_46(var uParam0)//Position - 0x1A9C
{
    uParam0->f_1 = 0;
}

bool func_47(var uParam0)//Position - 0x1AA9
{
    return uParam0->f_1;
}

void func_48(int iParam0, int iParam1)//Position - 0x1AB5
{
    int iVar0;
    int iVar1;
    
    if (iParam1 == -1)
    {
        iParam1 = func_16();
    }
    switch (iParam0)
    {
        case 0:
            unk_0x9380AC5E82FA214E(0, iParam1);
            break;
        
        default:
            iVar1 = func_49(iParam1);
            iVar0 = unk_0xFD4B2AAE20AA1CBB(iVar1);
            if (unk_0xA2BC31158C8CEFD2(iVar0, iParam0))
            {
                unk_0x3B76114EC84D5812(&iVar0, iParam0);
                unk_0x9380AC5E82FA214E(iVar0, iParam1);
            }
            break;
    }
}

int func_49(int iParam0)//Position - 0x1B11
{
    int iVar0;
    
    if (iParam0 == -1)
    {
        iParam0 = func_16();
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

bool func_50(int iParam0, int iParam1)//Position - 0x1B74
{
    int iVar0;
    int iVar1;
    
    if (iParam1 == -1)
    {
        iParam1 = func_16();
    }
    iVar0 = func_49(iParam1);
    iVar1 = unk_0xFD4B2AAE20AA1CBB(iVar0);
    return unk_0xA2BC31158C8CEFD2(iVar1, iParam0);
}

void func_51(char* sParam0, char* sParam1, bool bParam2)//Position - 0x1BA0
{
    if ((!unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 2) && !func_8(unk_0x7C7787D2D7139A85())) && !func_7(unk_0x7C7787D2D7139A85()))
    {
        if (unk_0x9591DE0F00127F2A(sParam0))
        {
            sParam0 = "FMEVEN_NUM1";
        }
        if (unk_0x9591DE0F00127F2A(sParam1))
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
        func_52(66, sParam0, sParam1, 1, -1, 2, 1, 0);
        unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 2);
    }
}

int func_52(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1C17
{
    struct<80> Var0;
    
    Var0.f_3 = -1;
    Var0.f_4 = -1;
    Var0.f_5 = -1;
    Var0.f_6 = -1;
    Var0.f_7 = -1082130432;
    Var0.f_10 = 1;
    Var0.f_47 = 1;
    Var0.f_48 = 2;
    Var0.f_4F = -1;
    func_105(iParam0, &Var0, -1, sParam2, sParam1);
    Var0.f_47 = iParam3;
    Var0.f_6 = iParam4;
    Var0.f_48 = iParam5;
    Var0.f_10 = iParam6;
    if (iParam7 != 0)
    {
        func_103(&(Var0.f_45), iParam7);
    }
    return func_53(&Var0);
}

int func_53(var uParam0)//Position - 0x1C97
{
    int iVar0;
    
    if (uParam0->f_1 == 1)
    {
        if (Global_2531AD.f_BD6)
        {
            return 0;
        }
    }
    func_68(uParam0, uParam0->f_11);
    func_65(uParam0);
    if (func_64())
    {
        func_65(uParam0);
    }
    if (func_63(uParam0->f_1))
    {
        func_56();
        if (Global_2531AD.f_A94[0 /*80*/].f_2 == 0)
        {
            Global_2531AD.f_A94[0 /*80*/] = { *uParam0 };
            return 1;
        }
        if (((Global_2531AD.f_A94[0 /*80*/].f_1 == 13 || Global_2531AD.f_A94[0 /*80*/].f_1 == 53) || Global_2531AD.f_A94[0 /*80*/].f_1 == 54) || Global_2531AD.f_A94[0 /*80*/].f_1 == 58)
        {
            Global_2531AD.f_A94[0 /*80*/].f_2 = 5;
        }
        iVar0 = 2;
        while (iVar0 >= 1)
        {
            Global_2531AD.f_A94[iVar0 + 1 /*80*/] = { Global_2531AD.f_A94[iVar0 /*80*/] };
            iVar0 = (iVar0 + -1);
        }
        Global_2531AD.f_A94[1 /*80*/] = { *uParam0 };
        return 1;
    }
    iVar0 = 0;
    while (iVar0 < 4)
    {
        if (Global_2531AD.f_A94[iVar0 /*80*/].f_2 == 0)
        {
            Global_2531AD.f_A94[iVar0 /*80*/] = { *uParam0 };
            if (iVar0 == 0)
            {
                func_56();
            }
            return 1;
        }
        else
        {
            if (uParam0->f_1 == 1)
            {
                func_103(&(Global_2531AD.f_A94[iVar0 /*80*/].f_45), 2);
                Global_2531AD.f_A94[iVar0 /*80*/].f_2 = 5;
            }
            if (uParam0->f_1 == 86 && !func_55(uParam0->f_45, 128))
            {
                if (func_54(Global_2531AD.f_A94[iVar0 /*80*/].f_1))
                {
                    Global_2531AD.f_A94[iVar0 /*80*/].f_2 = 5;
                    func_103(&(Global_2531AD.f_A94[iVar0 /*80*/].f_45), 1);
                }
            }
        }
        iVar0++;
    }
    return 0;
}

int func_54(int iParam0)//Position - 0x1E69
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

bool func_55(var uParam0, int iParam1)//Position - 0x1EEF
{
    return (uParam0 && iParam1) != 0;
}

void func_56()//Position - 0x1EFE
{
    bool bVar0;
    
    if (Global_2531AD.f_BD7)
    {
        return;
    }
    if (!Global_12C2D)
    {
        Global_12C2D = 1;
        bVar0 = true;
    }
    func_57();
    if (bVar0)
    {
        Global_12C2D = 0;
    }
}

void func_57()//Position - 0x1F31
{
    Global_2531AD.f_BD8 = 0;
    Global_2531AD.f_BD8.f_242 = 0;
    func_61(&(Global_2531AD.f_BD8.f_1));
    Global_2531AD.f_BD8.f_1.f_1 = 0;
    func_58(&(Global_2531AD.f_BD8.f_1));
}

void func_58(var uParam0)//Position - 0x1F72
{
    if (uParam0->f_1 != 0)
    {
        unk_0x749CA887CB0AFEC9(&(uParam0->f_1));
        uParam0->f_1 = 0;
    }
    if (uParam0->f_232 && uParam0->f_4 != 0)
    {
        if (unk_0xE434AB6E3DE89861())
        {
            unk_0xF1BC72CEC2746995(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
            unk_0x282C78036676E0C2(false);
            unk_0xAC7C2DE2DDC7AF03();
        }
        unk_0x749CA887CB0AFEC9(&(uParam0->f_4));
        uParam0->f_4 = 0;
    }
    if (uParam0->f_234)
    {
        unk_0x81394B4515AF31C3(false);
        uParam0->f_234 = 0;
    }
    if (!Global_12C2D)
    {
        if (!unk_0x87407D4AFED33A53(unk_0x7A8732CFB5113E77()))
        {
            if (!Global_12C2E)
            {
                if (unk_0x260395BA7F0C83CB() && !func_60(0))
                {
                    unk_0xCF33E56642B34516(800);
                }
            }
        }
    }
    func_59(0);
}

void func_59(int iParam0)//Position - 0x2018
{
    Global_12C25 = iParam0;
    Global_12C26 = iParam0;
}

bool func_60(bool bParam0)//Position - 0x202C
{
    if (!bParam0 && unk_0x222F76006659B0EB(joaat("benchmark")) > 0)
    {
        return 1;
    }
    return unk_0xA2BC31158C8CEFD2(Global_12C19, 0);
}

void func_61(var uParam0)//Position - 0x2057
{
    func_62(uParam0);
    uParam0->f_23A = 0;
    uParam0->f_1F = 0;
    uParam0->f_38 = 0;
    uParam0->f_237 = 0;
    uParam0->f_239 = 0;
}

void func_62(var uParam0)//Position - 0x2081
{
    uParam0->f_223 = 1f;
    uParam0->f_222 = 0;
    uParam0->f_238 = 0f;
    uParam0->f_22E = 0;
    uParam0->f_1E = 0f;
    uParam0->f_224 = 0f;
    uParam0->f_22F = 0f;
    uParam0->f_230 = 0f;
    uParam0->f_221 = 0;
    uParam0->f_233 = 0;
    uParam0->f_23C = 0;
    uParam0->f_234 = 0;
    uParam0->f_235 = 0;
    uParam0->f_236 = 0;
    *uParam0 = 0.1125f;
    uParam0->f_2 = 0;
    uParam0->f_3 = 0;
    uParam0->f_23E = 0;
    uParam0->f_23F = 0;
    uParam0->f_23D = 1f;
}

int func_63(int iParam0)//Position - 0x2100
{
    if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
    {
        return 1;
    }
    return 0;
}

bool func_64()//Position - 0x220D
{
    return Global_255E41.f_11;
}

void func_65(var uParam0)//Position - 0x221B
{
    if (func_67(uParam0->f_1))
    {
        uParam0->f_48 = func_66();
    }
}

int func_66()//Position - 0x2236
{
    return 21;
}

int func_67(int iParam0)//Position - 0x2240
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
        case 79:
        case 80:
        case 81:
        case 82:
        case 83:
            return 1;
        
        default:
    }
    return 0;
}

void func_68(var uParam0, int iParam1)//Position - 0x22D2
{
    if (func_67(uParam0->f_1))
    {
        uParam0->f_49 = 1;
    }
    if (iParam1 == func_102() || !func_12(iParam1, 0, 1))
    {
        return;
    }
    if (func_54(uParam0->f_1))
    {
        if (uParam0->f_47 == 1)
        {
            uParam0->f_49 = func_69(iParam1, -2, 0, 0, 0);
        }
    }
}

int func_69(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x2329
{
    int iVar0;
    int iVar1;
    
    if (func_100(iParam0) && !bParam4)
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
        iVar0 = unk_0xC69A85EEB9CA3B95(iParam0);
        if (iVar0 > -1 && iVar0 < 4)
        {
            if (Global_440000.f_247BD[iVar0] != -1)
            {
                iParam1 = iVar0;
            }
        }
    }
    if (((func_100(unk_0x7C7787D2D7139A85()) || (func_99() && func_98())) && !unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_11EF, 31)) && !bParam4)
    {
        iVar1 = func_97();
        if (unk_0xD4B321D9096B01FC(iVar1))
        {
            if (unk_0x7FA2061748BA645E(iVar1))
            {
                if (unk_0x74D4E16E179B8F53(iVar1) != -1)
                {
                    if (func_12(unk_0x74D4E16E179B8F53(iVar1), 0, 1))
                    {
                        if ((iParam1 > -1 && unk_0xA51CBC95AC3A4B14()) && iParam1 < 4)
                        {
                            if (Global_440000.f_247BD[iParam1] != -1)
                            {
                                return func_95(iParam1, iParam0, 0);
                            }
                            else
                            {
                                return func_82(iParam0, unk_0x74D4E16E179B8F53(iVar1), iParam1, bParam2, bParam3);
                            }
                        }
                        else
                        {
                            return func_82(iParam0, unk_0x74D4E16E179B8F53(iVar1), iParam1, bParam2, bParam3);
                        }
                    }
                }
            }
            else if ((iParam1 > -1 && unk_0xA51CBC95AC3A4B14()) && iParam1 < 4)
            {
                if (Global_440000.f_247BD[iParam1] != -1)
                {
                    return func_95(iParam1, iParam0, 0);
                }
                else
                {
                    return func_70(0, -1, 0);
                }
            }
            else
            {
                return func_70(0, -1, 0);
            }
        }
    }
    if ((iParam1 > -1 && unk_0xA51CBC95AC3A4B14()) && iParam1 < 4)
    {
        if (Global_440000.f_247BD[iParam1] != -1)
        {
            return func_95(iParam1, iParam0, 0);
        }
        else
        {
            return func_82(iParam0, unk_0x7C7787D2D7139A85(), iParam1, bParam2, bParam3);
        }
    }
    return func_82(iParam0, unk_0x7C7787D2D7139A85(), iParam1, bParam2, bParam3);
}

int func_70(bool bParam0, int iParam1, bool bParam2)//Position - 0x2509
{
    return func_71(unk_0x7C7787D2D7139A85(), bParam0, iParam1, bParam2);
}

int func_71(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x251F
{
    int iVar0;
    
    if (!unk_0xD56C8C2B75BF9665(iParam0))
    {
        return 3;
    }
    iVar0 = unk_0xC69A85EEB9CA3B95(iParam0);
    if ((func_81() || (func_80() && func_78())) && Global_151F88.f_1)
    {
        if (bParam1)
        {
            return func_77(iParam2, iVar0);
        }
        else
        {
            return func_77(iVar0, iVar0);
        }
    }
    if (bParam1)
    {
        if (iParam2 > -1)
        {
            if (func_76(iVar0, iParam2, 0) && !unk_0xA2BC31158C8CEFD2(Global_440000.f_F, 18))
            {
                if (iVar0 == iParam2)
                {
                    return func_75(1);
                }
                else
                {
                    return func_75(0);
                }
            }
            else if (bParam3)
            {
                return 28;
            }
            else if (unk_0xA2BC31158C8CEFD2(Global_440000.f_4, 20))
            {
                return func_72(iVar0, iParam2, 1, 4);
            }
            else
            {
                return func_72(iVar0, iParam2, 0, 4);
            }
        }
        return 28;
    }
    if (iVar0 == iParam2 || iParam2 == -1)
    {
        return func_75(1);
    }
    return func_75(0);
}

int func_72(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x2626
{
    int iVar0;
    
    iVar0 = func_74(iParam0, iParam1, iParam3);
    if (func_73(Global_440000.f_25AF8, 1))
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

int func_73(int iParam0, bool bParam1)//Position - 0x273E
{
    int iVar0;
    
    if (bParam1)
    {
        if (Global_440000.f_2E9D2 == 65)
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
        if (iParam0 == Global_40001.f_233B[iVar0])
        {
            return 1;
        }
        iVar0++;
    }
    return 0;
}

int func_74(int iParam0, int iParam1, int iParam2)//Position - 0x278F
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
            if (!func_76(iParam0, iVar0, 0))
            {
                iVar1++;
            }
        }
        iVar0++;
    }
    return -1;
}

int func_75(bool bParam0)//Position - 0x27D6
{
    if (bParam0)
    {
        return 118;
    }
    return 116;
}

int func_76(int iParam0, int iParam1, int iParam2)//Position - 0x27ED
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
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 0);
                
                case 1:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 1);
                
                case 2:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 2);
                
                case 3:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 3);
                
                default:
            }
            break;
        
        case 1:
            switch (iParam1)
            {
                case 0:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 4);
                
                case 1:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 5);
                
                case 2:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 6);
                
                case 3:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 7);
                
                default:
            }
            break;
        
        case 2:
            switch (iParam1)
            {
                case 0:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 8);
                
                case 1:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 9);
                
                case 2:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 10);
                
                case 3:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 11);
                
                default:
            }
            break;
        
        case 3:
            switch (iParam1)
            {
                case 0:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 12);
                
                case 1:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 13);
                
                case 2:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 14);
                
                case 3:
                    return unk_0xA2BC31158C8CEFD2(Global_440000.f_38, 15);
                
                default:
            }
            break;
    }
    return 0;
}

int func_77(int iParam0, int iParam1)//Position - 0x29B8
{
    if (iParam0 == -1)
    {
        iParam0 = func_74(iParam1, iParam0, 4);
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

bool func_78()//Position - 0x2A06
{
    if (func_79())
    {
        return 1;
    }
    return unk_0xA2BC31158C8CEFD2(Global_440000.f_2F9D0, 4);
}

bool func_79()//Position - 0x2A28
{
    return unk_0xA2BC31158C8CEFD2(Global_440000.f_2D0E6, 12);
}

bool func_80()//Position - 0x2A40
{
    if (unk_0xA51CBC95AC3A4B14())
    {
        return unk_0xA2BC31158C8CEFD2(Global_440000.f_2F9D0, 0);
    }
    return ((unk_0xA2BC31158C8CEFD2(Global_440000.f_2F9D0, 0) || Global_193D08) && unk_0x222F76006659B0EB(joaat("fm_deathmatch_creator")) > 0);
}

int func_81()//Position - 0x2A8D
{
    if (func_79() && unk_0xA51CBC95AC3A4B14())
    {
        return 1;
    }
    return 0;
}

int func_82(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x2AAA
{
    int iVar0;
    bool bVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    if (iParam2 == -2)
    {
        iVar0 = unk_0xC69A85EEB9CA3B95(iParam0);
    }
    else
    {
        iVar0 = iParam2;
    }
    if (Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/] == 148)
    {
        bVar1 = true;
    }
    iVar2 = iParam0;
    if (iVar2 > -1)
    {
        if (Global_1844AE[iVar2 /*871*/] == 148)
        {
            bVar1 = true;
        }
    }
    if (!bVar1)
    {
        if (iVar0 != -1)
        {
            if (func_91())
            {
                iVar3 = func_87(iParam0);
                if (!iVar3 == -1)
                {
                    return func_85(iVar3);
                }
            }
            if ((func_84(iParam1, iParam0, iVar0, 0) && !unk_0xA2BC31158C8CEFD2(Global_440000.f_F, 18)) || ((func_76(unk_0xC69A85EEB9CA3B95(iParam1), unk_0xC69A85EEB9CA3B95(iParam0), 0) && unk_0xA2BC31158C8CEFD2(Global_440000.f_F, 23)) && !unk_0xA2BC31158C8CEFD2(Global_440000.f_F, 18)))
            {
                return func_75(1);
            }
            else if (unk_0xA2BC31158C8CEFD2(Global_440000.f_F, 26))
            {
                return func_83(1);
            }
            else
            {
                return func_71(iParam1, 1, iVar0, bParam4);
            }
        }
        else if ((Global_180607 || Global_1805FE) || Global_1844AE[iParam0 /*871*/] == 0)
        {
            if (iParam0 == iParam1 || (Global_180607 == 1 && Global_180611 == 0))
            {
                return func_75(1);
            }
            else
            {
                return func_71(iParam1, 1, iVar0, bParam4);
            }
        }
        if (Global_180602 && Global_18040B.f_E == iParam0)
        {
            return 28;
        }
    }
    iVar4 = func_87(iParam0);
    if (!iVar4 == -1)
    {
        return func_85(iVar4);
    }
    if (bParam3)
    {
        return 0;
    }
    return 1;
}

int func_83(bool bParam0)//Position - 0x2C4D
{
    if (bParam0)
    {
        return 119;
    }
    return 116;
}

bool func_84(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2C64
{
    if (iParam2 == -2)
    {
        if (iParam3 == 0)
        {
            if (unk_0xC69A85EEB9CA3B95(iParam0) == -1 && unk_0xC69A85EEB9CA3B95(iParam1) == -1)
            {
                return 0;
            }
        }
        return unk_0xC69A85EEB9CA3B95(iParam0) == unk_0xC69A85EEB9CA3B95(iParam1);
    }
    else
    {
        if (iParam3 == 0)
        {
            if (unk_0xC69A85EEB9CA3B95(iParam0) == -1 && iParam2 == -1)
            {
                return 0;
            }
        }
        return unk_0xC69A85EEB9CA3B95(iParam0) == iParam2;
    }
    return unk_0xC69A85EEB9CA3B95(iParam0) == iParam2;
}

int func_85(int iParam0)//Position - 0x2CDC
{
    int iVar0;
    
    if (iParam0 > -1)
    {
        iVar0 = func_86(iParam0);
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

var func_86(int iParam0)//Position - 0x2D9F
{
    return Global_24E477.f_839.f_2C[iParam0 /*2*/].f_1;
}

int func_87(int iParam0)//Position - 0x2DB6
{
    if (!iParam0 == func_102())
    {
        if (func_89(iParam0, 1))
        {
            return Global_24E477.f_839.f_B[func_88(iParam0)];
        }
    }
    return -1;
}

int func_88(int iParam0)//Position - 0x2DE8
{
    if (iParam0 != func_102())
    {
        return Global_18DB1B[iParam0 /*614*/].f_B;
    }
    return func_102();
}

bool func_89(int iParam0, bool bParam1)//Position - 0x2E0B
{
    if (!bParam1)
    {
        if (func_90(iParam0))
        {
            return 0;
        }
    }
    return Global_18DB1B[iParam0 /*614*/].f_B != func_102();
}

int func_90(int iParam0)//Position - 0x2E36
{
    if (iParam0 != func_102())
    {
        if (Global_18DB1B[iParam0 /*614*/].f_B != func_102())
        {
            return Global_18DB1B[iParam0 /*614*/].f_B == iParam0;
        }
    }
    return 0;
}

int func_91()//Position - 0x2E6B
{
    if (((func_94() || func_93()) || func_64()) || func_92())
    {
        return 1;
    }
    return 0;
}

bool func_92()//Position - 0x2E9D
{
    return Global_255E41.f_13;
}

var func_93()//Position - 0x2EAB
{
    return Global_255E41.f_10;
}

var func_94()//Position - 0x2EB9
{
    return Global_255E41.f_F;
}

int func_95(int iParam0, int iParam1, bool bParam2)//Position - 0x2EC7
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    iVar1 = Global_EC945.f_D[iParam0];
    if (func_91())
    {
        iVar2 = func_87(iParam1);
        if (!iVar2 == -1)
        {
            return func_85(iVar2);
        }
    }
    if (iVar1 > -1 && iVar1 < 17)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_440000.f_6A[iParam0 /*11610*/].f_16C7[iVar1], 24))
        {
            return 18;
        }
    }
    if (iParam0 > -1 && iParam1 != func_102())
    {
        if (Global_440000.f_247BD[iParam0] != -1 && Global_440000.f_247BD[iParam0] <= 4)
        {
            if (Global_440000.f_247BD[iParam0] == 0)
            {
                iVar0 = 15;
            }
            else if (Global_440000.f_247BD[iParam0] == 1)
            {
                iVar0 = 18;
            }
            else if (Global_440000.f_247BD[iParam0] == 2)
            {
                iVar0 = 24;
            }
            else if (Global_440000.f_247BD[iParam0] == 4)
            {
                if (unk_0xA2BC31158C8CEFD2(Global_440000.f_F, 29))
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
                iVar0 = Global_440000.f_247BD[iParam0];
            }
        }
        else
        {
            iVar0 = func_71(iParam1, !bParam2, iParam0, 0);
        }
        if (unk_0xA2BC31158C8CEFD2(Global_440000.f_15, 13))
        {
            iVar0 = func_96(iParam0);
        }
        if (unk_0xA2BC31158C8CEFD2(Global_440000.f_18, 29))
        {
            iVar0 = 0;
        }
        if (unk_0xA2BC31158C8CEFD2(Global_440000.f_F, 26) && !func_76(iParam0, unk_0xC69A85EEB9CA3B95(iParam1), 0))
        {
            iVar0 = func_83(1);
        }
    }
    else
    {
        iVar0 = 1;
    }
    return iVar0;
}

int func_96(int iParam0)//Position - 0x3054
{
    int iVar0;
    
    switch (iParam0)
    {
        case 0:
            iVar0 = Global_440000.f_2EA26;
            break;
        
        case 1:
            iVar0 = Global_440000.f_2EA27;
            break;
        
        case 2:
            iVar0 = Global_440000.f_2EA28;
            break;
        
        case 3:
            iVar0 = Global_440000.f_2EA29;
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

var func_97()//Position - 0x3129
{
    return Global_240006.f_2;
}

bool func_98()//Position - 0x3137
{
    return unk_0xA2BC31158C8CEFD2(Global_240006, 4);
}

bool func_99()//Position - 0x3148
{
    return unk_0xA2BC31158C8CEFD2(Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_27.f_12, 14);
}

int func_100(int iParam0)//Position - 0x3165
{
    if (func_14(iParam0, 0))
    {
        return 1;
    }
    if (func_101())
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

bool func_101()//Position - 0x31A7
{
    return unk_0xA2BC31158C8CEFD2(Global_240006, 3);
}

int func_102()//Position - 0x31B8
{
    return -1;
}

void func_103(var uParam0, int iParam1)//Position - 0x31C1
{
    func_104(uParam0, iParam1);
}

void func_104(var uParam0, var uParam1)//Position - 0x31D1
{
    *uParam0 = (*uParam0 || uParam1);
}

void func_105(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)//Position - 0x31E2
{
    uParam1->f_11 = func_102();
    uParam1->f_12 = func_102();
    uParam1->f_13 = func_102();
    uParam1->f_14 = func_102();
    uParam1->f_1 = uParam0;
    uParam1->f_2 = 1;
    StringCopy(&(uParam1->f_15), sParam4, 16);
    StringCopy(&(uParam1->f_8), sParam3, 32);
    uParam1->f_10 = 1;
    uParam1->f_3 = iParam2;
    uParam1->f_47 = 1;
    uParam1->f_4A = 1;
    uParam1->f_4B = 1;
    uParam1->f_4C = 0;
    uParam1->f_4D = 0;
    uParam1->f_49 = 0;
    StringCopy(&(uParam1->f_19), "", 64);
    StringCopy(&(uParam1->f_29), "", 64);
}

bool func_106(int iParam0)//Position - 0x3260
{
    return func_107(iParam0, 20);
}

bool func_107(int iParam0, int iParam1)//Position - 0x3270
{
    return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_B.f_4, iParam1);
}

int func_108(int iParam0)//Position - 0x328B
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        return func_107(iParam0, 9);
    }
    return 0;
}

int func_109(int iParam0, int iParam1)//Position - 0x32A9
{
    if (Global_18DB1B[iParam0 /*614*/].f_B.f_21 != -1 && func_110(Global_18DB1B[iParam0 /*614*/].f_B.f_21))
    {
        return 1;
    }
    if (iParam1 && Global_18DB1B[iParam0 /*614*/].f_B.f_20 != -1)
    {
        if (func_110(Global_18DB1B[iParam0 /*614*/].f_B.f_20))
        {
            return 1;
        }
    }
    return 0;
}

int func_110(int iParam0)//Position - 0x330F
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
    return func_111(iParam0, 0);
    return 0;
}

int func_111(int iParam0, int iParam1)//Position - 0x3369
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

int func_112(int iParam0, int iParam1)//Position - 0x33BE
{
    if (Global_18DB1B[iParam0 /*614*/].f_B.f_21 != -1 || (iParam1 && Global_18DB1B[iParam0 /*614*/].f_B.f_20 != -1))
    {
        return 1;
    }
    return 0;
}

void func_113(int iParam0)//Position - 0x33F9
{
    Local_171 = iParam0;
}

int func_114()//Position - 0x3406
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 32)
    {
        Local_171.f_4[iVar0] = -1;
        iVar0++;
    }
    func_46(&(Local_171.f_27));
    func_119();
    if (func_43())
    {
        iVar0 = 0;
        while (iVar0 < 10)
        {
            Local_171.f_37[iVar0] = func_36(iVar0);
            iVar0++;
        }
        func_115();
    }
    return 1;
}

void func_115()//Position - 0x3466
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 10)
    {
        if (func_41(Local_171.f_3))
        {
            Local_171.f_43[iVar0 /*2*/] = func_118();
        }
        else
        {
            Local_171.f_43[iVar0 /*2*/] = func_116();
        }
        iVar0++;
    }
}

int func_116()//Position - 0x34AA
{
    int iVar0;
    
    switch (Local_171.f_3)
    {
        case 12:
            return func_117();
            break;
    }
    iVar0 = unk_0xBAC643F143880136(0, 2);
    switch (iVar0)
    {
        case 0:
            return joaat("maverick");
        
        case 1:
            return joaat("mammatus");
        
        default:
    }
    return 0;
}

int func_117()//Position - 0x34F8
{
    int iVar0;
    
    iVar0 = unk_0xBAC643F143880136(0, 2);
    switch (iVar0)
    {
        case 0:
            return joaat("stunt");
        
        case 1:
            return joaat("besra");
        
        default:
    }
    return 0;
}

int func_118()//Position - 0x352C
{
    int iVar0;
    
    iVar0 = unk_0xBAC643F143880136(0, 2);
    switch (iVar0)
    {
        case 0:
            return joaat("sanchez");
        
        case 1:
            return joaat("pcj");
        
        default:
    }
    return 0;
}

void func_119()//Position - 0x3560
{
    int iVar0;
    
    iVar0 = func_123();
    Local_171.f_3 = iVar0;
    func_120(func_122(133, iVar0, 0, 0));
}

void func_120(int iParam0)//Position - 0x3583
{
    vector3 vVar0;
    int iVar1;
    
    vVar0.x = 226654995;
    vVar0.y = unk_0x7C7787D2D7139A85();
    vVar0.z = iParam0;
    iVar1 = func_121(1, 1);
    if (!iVar1 == 0)
    {
        unk_0x990C4E4B3665A4D6(1, &vVar0, 3, iVar1);
    }
}

var func_121(int iParam0, bool bParam1)//Position - 0x35BD
{
    var uVar0;
    int iVar1;
    int iVar2;
    
    iVar1 = 0;
    while (iVar1 < 32)
    {
        iVar2 = unk_0x0C98179F08C6DA4F(iVar1);
        if (func_12(iVar2, 0, 0))
        {
            if (iVar2 != unk_0x7C7787D2D7139A85() || iParam0)
            {
                if (bParam1)
                {
                    unk_0xA1E7A40E1F56E511(&uVar0, iVar1);
                }
                else if (!func_14(iVar2, 0))
                {
                    unk_0xA1E7A40E1F56E511(&uVar0, iVar1);
                }
            }
        }
        iVar1++;
    }
    return uVar0;
}

int func_122(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3622
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

int func_123()//Position - 0x3E87
{
    int iVar0[19];
    float fVar1;
    int iVar2;
    float fVar3;
    
    iVar0[0] = Global_40001.f_2C54;
    iVar0[1] = Global_40001.f_2B0D;
    iVar0[2] = Global_40001.f_2C58;
    iVar0[3] = Global_40001.f_2C56;
    iVar0[4] = Global_40001.f_2C57;
    iVar0[5] = Global_40001.f_2C59;
    iVar0[6] = Global_40001.f_2B0E;
    iVar0[7] = Global_40001.f_2B0F;
    iVar0[8] = Global_40001.f_2C55;
    iVar0[9] = Global_40001.f_2B15;
    iVar0[10] = Global_40001.f_2B10;
    iVar0[11] = Global_40001.f_2B12;
    iVar0[12] = Global_40001.f_2B13;
    iVar0[13] = Global_40001.f_2B11;
    iVar0[14] = Global_40001.f_2B14;
    iVar0[15] = Global_40001.f_2B17;
    iVar0[16] = Global_40001.f_2B18;
    iVar0[17] = Global_40001.f_2B19;
    iVar0[18] = Global_40001.f_2B1A;
    fVar1 = 0f;
    iVar2 = 0;
    while (iVar2 < iVar0)
    {
        if (func_126(iVar2) || func_124(133, iVar2, 0, 0))
        {
            iVar0[iVar2] = 0f;
        }
        else
        {
            fVar1 = (fVar1 + iVar0[iVar2]);
        }
        iVar2++;
    }
    fVar3 = unk_0x64A3FFD9D62755C5(0f, fVar1);
    iVar2 = 0;
    while (iVar2 < iVar0)
    {
        if (fVar3 <= iVar0[iVar2])
        {
            return iVar2;
        }
        fVar3 = (fVar3 - iVar0[iVar2]);
        iVar2++;
    }
    return func_123();
}

int func_124(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4007
{
    int iVar0;
    int iVar1;
    
    switch (iParam0)
    {
        case 132:
        case 144:
        case 236:
            return 0;
        
        default:
    }
    iVar1 = func_125(iParam0);
    iVar0 = 0;
    while (iVar0 < 20)
    {
        if (iVar0 < Global_40001.f_1FB0)
        {
            if (Global_262A97.f_82[iVar0 /*2*/] == iVar1 && Global_262A97.f_82[iVar0 /*2*/].f_1 == func_122(iParam0, iParam1, iParam2, iParam3))
            {
                return 1;
            }
        }
        iVar0++;
    }
    return 0;
}

int func_125(int iParam0)//Position - 0x4086
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
        
        default:
    }
    return -1;
}

int func_126(int iParam0)//Position - 0x411A
{
    switch (iParam0)
    {
        case 0:
            return Global_40001.f_280A;
        
        case 1:
            return Global_40001.f_2B1B;
        
        case 6:
            return Global_40001.f_2B1C;
        
        case 7:
            return Global_40001.f_2B1D;
        
        case 8:
            return Global_40001.f_280B;
        
        case 3:
            return Global_40001.f_280C;
        
        case 4:
            return Global_40001.f_280D;
        
        case 2:
            return Global_40001.f_280E;
        
        case 5:
            return Global_40001.f_280F;
        
        case 9:
            return Global_40001.f_2B23;
        
        case 10:
            return Global_40001.f_2B1E;
        
        case 11:
            return Global_40001.f_2B20;
        
        case 12:
            return Global_40001.f_2B21;
        
        case 15:
            return Global_40001.f_2B25;
        
        case 16:
            return Global_40001.f_2B26;
        
        case 17:
            return Global_40001.f_2B27;
        
        case 18:
            return Global_40001.f_2B28;
        
        case 13:
            return Global_40001.f_2B1F;
        
        case 14:
            return Global_40001.f_2B22;
        
        default:
    }
    return 1;
}

void func_127()//Position - 0x425A
{
    int iVar0;
    
    if (func_43())
    {
        iVar0 = 0;
        while (iVar0 < 10)
        {
            if (Local_171.f_37[iVar0] == unk_0x2E40EEA43EF34BD6())
            {
                if (func_128(iVar0))
                {
                    if (!unk_0xA2BC31158C8CEFD2(Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_2, iVar0))
                    {
                        unk_0xA1E7A40E1F56E511(&(Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_2), iVar0);
                    }
                }
                else if (unk_0xA2BC31158C8CEFD2(Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_2, iVar0))
                {
                    unk_0x3B76114EC84D5812(&(Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_2), iVar0);
                }
            }
            else if (unk_0xA2BC31158C8CEFD2(Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_2, iVar0))
            {
                unk_0x3B76114EC84D5812(&(Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_2), iVar0);
            }
            iVar0++;
        }
    }
}

int func_128(int iParam0)//Position - 0x430B
{
    vector3 vVar0;
    var uVar1;
    
    if (func_39(iParam0, &vVar0, &uVar1))
    {
        if (func_129(vVar0, 10f, 1065353216, 1f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
        {
            return 1;
        }
    }
    return 0;
}

int func_129(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x4350
{
    Global_24B2CF.f_2 = 0;
    if (fParam1 > 0f)
    {
        if (unk_0xF57CE8FF35DF4458(vParam0, fParam1))
        {
            return 0;
        }
    }
    if (fParam2 > 0f)
    {
        if (unk_0x20DAA923606B772E(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || unk_0x20DAA923606B772E(vParam0, fParam2))
        {
            return 0;
        }
    }
    if (fParam3 > 0f)
    {
        if (unk_0x20E117647697470E(vParam0, fParam3, iParam16))
        {
            return 0;
        }
    }
    Global_24B2CF.f_2++;
    if (bParam11)
    {
        if (unk_0x44C423C5FBCB538D(vParam0, 2.5f) > 0)
        {
            return 0;
        }
    }
    Global_24B2CF.f_2++;
    if (fParam12 > 0f)
    {
        if (func_134(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
        {
            return 0;
        }
    }
    Global_24B2CF.f_2++;
    if (bParam6)
    {
        if (fParam4 > 0f)
        {
            if (func_130(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
            {
                return 0;
            }
        }
    }
    Global_24B2CF.f_2++;
    return 1;
}

int func_130(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x4461
{
    int iVar0;
    int iVar1;
    float fVar2;
    
    if (iParam2 && !bParam5)
    {
        if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
        {
            if (!unk_0x260395BA7F0C83CB())
            {
                fVar2 = fParam4;
                if (fParam7 > 0f)
                {
                    fVar2 = fParam7;
                }
                if (unk_0xD34AF93E9BCF12F0(func_132(unk_0x7C7787D2D7139A85()), vParam0, true) <= (fVar2 + fParam1))
                {
                    if (unk_0x93086679C0E859D8(vParam0, fParam1))
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
        if (func_12(iVar1, 1, 1))
        {
            if (!func_14(iVar1, 0) && unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar1))
            {
                if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x7C7787D2D7139A85()))
                {
                    if ((func_131(iVar1) || !bParam8) && !Global_24FD09[iVar1 /*421*/].f_103)
                    {
                        fVar2 = fParam4;
                        if (fParam7 > 0f)
                        {
                            if (!unk_0xC69A85EEB9CA3B95(iVar1) == -1)
                            {
                                if (unk_0xC69A85EEB9CA3B95(iVar1) == unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()))
                                {
                                    fVar2 = fParam7;
                                }
                            }
                        }
                        if (!bParam5)
                        {
                            if ((iParam3 || (iParam3 == 0 && unk_0xC69A85EEB9CA3B95(iVar1) != unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()))) || unk_0xC69A85EEB9CA3B95(iVar1) == -1)
                            {
                                if (unk_0xD34AF93E9BCF12F0(func_132(iVar1), vParam0, true) <= (fVar2 + fParam1))
                                {
                                    if (unk_0x08E2E9366FE03102(iVar1, vParam0, fParam1))
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                        else if (unk_0xC69A85EEB9CA3B95(iVar1) != iParam6 || unk_0xC69A85EEB9CA3B95(iVar1) == -1)
                        {
                            if (unk_0xD34AF93E9BCF12F0(func_132(iVar1), vParam0, true) <= (fVar2 + fParam1))
                            {
                                if (unk_0x08E2E9366FE03102(iVar1, vParam0, fParam1))
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

int func_131(int iParam0)//Position - 0x4619
{
    if (unk_0x0A21D8F32B9D5739(unk_0x23625FE58BACEBFD(iParam0)) || Global_24FD09[iParam0 /*421*/].f_F5)
    {
        return 1;
    }
    return 0;
}

Vector3 func_132(int iParam0)//Position - 0x4644
{
    int iVar0;
    
    iVar0 = iParam0;
    if ((func_64() && Global_1844AE[iVar0 /*871*/].f_34A) && !func_133(Global_1844AE[iVar0 /*871*/].f_34B))
    {
        return Global_1844AE[iVar0 /*871*/].f_34B;
    }
    return func_38(iParam0);
}

int func_133(vector3 vParam0)//Position - 0x4697
{
    if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
    {
        return 1;
    }
    return 0;
}

int func_134(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x46C1
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    while (iVar0 < 32)
    {
        iVar1 = iVar0;
        if ((iParam6 == 1 && unk_0x7C7787D2D7139A85() != iVar1) || iParam6 == 0)
        {
            if (func_12(iVar1, bParam2, bParam3))
            {
                if (unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iVar1))
                {
                    if (!bParam5 || (!unk_0x2BF5E63466422C38(unk_0x23625FE58BACEBFD(iVar1)) && func_131(iVar1)))
                    {
                        if ((!bParam4 || (bParam4 == 1 && unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) != unk_0xC69A85EEB9CA3B95(iVar1))) || unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1)
                        {
                            if (((unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85()) == -1 && uParam7) && bParam4) && func_135(iVar1))
                            {
                            }
                            else if (unk_0xD4B321D9096B01FC(unk_0x23625FE58BACEBFD(iVar1)))
                            {
                                if (unk_0xD34AF93E9BCF12F0(func_38(iVar1), vParam0, true) < fParam1)
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

int func_135(int iParam0)//Position - 0x47BD
{
    if (func_138(unk_0x7C7787D2D7139A85(), iParam0))
    {
        return 1;
    }
    Global_264397 = { func_137(iParam0) };
    if (unk_0xB8A6A83E8C303720(&Global_264397))
    {
        return 1;
    }
    if (func_136(unk_0x7C7787D2D7139A85(), iParam0))
    {
        return 1;
    }
    return 0;
}

int func_136(int iParam0, int iParam1)//Position - 0x4804
{
    int iVar0;
    
    iVar0 = func_88(iParam0);
    if (!iVar0 == func_102())
    {
        if (iVar0 == func_88(iParam1))
        {
            return 1;
        }
    }
    return 0;
}

struct<13> func_137(int iParam0)//Position - 0x482F
{
    struct<13> Var0;
    
    unk_0x229B5E28267D1B1F(iParam0, &Var0, 13);
    return Var0;
}

int func_138(int iParam0, int iParam1)//Position - 0x4846
{
    if (unk_0xFF6895C150414C31())
    {
        Global_264397 = { func_137(iParam0) };
        Global_2643A4 = { func_137(iParam1) };
        if (unk_0xF10E9BDC0C546560(&Global_264397))
        {
            if (unk_0xF10E9BDC0C546560(&Global_2643A4))
            {
                unk_0x4065D3D900AB253F(&Global_264351, 35, &Global_264397);
                unk_0x4065D3D900AB253F(&Global_264374, 35, &Global_2643A4);
                if (Global_264351 == Global_264374)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void func_139()//Position - 0x48B3
{
    float fVar0;
    float fVar1;
    
    func_685();
    func_684();
    if (func_682())
    {
        func_570();
    }
    if (!func_7(unk_0x7C7787D2D7139A85()))
    {
        if (func_546(0, 1, 1))
        {
            if (unk_0xA2BC31158C8CEFD2(iLocal_142, 6))
            {
                unk_0x3B76114EC84D5812(&iLocal_142, 6);
            }
            switch (Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_3)
            {
                case 0:
                    if (Local_171.f_25 < 2)
                    {
                        if (Local_171.f_25 > 0)
                        {
                            if (Local_171.f_3 != -1)
                            {
                                func_545(1);
                                func_544(1);
                            }
                        }
                    }
                    else
                    {
                        func_544(2);
                    }
                    break;
                
                case 1:
                    func_538(9);
                    if (Local_1538.f_8 == 0)
                    {
                        Local_1538.f_8 = unk_0x71EC776E812C6A0A();
                    }
                    if (Local_171.f_25 >= 2)
                    {
                        func_544(2);
                        Local_1538.f_9 = unk_0x71EC776E812C6A0A();
                    }
                    if (func_43())
                    {
                        func_538(0);
                    }
                    func_536((func_29() - func_537(&(Local_171.f_2B), 0, 0)));
                    func_533(func_535((func_29() - func_537(&(Local_171.f_2B), 0, 0)), 0), func_534(Local_171.f_3));
                    func_473(0, func_532());
                    func_447();
                    func_425();
                    if (func_424())
                    {
                        func_423();
                    }
                    break;
                
                case 2:
                    if (Local_171.f_25 > 2)
                    {
                        func_545(0);
                        fVar0 = 1f;
                        fVar1 = 1f;
                        if (func_422())
                        {
                            fVar0 = 0f;
                            fVar1 = 0.25f;
                        }
                        func_403(133, fVar0, fVar1, 0, 0, 0, 0);
                        func_402(Local_171.f_3, 1);
                        func_401(23, 1);
                        if (Local_1538.f_8 == 0)
                        {
                            Local_1538.f_8 = unk_0x71EC776E812C6A0A();
                        }
                        if (Local_1538.f_9 == 0)
                        {
                            Local_1538.f_9 = unk_0x71EC776E812C6A0A();
                        }
                        func_397();
                        unk_0x53B69E4722206E0C(1);
                        if (func_422())
                        {
                            unk_0xB7F4DA52DE3AAF24(0f);
                            unk_0x60F310C72311BCA8(0);
                        }
                        if (Local_171.f_3 == 14)
                        {
                            func_396(&vLocal_162);
                        }
                        func_395();
                        if (!func_7(unk_0x7C7787D2D7139A85()))
                        {
                            func_52(63, "AMCH_STARTED", func_394(Local_171.f_3), func_66(), -1, func_66(), 1, 0);
                            if (func_391("AMCH_WARN", func_393(Local_171.f_3), func_392(Local_171.f_3)))
                            {
                                unk_0x0D23E3918F7AF11B(1);
                            }
                        }
                        if (func_43())
                        {
                            func_374(678f, 794f, 206f, 8f, 0);
                            func_374(1911.3f, 4714.6f, 41.1f, 8f, 0);
                            func_374(688.5021f, 735.4581f, 181.296f, 8f, 0);
                        }
                        func_544(3);
                    }
                    break;
                
                case 3:
                    if (Local_171.f_25 > 3)
                    {
                        iLocal_144 = 0;
                        func_544(4);
                    }
                    else
                    {
                        if (!unk_0xA2BC31158C8CEFD2(Local_171.f_2, 1))
                        {
                            func_333();
                            func_330();
                            func_329();
                        }
                        if (func_328(0) && !func_20(0))
                        {
                            func_327();
                        }
                    }
                    if (func_422())
                    {
                        unk_0xDA1C9614D8C6EE61(unk_0x7C7787D2D7139A85());
                    }
                    func_326();
                    func_303();
                    func_570();
                    func_473(0, 1);
                    func_447();
                    func_425();
                    func_538(2);
                    func_538(5);
                    func_538(7);
                    break;
                
                case 4:
                    if (func_292(&uLocal_154, !unk_0xA2BC31158C8CEFD2(Local_171.f_2, 0)) || unk_0xA2BC31158C8CEFD2(Local_171.f_2, 0))
                    {
                        if (func_5(Local_171.f_3))
                        {
                            if (Local_171.f_25 == 5)
                            {
                                func_544(5);
                            }
                        }
                        else
                        {
                            func_544(6);
                        }
                    }
                    func_279();
                    func_171();
                    func_303();
                    func_570();
                    func_473(1, 1);
                    func_395();
                    break;
                
                case 5:
                    if (Local_171.f_25 > 5)
                    {
                        func_544(6);
                    }
                    break;
                
                case 6:
                    break;
            }
        }
        else
        {
            func_166();
        }
    }
    else
    {
        func_166();
    }
    func_146();
    func_141();
    func_140();
}

void func_140()//Position - 0x4C42
{
    struct<2> Var0;
    int iVar1;
    
    if (func_43())
    {
        Var0 = { Local_171.f_43[iLocal_161 /*2*/] };
        if (unk_0x9C625F4590C97F13(Var0.f_1))
        {
            iVar1 = unk_0x40237B62400B4BCC(Var0.f_1);
            if (unk_0x77FF1FAF6F41CA71(iVar1))
            {
                if (!unk_0xD960230552BC4165(iVar1, 0))
                {
                    unk_0xF25956700ADFD77F(&iVar1);
                }
            }
        }
        iLocal_161++;
        if (iLocal_161 >= 10)
        {
            iLocal_161 = 0;
            iLocal_170 = iLocal_169;
            iLocal_169 = 0;
        }
    }
}

void func_141()//Position - 0x4CAE
{
    if (Local_171.f_25 == 5)
    {
        if (unk_0x9C625F4590C97F13(Local_171.f_43[iLocal_161 /*2*/].f_1))
        {
            if (!unk_0xF4B969E0807E76C7(unk_0x40237B62400B4BCC(Local_171.f_43[iLocal_161 /*2*/].f_1), 0))
            {
                if (!unk_0xA2BC31158C8CEFD2(iLocal_167, iLocal_161))
                {
                    unk_0xA1E7A40E1F56E511(&iLocal_167, iLocal_161);
                    iLocal_168[iLocal_161] = unk_0x04B8CCFB93858A27();
                    unk_0x5F5C6A264C2CA8B1(iLocal_168[iLocal_161], "Explosion_Countdown", unk_0x40237B62400B4BCC(Local_171.f_43[iLocal_161 /*2*/].f_1), "GTAO_FM_Events_Soundset", false, 0);
                    unk_0xEC93A4D791E42F8E(iLocal_168[iLocal_161], "Time", 30f);
                }
                if ((30000 - func_537(&(Local_171.f_2D), 0, 0)) >= 0)
                {
                    if (unk_0x95ED3BD0F52D542A(unk_0x0FA8183DAD2B3203(), unk_0x40237B62400B4BCC(Local_171.f_43[iLocal_161 /*2*/].f_1), 0))
                    {
                        func_538(1);
                        iLocal_169 = 1;
                    }
                }
                else if (unk_0xF42AC9E0924DC59B(Local_171.f_43[iLocal_161 /*2*/].f_1))
                {
                    unk_0x7FF38BFB318C1A86(unk_0x40237B62400B4BCC(Local_171.f_43[iLocal_161 /*2*/].f_1));
                    unk_0x47918C34E2805B9C(unk_0x40237B62400B4BCC(Local_171.f_43[iLocal_161 /*2*/].f_1), 1, 0, -1);
                }
            }
            else if (unk_0xA2BC31158C8CEFD2(iLocal_167, iLocal_161) && !unk_0xDE3C2FB26058823A(iLocal_168[iLocal_161]))
            {
                unk_0xCFF6AB47B7B014FF(iLocal_168[iLocal_161]);
            }
        }
        if (iLocal_170)
        {
            if (!func_100(unk_0x7C7787D2D7139A85()))
            {
                func_143(func_535((30000 - func_537(&(Local_171.f_2D), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
                func_142();
            }
        }
    }
}

void func_142()//Position - 0x4E30
{
    Global_14FB1E.f_455 = 1;
}

void func_143(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x4E40
{
    int iVar0;
    int iVar1;
    
    iVar0 = -1;
    iVar1 = 0;
    while (iVar1 <= 9)
    {
        if (iVar0 == -1)
        {
            if (func_145(7, iVar1) == 0)
            {
                iVar0 = iVar1;
            }
        }
        iVar1++;
    }
    if (iVar0 > -1)
    {
        Global_14FB1E.f_1 = 1;
        func_144(7, iVar0);
        Global_14FB1E.f_1165[iVar0] = iParam0;
        StringCopy(&(Global_14FB1E.f_1165.f_B[iVar0 /*16*/]), sParam1, 64);
        Global_14FB1E.f_1165.f_AC[iVar0] = iParam2;
        Global_14FB1E.f_1165.f_D8[iVar0] = iParam3;
        Global_14FB1E.f_1165.f_B7[iVar0] = iParam4;
        Global_14FB1E.f_1165.f_C2[iVar0] = iParam5;
        Global_14FB1E.f_1165.f_F9[iVar0] = iParam6;
        Global_14FB1E.f_1165.f_104[iVar0] = iParam7;
        Global_14FB1E.f_1165.f_CD[iVar0] = iParam8;
        Global_14FB1E.f_1165.f_13A[iVar0] = iParam9;
        Global_14FB1E.f_1165.f_145[iVar0] = iParam10;
        Global_14FB1E.f_1165.f_165[iVar0] = iParam11;
        Global_14FB1E.f_1165.f_EE[iVar0] = iParam12;
        Global_14FB1E.f_1165.f_10F[iVar0] = iParam13;
        Global_14FB1E.f_1165.f_170[iVar0] = iParam14;
        Global_14FB1E.f_1165.f_17B[iVar0] = iParam15;
        Global_14FB1E.f_1165.f_186[iVar0] = iParam16;
        Global_14FB1E.f_1165.f_E3[iVar0] = iParam17;
    }
}

void func_144(int iParam0, int iParam1)//Position - 0x4F9D
{
    unk_0xA1E7A40E1F56E511(&(Global_14FB1E.f_1828[iParam0]), iParam1);
}

bool func_145(int iParam0, int iParam1)//Position - 0x4FB6
{
    return unk_0xA2BC31158C8CEFD2(Global_14FB1E.f_1828[iParam0], iParam1);
}

void func_146()//Position - 0x4FCF
{
    if (((func_12(unk_0x7C7787D2D7139A85(), 1, 1) && !func_7(unk_0x7C7787D2D7139A85())) && !func_162(unk_0x7C7787D2D7139A85())) && func_546(0, 1, 1))
    {
        if (Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_3 == 1)
        {
            func_159(func_161(Local_171.f_3), func_393(Local_171.f_3), 0, 0);
        }
        else if (Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_3 == 3)
        {
            if (!unk_0xA2BC31158C8CEFD2(iLocal_142, 10))
            {
                func_147(func_392(Local_171.f_3), 0);
            }
            else
            {
                func_147("AMCH_OBJLAND", 0);
            }
        }
        else
        {
            func_395();
        }
    }
    else
    {
        func_395();
    }
}

void func_147(char* sParam0, bool bParam1)//Position - 0x507A
{
    if (unk_0x9591DE0F00127F2A(sParam0))
    {
        return;
    }
    if (unk_0xB9A31E6892C3D2C2(sParam0) > 23)
    {
        return;
    }
    if (func_157(sParam0))
    {
        return;
    }
    func_151();
    Global_140749 = 0;
    StringCopy(&(Global_140749.f_1), unk_0x0037AFCBDC61F351(), 32);
    Global_140749.f_9 = unk_0xA8C462EF7D9DC564(&(Global_140749.f_1));
    StringCopy(&(Global_140749.f_C), sParam0, 16);
    func_150();
    func_149(bParam1);
    func_148();
}

void func_148()//Position - 0x50E5
{
    unk_0xA1E7A40E1F56E511(&(Global_140749.f_3B), 1);
}

void func_149(bool bParam0)//Position - 0x50F8
{
    if (bParam0)
    {
        unk_0xA1E7A40E1F56E511(&(Global_140749.f_3B), 0);
        return;
    }
    unk_0x3B76114EC84D5812(&(Global_140749.f_3B), 0);
}

void func_150()//Position - 0x511E
{
    Global_140749.f_A = unk_0x067A0219B2815DA1(unk_0x169A8AC9F93C2727(), 86400000);
    Global_140749.f_B = unk_0x169A8AC9F93C2727();
}

void func_151()//Position - 0x5143
{
    func_153();
    func_152(0);
}

void func_152(bool bParam0)//Position - 0x5154
{
    bool bVar0;
    
    bVar0 = unk_0x393E9918BC37548A();
    Global_140749 = 20;
    StringCopy(&(Global_140749.f_1), "", 32);
    Global_140749.f_9 = 0;
    if (bVar0)
    {
        Global_140749.f_A = unk_0x169A8AC9F93C2727();
        Global_140749.f_B = unk_0x169A8AC9F93C2727();
    }
    StringCopy(&(Global_140749.f_C), "", 16);
    StringCopy(&(Global_140749.f_10), "", 64);
    StringCopy(&(Global_140749.f_20), "", 64);
    Global_140749.f_34 = 0;
    Global_140749.f_35 = 0;
    Global_140749.f_36 = 0;
    Global_140749.f_37 = -1;
    Global_140749.f_38 = 0;
    Global_140749.f_3B = 0;
    if (bParam0)
    {
        return;
    }
}

void func_153()//Position - 0x51E6
{
    if (!func_156())
    {
    }
    if (func_155())
    {
        unk_0x8C952E99D90780F7(&(Global_140749.f_C));
        func_154();
        unk_0xCC56AD222DA9A8C1();
    }
}

void func_154()//Position - 0x520F
{
    switch (Global_140749)
    {
        case 20:
            return;
        
        case 0:
            return;
        
        case 1:
            unk_0x6A8B3CC08A759F44(Global_140749.f_34);
            return;
        
        case 2:
            unk_0x6A8B3CC08A759F44(Global_140749.f_34);
            unk_0x6A8B3CC08A759F44(Global_140749.f_35);
            return;
        
        case 3:
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_10));
            return;
        
        case 4:
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_10));
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_20));
            return;
        
        case 5:
            unk_0xA89C789CC9FEF523(&(Global_140749.f_10));
            return;
        
        case 6:
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_38);
            unk_0xA89C789CC9FEF523(&(Global_140749.f_10));
            return;
        
        case 7:
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_10));
            return;
        
        case 8:
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_38);
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_10));
            return;
        
        case 9:
            unk_0x2F3DFF2E75DFEA9B(&(Global_140749.f_10));
            return;
        
        case 10:
            unk_0xA89C789CC9FEF523(&(Global_140749.f_10));
            unk_0xA89C789CC9FEF523(&(Global_140749.f_20));
            return;
        
        case 12:
            unk_0xA89C789CC9FEF523(&(Global_140749.f_10));
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_20));
            return;
        
        case 13:
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_38);
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_10));
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_39);
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_20));
            return;
        
        case 11:
            unk_0x2F3DFF2E75DFEA9B(&(Global_140749.f_10));
            return;
        
        case 14:
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_38);
            unk_0xA89C789CC9FEF523(&(Global_140749.f_10));
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_38);
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_20));
            return;
        
        case 15:
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_38);
            unk_0xA89C789CC9FEF523(&(Global_140749.f_10));
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_39);
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_20));
            return;
        
        case 17:
            unk_0xA89C789CC9FEF523(&(Global_140749.f_10));
            unk_0xA89C789CC9FEF523(&(Global_140749.f_20));
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_38);
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_30));
            return;
        
        case 16:
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_38);
            unk_0xA89C789CC9FEF523(&(Global_140749.f_10));
            return;
        
        case 19:
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_38);
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_10));
            return;
        
        case 18:
            unk_0xA89C789CC9FEF523(&(Global_140749.f_10));
            unk_0xEB6F6B8EBD6B6648(Global_140749.f_38);
            unk_0x0AC9F8E1AFCEC860(&(Global_140749.f_30));
            unk_0xA89C789CC9FEF523(&(Global_140749.f_20));
            return;
        
        default:
    }
}

int func_155()//Position - 0x5481
{
    if (Global_140749 == 20)
    {
        return 0;
    }
    return 1;
}

int func_156()//Position - 0x5497
{
    if (!func_155())
    {
        return 0;
    }
    unk_0xC1A9801A23F32F8F(&(Global_140749.f_C));
    func_154();
    return unk_0xCDD0AB887E3F6532();
}

bool func_157(char* sParam0)//Position - 0x54BD
{
    if (!func_155())
    {
        return 0;
    }
    if (Global_140749 == 11)
    {
        return func_158(sParam0);
    }
    if (unk_0x9591DE0F00127F2A(sParam0))
    {
        return 0;
    }
    return unk_0xA8C462EF7D9DC564(sParam0) == unk_0xA8C462EF7D9DC564(&(Global_140749.f_C));
}

bool func_158(char* sParam0)//Position - 0x5501
{
    if (!func_155())
    {
        return 0;
    }
    if (unk_0x9591DE0F00127F2A(sParam0))
    {
        return 0;
    }
    return unk_0xA8C462EF7D9DC564(sParam0) == unk_0xA8C462EF7D9DC564(&(Global_140749.f_10));
}

int func_159(char* sParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x5533
{
    if (unk_0x9591DE0F00127F2A(sParam0))
    {
        return 0;
    }
    if (unk_0xB9A31E6892C3D2C2(sParam0) > 23)
    {
        return 0;
    }
    if (unk_0x9591DE0F00127F2A(sParam1))
    {
        return 0;
    }
    if (func_160(sParam0, sParam1) && Global_140749.f_38 == Global_140749.f_3A)
    {
        return 0;
    }
    func_151();
    Global_140749 = 3;
    StringCopy(&(Global_140749.f_1), unk_0x0037AFCBDC61F351(), 32);
    Global_140749.f_9 = unk_0xA8C462EF7D9DC564(&(Global_140749.f_1));
    StringCopy(&(Global_140749.f_C), sParam0, 16);
    StringCopy(&(Global_140749.f_10), sParam1, 64);
    Global_140749.f_3A = iParam3;
    Global_140749.f_38 = iParam3;
    func_150();
    func_149(bParam2);
    func_148();
    return 1;
}

bool func_160(char* sParam0, char* sParam1)//Position - 0x55DD
{
    if (!func_155())
    {
        return 0;
    }
    if (unk_0x9591DE0F00127F2A(sParam0))
    {
        return 0;
    }
    if (unk_0x9591DE0F00127F2A(sParam1))
    {
        return 0;
    }
    if (!unk_0xA8C462EF7D9DC564(sParam0) == unk_0xA8C462EF7D9DC564(&(Global_140749.f_C)))
    {
        return 0;
    }
    return unk_0xA8C462EF7D9DC564(sParam1) == unk_0xA8C462EF7D9DC564(&(Global_140749.f_10));
}

char* func_161(int iParam0)//Position - 0x5635
{
    int iVar0;
    int iVar1;
    
    if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
    {
        switch (iParam0)
        {
            case 0:
            case 2:
            case 5:
            case 8:
            case 13:
                if (((((!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) || unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203())) || unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203())) || unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203())) || unk_0x15B60611100CF0E3(unk_0x0FA8183DAD2B3203())) || unk_0xAC731E4610575F5E(unk_0x0FA8183DAD2B3203()))
                {
                    return "AMCH_PREPLAND";
                }
                break;
            
            case 9:
                if ((((((!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) || unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203())) || unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203())) || unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203())) || unk_0x15B60611100CF0E3(unk_0x0FA8183DAD2B3203())) || unk_0xAC731E4610575F5E(unk_0x0FA8183DAD2B3203())) || unk_0xFE3D760E77944F94(unk_0x0FA8183DAD2B3203()))
                {
                    return "AMCH_PREPCAR";
                }
                break;
            
            case 3:
            case 4:
                if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
                {
                    return "AMCH_PREPBIKE";
                }
                else
                {
                    iVar0 = unk_0xA4BF70099C074BA0(unk_0x0FA8183DAD2B3203());
                    iVar1 = unk_0x7F375072508F738F(iVar0);
                    if (unk_0xF39FF829579D1A21(iVar1) && unk_0xA03B0E2641CE8F87(iVar1))
                    {
                        return "AMCH_PREPBIKE";
                    }
                }
                break;
            
            case 12:
                if (!unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203()))
                {
                    return "AMCH_PREPPLANE";
                }
                break;
            
            case 1:
            case 6:
            case 11:
            case 14:
                if (!unk_0x2F879C0BDBED0194(unk_0x0FA8183DAD2B3203()))
                {
                    return "AMCH_PREPAIR";
                }
                break;
            
            case 18:
                if ((!unk_0x980642D66B4A4C61(unk_0x0FA8183DAD2B3203(), joaat("weapon_sniperrifle"), 0) && !unk_0x980642D66B4A4C61(unk_0x0FA8183DAD2B3203(), joaat("weapon_heavysniper"), 0)) && !unk_0x980642D66B4A4C61(unk_0x0FA8183DAD2B3203(), joaat("weapon_marksmanrifle"), 0))
                {
                    return "AMCH_PREPSNIPER";
                }
                break;
            
            case 16:
                if (((((!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) || unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203())) || unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203())) || unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203())) || unk_0x15B60611100CF0E3(unk_0x0FA8183DAD2B3203())) || unk_0xAC731E4610575F5E(unk_0x0FA8183DAD2B3203()))
                {
                    return "AMCH_PREPLAND";
                }
                break;
            }
    }
    return "AMCH_PREPARE";
}

bool func_162(int iParam0)//Position - 0x5883
{
    if (iParam0 == unk_0x7C7787D2D7139A85())
    {
        if (((func_165() && !func_164()) || func_163(unk_0x7C7787D2D7139A85(), 21)) || func_163(unk_0x7C7787D2D7139A85(), 25))
        {
            return 1;
        }
        if (func_47(&(Global_1806F7.f_D)))
        {
            if (!func_1(&(Global_1806F7.f_D), Global_40001.f_E, 0))
            {
                return 1;
            }
            func_46(&(Global_1806F7.f_D));
        }
    }
    else if (unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_1, 10))
    {
        return 1;
    }
    return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_1, 9);
}

bool func_163(int iParam0, int iParam1)//Position - 0x5925
{
    return unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_D0, iParam1);
}

bool func_164()//Position - 0x593E
{
    return Global_1406A1.f_1;
}

bool func_165()//Position - 0x594C
{
    return Global_1406A1;
}

void func_166()//Position - 0x5958
{
    if (!unk_0xA2BC31158C8CEFD2(iLocal_142, 6))
    {
        unk_0x002BEFCA6CC9B4F5();
        func_473(1, 1);
        unk_0xCFF6AB47B7B014FF(iLocal_150);
        unk_0x3B76114EC84D5812(&iLocal_142, 4);
        func_170();
        func_168();
        unk_0xD488560A9EFC8231(0f, 0, 21);
        unk_0xA1E7A40E1F56E511(&iLocal_142, 6);
        func_167();
    }
}

void func_167()//Position - 0x59A1
{
    Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_7 = 0;
}

void func_168()//Position - 0x59B7
{
    if (Global_24D546.f_6 == unk_0x429EE9FF15BB9033())
    {
        func_169();
    }
}

void func_169()//Position - 0x59D0
{
    struct<28> Var0;
    
    if (unk_0xAB2A82A2838B61B7(Global_24D546.f_6))
    {
        if (!Global_24D546.f_6 == unk_0x429EE9FF15BB9033())
        {
            return;
        }
    }
    Var0.f_7 = 1;
    Var0.f_8 = 1;
    Var0.f_15 = 1115815936;
    Var0.f_1B = -1082130432;
    Global_24D546 = { Var0 };
    Global_24D546.f_6 = -1;
}

void func_170()//Position - 0x5A2D
{
    struct<6> Var0;
    
    if (Global_24B2CF.f_1E5.f_1 == unk_0x429EE9FF15BB9033())
    {
        Global_24B2CF.f_1E5 = { Var0 };
    }
}

void func_171()//Position - 0x5A52
{
    int iVar0;
    int iVar1;
    var uVar2;
    var uVar3;
    
    if (!unk_0xA2BC31158C8CEFD2(Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_1, 0))
    {
        if (func_7(unk_0x7C7787D2D7139A85()))
        {
            unk_0xA1E7A40E1F56E511(&(Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_1), 0);
            return;
        }
        if (func_162(unk_0x7C7787D2D7139A85()))
        {
            unk_0xA1E7A40E1F56E511(&(Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_1), 0);
            return;
        }
        func_240(&iVar0, &iVar1);
        if (iVar0 > 0)
        {
            Local_1538.f_6 = (Local_1538.f_6 + iVar0);
            if (!Global_40001.f_2CEC)
            {
                func_239(10, Local_1538.f_6);
            }
            Global_258E0F = iVar0;
            if (func_238())
            {
                func_226(-1468524125, iVar0, &uVar3, 0, 1, 0);
            }
            else
            {
                unk_0xD9E4BA7E1787178D(iVar0, "AM_CHALLENGES", &uVar2);
            }
        }
        if (iVar1 > 0)
        {
            Local_1538.f_7 = (Local_1538.f_7 + iVar1);
            func_225();
            func_172(0, unk_0x0FA8183DAD2B3203(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
        }
        unk_0xA1E7A40E1F56E511(&(Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_1), 0);
    }
}

int func_172(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x5B4C
{
    return func_173(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_173(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x5B6E
{
    int iVar0;
    int iVar1;
    
    iVar0 = func_183(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
    if (iParam4 == -592022605 || iParam4 == -1915191729)
    {
        if (unk_0xD4B321D9096B01FC(iParam1))
        {
            if (unk_0x4625051E51BA911B(iParam1))
            {
                iVar1 = unk_0x3D464779B732760F(iParam1);
                func_179(unk_0x0E516C24C87F5D0C(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
            }
        }
    }
    else
    {
        func_174(iParam1, iVar0, sParam8, iParam10);
    }
    return iVar0;
}

void func_174(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x5BE7
{
    vector3 vVar0;
    
    vVar0 = { func_177(iParam0, 1) };
    if (iParam0 == func_176(unk_0x0FA8183DAD2B3203()))
    {
        func_175(1);
    }
    func_179(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_175(int iParam0)//Position - 0x5C1B
{
    Global_2531AD.f_762 = iParam0;
}

int func_176(int iParam0)//Position - 0x5C2C
{
    return iParam0;
}

Vector3 func_177(int iParam0, bool bParam1)//Position - 0x5C36
{
    vector3 vVar0;
    vector3 vVar1;
    float fVar2;
    vector3 vVar3;
    vector3 vVar4;
    float fVar5;
    
    if (unk_0x80022561D13932C8())
    {
        vVar1 = { unk_0x521C180E8FDEB978(2) };
    }
    if (iParam0 == func_178(unk_0x0FA8183DAD2B3203()) && unk_0x328DC5757076B0D5(unk_0x18638AA8DFAAE787()) == 4)
    {
        vVar0 = { unk_0xC12F91346EA13947(iParam0, 0f, 8f, -0.2f) };
    }
    else
    {
        vVar0 = { unk_0xACE5E491FC1B0D37(iParam0, 0) };
    }
    fVar2 = 0f;
    if (!unk_0xF4B969E0807E76C7(iParam0, 0))
    {
        fVar2 = unk_0xD2809C7F7FD79247(iParam0);
        if (unk_0x328DC5757076B0D5(unk_0x18638AA8DFAAE787()) == 4)
        {
            fVar2 = vVar1.z;
        }
    }
    unk_0xB10397B050DB322E(unk_0x7F375072508F738F(iParam0), &vVar3, &vVar4);
    if (bParam1)
    {
        fVar5 = (vVar4.z + 0.18f);
    }
    else
    {
        fVar5 = (vVar3.z + 0.18f);
    }
    vVar0 = { unk_0x16DECC52D9360F1E(vVar0, fVar2, 0f, 0f, fVar5) };
    return vVar0;
}

int func_178(int iParam0)//Position - 0x5CFA
{
    return iParam0;
}

void func_179(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x5D04
{
    int iVar0;
    int iVar1;
    
    if (iParam1 != 0)
    {
        iVar1 = -1;
        iVar0 = 0;
        while (iVar0 < 20)
        {
            if (Global_2531AD.f_509[iVar0 /*30*/].f_6 == 0 || Global_2531AD.f_509[iVar0 /*30*/].f_6 == 7)
            {
                iVar1 = iVar0;
                iVar0 = 20;
            }
            iVar0++;
        }
        if (iVar1 != -1)
        {
            Global_2531AD.f_509[iVar1 /*30*/] = { vParam0 };
            Global_2531AD.f_509[iVar1 /*30*/].f_6 = 1;
            Global_2531AD.f_509[iVar1 /*30*/].f_4 = func_182(Global_2531AD.f_509[iVar1 /*30*/], &Global_14063D, &Global_14063E);
            Global_2531AD.f_509[iVar1 /*30*/].f_7 = unk_0x169A8AC9F93C2727();
            Global_2531AD.f_509[iVar1 /*30*/].f_3 = iParam1;
            Global_2531AD.f_509[iVar1 /*30*/].f_8 = iParam2;
            Global_2531AD.f_509[iVar1 /*30*/].f_9 = func_181();
            Global_2531AD.f_509[iVar1 /*30*/].f_A = func_180();
            StringCopy(&(Global_2531AD.f_509[iVar1 /*30*/].f_16), sParam3, 16);
            Global_2531AD.f_509[iVar1 /*30*/].f_1A = unk_0x067A0219B2815DA1(unk_0x169A8AC9F93C2727(), iParam4);
        }
    }
}

int func_180()//Position - 0x5E1B
{
    if (Global_2531AD.f_762)
    {
        Global_2531AD.f_762 = 0;
        return 1;
    }
    Global_2531AD.f_762 = 0;
    return 0;
}

var func_181()//Position - 0x5E45
{
    var uVar0;
    
    uVar0 = Global_2531AD.f_764;
    Global_2531AD.f_764 = 1;
    return uVar0;
}

float func_182(vector3 vParam0, var uParam1, var uParam2)//Position - 0x5E60
{
    float fVar0;
    float fVar1;
    float fVar2;
    float fVar3;
    
    fVar0 = unk_0xD34AF93E9BCF12F0(unk_0xEB9451CD6AC51B04(), vParam0, true);
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

var func_183(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x5EF9
{
    var uVar0;
    
    uVar0 = func_184(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
    return uVar0;
}

int func_184(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x5F1C
{
    float fVar0;
    int iVar1;
    int iVar2;
    float fVar3;
    
    if (iParam1 == 0)
    {
        if (func_224(unk_0x7C7787D2D7139A85()) || func_223(unk_0x7C7787D2D7139A85()))
        {
            if (Global_40001.f_25A3 > 16000)
            {
                iVar2 = 16000;
            }
            else
            {
                iVar2 = Global_40001.f_25A3;
            }
        }
        else if (func_221() || func_218(unk_0x7C7787D2D7139A85()))
        {
            if (Global_40001.f_58EA > 16000)
            {
                iVar2 = 16000;
            }
            else
            {
                iVar2 = Global_40001.f_58EA;
            }
        }
        else if (func_92())
        {
            if (Global_40001.f_6CEA > 16000)
            {
                iVar2 = 16000;
            }
            else
            {
                iVar2 = Global_40001.f_6CEA;
            }
        }
        else if (Global_40001.f_19EB > 10000)
        {
            iVar2 = 10000;
        }
        else
        {
            iVar2 = Global_40001.f_19EB;
        }
    }
    if (func_217(sParam2))
    {
    }
    if (func_216())
    {
        if (iParam4 < 1)
        {
            iParam4 = 1;
        }
        iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
        iVar1 = func_214(iVar1);
        fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
        iVar1 = SYSTEM::ROUND(fVar3);
        if (bParam10)
        {
            iVar1 = func_213(&iVar1);
        }
        if (iParam1 == 0)
        {
            switch (iParam0)
            {
                case 2:
                    func_211(0, &iVar1);
                    break;
                
                case 3:
                    func_211(1, &iVar1);
                    break;
                
                case 1:
                    func_209(&iVar1);
                    break;
                }
        }
        if (iVar1 > Global_19BD7B)
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
            func_206(1164, iVar1, -1);
            if (iParam1 == 0)
            {
                func_194((func_204(unk_0x7C7787D2D7139A85(), 1) + iVar1), iParam9, 0);
                if (iParam8 == 0)
                {
                }
                if (iParam9 == 0)
                {
                }
                unk_0x9DF8487FF4AABAFE(iVar1, iParam8, iParam9);
                if (Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_27.f_2 != -1)
                {
                    func_206(1165, iVar1, -1);
                }
                if (iParam1 == 0)
                {
                    func_189(iVar1);
                }
            }
        }
        if (bParam5)
        {
        }
        if (bParam7)
        {
            if (iParam6 == -1)
            {
                func_185((func_187(unk_0x7C7787D2D7139A85()) + iVar1));
            }
            else
            {
                func_185((func_187(unk_0x7C7787D2D7139A85()) + iParam6));
            }
        }
        if (bParam7)
        {
        }
    }
    return iVar1;
}

void func_185(int iParam0)//Position - 0x6149
{
    if (func_216())
    {
        Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_D3.f_5 = iParam0;
        func_186(joaat("mpply_globalxp"), iParam0);
    }
}

void func_186(int iParam0, int iParam1)//Position - 0x6174
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != 0)
    {
        unk_0x41410A69AD49AFCD(iVar0, iParam1, 1);
    }
}

int func_187(int iParam0)//Position - 0x6190
{
    if (iParam0 > -1)
    {
        if (func_12(iParam0, 0, 1))
        {
            if (iParam0 == unk_0x7C7787D2D7139A85())
            {
                return func_188(joaat("mpply_globalxp"));
            }
            else
            {
                return Global_1844AE[iParam0 /*871*/].f_D3.f_5;
            }
        }
        else
        {
            return func_188(joaat("mpply_globalxp"));
        }
    }
    return 0;
}

int func_188(int iParam0)//Position - 0x61E1
{
    int iVar0;
    var uVar1;
    
    iVar0 = iParam0;
    if (unk_0x367DA79FE620711B(iVar0, &uVar1, -1))
    {
        return uVar1;
    }
    return 0;
}

void func_189(int iParam0)//Position - 0x61FF
{
    struct<13> Var0;
    int iVar1;
    
    Var0 = { func_137(unk_0x7C7787D2D7139A85()) };
    if (unk_0xFF6895C150414C31())
    {
        if (unk_0xF10E9BDC0C546560(&Var0))
        {
            iVar1 = func_192(func_193(&Var0));
            if (iVar1 == 0)
            {
                func_191(&Global_151EC6, iParam0);
                func_190(joaat("mpply_crew_local_xp_0"), Global_151EC6);
            }
            else if (iVar1 == 1)
            {
                func_191(&Global_151EC7, iParam0);
                func_190(joaat("mpply_crew_local_xp_1"), Global_151EC7);
            }
            else if (iVar1 == 2)
            {
                func_191(&Global_151EC8, iParam0);
                func_190(joaat("mpply_crew_local_xp_2"), Global_151EC8);
            }
            else if (iVar1 == 3)
            {
                func_191(&Global_151EC9, iParam0);
                func_190(joaat("mpply_crew_local_xp_3"), Global_151EC9);
            }
            else if (iVar1 == 4)
            {
                func_191(&Global_151ECA, iParam0);
                func_190(joaat("mpply_crew_local_xp_4"), Global_151ECA);
            }
        }
    }
}

void func_190(int iParam0, int iParam1)//Position - 0x62D3
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != 0)
    {
        unk_0x41410A69AD49AFCD(iVar0, iParam1, 1);
    }
    switch (iParam0)
    {
        case joaat("mpply_crew_0_id"):
            Global_151EC1 = iParam1;
            break;
        
        case joaat("mpply_crew_1_id"):
            Global_151EC3 = iParam1;
            break;
        
        case joaat("mpply_crew_2_id"):
            Global_151EC3 = iParam1;
            break;
        
        case joaat("mpply_crew_3_id"):
            Global_151EC4 = iParam1;
            break;
        
        case joaat("mpply_crew_4_id"):
            Global_151EC5 = iParam1;
            break;
        
        case joaat("mpply_crew_local_xp_0"):
            Global_151EC6 = iParam1;
            break;
        
        case joaat("mpply_crew_local_xp_1"):
            Global_151EC7 = iParam1;
            break;
        
        case joaat("mpply_crew_local_xp_2"):
            Global_151EC8 = iParam1;
            break;
        
        case joaat("mpply_crew_local_xp_3"):
            Global_151EC9 = iParam1;
            break;
        
        case joaat("mpply_crew_local_xp_4"):
            Global_151ECA = iParam1;
            break;
        
        case joaat("mpply_became_cheater_num"):
            Global_151ECB = iParam1;
            break;
        
        case joaat("mpply_friendly"):
            Global_151ECC = iParam1;
            break;
        
        case joaat("mpply_offensive_language"):
            Global_151ECD = iParam1;
            break;
        
        case joaat("mpply_griefing"):
            Global_151ECE = iParam1;
            break;
        
        case joaat("mpply_helpful"):
            Global_151ECF = iParam1;
            break;
        
        case joaat("mpply_offensive_tagplate"):
            Global_151ED0 = iParam1;
            break;
        
        case joaat("mpply_offensive_ugc"):
            Global_151ED1 = iParam1;
            break;
        
        default:
            break;
    }
}

void func_191(var uParam0, int iParam1)//Position - 0x63F8
{
    *uParam0 = (*uParam0 + iParam1);
}

int func_192(int iParam0)//Position - 0x6409
{
    if (iParam0 == Global_151EC1)
    {
        return 0;
    }
    else if (iParam0 == Global_151EC2)
    {
        return 1;
    }
    else if (iParam0 == Global_151EC3)
    {
        return 2;
    }
    else if (iParam0 == Global_151EC4)
    {
        return 3;
    }
    else if (iParam0 == Global_151EC5)
    {
        return 4;
    }
    else
    {
        return -1;
    }
    return -1;
}

int func_193(var uParam0)//Position - 0x6466
{
    if (unk_0xFF6895C150414C31())
    {
        if (unk_0xF10E9BDC0C546560(uParam0))
        {
            return Global_25852C;
        }
    }
    return Global_25852C;
}

void func_194(int iParam0, int iParam1, int iParam2)//Position - 0x6489
{
    if (func_216())
    {
        if (iParam0 >= 1787576850)
        {
            iParam0 = 1787576850;
        }
        if (Global_40001.f_2583 == 0 && iParam1 != -1076930708)
        {
            if (iParam2 == 0)
            {
                if (iParam0 < Global_151F57[func_203(-1)])
                {
                    unk_0x9DF8487FF4AABAFE(iParam0, -523908350, iParam1);
                    return;
                }
                else if (iParam0 == Global_151F57[func_203(-1)])
                {
                    return;
                }
            }
        }
        if (Global_40001.f_2582 == 0)
        {
            if (iParam0 == 0)
            {
                unk_0x9DF8487FF4AABAFE(iParam0, -1158693853, -1345423847);
                if (iParam2 == 0)
                {
                    return;
                }
            }
        }
        if (Global_40001.f_2582 == 0)
        {
            if (iParam0 < 0)
            {
                unk_0x9DF8487FF4AABAFE(iParam0, -1586921397, iParam1);
                return;
            }
        }
        if (func_202(unk_0x7C7787D2D7139A85()))
        {
            Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_D3.f_1 = iParam0;
            Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_D3.f_6 = func_200(iParam0, 1);
        }
        func_199(639, iParam0, -1, 1);
        func_198(640, func_200(iParam0, 1), -1, 1, 0);
        Global_151F57[func_203(-1)] = iParam0;
        func_195(-1109644434, 7, 0);
    }
}

void func_195(int iParam0, int iParam1, int iParam2)//Position - 0x65AF
{
    int iVar0;
    
    if (func_197(iParam1, iParam2))
    {
        iVar0 = func_196();
        Global_2584FC[iVar0] = iParam1;
        Global_258507[iVar0] = iParam0;
    }
}

int func_196()//Position - 0x65DC
{
    int iVar0;
    int iVar1;
    
    iVar0 = 9;
    iVar1 = 0;
    while (iVar1 <= 9)
    {
        if (Global_2584FC[iVar1] == 0)
        {
            iVar0 = iVar1;
            iVar1 = 10;
        }
        iVar1++;
    }
    return iVar0;
}

int func_197(int iParam0, var uParam1)//Position - 0x6611
{
    if (Global_14085D)
    {
        return 0;
    }
    if (iParam0 == 22)
    {
        return 1;
    }
    if ((((((((uParam1 || !Global_140869) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 1;
}

void func_198(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x6697
{
    int iVar0;
    
    if (bParam4)
    {
    }
    iVar0 = Global_26CBBF[iParam0 /*3*/][func_203(iParam2)];
    if (iVar0 != 0)
    {
        unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
    }
}

void func_199(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x66C7
{
    int iVar0;
    
    iVar0 = Global_26CBBF[iParam0 /*3*/][func_203(iParam2)];
    if (iVar0 != 0)
    {
        unk_0x41410A69AD49AFCD(iVar0, iParam1, iParam3);
    }
    switch (iParam0)
    {
        case 787:
            Global_151F0F[func_203(iParam2)] = iParam1;
            break;
        
        case 788:
            Global_151F15[func_203(iParam2)] = iParam1;
            break;
        
        case 789:
            Global_151F1B[func_203(iParam2)] = iParam1;
            break;
        
        case 790:
            Global_151F21[func_203(iParam2)] = iParam1;
            break;
        
        case 777:
            Global_151EF1[func_203(iParam2)] = iParam1;
            break;
        
        case 778:
            Global_151EF7[func_203(iParam2)] = iParam1;
            break;
        
        case 779:
            Global_151EFD[func_203(iParam2)] = iParam1;
            break;
        
        case 780:
            Global_151F03[func_203(iParam2)] = iParam1;
            break;
        
        case 767:
            Global_151ED3[func_203(iParam2)] = iParam1;
            break;
        
        case 768:
            Global_151ED9[func_203(iParam2)] = iParam1;
            break;
        
        case 769:
            Global_151EDF[func_203(iParam2)] = iParam1;
            break;
        
        case 770:
            Global_151EE5[func_203(iParam2)] = iParam1;
            break;
        
        case 757:
            Global_151F2D[func_203(iParam2)] = iParam1;
            break;
        
        case 758:
            Global_151F33[func_203(iParam2)] = iParam1;
            break;
        
        case 759:
            Global_151F39[func_203(iParam2)] = iParam1;
            break;
        
        case 760:
            Global_151F3F[func_203(iParam2)] = iParam1;
            break;
        
        case 1303:
            Global_151F4B[func_203(iParam2)] = iParam1;
            break;
        
        case 7233:
            Global_151F51[func_203(iParam2)] = iParam1;
            break;
        
        case 639:
            Global_151F57[func_203(iParam2)] = iParam1;
            break;
        
        case 1278:
            Global_151F5D[func_203(iParam2)] = iParam1;
            break;
        
        case 1876:
            Global_2758A0[0 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 2267:
            Global_2758A0[1 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 2929:
            Global_2758A0[2 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 3058:
            Global_2758A0[3 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 9509:
            Global_275929[func_203(iParam2)] = iParam1;
            break;
        
        case 764:
            Global_151F63[func_203(iParam2)] = iParam1;
            break;
        
        case 765:
            Global_151F69[func_203(iParam2)] = iParam1;
            break;
        
        case 766:
            Global_151F6F[func_203(iParam2)] = iParam1;
            break;
        
        case 1236:
            Global_151F7B[func_203(iParam2)] = iParam1;
            break;
        
        case 3053:
            Global_2758E3[0 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 3054:
            Global_2758E3[1 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 3055:
            Global_2758E3[2 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 3056:
            Global_2758E3[3 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 3057:
            Global_2758E3[4 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 3636:
            Global_27592C[0 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 3637:
            Global_27592C[1 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 3638:
            Global_27592C[2 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 3639:
            Global_27592C[3 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 3640:
            Global_27592C[4 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 3641:
            Global_27593C[0 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 3642:
            Global_27593C[1 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 3643:
            Global_27593C[2 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 3644:
            Global_27593C[3 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 3645:
            Global_27593C[4 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 3221:
            Global_2758E3[5 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 3227:
            Global_2758A0[4 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 3663:
            Global_27594C[func_203(iParam2)] = iParam1;
            break;
        
        case 3664:
            Global_275955[func_203(iParam2)] = iParam1;
            break;
        
        case 3665:
            Global_27594F[func_203(iParam2)] = iParam1;
            break;
        
        case 3666:
            Global_275958[func_203(iParam2)] = iParam1;
            break;
        
        case 3667:
            Global_275952[func_203(iParam2)] = iParam1;
            break;
        
        case 3668:
            Global_27595B[func_203(iParam2)] = iParam1;
            break;
        
        case 3689:
            Global_27595E[func_203(iParam2)] = iParam1;
            break;
        
        case 3229:
            Global_2758E3[6 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 3230:
            Global_2758A0[5 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 3234:
            Global_2758E3[7 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 3232:
            Global_2758A0[6 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 4019:
            Global_2758E3[8 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 4020:
            Global_2758A0[7 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 4022:
            Global_2758E3[9 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 4023:
            Global_2758A0[8 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 4025:
            Global_2758E3[10 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 4026:
            Global_2758A0[9 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 4028:
            Global_2758E3[11 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 4029:
            Global_2758A0[10 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 6109:
            Global_2758E3[12 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 6110:
            Global_2758A0[11 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 6167:
            Global_2758E3[13 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 6168:
            Global_2758A0[12 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 6545:
            Global_2758E3[14 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 6546:
            Global_2758A0[13 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 6558:
            Global_2758E3[15 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 6559:
            Global_2758A0[14 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 6561:
            Global_2758E3[16 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 6562:
            Global_2758A0[15 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 6564:
            Global_2758E3[17 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 6565:
            Global_2758A0[16 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 7283:
            Global_2758A0[17 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 7285:
            Global_2758A0[18 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 7287:
            Global_2758A0[19 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 8010:
            Global_2758A0[20 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        case 8282:
            Global_275961[func_203(iParam2)] = iParam1;
            break;
        
        case 8283:
            Global_275964[func_203(iParam2)] = iParam1;
            break;
        
        case 8284:
            Global_275967[func_203(iParam2)] = iParam1;
            break;
        
        case 8285:
            Global_27596A[func_203(iParam2)] = iParam1;
            break;
        
        case 8286:
            Global_27596D[func_203(iParam2)] = iParam1;
            break;
        
        case 8287:
            Global_275970[func_203(iParam2)] = iParam1;
            break;
        
        case 8288:
            Global_275973[func_203(iParam2)] = iParam1;
            break;
        
        case 8289:
            Global_275976[func_203(iParam2)] = iParam1;
            break;
        
        case 8290:
            Global_275979[func_203(iParam2)] = iParam1;
            break;
        
        case 8291:
            Global_27597C[func_203(iParam2)] = iParam1;
            break;
        
        case 8292:
            Global_27597F[func_203(iParam2)] = iParam1;
            break;
        
        case 8293:
            Global_275982[func_203(iParam2)] = iParam1;
            break;
        
        case 8294:
            Global_275985[func_203(iParam2)] = iParam1;
            break;
        
        case 8900:
            Global_275988[func_203(iParam2)] = iParam1;
            break;
        
        case 8534:
            Global_2758A0[21 /*3*/][func_203(iParam2)] = iParam1;
            break;
        
        default:
            break;
    }
}

int func_200(int iParam0, bool bParam1)//Position - 0x704A
{
    if (bParam1)
    {
    }
    return func_201(iParam0, 0);
}

int func_201(int iParam0, int iParam1)//Position - 0x705E
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
        if (Global_46F22[iVar3] == iParam0)
        {
            iVar1 = iVar3;
            iVar2 = iVar3;
        }
        else if (Global_46F22[iVar3] < iParam0)
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
        fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
        iVar3 = SYSTEM::ROUND(fVar4);
        iVar0++;
    }
    return 8000;
}

int func_202(int iParam0)//Position - 0x711D
{
    if (iParam0 == -1)
    {
        return 0;
    }
    else
    {
        return unk_0xA2BC31158C8CEFD2(Global_2531AD.f_1, iParam0);
    }
    return 1;
}

int func_203(int iParam0)//Position - 0x7142
{
    int iVar0;
    int iVar1;
    
    iVar0 = iParam0;
    if (iVar0 == -1)
    {
        iVar1 = func_16();
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

int func_204(int iParam0, bool bParam1)//Position - 0x7176
{
    if (bParam1)
    {
    }
    return func_205(iParam0);
}

int func_205(int iParam0)//Position - 0x7189
{
    if (Global_1406D3.f_9 == 0)
    {
        if (iParam0 > -1)
        {
            if (iParam0 == unk_0x7C7787D2D7139A85())
            {
                return Global_151F57[func_203(-1)];
            }
            else if (func_202(iParam0))
            {
                return Global_1844AE[iParam0 /*871*/].f_D3.f_1;
            }
        }
    }
    else
    {
        return Global_151F57[func_203(-1)];
    }
    return 0;
}

void func_206(int iParam0, int iParam1, int iParam2)//Position - 0x71E6
{
    int iVar0;
    
    iVar0 = func_208(iParam0, func_203(iParam2), 0);
    iVar0 = (iVar0 + iParam1);
    if (!func_207(iParam0))
    {
        func_198(iParam0, iVar0, iParam2, 1, 0);
    }
    else
    {
        func_199(iParam0, iVar0, iParam2, 1);
    }
}

int func_207(int iParam0)//Position - 0x7228
{
    if (Global_151EC0)
    {
        switch (iParam0)
        {
            case 787:
            case 788:
            case 789:
            case 790:
            case 777:
            case 778:
            case 779:
            case 780:
            case 767:
            case 768:
            case 769:
            case 770:
            case 757:
            case 758:
            case 759:
            case 760:
            case 1303:
            case 7233:
            case 639:
            case 1278:
            case 764:
            case 765:
            case 766:
            case 1236:
            case 1876:
            case 2267:
            case 2929:
            case 3058:
            case 9509:
            case 3053:
            case 3054:
            case 3055:
            case 3056:
            case 3057:
            case 3232:
            case 3234:
            case 3636:
            case 3637:
            case 3638:
            case 3639:
            case 3640:
            case 3641:
            case 3642:
            case 3643:
            case 3644:
            case 3645:
            case 3227:
            case 3221:
            case 3663:
            case 3664:
            case 3665:
            case 3666:
            case 3667:
            case 3668:
            case 3689:
            case 3230:
            case 3229:
            case 4020:
            case 4019:
            case 4023:
            case 4022:
            case 4026:
            case 4025:
            case 4029:
            case 4028:
            case 6110:
            case 6109:
            case 6168:
            case 6167:
            case 6533:
            case 6532:
            case 6546:
            case 6545:
            case 6559:
            case 6558:
            case 6562:
            case 6561:
            case 6565:
            case 6564:
            case 7283:
            case 7285:
            case 7287:
            case 8282:
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
            case 8010:
            case 8534:
                return 1;
                break;
            }
    }
    return 0;
}

int func_208(int iParam0, int iParam1, int iParam2)//Position - 0x748C
{
    int iVar0;
    var uVar1;
    
    if (iParam2 == 0)
    {
    }
    iVar0 = Global_26CBBF[iParam0 /*3*/][func_203(iParam1)];
    if (unk_0x367DA79FE620711B(iVar0, &uVar1, -1))
    {
        return uVar1;
    }
    return 0;
}

void func_209(int iParam0)//Position - 0x74BE
{
    int iVar0;
    int iVar1;
    int iVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    
    iVar1 = unk_0xC69A85EEB9CA3B95(unk_0x7C7787D2D7139A85());
    iVar0 = 0;
    while (iVar0 < unk_0xACF7D965CEBE5714())
    {
        iVar4 = unk_0x9DBE48BD26DE1888(iVar0);
        if (unk_0x2700CB8907086DF3(iVar4))
        {
            iVar5 = unk_0xD7EB9DC48246DA95(iVar4);
            if (unk_0xC69A85EEB9CA3B95(iVar5) != -1)
            {
                if (unk_0xC69A85EEB9CA3B95(iVar5) == iVar1 || func_76(unk_0xC69A85EEB9CA3B95(iVar5), iVar1, 0))
                {
                    iVar2++;
                    if (iVar5 != unk_0x7C7787D2D7139A85())
                    {
                        if (func_138(unk_0x7C7787D2D7139A85(), iVar5))
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
        iVar6 = SYSTEM::ROUND((func_210(*iParam0, 100) * (10f * Global_40001.f_107A)));
    }
    if (iVar2 > 4)
    {
        iVar2 = 4;
    }
    if (iVar2 >= 2)
    {
        iVar7 = SYSTEM::ROUND((func_210(*iParam0, 100) * (20f * Global_40001.f_1073)));
    }
    *iParam0 = (*iParam0 + iVar6);
    *iParam0 = (*iParam0 + iVar7);
}

float func_210(int iParam0, int iParam1)//Position - 0x75A9
{
    float fVar0;
    float fVar1;
    float fVar2;
    
    fVar0 = SYSTEM::TO_FLOAT(iParam0);
    fVar1 = SYSTEM::TO_FLOAT(iParam1);
    fVar2 = (fVar0 / fVar1);
    return fVar2;
}

void func_211(bool bParam0, int iParam1)//Position - 0x75CA
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
        while (iVar0 < unk_0xACF7D965CEBE5714())
        {
            iVar3 = iVar0;
            if (unk_0x2700CB8907086DF3(iVar3))
            {
                iVar4 = unk_0xD7EB9DC48246DA95(iVar3);
                if (func_12(iVar4, 0, 1))
                {
                    if (iVar4 != unk_0x7C7787D2D7139A85())
                    {
                        iVar1++;
                        if (func_138(unk_0x7C7787D2D7139A85(), iVar4))
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
            if (func_12(iVar4, 1, 1))
            {
                if (iVar4 != unk_0x7C7787D2D7139A85())
                {
                    if (func_212(unk_0x7C7787D2D7139A85(), iVar4) <= 20f)
                    {
                        iVar1++;
                        if (func_138(unk_0x7C7787D2D7139A85(), iVar4))
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
        iVar5 = SYSTEM::ROUND((func_210(*iParam1, 100) * (10f * Global_40001.f_107A)));
    }
    if (iVar1 > 4)
    {
        iVar1 = 4;
    }
    if (iVar1 >= 1)
    {
        iVar6 = SYSTEM::ROUND((func_210(*iParam1, 100) * (20f * Global_40001.f_1073)));
    }
    *iParam1 = (*iParam1 + iVar5);
    *iParam1 = (*iParam1 + iVar6);
}

float func_212(int iParam0, int iParam1)//Position - 0x76E2
{
    return SYSTEM::VDIST(func_38(iParam0), func_38(iParam1));
    return 0f;
}

int func_213(int iParam0)//Position - 0x76FE
{
    int iVar0;
    
    if (unk_0x2909109C6CD2EDDA() != 3)
    {
        return *iParam0;
    }
    iVar0 = SYSTEM::ROUND((func_210(*iParam0, 100) * 25f));
    *iParam0 = (*iParam0 + iVar0);
    return *iParam0;
}

int func_214(int iParam0)//Position - 0x7735
{
    if (iParam0 < 0)
    {
        if (unk_0x25A1A0BF87F74E56(iParam0) > func_204(unk_0x7C7787D2D7139A85(), 1))
        {
            iParam0 = -func_204(unk_0x7C7787D2D7139A85(), 1);
        }
    }
    if (func_215(8000, 0, 0) > 0)
    {
        if (func_215(8000, 0, 0) < (iParam0 + func_204(unk_0x7C7787D2D7139A85(), 1)))
        {
            iParam0 = (func_215(8000, 0, 0) - func_204(unk_0x7C7787D2D7139A85(), 1));
        }
    }
    return iParam0;
}

int func_215(int iParam0, bool bParam1, int iParam2)//Position - 0x779D
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
    return Global_46F22[iParam0];
}

int func_216()//Position - 0x77C5
{
    return 1;
}

int func_217(char* sParam0)//Position - 0x77CE
{
    if (unk_0x79FCE4565761C974(sParam0))
    {
        return 1;
    }
    else if (unk_0x2553916E420E8EF0(sParam0, "") || unk_0x2553916E420E8EF0(sParam0, "0"))
    {
        return 1;
    }
    return 0;
}

int func_218(int iParam0)//Position - 0x7807
{
    return func_219(func_220(iParam0));
}

int func_219(int iParam0)//Position - 0x7819
{
    switch (iParam0)
    {
        case 233:
            return 1;
        
        default:
    }
    return 0;
}

int func_220(int iParam0)//Position - 0x7833
{
    if (func_112(iParam0, 0))
    {
        return Global_18DB1B[iParam0 /*614*/].f_B.f_21;
    }
    return -1;
}

bool func_221()//Position - 0x7856
{
    if (unk_0xA51CBC95AC3A4B14())
    {
        return func_64();
    }
    return func_222(Global_440000.f_25AF8);
}

int func_222(int iParam0)//Position - 0x787A
{
    int iVar0;
    
    if (iParam0 == 0)
    {
        return 0;
    }
    iVar0 = 0;
    while (iVar0 < 16)
    {
        if (Global_40001.f_1390[iVar0] == iParam0)
        {
            return 1;
        }
        iVar0++;
    }
    return 0;
}

bool func_223(int iParam0)//Position - 0x78B4
{
    return Global_24FD09[iParam0 /*421*/].f_73 == 2;
}

bool func_224(int iParam0)//Position - 0x78C9
{
    return Global_24FD09[iParam0 /*421*/].f_73 == 7;
}

void func_225()//Position - 0x78DE
{
    Global_258B7C = 1;
}

void func_226(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x78EB
{
    int iVar0;
    
    if (!func_238())
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
            if (iParam1 > 0 || Global_40001.f_6B80)
            {
                func_227(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
            func_227(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
            if (iParam1 > 0 || Global_40001.f_6B80)
            {
                func_227(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
            func_227(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
            break;
    }
}

int func_227(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x7F58
{
    bool bVar0;
    int iVar1;
    int iVar2;
    bool bVar3;
    int iVar4;
    bool bVar5;
    
    bVar0 = false;
    if (!func_238())
    {
        bVar0 = true;
    }
    iVar1 = 1;
    if (!bVar0)
    {
        if (!unk_0x10312E24AC503B38(func_16()) || unk_0x9F3230C03E32BA3F())
        {
            Global_4111C2 = 1;
            return 0;
        }
        if (Global_2589FE)
        {
            if (iParam3 == 1067618600 || iParam3 == -1303831698)
            {
                Global_4111C3 = 1;
                return 0;
            }
        }
    }
    bVar3 = false;
    iVar2 = 0;
    while (iVar2 < 5)
    {
        if (Global_410F82[iVar2 /*84*/].f_41.f_2 == 0)
        {
            bVar3 = true;
        }
        iVar2++;
    }
    if (!bVar3)
    {
        return 0;
    }
    *uParam0 = 5;
    iVar4 = 2147483647;
    if ((bVar0 || iVar1) || unk_0x45E39245DFF8B94A(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
    {
        if ((bVar0 || iVar1) || unk_0x813C0E090AFE247B(iVar4))
        {
            *uParam0 = func_234(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
            if (iVar1 && !bVar0)
            {
            }
            if (bVar0)
            {
                if (*uParam0 != -1)
                {
                    Global_410F82[*uParam0 /*84*/].f_41.f_8 = 1;
                    Global_410F82[*uParam0 /*84*/].f_41.f_C = 1;
                }
            }
            Global_4111B3 = 1;
            return 1;
        }
    }
    else
    {
        if (iParam7 & 2 != 0)
        {
            Global_4111C1 = 1;
            Global_4111C4 = iParam4;
            Global_4111C6 = iParam3;
            Global_4111C7 = 1;
            Global_4111C5 = iParam5;
        }
        if (iParam7 & 8 != 0)
        {
            Global_4111C4 = iParam4;
            Global_4111C6 = iParam3;
            Global_4111C7 = 1;
            Global_4111C5 = iParam5;
        }
        bVar5 = false;
        if (bVar5)
        {
            func_233(1, iParam4);
            Global_4111C1 = 0;
        }
        if (iParam7 & 4 != 0)
        {
            func_228(-1, iParam4, iParam6, iParam5, -1);
        }
    }
    return 0;
}

void func_228(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x8103
{
    switch (iParam1)
    {
        case 1704445500:
            unk_0xA1E7A40E1F56E511(&(Global_24FD09[unk_0x7C7787D2D7139A85() /*421*/].f_7A.f_47), 0);
            break;
    }
    if (iParam0 != -1)
    {
        func_229(iParam0);
    }
}

void func_229(int iParam0)//Position - 0x813B
{
    bool bVar0;
    
    bVar0 = false;
    if (!func_238())
    {
        bVar0 = true;
    }
    if (iParam0 != -1)
    {
        if (func_232(iParam0))
        {
            if (!bVar0)
            {
                unk_0x35669F69F99705F6();
            }
        }
        else if (!bVar0)
        {
            unk_0x7724338620CF87D3(Global_410F82[iParam0 /*84*/].f_41);
        }
        func_230(&(Global_410F82[iParam0 /*84*/]));
    }
}

void func_230(var uParam0)//Position - 0x818F
{
    uParam0->f_41 = 0;
    uParam0->f_41 = 2147483647;
    uParam0->f_41.f_1 = 0;
    uParam0->f_41.f_2 = 0;
    uParam0->f_41.f_3 = -1593119440;
    uParam0->f_41.f_4 = -2085313189;
    uParam0->f_41.f_5 = 0;
    uParam0->f_41.f_6 = 1227573907;
    uParam0->f_41.f_7 = -1161833819;
    *uParam0 = 0;
    uParam0->f_1 = 0;
    uParam0->f_2 = 0;
    func_231(&(uParam0->f_D));
    func_231(&(uParam0->f_D.f_D));
    StringCopy(&(uParam0->f_D.f_1A), "", 32);
    StringCopy(&(uParam0->f_D.f_22), "", 24);
    StringCopy(&(uParam0->f_D.f_28), "", 16);
    StringCopy(&(uParam0->f_D.f_2C), "", 32);
    uParam0->f_3 = 0;
    uParam0->f_4 = 0;
    uParam0->f_5 = 0;
    uParam0->f_6 = 0;
    uParam0->f_7 = 0;
    uParam0->f_8 = 0;
    uParam0->f_41.f_8 = 0;
    uParam0->f_41.f_9 = 0;
    uParam0->f_41.f_A = 0;
    uParam0->f_41.f_B = 0;
    uParam0->f_41.f_D = 0;
    uParam0->f_41.f_C = 0;
    uParam0->f_41.f_E = 0;
    uParam0->f_41.f_F = 0;
    uParam0->f_41.f_10 = 0;
    uParam0->f_41.f_12 = 0;
}

void func_231(var uParam0)//Position - 0x8296
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
    uParam0->f_A = 0;
    uParam0->f_B = 0;
    uParam0->f_C = 0;
}

int func_232(int iParam0)//Position - 0x82DE
{
    if (iParam0 >= 0 && iParam0 < 5)
    {
        return Global_410F82[iParam0 /*84*/].f_41.f_5 == 1;
    }
    return 0;
}

void func_233(int iParam0, int iParam1)//Position - 0x8308
{
    Global_258E9A = iParam1;
    Global_258E99 = iParam0;
}

int func_234(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x831C
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 5)
    {
        if (Global_410F82[iVar0 /*84*/].f_41.f_2 == 0)
        {
            if (!func_238())
            {
                iParam0 = iVar0 + 900;
            }
            Global_410F82[iVar0 /*84*/].f_41.f_2 = 1;
            Global_410F82[iVar0 /*84*/].f_41.f_1 = iParam5;
            Global_410F82[iVar0 /*84*/].f_41.f_3 = iParam1;
            Global_410F82[iVar0 /*84*/].f_41.f_4 = iParam2;
            Global_410F82[iVar0 /*84*/].f_41.f_7 = iParam3;
            Global_410F82[iVar0 /*84*/].f_41.f_5 = 0;
            Global_410F82[iVar0 /*84*/].f_41 = iParam0;
            Global_410F82[iVar0 /*84*/].f_41.f_6 = iParam4;
            Global_410F82[iVar0 /*84*/].f_41.f_B = uParam8;
            Global_410F82[iVar0 /*84*/].f_41.f_A = iParam7;
            Global_410F82[iVar0 /*84*/].f_41.f_D = iParam9;
            Global_410F82[iVar0 /*84*/].f_41.f_C = 0;
            Global_410F82[iVar0 /*84*/].f_41.f_E = unk_0xB3EE417AD9F0CAA2();
            Global_410F82[iVar0 /*84*/].f_41.f_12 = 0;
            Global_4111B3 = 0;
            if (bParam6)
            {
                Global_410F82[iVar0 /*84*/].f_41.f_5 = 1;
            }
            if (iParam1 == -1135378931 && iParam10)
            {
                func_235(Global_410F82[iVar0 /*84*/], iVar0);
            }
            return iVar0;
        }
        iVar0++;
    }
    return -1;
}

void func_235(struct<66> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x8458
{
    vector3 vVar0;
    int iVar1;
    
    if (iParam19 < 0)
    {
        return;
    }
    vVar0.f_2 = 2147483647;
    vVar0.x = -1969967074;
    vVar0.y = unk_0x7C7787D2D7139A85();
    vVar0.f_2 = { Param0.f_41 };
    vVar0.f_2.f_20 = iParam19;
    iVar1 = func_237(vVar0.y);
    if ((Global_40001.f_5C04 && !Global_40001.f_5C05) && !Global_40001.f_5C06)
    {
        return;
    }
    if (!iVar1 == 0)
    {
        func_236();
        unk_0x990C4E4B3665A4D6(1, &vVar0, 35, iVar1);
    }
}

void func_236()//Position - 0x84EA
{
    unk_0x42B7026D73D48D50("AM_ARENA_SHP");
}

var func_237(int iParam0)//Position - 0x84FA
{
    var uVar0;
    
    if (iParam0 != -1)
    {
        unk_0xA1E7A40E1F56E511(&uVar0, iParam0);
    }
    return uVar0;
}

int func_238()//Position - 0x8512
{
    if (unk_0xE434AB6E3DE89861())
    {
        return unk_0x60E2BDB67AA16B1C();
    }
    return 0;
}

void func_239(int iParam0, int iParam1)//Position - 0x8529
{
    if (iParam1 > 0)
    {
        if (Global_40001.f_5BB5 == 0 || Global_40001.f_5BB5 == 1)
        {
            if (!unk_0xE434AB6E3DE89861() || Global_40001.f_5BB5 == 1)
            {
                Global_26A0A9.f_11B = iParam0;
                if (iParam1 > Global_40001.f_19B8)
                {
                    iParam1 = Global_40001.f_19B8;
                }
                Global_26A0A9.f_11C = iParam1;
                Global_26A0A9.f_11D = 0;
            }
        }
    }
}

void func_240(var uParam0, var uParam1)//Position - 0x859B
{
    int iVar0;
    int iVar1;
    float fVar2;
    int iVar3;
    int iVar4;
    
    if (func_17(unk_0x2E40EEA43EF34BD6(), 1))
    {
        iVar1 = SYSTEM::FLOOR(((SYSTEM::TO_FLOAT((Local_171.f_1 - iLocal_140)) / 60f) / 1000f));
        if (iVar1 > Global_40001.f_2CAB)
        {
            iVar1 = Global_40001.f_2CAB;
        }
        else if (iVar1 < 1)
        {
            iVar1 = 1;
        }
        iVar0 = (func_278() * iVar1);
        *uParam1 = (func_277() * iVar1);
        fVar2 = func_276();
        if (fVar2 > 0f && !unk_0xA2BC31158C8CEFD2(Local_171.f_2, 0))
        {
            iVar3 = SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_28(1)) / 60f) / 1000f));
            if (iVar3 > func_275())
            {
                iVar3 = func_275();
            }
            iVar4 = Local_171.f_33;
            if (iVar4 > func_274())
            {
                iVar4 = func_274();
            }
            *uParam0 = (*uParam0 + SYSTEM::ROUND((IntToFloat(func_267(func_273(), func_272(), iVar3, fVar2, func_271(), func_270(), func_269(), iVar4)) * Global_40001.f_2CB8)));
            *uParam1 = (*uParam1 + SYSTEM::ROUND((IntToFloat(func_267(func_266(), func_265(), iVar3, fVar2, func_271(), func_270(), func_269(), iVar4)) * Global_40001.f_2CB9)));
        }
        else
        {
            func_263(1);
        }
    }
    else
    {
        func_263(0);
    }
    func_241(uParam0, 1);
    *uParam0 = (*uParam0 + iVar0);
}

void func_241(var uParam0, int iParam1)//Position - 0x86E3
{
    int iVar0;
    
    if (*uParam0 > 0)
    {
        if (!func_262())
        {
            if (func_261(0))
            {
                if (!func_257(0))
                {
                    if (unk_0xD56C8C2B75BF9665(func_256()))
                    {
                        if (func_255() == 100)
                        {
                            iVar0 = *uParam0;
                            *uParam0 = 0;
                        }
                        else
                        {
                            iVar0 = ((*uParam0 / 100) * func_255());
                            *uParam0 = (*uParam0 - iVar0);
                        }
                        func_253(&iVar0, 0);
                        if (iParam1 == 1)
                        {
                            func_246("GB_BCUT_TICK1", func_256(), iVar0, 0, 0, 1, 1);
                        }
                        func_245(20);
                        func_242(func_256(), iVar0, 1);
                    }
                }
            }
        }
    }
}

void func_242(int iParam0, int iParam1, int iParam2)//Position - 0x8784
{
    struct<8> Var0;
    
    if (func_12(iParam0, 0, 1))
    {
        Var0 = -1590759069;
        Var0.f_1 = unk_0x7C7787D2D7139A85();
        Var0.f_2 = iParam1;
        Var0.f_4 = iParam2;
        Var0.f_5 = func_244(iParam0);
        func_243(&(Var0.f_6), &(Var0.f_7));
        unk_0x990C4E4B3665A4D6(1, &Var0, 8, func_237(iParam0));
    }
}

void func_243(var uParam0, var uParam1)//Position - 0x87DA
{
    *uParam0 = Global_1931FE.f_9;
    *uParam1 = Global_1931FE.f_A;
}

var func_244(int iParam0)//Position - 0x87F4
{
    return Global_18DB1B[iParam0 /*614*/].f_214;
}

void func_245(int iParam0)//Position - 0x8808
{
    int iVar0;
    int iVar1;
    
    iVar0 = (iParam0 / 32);
    iVar1 = (iParam0 % 32);
    unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_1322.f_7[iVar0]), iVar1);
}

int func_246(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x8831
{
    int iVar0;
    struct<8> Var1;
    
    iVar0 = -1;
    if (unk_0x645A04F62406C561(unk_0x7C7787D2D7139A85(), iParam1) || iParam5)
    {
        if (!bParam4)
        {
            StringCopy(&Var1, unk_0xA09A99AC02B24954(iParam1), 64);
        }
        else
        {
            StringCopy(&Var1, unk_0xA09A99AC02B24954(iParam1), 64);
        }
        if (unk_0x9591DE0F00127F2A(&Var1))
        {
        }
        unk_0x6C607B5286DEE8D9(sParam0);
        unk_0xEB6F6B8EBD6B6648(func_69(iParam1, -2, 1, 0, 0));
        unk_0xA89C789CC9FEF523(func_251(&Var1));
        if (!iParam3 == 0)
        {
            unk_0xEB6F6B8EBD6B6648(iParam3);
        }
        unk_0x6A8B3CC08A759F44(iParam2);
        iVar0 = unk_0x6E617E0C74B3189D(0, 1);
        func_247(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
    }
    return iVar0;
}

void func_247(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x88C9
{
    int iVar0;
    
    if ((!func_250() || !unk_0xA51CBC95AC3A4B14()) || !func_14(unk_0x7C7787D2D7139A85(), 0))
    {
        return;
    }
    iVar0 = func_248(iParam2);
    if (iVar0 >= 0 && iVar0 < 5)
    {
        Global_1980E0.f_5[iVar0 /*53*/] = iParam0;
        Global_1980E0.f_5[iVar0 /*53*/].f_1 = iParam2;
        StringCopy(&(Global_1980E0.f_5[iVar0 /*53*/].f_8), sParam1, 16);
        Global_1980E0.f_5[iVar0 /*53*/].f_2[0] = iParam4;
        Global_1980E0.f_5[iVar0 /*53*/].f_2[1] = iParam5;
        Global_1980E0.f_5[iVar0 /*53*/].f_2[2] = iParam6;
        Global_1980E0.f_5[iVar0 /*53*/].f_7 = iParam7;
        Global_1980E0.f_5[iVar0 /*53*/].f_6 = iParam8;
        StringCopy(&(Global_1980E0.f_5[iVar0 /*53*/].f_C), sParam3, 64);
        StringCopy(&(Global_1980E0.f_5[iVar0 /*53*/].f_1C[0 /*6*/]), sParam9, 24);
        StringCopy(&(Global_1980E0.f_5[iVar0 /*53*/].f_1C[1 /*6*/]), sParam10, 24);
        StringCopy(&(Global_1980E0.f_5[iVar0 /*53*/].f_1C[2 /*6*/]), sParam11, 24);
    }
}

int func_248(int iParam0)//Position - 0x89D1
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 <= (Global_1980E0 - 1))
    {
        if (iParam0 > Global_1980E0.f_5[iVar0 /*53*/].f_1)
        {
            func_249(iVar0);
            return iVar0;
        }
        iVar0++;
    }
    Global_1980E0++;
    if (Global_1980E0 > 5)
    {
        Global_1980E0 = 5;
        return Global_1980E0;
    }
    return (Global_1980E0 - 1);
}

void func_249(int iParam0)//Position - 0x8A33
{
    int iVar0;
    
    iVar0 = 4;
    while (iVar0 >= iParam0 + 1)
    {
        Global_1980E0.f_5[iVar0 /*53*/] = { Global_1980E0.f_5[(iVar0 - 1) /*53*/] };
        iVar0 = (iVar0 + -1);
    }
}

bool func_250()//Position - 0x8A6C
{
    return unk_0x9742C47C6EA02281(-1762644250);
}

var func_251(char* sParam0)//Position - 0x8A7D
{
    char cVar0[64];
    
    StringCopy(&cVar0, "<C>", 64);
    StringConCat(&cVar0, sParam0, 64);
    StringConCat(&cVar0, "</C>~s~", 64);
    return func_252(&cVar0);
}

var func_252(char[4] cParam0)//Position - 0x8AA1
{
    return cParam0;
}

void func_253(int iParam0, bool bParam1)//Position - 0x8AAB
{
    int iVar0;
    int iVar1;
    
    if (bParam1)
    {
        iVar1 = func_254(1);
    }
    else
    {
        iVar1 = func_254(0);
    }
    iVar0 = ((*iParam0 / 100) * iVar1);
    *iParam0 = (*iParam0 - iVar0);
}

int func_254(bool bParam0)//Position - 0x8ADD
{
    if (bParam0)
    {
        return SYSTEM::ROUND((0.05f * 100f));
    }
    return Global_40001.f_3066;
}

int func_255()//Position - 0x8B03
{
    return Global_40001.f_3065;
}

int func_256()//Position - 0x8B12
{
    return Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_B;
}

bool func_257(bool bParam0)//Position - 0x8B27
{
    return func_258(unk_0x7C7787D2D7139A85(), bParam0);
}

int func_258(int iParam0, bool bParam1)//Position - 0x8B39
{
    return func_259(iParam0, bParam1, 1);
}

int func_259(int iParam0, bool bParam1, int iParam2)//Position - 0x8B4A
{
    int iVar0;
    
    if (iParam0 == func_102())
    {
        return 0;
    }
    if (!bParam1)
    {
        if (func_260(iParam0, iParam2))
        {
            return 0;
        }
    }
    iVar0 = Global_18DB1B[iParam0 /*614*/].f_B;
    if (iVar0 != func_102() && Global_18DB1B[iVar0 /*614*/].f_B.f_1C2 == iParam2)
    {
        return 1;
    }
    return 0;
}

int func_260(int iParam0, int iParam1)//Position - 0x8BA6
{
    if (iParam0 != func_102())
    {
        if (Global_18DB1B[iParam0 /*614*/].f_B != func_102())
        {
            if (Global_18DB1B[iParam0 /*614*/].f_B == iParam0 && Global_18DB1B[iParam0 /*614*/].f_B.f_1C2 == iParam1)
            {
                return 1;
            }
        }
    }
    return 0;
}

bool func_261(bool bParam0)//Position - 0x8BF5
{
    return func_89(unk_0x7C7787D2D7139A85(), bParam0);
}

bool func_262()//Position - 0x8C07
{
    return func_90(unk_0x7C7787D2D7139A85());
}

void func_263(bool bParam0)//Position - 0x8C17
{
    if (bParam0)
    {
        if (func_264(1))
        {
            unk_0xA1E7A40E1F56E511(&Global_180710, 1);
        }
    }
    else if (func_264(2))
    {
        unk_0xA1E7A40E1F56E511(&Global_180710, 2);
    }
}

int func_264(int iParam0)//Position - 0x8C49
{
    int iVar0;
    
    iVar0 = func_208(2534, -1, 0);
    if (iParam0 == 0)
    {
        if ((unk_0xA2BC31158C8CEFD2(iVar0, 0) && unk_0xA2BC31158C8CEFD2(iVar0, 1)) && unk_0xA2BC31158C8CEFD2(iVar0, 2))
        {
            return 0;
        }
    }
    else if (iParam0 == 1)
    {
        if ((unk_0xA2BC31158C8CEFD2(iVar0, 3) && unk_0xA2BC31158C8CEFD2(iVar0, 4)) && unk_0xA2BC31158C8CEFD2(iVar0, 5))
        {
            return 0;
        }
    }
    else if (iParam0 == 2)
    {
        if ((unk_0xA2BC31158C8CEFD2(iVar0, 6) && unk_0xA2BC31158C8CEFD2(iVar0, 7)) && unk_0xA2BC31158C8CEFD2(iVar0, 8))
        {
            return 0;
        }
    }
    else if (iParam0 == 3)
    {
        if ((unk_0xA2BC31158C8CEFD2(iVar0, 9) && unk_0xA2BC31158C8CEFD2(iVar0, 10)) && unk_0xA2BC31158C8CEFD2(iVar0, 11))
        {
            return 0;
        }
    }
    return 1;
}

int func_265()//Position - 0x8D1A
{
    return Global_40001.f_2AB7;
}

int func_266()//Position - 0x8D29
{
    return Global_40001.f_2AB5;
}

int func_267(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7)//Position - 0x8D38
{
    return func_268(SYSTEM::ROUND(((IntToFloat(iParam0) * fParam3) + (((IntToFloat(iParam1) * fParam3) * (IntToFloat(iParam2) * fParam4)) * ((IntToFloat(iParam7) * fParam5) / fParam6)))), 50, 0);
}

int func_268(int iParam0, int iParam1, int iParam2)//Position - 0x8D69
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    
    iVar0 = (iParam0 / iParam1);
    iVar0 = (iVar0 * iParam1);
    iVar1 = (iVar0 + iParam1);
    iVar2 = (iParam0 - iVar0);
    iVar3 = (iVar1 - iParam0);
    if (iVar2 >= iVar3)
    {
        if (iParam2 == 1)
        {
        }
        return iVar1;
    }
    if (iParam2 == 1)
    {
    }
    return iVar0;
}

float func_269()//Position - 0x8DB1
{
    return Global_40001.f_2ABA;
}

float func_270()//Position - 0x8DC0
{
    return Global_40001.f_2AB9;
}

float func_271()//Position - 0x8DCF
{
    return Global_40001.f_2AB8;
}

int func_272()//Position - 0x8DDE
{
    return Global_40001.f_2AB6;
}

int func_273()//Position - 0x8DED
{
    return Global_40001.f_2AB4;
}

int func_274()//Position - 0x8DFC
{
    return Global_40001.f_2C4C;
}

int func_275()//Position - 0x8E0B
{
    return Global_40001.f_2C4B;
}

var func_276()//Position - 0x8E1A
{
    if (func_20(0))
    {
        return Global_40001.f_2ACF;
    }
    if (func_20(1))
    {
        return Global_40001.f_2AD0;
    }
    if (func_20(2))
    {
        return Global_40001.f_2AD1;
    }
    return Global_40001.f_2AD2;
}

int func_277()//Position - 0x8E68
{
    return Global_40001.f_2AB3;
}

int func_278()//Position - 0x8E77
{
    return Global_40001.f_2AB2;
}

void func_279()//Position - 0x8E86
{
    int iVar0;
    float fVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    char* sVar5;
    
    if (!unk_0xA2BC31158C8CEFD2(Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_1, 1) && (func_291() || unk_0xA2BC31158C8CEFD2(Local_171.f_2, 0)))
    {
        if (func_67(func_290()))
        {
            func_289();
        }
        if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
        {
            if (!unk_0xA2BC31158C8CEFD2(Local_171.f_2, 0))
            {
                if (func_328(0))
                {
                    iVar2 = Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_4;
                    func_285(&iVar0, &fVar1, iVar2, 1);
                    if (func_20(0))
                    {
                        if (func_18())
                        {
                            func_283(64, func_284(Local_171.f_3, 0, 0, 0), "AMCH_WINNER", "AMCH_WIN", 15000, -1, fVar1, func_393(Local_171.f_3), 1, 2, 0);
                        }
                        else if (func_282())
                        {
                            func_283(69, func_284(Local_171.f_3, 0, 0, 0), "AMCH_WINNER_T", "AMCH_WIN", 15000, iVar0, -1f, func_393(Local_171.f_3), 1, 2, 0);
                        }
                        else
                        {
                            func_283(64, func_284(Local_171.f_3, 0, 0, iVar0), "AMCH_WINNER", "AMCH_WIN", 15000, iVar0, -1f, func_393(Local_171.f_3), 1, 2, 0);
                        }
                    }
                    else if (func_20(1))
                    {
                        if (func_18())
                        {
                            func_283(67, func_284(Local_171.f_3, 0, 0, 0), "AMCH_2ND", "AMCH_OVER", 15000, -1, fVar1, func_393(Local_171.f_3), 1, 2, 0);
                        }
                        else if (func_282())
                        {
                            func_283(75, func_284(Local_171.f_3, 0, 0, 0), "AMCH_2ND_T", "AMCH_OVER", 15000, iVar0, -1f, func_393(Local_171.f_3), 1, 2, 0);
                        }
                        else
                        {
                            func_283(67, func_284(Local_171.f_3, 0, 0, iVar0), "AMCH_2ND", "AMCH_OVER", 15000, iVar0, -1f, func_393(Local_171.f_3), 1, 2, 0);
                        }
                    }
                    else if (func_20(2))
                    {
                        if (func_18())
                        {
                            func_283(67, func_284(Local_171.f_3, 0, 0, 0), "AMCH_3RD", "AMCH_OVER", 15000, -1, fVar1, func_393(Local_171.f_3), 1, 2, 0);
                        }
                        else if (func_282())
                        {
                            func_283(75, func_284(Local_171.f_3, 0, 0, 0), "AMCH_3RD_T", "AMCH_OVER", 15000, iVar0, -1f, func_393(Local_171.f_3), 1, 2, 0);
                        }
                        else
                        {
                            func_283(67, func_284(Local_171.f_3, 0, 0, iVar0), "AMCH_3RD", "AMCH_OVER", 15000, iVar0, -1f, func_393(Local_171.f_3), 1, 2, 0);
                        }
                    }
                    else
                    {
                        iVar3 = unk_0x9DBE48BD26DE1888(Local_171.f_4[0]);
                        if (unk_0x2700CB8907086DF3(iVar3))
                        {
                            iVar4 = unk_0xD7EB9DC48246DA95(iVar3);
                            if (Local_1537[Local_171.f_4[0] /*12*/].f_3 < 4)
                            {
                                return;
                            }
                            iVar2 = Local_1537[Local_171.f_4[0] /*12*/].f_4;
                            func_285(&iVar0, &fVar1, iVar2, 1);
                            sVar5 = "AMCH_LOSE";
                            if (func_18())
                            {
                                func_281(76, func_102(), func_284(Local_171.f_3, 0, 0, 0), sVar5, "AMCH_OVER", 15000, func_393(Local_171.f_3), -1, fVar1, 1, 2, unk_0xA09A99AC02B24954(iVar4));
                            }
                            else if (func_282())
                            {
                                func_281(77, func_102(), func_284(Local_171.f_3, 0, 0, 0), "AMCH_LOSE_T", "AMCH_OVER", 15000, func_393(Local_171.f_3), iVar0, -1082130432, 1, 2, unk_0xA09A99AC02B24954(iVar4));
                            }
                            else
                            {
                                func_281(76, func_102(), func_284(Local_171.f_3, 0, 0, iVar0), sVar5, "AMCH_OVER", 15000, func_393(Local_171.f_3), iVar0, -1082130432, 1, 2, unk_0xA09A99AC02B24954(iVar4));
                            }
                        }
                    }
                }
                else
                {
                    func_52(66, "AMCH_OVER", "AMCH_NOWIN", 1, 15000, 2, 1, 0);
                }
            }
            else
            {
                func_51("", "", 1);
            }
            unk_0xA1E7A40E1F56E511(&(Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_1), 1);
            func_280(133);
        }
    }
}

void func_280(int iParam0)//Position - 0x924B
{
    if (iParam0 == iParam0)
    {
    }
}

int func_281(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, char* sParam11)//Position - 0x925A
{
    struct<80> Var0;
    
    Var0.f_3 = -1;
    Var0.f_4 = -1;
    Var0.f_5 = -1;
    Var0.f_6 = -1;
    Var0.f_7 = -1082130432;
    Var0.f_10 = 1;
    Var0.f_47 = 1;
    Var0.f_48 = 2;
    Var0.f_4F = -1;
    func_105(iParam0, &Var0, iParam7, sParam3, sParam4);
    Var0.f_11 = iParam1;
    StringCopy(&(Var0.f_39), sParam2, 16);
    StringCopy(&(Var0.f_3D), sParam6, 16);
    StringCopy(&(Var0.f_19), sParam11, 64);
    Var0.f_6 = iParam5;
    Var0.f_7 = fParam8;
    Var0.f_47 = iParam9;
    Var0.f_48 = iParam10;
    return func_53(&Var0);
}

int func_282()//Position - 0x92E9
{
    return 0;
}

int func_283(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10)//Position - 0x92F2
{
    struct<80> Var0;
    
    Var0.f_3 = -1;
    Var0.f_4 = -1;
    Var0.f_5 = -1;
    Var0.f_6 = -1;
    Var0.f_7 = -1082130432;
    Var0.f_10 = 1;
    Var0.f_47 = 1;
    Var0.f_48 = 2;
    Var0.f_4F = -1;
    func_105(iParam0, &Var0, iParam5, sParam2, sParam3);
    StringCopy(&(Var0.f_39), sParam1, 16);
    StringCopy(&(Var0.f_3D), sParam7, 16);
    Var0.f_6 = iParam4;
    Var0.f_7 = fParam6;
    Var0.f_47 = iParam8;
    Var0.f_48 = iParam9;
    if (iParam10 != 0)
    {
        func_103(&(Var0.f_45), iParam10);
    }
    return func_53(&Var0);
}

char* func_284(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x9383
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
            if (unk_0xB28FEB6F176CE84A())
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
            if (unk_0xB28FEB6F176CE84A())
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

int func_285(int iParam0, float fParam1, int iParam2, bool bParam3)//Position - 0x9510
{
    if (func_18())
    {
        if (bParam3)
        {
            *fParam1 = (func_286(Local_171.f_3, iParam2) / 10f);
        }
        else
        {
            *fParam1 = (SYSTEM::TO_FLOAT(iParam2) / 10f);
        }
        return 1;
    }
    *iParam0 = iParam2;
    return 0;
}

float func_286(int iParam0, int iParam1)//Position - 0x9557
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
            if (unk_0xB28FEB6F176CE84A())
            {
                return SYSTEM::TO_FLOAT(iParam1);
            }
            else
            {
                return func_288(SYSTEM::TO_FLOAT(iParam1));
            }
            break;
        
        case 2:
            if (unk_0xB28FEB6F176CE84A())
            {
                return SYSTEM::TO_FLOAT(iParam1);
            }
            else
            {
                return func_287(SYSTEM::TO_FLOAT(iParam1));
            }
            break;
    }
    return SYSTEM::TO_FLOAT(iParam1);
}

float func_287(float fParam0)//Position - 0x95FA
{
    return (fParam0 / 1.609344f);
}

float func_288(float fParam0)//Position - 0x960A
{
    return (fParam0 / 0.3048f);
}

void func_289()//Position - 0x961A
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 <= 3)
    {
        if (Global_2531AD.f_A94[iVar0 /*80*/].f_2 != 0)
        {
            Global_2531AD.f_A94[iVar0 /*80*/].f_2 = 5;
            func_103(&(Global_2531AD.f_A94[iVar0 /*80*/].f_45), 1);
        }
        iVar0++;
    }
}

int func_290()//Position - 0x9665
{
    return Global_2531AD.f_A94[0 /*80*/].f_1;
}

bool func_291()//Position - 0x9679
{
    return unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 25);
}

int func_292(var uParam0, bool bParam1)//Position - 0x968D
{
    bool bVar0;
    
    if (((*uParam0 > 0 && !func_302()) && !(func_112(unk_0x7C7787D2D7139A85(), 0) && (func_108(unk_0x7C7787D2D7139A85()) || func_301(unk_0x7C7787D2D7139A85())))) && !func_299(unk_0x7C7787D2D7139A85()))
    {
        func_298();
    }
    switch (*uParam0)
    {
        case 0:
            if (!func_47(&(uParam0->f_3)))
            {
                func_2(&(uParam0->f_3), 0, 0);
            }
            else if (func_1(&(uParam0->f_3), 1000, 0))
            {
                unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 25);
                if (bParam1)
                {
                    unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_11EC), 0);
                    func_2(&(uParam0->f_5), 0, 0);
                }
                func_2(&(uParam0->f_1), 0, 0);
                func_297(uParam0, 1);
            }
            break;
        
        case 1:
            if (func_47(&(uParam0->f_5)))
            {
                if (func_1(&(uParam0->f_5), 3000, 0))
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
                func_294();
                func_297(uParam0, 2);
            }
            break;
        
        case 2:
            func_294();
            if (func_1(&(uParam0->f_1), 15000, 0))
            {
                if (func_293("AMEV_LBD_HELP"))
                {
                    unk_0x0D23E3918F7AF11B(1);
                }
                func_297(uParam0, 3);
            }
            break;
        
        case 3:
            if (func_1(&(uParam0->f_1), 23500, 0))
            {
                unk_0x3B76114EC84D5812(&(Global_26A0A9.f_11EC), 1);
                func_297(uParam0, 4);
                return 1;
            }
            break;
        
        case 4:
            unk_0x3B76114EC84D5812(&(Global_26A0A9.f_11EC), 1);
            return 1;
    }
    return 0;
}

int func_293(char* sParam0)//Position - 0x9809
{
    unk_0x1EF54B101C71E009(sParam0);
    return unk_0xFA637652FFB4E2E5(0);
}

void func_294()//Position - 0x981C
{
    if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_11EC, 0))
    {
        if (((((!unk_0xBCFD7D14E63DFD63() && !unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_31B, 2)) && func_12(unk_0x7C7787D2D7139A85(), 1, 1)) && !Global_12038) && !Global_E51C) && !unk_0x260395BA7F0C83CB())
        {
            unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_11EC), 1);
            func_296("AMEV_LBD_HELP", -1);
            func_295(1);
            unk_0x3B76114EC84D5812(&(Global_26A0A9.f_11EC), 0);
        }
    }
}

void func_295(int iParam0)//Position - 0x989F
{
    unk_0x998551D4E6A8C263(3, 21, 200, 0, 0);
    if (iParam0 && !func_302())
    {
        unk_0x9964F5BBD9415AB7(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
    }
}

void func_296(char* sParam0, int iParam1)//Position - 0x98CD
{
    unk_0xD95C12E1062B7D5E(sParam0);
    unk_0x40DC0B0D5BD91E06(0, 0, 0, iParam1);
}

void func_297(var uParam0, int iParam1)//Position - 0x98E4
{
    *uParam0 = iParam1;
}

void func_298()//Position - 0x98F1
{
    Global_258B7D = 1;
}

int func_299(int iParam0)//Position - 0x98FE
{
    if (iParam0 != func_102())
    {
        if (func_12(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_300(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 2;
            }
        }
    }
    return 0;
}

int func_300(int iParam0)//Position - 0x9944
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
        case 79:
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
    }
    return -1;
}

bool func_301(int iParam0)//Position - 0x9D0C
{
    return func_107(iParam0, 19);
}

bool func_302()//Position - 0x9D1C
{
    return Global_2531AD.f_A94[0 /*80*/].f_1 != 0;
}

void func_303()//Position - 0x9D32
{
    int iVar0[3];
    int iVar1;
    var uVar2[3];
    var uVar3[3];
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    float fVar9;
    float fVar10;
    int iVar11;
    bool bVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    var uVar17[3];
    int iVar18;
    int iVar19;
    int iVar20;
    int iVar21;
    int iVar22;
    int iVar23;
    
    if (Local_171.f_4[0] > -1)
    {
        iVar11 = 0;
        bVar12 = (func_325() && !func_100(unk_0x7C7787D2D7139A85()));
        iVar7 = 0;
        while (iVar7 < 3)
        {
            iVar0[iVar7] = func_102();
            iVar7++;
        }
        iVar7 = 0;
        while (iVar7 < 3)
        {
            if (Local_171.f_4[iVar7] > -1)
            {
                iVar18 = unk_0x9DBE48BD26DE1888(Local_171.f_4[iVar7]);
                if (unk_0x2700CB8907086DF3(iVar18))
                {
                    iVar1 = unk_0xD7EB9DC48246DA95(iVar18);
                    if (func_12(iVar1, 0, 1))
                    {
                        if (!func_14(iVar1, 0))
                        {
                            if (Local_1537[Local_171.f_4[iVar7] /*12*/].f_4 != 0)
                            {
                                iVar0[iVar15] = iVar1;
                                func_285(&(uVar2[iVar15]), &(uVar3[iVar15]), Local_1537[Local_171.f_4[iVar7] /*12*/].f_4, 1);
                                iVar15++;
                                if (func_261(1))
                                {
                                    if (func_89(iVar1, 1))
                                    {
                                        uVar17[iVar7] = func_69(iVar1, -2, 0, 0, 0);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            iVar7++;
        }
        iVar8 = unk_0x2E40EEA43EF34BD6();
        if (func_100(unk_0x7C7787D2D7139A85()))
        {
            iVar19 = func_323();
            iVar20 = unk_0x74D4E16E179B8F53(iVar19);
            if (unk_0xD56C8C2B75BF9665(iVar20))
            {
                iVar21 = unk_0x932F91FB8ED4D272(iVar20);
                if (unk_0x2700CB8907086DF3(iVar21))
                {
                    iVar8 = iVar21;
                }
            }
        }
        func_285(&iVar4, &fVar9, iLocal_144, 1);
        func_285(&iVar5, &fVar10, Local_1537[iVar8 /*12*/].f_4, 1);
        iVar22 = func_28(0);
        iVar23 = func_537(&(Local_171.f_27), 0, 0);
        iVar6 = func_535(0, (iVar22 - iVar23));
        if (func_17(-1, 0))
        {
            func_322(iVar6);
        }
        if (iVar6 > 30000)
        {
            iVar13 = 1;
        }
        else
        {
            iVar13 = 6;
        }
        if (unk_0xA2BC31158C8CEFD2(iLocal_142, 2))
        {
            iVar14 = 2000;
        }
        else
        {
            iVar14 = 0;
        }
        if (func_325() || Local_171.f_3 == 6)
        {
            iVar16 = 2;
        }
        else
        {
            iVar16 = 1;
        }
        if (Local_171.f_25 >= 4)
        {
            iVar6 = 0;
        }
        if (func_18())
        {
            func_318(iVar0[0], iVar0[1], iVar0[2], uVar3[0], uVar3[1], uVar3[2], fVar9, fVar10, iVar6, func_284(Local_171.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, func_319(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
        }
        else if (func_282())
        {
            func_317(iVar0[0], iVar0[1], iVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, &iVar11, iVar13, bVar12, iVar14, func_319(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
        }
        else
        {
            func_308(iVar0[0], iVar0[1], iVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar4, iVar5, iVar6, func_284(Local_171.f_3, 0, 1, 0), &iVar11, iVar13, bVar12, iVar14, func_319(), iVar16, uVar17[0], uVar17[1], uVar17[2]);
        }
        func_304();
    }
}

void func_304()//Position - 0xA025
{
    float fVar0;
    int iVar1;
    float fVar2;
    
    fVar0 = func_307();
    if (fVar0 >= 0f)
    {
        if (Local_171.f_25 == 3)
        {
            if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
            {
                if (unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203()) || unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203()))
                {
                    iVar1 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
                    if (unk_0xD960230552BC4165(iVar1, 0))
                    {
                        func_306(iVar1, &fLocal_148);
                        fVar2 = (fVar0 + fLocal_148);
                        unk_0xD488560A9EFC8231(fVar2, 1, 21);
                        func_305(fVar0);
                        return;
                    }
                }
            }
        }
        if (func_293("AMCH_FLYLOW"))
        {
            unk_0x0D23E3918F7AF11B(1);
        }
        if (unk_0xA2BC31158C8CEFD2(iLocal_142, 4))
        {
            unk_0xCFF6AB47B7B014FF(iLocal_150);
            unk_0x3B76114EC84D5812(&iLocal_142, 4);
        }
        unk_0xD488560A9EFC8231(0f, 0, 21);
    }
}

void func_305(float fParam0)//Position - 0xA0D4
{
    float fVar0;
    
    if (unk_0xBF8C5F3C553FF575(&fVar0))
    {
        if (fVar0 > fParam0)
        {
            func_538(6);
            if (!unk_0xA2BC31158C8CEFD2(iLocal_142, 4))
            {
                unk_0x9964F5BBD9415AB7(iLocal_150, "Altitude_Warning", "EXILE_1", 1);
                unk_0xA1E7A40E1F56E511(&iLocal_142, 4);
            }
        }
        else
        {
            if (func_293("AMCH_FLYLOW"))
            {
                unk_0x0D23E3918F7AF11B(1);
            }
            if (unk_0xA2BC31158C8CEFD2(iLocal_142, 4))
            {
                unk_0xCFF6AB47B7B014FF(iLocal_150);
                unk_0x3B76114EC84D5812(&iLocal_142, 4);
            }
        }
    }
}

float func_306(int iParam0, float fParam1)//Position - 0xA146
{
    float fVar0;
    vector3 vVar1;
    var uVar2;
    
    vVar1 = { unk_0xACE5E491FC1B0D37(iParam0, 1) };
    unk_0xDF956C4106F1E9C5(vVar1, fParam1, 1, 0);
    unk_0xDF956C4106F1E9C5(vVar1, &uVar2, 0, 0);
    if (unk_0x39F26E3000BBB1F0())
    {
        func_538(3);
        unk_0xA1E7A40E1F56E511(&iLocal_142, 10);
        func_27(&uLocal_138, 0, 0);
    }
    else if (unk_0xA2BC31158C8CEFD2(iLocal_142, 10))
    {
        if (func_1(&uLocal_138, 2000, 0))
        {
            unk_0x3B76114EC84D5812(&iLocal_142, 10);
        }
    }
    if (*fParam1 < 0f)
    {
        *fParam1 = 0f;
    }
    fVar0 = (vVar1.z - *fParam1);
    if (fVar0 < 0f)
    {
        fVar0 = (fVar0 * -1f);
    }
    return fVar0;
}

float func_307()//Position - 0xA1DC
{
    switch (Local_171.f_3)
    {
        case 11:
            return 20f;
        
        case 12:
            return 100f;
        
        default:
    }
    return -1f;
}

void func_308(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18)//Position - 0xA20B
{
    char* sVar0;
    int iVar1;
    char* sVar2;
    
    if (func_314(0) == 0)
    {
        return;
    }
    func_313();
    iVar1 = 0;
    if (((Global_2589A2[0] != iParam0 || Global_2589A2[1] != iParam1) || Global_2589A2[2] != iParam2) || *iParam10)
    {
        iVar1 = 1;
    }
    Global_2589A2[0] = iParam0;
    Global_2589A2[1] = iParam1;
    Global_2589A2[2] = iParam2;
    Global_2589A2[3] = 0;
    Global_2589A2[4] = 0;
    if (Global_2589A2[0] != func_102())
    {
        if (iVar1 == 1)
        {
            sVar0 = unk_0xA09A99AC02B24954(Global_2589A2[0]);
            Global_2589A8[0 /*16*/] = { func_312(1, sVar0) };
        }
        if (iParam3 > 0)
        {
            func_309(iParam3, &(Global_2589A8[0 /*16*/]), -1, 109, 8, 1, sParam9, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, iParam16, 255, 0, 0, 0, 0, 1, -1);
        }
    }
    if (Global_2589A2[1] != func_102())
    {
        if (iVar1 == 1)
        {
            sVar0 = unk_0xA09A99AC02B24954(Global_2589A2[1]);
            Global_2589A8[1 /*16*/] = { func_312(2, sVar0) };
        }
        if (iParam4 > 0)
        {
            func_309(iParam4, &(Global_2589A8[1 /*16*/]), -1, 108, 7, 1, sParam9, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, iParam17, 255, 0, 0, 0, 0, 1, -1);
        }
    }
    if (Global_2589A2[2] != func_102())
    {
        if (iVar1 == 1)
        {
            sVar0 = unk_0xA09A99AC02B24954(Global_2589A2[2]);
            Global_2589A8[2 /*16*/] = { func_312(3, sVar0) };
        }
        if (iParam5 > 0)
        {
            func_309(iParam5, &(Global_2589A8[2 /*16*/]), -1, 107, 6, 1, sParam9, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, iParam18, 255, 0, 0, 0, 0, 1, -1);
        }
    }
    if (bParam12)
    {
        func_309(iParam6, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 0, 0, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
    }
    switch (iParam15)
    {
        case 0:
            if (unk_0x7C7787D2D7139A85() != func_102())
            {
                if (func_162(unk_0x7C7787D2D7139A85()) == 0)
                {
                    func_309(iParam7, unk_0xA09A99AC02B24954(unk_0x7C7787D2D7139A85()), -1, 1, 4, 1, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
                }
            }
            break;
        
        case 1:
            if (func_162(unk_0x7C7787D2D7139A85()) == 0)
            {
                func_309(iParam7, "HUD_USCORE", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
            }
            break;
        
        case 2:
            if (func_162(unk_0x7C7787D2D7139A85()) == 0)
            {
                func_309(iParam7, "HUD_UBEST", -1, 1, 4, 0, sParam9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
            }
            break;
        
        case 3:
            break;
    }
    sVar2 = "HUD_COUNTDOWN";
    if (!func_217(sParam14))
    {
        sVar2 = sParam14;
    }
    func_143(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
    *iParam10 = 0;
    func_142();
}

void func_309(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0xA4DA
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
            if (func_145(6, iVar1) == 0)
            {
                iVar0 = iVar1;
            }
        }
        iVar1++;
    }
    if (iVar0 > -1)
    {
        Global_14FB1E.f_1 = 1;
        func_144(6, iVar0);
        Global_14FB1E.f_EFB[iVar0] = iParam0;
        StringCopy(&(Global_14FB1E.f_EFB.f_B[iVar0 /*16*/]), sParam1, 64);
        Global_14FB1E.f_EFB.f_B7[iVar0] = iParam3;
        Global_14FB1E.f_EFB.f_AC[iVar0] = iParam2;
        Global_14FB1E.f_EFB.f_104[iVar0] = iParam4;
        Global_14FB1E.f_EFB.f_10F[iVar0] = iParam5;
        StringCopy(&(Global_14FB1E.f_EFB.f_11A[iVar0 /*16*/]), sParam6, 64);
        Global_14FB1E.f_EFB.f_1BB[iVar0] = iParam7;
        Global_14FB1E.f_EFB.f_1C6[iVar0] = fParam8;
        Global_14FB1E.f_EFB.f_1F1[iVar0] = iParam9;
        Global_14FB1E.f_EFB.f_1FC[iVar0] = iParam10;
        Global_14FB1E.f_EFB.f_CD[iVar0] = iParam11;
        Global_14FB1E.f_EFB.f_D8[iVar0] = iParam12;
        Global_14FB1E.f_EFB.f_E3[iVar0] = iParam13;
        Global_14FB1E.f_EFB.f_EE[iVar0] = iParam14;
        Global_14FB1E.f_EFB.f_F9[iVar0] = iParam15;
        Global_14FB1E.f_EFB.f_207[iVar0] = iParam16;
        Global_14FB1E.f_EFB.f_212[iVar0] = iParam17;
        Global_14FB1E.f_EFB.f_21D[iVar0] = iParam18;
        Global_14FB1E.f_EFB.f_228[iVar0] = iParam19;
        Global_14FB1E.f_EFB.f_233[iVar0] = iParam20;
        Global_14FB1E.f_EFB.f_23E[iVar0] = iParam21;
        Global_14FB1E.f_EFB.f_249[iVar0] = iParam22;
        Global_14FB1E.f_EFB.f_254[iVar0] = iParam23;
        Global_14FB1E.f_EFB.f_25F[iVar0] = iParam24;
        Global_14FB1E.f_EFB.f_C2[iVar0] = iParam25;
        if (iParam15 == 5 && func_311())
        {
            Global_14FB1E.f_455 = 1;
        }
        if (unk_0xE434AB6E3DE89861())
        {
            iVar2 = 0;
            unk_0x419479F67BC2C70F(&iVar3, &iVar4);
            if (iVar3 == 1280 && iVar4 >= 960)
            {
                iVar2 = 1;
            }
            if (iParam0 > 99999999)
            {
                Global_14FB1E.f_459 = 1;
            }
            else if (iParam0 > 9999999 || iVar2)
            {
                Global_14FB1E.f_458 = 1;
            }
            else if (iParam0 > 999)
            {
                Global_14FB1E.f_455 = 1;
            }
            if (func_310())
            {
                Global_14FB1E.f_459 = 1;
            }
        }
    }
}

int func_310()//Position - 0xA74B
{
    int iVar0;
    var uVar1;
    
    if (unk_0xE434AB6E3DE89861())
    {
        unk_0x419479F67BC2C70F(&iVar0, &uVar1);
        if (iVar0 <= 1024)
        {
            return 1;
        }
    }
    return 0;
}

int func_311()//Position - 0xA76F
{
    if (((unk_0xB859EDA9E476E45A() == 8 || unk_0xB859EDA9E476E45A() == 9) || unk_0xB859EDA9E476E45A() == 10) || unk_0xB859EDA9E476E45A() == 12)
    {
        return 1;
    }
    return 0;
}

struct<16> func_312(int iParam0, char* sParam1)//Position - 0xA7AD
{
    struct<16> Var0;
    
    switch (iParam0)
    {
        case 0:
            StringCopy(&Var0, sParam1, 64);
            return Var0;
            break;
        
        case 1:
            StringCopy(&Var0, unk_0xD54FB72F71EFE6C4("HUD_POSFIRST"), 64);
            break;
        
        case 2:
            StringCopy(&Var0, unk_0xD54FB72F71EFE6C4("HUD_POSSECOND"), 64);
            break;
        
        case 3:
            StringCopy(&Var0, unk_0xD54FB72F71EFE6C4("HUD_POSTHIRD"), 64);
            break;
        
        case 4:
            StringCopy(&Var0, unk_0xD54FB72F71EFE6C4("HUD_POSFOURTH"), 64);
            break;
        
        case 5:
            StringCopy(&Var0, unk_0xD54FB72F71EFE6C4("HUD_POSFIFTH"), 64);
            break;
    }
    StringConCat(&Var0, " ", 64);
    StringConCat(&Var0, sParam1, 64);
    return Var0;
}

void func_313()//Position - 0xA84F
{
    unk_0x0AF55029F939BA65(8);
    unk_0x0AF55029F939BA65(9);
    unk_0x0AF55029F939BA65(6);
    unk_0x0AF55029F939BA65(7);
    Global_258B80 = 1;
}

int func_314(bool bParam0)//Position - 0xA872
{
    if (func_316())
    {
        return 0;
    }
    if (func_315())
    {
        return 0;
    }
    if (!bParam0)
    {
        if (func_12(unk_0x7C7787D2D7139A85(), 1, 1) == 0)
        {
            return 0;
        }
    }
    return 1;
}

bool func_315()//Position - 0xA8A9
{
    return Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_C4 != 0;
}

bool func_316()//Position - 0xA8C0
{
    return unk_0xA2BC31158C8CEFD2(Global_240006, 12);
}

void func_317(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0xA8D2
{
    char* sVar0;
    int iVar1;
    char* sVar2;
    
    if (func_314(0) == 0)
    {
        return;
    }
    func_313();
    iVar1 = 0;
    if (((Global_2589A2[0] != iParam0 || Global_2589A2[1] != iParam1) || Global_2589A2[2] != iParam2) || *iParam9)
    {
        iVar1 = 1;
    }
    Global_2589A2[0] = iParam0;
    Global_2589A2[1] = iParam1;
    Global_2589A2[2] = iParam2;
    Global_2589A2[3] = 0;
    Global_2589A2[4] = 0;
    if (Global_2589A2[0] != func_102())
    {
        if (iVar1 == 1)
        {
            sVar0 = unk_0xA09A99AC02B24954(Global_2589A2[0]);
            Global_2589A8[0 /*16*/] = { func_312(1, sVar0) };
        }
        if (iParam3 > 0)
        {
            func_143(iParam3, &(Global_2589A8[0 /*16*/]), 0, 0, -1, 0, 8, 1, 109, 0, 0, 0, 109, 0, iParam15, 0, 0, -1);
        }
    }
    if (Global_2589A2[1] != func_102())
    {
        if (iVar1 == 1)
        {
            sVar0 = unk_0xA09A99AC02B24954(Global_2589A2[1]);
            Global_2589A8[1 /*16*/] = { func_312(2, sVar0) };
        }
        if (iParam4 > 0)
        {
            func_143(iParam4, &(Global_2589A8[1 /*16*/]), 0, 0, -1, 0, 7, 1, 108, 0, 0, 0, 108, 0, iParam16, 0, 0, -1);
        }
    }
    if (Global_2589A2[2] != func_102())
    {
        if (iVar1 == 1)
        {
            sVar0 = unk_0xA09A99AC02B24954(Global_2589A2[2]);
            Global_2589A8[2 /*16*/] = { func_312(3, sVar0) };
        }
        if (iParam5 > 0)
        {
            func_143(iParam5, &(Global_2589A8[2 /*16*/]), 0, 0, -1, 0, 6, 1, 107, 0, 0, 0, 107, 0, iParam17, 0, 0, -1);
        }
    }
    if (bParam11)
    {
        func_143(iParam6, "HUD_ATTEMPTS", 0, 0, -1, 0, 5, 0, 1, 1, iParam12, 0, 0, 0, 0, 0, 0, -1);
    }
    switch (iParam14)
    {
        case 0:
            if (unk_0x7C7787D2D7139A85() != func_102())
            {
                if (func_162(unk_0x7C7787D2D7139A85()) == 0)
                {
                    func_143(iParam7, unk_0xA09A99AC02B24954(unk_0x7C7787D2D7139A85()), 0, 0, -1, 0, 4, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
                }
            }
            break;
        
        case 1:
            if (func_162(unk_0x7C7787D2D7139A85()) == 0)
            {
                func_143(iParam7, "HUD_USCORE", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
            }
            break;
        
        case 2:
            if (func_162(unk_0x7C7787D2D7139A85()) == 0)
            {
                func_143(iParam7, "HUD_UBEST", 0, 0, -1, 0, 4, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
            }
            break;
        
        case 3:
            break;
    }
    sVar2 = "HUD_COUNTDOWN";
    if (!func_217(sParam13))
    {
        sVar2 = sParam13;
    }
    func_143(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam10, 0, 0, 0, iParam10, 0, 0, 0, 0, -1);
    *iParam9 = 0;
    func_142();
}

void func_318(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, char* sParam9, int iParam10, int iParam11, bool bParam12, int iParam13, char* sParam14, int iParam15, var uParam16, var uParam17, var uParam18)//Position - 0xAB5C
{
    char* sVar0;
    int iVar1;
    char* sVar2;
    
    if (func_314(0) == 0)
    {
        return;
    }
    func_313();
    iVar1 = 0;
    if (((Global_2589A2[0] != iParam0 || Global_2589A2[1] != iParam1) || Global_2589A2[2] != iParam2) || *iParam10)
    {
        iVar1 = 1;
    }
    Global_2589A2[0] = iParam0;
    Global_2589A2[1] = iParam1;
    Global_2589A2[2] = iParam2;
    Global_2589A2[3] = 0;
    Global_2589A2[4] = 0;
    if (Global_2589A2[0] != func_102())
    {
        if (iVar1 == 1)
        {
            sVar0 = unk_0xA09A99AC02B24954(Global_2589A2[0]);
            Global_2589A8[0 /*16*/] = { func_312(1, sVar0) };
        }
        if (fParam3 > 0f)
        {
            func_309(-1, &(Global_2589A8[0 /*16*/]), -1, 109, 8, 1, sParam9, 1, fParam3, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam16, 255, 0, 0, 0, 0, 1, -1);
        }
    }
    if (Global_2589A2[1] != func_102())
    {
        if (iVar1 == 1)
        {
            sVar0 = unk_0xA09A99AC02B24954(Global_2589A2[1]);
            Global_2589A8[1 /*16*/] = { func_312(2, sVar0) };
        }
        if (fParam4 > 0f)
        {
            func_309(-1, &(Global_2589A8[1 /*16*/]), -1, 108, 7, 1, sParam9, 1, fParam4, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam17, 255, 0, 0, 0, 0, 1, -1);
        }
    }
    if (Global_2589A2[2] != func_102())
    {
        if (iVar1 == 1)
        {
            sVar0 = unk_0xA09A99AC02B24954(Global_2589A2[2]);
            Global_2589A8[2 /*16*/] = { func_312(3, sVar0) };
        }
        if (fParam5 > 0f)
        {
            func_309(-1, &(Global_2589A8[2 /*16*/]), -1, 107, 6, 1, sParam9, 1, fParam5, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam18, 255, 0, 0, 0, 0, 1, -1);
        }
    }
    if (bParam12)
    {
        func_309(-1, "HUD_ATTEMPTS", -1, 1, 5, 0, sParam9, 1, fParam6, 1, iParam13, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
    }
    switch (iParam15)
    {
        case 0:
            if (unk_0x7C7787D2D7139A85() != func_102())
            {
                if (func_162(unk_0x7C7787D2D7139A85()) == 0)
                {
                    func_309(-1, unk_0xA09A99AC02B24954(unk_0x7C7787D2D7139A85()), -1, 1, 4, 1, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
                }
            }
            break;
        
        case 1:
            if (func_162(unk_0x7C7787D2D7139A85()) == 0)
            {
                func_309(-1, "HUD_USCORE", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
            }
            break;
        
        case 2:
            if (func_162(unk_0x7C7787D2D7139A85()) == 0)
            {
                func_309(-1, "HUD_UBEST", -1, 1, 4, 0, sParam9, 1, fParam7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
            }
            break;
        
        case 3:
            break;
    }
    sVar2 = "HUD_COUNTDOWN";
    if (!func_217(sParam14))
    {
        sVar2 = sParam14;
    }
    if (iParam8 != -10)
    {
        func_143(iParam8, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
    }
    *iParam10 = 0;
    func_142();
}

char* func_319()//Position - 0xAE36
{
    return "HUD_COUNTDOWN";
    switch (func_321(unk_0x7C7787D2D7139A85()))
    {
        case 131:
            return "AET_HOT_TARG";
        
        case 132:
            return "AET_CHK_COLL";
        
        case 133:
            switch (func_320())
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

int func_320()//Position - 0xAFE0
{
    if (func_321(unk_0x7C7787D2D7139A85()) == 133)
    {
        return Global_26A0A9.f_12D3;
    }
    return -1;
}

int func_321(int iParam0)//Position - 0xB003
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        return Global_18DB1B[iVar0 /*614*/];
    }
    return -1;
}

void func_322(int iParam0)//Position - 0xB022
{
    if (IntToFloat(iParam0) < unk_0x9927BD5F023FA79D())
    {
        if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 0))
        {
            if (!unk_0x9591DE0F00127F2A(&(Global_26A0A9.f_1281)))
            {
                unk_0x530EC874503CCE08(&(Global_26A0A9.f_1281));
            }
            unk_0x597D844D285B9272(1);
            unk_0x81995F6F93D8C987("FM_COUNTDOWN_30S_FIRA");
            unk_0x8E3496DF5BF7F24D("GTAO_FM_Events_30_Sec_Countdown_Scene");
            unk_0x70431C02FF392D24("DisableFlightMusic", 0);
            unk_0x70431C02FF392D24("WantedMusicDisabled", 0);
            unk_0x70431C02FF392D24("AllowScoreAndRadio", 0);
            if (Global_26A0A9.f_1289 > -1)
            {
                unk_0x0972EA9E8102C153(Global_26A0A9.f_1289);
                Global_26A0A9.f_1289 = -1;
            }
            Global_26A0A9.f_127F = 0;
        }
    }
    else if (iParam0 < 30000)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 0))
        {
            if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 4))
            {
                if (!unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 2))
                {
                    if (unk_0xA033123384B9C948())
                    {
                        if ((!unk_0x2553916E420E8EF0(unk_0x3F8B5B092A20BEB5(unk_0x3C40E7561F9217C8()), "OFF") && unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0)) && !unk_0x9591DE0F00127F2A(&(Global_26A0A9.f_1281)))
                        {
                            StringCopy(&(Global_26A0A9.f_1281), "", 32);
                            unk_0x81995F6F93D8C987("FM_COUNTDOWN_30S_FIRA");
                            unk_0x8E3496DF5BF7F24D("GTAO_FM_Events_30_Sec_Countdown_Scene");
                            unk_0x70431C02FF392D24("DisableFlightMusic", 0);
                            unk_0x70431C02FF392D24("WantedMusicDisabled", 0);
                            unk_0x70431C02FF392D24("AllowScoreAndRadio", 0);
                            unk_0x597D844D285B9272(1);
                            unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 2);
                        }
                    }
                }
                else if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) && unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 5))
                {
                    unk_0x530EC874503CCE08("OFF");
                }
            }
            else if (!unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 1))
            {
                if (iParam0 < 10000)
                {
                    unk_0x81995F6F93D8C987("FM_COUNTDOWN_10S");
                }
                else if (iParam0 < 20000)
                {
                    unk_0x81995F6F93D8C987("FM_COUNTDOWN_20S");
                }
                else
                {
                    unk_0x81995F6F93D8C987("FM_COUNTDOWN_30S");
                }
                unk_0x7D17F1A2E0EEDBB9("GTAO_FM_Events_30_Sec_Countdown_Scene");
                unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 1);
            }
            else if (!unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 4))
            {
                if (iParam0 < 27500)
                {
                    if (unk_0xF4A14417C01DEC46() != 0)
                    {
                        if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) && !unk_0xC9AC836B1D10CB0F())
                        {
                            StringCopy(&(Global_26A0A9.f_1281), unk_0xF3539EA77B126430(), 32);
                            unk_0x530EC874503CCE08("OFF");
                        }
                        unk_0x597D844D285B9272(1);
                        unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 4);
                    }
                }
            }
            if (iParam0 < 10000)
            {
                if (!unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 3))
                {
                    Global_26A0A9.f_1289 = unk_0x04B8CCFB93858A27();
                    unk_0x9964F5BBD9415AB7(Global_26A0A9.f_1289, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", 0);
                    unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 3);
                }
            }
        }
        else if (iParam0 > 10000)
        {
            if (!unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 0))
            {
                Global_26A0A9.f_127F = 0;
                Global_26A0A9.f_1289 = -1;
                unk_0xF45B7CAEA9F06737("FM_COUNTDOWN_30S_KILL");
                unk_0x597D844D285B9272(0);
                unk_0x81995F6F93D8C987("FM_PRE_COUNTDOWN_30S");
                unk_0x70431C02FF392D24("DisableFlightMusic", 1);
                unk_0x70431C02FF392D24("WantedMusicDisabled", 1);
                unk_0x70431C02FF392D24("AllowScoreAndRadio", 1);
                unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 0);
                if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) || unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 2))
                {
                    unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 2);
                    unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 5);
                }
                else
                {
                    unk_0x3B76114EC84D5812(&(Global_26A0A9.f_127F), 5);
                    unk_0x3B76114EC84D5812(&(Global_26A0A9.f_127F), 2);
                }
            }
        }
    }
    else if (iParam0 < 40000 && iParam0 > 30000)
    {
        if (!unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 0))
        {
            Global_26A0A9.f_127F = 0;
            Global_26A0A9.f_1289 = -1;
            unk_0xF45B7CAEA9F06737("FM_COUNTDOWN_30S_KILL");
            unk_0x597D844D285B9272(0);
            unk_0x81995F6F93D8C987("FM_PRE_COUNTDOWN_30S");
            unk_0x70431C02FF392D24("DisableFlightMusic", 1);
            unk_0x70431C02FF392D24("WantedMusicDisabled", 1);
            unk_0x70431C02FF392D24("AllowScoreAndRadio", 1);
            unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 0);
            if (!unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
            {
                unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 2);
                unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 5);
            }
            else
            {
                unk_0x3B76114EC84D5812(&(Global_26A0A9.f_127F), 2);
                unk_0x3B76114EC84D5812(&(Global_26A0A9.f_127F), 5);
            }
        }
    }
}

var func_323()//Position - 0xB405
{
    if (unk_0xD4B321D9096B01FC(func_324()))
    {
        return func_324();
    }
    return func_97();
}

var func_324()//Position - 0xB423
{
    return Global_240006.f_3;
}

int func_325()//Position - 0xB431
{
    switch (Local_171.f_3)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 8:
        case 9:
        case 11:
        case 12:
        case 13:
            return 1;
        
        default:
    }
    return 0;
}

void func_326()//Position - 0xB48A
{
    int iVar0;
    struct<42> Var1;
    int iVar2;
    int iVar3;
    
    Var1 = -1;
    Var1.f_16 = -1082130432;
    Var1.f_17 = 3;
    Var1.f_27 = -1;
    Var1.f_29 = -1;
    iVar0 = 0;
    while (iVar0 < unk_0xACF7D965CEBE5714())
    {
        Local_192.f_216[iVar0 /*42*/] = { Var1 };
        Local_192.f_216[iVar0 /*42*/].f_1 = func_102();
        if (Local_171.f_4[iVar0] > -1)
        {
            iVar3 = unk_0x9DBE48BD26DE1888(Local_171.f_4[iVar0]);
            if (unk_0x2700CB8907086DF3(iVar3))
            {
                iVar2 = unk_0xD7EB9DC48246DA95(iVar3);
                if (!func_14(iVar2, 0))
                {
                    Local_192.f_216[iVar0 /*42*/] = Local_171.f_4[iVar0];
                    Local_192.f_216[iVar0 /*42*/].f_1 = iVar2;
                    Local_192.f_216[iVar0 /*42*/].f_9 = Local_1537[Local_171.f_4[iVar0] /*12*/].f_4;
                    Local_192.f_216[iVar0 /*42*/].f_1F = -1;
                    Local_192.f_1.f_6C = 8;
                }
            }
        }
        iVar0++;
    }
}

void func_327()//Position - 0xB577
{
    unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_6C6), 19);
}

int func_328(int iParam0)//Position - 0xB58C
{
    int iVar0;
    
    if (iParam0 >= 0)
    {
        iVar0 = Local_171.f_4[iParam0];
        if (iVar0 >= 0)
        {
            if (func_21(Local_1537[iVar0 /*12*/].f_4, 0))
            {
                return 1;
            }
        }
    }
    return 0;
}

void func_329()//Position - 0xB5C1
{
}

void func_330()//Position - 0xB5C9
{
    char* sVar0;
    int iVar1;
    float fVar2;
    bool bVar3;
    float fVar4;
    
    func_285(&iVar1, &fVar2, iLocal_144, 1);
    switch (Local_171.f_3)
    {
        case 2:
            sVar0 = "MP_Highest_Speed_Vehicle_Boost_Scene";
            func_332(sVar0, fVar2 >= 70f);
            if (unk_0x6FE3A7E505FEC20C(sVar0))
            {
                fVar2 = func_331(fVar2, 110f);
                fVar2 = ((fVar2 - 70f) / 40f);
                unk_0x3764734EE021E6E2(sVar0, "HighestSpeedEngineBoost", fVar2);
            }
            break;
        
        case 8:
            sVar0 = "MP_Near_Miss_High_Score_Boost_Scene";
            fVar4 = unk_0xA549FF6E70CC4566();
            bVar3 = (iVar1 >= 30 && fVar4 >= 40f);
            func_332(sVar0, bVar3);
            if (unk_0x6FE3A7E505FEC20C(sVar0))
            {
                fVar2 = SYSTEM::TO_FLOAT(iVar1);
                fVar2 = func_331(fVar2, 30f);
                fVar2 = ((fVar2 - 15f) / 15f);
                fVar4 = func_331(fVar4, 70f);
                fVar4 = ((fVar4 - 40f) / 30f);
                unk_0x3764734EE021E6E2(sVar0, "VehiclePassByBoost", (fVar2 * fVar4));
            }
            if (iLocal_149 != iLocal_144)
            {
                if (iLocal_144 > 0)
                {
                    unk_0x9964F5BBD9415AB7(iLocal_151, "Near_Miss_Counter", "GTAO_FM_Events_Soundset", 0);
                    unk_0xEC93A4D791E42F8E(iLocal_151, "Count", SYSTEM::TO_FLOAT(iVar1));
                }
                else
                {
                    unk_0x9964F5BBD9415AB7(-1, "Near_Miss_Counter_Reset", "GTAO_FM_Events_Soundset", 0);
                }
            }
            iLocal_149 = iLocal_144;
            break;
    }
    if (func_20(0))
    {
        if (!unk_0xA2BC31158C8CEFD2(iLocal_142, 3))
        {
            if (func_257(1))
            {
                unk_0x9964F5BBD9415AB7(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
            }
            else
            {
                unk_0x9964F5BBD9415AB7(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
            }
            unk_0xA1E7A40E1F56E511(&iLocal_142, 3);
        }
    }
    else if (unk_0xA2BC31158C8CEFD2(iLocal_142, 3))
    {
        if (func_257(1))
        {
            unk_0x9964F5BBD9415AB7(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
        }
        else
        {
            unk_0x9964F5BBD9415AB7(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
        }
        unk_0x3B76114EC84D5812(&iLocal_142, 3);
    }
}

float func_331(float fParam0, float fParam1)//Position - 0xB786
{
    if (fParam0 > fParam1)
    {
        return fParam1;
    }
    return fParam0;
}

void func_332(char* sParam0, bool bParam1)//Position - 0xB79D
{
    if (bParam1)
    {
        if (!unk_0x6FE3A7E505FEC20C(sParam0))
        {
            unk_0x7D17F1A2E0EEDBB9(sParam0);
        }
    }
    else if (unk_0x6FE3A7E505FEC20C(sParam0))
    {
        unk_0x8E3496DF5BF7F24D(sParam0);
    }
}

void func_333()//Position - 0xB7CD
{
    int iVar0;
    
    if ((!func_162(unk_0x7C7787D2D7139A85()) && !func_14(unk_0x7C7787D2D7139A85(), 0)) && func_12(unk_0x7C7787D2D7139A85(), 1, 1))
    {
        iVar0 = func_358();
        if (iVar0 != Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_4)
        {
            if (func_21(iVar0, iLocal_141) || func_357(iVar0, iLocal_141))
            {
                if (!func_356() || func_1(&uLocal_130, 1000, 0))
                {
                    func_27(&uLocal_130, 0, 0);
                    iLocal_141 = iVar0;
                    Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_4 = iVar0;
                    func_336();
                    if (iLocal_140 == 0)
                    {
                        iLocal_140 = unk_0x169A8AC9F93C2727();
                    }
                    if (Local_1538.f_B == 0)
                    {
                        Local_1538.f_B = unk_0x71EC776E812C6A0A();
                    }
                }
            }
        }
        iLocal_144 = func_334();
    }
}

int func_334()//Position - 0xB88F
{
    int iVar0;
    float fVar1;
    int iVar2;
    
    iVar0 = -1;
    switch (Local_171.f_3)
    {
        case 0:
            fVar1 = unk_0xCD3F041762952386();
            break;
        
        case 1:
            fVar1 = unk_0xB09A2F5F0867A581();
            break;
        
        case 2:
            fVar1 = unk_0xA549FF6E70CC4566();
            break;
        
        case 3:
            fVar1 = unk_0x5B2352CA5B7F1883();
            break;
        
        case 4:
            fVar1 = unk_0x2D8B985B4794287B();
            break;
        
        case 5:
            fVar1 = unk_0xC6E61C78F0B50CFA();
            break;
        
        case 8:
            iVar0 = unk_0x2C89EAB6B9AB9200();
            break;
        
        case 9:
            fVar1 = unk_0xBC0D3C5539BBB73D();
            break;
        
        case 11:
            fVar1 = unk_0x786522B2FC09095D();
            break;
        
        case 12:
            fVar1 = unk_0x786522B2FC09095D();
            break;
        
        case 13:
            fVar1 = unk_0xD9848100CA27474C();
            break;
    }
    if (func_18())
    {
        fVar1 = (fVar1 * 10f);
        iVar0 = SYSTEM::ROUND(fVar1);
    }
    iVar2 = unk_0x25A1A0BF87F74E56(iVar0);
    func_335(&iVar2);
    if (iVar2 == iLocal_143)
    {
        if (func_21(iVar2, 0))
        {
            if (!unk_0xA2BC31158C8CEFD2(iLocal_142, 1))
            {
                func_27(&uLocal_132, 0, 0);
                Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_4.f_2 = func_537(&uLocal_132, 0, 0);
                unk_0xA1E7A40E1F56E511(&iLocal_142, 1);
            }
            else if ((func_537(&uLocal_132, 0, 0) % 1000) == 0)
            {
                Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_4.f_2 = func_537(&uLocal_132, 0, 0);
            }
        }
    }
    else
    {
        unk_0x3B76114EC84D5812(&iLocal_142, 1);
    }
    if ((func_21(iLocal_143, 0) && !func_21(iVar2, 0)) && !func_1(&uLocal_134, 2000, 0))
    {
        iVar2 = iLocal_143;
        unk_0xA1E7A40E1F56E511(&iLocal_142, 2);
    }
    else
    {
        iLocal_143 = iVar2;
        func_46(&uLocal_134);
        unk_0x3B76114EC84D5812(&iLocal_142, 2);
    }
    return iVar2;
}

void func_335(int iParam0)//Position - 0xBA3F
{
    switch (Local_171.f_3)
    {
        case 2:
            if (*iParam0 > 0)
            {
                if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
                {
                    if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
                    {
                        if ((((unk_0xE6B36186AADE8F35(unk_0x0FA8183DAD2B3203()) || unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203())) || unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203())) || unk_0x15B60611100CF0E3(unk_0x0FA8183DAD2B3203())) || unk_0xAC731E4610575F5E(unk_0x0FA8183DAD2B3203()))
                        {
                            *iParam0 = 0;
                        }
                    }
                    else
                    {
                        *iParam0 = 0;
                    }
                }
            }
            break;
    }
}

void func_336()//Position - 0xBAC8
{
    if (!unk_0xA2BC31158C8CEFD2(Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_1, 2))
    {
        unk_0xA1E7A40E1F56E511(&(Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_1), 2);
        func_337(1);
    }
}

void func_337(bool bParam0)//Position - 0xBAF9
{
    var uVar0;
    
    if (bParam0)
    {
        if (!unk_0xA2BC31158C8CEFD2(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1, 7))
        {
            if (((!func_106(unk_0x7C7787D2D7139A85()) && !func_7(unk_0x7C7787D2D7139A85())) && !func_162(unk_0x7C7787D2D7139A85())) && !func_355(unk_0x7C7787D2D7139A85()))
            {
                if (func_165())
                {
                    func_348(2, 0, 1);
                    func_347();
                }
                if (func_346(0))
                {
                    uVar0 = func_208(2480, -1, 0);
                    unk_0x3B76114EC84D5812(&uVar0, 0);
                    func_347();
                }
                if (func_346(func_345(func_321(unk_0x7C7787D2D7139A85()))))
                {
                    uVar0 = func_208(2480, -1, 0);
                    unk_0x3B76114EC84D5812(&uVar0, func_345(func_321(unk_0x7C7787D2D7139A85())));
                    func_347();
                }
                if (func_344())
                {
                    func_347();
                }
                if (func_321(unk_0x7C7787D2D7139A85()) > -1)
                {
                    unk_0xA1E7A40E1F56E511(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 7);
                    if (func_321(unk_0x7C7787D2D7139A85()) == 236)
                    {
                        func_343();
                    }
                    func_340(func_342(func_321(unk_0x7C7787D2D7139A85())));
                }
            }
        }
    }
    else if (unk_0xA2BC31158C8CEFD2(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1, 7))
    {
        unk_0x3B76114EC84D5812(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 7);
        func_338();
    }
}

void func_338()//Position - 0xBC2E
{
    if (func_339())
    {
        unk_0x3B76114EC84D5812(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 17);
    }
}

bool func_339()//Position - 0xBC50
{
    return unk_0xA2BC31158C8CEFD2(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1, 17);
}

void func_340(int iParam0)//Position - 0xBC6B
{
    int iVar0;
    
    if (Global_40001.f_217B)
    {
        return;
    }
    iVar0 = 0;
    while (iVar0 < 3)
    {
        if (Global_200000[func_341() /*10828*/].f_1818.f_FAF[iVar0 /*3*/] == iParam0)
        {
            if (Global_14073A.f_1[iVar0] == -1)
            {
                Global_14073A.f_1[iVar0] = iParam0;
                Global_14073A = 1;
                return;
            }
        }
        iVar0++;
    }
}

int func_341()//Position - 0xBCCE
{
    int iVar0;
    
    iVar0 = 0;
    return iVar0;
}

int func_342(int iParam0)//Position - 0xBCDB
{
    switch (iParam0)
    {
        case 236:
            return 67;
        
        case 133:
            return 69;
        
        default:
    }
    return 68;
}

void func_343()//Position - 0xBD02
{
    if (!func_339())
    {
        Global_26A0A9.f_18A1 = unk_0x169A8AC9F93C2727();
        unk_0xA1E7A40E1F56E511(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 17);
    }
}

int func_344()//Position - 0xBD30
{
    if (Global_2531AD.f_483.f_5 == -1)
    {
        return 0;
    }
    return 1;
}

int func_345(int iParam0)//Position - 0xBD4A
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
        
        default:
    }
    return Global_40001.f_5C46;
}

bool func_346(int iParam0)//Position - 0xBDDD
{
    int iVar0;
    
    iVar0 = func_208(2480, -1, 0);
    return unk_0xA2BC31158C8CEFD2(iVar0, iParam0);
}

void func_347()//Position - 0xBDF8
{
    if (func_344())
    {
        Global_2531AD.f_483.f_10 = 1;
    }
}

void func_348(int iParam0, int iParam1, bool bParam2)//Position - 0xBE11
{
    if (func_165())
    {
        if (iParam1 == 1)
        {
            if (Global_26A0A9.f_112B == -1)
            {
                Global_26A0A9.f_112B = Global_40001.f_66D9;
            }
            func_27(&(Global_26A0A9.f_1129), 0, 0);
            if (bParam2)
            {
                if (Global_26A0A9.f_112E == -1)
                {
                    Global_26A0A9.f_112E = Global_40001.f_66DA;
                }
                func_27(&(Global_26A0A9.f_112C), 0, 0);
            }
            else
            {
                Global_1406A1 = 0;
                Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_8 = 0;
                func_354(1);
            }
        }
        else
        {
            Global_1406A1 = 0;
            Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_8 = 0;
            func_354(1);
        }
        if ((!unk_0xA51CBC95AC3A4B14() && !func_353()) && !func_349(unk_0x7C7787D2D7139A85()))
        {
            Global_EC6CC = 0;
        }
        unk_0xD1BC874F2613DFA7(0, -1, -1, iParam0);
    }
}

int func_349(int iParam0)//Position - 0xBEDB
{
    if (func_350(iParam0, 1, 0))
    {
        if (Global_1844AE[iParam0 /*871*/] != 6)
        {
            return 1;
        }
    }
    return 0;
}

int func_350(int iParam0, bool bParam1, bool bParam2)//Position - 0xBF00
{
    if (bParam1)
    {
        if (func_351(iParam0))
        {
            return 1;
        }
    }
    if (!bParam2)
    {
    }
    if (Global_1844AE[iParam0 /*871*/] == -1)
    {
        return 0;
    }
    return 1;
}

bool func_351(int iParam0)//Position - 0xBF32
{
    return func_352(iParam0);
}

bool func_352(int iParam0)//Position - 0xBF40
{
    return unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_D.f_1, 0);
}

bool func_353()//Position - 0xBF5A
{
    return Global_255E41.f_2E4;
}

void func_354(bool bParam0)//Position - 0xBF69
{
    if (unk_0x393E9918BC37548A())
    {
        if (!func_165())
        {
            if (func_12(unk_0x7C7787D2D7139A85(), 1, 0))
            {
                unk_0x66882C4C10EA83B3(unk_0x0FA8183DAD2B3203(), 1);
                unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 342, false);
                unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 122, false);
            }
            unk_0xDA125B58E613D8FB(unk_0x7C7787D2D7139A85(), 1f);
            unk_0x62644D7A979A06C2(0);
            unk_0x426221D97FBAC579(1);
            if (Global_1406A1.f_1 == 0 || Global_1406A1.f_2 == 1)
            {
                Global_1406A1.f_2 = 0;
                if (bParam0)
                {
                    unk_0xD00A04276B590461(0, 0);
                }
            }
        }
        else
        {
            if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
            {
                unk_0x66882C4C10EA83B3(unk_0x0FA8183DAD2B3203(), 0);
                unk_0xE5DAA5553A176799(unk_0x0FA8183DAD2B3203(), joaat("weapon_unarmed"), true);
                unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 342, true);
                unk_0x1DB66BD2267055C0(unk_0x0FA8183DAD2B3203(), 122, true);
                unk_0xDA125B58E613D8FB(unk_0x7C7787D2D7139A85(), 0.5f);
                if (Global_1406A1.f_1 == 0 || Global_1406A1.f_2 == 1)
                {
                    unk_0xD00A04276B590461(1, 0);
                }
            }
            unk_0x62644D7A979A06C2(1);
            unk_0x426221D97FBAC579(0);
        }
    }
}

int func_355(int iParam0)//Position - 0xC063
{
    int iVar0;
    int iVar1;
    
    if (!unk_0x393E9918BC37548A())
    {
        return 0;
    }
    if (iParam0 == unk_0x7C7787D2D7139A85())
    {
        return Global_26463C;
    }
    else
    {
        iVar0 = unk_0x23625FE58BACEBFD(iParam0);
        if (unk_0xD4B321D9096B01FC(iVar0))
        {
            iVar1 = unk_0x7F375072508F738F(iVar0);
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

int func_356()//Position - 0xC0CF
{
    switch (Local_171.f_3)
    {
        case 2:
        case 3:
        case 5:
        case 4:
        case 8:
        case 1:
        case 6:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
            return 1;
        
        default:
    }
    return 0;
}

int func_357(int iParam0, int iParam1)//Position - 0xC12E
{
    if (Local_171.f_3 == 17)
    {
        if (iParam0 < iParam1)
        {
            return 1;
        }
    }
    return 0;
}

int func_358()//Position - 0xC14C
{
    int iVar0;
    float fVar1;
    int iVar2;
    int iVar3;
    
    if (!func_373())
    {
        if (Local_171.f_3 == 14)
        {
            if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0) && func_372(unk_0x0FA8183DAD2B3203(), 0) == -1)
            {
                iVar2 = unk_0xA4BF70099C074BA0(unk_0x0FA8183DAD2B3203());
                if ((!func_371(&iVar2, 0) || unk_0x7F375072508F738F(iVar2) != joaat("dodo")) && unk_0x916AF183F71F17C1(iVar2))
                {
                    func_364(Local_171.f_3 != 14, 1, 0);
                    if (func_363())
                    {
                        iVar3 = func_362();
                        if (iVar3 >= 0)
                        {
                            if (!unk_0xA2BC31158C8CEFD2(Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_8[func_361(iVar3)], func_360(iVar3)))
                            {
                                iLocal_145++;
                                unk_0xA1E7A40E1F56E511(&(Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_8[func_361(iVar3)]), func_360(iVar3));
                            }
                        }
                    }
                    iVar0 = iLocal_145;
                }
            }
        }
        else
        {
            iVar0 = func_359();
        }
    }
    else
    {
        unk_0xAC2D5F3124769C68(&fVar1);
        if (func_18())
        {
            fVar1 = (fVar1 * 10f);
        }
        iVar0 = SYSTEM::ROUND(fVar1);
    }
    return unk_0x25A1A0BF87F74E56(iVar0);
}

int func_359()//Position - 0xC255
{
    switch (Local_171.f_3)
    {
        case 14:
            return 0;
        
        case 4:
            return 0;
        
        default:
    }
    return -1;
}

int func_360(int iParam0)//Position - 0xC27C
{
    if (iParam0 < 31)
    {
        return iParam0;
    }
    else if (iParam0 < 62)
    {
        return (iParam0 - 31);
    }
    return (iParam0 - func_361(iParam0) * 31);
}

int func_361(int iParam0)//Position - 0xC2AD
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

int func_362()//Position - 0xC2D3
{
    return iLocal_112;
}

int func_363()//Position - 0xC2DD
{
    if (iLocal_119 == 1)
    {
        iLocal_119 = 0;
        return 1;
    }
    return 0;
}

void func_364(bool bParam0, bool bParam1, int iParam2)//Position - 0xC2F3
{
    func_366(bParam0, iParam2);
    if (bParam1)
    {
        if (vLocal_123.z < vLocal_124.z)
        {
            vLocal_123.z = 0f;
        }
        else
        {
            vLocal_124.z = 0f;
        }
        if (vLocal_125.z < vLocal_126.z)
        {
            vLocal_125.z = 0f;
        }
        else
        {
            vLocal_126.z = 0f;
        }
    }
    switch (iLocal_113)
    {
        case 0:
            if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
            {
                if (SYSTEM::VDIST2(unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0), vLocal_121[iLocal_112 /*3*/]) < fLocal_122)
                {
                    if (unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203()) || unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203()))
                    {
                        if (unk_0xD960230552BC4165(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0), 0))
                        {
                            if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_123, vLocal_124, fLocal_127, 0, 1, 0))
                            {
                                bLocal_114 = true;
                                iLocal_113 = 1;
                            }
                            if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_125, vLocal_126, fLocal_127, 0, 1, 0))
                            {
                                bLocal_115 = true;
                                iLocal_113 = 1;
                            }
                        }
                    }
                }
            }
            break;
        
        case 1:
            if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
            {
                if (!unk_0xCE4D7B70DA8B0C86(unk_0x0FA8183DAD2B3203()) && !unk_0x0B8262712AD6841C(unk_0x0FA8183DAD2B3203()))
                {
                    func_365();
                }
                else if (!unk_0xD960230552BC4165(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0), 0))
                {
                    func_365();
                }
                else if (!unk_0x916AF183F71F17C1(unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0)) && !bParam1)
                {
                    func_365();
                }
                if (bLocal_114)
                {
                    if (iLocal_118)
                    {
                        if (iLocal_117)
                        {
                            if (!unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_123, vLocal_124, fLocal_127, 0, 1, 0) && !unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_125, vLocal_126, fLocal_127, 0, 1, 0))
                            {
                                func_365();
                                iLocal_119 = 1;
                            }
                        }
                        else if (!unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_123, vLocal_124, fLocal_127, 0, 1, 0) && unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_125, vLocal_126, fLocal_127, 0, 1, 0))
                        {
                            iLocal_117 = 1;
                        }
                        else if (!unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_123, vLocal_124, fLocal_127, 0, 1, 0) && !unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_125, vLocal_126, fLocal_127, 0, 1, 0))
                        {
                            func_365();
                        }
                    }
                    else if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_123, vLocal_124, fLocal_127, 0, 1, 0) && unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_125, vLocal_126, fLocal_127, 0, 1, 0))
                    {
                        iLocal_118 = 1;
                    }
                    else if (!unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_123, vLocal_124, fLocal_127, 0, 1, 0) && !unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_125, vLocal_126, fLocal_127, 0, 1, 0))
                    {
                        func_365();
                    }
                }
                else if (bLocal_115)
                {
                    if (iLocal_118)
                    {
                        if (iLocal_116)
                        {
                            if (!unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_123, vLocal_124, fLocal_127, 0, 1, 0) && !unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_125, vLocal_126, fLocal_127, 0, 1, 0))
                            {
                                func_365();
                                iLocal_119 = 1;
                            }
                        }
                        else if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_123, vLocal_124, fLocal_127, 0, 1, 0) && !unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_125, vLocal_126, fLocal_127, 0, 1, 0))
                        {
                            iLocal_116 = 1;
                        }
                        else if (!unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_123, vLocal_124, fLocal_127, 0, 1, 0) && !unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_125, vLocal_126, fLocal_127, 0, 1, 0))
                        {
                            func_365();
                        }
                    }
                    else if (unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_123, vLocal_124, fLocal_127, 0, 1, 0) && unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_125, vLocal_126, fLocal_127, 0, 1, 0))
                    {
                        iLocal_118 = 1;
                    }
                    else if (!unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_123, vLocal_124, fLocal_127, 0, 1, 0) && !unk_0x42A24CB7B8A08E11(unk_0x0FA8183DAD2B3203(), vLocal_125, vLocal_126, fLocal_127, 0, 1, 0))
                    {
                        func_365();
                    }
                }
            }
            break;
    }
}

void func_365()//Position - 0xC6F3
{
    bLocal_114 = false;
    bLocal_115 = false;
    iLocal_116 = 0;
    iLocal_117 = 0;
    iLocal_118 = 0;
    iLocal_113 = 0;
}

void func_366(var uParam0, var uParam1)//Position - 0xC70D
{
    int iVar0;
    float fVar1;
    float fVar2;
    
    vLocal_120 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0) };
    fVar1 = 1E+07f;
    iVar0 = 0;
    while (iVar0 < 65)
    {
        if ((uParam0 || !func_370(iVar0)) && (uParam1 || !func_369(iVar0)))
        {
            if (func_368(vLocal_120, vLocal_121[iVar0 /*3*/], 100f, 0))
            {
                fVar2 = SYSTEM::VDIST(vLocal_120, vLocal_121[iVar0 /*3*/]);
                if (fVar2 < fVar1)
                {
                    fVar1 = fVar2;
                    iLocal_112 = iVar0;
                }
            }
        }
        iVar0++;
    }
    func_367(iLocal_112);
}

void func_367(int iParam0)//Position - 0xC7A3
{
    switch (iParam0)
    {
        case 0:
            vLocal_123 = { 1103.014f, -233.0374f, 56.13004f };
            vLocal_124 = { 1073.191f, -214.8478f, 66.0593f };
            fLocal_127 = 30f;
            vLocal_125 = { 1093.589f, -248.5926f, 56.88639f };
            vLocal_126 = { 1063.774f, -230.1425f, 66.67847f };
            break;
        
        case 1:
            vLocal_123 = { 1044.182f, -324.5904f, 49.33408f };
            vLocal_124 = { 1016.71f, -307.7383f, 64.81343f };
            fLocal_127 = 30f;
            vLocal_125 = { 1007.983f, -320.6159f, 48.4543f };
            vLocal_126 = { 1036.007f, -337.4204f, 64.4808f };
            break;
        
        case 2:
            vLocal_123 = { 916.599f, -419.8782f, 35.62748f };
            vLocal_124 = { 910.3793f, -383.8826f, 47.54339f };
            fLocal_127 = 7f;
            vLocal_125 = { 912.1362f, -420.5161f, 35.38034f };
            vLocal_126 = { 906.8952f, -384.6779f, 47.24926f };
            break;
        
        case 3:
            vLocal_123 = { 757.7189f, -472.924f, 19.2535f };
            vLocal_124 = { 696.5936f, -420.2115f, 35.46084f };
            fLocal_127 = 20.75f;
            vLocal_125 = { 744.9114f, -480.7373f, 19.06514f };
            vLocal_126 = { 682.5614f, -429.5533f, 37.0266f };
            break;
        
        case 4:
            vLocal_123 = { 680.3677f, -581.1792f, 14.2145f };
            vLocal_124 = { 599.8101f, -528.3059f, 33.40958f };
            fLocal_127 = 45f;
            vLocal_125 = { 667.3692f, -610.5356f, 13.85401f };
            vLocal_126 = { 582.8433f, -556.7818f, 33.40335f };
            break;
        
        case 5:
            vLocal_123 = { 644.2497f, -844.7504f, 12.36707f };
            vLocal_124 = { 526.8608f, -845.2521f, 35.9896f };
            fLocal_127 = 25f;
            vLocal_125 = { 644.3659f, -859.3878f, 12.59677f };
            vLocal_126 = { 526.8615f, -857.5208f, 36.32857f };
            break;
        
        case 6:
            vLocal_123 = { 634.972f, -1011.64f, 10.92594f };
            vLocal_124 = { 539.6501f, -1024.017f, 35.95852f };
            fLocal_127 = 25f;
            vLocal_125 = { 634.9612f, -1029.123f, 10.61846f };
            vLocal_126 = { 543.4893f, -1038.261f, 35.9593f };
            break;
        
        case 7:
            vLocal_123 = { 645.7223f, -1191.215f, 10.45198f };
            vLocal_124 = { 524.3018f, -1197.167f, 39.61172f };
            fLocal_127 = 50f;
            vLocal_125 = { 645.7223f, -1228.966f, 10.98015f };
            vLocal_126 = { 521.9379f, -1217.607f, 39.47172f };
            break;
        
        case 8:
            vLocal_123 = { 642.1216f, -1295.73f, 9.005976f };
            vLocal_124 = { 568.1702f, -1375.351f, 20.12989f };
            fLocal_127 = 7f;
            vLocal_125 = { 644.7772f, -1298.168f, 9.128529f };
            vLocal_126 = { 571.6342f, -1378.644f, 20.35802f };
            break;
        
        case 9:
            vLocal_123 = { 686.5675f, -1444.71f, 9.065001f };
            vLocal_124 = { 598.9328f, -1444.438f, 25.68846f };
            fLocal_127 = 25f;
            vLocal_125 = { 682.3027f, -1429.872f, 9.890836f };
            vLocal_126 = { 593.8217f, -1432.995f, 25.60072f };
            break;
        
        case 10:
            vLocal_123 = { 718.7617f, -1734.313f, 9.082874f };
            vLocal_124 = { 615.0017f, -1725.897f, 27.54585f };
            fLocal_127 = 30f;
            vLocal_125 = { 717.5355f, -1748.646f, 9.363478f };
            vLocal_126 = { 614.218f, -1734.848f, 27.35708f };
            break;
        
        case 11:
            vLocal_123 = { 694.3165f, -2049.806f, 0.009695f };
            vLocal_124 = { 618.6845f, -2040.014f, 25.83412f };
            fLocal_127 = 30f;
            vLocal_125 = { 693.1836f, -2063.225f, 0.429037f };
            vLocal_126 = { 607.5944f, -2055.326f, 26.91816f };
            break;
        
        case 12:
            vLocal_123 = { 642.6671f, -2494.551f, 0.468485f };
            vLocal_124 = { 570.1807f, -2513.959f, 11.78794f };
            fLocal_127 = 20f;
            vLocal_125 = { 647.0339f, -2506.202f, 0.583701f };
            vLocal_126 = { 571.1415f, -2522.975f, 10.45045f };
            break;
        
        case 13:
            vLocal_123 = { 691.8235f, -2558.219f, 0.363352f };
            vLocal_124 = { 645.8863f, -2600.311f, 9.898791f };
            fLocal_127 = 10.25f;
            vLocal_125 = { 695.7928f, -2561.034f, 0.346731f };
            vLocal_126 = { 656.3919f, -2601.972f, 9.643657f };
            break;
        
        case 14:
            vLocal_123 = { 723.6254f, -2562.171f, 0.255647f };
            vLocal_124 = { 720.752f, -2619.77f, 15.73211f };
            fLocal_127 = 15f;
            vLocal_125 = { 735.765f, -2561.935f, 0.311182f };
            vLocal_126 = { 736.1214f, -2618.767f, 15.79061f };
            break;
        
        case 15:
            vLocal_123 = { 891.4387f, -2603.12f, 0f };
            vLocal_124 = { 704.4932f, -2634.793f, 45f };
            fLocal_127 = 20f;
            vLocal_125 = { 893.2578f, -2616.235f, 0f };
            vLocal_126 = { 707.7261f, -2647.696f, 45f };
            break;
        
        case 16:
            vLocal_123 = { -2669.587f, 2491.96f, 2.043799f };
            vLocal_124 = { -2617.765f, 2841.595f, 14.0822f };
            fLocal_127 = 26.5f;
            vLocal_125 = { -2687.606f, 2494.868f, 2.608733f };
            vLocal_126 = { -2637.085f, 2846.875f, 14.15988f };
            break;
        
        case 17:
            vLocal_123 = { -1986.173f, 4521.799f, 0f };
            vLocal_124 = { -1809.903f, 4699.551f, 53.5088f };
            fLocal_127 = 17f;
            vLocal_125 = { -1995.668f, 4531.259f, 0f };
            vLocal_126 = { -1817.543f, 4708.395f, 53.50917f };
            break;
        
        case 18:
            vLocal_123 = { -526.0265f, 4472.442f, 0f };
            vLocal_124 = { -505.5714f, 4335.725f, 86.73311f };
            fLocal_127 = 10f;
            vLocal_125 = { -519.9281f, 4476.346f, 0f };
            vLocal_126 = { -500.7313f, 4336.389f, 86.71289f };
            break;
        
        case 19:
            vLocal_123 = { 98.1615f, 3384.489f, 45.45169f };
            vLocal_124 = { 154.974f, 3350.694f, 30.03358f };
            fLocal_127 = 8f;
            vLocal_125 = { 152.6802f, 3346.793f, 45.02156f };
            vLocal_126 = { 95.57188f, 3380.091f, 30.43284f };
            break;
        
        case 20:
            vLocal_123 = { 147.8606f, 3406.796f, 38.03672f };
            vLocal_124 = { 126.1329f, 3416.927f, 30.02987f };
            fLocal_127 = 14.5f;
            vLocal_125 = { 130.0916f, 3425.417f, 38.05672f };
            vLocal_126 = { 151.8703f, 3415.391f, 30.0578f };
            break;
        
        case 21:
            vLocal_123 = { 2830.972f, 4967.14f, 34.56013f };
            vLocal_124 = { 2818.719f, 4992.298f, 51.2909f };
            fLocal_127 = 10f;
            vLocal_125 = { 2826.767f, 4964.185f, 34.10636f };
            vLocal_126 = { 2814.216f, 4989.983f, 51.21849f };
            break;
        
        case 22:
            vLocal_123 = { -151.5764f, 4264.417f, 31.04735f };
            vLocal_124 = { -193.1962f, 4224.604f, 43.87255f };
            fLocal_127 = 10f;
            vLocal_125 = { -148.3842f, 4261.071f, 31.57409f };
            vLocal_126 = { -190.4719f, 4222.076f, 43.95443f };
            break;
        
        case 23:
            vLocal_123 = { -426.6919f, 2964.272f, 14.848f };
            vLocal_124 = { -396.2298f, 2959.278f, 23.50637f };
            fLocal_127 = 7f;
            vLocal_125 = { -425.0283f, 2967.861f, 15.22699f };
            vLocal_126 = { -395.6073f, 2962.607f, 24.38079f };
            break;
        
        case 24:
            vLocal_123 = { -192.3414f, 2864.916f, 30.72595f };
            vLocal_124 = { -170.1509f, 2857.128f, 43.94182f };
            fLocal_127 = 10f;
            vLocal_125 = { -192.0129f, 2871.603f, 29.99943f };
            vLocal_126 = { -169.5957f, 2863.838f, 44.03251f };
            break;
        
        case 25:
            vLocal_123 = { 2539.185f, 2228.772f, 18.6102f };
            vLocal_124 = { 2574.373f, 2169.401f, 27.26598f };
            fLocal_127 = 10f;
            vLocal_125 = { 2543.708f, 2231.402f, 18.331f };
            vLocal_126 = { 2578.079f, 2171.584f, 27.26057f };
            break;
        
        case 26:
            vLocal_123 = { 2954.087f, 815.7209f, 0.037901f };
            vLocal_124 = { 2933.189f, 796.4688f, 12.98392f };
            fLocal_127 = 35f;
            vLocal_125 = { 2966.123f, 806.8889f, 0.544056f };
            vLocal_126 = { 2950.801f, 786.7816f, 11.74596f };
            break;
        
        case 27:
            vLocal_123 = { 2329.673f, -459.6648f, 70.24277f };
            vLocal_124 = { 2413.384f, -361.2188f, 91.77886f };
            fLocal_127 = 12f;
            vLocal_125 = { 2324.752f, -455.5238f, 70.25145f };
            vLocal_126 = { 2407.409f, -356.2003f, 91.43083f };
            break;
        
        case 28:
            vLocal_123 = { 1943.428f, -753.251f, 80.17905f };
            vLocal_124 = { 1850.365f, -760.9587f, 93.02522f };
            fLocal_127 = 7f;
            vLocal_125 = { 1943.366f, -758.287f, 80.32291f };
            vLocal_126 = { 1851.354f, -765.1807f, 92.93546f };
            break;
        
        case 29:
            vLocal_123 = { -271.2849f, -2414.993f, -10f };
            vLocal_124 = { -542.9096f, -2225.856f, 52.65004f };
            fLocal_127 = 30f;
            vLocal_125 = { -279.8399f, -2427.212f, -10f };
            vLocal_126 = { -551.2656f, -2237.791f, 52.64634f };
            break;
        
        case 30:
            vLocal_123 = { -1483f, 2691.428f, -10f };
            vLocal_124 = { -1377.168f, 2600.769f, 15.95528f };
            fLocal_127 = 12f;
            vLocal_125 = { -1478.152f, 2696.688f, -10f };
            vLocal_126 = { -1378.503f, 2608.698f, 15.60924f };
            break;
        
        case 31:
            vLocal_123 = { 222.1519f, -2343.487f, 0.039199f };
            vLocal_124 = { 222.6849f, -2297.407f, 7.088753f };
            fLocal_127 = 12f;
            vLocal_125 = { 216.959f, -2343.487f, 0.207734f };
            vLocal_126 = { 216.602f, -2295.445f, 7.424279f };
            break;
        
        case 32:
            vLocal_123 = { 346.4622f, -2244.374f, 0.159779f };
            vLocal_124 = { 346.8347f, -2389.591f, 7.852059f };
            fLocal_127 = 20f;
            vLocal_125 = { 359.609f, -2244.468f, 0.129684f };
            vLocal_126 = { 355.4054f, -2390.258f, 7.080691f };
            break;
        
        case 33:
            vLocal_123 = { -1859.68f, -322.6357f, 56.16368f };
            vLocal_124 = { -1836.614f, -335.4141f, 96.1161f };
            fLocal_127 = 7.5f;
            vLocal_125 = { -1860.27f, -327.8634f, 57.543f };
            vLocal_126 = { -1837.271f, -339.2227f, 95.69325f };
            break;
        
        case 34:
            vLocal_123 = { -680.2632f, -600.818f, 69.11289f };
            vLocal_124 = { -706.6613f, -600.7515f, 30.47604f };
            fLocal_127 = 31.5f;
            vLocal_125 = { -680.6077f, -618.3658f, 69.27496f };
            vLocal_126 = { -706.3596f, -618.2385f, 30.31235f };
            break;
        
        case 35:
            vLocal_123 = { -1468.096f, -591.7158f, 67.05518f };
            vLocal_124 = { -1454.7f, -573.4518f, 29.56736f };
            fLocal_127 = 11.75f;
            vLocal_125 = { -1474.903f, -591.1215f, 67.08091f };
            vLocal_126 = { -1457.173f, -568.1316f, 29.44059f };
            break;
        
        case 36:
            vLocal_123 = { -1544.958f, -537.1475f, 72.44347f };
            vLocal_124 = { -1564.616f, -551.1829f, 32.86163f };
            fLocal_127 = 11.75f;
            vLocal_125 = { -1541.008f, -541.5494f, 71.61972f };
            vLocal_126 = { -1561.219f, -555.868f, 32.9279f };
            break;
        
        case 37:
            vLocal_123 = { 333.2108f, -2727.274f, 20.71663f };
            vLocal_124 = { 333.4297f, -2791.609f, 41.99023f };
            fLocal_127 = 20f;
            vLocal_125 = { 343.1127f, -2727.236f, 20.23613f };
            vLocal_126 = { 343.6678f, -2791.602f, 41.37928f };
            break;
        
        case 38:
            vLocal_123 = { 1928.071f, 6228.355f, 43.49398f };
            vLocal_124 = { 2039.882f, 6167.397f, 55.46405f };
            fLocal_127 = 13f;
            vLocal_125 = { 1931.82f, 6235.634f, 43.37382f };
            vLocal_126 = { 2039.598f, 6176.525f, 55.25597f };
            break;
        
        case 39:
            vLocal_123 = { -736.4309f, -1590.921f, 10.80892f };
            vLocal_124 = { -710.811f, -1516.349f, -0.098598f };
            fLocal_127 = 15f;
            vLocal_125 = { -727.2307f, -1585.221f, 11.78027f };
            vLocal_126 = { -700.0201f, -1511.783f, -0.341655f };
            break;
        
        case 40:
            vLocal_123 = { -676.3775f, -1548.553f, 12.33747f };
            vLocal_124 = { -659.329f, -1507.063f, -0.788618f };
            fLocal_127 = 25f;
            vLocal_125 = { -654.203f, -1536.146f, 9.191055f };
            vLocal_126 = { -645.9954f, -1500.219f, -2.406948f };
            break;
        
        case 41:
            vLocal_123 = { -624.2344f, -1537.045f, 12.60193f };
            vLocal_124 = { -622.1749f, -1472.877f, -0.292606f };
            fLocal_127 = 8f;
            vLocal_125 = { -615.4003f, -1536.65f, 12.40271f };
            vLocal_126 = { -619.7385f, -1472.937f, -0.243267f };
            break;
        
        case 42:
            vLocal_123 = { -492.5057f, -1632.457f, 24.3307f };
            vLocal_124 = { -418.2088f, -1487.452f, 0f };
            fLocal_127 = 25f;
            vLocal_125 = { -486.2016f, -1636.095f, 24.20805f };
            vLocal_126 = { -398.7648f, -1490.44f, 0f };
            break;
        
        case 43:
            vLocal_123 = { -359.3541f, -1639.693f, 13.13455f };
            vLocal_124 = { -388.4955f, -1690.945f, -0.183164f };
            fLocal_127 = 25f;
            vLocal_125 = { -378.1518f, -1705.66f, 12.47196f };
            vLocal_126 = { -348.9591f, -1654.411f, 0.193478f };
            break;
        
        case 44:
            vLocal_123 = { -243.4436f, -1814.623f, 25.69465f };
            vLocal_124 = { -183.9987f, -1780.645f, -0.085802f };
            fLocal_127 = 25f;
            vLocal_125 = { -235.1319f, -1822.094f, 25.86542f };
            vLocal_126 = { -175.5105f, -1788.275f, -0.506062f };
            break;
        
        case 45:
            vLocal_123 = { 84.55537f, -2046.159f, 13.30767f };
            vLocal_124 = { 17.93164f, -2045.152f, -0.031946f };
            fLocal_127 = 25f;
            vLocal_125 = { 17.90788f, -2035.773f, 12.62706f };
            vLocal_126 = { 84.57207f, -2034.184f, 0.048385f };
            break;
        
        case 46:
            vLocal_123 = { 221.5029f, -2232.766f, 9.88676f };
            vLocal_124 = { 221.6825f, -2244.081f, 4.479149f };
            fLocal_127 = 8f;
            vLocal_125 = { 218.583f, -2232.766f, 9.886198f };
            vLocal_126 = { 218.729f, -2244.081f, 4.535046f };
            break;
        
        case 47:
            vLocal_123 = { 221.6518f, -2184.635f, 11.66457f };
            vLocal_124 = { 221.6139f, -2208.137f, 5.876424f };
            fLocal_127 = 8f;
            vLocal_125 = { 217.8995f, -2184.635f, 11.5405f };
            vLocal_126 = { 218.3327f, -2208.137f, 5.864793f };
            break;
        
        case 48:
            vLocal_123 = { 2326.57f, 1096.031f, 76.31458f };
            vLocal_124 = { 2290.332f, 1136.131f, 58.85706f };
            fLocal_127 = 21f;
            vLocal_125 = { 2334.453f, 1103.067f, 76.26603f };
            vLocal_126 = { 2297.846f, 1142.897f, 58.84243f };
            break;
        
        case 49:
            vLocal_123 = { 2379.442f, 1150.776f, 58.79632f };
            vLocal_124 = { 2327.658f, 1212.366f, 72.8333f };
            fLocal_127 = 12f;
            vLocal_125 = { 2374.064f, 1146.282f, 58.83331f };
            vLocal_126 = { 2320.895f, 1209.596f, 72.79299f };
            break;
        
        case 50:
            vLocal_123 = { -1179.405f, -355.2554f, 56.53003f };
            vLocal_124 = { -1198.064f, -357.8363f, 35.35551f };
            fLocal_127 = 12.5f;
            vLocal_125 = { -1178.385f, -361.8784f, 56.15081f };
            vLocal_126 = { -1197.104f, -364.7004f, 36.49475f };
            break;
        
        case 51:
            vLocal_123 = { -921.3846f, -384.94f, 137.0181f };
            vLocal_124 = { -912.4324f, -429.229f, 36.70113f };
            fLocal_127 = 16f;
            vLocal_125 = { -914.1658f, -387.9444f, 137.0794f };
            vLocal_126 = { -906.2534f, -424.691f, 47.11882f };
            break;
        
        case 52:
            vLocal_123 = { -740.2564f, 246.4529f, 132.2922f };
            vLocal_124 = { -718.3602f, 201.0042f, 80.95571f };
            fLocal_127 = 22f;
            vLocal_125 = { -726.6429f, 253.0676f, 132.3319f };
            vLocal_126 = { -705.5858f, 210.4336f, 78.70573f };
            break;
        
        case 53:
            vLocal_123 = { -771.2068f, 268.2729f, 132.1689f };
            vLocal_124 = { -778.3417f, 313.1148f, 84.27054f };
            fLocal_127 = 16f;
            vLocal_125 = { -770.8035f, 310.8625f, 137.4161f };
            vLocal_126 = { -763.0681f, 269.044f, 83.31474f };
            break;
        
        case 54:
            vLocal_123 = { 259.2205f, 135.4146f, 136.7083f };
            vLocal_124 = { 279.2396f, 128.1379f, 100.8233f };
            fLocal_127 = 16f;
            vLocal_125 = { 261.9694f, 142.9676f, 136.6889f };
            vLocal_126 = { 281.7203f, 134.9551f, 100.7704f };
            break;
        
        case 55:
            vLocal_123 = { 393.548f, -30.87166f, 152.6635f };
            vLocal_124 = { 369.9622f, -23.88461f, 88.35776f };
            fLocal_127 = 8f;
            vLocal_125 = { 390.5358f, -36.08882f, 152.7813f };
            vLocal_126 = { 368.1275f, -28.81888f, 88.69447f };
            break;
        
        case 56:
            vLocal_123 = { 114.3139f, -648.4297f, 261.8488f };
            vLocal_124 = { 131.0782f, -733.7684f, 39.34393f };
            fLocal_127 = 20f;
            vLocal_125 = { 124.8467f, -646.6575f, 261.8488f };
            vLocal_126 = { 140.0502f, -737.427f, 39.3493f };
            break;
        
        case 57:
            vLocal_123 = { -215.919f, -823.8436f, 126.0224f };
            vLocal_124 = { -193.2237f, -761.7781f, 27.91382f };
            fLocal_127 = 20f;
            vLocal_125 = { -225.397f, -820.3937f, 126.0812f };
            vLocal_126 = { -202.9433f, -758.257f, 27.47734f };
            break;
        
        case 58:
            vLocal_123 = { -296.4725f, -802.0815f, 95.40108f };
            vLocal_124 = { -278.1352f, -747.7841f, 50.40046f };
            fLocal_127 = 20f;
            vLocal_125 = { -305.4602f, -798.8369f, 95.48194f };
            vLocal_126 = { -285.7376f, -745.0959f, 49.57651f };
            break;
        
        case 59:
            vLocal_123 = { -292.3034f, -823.3569f, 95.37621f };
            vLocal_124 = { -258.5991f, -835.5632f, 27.97946f };
            fLocal_127 = 20f;
            vLocal_125 = { -288.9206f, -814.022f, 95.37556f };
            vLocal_126 = { -255.2116f, -826.256f, 27.7375f };
            break;
        
        case 60:
            vLocal_123 = { -256.3589f, -714.7838f, 110.1617f };
            vLocal_124 = { -212.9054f, -730.532f, 32.21946f };
            fLocal_127 = 20f;
            vLocal_125 = { -253.7723f, -705.6632f, 110.1736f };
            vLocal_126 = { -210.0588f, -722.6748f, 32.46536f };
            break;
        
        case 61:
            vLocal_123 = { 1808.214f, 1949.246f, 71.73707f };
            vLocal_124 = { 1837.906f, 2127.283f, 52.80491f };
            fLocal_127 = 9.75f;
            vLocal_125 = { 1802.786f, 1950.262f, 71.74002f };
            vLocal_126 = { 1831.994f, 2127.433f, 52.83893f };
            break;
        
        case 62:
            vLocal_123 = { 2388.733f, 2931.941f, 46.62681f };
            vLocal_124 = { 2426.681f, 2883.066f, 36.21524f };
            fLocal_127 = 10f;
            vLocal_125 = { 2392.547f, 2934.867f, 46.6268f };
            vLocal_126 = { 2430.333f, 2885.908f, 36.28148f };
            break;
        
        case 63:
            vLocal_123 = { 2700.056f, 4836.381f, 42.07854f };
            vLocal_124 = { 2685.673f, 4893.38f, 30.90867f };
            fLocal_127 = 20.75f;
            vLocal_125 = { 2685.672f, 4821.653f, 42.18471f };
            vLocal_126 = { 2672.812f, 4880.356f, 31.13311f };
            break;
        
        case 64:
            vLocal_123 = { -1053.446f, 4766.245f, 234.3251f };
            vLocal_124 = { -1040.263f, 4737.157f, 204.4916f };
            fLocal_127 = 5f;
            vLocal_125 = { -1051.414f, 4767.193f, 234.4293f };
            vLocal_126 = { -1037.954f, 4738.354f, 204.5282f };
            break;
    }
}

int func_368(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0xE01F
{
    if (fParam2 < 0f)
    {
        fParam2 = 0f;
    }
    if (!bParam3)
    {
        if (unk_0x01CBD71E072E9F33((vParam0.x - vParam1.x)) <= fParam2)
        {
            if (unk_0x01CBD71E072E9F33((vParam0.y - vParam1.y)) <= fParam2)
            {
                if (unk_0x01CBD71E072E9F33((vParam0.z - vParam1.z)) <= fParam2)
                {
                    return 1;
                }
            }
        }
    }
    else if (unk_0x01CBD71E072E9F33((vParam0.x - vParam1.x)) <= fParam2)
    {
        if (unk_0x01CBD71E072E9F33((vParam0.y - vParam1.y)) <= fParam2)
        {
            return 1;
        }
    }
    return 0;
}

int func_369(int iParam0)//Position - 0xE09A
{
    switch (iParam0)
    {
        case 0:
        case 1:
        case 8:
        case 12:
        case 13:
        case 20:
        case 31:
        case 32:
        case 46:
        case 47:
            return 1;
            break;
    }
    return 0;
}

int func_370(int iParam0)//Position - 0xE0ED
{
    switch (iParam0)
    {
        case 33:
        case 34:
        case 35:
        case 36:
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
        case 60:
            return 1;
            break;
    }
    return 0;
}

int func_371(int iParam0, int iParam1)//Position - 0xE15E
{
    if (unk_0xD4B321D9096B01FC(*iParam0))
    {
        if (!unk_0xF4B969E0807E76C7(*iParam0, 0) || iParam1)
        {
            if (unk_0xE294A1321110B3E9(*iParam0))
            {
                return 1;
            }
        }
    }
    return 0;
}

int func_372(int iParam0, int iParam1)//Position - 0xE193
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    
    if (!unk_0x2BF5E63466422C38(iParam0))
    {
        if (unk_0x5294582CE404D3F4(iParam0, iParam1))
        {
            iVar0 = unk_0x4D57D3E5ECE15A41(iParam0, iParam1);
            if (unk_0xD4B321D9096B01FC(iVar0))
            {
                iVar1 = unk_0x26BC048DC7E3F551(unk_0x7F375072508F738F(iVar0));
                if (iVar1 == 1)
                {
                    iVar3 = -1;
                    return iVar3;
                }
                iVar2 = 0;
                while (iVar2 < iVar1)
                {
                    iVar3 = (iVar2 - 1);
                    if (!unk_0xBAA38708D7439CA7(iVar0, iVar3, 0))
                    {
                        if (unk_0x300C62F79A4441EB(iVar0, iVar3, 0) == iParam0)
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

int func_373()//Position - 0xE218
{
    switch (Local_171.f_3)
    {
        case 0:
        case 2:
        case 3:
        case 5:
        case 4:
        case 8:
        case 1:
        case 6:
        case 7:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 15:
        case 16:
        case 17:
        case 18:
            return 1;
        
        default:
    }
    return 0;
}

int func_374(vector3 vParam0, float fParam1, int iParam2)//Position - 0xE29B
{
    int iVar0;
    
    iVar0 = -1;
    if (func_390() < 10)
    {
        iVar0 = func_389();
        func_375(vParam0, fParam1, iVar0, iParam2);
    }
    return iVar0;
}

void func_375(vector3 vParam0, var uParam1, int iParam2, var uParam3)//Position - 0xE2C8
{
    func_376(vParam0, 0f, 0f, 0f, uParam1, 0, iParam2, uParam3);
}

void func_376(vector3 vParam0, vector3 vParam1, var uParam2, int iParam3, int iParam4, var uParam5)//Position - 0xE2E2
{
    struct<12> Var0;
    
    if (func_385(unk_0x7C7787D2D7139A85()) || uParam5)
    {
        if (Var0.f_A == 1)
        {
            func_384(&vParam0, &vParam1);
        }
        Var0 = { vParam0 };
        Var0.f_3 = { vParam1 };
        Var0.f_6 = uParam2;
        Var0.f_A = iParam3;
        if (func_379(Var0))
        {
            Global_24B2CF.f_2D.f_40 = func_378(unk_0x7C7787D2D7139A85());
            func_377(Var0, iParam4);
        }
    }
}

void func_377(struct<12> Param0, int iParam1)//Position - 0xE358
{
    Global_24B2CF.f_16B[iParam1 /*12*/] = { Param0 };
    Global_24B2CF.f_16B[iParam1 /*12*/].f_9 = 1;
}

int func_378(int iParam0)//Position - 0xE381
{
    if (func_12(iParam0, 0, 1))
    {
        return Global_24FD09[iParam0 /*421*/].f_1;
    }
    return 0;
}

int func_379(struct<12> Param0)//Position - 0xE3A3
{
    struct<12> Var0[1];
    int iVar1;
    
    Var0[0 /*12*/] = { Param0 };
    Var0[0 /*12*/].f_9 = 1;
    iVar1 = 0;
    while (iVar1 < 4)
    {
        if (Global_24B2CF.f_2D[iVar1 /*12*/].f_9 == 1)
        {
            if (!func_380(Global_24B2CF.f_2D[iVar1 /*12*/], &Var0))
            {
                return 0;
            }
        }
        iVar1++;
    }
    return 1;
}

int func_380(vector3 vParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)//Position - 0xE403
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < *uParam10)
    {
        if ((uParam10[iVar0 /*12*/])->f_9)
        {
            switch ((uParam10[iVar0 /*12*/])->f_A)
            {
                case 0:
                    switch (vParam0.f_A)
                    {
                        case 0:
                            if (func_383(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
                            {
                                return 0;
                            }
                            break;
                        
                        case 1:
                            if (func_381(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
                            {
                                return 0;
                            }
                            break;
                        
                        case 2:
                            break;
                    }
                    break;
                
                case 1:
                    switch (vParam0.f_A)
                    {
                        case 0:
                            if (func_383(vParam0, vParam0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
                            {
                                return 0;
                            }
                            break;
                        
                        case 1:
                            if (func_381(vParam0, vParam0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
                            {
                                return 0;
                            }
                            break;
                        
                        case 2:
                            break;
                    }
                    break;
                
                case 2:
                    break;
                }
        }
        iVar0++;
    }
    if (SYSTEM::VMAG(vParam0) == 0f)
    {
        return 0;
    }
    return 1;
}

bool func_381(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0xE53C
{
    vector3 vVar0;
    vector3 vVar1;
    float fVar2;
    
    fVar2 = (fParam3 * 0.7071068f);
    vVar0 = { vParam2 - Vector(fVar2, fVar2, fVar2) };
    vVar1 = { vParam2 + Vector(fVar2, fVar2, fVar2) };
    return func_382(vParam0, vParam1, vVar0, vVar1);
}

int func_382(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3)//Position - 0xE580
{
    if (((((vParam0.x >= vParam2.x && vParam0.y >= vParam2.y) && vParam0.z >= vParam2.z) && vParam1.x <= vParam3.x) && vParam1.y <= vParam3.y) && vParam1.z <= vParam3.z)
    {
        return 1;
    }
    return 0;
}

int func_383(vector3 vParam0, float fParam1, vector3 vParam2, float fParam3)//Position - 0xE5D7
{
    vector3 vVar0;
    
    vVar0 = { vParam2 - vParam0 };
    if ((SYSTEM::VMAG(vVar0) + fParam1) < fParam3)
    {
        return 1;
    }
    return 0;
}

void func_384(var uParam0, var uParam1)//Position - 0xE602
{
    vector3 vVar0;
    vector3 vVar1;
    
    if (*uParam0 <= *uParam1)
    {
        vVar0.x = *uParam0;
        vVar1.x = *uParam1;
    }
    else
    {
        vVar0.x = *uParam1;
        vVar1.x = *uParam0;
    }
    if (uParam0->f_1 <= uParam1->f_1)
    {
        vVar0.y = uParam0->f_1;
        vVar1.y = uParam1->f_1;
    }
    else
    {
        vVar0.y = uParam1->f_1;
        vVar1.y = uParam0->f_1;
    }
    if (uParam0->f_2 <= uParam1->f_2)
    {
        vVar0.z = uParam0->f_2;
        vVar1.z = uParam1->f_2;
    }
    else
    {
        vVar0.z = uParam1->f_2;
        vVar1.z = uParam0->f_2;
    }
    *uParam0 = { vVar0 };
    *uParam1 = { vVar1 };
}

int func_385(int iParam0)//Position - 0xE699
{
    if (((func_388(iParam0, 1) || func_387(iParam0)) || func_112(iParam0, 0)) || func_386(iParam0))
    {
        return 1;
    }
    return 0;
}

int func_386(int iParam0)//Position - 0xE6D5
{
    if (!func_12(iParam0, 0, 1))
    {
        return 0;
    }
    return Global_1844AE[iParam0 /*871*/].f_23;
}

int func_387(int iParam0)//Position - 0xE6F8
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        return Global_18DB1B[iVar0 /*614*/] != -1;
    }
    return 0;
}

bool func_388(int iParam0, bool bParam1)//Position - 0xE719
{
    if (Global_1406C0 != 0)
    {
        return func_378(iParam0) != 0;
    }
    return func_350(iParam0, bParam1, 0);
}

int func_389()//Position - 0xE740
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 10)
    {
        if (!Global_24B2CF.f_16B[iVar0 /*12*/].f_9)
        {
            return iVar0;
        }
        iVar0++;
    }
    return -1;
}

int func_390()//Position - 0xE772
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    while (iVar0 < 10)
    {
        if (Global_24B2CF.f_16B[iVar0 /*12*/].f_9)
        {
            iVar1++;
        }
        iVar0++;
    }
    return iVar1;
}

int func_391(char* sParam0, char* sParam1, char* sParam2)//Position - 0xE7A5
{
    unk_0x1EF54B101C71E009(sParam0);
    unk_0x0AC9F8E1AFCEC860(sParam1);
    unk_0x0AC9F8E1AFCEC860(sParam2);
    return unk_0xFA637652FFB4E2E5(0);
}

char* func_392(int iParam0)//Position - 0xE7C4
{
    switch (iParam0)
    {
        case 0:
            return "AMCH_0";
        
        case 1:
            return "AMCH_1";
        
        case 2:
            return "AMCH_2";
        
        case 3:
            return "AMCH_3";
        
        case 4:
            return "AMCH_4";
        
        case 5:
            return "AMCH_5";
        
        case 6:
            return "AMCH_6";
        
        case 7:
            return "AMCH_7";
        
        case 8:
            return "AMCH_8";
        
        case 14:
            return "AMCH_9";
        
        case 9:
            return "AMCH_12";
        
        case 10:
            return "AMCH_13";
        
        case 11:
            return "AMCH_15";
        
        case 12:
            return "AMCH_16";
        
        case 15:
            return "AMCH_19";
        
        case 16:
            return "AMCH_20";
        
        case 17:
            return "AMCH_21";
        
        case 18:
            return "AMCH_22";
        
        case 13:
            return "AMCH_23";
        
        default:
    }
    return "";
}

char* func_393(int iParam0)//Position - 0xE8CD
{
    switch (iParam0)
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
        
        case 14:
            return "AMCH_9SLC";
        
        case 9:
            return "AMCH_12SLC";
        
        case 10:
            return "AMCH_13SLC";
        
        case 11:
            return "AMCH_15SLC";
        
        case 12:
            return "AMCH_16SLC";
        
        case 15:
            return "AMCH_19SLC";
        
        case 16:
            return "AMCH_20SLC";
        
        case 17:
            return "AMCH_21SLC";
        
        case 18:
            return "AMCH_22SLC";
        
        case 13:
            return "AMCH_23SLC";
        
        default:
    }
    return "";
}

char* func_394(int iParam0)//Position - 0xE9D6
{
    switch (iParam0)
    {
        case 0:
            return "AMCH_BIG_0";
        
        case 1:
            return "AMCH_BIG_1";
        
        case 2:
            return "AMCH_BIG_2";
        
        case 3:
            return "AMCH_BIG_3";
        
        case 4:
            return "AMCH_BIG_4";
        
        case 5:
            return "AMCH_BIG_5";
        
        case 6:
            return "AMCH_BIG_6";
        
        case 7:
            return "AMCH_BIG_7";
        
        case 8:
            return "AMCH_BIG_8";
        
        case 14:
            return "AMCH_BIG_9";
        
        case 9:
            return "AMCH_BIG_12";
        
        case 10:
            return "AMCH_BIG_13";
        
        case 11:
            return "AMCH_BIG_15";
        
        case 12:
            return "AMCH_BIG_16";
        
        case 15:
            return "AMCH_BIG_19";
        
        case 16:
            return "AMCH_BIG_20";
        
        case 17:
            return "AMCH_BIG_21";
        
        case 18:
            return "AMCH_BIG_22";
        
        case 13:
            return "AMCH_BIG_23";
        
        default:
    }
    return "";
}

void func_395()//Position - 0xEADF
{
    if (!func_155())
    {
        return;
    }
    if (!unk_0xA8C462EF7D9DC564(unk_0x0037AFCBDC61F351()) == Global_140749.f_9)
    {
        return;
    }
    func_151();
}

void func_396(var uParam0)//Position - 0xEB0C
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 65)
    {
        if (!func_370(iVar0) && !func_369(iVar0))
        {
            *(uParam0[iVar0 /*3*/]) = { vLocal_121[iVar0 /*3*/] };
        }
        iVar0++;
    }
}

void func_397()//Position - 0xEB4D
{
    if (!func_373())
    {
        if (Local_171.f_3 == 14)
        {
            func_400();
        }
        Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_4.f_1 = func_359();
    }
    else if ((!unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 4) && !unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 5)) && !func_399(unk_0x7C7787D2D7139A85()))
    {
        func_398();
    }
}

void func_398()//Position - 0xEBB1
{
    switch (Local_171.f_3)
    {
        case 0:
            unk_0x6BF8A729E3734BC2(8, 2);
            break;
        
        case 1:
            unk_0x6BF8A729E3734BC2(13, 2);
            break;
        
        case 2:
            unk_0x6BF8A729E3734BC2(4, 2);
            break;
        
        case 4:
            unk_0x6BF8A729E3734BC2(1, 2);
            break;
        
        case 3:
            unk_0x6BF8A729E3734BC2(2, 2);
            break;
        
        case 5:
            unk_0x6BF8A729E3734BC2(3, 2);
            break;
        
        case 6:
            unk_0x6BF8A729E3734BC2(11, 3);
            break;
        
        case 7:
            unk_0x6BF8A729E3734BC2(14, 1);
            break;
        
        case 8:
            unk_0x6BF8A729E3734BC2(29, 2);
            break;
        
        case 9:
            unk_0x6BF8A729E3734BC2(12, 2);
            break;
        
        case 10:
            unk_0x6BF8A729E3734BC2(10, 2);
            break;
        
        case 11:
            unk_0x6BF8A729E3734BC2(18, 2);
            break;
        
        case 12:
            unk_0x6BF8A729E3734BC2(20, 2);
            break;
        
        case 13:
            unk_0x6BF8A729E3734BC2(27, 2);
            break;
        
        case 15:
            unk_0x6BF8A729E3734BC2(26, 1);
            break;
        
        case 16:
            unk_0x6BF8A729E3734BC2(25, 1);
            break;
        
        case 17:
            unk_0x6BF8A729E3734BC2(22, 1);
            break;
        
        case 18:
            unk_0x6BF8A729E3734BC2(24, 1);
            break;
    }
    unk_0xA1E7A40E1F56E511(&iLocal_142, 8);
}

bool func_399(int iParam0)//Position - 0xECFA
{
    return func_14(iParam0, 0);
}

void func_400()//Position - 0xED09
{
    vLocal_121[0 /*3*/] = { 1083f, -231f, 60f };
    vLocal_121[1 /*3*/] = { 1024f, -325f, 60f };
    vLocal_121[2 /*3*/] = { 910f, -401f, 43f };
    vLocal_121[3 /*3*/] = { 721f, -457f, 26f };
    vLocal_121[4 /*3*/] = { 643f, -579f, 26f };
    vLocal_121[5 /*3*/] = { 590f, -851f, 26f };
    vLocal_121[6 /*3*/] = { 590f, -1023f, 16f };
    vLocal_121[7 /*3*/] = { 582f, -1205f, 24f };
    vLocal_121[8 /*3*/] = { 608f, -1335f, 16f };
    vLocal_121[9 /*3*/] = { 640f, -1434f, 16f };
    vLocal_121[10 /*3*/] = { 671f, -1742f, 20f };
    vLocal_121[11 /*3*/] = { 651f, -2046f, 16f };
    vLocal_121[12 /*3*/] = { 603f, -2505f, 9f };
    vLocal_121[13 /*3*/] = { 673f, -2582f, 4f };
    vLocal_121[14 /*3*/] = { 728f, -2594f, 10f };
    vLocal_121[15 /*3*/] = { 794f, -2624f, 27f };
    vLocal_121[16 /*3*/] = { -2663f, 2594f, 7.5f };
    vLocal_121[17 /*3*/] = { -1902f, 4617f, 30f };
    vLocal_121[18 /*3*/] = { -513f, 4427f, 40f };
    vLocal_121[19 /*3*/] = { 126f, 3366f, 40f };
    vLocal_121[20 /*3*/] = { 143f, 3418f, 36f };
    vLocal_121[21 /*3*/] = { 2822f, 4978f, 40f };
    vLocal_121[22 /*3*/] = { -162f, 4249f, 40f };
    vLocal_121[23 /*3*/] = { -408f, 2964f, 20f };
    vLocal_121[24 /*3*/] = { -181f, 2862f, 38f };
    vLocal_121[25 /*3*/] = { 2558f, 2201f, 24f };
    vLocal_121[26 /*3*/] = { 2950f, 803f, 8f };
    vLocal_121[27 /*3*/] = { 2369f, -409f, 80f };
    vLocal_121[28 /*3*/] = { 1906f, -755f, 84f };
    vLocal_121[29 /*3*/] = { -403f, -2333f, 40f };
    vLocal_121[30 /*3*/] = { -1429f, 2649f, 10f };
    vLocal_121[31 /*3*/] = { 219f, -2315f, 5f };
    vLocal_121[32 /*3*/] = { 350f, -2315f, 5f };
    vLocal_121[33 /*3*/] = { -1848f, -333f, 75f };
    vLocal_121[34 /*3*/] = { -693f, -608f, 69f };
    vLocal_121[35 /*3*/] = { -1461f, -582f, 53f };
    vLocal_121[36 /*3*/] = { -1553f, -546f, 59f };
    vLocal_121[37 /*3*/] = { 338f, -2758f, 23f };
    vLocal_121[38 /*3*/] = { 1985f, 6201f, 53f };
    vLocal_121[39 /*3*/] = { -713f, -1538f, 13f };
    vLocal_121[40 /*3*/] = { -659f, -1518f, 13f };
    vLocal_121[41 /*3*/] = { -620f, -1502f, 16f };
    vLocal_121[42 /*3*/] = { -445f, -1575f, 26f };
    vLocal_121[43 /*3*/] = { -373f, -1680f, 19f };
    vLocal_121[44 /*3*/] = { -212f, -1805f, 29f };
    vLocal_121[45 /*3*/] = { 47f, -2040f, 18f };
    vLocal_121[46 /*3*/] = { 223f, -2240f, 6f };
    vLocal_121[47 /*3*/] = { 218f, -2189f, 6f };
    vLocal_121[48 /*3*/] = { 2308f, 1124f, 78f };
    vLocal_121[49 /*3*/] = { 2349f, 1174f, 79f };
    vLocal_121[50 /*3*/] = { -1186f, -365f, 46f };
    vLocal_121[51 /*3*/] = { -916f, -407f, 93f };
    vLocal_121[52 /*3*/] = { -726f, 235f, 105f };
    vLocal_121[53 /*3*/] = { -774f, 286f, 112f };
    vLocal_121[54 /*3*/] = { 271f, 134f, 125f };
    vLocal_121[55 /*3*/] = { 377f, -28f, 125f };
    vLocal_121[56 /*3*/] = { 121f, -703f, 150f };
    vLocal_121[57 /*3*/] = { -204f, -784f, 74f };
    vLocal_121[58 /*3*/] = { -287f, -774f, 72f };
    vLocal_121[59 /*3*/] = { -272f, -824f, 71f };
    vLocal_121[60 /*3*/] = { -230f, -723f, 80f };
    vLocal_121[61 /*3*/] = { 1822f, 2044f, 62f };
    vLocal_121[62 /*3*/] = { 2410f, 2907f, 44f };
    vLocal_121[63 /*3*/] = { 2686f, 4858f, 36f };
    vLocal_121[64 /*3*/] = { -1046f, 4751f, 244f };
}

void func_401(int iParam0, bool bParam1)//Position - 0xF2CC
{
    if (bParam1)
    {
        if (!unk_0xA2BC31158C8CEFD2(Global_24FD09[unk_0x7C7787D2D7139A85() /*421*/].f_D0, iParam0))
        {
            unk_0xA1E7A40E1F56E511(&(Global_24FD09[unk_0x7C7787D2D7139A85() /*421*/].f_D0), iParam0);
        }
    }
    else if (unk_0xA2BC31158C8CEFD2(Global_24FD09[unk_0x7C7787D2D7139A85() /*421*/].f_D0, iParam0))
    {
        unk_0x3B76114EC84D5812(&(Global_24FD09[unk_0x7C7787D2D7139A85() /*421*/].f_D0), iParam0);
    }
}

void func_402(var uParam0, int iParam1)//Position - 0xF32F
{
    if (func_321(unk_0x7C7787D2D7139A85()) == 133 && iParam1)
    {
        Global_26A0A9.f_12D3 = uParam0;
    }
    else
    {
        Global_26A0A9.f_12D3 = -1;
    }
}

void func_403(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xF360
{
    bool bVar0;
    
    unk_0x70431C02FF392D24("DisableFlightMusic", 1);
    if (iParam0 != 133)
    {
        unk_0x70431C02FF392D24("WantedMusicDisabled", 1);
    }
    Global_26A0A9.f_1289 = -1;
    bVar0 = (func_112(unk_0x7C7787D2D7139A85(), 0) && func_108(unk_0x7C7787D2D7139A85()));
    if (bParam6)
    {
        func_401(func_421(iParam0), 1);
    }
    else
    {
        func_420(iParam0, -1);
        if (func_8(unk_0x7C7787D2D7139A85()))
        {
            Global_1806F7.f_3 = iParam0;
        }
        else
        {
            func_419(iParam0);
        }
        Global_1806F7.f_4 = -1;
        if (func_8(unk_0x7C7787D2D7139A85()))
        {
            unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 5);
        }
        if (((func_165() && !func_164()) || func_163(unk_0x7C7787D2D7139A85(), 21)) || func_163(unk_0x7C7787D2D7139A85(), 25))
        {
            unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 4);
        }
        unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 17);
        unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 20);
        if (func_418(iParam0))
        {
            func_417();
        }
    }
    if (!bVar0)
    {
        if (fParam1 != 1f)
        {
            func_413(fParam1);
        }
        if (fParam2 != 1f)
        {
            unk_0xB7F4DA52DE3AAF24(fParam2);
            if (iParam0 == 146)
            {
                unk_0x60F310C72311BCA8(0);
                unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), 0, 0);
                unk_0xF1E958D9BB4D1EF6(unk_0x7C7787D2D7139A85(), 0);
            }
        }
        if (func_411(iParam0))
        {
            unk_0x60F310C72311BCA8(0);
            unk_0x31EBACD75CD1F9EC(unk_0x7C7787D2D7139A85(), 0, 0);
            unk_0xF1E958D9BB4D1EF6(unk_0x7C7787D2D7139A85(), 0);
            unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 8);
        }
        if (bParam3)
        {
            if (!Global_247C05)
            {
                func_409(1);
                if (func_264(0))
                {
                    unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 9);
                }
                if (!bParam6)
                {
                    unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 14);
                }
            }
        }
        if (bParam4)
        {
            func_407(1);
            unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 12);
        }
        if (bParam5)
        {
            func_406();
            unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 12);
        }
        if (!bParam6)
        {
            if (func_404(iParam0))
            {
                unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 21);
            }
        }
    }
    Global_26432A = 1;
}

int func_404(int iParam0)//Position - 0xF544
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
            return 1;
        
        default:
    }
    if (func_405())
    {
        return 1;
    }
    return 0;
}

int func_405()//Position - 0xF59F
{
    switch (func_320())
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

void func_406()//Position - 0xF5CD
{
    unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_1280), 0);
}

void func_407(bool bParam0)//Position - 0xF5E1
{
    int iVar0;
    
    if (bParam0)
    {
        Global_181A1.f_8 = 1;
    }
    else
    {
        Global_181A1.f_8 = 0;
    }
    iVar0 = 0;
    while (iVar0 < 53)
    {
        func_408(iVar0);
        iVar0++;
    }
}

void func_408(int iParam0)//Position - 0xF618
{
    Global_181A1.f_B5[iParam0] = 1;
    Global_181A1.f_B4 = 1;
}

void func_409(int iParam0)//Position - 0xF632
{
    if (func_410() && iParam0)
    {
        return;
    }
    if (iParam0 == Global_247C05)
    {
        return;
    }
    Global_247C05 = iParam0;
    Global_247C07 = 0;
    Global_247C08 = 0;
}

int func_410()//Position - 0xF667
{
    if ((((Global_EC6CD != -1 && Global_EC6CD != 33) && Global_EC6CD != 35) && Global_EC6CD != 37) && Global_EC6CD != 21)
    {
        return 1;
    }
    return 0;
}

int func_411(int iParam0)//Position - 0xF6AD
{
    switch (iParam0)
    {
        case 136:
        case 144:
        case 129:
            return 1;
        
        case 141:
            if (func_412(unk_0x7C7787D2D7139A85()))
            {
                return 1;
            }
            break;
    }
    return 0;
}

int func_412(int iParam0)//Position - 0xF6EB
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iVar0 /*614*/].f_1, 0);
    }
    return 0;
}

void func_413(float fParam0)//Position - 0xF711
{
    float fVar0;
    
    if (unk_0xA8C462EF7D9DC564(unk_0x0037AFCBDC61F351()) == func_414())
    {
        return;
    }
    fVar0 = (Global_26A0A9.f_131D - fParam0);
    if (unk_0xAB2A82A2838B61B7(Global_26A0A9.f_131E))
    {
        if (!Global_26A0A9.f_131E == unk_0x429EE9FF15BB9033() && unk_0x01CBD71E072E9F33(fVar0) > 0.001f)
        {
            return;
        }
    }
    Global_26A0A9.f_131D = fParam0;
    Global_26A0A9.f_131E = unk_0x429EE9FF15BB9033();
}

int func_414()//Position - 0xF77D
{
    switch (func_416())
    {
        case 0:
            return func_415();
            break;
        
        case 2:
            return joaat("creator");
            break;
    }
    return 0;
}

int func_415()//Position - 0xF7B0
{
    switch (Global_258E9F)
    {
        case 0:
            return joaat("freemode");
        
        default:
    }
    return joaat("freemode");
}

int func_416()//Position - 0xF7D4
{
    return Global_7810;
}

void func_417()//Position - 0xF7DF
{
    Global_24FD09[unk_0x7C7787D2D7139A85() /*421*/].f_C8 = 0;
    unk_0x3B76114EC84D5812(&(Global_26A0A9.f_11D1), 1);
}

int func_418(int iParam0)//Position - 0xF801
{
    switch (iParam0)
    {
        case 136:
            return 1;
        
        default:
    }
    return 0;
}

void func_419(int iParam0)//Position - 0xF81B
{
    Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/] = iParam0;
}

void func_420(int iParam0, int iParam1)//Position - 0xF830
{
    int iVar0;
    
    if (iParam0 != -1 || iParam1 != -1)
    {
        iVar0 = iParam0;
        if (iVar0 == -1)
        {
            iVar0 = iParam1;
        }
        if (func_346(0) || func_346(func_345(iVar0)))
        {
            unk_0xA1E7A40E1F56E511(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 2);
        }
        else
        {
            unk_0x3B76114EC84D5812(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 2);
        }
    }
}

int func_421(int iParam0)//Position - 0xF896
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

int func_422()//Position - 0xF8BC
{
    switch (Local_171.f_3)
    {
        case 18:
        case 16:
        case 15:
        case 17:
            return 1;
        
        default:
    }
    return 0;
}

void func_423()//Position - 0xF8EB
{
    Global_198455 = 1;
    if (!unk_0xA2BC31158C8CEFD2(Global_26C29F, 0))
    {
        unk_0xA1E7A40E1F56E511(&Global_26C29F, 0);
        unk_0xA1E7A40E1F56E511(&Global_198456, 0);
    }
    if (!unk_0xA2BC31158C8CEFD2(Global_26C29F, 1))
    {
        unk_0xA1E7A40E1F56E511(&Global_26C29F, 1);
        unk_0xA1E7A40E1F56E511(&Global_198456, 1);
    }
    if (!unk_0xA2BC31158C8CEFD2(Global_26C29F, 5))
    {
        unk_0xA1E7A40E1F56E511(&Global_26C29F, 5);
        unk_0xA1E7A40E1F56E511(&Global_198456, 5);
    }
    if (unk_0xF6C55F777DC175F4(-355737150))
    {
        unk_0xF58083E4652F7505(-355737150, 0, 0, 0);
    }
    if (unk_0xF6C55F777DC175F4(-580979506))
    {
        unk_0xF58083E4652F7505(-580979506, 0, 0, 0);
    }
    if (unk_0xF6C55F777DC175F4(-1426452475))
    {
        unk_0xF58083E4652F7505(-1426452475, 0, 0, 0);
    }
    if (unk_0xF6C55F777DC175F4(745417724))
    {
        unk_0xF58083E4652F7505(745417724, 0, 0, 0);
    }
    if (unk_0xF6C55F777DC175F4(-1305304906))
    {
        unk_0xF58083E4652F7505(-1305304906, 0, 0, 0);
    }
    if (unk_0xF6C55F777DC175F4(-1543175077))
    {
        unk_0xF58083E4652F7505(-1543175077, 0, 0, 0);
    }
    if (unk_0xF6C55F777DC175F4(-811770997))
    {
        unk_0xF58083E4652F7505(-811770997, 0, 0, 0);
    }
}

int func_424()//Position - 0xF9FD
{
    switch (Local_171.f_3)
    {
        case 1:
        case 6:
        case 11:
        case 12:
        case 14:
            return 1;
        
        default:
    }
    return 0;
}

void func_425()//Position - 0xFA32
{
    int iVar0;
    int iVar1;
    
    if (func_5(Local_171.f_3))
    {
        if (Local_171.f_3 == 1 || Local_171.f_3 == 6)
        {
            iVar0 = func_204(unk_0x7C7787D2D7139A85(), 1);
            iVar1 = func_200(iVar0, 1);
            if (iVar1 < 11)
            {
                if (unk_0x2F879C0BDBED0194(unk_0x0FA8183DAD2B3203()))
                {
                    unk_0xC167C31F20B1FD61(unk_0x0FA8183DAD2B3203(), joaat("gadget_parachute"), 1, false, false);
                    func_426(1);
                }
            }
            else
            {
                unk_0x3BA09A2095A925C0(unk_0x7C7787D2D7139A85(), true);
            }
        }
    }
}

void func_426(bool bParam0)//Position - 0xFAA4
{
    int iVar0;
    
    if (unk_0xF7BAF104A598DD7E(unk_0x0FA8183DAD2B3203(), 5) != 0)
    {
        unk_0x70CBCB37A00F34A2(unk_0x0FA8183DAD2B3203(), 177, 1);
        unk_0x32974B898A8F4659(unk_0x7C7787D2D7139A85(), func_208(585, -1, 0));
        if (func_446())
        {
            unk_0x245F2184A78C3C16(unk_0x7C7787D2D7139A85(), 1931904776);
        }
        else if (func_445())
        {
            unk_0x245F2184A78C3C16(unk_0x7C7787D2D7139A85(), -2124524821);
        }
        if (func_442(3610, -1, -1))
        {
        }
        iVar0 = func_208(2040, -1, 0);
        unk_0x73EE75EBF6ACA42D(unk_0x7C7787D2D7139A85(), func_441(unk_0x23625FE58BACEBFD(unk_0x7C7787D2D7139A85()), iVar0));
        if (func_261(0))
        {
            unk_0x32974B898A8F4659(unk_0x7C7787D2D7139A85(), func_208(585, -1, 0));
        }
        else
        {
            unk_0x32974B898A8F4659(unk_0x7C7787D2D7139A85(), func_440(Global_26C3BB));
        }
        func_439(unk_0x7C7787D2D7139A85(), iVar0);
        unk_0xDBD9ADBEEF25EDA7(unk_0x7C7787D2D7139A85(), 5, func_432(unk_0x0FA8183DAD2B3203(), iVar0), func_431(unk_0x0FA8183DAD2B3203(), iVar0), 0);
        func_430(func_208(2040, -1, 0), 1);
        Global_26A0A9.f_11F = 1;
        func_427(unk_0x7C7787D2D7139A85(), -1, -1);
        if (bParam0)
        {
        }
    }
}

void func_427(int iParam0, int iParam1, int iParam2)//Position - 0xFBA6
{
    if (unk_0x393E9918BC37548A())
    {
        func_429();
        if (iParam2 == -1)
        {
            iParam2 = func_208(2040, -1, 0);
        }
        unk_0xDBD9ADBEEF25EDA7(iParam0, 5, func_432(unk_0x23625FE58BACEBFD(iParam0), iParam2), func_431(unk_0x23625FE58BACEBFD(iParam0), iParam2), 0);
        unk_0x73EE75EBF6ACA42D(iParam0, func_441(unk_0x23625FE58BACEBFD(iParam0), iParam2));
        unk_0x0453EBC0FB8D8A80(unk_0x23625FE58BACEBFD(iParam0), 5, func_432(unk_0x23625FE58BACEBFD(iParam0), iParam2), func_431(unk_0x23625FE58BACEBFD(iParam0), iParam2), func_441(unk_0x23625FE58BACEBFD(iParam0), iParam2));
        if (iParam1 == -1)
        {
            iParam1 = func_208(585, -1, 0);
        }
        if (func_261(1) && func_428(iParam0))
        {
            unk_0x32974B898A8F4659(iParam0, func_440(Global_26C3BB));
        }
        else
        {
            unk_0x32974B898A8F4659(iParam0, iParam1);
        }
        if (unk_0xA2BC31158C8CEFD2(Global_440000.f_1C, 4))
        {
            unk_0x32974B898A8F4659(iParam0, Global_180623);
            unk_0x245F2184A78C3C16(iParam0, -1780610292);
        }
        func_439(iParam0, iParam2);
        unk_0x70CBCB37A00F34A2(unk_0x23625FE58BACEBFD(iParam0), 177, 1);
    }
}

bool func_428(int iParam0)//Position - 0xFCA0
{
    return func_107(iParam0, 10);
}

void func_429()//Position - 0xFCB0
{
    Global_12B06 = 0;
    Global_12B07 = -1;
    Global_12B08 = -1;
    Global_12B09 = -1;
    Global_12B0A = -1;
    Global_12B0B = -1;
}

void func_430(int iParam0, int iParam1)//Position - 0xFCD6
{
    if (unk_0x393E9918BC37548A())
    {
        func_429();
        func_198(2040, iParam0, -1, 1, 0);
        unk_0xDBD9ADBEEF25EDA7(unk_0x7C7787D2D7139A85(), 5, func_432(unk_0x0FA8183DAD2B3203(), iParam0), func_431(unk_0x0FA8183DAD2B3203(), iParam0), 0);
        func_439(unk_0x7C7787D2D7139A85(), iParam0);
        unk_0x73EE75EBF6ACA42D(unk_0x7C7787D2D7139A85(), func_441(unk_0x0FA8183DAD2B3203(), iParam0));
        if ((iParam1 && !unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203())) && unk_0xF7BAF104A598DD7E(unk_0x0FA8183DAD2B3203(), 5) != 0)
        {
            func_427(unk_0x7C7787D2D7139A85(), -1, -1);
        }
    }
}

int func_431(int iParam0, int iParam1)//Position - 0xFD5C
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

var func_432(int iParam0, int iParam1)//Position - 0xFDBE
{
    bool bVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    
    bVar0 = unk_0xF7BAF104A598DD7E(iParam0, 9) != false;
    iVar1 = unk_0x0247E28AC199A99A(iParam0, 8, unk_0xF7BAF104A598DD7E(iParam0, 8), unk_0xFFE2C28AD044C475(iParam0, 8));
    iVar2 = unk_0x0247E28AC199A99A(iParam0, 11, unk_0xF7BAF104A598DD7E(iParam0, 11), unk_0xFFE2C28AD044C475(iParam0, 11));
    iVar3 = unk_0x0247E28AC199A99A(iParam0, 4, unk_0xF7BAF104A598DD7E(iParam0, 4), unk_0xFFE2C28AD044C475(iParam0, 4));
    if ((((!bVar0 == Global_12B06 || !iParam1 == Global_12B07) || !iVar1 == Global_12B08) || !iVar2 == Global_12B09) || !iVar3 == Global_12B0A)
    {
        Global_12B06 = bVar0;
        Global_12B07 = iParam1;
        Global_12B08 = iVar1;
        Global_12B09 = iVar2;
        Global_12B0A = iVar3;
        Global_12B0B = func_433(iParam0, iParam1);
        if (iParam1 == 63 || iParam1 == 62)
        {
            if (unk_0x7F375072508F738F(unk_0x23625FE58BACEBFD(unk_0x7C7787D2D7139A85())) == joaat("mp_f_freemode_01"))
            {
                if (Global_12B0B == 61)
                {
                    Global_12B0B = 79;
                }
                else if (Global_12B0B == 39)
                {
                    Global_12B0B = 79;
                }
                else if (Global_12B0B == 76)
                {
                    Global_12B0B = 80;
                }
            }
            else if (unk_0x7F375072508F738F(unk_0x23625FE58BACEBFD(unk_0x7C7787D2D7139A85())) == joaat("mp_m_freemode_01"))
            {
                if (Global_12B0B == 61)
                {
                    Global_12B0B = 78;
                }
                else if (Global_12B0B == 39)
                {
                    Global_12B0B = 78;
                }
            }
        }
    }
    return Global_12B0B;
}

int func_433(int iParam0, int iParam1)//Position - 0xFF20
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
    
    iVar0 = unk_0xF7BAF104A598DD7E(iParam0, 11);
    if (unk_0xF7BAF104A598DD7E(iParam0, 9) != 0)
    {
        bVar1 = true;
    }
    iVar2 = unk_0x7F375072508F738F(iParam0);
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
    iVar4 = unk_0x0247E28AC199A99A(iParam0, 8, unk_0xF7BAF104A598DD7E(iParam0, 8), unk_0xFFE2C28AD044C475(iParam0, 8));
    if (unk_0xC8A729A94EDD3FC9(iVar4, 240476421, 8))
    {
        if (iVar2 == joaat("mp_m_freemode_01"))
        {
            if (unk_0xC8A729A94EDD3FC9(iVar4, -1499233212, 8))
            {
                return (2 + iVar3);
            }
            if (unk_0xC8A729A94EDD3FC9(iVar4, 350281921, 8))
            {
                return func_438(iParam0, iParam1) + 15;
            }
            if (unk_0xC8A729A94EDD3FC9(iVar4, -887141061, 8))
            {
                return func_438(iParam0, iParam1) + 15;
            }
            if (unk_0xC8A729A94EDD3FC9(iVar4, -1185371730, 8))
            {
                return func_438(iParam0, iParam1) + 15;
            }
            if (unk_0xC8A729A94EDD3FC9(iVar4, -2124629577, 8))
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else
        {
            if (unk_0xC8A729A94EDD3FC9(iVar4, -1499233212, 8))
            {
                return (7 + iVar3);
            }
            if (unk_0xC8A729A94EDD3FC9(iVar4, 350281921, 8))
            {
                return (8 + iVar3);
            }
            if (unk_0xC8A729A94EDD3FC9(iVar4, -887141061, 8))
            {
                return func_438(iParam0, iParam1) + 15;
            }
            if (unk_0xC8A729A94EDD3FC9(iVar4, -1185371730, 8))
            {
                return func_438(iParam0, iParam1) + 15;
            }
            if (unk_0xC8A729A94EDD3FC9(iVar4, -2124629577, 8))
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        return func_438(iParam0, iParam1);
    }
    if (func_437(iParam0))
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
        iVar5 = unk_0x0247E28AC199A99A(iParam0, 11, iVar0, unk_0xFFE2C28AD044C475(iParam0, 11));
        if (unk_0xC8A729A94EDD3FC9(iVar5, 655081063, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -530089825, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -713698407, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1882920022, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -317649054, 0))
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
            else if (unk_0xC8A729A94EDD3FC9(iVar5, -979468724, 0))
            {
                return func_438(iParam0, iParam1) + 15;
            }
            else if (unk_0xC8A729A94EDD3FC9(iVar5, -306768813, 0))
            {
                return func_438(iParam0, iParam1) + 15;
            }
            else if (unk_0xC8A729A94EDD3FC9(iVar5, -58412562, 0))
            {
                return func_438(iParam0, iParam1) + 15;
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 1536649085, 0) && !unk_0xC8A729A94EDD3FC9(iVar5, 350281921, 0))
        {
            iVar6 = func_436(iVar5, 0);
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
                        iVar0 = func_435(iVar5);
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
                        iVar0 = func_435(iVar5);
                        break;
                    }
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 248194463, 0))
        {
            if (unk_0xC8A729A94EDD3FC9(iVar5, -1347486026, 0))
            {
                return (3 + iVar3);
            }
            else
            {
                return (7 + iVar3);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 396458410, 0))
        {
            iVar7 = func_434(iVar5, 0);
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
                    iVar0 = func_435(iVar5);
                    break;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -779835469, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1119232689, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -2102859770, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 1784133476, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1607949555, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 1976716889, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 2099109084, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1488441032, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1719167561, 0) || unk_0xC8A729A94EDD3FC9(iVar5, 1431529976, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1274099003, 0) || unk_0xC8A729A94EDD3FC9(iVar5, 1723403459, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                if (unk_0xC8A729A94EDD3FC9(iVar5, -1407614029, 0))
                {
                    return func_438(iParam0, iParam1) + 15;
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 912543594, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return (2 + iVar3);
            }
        }
        else if ((unk_0xC8A729A94EDD3FC9(iVar5, -1086258388, 0) || unk_0xC8A729A94EDD3FC9(iVar5, 103539798, 0)) || unk_0xC8A729A94EDD3FC9(iVar5, -994703884, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 2044466679, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -2020757158, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1064262817, 0))
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
                return func_438(iParam0, iParam1);
            }
            else
            {
                return (8 + iVar3);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1419806467, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1053842259, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1358888880, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -441291342, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -747583185, 0))
        {
            if (iVar2 == joaat("mp_f_freemode_01"))
            {
                if (bVar1)
                {
                    return func_438(iParam0, iParam1);
                }
                else
                {
                    return (2 + iVar3);
                }
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1986415230, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
            }
            else
            {
                return (8 + iVar3);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -2088146832, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -785939537, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -872449705, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 700658917, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 1714969731, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 745826556, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 1055526375, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 144417099, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 492620493, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -416620954, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -102825006, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -733792105, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 137011325, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -641612092, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
            }
            else
            {
                return (6 + iVar3);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1351486939, 0))
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
                return func_438(iParam0, iParam1);
            }
            else
            {
                return (2 + iVar3);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -2119756144, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1507532917, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1);
            }
            else
            {
                return (7 + iVar3);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 947651647, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
            }
            else
            {
                return (8 + iVar3);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1506370874, 0) || unk_0xC8A729A94EDD3FC9(iVar5, 1927516484, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1786447517, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1010805287, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1325813684, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return (8 + iVar3);
            }
            else if (bVar1)
            {
                return func_438(iParam0, iParam1);
            }
            else
            {
                return (8 + iVar3);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -549843760, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -828478571, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1);
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 1690933245, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return (8 + iVar3);
            }
            else if (bVar1)
            {
                return func_438(iParam0, iParam1);
            }
            else
            {
                return (8 + iVar3);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 1360588936, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 2136821028, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 1830529185, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -269266203, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 201427653, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 967829025, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -685039259, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1266557933, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1);
            }
            else
            {
                return (8 + iVar3);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -979468724, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1);
            }
            else
            {
                return (8 + iVar3);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1813210391, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 263623295, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1);
            }
            else
            {
                return (8 + iVar3);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -309899747, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -89003918, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -747858475, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1);
            }
            else
            {
                return func_438(iParam0, iParam1);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 490219883, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1);
            }
            else
            {
                return (8 + iVar3);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 1208450825, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1);
            }
            else
            {
                return (8 + iVar3);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 297865853, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1);
            }
            else
            {
                return (8 + iVar3);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 602650322, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1);
            }
            else
            {
                return (8 + iVar3);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 905042630, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1);
            }
            else
            {
                return (8 + iVar3);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 1204125293, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1);
            }
            else
            {
                return (8 + iVar3);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 310055897, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1);
            }
            else
            {
                return (8 + iVar3);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 606713654, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1);
            }
            else
            {
                return func_438(iParam0, iParam1);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 1831422288, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -838136846, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 655638019, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 970679185, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 83294665, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 382246252, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -99064836, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1);
            }
            else
            {
                return (8 + iVar3);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -697656159, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -398213037, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 1380605304, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
            }
            else
            {
                return func_438(iParam0, iParam1);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -306768813, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -58412562, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 1711219157, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1) + 15;
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 1466664110, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1) + 15;
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1968575702, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1) + 15;
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 245429010, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return (48 + iVar3);
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 15161247, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 2044923487, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -915352927, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -538378351, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -2139144017, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -435539886, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 695107163, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
            }
            else
            {
                iVar0 = 7;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1499233212, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1) + 15;
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 350281921, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1) + 15;
            }
            else
            {
                return (8 + iVar3);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -2124629577, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 1877382859, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1) + 15;
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1375878737, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1347486026, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1467843180, 0))
        {
            if (unk_0xC8A729A94EDD3FC9(iVar5, 2006289597, 0))
            {
                if (iVar2 == joaat("mp_m_freemode_01"))
                {
                    return func_438(iParam0, iParam1) + 15;
                }
                else
                {
                    return func_438(iParam0, iParam1) + 15;
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -540436505, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1) + 15;
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 1207461955, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1) + 15;
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1467843180, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1);
            }
            else
            {
                return func_438(iParam0, iParam1);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1467843180, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1) + 15;
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -785939537, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return (8 + iVar3);
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -785939537, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return (8 + iVar3);
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -939525357, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1);
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1986415230, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return (4 + iVar3);
            }
            else
            {
                return func_438(iParam0, iParam1);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1467843180, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1) + 15;
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1663871176, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1467843180, 0))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1467843180, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1) + 15;
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1467843180, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1);
            }
            else
            {
                return func_438(iParam0, iParam1);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -939525357, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1);
            }
            else
            {
                return func_438(iParam0, iParam1) + 15;
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 398019854, 0))
        {
            if (iVar2 == joaat("mp_m_freemode_01"))
            {
                return func_438(iParam0, iParam1) + 15;
            }
            else
            {
                return func_438(iParam0, iParam1);
            }
        }
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 1965569012, 0) && iVar2 == joaat("mp_f_freemode_01"))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, 2026620439, 0) && iVar2 == joaat("mp_f_freemode_01"))
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
        else if (unk_0xC8A729A94EDD3FC9(iVar5, -1410897066, 0))
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
        else if ((unk_0xC8A729A94EDD3FC9(iVar5, -2017999390, 0) || unk_0xC8A729A94EDD3FC9(iVar5, 320460654, 0)) || unk_0xC8A729A94EDD3FC9(iVar5, -826135203, 0))
        {
            return (7 + iVar3);
        }
        else
        {
            iVar8 = iVar0;
            iVar0 = func_435(iVar5);
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

int func_434(int iParam0, int iParam1)//Position - 0x12154
{
    int iVar0;
    
    iVar0 = -1;
    if (unk_0xC8A729A94EDD3FC9(iParam0, 140732128, iParam1))
    {
        iVar0 = 0;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 1863955539, iParam1))
    {
        iVar0 = 1;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 2106216756, iParam1))
    {
        iVar0 = 2;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, -761463976, iParam1))
    {
        iVar0 = 3;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 1627756587, iParam1))
    {
        iVar0 = 4;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 684992453, iParam1))
    {
        iVar0 = 5;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 916636514, iParam1))
    {
        iVar0 = 6;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, -1939378450, iParam1))
    {
        iVar0 = 7;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 441715397, iParam1))
    {
        iVar0 = 8;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 264959411, iParam1))
    {
        iVar0 = 9;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, -1127835965, iParam1))
    {
        iVar0 = 10;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, -820724897, iParam1))
    {
        iVar0 = 11;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 153792394, iParam1))
    {
        iVar0 = 12;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, -672871169, iParam1))
    {
        iVar0 = 13;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 572416369, iParam1))
    {
        iVar0 = 14;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, -196114988, iParam1))
    {
        iVar0 = 15;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 1322269404, iParam1))
    {
        iVar0 = 16;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 548036233, iParam1))
    {
        iVar0 = 17;
    }
    return iVar0;
}

int func_435(int iParam0)//Position - 0x122F4
{
    int iVar0;
    
    iVar0 = -1;
    if (iParam0 == 0)
    {
        return iVar0;
    }
    if (unk_0xC8A729A94EDD3FC9(iParam0, 821147517, 0))
    {
        iVar0 = 0;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 2055293595, 0))
    {
        iVar0 = 1;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, -1992562672, 0))
    {
        iVar0 = 2;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 1458930564, 0))
    {
        iVar0 = 3;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, -1046587084, 0))
    {
        iVar0 = 4;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 1943944625, 0))
    {
        iVar0 = 5;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, -1999870067, 0))
    {
        iVar0 = 6;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 2048281121, 0))
    {
        iVar0 = 7;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, -109983526, 0))
    {
        iVar0 = 8;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, -1394888785, 0))
    {
        iVar0 = 9;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, -144826511, 0))
    {
        iVar0 = 10;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 19149565, 0))
    {
        iVar0 = 11;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 310957510, 0))
    {
        iVar0 = 12;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 742787396, 0))
    {
        iVar0 = 13;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, -1604914832, 0))
    {
        iVar0 = 14;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, -1092211054, 0))
    {
        iVar0 = 15;
    }
    return iVar0;
}

int func_436(int iParam0, int iParam1)//Position - 0x12461
{
    int iVar0;
    
    iVar0 = -1;
    if (unk_0xC8A729A94EDD3FC9(iParam0, -870074461, iParam1))
    {
        iVar0 = 0;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, -1174924468, iParam1))
    {
        iVar0 = 1;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, -868698159, iParam1))
    {
        iVar0 = 2;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, -1177480446, iParam1))
    {
        iVar0 = 3;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, -1347486026, iParam1))
    {
        iVar0 = 4;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, -1655154167, iParam1))
    {
        iVar0 = 5;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, -2105858993, iParam1))
    {
        iVar0 = 6;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 1893564692, iParam1))
    {
        iVar0 = 7;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 1710451520, iParam1))
    {
        iVar0 = 8;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 1416808511, iParam1))
    {
        iVar0 = 9;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 1641506460, iParam1))
    {
        iVar0 = 10;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 699233865, iParam1))
    {
        iVar0 = 11;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 393400788, iParam1))
    {
        iVar0 = 12;
    }
    else if (unk_0xC8A729A94EDD3FC9(iParam0, 216120498, iParam1))
    {
        iVar0 = 13;
    }
    return iVar0;
}

int func_437(int iParam0)//Position - 0x125A5
{
    if (unk_0xC8A729A94EDD3FC9(unk_0x0247E28AC199A99A(iParam0, 4, unk_0xF7BAF104A598DD7E(iParam0, 4), unk_0xFFE2C28AD044C475(iParam0, 4)), 1052059919, 0))
    {
        return 1;
    }
    return 0;
}

int func_438(int iParam0, int iParam1)//Position - 0x125D4
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

void func_439(int iParam0, int iParam1)//Position - 0x12652
{
    if (iParam1 > 61)
    {
        unk_0x0C9406A686228FD1(iParam0, -1825432403);
    }
    else if (iParam1 > 51)
    {
        unk_0x0C9406A686228FD1(iParam0, 1269440357);
    }
    else if (iParam1 > 46)
    {
        unk_0x0C9406A686228FD1(iParam0, 1766664132);
    }
    else if (iParam1 > 26)
    {
        unk_0x0C9406A686228FD1(iParam0, 1277738372);
    }
    else if (iParam1 > 0)
    {
        unk_0x0C9406A686228FD1(iParam0, 1269440357);
    }
    else
    {
        unk_0x90D72BF2438A9631(iParam0);
    }
}

int func_440(var uParam0)//Position - 0x126C8
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

int func_441(int iParam0, int iParam1)//Position - 0x12780
{
    return 0;
}

int func_442(int iParam0, int iParam1, int iParam2)//Position - 0x12789
{
    int iVar0;
    int iVar1;
    var uVar2;
    
    iVar0 = 0;
    if (iParam1 == -1)
    {
        iParam1 = func_16();
    }
    iVar1 = func_444(iParam0, iParam1);
    uVar2 = func_443(iParam0);
    if (0 != iVar1)
    {
        iVar0 = unk_0x0F1A9E0CCDF4F08D(iVar1, uVar2, iParam2);
    }
    return iVar0;
}

int func_443(int iParam0)//Position - 0x127C6
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

int func_444(int iParam0, int iParam1)//Position - 0x12B62
{
    int iVar0;
    
    if (iParam1 == -1)
    {
        iParam1 = func_16();
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

bool func_445()//Position - 0x12EDB
{
    return unk_0x9742C47C6EA02281(1428761799);
}

bool func_446()//Position - 0x12EEC
{
    return unk_0x9742C47C6EA02281(-1005876368);
}

void func_447()//Position - 0x12EFD
{
    vector3 vVar0;
    var uVar1;
    int iVar2;
    var uVar3;
    float fVar4;
    int iVar5;
    vector3 vVar6;
    bool bVar7;
    bool bVar8;
    bool bVar9;
    int iVar10;
    vector3 vVar11;
    float fVar12;
    
    if ((((!func_7(unk_0x7C7787D2D7139A85()) && !func_162(unk_0x7C7787D2D7139A85())) && !func_315()) && !func_458(unk_0x7C7787D2D7139A85(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) && !func_457(unk_0x7C7787D2D7139A85()))
    {
        if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
        {
            fVar4 = 2.147484E+09f;
            iVar5 = -1;
            vVar6 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
            bVar7 = func_5(Local_171.f_3);
            bVar8 = unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0);
            bVar9 = func_455();
            iVar2 = 0;
            while (iVar2 < 10)
            {
                iVar10 = Local_171.f_43[iVar2 /*2*/].f_1;
                if (unk_0x8A7BBB98FFB32893(iVar10) && unk_0xD960230552BC4165(unk_0x40237B62400B4BCC(iVar10), 0))
                {
                    if (!bVar9 && bVar7)
                    {
                        if (bVar8 && unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0) == unk_0x40237B62400B4BCC(iVar10))
                        {
                            func_337(1);
                        }
                    }
                    unk_0xA1E7A40E1F56E511(&uVar3, iVar2);
                    if (bVar7 && func_40(Local_171.f_3, iVar2, &vVar0, &uVar1))
                    {
                        vVar11 = { unk_0xACE5E491FC1B0D37(unk_0x40237B62400B4BCC(iVar10), 1) };
                        if (SYSTEM::VDIST(vVar11, vVar0) <= 10f)
                        {
                            fVar12 = SYSTEM::VDIST(vVar11, vVar6);
                            if (fVar12 < fVar4)
                            {
                                fVar4 = fVar12;
                                iVar5 = iVar2;
                            }
                        }
                    }
                }
                iVar2++;
            }
            if (func_41(Local_171.f_3))
            {
                unk_0xA1E7A40E1F56E511(&uVar3, 31);
            }
            Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_7 = uVar3;
            if (func_5(Local_171.f_3))
            {
                if ((unk_0x2F879C0BDBED0194(unk_0x0FA8183DAD2B3203()) || (unk_0x916AF183F71F17C1(unk_0x0FA8183DAD2B3203()) && !unk_0x3DAA08BFD9A801FD(unk_0x0FA8183DAD2B3203()))) || func_17(-1, 0))
                {
                    if ((fVar4 < 2.147484E+09f && iVar5 >= 0) && iVar5 < 10)
                    {
                        if (func_40(Local_171.f_3, iVar5, &vVar0, &uVar1))
                        {
                            func_454(vVar0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
                            func_453(vVar0, 1, 0);
                            func_449(10, 0, 0, 0, 0);
                            unk_0xA1E7A40E1F56E511(&iLocal_142, 5);
                        }
                    }
                }
                else
                {
                    func_448();
                }
            }
        }
    }
    else
    {
        func_448();
    }
}

void func_448()//Position - 0x1313D
{
    if (unk_0xA2BC31158C8CEFD2(iLocal_142, 5))
    {
        func_170();
        func_168();
        unk_0x3B76114EC84D5812(&iLocal_142, 5);
        func_167();
    }
}

void func_449(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x13164
{
    if (Global_2531AD.f_765.f_2B2.f_10 != func_102())
    {
        if (unk_0xA2BC31158C8CEFD2(Global_24FD09[Global_2531AD.f_765.f_2B2.f_10 /*421*/].f_192, 0) && func_450())
        {
            iParam0 = 23;
        }
    }
    if (iParam0 != 18 && iParam0 != 17)
    {
        Global_24D05D = 0;
    }
    Global_24B2CF.f_1E5 = iParam0;
    Global_24B2CF.f_1E5.f_1 = unk_0x429EE9FF15BB9033();
    Global_24B2CF.f_1E5.f_2 = iParam1;
    Global_24B2CF.f_1E5.f_3 = iParam2;
    Global_24B2CF.f_1E5.f_4 = iParam3;
    Global_24B2CF.f_1E5.f_5 = iParam4;
}

int func_450()//Position - 0x13203
{
    if (((((func_220(unk_0x7C7787D2D7139A85()) == 229 || func_220(unk_0x7C7787D2D7139A85()) == 191) || func_452()) || func_451()) || func_355(unk_0x7C7787D2D7139A85())) || Global_26463D.f_E2 == 1)
    {
        return 0;
    }
    return 1;
}

bool func_451()//Position - 0x1325F
{
    return Global_180602;
}

int func_452()//Position - 0x1326B
{
    if (Global_440000 == 6)
    {
        return 1;
    }
    return 0;
}

void func_453(vector3 vParam0, int iParam1, int iParam2)//Position - 0x13280
{
    Global_24B2CF.f_2D.f_31 = { vParam0 };
    Global_24B2CF.f_2D.f_34 = iParam1;
    Global_24B2CF.f_2D.f_35 = iParam2;
}

void func_454(vector3 vParam0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)//Position - 0x132AA
{
    struct<28> Var0;
    
    Var0.f_7 = 1;
    Var0.f_8 = 1;
    Var0.f_15 = 1115815936;
    Var0.f_1B = -1082130432;
    if (unk_0xAB2A82A2838B61B7(Global_24D546.f_6))
    {
        if (!Global_24D546.f_6 == unk_0x429EE9FF15BB9033())
        {
            return;
        }
    }
    if (SYSTEM::VMAG(vParam0) == 0f)
    {
        return;
    }
    if (!unk_0xAB2A82A2838B61B7(Global_24D546.f_6))
    {
        Global_24D546.f_6 = unk_0x429EE9FF15BB9033();
    }
    Var0.f_6 = Global_24D546.f_6;
    Var0 = { vParam0 };
    Var0.f_5 = fParam1;
    Var0.f_4 = fParam2;
    Var0.f_7 = iParam3;
    Var0.f_3 = fParam4;
    Var0.f_8 = iParam6;
    Var0.f_9 = iParam5;
    Var0.f_A = 0;
    Var0.f_B = { 0f, 0f, 0f };
    Var0.f_E = { 0f, 0f, 0f };
    Var0.f_11 = 0f;
    Var0.f_15 = fParam7;
    Var0.f_16 = iParam8;
    if (func_385(unk_0x7C7787D2D7139A85()))
    {
        if (iParam11 || iParam5)
        {
            Var0.f_17 = 1;
        }
        else
        {
            Var0.f_17 = 0;
        }
    }
    else
    {
        Var0.f_17 = 0;
    }
    if (Var0.f_15 < 1f)
    {
        Var0.f_15 = 1f;
    }
    Var0.f_18 = iParam9;
    Var0.f_1A = iParam10;
    Var0.f_1B = iParam12;
    Global_24D546 = { Var0 };
}

int func_455()//Position - 0x133D3
{
    if ((((((func_456(unk_0x7C7787D2D7139A85()) || func_165()) || func_164()) || func_163(unk_0x7C7787D2D7139A85(), 21)) || func_163(unk_0x7C7787D2D7139A85(), 25)) || func_8(unk_0x7C7787D2D7139A85())) || func_7(unk_0x7C7787D2D7139A85()))
    {
        return 1;
    }
    return 0;
}

int func_456(int iParam0)//Position - 0x1343B
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iVar0 /*614*/].f_1, 7);
    }
    return 0;
}

int func_457(int iParam0)//Position - 0x13461
{
    if (unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_111.f_18, 14))
    {
        return 1;
    }
    if (unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_111.f_18, 11))
    {
        return 1;
    }
    return 0;
}

int func_458(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)//Position - 0x134A0
{
    if (Global_1844AE[iParam0 /*871*/].f_111.f_1A > 0)
    {
        if (bParam1)
        {
            if (unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_111.f_18, 0))
            {
                return 1;
            }
        }
        else
        {
            return 1;
        }
    }
    if (!bParam2)
    {
        if (func_472(iParam0))
        {
            return 1;
        }
    }
    if (!bParam3)
    {
        if (func_299(iParam0))
        {
            return 1;
        }
    }
    if (!bParam4)
    {
        if (func_471(iParam0))
        {
            return 1;
        }
    }
    if (!bParam5)
    {
        if (func_470(iParam0))
        {
            return 1;
        }
    }
    if (!bParam6)
    {
        if (func_469(iParam0))
        {
            return 1;
        }
    }
    if (!bParam7)
    {
        if (func_468(iParam0))
        {
            return 1;
        }
    }
    if (!bParam8)
    {
        if (func_467(iParam0))
        {
            return 1;
        }
    }
    if (!bParam9)
    {
        if (func_466(iParam0))
        {
            return 1;
        }
    }
    if (!bParam10)
    {
        if (func_465(iParam0))
        {
            return 1;
        }
    }
    if (!bParam11)
    {
        if (func_464(iParam0, 0))
        {
            return 1;
        }
    }
    if (!bParam12)
    {
        if (func_463(iParam0))
        {
            return 1;
        }
    }
    if (!bParam13)
    {
        if (func_462(iParam0))
        {
            return 1;
        }
    }
    if (!bParam14)
    {
        if (func_461(iParam0))
        {
            return 1;
        }
    }
    if (!bParam15)
    {
        if (func_460(iParam0))
        {
            return 1;
        }
    }
    if (!bParam16)
    {
        if (func_459(iParam0))
        {
            return 1;
        }
    }
    return 0;
}

int func_459(int iParam0)//Position - 0x135FF
{
    if (iParam0 != func_102())
    {
        if (func_12(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_300(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 17;
            }
        }
    }
    return 0;
}

int func_460(int iParam0)//Position - 0x13646
{
    if (iParam0 != func_102())
    {
        if (func_12(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_300(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 16;
            }
        }
    }
    return 0;
}

int func_461(int iParam0)//Position - 0x1368D
{
    if (iParam0 != func_102())
    {
        if (func_12(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_300(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 15;
            }
        }
    }
    return 0;
}

int func_462(int iParam0)//Position - 0x136D4
{
    if (iParam0 != func_102())
    {
        if (func_12(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_300(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 14;
            }
        }
    }
    return 0;
}

int func_463(int iParam0)//Position - 0x1371B
{
    if (iParam0 != func_102())
    {
        if (func_12(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_300(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 13;
            }
        }
    }
    return 0;
}

int func_464(int iParam0, bool bParam1)//Position - 0x13762
{
    int iVar0;
    
    if (bParam1)
    {
        if (unk_0x5294582CE404D3F4(unk_0x0FA8183DAD2B3203(), 0))
        {
            iVar0 = unk_0x4D57D3E5ECE15A41(unk_0x0FA8183DAD2B3203(), 0);
            if (unk_0x7F375072508F738F(iVar0) == -1988428699)
            {
                return 1;
            }
        }
    }
    if (iParam0 != func_102())
    {
        if (func_12(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1 && Global_24FD09[iParam0 /*421*/].f_135.f_8 != func_102())
            {
                return func_300(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 12;
            }
        }
    }
    return 0;
}

int func_465(int iParam0)//Position - 0x137F0
{
    if (iParam0 != func_102())
    {
        if (func_12(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_300(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 11;
            }
        }
    }
    return 0;
}

int func_466(int iParam0)//Position - 0x13837
{
    if (iParam0 != func_102())
    {
        if (func_12(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_300(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 11;
            }
        }
    }
    return 0;
}

int func_467(int iParam0)//Position - 0x1387E
{
    if (iParam0 != func_102())
    {
        if (func_12(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1 && Global_24FD09[iParam0 /*421*/].f_135.f_8 != func_102())
            {
                return func_300(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 8;
            }
        }
    }
    return 0;
}

int func_468(int iParam0)//Position - 0x138DE
{
    if (iParam0 != func_102())
    {
        if (func_12(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_300(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 9;
            }
        }
    }
    return 0;
}

int func_469(int iParam0)//Position - 0x13925
{
    if (iParam0 != func_102())
    {
        if (func_12(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_300(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 7;
            }
        }
    }
    return 0;
}

int func_470(int iParam0)//Position - 0x1396B
{
    if (iParam0 != func_102())
    {
        if (func_12(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_300(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 4;
            }
        }
    }
    return 0;
}

int func_471(int iParam0)//Position - 0x139B1
{
    if (iParam0 != func_102())
    {
        if (func_12(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_300(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 1;
            }
        }
    }
    return 0;
}

int func_472(int iParam0)//Position - 0x139F7
{
    if (iParam0 != func_102())
    {
        if (func_12(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_300(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 0;
            }
        }
    }
    return 0;
}

void func_473(bool bParam0, bool bParam1)//Position - 0x13A3D
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    vector3 vVar6;
    
    if (func_531())
    {
        if (bParam1)
        {
            iVar0 = unk_0x2E40EEA43EF34BD6();
            if (func_100(unk_0x7C7787D2D7139A85()))
            {
                iVar1 = func_323();
                iVar2 = unk_0x74D4E16E179B8F53(iVar1);
                if (unk_0xD56C8C2B75BF9665(iVar2))
                {
                    iVar3 = unk_0x932F91FB8ED4D272(iVar2);
                    if (unk_0x2700CB8907086DF3(iVar3))
                    {
                        iVar0 = iVar3;
                    }
                }
            }
            if (iVar0 >= 0)
            {
                iVar4 = 0;
                while (iVar4 < func_530())
                {
                    switch (Local_171.f_3)
                    {
                        case 14:
                            if (!func_370(iVar4) && !func_369(iVar4))
                            {
                                func_478("AMCH_BRIDGE", bParam0, iVar0, iVar4);
                            }
                            break;
                    }
                    iVar4++;
                }
            }
        }
    }
    if (func_43())
    {
        iVar5 = 0;
        while (iVar5 < 10)
        {
            if (((!bParam0 && unk_0x8A7BBB98FFB32893(Local_171.f_43[iVar5 /*2*/].f_1)) && unk_0xD960230552BC4165(unk_0x40237B62400B4BCC(Local_171.f_43[iVar5 /*2*/].f_1), 0)) && unk_0xBAA38708D7439CA7(unk_0x40237B62400B4BCC(Local_171.f_43[iVar5 /*2*/].f_1), -1, 0))
            {
                if (!unk_0x39A01A052D9B5FF0(iLocal_164[iVar5]))
                {
                    iLocal_164[iVar5] = unk_0xADA89D4F1A58FCBA(unk_0xAEA6D4EC961DFA03(Local_171.f_43[iVar5 /*2*/].f_1));
                    unk_0xD1773DD05FE2AB54(iLocal_164[iVar5], func_477(iVar5));
                    unk_0x6089156CDC87FE4B(iLocal_164[iVar5], 9);
                    unk_0x058B6969CEED705F(iLocal_164[iVar5], func_476(iVar5));
                    func_474(&(iLocal_164[iVar5]), 9);
                }
                else if (!unk_0xF4B969E0807E76C7(unk_0x0FA8183DAD2B3203(), 0))
                {
                    vVar6 = { unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 1) };
                    if (SYSTEM::VDIST(vVar6, unk_0xACE5E491FC1B0D37(unk_0x40237B62400B4BCC(Local_171.f_43[iVar5 /*2*/].f_1), 1)) <= 150f)
                    {
                        unk_0x73DF1B751952DA65(iLocal_164[iVar5], 1);
                    }
                    else
                    {
                        unk_0x73DF1B751952DA65(iLocal_164[iVar5], 0);
                    }
                }
            }
            else if (unk_0x39A01A052D9B5FF0(iLocal_164[iVar5]))
            {
                unk_0xAA2276003B2ADF1B(&(iLocal_164[iVar5]));
            }
            iVar5++;
        }
    }
}

void func_474(var uParam0, int iParam1)//Position - 0x13C25
{
    int iVar0;
    
    if (unk_0x39A01A052D9B5FF0(*uParam0))
    {
        iVar0 = func_475(iParam1);
        unk_0x088577CF98F96D05(*uParam0, iVar0);
    }
}

int func_475(int iParam0)//Position - 0x13C4B
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
    unk_0xE0A2E1F5E75D9DF8(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
    return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
    return 0;
}

char* func_476(int iParam0)//Position - 0x13EB3
{
    if (unk_0xDC118E11A4081E9A(Local_171.f_43[iParam0 /*2*/]))
    {
        return "AMCH_AC";
    }
    else if (unk_0x31337ABC07783F10(Local_171.f_43[iParam0 /*2*/]))
    {
        return "AMCH_AC";
    }
    else if (unk_0xF39FF829579D1A21(Local_171.f_43[iParam0 /*2*/]) && !unk_0x79676C1B659A9398(Local_171.f_43[iParam0 /*2*/]))
    {
        return "AMCH_BIKE";
    }
    else
    {
        return "AMBL_VEH";
    }
    return "";
}

int func_477(int iParam0)//Position - 0x13F26
{
    if (unk_0xDC118E11A4081E9A(Local_171.f_43[iParam0 /*2*/]))
    {
        return 64;
    }
    if (unk_0x31337ABC07783F10(Local_171.f_43[iParam0 /*2*/]))
    {
        return 423;
    }
    if (unk_0xF39FF829579D1A21(Local_171.f_43[iParam0 /*2*/]) && !unk_0x79676C1B659A9398(Local_171.f_43[iParam0 /*2*/]))
    {
        return 348;
    }
    return 225;
}

void func_478(char* sParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x13F8D
{
    vector3 vVar0;
    
    if (!unk_0xA2BC31158C8CEFD2(Local_1537[iParam2 /*12*/].f_8[func_361(iParam3)], func_360(iParam3)) && !bParam1)
    {
        vVar0 = { func_529(iParam3) };
        if (!unk_0x39A01A052D9B5FF0(iLocal_163[iParam3]))
        {
            if (!func_528(vVar0, 0f, 0f, 0f, 0) && !func_528(vVar0, 0f, 0f, -2000f, 0))
            {
                iLocal_163[iParam3] = unk_0xACAD99314B51277E(vVar0);
                unk_0x6089156CDC87FE4B(iLocal_163[iParam3], 9);
                unk_0x058B6969CEED705F(iLocal_163[iParam3], sParam0);
                func_479(iLocal_163[iParam3], 25, 1152319488, 1137180672);
                func_474(&(iLocal_163[iParam3]), 12);
                unk_0x73DF1B751952DA65(iLocal_163[iParam3], 1);
            }
        }
        else if (unk_0xCD97B9861557C025())
        {
            unk_0x9C47809EE2CC69F5(iLocal_163[iParam3], 255);
        }
        else
        {
            func_479(iLocal_163[iParam3], 25, 1152319488, 1137180672);
        }
    }
    else if (unk_0x39A01A052D9B5FF0(iLocal_163[iParam3]))
    {
        unk_0xAA2276003B2ADF1B(&(iLocal_163[iParam3]));
        if (!bParam1)
        {
            unk_0x9964F5BBD9415AB7(-1, "Checkpoint_Hit", "GTAO_FM_Events_Soundset", 0);
        }
    }
}

void func_479(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x140B8
{
    unk_0x9C47809EE2CC69F5(iParam0, func_480(iParam0, iParam1, fParam2, fParam3));
}

int func_480(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x140D2
{
    float fVar0;
    
    if (!func_527(Global_2531AD) && !func_81())
    {
        fVar0 = func_482(iParam0, fParam3, fParam2);
        if (iParam1 == 0)
        {
            iParam1 = func_481();
        }
        return (SYSTEM::ROUND((SYSTEM::TO_FLOAT((255 - iParam1)) * fVar0)) + iParam1);
    }
    return 255;
}

int func_481()//Position - 0x14120
{
    if (func_388(Global_2531AD, 1))
    {
        return 50;
    }
    return 0;
}

float func_482(int iParam0, float fParam1, float fParam2)//Position - 0x1413A
{
    int iVar0;
    float fVar1;
    vector3 vVar2;
    vector3 vVar3;
    
    iVar0 = Global_2531AD;
    vVar2 = { func_526(iParam0) };
    vVar2.z = 0f;
    if (Global_1420C3 || func_522())
    {
        if (func_521(iVar0))
        {
            vVar3 = { func_485(iVar0) };
        }
        else if (func_484(iVar0))
        {
            vVar3 = { func_483(iVar0) };
        }
    }
    else
    {
        vVar3 = { unk_0xACE5E491FC1B0D37(unk_0x23625FE58BACEBFD(iVar0), 0) };
    }
    vVar3.z = 0f;
    fVar1 = SYSTEM::VMAG(vVar3 - vVar2);
    if (fVar1 < fParam1)
    {
        fVar1 = fParam1;
    }
    if (fVar1 > fParam2)
    {
        fVar1 = fParam2;
    }
    fVar1 = ((fVar1 - fParam1) / (fParam2 - fParam1));
    fVar1 = (fVar1 - 1f);
    fVar1 = (fVar1 * -1f);
    return fVar1;
}

Vector3 func_483(int iParam0)//Position - 0x141EA
{
    int iVar0;
    
    if (func_484(iParam0))
    {
        iVar0 = unk_0x23625FE58BACEBFD(iParam0);
        if (unk_0xD4B321D9096B01FC(iVar0))
        {
            return unk_0xACE5E491FC1B0D37(unk_0x0FA8183DAD2B3203(), 0);
        }
    }
    return 0f, 0f, 0f;
}

int func_484(int iParam0)//Position - 0x1421E
{
    int iVar0;
    
    if (iParam0 != func_102())
    {
        if (func_12(iParam0, 1, 1))
        {
            iVar0 = unk_0x23625FE58BACEBFD(iParam0);
            if (unk_0xD4B321D9096B01FC(iVar0))
            {
                if (unk_0xC49563EAE7AACA6C(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, 0, 1, 0))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

Vector3 func_485(int iParam0)//Position - 0x1427A
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
    
    if (iParam0 == func_102())
    {
    }
    if (func_520(iParam0))
    {
        iVar0 = func_519(iParam0);
        if (iVar0 != func_102())
        {
            if (!func_518(iVar0))
            {
                if (unk_0xD4B321D9096B01FC(Global_2531AD.f_294[iVar0 /*3*/][1]))
                {
                    return unk_0xACE5E491FC1B0D37(Global_2531AD.f_294[iVar0 /*3*/][1], 0);
                }
                else
                {
                    return Global_24FD09[func_519(iParam0) /*421*/].f_135.f_9;
                }
            }
            else
            {
                iVar1 = func_514(iVar0);
                if (!iVar1 == -1)
                {
                    return Global_19964F.f_1C9[iVar1 /*3*/];
                }
            }
        }
    }
    else if (func_513(iParam0))
    {
        if (unk_0xD4B321D9096B01FC(Global_26A0A9.f_131))
        {
            return unk_0xACE5E491FC1B0D37(Global_26A0A9.f_131, 0);
        }
    }
    else if (func_470(iParam0) && !func_512(iParam0))
    {
        iVar2 = Global_24FD09[iParam0 /*421*/].f_135.f_8;
        if (iVar2 != func_102())
        {
            iVar3 = func_514(iVar2);
            if (!iVar3 == -1)
            {
                return Global_19964F.f_1C9[iVar3 /*3*/];
            }
        }
    }
    else if (func_468(iParam0) && !func_511(iParam0))
    {
        if (func_521(iParam0) && func_510())
        {
            return Global_19964F.f_1C9[Global_24FD09[iParam0 /*421*/].f_135.f_5 /*3*/];
        }
        iVar4 = Global_24FD09[iParam0 /*421*/].f_135.f_8;
        if (iVar4 != func_102())
        {
            if (func_509(iVar4))
            {
                iVar5 = func_505(iVar4);
                if (iVar5 != -1)
                {
                    return Global_19964F.f_1C9[iVar5 /*3*/];
                }
            }
        }
    }
    else if (func_467(iParam0))
    {
        iVar6 = func_504(iParam0);
        if (iVar6 != func_102())
        {
            if (!func_503(iVar6))
            {
                if (unk_0xD4B321D9096B01FC(Global_2531AD.f_2F5[iVar6]))
                {
                    return unk_0xACE5E491FC1B0D37(Global_2531AD.f_2F5[iVar6], 0);
                }
                else
                {
                    return Global_24FD09[func_504(iParam0) /*421*/].f_135.f_10;
                }
            }
            else
            {
                iVar7 = func_505(iVar6);
                if (!iVar7 == -1)
                {
                    return Global_19964F.f_1C9[iVar7 /*3*/];
                }
            }
        }
    }
    else if (func_502(iParam0))
    {
        if (unk_0xD4B321D9096B01FC(Global_26A0A9.f_133))
        {
            return unk_0xACE5E491FC1B0D37(Global_26A0A9.f_133, 0);
        }
    }
    else if (func_466(iParam0) && !func_501(iParam0))
    {
        iVar8 = Global_24FD09[iParam0 /*421*/].f_135.f_8;
        if (iVar8 != func_102())
        {
            if (func_500(iVar8))
            {
                iVar9 = func_496(iVar8);
                if (iVar9 != -1)
                {
                    return func_495(iVar9);
                }
            }
        }
    }
    else if (func_465(iParam0) && !func_494(iParam0))
    {
        iVar10 = Global_24FD09[iParam0 /*421*/].f_135.f_8;
        if (iVar10 != func_102())
        {
            if (func_493(iVar10))
            {
                iVar11 = func_489(iVar10);
                if (iVar11 != -1)
                {
                    return Global_19964F.f_1C9[iVar11 /*3*/];
                }
            }
        }
    }
    else if (func_464(iParam0, 0))
    {
        iVar12 = func_488(iParam0);
        if (iVar12 != func_102())
        {
            if (!func_487(iVar12))
            {
                if (unk_0xD4B321D9096B01FC(Global_2531AD.f_316[iVar12]))
                {
                    return unk_0xACE5E491FC1B0D37(Global_2531AD.f_316[iVar12], 0);
                }
                else
                {
                    return Global_18DB1B[func_488(iParam0) /*614*/].f_257;
                }
            }
            else
            {
                iVar13 = func_489(iVar12);
                if (!iVar13 == -1)
                {
                    return Global_19964F.f_1C9[iVar13 /*3*/];
                }
            }
        }
    }
    else if (func_463(iParam0))
    {
        return -366.7f, -1909.6f, 20f;
    }
    if (func_466(iParam0))
    {
        return func_495(Global_24FD09[iParam0 /*421*/].f_135.f_5);
    }
    if (func_486(iParam0))
    {
        return 965.8165f, 42.25042f, 122.1267f;
    }
    return Global_19964F.f_1C9[Global_24FD09[iParam0 /*421*/].f_135.f_5 /*3*/];
}

int func_486(int iParam0)//Position - 0x14688
{
    if ((func_462(iParam0) || func_460(iParam0)) || func_461(iParam0))
    {
        return 1;
    }
    return 0;
}

int func_487(int iParam0)//Position - 0x146B6
{
    if (iParam0 != func_102())
    {
        return unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_135.f_3, 4);
    }
    return 0;
}

int func_488(int iParam0)//Position - 0x146DE
{
    if (iParam0 == func_102())
    {
        return iParam0;
    }
    return Global_24FD09[iParam0 /*421*/].f_135.f_8;
}

int func_489(int iParam0)//Position - 0x14702
{
    int iVar0;
    
    if (iParam0 != func_102())
    {
        iVar0 = func_492(iParam0);
        if (iVar0 != 0)
        {
            return func_490(iVar0);
        }
    }
    return -1;
}

int func_490(int iParam0)//Position - 0x1472B
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 136)
    {
        if (func_300(iVar0) == 11)
        {
            if (func_491(iVar0) == iParam0)
            {
                return iVar0;
            }
        }
        iVar0++;
    }
    return -1;
}

int func_491(int iParam0)//Position - 0x14762
{
    switch (iParam0)
    {
        case 102:
            return 1;
        
        case 103:
            return 2;
        
        case 104:
            return 3;
        
        case 105:
            return 4;
        
        case 106:
            return 5;
        
        case 107:
            return 6;
        
        case 108:
            return 7;
        
        case 109:
            return 8;
        
        case 110:
            return 9;
        
        case 111:
            return 10;
        
        default:
    }
    return 0;
}

int func_492(int iParam0)//Position - 0x147D9
{
    if (iParam0 != func_102())
    {
        return Global_1844AE[iParam0 /*871*/].f_111.f_115;
    }
    return 0;
}

int func_493(int iParam0)//Position - 0x147FD
{
    if (iParam0 != func_102())
    {
        if (Global_1844AE[iParam0 /*871*/].f_111.f_115 != 0)
        {
            return 1;
        }
    }
    return 0;
}

int func_494(int iParam0)//Position - 0x14826
{
    if (iParam0 != func_102())
    {
        if (func_465(iParam0) && Global_24FD09[iParam0 /*421*/].f_135.f_8 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

Vector3 func_495(int iParam0)//Position - 0x1485B
{
    switch (iParam0)
    {
        case 102:
            return 750.5f, -1322.3f, 26.2802f;
        
        case 103:
            return 331.9f, -974.9f, 30f;
        
        case 104:
            return -146f, -1270f, 28.3088f;
        
        case 105:
            return -17.7f, 225.7f, 106.7566f;
        
        case 106:
            return 894.4f, -2106.4f, 29.4768f;
        
        case 107:
            return -668f, -2431.5f, 12.9444f;
        
        case 108:
            return 213.4f, -3166.6f, 4.7903f;
        
        case 109:
            return 366.6f, 237.6f, 104.9f;
        
        case 110:
            return -1275.3f, -666.8f, 25.6332f;
        
        case 111:
            return -1188.8f, -1156.9f, 4.6582f;
        
        default:
    }
    return Global_19964F.f_1C9[iParam0 /*3*/];
}

int func_496(int iParam0)//Position - 0x14967
{
    int iVar0;
    
    if (iParam0 != func_102())
    {
        iVar0 = func_499(iParam0);
        if (iVar0 != 0)
        {
            return func_497(iVar0);
        }
    }
    return -1;
}

int func_497(int iParam0)//Position - 0x14990
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 136)
    {
        if (func_300(iVar0) == 11)
        {
            if (func_498(iVar0) == iParam0)
            {
                return iVar0;
            }
        }
        iVar0++;
    }
    return -1;
}

int func_498(int iParam0)//Position - 0x149C7
{
    switch (iParam0)
    {
        case 102:
            return 1;
        
        case 103:
            return 2;
        
        case 104:
            return 3;
        
        case 105:
            return 4;
        
        case 106:
            return 5;
        
        case 107:
            return 6;
        
        case 108:
            return 7;
        
        case 109:
            return 8;
        
        case 110:
            return 9;
        
        case 111:
            return 10;
        
        default:
    }
    return 0;
}

int func_499(int iParam0)//Position - 0x14A3E
{
    if (iParam0 != func_102())
    {
        return Global_1844AE[iParam0 /*871*/].f_111.f_13E;
    }
    return 0;
}

int func_500(int iParam0)//Position - 0x14A62
{
    if (iParam0 != func_102())
    {
        return Global_1844AE[iParam0 /*871*/].f_111.f_13E != 0;
    }
    return 0;
}

int func_501(int iParam0)//Position - 0x14A88
{
    if (iParam0 != func_102())
    {
        if (func_466(iParam0) && Global_24FD09[iParam0 /*421*/].f_135.f_8 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

int func_502(int iParam0)//Position - 0x14ABD
{
    if (iParam0 != func_102())
    {
        if (func_12(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_300(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 10;
            }
        }
    }
    return 0;
}

int func_503(int iParam0)//Position - 0x14B04
{
    if (iParam0 != func_102())
    {
        return unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_135.f_2, 6);
    }
    return 0;
}

int func_504(int iParam0)//Position - 0x14B2C
{
    if (iParam0 == func_102())
    {
        return iParam0;
    }
    return Global_24FD09[iParam0 /*421*/].f_135.f_8;
}

int func_505(int iParam0)//Position - 0x14B50
{
    int iVar0;
    
    if (iParam0 == func_102())
    {
        return -1;
    }
    iVar0 = func_508(iParam0);
    if (!iVar0 == 0)
    {
        return func_506(iVar0);
    }
    return -1;
}

int func_506(int iParam0)//Position - 0x14B7F
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 136)
    {
        if (func_300(iVar0) == 9)
        {
            if (func_507(iVar0) == iParam0)
            {
                return iVar0;
            }
        }
        iVar0++;
    }
    return -1;
}

int func_507(int iParam0)//Position - 0x14BB6
{
    switch (iParam0)
    {
        case 89:
            return 1;
            break;
        
        case 90:
            return 2;
            break;
        
        case 91:
            return 3;
            break;
        
        case 92:
            return 4;
            break;
        
        case 93:
            return 5;
            break;
        
        case 94:
            return 6;
            break;
        
        case 95:
            return 7;
            break;
        
        case 96:
            return 8;
            break;
        
        case 97:
            return 9;
            break;
    }
    return 0;
}

int func_508(int iParam0)//Position - 0x14C3D
{
    if (iParam0 == func_102())
    {
        return 0;
    }
    return Global_1844AE[iParam0 /*871*/].f_111.f_10B;
}

int func_509(int iParam0)//Position - 0x14C61
{
    if (iParam0 != func_102())
    {
        return Global_1844AE[iParam0 /*871*/].f_111.f_10B != 0;
    }
    return 0;
}

int func_510()//Position - 0x14C87
{
    if (unk_0xA2BC31158C8CEFD2(Global_19964F.f_2, 13) || Global_19964F.f_AFE)
    {
        return 1;
    }
    return 0;
}

int func_511(int iParam0)//Position - 0x14CB0
{
    if (iParam0 == func_102())
    {
        return 0;
    }
    if (func_468(iParam0) && Global_24FD09[iParam0 /*421*/].f_135.f_8 == iParam0)
    {
        return 1;
    }
    return 0;
}

int func_512(int iParam0)//Position - 0x14CE9
{
    if (iParam0 == func_102())
    {
        return 0;
    }
    if (func_470(iParam0) && Global_24FD09[iParam0 /*421*/].f_135.f_8 == iParam0)
    {
        return 1;
    }
    return 0;
}

int func_513(int iParam0)//Position - 0x14D22
{
    if (iParam0 != func_102())
    {
        if (func_12(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
            {
                return func_300(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 6;
            }
        }
    }
    return 0;
}

int func_514(int iParam0)//Position - 0x14D68
{
    int iVar0;
    
    if (iParam0 == func_102())
    {
        return -1;
    }
    iVar0 = func_517(iParam0);
    if (!iVar0 == 0)
    {
        return func_515(iVar0);
    }
    return -1;
}

int func_515(int iParam0)//Position - 0x14D97
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 136)
    {
        if (func_516(iVar0) == iParam0)
        {
            return iVar0;
        }
        iVar0++;
    }
    return -1;
}

int func_516(int iParam0)//Position - 0x14DC3
{
    switch (iParam0)
    {
        case 22:
            return 1;
            break;
        
        case 23:
            return 2;
            break;
        
        case 24:
            return 3;
            break;
        
        case 25:
            return 4;
            break;
        
        case 26:
            return 5;
            break;
        
        case 27:
            return 6;
            break;
        
        case 28:
            return 7;
            break;
        
        case 29:
            return 8;
            break;
        
        case 30:
            return 9;
            break;
        
        case 31:
            return 10;
            break;
        
        case 32:
            return 11;
            break;
        
        case 33:
            return 12;
            break;
        
        case 34:
            return 13;
            break;
        
        case 35:
            return 14;
            break;
        
        case 36:
            return 15;
            break;
        
        case 37:
            return 16;
            break;
        
        case 38:
            return 17;
            break;
        
        case 39:
            return 18;
            break;
        
        case 40:
            return 19;
            break;
        
        case 41:
            return 20;
            break;
        
        case 70:
            return 21;
            break;
        
        case 71:
            return 22;
            break;
        
        case 72:
            return 23;
            break;
        
        case 73:
            return 24;
            break;
        
        case 74:
            return 25;
            break;
        
        case 75:
            return 26;
            break;
        
        case 76:
            return 27;
            break;
        
        case 77:
            return 28;
            break;
        
        case 78:
            return 29;
            break;
        
        case 79:
            return 30;
            break;
        
        case 80:
            return 31;
            break;
    }
    return 0;
}

int func_517(int iParam0)//Position - 0x14F7E
{
    if (iParam0 == func_102())
    {
        return 0;
    }
    return Global_1844AE[iParam0 /*871*/].f_111.f_B3[5 /*12*/];
}

int func_518(int iParam0)//Position - 0x14FA4
{
    if (iParam0 != func_102())
    {
        return unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_135, 6);
    }
    return 0;
}

int func_519(int iParam0)//Position - 0x14FCA
{
    if (iParam0 == func_102())
    {
        return iParam0;
    }
    return Global_24FD09[iParam0 /*421*/].f_135.f_8;
}

int func_520(int iParam0)//Position - 0x14FEE
{
    if (iParam0 != func_102())
    {
        if (func_12(iParam0, 1, 1))
        {
            if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1 && Global_24FD09[iParam0 /*421*/].f_135.f_8 != func_102())
            {
                return func_300(Global_24FD09[iParam0 /*421*/].f_135.f_5) == 5;
            }
        }
    }
    return 0;
}

int func_521(int iParam0)//Position - 0x1504D
{
    if (iParam0 != func_102())
    {
        if (func_12(iParam0, 1, 1))
        {
            return Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1;
        }
        else if ((Global_140869 && iParam0 == unk_0x7C7787D2D7139A85()) && func_12(iParam0, 1, 0))
        {
            return Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1;
        }
    }
    return 0;
}

int func_522()//Position - 0x150B3
{
    if ((func_525() || func_524()) || func_523(unk_0x7C7787D2D7139A85()))
    {
        return 1;
    }
    return 0;
}

bool func_523(int iParam0)//Position - 0x150DF
{
    if (iParam0 == func_102())
    {
        return 0;
    }
    return unk_0xA2BC31158C8CEFD2(Global_18D65A[iParam0 /*38*/].f_1D, 20);
}

bool func_524()//Position - 0x15104
{
    return unk_0xA2BC31158C8CEFD2(Global_19C147, 1);
}

bool func_525()//Position - 0x15115
{
    return unk_0xA2BC31158C8CEFD2(Global_19C148, 5);
}

Vector3 func_526(int iParam0)//Position - 0x15126
{
    int iVar0;
    
    switch (unk_0x76E52B9D61EA86DC(iParam0))
    {
        case 1:
        case 2:
        case 3:
            iVar0 = unk_0x38FCF58E261BE1CC(iParam0);
            if (unk_0xD4B321D9096B01FC(iVar0))
            {
                return unk_0xACE5E491FC1B0D37(iVar0, 0);
            }
            break;
    }
    return unk_0xE3063EF8E0D6C8AD(iParam0);
}

int func_527(int iParam0)//Position - 0x1516F
{
    if ((unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_44.f_2, 9) && !(unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_44.f_2, 6) && unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_44.f_2, 7))) || ((unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_44.f_2, 6) && !unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_44.f_2, 7)) && !unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_44.f_2, 9)))
    {
        return 1;
    }
    return 0;
}

bool func_528(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x1520A
{
    if (bParam2)
    {
        return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
    }
    return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

Vector3 func_529(int iParam0)//Position - 0x15251
{
    switch (Local_171.f_3)
    {
        case 14:
            return vLocal_162[iParam0 /*3*/];
        
        default:
    }
    return 0f, 0f, 0f;
}

int func_530()//Position - 0x15278
{
    switch (Local_171.f_3)
    {
        case 14:
            return 65;
        
        default:
    }
    return 0;
}

int func_531()//Position - 0x15296
{
    switch (Local_171.f_3)
    {
        case 14:
            return 1;
        
        default:
    }
    return 0;
}

int func_532()//Position - 0x152B3
{
    switch (Local_171.f_3)
    {
        case -1:
            break;
        
        default:
            return 0;
    }
    return 0;
}

void func_533(var uParam0, char* sParam1)//Position - 0x152D3
{
    char* sVar0;
    
    if (func_314(0) == 0)
    {
        return;
    }
    sVar0 = "HUD_STARTING";
    if (!func_217(sParam1))
    {
        sVar0 = sParam1;
    }
    func_143(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_534(int iParam0)//Position - 0x15313
{
    char* sVar0;
    
    sVar0 = unk_0x0037AFCBDC61F351();
    return "HUD_STARTING";
    if (unk_0x2553916E420E8EF0(sVar0, "am_hot_target"))
    {
        return "AST_HOT_TARG";
    }
    else if (unk_0x2553916E420E8EF0(sVar0, "am_cp_collection"))
    {
        return "AST_CHK_COLL";
    }
    else if (unk_0x2553916E420E8EF0(sVar0, "am_challenges"))
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
    else if (unk_0x2553916E420E8EF0(sVar0, "am_penned_in"))
    {
        return "AST_PENNED";
    }
    else if (unk_0x2553916E420E8EF0(sVar0, "am_pass_the_parcel"))
    {
        return "AST_PARCEL";
    }
    else if (unk_0x2553916E420E8EF0(sVar0, "am_hot_property"))
    {
        return "AST_PROPERTY";
    }
    else if (unk_0x2553916E420E8EF0(sVar0, "am_dead_drop"))
    {
        return "AST_DDROP";
    }
    else if (unk_0x2553916E420E8EF0(sVar0, "am_king_of_the_castle"))
    {
        return "AST_KCASTLE";
    }
    else if (unk_0x2553916E420E8EF0(sVar0, "AM_CRIMINAL_DAMAGE"))
    {
        return "AST_BLAST";
    }
    else if (unk_0x2553916E420E8EF0(sVar0, "AM_KILL_LIST"))
    {
        return "AST_UWARF";
    }
    else if (unk_0x2553916E420E8EF0(sVar0, "AM_HUNT_THE_BEAST"))
    {
        return "AST_BEAST";
    }
    return "";
}

int func_535(int iParam0, int iParam1)//Position - 0x1551C
{
    if (iParam0 > iParam1)
    {
        return iParam0;
    }
    return iParam1;
}

void func_536(int iParam0)//Position - 0x15532
{
    if (IntToFloat(iParam0) < unk_0x9927BD5F023FA79D())
    {
        Global_26A0A9.f_127F = 0;
    }
    else if (iParam0 < 6000)
    {
        if (!unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 1))
        {
            unk_0x9964F5BBD9415AB7(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", 0);
            Global_26A0A9.f_127F = 0;
            unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_127F), 1);
        }
    }
}

int func_537(var uParam0, bool bParam1, bool bParam2)//Position - 0x15589
{
    if (unk_0x393E9918BC37548A() && !bParam1)
    {
        if (!bParam2)
        {
            return unk_0x675EE3FED67AA436(unk_0x169A8AC9F93C2727(), *uParam0);
        }
        else
        {
            return unk_0x675EE3FED67AA436(unk_0x50D85685589EFCBD(), *uParam0);
        }
    }
    return unk_0x675EE3FED67AA436(unk_0x9B35D07DCD0F0B43(), *uParam0);
}

void func_538(int iParam0)//Position - 0x155D0
{
    if (!unk_0xBCFD7D14E63DFD63() && !unk_0x260395BA7F0C83CB())
    {
        switch (iParam0)
        {
            case 0:
                if (!unk_0xA2BC31158C8CEFD2(iLocal_165, iParam0))
                {
                    if (!unk_0xCD97B9861557C025() && !unk_0x0945988C02AF3025())
                    {
                        if (func_5(Local_171.f_3))
                        {
                            if (Local_171.f_3 == 12)
                            {
                                func_296("AMCH_AIRAVI", 30000);
                            }
                            else
                            {
                                func_296("AMCH_AIRAV", 30000);
                            }
                        }
                        else if (func_41(Local_171.f_3))
                        {
                            func_296("AMCH_BIKEAV", 30000);
                        }
                        func_295(1);
                        unk_0xA1E7A40E1F56E511(&iLocal_165, iParam0);
                    }
                }
                break;
            
            case 1:
                if (!unk_0xA2BC31158C8CEFD2(iLocal_165, iParam0))
                {
                    if (!unk_0xCD97B9861557C025())
                    {
                        func_296("AMCH_BLOW", 30000);
                        func_295(1);
                        unk_0xA1E7A40E1F56E511(&iLocal_165, iParam0);
                    }
                }
                break;
            
            case 2:
                if (!unk_0xA2BC31158C8CEFD2(iLocal_165, iParam0))
                {
                    if (!unk_0xCD97B9861557C025() && !func_543(63))
                    {
                        switch (Local_171.f_3)
                        {
                            case 11:
                            case 12:
                                if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
                                {
                                    if (unk_0x2F879C0BDBED0194(unk_0x0FA8183DAD2B3203()))
                                    {
                                        func_296("AMCH_ALTI", 30000);
                                        func_295(1);
                                        unk_0xA1E7A40E1F56E511(&iLocal_165, iParam0);
                                    }
                                }
                                break;
                            
                            case 8:
                                if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
                                {
                                    func_296("AMCH_NMIS", 30000);
                                    func_295(1);
                                    unk_0xA1E7A40E1F56E511(&iLocal_165, iParam0);
                                }
                                break;
                            
                            case 1:
                                if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
                                {
                                    func_296("AMCH_FRFALL", -1);
                                    func_295(1);
                                    unk_0xA1E7A40E1F56E511(&iLocal_165, iParam0);
                                }
                                break;
                            
                            case 16:
                            case 15:
                            case 18:
                                if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
                                {
                                    func_296("AMCH_PVPO1", -1);
                                    func_295(1);
                                    unk_0xA1E7A40E1F56E511(&iLocal_165, iParam0);
                                }
                                break;
                            
                            case 17:
                                if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
                                {
                                    func_296("AMCH_PVPO2", -1);
                                    func_295(1);
                                    unk_0xA1E7A40E1F56E511(&iLocal_165, iParam0);
                                }
                                break;
                            
                            case 4:
                                if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
                                {
                                    func_296("AMCH_WHEELIE", 30000);
                                    func_295(1);
                                    unk_0xA1E7A40E1F56E511(&iLocal_165, iParam0);
                                }
                                break;
                            
                            case 3:
                                if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
                                {
                                    func_296("AMCH_STOPPIE", 30000);
                                    func_295(1);
                                    unk_0xA1E7A40E1F56E511(&iLocal_165, iParam0);
                                }
                                break;
                            
                            case 10:
                                if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
                                {
                                    func_296("AMCH_LFALL", 30000);
                                    func_295(1);
                                    unk_0xA1E7A40E1F56E511(&iLocal_165, iParam0);
                                }
                                break;
                            
                            case 6:
                                if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
                                {
                                    func_296("AMCH_LPARA", 30000);
                                    func_295(1);
                                    unk_0xA1E7A40E1F56E511(&iLocal_165, iParam0);
                                }
                                break;
                            }
                        }
                }
                break;
            
            case 3:
                if (!unk_0xA2BC31158C8CEFD2(iLocal_165, iParam0))
                {
                    if ((!unk_0xCD97B9861557C025() && !unk_0x0945988C02AF3025()) && !func_543(63))
                    {
                        switch (Local_171.f_3)
                        {
                            case 11:
                            case 12:
                                if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
                                {
                                    if (unk_0x2F879C0BDBED0194(unk_0x0FA8183DAD2B3203()))
                                    {
                                        if (func_1(&uLocal_136, 1000, 0))
                                        {
                                            func_296("AMCH_OCEAN", 30000);
                                            func_295(1);
                                            func_46(&uLocal_136);
                                        }
                                    }
                                }
                                break;
                            }
                        }
                }
                break;
            
            case 5:
                if (!unk_0xA2BC31158C8CEFD2(iLocal_165, iParam0))
                {
                    if (!unk_0xCD97B9861557C025() && !func_543(63))
                    {
                        switch (Local_171.f_3)
                        {
                            case 11:
                            case 12:
                                if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
                                {
                                    if (unk_0x2F879C0BDBED0194(unk_0x0FA8183DAD2B3203()))
                                    {
                                        if (func_527(unk_0x7C7787D2D7139A85()) && !func_540(unk_0x7C7787D2D7139A85()))
                                        {
                                            func_296("AMCH_ALTIEXP", 30000);
                                            func_295(1);
                                            unk_0xA1E7A40E1F56E511(&iLocal_165, iParam0);
                                        }
                                    }
                                }
                                break;
                            }
                        }
                }
                break;
            
            case 6:
                if (!unk_0xA2BC31158C8CEFD2(iLocal_165, iParam0))
                {
                    if ((!unk_0xCD97B9861557C025() && !unk_0x0945988C02AF3025()) && !func_543(63))
                    {
                        if (func_1(&uLocal_136, 1000, 0))
                        {
                            func_296("AMCH_FLYLOW", 30000);
                            func_295(1);
                            func_46(&uLocal_136);
                        }
                    }
                }
                break;
            
            case 7:
                if (!unk_0xA2BC31158C8CEFD2(iLocal_165, iParam0))
                {
                    if (Local_171.f_3 == 7)
                    {
                        if (iLocal_166 == 0)
                        {
                            if ((!unk_0xCD97B9861557C025() && !unk_0x0945988C02AF3025()) && !func_543(63))
                            {
                                if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
                                {
                                    func_296("AMCH_MVS1", 30000);
                                    func_295(1);
                                    iLocal_166 = 1;
                                }
                            }
                        }
                        else if ((!unk_0xCD97B9861557C025() && !unk_0x0945988C02AF3025()) && !func_543(63))
                        {
                            if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
                            {
                                func_296("AMCH_MVS2", 30000);
                                func_295(1);
                                unk_0xA1E7A40E1F56E511(&iLocal_165, iParam0);
                            }
                        }
                    }
                    if (Local_171.f_3 == 14)
                    {
                        if (iLocal_166 == 0)
                        {
                            if ((!unk_0xCD97B9861557C025() && !unk_0x0945988C02AF3025()) && !func_543(63))
                            {
                                if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
                                {
                                    func_296("AMCH_BRBL", 30000);
                                    func_295(1);
                                    iLocal_166 = 1;
                                }
                            }
                        }
                        else if ((!unk_0xCD97B9861557C025() && !unk_0x0945988C02AF3025()) && !func_543(63))
                        {
                            if (func_12(unk_0x7C7787D2D7139A85(), 1, 1))
                            {
                                func_296("AMCH_BRBL2", 30000);
                                func_295(1);
                                unk_0xA1E7A40E1F56E511(&iLocal_165, iParam0);
                            }
                        }
                    }
                }
                break;
            
            case 9:
                if (!unk_0xA2BC31158C8CEFD2(iLocal_165, iParam0))
                {
                    if (!unk_0xCD97B9861557C025() && !unk_0x0945988C02AF3025())
                    {
                        func_539("AMCH_WARN", func_393(Local_171.f_3), func_392(Local_171.f_3), 30000);
                        func_295(0);
                        Local_1538.f_8 = unk_0x71EC776E812C6A0A();
                        unk_0x9964F5BBD9415AB7(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
                        unk_0xA1E7A40E1F56E511(&iLocal_165, iParam0);
                    }
                }
                break;
            }
    }
}

void func_539(char* sParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x15BB4
{
    unk_0xD95C12E1062B7D5E(sParam0);
    unk_0x0AC9F8E1AFCEC860(sParam1);
    unk_0x0AC9F8E1AFCEC860(sParam2);
    unk_0x40DC0B0D5BD91E06(0, 0, 0, iParam3);
}

bool func_540(int iParam0)//Position - 0x15BD7
{
    return unk_0xA2BC31158C8CEFD2(Global_14F53C.f_F1.f_88[func_542(9) /*33*/][iParam0], func_541(9));
}

int func_541(int iParam0)//Position - 0x15BFD
{
    return (iParam0 % 32);
}

int func_542(int iParam0)//Position - 0x15C0A
{
    return (iParam0 / 32);
}

bool func_543(int iParam0)//Position - 0x15C17
{
    return Global_2531AD.f_A94[0 /*80*/].f_1 == iParam0;
}

void func_544(int iParam0)//Position - 0x15C2E
{
    Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_3 = iParam0;
}

void func_545(bool bParam0)//Position - 0x15C43
{
    if (bParam0)
    {
        unk_0xA1E7A40E1F56E511(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 4);
    }
    else
    {
        unk_0x3B76114EC84D5812(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 4);
    }
}

int func_546(bool bParam0, bool bParam1, bool bParam2)//Position - 0x15C77
{
    if (func_569(unk_0x7C7787D2D7139A85(), 29))
    {
        return 0;
    }
    if (func_163(unk_0x7C7787D2D7139A85(), 21))
    {
        return 0;
    }
    if (func_163(unk_0x7C7787D2D7139A85(), 25))
    {
        return 0;
    }
    if (unk_0xEDC68E498B715C56())
    {
        return 0;
    }
    if (bParam1)
    {
        if (unk_0xED4D72D338501085())
        {
            return 0;
        }
    }
    if (func_349(unk_0x7C7787D2D7139A85()))
    {
        return 0;
    }
    if (func_568())
    {
        return 0;
    }
    if (bParam2)
    {
        if (func_567(unk_0x7C7787D2D7139A85()))
        {
            return 0;
        }
    }
    if (func_566())
    {
        return 0;
    }
    if (bParam0)
    {
        if (func_106(unk_0x7C7787D2D7139A85()))
        {
            return 0;
        }
    }
    else if (func_559(unk_0x7C7787D2D7139A85()) == 3)
    {
        return 0;
    }
    if (func_558(unk_0x7C7787D2D7139A85()) != func_102() && func_558(unk_0x7C7787D2D7139A85()) == func_88(unk_0x7C7787D2D7139A85()))
    {
        return 0;
    }
    if (func_557(func_290()) && func_321(unk_0x7C7787D2D7139A85()) != 236)
    {
        return 0;
    }
    if (func_556())
    {
        return 0;
    }
    if (func_315())
    {
        return 0;
    }
    if (unk_0xA51CBC95AC3A4B14())
    {
        return 0;
    }
    if (func_351(unk_0x7C7787D2D7139A85()))
    {
        return 0;
    }
    if (!func_554())
    {
        return 0;
    }
    if (func_163(unk_0x7C7787D2D7139A85(), 0) || func_163(unk_0x7C7787D2D7139A85(), 3))
    {
        return 0;
    }
    if ((func_163(unk_0x7C7787D2D7139A85(), 12) || func_163(unk_0x7C7787D2D7139A85(), 14)) || func_163(unk_0x7C7787D2D7139A85(), 13))
    {
        return 0;
    }
    if (func_553(unk_0x7C7787D2D7139A85(), 1, 1))
    {
        if (!func_525() && !Global_2644A5)
        {
            return 0;
        }
    }
    if (func_552(unk_0x7C7787D2D7139A85()))
    {
        return 0;
    }
    if (func_551())
    {
        return 0;
    }
    if (Global_195E58)
    {
        return 0;
    }
    if (func_386(unk_0x7C7787D2D7139A85()))
    {
        return 0;
    }
    if (func_550())
    {
        return 0;
    }
    if (func_548(unk_0x7C7787D2D7139A85()) && Global_18434F.f_AB)
    {
        return 0;
    }
    if (func_547())
    {
        return 0;
    }
    if (func_355(unk_0x7C7787D2D7139A85()))
    {
        return 0;
    }
    if (Global_269CFC)
    {
        return 0;
    }
    if (Global_19DA4F)
    {
        return 0;
    }
    return 1;
}

bool func_547()//Position - 0x15EAF
{
    return Global_19964F.f_1BB;
}

int func_548(int iParam0)//Position - 0x15EBE
{
    if (func_549(Global_1844AE[iParam0 /*871*/].f_111.f_1A))
    {
        return 1;
    }
    return 0;
}

int func_549(int iParam0)//Position - 0x15EE0
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

int func_550()//Position - 0x15F0F
{
    if (Global_40EAC7.f_388 > -1)
    {
        return 1;
    }
    return 0;
}

bool func_551()//Position - 0x15F27
{
    return Global_181A1.f_15A > 0;
}

bool func_552(int iParam0)//Position - 0x15F38
{
    return unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_111.f_18, 11);
}

int func_553(int iParam0, bool bParam1, bool bParam2)//Position - 0x15F54
{
    if (iParam0 == func_102())
    {
        return 0;
    }
    if (unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_111.f_18, 0))
    {
        return 1;
    }
    if (bParam1)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_111.f_18, 1))
        {
            return 1;
        }
    }
    if (bParam2)
    {
        if (Global_24FD09[iParam0 /*421*/].f_135.f_5 != -1)
        {
            return 1;
        }
    }
    return 0;
}

int func_554()//Position - 0x15FBE
{
    if (func_555() == 0)
    {
        return 1;
    }
    return 0;
}

int func_555()//Position - 0x15FD3
{
    return Global_1406D3.f_12;
}

bool func_556()//Position - 0x15FE1
{
    return Global_140869;
}

int func_557(int iParam0)//Position - 0x15FED
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

int func_558(int iParam0)//Position - 0x16037
{
    return Global_18DB1B[iParam0 /*614*/].f_B.f_23;
}

int func_559(int iParam0)//Position - 0x1604C
{
    int iVar0;
    bool bVar1;
    bool bVar2;
    var uVar3;
    var uVar4;
    
    iVar0 = 2;
    bVar1 = ((func_387(iParam0) && !func_8(iParam0)) && !unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_1, 8));
    bVar2 = func_106(iParam0);
    uVar3 = func_165();
    uVar4 = func_560();
    if ((bVar1 && (func_456(iParam0) || func_412(iParam0))) || uVar4)
    {
        iVar0 = 0;
    }
    else if (uVar3 || ((!bVar2 && !func_108(iParam0)) && !func_301(iParam0)))
    {
        iVar0 = 2;
    }
    else
    {
        iVar0 = 3;
    }
    if (Global_26A0A9.f_1322.f_D6 != iVar0)
    {
        Global_26A0A9.f_1322.f_D6 = iVar0;
    }
    return iVar0;
}

int func_560()//Position - 0x1610A
{
    if ((func_107(unk_0x7C7787D2D7139A85(), 21) || func_107(unk_0x7C7787D2D7139A85(), 22)) || func_564())
    {
        return 1;
    }
    if (func_562())
    {
        func_561(22);
        return 1;
    }
    return 0;
}

void func_561(int iParam0)//Position - 0x1614F
{
    unk_0xA1E7A40E1F56E511(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_B.f_4), iParam0);
}

int func_562()//Position - 0x1616C
{
    if (func_112(unk_0x7C7787D2D7139A85(), 0))
    {
        if (((func_165() && !func_164()) || func_163(unk_0x7C7787D2D7139A85(), 21)) || func_163(unk_0x7C7787D2D7139A85(), 25))
        {
            return 1;
        }
        else
        {
            func_563(27);
        }
    }
    return 0;
}

void func_563(int iParam0)//Position - 0x161BF
{
    unk_0x3B76114EC84D5812(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_B.f_4), iParam0);
}

int func_564()//Position - 0x161DC
{
    return func_565(356, -1);
}

int func_565(int iParam0, int iParam1)//Position - 0x161EC
{
    var uVar0;
    var uVar1;
    
    uVar0 = Global_274F55[iParam0 /*3*/][func_203(iParam1)];
    if (unk_0xF7B5584413D4EA03(uVar0, &uVar1, -1))
    {
        return uVar1;
    }
    return 0;
}

bool func_566()//Position - 0x16218
{
    return Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/] == 5;
}

int func_567(int iParam0)//Position - 0x1622D
{
    if (Global_24FD09[iParam0 /*421*/].f_105.f_4 != 0 || Global_24FD09[iParam0 /*421*/].f_105.f_5)
    {
        return 1;
    }
    return 0;
}

bool func_568()//Position - 0x16261
{
    return unk_0xA2BC31158C8CEFD2(Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_27.f_12, 0);
}

bool func_569(int iParam0, int iParam1)//Position - 0x1627D
{
    return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_B.f_5, iParam1);
}

void func_570()//Position - 0x16298
{
    func_571(&(Local_192.f_216), &Local_192, 26, &(Local_192.f_1), &(Local_192.f_75), Local_171.f_3, 0, 0);
}

void func_571(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)//Position - 0x162C0
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
    
    if (func_681(iParam2))
    {
        return;
    }
    fVar10 = -1f;
    iVar11 = -1;
    iVar12 = -1;
    iVar14 = 0;
    iVar15 = 0;
    uParam3->f_24 = 0;
    if (func_679() || iParam2 == 27)
    {
        if (func_634(iParam1, iParam2, uParam3, Global_180526, 0, func_682(), sParam7))
        {
            func_633(1);
            if ((!func_632() && !func_631()) || unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_11EC, 1))
            {
                if (func_630())
                {
                    func_629();
                }
                else
                {
                    unk_0xE0EE6551C6D522E7(76, 84);
                    if (uParam3->f_1B == 0)
                    {
                        func_628(1);
                        Global_180526 = 0;
                        iVar19 = -1;
                        if (Global_180603 != 1)
                        {
                            func_627(iParam1, 0, 0);
                            if (unk_0xA2BC31158C8CEFD2(uParam3->f_21, 7))
                            {
                                unk_0x3B76114EC84D5812(&(uParam3->f_21), 7);
                            }
                        }
                        if (iParam2 == 27)
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
                                if (func_12(unk_0x0C98179F08C6DA4F(iVar17), 0, 1))
                                {
                                    iVar3 = unk_0x0C98179F08C6DA4F(iVar17);
                                    if (!func_14(iVar3, 0))
                                    {
                                        if ((func_626(iVar3) || Global_24FD09[iVar3 /*421*/].f_EC != -1) || func_625(iVar3))
                                        {
                                            iVar9 = iVar3;
                                            if (func_90(iVar3))
                                            {
                                                iVar1[iVar9] = iVar20;
                                                iVar20++;
                                                iVar0++;
                                                func_622(&iVar1, iVar3, &iVar20, &iVar0);
                                            }
                                        }
                                    }
                                }
                                iVar17++;
                            }
                        }
                        if (!func_109(unk_0x7C7787D2D7139A85(), 0) && func_220(unk_0x7C7787D2D7139A85()) != 188)
                        {
                            bVar2 = iVar0 > 0;
                        }
                        iVar17 = 0;
                        while (iVar17 < 32)
                        {
                            if (func_621())
                            {
                                if (func_12(unk_0x0C98179F08C6DA4F(iVar17), 0, 1))
                                {
                                    iVar3 = unk_0x0C98179F08C6DA4F(iVar17);
                                }
                                else
                                {
                                    iVar3 = func_102();
                                }
                            }
                            else
                            {
                                iVar3 = (uParam0[iVar17 /*42*/])->f_1;
                            }
                            if ((func_620(iVar3) && func_617(iVar3, iParam2)) && func_12(iVar3, 0, 1))
                            {
                                iVar9 = iVar3;
                                iVar7 = Global_1844AE[iVar9 /*871*/].f_D3.f_6;
                                Var6 = { func_612(iVar3) };
                                if (iVar3 == unk_0x7C7787D2D7139A85())
                                {
                                    uParam3->f_23 = iVar18;
                                }
                                StringCopy(&(uParam3->f_1), unk_0xA09A99AC02B24954(iVar3), 64);
                                *(uParam4[iVar17 /*13*/]) = { func_137(iVar3) };
                                iVar5 = func_606(iVar3);
                                sVar4 = "";
                                if (iVar5 != 0)
                                {
                                    sVar4 = unk_0x5C3CC258CDC18660(iVar5);
                                }
                                Global_180526++;
                                if ((uParam0[iVar17 /*42*/])->f_16 != -1f)
                                {
                                    fVar10 = (uParam0[iVar17 /*42*/])->f_16;
                                }
                                if ((uParam0[iVar17 /*42*/])->f_1F != -1)
                                {
                                    iVar11 = (uParam0[iVar17 /*42*/])->f_1F;
                                }
                                if ((uParam0[iVar17 /*42*/])->f_29 != -1)
                                {
                                    iVar12 = (uParam0[iVar17 /*42*/])->f_29;
                                }
                                iVar8 = (uParam0[iVar17 /*42*/])->f_9;
                                if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_16 != -1f) || (uParam0[iVar17 /*42*/])->f_1F != -1)
                                {
                                    if (!func_621())
                                    {
                                        iVar15 = 1;
                                    }
                                }
                                if (iParam5 != -1)
                                {
                                    func_604(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
                                    StringCopy(&(uParam3->f_68), func_284(iParam5, 1, 0, 0), 16);
                                }
                                if (bParam6)
                                {
                                    iVar13 = (uParam0[iVar17 /*42*/])->f_2 + 1;
                                    if (iVar19 != iVar13)
                                    {
                                        iVar19 = iVar13;
                                    }
                                    else
                                    {
                                        iVar13 = -2;
                                    }
                                }
                                iVar16 = func_603(iVar3, 0);
                                if (bVar2)
                                {
                                    if (func_89(iVar3, 1) && iVar1[iVar9] != -1)
                                    {
                                        iVar18 = iVar1[iVar9];
                                    }
                                    else
                                    {
                                        iVar18 = (iVar0 + iVar21);
                                        iVar21++;
                                    }
                                }
                                uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
                                if ((uParam0[iVar17 /*42*/])->f_27 != -1)
                                {
                                    StringCopy(&Var22, "UW_TM", 16);
                                    StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_27, 16);
                                }
                                if (func_602(iParam5))
                                {
                                    func_601(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
                                }
                                else
                                {
                                    func_601(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_28, iVar13, bParam6);
                                }
                                unk_0xA1E7A40E1F56E511(&iVar14, iVar3);
                                iVar18++;
                            }
                            iVar17++;
                        }
                        iVar17 = 0;
                        while (iVar17 < 32)
                        {
                            iVar3 = unk_0x0C98179F08C6DA4F(iVar17);
                            if (func_12(iVar3, 0, 1) && !unk_0xA2BC31158C8CEFD2(iVar14, iVar3))
                            {
                                iVar3 = unk_0x0C98179F08C6DA4F(iVar17);
                            }
                            else
                            {
                                iVar3 = func_102();
                            }
                            if (func_620(iVar3))
                            {
                                if (func_12(unk_0x0C98179F08C6DA4F(iVar17), 0, 1))
                                {
                                    iVar9 = iVar3;
                                    iVar7 = Global_1844AE[iVar9 /*871*/].f_D3.f_6;
                                    Var6 = { func_612(iVar3) };
                                    *(uParam4[iVar17 /*13*/]) = { func_137(iVar3) };
                                    iVar5 = func_606(iVar3);
                                    sVar4 = "";
                                    if (iVar5 != 0)
                                    {
                                        sVar4 = unk_0x5C3CC258CDC18660(iVar5);
                                    }
                                    Global_180526++;
                                    iVar16 = func_603(iVar3, 1);
                                    if (bVar2)
                                    {
                                        if (func_89(iVar3, 1))
                                        {
                                            iVar18 = iVar1[iVar17];
                                        }
                                        else
                                        {
                                            iVar18 = (iVar0 + iVar21);
                                            iVar21++;
                                        }
                                    }
                                    uParam3->f_26[iVar9 /*2*/].f_1 = iVar18;
                                    func_584(iVar3, unk_0xA09A99AC02B24954(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
                                    iVar18++;
                                }
                            }
                            iVar17++;
                        }
                        if (unk_0xA2BC31158C8CEFD2(uParam3->f_21, 11))
                        {
                            func_581(uParam3, iParam1);
                        }
                        func_46(&(uParam3->f_15));
                        func_580();
                        uParam3->f_1B = 2;
                    }
                    if (uParam3->f_1B == 2)
                    {
                        if (!unk_0xA2BC31158C8CEFD2(uParam3->f_21, 7))
                        {
                            func_579(uParam3, iParam1);
                            func_578(iParam1, 0, 1);
                            unk_0xA1E7A40E1F56E511(&(uParam3->f_21), 7);
                        }
                        func_579(uParam3, iParam1);
                        if (!unk_0xA2BC31158C8CEFD2(uParam3->f_21, 11))
                        {
                            unk_0xA1E7A40E1F56E511(&(uParam3->f_21), 11);
                        }
                        if (func_574(uParam3))
                        {
                            Global_180603 = 1;
                        }
                        func_572(uParam3);
                        if (Global_180603 == 1)
                        {
                            uParam3->f_1B = 0;
                        }
                        if (Global_180603 == 2)
                        {
                            uParam3->f_1B = 0;
                        }
                    }
                    if (unk_0x08EA887200715AD9(*iParam1))
                    {
                        unk_0xF314976CA3E17AC7(7);
                        unk_0x1C65AC18AFC2CA39(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
                        unk_0xF314976CA3E17AC7(4);
                    }
                }
            }
        }
        else
        {
            uParam3->f_1B = 0;
            func_580();
            func_628(0);
            if (unk_0xA2BC31158C8CEFD2(uParam3->f_21, 7))
            {
                unk_0x3B76114EC84D5812(&(uParam3->f_21), 7);
            }
            if (unk_0xA2BC31158C8CEFD2(uParam3->f_21, 10))
            {
                unk_0x3B76114EC84D5812(&(uParam3->f_21), 10);
            }
        }
    }
    unk_0x01C11ACADC5D0A74();
}

void func_572(var uParam0)//Position - 0x16911
{
    if (!func_47(&(uParam0->f_15)))
    {
        func_2(&(uParam0->f_15), 0, 0);
    }
    else if (func_1(&(uParam0->f_15), 250, 0))
    {
        func_46(&(uParam0->f_15));
        func_573(0);
    }
}

void func_573(bool bParam0)//Position - 0x1694D
{
    if (bParam0)
    {
        if (Global_180603 != 2)
        {
            Global_180603 = 2;
        }
    }
    else
    {
        switch (Global_180603)
        {
            case 0:
                Global_180603 = 1;
                break;
            
            case 1:
                break;
            
            case 2:
                break;
            }
    }
}

int func_574(var uParam0)//Position - 0x16993
{
    int iVar0;
    int iVar1;
    struct<13> Var2;
    int iVar3;
    int iVar4;
    
    iVar4 = 0;
    iVar0 = uParam0->f_25;
    iVar3 = unk_0x0C98179F08C6DA4F(uParam0->f_25);
    if (iVar3 != func_102() && func_12(iVar3, 0, 1))
    {
        Var2 = { func_137(iVar3) };
        iVar1 = func_577(uParam0, uParam0->f_25);
        if (func_576(Var2))
        {
            switch (iVar1)
            {
                case 0:
                    if (unk_0xAD7967B7C2B6B4CA(&Var2))
                    {
                        if (unk_0x4E0A7769ED6F98FD(&Var2))
                        {
                            iVar4 = 1;
                            func_575(uParam0, iVar0, 2);
                        }
                    }
                    else if (unk_0xCE08CBA13236EC65(&Var2))
                    {
                        iVar4 = 1;
                        func_575(uParam0, iVar0, 1);
                    }
                    break;
                
                case 2:
                    if (unk_0xAD7967B7C2B6B4CA(&Var2))
                    {
                        if (!unk_0x4E0A7769ED6F98FD(&Var2))
                        {
                            iVar4 = 1;
                            func_575(uParam0, iVar0, 0);
                        }
                    }
                    else
                    {
                        iVar4 = 1;
                        func_575(uParam0, iVar0, 0);
                    }
                    break;
                
                case 1:
                    if (unk_0xAD7967B7C2B6B4CA(&Var2))
                    {
                        if (!unk_0xCE08CBA13236EC65(&Var2))
                        {
                            iVar4 = 1;
                            func_575(uParam0, iVar0, 0);
                        }
                    }
                    else if (!unk_0xCE08CBA13236EC65(&Var2))
                    {
                        iVar4 = 1;
                        func_575(uParam0, iVar0, 0);
                    }
                    break;
                }
            }
    }
    uParam0->f_25++;
    if (uParam0->f_25 >= 32)
    {
        uParam0->f_25 = 0;
    }
    return iVar4;
}

void func_575(var uParam0, int iParam1, int iParam2)//Position - 0x16AC0
{
    uParam0->f_26[iParam1 /*2*/] = iParam2;
}

bool func_576(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x16AD2
{
    return unk_0x5D17AB84230A234B(&uParam0, 13);
}

var func_577(var uParam0, int iParam1)//Position - 0x16AE2
{
    return uParam0->f_26[iParam1 /*2*/];
}

void func_578(int iParam0, bool bParam1, int iParam2)//Position - 0x16AF2
{
    if (unk_0xF1BC72CEC2746995(*iParam0, "COLLAPSE"))
    {
        unk_0x282C78036676E0C2(bParam1);
        unk_0xAC7C2DE2DDC7AF03();
    }
    if (iParam2 == 1)
    {
        if (unk_0xF1BC72CEC2746995(*iParam0, "DISPLAY_VIEW"))
        {
            unk_0xAC7C2DE2DDC7AF03();
        }
    }
}

void func_579(var uParam0, int iParam1)//Position - 0x16B2A
{
    if (!unk_0xA2BC31158C8CEFD2(uParam0->f_21, 10))
    {
        unk_0xF1BC72CEC2746995(*iParam1, "SET_HIGHLIGHT");
        unk_0xD02F24F3E2DB263A(uParam0->f_23);
        unk_0xAC7C2DE2DDC7AF03();
        unk_0xA1E7A40E1F56E511(&(uParam0->f_21), 10);
    }
}

void func_580()//Position - 0x16B62
{
    if (Global_180603 != 0)
    {
        Global_180603 = 0;
    }
}

void func_581(var uParam0, int iParam1)//Position - 0x16B77
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    iVar0 = 0;
    while (iVar0 < 32)
    {
        iVar2 = unk_0x0C98179F08C6DA4F(iVar0);
        if (iVar2 != func_102())
        {
            if (func_12(iVar2, 0, 1))
            {
                if (uParam0->f_26[iVar0 /*2*/].f_1 != -1)
                {
                    iVar1 = func_583(uParam0->f_26[iVar0 /*2*/], 0);
                    func_582(iParam1, uParam0->f_26[iVar0 /*2*/].f_1, iVar1, Global_1844AE[iVar0 /*871*/].f_D3.f_6);
                }
            }
        }
        iVar0++;
    }
}

void func_582(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x16BEA
{
    if (unk_0x08EA887200715AD9(*uParam0))
    {
        if (unk_0xF1BC72CEC2746995(*uParam0, "SET_ICON"))
        {
            unk_0xD02F24F3E2DB263A(iParam1);
            unk_0xD02F24F3E2DB263A(iParam2);
            if (iParam2 == 65)
            {
                unk_0xD02F24F3E2DB263A(iParam3);
            }
            unk_0xAC7C2DE2DDC7AF03();
        }
    }
}

int func_583(int iParam0, bool bParam1)//Position - 0x16C27
{
    int iVar0;
    
    iVar0 = 65;
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

void func_584(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)//Position - 0x16C5B
{
    int iVar0;
    char* sVar1;
    
    if (iParam4 >= func_600() && iParam4 < func_599())
    {
        iParam4 = (iParam4 % 16);
        iVar0 = iParam4 + 1;
        if (Global_180528)
        {
            iVar0 += 16;
        }
        sVar1 = "SET_DATA_SLOT";
        if (Global_180603 == 1)
        {
            sVar1 = "UPDATE_SLOT";
        }
        if (unk_0xF1BC72CEC2746995(*iParam2, sVar1))
        {
            unk_0xD02F24F3E2DB263A(iParam4);
            if (unk_0xA2BC31158C8CEFD2(uParam3->f_21, 8) || uParam3->f_6C == 6)
            {
                func_598("");
            }
            else
            {
                unk_0xD02F24F3E2DB263A(iParam10);
            }
            func_598(sParam1);
            unk_0xD02F24F3E2DB263A(iParam11);
            if (uParam3->f_6C == 6)
            {
                func_598("");
            }
            else
            {
                unk_0xD02F24F3E2DB263A(65);
            }
            unk_0xD02F24F3E2DB263A(-1);
            func_598("");
            if (uParam3->f_6C == 6)
            {
                func_598("");
            }
            else
            {
                func_598(&sParam5);
            }
            func_589(uParam3, iParam0);
            unk_0xE2603C088682FC07(sParam9);
            unk_0xE2603C088682FC07(sParam9);
            if (func_588(uParam3))
            {
                func_587("DPAD_FRIEND");
            }
            else if (func_586(uParam3))
            {
                func_587("DPAD_FRIEND");
            }
            else if (func_585(uParam3))
            {
                func_587("DPAD_CREW");
            }
            else
            {
                func_587("");
            }
            unk_0xAC7C2DE2DDC7AF03();
        }
    }
}

bool func_585(var uParam0)//Position - 0x16D85
{
    return unk_0xA2BC31158C8CEFD2(uParam0->f_21, 6);
}

bool func_586(var uParam0)//Position - 0x16D96
{
    return unk_0xA2BC31158C8CEFD2(uParam0->f_21, 5);
}

void func_587(char* sParam0)//Position - 0x16DA7
{
    unk_0x759AC38FBC6CCA9E(sParam0);
    unk_0x81019766FF500CCA();
}

int func_588(var uParam0)//Position - 0x16DB9
{
    if (func_586(uParam0) && func_585(uParam0))
    {
        return 1;
    }
    return 0;
}

void func_589(var uParam0, int iParam1)//Position - 0x16DDA
{
    if (func_597(iParam1))
    {
        unk_0xD02F24F3E2DB263A(121);
    }
    else if (func_593(iParam1))
    {
        unk_0xD02F24F3E2DB263A(122);
    }
    else if (((unk_0xA2BC31158C8CEFD2(Global_440000.f_1B, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam1 /*421*/].f_19B, 0))
    {
        unk_0xD02F24F3E2DB263A(123);
    }
    else
    {
        if (func_590())
        {
            uParam0->f_24 = 0;
        }
        unk_0x282C78036676E0C2(uParam0->f_24);
    }
}

int func_590()//Position - 0x16E5B
{
    if (unk_0xA51CBC95AC3A4B14())
    {
        if (func_591() || func_94())
        {
            return 1;
        }
    }
    return 0;
}

int func_591()//Position - 0x16E80
{
    if (unk_0xA51CBC95AC3A4B14())
    {
        return func_94();
    }
    return func_592(Global_440000.f_25AF8);
}

int func_592(int iParam0)//Position - 0x16EA4
{
    int iVar0;
    
    if (iParam0 == 0)
    {
        return 0;
    }
    iVar0 = 0;
    while (iVar0 < 8)
    {
        if (Global_40001.f_137E[iVar0] == iParam0)
        {
            return 1;
        }
        iVar0++;
    }
    return 0;
}

int func_593(int iParam0)//Position - 0x16EDE
{
    if ((func_12(iParam0, 0, 1) && func_594()) && func_258(iParam0, 1))
    {
        return 1;
    }
    return 0;
}

int func_594()//Position - 0x16F0B
{
    if (func_387(unk_0x7C7787D2D7139A85()) || func_596())
    {
        if (!func_595(unk_0x7C7787D2D7139A85(), 236))
        {
            return 0;
        }
    }
    return 1;
}

int func_595(int iParam0, int iParam1)//Position - 0x16F3B
{
    if (func_321(iParam0) == iParam1)
    {
        return func_456(iParam0);
    }
    return 0;
}

int func_596()//Position - 0x16F58
{
    switch (func_220(unk_0x7C7787D2D7139A85()))
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

int func_597(int iParam0)//Position - 0x16F96
{
    if (func_590())
    {
        if (func_12(iParam0, 0, 1))
        {
            return func_90(iParam0);
        }
    }
    if ((func_12(iParam0, 0, 1) && func_594()) && func_260(iParam0, 0))
    {
        return 1;
    }
    return 0;
}

void func_598(char* sParam0)//Position - 0x16FDE
{
    unk_0x7151302E2AA285DC(sParam0);
}

int func_599()//Position - 0x16FEC
{
    int iVar0;
    
    if (Global_180528)
    {
        iVar0 = 32;
    }
    else
    {
        iVar0 = 16;
    }
    return iVar0;
}

int func_600()//Position - 0x17008
{
    int iVar0;
    
    iVar0 = 0;
    if (Global_180528)
    {
        iVar0 = 16;
    }
    return iVar0;
}

void func_601(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)//Position - 0x17020
{
    int iVar0;
    char* sVar1;
    
    if (iParam3 >= func_600() && iParam3 < func_599())
    {
        iParam3 = (iParam3 % 16);
        iVar0 = iParam3 + 1;
        if (Global_180528)
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
        if (Global_180603 == 1)
        {
            sVar1 = "UPDATE_SLOT";
        }
        if (unk_0x08EA887200715AD9(*iParam1))
        {
            if (unk_0xF1BC72CEC2746995(*iParam1, sVar1))
            {
                unk_0xD02F24F3E2DB263A(iParam3);
                if (unk_0xA2BC31158C8CEFD2(uParam2->f_21, 8) || uParam2->f_6C == 6)
                {
                    func_598("");
                }
                else
                {
                    unk_0xD02F24F3E2DB263A(iParam9);
                }
                if (uParam2->f_6C == 6 && !unk_0x9591DE0F00127F2A(sParam16))
                {
                    func_587(sParam16);
                }
                else
                {
                    func_598(&(uParam2->f_1));
                }
                unk_0xD02F24F3E2DB263A(iParam11);
                if (uParam2->f_6C == 6)
                {
                    func_598("");
                }
                else
                {
                    unk_0xD02F24F3E2DB263A(65);
                }
                if (iParam12 == 1)
                {
                    unk_0xD02F24F3E2DB263A(iVar0);
                }
                else
                {
                    unk_0xD02F24F3E2DB263A(-1);
                }
                if (func_621())
                {
                    func_598("");
                }
                else if (uParam2->f_6C == 6 && !unk_0x9591DE0F00127F2A(sParam16))
                {
                    unk_0x759AC38FBC6CCA9E("FM_AE_ONE_INT");
                    unk_0x0AC9F8E1AFCEC860(sParam16);
                    unk_0x6A8B3CC08A759F44(iParam17);
                    unk_0x81019766FF500CCA();
                }
                else if (uParam2->f_6C == 5 && !unk_0x9591DE0F00127F2A(sParam16))
                {
                    unk_0x759AC38FBC6CCA9E("FM_AE_ONE_INT");
                    unk_0x0AC9F8E1AFCEC860(sParam16);
                    unk_0x6A8B3CC08A759F44(iParam17);
                    unk_0x81019766FF500CCA();
                }
                else if (uParam2->f_6C == 7 && !unk_0x9591DE0F00127F2A(sParam16))
                {
                    unk_0x759AC38FBC6CCA9E("FM_AE_TWO_INT");
                    unk_0x0AC9F8E1AFCEC860(sParam16);
                    unk_0x6A8B3CC08A759F44(iParam17);
                    unk_0x81019766FF500CCA();
                }
                else if (uParam2->f_6C == 8 && !unk_0x9591DE0F00127F2A(&(uParam2->f_68)))
                {
                    unk_0x759AC38FBC6CCA9E("FM_AE_UNIT");
                    if (fParam13 != -1f)
                    {
                        unk_0x10D1E89D0C3D279B(fParam13, 1);
                    }
                    if (iParam10 != -1)
                    {
                        unk_0x6A8B3CC08A759F44(iParam10);
                    }
                    unk_0x0AC9F8E1AFCEC860(&(uParam2->f_68));
                    unk_0x81019766FF500CCA();
                }
                else if (uParam2->f_6C == 9)
                {
                    unk_0x759AC38FBC6CCA9E("FM_AE_CASH");
                    unk_0x4BDF2F68AA4EAA77(iParam10, 1);
                    unk_0x81019766FF500CCA();
                }
                else if (uParam2->f_6C == 10)
                {
                    if (iParam10 == 0)
                    {
                        unk_0x759AC38FBC6CCA9E("FM_AE_CASH");
                        unk_0x4BDF2F68AA4EAA77(iParam10, 1);
                        unk_0x81019766FF500CCA();
                    }
                    else
                    {
                        unk_0x759AC38FBC6CCA9E("FM_NG_CASH");
                        unk_0x4BDF2F68AA4EAA77(iParam10, 1);
                        unk_0x81019766FF500CCA();
                    }
                }
                else if (iParam15 > -1)
                {
                    if (iParam15 == 0 && !unk_0x9591DE0F00127F2A(&(uParam2->f_68)))
                    {
                        func_587(&(uParam2->f_68));
                    }
                    else
                    {
                        func_598("");
                    }
                }
                else if (iParam14 != -1)
                {
                    unk_0x759AC38FBC6CCA9E("STRING");
                    unk_0xC5B1209EEC9E6603(iParam14, 6);
                    unk_0x81019766FF500CCA();
                }
                else if (fParam13 != -1f)
                {
                    unk_0x759AC38FBC6CCA9E("NUMBER");
                    unk_0x10D1E89D0C3D279B(fParam13, 1);
                    unk_0x81019766FF500CCA();
                }
                else if (iParam10 != -1)
                {
                    unk_0xD02F24F3E2DB263A(iParam10);
                }
                else
                {
                    func_598("");
                }
                if (uParam2->f_6C == 6)
                {
                    func_598("");
                }
                else
                {
                    func_598(&sParam4);
                }
                func_589(uParam2, iParam0);
                if (iParam12 == 1 || unk_0x9591DE0F00127F2A(sParam8))
                {
                    func_598("");
                    func_598("");
                }
                else
                {
                    unk_0xE2603C088682FC07(sParam8);
                    unk_0xE2603C088682FC07(sParam8);
                }
                if (func_588(uParam2))
                {
                    func_587("DPAD_FRIEND");
                }
                else if (func_586(uParam2))
                {
                    func_587("DPAD_FRIEND");
                }
                else if (func_585(uParam2))
                {
                    func_587("DPAD_CREW");
                }
                else
                {
                    func_587("");
                }
                unk_0xAC7C2DE2DDC7AF03();
            }
        }
    }
}

int func_602(int iParam0)//Position - 0x1737A
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

int func_603(int iParam0, bool bParam1)//Position - 0x1739E
{
    int iVar0;
    int iVar1;
    
    iVar0 = 116;
    if ((!bParam1 && func_387(iParam0)) && !func_106(iParam0))
    {
        iVar0 = func_66();
    }
    iVar1 = func_87(iParam0);
    if (!iVar1 == -1)
    {
        return func_85(iVar1);
    }
    return iVar0;
}

int func_604(var uParam0, float fParam1, int iParam2, int iParam3)//Position - 0x173E8
{
    if (func_605(iParam3))
    {
        *fParam1 = (func_286(iParam3, iParam2) / 10f);
        return 1;
    }
    if (func_602(iParam3))
    {
        *fParam1 = (func_286(iParam3, iParam2) / 1000f);
        return 1;
    }
    *uParam0 = iParam2;
    return 0;
}

int func_605(int iParam0)//Position - 0x17438
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

int func_606(int iParam0)//Position - 0x17494
{
    int iVar0;
    
    iVar0 = func_609(iParam0);
    if (iVar0 == -1)
    {
        func_607(iParam0, 1);
        return 0;
    }
    Global_15234E[iVar0 /*5*/].f_4 = 1;
    return Global_15234E[iVar0 /*5*/].f_2;
}

void func_607(int iParam0, bool bParam1)//Position - 0x174CA
{
    if (!func_12(iParam0, 0, 1))
    {
        return;
    }
    if (func_609(iParam0) != -1)
    {
        return;
    }
    if (Global_1523F1)
    {
        if (iParam0 == Global_1523F1.f_1)
        {
            return;
        }
    }
    if (func_608(iParam0))
    {
        return;
    }
    if (Global_152417 >= 32)
    {
        return;
    }
    Global_1523F6[Global_152417] = iParam0;
    Global_152417++;
    if (bParam1)
    {
    }
}

int func_608(int iParam0)//Position - 0x17536
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < Global_152417)
    {
        if (Global_1523F6[iVar0] == iParam0)
        {
            return 1;
        }
        iVar0++;
    }
    return 0;
}

int func_609(int iParam0)//Position - 0x17568
{
    int iVar0;
    
    if (!func_12(iParam0, 0, 1))
    {
        return -1;
    }
    if (Global_1523EF == 0)
    {
        return -1;
    }
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < Global_1523EF)
    {
        if (Global_15234E[iVar0 /*5*/].f_1 == iParam0)
        {
            if (unk_0xA78F5AF1E2C5FDAB(Global_15234E[iVar0 /*5*/].f_2) && unk_0x7E9D01EC258BE530(Global_15234E[iVar0 /*5*/].f_2))
            {
                return iVar0;
            }
            func_610(iVar0);
            return -1;
        }
        iVar0++;
    }
    return -1;
}

void func_610(int iParam0)//Position - 0x175E7
{
    char cVar0[64];
    char cVar1[64];
    int iVar2;
    int iVar3;
    
    if (iParam0 >= Global_1523EF)
    {
        return;
    }
    if (unk_0xA78F5AF1E2C5FDAB(Global_15234E[iParam0 /*5*/].f_2))
    {
        StringCopy(&cVar0, "CHAR_DEFAULT", 64);
        if (Global_15234E[iParam0 /*5*/].f_2 != 0)
        {
            StringCopy(&cVar1, unk_0x5C3CC258CDC18660(Global_15234E[iParam0 /*5*/].f_2), 64);
            unk_0x41E6991C564E55CD(&cVar1, &cVar1, &cVar0, &cVar0);
        }
        unk_0xF0502EB385D5B3C4(Global_15234E[iParam0 /*5*/].f_2);
    }
    iVar2 = iParam0;
    iVar3 = iVar2 + 1;
    while (iVar3 < Global_1523EF)
    {
        Global_15234E[iVar2 /*5*/] = { Global_15234E[iVar3 /*5*/] };
        iVar2++;
        iVar3++;
    }
    func_611(&(Global_15234E[iVar2 /*5*/]));
    Global_1523EF = (Global_1523EF - 1);
}

void func_611(var uParam0)//Position - 0x1769D
{
    *uParam0 = 0;
    uParam0->f_1 = func_102();
    uParam0->f_2 = 0;
    uParam0->f_4 = 0;
    if (unk_0x393E9918BC37548A())
    {
        uParam0->f_3 = unk_0x169A8AC9F93C2727();
    }
}

struct<4> func_612(int iParam0)//Position - 0x176CA
{
    char cVar0[32];
    
    if (func_12(iParam0, 0, 1))
    {
        Global_264397 = { func_137(iParam0) };
        if (unk_0x77BA37DB22C66465())
        {
            if (func_576(Global_264397))
            {
                if (!unk_0xCA3736B46FE270BB(&Global_264397))
                {
                    return cVar0;
                }
            }
        }
        else if (!unk_0x7B3E18C7DAC336C3(0))
        {
            return cVar0;
        }
        if (func_616(&Global_264397))
        {
            Global_264351 = { func_614(iParam0) };
            func_613(&Global_264351, &cVar0);
        }
    }
    return cVar0;
}

void func_613(var uParam0, char* sParam1)//Position - 0x1774B
{
    unk_0x1E527CF40C25B139(uParam0, 35, sParam1);
}

struct<35> func_614(int iParam0)//Position - 0x1775D
{
    struct<13> Var0;
    struct<35> Var1;
    
    if (func_615(iParam0))
    {
        return Global_140889[unk_0x7C7787D2D7139A85() /*35*/];
    }
    Var0 = { func_137(iParam0) };
    unk_0x4065D3D900AB253F(&Var1, 35, &Var0);
    return Var1;
}

int func_615(int iParam0)//Position - 0x17799
{
    if (iParam0 == unk_0x7C7787D2D7139A85())
    {
        return 1;
    }
    return 0;
}

int func_616(var uParam0)//Position - 0x177AF
{
    if (unk_0xE7017554E7BCFB0E())
    {
        if (unk_0xFF6895C150414C31() && unk_0xF10E9BDC0C546560(uParam0))
        {
            return 1;
        }
    }
    return 0;
}

int func_617(int iParam0, int iParam1)//Position - 0x177D5
{
    if (iParam1 == 26)
    {
        if ((func_8(iParam0) || func_619(iParam0)) || func_7(iParam0))
        {
            return 0;
        }
    }
    if (!func_618(iParam0))
    {
        return 0;
    }
    if ((!func_626(iParam0) && Global_24FD09[iParam0 /*421*/].f_EC == -1) && !func_625(iParam0))
    {
        return 0;
    }
    return 1;
}

bool func_618(int iParam0)//Position - 0x17844
{
    return unk_0xA2BC31158C8CEFD2(Global_1844AE[iParam0 /*871*/].f_8E, 22);
}

int func_619(int iParam0)//Position - 0x1785D
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        return (unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_1, 10) || unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_1, 9));
    }
    return 0;
}

int func_620(int iParam0)//Position - 0x1789B
{
    int iVar0;
    
    if (iParam0 == func_102())
    {
        return 0;
    }
    if (func_14(iParam0, 0))
    {
        return 0;
    }
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_1844AE[iVar0 /*871*/].f_8E, 2))
        {
            return 0;
        }
    }
    return 1;
}

int func_621()//Position - 0x178E0
{
    switch (func_220(unk_0x7C7787D2D7139A85()))
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
    switch (func_321(unk_0x7C7787D2D7139A85()))
    {
        case 131:
        case 140:
        case 138:
        case 146:
            return 1;
            break;
    }
    if (func_106(unk_0x7C7787D2D7139A85()))
    {
        switch (func_220(unk_0x7C7787D2D7139A85()))
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
    if (func_595(unk_0x7C7787D2D7139A85(), 236))
    {
        return 1;
    }
    return 0;
}

void func_622(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x17A1C
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    while (iVar0 < 32)
    {
        if (func_12(unk_0x0C98179F08C6DA4F(iVar0), 0, 1))
        {
            iVar1 = unk_0x0C98179F08C6DA4F(iVar0);
            if (!func_14(iVar1, 0))
            {
                if ((func_626(iVar1) || Global_24FD09[iVar1 /*421*/].f_EC != -1) || func_625(iVar1))
                {
                    if (func_623(iVar1, iParam1, 0))
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

int func_623(int iParam0, int iParam1, bool bParam2)//Position - 0x17AA6
{
    if (iParam1 != func_102())
    {
        if (!bParam2)
        {
            if (func_624(iParam0, iParam1))
            {
                return 0;
            }
        }
        if (Global_18DB1B[iParam0 /*614*/].f_B != func_102())
        {
            return iParam1 == Global_18DB1B[iParam0 /*614*/].f_B;
        }
    }
    return 0;
}

int func_624(int iParam0, int iParam1)//Position - 0x17AF0
{
    if (iParam1 != func_102())
    {
        if (iParam0 != func_102())
        {
            if (Global_18DB1B[iParam0 /*614*/].f_B != func_102())
            {
                if (Global_18DB1B[iParam0 /*614*/].f_B == iParam0)
                {
                    return iParam1 == iParam0;
                }
            }
        }
    }
    return 0;
}

bool func_625(int iParam0)//Position - 0x17B35
{
    return Global_1844AE[iParam0 /*871*/].f_C4 != 0;
}

int func_626(int iParam0)//Position - 0x17B4A
{
    if (func_12(iParam0, 0, 1))
    {
        if (func_12(unk_0x7C7787D2D7139A85(), 0, 1))
        {
            if (unk_0x645A04F62406C561(iParam0, unk_0x7C7787D2D7139A85()) || func_220(iParam0) == 233)
            {
                return 1;
            }
        }
    }
    return 0;
}

void func_627(int iParam0, int iParam1, int iParam2)//Position - 0x17B8B
{
    if (unk_0x08EA887200715AD9(*iParam0))
    {
        unk_0xF1BC72CEC2746995(*iParam0, "SET_DATA_SLOT_EMPTY");
        unk_0xD02F24F3E2DB263A(iParam1);
        unk_0xD02F24F3E2DB263A(iParam2);
        unk_0xAC7C2DE2DDC7AF03();
    }
}

void func_628(bool bParam0)//Position - 0x17BB9
{
    if (bParam0)
    {
        if (Global_14F539.f_2 == 0)
        {
            Global_14F539.f_2 = 1;
        }
    }
    else if (Global_14F539.f_2 == 1)
    {
        Global_14F539.f_2 = 0;
    }
}

void func_629()//Position - 0x17BEB
{
    if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_11EC, 1))
    {
        if (func_302())
        {
            func_289();
        }
    }
}

int func_630()//Position - 0x17C0D
{
    if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_11EC, 0) && func_302())
    {
        return 1;
    }
    if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_11EC, 1) && func_302())
    {
        return 1;
    }
    return 0;
}

int func_631()//Position - 0x17C4E
{
    if (func_302())
    {
        if (func_54(Global_2531AD.f_A94[0 /*80*/].f_1))
        {
            return 1;
        }
    }
    return 0;
}

int func_632()//Position - 0x17C75
{
    if (func_302())
    {
        if (func_67(Global_2531AD.f_A94[0 /*80*/].f_1))
        {
            return 1;
        }
    }
    return 0;
}

void func_633(int iParam0)//Position - 0x17C9C
{
    if (Global_14F539.f_1 != Global_14F539)
    {
        Global_14F539.f_1 = Global_14F539;
    }
    if (Global_14F539 != iParam0)
    {
        Global_14F539 = iParam0;
    }
}

int func_634(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)//Position - 0x17CCA
{
    struct<4> Var0;
    char* sVar1;
    bool bVar2;
    bool bVar3;
    float fVar4;
    int iVar5;
    char* sVar6;
    
    StringCopy(&Var0, "", 16);
    bVar3 = func_678(iParam1);
    if (iParam1 == 20)
    {
        bVar2 = true;
    }
    fVar4 = func_677();
    iVar5 = -1;
    if (iParam1 == 26 || iParam1 == 27)
    {
        if (func_676())
        {
            if (func_675() > 0 && Global_180528)
            {
                unk_0x1C0FEAA5C83F343B();
                unk_0xF3F61F23853206CB(fVar4);
                unk_0x0AF55029F939BA65(18);
                if (unk_0x0945988C02AF3025())
                {
                    unk_0x3D0BC3CE4D5E1DD0();
                }
                unk_0x0AF55029F939BA65(10);
            }
        }
    }
    if (!bParam5)
    {
        if (!func_664())
        {
            func_663(iParam0, uParam2, 1);
            return 0;
        }
    }
    if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_11EF, 26))
    {
        func_663(iParam0, uParam2, 1);
        return 0;
    }
    if (!func_47(&(uParam2->f_13)))
    {
        if (func_675() == 1)
        {
            func_662(bVar3, iParam0, 0);
            func_2(&(uParam2->f_13), 0, 0);
            func_663(iParam0, uParam2, 0);
            unk_0xA1E7A40E1F56E511(&(Global_26A0A9.f_11F0), 5);
        }
    }
    if (func_47(&(uParam2->f_13)) || bParam5)
    {
        if (unk_0x0945988C02AF3025())
        {
            unk_0x3D0BC3CE4D5E1DD0();
        }
        unk_0x0AF55029F939BA65(10);
        if (func_1(&(uParam2->f_13), 10000, 0) || (func_675() == 0 && !bParam5))
        {
            func_663(iParam0, uParam2, 1);
            return 0;
        }
        else
        {
            if (bVar2 == 0)
            {
                func_661();
                if (iParam1 == 26 || iParam1 == 27)
                {
                    unk_0x1C0FEAA5C83F343B();
                }
                unk_0x0AF55029F939BA65(18);
            }
            if (!unk_0xA2BC31158C8CEFD2(uParam2->f_21, 0))
            {
                if (bVar2 == 0)
                {
                    func_661();
                    if (iParam1 == 26 || iParam1 == 27)
                    {
                        unk_0x1C0FEAA5C83F343B();
                    }
                    unk_0x0AF55029F939BA65(18);
                }
                unk_0xF3F61F23853206CB(fVar4);
                if (func_662(bVar3, iParam0, 0))
                {
                    func_627(iParam0, 0, 0);
                    sVar1 = func_659(iParam1, &(Global_440000.f_25AFF), bParam4);
                    Var0 = { func_657(iParam1) };
                    if (bParam4)
                    {
                        func_654(iParam0, sVar1, "", 0, -1, -1, 1);
                    }
                    else if (iParam1 == 26)
                    {
                        func_648(iParam0, func_651(uParam2), func_649(uParam2), -1);
                    }
                    else if (iParam1 == 27)
                    {
                        sVar6 = func_642(uParam2);
                        if (!unk_0x9591DE0F00127F2A(sParam6))
                        {
                            sVar6 = sParam6;
                        }
                        func_640(iParam0, sVar6, func_641(), -1);
                    }
                    else if (func_590())
                    {
                        uParam2->f_22 = Global_180527;
                        func_654(iParam0, sVar1, &Var0, 1, -1, Global_180527, 1);
                    }
                    else if (bVar2)
                    {
                        iVar5 = func_635(iParam1);
                        uParam2->f_22 = Global_180527;
                        func_654(iParam0, sVar1, "", 0, iVar5, Global_180527, 1);
                    }
                    else
                    {
                        iVar5 = func_635(iParam1);
                        func_654(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
                    }
                    unk_0xA1E7A40E1F56E511(&(uParam2->f_21), 0);
                }
            }
            if (unk_0xA2BC31158C8CEFD2(uParam2->f_21, 0))
            {
                Global_180526 = uParam3;
                Global_180525 = 1;
                unk_0xF3F61F23853206CB(fVar4);
                if (bVar2)
                {
                    if (uParam2->f_22 != Global_180527)
                    {
                        unk_0x3B76114EC84D5812(&(uParam2->f_21), 0);
                    }
                }
                return 1;
            }
        }
    }
    return 0;
}

int func_635(int iParam0)//Position - 0x17FA9
{
    int iVar0;
    
    iVar0 = -1;
    if (func_639())
    {
        iVar0 = 2;
    }
    switch (iParam0)
    {
        case 39:
            iVar0 = 22;
            break;
        
        case 0:
        case 30:
        case 29:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
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
        
        case 25:
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
            if (func_638(unk_0x7C7787D2D7139A85()))
            {
                iVar0 = 20;
            }
            if (func_637(unk_0x7C7787D2D7139A85()))
            {
                iVar0 = 19;
            }
            break;
    }
    if (func_636(unk_0x7C7787D2D7139A85()))
    {
        iVar0 = 2;
    }
    if (func_221())
    {
        iVar0 = 20;
    }
    return iVar0;
}

bool func_636(int iParam0)//Position - 0x18145
{
    return Global_24FD09[iParam0 /*421*/].f_73 == 4;
}

bool func_637(int iParam0)//Position - 0x1815A
{
    return Global_24FD09[iParam0 /*421*/].f_73 == 7;
}

bool func_638(int iParam0)//Position - 0x1816F
{
    return Global_24FD09[iParam0 /*421*/].f_73 == 2;
}

bool func_639()//Position - 0x18184
{
    return Global_440000.f_1 == 0;
}

void func_640(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x18194
{
    if (unk_0x08EA887200715AD9(*iParam0))
    {
        unk_0xF1BC72CEC2746995(*iParam0, "SET_TITLE");
        if (unk_0x9591DE0F00127F2A(sParam2))
        {
            func_587(sParam1);
        }
        else
        {
            unk_0x759AC38FBC6CCA9E("FM_AE_BRACKT");
            unk_0x0AC9F8E1AFCEC860(sParam1);
            unk_0x0AC9F8E1AFCEC860(sParam2);
            unk_0x81019766FF500CCA();
        }
        func_587("");
        if (iParam3 != -1)
        {
            unk_0xD02F24F3E2DB263A(iParam3);
        }
        unk_0xAC7C2DE2DDC7AF03();
    }
}

char* func_641()//Position - 0x181F3
{
    switch (func_220(unk_0x7C7787D2D7139A85()))
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

char* func_642(var uParam0)//Position - 0x1824B
{
    switch (uParam0->f_70)
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
    switch (uParam0->f_6E)
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
    switch (func_220(unk_0x7C7787D2D7139A85()))
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
            if (func_644())
            {
                return "LBD_BKVBK";
            }
            return "PIM_MAGM201";
            break;
        
        case 151:
            if (func_257(1))
            {
                return "GB_DPAD_BMFD";
            }
            return "PIM_MAGM202";
            break;
        
        case 152:
            return "PIM_MAGM204";
            break;
        
        case 153:
            if (func_257(1))
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
            if (func_643(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_B.f_B5))
            {
                return "GB_DPAD_BSET";
            }
            return "GB_DPAD_BBUY";
            break;
    }
    return "";
}

int func_643(int iParam0)//Position - 0x18677
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

bool func_644()//Position - 0x186A9
{
    return (func_647() && func_645(func_646()));
}

int func_645(int iParam0)//Position - 0x186C2
{
    return func_260(iParam0, 1);
}

int func_646()//Position - 0x186D1
{
    return Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_B.f_23;
}

bool func_647()//Position - 0x186E8
{
    return Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/] == 148;
}

void func_648(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x186FE
{
    if (unk_0x08EA887200715AD9(*iParam0))
    {
        unk_0xF1BC72CEC2746995(*iParam0, "SET_TITLE");
        if (unk_0x9591DE0F00127F2A(sParam2))
        {
            func_587(sParam1);
        }
        else if (func_321(unk_0x7C7787D2D7139A85()) == 133)
        {
            unk_0x759AC38FBC6CCA9E("FM_AE_BRACKT_C");
            unk_0x0AC9F8E1AFCEC860(sParam1);
            unk_0x0AC9F8E1AFCEC860(sParam2);
            unk_0x81019766FF500CCA();
        }
        else
        {
            unk_0x759AC38FBC6CCA9E("FM_AE_BRACKT");
            unk_0x0AC9F8E1AFCEC860(sParam1);
            unk_0x0AC9F8E1AFCEC860(sParam2);
            unk_0x81019766FF500CCA();
        }
        func_587("");
        if (iParam3 != -1)
        {
            unk_0xD02F24F3E2DB263A(iParam3);
        }
        unk_0xAC7C2DE2DDC7AF03();
    }
}

char* func_649(var uParam0)//Position - 0x18785
{
    int iVar0;
    
    iVar0 = func_321(unk_0x7C7787D2D7139A85());
    if (func_650())
    {
        if (uParam0->f_67 != -1)
        {
            iVar0 = uParam0->f_67;
        }
    }
    switch (iVar0)
    {
        case 131:
            return "";
        
        case 132:
            return "FM_AE_SORT_5";
        
        case 133:
            switch (func_320())
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

bool func_650()//Position - 0x18930
{
    return Global_18442F;
}

char* func_651(var uParam0)//Position - 0x1893C
{
    int iVar0;
    
    iVar0 = func_321(unk_0x7C7787D2D7139A85());
    if (func_650())
    {
        if (uParam0->f_67 != -1)
        {
            iVar0 = uParam0->f_67;
        }
    }
    switch (iVar0)
    {
        case 131:
            return "PIM_TA9";
        
        case 132:
            if (func_653() == 0)
            {
                return "CPC_TILEL";
            }
            else if (func_653() == 1)
            {
                return "CPC_TILELA";
            }
            return "PIM_TA0";
            break;
        
        case 133:
            switch (func_320())
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
            if (func_652() == 1)
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

int func_652()//Position - 0x18B31
{
    return Global_26A0A9.f_12D6;
}

int func_653()//Position - 0x18B40
{
    if (func_321(unk_0x7C7787D2D7139A85()) == 132)
    {
        return Global_26A0A9.f_12D1;
    }
    return -1;
}

void func_654(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)//Position - 0x18B63
{
    int iVar0;
    int iVar1;
    
    if (unk_0x08EA887200715AD9(*iParam0))
    {
        unk_0xF1BC72CEC2746995(*iParam0, "SET_TITLE");
        if (bParam3)
        {
            func_598(sParam1);
        }
        else if (iParam5 != -1)
        {
            unk_0x759AC38FBC6CCA9E(sParam1);
            unk_0x6A8B3CC08A759F44(iParam5);
            unk_0x81019766FF500CCA();
        }
        else
        {
            func_587(sParam1);
        }
        if (func_676() && iParam6)
        {
            if (func_656())
            {
                iVar0 = 2;
                iVar1 = 2;
            }
            else
            {
                iVar0 = 1;
                iVar1 = 2;
            }
            unk_0x759AC38FBC6CCA9E("LBD_DPD_CNT");
            unk_0x6A8B3CC08A759F44(iVar0);
            unk_0x6A8B3CC08A759F44(iVar1);
            unk_0x81019766FF500CCA();
        }
        else
        {
            func_587(sParam2);
        }
        if (iParam4 != -1)
        {
            unk_0xD02F24F3E2DB263A(iParam4);
            if (func_655(unk_0x7C7787D2D7139A85()))
            {
                unk_0xD02F24F3E2DB263A(166);
            }
            else if (func_64())
            {
                unk_0xD02F24F3E2DB263A(220);
            }
        }
        unk_0xAC7C2DE2DDC7AF03();
    }
}

int func_655(int iParam0)//Position - 0x18C24
{
    if (func_638(iParam0) || func_637(iParam0))
    {
        return 1;
    }
    return 0;
}

bool func_656()//Position - 0x18C46
{
    return Global_180528;
}

struct<4> func_657(int iParam0)//Position - 0x18C52
{
    struct<4> Var0;
    
    StringCopy(&Var0, "", 16);
    if (func_658(unk_0x7C7787D2D7139A85()) || func_636(unk_0x7C7787D2D7139A85()))
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
            StringIntConCat(&Var0, Global_440000.f_28, 16);
            break;
    }
    if (func_590() && unk_0xA51CBC95AC3A4B14())
    {
        StringCopy(&Var0, "LBD_DIF_", 16);
        StringIntConCat(&Var0, Global_440000.f_28, 16);
    }
    return Var0;
}

bool func_658(int iParam0)//Position - 0x18CED
{
    return Global_24FD09[iParam0 /*421*/].f_73 == 5;
}

char* func_659(int iParam0, char* sParam1, bool bParam2)//Position - 0x18D02
{
    var uVar0;
    
    if (iParam0 == 20 && (!func_590() || unk_0x9591DE0F00127F2A(sParam1)))
    {
        uVar0 = func_660();
        return uVar0;
    }
    else if (bParam2)
    {
        return "HUD_LBD_IMP";
    }
    else if (iParam0 == 24)
    {
        if (Global_180616 == 0)
        {
            Global_180616 = 1;
        }
        return "HUD_LBD_OVR";
    }
    else if (!unk_0x9591DE0F00127F2A(sParam1))
    {
        if (Global_180616 == 1)
        {
            Global_180616 = 0;
        }
        return sParam1;
    }
    else
    {
        if (Global_180616 == 0)
        {
            Global_180616 = 1;
        }
        switch (iParam0)
        {
            case 0:
            case 30:
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
            case 25:
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
            
            case 21:
                return "HUD_LBD_SHOO";
                break;
            }
    }
    return sParam1;
}

char* func_660()//Position - 0x18E66
{
    if (unk_0xB60C981253946EC0())
    {
        return "HUD_LBD_FMF";
    }
    if (unk_0x28B56AB7204D753B())
    {
        return "HUD_LBD_FMC";
    }
    if (unk_0x2D635A9E46DA733C())
    {
        return "HUD_LBD_FMS";
    }
    if (unk_0xF74FDCB441C8F4C2())
    {
        return "HUD_LBD_FMI";
    }
    return "HUD_LBD_FMP";
}

void func_661()//Position - 0x18EAA
{
    Global_A54C = 1;
}

bool func_662(bool bParam0, int iParam1, bool bParam2)//Position - 0x18EB6
{
    if (bParam0)
    {
        *iParam1 = unk_0x1FAFE9BB9D8960C1("mp_mm_card_freemode");
    }
    else if (bParam2)
    {
        *iParam1 = unk_0x1FAFE9BB9D8960C1("MP_SPECTATOR_CARD");
    }
    else
    {
        *iParam1 = unk_0x1FAFE9BB9D8960C1("mp_matchmaking_card");
    }
    return unk_0x08EA887200715AD9(*iParam1);
}

void func_663(int iParam0, var uParam1, bool bParam2)//Position - 0x18EF6
{
    unk_0x3B76114EC84D5812(&(uParam1->f_21), 7);
    Global_180526 = 0;
    func_580();
    Global_180525 = 0;
    uParam1->f_1B = 0;
    if (bParam2)
    {
        if (func_47(&(uParam1->f_13)))
        {
            func_46(&(uParam1->f_13));
            unk_0x3B76114EC84D5812(&(Global_26A0A9.f_11F0), 5);
        }
    }
    if (unk_0x08EA887200715AD9(*iParam0))
    {
        unk_0x749CA887CB0AFEC9(iParam0);
    }
    if (unk_0xA2BC31158C8CEFD2(uParam1->f_21, 0))
    {
        unk_0x3B76114EC84D5812(&(uParam1->f_21), 0);
    }
    unk_0xF3F61F23853206CB(0f);
}

int func_664()//Position - 0x18F68
{
    if (func_674())
    {
        return 0;
    }
    if (func_566())
    {
        return 0;
    }
    if (!func_672())
    {
        return 0;
    }
    if (!func_554())
    {
        return 0;
    }
    if (func_671(8, -1))
    {
        return 0;
    }
    if (func_675() == 2)
    {
        return 0;
    }
    if (Global_26A0A9.f_11BF)
    {
        return 0;
    }
    if (func_315())
    {
        return 0;
    }
    else if (!func_350(unk_0x7C7787D2D7139A85(), 1, 0) && Global_1403E4[0 /*4*/] > 0)
    {
        return 0;
    }
    if (((func_670(1) || func_668(1)) || Global_56C3.f_7C) || Global_56C3)
    {
        return 0;
    }
    if (unk_0xCD97B9861557C025())
    {
        return 0;
    }
    if (func_667() && Global_19DF71 == 2)
    {
        return 0;
    }
    if (func_100(unk_0x7C7787D2D7139A85()) && !func_667())
    {
        return 0;
    }
    if (Global_195E58)
    {
        return 0;
    }
    if (Global_195E5D)
    {
        return 0;
    }
    if (func_666(0))
    {
        return 0;
    }
    if (unk_0xA2BC31158C8CEFD2(Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_111.f_18, 4))
    {
        return 0;
    }
    if (Global_14DA20)
    {
        return 0;
    }
    if ((Global_19C52A.f_2C1.f_5 || Global_19D025.f_2C1.f_5) || Global_19C16D.f_2C1.f_5)
    {
        return 0;
    }
    if ((Global_19E336.f_2C7.f_5 || Global_19E336.f_2DB.f_2C7.f_5) || Global_19E336.f_5BD.f_2C7.f_5)
    {
        return 0;
    }
    if (func_665(unk_0x7C7787D2D7139A85()))
    {
        return 0;
    }
    if ((Global_14DA43 || Global_14DA44) || Global_14DA45)
    {
        return 0;
    }
    return 1;
}

bool func_665(int iParam0)//Position - 0x19133
{
    if (iParam0 == func_102())
    {
        return 0;
    }
    return unk_0xA2BC31158C8CEFD2(Global_24FD09[iParam0 /*421*/].f_135.f_4, 6);
}

bool func_666(int iParam0)//Position - 0x1915B
{
    return unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_1322.f_2B, iParam0);
}

bool func_667()//Position - 0x19172
{
    return (unk_0xA2BC31158C8CEFD2(Global_440000.f_1E, 12) && unk_0xA2BC31158C8CEFD2(Global_19DF72, 0));
}

int func_668(bool bParam0)//Position - 0x19194
{
    if (unk_0x8F0856319BE615A3())
    {
        if (!unk_0x2BF5E63466422C38(unk_0x0FA8183DAD2B3203()))
        {
            if (func_669(unk_0x0FA8183DAD2B3203()))
            {
                if (unk_0x3772881BFFE6C3F8(0, 25) || unk_0x3772881BFFE6C3F8(0, 68))
                {
                    return 0;
                }
            }
        }
    }
    if (Global_56C3.f_82)
    {
        return 0;
    }
    if (unk_0x3772881BFFE6C3F8(0, 19) || (!bParam0 && unk_0x0B6782DED1C4B3B1(0, 19)))
    {
        return 1;
    }
    if (unk_0xE434AB6E3DE89861())
    {
        if (((unk_0x3772881BFFE6C3F8(0, 166) || unk_0x3772881BFFE6C3F8(0, 167)) || unk_0x3772881BFFE6C3F8(0, 168)) || unk_0x3772881BFFE6C3F8(0, 169))
        {
            return 1;
        }
        if (!bParam0)
        {
            if (((unk_0x0B6782DED1C4B3B1(0, 166) || unk_0x0B6782DED1C4B3B1(0, 167)) || unk_0x0B6782DED1C4B3B1(0, 168)) || unk_0x0B6782DED1C4B3B1(0, 169))
            {
                return 1;
            }
        }
    }
    return 0;
}

int func_669(int iParam0)//Position - 0x1927F
{
    int iVar0;
    
    if (unk_0xC6649C48084573DA())
    {
        if (!unk_0x2BF5E63466422C38(iParam0))
        {
            unk_0x63EA4FAF7CDEFEC7(iParam0, &iVar0, 1);
            if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
            {
                return 1;
            }
        }
    }
    return 0;
}

bool func_670(bool bParam0)//Position - 0x192DC
{
    if (bParam0)
    {
        return (Global_56C3.f_4 && Global_56C3.f_68 == 4);
    }
    return Global_56C3.f_4;
}

bool func_671(int iParam0, int iParam1)//Position - 0x19305
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

int func_672()//Position - 0x19340
{
    if (func_673())
    {
        return 1;
    }
    if (unk_0x260395BA7F0C83CB())
    {
        return 0;
    }
    if (unk_0xA710300CD13D2877() || unk_0xC862E94A8ABC89B8())
    {
        return 0;
    }
    if (unk_0x75EBF5007DD359C9())
    {
        return 0;
    }
    return 1;
}

bool func_673()//Position - 0x1937F
{
    return Global_1406B7;
}

bool func_674()//Position - 0x1938B
{
    return unk_0x9B35D07DCD0F0B43() <= Global_574E.f_16F6 + 100;
}

int func_675()//Position - 0x193A0
{
    return Global_14F53C.f_44;
}

int func_676()//Position - 0x193AE
{
    if (Global_180527 > 16)
    {
        return 1;
    }
    return 0;
}

float func_677()//Position - 0x193C4
{
    float fVar0;
    float fVar1;
    float fVar2;
    
    fVar2 = 0.6347182f;
    fVar1 = (1f - (1f - unk_0x7BC897FD6110BBB4()));
    fVar0 = (1f - (fVar1 - fVar2));
    return fVar0;
}

int func_678(int iParam0)//Position - 0x193E8
{
    switch (iParam0)
    {
        case 20:
        case 26:
        case 27:
        case 39:
            return 1;
        
        default:
    }
    return 0;
}

int func_679()//Position - 0x19414
{
    if (func_682())
    {
        return 1;
    }
    if (func_7(unk_0x7C7787D2D7139A85()))
    {
        return 0;
    }
    if (func_650())
    {
        return 1;
    }
    if (func_387(unk_0x7C7787D2D7139A85()))
    {
        switch (func_321(unk_0x7C7787D2D7139A85()))
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
                if (!func_680(unk_0x7C7787D2D7139A85()))
                {
                    return 1;
                }
                break;
            
            case 129:
                if (!func_680(unk_0x7C7787D2D7139A85()))
                {
                    return 1;
                }
                break;
            
            case 174:
                if (!func_680(unk_0x7C7787D2D7139A85()))
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

bool func_680(int iParam0)//Position - 0x194EF
{
    return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_1, 4);
}

int func_681(int iParam0)//Position - 0x19507
{
    if (iParam0 == 27)
    {
        if ((func_387(unk_0x7C7787D2D7139A85()) && !func_106(unk_0x7C7787D2D7139A85())) && !func_595(unk_0x7C7787D2D7139A85(), 236))
        {
            return 1;
        }
    }
    if (iParam0 == 26)
    {
        if (func_112(unk_0x7C7787D2D7139A85(), 0) && func_106(unk_0x7C7787D2D7139A85()))
        {
            return 1;
        }
        if (func_559(unk_0x7C7787D2D7139A85()) == 3)
        {
            return 1;
        }
    }
    return 0;
}

int func_682()//Position - 0x19578
{
    if (func_683(unk_0x7C7787D2D7139A85()))
    {
        return Global_1420B9;
    }
    return 0;
}

int func_683(int iParam0)//Position - 0x19593
{
    if (unk_0x393E9918BC37548A())
    {
        if (func_14(iParam0, 0))
        {
            return unk_0xC0E0C265EFDEC931(iParam0);
        }
    }
    return 0;
}

void func_684()//Position - 0x195B6
{
    if (Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_3 == 3)
    {
        if (!unk_0xA2BC31158C8CEFD2(iLocal_142, 8))
        {
            if ((!func_7(unk_0x7C7787D2D7139A85()) && !func_162(unk_0x7C7787D2D7139A85())) && !func_399(unk_0x7C7787D2D7139A85()))
            {
                func_398();
            }
        }
        else if (!unk_0xA2BC31158C8CEFD2(iLocal_142, 9))
        {
            if ((func_7(unk_0x7C7787D2D7139A85()) || func_162(unk_0x7C7787D2D7139A85())) || func_399(unk_0x7C7787D2D7139A85()))
            {
                unk_0x76C7A02129221DEC();
                Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_4 = 0;
                unk_0xA1E7A40E1F56E511(&iLocal_142, 9);
            }
        }
    }
}

void func_685()//Position - 0x19657
{
    int iVar0;
    
    if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(iLocal_146)))
    {
        iVar0 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(iLocal_146));
        if (unk_0xD56C8C2B75BF9665(iVar0))
        {
            func_686(iVar0, 2);
        }
    }
    iLocal_146++;
    if (iLocal_146 >= unk_0xACF7D965CEBE5714())
    {
        iLocal_146 = 0;
    }
}

void func_686(int iParam0, int iParam1)//Position - 0x196A0
{
    bool bVar0;
    
    if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 0))
    {
        return;
    }
    if (func_47(&(Global_1806F7.f_12)))
    {
        return;
    }
    if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_2, iParam0))
    {
        if (Global_1806F7 < iParam1 && unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 1))
        {
            unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 0);
            return;
        }
        if (Global_1806F7 != 0)
        {
            unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 1);
        }
        Global_1806F7 = 0;
        Global_1806F7.f_2 = 0;
    }
    unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_2), iParam0);
    bVar0 = true;
    if (func_8(iParam0))
    {
        bVar0 = false;
    }
    if (func_687(iParam0))
    {
        bVar0 = false;
    }
    if (func_14(iParam0, 0))
    {
        bVar0 = false;
    }
    if (func_7(iParam0))
    {
        bVar0 = false;
    }
    if (bVar0)
    {
        Global_1806F7++;
    }
}

bool func_687(int iParam0)//Position - 0x1976E
{
    return unk_0xA2BC31158C8CEFD2(Global_18DB1B[iParam0 /*614*/].f_1, 10);
}

void func_688(int iParam0, int iParam1)//Position - 0x19787
{
    Local_1537[iParam0 /*12*/] = iParam1;
}

int func_689()//Position - 0x19798
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 < 32)
    {
        Local_192.f_216[iVar0 /*42*/].f_1 = func_102();
        iVar0++;
    }
    return 1;
}

int func_690()//Position - 0x197C4
{
    return Local_171;
}

int func_691(int iParam0)//Position - 0x197CF
{
    return Local_1537[iParam0 /*12*/];
}

void func_692()//Position - 0x197DE
{
    if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 6))
    {
        func_715();
        unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 6);
    }
    if (!unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 7))
    {
        if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 4) || unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 16))
        {
            if (((!unk_0xBCFD7D14E63DFD63() && !unk_0x0945988C02AF3025()) && !func_302()) && func_12(unk_0x7C7787D2D7139A85(), 1, 1))
            {
                unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 7);
                func_296("FME_PASINT", 30000);
                func_295(1);
            }
        }
        else if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 17))
        {
            if (func_165() && !func_164())
            {
                unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 17);
                unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 16);
            }
        }
    }
    if (!unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 23))
    {
        if (((((!unk_0xBCFD7D14E63DFD63() && !unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_31B, 2)) && func_12(unk_0x7C7787D2D7139A85(), 1, 1)) && !Global_12038) && !Global_E51C) && !unk_0x0945988C02AF3025())
        {
            if (func_713())
            {
                func_296("AMEV_GA_RP", -1);
                if (func_220(unk_0x7C7787D2D7139A85()) != 200)
                {
                    func_295(1);
                }
                unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 23);
            }
        }
    }
    if (unk_0xCD97B9861557C025() && unk_0x097FC2B62E383500() == 15)
    {
        if (func_412(unk_0x7C7787D2D7139A85()))
        {
            if (!unk_0xCE5F730CE5D2B3B2(1344549371))
            {
                unk_0x339AECE514362B5F(1344549371);
            }
        }
        else if (unk_0xCE5F730CE5D2B3B2(1344549371))
        {
            unk_0x545AD6392BF558B6(1344549371);
        }
    }
    if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 9))
    {
        if (((((!unk_0xBCFD7D14E63DFD63() && !unk_0x0945988C02AF3025()) && !func_302()) && func_12(unk_0x7C7787D2D7139A85(), 1, 1)) && !func_163(unk_0x7C7787D2D7139A85(), 21)) && !func_163(unk_0x7C7787D2D7139A85(), 25))
        {
            unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 9);
            func_712(0);
            func_296("FME_TBL00", -1);
            func_295(1);
        }
    }
    if (func_387(unk_0x7C7787D2D7139A85()))
    {
        if (!unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 18))
        {
            if ((func_163(unk_0x7C7787D2D7139A85(), 21) && unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 20)) && !unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 19))
            {
                unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 18);
            }
        }
        else if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 18))
        {
            if (((((!unk_0xBCFD7D14E63DFD63() && !unk_0x0945988C02AF3025()) && !func_302()) && func_12(unk_0x7C7787D2D7139A85(), 1, 1)) && unk_0xBF28CCACDDFF5346()) && !Global_26A0A9.f_12DF)
            {
                unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 18);
                unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 19);
                func_296("AMTT_RPAS", -1);
                func_295(1);
            }
        }
    }
    if (((((func_387(unk_0x7C7787D2D7139A85()) && !func_8(unk_0x7C7787D2D7139A85())) && func_321(unk_0x7C7787D2D7139A85()) != 146) && !func_7(unk_0x7C7787D2D7139A85())) && !func_162(unk_0x7C7787D2D7139A85())) && !func_702())
    {
        if (func_411(func_321(unk_0x7C7787D2D7139A85())))
        {
            unk_0xDA1C9614D8C6EE61(unk_0x7C7787D2D7139A85());
        }
        if (!unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 22))
        {
            unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 22);
        }
        if (func_456(unk_0x7C7787D2D7139A85()) || func_405())
        {
            if (!unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 10))
            {
                if (func_701(func_321(unk_0x7C7787D2D7139A85())))
                {
                    if (func_264(0) && !Global_247C05)
                    {
                        unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 9);
                    }
                    if (!Global_247C05)
                    {
                        func_409(1);
                        unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 14);
                    }
                }
                unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 10);
            }
        }
        if (func_412(unk_0x7C7787D2D7139A85()))
        {
            if (!unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 11))
            {
                if (!Global_181A1.f_8)
                {
                    unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 12);
                    func_407(1);
                }
                if (!func_700())
                {
                    unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 13);
                    func_406();
                }
                if (!Global_247C05)
                {
                    unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 14);
                    if (func_264(0) && !Global_247C05)
                    {
                        unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 9);
                    }
                    func_409(1);
                }
                unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 11);
            }
        }
        else
        {
            func_698(0);
        }
    }
    else
    {
        func_698(1);
    }
    func_693();
    if (func_404(func_321(unk_0x7C7787D2D7139A85())) && !unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 21))
    {
        unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 21);
    }
    if (((func_165() && !func_164()) || func_163(unk_0x7C7787D2D7139A85(), 21)) || func_163(unk_0x7C7787D2D7139A85(), 25))
    {
        if (!unk_0xA2BC31158C8CEFD2(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1, 10))
        {
            unk_0xA1E7A40E1F56E511(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 10);
        }
    }
    else if (unk_0xA2BC31158C8CEFD2(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1, 10))
    {
        unk_0x3B76114EC84D5812(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 10);
    }
}

void func_693()//Position - 0x19D1E
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    if (func_302())
    {
        iVar2 = 63;
        iVar2 = 0;
        while (iVar2 < 83)
        {
            if (func_543(iVar2))
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
                if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 26))
                {
                    unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 26);
                }
                func_694(iVar0, iVar1);
                iVar2 = 83;
            }
            iVar2++;
        }
    }
    else if (!unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 26))
    {
        func_46(&(Global_1806F7.f_16));
        unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 26);
    }
}

void func_694(int iParam0, int iParam1)//Position - 0x19DC1
{
    if (!func_47(&(Global_1806F7.f_16)))
    {
        func_2(&(Global_1806F7.f_16), 0, 0);
    }
    else if (func_1(&(Global_1806F7.f_16), iParam1, 0))
    {
        if (func_675() > 0)
        {
            func_697(iParam0);
            if (func_293("AMEV_LBD_HELP"))
            {
                unk_0x0D23E3918F7AF11B(1);
            }
            func_46(&(Global_1806F7.f_16));
        }
    }
    else
    {
        func_696(0);
        func_695();
    }
}

void func_695()//Position - 0x19E2A
{
    Global_26A0A9.f_11B4 = 0;
}

void func_696(int iParam0)//Position - 0x19E3A
{
    Global_14F53C.f_44 = iParam0;
}

void func_697(int iParam0)//Position - 0x19E4A
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 <= 3)
    {
        if (Global_2531AD.f_A94[iVar0 /*80*/].f_1 == iParam0)
        {
            Global_2531AD.f_A94[iVar0 /*80*/].f_2 = 5;
            func_103(&(Global_2531AD.f_A94[iVar0 /*80*/].f_45), 1);
        }
        iVar0++;
    }
}

void func_698(int iParam0)//Position - 0x19E96
{
    if ((unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 11) || (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 10) && iParam0)) || (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 22) && iParam0))
    {
        if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 12))
        {
            unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 12);
            func_407(0);
        }
        if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 13))
        {
            unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 13);
            func_699();
        }
        if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 14) && !func_112(unk_0x7C7787D2D7139A85(), 0))
        {
            unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 14);
            func_409(0);
        }
        unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 11);
        unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 10);
        unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 22);
    }
}

void func_699()//Position - 0x19F71
{
    unk_0x3B76114EC84D5812(&(Global_26A0A9.f_1280), 0);
}

bool func_700()//Position - 0x19F85
{
    return unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_1280, 0);
}

int func_701(int iParam0)//Position - 0x19F99
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
            return func_412(unk_0x7C7787D2D7139A85());
        
        case 133:
            return (func_405() || func_5(func_320()));
        
        default:
    }
    return 0;
}

int func_702()//Position - 0x1A009
{
    if (((((((((func_711() || func_710()) || func_709()) || func_315()) || (func_708() && !unk_0xA51CBC95AC3A4B14())) || (func_705() && !func_704())) || Global_248A6D) || Global_248A6D.f_1 != 0) || Global_248AB7 != 0) || (func_703() == 2 && !unk_0xA51CBC95AC3A4B14()))
    {
        return 1;
    }
    return 0;
}

int func_703()//Position - 0x1A09D
{
    return Global_EC6CD;
}

bool func_704()//Position - 0x1A0A9
{
    return unk_0xA2BC31158C8CEFD2(Global_255E41.f_2, 27);
}

int func_705()//Position - 0x1A0BD
{
    if (func_707() || func_706())
    {
        return Global_1844AE[unk_0x7C7787D2D7139A85() /*871*/].f_62 == 8;
    }
    return 0;
}

var func_706()//Position - 0x1A0EA
{
    return Global_255E41.f_27B;
}

bool func_707()//Position - 0x1A0F9
{
    return unk_0xA2BC31158C8CEFD2(Global_255E41.f_2, 11);
}

bool func_708()//Position - 0x1A10D
{
    return unk_0xA2BC31158C8CEFD2(Global_255E41, 5);
}

bool func_709()//Position - 0x1A11E
{
    return unk_0xA2BC31158C8CEFD2(Global_255E41, 2);
}

bool func_710()//Position - 0x1A12F
{
    return unk_0xA2BC31158C8CEFD2(Global_255E41, 20);
}

bool func_711()//Position - 0x1A141
{
    return Global_255E41.f_256;
}

void func_712(int iParam0)//Position - 0x1A150
{
    int iVar0;
    
    iVar0 = func_208(2534, -1, 0);
    if (iParam0 == 0)
    {
        if (!unk_0xA2BC31158C8CEFD2(iVar0, 0))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 0);
        }
        else if (!unk_0xA2BC31158C8CEFD2(iVar0, 1))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 1);
        }
        else if (!unk_0xA2BC31158C8CEFD2(iVar0, 2))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 2);
        }
    }
    else if (iParam0 == 1)
    {
        if (!unk_0xA2BC31158C8CEFD2(iVar0, 3))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 3);
        }
        else if (!unk_0xA2BC31158C8CEFD2(iVar0, 4))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 4);
        }
        else if (!unk_0xA2BC31158C8CEFD2(iVar0, 5))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 5);
        }
    }
    else if (iParam0 == 2)
    {
        if (!unk_0xA2BC31158C8CEFD2(iVar0, 6))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 6);
        }
        else if (!unk_0xA2BC31158C8CEFD2(iVar0, 7))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 7);
        }
        else if (!unk_0xA2BC31158C8CEFD2(iVar0, 8))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 8);
        }
    }
    else if (iParam0 == 3)
    {
        if (!unk_0xA2BC31158C8CEFD2(iVar0, 9))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 9);
        }
        else if (!unk_0xA2BC31158C8CEFD2(iVar0, 10))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 10);
        }
        else if (!unk_0xA2BC31158C8CEFD2(iVar0, 11))
        {
            unk_0xA1E7A40E1F56E511(&iVar0, 11);
        }
    }
    func_198(2534, iVar0, -1, 1, 0);
}

int func_713()//Position - 0x1A288
{
    int iVar0;
    
    if (!func_47(&(Global_1806F7.f_F)))
    {
        func_2(&(Global_1806F7.f_F), 0, 0);
        Global_1806F7.f_11 = 0;
    }
    else if (func_1(&(Global_1806F7.f_F), 1000, 0))
    {
        if (unk_0x2700CB8907086DF3(unk_0x9DBE48BD26DE1888(Global_1806F7.f_11)))
        {
            iVar0 = unk_0xD7EB9DC48246DA95(unk_0x9DBE48BD26DE1888(Global_1806F7.f_11));
            if (unk_0xD56C8C2B75BF9665(iVar0))
            {
                if (func_12(iVar0, 1, 1) && func_714(iVar0, 6))
                {
                    if (SYSTEM::VDIST(func_38(unk_0x7C7787D2D7139A85()), func_38(iVar0)) < 80f)
                    {
                        return 1;
                    }
                }
            }
        }
        Global_1806F7.f_11++;
        if (Global_1806F7.f_11 >= 32)
        {
            Global_1806F7.f_11 = 0;
            func_46(&(Global_1806F7.f_F));
        }
    }
    return 0;
}

int func_714(int iParam0, int iParam1)//Position - 0x1A350
{
    int iVar0;
    
    if (Global_1406C0 != 0)
    {
        return 0;
    }
    if (!func_202(iParam0))
    {
        return 0;
    }
    iVar0 = iParam0;
    if (Global_1844AE[iVar0 /*871*/] == iParam1)
    {
        return 1;
    }
    return 0;
}

void func_715()//Position - 0x1A389
{
    unk_0x60F310C72311BCA8(5);
    func_717();
    unk_0xB7F4DA52DE3AAF24(1f);
    unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 8);
    func_716();
}

void func_716()//Position - 0x1A3AF
{
    if (Global_198455)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_198456, 0))
        {
            unk_0x3B76114EC84D5812(&Global_26C29F, 0);
        }
        if (unk_0xA2BC31158C8CEFD2(Global_198456, 1))
        {
            unk_0x3B76114EC84D5812(&Global_26C29F, 1);
        }
        if (unk_0xA2BC31158C8CEFD2(Global_198456, 5))
        {
            unk_0x3B76114EC84D5812(&Global_26C29F, 5);
        }
        if (unk_0xF6C55F777DC175F4(-355737150))
        {
            unk_0xF58083E4652F7505(-355737150, 1, 0, 0);
        }
        if (unk_0xF6C55F777DC175F4(-580979506))
        {
            unk_0xF58083E4652F7505(-580979506, 1, 0, 0);
        }
        if (unk_0xF6C55F777DC175F4(-1426452475))
        {
            unk_0xF58083E4652F7505(-1426452475, 1, 0, 0);
        }
        if (unk_0xF6C55F777DC175F4(745417724))
        {
            unk_0xF58083E4652F7505(745417724, 1, 0, 0);
        }
        if (unk_0xF6C55F777DC175F4(-1305304906))
        {
            unk_0xF58083E4652F7505(-1305304906, 1, 0, 0);
        }
        if (unk_0xF6C55F777DC175F4(-1543175077))
        {
            unk_0xF58083E4652F7505(-1543175077, 1, 0, 0);
        }
        if (unk_0xF6C55F777DC175F4(-811770997))
        {
            unk_0xF58083E4652F7505(-811770997, 1, 0, 0);
        }
        Global_198456 = 0;
    }
    Global_198455 = 0;
}

void func_717()//Position - 0x1A4AF
{
    if (unk_0xAB2A82A2838B61B7(Global_26A0A9.f_131E))
    {
        if (!Global_26A0A9.f_131E == unk_0x429EE9FF15BB9033() && Global_26A0A9.f_131D < 1f)
        {
            return;
        }
    }
    Global_26A0A9.f_131E = -1;
    Global_26A0A9.f_131D = 1f;
}

int func_718()//Position - 0x1A4F6
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    if (Global_26A0A9.f_127E)
    {
        return 0;
    }
    if ((!func_47(&(Local_171.f_27)) && !func_47(&(Local_171.f_29))) && !func_47(&(Local_171.f_2B)))
    {
        return 0;
    }
    iVar2 = unk_0x169A8AC9F93C2727();
    if (func_47(&(Local_171.f_29)))
    {
        iVar0 = func_719(&iVar2, &(Local_171.f_29));
        iVar1 = 20000;
    }
    else if (func_47(&(Local_171.f_27)))
    {
        iVar0 = func_719(&iVar2, &(Local_171.f_27));
        iVar1 = func_28(0);
    }
    else if (func_47(&(Local_171.f_2B)))
    {
        iVar0 = func_719(&iVar2, &(Local_171.f_2B));
        iVar1 = func_29();
    }
    iVar1 = (iVar1 + 300000);
    if (iVar0 > iVar1)
    {
        return 1;
    }
    return 0;
}

int func_719(int iParam0, var uParam1)//Position - 0x1A5B9
{
    return unk_0x25A1A0BF87F74E56(unk_0x675EE3FED67AA436(*iParam0, *uParam1));
}

int func_720()//Position - 0x1A5CF
{
    if (func_721())
    {
        return 1;
    }
    return 0;
}

bool func_721()//Position - 0x1A5E3
{
    return Global_1806F7.f_18;
}

int func_722()//Position - 0x1A5F1
{
    var uVar0;
    
    func_726(&uVar0);
    if (Global_140852 == 0)
    {
        if (!unk_0x393E9918BC37548A())
        {
            return 1;
        }
    }
    if (func_725())
    {
        return 1;
    }
    if (Global_258E39)
    {
        return 1;
    }
    if (func_724())
    {
        return 1;
    }
    if (func_723(159))
    {
        if (!func_711())
        {
            return 1;
        }
    }
    if (func_723(157))
    {
        return 1;
    }
    if (!unk_0x2A983C9CF4EE0D5E())
    {
        return 1;
    }
    if (func_414() != 0)
    {
        if (unk_0x222F76006659B0EB(func_414()) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int func_723(int iParam0)//Position - 0x1A67B
{
    if (unk_0xD076BFB919B20653(1, iParam0))
    {
        return 1;
    }
    return 0;
}

bool func_724()//Position - 0x1A692
{
    return Global_258577;
}

bool func_725()//Position - 0x1A69E
{
    return Global_255E41.f_251;
}

void func_726(var uParam0)//Position - 0x1A6AD
{
    int iVar0;
    int iVar1;
    int iVar2;
    vector3 vVar3;
    
    iVar0 = 0;
    while (iVar0 < unk_0xEC6B468B6F580489(1))
    {
        iVar1 = unk_0x87C4D2EB1080B8EA(1, iVar0);
        if (iVar1 == 174)
        {
            unk_0x3C1EC42A2CC175C5(1, iVar0, &iVar2, 2);
            switch (iVar2)
            {
                case -1773456834:
                    func_727(iVar0);
                    break;
                
                case -498955166:
                    unk_0x3C1EC42A2CC175C5(1, iVar0, &vVar3, 4);
                    if (vVar3.z == 1934809180)
                    {
                        *uParam0 = 1;
                    }
                    break;
                }
        }
        iVar0++;
    }
}

void func_727(int iParam0)//Position - 0x1A720
{
    vector3 vVar0;
    int iVar1;
    int iVar2;
    bool bVar3;
    
    if (unk_0x3C1EC42A2CC175C5(1, iParam0, &vVar0, 3))
    {
        if (func_12(vVar0.y, 1, 1))
        {
            iVar1 = unk_0x23625FE58BACEBFD(vVar0.y);
            if (unk_0xD4B321D9096B01FC(iVar1))
            {
                if (unk_0x5294582CE404D3F4(iVar1, 0))
                {
                    iVar2 = unk_0x4D57D3E5ECE15A41(iVar1, 0);
                    if (unk_0x3D65AB2C3D476E32(iVar2, vVar0.z) && unk_0xF77CF4BC35906B30())
                    {
                        if (func_728(iVar2, &bVar3))
                        {
                            unk_0x302E0AC3BB715211(iVar2, vVar0.z);
                        }
                        if (bVar3)
                        {
                            unk_0xF25956700ADFD77F(&iVar2);
                        }
                    }
                }
            }
        }
    }
}

int func_728(int iParam0, var uParam1)//Position - 0x1A7A1
{
    if (unk_0xD4B321D9096B01FC(iParam0))
    {
        if (!unk_0x00123AB82C5FAC28(iParam0))
        {
            if (unk_0xDCDE4069CE0EA4A6(iParam0))
            {
                if (!unk_0x89771D1B3DD40E7A(unk_0x7F375072508F738F(iParam0)))
                {
                    unk_0xE5C667CF3B4642D2(iParam0, 0, 1);
                    *uParam1 = 1;
                }
            }
        }
        if (unk_0x532AFD85DAA91F63(iParam0, 0))
        {
            if (unk_0x77FF1FAF6F41CA71(iParam0))
            {
                return 1;
            }
        }
    }
    return 0;
}

void func_729()//Position - 0x1A800
{
    SYSTEM::WAIT(0);
}

void func_730()//Position - 0x1A80D
{
    int iVar0;
    
    if (func_722())
    {
        Local_1538.f_5 = 5;
    }
    else if (unk_0xA2BC31158C8CEFD2(Local_171.f_2, 0))
    {
        Local_1538.f_5 = 6;
    }
    else if (func_20(0))
    {
        Local_1538.f_5 = 1;
    }
    else
    {
        Local_1538.f_5 = 2;
    }
    Local_1538 = Local_171.f_34;
    Local_1538.f_1 = Local_171.f_35;
    Local_1538.f_4 = Local_171.f_42;
    Local_1538.f_3 = Local_171.f_33;
    Local_1538.f_A = (unk_0x71EC776E812C6A0A() - Local_1538.f_9);
    if (!Global_40001.f_2CEC)
    {
        if (Local_1538.f_6 > 0)
        {
        }
    }
    if (func_18())
    {
        iVar0 = 1;
    }
    if (unk_0x393E9918BC37548A())
    {
        if (unk_0x2E40EEA43EF34BD6() != -1)
        {
            func_766(Local_1538, Local_171.f_3, Local_1537[unk_0x2E40EEA43EF34BD6() /*12*/].f_4, iVar0, -1, -1, -1);
        }
    }
    if (unk_0xA2BC31158C8CEFD2(iLocal_142, 4))
    {
        unk_0xCFF6AB47B7B014FF(iLocal_150);
        unk_0x3B76114EC84D5812(&iLocal_142, 4);
    }
    unk_0x0972EA9E8102C153(iLocal_150);
    unk_0x0972EA9E8102C153(iLocal_151);
    iVar0 = 0;
    while (iVar0 < 10)
    {
        if ((unk_0xA2BC31158C8CEFD2(iLocal_167, iVar0) && iLocal_168[iVar0] != -1) && !unk_0xDE3C2FB26058823A(iLocal_168[iVar0]))
        {
            unk_0xCFF6AB47B7B014FF(iLocal_168[iVar0]);
            unk_0x0972EA9E8102C153(iLocal_168[iVar0]);
        }
        iVar0++;
    }
    func_395();
    func_473(1, 1);
    unk_0x53B69E4722206E0C(0);
    func_545(0);
    func_402(Local_171.f_3, 0);
    func_731(133, 0, Local_171.f_25 == 6);
    func_401(23, 0);
    if (func_307() >= 0f)
    {
        unk_0xD488560A9EFC8231(0f, 0, 21);
    }
    if (!unk_0xA2BC31158C8CEFD2(iLocal_142, 9))
    {
        unk_0x76C7A02129221DEC();
    }
    unk_0x9C9E32388A7886A2();
}

void func_731(int iParam0, bool bParam1, bool bParam2)//Position - 0x1A9A9
{
    var uVar0;
    int iVar1;
    
    if (iParam0 == 0)
    {
    }
    if (unk_0x7C7787D2D7139A85() != -1)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1, 13))
        {
            unk_0x3B76114EC84D5812(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 13);
        }
        if (unk_0xA2BC31158C8CEFD2(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1, 14))
        {
            unk_0x3B76114EC84D5812(&(Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1), 14);
        }
    }
    if (unk_0xA2BC31158C8CEFD2(Global_1806F7.f_1, 21))
    {
        unk_0x3B76114EC84D5812(&(Global_1806F7.f_1), 21);
    }
    func_762();
    unk_0x70431C02FF392D24("DisableFlightMusic", 0);
    unk_0x70431C02FF392D24("WantedMusicDisabled", 0);
    if (bParam1)
    {
        uVar0 = func_761(func_321(unk_0x7C7787D2D7139A85()));
        func_401(func_421(iParam0), 0);
    }
    else
    {
        if ((bParam2 && unk_0x7C7787D2D7139A85() != -1) && func_760(unk_0x7C7787D2D7139A85()) >= 12)
        {
            func_759(2546, -1);
            iVar1 = func_208(2546, -1, 0);
            if (iVar1 == 2)
            {
                unk_0xA1E7A40E1F56E511(&Global_180711, 0);
            }
            else if (iVar1 == 4)
            {
                unk_0xA1E7A40E1F56E511(&Global_180711, 1);
            }
            else if (iVar1 == 6)
            {
                unk_0xA1E7A40E1F56E511(&Global_180711, 2);
            }
            else if (iVar1 == 8)
            {
                unk_0xA1E7A40E1F56E511(&Global_180711, 3);
            }
            else if (iVar1 == 10)
            {
                unk_0xA1E7A40E1F56E511(&Global_180711, 4);
            }
            else if (iVar1 == 12)
            {
                unk_0xA1E7A40E1F56E511(&Global_180711, 5);
            }
        }
        func_758();
        func_757();
        func_756();
        if ((!func_108(unk_0x7C7787D2D7139A85()) && !func_301(unk_0x7C7787D2D7139A85())) && !func_451())
        {
            func_740();
        }
        func_739();
        if (!unk_0xA2BC31158C8CEFD2(Global_198E64.f_3, 0) && !unk_0xA2BC31158C8CEFD2(Global_198E64.f_3, 1))
        {
            func_715();
        }
        func_738();
        unk_0x3B76114EC84D5812(&(Global_26A0A9.f_6D2), 2);
        func_737();
        func_167();
    }
    if (unk_0xCE5F730CE5D2B3B2(1344549371))
    {
        unk_0x545AD6392BF558B6(1344549371);
    }
    if (!bParam1 || uVar0)
    {
        if (((unk_0x7C7787D2D7139A85() != -1 && !func_163(unk_0x7C7787D2D7139A85(), 21)) && !func_163(unk_0x7C7787D2D7139A85(), 25)) && !func_112(unk_0x7C7787D2D7139A85(), 0))
        {
            func_409(0);
            func_407(0);
            if (!bParam1)
            {
                func_736();
            }
        }
    }
    if (bParam2 && !bParam1)
    {
        if (func_50(26, -1))
        {
            Global_258DF5 = -1;
            func_48(26, -1);
        }
    }
    if (!func_732())
    {
        Global_26432A = 1;
    }
}

int func_732()//Position - 0x1AC15
{
    if ((((((!func_655(unk_0x7C7787D2D7139A85()) && !func_636(unk_0x7C7787D2D7139A85())) && func_321(unk_0x7C7787D2D7139A85()) != 146) && !func_735()) && !func_734()) && !func_733(Global_440000.f_2E9D2)) && !func_92())
    {
        return 0;
    }
    return 1;
}

bool func_733(int iParam0)//Position - 0x1AC81
{
    return iParam0 == 57;
}

int func_734()//Position - 0x1AC8E
{
    if (Global_440000.f_25AF8 == Global_40001.f_257C)
    {
        return 1;
    }
    return 0;
}

int func_735()//Position - 0x1ACAF
{
    if ((Global_440000 == 0 && unk_0xA51CBC95AC3A4B14()) && (((((((Global_440000.f_5 != 0 || Global_440000.f_2E9D2 > 0) || unk_0xA2BC31158C8CEFD2(Global_440000.f_4, 15)) || unk_0xA2BC31158C8CEFD2(Global_440000.f_4, 18)) || unk_0xA2BC31158C8CEFD2(Global_440000.f_4, 19)) || unk_0xA2BC31158C8CEFD2(Global_440000.f_4, 29)) || unk_0xA2BC31158C8CEFD2(Global_440000.f_4, 28)) || unk_0xA2BC31158C8CEFD2(Global_440000.f_5, 23)))
    {
        return 1;
    }
    return 0;
}

void func_736()//Position - 0x1AD59
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < Global_1403FD)
    {
        if (unk_0xA2BC31158C8CEFD2(Global_2401A9[iVar0 /*26*/].f_C, 11))
        {
            if (unk_0xA2BC31158C8CEFD2(Global_2401A9[iVar0 /*26*/].f_D, 26))
            {
                unk_0x3B76114EC84D5812(&(Global_2401A9[iVar0 /*26*/].f_D), 26);
            }
        }
        iVar0++;
    }
}

void func_737()//Position - 0x1ADAF
{
    if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_127F, 1))
    {
        unk_0x3B76114EC84D5812(&(Global_26A0A9.f_127F), 1);
    }
    if (Global_26A0A9.f_127F > 0)
    {
        unk_0x81995F6F93D8C987("FM_COUNTDOWN_30S_KILL");
        unk_0x81995F6F93D8C987("FM_COUNTDOWN_30S_FIRA");
        unk_0x8E3496DF5BF7F24D("GTAO_FM_Events_30_Sec_Countdown_Scene");
        unk_0x597D844D285B9272(1);
        Global_26A0A9.f_127F = 0;
        unk_0x70431C02FF392D24("DisableFlightMusic", 0);
        unk_0x70431C02FF392D24("WantedMusicDisabled", 0);
        unk_0x70431C02FF392D24("AllowScoreAndRadio", 0);
        if (!unk_0x2553916E420E8EF0(unk_0x0037AFCBDC61F351(), "am_pi_menu"))
        {
            if (Global_26A0A9.f_1289 > -1)
            {
                unk_0x0972EA9E8102C153(Global_26A0A9.f_1289);
                Global_26A0A9.f_1289 = -1;
            }
        }
    }
}

void func_738()//Position - 0x1AE4D
{
    struct<25> Var0;
    
    Var0.f_3 = -1;
    Var0.f_4 = -1;
    Var0.f_5 = -1;
    Var0.f_15 = -1;
    Global_1806F7 = { Var0 };
}

void func_739()//Position - 0x1AE7C
{
    var uVar0;
    
    Global_1420B9 = uVar0;
}

void func_740()//Position - 0x1AE8A
{
    unk_0xD3DFD1F239A937DB(&(Global_24B2CF.f_18), &Global_24C36C, 2);
    unk_0xD3DFD1F239A937DB(&(Global_24B2CF.f_1A), &Global_24C36E, 19);
    func_754();
    func_743(1, 1, 0);
    func_741();
}

void func_741()//Position - 0x1AEC0
{
    func_742(0, 0);
}

void func_742(int iParam0, int iParam1)//Position - 0x1AECE
{
    Global_24B2CF.f_16 = iParam0;
    Global_24B2CF.f_17 = iParam1;
}

void func_743(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1AEE6
{
    if (bParam1)
    {
        unk_0xD3DFD1F239A937DB(&(Global_24B2CF.f_2D), &Global_24C381, 318);
    }
    else
    {
        Global_24B2CF.f_2D = { Global_24C381 };
        Global_24B2CF.f_2D.f_31 = { Global_24C381.f_31 };
        Global_24B2CF.f_2D.f_34 = Global_24C381.f_34;
        Global_24B2CF.f_2D.f_35 = Global_24C381.f_35;
    }
    if (bParam0)
    {
        func_753();
    }
    if (!bParam2)
    {
        func_745(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
    }
    func_744(0);
    func_170();
}

void func_744(bool bParam0)//Position - 0x1AF8C
{
    if (bParam0)
    {
        Global_24B2CF.f_2BF = 0;
    }
    else
    {
        Global_24B2CF.f_2BF = 1;
    }
}

void func_745(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x1AFAC
{
    if (bParam0)
    {
        if (func_752())
        {
            func_751();
        }
        Global_24B2CF.f_2C0.f_206 = unk_0x429EE9FF15BB9033();
        Global_24B2CF.f_2C0.f_1F8 = iParam1;
        Global_24B2CF.f_2C0.f_1F9 = iParam2;
        Global_24B2CF.f_2C0.f_1FA = iParam10;
        func_749();
        func_449(8, 0, 0, 0, 0);
        Global_24B2CF.f_2C0.f_1FB = iParam11;
        Global_24B2CF.f_2C0.f_200 = iParam3;
        Global_24B2CF.f_2C0.f_201 = iParam4;
        Global_24B2CF.f_2C0.f_1FE = iParam5;
        Global_24B2CF.f_2C0.f_1FF = iParam6;
        Global_24B2CF.f_2C0.f_202 = iParam7;
        Global_24B2CF.f_2C0.f_203 = iParam8;
        Global_24B2CF.f_2C0.f_204 = iParam9;
        Global_24B2CF.f_2C0.f_205 = iParam14;
        Global_24B2CF.f_2C0.f_1FC = iParam12;
        Global_24B2CF.f_2C0.f_1FD = iParam13;
        Global_24B2CF.f_6CF = 1;
    }
    else
    {
        func_746();
    }
}

void func_746()//Position - 0x1B097
{
    if (func_752() && !func_748())
    {
        func_751();
    }
    if (func_748())
    {
        func_747();
    }
    else
    {
        func_749();
        func_449(0, 0, 0, 0, 0);
        Global_24B2CF.f_6CF = 0;
        Global_24B2CF.f_6CE = 0;
    }
}

void func_747()//Position - 0x1B0DF
{
    unk_0xD3DFD1F239A937DB(&(Global_24B2CF.f_2C0), &(Global_24B2CF.f_4C7), 519);
    Global_24B2CF.f_1E5 = { Global_24B2CF.f_1EB };
    if (unk_0x429EE9FF15BB9033() == Global_24B2CF.f_2C0.f_206)
    {
        Global_24B2CF.f_6CE = 0;
    }
}

int func_748()//Position - 0x1B127
{
    if ((Global_24B2CF.f_6CE && !unk_0x429EE9FF15BB9033() == Global_24B2CF.f_4C7.f_206) && unk_0xAB2A82A2838B61B7(Global_24B2CF.f_4C7.f_206))
    {
        return 1;
    }
    return 0;
}

void func_749()//Position - 0x1B166
{
    if (func_752() && !func_748())
    {
        func_751();
    }
    func_750();
    Global_24B2CF.f_2C0 = 0;
}

void func_750()//Position - 0x1B18F
{
    int iVar0;
    struct<5> Var1;
    
    Var1.f_4 = 1065353216;
    iVar0 = 0;
    while (iVar0 < 100)
    {
        Global_24B2CF.f_2C0.f_1[iVar0 /*5*/] = { Var1 };
        iVar0++;
    }
}

void func_751()//Position - 0x1B1CA
{
    if (func_748())
    {
        if (Global_24B2CF.f_2C0.f_206 == Global_24B2CF.f_4C7.f_206)
        {
            return;
        }
    }
    if (!unk_0x429EE9FF15BB9033() == Global_24B2CF.f_2C0.f_206)
    {
        unk_0xD3DFD1F239A937DB(&(Global_24B2CF.f_4C7), &(Global_24B2CF.f_2C0), 519);
        Global_24B2CF.f_1EB = { Global_24B2CF.f_1E5 };
        Global_24B2CF.f_6CE = 1;
    }
}

int func_752()//Position - 0x1B238
{
    if ((Global_24B2CF.f_6CF && !unk_0x429EE9FF15BB9033() == Global_24B2CF.f_2C0.f_206) && unk_0xAB2A82A2838B61B7(Global_24B2CF.f_2C0.f_206))
    {
        return 1;
    }
    return 0;
}

void func_753()//Position - 0x1B277
{
    unk_0xD3DFD1F239A937DB(&(Global_24B2CF.f_16B), &Global_24C4BF, 121);
}

void func_754()//Position - 0x1B290
{
    func_755();
    Global_24B2CF.f_8CC = 0;
}

void func_755()//Position - 0x1B2A4
{
    int iVar0;
    struct<4> Var1;
    
    iVar0 = 0;
    while (iVar0 < 50)
    {
        Global_24B2CF.f_8CD[iVar0 /*4*/] = { Var1 };
        iVar0++;
    }
}

void func_756()//Position - 0x1B2D0
{
    Global_26A0A9.f_1280 = 0;
}

void func_757()//Position - 0x1B2E0
{
    if (unk_0x7C7787D2D7139A85() != -1)
    {
        Global_18DB1B[unk_0x7C7787D2D7139A85() /*614*/].f_1 = 0;
    }
}

void func_758()//Position - 0x1B2FE
{
    int iVar0;
    
    iVar0 = unk_0x7C7787D2D7139A85();
    if (iVar0 != -1)
    {
        Global_18DB1B[iVar0 /*614*/] = -1;
    }
}

void func_759(int iParam0, int iParam1)//Position - 0x1B31C
{
    int iVar0;
    
    iVar0 = func_208(iParam0, func_203(iParam1), 0);
    iVar0++;
    if (!func_207(iParam0))
    {
        func_198(iParam0, iVar0, iParam1, 1, 0);
    }
    else
    {
        func_199(iParam0, iVar0, iParam1, 1);
    }
}

int func_760(int iParam0)//Position - 0x1B35D
{
    return Global_1844AE[iParam0 /*871*/].f_D3.f_6;
}

int func_761(int iParam0)//Position - 0x1B372
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
            if (func_412(unk_0x7C7787D2D7139A85()))
            {
                return 1;
            }
            break;
    }
    return 0;
}

void func_762()//Position - 0x1B3D4
{
    if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_6C7, 3) || unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_6C7, 4))
    {
        if (unk_0x260395BA7F0C83CB() || unk_0xA710300CD13D2877())
        {
            unk_0xCF33E56642B34516(800);
        }
    }
    if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_6C7, 5))
    {
        unk_0x3B76114EC84D5812(&(Global_26A0A9.f_6C7), 5);
    }
    if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_6C7, 3))
    {
        unk_0x3B76114EC84D5812(&(Global_26A0A9.f_6C7), 3);
    }
    if (unk_0xA2BC31158C8CEFD2(Global_26A0A9.f_6C7, 4))
    {
        unk_0x3B76114EC84D5812(&(Global_26A0A9.f_6C7), 4);
    }
    func_765(0);
    func_764(0);
    func_763(0);
}

void func_763(int iParam0)//Position - 0x1B475
{
    if (Global_26A0A9.f_11A8 != iParam0)
    {
        Global_26A0A9.f_11A8 = iParam0;
    }
}

void func_764(bool bParam0)//Position - 0x1B492
{
    if (Global_26A0A9.f_11A7 != bParam0)
    {
        if (bParam0)
        {
        }
        Global_26A0A9.f_11A7 = bParam0;
    }
}

void func_765(int iParam0)//Position - 0x1B4B7
{
    if (Global_26A0A9.f_11A5 != iParam0)
    {
        Global_26A0A9.f_11A5 = iParam0;
    }
}

void func_766(struct<12> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1B4D4
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
    
    sVar0 = unk_0x0037AFCBDC61F351();
    if (Param0.f_9 == 0)
    {
        Param0.f_A = 0;
    }
    if (Param0.f_8 > Param0.f_9)
    {
        Param0.f_8 = Param0.f_9;
    }
    if (Global_12B21)
    {
        if (unk_0x2553916E420E8EF0(sVar0, "am_hot_target"))
        {
            Var1 = { Param0 };
            Var1.f_C = uParam1;
            unk_0x810C484A087C3042(&Var1);
        }
        else if (unk_0x2553916E420E8EF0(sVar0, func_767()))
        {
            Var2 = { Param0 };
            Var2.f_C = uParam1;
            Var2.f_D = iParam2;
            unk_0xFB33DABCFB43A8EF(&Var2);
        }
        else if (unk_0x2553916E420E8EF0(sVar0, "am_cp_collection"))
        {
            Var3 = { Param0 };
            Var3.f_C = uParam1;
            Var3.f_D = iParam2;
            Var3.f_E = iParam3;
            Var3.f_F = iParam4;
            Var3.f_10 = iParam5;
            Var3.f_11 = iParam6;
            unk_0x7F6382D827BD9C07(&Var3);
        }
        else if (unk_0x2553916E420E8EF0(sVar0, "am_challenges"))
        {
            Var4 = { Param0 };
            Var4.f_C = uParam1;
            Var4.f_D = SYSTEM::TO_FLOAT(iParam2);
            if (iParam3 == 1)
            {
                Var4.f_D = (Var4.f_D / 10f);
            }
            unk_0x06D386BCE22EF5BF(&Var4);
        }
        else if (unk_0x2553916E420E8EF0(sVar0, "am_penned_in"))
        {
            unk_0x0EF81B156D425380(&Param0);
        }
        else if (unk_0x2553916E420E8EF0(sVar0, "am_pass_the_parcel"))
        {
            Var5 = { Param0 };
            Var5.f_C = uParam1;
            unk_0x025486AF8C0DB17E(&Var5);
        }
        else if (unk_0x2553916E420E8EF0(sVar0, "am_hot_property"))
        {
            Var6 = { Param0 };
            Var6.f_C = uParam1;
            Var6.f_D = iParam2;
            unk_0xF1C4981FBCAD9EA4(&Var6);
        }
        else if (unk_0x2553916E420E8EF0(sVar0, "am_dead_drop"))
        {
            Var7 = { Param0 };
            Var7.f_C = uParam1;
            Var7.f_D = iParam2;
            unk_0x03C7E03F649AA413(&Var7);
        }
        else if (unk_0x2553916E420E8EF0(sVar0, "am_king_of_the_castle"))
        {
            Var8 = { Param0 };
            Var8.f_C = uParam1;
            Var8.f_D = iParam2;
            Var8.f_E = iParam3;
            Var8.f_F = iParam4;
            unk_0xFE31CFF883023A7D(&Var8);
        }
        else if (unk_0x2553916E420E8EF0(sVar0, "AM_CRIMINAL_DAMAGE"))
        {
            Var9 = { Param0 };
            Var9.f_C = uParam1;
            unk_0x8000E4289D8A77C5(&Var9);
        }
        else if (unk_0x2553916E420E8EF0(sVar0, "AM_KILL_LIST"))
        {
            if (iParam3 == 0)
            {
                Var10 = { Param0 };
                Var10.f_C = uParam1;
                Var10.f_D = iParam2;
                unk_0x8B02E3FF6F2D8B3D(&Var10);
            }
            else
            {
                Var11 = { Param0 };
                Var11.f_C = uParam1;
                Var11.f_D = iParam2;
                unk_0xFC3F784B5E1FB53F(&Var11);
            }
        }
        else if (unk_0x2553916E420E8EF0(sVar0, "am_hunt_the_beast"))
        {
            Var12 = { Param0 };
            Var12.f_C = uParam1;
            unk_0x7B89749159C363EC(&Var12);
        }
    }
}

char* func_767()//Position - 0x1B749
{
    switch (Global_258E9F)
    {
        case 0:
            return "freemode";
        
        default:
    }
    return "freemode";
}

int func_768(struct<21> Param0)//Position - 0x1B76B
{
    int iVar0;
    
    func_777(func_778(Param0), Param0);
    unk_0x58B4DE842733F8D9(func_776(9));
    unk_0xA019A9258930EC41(func_775(9));
    func_772(0, -1, 0);
    func_770(133);
    unk_0xCCD47D736BFD5DE3(&Local_171, 88);
    unk_0xFF584A1B7842F821(&Local_1537, 385);
    if (!func_769())
    {
        func_730();
    }
    if (unk_0x722688699565161D())
    {
        unk_0x3B462AFBC888A3F1(&(Local_171.f_34), &(Local_171.f_35));
    }
    Local_1538.f_2 = unk_0xABA4FE93FAF93E28();
    unk_0x50E03C7D74E352C4(0);
    iVar0 = 0;
    while (iVar0 < 10)
    {
        iLocal_168[iVar0] = -1;
        iVar0++;
    }
    return 1;
}

int func_769()//Position - 0x1B803
{
    int iVar0;
    
    iVar0 = 0;
    while (true)
    {
        iVar0++;
        if (!unk_0x393E9918BC37548A())
        {
            return 0;
        }
        if (unk_0x7A22E0DA3B8BAF4B())
        {
            return 1;
        }
        if (func_725())
        {
            return 0;
        }
        if (func_723(157))
        {
            return 0;
        }
        if (iVar0 >= 3600)
        {
            return 0;
        }
        SYSTEM::WAIT(0);
    }
    return 0;
}

void func_770(int iParam0)//Position - 0x1B85C
{
    func_738();
    func_771();
    func_756();
    Global_1806F7.f_4 = iParam0;
    Global_1806F7.f_5 = iParam0;
    func_420(iParam0, -1);
    func_27(&(Global_1806F7.f_12), 0, 0);
    Global_26A0A9.f_11EC = 0;
    Global_2589A2[0] = func_102();
    Global_2589A2[1] = func_102();
    Global_2589A2[2] = func_102();
    Global_2589A2[3] = func_102();
    Global_2589A2[4] = func_102();
    func_167();
    if (!func_557(func_290()))
    {
        func_289();
    }
    if (func_165() && !func_164())
    {
        unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 16);
    }
    else
    {
        unk_0xA1E7A40E1F56E511(&(Global_1806F7.f_1), 17);
    }
}

void func_771()//Position - 0x1B912
{
    var uVar0;
    
    Global_180710 = uVar0;
}

int func_772(int iParam0, int iParam1, bool bParam2)//Position - 0x1B920
{
    int iVar0;
    
    iVar0 = unk_0x306B26A377F9A5BE();
    while (iVar0 != 2)
    {
        if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
        {
            if (!bParam2)
            {
                func_774();
            }
            else
            {
                return 0;
            }
        }
        if (!func_773())
        {
            if (iParam0 == 0)
            {
                if (!unk_0x393E9918BC37548A())
                {
                    if (!bParam2)
                    {
                        func_774();
                    }
                    else
                    {
                        return 0;
                    }
                }
                if (func_725())
                {
                    if (!bParam2)
                    {
                        func_774();
                    }
                    else
                    {
                        return 0;
                    }
                }
                if (func_723(157))
                {
                    if (!bParam2)
                    {
                        func_774();
                    }
                    else
                    {
                        return 0;
                    }
                }
            }
            else if (!unk_0xA2E986F74092E569())
            {
                if (!bParam2)
                {
                    func_774();
                }
                else
                {
                    return 0;
                }
            }
        }
        SYSTEM::WAIT(0);
        iVar0 = unk_0x306B26A377F9A5BE();
    }
    if (iParam1 > -1)
    {
        Global_1406F5 = iVar0;
    }
    if (iParam0 == 0)
    {
        if (!unk_0x393E9918BC37548A())
        {
            if (!bParam2)
            {
                func_774();
            }
            else
            {
                return 0;
            }
        }
    }
    else if (!unk_0xA2E986F74092E569())
    {
        if (!bParam2)
        {
            func_774();
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

bool func_773()//Position - 0x1BA35
{
    return Global_140852;
}

void func_774()//Position - 0x1BA41
{
    unk_0x9C9E32388A7886A2();
}

int func_775(int iParam0)//Position - 0x1BA4D
{
    switch (iParam0)
    {
        case 0:
            return 1;
        
        case 1:
            return 1;
        
        case 2:
            return 1;
        
        case 3:
            return 1;
        
        case 4:
            return 1;
        
        case 5:
            return 1;
        
        case 6:
            return 0;
        
        case 7:
            return 1;
        
        case 8:
            return 10;
        
        case 9:
            return 10;
        
        case 10:
            return 1;
        
        case 11:
            return 6;
        
        case 12:
            return 0;
        
        case 13:
            return 1;
        
        case 14:
            return 0;
        
        case 15:
            return 0;
        
        case 16:
            return 0;
        
        case 17:
            return 0;
        
        case 18:
            return 0;
        
        case 19:
            return 0;
        
        default:
    }
    return 0;
}

int func_776(int iParam0)//Position - 0x1BB27
{
    switch (iParam0)
    {
        case 0:
            return 0;
        
        case 1:
            return 3;
        
        case 2:
            return 1;
        
        case 3:
            return 0;
        
        case 4:
            return 0;
        
        case 5:
            return 0;
        
        case 6:
            return 0;
        
        case 7:
            return 0;
        
        case 8:
            return 0;
        
        case 9:
            return 0;
        
        case 10:
            return 0;
        
        case 11:
            return 0;
        
        case 12:
            return 0;
        
        case 13:
            return 0;
        
        case 14:
            return 1;
        
        case 15:
            return 1;
        
        case 16:
            return 0;
        
        case 17:
            return 0;
        
        case 18:
            return 0;
        
        case 19:
            return 0;
        
        default:
    }
    return 0;
}

void func_777(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1BBFF
{
    if (!unk_0x393E9918BC37548A())
    {
        func_774();
    }
    unk_0x4CF6FBF2580A447D(iParam0, 0, Param1.f_10);
}

int func_778(int iParam0)//Position - 0x1BC1E
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
        
        case 79:
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
            return 32;
        
        case 87:
            return 32;
        
        case 88:
            return 32;
        
        case 89:
            return 32;
        
        case 90:
            return 8;
        
        case 91:
            return 32;
        
        case 92:
            return 8;
        
        case 93:
            return 8;
        
        case 101:
            return 8;
        
        case 94:
            return 8;
        
        case 95:
            return 32;
        
        case 96:
            return 32;
        
        case 97:
            return 32;
        
        case 98:
            return 8;
        
        case 99:
            return 32;
        
        case 100:
            return 32;
        
        case 102:
            return 32;
        
        case 103:
            return 32;
        
        case 104:
            return 32;
        
        case 105:
            return 8;
        
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
            return 32;
        
        case 114:
            return 8;
        
        case 115:
            return 8;
        
        case 116:
            return 8;
        
        case 117:
            return 8;
        
        case 118:
            return 32;
        
        case 119:
            return 32;
        
        case 120:
            return 32;
        
        case 121:
            return 32;
        
        case 122:
            return 8;
        
        case 123:
            return 8;
        
        case 124:
            return 8;
        
        case 125:
            return 8;
        
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
        
        case 126:
            return 32;
        
        case 127:
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
        
        case 138:
            return 32;
        
        case 139:
            return 32;
        
        case 128:
            return 32;
        
        case 129:
            return 32;
        
        case 133:
            return 32;
        
        case 131:
            return 32;
        
        case 132:
            return 32;
        
        case 136:
            return 32;
        
        case 137:
            return 32;
        
        case 134:
            return 32;
        
        case 135:
            return 32;
        
        case 140:
            return 32;
        
        case 141:
            return 32;
        
        case 142:
            return 32;
        
        case 143:
            return 32;
        
        case 144:
            return 2;
        
        case 149:
            return 1;
        
        case 145:
            return 2;
        
        case 146:
            return 4;
        
        case 147:
            return 2;
        
        case 148:
            return 2;
        
        case 130:
            return 1;
        
        case 150:
            return 2;
        
        case 151:
        case 152:
        case 153:
        case 154:
        case 155:
        case 156:
            return 0;
        
        case 170:
            return 1;
        
        case 157:
            return 4;
        
        case 160:
            return 4;
        
        case 161:
            return 1;
        
        case 162:
            return 1;
        
        case 168:
            return 1;
        
        case 164:
            return 2;
        
        case 169:
            return 1;
        
        case 165:
            return 1;
        
        case 163:
            return 2;
        
        case 166:
            return 8;
        
        case 167:
            return 8;
        
        case 158:
            return 16;
        
        case 159:
            return 32;
        
        default:
    }
    return 0;
}

