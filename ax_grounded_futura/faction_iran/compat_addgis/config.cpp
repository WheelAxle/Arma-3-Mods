class cfgPatches
{
	class ax_faction_iran_grfu_addgis
	{
		units[]=
		{
			"AX_O_Soldier_R_G3_F"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_AddGis_Characters_F_AddGis",
			"ax_faction_iran_grfu"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class cfgWeapons
{
	class AddGis_arifle_G3A3_blk_F;
	class AX_arifle_G3A3_blk_F: AddGis_arifle_G3A3_blk_F
	{
		author="$STR_A3_GRFU_Axle";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="optic_ACO_grn";
			};
		};
	};
};

class cfgVehicles
{
	#include "iaf_army.hpp"
	#include "new.hpp"
};