class cfgPatches
{
	class ax_grounded_csat_takistan_2035
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"A3_Atlas_Data_F_Atlas_Loadorder",
			"ax_grounded_soldiers_editorpreviews"
		};
		author = "Axle";
		skipwhenmissingdependencies=1;
	};
};

class cfgGlasses
{
};

class cfgWeapons
{
};

class cfgVehicles
{
	#include "sf.hpp"
	class LSV_02_unarmed_base_F;
	class LSV_02_AT_base_F;
	class LSV_02_armed_base_F;
	class Atlas_O_T_LSV_02_armed_F: LSV_02_armed_base_F
	{
		class TransportMagazines
		{
			class _xx_75Rnd_762x39_Mag_Green_F
			{
				magazine="200rnd_556x45_box_f";
				count=4;
			};
		};
	};
};

class cfgGroups
{
	class EAST
	{
		class Atlas_OPF_T_F
		{
			class SpecOps
			{
				name="$STR_A3_CfgGroups_West_BLU_F_SpecOps0";
				class O_T_reconTeam
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconTeam0";
					side=0;
					faction="Atlas_OPF_T_F";
					icon="\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					class Unit0
					{
						side=0;
						vehicle="AX_Atlas_O_T_Recon_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="AX_Atlas_O_T_Recon_M_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="AX_Atlas_O_T_Recon_medic_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="AX_Atlas_O_T_Recon_LAT_F";
						rank="CORPORAL";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=0;
						vehicle="AX_Atlas_O_T_recon_JTAC_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=0;
						vehicle="AX_Atlas_O_T_Recon_exp_F";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
				};
				class O_T_reconPatrol
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconPatrol0";
					side=0;
					faction="Atlas_OPF_T_F";
					icon="\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					class Unit0
					{
						side=0;
						vehicle="AX_Atlas_O_T_Recon_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="AX_Atlas_O_T_Recon_M_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="AX_Atlas_O_T_Recon_medic_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="AX_Atlas_O_T_Recon_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class O_T_reconSentry
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSentry0";
					side=0;
					faction="Atlas_OPF_T_F";
					icon="\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					class Unit0
					{
						side=0;
						vehicle="AX_Atlas_O_T_Recon_M_F";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="AX_Atlas_O_T_Recon_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
				};
				class O_T_ReconSquad
				{
					name="$STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_ReconSquad0";
					side=0;
					faction="Atlas_OPF_T_F";
					icon="\A3\UI_F\Data\Map\Markers\NATO\b_recon.paa";
					class Unit0
					{
						side=0;
						vehicle="AX_Atlas_O_T_Recon_TL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						vehicle="AX_Atlas_O_T_Recon_M_F";
						rank="CORPORAL";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=0;
						vehicle="AX_Atlas_O_T_Recon_medic_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="AX_Atlas_O_T_Recon_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=0;
						vehicle="AX_Atlas_O_T_Recon_LAT_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=0;
						vehicle="AX_Atlas_O_T_recon_JTAC_F";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6
					{
						side=0;
						vehicle="AX_Atlas_O_T_Recon_exp_F";
						rank="PRIVATE";
						position[]={-15,-15,0};
					};
					class Unit7
					{
						side=0;
						vehicle="Atlas_O_W_Recon_CQ_F";
						rank="CORPORAL";
						position[]={20,-20,0};
					};
				};
			};
		};
	};
};