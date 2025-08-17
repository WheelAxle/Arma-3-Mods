    class EF_H_UtilityCap_Wdl: HelmetBase
    {
        hiddenSelectionsTextures[]=
        {
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\Utilitycap_wdl_co.paa"
        };
    };
    class EF_H_UtilityCap_Des: EF_H_UtilityCap_Wdl
    {
        hiddenSelectionsTextures[]=
        {
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\Utilitycap_des_co.paa"
        };
    };
    class AX_H_MilCap_mc_wdl: H_MilCap_ocamo
    {
        author="$STR_A3_MCFU_Axle";
        displayName="$STR_A3_MCFU_H_MilCap_hs_usmc_wdl";
        picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Milcap_hs_mpw_F_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\cappatrol_MPW_co.paa"
        };
    };
    class AX_H_MilCap_mc_des: H_MilCap_ocamo
    {
        author="$STR_A3_MCFU_Axle";
        displayName="$STR_A3_MCFU_H_MilCap_hs_usmc_des";
        picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Milcap_hs_mpd_F_ca.paa";
        hiddenSelectionsTextures[]=
        {
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\cappatrol_MPD_co.paa"
        };
    };
	class AX_H_MilCap_nohs_mc_wdl: Aegis_H_Milcap_nohs_mcamo_F
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_MilCap_usmc_wdl";
        picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Milcap_nohs_mpw_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\cappatrol_MPW_co.paa"
		};
	};
	class AX_H_MilCap_nohs_mc_des: Aegis_H_Milcap_nohs_mcamo_F
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_MilCap_usmc_des";
        picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Milcap_nohs_mpd_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\cappatrol_MPD_co.paa"
		};
	};
    class EF_H_Booniehat_Wdl: H_Booniehat_khk
    {
        hiddenSelectionsTextures[]=
        {
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\booniehat_MPW_co.paa"
        };
    };
    class EF_H_Booniehat_Des: H_Booniehat_khk
    {
        hiddenSelectionsTextures[]=
        {
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\booniehat_MPD_co.paa"
        };
    };
	class AX_H_Booniehat_wdl_hs: H_Booniehat_khk_hs
	{
		displayName="$STR_A3_MCFU_H_Booniehat_wdl_hs";
        hiddenSelectionsTextures[]=
        {
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\booniehat_MPW_co.paa"
        };
	};
	class AX_H_Booniehat_des_hs: H_Booniehat_khk_hs
	{
		displayName="$STR_A3_MCFU_H_Booniehat_des_hs";
        hiddenSelectionsTextures[]=
        {
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\booniehat_MPD_co.paa"
        };
	};
	class AX_H_Cap_coy: H_Cap_blk
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Cap_coy";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Cap_coy_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\capb_coy_CO.paa"
		};
		class ItemInfo;
	};
	class AX_H_Cap_coy_hs: AX_H_Cap_coy
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Cap_coy_hs";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Cap_coy_hs_ca.paa";
		model="\A3\Characters_F_EPB\Common\capb_hs.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_EPB\Common\capb_hs.p3d";
		};
	};
	class AX_H_Cap_headphones_coy: H_Cap_headphones
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Cap_headphones_coy";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Cap_coy_headphones_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\capb_headphones_coy_CO.paa"
		};
	};
	class AX_H_Helmet_FASTMT_Cover_coy_F: Aegis_H_Helmet_FASTMT_Cover_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_coy_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_Cover_coy_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa"
		};
	};
	class AX_H_Helmet_FASTMT_Cover_mpw_F: Aegis_H_Helmet_FASTMT_Cover_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_MPW_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_Cover_mpw_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_MPW_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa"
		};
	};
	class AX_H_Helmet_FASTMT_Cover_mpd_F: Aegis_H_Helmet_FASTMT_Cover_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_MPD_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_Cover_mpd_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_MPD_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa"
		};
	};
	class AX_H_Helmet_FASTMT_coy_F: Aegis_H_Helmet_FASTMT_base_F
	{
		scope=2;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_coy_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_coy_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa"
		};
	};
	class AX_H_Helmet_FASTMT_Headset_coy_F: Aegis_H_Helmet_FASTMT_Headset_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Headset_coy_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_Headset_coy_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa"
		};
	};
	class AX_H_Helmet_FASTMT_Scrim_base_F: Aegis_H_Helmet_FASTMT_Headset_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=0;
		displayName="Operator Helmet [USMC] (Scrim)";
		model="\ax_aegisefusmc\characters_f_usmc_futura\headgear\H_HelmetFASTMT_Headset_scrim_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			uniformModel="\ax_aegisefusmc\characters_f_usmc_futura\headgear\H_HelmetFASTMT_Headset_scrim_F.p3d";
			modelSides[]={1,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class AX_H_Helmet_FASTMT_Scrim_wdl_F: AX_H_Helmet_FASTMT_Scrim_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Scrim_MPW_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_Scrim_wdl_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\camo_net_wdl_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_Scrim_wdl_t_F: AX_H_Helmet_FASTMT_Scrim_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Scrim_MPW_T_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_Scrim_wdl_t_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\camo_net_trp_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_Scrim_des_F: AX_H_Helmet_FASTMT_Scrim_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Scrim_MPD_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_Scrim_des_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\camo_net_ard_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_Cover_Scrim_base_F: Aegis_H_Helmet_FASTMT_Headset_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=0;
		displayName="Operator Helmet [USMC] (Cover_Scrim)";
		model="\ax_aegisefusmc\characters_f_usmc_futura\headgear\H_HelmetFASTMT_Cover_scrim_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			uniformModel="\ax_aegisefusmc\characters_f_usmc_futura\headgear\H_HelmetFASTMT_Cover_scrim_F.p3d";
			modelSides[]={1,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class AX_H_Helmet_FASTMT_Cover_Scrim_mpw_F: AX_H_Helmet_FASTMT_Cover_Scrim_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_Scrim_MPW_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_Cover_Scrim_wdl_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_MPW_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\camo_net_wdl_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_Cover_Scrim_mpw_t_F: AX_H_Helmet_FASTMT_Cover_Scrim_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_Scrim_MPW_T_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_Cover_Scrim_wdl_t_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_MPW_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\camo_net_trp_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_Cover_Scrim_mpd_F: AX_H_Helmet_FASTMT_Cover_Scrim_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_Scrim_MPD_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_Cover_Scrim_des_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_MPD_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa",	
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\camo_net_ard_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_Cover_lite_base_F: Aegis_H_Helmet_FASTMT_Headset_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=0;
		displayName="Operator Helmet [USMC] (Lite)";
		model="\ax_aegisefusmc\characters_f_usmc_futura\headgear\H_HelmetFASTMT_Cover_Lite_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			uniformModel="\ax_aegisefusmc\characters_f_usmc_futura\headgear\H_HelmetFASTMT_Cover_Lite_F.p3d";
			modelSides[]={1,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class AX_H_Helmet_FASTMT_Cover_lite_coy_F: AX_H_Helmet_FASTMT_Cover_lite_base_F
	{
		scope=2;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_Lite_coy_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_Cover_lite_coy_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_coy_CO.paa",
			""
		};
	};
	class AX_H_Helmet_FASTMT_Cover_lite_mpw_F: AX_H_Helmet_FASTMT_Cover_lite_base_F
	{
		scope=2;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_Lite_MPW_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_Cover_lite_mpw_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_MPW_CO.paa",
			""
		};
	};
	class AX_H_Helmet_FASTMT_Cover_lite_mpd_F: AX_H_Helmet_FASTMT_Cover_lite_base_F
	{
		scope=2;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_Lite_MPD_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_Cover_lite_mpd_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_MPD_CO.paa",
			""
		};
	};
//ARC Rail
	class AX_H_Helmet_FASTMT_ARCrail_base_F: Aegis_H_Helmet_FASTMT_Headset_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=0;
		displayName="Operator Helmet [USMC] (Headset)";
		model="\ax_aegisefusmc\characters_f_usmc_futura\headgear\H_HelmetFASTMT_ARCRail_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2"
			};
			uniformModel="\ax_aegisefusmc\characters_f_usmc_futura\headgear\H_HelmetFASTMT_ARCRail_F.p3d";
			modelSides[]={1,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_coy_F: AX_H_Helmet_FASTMT_ARCrail_base_F
	{
		scope=2;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Headset_coy_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_ARCrail_coy_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\arcrail_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_Cover_base_F: Aegis_H_Helmet_FASTMT_Headset_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=0;
		displayName="Operator Helmet [USMC] (Cover)";
		model="\ax_aegisefusmc\characters_f_usmc_futura\headgear\H_HelmetFASTMT_ARCRail_Cover_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			uniformModel="\ax_aegisefusmc\characters_f_usmc_futura\headgear\H_HelmetFASTMT_ARCRail_Cover_F.p3d";
			modelSides[]={1,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_Cover_coy_F: AX_H_Helmet_FASTMT_ARCrail_Cover_base_F
	{
		scope=2;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_coy_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_ARCrail_Cover_coy_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\arcrail_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_Cover_mpw_F: AX_H_Helmet_FASTMT_ARCrail_Cover_base_F
	{
		scope=2;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_MPW_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_ARCrail_Cover_mpw_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_MPW_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\arcrail_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_Cover_mpd_F: AX_H_Helmet_FASTMT_ARCrail_Cover_base_F
	{
		scope=2;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_MPD_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_ARCrail_Cover_mpd_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_MPD_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\arcrail_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_Cover_lite_base_F: Aegis_H_Helmet_FASTMT_Headset_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=0;
		displayName="Operator Helmet [USMC] (Cover_Lite)";
		model="\ax_aegisefusmc\characters_f_usmc_futura\headgear\H_HelmetFASTMT_ARCRail_Cover_Lite_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			uniformModel="\ax_aegisefusmc\characters_f_usmc_futura\headgear\H_HelmetFASTMT_ARCRail_Cover_Lite_F.p3d";
			modelSides[]={1,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_Cover_lite_coy_F: AX_H_Helmet_FASTMT_ARCrail_Cover_lite_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_Lite_coy_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_ARCrail_Cover_lite_coy_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\arcrail_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_Cover_lite_mpw_F: AX_H_Helmet_FASTMT_ARCrail_Cover_lite_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_Lite_MPW_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_ARCrail_Cover_lite_mpw_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_MPW_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\arcrail_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_Cover_lite_mpd_F: AX_H_Helmet_FASTMT_ARCrail_Cover_lite_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_Lite_MPD_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_ARCrail_Cover_lite_mpd_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_MPD_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\arcrail_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_scrim_base_F: Aegis_H_Helmet_FASTMT_Headset_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=0;
		displayName="Operator Helmet [USMC] (Scrim)";
		model="\ax_aegisefusmc\characters_f_usmc_futura\headgear\H_HelmetFASTMT_ARCRail_Scrim_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3"
			};
			uniformModel="\ax_aegisefusmc\characters_f_usmc_futura\headgear\H_HelmetFASTMT_ARCRail_Scrim_F.p3d";
			modelSides[]={1,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_scrim_wdl_F: AX_H_Helmet_FASTMT_ARCrail_scrim_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Scrim_coy_F";
		picture="\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\Aegis_H_Helmet_FASTMT_Headset_tan_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\camo_net_wdl_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\arcrail_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_scrim_wdl_t_F: AX_H_Helmet_FASTMT_ARCrail_scrim_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Scrim_coy_F";
		picture="\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\Aegis_H_Helmet_FASTMT_Headset_tan_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\camo_net_trp_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\arcrail_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_scrim_des_F: AX_H_Helmet_FASTMT_ARCrail_scrim_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Scrim_coy_F";
		picture="\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\Aegis_H_Helmet_FASTMT_Headset_tan_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\camo_net_ard_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\arcrail_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_Cover_scrim_base_F: Aegis_H_Helmet_FASTMT_Headset_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=0;
		displayName="Operator Helmet [USMC] (Cover_Scrim)";
		model="\ax_aegisefusmc\characters_f_usmc_futura\headgear\H_HelmetFASTMT_ARCRail_Cover_Scrim_F.p3d";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		class ItemInfo: HeadgearItem
		{
			mass=30;
			hiddenSelections[]=
			{
				"camo",
				"camo1",
				"camo2",
				"camo3",
				"camo4"
			};
			uniformModel="\ax_aegisefusmc\characters_f_usmc_futura\headgear\H_HelmetFASTMT_ARCRail_Cover_Scrim_F.p3d";
			modelSides[]={1,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_Cover_Scrim_mpw_F: AX_H_Helmet_FASTMT_ARCrail_Cover_scrim_base_F
	{
		scope=2;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_Scrim_MPW_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_ARCrail_Cover_Scrim_mpw_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_MPW_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\camo_net_wdl_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\arcrail_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_Cover_Scrim_mpw_t_F: AX_H_Helmet_FASTMT_ARCrail_Cover_scrim_base_F
	{
		scope=2;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_Scrim_MPW_T_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_ARCrail_Cover_Scrim_mpw_t_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_MPW_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\camo_net_trp_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\arcrail_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_Cover_Scrim_mpd_F: AX_H_Helmet_FASTMT_ARCrail_Cover_scrim_base_F
	{
		scope=2;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_Scrim_MPD_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_ARCrail_Cover_Scrim_mpd_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_MPD_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_CO.paa",	
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\camo_net_ard_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\arcrail_co.paa"
		};
	};
//Worn variants
	class AX_H_Helmet_FASTMT_Cover_coy_worn_F: Aegis_H_Helmet_FASTMT_Cover_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_coy_worn_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_Cover_coy_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_worn_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_coy_worn_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_worn_CO.paa"
		};
	};
	class AX_H_Helmet_FASTMT_Cover_mpw_worn_F: Aegis_H_Helmet_FASTMT_Cover_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_MPW_worn_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_Cover_mpw_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_worn_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_MPW_worn_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_worn_CO.paa"
		};
	};
	class AX_H_Helmet_FASTMT_Cover_mpd_worn_F: Aegis_H_Helmet_FASTMT_Cover_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_MPD_worn_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_Cover_mpd_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_worn_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_MPD_worn_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_worn_CO.paa"
		};
	};
	class AX_H_Helmet_FASTMT_coy_worn_F: Aegis_H_Helmet_FASTMT_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_coy_worn_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_coy_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_worn_CO.paa"
		};
	};
	class AX_H_Helmet_FASTMT_Headset_coy_worn_F: Aegis_H_Helmet_FASTMT_Headset_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Headset_coy_worn_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_Headset_coy_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_worn_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_worn_CO.paa"
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_coy_worn_F: AX_H_Helmet_FASTMT_ARCrail_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Headset_coy_worn_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_ARCrail_coy_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_worn_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_worn_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\arcrail_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_Cover_coy_worn_F: AX_H_Helmet_FASTMT_ARCrail_Cover_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_coy_worn_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_ARCrail_Cover_coy_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_worn_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_coy_worn_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_worn_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\arcrail_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_Cover_mpw_worn_F: AX_H_Helmet_FASTMT_ARCrail_Cover_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_MPW_worn_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_ARCrail_Cover_mpw_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_worn_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_MPW_worn_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_worn_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\arcrail_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_Cover_mpd_worn_F: AX_H_Helmet_FASTMT_ARCrail_Cover_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_MPD_worn_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_ARCrail_Cover_mpd_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_worn_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_MPD_worn_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_worn_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\arcrail_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_Cover_Scrim_mpw_worn_F: AX_H_Helmet_FASTMT_ARCrail_Cover_scrim_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_Scrim_MPW_worn_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_ARCrail_Cover_Scrim_mpw_t_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_worn_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_MPW_worn_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_worn_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\camo_net_wdl_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\arcrail_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_Cover_Scrim_mpw_t_worn_F: AX_H_Helmet_FASTMT_ARCrail_Cover_scrim_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_Scrim_MPW_T_worn_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_Cover_Scrim_wdl_t_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_worn_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_MPW_worn_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_worn_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\camo_net_trp_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\arcrail_co.paa"
		};
	};
	class AX_H_Helmet_FASTMT_ARCrail_Cover_Scrim_mpd_worn_F: AX_H_Helmet_FASTMT_ARCrail_Cover_scrim_base_F
	{
		scope=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_Helmet_FASTMT_Cover_Scrim_MPD_worn_F";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_Helmet_FASTMT_ARCrail_Cover_Scrim_mpd_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_coy_worn_CO.paa",
            "\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HelmetFASTMT_Cover_MPD_worn_CO.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\H_HeadsetWest_coy_worn_CO.paa",	
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\camo_net_ard_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\arcrail_co.paa"
		};
	};
//
	class EF_H_MCH: H_HelmetB
	{
		hiddenSelectionsTextures[]=
		{
			"\ef\ef_marines\data\mch_base_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_cover_des_co.paa"
		};
	};
	class EF_H_MCH_BasicNet_Des: EF_H_MCH{};
	class EF_H_MCH_BasicNet_Wdl: EF_H_MCH_BasicNet_Des
	{
		hiddenSelectionsTextures[]=
		{
			"\ef\ef_marines\data\mch_base_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_cover_wdl_co.paa"
		};
	};
	class EF_H_MCH_BasicNet_Coy: EF_H_MCH_BasicNet_Des
	{
		hiddenSelectionsTextures[]=
		{
			"\ef\ef_marines\data\mch_base_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_cover_coy_co.paa"
		};
	};
	class EF_H_MCH_BasicNet_Olive: EF_H_MCH_BasicNet_Des
	{
		hiddenSelectionsTextures[]=
		{
			"\ef\ef_marines\data\mch_base_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_cover_olive_co.paa"
		};
	};
	class EF_H_MCH_BasicNet_Black: EF_H_MCH_BasicNet_Des
	{
		hiddenSelectionsTextures[]=
		{
			"\ef\ef_marines\data\mch_base_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_cover_black_co.paa"
		};
	};
	class EF_H_MCH_FullCamo_Des: EF_H_MCH{};
	class EF_H_MCH_FullCamo_Wdl: EF_H_MCH_FullCamo_Des
	{
		hiddenSelectionsTextures[]=
		{
			"\ef\ef_marines\data\mch_base_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_cover_wdl_co.paa"
		};
	};
	class EF_H_MCH_FullCamo_Coy: EF_H_MCH_FullCamo_Des
	{
		hiddenSelectionsTextures[]=
		{
			"\ef\ef_marines\data\mch_base_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_cover_coy_co.paa"
		};
	};
	class EF_H_MCH_FullCamo_Olive: EF_H_MCH_FullCamo_Des
	{
		hiddenSelectionsTextures[]=
		{
			"\ef\ef_marines\data\mch_base_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_cover_olive_co.paa"
		};
	};
	class EF_H_MCH_FullCamo_Black: EF_H_MCH_FullCamo_Des
	{
		hiddenSelectionsTextures[]=
		{
			"\ef\ef_marines\data\mch_base_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_cover_black_co.paa"
		};
	};
	class AX_H_MCH_dirty: EF_H_MCH
	{
		scopeArsenal=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_MCH_dirty_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_base_worn_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_cover_des_worn_co.paa"
		};
		class ItemInfo;
	};
	class AX_H_MCH_born2kill: EF_H_MCH
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_MCH_born2kill_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_base_kill_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_cover_des_worn_co.paa"
		};
	};
	class AX_H_MCH_born2shit: EF_H_MCH
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_MCH_born2shit_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_base_shit_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_cover_des_worn_co.paa"
		};
	};
	class AX_H_MCH_crayoneater: EF_H_MCH
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_MCH_crayon_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_base_crayon_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_cover_des_worn_co.paa"
		};
	};
	class AX_H_MCH_Basic_dirty: AX_H_MCH_dirty
	{
		scopeArsenal=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_MCH_Basic_dirty_F";
		model="ef\ef_marines\ef_h_mch_basic.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\ef\ef_marines\ef_h_mch_basic.p3d";
		};
	};
	class AX_H_MCH_Full_dirty: AX_H_MCH_dirty
	{
		scopeArsenal=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_MCH_Full_dirty_F";
		model="ef\ef_marines\ef_h_mch_Full.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\ef\ef_marines\ef_h_mch_Full.p3d";
		};
	};
	class AX_H_MCH_BasicNet_Des_dirty: AX_H_MCH_dirty
	{
		scopeArsenal=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_MCH_BasicNet_Des_dirty_F";
		model="ef\ef_marines\ef_h_mch_basicNet.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\ef\ef_marines\ef_h_mch_basicNet.p3d";
		};
	};
	class AX_H_MCH_BasicNet_Wdl_dirty: AX_H_MCH_BasicNet_Des_dirty
	{
		scopeArsenal=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_MCH_BasicNet_Wdl_dirty_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_base_worn_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_cover_wdl_worn_co.paa"
		};
	};
	class AX_H_MCH_BasicNet_Coy_dirty: AX_H_MCH_BasicNet_Des_dirty
	{
		scopeArsenal=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_MCH_BasicNet_Coy_dirty_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_base_worn_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_cover_coy_worn_co.paa"
		};
	};
	class AX_H_MCH_BasicNet_Olive_dirty: AX_H_MCH_BasicNet_Des_dirty
	{
		scopeArsenal=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_MCH_BasicNet_Olive_dirty_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_base_worn_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_cover_olive_worn_co.paa"
		};
	};
	class AX_H_MCH_BasicNet_Black_dirty: AX_H_MCH_BasicNet_Des_dirty
	{
		scopeArsenal=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_MCH_BasicNet_Black_dirty_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_base_worn_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_cover_black_worn_co.paa"
		};
	};
	class AX_H_MCH_FullCamo_Des_dirty: AX_H_MCH_dirty
	{
		scopeArsenal=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_MCH_FullCamo_Des_dirty_F";
		model="ef\ef_marines\ef_h_mch_FullCamo.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\ef\ef_marines\ef_h_mch_FullCamo.p3d";
		};
	};
	class AX_H_MCH_FullCamo_Wdl_dirty: AX_H_MCH_FullCamo_Des_dirty
	{
		scopeArsenal=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_MCH_FullCamo_Wdl_dirty_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_base_worn_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_cover_wdl_worn_co.paa"
		};
	};
	class AX_H_MCH_FullCamo_Coy_dirty: AX_H_MCH_FullCamo_Des_dirty
	{
		scopeArsenal=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_MCH_FullCamo_Coy_dirty_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_base_worn_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_cover_coy_worn_co.paa"
		};
	};
	class AX_H_MCH_FullCamo_Olive_dirty: AX_H_MCH_FullCamo_Des_dirty
	{
		scopeArsenal=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_MCH_FullCamo_Olive_dirty_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_base_worn_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_cover_olive_worn_co.paa"
		};
	};
	class AX_H_MCH_FullCamo_Black_dirty: AX_H_MCH_FullCamo_Des_dirty
	{
		scopeArsenal=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_MCH_FullCamo_Black_dirty_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_base_worn_co.paa",
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\mch_cover_black_worn_co.paa"
		};
	};
	class AX_H_HelmetB_light_coy: H_HelmetB_light
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_HelmetB_light_coy";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_HelmetB_light_coy_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\equip1_coy_CO.paa"
		};
	};
	class AX_H_HelmetB_light_tan: H_HelmetB_light
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_HelmetB_light_tan";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_HelmetB_light_tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\equip1_tan_CO.paa"
		};
	};
	class AX_H_HelmetSpecB_light_coy: H_HelmetSpecB_light
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_HelmetSpecB_light_coy";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_HelmetSpecB_light_coy_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\equip1_coy_CO.paa"
		};
	};
	class AX_H_HelmetSpecB_light_tan: H_HelmetSpecB_light
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_H_HelmetSpecB_light_tan";
		picture="\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\ui\icon_H_HelmetSpecB_light_tan_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\characters_f_usmc_futura\headgear\data\equip1_tan_CO.paa"
		};
	};
	class EF_H_HelmetB_light_slick: H_HelmetB_light{scope=1;scopeArsenal=1;};
	class EF_H_HelmetB_light_grass_slick: EF_H_HelmetB_light_slick{scope=1;scopeArsenal=1;};
	class EF_H_HelmetB_light_snakeskin_slick: EF_H_HelmetB_light_slick{scope=1;scopeArsenal=1;};
	class EF_H_HelmetB_light_desert_slick: EF_H_HelmetB_light_slick{scope=1;scopeArsenal=1;};
	class EF_H_HelmetB_light_black_slick: EF_H_HelmetB_light_slick{scope=1;scopeArsenal=1;};
	class EF_H_HelmetB_light_sand_slick: EF_H_HelmetB_light_slick{scope=1;scopeArsenal=1;};
	class EF_H_HelmetB_light_tna_slick: EF_H_HelmetB_light_slick{scope=1;scopeArsenal=1;};
	class EF_H_HelmetB_light_wdl_slick: EF_H_HelmetB_light_slick{scope=1;scopeArsenal=1;};