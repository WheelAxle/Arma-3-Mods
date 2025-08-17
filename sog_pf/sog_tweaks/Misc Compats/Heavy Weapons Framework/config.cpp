class CfgPatches
{
	class ax_sog_tweaks_heavy_weapons_framework
	{
		addonRootClass="ax_sog_tweaks";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"WBK_HeavyWeaponsFramework"
		};
		skipWhenMissingDependencies = 1;
	};
};

class cfgWeapons
{
	class vn_lmg;
	class vn_rpd: vn_lmg
	{
		WBK_UseHeavyWeaponFramework = true;
	};
	class vn_pk: vn_lmg
	{
		WBK_UseHeavyWeaponFramework = true;
	};
	class vn_m60: vn_lmg
	{
		WBK_UseHeavyWeaponFramework = true;
	};
	class vn_mg42: vn_lmg
	{
		WBK_UseHeavyWeaponFramework = true;
	};
};