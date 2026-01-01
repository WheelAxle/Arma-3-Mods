	class Aegis_arifle_M16A4_base_F: Rifle_Base_F
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\weapons_f_JCA_IA\Rifles\M16A4\data\anim\M16A4.rtm"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: JCA_RailSLot_AR
			{
				iconPosition[]={0.34999999,0.44999999};
				iconScale=0.2;
			};
		};
	};
	class Aegis_arifle_M16A4_FG_base_F: Aegis_arifle_M16A4_base_F
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\weapons_f_JCA_IA\Rifles\M16A4\data\anim\M16A4_FG.rtm"
		};
	};
	class Aegis_arifle_M16A4_GL_base_F: Aegis_arifle_M16A4_base_F
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\weapons_f_JCA_IA\Rifles\M16A4\data\anim\M16A4_GL.rtm"
		};
	};
	class Aegis_arifle_M16A4_F: Aegis_arifle_M16A4_base_F
	{
	};
	class Aegis_arifle_M16A4_olive_F: Aegis_arifle_M16A4_base_F
	{
		author="$STR_A3_A_Grave_3dGunsmith";
		scope=2;
		displayName="$STR_A3_AX_arifle_M16A4_olive_F";
		picture="\weapons_f_JCA_IA\Rifles\M16A4\data\UI\Icon_arifle_M16A4_olive_F_CA.paa";
		baseWeapon="Aegis_arifle_M16A4_olive_F";
		hiddenSelectionsTextures[]=
		{
			"\weapons_f_JCA_IA\Rifles\M16A4\Data\arifle_M16A4_01_olive_CO.paa",
			"\weapons_f_JCA_IA\Rifles\M16A4\Data\arifle_M16A4_02_olive_CO.paa"
		};
	};
	class Aegis_arifle_M16A4_sand_F: Aegis_arifle_M16A4_base_F
	{
		author="$STR_A3_A_Grave_3dGunsmith";
		scope=2;
		displayName="$STR_A3_AX_arifle_M16A4_sand_F";
		picture="\weapons_f_JCA_IA\Rifles\M16A4\data\UI\Icon_arifle_M16A4_sand_F_CA.paa";
		baseWeapon="Aegis_arifle_M16A4_sand_F";
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Sand"
		};
		hiddenSelectionsTextures[]=
		{
			"\weapons_f_JCA_IA\Rifles\M16A4\Data\arifle_M16A4_01_sand_CO.paa",
			"\weapons_f_JCA_IA\Rifles\M16A4\Data\arifle_M16A4_02_sand_CO.paa"
		};
	};
	class Aegis_arifle_M16A4_FG_F: Aegis_arifle_M16A4_FG_base_F
	{
	};
	class Aegis_arifle_M16A4_FG_olive_F: Aegis_arifle_M16A4_FG_base_F
	{
		author="$STR_A3_A_Grave_3dGunsmith";
		scope=2;
		displayName="$STR_A3_AX_arifle_M16A4_FG_olive_F";
		picture="\weapons_f_JCA_IA\Rifles\M16A4\data\UI\Icon_arifle_M16A4_FG_olive_F_CA.paa";
		baseWeapon="Aegis_arifle_M16A4_FG_olive_F";
		hiddenSelectionsTextures[]=
		{
			"\weapons_f_JCA_IA\Rifles\M16A4\Data\arifle_M16A4_01_olive_CO.paa",
			"\weapons_f_JCA_IA\Rifles\M16A4\Data\arifle_M16A4_02_olive_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_05_black_CO.paa"
		};
	};
	class Aegis_arifle_M16A4_FG_sand_F: Aegis_arifle_M16A4_FG_base_F
	{
		author="$STR_A3_A_Grave_3dGunsmith";
		scope=2;
		displayName="$STR_A3_AX_arifle_M16A4_FG_sand_F";
		picture="\weapons_f_JCA_IA\Rifles\M16A4\data\UI\Icon_arifle_M16A4_sand_F_CA.paa";
		baseWeapon="Aegis_arifle_M16A4_FG_sand_F";
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Sand"
		};
		hiddenSelectionsTextures[]=
		{
			"\weapons_f_JCA_IA\Rifles\M16A4\Data\arifle_M16A4_01_sand_CO.paa",
			"\weapons_f_JCA_IA\Rifles\M16A4\Data\arifle_M16A4_02_sand_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_05_black_CO.paa"
		};
	};
	class Aegis_arifle_M16A4_GL_F: Aegis_arifle_M16A4_GL_base_F
	{
	};
	class Aegis_arifle_M16A4_GL_olive_F: Aegis_arifle_M16A4_GL_base_F
	{
		author="$STR_A3_A_Grave_3dGunsmith";
		scope=2;
		displayName="$STR_A3_AX_arifle_M16A4_GL_olive_F";
		picture="\weapons_f_JCA_IA\Rifles\M16A4\data\UI\Icon_arifle_M16A4_GL_olive_F_CA.paa";
		baseWeapon="Aegis_arifle_M16A4_GL_olive_F";
		hiddenSelectionsTextures[]=
		{
			"\weapons_f_JCA_IA\Rifles\M16A4\Data\arifle_M16A4_01_olive_CO.paa",
			"\weapons_f_JCA_IA\Rifles\M16A4\Data\arifle_M16A4_02_olive_CO.paa",
			"\weapons_f_JCA_IA\Rifles\M16A4\Data\arifle_M16A4_03_olive_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_04_black_CO.paa"
		};
	};
	class Aegis_arifle_M16A4_GL_sand_F: Aegis_arifle_M16A4_GL_base_F
	{
		author="$STR_A3_A_Grave_3dGunsmith";
		scope=2;
		displayName="$STR_A3_AX_arifle_M16A4_GL_sand_F";
		picture="\weapons_f_JCA_IA\Rifles\M16A4\data\UI\Icon_arifle_M16A4_GL_olive_F_CA.paa";
		baseWeapon="Aegis_arifle_M16A4_GL_sand_F";
		magazines[]=
		{
			"30Rnd_556x45_Stanag_Sand"
		};
		hiddenSelectionsTextures[]=
		{
			"\weapons_f_JCA_IA\Rifles\M16A4\Data\arifle_M16A4_01_sand_CO.paa",
			"\weapons_f_JCA_IA\Rifles\M16A4\Data\arifle_M16A4_02_sand_CO.paa",
			"\weapons_f_JCA_IA\Rifles\M16A4\Data\arifle_M16A4_03_sand_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_04_black_CO.paa"
		};
	};
