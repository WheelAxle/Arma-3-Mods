class CfgPatches
{
	class ax_characters_f_usmc_futura_rf_compat
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"EF_Sounds_C",
			"RF_Data_Loadorder"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class cfgWeapons
{
	class Aegis_V_PlateCarrier_RF_rgr;
    class AX_V_PlateCarrier_RF_coy: Aegis_V_PlateCarrier_RF_rgr
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_PlateCarrier_RF_mccoy_F0";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\vests\data\ui\icon_V_PlateCarrier_RF_coy.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\vests_coy_co.paa"
		};
	};
	class V_PlateCarrierLite_black_noFlag_RF;
	class AX_V_PlateCarrierLite_coy_RF: V_PlateCarrierLite_black_noFlag_RF
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_PlateCarrierLite_coy_F0";
		picture="\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierGL_cbr_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\Carrier_GL_Rig_coy_CO.paa"
		};
	};
};