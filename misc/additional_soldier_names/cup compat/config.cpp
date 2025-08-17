class CfgPatches
{
	class ax_additional_names_cup_compat
	{
        units[]={};
		weapons[]={};
        requiredVersion=0.1;
		requiredAddons[]=
		{
			"CUP_Creatures_People_LoadOrder"
		};
        skipWhenMissingDependencies=1;
	};
};

class CfgVehicles
{
	class SoldierWB;
	class CUP_Creatures_Military_USA_Soldier_ACU_Base: SoldierWB
	{
		genericNames="AmericanMen";
    };
	class CUP_Creatures_Military_USA_Soldier_Base: SoldierWB
	{
		genericNames="AmericanMen";
    };
	class CUP_Creatures_Military_USMC_Soldier_Base: SoldierWB
	{
		genericNames="AmericanMen";
    };
	class CUP_BAF_Soldier_DPM_Base: SoldierWB
	{
		genericNames="BritishMen";
	};
	class CUP_BAF_Soldier_DDPM_Base: SoldierWB
	{
		genericNames="BritishMen";
	};
	class CUP_BAF_Soldier_MTP_Base: SoldierWB
	{
		genericNames="BritishMen";
	};
	class CUP_Creatures_Military_GER_Soldier_Base: SoldierWB
	{
	};
};