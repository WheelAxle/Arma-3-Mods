	class I_Soldier_base_F;
	class I_Soldier_02_F;
	class I_Soldier_A_F: I_Soldier_02_F
	{
		backpack="I_Fieldpack_oli_Ammo";
	};
	class I_Soldier_AR_F: I_Soldier_02_F
	{
		weapons[]=
		{
			"LMG_03_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"LMG_03_F",
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_Tracer_F",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_F",
			"200Rnd_556x45_Box_Tracer_F",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"9Rnd_45ACP_Mag",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
	};
	class I_Soldier_support_base_F;
	class I_Soldier_AAR_F: I_Soldier_support_base_F
	{
		backpack="B_TacticalPack_oli_249_AAR";
	};