class CfgPatches
{
	class ax_characters_f_usmc_futura_addgis_compat
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_AddGis_Characters_F_AddGis"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgWeapons
{
	class UniformItem;
	class Uniform_Base;
	class AX_U_B_MC_UniformUS_wdl_F: Uniform_Base
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_U_B_MC_UniformUS_wdl_F0";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\ui\icon_U_B_MC_UniformUS_wdl_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_AssaultUniform_Pants_mpw_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="AX_uniform_B_MC_UniformUS_wdl_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class AX_U_B_MC_UniformUS_des_F: Uniform_Base
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_U_B_MC_UniformUS_des_F0";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\ui\icon_U_B_MC_UniformUS_des_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_AssaultUniform_Pants_mpw_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="AX_uniform_B_MC_UniformUS_des_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class AX_U_B_MC_UniformUS_02_wdl_F: Uniform_Base
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_U_B_MC_UniformUS_02_wdl_F0";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\ui\icon_U_B_MC_UniformUS_02_wdl_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_AssaultUniform_Pants_mpw_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="AX_uniform_B_MC_UniformUS_02_wdl_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class AX_U_B_MC_UniformUS_02_des_F: Uniform_Base
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_U_B_MC_UniformUS_02_des_F0";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\ui\icon_U_B_MC_UniformUS_02_des_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_AssaultUniform_Pants_mpw_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="AX_uniform_B_MC_UniformUS_02_des_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class AX_U_B_MC_UniformUS_03_wdl_F: Uniform_Base
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_U_B_MC_UniformUS_03_wdl_F0";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\ui\icon_U_B_MC_UniformUS_03_wdl_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_AssaultUniform_Pants_mpw_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="AX_uniform_B_MC_UniformUS_03_wdl_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class AX_U_B_MC_UniformUS_03_des_F: Uniform_Base
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_U_B_MC_UniformUS_03_des_F0";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\ui\icon_U_B_MC_UniformUS_03_des_F_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_AssaultUniform_Pants_mpw_CO.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="AX_uniform_B_MC_UniformUS_03_des_F";
			containerClass="Supply40";
			mass=40;
		};
	};
	class AddGis_V_AssaultCarrier_rgr_F;
	class AddGis_V_AssaultCarrier_Lite_rgr_F;
	class AddGis_V_AssaultCarrier_MG_rgr_F;
	class AddGis_V_AssaultCarrier_TL_rgr_F;
	class AX_V_AssaultCarrier_coy_F: AddGis_V_AssaultCarrier_rgr_F
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_AssaultCarrier_coy_F0";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\vests\data\ui\icon_V_AssaultCarrier_coy_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\V_AssaultRig_coy_CO.paa"
		};
	};
	class AX_V_AssaultCarrier_Lite_coy_F: AddGis_V_AssaultCarrier_Lite_rgr_F
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_AssaultCarrier_Lite_coy_F0";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\vests\data\ui\icon_V_AssaultCarrier_Lite_coy_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\V_AssaultRig_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\V_GENPouches_coy_CO.paa",
			"\ef\ef_weapons\mx\data\arifle_mx_coy_co.paa"
		};
	};
	class AX_V_AssaultCarrier_MG_coy_F: AddGis_V_AssaultCarrier_MG_rgr_F
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_AssaultCarrier_MG_coy_F0";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\vests\data\ui\icon_V_AssaultCarrier_MG_coy_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\V_AssaultRig_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\V_GENPouches_coy_CO.paa"
		};
	};
	class AX_V_AssaultCarrier_TL_coy_F: AddGis_V_AssaultCarrier_TL_rgr_F
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_AssaultCarrier_TL_coy_F0";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\vests\data\ui\icon_V_AssaultCarrier_TL_coy_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\V_AssaultRig_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\V_GENPouches_coy_CO.paa",
			"\ef\ef_weapons\mx\data\arifle_mx_coy_co.paa",
			"\A3_AddGis\characters_f_addgis\Vests\Data\Tacphone_snd_CO.paa",
			"\A3_AddGis\characters_f_addgis\Vests\Data\Tacphone_Mount_snd_CO.paa"
		};
	};
};

class CfgVehicles
{
	class AddGis_UniformUS_mcam_F;
	class AddGis_UniformUS_02_mcam_F;
	class AddGis_UniformUS_03_mcam_F;
	class AX_uniform_B_MC_UniformUS_wdl_F: AddGis_UniformUS_mcam_F
	{
		uniformClass="AX_U_B_MC_UniformUS_wdl_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_AssaultUniform_shirt_mpw_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_AssaultUniform_Pants_mpw_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_GlovesOakley_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_TacBoots_coy_CO.paa"
		};
	};
	class AX_uniform_B_MC_UniformUS_des_F: AddGis_UniformUS_mcam_F
	{
		uniformClass="AX_U_B_MC_UniformUS_des_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_AssaultUniform_shirt_mpd_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_AssaultUniform_Pants_mpd_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_GlovesOakley_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_TacBoots_coy_CO.paa"
		};
	};
	class AX_uniform_B_MC_UniformUS_02_wdl_F: AddGis_UniformUS_02_mcam_F
	{
		uniformClass="AX_U_B_MC_UniformUS_02_wdl_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_AssaultUniform_shirt_mpw_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_AssaultUniform_Pants_mpw_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_GlovesOakley_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_TacBoots_coy_CO.paa"
		};
	};
	class AX_uniform_B_MC_UniformUS_02_des_F: AddGis_UniformUS_02_mcam_F
	{
		uniformClass="AX_U_B_MC_UniformUS_02_des_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_AssaultUniform_shirt_mpd_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_AssaultUniform_Pants_mpd_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_GlovesOakley_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_TacBoots_coy_CO.paa"
		};
	};
	class AX_uniform_B_MC_UniformUS_03_wdl_F: AddGis_UniformUS_03_mcam_F
	{
		uniformClass="AX_U_B_MC_UniformUS_03_wdl_F";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_enoch\uniforms\data\basicbody_wdl_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_AssaultUniform_Pants_mpw_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_GlovesOakley_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_TacBoots_coy_CO.paa"
		};
	};
	class AX_uniform_B_MC_UniformUS_03_des_F: AddGis_UniformUS_03_mcam_F
	{
		uniformClass="AX_U_B_MC_UniformUS_03_des_F";
		hiddenSelectionsTextures[]=
		{
			"\lxws\characters_f_lxws\data\NATO\basicbody_sand_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_AssaultUniform_Pants_mpd_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_GlovesOakley_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\uniforms\data\U_TacBoots_coy_CO.paa"
		};
	};
};