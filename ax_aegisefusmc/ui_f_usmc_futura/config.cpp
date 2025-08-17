class CfgPatches
{
	class ax_ui_f_usmc_futura
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
		author="Axle";
	};
};

class CfgUnitInsignia
{
	class USMC_MarineRaiders
	{
		displayName="$STR_A3_MCFU_UnitInsignia_USMCRaiders0";
		texture="\ax_aegisefusmc\ui_f_usmc_futura\data\CfgUnitInsignia\USMC_Raiders_CA.paa";
		author="$STR_A3_MCFU_Axle";
		material="\A3\UI_F\Data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class USMC_MARSOC_High
	{
		displayName="$STR_A3_MCFU_UnitInsignia_USMCMARSOC_High0";
		texture="\ax_aegisefusmc\ui_f_usmc_futura\data\CfgUnitInsignia\USMC_MARSOC_CA.paa";
		author="$STR_A3_MCFU_Axle";
		material="\A3\UI_F\Data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
	class USMC_MARSOC_Low
	{
		displayName="$STR_A3_MCFU_UnitInsignia_USMCMARSOC_Low0";
		texture="\ax_aegisefusmc\ui_f_usmc_futura\data\CfgUnitInsignia\USMC_MARSOC_low_CA.paa";
		author="$STR_A3_MCFU_Axle";
		material="\A3\UI_F\Data\GUI\Cfg\UnitInsignia\default_insignia.rvmat";
	};
};
