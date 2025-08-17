class CfgPatches
{
	class ax_additional_names_rhsusaf_compat
	{
        units[]={};
		weapons[]={};
        requiredVersion=0.1;
		requiredAddons[]=
		{
			"rhsusf_c_troops"
		};
        skipWhenMissingDependencies=1;
	};
};

class CfgVehicles
{
	class SoldierWB;
	class rhsusf_infantry_army_base: SoldierWB
	{
		genericNames="AmericanMen";
	};
	class rhsusf_infantry_usmc_base: rhsusf_infantry_army_base
	{
		genericNames="AmericanMen";
	};
};