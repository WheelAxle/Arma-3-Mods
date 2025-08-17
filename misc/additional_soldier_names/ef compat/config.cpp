class CfgPatches
{
	class ax_additional_names_ef_compat
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
            "EF_Sounds_C"
		};
        skipwhenmissingdependencies=1;
	};
};

class CfgVehicles
{
	class SoldierWB;
	class EF_B_Marine_Des_Base_1: SoldierWB
	{
		genericNames="AmericanMen";
	};
};