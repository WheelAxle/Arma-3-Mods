//Men
    class gm_ge_army_crew_mp2a1_parka_80_oli_win: gm_ge_army_crew_mp2a1_80_base
	{
		scope=2;
		scopeCurator=2;
		isgmContent=1;
		dlc="gm";
		author="$STR_DN_GM";
        faction="gm_fc_ge_winter";
        editorSubcategory="gm_esc_men_80_winter";
		editorPreview="\gm\gm_characters\gm_ge_characters\data\ui\editor\gm_ge_army_crew_mp2a1_80_oli.jpg";
		uniformClass="gm_ge_army_uniform_soldier_parka_80_win";
		linkedItems[]=
		{
			"gm_ge_army_conat2",
			"ItemRadio",
			"ItemMap",
			"ItemWatch",
			"gm_ge_headgear_crewhat_80_blk",
			"gm_ge_army_vest_80_crew"
		};
		respawnLinkedItems[]=
		{
			"gm_ge_army_conat2",
			"ItemRadio",
			"ItemMap",
			"ItemWatch",
			"gm_ge_headgear_crewhat_80_blk",
			"gm_ge_army_vest_80_crew"
		};
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_characters\gm_ge_characters\data\uniform\gm_ge_army_uniform_crew_80_oli_co"
		};
	};
    class gm_ge_army_pilot_p1_parka_80_oli_win: gm_ge_army_pilot_p1_80_base
	{
		scope=2;
		scopeCurator=2;
		isgmContent=1;
		dlc="gm";
		author="$STR_DN_GM";
        faction="gm_fc_ge_winter";
        editorSubcategory="gm_esc_men_80_winter";
		editorPreview="\gm\gm_characters\gm_ge_characters\data\ui\editor\gm_ge_army_pilot_p1_80_oli.jpg";
		serviceBranch="ge_armyaviation";
		uniformClass="gm_ge_army_uniform_soldier_parka_80_win";
		linkedItems[]=
		{
			"gm_ge_army_conat2",
			"ItemRadio",
			"ItemMap",
			"ItemWatch",
			"gm_ge_headgear_sph4_oli",
			"gm_ge_army_vest_pilot_oli"
		};
		respawnLinkedItems[]=
		{
			"gm_ge_army_conat2",
			"ItemRadio",
			"ItemMap",
			"ItemWatch",
			"gm_ge_headgear_sph4_oli",
			"gm_ge_army_vest_pilot_oli"
		};
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_characters\gm_ge_characters\data\uniform\gm_ge_army_uniform_pilot_oli_co"
		};
	};

//Anti-Air
    class gm_ge_army_gepard1a1_win: gm_ge_army_gepard1a1_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};

//Anti-Air OliveWinter
	class gm_ge_army_gepard1a1_olw: gm_ge_army_gepard1a1_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};

//Anti-Air WinterWrong
	class gm_ge_army_gepard1a1_wiw: gm_ge_army_gepard1a1_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};

//APCs
    class gm_ge_army_m113a1g_apc_win: gm_ge_army_m113a1g_apc_base
	{
		scope=2;
		scopeCurator=2;
        faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_m113a1g_apc_milan_win: gm_ge_army_m113a1g_apc_milan_base
	{
		scope=2;
		scopeCurator=2;
        faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_m113a1g_command_win: gm_ge_army_m113a1g_command_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_m113a1g_medic_win_rc: gm_ge_army_m113a1g_medic_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_luchsa1_win: gm_ge_army_luchsa1_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_luchsa2_win: gm_ge_army_luchsa2_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_marder1a1plus_win: gm_ge_army_marder1a1plus_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_marder1a1a_win: gm_ge_army_marder1a1a_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_marder1a2_win: gm_ge_army_marder1a2_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_fuchsa0_command_win: gm_ge_army_fuchsa0_command_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_fuchsa0_engineer_win: gm_ge_army_fuchsa0_engineer_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_fuchsa0_medic_win_rc: gm_ge_army_fuchsa0_medic_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_fuchsa0_reconnaissance_win: gm_ge_army_fuchsa0_reconnaissance_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_fuchsa1_jammer_win: gm_ge_army_fuchsa1_jammer_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};

//APCs OliveWinter
    class gm_ge_army_m113a1g_apc_olw: gm_ge_army_m113a1g_apc_base
	{
		scope=1;
		scopeCurator=2;
        faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_m113a1g_apc_milan_olw: gm_ge_army_m113a1g_apc_milan_base
	{
		scope=1;
		scopeCurator=2;
        faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_m113a1g_command_olw: gm_ge_army_m113a1g_command_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_m113a1g_medic_olw_rc: gm_ge_army_m113a1g_medic_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_luchsa1_olw: gm_ge_army_luchsa1_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_luchsa2_olw: gm_ge_army_luchsa2_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_marder1a1plus_olw: gm_ge_army_marder1a1plus_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_marder1a1a_olw: gm_ge_army_marder1a1a_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_marder1a2_olw: gm_ge_army_marder1a2_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_fuchsa0_command_olw: gm_ge_army_fuchsa0_command_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_fuchsa0_engineer_olw: gm_ge_army_fuchsa0_engineer_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_fuchsa0_medic_olw_rc: gm_ge_army_fuchsa0_medic_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_fuchsa0_reconnaissance_olw: gm_ge_army_fuchsa0_reconnaissance_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_fuchsa1_jammer_olw: gm_ge_army_fuchsa1_jammer_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};

//APCs WrongWinter
    class gm_ge_army_m113a1g_apc_wiw: gm_ge_army_m113a1g_apc_base
	{
		scope=1;
		scopeCurator=2;
        faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_m113a1g_apc_milan_wiw: gm_ge_army_m113a1g_apc_milan_base
	{
		scope=1;
		scopeCurator=2;
        faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_m113a1g_command_wiw: gm_ge_army_m113a1g_command_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_m113a1g_medic_wiw_rc: gm_ge_army_m113a1g_medic_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_luchsa1_wiw: gm_ge_army_luchsa1_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_luchsa2_wiw: gm_ge_army_luchsa2_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_marder1a1plus_wiw: gm_ge_army_marder1a1plus_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_marder1a1a_wiw: gm_ge_army_marder1a1a_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_marder1a2_wiw: gm_ge_army_marder1a2_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_fuchsa0_command_wiw: gm_ge_army_fuchsa0_command_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_fuchsa0_engineer_wiw: gm_ge_army_fuchsa0_engineer_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_fuchsa0_medic_wiw_rc: gm_ge_army_fuchsa0_medic_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_fuchsa0_reconnaissance_wiw: gm_ge_army_fuchsa0_reconnaissance_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_fuchsa1_jammer_wiw: gm_ge_army_fuchsa1_jammer_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};

//Artillery
    class gm_ge_army_kat1_463_mlrs_win: gm_ge_army_kat1_463_mlrs_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_m109g_win: gm_ge_army_m109g_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_m113a1g_mortar_win: gm_ge_army_m113a1g_mortar_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};

//Artillery OliveWinter
	class gm_ge_army_kat1_463_mlrs_olw: gm_ge_army_kat1_463_mlrs_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_m109g_olw: gm_ge_army_m109g_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_m113a1g_mortar_olw: gm_ge_army_m113a1g_mortar_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};

//Artillery WinterWrong
	class gm_ge_army_kat1_463_mlrs_wiw: gm_ge_army_kat1_463_mlrs_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_m109g_wiw: gm_ge_army_m109g_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_m113a1g_mortar_wiw: gm_ge_army_m113a1g_mortar_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};

//Cars
    class gm_ge_army_u1300l_firefighter_win: gm_ge_army_u1300l_firefighter_base
	{
		scope=2;
		scopeCurator=2;
        faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_typ247_firefighter_win: gm_ge_army_typ247_firefighter_base
	{
		scope=2;
		scopeCurator=2;
        faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_k125_win: gm_ge_army_k125_base
	{
		scope=2;
		scopeCurator=2;
		editorSubcategory="gm_esc_car_win";
        faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_typ1200_cargo_win: gm_ge_army_typ1200_cargo_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_typ1200_cargo_win_rc: gm_ge_army_typ1200_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_typ247_cargo_win: gm_ge_army_typ247_cargo_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_typ253_cargo_win: gm_ge_army_typ253_cargo_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_typ253_cargo_win_rc: gm_ge_army_typ253_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_typ253_mp_win: gm_ge_army_typ253_mp_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_militarypolice_p1_parka_80_ols";
	};
    class gm_ge_army_w123_cargo_win: gm_ge_army_w123_cargo_base
	{
		scope=2;
		scopeCurator=2;
		editorSubcategory="gm_esc_car_win";
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_iltis_cargo_win: gm_ge_army_iltis_cargo_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_iltis_cargo_win_rc: gm_ge_army_iltis_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_iltis_milan_win: gm_ge_army_iltis_milan_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_iltis_mg3_win: gm_ge_army_iltis_mg3_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_kat1_454_reammo_win: gm_ge_army_kat1_454_reammo_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_kat1_454_cargo_win: gm_ge_army_kat1_454_cargo_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_u1300l_container_win: gm_ge_army_u1300l_container_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_u1300l_medic_win_rc: gm_ge_army_u1300l_medic_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_u1300l_repair_win: gm_ge_army_u1300l_repair_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_u1300l_cargo_win: gm_ge_army_u1300l_cargo_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_kat1_451_reammo_win: gm_ge_army_kat1_451_reammo_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_kat1_451_container_win: gm_ge_army_kat1_451_container_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_kat1_451_container_win_rc: gm_ge_army_kat1_451_container_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_451_refuel_win: gm_ge_army_kat1_451_refuel_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_kat1_451_cargo_win: gm_ge_army_kat1_451_cargo_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_kat1_451_cargo_win_rc: gm_ge_army_kat1_451_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_452_container_win: gm_ge_army_kat1_452_container_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_452_container_win_rc: gm_ge_army_kat1_452_container_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};

//Cars OliveWinter
	class gm_ge_army_u1300l_firefighter_olw: gm_ge_army_u1300l_firefighter_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_typ247_firefighter_olw: gm_ge_army_typ247_firefighter_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_typ1200_cargo_olw: gm_ge_army_typ1200_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_typ1200_cargo_olw_rc: gm_ge_army_typ1200_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_typ247_cargo_olw: gm_ge_army_typ247_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_typ253_cargo_olw: gm_ge_army_typ253_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_typ253_cargo_olw_rc: gm_ge_army_typ253_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_iltis_cargo_olw: gm_ge_army_iltis_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_iltis_cargo_olw_rc: gm_ge_army_iltis_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_iltis_milan_olw: gm_ge_army_iltis_milan_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_iltis_mg3_olw: gm_ge_army_iltis_mg3_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_454_reammo_olw: gm_ge_army_kat1_454_reammo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_454_cargo_olw: gm_ge_army_kat1_454_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_u1300l_container_olw: gm_ge_army_u1300l_container_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_u1300l_medic_olw_rc: gm_ge_army_u1300l_medic_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_u1300l_repair_olw: gm_ge_army_u1300l_repair_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_u1300l_cargo_olw: gm_ge_army_u1300l_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_451_reammo_olw: gm_ge_army_kat1_451_reammo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_451_container_olw: gm_ge_army_kat1_451_container_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_451_container_olw_rc: gm_ge_army_kat1_451_container_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_451_refuel_olw: gm_ge_army_kat1_451_refuel_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_451_cargo_olw: gm_ge_army_kat1_451_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_451_cargo_olw_rc: gm_ge_army_kat1_451_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_452_container_olw: gm_ge_army_kat1_452_container_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_452_container_olw_rc: gm_ge_army_kat1_452_container_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};

//Cars WinterWrong
	class gm_ge_army_u1300l_firefighter_wiw: gm_ge_army_u1300l_firefighter_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_typ247_firefighter_wiw: gm_ge_army_typ247_firefighter_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_typ1200_cargo_wiw: gm_ge_army_typ1200_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_typ1200_cargo_wiw_rc: gm_ge_army_typ1200_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_typ247_cargo_wiw: gm_ge_army_typ247_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_typ253_cargo_wiw: gm_ge_army_typ253_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_typ253_cargo_wiw_rc: gm_ge_army_typ253_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_iltis_cargo_wiw: gm_ge_army_iltis_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_iltis_cargo_wiw_rc: gm_ge_army_iltis_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_iltis_milan_wiw: gm_ge_army_iltis_milan_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_iltis_mg3_wiw: gm_ge_army_iltis_mg3_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_454_reammo_wiw: gm_ge_army_kat1_454_reammo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_454_cargo_wiw: gm_ge_army_kat1_454_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_u1300l_container_wiw: gm_ge_army_u1300l_container_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_u1300l_medic_wiw_rc: gm_ge_army_u1300l_medic_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_u1300l_repair_wiw: gm_ge_army_u1300l_repair_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_u1300l_cargo_wiw: gm_ge_army_u1300l_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_451_reammo_wiw: gm_ge_army_kat1_451_reammo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_451_container_wiw: gm_ge_army_kat1_451_container_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_451_container_wiw_rc: gm_ge_army_kat1_451_container_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_451_refuel_wiw: gm_ge_army_kat1_451_refuel_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_451_cargo_wiw: gm_ge_army_kat1_451_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_451_cargo_wiw_rc: gm_ge_army_kat1_451_cargo_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_452_container_wiw: gm_ge_army_kat1_452_container_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
	class gm_ge_army_kat1_452_container_wiw_rc: gm_ge_army_kat1_452_container_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};

//Helicopters
    class gm_ge_army_ch53g_win: gm_ge_army_ch53g_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_pilot_p1_parka_80_oli_win";
	};
	class gm_ge_army_ch53gs_win: gm_ge_army_ch53gs_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_pilot_p1_parka_80_oli_win";
	};
    class gm_ge_army_bo105p_pah1_win: gm_ge_army_bo105p_pah1_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_pilot_p1_parka_80_oli_win";
	};
    class gm_ge_army_bo105p_pah1a1_win: gm_ge_army_bo105p_pah1a1_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_pilot_p1_parka_80_oli_win";
	};
    class gm_ge_army_bo105m_vbh_win: gm_ge_army_bo105m_vbh_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_pilot_p1_parka_80_oli_win";
	};
    class gm_ge_army_bo105p1m_vbh_win: gm_ge_army_bo105p1m_vbh_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_pilot_p1_parka_80_oli_win";
	};
    class gm_ge_army_bo105p1m_vbh_swooper_win: gm_ge_army_bo105p1m_vbh_swooper_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_pilot_p1_parka_80_oli_win";
	};

//Planes
    class gm_ge_airforce_do28d2_win: gm_ge_airforce_do28d2_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_pilot_p1_parka_80_oli_win";
	};
    class gm_ge_airforce_do28d2_medevac_win: gm_ge_airforce_do28d2_medevac_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_pilot_p1_parka_80_oli_win";
	};

//Tanks
    class gm_ge_army_bpz2a0_win: gm_ge_army_bpz2a0_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_bibera0_win: gm_ge_army_bibera0_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_Leopard1a1_win: gm_ge_army_Leopard1a1_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_Leopard1a1a1_win: gm_ge_army_Leopard1a1a1_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_Leopard1a1a2_win: gm_ge_army_Leopard1a1a2_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_leopard1a1a3_win: gm_ge_army_Leopard1a1a3_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a1a4_win: gm_ge_army_Leopard1a1a4_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_Leopard1a3_win: gm_ge_army_Leopard1a3_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_Leopard1a3a1_win: gm_ge_army_Leopard1a3a1_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
    class gm_ge_army_leopard1a3a2_win: gm_ge_army_Leopard1a3a2_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a3a3_win: gm_ge_army_Leopard1a3a3_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a4_win: gm_ge_army_Leopard1a4_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_Leopard1a5_win: gm_ge_army_Leopard1a5_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a5a1_win: gm_ge_army_Leopard1a5a1_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_rakjpz2_win: gm_ge_army_rakjpz2_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};

//Tanks OliveWinter
	class gm_ge_army_bpz2a0_olw: gm_ge_army_bpz2a0_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_bibera0_olw: gm_ge_army_bibera0_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a1_olw: gm_ge_army_Leopard1a1_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a1a1_olw: gm_ge_army_Leopard1a1a1_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a1a2_olw: gm_ge_army_Leopard1a1a2_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a1a3_olw: gm_ge_army_Leopard1a1a3_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a1a4_olw: gm_ge_army_Leopard1a1a4_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a3_olw: gm_ge_army_Leopard1a3_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a3a1_olw: gm_ge_army_Leopard1a3a1_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a3a2_olw: gm_ge_army_Leopard1a3a2_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a3a3_olw: gm_ge_army_Leopard1a3a3_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a4_olw: gm_ge_army_Leopard1a4_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a5_olw: gm_ge_army_Leopard1a5_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a5a1_olw: gm_ge_army_Leopard1a5a1_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_rakjpz2_olw: gm_ge_army_rakjpz2_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};

//Tanks WinterWrong
	class gm_ge_army_bpz2a0_wiw: gm_ge_army_bpz2a0_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_bibera0_wiw: gm_ge_army_bibera0_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a1_wiw: gm_ge_army_Leopard1a1_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a1a1_wiw: gm_ge_army_Leopard1a1a1_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a1a2_wiw: gm_ge_army_Leopard1a1a2_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a1a3_wiw: gm_ge_army_Leopard1a1a3_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a1a4_wiw: gm_ge_army_Leopard1a1a4_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a3_wiw: gm_ge_army_Leopard1a3_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a3a1_wiw: gm_ge_army_Leopard1a3a1_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a3a2_wiw: gm_ge_army_Leopard1a3a2_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a3a3_wiw: gm_ge_army_Leopard1a3a3_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a4_wiw: gm_ge_army_Leopard1a4_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a5_wiw: gm_ge_army_Leopard1a5_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_leopard1a5a1_wiw: gm_ge_army_Leopard1a5a1_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};
	class gm_ge_army_rakjpz2_wiw: gm_ge_army_rakjpz2_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_crew_mp2a1_parka_80_oli_win";
	};

//Turrets
    class gm_ge_army_milan_launcher_tripod_win: gm_ge_army_milan_launcher_tripod_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};
    class gm_ge_army_mg3_aatripod_win: gm_ge_army_mg3_aatripod_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_ge_winter";
		crew="gm_ge_army_rifleman_g3a3_parka_80_win";
	};