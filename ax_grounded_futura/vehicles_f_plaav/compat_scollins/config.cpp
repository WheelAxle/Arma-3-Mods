class CfgPatches
{
	class ax_grounded_futura_compat_scollins
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Weapons_LK",
			"PLA_CSAT_ZTZ96",
			"PLA_CSAT_ZBL09",
			"PLA_CSAT_ZBD04"
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
	class CSK181;
	class PLACV_CSK181_CST: CSK181{};
	class PLACV_CSK181_PAC: PLACV_CSK181_CST{scope=1;scopeCurator=1;};
	class PLACV_CSK181_PLAD: PLACV_CSK181_CST{scope=1;scopeCurator=1;};
	class O_ZTZ96B;
	class PLACV_ZTZ96B_PAC: O_ZTZ96B{scope=1;scopeCurator=1;};
	class PLACV_ZTZ96B_ARG: PLACV_ZTZ96B_PAC{scope=1;scopeCurator=1;};
	class PLACV_ZTZ96B_PLAD: PLACV_ZTZ96B_PAC{scope=1;scopeCurator=1;};
	class O_ZBD04A;
	class PLACV_ZBD04A_PAC: O_ZBD04A{scope=1;scopeCurator=1;};
	class PLACV_ZBD04A_PLAD: PLACV_ZBD04A_PAC{scope=1;scopeCurator=1;};
	class O_ZBL09;
	class PLACV_ZBL09_PAC: O_ZBL09{scope=1;scopeCurator=1;};
	class PLACV_ZBL09_ARG: PLACV_ZBL09_PAC{scope=1;scopeCurator=1;};
	class PLACV_ZBL09_PLAD: PLACV_ZBL09_PAC{scope=1;scopeCurator=1;};
};