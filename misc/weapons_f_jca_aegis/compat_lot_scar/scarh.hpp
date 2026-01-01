    class arifle_SCAR_base_F: Rifle_Base_F
	{
		hiddenSelectionsMaterials[]=
		{
			"\lot_aaf_scar\Data\SCAR_01.rvmat",
			"\lot_aaf_scar\Data\SCAR_02.rvmat"
		};
        hiddenSelectionsTextures[]=
		{
			"\lot_aaf_scar\Data\SCAR_01_CO.paa",
			"\lot_aaf_scar\Data\SCAR_02_CO.paa"
		};
    };
	class arifle_SCAR_GL_base_F: arifle_SCAR_base_F
	{
		hiddenSelectionsMaterials[]=
		{
			"\lot_aaf_scar\Data\SCAR_01.rvmat",
			"\lot_aaf_scar\Data\SCAR_02.rvmat",
			"\lot_aaf_scar\Data\sa80_f_gl.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\lot_aaf_scar\Data\SCAR_01_CO.paa",
			"\lot_aaf_scar\Data\SCAR_02_CO.paa",
			"\lot_aaf_scar\Data\SA80_F_GL_snd_CO.paa"
		};
    };
	class arifle_SCAR_short_base_F: arifle_SCAR_base_F{};
	class arifle_SCAR_grip_base_F: arifle_SCAR_base_F{};
    class arifle_SCAR_grip_short_base_F: arifle_SCAR_short_base_F
	{
		model="\lot_aaf_scar\SCAR_short_grip_F.p3d";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Rifles\SPAR_02\Data\Anim\SPAR_02.rtm"
		};
		reloadAction="JCA_GestureReloadM4A1";
    };
	class arifle_SCAR_black_base_F: arifle_SCAR_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\lot_aaf_scar\Data\SCAR_01_black_CO.paa",
			"\lot_aaf_scar\Data\SCAR_02_black_CO.paa"
		};
    };
	class arifle_SCAR_GL_black_base_F: arifle_SCAR_GL_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\lot_aaf_scar\Data\SCAR_01_black_CO.paa",
			"\lot_aaf_scar\Data\SCAR_02_black_CO.paa",
			"\lot_aaf_scar\Data\SA80_F_GL_CO.paa"
		};
	};
	class arifle_SCAR_short_black_base_F: arifle_SCAR_short_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\lot_aaf_scar\Data\SCAR_01_black_CO.paa",
			"\lot_aaf_scar\Data\SCAR_02_black_CO.paa"
		};
	};
   	class arifle_SCAR_grip_black_base_F: arifle_SCAR_grip_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\lot_aaf_scar\Data\SCAR_01_black_CO.paa",
			"\lot_aaf_scar\Data\SCAR_02_black_CO.paa"
		};
	};
	class arifle_SCAR_grip_short_black_base_F: arifle_SCAR_grip_short_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\lot_aaf_scar\Data\SCAR_01_black_CO.paa",
			"\lot_aaf_scar\Data\SCAR_02_black_CO.paa"
		};
	};
	class arifle_SCAR_khaki_base_F: arifle_SCAR_base_F
	{
	};
	class arifle_SCAR_GL_khaki_base_F: arifle_SCAR_GL_base_F
	{
	};
	class arifle_SCAR_short_khaki_base_F: arifle_SCAR_short_base_F
	{
	};
	class arifle_SCAR_grip_khaki_base_F: arifle_SCAR_grip_base_F
	{
	};
    class arifle_SCAR_grip_short_khaki_base_F: arifle_SCAR_grip_short_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_01_khaki_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR\Data\SCAR_02_khaki_CO.paa"
		};
	};
	class arifle_SCAR_olive_base_F: arifle_SCAR_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\lot_aaf_scar\Data\SCAR_01_khaki_CO.paa",
			"\lot_aaf_scar\Data\SCAR_02_khaki_CO.paa"
		};
	};
	class arifle_SCAR_GL_olive_base_F: arifle_SCAR_GL_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\lot_aaf_scar\Data\SCAR_01_khaki_CO.paa",
			"\lot_aaf_scar\Data\SCAR_02_khaki_CO.paa",
			"\lot_aaf_scar\Data\SA80_F_GL_khk_CO.paa"
		};
	};
	class arifle_SCAR_short_olive_base_F: arifle_SCAR_short_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\lot_aaf_scar\Data\SCAR_01_khaki_CO.paa",
			"\lot_aaf_scar\Data\SCAR_02_khaki_CO.paa"
		};
	};
	class arifle_SCAR_grip_olive_base_F: arifle_SCAR_grip_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\lot_aaf_scar\Data\SCAR_01_khaki_CO.paa",
			"\lot_aaf_scar\Data\SCAR_02_khaki_CO.paa"
		};
	};
    class arifle_SCAR_grip_short_olive_base_F: arifle_SCAR_grip_short_base_F
	{
		hiddenSelectionsTextures[]=
		{
			"\lot_aaf_scar\Data\SCAR_01_khaki_CO.paa",
			"\lot_aaf_scar\Data\SCAR_02_khaki_CO.paa"
		};
	};
	class arifle_SCAR_grip_short_F: arifle_SCAR_grip_short_base_F
	{
		author="$STR_A3_A_AveryTheKitty_and_Garkain";
		scope=2;
		displayName="$STR_A3_A_CfgWeapons_arifle_SCAR_grip_short_F0";
		picture="\ax_weapons_f_jca_aegis\data\ui\icon_arifle_SCAR_grip_short_F_CA.paa";
		baseWeapon="arifle_SCAR_grip_short_F";
	};
	class arifle_SCAR_grip_short_black_F: arifle_SCAR_grip_short_black_base_F
	{
		author="$STR_A3_A_AveryTheKitty_and_Garkain";
		scope=2;
		displayName="$STR_A3_A_CfgWeapons_arifle_SCAR_grip_short_black_F0";
		picture="\ax_weapons_f_jca_aegis\data\ui\icon_arifle_SCAR_grip_short_black_F_CA.paa";
		baseWeapon="arifle_SCAR_grip_short_black_F";
	};
	class arifle_SCAR_grip_short_khaki_F: arifle_SCAR_grip_short_khaki_base_F
	{
		author="$STR_A3_A_AveryTheKitty_and_Garkain";
		scope=2;
		displayName="$STR_A3_A_CfgWeapons_arifle_SCAR_grip_short_khaki_F0";
		picture="\ax_weapons_f_jca_aegis\data\ui\icon_arifle_SCAR_grip_short_khaki_F_CA.paa";
		baseWeapon="arifle_SCAR_grip_short_khaki_F";
	};

	class arifle_SCAR_olive_F: arifle_SCAR_olive_base_F
	{
		author="Lotto";
		scope=2;
		displayName="$STR_A3_A_CfgWeapons_arifle_SCAR_olive_F0";
		picture="\ax_weapons_f_jca_aegis\data\ui\icon_arifle_SCAR_olive_F_CA.paa";
		baseWeapon="arifle_SCAR_olive_F";
	};
	class arifle_SCAR_GL_olive_F: arifle_SCAR_GL_olive_base_F
	{
		author="Lotto";
		scope=2;
		displayName="$STR_A3_A_CfgWeapons_arifle_SCAR_GL_olive_F0";
		picture="\lot_aaf_scar\Data\UI\icon_lot_SCAR_GL_khaki_F_X_CA.paa";
		baseWeapon="arifle_SCAR_GL_olive_F";
	};
	class arifle_SCAR_short_olive_F: arifle_SCAR_short_olive_base_F
	{
		author="Lotto";
		scope=2;
		displayName="$STR_A3_A_CfgWeapons_arifle_SCAR_short_olive_F0";
		picture="\lot_aaf_scar\Data\UI\icon_lot_SCAR_short_khaki_F_X_CA.paa";
		baseWeapon="arifle_SCAR_short_olive_F";
	};
	class arifle_SCAR_grip_olive_F: arifle_SCAR_grip_olive_base_F
	{
		author="Lotto";
		scope=2;
		displayName="$STR_A3_A_CfgWeapons_arifle_SCAR_grip_olive_F0";
		picture="\lot_aaf_scar\Data\UI\icon_lot_SCAR_grip_khaki_F_X_CA.paa";
		baseWeapon="arifle_SCAR_grip_olive_F";
	};
	class arifle_SCAR_grip_short_olive_F: arifle_SCAR_grip_short_olive_base_F
	{
		author="Lotto";
		scope=2;
		displayName="$STR_A3_A_CfgWeapons_arifle_SCAR_grip_short_olive_F0";
		picture="\ax_weapons_f_jca_aegis\data\ui\icon_arifle_SCAR_grip_short_olive_F_CA.paa";
		baseWeapon="arifle_SCAR_grip_short_olive_F";
	};