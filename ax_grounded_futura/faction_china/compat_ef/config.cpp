class CfgPatches
{
	class ax_faction_china_grfu_ef
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"EF_Sounds_C",
			"A3_Aegis_Characters_F_Aegis_RF",
			"ax_faction_china_grfu"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgWeapons
{
	class EF_smg_Diplomat;
	class AX_smg_Diplomat_cn_ACO: EF_smg_Diplomat
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

class CfgVehicles
{
	class O_T_Crew_F;
	class Aegis_O_T_BoatCrew_EF: O_T_Crew_F
	{
		editorPreview="\ax_grounded_futura\editor_previews_china\expansion\Aegis_O_T_BoatCrew_EF.jpg";
		uniformClass="AX_U_O_CombatUniform_T21_T07_ghex_02_F";
	};
	class O_helipilot_F;
	class O_Pilot_F;
	class O_T_Helipilot_F: O_helipilot_F
	{
		weapons[]=
		{
			"AX_smg_Diplomat_cn_ACO",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"AX_smg_Diplomat_cn_ACO",
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
	class O_T_Pilot_F: O_Pilot_F
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
};