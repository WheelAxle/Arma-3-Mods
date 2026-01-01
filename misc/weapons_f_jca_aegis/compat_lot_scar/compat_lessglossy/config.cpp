class CfgPatches
{
	class ax_aegis_lot_scar_glossy_compat
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"ax_less_glossy_weapons_aegis"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class cfgWeapons
{
	class Rifle_Base_F;
	class arifle_SCAR_L_base_F: Rifle_Base_F
	{
		hiddenSelectionsMaterials[]=
		{
			"\lot_aaf_scar_l\Data\SCAR_L_01.rvmat",
			"\lot_aaf_scar_l\Data\SCAR_L_02.rvmat"
		};
	};
	class arifle_SCAR_L_GL_base_F: arifle_SCAR_L_base_F
	{
		hiddenSelectionsMaterials[]=
		{
			"\lot_aaf_scar_l\Data\SCAR_L_01.rvmat",
			"\lot_aaf_scar_l\Data\SCAR_L_02.rvmat",
			"\lot_aaf_scar_l\Data\sa80_f_gl.rvmat"
		};
	};
	class arifle_SCAR_base_F: Rifle_Base_F
	{
		hiddenSelectionsMaterials[]=
		{
			"\lot_aaf_scar\Data\SCAR_01.rvmat",
			"\lot_aaf_scar\Data\SCAR_02.rvmat"
		};
    };
	class arifle_SCAR_GL_base_F: arifle_SCAR_base_F
	{
		hiddenSelectionsMaterials[]=
		{
			"\lot_aaf_scar\Data\SCAR_01.rvmat",
			"\lot_aaf_scar\Data\SCAR_02.rvmat",
			"\lot_aaf_scar\Data\sa80_f_gl.rvmat"
		};
    };
};