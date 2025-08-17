class CfgPatches
{
	class ax_gm_tweaks
	{
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"gm_characters_xx_revolutionaries"
		};
		author="Axle";
	};
};

//#include "3den.hpp"
#include "cfgFactionClasses.hpp"
//#include "cfgEditorSubcategories.hpp"
//#include "cfgGroups.hpp"
#include "cfgWeapons.hpp"

class AnimationSources;


class CfgVehicles
{
	class gm_wheeled_bicycle_base;
	class gm_bicycle_01_base: gm_wheeled_bicycle_base
	{
		editorSubcategory="EdSubcat_Cars";
	};

	class gm_ge_army_man_base;
//Denmark Winter
	class gm_dk_army_rifleman_84_m84_base;
	class gm_dk_army_rifleman_84_win_base: gm_dk_army_rifleman_84_m84_base
	{
		faction="gm_fc_dk_winter";
	};
//Denmark 1990s
	class gm_dk_army_rifleman_90_m84_base: gm_dk_army_rifleman_84_m84_base
	{
		faction="gm_fc_dk_90";
	};
	class gm_dk_army_sf_base_90_m84: gm_dk_army_rifleman_84_m84_base
	{
		faction="gm_fc_dk_90";
	};
//Denmark 1990s Winter
	class gm_dk_army_rifleman_90_win_base: gm_dk_army_rifleman_84_win_base
	{
		faction="gm_fc_dk_90_winter";
	};
//WG Summer
	class gm_ge_army_rifleman_80_wdl;
	class gm_ge_army_sf_base_80_wdl: gm_ge_army_rifleman_80_wdl
	{
		uniformClass="gm_ge_army_uniform_soldier_bdu_nogloves_80_wdl";
	};
//WG Autumn
	class gm_ge_army_rifleman_parka_80_base: gm_ge_army_man_base
	{
		faction="gm_fc_ge_autumn";
	};
//WG Winter
	class gm_ge_army_rifleman_parka_80_win_base: gm_ge_army_man_base
	{
		faction="gm_fc_ge_winter";
	};
//WG 1990s
	class gm_ge_army_crew_mp2a1_80_base;
	class gm_ge_army_crew_90_flk: gm_ge_army_crew_mp2a1_80_base
	{
		faction="gm_fc_ge_90";
	};
	class gm_ge_army_rifleman_90_base: gm_ge_army_man_base
	{
		faction="gm_fc_ge_90";
	};
//WG 1990s Winter
	class gm_ge_army_rifleman_90_win_base: gm_ge_army_rifleman_parka_80_win_base
	{
		faction="gm_fc_ge_90_winter";
	};
//WG Borderguards 1990s
	class gm_ge_bgs_special_rolled_80_blk_base;
	class gm_ge_bgs_special_80_blk_base;
	class gm_ge_bgs_sf_demolition_sig551_90_blk: gm_ge_bgs_special_rolled_80_blk_base
	{
		faction="gm_fc_ge_90_bgs";
	};
	class gm_ge_bgs_sf_grenadier_hk69a1_90_blk: gm_ge_bgs_special_80_blk_base
	{
		faction="gm_fc_ge_90_bgs";
	};
	class gm_ge_bgs_sf_machinegunner_g8_90_blk: gm_ge_bgs_special_rolled_80_blk_base
	{
		faction="gm_fc_ge_90_bgs";
	};
	class gm_ge_bgs_sf_marksman_psg1_90_blk: gm_ge_bgs_special_80_blk_base
	{
		faction="gm_fc_ge_90_bgs";
	};
	class gm_ge_bgs_sf_rifleman_mp5a2_90_blk: gm_ge_bgs_special_80_blk_base
	{
		faction="gm_fc_ge_90_bgs";
	};
	class gm_ge_bgs_sf_specialist_hk512_90_blk: gm_ge_bgs_special_80_blk_base
	{
		faction="gm_fc_ge_90_bgs";
	};
	class gm_ge_bgs_sf_squadleader_sig551_90_blk: gm_ge_bgs_special_rolled_80_blk_base
	{
		faction="gm_fc_ge_90_bgs";
	};
//EG Winter
	class gm_gc_army_rifleman_80_str_base;
	class gm_gc_army_rifleman_80_win: gm_gc_army_rifleman_80_str_base
	{
		faction="gm_fc_gc_winter";
	};
//EG 1990s
	class gm_gc_army_rifleman_90_base;
	class gm_gc_army_rifleman_90_str_base: gm_gc_army_rifleman_90_base
	{
		faction="gm_fc_gc_90";
	};
//EG 1990s Winter
	class gm_gc_army_rifleman_mpiak74n_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};
	class gm_gc_army_radioman_mpiak74n_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};
	class gm_gc_army_paratrooper_mpiaks74n_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};
	class gm_gc_army_medic_mpiak74n_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};
	class gm_gc_army_machinegunner_lmgrpk74_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};
	class gm_gc_army_machinegunner_assistant_mpiak74n_lmgrpk74_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};
	class gm_gc_army_machinegunner_lmgrpk_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};
	class gm_gc_army_machinegunner_assistant_mpiak74n_lmgrpk_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};
	class gm_gc_army_machinegunner_pk_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};
	class gm_gc_army_machinegunner_assistant_mpiak74n_pk_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};
	class gm_gc_army_antitank_mpiak74n_rpg18_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};
	class gm_gc_army_antitank_mpiak74n_rpg7_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};
	class gm_gc_army_antitank_assistant_mpiak74n_rpg7_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};
	class gm_gc_army_antiair_mpiak74n_9k32m_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};
	class gm_gc_army_antitank_mpiak74n_fagot_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};
	class gm_gc_army_demolition_mpiaks74n_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};
	class gm_gc_army_engineer_mpiaks74n_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};
	class gm_gc_army_marksman_svd_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};
	class gm_gc_army_squadleader_mpiak74n_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};
	class gm_gc_army_platoonleader_mpiak74n_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};
	class gm_gc_army_officer_pm_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};
	class gm_gc_army_sf_base_90_win: gm_gc_army_rifleman_90_str_base
	{
		faction="gm_fc_gc_winter_90";
	};

//PL Autumn
	class gm_pl_army_rifleman_80_moro_base;
	class gm_pl_army_rifleman_80_autumn_moro_base: gm_pl_army_rifleman_80_moro_base
	{
		faction="gm_fc_pl_autumn";
	};
//PL Winter
	class gm_pl_army_rifleman_80_win_base: gm_pl_army_rifleman_80_autumn_moro_base
	{
		faction="gm_fc_pl_winter";
	};
};
