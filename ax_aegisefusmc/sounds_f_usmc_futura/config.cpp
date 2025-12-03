class CfgPatches
{
	class ax_sounds_f_usmc_futura
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"EF_Sounds_C"
		};
		author="Axle";
	};
};

class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;
class cfgWeapons
{
	class arifle_SCAR_L_black_base_F;
	class arifle_SCAR_L_GL_black_base_F;
	class arifle_SCAR_L_short_black_base_F;
	class arifle_SCAR_L_grip_black_base_F;
	class arifle_SCAR_M_base_F: arifle_SCAR_L_black_base_F
	{
		#include "scarmacro.hpp"
	};
	class arifle_SCAR_M_GL_base_F: arifle_SCAR_L_GL_black_base_F
	{
		#include "scarmacro.hpp"
	};
	class arifle_SCAR_M_short_base_F: arifle_SCAR_L_short_black_base_F
	{
		#include "scarmacro.hpp"
	};
	class arifle_SCAR_M_grip_base_F: arifle_SCAR_L_grip_black_base_F
	{
		#include "scarmacro.hpp"
	};
	class arifle_SCAR_M_short_grip_base_F: arifle_SCAR_L_grip_black_base_F
	{
		#include "scarmacro.hpp"
	};
};