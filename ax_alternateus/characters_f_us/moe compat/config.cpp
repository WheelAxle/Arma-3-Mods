class CfgPatches
{
	class ax_characters_f_us_grfu_moe_compat
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"MoeUnits"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgWeapons
{
	class ItemCore;
	class H_HelmetB: ItemCore
	{
		class ItemInfo;		
	};
	class HGU55P_MBU12P_Tinted;
	class JHMCS2_MBU20P_Night: HGU55P_MBU12P_Tinted
	{
		class ItemInfo;
	};
	class AX_JHMCS_MBU20P_F: JHMCS2_MBU20P_Night
	{
		scope=1;
		scopeCurator=1;
		author="$STR_A3_IMUS_Moe";
		displayName="$STR_A3_IMUS_JHMCS_MBU20P_F0";
		descriptionShort="$STR_A3_SP_noarmor";
		picture="\MoeHelmets\Images\JHMCSMBU20.paa";
		class ItemInfo: ItemInfo
		{
			modelHMDOff="\MoeHelmets\JHMCSMBU20\JHMCSMBU20.p3d";
			uniformModel="\MoeHelmets\JHMCS2MBU20\JHMCS2MBU20Night.p3d";
		};
	};
	class AX_JHMCS2_MBU20P_F: JHMCS2_MBU20P_Night
	{
		scope=1;
		scopeCurator=1;
		author="$STR_A3_IMUS_Moe";
		displayName="$STR_A3_IMUS_JHMCS2_MBU20P_F0";
		descriptionShort="$STR_A3_SP_noarmor";
		picture="\MoeHelmets\Images\JHMCS2MBU20.paa";
		class ItemInfo: ItemInfo
		{
			modelHMDOff="\MoeHelmets\JHMCS2MBU20\JHMCS2MBU20.p3d";
			uniformModel="\MoeHelmets\JHMCS2MBU20\JHMCS2MBU20Night.p3d";
		};
	};
	class CSU13BP_Base_Rolled;
	class CSU13BP_Base_NG;
	class CSU13BPTan_Base_Rolled;
	class CSU13BPTan_Base_NG;
	class AX_CSU13BP_Rolled_F: CSU13BP_Base_Rolled
	{
		scope=1;
		author="$STR_A3_IMUS_Moe";
		displayName="$STR_A3_IMUS_CSU13BP_Rolled_F0";
		picture="\ax_alternateus\characters_f_us\uniforms\data\ui\icon_U_B_FlightSuit_Rolled_ca.paa";
	};
	class AX_CSU13BP_NG_F: CSU13BP_Base_NG
	{
		scope=1;
		author="$STR_A3_IMUS_Moe";
		displayName="$STR_A3_IMUS_CSU13BP_NG_F0";
		picture="\ax_alternateus\characters_f_us\uniforms\data\ui\icon_U_B_FlightSuit_NG_ca.paa";
	};
	class AX_CSU13BP_Tan_Rolled_F: CSU13BPTan_Base_Rolled
	{
		scope=1;
		author="$STR_A3_IMUS_Moe";
		displayName="$STR_A3_IMUS_CSU13BP_Tan_Rolled_F0";
		picture="\ax_alternateus\characters_f_us\uniforms\data\ui\icon_U_B_FlightSuit_Rolled_tan_ca.paa";
	};
	class AX_CSU13BP_Tan_NG_F: CSU13BPTan_Base_NG
	{
		scope=1;
		author="$STR_A3_IMUS_Moe";
		displayName="$STR_A3_IMUS_CSU13BP_Tan_NG_F0";
		picture="\ax_alternateus\characters_f_us\uniforms\data\ui\icon_U_B_FlightSuit_NG_tan_ca.paa";
	};
	class SRU21P_LPU9P_PCU15AP;
	class AX_SRU21P_LPU9P_PCU15AP_F: SRU21P_LPU9P_PCU15AP
	{
		scope=1;
		author="$STR_A3_IMUS_Moe";
		displayName="$STR_A3_IMUS_SRU21P_LPU9P_PCU15AP_F0";
		//displayName="SRU-21/P Survival Vest (LPU-9/P / PCU-15A/P) 1";
	};
	class SRU21P_LPU9P_PCU15AP_Alt;
	class AX_SRU21P_LPU9P_PCU15AP_Alt_F: SRU21P_LPU9P_PCU15AP_Alt
	{
		scope=1;
		author="$STR_A3_IMUS_Moe";
		displayName="$STR_A3_IMUS_SRU21P_LPU9P_PCU15AP_Alt_F0";
		//displayName="SRU-21/P Survival Vest (LPU-9/P / PCU-15A/P) 2";
	};
};

class CfgVehicles
{
	class B_Soldier_05_f;
	class B_Pilot_F: B_Soldier_05_f
	{
		editorPreview="\ax_alternateus\editor_previews_us\data\B_Pilot_F.jpg";
		uniformClass="AX_CSU13BP_Rolled_F";
		backpack="B_Parachute";
		linkedItems[]= 
		{
			"AX_JHMCS2_MBU20P_F",
			"AX_SRU21P_LPU9P_PCU15AP_F",
			"G_Balaclava_TI_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]= 
		{
			"AX_JHMCS2_MBU20P_F",
			"AX_SRU21P_LPU9P_PCU15AP_F",
			"G_Balaclava_TI_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class B_Fighter_Pilot_F: B_Pilot_F
	{
		editorPreview="\ax_alternateus\editor_previews_us\data\B_Fighter_Pilot_F.jpg";
		uniformClass="AX_CSU13BP_NG_F";
		linkedItems[]= 
		{
			"AX_JHMCS_MBU20P_F",
			"AX_SRU21P_LPU9P_PCU15AP_Alt_F",
			"G_Balaclava_TI_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]= 
		{
			"AX_JHMCS_MBU20P_F",
			"AX_SRU21P_LPU9P_PCU15AP_Alt_F",
			"G_Balaclava_TI_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class B_T_Pilot_F: B_Pilot_F
	{
		editorPreview="\ax_alternateus\editor_previews_us\data\B_T_Pilot_F.jpg";
		uniformClass="AX_CSU13BP_Rolled_F";
		backpack="B_Parachute";
		linkedItems[]=
		{
			"AX_JHMCS2_MBU20P_F",
			"AX_SRU21P_LPU9P_PCU15AP_F",
			"G_Balaclava_TI_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"AX_JHMCS2_MBU20P_F",
			"AX_SRU21P_LPU9P_PCU15AP_F",
			"G_Balaclava_TI_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class B_T_Fighter_Pilot_F: B_Fighter_Pilot_F
	{
		editorPreview="\ax_alternateus\editor_previews_us\data\B_T_Fighter_Pilot_F.jpg";
		uniformClass="AX_CSU13BP_NG_F";
		linkedItems[]=
		{
			"AX_JHMCS_MBU20P_F",
			"AX_SRU21P_LPU9P_PCU15AP_Alt_F",
			"G_Balaclava_TI_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"AX_JHMCS_MBU20P_F",
			"AX_SRU21P_LPU9P_PCU15AP_Alt_F",
			"G_Balaclava_TI_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class B_W_Pilot_F: B_Pilot_F
	{
		editorPreview="\ax_alternateus\editor_previews_us\data\B_W_Pilot_F.jpg";
		uniformClass="AX_CSU13BP_Rolled_F";
		backpack="B_Parachute";
		linkedItems[]=
		{
			"AX_JHMCS2_MBU20P_F",
			"AX_SRU21P_LPU9P_PCU15AP_F",
			"G_Balaclava_TI_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"AX_JHMCS2_MBU20P_F",
			"AX_SRU21P_LPU9P_PCU15AP_F",
			"G_Balaclava_TI_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class B_W_Fighter_Pilot_F: B_Fighter_Pilot_F
	{
		editorPreview="\ax_alternateus\editor_previews_us\data\B_W_Fighter_Pilot_F.jpg";
		uniformClass="AX_CSU13BP_NG_F";
		linkedItems[]=
		{
			"AX_JHMCS_MBU20P_F",
			"AX_SRU21P_LPU9P_PCU15AP_Alt_F",
			"G_Balaclava_TI_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"AX_JHMCS_MBU20P_F",
			"AX_SRU21P_LPU9P_PCU15AP_Alt_F",
			"G_Balaclava_TI_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class B_D_Pilot_lxWS: B_T_Pilot_F
	{
		editorPreview="\ax_alternateus\editor_previews_us\data\B_D_Pilot_lxWS.jpg";
		uniformClass="AX_CSU13BP_Tan_Rolled_F";
		backpack="B_Parachute";
		linkedItems[]=
		{
			"AX_JHMCS2_MBU20P_F",
			"AX_SRU21P_LPU9P_PCU15AP_F",
			"G_Balaclava_TI_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"AX_JHMCS2_MBU20P_F",
			"AX_SRU21P_LPU9P_PCU15AP_F",
			"G_Balaclava_TI_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class B_D_Fighter_Pilot_F: B_Fighter_Pilot_F
	{
		editorPreview="\ax_alternateus\editor_previews_us\data\B_D_Fighter_Pilot_F.jpg";
		uniformClass="AX_CSU13BP_Tan_NG_F";
		linkedItems[]=
		{
			"AX_JHMCS_MBU20P_F",
			"AX_SRU21P_LPU9P_PCU15AP_Alt_F",
			"G_Balaclava_TI_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"AX_JHMCS_MBU20P_F",
			"AX_SRU21P_LPU9P_PCU15AP_Alt_F",
			"G_Balaclava_TI_blk_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};

	class B_A_Pilot_F: B_Pilot_F
	{
		uniformClass="U_B_PilotCoveralls";
	};
};
