class cfgPatches
{
	class ax_grounded_csat_iran_2035
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"A3_Atlas_Data_F_Atlas_Loadorder",
			"ax_grounded_soldiers_editorpreviews"
		};
		author = "Axle";
		skipwhenmissingdependencies=1;
	};
};

class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem;
	class Uniform_Base;
	class HelmetBase: ItemCore
	{
		class ItemInfo;
	};
	class HeadgearItem;
	class Vest_NoCamo_Base;
	class H_HelmetB;
};

class cfgVehicles
{
	#include "iaf.hpp"
	#include "iaf_urban.hpp"
	#include "iaf_army.hpp"
};

class cfgGroups
{
	class East
	{
		class OPF_F
		{
			class ArmInfantry
			{
				name="$STR_A3_Atlas_CfgGroups_West_BLU_EAF_F_ResInfantry0";
			};
		};
	};
};