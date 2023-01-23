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
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_88[130] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	var uLocal_92[4] = { 0, 0, 0, 0 };
	var uLocal_93[4] = { 0, 0, 0, 0 };
	int iLocal_94[4] = { 0, 0, 0, 0 };
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	struct<3> Local_104[130];
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	int iLocal_115[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_116 = 0;
	int iLocal_117[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	struct<2> Local_120 = { -1, -1 } ;
	struct<730> Local_121 = { 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10 } ;
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
	struct<535> Local_142 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32 } ;
	var uLocal_143 = -1;
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
	var uLocal_165 = -1082130432;
	var uLocal_166 = 3;
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
	var uLocal_182 = -1;
	var uLocal_183 = 0;
	var uLocal_184 = -1;
	var uLocal_185 = -1;
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
	var uLocal_207 = -1082130432;
	var uLocal_208 = 3;
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
	var uLocal_224 = -1;
	var uLocal_225 = 0;
	var uLocal_226 = -1;
	var uLocal_227 = -1;
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
	var uLocal_249 = -1082130432;
	var uLocal_250 = 3;
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
	var uLocal_266 = -1;
	var uLocal_267 = 0;
	var uLocal_268 = -1;
	var uLocal_269 = -1;
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
	var uLocal_291 = -1082130432;
	var uLocal_292 = 3;
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
	var uLocal_308 = -1;
	var uLocal_309 = 0;
	var uLocal_310 = -1;
	var uLocal_311 = -1;
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
	var uLocal_333 = -1082130432;
	var uLocal_334 = 3;
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
	var uLocal_350 = -1;
	var uLocal_351 = 0;
	var uLocal_352 = -1;
	var uLocal_353 = -1;
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
	var uLocal_375 = -1082130432;
	var uLocal_376 = 3;
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
	var uLocal_392 = -1;
	var uLocal_393 = 0;
	var uLocal_394 = -1;
	var uLocal_395 = -1;
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
	var uLocal_417 = -1082130432;
	var uLocal_418 = 3;
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
	var uLocal_434 = -1;
	var uLocal_435 = 0;
	var uLocal_436 = -1;
	var uLocal_437 = -1;
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
	var uLocal_459 = -1082130432;
	var uLocal_460 = 3;
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
	var uLocal_476 = -1;
	var uLocal_477 = 0;
	var uLocal_478 = -1;
	var uLocal_479 = -1;
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
	var uLocal_501 = -1082130432;
	var uLocal_502 = 3;
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
	var uLocal_518 = -1;
	var uLocal_519 = 0;
	var uLocal_520 = -1;
	var uLocal_521 = -1;
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
	var uLocal_543 = -1082130432;
	var uLocal_544 = 3;
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
	var uLocal_560 = -1;
	var uLocal_561 = 0;
	var uLocal_562 = -1;
	var uLocal_563 = -1;
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
	var uLocal_585 = -1082130432;
	var uLocal_586 = 3;
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
	var uLocal_602 = -1;
	var uLocal_603 = 0;
	var uLocal_604 = -1;
	var uLocal_605 = -1;
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
	var uLocal_627 = -1082130432;
	var uLocal_628 = 3;
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
	var uLocal_644 = -1;
	var uLocal_645 = 0;
	var uLocal_646 = -1;
	var uLocal_647 = -1;
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
	var uLocal_669 = -1082130432;
	var uLocal_670 = 3;
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
	var uLocal_686 = -1;
	var uLocal_687 = 0;
	var uLocal_688 = -1;
	var uLocal_689 = -1;
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
	var uLocal_711 = -1082130432;
	var uLocal_712 = 3;
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
	var uLocal_728 = -1;
	var uLocal_729 = 0;
	var uLocal_730 = -1;
	var uLocal_731 = -1;
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
	var uLocal_753 = -1082130432;
	var uLocal_754 = 3;
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
	var uLocal_770 = -1;
	var uLocal_771 = 0;
	var uLocal_772 = -1;
	var uLocal_773 = -1;
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
	var uLocal_795 = -1082130432;
	var uLocal_796 = 3;
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
	var uLocal_812 = -1;
	var uLocal_813 = 0;
	var uLocal_814 = -1;
	var uLocal_815 = -1;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
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
	var uLocal_837 = -1082130432;
	var uLocal_838 = 3;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = -1;
	var uLocal_855 = 0;
	var uLocal_856 = -1;
	var uLocal_857 = -1;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
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
	var uLocal_879 = -1082130432;
	var uLocal_880 = 3;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = -1;
	var uLocal_897 = 0;
	var uLocal_898 = -1;
	var uLocal_899 = -1;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
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
	var uLocal_921 = -1082130432;
	var uLocal_922 = 3;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = -1;
	var uLocal_939 = 0;
	var uLocal_940 = -1;
	var uLocal_941 = -1;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
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
	var uLocal_963 = -1082130432;
	var uLocal_964 = 3;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = -1;
	var uLocal_981 = 0;
	var uLocal_982 = -1;
	var uLocal_983 = -1;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
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
	var uLocal_1005 = -1082130432;
	var uLocal_1006 = 3;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = -1;
	var uLocal_1023 = 0;
	var uLocal_1024 = -1;
	var uLocal_1025 = -1;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
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
	var uLocal_1047 = -1082130432;
	var uLocal_1048 = 3;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = -1;
	var uLocal_1065 = 0;
	var uLocal_1066 = -1;
	var uLocal_1067 = -1;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
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
	var uLocal_1089 = -1082130432;
	var uLocal_1090 = 3;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = -1;
	var uLocal_1107 = 0;
	var uLocal_1108 = -1;
	var uLocal_1109 = -1;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
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
	var uLocal_1131 = -1082130432;
	var uLocal_1132 = 3;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = -1;
	var uLocal_1149 = 0;
	var uLocal_1150 = -1;
	var uLocal_1151 = -1;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
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
	var uLocal_1173 = -1082130432;
	var uLocal_1174 = 3;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = -1;
	var uLocal_1191 = 0;
	var uLocal_1192 = -1;
	var uLocal_1193 = -1;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
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
	var uLocal_1215 = -1082130432;
	var uLocal_1216 = 3;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = -1;
	var uLocal_1233 = 0;
	var uLocal_1234 = -1;
	var uLocal_1235 = -1;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
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
	var uLocal_1257 = -1082130432;
	var uLocal_1258 = 3;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = -1;
	var uLocal_1275 = 0;
	var uLocal_1276 = -1;
	var uLocal_1277 = -1;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
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
	var uLocal_1299 = -1082130432;
	var uLocal_1300 = 3;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = -1;
	var uLocal_1317 = 0;
	var uLocal_1318 = -1;
	var uLocal_1319 = -1;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
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
	var uLocal_1341 = -1082130432;
	var uLocal_1342 = 3;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = -1;
	var uLocal_1359 = 0;
	var uLocal_1360 = -1;
	var uLocal_1361 = -1;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
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
	var uLocal_1383 = -1082130432;
	var uLocal_1384 = 3;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = -1;
	var uLocal_1401 = 0;
	var uLocal_1402 = -1;
	var uLocal_1403 = -1;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
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
	var uLocal_1425 = -1082130432;
	var uLocal_1426 = 3;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = -1;
	var uLocal_1443 = 0;
	var uLocal_1444 = -1;
	var uLocal_1445 = -1;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
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
	var uLocal_1467 = -1082130432;
	var uLocal_1468 = 3;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = -1;
	var uLocal_1485 = 0;
	var uLocal_1486 = -1;
	struct<12> Local_1487 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_1488[32];
	struct<21> Local_1489 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0.05f + 0.275f) - 0.01f);
	if (unk_0x25DDB354A40FFCDB())
	{
		if (!func_731(ScriptParam_1489))
		{
			func_693();
		}
	}
	while (true)
	{
		func_692();
		if (func_685() || func_683())
		{
			func_693();
		}
		func_656();
		switch (func_655(unk_0x1EF8FCAB83E4BE53()))
		{
			case 0:
				if (func_654() == 1)
				{
					if (func_652())
					{
						func_651(unk_0x1EF8FCAB83E4BE53(), 1);
					}
				}
				break;
			
			case 1:
				if (func_654() == 1)
				{
					func_138();
					func_126();
				}
				else if (func_654() == 3)
				{
					func_651(unk_0x1EF8FCAB83E4BE53(), 3);
				}
				break;
			
			case 3:
				func_693();
				break;
		}
		if (unk_0xAFF96FDC3971E7EA())
		{
			switch (func_654())
			{
				case 0:
					if (func_109())
					{
						func_108(1);
					}
					break;
				
				case 1:
					if (Local_121.f_8 == 6)
					{
						func_108(2);
					}
					else
					{
						func_3();
					}
					break;
				
				case 2:
					if (func_1(&uLocal_102, 1000, 0))
					{
						func_108(3);
					}
					break;
				
				case 3:
					func_693();
					break;
				}
		}
	}
}

int func_1(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_2(uParam0, bParam2, 0);
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

void func_2(var uParam0, bool bParam1, bool bParam2)
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

void func_3()
{
	if (func_35(2, 0, 0, 0, 0))
	{
		if (!unk_0xCE990E643CD9D0E5(Local_121.f_2, 2))
		{
			Local_121.f_1 = unk_0x6CAAB7E78B5D978A();
			unk_0xBE20AB8238688965(&(Local_121.f_2), 2);
		}
	}
	switch (Local_121.f_8)
	{
		case 0:
			if (func_34())
			{
				if (func_24())
				{
					func_23(1);
				}
			}
			else
			{
				func_23(1);
			}
			break;
		
		case 1:
			if (func_1(&(Local_121.f_667), Global_262145.f_11122, 0) || unk_0xCE990E643CD9D0E5(Local_121.f_2, 2))
			{
				func_23(2);
			}
			func_24();
			break;
		
		case 2:
			Local_121.f_9 = unk_0x6CAAB7E78B5D978A();
			func_23(3);
			break;
		
		case 3:
			if ((func_22() || func_1(&(Local_121.f_661), Global_262145.f_11121, 0)) || unk_0xCE990E643CD9D0E5(Local_121.f_2, 2))
			{
				if (!unk_0xCE990E643CD9D0E5(Local_121.f_2, 1) && func_21())
				{
					func_20(&(Local_121.f_661), 0, 0);
					unk_0xBE20AB8238688965(&(Local_121.f_2), 1);
				}
				else
				{
					func_23(4);
					Local_121.f_1 = unk_0x6CAAB7E78B5D978A();
				}
			}
			func_8();
			iLocal_83++;
			if (iLocal_83 >= Local_121.f_709)
			{
				iLocal_83 = 0;
			}
			func_24();
			break;
		
		case 4:
			if (func_1(&(Local_121.f_663), 20000, 0) || func_5())
			{
				if (func_34())
				{
					func_20(&(Local_121.f_669), 0, 0);
					func_23(5);
				}
				else
				{
					func_23(6);
				}
			}
			func_24();
			break;
		
		case 5:
			if (func_4())
			{
				func_23(6);
			}
			break;
		
		case 6:
			break;
	}
}

int func_4()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0x3D70CCF2C9B362CD(Local_121.f_729[iVar0 /*2*/].f_1) && !unk_0xA59F96B50B97E63C(unk_0x62D2FF718BC7717D(Local_121.f_729[iVar0 /*2*/].f_1), 0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_5()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
		{
			iVar1 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar0));
			if (!func_6(iVar1))
			{
				if ((!unk_0xCE990E643CD9D0E5(Local_1488[iVar0 /*5*/].f_2, 0) || Local_1488[iVar0 /*5*/].f_3 != 6) || (unk_0xCE990E643CD9D0E5(Local_121.f_2, 0) && !unk_0xCE990E643CD9D0E5(Local_1488[iVar0 /*5*/].f_2, 1)))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_6(int iParam0)
{
	if (func_7(iParam0))
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 8);
}

bool func_7(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 2);
}

void func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0;
	while (iVar2 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar2)))
		{
			unk_0xBE20AB8238688965(&iVar3, iVar2);
		}
		else
		{
			func_19(iVar2);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xCE990E643CD9D0E5(iVar3, iVar2))
		{
			if (func_18(iVar2))
			{
				iVar1++;
			}
			iVar0++;
			func_15(iVar2);
			func_9(iVar2);
			unk_0xBE20AB8238688965(&(Local_121.f_673), iVar2);
		}
		iVar2++;
	}
	if (iVar0 > Local_121.f_727)
	{
		Local_121.f_727 = iVar0;
	}
	else
	{
		Local_121.f_726 = (Local_121.f_727 - iVar0);
	}
	if (iVar1 > Local_121.f_728)
	{
		Local_121.f_728 = iVar1;
	}
}

void func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Local_1488[iParam0 /*5*/].f_4;
	iVar2 = -2;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (Local_121.f_674[iVar1] == iParam0)
		{
			iVar1 = 32;
		}
		else if (iVar2 >= -1)
		{
			if (iVar2 >= 0)
			{
				func_14(&(Local_121.f_674[iVar1]), &iVar2);
			}
		}
		else if (Local_121.f_674[iVar1] < 0 || iVar0 > Local_1488[Local_121.f_674[iVar1] /*5*/].f_4)
		{
			iVar2 = Local_121.f_674[iVar1];
			if (iVar0 != 0)
			{
				func_10(Local_121.f_674[iVar1], iParam0, iVar1);
			}
			Local_121.f_674[iVar1] = iParam0;
			iVar3 = iVar1 + 1;
			while (iVar3 <= 31)
			{
				if (Local_121.f_674[iVar3] == iParam0)
				{
					Local_121.f_674[iVar3] = -1;
				}
				iVar3++;
			}
		}
		iVar1++;
	}
}

void func_10(var uParam0, int iParam1, int iParam2)
{
	struct<14> Var0;
	int iVar1;
	
	iVar1 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iParam1));
	if (iParam2 == 0)
	{
		Var0.f_2 = 636452783;
		Var0.f_10 = iVar1;
		func_11(Var0, func_12(1));
	}
}

void func_11(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = -1949011582;
	Param0.f_1 = unk_0x460153A63B9477BC();
	if (!iParam13 == 0)
	{
		unk_0xB802750B43D4047C(1, &Param0, 14, iParam13);
	}
}

int func_12(int iParam0)
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
			if (func_13(iVar2, 0, 0))
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

int func_13(int iParam0, bool bParam1, bool bParam2)
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

void func_14(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + *iParam1);
	*iParam1 = (*uParam0 - *iParam1);
	*uParam0 = (*uParam0 - *iParam1);
}

void func_15(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iParam0));
	iVar0 = iVar3;
	if (Global_2540384.f_5036.f_38[iVar0] >= 0)
	{
		iVar4 = Global_2540384.f_5036.f_38[iVar0];
		iVar1 = Global_2540384.f_5036.f_5[iVar0];
		if (!unk_0xCE990E643CD9D0E5(Local_121.f_3[func_17(iVar4)], func_16(iVar4)))
		{
			if (unk_0xCE990E643CD9D0E5(Global_2540384.f_5036[func_17(iVar4)], func_16(iVar4)))
			{
				if (func_1(&uLocal_100, 750, 0))
				{
					if (iVar1 != 0)
					{
						if (iVar1 < iVar2 || iVar2 == 0)
						{
							iVar2 = iVar1;
							Local_121.f_10[iVar4 /*5*/].f_3 = iParam0;
							Global_2540384.f_5036.f_38[iVar0] = -1;
							unk_0xBE20AB8238688965(&(Local_121.f_3[func_17(iVar4)]), func_16(iVar4));
							Local_121.f_708 = (Local_121.f_708 - 1);
						}
					}
				}
			}
		}
	}
}

int func_16(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_17(iParam0) * 31);
}

int func_17(int iParam0)
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

int func_18(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 32)
	{
		return Local_1488[iParam0 /*5*/].f_4 > 0;
	}
	return 0;
}

void func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xCE990E643CD9D0E5(Local_121.f_673, iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (Local_121.f_674[iVar0] == iParam0)
			{
				Local_121.f_674[iVar0] = -1;
				iVar0 = 32;
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < Local_121.f_709)
		{
			if (Local_121.f_10[iVar1 /*5*/].f_3 == iParam0)
			{
				Local_121.f_10[iVar1 /*5*/].f_3 = -1;
			}
			iVar1++;
		}
		unk_0xD2459066EA58CE43(&(Local_121.f_673), iParam0);
	}
}

void func_20(var uParam0, bool bParam1, bool bParam2)
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

int func_21()
{
	return 0;
}

int func_22()
{
	if (Local_121.f_708 > 0)
	{
		return 0;
	}
	if (func_1(&(Local_121.f_671), 750, 0))
	{
		unk_0xBE20AB8238688965(&(Local_121.f_2), 0);
		return 1;
	}
	return 0;
}

void func_23(int iParam0)
{
	Local_121.f_8 = iParam0;
}

int func_24()
{
	struct<2> Var0;
	struct<3> Var1;
	float fVar2;
	int iVar3;
	
	if (func_34())
	{
		Var0 = { Local_121.f_729[iLocal_85 /*2*/] };
		if (func_33(Var0))
		{
			if (!unk_0xF7DE07F319727299(Var0.f_1))
			{
				if (func_32(iLocal_85, &Var1, &fVar2))
				{
					Local_121.f_713[iLocal_85] = func_29(iLocal_85);
					if (unk_0xCE990E643CD9D0E5(Local_1488[Local_121.f_713[iLocal_85] /*5*/].f_1, iLocal_85))
					{
						if (func_26(&(Local_121.f_729[iLocal_85 /*2*/].f_1), Var0, Var1, fVar2, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0))
						{
							unk_0x5DC21979EC6C531F(unk_0x770D3B2B4702434A(Local_121.f_729[iLocal_85 /*2*/].f_1), 1);
							unk_0x7C47E49129337557(unk_0x770D3B2B4702434A(Local_121.f_729[iLocal_85 /*2*/].f_1), 1);
							unk_0x22BA2B3490860247(unk_0x770D3B2B4702434A(Local_121.f_729[iLocal_85 /*2*/].f_1), 0);
							func_25(unk_0x770D3B2B4702434A(Local_121.f_729[iLocal_85 /*2*/].f_1), 1);
							if (unk_0x6844807B17DC2DFC("Not_Allow_As_Saved_Veh", 3))
							{
								unk_0x00AF6A2AAFB41525(unk_0x770D3B2B4702434A(Local_121.f_729[iLocal_85 /*2*/].f_1), "Not_Allow_As_Saved_Veh", 1);
							}
							if (unk_0x6844807B17DC2DFC("MPBitset", 3))
							{
								if (unk_0x871819940BD2E434(unk_0x770D3B2B4702434A(Local_121.f_729[iLocal_85 /*2*/].f_1), "MPBitset"))
								{
									iVar3 = unk_0x8C0800114C2864BE(unk_0x770D3B2B4702434A(Local_121.f_729[iLocal_85 /*2*/].f_1), "MPBitset");
								}
								unk_0xBE20AB8238688965(&iVar3, 10);
								unk_0xBE20AB8238688965(&iVar3, 11);
								unk_0x00AF6A2AAFB41525(unk_0x770D3B2B4702434A(Local_121.f_729[iLocal_85 /*2*/].f_1), "MPBitset", iVar3);
							}
							Local_121.f_713[iLocal_85] = -1;
						}
					}
				}
			}
			iLocal_85++;
			if (iLocal_85 >= 10)
			{
				iLocal_85 = 0;
				return 1;
			}
		}
		return 0;
	}
	return 1;
}

void func_25(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (unk_0x6844807B17DC2DFC("MPBitset", 3))
	{
		if (unk_0x871819940BD2E434(iParam0, "MPBitset"))
		{
			iVar0 = unk_0x8C0800114C2864BE(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			unk_0xBE20AB8238688965(&iVar0, 13);
		}
		else
		{
			unk_0xD2459066EA58CE43(&iVar0, 13);
		}
		unk_0x00AF6A2AAFB41525(iParam0, "MPBitset", iVar0);
	}
}

int func_26(var uParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
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
			func_27(Param2, fParam3, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_27(struct<3> Param0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (func_28(unk_0x460153A63B9477BC(), Param0, iParam2) > -1)
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

int func_28(int iParam0, struct<3> Param1, int iParam2)
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

int func_29(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	var uVar5;
	int iVar6;
	
	fVar2 = 1000000f;
	if (func_32(iParam0, &Var4, &uVar5))
	{
		iVar0 = 0;
		while (iVar0 <= (unk_0xEFA28384DDD283E1() - 1))
		{
			if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
			{
				iVar6 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar0));
				if (func_13(iVar6, 1, 1))
				{
					fVar3 = func_30(func_31(iVar6), Var4);
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

float func_30(struct<3> Param0, struct<3> Param1)
{
	Param0.f_2 = 0f;
	Param1.f_2 = 0f;
	return vdist(Param0, Param1);
}

Vector3 func_31(int iParam0)
{
	return unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iParam0), 0);
}

int func_32(int iParam0, var uParam1, var uParam2)
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

bool func_33(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	unk_0x78FCB2E22C41B9D5(iParam0);
	return unk_0x7D167B9A0CCDA347(iParam0);
}

bool func_34()
{
	return Local_121.f_707;
}

int func_35(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_107(unk_0x460153A63B9477BC(), 0) || func_104(unk_0x460153A63B9477BC(), 0))
	{
		if (func_103(unk_0x460153A63B9477BC()) || func_101(unk_0x460153A63B9477BC()))
		{
			bParam2 = false;
		}
	}
	if (unk_0xDD3720600B3FC529() < iParam0)
	{
		if (bParam2)
		{
			func_43(sParam3, sParam4, 1);
		}
		if (func_42(26, -1))
		{
			func_39(26, -1);
		}
		return 1;
	}
	if (func_38(&(Global_1574656.f_18)))
	{
		if (!func_1(&(Global_1574656.f_18), 7500, 0))
		{
			return 0;
		}
		func_37(&(Global_1574656.f_18));
	}
	if (func_36())
	{
		if (bParam2)
		{
			func_43(sParam3, sParam4, 0);
		}
		if (func_42(26, -1))
		{
			func_39(26, -1);
		}
		return 1;
	}
	if (iParam1 && unk_0xB9E6DF0411C3488E() < iParam0)
	{
		if (bParam2)
		{
			func_43(sParam3, sParam4, 1);
		}
		if (func_42(26, -1))
		{
			func_39(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_36()
{
	return unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 0);
}

void func_37(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_38(var uParam0)
{
	return uParam0->f_1;
}

void func_39(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	switch (iParam0)
	{
		case 0:
			unk_0xA2C3707E24751958(0, iParam1);
			break;
		
		default:
			iVar1 = func_40(iParam1);
			iVar0 = unk_0xFCBF95335DD16537(iVar1);
			if (unk_0xCE990E643CD9D0E5(iVar0, iParam0))
			{
				unk_0xD2459066EA58CE43(&iVar0, iParam0);
				unk_0xA2C3707E24751958(iVar0, iParam1);
			}
			break;
	}
}

int func_40(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_41();
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

int func_41()
{
	return Global_1312763;
}

bool func_42(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_41();
	}
	iVar0 = func_40(iParam1);
	iVar1 = unk_0xFCBF95335DD16537(iVar0);
	return unk_0xCE990E643CD9D0E5(iVar1, iParam0);
}

void func_43(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 2) && !func_7(unk_0x460153A63B9477BC())) && !func_6(unk_0x460153A63B9477BC()))
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
		func_44(66, sParam0, sParam1, 1, -1, 2, 1, 0);
		unk_0xBE20AB8238688965(&(Global_1574656.f_1), 2);
	}
}

int func_44(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_100(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_98(&(Var0.f_69), iParam7);
	}
	return func_45(&Var0);
}

int func_45(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2440049.f_3156)
		{
			return 0;
		}
	}
	func_60(uParam0, uParam0->f_17);
	func_57(uParam0);
	if (func_56())
	{
		func_57(uParam0);
	}
	if (func_55(uParam0->f_1))
	{
		func_48();
		if (Global_2440049.f_2834[0 /*80*/].f_2 == 0)
		{
			Global_2440049.f_2834[0 /*80*/] = { *uParam0 };
			if (func_47(uParam0->f_69, 8192))
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
				func_48();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_98(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 2);
				Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_47(uParam0->f_69, 128))
			{
				if (func_46(Global_2440049.f_2834[iVar0 /*80*/].f_1))
				{
					Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
					func_98(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_46(int iParam0)
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

bool func_47(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_48()
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
	func_49();
	if (bVar0)
	{
		Global_77101 = 0;
	}
}

void func_49()
{
	Global_2440049.f_3158 = 0;
	Global_2440049.f_3158.f_578 = 0;
	func_53(&(Global_2440049.f_3158.f_1));
	Global_2440049.f_3158.f_1.f_1 = 0;
	func_50(&(Global_2440049.f_3158.f_1), 1);
}

void func_50(var uParam0, int iParam1)
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
				if (unk_0x03DB5C6AABF8DA46() && !func_52(0))
				{
					unk_0xFD45D90342D2A0CD(800);
				}
			}
		}
	}
	func_51(0);
}

void func_51(int iParam0)
{
	Global_77093 = iParam0;
	Global_77094 = iParam0;
}

bool func_52(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_53(var uParam0)
{
	func_54(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_54(var uParam0)
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

int func_55(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

bool func_56()
{
	return Global_2451787.f_18;
}

void func_57(var uParam0)
{
	if (func_59(uParam0->f_1))
	{
		uParam0->f_72 = func_58();
	}
}

int func_58()
{
	return 21;
}

int func_59(int iParam0)
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

void func_60(var uParam0, int iParam1)
{
	if (func_59(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_97() || !func_13(iParam1, 0, 1))
	{
		return;
	}
	if (func_46(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_61(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_61(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_93(iParam0) && !bParam4)
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
	if (((func_93(unk_0x460153A63B9477BC()) || (func_92() && func_91())) && !unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 31)) && !bParam4)
	{
		iVar1 = func_90();
		if (unk_0xAE06B9E39EBDE049(iVar1))
		{
			if (unk_0xD0390A93AF3907B8(iVar1))
			{
				if (unk_0xE4400E48E081F17A(iVar1) != -1)
				{
					if (func_13(unk_0xE4400E48E081F17A(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
						{
							if (Global_4456448.f_77785[iParam1] != -1)
							{
								return func_88(iParam1, iParam0, 0);
							}
							else
							{
								return func_74(iParam0, unk_0xE4400E48E081F17A(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_74(iParam0, unk_0xE4400E48E081F17A(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
			{
				if (Global_4456448.f_77785[iParam1] != -1)
				{
					return func_88(iParam1, iParam0, 0);
				}
				else
				{
					return func_62(0, -1, 0);
				}
			}
			else
			{
				return func_62(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && unk_0xFC559366953F62B3()) && iParam1 < 4)
	{
		if (Global_4456448.f_77785[iParam1] != -1)
		{
			return func_88(iParam1, iParam0, 0);
		}
		else
		{
			return func_74(iParam0, unk_0x460153A63B9477BC(), iParam1, bParam2, bParam3);
		}
	}
	return func_74(iParam0, unk_0x460153A63B9477BC(), iParam1, bParam2, bParam3);
}

int func_62(bool bParam0, int iParam1, bool bParam2)
{
	return func_63(unk_0x460153A63B9477BC(), bParam0, iParam1, bParam2);
}

int func_63(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!unk_0x166E920FB00B2DBB(iParam0))
	{
		return 3;
	}
	iVar0 = unk_0x6CC163E30ECE0790(iParam0);
	if ((func_73() || (func_72() && func_70())) && Global_1388252.f_1)
	{
		if (bParam1)
		{
			return func_69(iParam2, iVar0);
		}
		else
		{
			return func_69(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_68(iVar0, iParam2, 0) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_67(1);
				}
				else
				{
					return func_67(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 20))
			{
				return func_64(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_64(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_67(1);
	}
	return func_67(0);
}

int func_64(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_66(iParam0, iParam1, iParam3);
	if (func_65(Global_4456448.f_82708, 1))
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

int func_65(int iParam0, bool bParam1)
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

int func_66(int iParam0, int iParam1, int iParam2)
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
			if (!func_68(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_67(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_68(int iParam0, int iParam1, int iParam2)
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

int func_69(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_66(iParam1, iParam0, 4);
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

bool func_70()
{
	if (func_71())
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 4);
}

bool func_71()
{
	return unk_0xCE990E643CD9D0E5(Global_4456448.f_123318, 12);
}

bool func_72()
{
	if (unk_0xFC559366953F62B3())
	{
		return unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0);
	}
	return ((unk_0xCE990E643CD9D0E5(Global_4456448.f_133494, 0) || Global_1655243) && unk_0x7B70881748D166CD(joaat("fm_deathmatch_creator")) > 0);
}

int func_73()
{
	if (func_71() && unk_0xFC559366953F62B3())
	{
		return 1;
	}
	return 0;
}

int func_74(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			if (func_83())
			{
				iVar3 = func_79(iParam0);
				if (!iVar3 == -1)
				{
					return func_77(iVar3);
				}
			}
			if ((func_76(iParam1, iParam0, iVar0, 0) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18)) || ((func_68(unk_0x6CC163E30ECE0790(iParam1), unk_0x6CC163E30ECE0790(iParam0), 0) && unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 23)) && !unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 18)))
			{
				return func_67(1);
			}
			else if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 26))
			{
				return func_75(1);
			}
			else
			{
				return func_63(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574416 || Global_1574407) || Global_1590682[iParam0 /*883*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574416 == 1 && Global_1574426 == 0))
			{
				return func_67(1);
			}
			else
			{
				return func_63(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574411 && Global_1573907.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_79(iParam0);
	if (!iVar4 == -1)
	{
		return func_77(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_75(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_76(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_77(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_78(iParam0);
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

var func_78(int iParam0)
{
	return Global_2417956.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_79(int iParam0)
{
	if (!iParam0 == func_97())
	{
		if (func_81(iParam0, 1))
		{
			return Global_2417956.f_818.f_11[func_80(iParam0)];
		}
	}
	return -1;
}

int func_80(int iParam0)
{
	if (iParam0 != func_97())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_97();
}

bool func_81(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_82(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_97();
}

int func_82(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_97())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_83()
{
	if ((((func_87() || func_86()) || func_56()) || func_85()) || func_84())
	{
		return 1;
	}
	if (unk_0xFC559366953F62B3() && unk_0xCE990E643CD9D0E5(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

var func_84()
{
	return Global_2451787.f_23;
}

bool func_85()
{
	return Global_2451787.f_20;
}

var func_86()
{
	return Global_2451787.f_17;
}

var func_87()
{
	return Global_2451787.f_16;
}

int func_88(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969055.f_14[iParam0];
	if (func_83())
	{
		iVar2 = func_79(iParam1);
		if (!iVar2 == -1)
		{
			return func_77(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_592[iParam0 /*16355*/].f_7079[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_97())
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
			iVar0 = func_63(iParam1, !bParam2, iParam0, 0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_21, 13))
		{
			iVar0 = func_89(iParam0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (unk_0xCE990E643CD9D0E5(Global_4456448.f_15, 26) && !func_68(iParam0, unk_0x6CC163E30ECE0790(iParam1), 0))
		{
			iVar0 = func_75(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_89(int iParam0)
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

var func_90()
{
	return Global_2359302.f_2;
}

bool func_91()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 4);
}

bool func_92()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 14);
}

int func_93(int iParam0)
{
	if (func_95(iParam0, 0))
	{
		return 1;
	}
	if (func_94())
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

bool func_94()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

bool func_95(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_96(-1, 0) == 8;
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

int func_96(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_41();
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

int func_97()
{
	return -1;
}

void func_98(var uParam0, int iParam1)
{
	func_99(uParam0, iParam1);
}

void func_99(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

void func_100(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_97();
	uParam1->f_18 = func_97();
	uParam1->f_19 = func_97();
	uParam1->f_20 = func_97();
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

bool func_101(int iParam0)
{
	return func_102(iParam0, 20);
}

bool func_102(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_103(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_102(iParam0, 9);
	}
	return 0;
}

int func_104(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 && func_105(Global_1630317[iParam0 /*595*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1)
	{
		if (func_105(Global_1630317[iParam0 /*595*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_105(int iParam0)
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
	return func_106(iParam0, 0);
	return 0;
}

int func_106(int iParam0, int iParam1)
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

int func_107(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_108(int iParam0)
{
	Local_121 = iParam0;
}

int func_109()
{
	int iVar0;
	
	if (func_1(&(Local_121.f_665), 750, 0))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_121.f_674[iVar0] = -1;
			iVar0++;
		}
		func_37(&(Local_121.f_661));
		func_112();
		if (func_34())
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				Local_121.f_713[iVar0] = func_29(iVar0);
				iVar0++;
			}
			func_110();
		}
		return 1;
	}
	return 0;
}

void func_110()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Local_121.f_729[iVar0 /*2*/] = func_111();
		iVar0++;
	}
}

int func_111()
{
	int iVar0;
	
	iVar0 = unk_0x344C570D6F8700DF(0, 2);
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

void func_112()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_121.f_709 = func_125();
	Local_121.f_708 = Local_121.f_709;
	Local_121.f_712 = func_121();
	Local_121.f_707 = func_118();
	iVar0 = func_117();
	if (Local_121.f_707)
	{
		iVar1 = 1;
	}
	func_114(func_116(132, Local_121.f_712, iVar1, 0));
	if (Local_121.f_712 == 1 && !Local_121.f_707)
	{
		Local_121.f_710 = 1;
	}
	iVar2 = 0;
	while (iVar2 < Local_121.f_709)
	{
		Local_121.f_10[iVar2 /*5*/].f_4 = iVar2;
		Local_121.f_10[iVar2 /*5*/] = { func_113(Local_121.f_712, Local_121.f_707, iVar0, iVar2) };
		iVar2++;
	}
}

Vector3 func_113(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 623.5349f, 1614.651f, 283.748f;
							
							case 1:
								return 742.6324f, 1271.099f, 388.9925f;
							
							case 2:
								return 682.1757f, 1204.295f, 350.0934f;
							
							case 3:
								return 1779.28f, 668.7821f, 276.3788f;
							
							case 4:
								return 1927.214f, 129.7589f, 174.4281f;
							
							case 5:
								return 1056.943f, -699.1728f, 78.8831f;
							
							case 6:
								return 2026.536f, -1594.874f, 262.0831f;
							
							case 7:
								return 2139.424f, -2613.58f, 20.5914f;
							
							case 8:
								return 1041.685f, -2882.901f, 27.0959f;
							
							case 9:
								return 796.1402f, -2624.645f, 95.127f;
							
							case 10:
								return 504.6169f, -3311.801f, 22.9858f;
							
							case 11:
								return 416.9175f, -2684.419f, 10.1246f;
							
							case 12:
								return 561.767f, -2100.675f, 60.143f;
							
							case 13:
								return 872.454f, -1929.237f, 104.4083f;
							
							case 14:
								return 636.6328f, -1429.945f, 15.5f;
							
							case 15:
								return 591.386f, -852.2912f, 50.7211f;
							
							case 16:
								return 471.2209f, -102.4007f, 149.7505f;
							
							case 17:
								return 533.762f, 143.6576f, 125.7511f;
							
							case 18:
								return 1112.19f, 74.8892f, 117.7713f;
							
							case 19:
								return 683.9346f, 570.1795f, 165.7115f;
							
							case 20:
								return 1453.832f, 1113.675f, 134.9644f;
							
							case 21:
								return 1539.314f, 1716.172f, 125.0574f;
							
							case 22:
								return 1875.192f, 1698.918f, 109.9103f;
							
							case 23:
								return 2320.32f, 1669.402f, 86.7663f;
							
							case 24:
								return 2337.891f, 1358.536f, 100.8737f;
							
							case 25:
								return 2727.786f, 1558.729f, 83.66f;
							
							case 26:
								return 3112.177f, 1153.66f, 25.3827f;
							
							case 27:
								return 2580.817f, 476.8322f, 121.7549f;
							
							case 28:
								return 2458.7f, -384.0464f, 127.5513f;
							
							case 29:
								return 2381.206f, -939.2949f, 185.6516f;
							
							case 30:
								return 1669.294f, -1652.948f, 154.2478f;
							
							case 31:
								return 1096.793f, -1141.693f, 96.1055f;
							
							case 32:
								return 3042.9f, -291.4662f, 22.8304f;
							
							case 33:
								return 2645.351f, -1492.043f, 30.646f;
							
							case 34:
								return 1214.374f, -2353.274f, 66.8f;
							
							case 35:
								return 1841.616f, -2497.971f, 101.8039f;
							
							case 36:
								return 1872.035f, -761.149f, 105f;
							
							case 37:
								return 1657.665f, -413.7629f, 228.448f;
							
							case 38:
								return 1589.229f, -1981.901f, 161.2293f;
							
							case 39:
								return 991.7729f, -1477.064f, 60.0276f;
							
							case 40:
								return 2609.912f, -2096.358f, 35.0044f;
							
							case 41:
								return 1121.19f, 725.4341f, 170.3273f;
							
							case 42:
								return 2117.316f, 1024.085f, 197f;
							
							case 43:
								return 727.6708f, -452.6442f, 25f;
							
							case 44:
								return 1211.964f, -3285.54f, 19.5936f;
							
							case 45:
								return 1499.883f, -1276.207f, 131.5493f;
							
							case 46:
								return 3381.442f, -826.2608f, 42.8967f;
							
							case 47:
								return 1562.097f, 292.1506f, 494.2574f;
							
							case 48:
								return 2021.578f, -1993.689f, 120f;
							
							case 49:
								return 757.5558f, -1196.363f, 232.0553f;
							
							case 50:
								return 1887.774f, -3474.97f, 77.8727f;
							
							case 51:
								return 1083.224f, -229.6182f, 68.6364f;
							
							case 52:
								return 2344.084f, -406.1672f, 91f;
							
							case 53:
								return 2184.821f, 529.1252f, 241.1723f;
							
							case 54:
								return 1251.541f, -1883.809f, 50f;
							
							case 55:
								return 847.74f, 1781.903f, 160.9508f;
							
							case 56:
								return 288.3698f, -1601.346f, 52f;
							
							case 57:
								return 2648.131f, -731.5316f, 99.7f;
							
							case 58:
								return 1937.117f, 1337.446f, 529.8608f;
							
							case 59:
								return 1512.681f, -2539.276f, 208.3091f;
							
							case 60:
								return 2352.986f, -1763.908f, 136.1568f;
							
							case 61:
								return 2099.732f, -1212.728f, 178.3343f;
							
							case 62:
								return 1945.16f, -957.8221f, 96.04f;
							
							case 63:
								return 1872.81f, -830.1746f, 171.44f;
							
							case 64:
								return 1256.392f, -1571.629f, 90.566f;
							
							case 65:
								return 1818.023f, -244.6768f, 305.9837f;
							
							case 66:
								return 2839.051f, -748.0399f, 21.5008f;
							
							case 67:
								return 1268.646f, -2126.072f, 60.6975f;
							
							case 68:
								return 1088.679f, -1982.82f, 84.1204f;
							
							case 69:
								return 1597.218f, -2817.042f, 19.0498f;
							
							case 70:
								return 356.3379f, -2319.226f, 67.6058f;
							
							case 71:
								return 692.5012f, -2330.583f, 60.7022f;
							
							case 72:
								return 1070.4f, -1835.148f, 100.8235f;
							
							case 73:
								return 478.3501f, -1682.318f, 59.7763f;
							
							case 74:
								return 845.2267f, -2186.32f, 46.5743f;
							
							case 75:
								return 2651.639f, -1230.85f, 40.5824f;
							
							case 76:
								return 461.851f, -1460.173f, 65.7889f;
							
							case 77:
								return 775.8362f, -852.0386f, 31f;
							
							case 78:
								return 913.9593f, -976.4005f, 81.0321f;
							
							case joaat("MPSV_LP0_31"):
								return 970.9194f, -2510.112f, 64f;
							
							case 80:
								return 1096.666f, 1222.327f, 202.4859f;
							
							case 81:
								return 1978.543f, 690.4552f, 174.2517f;
							
							case 82:
								return 1571.993f, -36.6251f, 140.5239f;
							
							case 83:
								return 918.2688f, -675.462f, 76.6019f;
							
							case 84:
								return 798.097f, -1194.02f, 32f;
							
							case 85:
								return 382.4527f, -31.8431f, 143.6312f;
							
							case 86:
								return 672.1725f, -1745.012f, 16f;
							
							case 87:
								return 620.2905f, -588.2725f, 22.6129f;
							
							case 88:
								return 1204.318f, 196.6229f, 79.9329f;
							
							case 89:
								return 2028.402f, -2179.396f, 105.5733f;
							
							case 90:
								return 1131.183f, -2929.769f, 33.2799f;
							
							case 91:
								return 654.5255f, -2634.736f, 26.063f;
							
							case 92:
								return 757.272f, -30.6019f, 66.9464f;
							
							case 93:
								return 262.5532f, -1046.969f, 73.6448f;
							
							case 94:
								return 638.4819f, -1021f, 43.5236f;
							
							case 95:
								return 351.6616f, -2758.046f, 29.2267f;
							
							case 96:
								return 1613.985f, -2243.761f, 136f;
							
							case 97:
								return 2947.746f, 792.9475f, 45f;
							
							case 98:
								return 2608.733f, 822.9318f, 118.6201f;
							
							case 99:
								return 1357.208f, 674.4443f, 100f;
							
							case 100:
								return 978.4934f, -2073.071f, 1000f;
							
							case 101:
								return 2848.513f, -2701.795f, 547.5851f;
							
							case 102:
								return 2322.219f, -2129.611f, 13.6809f;
							
							case 103:
								return 1248.603f, -2675.042f, 145.6704f;
							
							case 104:
								return 2052.692f, -252.931f, 228.334f;
							
							case 105:
								return 2394.902f, 388.1578f, 194.5342f;
							
							case 106:
								return 3337.711f, 56.3844f, 764.684f;
							
							case 107:
								return 1573.049f, 1472.569f, 179.2061f;
							
							case 108:
								return 1898.354f, 1020.671f, 277.9648f;
							
							case 109:
								return 745.1586f, 232.868f, 177.0828f;
							
							case 110:
								return 1551.579f, -685.6392f, 126f;
							
							case 111:
								return 2734.234f, 61.798f, 25.1296f;
							
							case 112:
								return 2404.63f, -1485.806f, 86.3959f;
							
							case 113:
								return 3033.16f, 321.8385f, 908.0805f;
							
							case 114:
								return 1353.323f, 373.6808f, 184.937f;
							
							case 115:
								return 1317.262f, -737.488f, 125.2729f;
							
							case 116:
								return 1737.696f, -966.1904f, 119.8332f;
							
							case 117:
								return 923.2643f, 978.5736f, 605.3384f;
							
							case 118:
								return 2823.777f, -1483.905f, 26.8193f;
							
							case 119:
								return 1333.475f, -275.2598f, 1000f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 2360.429f, 1273.094f, 63.9814f;
							
							case 1:
								return 2545.422f, 342.8004f, 107.4641f;
							
							case 2:
								return 2483.171f, -363.0696f, 92.7352f;
							
							case 3:
								return 1491.835f, -1005.532f, 50.5682f;
							
							case 4:
								return 1078.853f, -688.3618f, 56.6151f;
							
							case 5:
								return 657.7627f, -1500.858f, 8.6817f;
							
							case 6:
								return 1216.266f, -2907.278f, 4.8661f;
							
							case 7:
								return 958.6841f, -3079.094f, 13.3327f;
							
							case 8:
								return 459.5267f, -2429.235f, 4.7518f;
							
							case 9:
								return 1130.214f, -2082.811f, 30.0089f;
							
							case 10:
								return 1506.701f, -2135.637f, 75.4567f;
							
							case 11:
								return 1759.277f, -1579.97f, 117.9f;
							
							case 12:
								return 2510.45f, -1219.332f, 1.89f;
							
							case 13:
								return 2855.604f, -1339.602f, 14.7183f;
							
							case 14:
								return 2826.41f, -743.3448f, 0.3071f;
							
							case 15:
								return 1236.599f, -83.0057f, 58.7636f;
							
							case 16:
								return 1660.534f, 0.3033f, 172.7744f;
							
							case 17:
								return 1917.608f, 301.6851f, 161.8848f;
							
							case 18:
								return 2145.003f, 146.688f, 224.1061f;
							
							case 19:
								return 1456.737f, 1111.848f, 113.334f;
							
							case 20:
								return 1135.62f, 58.6667f, 79.7561f;
							
							case 21:
								return 680.794f, 559.0409f, 128.0462f;
							
							case 22:
								return 716.7936f, 141.21f, 79.7545f;
							
							case 23:
								return 875.606f, -476.7556f, 29.0746f;
							
							case 24:
								return 536.7303f, -2817.502f, 5.0421f;
							
							case 25:
								return 984.1771f, -2410.686f, 29.4333f;
							
							case 26:
								return 863.2344f, -2151.808f, 29.4816f;
							
							case 27:
								return 1002.942f, -1918.75f, 30.1432f;
							
							case 28:
								return 1183.313f, -1550.946f, 38.5953f;
							
							case 29:
								return 694.0918f, 1283.059f, 359.296f;
							
							case 30:
								return 745.2003f, 1199.09f, 325.4016f;
							
							case 31:
								return 887.6219f, 873.548f, 178.5657f;
							
							case 32:
								return 1828.967f, 1571.725f, 99.7219f;
							
							case 33:
								return 2805.81f, 1676.1f, 23.5193f;
							
							case 34:
								return 1405.691f, -601.7893f, 73.3473f;
							
							case 35:
								return 1710.367f, -464.7253f, 169.8001f;
							
							case 36:
								return 1946.392f, 1331.992f, 160.1707f;
							
							case 37:
								return 2271.38f, 1711.949f, 67.0413f;
							
							case 38:
								return 2307.003f, -1750.421f, 133.7737f;
							
							case 39:
								return 2172.226f, -1069.367f, 176.0087f;
							
							case 40:
								return 595.0312f, -851.27f, 40.4327f;
							
							case 41:
								return 456.9577f, -752.8668f, 26.3578f;
							
							case 42:
								return 531.9203f, -1034.797f, 27.2597f;
							
							case 43:
								return 1289.908f, -3341.78f, 4.9016f;
							
							case 44:
								return 533.8767f, -1969.171f, 23.9846f;
							
							case 45:
								return 689.5218f, -1774.186f, 8.6f;
							
							case 46:
								return 848.6605f, -1211.77f, 30.3237f;
							
							case 47:
								return 1874.741f, -2202.331f, 166.2907f;
							
							case 48:
								return 1458.76f, -2623.696f, 47.69f;
							
							case 49:
								return 1538.907f, 784.3685f, 76.4501f;
							
							case 50:
								return 800.149f, -109.5107f, 79.533f;
							
							case 51:
								return 2687.09f, 889.5835f, 76.4359f;
							
							case 52:
								return 939.7744f, -1496.824f, 29.1156f;
							
							case 53:
								return 547.5936f, -455.3327f, 23.7304f;
							
							case 54:
								return 709.3f, -2285f, 33.8f;
							
							case 55:
								return 454.0637f, -2177.92f, 4.9177f;
							
							case 56:
								return 1468.104f, -1759.198f, 78.3022f;
							
							case 57:
								return 1239.343f, -1097.545f, 37.5256f;
							
							case 58:
								return 851.4936f, -956.856f, 25.2824f;
							
							case 59:
								return 512.4025f, 221.9917f, 103.7442f;
							
							case 60:
								return 1545.082f, 1701.081f, 108.769f;
							
							case 61:
								return 1188.11f, 1556.979f, 107.8028f;
							
							case 62:
								return 1033.948f, -273.4799f, 49.8443f;
							
							case 63:
								return 743.4129f, -591.6385f, 26.0061f;
							
							case 64:
								return 1975.484f, -749.9232f, 96.2513f;
							
							case 65:
								return 1968.117f, 708.8224f, 161.8571f;
							
							case 66:
								return 2296.027f, 1152.222f, 64.0942f;
							
							case 67:
								return 2474.09f, 1484.103f, 35.2029f;
							
							case 68:
								return 482.1839f, 664.4731f, 195.1235f;
							
							case 69:
								return 1505.106f, -1271.169f, 121.655f;
							
							case 70:
								return 1220.729f, -1865.861f, 37.4982f;
							
							case 71:
								return 476.6311f, -1283.433f, 28.5393f;
							
							case 72:
								return 952.6752f, -2248.219f, 29.5831f;
							
							case 73:
								return 1434.707f, -2315.042f, 65.927f;
							
							case 74:
								return 1882.254f, -1873.208f, 191.477f;
							
							case 75:
								return 2014.572f, -1591.406f, 249.303f;
							
							case 76:
								return 1969.748f, -992.8931f, 79.6204f;
							
							case 77:
								return 2267.432f, -331.317f, 92.9784f;
							
							case 78:
								return 1205.465f, 336.8802f, 80.9909f;
							
							case joaat("MPSV_LP0_31"):
								return 531.8229f, -27.4548f, 69.6295f;
							
							case 80:
								return 304.7162f, 262.4799f, 104.337f;
							
							case 81:
								return 572.4857f, -2147.293f, 7.9233f;
							
							case 82:
								return 1223.13f, -2338.621f, 59.8673f;
							
							case 83:
								return 1747.151f, -2679.91f, 1.4587f;
							
							case 84:
								return 939.6769f, -1342.533f, 11.4778f;
							
							case 85:
								return 1435.646f, -1476.472f, 62.2245f;
							
							case 86:
								return 2273.048f, -539.2752f, 102.9436f;
							
							case 87:
								return 1522.075f, -381.5488f, 200.3996f;
							
							case 88:
								return 2778.579f, 1073.328f, 0.6607f;
							
							case 89:
								return 609.4634f, -1333.589f, 20.7017f;
							
							case 90:
								return 1360.928f, -946.584f, 55.9209f;
							
							case 91:
								return 1147.373f, -431.5072f, 65.9987f;
							
							case 92:
								return 2391.644f, -932.7006f, 151.3306f;
							
							case 93:
								return 2897.51f, -314.7418f, 17.1346f;
							
							case 94:
								return 2963.361f, 513.4398f, 35.0981f;
							
							case 95:
								return 2415.814f, 763.4792f, 124.8302f;
							
							case 96:
								return 2054.985f, 953.5229f, 218.5845f;
							
							case 97:
								return 1522.831f, 461.3894f, 224.2793f;
							
							case 98:
								return 1301.596f, 1445.471f, 98.4293f;
							
							case 99:
								return 1071.843f, -1841.304f, 36.3069f;
							
							case 100:
								return 1133.087f, -2602.795f, 17.3834f;
							
							case 101:
								return 484.4286f, -3064.647f, 5.084f;
							
							case 102:
								return 1610.912f, -2385.55f, 90.6982f;
							
							case 103:
								return 695.2822f, -2534.997f, 17.6967f;
							
							case 104:
								return 554.7129f, -1634.238f, 26.9479f;
							
							case 105:
								return 1723.686f, -1038.606f, 129.0783f;
							
							case 106:
								return 2637.012f, -1863.213f, 17.7764f;
							
							case 107:
								return 2638.077f, 1346.641f, 25.4338f;
							
							case 108:
								return 1910.663f, 29.3172f, 159.5f;
							
							case 109:
								return 2952.967f, 797.8872f, 0.1f;
							
							case 110:
								return 2937.12f, 1471.532f, 0f;
							
							case 111:
								return 2348.98f, -2281.005f, 0.1697f;
							
							case 112:
								return 2681.416f, -1560.354f, -0.0123f;
							
							case 113:
								return 2812.644f, -27.1503f, 0.7016f;
							
							case 114:
								return 3201.036f, -102.7169f, 0.2f;
							
							case 115:
								return 651.1428f, -3112.596f, 0.0233f;
							
							case 116:
								return 2313.423f, -2194.061f, 0.025f;
							
							case 117:
								return 3055.192f, 185.0506f, 0.4391f;
							
							case 118:
								return 2729.46f, -1073.702f, 0.6712f;
							
							case 119:
								return 1423.506f, -2790.912f, 0.7109f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 1:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -915.445f, -2520.007f, 58f;
							
							case 1:
								return -1343.719f, -3336.795f, 30.5601f;
							
							case 2:
								return -1336.239f, -3044.059f, 300.803f;
							
							case 3:
								return -1833.852f, -1191.057f, 41.1411f;
							
							case 4:
								return -1955.78f, 1776.57f, 195.8577f;
							
							case 5:
								return -2166.629f, 1607.567f, 260f;
							
							case 6:
								return -417.0685f, 1153.347f, 347.5894f;
							
							case 7:
								return -2503.341f, 754.9435f, 342.9515f;
							
							case 8:
								return -2626.127f, 136.1493f, 118.1611f;
							
							case 9:
								return -2246.804f, 266.7578f, 194.8923f;
							
							case 10:
								return -1364.038f, 56.9618f, 70.9416f;
							
							case 11:
								return -94.2512f, 880.448f, 265f;
							
							case 12:
								return -162.3738f, -999.6118f, 286.6717f;
							
							case 13:
								return 140.5345f, -698.5123f, 92.6658f;
							
							case 14:
								return -104.079f, -755.4847f, 59.1614f;
							
							case 15:
								return -284.6401f, -446.2669f, 91.5901f;
							
							case 16:
								return -795.1664f, -736.1061f, 78.6788f;
							
							case 17:
								return -971.361f, -1305.368f, 50f;
							
							case 18:
								return -1357.973f, -1476.396f, 40.9274f;
							
							case 19:
								return -2004.334f, -556.4324f, 20.3771f;
							
							case 20:
								return -1034.381f, 640.7464f, 163.7504f;
							
							case 21:
								return -1238.563f, -848.6133f, 89.7682f;
							
							case 22:
								return -1169.283f, -467.3812f, 69.0157f;
							
							case 23:
								return -324.4008f, -1968.694f, 71.7904f;
							
							case 24:
								return -269.9813f, -2425.728f, 95.05f;
							
							case 25:
								return 247.3292f, -3308.082f, 59.9012f;
							
							case 26:
								return 219.492f, -2318.923f, 43.917f;
							
							case 27:
								return 18.8233f, -1504f, 54.686f;
							
							case 28:
								return 8.9788f, 1715.057f, 249.4028f;
							
							case 29:
								return -667.7844f, 404.7751f, 125.5105f;
							
							case 30:
								return 216.2372f, 236.2603f, 125.7443f;
							
							case 31:
								return -3079.696f, 766.6476f, 33.988f;
							
							case 32:
								return -1105.589f, 1428.968f, 238.1016f;
							
							case 33:
								return -474.9906f, 1529.526f, 500.0109f;
							
							case 34:
								return -1621.841f, 929.212f, 193.8022f;
							
							case 35:
								return -767.9827f, -21.7202f, 69.0007f;
							
							case 36:
								return -472.9492f, -1444.143f, 92.8559f;
							
							case 37:
								return -1879.575f, -2634.001f, 11.491f;
							
							case 38:
								return -1459.734f, -2141.965f, 23.7189f;
							
							case 39:
								return -75.0934f, -818.6606f, 599.9617f;
							
							case 40:
								return -230.7478f, -241.4196f, 76.4557f;
							
							case 41:
								return -1608.013f, -537.3172f, 73.1431f;
							
							case 42:
								return -1806.964f, -125.5317f, 118.0094f;
							
							case 43:
								return -3170.222f, 1543.227f, 33.8091f;
							
							case 44:
								return -2753.087f, 1229.005f, 140.7239f;
							
							case 45:
								return -306.4009f, 202.0892f, 180.3099f;
							
							case 46:
								return 396.1246f, -1528.24f, 46.6041f;
							
							case 47:
								return 389.6704f, -356.0437f, 61.5436f;
							
							case 48:
								return 324.4086f, -988.9622f, 92.2799f;
							
							case 49:
								return -657.5551f, -1105.199f, 67.647f;
							
							case 50:
								return -439.2123f, -1003.071f, 58.7819f;
							
							case 51:
								return -208.3349f, -1800.983f, 12.0207f;
							
							case 52:
								return 104.7709f, -1940.293f, 33.3786f;
							
							case 53:
								return -80.1589f, 364.0139f, 180.4526f;
							
							case 54:
								return -1064.813f, 7.4781f, 69.6885f;
							
							case 55:
								return -1997.443f, 722.7387f, 175.1271f;
							
							case 56:
								return -254.3736f, -3074.535f, 75.4412f;
							
							case 57:
								return -830.1344f, -1880.055f, 33.9615f;
							
							case 58:
								return -2775.497f, -788.6588f, 36.447f;
							
							case 59:
								return 43.0406f, -413.7074f, 89.5811f;
							
							case 60:
								return -3209.421f, 1110.18f, 37.6606f;
							
							case 61:
								return -2256.718f, -339.6835f, 43.3005f;
							
							case 62:
								return -1957.094f, 1330.48f, 236.7105f;
							
							case 63:
								return -1030.221f, 996.1059f, 182.364f;
							
							case 64:
								return -1529.428f, 441.7661f, 134.8705f;
							
							case 65:
								return 145.6732f, 1154.994f, 253.3341f;
							
							case 66:
								return -520.5256f, 659.5372f, 177.0043f;
							
							case 67:
								return 18.1044f, 638.951f, 224.5906f;
							
							case 68:
								return 128.1127f, -27.8183f, 91.0755f;
							
							case 69:
								return -634.6116f, -367.6195f, 56.3093f;
							
							case 70:
								return -402.9568f, -655.0366f, 60.6586f;
							
							case 71:
								return -1034.505f, -1070.038f, 21.0905f;
							
							case 72:
								return -1013.909f, -1763.924f, 20.6112f;
							
							case 73:
								return -734.4069f, -1448.061f, 26.2766f;
							
							case 74:
								return -202.7723f, -1322.269f, 53.6863f;
							
							case 75:
								return 388.6693f, -1368.068f, 50.7767f;
							
							case 76:
								return -7.0116f, -2230.674f, 39.1959f;
							
							case 77:
								return 33.8391f, -2745.649f, 33.5782f;
							
							case 78:
								return -1100.793f, -2846.705f, 53.132f;
							
							case joaat("MPSV_LP0_31"):
								return -1274.324f, -2448.849f, 99.9299f;
							
							case 80:
								return -473.7719f, -2675.318f, 19.2771f;
							
							case 81:
								return -727.3944f, -3494.9f, 23.1103f;
							
							case 82:
								return -1907.151f, -3034.577f, 39.2742f;
							
							case 83:
								return 416.2226f, -2912.834f, 5.0678f;
							
							case 84:
								return 414.82f, -2616.128f, 22.3517f;
							
							case 85:
								return 233.9356f, -1474.491f, 45.7138f;
							
							case 86:
								return 93.563f, -1189.746f, 51.969f;
							
							case 87:
								return -607.8086f, -2189.156f, 76.1713f;
							
							case 88:
								return -1106.939f, -2019.405f, 33.3166f;
							
							case 89:
								return -1210.83f, -1806.382f, 246.2572f;
							
							case 90:
								return -1309.448f, -1043.763f, 29.6876f;
							
							case 91:
								return -1618.367f, -827.8159f, 42.3072f;
							
							case 92:
								return -2257.555f, -9.0938f, 121.4433f;
							
							case 93:
								return -777.472f, -376.5067f, 72.7751f;
							
							case 94:
								return -1371.512f, -172.8742f, 99.1525f;
							
							case 95:
								return -1842.798f, 302.3257f, 105.5376f;
							
							case 96:
								return -1165.458f, 367.7476f, 95.3869f;
							
							case 97:
								return -3107.359f, 276.277f, 56.9633f;
							
							case 98:
								return -2548.786f, 1441.129f, 190.8976f;
							
							case 99:
								return -2644.523f, 1868.621f, 168.2627f;
							
							case 100:
								return -3029.234f, 1883.871f, 35.4705f;
							
							case 101:
								return -1119.207f, 1736.032f, 195.1095f;
							
							case 102:
								return -644.2039f, 1743.748f, 227.7433f;
							
							case 103:
								return -577.6026f, 2038.995f, 209.9244f;
							
							case 104:
								return -302.0078f, 1871.026f, 196.7599f;
							
							case 105:
								return 351.8685f, 1748.149f, 260.866f;
							
							case 106:
								return -11.935f, 1320.348f, 288.0058f;
							
							case 107:
								return 295.5885f, 753.7887f, 200.7135f;
							
							case 108:
								return 305.6451f, 501.4699f, 350.4832f;
							
							case 109:
								return 353.2237f, 58.5094f, 119.2648f;
							
							case 110:
								return 377.5104f, -695.2125f, 102.9432f;
							
							case 111:
								return 392.4507f, -1204.239f, 50f;
							
							case 112:
								return 397.6461f, -1929.781f, 43.4559f;
							
							case 113:
								return 470.8737f, -2451.431f, 30f;
							
							case 114:
								return -418.7521f, -2424.396f, 20.0582f;
							
							case 115:
								return -2440.527f, -1654.13f, 6.3248f;
							
							case 116:
								return -888.3994f, -2938.026f, 26.3869f;
							
							case 117:
								return -1374.637f, -2647.817f, 26.4425f;
							
							case 118:
								return -1082.177f, -620.1375f, 27.491f;
							
							case 119:
								return -1471.09f, 1324.141f, 193.4433f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2303.138f, 218.8738f, 166.6017f;
							
							case 1:
								return -2994.291f, 39.7167f, 7.4636f;
							
							case 2:
								return -3410.2f, 967.5133f, 7.3517f;
							
							case 3:
								return -3041.96f, 1209.59f, 13.7743f;
							
							case 4:
								return -2502.529f, 756.2985f, 301.2459f;
							
							case 5:
								return -1352.546f, 120.6978f, 55.2388f;
							
							case 6:
								return -1729.21f, -193.1235f, 57.5038f;
							
							case 7:
								return -1635.4f, -1054.226f, 12.1522f;
							
							case 8:
								return -1268.607f, -1915.845f, 4.8616f;
							
							case 9:
								return -18.3427f, -1297.615f, 28.3575f;
							
							case 10:
								return -145.3585f, 930.7858f, 234.6711f;
							
							case 11:
								return -424.3762f, 1587.798f, 355.2649f;
							
							case 12:
								return -112.2256f, 354.4933f, 111.6961f;
							
							case 13:
								return 67.6185f, -673.5317f, 28.7056f;
							
							case 14:
								return 338.3054f, -1394.279f, 31.5093f;
							
							case 15:
								return -19.2884f, -1426.187f, 29.6575f;
							
							case 16:
								return -251.9772f, -2029.258f, 28.946f;
							
							case 17:
								return -432.7254f, -2440.489f, 5.0008f;
							
							case 18:
								return -956.3549f, -3053.302f, 12.9451f;
							
							case 19:
								return -1662.76f, -3177.918f, 12.9914f;
							
							case 20:
								return -457.7008f, -1507.786f, 12.0586f;
							
							case 21:
								return 188.8895f, 300.349f, 104.515f;
							
							case 22:
								return 3.4946f, -2452.885f, 13.4665f;
							
							case 23:
								return -966.3007f, -973.4243f, 2.876f;
							
							case 24:
								return -1536.435f, 868.5392f, 180.16f;
							
							case 25:
								return -1521.53f, 1493.765f, 110.5947f;
							
							case 26:
								return -1173.264f, -2037.82f, 12.776f;
							
							case 27:
								return -0.4394f, -1037.738f, 37.152f;
							
							case 28:
								return 137.7382f, -3092.8f, 4.8963f;
							
							case 29:
								return -1177.272f, -507.6518f, 34.5662f;
							
							case 30:
								return -575.4523f, -142.0386f, 36.2353f;
							
							case 31:
								return -723.2367f, 655.733f, 154.5475f;
							
							case 32:
								return -455.0906f, -999.9053f, 22.8657f;
							
							case 33:
								return -1133.934f, -1447.037f, 4f;
							
							case 34:
								return -231.0999f, -242.6378f, 49.0062f;
							
							case 35:
								return 69.8444f, -62.9348f, 67.8751f;
							
							case 36:
								return -1981.162f, -296.7468f, 47.1062f;
							
							case 37:
								return 98.9504f, -1979.664f, 19.6635f;
							
							case 38:
								return 324.168f, -2758.195f, 5.0028f;
							
							case 39:
								return 219.5919f, -2310.078f, 7.4018f;
							
							case 40:
								return -693.2001f, -592.6827f, 30.5552f;
							
							case 41:
								return -1044.535f, 500.5195f, 83.1617f;
							
							case 42:
								return -1792.464f, 395.7471f, 111.7909f;
							
							case 43:
								return -425.5935f, 1123.605f, 324.8547f;
							
							case 44:
								return -523.835f, -2902.068f, 5.0004f;
							
							case 45:
								return -1213.84f, -2724.547f, 12.9541f;
							
							case 46:
								return -656.7547f, -1708.686f, 23.8153f;
							
							case 47:
								return -1024.89f, 1012.239f, 159.6649f;
							
							case 48:
								return -850.8826f, 1708.716f, 193.9906f;
							
							case 49:
								return -2253.348f, 1324.29f, 291.0074f;
							
							case 50:
								return -876.7352f, -210.6213f, 38.2135f;
							
							case 51:
								return -309.9497f, -609.0406f, 32.5568f;
							
							case 52:
								return -743.9313f, -2283.372f, 12.06f;
							
							case 53:
								return -2971.731f, 584.4294f, 19.423f;
							
							case 54:
								return 288.4228f, -1601.137f, 30.2709f;
							
							case 55:
								return 97.6932f, -348.3357f, 41.3071f;
							
							case 56:
								return -1065.912f, -12.7356f, 49.4423f;
							
							case 57:
								return -388.1416f, -2283.256f, 6.6082f;
							
							case 58:
								return -1213.121f, -945.0177f, 1.1502f;
							
							case 59:
								return -1605.807f, -588.1375f, 32.1103f;
							
							case 60:
								return -1573.01f, 400.7232f, 106.194f;
							
							case 61:
								return -2751.19f, 1185.782f, 93.6924f;
							
							case 62:
								return 287.3323f, -3014.992f, 8.8106f;
							
							case 63:
								return -96.4867f, -2744.17f, 5.1062f;
							
							case 64:
								return -1350.788f, -1435.002f, 3.325f;
							
							case 65:
								return -156.4393f, -979.7114f, 20.2769f;
							
							case 66:
								return -671.3023f, 399.0416f, 101.68f;
							
							case 67:
								return 169.03f, 667.5479f, 205.7125f;
							
							case 68:
								return -726.8502f, -410.5149f, 34.5413f;
							
							case 69:
								return -671.4555f, -891.9421f, 23.4991f;
							
							case 70:
								return -190.4528f, 1299.355f, 302.9701f;
							
							case 71:
								return -1284.425f, -3403.299f, 12.9452f;
							
							case 72:
								return -825.6949f, -3337.779f, 12.9445f;
							
							case 73:
								return -1368.524f, -2335.062f, 12.9446f;
							
							case 74:
								return -1098.009f, -2415.526f, 12.9452f;
							
							case 75:
								return -1336.274f, -3044.103f, 12.9444f;
							
							case 76:
								return -821.012f, -1992.519f, 9.6439f;
							
							case 77:
								return -350.2334f, -2640.808f, 5.0003f;
							
							case 78:
								return -219.3889f, -2386.881f, 5.0014f;
							
							case joaat("MPSV_LP0_31"):
								return 109.4531f, -2816.037f, 9.7899f;
							
							case 80:
								return 208.6273f, -3327.894f, 4.8177f;
							
							case 81:
								return 370.2768f, -2128.437f, 15.2365f;
							
							case 82:
								return -53.6978f, -1688.638f, 28.4917f;
							
							case 83:
								return -1009.052f, -1759.302f, 5.5498f;
							
							case 84:
								return -988.1508f, -2106.591f, 10.5382f;
							
							case 85:
								return -708.1929f, -1517.804f, 4.4121f;
							
							case 86:
								return -228.0423f, -1514.504f, 30.4622f;
							
							case 87:
								return 297.5852f, -1204.386f, 28.1985f;
							
							case 88:
								return 383.1396f, -904.1862f, 28.4376f;
							
							case 89:
								return -630.6f, -1071.2f, 21.7f;
							
							case 90:
								return -1207.432f, -1796.611f, 2.9086f;
							
							case 91:
								return -876.3531f, -1501.708f, 4.1775f;
							
							case 92:
								return -1271.531f, -1099.613f, 6.5852f;
							
							case 93:
								return -1730.83f, -725.0892f, 9.3941f;
							
							case 94:
								return -1431.005f, -271.0002f, 45.2077f;
							
							case 95:
								return -1966.816f, 182.3251f, 85.7706f;
							
							case 96:
								return -2293.777f, 371.4213f, 173.6017f;
							
							case 97:
								return -2156.688f, 1551.647f, 272.9088f;
							
							case 98:
								return -2780.149f, 1423.379f, 99.9284f;
							
							case 99:
								return -2587.936f, 1930.876f, 166.0052f;
							
							case 100:
								return -3017.571f, 1860.058f, 28.4173f;
							
							case 101:
								return 142.7543f, 1689.097f, 233.0739f;
							
							case 102:
								return 186.6585f, 1162.86f, 224.5946f;
							
							case 103:
								return -461.6094f, 640.4639f, 143.1886f;
							
							case 104:
								return -440.1514f, 184.2777f, 74.2476f;
							
							case 105:
								return -186.476f, 25.015f, 63.554f;
							
							case 106:
								return 26.7096f, -660.0318f, 30.6286f;
							
							case 107:
								return 156.6823f, -565.1396f, 42.893f;
							
							case 108:
								return -1834.908f, -1221.919f, 0.8054f;
							
							case 109:
								return -707.5134f, -1340.225f, -0.0558f;
							
							case 110:
								return -544.5794f, -2580.831f, 0.2096f;
							
							case 111:
								return 103.7708f, -2461.292f, 0.1193f;
							
							case 112:
								return -3046.133f, 1570.539f, -0.3275f;
							
							case 113:
								return -2241.345f, -530.6988f, -0.3275f;
							
							case 114:
								return 44.8316f, 844.4984f, 195.5816f;
							
							case 115:
								return -1894.231f, -2724.314f, -0.3275f;
							
							case 116:
								return -1029.441f, -1778.107f, -0.3275f;
							
							case 117:
								return -95.1061f, -2313.997f, 0.4963f;
							
							case 118:
								return -1546.054f, -1509.913f, 0.409f;
							
							case 119:
								return -1678.194f, -2238.986f, 0.9841f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 2:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -1874.714f, 2055.242f, 164.0655f;
							
							case 1:
								return -2398.244f, 2197.323f, 103.0324f;
							
							case 2:
								return -2470.967f, 2693.007f, 16.093f;
							
							case 3:
								return -1417.126f, 2634.235f, 3.8116f;
							
							case 4:
								return -1617.519f, 3185.984f, 52.4819f;
							
							case 5:
								return -1187.536f, 3851.927f, 510.4073f;
							
							case 6:
								return -1243.21f, 4536.333f, 198.2652f;
							
							case 7:
								return -766.5436f, 4335.334f, 181.1521f;
							
							case 8:
								return -515.496f, 4425.549f, 56.3238f;
							
							case 9:
								return -210.6103f, 3651.887f, 80.5153f;
							
							case 10:
								return 90.0834f, 3766.962f, 52.4048f;
							
							case 11:
								return 267.8927f, 2866.58f, 81.5228f;
							
							case 12:
								return 180.018f, 2272.227f, 109.032f;
							
							case 13:
								return -618.2112f, 2031.457f, 238.4183f;
							
							case 14:
								return -1185.328f, 2439.395f, 110.052f;
							
							case 15:
								return -2881.416f, 3363.437f, 44.4458f;
							
							case 16:
								return -2188.789f, 4395.888f, 71.8569f;
							
							case 17:
								return -2166.268f, 5204.997f, 32.4229f;
							
							case 18:
								return 239.3275f, 5576.022f, 610.5799f;
							
							case 19:
								return -549.4456f, 5308.46f, 118.8087f;
							
							case 20:
								return -686.6255f, 5674.634f, 64.1394f;
							
							case 21:
								return 25.1643f, 7643.369f, 32.4106f;
							
							case 22:
								return -162.8882f, 6422.088f, 46.3268f;
							
							case 23:
								return 269.3018f, 5863.51f, 425.1252f;
							
							case 24:
								return 158.6423f, 4622.624f, 213.8925f;
							
							case 25:
								return 31.6062f, 4328.141f, 56.7127f;
							
							case 26:
								return -959.6198f, 4843.202f, 317.838f;
							
							case 27:
								return -1179.401f, 4926.922f, 230.3542f;
							
							case 28:
								return -1801.77f, 4513.373f, 40.2242f;
							
							case 29:
								return -2146.721f, 3964.171f, 111.159f;
							
							case 30:
								return -668.1703f, 3607.985f, 305.8568f;
							
							case 31:
								return -409.327f, 2963.414f, 38.182f;
							
							case 32:
								return -290.9469f, 2533.475f, 92.1749f;
							
							case 33:
								return -3029.401f, 1883.96f, 35.4066f;
							
							case 34:
								return -2597.654f, 1922.071f, 179.5395f;
							
							case 35:
								return 80.7072f, 5032.946f, 490.6172f;
							
							case 36:
								return -899.8328f, 6042.451f, 53.0212f;
							
							case 37:
								return -1576.676f, 5160.763f, 26.8806f;
							
							case 38:
								return 145.5836f, 6866.114f, 38.7097f;
							
							case 39:
								return -50.5306f, 6236.916f, 79.3327f;
							
							case 40:
								return -368.4536f, 6104.72f, 53f;
							
							case 41:
								return -1599.971f, 2104.185f, 80.8163f;
							
							case 42:
								return -1626.487f, 2585.598f, 12.1104f;
							
							case 43:
								return -2064f, 3361.181f, 48.6443f;
							
							case 44:
								return -2357.318f, 3250.916f, 117.4892f;
							
							case 45:
								return -2684.946f, 2304.948f, 39.1557f;
							
							case 46:
								return -772.2781f, 4704.552f, 242.9476f;
							
							case 47:
								return 125.5518f, 3365.379f, 35.8003f;
							
							case 48:
								return -113.0094f, 2803.876f, 67.1096f;
							
							case 49:
								return -179.3538f, 1907.562f, 221.1006f;
							
							case 50:
								return -1235.554f, 1879.036f, 150.8745f;
							
							case 51:
								return 341.9869f, 3569.314f, 63.2875f;
							
							case 52:
								return 391.3682f, 5485.655f, 1000f;
							
							case 53:
								return 311.9317f, 6432.635f, 80.2925f;
							
							case 54:
								return -292.9588f, 5839.533f, 129.366f;
							
							case 55:
								return -1502.468f, 5984.955f, 34.7383f;
							
							case 56:
								return -3449.053f, 2645.437f, 55.2519f;
							
							case 57:
								return -1096.963f, 3225.607f, 147.7444f;
							
							case 58:
								return -278.2971f, 6637.778f, 45.611f;
							
							case 59:
								return 297.8872f, 4013.252f, 33.872f;
							
							case 60:
								return -271.6442f, 5586.137f, 250.6218f;
							
							case 61:
								return -821f, 5419.5f, 58.4f;
							
							case 62:
								return -1734.6f, 3968.5f, 302.8f;
							
							case 63:
								return -2664.1f, 2594f, 3.8f;
							
							case 64:
								return -897.3f, 2797.5f, 28.3f;
							
							case 65:
								return -1158.6f, 4625.5f, 156.7f;
							
							case 66:
								return 618f, 6426.7f, 103.2f;
							
							case 67:
								return 435.1f, 6772.9f, 18.9f;
							
							case 68:
								return -677.8f, 6035f, 27.3f;
							
							case 69:
								return -1445.2f, 5428.6f, 53.5f;
							
							case 70:
								return -384.2f, 4711.1f, 278.4f;
							
							case 71:
								return 911.8f, 4338.1f, 61.8f;
							
							case 72:
								return 518.5f, 5944.8f, 525.2f;
							
							case 73:
								return -1631.5f, 4741.2f, 66.9f;
							
							case 74:
								return -1352.5f, 4147.1f, 125.1f;
							
							case 75:
								return -1138.5f, 2807.2f, 250.4f;
							
							case 76:
								return -540.3f, 4190.5f, 203.6f;
							
							case 77:
								return -166.9f, 4250.2f, 61.7f;
							
							case 78:
								return -88.2f, 4579f, 135.4f;
							
							case joaat("MPSV_LP0_31"):
								return -3051.213f, 4178.12f, 72.7681f;
							
							case 80:
								return -2606.26f, 2993.814f, 30.4219f;
							
							case 81:
								return -2302.76f, 2011.211f, 153.3448f;
							
							case 82:
								return -2254.314f, 1680.506f, 298.8981f;
							
							case 83:
								return -1955.917f, 1772.408f, 201.629f;
							
							case 84:
								return -1751.763f, 1998.548f, 129.1121f;
							
							case 85:
								return -1453.889f, 2069.22f, 65.2848f;
							
							case 86:
								return -1479.386f, 2405.98f, 37.5402f;
							
							case 87:
								return -1041.601f, 3963.552f, 344.3259f;
							
							case 88:
								return -775.5471f, 4048.385f, 310.1201f;
							
							case 89:
								return -883.0366f, 4411.045f, 29.2546f;
							
							case 90:
								return -1215.23f, 4370.065f, 38.5217f;
							
							case 91:
								return -1269.523f, 4386.938f, 1000f;
							
							case 92:
								return -1508.03f, 4446.546f, 59.4166f;
							
							case 93:
								return -1449.331f, 4602.479f, 336.1419f;
							
							case 94:
								return -1640.183f, 5440.63f, 43.1539f;
							
							case 95:
								return -891.0049f, 5157.28f, 187.01f;
							
							case 96:
								return 724.7438f, 5251.831f, 586.2138f;
							
							case 97:
								return 537.1121f, 4647.938f, 274.9371f;
							
							case 98:
								return 64.3661f, 4022.363f, 575.3698f;
							
							case 99:
								return 907.8411f, 3627.435f, 53.8748f;
							
							case 100:
								return 591.9018f, 2977.436f, 82.2499f;
							
							case 101:
								return 259.6137f, 1788.459f, 256.6769f;
							
							case 102:
								return -2092.081f, 2518.016f, 800f;
							
							case 103:
								return -2536.684f, 1678.45f, 196.0372f;
							
							case 104:
								return 52.1855f, 7343.64f, 518.5611f;
							
							case 105:
								return -521.5972f, 6960.141f, 172.8203f;
							
							case 106:
								return -684.2739f, 6467.878f, 165.8478f;
							
							case 107:
								return -1060.232f, 5711.063f, 333.8782f;
							
							case 108:
								return -1786.052f, 5471.512f, 614.6761f;
							
							case 109:
								return -1501.189f, 3295.095f, 245.8079f;
							
							case 110:
								return -2149.145f, 3521.295f, 186.103f;
							
							case 111:
								return 887.6612f, 5610.092f, 697.7338f;
							
							case 112:
								return 451.4696f, 5020.989f, 610.8222f;
							
							case 113:
								return 693.6552f, 4097.276f, 53.8927f;
							
							case 114:
								return -99.6831f, 3960.636f, 80.8691f;
							
							case 115:
								return -579.6645f, 3979.675f, 136.2872f;
							
							case 116:
								return -996.2939f, 4194.288f, 151.0646f;
							
							case 117:
								return -1542.398f, 2886.044f, 1000f;
							
							case 118:
								return -3004.988f, 2333.1f, 209.9484f;
							
							case 119:
								return -3622.204f, 4740.62f, 19.17f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return -2200.786f, 3429.213f, 31.6018f;
							
							case 1:
								return -1873.915f, 2090.595f, 139.9944f;
							
							case 2:
								return -1674.252f, 2301.497f, 59.0047f;
							
							case 3:
								return -506.3776f, 4358.938f, 66.4342f;
							
							case 4:
								return -83.7414f, 4580.993f, 122.1646f;
							
							case 5:
								return -207.3853f, 3598.517f, 60.323f;
							
							case 6:
								return 233.0533f, 3547.927f, 30.2697f;
							
							case 7:
								return 93.7029f, 3597.86f, 38.7393f;
							
							case 8:
								return 327f, 2858f, 42.4386f;
							
							case 9:
								return 158.1294f, 3136.305f, 42.4573f;
							
							case 10:
								return -210.5036f, 2955.358f, 28.941f;
							
							case 11:
								return -288.922f, 2524.722f, 73.6685f;
							
							case 12:
								return -734.5254f, 5594.983f, 34.288f;
							
							case 13:
								return 88.2503f, 6368.129f, 30.2271f;
							
							case 14:
								return -344.4945f, 6242.846f, 30.4877f;
							
							case 15:
								return -267.3751f, 6639.444f, 6.3939f;
							
							case 16:
								return -1444.47f, 5418.419f, 22.2866f;
							
							case 17:
								return -1611.041f, 5258.685f, 2.9791f;
							
							case 18:
								return -1823.203f, 4464.67f, 37.4717f;
							
							case 19:
								return -2488.111f, 2740.839f, 1.8909f;
							
							case 20:
								return -1626.549f, 2587.924f, 1.6362f;
							
							case 21:
								return -1575.299f, 2105.205f, 66.0545f;
							
							case 22:
								return -543.6063f, 1983.754f, 126.0263f;
							
							case 23:
								return -563.8864f, 1886.811f, 122.0349f;
							
							case 24:
								return -592.4536f, 2076.64f, 130.3709f;
							
							case 25:
								return -2497.361f, 2307.194f, 33.1315f;
							
							case 26:
								return -2584.923f, 1931.11f, 166.3129f;
							
							case 27:
								return -1618.161f, 3184.126f, 31.8513f;
							
							case 28:
								return -913.2203f, 2562.701f, 57.2099f;
							
							case 29:
								return -1163.923f, 2408.993f, 92.402f;
							
							case 30:
								return 188.3494f, 2295.03f, 92.7443f;
							
							case 31:
								return -96.8265f, 2224.75f, 159.4986f;
							
							case 32:
								return -834.779f, 4178.558f, 214.3525f;
							
							case 33:
								return -790.3221f, 2901.125f, 18.2471f;
							
							case 34:
								return -799.6998f, 3478.014f, 172.9345f;
							
							case 35:
								return -1347.726f, 4127.416f, 61.6295f;
							
							case 36:
								return -1364.709f, 4848.779f, 144.9459f;
							
							case 37:
								return -2168.336f, 5186.728f, 14.9725f;
							
							case 38:
								return -987.1982f, 5075.115f, 186.5395f;
							
							case 39:
								return 231.926f, 5246.831f, 601.2042f;
							
							case 40:
								return -1.0985f, 5029.458f, 446.6905f;
							
							case 41:
								return -134.3454f, 4916.509f, 353.0826f;
							
							case 42:
								return -434.7882f, 4885.861f, 189.7331f;
							
							case 43:
								return -592.1419f, 5361.79f, 69.3186f;
							
							case 44:
								return 64.7121f, 7052.296f, 15.7854f;
							
							case 45:
								return -577.7616f, 5954.945f, 25.1362f;
							
							case 46:
								return -945.8056f, 4613.758f, 238.1628f;
							
							case 47:
								return -2228.817f, 4218.248f, 45.7951f;
							
							case 48:
								return -2493.361f, 4193.219f, 1.0754f;
							
							case 49:
								return -3073.088f, 3200.413f, 0.9527f;
							
							case 50:
								return 376.4925f, 6630.836f, 27.7626f;
							
							case 51:
								return -1692.925f, 4597.169f, 46.8227f;
							
							case 52:
								return -2587.798f, 3193.551f, 12.9622f;
							
							case 53:
								return -922.5162f, 6131.097f, 6.1891f;
							
							case 54:
								return -112.5477f, 7285.785f, 16.1674f;
							
							case 55:
								return -170.1744f, 6049.716f, 30.1726f;
							
							case 56:
								return 57.7188f, 6673.076f, 30.9499f;
							
							case 57:
								return -501.3606f, 5567.93f, 70.0852f;
							
							case 58:
								return -292.4363f, 5839.495f, 120.8191f;
							
							case 59:
								return -436.1143f, 5707.903f, 61.0179f;
							
							case 60:
								return -494.1112f, 5290.479f, 79.6187f;
							
							case 61:
								return -421.0542f, 5187.812f, 122.5195f;
							
							case 62:
								return -835.7191f, 5261.788f, 79.1947f;
							
							case 63:
								return -873.3408f, 4786.007f, 299.4599f;
							
							case 64:
								return -299.7797f, 4676.5f, 245.6817f;
							
							case 65:
								return -903.4214f, 5176.086f, 153.3577f;
							
							case 66:
								return -869.6852f, 5553.71f, 1.4216f;
							
							case 67:
								return -1210.241f, 5228.673f, 88.4579f;
							
							case 68:
								return -1224.511f, 3854.173f, 488.3926f;
							
							case 69:
								return -688.3312f, 3764.984f, 272.5302f;
							
							case 70:
								return -1829.375f, 3982.997f, 271.9911f;
							
							case 71:
								return -2432.337f, 3535.94f, 33.3233f;
							
							case 72:
								return -1440.526f, 5106.688f, 62.4016f;
							
							case 73:
								return -2258.899f, 3831.759f, 118.1093f;
							
							case 74:
								return -1577.494f, 5162.519f, 18.6627f;
							
							case 75:
								return -2046.334f, 4525.601f, 27.6239f;
							
							case 76:
								return -2189.855f, 4616.937f, 0.5382f;
							
							case 77:
								return 423.4926f, 5613.09f, 765.7494f;
							
							case 78:
								return 501.2704f, 5598.329f, 795.0286f;
							
							case joaat("MPSV_LP0_31"):
								return 625.9471f, 5675.894f, 747.5628f;
							
							case 80:
								return -555.5328f, 5321.449f, 72.5996f;
							
							case 81:
								return -685.9285f, 5233.738f, 92.4703f;
							
							case 82:
								return -213.783f, 6348.989f, 30.5355f;
							
							case 83:
								return -391.0858f, 6341.175f, 25.425f;
							
							case 84:
								return 0.9189f, 3691.594f, 38.5039f;
							
							case 85:
								return -225.4021f, 3664.75f, 63.4125f;
							
							case 86:
								return 714.1616f, 4136.578f, 34.7842f;
							
							case 87:
								return 825.1304f, 4223.49f, 50.8188f;
							
							case 88:
								return 858.3134f, 4423.847f, 30.2196f;
							
							case 89:
								return 335.1393f, 4373.471f, 63.3434f;
							
							case 90:
								return -1474.287f, 2687.972f, 16.6437f;
							
							case 91:
								return -1183.146f, 4927.809f, 222.0748f;
							
							case 92:
								return -892.4783f, 4529.449f, 113.9803f;
							
							case 93:
								return 761.0254f, 6455.407f, 30.7286f;
							
							case 94:
								return 370.5299f, 5453.183f, 691.2834f;
							
							case 95:
								return -376.5987f, 3840.778f, 73.9626f;
							
							case 96:
								return -2077.635f, 3390.068f, 30.1962f;
							
							case 97:
								return -2317.722f, 3398.114f, 29.7812f;
							
							case 98:
								return -2686.153f, 3554.439f, 1.0289f;
							
							case 99:
								return -1869.387f, 4649.492f, 56.0019f;
							
							case 100:
								return -1854.183f, 4809.846f, 1.9984f;
							
							case 101:
								return -683.5417f, 5823.635f, 16.3313f;
							
							case 102:
								return -790.6581f, 5479.023f, 25.889f;
							
							case 103:
								return 482.4343f, 6486.61f, 29.0864f;
							
							case 104:
								return 183.3372f, 7008.858f, 11.2392f;
							
							case 105:
								return 50.2346f, 4325.231f, 43.3996f;
							
							case 106:
								return -28.0941f, 4430.794f, 57.1619f;
							
							case 107:
								return -187.3603f, 4019.421f, 30.6801f;
							
							case 108:
								return -1804.935f, 5315.242f, 0.8688f;
							
							case 109:
								return 81.2546f, 4050.058f, 29.4f;
							
							case 110:
								return -1191.056f, 4389.15f, 4.3f;
							
							case 111:
								return -2188.334f, 2590.943f, -0.4f;
							
							case 112:
								return -2825.633f, 2358.091f, 0.5703f;
							
							case 113:
								return -2047.696f, 4852.304f, 0.6241f;
							
							case 114:
								return -2664.615f, 2597.589f, -0.4f;
							
							case 115:
								return 271.9201f, 7512.879f, -0.5084f;
							
							case 116:
								return -215.5849f, 4284.967f, 29.5257f;
							
							case 117:
								return -2879.157f, 2879.604f, 0.4205f;
							
							case 118:
								return -920.2339f, 5871.843f, 0.4382f;
							
							case 119:
								return -34.7086f, 7618.572f, 0.4933f;
							
							default:
						}
						break;
					}
			}
			break;
		
		case 3:
			if (bParam1)
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 867.3339f, 4198.743f, 75f;
							
							case 1:
								return 1254.176f, 4848.075f, 247.0701f;
							
							case 2:
								return 1676.777f, 5140.256f, 160.2494f;
							
							case 3:
								return 1995.339f, 5021.67f, 68.695f;
							
							case 4:
								return 2599.952f, 5032.021f, 112.432f;
							
							case 5:
								return 2967.309f, 5197.417f, 148.5921f;
							
							case 6:
								return 2876.992f, 5911.252f, 378.2234f;
							
							case 7:
								return 3438.904f, 6144.417f, 10.0202f;
							
							case 8:
								return 3431.106f, 5174.187f, 46.1572f;
							
							case 9:
								return 4080.091f, 4476.533f, 17.0407f;
							
							case 10:
								return 3492.801f, 4619.894f, 65f;
							
							case 11:
								return 3378.036f, 4079.524f, 229.1767f;
							
							case 12:
								return 3944.403f, 3729.657f, 19.5046f;
							
							case 13:
								return 3556.383f, 3684.987f, 67.2346f;
							
							case 14:
								return 3296.121f, 3365.198f, 125f;
							
							case 15:
								return 3290f, 3140.437f, 275.7202f;
							
							case 16:
								return 2948.726f, 2791.748f, 48.6755f;
							
							case 17:
								return 1597.427f, 2599.171f, 95f;
							
							case 18:
								return 1397.009f, 2116.503f, 137.1597f;
							
							case 19:
								return 723.7358f, 2322.695f, 64.6875f;
							
							case 20:
								return 753.2642f, 2581.414f, 161f;
							
							case 21:
								return 564.4257f, 3392.354f, 96.1353f;
							
							case 22:
								return 1191.005f, 3400.265f, 78.9779f;
							
							case 23:
								return 1279.739f, 3100.26f, 53.8507f;
							
							case 24:
								return 1415.487f, 3833.477f, 52.6619f;
							
							case 25:
								return 1488.657f, 3946.224f, 305.2148f;
							
							case 26:
								return 2065.697f, 6451.615f, 149.8928f;
							
							case 27:
								return 2559.717f, 6155.792f, 171f;
							
							case 28:
								return 1502.546f, 6159.08f, 230.8224f;
							
							case 29:
								return 1163.891f, 5965.097f, 413.3012f;
							
							case 30:
								return 772.3428f, 5523.894f, 600f;
							
							case 31:
								return 501.8089f, 5604.274f, 1000.598f;
							
							case 32:
								return 1002.141f, 4786.271f, 185.7696f;
							
							case 33:
								return 587.414f, 5114.912f, 405f;
							
							case 34:
								return 1345.87f, 6384.963f, 52.4688f;
							
							case 35:
								return 754.4042f, 6466f, 49f;
							
							case 36:
								return 1042.216f, 6799.529f, 40.2945f;
							
							case 37:
								return 1779.115f, 5662.172f, 274f;
							
							case 38:
								return 2898.098f, 4327.457f, 107.9208f;
							
							case 39:
								return 2634.35f, 3661.461f, 111.1731f;
							
							case 40:
								return 2045.418f, 3429.524f, 56.3868f;
							
							case 41:
								return 1563.065f, 3572.822f, 41f;
							
							case 42:
								return 2276.492f, 1955.542f, 146.9525f;
							
							case 43:
								return 2379.747f, 2604.982f, 89.7836f;
							
							case 44:
								return 543.5116f, 3080.709f, 63f;
							
							case 45:
								return 2264.604f, 4455.955f, 62.2539f;
							
							case 46:
								return 2410.187f, 2908.336f, 373.9144f;
							
							case 47:
								return 3510.479f, 2569.052f, 16.1615f;
							
							case 48:
								return 3073.721f, 2084.079f, 30f;
							
							case 49:
								return 3319.34f, 2272.217f, 14.2949f;
							
							case 50:
								return 2822.12f, 4977.335f, 70f;
							
							case 51:
								return 1299.971f, 4219.281f, 41f;
							
							case 52:
								return 503.1913f, 4450.17f, 112f;
							
							case 53:
								return 2489.62f, 3760.053f, 53f;
							
							case 54:
								return 1824.499f, 2031.218f, 60.1953f;
							
							case 55:
								return 1153.765f, 2384.4f, 75.2003f;
							
							case 56:
								return 1339.664f, 2747.617f, 79.0765f;
							
							case 57:
								return 542.5154f, 2488.194f, 84.9932f;
							
							case 58:
								return 2767.542f, 2047.162f, 126.1494f;
							
							case 59:
								return 2061.36f, 3941.451f, 200f;
							
							case 60:
								return 873.5367f, 2867.737f, 73.5925f;
							
							case 61:
								return 1752.141f, 3052.542f, 78.6478f;
							
							case 62:
								return 2100.787f, 2339.885f, 133.921f;
							
							case 63:
								return 2738.826f, 3476.466f, 81.564f;
							
							case 64:
								return 2285.089f, 3289.129f, 86.2814f;
							
							case 65:
								return 1745.899f, 3756.127f, 53.8457f;
							
							case 66:
								return 2504.338f, 4418.758f, 55f;
							
							case 67:
								return 1552.003f, 2186.406f, 96f;
							
							case 68:
								return 2716.376f, 4132.656f, 63.7827f;
							
							case 69:
								return 3809.813f, 4462.08f, 36.1286f;
							
							case 70:
								return 3257.82f, 4308.541f, 140f;
							
							case 71:
								return 2268.876f, 5381.432f, 328.4639f;
							
							case 72:
								return 2236.389f, 5604.683f, 71.034f;
							
							case 73:
								return 1986.657f, 6201.739f, 66.4804f;
							
							case 74:
								return 3356.059f, 5696.29f, 20f;
							
							case 75:
								return 2457.263f, 6684.452f, 63.14f;
							
							case 76:
								return 1914.983f, 6702.233f, 14.7976f;
							
							case 77:
								return 2149.811f, 3844.999f, 88.0922f;
							
							case 78:
								return 1880.169f, 4244.354f, 80.3363f;
							
							case joaat("MPSV_LP0_31"):
								return 1791.897f, 4595.955f, 48.6224f;
							
							case 80:
								return 1181.133f, 5151.417f, 772.3138f;
							
							case 81:
								return 431.2495f, 4768.536f, 665.041f;
							
							case 82:
								return 1410.651f, 6569.377f, 26.5039f;
							
							case 83:
								return 1522.466f, 6617.973f, 8f;
							
							case 84:
								return 2316.162f, 6378.738f, 143.7605f;
							
							case 85:
								return 3127.772f, 5566.866f, 317.7646f;
							
							case 86:
								return 3684.367f, 4916.152f, 618.67f;
							
							case 87:
								return 3941.761f, 4652.369f, 92.7624f;
							
							case 88:
								return 3900.581f, 4262.104f, 887.18f;
							
							case 89:
								return 3535.166f, 3778.242f, 46.4187f;
							
							case 90:
								return 3638.854f, 3108.953f, 8.7037f;
							
							case 91:
								return 931.8565f, 2446.375f, 59f;
							
							case 92:
								return 1052.214f, 2277.729f, 95.5547f;
							
							case 93:
								return 411.0964f, 4298.822f, 40.8556f;
							
							case 94:
								return 970.339f, 5647.13f, 650.7467f;
							
							case 95:
								return 2137.105f, 4785.519f, 59.9326f;
							
							case 96:
								return 2333.533f, 4801.554f, 467.9726f;
							
							case 97:
								return 2800.744f, 4745.392f, 370.3547f;
							
							case 98:
								return 2721.061f, 1556.416f, 101.1161f;
							
							case 99:
								return 1855.284f, 1600.665f, 116.8989f;
							
							case 100:
								return 1623.469f, 1518.122f, 294.3194f;
							
							case 101:
								return 923.4011f, 1635.348f, 218.3212f;
							
							case 102:
								return 829.6124f, 1892.871f, 135.5203f;
							
							case 103:
								return 1294.051f, 5675.865f, 472.5645f;
							
							case 104:
								return 1716.85f, 6416.637f, 81.5075f;
							
							case 105:
								return 2140.929f, 5892.89f, 161.9607f;
							
							case 106:
								return 1604.4f, 5793.905f, 429.8526f;
							
							case 107:
								return 1589.65f, 4160.215f, 883.122f;
							
							case 108:
								return 2191.156f, 4208.336f, 477.8802f;
							
							case 109:
								return 1427.64f, 4515.944f, 85.3721f;
							
							case 110:
								return 1206.398f, 4546.814f, 83.0875f;
							
							case 111:
								return 222.2962f, 4746.207f, 280.8666f;
							
							case 112:
								return 287.655f, 5361.114f, 659.2646f;
							
							case 113:
								return 194.6948f, 7393.709f, 1000f;
							
							case 114:
								return 469.5136f, 6745.105f, 14.1624f;
							
							case 115:
								return 537.5068f, 6663.253f, 447.8182f;
							
							case 116:
								return 3227.793f, 6940.11f, 111.4631f;
							
							case 117:
								return 3614.231f, 5883.145f, 9.5207f;
							
							case 118:
								return 3010.254f, 5697.739f, 463.4349f;
							
							case 119:
								return 2874.324f, 6196.489f, 1000f;
							
							default:
						}
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						switch (iParam3)
						{
							case 0:
								return 1581.963f, 2200.244f, 78.0226f;
							
							case 1:
								return 1104.104f, 2399.396f, 53.529f;
							
							case 2:
								return 1089.489f, 2132.943f, 57.0757f;
							
							case 3:
								return 932.5687f, 2434.264f, 49.6778f;
							
							case 4:
								return 586.3744f, 2935.313f, 39.9577f;
							
							case 5:
								return 437.5278f, 3537.285f, 32.3159f;
							
							case 6:
								return 917.2156f, 3648.117f, 35.1053f;
							
							case 7:
								return 1528.585f, 3916.301f, 30.6709f;
							
							case 8:
								return 1924.4f, 3468.064f, 50.6772f;
							
							case 9:
								return 2482.272f, 3761.54f, 40.6483f;
							
							case 10:
								return 2722.307f, 2895.323f, 46.873f;
							
							case 11:
								return 3021.258f, 2881.75f, 85.959f;
							
							case 12:
								return 2096.643f, 2504.604f, 89.6423f;
							
							case 13:
								return 2974.657f, 3485.959f, 70.4429f;
							
							case 14:
								return 3390.08f, 3704.603f, 34.9975f;
							
							case 15:
								return 2908.214f, 4342.968f, 49.3031f;
							
							case 16:
								return 1796.101f, 4920.626f, 47.3851f;
							
							case 17:
								return 2241.987f, 5382.81f, 144.0017f;
							
							case 18:
								return 2218.899f, 5946.263f, 49.634f;
							
							case 19:
								return 1601.463f, 6624.76f, 14.7707f;
							
							case 20:
								return 1406.928f, 6568.621f, 19.3763f;
							
							case 21:
								return 439.5467f, 6459.866f, 34.8699f;
							
							case 22:
								return 1503.687f, 6360.855f, 15.6193f;
							
							case 23:
								return 3316.647f, 5190.359f, 17.4152f;
							
							case 24:
								return 3632.89f, 5003.482f, 11.6053f;
							
							case 25:
								return 3057.659f, 5064.144f, 17.7153f;
							
							case 26:
								return 2822.534f, 4978.232f, 62.4826f;
							
							case 27:
								return 3930.095f, 4399.015f, 15.6116f;
							
							case 28:
								return 3859.284f, 4226.905f, 2.7151f;
							
							case 29:
								return 3692.684f, 4570.595f, 24.1191f;
							
							case 30:
								return 1830.916f, 2542.005f, 44.8856f;
							
							case 31:
								return 2424.308f, 3131.437f, 47.2055f;
							
							case 32:
								return 1340.228f, 2988.934f, 45.0809f;
							
							case 33:
								return 817.1245f, 3379.468f, 76.9467f;
							
							case 34:
								return 563.2202f, 2456.984f, 58.1331f;
							
							case 35:
								return 2041.713f, 2002.479f, 84.9881f;
							
							case 36:
								return 2431.854f, 1986.869f, 82.1812f;
							
							case 37:
								return 1190.872f, 3401.189f, 67.3338f;
							
							case 38:
								return 1943.983f, 3817.853f, 31.0619f;
							
							case 39:
								return 1977.679f, 3054.874f, 49.3235f;
							
							case 40:
								return 452.5827f, 5587.175f, 780.1891f;
							
							case 41:
								return 807.1406f, 5701.082f, 696.9146f;
							
							case 42:
								return 1600.868f, 5804.83f, 414.5815f;
							
							case 43:
								return 1412.016f, 5558.528f, 459.5185f;
							
							case 44:
								return 2279.983f, 5788.728f, 154.1637f;
							
							case 45:
								return 2346.173f, 4997.547f, 41.5868f;
							
							case 46:
								return 2391.918f, 4296.647f, 34.1954f;
							
							case 47:
								return 1364.943f, 4385.975f, 43.3491f;
							
							case 48:
								return 998.6568f, 4453.989f, 59.924f;
							
							case 49:
								return 1058.949f, 4219.405f, 34.273f;
							
							case 50:
								return 870.7486f, 6627.962f, 1.1131f;
							
							case 51:
								return 2721.632f, 4513.5f, 41.1966f;
							
							case 52:
								return 1219.444f, 2744.531f, 37.0054f;
							
							case 53:
								return 2564.32f, 2578.493f, 36.9367f;
							
							case 54:
								return 2827.744f, 5963.866f, 350.6364f;
							
							case 55:
								return 2946.397f, 5326.474f, 100.269f;
							
							case 56:
								return 2211.154f, 3593.324f, 55.1756f;
							
							case 57:
								return 3079.837f, 6027.145f, 129.2854f;
							
							case 58:
								return 3345.3f, 5555.332f, 17.907f;
							
							case 59:
								return 528.5965f, 3092.785f, 39.4652f;
							
							case 60:
								return 2184.891f, 3724.368f, 37.4901f;
							
							case 61:
								return 1471.091f, 4948.712f, 75.0594f;
							
							case 62:
								return 2713.996f, 4141.762f, 42.8723f;
							
							case 63:
								return 2476.558f, 5783.607f, 68.702f;
							
							case 64:
								return 2647.75f, 3281.402f, 54.2127f;
							
							case 65:
								return 2210.976f, 5610.793f, 52.8602f;
							
							case 66:
								return 2898.328f, 2389.586f, 170.4231f;
							
							case 67:
								return 2728.33f, 2616.292f, 95.3074f;
							
							case 68:
								return 1844.478f, 4591.953f, 29.6629f;
							
							case 69:
								return 2432.128f, 4616.881f, 28.1137f;
							
							case 70:
								return 2574.294f, 4653.86f, 33.0768f;
							
							case 71:
								return 1574.009f, 3591.066f, 34.3615f;
							
							case 72:
								return 2008.265f, 4986.431f, 40.3378f;
							
							case 73:
								return 1975.059f, 5182.086f, 46.8906f;
							
							case 74:
								return 1955.895f, 4620.182f, 39.6384f;
							
							case 75:
								return 2279.756f, 4846.217f, 39.2283f;
							
							case 76:
								return 2418.292f, 4784.674f, 33.6784f;
							
							case 77:
								return 2005.109f, 3765.983f, 31.1808f;
							
							case 78:
								return 1719.677f, 3692.743f, 33.513f;
							
							case joaat("MPSV_LP0_31"):
								return 1530.711f, 3076.231f, 39.9815f;
							
							case 80:
								return 1686.366f, 3301.007f, 40.1368f;
							
							case 81:
								return 3481.603f, 3740.488f, 35.6427f;
							
							case 82:
								return 2392.425f, 3334.924f, 46.3672f;
							
							case 83:
								return 2192.154f, 3168.942f, 50.5572f;
							
							case 84:
								return 2354.496f, 2577.063f, 45.6677f;
							
							case 85:
								return 640.7736f, 2777.938f, 40.9601f;
							
							case 86:
								return 2768.528f, 1701.819f, 23.6943f;
							
							case 87:
								return 3239.663f, 3501.223f, 67.723f;
							
							case 88:
								return 2672.952f, 3516.45f, 51.712f;
							
							case 89:
								return 2619.962f, 3661.864f, 100.2808f;
							
							case 90:
								return 2437.504f, 4069.23f, 37.0001f;
							
							case 91:
								return 1685.598f, 6435.691f, 31.3515f;
							
							case 92:
								return 1417.653f, 3818.394f, 31.1351f;
							
							case 93:
								return 3300.7f, 5941.647f, 93.3217f;
							
							case 94:
								return 870.0084f, 2870.564f, 55.9249f;
							
							case 95:
								return 1352.413f, 6401.655f, 32.4101f;
							
							case 96:
								return 1960.858f, 5376.274f, 185.2074f;
							
							case 97:
								return 1974.847f, 6219.958f, 41.2546f;
							
							case 98:
								return 3684.152f, 3795.969f, 15.0641f;
							
							case 99:
								return 2625.796f, 2809.979f, 32.439f;
							
							case 100:
								return 1302.932f, 4234.541f, 32.9137f;
							
							case 101:
								return 577.5187f, 4169.561f, 37.8946f;
							
							case 102:
								return 1069.311f, 2259.363f, 43.4741f;
							
							case 103:
								return 1381.487f, 3633.717f, 34.0073f;
							
							case 104:
								return 3046.249f, 6219.229f, 111.0105f;
							
							case 105:
								return 985.3563f, 5642.3f, 627.7075f;
							
							case 106:
								return 2504.378f, 5178.088f, 67.6632f;
							
							case 107:
								return 2537.341f, 4476.488f, 36.1789f;
							
							case 108:
								return 1291.73f, 4112.564f, 29.6645f;
							
							case 109:
								return 2176.232f, 4605.335f, 29.194f;
							
							case 110:
								return 3456.624f, 5135.376f, -0.3837f;
							
							case 111:
								return 4054.226f, 4518.386f, 0.4f;
							
							case 112:
								return 1074.313f, 6738.594f, 1.3817f;
							
							case 113:
								return 409.7385f, 4290.737f, 29.5f;
							
							case 114:
								return 2551.275f, 6151.57f, 161.1609f;
							
							case 115:
								return 3646.335f, 2977.049f, 0.6928f;
							
							case 116:
								return 1938.372f, 4287.003f, 29.6693f;
							
							case 117:
								return 3630.215f, 5625.841f, 1.2201f;
							
							case 118:
								return 1582.613f, 6753.431f, 0.4436f;
							
							case 119:
								return 3449.314f, 2677.52f, 0.0895f;
							
							default:
						}
						break;
					}
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_114(var uParam0)
{
	struct<3> Var0;
	int iVar1;
	
	Var0.x = -438498801;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = uParam0;
	iVar1 = func_115(1, 1);
	if (!iVar1 == 0)
	{
		unk_0xB802750B43D4047C(1, &Var0, 3, iVar1);
	}
}

var func_115(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = unk_0xF1110FE23C67293A(iVar1);
		if (func_13(iVar2, 0, 0))
		{
			if (iVar2 != unk_0x460153A63B9477BC() || iParam0)
			{
				if (bParam1)
				{
					unk_0xBE20AB8238688965(&uVar0, iVar1);
				}
				else if (!func_95(iVar2, 0))
				{
					unk_0xBE20AB8238688965(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_116(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_117()
{
	return unk_0x344C570D6F8700DF(0, 1);
}

bool func_118()
{
	if (func_120(Local_121.f_712))
	{
		return 0;
	}
	else if (func_119(Local_121.f_712))
	{
		return 1;
	}
	return unk_0x344C570D6F8700DF(0, 2) == 1;
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (Global_262145.f_11133 || Global_262145.f_11125);
		
		case 1:
			return (Global_262145.f_11132 || Global_262145.f_11125);
		
		case 2:
			return (Global_262145.f_11130 || Global_262145.f_11125);
		
		case 3:
			return (Global_262145.f_11131 || Global_262145.f_11125);
		
		default:
	}
	return 0;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (Global_262145.f_11129 || Global_262145.f_11124);
		
		case 1:
			return (Global_262145.f_11128 || Global_262145.f_11124);
		
		case 2:
			return (Global_262145.f_11126 || Global_262145.f_11124);
		
		case 3:
			return (Global_262145.f_11127 || Global_262145.f_11124);
		
		default:
	}
	return 0;
}

int func_121()
{
	var uVar0[4];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iLocal_96 = 1;
	switch (iLocal_96)
	{
		case 0:
			return unk_0x344C570D6F8700DF(0, 4);
			break;
		
		case 1:
			iVar1 = func_122(&uVar0);
			iVar2 = unk_0x344C570D6F8700DF(0, iVar1);
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (iVar2 >= iVar4 && iVar2 < (uVar0[iVar3] + iVar4))
				{
					return iVar3;
				}
				iVar4 = (iVar4 + uVar0[iVar3]);
				iVar3++;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
	}
	return unk_0x344C570D6F8700DF(0, 4);
}

int func_122(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iVar0)))
		{
			iVar6 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iVar0));
			if (func_13(iVar6, 1, 1))
			{
				iVar7 = unk_0x1FA7B77001D60F9D(iVar6);
				if (!unk_0x5AEB5DDFFAD43CA5(iVar7))
				{
					iVar5 = 0;
					while (iVar5 < 4)
					{
						if (!func_124(iVar5))
						{
							if (func_123(iVar5, &Var2, &Var3))
							{
								if (unk_0xD79BDB7193E12293(iVar7, Var2, Var3, 0, 0, 0))
								{
									bVar4 = false;
									(*uParam0)[iVar5]++;
									iVar1++;
								}
							}
						}
						iVar5++;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar4)
	{
		iVar5 = 0;
		while (iVar5 < 4)
		{
			if (!func_124(iVar5))
			{
				(*uParam0)[iVar5] = 1;
			}
			iVar5++;
		}
	}
	return iVar1;
}

int func_123(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 283f, -3946f, 0f };
			*uParam2 = { 4500f, 1924f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { -3747f, -3946f, 0f };
			*uParam2 = { 550f, 1868f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { -3747f, 1540f, 0f };
			*uParam2 = { 452.5f, 8022f, 0f };
			return 1;
		
		case 3:
			*uParam1 = { 268f, 1946f, 0f };
			*uParam2 = { 4500f, 8022f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

bool func_124(int iParam0)
{
	return (func_120(iParam0) && func_119(iParam0));
}

var func_125()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		iVar2 = unk_0x628A51AC66E80772(iVar0);
		if (unk_0xBD09DF93F957A0CF(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= Global_262145.f_11138)
	{
		return Global_262145.f_11024;
	}
	if (iVar1 >= Global_262145.f_11137)
	{
		return Global_262145.f_11023;
	}
	if (iVar1 >= Global_262145.f_11136)
	{
		return Global_262145.f_10197;
	}
	return Global_262145.f_10197;
}

void func_126()
{
	int iVar0;
	
	if (func_34())
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Local_121.f_713[iVar0] == unk_0x59E2AD1A8ACEDA31())
			{
				if (func_127(iVar0))
				{
					if (!unk_0xCE990E643CD9D0E5(Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_1, iVar0))
					{
						unk_0xBE20AB8238688965(&(Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_1), iVar0);
					}
				}
				else if (unk_0xCE990E643CD9D0E5(Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_1, iVar0))
				{
					unk_0xD2459066EA58CE43(&(Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_1), iVar0);
				}
			}
			else if (unk_0xCE990E643CD9D0E5(Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_1, iVar0))
			{
				unk_0xD2459066EA58CE43(&(Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_1), iVar0);
			}
			iVar0++;
		}
	}
}

int func_127(int iParam0)
{
	struct<3> Var0;
	var uVar1;
	
	if (func_32(iParam0, &Var0, &uVar1))
	{
		if (func_128(Var0, 10f, 1065353216, 5f, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_128(struct<3> Param0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
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
		if (func_133(Param0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405074.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_129(Param0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405074.f_2++;
	return 1;
}

int func_129(struct<3> Param0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_13(unk_0x460153A63B9477BC(), 1, 1))
		{
			if (!unk_0x03DB5C6AABF8DA46())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (unk_0x272784C60C397DB6(func_131(unk_0x460153A63B9477BC()), Param0, 1) <= (fVar2 + fParam1))
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
		if (func_13(iVar1, 1, 1))
		{
			if (!func_95(iVar1, 0) && unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x460153A63B9477BC()))
				{
					if ((func_130(iVar1) || !bParam8) && !Global_2425869[iVar1 /*443*/].f_263)
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
								if (unk_0x272784C60C397DB6(func_131(iVar1), Param0, 1) <= (fVar2 + fParam1))
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
							if (unk_0x272784C60C397DB6(func_131(iVar1), Param0, 1) <= (fVar2 + fParam1))
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

int func_130(int iParam0)
{
	if (unk_0xEB7D4DA50142DE0A(unk_0x1FA7B77001D60F9D(iParam0)) || Global_2425869[iParam0 /*443*/].f_249)
	{
		return 1;
	}
	return 0;
}

Vector3 func_131(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_56() && Global_1590682[iVar0 /*883*/].f_854) && !func_132(Global_1590682[iVar0 /*883*/].f_855))
	{
		return Global_1590682[iVar0 /*883*/].f_855;
	}
	return func_31(iParam0);
}

int func_132(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_133(struct<3> Param0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && unk_0x460153A63B9477BC() != iVar1) || iParam6 == 0)
		{
			if (func_13(iVar1, bParam2, bParam3))
			{
				if (unk_0x56B60AE958412839(unk_0x460153A63B9477BC(), iVar1))
				{
					if (!bParam5 || (!unk_0x5AEB5DDFFAD43CA5(unk_0x1FA7B77001D60F9D(iVar1)) && func_130(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) != unk_0x6CC163E30ECE0790(iVar1))) || unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1)
						{
							if (((unk_0x6CC163E30ECE0790(unk_0x460153A63B9477BC()) == -1 && uParam7) && bParam4) && func_134(iVar1))
							{
							}
							else if (unk_0xAE06B9E39EBDE049(unk_0x1FA7B77001D60F9D(iVar1)))
							{
								if (unk_0x272784C60C397DB6(func_31(iVar1), Param0, 1) < fParam1)
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

int func_134(int iParam0)
{
	if (func_137(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	Global_2515173 = { func_136(iParam0) };
	if (unk_0x78A7795C9C51946D(&Global_2515173))
	{
		return 1;
	}
	if (func_135(unk_0x460153A63B9477BC(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_135(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_80(iParam0);
	if (!iVar0 == func_97())
	{
		if (iVar0 == func_80(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_136(int iParam0)
{
	struct<13> Var0;
	
	unk_0x2BDD80E79441BD36(iParam0, &Var0, 13);
	return Var0;
}

int func_137(int iParam0, int iParam1)
{
	if (unk_0xE2FBD13450B2DA21())
	{
		Global_2515173 = { func_136(iParam0) };
		Global_2515186 = { func_136(iParam1) };
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

void func_138()
{
	int iVar0;
	int iVar1;
	
	func_648();
	if (func_646())
	{
		func_527();
	}
	if (func_526(unk_0x460153A63B9477BC()) || func_525(unk_0x460153A63B9477BC()))
	{
		func_524();
	}
	if ((!func_6(unk_0x460153A63B9477BC()) && !func_523(0)) && !func_523(func_522(132)))
	{
		if (func_497(0, 1, 1))
		{
			if (unk_0xCE990E643CD9D0E5(iLocal_86, 3))
			{
				unk_0xD2459066EA58CE43(&iLocal_86, 3);
			}
			switch (Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_3)
			{
				case 0:
					if (Local_121.f_8 == 1)
					{
						func_496(1);
						func_495(1);
					}
					else if (Local_121.f_8 >= 2)
					{
						func_495(1);
					}
					break;
				
				case 1:
					func_491(6);
					if (Local_121.f_8 >= 2)
					{
						func_495(2);
					}
					func_491(2);
					func_489(0);
					func_487((Global_262145.f_11122 - func_488(&(Local_121.f_667), 0, 0)));
					func_484(func_486((Global_262145.f_11122 - func_488(&(Local_121.f_667), 0, 0)), 0), func_485(-1));
					func_462();
					break;
				
				case 2:
					if (Local_121.f_8 > 2)
					{
						func_496(0);
						func_443(132, 1065353216, 1065353216, 0, 0, 0, 0);
						if (!func_6(unk_0x460153A63B9477BC()))
						{
							func_442();
						}
						else
						{
							unk_0xBE20AB8238688965(&iLocal_86, 5);
						}
						if (Local_121.f_710)
						{
							func_441();
						}
						if (Local_121.f_707)
						{
							Global_2540384.f_5107 = 1;
						}
						else
						{
							Global_2540384.f_5107 = 0;
						}
						func_440();
						if (!func_6(unk_0x460153A63B9477BC()))
						{
							if (func_34())
							{
								func_425(678f, 794f, 206f, 8f, 0);
								func_425(1911.3f, 4714.6f, 41.1f, 8f, 0);
								func_425(688.5021f, 735.4581f, 181.296f, 8f, 0);
							}
						}
						func_495(3);
					}
					break;
				
				case 3:
					if (Local_121.f_8 > 3)
					{
						func_495(4);
					}
					else
					{
						if (!iLocal_106)
						{
							if (func_424())
							{
								iLocal_106 = 1;
							}
						}
						iVar1 = 0;
						while (iVar1 < Local_121.f_709)
						{
							if (uLocal_88[iVar1] || iLocal_106)
							{
								func_319(iVar1);
							}
							iVar1++;
						}
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uLocal_88[iLocal_82] = func_318(iLocal_82);
							uLocal_87[iLocal_82] = func_316(iLocal_82);
							if (!uLocal_87[iLocal_82])
							{
								func_319(iLocal_82);
							}
							iLocal_82++;
							if (iLocal_82 >= Local_121.f_709)
							{
								iLocal_82 = 0;
							}
							iVar0++;
						}
						func_489(0);
						func_491(4);
						func_491(5);
						if (func_314(0) && !func_313(0))
						{
							func_312();
						}
						if ((!func_311(unk_0x460153A63B9477BC()) && !unk_0xF0C12886E5C1B20E()) && !unk_0x19D4274B54F9D9FA())
						{
							func_310();
						}
						func_309();
					}
					func_306();
					func_305();
					func_442();
					func_285();
					func_462();
					break;
				
				case 4:
					func_192();
					func_176();
					func_175();
					func_489(1);
					func_174();
					func_285();
					if (func_163(&uLocal_108, !unk_0xCE990E643CD9D0E5(Local_121.f_2, 2)) || unk_0xCE990E643CD9D0E5(Local_121.f_2, 2))
					{
						if (func_34())
						{
							func_495(5);
						}
						else
						{
							func_495(6);
						}
					}
					break;
				
				case 5:
					if (Local_121.f_8 > 5)
					{
						func_495(6);
					}
					break;
				
				case 6:
					break;
			}
		}
		else
		{
			func_158();
		}
	}
	else
	{
		func_524();
		func_158();
	}
	func_145();
	func_140();
	func_139();
}

void func_139()
{
	struct<2> Var0;
	int iVar1;
	
	if (func_34())
	{
		Var0 = { Local_121.f_729[iLocal_97 /*2*/] };
		if (unk_0xF7DE07F319727299(Var0.f_1))
		{
			iVar1 = unk_0x770D3B2B4702434A(Var0.f_1);
			if (unk_0xAA5B806352173DEA(iVar1))
			{
				if (!unk_0x80FF6C016CDB0FAF(iVar1, 0))
				{
					unk_0xE730EAF558C97567(&iVar1);
				}
			}
		}
		iLocal_97++;
		if (iLocal_97 >= 10)
		{
			iLocal_97 = 0;
			iLocal_119 = iLocal_118;
			iLocal_118 = 0;
		}
	}
}

void func_140()
{
	if (Local_121.f_8 == 5)
	{
		if (func_38(&(Local_121.f_669)))
		{
			if (unk_0xF7DE07F319727299(Local_121.f_729[iLocal_97 /*2*/].f_1))
			{
				if (!unk_0xA59F96B50B97E63C(unk_0x770D3B2B4702434A(Local_121.f_729[iLocal_97 /*2*/].f_1), 0))
				{
					if (!unk_0xCE990E643CD9D0E5(iLocal_116, iLocal_97))
					{
						unk_0xBE20AB8238688965(&iLocal_116, iLocal_97);
						iLocal_117[iLocal_97] = unk_0x5E54B0823F46079E();
						unk_0x2DB2D4C3CB88500D(iLocal_117[iLocal_97], "Explosion_Countdown", unk_0x770D3B2B4702434A(Local_121.f_729[iLocal_97 /*2*/].f_1), "GTAO_FM_Events_Soundset", 0, 0);
						unk_0xD4974F3117C9F232(iLocal_117[iLocal_97], "Time", 30f);
					}
					if ((30000 - func_488(&(Local_121.f_669), 0, 0)) >= 0)
					{
						if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), unk_0x770D3B2B4702434A(Local_121.f_729[iLocal_97 /*2*/].f_1), 0))
						{
							func_491(3);
							iLocal_118 = 1;
						}
					}
					else if (unk_0xF05B7723022657B3(Local_121.f_729[iLocal_97 /*2*/].f_1))
					{
						unk_0xBB7976F6FB9C9DD2(unk_0x770D3B2B4702434A(Local_121.f_729[iLocal_97 /*2*/].f_1));
						unk_0x9B751DD1E3DE899A(unk_0x770D3B2B4702434A(Local_121.f_729[iLocal_97 /*2*/].f_1), 1, 0, -1);
					}
				}
				else if (unk_0xCE990E643CD9D0E5(iLocal_116, iLocal_97) && !unk_0x046706CBB367B768(iLocal_117[iLocal_97]))
				{
					unk_0xC5E5600D1CF5CEF9(iLocal_117[iLocal_97]);
				}
			}
			if (iLocal_119)
			{
				if (!func_93(unk_0x460153A63B9477BC()))
				{
					func_142(func_486((30000 - func_488(&(Local_121.f_669), 0, 0)), 0), "HTV_DESTR", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0, -1);
					func_141();
				}
			}
		}
	}
}

void func_141()
{
	Global_1378744.f_1130 = 1;
}

void func_142(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_144(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_143(7, iVar0);
		Global_1378744.f_4573[iVar0] = uParam0;
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

void func_143(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_1378744.f_6304[iParam0]), iParam1);
}

bool func_144(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1378744.f_6304[iParam0], iParam1);
}

void func_145()
{
	char* sVar0;
	
	if (((func_13(unk_0x460153A63B9477BC(), 1, 1) && !func_6(unk_0x460153A63B9477BC())) && !func_525(unk_0x460153A63B9477BC())) && func_497(0, 1, 1))
	{
		if (Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_3 == 1)
		{
			if (Local_121.f_707)
			{
				sVar0 = "CPC_TILELA";
			}
			else
			{
				sVar0 = "CPC_TILEL";
			}
			if (func_34() && !unk_0x642A35A076CECC5A(unk_0x9B0761B4C3EB8BC7()))
			{
				func_146("CPC_PREPAIR", sVar0, func_157(), 0);
			}
			else
			{
				func_146("CPC_PREP", sVar0, func_157(), 0);
			}
		}
		else
		{
			func_440();
		}
	}
	else
	{
		func_440();
	}
}

int func_146(char* sParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	if (unk_0xA221A4BC051BFCCE(sParam0) > 23)
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam1))
	{
		return 0;
	}
	if (unk_0xA221A4BC051BFCCE(sParam1) > 23)
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam2))
	{
		return 0;
	}
	if (unk_0xA221A4BC051BFCCE(sParam2) > 23)
	{
		return 0;
	}
	if (func_156(sParam0, sParam1, sParam2))
	{
		return 0;
	}
	func_150();
	Global_1312603 = 4;
	StringCopy(&(Global_1312603.f_1), unk_0x6C5C6B207AA78253(), 32);
	Global_1312603.f_9 = unk_0x856D5567211886A2(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	StringCopy(&(Global_1312603.f_16), sParam1, 64);
	StringCopy(&(Global_1312603.f_32), sParam2, 64);
	func_149();
	func_148(bParam3);
	func_147();
	return 1;
}

void func_147()
{
	unk_0xBE20AB8238688965(&(Global_1312603.f_59), 1);
}

void func_148(bool bParam0)
{
	if (bParam0)
	{
		unk_0xBE20AB8238688965(&(Global_1312603.f_59), 0);
		return;
	}
	unk_0xD2459066EA58CE43(&(Global_1312603.f_59), 0);
}

void func_149()
{
	Global_1312603.f_10 = unk_0x8C358101651A3F7C(unk_0x6CAAB7E78B5D978A(), 86400000);
	Global_1312603.f_11 = unk_0x6CAAB7E78B5D978A();
}

void func_150()
{
	func_152();
	func_151(0);
}

void func_151(bool bParam0)
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

void func_152()
{
	if (!func_155())
	{
	}
	if (func_154())
	{
		unk_0x6BF33E036B49E0DD(&(Global_1312603.f_12));
		func_153();
		unk_0x9F579D40FBAC4233();
	}
}

void func_153()
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

int func_154()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

int func_155()
{
	if (!func_154())
	{
		return 0;
	}
	unk_0xCD7691F7F3015C57(&(Global_1312603.f_12));
	func_153();
	return unk_0x5E0AC8AED85CE7CB();
}

bool func_156(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_154())
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam0))
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam1))
	{
		return 0;
	}
	if (unk_0x7BCC91F3C1CF24E8(sParam2))
	{
		return 0;
	}
	if (!unk_0x856D5567211886A2(sParam0) == unk_0x856D5567211886A2(&(Global_1312603.f_12)))
	{
		return 0;
	}
	if (!unk_0x856D5567211886A2(sParam1) == unk_0x856D5567211886A2(&(Global_1312603.f_16)))
	{
		return 0;
	}
	return unk_0x856D5567211886A2(sParam2) == unk_0x856D5567211886A2(&(Global_1312603.f_32));
}

char* func_157()
{
	switch (Local_121.f_712)
	{
		case 0:
			return "CPC_WARN0";
			break;
		
		case 1:
			return "CPC_WARN1";
			break;
		
		case 2:
			return "CPC_WARN2";
			break;
		
		case 3:
			return "CPC_WARN3";
			break;
	}
	return "";
}

void func_158()
{
	if (!unk_0xCE990E643CD9D0E5(iLocal_86, 3))
	{
		iLocal_106 = 1;
		func_175();
		unk_0xF6D7145773FE3ADD();
		func_489(1);
		func_162();
		func_160();
		unk_0xBE20AB8238688965(&iLocal_86, 3);
		func_159();
	}
}

void func_159()
{
	Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_7 = 0;
}

void func_160()
{
	if (Global_2413905.f_6 == unk_0x354AD085195C5FA6())
	{
		func_161();
	}
}

void func_161()
{
	struct<28> Var0;
	
	if (unk_0x7FD2BDF03806FD9D(Global_2413905.f_6))
	{
		if (!Global_2413905.f_6 == unk_0x354AD085195C5FA6())
		{
			return;
		}
	}
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	Global_2413905 = { Var0 };
	Global_2413905.f_6 = -1;
}

void func_162()
{
	struct<6> Var0;
	
	if (Global_2405074.f_487.f_1 == unk_0x354AD085195C5FA6())
	{
		Global_2405074.f_487 = { Var0 };
	}
}

int func_163(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_173()) && !(func_107(unk_0x460153A63B9477BC(), 0) && (func_103(unk_0x460153A63B9477BC()) || func_172(unk_0x460153A63B9477BC())))) && !func_170(unk_0x460153A63B9477BC()))
	{
		func_169();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_38(&(uParam0->f_3)))
			{
				func_2(&(uParam0->f_3), 0, 0);
			}
			else if (func_1(&(uParam0->f_3), 1000, 0))
			{
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 25);
				if (bParam1)
				{
					unk_0xBE20AB8238688965(&(Global_2540384.f_4652), 0);
					func_2(&(uParam0->f_5), 0, 0);
				}
				func_2(&(uParam0->f_1), 0, 0);
				func_168(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_38(&(uParam0->f_5)))
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
				func_165();
				func_168(uParam0, 2);
			}
			break;
		
		case 2:
			func_165();
			if (func_1(&(uParam0->f_1), 15000, 0))
			{
				if (func_164("AMEV_LBD_HELP"))
				{
					unk_0xD289B55B6AADBA10(1);
				}
				func_168(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_1(&(uParam0->f_1), 23500, 0))
			{
				unk_0xD2459066EA58CE43(&(Global_2540384.f_4652), 1);
				func_168(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			unk_0xD2459066EA58CE43(&(Global_2540384.f_4652), 1);
			return 1;
	}
	return 0;
}

int func_164(char* sParam0)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_165()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 0))
	{
		if (((((!unk_0xEBB78303C505A9D7() && !unk_0xCE990E643CD9D0E5(Global_2540384.f_833, 2)) && func_13(unk_0x460153A63B9477BC(), 1, 1)) && !Global_74030) && !Global_58898) && !unk_0x03DB5C6AABF8DA46())
		{
			unk_0xBE20AB8238688965(&(Global_2540384.f_4652), 1);
			func_167("AMEV_LBD_HELP", -1);
			func_166(1);
			unk_0xD2459066EA58CE43(&(Global_2540384.f_4652), 0);
		}
	}
}

void func_166(int iParam0)
{
	unk_0x642EF0F7FC397A2C(3, 21, 200, 0, 0);
	if (iParam0 && !func_173())
	{
		unk_0xC4CC25B68A91D144(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_167(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, 0, iParam1);
}

void func_168(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_169()
{
	Global_2463793 = 1;
}

int func_170(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_171(Global_2425869[iParam0 /*443*/].f_314.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_171(int iParam0)
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

bool func_172(int iParam0)
{
	return func_102(iParam0, 19);
}

bool func_173()
{
	return Global_2440049.f_2834[0 /*80*/].f_1 != 0;
}

void func_174()
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

void func_175()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_121.f_709)
	{
		if (unk_0x8F678487EEBD8CE4(Local_104[iVar0 /*3*/]))
		{
			unk_0x93370FA10F15BE44(&(Local_104[iVar0 /*3*/]));
			unk_0x81122FA03A336E26(Local_104[iVar0 /*3*/].f_1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_94[iVar0] = 0;
		iVar0++;
	}
}

void func_176()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	
	if (!unk_0xCE990E643CD9D0E5(Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_2, 0) && (func_191() || unk_0xCE990E643CD9D0E5(Local_121.f_2, 2)))
	{
		if (func_59(func_190()))
		{
			func_189();
		}
		if (!unk_0xCE990E643CD9D0E5(Local_121.f_2, 2))
		{
			if (func_314(0))
			{
				if (func_313(0))
				{
					if (!unk_0xCE990E643CD9D0E5(Local_121.f_2, 0))
					{
						sVar0 = "CPC_END";
					}
					else
					{
						sVar0 = "CPC_ENDBONUS";
					}
					func_188(64, Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_4, sVar0, "AMCH_WIN", 1, 15000, -1082130432, 2);
				}
				else
				{
					iVar1 = unk_0x628A51AC66E80772(Local_121.f_674[0]);
					if (unk_0xBD09DF93F957A0CF(iVar1))
					{
						iVar2 = unk_0x9019589211A13B02(iVar1);
						if (func_313(1))
						{
							if (!unk_0xCE990E643CD9D0E5(Local_121.f_2, 0))
							{
								sVar0 = "CPC_2ND";
							}
							else
							{
								sVar0 = "CPC_2NDBONUS";
							}
							func_188(67, Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_4, sVar0, "CPC_OVER", 1, 15000, -1082130432, 2);
						}
						else if (func_313(2))
						{
							if (!unk_0xCE990E643CD9D0E5(Local_121.f_2, 0))
							{
								sVar0 = "CPC_3RD";
							}
							else
							{
								sVar0 = "CPC_3RDBONUS";
							}
							func_188(67, Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_4, sVar0, "CPC_OVER", 1, 15000, -1082130432, 2);
						}
						else
						{
							if (unk_0xCE990E643CD9D0E5(Local_121.f_2, 0) && Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_4 >= Global_262145.f_11282)
							{
								sVar0 = "CPC_LOSEBONUS";
							}
							else
							{
								sVar0 = "CPC_LOSE";
							}
							sVar3 = unk_0x72C1D3A1AB8CAA5B(iVar2);
							if (func_81(iVar2, 1))
							{
								sVar3 = func_179(iVar2);
							}
							func_178(66, Local_1488[Local_121.f_674[0] /*5*/].f_4, sVar0, sVar3, "CPC_OVER", 1, 15000, 2);
						}
					}
				}
			}
			else
			{
				func_44(66, "CPC_OVER", "CPC_NOWIN", 1, 15000, 2, 1, 0);
			}
		}
		else
		{
			func_43("", "", 1);
		}
		unk_0xBE20AB8238688965(&(Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_2), 0);
		func_177(132);
	}
}

void func_177(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

int func_178(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
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
	func_100(iParam0, &Var0, iParam1, sParam2, sParam4);
	StringCopy(&(Var0.f_25), sParam3, 64);
	Var0.f_71 = iParam5;
	Var0.f_6 = iParam6;
	Var0.f_72 = iParam7;
	return func_45(&Var0);
}

char* func_179(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		sVar0 = func_187(&(Global_1630317[iParam0 /*595*/].f_11.f_104));
		return sVar0;
	}
	if (Global_1630317[iParam0 /*595*/].f_11.f_120 != Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_120)
	{
		sVar0 = func_182(iParam0, 0);
		return sVar0;
	}
	if (((func_102(iParam0, 28) || func_102(unk_0x460153A63B9477BC(), 28)) || func_181(iParam0)) && !func_180(iParam0))
	{
		return func_182(iParam0, 0);
	}
	iVar1 = func_80(iParam0);
	if (iVar1 != func_97())
	{
		if (iVar1 != unk_0x460153A63B9477BC())
		{
			if (!unk_0xC6C08C02733D02C8() && !unk_0xB454B9D1010ED3BA(0, -1, 1))
			{
				return func_182(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_97())
	{
		sVar0 = func_187(&(Global_1630317[iVar1 /*595*/].f_11.f_104));
		if (unk_0x7BCC91F3C1CF24E8(sVar0))
		{
			return func_182(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_180(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_136(iParam0) };
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

int func_181(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_97())
	{
		Var0 = { func_136(iParam0) };
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

char* func_182(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_184(iParam0, 1))
		{
			return func_183();
		}
	}
	return unk_0x7C774D8CB8DC6FE3("GB_REST_ACC");
}

char* func_183()
{
	return unk_0x7C774D8CB8DC6FE3("GB_REST_ACCM");
}

bool func_184(int iParam0, bool bParam1)
{
	return func_185(iParam0, bParam1, 1);
}

int func_185(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_97())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_186(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630317[iParam0 /*595*/].f_11;
	if (iVar0 != func_97() && Global_1630317[iVar0 /*595*/].f_11.f_423 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_186(int iParam0, int iParam1)
{
	if (iParam0 != func_97())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_97())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 == iParam0 && Global_1630317[iParam0 /*595*/].f_11.f_423 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

var func_187(var uParam0)
{
	return uParam0;
}

int func_188(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
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
	func_100(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	return func_45(&Var0);
}

void func_189()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2440049.f_2834[iVar0 /*80*/].f_2 != 0)
		{
			Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
			func_98(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

int func_190()
{
	return Global_2440049.f_2834[0 /*80*/].f_1;
}

bool func_191()
{
	return unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 25);
}

void func_192()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	
	if (!unk_0xCE990E643CD9D0E5(Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_2, 1))
	{
		if (func_6(unk_0x460153A63B9477BC()))
		{
			unk_0xBE20AB8238688965(&(Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_2), 1);
			return;
		}
		if (func_525(unk_0x460153A63B9477BC()))
		{
			unk_0xBE20AB8238688965(&(Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_2), 1);
			return;
		}
		if (Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_4 >= Global_262145.f_11282)
		{
			iVar3 = floor(((to_float((Local_121.f_1 - iLocal_84)) / 60f) / 1000f));
			if (iVar3 > Global_262145.f_11443)
			{
				iVar3 = Global_262145.f_11443;
			}
			else if (iVar3 < 1)
			{
				iVar3 = 1;
			}
			iVar2 = (func_284() * iVar3);
			iVar1 = (func_283() * iVar3);
		}
		else
		{
			func_281(0);
		}
		if (!unk_0xCE990E643CD9D0E5(Local_121.f_2, 2))
		{
			if (Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_4 >= Global_262145.f_11282)
			{
				if (unk_0xCE990E643CD9D0E5(Local_121.f_2, 0))
				{
					iVar0 = (iVar0 + round((IntToFloat(func_280()) * Global_262145.f_11454)));
				}
			}
			if (func_313(0))
			{
				Local_1487.f_5 = 1;
				iVar1 = (iVar1 + round((IntToFloat(func_279()) * Global_262145.f_11455)));
			}
			if ((Local_121.f_674[0] != unk_0x59E2AD1A8ACEDA31() && Local_121.f_674[1] != unk_0x59E2AD1A8ACEDA31()) && Local_121.f_674[2] != unk_0x59E2AD1A8ACEDA31())
			{
				if (Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_4 >= Global_262145.f_11282)
				{
					func_281(1);
				}
			}
		}
		func_260(&iVar0, 1);
		iVar0 = (iVar0 + iVar2);
		if (iVar0 > 0)
		{
			if (func_259())
			{
				func_247(-59668082, iVar0, &uVar4, 0, 1, 0);
			}
			else
			{
				unk_0x41E465DD667BCD29(iVar0, "AM_CP_COLLECTION", &uVar5);
			}
		}
		Local_1487.f_6 = iVar0;
		if (!Global_262145.f_11507)
		{
			if (Local_1487.f_6 > 0)
			{
				func_246(8, Local_1487.f_6);
			}
		}
		Global_2464451 = iVar0;
		func_245();
		func_193(0, unk_0x9B0761B4C3EB8BC7(), "", -1636175450, -1253457806, iVar1, 1, -1, 0, 0, 0);
		Local_1487.f_7 = (Local_1487.f_7 + iVar1);
		unk_0xBE20AB8238688965(&(Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_2), 1);
	}
}

int func_193(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_194(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_194(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_204(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (unk_0xAE06B9E39EBDE049(iParam1))
		{
			if (unk_0xA1914E72A0EB31D0(iParam1))
			{
				iVar1 = unk_0x9048E8838E822F21(iParam1);
				func_200(unk_0x1D5C49FCA9BC5B02(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_195(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_195(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_198(iParam0, 1) };
	if (iParam0 == func_197(unk_0x9B0761B4C3EB8BC7()))
	{
		func_196(1);
	}
	func_200(Var0, iParam1, 0, sParam2, iParam3);
}

void func_196(int iParam0)
{
	Global_2440049.f_2002 = iParam0;
}

int func_197(int iParam0)
{
	return iParam0;
}

Vector3 func_198(int iParam0, bool bParam1)
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
	if (iParam0 == func_199(unk_0x9B0761B4C3EB8BC7()) && unk_0xF7B3A1430308F92B(unk_0xFA3A11B011BBD7F6()) == 4)
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

int func_199(int iParam0)
{
	return iParam0;
}

void func_200(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)
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
			Global_2440049.f_1401[iVar1 /*30*/].f_4 = func_203(Global_2440049.f_1401[iVar1 /*30*/], &Global_1312335, &Global_1312336);
			Global_2440049.f_1401[iVar1 /*30*/].f_7 = unk_0x6CAAB7E78B5D978A();
			Global_2440049.f_1401[iVar1 /*30*/].f_3 = iParam1;
			Global_2440049.f_1401[iVar1 /*30*/].f_8 = iParam2;
			Global_2440049.f_1401[iVar1 /*30*/].f_9 = func_202();
			Global_2440049.f_1401[iVar1 /*30*/].f_10 = func_201();
			StringCopy(&(Global_2440049.f_1401[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2440049.f_1401[iVar1 /*30*/].f_26 = unk_0x8C358101651A3F7C(unk_0x6CAAB7E78B5D978A(), iParam4);
		}
	}
}

int func_201()
{
	if (Global_2440049.f_2002)
	{
		Global_2440049.f_2002 = 0;
		return 1;
	}
	Global_2440049.f_2002 = 0;
	return 0;
}

var func_202()
{
	var uVar0;
	
	uVar0 = Global_2440049.f_2004;
	Global_2440049.f_2004 = 1;
	return uVar0;
}

float func_203(struct<3> Param0, var uParam1, var uParam2)
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

var func_204(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_205(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_205(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_244(unk_0x460153A63B9477BC()) || func_243(unk_0x460153A63B9477BC()))
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
	else if (func_241() || func_238(unk_0x460153A63B9477BC()))
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
	if (func_237(sParam2))
	{
	}
	if (func_236())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_234(iVar1);
		fVar3 = (to_float(iVar1) * Global_262145.f_1);
		iVar1 = round(fVar3);
		if (bParam10)
		{
			iVar1 = func_233(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_231(0, &iVar1);
					break;
				
				case 3:
					func_231(1, &iVar1);
					break;
				
				case 1:
					func_229(&iVar1);
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
			func_226(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_215((func_225(unk_0x460153A63B9477BC()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				unk_0xC0B1609C742F66E3(iVar1, iParam8, iParam9);
				if (Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_2 != -1)
				{
					func_226(1165, iVar1, -1);
				}
				func_210(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_206((func_208(unk_0x460153A63B9477BC()) + iVar1));
			}
			else
			{
				func_206((func_208(unk_0x460153A63B9477BC()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_206(int iParam0)
{
	if (func_236())
	{
		Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_5 = iParam0;
		func_207(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_207(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, 1);
	}
}

int func_208(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_13(iParam0, 0, 1))
		{
			if (iParam0 == unk_0x460153A63B9477BC())
			{
				return func_209(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_5;
			}
		}
		else
		{
			return func_209(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_209(int iParam0)
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

void func_210(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_136(unk_0x460153A63B9477BC()) };
	if (unk_0xE2FBD13450B2DA21())
	{
		if (unk_0xBF9EC1ED7E386622(&Var0))
		{
			iVar1 = func_213(func_214(&Var0));
			if (iVar1 == 0)
			{
				func_212(&Global_1388052, iParam0);
				func_211(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1388052);
			}
			else if (iVar1 == 1)
			{
				func_212(&Global_1388053, iParam0);
				func_211(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1388053);
			}
			else if (iVar1 == 2)
			{
				func_212(&Global_1388054, iParam0);
				func_211(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1388054);
			}
			else if (iVar1 == 3)
			{
				func_212(&Global_1388055, iParam0);
				func_211(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1388055);
			}
			else if (iVar1 == 4)
			{
				func_212(&Global_1388056, iParam0);
				func_211(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1388056);
			}
		}
	}
}

void func_211(int iParam0, int iParam1)
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

void func_212(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_213(int iParam0)
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

int func_214(var uParam0)
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

void func_215(int iParam0, int iParam1, int iParam2)
{
	if (func_236())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9605 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388197[func_224(-1)])
				{
					unk_0xC0B1609C742F66E3(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388197[func_224(-1)])
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
		if (func_223(unk_0x460153A63B9477BC()))
		{
			Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_1 = iParam0;
			Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_211.f_6 = func_221(iParam0, 1);
		}
		func_220(639, iParam0, -1, 1);
		func_219(640, func_221(iParam0, 1), -1, 1, 0);
		Global_1388197[func_224(-1)] = iParam0;
		func_216(-1109644434, 7, 0);
	}
}

void func_216(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_218(iParam1, iParam2))
	{
		iVar0 = func_217();
		Global_2462127[iVar0] = iParam1;
		Global_2462138[iVar0] = iParam0;
	}
}

int func_217()
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

int func_218(int iParam0, var uParam1)
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

void func_219(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_224(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
}

void func_220(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2551832[iParam0 /*3*/][func_224(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_224(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1388131[func_224(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388137[func_224(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388143[func_224(iParam2)] = iParam1;
			break;
		
		case 8727:
			Global_1388149[func_224(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1388095[func_224(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1388101[func_224(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1388107[func_224(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1388113[func_224(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1388119[func_224(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1388065[func_224(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1388071[func_224(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1388077[func_224(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1388083[func_224(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388089[func_224(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388155[func_224(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388161[func_224(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388167[func_224(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388173[func_224(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1388179[func_224(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388185[func_224(iParam2)] = iParam1;
			break;
		
		case 7234:
			Global_1388191[func_224(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388197[func_224(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388203[func_224(iParam2)] = iParam1;
			break;
		
		case 1877:
			Global_2590417[0 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 2268:
			Global_2590417[1 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 2930:
			Global_2590417[2 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2590417[3 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 10138:
			Global_2590566[func_224(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388209[func_224(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388215[func_224(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388221[func_224(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388227[func_224(iParam2)] = iParam1;
			break;
		
		case 9534:
			Global_1388233[func_224(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388239[func_224(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2590490[0 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2590490[1 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2590490[2 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2590490[3 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2590490[4 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2590569[0 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2590569[1 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2590569[2 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2590569[3 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2590569[4 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2590585[0 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2590585[1 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2590585[2 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2590585[3 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2590585[4 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2590490[5 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2590417[4 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2590601[func_224(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2590610[func_224(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2590604[func_224(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2590613[func_224(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2590607[func_224(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2590616[func_224(iParam2)] = iParam1;
			break;
		
		case 3690:
			Global_2590619[func_224(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2590490[6 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2590417[5 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2590490[7 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2590417[6 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2590490[8 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2590417[7 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2590490[9 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2590417[8 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2590490[10 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2590417[9 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2590490[11 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2590417[10 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2590490[12 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2590417[11 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2590490[13 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2590417[12 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2590490[14 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2590417[13 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2590490[15 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2590417[14 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2590490[16 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2590417[15 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2590490[17 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2590417[16 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 7284:
			Global_2590417[17 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2590417[18 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2590417[19 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 8011:
			Global_2590417[20 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2590622[func_224(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2590625[func_224(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2590628[func_224(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2590631[func_224(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2590634[func_224(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2590637[func_224(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2590640[func_224(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2590643[func_224(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2590646[func_224(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2590649[func_224(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2590652[func_224(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2590655[func_224(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2590658[func_224(iParam2)] = iParam1;
			break;
		
		case 8901:
			Global_2590661[func_224(iParam2)] = iParam1;
			break;
		
		case 8535:
			Global_2590417[21 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2590490[23 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 8976:
			Global_2590417[22 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2590490[24 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2590417[23 /*3*/][func_224(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_221(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_222(iParam0, 0);
}

int func_222(int iParam0, int iParam1)
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

int func_223(int iParam0)
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

int func_224(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_41();
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

int func_225(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == unk_0x460153A63B9477BC())
			{
				return Global_1388197[func_224(-1)];
			}
			else if (func_223(iParam0))
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388197[func_224(-1)];
	}
	return 0;
}

void func_226(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_228(iParam0, func_224(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_227(iParam0))
	{
		func_219(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_220(iParam0, iVar0, iParam2, 1);
	}
}

int func_227(int iParam0)
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

int func_228(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_224(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_229(int iParam0)
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
				if (unk_0x6CC163E30ECE0790(iVar5) == iVar1 || func_68(unk_0x6CC163E30ECE0790(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != unk_0x460153A63B9477BC())
					{
						if (func_137(unk_0x460153A63B9477BC(), iVar5))
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
		iVar6 = round((func_230(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = round((func_230(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_230(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = to_float(iParam0);
	fVar1 = to_float(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_231(bool bParam0, int iParam1)
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
				if (func_13(iVar4, 0, 1))
				{
					if (iVar4 != unk_0x460153A63B9477BC())
					{
						iVar1++;
						if (func_137(unk_0x460153A63B9477BC(), iVar4))
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
			if (func_13(iVar4, 1, 1))
			{
				if (iVar4 != unk_0x460153A63B9477BC())
				{
					if (func_232(unk_0x460153A63B9477BC(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_137(unk_0x460153A63B9477BC(), iVar4))
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
		iVar5 = round((func_230(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = round((func_230(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_232(int iParam0, int iParam1)
{
	return vdist(func_31(iParam0), func_31(iParam1));
	return 0f;
}

int func_233(int iParam0)
{
	int iVar0;
	
	if (unk_0x2F9269FB5C4717C0() != 3)
	{
		return *iParam0;
	}
	iVar0 = round((func_230(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_234(int iParam0)
{
	if (iParam0 < 0)
	{
		if (unk_0x44F29CF6A0675F4F(iParam0) > func_225(unk_0x460153A63B9477BC()))
		{
			iParam0 = -func_225(unk_0x460153A63B9477BC());
		}
	}
	if (func_235(8000, 0, 0) > 0)
	{
		if (func_235(8000, 0, 0) < (iParam0 + func_225(unk_0x460153A63B9477BC())))
		{
			iParam0 = (func_235(8000, 0, 0) - func_225(unk_0x460153A63B9477BC()));
		}
	}
	return iParam0;
}

int func_235(int iParam0, bool bParam1, int iParam2)
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

int func_236()
{
	return 1;
}

int func_237(char* sParam0)
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

int func_238(int iParam0)
{
	return func_239(func_240(iParam0));
}

int func_239(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_240(int iParam0)
{
	if (func_107(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

bool func_241()
{
	if (unk_0xFC559366953F62B3())
	{
		return func_56();
	}
	return func_242(Global_4456448.f_82708);
}

int func_242(int iParam0)
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

bool func_243(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 2;
}

bool func_244(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 7;
}

void func_245()
{
	Global_2463792 = 1;
}

void func_246(int iParam0, int iParam1)
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

void func_247(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_259())
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
				func_248(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_248(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
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
				func_248(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_248(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_248(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_259())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x5053392075AA583C(func_41()) || unk_0x701B05C16EF4F48E())
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
			*uParam0 = func_255(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_254(1, iParam4);
			Global_4265552 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_249(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_249(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			unk_0xBE20AB8238688965(&(Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_250(iParam0);
	}
}

void func_250(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_259())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_253(iParam0))
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
		func_251(&(Global_4264051[iParam0 /*85*/]));
	}
}

void func_251(var uParam0)
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
	func_252(&(uParam0->f_14));
	func_252(&(uParam0->f_14.f_13));
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

void func_252(var uParam0)
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

int func_253(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_254(int iParam0, int iParam1)
{
	Global_2464590 = iParam1;
	Global_2464589 = iParam0;
}

int func_255(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4264051[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_259())
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
				func_256(Global_4264051[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_256(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
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
	iVar1 = func_258(Var0.f_1);
	if ((Global_262145.f_23581 && !Global_262145.f_23582) && !Global_262145.f_23583)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_257();
		unk_0xB802750B43D4047C(1, &Var0, 36, iVar1);
	}
}

void func_257()
{
	unk_0xBE9B3870B1B370E3("AM_ARENA_SHP");
}

int func_258(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		unk_0xBE20AB8238688965(&uVar0, iParam0);
	}
	return uVar0;
}

int func_259()
{
	if (unk_0xF8EDFF98A9C94C74())
	{
		return unk_0xC5AA3415F982DC6C();
	}
	return 0;
}

void func_260(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_278())
		{
			if (func_277(0))
			{
				if (!func_276(0))
				{
					if (unk_0x166E920FB00B2DBB(func_275()))
					{
						if (func_274() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_274());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_272(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_265("GB_BCUT_TICK1", func_275(), iVar0, 0, 0, 1);
						}
						func_264(20);
						func_261(func_275(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_261(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_13(iParam0, 0, 1))
	{
		Var0 = 1596100569;
		Var0.f_1 = unk_0x460153A63B9477BC();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_263(iParam0);
		func_262(&(Var0.f_6), &(Var0.f_7));
		unk_0xB802750B43D4047C(1, &Var0, 8, func_258(iParam0));
	}
}

void func_262(var uParam0, var uParam1)
{
	*uParam0 = Global_1652336.f_9;
	*uParam1 = Global_1652336.f_10;
}

var func_263(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_506;
}

void func_264(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	unk_0xBE20AB8238688965(&(Global_2540384.f_5188.f_7[iVar0]), iVar1);
}

int func_265(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
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
		unk_0x7006FC1051C85FCA(func_61(iParam1, -2, 1, 0, 0));
		unk_0x9EFD301E3BE8324E(func_270(&Var1));
		if (!iParam3 == 0)
		{
			unk_0x7006FC1051C85FCA(iParam3);
		}
		unk_0x42710E9E08FA375A(iParam2);
		iVar0 = unk_0xD60C2975A14D763D(0, 1);
		func_266(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_266(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_269() || !unk_0xFC559366953F62B3()) || !func_95(unk_0x460153A63B9477BC(), 0))
	{
		return;
	}
	iVar0 = func_267(iParam2);
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

int func_267(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1672611 - 1))
	{
		if (iParam0 > Global_1672611.f_5[iVar0 /*53*/].f_1)
		{
			func_268(iVar0);
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

void func_268(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1672611.f_5[iVar0 /*53*/] = { Global_1672611.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_269()
{
	return unk_0x95C5B896CB42B20E(-1762644250);
}

var func_270(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_271(&cVar0);
}

var func_271(char[4] cParam0)
{
	return cParam0;
}

void func_272(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_273(1);
	}
	else
	{
		iVar1 = func_273(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_273(bool bParam0)
{
	if (bParam0)
	{
		return round((0.05f * 100f));
	}
	return Global_262145.f_12398;
}

int func_274()
{
	return Global_262145.f_12397;
}

int func_275()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11;
}

bool func_276(bool bParam0)
{
	return func_184(unk_0x460153A63B9477BC(), bParam0);
}

bool func_277(bool bParam0)
{
	return func_81(unk_0x460153A63B9477BC(), bParam0);
}

bool func_278()
{
	return func_82(unk_0x460153A63B9477BC());
}

int func_279()
{
	return Global_262145.f_11265;
}

int func_280()
{
	return Global_262145.f_11264;
}

void func_281(bool bParam0)
{
	if (bParam0)
	{
		if (func_282(1))
		{
			unk_0xBE20AB8238688965(&Global_1574681, 1);
		}
	}
	else if (func_282(2))
	{
		unk_0xBE20AB8238688965(&Global_1574681, 2);
	}
}

int func_282(int iParam0)
{
	int iVar0;
	
	iVar0 = func_228(2535, -1, 0);
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

int func_283()
{
	return Global_262145.f_11284;
}

int func_284()
{
	return Global_262145.f_11283;
}

void func_285()
{
	if (unk_0xCE990E643CD9D0E5(iLocal_86, 5))
	{
		func_286();
	}
	func_527();
}

void func_286()
{
	int iVar0[3];
	int iVar1;
	var uVar2[3];
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11[3];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	if (Local_121.f_674[0] > -1)
	{
		iVar9 = 0;
		iVar7 = 0;
		while (iVar7 < 3)
		{
			iVar0[iVar7] = func_97();
			iVar7++;
		}
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Local_121.f_674[iVar7] > -1)
			{
				iVar12 = unk_0x628A51AC66E80772(Local_121.f_674[iVar7]);
				if (unk_0xBD09DF93F957A0CF(iVar12))
				{
					iVar1 = unk_0x9019589211A13B02(iVar12);
					if (func_13(iVar1, 0, 1))
					{
						if (!func_95(iVar1, 0))
						{
							iVar0[iVar7] = iVar1;
							uVar2[iVar7] = Local_1488[Local_121.f_674[iVar7] /*5*/].f_4;
							if (func_277(1))
							{
								if (func_81(iVar1, 1))
								{
									uVar11[iVar7] = func_61(iVar1, -2, 0, 0, 0);
								}
							}
						}
					}
				}
			}
			iVar7++;
		}
		iVar8 = unk_0x59E2AD1A8ACEDA31();
		if (func_93(unk_0x460153A63B9477BC()))
		{
			iVar13 = func_303();
			iVar14 = unk_0xE4400E48E081F17A(iVar13);
			if (unk_0x166E920FB00B2DBB(iVar14))
			{
				iVar15 = unk_0x653D75F1BBF766B3(iVar14);
				if (unk_0xBD09DF93F957A0CF(iVar15))
				{
					iVar8 = iVar15;
				}
			}
		}
		iVar3 = func_486(0, Local_121.f_708);
		iVar4 = Local_121.f_709;
		iVar5 = func_486(0, Local_1488[iVar8 /*5*/].f_4);
		iVar6 = func_486(0, (Global_262145.f_11121 - func_488(&(Local_121.f_661), 0, 0)));
		func_300(iVar6);
		if (iVar6 > 30000)
		{
			iVar10 = 1;
		}
		else
		{
			iVar10 = 6;
		}
		func_287(iVar0[0], iVar0[1], iVar0[2], uVar2[0], uVar2[1], uVar2[2], iVar3, iVar4, iVar5, iVar6, &iVar9, iVar10, func_297(), uVar11[0], uVar11[1], uVar11[2]);
	}
}

void func_287(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, var uParam13, var uParam14, var uParam15)
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	
	if (func_294(0) == 0)
	{
		return;
	}
	func_293();
	iVar1 = 0;
	if (((Global_2463318[0] != iParam0 || Global_2463318[1] != iParam1) || Global_2463318[2] != iParam2) || *iParam10)
	{
		iVar1 = 1;
	}
	Global_2463318[0] = iParam0;
	Global_2463318[1] = iParam1;
	Global_2463318[2] = iParam2;
	Global_2463318[3] = 0;
	Global_2463318[4] = 0;
	if (Global_2463318[0] != func_97())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x72C1D3A1AB8CAA5B(Global_2463318[0]);
			Global_2463324[0 /*16*/] = { func_292(1, sVar0) };
		}
		if (iParam3 > 0)
		{
			func_289(iParam3, &(Global_2463324[0 /*16*/]), -1, 109, 8, 1, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, uParam13, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2463318[1] != func_97())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x72C1D3A1AB8CAA5B(Global_2463318[1]);
			Global_2463324[1 /*16*/] = { func_292(2, sVar0) };
		}
		if (iParam4 > 0)
		{
			func_289(iParam4, &(Global_2463324[1 /*16*/]), -1, 108, 7, 1, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, uParam14, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	if (Global_2463318[2] != func_97())
	{
		if (iVar1 == 1)
		{
			sVar0 = unk_0x72C1D3A1AB8CAA5B(Global_2463318[2]);
			Global_2463324[2 /*16*/] = { func_292(3, sVar0) };
		}
		if (iParam5 > 0)
		{
			func_289(iParam5, &(Global_2463324[2 /*16*/]), -1, 107, 6, 1, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, uParam15, 255, 0, 0, 0, 0, 1, -1);
		}
	}
	func_288(iParam6, iParam7, "HUD_CHECKPOINTS", -1, 1, 5, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	if (func_525(unk_0x460153A63B9477BC()) == 0)
	{
		func_289(iParam8, "HUD_USCORE", -1, 1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
	}
	sVar2 = "HUD_COUNTDOWN";
	if (!func_237(sParam12))
	{
		sVar2 = sParam12;
	}
	func_142(iParam9, sVar2, 0, 0, -1, 0, 3, 0, iParam11, 0, 0, 0, iParam11, 0, 0, 0, 0, -1);
	*iParam10 = 0;
	func_141();
}

void func_288(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_144(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_143(4, iVar0);
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

void func_289(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
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
			if (func_144(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1378744.f_1 = 1;
		func_143(6, iVar0);
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
		if (iParam15 == 5 && func_291())
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
			if (func_290())
			{
				Global_1378744.f_1134 = 1;
			}
		}
	}
}

int func_290()
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

int func_291()
{
	if (((unk_0xA2C6E70C9BCA9C34() == 8 || unk_0xA2C6E70C9BCA9C34() == 9) || unk_0xA2C6E70C9BCA9C34() == 10) || unk_0xA2C6E70C9BCA9C34() == 12)
	{
		return 1;
	}
	return 0;
}

struct<16> func_292(int iParam0, char* sParam1)
{
	struct<16> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, sParam1, 64);
			return Var0;
			break;
		
		case 1:
			StringCopy(&Var0, unk_0x7C774D8CB8DC6FE3("HUD_POSFIRST"), 64);
			break;
		
		case 2:
			StringCopy(&Var0, unk_0x7C774D8CB8DC6FE3("HUD_POSSECOND"), 64);
			break;
		
		case 3:
			StringCopy(&Var0, unk_0x7C774D8CB8DC6FE3("HUD_POSTHIRD"), 64);
			break;
		
		case 4:
			StringCopy(&Var0, unk_0x7C774D8CB8DC6FE3("HUD_POSFOURTH"), 64);
			break;
		
		case 5:
			StringCopy(&Var0, unk_0x7C774D8CB8DC6FE3("HUD_POSFIFTH"), 64);
			break;
	}
	StringConCat(&Var0, " ", 64);
	StringConCat(&Var0, sParam1, 64);
	return Var0;
}

void func_293()
{
	unk_0x4CB4237D8858ADA6(8);
	unk_0x4CB4237D8858ADA6(9);
	unk_0x4CB4237D8858ADA6(6);
	unk_0x4CB4237D8858ADA6(7);
	Global_2463796 = 1;
}

int func_294(bool bParam0)
{
	if (func_296())
	{
		return 0;
	}
	if (func_295())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_13(unk_0x460153A63B9477BC(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_295()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_196 != 0;
}

bool func_296()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 12);
}

char* func_297()
{
	return "HUD_COUNTDOWN";
	switch (func_299(unk_0x460153A63B9477BC()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_298())
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

int func_298()
{
	if (func_299(unk_0x460153A63B9477BC()) == 133)
	{
		return Global_2540384.f_5109;
	}
	return -1;
}

int func_299(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/];
	}
	return -1;
}

void func_300(int iParam0)
{
	if (func_302(unk_0x460153A63B9477BC()) || func_301(unk_0x460153A63B9477BC()) == 146)
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

int func_301(int iParam0)
{
	if (iParam0 != func_97() && func_13(iParam0, 1, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_314.f_15;
	}
	return -1;
}

int func_302(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_171(Global_2425869[iParam0 /*443*/].f_314.f_6) == 19;
			}
		}
	}
	return 0;
}

var func_303()
{
	if (unk_0xAE06B9E39EBDE049(func_304()))
	{
		return func_304();
	}
	return func_90();
}

var func_304()
{
	return Global_2359302.f_3;
}

void func_305()
{
	int iVar0;
	struct<42> Var1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	Var1 = -1;
	Var1.f_22 = -1082130432;
	Var1.f_23 = 3;
	Var1.f_39 = -1;
	Var1.f_41 = -1;
	iVar0 = 0;
	while (iVar0 < unk_0xEFA28384DDD283E1())
	{
		Local_142.f_534[iVar0 /*42*/] = { Var1 };
		Local_142.f_534[iVar0 /*42*/].f_1 = func_97();
		if (Local_121.f_674[iVar0] > -1)
		{
			iVar3 = unk_0x628A51AC66E80772(Local_121.f_674[iVar0]);
			if (unk_0xBD09DF93F957A0CF(iVar3))
			{
				iVar2 = unk_0x9019589211A13B02(iVar3);
				if (!func_95(iVar2, 0))
				{
					Local_142.f_534[iVar0 /*42*/] = Local_121.f_674[iVar0];
					Local_142.f_534[iVar0 /*42*/].f_1 = iVar2;
					uVar4 = Local_1488[Local_121.f_674[iVar0] /*5*/].f_4;
					Local_142.f_534[iVar0 /*42*/].f_9 = uVar4;
					Local_142.f_534[iVar0 /*42*/].f_31 = -1;
				}
			}
		}
		iVar0++;
	}
}

void func_306()
{
	if (Local_120 != -1 && Local_120.f_1 != -1)
	{
		if (unk_0xC739CCA778931489() != func_308() && unk_0xBD09DF93F957A0CF(unk_0xC739CCA778931489()))
		{
			func_307(Local_120.f_1, Local_120, func_258(unk_0x9019589211A13B02(unk_0xC739CCA778931489())));
			Local_120 = -1;
			Local_120.f_1 = -1;
		}
	}
}

void func_307(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0 = 1401831542;
	Var0.f_1 = unk_0x460153A63B9477BC();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		unk_0xB802750B43D4047C(1, &Var0, 4, iParam2);
	}
}

int func_308()
{
	return -1;
}

void func_309()
{
	if (func_313(0))
	{
		if (!unk_0xCE990E643CD9D0E5(iLocal_86, 4))
		{
			if (func_276(1))
			{
				unk_0xC4CC25B68A91D144(-1, "Enter_1st", "GTAO_Biker_Modes_Soundset", 0);
			}
			else
			{
				unk_0xC4CC25B68A91D144(-1, "Enter_1st", "GTAO_FM_Events_Soundset", 0);
			}
			unk_0xBE20AB8238688965(&iLocal_86, 4);
		}
	}
	else if (unk_0xCE990E643CD9D0E5(iLocal_86, 4))
	{
		if (func_276(1))
		{
			unk_0xC4CC25B68A91D144(-1, "Lose_1st", "GTAO_Biker_Modes_Soundset", 0);
		}
		else
		{
			unk_0xC4CC25B68A91D144(-1, "Lose_1st", "GTAO_FM_Events_Soundset", 0);
		}
		unk_0xD2459066EA58CE43(&iLocal_86, 4);
	}
}

void func_310()
{
	unk_0xBE20AB8238688965(&(Global_2540384.f_1794), 26);
}

int func_311(int iParam0)
{
	if ((unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_71.f_2, 9) && !(unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_71.f_2, 6) && unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_71.f_2, 7))) || ((unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_71.f_2, 6) && !unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_71.f_2, 7)) && !unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_71.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

void func_312()
{
	unk_0xBE20AB8238688965(&(Global_2540384.f_1794), 19);
}

int func_313(int iParam0)
{
	if (iParam0 >= 0)
	{
		if (Local_121.f_674[iParam0] == unk_0x59E2AD1A8ACEDA31() && Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_4 > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_314(int iParam0)
{
	int iVar0;
	
	if (iParam0 >= 0)
	{
		iVar0 = Local_121.f_674[iParam0];
		if (iVar0 >= 0)
		{
			if (func_315(Local_1488[iVar0 /*5*/].f_4, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_315(int iParam0, int iParam1)
{
	return iParam0 > iParam1;
}

bool func_316(int iParam0)
{
	return func_317(unk_0x9B0761B4C3EB8BC7(), Local_121.f_10[iParam0 /*5*/], 1) < 500f;
}

float func_317(int iParam0, struct<3> Param1, int iParam2)
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

bool func_318(int iParam0)
{
	return func_317(unk_0x9B0761B4C3EB8BC7(), Local_121.f_10[iParam0 /*5*/], 1) < 750f;
}

void func_319(int iParam0)
{
	func_352(&(Local_104[iParam0 /*3*/]), Local_121.f_10[iParam0 /*5*/], iParam0);
	if (uLocal_87[iParam0])
	{
		func_347(Local_121.f_10[iParam0 /*5*/], iParam0);
		func_320(Local_121.f_10[iParam0 /*5*/], iParam0);
	}
}

void func_320(struct<4> Param0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (Param0.f_3 == unk_0x59E2AD1A8ACEDA31() && !unk_0xCE990E643CD9D0E5(uLocal_93[func_17(iParam2)], func_16(iParam2)))
	{
		Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_4++;
		if (iLocal_84 == 0)
		{
			iLocal_84 = unk_0x6CAAB7E78B5D978A();
		}
		iVar0 = func_345(ceil((IntToFloat(Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_4) / func_346())));
		iVar1 = func_343(ceil((IntToFloat(Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_4) / func_344())));
		iVar0 = round((IntToFloat(iVar0) * Global_262145.f_11454));
		iVar1 = round((IntToFloat(iVar1) * Global_262145.f_11455));
		if (func_34())
		{
			iVar0 = round((IntToFloat(iVar0) * func_342()));
			iVar1 = round((IntToFloat(iVar1) * func_341()));
		}
		if (func_259())
		{
			func_247(-59668082, iVar0, &uVar2, 0, 1, 0);
		}
		else
		{
			unk_0x41E465DD667BCD29(iVar0, "AM_CP_COLLECTION", &uVar3);
		}
		func_245();
		func_193(0, unk_0x9B0761B4C3EB8BC7(), "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
		iLocal_95 = (iLocal_95 + iVar0);
		Global_2464451 = iVar0;
		Local_1487.f_7 = (Local_1487.f_7 + iVar1);
		unk_0xBE20AB8238688965(&(uLocal_93[func_17(iParam2)]), func_16(iParam2));
		if (Local_1487.f_11 == 0)
		{
			Local_1487.f_11 = unk_0x5A002C4821A13338();
		}
		func_321();
		unk_0xC4CC25B68A91D144(-1, "Checkpoint_Cash_Hit", "GTAO_FM_Events_Soundset", 0);
	}
}

void func_321()
{
	if (!unk_0xCE990E643CD9D0E5(Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_2, 2))
	{
		unk_0xBE20AB8238688965(&(Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_2), 2);
		func_322(1);
	}
}

void func_322(bool bParam0)
{
	var uVar0;
	
	if (bParam0)
	{
		if (!unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 7))
		{
			if (((!func_101(unk_0x460153A63B9477BC()) && !func_6(unk_0x460153A63B9477BC())) && !func_525(unk_0x460153A63B9477BC())) && !func_340(unk_0x460153A63B9477BC()))
			{
				if (func_339())
				{
					func_332(2, 0, 1);
					func_331();
				}
				if (func_523(0))
				{
					uVar0 = func_228(2481, -1, 0);
					unk_0xD2459066EA58CE43(&uVar0, 0);
					func_331();
				}
				if (func_523(func_522(func_299(unk_0x460153A63B9477BC()))))
				{
					uVar0 = func_228(2481, -1, 0);
					unk_0xD2459066EA58CE43(&uVar0, func_522(func_299(unk_0x460153A63B9477BC())));
					func_331();
				}
				if (func_330())
				{
					func_331();
				}
				if (func_299(unk_0x460153A63B9477BC()) > -1)
				{
					unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 7);
					if (func_329(unk_0x460153A63B9477BC()))
					{
						func_328();
					}
					func_325(func_327(func_299(unk_0x460153A63B9477BC())));
				}
			}
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 7))
	{
		unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 7);
		func_323();
	}
}

void func_323()
{
	if (func_324())
	{
		unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 17);
	}
}

bool func_324()
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1, 17);
}

void func_325(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8572)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_326() /*10931*/].f_6175.f_4111[iVar0 /*3*/] == iParam0)
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

int func_326()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_327(int iParam0)
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

void func_328()
{
	if (!func_324())
	{
		Global_2540384.f_6648 = unk_0x6CAAB7E78B5D978A();
		unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 17);
	}
}

int func_329(int iParam0)
{
	if (func_299(iParam0) == 236 || func_299(iParam0) == 150)
	{
		return 1;
	}
	return 0;
}

int func_330()
{
	if (Global_2440049.f_1267.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_331()
{
	if (func_330())
	{
		Global_2440049.f_1267.f_16 = 1;
	}
}

void func_332(int iParam0, int iParam1, bool bParam2)
{
	if (func_339())
	{
		if (iParam1 == 1)
		{
			if (Global_2540384.f_4458 == -1)
			{
				Global_2540384.f_4458 = Global_262145.f_26466;
			}
			func_20(&(Global_2540384.f_4456), 0, 0);
			if (bParam2)
			{
				if (Global_2540384.f_4461 == -1)
				{
					Global_2540384.f_4461 = Global_262145.f_26467;
				}
				func_20(&(Global_2540384.f_4459), 0, 0);
			}
			else
			{
				Global_1312436 = 0;
				Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_8 = 0;
				func_338(1);
			}
		}
		else
		{
			Global_1312436 = 0;
			Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_8 = 0;
			func_338(1);
		}
		if ((!unk_0xFC559366953F62B3() && !func_337()) && !func_333(unk_0x460153A63B9477BC()))
		{
			Global_968396 = 0;
		}
		unk_0x88B39313953E52DA(0, -1, -1, iParam0);
	}
}

int func_333(int iParam0)
{
	if (func_334(iParam0, 1, 0))
	{
		if (Global_1590682[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_334(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_335(iParam0))
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

bool func_335(int iParam0)
{
	return func_336(iParam0);
}

bool func_336(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

bool func_337()
{
	return Global_2451787.f_838;
}

void func_338(bool bParam0)
{
	if (unk_0x25DDB354A40FFCDB())
	{
		if (!func_339())
		{
			if (func_13(unk_0x460153A63B9477BC(), 1, 0))
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
			if (func_13(unk_0x460153A63B9477BC(), 1, 1))
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

bool func_339()
{
	return Global_1312436;
}

int func_340(int iParam0)
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

float func_341()
{
	return Global_262145.f_11267;
}

float func_342()
{
	return Global_262145.f_11266;
}

var func_343(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_11278;
		
		case 2:
			return Global_262145.f_11279;
		
		case 3:
			return Global_262145.f_11280;
		
		case 4:
			return Global_262145.f_11281;
		
		default:
	}
	return Global_262145.f_11281;
}

float func_344()
{
	return Global_262145.f_11026;
}

var func_345(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_11268;
		
		case 2:
			return Global_262145.f_11269;
		
		case 3:
			return Global_262145.f_11270;
		
		case 4:
			return Global_262145.f_11271;
		
		case 5:
			return Global_262145.f_11272;
		
		case 6:
			return Global_262145.f_11273;
		
		case 7:
			return Global_262145.f_11274;
		
		case 8:
			return Global_262145.f_11275;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return Global_262145.f_11276;
		
		default:
	}
	return Global_262145.f_11277;
}

float func_346()
{
	return Global_262145.f_11025;
}

void func_347(struct<3> Param0, var uParam1, var uParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!unk_0xCE990E643CD9D0E5(Local_121.f_3[func_17(iParam3)], func_16(iParam3)))
	{
		if (!unk_0xCE990E643CD9D0E5(uLocal_92[func_17(iParam3)], func_16(iParam3)))
		{
			if (func_34())
			{
				fVar0 = 6f;
				fVar1 = 6f;
				fVar2 = 4f;
			}
			else
			{
				fVar0 = 3f;
				fVar1 = 2.5f;
				fVar2 = 2.8f;
			}
			if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Param0 + Vector(fVar2, 0f, 0f), fVar1, fVar1, fVar0, 0, 1, 0))
			{
				if (func_348())
				{
					iLocal_91 = unk_0x624736CA66E14161(unk_0x6CAAB7E78B5D978A(), Local_121.f_9);
					if (unk_0xC739CCA778931489() != func_308() && unk_0xBD09DF93F957A0CF(unk_0xC739CCA778931489()))
					{
						func_307(iLocal_91, iParam3, func_258(unk_0x9019589211A13B02(unk_0xC739CCA778931489())));
						Local_120 = -1;
						Local_120.f_1 = -1;
					}
					else
					{
						Local_120 = iParam3;
						Local_120.f_1 = iLocal_91;
					}
					unk_0xBE20AB8238688965(&(uLocal_92[func_17(iParam3)]), func_16(iParam3));
				}
			}
		}
		else if (func_1(&uLocal_98, 250, 0))
		{
			if (unk_0xC739CCA778931489() != func_308() && unk_0xBD09DF93F957A0CF(unk_0xC739CCA778931489()))
			{
				func_307(iLocal_91, iParam3, func_258(unk_0x9019589211A13B02(unk_0xC739CCA778931489())));
				Local_120.f_1 = -1;
				Local_120 = -1;
			}
			else
			{
				Local_120 = iParam3;
				Local_120.f_1 = iLocal_91;
			}
			func_37(&uLocal_98);
		}
	}
}

int func_348()
{
	if (!func_13(unk_0x460153A63B9477BC(), 1, 1))
	{
		return 0;
	}
	if (func_525(unk_0x460153A63B9477BC()))
	{
		if (((func_339() && !func_351()) || func_350(unk_0x460153A63B9477BC(), 21)) || func_350(unk_0x460153A63B9477BC(), 25))
		{
			func_491(0);
		}
		else
		{
			func_491(7);
		}
		return 0;
	}
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		if (func_349(unk_0x9B0761B4C3EB8BC7(), 0) != -1)
		{
			return 0;
		}
	}
	if (func_95(unk_0x460153A63B9477BC(), 0))
	{
		return 0;
	}
	if (!func_34())
	{
		if (unk_0x642A35A076CECC5A(unk_0x9B0761B4C3EB8BC7()))
		{
			func_491(1);
			return 0;
		}
	}
	return 1;
}

int func_349(int iParam0, int iParam1)
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

bool func_350(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_212, iParam1);
}

bool func_351()
{
	return Global_1312436.f_1;
}

void func_352(int iParam0, struct<3> Param1, var uParam2, var uParam3, int iParam4)
{
	struct<3> Var0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	Var0 = { Param1 };
	unk_0x28DD484BAEAF8437(12, &uVar1, &uVar2, &uVar3, &uVar4);
	if (!unk_0xCE990E643CD9D0E5(uLocal_92[func_17(iParam4)], func_16(iParam4)) && !unk_0xCE990E643CD9D0E5(Local_121.f_3[func_17(iParam4)], func_16(iParam4)))
	{
		if (!unk_0x8F678487EEBD8CE4(*iParam0))
		{
			if (!func_423(Var0, 0f, 0f, 0f, 0) && !func_423(Var0, 0f, 0f, -2000f, 0))
			{
				*iParam0 = unk_0x6820C712C1DD618A(Var0);
				unk_0xE7B8403ABCA0391D(*iParam0, 431);
				unk_0xE346A71235BB8065(*iParam0, 9);
				unk_0xB023F5C66F5716C7(*iParam0, "CPC_BLIP");
				func_359(*iParam0, 25, 1152319488, 1137180672);
				func_357(iParam0, 12);
				unk_0x3DBD102E8C35EA16(*iParam0, 1);
			}
		}
		else if (unk_0xF0C12886E5C1B20E())
		{
			unk_0xB7F03636BDF7080E(*iParam0, 255);
		}
		else
		{
			func_359(*iParam0, 25, 1152319488, 1137180672);
		}
		if (uLocal_88[iParam4])
		{
			if (!unk_0xCE990E643CD9D0E5(iLocal_94[func_17(iParam4)], func_16(iParam4)))
			{
				iVar5 = 54;
				if (func_34())
				{
					iParam0->f_1 = unk_0x2E1A9DD931A07AE4(iVar5, Var0 + Vector(4f, 0f, 0f), Var0, 10f, uVar1, uVar2, uVar3, iParam0->f_2, 0);
					unk_0xF5F850D83E789793(iParam0->f_1, 7.5f, 7.5f, 100f);
				}
				else
				{
					iParam0->f_1 = unk_0x2E1A9DD931A07AE4(iVar5, Var0 + Vector(2.8f, 0f, 0f), Var0, 5f, uVar1, uVar2, uVar3, iParam0->f_2, 0);
					unk_0xF5F850D83E789793(iParam0->f_1, 5f, 5f, 100f);
				}
				unk_0xBE20AB8238688965(&(iLocal_94[func_17(iParam4)]), func_16(iParam4));
			}
			else
			{
				func_356(&(iParam0->f_1), &(iParam0->f_2));
			}
			func_355(&Param1);
		}
		else if (unk_0xCE990E643CD9D0E5(iLocal_94[func_17(iParam4)], func_16(iParam4)))
		{
			if (func_354(&(iParam0->f_1), &(iParam0->f_2)))
			{
				unk_0x81122FA03A336E26(iParam0->f_1);
				unk_0xD2459066EA58CE43(&(iLocal_94[func_17(iParam4)]), func_16(iParam4));
			}
		}
	}
	else if (unk_0xCE990E643CD9D0E5(iLocal_94[func_17(iParam4)], func_16(iParam4)))
	{
		func_353(&(iParam0->f_1), &(iParam0->f_2), iParam0, iParam4);
	}
	else if (unk_0x8F678487EEBD8CE4(*iParam0))
	{
		unk_0x93370FA10F15BE44(iParam0);
	}
}

void func_353(var uParam0, var uParam1, int iParam2, int iParam3)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (*uParam0 != 0)
	{
		*uParam1 = (*uParam1 - 25);
		if (*uParam1 > 0)
		{
			unk_0x28DD484BAEAF8437(1, &uVar0, &uVar1, &uVar2, &uVar3);
			unk_0x664C8894C6C6C8F3(*uParam0, uVar0, uVar1, uVar2, *uParam1);
			unk_0x528DA233EB2DB544(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		}
		else
		{
			if (unk_0x8F678487EEBD8CE4(*iParam2))
			{
				unk_0x93370FA10F15BE44(iParam2);
			}
			unk_0x81122FA03A336E26(*uParam0);
			*uParam0 = 0;
			unk_0xD2459066EA58CE43(&(iLocal_94[func_17(iParam3)]), func_16(iParam3));
		}
	}
}

int func_354(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	*uParam1 = (*uParam1 - 10);
	if (*uParam1 > 0)
	{
		unk_0x28DD484BAEAF8437(12, &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0x664C8894C6C6C8F3(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		unk_0x528DA233EB2DB544(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_355(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	iVar0 = 239;
	iVar1 = 250;
	iVar2 = 187;
	fVar3 = 5f;
	fVar5 = 64f;
	if (func_34())
	{
		fVar4 = 40f;
	}
	else
	{
		fVar4 = 15f;
	}
	if (!func_132(*uParam0))
	{
		*uParam0 = { *uParam0 + Vector(1.7f, 1.7f, 1.7f) };
		unk_0xED11AD8AAF85FDC7(*uParam0, iVar0, iVar1, iVar2, fVar4, fVar3, fVar5);
	}
}

int func_356(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (*uParam1 < 175)
	{
		*uParam1 += 10;
		unk_0x28DD484BAEAF8437(12, &uVar0, &uVar1, &uVar2, &uVar3);
		unk_0x664C8894C6C6C8F3(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		unk_0x528DA233EB2DB544(*uParam0, uVar0, uVar1, uVar2, *uParam1);
		return 0;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_357(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x8F678487EEBD8CE4(*uParam0))
	{
		iVar0 = func_358(iParam1);
		unk_0xECC9A00CF1181EC2(*uParam0, iVar0);
	}
}

int func_358(int iParam0)
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

void func_359(int iParam0, int iParam1, float fParam2, float fParam3)
{
	unk_0xB7F03636BDF7080E(iParam0, func_360(iParam0, iParam1, fParam2, fParam3));
}

int func_360(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	
	if (!func_311(Global_2440049) && !func_73())
	{
		fVar0 = func_365(iParam0, fParam3, fParam2);
		if (iParam1 == 0)
		{
			iParam1 = func_361();
		}
		return (round((to_float((255 - iParam1)) * fVar0)) + iParam1);
	}
	return 255;
}

int func_361()
{
	if (func_362(Global_2440049, 1))
	{
		return 50;
	}
	return 0;
}

bool func_362(int iParam0, bool bParam1)
{
	if (func_364() != 0)
	{
		return func_363(iParam0) != 0;
	}
	return func_334(iParam0, bParam1, 0);
}

int func_363(int iParam0)
{
	if (func_13(iParam0, 0, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_1;
	}
	return 0;
}

int func_364()
{
	return Global_30968;
}

float func_365(int iParam0, float fParam1, float fParam2)
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	
	iVar0 = Global_2440049;
	Var2 = { func_422(iParam0) };
	Var2.f_2 = 0f;
	if (Global_1319172 || func_418())
	{
		if (func_417(iVar0))
		{
			Var3 = { func_368(iVar0) };
		}
		else if (func_367(iVar0))
		{
			Var3 = { func_366(iVar0) };
		}
	}
	else
	{
		Var3 = { unk_0x3E4D3CCC220BDFB1(unk_0x1FA7B77001D60F9D(iVar0), 0) };
	}
	Var3.f_2 = 0f;
	fVar1 = vmag(Var3 - Var2);
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

Vector3 func_366(int iParam0)
{
	int iVar0;
	
	if (func_367(iParam0))
	{
		iVar0 = unk_0x1FA7B77001D60F9D(iParam0);
		if (unk_0xAE06B9E39EBDE049(iVar0))
		{
			return unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 0);
		}
	}
	return 0f, 0f, 0f;
}

int func_367(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			iVar0 = unk_0x1FA7B77001D60F9D(iParam0);
			if (unk_0xAE06B9E39EBDE049(iVar0))
			{
				if (unk_0xC2169C00B643278B(iVar0, 2056.204f, 2954.807f, -70.69892f, 110f, 90f, 15f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

Vector3 func_368(int iParam0)
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
	
	if (iParam0 == func_97())
	{
	}
	if (func_416(iParam0))
	{
		iVar0 = func_415(iParam0);
		if (iVar0 != func_97())
		{
			if (!func_414(iVar0))
			{
				if (unk_0xAE06B9E39EBDE049(Global_2440049.f_673[iVar0 /*3*/][1]))
				{
					return unk_0x3E4D3CCC220BDFB1(Global_2440049.f_673[iVar0 /*3*/][1], 0);
				}
				else
				{
					return Global_2425869[func_415(iParam0) /*443*/].f_314.f_10;
				}
			}
			else
			{
				iVar1 = func_410(iVar0);
				if (!iVar1 == -1)
				{
					return Global_1678288.f_496[iVar1 /*3*/];
				}
			}
		}
	}
	else if (func_409(iParam0))
	{
		if (unk_0xAE06B9E39EBDE049(Global_2540384.f_307))
		{
			return unk_0x3E4D3CCC220BDFB1(Global_2540384.f_307, 0);
		}
	}
	else if (func_408(iParam0) && !func_407(iParam0))
	{
		iVar2 = Global_2425869[iParam0 /*443*/].f_314.f_9;
		if (iVar2 != func_97())
		{
			iVar3 = func_410(iVar2);
			if (!iVar3 == -1)
			{
				return Global_1678288.f_496[iVar3 /*3*/];
			}
		}
	}
	else if (func_406(iParam0) && !func_405(iParam0))
	{
		if (func_417(iParam0) && func_404())
		{
			return Global_1678288.f_496[Global_2425869[iParam0 /*443*/].f_314.f_6 /*3*/];
		}
		iVar4 = Global_2425869[iParam0 /*443*/].f_314.f_9;
		if (iVar4 != func_97())
		{
			if (func_403(iVar4))
			{
				iVar5 = func_399(iVar4);
				if (iVar5 != -1)
				{
					return Global_1678288.f_496[iVar5 /*3*/];
				}
			}
		}
	}
	else if (func_398(iParam0))
	{
		iVar6 = func_397(iParam0);
		if (iVar6 != func_97())
		{
			if (!func_396(iVar6))
			{
				if (unk_0xAE06B9E39EBDE049(Global_2440049.f_770[iVar6]))
				{
					return unk_0x3E4D3CCC220BDFB1(Global_2440049.f_770[iVar6], 0);
				}
				else
				{
					return Global_2425869[func_397(iParam0) /*443*/].f_314.f_17;
				}
			}
			else
			{
				iVar7 = func_399(iVar6);
				if (!iVar7 == -1)
				{
					return Global_1678288.f_496[iVar7 /*3*/];
				}
			}
		}
	}
	else if (func_395(iParam0))
	{
		if (unk_0xAE06B9E39EBDE049(Global_2540384.f_309))
		{
			return unk_0x3E4D3CCC220BDFB1(Global_2540384.f_309, 0);
		}
	}
	else if (func_394(iParam0) && !func_393(iParam0))
	{
		iVar8 = Global_2425869[iParam0 /*443*/].f_314.f_9;
		if (iVar8 != func_97())
		{
			if (func_392(iVar8))
			{
				iVar9 = func_388(iVar8);
				if (iVar9 != -1)
				{
					return func_387(iVar9);
				}
			}
		}
	}
	else if (func_386(iParam0) && !func_385(iParam0))
	{
		iVar10 = Global_2425869[iParam0 /*443*/].f_314.f_9;
		if (iVar10 != func_97())
		{
			if (func_384(iVar10))
			{
				iVar11 = func_380(iVar10);
				if (iVar11 != -1)
				{
					return Global_1678288.f_496[iVar11 /*3*/];
				}
			}
		}
	}
	else if (func_379(iParam0, 0))
	{
		iVar12 = func_378(iParam0);
		if (iVar12 != func_97())
		{
			if (!func_377(iVar12))
			{
				if (unk_0xAE06B9E39EBDE049(Global_2440049.f_803[iVar12]))
				{
					return unk_0x3E4D3CCC220BDFB1(Global_2440049.f_803[iVar12], 0);
				}
				else
				{
					return Global_1630317[func_378(iParam0) /*595*/].f_580;
				}
			}
			else
			{
				iVar13 = func_380(iVar12);
				if (!iVar13 == -1)
				{
					return Global_1678288.f_496[iVar13 /*3*/];
				}
			}
		}
	}
	else if (func_376(iParam0))
	{
		return -366.7f, -1909.6f, 20f;
	}
	else if (func_375(iParam0))
	{
		iVar14 = func_373(iParam0);
		if (iVar14 != func_97())
		{
			if (unk_0xAE06B9E39EBDE049(Global_2440049.f_836[iVar14]))
			{
				return unk_0x3E4D3CCC220BDFB1(Global_2440049.f_836[iVar14], 0);
			}
			else
			{
				return Global_1649358[iVar14 /*93*/].f_50;
			}
		}
		else
		{
			return 0f, 0f, 0f;
		}
	}
	if (func_394(iParam0))
	{
		return func_387(Global_2425869[iParam0 /*443*/].f_314.f_6);
	}
	if (func_369(iParam0))
	{
		return 965.8165f, 42.25042f, 122.1267f;
	}
	return Global_1678288.f_496[Global_2425869[iParam0 /*443*/].f_314.f_6 /*3*/];
}

int func_369(int iParam0)
{
	if (((func_372(iParam0) || func_371(iParam0)) || func_370(iParam0)) || func_302(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_370(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_171(Global_2425869[iParam0 /*443*/].f_314.f_6) == 15;
			}
		}
	}
	return 0;
}

int func_371(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_171(Global_2425869[iParam0 /*443*/].f_314.f_6) == 16;
			}
		}
	}
	return 0;
}

int func_372(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_171(Global_2425869[iParam0 /*443*/].f_314.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_373(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_97())
	{
		return iParam0;
	}
	if (func_374(iParam0) != -1)
	{
		iVar0 = func_171(func_374(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_81(iParam0, 0))
			{
				return func_80(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_97();
		}
		return Global_2425869[iParam0 /*443*/].f_314.f_9;
	}
	return func_97();
}

int func_374(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6;
		}
		else if (((Global_1312896 || Global_2405074.f_2673) && iParam0 == unk_0x460153A63B9477BC()) && func_13(iParam0, 1, 0))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6;
		}
	}
	return -1;
}

int func_375(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_171(Global_2425869[iParam0 /*443*/].f_314.f_6) == 20;
			}
		}
		else if (((Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_1312896) && iParam0 == unk_0x460153A63B9477BC()) && func_13(iParam0, 1, 0))
		{
			return func_171(Global_2425869[iParam0 /*443*/].f_314.f_6) == 20;
		}
	}
	return 0;
}

int func_376(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_171(Global_2425869[iParam0 /*443*/].f_314.f_6) == 13;
			}
		}
	}
	return 0;
}

int func_377(int iParam0)
{
	if (iParam0 != func_97())
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314.f_3, 4);
	}
	return 0;
}

int func_378(int iParam0)
{
	if (iParam0 == func_97())
	{
		return iParam0;
	}
	return Global_2425869[iParam0 /*443*/].f_314.f_9;
}

int func_379(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0))
		{
			iVar0 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0);
			if (unk_0x36FE6D3220816ADA(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_97())
			{
				return func_171(Global_2425869[iParam0 /*443*/].f_314.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_380(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_97())
	{
		iVar0 = func_383(iParam0);
		if (iVar0 != 0)
		{
			return func_381(iVar0);
		}
	}
	return -1;
}

int func_381(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 148)
	{
		if (func_171(iVar0) == 11)
		{
			if (func_382(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_382(int iParam0)
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

int func_383(int iParam0)
{
	if (iParam0 != func_97())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_281;
	}
	return 0;
}

int func_384(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (Global_1590682[iParam0 /*883*/].f_274.f_281 != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_385(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_386(iParam0) && Global_2425869[iParam0 /*443*/].f_314.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_386(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_171(Global_2425869[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

Vector3 func_387(int iParam0)
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
	return Global_1678288.f_496[iParam0 /*3*/];
}

int func_388(int iParam0)
{
	int iVar0;
	
	if (iParam0 != func_97())
	{
		iVar0 = func_391(iParam0);
		if (iVar0 != 0)
		{
			return func_389(iVar0);
		}
	}
	return -1;
}

int func_389(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 148)
	{
		if (func_171(iVar0) == 11)
		{
			if (func_390(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_390(int iParam0)
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

int func_391(int iParam0)
{
	if (iParam0 != func_97())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_322;
	}
	return 0;
}

int func_392(int iParam0)
{
	if (iParam0 != func_97())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_322 != 0;
	}
	return 0;
}

int func_393(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_394(iParam0) && Global_2425869[iParam0 /*443*/].f_314.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_394(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_171(Global_2425869[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_395(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_171(Global_2425869[iParam0 /*443*/].f_314.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_396(int iParam0)
{
	if (iParam0 != func_97())
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314.f_2, 6);
	}
	return 0;
}

int func_397(int iParam0)
{
	if (iParam0 == func_97())
	{
		return iParam0;
	}
	return Global_2425869[iParam0 /*443*/].f_314.f_9;
}

int func_398(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_97())
			{
				return func_171(Global_2425869[iParam0 /*443*/].f_314.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_399(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_97())
	{
		return -1;
	}
	iVar0 = func_402(iParam0);
	if (!iVar0 == 0)
	{
		return func_400(iVar0);
	}
	return -1;
}

int func_400(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 148)
	{
		if (func_171(iVar0) == 9)
		{
			if (func_401(iVar0) == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_401(int iParam0)
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

int func_402(int iParam0)
{
	if (iParam0 == func_97())
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_274.f_271;
}

int func_403(int iParam0)
{
	if (iParam0 != func_97())
	{
		return Global_1590682[iParam0 /*883*/].f_274.f_271 != 0;
	}
	return 0;
}

int func_404()
{
	if (unk_0xCE990E643CD9D0E5(Global_1678288.f_2, 13) || Global_1678288.f_3057)
	{
		return 1;
	}
	return 0;
}

int func_405(int iParam0)
{
	if (iParam0 == func_97())
	{
		return 0;
	}
	if (func_406(iParam0) && Global_2425869[iParam0 /*443*/].f_314.f_9 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_406(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_171(Global_2425869[iParam0 /*443*/].f_314.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_407(int iParam0)
{
	if (iParam0 == func_97())
	{
		return 0;
	}
	if (func_408(iParam0) && Global_2425869[iParam0 /*443*/].f_314.f_9 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_408(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_171(Global_2425869[iParam0 /*443*/].f_314.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_409(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_171(Global_2425869[iParam0 /*443*/].f_314.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_410(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_97())
	{
		return -1;
	}
	iVar0 = func_413(iParam0);
	if (!iVar0 == 0)
	{
		return func_411(iVar0);
	}
	return -1;
}

int func_411(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 148)
	{
		if (func_412(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_412(int iParam0)
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
		
		case joaat("MPSV_LP0_31"):
			return 30;
			break;
		
		case 80:
			return 31;
			break;
	}
	return 0;
}

int func_413(int iParam0)
{
	if (iParam0 == func_97())
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_274.f_183[5 /*12*/];
}

int func_414(int iParam0)
{
	if (iParam0 != func_97())
	{
		return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314, 6);
	}
	return 0;
}

int func_415(int iParam0)
{
	if (iParam0 == func_97())
	{
		return iParam0;
	}
	return Global_2425869[iParam0 /*443*/].f_314.f_9;
}

int func_416(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1 && Global_2425869[iParam0 /*443*/].f_314.f_9 != func_97())
			{
				return func_171(Global_2425869[iParam0 /*443*/].f_314.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_417(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6 != -1;
		}
		else if ((Global_1312896 && iParam0 == unk_0x460153A63B9477BC()) && func_13(iParam0, 1, 0))
		{
			return Global_2425869[iParam0 /*443*/].f_314.f_6 != -1;
		}
	}
	return 0;
}

int func_418()
{
	if ((func_421() || func_420()) || func_419(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	return 0;
}

bool func_419(int iParam0)
{
	if (iParam0 == func_97())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_1627436[iParam0 /*90*/].f_29, 20);
}

bool func_420()
{
	return unk_0xCE990E643CD9D0E5(Global_1689711, 1);
}

bool func_421()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

Vector3 func_422(int iParam0)
{
	int iVar0;
	
	switch (unk_0x04FA724B68B59AC3(iParam0))
	{
		case 1:
		case 2:
		case 3:
			iVar0 = unk_0x255EBCF840E6A9BB(iParam0);
			if (unk_0xAE06B9E39EBDE049(iVar0))
			{
				return unk_0x3E4D3CCC220BDFB1(iVar0, 0);
			}
			break;
	}
	return unk_0x41A1ED9BB4ED4772(iParam0);
}

bool func_423(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_424()
{
	if (func_311(unk_0x460153A63B9477BC()))
	{
		if (!unk_0xCE990E643CD9D0E5(iLocal_86, 2))
		{
			unk_0xBE20AB8238688965(&iLocal_86, 2);
			return 1;
		}
	}
	else if (unk_0xCE990E643CD9D0E5(iLocal_86, 2))
	{
		unk_0xD2459066EA58CE43(&iLocal_86, 2);
		return 1;
	}
	return 0;
}

int func_425(struct<3> Param0, float fParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_439() < 10)
	{
		iVar0 = func_438();
		func_426(Param0, fParam1, iVar0, iParam2);
	}
	return iVar0;
}

void func_426(struct<3> Param0, var uParam1, int iParam2, var uParam3)
{
	func_427(Param0, 0f, 0f, 0f, uParam1, 0, iParam2, uParam3);
}

void func_427(struct<3> Param0, struct<3> Param1, var uParam2, int iParam3, int iParam4, var uParam5)
{
	struct<12> Var0;
	
	if (func_435(unk_0x460153A63B9477BC()) || uParam5)
	{
		if (Var0.f_10 == 1)
		{
			func_434(&Param0, &Param1);
		}
		Var0 = { Param0 };
		Var0.f_3 = { Param1 };
		Var0.f_6 = uParam2;
		Var0.f_10 = iParam3;
		if (func_429(Var0))
		{
			Global_2405074.f_45.f_64 = func_363(unk_0x460153A63B9477BC());
			func_428(Var0, iParam4);
		}
	}
}

void func_428(struct<12> Param0, int iParam1)
{
	Global_2405074.f_365[iParam1 /*12*/] = { Param0 };
	Global_2405074.f_365[iParam1 /*12*/].f_9 = 1;
}

int func_429(struct<12> Param0)
{
	struct<12> Var0[1];
	int iVar1;
	
	Var0[0 /*12*/] = { Param0 };
	Var0[0 /*12*/].f_9 = 1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Global_2405074.f_45[iVar1 /*12*/].f_9 == 1)
		{
			if (!func_430(Global_2405074.f_45[iVar1 /*12*/], &Var0))
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 1;
}

int func_430(struct<3> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if ((uParam10[iVar0 /*12*/])->f_9)
		{
			switch ((uParam10[iVar0 /*12*/])->f_10)
			{
				case 0:
					switch (Param0.f_10)
					{
						case 0:
							if (func_433(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_431(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 2:
							break;
					}
					break;
				
				case 1:
					switch (Param0.f_10)
					{
						case 0:
							if (func_433(Param0, Param0.f_6, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
							{
								return 0;
							}
							break;
						
						case 1:
							if (func_431(Param0, Param0.f_3, *(uParam10[iVar0 /*12*/]), (uParam10[iVar0 /*12*/])->f_6))
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
	if (vmag(Param0) == 0f)
	{
		return 0;
	}
	return 1;
}

bool func_431(struct<3> Param0, struct<3> Param1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	fVar2 = (fParam3 * 0.7071068f);
	Var0 = { Param2 - Vector(fVar2, fVar2, fVar2) };
	Var1 = { Param2 + Vector(fVar2, fVar2, fVar2) };
	return func_432(Param0, Param1, Var0, Var1);
}

int func_432(struct<3> Param0, struct<3> Param1, struct<3> Param2, struct<3> Param3)
{
	if (((((Param0.x >= Param2.x && Param0.f_1 >= Param2.f_1) && Param0.f_2 >= Param2.f_2) && Param1.x <= Param3.x) && Param1.f_1 <= Param3.f_1) && Param1.f_2 <= Param3.f_2)
	{
		return 1;
	}
	return 0;
}

int func_433(struct<3> Param0, float fParam1, struct<3> Param2, float fParam3)
{
	struct<3> Var0;
	
	Var0 = { Param2 - Param0 };
	if ((vmag(Var0) + fParam1) < fParam3)
	{
		return 1;
	}
	return 0;
}

void func_434(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (*uParam0 <= *uParam1)
	{
		Var0.x = *uParam0;
		Var1.x = *uParam1;
	}
	else
	{
		Var0.x = *uParam1;
		Var1.x = *uParam0;
	}
	if (uParam0->f_1 <= uParam1->f_1)
	{
		Var0.f_1 = uParam0->f_1;
		Var1.f_1 = uParam1->f_1;
	}
	else
	{
		Var0.f_1 = uParam1->f_1;
		Var1.f_1 = uParam0->f_1;
	}
	if (uParam0->f_2 <= uParam1->f_2)
	{
		Var0.f_2 = uParam0->f_2;
		Var1.f_2 = uParam1->f_2;
	}
	else
	{
		Var0.f_2 = uParam1->f_2;
		Var1.f_2 = uParam0->f_2;
	}
	*uParam0 = { Var0 };
	*uParam1 = { Var1 };
}

int func_435(int iParam0)
{
	if (((func_362(iParam0, 1) || func_437(iParam0)) || func_107(iParam0, 0)) || func_436(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_436(int iParam0)
{
	if (!func_13(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_35;
}

int func_437(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/] != -1;
	}
	return 0;
}

int func_438()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!Global_2405074.f_365[iVar0 /*12*/].f_9)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_439()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2405074.f_365[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_440()
{
	if (!func_154())
	{
		return;
	}
	if (!unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) == Global_1312603.f_9)
	{
		return;
	}
	func_150();
}

void func_441()
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

void func_442()
{
	char* sVar0;
	
	if (!unk_0xCE990E643CD9D0E5(iLocal_86, 5) && !unk_0xEBB78303C505A9D7())
	{
		if (Local_121.f_707)
		{
			sVar0 = "CPC_TITLEA";
		}
		else
		{
			sVar0 = "CPC_TITLE";
		}
		func_44(63, sVar0, "CPC_START", func_58(), -1, func_58(), 1, 0);
		unk_0x1D42FFF20D06E356();
		unk_0xBE20AB8238688965(&iLocal_86, 5);
	}
}

void func_443(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	unk_0x0C0DE28672975DC3("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		unk_0x0C0DE28672975DC3("WantedMusicDisabled", 1);
	}
	Global_2540384.f_5035 = -1;
	bVar0 = (func_107(unk_0x460153A63B9477BC(), 0) && func_103(unk_0x460153A63B9477BC()));
	if (bParam6)
	{
		func_460(func_461(iParam0), 1);
	}
	else
	{
		func_459(iParam0, -1);
		if (func_7(unk_0x460153A63B9477BC()))
		{
			Global_1574656.f_3 = iParam0;
		}
		else
		{
			func_458(iParam0);
		}
		Global_1574656.f_4 = -1;
		if (func_7(unk_0x460153A63B9477BC()))
		{
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 5);
		}
		if (((func_339() && !func_351()) || func_350(unk_0x460153A63B9477BC(), 21)) || func_350(unk_0x460153A63B9477BC(), 25))
		{
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 4);
		}
		unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 17);
		unk_0xBE20AB8238688965(&(Global_1574656.f_1), 20);
		if (func_457(iParam0))
		{
			func_456();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_453(fParam1);
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
		if (func_451(iParam0))
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
				func_449(1);
				if (func_282(0))
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
			func_447(1);
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 12);
		}
		if (bParam5)
		{
			func_446();
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_444(iParam0))
			{
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 21);
			}
		}
	}
	Global_2515064 = 1;
}

int func_444(int iParam0)
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
	if (func_445())
	{
		return 1;
	}
	return 0;
}

int func_445()
{
	switch (func_298())
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

void func_446()
{
	unk_0xBE20AB8238688965(&(Global_2540384.f_5026), 0);
}

void func_447(bool bParam0)
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
		func_448(iVar0);
		iVar0++;
	}
}

void func_448(int iParam0)
{
	Global_99007.f_184[iParam0] = 1;
	Global_99007.f_183 = 1;
}

void func_449(int iParam0)
{
	if (func_450() && iParam0)
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

int func_450()
{
	if ((((Global_968397 != -1 && Global_968397 != 33) && Global_968397 != 35) && Global_968397 != 37) && Global_968397 != 21)
	{
		return 1;
	}
	return 0;
}

int func_451(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_452(unk_0x460153A63B9477BC()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_452(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1630317[iVar0 /*595*/].f_1, 0);
	}
	return 0;
}

void func_453(float fParam0)
{
	float fVar0;
	
	if (unk_0x856D5567211886A2(unk_0x6C5C6B207AA78253()) == func_454())
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

int func_454()
{
	switch (func_364())
	{
		case 0:
			return func_455();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_455()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

void func_456()
{
	Global_2425869[unk_0x460153A63B9477BC() /*443*/].f_204 = 0;
	unk_0xD2459066EA58CE43(&(Global_2540384.f_4625), 1);
}

int func_457(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_458(int iParam0)
{
	Global_1630317[unk_0x460153A63B9477BC() /*595*/] = iParam0;
}

void func_459(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_523(0) || func_523(func_522(iVar0)))
		{
			unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 2);
		}
		else
		{
			unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1), 2);
		}
	}
}

void func_460(int iParam0, bool bParam1)
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

int func_461(int iParam0)
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

void func_462()
{
	struct<3> Var0;
	var uVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	var uVar5;
	struct<3> Var6;
	bool bVar7;
	bool bVar8;
	var uVar9;
	struct<3> Var10;
	float fVar11;
	
	if (func_13(unk_0x460153A63B9477BC(), 1, 1))
	{
		if ((!func_295() && !func_479(unk_0x460153A63B9477BC(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)) && !func_478(unk_0x460153A63B9477BC()))
		{
			fVar3 = 2.147484E+09f;
			iVar4 = -1;
			Var6 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
			bVar7 = unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), 0);
			bVar8 = func_477();
			iVar2 = 0;
			while (iVar2 < 10)
			{
				uVar9 = Local_121.f_729[iVar2 /*2*/].f_1;
				if (unk_0x3D70CCF2C9B362CD(uVar9) && unk_0x80FF6C016CDB0FAF(unk_0x770D3B2B4702434A(uVar9), 0))
				{
					if (!bVar8)
					{
						if (bVar7 && unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), 0) == unk_0x770D3B2B4702434A(uVar9))
						{
							func_322(1);
						}
					}
					if (func_32(iVar2, &Var0, &uVar1))
					{
						Var10 = { unk_0x3E4D3CCC220BDFB1(unk_0x770D3B2B4702434A(uVar9), 1) };
						if (vdist(Var10, Var0) <= 10f)
						{
							if (func_476(Var10))
							{
								unk_0xBE20AB8238688965(&uVar5, iVar2);
							}
							if (func_474(Var10, Var6))
							{
								if (!func_472(Var0, 100f))
								{
									fVar11 = vdist(Var10, Var6);
									if (fVar11 < fVar3)
									{
										fVar3 = fVar11;
										iVar4 = iVar2;
									}
								}
							}
						}
					}
				}
				iVar2++;
			}
			Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_7 = uVar5;
			if ((unk_0x642A35A076CECC5A(unk_0x9B0761B4C3EB8BC7()) || (unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7()) && !unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7()))) || Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_4 > 0)
			{
				if ((fVar3 < 2.147484E+09f && iVar4 >= 0) && iVar4 < 10)
				{
					if (func_32(iVar4, &Var0, &uVar1))
					{
						iLocal_107 = 1;
						func_471(Var0, 0f, 60f, 1, 20f, 0, 0, 10f, 1, 1, 0, 1, -1082130432);
						func_470(Var0, 1, 0);
						func_464(10, 0, 0, 0, 0);
					}
				}
			}
			else
			{
				func_463();
			}
		}
		else
		{
			func_463();
		}
	}
}

void func_463()
{
	if (iLocal_107)
	{
		func_162();
		func_160();
		iLocal_107 = 0;
	}
}

void func_464(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2440049.f_2005.f_703.f_16 != func_97())
	{
		if (unk_0xCE990E643CD9D0E5(Global_2425869[Global_2440049.f_2005.f_703.f_16 /*443*/].f_411, 0) && func_465())
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

int func_465()
{
	if ((((((func_240(unk_0x460153A63B9477BC()) == 229 || func_240(unk_0x460153A63B9477BC()) == 191) || func_469()) || func_468()) || func_340(unk_0x460153A63B9477BC())) || Global_2515847.f_227 == 1) || (Global_2405074.f_1747 && func_466(unk_0x460153A63B9477BC())))
	{
		return 0;
	}
	return 1;
}

int func_466(int iParam0)
{
	if (func_467(iParam0))
	{
		return 1;
	}
	if (func_101(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_467(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_1630317[iVar0 /*595*/].f_1, 7);
	}
	return 0;
}

bool func_468()
{
	return Global_1574411;
}

int func_469()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_470(struct<3> Param0, int iParam1, int iParam2)
{
	Global_2405074.f_45.f_49 = { Param0 };
	Global_2405074.f_45.f_52 = iParam1;
	Global_2405074.f_45.f_53 = iParam2;
}

void func_471(struct<3> Param0, float fParam1, float fParam2, int iParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	struct<28> Var0;
	
	Var0.f_7 = 1;
	Var0.f_8 = 1;
	Var0.f_21 = 1115815936;
	Var0.f_27 = -1082130432;
	if (unk_0x7FD2BDF03806FD9D(Global_2413905.f_6))
	{
		if (!Global_2413905.f_6 == unk_0x354AD085195C5FA6())
		{
			return;
		}
	}
	if (vmag(Param0) == 0f)
	{
		return;
	}
	if (!unk_0x7FD2BDF03806FD9D(Global_2413905.f_6))
	{
		Global_2413905.f_6 = unk_0x354AD085195C5FA6();
	}
	Var0.f_6 = Global_2413905.f_6;
	Var0 = { Param0 };
	Var0.f_5 = fParam1;
	Var0.f_4 = fParam2;
	Var0.f_7 = iParam3;
	Var0.f_3 = fParam4;
	Var0.f_8 = iParam6;
	Var0.f_9 = iParam5;
	Var0.f_10 = 0;
	Var0.f_11 = { 0f, 0f, 0f };
	Var0.f_14 = { 0f, 0f, 0f };
	Var0.f_17 = 0f;
	Var0.f_21 = fParam7;
	Var0.f_22 = iParam8;
	if (func_435(unk_0x460153A63B9477BC()))
	{
		if (iParam11 || iParam5)
		{
			Var0.f_23 = 1;
		}
		else
		{
			Var0.f_23 = 0;
		}
	}
	else
	{
		Var0.f_23 = 0;
	}
	if (Var0.f_21 < 1f)
	{
		Var0.f_21 = 1f;
	}
	Var0.f_24 = iParam9;
	Var0.f_26 = iParam10;
	Var0.f_27 = iParam12;
	Global_2413905 = { Var0 };
}

bool func_472(struct<3> Param0, float fParam1)
{
	return func_473(Param0, fParam1, unk_0x460153A63B9477BC(), 0, 0);
}

int func_473(struct<3> Param0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_13(iVar1, 0, 1) && func_13(iParam2, 0, 1))
				{
					if (unk_0x6CC163E30ECE0790(iVar1) == unk_0x6CC163E30ECE0790(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_13(iVar1, 0, 1) && func_13(iParam2, 0, 1))
				{
					if (Global_2417956.f_261[iVar0])
					{
						if (vdist(Global_2417956.f_131[iVar0 /*3*/], Param0) < fParam1)
						{
							return 1;
						}
					}
					else if (vdist(func_31(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2417956.f_261[iVar0])
				{
					if (vdist(Global_2417956.f_131[iVar0 /*3*/], Param0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_13(iVar1, 0, 1))
				{
					if (vdist(func_31(iVar1), Param0) < 1f)
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

int func_474(struct<3> Param0, struct<3> Param1)
{
	struct<3> Var0;
	
	if (Local_121.f_8 == 3)
	{
		Var0 = { func_475(Local_121.f_712) };
		if (vdist(Param1, Var0) < 3500f)
		{
			if (vdist(Param0, Var0) > 3500f)
			{
				return 0;
			}
		}
	}
	return 1;
}

Vector3 func_475(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1710.367f, -464.7253f, 169.8001f;
		
		case 1:
			return -966.3996f, -973.0624f, 2.8632f;
		
		case 2:
			return -1347.06f, 4123.072f, 62.2841f;
		
		case 3:
			return 1941.779f, 3847.167f, 34.3796f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_476(struct<3> Param0)
{
	struct<3> Var0;
	
	if (Local_121.f_8 == 3)
	{
		Var0 = { func_475(Local_121.f_712) };
		if (vdist(Param0, Var0) > 2500f)
		{
			return 0;
		}
	}
	return 1;
}

int func_477()
{
	if ((((((func_467(unk_0x460153A63B9477BC()) || func_339()) || func_351()) || func_350(unk_0x460153A63B9477BC(), 21)) || func_350(unk_0x460153A63B9477BC(), 25)) || func_7(unk_0x460153A63B9477BC())) || func_6(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	return 0;
}

int func_478(int iParam0)
{
	if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 14))
	{
		return 1;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 11))
	{
		return 1;
	}
	return 0;
}

int func_479(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16)
{
	if (Global_1590682[iParam0 /*883*/].f_274.f_28 > 0)
	{
		if (bParam1)
		{
			if (unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 0))
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
		if (func_483(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_170(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_482(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_408(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_481(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_406(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_398(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_394(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_386(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_379(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_376(iParam0))
		{
			return 1;
		}
	}
	if (!bParam13)
	{
		if (func_372(iParam0))
		{
			return 1;
		}
	}
	if (!bParam14)
	{
		if (func_370(iParam0))
		{
			return 1;
		}
	}
	if (!bParam15)
	{
		if (func_371(iParam0))
		{
			return 1;
		}
	}
	if (!bParam16)
	{
		if (func_480(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_480(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_171(Global_2425869[iParam0 /*443*/].f_314.f_6) == 17;
			}
		}
	}
	return 0;
}

int func_481(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_171(Global_2425869[iParam0 /*443*/].f_314.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_482(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_171(Global_2425869[iParam0 /*443*/].f_314.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_483(int iParam0)
{
	if (iParam0 != func_97())
	{
		if (func_13(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_171(Global_2425869[iParam0 /*443*/].f_314.f_6) == 0;
			}
		}
	}
	return 0;
}

void func_484(var uParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_294(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_237(sParam1))
	{
		sVar0 = sParam1;
	}
	func_142(uParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
}

char* func_485(int iParam0)
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

int func_486(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_487(int iParam0)
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

int func_488(var uParam0, bool bParam1, bool bParam2)
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

void func_489(bool bParam0)
{
	int iVar0;
	struct<3> Var1;
	
	if (func_34())
	{
		if (func_13(unk_0x460153A63B9477BC(), 1, 1))
		{
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (((!bParam0 && unk_0x3D70CCF2C9B362CD(Local_121.f_729[iVar0 /*2*/].f_1)) && unk_0x80FF6C016CDB0FAF(unk_0x770D3B2B4702434A(Local_121.f_729[iVar0 /*2*/].f_1), 0)) && unk_0xB064AF9925F5537B(unk_0x770D3B2B4702434A(Local_121.f_729[iVar0 /*2*/].f_1), -1, 0))
				{
					if (!unk_0x8F678487EEBD8CE4(iLocal_115[iVar0]))
					{
						iLocal_115[iVar0] = unk_0x2BE000892D65EA2A(unk_0x62D2FF718BC7717D(Local_121.f_729[iVar0 /*2*/].f_1));
						unk_0xE346A71235BB8065(iLocal_115[iVar0], 9);
						unk_0xB023F5C66F5716C7(iLocal_115[iVar0], "AMCH_AC");
						unk_0xE7B8403ABCA0391D(iLocal_115[iVar0], func_490(iVar0));
						func_357(&(iLocal_115[iVar0]), 9);
					}
					else
					{
						Var1 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), 1) };
						if (vdist(Var1, unk_0x3E4D3CCC220BDFB1(unk_0x770D3B2B4702434A(Local_121.f_729[iVar0 /*2*/].f_1), 1)) <= 150f)
						{
							unk_0x3DBD102E8C35EA16(iLocal_115[iVar0], 1);
						}
						else
						{
							unk_0x3DBD102E8C35EA16(iLocal_115[iVar0], 0);
						}
					}
				}
				else if (unk_0x8F678487EEBD8CE4(iLocal_115[iVar0]))
				{
					unk_0x93370FA10F15BE44(&(iLocal_115[iVar0]));
				}
				iVar0++;
			}
		}
	}
}

int func_490(int iParam0)
{
	switch (Local_121.f_729[iParam0 /*2*/])
	{
		case joaat("maverick"):
			return 64;
		
		case joaat("mammatus"):
			return 423;
		
		default:
	}
	return -1;
}

void func_491(int iParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	
	if (!unk_0xEBB78303C505A9D7())
	{
		switch (iParam0)
		{
			case 0:
				if (!unk_0xCE990E643CD9D0E5(iLocal_105, iParam0))
				{
					if (!unk_0xF0C12886E5C1B20E())
					{
						func_494("CPC_PASSIVE", 30000);
						func_166(1);
						unk_0xBE20AB8238688965(&iLocal_105, iParam0);
					}
				}
				break;
			
			case 1:
				if (!unk_0xCE990E643CD9D0E5(iLocal_105, iParam0))
				{
					if (!unk_0xF0C12886E5C1B20E())
					{
						func_494("CPC_NOAIR", 30000);
						func_166(1);
						unk_0xBE20AB8238688965(&iLocal_105, iParam0);
					}
				}
				break;
			
			case 2:
				if (!unk_0xCE990E643CD9D0E5(iLocal_105, iParam0))
				{
					if ((!unk_0xF0C12886E5C1B20E() && !unk_0xDABD547F0DF2906C()) && func_34())
					{
						func_494("AMCH_AIRAV", 30000);
						func_166(1);
						unk_0xBE20AB8238688965(&iLocal_105, iParam0);
					}
				}
				break;
			
			case 3:
				if (!unk_0xCE990E643CD9D0E5(iLocal_105, iParam0))
				{
					if (!unk_0xF0C12886E5C1B20E())
					{
						func_494("AMCH_BLOW", 30000);
						func_166(1);
						unk_0xBE20AB8238688965(&iLocal_105, iParam0);
					}
				}
				break;
			
			case 4:
				if (!unk_0xCE990E643CD9D0E5(iLocal_105, iParam0))
				{
					if (!unk_0xF0C12886E5C1B20E() && !func_493(63))
					{
						if (Local_121.f_707)
						{
							sVar0 = "CPC_HELPA";
						}
						else
						{
							sVar0 = "CPC_HELP";
						}
						func_494(sVar0, 30000);
						func_166(1);
						unk_0xBE20AB8238688965(&iLocal_105, iParam0);
					}
				}
				break;
			
			case 5:
				if (!unk_0xCE990E643CD9D0E5(iLocal_105, iParam0))
				{
					if (((!unk_0xF0C12886E5C1B20E() && !func_493(63)) && !unk_0xDABD547F0DF2906C()) && unk_0xCE990E643CD9D0E5(iLocal_105, 4))
					{
						if (Local_121.f_707)
						{
							sVar1 = "CPC_HELPA2";
						}
						else
						{
							sVar1 = "CPC_HELP2";
						}
						func_494(sVar1, 30000);
						func_166(1);
						unk_0xBE20AB8238688965(&iLocal_105, iParam0);
					}
				}
				break;
			
			case 6:
				if (!unk_0xCE990E643CD9D0E5(iLocal_105, iParam0))
				{
					if (((!unk_0xF0C12886E5C1B20E() && !func_493(63)) && !unk_0xDABD547F0DF2906C()) && unk_0xCE990E643CD9D0E5(iLocal_105, 5))
					{
						if (Local_121.f_707)
						{
							sVar2 = "CPC_WARNA";
						}
						else
						{
							sVar2 = "CPC_WARN";
						}
						func_492(sVar2, func_157(), 30000);
						func_166(1);
						unk_0xC4CC25B68A91D144(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", 0);
						unk_0xBE20AB8238688965(&iLocal_105, iParam0);
					}
				}
				break;
			
			case 7:
				if (!unk_0xCE990E643CD9D0E5(iLocal_105, iParam0))
				{
					if (!unk_0xF0C12886E5C1B20E())
					{
						func_494("CPC_PASSIV1", 30000);
						func_166(1);
						unk_0xBE20AB8238688965(&iLocal_105, iParam0);
					}
				}
				break;
			}
	}
}

void func_492(char* sParam0, int iParam1, int iParam2)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x6A826E35A3096ED0(iParam1);
	unk_0x1A169149B3D18FCB(0, 0, 0, iParam2);
}

bool func_493(int iParam0)
{
	return Global_2440049.f_2834[0 /*80*/].f_1 == iParam0;
}

void func_494(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, 1, iParam1);
}

void func_495(int iParam0)
{
	Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_3 = iParam0;
}

void func_496(bool bParam0)
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

int func_497(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_521(unk_0x460153A63B9477BC(), 29))
	{
		return 0;
	}
	if (func_350(unk_0x460153A63B9477BC(), 21))
	{
		return 0;
	}
	if (func_350(unk_0x460153A63B9477BC(), 25))
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
	if (func_333(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_520())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_519(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	if (func_518())
	{
		return 0;
	}
	if (bParam0)
	{
		if (func_101(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	else if (func_511(unk_0x460153A63B9477BC()) == 3)
	{
		return 0;
	}
	if (func_510(unk_0x460153A63B9477BC()) != func_97() && func_510(unk_0x460153A63B9477BC()) == func_80(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_509(func_190()) && !func_329(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_508())
	{
		return 0;
	}
	if (func_295())
	{
		return 0;
	}
	if (unk_0xFC559366953F62B3())
	{
		return 0;
	}
	if (func_335(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (!func_506())
	{
		return 0;
	}
	if (func_350(unk_0x460153A63B9477BC(), 0) || func_350(unk_0x460153A63B9477BC(), 3))
	{
		return 0;
	}
	if ((func_350(unk_0x460153A63B9477BC(), 12) || func_350(unk_0x460153A63B9477BC(), 14)) || func_350(unk_0x460153A63B9477BC(), 13))
	{
		return 0;
	}
	if (func_505(unk_0x460153A63B9477BC(), 1, 1))
	{
		if (!func_421() && !Global_2515442)
		{
			return 0;
		}
	}
	if (func_504(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_503())
	{
		return 0;
	}
	if (Global_1663771)
	{
		return 0;
	}
	if (func_436(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_502())
	{
		return 0;
	}
	if (func_500(unk_0x460153A63B9477BC()) && Global_1590329.f_171)
	{
		return 0;
	}
	if (func_499())
	{
		return 0;
	}
	if (func_340(unk_0x460153A63B9477BC()))
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
	if (!func_467(unk_0x460153A63B9477BC()))
	{
		if (func_498(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	return 1;
}

int func_498(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627436[iVar0 /*90*/].f_77.f_12 != 0;
	}
	return 0;
}

bool func_499()
{
	return Global_1678288.f_482;
}

int func_500(int iParam0)
{
	if (func_501(Global_1590682[iParam0 /*883*/].f_274.f_28))
	{
		return 1;
	}
	return 0;
}

int func_501(int iParam0)
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

int func_502()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_503()
{
	return Global_99007.f_352 > 0;
}

bool func_504(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_274.f_26, 11);
}

int func_505(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_97())
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

int func_506()
{
	if (func_507() == 0)
	{
		return 1;
	}
	return 0;
}

int func_507()
{
	return Global_1312485.f_18;
}

bool func_508()
{
	return Global_1312896;
}

int func_509(int iParam0)
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

int func_510(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_11.f_35;
}

int func_511(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_437(iParam0) && !func_7(iParam0)) && !unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 8));
	bVar2 = func_101(iParam0);
	uVar3 = func_339();
	uVar4 = func_512();
	if ((bVar1 && (func_467(iParam0) || func_452(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (uVar3 || ((!bVar2 && !func_103(iParam0)) && !func_172(iParam0)))
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

int func_512()
{
	if ((func_102(unk_0x460153A63B9477BC(), 21) || func_102(unk_0x460153A63B9477BC(), 22)) || func_516())
	{
		return 1;
	}
	if (func_514())
	{
		func_513(22);
		return 1;
	}
	return 0;
}

void func_513(int iParam0)
{
	unk_0xBE20AB8238688965(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_4), iParam0);
}

int func_514()
{
	if (func_107(unk_0x460153A63B9477BC(), 0))
	{
		if (((func_339() && !func_351()) || func_350(unk_0x460153A63B9477BC(), 21)) || func_350(unk_0x460153A63B9477BC(), 25))
		{
			return 1;
		}
		else
		{
			func_515(27);
		}
	}
	return 0;
}

void func_515(int iParam0)
{
	unk_0xD2459066EA58CE43(&(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_4), iParam0);
}

int func_516()
{
	return func_517(377, -1);
}

int func_517(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2587834[iParam0 /*3*/][func_224(iParam1)];
	if (unk_0xB9112C701DE2A810(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_518()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 5;
}

int func_519(int iParam0)
{
	if (Global_2425869[iParam0 /*443*/].f_265.f_4 != 0 || Global_2425869[iParam0 /*443*/].f_265.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_520()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 0);
}

bool func_521(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_5, iParam1);
}

int func_522(int iParam0)
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

bool func_523(int iParam0)
{
	int iVar0;
	
	iVar0 = func_228(2481, -1, 0);
	return unk_0xCE990E643CD9D0E5(iVar0, iParam0);
}

void func_524()
{
	if (Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_4 != 0)
	{
		Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_4 = 0;
	}
}

bool func_525(int iParam0)
{
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		if (((func_339() && !func_351()) || func_350(unk_0x460153A63B9477BC(), 21)) || func_350(unk_0x460153A63B9477BC(), 25))
		{
			return 1;
		}
		if (func_38(&(Global_1574656.f_13)))
		{
			if (!func_1(&(Global_1574656.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_37(&(Global_1574656.f_13));
		}
	}
	else if (unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 10))
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 9);
}

bool func_526(int iParam0)
{
	return func_95(iParam0, 0);
}

void func_527()
{
	func_528(&(Local_142.f_534), &Local_142, 27, &(Local_142.f_1), &(Local_142.f_117), -1, 0, 0);
}

void func_528(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6, char* sParam7)
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
	
	if (func_645(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_643() || iParam2 == 28)
	{
		if (func_598(uParam1, iParam2, uParam3, Global_1574191, 0, func_646(), sParam7))
		{
			func_597(1);
			if ((!func_596() && !func_595()) || unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 1))
			{
				if (func_594())
				{
					func_593();
				}
				else
				{
					unk_0xFCC7EAA298CE7AC2(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_592(1);
						Global_1574191 = 0;
						iVar19 = -1;
						if (Global_1574412 != 1)
						{
							func_591(uParam1, 0, 0);
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
								if (func_13(unk_0xF1110FE23C67293A(iVar17), 0, 1))
								{
									iVar3 = unk_0xF1110FE23C67293A(iVar17);
									if (!func_95(iVar3, 0))
									{
										if ((func_587(iVar3) || Global_2425869[iVar3 /*443*/].f_240 != -1) || func_586(iVar3))
										{
											iVar9 = iVar3;
											if (func_82(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_583(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_104(unk_0x460153A63B9477BC(), 0) && func_240(unk_0x460153A63B9477BC()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_582())
							{
								if (func_13(unk_0xF1110FE23C67293A(iVar17), 0, 1))
								{
									iVar3 = unk_0xF1110FE23C67293A(iVar17);
								}
								else
								{
									iVar3 = func_97();
								}
							}
							else
							{
								iVar3 = (uParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_581(iVar3) && func_578(iVar3, iParam2)) && func_13(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1590682[iVar9 /*883*/].f_211.f_6;
								Var6 = { func_573(iVar3) };
								if (iVar3 == unk_0x460153A63B9477BC())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), unk_0x72C1D3A1AB8CAA5B(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_136(iVar3) };
								iVar5 = func_567(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = unk_0x3EF2973864CBE5FC(iVar5);
								}
								Global_1574191++;
								if ((uParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (uParam0[iVar17 /*42*/])->f_22;
								}
								if ((uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (uParam0[iVar17 /*42*/])->f_31;
								}
								if ((uParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (uParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (uParam0[iVar17 /*42*/])->f_9;
								if (((uParam0[iVar17 /*42*/])->f_9 != -1 || (uParam0[iVar17 /*42*/])->f_22 != -1f) || (uParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_582())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_562(&iVar8, &fVar10, (uParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_561(iParam5, 1, 0, 0), 16);
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
								iVar16 = func_560(iVar3, 0);
								if (bVar2)
								{
									if (func_81(iVar3, 1) && iVar1[iVar9] != -1)
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
								if ((uParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (uParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_559(iParam5))
								{
									func_558(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_558(iVar3, uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (uParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
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
							if (func_13(iVar3, 0, 1) && !unk_0xCE990E643CD9D0E5(iVar14, iVar3))
							{
								iVar3 = unk_0xF1110FE23C67293A(iVar17);
							}
							else
							{
								iVar3 = func_97();
							}
							if (func_581(iVar3))
							{
								if (func_13(unk_0xF1110FE23C67293A(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1590682[iVar9 /*883*/].f_211.f_6;
									Var6 = { func_573(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_136(iVar3) };
									iVar5 = func_567(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = unk_0x3EF2973864CBE5FC(iVar5);
									}
									Global_1574191++;
									iVar16 = func_560(iVar3, 1);
									if (bVar2)
									{
										if (func_81(iVar3, 1))
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
									func_541(iVar3, unk_0x72C1D3A1AB8CAA5B(iVar3), uParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (unk_0xCE990E643CD9D0E5(uParam3->f_33, 11))
						{
							func_538(uParam3, uParam1, iParam2);
						}
						func_37(&(uParam3->f_21));
						func_537();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!unk_0xCE990E643CD9D0E5(uParam3->f_33, 7))
						{
							func_536(uParam3, uParam1);
							func_535(uParam1, 0, 1);
							unk_0xBE20AB8238688965(&(uParam3->f_33), 7);
						}
						func_536(uParam3, uParam1);
						if (!unk_0xCE990E643CD9D0E5(uParam3->f_33, 11))
						{
							unk_0xBE20AB8238688965(&(uParam3->f_33), 11);
						}
						if (func_531(uParam3))
						{
							Global_1574412 = 1;
						}
						func_529(uParam3);
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
			func_537();
			func_592(0);
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

void func_529(var uParam0)
{
	if (!func_38(&(uParam0->f_21)))
	{
		func_2(&(uParam0->f_21), 0, 0);
	}
	else if (func_1(&(uParam0->f_21), 250, 0))
	{
		func_37(&(uParam0->f_21));
		func_530(0);
	}
}

void func_530(bool bParam0)
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

int func_531(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = unk_0xF1110FE23C67293A(uParam0->f_37);
	if (iVar3 != func_97() && func_13(iVar3, 0, 1))
	{
		Var2 = { func_136(iVar3) };
		iVar1 = func_534(uParam0, uParam0->f_37);
		if (func_533(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (unk_0x4B9AEC757F715980(&Var2))
					{
						if (unk_0x30EE34228B1AF045(&Var2))
						{
							iVar4 = 1;
							func_532(uParam0, iVar0, 2);
						}
					}
					else if (unk_0x7677D662EB0C9C8A(&Var2))
					{
						iVar4 = 1;
						func_532(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (unk_0x4B9AEC757F715980(&Var2))
					{
						if (!unk_0x30EE34228B1AF045(&Var2))
						{
							iVar4 = 1;
							func_532(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_532(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (unk_0x4B9AEC757F715980(&Var2))
					{
						if (!unk_0x7677D662EB0C9C8A(&Var2))
						{
							iVar4 = 1;
							func_532(uParam0, iVar0, 0);
						}
					}
					else if (!unk_0x7677D662EB0C9C8A(&Var2))
					{
						iVar4 = 1;
						func_532(uParam0, iVar0, 0);
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

void func_532(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_533(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return unk_0xF6B8932480699645(&uParam0, 13);
}

var func_534(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_535(var uParam0, bool bParam1, int iParam2)
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

void func_536(var uParam0, var uParam1)
{
	if (!unk_0xCE990E643CD9D0E5(uParam0->f_33, 10))
	{
		unk_0x830F007E19C63E14(*uParam1, "SET_HIGHLIGHT");
		unk_0xAD291B8F75D737AD(uParam0->f_35);
		unk_0xE1FDD153F5858534();
		unk_0xBE20AB8238688965(&(uParam0->f_33), 10);
	}
}

void func_537()
{
	if (Global_1574412 != 0)
	{
		Global_1574412 = 0;
	}
}

void func_538(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = unk_0xF1110FE23C67293A(iVar0);
		if (iVar2 != func_97())
		{
			if (func_13(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_540(uParam0->f_38[iVar0 /*2*/], 0, iParam2);
					func_539(uParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1590682[iVar0 /*883*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_539(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_540(int iParam0, bool bParam1, int iParam2)
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

void func_541(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_557() && iParam4 < func_556())
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
				func_555("");
			}
			else
			{
				unk_0xAD291B8F75D737AD(iParam10);
			}
			func_555(sParam1);
			unk_0xAD291B8F75D737AD(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_555("");
			}
			else
			{
				unk_0xAD291B8F75D737AD(65);
			}
			unk_0xAD291B8F75D737AD(-1);
			func_555("");
			if (uParam3->f_108 == 6)
			{
				func_555("");
			}
			else
			{
				func_555(&sParam5);
			}
			func_546(uParam3, iParam0);
			unk_0x4A096F645CED26D9(sParam9);
			unk_0x4A096F645CED26D9(sParam9);
			if (func_545(uParam3))
			{
				func_544("DPAD_FRIEND");
			}
			else if (func_543(uParam3))
			{
				func_544("DPAD_FRIEND");
			}
			else if (func_542(uParam3))
			{
				func_544("DPAD_CREW");
			}
			else
			{
				func_544("");
			}
			unk_0xE1FDD153F5858534();
		}
	}
}

bool func_542(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(uParam0->f_33, 6);
}

bool func_543(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(uParam0->f_33, 5);
}

void func_544(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

int func_545(var uParam0)
{
	if (func_543(uParam0) && func_542(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_546(var uParam0, int iParam1)
{
	if (func_554(iParam1))
	{
		unk_0xAD291B8F75D737AD(121);
	}
	else if (func_550(iParam1))
	{
		unk_0xAD291B8F75D737AD(122);
	}
	else if (((unk_0xCE990E643CD9D0E5(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && unk_0xCE990E643CD9D0E5(Global_2425869[iParam1 /*443*/].f_420, 0))
	{
		unk_0xAD291B8F75D737AD(123);
	}
	else
	{
		if (func_547())
		{
			uParam0->f_36 = 0;
		}
		unk_0xF1B28F753235CE2A(uParam0->f_36);
	}
}

int func_547()
{
	if (unk_0xFC559366953F62B3())
	{
		if (func_548() || func_87())
		{
			return 1;
		}
	}
	return 0;
}

int func_548()
{
	if (unk_0xFC559366953F62B3())
	{
		return func_87();
	}
	return func_549(Global_4456448.f_82708);
}

int func_549(int iParam0)
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

int func_550(int iParam0)
{
	if ((func_13(iParam0, 0, 1) && func_551()) && func_184(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

int func_551()
{
	if (func_437(unk_0x460153A63B9477BC()) || func_553())
	{
		if (!func_552(unk_0x460153A63B9477BC()))
		{
			return 0;
		}
	}
	return 1;
}

int func_552(int iParam0)
{
	if (func_299(iParam0) == 236 || func_299(iParam0) == 150)
	{
		return func_467(iParam0);
	}
	return 0;
}

int func_553()
{
	switch (func_240(unk_0x460153A63B9477BC()))
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

int func_554(int iParam0)
{
	if (func_547())
	{
		if (func_13(iParam0, 0, 1))
		{
			return func_82(iParam0);
		}
	}
	if ((func_13(iParam0, 0, 1) && func_551()) && func_186(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_555(char* sParam0)
{
	unk_0x54AED56A452DCB4F(sParam0);
}

int func_556()
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

int func_557()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574193)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_558(int iParam0, var uParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_557() && iParam3 < func_556())
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
					func_555("");
				}
				else
				{
					unk_0xAD291B8F75D737AD(iParam9);
				}
				if (uParam2->f_108 == 6 && !unk_0x7BCC91F3C1CF24E8(sParam16))
				{
					func_544(sParam16);
				}
				else
				{
					func_555(&(uParam2->f_1));
				}
				unk_0xAD291B8F75D737AD(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_555("");
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
				if (func_582())
				{
					func_555("");
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
						func_544(&(uParam2->f_104));
					}
					else
					{
						func_555("");
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
					func_555("");
				}
				if (uParam2->f_108 == 6)
				{
					func_555("");
				}
				else
				{
					func_555(&sParam4);
				}
				func_546(uParam2, iParam0);
				if (iParam12 == 1 || unk_0x7BCC91F3C1CF24E8(sParam8))
				{
					func_555("");
					func_555("");
				}
				else
				{
					unk_0x4A096F645CED26D9(sParam8);
					unk_0x4A096F645CED26D9(sParam8);
				}
				if (func_545(uParam2))
				{
					func_544("DPAD_FRIEND");
				}
				else if (func_543(uParam2))
				{
					func_544("DPAD_FRIEND");
				}
				else if (func_542(uParam2))
				{
					func_544("DPAD_CREW");
				}
				else
				{
					func_544("");
				}
				unk_0xE1FDD153F5858534();
			}
		}
	}
}

int func_559(int iParam0)
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

int func_560(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_437(iParam0)) && !func_101(iParam0))
	{
		iVar0 = func_58();
	}
	iVar1 = func_79(iParam0);
	if (!iVar1 == -1)
	{
		return func_77(iVar1);
	}
	return iVar0;
}

char* func_561(int iParam0, bool bParam1, bool bParam2, int iParam3)
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

int func_562(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_566(iParam3))
	{
		*fParam1 = (func_563(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_559(iParam3))
	{
		*fParam1 = (func_563(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_563(int iParam0, int iParam1)
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
				return func_565(to_float(iParam1));
			}
			break;
		
		case 2:
			if (unk_0x1CB1AF03C74FCE70())
			{
				return to_float(iParam1);
			}
			else
			{
				return func_564(to_float(iParam1));
			}
			break;
	}
	return to_float(iParam1);
}

float func_564(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_565(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_566(int iParam0)
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

int func_567(int iParam0)
{
	int iVar0;
	
	iVar0 = func_570(iParam0);
	if (iVar0 == -1)
	{
		func_568(iParam0, 1);
		return 0;
	}
	Global_1389221[iVar0 /*5*/].f_4 = 1;
	return Global_1389221[iVar0 /*5*/].f_2;
}

void func_568(int iParam0, bool bParam1)
{
	if (!func_13(iParam0, 0, 1))
	{
		return;
	}
	if (func_570(iParam0) != -1)
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
	if (func_569(iParam0))
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

int func_569(int iParam0)
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

int func_570(int iParam0)
{
	int iVar0;
	
	if (!func_13(iParam0, 0, 1))
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
			func_571(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_571(int iParam0)
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
	func_572(&(Global_1389221[iVar2 /*5*/]));
	Global_1389382 = (Global_1389382 - 1);
}

void func_572(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_97();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (unk_0x25DDB354A40FFCDB())
	{
		uParam0->f_3 = unk_0x6CAAB7E78B5D978A();
	}
}

struct<4> func_573(int iParam0)
{
	char cVar0[32];
	
	if (func_13(iParam0, 0, 1))
	{
		Global_2515173 = { func_136(iParam0) };
		if (unk_0xC6C08C02733D02C8())
		{
			if (func_533(Global_2515173))
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
		if (func_577(&Global_2515173))
		{
			Global_2515103 = { func_575(iParam0) };
			func_574(&Global_2515103, &cVar0);
		}
	}
	return cVar0;
}

void func_574(var uParam0, char* sParam1)
{
	unk_0xA36843D7CCD081D6(uParam0, 35, sParam1);
}

struct<35> func_575(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_576(iParam0))
	{
		return Global_1312928[unk_0x460153A63B9477BC() /*35*/];
	}
	Var0 = { func_136(iParam0) };
	unk_0x192BD21E18525C69(&Var1, 35, &Var0);
	return Var1;
}

int func_576(int iParam0)
{
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		return 1;
	}
	return 0;
}

int func_577(var uParam0)
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

int func_578(int iParam0, int iParam1)
{
	if (iParam1 == 27)
	{
		if ((func_7(iParam0) || func_580(iParam0)) || func_6(iParam0))
		{
			return 0;
		}
	}
	if (!func_579(iParam0))
	{
		return 0;
	}
	if ((!func_587(iParam0) && Global_2425869[iParam0 /*443*/].f_240 == -1) && !func_586(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_579(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[iParam0 /*883*/].f_142, 22);
}

int func_580(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 10) || unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 9));
	}
	return 0;
}

int func_581(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_97())
	{
		return 0;
	}
	if (func_95(iParam0, 0))
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

int func_582()
{
	switch (func_240(unk_0x460153A63B9477BC()))
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
	switch (func_299(unk_0x460153A63B9477BC()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_101(unk_0x460153A63B9477BC()))
	{
		switch (func_240(unk_0x460153A63B9477BC()))
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
	if (func_552(unk_0x460153A63B9477BC()))
	{
		return 1;
	}
	return 0;
}

void func_583(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_13(unk_0xF1110FE23C67293A(iVar0), 0, 1))
		{
			iVar1 = unk_0xF1110FE23C67293A(iVar0);
			if (!func_95(iVar1, 0))
			{
				if ((func_587(iVar1) || Global_2425869[iVar1 /*443*/].f_240 != -1) || func_586(iVar1))
				{
					if (func_584(iVar1, iParam1, 0))
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

int func_584(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_97())
	{
		if (!bParam2)
		{
			if (func_585(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1630317[iParam0 /*595*/].f_11 != func_97())
		{
			return iParam1 == Global_1630317[iParam0 /*595*/].f_11;
		}
	}
	return 0;
}

int func_585(int iParam0, int iParam1)
{
	if (iParam1 != func_97())
	{
		if (iParam0 != func_97())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 != func_97())
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

bool func_586(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_196 != 0;
}

int func_587(int iParam0)
{
	if (func_13(iParam0, 0, 1))
	{
		if (func_13(unk_0x460153A63B9477BC(), 0, 1))
		{
			if (unk_0x56B60AE958412839(iParam0, unk_0x460153A63B9477BC()) || (func_240(iParam0) == 233 && func_588(iParam0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_588(int iParam0)
{
	bool bVar0;
	bool bVar1;
	
	bVar0 = func_589(unk_0x460153A63B9477BC());
	bVar1 = func_589(iParam0);
	if ((bVar0 && !bVar1) || (!bVar0 && bVar1))
	{
		return 0;
	}
	return 1;
}

bool func_589(int iParam0)
{
	return func_590(&(Global_2425869[iParam0 /*443*/].f_429), 0);
}

bool func_590(var uParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, iParam1);
}

void func_591(var uParam0, int iParam1, int iParam2)
{
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		unk_0x830F007E19C63E14(*uParam0, "SET_DATA_SLOT_EMPTY");
		unk_0xAD291B8F75D737AD(iParam1);
		unk_0xAD291B8F75D737AD(iParam2);
		unk_0xE1FDD153F5858534();
	}
}

void func_592(bool bParam0)
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

void func_593()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 1))
	{
		if (func_173())
		{
			func_189();
		}
	}
}

int func_594()
{
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 0) && func_173())
	{
		return 1;
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4652, 1) && func_173())
	{
		return 1;
	}
	return 0;
}

int func_595()
{
	if (func_173())
	{
		if (func_46(Global_2440049.f_2834[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_596()
{
	if (func_173())
	{
		if (func_59(Global_2440049.f_2834[0 /*80*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

void func_597(int iParam0)
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

int func_598(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, char* sParam6)
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
	bVar3 = func_642(iParam1);
	fVar4 = func_641();
	iVar5 = -1;
	if (iParam1 == 27 || iParam1 == 28)
	{
		if (func_640())
		{
			if (func_639() > 0 && Global_1574193)
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
		if (!func_628())
		{
			func_627(uParam0, uParam2, 1);
			return 0;
		}
	}
	if (unk_0xCE990E643CD9D0E5(Global_2540384.f_4655, 26))
	{
		func_627(uParam0, uParam2, 1);
		return 0;
	}
	if (!func_38(&(uParam2->f_19)))
	{
		if (func_639() == 1)
		{
			func_626(bVar3, uParam0, 0);
			func_2(&(uParam2->f_19), 0, 0);
			func_627(uParam0, uParam2, 0);
			unk_0xBE20AB8238688965(&(Global_2540384.f_4656), 5);
		}
	}
	if (func_38(&(uParam2->f_19)) || bParam5)
	{
		if (unk_0xDABD547F0DF2906C())
		{
			unk_0x64083C4199676F44();
		}
		unk_0x4CB4237D8858ADA6(10);
		if (func_1(&(uParam2->f_19), 10000, 0) || (func_639() == 0 && !bParam5))
		{
			func_627(uParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_625();
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
					func_625();
					if (iParam1 == 27 || iParam1 == 28)
					{
						unk_0xD10328357EA7B9E5();
					}
					unk_0x4CB4237D8858ADA6(18);
				}
				unk_0x530DC1525CA60B00(fVar4);
				if (func_626(bVar3, uParam0, 0))
				{
					func_591(uParam0, 0, 0);
					sVar1 = func_623(iParam1, &(Global_4456448.f_82715), bParam4);
					Var0 = { func_621(iParam1) };
					if (bParam4)
					{
						func_618(uParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 27)
					{
						func_612(uParam0, func_615(uParam2), func_613(uParam2), -1);
					}
					else if (iParam1 == 28)
					{
						sVar6 = func_606(uParam2);
						if (!unk_0x7BCC91F3C1CF24E8(sParam6))
						{
							sVar6 = sParam6;
						}
						func_604(uParam0, sVar6, func_605(), -1);
					}
					else if (func_547())
					{
						uParam2->f_34 = Global_1574192;
						func_618(uParam0, sVar1, &Var0, 1, -1, Global_1574192, 1);
					}
					else if (bVar2)
					{
						iVar5 = func_599(iParam1);
						uParam2->f_34 = Global_1574192;
						func_618(uParam0, sVar1, "", 0, iVar5, Global_1574192, 1);
					}
					else
					{
						iVar5 = func_599(iParam1);
						func_618(uParam0, sVar1, &Var0, 1, iVar5, -1, 1);
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

int func_599(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_603())
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
			if (func_602(unk_0x460153A63B9477BC()))
			{
				iVar0 = 20;
			}
			if (func_601(unk_0x460153A63B9477BC()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_600(unk_0x460153A63B9477BC()))
	{
		iVar0 = 2;
	}
	if (func_241())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_600(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 4;
}

bool func_601(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 7;
}

bool func_602(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 2;
}

bool func_603()
{
	return Global_4456448.f_1 == 0;
}

void func_604(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		unk_0x830F007E19C63E14(*uParam0, "SET_TITLE");
		if (unk_0x7BCC91F3C1CF24E8(sParam2))
		{
			func_544(sParam1);
		}
		else
		{
			unk_0xB23270F3D5E62FDE("FM_AE_BRACKT");
			unk_0x6A826E35A3096ED0(sParam1);
			unk_0x6A826E35A3096ED0(sParam2);
			unk_0x2042E9CA4306F725();
		}
		func_544("");
		if (iParam3 != -1)
		{
			unk_0xAD291B8F75D737AD(iParam3);
		}
		unk_0xE1FDD153F5858534();
	}
}

char* func_605()
{
	switch (func_240(unk_0x460153A63B9477BC()))
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

char* func_606(var uParam0)
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
	switch (func_240(unk_0x460153A63B9477BC()))
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
			if (func_608())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_276(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_276(1))
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
			if (func_607(Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_181))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_607(int iParam0)
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

bool func_608()
{
	return (func_611() && func_609(func_610()));
}

int func_609(int iParam0)
{
	return func_186(iParam0, 1);
}

int func_610()
{
	return Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_11.f_35;
}

bool func_611()
{
	return Global_1590682[unk_0x460153A63B9477BC() /*883*/] == 148;
}

void func_612(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		unk_0x830F007E19C63E14(*uParam0, "SET_TITLE");
		if (unk_0x7BCC91F3C1CF24E8(sParam2))
		{
			func_544(sParam1);
		}
		else if (func_299(unk_0x460153A63B9477BC()) == 133)
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
		func_544("");
		if (iParam3 != -1)
		{
			unk_0xAD291B8F75D737AD(iParam3);
		}
		unk_0xE1FDD153F5858534();
	}
}

char* func_613(var uParam0)
{
	int iVar0;
	
	iVar0 = func_299(unk_0x460153A63B9477BC());
	if (func_614())
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
			switch (func_298())
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

bool func_614()
{
	return Global_1590555;
}

char* func_615(var uParam0)
{
	int iVar0;
	
	iVar0 = func_299(unk_0x460153A63B9477BC());
	if (func_614())
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
			if (func_617() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_617() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_298())
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
			if (func_616() == 1)
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

int func_616()
{
	return Global_2540384.f_5112;
}

int func_617()
{
	if (func_299(unk_0x460153A63B9477BC()) == 132)
	{
		return Global_2540384.f_5107;
	}
	return -1;
}

void func_618(var uParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (unk_0x95EF219D38B20CFF(*uParam0))
	{
		unk_0x830F007E19C63E14(*uParam0, "SET_TITLE");
		if (bParam3)
		{
			func_555(sParam1);
		}
		else if (iParam5 != -1)
		{
			unk_0xB23270F3D5E62FDE(sParam1);
			unk_0x42710E9E08FA375A(iParam5);
			unk_0x2042E9CA4306F725();
		}
		else
		{
			func_544(sParam1);
		}
		if (func_640() && iParam6)
		{
			if (func_620())
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
			func_544(sParam2);
		}
		if (iParam4 != -1)
		{
			unk_0xAD291B8F75D737AD(iParam4);
			if (func_619(unk_0x460153A63B9477BC()))
			{
				unk_0xAD291B8F75D737AD(166);
			}
			else if (func_56())
			{
				unk_0xAD291B8F75D737AD(220);
			}
		}
		unk_0xE1FDD153F5858534();
	}
}

int func_619(int iParam0)
{
	if (func_602(iParam0) || func_601(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_620()
{
	return Global_1574193;
}

struct<4> func_621(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_622(unk_0x460153A63B9477BC()) || func_600(unk_0x460153A63B9477BC()))
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
	if (func_547() && unk_0xFC559366953F62B3())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_525, 16);
	}
	return Var0;
}

bool func_622(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 5;
}

char* func_623(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_547() || unk_0x7BCC91F3C1CF24E8(sParam1)))
	{
		uVar0 = func_624();
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

char* func_624()
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

void func_625()
{
	Global_42556 = 1;
}

bool func_626(bool bParam0, var uParam1, bool bParam2)
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

void func_627(var uParam0, var uParam1, bool bParam2)
{
	unk_0xD2459066EA58CE43(&(uParam1->f_33), 7);
	Global_1574191 = 0;
	func_537();
	Global_1574190 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_38(&(uParam1->f_19)))
		{
			func_37(&(uParam1->f_19));
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

int func_628()
{
	if (func_638())
	{
		return 0;
	}
	if (func_518())
	{
		return 0;
	}
	if (!func_636())
	{
		return 0;
	}
	if (!func_506())
	{
		return 0;
	}
	if (func_635(8, -1))
	{
		return 0;
	}
	if (func_639() == 2)
	{
		return 0;
	}
	if (Global_2540384.f_4607)
	{
		return 0;
	}
	if (func_295())
	{
		return 0;
	}
	else if (!func_334(unk_0x460153A63B9477BC(), 1, 0) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_634(1) || func_632(1)) || Global_22411.f_124) || Global_22411)
	{
		return 0;
	}
	if (unk_0xF0C12886E5C1B20E())
	{
		return 0;
	}
	if (func_631() && Global_1696334 == 2)
	{
		return 0;
	}
	if (func_93(unk_0x460153A63B9477BC()) && !func_631())
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
	if (func_630(0))
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
	if (func_629(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if ((Global_1370330 || Global_1370331) || Global_1370332)
	{
		return 0;
	}
	return 1;
}

bool func_629(int iParam0)
{
	if (iParam0 == func_97())
	{
		return 0;
	}
	return unk_0xCE990E643CD9D0E5(Global_2425869[iParam0 /*443*/].f_314.f_4, 6);
}

bool func_630(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5188.f_45, iParam0);
}

bool func_631()
{
	return (unk_0xCE990E643CD9D0E5(Global_4456448.f_30, 12) && unk_0xCE990E643CD9D0E5(Global_1696335, 0));
}

int func_632(bool bParam0)
{
	if (unk_0xDE4629DF35A51BEF())
	{
		if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
		{
			if (func_633(unk_0x9B0761B4C3EB8BC7()))
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

int func_633(int iParam0)
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

bool func_634(bool bParam0)
{
	if (bParam0)
	{
		return (Global_22411.f_4 && Global_22411.f_104 == 4);
	}
	return Global_22411.f_4;
}

bool func_635(int iParam0, int iParam1)
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

int func_636()
{
	if (func_637())
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

bool func_637()
{
	return Global_1312458;
}

bool func_638()
{
	return unk_0x578C4EF320340AF7() <= Global_22550.f_5878 + 100;
}

int func_639()
{
	return Global_1377236.f_68;
}

int func_640()
{
	if (Global_1574192 > 16)
	{
		return 1;
	}
	return 0;
}

float func_641()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - unk_0x1D5FD59B82DB8734()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_642(int iParam0)
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

int func_643()
{
	if (func_646())
	{
		return 1;
	}
	if (func_6(unk_0x460153A63B9477BC()))
	{
		return 0;
	}
	if (func_614())
	{
		return 1;
	}
	if (func_437(unk_0x460153A63B9477BC()))
	{
		switch (func_299(unk_0x460153A63B9477BC()))
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
				if (!func_644(unk_0x460153A63B9477BC()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_644(unk_0x460153A63B9477BC()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_644(unk_0x460153A63B9477BC()))
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

bool func_644(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 4);
}

int func_645(int iParam0)
{
	if (iParam0 == 28)
	{
		if ((func_437(unk_0x460153A63B9477BC()) && !func_101(unk_0x460153A63B9477BC())) && !func_552(unk_0x460153A63B9477BC()))
		{
			return 1;
		}
	}
	if (iParam0 == 27)
	{
		if (func_107(unk_0x460153A63B9477BC(), 0) && func_101(unk_0x460153A63B9477BC()))
		{
			return 1;
		}
		if (func_511(unk_0x460153A63B9477BC()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_646()
{
	if (func_647(unk_0x460153A63B9477BC()))
	{
		return Global_1319161;
	}
	return 0;
}

int func_647(int iParam0)
{
	if (unk_0x25DDB354A40FFCDB())
	{
		if (func_95(iParam0, 0))
		{
			return unk_0x118E43E714532022(iParam0);
		}
	}
	return 0;
}

void func_648()
{
	int iVar0;
	
	if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(iLocal_90)))
	{
		iVar0 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(iLocal_90));
		if (unk_0x166E920FB00B2DBB(iVar0))
		{
			func_649(iVar0, 2);
		}
	}
	iLocal_90++;
	if (iLocal_90 >= unk_0xEFA28384DDD283E1())
	{
		iLocal_90 = 0;
	}
}

void func_649(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 0))
	{
		return;
	}
	if (func_38(&(Global_1574656.f_18)))
	{
		return;
	}
	if (unk_0xCE990E643CD9D0E5(Global_1574656.f_2, iParam0))
	{
		if (Global_1574656 < iParam1 && unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 1))
		{
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 0);
			return;
		}
		if (Global_1574656 != 0)
		{
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 1);
		}
		Global_1574656 = 0;
		Global_1574656.f_2 = 0;
	}
	unk_0xBE20AB8238688965(&(Global_1574656.f_2), iParam0);
	bVar0 = true;
	if (func_7(iParam0))
	{
		bVar0 = false;
	}
	if (func_650(iParam0))
	{
		bVar0 = false;
	}
	if (func_95(iParam0, 0))
	{
		bVar0 = false;
	}
	if (func_6(iParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		Global_1574656++;
	}
}

bool func_650(int iParam0)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_1, 10);
}

void func_651(int iParam0, int iParam1)
{
	Local_1488[iParam0 /*5*/] = iParam1;
}

int func_652()
{
	struct<71> Var0;
	int iVar1;
	int iVar2;
	
	Var0 = 4;
	Var0.f_5 = 32;
	Var0.f_38 = 32;
	Global_2540384.f_5036 = { Var0 };
	iVar1 = 0;
	while (iVar1 < func_653())
	{
		Global_2540384.f_5036.f_38[iVar1] = -1;
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		Local_142.f_534[iVar2 /*42*/].f_1 = func_97();
		iVar2++;
	}
	return 1;
}

int func_653()
{
	if (Global_2459539)
	{
		return 32;
	}
	return (32 - Global_2459540);
}

int func_654()
{
	return Local_121;
}

int func_655(int iParam0)
{
	return Local_1488[iParam0 /*5*/];
}

void func_656()
{
	if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 6))
	{
		func_680();
		unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 6);
	}
	if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 7))
	{
		if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 4) || unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 16))
		{
			if (((!unk_0xEBB78303C505A9D7() && !unk_0xDABD547F0DF2906C()) && !func_173()) && func_13(unk_0x460153A63B9477BC(), 1, 1))
			{
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 7);
				func_167("FME_PASINT", 30000);
				func_166(1);
			}
		}
		else if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 17))
		{
			if (func_339() && !func_351())
			{
				unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 17);
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 16);
			}
		}
	}
	if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 23))
	{
		if (((((!unk_0xEBB78303C505A9D7() && !unk_0xCE990E643CD9D0E5(Global_2540384.f_833, 2)) && func_13(unk_0x460153A63B9477BC(), 1, 1)) && !Global_74030) && !Global_58898) && !unk_0xDABD547F0DF2906C())
		{
			if (func_678())
			{
				func_167("AMEV_GA_RP", -1);
				if (func_240(unk_0x460153A63B9477BC()) != 200)
				{
					func_166(1);
				}
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 23);
			}
		}
	}
	if (unk_0xF0C12886E5C1B20E() && unk_0xCFB49FF4012D7C68() == 15)
	{
		if (func_452(unk_0x460153A63B9477BC()))
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
		if (((((!unk_0xEBB78303C505A9D7() && !unk_0xDABD547F0DF2906C()) && !func_173()) && func_13(unk_0x460153A63B9477BC(), 1, 1)) && !func_350(unk_0x460153A63B9477BC(), 21)) && !func_350(unk_0x460153A63B9477BC(), 25))
		{
			unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 9);
			func_677(0);
			func_167("FME_TBL00", -1);
			func_166(1);
		}
	}
	if (func_437(unk_0x460153A63B9477BC()))
	{
		if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 18))
		{
			if ((func_350(unk_0x460153A63B9477BC(), 21) && unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 20)) && !unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 19))
			{
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 18);
			}
		}
		else if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 18))
		{
			if (((((!unk_0xEBB78303C505A9D7() && !unk_0xDABD547F0DF2906C()) && !func_173()) && func_13(unk_0x460153A63B9477BC(), 1, 1)) && unk_0x87F0CB19476706C3()) && !Global_2540384.f_5121)
			{
				unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 18);
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 19);
				func_167("AMTT_RPAS", -1);
				func_166(1);
			}
		}
	}
	if (((((func_437(unk_0x460153A63B9477BC()) && !func_7(unk_0x460153A63B9477BC())) && func_299(unk_0x460153A63B9477BC()) != 146) && !func_6(unk_0x460153A63B9477BC())) && !func_525(unk_0x460153A63B9477BC())) && !func_667())
	{
		if (func_451(func_299(unk_0x460153A63B9477BC())))
		{
			unk_0xA2FFEA2766563CF9(unk_0x460153A63B9477BC());
		}
		if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 22))
		{
			unk_0xBE20AB8238688965(&(Global_1574656.f_1), 22);
		}
		if (func_467(unk_0x460153A63B9477BC()) || func_445())
		{
			if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 10))
			{
				if (func_665(func_299(unk_0x460153A63B9477BC())))
				{
					if (func_282(0) && !Global_2391045)
					{
						unk_0xBE20AB8238688965(&(Global_1574656.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_449(1);
						unk_0xBE20AB8238688965(&(Global_1574656.f_1), 14);
					}
				}
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 10);
			}
		}
		if (func_452(unk_0x460153A63B9477BC()))
		{
			if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 11))
			{
				if (!Global_99007.f_8)
				{
					unk_0xBE20AB8238688965(&(Global_1574656.f_1), 12);
					func_447(1);
				}
				if (!func_664())
				{
					unk_0xBE20AB8238688965(&(Global_1574656.f_1), 13);
					func_446();
				}
				if (!Global_2391045)
				{
					unk_0xBE20AB8238688965(&(Global_1574656.f_1), 14);
					if (func_282(0) && !Global_2391045)
					{
						unk_0xBE20AB8238688965(&(Global_1574656.f_1), 9);
					}
					func_449(1);
				}
				unk_0xBE20AB8238688965(&(Global_1574656.f_1), 11);
			}
		}
		else
		{
			func_662(0);
		}
	}
	else
	{
		func_662(1);
	}
	func_657();
	if (func_444(func_299(unk_0x460153A63B9477BC())) && !unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 21))
	{
		unk_0xBE20AB8238688965(&(Global_1574656.f_1), 21);
	}
	if (((func_339() && !func_351()) || func_350(unk_0x460153A63B9477BC(), 21)) || func_350(unk_0x460153A63B9477BC(), 25))
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

void func_657()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_173())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_493(iVar2))
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
				func_658(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 26))
	{
		func_37(&(Global_1574656.f_22));
		unk_0xBE20AB8238688965(&(Global_1574656.f_1), 26);
	}
}

void func_658(int iParam0, int iParam1)
{
	if (!func_38(&(Global_1574656.f_22)))
	{
		func_2(&(Global_1574656.f_22), 0, 0);
	}
	else if (func_1(&(Global_1574656.f_22), iParam1, 0))
	{
		if (func_639() > 0)
		{
			func_661(iParam0);
			if (func_164("AMEV_LBD_HELP"))
			{
				unk_0xD289B55B6AADBA10(1);
			}
			func_37(&(Global_1574656.f_22));
		}
	}
	else
	{
		func_660(0);
		func_659();
	}
}

void func_659()
{
	Global_2540384.f_4595 = 0;
}

void func_660(int iParam0)
{
	Global_1377236.f_68 = iParam0;
}

void func_661(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2440049.f_2834[iVar0 /*80*/].f_1 == iParam0)
		{
			Global_2440049.f_2834[iVar0 /*80*/].f_2 = 5;
			func_98(&(Global_2440049.f_2834[iVar0 /*80*/].f_69), 1);
		}
		iVar0++;
	}
}

void func_662(int iParam0)
{
	if ((unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 11) || (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 10) && iParam0)) || (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 22) && iParam0))
	{
		if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 12))
		{
			unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 12);
			func_447(0);
		}
		if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 13))
		{
			unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 13);
			func_663();
		}
		if (unk_0xCE990E643CD9D0E5(Global_1574656.f_1, 14) && !func_107(unk_0x460153A63B9477BC(), 0))
		{
			unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 14);
			func_449(0);
		}
		unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 11);
		unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 10);
		unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 22);
	}
}

void func_663()
{
	unk_0xD2459066EA58CE43(&(Global_2540384.f_5026), 0);
}

bool func_664()
{
	return unk_0xCE990E643CD9D0E5(Global_2540384.f_5026, 0);
}

int func_665(int iParam0)
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
			return func_452(unk_0x460153A63B9477BC());
		
		case 133:
			return (func_445() || func_666(func_298()));
		
		default:
	}
	return 0;
}

int func_666(int iParam0)
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

int func_667()
{
	if (((((((((func_676() || func_675()) || func_674()) || func_295()) || (func_673() && !unk_0xFC559366953F62B3())) || (func_670() && !func_669())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_668() == 2 && !unk_0xFC559366953F62B3()))
	{
		return 1;
	}
	return 0;
}

int func_668()
{
	return Global_968397;
}

bool func_669()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787.f_2, 27);
}

int func_670()
{
	if (func_672() || func_671())
	{
		return Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_98 == 8;
	}
	return 0;
}

var func_671()
{
	return Global_2451787.f_733;
}

bool func_672()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787.f_2, 11);
}

bool func_673()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787, 5);
}

bool func_674()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787, 2);
}

bool func_675()
{
	return unk_0xCE990E643CD9D0E5(Global_2451787, 20);
}

bool func_676()
{
	return Global_2451787.f_696;
}

void func_677(int iParam0)
{
	int iVar0;
	
	iVar0 = func_228(2535, -1, 0);
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
	func_219(2535, iVar0, -1, 1, 0);
}

int func_678()
{
	int iVar0;
	
	if (!func_38(&(Global_1574656.f_15)))
	{
		func_2(&(Global_1574656.f_15), 0, 0);
		Global_1574656.f_17 = 0;
	}
	else if (func_1(&(Global_1574656.f_15), 1000, 0))
	{
		if (unk_0xBD09DF93F957A0CF(unk_0x628A51AC66E80772(Global_1574656.f_17)))
		{
			iVar0 = unk_0x9019589211A13B02(unk_0x628A51AC66E80772(Global_1574656.f_17));
			if (unk_0x166E920FB00B2DBB(iVar0))
			{
				if (func_13(iVar0, 1, 1) && func_679(iVar0, 6))
				{
					if (vdist(func_31(unk_0x460153A63B9477BC()), func_31(iVar0)) < 80f)
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
			func_37(&(Global_1574656.f_15));
		}
	}
	return 0;
}

int func_679(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_364() != 0)
	{
		return 0;
	}
	if (!func_223(iParam0))
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

void func_680()
{
	unk_0x53797676AD34A9AA(5);
	func_682();
	unk_0x34FEEAC2548C3789(1f);
	unk_0xD2459066EA58CE43(&(Global_1574656.f_1), 8);
	func_681();
}

void func_681()
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

void func_682()
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

int func_683()
{
	if (func_684())
	{
		return 1;
	}
	return 0;
}

bool func_684()
{
	return Global_1574656.f_24;
}

int func_685()
{
	var uVar0;
	
	func_689(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!unk_0x25DDB354A40FFCDB())
		{
			return 1;
		}
	}
	if (func_688())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_687())
	{
		return 1;
	}
	if (func_686(159))
	{
		if (!func_676())
		{
			return 1;
		}
	}
	if (func_686(157))
	{
		return 1;
	}
	if (!unk_0x0EB6C63A09FD9DF1())
	{
		return 1;
	}
	if (func_454() != 0)
	{
		if (unk_0x7B70881748D166CD(func_454()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_686(int iParam0)
{
	if (unk_0x16F1FCCC54559709(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_687()
{
	return Global_2462250;
}

bool func_688()
{
	return Global_2451787.f_691;
}

void func_689(var uParam0)
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
					func_690(iVar0);
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

void func_690(int iParam0)
{
	struct<3> Var0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (unk_0x477FAFFE21935947(1, iParam0, &Var0, 3))
	{
		if (func_13(Var0.f_1, 1, 1))
		{
			iVar1 = unk_0x1FA7B77001D60F9D(Var0.f_1);
			if (unk_0xAE06B9E39EBDE049(iVar1))
			{
				if (unk_0x47DBF174A0CB9D55(iVar1, 0))
				{
					iVar2 = unk_0xA5D5B1042E8F47BD(iVar1, 0);
					if (unk_0x292280AF1BBBD6AC(iVar2, Var0.f_2) && unk_0x82CC259B7B4F4AD9())
					{
						if (func_691(iVar2, &bVar3))
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

int func_691(int iParam0, var uParam1)
{
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		if (!unk_0x1758275D343D5BA3(iParam0))
		{
			if (unk_0x38CC98C4A0688263(iParam0))
			{
				if (!unk_0xCA6AF782C906AC86(unk_0x36FE6D3220816ADA(iParam0)))
				{
					unk_0x4F3C4F457D44BB0F(iParam0, 0, 1);
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

void func_692()
{
	wait(0);
}

void func_693()
{
	var uVar0[4];
	int iVar1;
	var uVar2;
	
	func_175();
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (unk_0xCE990E643CD9D0E5(iLocal_116, iVar1) && !unk_0x046706CBB367B768(iLocal_117[iVar1]))
		{
			unk_0xC5E5600D1CF5CEF9(iLocal_117[iVar1]);
			unk_0xADB6EEE689FE86DE(iLocal_117[iVar1]);
		}
		iVar1++;
	}
	func_440();
	func_496(0);
	func_697(132, 0, Local_121.f_8 == 6);
	func_460(22, 0);
	Global_2540384.f_5107 = -1;
	uVar0[0] = Local_121.f_3[0];
	uVar0[1] = Local_121.f_3[1];
	uVar0[2] = Local_121.f_3[2];
	uVar0[3] = Local_121.f_3[3];
	func_696(&(uVar0[0]));
	func_696(&(uVar0[1]));
	func_696(&(uVar0[2]));
	func_696(&(uVar0[3]));
	if (func_685())
	{
		Local_1487.f_5 = 5;
	}
	else if (unk_0xCE990E643CD9D0E5(Local_121.f_2, 2))
	{
		Local_1487.f_5 = 6;
	}
	else if (Local_1487.f_5 != 1)
	{
		Local_1487.f_5 = 2;
	}
	Local_1487 = Local_121.f_724;
	Local_1487.f_1 = Local_121.f_725;
	Local_1487.f_4 = Local_121.f_726;
	Local_1487.f_3 = Local_121.f_728;
	Local_1487.f_10 = (unk_0x5A002C4821A13338() - Local_1487.f_9);
	uVar2 = Local_121.f_712;
	if (Local_121.f_707)
	{
		uVar2 = Local_121.f_712 + 4;
	}
	if (!Global_262145.f_11507)
	{
		if (Local_1487.f_6 > 0)
		{
		}
	}
	Local_1487.f_6 = (Local_1487.f_6 + iLocal_95);
	if (unk_0x59E2AD1A8ACEDA31() != -1)
	{
		func_694(Local_1487, uVar2, Local_1488[unk_0x59E2AD1A8ACEDA31() /*5*/].f_4, uVar0[0], uVar0[1], uVar0[2], uVar0[3]);
	}
	func_489(1);
	unk_0xD39E529EBE5DB04F();
}

void func_694(struct<12> Param0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
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
		else if (unk_0xF005CCA4263DF67F(sVar0, func_695()))
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
			Var3.f_15 = uParam4;
			Var3.f_16 = uParam5;
			Var3.f_17 = uParam6;
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
			Var8.f_15 = uParam4;
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

char* func_695()
{
	switch (Global_2464595)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_696(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (unk_0xCE990E643CD9D0E5(*iParam0, iVar0))
		{
			unk_0xD2459066EA58CE43(iParam0, iVar0);
		}
		else
		{
			unk_0xBE20AB8238688965(iParam0, iVar0);
		}
		iVar0++;
	}
}

void func_697(int iParam0, bool bParam1, bool bParam2)
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
	func_727();
	unk_0x0C0DE28672975DC3("DisableFlightMusic", 0);
	unk_0x0C0DE28672975DC3("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_726(func_299(unk_0x460153A63B9477BC()));
		func_460(func_461(iParam0), 0);
	}
	else
	{
		if ((bParam2 && unk_0x460153A63B9477BC() != -1) && func_725(unk_0x460153A63B9477BC()) >= 12)
		{
			func_724(2547, -1);
			iVar1 = func_228(2547, -1, 0);
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
		func_723();
		func_722();
		func_721();
		if ((!func_103(unk_0x460153A63B9477BC()) && !func_172(unk_0x460153A63B9477BC())) && !func_468())
		{
			func_705();
		}
		func_704();
		if (!unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 0) && !unk_0xCE990E643CD9D0E5(Global_1676119.f_3, 1))
		{
			func_680();
		}
		func_703();
		unk_0xD2459066EA58CE43(&(Global_2540384.f_1807), 2);
		func_174();
		func_159();
	}
	if (unk_0x9257D9337B908AFC(1344549371))
	{
		unk_0x9182C03E20E1D981(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if (((unk_0x460153A63B9477BC() != -1 && !func_350(unk_0x460153A63B9477BC(), 21)) && !func_350(unk_0x460153A63B9477BC(), 25)) && !func_107(unk_0x460153A63B9477BC(), 0))
		{
			func_449(0);
			func_447(0);
			if (!bParam1)
			{
				func_702();
			}
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_42(26, -1))
		{
			Global_2464425 = -1;
			func_39(26, -1);
		}
	}
	if (!func_698())
	{
		Global_2515064 = 1;
	}
}

int func_698()
{
	if ((((((!func_619(unk_0x460153A63B9477BC()) && !func_600(unk_0x460153A63B9477BC())) && func_299(unk_0x460153A63B9477BC()) != 146) && !func_701()) && !func_700()) && !func_699(Global_4456448.f_129348)) && !func_85())
	{
		return 0;
	}
	return 1;
}

bool func_699(int iParam0)
{
	return iParam0 == 57;
}

int func_700()
{
	if (Global_4456448.f_82708 == Global_262145.f_9598)
	{
		return 1;
	}
	return 0;
}

int func_701()
{
	if ((Global_4456448 == 0 && unk_0xFC559366953F62B3()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_129348 > 0) || unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 15)) || unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 18)) || unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 19)) || unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 29)) || unk_0xCE990E643CD9D0E5(Global_4456448.f_4, 28)) || unk_0xCE990E643CD9D0E5(Global_4456448.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_702()
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

void func_703()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574656 = { Var0 };
}

void func_704()
{
	var uVar0;
	
	Global_1319161 = uVar0;
}

void func_705()
{
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_24), &Global_2409333, 2);
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_26), &Global_2409335, 19);
	func_719();
	func_708(1, 1, 0);
	func_706();
}

void func_706()
{
	func_707(0, 0);
}

void func_707(int iParam0, int iParam1)
{
	Global_2405074.f_22 = iParam0;
	Global_2405074.f_23 = iParam1;
}

void func_708(bool bParam0, bool bParam1, bool bParam2)
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
		func_718();
	}
	if (!bParam2)
	{
		func_710(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
	}
	func_709(0);
	func_162();
}

void func_709(bool bParam0)
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

void func_710(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)
{
	if (bParam0)
	{
		if (func_717())
		{
			func_716();
		}
		Global_2405074.f_708.f_518 = unk_0x354AD085195C5FA6();
		Global_2405074.f_708.f_504 = iParam1;
		Global_2405074.f_708.f_505 = iParam2;
		Global_2405074.f_708.f_506 = iParam10;
		func_714();
		func_464(8, 0, 0, 0, 0);
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
		func_711();
	}
}

void func_711()
{
	if (func_717() && !func_713())
	{
		func_716();
	}
	if (func_713())
	{
		func_712();
	}
	else
	{
		func_714();
		func_464(0, 0, 0, 0, 0);
		Global_2405074.f_1747 = 0;
		Global_2405074.f_1746 = 0;
	}
}

void func_712()
{
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_708), &(Global_2405074.f_1227), 519);
	Global_2405074.f_487 = { Global_2405074.f_493 };
	if (unk_0x354AD085195C5FA6() == Global_2405074.f_708.f_518)
	{
		Global_2405074.f_1746 = 0;
	}
}

int func_713()
{
	if ((Global_2405074.f_1746 && !unk_0x354AD085195C5FA6() == Global_2405074.f_1227.f_518) && unk_0x7FD2BDF03806FD9D(Global_2405074.f_1227.f_518))
	{
		return 1;
	}
	return 0;
}

void func_714()
{
	if (func_717() && !func_713())
	{
		func_716();
	}
	func_715();
	Global_2405074.f_708 = 0;
}

void func_715()
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

void func_716()
{
	if (func_713())
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

int func_717()
{
	if ((Global_2405074.f_1747 && !unk_0x354AD085195C5FA6() == Global_2405074.f_708.f_518) && unk_0x7FD2BDF03806FD9D(Global_2405074.f_708.f_518))
	{
		return 1;
	}
	return 0;
}

void func_718()
{
	unk_0x13AF25746D6C3CA9(&(Global_2405074.f_365), &Global_2409674, 121);
}

void func_719()
{
	func_720();
}

void func_720()
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

void func_721()
{
	Global_2540384.f_5026 = 0;
}

void func_722()
{
	if (unk_0x460153A63B9477BC() != -1)
	{
		Global_1630317[unk_0x460153A63B9477BC() /*595*/].f_1 = 0;
	}
}

void func_723()
{
	int iVar0;
	
	iVar0 = unk_0x460153A63B9477BC();
	if (iVar0 != -1)
	{
		Global_1630317[iVar0 /*595*/] = -1;
	}
}

void func_724(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_228(iParam0, func_224(iParam1), 0);
	iVar0++;
	if (!func_227(iParam0))
	{
		func_219(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_220(iParam0, iVar0, iParam1, 1);
	}
}

int func_725(int iParam0)
{
	return Global_1590682[iParam0 /*883*/].f_211.f_6;
}

int func_726(int iParam0)
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
			if (func_452(unk_0x460153A63B9477BC()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_727()
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
	func_730(0);
	func_729(0);
	func_728(0);
}

void func_728(int iParam0)
{
	if (Global_2540384.f_4583 != iParam0)
	{
		Global_2540384.f_4583 = iParam0;
	}
}

void func_729(bool bParam0)
{
	if (Global_2540384.f_4582 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2540384.f_4582 = bParam0;
	}
}

void func_730(int iParam0)
{
	if (Global_2540384.f_4580 != iParam0)
	{
		Global_2540384.f_4580 = iParam0;
	}
}

int func_731(struct<21> Param0)
{
	func_739(func_740(Param0), Param0);
	unk_0xDF803FB4BC52CAF6(0);
	unk_0x628BF6B677C62F7E(func_738(8));
	func_735(0, -1, 0);
	func_733(132);
	unk_0x97D2F2E2C92FD519(&Local_121, 750);
	unk_0xBB96A3ECD45D0317(&Local_1488, 161);
	unk_0x3A396632EB359434(0);
	if (!func_732())
	{
		func_693();
	}
	if (unk_0xAFF96FDC3971E7EA())
	{
		unk_0xF73A2DAF57FFFE87(&(Local_121.f_724), &(Local_121.f_725));
	}
	Local_1487.f_2 = unk_0xDD3720600B3FC529();
	Local_1487.f_9 = unk_0x5A002C4821A13338();
	Local_1487.f_8 = unk_0x5A002C4821A13338();
	func_460(22, 1);
	return 1;
}

int func_732()
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
		if (func_688())
		{
			return 0;
		}
		if (func_686(157))
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

void func_733(int iParam0)
{
	func_703();
	func_734();
	func_721();
	Global_1574656.f_4 = iParam0;
	Global_1574656.f_5 = iParam0;
	func_459(iParam0, -1);
	func_20(&(Global_1574656.f_18), 0, 0);
	Global_2540384.f_4652 = 0;
	Global_2463318[0] = func_97();
	Global_2463318[1] = func_97();
	Global_2463318[2] = func_97();
	Global_2463318[3] = func_97();
	Global_2463318[4] = func_97();
	func_159();
	if (!func_509(func_190()))
	{
		func_189();
	}
	if (func_339() && !func_351())
	{
		unk_0xBE20AB8238688965(&(Global_1574656.f_1), 16);
	}
	else
	{
		unk_0xBE20AB8238688965(&(Global_1574656.f_1), 17);
	}
}

void func_734()
{
	var uVar0;
	
	Global_1574681 = uVar0;
}

int func_735(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = unk_0x361B374A50D875B4();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_737();
			}
			else
			{
				return 0;
			}
		}
		if (!func_736())
		{
			if (iParam0 == 0)
			{
				if (!unk_0x25DDB354A40FFCDB())
				{
					if (!bParam2)
					{
						func_737();
					}
					else
					{
						return 0;
					}
				}
				if (func_688())
				{
					if (!bParam2)
					{
						func_737();
					}
					else
					{
						return 0;
					}
				}
				if (func_686(157))
				{
					if (!bParam2)
					{
						func_737();
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
					func_737();
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
				func_737();
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
			func_737();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_736()
{
	return Global_1312872;
}

void func_737()
{
	unk_0xD39E529EBE5DB04F();
}

int func_738(int iParam0)
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
		
		case 20:
			return 0;
		
		default:
	}
	return 0;
}

void func_739(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		func_737();
	}
	unk_0xA88557896B79E30D(iParam0, 0, Param1.f_16);
}

int func_740(int iParam0)
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

