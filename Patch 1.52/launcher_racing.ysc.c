#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	float fLocal_17 = 0f;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	char* sLocal_23 = NULL;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	struct<4> Local_40[10];
	bool bLocal_41 = 0;
	int iLocal_42 = 0;
	struct<6> Local_43 = { 10, 0, -1, 1000, -1, 0 } ;
	struct<3> Local_44 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	struct<3> Local_59 = { 0, 0, 0 } ;
	float fLocal_60 = 0f;
	int iLocal_61 = 0;
	struct<3> Local_62 = { 0, 0, 0 } ;
	float fLocal_63 = 0f;
	struct<3> Local_64[3];
	float fLocal_65[3] = { 0f, 0f, 0f };
	struct<3> Local_66[7];
	float fLocal_67[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_68[3] = { 0, 0, 0 };
	int iLocal_69[3] = { 0, 0, 0 };
	int iLocal_70[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	char[] cLocal_73[8] = 0;
	char* sLocal_74[7] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_84 = { 0, 0, 0 } ;
	struct<3> Local_85 = { 0, 0, 0 } ;
	struct<3> Local_86 = { 0, 0, 0 } ;
	float fLocal_87 = 0f;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 8;
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
	var uLocal_237 = 1;
	struct<2> Local_238 = { 0, 5 } ;
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
	var uLocal_254 = 5;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
#endregion

void __EntryFunction__()
{
	iLocal_5 = 1;
	iLocal_6 = 134;
	iLocal_7 = 134;
	iLocal_8 = 1;
	iLocal_9 = 1;
	iLocal_10 = 1;
	iLocal_11 = 134;
	iLocal_12 = 1;
	iLocal_13 = 12;
	iLocal_14 = 12;
	fLocal_17 = 0.001f;
	iLocal_20 = -1;
	sLocal_23 = "NULL";
	fLocal_24 = 0f;
	fLocal_28 = -0.0375f;
	fLocal_29 = 0.17f;
	fLocal_33 = 80f;
	fLocal_34 = 140f;
	fLocal_35 = 180f;
	iLocal_38 = 3;
	iLocal_46 = 1;
	bLocal_55 = true;
	iLocal_72 = joaat("feltzer2");
	iLocal_75 = 1;
	Local_83 = { 0f, 0f, 0f };
	Local_84 = { 1f, 1f, 1f };
	Local_85 = { 0f, 0f, 0f };
	Local_86 = { 0f, 0f, 0f };
	fLocal_87 = 0f;
	unk_0x2354C1CC1CA65629(1);
	Local_44 = { ScriptParam_238.f_1[0 /*3*/] };
	if (unk_0xED06FD5709A59F02(83))
	{
		func_216(0);
	}
	func_213();
	switch (Local_43.f_1)
	{
		case 1:
		case 2:
			if (!func_212(0, 8))
			{
				func_216(0);
			}
			if (!func_211(Local_43))
			{
				func_216(0);
			}
			break;
		
		case 3:
			if (!func_212(0, 7))
			{
				func_216(0);
			}
			break;
		
		case 0:
			func_216(0);
			break;
	}
	func_205();
	if (!func_181())
	{
		func_216(0);
	}
	func_175();
	while (true)
	{
		func_172(&uLocal_90);
		if (func_181())
		{
			if (unk_0x1116855A2A7A342C())
			{
				switch (iLocal_42)
				{
					case 0:
						iLocal_42 = 1;
						break;
					
					case 1:
						func_163();
						func_132();
						break;
					
					case 2:
						func_66();
						break;
					
					case 3:
						func_1();
						break;
				}
			}
			else
			{
				func_216(0);
			}
		}
		else
		{
			func_216(0);
		}
		wait(0);
	}
}

void func_1()
{
	if (!bLocal_53)
	{
		func_9();
	}
	else
	{
		func_2();
	}
}

void func_2()
{
	func_8(-1);
	func_7(0);
	func_6(Local_44);
	func_5();
	Global_1312366 = 1;
	Global_1312366.f_1 = Local_43;
	StringCopy(&(Global_1312366.f_2), func_4(), 24);
	StringCopy(&(Global_1312366.f_8), func_3(Local_43), 32);
	Global_1312366.f_16 = { Local_44 };
	Global_1312899 = 1;
	func_216(1);
}

char* func_3(int iParam0)
{
	char* sVar0;
	
	if (unk_0x59ED414969A48197())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (unk_0x11E5DE894D6A8A5F())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (unk_0xDCA0815D900F27F8())
	{
		switch (iParam0)
		{
			case 8:
				sVar0 = "qLp8OsaeTkCjzhK0SZoRVA";
				break;
			
			case 6:
				sVar0 = "JhV_7Ir4ekSQLafj22vFkg";
				break;
			
			case 7:
				sVar0 = "Fuc2Yl2sukOrORoMo1YJ1A";
				break;
			
			case 5:
				sVar0 = "aNlcpqEkhUytgK-8IMbTYQ";
				break;
			
			case 0:
				sVar0 = "9aLp9VEnME25Mp_6XZaw0A";
				break;
			
			case 2:
				sVar0 = "lT9gI2mfrkGDhiW1lSlhbw";
				break;
			
			case 3:
				sVar0 = "YxiNucGMGEu4lCKqizI2lA";
				break;
			
			case 1:
				sVar0 = "szYNFSberECI5goiWsh1bw";
				break;
			
			case 4:
				sVar0 = "nZ4p_4_F0EOFyZa2yKEHGA";
				break;
		}
	}
	else if (unk_0xC6C08C02733D02C8())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
		}
	}
	else if (unk_0xF8EDFF98A9C94C74())
	{
		switch (iParam0)
		{
			case 0:
				sVar0 = "dm_test_20";
				break;
			
			case 1:
				sVar0 = "dm_test_18";
				break;
			
			case 2:
				sVar0 = "dm_test_2";
				break;
			
			case 3:
				sVar0 = "dm_test_4";
				break;
			
			case 4:
				sVar0 = "dm_test_5";
				break;
			
			case 5:
				sVar0 = "dm_test_16";
				break;
			
			case 6:
				sVar0 = "dm_test_13";
				break;
			
			case 7:
				sVar0 = "dm_test_15";
				break;
			
			case 8:
				sVar0 = "dm_test_24";
				break;
			}
	}
	return sVar0;
}

char* func_4()
{
	char* sVar0;
	
	if (unk_0x59ED414969A48197())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0x11E5DE894D6A8A5F())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0xDCA0815D900F27F8())
	{
		sVar0 = "SPRACE";
	}
	else if (unk_0xC6C08C02733D02C8())
	{
		sVar0 = "2535285330962926";
	}
	else if (unk_0xF8EDFF98A9C94C74())
	{
		sVar0 = "SPRACE";
	}
	else
	{
		sVar0 = "SPRACE";
	}
	return sVar0;
}

void func_5()
{
	unk_0xBE20AB8238688965(&Global_1312443, 0);
}

void func_6(struct<3> Param0)
{
	Global_1312443.f_6 = { Param0 };
}

void func_7(int iParam0)
{
	Global_1312443.f_2 = iParam0;
}

void func_8(int iParam0)
{
	Global_1312443.f_1 = iParam0;
}

void func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	Local_43.f_2 = -1;
	if (func_65(unk_0x9B0761B4C3EB8BC7()))
	{
		if (!unk_0x2489BECD123A725B(unk_0x9B0761B4C3EB8BC7()))
		{
			unk_0x6A4846EF125EA7E6(unk_0x9B0761B4C3EB8BC7(), 0);
		}
	}
	while (!func_59())
	{
		wait(0);
	}
	if (Local_43.f_1 != 3)
	{
		func_16(func_53(), 1, Local_43.f_3);
		iVar0 = unk_0x578C4EF320340AF7() + 1500;
		iVar1 = unk_0xA5D3CD332CD10EE9();
		if (func_14(iVar1))
		{
			while (!func_12(iVar1, 3f, 2, 1056964608, 0, 1, 0) || unk_0x578C4EF320340AF7() < iVar0)
			{
				wait(0);
			}
		}
		iVar2 = unk_0x2639A2323BEA8CC6();
		if (unk_0x5A228A6A51E757C8(iVar2))
		{
			unk_0xDDEDC06C88DA4E04(iVar2, false, 0);
		}
	}
	func_10();
}

void func_10()
{
	if (!func_11(0))
	{
		unk_0xBE9B3870B1B370E3("mission_Race");
		while (!unk_0x8DC2EFD1CECAA468("mission_Race"))
		{
			unk_0xBE9B3870B1B370E3("mission_Race");
			wait(0);
		}
		start_new_script_with_args("mission_Race", &Local_43, 6, 37500);
	}
	unk_0x5F82526B41A5EBCE("mission_Race");
	func_216(1);
}

bool func_11(bool bParam0)
{
	if (!bParam0 && unk_0x7B70881748D166CD(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return unk_0xCE990E643CD9D0E5(Global_77081, 0);
}

int func_12(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
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
	func_13(iParam0);
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

void func_13(int iParam0)
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

int func_14(int iParam0)
{
	if (func_15(iParam0))
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

int func_15(int iParam0)
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

int func_16(int iParam0, int iParam1, int iParam2)
{
	if (func_52(iParam0) == 3)
	{
		return 0;
	}
	if (func_52(iParam0) == 4)
	{
		return 0;
	}
	return func_17(func_52(iParam0), 0, iParam1, iParam2, 0);
}

int func_17(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_51();
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
					func_50(99, 1);
					func_49(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 1:
					func_49(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
				
				case 2:
					func_49(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
			func_33(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_28(5))
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
							func_49(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 1:
							func_49(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
						
						case 2:
							func_49(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
					if (func_28(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_49(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 1:
							func_49(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
						
						case 2:
							func_49(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_49(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 1:
							func_49(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
						
						case 2:
							func_49(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_49(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 1:
							func_49(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
						
						case 2:
							func_49(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
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
									func_49(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 1:
									func_49(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
								
								case 2:
									func_49(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_49(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 1:
									func_49(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
								
								case 2:
									func_49(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
							if (func_28(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_49(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 1:
									func_49(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
								
								case 2:
									func_49(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_49(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 1:
									func_49(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
								
								case 2:
									func_49(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
							func_27(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_50(95, iParam3);
					break;
				
				case 1:
					func_50(97, iParam3);
					break;
				
				case 2:
					func_50(96, iParam3);
					break;
			}
			func_50(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = floor((fVar0 * to_float(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_20(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_20(iVar1);
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
					func_49(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 1:
					func_49(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
				
				case 2:
					func_49(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
	func_19(iParam0);
	if (Global_41631 == 15)
	{
		func_18(0);
	}
	return 1;
}

void func_18(bool bParam0)
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

void func_19(int iParam0)
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

void func_20(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_26(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_26(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_26(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_26(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_23(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_23(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_23(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_23(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_23(8274, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_23(8275, 0, -1, 1, 0);
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
	else if (unk_0xCE990E643CD9D0E5(Global_111858.f_20560.f_471, iParam0) || unk_0xCE990E643CD9D0E5(Global_2097152[func_22() /*10931*/].f_6175.f_10, iParam0))
	{
		bVar0 = true;
		unk_0xD2459066EA58CE43(&(Global_111858.f_20560.f_471), iParam0);
		unk_0xD2459066EA58CE43(&(Global_2097152[func_22() /*10931*/].f_6175.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		unk_0x5B8DD855EAFD33B5("COUP_RED");
		unk_0x6A826E35A3096ED0(func_21(iParam0));
		unk_0x39E1440587355CC1(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_21(int iParam0)
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

int func_22()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_23(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_24(iParam2)];
	if (iVar0 != 0)
	{
		unk_0x6000E4684CB4330B(iVar0, iParam1, iParam3);
	}
}

int func_24(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_25();
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

int func_25()
{
	return Global_1312763;
}

int func_26(int iParam0, bool bParam1, int iParam2, int iParam3)
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
		iParam2 = func_25();
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

void func_27(int iParam0)
{
	func_50(93, iParam0);
	func_50(29, iParam0);
	func_50(30, iParam0);
}

bool func_28(int iParam0)
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
		return func_30(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_30(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_30(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_30(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = unk_0x5A002C4821A13338();
		iVar1 = func_29(8270, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = unk_0x5A002C4821A13338();
		iVar3 = func_29(8271, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = unk_0x5A002C4821A13338();
		iVar5 = func_29(8272, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = unk_0x5A002C4821A13338();
		iVar7 = func_29(8273, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = unk_0x5A002C4821A13338();
		iVar9 = func_29(8274, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = unk_0x5A002C4821A13338();
		iVar11 = func_29(8275, -1, 0);
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
	return unk_0xCE990E643CD9D0E5(Global_2097152[func_22() /*10931*/].f_6175.f_10, iParam0);
}

int func_29(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_24(iParam1)];
		if (unk_0xD2F202166691EDB2(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_30(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_25();
	}
	iVar1 = func_32(iParam0, iParam1);
	uVar2 = func_31(iParam0);
	if (0 != iVar1)
	{
		iVar0 = unk_0x9FD0AD883E4A7C1E(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_31(int iParam0)
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

int func_32(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_25();
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

int func_33(bool bParam0)
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
		func_48(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_34(27, 1);
	return 1;
}

int func_34(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_35(iParam0, iParam1);
}

int func_35(int iParam0, int iParam1)
{
	if (func_47(14) && !func_46(iParam0))
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
	if (func_45(&Global_4271324))
	{
		if (func_43(&Global_4271324, iParam0))
		{
			return 0;
		}
		if (func_36(&Global_4271324, iParam0))
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

int func_36(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (unk_0x027BA2E902FAC118(iParam1))
	{
		return 0;
	}
	if (func_47(14) && !func_46(iParam1))
	{
		return 0;
	}
	if (func_43(uParam0, iParam1))
	{
		return 0;
	}
	if (func_42(uParam0) < 0f)
	{
		func_41(uParam0, 0);
	}
	func_39(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_37(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_37(var uParam0, int iParam1)
{
	int iVar0;
	
	if (unk_0x027BA2E902FAC118(iParam1))
	{
		return 0;
	}
	if (func_47(14) && !func_46(iParam1))
	{
		return 0;
	}
	if (func_43(uParam0, iParam1))
	{
		return 0;
	}
	if (func_42(uParam0) < 0f)
	{
		func_41(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_38(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_38(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_39(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_40(uParam0, iVar0);
		iVar0++;
	}
	func_41(uParam0, (Global_4271323 - 0.5f));
}

void func_40(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_41(var uParam0, float fParam1)
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

float func_42(var uParam0)
{
	return uParam0->f_80;
}

bool func_43(var uParam0, int iParam1)
{
	return func_44(uParam0, iParam1) != -1;
}

int func_44(var uParam0, int iParam1)
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

bool func_45(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_46(int iParam0)
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

bool func_47(int iParam0)
{
	return Global_41631 == iParam0;
}

int func_48(int iParam0, int iParam1)
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

void func_49(int iParam0, int iParam1)
{
	int iVar0;
	
	unk_0xD2F202166691EDB2(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	unk_0x6000E4684CB4330B(iParam0, iVar0, 1);
}

void func_50(int iParam0, int iParam1)
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

void func_51()
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

int func_52(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_17;
}

int func_53()
{
	func_54();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_54()
{
	int iVar0;
	
	if (unk_0xAE06B9E39EBDE049(unk_0x9B0761B4C3EB8BC7()))
	{
		if (func_57(Global_111858.f_2359.f_539.f_4321) != unk_0x36FE6D3220816ADA(unk_0x9B0761B4C3EB8BC7()))
		{
			iVar0 = func_56(unk_0x9B0761B4C3EB8BC7());
			if (func_55(iVar0) && (!func_47(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_55(Global_111858.f_2359.f_539.f_4321))
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

bool func_55(int iParam0)
{
	return iParam0 < 3;
}

int func_56(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (unk_0xAE06B9E39EBDE049(iParam0))
	{
		iVar1 = unk_0x36FE6D3220816ADA(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_57(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_57(int iParam0)
{
	if (func_55(iParam0))
	{
		return func_58(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_58(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

int func_59()
{
	int iVar0;
	
	iVar0 = func_60(&(Local_43.f_2), 0, 9, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	return 1;
}

int func_60(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
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
		if (func_64(0))
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
		if (!func_62(iParam2))
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
			func_61(uParam0, iParam4);
		}
	}
	return 2;
}

void func_61(var uParam0, int iParam1)
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

bool func_62(int iParam0)
{
	return func_63(iParam0, Global_41631);
}

int func_63(int iParam0, int iParam1)
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

int func_64(int iParam0)
{
	if (Global_41631 == 15)
	{
		return 0;
	}
	if (func_62(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_65(int iParam0)
{
	if (func_15(iParam0))
	{
		if (!unk_0x5AEB5DDFFAD43CA5(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_66()
{
	int iVar0;
	
	switch (iLocal_49)
	{
		case 0:
			if (func_130(0, -1, 0))
			{
				unk_0xD289B55B6AADBA10(1);
				func_122();
				unk_0x96F763331D19ED14(0);
				iLocal_54 = 1;
				bLocal_52 = false;
				bLocal_53 = false;
				iLocal_49 = 1;
			}
			break;
		
		case 1:
			if (func_79())
			{
				iLocal_49 = 2;
			}
			break;
		
		case 2:
			iVar0 = unk_0x2639A2323BEA8CC6();
			unk_0xD28B53FDA67841A1(iVar0, 0);
			unk_0xDDEDC06C88DA4E04(iVar0, true, 0);
			func_70(0, 1, 1, 0, 0, 0, 0);
			func_67(1, -1);
			iLocal_49 = 0;
			if (bLocal_52)
			{
				iLocal_42 = 3;
			}
			else
			{
				unk_0x96F763331D19ED14(1);
				iLocal_42 = 1;
			}
			break;
	}
}

void func_67(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_69(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_22550.f_8417)
	{
		unk_0x610B4083B1F95914(15);
		Global_22550.f_8417 = 0;
	}
	unk_0x530DC1525CA60B00(0f);
	if (Global_22550.f_5628[iVar0])
	{
		unk_0x5D52AA94798846BB(9, false);
		Global_22550.f_5628[iVar0] = 0;
	}
	if (Global_22550.f_5614[iVar0])
	{
		unk_0x2DDA2C702A92866E("CommonMenu");
		Global_22550.f_5614[iVar0] = 0;
	}
	if (Global_22550.f_5621[iVar0])
	{
		unk_0x2DDA2C702A92866E("MPShopSale");
		Global_22550.f_5621[iVar0] = 0;
	}
	if (bParam0)
	{
		func_68(&(Global_22550.f_5660[iVar0 /*10*/]));
		Global_22550.f_5721[iVar0] = 0;
	}
	else
	{
		Global_22550.f_5721[iVar0] = 0;
	}
}

void func_68(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (unk_0x95EF219D38B20CFF(*iParam0))
		{
			unk_0x2E352DDBBF674246(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_69(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (unk_0x25DDB354A40FFCDB() && unk_0x82CC259B7B4F4AD9())
		{
			iParam2 = unk_0x1D39C24C852E6DFA();
		}
	}
	StringCopy(&cVar0, unk_0x6C5C6B207AA78253(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = unk_0x856D5567211886A2(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_22550.f_5721[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_22550.f_5721[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_22550.f_5721[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_70(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam0)
	{
		unk_0x967251943AD606D5(unk_0x460153A63B9477BC(), 0);
		unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 1);
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 1);
		func_78(1);
		unk_0x86529CF5C6F9D6AE();
		unk_0x6D3823E5CADC313B();
		if (Global_19681.f_1 > 3 && !bParam6)
		{
			if (unk_0x6B12213471F330A3())
			{
				unk_0xBE4122AC23440E7D(false);
			}
			if (!func_77())
			{
				Global_19681.f_1 = 3;
			}
			Global_21005 = 5;
		}
		func_76(1, iParam3, iParam2, 0);
		Global_61723 = 1;
		Global_74033 = 1;
		Global_76831 = 1;
	}
	else
	{
		func_78(0);
		unk_0x51C14866CB8A57BF();
		Global_61723 = 0;
		if (bParam1)
		{
			unk_0x86A985A804621EB7();
		}
		unk_0xAF3D0236D181BE08(unk_0x460153A63B9477BC(), 0);
		unk_0x23F7D177F71818C3(unk_0x460153A63B9477BC(), 0);
		func_76(0, iParam3, iParam2, 0);
		if (unk_0x25DDB354A40FFCDB())
		{
			if (((((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !func_74(unk_0x460153A63B9477BC())) && !func_72(unk_0x460153A63B9477BC(), 0)) && !func_71()) && !bParam4) && !bParam5)
			{
				unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), false);
			}
		}
		else if (((!unk_0x5AEB5DDFFAD43CA5(unk_0x9B0761B4C3EB8BC7()) && !func_74(unk_0x460153A63B9477BC())) && !bParam4) && !bParam5)
		{
			unk_0x0312E5501F93E5AB(unk_0x9B0761B4C3EB8BC7(), false);
		}
		Global_76831 = 0;
	}
}

bool func_71()
{
	return unk_0xCE990E643CD9D0E5(Global_1590682[unk_0x460153A63B9477BC() /*883*/].f_39.f_18, 14);
}

bool func_72(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == unk_0x460153A63B9477BC())
	{
		bVar0 = func_73(-1, 0) == 8;
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

int func_73(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_25();
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

int func_74(int iParam0)
{
	if (func_72(iParam0, 0))
	{
		return 1;
	}
	if (func_75())
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

bool func_75()
{
	return unk_0xCE990E643CD9D0E5(Global_2359302, 3);
}

int func_76(int iParam0, int iParam1, var uParam2, int iParam3)
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

int func_77()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_78(int iParam0)
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

int func_79()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	
	func_121(&iVar0, &iVar1, &uVar2, &uVar3, 0);
	unk_0x26A60F42A1132477(2, 201);
	unk_0x26A60F42A1132477(2, 202);
	unk_0x26A60F42A1132477(2, 188);
	unk_0x26A60F42A1132477(2, 187);
	if (iLocal_51 != 0)
	{
		if (timera() > 800 || (((iVar1 > -64 && iVar1 < 64) && iVar0 > -64) && iVar0 < 64))
		{
			iLocal_51 = 0;
		}
		else
		{
			iVar0 = 0;
			iVar1 = 0;
		}
	}
	bVar4 = (iVar1 < -64 || unk_0x1BD7199394D7F19A(2, 188));
	bVar5 = (iVar1 > 64 || unk_0x1BD7199394D7F19A(2, 187));
	bVar6 = unk_0x1BD7199394D7F19A(2, 201);
	bVar7 = unk_0x1BD7199394D7F19A(2, 202);
	bVar8 = (iVar1 < -64 || iVar1 > 64);
	if (bVar6)
	{
		if (iLocal_50 == 1)
		{
			bLocal_53 = true;
		}
		else
		{
			bLocal_53 = false;
		}
		bLocal_52 = true;
		return 1;
	}
	else if (bVar7)
	{
		iLocal_76 = 0;
		bLocal_52 = false;
		return 1;
	}
	else
	{
		if (bVar5)
		{
			if (iLocal_50 == 0)
			{
				iLocal_50 = 1;
			}
			else if (iLocal_50 == 0)
			{
			}
		}
		else if (bVar4)
		{
			if (iLocal_50 == 1)
			{
				iLocal_50 = 0;
			}
			else if (iLocal_50 == 1)
			{
			}
		}
		if (bVar5 || bVar4)
		{
			if (bVar8)
			{
				settimera(0);
				iLocal_51 = 1;
			}
			func_120(iLocal_50, 1, 1);
		}
	}
	func_80(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
	return 0;
}

void func_80(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
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
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int iVar58;
	int iVar59;
	float fVar60;
	float fVar61;
	float fVar62;
	char cVar63[64];
	char cVar64[64];
	float fVar65;
	int iVar66;
	float fVar67;
	float fVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_69(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_117(0, bParam6))
	{
		return;
	}
	unk_0xFCC7EAA298CE7AC2(76, 84);
	unk_0xFFA39C4568552522(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	fVar56 = 0f;
	if (Global_22550)
	{
		if (func_115(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar55 = fVar37;
			fVar56 = fVar36;
			fVar55 = (fVar55 + 0f);
		}
		else
		{
			Global_22550 = 0;
		}
	}
	if (unk_0x856D5567211886A2(&(Global_22550.f_1)) == unk_0x856D5567211886A2("HIDE"))
	{
		fVar57 = Global_22548;
	}
	else
	{
		fVar57 = (((Global_22548 + fVar55) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_22549;
	}
	fVar60 = 1f;
	if (bParam7)
	{
		unk_0x9DD549AAA043F83A(&iVar58, &iVar59);
		fVar61 = unk_0x8940B46482DD0A7D(0);
		if (func_114())
		{
			iVar58 = round((to_float(iVar59) * fVar61));
		}
		fVar62 = (to_float(iVar58) / to_float(iVar59));
		fVar60 = (fVar62 / fVar61);
		if (func_114())
		{
			fVar60 = 1f;
		}
		iVar58 = round((to_float(iVar58) / fVar60));
		iVar59 = round((to_float(iVar59) / fVar60));
	}
	else
	{
		unk_0x8BAB7B3A2C7777A5(&iVar58, &iVar59);
	}
	if (bParam3)
	{
		if (Global_22550.f_5218 <= 1)
		{
			func_110(Global_22550.f_5218 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0);
			Global_22550.f_6014 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_22550.f_5728)
		{
			if (unk_0x856D5567211886A2(&(Global_22550.f_1)) == unk_0x856D5567211886A2("HIDE"))
			{
				fVar49 = Global_22548;
			}
			else
			{
				if (Global_22550)
				{
					StringCopy(&cVar63, func_109(29), 64);
					StringCopy(&cVar64, func_106(29, 1), 64);
					if (unk_0x856D5567211886A2(&(Global_22550.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_105(Global_22547, Global_22548, fParam5, (fVar55 - 0f), 0, 0, 0, 255);
						unk_0x177AA645FB4B3A38(&cVar63, &cVar64, (Global_22547 + (fParam5 * 0.5f)), (Global_22548 + ((fVar55 - 0f) * 0.5f)), fVar56, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						unk_0x177AA645FB4B3A38(&cVar63, &cVar64, (Global_22547 + (fParam5 * 0.5f)), (Global_22548 + ((fVar55 - 0f) * 0.5f)), fParam5, (fVar55 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_22550.f_8387)
				{
					iVar1 = Global_22550.f_8383;
					iVar2 = Global_22550.f_8384;
					iVar3 = Global_22550.f_8385;
					iVar4 = Global_22550.f_8386;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_105(Global_22547, (Global_22548 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_22548 + fVar55) + 0.034722f) + 0f);
				if (unk_0x856D5567211886A2(&(Global_22550.f_1)) != 0)
				{
					func_104();
					unk_0x40A75E32D30C605F(&(Global_22550.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_22550.f_68)
					{
						if (Global_22550.f_5[iVar14] == 2)
						{
							unk_0x42710E9E08FA375A(Global_22550.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_22550.f_5[iVar14] == 3)
						{
							unk_0x5BC8B357341A4FEE(Global_22550.f_14[iVar16], Global_22550.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_22550.f_5[iVar14] == 1)
						{
							unk_0x6A826E35A3096ED0(&(Global_22550.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22550.f_5[iVar14] == 8)
						{
							unk_0x6A826E35A3096ED0(&(Global_22550.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_22550.f_5[iVar14] == 5)
						{
							unk_0x9EFD301E3BE8324E(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22550.f_5[iVar14] == 6)
						{
							unk_0x6A826E35A3096ED0(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22550.f_5[iVar14] == 7)
						{
							unk_0x9EFD301E3BE8324E(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_22550.f_5[iVar14] == 9)
						{
							unk_0x9EFD301E3BE8324E(&(Global_22550.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					unk_0xA434CC17B5517E4E((Global_22547 + 0.00390625f), ((Global_22548 + fVar55) + 0.00416664f), 0);
				}
				if (Global_22550.f_5735)
				{
					func_104();
					func_102((((Global_22547 + fParam5) - 0.00390625f) - func_103("CM_ITEM_COUNT", Global_22550.f_5736, Global_22550.f_5737)), ((Global_22548 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22550.f_5736, Global_22550.f_5737);
				}
				else if (Global_22550.f_5731 > Global_22550.f_5225)
				{
					if (Global_22550.f_5734 != 0)
					{
						func_104();
						func_102((((Global_22547 + fParam5) - 0.00390625f) - func_103("CM_ITEM_COUNT", Global_22550.f_5734, Global_22550.f_5733)), ((Global_22548 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_22550.f_5734, Global_22550.f_5733);
					}
				}
			}
			iVar6 = Global_22550.f_5738;
			iVar9 = 0;
			fVar65 = fVar49;
			if (Global_22550.f_8397)
			{
				iVar1 = Global_22550.f_8393;
				iVar2 = Global_22550.f_8394;
				iVar3 = Global_22550.f_8395;
				iVar4 = Global_22550.f_8396;
			}
			else
			{
				unk_0x28DD484BAEAF8437(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_22550.f_5225 && iVar6 <= Global_22550.f_5218)
			{
				if (iVar6 >= 0)
				{
					if (Global_22550.f_5485[iVar6])
					{
						if (Global_22550.f_5356[iVar6] && iVar6 != Global_22550.f_5738)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_22550.f_5745[iVar6] != 0f)
						{
							fVar54 = Global_22550.f_5745[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			unk_0x177AA645FB4B3A38("CommonMenu", "Gradient_Bgd", (Global_22547 + (fParam5 * 0.5f)), ((fVar65 + ((fVar49 - fVar65) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar65), 0f, 255, 255, 255, 255, 0);
			if (Global_22550.f_5731 > Global_22550.f_5225)
			{
				if (Global_22550.f_8402)
				{
					iVar1 = Global_22550.f_8398;
					iVar2 = Global_22550.f_8399;
					iVar3 = Global_22550.f_8400;
					iVar4 = Global_22550.f_8401;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_105(Global_22547, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { unk_0x282B86763E4DCFC4("CommonMenu", "shop_arrows_upANDdown") };
				Var38.x = (Var38.x * (0.5f / fVar60));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar60));
				if (Global_22550.f_8415)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					unk_0x28DD484BAEAF8437(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x177AA645FB4B3A38("CommonMenu", "shop_arrows_upANDdown", (Global_22547 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.x / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (unk_0x856D5567211886A2(&(Global_22550.f_4690)) != 0 && Global_22550.f_4766 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_22547 + 0.0046875f);
				if (Global_22550.f_4768 != 0)
				{
					func_115(Global_22550.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22547 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_101(fVar40);
				unk_0x989558F5DCFEFA52(&(Global_22550.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22550.f_4762)
				{
					if (Global_22550.f_4696[iVar14] == 2)
					{
						unk_0x42710E9E08FA375A(Global_22550.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22550.f_4696[iVar14] == 3)
					{
						unk_0x5BC8B357341A4FEE(Global_22550.f_4705[iVar16], Global_22550.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22550.f_4696[iVar14] == 1)
					{
						unk_0x6A826E35A3096ED0(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 5)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 6)
					{
						unk_0x6A826E35A3096ED0(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 7)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 9)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x76C71C9B09716523(fVar40, (fVar49 + 0.00277776f));
				unk_0x28DD484BAEAF8437(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_105(Global_22547, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22550.f_8407)
				{
					iVar1 = Global_22550.f_8403;
					iVar2 = Global_22550.f_8404;
					iVar3 = Global_22550.f_8405;
					iVar4 = Global_22550.f_8406;
				}
				else
				{
					unk_0x28DD484BAEAF8437(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x177AA645FB4B3A38("CommonMenu", "Gradient_Bgd", (Global_22547 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xBA269EB4693A8C47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xBA269EB4693A8C47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_101(fVar40);
				unk_0x40A75E32D30C605F(&(Global_22550.f_4690));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_22550.f_4762)
				{
					if (Global_22550.f_4696[iVar14] == 2)
					{
						unk_0x42710E9E08FA375A(Global_22550.f_4701[iVar15]);
						iVar15++;
					}
					else if (Global_22550.f_4696[iVar14] == 3)
					{
						unk_0x5BC8B357341A4FEE(Global_22550.f_4705[iVar16], Global_22550.f_4709[iVar16]);
						iVar16++;
					}
					else if (Global_22550.f_4696[iVar14] == 1)
					{
						unk_0x6A826E35A3096ED0(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 5)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 6)
					{
						unk_0x6A826E35A3096ED0(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 7)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 9)
					{
						unk_0x9EFD301E3BE8324E(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_22550.f_4696[iVar14] == 8)
					{
						unk_0x6A826E35A3096ED0(&(Global_22550.f_4713[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xA434CC17B5517E4E(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_22550.f_4768 != 0)
				{
					func_115(Global_22550.f_4768, 1, 1, &fVar36, &fVar37, bParam7);
					func_100(Global_22550.f_4768, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x177AA645FB4B3A38(func_109(Global_22550.f_4768), func_106(Global_22550.f_4768, 1), ((Global_22547 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0xBA269EB4693A8C47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_22550.f_4766 > 0)
				{
					if ((unk_0x578C4EF320340AF7() - Global_22550.f_4767) > Global_22550.f_4766)
					{
						StringCopy(&(Global_22550.f_4690), "", 24);
						Global_22550.f_4766 = -1;
					}
				}
			}
			if (unk_0x856D5567211886A2(&(Global_4269680.f_21)) != 0 && Global_4269680.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_22547 + 0.0046875f);
				if (Global_4269680.f_67 != 0)
				{
					func_115(Global_4269680.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_22547 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_101(fVar40);
				unk_0x989558F5DCFEFA52(&(Global_4269680.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4269680.f_61)
				{
					if (Global_4269680.f_25[iVar14] == 2)
					{
						unk_0x42710E9E08FA375A(Global_4269680.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4269680.f_25[iVar14] == 3)
					{
						unk_0x5BC8B357341A4FEE(Global_4269680.f_34[iVar16], Global_4269680.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4269680.f_25[iVar14] == 1)
					{
						unk_0x6A826E35A3096ED0(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 5)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 6)
					{
						unk_0x6A826E35A3096ED0(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 7)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 9)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 8)
					{
						unk_0x6A826E35A3096ED0(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = unk_0x76C71C9B09716523(fVar40, (fVar49 + 0.00277776f));
				unk_0x28DD484BAEAF8437(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_105(Global_22547, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_22550.f_8407)
				{
					iVar1 = Global_22550.f_8403;
					iVar2 = Global_22550.f_8404;
					iVar3 = Global_22550.f_8405;
					iVar4 = Global_22550.f_8406;
				}
				else
				{
					unk_0x28DD484BAEAF8437(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				unk_0x177AA645FB4B3A38("CommonMenu", "Gradient_Bgd", (Global_22547 + (fParam5 * 0.5f)), ((fVar49 + ((((unk_0xBA269EB4693A8C47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((unk_0xBA269EB4693A8C47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_101(fVar40);
				unk_0x40A75E32D30C605F(&(Global_4269680.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4269680.f_61)
				{
					if (Global_4269680.f_25[iVar14] == 2)
					{
						unk_0x42710E9E08FA375A(Global_4269680.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4269680.f_25[iVar14] == 3)
					{
						unk_0x5BC8B357341A4FEE(Global_4269680.f_34[iVar16], Global_4269680.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4269680.f_25[iVar14] == 1)
					{
						unk_0x6A826E35A3096ED0(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 8)
					{
						unk_0x6A826E35A3096ED0(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 5)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 6)
					{
						unk_0x6A826E35A3096ED0(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 7)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4269680.f_25[iVar14] == 9)
					{
						unk_0x9EFD301E3BE8324E(&(Global_4269680.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				unk_0xA434CC17B5517E4E(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4269680.f_67 != 0)
				{
					func_115(Global_4269680.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_100(Global_4269680.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					unk_0x177AA645FB4B3A38(func_109(Global_4269680.f_67), func_106(Global_4269680.f_67, 1), ((Global_22547 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((unk_0xBA269EB4693A8C47(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4269680.f_65 > 0)
				{
					if ((unk_0x578C4EF320340AF7() - Global_4269680.f_66) > Global_4269680.f_65)
					{
						StringCopy(&(Global_4269680.f_21), "", 16);
						Global_4269680.f_65 = -1;
					}
				}
			}
			func_95(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			unk_0xFCC7EAA298CE7AC2(76, 84);
			unk_0xFFA39C4568552522(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_22550.f_5728)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar66 = Global_22550.f_5218;
			if (Global_22550.f_5729)
			{
				iVar66 = (Global_22550.f_5732 - 1);
			}
			fVar67 = 0f;
			fVar68 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar66)
			{
				fVar54 = 0.034722f;
				if (Global_22550.f_5745[iVar6] != 0f)
				{
					fVar54 = Global_22550.f_5745[iVar6];
				}
				if (Global_22550.f_5729)
				{
					iVar6 = Global_22550.f_8038[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_22550.f_5738 && iVar9 < Global_22550.f_5225)
				{
					bVar33 = true;
					if (Global_22550.f_5739 == iVar6)
					{
						fVar68 = fVar67;
					}
					if (Global_22550.f_5356[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_22550.f_5879[iVar6] = fVar35;
				fVar34 = (Global_22547 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_22550.f_5739 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_22550.f_8409)
					{
						unk_0x28DD484BAEAF8437(Global_22550.f_8408, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						unk_0x28DD484BAEAF8437(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					unk_0x177AA645FB4B3A38("CommonMenu", "Gradient_Nav", (Global_22547 + (fParam5 * 0.5f)), (((fVar57 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_22550.f_5877 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_22550.f_5226)
				{
					if (unk_0xCE990E643CD9D0E5(Global_22550.f_5089[iVar6], iVar8) || Global_22550.f_5056[iVar8] == 5)
					{
						if (Global_22550.f_5729)
						{
							iVar19 = Global_22550.f_8054[((iVar9 * Global_22550.f_5226) + iVar8)];
							iVar20 = Global_22550.f_8095[((iVar9 * Global_22550.f_5226) + iVar8)];
							iVar21 = Global_22550.f_8136[((iVar9 * Global_22550.f_5226) + iVar8)];
							iVar22 = Global_22550.f_8177[((iVar9 * Global_22550.f_5226) + iVar8)];
							iVar23 = Global_22550.f_8218[((iVar9 * Global_22550.f_5226) + iVar8)];
						}
						else
						{
							Global_22550.f_8054[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar19;
							Global_22550.f_8095[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar20;
							Global_22550.f_8136[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar21;
							Global_22550.f_8177[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar22;
							Global_22550.f_8218[((iVar9 * Global_22550.f_5226) + iVar8)] = iVar23;
						}
						iVar74 = 0;
						bVar53 = false;
						if (Global_22550.f_6011[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22550.f_6008[0])
							{
								bVar53 = true;
								iVar74 = 0;
							}
						}
						if (Global_22550.f_6011[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_22550.f_6008[1])
							{
								bVar53 = true;
								iVar74 = 1;
							}
						}
						if (Global_22550.f_5062[iVar8] != -1f)
						{
							fVar34 = ((Global_22547 + 0.0046875f) + Global_22550.f_5062[iVar8]);
						}
						if ((iVar8 < 4 && Global_22550.f_5062[iVar8 + 1] != -1f) && fVar34 < Global_22550.f_5062[iVar8 + 1])
						{
							fVar44 = (Global_22550.f_5062[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_22547 + Global_22549) - 0.0046875f) - fVar34);
						}
						if ((Global_22550.f_5075[iVar8] && Global_22550.f_5874) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_22550.f_5056[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_22550.f_5729)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_93(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, iVar74, bVar51, bVar50);
											unk_0x456829A212A690D7(&(Global_22550.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6A826E35A3096ED0(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6A826E35A3096ED0(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x6A826E35A3096ED0(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x42710E9E08FA375A(Global_22550.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
												{
													unk_0x5BC8B357341A4FEE(Global_22550.f_4175[(iVar21 + iVar27)], Global_22550.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0)
										{
											fVar41 = unk_0x842CB5919E31EB1F(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_115(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_22550.f_4433[(iVar22 + iVar14)] == 2 || Global_22550.f_4433[(iVar22 + iVar14)] == 51) || Global_22550.f_4433[(iVar22 + iVar14)] == 61)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_22550.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_22550.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar40;
										Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar41;
										Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar42;
										if (Global_22550.f_5083[iVar8] == 2)
										{
											iVar69 = (iVar8 - 1);
											while (iVar69 >= 0)
											{
												if (Global_22550.f_5083[iVar69] == 2)
												{
													Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar69)] = (Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar69)] - Global_22550.f_5068[iVar8]);
												}
												iVar69 = (iVar69 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)];
										fVar41 = Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)];
										fVar42 = Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_115(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_115(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_109(26), func_106(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_115(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_115(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_109(27), func_106(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										func_93(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_92(bVar32);
										}
										unk_0x40A75E32D30C605F(&(Global_22550.f_73[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6A826E35A3096ED0(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6A826E35A3096ED0(&(Global_22550.f_73[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x6A826E35A3096ED0(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x9EFD301E3BE8324E(&(Global_2462791[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x42710E9E08FA375A(Global_22550.f_3918[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												unk_0x5BC8B357341A4FEE(Global_22550.f_4175[(iVar21 + iVar27)], Global_22550.f_4304[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_22550.f_4433[(iVar22 + iVar28)] == 2 || Global_22550.f_4433[(iVar22 + iVar28)] == 51) || Global_22550.f_4433[(iVar22 + iVar28)] == 61)
											{
												if (func_115(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_115(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_100(Global_22550.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_22550.f_5083[iVar8] == 2)
															{
																unk_0x177AA645FB4B3A38(func_109(Global_22550.f_4433[(iVar22 + iVar28)]), func_106(Global_22550.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x177AA645FB4B3A38(func_109(Global_22550.f_4433[(iVar22 + iVar28)]), func_106(Global_22550.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (unk_0x856D5567211886A2(&(Global_22550.f_73[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_22550.f_5083[iVar8] == 2)
										{
											unk_0xA434CC17B5517E4E(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											unk_0xA434CC17B5517E4E((fVar34 + fVar40), fVar35, 0);
											if (func_91() && unk_0x7B70881748D166CD(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													func_93(0, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar75, "TEST_LABEL", 16);
													fVar76 = 0f;
													fVar77 = 55f;
													fVar78 = 0.0185f;
													fVar79 = 0.004f;
													fVar80 = 0.02f;
													unk_0x151E2F6EE4A34CFE(0f, (0.35f * 0.7f));
													unk_0xA11D279671F2289C(255, 255, 255, 150);
													unk_0x8DDE075026DB7EFD((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, floor(fVar76), floor(fVar76), floor(fVar76), floor(fVar77), 0);
													unk_0x40A75E32D30C605F(&cVar75);
													unk_0x42710E9E08FA375A((Global_22550.f_5738 + iVar30));
													unk_0xA434CC17B5517E4E((fVar34 - fVar80), (fVar35 + fVar79), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_22550.f_4433[(iVar22 + iVar14)] != 2 && Global_22550.f_4433[(iVar22 + iVar14)] != 51) && Global_22550.f_4433[(iVar22 + iVar14)] != 61)
											{
												if (func_115(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_115(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_100(Global_22550.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_22550.f_4433[(iVar22 + iVar14)] == 30)
															{
																unk_0x177AA645FB4B3A38(func_109(Global_22550.f_4433[(iVar22 + iVar14)]), func_106(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), (Global_22547 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_22550.f_5083[iVar8] == 2)
															{
																unk_0x177AA645FB4B3A38(func_109(Global_22550.f_4433[(iVar22 + iVar14)]), func_106(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																unk_0x177AA645FB4B3A38(func_109(Global_22550.f_4433[(iVar22 + iVar14)]), func_106(Global_22550.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_22550.f_2124[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_22550.f_5729)
									{
										func_93(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_92(bVar32);
										}
										unk_0x456829A212A690D7("NUMBER");
										unk_0x42710E9E08FA375A(Global_22550.f_3918[iVar20]);
										fVar41 = unk_0x842CB5919E31EB1F(1);
										fVar40 = 0f;
										if (Global_22550.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_22550.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar40;
										Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)];
										fVar41 = Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_115(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_115(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_109(26), func_106(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_115(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_115(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_109(27), func_106(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_93(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
										func_90((fVar34 + fVar40), fVar35, "NUMBER", Global_22550.f_3918[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_22550.f_5729)
									{
										func_93(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
										if (Global_22550.f_8413 && Global_22550.f_8414 == iVar6)
										{
											func_92(bVar32);
										}
										unk_0x456829A212A690D7("NUMBER");
										unk_0x5BC8B357341A4FEE(Global_22550.f_4175[iVar21], Global_22550.f_4304[iVar21]);
										fVar41 = unk_0x842CB5919E31EB1F(1);
										fVar40 = 0f;
										if (Global_22550.f_5083[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_22550.f_5083[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar40;
										Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)];
										fVar41 = Global_22550.f_8300[((iVar9 * Global_22550.f_5226) + iVar8)];
									}
									if (bVar52)
									{
										if (func_115(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_115(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_109(26), func_106(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										if (func_115(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_115(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													unk_0x177AA645FB4B3A38(func_109(27), func_106(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
									}
									func_93(bVar32, Global_22550.f_1610[iVar24], Global_22550.f_1867[iVar24], bVar53, 0, 0, 0);
									func_89((fVar34 + fVar40), fVar35, "NUMBER", Global_22550.f_4175[iVar21], Global_22550.f_4304[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_115(Global_22550.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_22550.f_5729)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_22550.f_5083[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_22550.f_5083[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar40;
											Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_22550.f_8259[((iVar9 * Global_22550.f_5226) + iVar8)];
											fVar42 = Global_22550.f_8341[((iVar9 * Global_22550.f_5226) + iVar8)];
										}
										if (bVar52)
										{
											if (func_115(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_22550.f_5083[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_115(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_100(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x177AA645FB4B3A38(func_109(26), func_106(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_115(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_115(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_100(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														unk_0x177AA645FB4B3A38(func_109(27), func_106(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_115(Global_22550.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_100(Global_22550.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												unk_0x177AA645FB4B3A38(func_109(Global_22550.f_4433[iVar22]), func_106(Global_22550.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_88(Global_22550.f_4433[iVar22])), (fVar37 * func_88(Global_22550.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_22550.f_5056[iVar8] == 5)
						{
							if (Global_22550.f_5068[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_22550.f_5068[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_22550.f_5068[iVar8]);
							if (Global_22550.f_5075[iVar8])
							{
								if (func_115(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_22550.f_5068[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_22550.f_8038[iVar9] = iVar6;
						Global_22550.f_5740 = iVar6;
						iVar9++;
						if (Global_22550.f_5356[iVar6])
						{
							iVar13++;
						}
						if (Global_22550.f_5745[iVar6] != 0f)
						{
							fVar67 = (fVar67 + Global_22550.f_5745[iVar6]);
						}
						else
						{
							fVar67 = (fVar67 + 0.034722f);
						}
					}
					if (!Global_22550.f_5728)
					{
						Global_22550.f_5485[iVar6] = 1;
						if (Global_22550.f_5227[iVar6])
						{
							if (bVar32)
							{
								Global_22550.f_5734 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_22550.f_5734 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_22550.f_5728)
			{
				Global_22550.f_5730 = ((fVar57 + fVar67) + (0.00277776f * IntToFloat(iVar12)));
				Global_22550.f_5733 = iVar11;
				Global_22550.f_5731 = iVar10;
				Global_22550.f_5728 = 1;
			}
		}
		if (!Global_22550.f_5729)
		{
			Global_22550.f_5732 = iVar9;
			Global_22550.f_5729 = 1;
		}
		iVar5++;
	}
	Global_22550.f_5876 = fVar49;
	Global_22550.f_5878 = unk_0x578C4EF320340AF7();
	unk_0x530DC1525CA60B00(Global_22550.f_5876);
	if (!Global_22550.f_8382)
	{
		func_82(0);
	}
	Global_22550.f_8382 = 0;
	if (bParam2)
	{
		unk_0x4CB4237D8858ADA6(10);
	}
	unk_0x4CB4237D8858ADA6(6);
	unk_0x4CB4237D8858ADA6(7);
	unk_0x4CB4237D8858ADA6(9);
	unk_0x4CB4237D8858ADA6(8);
	if (bParam0)
	{
		func_81(1);
	}
	unk_0x5C64FD27DB62AF7A();
}

void func_81(int iParam0)
{
	Global_1378744.f_1121 = iParam0;
}

void func_82(int iParam0)
{
	if (func_87())
	{
		return;
	}
	if (!Global_19681.f_1 == 1)
	{
		if (func_86(0))
		{
			func_83(iParam0);
		}
		unk_0xBE20AB8238688965(&Global_7552, 2);
	}
}

void func_83(int iParam0)
{
	if (func_87())
	{
		return;
	}
	if (Global_19864)
	{
		if (func_85())
		{
			func_84(1, 1);
		}
		else
		{
			func_84(0, 0);
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
	if (!func_77())
	{
		Global_19681.f_1 = 3;
	}
}

void func_84(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_86(0))
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

bool func_85()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 5);
}

int func_86(int iParam0)
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

bool func_87()
{
	return unk_0xCE990E643CD9D0E5(Global_1689730, 19);
}

float func_88(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_89(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	unk_0x40A75E32D30C605F(sParam2);
	unk_0x5BC8B357341A4FEE(fParam3, iParam4);
	unk_0xA434CC17B5517E4E(fParam0, fParam1, 0);
}

void func_90(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x40A75E32D30C605F(sParam2);
	unk_0x42710E9E08FA375A(iParam3);
	unk_0xA434CC17B5517E4E(fParam0, fParam1, iParam4);
}

bool func_91()
{
	return unk_0x95C5B896CB42B20E(-1762644250);
}

void func_92(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		unk_0x28DD484BAEAF8437(Global_22550.f_8410[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		unk_0x28DD484BAEAF8437(Global_22550.f_8410[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, 255);
}

void func_93(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_94(Global_22550.f_6011[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					unk_0x28DD484BAEAF8437(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				unk_0x28DD484BAEAF8437(14, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				unk_0x28DD484BAEAF8437(12, &iVar0, &iVar1, &iVar2, &iVar3);
				unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			unk_0xA11D279671F2289C(155, 155, 155, 255);
		}
		else
		{
			unk_0xA11D279671F2289C(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			unk_0xA11D279671F2289C(0, 0, 0, floor((255f * 0.8f)));
		}
		else
		{
			unk_0x28DD484BAEAF8437(1, &iVar0, &iVar1, &iVar2, &iVar3);
			unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		unk_0xA11D279671F2289C(155, 155, 155, 255);
	}
	else
	{
		unk_0xA11D279671F2289C(155, 155, 155, 255);
	}
	unk_0x151E2F6EE4A34CFE(0f, 0.35f);
	unk_0xBC2BD09DB91678C5(1);
	if (bParam5)
	{
		unk_0x151E2F6EE4A34CFE(0f, 0.425f);
		unk_0xE9FEE5ECCAD48813(4);
	}
	else if (bParam6)
	{
		unk_0x151E2F6EE4A34CFE(0f, 0.425f);
		unk_0xE9FEE5ECCAD48813(6);
	}
	else
	{
		unk_0xE9FEE5ECCAD48813(0);
	}
	unk_0x86520D0C56F68D3F(0f, 1f);
	unk_0x9CB19F83A6C8E47F(0);
	unk_0xACADD4647896AEBE(0, 0, 0, 0, 0);
	unk_0xA5C56390CC2323FE(0, 0, 0, 0, 0);
}

void func_94(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_95(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_69(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_117(bParam4, bParam8))
	{
		return;
	}
	if (func_98())
	{
		return;
	}
	if (unk_0xDFAB5E5CBE16E8B1())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_72(unk_0x460153A63B9477BC(), 0))
		{
			return;
		}
	}
	if (unk_0xF8EDFF98A9C94C74())
	{
		if (unk_0x913D69ADE739309E() == 0 || unk_0xDFAB5E5CBE16E8B1())
		{
			return;
		}
	}
	if (Global_22550.f_4769 != 0)
	{
		if (unk_0x628AF533B14EF310(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_22550.f_4769)
			{
				if (Global_22550.f_5026[iVar1] != 361)
				{
					StringCopy(&(Global_22550.f_4771[iVar1 /*16*/]), unk_0xED026A379B794F61(2, Global_22550.f_5026[iVar1], true), 64);
				}
				else if (Global_22550.f_5039[iVar1] != 32)
				{
					StringCopy(&(Global_22550.f_4771[iVar1 /*16*/]), unk_0x32F8D6499042A233(2, Global_22550.f_5039[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_22550.f_4770 = 0;
		}
		if (!Global_22550.f_4770)
		{
			unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "CLEAR_ALL");
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "SET_MAX_WIDTH");
			unk_0x49B9B8101B158AEE((1f - (Global_22550.f_5081 / 100f)));
			unk_0xE1FDD153F5858534();
			if (unk_0xF8EDFF98A9C94C74())
			{
				unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				unk_0xF1B28F753235CE2A(true);
				unk_0xE1FDD153F5858534();
			}
			iVar1 = 0;
			while (iVar1 < Global_22550.f_4769)
			{
				if (unk_0x856D5567211886A2(&(Global_22550.f_4964[iVar1 /*4*/])) != unk_0x856D5567211886A2("PREV"))
				{
					unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
					unk_0xAD291B8F75D737AD(iVar1);
					func_97(&(Global_22550.f_4771[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && unk_0x856D5567211886A2(&(Global_22550.f_4964[iVar2 /*4*/])) == unk_0x856D5567211886A2("PREV"))
					{
						func_97(&(Global_22550.f_4771[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_22550.f_5013[iVar1] == -1)
					{
						func_96(&(Global_22550.f_4964[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_22550.f_5013[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						unk_0xB23270F3D5E62FDE(&(Global_22550.f_4964[iVar1 /*4*/]));
						if (bParam5)
						{
							unk_0x7899A951E85F4B28(iVar3, 70);
						}
						else
						{
							unk_0x42710E9E08FA375A(iVar3);
						}
						unk_0x2042E9CA4306F725();
					}
					if (unk_0xF8EDFF98A9C94C74())
					{
						if (Global_22550.f_5026[iVar1] != 361 && unk_0xCE990E643CD9D0E5(Global_22550.f_5052, iVar1))
						{
							unk_0xF1B28F753235CE2A(true);
							unk_0xAD291B8F75D737AD(Global_22550.f_5026[iVar1]);
						}
						else
						{
							unk_0xF1B28F753235CE2A(false);
							unk_0xAD291B8F75D737AD(361);
						}
					}
					unk_0xE1FDD153F5858534();
				}
				iVar1++;
			}
			if (unk_0x856D5567211886A2(&(Global_4269680.f_16)) != unk_0x856D5567211886A2(""))
			{
				unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "SET_DATA_SLOT");
				unk_0xAD291B8F75D737AD(Global_22550.f_4769);
				func_97(&Global_4269680);
				if (Global_4269680.f_20 == -1)
				{
					func_96(&(Global_4269680.f_16));
				}
				else
				{
					iVar4 = Global_22550.f_5013[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					unk_0xB23270F3D5E62FDE(&(Global_4269680.f_16));
					if (bParam5)
					{
						unk_0x7899A951E85F4B28(iVar4, 70);
					}
					else
					{
						unk_0x42710E9E08FA375A(iVar4);
					}
					unk_0x2042E9CA4306F725();
				}
				unk_0xE1FDD153F5858534();
			}
			unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			unk_0xAD291B8F75D737AD(0);
			unk_0xAD291B8F75D737AD(0);
			unk_0xAD291B8F75D737AD(0);
			unk_0xAD291B8F75D737AD(80);
			unk_0xE1FDD153F5858534();
			unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_22550.f_5082)
			{
				unk_0xAD291B8F75D737AD(1);
			}
			else
			{
				unk_0xAD291B8F75D737AD(0);
			}
			unk_0xE1FDD153F5858534();
			Global_22550.f_4770 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_22550.f_4769)
		{
			if (Global_22550.f_5013[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					unk_0xAD291B8F75D737AD(iVar1);
					unk_0xB23270F3D5E62FDE(&(Global_22550.f_4964[iVar1 /*4*/]));
					if (bParam5)
					{
						unk_0x7899A951E85F4B28(iParam2, 70);
					}
					else
					{
						unk_0x42710E9E08FA375A(iParam2);
					}
					unk_0x2042E9CA4306F725();
					unk_0xE1FDD153F5858534();
				}
			}
			iVar1++;
		}
		if (Global_4269680.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				unk_0x830F007E19C63E14(Global_22550.f_5660[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				unk_0xAD291B8F75D737AD(iVar1);
				unk_0xB23270F3D5E62FDE(&(Global_4269680.f_16));
				if (bParam5)
				{
					unk_0x7899A951E85F4B28(iParam2, 70);
				}
				else
				{
					unk_0x42710E9E08FA375A(iParam2);
				}
				unk_0x2042E9CA4306F725();
				unk_0xE1FDD153F5858534();
			}
		}
		unk_0xFCC7EAA298CE7AC2(76, 66);
		unk_0xFFA39C4568552522(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_22550.f_8417)
			{
				unk_0x36FA9C099416853E(15, 0f, -0.0375f);
				Global_22550.f_8417 = 1;
			}
		}
		else if (Global_22550.f_8417)
		{
			unk_0x610B4083B1F95914(15);
			Global_22550.f_8417 = 0;
		}
		unk_0x5C64FD27DB62AF7A();
		if (Global_22550.f_5055)
		{
			unk_0xFCC7EAA298CE7AC2(82, 66);
			unk_0xFFA39C4568552522(0f, 0f, 0f, 0f);
			unk_0xE6A03BA84586E67B(Global_22550.f_5660[iVar0 /*10*/], Global_22550.f_5053, Global_22550.f_5054, 1f, 1f, 255, 255, 255, 255, 0);
			unk_0x5C64FD27DB62AF7A();
		}
		else
		{
			unk_0x37FC7E88C7659D33(Global_22550.f_5660[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_96(char* sParam0)
{
	unk_0xB23270F3D5E62FDE(sParam0);
	unk_0x2042E9CA4306F725();
}

void func_97(char* sParam0)
{
	unk_0x54AED56A452DCB4F(sParam0);
}

int func_98()
{
	struct<3> Var0;
	
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	if (func_99())
	{
		Var0 = { 0f, -500f, 0f };
		unk_0x1F1B1269BB6217F7(&Var0);
		if (Global_19626 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_99()
{
	if (unk_0x7B70881748D166CD(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_100(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	unk_0x28DD484BAEAF8437(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			unk_0x28DD484BAEAF8437(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_101(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x28DD484BAEAF8437(1, &iVar0, &iVar1, &iVar2, &iVar3);
	unk_0xE9FEE5ECCAD48813(0);
	unk_0x151E2F6EE4A34CFE(0f, 0.35f);
	unk_0x7508E89F04871147(2);
	unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, iVar3);
	unk_0x86520D0C56F68D3F(fParam0, ((Global_22547 + Global_22549) - 0.0046875f));
	unk_0x9CB19F83A6C8E47F(0);
	unk_0xACADD4647896AEBE(0, 0, 0, 0, 0);
	unk_0xA5C56390CC2323FE(0, 0, 0, 0, 0);
}

void func_102(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	unk_0x40A75E32D30C605F(sParam2);
	unk_0x42710E9E08FA375A(iParam3);
	unk_0x42710E9E08FA375A(iParam4);
	unk_0xA434CC17B5517E4E(fParam0, fParam1, 0);
}

float func_103(char* sParam0, int iParam1, int iParam2)
{
	if (!unk_0x211E6DB3335430B4(sParam0))
	{
		if (unk_0x856D5567211886A2(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_104();
	unk_0x456829A212A690D7(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	unk_0x42710E9E08FA375A(iParam2);
	return unk_0x842CB5919E31EB1F(1);
}

void func_104()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	unk_0x28DD484BAEAF8437(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_22550.f_8392)
	{
		iVar0 = Global_22550.f_8388;
		iVar1 = Global_22550.f_8389;
		iVar2 = Global_22550.f_8390;
		iVar3 = Global_22550.f_8391;
	}
	unk_0xE9FEE5ECCAD48813(0);
	unk_0x151E2F6EE4A34CFE(0f, 0.35f);
	unk_0xA11D279671F2289C(iVar0, iVar1, iVar2, iVar3);
	unk_0x86520D0C56F68D3F((Global_22547 + 0.0046875f), ((Global_22547 + Global_22549) - 0.0046875f));
	unk_0x9CB19F83A6C8E47F(0);
	unk_0xACADD4647896AEBE(0, 0, 0, 0, 0);
	unk_0xA5C56390CC2323FE(0, 0, 0, 0, 0);
}

void func_105(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	unk_0x8DDE075026DB7EFD((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

var func_106(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!unk_0x7BCC91F3C1CF24E8(&(Global_22550.f_7029[iParam0 /*16*/])))
	{
		if (unk_0x856D5567211886A2(&(Global_22550.f_7029[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_108(unk_0x460153A63B9477BC()) };
			if (unk_0x716812D32AF6C4C0(&Var2, &uVar1))
			{
				return func_107(&uVar1);
			}
		}
		else
		{
			return func_107(&(Global_22550.f_7029[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_107(var uParam0)
{
	return uParam0;
}

struct<13> func_108(int iParam0)
{
	struct<13> Var0;
	
	unk_0x2BDD80E79441BD36(iParam0, &Var0, 13);
	return Var0;
}

char* func_109(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!unk_0x7BCC91F3C1CF24E8(&(Global_22550.f_6020[iParam0 /*16*/])))
	{
		if (unk_0x856D5567211886A2(&(Global_22550.f_6020[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_108(unk_0x460153A63B9477BC()) };
			unk_0x716812D32AF6C4C0(&Var1, &uVar0);
			return func_107(&uVar0);
		}
		else
		{
			return func_107(&(Global_22550.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_110(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_22550.f_5218 > iParam0)
	{
		return;
	}
	if (Global_22550.f_5218 >= 128)
	{
		return;
	}
	if (Global_22550.f_5220 >= 256)
	{
		return;
	}
	if (Global_22550.f_5743 < Global_22550.f_5741)
	{
		return;
	}
	if (Global_22550.f_5218 != iParam0)
	{
		Global_22550.f_5218 = iParam0;
		Global_22550.f_5219 = 0;
	}
	iVar0 = Global_22550.f_5056[Global_22550.f_5219];
	if (iVar0 != 1)
	{
		while (Global_22550.f_5219 < 4 && iVar0 != 1)
		{
			Global_22550.f_5219++;
			iVar0 = Global_22550.f_5056[Global_22550.f_5219];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]), sParam1, 24);
	if (!unk_0x7BCC91F3C1CF24E8(sParam1) && !unk_0x3030AE9FCF1BC243(sParam1))
	{
	}
	Global_22550.f_1610[Global_22550.f_5220] = bParam3;
	Global_22550.f_1867[Global_22550.f_5220] = iParam4;
	Global_22550.f_5220++;
	if (!bParam3)
	{
		func_113(Global_22550.f_5218, 1);
	}
	else
	{
		func_113(Global_22550.f_5218, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_112(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]));
		if (Global_22550.f_5075[Global_22550.f_5219])
		{
			func_115(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_22550.f_5068[Global_22550.f_5219])
		{
			Global_22550.f_5068[Global_22550.f_5219] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_111(&(Global_22550.f_73[Global_22550.f_5220 /*6*/]));
			if (fVar4 > Global_22550.f_5745[iParam0])
			{
				Global_22550.f_5745[iParam0] = fVar4;
			}
		}
	}
	unk_0xBE20AB8238688965(&(Global_22550.f_5089[iParam0]), Global_22550.f_5219);
	Global_22550.f_5219++;
	Global_22550.f_5744 = 1;
	Global_22550.f_5742 = (Global_22550.f_5220 - 1);
	Global_22550.f_5743 = 0;
	Global_22550.f_5741 = iParam2;
}

float func_111(char* sParam0)
{
	if (!unk_0x3030AE9FCF1BC243(sParam0))
	{
	}
	return unk_0xBA269EB4693A8C47(0.35f, 0);
}

float func_112(char* sParam0)
{
	if (!unk_0x211E6DB3335430B4(sParam0))
	{
		if (unk_0x856D5567211886A2(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_93(0, 1, 0, 0, 0, 0, 0);
	unk_0x456829A212A690D7(sParam0);
	return unk_0x842CB5919E31EB1F(1);
}

void func_113(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = floor((to_float(iParam0) / 32f));
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&(Global_22550.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_22550.f_6015[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_114()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	unk_0x9DD549AAA043F83A(&iVar0, &iVar1);
	fVar2 = (to_float(iVar0) / to_float(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

int func_115(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	StringCopy(&cVar0, func_109(iParam0), 64);
	StringCopy(&cVar1, func_106(iParam0, bParam1), 64);
	if (unk_0x856D5567211886A2(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			unk_0x9DD549AAA043F83A(&iVar2, &iVar3);
			fVar5 = unk_0x8940B46482DD0A7D(0);
			if (func_114())
			{
				iVar2 = round((to_float(iVar3) * fVar5));
			}
			fVar6 = (to_float(iVar2) / to_float(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_114())
			{
				fVar4 = 1f;
			}
			if (unk_0x7B70881748D166CD(joaat("director_mode")) > 0)
			{
				unk_0x8BAB7B3A2C7777A5(&iVar2, &iVar3);
			}
			iVar2 = round((to_float(iVar2) / fVar4));
			iVar3 = round((to_float(iVar3) / fVar4));
		}
		else
		{
			unk_0x8BAB7B3A2C7777A5(&iVar2, &iVar3);
		}
		Var7 = { unk_0x282B86763E4DCFC4(&cVar0, &cVar1) };
		Var7.x = (Var7.x * (func_116(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_116(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.x = (Var7.x - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.x = 288f;
			Var7.f_1 = 106f;
		}
		if (iParam0 == 29 && unk_0x856D5567211886A2(&(Global_22550.f_7029[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var7.x = 106f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!unk_0xE5EF21F14D0F9D25() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_22549)
			{
				*fParam4 = (*fParam4 * (Global_22549 / *fParam3));
				*fParam3 = Global_22549;
			}
		}
		return 1;
	}
	return 0;
}

float func_116(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_117(bool bParam0, bool bParam1)
{
	if (Global_2440049.f_2005.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!unk_0x87F0CB19476706C3() || (func_119(8, -1) && func_118() != 65)) || (unk_0xCFB49FF4012D7C68() != 0 && !bParam1)) || (unk_0x9CC4D06F5338CA6B() && !bParam0)) || unk_0x954BAB46FBB90036()) || Global_77093) || Global_22550.f_8416) || unk_0x06EBE4F22EC30D45()) || Global_99007.f_1425)
	{
		return 0;
	}
	return 1;
}

int func_118()
{
	return Global_1312830;
}

bool func_119(int iParam0, int iParam1)
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

void func_120(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_22550.f_5739 = iParam0;
	Global_22550.f_5874 = iParam2;
	if (Global_22550.f_5739 < Global_22550.f_5738)
	{
		Global_22550.f_5738 = Global_22550.f_5739;
	}
	else if ((Global_22550.f_5729 && Global_22550.f_5739 > Global_22550.f_5740) || (!Global_22550.f_5729 && Global_22550.f_5739 >= (Global_22550.f_5738 + Global_22550.f_5225)))
	{
		iVar0 = Global_22550.f_5738;
		while (iVar0 <= Global_22550.f_5739)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_22550.f_5089[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_22550.f_5225 && Global_22550.f_5738 < 128)
		{
			Global_22550.f_5738++;
			iVar1 = 0;
			iVar0 = Global_22550.f_5738;
			while (iVar0 <= Global_22550.f_5739)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_22550.f_5089[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_22550.f_5728 = 0;
	Global_22550.f_5729 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_22550.f_4690), "", 24);
		StringCopy(&(Global_4269680.f_21), "", 16);
	}
}

void func_121(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
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

void func_122()
{
	func_129(0, 0);
	func_128(1, 0, 0, 0, 0);
	func_127(1, 1, 1, 1, 1);
	if (Local_43.f_1 == 3)
	{
		func_126("SEA_MENU");
	}
	else
	{
		func_126("STREET_MENU");
	}
	func_110(0, "RACES_OPT_SP", 0, 1, 0, 0);
	func_110(1, "RACES_OPT_MP", 0, 1, 0, 0);
	func_125(201, "ITEM_SELECT", -1);
	func_125(202, "ITEM_EXIT", -1);
	func_124(11, "ITEM_SCROLL", -1);
	func_123(0);
	func_120(0, 1, 1);
	iLocal_50 = 0;
}

void func_123(int iParam0)
{
	Global_22550.f_5738 = iParam0;
}

void func_124(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0x32F8D6499042A233(2, iParam0, true);
	if (Global_22550.f_4769 >= 12)
	{
		StringCopy(&Global_4269680, sVar0, 64);
		StringCopy(&(Global_4269680.f_16), sParam1, 16);
		Global_4269680.f_20 = iParam2;
		return;
		return;
	}
	unk_0xD2459066EA58CE43(&(Global_22550.f_5052), Global_22550.f_4769);
	StringCopy(&(Global_22550.f_4771[Global_22550.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22550.f_4964[Global_22550.f_4769 /*4*/]), sParam1, 16);
	Global_22550.f_5013[Global_22550.f_4769] = iParam2;
	Global_22550.f_5026[Global_22550.f_4769] = 361;
	Global_22550.f_5039[Global_22550.f_4769] = iParam0;
	Global_22550.f_4769++;
}

void func_125(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = unk_0xED026A379B794F61(2, iParam0, true);
	if (Global_22550.f_4769 >= 12)
	{
		StringCopy(&Global_4269680, sVar0, 64);
		StringCopy(&(Global_4269680.f_16), sParam1, 16);
		Global_4269680.f_20 = iParam2;
		return;
		return;
	}
	unk_0xD2459066EA58CE43(&(Global_22550.f_5052), Global_22550.f_4769);
	StringCopy(&(Global_22550.f_4771[Global_22550.f_4769 /*16*/]), sVar0, 64);
	StringCopy(&(Global_22550.f_4964[Global_22550.f_4769 /*4*/]), sParam1, 16);
	Global_22550.f_5013[Global_22550.f_4769] = iParam2;
	Global_22550.f_5026[Global_22550.f_4769] = iParam0;
	Global_22550.f_5039[Global_22550.f_4769] = 32;
	Global_22550.f_4769++;
}

void func_126(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_22550.f_1), sParam0, 16);
	Global_22550.f_68 = 0;
	Global_22550.f_69 = 0;
	Global_22550.f_70 = 0;
	Global_22550.f_71 = 0;
	Global_22550.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_127(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22550.f_5083[0] = iParam0;
	Global_22550.f_5083[1] = iParam1;
	Global_22550.f_5083[2] = iParam2;
	Global_22550.f_5083[3] = iParam3;
	Global_22550.f_5083[4] = iParam4;
}

void func_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_22550.f_5056[0] = iParam0;
	Global_22550.f_5056[1] = iParam1;
	Global_22550.f_5056[2] = iParam2;
	Global_22550.f_5056[3] = iParam3;
	Global_22550.f_5056[4] = iParam4;
	Global_22550.f_5226 = 0;
	if (iParam0 != 0)
	{
		Global_22550.f_5226++;
	}
	if (iParam1 != 0)
	{
		Global_22550.f_5226++;
	}
	if (iParam2 != 0)
	{
		Global_22550.f_5226++;
	}
	if (iParam3 != 0)
	{
		Global_22550.f_5226++;
	}
	if (iParam4 != 0)
	{
		Global_22550.f_5226++;
	}
}

void func_129(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_22550.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_22550.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2462791[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22550.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22550.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_22550.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_22550.f_5089[iVar0] = 0;
		Global_22550.f_5227[iVar0] = 0;
		Global_22550.f_5356[iVar0] = 0;
		Global_22550.f_5879[iVar0] = 0f;
		Global_22550.f_5485[iVar0] = 0;
		Global_22550.f_5745[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_22550.f_5056[iVar0] = 0;
		Global_22550.f_5068[iVar0] = 0f;
		Global_22550.f_5062[iVar0] = -1f;
		Global_22550.f_5075[iVar0] = 0;
		Global_22550.f_5083[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_22550.f_4964[iVar0 /*4*/]), "", 16);
		Global_22550.f_5013[iVar0] = -1;
		Global_22550.f_5026[iVar0] = 361;
		Global_22550.f_5039[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_22550.f_6020[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_22550.f_7029[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_22550.f_1610[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4269680.f_16), "", 16);
	Global_4269680.f_20 = -1;
	Global_22550 = 0;
	Global_22550.f_5218 = 0;
	Global_22550.f_5219 = 0;
	Global_22550.f_5220 = 0;
	Global_22550.f_5222 = 0;
	Global_22550.f_5223 = 0;
	Global_22550.f_5224 = 0;
	Global_22550.f_5221 = 0;
	Global_22550.f_5874 = 0;
	Global_22550.f_6014 = 0;
	Global_22550.f_5739 = 0;
	Global_22550.f_5738 = 0;
	Global_22550.f_5740 = 0;
	StringCopy(&(Global_22550.f_4690), "", 24);
	Global_22550.f_4762 = 0;
	Global_22550.f_4763 = 0;
	Global_22550.f_4764 = 0;
	Global_22550.f_4765 = 0;
	Global_22550.f_4766 = 0;
	Global_22550.f_4767 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_4696[iVar0] = 0;
		iVar0++;
	}
	Global_22550.f_4768 = 0;
	StringCopy(&(Global_4269680.f_21), "", 16);
	Global_4269680.f_61 = 0;
	Global_4269680.f_62 = 0;
	Global_4269680.f_63 = 0;
	Global_4269680.f_64 = 0;
	Global_4269680.f_65 = 0;
	Global_4269680.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4269680.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4269680.f_67 = 0;
	StringCopy(&(Global_22550.f_1), "", 16);
	Global_22550.f_5074 = 0f;
	Global_22550.f_68 = 0;
	Global_22550.f_69 = 0;
	Global_22550.f_70 = 0;
	Global_22550.f_71 = 0;
	Global_22550.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_22550.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_22550.f_5744 = 0;
	Global_22550.f_5743 = 0;
	Global_22550.f_5741 = 0;
	Global_22550.f_5742 = 0;
	Global_22550.f_4769 = 0;
	Global_22550.f_4770 = 0;
	Global_22550.f_5225 = 10;
	Global_22550.f_5226 = 0;
	Global_22550.f_5876 = 0f;
	Global_22550.f_5877 = 0f;
	Global_22550.f_5728 = 0;
	Global_22550.f_5729 = 0;
	Global_22550.f_5730 = 0f;
	Global_22550.f_5731 = 0;
	Global_22550.f_5733 = 0;
	Global_22550.f_5732 = 0;
	Global_22550.f_5734 = 0;
	Global_22550.f_5735 = 0;
	Global_22550.f_5736 = 0;
	Global_22550.f_5737 = 0;
	Global_22550.f_8413 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_22550.f_6008[iVar0] = -1;
		Global_22550.f_6011[iVar0] = -1;
		iVar0++;
	}
	Global_22550.f_5081 = 0f;
	Global_22550.f_5052 = 0;
	Global_22550.f_5082 = 0;
	iVar0 = 0;
	while (iVar0 < Global_22550.f_6015)
	{
		Global_22550.f_6015[iVar0] = 0;
		iVar0++;
	}
	Global_22550.f_8392 = 0;
	Global_22550.f_8387 = 0;
	Global_22550.f_8397 = 0;
	Global_22550.f_8402 = 0;
	Global_22550.f_8407 = 0;
	Global_22550.f_8409 = 0;
	Global_22550.f_8415 = 0;
	Global_22547 = 0.05f;
	Global_22548 = 0.05f;
	Global_22549 = 0.225f;
	fVar2 = unk_0x8940B46482DD0A7D(0);
	if (bParam0)
	{
		Global_22549 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_22549 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_22549 = 0.225f;
	}
}

bool func_130(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_69(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_22550.f_5635[iVar0 /*4*/]), sParam0, 16);
	if (!unk_0x7BCC91F3C1CF24E8(&(Global_22550.f_5635[iVar0 /*4*/])))
	{
		unk_0xBAA4D421B8B8A744(&(Global_22550.f_5635[iVar0 /*4*/]), 9);
		Global_22550.f_5628[iVar0] = 1;
		if (!unk_0xD77C5A1792C02DA1(&(Global_22550.f_5635[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	unk_0x494D5FF88119CDC0("CommonMenu", false);
	Global_22550.f_5614[iVar0] = 1;
	if (!unk_0xC7F5A2E99D75A65C("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		unk_0x494D5FF88119CDC0("MPShopSale", false);
		Global_22550.f_5621[iVar0] = 1;
		if (!unk_0xC7F5A2E99D75A65C("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_22550.f_5660[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_131(&(Global_22550.f_5660[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_131(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!unk_0x95EF219D38B20CFF(*uParam0))
			{
				*uParam0 = unk_0x5DEA4192B46CB99B(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (unk_0x95EF219D38B20CFF(*uParam0))
					{
						uParam0->f_8 = unk_0x578C4EF320340AF7();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = unk_0x578C4EF320340AF7();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (unk_0x95EF219D38B20CFF(*uParam0))
			{
				uParam0->f_8 = unk_0x578C4EF320340AF7();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!unk_0x95EF219D38B20CFF(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_132()
{
	int iVar0;
	
	if (func_162())
	{
		if (func_145())
		{
			iVar0 = 6;
			if (Local_43.f_1 == 1)
			{
				iVar0 = 4;
			}
			func_143(iVar0);
			if (func_65(iLocal_56[iVar0]))
			{
				if (bLocal_55)
				{
					if (unk_0x9934470AA0A08B57(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], 3))
					{
						unk_0x0975D13A9BB6D616(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], -8f);
					}
					func_134(iVar0);
				}
			}
			unk_0x26A60F42A1132477(0, 51);
			if (unk_0xC27AEE8B64EE0F8D(0, 51))
			{
				iLocal_76 = 1;
				unk_0xD289B55B6AADBA10(1);
				iLocal_42 = 3;
			}
		}
		else if (!iLocal_46)
		{
			unk_0x8B4966914EE5EB9F(0);
			iLocal_46 = 1;
		}
	}
	else
	{
		func_133();
		if (!iLocal_46)
		{
			unk_0x8B4966914EE5EB9F(0);
			iLocal_46 = 1;
		}
	}
}

void func_133()
{
	if (iLocal_45 && unk_0x578C4EF320340AF7() > iLocal_48)
	{
		unk_0xD289B55B6AADBA10(1);
		iLocal_45 = 0;
	}
}

void func_134(int iParam0)
{
	int iVar0;
	
	if (!unk_0xA59F96B50B97E63C(iLocal_56[iParam0], 0) && !unk_0xA59F96B50B97E63C(unk_0x9B0761B4C3EB8BC7(), 0))
	{
		switch (iLocal_77)
		{
			case 0:
				if (vdist2(unk_0x3E4D3CCC220BDFB1(iLocal_56[iParam0], true), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true)) < 64f)
				{
					iLocal_78 = 0;
					iLocal_79 = 0;
					iLocal_77 = 1;
				}
				break;
			
			case 1:
				unk_0x9DC06E2A59C5AEBB(&iVar0);
				unk_0xA785552633ED203B(0, unk_0x9B0761B4C3EB8BC7(), -1, 0, 2);
				unk_0xD08E9EAF091A1AAB(0, unk_0x9B0761B4C3EB8BC7(), 0);
				unk_0x19F29730874AD6F1(iVar0);
				unk_0x9B6EC2CECE1010EF(iLocal_56[iParam0], iVar0);
				unk_0x4F83FEE4454169D4(&iVar0);
				iLocal_77 = 2;
				break;
			
			case 2:
				if (unk_0x16BC17A8EDC701A2(iLocal_56[iParam0], 242628503) != 1 || unk_0x04055E36623F131B(iLocal_56[iParam0], unk_0x9B0761B4C3EB8BC7(), 20f))
				{
					unk_0xD08E9EAF091A1AAB(iLocal_56[iParam0], unk_0x9B0761B4C3EB8BC7(), -1);
					if (!iLocal_79)
					{
						func_141(iLocal_56[iParam0], "PRERACE_CHAT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					else
					{
						func_141(iLocal_56[iParam0], "PRERACE_TAUNT", "A_M_Y_RACER_01_WHITE_MINI_01", 11);
					}
					iLocal_77 = 3;
				}
				break;
			
			case 3:
				if (!unk_0x6F683C1C0BB1BA8D(iLocal_56[iParam0]))
				{
					func_139(&iLocal_80);
					unk_0x756D74A3EF0AB788(iLocal_56[iParam0], "random@street_race", "_streetracer_wait_loop", 4f, -4f, -1, 9, 0, 0, 0, 0);
					iLocal_77 = 4;
				}
				break;
			
			case 4:
				if (vdist2(unk_0x3E4D3CCC220BDFB1(iLocal_56[iParam0], true), unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true)) > 225f)
				{
					iLocal_77 = 0;
				}
				if (func_135(&iLocal_80) >= 5f && !iLocal_78)
				{
					iLocal_78 = 1;
					iLocal_77 = 1;
				}
				else if (func_135(&iLocal_80) >= 10f && !iLocal_79)
				{
					iLocal_79 = 1;
					iLocal_77 = 1;
				}
				break;
			
			case 5:
				break;
			}
	}
}

float func_135(int iParam0)
{
	if (func_138(iParam0))
	{
		if (func_137(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_136(unk_0xCE990E643CD9D0E5(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_136(bool bParam0)
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

bool func_137(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 2);
}

bool func_138(var uParam0)
{
	return unk_0xCE990E643CD9D0E5(*uParam0, 1);
}

void func_139(int iParam0)
{
	func_140(iParam0, 0f);
}

void func_140(int iParam0, float fParam1)
{
	iParam0->f_1 = (func_136(unk_0xCE990E643CD9D0E5(*iParam0, 4)) - fParam1);
	unk_0xBE20AB8238688965(iParam0, 1);
	unk_0xD2459066EA58CE43(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_141(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	unk_0x1A454EFB8BC73430(iParam0, sParam1, sParam2, func_142(iParam3), 0);
}

int func_142(int iParam0)
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

void func_143(int iParam0)
{
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()) && !func_144())
	{
		if (func_65(iLocal_56[iParam0]))
		{
			if (iLocal_46 && unk_0xF3A639BEE7AADF55(unk_0x9B0761B4C3EB8BC7()) < 20f)
			{
				unk_0xF1B800B6646C4019(iLocal_56[iParam0], 0f, 0f, 0f, 1, 2000, 2000, 2000, 0);
				iLocal_46 = 0;
			}
		}
	}
}

int func_144()
{
	if (unk_0xF7B3A1430308F92B(unk_0xFA3A11B011BBD7F6()) == 4)
	{
		return 1;
	}
	return 0;
}

int func_145()
{
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (func_161())
		{
			return 0;
		}
		if (func_160(func_53()) < Local_43.f_3)
		{
			if (Local_43.f_1 == 3)
			{
				func_157("SEA_NA_CASH", Local_43.f_3);
			}
			else
			{
				func_157("STREET_NA_CASH", Local_43.f_3);
			}
			iLocal_45 = 1;
			iLocal_48 = unk_0x578C4EF320340AF7() + 1000;
			return 0;
		}
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
		{
			func_156(&iLocal_0);
			iLocal_0 = unk_0xB0919F8F7C8097BD(unk_0x9B0761B4C3EB8BC7());
			if (!func_151())
			{
				iLocal_45 = 1;
				iLocal_48 = unk_0x578C4EF320340AF7() + 1000;
				return 0;
			}
			else if ((unk_0x4F5F2FB7AE0EB7AB(iLocal_0) <= 200 || unk_0x0922C2E075A5F18C(iLocal_0)) || func_150())
			{
				func_149("RACE_VehDmg");
				iLocal_45 = 1;
				iLocal_48 = unk_0x578C4EF320340AF7() + 1000;
				return 0;
			}
			else if (unk_0x10D3F7E169A49C44(iLocal_0, -1, 0) != unk_0x9B0761B4C3EB8BC7())
			{
				func_146();
				return 0;
			}
			else
			{
				if (func_86(0) || unk_0x7B70881748D166CD(joaat("appinternet")) > 0)
				{
					func_133();
					return 0;
				}
				switch (Local_43.f_1)
				{
					case 1:
						func_157("STREET_PLAY_B", Local_43.f_3);
						break;
					
					case 2:
						func_157("STREET_PLAY_C", Local_43.f_3);
						break;
					
					case 3:
						func_149("SEA_PLAY");
						break;
				}
				iLocal_45 = 1;
				iLocal_48 = unk_0x578C4EF320340AF7();
				return 1;
			}
		}
		else
		{
			func_156(&iLocal_0);
			func_146();
			return 0;
		}
	}
	return 0;
}

void func_146()
{
	char* sVar0;
	
	if (Local_43.f_1 == 3)
	{
		if (func_14(iLocal_57))
		{
			sVar0 = "SEA_NA_VEH";
		}
		else
		{
			sVar0 = "SEA_NA_VEH2";
		}
		if (!func_148(sVar0))
		{
			func_147(sVar0);
			iLocal_45 = 1;
			iLocal_48 = unk_0x578C4EF320340AF7() + 1000;
		}
	}
	else if (Local_43.f_1 == 1)
	{
		if (!func_148("STREET_NA_BIKE"))
		{
			func_147("STREET_NA_BIKE");
			iLocal_45 = 1;
			iLocal_48 = unk_0x578C4EF320340AF7() + 1000;
		}
	}
	else if (!func_148("STREET_NA_CAR"))
	{
		func_147("STREET_NA_CAR");
		iLocal_45 = 1;
		iLocal_48 = unk_0x578C4EF320340AF7() + 1000;
	}
}

void func_147(char* sParam0)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x1A169149B3D18FCB(0, 1, true, -1);
}

bool func_148(char* sParam0)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

void func_149(char* sParam0)
{
	if (!func_148(sParam0))
	{
		func_147(sParam0);
	}
}

int func_150()
{
	int iVar0;
	
	iVar0 = unk_0x36FE6D3220816ADA(iLocal_0);
	if (unk_0x97AFEF6099069369(iVar0))
	{
		if (unk_0x5C87AA49B5DF6712(iLocal_0, 6, 0) || unk_0x5C87AA49B5DF6712(iLocal_0, 7, 0))
		{
			return 1;
		}
	}
	else if (unk_0xB86B8E85030B1552(iVar0))
	{
		if (((unk_0x5C87AA49B5DF6712(iLocal_0, 0, 0) || unk_0x5C87AA49B5DF6712(iLocal_0, 1, 0)) || unk_0x5C87AA49B5DF6712(iLocal_0, 4, 0)) || unk_0x5C87AA49B5DF6712(iLocal_0, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_151()
{
	int iVar0;
	char* sVar1;
	
	switch (Local_43.f_1)
	{
		case 1:
			iVar0 = func_155();
			if (iVar0 == 1)
			{
				func_149("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_149("STREET_NA_BIKE");
				return 0;
			}
			break;
		
		case 2:
			iVar0 = func_153();
			if (iVar0 == 1)
			{
				func_149("STREET_NA_COP");
				return 0;
			}
			else if (iVar0 == 2)
			{
				func_149("STREET_NA_CAR");
				return 0;
			}
			break;
		
		case 3:
			if (!func_152())
			{
				if (func_14(iLocal_57))
				{
					sVar1 = "SEA_NA_VEH";
				}
				else
				{
					sVar1 = "SEA_NA_VEH2";
				}
				func_149(sVar1);
				return 0;
			}
			break;
	}
	return 1;
}

int func_152()
{
	int iVar0;
	
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_0))
		{
			iVar0 = unk_0x36FE6D3220816ADA(iLocal_0);
			if (iVar0 == joaat("seashark") || iVar0 == joaat("seashark2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_153()
{
	int iVar0;
	int iVar1;
	int iVar2[83];
	
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_0))
		{
			iVar0 = unk_0x36FE6D3220816ADA(iLocal_0);
			if (func_154(iVar0))
			{
				return 1;
			}
			if ((((((((((iVar0 == joaat("police4") || iVar0 == joaat("policeold1")) || iVar0 == joaat("policeold2")) || iVar0 == joaat("fbi")) || iVar0 == joaat("fbi2")) || iVar0 == joaat("lguard")) || iVar0 == joaat("sheriff")) || iVar0 == joaat("sheriff2")) || iVar0 == joaat("pranger")) || iVar0 == joaat("ambulance")) || iVar0 == joaat("firetruk"))
			{
				return 1;
			}
			if (((unk_0x97AFEF6099069369(iVar0) || unk_0x5874D60325749F00(iVar0)) || unk_0x442D6659150AF4B3(iVar0)) || unk_0xF9C3E2B9AA9E2294(iVar0))
			{
				return 2;
			}
			iVar2[0] = joaat("ambulance");
			iVar2[1] = joaat("benson");
			iVar2[2] = joaat("biff");
			iVar2[3] = joaat("bus");
			iVar2[4] = joaat("firetruk");
			iVar2[5] = joaat("forklift");
			iVar2[6] = joaat("mule");
			iVar2[7] = joaat("mule2");
			iVar2[8] = joaat("packer");
			iVar2[9] = joaat("phantom");
			iVar2[10] = joaat("mower");
			iVar2[11] = joaat("stockade");
			iVar2[12] = joaat("squalo");
			iVar2[13] = joaat("maverick");
			iVar2[14] = joaat("polmav");
			iVar2[15] = joaat("airtug");
			iVar2[16] = joaat("boxville3");
			iVar2[17] = joaat("annihilator");
			iVar2[18] = joaat("dinghy");
			iVar2[19] = 0;
			iVar2[20] = joaat("ripley");
			iVar2[21] = joaat("trash");
			iVar2[22] = joaat("burrito");
			iVar2[23] = joaat("pony");
			iVar2[24] = joaat("speedo");
			iVar2[25] = joaat("marquis");
			iVar2[26] = joaat("sanchez");
			iVar2[27] = joaat("airtug");
			iVar2[28] = joaat("taco");
			iVar2[29] = joaat("barracks");
			iVar2[30] = joaat("romero");
			iVar2[31] = joaat("blazer");
			iVar2[32] = joaat("blazer2");
			iVar2[33] = joaat("bodhi2");
			iVar2[34] = joaat("boxville2");
			iVar2[35] = joaat("bulldozer");
			iVar2[36] = joaat("caddy");
			iVar2[37] = joaat("caddy2");
			iVar2[38] = joaat("camper");
			iVar2[39] = joaat("tiptruck");
			iVar2[40] = joaat("tourbus");
			iVar2[41] = joaat("towtruck");
			iVar2[42] = joaat("towtruck2");
			iVar2[43] = joaat("tractor");
			iVar2[44] = joaat("tractor2");
			iVar2[45] = joaat("utillitruck");
			iVar2[46] = joaat("utillitruck2");
			iVar2[47] = joaat("utillitruck3");
			iVar2[48] = joaat("ratloader");
			iVar2[49] = joaat("dloader");
			iVar2[50] = joaat("docktug");
			iVar2[51] = joaat("dump");
			iVar2[52] = joaat("gburrito");
			iVar2[53] = joaat("handler");
			iVar2[54] = joaat("hauler");
			iVar2[55] = joaat("journey");
			iVar2[56] = joaat("rentalbus");
			iVar2[57] = joaat("mixer");
			iVar2[58] = joaat("rhino");
			iVar2[59] = joaat("cutter");
			iVar2[60] = joaat("pounder");
			iVar2[61] = joaat("tiptruck2");
			iVar2[62] = joaat("mixer2");
			iVar2[63] = joaat("rubble");
			iVar2[64] = joaat("scrap");
			iVar2[65] = joaat("armytanker");
			iVar2[66] = joaat("barracks2");
			iVar2[67] = joaat("airbus");
			iVar2[68] = joaat("coach");
			iVar2[69] = joaat("pbus");
			iVar2[70] = joaat("riot");
			iVar2[71] = 0;
			iVar2[72] = joaat("stockade3");
			iVar2[73] = joaat("flatbed");
			iVar2[74] = joaat("boxville");
			iVar2[75] = joaat("burrito2");
			iVar2[76] = joaat("burrito3");
			iVar2[77] = joaat("burrito4");
			iVar2[78] = joaat("rumpo");
			iVar2[79] = joaat("speedo2");
			iVar2[80] = 0;
			iVar2[81] = joaat("blimp");
			iVar2[82] = joaat("blimp2");
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (iVar0 == iVar2[iVar1])
				{
					return 2;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

int func_154(int iParam0)
{
	switch (iParam0)
	{
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold2"):
		case joaat("policeold1"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
			return 1;
			break;
	}
	return 0;
}

int func_155()
{
	int iVar0;
	
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_0))
		{
			iVar0 = unk_0x36FE6D3220816ADA(iLocal_0);
			if (iVar0 == joaat("policeb"))
			{
				return 1;
			}
			if (unk_0x97AFEF6099069369(iVar0) && !unk_0x72B9CC2155AEDF58(iVar0))
			{
				return 0;
			}
		}
	}
	return 2;
}

void func_156(int iParam0)
{
	if (unk_0xAE06B9E39EBDE049(*iParam0))
	{
		unk_0xA59F96B50B97E63C(*iParam0, 0);
		if (unk_0x1758275D343D5BA3(*iParam0) && unk_0x1D2A3118784C0272(*iParam0, 1))
		{
			unk_0xE730EAF558C97567(iParam0);
		}
	}
}

void func_157(char* sParam0, int iParam1)
{
	if (!func_159(sParam0, iParam1))
	{
		func_158(sParam0, iParam1);
	}
}

void func_158(char* sParam0, int iParam1)
{
	unk_0x17751E107423AFE9(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	unk_0x1A169149B3D18FCB(0, 1, true, -1);
}

bool func_159(char* sParam0, int iParam1)
{
	unk_0x69476B1CA6A9FF80(sParam0);
	unk_0x42710E9E08FA375A(iParam1);
	return unk_0x1A3A9FFE5CA6F64B(0);
}

int func_160(int iParam0)
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

int func_161()
{
	int iVar0;
	
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		if (unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
		{
			iVar0 = unk_0xB0919F8F7C8097BD(unk_0x9B0761B4C3EB8BC7());
			if (func_15(iVar0))
			{
				if (unk_0xA16974805191D19C(iVar0))
				{
					if (Local_43.f_1 == 3 && unk_0xE72C9284B5143451(iVar0))
					{
						return 0;
					}
					return 1;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	return 0;
}

int func_162()
{
	int iVar0;
	
	if (unk_0x5A228A6A51E757C8(unk_0x460153A63B9477BC()))
	{
		iVar0 = 20;
		if (Local_43.f_1 == 3)
		{
			iVar0 = 40;
		}
		if (unk_0x272784C60C397DB6(unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true), Local_44, true) < IntToFloat(iVar0) && unk_0x518D695E2DBA9DB8(unk_0x9B0761B4C3EB8BC7()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_163()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_168(&uLocal_90))
	{
		if (Local_43.f_1 == 2)
		{
			if (func_165())
			{
				if (!unk_0xAE06B9E39EBDE049(iLocal_57))
				{
					if (unk_0x7D167B9A0CCDA347(iLocal_71) && unk_0x7D167B9A0CCDA347(iLocal_71))
					{
						iLocal_57 = unk_0xCE4780E24AFDFBF9(iLocal_71, Local_59, fLocal_60, true, true, false);
						if (unk_0xE550AA6544AB2B3F(1) && unk_0xE426378819957FFE())
						{
							iLocal_58 = unk_0xD1140442B9A3CDE1(iLocal_57, 1);
							unk_0xDC3073F7CC12181D(iLocal_58, iLocal_57, 1, 99999999);
							unk_0x4E65320BC9AD521C(iLocal_58, true);
							unk_0xCBA6B2B569DCAFD8(iLocal_58, true);
						}
						unk_0xB11D151E210D4FAC(iLocal_57, 1084227584);
						unk_0xC160551F55D6365A(iLocal_57, true, true, 0);
						unk_0x0A9768A52FEE2064(iLocal_57, true);
						unk_0xC4DB45F7A0864686(iLocal_57, 1);
						unk_0xC99DBD7FEDFA1D90(unk_0xA15491F33A2A9467(10), 1);
						unk_0xE096849E490C2EC2(iLocal_57, unk_0xA15491F33A2A9467(10));
						unk_0x617A5A74E1FE26A7(iLocal_57, 0);
						unk_0x74528AC0906CBABE(iLocal_71);
						wait(0);
					}
				}
				if (!unk_0xAE06B9E39EBDE049(iLocal_61))
				{
					if (unk_0x7D167B9A0CCDA347(iLocal_72))
					{
						iLocal_61 = unk_0xCE4780E24AFDFBF9(iLocal_72, Local_62, fLocal_63, true, true, false);
						unk_0xC160551F55D6365A(iLocal_61, false, true, 0);
						unk_0x0A9768A52FEE2064(iLocal_61, true);
						unk_0xC4DB45F7A0864686(iLocal_61, 1);
						unk_0xB11D151E210D4FAC(iLocal_61, 1084227584);
						unk_0xC99DBD7FEDFA1D90(unk_0xA15491F33A2A9467(10), 1);
						unk_0xE096849E490C2EC2(iLocal_61, unk_0xA15491F33A2A9467(10));
						unk_0x617A5A74E1FE26A7(iLocal_61, 0);
						unk_0x74528AC0906CBABE(iLocal_72);
						wait(0);
					}
				}
				if (unk_0xC614DDE265D18415(cLocal_73))
				{
					if (iLocal_75)
					{
						iVar0 = 0;
						while (iVar0 <= (iLocal_70 - 1))
						{
							if (unk_0xAE06B9E39EBDE049(iLocal_56[iVar0]))
							{
								if (!unk_0xA59F96B50B97E63C(iLocal_56[iVar0], 0) && !func_164(iLocal_56[iVar0], -2017877118))
								{
									unk_0x756D74A3EF0AB788(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									unk_0xCBA6B2B569DCAFD8(iLocal_56[iVar0], true);
								}
							}
							else if (unk_0x7D167B9A0CCDA347(iLocal_70[iVar0]))
							{
								iLocal_56[iVar0] = unk_0xB3116B49FE00E2F1(25, iLocal_70[iVar0], Local_66[iVar0 /*3*/], fLocal_67[iVar0], 1, true);
								unk_0xCBF81D3222C77066(iLocal_56[iVar0], Local_66[iVar0 /*3*/], 0, 0, 1);
								unk_0x4E65320BC9AD521C(iLocal_56[iVar0], true);
								unk_0x756D74A3EF0AB788(iLocal_56[iVar0], cLocal_73, sLocal_74[iVar0], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
								unk_0xCBA6B2B569DCAFD8(iLocal_56[iVar0], true);
							}
							iVar0++;
						}
						if ((((((((func_65(iLocal_56[0]) && func_65(iLocal_56[1])) && func_65(iLocal_56[2])) && func_65(iLocal_56[3])) && func_65(iLocal_56[4])) && func_65(iLocal_56[5])) && func_65(iLocal_56[6])) && func_14(iLocal_57)) && func_14(iLocal_61))
						{
							bLocal_55 = true;
							iVar0 = 0;
							while (iVar0 <= (iLocal_70 - 1))
							{
								unk_0x74528AC0906CBABE(iLocal_70[iVar0]);
								iVar0++;
							}
							iLocal_75 = 0;
						}
					}
				}
			}
		}
		else if (Local_43.f_1 == 1)
		{
			if (func_165())
			{
				if (!unk_0xAE06B9E39EBDE049(iLocal_57))
				{
					if (unk_0x7D167B9A0CCDA347(iLocal_71))
					{
						iLocal_57 = unk_0xCE4780E24AFDFBF9(iLocal_71, Local_59, fLocal_60, true, true, false);
						if (unk_0xE550AA6544AB2B3F(0) && unk_0x984C323395EB2EC5())
						{
							iLocal_58 = unk_0xD1140442B9A3CDE1(iLocal_57, 1);
							unk_0xDC3073F7CC12181D(iLocal_58, iLocal_57, 1, 99999999);
							unk_0x4E65320BC9AD521C(iLocal_58, true);
							unk_0xCBA6B2B569DCAFD8(iLocal_58, true);
						}
						unk_0xC160551F55D6365A(iLocal_57, true, true, 0);
						unk_0x0A9768A52FEE2064(iLocal_57, true);
						unk_0xC4DB45F7A0864686(iLocal_57, 1);
						unk_0xC99DBD7FEDFA1D90(unk_0xA15491F33A2A9467(10), 1);
						unk_0xE096849E490C2EC2(iLocal_57, unk_0xA15491F33A2A9467(10));
						unk_0x617A5A74E1FE26A7(iLocal_57, 0);
						unk_0x74528AC0906CBABE(iLocal_71);
					}
				}
				if (unk_0xC614DDE265D18415(cLocal_73))
				{
					if (iLocal_75)
					{
						iVar1 = 0;
						while (iVar1 <= (iLocal_70 - 3))
						{
							if (unk_0xAE06B9E39EBDE049(iLocal_56[iVar1]))
							{
								if (!unk_0xA59F96B50B97E63C(iLocal_56[iVar1], 0) && !func_164(iLocal_56[iVar1], -2017877118))
								{
									unk_0xCBF81D3222C77066(iLocal_56[iVar1], Local_66[iVar1 /*3*/], 0, 0, 1);
									if (iVar1 != 2 && iVar1 != 3)
									{
										unk_0x756D74A3EF0AB788(iLocal_56[iVar1], cLocal_73, sLocal_74[iVar1], 1000f, -1000f, -1, 1, 0, 0, 0, 0);
									}
									else
									{
										unk_0x756D74A3EF0AB788(iLocal_56[iVar1], cLocal_73, sLocal_74[iVar1], 1000f, -1000f, -1, 1, 0.5f, 0, 0, 0);
									}
									unk_0xCBA6B2B569DCAFD8(iLocal_56[iVar1], true);
								}
							}
							else if (unk_0x7D167B9A0CCDA347(iLocal_70[iVar1]))
							{
								iLocal_56[iVar1] = unk_0xB3116B49FE00E2F1(25, iLocal_70[iVar1], Local_66[iVar1 /*3*/], fLocal_67[iVar1], 1, true);
								unk_0x4E65320BC9AD521C(iLocal_56[iVar1], true);
							}
							iVar1++;
						}
						if ((((func_65(iLocal_56[0]) && func_65(iLocal_56[1])) && func_65(iLocal_56[2])) && func_65(iLocal_56[3])) && func_65(iLocal_56[4]))
						{
							unk_0xA785552633ED203B(iLocal_56[4], unk_0x9B0761B4C3EB8BC7(), -1, 2048, 4);
							iVar1 = 0;
							while (iVar1 <= (iLocal_70 - 1))
							{
								unk_0x74528AC0906CBABE(iLocal_70[iVar1]);
								iVar1++;
							}
							iLocal_75 = 0;
						}
					}
				}
			}
		}
		else if (Local_43.f_1 == 3)
		{
			if (func_165())
			{
				if (!unk_0xAE06B9E39EBDE049(iLocal_57))
				{
					if (unk_0x7D167B9A0CCDA347(iLocal_71))
					{
						iLocal_57 = unk_0xCE4780E24AFDFBF9(iLocal_71, Local_59, fLocal_60, true, true, false);
						unk_0xB11D151E210D4FAC(iLocal_57, 1084227584);
						unk_0x670DCAD297783EBE(iLocal_57, 0f);
						unk_0x5D1F2946542DA467(iLocal_57, 0);
						unk_0xC2BDB4F46B67F239(iLocal_57, 0);
						if (unk_0x7FA5AFDDD40A7CF5(iLocal_57))
						{
							unk_0xF9A692CE2F45AC6F(iLocal_57, true);
						}
						unk_0xC160551F55D6365A(iLocal_57, false, true, 0);
					}
				}
				iVar2 = 0;
				iVar2 = 0;
				while (iVar2 < 3)
				{
					if (unk_0xAE06B9E39EBDE049(iLocal_68[iVar2]))
					{
						if (unk_0xAE06B9E39EBDE049(iLocal_69[iVar2]))
						{
							if (!unk_0x5AEB5DDFFAD43CA5(iLocal_69[iVar2]) && func_14(iLocal_68[iVar2]))
							{
								if (unk_0xB064AF9925F5537B(iLocal_68[iVar2], -1, 0))
								{
									unk_0x13A4BD6CC31F7B8F(iLocal_69[iVar2], iLocal_68[iVar2], -1);
								}
							}
						}
						else if (func_14(iLocal_68[iVar2]) && unk_0x7D167B9A0CCDA347(joaat("a_m_y_jetski_01")))
						{
							iLocal_69[iVar2] = unk_0x6A7A2C83BD302BA4(iLocal_68[iVar2], 25, joaat("a_m_y_jetski_01"), -1, 1, true);
							unk_0xB1AC1F996633F5B4(iLocal_69[iVar2], 0);
							unk_0x4E65320BC9AD521C(iLocal_69[iVar2], true);
						}
					}
					else if (unk_0x7D167B9A0CCDA347(iLocal_71))
					{
						iLocal_68[iVar2] = unk_0xCE4780E24AFDFBF9(iLocal_71, Local_64[iVar2 /*3*/], fLocal_65[iVar2], true, true, false);
						unk_0xB11D151E210D4FAC(iLocal_68[iVar2], 1084227584);
						unk_0x670DCAD297783EBE(iLocal_68[iVar2], 0f);
						unk_0x5D1F2946542DA467(iLocal_68[iVar2], 1);
						unk_0xC2BDB4F46B67F239(iLocal_68[iVar2], 1);
						if (unk_0x7FA5AFDDD40A7CF5(iLocal_68[iVar2]))
						{
							unk_0xF9A692CE2F45AC6F(iLocal_68[iVar2], true);
						}
						unk_0xC160551F55D6365A(iLocal_68[iVar2], false, true, 0);
					}
					iVar2++;
				}
				if (((unk_0xAE06B9E39EBDE049(iLocal_57) && unk_0xAE06B9E39EBDE049(iLocal_68[0])) && unk_0xAE06B9E39EBDE049(iLocal_68[1])) && unk_0xAE06B9E39EBDE049(iLocal_68[2]))
				{
					unk_0x74528AC0906CBABE(iLocal_71);
				}
				if ((unk_0xAE06B9E39EBDE049(iLocal_69[0]) && unk_0xAE06B9E39EBDE049(iLocal_69[1])) && unk_0xAE06B9E39EBDE049(iLocal_69[2]))
				{
					unk_0x74528AC0906CBABE(joaat("a_m_y_jetski_01"));
				}
				unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 170, true);
			}
		}
	}
}

int func_164(int iParam0, int iParam1)
{
	if (func_65(iParam0))
	{
		if (unk_0x16BC17A8EDC701A2(iParam0, iParam1) == 1 || unk_0x16BC17A8EDC701A2(iParam0, iParam1) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_165()
{
	if (!func_167())
	{
		return 0;
	}
	if (func_65(unk_0x9B0761B4C3EB8BC7()))
	{
		if (!func_166(unk_0x9B0761B4C3EB8BC7(), Local_59, 100f) || unk_0x03DB5C6AABF8DA46())
		{
			return 1;
		}
	}
	return 0;
}

bool func_166(int iParam0, struct<3> Param1, float fParam2)
{
	return vdist2(unk_0x3E4D3CCC220BDFB1(iParam0, true), Param1) <= (fParam2 * fParam2);
}

int func_167()
{
	if (Local_43.f_1 == 3)
	{
		return 1;
	}
	else if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		if (unk_0x1F596C965B00E290() >= 20 || unk_0x1F596C965B00E290() < 5)
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

int func_168(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_169(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_169(var uParam0)
{
	return func_170(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_170(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xCE990E643CD9D0E5(iParam0, 30))
	{
		if (unk_0xCE990E643CD9D0E5(iParam0, 29))
		{
			switch (func_171(iParam0))
			{
				case 0:
					return unk_0x7D167B9A0CCDA347(iParam2);
					break;
				
				case 1:
					return unk_0xC614DDE265D18415(sParam1);
					break;
				
				case 2:
					return unk_0x8FBC2B79465DEB9E(sParam1);
					break;
				
				case 3:
					return unk_0xC7F5A2E99D75A65C(sParam1);
					break;
				
				case 4:
					return unk_0x08A8988B88C144BE(iParam2, sParam1);
					break;
				
				case 5:
					return unk_0x338C0BA03A21B0DB(sParam1);
					break;
				
				case 6:
					return unk_0x8B917081F9836EDD(sParam1, unk_0xCE990E643CD9D0E5(iParam0, 27), -1);
					break;
				
				case 7:
					return unk_0x70D85C10C7EFA22C(iParam2);
					break;
				
				case 8:
					return unk_0xF5EE205091CE6DB2(iParam2);
					break;
				
				case 9:
					return unk_0x4F144789C4312F35();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_171(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (unk_0xCE990E643CD9D0E5(iParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_172(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((unk_0xD3137A576BE9EC5C() >= (uParam0->f_146 + uParam0->f_147) || unk_0xCE990E643CD9D0E5(Global_98955.f_20, 2)) || unk_0xCE990E643CD9D0E5(Global_98955.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 29))
					{
						func_173(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = unk_0xD3137A576BE9EC5C();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_173(int iParam0)
{
	func_174(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_174(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xCE990E643CD9D0E5(*iParam0, 30))
	{
		switch (func_171(*iParam0))
		{
			case 0:
				unk_0x78FCB2E22C41B9D5(iParam2);
				break;
			
			case 1:
				unk_0x131ED02492676000(sParam1);
				break;
			
			case 2:
				unk_0x08E33007524DAD35(sParam1);
				break;
			
			case 3:
				unk_0x494D5FF88119CDC0(sParam1, unk_0xCE990E643CD9D0E5(*iParam0, 28));
				break;
			
			case 4:
				unk_0x766028370E52319B(iParam2, sParam1);
				break;
			
			case 5:
				unk_0xBBF766AC368C3EB1(sParam1);
				break;
			
			case 6:
				unk_0x8B917081F9836EDD(sParam1, unk_0xCE990E643CD9D0E5(*iParam0, 27), -1);
				break;
			
			case 7:
				unk_0xA9CFCFCA622D2A46(iParam2);
				break;
			
			case 8:
				unk_0xBAA4D421B8B8A744(sParam1, iParam2);
				break;
			
			case 9:
				unk_0x22043B0E5A2FE456();
				break;
			
			default:
				break;
		}
		unk_0xBE20AB8238688965(iParam0, 29);
	}
}

void func_175()
{
	int iVar0;
	
	if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		switch (Local_43)
		{
			case 0:
				Local_59 = { -158.67f, -1555.16f, 34.63f };
				fLocal_60 = 187.71f;
				Local_62 = { -155.15f, -1550.83f, 34.53f };
				fLocal_63 = 213.13f;
				Local_83 = { -68.87878f, -1818.903f, 24.55311f };
				Local_84 = { -56.0098f, -1807.029f, 27.85417f };
				Local_66[0 /*3*/] = { -157.19f, -1555.36f, 35.07f };
				Local_66[1 /*3*/] = { -157.04f, -1557.57f, 35.11f };
				Local_66[2 /*3*/] = { -159.83f, -1557.39f, 34.96f };
				Local_66[3 /*3*/] = { -156.64f, -1551.96f, 34.92f };
				Local_66[4 /*3*/] = { -156.25f, -1552.58f, 34.93f };
				Local_66[5 /*3*/] = { -153.23f, -1553.05f, 34.93f };
				Local_66[6 /*3*/] = { -155.3f, -1556.41f, 35.13f };
				fLocal_67[0] = 101.91f;
				fLocal_67[1] = 38.48f;
				fLocal_67[2] = -36.7f;
				fLocal_67[3] = -52.93f;
				fLocal_67[4] = -75.07f;
				fLocal_67[5] = 33.13f;
				fLocal_67[6] = -170.02f;
				break;
			
			case 1:
				Local_59 = { 368.72f, 294.06f, 102.96f };
				fLocal_60 = 25.17f;
				Local_62 = { 373.71f, 290.72f, 102.89f };
				fLocal_63 = 33.24f;
				Local_83 = { -523.5497f, 262.2986f, 80.01991f };
				Local_84 = { -509.1013f, 272.478f, 86.17713f };
				Local_66[0 /*3*/] = { 367.24f, 293.81f, 103.41f };
				Local_66[1 /*3*/] = { 368.73f, 296.89f, 103.41f };
				Local_66[2 /*3*/] = { 366.94f, 296.34f, 103.43f };
				Local_66[3 /*3*/] = { 375.21f, 291.85f, 103.25f };
				Local_66[4 /*3*/] = { 374.81f, 292.47f, 103.26f };
				Local_66[5 /*3*/] = { 371.51f, 291.85f, 103.31f };
				Local_66[6 /*3*/] = { 373.86f, 296.3f, 103.31f };
				fLocal_67[0] = -64.83f;
				fLocal_67[1] = -163.04f;
				fLocal_67[2] = -118.77f;
				fLocal_67[3] = 127.18f;
				fLocal_67[4] = 105.04f;
				fLocal_67[5] = -146.75f;
				fLocal_67[6] = 10.11f;
				break;
			
			case 2:
				Local_59 = { -807.98f, -2555.14f, 13.34f };
				fLocal_60 = 3.35f;
				Local_62 = { -810.1f, -2560.85f, 13.38f };
				fLocal_63 = 43.57f;
				Local_83 = { -1000.759f, -2436.092f, 17.16946f };
				Local_84 = { -986.7399f, -2424.87f, 22.16946f };
				Local_66[0 /*3*/] = { -809.45f, -2554.82f, 13.76f };
				Local_66[1 /*3*/] = { -808.47f, -2552.43f, 13.76f };
				Local_66[2 /*3*/] = { -806.32f, -2552.87f, 13.76f };
				Local_66[3 /*3*/] = { -808.59f, -2559.5f, 13.76f };
				Local_66[4 /*3*/] = { -809.1f, -2558.97f, 13.76f };
				Local_66[5 /*3*/] = { -812.82f, -2559.48f, 13.76f };
				Local_66[6 /*3*/] = { -810.72f, -2555.37f, 13.76f };
				fLocal_67[0] = -86.65f;
				fLocal_67[1] = -130.05f;
				fLocal_67[2] = 150.04f;
				fLocal_67[3] = 137.51f;
				fLocal_67[4] = 115.37f;
				fLocal_67[5] = -136.43f;
				fLocal_67[6] = 20.43f;
				break;
			
			case 3:
				Local_59 = { 778.59f, -1160.2f, 28.35f };
				fLocal_60 = 302.47f;
				Local_62 = { 778.47f, -1164.01f, 28.25f };
				fLocal_63 = 287.97f;
				Local_83 = { -1000.759f, -2436.092f, 17.16946f };
				Local_84 = { -986.7399f, -2424.87f, 22.16946f };
				Local_66[0 /*3*/] = { 778.16f, -1158.78f, 28.88f };
				Local_66[1 /*3*/] = { 780.82f, -1158.1f, 28.73f };
				Local_66[2 /*3*/] = { 781.52f, -1158.81f, 28.7f };
				Local_66[3 /*3*/] = { 779.16f, -1165.74f, 28.72f };
				Local_66[4 /*3*/] = { 779.86f, -1165.52f, 28.72f };
				Local_66[5 /*3*/] = { 780.75f, -1161.99f, 28.65f };
				Local_66[6 /*3*/] = { 783.8f, -1165.61f, 28.74f };
				fLocal_67[0] = -147.53f;
				fLocal_67[1] = 171.51f;
				fLocal_67[2] = 104.94f;
				fLocal_67[3] = 21.91f;
				fLocal_67[4] = -0.22f;
				fLocal_67[5] = 107.91f;
				fLocal_67[6] = -95.23f;
				break;
			
			case 4:
				Local_59 = { -1066.59f, -1151.04f, 1.71f };
				fLocal_60 = 258.32f;
				Local_66[0 /*3*/] = { -1065.07f, -1151.02f, 2.16f };
				Local_66[1 /*3*/] = { -1065.35f, -1149.36f, 2.16f };
				Local_66[2 /*3*/] = { -1067.13f, -1151.68f, 2.16f };
				Local_66[3 /*3*/] = { -1066.3f, -1149.38f, 2.16f };
				Local_66[4 /*3*/] = { -1066.01f, -1152.26f, 2.16f };
				fLocal_67[0] = 75.06f;
				fLocal_67[1] = 134.25f;
				fLocal_67[2] = -52.71f;
				fLocal_67[3] = -93.39f;
				fLocal_67[4] = -141.52f;
				Local_83 = { -1265.744f, -1057.199f, 5.410841f };
				Local_84 = { -1258.679f, -1049.919f, 9.443882f };
				break;
		}
		func_180(Local_43, &Local_85, &Local_86, &fLocal_87);
		iLocal_70[0] = joaat("a_f_y_hipster_02");
		iLocal_70[1] = joaat("a_m_y_hipster_02");
		iLocal_70[2] = joaat("a_m_y_hipster_02");
		iLocal_70[3] = joaat("a_f_y_hipster_02");
		iLocal_70[4] = joaat("a_m_y_hipster_02");
		iLocal_70[5] = joaat("a_m_y_hipster_02");
		iLocal_70[6] = joaat("a_m_y_hipster_02");
		if (Local_43.f_1 == 1)
		{
			cLocal_73 = "random@street_race";
			sLocal_74[0] = "_car_b_chatting_female";
			sLocal_74[1] = "_car_b_chatting_male";
			sLocal_74[2] = "_car_b_chatting_male";
			sLocal_74[3] = "_car_b_chatting_female";
			sLocal_74[4] = "_car_b_lookout";
		}
		else
		{
			cLocal_73 = "random@street_race";
			sLocal_74[0] = "_car_a_flirt_girl";
			sLocal_74[1] = "_car_a_gawker_male_a";
			sLocal_74[2] = "_car_a_gawker_male_b";
			sLocal_74[3] = "_car_b_chatting_female";
			sLocal_74[4] = "_car_b_chatting_male";
			sLocal_74[5] = "_car_b_driver";
			sLocal_74[6] = "_car_b_lookout";
			func_179(&uLocal_90, iLocal_72);
		}
		iLocal_71 = func_178(Local_43.f_1);
		iVar0 = 0;
		while (iVar0 <= (iLocal_70 - 1))
		{
			func_179(&uLocal_90, iLocal_70[iVar0]);
			iVar0++;
		}
		func_179(&uLocal_90, iLocal_71);
		func_176(&uLocal_90, cLocal_73);
		unk_0xCCF292009C6F1D61(Local_83, Local_84, false, 0);
		unk_0x01A2F6B26EAAEAC5(Local_85, Local_86, fLocal_87, 0, false, 1);
		iLocal_47 = 1;
	}
	else if (Local_43.f_1 == 3)
	{
		switch (Local_43)
		{
			case 5:
				Local_59 = { 3066.63f, 650.9f, 0.17f };
				fLocal_60 = 351.81f;
				Local_64[0 /*3*/] = { 3073.57f, 648.09f, 0.01f };
				fLocal_65[0] = 5.72f;
				Local_64[1 /*3*/] = { 3071.53f, 648.79f, -0.09f };
				fLocal_65[1] = 351.33f;
				Local_64[2 /*3*/] = { 3068.73f, 645.53f, -0.07f };
				fLocal_65[2] = 348.18f;
				break;
			
			case 6:
				Local_59 = { 3462.11f, 5192.15f, -0.04f };
				fLocal_60 = 222.9f;
				Local_64[0 /*3*/] = { 3456.64f, 5195.91f, 0.12f };
				fLocal_65[0] = 211.54f;
				Local_64[1 /*3*/] = { 3453.19f, 5192.84f, -0.17f };
				fLocal_65[1] = 201.55f;
				Local_64[2 /*3*/] = { 3451.06f, 5189.43f, -0.3f };
				fLocal_65[2] = 221.55f;
				break;
			
			case 7:
				Local_59 = { 194.64f, 3621.27f, 29.91f };
				fLocal_60 = 163.95f;
				Local_64[0 /*3*/] = { 198.62f, 3620.46f, 29.91f };
				fLocal_65[0] = 175.4f;
				Local_64[1 /*3*/] = { 202.78f, 3619.69f, 29.87f };
				fLocal_65[1] = 163.69f;
				Local_64[2 /*3*/] = { 210.14f, 3618.88f, 29.87f };
				fLocal_65[2] = 175.31f;
				break;
			
			case 8:
				Local_59 = { 627.58f, -2138.06f, -0.07f };
				fLocal_60 = 180.09f;
				Local_64[0 /*3*/] = { 643.09f, -2146.11f, -0.09f };
				fLocal_65[0] = 143.89f;
				Local_64[1 /*3*/] = { 638.21f, -2145.3f, -0.1f };
				fLocal_65[1] = 172.41f;
				Local_64[2 /*3*/] = { 633.56f, -2143.83f, -0.04f };
				fLocal_65[2] = 191.97f;
				break;
		}
		iLocal_71 = joaat("seashark");
		func_179(&uLocal_90, iLocal_71);
		func_179(&uLocal_90, joaat("a_m_y_jetski_01"));
	}
}

void func_176(var uParam0, char* sParam1)
{
	func_177(uParam0, 1, -1, sParam1, 0);
}

void func_177(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 30))
		{
			if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!unk_0xF005CCA4263DF67F(sParam3, "NULL"))
					{
						if (unk_0xF005CCA4263DF67F(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			unk_0xBE20AB8238688965(uParam0[iVar0 /*18*/], iParam1);
			unk_0xBE20AB8238688965(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

int func_178(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			iVar0 = joaat("bati");
			break;
		
		case 2:
			iVar0 = joaat("ninef");
			break;
		
		case 3:
			iVar0 = joaat("seashark");
			break;
	}
	return iVar0;
}

void func_179(var uParam0, int iParam1)
{
	func_177(uParam0, 0, iParam1, "NULL", 0);
}

void func_180(int iParam0, var uParam1, var uParam2, float fParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 311.1262f, -1896.261f, 20.68329f };
			*uParam2 = { -295.0653f, -1405.53f, 35.3146f };
			*fParam3 = 300f;
			break;
		
		case 1:
			*uParam1 = { 273.185f, 335.2969f, 105.5704f };
			*uParam2 = { 412.2877f, 299.2304f, 101.0724f };
			*fParam3 = 20f;
			break;
		
		case 2:
			*uParam1 = { -823.7157f, -2588f, 13.7691f };
			*uParam2 = { -801.3356f, -2464.007f, 12.42913f };
			*fParam3 = 30f;
			break;
		
		case 3:
			*uParam1 = { 791.8257f, -1423.863f, 24.17954f };
			*uParam2 = { 783.167f, -1015.648f, 50.24134f };
			*fParam3 = 200f;
			break;
		
		case 4:
			*uParam1 = { -1084.03f, -1165.724f, 0.150211f };
			*uParam2 = { -1029.213f, -1134.581f, 2.174534f };
			*fParam3 = 10f;
			break;
	}
}

int func_181()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (func_64(9))
	{
		return 0;
	}
	if (func_47(6) || func_47(7))
	{
		return 0;
	}
	if (Global_61711)
	{
		return 0;
	}
	if (func_204())
	{
		return 0;
	}
	if (Local_43.f_1 != 3 && func_53() != 1)
	{
		return 0;
	}
	if (unk_0xB330C2EF9E4B0D6E())
	{
		return 0;
	}
	if (func_65(unk_0x9B0761B4C3EB8BC7()) && unk_0x47DBF174A0CB9D55(unk_0x9B0761B4C3EB8BC7(), false))
	{
		iVar0 = unk_0xA5D3CD332CD10EE9();
		if (((func_14(iVar0) && unk_0xACBCFA3095C5A434(unk_0x9B0761B4C3EB8BC7(), iVar0)) && !func_203(unk_0x9B0761B4C3EB8BC7(), iVar0, -1)) && unk_0x36FE6D3220816ADA(iVar0) != joaat("taxi"))
		{
			return 0;
		}
	}
	switch (Local_43)
	{
		case 0:
			if (Global_111832[0])
			{
				return 0;
			}
			break;
		
		case 1:
			if (Global_111832[1])
			{
				return 0;
			}
			break;
		
		case 2:
			if (Global_111832[2])
			{
				return 0;
			}
			break;
		
		case 3:
			if (Global_111832[3])
			{
				return 0;
			}
			break;
		
		case 4:
			if (Global_111832[4])
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_111822[0])
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_111822[1])
			{
				return 0;
			}
			break;
		
		case 7:
			if (Global_111822[2])
			{
				return 0;
			}
			break;
		
		case 8:
			if (Global_111822[3])
			{
				return 0;
			}
			break;
	}
	if (!func_167())
	{
		iVar1 = 0;
		while (iVar1 <= (iLocal_70 - 1))
		{
			if (func_65(iLocal_56[iVar1]))
			{
				unk_0x9DC06E2A59C5AEBB(&iVar2);
				unk_0xC67F9BF03C2472AB(0, iVar1 * 100);
				unk_0x30291E2E564E9B47(0, 1193033728, 0);
				unk_0x19F29730874AD6F1(iVar2);
				unk_0x9B6EC2CECE1010EF(iLocal_56[iVar1], iVar2);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 <= (iLocal_69 - 1))
		{
			if (func_65(iLocal_69[iVar1]))
			{
				unk_0x9DC06E2A59C5AEBB(&iVar2);
				unk_0xC67F9BF03C2472AB(0, iVar1 * 110);
				if (func_14(iLocal_68[iVar1]) && unk_0xE0B3BC41DDA88DF0(iLocal_69[iVar1], iLocal_68[iVar1], false))
				{
					unk_0xD8C1C38EE8BC2AC6(0, iLocal_68[iVar1], 30f, 786597);
				}
				else
				{
					unk_0x30291E2E564E9B47(0, 1193033728, 0);
				}
				unk_0x19F29730874AD6F1(iVar2);
				unk_0x9B6EC2CECE1010EF(iLocal_69[iVar1], iVar2);
			}
			iVar1++;
		}
		if (func_65(iLocal_58))
		{
			if (func_14(iLocal_57) && unk_0xE0B3BC41DDA88DF0(iLocal_58, iLocal_57, false))
			{
				unk_0xD8C1C38EE8BC2AC6(iLocal_58, iLocal_57, 30f, 786597);
			}
			else
			{
				unk_0x30291E2E564E9B47(iLocal_58, 1193033728, 0);
			}
		}
		return 0;
	}
	if (func_183())
	{
		iVar4 = 0;
		while (iVar4 <= (iLocal_70 - 1))
		{
			if (func_65(iLocal_56[iVar4]))
			{
				unk_0x9DC06E2A59C5AEBB(&iVar3);
				unk_0xC67F9BF03C2472AB(0, iVar4 * 50);
				unk_0x8B18A80E8EB15510(0, unk_0x9B0761B4C3EB8BC7(), 500f, -1, 0, 0);
				unk_0x19F29730874AD6F1(iVar3);
				if ((iVar4 % 2) == 0)
				{
					func_182(iLocal_56[iVar4], 1);
				}
				unk_0x9B6EC2CECE1010EF(iLocal_56[iVar4], iVar3);
			}
			iVar4++;
		}
		iVar4 = 0;
		while (iVar4 <= (iLocal_69 - 1))
		{
			if (func_14(iLocal_68[iVar4]) && Local_43.f_1 == 3)
			{
				unk_0xF9A692CE2F45AC6F(iLocal_68[iVar4], false);
			}
			if (func_65(iLocal_69[iVar4]))
			{
				unk_0x9DC06E2A59C5AEBB(&iVar3);
				unk_0xC67F9BF03C2472AB(0, iVar4 * 60);
				if (func_14(iLocal_68[iVar4]) && unk_0xE0B3BC41DDA88DF0(iLocal_69[iVar4], iLocal_68[iVar4], false))
				{
					unk_0xD8C1C38EE8BC2AC6(0, iLocal_68[iVar4], 50f, 786468);
				}
				else
				{
					unk_0x8B18A80E8EB15510(0, unk_0x9B0761B4C3EB8BC7(), 500f, -1, 0, 0);
				}
				unk_0x19F29730874AD6F1(iVar3);
				unk_0x9B6EC2CECE1010EF(iLocal_69[iVar4], iVar3);
				if ((iVar4 % 2) == 0)
				{
					func_182(iLocal_69[iVar4], 1);
				}
			}
			iVar4++;
		}
		if (func_14(iLocal_57) && Local_43.f_1 == 3)
		{
			unk_0xF9A692CE2F45AC6F(iLocal_57, false);
		}
		if (func_65(iLocal_58))
		{
			if (func_14(iLocal_57) && unk_0xE0B3BC41DDA88DF0(iLocal_58, iLocal_57, false))
			{
				unk_0xD8C1C38EE8BC2AC6(iLocal_58, iLocal_57, 50f, 786468);
			}
			else
			{
				unk_0x8B18A80E8EB15510(iLocal_58, unk_0x9B0761B4C3EB8BC7(), 500f, -1, 0, 0);
			}
		}
		switch (Local_43)
		{
			case 0:
				Global_111832[0] = 1;
				Global_111838[0] = unk_0x578C4EF320340AF7();
				break;
			
			case 1:
				Global_111832[1] = 1;
				Global_111838[1] = unk_0x578C4EF320340AF7();
				break;
			
			case 2:
				Global_111832[2] = 1;
				Global_111838[2] = unk_0x578C4EF320340AF7();
				break;
			
			case 3:
				Global_111832[3] = 1;
				Global_111838[3] = unk_0x578C4EF320340AF7();
				break;
			
			case 4:
				Global_111832[4] = 1;
				Global_111838[4] = unk_0x578C4EF320340AF7();
				break;
			
			case 5:
				Global_111822[0] = 1;
				Global_111827[0] = unk_0x578C4EF320340AF7();
				break;
			
			case 6:
				Global_111822[1] = 1;
				Global_111827[1] = unk_0x578C4EF320340AF7();
				break;
			
			case 7:
				Global_111822[2] = 1;
				Global_111827[2] = unk_0x578C4EF320340AF7();
				break;
			
			case 8:
				Global_111822[3] = 1;
				Global_111827[3] = unk_0x578C4EF320340AF7();
				break;
		}
		return 0;
	}
	return 1;
}

void func_182(int iParam0, bool bParam1)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (func_65(iParam0))
	{
		iVar1 = 2;
		if (bParam1)
		{
			iVar1 = 3;
		}
		iVar2 = unk_0x344C570D6F8700DF(0, iVar1);
		if (iVar2 == 0)
		{
			sVar0 = "SCREAM_PANIC";
		}
		else if (iVar2 == 1)
		{
			sVar0 = "SCREAM_TERROR";
		}
		else
		{
			sVar0 = "SUPER_HIGH_FALL";
		}
		if (unk_0xE080FA9EB010F041(iParam0))
		{
			func_141(iParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			func_141(iParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}

int func_183()
{
	int iVar0;
	
	if (unk_0x0F1E960B06B93848(unk_0x460153A63B9477BC(), 0))
	{
		return 1;
	}
	if (Local_43.f_1 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= (iLocal_69 - 1))
		{
			if (unk_0xAE06B9E39EBDE049(iLocal_69[iVar0]))
			{
				if (unk_0x5AEB5DDFFAD43CA5(iLocal_69[iVar0]))
				{
					return 1;
				}
				else if (func_184(iLocal_69[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0) || unk_0xC0736D5851285045(iLocal_69[iVar0]))
				{
					return 1;
				}
			}
			if (unk_0xAE06B9E39EBDE049(iLocal_68[iVar0]))
			{
				if (unk_0xA59F96B50B97E63C(iLocal_68[iVar0], 0))
				{
					return 1;
				}
				else if (unk_0xCDF860E56BBCC6B4(iLocal_68[iVar0], unk_0x9B0761B4C3EB8BC7(), 1) && unk_0x4F5F2FB7AE0EB7AB(iLocal_68[iVar0]) < 900)
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (unk_0xAE06B9E39EBDE049(iLocal_57))
		{
			if (unk_0xA59F96B50B97E63C(iLocal_57, 0))
			{
				return 1;
			}
			else if (unk_0xCDF860E56BBCC6B4(iLocal_57, unk_0x9B0761B4C3EB8BC7(), 1) && unk_0x4F5F2FB7AE0EB7AB(iLocal_57) < 900)
			{
				return 1;
			}
		}
		return 0;
	}
	if (func_166(unk_0x9B0761B4C3EB8BC7(), Local_44, 50f) && unk_0x7922FF28ED63354A(unk_0x9B0761B4C3EB8BC7()))
	{
		return 1;
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_58))
	{
		if (unk_0x5AEB5DDFFAD43CA5(iLocal_58))
		{
			return 1;
		}
		else if (func_184(iLocal_58, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			return 1;
		}
		else if (unk_0xC0736D5851285045(iLocal_58))
		{
			unk_0x4E65320BC9AD521C(iLocal_58, false);
			return 1;
		}
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_57))
	{
		if (unk_0xA59F96B50B97E63C(iLocal_57, 0))
		{
			return 1;
		}
		else if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_57, true) || unk_0xCDF860E56BBCC6B4(iLocal_57, unk_0x9B0761B4C3EB8BC7(), 1))
		{
			return 1;
		}
	}
	if (unk_0xAE06B9E39EBDE049(iLocal_61))
	{
		if (unk_0xA59F96B50B97E63C(iLocal_61, 0))
		{
			return 1;
		}
		else if (unk_0xE0B3BC41DDA88DF0(unk_0x9B0761B4C3EB8BC7(), iLocal_61, true) || unk_0xCDF860E56BBCC6B4(iLocal_61, unk_0x9B0761B4C3EB8BC7(), 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_70 - 1))
	{
		if (unk_0xAE06B9E39EBDE049(iLocal_56[iVar0]))
		{
			if (unk_0x5AEB5DDFFAD43CA5(iLocal_56[iVar0]))
			{
				return 1;
			}
			else if (func_184(iLocal_56[iVar0], 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_184(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<3> Var0;
	
	if (func_15(unk_0x9B0761B4C3EB8BC7()) && func_15(iParam0))
	{
		if (unk_0xCDF860E56BBCC6B4(iParam0, unk_0x9B0761B4C3EB8BC7(), 1))
		{
			return 1;
		}
		if (func_198(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 6))
		{
			if (unk_0x42A04E707DE50816(unk_0x9B0761B4C3EB8BC7()))
			{
				Var0 = { unk_0x3E4D3CCC220BDFB1(unk_0x9B0761B4C3EB8BC7(), true) - unk_0x3E4D3CCC220BDFB1(iParam0, true) };
				if ((((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return func_197(unk_0x9B0761B4C3EB8BC7(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_185(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_185(int iParam0, float fParam1)
{
	float fVar0;
	
	if (func_15(unk_0x9B0761B4C3EB8BC7()) && func_15(iParam0))
	{
		if (func_196(iParam0) || unk_0x5E5402F6D3B26AFB(unk_0x460153A63B9477BC(), iParam0))
		{
			if (unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_186(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_186(int iParam0, float fParam1)
{
	return func_187(iParam0, unk_0x9B0761B4C3EB8BC7(), fParam1, 1, 250, 7);
}

bool func_187(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	
	iVar2 = func_195(iParam0, iParam1);
	if (!func_15(iParam0) || !func_15(iParam1))
	{
		if (iVar2 != -1)
		{
			func_194(&(Local_40[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_191(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_190();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_40[iVar2 /*4*/].f_1 = iParam0;
		Local_40[iVar2 /*4*/].f_2 = iParam1;
	}
	Var1 = { unk_0x1D5C49FCA9BC5B02(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_188(&(Local_40[iVar2 /*4*/]), Var1, iParam1, &(Local_40[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (unk_0x578C4EF320340AF7() - Local_40[iVar2 /*4*/].f_3) < iParam4);
}

int func_188(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_15(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_189(iParam2, iParam5) };
		*uParam0 = unk_0xF898EA06B9458004(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = unk_0x0F0E6A09A9C90474(*uParam0, &uVar0, &Var1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (unk_0xA1914E72A0EB31D0(iVar3))
	{
		func_15(iVar3);
		if (unk_0x9048E8838E822F21(iVar3) == iParam2)
		{
			if (bLocal_41)
			{
				unk_0x3CB9705203630AF7(Param1, unk_0x3E4D3CCC220BDFB1(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = unk_0x578C4EF320340AF7();
			return 1;
		}
		return 0;
	}
	if (unk_0x20F7576FDB52E2B0(iVar3))
	{
		func_15(iVar3);
		if (unk_0x47DBF174A0CB9D55(iParam2, false))
		{
			if (unk_0xEA90A5DC55A2F652(iVar3) == unk_0xA5D5B1042E8F47BD(iParam2, false))
			{
				if (bLocal_41)
				{
					unk_0x3CB9705203630AF7(Param1, unk_0x3E4D3CCC220BDFB1(iParam2, true), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = unk_0x578C4EF320340AF7();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_189(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = unk_0x344C570D6F8700DF(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return unk_0x3E4D3CCC220BDFB1(iParam0, true);
	}
	else if (iParam1 == 1)
	{
		return unk_0x1D5C49FCA9BC5B02(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return unk_0x1D5C49FCA9BC5B02(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return unk_0x1D5C49FCA9BC5B02(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return unk_0x1D5C49FCA9BC5B02(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return unk_0x1D5C49FCA9BC5B02(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return unk_0x1D5C49FCA9BC5B02(iParam0, 36864, 0f, 0f, 0f);
	}
	return unk_0x3E4D3CCC220BDFB1(iParam0, true);
}

int func_190()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_40)
	{
		if ((Local_40[iVar0 /*4*/] == 0 && Local_40[iVar0 /*4*/].f_1 == 0) && Local_40[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_191(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_193(unk_0x3E4D3CCC220BDFB1(iParam1, true) - unk_0x3E4D3CCC220BDFB1(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { unk_0x2E6A35AC161797A7(iParam0) };
	}
	else
	{
		Var1 = { func_193(unk_0x1D5C49FCA9BC5B02(iParam0, 31086, 0f, 5f, 0f) - unk_0x1D5C49FCA9BC5B02(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_192(Var1, Var0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_192(struct<3> Param0, struct<3> Param1)
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_193(struct<3> Param0)
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

void func_194(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_195(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_40)
	{
		if (Local_40[iVar0 /*4*/].f_1 == iParam0 && Local_40[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_196(int iParam0)
{
	if (unk_0x2311EB213A0CB707(unk_0x460153A63B9477BC(), iParam0) && unk_0xC0A3F78AF5448915(unk_0x9B0761B4C3EB8BC7(), 6))
	{
		return 1;
	}
	return 0;
}

bool func_197(int iParam0, int iParam1, float fParam2)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0x2E6A35AC161797A7(iParam0) };
	Var1 = { unk_0x3E4D3CCC220BDFB1(iParam1, true) - unk_0x3E4D3CCC220BDFB1(iParam0, true) };
	return (((Var0.x * Var1.x) + (Var0.f_1 * Var1.f_1)) / vdist(Var1, 0f, 0f, 0f)) > cos(fParam2);
}

int func_198(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_15(unk_0x9B0761B4C3EB8BC7()) && func_15(iParam0))
	{
		unk_0x1386E5E658CE3032(unk_0x9B0761B4C3EB8BC7(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_202(iParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_199(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (unk_0xEBFC112B3EEB18E5(unk_0x9B0761B4C3EB8BC7()))
			{
				if (unk_0x7922FF28ED63354A(unk_0x9B0761B4C3EB8BC7()))
				{
					if (unk_0xC7EB33BFDB436C87(unk_0x3E4D3CCC220BDFB1(iParam0, true), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_202(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_199(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_199(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { unk_0x3E4D3CCC220BDFB1(iParam0, true) };
	Var1 = { Var0 };
	Var0.x = (Var0.x - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var1.x = (Var1.x + fParam1);
	Var1.f_1 = (Var1.f_1 + fParam1);
	Var1.f_2 = (Var1.f_2 + fParam1);
	if (bParam2)
	{
		if (((unk_0x811BEDF8A732443A(unk_0x3E4D3CCC220BDFB1(iParam0, true), joaat("weapon_grenade"), fParam1, 1) || unk_0x811BEDF8A732443A(unk_0x3E4D3CCC220BDFB1(iParam0, true), joaat("weapon_molotov"), fParam1, 1)) || unk_0x811BEDF8A732443A(unk_0x3E4D3CCC220BDFB1(iParam0, true), joaat("weapon_smokegrenade"), fParam1, 1)) || unk_0x811BEDF8A732443A(unk_0x3E4D3CCC220BDFB1(iParam0, true), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_200(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_200(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (unk_0x5AC0C31BB5BC0343(Var0, Var1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_200(int iParam0, float fParam1)
{
	var uVar0;
	struct<3> Var1;
	
	if ((((unk_0x7E1498E5B37D9AC7(iParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || unk_0x7E1498E5B37D9AC7(iParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || unk_0x7E1498E5B37D9AC7(iParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || unk_0x7E1498E5B37D9AC7(iParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || unk_0x7E1498E5B37D9AC7(iParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_201(iParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_201(int iParam0, struct<3> Param1, float fParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_193(Param1 - unk_0x3E4D3CCC220BDFB1(iParam0, true)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { unk_0x2E6A35AC161797A7(iParam0) };
	}
	else
	{
		Var1 = { func_193(unk_0x1D5C49FCA9BC5B02(iParam0, 31086, 0f, 5f, 0f) - unk_0x1D5C49FCA9BC5B02(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_192(Var1, Var0);
	if (fVar2 <= cos((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_202(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (bParam1)
	{
		if (unk_0x7922FF28ED63354A(unk_0x9B0761B4C3EB8BC7()))
		{
			if (unk_0x910DFF8E55ABB8EC(unk_0x9B0761B4C3EB8BC7(), iParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (unk_0xC7EB33BFDB436C87(unk_0x3E4D3CCC220BDFB1(iParam0, true), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_203(int iParam0, int iParam1, int iParam2)
{
	if (!unk_0xA59F96B50B97E63C(iParam0, 0) && !unk_0xA59F96B50B97E63C(iParam1, 0))
	{
		if (unk_0xACBCFA3095C5A434(iParam0, iParam1))
		{
			if (unk_0x10D3F7E169A49C44(iParam1, iParam2, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_204()
{
	switch (Local_43)
	{
		case 5:
			return unk_0xCE990E643CD9D0E5(Global_111858.f_24972.f_2, 0);
			break;
		
		case 6:
			return unk_0xCE990E643CD9D0E5(Global_111858.f_24972.f_2, 1);
			break;
		
		case 7:
			return unk_0xCE990E643CD9D0E5(Global_111858.f_24972.f_2, 2);
			break;
		
		case 8:
			return unk_0xCE990E643CD9D0E5(Global_111858.f_24972.f_2, 3);
			break;
		
		case 0:
			return unk_0xCE990E643CD9D0E5(Global_111858.f_24975.f_3, 0);
			break;
		
		case 1:
			return unk_0xCE990E643CD9D0E5(Global_111858.f_24975.f_3, 1);
			break;
		
		case 2:
			return unk_0xCE990E643CD9D0E5(Global_111858.f_24975.f_3, 2);
			break;
		
		case 3:
			return unk_0xCE990E643CD9D0E5(Global_111858.f_24975.f_3, 3);
			break;
		
		case 4:
			return unk_0xCE990E643CD9D0E5(Global_111858.f_24975.f_3, 4);
			break;
	}
	return 0;
}

void func_205()
{
	iLocal_42 = 0;
	iLocal_45 = 0;
	bLocal_52 = false;
	bLocal_53 = false;
	iLocal_49 = 0;
	iLocal_50 = 0;
	iLocal_51 = 0;
	func_207(1);
	unk_0x1572226BDDE6B540("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 0);
	unk_0x1572226BDDE6B540("WORLD_VEHICLE_PARK_PARALLEL", 0);
	if (Local_43 == 1)
	{
		iLocal_89 = func_206(374.0083f, 279.5919f, 102.3306f, 40f);
		unk_0xF27E737981AFB47D(374.0083f, 279.5919f, 102.3306f, 25f, 0, 0, 0, 0, false, 0);
	}
	if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		iLocal_88 = func_206(Local_44, 60f);
	}
}

int func_206(struct<3> Param0, float fParam1)
{
	struct<3> Var0;
	
	Var0 = { (fParam1 / 2f), (fParam1 / 2f), (fParam1 / 2f) };
	return unk_0xC08A186299DFDA0A(Param0 - Var0, Param0 + Var0, 0, 1, 1, 1);
}

void func_207(bool bParam0)
{
	if (bParam0)
	{
		switch (Local_43)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_179(&uLocal_90, joaat("banshee"));
				func_179(&uLocal_90, joaat("feltzer2"));
				func_179(&uLocal_90, joaat("sentinel"));
				break;
			
			case 4:
				func_179(&uLocal_90, joaat("bati"));
				func_179(&uLocal_90, joaat("ruffian"));
				break;
			
			case 5:
			case 6:
			case 7:
			case 8:
				func_179(&uLocal_90, joaat("seashark"));
				break;
		}
	}
	else
	{
		func_208(&uLocal_90);
	}
}

void func_208(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (unk_0xCE990E643CD9D0E5((*uParam0)[iVar0 /*18*/], 30))
		{
			func_209(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_209(var uParam0)
{
	func_210(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_210(int iParam0, char* sParam1, int iParam2)
{
	if (unk_0xCE990E643CD9D0E5(iParam0, 30))
	{
		switch (func_171(iParam0))
		{
			case 0:
				unk_0x74528AC0906CBABE(iParam2);
				break;
			
			case 1:
				unk_0x1082C25039B168F8(sParam1);
				break;
			
			case 2:
				unk_0x8300D71BCDF3F00B(sParam1);
				break;
			
			case 3:
				unk_0x2DDA2C702A92866E(sParam1);
				break;
			
			case 4:
				unk_0x0506FDB9D8A504E1(iParam2, sParam1);
				break;
			
			case 5:
				unk_0x63713E5A16B21379(sParam1);
				break;
			
			case 6:
				unk_0x08020BC2A66F5B71();
				break;
			
			case 7:
				unk_0x83EEF5A24C995E79(iParam2);
				break;
			
			case 8:
				unk_0x5D52AA94798846BB(iParam2, unk_0xCE990E643CD9D0E5(iParam0, 26));
				break;
			
			case 9:
				unk_0x0C58CE82DF2CA879();
				break;
			
			default:
				break;
		}
	}
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return unk_0xCE990E643CD9D0E5(Global_111858.f_24975.f_1, 0);
			break;
		
		case 1:
			return unk_0xCE990E643CD9D0E5(Global_111858.f_24975.f_1, 1);
			break;
		
		case 2:
			return unk_0xCE990E643CD9D0E5(Global_111858.f_24975.f_1, 2);
			break;
		
		case 3:
			return unk_0xCE990E643CD9D0E5(Global_111858.f_24975.f_1, 3);
			break;
		
		case 4:
			return unk_0xCE990E643CD9D0E5(Global_111858.f_24975.f_1, 4);
			break;
	}
	return 0;
}

bool func_212(int iParam0, int iParam1)
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

void func_213()
{
	if (func_214(func_215(86, 0), Local_44, 1f, 0))
	{
		Local_43 = 0;
		Local_43.f_1 = 2;
		Local_43.f_3 = 100;
		Local_43.f_4 = 20;
	}
	else if (func_214(func_215(87, 0), Local_44, 1f, 0))
	{
		Local_43 = 1;
		Local_43.f_1 = 2;
		Local_43.f_3 = 500;
		Local_43.f_4 = 18;
	}
	else if (func_214(func_215(88, 0), Local_44, 1f, 0))
	{
		Local_43 = 2;
		Local_43.f_1 = 2;
		Local_43.f_3 = 1000;
		Local_43.f_4 = 2;
	}
	else if (func_214(func_215(89, 0), Local_44, 1f, 0))
	{
		Local_43 = 3;
		Local_43.f_1 = 2;
		Local_43.f_3 = 1250;
		Local_43.f_4 = 4;
	}
	else if (func_214(func_215(90, 0), Local_44, 1f, 0))
	{
		Local_43 = 4;
		Local_43.f_1 = 1;
		Local_43.f_3 = 1500;
		Local_43.f_4 = 5;
	}
	else if (func_214(func_215(82, 0), Local_44, 1f, 0))
	{
		Local_43 = 5;
		Local_43.f_1 = 3;
		Local_43.f_3 = 0;
		Local_43.f_4 = 16;
	}
	else if (func_214(func_215(83, 0), Local_44, 1f, 0))
	{
		Local_43 = 6;
		Local_43.f_1 = 3;
		Local_43.f_3 = 0;
		Local_43.f_4 = 13;
	}
	else if (func_214(func_215(84, 0), Local_44, 1f, 0))
	{
		Local_43 = 7;
		Local_43.f_1 = 3;
		Local_43.f_3 = 0;
		Local_43.f_4 = 15;
		Local_43.f_5 = 1;
	}
	else if (func_214(func_215(85, 0), Local_44, 1f, 0))
	{
		Local_43 = 8;
		Local_43.f_1 = 3;
		Local_43.f_4 = 24;
		Local_43.f_3 = 0;
		Local_43.f_5 = 1;
	}
	else
	{
		func_216(0);
	}
}

int func_214(struct<3> Param0, struct<3> Param1, float fParam2, bool bParam3)
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

Vector3 func_215(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return 0f, 0f, 0f;
	}
	return Global_31346[iVar0 /*23*/][iParam1 /*3*/];
}

void func_216(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_46)
	{
		unk_0x8B4966914EE5EB9F(0);
		iLocal_46 = 1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_15(iLocal_56[iVar0]))
		{
			unk_0x9B94F6169B0DAEFD(iLocal_56[iVar0]);
			unk_0x30291E2E564E9B47(iLocal_56[iVar0], 1193033728, 0);
			unk_0x4E65320BC9AD521C(iLocal_56[iVar0], false);
			unk_0x2481907DEE6B85EA(&(iLocal_56[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_15(iLocal_69[iVar0]))
		{
			if (func_15(iLocal_68[iVar0]))
			{
				unk_0x9B94F6169B0DAEFD(iLocal_69[iVar0]);
				if (unk_0x5874D60325749F00(unk_0x36FE6D3220816ADA(iLocal_68[iVar0])))
				{
					unk_0xF9A692CE2F45AC6F(iLocal_68[iVar0], false);
				}
				unk_0xD8C1C38EE8BC2AC6(iLocal_69[iVar0], iLocal_68[iVar0], 20f, 786599);
				unk_0xCBA6B2B569DCAFD8(iLocal_69[iVar0], true);
				unk_0x4E65320BC9AD521C(iLocal_69[iVar0], false);
				unk_0x2481907DEE6B85EA(&(iLocal_69[iVar0]));
				unk_0xE730EAF558C97567(&(iLocal_68[iVar0]));
			}
		}
		iVar0++;
	}
	if (func_15(iLocal_58))
	{
		if (func_15(iLocal_57))
		{
			unk_0x9B94F6169B0DAEFD(iLocal_58);
			unk_0x6673CC701BC8E9C1(iLocal_58, 1, true);
			unk_0xD8C1C38EE8BC2AC6(iLocal_58, iLocal_57, 15f, 786599);
			unk_0xCBA6B2B569DCAFD8(iLocal_58, true);
			unk_0x4E65320BC9AD521C(iLocal_58, false);
			unk_0x2481907DEE6B85EA(&iLocal_58);
			unk_0xE730EAF558C97567(&iLocal_57);
		}
	}
	if (func_15(iLocal_61))
	{
		unk_0xE730EAF558C97567(&iLocal_61);
	}
	switch (Local_43)
	{
		case 5:
			func_219(82, 0, 0);
			unk_0xBE20AB8238688965(&(Global_111858.f_24972.f_2), 0);
			break;
		
		case 6:
			func_219(83, 0, 0);
			unk_0xBE20AB8238688965(&(Global_111858.f_24972.f_2), 1);
			break;
		
		case 7:
			func_219(84, 0, 0);
			unk_0xBE20AB8238688965(&(Global_111858.f_24972.f_2), 2);
			break;
		
		case 8:
			func_219(85, 0, 0);
			unk_0xBE20AB8238688965(&(Global_111858.f_24972.f_2), 3);
			break;
		
		case 0:
			func_219(86, 0, 0);
			unk_0xBE20AB8238688965(&(Global_111858.f_24975.f_3), 0);
			break;
		
		case 1:
			func_219(87, 0, 0);
			unk_0xBE20AB8238688965(&(Global_111858.f_24975.f_3), 1);
			break;
		
		case 2:
			func_219(88, 0, 0);
			unk_0xBE20AB8238688965(&(Global_111858.f_24975.f_3), 2);
			break;
		
		case 3:
			func_219(89, 0, 0);
			unk_0xBE20AB8238688965(&(Global_111858.f_24975.f_3), 3);
			break;
		
		case 4:
			func_219(90, 0, 0);
			unk_0xBE20AB8238688965(&(Global_111858.f_24975.f_3), 4);
			break;
	}
	if (iLocal_45)
	{
		unk_0xD289B55B6AADBA10(1);
	}
	unk_0xC99DBD7FEDFA1D90(unk_0xA15491F33A2A9467(10), 0);
	if (iLocal_54)
	{
		unk_0x96F763331D19ED14(1);
	}
	if (iLocal_76 && !bParam0)
	{
		iVar1 = unk_0x2639A2323BEA8CC6();
		if (unk_0x5A228A6A51E757C8(iVar1))
		{
			if (!unk_0x4DC4117F94CD5B84(iVar1))
			{
				unk_0xDDEDC06C88DA4E04(iVar1, true, 0);
			}
		}
	}
	if (!bParam0)
	{
		func_207(0);
	}
	if (iLocal_47)
	{
		unk_0xDC1D6FC16DAFCB1B(Local_83, Local_84, 1);
		unk_0x6F9222C1283B5094(Local_85, Local_86, fLocal_87, 1);
		iLocal_47 = 0;
	}
	unk_0x1572226BDDE6B540("WORLD_VEHICLE_PARK_PERPENDICULAR_NOSE_IN", 1);
	unk_0x1572226BDDE6B540("WORLD_VEHICLE_PARK_PARALLEL", 1);
	if (Local_43 == 1)
	{
		unk_0x1E337EE68290597A(iLocal_89, 0);
	}
	if (Local_43.f_1 == 1 || Local_43.f_1 == 2)
	{
		unk_0x1E337EE68290597A(iLocal_88, 0);
	}
	else
	{
		unk_0x694113444F21E39F(unk_0x9B0761B4C3EB8BC7(), 170, false);
	}
	func_217(&uLocal_90, 0);
	unk_0xD39E529EBE5DB04F();
}

void func_217(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_208(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_218(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_218(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_219(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (!bParam2)
	{
		bVar1 = unk_0xCE990E643CD9D0E5(Global_31346[iVar0 /*23*/].f_11, 15);
		if (bVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != unk_0xCE990E643CD9D0E5(Global_31346[iVar0 /*23*/].f_11, 0))
	{
		unk_0xBE20AB8238688965(&(Global_31346[iVar0 /*23*/].f_11), 18);
		if (Global_31343 == 1)
		{
			Global_31344 = 1;
		}
		Global_31343 = 1;
	}
	if (bParam1)
	{
		unk_0xBE20AB8238688965(&(Global_31346[iVar0 /*23*/].f_11), 0);
		unk_0xBE20AB8238688965(&(Global_31346[iVar0 /*23*/].f_11), 15);
		unk_0xBE20AB8238688965(&(Global_31346[iVar0 /*23*/].f_11), 3);
	}
	else
	{
		unk_0xD2459066EA58CE43(&(Global_31346[iVar0 /*23*/].f_11), 0);
		unk_0xD2459066EA58CE43(&(Global_31346[iVar0 /*23*/].f_11), 15);
	}
	if (!unk_0xCE990E643CD9D0E5(Global_31346[iVar0 /*23*/].f_11, 0))
	{
		if (unk_0x8F678487EEBD8CE4(Global_31346[iVar0 /*23*/].f_19))
		{
			unk_0x73CC8164D4BBE5DA(1);
			unk_0x93370FA10F15BE44(&(Global_31346[iVar0 /*23*/].f_19));
			unk_0x73CC8164D4BBE5DA(0);
		}
	}
}

