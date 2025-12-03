class CfgPatches
{
	class ax_2035_ocp_army_replace_addgis
	{
		addonRootClass="ax_2035_ocp_army_replace_aegis";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"A3_AddGis_Characters_F_AddGis"
		};
		skipwhenmissingdependencies=1;
	};
};

class CfgWeapons
{
	class Uniform_Base;
	class H_HelmetB;
	class H_HelmetSpecB;
	class H_Booniehat_khk;
	class H_MilCap_ocamo;
	class V_PlateCarrier_Kerry;
	class U_I_CombatUniform;
	class U_I_CombatUniform_shortsleeve;
	class U_lxWS_SFIA_soldier_2_O;
	class U_I_E_Uniform_01_F;
	class U_I_E_Uniform_01_shortsleeve_F;
	class U_I_E_Uniform_01_coveralls_F;
	class U_B_ParadeUniform_01_US_F;
	class AddGis_H_HelmetB_Cover_mcam: H_HelmetB
	{
		displayName="$STR_A3_A_CfgWeapons_H_HelmetB_cover_ocp0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_cover_OCP_flag_co.paa"
		};
		hiddenSelectionsMaterials[]= 
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_cover.rvmat"
		};
	};
	class AddGis_H_HelmetSpecB_Cover_mcam: H_HelmetSpecB
	{
		displayName="$STR_A3_A_CfgWeapons_H_HelmetSpecB_cover_ocp0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_cover_OCP_flag_co.paa"
		};
		hiddenSelectionsMaterials[]= 
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_cover.rvmat"
		};
	};
	class AddGis_U_UniformUS_mcam_F: Uniform_Base
	{
		displayName="$STR_A3_AX_AddGis_U_UniformUS_ocp_F0";
	};
	class AddGis_U_UniformUS_02_mcam_F: Uniform_Base
	{
		displayName="$STR_A3_AX_AddGis_U_UniformUS_02_ocp_F0";
	};
	class AddGis_U_UniformUS_03_mcam_F: Uniform_Base
	{
		displayName="$STR_A3_AX_AddGis_U_UniformUS_03_ocp_F0";
	};
	class AddGis_V_AssaultCarrier_rgr_F;
	class AddGis_V_AssaultCarrier_mcam_F: AddGis_V_AssaultCarrier_rgr_F
	{
		displayName="$STR_AX_AddGis_V_AssaultCarrier_ocp_F0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\V_AssaultRig_ocp_CO.paa"
		};
	};
	class AddGis_V_AssaultCarrier_Lite_rgr_F;
	class AddGis_V_AssaultCarrier_Lite_mcam_F: AddGis_V_AssaultCarrier_Lite_rgr_F
	{
		displayName="$STR_AX_AddGis_V_AssaultCarrier_Lite_ocp_F0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\V_AssaultRig_ocp_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\V_GENPouches_ocp_CO.paa",
			"\A3_Aegis\weapons_f_aegis\Rifles\MX\Data\XMX_Base_CO.paa"
		};
	};
	class AddGis_V_AssaultCarrier_TL_rgr_F;
	class AddGis_V_AssaultCarrier_TL_mcam_F: AddGis_V_AssaultCarrier_TL_rgr_F
	{
		displayName="$STR_AX_AddGis_V_AssaultCarrier_TL_ocp_F0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\V_AssaultRig_ocp_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\V_GENPouches_ocp_CO.paa",
			"\A3_Aegis\weapons_f_aegis\Rifles\MX\Data\XMX_Base_CO.paa",
			"\A3_AddGis\characters_f_addgis\Vests\Data\Tacphone_snd_CO.paa",
			"\A3_AddGis\characters_f_addgis\Vests\Data\Tacphone_Mount_snd_CO.paa"
		};
	};
	class AddGis_V_AssaultCarrier_MG_rgr_F;
	class AddGis_V_AssaultCarrier_MG_mcam_F: AddGis_V_AssaultCarrier_MG_rgr_F
	{
		displayName="$STR_AX_AddGis_V_AssaultCarrier_MG_ocp_F0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\V_AssaultRig_ocp_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\V_GENPouches_ocp_CO.paa"
		};
	};
};

class CfgVehicles
{
	class B_Soldier_F;
	class AddGis_UniformUS_mcam_F: B_Soldier_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_AssaultUniform_Shirt_ocp_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_AssaultUniform_Pants_ocp_CO.paa",
			"\A3_AddGis\characters_f_addgis\Uniforms\Data\U_GlovesOakley_snd_CO.paa",
			"\A3_AddGis\characters_f_addgis\Uniforms\Data\U_TacBoots_snd_CO.paa"
		};
	};
	class AddGis_UniformUS_02_mcam_F: B_Soldier_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_AssaultUniform_Shirt_ocp_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_AssaultUniform_Pants_ocp_CO.paa",
			"\A3_AddGis\characters_f_addgis\Uniforms\Data\U_GlovesOakley_snd_CO.paa",
			"\A3_AddGis\characters_f_addgis\Uniforms\Data\U_TacBoots_snd_CO.paa"
		};
	};
	class AddGis_UniformUS_03_mcam_F: B_Soldier_F
	{
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\common\data\basicbody_green_co.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_AssaultUniform_Pants_ocp_CO.paa",
			"\A3_AddGis\characters_f_addgis\Uniforms\Data\U_GlovesOakley_snd_CO.paa",
			"\A3_AddGis\characters_f_addgis\Uniforms\Data\U_TacBoots_snd_CO.paa"
		};
	};
};
