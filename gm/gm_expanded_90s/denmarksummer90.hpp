//Men
    class gm_dk_army_crew_90_m84: gm_dk_army_rifleman_84_oli_base
	{
		scope=2;
		scopeCurator=2;
		isgmContent=1;
		dlc="gm";
		author="$STR_DN_GM";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_infantry_s"
				};
				speechPlural[]=
				{
					"veh_infantry_p"
				};
			};
		};
		displayName="$STR_DN_GM_MAN_CREW_BASE";
		textSingular="$STR_A3_nameSound_veh_infantry_s";
		textPlural="$STR_A3_nameSound_veh_infantry_p";
		nameSound="veh_infantry_s";
		Icon="iconMan";
		role="Crewman";
		engineer=1;
		cost=80000;
        faction="gm_fc_dk_90";
		editorSubcategory="gm_esc_men_90";
		editorPreview="\gm\gm_characters\gm_dk_characters\data\ui\editor\gm_dk_army_crew_84_oli.jpg";
		uniformClass="gm_dk_army_uniform_soldier_84_m84";
		weapons[]=
		{
			"Throw",
			"Put",
			"gm_gvm75carb_oli",
			"gm_ferod16_grn"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"gm_gvm75carb_oli",
			"gm_ferod16_grn"
		};
		magazines[]=
		{
			"gm_20Rnd_762x51mm_b_DM41_g3_blk",
			"gm_20Rnd_762x51mm_b_DM41_g3_blk",
			"gm_20Rnd_762x51mm_b_DM41_g3_blk",
			"gm_20Rnd_762x51mm_b_DM41_g3_blk",
			"gm_20Rnd_762x51mm_b_DM41_g3_blk",
			"gm_20Rnd_762x51mm_b_DM41_g3_blk",
			"gm_handGrenade_frag_dm51",
			"gm_handGrenade_frag_dm51"
		};
		respawnMagazines[]=
		{
			"gm_20Rnd_762x51mm_b_DM41_g3_blk",
			"gm_20Rnd_762x51mm_b_DM41_g3_blk",
			"gm_20Rnd_762x51mm_b_DM41_g3_blk",
			"gm_20Rnd_762x51mm_b_DM41_g3_blk",
			"gm_20Rnd_762x51mm_b_DM41_g3_blk",
			"gm_20Rnd_762x51mm_b_DM41_g3_blk",
			"gm_handGrenade_frag_dm51",
			"gm_handGrenade_frag_dm51"
		};
		linkedItems[]=
		{
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"itemMap",
			"gm_ge_headgear_headset_crew_oli",
			"gm_dk_army_vest_54_crew"
		};
		respawnLinkedItems[]=
		{
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"itemMap",
			"gm_ge_headgear_headset_crew_oli",
			"gm_dk_army_vest_54_crew"
		};
	};

//Anti-Air
    class gm_dk_army_m113a1dk_apc_90: gm_dk_army_m113a1dk_apc_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_90";
        crew="gm_dk_army_crew_90_m84";
	};
    class gm_dk_army_m113a1dk_command_90: gm_dk_army_m113a1dk_command_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_90";
        crew="gm_dk_army_crew_90_m84";
	};
    class gm_dk_army_m113a1dk_engineer_90: gm_dk_army_m113a1dk_engineer_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_90";
        crew="gm_dk_army_crew_90_m84";
	};
    class gm_dk_army_m113a1dk_medic_90: gm_dk_army_m113a1dk_medic_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_90";
        crew="gm_dk_army_crew_90_m84";
	};
    class gm_dk_army_m113a2dk_90: gm_dk_army_m113a2dk_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_90";
        crew="gm_dk_army_crew_90_m84";
	};

//Artillery
    class gm_dk_army_m109_90: gm_dk_army_m109_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_90";
        crew="gm_dk_army_crew_90_m84";
	};

//Cars
    class gm_dk_army_typ1200_cargo_90: gm_dk_army_typ1200_cargo_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_90";
        crew="gm_dk_army_rifleman_gvm95_90_m84";
	};
    class gm_dk_army_typ247_cargo_90: gm_dk_army_typ247_cargo_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_90";
        crew="gm_dk_army_rifleman_gvm95_90_m84";
	};
    class gm_dk_army_typ253_cargo_90: gm_dk_army_typ253_cargo_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_90";
        crew="gm_dk_army_rifleman_gvm95_90_m84";
	};
    class gm_dk_army_typ253_mp_90: gm_dk_army_typ253_mp_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_90";
        crew="gm_dk_army_rifleman_gvm95_90_m84";
	};
    class gm_dk_army_u1300l_container_90: gm_dk_army_u1300l_container_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_90";
        crew="gm_dk_army_rifleman_gvm95_90_m84";
	};

//Tanks
    class gm_dk_army_bpz2a0_90: gm_dk_army_bpz2a0_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_90";
        crew="gm_dk_army_crew_90_m84";
	};
    class gm_dk_army_bibera0_90: gm_dk_army_bibera0_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_90";
        crew="gm_dk_army_crew_90_m84";
	};
    class gm_dk_army_Leopard1a3_90: gm_dk_army_Leopard1a3_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_90";
        crew="gm_dk_army_crew_90_m84";
	};

//Turrets
    class gm_dk_army_mg3_aatripod_90: gm_dk_army_mg3_aatripod_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_90";
        crew="gm_dk_army_rifleman_gvm95_90_m84";
	};