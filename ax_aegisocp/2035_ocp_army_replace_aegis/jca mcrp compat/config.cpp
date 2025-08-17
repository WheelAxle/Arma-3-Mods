class CfgPatches
{
	class ax_2035_ocp_army_replace_jca_mcrp
	{
		addonRootClass="ax_2035_ocp_army_replace_aegis";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"vests_f_JCA_MCRP_MTP_MCRP"
		};
		skipwhenmissingdependencies=1;
	};
};
class CfgWeapons
{
	class V_CarrierRigKBT_01_base_F;
	class V_CarrierRigKBT_01_light_base_F;
	class V_CarrierRigKBT_01_heavy_base_F;
	class JCA_V_CarrierRigKBT_01_combat_base_F;
	class JCA_V_CarrierRigKBT_01_command_base_F;
	class JCA_V_CarrierRigKBT_01_compact_base_F;
	class JCA_V_CarrierRigKBT_01_CQB_base_F;
	class JCA_V_CarrierRigKBT_01_crew_base_F;
	class JCA_V_CarrierRigKBT_01_holster_base_F;
	class JCA_V_CarrierRigKBT_01_recon_base_F;
	class JCA_V_CarrierRigKBT_01_tactical_base_F;
	class JCA_V_CarrierRigKBT_01_MTP_arid_F: V_CarrierRigKBT_01_base_F
	{
		displayName="Modular Carrier Vest (OCP)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CarrierRigKBT_01_OCP_CO.paa"
		};
	};
	class JCA_V_CarrierRigKBT_01_light_MTP_arid_F: V_CarrierRigKBT_01_light_base_F
	{
		displayName="Modular Carrier Lite (OCP)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CarrierRigKBT_01_OCP_CO.paa"
		};
	};
	class JCA_V_CarrierRigKBT_01_heavy_MTP_arid_F: V_CarrierRigKBT_01_heavy_base_F
	{
		displayName="Modular Carrier GL Rig (OCP)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CarrierRigKBT_01_OCP_CO.paa"
		};
	};
	class JCA_V_CarrierRigKBT_01_combat_MTP_arid_F: JCA_V_CarrierRigKBT_01_combat_base_F
	{
		displayName="Modular Carrier Combat Rig (OCP)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CarrierRigKBT_01_OCP_CO.paa",
			"",
			""
		};
	};
	class JCA_V_CarrierRigKBT_01_command_MTP_arid_F: JCA_V_CarrierRigKBT_01_command_base_F
	{
		displayName="Modular Carrier Command Rig (OCP)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CarrierRigKBT_01_OCP_CO.paa",
			"",
			"",
			""
		};
	};
	class JCA_V_CarrierRigKBT_01_compact_MTP_arid_F: JCA_V_CarrierRigKBT_01_compact_base_F
	{
		displayName="Modular Carrier Compact Vest (OCP)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CarrierRigKBT_01_OCP_CO.paa",
			"",
			""
		};
	};
	class JCA_V_CarrierRigKBT_01_CQB_MTP_arid_F: JCA_V_CarrierRigKBT_01_CQB_base_F
	{
		displayName="Modular Carrier CQB Rig (OCP)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CarrierRigKBT_01_OCP_CO.paa",
			"",
			""
		};
	};
	class JCA_V_CarrierRigKBT_01_crew_MTP_arid_F: JCA_V_CarrierRigKBT_01_crew_base_F
	{
		displayName="Modular Carrier Crew Vest (OCP)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CarrierRigKBT_01_OCP_CO.paa",
			""
		};
	};
	class JCA_V_CarrierRigKBT_01_holster_MTP_arid_F: JCA_V_CarrierRigKBT_01_holster_base_F
	{
		displayName="Modular Carrier Holster (OCP)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CarrierRigKBT_01_OCP_CO.paa"
		};
	};
	class JCA_V_CarrierRigKBT_01_recon_MTP_arid_F: JCA_V_CarrierRigKBT_01_recon_base_F
	{
		displayName="Modular Carrier Recon Rig (OCP)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CarrierRigKBT_01_OCP_CO.paa",
			"",
			""
		};
	};
	class JCA_V_CarrierRigKBT_01_tactical_MTP_arid_F: JCA_V_CarrierRigKBT_01_tactical_base_F
	{
		displayName="Modular Carrier Tactical Rig (OCP)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\CarrierRigKBT_01_OCP_CO.paa",
			"",
			"",
			"",
			""
		};
	};
};

class cfgVehicles
{
	class Vest_Base_F;
	class Vest_V_CarrierRigKBT_01_MTP_arid_F: Vest_Base_F
	{
	};
	class Vest_V_CarrierRigKBT_01_light_MTP_arid_F: Vest_V_CarrierRigKBT_01_MTP_arid_F
	{
		displayName="Modular Carrier Lite (OCP)";
	};
	class Vest_V_CarrierRigKBT_01_heavy_MTP_arid_F: Vest_V_CarrierRigKBT_01_MTP_arid_F
	{
		displayName="Modular Carrier GL Rig (OCP)";
	};
	class Vest_JCA_V_CarrierRigKBT_01_combat_MTP_arid_F: Vest_V_CarrierRigKBT_01_MTP_arid_F
	{
		displayName="Modular Carrier Combat Rig (OCP)";
	};
	class Vest_JCA_V_CarrierRigKBT_01_command_MTP_arid_F: Vest_V_CarrierRigKBT_01_MTP_arid_F
	{
		displayName="Modular Carrier Command Rig (OCP)";
	};
	class Vest_JCA_V_CarrierRigKBT_01_compact_MTP_arid_F: Vest_V_CarrierRigKBT_01_MTP_arid_F
	{
		displayName="Modular Carrier Compact Vest (OCP)";
	};
	class Vest_JCA_V_CarrierRigKBT_01_CQB_MTP_arid_F: Vest_V_CarrierRigKBT_01_MTP_arid_F
	{
		displayName="Modular Carrier CQB Rig (OCP)";
	};
	class Vest_JCA_V_CarrierRigKBT_01_crew_MTP_arid_F: Vest_V_CarrierRigKBT_01_MTP_arid_F
	{
		displayName="Modular Carrier Crew Vest (OCP)";
	};
	class Vest_JCA_V_CarrierRigKBT_01_holster_MTP_F: Vest_V_CarrierRigKBT_01_MTP_arid_F
	{
		displayName="Modular Carrier Holster (OCP)";
	};
	class Vest_JCA_V_CarrierRigKBT_01_recon_MTP_arid_F: Vest_V_CarrierRigKBT_01_MTP_arid_F
	{
		displayName="Modular Carrier Recon Rig (OCP)";
	};
	class Vest_JCA_V_CarrierRigKBT_01_tactical_MTP_arid_F: Vest_V_CarrierRigKBT_01_MTP_arid_F
	{
		displayName="Modular Carrier Tactical Rig (OCP)";
	};
};
