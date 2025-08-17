class CfgPatches
{
	class ax_2035_ocp_army_replace_aegis
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"A3_Aegis_Characters_F_Aegis"
		};
		author="Axle";
	};
};
class CfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class V_PlateCarrierGL_rgr;
	class V_lxWS_PlateCarrierGL_desert: V_PlateCarrierGL_rgr
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\carrier_gl_rig_desert_cov2.paa"
		};
	};
	class V_PlateCarrierGL_mtp: V_PlateCarrierGL_rgr
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\Carrier_GL_Rig_OCP_CO.paa"
		};
	};
	class V_PlateCarrierSpec_rgr;
	class V_PlateCarrierSpec_mtp: V_PlateCarrierSpec_rgr
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\Carrier_GL_Rig_OCP_CO.paa"
		};
	};
	class V_PlateCarrier1_blk;
	class V_PlateCarrier2_blk;
	class V_PlateCarrier1_mtp: V_PlateCarrier1_blk
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\vests_OCP_co.paa"
		};
	};
	class V_PlateCarrier2_mtp: V_PlateCarrier2_blk
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\vests_OCP_co.paa"
		};
	};
	class V_PlateCarrier_CTRG_lxWS;
	class Aegis_V_PlateCarrier2_alt_mtp: V_PlateCarrier_CTRG_lxWS
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\vests_OCP_co.paa"
		};
	};
	class U_B_CombatUniform_mcam: Uniform_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_OCP_co.paa"
		};
	};
	class U_B_CombatUniform_mcam_tshirt: Uniform_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_OCP_co.paa"
		};
	};
	class U_B_CombatUniform_mcam_vest: Uniform_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_OCP_co.paa"
		};
	};
	class U_B_CombatUniform_mcam_worn: Uniform_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_OCP_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_Soldier_worn_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_B_survival_uniform: Uniform_Base
	{
	};
	class U_I_G_Story_Protagonist_F: Uniform_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_EPB\Guerrilla\Data\ig_guerrilla5_1_co.paa"
		};
	};
	class U_B_GhillieSuit: Uniform_Base
	{
	};
	class U_B_HeliPilotCoveralls: Uniform_Base
	{
	};
	class U_B_CBRN_Suit_01_MTP_F: Uniform_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CBRN_Suit_01_OCP_CO.paa"
		};
	};
	class H_MilCap_ocamo;
	class H_MilCap_mcamo: H_MilCap_ocamo
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\cappatrol_OCP_co.paa"
		};
	};
	class Aegis_H_Milcap_nohs_base_F;
	class Aegis_H_Milcap_nohs_mcamo_F: Aegis_H_Milcap_nohs_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\cappatrol_OCP_co.paa"
		};
	};
	class H_Booniehat_khk;
	class H_Booniehat_mcamo: H_Booniehat_khk
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\booniehat_OCP_co.paa"
		};
	};
	class H_Booniehat_mcamo_hs: H_Booniehat_mcamo
	{
	};
	class H_Cap_red;
	class H_Cap_tan_specops_US: H_Cap_red
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\capb_OCP_co.paa"
		};
	};
	class H_Cap_tan_specops_US_hs: H_Cap_tan_specops_US
	{
	};
	class H_Bandanna_surfer;
	class H_Bandanna_mcamo: H_Bandanna_surfer
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\h_bandana_OCP_co.paa"
		};
	};
	class H_Bandanna_mcamo_hs: H_Bandanna_mcamo
	{
	};
	class H_HelmetB;
	class H_HelmetB_plain_mcamo: H_HelmetB
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_OCP_co.paa"
		};
	};
	class H_HelmetB_camo;
	class H_HelmetB_camo_mcamo: H_HelmetB_camo
	{
		displayName="$STR_A3_A_CfgWeapons_H_HelmetB_camo_ocp0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_OCP_co.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\ghillie2_CO.paa"
		};
	};
	class H_HelmetSpecB;
	class H_HelmetSpecB_mcamo: H_HelmetSpecB
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_OCP_co.paa"
		};
	};
	class H_HelmetB_light;
	class H_HelmetB_light_mcamo: H_HelmetB_light
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_OCP_co.paa"
		};
	};
	class H_HelmetSpecB_light;
	class H_HelmetSpecB_light_mcamo: H_HelmetSpecB_light
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_OCP_co.paa"
		};
	};
	class Aegis_H_Helmet_FASTMT_Cover_base_F;
	class Aegis_H_Helmet_FASTMT_Cover_mtp_F: Aegis_H_Helmet_FASTMT_Cover_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HelmetFASTMT_tan_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\H_HelmetFASTMT_Cover_OCP_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Headgear\Data\H_HeadsetWest_tan_CO.paa"
		};
	};
};
class UniformSlotInfo;
class CfgVehicles
{
	class SoldierWB;
	class B_Soldier_base_F: SoldierWB
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_OCP_co.paa"
		};
	};
	class B_Soldier_02_f: B_Soldier_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_OCP_co.paa",
			"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\basicbody_green_CO.paa"
		};
	};
	class B_Soldier_F;
	class B_Soldier_worn_F: B_Soldier_F
	{
		scope=1;
		scopeCurator=1;
		uniformClass="U_B_CombatUniform_mcam_worn";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_OCP_co.paa"
		};
	};
	class B_G_Soldier_F;
	class I_G_Story_Protagonist_F: B_G_Soldier_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_EPB\Guerrilla\Data\IG_Guerrilla5_1_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_OCP_co.paa"
		};
	};
	class b_soldier_survival_F: B_Soldier_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_OCP_co.paa",
			"\A3\Characters_F\Common\Data\diver_suit_nato_CO.paa",
			"\A3\Characters_F\Common\Data\diver_equip_nato_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Uniforms\Data\basicbody_green_CO.paa"
		};
	};
	class B_CBRN_Man_Base_F;
	class B_CBRN_Man_Oversuit_01_MTP_F: B_CBRN_Man_Base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CBRN_Suit_01_OCP_CO.paa"
		};
	};
	class B_Carryall_Base;
	class B_Carryall_mcamo: B_Carryall_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_tortila_OCP_co.paa"
		};
	};
	class B_AssaultPack_Base;
	class B_AssaultPack_mcamo: B_AssaultPack_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_compact_OCP_co.paa"
		};
	};
	class B_AssaultPackSpec_Base;
	class B_AssaultPackSpec_mcamo: B_AssaultPackSpec_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_compact_OCP_co.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\vests_OCP_co.paa"
		};
	};
	class Weapon_Bag_Base;
	class B_Static_Designator_01_weapon_F: Weapon_Bag_Base
	{
		displayName="$STR_A3_CfgVehicles_B_Static_Designator_01_weapon_ocp_F0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_compact_OCP_co.paa"
		};
	};
	class B_Kitbag_Base;
	class B_Kitbag_mcamo: B_Kitbag_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_fast_OCP_co.paa"
		};
	};
	class B_TacticalPack_Base;
	class B_TacticalPack_mcamo: B_TacticalPack_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_small_OCP_co.paa"
		};
	};
	class B_Bergen_Base_F;
	class B_Bergen_mcamo_F: B_Bergen_Base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\Bergen_OCP_co.paa"
		};
	};
	class B_RadioBag_01_base_F;
	class B_RadioBag_01_mtp_F: B_RadioBag_01_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\B_radiobag_01_OCP_CO.paa"
		};
	};
	class Aegis_B_patrolBackpack_blk_F;
	class Aegis_B_patrolBackpack_mcamo_F: Aegis_B_patrolBackpack_blk_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\UAV_backpack_OCP_co.paa"
		};
	};
	class Bag_Base;
	class B_Mortar_01_weapon_F: Weapon_Bag_Base
	{
		displayName="$STR_A3_CfgVehicles_B_Mortar_01_ocp_Wpn0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_small_OCP_co.paa"
		};
	};
	class B_Mortar_01_support_F: Bag_Base
	{
		displayName="$STR_A3_CfgVehicles_B_Mortar_01_ocp_Support0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_small_OCP_co.paa"
		};
	};
	class B_HMG_01_weapon_F: Weapon_Bag_Base
	{
		displayName="$STR_A3_CfgVehicles_B_HMG_01_ocp_Wpn0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_small_OCP_co.paa"
		};
	};
	class B_HMG_01_high_weapon_F: B_HMG_01_weapon_F
	{
		displayName="$STR_A3_CfgVehicles_B_HMG_01_high_weapon_ocp_F0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_small_OCP_co.paa"
		};
	};
	class B_HMG_01_A_weapon_F: B_HMG_01_weapon_F
	{
		displayName="$STR_A3_CfgVehicles_B_HMG_01_A_ocp_Wpn0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_small_OCP_co.paa"
		};
	};
	class B_HMG_01_support_F: Bag_Base
	{
		displayName="$STR_A3_CfgVehicles_B_HMG_01_ocp_Support0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_small_OCP_co.paa"
		};
	};
	class B_HMG_01_support_high_F: B_HMG_01_support_F
	{
		displayName="$STR_A3_CfgVehicles_B_HMG_01_support_high_ocp_F0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_small_OCP_co.paa"
		};
	};
	class B_GMG_01_weapon_F: B_HMG_01_weapon_F
	{
		displayName="$STR_A3_CfgVehicles_B_GMG_01_ocp_Wpn0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_small_OCP_co.paa"
		};
	};
	class B_GMG_01_high_weapon_F: B_HMG_01_high_weapon_F
	{
		displayName="$STR_A3_CfgVehicles_B_GMG_01_high_weapon_ocp_F0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_small_OCP_co.paa"
		};
	};
	class B_GMG_01_A_weapon_F: B_HMG_01_weapon_F
	{
		displayName="$STR_A3_CfgVehicles_B_GMG_01_A_ocp_Wpn0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_small_OCP_co.paa"
		};
	};
	class B_HMG_02_support_F: Bag_Base
	{
		displayName="$STR_A3_c_cfgvehicles_b_hmg_02_support_ocp_f0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_small_OCP_co.paa"
		};
	};
	class B_HMG_02_support_high_F: B_HMG_02_support_F
	{
		displayName="$STR_A3_c_cfgvehicles_b_hmg_02_support_high_ocp_f0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_small_OCP_co.paa"
		};
	};
	class B_HMG_02_weapon_F: Weapon_Bag_Base
	{
		displayName="$STR_A3_c_cfgvehicles_b_hmg_02_weapon_ocp_f0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_small_OCP_co.paa"
		};
	};
	class B_HMG_02_high_weapon_F: Weapon_Bag_Base
	{
		displayName="$STR_A3_A_CfgVehicles_B_HMG_02_high_weapon_ocp_F0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_small_OCP_co.paa"
		};
	};
	class B_AA_01_weapon_F: Weapon_Bag_Base
	{
		displayName="$STR_A3_B_static_AA_placeholder_ocp_F0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_small_OCP_co.paa"
		};
	};
	class B_AT_01_weapon_F: Weapon_Bag_Base
	{
		displayName="$STR_A3_B_static_AT_placeholder_ocp_F0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_small_OCP_co.paa"
		};
	};
	class Land_RallyPoint_01_base_F;
	class Respawn_RallyPoint_01_mtp_F: Land_RallyPoint_01_base_F
	{
		displayName="$STR_A3_A_CfgVehicles_Land_RallyPoint_01_base_ocp_F0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\backpack_small_OCP_co.paa"
		};
	};
	class B_Respawn_RallyPoint_01_bag_F: B_TacticalPack_mcamo
	{
		displayName="$STR_A3_A_CfgVehicles_B_Respawn_RallyPoint_01_bag_ocp_F0";
		class assembleInfo
		{
			primary=1;
			base="";
			assembleTo="Respawn_RallyPoint_01_mtp_F";
			displayName="$STR_A3_A_CfgVehicles_Land_RallyPoint_01_base_ocp_F0";
			dissasembleTo[]={};
		};
	};
	/*
	class B_CombatFatigues_01_wdl_F: B_Soldier_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_OCPW_co.paa"
		};
	};
	class B_Soldier_SL_F;
	class B_ReconFatigues_01_wdl_F: B_Soldier_SL_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_OCPW_co.paa"
		};
	};
	class B_soldier_AR_F;
	class B_CombatFatigues_01_Tshirt_wdl_F: B_soldier_AR_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\clothing1_OCPW_co.paa",
			"\A3\Characters_F_Enoch\Uniforms\Data\basicbody_wdl_CO.paa"
		};
	};
	*/
};
class cfgGlasses
{
	class G_Balaclava_light_blk_F;
	class G_Balaclava_light_mtp_F: G_Balaclava_light_blk_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\G_Balaclava_TI_OCP_F_co.paa"
		};
	};
	class G_Balaclava_light_G_mtp_F: G_Balaclava_light_mtp_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\G_Balaclava_TI_OCP_F_co.paa",
			"\A3\Characters_F\Heads\Glasses\Data\G_Combat_CA.paa"
		};
	};
};
