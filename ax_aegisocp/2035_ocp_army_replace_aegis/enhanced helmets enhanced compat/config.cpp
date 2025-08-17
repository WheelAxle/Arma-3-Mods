class CfgPatches
{
	class ax_2035_ocp_army_replace_ech_enhanced
	{
		addonRootClass="ax_2035_ocp_army_replace_aegis";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"helmet"
		};
		skipWhenMissingDependencies=1;
	};
};
class cfgWeapons
{
	class Headgear_B_Helmet_ballistic_scrim;
	class Headgear_B_Helmet_ballistic_scrim_MC: Headgear_B_Helmet_ballistic_scrim
	{
		displayName="Combat Helmet (OCP, Camo, Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_OCP_co.paa",
			"\helmet\data\ghillie_mc_co.paa"
		};
	};
	class Headgear_B_Helmet_ballistic_scrim_tna: Headgear_B_Helmet_ballistic_scrim
	{
		displayName="Combat Helmet (Tropic, Camo, Enhanced)";
	};
	class Headgear_B_Helmet_ballistic_scrim_wdl: Headgear_B_Helmet_ballistic_scrim
	{
		displayName="Combat Helmet (Woodland, Camo, Enhanced)";
	};
	class Headgear_B_Helmet_ballistic_scrim_US4CES: Headgear_B_Helmet_ballistic_scrim
	{
		scope=1;
		scopeCurator=1;
		displayName="Combat Helmet (US4CES, Camo, Enhanced)";
	};
	class H_HelmetB_plain_sb_mtp_RF;
	class Headgear_B_Helmet_ballistic_sb_OD: H_HelmetB_plain_sb_mtp_RF
	{
		displayName="Combat Helmet (Green, Shape Breaker, Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\A3_Atlas\Characters_F_Atlas\Headgear\Data\equip1_green_CO.paa",
			"\helmet\data\mitznefet_od_co.paa"
		};
	};
	class Headgear_B_Helmet_ballistic_sb_MC: H_HelmetB_plain_sb_mtp_RF
	{
		displayName="Combat Helmet (OCP, Shape Breaker, Enhanced)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_OCP_co.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\mitznefet_ocp_co.paa"
		};
	};
	class Headgear_B_Helmet_ballistic_sb_tna: H_HelmetB_plain_sb_mtp_RF
	{
		displayName="Combat Helmet (Tropic, Shape Breaker, Enhanced)";
	};
	class Headgear_B_Helmet_ballistic_sb_wdl: H_HelmetB_plain_sb_mtp_RF
	{
		displayName="Combat Helmet (Woodland, Shape Breaker, Enhanced)";
	};
	class Headgear_B_Helmet_ballistic_sb_U4: H_HelmetB_plain_sb_mtp_RF
	{
		scope=1;
		scopeCurator=1;
		displayName="Combat Helmet (US4CES, Shape Breaker, Enhanced)";
	};
};
class cfgVehicles
{
};
