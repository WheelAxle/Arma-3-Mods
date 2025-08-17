class CfgPatches
{
	class ax_additional_names_ws_compat
	{
        units[]={};
		weapons[]={};
        requiredVersion=0.1;
		requiredAddons[]=
		{
			"data_f_lxWS_Loadorder"
		};
        skipWhenMissingDependencies=1;
	};
};

class CfgVehicles
{
	class SoldierWB;
	class B_CTRG_Soldier_Exp_tna_F;
	class B_CTRG_Soldier_AR_tna_F;
	class B_CTRG_Soldier_JTAC_tna_F;
	class B_CTRG_Soldier_M_tna_F;
	class B_CTRG_Soldier_Medic_tna_F;
	class B_ION_Soldier_SG_lxWS;
	class B_CTRG_Soldier_tna_F;
	class B_CTRG_Soldier_LAT2_tna_F;
	class B_CTRG_Soldier_TL_tna_F;
	class B_soldier_UAV_F;
	class B_soldier_AR_F;
	class B_medic_F;
	class B_crew_F;
	class B_engineer_F;
	class B_Soldier_GL_F;
	class B_Helipilot_F;
	class B_officer_F;
	class B_soldier_repair_F;
	class B_soldier_LAT2_F;
	class B_Soldier_lite_F;
	class B_Soldier_F;
	class B_Soldier_TL_F;
	#include "ctrg.hpp"
	#include "una.hpp"
};