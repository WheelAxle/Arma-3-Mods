class CfgPatches
{
	class ax_faction_russia_grfu
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"lk_afrf",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"A3_Atlas_Data_F_Atlas_Loadorder"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgWeapons
{
};

class CfgVehicles
{
	#include "raf.hpp"
	#include "raf_ard.hpp"
	#include "raf_conscript.hpp"
	#include "patrol.hpp"
	class O_Plane_CAS_02_dynamicLoadout_F;
	class O_Plane_Fighter_02_F;
	class O_Plane_Fighter_02_Stealth_F;
	class O_R_Plane_CAS_02_dynamicLoadout_F: O_Plane_CAS_02_dynamicLoadout_F
	{
		//displayName="To-199 Volk";
	};
	class O_R_Plane_Fighter_02_F: O_Plane_Fighter_02_F
	{
		//displayName="To-201 Okhotnik";
	};
	class O_R_Plane_Fighter_02_Stealth_F: O_Plane_Fighter_02_Stealth_F
	{
		//displayName="To-201 Okhotnik (Stealth)";
	};
};