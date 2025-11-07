	class AX_B_RadioBag_01_irdpm_F: B_RadioBag_01_hex_F
	{
		author="$STR_A3_GRFU_Axle";
		displayName="$STR_A3_GRFU_B_RadioBag_01_irdpm_F0";
		picture="\ax_grounded_futura\characters_f_iran\backpacks\data\ui\icon_B_RadioBag_01_irdpm_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\characters_f_iran\backpacks\data\B_RadioBag_01_irdpm_CO.paa"
		};
	};
	class AX_B_RadioBag_01_CHex_F: B_RadioBag_01_hex_F
	{
		author="$STR_A3_GRFU_Axle";
		displayName="$STR_A3_GRFU_B_RadioBag_01_CHex_F0";
		picture="\ax_grounded_futura\characters_f_iran\backpacks\data\ui\icon_B_RadioBag_01_CHex_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\characters_f_iran\backpacks\data\B_RadioBag_01_CHex_CO.paa"
		};
	};
	class AX_B_Carryall_cbr_Ammo: B_Carryall_cbr
	{
		author="$STR_A3_GRFU_Axle";
		scope=1;
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_green
			{
				magazine="30Rnd_65x39_caseless_green";
				count=6;
			};
			class _xx_150Rnd_762x54_Box
			{
				magazine="150Rnd_762x54_Box";
				count=1;
			};
			class _xx_RPG32_F
			{
				magazine="RPG32_F";
				count=1;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=2;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=2;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_10Rnd_93x64_DMR_05_Mag
			{
				magazine="10Rnd_93x64_DMR_05_Mag";
				count=2;
			};
			class _xx_10Rnd_762x54_Mag
			{
				magazine="10Rnd_762x54_Mag";
				count=3;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
	};
    class AX_B_Carryall_cbr_Exp: B_Carryall_cbr
	{
        author="$STR_A3_GRFU_Axle";
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
	class AX_B_Carryall_cbr_Eng: B_Carryall_cbr
	{
		author="$STR_A3_GRFU_Axle";
		scope=1;
		class TransportMagazines
		{
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine="SatchelCharge_Remote_Mag";
				count=1;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=2;
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
	class AX_B_FieldPack_cbr_LAT: B_FieldPack_cbr
	{
		author="$STR_A3_GRFU_Axle";
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
	class AX_B_FieldPack_hex_Medic_QRF: B_FieldPack_ocamo
	{
		author="$STR_A3_GRFU_Axle";
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
			class _xx_20Rnd_127x55_Mag_RF
			{
				name="20Rnd_127x55_Mag_RF";
				count=1;
			};
			class _xx_10Rnd_127x55_Mag_RF
			{
				name="10Rnd_127x55_Mag_RF";
				count=1;
			};
		};
	};
	class AX_B_FieldPack_hex_HAT_QRF: B_FieldPack_ocamo
	{
		author="$STR_A3_GRFU_Axle";
		scope=1;
		class TransportMagazines
		{
			class _xx_Vorona_HEAT
			{
				magazine="Vorona_HEAT";
				count=1;
			};
			class _xx_20Rnd_127x55_Mag_RF
			{
				magazine="20Rnd_127x55_Mag_RF";
				count=3;
			};
		};
	};
	class AX_B_TacticalPack_hex_AR_QRF: B_TacticalPack_ocamo
	{
		author="$STR_A3_GRFU_Axle";
		scope=1;
		class TransportMagazines
		{
			class _xx_150Rnd_762x54_Box
			{
				magazine="150Rnd_762x54_Box";
				count=4;
			};
		};
	};
	class AX_B_TacticalPack_hex_GL_QRF: B_TacticalPack_ocamo
	{
		author="$STR_A3_GRFU_Axle";
		scope=1;
		class TransportMagazines
		{
			class _xx_20Rnd_127x55_Mag_RF
			{
				magazine="20Rnd_127x55_Mag_RF";
				count=4;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
		};
	};
	class AX_B_TacticalPack_hex_RI_QRF: B_TacticalPack_ocamo
	{
		author="$STR_A3_GRFU_Axle";
		scope=1;
		class TransportMagazines
		{
			class _xx_20Rnd_127x55_Mag_RF
			{
				magazine="20Rnd_127x55_Mag_RF";
				count=5;
			};
		};
	};
	class AX_B_TacticalPack_hex_M_QRF: B_TacticalPack_ocamo
	{
		author="$STR_A3_GRFU_Axle";
		scope=1;
		class TransportMagazines
		{
			class _xx_20Rnd_127x55_Mag_RF
			{
				magazine="20Rnd_127x55_Mag_RF";
				count=4;
			};
		};
	};
	class AX_B_TacticalPack_hex_SL_QRF: B_TacticalPack_ocamo
	{
		author="$STR_A3_GRFU_Axle";
		scope=1;
		class TransportMagazines
		{
			class _xx_20Rnd_127x55_Mag_RF
			{
				magazine="20Rnd_127x55_Mag_RF";
				count=5;
			};
		};
	};
	class AX_B_FieldPack_blk_Medic_QRF: B_FieldPack_blk
	{
		author="$STR_A3_GRFU_Axle";
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
			class _xx_20Rnd_127x55_Mag_RF
			{
				name="20Rnd_127x55_Mag_RF";
				count=1;
			};
			class _xx_10Rnd_127x55_Mag_RF
			{
				name="10Rnd_127x55_Mag_RF";
				count=1;
			};
		};
	};
	class AX_B_FieldPack_blk_HAT_QRF: B_FieldPack_blk
	{
		author="$STR_A3_GRFU_Axle";
		scope=1;
		class TransportMagazines
		{
			class _xx_Vorona_HEAT
			{
				magazine="Vorona_HEAT";
				count=1;
			};
			class _xx_20Rnd_127x55_Mag_RF
			{
				magazine="20Rnd_127x55_Mag_RF";
				count=3;
			};
		};
	};
	class AX_B_TacticalPack_blk: B_TacticalPack_blk
	{
		scope=1;
		author="$STR_A3_GRFU_Axle";
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\characters_f_iran\backpacks\data\backpack_small_blk_co.paa"
		};
	};
	class AX_B_TacticalPack_blk_AR_QRF: AX_B_TacticalPack_blk
	{
		author="$STR_A3_GRFU_Axle";
		scope=1;
		class TransportMagazines
		{
			class _xx_150Rnd_762x54_Box
			{
				magazine="150Rnd_762x54_Box";
				count=4;
			};
		};
	};
	class AX_B_TacticalPack_blk_GL_QRF: AX_B_TacticalPack_blk
	{
		author="$STR_A3_GRFU_Axle";
		scope=1;
		class TransportMagazines
		{
			class _xx_20Rnd_127x55_Mag_RF
			{
				magazine="20Rnd_127x55_Mag_RF";
				count=4;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=4;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
		};
	};
	class AX_B_TacticalPack_blk_RI_QRF: AX_B_TacticalPack_blk
	{
		author="$STR_A3_GRFU_Axle";
		scope=1;
		class TransportMagazines
		{
			class _xx_20Rnd_127x55_Mag_RF
			{
				magazine="20Rnd_127x55_Mag_RF";
				count=5;
			};
		};
	};
	class AX_B_TacticalPack_blk_M_QRF: AX_B_TacticalPack_blk
	{
		author="$STR_A3_GRFU_Axle";
		scope=1;
		class TransportMagazines
		{
			class _xx_20Rnd_127x55_Mag_RF
			{
				magazine="20Rnd_127x55_Mag_RF";
				count=4;
			};
		};
	};
	class AX_B_TacticalPack_blk_SL_QRF: AX_B_TacticalPack_blk
	{
		author="$STR_A3_GRFU_Axle";
		scope=1;
		class TransportMagazines
		{
			class _xx_20Rnd_127x55_Mag_RF
			{
				magazine="20Rnd_127x55_Mag_RF";
				count=5;
			};
		};
	};