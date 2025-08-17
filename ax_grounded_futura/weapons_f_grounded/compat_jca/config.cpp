class CfgPatches
{
	class ax_weapons_f_grounded_futura_jca
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"Weapons_F_JCA_IA"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgWeapons
{
	class JCA_hgun_M9A1_black_F;
	class AX_hgun_M9A1_black_F: JCA_hgun_M9A1_black_F
	{
		author="$STR_A3_GS_Axle";
		baseWeapon="AX_hgun_M9A1_black_F";
		displayName="$STR_A3_GS_hgun_M9A1_black_F0";
		//picture="\ax_grounded_futura\weapons_f_grounded\pistols\m9a1\data\ui\icon_m9a1_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\weapons_f_grounded\pistols\m9a1\data\hgun_M9A1_black_CO.paa"
		};
	};
	class AX_hgun_M9A1_black_snds_F: AX_hgun_M9A1_black_F
	{
		author="$STR_A3_GS_Axle";
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="muzzle_snds_L";
			};
		};
	};
};

class CfgVehicles
{
};