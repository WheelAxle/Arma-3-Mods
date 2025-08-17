class CfgPatches
{
	class ax_2035_ocp_army_additions_ef
	{
		addonRootClass="ax_2035_ocp_army_additions_aegis";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"a3_elitef_characters_f"
		};
		skipWhenMissingDependencies=1;
	};
};

class cfgWeapons
{
	class H_HelmetB;
	class H_HelmetSpecB;
	class H_HelmetB_halfcover_mcamo: H_HelmetB
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
	};
	class H_HelmetSpecB_halfcover_mcamo: H_HelmetSpecB
	{
		scope=1;
		scopeCurator=1;
		scopeArsenal=1;
	};
};