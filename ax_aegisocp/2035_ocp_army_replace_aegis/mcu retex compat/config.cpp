class CfgPatches
{
	class ax_2035_ocp_army_replace_mcuretex
	{
		addonRootClass="ax_2035_ocp_army_replace_aegis";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"PrO_EF_Retex_Config"
		};
		skipWhenMissingDependencies=1;
	};
};

class cfgWeapons
{
	class Uniform_Base;
	class PrO_EF_U_B_MarineCombatUniform_MTP_1: Uniform_Base
	{
		displayName="$STR_AX_EF_U_B_MarineCombatUniform_OCP_1";
	};
	class PrO_EF_U_B_MarineCombatUniform_MTP_2: Uniform_Base
	{
		displayName="$STR_AX_EF_U_B_MarineCombatUniform_OCP_2";
	};
	class PrO_EF_U_B_MarineCombatUniform_MTP_3: Uniform_Base
	{
		displayName="$STR_AX_EF_U_B_MarineCombatUniform_OCP_3";
	};
	class PrO_EF_U_B_MarineCombatUniform_MTP_4: Uniform_Base
	{
		displayName="$STR_AX_EF_U_B_MarineCombatUniform_OCP_4";
	};
	class PrO_EF_U_B_MarineCombatUniform_MTP_5: Uniform_Base
	{
		displayName="$STR_AX_EF_U_B_MarineCombatUniform_OCP_5";
	};
	class PrO_EF_U_B_MarineCombatUniform_MTP_6: Uniform_Base
	{
		displayName="$STR_AX_EF_U_B_MarineCombatUniform_OCP_6";
	};
};

class cfgVehicles
{
	class B_Soldier_base_F;
	class PrO_EF_B_Marine_MTP_Base_1: B_Soldier_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\US_Marines_FROG_ocp_co.paa"
		};
	};
	class PrO_EF_B_Marine_MTP_Base_2: PrO_EF_B_Marine_MTP_Base_1
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\US_Marines_FROG_ocp_co.paa"
		};
	};
	class PrO_EF_B_Marine_MTP_Base_3: PrO_EF_B_Marine_MTP_Base_1
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\US_Marines_FROG_ocp_co.paa"
		};
	};
	class PrO_EF_B_Marine_MTP_Base_4: PrO_EF_B_Marine_MTP_Base_1
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\US_Marines_FROG_ocp_co.paa"
		};
	};
	class PrO_EF_B_Marine_MTP_Base_5: PrO_EF_B_Marine_MTP_Base_1
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\US_Marines_FROG_ocp_co.paa"
		};
	};
	class PrO_EF_B_Marine_MTP_Base_6: PrO_EF_B_Marine_MTP_Base_1
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\US_Marines_FROG_ocp_co.paa"
		};
	};
};