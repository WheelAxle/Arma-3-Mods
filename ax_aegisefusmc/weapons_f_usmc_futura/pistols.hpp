	class AX_hgun_ACPC2_coy_F: hgun_ACPC2_F
	{
		author="$STR_A3_MCFU_Axle";
		baseWeapon="AX_hgun_ACPC2_coy_F";
		displayName="$STR_A3_MCFU_hgun_ACPC2_coy_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\pistols\acpc2\data\ui\Icon_hgun_acpc2_coy_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\pistols\acpc2\data\acpc2_coy_co.paa",
		};
	};
	class AX_hgun_P320_coy_F: Aegis_hgun_P320_sand_F
	{
		author="$STR_A3_MCFU_Axle";
		baseWeapon="AX_hgun_P320_coyote_F";
		displayname="$STR_A3_MCFU_hgun_P320_coyote_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\pistols\p320\data\ui\Icon_hgun_P320_coy_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\pistols\p320\data\hgun_p320_coy_co.paa",
		};
	};
	class AX_hgun_Pistol_heavy_01_coy_snds_F: ef_hgun_Pistol_heavy_01_coy
	{
		author="$STR_EF_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_acp";
			};
		};
	};
	class AX_hgun_P07_coy_snds_F: ef_hgun_P07_coy
	{
		author="$STR_EF_AUTHOR";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
		};
	};
	class AX_hgun_ACPC2_coy_snds_F: AX_hgun_ACPC2_coy_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_acp";
			};
		};
	};
	class AX_hgun_P320_coy_snds_F: AX_hgun_P320_coy_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
		};
	};