class CfgPatches
{
	class ax_2035_ocp_army_additions_reconhood
	{
		addonRootClass="ax_2035_ocp_army_replace_aegis";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"ReconCloaks_Characters_Headgear"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class HelmetBase;
	class ReconCloaks_H_Hood_mcam;
	class ReconCloaks_H_Hood_ocp: ReconCloaks_H_Hood_mcam
	{
		author="$STR_A3_AX_AXLE";
		displayName="$STR_A3_AX_CfgWeapons_ReconHood_ocp0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\H_ReconCloak_OCP_CO.paa"
		};
	};
	class ReconCloaks_H_Hood_Cap_mcam;
	class ReconCloaks_H_Hood_Cap_ocp: ReconCloaks_H_Hood_Cap_mcam
	{
		author="$STR_A3_AX_AXLE";
		displayName="$STR_A3_AX_CfgWeapons_ReconHood_Cap_ocp0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\H_ReconCloak_OCP_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\H_PatrolCap_OCP_CO.paa"
		};
	};
	class ReconCloaks_NV_Hood_Down_mcam;
	class ReconCloaks_NV_Hood_Down_ocp: ReconCloaks_NV_Hood_Down_mcam
	{
		author="$STR_A3_AX_AXLE";
		displayName="$STR_A3_AX_CfgWeapons_ReconHood_Down_ocp0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\H_ReconCloak_OCP_CO.paa"
		};
	};
	class ReconCloaks_H_SniperHood_mcam;
	class ReconCloaks_H_SniperHood_ocp: ReconCloaks_H_SniperHood_mcam
	{
		author="$STR_A3_AX_AXLE";
		displayName="$STR_A3_AX_CfgWeapons_SniperHood_ocp0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\H_ReconCloak_OCP_CO.paa",
			"\a3\characters_f_mark\common\data\ghillie_threads_ard_ca.paa"
		};
	};
	class ReconCloaks_H_SniperHoodSpec_mcam;
	class ReconCloaks_H_SniperHoodSpec_ocp: ReconCloaks_H_SniperHoodSpec_mcam
	{
		author="$STR_A3_AX_AXLE";
		displayName="$STR_A3_AX_CfgWeapons_SniperHood_Scrim_ocp0";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\H_ReconCloak_OCP_CO.paa",
			"\ReconCloaks\reconcloaks_characters\Headgear\Data\ghillie_leaves_mcam_CA.paa"
		};
	};
};
class cfgVehicles
{
};
