class CfgPatches
{
	class ax_2035_ocp_army_additions_rf
	{
		addonRootClass="ax_2035_ocp_army_additions_aegis";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"RF_Data_Loadorder"
		};
		skipWhenMissingDependencies=1;
	};
};

class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	class U_B_HeliPilotCoveralls_OCP_gloves: Uniform_Base
	{
		scope=2;
		author="$STR_A3_AX_AXLE";
		displayName="$STR_AX_U_B_HeliPilotCoveralls_gloves_OCP";
		picture="\ax_aegisocp\2035_ocp_army_replace_aegis\data\ui\icon_U_B_HeliPilotCoveralls_gloves_ocp_CA.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"camo1",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\coveralls_OCP_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="U_B_HeliPilotCoveralls_OCP_gloves_soldier";
			containerClass="Supply40";
			mass=80;
		};
	};
};

class cfgVehicles
{
	class I_E_Uniform_01_coveralls_F;
	class U_B_HeliPilotCoveralls_OCP_gloves_soldier: I_E_Uniform_01_coveralls_F
	{
		scope=1;
		scopeCurator=0;
		modelSides[]={1};
		displayName="AB_Dummy";
		uniformClass="U_B_HeliPilotCoveralls_OCP_gloves";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\coveralls_OCP_co.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\boots_coyote.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
};