class CfgPatches
{
	class ax_grounded_opfor_russia_2035_ap_mags
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Aegis_Data_F_Aegis_Loadorder"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgVehicles
{
	class B_Carryall_green_F;
	class B_Carryall_green_Ammo_F: B_Carryall_green_F
	{
		author="$STR_A3_A_AveryTheKitty";
		scope=1;
		class TransportMagazines
		{
			class _xx_Aegis_30Rnd_545x39_AP_Mag_F
			{
				magazine="Aegis_30Rnd_545x39_AP_Mag_F";
				count=6;
			};
			class _xx_Aegis_60Rnd_545x39_Mag_Green_F
			{
				magazine="Aegis_60Rnd_545x39_Mag_Green_F";
				count=1;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=1;
			};
			class _xx_HandGrenade_East
			{
				magazine="HandGrenade_East";
				count=2;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=2;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_10Rnd_93x64_DMR_05_Mag
			{
				magazine="10Rnd_93x64_DMR_05_Mag";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
	};
	#include "rafapmags.hpp"
};