//Men
    class gm_dk_army_crew_84_oli_win: gm_dk_army_rifleman_84_win_base
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
        faction="gm_fc_dk_winter";
        editorSubcategory="gm_esc_men_80_winter";
		editorPreview="\gm\gm_characters\gm_dk_characters\data\ui\editor\gm_dk_army_crew_84_oli.jpg";
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

//APCs
    class gm_dk_army_m113a1dk_apc_win: gm_dk_army_m113a1dk_apc_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_winter";
		crew="gm_dk_army_crew_84_oli_win";
	};
    class gm_dk_army_m113a1dk_command_win: gm_dk_army_m113a1dk_command_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_winter";
		crew="gm_dk_army_crew_84_oli_win";
	};
    class gm_dk_army_m113a1dk_engineer_win: gm_dk_army_m113a1dk_engineer_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_winter";
		crew="gm_dk_army_crew_84_oli_win";
	};
    class gm_dk_army_m113a1dk_medic_win_rc: gm_dk_army_m113a1dk_medic_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_winter";
		crew="gm_dk_army_crew_84_oli_win";
	};
    class gm_dk_army_m113a2dk_win: gm_dk_army_m113a2dk_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_winter";
		crew="gm_dk_army_crew_84_oli_win";
	};

//Artillery
    class gm_dk_army_m109_win: gm_dk_army_m109_base
	{
		scope=2;
		scopeCurator=2;
	    faction="gm_fc_dk_winter";
		crew="gm_dk_army_crew_84_oli_win";
	};

//Cars
    class gm_dk_army_typ1200_cargo_win: gm_dk_army_typ1200_cargo_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_winter";
		crew="gm_dk_army_rifleman_g3a3_84_win";
	};
    class gm_dk_army_typ247_cargo_win: gm_dk_army_typ247_cargo_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_winter";
		crew="gm_dk_army_rifleman_g3a3_84_win";
	};
    class gm_dk_army_typ253_cargo_win: gm_dk_army_typ253_cargo_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_winter";
		crew="gm_dk_army_rifleman_g3a3_84_win";
	};
    class gm_dk_army_typ253_mp_win: gm_dk_army_typ253_mp_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_winter";
		crew="gm_dk_army_rifleman_g3a3_84_win";
	};
    class gm_dk_army_u1300l_container_win: gm_dk_army_u1300l_container_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_winter";
		crew="gm_dk_army_rifleman_g3a3_84_win";
	};

//Tanks
    class gm_dk_army_bpz2a0_win: gm_dk_army_bpz2a0_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_winter";
		crew="gm_dk_army_crew_84_oli_win";
	};
    class gm_dk_army_bibera0_win: gm_dk_army_bibera0_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_winter";
		crew="gm_dk_army_crew_84_oli_win";
	};
    class gm_dk_army_Leopard1a3_win: gm_dk_army_Leopard1a3_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_winter";
		crew="gm_dk_army_crew_84_oli_win";
	};
	class gm_dk_army_leopard1a5dk1_win: gm_dk_army_Leopard1a5dk1_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_winter";
		crew="gm_dk_army_crew_84_oli_win";
	};
	class gm_dk_army_leopard1a5dk1_dozer_win: gm_dk_army_Leopard1a5dk1_dozer_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_winter";
		crew="gm_dk_army_crew_84_oli_win";
	};

//Tanks BlackWinter
	class gm_dk_army_leopard1a3_blw: gm_dk_army_Leopard1a3_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_dk_winter";
		crew="gm_dk_army_crew_84_oli_win";
	};

//Turrets
    class gm_dk_army_mg3_aatripod_win: gm_dk_army_mg3_aatripod_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_dk_winter";
		crew="gm_dk_army_rifleman_g3a3_84_win";
	};