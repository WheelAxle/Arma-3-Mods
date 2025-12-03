class CfgPatches
{
	class ax_characters_f_usmc_futura_reconcloak_compat
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"ReconCloaks_Characters_Headgear"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgWeapons
{
	class ReconCloaks_H_Hood_oli;
	class AX_ReconCloaks_H_Hood_coy: ReconCloaks_H_Hood_oli
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_ReconCloaks_H_Hood_coy";
		picture="\ReconCloaks\reconcloaks_characters\Headgear\Data\icon\H_ReconCloak_oli_ico_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_ReconCloak_coy_CO.paa"
		};
	};
	class ReconCloaks_H_Hood_Cap_oli;
	class ReconCloaks_H_Hood_Cap_coy: ReconCloaks_H_Hood_Cap_oli
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_ReconCloaks_H_Hood_Cap_coy";
		picture="\ReconCloaks\reconcloaks_characters\Headgear\Data\icon\H_ReconCloak_oli_ico_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_ReconCloak_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_PatrolCap_coy_CO.paa"
		};
	};
	class ReconCloaks_H_Hood_Cap_coy_wdl: ReconCloaks_H_Hood_Cap_oli
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_ReconCloaks_H_Hood_Cap_coy_wdl";
		picture="\ReconCloaks\reconcloaks_characters\Headgear\Data\icon\H_ReconCloak_oli_ico_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_ReconCloak_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_PatrolCap_mpw_CO.paa"
		};
	};
	class ReconCloaks_H_Hood_Cap_coy_des: ReconCloaks_H_Hood_Cap_coy_wdl
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_ReconCloaks_H_Hood_Cap_coy_des";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_ReconCloak_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_PatrolCap_mpd_CO.paa"
		};
	};
	class ReconCloaks_NV_Hood_Down_oli;
	class ReconCloaks_NV_Hood_Down_coy: ReconCloaks_NV_Hood_Down_oli
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_ReconCloaks_H_Hood_Down_coy";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_ReconCloak_coy_CO.paa"
		};
	};
	class EF_LPNVG_Tan;
	class AX_LPNVG_tan_Hidden: EF_LPNVG_Tan
	{
		class ItemInfo;
	};
	class AX_LPNVG_tan_ReconCloak_Hidden: AX_LPNVG_tan_Hidden
	{
		scope=1;
		scopeArsenal=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_LPNVG_tan_ReconCloak_Hidden_F0";
		class ItemInfo: ItemInfo
		{
			uniformModel="\ef\ef_weapons\lpnvg\ef_lpnvg.p3d";
			modelOff="\ReconCloaks\reconcloaks_characters\Headgear\H_ReconCloak.p3d";
		};
	};
};

class CfgVehicles
{
	class Headgear_ReconCloaks_H_Hood_oli;
	class AX_Headgear_ReconCloaks_H_Hood_coy: Headgear_ReconCloaks_H_Hood_oli
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_ReconCloaks_H_Hood_coy";
		class TransportItems
		{
			delete _xx_ReconCloaks_H_Hood_oli;
			class _xx_AX_ReconCloaks_H_Hood_coy
			{
				name="AX_ReconCloaks_H_Hood_coy";
				count=1;
			};
		};
	};
};