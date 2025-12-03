class cfgPatches
{
	class ax_faction_iran_grfu_ef
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"EF_Sounds_C",
			"A3_Atlas_Data_F_Atlas_Loadorder"
		};
		author = "Axle";
		skipwhenmissingdependencies = 1;
	};
};

class cfgWeapons
{
	class EF_smg_Diplomat;
	class AX_smg_Diplomat_ACO: EF_smg_Diplomat
	{
		author="$STR_EF_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn_smg";
			};
		};
	};
};

class cfgVehicles
{
	class O_Soldier_Urban_base;
	class O_crew_F;
	class EF_O_crewU_F: O_Soldier_Urban_base
	{
		editorPreview="\ax_grounded_futura\editor_previews_iran\futura\EF_O_crewU_F.jpg";
		uniformClass="AX_U_CombatUniform_PCU_uhex_02_F";
		weapons[]=
		{
			"arifle_Katiba_C_F",
			"hgun_Rook40_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"arifle_Katiba_C_F",
			"hgun_Rook40_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellRed",
			"Chemlight_red",
			"Chemlight_red"
		};
		respawnMagazines[]=
		{
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"30Rnd_65x39_caseless_green",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"HandGrenade",
			"HandGrenade",
			"SmokeShell",
			"SmokeShellRed",
			"Chemlight_red",
			"Chemlight_red"
		};
        linkedItems[]=
		{
			"Atlas_V_OCarrierRig_blk_F",
			"AX_H_HelmetCrew_O_uhex_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_urb_F"
		};
		respawnLinkedItems[]=
		{
			"Atlas_V_OCarrierRig_blk_F",
			"AX_H_HelmetCrew_O_uhex_F",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"O_NVGoggles_urb_F"
		};
	};
	class Aegis_O_BoatCrew_EF: O_crew_F
	{
		editorPreview="\ax_grounded_futura\editor_previews_iran\futura\Aegis_O_BoatCrew_EF.jpg";
		uniformClass="AX_U_Uniform_PCU_hex_02_F";
	};
	class O_Soldier_02_F;
	class O_helipilot_F: O_Soldier_02_F
	{
		weapons[]=
		{
			"AX_smg_Diplomat_ACO",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"AX_smg_Diplomat_ACO",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"EF_Diplomat_25Rnd_9x19_Mag",
			"EF_Diplomat_25Rnd_9x19_Mag",
			"EF_Diplomat_25Rnd_9x19_Mag",
			"EF_Diplomat_25Rnd_9x19_Mag",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellOrange"
		};
		respawnMagazines[]=
		{
			"EF_Diplomat_25Rnd_9x19_Mag",
			"EF_Diplomat_25Rnd_9x19_Mag",
			"EF_Diplomat_25Rnd_9x19_Mag",
			"EF_Diplomat_25Rnd_9x19_Mag",
			"SmokeShellGreen",
			"SmokeShellBlue",
			"SmokeShellOrange"
		};
	};
	class O_Pilot_F: O_helipilot_F
	{
		weapons[]=
		{
			"AX_smg_Diplomat_ACO",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"AX_smg_Diplomat_ACO",
			"Throw",
			"Put"
		};
		magazines[]=
		{
			"EF_Diplomat_25Rnd_9x19_Mag",
			"EF_Diplomat_25Rnd_9x19_Mag",
			"EF_Diplomat_25Rnd_9x19_Mag",
			"EF_Diplomat_25Rnd_9x19_Mag",
			"SmokeShellRed",
			"SmokeShellOrange",
			"SmokeShellYellow"
		};
		respawnMagazines[]=
		{
			"EF_Diplomat_25Rnd_9x19_Mag",
			"EF_Diplomat_25Rnd_9x19_Mag",
			"EF_Diplomat_25Rnd_9x19_Mag",
			"EF_Diplomat_25Rnd_9x19_Mag",
			"SmokeShellRed",
			"SmokeShellOrange",
			"SmokeShellYellow"
		};
	};
	class EF_Gyra_Antiair_Base;
	class EF_Gyra_Unarmed_Base;
	class EF_Gyra_HMG_Base;
	class EF_Gyra_Armed_Base;
	class EF_Gyra_Mortar_Base;
	class EF_O_Gyra_OPF: EF_Gyra_Unarmed_Base
	{
		crew="O_crew_F";
	};
	class EF_O_Gyra_HMG_OPF: EF_Gyra_HMG_Base
	{
		crew="O_crew_F";
	};
	class EF_O_Gyra_Armed_OPF: EF_Gyra_Armed_Base
	{
		crew="O_crew_F";
	};
	class EF_O_Gyra_Antiair_OPF: EF_Gyra_Antiair_Base
	{
		crew="O_crew_F";
	};
	class EF_O_Gyra_Mortar_OPF: EF_Gyra_Mortar_Base
	{
		crew="O_crew_F";
	};
	
	class AX_O_Gyra_urban_OPF: EF_O_Gyra_OPF
	{
		scope=1;
		scopeCurator=1;
		crew="EF_O_crewU_F";
	};
	class AX_O_Gyra_HMG_urban_OPF: EF_O_Gyra_HMG_OPF
	{
		scope=1;
		scopeCurator=1;
		crew="EF_O_crewU_F";
	};
	class AX_O_Gyra_Armed_urban_OPF: EF_O_Gyra_Armed_OPF
	{
		scope=1;
		scopeCurator=1;
		crew="EF_O_crewU_F";
	};
	class AX_O_Gyra_Antiair_urban_OPF: EF_O_Gyra_Antiair_OPF
	{
		scope=1;
		scopeCurator=1;
		crew="EF_O_crewU_F";
	};
	class AX_O_Gyra_Mortar_urban_OPF: EF_O_Gyra_Mortar_OPF
	{
		scope=1;
		scopeCurator=1;
		crew="EF_O_crewU_F";
	};
};

class CfgGroups
{
	class East
	{
		class OPF_F
		{
			class EF_UMotorized
			{
				class EF_OIA_Guard_MotorizedAirdefenseTeam
				{
					name="$STR_EF_CfgGroups_GuardMotorizedAirdefenseTeam";
					side=0;
					faction="OPF_F";
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="AX_O_Gyra_Antiair_urban_OPF";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						rank="CORPORAL";
						position[]={5,-5,0};
						vehicle="O_soldierU_AA_F";
					};
					class Unit2
					{
						side=0;
						vehicle="O_soldierU_AA_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="O_soldierU_AAA_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class EF_OIA_Guard_MotorizedAntiarmorTeam
				{
					name="$STR_EF_CfgGroups_GuardMotorizedAntiarmorTeam";
					side=0;
					faction="OPF_F";
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="AX_O_Gyra_Armed_urban_OPF";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						rank="CORPORAL";
						position[]={5,-5,0};
						vehicle="O_soldierU_AT_F";
					};
					class Unit2
					{
						side=0;
						vehicle="O_soldierU_AT_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="O_soldierU_AAT_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
				};
				class EF_OIA_Guard_MotorizedAssaultTeam
				{
					name="$STR_EF_CfgGroups_GuardMotorizedAssaultTeam";
					side=0;
					faction="OPF_F";
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="AX_O_Gyra_Armed_urban_OPF";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						rank="CORPORAL";
						position[]={5,-5,0};
						vehicle="O_soldierU_TL_F";
					};
					class Unit2
					{
						side=0;
						vehicle="O_soldierU_AR_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="O_soldierU_AT_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=0;
						vehicle="O_soldierU_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
				};
				class EF_OIA_Guard_MotorizedPatrol
				{
					name="$STR_EF_CfgGroups_GuardMotorizedPatrol";
					side=0;
					faction="OPF_F";
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="AX_O_Gyra_urban_OPF";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						rank="CORPORAL";
						position[]={5,-5,0};
						vehicle="O_soldierU_F";
					};
					class Unit2
					{
						side=0;
						vehicle="O_soldierU_M_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
				};
				class EF_OIA_Guard_MotorizedTeam
				{
					name="$STR_EF_CfgGroups_GuardMotorizedTeam";
					side=0;
					faction="OPF_F";
					icon="\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";
					class Unit0
					{
						side=0;
						vehicle="AX_O_Gyra_HMG_urban_OPF";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=0;
						rank="CORPORAL";
						position[]={5,-5,0};
						vehicle="O_soldierU_TL_F";
					};
					class Unit2
					{
						side=0;
						vehicle="O_soldierU_AR_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=0;
						vehicle="O_soldierU_AT_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=0;
						vehicle="O_soldierU_F";
						rank="PRIVATE";
						position[]={-10,-10,0};
					};
				};
			};
		};
	};
};