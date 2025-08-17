
	class AX_B_Carryall_cbr_OTExp_F: B_Carryall_cbr
	{
		author="$STR_A3_A_AveryTheKitty";
		scope=1;
		class TransportMagazines
		{
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine="APERSBoundingMine_Range_Mag";
				count=3;
			};
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=2;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine="SLAMDirectionalMine_Wire_Mag";
				count=2;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
		};
	};
	class AX_B_FieldPack_cbr_OTMedic_F: B_FieldPack_cbr
	{
		author="$STR_A3_A_AveryTheKitty";
		scope=1;
		class TransportItems
		{
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
	};
	class AX_B_FieldPack_cbr_OTLAT_F: B_FieldPack_cbr
	{
		author="$STR_A3_A_AveryTheKitty";
		scope=1;
		class TransportMagazines
		{
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=2;
			};
			class _xx_RPG32_HE_F
			{
				magazine="RPG32_HE_F";
				count=2;
			};
		};
	};
    class B_LegStrapBag_black_OTHG_F: B_LegStrapBag_black_F
	{
		author="$STR_A3_GS_Axle";
		scope=1;
		class TransportItems
		{
			class _xx_150Rnd_93x64_Mag
			{
				name="150Rnd_93x64_Mag";
				count=1;
			};
		};
	};
	class B_LegStrapBag_coyote_OCDHG_F: B_LegStrapBag_coyote_F
	{
		author="$STR_A3_GS_Axle";
		scope=1;
		class TransportItems
		{
			class _xx_150Rnd_93x64_Mag
			{
				name="150Rnd_93x64_Mag";
				count=1;
			};
		};
	};
    class AX_B_SmershVest_01_F: B_ViperHarness_blk_F
    {
        scope=1;
        scopeCurator=1;
        author="$STR_A3_GS_Axle";
        displayName="$STR_A3_GS_B_SmershVest_01_F0";
        picture="\A3\Characters_F_Enoch\Vests\Data\UI\icon_V_SmershVest_01_F_ca.paa";
        model="\A3\Characters_F_Enoch\Vests\V_SmershVest_01_F.p3d";
        hiddenSelections[]=
        {
            "Camo",
            "Camo2",
            "Radio1_hide"
        };
        hiddenSelectionsMaterials[]=
        {
            "a3\Characters_F_Enoch\Vests\Data\Smersh.rvmat"
        };
        hiddenSelectionsTextures[]=
        {
            "a3\Characters_F_Enoch\Vests\Data\smersh_co.paa",
            "a3\Characters_F_Enoch\Vests\Data\Smersh_miscellaneous_CO.paa"
        };
        maximumLoad=160;
        mass=30;
    };
    class AX_B_SmershVest_01_taiga_F: AX_B_SmershVest_01_F
    {
        displayName="$STR_A3_GS_B_SmershVest_01_taiga_F0";
        hiddenSelectionsTextures[]=
        {
            "ax_grounded_futura\characters_f_grounded\vests\data\Smersh_Taiga_CO.paa",
            "ax_grounded_futura\characters_f_grounded\vests\data\Smersh_miscellaneous_Taiga_CO.paa"
        };
    };
    class AX_B_SmershVest_01_radio_F: AX_B_SmershVest_01_F
    {
        scope=1;
        scopeCurator=1;
        displayName="$STR_A3_GS_B_SmershVest_01_radio_F0";
        picture="\A3\Characters_F_Enoch\Vests\Data\UI\icon_V_SmershVest_01_radio_F_ca.paa";
        hiddenSelections[]=
        {
            "Camo",
            "Camo2",
            "Radio2_hide"
        };
        hiddenSelectionsTextures[]=
        {
            "a3\Characters_F_Enoch\Vests\Data\smersh_co.paa",
            "a3\Characters_F_Enoch\Vests\Data\Smersh_miscellaneous_CO.paa"
        };
    };
    class AX_B_SmershVest_01_radio_taiga_F: AX_B_SmershVest_01_radio_F
    {
        displayName="$STR_A3_GS_B_SmershVest_01_radio_taiga_F0";
        hiddenSelectionsTextures[]=
        {
            "ax_grounded_futura\characters_f_grounded\vests\data\Smersh_Taiga_CO.paa",
            "ax_grounded_futura\characters_f_grounded\vests\data\Smersh_miscellaneous_Taiga_CO.paa"
        };
    };
	class AX_B_EAssaultPack_green_F: B_FieldPack_green_F
	{
		scope=2;
		author="$STR_A3_GS_Axle";
		displayname="$STR_A3_GS_B_EAssaultPack_green_F0";
		picture="\ax_grounded_futura\characters_f_grounded\backpacks\data\ui\icon_B_EAssaultPack_green_F_ca.paa";
		model="\ax_grounded_futura\characters_f_grounded\backpacks\backpack_civil_assault.p3d";
		hiddenselections[]=
		{
			"camo"
		};
		hiddenselectionstextures[]=
		{
			"\ax_grounded_futura\characters_f_grounded\backpacks\data\backpack_civil_assault_green_CO.paa"
		};
	};
	class AX_B_EAssaultPack_taiga_F: AX_B_EAssaultPack_green_F
	{
		author="$STR_A3_GS_Axle";
		displayname="$STR_A3_GS_B_EAssaultPack_taiga_F0";
		picture="\ax_grounded_futura\characters_f_grounded\backpacks\data\ui\icon_B_EAssaultPack_taiga_F_ca.paa";
		hiddenselectionstextures[]=
		{
			"\ax_grounded_futura\characters_f_grounded\backpacks\data\backpack_civil_assault_taiga_CO.paa"
		};
	};
	class AX_B_EAssaultPack_arid_F: AX_B_EAssaultPack_green_F
	{
		author="$STR_A3_GS_Axle";
		displayname="$STR_A3_GS_B_EAssaultPack_arid_F0";
		picture="\ax_grounded_futura\characters_f_grounded\backpacks\data\ui\icon_B_EAssaultPack_arid_F_ca.paa";
		hiddenselectionstextures[]=
		{
			"\ax_grounded_futura\characters_f_grounded\backpacks\data\backpack_civil_assault_arid_CO.paa"
		};
	};
    class AX_B_EAssaultPack_green_AAR_F: AX_B_EAssaultPack_green_F
    {
        scope=1;
        author="$STR_A3_GS_Axle";
        class TransportMagazines
        {
            class _xx_Aegis_60Rnd_545x39_Mag_Green_F
            {
                magazine="Aegis_60Rnd_545x39_Mag_Green_F";
                count=1;
            };
            class _xx_Aegis_60Rnd_545x39_Mag_Tracer_Green_F
            {
                magazine="Aegis_60Rnd_545x39_Mag_Tracer_Green_F";
                count=1;
            };
        };
        class TransportItems
        {
            class _xx_optic_tws_mg
            {
                name="optic_tws_mg";
                count=1;
            };
            class _xx_bipod_02_F_blk
            {
                name="bipod_02_F_blk";
                count=1;
            };
            class _xx_muzzle_snds_545
            {
                name="muzzle_snds_545";
                count=1;
            };
        };
    };
    class AX_B_EAssaultPack_green_AA_F: AX_B_EAssaultPack_green_F
    {
        scope=1;
        author="$STR_A3_GS_Axle";
        class TransportMagazines
        {
            class _xx_Titan_AA
            {
                magazine="Titan_AA";
                count=1;
            };
        };
    };
    class AX_B_EAssaultPack_green_AT_F: AX_B_EAssaultPack_green_F
    {
        scope=1;
        author="$STR_A3_GS_Axle";
        class TransportMagazines
        {
            class _xx_Titan_AT
            {
                magazine="Titan_AT";
                count=1;
            };
            class _xx_Titan_AP
            {
                magazine="Titan_AP";
                count=1;
            };
        };
    };
    class AX_B_EAssaultPack_taiga_Medic_F: AX_B_EAssaultPack_taiga_F
    {
        scope=1;
        author="$STR_A3_GS_Axle";
        class TransportMagazines
        {
        };
        class TransportItems
        {
            class _xx_Medikit
            {
                name="Medikit";
                count=1;
            };
            class _xx_FirstAidKit
            {
                name="FirstAidKit";
                count=10;
            };
        };
    };
    class AX_B_EAssaultPack_taiga_RPG_AT_F: AX_B_EAssaultPack_taiga_F
    {
        scope=1;
        author="$STR_A3_GS_Axle";
        class TransportMagazines
        {
            class _xx_RPG32_F
            {
                magazine="RPG32_F";
                count=2;
            };
            class _xx_RPG32_HE_F
            {
                magazine="RPG32_HE_F";
                count=2;
            };
        };
    };
    class AX_B_EAssaultPack_taiga_AAR_F: AX_B_EAssaultPack_taiga_F
    {
        scope=1;
        author="$STR_A3_GS_Axle";
        class TransportMagazines
        {
            class _xx_Aegis_60Rnd_545x39_Mag_Green_F
            {
                magazine="Aegis_60Rnd_545x39_Mag_Green_F";
                count=1;
            };
            class _xx_Aegis_60Rnd_545x39_Mag_Tracer_Green_F
            {
                magazine="Aegis_60Rnd_545x39_Mag_Tracer_Green_F";
                count=1;
            };
        };
        class TransportItems
        {
            class _xx_optic_tws_mg
            {
                name="optic_tws_mg";
                count=1;
            };
            class _xx_bipod_02_F_blk
            {
                name="bipod_02_F_blk";
                count=1;
            };
            class _xx_muzzle_snds_545
            {
                name="muzzle_snds_545";
                count=1;
            };
        };
    };
    class AX_B_EAssaultPack_taiga_AA_F: AX_B_EAssaultPack_taiga_F
    {
        scope=1;
        author="$STR_A3_GS_Axle";
        class TransportMagazines
        {
            class _xx_Titan_AA
            {
                magazine="Titan_AA";
                count=1;
            };
        };
    };
    class AX_B_EAssaultPack_taiga_AT_F: AX_B_EAssaultPack_taiga_F
    {
        scope=1;
        author="$STR_A3_GS_Axle";
        class TransportMagazines
        {
            class _xx_Titan_AT
            {
                magazine="Titan_AT";
                count=1;
            };
            class _xx_Titan_AP
            {
                magazine="Titan_AP";
                count=1;
            };
        };
    };
    class AX_B_EAssaultPack_taiga_HAT_F: AX_B_EAssaultPack_taiga_F
    {
        scope=1;
        author="$STR_A3_GS_Axle";
        class TransportMagazines
        {
            class _xx_Vorona_HEAT
            {
                magazine="Vorona_HEAT";
                count=1;
            };
        };
    };
    class AX_B_EAssaultPack_taiga_Repair_F: AX_B_EAssaultPack_taiga_F
    {
        scope=1;
        author="$STR_A3_GS_Axle";
        class TransportItems
        {
            class _xx_ToolKit
            {
                name="ToolKit";
                count=1;
            };
        };
    };
    class AX_B_EAssaultPack_arid_Medic_F: AX_B_EAssaultPack_arid_F
    {
        scope=1;
        author="$STR_A3_GS_Axle";
        class TransportMagazines
        {
        };
        class TransportItems
        {
            class _xx_Medikit
            {
                name="Medikit";
                count=1;
            };
            class _xx_FirstAidKit
            {
                name="FirstAidKit";
                count=10;
            };
        };
    };
    class AX_B_EAssaultPack_arid_RPG_AT_F: AX_B_EAssaultPack_arid_F
    {
        scope=1;
        author="$STR_A3_GS_Axle";
        class TransportMagazines
        {
            class _xx_RPG32_F
            {
                magazine="RPG32_F";
                count=2;
            };
            class _xx_RPG32_HE_F
            {
                magazine="RPG32_HE_F";
                count=2;
            };
        };
    };
    class AX_B_EAssaultPack_arid_AAR_F: AX_B_EAssaultPack_arid_F
    {
        scope=1;
        author="$STR_A3_GS_Axle";
        class TransportMagazines
        {
            class _xx_Aegis_60Rnd_545x39_Mag_Green_F
            {
                magazine="Aegis_60Rnd_545x39_Mag_Green_F";
                count=1;
            };
            class _xx_Aegis_60Rnd_545x39_Mag_Tracer_Green_F
            {
                magazine="Aegis_60Rnd_545x39_Mag_Tracer_Green_F";
                count=1;
            };
        };
        class TransportItems
        {
            class _xx_optic_tws_mg
            {
                name="optic_tws_mg";
                count=1;
            };
            class _xx_bipod_02_F_blk
            {
                name="bipod_02_F_blk";
                count=1;
            };
            class _xx_muzzle_snds_545
            {
                name="muzzle_snds_545";
                count=1;
            };
        };
    };
    class AX_B_EAssaultPack_arid_AA_F: AX_B_EAssaultPack_arid_F
    {
        scope=1;
        author="$STR_A3_GS_Axle";
        class TransportMagazines
        {
            class _xx_Titan_AA
            {
                magazine="Titan_AA";
                count=1;
            };
        };
    };
    class AX_B_EAssaultPack_arid_AT_F: AX_B_EAssaultPack_arid_F
    {
        scope=1;
        author="$STR_A3_GS_Axle";
        class TransportMagazines
        {
            class _xx_Titan_AT
            {
                magazine="Titan_AT";
                count=1;
            };
            class _xx_Titan_AP
            {
                magazine="Titan_AP";
                count=1;
            };
        };
    };
    class AX_B_EAssaultPack_arid_HAT_F: AX_B_EAssaultPack_arid_F
    {
        scope=1;
        author="$STR_A3_GS_Axle";
        class TransportMagazines
        {
            class _xx_Vorona_HEAT
            {
                magazine="Vorona_HEAT";
                count=1;
            };
        };
    };
    class AX_B_EAssaultPack_arid_Repair_F: AX_B_EAssaultPack_arid_F
    {
        scope=1;
        author="$STR_A3_GS_Axle";
        class TransportItems
        {
            class _xx_ToolKit
            {
                name="ToolKit";
                count=1;
            };
        };
    };