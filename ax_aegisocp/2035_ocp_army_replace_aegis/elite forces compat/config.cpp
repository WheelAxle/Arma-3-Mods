class CfgPatches
{
	class ax_2035_ocp_army_replace_ef
	{
		addonRootClass="ax_2035_ocp_army_replace_aegis";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"a3_elitef_characters_f"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class UniformItem;
	class Uniform_Base;
	class arifle_MX_F;
	class arifle_MXC_F;
	class arifle_MX_SW_F;
	class arifle_MX_SW_Black_F;
	class arifle_MX_SW_khk_F;
	class ef_arifle_mx_sw_coy;
	class arifle_SPAR_03_snd_F;
	class arifle_MXM_F;
	class LMG_Mk200_plain_F;
	class MMG_02_sand_F;
	class SMG_04_blk_F;
	class Aegis_MMG_FNMAG_240_F;
	class launch_MRAWS_green_F;
	class launch_I_Titan_short_F;
	class H_HelmetB;
	class H_HelmetSpecB;
	class H_HelmetB_camo;
	class EF_V_AAV_Coy;
	class EF_V_AAV_Diver_Coy;
	class EF_V_AAV_Rifleman_Coy;
	class EF_V_AAV_Sailor_Coy;
	class EF_V_AAV_Scout_Coy;
	class EF_V_AAV_Support_Coy;
	class EF_V_AAV_TL_Coy;
	class EF_V_CCR_Rifleman_Coy;
	class EF_V_CCR_TL_Coy;
	class EF_V_CCR_Scout_Coy;
	class EF_V_CCR_Support_Coy;
	class EliteF_V_CCR_Rifleman_MTP: EF_V_CCR_Rifleman_Coy
	{
		displayName="$STR_A3_AX_ELF_V_CCR_Rifleman_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CCR_pouches_ocp_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CCR_ocp_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"
		};
	};
	class EliteF_V_CCR_TL_MTP: EF_V_CCR_TL_Coy
	{
		displayName="$STR_A3_AX_ELF_V_CCR_TL_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CCR_pouches_ocp_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CCR_ocp_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"
		};
	};
	class EliteF_V_CCR_Scout_MTP: EF_V_CCR_Scout_Coy
	{
		displayName="$STR_A3_AX_ELF_V_CCR_Scout_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CCR_pouches_ocp_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CCR_ocp_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"
		};
	};
	class EliteF_V_CCR_Support_MTP: EF_V_CCR_Support_Coy
	{
		displayName="$STR_A3_AX_ELF_V_CCR_Support_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CCR_pouches_ocp_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CCR_ocp_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"
		};
	};
	class EliteF_V_AAV_MTP: EF_V_AAV_Coy
	{
		displayName="$STR_A3_AX_ELF_V_AAV_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"
		};
	};
	class EliteF_V_AAV_Diver_MTP: EF_V_AAV_Diver_Coy
	{
		displayName="$STR_A3_AX_ELF_V_AAV_Diver_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa",
			"\ef\ef_marines\data\diving_gear_co.paa"
		};
	};
	class EliteF_V_AAV_Rifleman_MTP: EF_V_AAV_Rifleman_Coy
	{
		displayName="$STR_A3_AX_ELF_V_AAV_Rifleman_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"
		};
	};
	class EliteF_V_AAV_Sailor_MTP: EF_V_AAV_Sailor_Coy
	{
		displayName="$STR_A3_AX_ELF_V_AAV_Sailor_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"
		};
	};
	class EliteF_V_AAV_Scout_MTP: EF_V_AAV_Scout_Coy
	{
		displayName="$STR_A3_AX_ELF_V_AAV_Scout_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"
		};
	};
	class EliteF_V_AAV_Support_MTP: EF_V_AAV_Support_Coy
	{
		displayName="$STR_A3_AX_ELF_V_AAV_Support_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"
		};
	};
	class EliteF_V_AAV_TL_MTP: EF_V_AAV_TL_Coy
	{
		displayName="$STR_A3_AX_ELF_V_AAV_TL_OCP";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\AA_Vest_OCP_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\MX\Data\XMX_Base_CO.paa"
		};
	};
	class EliteF_H_HelmetB_mcam_cover: H_HelmetB
	{
		displayName="$STR_A3_A_CfgWeapons_H_HelmetB_halfcover_ocp0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_halfcover_OCP_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_halfcover.rvmat"
		};
	};
	class EliteF_H_HelmetSpecB_mcam_cover: H_HelmetSpecB
	{
		displayName="$STR_A3_A_CfgWeapons_H_HelmetSpecB_halfcover_ocp0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_halfcover_OCP_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_halfcover.rvmat"
		};
	};
	class EliteF_H_HelmetB_camo_mcam_cover: H_HelmetB_camo
	{
		displayName="$STR_A3_A_CfgWeapons_H_HelmetB_halfcover_camo_ocp0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_halfcover_OCP_co.paa",
			"\A3_EliteF\characters_f_elitef\Headgear\Data\ghillie2_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_halfcover.rvmat"
		};
	};
	class EliteF_U_B_RangerUniform_mcam_snd: Uniform_Base
	{
		displayName="$STR_A3_AX_ELF_U_B_RangerUniform_ocp_snd";
	};
	class EliteF_U_B_RangerUniform_mcam_snd_vest: Uniform_Base
	{
		displayName="$STR_A3_AX_ELF_U_B_RangerUniform_ocp_snd_vest";
	};
	class EliteF_U_B_RangerUniform_mcam_snd_tee: Uniform_Base
	{
		displayName="$STR_A3_AX_ELF_U_B_RangerUniform_ocp_snd_tee";
	};
	class EliteF_U_B_RangerUniform_mcam_snd_djella: Uniform_Base
	{
		displayName="$STR_A3_AX_ELF_U_B_RangerUniform_ocp_snd_djella";
	};
	class EliteF_U_B_RangerUniform_mcam_snd_survival: Uniform_Base
	{
		displayName="$STR_A3_AX_ELF_U_B_RangerUniform_ocp_snd_survival";
	};
	class EliteF_U_B_RangerUniform_mcam_snd_Casual6: Uniform_Base
	{
		displayName="$STR_A3_AX_ELF_U_B_RangerUniform_ocp_snd_Casual6";
	};
	class EliteF_U_B_RangerUniform_mcam_snd_Casual4: Uniform_Base
	{
		displayName="$STR_A3_AX_ELF_U_B_RangerUniform_ocp_snd_Casual4";
	};
	class EliteF_U_B_RangerUniform_mcam_snd_Casual2: Uniform_Base
	{
		displayName="$STR_A3_AX_ELF_U_B_RangerUniform_ocp_snd_Casual2";
	};
	class EliteF_U_B_RangerUniform_mcam_snd_Casual3: Uniform_Base
	{
		displayName="$STR_A3_AX_ELF_U_B_RangerUniform_ocp_snd_Casual3";
	};
	class EliteF_U_B_RangerUniform_mcam_grn: Uniform_Base
	{
		displayName="$STR_A3_AX_ELF_U_B_RangerUniform_ocp_grn";
	};
	class EliteF_U_B_RangerUniform_mcam_grn_vest: Uniform_Base
	{
		displayName="$STR_A3_AX_ELF_U_B_RangerUniform_ocp_grn_vest";
	};
	class EliteF_U_B_RangerUniform_mcam_grn_tee: Uniform_Base
	{
		displayName="$STR_A3_AX_ELF_U_B_RangerUniform_ocp_grn_tee";
	};
	class Aegis_H_Helmet_FASTMT_base_F;
	class EliteF_H_HelmetFASTMT_Lite_base_F: Aegis_H_Helmet_FASTMT_base_F
	{
		displayName="$STR_A3_A_CfgWeapons_H_Helmet_FASTMT_LITE_Cover_OCP_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetFASTMT_tan_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\H_HelmetFASTMT_Cover_OCP_CO.paa"
		};
	};
	class EliteF_H_HelmetFASTMT_Scrim_base_F: Aegis_H_Helmet_FASTMT_base_F
	{
		displayName="$STR_A3_A_CfgWeapons_H_Helmet_FASTMT_SCRIM_Cover_OCP_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetFASTMT_tan_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\H_HelmetFASTMT_Cover_OCP_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HeadsetWest_tan_CO.paa",
			"\A3_EliteF\characters_f_elitef\Headgear\Data\camo_net_co.paa"
		};
	};
};

class cfgVehicles
{
	class B_Soldier_F;
	class B_Soldier_SL_F;
	class B_Soldier_A_F;
	class B_Soldier_AAR_F;
	class B_support_AMG_F;
	class B_support_AMort_F;
	class B_soldier_AAA_F;
	class B_soldier_AAT_F;
	class B_soldier_AR_F;
	class B_medic_F;
	class B_crew_F;
	class B_Deck_Crew_F;
	class B_engineer_F;
	class B_soldier_exp_F;
	class B_Soldier_GL_F;
	class B_support_GMG_F;
	class B_support_MG_F;
	class B_support_Mort_F;
	class B_support_CMort_RF;
	class B_HeavyGunner_F;
	class B_helicrew_F;
	class B_Helipilot_F;
	class B_Soldier_MG_F;
	class B_soldier_M_F;
	class B_soldier_mine_F;
	class B_soldier_AA_F;
	class B_soldier_AT_F;
	class B_officer_F;
	class B_soldier_PG_F;
	class B_Fighter_Pilot_F;
	class B_Pilot_F;
	class B_RadioOperator_F;
	class B_soldier_repair_F;
	class B_soldier_LAT_F;
	class B_soldier_LAT2_F;
	class B_Soldier_lite_F;
	class B_Soldier_unarmed_F;
	class B_Sharpshooter_F;
	class B_Survivor_F;
	class B_Soldier_TL_F;
	class B_soldier_UAV_F;
	class B_soldier_UAV_06_F;
	class B_soldier_UAV_06_medical_F;
	class B_soldier_UAV_lxWS;
	class B_soldier_UGV_02_Demining_F;
	class EF_B_Marine_JTAC_Des;
	class B_recon_TL_F;
	class B_CTRG_soldier_djella_lxWS;
	class b_soldier_survival_F;
	class B_ION_soldier_UAV_01_lxWS;
	class B_ION_Soldier_SG_lxWS;
	class B_ION_shot_lxWS;
	class EliteF_B_RangerUniform_mcam_snd: B_Soldier_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_ranger_OCP_co.paa"
		};
	};
	class EliteF_B_RangerUniform_mcam_snd_vest: B_Soldier_SL_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_ranger_OCP_co.paa"
		};
	};
	class EliteF_B_RangerUniform_mcam_snd_tee: B_Soldier_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_ranger_OCP_co.paa",
			"\a3\characters_f_bootcamp\Guerrilla\Data\c_cloth1_kabeiroi_co.paa",
			""
		};
	};
	class EliteF_B_RangerUniform_mcam_snd_djella: B_CTRG_soldier_djella_lxWS
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_ranger_OCP_co.paa",
			"lxWS\characters_1_f_lxws\uniform\data\lxWS_djellaba_shirt_sand2_co.paa",
			"lxWS\characters_1_f_lxws\uniform\data\lxWS_djellaba_pants_sand2_co.paa"
		};
	};
	class EliteF_B_RangerUniform_mcam_snd_survival: b_soldier_survival_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_ranger_OCP_co.paa",
			"\A3\Characters_F\Common\Data\diver_suit_nato_CO.paa",
			"\A3\Characters_F\Common\Data\diver_equip_nato_CO.paa",
			"\A3\Characters_F_Enoch\Uniforms\Data\basicbody_wdl_CO.paa"
		};
	};
	class EliteF_B_RangerUniform_mcam_snd_Casual6: B_ION_Soldier_SG_lxWS
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_ranger_OCP_co.paa",
			"\lxWS\characters_1_f_lxws\uniform\data\pmc_watch_co.paa",
			"\A3\Characters_F_Enoch\Uniforms\Data\basicbody_wdl_CO.paa",
			"lxWS\characters_f_lxws\data\SFIA\c_cloth1_sand_co.paa"
		};
	};
	class EliteF_B_RangerUniform_mcam_snd_Casual4: B_ION_soldier_UAV_01_lxWS
	{
		hiddenSelectionsTextures[]=
		{
			"\lxws\characters_f_lxws\data\clothes\B_ION_Soldier_poloWhite_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_ranger_OCP_m50brt_co.paa"
		};
	};
	class EliteF_B_RangerUniform_mcam_snd_Casual2: B_ION_shot_lxWS
	{
		hiddenSelectionsTextures[]=
		{
			"\lxws\characters_f_lxws\data\clothes\B_ION_Soldier_poloRed_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_ranger_OCP_m50brt_co.paa"
		};
	};
	class EliteF_B_RangerUniform_mcam_snd_Casual3: EliteF_B_RangerUniform_mcam_snd_Casual2
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_EPB\Guerrilla\Data\ig_guerrilla5_1_co.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_ranger_OCP_m50brt_co.paa"
		};
	};
	class EliteF_B_RangerUniform_mcam_grn: B_Soldier_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_ranger_OCP_grn_co.paa"
		};
	};
	class EliteF_B_RangerUniform_mcam_grn_vest: EliteF_B_RangerUniform_mcam_snd_vest
	{
		uniformClass="EliteF_U_B_RangerUniform_mcam_grn_vest";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_ranger_OCP_grn_co.paa"
		};
	};
	class EliteF_B_RangerUniform_mcam_grn_tee: EliteF_B_RangerUniform_mcam_snd_tee
	{
		uniformClass="EliteF_U_B_RangerUniform_mcam_grn_tee";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_ranger_OCP_grn_co.paa",
			"\A3_EliteF\characters_f_elitef\Uniforms\Data\c_cloth1_rgr_grn_CO.paa",
			""
		};
	};
	class Vest_Base_F;
	class Vest_EliteF_V_CCR_Rifleman_MTP: Vest_Base_F{displayName="$STR_A3_AX_ELF_V_CCR_Rifleman_OCP";};
	class Vest_EliteF_V_CCR_TL_MTP: Vest_Base_F{displayName="$STR_A3_AX_ELF_V_CCR_TL_OCP";};
	class Vest_EliteF_V_CCR_Scout_MTP: Vest_Base_F{displayName="$STR_A3_AX_ELF_V_CCR_Scout_OCP";};
	class Vest_EliteF_V_CCR_Support_MTP: Vest_Base_F{displayName="$STR_A3_AX_ELF_V_CCR_Support_OCP";};
	class Vest_EliteF_V_AAV_MTP: Vest_Base_F{displayName="$STR_A3_AX_ELF_V_AAV_OCP";};
	class Vest_EliteF_V_AAV_Diver_MTP: Vest_Base_F{displayName="$STR_A3_AX_ELF_V_AAV_Diver_OCP";};
	class Vest_EliteF_V_AAV_Rifleman_MTP: Vest_Base_F{displayName="$STR_A3_AX_ELF_V_AAV_Rifleman_OCP";};
	class Vest_EliteF_V_AAV_Sailor_MTP: Vest_Base_F{displayName="$STR_A3_AX_ELF_V_AAV_Sailor_OCP";};
	class Vest_EliteF_V_AAV_Scout_MTP: Vest_Base_F{displayName="$STR_A3_AX_ELF_V_AAV_Scout_OCP";};
	class Vest_EliteF_V_AAV_Support_MTP: Vest_Base_F{displayName="$STR_A3_AX_ELF_V_AAV_Support_OCP";};
	class Vest_EliteF_V_AAV_TL_MTP: Vest_Base_F{displayName="$STR_A3_AX_ELF_V_AAV_TL_OCP";};
	class Item_Base_F;
	class Item_EliteF_U_B_RangerUniform_mcam_snd: Item_Base_F{displayName="$STR_A3_AX_ELF_U_B_RangerUniform_ocp_snd";};
	class Item_EliteF_U_B_RangerUniform_mcam_snd_vest: Item_Base_F{displayName="$STR_A3_AX_ELF_U_B_RangerUniform_ocp_snd_vest";};
	class Item_EliteF_U_B_RangerUniform_mcam_snd_tee: Item_Base_F{displayName="$STR_A3_AX_ELF_EliteF_U_B_RangerUniform_ocp_snd_tee";};
	class Item_EliteF_U_B_RangerUniform_mcam_snd_djella: Item_Base_F{displayName="$STR_A3_AX_ELF_U_B_RangerUniform_ocp_snd_djella";};
	class Item_EliteF_U_B_RangerUniform_mcam_snd_Casual6: Item_Base_F{displayName="$STR_A3_AX_ELF_U_B_RangerUniform_ocp_snd_Casual6";};
	class Item_EliteF_U_B_RangerUniform_mcam_snd_Casual4: Item_Base_F{displayName="$STR_A3_AX_ELF_U_B_RangerUniform_ocp_snd_Casual4";};
	class Item_EliteF_U_B_RangerUniform_mcam_snd_Casual2: Item_Base_F{displayName="$STR_A3_AX_ELF_U_B_RangerUniform_ocp_snd_Casual2";};
	class Item_EliteF_U_B_RangerUniform_mcam_snd_Casual3: Item_Base_F{displayName="$STR_A3_AX_ELF_U_B_RangerUniform_ocp_snd_Casual3";};
	class Item_EliteF_U_B_RangerUniform_mcam_snd_survival: Item_Base_F{displayName="$STR_A3_AX_ELF_U_B_RangerUniform_ocp_snd_survival";};
};
