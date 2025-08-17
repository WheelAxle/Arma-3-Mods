class CfgPatches
{
	class ax_2035_ocp_army_replace_toh_characters
	{
		addonRootClass="ax_2035_ocp_army_replace_aegis";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"HSim_Characters_H_Woman_Uniforms"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class Uniform_Base;
	class U_B_CombatUniform_mcam_Woman: Uniform_Base
	{
		displayName="$STR_A3_combat_fatigues_female";
	};
};
