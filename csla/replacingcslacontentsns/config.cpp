class CfgPatches
{
	class sns_csla_replacement_sns
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
            "CSLA_CIV",
			"simc_uaf_67_eden"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgWeapons
{
	class HeadgearItem;
	class VestItem;
	class US85_itemCore;
	class US85_helmetPASGT: US85_itemCore
	{
		model="\simc_uaf_88\helmet_pasgt.p3d";
		hiddenSelections[]=
		{
			"cover",
			"jewgel",
			"nv",
			"nv_strap"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\pot_kraut_m81_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\simc_uaf_88\helmet_pasgt.p3d";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"cover",
				"jewgel",
				"nv",
				"nv_strap"
			};
		};
	};
	class US85_helmetPASGTr: US85_helmetPASGT
	{
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\pot_kraut_m81_co.paa",
			"\simc_uaf_88\data\pot_scrim4_co.paa",
			""
		};
		hiddenSelectionsMaterials[]=
		{
			"\simc_uaf_81\data\pot_kraut.rvmat",
			"\simc_uaf_88\data\pot_scrim4.rvmat",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_88\helmet_pasgt_scrim_3.p3d";
			hiddenSelections[]=
			{
				"cover",
				"scrim",
				"nv"
			};
		};
	};
	class US85_helmetPASGTG: US85_helmetPASGT
	{
		model="\simc_uaf_88\helmet_pasgt.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_88\helmet_pasgt_rank.p3d";
			hiddenSelections[]=
			{
				"cover",
				"nv",
				"nv_strap",
				"g_cover",
				"rank"
			};
		};
	};
	class US85_helmetPASGT_d: US85_helmetPASGT
	{
		hiddenSelections[]=
		{
			"cover",
			"band",
			"jewgel",
			"nv",
			"nv_strap"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\pot_kraut_desu_co.paa",
			""
		};
	};
	class US85_helmetPASGTG_d: US85_helmetPASGTG
	{
		hiddenSelections[]=
		{
			"cover",
			"band",
			"jewgel",
			"nv",
			"nv_strap"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\pot_kraut_desu_co.paa",
			""
		};
	};
	class US85_helmetPASGT_g: US85_helmetPASGT
	{
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\csla_usmc\data\us_soldier_cap_green_co.paa"
		};
	};
	class US85_helmetPASGTG_g: US85_helmetPASGTG
	{
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\csla_usmc\data\us_soldier_cap_green_co.paa"
		};
	};
	class US85_helmetM1;
	class US85_marineCap: US85_helmetM1
	{
	};
	class US85_ptCap: US85_marineCap
	{
	};
	class US85_hat: US85_helmetM1 //boonie
	{
	};
	class US85_helmetSFL: US85_helmetM1
	{
		model="\csla_usmc\helmets\us_ProTechelmet.p3d";
		hiddenSelections[]=
		{
		};
		hiddenSelectionsTextures[]=
		{
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\simc_uaf_93\helmet_pro_half.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Anvis",
				"Strobe",
				"tapes",
				"jewgel"
			};
		};
	};
	class US85_helmetSFLG: US85_helmetSFL
	{
		model="\csla_usmc\helmets\us_ProTechelmet_off.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_93\helmet_pro_half.p3d";
			hiddenSelections[]=
			{
				"Anvis",
				"Strobe",
				"tapes"
			};
		};
	};
	class US85_helmetSFLG_on: US85_helmetSFLG
	{
		model="\csla_usmc\helmets\us_ProTechelmet_on.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_93\helmet_pro_half_swdg_low.p3d";
			modelSides[]={6};
			hiddenSelections[]=
			{
				"Anvis",
				"Strobe",
				"tapes"
			};
		};
	};
/*
	class US85_grVest;
	class US85_grV_M16: US85_grVest
	{
		class ItemInfo;
	};
	class US85_grSF_M16: US85_grV_M16
	{
		model="\csla_usmc\gear\csla_us_specfor_vest.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\csla_usmc\gear\csla_us_specforM16_vest.p3d";
		};
	};
	class US85_grSF_M16GL: US85_grV_M16
	{
		model="\csla_usmc\gear\csla_us_specforM16GL_vest.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\csla_usmc\gear\csla_us_specforM16GL_vest.p3d";
		};
	};
	class US85_grV_M24;
	class US85_grSF_M24: US85_grV_M24
	{
		model="\csla_usmc\gear\csla_us_specforM16_vest.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\csla_usmc\gear\csla_us_specforM16_vest.p3d";
		};
	};
	class US85_grV_M9;
	class US85_grSF_M9: US85_grV_M9
	{
		model="\csla_usmc\gear\csla_us_specfor_vest.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\csla_usmc\gear\csla_us_specfor_vest.p3d";
		};
	};
	class US85_grV_MG;
	class US85_grSF_MG: US85_grV_MG
	{
		model="\csla_usmc\gear\csla_us_armoreMG_vest.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\csla_usmc\gear\csla_us_specforMG_vest.p3d";
		};
	};
	class US85_grV_MPV;
	class US85_grSF_MPV: US85_grV_MPV
	{
		model="\csla_usmc\gear\csla_us_specforM16_vest.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\csla_usmc\gear\csla_us_specforM16_vest.p3d";
		};
	};
	class US85_grSF_TLBV: US85_grV_MPV
	{
		model="\csla_usmc\gear\csla_us_specforM16_TLBV.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\csla_usmc\gear\csla_us_specforM16_TLBV.p3d";
		};
	};
*/
	class US85_grYHarness: US85_itemCore
	{
		model="\simc_uaf_81\belt_alice_drop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"ifak"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\gear_alice_co.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\simc_uaf_81\belt_alice.p3d";
			hiddenSelections[]=
			{
				"camo",
				"ifak"
			};
		};
	};
	class US85_grY_M16: US85_grYHarness
	{
		model="\simc_uaf_81\belt_alice_drop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"ifak"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\gear_alice_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_88\belt_alice_lc2.p3d";
			hiddenSelections[]=
			{
				"camo",
				"ifak"
			};
		};
	};
	class US85_grY_lnrG: US85_grY_M16
	{
		model="\simc_uaf_81\belt_alice_drop.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_88\belt_alice_lc2.p3d";
			containerClass="Supply250";
			passThrough=0.5;
		};
	};
	class US85_grY_M24: US85_grY_M16
	{
		model="\simc_uaf_81\belt_alice_drop.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\gear_alice_laat_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_81\belt_alice_lc2.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class US85_grY_M9: US85_grYHarness
	{
		model="\simc_uaf_81\belt_alice_drop.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\gear_alice_laat_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_88\belt_alice_LC2_45.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class US85_grY_MG: US85_grYHarness
	{
		model="\simc_uaf_81\belt_alice_drop.p3d";
		hiddenSelections[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_81\belt_alice_LC2_249.p3d";
			hiddenSelections[]=
			{
				""
			};
		};
	};
	class US85_grY_MPV: US85_grYHarness
	{
		model="\simc_uaf_81\belt_alice_drop.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\gear_alice_laat_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_81\belt_alice_alt.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class US85_grY_snp: US85_grYHarness
	{
		model="\simc_uaf_81\belt_alice_drop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"ifak"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\gear_alice_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_81\belt_alice_etool.p3d";
			hiddenSelections[]=
			{
				"camo",
				"ifak"
			};
		};
	};
	class US85_grVest: US85_grYHarness
	{
		model="\simc_uaf_81\suitpack_pasgt.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_81\vest_pasgt_alice.p3d";
			hiddenSelections[]=
			{
				"ifak"
			};
		};
	};
	class US85_grV_ofc: US85_grVest
	{
		uniformModel="\simc_uaf_81\suitpack_pasgt.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_88\vest_pasgt_alice_60.p3d";
			hiddenSelections[]=
			{
				"left",
				"regt",
				"ifak"
			};
		};
	};
	class US85_grV_M16: US85_grVest
	{
		uniformModel="\simc_uaf_81\suitpack_pasgt.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_88\vest_pasgt_alice.p3d";
			hiddenSelections[]=
			{
				"ifak"
			};
		};
	};
	class US85_grV_M16GL: US85_grVest
	{
		model="\simc_uaf_68\vest_nade_drop.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_81\vest_pasgt_nade.p3d";
			hiddenSelections[]=
			{
				""
			};
		};
	};
	class US85_grVm_M16GL: US85_grVest
	{
		model="\simc_uaf_68\vest_nade_drop.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_81\vest_nade_alice.p3d";
			hiddenSelections[]=
			{
				""
			};
		};
	};
	class US85_grV_M24: US85_grVest
	{
		model="\simc_uaf_81\suitpack_pasgt.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_88\vest_pasgt_alice_alt.p3d";
			hiddenSelections[]=
			{
				"ifak"
			};
		};
	};
	class US85_grV_M9: US85_grVest
	{
		model="\simc_uaf_81\suitpack_pasgt.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_88\vest_pasgt_alice_45.p3d";
			hiddenSelections[]=
			{
				"ifak"
			};
		};
	};
	class US85_grV_MG: US85_grVest
	{
		model="\simc_uaf_81\suitpack_pasgt.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_88\vest_pasgt_alice_249.p3d";
			hiddenSelections[]=
			{
				"ifak"
			};
		};
	};
	class US85_grV_MPV: US85_grVest
	{
		model="\simc_uaf_81\suitpack_pasgt.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_81\vest_pasgt_alice_etool.p3d";
			hiddenSelections[]=
			{
				"ifak"
			};
		};
	};
	class US85_grSF_M16: US85_grV_M16
	{
		model="\simc_uaf_93\suitpack_fauf.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_93\vest_fauf_belt.p3d";
			hiddenSelections[]=
			{
				""
			};
		};
	};
	class US85_grSF_M16GL: US85_grV_M16 //pasgt 40mm lc2
	{
		model="\simc_uaf_68\vest_nade_drop.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_88\vest_pasgt_nade.p3d";
			hiddenSelections[]=
			{
				"ifak"
			};
		};
	};
	class US85_grSF_M24: US85_grV_M24
	{
		model="\simc_uaf_93\suitpack_fauf.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_93\vest_fauf_LBV_belt_45.p3d";
			hiddenSelections[]=
			{
				""
			};
		};
	};
	class US85_grSF_M9: US85_grV_M9
	{
		model="\simc_uaf_93\suitpack_fauf.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_93\vest_fauf_belt_45.p3d";
			hiddenSelections[]=
			{
				""
			};
		};
	};
	class US85_grSF_MG: US85_grV_MG
	{
		model="\simc_uaf_93\suitpack_fauf.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_93\vest_fauf_belt_249.p3d";
			hiddenSelections[]=
			{
				""
			};
		};
	};
	class US85_grSF_MPV: US85_grV_MPV
	{
		model="\simc_uaf_93\suitpack_fauf.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_uaf_93\vest_fauf_LBV_2.p3d";
			hiddenSelections[]=
			{
				""
			};
		};
	};
	class US85_grSF_TLBV: US85_grV_MPV
	{
		model="\simc_uaf_93\suitpack_lbv_88.p3d";
		hiddenSelections[]=
		{
			"camo2",
			"ifak"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_93\data\lbv_88_co.paa",
			""
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\simc_mc_93\vest_lbv_88_belt_1.p3d";
			hiddenSelections[]=
			{
				"camo2"
			};
		};
	};
};

class CfgVehicles
{
	class Bag_Base;
	class US85_backpack: Bag_Base
	{
		model="\simc_uaf_88\pack_alice_0.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class US85_bpMedi: US85_backpack
	{
		model="\simc_uaf_68\pack_med_m5.p3d";
		hiddenSelections[]=
		{
			""
		};
		hiddenSelectionsTextures[]=
		{
			""
		};
	};
	class SoldierWB;
	class US85_soldierBase: SoldierWB
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_81\data\bdu_mc_co.paa",
			"\simc_mc_81\data\bdu_mc_co.paa",
			"",
			""
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"simc_uaf_81\data\bdu.rvmat",
				"simc_uaf_81\data\bdu_verwundet.rvmat",
				"simc_uaf_81\data\bdu_verwundet.rvmat",
				"simc_uaf_81\data\bdu.rvmat",
				"simc_uaf_81\data\bdu_verwundet.rvmat",
				"simc_uaf_81\data\bdu_verwundet.rvmat",
				"a3\characters_f\heads\data\hl_white_bald_muscular.rvmat",
				"a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_black_bald_muscular.rvmat",
				"a3\characters_f\heads\data\hl_black_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_black_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_hairy_muscular.rvmat",
				"a3\characters_f\heads\data\hl_white_hairy_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_hairy_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_old.rvmat",
				"a3\characters_f\heads\data\hl_white_old_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_old_injury.rvmat",
				"a3\characters_f\heads\data\hl_asian_bald_muscular.rvmat",
				"a3\characters_f\heads\data\hl_asian_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_asian_bald_muscular_injury.rvmat"
			};
		};
		modelSides[]={0,1,2,3};
		model="\simc_uaf_81\bdu_erla.p3d";
	};
	class US85_enlBase;
	class US85_mcBaseDES: US85_enlBase
	{
		model="\simc_uaf_81\bdu_erla_trop.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_mc_81\data\bdu_mc_desu_co.paa",
			"\simc_mc_81\data\bdu_mc_desu_co.paa",
			"",
			""
		};
	};
	class US85_ptBase: US85_soldierBase
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\bdu_co.paa",
			"\simc_uaf_81\data\bdu_co.paa",
			"",
			"",
			""
		};
		textureList[]=
		{
			"BDUold",
			0.1,
			"BDUnew",
			0.89999998
		};
	};
	class US85_soldierBaseKHK: US85_soldierBase
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\bdu_rdf_od7_co.paa",
			"\simc_uaf_81\data\bdu_rdf_od7_co.paa",
			"",
			"",
			""
		};
	};
	class US85_sfBase: US85_soldierBase
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\bdu_co.paa",
			"\simc_uaf_81\data\bdu_co.paa",
			"",
			"",
			"",
			""
		};
		textureList[]=
		{
			"BDUold",
			0,
			"BDUnew",
			0
		};
		model="\simc_uaf_93\dcu_knee_nomex_trop.p3d";
	};
	class US85_sfBaseDES: US85_sfBase
	{
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"rank",
			"insignia",
			"nom",
			"gas"
		};
		hiddenSelectionsTextures[]=
		{
			"\simc_uaf_81\data\bdu_desu_co.paa",
			"\simc_uaf_81\data\bdu_desu_co.paa",
			"",
			"",
			"\simc_uaf_81\patches\nom_yukon_co.paa",
			"",
			"\simc_uaf_93\patches\falg_regt_co.paa"
		};
		model="\simc_uaf_93\dcu_knee_nomex_trop.p3d";
	};
};