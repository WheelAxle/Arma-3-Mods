class cfgPatches
{
	class ax_grounded_greenfor_altis_2035_aafredux
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"AAF_Greek_Lizard_Mod",
			"ax_grounded_greenfor_altis_2035"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class cfgWeapons
{
	class H_HelmetB;
	class H_HelmetIA: H_HelmetB
	{
		hiddenSelectionsTextures[]=
		{
			"\GLAAF\Data\Headgear\GLAAF_Headgear_IA_co.paa"
		};
	};
};

class cfgVehicles
{
};