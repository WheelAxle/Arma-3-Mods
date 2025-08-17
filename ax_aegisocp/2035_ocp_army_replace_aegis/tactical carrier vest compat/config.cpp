class CfgPatches
{
	class ax_2035_ocp_army_replace_carrier_vest
	{
		addonRootClass="ax_2035_ocp_army_replace_aegis";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"PUP_INF_V"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class V_InfiltratorRig_Base_F;
	class PUP_V_InfiltratorRig_MTP_F: V_InfiltratorRig_Base_F
	{
		displayName="Tactical Carrier Vest (OCP)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\V_InfiltratorRig_01_OCP_CO.paa"
		};
	};
	class V_InfiltratorRig_Lite_Base_F;
	class PUP_V_InfiltratorRig_Lite_MTP_F: V_InfiltratorRig_Lite_Base_F
	{
		displayName="Tactical Carrier Lite Rig (OCP)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\V_InfiltratorRig_01_OCP_CO.paa",
			"\INF_Vests\data\textures\V_InfiltratorRig_02_GRN_CO.paa"
		};
	};
	class V_InfiltratorRig_Crew_Base_F;
	class PUP_V_InfiltratorRig_Crew_MTP_F: V_InfiltratorRig_Crew_Base_F
	{
		displayName="Tactical Carrier Compact Rig (OCP)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\V_InfiltratorRig_01_OCP_CO.paa",
			"\INF_Vests\data\textures\V_InfiltratorRig_02_GRN_CO.paa"
		};
	};
	class V_InfiltratorRig_CQB_Base_F;
	class PUP_V_InfiltratorRig_CQB_MTP_F: V_InfiltratorRig_CQB_Base_F
	{
		displayName="Tactical Carrier CQB Rig (OCP)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\V_InfiltratorRig_01_OCP_CO.paa",
			"\INF_Vests\data\textures\V_InfiltratorRig_02_GRN_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\V_InfiltratorRig_03_OCP_CO.paa"
		};
	};
	class V_InfiltratorRig_GL_Base_F;
	class PUP_V_InfiltratorRig_GL_MTP_F: V_InfiltratorRig_GL_Base_F
	{
		displayName="Tactical Carrier GL Rig (OCP)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\V_InfiltratorRig_01_OCP_CO.paa",
			"\INF_Vests\data\textures\V_InfiltratorRig_02_GRN_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\V_InfiltratorRig_03_OCP_CO.paa"
		};
	};
	class V_InfiltratorRig_EOD_Base_F;
	class PUP_V_InfiltratorRig_EOD_MTP_F: V_InfiltratorRig_EOD_Base_F
	{
		displayName="Tactical Carrier EOD Rig (OCP)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\V_InfiltratorRig_01_OCP_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\V_InfiltratorRig_03_OCP_CO.paa"
		};
	};
};
class cfgVehicles
{
	class Vest_PUP_V_InfiltratorRig_AAF_F;
	class Vest_PUP_V_InfiltratorRig_MTP_F: Vest_PUP_V_InfiltratorRig_AAF_F
	{
		displayName="Tactical Carrier Vest (OCP)";
	};
	class Vest_PUP_V_InfiltratorRig_Lite_AAF_F;
	class Vest_PUP_V_InfiltratorRig_Lite_MTP_F: Vest_PUP_V_InfiltratorRig_Lite_AAF_F
	{
		displayName="Tactical Carrier Lite Rig (OCP)";
	};
	class Vest_PUP_V_InfiltratorRig_Crew_AAF_F;
	class Vest_PUP_V_InfiltratorRig_Crew_MTP_F: Vest_PUP_V_InfiltratorRig_Crew_AAF_F
	{
		displayName="Tactical Carrier Compact Rig (OCP)";
	};
	class Vest_PUP_V_InfiltratorRig_CQB_AAF_F;
	class Vest_PUP_V_InfiltratorRig_CQB_MTP_F: Vest_PUP_V_InfiltratorRig_CQB_AAF_F
	{
		displayName="Tactical Carrier CQB Rig (OCP)";
	};
	class Vest_PUP_V_InfiltratorRig_GL_AAF_F;
	class Vest_PUP_V_InfiltratorRig_GL_MTP_F: Vest_PUP_V_InfiltratorRig_GL_AAF_F
	{
		displayName="Tactical Carrier GL Rig (OCP)";
	};
	class Vest_PUP_V_InfiltratorRig_EOD_AAF_F;
	class Vest_PUP_V_InfiltratorRig_EOD_MTP_F: Vest_PUP_V_InfiltratorRig_EOD_AAF_F
	{
		displayName="Tactical Carrier EOD Rig (OCP)";
	};
};
