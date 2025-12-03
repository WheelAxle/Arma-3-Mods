class CfgPatches
{
	class ax_weapons_f_usmc_futura_compat_gf
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"EF_Sounds_C",
			"lk_2035_gear"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgWeapons
{
	class arifle_SCAR_M_base_F;
	class arifle_SCAR_M_GL_base_F;
	class arifle_SCAR_M_grip_base_F;
	class AX_arifle_SCAR_M_F: arifle_SCAR_M_base_F
	{
		scope=1;
	};
	class AX_arifle_SCAR_M_GL_F: arifle_SCAR_M_GL_base_F
	{
		scope=1;
	};
	class AX_arifle_SCAR_M_grip_F: arifle_SCAR_M_grip_base_F
	{
		scope=1;
	};
};

class CfgMagazines
{
};

class CfgVehicles
{
};