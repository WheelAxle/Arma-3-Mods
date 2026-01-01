class CfgPatches
{
	class ax_characters_f_us_grfu
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"A3_Atlas_Data_F_Atlas_Loadorder",
			"A3_AddGis_Characters_F_AddGis"
		};
	};
};

class CfgGoggles
{
	class None;
	class G_Bandanna_khk;
	class AX_G_Bandana_coy: G_Bandanna_khk
	{
		scope=1;
		scopeArsenal=1;
		author="$STR_A3_IMUS_Axle";
		displayName="$STR_A3_IMUS_G_Bandana_coy_F0";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Bootcamp\Guerrilla\Data\headgear_bandMask_khk_co.paa"
		};
		identityTypes[]={};
	};
	class G_Balaclava_light_blk_F;
	class G_Balaclava_light_mtp_F: G_Balaclava_light_blk_F
	{
		identityTypes[]={};
	};
	class G_Balaclava_light_tropic_F: G_Balaclava_light_blk_F
	{
		identityTypes[]={};
	};
	class G_Balaclava_light_wdl_F: G_Balaclava_light_blk_F
	{
		identityTypes[]={};
	};
	class G_Balaclava_light_G_mtp_F: G_Balaclava_light_mtp_F
	{
		identityTypes[]={};
	};
	class G_Balaclava_light_G_tropic_F: G_Balaclava_light_tropic_F
	{
		identityTypes[]={};
	};
	class G_Balaclava_light_G_wdl_F: G_Balaclava_light_wdl_F
	{
		identityTypes[]={};
	};
};

class CfgWeapons
{
	class NVGoggles;
	class NVGoggles_INDEP;
	class AX_NVGoggles_brn_Hidden: NVGoggles
	{
		scope=1;
		scopeArsenal=1;
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_IMUS_NVGoggles_brn_Hidden_F0";
		model="\A3\Weapons_f\binocular\nvg_proxy";
		class ItemInfo
		{
			type=616;
			uniformModel="A3\weapons_f\binocular\nvg_proxy.p3d";
			modelOff="";
			mass=20;
		};
	};
	class AX_NVGoggles_brn_hs_Hidden: AX_NVGoggles_brn_Hidden
	{
		scope=1;
		scopeArsenal=1;
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_IMUS_NVGoggles_brn_hs_Hidden_F0";
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\weapons_f\binocular\nvg_proxy.p3d";
			modelOff="\A3\Characters_F\Common\headset_light.p3d";
		};
	};
	class AX_NVGoggles_grn_Hidden: AX_NVGoggles_brn_Hidden
	{
		scope=1;
		scopeArsenal=1;
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_IMUS_NVGoggles_grn_Hidden_F0";
		picture="\A3\Weapons_F\Data\UI\gear_nvg_indep_CA.paa";
		model="\A3\Weapons_f\binocular\nvg_proxy_INDEP";
		class ItemInfo: ItemInfo
		{
			uniformModel="A3\weapons_f\binocular\nvg_proxy_INDEP.p3d";
			modelOff="";
		};
	};
    class AX_NVGoggles_brn_goggles_Hidden: NVGoggles
	{
		scope=1;
		scopeArsenal=1;
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_IMUS_NVGoggles_brn_Hidden_F0";
		model="\A3\Weapons_f\binocular\nvg_proxy";
		class ItemInfo
		{
			type=616;
			uniformModel="A3\weapons_f\binocular\nvg_proxy.p3d";
			modelOff="\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles.p3d";
			mass=20;
		};
	};
	class AX_NVGoggles_brn_gogglescvr_Hidden: NVGoggles
	{
		scope=1;
		scopeArsenal=1;
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_IMUS_NVGoggles_brn_Hidden_F0";
		model="\A3\Weapons_f\binocular\nvg_proxy";
		class ItemInfo
		{
			type=616;
			uniformModel="A3\weapons_f\binocular\nvg_proxy.p3d";
			modelOff="\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles_cover_snd_F.p3d";
			mass=20;
		};
	};
	
	class H_Booniehat_khk_hs;
	class H_HelmetB;
	class H_HelmetB_camo;
	class H_HelmetSpecB;
	class H_HelmetB_light;
	class H_HelmetSpecB_light;
	#include "w_helmets.hpp"
	class ItemCore;
	class Uniform_Base;
	class UniformItem;

	class V_TacVest_gry;
	class AX_V_TacVest_blk: V_TacVest_gry
	{
		scope=1;
		scopeArsenal=1;
		author="$STR_A3_Bohemia_Interactive";
		displayName="$STR_A3_V_TacVest_blk0";
		hiddenSelectionsTextures[]=
		{
			"\ax_alternateus\characters_f_us\vests\data\tacticalvest_black_CO.paa"
		};
	};

	class U_lxWS_C_Djella_01: Uniform_Base{class ItemInfo;};
	class U_lxWS_C_Djella_03: Uniform_Base{class ItemInfo;};
	class U_lxWS_Tak_02_A: Uniform_Base{class ItemInfo;};
	class U_lxWS_Tak_03_A: Uniform_Base{class ItemInfo;};
	class U_lxWS_Djella_02_Brown: Uniform_Base{class ItemInfo;};
	class U_C_Man_casual_4_F: Uniform_Base{class ItemInfo;};
	class U_C_Man_casual_9_F: Uniform_Base{class ItemInfo;};
	class AX_U_lxWS_C_Djella_01: U_lxWS_C_Djella_01
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="AX_C_Djella_01_lxWS";
			containerClass="Supply30";
			mass=30;
		};
	};
	class AX_U_lxWS_C_Djella_03: U_lxWS_C_Djella_03
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="AX_C_Djella_03_lxWS";
			containerClass="Supply30";
			mass=30;
		};
	};
	class AX_U_lxWS_Tak_02_A: U_lxWS_Tak_02_A
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="AX_C_Tak_02_A_lxWS";
			containerClass="Supply30";
			mass=30;
		};
	};
	class AX_U_lxWS_Tak_03_A: U_lxWS_Tak_03_A
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="AX_C_Tak_03_A_lxWS";
			containerClass="Supply30";
			mass=30;
		};
	};
	class AX_U_lxWS_Djella_02_Brown: U_lxWS_Djella_02_Brown
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="AX_I_SFIA_hireling_lxWS";
			containerClass="Supply30";
			mass=30;
		};
	};
	class AX_U_C_Man_casual_4_F: U_C_Man_casual_4_F
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="AX_C_Man_casual_4_F";
			containerClass="Supply30";
			mass=30;
		};
	};
	class AX_U_C_Man_casual_9_F: U_C_Man_casual_9_F
	{
		scope=1;
		scopeArsenal=1;
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="AX_C_Man_casual_9_F";
			containerClass="Supply30";
			mass=30;
		};
	};

};

class CfgVehicles
{
	#include "backpacks.hpp"
	class C_Djella_01_lxWS;
	class AX_C_Djella_01_lxWS: C_Djella_01_lxWS
	{
		scope=1;
		scopeCurator=0;
		modelSides[]={6};
		uniformClass="AX_U_lxWS_C_Djella_01";
	};
	class C_Djella_03_lxWS;
	class AX_C_Djella_03_lxWS: C_Djella_03_lxWS
	{
		scope=1;
		scopeCurator=0;
		modelSides[]={6};
		uniformClass="AX_U_lxWS_C_Djella_03";
	};
	class C_Tak_02_A_lxWS;
	class AX_C_Tak_02_A_lxWS: C_Tak_02_A_lxWS
	{
		scope=1;
		scopeCurator=0;
		modelSides[]={6};
		uniformClass="AX_U_lxWS_Tak_02_A";
	};
	class C_Tak_03_A_lxWS;
	class AX_C_Tak_03_A_lxWS: C_Tak_03_A_lxWS
	{
		scope=1;
		scopeCurator=1;
		uniformClass="AX_U_lxWS_Tak_03_A";
		modelSides[]={6};
	};
	class I_SFIA_hireling_lxWS;
	class AX_I_SFIA_hireling_lxWS: I_SFIA_hireling_lxWS
	{
		scope=1;
		scopeCurator=0;
		modelSides[]={6};
		uniformClass="AX_U_lxWS_Djella_02_Brown";
	};
	class C_Man_casual_4_F;
	class AX_C_Man_casual_4_F: C_Man_casual_4_F
	{
		scope=1;
		scopeCurator=0;
		modelSides[]={6};
		uniformClass="AX_U_C_Man_casual_4_F";
	};
	class C_Man_casual_9_F;
	class AX_C_Man_casual_9_F: C_Man_casual_9_F
	{
		scope=1;
		scopeCurator=0;
		modelSides[]={6};
		uniformClass="AX_U_C_Man_casual_9_F";
	};
	class B_Soldier_recon_base;
	class Atlas_B_Soldier_JSOC_base: B_Soldier_recon_base{};
};

class CfgEditorSubcategories
{
	class EdSubcat_Personnel_Infiltrators
	{
		displayName="$STR_A3_IMUS_EdSubcat_Personnel_Infil";
	};
	class EdSubcat_Personnel_AirAssault
	{
		displayName="$STR_A3_IMUS_EdSubcat_Personnel_AirAssault";
	};
};