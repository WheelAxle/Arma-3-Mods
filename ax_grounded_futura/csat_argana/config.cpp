class CfgPatches
{
	class ax_grounded_csat_argana_2035
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"A3_Atlas_Data_F_Atlas_Loadorder",
			"ax_grounded_soldiers_editorpreviews"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgVehicles
{
	#include "af.hpp"
	#include "af_conscript.hpp"
	class APC_Wheeled_02_base_F;
	class APC_Wheeled_02_base_v2_F: APC_Wheeled_02_base_F
	{
		class Turrets;
	};
	class APC_Wheeled_02_hmg_base_lxWS: APC_Wheeled_02_base_v2_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
			class mg_station;
		};
	};
	class Aegis_O_A_APC_Wheeled_02_hmg_lxWS: APC_Wheeled_02_hmg_base_lxWS
	{
		crew="O_A_crew_F";
		typicalCargo[]=
		{
			"O_A_crew_F"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
			class mg_station: mg_station
			{
				gunnerType="O_A_crew_F";
			};
		};
	};
	class APC_Wheeled_02_unarmed_base_lxws;
	class Aegis_O_A_APC_Wheeled_02_unarmed_lxWS: APC_Wheeled_02_unarmed_base_lxws
	{
		crew="O_A_crew_F";
		typicalCargo[]=
		{
			"O_A_soldier_F"
		};
	};
	class O_APC_Tracked_02_30mm_lxWS;
	class Aegis_O_A_APC_Tracked_02_30mm_lxWS: O_APC_Tracked_02_30mm_lxWS
	{
		crew="O_A_crew_F";
		typicalCargo[]=
		{
			"O_A_soldier_F"
		};
	};
};