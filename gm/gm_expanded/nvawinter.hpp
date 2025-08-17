//Men
    class gm_gc_army_crew_mpiaks74nk_80_blk_win: gm_gc_army_rifleman_80_blk
	{
		scope=2;
		scopeCurator=2;
		isgmContent=1;
		dlc="gm";
		author="$STR_DN_GM";
        faction="gm_fc_gc_winter";
        editorSubcategory="gm_esc_men_80_winter";
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
		weapons[]=
		{
			"Throw",
			"Put",
			"gm_mpiaks74nk_brn",
			"gm_df7x40_grn"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"gm_mpiaks74nk_brn",
			"gm_df7x40_grn"
		};
		magazines[]=
		{
			"gm_30Rnd_545x39mm_b_7N6_ak74_org",
			"gm_30Rnd_545x39mm_b_7N6_ak74_org"
		};
		respawnMagazines[]=
		{
			"gm_30Rnd_545x39mm_b_7N6_ak74_org",
			"gm_30Rnd_545x39mm_b_7N6_ak74_org"
		};
		linkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
			"itemMap",
			"ItemWatch",
			"gm_gc_army_vest_80_belt_str",
			"gm_gc_army_headgear_crewhat_80_blk"
		};
		respawnLinkedItems[]=
		{
			"gm_gc_compass_f73",
			"ItemRadio",
			"itemMap",
			"ItemWatch",
			"gm_gc_army_vest_80_belt_str",
			"gm_gc_army_headgear_crewhat_80_blk"
		};
		editorPreview="\gm\gm_characters\gm_gc_characters\data\ui\editor\gm_gc_army_crew_mpiaks74nk_80_blk.jpg";
	};
    class gm_gc_airforce_pilot_pm_80_blu_win: gm_gc_airforce_pilot_80_base
	{
		scope=2;
		scopeCurator=2;
		isgmContent=1;
		dlc="gm";
		author="$STR_DN_GM";
        faction="gm_fc_gc_winter";
        editorSubcategory="gm_esc_men_80_winter";
		uniformClass="gm_gc_airforce_uniform_pilot_80_blu";
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
			"gm_pim_blk"
		};
		respawnWeapons[]=
		{
			"Throw",
			"Put",
			"gm_pim_blk"
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
		editorPreview="\gm\gm_characters\gm_gc_characters\data\ui\editor\gm_gc_airforce_pilot_pm_80_blu.jpg";
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_characters\gm_gc_characters\data\uniform\gm_gc_uniform_pilot_80_blu_co"
		};
	};

//Anti-Air
	class gm_gc_army_zsu234v1_win: gm_gc_army_zsu234v1_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
	};

//Anti-Air OliveWinter
    class gm_gc_army_zsu234v1_olw: gm_gc_army_zsu234v1_base
	{
		scope=1;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
	};

//APCs
    class gm_gc_army_bmp1sp2_win: gm_gc_army_bmp1sp2_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
	class gm_gc_army_bmp1p_win: gm_gc_army_bmp1p_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
	};
	class gm_gc_army_brdm2_9p133_win: gm_gc_army_brdm2_9p133_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
	};
    class gm_gc_army_brdm2_win: gm_gc_army_brdm2_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_brdm2rkh_win: gm_gc_army_brdm2rkh_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_brdm2um_win: gm_gc_army_brdm2um_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_btr60pa_win: gm_gc_army_btr60pa_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_btr60pa_dshkm_win: gm_gc_army_btr60pa_dshkm_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_btr60pb_win: gm_gc_army_btr60pb_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_btr60pu12_win: gm_gc_army_btr60pu12_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };

//APCs OliveWinter
    class gm_gc_army_bmp1sp2_olw: gm_gc_army_bmp1sp2_base
	{
        scope=1;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
	class gm_gc_army_bmp1p_olw: gm_gc_army_bmp1p_base
	{
        scope=1;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
	};
	class gm_gc_army_brdm2_9p133_olw: gm_gc_army_brdm2_9p133_base
	{
        scope=1;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
	};
    class gm_gc_army_brdm2_olw: gm_gc_army_brdm2_base
	{
        scope=1;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_brdm2rkh_olw: gm_gc_army_brdm2rkh_base
	{
        scope=1;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_brdm2um_olw: gm_gc_army_brdm2um_base
	{
        scope=1;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_btr60pa_olw: gm_gc_army_btr60pa_base
	{
        scope=1;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_btr60pa_dshkm_olw: gm_gc_army_btr60pa_dshkm_base
	{
        scope=1;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_btr60pb_olw: gm_gc_army_btr60pb_base
	{
        scope=1;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_btr60pu12_olw: gm_gc_army_btr60pu12_base
	{
        scope=1;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };

//Artillery
    class gm_gc_army_ural375d_mlrs_win: gm_gc_army_ural375d_mlrs_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };
    class gm_gc_army_2s1_win: gm_gc_army_2s1_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_2p16_win: gm_gc_army_2p16_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };

//Artillery OliveWinter
    class gm_gc_army_ural375d_mlrs_olw: gm_gc_army_ural375d_mlrs_base
	{
        scope=1;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };
    class gm_gc_army_2s1_olw: gm_gc_army_2s1_base
	{
        scope=1;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_2p16_olw: gm_gc_army_2p16_base
	{
        scope=1;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };

//Cars
    class gm_gc_army_p601_win: gm_gc_army_p601_base
	{
		scope=2;
		scopeCurator=2;
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\data\gm_p601_wheel_01_co.paa",
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_togaweiss_co.paa",
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_togaweiss_co.paa",
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_togaweiss_co.paa",
			"\gm\gm_vehicles\gm_land\gm_wheeled\gm_p601\gm_gc_civ_p601\data\col\gm_gc_civ_p601_ext_01_togaweiss_co.paa"
		};
		gm_TacticalNumbersDefaultNumber="";
        faction="gm_fc_gc_winter";
        editorSubcategory="gm_esc_car_win";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
	};
    class gm_gc_army_uaz469_cargo_win: gm_gc_army_uaz469_cargo_base
	{
        scope=2;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };
    class gm_gc_army_uaz469_dshkm_win: gm_gc_army_uaz469_dshkm_base
	{
        scope=2;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };
    class gm_gc_army_uaz469_spg9_win: gm_gc_army_uaz469_spg9_base
	{
        scope=2;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };
    class gm_gc_army_ural4320_reammo_win: gm_gc_army_ural4320_reammo_base
	{
        scope=2;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };
    class gm_gc_army_ural375d_refuel_win: gm_gc_army_ural375d_refuel_base
	{
        scope=2;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };
    class gm_gc_army_ural375d_medic_win: gm_gc_army_ural375d_medic_base
	{
        scope=2;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };
    class gm_gc_army_ural375d_cargo_win: gm_gc_army_ural375d_cargo_base
	{
        scope=2;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };
    class gm_gc_army_ural4320_repair_win: gm_gc_army_ural4320_repair_base
	{
        scope=2;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };
    class gm_gc_army_ural44202_win: gm_gc_army_ural44202_base
	{
        scope=2;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };
    class gm_gc_army_ural4320_cargo_win: gm_gc_army_ural4320_cargo_base
	{
        scope=2;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };

//Cars OliveWinter
    class gm_gc_army_uaz469_cargo_olw: gm_gc_army_uaz469_cargo_base
	{
        scope=1;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };
    class gm_gc_army_uaz469_dshkm_olw: gm_gc_army_uaz469_dshkm_base
	{
        scope=1;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };
    class gm_gc_army_uaz469_spg9_olw: gm_gc_army_uaz469_spg9_base
	{
        scope=1;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };
    class gm_gc_army_ural4320_reammo_olw: gm_gc_army_ural4320_reammo_base
	{
        scope=1;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };
    class gm_gc_army_ural375d_refuel_olw: gm_gc_army_ural375d_refuel_base
	{
        scope=1;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };
    class gm_gc_army_ural375d_medic_olw: gm_gc_army_ural375d_medic_base
	{
        scope=1;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };
    class gm_gc_army_ural375d_cargo_olw: gm_gc_army_ural375d_cargo_base
	{
        scope=1;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };
    class gm_gc_army_ural4320_repair_olw: gm_gc_army_ural4320_repair_base
	{
        scope=1;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };
    class gm_gc_army_ural44202_olw: gm_gc_army_ural44202_base
	{
        scope=1;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };
    class gm_gc_army_ural4320_cargo_olw: gm_gc_army_ural4320_cargo_base
	{
        scope=1;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
    };

//Helicopters
    class gm_gc_airforce_mi2p_win: gm_gc_airforce_mi2p_base
	{
		scope=2;
		scopeCurator=2;
		author="$STR_DN_GM";
		hiddenSelectionsTextures[]=
		{
			"",
			"\gm\gm_vehicles\gm_air\gm_helicopters\gm_mi2\gm_gc_airforce_mi2\data\wdl\gm_gc_airforce_mi2_ext_01_wdl_co.paa",
			"\gm\gm_vehicles\gm_air\gm_helicopters\gm_mi2\gm_gc_airforce_mi2\data\wdl\gm_gc_airforce_mi2_ext_02_wdl_co.paa",
			"\gm\gm_vehicles\gm_air\gm_helicopters\gm_mi2\gm_gc_airforce_mi2\data\wdl\gm_gc_airforce_mi2_ext_03_wdl_co.paa"
		};
        faction="gm_fc_gc_winter";
		crew="gm_gc_airforce_pilot_pm_80_blu_win";
	};
    class gm_gc_airforce_mi2sr_win: gm_gc_airforce_mi2sr_base
	{
		scope=2;
		scopeCurator=2;
		author="$STR_DN_GM";
		hiddenSelectionsTextures[]=
		{
			"",
			"\gm\gm_vehicles\gm_air\gm_helicopters\gm_mi2\gm_gc_airforce_mi2\data\wdl\gm_gc_airforce_mi2sr_ext_01_wdl_co.paa",
			"\gm\gm_vehicles\gm_air\gm_helicopters\gm_mi2\gm_gc_airforce_mi2\data\wdl\gm_gc_airforce_mi2_ext_02_wdl_co.paa",
			"\gm\gm_vehicles\gm_air\gm_helicopters\gm_mi2\gm_gc_airforce_mi2\data\wdl\gm_gc_airforce_mi2_ext_03_wdl_co.paa"
		};
        faction="gm_fc_gc_winter";
		crew="gm_gc_airforce_pilot_pm_80_blu_win";
	};
    class gm_gc_airforce_mi2t_win: gm_gc_airforce_mi2t_base
	{
		scope=2;
		scopeCurator=2;
		author="$STR_DN_GM";
		hiddenSelectionsTextures[]=
		{
			"",
			"\gm\gm_vehicles\gm_air\gm_helicopters\gm_mi2\gm_gc_airforce_mi2\data\wdl\gm_gc_airforce_mi2_ext_01_wdl_co.paa",
			"\gm\gm_vehicles\gm_air\gm_helicopters\gm_mi2\gm_gc_airforce_mi2\data\wdl\gm_gc_airforce_mi2_ext_02_wdl_co.paa",
			"\gm\gm_vehicles\gm_air\gm_helicopters\gm_mi2\gm_gc_airforce_mi2\data\wdl\gm_gc_airforce_mi2_ext_03_wdl_co.paa"
		};
        faction="gm_fc_gc_winter";
		crew="gm_gc_airforce_pilot_pm_80_blu_win";
	};
    class gm_gc_airforce_mi2urn_win: gm_gc_airforce_mi2urn_base
	{
		scope=2;
		scopeCurator=2;
		author="$STR_DN_GM";
		hiddenSelectionsTextures[]=
		{
			"",
			"\gm\gm_vehicles\gm_air\gm_helicopters\gm_mi2\gm_gc_airforce_mi2\data\wdl\gm_gc_airforce_mi2_ext_01_wdl_co.paa",
			"\gm\gm_vehicles\gm_air\gm_helicopters\gm_mi2\gm_gc_airforce_mi2\data\wdl\gm_gc_airforce_mi2_ext_02_wdl_co.paa",
			"\gm\gm_vehicles\gm_air\gm_helicopters\gm_mi2\gm_gc_airforce_mi2\data\wdl\gm_gc_airforce_mi2_ext_03_wdl_co.paa"
		};
        faction="gm_fc_gc_winter";
		crew="gm_gc_airforce_pilot_pm_80_blu_win";
	};
    class gm_gc_airforce_mi2us_win: gm_gc_airforce_mi2us_base
	{
		scope=2;
		scopeCurator=2;
		author="$STR_DN_GM";
		hiddenSelectionsTextures[]=
		{
			"",
			"\gm\gm_vehicles\gm_air\gm_helicopters\gm_mi2\gm_gc_airforce_mi2\data\wdl\gm_gc_airforce_mi2_ext_01_wdl_co.paa",
			"\gm\gm_vehicles\gm_air\gm_helicopters\gm_mi2\gm_gc_airforce_mi2\data\wdl\gm_gc_airforce_mi2_ext_02_wdl_co.paa",
			"\gm\gm_vehicles\gm_air\gm_helicopters\gm_mi2\gm_gc_airforce_mi2\data\wdl\gm_gc_airforce_mi2_ext_03_wdl_co.paa"
		};
        faction="gm_fc_gc_winter";
		crew="gm_gc_airforce_pilot_pm_80_blu_win";
	};

//Planes
    class gm_gc_airforce_l410s_salon_win: gm_gc_airforce_l410s_salon_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_airforce_pilot_pm_80_blu_win";
	};
    class gm_gc_airforce_l410t_win: gm_gc_airforce_l410t_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_airforce_pilot_pm_80_blu_win";
	};

//Tanks
    class gm_gc_army_pt76b_win: gm_gc_army_pt76b_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_t55_win: gm_gc_army_t55_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_t55a_win: gm_gc_army_t55a_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_t55ak_win: gm_gc_army_t55ak_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_t55am2_win: gm_gc_army_t55am2_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_t55am2b_win: gm_gc_army_t55am2b_base
	{
        scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };

//Tanks OliveWinter
    class gm_gc_army_pt76b_olw: gm_gc_army_pt76b_base
	{
        scope=1;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_t55_olw: gm_gc_army_t55_base
	{
        scope=1;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_t55a_olw: gm_gc_army_t55a_base
	{
        scope=1;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_t55ak_olw: gm_gc_army_t55ak_base
	{
        scope=1;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_t55am2_olw: gm_gc_army_t55am2_base
	{
        scope=1;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };
    class gm_gc_army_t55am2b_olw: gm_gc_army_t55am2b_base
	{
        scope=1;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_crew_mpiaks74nk_80_blk_win";
    };

//Turrets
    class gm_gc_army_dshkm_aatripod_win: gm_gc_army_dshkm_aatripod_base
	{
		scope=2;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
	};
    class gm_gc_army_fagot_launcher_tripod_win: gm_gc_army_fagot_launcher_tripod_base
	{
		scope=2;
		scopeCurator=2;
        faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
	};
    class gm_gc_army_spg9_tripod_win: gm_gc_army_spg9_tripod_base
	{
		scope=2;
		scopeCurator=2;
		faction="gm_fc_gc_winter";
		crew="gm_gc_army_rifleman_mpiak74n_80_win";
	};