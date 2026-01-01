class CfgPatches
{
	class ax_weapons_f_usmc_jca_compat
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"A3_Atlas_Data_F_Atlas_Loadorder",
			"Weapons_F_JCA_IA",
			"ax_weapons_f_usmc_futura"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgWeapons
{
	class ef_hgun_Pistol_heavy_01_coy;
	class ef_hgun_P07_coy;
	class AX_hgun_ACPC2_coy_F;
	class AX_hgun_P320_coy_F;
	class AX_hgun_Pistol_heavy_01_coy_snds_F: ef_hgun_Pistol_heavy_01_coy
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="JCA_muzzle_snds_45_tactical_black";
			};
		};
	};
	/*
	class AX_hgun_P07_coy_snds_F: ef_hgun_P07_coy
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="JCA_muzzle_snds_9MM_tactical_black";
			};
		};
	};
	*/
	class AX_hgun_ACPC2_coy_snds_F: AX_hgun_ACPC2_coy_F
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="JCA_muzzle_snds_45_tactical_black";
			};
		};
	};
	class AX_hgun_P320_coy_snds_F: AX_hgun_P320_coy_F
	{
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="JCA_muzzle_snds_9MM_tactical_black";
			};
		};
	};
};