//Men
    class gm_pl_army_crew_pm63_80_autumn_moro: gm_pl_army_rifleman_80_autumn_moro_base
	{
		scope=2;
		scopeCurator=2;
		isgmContent=1;
		dlc="gm";
		author="$STR_DN_GM";
        faction="gm_fc_pl_autumn";
        editorSubcategory="gm_esc_men_80_autumn";
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
		editorPreview="\gm\gm_characters\gm_pl_characters\data\ui\editor\gm_pl_army_crew_pm63_80_moro.jpg";
		weapons[]=
		{
			"Throw",
			"Put",
			"gm_pm63_handgun_blk",
			"gm_df7x40_blk"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"gm_pm63_handgun_blk",
			"gm_df7x40_blk"
		};
		magazines[]=
		{
			"gm_15Rnd_9x18mm_b_pst_pm63_blk",
			"gm_15Rnd_9x18mm_b_pst_pm63_blk",
			"gm_15Rnd_9x18mm_b_pst_pm63_blk",
			"gm_15Rnd_9x18mm_b_pst_pm63_blk",
			"gm_15Rnd_9x18mm_b_pst_pm63_blk",
			"gm_15Rnd_9x18mm_b_pst_pm63_blk",
			"gm_handGrenade_frag_rgd5",
			"gm_handGrenade_frag_rgd5"
		};
		respawnMagazines[]=
		{
			"gm_15Rnd_9x18mm_b_pst_pm63_blk",
			"gm_15Rnd_9x18mm_b_pst_pm63_blk",
			"gm_15Rnd_9x18mm_b_pst_pm63_blk",
			"gm_15Rnd_9x18mm_b_pst_pm63_blk",
			"gm_15Rnd_9x18mm_b_pst_pm63_blk",
			"gm_15Rnd_9x18mm_b_pst_pm63_blk",
			"gm_handGrenade_frag_rgd5",
			"gm_handGrenade_frag_rgd5"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
			"itemMap",
			"gm_gc_army_headgear_crewhat_80_blk",
			"gm_pl_army_vest_80_crew_gry"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
			"itemMap",
			"gm_gc_army_headgear_crewhat_80_blk",
			"gm_pl_army_vest_80_crew_gry"
		};
	};
    class gm_pl_airforce_pilot_pm_80_autumn_gry: gm_pl_airforce_pilot_80_base
	{
		scope=2;
		scopeCurator=2;
		isgmContent=1;
		dlc="gm";
		author="$STR_DN_GM";
        faction="gm_fc_pl_autumn";
        editorSubcategory="gm_esc_men_80_autumn";
		uniformClass="gm_pl_airforce_uniform_pilot_80_gry";
		editorPreview="\gm\gm_characters\gm_pl_characters\data\ui\editor\gm_pl_airforce_pilot_pm_80_gry.jpg";
		Items[]=
		{
			"gm_gc_army_gauzeBandage",
			"gm_gc_army_medkit"
		};
		RespawnItems[]=
		{
			"gm_gc_army_gauzeBandage",
			"gm_gc_army_medkit"
		};
		weapons[]=
		{
			"Throw",
			"Put",
			"gm_pm_blk"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"gm_pm_blk"
		};
		magazines[]=
		{
			"gm_8rnd_9x18mm_b_pst_pm_blk",
			"gm_8rnd_9x18mm_b_pst_pm_blk"
		};
		respawnMagazines[]=
		{
			"gm_8rnd_9x18mm_b_pst_pm_blk",
			"gm_8rnd_9x18mm_b_pst_pm_blk"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
			"ItemMap",
			"ItemWatch",
			"gm_gc_headgear_zsh3_wht"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
			"ItemMap",
			"ItemWatch",
			"gm_gc_headgear_zsh3_wht"
		};
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_characters\gm_pl_characters\data\uniform\gm_pl_uniform_pilot_80_gry_co"
		};
	};
	class gm_pl_army_sf_antiair_pm63_9k32m_80_autumn_moro: gm_pl_army_sf_antiair_pm63_9k32m_80_moro
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		editorPreview="\gm\gm_characters\gm_pl_characters\data\ui\editor\gm_pl_army_sf_antiair_pm63_9k32m_80_moro.jpg";
	};
	class gm_pl_army_sf_antitank_akmn_rpg7_80_autumn_moro: gm_pl_army_sf_antitank_akmn_rpg7_80_moro
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		editorPreview="\gm\gm_characters\gm_pl_characters\data\ui\editor\gm_pl_army_sf_antitank_akmn_rpg7_80_moro.jpg";
	};
	class gm_pl_army_sf_antitank_akmn_fagot_80_autumn_moro: gm_pl_army_sf_antitank_akmn_fagot_80_moro
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		editorPreview="\gm\gm_characters\gm_pl_characters\data\ui\editor\gm_pl_army_sf_antitank_akmn_fagot_80_moro.jpg";
	};
	class gm_pl_army_sf_demolition_pm63_80_autumn_moro: gm_pl_army_sf_demolition_pm63_80_moro
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		uniformClass="gm_pl_army_uniform_soldier_80_frog";
		editorPreview="\gm\gm_characters\gm_pl_characters\data\ui\editor\gm_pl_army_sf_demolition_pm63_80_moro.jpg";
	};
	class gm_pl_army_sf_grenadier_akm_pallad_80_autumn_moro: gm_pl_army_sf_grenadier_akm_pallad_80_moro
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		editorPreview="\gm\gm_characters\gm_pl_characters\data\ui\editor\gm_pl_army_sf_grenadier_akm_pallad_80_moro.jpg";
	};
	class gm_pl_army_sf_machinegunner_rpk_80_autumn_moro: gm_pl_army_sf_machinegunner_rpk_80_moro
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		uniformClass="gm_pl_army_uniform_soldier_80_frog";
		editorPreview="\gm\gm_characters\gm_pl_characters\data\ui\editor\gm_pl_army_sf_machinegunner_rpk_80_moro.jpg";
	};
	class gm_pl_army_sf_marksman_svd_80_autumn_moro: gm_pl_army_sf_marksman_svd_80_moro
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		editorPreview="\gm\gm_characters\gm_pl_characters\data\ui\editor\gm_pl_army_sf_marksman_svd_80_moro.jpg";
	};
	class gm_pl_army_sf_engineer_pm63_80_autumn_moro: gm_pl_army_sf_engineer_pm63_80_moro
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		editorPreview="\gm\gm_characters\gm_pl_characters\data\ui\editor\gm_pl_army_sf_engineer_pm63_80_moro.jpg";
	};
	class gm_pl_army_sf_radioman_akmn_80_autumn_moro: gm_pl_army_sf_radioman_akmn_80_moro
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		editorPreview="\gm\gm_characters\gm_pl_characters\data\ui\editor\gm_pl_army_sf_rifleman_akmn_80_moro.jpg";
	};
	class gm_pl_army_sf_rifleman_akmn_80_autumn_moro: gm_pl_army_sf_rifleman_akmn_80_moro
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		editorPreview="\gm\gm_characters\gm_pl_characters\data\ui\editor\gm_pl_army_sf_rifleman_akmn_80_moro.jpg";
	};
	class gm_pl_army_sf_rifleman_pm63_80_autumn_moro: gm_pl_army_sf_rifleman_pm63_80_moro
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		uniformClass="gm_pl_army_uniform_soldier_80_frog";
		editorPreview="\gm\gm_characters\gm_pl_characters\data\ui\editor\gm_pl_army_sf_rifleman_pm63_80_moro.jpg";
	};
	class gm_pl_army_sf_squadleader_akmn_80_autumn_moro: gm_pl_army_sf_squadleader_akmn_80_moro
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		editorPreview="\gm\gm_characters\gm_pl_characters\data\ui\editor\gm_pl_army_sf_squadleader_akmn_80_moro.jpg";
	};

//Anti-Air
    class gm_pl_army_zsu234v1_atm: gm_pl_army_zsu234v1_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_crew_pm63_80_autumn_moro";
    };

//APCs
	class gm_pl_army_brdm2_9p133_atm: gm_pl_army_brdm2_9p133_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_crew_pm63_80_autumn_moro";
	};
    class gm_pl_army_brdm2_atm: gm_pl_army_brdm2_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_crew_pm63_80_autumn_moro";
    };
	class gm_pl_army_brdm2rkh_atm: gm_pl_army_brdm2rkh_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_crew_pm63_80_autumn_moro";
	};
	class gm_pl_army_bmp1sp2_atm: gm_pl_army_bmp1sp2_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_crew_pm63_80_autumn_moro";
    };
    class gm_pl_army_ot64a_atm: gm_pl_army_ot64a_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_crew_pm63_80_autumn_moro";
    };

//APCs OliveMud

//Artillery
    class gm_pl_army_2p16_atm: gm_pl_army_2p16_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_crew_pm63_80_autumn_moro";
    };
    class gm_pl_army_2s1_atm: gm_pl_army_2s1_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_crew_pm63_80_autumn_moro";
    };
    class gm_pl_army_ural375d_mlrs_atm: gm_pl_army_ural375d_mlrs_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_rifleman_akm_80_autumn_moro";
    };

//Cars
    class gm_pl_army_ural4320_reammo_atm: gm_pl_army_ural4320_reammo_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_rifleman_akm_80_autumn_moro";
    };
    class gm_pl_army_ural375d_refuel_atm: gm_pl_army_ural375d_refuel_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_rifleman_akm_80_autumn_moro";
    };
    class gm_pl_army_ural375d_medic_atm: gm_pl_army_ural375d_medic_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_rifleman_akm_80_autumn_moro";
    };
    class gm_pl_army_ural4320_repair_atm: gm_pl_army_ural4320_repair_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_rifleman_akm_80_autumn_moro";
    };
    class gm_pl_army_ural4320_cargo_atm: gm_pl_army_ural4320_cargo_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_rifleman_akm_80_autumn_moro";
    };
    class gm_pl_army_uaz469_cargo_atm: gm_pl_army_uaz469_cargo_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_rifleman_akm_80_autumn_moro";
    };
    class gm_pl_army_uaz469_dshkm_atm: gm_pl_army_uaz469_dshkm_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_rifleman_akm_80_autumn_moro";
    };

//Helicopters
    class gm_pl_airforce_mi2ch_atm: gm_pl_airforce_mi2ch
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_airforce_pilot_pm_80_autumn_gry";
    };
    class gm_pl_airforce_mi2p_atm: gm_pl_airforce_mi2p
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_airforce_pilot_pm_80_autumn_gry";
    };
    class gm_pl_airforce_mi2platan_atm: gm_pl_airforce_mi2platan
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_airforce_pilot_pm_80_autumn_gry";
    };
    class gm_pl_airforce_mi2sr_atm: gm_pl_airforce_mi2sr
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_airforce_pilot_pm_80_autumn_gry";
    };
    class gm_pl_airforce_mi2t_atm: gm_pl_airforce_mi2t
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_airforce_pilot_pm_80_autumn_gry";
    };
    class gm_pl_airforce_mi2urn_atm: gm_pl_airforce_mi2urn
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_airforce_pilot_pm_80_autumn_gry";
    };
    class gm_pl_airforce_mi2urp_atm: gm_pl_airforce_mi2urp
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_airforce_pilot_pm_80_autumn_gry";
    };
    class gm_pl_airforce_mi2urpg_atm: gm_pl_airforce_mi2urpg
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_airforce_pilot_pm_80_autumn_gry";
    };
    class gm_pl_airforce_mi2urs_atm: gm_pl_airforce_mi2urs
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_airforce_pilot_pm_80_autumn_gry";
    };
    class gm_pl_airforce_mi2us_atm: gm_pl_airforce_mi2us
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_airforce_pilot_pm_80_autumn_gry";
    };

//Tanks
    class gm_pl_army_pt76b_atm: gm_pl_army_pt76b_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_crew_pm63_80_autumn_moro";
    };
    class gm_pl_army_t55_atm: gm_pl_army_t55_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_crew_pm63_80_autumn_moro";
    };
    class gm_pl_army_t55a_atm: gm_pl_army_t55a_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_crew_pm63_80_autumn_moro";
    };
    class gm_pl_army_t55ak_atm: gm_pl_army_t55ak_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_crew_pm63_80_autumn_moro";
    };

//Turrets
	class gm_pl_army_2b11_atm: gm_pl_army_2b11_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_rifleman_akm_80_autumn_moro";
	};
    class gm_pl_army_dshkm_aatripod_atm: gm_pl_army_dshkm_aatripod_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_rifleman_akm_80_autumn_moro";
	};
    class gm_pl_army_fagot_launcher_tripod_atm: gm_pl_army_fagot_launcher_tripod_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_rifleman_akm_80_autumn_moro";
	};
    class gm_pl_army_spg9_tripod_atm: gm_pl_army_spg9_tripod_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_pl_autumn";
		crew="gm_pl_army_rifleman_akm_80_autumn_moro";
	};