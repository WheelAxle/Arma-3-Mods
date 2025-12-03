class CfgPatches
{
	class ax_weapons_f_china_grfu_jca_compat_ef
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"Weapons_F_JCA_IA",
			"ax_faction_china_grfu_ef"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgWeapons
{
	class EF_smg_Diplomat;
	class AX_smg_Diplomat_cn_ACO: EF_smg_Diplomat
	{
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="JCA_optic_ARO_black";
			};
		};
	};
};
