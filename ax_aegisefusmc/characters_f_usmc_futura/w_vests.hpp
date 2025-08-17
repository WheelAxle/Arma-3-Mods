    class EF_V_AAV_Coy: Vest_NoCamo_Base //desat 10%
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\aa_vest_co.paa",
			"\ef\ef_weapons\mx\data\arifle_mx_coy_co.paa"
		};
		//#include "armor.hpp"
	};
	class EF_V_AAV_Rifleman_Coy: EF_V_AAV_Coy{};
	class EF_V_AAV_Sailor_Coy: EF_V_AAV_Coy{};
	class EF_V_AAV_Scout_Coy: EF_V_AAV_Coy{};
	class EF_V_AAV_Support_Coy: EF_V_AAV_Coy{};
	class EF_V_AAV_TL_Coy: EF_V_AAV_Coy{};
	class EF_V_AAV_Diver_Coy: EF_V_AAV_Coy{};
	class EF_V_CCR_Rifleman_Coy: Vest_Camo_Base
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\aa_vest_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\ccr_pouches_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\ccr_co.paa",
			"\ef\ef_weapons\mx\data\arifle_mx_coy_co.paa"
		};
	};
	class EF_V_CCR_TL_Coy: EF_V_CCR_Rifleman_Coy{};
	class EF_V_CCR_Scout_Coy: EF_V_CCR_Rifleman_Coy{};
	class EF_V_CCR_Support_Coy: EF_V_CCR_Rifleman_Coy{};
    class V_PlateCarrier1_rgr;
    class V_PlateCarrier2_rgr;
	class Aegis_V_PlateCarrier2_alt_rgr;
	class V_PlateCarrierGL_rgr;
	class V_PlateCarrierSpec_rgr;
	class AX_V_PlateCarrier1_coy: V_PlateCarrier1_rgr
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_PlateCarrier1_mccoy_F0";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\vests\data\ui\icon_V_PlateCarrier1_coy_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\vests_coy_co.paa"
		};
    };
    class AX_V_PlateCarrier2_coy: V_PlateCarrier2_rgr
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_PlateCarrier2_mccoy_F0";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\vests\data\ui\icon_V_PlateCarrier2_coy_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\vests_coy_co.paa"
		};
	};
	class AX_V_PlateCarrier2_alt_coy: Aegis_V_PlateCarrier2_alt_rgr
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_PlateCarrier2_alt_mccoy_F0";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\vests\data\ui\icon_V_PlateCarrier2_alt_coy_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\vests_coy_co.paa"
		};
	};
	class AX_V_PlateCarrierGL_coy: V_PlateCarrierGL_rgr
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_PlateCarrierGL_coy_F0";
		picture="\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierGL_cbr_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\Carrier_GL_Rig_coy_CO.paa"
		};
	};
	class AX_V_PlateCarrierSpec_coy: V_PlateCarrierSpec_rgr
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_PlateCarrierSpec_coy_F0";
		picture="\A3_Aegis\Characters_F_Aegis\Vests\Data\UI\icon_V_PlateCarrierSpec_cbr_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\Carrier_GL_Rig_coy_CO.paa"
		};
	};
	class AX_V_AAV_Coy_dirty: EF_V_AAV_Coy
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_AAV_Coy_dirty";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\AA_Vest_dirty_CO.paa",
			"\ef\ef_weapons\mx\data\arifle_mx_coy_co.paa"
		};
	};
	class AX_V_AAV_Rifleman_Coy_dirty: EF_V_AAV_Rifleman_Coy
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_AAV_Rifleman_Coy_dirty";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\AA_Vest_dirty_CO.paa",
			"\ef\ef_weapons\mx\data\arifle_mx_coy_co.paa"
		};
	};
	class AX_V_AAV_Sailor_Coy_dirty: EF_V_AAV_Sailor_Coy
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_AAV_Sailor_Coy_dirty";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\AA_Vest_dirty_CO.paa",
			"\ef\ef_weapons\mx\data\arifle_mx_coy_co.paa"
		};
	};
	class AX_V_AAV_Pilot_Coy: EF_V_AAV_Sailor_Coy
	{
		author="$STR_A3_MCFU_Axle";
		scope=1;
		displayName="$STR_A3_MCFU_V_AAV_Pilot_Coy";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\AA_Vest_CO.paa",
			""
		};
	};
	class AX_V_AAV_Pilot_Coy_sd: AX_V_AAV_Pilot_Coy
	{
		author="$STR_A3_MCFU_Axle";
		scope=1;
		displayName="$STR_A3_MCFU_V_AAV_Pilot_Coy";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\AA_Vest_sd_CO.paa",
			""
		};
	};
	class AX_V_AAV_Pilot_Coy_dirty: AX_V_AAV_Pilot_Coy
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_AAV_Pilot_Coy_dirty";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\AA_Vest_dirty_CO.paa",
			""
		};
	};
	class AX_V_AAV_Scout_Coy_dirty: EF_V_AAV_Scout_Coy
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_AAV_Scout_Coy_dirty";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\AA_Vest_dirty_CO.paa",
			"\ef\ef_weapons\mx\data\arifle_mx_coy_co.paa"
		};
	};
	class AX_V_AAV_Support_Coy_dirty: EF_V_AAV_Support_Coy
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_AAV_Support_Coy_dirty";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\AA_Vest_dirty_CO.paa",
			"\ef\ef_weapons\mx\data\arifle_mx_coy_co.paa"
		};
	};
	class AX_V_AAV_TL_Coy_dirty: EF_V_AAV_TL_Coy
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_AAV_TL_Coy_dirty";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\AA_Vest_dirty_CO.paa",
			"\ef\ef_weapons\mx\data\arifle_mx_coy_co.paa"
		};
	};
	class AX_V_AAV_Diver_Coy_dirty: EF_V_AAV_Diver_Coy
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_AAV_Diver_Coy_dirty";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\AA_Vest_dirty_CO.paa",
			"\ef\ef_weapons\mx\data\arifle_mx_coy_co.paa"
		};
	};
	class AX_V_CCR_Rifleman_Coy_dirty: EF_V_CCR_Rifleman_Coy
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_CCR_Rifleman_Coy_dirty";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\AA_Vest_dirty_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\ccr_pouches_dirty_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\ccr_dirty_CO.paa",
			"\ef\ef_weapons\mx\data\arifle_mx_coy_co.paa"
		};
	};
	class AX_V_CCR_TL_Coy_dirty: EF_V_CCR_TL_Coy
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_CCR_TL_Coy_dirty";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\AA_Vest_dirty_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\ccr_pouches_dirty_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\ccr_dirty_CO.paa",
			"\ef\ef_weapons\mx\data\arifle_mx_coy_co.paa"
		};
	};
	class AX_V_CCR_Scout_Coy_dirty: EF_V_CCR_Scout_Coy
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_CCR_Scout_Coy_dirty";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\AA_Vest_dirty_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\ccr_pouches_dirty_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\ccr_dirty_CO.paa",
			"\ef\ef_weapons\mx\data\arifle_mx_coy_co.paa"
		};
	};
	class AX_V_CCR_Support_Coy_dirty: EF_V_CCR_Support_Coy
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_V_CCR_Support_Coy_dirty";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\AA_Vest_dirty_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\ccr_pouches_dirty_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\vests\data\ccr_dirty_CO.paa",
			"\ef\ef_weapons\mx\data\arifle_mx_coy_co.paa"
		};
	};
	