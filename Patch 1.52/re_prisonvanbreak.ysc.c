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
	bool bLocal_47 = 0;
	bool bLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 16;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
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
	struct<3> Local_217 = { 0, 0, 0 } ;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222[3] = { 0, 0, 0 };
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225[3] = { 0, 0, 0 };
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	int iLocal_229 = 0;
	int iLocal_230 = 0;
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	var uLocal_233[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	bool bLocal_234 = 0;
	bool bLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	int iLocal_241 = 0;
	int iLocal_242 = 0;
	int iLocal_243 = 0;
	int iLocal_244 = 0;
	struct<3> Local_245 = { 0, 0, 0 } ;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	bool bLocal_256 = 0;
	int iLocal_257 = 0;
	bool bLocal_258 = 0;
	bool bLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264[2] = { 0, 0 };
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267[3] = { 0, 0, 0 };
	var uLocal_268[2] = { 0, 0 };
	struct<2> Local_269 = { 0, 5 } ;
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
	var uLocal_285 = 5;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
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
	Local_217 = { ScriptParam_269.f_1[0 /*3*/] };
	if (unk_0xED06FD5709A59F02(11))
	{
		func_148();
	}
	if (func_95(Local_217, -1, 0, 0, 0))
	{
		func_92(-1);
	}
	else
	{
		unk_0xD39E529EBE5DB04F();
	}
	while (true)
	{
		wait(0);
		if (unk_0x1116855A2A7A342C() || iLocal_246)
		{
			unk_0xAEF7C45DAFB8E9B0("RE_CR", 0);
			switch (iLocal_44)
			{
				case 0:
					if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_217, 100f, 100f, 100f, false, true, 0))
					{
						func_148();
					}
					if (iLocal_45)
					{
						iLocal_44 = 1;
					}
					else
					{
						func_91();
						iLocal_46 = 1;
					}
					break;
				
				case 1:
					unk_0xDC54E6DC6372260F(unk_0x460153A63B9477BC());
					func_90();
					func_88();
					if (!func_87())
					{
						func_84();
					}
					if (!bLocal_47)
					{
						func_73();
					}
					if (!bLocal_48 && !bLocal_256)
					{
						func_69();
					}
					if (iLocal_240 && !bLocal_47)
					{
						func_68(iLocal_222[0]);
						func_68(iLocal_222[1]);
						func_68(iLocal_222[2]);
					}
					if ((!iLocal_240 && !bLocal_256) && func_87())
					{
						func_67(iLocal_225[0], &(uLocal_233[0]), 1, 0.7f);
						func_67(iLocal_225[0], &(uLocal_233[1]), 5, 0.7f);
						func_67(iLocal_225[0], &(uLocal_233[2]), 0, 0.7f);
						func_67(iLocal_225[0], &(uLocal_233[3]), 4, 0.7f);
						func_67(iLocal_225[1], &(uLocal_233[4]), 1, 0.7f);
						func_67(iLocal_225[1], &(uLocal_233[5]), 5, 0.7f);
						func_67(iLocal_225[1], &(uLocal_233[6]), 0, 0.7f);
						func_67(iLocal_225[1], &(uLocal_233[7]), 4, 0.7f);
						func_67(iLocal_225[2], &(uLocal_233[8]), 1, 0.7f);
						func_67(iLocal_225[2], &(uLocal_233[9]), 5, 0.7f);
						func_67(iLocal_225[2], &(uLocal_233[10]), 0, 0.7f);
						func_67(iLocal_225[2], &(uLocal_233[11]), 4, 0.7f);
						func_67(iLocal_226, &(uLocal_233[12]), 1, 0.7f);
						func_67(iLocal_226, &(uLocal_233[13]), 5, 0.7f);
						func_67(iLocal_226, &(uLocal_233[14]), 0, 0.7f);
						func_67(iLocal_226, &(uLocal_233[15]), 4, 0.7f);
					}
					if (!iLocal_238)
					{
						func_65();
					}
					else
					{
						if (!bLocal_256)
						{
							func_64();
						}
						else if (!iLocal_253 && bLocal_47)
						{
							func_62();
						}
						if (!iLocal_257)
						{
							func_61();
						}
						func_60();
					}
					func_2();
					func_1();
					break;
			}
		}
		else
		{
			func_148();
		}
	}
}

void func_1()
{
}

void func_2()
{
	int iVar0;
	
	if (!iLocal_251)
	{
		if (unk_0xA59F96B50B97E63C(iLocal_222[0], 0) || unk_0x5AEB5DDFFAD43CA5(iLocal_222[0]))
		{
			func_59(&uLocal_52, 4);
			iLocal_251 = 1;
		}
	}
	if (!bLocal_234)
	{
		if ((unk_0xA59F96B50B97E63C(iLocal_218, 0) || unk_0x5AEB5DDFFAD43CA5(iLocal_218)) || unk_0xF2352D60B6FBEAAD(iLocal_218))
		{
			unk_0x78FCB2E22C41B9D5(joaat("prop_security_case_01"));
			if (unk_0x7D167B9A0CCDA347(joaat("prop_security_case_01")))
			{
				Local_245 = { unk_0x0FA535C0DBE5FD02(iLocal_218, 1067030938, 1069547520) };
				Local_245.f_2 = (Local_245.f_2 + 0.3f);
				iLocal_264[0] = unk_0xB1C0B7CD03D4467D(joaat("pickup_money_case"), Local_245 + Vector(-0.49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, 1, joaat("prop_security_case_01"));
				if (!unk_0x8F678487EEBD8CE4(uLocal_268[0]))
				{
					uLocal_268[0] = func_57(iLocal_264[0]);
				}
				bLocal_234 = true;
				func_59(&uLocal_52, 5);
			}
		}
	}
	if (!bLocal_235)
	{
		if ((unk_0xA59F96B50B97E63C(iLocal_219, 0) || unk_0x5AEB5DDFFAD43CA5(iLocal_219)) || unk_0xF2352D60B6FBEAAD(iLocal_219))
		{
			unk_0x78FCB2E22C41B9D5(joaat("prop_security_case_01"));
			if (unk_0x7D167B9A0CCDA347(joaat("prop_security_case_01")))
			{
				Local_245 = { unk_0x0FA535C0DBE5FD02(iLocal_219, 1067030938, 1069547520) };
				Local_245.f_2 = (Local_245.f_2 + 0.3f);
				iLocal_264[1] = unk_0xB1C0B7CD03D4467D(joaat("pickup_money_case"), Local_245 + Vector(-0.49f, 0f, 0f), -90f, 0f, 0f, 0, 5000, 2, 1, joaat("prop_security_case_01"));
				if (!unk_0x8F678487EEBD8CE4(uLocal_268[1]))
				{
					uLocal_268[1] = func_57(iLocal_264[1]);
				}
				bLocal_235 = true;
				func_59(&uLocal_52, 6);
			}
		}
	}
	if (!bLocal_256)
	{
		if (!iLocal_248)
		{
			if (unk_0xAE06B9E39EBDE049(iLocal_218))
			{
				if (unk_0xA59F96B50B97E63C(iLocal_218, 0) || unk_0x5AEB5DDFFAD43CA5(iLocal_218))
				{
					if (unk_0xCDF860E56BBCC6B4(iLocal_218, unk_0x9B0761B4C3EB8BC7(), 1))
					{
						unk_0x93370FA10F15BE44(&iLocal_265);
						iLocal_248 = 1;
						bLocal_48 = true;
						unk_0xEFBCE8F8316F89EA(5, iLocal_241, 1862763509);
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219))
						{
							unk_0x8FF9CE1C0F94F59A(iLocal_219, unk_0x9B0761B4C3EB8BC7(), 0, 16);
							unk_0xCBA6B2B569DCAFD8(iLocal_219, true);
							unk_0xDB8ED24252953530(iLocal_219, unk_0x9B0761B4C3EB8BC7());
							unk_0x17253AF44F6ED2DA(iLocal_219, 1);
							func_59(&uLocal_52, 5);
							func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (!iLocal_247)
		{
			if (unk_0xAE06B9E39EBDE049(iLocal_219))
			{
				if (unk_0xA59F96B50B97E63C(iLocal_219, 0) || unk_0x5AEB5DDFFAD43CA5(iLocal_219))
				{
					if (unk_0xCDF860E56BBCC6B4(iLocal_219, unk_0x9B0761B4C3EB8BC7(), 1))
					{
						unk_0x93370FA10F15BE44(&iLocal_266);
						iLocal_247 = 1;
						bLocal_48 = true;
						unk_0xEFBCE8F8316F89EA(5, iLocal_241, 1862763509);
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218))
						{
							unk_0x8FF9CE1C0F94F59A(iLocal_218, unk_0x9B0761B4C3EB8BC7(), 0, 16);
							unk_0xCBA6B2B569DCAFD8(iLocal_218, true);
							unk_0xDB8ED24252953530(iLocal_218, unk_0x9B0761B4C3EB8BC7());
							unk_0x17253AF44F6ED2DA(iLocal_218, 1);
							func_39(&uLocal_52, "recsbau", "recsb_deadcr", 3, 0, 0, 0);
						}
					}
				}
			}
		}
		if (func_38() || !unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), 310.6203f, 2642.854f, 43.5173f, 150f, 150f, 180f, false, true, 0))
		{
			if (unk_0x5AEB5DDFFAD43CA5(iLocal_218) && unk_0x5AEB5DDFFAD43CA5(iLocal_219))
			{
				if (func_38() && !unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), Local_217, 50f, 50f, 50f, false, true, 0))
				{
					func_7();
				}
				if (bLocal_48 && !bLocal_47)
				{
					if (!unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), 310.6203f, 2642.854f, 43.5173f, 150f, 150f, 180f, false, true, 0))
					{
						func_6(5);
						func_7();
					}
				}
			}
			else if (!unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), 310.6203f, 2642.854f, 43.5173f, 200f, 200f, 180f, false, true, 0))
			{
				func_5();
			}
		}
	}
	if (bLocal_256)
	{
		if (func_38())
		{
			if (unk_0xA59F96B50B97E63C(iLocal_218, 0) && unk_0xA59F96B50B97E63C(iLocal_219, 0))
			{
				func_7();
			}
			if (bLocal_256)
			{
				if (unk_0xAE06B9E39EBDE049(iLocal_218))
				{
					if (!unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_218, 150f, 150f, 150f, 0, 0, 0))
					{
						if (!bLocal_48)
						{
							func_6(6);
						}
						func_7();
					}
				}
				if (!unk_0xAE06B9E39EBDE049(iLocal_219))
				{
					if (!unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_219, 150f, 150f, 150f, 0, 0, 0))
					{
						if (!bLocal_48)
						{
							func_6(6);
						}
						func_7();
					}
				}
			}
		}
	}
	else if (!iLocal_240 && !bLocal_47)
	{
		unk_0x6F9222C1283B5094(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		unk_0x78FCB2E22C41B9D5(joaat("ambulance"));
		unk_0x131ED02492676000("random@countrysiderobbery");
		if (((unk_0xA59F96B50B97E63C(iLocal_218, 0) && unk_0xA59F96B50B97E63C(iLocal_219, 0)) && unk_0x7D167B9A0CCDA347(joaat("ambulance"))) && unk_0xC614DDE265D18415("random@countrysiderobbery"))
		{
			unk_0x93370FA10F15BE44(&iLocal_265);
			unk_0x93370FA10F15BE44(&iLocal_266);
			func_59(&uLocal_52, 5);
			func_59(&uLocal_52, 6);
			iVar0 = 0;
			while (iVar0 < iLocal_222)
			{
				if (unk_0x8F678487EEBD8CE4(iLocal_267[iVar0]))
				{
					unk_0x93370FA10F15BE44(&(iLocal_267[iVar0]));
				}
				iVar0++;
			}
			unk_0xEFBCE8F8316F89EA(1, iLocal_242, 1862763509);
			unk_0x40ECEB892E6BDDDB(5, true);
			unk_0x40ECEB892E6BDDDB(3, true);
			if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), 267.94f, 2700.48f, 43.6f, 15f, 15f, 15f, false, true, 0))
			{
				iLocal_227 = unk_0xCE4780E24AFDFBF9(joaat("ambulance"), 267.94f, 2700.48f, 43.1f, 180f, true, true, false);
			}
			else
			{
				iLocal_227 = unk_0xCE4780E24AFDFBF9(joaat("ambulance"), 185.94f, 2603.48f, 46.9f, 0f, true, true, false);
			}
			unk_0x8777F28BE786D09D(iLocal_227, 1);
			iLocal_220 = unk_0x6A7A2C83BD302BA4(iLocal_227, 20, joaat("s_m_m_paramedic_01"), -1, 1, true);
			iLocal_221 = unk_0x6A7A2C83BD302BA4(iLocal_227, 20, joaat("s_m_m_paramedic_01"), 0, 1, true);
			unk_0x6673CC701BC8E9C1(iLocal_220, 17, true);
			unk_0x6673CC701BC8E9C1(iLocal_221, 17, true);
			unk_0x694113444F21E39F(iLocal_220, 185, true);
			unk_0x694113444F21E39F(iLocal_221, 185, true);
			if (unk_0xAE06B9E39EBDE049(iLocal_218))
			{
				unk_0x9DC06E2A59C5AEBB(&iLocal_243);
				unk_0xDEFE57D3575A1A8A(0, iLocal_227, 307.1379f, 2640.042f, 43.4639f, 18f, 0, joaat("ambulance"), 786475, 5f, 5f);
				unk_0xE021DCE1063D5DC2(0, iLocal_218, -1, 2f, 1f, 10f, 0);
				unk_0xA785552633ED203B(0, iLocal_218, -1, 2052, 2);
				unk_0xD08E9EAF091A1AAB(0, iLocal_218, 0);
				unk_0x756D74A3EF0AB788(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x756D74A3EF0AB788(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x19F29730874AD6F1(iLocal_243);
				unk_0x9B6EC2CECE1010EF(iLocal_220, iLocal_243);
				unk_0x4F83FEE4454169D4(&iLocal_243);
				unk_0xCBA6B2B569DCAFD8(iLocal_220, true);
			}
			if (unk_0xAE06B9E39EBDE049(iLocal_219))
			{
				unk_0x9DC06E2A59C5AEBB(&iLocal_243);
				unk_0xC67F9BF03C2472AB(0, 15000);
				unk_0xE021DCE1063D5DC2(0, iLocal_219, -1, 2f, 1f, 10f, 0);
				unk_0xA785552633ED203B(0, iLocal_219, -1, 2052, 2);
				unk_0xD08E9EAF091A1AAB(0, iLocal_219, 0);
				unk_0x756D74A3EF0AB788(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x756D74A3EF0AB788(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x19F29730874AD6F1(iLocal_243);
				unk_0x9B6EC2CECE1010EF(iLocal_221, iLocal_243);
				unk_0x4F83FEE4454169D4(&iLocal_243);
				unk_0xCBA6B2B569DCAFD8(iLocal_221, true);
			}
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[0]) && unk_0xAE06B9E39EBDE049(iLocal_226))
			{
				unk_0x694113444F21E39F(iLocal_222[0], 185, true);
				unk_0x9DC06E2A59C5AEBB(&iLocal_243);
				unk_0x3C1B180EE30D36EF(0, unk_0x3E4D3CCC220BDFB1(iLocal_226, false) + Vector(0f, 5f, 0f), 1f, -1, 1048576000, 0, 1193033728);
				unk_0x4307058CAD093851(0, 0);
				unk_0x756D74A3EF0AB788(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x756D74A3EF0AB788(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x19F29730874AD6F1(iLocal_243);
				unk_0x9B6EC2CECE1010EF(iLocal_222[0], iLocal_243);
				unk_0x4F83FEE4454169D4(&iLocal_243);
				unk_0xCBA6B2B569DCAFD8(iLocal_222[0], true);
			}
			if (!unk_0xA59F96B50B97E63C(iLocal_222[1], 0) && unk_0xAE06B9E39EBDE049(iLocal_223))
			{
				unk_0x694113444F21E39F(iLocal_222[1], 185, true);
				unk_0x69C71C91F56D82B9(iLocal_222[1], joaat("weapon_unarmed"), true);
				unk_0x9DC06E2A59C5AEBB(&iLocal_243);
				unk_0x3C1B180EE30D36EF(0, unk_0x3E4D3CCC220BDFB1(iLocal_223, false) + Vector(0f, 1f, 0f), 2f, -1, 1048576000, 0, 1193033728);
				unk_0x439AF5D920F78274(0, unk_0x3E4D3CCC220BDFB1(iLocal_223, false), -1, 2052, 2);
				unk_0xB53E642F4F50E7C0(0, unk_0x3E4D3CCC220BDFB1(iLocal_223, false), 0);
				unk_0x756D74A3EF0AB788(0, "random@countrysiderobbery", "enter", 2f, -2f, -1, 0, 0, 0, 0, 0);
				unk_0x756D74A3EF0AB788(0, "random@countrysiderobbery", "base", 2f, -2f, -1, 1, 0, 0, 0, 0);
				unk_0x19F29730874AD6F1(iLocal_243);
				unk_0x9B6EC2CECE1010EF(iLocal_222[1], iLocal_243);
				unk_0x4F83FEE4454169D4(&iLocal_243);
				unk_0xCBA6B2B569DCAFD8(iLocal_222[1], true);
			}
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[2]) && unk_0xAE06B9E39EBDE049(iLocal_219))
			{
				unk_0x694113444F21E39F(iLocal_222[2], 185, true);
				if (unk_0xAE06B9E39EBDE049(iLocal_219))
				{
					unk_0x9DC06E2A59C5AEBB(&iLocal_243);
					unk_0x3C1B180EE30D36EF(0, unk_0x3E4D3CCC220BDFB1(iLocal_219, false) + Vector(0f, 1f, 0f), 1f, -1, 1048576000, 0, 1193033728);
					unk_0x4307058CAD093851(0, 0);
					unk_0x756D74A3EF0AB788(0, "random@countrysiderobbery", "idle_d", 2f, -2f, -1, 0, 0, 0, 0, 0);
					unk_0x756D74A3EF0AB788(0, "random@countrysiderobbery", "idle_a", 2f, -2f, -1, 1, 0, 0, 0, 0);
					unk_0x19F29730874AD6F1(iLocal_243);
					unk_0x9B6EC2CECE1010EF(iLocal_222[2], iLocal_243);
					unk_0x4F83FEE4454169D4(&iLocal_243);
				}
				unk_0xCBA6B2B569DCAFD8(iLocal_222[2], true);
			}
			func_3();
			wait(0);
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[0]))
			{
				func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[1]))
			{
				unk_0x3A2AAE59B4681DAF(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[2]))
			{
				unk_0x3A2AAE59B4681DAF(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			func_3();
			wait(0);
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[0]))
			{
				func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[1]))
			{
				unk_0x3A2AAE59B4681DAF(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[2]))
			{
				unk_0x3A2AAE59B4681DAF(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_ntouch", 4, 0, 0, 0);
			}
			settimerb(0);
			iLocal_240 = 1;
		}
	}
	if (iLocal_238 && !func_87())
	{
		func_5();
	}
	if (((((unk_0xA59F96B50B97E63C(iLocal_218, 0) && unk_0xA59F96B50B97E63C(iLocal_219, 0)) && unk_0xA59F96B50B97E63C(iLocal_222[0], 0)) && unk_0xA59F96B50B97E63C(iLocal_222[1], 0)) && unk_0xA59F96B50B97E63C(iLocal_222[2], 0)) && (func_38() || !unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), 310.6203f, 2642.854f, 43.5173f, 200f, 200f, 180f, false, true, 0)))
	{
		unk_0x26152FD46A297C2F(unk_0x460153A63B9477BC(), 2, 0);
		unk_0x204CDAA31815E962(unk_0x460153A63B9477BC(), 0f);
		func_7();
	}
}

void func_3()
{
	Global_19871 = 0;
	func_4();
}

void func_4()
{
	unk_0x62B2C9892E3E142D();
	Global_22016 = 0;
	if (unk_0x6A5CC4A2C9D9ED8D())
	{
		unk_0xBE4122AC23440E7D(false);
		Global_21005 = 6;
	}
}

void func_5()
{
	func_148();
}

void func_6(int iParam0)
{
	Global_111844 = iParam0;
}

void func_7()
{
	if (!bLocal_47)
	{
	}
	while (func_37())
	{
		wait(0);
	}
	while (!func_36())
	{
		wait(0);
	}
	func_11(-1, 0);
	func_8();
	func_148();
}

void func_8()
{
	func_9();
}

int func_9()
{
	if (func_10(0))
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

bool func_10(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

void func_11(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_33(iParam0))
	{
		func_32(iParam0, iParam1);
		if (!func_31(51))
		{
			func_21("RE_REWARD", 1, 0, 4000, 10000, func_24(), 0, 138, 0);
			func_20(51);
		}
		if (func_19(iParam0))
		{
			Global_111858.f_24991.f_2 = 3;
		}
		if (func_18(iParam0, iParam1) != 322)
		{
			func_12(func_18(iParam0, iParam1), Local_43.x, Local_43.f_1);
		}
		Global_111846 = iParam1;
		if (Global_111844 == 0)
		{
			if (((Global_111847 == 1 || Global_111847 == 5) || Global_111847 == 11) || Global_111847 == 25)
			{
				func_6(2);
			}
			else if ((Global_111847 == 26 || Global_111847 == 8) || Global_111847 == 17)
			{
				func_6(7);
			}
			else
			{
				func_6(1);
			}
		}
	}
}

void func_12(int iParam0, var uParam1, var uParam2)
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
		func_16((891 + iParam0), 1, -1, 1);
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
		func_13();
	}
}

void func_13()
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
		func_15(13, floor(Global_111858.f_10190.f_3853));
	}
	if (!unk_0xC4A02490EB1F450B())
	{
		if (!Global_76833)
		{
			if (func_14() == 2 == 0 && !unk_0x25DDB354A40FFCDB())
			{
				if (unk_0x70E5C9630A26FB40())
				{
					Global_111592 = 0;
				}
				if (!Global_61717)
				{
					func_9();
				}
			}
		}
	}
}

int func_14()
{
	return Global_30968;
}

int func_15(int iParam0, int iParam1)
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

int func_16(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_17();
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

int func_17()
{
	return Global_1312763;
}

int func_18(int iParam0, int iParam1)
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

int func_19(int iParam0)
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

void func_20(int iParam0)
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

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
		func_23();
	}
}

void func_23()
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

int func_24()
{
	func_25();
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

void func_25()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_29(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_28(unk_0x9B0761B4C3EB8BC7());
			if (func_27(iVar0) && (!func_26(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_27(Global_111858.f_2359.f_539.f_4321))
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

bool func_26(int iParam0)
{
	return Global_41631 == iParam0;
}

bool func_27(int iParam0)
{
	return iParam0 < 3;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_29(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_29(int iParam0)
{
	if (func_27(iParam0))
	{
		return func_30(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_30(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

int func_31(int iParam0)
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

void func_32(int iParam0, int iParam1)
{
	unk_0xBE20AB8238688965(&(Global_111858.f_24991.f_8[iParam0]), iParam1);
}

int func_33(int iParam0)
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

int func_34()
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, unk_0x6C5C6B207AA78253(), 64);
	uVar1 = func_35(Var0);
	return uVar1;
}

int func_35(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
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

int func_36()
{
	return 1;
}

int func_37()
{
	if (Global_21005 != 0 || unk_0x6A5CC4A2C9D9ED8D())
	{
		return 1;
	}
	return 0;
}

int func_38()
{
	if (bLocal_234 || bLocal_235)
	{
		if (bLocal_234 && bLocal_235)
		{
			if (!unk_0x8F678487EEBD8CE4(uLocal_268[0]) && !unk_0x8F678487EEBD8CE4(uLocal_268[1]))
			{
				return 1;
			}
		}
		if (bLocal_234 && !bLocal_235)
		{
			if (!unk_0x8F678487EEBD8CE4(uLocal_268[0]))
			{
				return 1;
			}
		}
		if (bLocal_235 && !bLocal_234)
		{
			if (!unk_0x8F678487EEBD8CE4(uLocal_268[1]))
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

int func_39(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_40(sParam2, iParam3, 0);
}

int func_40(char* sParam0, int iParam1, bool bParam2)
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
					func_54();
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
		if (func_53(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_52();
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
				func_50();
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
				if (func_49())
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
			if (func_48())
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
			func_47();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_46();
		func_41();
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
		func_54();
	}
	return 0;
}

void func_41()
{
	if (!func_42())
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

int func_42()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (unk_0x460153A63B9477BC() == func_45())
	{
		return 0;
	}
	if (func_43(unk_0x460153A63B9477BC()))
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

bool func_43(int iParam0)
{
	return func_44(iParam0, 20);
}

bool func_44(int iParam0, int iParam1)
{
	return unk_0xCE990E643CD9D0E5(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_45()
{
	return -1;
}

void func_46()
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

void func_47()
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

int func_48()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_49()
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

void func_50()
{
	if (func_26(14))
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
		Global_19681 = func_51();
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

int func_51()
{
	func_25();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_52()
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

bool func_53(int iParam0, int iParam1)
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

void func_54()
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

void func_55(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
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

void func_56(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_57(int iParam0)
{
	int iVar0;
	
	if (!unk_0xF10E878C0879E7E9(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x852EB51D8B26C4A3(iParam0);
	unk_0xFA81E0FBD7F5ACA0(iVar0, func_58(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
	return iVar0;
}

float func_58(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_59(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_60()
{
	if (!iLocal_254)
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218))
		{
			if (unk_0x47DBF174A0CB9D55(iLocal_218, false))
			{
				iLocal_263 = unk_0xA5D5B1042E8F47BD(iLocal_218, false);
				if (((((unk_0xCDF860E56BBCC6B4(iLocal_263, unk_0x9B0761B4C3EB8BC7(), 1) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false)) && unk_0x910DFF8E55ABB8EC(iLocal_263, unk_0x9B0761B4C3EB8BC7(), 10f, 10f, 10f, 0, 1, 0)) || unk_0xC0736D5851285045(iLocal_218)) || unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_263, false)) || unk_0xBA605F790B1E923B(unk_0x9B0761B4C3EB8BC7(), iLocal_263, joaat("weapon_stickybomb"), -1))
				{
					unk_0x4E65320BC9AD521C(iLocal_218, false);
					unk_0xEFBCE8F8316F89EA(5, iLocal_241, 1862763509);
					if (unk_0x47DBF174A0CB9D55(iLocal_218, false))
					{
						unk_0x92BD213E6A0E666B(iLocal_218, joaat("weapon_microsmg"), 200, true, true);
						unk_0x69C71C91F56D82B9(iLocal_218, joaat("weapon_microsmg"), true);
						unk_0x4E8B7920F3D6B9EE(iLocal_218, unk_0x9B0761B4C3EB8BC7(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
					}
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219))
					{
						if (unk_0x47DBF174A0CB9D55(iLocal_219, false))
						{
							unk_0x4E65320BC9AD521C(iLocal_219, false);
							unk_0x92BD213E6A0E666B(iLocal_219, joaat("weapon_microsmg"), 200, true, true);
							unk_0x69C71C91F56D82B9(iLocal_219, joaat("weapon_microsmg"), true);
							unk_0x4E8B7920F3D6B9EE(iLocal_219, unk_0x9B0761B4C3EB8BC7(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						}
					}
					bLocal_48 = true;
					iLocal_254 = 1;
				}
			}
			if (unk_0xCDF860E56BBCC6B4(iLocal_218, unk_0x9B0761B4C3EB8BC7(), 1))
			{
				unk_0xEFBCE8F8316F89EA(5, iLocal_241, 1862763509);
				if ((unk_0x47DBF174A0CB9D55(iLocal_218, false) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false)) && !unk_0xA59F96B50B97E63C(iLocal_263, 0))
				{
					if (unk_0x910DFF8E55ABB8EC(iLocal_263, unk_0x9B0761B4C3EB8BC7(), 10f, 10f, 10f, 0, 1, 0))
					{
						unk_0x4E65320BC9AD521C(iLocal_218, false);
						unk_0x92BD213E6A0E666B(iLocal_218, joaat("weapon_microsmg"), 200, true, true);
						unk_0x69C71C91F56D82B9(iLocal_218, joaat("weapon_microsmg"), true);
						unk_0x4E8B7920F3D6B9EE(iLocal_218, unk_0x9B0761B4C3EB8BC7(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						bLocal_48 = true;
						iLocal_254 = 1;
					}
				}
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219))
				{
					if ((unk_0x47DBF174A0CB9D55(iLocal_219, false) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false)) && !unk_0xA59F96B50B97E63C(iLocal_263, 0))
					{
						if (unk_0x910DFF8E55ABB8EC(iLocal_263, unk_0x9B0761B4C3EB8BC7(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0x4E65320BC9AD521C(iLocal_219, false);
							unk_0x92BD213E6A0E666B(iLocal_219, joaat("weapon_microsmg"), 200, true, true);
							unk_0x69C71C91F56D82B9(iLocal_219, joaat("weapon_microsmg"), true);
							unk_0x4E8B7920F3D6B9EE(iLocal_219, unk_0x9B0761B4C3EB8BC7(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_48 = true;
							iLocal_254 = 1;
						}
					}
				}
			}
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219))
		{
			if (unk_0x47DBF174A0CB9D55(iLocal_219, false))
			{
				iLocal_263 = unk_0xA5D5B1042E8F47BD(iLocal_219, false);
				if (((unk_0xCDF860E56BBCC6B4(iLocal_263, unk_0x9B0761B4C3EB8BC7(), 1) || unk_0xC0736D5851285045(iLocal_219)) || unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_263, false)) || unk_0xBA605F790B1E923B(unk_0x9B0761B4C3EB8BC7(), iLocal_263, joaat("weapon_stickybomb"), -1))
				{
					unk_0xEFBCE8F8316F89EA(5, iLocal_241, 1862763509);
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218))
					{
						if ((unk_0x47DBF174A0CB9D55(iLocal_218, false) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false)) && !unk_0xA59F96B50B97E63C(iLocal_263, 0))
						{
							if (unk_0x910DFF8E55ABB8EC(iLocal_263, unk_0x9B0761B4C3EB8BC7(), 10f, 10f, 10f, 0, 1, 0))
							{
								unk_0x4E65320BC9AD521C(iLocal_218, false);
								unk_0x92BD213E6A0E666B(iLocal_218, joaat("weapon_microsmg"), 200, true, true);
								unk_0x69C71C91F56D82B9(iLocal_218, joaat("weapon_microsmg"), true);
								unk_0x4E8B7920F3D6B9EE(iLocal_218, unk_0x9B0761B4C3EB8BC7(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
								bLocal_48 = true;
								iLocal_254 = 1;
							}
						}
					}
					if ((unk_0x47DBF174A0CB9D55(iLocal_219, false) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false)) && !unk_0xA59F96B50B97E63C(iLocal_263, 0))
					{
						if (unk_0x910DFF8E55ABB8EC(iLocal_263, unk_0x9B0761B4C3EB8BC7(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0x4E65320BC9AD521C(iLocal_219, false);
							unk_0x92BD213E6A0E666B(iLocal_219, joaat("weapon_microsmg"), 200, true, true);
							unk_0x69C71C91F56D82B9(iLocal_219, joaat("weapon_microsmg"), true);
							unk_0x4E8B7920F3D6B9EE(iLocal_219, unk_0x9B0761B4C3EB8BC7(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_48 = true;
							iLocal_254 = 1;
						}
					}
				}
			}
			if (unk_0xCDF860E56BBCC6B4(iLocal_219, unk_0x9B0761B4C3EB8BC7(), 1))
			{
				unk_0xEFBCE8F8316F89EA(5, iLocal_241, 1862763509);
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218))
				{
					if ((unk_0x47DBF174A0CB9D55(iLocal_218, false) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false)) && !unk_0xA59F96B50B97E63C(iLocal_263, 0))
					{
						if (unk_0x910DFF8E55ABB8EC(iLocal_263, unk_0x9B0761B4C3EB8BC7(), 10f, 10f, 10f, 0, 1, 0))
						{
							unk_0x92BD213E6A0E666B(iLocal_218, joaat("weapon_microsmg"), 200, true, true);
							unk_0x69C71C91F56D82B9(iLocal_218, joaat("weapon_microsmg"), true);
							unk_0x4E8B7920F3D6B9EE(iLocal_218, unk_0x9B0761B4C3EB8BC7(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
							bLocal_48 = true;
							iLocal_254 = 1;
						}
					}
				}
				if ((unk_0x47DBF174A0CB9D55(iLocal_219, false) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false)) && !unk_0xA59F96B50B97E63C(iLocal_263, 0))
				{
					if (unk_0x910DFF8E55ABB8EC(iLocal_263, unk_0x9B0761B4C3EB8BC7(), 10f, 10f, 10f, 0, 1, 0))
					{
						unk_0x92BD213E6A0E666B(iLocal_219, joaat("weapon_microsmg"), 200, true, true);
						unk_0x69C71C91F56D82B9(iLocal_219, joaat("weapon_microsmg"), true);
						unk_0x4E8B7920F3D6B9EE(iLocal_219, unk_0x9B0761B4C3EB8BC7(), 0, 0f, 0f, 0f, 200f, 50, 0, -753768974);
						bLocal_48 = true;
						iLocal_254 = 1;
					}
				}
			}
		}
	}
}

void func_61()
{
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218) && !unk_0xA59F96B50B97E63C(iLocal_226, 0))
	{
		if (!unk_0xC7C55C82599F980F(iLocal_218, iLocal_226, -1, 0, false) && !unk_0xC7C55C82599F980F(iLocal_218, iLocal_226, 0, 0, false))
		{
			unk_0xD66FADEF7D42D49B(iLocal_218, Local_217, 1000f, -1, 0, 0);
			unk_0xCBA6B2B569DCAFD8(iLocal_218, true);
			iLocal_257 = 1;
		}
	}
	if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219) && !unk_0xA59F96B50B97E63C(iLocal_226, 0))
	{
		if (!unk_0xC7C55C82599F980F(iLocal_219, iLocal_226, -1, 0, false) && !unk_0xC7C55C82599F980F(iLocal_219, iLocal_226, 0, 0, false))
		{
			unk_0xD66FADEF7D42D49B(iLocal_219, Local_217, 1000f, -1, 0, 0);
			unk_0xCBA6B2B569DCAFD8(iLocal_219, true);
			iLocal_257 = 1;
		}
	}
}

void func_62()
{
	if (!unk_0xA59F96B50B97E63C(iLocal_218, 0))
	{
		Local_245 = { unk_0x3E4D3CCC220BDFB1(iLocal_218, true) };
	}
	else if (!unk_0xA59F96B50B97E63C(iLocal_219, 0))
	{
		Local_245 = { unk_0x3E4D3CCC220BDFB1(iLocal_219, true) };
	}
	Local_245.f_2 = (Local_245.f_2 - 0.11f);
	if (!unk_0xA59F96B50B97E63C(iLocal_218, 0))
	{
		settimera(0);
		if (!bLocal_48)
		{
			func_3();
			wait(0);
			if (!unk_0xA59F96B50B97E63C(iLocal_218, 0))
			{
				func_63(&uLocal_52, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			else if (!unk_0xA59F96B50B97E63C(iLocal_219, 0))
			{
				func_59(&uLocal_52, 5);
				func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
				func_63(&uLocal_52, "recsbau", "recsb_thanxa", "recsb_thanxa_3", 4, 0, 0);
			}
			unk_0x8F312E3891DDE6A0(unk_0xEDE1ACBAFB1C36AE(Local_245, 1.2f, 1.5f), 1000, 5, 0);
			iLocal_253 = 1;
		}
	}
	if (!unk_0xA59F96B50B97E63C(iLocal_219, 0) && !unk_0xA59F96B50B97E63C(iLocal_226, 0))
	{
		if (unk_0xE0B3BC41DDA88DF0(iLocal_219, iLocal_226, false))
		{
			settimera(0);
			if (!unk_0xA59F96B50B97E63C(iLocal_218, 0))
			{
			}
			else if (!unk_0xA59F96B50B97E63C(iLocal_219, 0))
			{
			}
			iLocal_253 = 1;
		}
	}
}

int func_63(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21012 = 0;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 1;
	StringCopy(&Global_22009, sParam3, 24);
	Global_2621441 = 0;
	return func_40(sParam2, iParam4, 0);
}

void func_64()
{
	if (!bLocal_256)
	{
		unk_0x6F9222C1283B5094(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		if (iLocal_260)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218))
			{
				if (unk_0xF534AF93C1412379(iLocal_218))
				{
					func_3();
					wait(0);
					func_39(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_260 = 1;
				}
			}
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219))
			{
				if (unk_0xF534AF93C1412379(iLocal_219))
				{
					func_3();
					wait(0);
					func_59(&uLocal_52, 5);
					func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_260 = 1;
				}
			}
		}
		if (iLocal_239 == 1)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218) && !unk_0xA59F96B50B97E63C(iLocal_226, 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(iLocal_218, iLocal_226, false))
				{
					unk_0x6AC7395A8E313A46(iLocal_218, 2, true);
					unk_0x9DC06E2A59C5AEBB(&iLocal_243);
					unk_0xBD204892D76E6303(0, iLocal_226, unk_0x9B0761B4C3EB8BC7(), 8, 100f, 786469, 1000f, 10f, 1);
					unk_0x19F29730874AD6F1(iLocal_243);
					unk_0x9B6EC2CECE1010EF(iLocal_218, iLocal_243);
					unk_0x4F83FEE4454169D4(&iLocal_243);
					unk_0xCBA6B2B569DCAFD8(iLocal_218, true);
					bLocal_256 = true;
				}
			}
		}
		if (iLocal_239 == 2)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219) && !unk_0xA59F96B50B97E63C(iLocal_226, 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(iLocal_219, iLocal_226, false))
				{
					unk_0x6AC7395A8E313A46(iLocal_219, 2, true);
					unk_0x9DC06E2A59C5AEBB(&iLocal_243);
					unk_0xBD204892D76E6303(0, iLocal_226, unk_0x9B0761B4C3EB8BC7(), 8, 100f, 786469, 1000f, 10f, 1);
					unk_0x19F29730874AD6F1(iLocal_243);
					unk_0x9B6EC2CECE1010EF(iLocal_219, iLocal_243);
					unk_0x4F83FEE4454169D4(&iLocal_243);
					unk_0xCBA6B2B569DCAFD8(iLocal_219, true);
					bLocal_256 = true;
				}
			}
		}
		if (iLocal_239 == 3)
		{
			if ((!unk_0x5AEB5DDFFAD43CA5(iLocal_219) && !unk_0x5AEB5DDFFAD43CA5(iLocal_218)) && !unk_0xA59F96B50B97E63C(iLocal_226, 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(iLocal_218, iLocal_226, false) && unk_0xE0B3BC41DDA88DF0(iLocal_219, iLocal_226, false))
				{
					unk_0x6AC7395A8E313A46(iLocal_218, 2, true);
					unk_0x6AC7395A8E313A46(iLocal_219, 2, true);
					unk_0x9DC06E2A59C5AEBB(&iLocal_243);
					unk_0xBD204892D76E6303(0, iLocal_226, unk_0x9B0761B4C3EB8BC7(), 8, 100f, 786469, 1000f, 10f, 1);
					unk_0x19F29730874AD6F1(iLocal_243);
					unk_0x9B6EC2CECE1010EF(iLocal_218, iLocal_243);
					unk_0x4F83FEE4454169D4(&iLocal_243);
					unk_0x4E65320BC9AD521C(iLocal_219, false);
					unk_0xCBA6B2B569DCAFD8(iLocal_218, true);
					bLocal_256 = true;
				}
			}
			if (unk_0x5AEB5DDFFAD43CA5(iLocal_218) && !unk_0x5AEB5DDFFAD43CA5(iLocal_219))
			{
				func_59(&uLocal_52, 5);
				unk_0xC584E49FC3559A86(iLocal_219, iLocal_226, -1, -1, 2f, 8, 0);
				iLocal_239 = 2;
			}
			if (unk_0x5AEB5DDFFAD43CA5(iLocal_219) && !unk_0x5AEB5DDFFAD43CA5(iLocal_218))
			{
				func_59(&uLocal_52, 6);
				unk_0xC584E49FC3559A86(iLocal_218, iLocal_226, -1, -1, 2f, 8, 0);
				iLocal_239 = 1;
			}
		}
		if (iLocal_239 == 4)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218))
			{
				unk_0x9B94F6169B0DAEFD(iLocal_218);
				unk_0xD66FADEF7D42D49B(iLocal_218, Local_217, 1000f, -1, 0, 0);
				unk_0xCBA6B2B569DCAFD8(iLocal_218, true);
			}
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219))
			{
				unk_0x9B94F6169B0DAEFD(iLocal_219);
				unk_0xD66FADEF7D42D49B(iLocal_219, Local_217, 1000f, -1, 0, 0);
				unk_0xCBA6B2B569DCAFD8(iLocal_219, true);
			}
			bLocal_256 = true;
		}
	}
}

void func_65()
{
	if ((unk_0xA59F96B50B97E63C(iLocal_222[0], 0) && unk_0xA59F96B50B97E63C(iLocal_222[1], 0)) && unk_0xA59F96B50B97E63C(iLocal_222[2], 0))
	{
		func_59(&uLocal_52, 4);
		iLocal_246 = 1;
		iLocal_238 = 1;
		unk_0xEFBCE8F8316F89EA(1, iLocal_241, 1862763509);
		if (!bLocal_48 && bLocal_47)
		{
			unk_0x93370FA10F15BE44(&iLocal_265);
			unk_0x93370FA10F15BE44(&iLocal_266);
		}
		if (!bLocal_48)
		{
			if (!unk_0xA59F96B50B97E63C(iLocal_218, 0))
			{
				func_66(&uLocal_52, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
			else if (!unk_0xA59F96B50B97E63C(iLocal_219, 0))
			{
				func_59(&uLocal_52, 5);
				func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
				func_66(&uLocal_52, "recsbau", "recsb_thanxa", "recsb_thanxa_1", 4, 0, 0);
			}
		}
		if (unk_0x80FF6C016CDB0FAF(iLocal_226, 0))
		{
			unk_0xBB7976F6FB9C9DD2(iLocal_226);
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218) && !unk_0xF2352D60B6FBEAAD(iLocal_218))
			{
				unk_0xE75CEDDEA450137A(iLocal_218, 1, 1, 1, 0);
				iLocal_239 = 1;
				unk_0x9B94F6169B0DAEFD(iLocal_218);
				unk_0x3882AEDF87714AF1(iLocal_218, 1);
				unk_0x4E65320BC9AD521C(iLocal_218, true);
				unk_0xBB7976F6FB9C9DD2(iLocal_218);
				unk_0xBB7976F6FB9C9DD2(iLocal_226);
				unk_0x9DC06E2A59C5AEBB(&iLocal_243);
				unk_0xC584E49FC3559A86(0, iLocal_226, -1, -1, 2f, 9, 0);
				unk_0x19F29730874AD6F1(iLocal_243);
				unk_0x9B6EC2CECE1010EF(iLocal_218, iLocal_243);
				unk_0x4F83FEE4454169D4(&iLocal_243);
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219) && !unk_0xF2352D60B6FBEAAD(iLocal_219))
				{
					unk_0x9B94F6169B0DAEFD(iLocal_219);
					unk_0x4E65320BC9AD521C(iLocal_219, true);
					unk_0xBB7976F6FB9C9DD2(iLocal_219);
					unk_0xBB7976F6FB9C9DD2(iLocal_226);
					unk_0x3882AEDF87714AF1(iLocal_219, 1);
					unk_0xC584E49FC3559A86(iLocal_219, iLocal_226, -1, 0, 2f, 1, 0);
					iLocal_239 = 3;
				}
			}
			else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219))
			{
				unk_0x3882AEDF87714AF1(iLocal_219, 1);
				unk_0xE75CEDDEA450137A(iLocal_219, 1, 1, 1, 0);
				unk_0x9B94F6169B0DAEFD(iLocal_219);
				unk_0x4E65320BC9AD521C(iLocal_219, true);
				unk_0xBB7976F6FB9C9DD2(iLocal_219);
				unk_0xBB7976F6FB9C9DD2(iLocal_226);
				unk_0x9DC06E2A59C5AEBB(&iLocal_243);
				unk_0xC584E49FC3559A86(0, iLocal_226, -1, -1, 2f, 1, 0);
				unk_0x19F29730874AD6F1(iLocal_243);
				unk_0x9B6EC2CECE1010EF(iLocal_219, iLocal_243);
				unk_0x4F83FEE4454169D4(&iLocal_243);
				iLocal_239 = 2;
			}
		}
		else
		{
			iLocal_239 = 4;
		}
	}
}

int func_66(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_21012 = 0;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 1;
	Global_21998 = 0;
	Global_22002 = 0;
	StringCopy(&Global_22009, sParam3, 24);
	Global_2621441 = 0;
	return func_40(sParam2, iParam4, 0);
}

void func_67(int iParam0, var uParam1, int iParam2, float fParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	int iVar2;
	
	if (!unk_0xA59F96B50B97E63C(iParam0, 0))
	{
		if (*uParam1 < 5)
		{
			switch (iParam2)
			{
				case 0:
					Var0 = { -1f, 1f, 0.5f };
					Var1 = { -0.5f, 0.75f, 0.05f };
					iVar2 = 0;
					break;
				
				case 1:
					Var0 = { 1f, 1f, 0.5f };
					Var1 = { 0.5f, 0.75f, 0.05f };
					iVar2 = 1;
					break;
				
				case 4:
					Var0 = { -1f, -1f, 0.5f };
					Var1 = { -0.5f, -0.75f, 0.05f };
					iVar2 = 2;
					break;
				
				case 5:
					Var0 = { 1f, -1f, 0.5f };
					Var1 = { 0.5f, -0.75f, 0.05f };
					iVar2 = 3;
					break;
			}
			if (unk_0x6F51C53F49CF1153(unk_0x7EC595B99EA7C4B1(iParam0, Var0), fParam3, 1, 1) || unk_0x6F51C53F49CF1153(unk_0x7EC595B99EA7C4B1(iParam0, Var0), fParam3, 0, 1))
			{
				switch (*uParam1)
				{
					case 0:
						unk_0xAD1128A569D59CFC(iParam0, iParam2, 0, 1148846080);
						*uParam1++;
						break;
					
					case 1:
						unk_0x9CC6357234EC5D4A(iParam0, iVar2);
						*uParam1++;
						break;
					
					case 2:
						*uParam1++;
						break;
					
					case 3:
						*uParam1++;
						break;
					
					case 4:
						unk_0x89A44C36E0B61C3B(iParam0, Var1, 150f, 50f, 1);
						*uParam1++;
						break;
					}
				}
			}
	}
}

void func_68(int iParam0)
{
	if ((!unk_0x5AEB5DDFFAD43CA5(iParam0) && !func_37()) && timera() > 12000)
	{
		func_56(&uLocal_52, 4, iParam0, "RECSBCop1", 0, 1);
		if (unk_0x910DFF8E55ABB8EC(iParam0, unk_0x9B0761B4C3EB8BC7(), 20f, 20f, 20f, 0, 1, 0))
		{
			func_39(&uLocal_52, "recsbau", "recsb_sscene", 4, 0, 0, 0);
			settimera(0);
		}
	}
}

void func_69()
{
	if (!unk_0xA59F96B50B97E63C(iLocal_218, 0))
	{
		if (unk_0xCDF860E56BBCC6B4(iLocal_218, unk_0x9B0761B4C3EB8BC7(), 1))
		{
			bLocal_48 = true;
			settimera(0);
			unk_0xEFBCE8F8316F89EA(5, iLocal_241, 1862763509);
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218))
			{
				unk_0x8FF9CE1C0F94F59A(iLocal_218, unk_0x9B0761B4C3EB8BC7(), 0, 16);
				unk_0xCBA6B2B569DCAFD8(iLocal_218, true);
				unk_0xDB8ED24252953530(iLocal_218, unk_0x9B0761B4C3EB8BC7());
				unk_0x17253AF44F6ED2DA(iLocal_218, 1);
			}
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219))
			{
				unk_0x8FF9CE1C0F94F59A(iLocal_219, unk_0x9B0761B4C3EB8BC7(), 0, 16);
				unk_0xCBA6B2B569DCAFD8(iLocal_219, true);
				unk_0xDB8ED24252953530(iLocal_219, unk_0x9B0761B4C3EB8BC7());
				unk_0x17253AF44F6ED2DA(iLocal_219, 1);
			}
			if (!bLocal_47)
			{
				func_3();
				wait(0);
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[0]))
				{
					func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[1]))
				{
					unk_0x3A2AAE59B4681DAF(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[2]))
				{
					unk_0x3A2AAE59B4681DAF(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218))
		{
			if (!func_72() && unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 4))
			{
				if (unk_0x5E5402F6D3B26AFB(unk_0x460153A63B9477BC(), iLocal_218) || unk_0x2311EB213A0CB707(unk_0x460153A63B9477BC(), iLocal_218))
				{
					if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_218, 20f, 20f, 20f, 0, 1, 0) && unk_0x67E2125E6EC33DB7(iLocal_218, unk_0x9B0761B4C3EB8BC7()))
					{
						iLocal_230++;
						if (!iLocal_231 && !func_70("recsb_theaim"))
						{
							func_3();
							wait(0);
							if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218))
							{
								func_39(&uLocal_52, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219))
							{
								func_59(&uLocal_52, 5);
								func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
								func_39(&uLocal_52, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_231 = 1;
						}
						if (iLocal_230 > 45)
						{
							bLocal_48 = true;
							settimera(0);
							if (!bLocal_47)
							{
								func_3();
								wait(0);
								if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[0]))
								{
									func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
									func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[1]))
								{
									unk_0x3A2AAE59B4681DAF(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_52, 4);
									func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
									func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[2]))
								{
									unk_0x3A2AAE59B4681DAF(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_52, 4);
									func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
									func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_231 || iLocal_232)
				{
					iLocal_230 = 45;
				}
				else
				{
					iLocal_230 = 0;
				}
			}
		}
	}
	if (!unk_0xA59F96B50B97E63C(iLocal_219, 0))
	{
		if (unk_0xCDF860E56BBCC6B4(iLocal_219, unk_0x9B0761B4C3EB8BC7(), 1))
		{
			bLocal_48 = true;
			settimera(0);
			unk_0xEFBCE8F8316F89EA(5, iLocal_241, 1862763509);
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219))
			{
				unk_0x8FF9CE1C0F94F59A(iLocal_219, unk_0x9B0761B4C3EB8BC7(), 0, 16);
				unk_0xCBA6B2B569DCAFD8(iLocal_219, true);
				unk_0xDB8ED24252953530(iLocal_219, unk_0x9B0761B4C3EB8BC7());
				unk_0x17253AF44F6ED2DA(iLocal_219, 1);
			}
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218))
			{
				unk_0x8FF9CE1C0F94F59A(iLocal_218, unk_0x9B0761B4C3EB8BC7(), 0, 16);
				unk_0xCBA6B2B569DCAFD8(iLocal_218, true);
				unk_0xDB8ED24252953530(iLocal_218, unk_0x9B0761B4C3EB8BC7());
				unk_0x17253AF44F6ED2DA(iLocal_218, 1);
			}
			if (!bLocal_47)
			{
				func_3();
				wait(0);
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[0]))
				{
					func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[1]))
				{
					unk_0x3A2AAE59B4681DAF(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
				else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[2]))
				{
					unk_0x3A2AAE59B4681DAF(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
				}
			}
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219))
		{
			if (!func_72() && unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 4))
			{
				if (unk_0x5E5402F6D3B26AFB(unk_0x460153A63B9477BC(), iLocal_219) || unk_0x2311EB213A0CB707(unk_0x460153A63B9477BC(), iLocal_219))
				{
					if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_219, 20f, 20f, 20f, 0, 1, 0) && unk_0x67E2125E6EC33DB7(iLocal_219, unk_0x9B0761B4C3EB8BC7()))
					{
						if ((!iLocal_232 && !unk_0x5AEB5DDFFAD43CA5(iLocal_218)) && !func_70("recsb_theaim"))
						{
							func_3();
							wait(0);
							if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218))
							{
								func_39(&uLocal_52, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219))
							{
								func_59(&uLocal_52, 5);
								func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
								func_39(&uLocal_52, "recsbau", "recsb_theaim", 4, 0, 0, 0);
							}
							iLocal_232 = 1;
						}
						iLocal_229++;
						if (iLocal_229 > 45)
						{
							bLocal_48 = true;
							settimera(0);
							if (!bLocal_47)
							{
								func_3();
								wait(0);
								if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[0]))
								{
									func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
									func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[1]))
								{
									unk_0x3A2AAE59B4681DAF(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_52, 4);
									func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
									func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
								else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[2]))
								{
									unk_0x3A2AAE59B4681DAF(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
									func_59(&uLocal_52, 4);
									func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
									func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
								}
							}
						}
					}
				}
				else if (iLocal_231 || iLocal_232)
				{
					iLocal_230 = 45;
				}
				else
				{
					iLocal_230 = 0;
				}
			}
		}
	}
	if (!iLocal_261 && bLocal_234)
	{
		if (unk_0x73DBD7E437DA0553(iLocal_264[0]))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218))
			{
				if (unk_0x67E2125E6EC33DB7(iLocal_218, unk_0x9B0761B4C3EB8BC7()) && unk_0x910DFF8E55ABB8EC(iLocal_218, unk_0x9B0761B4C3EB8BC7(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_48 = true;
					func_3();
					wait(0);
					func_39(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_261 = 1;
				}
			}
			else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219))
			{
				if (unk_0x67E2125E6EC33DB7(iLocal_219, unk_0x9B0761B4C3EB8BC7()) && unk_0x910DFF8E55ABB8EC(iLocal_219, unk_0x9B0761B4C3EB8BC7(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_48 = true;
					func_59(&uLocal_52, 5);
					func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
					func_3();
					wait(0);
					func_39(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_261 = 1;
				}
			}
		}
	}
	if (!iLocal_262 && bLocal_235)
	{
		if (unk_0x73DBD7E437DA0553(iLocal_264[1]))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218))
			{
				if (unk_0x67E2125E6EC33DB7(iLocal_218, unk_0x9B0761B4C3EB8BC7()) && unk_0x910DFF8E55ABB8EC(iLocal_218, unk_0x9B0761B4C3EB8BC7(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_48 = true;
					func_3();
					wait(0);
					func_39(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_262 = 1;
				}
			}
			else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219))
			{
				if (unk_0x67E2125E6EC33DB7(iLocal_219, unk_0x9B0761B4C3EB8BC7()) && unk_0x910DFF8E55ABB8EC(iLocal_219, unk_0x9B0761B4C3EB8BC7(), 20f, 20f, 20f, 0, 1, 0))
				{
					bLocal_48 = true;
					func_59(&uLocal_52, 5);
					func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
					func_3();
					wait(0);
					func_39(&uLocal_52, "recsbau", "recsb_jack", 3, 0, 0, 0);
					iLocal_262 = 1;
				}
			}
		}
	}
	if (!unk_0xA59F96B50B97E63C(iLocal_226, 0))
	{
		if ((unk_0xCDF860E56BBCC6B4(iLocal_226, unk_0x9B0761B4C3EB8BC7(), 1) || unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_226, false)) || unk_0xBA605F790B1E923B(unk_0x9B0761B4C3EB8BC7(), iLocal_226, joaat("weapon_stickybomb"), -1))
		{
			bLocal_48 = true;
			settimera(0);
			unk_0xEFBCE8F8316F89EA(5, iLocal_241, 1862763509);
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218))
			{
				unk_0x8FF9CE1C0F94F59A(iLocal_218, unk_0x9B0761B4C3EB8BC7(), 0, 16);
				unk_0xCBA6B2B569DCAFD8(iLocal_218, true);
				unk_0xDB8ED24252953530(iLocal_218, unk_0x9B0761B4C3EB8BC7());
				unk_0x17253AF44F6ED2DA(iLocal_218, 1);
			}
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219))
			{
				unk_0x8FF9CE1C0F94F59A(iLocal_219, unk_0x9B0761B4C3EB8BC7(), 0, 16);
				unk_0xCBA6B2B569DCAFD8(iLocal_219, true);
				unk_0xDB8ED24252953530(iLocal_219, unk_0x9B0761B4C3EB8BC7());
				unk_0x17253AF44F6ED2DA(iLocal_219, 1);
			}
			func_3();
			wait(0);
			if (!unk_0xA59F96B50B97E63C(iLocal_226, 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_226, false))
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218))
					{
						func_66(&uLocal_52, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						unk_0xC584E49FC3559A86(iLocal_218, iLocal_226, -1, -1, 2f, 524296, 0);
					}
					else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219))
					{
						func_59(&uLocal_52, 5);
						func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
						func_66(&uLocal_52, "recsbau", "recsb_deadcr", "recsb_deadcr_1", 4, 0, 0);
						unk_0xC584E49FC3559A86(iLocal_219, iLocal_226, -1, -1, 2f, 524296, 0);
					}
				}
				else if (!bLocal_47)
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[0]))
					{
						func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
						func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[1]))
					{
						unk_0x3A2AAE59B4681DAF(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_52, 4);
						func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
						func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
					else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[2]))
					{
						unk_0x3A2AAE59B4681DAF(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_52, 4);
						func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
						func_39(&uLocal_52, "recsbau", "recsb_copsth", 4, 0, 0, 0);
					}
				}
			}
		}
	}
}

int func_70(char* sParam0)
{
	var uVar0;
	
	if (func_37())
	{
		MemCopy(&uVar0, {func_71()}, 4);
		if (unk_0xF005CCA4263DF67F(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

struct<6> func_71()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_21005 == 4)
	{
		return Global_20624;
	}
	return Var0;
}

int func_72()
{
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		if (unk_0x80FF6C016CDB0FAF(unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false), 0))
		{
			if (unk_0xE6577B0644092448(unk_0x9B0761B4C3EB8BC7(), joaat("lazer")) || unk_0xE6577B0644092448(unk_0x9B0761B4C3EB8BC7(), joaat("buzzard")))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_73()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!bLocal_258)
	{
		unk_0x6FC5840B397E185A(unk_0x460153A63B9477BC(), &iLocal_244);
		if (unk_0xA1914E72A0EB31D0(iLocal_244))
		{
			iLocal_224 = unk_0x9048E8838E822F21(iLocal_244);
		}
		if ((iLocal_224 == iLocal_222[0] || iLocal_224 == iLocal_222[1]) || iLocal_224 == iLocal_222[2])
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_224))
			{
				if (!func_72() && unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 4))
				{
					if (unk_0x5E5402F6D3B26AFB(unk_0x460153A63B9477BC(), iLocal_224) || unk_0x2311EB213A0CB707(unk_0x460153A63B9477BC(), iLocal_224))
					{
						if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_224, 20f, 20f, 20f, 0, 1, 0))
						{
							if (unk_0x67E2125E6EC33DB7(iLocal_224, unk_0x9B0761B4C3EB8BC7()) || unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iLocal_224, 8f, 8f, 8f, 0, 1, 0))
							{
								if (!bLocal_259)
								{
									if (!func_70("recsb_coppon"))
									{
										if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[0]))
										{
											func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
											func_3();
											wait(0);
											func_39(&uLocal_52, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_259 = true;
										}
										else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[1]))
										{
											unk_0x3A2AAE59B4681DAF(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_59(&uLocal_52, 4);
											func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
											func_3();
											wait(0);
											func_39(&uLocal_52, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_259 = true;
										}
										else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[2]))
										{
											unk_0x3A2AAE59B4681DAF(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
											func_59(&uLocal_52, 4);
											func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
											func_3();
											wait(0);
											func_39(&uLocal_52, "recsbau", "recsb_coppon", 4, 0, 0, 0);
											bLocal_259 = true;
										}
									}
								}
								iLocal_228++;
								if (iLocal_228 > 40)
								{
									bLocal_258 = true;
									bLocal_47 = true;
									if (!unk_0xA59F96B50B97E63C(iLocal_244, 0))
									{
										unk_0xEFBCE8F8316F89EA(5, iLocal_242, 1862763509);
										iVar0 = 0;
										while (iVar0 < iLocal_222)
										{
											if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[iVar0]))
											{
												unk_0x8FF9CE1C0F94F59A(iLocal_222[iVar0], unk_0x9B0761B4C3EB8BC7(), 0, 16);
												unk_0xCBA6B2B569DCAFD8(iLocal_222[iVar0], true);
												unk_0xDB8ED24252953530(iLocal_222[iVar0], unk_0x9B0761B4C3EB8BC7());
												unk_0x17253AF44F6ED2DA(iLocal_222[iVar0], 1);
											}
											iVar0++;
										}
									}
								}
							}
						}
					}
					else if (bLocal_259)
					{
						iLocal_228 = 40;
					}
					else
					{
						iLocal_228 = 0;
					}
				}
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_222)
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_222[iVar1]))
		{
			if (unk_0xCDF860E56BBCC6B4(iLocal_222[iVar1], unk_0x9B0761B4C3EB8BC7(), 1))
			{
				bLocal_47 = true;
			}
			if (unk_0x80FF6C016CDB0FAF(unk_0xA5D3CD332CD10EE9(), 0))
			{
				if (unk_0xCDF860E56BBCC6B4(iLocal_222[iVar1], unk_0xA5D3CD332CD10EE9(), 1))
				{
					bLocal_47 = true;
				}
			}
		}
		iVar1++;
	}
	if (bLocal_258)
	{
	}
	if (iLocal_240)
	{
		if (timerb() > 6000)
		{
			if (timerb() > 6000 && timerb() < 7000)
			{
				unk_0xCFF81C0C8D63E62E(330.1744f, 2629.238f, 43.5056f, 30f);
			}
			if (!iLocal_236)
			{
				if (bLocal_48)
				{
					if (!func_37())
					{
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[0]))
						{
							func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[1]))
						{
							unk_0x3A2AAE59B4681DAF(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[2]))
						{
							unk_0x3A2AAE59B4681DAF(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_crooks", 4, 0, 0, 0);
						}
						iLocal_236 = 1;
					}
				}
				else if (!iLocal_238)
				{
					if (!func_37())
					{
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[0]))
						{
							func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[1]))
						{
							unk_0x3A2AAE59B4681DAF(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[2]))
						{
							unk_0x3A2AAE59B4681DAF(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_crooka", 4, 0, 0, 0);
						}
						iLocal_236 = 1;
					}
				}
			}
			if (unk_0x183773B390B31AAA(unk_0x9B0761B4C3EB8BC7(), Vector(43.5005f, 2626.29f, 326.6079f) - Vector(50f, 50f, 50f), Vector(43.5005f, 2626.29f, 326.6079f) + Vector(50f, 50f, 50f), 0, 1))
			{
				bLocal_47 = true;
			}
			if (!unk_0xA59F96B50B97E63C(iLocal_226, 0))
			{
				if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_226, false))
				{
					bLocal_47 = true;
					func_3();
					wait(0);
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[0]))
					{
						func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
						func_39(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[1]))
					{
						unk_0x3A2AAE59B4681DAF(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_52, 4);
						func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
						func_39(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
					else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[2]))
					{
						unk_0x3A2AAE59B4681DAF(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
						func_59(&uLocal_52, 4);
						func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
						func_39(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 < iLocal_222)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[iVar1]))
			{
				if (unk_0x73DBD7E437DA0553(iLocal_264[0]) || unk_0x73DBD7E437DA0553(iLocal_264[1]))
				{
					if (unk_0x67E2125E6EC33DB7(iLocal_222[iVar1], unk_0x9B0761B4C3EB8BC7()) && unk_0x910DFF8E55ABB8EC(iLocal_222[iVar1], unk_0x9B0761B4C3EB8BC7(), 20f, 20f, 20f, 0, 1, 0))
					{
						bLocal_47 = true;
						func_3();
						wait(0);
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[0]))
						{
							func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[1]))
						{
							unk_0x3A2AAE59B4681DAF(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
						else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[2]))
						{
							unk_0x3A2AAE59B4681DAF(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_stealb", 4, 0, 0, 0);
						}
					}
				}
				if (unk_0xA65352E7FEA59881(unk_0x9B0761B4C3EB8BC7(), iLocal_222[iVar1]))
				{
					unk_0xEFBCE8F8316F89EA(3, iLocal_242, 1862763509);
					bLocal_47 = true;
				}
			}
			iVar1++;
		}
		if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[1]) && !unk_0xA59F96B50B97E63C(iLocal_225[2], 0))
		{
			if (!unk_0x910DFF8E55ABB8EC(iLocal_222[1], unk_0x9B0761B4C3EB8BC7(), 100f, 100f, 100f, 0, 1, 0))
			{
				unk_0x2481907DEE6B85EA(&(iLocal_222[1]));
				unk_0xE730EAF558C97567(&(iLocal_225[2]));
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < iLocal_225)
	{
		if (!unk_0xA59F96B50B97E63C(iLocal_225[iVar1], 0))
		{
			if ((unk_0xCDF860E56BBCC6B4(iLocal_225[iVar1], unk_0x9B0761B4C3EB8BC7(), 1) || unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_225[iVar1], false)) || unk_0xBA605F790B1E923B(unk_0x9B0761B4C3EB8BC7(), iLocal_225[iVar1], joaat("weapon_stickybomb"), -1))
			{
				bLocal_47 = true;
			}
			if (unk_0x80FF6C016CDB0FAF(unk_0xA5D3CD332CD10EE9(), 0))
			{
				if (unk_0xCDF860E56BBCC6B4(iLocal_225[iVar1], unk_0xA5D3CD332CD10EE9(), 1))
				{
					bLocal_47 = true;
				}
			}
		}
		iVar1++;
	}
	if (!unk_0xA59F96B50B97E63C(iLocal_227, 0))
	{
		if (unk_0xCDF860E56BBCC6B4(iLocal_227, unk_0x9B0761B4C3EB8BC7(), 1) || unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_227, false))
		{
			bLocal_47 = true;
		}
	}
	if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		if (unk_0xE6577B0644092448(unk_0x9B0761B4C3EB8BC7(), joaat("towtruck")) || unk_0xE6577B0644092448(unk_0x9B0761B4C3EB8BC7(), joaat("towtruck2")))
		{
			iVar2 = unk_0xA5D5B1042E8F47BD(unk_0x9B0761B4C3EB8BC7(), false);
			if (iLocal_240)
			{
				if (!unk_0xA59F96B50B97E63C(iLocal_226, 0))
				{
					if (unk_0xBA9474B1995C6AAD(iVar2, iLocal_226))
					{
						bLocal_47 = true;
						func_3();
						wait(0);
						if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[0]))
						{
							func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[1]))
						{
							unk_0x3A2AAE59B4681DAF(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
						else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[2]))
						{
							unk_0x3A2AAE59B4681DAF(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
							func_59(&uLocal_52, 4);
							func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
							func_39(&uLocal_52, "recsbau", "recsb_stealc", 4, 0, 0, 0);
						}
					}
				}
			}
			iVar1 = 0;
			while (iVar1 < iLocal_225)
			{
				if (!unk_0xA59F96B50B97E63C(iLocal_225[iVar1], 0))
				{
					if (unk_0xBA9474B1995C6AAD(iVar2, iLocal_225[iVar1]))
					{
						bLocal_47 = true;
					}
				}
				iVar1++;
			}
			if (!unk_0xA59F96B50B97E63C(iLocal_227, 0))
			{
				if (unk_0xBA9474B1995C6AAD(iVar2, iLocal_227))
				{
					bLocal_47 = true;
				}
			}
		}
	}
	if (bLocal_47 || bLocal_258)
	{
		settimera(0);
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 0);
		unk_0x26152FD46A297C2F(unk_0x460153A63B9477BC(), 1, 0);
		unk_0x4B86C627B5EABFBF(unk_0x460153A63B9477BC(), 0);
		unk_0x204CDAA31815E962(unk_0x460153A63B9477BC(), 0f);
		unk_0x34FEEAC2548C3789(0.1f);
		unk_0xEDE407EE61734F0F(350f);
		bLocal_47 = true;
		if (!unk_0xA59F96B50B97E63C(iLocal_226, 0) && unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_226, false))
		{
		}
		else
		{
			func_3();
			wait(0);
			if (!iLocal_240)
			{
				if (unk_0x5AEB5DDFFAD43CA5(iLocal_218) && !unk_0x5AEB5DDFFAD43CA5(iLocal_219))
				{
					func_59(&uLocal_52, 5);
					func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
				}
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[0]))
				{
					func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[1]))
				{
					unk_0x3A2AAE59B4681DAF(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
				else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[2]))
				{
					unk_0x3A2AAE59B4681DAF(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copsho", 4, 0, 0, 0);
				}
			}
			else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[0]))
			{
				func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[1]))
			{
				unk_0x3A2AAE59B4681DAF(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
			else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[2]))
			{
				unk_0x3A2AAE59B4681DAF(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_sscen3", 4, 0, 0, 0);
			}
		}
		unk_0xEFBCE8F8316F89EA(5, iLocal_242, 1862763509);
		if (!func_87())
		{
			settimera(0);
			if (!func_87())
			{
				func_74(1);
			}
		}
		if (iLocal_240)
		{
			iVar1 = 0;
			while (iVar1 < iLocal_222)
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[iVar1]))
				{
					unk_0x8FF9CE1C0F94F59A(iLocal_222[iVar1], unk_0x9B0761B4C3EB8BC7(), 0, 16);
					unk_0xCBA6B2B569DCAFD8(iLocal_222[iVar1], true);
					unk_0xDB8ED24252953530(iLocal_222[iVar1], unk_0x9B0761B4C3EB8BC7());
					unk_0xE75CEDDEA450137A(iLocal_222[iVar1], 1, 1, 1, 0);
					unk_0x17253AF44F6ED2DA(iLocal_222[iVar1], 1);
					unk_0x73745F8F1D07995D(iLocal_222[iVar1], 2);
					unk_0x6673CC701BC8E9C1(iLocal_222[iVar1], 50, true);
				}
				iVar1++;
			}
		}
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_220))
	{
		if (unk_0xCDF860E56BBCC6B4(iLocal_220, unk_0x9B0761B4C3EB8BC7(), 1))
		{
			unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 0);
			unk_0xEFBCE8F8316F89EA(5, iLocal_242, 1862763509);
			bLocal_47 = true;
		}
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_221))
	{
		if (unk_0xCDF860E56BBCC6B4(iLocal_221, unk_0x9B0761B4C3EB8BC7(), 1))
		{
			unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 0);
			unk_0xEFBCE8F8316F89EA(5, iLocal_242, 1862763509);
			bLocal_47 = true;
		}
	}
	if (unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
	{
		bLocal_47 = true;
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 0);
		unk_0xEFBCE8F8316F89EA(5, iLocal_242, 1862763509);
	}
}

int func_74(int iParam0)
{
	if (func_78())
	{
		Global_111848 = 1;
		Global_111845 = unk_0x578C4EF320340AF7();
		if (func_19(Global_111847))
		{
			func_75(0);
		}
		unk_0x694F632EFD1F47D0(1, "RE_TITLE");
		if (iParam0 && func_19(Global_111847))
		{
			unk_0x1D42FFF20D06E356();
		}
		return 1;
	}
	return 0;
}

void func_75(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_111858.f_24991.f_2 < 3)
			{
				if (!unk_0x19D4274B54F9D9FA())
				{
					func_76(func_77(iParam0), -1);
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
					func_76(func_77(iParam0), -1);
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
					func_76(func_77(iParam0), -1);
					Global_111858.f_24991.f_4++;
					unk_0xBE20AB8238688965(&Global_111854, 2);
				}
			}
			break;
	}
}

void func_76(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 0, true, iParam1);
}

char* func_77(int iParam0)
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

int func_78()
{
	switch (func_79(&Global_31027, 0, 5, 0, unk_0x354AD085195C5FA6()))
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

int func_79(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_83(0))
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
		if (!func_81(iParam2))
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
			func_80(uParam0, iParam4);
		}
	}
	return 2;
}

void func_80(var uParam0, int iParam1)
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

bool func_81(int iParam0)
{
	return func_82(iParam0, Global_41631);
}

int func_82(int iParam0, int iParam1)
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

int func_83(int iParam0)
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	if (func_81(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_84()
{
	int iVar0;
	
	if ((!unk_0x5AEB5DDFFAD43CA5(iLocal_222[0]) && !unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7())) && !unk_0x5AEB5DDFFAD43CA5(iLocal_218))
	{
	}
	if ((unk_0x1037B9D45CE6B788(unk_0x9B0761B4C3EB8BC7(), 220.6075f, 2615.145f, 35.8465f, 440.8339f, 2684.23f, 72.6324f, 183.125f, 0, true, 0) && unk_0x9A70B1BD2A5BA09C(Local_217, 1f)) || unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), 325.6556f, 2647.021f, 43.6289f, 30f, 30f, 30f, false, true, 0))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_222)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[iVar0]))
			{
				unk_0x45ADCE43E87D2472(iLocal_222[iVar0], true, iLocal_241);
				if (!unk_0x8F678487EEBD8CE4(iLocal_267[iVar0]))
				{
					iLocal_267[iVar0] = func_85(iLocal_222[iVar0], 0, 145);
					unk_0x3DBD102E8C35EA16(iLocal_267[iVar0], false);
				}
			}
			iVar0++;
		}
		if (!unk_0xA59F96B50B97E63C(iLocal_218, 0) || (!unk_0x5AEB5DDFFAD43CA5(iLocal_218) && !iLocal_249))
		{
			unk_0x45ADCE43E87D2472(iLocal_218, true, iLocal_242);
			iLocal_265 = func_85(iLocal_218, 0, 145);
			unk_0x3DBD102E8C35EA16(iLocal_265, false);
			iLocal_248 = 0;
			iLocal_249 = 1;
		}
		if (!unk_0xA59F96B50B97E63C(iLocal_219, 0) || (!unk_0x5AEB5DDFFAD43CA5(iLocal_219) && !iLocal_250))
		{
			unk_0x45ADCE43E87D2472(iLocal_219, true, iLocal_242);
			iLocal_266 = func_85(iLocal_219, 0, 145);
			unk_0x3DBD102E8C35EA16(iLocal_266, false);
			iLocal_247 = 0;
			iLocal_250 = 1;
		}
		settimera(0);
		if (!func_87())
		{
			func_74(1);
		}
	}
}

int func_85(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_86(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && unk_0x8F678487EEBD8CE4(iVar0)) && unk_0x3030AE9FCF1BC243(&(Global_1848[iParam2 /*29*/].f_3)))
	{
		unk_0xB023F5C66F5716C7(iVar0, &(Global_1848[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_86(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!unk_0xAE06B9E39EBDE049(iParam0))
	{
		return 0;
	}
	iVar0 = unk_0x2BE000892D65EA2A(iParam0);
	if (unk_0x20F7576FDB52E2B0(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_58(unk_0x25DDB354A40FFCDB(), 1f, 1f));
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
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_58(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
		unk_0x3060C53EAE54BBE7(iVar0, bParam1);
	}
	else if (unk_0x49116E591C7E1412(iParam0))
	{
		unk_0xFA81E0FBD7F5ACA0(iVar0, func_58(unk_0x25DDB354A40FFCDB(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_87()
{
	if ((Global_111847 == func_34() && unk_0xA706863F1E1DD66C()) && Global_111848)
	{
		return 1;
	}
	return 0;
}

void func_88()
{
	int iVar0;
	
	if (!iLocal_252)
	{
		if (!bLocal_47 && !iLocal_240)
		{
			if (unk_0xC2169C00B643278B(unk_0x9B0761B4C3EB8BC7(), 325.6556f, 2647.021f, 43.6289f, 30f, 30f, 30f, false, true, 0))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_222)
				{
					if (unk_0x8F678487EEBD8CE4(iLocal_267[iVar0]))
					{
						unk_0x3DBD102E8C35EA16(iLocal_267[iVar0], true);
					}
					iVar0++;
				}
				if (unk_0x8F678487EEBD8CE4(iLocal_265))
				{
					unk_0x3DBD102E8C35EA16(iLocal_265, true);
				}
				if (unk_0x8F678487EEBD8CE4(iLocal_266))
				{
					unk_0x3DBD102E8C35EA16(iLocal_266, true);
				}
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[0]))
				{
					func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[1]))
				{
					unk_0x3A2AAE59B4681DAF(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[2]))
				{
					unk_0x3A2AAE59B4681DAF(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
					func_59(&uLocal_52, 4);
					func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
					func_39(&uLocal_52, "recsbau", "recsb_copswa", 4, 0, 0, 0);
				}
				iLocal_252 = 1;
			}
		}
	}
	if ((func_87() && !iLocal_238) && !iLocal_240)
	{
		if (iLocal_255 == 0 && !func_37())
		{
			settimera(0);
			if (func_51() == 0)
			{
				func_39(&uLocal_52, "recsbau", "recsb_comm", 4, 0, 0, 0);
			}
			else if (func_51() == 1)
			{
				func_39(&uLocal_52, "recsbau", "recsb_comf", 4, 0, 0, 0);
			}
			else if (func_51() == 2)
			{
				func_39(&uLocal_52, "recsbau", "recsb_comt", 4, 0, 0, 0);
			}
			iLocal_255++;
			settimera(0);
		}
		if (iLocal_255 == 1 && !func_37())
		{
			settimera(0);
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[0]))
			{
				func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[1]))
			{
				unk_0x3A2AAE59B4681DAF(iLocal_222[1], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[1], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[2]))
			{
				unk_0x3A2AAE59B4681DAF(iLocal_222[2], "S_M_Y_RANGER_01_WHITE_FULL_01");
				func_59(&uLocal_52, 4);
				func_56(&uLocal_52, 4, iLocal_222[2], "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_banteb", 4, 0, 0, 0);
			}
			iLocal_255++;
			settimera(0);
		}
		if ((iLocal_255 == 2 && timera() > 2000) && !func_37())
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218))
			{
				func_39(&uLocal_52, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219))
			{
				func_59(&uLocal_52, 5);
				func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
				func_39(&uLocal_52, "recsbau", "recsb_bantea", 4, 0, 0, 0);
			}
			settimera(0);
			iLocal_255++;
		}
		if ((iLocal_255 == 3 && timera() > 2000) && !func_37())
		{
			if (!bLocal_48)
			{
				if (!iLocal_237)
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218))
					{
						func_39(&uLocal_52, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					else if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219))
					{
						func_59(&uLocal_52, 5);
						func_56(&uLocal_52, 5, iLocal_219, "RECSBRobber1", 0, 1);
						func_39(&uLocal_52, "recsbau", "recsb_croclo", 4, 0, 0, 0);
					}
					iLocal_237 = 1;
				}
			}
			if (!bLocal_47)
			{
				func_89(&(iLocal_222[0]), "recsb_copclo");
				func_89(&(iLocal_222[1]), "recsb_copclo");
				func_89(&(iLocal_222[2]), "recsb_copclo");
			}
		}
		if (iLocal_255 == 4 && timera() > 5000)
		{
			settimera(0);
			iLocal_255++;
		}
	}
}

void func_89(var uParam0, char* sParam1)
{
	if (!unk_0x5AEB5DDFFAD43CA5(*uParam0))
	{
		if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), *uParam0, 4f, 4f, 4f, 0, 1, 0))
		{
			if (!bLocal_47)
			{
				func_56(&uLocal_52, 4, *uParam0, "RECSBCop1", 0, 1);
				func_39(&uLocal_52, "recsbau", sParam1, 4, 0, 0, 0);
				unk_0xA785552633ED203B(*uParam0, unk_0x9B0761B4C3EB8BC7(), 10000, 48, 4);
			}
			settimera(0);
			iLocal_255++;
		}
	}
}

void func_90()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_222)
	{
		if (unk_0x5AEB5DDFFAD43CA5(iLocal_222[iVar0]))
		{
			if (unk_0x8F678487EEBD8CE4(iLocal_267[iVar0]))
			{
				unk_0x93370FA10F15BE44(&(iLocal_267[iVar0]));
			}
		}
		iVar0++;
	}
	if (unk_0x5AEB5DDFFAD43CA5(iLocal_218))
	{
		if (unk_0x8F678487EEBD8CE4(iLocal_265))
		{
			unk_0x93370FA10F15BE44(&iLocal_265);
		}
	}
	if (unk_0x5AEB5DDFFAD43CA5(iLocal_219))
	{
		if (unk_0x8F678487EEBD8CE4(iLocal_266))
		{
			unk_0x93370FA10F15BE44(&iLocal_266);
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_225)
	{
		if (!unk_0xA59F96B50B97E63C(iLocal_225[iVar0], 0))
		{
			if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_225[iVar0], false))
			{
				unk_0xC8C76D5126102B09(iLocal_225[iVar0], 0);
			}
		}
		iVar0++;
	}
	if (bLocal_48)
	{
		if (!iLocal_50)
		{
			unk_0xEFBCE8F8316F89EA(5, iLocal_241, 1862763509);
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218))
			{
				if (unk_0x8F678487EEBD8CE4(iLocal_265))
				{
					unk_0x93370FA10F15BE44(&iLocal_265);
				}
				if (!unk_0x8F678487EEBD8CE4(iLocal_265))
				{
					iLocal_265 = func_85(iLocal_218, 1, 145);
					unk_0x0DC39BE87E4C5599(iLocal_218, true);
				}
				unk_0x8FF9CE1C0F94F59A(iLocal_218, unk_0x9B0761B4C3EB8BC7(), 0, 16);
				unk_0xCBA6B2B569DCAFD8(iLocal_218, true);
				unk_0xDB8ED24252953530(iLocal_218, unk_0x9B0761B4C3EB8BC7());
				unk_0x17253AF44F6ED2DA(iLocal_218, 1);
			}
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219))
			{
				if (unk_0x8F678487EEBD8CE4(iLocal_266))
				{
					unk_0x93370FA10F15BE44(&iLocal_266);
				}
				if (!unk_0x8F678487EEBD8CE4(iLocal_266))
				{
					iLocal_266 = func_85(iLocal_219, 1, 145);
					unk_0x0DC39BE87E4C5599(iLocal_219, true);
				}
				unk_0x8FF9CE1C0F94F59A(iLocal_219, unk_0x9B0761B4C3EB8BC7(), 0, 16);
				unk_0xCBA6B2B569DCAFD8(iLocal_219, true);
				unk_0xDB8ED24252953530(iLocal_219, unk_0x9B0761B4C3EB8BC7());
				unk_0x17253AF44F6ED2DA(iLocal_219, 1);
			}
			iLocal_50 = 1;
		}
		if (bLocal_47)
		{
			if (!iLocal_51)
			{
				unk_0xEFBCE8F8316F89EA(5, iLocal_242, 1862763509);
				iVar0 = 0;
				while (iVar0 < iLocal_222)
				{
					if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[iVar0]))
					{
						unk_0x0DC39BE87E4C5599(iLocal_222[iVar0], true);
						if (unk_0x8F678487EEBD8CE4(iLocal_267[iVar0]))
						{
							unk_0x93370FA10F15BE44(&(iLocal_267[iVar0]));
						}
						unk_0x8FF9CE1C0F94F59A(iLocal_222[iVar0], unk_0x9B0761B4C3EB8BC7(), 0, 16);
						unk_0xCBA6B2B569DCAFD8(iLocal_222[iVar0], true);
						unk_0xDB8ED24252953530(iLocal_222[iVar0], unk_0x9B0761B4C3EB8BC7());
						unk_0x17253AF44F6ED2DA(iLocal_222[iVar0], 1);
					}
					iVar0++;
				}
				iLocal_51 = 1;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < iLocal_222)
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[iVar0]))
				{
					unk_0x0DC39BE87E4C5599(iLocal_222[iVar0], false);
				}
				iVar0++;
			}
		}
	}
	else if (bLocal_47)
	{
		if (!iLocal_49)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218))
			{
				unk_0x0DC39BE87E4C5599(iLocal_218, false);
			}
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219))
			{
				unk_0x0DC39BE87E4C5599(iLocal_219, false);
			}
			iLocal_49 = 1;
		}
		if (!iLocal_51)
		{
			unk_0xEFBCE8F8316F89EA(5, iLocal_242, 1862763509);
			iVar0 = 0;
			while (iVar0 < iLocal_222)
			{
				if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[iVar0]))
				{
					unk_0x0DC39BE87E4C5599(iLocal_222[iVar0], true);
					unk_0xB3F9B90AEF90F111(iLocal_222[iVar0]);
					if (unk_0x8F678487EEBD8CE4(iLocal_267[iVar0]))
					{
						unk_0x93370FA10F15BE44(&(iLocal_267[iVar0]));
					}
					if (!unk_0x8F678487EEBD8CE4(iLocal_267[iVar0]))
					{
						iLocal_267[iVar0] = func_85(iLocal_222[iVar0], 1, 145);
					}
					unk_0x8FF9CE1C0F94F59A(iLocal_222[iVar0], unk_0x9B0761B4C3EB8BC7(), 0, 16);
					unk_0xCBA6B2B569DCAFD8(iLocal_222[iVar0], true);
					unk_0xDB8ED24252953530(iLocal_222[iVar0], unk_0x9B0761B4C3EB8BC7());
					unk_0x17253AF44F6ED2DA(iLocal_222[iVar0], 1);
				}
				iVar0++;
			}
			iLocal_51 = 1;
		}
	}
}

void func_91()
{
	unk_0x78FCB2E22C41B9D5(joaat("s_m_y_ranger_01"));
	unk_0x78FCB2E22C41B9D5(joaat("a_m_y_genstreet_01"));
	unk_0x78FCB2E22C41B9D5(joaat("s_m_m_paramedic_01"));
	unk_0x78FCB2E22C41B9D5(joaat("sheriff"));
	unk_0x78FCB2E22C41B9D5(joaat("phoenix"));
	if ((((unk_0x7D167B9A0CCDA347(joaat("s_m_y_ranger_01")) && unk_0x7D167B9A0CCDA347(joaat("a_m_y_genstreet_01"))) && unk_0x7D167B9A0CCDA347(joaat("s_m_m_paramedic_01"))) && unk_0x7D167B9A0CCDA347(joaat("sheriff"))) && unk_0x7D167B9A0CCDA347(joaat("phoenix")))
	{
		unk_0x410A1E7AD7D5C774(joaat("phoenix"), true);
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 1);
		unk_0x34FEEAC2548C3789(0f);
		unk_0xC08A186299DFDA0A(Vector(44.49f, 2630.83f, 335.22f) - Vector(20f, 50f, 50f), Vector(44.49f, 2630.83f, 335.22f) + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		unk_0x01A2F6B26EAAEAC5(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 0, false, 1);
		unk_0xAF7D4BF357E8B79E(Vector(43.4932f, 2612.694f, 328.0555f) - Vector(10f, 10f, 10f), Vector(43.4932f, 2612.694f, 328.0555f) + Vector(10f, 10f, 10f), false, 1);
		unk_0xF27E737981AFB47D(328.0555f, 2612.694f, 43.4932f, 5f, 0, 0, 0, 0, false, 0);
		iLocal_226 = unk_0xCE4780E24AFDFBF9(joaat("phoenix"), 326.78f, 2626.56f, 43.5081f, 45.21f, true, true, false);
		iLocal_225[0] = unk_0xCE4780E24AFDFBF9(joaat("sheriff"), 314.1008f, 2641.67f, 43.5055f, 258.9436f, true, true, false);
		iLocal_225[1] = unk_0xCE4780E24AFDFBF9(joaat("sheriff"), 330.7097f, 2646.913f, 43.685f, 120.9436f, true, true, false);
		iLocal_225[2] = unk_0xCE4780E24AFDFBF9(joaat("sheriff"), 321.4496f, 2649.388f, 43.5706f, 105.9436f, true, true, false);
		unk_0xC78C4CB99044B637(iLocal_225[2], 1);
		unk_0xC78C4CB99044B637(iLocal_225[1], 1);
		unk_0xC78C4CB99044B637(iLocal_225[0], 1);
		unk_0x8777F28BE786D09D(iLocal_225[2], 1);
		unk_0x8777F28BE786D09D(iLocal_225[1], 1);
		unk_0x8777F28BE786D09D(iLocal_225[0], 1);
		unk_0xC8C76D5126102B09(iLocal_225[0], 1);
		unk_0xC8C76D5126102B09(iLocal_225[2], 1);
		unk_0xC8C76D5126102B09(iLocal_225[1], 1);
		unk_0x15A6C88D3C7C1882(iLocal_226, 1);
		unk_0x15A6C88D3C7C1882(iLocal_225[0], 1);
		unk_0x15A6C88D3C7C1882(iLocal_225[1], 1);
		unk_0x15A6C88D3C7C1882(iLocal_225[2], 1);
		iLocal_218 = unk_0xB3116B49FE00E2F1(19, joaat("a_m_y_genstreet_01"), 321.31f, 2615.66f, 43.4963f, 346f, 1, true);
		iLocal_219 = unk_0xB3116B49FE00E2F1(19, joaat("a_m_y_genstreet_01"), 326.25f, 2624.51f, 43.4846f, 341f, 1, true);
		iLocal_223 = unk_0xB3116B49FE00E2F1(6, joaat("s_m_y_ranger_01"), 325.3731f, 2631.16f, 43.5248f, 87f, 1, true);
		iLocal_222[0] = unk_0xB3116B49FE00E2F1(6, joaat("s_m_y_ranger_01"), 310.6203f, 2642.854f, 43.5173f, 226f, 1, true);
		iLocal_222[1] = unk_0xB3116B49FE00E2F1(6, joaat("s_m_y_ranger_01"), 319.5652f, 2650.067f, 43.5411f, 189f, 1, true);
		iLocal_222[2] = unk_0xB3116B49FE00E2F1(6, joaat("s_m_y_ranger_01"), 324.0396f, 2650.964f, 43.5983f, 214f, 1, true);
		unk_0x14EFF93E9B692DAD(iLocal_222[0], "ped_cops[0]");
		unk_0x14EFF93E9B692DAD(iLocal_222[1], "ped_cops[1]");
		unk_0x14EFF93E9B692DAD(iLocal_222[2], "ped_cops[2]");
		unk_0x042EA371AD4AE883(iLocal_222[0], true, -1, 0);
		unk_0x042EA371AD4AE883(iLocal_222[1], true, -1, 0);
		unk_0x042EA371AD4AE883(iLocal_222[2], true, -1, 0);
		unk_0x3D7F49DF8C5586D8(iLocal_219, 326.25f, 2624.51f, 43.4846f, 3.5f, 0, 0);
		unk_0x3D7F49DF8C5586D8(iLocal_218, 321.31f, 2615.66f, 43.4963f, 3.5f, 0, 0);
		unk_0x3D7F49DF8C5586D8(iLocal_222[0], 310.6203f, 2642.854f, 43.5173f, 3.5f, 0, 0);
		unk_0x3D7F49DF8C5586D8(iLocal_222[1], 319.5652f, 2650.067f, 43.5411f, 3.5f, 0, 0);
		unk_0x3D7F49DF8C5586D8(iLocal_222[2], 324.0396f, 2650.964f, 43.5983f, 3.5f, 0, 0);
		unk_0xCEB4A9E4843C1F66(iLocal_222[0]);
		unk_0xCEB4A9E4843C1F66(iLocal_222[1]);
		unk_0xCEB4A9E4843C1F66(iLocal_222[2]);
		unk_0x6673CC701BC8E9C1(iLocal_222[0], 0, true);
		unk_0x6673CC701BC8E9C1(iLocal_222[1], 0, true);
		unk_0x6673CC701BC8E9C1(iLocal_222[2], 0, true);
		unk_0x6673CC701BC8E9C1(iLocal_222[0], 1, true);
		unk_0x6673CC701BC8E9C1(iLocal_222[1], 1, true);
		unk_0x6673CC701BC8E9C1(iLocal_222[2], 1, true);
		unk_0xF94DFEAE3DD1EE7E(iLocal_222[0], 13);
		unk_0xF94DFEAE3DD1EE7E(iLocal_222[1], 13);
		unk_0xF94DFEAE3DD1EE7E(iLocal_222[2], 13);
		unk_0x6673CC701BC8E9C1(iLocal_219, 0, true);
		unk_0x6673CC701BC8E9C1(iLocal_218, 0, true);
		unk_0x6673CC701BC8E9C1(iLocal_219, 1, true);
		unk_0x6673CC701BC8E9C1(iLocal_218, 1, true);
		unk_0xFF90B7B5F1AF504A(iLocal_225[0], 0, 0, false);
		unk_0xFF90B7B5F1AF504A(iLocal_225[0], 1, 0, false);
		unk_0xFF90B7B5F1AF504A(iLocal_225[1], 1, 0, false);
		unk_0xFF90B7B5F1AF504A(iLocal_225[1], 0, 0, false);
		unk_0xFF90B7B5F1AF504A(iLocal_225[2], 1, 0, false);
		unk_0xFF90B7B5F1AF504A(iLocal_225[2], 0, 0, false);
		unk_0xFF90B7B5F1AF504A(iLocal_226, 1, 0, false);
		unk_0xFF90B7B5F1AF504A(iLocal_226, 0, 0, false);
		unk_0xA5EAD2ACE2C8BBB2(iLocal_226, true, 1);
		unk_0xDE8F8016287F771F("robbers", &iLocal_241);
		unk_0xDE8F8016287F771F("cops", &iLocal_242);
		unk_0x697DA7132EE43ABC(iLocal_223, 0, 0);
		unk_0xD3D9D7C84656DAE5(iLocal_219, iLocal_241);
		unk_0x45ADCE43E87D2472(iLocal_219, false, iLocal_242);
		unk_0x697DA7132EE43ABC(iLocal_219, 300, 0);
		unk_0x92BD213E6A0E666B(iLocal_219, joaat("weapon_pistol"), 200, true, true);
		unk_0x6C08F93084C348FC(iLocal_219, 100f);
		unk_0x567AB34DE5FDB30D(iLocal_219, 100f);
		unk_0x7509B4395FCFCC41(iLocal_219, 35f, 35f, 1);
		unk_0xF94DFEAE3DD1EE7E(iLocal_219, 13);
		unk_0xD3D9D7C84656DAE5(iLocal_218, iLocal_241);
		unk_0x45ADCE43E87D2472(iLocal_218, false, iLocal_242);
		unk_0x697DA7132EE43ABC(iLocal_218, 300, 0);
		unk_0x92BD213E6A0E666B(iLocal_218, joaat("weapon_pistol"), 200, true, true);
		unk_0x6C08F93084C348FC(iLocal_218, 100f);
		unk_0x567AB34DE5FDB30D(iLocal_218, 100f);
		unk_0x7509B4395FCFCC41(iLocal_218, 35f, 35f, 1);
		unk_0xF94DFEAE3DD1EE7E(iLocal_218, 13);
		unk_0x45ADCE43E87D2472(iLocal_222[0], false, iLocal_241);
		unk_0x45ADCE43E87D2472(iLocal_222[1], false, iLocal_241);
		unk_0x45ADCE43E87D2472(iLocal_222[2], false, iLocal_241);
		unk_0x92BD213E6A0E666B(iLocal_222[0], joaat("weapon_pumpshotgun"), 200, true, true);
		unk_0x92BD213E6A0E666B(iLocal_222[1], joaat("weapon_pistol"), 200, true, true);
		unk_0x92BD213E6A0E666B(iLocal_222[2], joaat("weapon_pumpshotgun"), 200, true, true);
		unk_0x6C08F93084C348FC(iLocal_222[0], 100f);
		unk_0x567AB34DE5FDB30D(iLocal_222[0], 100f);
		unk_0x6C08F93084C348FC(iLocal_222[1], 100f);
		unk_0x567AB34DE5FDB30D(iLocal_222[1], 100f);
		unk_0x6C08F93084C348FC(iLocal_222[2], 100f);
		unk_0x567AB34DE5FDB30D(iLocal_222[2], 100f);
		unk_0xD3D9D7C84656DAE5(iLocal_222[0], iLocal_242);
		unk_0xD3D9D7C84656DAE5(iLocal_222[1], iLocal_242);
		unk_0xD3D9D7C84656DAE5(iLocal_222[2], iLocal_242);
		unk_0x40ECEB892E6BDDDB(5, false);
		unk_0x40ECEB892E6BDDDB(3, false);
		unk_0xEFBCE8F8316F89EA(1, iLocal_242, joaat("COP"));
		unk_0xEFBCE8F8316F89EA(1, joaat("COP"), iLocal_242);
		unk_0xEFBCE8F8316F89EA(1, iLocal_242, 1862763509);
		unk_0xEFBCE8F8316F89EA(1, iLocal_241, 1862763509);
		unk_0xEFBCE8F8316F89EA(5, iLocal_242, iLocal_241);
		unk_0xEFBCE8F8316F89EA(5, joaat("COP"), iLocal_241);
		unk_0xEFBCE8F8316F89EA(5, iLocal_241, iLocal_242);
		unk_0x56185842FFEB7EE6(iLocal_222[0], iLocal_218, 3000, 0);
		unk_0x56185842FFEB7EE6(iLocal_222[1], iLocal_218, 3000, 0);
		unk_0x56185842FFEB7EE6(iLocal_222[2], iLocal_218, 3000, 0);
		if (func_51() == 0)
		{
			func_56(&uLocal_52, 0, unk_0x9B0761B4C3EB8BC7(), "MICHAEL", 0, 1);
		}
		else if (func_51() == 1)
		{
			func_56(&uLocal_52, 0, unk_0x9B0761B4C3EB8BC7(), "FRANKLIN", 0, 1);
		}
		else if (func_51() == 2)
		{
			func_56(&uLocal_52, 0, unk_0x9B0761B4C3EB8BC7(), "TREVOR", 0, 1);
		}
		func_56(&uLocal_52, 4, iLocal_222[0], "RECSBCop1", 0, 1);
		func_56(&uLocal_52, 5, iLocal_218, "RECSBRobber1", 0, 1);
		unk_0x3A2AAE59B4681DAF(iLocal_222[0], "S_M_Y_RANGER_01_WHITE_FULL_01");
		unk_0x3A2AAE59B4681DAF(iLocal_218, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		unk_0x3A2AAE59B4681DAF(iLocal_218, "G_M_Y_ArmGoon_02_White_Armenian_MINI_01");
		iLocal_45 = 1;
	}
}

void func_92(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_94(iParam0);
	unk_0x92B2940A0A0441A9(0);
	unk_0x659A1C3A1508626C(1);
	Global_111844 = 0;
	func_93();
}

void func_93()
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

void func_94(int iParam0)
{
	Global_111847 = iParam0;
}

int func_95(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		iParam1 = func_34();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_147())
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
			if (vmag2(unk_0x97C0B1E5FCD8E08A(unk_0x9B0761B4C3EB8BC7())) > 1369f && !func_146())
			{
				return 0;
			}
		}
		if (!Global_111858.f_9081)
		{
			return 0;
		}
		if (func_10(0))
		{
			return 0;
		}
		if (func_142())
		{
			return 0;
		}
		if (func_141())
		{
			return 0;
		}
		if (Global_111847 != -1)
		{
			return 0;
		}
		if (func_27(func_51()))
		{
			if (func_135(100f, 1) != -1)
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
		if (!func_134(iParam1))
		{
			return 0;
		}
		if (func_27(func_51()))
		{
			if (func_133(func_51()) == 4 || func_133(func_51()) == 5)
			{
				return 0;
			}
		}
		if (func_27(func_51()))
		{
			if (!func_132(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_131(Global_111858.f_24991.f_43[iParam1]))
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
		if (func_130())
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
		if (!func_121(4))
		{
			return 0;
		}
		if (!func_81(5))
		{
			return 0;
		}
		if (func_120(iParam1, iParam2) && !bParam3)
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
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_120(0, 0))
		{
			return 0;
		}
		if (Global_31114)
		{
			return 0;
		}
		if (func_134(30) && !func_120(30, 0))
		{
			if (iParam1 != 30)
			{
				if (vdist2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_27(func_51()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_111858.f_2359.f_539.f_2300[iVar2 /*3*/] };
				iVar4 = Global_111858.f_2359.f_539.f_2296[iVar2];
				if (func_119(iVar4))
				{
					if (func_97(iVar2))
					{
						if (!func_96(Var3, 0f, 0f, 0f, 0))
						{
							if (vdist2(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), false), Var3) < (210f * 210f))
							{
								if (func_51() != iVar2)
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

bool func_96(struct<3> Param0, struct<3> Param1, bool bParam2)
{
	if (bParam2)
	{
		return (Param0.x == Param1.x && Param0.f_1 == Param1.f_1);
	}
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_97(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_111858.f_2359.f_539.f_2296[iParam0];
	return func_98(iVar0);
}

int func_98(int iParam0)
{
	return func_99(iParam0, 1);
}

int func_99(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_119(iParam0))
	{
		return 0;
	}
	func_100(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_100(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_101(func_112(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_101(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_111(iParam0, iParam1))
	{
		iVar0 = func_110(iParam1);
		iVar1 = func_108(iParam0);
		iVar2 = (func_108(iParam0) - func_108(iParam1));
		iVar3 = (func_110(iParam0) - func_110(iParam1));
		iVar4 = (func_107(iParam0) - func_107(iParam1));
		iVar5 = (func_106(iParam0) - func_106(iParam1));
		iVar6 = (func_105(iParam0) - func_105(iParam1));
		iVar7 = (func_104(iParam0) - func_104(iParam1));
	}
	else
	{
		iVar0 = func_110(iParam0);
		iVar1 = func_108(iParam1);
		iVar2 = (func_108(iParam1) - func_108(iParam0));
		iVar3 = (func_110(iParam1) - func_110(iParam0));
		iVar4 = (func_107(iParam1) - func_107(iParam0));
		iVar5 = (func_106(iParam1) - func_106(iParam0));
		iVar6 = (func_105(iParam1) - func_105(iParam0));
		iVar7 = (func_104(iParam1) - func_104(iParam0));
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
		iVar4 = (iVar4 + func_103(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = round(func_102(to_float(iVar0 + 1), 0f, 12f));
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

float func_102(float fParam0, float fParam1, float fParam2)
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

int func_103(int iParam0, int iParam1)
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

int func_104(int iParam0)
{
	return shift_right(iParam0, 20) & 63;
}

int func_105(int iParam0)
{
	return shift_right(iParam0, 14) & 63;
}

int func_106(int iParam0)
{
	return shift_right(iParam0, 9) & 31;
}

int func_107(int iParam0)
{
	return shift_right(iParam0, 4) & 31;
}

int func_108(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_109(unk_0xCE990E643CD9D0E5(iParam0, 31), -1, 1)) + 2011;
}

int func_109(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_110(int iParam0)
{
	return iParam0 & 15;
}

int func_111(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_119(iParam1) || !func_119(iParam0))
	{
		return 1;
	}
	iVar0 = func_108(iParam0);
	iVar1 = func_108(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_110(iParam0);
	iVar1 = func_110(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_107(iParam0);
	iVar1 = func_107(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_106(iParam0);
	iVar1 = func_106(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_105(iParam0);
	iVar1 = func_105(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	iVar1 = func_104(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_112()
{
	var uVar0;
	
	func_118(&uVar0, unk_0x1D3A3697182AD8B3());
	func_117(&uVar0, unk_0x81F2E25F8C019191());
	func_116(&uVar0, unk_0x1F596C965B00E290());
	func_115(&uVar0, unk_0x371CFD525753F70C());
	func_114(&uVar0, unk_0xF225116F449A5CC6());
	func_113(&uVar0, unk_0x2E48CFA70ABFC06A());
	return uVar0;
}

void func_113(var uParam0, int iParam1)
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

void func_114(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_115(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_110(*uParam0);
	iVar1 = func_108(*uParam0);
	if (iParam1 < 1 || iParam1 > func_103(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || shift_left(iParam1, 4));
}

void func_116(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || shift_left(iParam1, 9));
}

void func_117(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || shift_left(iParam1, 14));
}

void func_118(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || shift_left(iParam1, 20));
}

int func_119(int iParam0)
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
	iVar0 = func_104(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_105(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_106(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_108(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_110(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_107(iParam0);
	if (iVar5 < 1 || iVar5 > func_103(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_120(int iParam0, int iParam1)
{
	if (unk_0xCE990E643CD9D0E5(Global_111858.f_24991.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_121(int iParam0)
{
	int iVar0;
	
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
		{
			if (!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
			{
				iVar0 = func_51();
				if (!func_27(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC()) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0x11B7C25143EE2F29(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0)) || func_129()) || Global_110905) || Global_30970) || func_128()) || func_53(8, -1)) || func_127()) || func_126()) || func_125()) || func_124()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1) || func_129()) || Global_30970) || func_128()) || func_53(8, -1)) || func_125()) || func_127()) || func_126()) || func_124()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC()) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0x11B7C25143EE2F29(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0)) || func_129()) || Global_110905) || Global_30970) || func_128()) || func_53(8, -1)) || func_125()) || func_127()) || func_126()) || func_124()) || Global_111858.f_7684.f_919[iVar0] == 5) || Global_42178 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7()) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0)) || func_129()) || Global_110905) || Global_30970) || func_128()) || func_53(8, -1)) || func_127()) || func_126()) || func_124()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_129() || unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0) || func_53(8, -1)) || func_124()) || func_123()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_53(8, -1) || func_127()) || func_126()) || func_123()) || func_122())
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
							if ((((((((((((((unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0) || unk_0x1A3D0DF92BF7D8C4(unk_0x460153A63B9477BC()) > 0) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || func_129()) || Global_30970) || func_128()) || func_53(8, -1)) || func_126()) || func_125()) || func_124()) || Global_111858.f_7684.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0) || !unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) || !unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC())) || !unk_0x87F0CB19476706C3()) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || func_129()) || func_126()) || Global_110905) || Global_30970) || func_128()) || Global_42801) || func_53(8, -1)) || func_125()) || func_123()) || func_124()) || Global_111858.f_7684.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((unk_0xF83D0A2EC884A4DD(unk_0x9B0761B4C3EB8BC7(), 0) || !unk_0x4DC4117F94CD5B84(unk_0x460153A63B9477BC())) || !unk_0x117A56F7403FC6D2(unk_0x460153A63B9477BC())) || !unk_0x87F0CB19476706C3()) || unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0)) || unk_0xA16974805191D19C(unk_0x9B0761B4C3EB8BC7())) || unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), true)) || unk_0xCED6B5226244381C(unk_0x9B0761B4C3EB8BC7())) || unk_0xEC787E1D3B804A72(unk_0x9B0761B4C3EB8BC7())) || unk_0x9D7D76BBBFE285E0(unk_0x9B0761B4C3EB8BC7())) || unk_0xD5EAF42B1EAE828F(unk_0x460153A63B9477BC(), 1)) || unk_0x5197F8CD4A72E68F(unk_0x460153A63B9477BC())) || func_129()) || Global_110905) || Global_30970) || func_128()) || func_53(8, -1)) || func_125()) || func_123()) || func_127()) || func_126()) || func_124())
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

var func_122()
{
	return Global_98994.f_1;
}

int func_123()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 13);
	}
	return 0;
}

int func_124()
{
	if (unk_0x7B70881748D166CD(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_125()
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

bool func_126()
{
	return Global_99007.f_352 > 0;
}

bool func_127()
{
	return Global_99007.f_351 > 0;
}

var func_128()
{
	return Global_1312896;
}

int func_129()
{
	if (!unk_0x25DDB354A40FFCDB())
	{
		return Global_96433.f_44 == 1;
	}
	return 0;
}

int func_130()
{
	func_50();
	if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_131(int iParam0)
{
	return func_111(func_112(), iParam0);
}

int func_132(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_51();
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

int func_133(int iParam0)
{
	if (!func_27(iParam0))
	{
		return 7;
	}
	return Global_111858.f_7684.f_919[iParam0];
}

bool func_134(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_147())
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

int func_135(float fParam0, bool bParam1)
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
		if (func_27(func_51()))
		{
			iVar5 = func_24();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 2) && !unk_0xCE990E643CD9D0E5(Global_111858.f_18570[iVar1 /*6*/], 3))
				{
					func_136(iVar1, &Var0);
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

void func_136(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_137(uParam1, "Abigail1", func_139(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 1:
			func_137(uParam1, "Abigail2", func_139(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 2:
			func_137(uParam1, "Barry1", func_139(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 3:
			func_137(uParam1, "Barry2", func_139(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 4:
			func_137(uParam1, "Barry3", func_139(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 5:
			func_137(uParam1, "Barry3A", func_139(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 6:
			func_137(uParam1, "Barry3C", func_139(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 7:
			func_137(uParam1, "Barry4", func_139(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_138(iParam0), 0, 0);
			break;
		
		case 8:
			func_137(uParam1, "Dreyfuss1", func_139(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 9:
			func_137(uParam1, "Epsilon1", func_139(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 10:
			func_137(uParam1, "Epsilon2", func_139(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 11:
			func_137(uParam1, "Epsilon3", func_139(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 12:
			func_137(uParam1, "Epsilon4", func_139(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 13:
			func_137(uParam1, "Epsilon5", func_139(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 14:
			func_137(uParam1, "Epsilon6", func_139(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 15:
			func_137(uParam1, "Epsilon7", func_139(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 16:
			func_137(uParam1, "Epsilon8", func_139(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 17:
			func_137(uParam1, "Extreme1", func_139(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 18:
			func_137(uParam1, "Extreme2", func_139(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 19:
			func_137(uParam1, "Extreme3", func_139(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 20:
			func_137(uParam1, "Extreme4", func_139(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 21:
			func_137(uParam1, "Fanatic1", func_139(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_138(iParam0), 1, 0);
			break;
		
		case 22:
			func_137(uParam1, "Fanatic2", func_139(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_138(iParam0), 1, 0);
			break;
		
		case 23:
			func_137(uParam1, "Fanatic3", func_139(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_138(iParam0), 0, 1);
			break;
		
		case 24:
			func_137(uParam1, "Hao1", func_139(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_138(iParam0), 0, 1);
			break;
		
		case 25:
			func_137(uParam1, "Hunting1", func_139(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 26:
			func_137(uParam1, "Hunting2", func_139(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 27:
			func_137(uParam1, "Josh1", func_139(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 28:
			func_137(uParam1, "Josh2", func_139(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 29:
			func_137(uParam1, "Josh3", func_139(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 30:
			func_137(uParam1, "Josh4", func_139(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 31:
			func_137(uParam1, "Maude1", func_139(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 32:
			func_137(uParam1, "Minute1", func_139(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 33:
			func_137(uParam1, "Minute2", func_139(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 34:
			func_137(uParam1, "Minute3", func_139(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 35:
			func_137(uParam1, "MrsPhilips1", func_139(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 36:
			func_137(uParam1, "MrsPhilips2", func_139(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 37:
			func_137(uParam1, "Nigel1", func_139(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 38:
			func_137(uParam1, "Nigel1A", func_139(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 39:
			func_137(uParam1, "Nigel1B", func_139(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_138(iParam0), 1, 1);
			break;
		
		case 40:
			func_137(uParam1, "Nigel1C", func_139(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_138(iParam0), 1, 1);
			break;
		
		case 41:
			func_137(uParam1, "Nigel1D", func_139(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_138(iParam0), 1, 1);
			break;
		
		case 42:
			func_137(uParam1, "Nigel2", func_139(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 43:
			func_137(uParam1, "Nigel3", func_139(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 1);
			break;
		
		case 44:
			func_137(uParam1, "Omega1", func_139(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 45:
			func_137(uParam1, "Omega2", func_139(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 46:
			func_137(uParam1, "Paparazzo1", func_139(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 47:
			func_137(uParam1, "Paparazzo2", func_139(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 48:
			func_137(uParam1, "Paparazzo3", func_139(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 49:
			func_137(uParam1, "Paparazzo3A", func_139(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 50:
			func_137(uParam1, "Paparazzo3B", func_139(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 51:
			func_137(uParam1, "Paparazzo4", func_139(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 52:
			func_137(uParam1, "Rampage1", func_139(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 54:
			func_137(uParam1, "Rampage3", func_139(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 55:
			func_137(uParam1, "Rampage4", func_139(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 56:
			func_137(uParam1, "Rampage5", func_139(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_138(iParam0), 0, 0);
			break;
		
		case 53:
			func_137(uParam1, "Rampage2", func_139(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_138(iParam0), 1, 0);
			break;
		
		case 57:
			func_137(uParam1, "TheLastOne", func_139(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 58:
			func_137(uParam1, "Tonya1", func_139(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 59:
			func_137(uParam1, "Tonya2", func_139(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 60:
			func_137(uParam1, "Tonya3", func_139(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 61:
			func_137(uParam1, "Tonya4", func_139(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		case 62:
			func_137(uParam1, "Tonya5", func_139(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_138(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_137(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)
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

int func_138(int iParam0)
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

struct<2> func_139(int iParam0)
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_140(iParam0) };
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

struct<2> func_140(int iParam0)
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

int func_141()
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

int func_142()
{
	if (func_145() && !func_146())
	{
		return 1;
	}
	if (func_144() && func_143())
	{
		return 1;
	}
	return 0;
}

bool func_143()
{
	return Global_111576 > 0;
}

int func_144()
{
	if (Global_95877 != -1)
	{
		return 1;
	}
	return 0;
}

int func_145()
{
	if (Global_95877 != -1)
	{
		return unk_0xCE990E643CD9D0E5(Global_89743[Global_95877 /*34*/].f_15, 20);
	}
	return 0;
}

int func_146()
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

int func_147()
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

void func_148()
{
	int iVar0;
	
	if (iLocal_46)
	{
		unk_0x93370FA10F15BE44(&iLocal_265);
		unk_0x93370FA10F15BE44(&iLocal_266);
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 0);
		unk_0x34FEEAC2548C3789(1f);
		unk_0xD5387B9EE8DC1379();
		unk_0xEA1D26E78A0A9984(unk_0x460153A63B9477BC());
		unk_0x6F9222C1283B5094(418.2996f, 2650.597f, 42.84723f, 297.8981f, 2617.968f, 53.6412f, 49.6875f, 1);
		unk_0x7C58E35D84128447();
		unk_0xAF7D4BF357E8B79E(Vector(43.4932f, 2612.694f, 328.0555f) - Vector(10f, 10f, 10f), Vector(43.4932f, 2612.694f, 328.0555f) + Vector(10f, 10f, 10f), true, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_222)
		{
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_222[iVar0]))
			{
				unk_0x4E65320BC9AD521C(iLocal_222[iVar0], false);
				if (unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()))
				{
					unk_0xCEB4A9E4843C1F66(iLocal_222[iVar0]);
					unk_0xCBA6B2B569DCAFD8(iLocal_222[iVar0], true);
				}
			}
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_218))
			{
				unk_0x694113444F21E39F(iLocal_218, 317, true);
				unk_0x4E65320BC9AD521C(iLocal_218, false);
				if (!unk_0x80FF6C016CDB0FAF(iLocal_226, 0))
				{
					if (unk_0xE0B3BC41DDA88DF0(iLocal_218, iLocal_226, false))
					{
						unk_0x756046956300306A(iLocal_226, 1);
					}
				}
			}
			if (!unk_0x5AEB5DDFFAD43CA5(iLocal_219))
			{
				unk_0x694113444F21E39F(iLocal_219, 317, true);
				unk_0x4E65320BC9AD521C(iLocal_219, false);
				if (!unk_0x80FF6C016CDB0FAF(iLocal_226, 0))
				{
					if (unk_0xE0B3BC41DDA88DF0(iLocal_219, iLocal_226, false))
					{
						unk_0x756046956300306A(iLocal_226, 1);
					}
				}
			}
			iVar0++;
		}
	}
	func_149(-1);
	unk_0xD39E529EBE5DB04F();
}

void func_149(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_34();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_87())
	{
		func_153(iParam0);
		unk_0x694F632EFD1F47D0(0, 0);
		Global_111849 = unk_0x578C4EF320340AF7();
		func_152(30000);
		StringCopy(&cVar0, func_151(Global_111847, 1), 64);
		if (func_33(Global_111847) > 0)
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
	func_150(&Global_31027);
	Global_111848 = 0;
	func_94(-1);
}

void func_150(var uParam0)
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

char* func_151(int iParam0, bool bParam1)
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

void func_152(int iParam0)
{
	Global_42182 = (unk_0x578C4EF320340AF7() + iParam0);
}

void func_153(int iParam0)
{
	func_154(iParam0, 0, func_159(iParam0));
}

void func_154(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_112();
	func_157(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_156(iParam0, &uVar0);
	Var1 = { func_155(&uVar0) };
}

struct<16> func_155(var uParam0)
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_106(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_105(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_104(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_107(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_110(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_108(*uParam0), 64);
	return Var0;
}

void func_156(int iParam0, var uParam1)
{
	Global_111858.f_24991.f_43[iParam0] = *uParam1;
}

void func_157(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_108(*uParam0);
	iVar1 = func_110(*uParam0);
	iVar2 = func_107(*uParam0);
	iVar3 = func_106(*uParam0);
	iVar4 = func_105(*uParam0);
	iVar5 = func_104(*uParam0);
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
	iVar6 = func_103(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_103(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_158(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_158(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_118(uParam0, iParam1);
	func_117(uParam0, iParam2);
	func_116(uParam0, iParam3);
	func_114(uParam0, iParam5);
	func_115(uParam0, iParam4);
	func_113(uParam0, iParam6);
}

int func_159(int iParam0)
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

