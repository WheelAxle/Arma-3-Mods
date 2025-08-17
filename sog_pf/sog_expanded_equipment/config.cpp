class CfgPatches
{
	class ax_sog_expanded_equipment
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"loadorder_f_vietnam"
		};
		author="Axle";
	};
};

class cfgWeapons
{
	class Default;
	class ItemCore;
	class detectorcore;
	class inventoryfirstaidkititem_base_f;
	class medikititem;
	class toolkititem;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryUnderItem_Base_F;
	class Zasleh2;
	class muzzle_snds_L;
	class muzzle_snds_m;
	class muzzle_snds_B;
	class acc_pointer_IR;
	class NVGoggles;
	class ax_acc_nv: NVGoggles
	{
		scope=1;
		scopeCurator=0;
		scopeArsenal=1;
		modelOptics="\A3\Weapons_F\Reticle\optics_empty.p3d";
		visionMode[]=
		{
			"Normal"
		};
		class ItemInfo;
		descriptionShort="NVG Slot";
	};
	class ax_o_poncho_01_01_nv: ax_acc_nv
	{
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		author="$STR_VN_AUTHORSAVAGE";
		displayName="$STR_VN_O_PONCHO_01_01_DN";
		picture="\vn\characters_f_vietnam\ui\icon_vn_o_poncho_01_01_ca.paa";
		model="\vn\characters_f_vietnam\OPFOR\accessories\vn_o_poncho_01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\vn\characters_f_vietnam\OPFOR\accessories\data\vn_o_poncho_01_01_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\vn\characters_f_vietnam\OPFOR\accessories\vn_o_poncho_01.p3d";
			modelOff="\vn\characters_f_vietnam\OPFOR\accessories\vn_o_poncho_01.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\vn\characters_f_vietnam\OPFOR\accessories\data\vn_o_poncho_01_01_co.paa"
			};
			mass=2;
		};
	};
	class ax_o_scarf_01_01_nv: ax_acc_nv
	{
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		author="$STR_VN_AUTHORSAVAGE";
		displayName="$STR_VN_O_SCARF_01_01_DN";
		picture="\vn\characters_f_vietnam\ui\icon_vn_o_scarf_01_01_ca.paa";
		model="\vn\characters_f_vietnam\OPFOR\accessories\vn_o_scarf_01.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\vn\characters_f_vietnam\OPFOR\accessories\data\vn_o_scarf_01_01_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\vn\characters_f_vietnam\OPFOR\accessories\vn_o_scarf_01.p3d";
			modelOff="\vn\characters_f_vietnam\OPFOR\accessories\vn_o_scarf_01.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\vn\characters_f_vietnam\OPFOR\accessories\data\vn_o_scarf_01_01_co.paa"
			};
			mass=2;
		};
	};
	class ax_o_scarf_01_02_nv: ax_o_scarf_01_01_nv
	{
		author="$STR_VN_AUTHORSAVAGE";
		displayname="$STR_VN_O_SCARF_01_02_DN";
		picture="\vn\characters_f_vietnam\ui\icon_vn_o_scarf_01_02_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\vn\characters_f_vietnam\OPFOR\accessories\data\vn_o_scarf_01_02_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\vn\characters_f_vietnam\OPFOR\accessories\data\vn_o_scarf_01_02_co.paa"
			};
		};
	};
	class ax_o_scarf_01_03_nv: ax_o_scarf_01_01_nv
	{
		author="$STR_VN_AUTHORSAVAGE";
		displayname="$STR_VN_O_SCARF_01_03_DN";
		picture="\vn\characters_f_vietnam\ui\icon_vn_o_scarf_01_03_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\vn\characters_f_vietnam\OPFOR\accessories\data\vn_o_scarf_01_03_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\vn\characters_f_vietnam\OPFOR\accessories\data\vn_o_scarf_01_03_co.paa"
			};
		};
	};
	class ax_o_scarf_01_04_nv: ax_o_scarf_01_01_nv
	{
		author="$STR_VN_AUTHORSAVAGE";
		displayname="$STR_VN_O_SCARF_01_04_DN";
		picture="\vn\characters_f_vietnam\ui\icon_vn_o_scarf_01_04_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\vn\characters_f_vietnam\OPFOR\accessories\data\vn_o_scarf_01_04_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\vn\characters_f_vietnam\OPFOR\accessories\data\vn_o_scarf_01_04_co.paa"
			};
		};
	};
	class ax_b_scarf_01_01_nv: ax_o_scarf_01_01_nv
	{
		author="$STR_VN_AUTHORSAVAGE";
		displayname="$STR_VN_B_SCARF_01_01_DN";
		picture="\vn\characters_f_vietnam\ui\icon_vn_b_scarf_01_01_ca.paa";
		hiddenSelectionsMaterials[]=
		{
			"\vn\characters_f_vietnam\BLUFOR\accessories\data\vn_b_scarf_01.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"\vn\characters_f_vietnam\BLUFOR\accessories\data\vn_b_scarf_01_01_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsMaterials[]=
			{
				"\vn\characters_f_vietnam\BLUFOR\accessories\data\vn_b_scarf_01.rvmat"
			};
			hiddenSelectionsTextures[]=
			{
				"\vn\characters_f_vietnam\BLUFOR\accessories\data\vn_b_scarf_01_01_co.paa"
			};
		};
	};
	class ax_b_scarf_01_03_nv: ax_b_scarf_01_01_nv
	{
		author="$STR_VN_AUTHORSAVAGE";
		displayname="$STR_VN_B_SCARF_01_03_DN";
		picture="\vn\characters_f_vietnam\ui\icon_vn_b_scarf_01_03_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\vn\characters_f_vietnam\BLUFOR\accessories\data\vn_b_scarf_01_03_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[]=
			{
				"\vn\characters_f_vietnam\BLUFOR\accessories\data\vn_b_scarf_01_03_co.paa"
			};
		};
	};
	class ax_b_acc_rag_01_nv: ax_acc_nv
	{
		scope=2;
		scopeCurator=0;
		scopeArsenal=2;
		author="$STR_VN_AUTHORSAVAGE";
		displayName="$STR_VN_B_ACC_RAG_01_DN";
		picture="\vn\characters_f_vietnam_03\ui\icon_vn_b_acc_rag_01_ca.paa";
		model="\vn\characters_f_vietnam_03\BLUFOR\accessories\vn_b_acc_rag_01";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\vn\characters_f_vietnam_03\BLUFOR\accessories\data\vn_b_acc_rag_01_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\vn\characters_f_vietnam_03\BLUFOR\accessories\vn_b_acc_rag_01.p3d";
			modelOff="\vn\characters_f_vietnam_03\BLUFOR\accessories\vn_b_acc_rag_01.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			hiddenSelectionsTextures[]=
			{
				"\vn\characters_f_vietnam_03\BLUFOR\accessories\data\vn_b_acc_rag_01_co.paa"
			};
			mass=2;
		};
	};
	class ax_b_acc_rag_02_nv: ax_b_acc_rag_01_nv
	{
		author="$STR_VN_AUTHORSAVAGE";
		displayName="$STR_VN_B_ACC_RAG_02_DN";
		picture="\vn\characters_f_vietnam_03\ui\icon_vn_b_acc_rag_02_ca.paa";
		model="\vn\characters_f_vietnam_03\BLUFOR\accessories\vn_b_acc_rag_02.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\vn\characters_f_vietnam_03\BLUFOR\accessories\vn_b_acc_rag_02.p3d";
			modelOff="\vn\characters_f_vietnam_03\BLUFOR\accessories\vn_b_acc_rag_02.p3d";
			mass=2;
		};
	};
	class ax_b_acc_towel_01_nv: ax_b_acc_rag_02_nv
	{
		author="$STR_VN_AUTHORSAVAGE";
		displayName="$STR_VN_B_ACC_TOWEL_01_DN";
		picture="\vn\characters_f_vietnam_03\ui\icon_vn_b_acc_towel_01_ca.paa";
		model="\vn\characters_f_vietnam_03\BLUFOR\accessories\vn_b_acc_towel_01.p3d";
		hiddenSelectionsTextures[]=
		{
			"\vn\characters_f_vietnam_03\BLUFOR\accessories\data\vn_b_acc_towel_01_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\vn\characters_f_vietnam_03\BLUFOR\accessories\vn_b_acc_towel_01.p3d";
			modelOff="\vn\characters_f_vietnam_03\BLUFOR\accessories\vn_b_acc_towel_01.p3d";
			hiddenSelectionsTextures[]=
			{
				"\vn\characters_f_vietnam_03\BLUFOR\accessories\data\vn_b_acc_towel_01_co.paa"
			};
			mass=2;
		};
	};
	class ax_b_acc_towel_02_nv: ax_b_acc_towel_01_nv
	{
		author="$STR_VN_AUTHORSAVAGE";
		displayName="$STR_VN_B_ACC_TOWEL_02_DN";
		picture="\vn\characters_f_vietnam_03\ui\icon_vn_b_acc_towel_02_ca.paa";
		model="\vn\characters_f_vietnam_03\BLUFOR\accessories\vn_b_acc_towel_02.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\vn\characters_f_vietnam_03\BLUFOR\accessories\vn_b_acc_towel_02.p3d";
			modelOff="\vn\characters_f_vietnam_03\BLUFOR\accessories\vn_b_acc_towel_02.p3d";
			mass=2;
		};
	};
};

class CfgVehicles
{
	#include "usmc.hpp"
};
