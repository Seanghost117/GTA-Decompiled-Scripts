#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	struct<3> Local_52 = { 0, 0, 0 } ;
	float fLocal_55 = 0f;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	struct<3> Local_70 = { 0, 0, 0 } ;
	int iLocal_73 = 0;
	bool bLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	bool bLocal_77 = 0;
	bool bLocal_78 = 0;
	var uLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	bool bLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87[2] = { 0, 0 };
	int iLocal_90[2] = { 0, 0 };
	int iLocal_93[2] = { 0, 0 };
	int iLocal_96[2] = { 0, 0 };
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	struct<3> Local_110 = { 0, 0, 0 } ;
	struct<3> Local_113 = { 0, 0, 0 } ;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125[2] = { 0, 0 };
	int iLocal_128[2] = { 0, 0 };
	var uLocal_131[2] = { 0, 0 };
	int iLocal_134[4] = { 0, 0, 0, 0 };
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144[2] = { 0, 0 };
	int iLocal_147[2] = { 0, 0 };
	int iLocal_150[4] = { 0, 0, 0, 0 };
	int iLocal_155 = 0;
	int iLocal_156[2] = { 0, 0 };
	int iLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	struct<3> Local_165 = { 0, 0, 0 } ;
	struct<3> Local_168 = { 0, 0, 0 } ;
	struct<3> Local_171 = { 0, 0, 0 } ;
	char* sLocal_174 = NULL;
	char* sLocal_175 = NULL;
	var uLocal_176 = 16;
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
	var uLocal_343 = -1;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 1000;
	var uLocal_351 = 1000;
	var uLocal_352 = 0;
	struct<3> Local_353 = { 0, 0, 0 } ;
	struct<3> Local_356 = { 0, 0, 0 } ;
	float fLocal_359 = 0f;
	var uLocal_360 = 0;
	int iLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	var uLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	struct<6> Local_378 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	char* sLocal_386 = NULL;
	char[] cLocal_387[8] = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	struct<19> Local_392 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	struct<7> Local_416[2];
	int iLocal_431[2] = { 0, 0 };
	int iLocal_434[2] = { 0, 0 };
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	struct<18> ScriptParam_0 = { 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5 } ;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iLocal_3 = 3;
	iLocal_4 = 1;
	iLocal_5 = 134;
	iLocal_6 = 134;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 134;
	iLocal_11 = 1;
	iLocal_12 = 12;
	iLocal_13 = 12;
	fLocal_16 = 0.001f;
	iLocal_19 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	Local_56 = { -1511.194f, 436.5252f, 109.7818f };
	Local_59 = { 968.0051f, -127.6078f, 73.3543f };
	Local_65 = { -1034.6f, 4918.6f, 205.9f };
	Local_70 = { 0.5f, 0.1f, 0.56f };
	sLocal_175 = "chassis";
	Local_353 = { 0f, -5f, 0f };
	Local_356 = { 1f, -1f, 0f };
	iLocal_369 = joaat("gburrito");
	iLocal_370 = joaat("daemon");
	iLocal_371 = joaat("g_m_y_lost_01");
	iLocal_372 = joaat("g_m_y_lost_02");
	iLocal_373 = joaat("u_f_y_bikerchic");
	StringCopy(&Local_378, "", 24);
	iLocal_384 = -1;
	sLocal_386 = "RANDOM@KIDNAP_GIRL";
	cLocal_387 = "RESNAAU";
	iLocal_438 = -1;
	Local_52 = { ScriptParam_0.f_1[0 /*3*/] };
	fLocal_55 = ScriptParam_0.f_17[0];
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_140))
		{
			if (PED::IS_PED_GROUP_MEMBER(iLocal_140, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_140);
				TASK::TASK_WANDER_STANDARD(iLocal_140, 40000f, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_140, 17, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_140, 2, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_140, false);
				PED::SET_PED_KEEP_TASK(iLocal_140, true);
			}
			else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_140, sLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 3))
			{
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_140, true);
				TASK::TASK_SMART_FLEE_COORD(iLocal_140, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 150f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_140, true);
			}
		}
		func_255();
	}
	if (func_214(Local_52, -1, 0, 0, 0))
	{
		func_211(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", false);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", false);
	func_210();
	bLocal_83 = false;
	while (true)
	{
		SYSTEM::WAIT(0);
		if (!iLocal_105)
		{
			func_209(1);
			iLocal_105 = 1;
		}
		if (!func_208())
		{
			if (func_207())
			{
				func_255();
			}
		}
		RECORDING::_0x208784099002BC30("RE_SN", 0);
		func_206();
		func_205();
		func_203();
		if (!func_208())
		{
			if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
			{
				switch (iLocal_48)
				{
					case 0:
						if (func_189())
						{
							PLAYER::SET_MAX_WANTED_LEVEL(0);
							iLocal_48 = 1;
						}
						else if (func_177())
						{
							func_255();
						}
						break;
					
					case 1:
						func_176();
						VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
						if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(iLocal_141)) && !PED::IS_PED_INJURED(iLocal_140))
						{
							if (!HUD::DOES_BLIP_EXIST(iLocal_123))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_140, false) - Vector(7f, 0f, 0f), 142f, 83.75f, 35.25f, false, true, 0))
								{
									if (HUD::DOES_BLIP_EXIST(iLocal_120))
									{
										HUD::REMOVE_BLIP(&iLocal_120);
									}
									if (!HUD::DOES_BLIP_EXIST(iLocal_123))
									{
										HUD::FLASH_MINIMAP_DISPLAY();
										iLocal_123 = func_175(iLocal_142, 1, 0);
									}
								}
							}
							if (iLocal_439 == 0)
							{
								if ((!ENTITY::IS_ENTITY_OCCLUDED(iLocal_155) || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_141)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_140, 40f, 40f, 20f, false, true, 0))
								{
									SYSTEM::SETTIMERB(0);
									iLocal_439 = 1;
								}
							}
							if (iLocal_439 == 3)
							{
								PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
								VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_155, true);
								func_166(0);
							}
							else if (!iLocal_101)
							{
								if (func_165() == 2)
								{
									if ((SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_52) < 40f && ENTITY::DOES_ENTITY_EXIST(iLocal_155)) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_155))
									{
										if (func_164(&uLocal_176, cLocal_387, "RESNA_LOST", 8, 0, 0, 0))
										{
											iLocal_101 = 1;
										}
									}
								}
							}
						}
						else
						{
							func_163();
							func_156();
						}
						break;
				}
			}
			else
			{
				func_255();
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_140))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_140, 150f, 150f, 50f, false, true, 0) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_155)))
			{
				switch (iLocal_50)
				{
					case 0:
						RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false) && !PED::IS_PED_INJURED(iLocal_142))
						{
							if (PED::IS_PED_IN_VEHICLE(iLocal_142, iLocal_155, false))
							{
								if (ENTITY::IS_ENTITY_ATTACHED(iLocal_140) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_142, 242628503) == 7)
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::OPEN_SEQUENCE_TASK(&iLocal_159);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, Local_62, 50f, 0, 0, 786469, 7f, 15f);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, -859.6284f, 382.7891f, 86.4466f, 50f, 0, 0, 786469, 7f, 15f);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, -703.2946f, 287.229f, 82.6848f, 50f, 0, 0, 786469, 7f, 15f);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, -496.6651f, 246.5268f, 82.0747f, 50f, 0, 0, 786469, 7f, 15f);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, -166.6776f, 250.8786f, 92.4768f, 50f, 0, 0, 786469, 7f, 15f);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, 74.5106f, 236.4861f, 108.1344f, 50f, 0, 0, 786469, 7f, 15f);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, 278.7988f, 161.9029f, 103.446f, 50f, 0, 0, 786469, 7f, 15f);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, 425.6758f, 108.9366f, 99.4329f, 50f, 0, 0, 786469, 7f, 15f);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, 729.2792f, -19.616f, 81.9823f, 50f, 0, 0, 786469, 7f, 15f);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_155, Local_59, 50f, 0, 0, 786469, 7f, 15f);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_159);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_142, iLocal_159);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_159);
									iLocal_50 = 1;
								}
							}
						}
						else
						{
							func_154();
							iLocal_50 = 1;
						}
						break;
					
					case 1:
						RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
						func_153();
						func_124();
						func_123(iLocal_123, iLocal_141, 150f, 1061158912, 0);
						if (((((func_122() || func_121()) || func_119()) || func_118()) || func_117()) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), true))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_140);
							if (HUD::DOES_BLIP_EXIST(iLocal_123))
							{
								if (HUD::GET_BLIP_COLOUR(iLocal_123) != 1)
								{
									HUD::SET_BLIP_AS_FRIENDLY(iLocal_123, false);
									HUD::SET_BLIP_COLOUR(iLocal_123, 1);
								}
							}
							func_154();
							func_115(&uLocal_341, 0, 0);
							iLocal_50 = 2;
						}
						else if (iLocal_366 || iLocal_81)
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_123))
							{
								if (HUD::GET_BLIP_COLOUR(iLocal_123) != 1)
								{
									HUD::SET_BLIP_AS_FRIENDLY(iLocal_123, false);
									HUD::SET_BLIP_COLOUR(iLocal_123, 1);
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_155, 25f, 25f, 5f, false, true, 0) && ENTITY::GET_ENTITY_SPEED(iLocal_155) > 10f)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_109 + 5000)
								{
									iLocal_81 = 1;
								}
							}
							else
							{
								iLocal_109 = MISC::GET_GAME_TIMER();
							}
						}
						break;
					
					case 2:
						RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
						if (!bLocal_83)
						{
							bLocal_83 = true;
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_155) && ENTITY::DOES_ENTITY_EXIST(iLocal_140))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_140, iLocal_155))
							{
								if (ENTITY::IS_ENTITY_DEAD(iLocal_155, false))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_140, false);
									ENTITY::DETACH_ENTITY(iLocal_140, true, false);
								}
							}
						}
						if (bLocal_74)
						{
							if (iLocal_76)
							{
								func_114();
							}
							else
							{
								func_113();
							}
						}
						else
						{
							bLocal_77 = true;
						}
						func_163();
						func_110();
						if (bLocal_77)
						{
							if (bLocal_78)
							{
								func_110();
								iLocal_50 = 3;
								ENTITY::SET_ENTITY_INVINCIBLE(iLocal_140, false);
							}
						}
						break;
					
					case 3:
						if (!HUD::DOES_BLIP_EXIST(iLocal_122))
						{
							iLocal_122 = func_175(iLocal_140, 0, 0);
						}
						switch (iLocal_385)
						{
							case 0:
								if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
								{
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_163))
									{
										iLocal_163 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_163, true, true);
									}
								}
								if (func_109(1, 0, 1) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_140, 2.5f, 2.5f, 2.5f, false, true, 1))
								{
									MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 0);
									PED::SET_PED_CONFIG_FLAG(iLocal_140, 118, false);
									func_108();
									func_100(1, 1, 1, 0, 0, 0, 0);
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
									HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
									Local_392 = { -1.2232f, -4.3354f, 1.3385f };
									if (!ENTITY::IS_ENTITY_DEAD(iLocal_155, false))
									{
										ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_155, -8f, true);
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, false);
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_155, 1);
										Local_392.f_3 = { -22.8598f, 0f, (ENTITY::GET_ENTITY_HEADING(iLocal_155) - 60f) };
									}
									Local_392.f_6 = { -1.4334f, -4.6656f, 1.3733f };
									Local_392.f_9 = { -22.8598f, 0f, -106.3162f };
									Local_392.f_12 = 55f;
									Local_392.f_13 = 3000;
									Local_392.f_18 = 0;
									func_96(&Local_392, iLocal_155, 1);
									ENTITY::SET_ENTITY_COORDS(iLocal_140, ENTITY::GET_ENTITY_COORDS(iLocal_155, false), true, false, false, true);
									Local_110 = { 0f, 0f, 0f };
									Local_113 = { 0f, 0f, 0f };
									iLocal_108 = PED::CREATE_SYNCHRONIZED_SCENE(Local_110, Local_113, 2);
									if (ENTITY::IS_ENTITY_ATTACHED(iLocal_140))
									{
										ENTITY::DETACH_ENTITY(iLocal_140, true, false);
									}
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_108, iLocal_155, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_155, sLocal_175));
									PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_108, Local_110, Local_113, 2);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_140, iLocal_108, sLocal_386, "IG_1_ALT1_EXIT_VAN", 1000f, -4f, 5, 0, 1000f, 0);
									PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_108, false);
									PED::SET_PED_KEEP_TASK(iLocal_140, true);
									iLocal_412 = CAM::CREATE_CAMERA(964613260, true);
									CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_412, iLocal_108, "IG_1_ALT1_EXIT_VAN_CAM", sLocal_386);
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, true);
									VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_155, 2, false, false);
									VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_155, 3, false, false);
									Local_110 = { ENTITY::GET_ENTITY_COORDS(iLocal_155, false) };
									Local_113.f_2 = ENTITY::GET_ENTITY_HEADING(iLocal_155);
									Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, 0f, -4.7f, 0f) };
									MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), false, false);
									ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEADING(iLocal_155));
									ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
									if (func_92(iLocal_163))
									{
										func_91();
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
									{
										if (ENTITY::IS_ENTITY_DEAD(iLocal_141, false) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_141, false), ENTITY::GET_ENTITY_COORDS(iLocal_140, false)) < 3f)
										{
											PED::DELETE_PED(&iLocal_141);
										}
										if (ENTITY::IS_ENTITY_DEAD(iLocal_143, false) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_143, false), ENTITY::GET_ENTITY_COORDS(iLocal_143, false)) < 3f)
										{
											PED::DELETE_PED(&iLocal_143);
										}
									}
									WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
									CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_369);
									HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
									iLocal_385++;
								}
								break;
							
							case 1:
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
								{
									iLocal_385++;
								}
								break;
							
							case 2:
								if (func_165() == 0)
								{
									sVar3 = "RESNA_THX";
								}
								else if (func_165() == 1)
								{
									sVar3 = "RESNA_THX1";
								}
								else
								{
									sVar3 = "RESNA_THX2";
								}
								if (!func_90())
								{
									if (func_164(&uLocal_176, cLocal_387, sVar3, 8, 0, 0, 0))
									{
										iLocal_385++;
									}
								}
								break;
							
							case 3:
								if (!func_90())
								{
									if (func_164(&uLocal_176, cLocal_387, "RESNA_THX3", 8, 0, 0, 0))
									{
										iLocal_385++;
									}
								}
								break;
							
							case 4:
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_108))
								{
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_108) > 0.3746479f && !iLocal_116)
									{
										if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
										{
											GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
											AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
											iLocal_116 = 1;
										}
									}
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_108) > 0.4f)
									{
										iLocal_385++;
									}
								}
								break;
							
							case 5:
								TASK::CLEAR_PED_TASKS(iLocal_140);
								ENTITY::SET_ENTITY_INVINCIBLE(iLocal_140, false);
								PED::SET_PED_CONFIG_FLAG(iLocal_140, 118, true);
								Local_171 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_386, "IG_1_ALT1_EXIT_VAN", Local_110, Local_113, 1f, 2) };
								MISC::GET_GROUND_Z_FOR_3D_COORD(Local_171, &(Local_171.f_2), false, false);
								ENTITY::SET_ENTITY_COORDS(iLocal_140, Local_171, true, false, false, true);
								Local_171 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_386, "IG_1_ALT1_EXIT_VAN", Local_110, Local_113, 1f, 2) };
								ENTITY::SET_ENTITY_HEADING(iLocal_140, Local_171.f_2);
								if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_108))
								{
									PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_108, 1f);
								}
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_140, false, false);
								WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false))
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, false);
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_155, sLocal_386, "IG_1_ALT1_EXIT_VAN", 3))
									{
										ENTITY::STOP_ENTITY_ANIM(iLocal_155, "IG_1_ALT1_EXIT_VAN", sLocal_386, -8f);
									}
								}
								CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
								if (CAM::DOES_CAM_EXIST(iLocal_412))
								{
									CAM::DESTROY_CAM(iLocal_412, false);
								}
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
								func_100(0, 1, 1, 0, 0, 0, 0);
								PED::SET_PED_CAN_RAGDOLL(iLocal_140, true);
								func_88(Local_56);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false))
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_155, 1);
								}
								iLocal_50 = 4;
								break;
						}
						if (iLocal_385 > 0 && iLocal_385 < 5)
						{
							HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
							if ((func_86(1000) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_108)) || (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_108) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_108) > 0.4f))
							{
								iLocal_385 = 5;
							}
						}
						if (!HUD::DOES_BLIP_EXIST(iLocal_122))
						{
							iLocal_122 = func_175(iLocal_140, 0, 0);
						}
						break;
					
					case 4:
						if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
						{
							PLAYER::SET_MAX_WANTED_LEVEL(5);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_142))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_142, false)) > 10000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_142))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_142);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_143, false)) > 10000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_143))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_143);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_141, false)) > 10000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_141))
							{
								ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_141);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_155, false)) > 10000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_155))
							{
								ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_155);
							}
						}
						func_63();
						if (HUD::DOES_BLIP_EXIST(iLocal_122))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_140, 10f, 10f, 10f, false, true, 0))
							{
								if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_140, 474215631) != 7)
									{
										TASK::CLEAR_PED_TASKS(iLocal_140);
									}
									TASK::TASK_CLEAR_LOOK_AT(iLocal_140);
									PED::SET_PED_AS_GROUP_MEMBER(iLocal_140, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_140, 0);
									HUD::REMOVE_BLIP(&iLocal_122);
									if (HUD::DOES_BLIP_EXIST(iLocal_120))
									{
										HUD::REMOVE_BLIP(&iLocal_120);
									}
									func_58();
									iLocal_120 = func_57(Local_56, 1);
								}
							}
						}
						else if (HUD::DOES_BLIP_EXIST(iLocal_120))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_56, Global_19, true, true, 0))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, false))
								{
									if ((VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) && ENTITY::IS_ENTITY_UPRIGHT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 90f))
									{
										iLocal_50 = 6;
										func_56();
										HUD::REMOVE_BLIP(&iLocal_120);
									}
								}
								else
								{
									iLocal_50 = 6;
									func_56();
									HUD::REMOVE_BLIP(&iLocal_120);
								}
							}
							else
							{
								if (!PED::IS_PED_GROUP_MEMBER(iLocal_140, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
								{
									func_56();
									HUD::REMOVE_BLIP(&iLocal_120);
									if (!HUD::DOES_BLIP_EXIST(iLocal_122))
									{
										iLocal_122 = func_54(iLocal_140, 0, 145);
									}
								}
								if (!iLocal_73 && !iLocal_75)
								{
									func_51();
									iLocal_69 = MISC::GET_GAME_TIMER();
								}
								else if (!iLocal_75)
								{
									if ((MISC::GET_GAME_TIMER() - iLocal_69) > 5000)
									{
										iLocal_69 = (MISC::GET_GAME_TIMER() - 5000);
									}
									func_48();
									iVar4 = 0;
									while (iVar4 < iLocal_156)
									{
										if (((func_47(iLocal_144[iVar4]) || func_47(iLocal_147[iVar4])) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_56) < 400f) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_65) < 400f)
										{
											if (HUD::DOES_BLIP_EXIST(iLocal_120))
											{
												HUD::REMOVE_BLIP(&iLocal_120);
											}
											func_56();
											iLocal_391 = iLocal_390;
											if (iLocal_391 < 6)
											{
												if (iLocal_388 > 0)
												{
													iLocal_391++;
												}
											}
											func_45();
											iLocal_75 = 0;
											if (!PED::IS_PED_INJURED(iLocal_144[iVar4]))
											{
												PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_144[iVar4], 3);
											}
											if (!PED::IS_PED_INJURED(iLocal_147[iVar4]))
											{
												PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_147[iVar4], 3);
											}
											iLocal_50 = 5;
										}
										iVar4++;
									}
								}
							}
						}
						func_163();
						if (func_44())
						{
							PED::DELETE_PED(&iLocal_140);
							func_13();
						}
						break;
					
					case 5:
						if (PLAYER::GET_MAX_WANTED_LEVEL() != 0)
						{
							PLAYER::SET_MAX_WANTED_LEVEL(0);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						}
						func_163();
						func_12();
						func_48();
						if (!iLocal_367)
						{
							if (func_11())
							{
								if (func_164(&uLocal_176, cLocal_387, "RESNA_MOR", 4, func_205(), 0, 0))
								{
									iLocal_367 = 1;
									iLocal_119 = MISC::GET_GAME_TIMER();
								}
							}
							else
							{
								iLocal_367 = 1;
							}
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_119) > 2000 && !func_90())
						{
							if (!iLocal_99)
							{
								if (func_11() && func_10() < 30f)
								{
									if (!PED::IS_PED_INJURED(iLocal_140) && !PED::IS_PED_INJURED(iLocal_144[0]))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, false))
										{
											TASK::TASK_DRIVE_BY(iLocal_140, iLocal_144[0], 0, 0f, 0f, 0f, 50f, 90, false, 1566631136);
										}
										iLocal_99 = 1;
									}
								}
							}
							else if (!iLocal_100)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, false))
								{
									if (PED::IS_PED_DOING_DRIVEBY(iLocal_140))
									{
										if (func_164(&uLocal_176, cLocal_387, "RESNA_FINGER", 8, 0, 0, 0))
										{
											iLocal_100 = 1;
										}
									}
								}
							}
						}
						iVar5 = 0;
						while (iVar5 < iLocal_156)
						{
							iVar6 = 0;
							if ((ENTITY::DOES_ENTITY_EXIST(iLocal_144[iVar5]) && !PED::IS_PED_INJURED(iLocal_144[iVar5])) && !ENTITY::IS_ENTITY_DEAD(iLocal_144[iVar5], false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[iVar5], false) && PED::IS_PED_IN_VEHICLE(iLocal_144[iVar5], iLocal_156[iVar5], false))
								{
									if (HUD::DOES_BLIP_EXIST(iLocal_125[iVar5]))
									{
										HUD::REMOVE_BLIP(&(iLocal_125[iVar5]));
									}
									iVar6 = 1;
								}
								if (!HUD::DOES_BLIP_EXIST(iLocal_125[iVar5]) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_144[iVar5], false))
								{
									iLocal_125[iVar5] = func_54(iLocal_144[iVar5], 1, 145);
								}
							}
							else if (HUD::DOES_BLIP_EXIST(iLocal_125[iVar5]))
							{
								HUD::REMOVE_BLIP(&(iLocal_125[iVar5]));
							}
							if ((ENTITY::DOES_ENTITY_EXIST(iLocal_147[iVar5]) && !PED::IS_PED_INJURED(iLocal_147[iVar5])) && !ENTITY::IS_ENTITY_DEAD(iLocal_147[iVar5], false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[iVar5], false) && PED::IS_PED_IN_VEHICLE(iLocal_147[iVar5], iLocal_156[iVar5], false))
								{
									if (HUD::DOES_BLIP_EXIST(iLocal_128[iVar5]))
									{
										HUD::REMOVE_BLIP(&(iLocal_128[iVar5]));
									}
									iVar6 = 1;
								}
								if (!HUD::DOES_BLIP_EXIST(iLocal_128[iVar5]) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_147[iVar5], false))
								{
									iLocal_128[iVar5] = func_54(iLocal_147[iVar5], 1, 145);
								}
							}
							else if (HUD::DOES_BLIP_EXIST(iLocal_128[iVar5]))
							{
								HUD::REMOVE_BLIP(&(iLocal_128[iVar5]));
							}
							func_7(iVar5, (iVar6 && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[iVar5], false)));
							iVar5++;
						}
						if (func_6())
						{
							iLocal_85 = 0;
							while (iLocal_85 < 2)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[iLocal_85], false))
								{
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_156[iLocal_85]));
								}
								if (!PED::IS_PED_INJURED(iLocal_144[iLocal_85]))
								{
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_144[iLocal_85]));
								}
								if (!PED::IS_PED_INJURED(iLocal_147[iLocal_85]))
								{
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_147[iLocal_85]));
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_125[iLocal_85]))
								{
									HUD::REMOVE_BLIP(&(iLocal_125[iLocal_85]));
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_128[iLocal_85]))
								{
									HUD::REMOVE_BLIP(&(iLocal_128[iLocal_85]));
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_131[iLocal_85]))
								{
									HUD::REMOVE_BLIP(&(uLocal_131[iLocal_85]));
								}
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_370);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_371);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_372);
								iLocal_85++;
							}
							func_58();
							iLocal_120 = func_57(Local_56, 1);
							func_5(-1);
							iLocal_75 = 1;
							TASK::CLEAR_PED_TASKS(iLocal_140);
							if (!PED::IS_PED_GROUP_MEMBER(iLocal_140, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
							{
								PED::SET_PED_AS_GROUP_MEMBER(iLocal_140, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
							}
							iLocal_50 = 4;
						}
						break;
					
					case 6:
						if (func_2())
						{
							func_13();
						}
						break;
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_120))
				{
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_120, bLocal_83);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_121))
				{
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_121, bLocal_83);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_122))
				{
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_122, bLocal_83);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_123))
				{
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_123, bLocal_83);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_124))
				{
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_124, bLocal_83);
				}
			}
			else
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false))
				{
					VEHICLE::DELETE_VEHICLE(&iLocal_155);
				}
				func_255();
			}
		}
		else
		{
			func_1();
			func_255();
		}
	}
}

void func_1()
{
	func_154();
	SYSTEM::WAIT(0);
}

int func_2()
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		switch (iLocal_437)
		{
			case 0:
				func_100(1, 1, 0, 0, 0, 0, 0);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					while (!func_3(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1093140480, 1, 1056964608, 0, 1, 0))
					{
						SYSTEM::WAIT(0);
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_140))
				{
					if (PED::IS_PED_IN_GROUP(iLocal_140))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_140);
					}
				}
				func_45();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 1280);
				while (!func_164(&uLocal_176, cLocal_387, "RESNA_ARRV", 4, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, false))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), 0);
				}
				TASK::TASK_LOOK_AT_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), 30000, 2052, 2);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_140, 30000, 2052, 2);
				iLocal_437++;
				break;
			
			case 1:
				if (!func_90())
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, false))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					}
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -3069.737f, 455.0024f, 8.6478f, 1f, 30000, 0.25f, false, 40000f);
					TASK::TASK_ACHIEVE_HEADING(0, 73.0132f, 0);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, true);
					TASK::CLOSE_SEQUENCE_TASK(iVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_140, iVar0);
					TASK::CLEAR_SEQUENCE_TASK(&iVar0);
					iLocal_437++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_140))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, false))
					{
						SYSTEM::SETTIMERA(0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						func_100(0, 1, 0, 0, 0, 0, 0);
						iLocal_437++;
					}
				}
				break;
			
			case 3:
				if (SYSTEM::TIMERA() > 1000)
				{
					return 1;
				}
				break;
			}
	}
	return 0;
}

int func_3(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, true);
	PAD::DISABLE_CONTROL_ACTION(0, 72, true);
	PAD::DISABLE_CONTROL_ACTION(0, 76, true);
	PAD::DISABLE_CONTROL_ACTION(0, 73, true);
	PAD::DISABLE_CONTROL_ACTION(0, 59, true);
	PAD::DISABLE_CONTROL_ACTION(0, 60, true);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, true);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, true);
		PAD::DISABLE_CONTROL_ACTION(0, 70, true);
		PAD::DISABLE_CONTROL_ACTION(0, 68, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 74, true);
	PAD::DISABLE_CONTROL_ACTION(0, 86, true);
	PAD::DISABLE_CONTROL_ACTION(0, 81, true);
	PAD::DISABLE_CONTROL_ACTION(0, 82, true);
	PAD::DISABLE_CONTROL_ACTION(0, 138, true);
	PAD::DISABLE_CONTROL_ACTION(0, 136, true);
	PAD::DISABLE_CONTROL_ACTION(0, 114, true);
	PAD::DISABLE_CONTROL_ACTION(0, 107, true);
	PAD::DISABLE_CONTROL_ACTION(0, 110, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 89, true);
	PAD::DISABLE_CONTROL_ACTION(0, 87, true);
	PAD::DISABLE_CONTROL_ACTION(0, 88, true);
	PAD::DISABLE_CONTROL_ACTION(0, 113, true);
	PAD::DISABLE_CONTROL_ACTION(0, 115, true);
	PAD::DISABLE_CONTROL_ACTION(0, 116, true);
	PAD::DISABLE_CONTROL_ACTION(0, 117, true);
	PAD::DISABLE_CONTROL_ACTION(0, 118, true);
	PAD::DISABLE_CONTROL_ACTION(0, 119, true);
	PAD::DISABLE_CONTROL_ACTION(0, 352, true);
	PAD::DISABLE_CONTROL_ACTION(0, 131, true);
	PAD::DISABLE_CONTROL_ACTION(0, 132, true);
	PAD::DISABLE_CONTROL_ACTION(0, 123, true);
	PAD::DISABLE_CONTROL_ACTION(0, 126, true);
	PAD::DISABLE_CONTROL_ACTION(0, 129, true);
	PAD::DISABLE_CONTROL_ACTION(0, 130, true);
	PAD::DISABLE_CONTROL_ACTION(0, 133, true);
	PAD::DISABLE_CONTROL_ACTION(0, 134, true);
	CAM::_0x17FCA7199A530203();
	func_4(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_29) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, bParam4);
	}
	Global_29 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_4(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::_GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::_IS_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::_SET_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0, false);
			}
		}
	}
}

void func_5(int iParam0)
{
	iLocal_389 = MISC::GET_GAME_TIMER();
	iLocal_390 = iParam0;
	iLocal_388 = 0;
}

int func_6()
{
	float fVar0;
	
	fVar0 = func_10();
	if (fVar0 == -1f || fVar0 > 300f)
	{
		return 1;
	}
	return 0;
}

void func_7(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (bParam1)
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_131[iParam0]))
		{
			uLocal_131[iParam0] = func_8(ENTITY::GET_ENTITY_COORDS(iLocal_156[iParam0], false), 0);
			HUD::SET_BLIP_COLOUR(uLocal_131[iParam0], 1);
			HUD::SET_BLIP_PRIORITY(uLocal_131[iParam0], 9);
		}
		else
		{
			Var0 = { HUD::GET_BLIP_COORDS(uLocal_131[iParam0]) };
			Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_156[iParam0], false) };
			Var0.f_0 = (Var0.f_0 + ((Var3.f_0 - Var0.f_0) / 25f));
			Var0.f_1 = (Var0.f_1 + ((Var3.f_1 - Var0.f_1) / 25f));
			Var0.f_2 = (Var0.f_2 + ((Var3.f_2 - Var0.f_2) / 25f));
			HUD::SET_BLIP_COORDS(uLocal_131[iParam0], Var0);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uLocal_131[iParam0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_131[iParam0]));
	}
}

int func_8(struct<3> Param0, bool bParam3)
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_9(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

float func_9(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

float func_10()
{
	int iVar0;
	float fVar1;
	
	fVar1 = -1f;
	iVar0 = 0;
	while (iVar0 < iLocal_144)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_144[iVar0]) && !PED::IS_PED_INJURED(iLocal_144[iVar0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_144[iVar0], false))
		{
			if (fVar1 == -1f)
			{
				fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_144[iVar0], false));
			}
			else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_144[iVar0], false)) < fVar1)
			{
				fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_144[iVar0], false));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_147)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_147[iVar0]) && !PED::IS_PED_INJURED(iLocal_147[iVar0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_147[iVar0], false))
		{
			if (fVar1 == -1f)
			{
				fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_147[iVar0], false));
			}
			else if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_147[iVar0], false)) < fVar1)
			{
				fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_147[iVar0], false));
			}
		}
		iVar0++;
	}
	return fVar1;
}

int func_11()
{
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false)) && PED::IS_PED_IN_VEHICLE(iLocal_140, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			return 1;
		}
		if ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, false)) && !PED::IS_PED_RAGDOLL(iLocal_140))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_140, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) < 400f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_12()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { -20f, -20f, -20f };
	Var3 = { 20f, 20f, 20f };
	if (!iLocal_367)
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_140, false) + Var0 };
		Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_140, false) + Var3 };
		if (func_164(&uLocal_176, cLocal_387, "RESNA_MOR", 4, func_205(), 0, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_140) && !PED::IS_PED_INJURED(iLocal_147[0]))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_140, iLocal_144[0], 20000, 16, 3);
			}
			iLocal_367 = 1;
		}
	}
}

void func_13()
{
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_140, 317, true);
	}
	func_18(-1, 0);
	func_17();
	func_14();
	func_255();
}

void func_14()
{
	func_15();
}

int func_15()
{
	if (func_16(0))
	{
		return 0;
	}
	if (Global_100480.f_8)
	{
		if (Global_100480.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_100480.f_10 > 1)
	{
		return 0;
	}
	Global_100480.f_10++;
	return 1;
}

int func_16(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_78567, 0);
}

int func_17()
{
	return 1;
}

void func_18(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_42();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_41(iParam0))
	{
		func_40(iParam0, iParam1);
		if (!func_39(51))
		{
			func_29("RE_REWARD", 1, 0, 4000, 10000, func_32(), 0, 138, 0);
			func_28(51);
		}
		if (func_27(iParam0))
		{
			Global_113386.f_24995.f_2 = 3;
		}
		if (func_26(iParam0, iParam1) != 322)
		{
			func_20(func_26(iParam0, iParam1), Local_44.f_0, Local_44.f_1);
		}
		Global_113374 = iParam1;
		if (Global_113372 == 0)
		{
			if (((Global_113375 == 1 || Global_113375 == 5) || Global_113375 == 11) || Global_113375 == 25)
			{
				func_19(2);
			}
			else if ((Global_113375 == 26 || Global_113375 == 8) || Global_113375 == 17)
			{
				func_19(7);
			}
			else
			{
				func_19(1);
			}
		}
	}
}

void func_19(int iParam0)
{
	Global_113372 = iParam0;
}

void func_20(int iParam0, var uParam1, var uParam2)
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
		func_24((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_113386.f_10194[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113386.f_10194[iParam0 /*12*/].f_6 == 11 || Global_113386.f_10194[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_113386.f_10194[iParam0 /*12*/].f_5 = 1;
		Global_113386.f_10194[iParam0 /*12*/].f_10 = uParam1;
		Global_113386.f_10194[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_21();
	}
}

void func_21()
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
	Global_113122 = 0;
	Global_113123 = 0;
	Global_113124 = 0;
	Global_113125 = 0;
	Global_113126 = 0;
	Global_113127 = 0;
	Global_113128 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_113386.f_10194.f_3853;
	Global_113386.f_10194.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_113386.f_10194[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_113386.f_10194[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_113122++;
					fVar1 = (fVar1 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_113123++;
					fVar2 = (fVar2 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_113124++;
					fVar3 = (fVar3 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_113125++;
					fVar4 = (fVar4 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_113126++;
					fVar5 = (fVar5 + (Global_113386.f_10194[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_113127++;
					fVar6 = (fVar6 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_113128++;
					fVar7 = (fVar7 + Global_113386.f_10194[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_113105 > 0)
	{
		if (Global_113122 == Global_113105)
		{
			fVar1 = 55f;
		}
	}
	if (Global_113106 > 0)
	{
		if (Global_113123 == Global_113106)
		{
			fVar2 = 10f;
		}
	}
	if (Global_113107 > 0)
	{
		if (Global_113124 == Global_113107)
		{
			fVar3 = 0f;
		}
	}
	if (Global_113108 > 0)
	{
		if (Global_113125 == Global_113108)
		{
			fVar4 = 10f;
		}
	}
	if (Global_113109 > 0)
	{
		if (((Global_113126 == Global_113109 || (Global_113109 * 10 / Global_113126) < 41) || Global_113126 > Global_113112) || Global_113126 == Global_113112)
		{
			if (!BitTest(Global_113386.f_10194.f_3856, 14))
			{
				if (Global_113126 == Global_113109)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_113109, 0);
					MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_113110 > 0)
	{
		if (Global_113127 == Global_113110)
		{
			fVar6 = 15f;
		}
	}
	if (Global_113111 > 0)
	{
		if (Global_113128 == Global_113111)
		{
			fVar7 = 5f;
		}
	}
	Global_113386.f_10194.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_113126 > Global_113112 || Global_113126 == Global_113112)
	{
		iVar9 = Global_113112;
	}
	else
	{
		iVar9 = Global_113126;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_113122, true);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_113105, true);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_113123, true);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_113106, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_113124, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_113107, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_113125, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_113108, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_113112, true);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_113128 + Global_113127), true);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_113111 + Global_113110), true);
	Global_113129 = (Global_113122 * 100 / Global_113105);
	Global_113131 = ((Global_113124 + Global_113123) * 100 / (Global_113107 + Global_113106));
	Global_113130 = ((Global_113125 + iVar9) * 100 / (Global_113108 + Global_113112));
	Global_113132 = ((Global_113127 + Global_113128) * 100 / (Global_113110 + Global_113111));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_113386.f_10194.f_3853, true);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_113129, true);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_113130, true);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_113131, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113386.f_10194.f_3853))
	{
		func_23(13, SYSTEM::FLOOR(Global_113386.f_10194.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78319)
		{
			if (func_22() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_113120 = 0;
				}
				if (!Global_63154)
				{
					func_15();
				}
			}
		}
	}
}

int func_22()
{
	return Global_31959;
}

int func_23(int iParam0, int iParam1)
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
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_24(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_25();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

int func_25()
{
	return Global_1574918;
}

int func_26(int iParam0, int iParam1)
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

int func_27(int iParam0)
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

void func_28(int iParam0)
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
		MISC::SET_BIT(&(Global_113386.f_20410.f_150[iVar1]), iVar0);
	}
}

void func_29(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_30(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_30(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
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
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_20410[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_113386.f_20410.f_145 < 9)
	{
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_4), sParam1, 16);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_9 = iParam5;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_11 = iParam6;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_12 = uParam2;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_13 = iParam7;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_14 = iParam8;
		Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10 = -1;
		}
		Global_113386.f_20410.f_145++;
		func_31();
	}
}

void func_31()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_113386.f_20410.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_113386.f_20410.f_145)
	{
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 0))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[0])
			{
				Global_113386.f_20410.f_146[0] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 1))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[1])
			{
				Global_113386.f_20410.f_146[1] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_113386.f_20410[iVar0 /*16*/].f_11, 2))
		{
			if (Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[2])
			{
				Global_113386.f_20410.f_146[2] = Global_113386.f_20410[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_32()
{
	func_33();
	switch (Global_113386.f_2363.f_539.f_4321)
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

void func_33()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_37(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_36(PLAYER::PLAYER_PED_ID());
			if (func_35(iVar0) && (!func_34(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_35(Global_113386.f_2363.f_539.f_4321))
				{
					Global_113386.f_2363.f_539.f_4322 = Global_113386.f_2363.f_539.f_4321;
				}
				Global_113386.f_2363.f_539.f_4323 = iVar0;
				Global_113386.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113386.f_2363.f_539.f_4321 != 145)
			{
				Global_113386.f_2363.f_539.f_4323 = Global_113386.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_113386.f_2363.f_539.f_4321 = 145;
}

bool func_34(int iParam0)
{
	return Global_43052 == iParam0;
}

bool func_35(int iParam0)
{
	return iParam0 < 3;
}

int func_36(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_37(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_37(int iParam0)
{
	if (func_35(iParam0))
	{
		return func_38(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_38(int iParam0)
{
	return Global_1998[iParam0 /*29*/];
}

int func_39(int iParam0)
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
		return BitTest(Global_113386.f_20410.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_40(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_113386.f_24995.f_8[iParam0]), iParam1);
}

int func_41(int iParam0)
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

int func_42()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_43(Var0);
	return uVar16;
}

int func_43(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (MISC::GET_HASH_KEY(&cParam0))
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

int func_44()
{
	if (Global_32198)
	{
		func_19(4);
		return 1;
	}
	return 0;
}

void func_45()
{
	Global_20471 = 0;
	func_46();
}

void func_46()
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_22616 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21605 = 6;
		return;
	}
}

int func_47(int iParam0)
{
	int iVar0;
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iParam0, false)) < 10000f)
		{
			iVar0 = 1;
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iParam0, false)) < 2500f)
		{
			iVar0 = 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, true))
		{
			iVar0 = 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_140) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(iLocal_140, false), false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_IN(iLocal_140, false), iParam0, true))
				{
					iVar0 = 1;
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != PED::GET_VEHICLE_PED_IS_IN(iLocal_140, false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), iParam0, true))
					{
						iVar0 = 1;
					}
				}
			}
		}
	}
	return iVar0;
}

void func_48()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_415))
	{
		STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01")))
		{
			iLocal_415 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) + Vector(2f, 0f, 0f), true, true, false);
			ENTITY::SET_ENTITY_COLLISION(iLocal_415, false, false);
			ENTITY::SET_ENTITY_VISIBLE(iLocal_415, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_415, true);
		}
	}
	GRAPHICS::DRAW_DEBUG_TEXT_2D("Checking for warp", 0.89f, 0.02f, 0f, 0, 0, 255, 255);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[iVar1], false) && !PED::IS_PED_INJURED(iLocal_144[iVar1])) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_144[iVar1], iLocal_156[iVar1]))
			{
				Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_156[iVar1], false) };
				Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
				if (SYSTEM::VDIST2(Var5, Local_416[0 /*7*/]) > 400f && SYSTEM::VDIST2(Var5, Local_416[1 /*7*/]) > 400f)
				{
					if (SYSTEM::VDIST2(Var5, Local_416[iVar1 /*7*/]) > 900f)
					{
						if (func_50(iLocal_156[iVar1], iVar0, iLocal_415, Var5, ENTITY::GET_ENTITY_ROTATION(iVar0, 2)))
						{
							Local_416[iVar1 /*7*/] = { Var5 };
							Local_416[iVar1 /*7*/].f_3 = { ENTITY::GET_ENTITY_ROTATION(iVar0, 2) };
							Local_416[iVar1 /*7*/].f_6 = SYSTEM::VMAG(ENTITY::GET_ENTITY_VELOCITY(iLocal_156[iVar1]));
						}
					}
				}
				if (!func_49(Local_416[iVar1 /*7*/]))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_156[iVar1]))
					{
						iLocal_434[iVar1] = MISC::GET_GAME_TIMER();
					}
					else if (((MISC::GET_GAME_TIMER() - iLocal_434[iVar1]) > 1000 && (MISC::GET_GAME_TIMER() - iLocal_431[0]) > 2000) && (MISC::GET_GAME_TIMER() - iLocal_431[1]) > 2000)
					{
						if (!CAM::IS_SPHERE_VISIBLE(Local_416[iVar1 /*7*/], 3f) && !CAM::IS_SPHERE_VISIBLE(Var2, 3f))
						{
							fVar8 = 99f;
							iVar9 = 0;
							if (iVar1 == 0)
							{
								iVar9 = 1;
							}
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[iVar9], false))
							{
								fVar8 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_156[iVar9], false), Local_416[iVar1 /*7*/]);
							}
							if ((((SYSTEM::VDIST2(Var2, Var5) > 625f && SYSTEM::VDIST2(Var2, Local_416[iVar1 /*7*/]) < SYSTEM::VDIST2(Var2, Var5)) && SYSTEM::VDIST2(Var5, Local_416[iVar1 /*7*/]) > 400f) && fVar8 > 5f) && func_50(iLocal_156[iVar1], iVar0, iLocal_415, Local_416[iVar1 /*7*/], Local_416[iVar1 /*7*/].f_3))
							{
								MISC::CLEAR_AREA_OF_PEDS(Local_416[iVar1 /*7*/], 3f, 0);
								MISC::CLEAR_AREA_OF_VEHICLES(Local_416[iVar1 /*7*/], 3f, false, false, false, false, false, false, 0);
								ENTITY::SET_ENTITY_COORDS(iLocal_156[iVar1], Local_416[iVar1 /*7*/], true, false, false, true);
								ENTITY::SET_ENTITY_ROTATION(iLocal_156[iVar1], Local_416[iVar1 /*7*/].f_3, 2, true);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_156[iVar1], 5f);
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_156[iVar1], (Local_416[iVar1 /*7*/].f_6 + 5f));
								TASK::TASK_VEHICLE_CHASE(iLocal_144[iVar1], PLAYER::PLAYER_PED_ID());
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_156[iVar1], true, true, false);
								iLocal_431[iVar1] = MISC::GET_GAME_TIMER();
								iLocal_68 = MISC::GET_GAME_TIMER() + 1000;
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	if (iLocal_68 > MISC::GET_GAME_TIMER())
	{
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	}
}

int func_49(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_50(int iParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param6)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	var uVar16;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	float fVar23;
	struct<3> Var24;
	int iVar27;
	var uVar28;
	var uVar31;
	var uVar34;
	int iVar35;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam1), &Var13, &uVar16);
		fVar19 = MISC::ABSF((Var10.f_2 - Var7.f_2));
		fVar20 = MISC::ABSF((Var10.f_0 - Var7.f_0));
		fVar21 = MISC::ABSF((Var10.f_1 - Var7.f_1));
		if (fVar20 > fVar19)
		{
			fVar22 = (fVar20 / 2f);
			fVar23 = (fVar22 - MISC::ABSF(Var7.f_2));
		}
		else
		{
			fVar22 = (fVar21 / 2f);
			fVar23 = (fVar22 - MISC::ABSF(Var7.f_0));
		}
		Var24.f_2 = (Var24.f_2 + (Var13.f_2 - Var7.f_2));
		ENTITY::SET_ENTITY_COORDS(iParam2, Param3, true, false, false, true);
		ENTITY::SET_ENTITY_ROTATION(iParam2, Param6, 2, true);
		Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Vector((fVar23 * 1.25f), ((fVar21 / 2f) - (fVar22 * 0.75f)), 0f) + Var24) };
		Var4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam2, Vector((fVar23 * 1.25f), ((-fVar21 / 2f) + (fVar22 * 0.75f)), 0f) + Var24) };
		iVar35 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var4, Var1, fVar22, 19, PLAYER::PLAYER_PED_ID(), 4);
		if (SHAPETEST::GET_SHAPE_TEST_RESULT(iVar35, &iVar27, &uVar28, &uVar31, &uVar34) != 2)
		{
		}
		if (iVar27 != 0)
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_51()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_56) < 1500f || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_65) < 1500f)
			{
				if (func_52())
				{
					iLocal_73 = 1;
				}
			}
		}
	}
}

int func_52()
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	
	iVar0 = 524852;
	iVar1 = 6;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_156[1], false))
	{
		if (!PED::IS_PED_INJURED(iLocal_144[0]))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_144[0], -1273030092) == 1)
			{
				if (!TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_144[0]))
				{
					TASK::TASK_DRIVE_BY(iLocal_144[0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 100, true, -753768974);
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_144[1]))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_144[1], -1273030092) == 1)
			{
				if (!TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_144[1]))
				{
					TASK::TASK_DRIVE_BY(iLocal_144[1], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 100, true, -753768974);
				}
			}
		}
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_370);
		STREAMING::REQUEST_MODEL(iLocal_372);
		STREAMING::REQUEST_MODEL(iLocal_371);
		if ((STREAMING::HAS_MODEL_LOADED(iLocal_370) && STREAMING::HAS_MODEL_LOADED(iLocal_372)) && STREAMING::HAS_MODEL_LOADED(iLocal_371))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var5 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
				if (VEHICLE::_0xA4822F1CF23F4810(&Var5, &Var2, &Var8, 0, 1127481344, 30f, 0, 1, 1))
				{
					if ((func_53(Var2) && !CAM::IS_SPHERE_VISIBLE(Var2, 5f)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var2) > 100f)
					{
						iVar11 = 0;
						while (iVar11 < 2)
						{
							MISC::CLEAR_AREA(Var2, 3f, false, false, false, false);
							Var2.f_0 = (Var2.f_0 + SYSTEM::TO_FLOAT(iVar11));
							iLocal_156[iVar11] = VEHICLE::CREATE_VEHICLE(iLocal_370, Var2, Var8.f_2, true, true, false);
							iLocal_144[iVar11] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_156[iVar11], 22, iLocal_372, -1, true, true);
							iLocal_147[iVar11] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_156[iVar11], 22, iLocal_371, 0, true, true);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_147[iVar11], iLocal_374);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_144[iVar11], iLocal_374);
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
								{
									TASK::TASK_VEHICLE_CHASE(iLocal_144[iVar11], PLAYER::PLAYER_PED_ID());
								}
							}
							else
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_144[iVar11], iLocal_156[iVar11], PLAYER::PLAYER_PED_ID(), iVar1, 50f, iVar0, 5f, 10f, true);
							}
							PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_144[iVar11], false);
							PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_147[iVar11], false);
							PED::SET_PED_KEEP_TASK(iLocal_144[iVar11], true);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_144[iVar11], joaat("weapon_sawnoffshotgun"), 999999, true, true);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_156[iVar11], (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) + 5f));
							iVar1 = 11;
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_147[iVar11], joaat("weapon_sawnoffshotgun"), 999999, true, true);
							TASK::TASK_DRIVE_BY(iLocal_147[iVar11], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 70, false, -753768974);
							PED::SET_PED_KEEP_TASK(iLocal_147[iVar11], true);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_144[iVar11], 1);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_147[iVar11], 1);
							PED::SET_PED_CONFIG_FLAG(iLocal_144[iVar11], 42, true);
							PED::SET_PED_CONFIG_FLAG(iLocal_147[iVar11], 42, true);
							PED::SET_PED_ACCURACY(iLocal_144[iVar11], 15);
							PED::SET_PED_ACCURACY(iLocal_147[iVar11], 15);
							iVar11++;
						}
						func_108();
					}
				}
			}
		}
	}
	return 0;
}

int func_53(struct<3> Param0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { Param0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()) };
	if (MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.f_0, Var3.f_1, Var0.f_0, Var0.f_1)) >= 90f)
	{
		return 1;
	}
	return 0;
}

int func_54(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_55(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_1998[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_1998[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_55(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_9(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_9(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_9(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

void func_56()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_139))
	{
		HUD::REMOVE_BLIP(&iLocal_139);
	}
}

int func_57(struct<3> Param0, bool bParam3)
{
	return func_8(Param0, bParam3);
}

void func_58()
{
	if (func_165() == 2)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_139))
		{
			func_61();
			iLocal_139 = func_57(Local_65, 0);
			HUD::SET_BLIP_SPRITE(iLocal_139, 269);
			func_59();
		}
	}
}

void func_59()
{
	if (!func_60())
	{
		if (func_165() == 2)
		{
			Global_32197 = 1;
		}
	}
}

int func_60()
{
	if (Global_113386.f_24995.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

void func_61()
{
	if (func_165() == 2)
	{
		if (!Global_32199)
		{
			func_62("CULT_BLIP_HELP", -1);
			Global_32199 = 1;
		}
	}
}

void func_62(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_63()
{
	struct<6> Var0;
	char* sVar6;
	int iVar7;
	
	if (!iLocal_87[0])
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_140, false)) < 400f)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_87[0] = 1;
			}
		}
	}
	if (!iLocal_90[0])
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_140, false)) < 400f && (MISC::GET_GAME_TIMER() - iLocal_104) > 30000)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				{
					if (!func_85(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						iLocal_90[0] = 1;
					}
				}
			}
		}
	}
	else if (iLocal_90[1])
	{
		if (func_11())
		{
			iLocal_104 = MISC::GET_GAME_TIMER();
			iLocal_90[0] = 0;
			iLocal_90[1] = 0;
		}
	}
	if (!iLocal_93[0])
	{
		if (func_11())
		{
			if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1f)
			{
				fLocal_102 = (fLocal_102 + MISC::GET_FRAME_TIME());
				if (fLocal_102 > 30f)
				{
					iLocal_93[0] = 1;
				}
			}
			else if (fLocal_102 > 0f)
			{
				fLocal_102 = (fLocal_102 - (MISC::GET_FRAME_TIME() * 10f));
			}
		}
	}
	else if (iLocal_93[1])
	{
		fLocal_102 = 0f;
		iLocal_93[0] = 0;
		iLocal_93[1] = 0;
	}
	if (!iLocal_96[0])
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, false))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))
			{
				fLocal_103 = (fLocal_103 + MISC::GET_FRAME_TIME());
				if (fLocal_103 > 15f)
				{
					iLocal_96[0] = 1;
				}
			}
		}
		else if (fLocal_103 > 0f)
		{
			fLocal_103 = (fLocal_103 - (MISC::GET_FRAME_TIME() * 10f));
		}
	}
	if ((((!iLocal_93[0] || (iLocal_93[0] && iLocal_93[1])) && (!iLocal_87[0] || (iLocal_87[0] && iLocal_87[1]))) && (!iLocal_90[0] || (iLocal_90[0] && iLocal_90[1]))) && (!iLocal_96[0] || (iLocal_96[0] && iLocal_96[1])))
	{
		switch (iLocal_390)
		{
			case 0:
				switch (iLocal_388)
				{
					case 0:
						if (!func_90())
						{
							iLocal_388++;
						}
						break;
					
					case 1:
						if (func_11())
						{
							if (func_164(&uLocal_176, cLocal_387, "RESNA_HOME", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 2:
						if (!func_90())
						{
							if (func_11())
							{
								if (func_84("RESNA_RESP", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					
					case 3:
						if (func_11())
						{
							if (func_83())
							{
								if (func_164(&uLocal_176, cLocal_387, "RESNA_ADD", 4, 0, 0, 0))
								{
									iLocal_388++;
								}
							}
							else if (func_164(&uLocal_176, cLocal_387, "RESNA_ADD2", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 4:
						if (!func_90())
						{
							func_5(1);
						}
						break;
				}
				break;
			
			case 1:
				if ((MISC::GET_GAME_TIMER() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_11())
							{
								if (func_164(&uLocal_176, cLocal_387, "RESNA_BANT", 4, 0, 0, 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 1:
							if (!func_90())
							{
								iLocal_388++;
							}
							break;
						
						case 2:
							if (func_165() == 2)
							{
								if (func_66("RESNA_B1T", func_11()))
								{
									iLocal_388++;
								}
							}
							else if (func_11())
							{
								if (func_84("RESNA_B1", 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 3:
							if (func_66("RESNA_B2", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 4:
							if (func_11())
							{
								if (func_84("RESNA_B2", 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 5:
							if (!func_90())
							{
								func_5(2);
							}
							break;
						}
				}
				break;
			
			case 2:
				if ((MISC::GET_GAME_TIMER() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_11())
							{
								if (func_84("RESNA_B4", 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 1:
							if (func_66("RESNA_B4", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 2:
							if (func_11())
							{
								if (func_84("RESNA_B4", "b"))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 3:
							if (func_66("RESNA_B5b", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 4:
							if (!func_90())
							{
								func_5(5);
							}
							break;
						}
				}
				break;
			
			case 3:
				if ((MISC::GET_GAME_TIMER() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_11())
							{
								if (func_164(&uLocal_176, cLocal_387, "RESNA_B5", 4, 0, 0, 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 1:
							if (!func_90())
							{
								if (func_11())
								{
									if (func_84("RESNA_B5", 0))
									{
										iLocal_388++;
									}
								}
							}
							break;
						
						case 2:
							if (func_66("RESNA_B5b", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 3:
							if (!func_90())
							{
								func_5(5);
							}
							break;
						}
				}
				break;
			
			case 4:
				if ((MISC::GET_GAME_TIMER() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_66("RESNA_B6", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 1:
							if (func_11())
							{
								if (func_84("RESNA_B6", 0))
								{
									iLocal_388++;
								}
							}
							break;
						
						case 2:
							if (func_66("RESNA_RUNOUT", func_11()))
							{
								iLocal_388++;
							}
							break;
						
						case 3:
							if (!func_90())
							{
								func_5(5);
							}
							break;
						}
				}
				break;
			
			case 5:
				if (iLocal_388 > 1 && iLocal_388 < 3)
				{
					if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_140))
					{
						TASK::TASK_USE_MOBILE_PHONE(iLocal_140, 1, 1);
					}
				}
				else if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_140))
				{
					TASK::TASK_USE_MOBILE_PHONE(iLocal_140, 0, 1);
				}
				switch (iLocal_388)
				{
					case 0:
						if ((MISC::GET_GAME_TIMER() - iLocal_389) > 10000)
						{
							if (func_11())
							{
								if (func_164(&uLocal_176, cLocal_387, "RESNA_CELL1", 8, 0, 0, 0))
								{
									PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_140, false);
									PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_140, false);
									PED::SET_PED_CAN_PLAY_VISEME_ANIMS(iLocal_140, false, false);
									iLocal_388++;
								}
							}
						}
						break;
					
					case 1:
						Var0 = { func_65() };
						if (MISC::ARE_STRINGS_EQUAL(&Var0, "RESNA_CELL1_3"))
						{
							iLocal_388++;
						}
						break;
					
					case 2:
						if (!func_90())
						{
							iLocal_389 = MISC::GET_GAME_TIMER();
							iLocal_388++;
						}
						break;
					
					case 3:
						if ((MISC::GET_GAME_TIMER() - iLocal_389) > 2000)
						{
							if (func_11() && !PED::IS_MOBILE_PHONE_TO_PED_EAR(iLocal_140))
							{
								if (func_84("RESNA_CELLR", 0))
								{
									PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_140, true);
									PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_140, true);
									PED::SET_PED_CAN_PLAY_VISEME_ANIMS(iLocal_140, true, false);
									iLocal_388++;
								}
							}
						}
						break;
					
					case 4:
						if (func_11())
						{
							if (func_164(&uLocal_176, cLocal_387, "RESNA_CELLD", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
				}
				break;
			
			case -1:
				switch (iLocal_388)
				{
					case 0:
						if (func_164(&uLocal_176, cLocal_387, "RESNA_BANT2", 4, 0, 0, 0))
						{
							iLocal_388++;
						}
						break;
					
					case 1:
						if (!func_90())
						{
							if (func_11())
							{
								if (func_84("RESNA_B3", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					
					case 2:
						if (func_11())
						{
							if (func_164(&uLocal_176, cLocal_387, "RESNA_B3B", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 3:
						if (!func_90())
						{
							if (func_11())
							{
								if (func_84("RESNA_B3B", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					
					case 4:
						if (func_11())
						{
							if (func_164(&uLocal_176, cLocal_387, "RESNA_B3C", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 5:
						if (!func_90())
						{
							if (func_11())
							{
								if (func_84("RESNA_B3C", 0))
								{
									iLocal_388++;
								}
							}
						}
						break;
					
					case 6:
						if (func_11())
						{
							if (func_164(&uLocal_176, cLocal_387, "RESNA_B3D", 4, 0, 0, 0))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 7:
						if (!func_90())
						{
							iLocal_388++;
						}
						break;
					
					case 8:
						if (func_11())
						{
							if (func_165() == 2)
							{
								if (!func_90())
								{
									if (func_84("RESNA_B3D", 0))
									{
										iLocal_388++;
									}
								}
							}
							else if (func_165() == 0)
							{
								if (func_66("RESNA_B3DM", func_11()))
								{
									iLocal_388++;
								}
							}
							else if (func_66("RESNA_B3DF", func_11()))
							{
								iLocal_388++;
							}
						}
						break;
					
					case 9:
						if (!func_90())
						{
							func_5(6);
						}
						break;
				}
				break;
			
			case 6:
				if (func_165() == 2 && (MISC::GET_GAME_TIMER() - iLocal_389) > 15000)
				{
					switch (iLocal_388)
					{
						case 0:
							if (func_88(Local_56))
							{
								iLocal_388++;
							}
							break;
						
						case 1:
							if (func_66("RESNA_TREV", func_11()))
							{
								iLocal_388++;
								iLocal_389 = MISC::GET_GAME_TIMER();
							}
							break;
						
						case 2:
							if (func_88(Local_56))
							{
								iLocal_388++;
							}
							break;
						
						case 3:
							if (func_66("RESNA_CULT", func_11()))
							{
								iLocal_388++;
								iLocal_389 = MISC::GET_GAME_TIMER();
							}
							break;
						
						case 4:
							if (func_88(Local_56) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Local_65) < 250f)
							{
								iLocal_388++;
							}
							break;
						
						case 5:
							if (func_66("RESNA_NEAR", func_11()))
							{
								iLocal_388++;
							}
							break;
						}
				}
				break;
		}
	}
	else if (func_90())
	{
		if (iLocal_376 && !iLocal_377)
		{
			Local_378 = { func_64() };
			func_45();
			iLocal_377 = 1;
		}
	}
	else
	{
		if (iLocal_87[0] && !iLocal_87[1])
		{
			if (func_164(&uLocal_176, cLocal_387, "RESNA_JACK", 8, 0, 0, 0))
			{
				iLocal_87[1] = 1;
			}
		}
		if (iLocal_96[0] && !iLocal_96[1])
		{
			if (func_164(&uLocal_176, cLocal_387, "RESNA_NOVEH", 8, 0, 0, 0))
			{
				iLocal_96[1] = 1;
			}
		}
		if (iLocal_93[0] && !iLocal_93[1])
		{
			if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 3f)
			{
				if (func_164(&uLocal_176, cLocal_387, "RESNA_STOP", 8, 0, 0, 0))
				{
					iLocal_93[1] = 1;
				}
			}
			else
			{
				iLocal_93[0] = 0;
			}
		}
		if (iLocal_90[0] && !iLocal_90[1])
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_140, false)) && VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				iVar7 = ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
				if ((VEHICLE::IS_THIS_MODEL_A_BIKE(iVar7) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iVar7)) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar7))
				{
					sVar6 = "RESNA_VEH1";
				}
				else
				{
					sVar6 = "RESNA_VEH2";
				}
				if (func_164(&uLocal_176, cLocal_387, sVar6, 8, 0, 0, 0))
				{
					iLocal_90[1] = 1;
				}
			}
			else
			{
				iLocal_90[0] = 0;
			}
		}
	}
}

struct<6> func_64()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_22615);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_20473[iVar7 /*6*/])))
			{
				return Global_20473[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_20473[iVar8 /*6*/])))
					{
						return Global_20473[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_20473[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_65()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21605 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_22615);
		if (iVar6 > -1)
		{
			return Global_20473[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

int func_66(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!iLocal_376)
		{
			if (func_164(&uLocal_176, cLocal_387, sParam0, 8, 0, 0, 0))
			{
				iLocal_376 = 1;
				iLocal_377 = 0;
			}
		}
		else if (iLocal_377)
		{
			if (func_67(&uLocal_176, cLocal_387, sParam0, &Local_378, 8, 0, 0))
			{
				iLocal_377 = 0;
			}
		}
		if ((iLocal_376 && !iLocal_377) && bParam1)
		{
			if (iLocal_384 == -1)
			{
				if (!func_90())
				{
					iLocal_384 = MISC::GET_GAME_TIMER();
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_384) > 500)
			{
				iLocal_384 = -1;
				iLocal_376 = 0;
				iLocal_377 = 0;
				return 1;
			}
		}
	}
	else if (iLocal_376 && !iLocal_377)
	{
		Local_378 = { func_64() };
		func_45();
		iLocal_377 = 1;
	}
	return 0;
}

bool func_67(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_82(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21612 = 0;
	Global_21619 = 0;
	Global_21614 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 1;
	StringCopy(&Global_22609, sParam3, 24);
	Global_2883585 = 0;
	return func_68(sParam2, iParam4, 0);
}

int func_68(char* sParam0, int iParam1, bool bParam2)
{
	Global_21606 = 0;
	if (Global_21605 == 0 || Global_21607 == 2)
	{
		if (Global_21605 != 0)
		{
			if (iParam1 > Global_21607)
			{
				if (Global_21612 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20266.f_1 = 3;
					Global_21605 = 0;
					Global_21606 = 1;
					Global_21658 = 0;
					Global_21601 = 0;
					Global_21602 = 0;
					Global_21616 = 0;
					Global_21615 = 0;
					Global_20265 = 0;
				}
				else
				{
					func_81();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_80(8, -1))
		{
			return 0;
		}
		Global_21681 = { Global_21675 };
		func_79();
		Global_20894 = { Global_21059 };
		Global_21611 = Global_21612;
		Global_21618 = Global_21619;
		Global_2883586 = Global_2883585;
		Global_21620 = { Global_21636 };
		Global_21613 = Global_21614;
		Global_22595 = Global_22596;
		Global_22603 = { Global_22609 };
		Global_22597 = Global_22598;
		Global_22599 = Global_22600;
		Global_22601 = Global_22602;
		Global_21224.f_370 = Global_22594;
		Global_21224.f_368 = Global_22592;
		Global_21224.f_369 = Global_22593;
		Global_21601 = Global_21602;
		if (Global_21611)
		{
			MISC::CLEAR_BIT(&Global_8136, 20);
			MISC::CLEAR_BIT(&Global_8137, 17);
			MISC::CLEAR_BIT(&Global_8138, 0);
			if (bParam2)
			{
				func_78();
				if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_20266.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_20232 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_77())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_78319)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_76())
			{
				return 0;
			}
			else
			{
				switch (Global_20266.f_1)
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
				if (BitTest(Global_8136, 9))
				{
					return 0;
				}
			}
			func_75();
			Global_21615 = bParam2;
		}
		Global_21607 = iParam1;
		StringCopy(&Global_21224, sParam0, 24);
		Global_20471 = 0;
		func_74();
		func_69();
		return 1;
	}
	if (Global_21605 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21607 || iParam1 == Global_21607)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_81();
	}
	return 0;
}

void func_69()
{
	if (!func_70())
	{
		return;
	}
	if (Global_21611)
	{
		MemCopy(&(Global_1973149.f_1), {Global_21224}, 4);
		Global_1973149 = Global_7451;
		Global_1973149.f_6 = Global_21615;
	}
}

int func_70()
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_73())
	{
		return 0;
	}
	if (func_71(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_71(int iParam0)
{
	return func_72(iParam0, 20);
}

var func_72(int iParam0, int iParam1)
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_73()
{
	return -1;
}

void func_74()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_20473[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21605 = 1;
}

void func_75()
{
	Global_21658 = Global_21657;
	Global_21652 = Global_21653;
	Global_21699 = { Global_21687 };
	Global_21705 = { Global_21693 };
	Global_21660 = Global_21659;
	Global_21729 = { Global_21711 };
	Global_21735 = { Global_21717 };
	Global_21741 = { Global_21723 };
	Global_21747 = { Global_21753 };
	Global_7451 = Global_7452;
	Global_7453 = Global_7454;
	Global_21616 = Global_21617;
	Global_21618 = Global_21619;
	Global_21620 = { Global_21636 };
	Global_21609 = Global_21610;
	Global_22621 = 0;
	Global_21654 = 0;
	Global_21655 = 0;
	MISC::CLEAR_BIT(&Global_8137, 16);
}

int func_76()
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	int iVar0;
	int iVar1;
	
	if (Global_78319)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
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

void func_78()
{
	if (func_34(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[0 /*29*/])
			{
				Global_20266 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[1 /*29*/])
			{
				Global_20266 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[2 /*29*/])
			{
				Global_20266 = 2;
			}
			else
			{
				Global_20266 = 0;
			}
		}
	}
	else
	{
		Global_20266 = func_165();
		if (Global_20266 == 145)
		{
			Global_20266 = 3;
		}
		if (Global_78319)
		{
			Global_20266 = 3;
		}
		if (Global_20266 > 3)
		{
			Global_20266 = 3;
		}
	}
}

void func_79()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20894[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20894[iVar0 /*10*/].f_1), "", 24);
		Global_20894[iVar0 /*10*/].f_7 = 0;
		Global_20894[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20894.f_161 = -99;
	Global_20894.f_162 = { 0f, 0f, 0f };
}

bool func_80(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1648034.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1648034.f_1048, iParam0);
}

void func_81()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22616 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20266.f_1 == 9) || Global_20265 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
		Global_20266.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21605 = 6;
		return;
	}
}

void func_82(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_21059 = { *uParam0 };
	Global_7452 = iParam1;
	StringCopy(&Global_21675, sParam2, 24);
	Global_22594 = iParam5;
	if (iParam3 == 0)
	{
		Global_22592 = 1;
		Global_22590 = 0;
	}
	else
	{
		Global_22592 = 0;
		Global_22590 = 1;
	}
	if (iParam4 == 0)
	{
		Global_22593 = 1;
		Global_22591 = 0;
	}
	else
	{
		Global_22593 = 0;
		Global_22591 = 1;
	}
}

int func_83()
{
	if (BitTest(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_84(char* sParam0, char* sParam1)
{
	struct<3> Var0;
	
	StringConCat(&Var0, sParam0, 24);
	if (func_165() == 0)
	{
		StringConCat(&Var0, "M", 24);
	}
	else if (func_165() == 1)
	{
		StringConCat(&Var0, "F", 24);
	}
	else
	{
		StringConCat(&Var0, "T", 24);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		StringConCat(&Var0, sParam1, 24);
	}
	if (func_164(&uLocal_176, cLocal_387, &Var0, 8, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_85(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0, false))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1, false))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_86(int iParam0)
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_28) > iParam0)
		{
			Global_27 = MISC::GET_GAME_TIMER();
		}
		Global_28 = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_27) > iParam0)
		{
			if (func_87())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_87()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

int func_88(struct<3> Param0)
{
	if (func_165() == 2)
	{
		if (func_89() && !Global_32200)
		{
			if (fLocal_47 == -1f)
			{
				fLocal_47 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0);
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Param0) > (fLocal_47 + 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				Global_32200 = 1;
				return 1;
			}
		}
	}
	return 0;
}

var func_89()
{
	return Global_32197;
}

int func_90()
{
	if (Global_21605 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_91()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	var uVar7;
	
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, 0f, -6f, 0f) };
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Var0, 5f, 5f, 5f, false, true, 0))
		{
			PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), iLocal_3, &Var3, &fVar6, &uVar7, 1, 3f, 0f);
			ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), fVar6);
			ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Var3, true, false, false, true);
		}
	}
}

int func_92(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11[4];
	struct<3> Var24[4];
	struct<3> Var37[4];
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iLocal_155))
	{
		iVar1 = iParam0;
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar1), &Var2, &Var5);
		Var8 = { Var5 - Var2 };
		Var11[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, (-Var8.f_0 / 2f), (Var8.f_1 / 2f), 0f) };
		Var11[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, (Var8.f_0 / 2f), (Var8.f_1 / 2f), 0f) };
		Var11[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, (Var8.f_0 / 2f), (-Var8.f_1 / 2f), 0f) };
		Var11[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, (-Var8.f_0 / 2f), (-Var8.f_1 / 2f), 0f) };
		Var24[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, -1f, -2.5f, 0f) };
		Var24[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, 1f, -2.5f, 0f) };
		Var24[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, 0.75f, -5f, 0f) };
		Var24[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, -0.75f, -5f, 0f) };
		iVar50 = 0;
		while (iVar50 < Var24.f_0)
		{
			iVar52 = iVar50 + 1;
			if (iVar52 == Var24.f_0)
			{
				iVar52 = 0;
			}
			iVar51 = 0;
			while (iVar51 < Var11.f_0)
			{
				iVar53 = iVar51 + 1;
				if (iVar53 == Var11.f_0)
				{
					iVar53 = 0;
				}
				if (func_93(Var24[iVar50 /*3*/], Var24[iVar52 /*3*/], Var11[iVar51 /*3*/], Var11[iVar53 /*3*/], &(Var37[iVar50 /*3*/])))
				{
					iVar0 = 1;
				}
				iVar51++;
			}
			iVar50++;
		}
	}
	return iVar0;
}

int func_93(struct<3> Param0, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11, var uParam12)
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
	
	fVar0 = Param0.f_0;
	fVar1 = Param3.f_0;
	fVar2 = Param6.f_0;
	fVar3 = Param9.f_0;
	fVar4 = Param0.f_1;
	fVar5 = Param3.f_1;
	fVar6 = Param6.f_1;
	fVar7 = Param9.f_1;
	fVar8 = (((fVar0 - fVar1) * (fVar6 - fVar7)) - ((fVar4 - fVar5) * (fVar2 - fVar3)));
	if (fVar8 == 0f)
	{
		return 0;
	}
	fVar9 = ((fVar0 * fVar5) - (fVar4 * fVar1));
	fVar10 = ((fVar2 * fVar7) - (fVar6 * fVar3));
	fVar11 = (((fVar9 * (fVar2 - fVar3)) - ((fVar0 - fVar1) * fVar10)) / fVar8);
	fVar12 = (((fVar9 * (fVar6 - fVar7)) - ((fVar4 - fVar5) * fVar10)) / fVar8);
	if (((fVar11 < func_95(fVar0, fVar1) || fVar11 > func_94(fVar0, fVar1)) || fVar11 < func_95(fVar2, fVar3)) || fVar11 > func_94(fVar2, fVar3))
	{
		return 0;
	}
	if (((fVar12 < func_95(fVar4, fVar5) || fVar12 > func_94(fVar4, fVar5)) || fVar12 < func_95(fVar6, fVar7)) || fVar12 > func_94(fVar6, fVar7))
	{
		return 0;
	}
	*uParam12 = fVar11;
	uParam12->f_1 = fVar12;
	uParam12->f_2 = Param0.f_2;
	return 1;
}

float func_94(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_95(float fParam0, float fParam1)
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_96(var uParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (CAM::DOES_CAM_EXIST(uParam0->f_14))
	{
		CAM::DESTROY_CAM(uParam0->f_14, false);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_15))
	{
		CAM::DESTROY_CAM(uParam0->f_15, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		uParam0->f_14 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
		CAM::SET_CAM_COORD(uParam0->f_14, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, *uParam0));
		if (uParam0->f_18 == 1)
		{
			CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_14, iParam1, *uParam0, true);
		}
		if (bParam2)
		{
			CAM::SET_CAM_ROT(uParam0->f_14, uParam0->f_3, 2);
		}
		else
		{
			Var0 = { func_99(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, uParam0->f_3), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, *uParam0)) };
			Var3 = { func_97(Var0) };
			CAM::SET_CAM_ROT(uParam0->f_14, Var3, 2);
		}
		CAM::SET_CAM_FOV(uParam0->f_14, uParam0->f_12);
		CAM::SET_CAM_ACTIVE(uParam0->f_14, true);
	}
}

Vector3 func_97(struct<3> Param0)
{
	struct<3> Var0;
	
	Param0.f_2 = func_98(Param0.f_2);
	Var0.f_2 = MISC::ATAN2(-Param0.f_0, Param0.f_1);
	Var0.f_0 = MISC::ASIN(Param0.f_2);
	Var0.f_1 = 0f;
	return Var0;
}

float func_98(float fParam0)
{
	if (fParam0 == 1f)
	{
		return 0.999999f;
	}
	if (fParam0 == -1f)
	{
		return -0.999999f;
	}
	return fParam0;
}

Vector3 func_99(struct<3> Param0, struct<3> Param3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	Var0 = { Param0 - Param3 };
	fVar6 = SYSTEM::SQRT((((Var0.f_0 * Var0.f_0) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)));
	Var3.f_0 = (Var0.f_0 / fVar6);
	Var3.f_1 = (Var0.f_1 / fVar6);
	Var3.f_2 = (Var0.f_2 / fVar6);
	return Var3;
}

void func_100(bool bParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_107(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_20266.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_76())
			{
				Global_20266.f_1 = 3;
			}
			Global_21605 = 5;
		}
		func_106(1, bParam3, iParam2, 0);
		Global_63160 = 1;
		Global_75488 = 1;
		Global_78317 = 1;
	}
	else
	{
		func_107(0);
		HUD::THEFEED_RESUME();
		Global_63160 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_106(0, bParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_104(PLAYER::PLAYER_ID())) && !func_102(PLAYER::PLAYER_ID(), 0)) && !func_101()) && !bParam4) && !bParam5)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_104(PLAYER::PLAYER_ID())) && !bParam4) && !bParam5)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		}
		Global_78317 = 0;
	}
}

bool func_101()
{
	return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_18, 14);
}

bool func_102(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_103(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853348[iParam0 /*834*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_103(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_25();
	}
	if (Global_1575038[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_104(int iParam0)
{
	if (func_102(iParam0, 0))
	{
		return 1;
	}
	if (func_105())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2689235[iParam0 /*453*/].f_197, 2))
	{
		return 1;
	}
	return 0;
}

bool func_105()
{
	return BitTest(Global_2621446, 3);
}

int func_106(bool bParam0, bool bParam1, var uParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != bParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_107(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8136, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 13);
	}
}

void func_108()
{
	Global_20471 = 0;
	func_81();
}

int func_109(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_110()
{
	int iVar0;
	
	if (PED::IS_PED_INJURED(iLocal_141))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_121))
		{
			HUD::REMOVE_BLIP(&iLocal_121);
		}
		iVar0++;
	}
	if (PED::IS_PED_INJURED(iLocal_142))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_123))
		{
			HUD::REMOVE_BLIP(&iLocal_123);
		}
		iVar0++;
	}
	if (PED::IS_PED_INJURED(iLocal_143))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_124))
		{
			HUD::REMOVE_BLIP(&iLocal_124);
		}
		iVar0++;
	}
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_86 + 8000)
		{
			func_111(iLocal_140, "GENERIC_FRIGHTENED_HIGH", 3);
			iLocal_86 = MISC::GET_GAME_TIMER();
		}
	}
	if (iVar0 == 3)
	{
		bLocal_78 = true;
	}
}

void func_111(int iParam0, char* sParam1, int iParam2)
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_112(iParam2), 1);
}

int func_112(int iParam0)
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

void func_113()
{
	int iVar0;
	struct<3> Var1[4];
	
	Var1[0 /*3*/] = { 986.8661f, -113.7463f, 72.9153f };
	Var1[1 /*3*/] = { 964.0147f, -144.0337f, 73.4875f };
	Var1[2 /*3*/] = { 954.2817f, -137.429f, 73.4781f };
	Var1[3 /*3*/] = { 976.5977f, -149.0529f, 73.2404f };
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_59, 10f, 10f, 10f, false, true, 0))
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_150[iVar0] = PED::CREATE_PED(22, iLocal_371, Var1[iVar0 /*3*/], 0f, true, true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_150[iVar0], joaat("weapon_sawnoffshotgun"), 999999, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_150[iVar0], iLocal_374);
			TASK::TASK_COMBAT_PED(iLocal_150[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
			PED::SET_PED_CONFIG_FLAG(iLocal_150[iVar0], 42, true);
			iLocal_134[iVar0] = func_175(iLocal_150[iVar0], 1, 0);
			iVar0++;
		}
		iLocal_76 = 1;
	}
}

void func_114()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (PED::IS_PED_INJURED(iLocal_150[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_134[iVar0]))
			{
				HUD::REMOVE_BLIP(&(iLocal_134[iVar0]));
			}
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 4)
	{
		bLocal_77 = true;
	}
}

void func_115(var uParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_2815059.f_4660, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(bParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_116(uParam0->f_3))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_116(sVar0))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

bool func_116(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_117()
{
	if (PED::IS_PED_INJURED(iLocal_142))
	{
		return 1;
	}
	else if (PED::IS_PED_ON_FOOT(iLocal_142))
	{
		return 1;
	}
	if (PED::IS_PED_INJURED(iLocal_141))
	{
		return 1;
	}
	if (PED::IS_PED_INJURED(iLocal_143))
	{
		return 1;
	}
	return 0;
}

int func_118()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_155, Local_59, 10f, 10f, 10f, false, true, 0))
		{
			bLocal_74 = true;
			return 1;
		}
	}
	return 0;
}

int func_119()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false))
	{
		if (iLocal_84 > 0)
		{
			func_120();
		}
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_155, 20f, 20f, 10f, false, true, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_155, PLAYER::PLAYER_PED_ID(), true))
			{
				if (iLocal_438 == -1)
				{
					iLocal_438 = MISC::GET_GAME_TIMER();
				}
				iLocal_84++;
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_155);
				if (SYSTEM::TIMERA() > 10000)
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) > 49)
					{
						func_164(&uLocal_176, cLocal_387, "RESNA_STRG", 4, 0, 0, 0);
					}
					else if (!PED::IS_PED_INJURED(iLocal_142))
					{
						func_164(&uLocal_176, cLocal_387, "RESNA_FOFF", 4, 0, 0, 0);
					}
					SYSTEM::SETTIMERA(0);
				}
			}
			if (iLocal_84 > 30)
			{
				return 1;
			}
		}
		else
		{
			iLocal_84 = 0;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_155))
		{
			return 1;
		}
	}
	return 0;
}

void func_120()
{
	if (!PED::IS_PED_INJURED(iLocal_142))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_142, false))
		{
			if (!TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_142))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_142, joaat("weapon_microsmg"), false) || (WEAPON::HAS_PED_GOT_WEAPON(iLocal_142, joaat("weapon_microsmg"), false) && WEAPON::GET_PED_AMMO_BY_TYPE(iLocal_142, joaat("AMMO_SHOTGUN")) == 0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_142, joaat("weapon_microsmg"), 68, true, true);
				}
				else
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_142, joaat("weapon_microsmg"), true);
				}
				TASK::TASK_DRIVE_BY(iLocal_142, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 100, true, -753768974);
			}
		}
	}
	if ((MISC::GET_GAME_TIMER() - iLocal_438) > 250)
	{
		if (!PED::IS_PED_INJURED(iLocal_141))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_141, false) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_141, 2104565373) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_141, 2104565373) != 0)
			{
				TASK::CLEAR_PED_TASKS(iLocal_141);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_141, joaat("weapon_microsmg"), 68, true, true);
				TASK::TASK_DRIVE_BY(iLocal_141, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 100, false, -753768974);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_143))
	{
		if ((PED::IS_PED_IN_ANY_VEHICLE(iLocal_143, false) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_143, 2104565373) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_143, 2104565373) != 0)
		{
			TASK::CLEAR_PED_TASKS(iLocal_143);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_143, joaat("weapon_pistol"), 68, true, true);
			TASK::TASK_DRIVE_BY(iLocal_143, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 100, false, -753768974);
			PED::SET_PED_KEEP_TASK(iLocal_143, true);
		}
	}
	if (!iLocal_366)
	{
		iLocal_366 = 1;
	}
}

int func_121()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false))
	{
		if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_155) < 700f || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_155) < 700f)
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

int func_122()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false))
	{
		if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_155, 0, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_155, 1, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_155, 4, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_155, 5, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_123(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1), false))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, true);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, false);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam1, true), true);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, true);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, false);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_124()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false))
		{
			func_125(&uLocal_341, iLocal_155, 0, 0, 1, 1, 1);
		}
		else
		{
			func_115(&uLocal_341, 0, 0);
		}
	}
	else
	{
		func_115(&uLocal_341, 0, 0);
	}
}

void func_125(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_126(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_126(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)
{
	uParam0->f_6 = 0;
	func_127(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_127(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_116(iVar0))
	{
		func_152();
	}
	if (func_151(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), true);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_146(uParam0, bParam7, bParam9, 0))
			{
				func_142(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_131(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!func_116(iVar0))
							{
								func_62(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_130(1);
								}
							}
						}
					}
				}
			}
			else if (func_131(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!func_116(iVar0))
						{
							func_62(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_130(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
			{
				if (func_116(sParam5))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
					{
						func_115(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_115(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_115(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_115(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_115(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_115(uParam0, iVar0, 1);
				}
			}
			if (!func_146(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_129(uParam0))
				{
					func_128(uParam0);
				}
			}
		}
	}
	else
	{
		func_115(uParam0, iVar0, 0);
	}
}

void func_128(var uParam0)
{
	if (func_151(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(false);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_129(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_130(bool bParam0)
{
	switch (Global_43052)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_113386.f_10049.f_100++;
			}
			return Global_113386.f_10049.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_113386.f_10049.f_101++;
			}
			return Global_113386.f_10049.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_113386.f_10049.f_102++;
			}
			return Global_113386.f_10049.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_131(char* sParam0)
{
	if (!func_132(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_116(sParam0)) || func_116("CMN_HINT"))
		{
			HUD::CLEAR_HELP(true);
		}
		return 0;
	}
	switch (Global_43052)
	{
		case 0:
		case 3:
			if (func_130(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_130(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_130(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_132(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_141(0))
	{
		return 0;
	}
	if (func_140())
	{
		return 0;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_75485)
	{
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_60335)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_139() || func_138(Global_4718592.f_168757)) || func_137())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = func_136(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("apc") && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("akula") && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("riot2") && iVar1 == 0) && func_135(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1957727)
	{
		return 0;
	}
	if (func_133(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_133(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_134(iParam0, 1, 1))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
		else if ((Global_1575058 && iParam0 == PLAYER::PLAYER_ID()) && func_134(iParam0, 1, 0))
		{
			return Global_2689235[iParam0 /*453*/].f_318.f_6 != -1;
		}
	}
	return 0;
}

int func_134(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_135(int iParam0, int iParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
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
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_136(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
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

var func_137()
{
	return Global_2714762.f_19;
}

bool func_138(int iParam0)
{
	return iParam0 == 51;
}

var func_139()
{
	return Global_2714762.f_18;
}

bool func_140()
{
	return MISC::GET_GAME_TIMER() <= Global_23150.f_6269 + 100;
}

int func_141(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_20266.f_1 > 3)
		{
			if (BitTest(Global_8136, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_142(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1581357 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_115(uParam0, 0, 0);
	}
	if (func_145(Param2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_143())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
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
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, true, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_143()
{
	return func_144(PLAYER::PLAYER_ID());
}

int func_144(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_145(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_146(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
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
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (func_150(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_149(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_149(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_150(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_129(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_150(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_149(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_149(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_150(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
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
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (!func_150(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_149(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_149(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_150(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (func_148(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_147(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_147(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_148(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_129(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_132(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_152();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_147(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, true);
			PAD::DISABLE_CONTROL_ACTION(0, 80, true);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_148(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_149(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, true);
			PAD::DISABLE_CONTROL_ACTION(0, 80, true);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_150(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_132(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_151(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), false))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_152()
{
	MISC::SET_BIT(&Global_8137, 4);
}

void func_153()
{
	if (!PED::IS_PED_INJURED(iLocal_143) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false))
	{
		if (!PED::IS_PED_IN_VEHICLE(iLocal_143, iLocal_155, false))
		{
			if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_155, sLocal_386, "IG_1_ALT1_EXIT_VAN_BURR", 3))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_143, iLocal_155, 1);
			}
		}
	}
}

void func_154()
{
	if (!PED::IS_PED_INJURED(iLocal_142))
	{
		TASK::TASK_COMBAT_PED(iLocal_142, PLAYER::PLAYER_PED_ID(), 0, 16);
		PED::SET_PED_KEEP_TASK(iLocal_142, true);
		func_164(&uLocal_176, cLocal_387, "RESNA_ATT", 4, 0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_141))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_141, joaat("weapon_smg"), 68, true, true);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_141, joaat("weapon_smg"), true);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_141, true);
		TASK::TASK_COMBAT_PED(iLocal_141, PLAYER::PLAYER_PED_ID(), 0, 16);
		PED::SET_PED_KEEP_TASK(iLocal_141, true);
	}
	if (!PED::IS_PED_INJURED(iLocal_143))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_143, joaat("weapon_pistol"), 68, true, true);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_143, joaat("weapon_pistol"), true);
		TASK::TASK_COMBAT_PED(iLocal_143, PLAYER::PLAYER_PED_ID(), 0, 16);
		PED::SET_PED_KEEP_TASK(iLocal_143, true);
	}
	func_155();
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_159);
	iLocal_50 = 2;
}

void func_155()
{
	if (!PED::IS_PED_INJURED(iLocal_142))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_123))
		{
			iLocal_123 = func_175(iLocal_142, 1, 0);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_141))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_141, PLAYER::PLAYER_PED_ID(), 100f, 100f, 20f, false, true, 0))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_121))
			{
				iLocal_121 = func_175(iLocal_141, 1, 0);
			}
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_141);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_143))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_143, PLAYER::PLAYER_PED_ID(), 100f, 100f, 20f, false, true, 0))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_124))
			{
				iLocal_124 = func_175(iLocal_143, 1, 0);
			}
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_143);
		}
	}
}

void func_156()
{
	bool bVar0;
	
	bVar0 = false;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_155, PLAYER::PLAYER_PED_ID(), true))
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (PED::IS_PED_INJURED(iLocal_141))
	{
		bVar0 = true;
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_141, PLAYER::PLAYER_PED_ID(), true))
	{
		bVar0 = true;
	}
	if (PED::IS_PED_INJURED(iLocal_142))
	{
		bVar0 = true;
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_142, PLAYER::PLAYER_PED_ID(), true))
	{
		bVar0 = true;
	}
	if (PED::IS_PED_INJURED(iLocal_143))
	{
		bVar0 = true;
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_143, PLAYER::PLAYER_PED_ID(), true))
	{
		bVar0 = true;
	}
	if (PED::IS_PED_INJURED(iLocal_140))
	{
		bVar0 = true;
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), true))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_162();
		if (iLocal_365)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_107))
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_107) > 0.735f)
				{
					func_161();
				}
				else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_107) > 0.4f)
				{
					func_160();
				}
			}
			else if (!PED::IS_PED_INJURED(iLocal_140))
			{
				TASK::TASK_COWER(iLocal_140, -1);
			}
			if (iLocal_82)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, false);
			}
			HUD::REMOVE_BLIP(&iLocal_120);
			if (!HUD::DOES_BLIP_EXIST(iLocal_123))
			{
				iLocal_123 = func_175(iLocal_142, 1, 0);
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.3f);
			if (!func_208())
			{
				func_166(1);
			}
			func_158();
			func_154();
		}
		else
		{
			if (!PED::IS_PED_INJURED(iLocal_142))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false))
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_142, iLocal_155, PLAYER::PLAYER_PED_ID(), 8, 40f, 786469, -1f, -1f, true);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_142, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_142, true);
				}
			}
			func_157();
		}
	}
}

void func_157()
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_106))
	{
		PED::DETACH_SYNCHRONIZED_SCENE(iLocal_106);
	}
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_107))
	{
		PED::DETACH_SYNCHRONIZED_SCENE(iLocal_107);
	}
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_140, true);
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_140, sLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 3))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_140, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			PED::SET_PED_KEEP_TASK(iLocal_140, true);
		}
	}
	func_154();
	func_255();
}

void func_158()
{
	Global_20471 = 0;
	func_159();
}

void func_159()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22616 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21605 = 6;
	}
}

void func_160()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false) && !PED::IS_PED_INJURED(iLocal_140))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_140, iLocal_155, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_155, sLocal_175), 0.421191f, -1.99042f, 0.20134f, -5.08056E-06f, -6.5249E-06f, 174.612f, true, false, false, false, 2, true, 0);
		ENTITY::SET_ENTITY_COORDS(iLocal_140, ENTITY::GET_ENTITY_COORDS(iLocal_155, false), true, false, false, true);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_140);
		TASK::TASK_PLAY_ANIM(iLocal_140, sLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 1000f, -1000f, -1, 9, 0f, false, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_140, true);
		if (!HUD::DOES_BLIP_EXIST(iLocal_123))
		{
			iLocal_123 = func_175(iLocal_142, 1, 0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false))
		{
			VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_155, true);
		}
		iLocal_365 = 0;
	}
}

void func_161()
{
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false) && !PED::IS_PED_INJURED(iLocal_140)) && !PED::IS_PED_INJURED(iLocal_141)) && !PED::IS_PED_INJURED(iLocal_143))
	{
		PED::SET_PED_INTO_VEHICLE(iLocal_143, iLocal_155, 2);
		PED::SET_PED_INTO_VEHICLE(iLocal_141, iLocal_155, 1);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_140, iLocal_155, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_155, sLocal_175), 0.421191f, -1.99042f, 0.20134f, -5.08056E-06f, -6.5249E-06f, 174.612f, true, false, false, false, 2, true, 0);
		ENTITY::SET_ENTITY_COORDS(iLocal_140, ENTITY::GET_ENTITY_COORDS(iLocal_155, false), true, false, false, true);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_140);
		TASK::TASK_PLAY_ANIM(iLocal_140, sLocal_386, "IG_1_ALT1_GIRL_IN_VAN_LOOP", 1000f, -1000f, -1, 9, 0f, false, false, false);
		PED::SET_PED_KEEP_TASK(iLocal_140, true);
		if (!HUD::DOES_BLIP_EXIST(iLocal_123))
		{
			iLocal_123 = func_175(iLocal_142, 1, 0);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false))
		{
			VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_155, false);
		}
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		iLocal_365 = 0;
	}
}

void func_162()
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_118))
	{
		if (!PED::IS_PED_INJURED(iLocal_141))
		{
			TASK::CLEAR_PED_TASKS(iLocal_141);
		}
		if (!PED::IS_PED_INJURED(iLocal_143))
		{
			TASK::CLEAR_PED_TASKS(iLocal_143);
		}
		if (!PED::IS_PED_INJURED(iLocal_140))
		{
			TASK::CLEAR_PED_TASKS(iLocal_140);
		}
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_155, -4f, true);
	}
}

void func_163()
{
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), true) || FIRE::IS_ENTITY_ON_FIRE(iLocal_140))
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_118))
			{
				func_162();
			}
			func_157();
		}
	}
}

bool func_164(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_82(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21612 = 0;
	Global_21614 = 0;
	Global_21619 = 0;
	Global_22596 = 0;
	Global_22598 = 0;
	Global_22602 = 0;
	Global_2883585 = 0;
	return func_68(sParam2, iParam3, 0);
}

int func_165()
{
	func_33();
	return Global_113386.f_2363.f_539.f_4321;
}

int func_166(int iParam0)
{
	if (func_169())
	{
		Global_113376 = 1;
		Global_113373 = MISC::GET_GAME_TIMER();
		if (func_27(Global_113375))
		{
			func_167(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE");
		if (iParam0 && func_27(Global_113375))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_167(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_113386.f_24995.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_62(func_168(iParam0), -1);
					Global_113386.f_24995.f_2++;
					MISC::SET_BIT(&Global_113382, 0);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_113382, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_62(func_168(iParam0), -1);
					Global_113386.f_24995.f_3++;
					MISC::SET_BIT(&Global_113382, 1);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_113382, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_62(func_168(iParam0), -1);
					Global_113386.f_24995.f_4++;
					MISC::SET_BIT(&Global_113382, 2);
				}
			}
			break;
	}
}

char* func_168(int iParam0)
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

int func_169()
{
	switch (func_170(&Global_32019, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_170(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_97919.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_174(0))
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23011.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_43052 = iParam2;
		Global_43014 = *uParam0;
		Global_43015 = iParam4;
		Global_43013 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_43013 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_43013)
			{
				if (Global_43019[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_43014 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_172(iParam2))
		{
			return 0;
		}
		if (Global_43013 == 8)
		{
			return 0;
		}
		Global_43016++;
		*uParam0 = Global_43016;
		Global_43019[Global_43013 /*4*/] = Global_43016;
		Global_43019[Global_43013 /*4*/].f_1 = iParam1;
		Global_43019[Global_43013 /*4*/].f_2 = iParam2;
		Global_43019[Global_43013 /*4*/].f_3 = 0;
		Global_43013++;
		if (iParam4 != 0)
		{
			func_171(uParam0, iParam4);
		}
	}
	return 2;
}

void func_171(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_43013 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_43013)
	{
		if (Global_43019[iVar0 /*4*/] == *uParam0)
		{
			Global_43019[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_172(int iParam0)
{
	return func_173(iParam0, Global_43052);
}

int func_173(int iParam0, int iParam1)
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

int func_174(int iParam0)
{
	if (Global_43052 == 15)
	{
		return 0;
	}
	if (func_172(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_175(int iParam0, bool bParam1, int iParam2)
{
	iParam2 = iParam2;
	return func_54(iParam0, bParam1, 145);
}

void func_176()
{
	if (iLocal_361)
	{
	}
	else
	{
		iLocal_361 = 1;
	}
}

int func_177()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_44) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_188())
		{
			return 0;
		}
	}
	if (func_184())
	{
		return 1;
	}
	if (func_178(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_178(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_35(func_165()))
		{
			iVar36 = func_32();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_113386.f_18574[iVar32 /*6*/], 2) && !BitTest(Global_113386.f_18574[iVar32 /*6*/], 3))
				{
					func_179(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_179(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_180(uParam1, "Abigail1", func_182(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 1:
			func_180(uParam1, "Abigail2", func_182(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 2:
			func_180(uParam1, "Barry1", func_182(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 3:
			func_180(uParam1, "Barry2", func_182(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 4:
			func_180(uParam1, "Barry3", func_182(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 5:
			func_180(uParam1, "Barry3A", func_182(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 6:
			func_180(uParam1, "Barry3C", func_182(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 7:
			func_180(uParam1, "Barry4", func_182(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_181(iParam0), 0, 0);
			break;
		
		case 8:
			func_180(uParam1, "Dreyfuss1", func_182(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 9:
			func_180(uParam1, "Epsilon1", func_182(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 10:
			func_180(uParam1, "Epsilon2", func_182(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 11:
			func_180(uParam1, "Epsilon3", func_182(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 12:
			func_180(uParam1, "Epsilon4", func_182(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 13:
			func_180(uParam1, "Epsilon5", func_182(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 14:
			func_180(uParam1, "Epsilon6", func_182(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 15:
			func_180(uParam1, "Epsilon7", func_182(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 16:
			func_180(uParam1, "Epsilon8", func_182(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 17:
			func_180(uParam1, "Extreme1", func_182(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 18:
			func_180(uParam1, "Extreme2", func_182(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 19:
			func_180(uParam1, "Extreme3", func_182(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 20:
			func_180(uParam1, "Extreme4", func_182(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 21:
			func_180(uParam1, "Fanatic1", func_182(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_181(iParam0), 1, 0);
			break;
		
		case 22:
			func_180(uParam1, "Fanatic2", func_182(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_181(iParam0), 1, 0);
			break;
		
		case 23:
			func_180(uParam1, "Fanatic3", func_182(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_181(iParam0), 0, 1);
			break;
		
		case 24:
			func_180(uParam1, "Hao1", func_182(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_181(iParam0), 0, 1);
			break;
		
		case 25:
			func_180(uParam1, "Hunting1", func_182(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 26:
			func_180(uParam1, "Hunting2", func_182(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 27:
			func_180(uParam1, "Josh1", func_182(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 28:
			func_180(uParam1, "Josh2", func_182(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 29:
			func_180(uParam1, "Josh3", func_182(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 30:
			func_180(uParam1, "Josh4", func_182(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 31:
			func_180(uParam1, "Maude1", func_182(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 32:
			func_180(uParam1, "Minute1", func_182(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 33:
			func_180(uParam1, "Minute2", func_182(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 34:
			func_180(uParam1, "Minute3", func_182(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 35:
			func_180(uParam1, "MrsPhilips1", func_182(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 36:
			func_180(uParam1, "MrsPhilips2", func_182(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 37:
			func_180(uParam1, "Nigel1", func_182(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 38:
			func_180(uParam1, "Nigel1A", func_182(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 39:
			func_180(uParam1, "Nigel1B", func_182(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_181(iParam0), 1, 1);
			break;
		
		case 40:
			func_180(uParam1, "Nigel1C", func_182(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_181(iParam0), 1, 1);
			break;
		
		case 41:
			func_180(uParam1, "Nigel1D", func_182(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_181(iParam0), 1, 1);
			break;
		
		case 42:
			func_180(uParam1, "Nigel2", func_182(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 43:
			func_180(uParam1, "Nigel3", func_182(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 1, 1);
			break;
		
		case 44:
			func_180(uParam1, "Omega1", func_182(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 45:
			func_180(uParam1, "Omega2", func_182(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 46:
			func_180(uParam1, "Paparazzo1", func_182(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 47:
			func_180(uParam1, "Paparazzo2", func_182(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 48:
			func_180(uParam1, "Paparazzo3", func_182(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 49:
			func_180(uParam1, "Paparazzo3A", func_182(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 50:
			func_180(uParam1, "Paparazzo3B", func_182(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 51:
			func_180(uParam1, "Paparazzo4", func_182(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 52:
			func_180(uParam1, "Rampage1", func_182(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 54:
			func_180(uParam1, "Rampage3", func_182(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 55:
			func_180(uParam1, "Rampage4", func_182(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 56:
			func_180(uParam1, "Rampage5", func_182(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_181(iParam0), 0, 0);
			break;
		
		case 53:
			func_180(uParam1, "Rampage2", func_182(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_181(iParam0), 1, 0);
			break;
		
		case 57:
			func_180(uParam1, "TheLastOne", func_182(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 58:
			func_180(uParam1, "Tonya1", func_182(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 59:
			func_180(uParam1, "Tonya2", func_182(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 60:
			func_180(uParam1, "Tonya3", func_182(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 61:
			func_180(uParam1, "Tonya4", func_182(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		case 62:
			func_180(uParam1, "Tonya5", func_182(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_181(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_180(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_181(int iParam0)
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

struct<2> func_182(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_183(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_183(int iParam0)
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

int func_184()
{
	if (func_187() && !func_188())
	{
		return 1;
	}
	if (func_186() && func_185())
	{
		return 1;
	}
	return 0;
}

bool func_185()
{
	return Global_113104 > 0;
}

int func_186()
{
	if (Global_97363 != -1)
	{
		return 1;
	}
	return 0;
}

int func_187()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 20);
	}
	return 0;
}

int func_188()
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_189()
{
	func_195(39, 1);
	func_195(40, 1);
	func_195(41, 1);
	func_195(42, 1);
	func_195(43, 1);
	func_195(44, 1);
	fLocal_55 = 321f;
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_372, true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_373, true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_371, true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_369, true);
	STREAMING::REQUEST_MODEL(iLocal_373);
	STREAMING::REQUEST_MODEL(iLocal_371);
	STREAMING::REQUEST_MODEL(iLocal_372);
	STREAMING::REQUEST_MODEL(iLocal_369);
	STREAMING::REQUEST_ANIM_DICT(sLocal_386);
	STREAMING::REQUEST_MODEL(joaat("prop_ld_test_01"));
	if (((((STREAMING::HAS_MODEL_LOADED(iLocal_373) && STREAMING::HAS_MODEL_LOADED(iLocal_371)) && STREAMING::HAS_MODEL_LOADED(iLocal_372)) && STREAMING::HAS_MODEL_LOADED(iLocal_369)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_test_01"))) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_386))
	{
		func_194();
		func_193();
		func_192();
		func_191();
		EVENT::ADD_SHOCKING_EVENT_AT_POSITION(111, Local_52, -1f);
		iLocal_162 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_59 - Vector(50f, 50f, 50f), Local_59 + Vector(50f, 50f, 50f), false, true, true, true);
		switch (func_165())
		{
			case 0:
				sLocal_174 = "MICHAEL";
				break;
			
			case 1:
				sLocal_174 = "FRANKLIN";
				break;
			
			case 2:
				sLocal_174 = "TREVOR";
				break;
		}
		func_190(&uLocal_176, 0, PLAYER::PLAYER_PED_ID(), sLocal_174, 0, 1);
		Local_165 = { -3057.362f, 441.8271f, 6.151212f };
		Local_168 = { -0.34992f, -0.199749f, -98.79861f };
		fLocal_359 = 116f;
		Local_56 = { -3053.721f, 440.9221f, 5.3566f };
		iLocal_164 = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), ENTITY::GET_ENTITY_COORDS(iLocal_155, false), true, true, false);
		ENTITY::SET_ENTITY_ROTATION(iLocal_164, ENTITY::GET_ENTITY_ROTATION(iLocal_155, 2), 2, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_164, true);
		ENTITY::SET_ENTITY_COLLISION(iLocal_164, false, false);
		return 1;
	}
	return 0;
}

void func_190(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_78319)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

void func_191()
{
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_141, false);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_155, true);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_155, 3);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_142, iLocal_374);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_143, iLocal_374);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_141, iLocal_374);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_143, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_142, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_141, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_142, 42, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_141, 42, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_143, 42, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_143, 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_143, 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_143, 13, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_143, 50, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 2, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 13, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 50, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 6, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 2, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 13, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 50, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_141, 2, true);
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_143, 2);
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_142, 2);
	PED::SET_PED_COMBAT_MOVEMENT(iLocal_141, 2);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_143, false);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_142, false);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_141, false);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_143, joaat("weapon_pistol"), 68, false, true);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_142, joaat("weapon_sawnoffshotgun"), 68, false, true);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_141, joaat("weapon_microsmg"), 68, false, true);
	PED::SET_PED_DIES_IN_VEHICLE(iLocal_143, false);
	PED::SET_PED_DIES_IN_VEHICLE(iLocal_142, false);
	PED::SET_PED_DIES_IN_VEHICLE(iLocal_141, false);
	PED::SET_PED_CONFIG_FLAG(iLocal_142, 115, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_141, 115, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_143, 115, true);
	func_190(&uLocal_176, 2, iLocal_142, "LostKidnapper", 0, 1);
}

void func_192()
{
	int iVar0;
	
	iVar0 = 500;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false))
	{
		iLocal_140 = PED::CREATE_PED(5, iLocal_373, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, Local_353), fLocal_55, true, true);
	}
	else
	{
		iLocal_140 = PED::CREATE_PED(5, iLocal_373, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), Local_353), fLocal_55, true, true);
	}
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_140, "LostKidnapGirl");
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_140, false);
	PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_140, false);
	ENTITY::SET_ENTITY_HEALTH(iLocal_140, iVar0, 0);
	PED::SET_PED_MAX_HEALTH(iLocal_140, iVar0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_140, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_140, iLocal_375);
	func_190(&uLocal_176, 1, iLocal_140, "LostKidnapGirl", 0, 1);
}

void func_193()
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
	if (Var0.f_0 > Local_52.f_0)
	{
		iLocal_155 = VEHICLE::CREATE_VEHICLE(iLocal_369, -1116.946f, 560.8027f, 101.3588f, 116.0592f, true, true, false);
		Local_62 = { -1247.233f, 515.3996f, 94.1352f };
	}
	else
	{
		iLocal_155 = VEHICLE::CREATE_VEHICLE(iLocal_369, Local_52, 305f, true, true, false);
		Local_62 = { -852.9832f, 441.7806f, 86.0437f };
	}
	VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_155);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_155, true, true, false);
	iLocal_142 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_155, 22, iLocal_372, -1, true, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_142, 2, true);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_142, joaat("weapon_sawnoffshotgun"), 68, true, true);
	WEAPON::SET_CURRENT_PED_WEAPON(iLocal_142, joaat("weapon_sawnoffshotgun"), true);
	iLocal_143 = PED::CREATE_PED(22, iLocal_372, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, Local_356), fLocal_55, true, true);
	iLocal_141 = PED::CREATE_PED(22, iLocal_371, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_155, Local_356), fLocal_55, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, true);
	iLocal_82 = 1;
	PED::SET_PED_SHOOT_RATE(iLocal_141, 25);
	PED::SET_PED_FIRING_PATTERN(iLocal_141, -753768974);
	PED::SET_PED_SHOOT_RATE(iLocal_143, 35);
	PED::SET_PED_FIRING_PATTERN(iLocal_141, 1566631136);
	PED::SET_PED_ACCURACY(iLocal_142, 12);
	PED::SET_PED_ACCURACY(iLocal_143, 10);
	PED::SET_PED_ACCURACY(iLocal_141, 15);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_155, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_372);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_371);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_369);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_155, false, 0);
	VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iLocal_155, 2f);
}

void func_194()
{
	PED::ADD_RELATIONSHIP_GROUP("re_snatched badGuys", &iLocal_374);
	PED::ADD_RELATIONSHIP_GROUP("re_snatched pedVictim", &iLocal_375);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_374, joaat("player"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_374, iLocal_375);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_375, joaat("player"));
}

void func_195(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_202(iParam0, 2, 1))
		{
			func_201(iParam0, 2, 1);
		}
	}
	else if (func_202(iParam0, 2, 1))
	{
		func_196(iParam0, 2, 1);
	}
}

void func_196(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_100493.f_1393[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_22() == 0)
		{
			iVar0 = func_199(func_200(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_197(func_200(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_113386.f_668[iParam0]), iParam1);
	}
}

void func_197(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_198(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_198(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_25();
		if (iVar1 > -1)
		{
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

int func_199(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_198(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 11352;
			break;
		
		case 45:
			return 3811;
			break;
		
		case 46:
			return 5386;
			break;
		
		case 47:
			return 6158;
			break;
		
		case 48:
			return 7235;
			break;
		
		case 49:
			return 7881;
			break;
		
		case 52:
			return 8917;
			break;
		
		case 50:
			return 8268;
			break;
		
		case 51:
			return 8270;
			break;
		
		case 53:
			return 9557;
			break;
		
		case 54:
			return 9633;
			break;
		
		case 55:
			return 9848;
			break;
		
		case 56:
			return 9916;
			break;
		
		case 57:
			return 9918;
			break;
		
		default:
			break;
	}
	return 13122;
}

void func_201(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_100493.f_1393[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_22() == 0)
		{
			iVar0 = func_199(func_200(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_197(func_200(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_113386.f_668[iParam0]), iParam1);
	}
}

int func_202(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return BitTest(Global_100493.f_1393[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_22() == 0)
		{
			return BitTest(func_199(func_200(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return BitTest(Global_113386.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_203()
{
	float fVar0;
	
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_141) && ENTITY::DOES_ENTITY_EXIST(iLocal_143)) && ENTITY::DOES_ENTITY_EXIST(iLocal_140)) && ENTITY::DOES_ENTITY_EXIST(iLocal_155))
	{
		STREAMING::REQUEST_ANIM_DICT("random@kidnap_girl");
		if (STREAMING::HAS_ANIM_DICT_LOADED("random@kidnap_girl"))
		{
			fVar0 = 1.25f;
			switch (iLocal_439)
			{
				case 0:
					if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false) && !PED::IS_PED_INJURED(iLocal_140)) && !PED::IS_PED_INJURED(iLocal_141)) && !PED::IS_PED_INJURED(iLocal_143))
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_117))
						{
							Local_110 = { 0f, 0f, 0f };
							Local_113 = { 0f, 0f, 0f };
							iLocal_117 = PED::CREATE_SYNCHRONIZED_SCENE(Local_110, Local_113, 2);
							PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_117, iLocal_155, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_155, sLocal_175));
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_117, true);
							PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iLocal_117, Local_110, Local_113, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_140, iLocal_117, sLocal_386, "IG_1_GIRL_ON_PHONE_LOOP", 1000f, -1000f, 4, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_141, iLocal_117, sLocal_386, "IG_1_GUY1_IN_VAN_LOOP", 1000f, -1000f, 4, 0, 1000f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_143, iLocal_117, sLocal_386, "IG_1_GUY2_IN_VAN_LOOP", 1000f, -1000f, 4, 0, 1000f, 0);
							PED::SET_PED_CAN_RAGDOLL(iLocal_140, true);
						}
						else
						{
							func_156();
							func_163();
							if (func_204())
							{
								func_157();
							}
						}
					}
					break;
				
				case 1:
					if ((!PED::IS_PED_INJURED(iLocal_140) && !PED::IS_PED_INJURED(iLocal_141)) && !PED::IS_PED_INJURED(iLocal_143))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_117))
						{
							TASK::CLEAR_PED_TASKS(iLocal_141);
							TASK::CLEAR_PED_TASKS(iLocal_140);
							TASK::CLEAR_PED_TASKS(iLocal_143);
						}
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_118))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false))
							{
								Local_110 = { 0f, 0f, 0f };
								Local_113 = { ENTITY::GET_ENTITY_ROTATION(iLocal_155, 2) };
								iLocal_118 = PED::CREATE_SYNCHRONIZED_SCENE(ENTITY::GET_ENTITY_COORDS(iLocal_155, false), Local_113.f_0, Local_113.f_1, ENTITY::GET_ENTITY_HEADING(iLocal_155), 2);
								if (iLocal_82)
								{
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_155, false);
									iLocal_82 = 0;
								}
								PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_118, fVar0);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_140, iLocal_118, sLocal_386, "IG_1_GIRL_DRAG_INTO_VAN", 1000f, -4f, 5, 0, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_141, iLocal_118, sLocal_386, "IG_1_GUY1_DRAG_INTO_VAN", 1000f, -4f, 5, 0, 1000f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_143, iLocal_118, sLocal_386, "IG_1_GUY2_DRAG_INTO_VAN", 1000f, -4f, 5, 0, 1000f, 0);
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_155, iLocal_118, "DRAG_INTO_VAN_BURR", sLocal_386, 1000f, -4f, 1, 1000f);
							}
						}
						else
						{
							if (!iLocal_80)
							{
								if ((((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_118) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(iLocal_155, false)) < 30f) && !func_90()) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_118) > 0.1f) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_118) < 0.4f)
								{
									if (func_164(&uLocal_176, cLocal_387, "RESNA_HELP", 4, func_205(), 0, 0))
									{
										iLocal_80 = 1;
									}
								}
							}
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_118) > 0.502f)
							{
								ENTITY::SET_ENTITY_INVINCIBLE(iLocal_140, true);
								ENTITY::SET_ENTITY_INVINCIBLE(iLocal_141, true);
								ENTITY::SET_ENTITY_INVINCIBLE(iLocal_143, true);
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_118) < 0.732f)
								{
									if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_155))
									{
										PED::SET_PED_CAN_RAGDOLL(iLocal_141, false);
										PED::SET_PED_CAN_RAGDOLL(iLocal_143, false);
										if (!PED::IS_PED_INJURED(iLocal_142) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false))
										{
											TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_142, iLocal_155, 30, 6000);
										}
										ENTITY::SET_ENTITY_INVINCIBLE(iLocal_140, true);
										PED::SET_PED_CONFIG_FLAG(iLocal_140, 106, true);
										PED::SET_PED_CONFIG_FLAG(iLocal_141, 106, true);
										PED::SET_PED_CONFIG_FLAG(iLocal_143, 106, true);
									}
									if (ENTITY::IS_ENTITY_DEAD(iLocal_155, false))
									{
										func_162();
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_140))
										{
											ENTITY::SET_ENTITY_HEALTH(iLocal_140, 0, 0);
										}
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_143))
										{
											ENTITY::SET_ENTITY_HEALTH(iLocal_143, 0, 0);
										}
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
										{
											ENTITY::SET_ENTITY_HEALTH(iLocal_141, 0, 0);
										}
										if (ENTITY::DOES_ENTITY_EXIST(iLocal_142))
										{
											ENTITY::SET_ENTITY_HEALTH(iLocal_142, 0, 0);
										}
										ENTITY::DETACH_ENTITY(iLocal_155, true, false);
									}
								}
								else
								{
									PED::SET_PED_CAN_RAGDOLL(iLocal_141, true);
									PED::SET_PED_CAN_RAGDOLL(iLocal_143, true);
									PED::SET_PED_CONFIG_FLAG(iLocal_140, 106, false);
									PED::SET_PED_CONFIG_FLAG(iLocal_141, 106, false);
									PED::SET_PED_CONFIG_FLAG(iLocal_143, 106, false);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_141, false);
									ENTITY::SET_ENTITY_INVINCIBLE(iLocal_143, false);
									func_162();
									func_161();
									iLocal_439 = 3;
									SYSTEM::SETTIMERB(0);
								}
							}
							else
							{
								func_156();
								func_163();
								if (func_204())
								{
									func_157();
								}
							}
						}
					}
					break;
				
				case 3:
					break;
				}
			}
	}
}

int func_204()
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 10f, 10f, 3f };
	Var3 = { -10f, -10f, -3f };
	if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_140, 31086, 0f, 0f, 0f), 15f, true))
	{
		return 1;
	}
	Var0 = { Var0 + PED::GET_PED_BONE_COORDS(iLocal_140, 31086, 0f, 0f, 0f) };
	Var3 = { Var3 + PED::GET_PED_BONE_COORDS(iLocal_140, 31086, 0f, 0f, 0f) };
	if (((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_smokegrenade"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_grenade"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_stickybomb"), true)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("vehicle_weapon_tank"), true))
	{
		return 1;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iLocal_140))
	{
		return 1;
	}
	return 0;
}

int func_205()
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { 75f, 75f, 20f };
	if (!PED::IS_PED_INJURED(iLocal_140))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), Var1, false, true, 0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_206()
{
}

int func_207()
{
	if (!func_172(5))
	{
		return 1;
	}
	if (func_184())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_188())
		{
			return 0;
		}
	}
	if (func_178(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_208()
{
	if ((Global_113375 == func_42() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_113376)
	{
		return 1;
	}
	return 0;
}

void func_209(bool bParam0)
{
	MISC::CLEAR_AREA(Local_171, 15f, true, false, false, false);
	MISC::CLEAR_AREA(-1133.993f, 558.3267f, 107.351f, 5f, true, false, false, false);
	if (bParam0)
	{
		iLocal_414 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(104.0503f, 560.4913f, -1126.376f) - Vector(5.75f, 19.25f, 39.75f), Vector(104.0503f, 560.4913f, -1126.376f) + Vector(5.75f, 19.25f, 39.75f), false, true, true, true);
		iLocal_413 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(9.361914f, 442.6952f, -3055.088f) + Vector(5f, 10f, 10f), Vector(9.361914f, 442.6952f, -3055.088f) - Vector(5f, 10f, 10f), false, true, true, true);
	}
	else
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_414, false);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_413, false);
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(107.351f, 558.3267f, -1133.993f) + Vector(7.25f, 25.25f, 25f), Vector(107.351f, 558.3267f, -1133.993f) - Vector(7.25f, 25.25f, 25f), !bParam0, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(9.361914f, 442.6952f, -3055.088f) + Vector(5f, 10f, 10f), Vector(9.361914f, 442.6952f, -3055.088f) - Vector(5f, 10f, 10f), !bParam0, true);
}

void func_210()
{
}

void func_211(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_42();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_213(iParam0);
	MISC::_0x65D2EBB47E1CEC21(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113372 = 0;
	func_212();
}

void func_212()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_213(int iParam0)
{
	Global_113375 = iParam0;
}

int func_214(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_151970)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_42();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_254())
		{
			return 0;
		}
	}
	Local_44 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_188())
			{
				return 0;
			}
		}
		if (!Global_113386.f_9085)
		{
			return 0;
		}
		if (func_16(0))
		{
			return 0;
		}
		if (func_184())
		{
			return 0;
		}
		if (func_253())
		{
			return 0;
		}
		if (Global_113375 != -1)
		{
			return 0;
		}
		if (func_35(func_165()))
		{
			if (func_178(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_44.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_252(iParam3))
		{
			return 0;
		}
		if (func_35(func_165()))
		{
			if (func_251(func_165()) == 4 || func_251(func_165()) == 5)
			{
				return 0;
			}
		}
		if (func_35(func_165()))
		{
			if (!func_250(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_249(Global_113386.f_24995.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_113377) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_248())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_239(4))
		{
			return 0;
		}
		if (!func_172(5))
		{
			return 0;
		}
		if (func_238(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_238(0, 0))
		{
			return 0;
		}
		if (Global_32106)
		{
			return 0;
		}
		if (func_252(30) && !func_238(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_35(func_165()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_113386.f_2363.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_113386.f_2363.f_539.f_2296[iVar4];
				if (func_237(iVar8))
				{
					if (func_215(iVar4))
					{
						if (!func_145(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var5) < (210f * 210f))
							{
								if (func_165() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_215(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_113386.f_2363.f_539.f_2296[iParam0];
	return func_216(iVar0);
}

int func_216(int iParam0)
{
	return func_217(iParam0, 1);
}

int func_217(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_237(iParam0))
	{
		return 0;
	}
	func_218(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_218(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_219(func_230(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_219(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_229(iParam0, iParam1))
	{
		iVar0 = func_228(iParam1);
		iVar1 = func_226(iParam0);
		iVar2 = (func_226(iParam0) - func_226(iParam1));
		iVar3 = (func_228(iParam0) - func_228(iParam1));
		iVar4 = (func_225(iParam0) - func_225(iParam1));
		iVar5 = (func_224(iParam0) - func_224(iParam1));
		iVar6 = (func_223(iParam0) - func_223(iParam1));
		iVar7 = (func_222(iParam0) - func_222(iParam1));
	}
	else
	{
		iVar0 = func_228(iParam0);
		iVar1 = func_226(iParam1);
		iVar2 = (func_226(iParam1) - func_226(iParam0));
		iVar3 = (func_228(iParam1) - func_228(iParam0));
		iVar4 = (func_225(iParam1) - func_225(iParam0));
		iVar5 = (func_224(iParam1) - func_224(iParam0));
		iVar6 = (func_223(iParam1) - func_223(iParam0));
		iVar7 = (func_222(iParam1) - func_222(iParam0));
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
		iVar4 = (iVar4 + func_221(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_220(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_220(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_221(int iParam0, int iParam1)
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

int func_222(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_223(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_224(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_225(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_226(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_227(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_227(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_228(int iParam0)
{
	return iParam0 & 15;
}

int func_229(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_237(iParam1) || !func_237(iParam0))
	{
		return 1;
	}
	iVar0 = func_226(iParam0);
	iVar1 = func_226(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_228(iParam0);
	iVar1 = func_228(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_225(iParam0);
	iVar1 = func_225(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_224(iParam0);
	iVar1 = func_224(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_223(iParam0);
	iVar1 = func_223(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_222(iParam0);
	iVar1 = func_222(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_230()
{
	var uVar0;
	
	func_236(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_235(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_234(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_233(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_232(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_231(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_231(var uParam0, int iParam1)
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

void func_232(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_233(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_228(*uParam0);
	iVar1 = func_226(*uParam0);
	if (iParam1 < 1 || iParam1 > func_221(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_234(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_235(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_236(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_237(int iParam0)
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
	iVar0 = func_222(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_223(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_224(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_226(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_228(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_225(iParam0);
	if (iVar5 < 1 || iVar5 > func_221(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_238(int iParam0, bool bParam1)
{
	if (BitTest(Global_113386.f_24995.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_239(int iParam0)
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_165();
				if (!func_35(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_247()) || Global_112433) || Global_31962) || func_246()) || func_80(8, -1)) || func_245()) || func_244()) || func_243()) || func_242()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_247()) || Global_31962) || func_246()) || func_80(8, -1)) || func_243()) || func_245()) || func_244()) || func_242()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_247()) || Global_112433) || Global_31962) || func_246()) || func_80(8, -1)) || func_243()) || func_245()) || func_244()) || func_242()) || Global_113386.f_7688.f_919[iVar0] == 5) || Global_43599 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_247()) || Global_112433) || Global_31962) || func_246()) || func_80(8, -1)) || func_245()) || func_244()) || func_242()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_247() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_80(8, -1)) || func_242()) || func_241()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_80(8, -1) || func_245()) || func_244()) || func_241()) || func_240())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_247()) || Global_31962) || func_246()) || func_80(8, -1)) || func_244()) || func_243()) || func_242()) || Global_113386.f_7688.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_247()) || func_244()) || Global_112433) || Global_31962) || func_246()) || Global_44238) || func_80(8, -1)) || func_243()) || func_241()) || func_242()) || Global_113386.f_7688.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_247()) || Global_112433) || Global_31962) || func_246()) || func_80(8, -1)) || func_243()) || func_241()) || func_245()) || func_244()) || func_242())
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

var func_240()
{
	return Global_100480.f_1;
}

int func_241()
{
	if (Global_97363 != -1)
	{
		return BitTest(Global_91229[Global_97363 /*34*/].f_15, 13);
	}
	return 0;
}

int func_242()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_243()
{
	if (Global_78579)
	{
		return 1;
	}
	else if (Global_63148 && !Global_63154)
	{
		return 1;
	}
	return 0;
}

bool func_244()
{
	return Global_100493.f_376 > 0;
}

bool func_245()
{
	return Global_100493.f_375 > 0;
}

var func_246()
{
	return Global_1575058;
}

int func_247()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_97919.f_44 == 1;
	}
	return 0;
}

int func_248()
{
	func_78();
	if (Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_249(int iParam0)
{
	return func_229(func_230(), iParam0);
}

int func_250(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_165();
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

int func_251(int iParam0)
{
	if (!func_35(iParam0))
	{
		return 7;
	}
	return Global_113386.f_7688.f_919[iParam0];
}

int func_252(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_254())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_113386.f_24995, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_113386.f_24995.f_1, iVar0);
	}
	return iVar1;
}

int func_253()
{
	int iVar0;
	
	if (Global_32110)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_254()
{
	int iVar0;
	
	if (Global_152259 == 2)
	{
		return 1;
	}
	else if (Global_152259 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
				}
				return 1;
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (BitTest(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_255()
{
	SYSTEM::WAIT(0);
	func_268(0);
	if (Global_32201)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
	}
	func_267();
	func_115(&uLocal_341, 0, 0);
	if (func_208())
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_162, false);
	}
	else
	{
		func_266(&Global_32019);
	}
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_140) && !PED::IS_PED_INJURED(iLocal_140)) && PED::IS_PED_GROUP_MEMBER(iLocal_140, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID())))
	{
		PED::REMOVE_PED_FROM_GROUP(iLocal_140);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_155, false))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_155, 1);
	}
	func_209(0);
	func_256(-1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_DRIVE_SOLO", true);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_256(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_42();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_208())
	{
		func_259(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113377 = MISC::GET_GAME_TIMER();
		func_258(30000);
		StringCopy(&cVar0, func_257(Global_113375, 1), 64);
		if (func_41(Global_113375) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_113374, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_113372, (MISC::GET_GAME_TIMER() - Global_113373), 0);
	}
	else if (BitTest(Global_113382, 0) && Global_113386.f_24995.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113382, 0);
	}
	func_266(&Global_32019);
	Global_113376 = 0;
	func_213(-1);
}

char* func_257(int iParam0, bool bParam1)
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

void func_258(int iParam0)
{
	Global_43603 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_259(int iParam0)
{
	func_260(iParam0, 0, func_265(iParam0));
}

void func_260(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_230();
	func_263(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_262(iParam0, &uVar0);
	Var1 = { func_261(&uVar0) };
}

struct<16> func_261(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_224(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_223(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_222(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_225(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_228(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_226(*uParam0), 64);
	return Var0;
}

void func_262(int iParam0, var uParam1)
{
	Global_113386.f_24995.f_43[iParam0] = *uParam1;
}

void func_263(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_226(*uParam0);
	iVar1 = func_228(*uParam0);
	iVar2 = func_225(*uParam0);
	iVar3 = func_224(*uParam0);
	iVar4 = func_223(*uParam0);
	iVar5 = func_222(*uParam0);
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
	iVar6 = func_221(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_221(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_264(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_264(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_236(uParam0, iParam1);
	func_235(uParam0, iParam2);
	func_234(uParam0, iParam3);
	func_232(uParam0, iParam5);
	func_233(uParam0, iParam4);
	func_231(uParam0, iParam6);
}

int func_265(int iParam0)
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

void func_266(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_43014)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_43013 = 0;
	Global_43015 = 0;
	Global_43052 = 15;
	Global_63151 = 0;
	Global_63152 = 0;
}

void func_267()
{
	Global_32197 = 0;
	Global_32198 = 0;
	Global_32200 = 0;
	Global_32201 = 0;
	Global_32202 = 0;
}

void func_268(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 58)
	{
		func_195(iVar0, bParam0);
		iVar0++;
	}
}

