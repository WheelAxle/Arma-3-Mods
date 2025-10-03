    class AX_hgun_QSZ92_F: hgun_Rook40_F
	{
		scope=2;
		author="$STR_A3_GRFU_Axle";
		baseWeapon="AX_hgun_QSZ92_F";
		displayName="$STR_A3_GRFU_hgun_QSZ92_F0";
		descriptionShort="$STR_A3_CfgWeapons_hgun_P071";
		picture="\ax_grounded_futura\weapons_f_china\pistols\qsz92\data\ui\icon_qsz92_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		model="\JAM_AE\jam_weapons_ae\Pistols\QSZ92\qsz92.p3d";
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\weapons_f_china\pistols\qsz92\data\qsz92_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\ax_grounded_futura\weapons_f_china\pistols\qsz92\data\qsz92.rvmat"
		};
		reloadAction="GestureReloadPistol";
		magazines[]=
		{
			"17Rnd_9x21_Mag"
		};
		magazineWell[]=
		{
			"Rook40_9x21"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=20;//30
			class CowsSlot
			{
			};
			class MuzzleSlot: asdg_MuzzleSlot_9MM
			{
				iconPosition[]={0.30000001,0.38};
				iconScale=0.2;
			};
			class PointerSlot
			{
			};
		};
		modes[]=
		{
			"Single"
		};
	};
	class AX_hgun_QSZ92_snds_F: AX_hgun_QSZ92_F
	{
		author="$STR_A3_GRFU_Axle";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
		};
	};