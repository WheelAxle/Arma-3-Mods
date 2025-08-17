class CfgPatches
{
	class ax_data_f_usmc_futura
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"EF_Sounds_C"
		};
	};
};

class CfgFactionClasses
{
	class EF_B_MJTF_Des
	{
		displayName="$STR_EF_FACTION_MJTF_DES";
		priority=1;
		side=1;
		icon="\A3_Aegis\Data_F_Aegis\FactionIcons\CfgFactionClasses_BLU_CA.paa";
		flag="\A3\Data_F\Flags\flag_US_CO.paa";
	};
	class EF_B_MJTF_Wdl
	{
		displayName="$STR_EF_FACTION_MJTF_Wdl";
		priority=1;
		side=1;
		icon="\A3_Aegis\Data_F_Aegis\FactionIcons\CfgFactionClasses_BLU_CA.paa";
		flag="\A3\Data_F\Flags\flag_US_CO.paa";
	};
	class EF_B_MJTF_Navy
	{
		displayName="$STR_EF_FACTION_MJTF_Navy";
		priority=1;
		side=1;
		icon="\A3_Aegis\Data_F_Aegis\FactionIcons\CfgFactionClasses_BLU_CA.paa";
		flag="\A3\Data_F\Flags\flag_US_CO.paa";
	};
};