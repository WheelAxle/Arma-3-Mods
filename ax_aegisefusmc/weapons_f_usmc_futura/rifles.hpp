/* If you looked at taking the textures for the M16, they are NOT APL-SA as Grave told me. They are APL-ND. I put too much work into them before finding out. Will remove them soon.
	class AX_arifle_M16A3_base_F: Aegis_arifle_M16A4_base_F
	{
		hiddenSelectionsMaterials[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\m16\data\arifle_M16A3_01.rvmat",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_02.rvmat"
		};
		modes[]=
		{
			"Single",
			"FullAuto",
			"single_medium_optics1",
			"single_medium_optics2",
			"FullAuto_medium"
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Aegis_M4A1_Shot_SoundSet",
					"Aegis_M4A1_Tail_SoundSet",
					"Aegis_M4A1_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"VelkoR5_silencerShot_SoundSet",
					"AK12_silencerTail_SoundSet",
					"AK12_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.092299998;
			dispersion=0.00075000001;
			minRange=0;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer=0;
			burst=3;
			minRange=2;
			minRangeProbab=0.5;
			midRange=100;
			midRangeProbab=0.69999999;
			maxRange=150;
			maxRangeProbab=0.050000001;
			aiRateOfFire=2;
		};
	};
	class AX_arifle_M16A3_FG_base_F: AX_arifle_M16A3_base_F
	{
		model="A3_Aegis\Weapons_F_Aegis\Rifles\M16\M16A4_FG_F.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsMaterials[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\m16\data\arifle_M16A3_01.rvmat",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_02.rvmat",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_05.rvmat"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\data\anim\M16A4_FG.rtm"
		};
		inertia=0.5;
		dexterity=1.5;
		aimTransitionSpeed=1.1;
		initSpeed=800;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=85;
		};
	};
	class AX_arifle_M16A3_GL_base_F: AX_arifle_M16A3_base_F
	{
		UiPicture="\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
		model="A3_Aegis\Weapons_F_Aegis\Rifles\M16\M16A4_GL_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4"
		};
		hiddenSelectionsMaterials[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\m16\data\arifle_M16A3_01.rvmat",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_02.rvmat",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_03.rvmat",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_04.rvmat"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\data\anim\M16A4_GL.rtm"
		};
		reloadAction="Aegis_GestureReloadM16A4_GL_Magazine";
		inertia=0.60000002;
		dexterity=1.3;
		aimTransitionSpeed=0.89999998;
		initSpeed=800;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot
			{
			};
			mass=105;
		};
		muzzles[]=
		{
			"this",
			"UGL"
		};
		class UGL: UGL_F
		{
			displayName="UGL";
			useModelOptics=0;
			useExternalOptic=0;
			cameraDir="OP_look";
			discreteDistance[]={50,100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye_50",
				"OP_eye_100",
				"OP_eye_150",
				"OP_eye_200",
				"OP_eye_250",
				"OP_eye_300",
				"OP_eye_350",
				"OP_eye_400"
			};
			discreteDistanceInitIndex=1;
			reloadAction="Aegis_GestureReloadM16A4_GL_Shell";
			magazineReloadSwitchPhase=0.40000001;
			reloadMagazineSound[]=
			{
				"A3_Aegis\Sounds_F_Aegis\arsenal\weapons\Rifles\M4A1\M4A1_GL_reload",
				1,
				1,
				10
			};
			class Single: Mode_SemiAuto
			{
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					soundSetShot[]=
					{
						"Aegis_M4A1_GL_Shot_Soundset",
						"Msbs65_01_Ugl_Tail_SoundSet",
						"Msbs65_01_Ugl_InteriorTail_SoundSet"
					};
				};
			};
		};
	};
	class AX_arifle_M16A3_blk_F: AX_arifle_M16A3_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_M16A3_blk_F0";
		picture="\A3_Aegis\Weapons_F_Aegis\Rifles\M16\data\UI\Icon_arifle_M16A4_black_F_CA.paa";
		baseWeapon="AX_arifle_M16A3_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\m16\data\arifle_M16A3_01_black_CO.paa",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_02_black_CO.paa"
		};
	};
	class AX_arifle_M16A3_FG_blk_F: AX_arifle_M16A3_FG_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_M16A3_FG_blk_F0";
		picture="\A3_Aegis\Weapons_F_Aegis\Rifles\M16\data\UI\Icon_arifle_M16A4_FG_black_F_CA.paa";
		baseWeapon="AX_arifle_M16A3_FG_blk_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\m16\data\arifle_M16A3_01_black_CO.paa",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_02_black_CO.paa",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_05_black_CO.paa"
		};
	};
	class AX_arifle_M16A3_GL_blk_F: AX_arifle_M16A3_GL_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_M16A3_GL_blk_F0";
		picture="\A3_Aegis\Weapons_F_Aegis\Rifles\M16\data\UI\Icon_arifle_M16A4_GL_black_F_CA.paa";
		baseWeapon="AX_arifle_M16A3_GL_blk_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\m16\data\arifle_M16A3_01_black_CO.paa",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_02_black_CO.paa",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_03_black_CO.paa",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_04_black_CO.paa"
		};
	};
	class AX_arifle_M16A3_spray_F: AX_arifle_M16A3_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_M16A3_spray_F0";
		picture="\A3_Aegis\Weapons_F_Aegis\Rifles\M16\data\UI\Icon_arifle_M16A4_black_F_CA.paa";
		baseWeapon="AX_arifle_M16A3_spray_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\m16\data\arifle_M16A3_01_spray_CO.paa",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_02_black_CO.paa"
		};
	};
	class AX_arifle_M16A3_FG_spray_F: AX_arifle_M16A3_FG_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_M16A3_FG_spray_F0";
		picture="\A3_Aegis\Weapons_F_Aegis\Rifles\M16\data\UI\Icon_arifle_M16A4_FG_black_F_CA.paa";
		baseWeapon="AX_arifle_M16A3_FG_spray_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\m16\data\arifle_M16A3_01_spray_CO.paa",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_02_black_CO.paa",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_05_black_CO.paa"
		};
	};
	class AX_arifle_M16A3_GL_spray_F: AX_arifle_M16A3_GL_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_M16A3_GL_spray_F0";
		picture="\A3_Aegis\Weapons_F_Aegis\Rifles\M16\data\UI\Icon_arifle_M16A4_GL_black_F_CA.paa";
		baseWeapon="AX_arifle_M16A3_GL_spray_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\m16\data\arifle_M16A3_01_spray_CO.paa",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_02_black_CO.paa",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_03_black_CO.paa",
			"A3_Aegis\Weapons_F_Aegis\Rifles\M16\Data\arifle_M16A4_04_black_CO.paa"
		};
	};
*/
	class ef_arifle_mxar_coy;
	class ef_arifle_mxar_gl_coy;
	class ef_arifle_mxc_coy;
	class ef_arifle_mx_coy;
	class ef_arifle_mx_gl_coy;
	class ef_arifle_mx_sw_coy;
	class ef_arifle_mxm_coy;
	class AX_arifle_mxar_coy_tt: ef_arifle_mxar_coy
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_arifle_MXAR_coy_tt_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\ui\icon_arifle_mxar_coy_tt_ca.paa";
		baseWeapon="AX_arifle_mxar_coy_tt";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\XMX_Base_coy_tt_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\XMX_LMG_coy_tt_CO.paa"
		};
    };
    class AX_arifle_mxar_spray: ef_arifle_mxar_coy
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_arifle_MXAR_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\ui\icon_arifle_mxar_spray_ca.paa";
		baseWeapon="AX_arifle_mxar_spray";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\XMX_Base_spray_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\XMX_LMG_spray_CO.paa"
		};
    };
	class AX_arifle_mxar_gl_coy_tt: ef_arifle_mxar_gl_coy
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_arifle_MXAR_GL_coy_tt_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\ui\icon_arifle_mxar_gl_coy_tt_ca.paa";
		baseWeapon="AX_arifle_mxar_gl_coy_tt";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\XMX_Base_coy_tt_CO.paa",
			"\ef\ef_weapons\mx\Data\arifle_mx_gl_coy_co.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\XMX_LMG_coy_tt_CO.paa"
		};
    };
	class AX_arifle_mxar_gl_spray: ef_arifle_mxar_gl_coy
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_arifle_MXAR_GL_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\ui\icon_arifle_mxar_gl_spray_ca.paa";
		baseWeapon="AX_arifle_mxar_gl_spray";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\XMX_Base_spray_CO.paa",
			"\ef\ef_weapons\mx\Data\arifle_mx_gl_coy_co.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\XMX_LMG_spray_CO.paa"
		};
    };
	class AX_arifle_mxc_coy_tt: ef_arifle_mxc_coy
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_arifle_MXC_coy_tt_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\ui\icon_arifle_mxc_coy_tt_ca.paa";
		baseWeapon="AX_arifle_mxc_coy_tt";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\XMX_Short_coy_tt_CO.paa",
		};
	};
    class AX_arifle_mxc_spray: ef_arifle_mxc_coy
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_arifle_MXC_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\ui\icon_arifle_mxc_spray_ca.paa";
		baseWeapon="AX_arifle_mxc_spray";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\XMX_Short_spray_CO.paa",
		};
	};
	class AX_arifle_mx_coy_tt: ef_arifle_mx_coy
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_arifle_MX_coy_tt_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\ui\icon_arifle_mx_coy_tt_ca.paa";
		baseWeapon="AX_arifle_mx_coy_tt";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\XMX_Base_coy_tt_CO.paa",
			"\ef\ef_weapons\mx\Data\arifle_mxc_coy_co.paa"
		};
    };
	class AX_arifle_mx_spray: ef_arifle_mx_coy
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_arifle_MX_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\ui\icon_arifle_mx_spray_ca.paa";
		baseWeapon="AX_arifle_mx_spray";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\XMX_Base_spray_CO.paa",
			"\ef\ef_weapons\mx\Data\arifle_mxc_coy_co.paa"
		};
    };
	class AX_arifle_mx_gl_coy_tt: ef_arifle_mx_gl_coy
    {
		author="$STR_A3_MCFU_Axle";
		baseWeapon="AX_arifle_mx_gl_coy_tt";
		displayName="$STR_A3_MCFU_arifle_MX_GL_coy_tt_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\ui\icon_arifle_mx_gl_coy_tt_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\XMX_Base_coy_tt_CO.paa",
			"\ef\ef_weapons\mx\Data\arifle_mx_gl_coy_co.paa"
		};
    };
	class AX_arifle_mx_gl_spray: ef_arifle_mx_gl_coy
    {
		author="$STR_A3_MCFU_Axle";
		baseWeapon="AX_arifle_mx_gl_spray";
		displayName="$STR_A3_MCFU_arifle_MX_GL_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\ui\icon_arifle_mx_gl_spray_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\XMX_Base_spray_CO.paa",
			"\ef\ef_weapons\mx\Data\arifle_mx_gl_coy_co.paa"
		};
    };
	class AX_arifle_mx_sw_coy_tt: ef_arifle_mx_sw_coy
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_arifle_MX_SW_coy_tt_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\ui\icon_arifle_mx_sw_coy_tt_ca.paa";
		baseWeapon="AX_arifle_mx_sw_coy_tt";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\XMX_LMG_coy_tt_CO.paa"
		};
    };
	class AX_arifle_mx_sw_spray: ef_arifle_mx_sw_coy
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_arifle_MX_SW_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\ui\icon_arifle_mx_sw_spray_ca.paa";
		baseWeapon="AX_arifle_mx_sw_spray";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\XMX_LMG_spray_CO.paa"
		};
    };
	class AX_arifle_mxm_coy_tt: ef_arifle_mxm_coy
	{
		author="$STR_A3_MCFU_Axle";
		baseWeapon="AX_arifle_mxm_coy_tt";
		displayName="$STR_A3_MCFU_arifle_MXM_coy_tt_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\ui\icon_arifle_mxm_coy_tt_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\XMX_Long_coy_tt_CO.paa"
		};
	};
	class AX_arifle_mxm_spray: ef_arifle_mxm_coy
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_arifle_MXM_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\ui\icon_arifle_mxm_spray_ca.paa";
		baseWeapon="AX_arifle_mxm_spray";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\mx\data\XMX_Long_spray_CO.paa"
		};
	};
//Variants
	class AX_arifle_mxar_coy_tt_pointer: AX_arifle_mxar_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
		};
	};
	class AX_arifle_mxar_coy_tt_RCO_pointer: AX_arifle_mxar_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
		};
	};
	class AX_arifle_mxar_coy_tt_ACO_pointer: AX_arifle_mxar_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
		};
	};
	class AX_arifle_mxar_coy_tt_Holo_pointer: AX_arifle_mxar_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ef_optic_Holosight_coy";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
		};
	};
	class AX_arifle_mxar_coy_tt_Holo: AX_arifle_mxar_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ef_optic_Holosight_coy";
			};
		};
	};
	class AX_arifle_mxar_coy_tt_ACO: AX_arifle_mxar_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
		};
	};
	class AX_arifle_mxar_gl_coy_tt_ACO: AX_arifle_mxar_gl_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
		};
	};
	class AX_arifle_mxar_gl_coy_tt_ACO_pointer: AX_arifle_mxar_gl_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
		};
	};
	class AX_arifle_mxar_gl_coy_tt_RCO_pointer: AX_arifle_mxar_gl_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
		};
	};
	class AX_arifle_mxar_coy_tt_ACO_pointer_snds: AX_arifle_mxar_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_coy";
			};
		};
	};
	class AX_arifle_mxar_coy_tt_RCO_pointer_snds: AX_arifle_mxar_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_coy";
			};
		};
	};
	class AX_arifle_mxar_gl_coy_tt_Holo_pointer_snds: AX_arifle_mxar_gl_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ef_optic_Holosight_coy";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_coy";
			};
		};
	};
	class AX_arifle_mxc_coy_tt_Holo: AX_arifle_mxc_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ef_optic_Holosight_coy";
			};
		};
	};
	class AX_arifle_mxm_coy_tt_RCO_LP_BI: AX_arifle_mxm_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class AX_arifle_mxm_coy_tt_DMS_LP_BI_snds: AX_arifle_mxm_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_coy";
			};
		};
	};
	class AX_arifle_mx_coy_tt_ACO_pointer_snds: AX_arifle_mx_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_coy";
			};
		};
	};
	class AX_arifle_mx_coy_tt_RCO_pointer_snds: AX_arifle_mx_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_coy";
			};
		};
	};
	class AX_arifle_mx_coy_tt_Holo_pointer_snds: AX_arifle_mx_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ef_optic_Holosight_coy";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_coy";
			};
		};
	};
	class AX_arifle_mx_coy_tt_MBS_pointer_snds: AX_arifle_mx_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ef_optic_mbs_coy";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_coy";
			};
		};
	};
	class AX_arifle_mx_gl_coy_tt_Holo_pointer_snds: AX_arifle_mx_gl_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ef_optic_Holosight_coy";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_coy";
			};
		};
	};
	class AX_arifle_mxc_coy_tt_ACO_pointer_snds: AX_arifle_mxc_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_coy";
			};
		};
	};
	class AX_arifle_mxc_spray_ACO_pointer_snds: AX_arifle_mxc_spray
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_coy";
			};
		};
	};
	class AX_arifle_mxar_gl_coy_tt_RCO_pointer_snds: AX_arifle_mxar_gl_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_coy";
			};
		};
	};
	class AX_arifle_mxm_coy_tt_MBS_LP_BI: AX_arifle_mxm_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ef_optic_mbs_remote_coy";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class AX_arifle_mxar_coy_tt_MBS_pointer_snds: AX_arifle_mxar_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ef_optic_mbs_remote_coy";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_coy";
			};
		};
	};
	class AX_arifle_mxm_coy_tt_MBS_LP_BI_snds: AX_arifle_mxm_coy_tt
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="ef_optic_mbs_remote_coy";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="EF_acc_pointer_IR_coy";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar_coy";
			};
		};
	};
//SR25
	class AX_arifle_SR25_twotone_F: Aegis_arifle_SR25_snd_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=1;
		displayName="$STR_A3_MCFU_arifle_SR25_twotone_F0";
		picture="\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\UI\Icon_arifle_SR25_black_F_CA.paa";
		baseWeapon="AX_arifle_SR25_twotone_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\arifle_SR25_01_black_CO.paa",
			"\A3_Aegis\weapons_f_aegis\Rifles\SR25\Data\arifle_SR25_02_sand_CO.paa"
		};
	};
	class AX_arifle_SR25_twotone_MRCO_LP_BI_F: AX_arifle_SR25_twotone_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_AMS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class AX_arifle_SR25_twotone_SOS_pointer_snds_F: AX_arifle_SR25_twotone_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="aegis_muzzle_snds_sr25_blk";
			};
		};
	};
	class AX_arifle_SR25_twotone_SOS_pointer_snds_BI_F: AX_arifle_SR25_twotone_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="aegis_muzzle_snds_sr25_blk";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};	
	class AX_arifle_SR25_twotone_DMS_pointer_snds_F: AX_arifle_SR25_twotone_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="acc_pointer_IR";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="aegis_muzzle_snds_sr25_blk";
			};
		};
	};
//SPAR
	class arifle_SPAR_01_khk_F;
	class arifle_SPAR_01_GL_khk_F;
	class arifle_SPAR_02_khk_F;
	class arifle_SPAR_03_khk_F;
	class arifle_SPAR_03_blk_F;
	class Aegis_arifle_SPAR_02_inf_khk_F;
	class AX_arifle_SPAR_01_coy_F: arifle_SPAR_01_khk_F
	{
		scope=2;
		author="$STR_A3_MCFU_Axle";
		baseWeapon="AX_arifle_SPAR_01_coy_F";
		displayName="$STR_A3_MCFU_arifle_SPAR_01_coy_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\ui\icon_arifle_SPAR_01_coy_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\arifle_SPAR_01_01_coy_Aegis_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\arifle_SPAR_01_02_coy_Aegis_CO.paa"
		};
	};
	class AX_arifle_SPAR_01_spray_F: arifle_SPAR_01_khk_F
	{
		scope=2;
		author="$STR_A3_MCFU_Axle";
		baseWeapon="AX_arifle_SPAR_01_spray_F";
		displayName="$STR_A3_MCFU_arifle_SPAR_01_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\ui\icon_arifle_SPAR_01_spray_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\arifle_SPAR_01_01_spray_Aegis_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\arifle_SPAR_01_02_spray_Aegis_CO.paa"
		};
	};
	class AX_arifle_SPAR_01_GL_coy_F: arifle_SPAR_01_GL_khk_F
	{
		scope=2;
		author="$STR_A3_MCFU_Axle";
		baseWeapon="AX_arifle_SPAR_01_GL_coy_F";
		displayName="$STR_A3_MCFU_arifle_SPAR_01_GL_coy_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\ui\icon_arifle_SPAR_01_GL_coy_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\arifle_SPAR_01_01_coy_Aegis_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\arifle_SPAR_01_02_coy_Aegis_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\arifle_SPAR_01_03_coy_Aegis_CO.paa"
		};
	};
	class AX_arifle_SPAR_01_GL_spray_F: arifle_SPAR_01_GL_khk_F
	{
		scope=2;
		author="$STR_A3_MCFU_Axle";
		baseWeapon="AX_arifle_SPAR_01_GL_spray_F";
		displayName="$STR_A3_MCFU_arifle_SPAR_01_GL_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\ui\icon_arifle_SPAR_01_GL_spray_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\arifle_SPAR_01_01_spray_Aegis_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\arifle_SPAR_01_02_spray_Aegis_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\arifle_SPAR_01_03_spray_Aegis_CO.paa"
		};
	};
	class AX_arifle_SPAR_02_coy_F: arifle_SPAR_02_khk_F
	{
		scope=2;
		author="$STR_A3_MCFU_Axle";
		baseWeapon="AX_arifle_SPAR_02_coy_F";
		displayName="$STR_A3_MCFU_arifle_SPAR_02_coy_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_02\data\ui\icon_arifle_SPAR_02_coy_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\arifle_SPAR_01_01_coy_Aegis_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\arifle_SPAR_01_02_coy_Aegis_CO.paa"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class AX_arifle_SPAR_02_spray_F: arifle_SPAR_02_khk_F
	{
		scope=2;
		author="$STR_A3_MCFU_Axle";
		baseWeapon="AX_arifle_SPAR_02_spray_F";
		displayName="$STR_A3_MCFU_arifle_SPAR_02_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_02\data\ui\icon_arifle_SPAR_02_spray_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\arifle_SPAR_01_01_spray_Aegis_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\arifle_SPAR_01_02_spray_Aegis_CO.paa"
		};
		class LinkedItems
		{
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};
	class AX_arifle_SPAR_03_coy_F: arifle_SPAR_03_khk_F
	{
		scope=2;
		author="$STR_A3_MCFU_Axle";
		baseWeapon="AX_arifle_SPAR_03_coy_F";
		displayName="$STR_A3_MCFU_arifle_SPAR_03_coy_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_03\data\ui\icon_arifle_SPAR_03_coy_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_03\data\arifle_SPAR_03_01_coy_Aegis_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_03\data\arifle_SPAR_03_02_coy_Aegis_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\arifle_SPAR_01_01_coy_Aegis_CO.paa"
		};
	};
	class AX_arifle_SPAR_03_spray_F: arifle_SPAR_03_khk_F
	{
		scope=2;
		author="$STR_A3_MCFU_Axle";
		baseWeapon="AX_arifle_SPAR_03_spray_F";
		displayName="$STR_A3_MCFU_arifle_SPAR_03_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_03\data\ui\icon_arifle_SPAR_03_spray_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_03\data\arifle_SPAR_03_01_spray_Aegis_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_03\data\arifle_SPAR_03_02_spray_Aegis_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\arifle_SPAR_01_01_spray_Aegis_CO.paa"
		};
	};
	class AX_arifle_SPAR_02_inf_coy_F: Aegis_arifle_SPAR_02_inf_khk_F
	{
		scope=2;
		author="$STR_A3_MCFU_Axle";
		baseWeapon="AX_arifle_SPAR_02_inf_coy_F";
		displayName="$STR_A3_MCFU_arifle_SPAR_02_inf_coy_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_02\data\ui\icon_arifle_SPAR_02_inf_coy_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\arifle_SPAR_01_01_coy_Aegis_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\arifle_SPAR_01_02_coy_Aegis_CO.paa"
		};
	};
	class AX_arifle_SPAR_02_inf_spray_F: Aegis_arifle_SPAR_02_inf_khk_F
	{
		scope=2;
		author="$STR_A3_MCFU_Axle";
		baseWeapon="AX_arifle_SPAR_02_inf_spray_F";
		displayName="$STR_A3_MCFU_arifle_SPAR_02_inf_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_02\data\ui\icon_arifle_SPAR_02_inf_spray_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\arifle_SPAR_01_01_spray_Aegis_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\spar_01\data\arifle_SPAR_01_02_spray_Aegis_CO.paa"
		};
	};
//SCAR-H
	class arifle_SCAR_base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class iteminfo;
	};
	class arifle_SCAR_GL_base_F;
	class arifle_SCAR_short_base_F;
	class arifle_SCAR_grip_base_F;
	class AX_arifle_SCAR_coy_F: arifle_SCAR_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_coy_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\ui\icon_arifle_SCAR_coy_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_coy_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\SCAR_01_coy_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\SCAR_02_coy_CO.paa"
		};
	};
	class AX_arifle_SCAR_spray_F: arifle_SCAR_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\ui\icon_arifle_SCAR_spray_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_spray_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\SCAR_01_spray_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\SCAR_02_spray_CO.paa"
		};
	};
	class AX_arifle_SCAR_GL_coy_F: arifle_SCAR_GL_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_GL_coy_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\ui\icon_arifle_SCAR_GL_coy_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_GL_coy_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\SCAR_01_coy_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\SCAR_02_coy_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_GL_CO.paa"
		};
	};
	class AX_arifle_SCAR_GL_spray_F: arifle_SCAR_GL_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_GL_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\ui\icon_arifle_SCAR_GL_spray_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_GL_spray_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\SCAR_01_spray_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\SCAR_02_spray_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_GL_CO.paa"
		};
	};
	class AX_arifle_SCAR_short_coy_F: arifle_SCAR_short_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_short_coy_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\ui\icon_arifle_SCAR_short_coy_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_short_coy_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\SCAR_01_coy_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\SCAR_02_coy_CO.paa"
		};
	};
	class AX_arifle_SCAR_short_spray_F: arifle_SCAR_short_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_short_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\ui\icon_arifle_SCAR_short_spray_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_short_spray_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\SCAR_01_spray_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\SCAR_02_spray_CO.paa"
		};
	};
	class AX_arifle_SCAR_grip_coy_F: arifle_SCAR_grip_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_grip_coy_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\ui\icon_arifle_SCAR_grip_coy_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_grip_coy_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\SCAR_01_coy_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\SCAR_02_coy_CO.paa"
		};
	};
	class AX_arifle_SCAR_grip_spray_F: arifle_SCAR_grip_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_grip_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\ui\icon_arifle_SCAR_grip_spray_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_grip_spray_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\SCAR_01_spray_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_h\data\SCAR_02_spray_CO.paa"
		};
	};
//SCAR-L
	class arifle_SCAR_L_black_base_F;
	class arifle_SCAR_L_GL_black_base_F;
	class arifle_SCAR_L_short_black_base_F;
	class arifle_SCAR_L_grip_black_base_F;
	class AX_arifle_SCAR_L_coy_F: arifle_SCAR_L_black_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_L_coy_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\ui\icon_arifle_SCAR_L_coy_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_L_coy_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_01_coy_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_02_coy_CO.paa"
		};
	};
	class AX_arifle_SCAR_L_GL_coy_F: arifle_SCAR_L_GL_black_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_L_GL_coy_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\ui\icon_arifle_SCAR_L_GL_coy_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_L_GL_coy_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_01_coy_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_02_coy_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_GL_CO.paa"
		};
	};
	class AX_arifle_SCAR_L_short_coy_F: arifle_SCAR_L_short_black_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_L_short_coy_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\ui\icon_arifle_SCAR_L_short_coy_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_L_short_coy_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_01_coy_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_02_coy_CO.paa"
		};
	};
	class AX_arifle_SCAR_L_grip_coy_F: arifle_SCAR_L_grip_black_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_L_grip_coy_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\ui\icon_arifle_SCAR_L_grip_coy_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_L_grip_coy_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_01_coy_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_02_coy_CO.paa"
		};
	};
	class AX_arifle_SCAR_L_spray_F: arifle_SCAR_L_black_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_L_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\ui\icon_arifle_SCAR_L_spray_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_L_spray_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_01_spray_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_02_spray_CO.paa"
		};
	};
	class AX_arifle_SCAR_L_GL_spray_F: arifle_SCAR_L_GL_black_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_L_GL_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\ui\icon_arifle_SCAR_L_GL_spray_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_L_GL_spray_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_01_spray_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_02_spray_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_GL_CO.paa"
		};
	};
	class AX_arifle_SCAR_L_short_spray_F: arifle_SCAR_L_short_black_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_L_short_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\ui\icon_arifle_SCAR_L_short_spray_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_L_short_spray_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_01_spray_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_02_spray_CO.paa"
		};
	};
	class AX_arifle_SCAR_L_grip_spray_F: arifle_SCAR_L_grip_black_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_L_grip_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\ui\icon_arifle_SCAR_L_grip_spray_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_L_grip_spray_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_01_spray_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_02_spray_CO.paa"
		};
	};
//SCAR-M
	class arifle_SCAR_M_base_F: arifle_SCAR_L_black_base_F
	{
		descriptionShort="$STR_A3_A_CfgWeapons_arifle_G36_base_F1";
		model="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\SCAR_M_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR_L\Data\SCAR_L_01_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_CO.paa"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag_Tracer"
		};
		magazineWell[]=
		{
			"MX_65x39_MSBS"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_65
			{
				iconPosition[]={0.12,0.43000001};
				iconScale=0.2;
			};
			mass=115;
		};
	};
	class arifle_SCAR_M_GL_base_F: arifle_SCAR_L_GL_black_base_F
	{
		descriptionShort="$STR_A3_A_CfgWeapons_arifle_G36_base_F1";
		model="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\SCAR_M_GL_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR_L\Data\SCAR_L_01_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_GL_snd_CO.paa"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag_Tracer"
		};
		magazineWell[]=
		{
			"MX_65x39_MSBS"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_65
			{
				iconPosition[]={0.12,0.43000001};
				iconScale=0.2;
			};
			mass=120;
		};
	};
	class arifle_SCAR_M_short_base_F: arifle_SCAR_L_short_black_base_F
	{
		descriptionShort="$STR_A3_A_CfgWeapons_arifle_G36_base_F1";
		model="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\SCAR_M_short_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR_L\Data\SCAR_L_01_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_CO.paa"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag_Tracer"
		};
		magazineWell[]=
		{
			"MX_65x39_MSBS"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_65
			{
				iconPosition[]={0.12,0.43000001};
				iconScale=0.2;
			};
			mass=110;
		};
	};
	class arifle_SCAR_M_grip_base_F: arifle_SCAR_L_grip_black_base_F
	{
		descriptionShort="$STR_A3_A_CfgWeapons_arifle_G36_base_F1";
		model="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\SCAR_M_grip_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR_L\Data\SCAR_L_01_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_CO.paa"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag_Tracer"
		};
		magazineWell[]=
		{
			"MX_65x39_MSBS"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_65
			{
				iconPosition[]={0.12,0.43000001};
				iconScale=0.2;
			};
			mass=120;
		};
	};
	class arifle_SCAR_M_short_grip_base_F: arifle_SCAR_L_grip_black_base_F
	{
		descriptionShort="$STR_A3_A_CfgWeapons_arifle_G36_base_F1";
		model="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\SCAR_M_short_grip_F.p3d";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR_L\Data\SCAR_L_01_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_CO.paa"
		};
		magazines[]=
		{
			"30Rnd_65x39_caseless_msbs_mag",
			"30Rnd_65x39_caseless_msbs_mag_Tracer"
		};
		magazineWell[]=
		{
			"MX_65x39_MSBS"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: asdg_MuzzleSlot_65
			{
				iconPosition[]={0.12,0.43000001};
				iconScale=0.2;
			};
			mass=115;
		};
		ACE_barrelLength=330.20001;
	};
	class AX_arifle_SCAR_M_F: arifle_SCAR_M_base_F
	{
		author="$STR_A3_MCFU_Lukin";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR_L\Data\SCAR_L_01_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_blk_F: arifle_SCAR_M_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_blk_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_blk_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_blk_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR_L\Data\SCAR_L_01_black_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_blk_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_khk_F: arifle_SCAR_M_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_khk_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_khk_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_khk_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR_L\Data\SCAR_L_01_khaki_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_khk_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_coy_F: arifle_SCAR_M_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_coy_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_coy_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_coy_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_01_coy_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_coy_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_spray_F: arifle_SCAR_M_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_spray_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_spray_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_01_spray_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_02_spray_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_GL_F: arifle_SCAR_M_GL_base_F
	{
		author="$STR_A3_MCFU_Lukin";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_GL_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_GL_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_GL_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR_L\Data\SCAR_L_01_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_GL_snd_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_GL_blk_F: arifle_SCAR_M_GL_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_GL_blk_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_GL_blk_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_GL_blk_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR_L\Data\SCAR_L_01_black_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_blk_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_GL_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_GL_khk_F: arifle_SCAR_M_GL_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_GL_khk_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_GL_khk_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_GL_khk_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR_L\Data\SCAR_L_01_khaki_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_khk_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_GL_khk_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_GL_coy_F: arifle_SCAR_M_GL_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_GL_coy_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_GL_coy_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_GL_coy_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_01_coy_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_coy_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_GL_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_GL_spray_F: arifle_SCAR_M_GL_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_GL_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_GL_spray_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_GL_spray_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_01_spray_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_02_spray_CO.paa",
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SA80\Data\SA80_F_GL_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_short_F: arifle_SCAR_M_short_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_short_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_short_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_short_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR_L\Data\SCAR_L_01_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_short_blk_F: arifle_SCAR_M_short_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_short_blk_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_short_blk_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_short_blk_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR_L\Data\SCAR_L_01_black_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_blk_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_short_khk_F: arifle_SCAR_M_short_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_short_khk_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_short_khk_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_short_khk_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR_L\Data\SCAR_L_01_khaki_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_khk_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_short_coy_F: arifle_SCAR_M_short_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_short_coy_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_short_coy_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_short_coy_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_01_coy_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_coy_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_short_spray_F: arifle_SCAR_M_short_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_short_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_short_spray_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_short_spray_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_01_spray_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_02_spray_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_grip_F: arifle_SCAR_M_grip_base_F
	{
		author="$STR_A3_MCFU_Lukin";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_grip_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_grip_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_grip_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR_L\Data\SCAR_L_01_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_grip_blk_F: arifle_SCAR_M_grip_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_grip_blk_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_grip_blk_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_grip_blk_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR_L\Data\SCAR_L_01_black_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_blk_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_grip_khk_F: arifle_SCAR_M_grip_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_grip_khk_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_grip_khk_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_grip_khk_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR_L\Data\SCAR_L_01_khaki_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_khk_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_grip_coy_F: arifle_SCAR_M_grip_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_grip_coy_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_grip_coy_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_grip_coy_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_01_coy_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_coy_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_grip_spray_F: arifle_SCAR_M_grip_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_grip_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_grip_spray_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_grip_spray_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_01_spray_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_02_spray_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_short_grip_F: arifle_SCAR_M_short_grip_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_short_grip_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_short_grip_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_short_grip_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR_L\Data\SCAR_L_01_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_short_grip_blk_F: arifle_SCAR_M_short_grip_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_short_grip_blk_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_short_grip_blk_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_short_grip_blk_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR_L\Data\SCAR_L_01_black_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_blk_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_short_grip_khk_F: arifle_SCAR_M_short_grip_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_short_grip_khk_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_short_grip_khk_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_short_grip_khk_F";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Weapons_F_Aegis\Rifles\SCAR_L\Data\SCAR_L_01_khaki_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_khk_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_short_grip_coy_F: arifle_SCAR_M_short_grip_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_short_grip_coy_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_short_grip_coy_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_short_grip_coy_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_01_coy_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\SCAR_M_02_coy_CO.paa"
		};
	};
	class AX_arifle_SCAR_M_short_grip_spray_F: arifle_SCAR_M_short_grip_base_F
	{
		author="$STR_A3_MCFU_Axle";
		scope=2;
		displayName="$STR_A3_MCFU_arifle_SCAR_M_short_grip_spray_F0";
		picture="\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_m\data\ui\icon_arifle_SCAR_M_short_grip_spray_F_ca.paa";
		baseWeapon="AX_arifle_SCAR_M_short_grip_spray_F";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_01_spray_CO.paa",
			"\ax_aegisefusmc\weapons_f_usmc_futura\rifles\scar_l\data\SCAR_L_02_spray_CO.paa"
		};
	};
//Variants
	class AX_arifle_SCAR_M_blk_RCO_LP_snds_F: AX_arifle_SCAR_M_blk_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class AX_arifle_SCAR_M_blk_Holo_LP_snds_F: AX_arifle_SCAR_M_blk_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class AX_arifle_SCAR_M_GL_blk_RCO_LP_snds_F: AX_arifle_SCAR_M_GL_blk_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class AX_arifle_SCAR_M_GL_blk_Holo_LP_snds_F: AX_arifle_SCAR_M_GL_blk_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class AX_arifle_SCAR_M_short_blk_RCO_LP_snds_F: AX_arifle_SCAR_M_short_blk_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class AX_arifle_SCAR_M_short_blk_Holo_LP_snds_F: AX_arifle_SCAR_M_short_blk_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class AX_arifle_SCAR_M_short_blk_Holo_F: AX_arifle_SCAR_M_short_blk_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
		};
	};
	class AX_arifle_SCAR_M_short_blk_RDS_LP_snds_F: AX_arifle_SCAR_M_short_blk_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_r1_high_lxWS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class AX_arifle_SCAR_M_grip_blk_RCO_LP_snds_F: AX_arifle_SCAR_M_grip_blk_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class AX_arifle_SCAR_M_grip_blk_Holo_LP_snds_F: AX_arifle_SCAR_M_grip_blk_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class AX_arifle_SCAR_M_grip_blk_DMS_LP_snds_F: AX_arifle_SCAR_M_grip_blk_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_DMS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class AX_arifle_SCAR_M_short_grip_blk_RCO_LP_snds_F: arifle_SCAR_M_short_grip_base_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Hamr";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class AX_arifle_SCAR_M_short_grip_blk_Holo_LP_snds_F: arifle_SCAR_M_short_grip_base_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_Holosight_blk_F";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class AX_arifle_SCAR_M_short_grip_blk_RDS_LP_snds_F: arifle_SCAR_M_short_grip_base_F
	{
		author="$STR_A3_MCFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_r1_high_lxWS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="ef_snds_mxar";
			};
		};
	};
	class AX_arifle_SPAR_03_blk_MOS_LP_BI_snds_F: arifle_SPAR_03_blk_F
	{
		author="$STR_A3_Bohemia_Interactive";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_SOS";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="Aegis_acc_pointer_DM";
			};
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_B";
			};
			class LinkedItemsUnder
			{
				slot="UnderBarrelSlot";
				item="bipod_01_F_blk";
			};
		};
	};