class cfgPatches
{
	class ax_characters_f_altis_grfu_aafredux
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"AAF_Greek_Lizard_Mod",
			"ax_characters_f_altis_grfu"
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