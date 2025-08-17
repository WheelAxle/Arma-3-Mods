class CfgPatches
{
	class ax_sog_tweaks_douglas_a26
	{
		addonRootClass="ax_sog_tweaks";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"sab_sw_a26"
		};
		skipWhenMissingDependencies = 1;
	};
};

class cfgVehicles
{
	class sab_sw_a26_base;
	class sab_sw_a26: sab_sw_a26_base
	{
		crew="vn_b_men_aircrew_01";
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
};