#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_1();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iScriptParam_0, true);
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (ENTITY::DOES_ENTITY_EXIST(iScriptParam_0))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(iScriptParam_0))
			{
				switch (iLocal_2)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iScriptParam_0))
						{
							STREAMING::REQUEST_ANIM_DICT("map_objects");
							if (STREAMING::HAS_ANIM_DICT_LOADED("map_objects"))
							{
								ENTITY::PLAY_ENTITY_ANIM(iScriptParam_0, "airdancer_test", "map_objects", 1f, true, false, false, 0f, 0);
								iLocal_2 = 1;
							}
						}
						break;
					
					case 1:
						break;
					
					case 2:
						break;
				}
			}
			else
			{
				func_1();
			}
		}
		else
		{
			func_1();
		}
	}
}

void func_1()
{
	func_2("ob_airdancer Terminated >>>>>>>>>>>>>>>>>\n");
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_2(char* sParam0)
{
	func_3(sParam0);
}

void func_3(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

