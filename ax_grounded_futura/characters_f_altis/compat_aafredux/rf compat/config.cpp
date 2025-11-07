class cfgPatches
{
	class ax_grounded_greenfor_altis_2035_aaf_redux_rf
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"RF_Data_Loadorder",
			"A3_Atlas_Data_F_Atlas_Loadorder"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class cfgWeapons
{
	class H_HelmetIA;
	class H_HelmetIA_sb_digital_RF: H_HelmetIA
	{
		hiddenSelectionsTextures[]=
		{
			"\GLAAF\Data\Headgear\GLAAF_Headgear_IA_co.paa",
			"\lxrf\characters_rf\headgear\data\mitznefet_arid_co.paa"
		};
	};
};

class cfgVehicles
{
};