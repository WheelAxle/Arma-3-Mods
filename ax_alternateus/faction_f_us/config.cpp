class CfgPatches
{
	class ax_faction_f_us_grfu
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"RF_Data_Loadorder",
			"A3_Aegis_Data_F_Aegis_Loadorder",
			"A3_Atlas_Data_F_Atlas_Loadorder",
			"JAM_IHWCU_Characters_F_IHWCU_Uniforms",
			"A3_AddGis_Characters_F_AddGis"
		};
	};
};

class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};

class CfgGoggles
{
};

class CfgWeapons
{
};
//Drop brightness to 85 for editor pics
class CfgVehicles
{
	#include "edituni.hpp"
	class CAManBase;
	class B_Soldier_base_F : CAManBase{};
	class O_Soldier_base_F : CAManBase{};
	class I_Soldier_base_F : CAManBase{};
	class B_Soldier_F: B_Soldier_base_F
	{
		editorPreview="\ax_alternateus\editor_previews_us\data\B_Soldier_F.jpg";
		uniformClass="JAM_U_B_IHWCU_combat_mcam_F";
		linkedItems[]=
		{
			"AddGis_V_AssaultCarrier_Lite_mcam_F",
			"AddGis_H_HelmetB_Cover_mcam",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AddGis_V_AssaultCarrier_Lite_mcam_F",
			"AddGis_H_HelmetB_Cover_mcam",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
	};
	class B_Soldier_02_F: B_Soldier_base_F{};
	class B_Soldier_03_F: B_Soldier_base_F{};
	class B_Soldier_04_F: B_Soldier_base_F{};
	class B_Soldier_05_F: B_Soldier_base_F{};
	class B_Soldier_recon_base: B_Soldier_base_F{};
	class B_Soldier_recon_base_F: B_Soldier_base_F{};
	class B_Soldier_sniper_base_F: B_Soldier_base_F{};
    class B_ghillie_base_F: B_Soldier_sniper_base_F{};
	class B_Soldier_support_base_F: B_Soldier_base_F
	{
		uniformClass="JAM_U_B_IHWCU_combat_tshirt_mcam_F";
		linkedItems[]=
		{
			"AddGis_H_HelmetB_Cover_mcam",
			"V_ChestrigF_rgr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnLinkedItems[]=
		{
			"AddGis_H_HelmetB_Cover_mcam",
			"V_ChestrigF_rgr",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
	};
	class B_Soldier_diver_base_F: B_Soldier_base_F{};
	class B_CBRN_Man_Base_F;
	class Helicopter;
	class Helicopter_Base_F: Helicopter{};
    class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets;
	};

	class B_Story_Protagonist_F: B_Soldier_02_f
	{
		editorPreview="\ax_alternateus\editor_previews_us\data\B_Story_Protagonist_F.jpg";
		uniformClass="JAM_U_B_IHWCU_combat_mcam_F";
		linkedItems[]=
		{
			"AddGis_V_AssaultCarrier_Lite_rgr_F",
			"H_HelmetSpecB",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
		respawnlinkedItems[]=
		{
			"AddGis_V_AssaultCarrier_Lite_rgr_F",
			"H_HelmetSpecB",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGoggles"
		};
	};
	class B_Captain_Pettka_F: B_Soldier_02_f
	{
		editorPreview="\ax_alternateus\editor_previews_us\data\B_Captain_Pettka_F.jpg";
		uniformClass="JAM_U_B_IHWCU_bloused_mcam_F";
		linkedItems[]=
		{
			"AddGis_V_AssaultCarrier_mcam_F",
			"H_Beret_Colonel",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"AddGis_V_AssaultCarrier_mcam_F",
			"H_Beret_Colonel",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};

	#include "armyarid.hpp"
	#include "armypacific.hpp"
	#include "armywoodland.hpp"
	#include "armydesert.hpp"

	#include "patrol.hpp"
	#include "qrf.hpp"

	#include "sfarid.hpp"
	#include "sfpacific.hpp"
	#include "sfwoodland.hpp"
	#include "sfdesert.hpp"

	class Atlas_B_Soldier_JSOC_base: B_Soldier_recon_base{};
	#include "jsocarid.hpp"
	#include "jsocdesert.hpp"
	#include "jsocpacific.hpp"
	#include "jsocwoodland.hpp"

	class VTOL_01_armed_base_F;
	class VTOL_01_infantry_base_F;
	class VTOL_01_vehicle_base_F;
	class Plane_Fighter_05_Base_F;
	class B_Plane_Fighter_01_F;
	class B_Plane_Fighter_01_Stealth_F;
	#include "armyheli2.hpp"
	#include "vehiclesdesert.hpp"
	class Plane_CAS_01_dynamicLoadout_base_F;
	class B_Plane_CAS_01_dynamicLoadout_F: Plane_CAS_01_dynamicLoadout_base_F
	{
		class textureSources
		{
			class Grey
			{
				displayName="$STR_A3_IMUS_Texture_DarkGrey0";
				author="$STR_A3_IMUS_Leon";
				textures[]=
				{
					"\ax_alternateus\faction_f_us\Vehicles\cas_01_ext01_CO.paa",
					"\ax_alternateus\faction_f_us\Vehicles\cas_01_ext02_CO.paa"
				};
				factions[]={};
			};
			class Blu
			{
				displayName="$STR_A3_IMUS_Texture_DarkGreyCamo0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Air_F_EPC\Plane_CAS_01\Data\Plane_CAS_01_ext01_CO.paa",
					"\A3\Air_F_EPC\Plane_CAS_01\Data\Plane_CAS_01_ext02_CO.paa"
				};
				factions[]={};
			};
			class Sand
			{
				displayName="$STR_A3_TEXTURESOURCES_SAND0";
				author="$STR_A3_A_Ravenholme";
				textures[]=
				{
					"lxWS\air_f_lxWS\Data\NATO\lxWS_A164_ext01_desert_CO.paa",
					"lxWS\air_f_lxWS\Data\NATO\lxWS_A164_ext02_desert_CO.paa"
				};
				factions[]={};
			};
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_alternateus\faction_f_us\Vehicles\cas_01_ext01_CO.paa",
			"\ax_alternateus\faction_f_us\Vehicles\cas_01_ext02_CO.paa"
		};
	};
};

class CfgGroups
{
	class West
	{
		#include "CfgGroups_Arid.hpp"
	};
};