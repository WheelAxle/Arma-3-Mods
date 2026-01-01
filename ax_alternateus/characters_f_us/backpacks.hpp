    class B_Kitbag_mcamo;
    class B_Kitbag_cbr;
    class B_Kitbag_rgr;
	class B_Kitbag_khk;
    class B_Carryall_mcamo;
    class B_AssaultPack_rgr;
    class B_AssaultPackSpec_rgr;
    class B_AssaultPack_khk;
    class B_AssaultPack_mcamo;
    class B_AssaultPackSpec_mcamo;
    class AX_B_Kitbag_mcamo_patrol_Ammo_F: B_Kitbag_mcamo
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=6;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine="150Rnd_556x45_Drum_Mag_F";
				count=2;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=1;
			};
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=1;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=1;
			};
		};
	};
    class AX_B_Kitbag_rgr_patrol_Medic_F: B_Kitbag_rgr
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=1;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=1;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
	};
    class AX_B_AssaultPackSpec_mcamo_patrol_Medic_F: B_AssaultPackSpec_mcamo
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		class TransportMagazines
		{
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=1;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=1;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=1;
			};
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=1;
			};
			class _xx_SmokeShellYellow
			{
				magazine="SmokeShellYellow";
				count=1;
			};
		};
		class TransportItems
		{
			class _xx_Medikit
			{
				name="Medikit";
				count=1;
			};
		};
	};
    class AX_B_Carryall_mcamo_patrol_Ammo_F: B_Carryall_mcamo
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		class TransportMagazines
		{
			class _xx_30Rnd_556x45_Stanag_red
			{
				magazine="30Rnd_556x45_Stanag_red";
				count=6;
			};
			class _xx_150Rnd_556x45_Drum_Mag_F
			{
				magazine="150Rnd_556x45_Drum_Mag_F";
				count=2;
			};
			class _xx_200Rnd_65x39_cased_Box
			{
				magazine="200Rnd_65x39_cased_Box";
				count=1;
			};
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=1;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=1;
			};
		};
	};
	class AX_B_Kitbag_rgr_AT_F: B_Kitbag_rgr
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		class TransportMagazines
		{
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
		};
	};
	class AX_B_Kitbag_mcamo_Exp_F: B_Kitbag_mcamo
	{
		author="$STR_A3_Bohemia_Interactive";
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
	class AX_B_AssaultPack_khk2: B_AssaultPack_khk
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		scopeArsenal=1;
		//picture="\A3\Weapons_F\Ammoboxes\Bags\data\UI\icon_B_AssaultPack_khk_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_alternateus\characters_f_us\backpacks\data\backpack_compact_khk_co.paa"
		};
	};
	class AX_B_AssaultPack_khk_LAT: AX_B_AssaultPack_khk2
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=2;
			};
		};
	};
	class AX_B_AssaultPack_khk_LAT2: AX_B_AssaultPack_khk2
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		class TransportMagazines
		{
			class _xx_MRAWS_HEAT_F
			{
				magazine="MRAWS_HEAT_F";
				count=2;
			};
			class _xx_MRAWS_HE_F
			{
				magazine="MRAWS_HE_F";
				count=1;
			};
		};
	};
	class AX_B_AssaultPack_khk_Medic: AX_B_AssaultPack_khk2
	{
		author="$STR_A3_Bohemia_Interactive";
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
	class AX_B_AssaultPack_khk_Repair: AX_B_AssaultPack_khk2
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
	};
	class AX_B_AssaultPack_khk_ReconMedic: AX_B_AssaultPack_khk2
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		class TransportMagazines
		{
			class _xx_SmokeShellRed
			{
				magazine="SmokeShellRed";
				count=1;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=1;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=1;
			};
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
				count=5;
			};
		};
	};
	class AX_B_AssaultPack_khk_ReconExp: AX_B_AssaultPack_khk2
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		class TransportMagazines
		{
			class _xx_ClaymoreDirectionalMine_Remote_Mag
			{
				magazine="ClaymoreDirectionalMine_Remote_Mag";
				count=2;
			};
			class _xx_APERSBoundingMine_Range_Mag
			{
				magazine="APERSBoundingMine_Range_Mag";
				count=3;
			};
			class _xx_DemoCharge_Remote_Mag
			{
				magazine="DemoCharge_Remote_Mag";
				count=1;
			};
			class _xx_SLAMDirectionalMine_Wire_Mag
			{
				magazine="SLAMDirectionalMine_Wire_Mag";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_MineDetector
			{
				name="MineDetector";
				count=1;
			};
			class _xx_ToolKit
			{
				name="ToolKit";
				count=1;
			};
		};
	};
	class AX_B_AssaultPack_khk_ReconLAT: AX_B_AssaultPack_khk2
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		class TransportMagazines
		{
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=2;
			};
		};
	};
	class AX_B_Kitbag_khk_Exp: B_Kitbag_khk
	{
		author="$STR_A3_Bohemia_Interactive";
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
		hiddenSelectionsTextures[]=
		{
			"\ax_alternateus\characters_f_us\backpacks\data\backpack_fast_khk_co.paa"
		};
	};
	class AX_B_Kitbag_khk_AAR: B_Kitbag_khk
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=1;
		class TransportMagazines
		{
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=2;
			};
			class _xx_100Rnd_65x39_caseless_mag_Tracer
			{
				magazine="100Rnd_65x39_caseless_mag_Tracer";
				count=2;
			};
			class _xx_130Rnd_338_Mag
			{
				magazine="130Rnd_338_Mag";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_optic_tws_mg
			{
				name="optic_tws_mg";
				count=1;
			};
			class _xx_bipod_01_F_snd
			{
				name="bipod_01_F_snd";
				count=1;
			};
			class _xx_muzzle_snds_338_sand
			{
				name="muzzle_snds_338_sand";
				count=1;
			};
			class _xx_muzzle_snds_H_snd_F
			{
				name="muzzle_snds_H_snd_F";
				count=1;
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_alternateus\characters_f_us\backpacks\data\backpack_fast_khk_co.paa"
		};
	};