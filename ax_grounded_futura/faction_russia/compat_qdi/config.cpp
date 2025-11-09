class CfgPatches
{
	class ax_weapons_f_russia_grfu_qdi_compat
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"A3_Atlas_Data_F_Atlas_Loadorder",
			"ax_weapons_f_russia_grfu",
			"Weapons_F_JCA_IA"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgWeapons
{
	class qav_amb17;
	class qav_amb17_taiga;
	class AX_amb17_bvo_snds_pointer_F: qav_amb17
	{
		author="$STR_A3_GRFU_Axle";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="Aegis_optic_1p87";
			};
		};
	};
	class AX_amb17_taiga_bvo_snds_pointer_F: qav_amb17_taiga
	{
		author="$STR_A3_GRFU_Axle";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="Aegis_optic_1p87";
			};
		};
	};
};

class cfgVehicles
{
/*
    class O_R_Patrol_Soldier_A_F: O_R_Soldier_Base_F
	{
		weapons[]=
		{
			"AX_arifle_AK12U_lush_bvo_snds_pointer_F",
			"hgun_Rook40_F",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"AX_arifle_AK12U_lush_bvo_snds_pointer_F",
			"hgun_Rook40_F",
			"Binocular",
			"Throw",
			"Put"
		};
	};
    class O_R_Patrol_Soldier_AR2_F: O_R_Soldier_AR_F
	{
		weapons[]=
		{
			"AX_pkp_mg_bvo_snds_F",
			"hgun_Rook40_F",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"AX_pkp_mg_bvo_snds_F",
			"hgun_Rook40_F",
			"Binocular",
			"Throw",
			"Put"
		};
	};
    class O_R_Patrol_Soldier_AR_F: O_R_Soldier_AR_F
	{
		weapons[]=
        {
            "AX_arifle_AK12_lush_bvo_snds_pointer_BI_F",
            "hgun_Rook40_F",
            "Binocular",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "AX_arifle_AK12_lush_bvo_snds_pointer_BI_F",
            "hgun_Rook40_F",
            "Binocular",
            "Throw",
            "Put"
        };
	};
    class O_R_Patrol_Soldier_Medic: O_R_medic_F
	{
		weapons[]=
		{
			"AX_arifle_AK12_lush_bvo_snds_pointer_F",
			"hgun_Rook40_F",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"AX_arifle_AK12_lush_bvo_snds_pointer_F",
			"hgun_Rook40_F",
			"Binocular",
			"Throw",
			"Put"
		};
	};
    class O_R_Patrol_Soldier_Engineer_F: O_R_Soldier_Base_F
	{
		weapons[]=
		{
			"AX_arifle_AK12U_lush_bvo_snds_pointer_F",
			"hgun_Rook40_F",
			"LaserDesignator_01_khk_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"AX_arifle_AK12U_lush_bvo_snds_pointer_F",
			"hgun_Rook40_F",
			"LaserDesignator_01_khk_F",
			"Throw",
			"Put"
		};
	};
    class O_R_Patrol_Soldier_GL_F: O_R_Soldier_GL_F
	{
		weapons[]=
		{
			"AX_arifle_AK12_GL_lush_bvo_snds_pointer_F",
			"hgun_Rook40_F",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"AX_arifle_AK12_GL_lush_bvo_snds_pointer_F",
			"hgun_Rook40_F",
			"Binocular",
			"Throw",
			"Put"
		};
	};
    class O_R_Patrol_Soldier_M_F: O_R_soldier_M_F
	{
	};
    class O_R_Patrol_Soldier_M2_F: O_R_soldier_M_F
	{
		weapons[]=
		{
			"AX_srifle_DMR_04_green_DMS_weathered_Kir_F",
			"hgun_Rook40_F",
			"RangeFinder",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"AX_srifle_DMR_04_green_DMS_weathered_Kir_F",
			"hgun_Rook40_F",
			"RangeFinder",
			"Throw",
			"Put"
		};
	};
    class O_R_Patrol_Soldier_LAT_F: O_R_Soldier_LAT_F
	{
		weapons[]=
		{
			"AX_arifle_AK12_lush_bvo_snds_pointer_F",
			"hgun_Rook40_F",
			"launch_RPG32_green_F",
			"RangeFinder",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"AX_arifle_AK12_lush_bvo_snds_pointer_F",
			"hgun_Rook40_F",
			"launch_RPG32_green_F",
			"RangeFinder",
			"Throw",
			"Put"
		};
	};
    class O_R_Patrol_Soldier_TL_F: O_R_Soldier_TL_F
	{
		weapons[]=
		{
			"AX_arifle_AK12_GL_lush_bvo_snds_pointer_F",
			"hgun_Rook40_F",
			"RangeFinder",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"AX_arifle_AK12_GL_lush_bvo_snds_pointer_F",
			"hgun_Rook40_F",
			"RangeFinder",
			"Throw",
			"Put"
		};
	};
*/
};