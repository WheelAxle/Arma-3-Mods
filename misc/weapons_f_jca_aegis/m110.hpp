	class Aegis_arifle_SR25_base_F: Rifle_Base_F
	{
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\weapons_f_JCA_IA\Rifles\SR25\data\anim\SR25.rtm"
		};
		//reloadAction="JCA_GestureReloadSR25";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class PointerSlot: JCA_RailSLot_AR
			{
				iconPosition[]={0.33000001,0.40000001};
				iconScale=0.2;
			};
		};
	};
	class Aegis_arifle_SR25_oli_F: Aegis_arifle_SR25_base_F
	{
		author="$STR_A3_A_Grave_3dGunsmith";
		scope=2;
		displayName="$STR_A3_AX_arifle_SR25_oli_F";
        picture="\weapons_f_JCA_IA\Rifles\SR25\Data\UI\Icon_arifle_SR25_olive_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\weapons_f_JCA_IA\Rifles\SR25\Data\arifle_SR25_01_olive_CO.paa",
			"\weapons_f_JCA_IA\Rifles\SR25\Data\arifle_SR25_02_olive_CO.paa"
		};
	};
