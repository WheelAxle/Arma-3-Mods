class CfgPatches
{
	class ax_2035_ocp_army_replace_expanded_uniforms_ef
	{
		addonRootClass="ax_2035_ocp_army_replace_aegis";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"ax_expanded_uniforms",
			"EF_Sounds_C"
		};
		skipWhenMissingDependencies=1;
	};
};

class cfgVehicles
{
	class EF_B_Marine_Wdl_Base_1;
	class EF_B_Marine_Wdl_Base_2;
	class EF_B_Marine_Wdl_Base_3;
	class EF_B_Marine_Wdl_Base_4;
	class EF_B_Marine_Wdl_Base_5;
	class EF_B_Marine_Wdl_Base_6;
	class EF_B_Marine_Diver_Wdl_Base;
	class EF_B_Marine_Mc_Base_1: EF_B_Marine_Wdl_Base_1
	{
		scope=1;
		uniformClass="EF_U_B_MarineCombatUniform_Mc_1";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\US_Marines_FROG_ocp_co.paa"
		};
	};
	class EF_B_Marine_Mc_Base_2: EF_B_Marine_Wdl_Base_2
	{
		scope=1;
		uniformClass="EF_U_B_MarineCombatUniform_Mc_2";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\US_Marines_FROG_ocp_co.paa"
		};
	};
	class EF_B_Marine_Mc_Base_3: EF_B_Marine_Wdl_Base_3
	{
		scope=1;
		uniformClass="EF_U_B_MarineCombatUniform_Mc_3";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\US_Marines_FROG_ocp_co.paa"
		};
	};
	class EF_B_Marine_Mc_Base_4: EF_B_Marine_Wdl_Base_4
	{
		scope=1;
		uniformClass="EF_U_B_MarineCombatUniform_Mc_4";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\US_Marines_FROG_ocp_co.paa"
		};
	};
	class EF_B_Marine_Mc_Base_5: EF_B_Marine_Wdl_Base_5
	{
		scope=1;
		uniformClass="EF_U_B_MarineCombatUniform_Mc_5";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\US_Marines_FROG_ocp_co.paa"
		};
	};
	class EF_B_Marine_Mc_Base_6: EF_B_Marine_Wdl_Base_6
	{
		scope=1;
		uniformClass="EF_U_B_MarineCombatUniform_Mc_6";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\US_Marines_FROG_ocp_co.paa"
		};
	};
	class EF_B_Marine_Diver_Mc_Base: EF_B_Marine_Diver_Wdl_Base
	{
		scope=1;
		uniformClass="EF_U_B_MarineCombatUniform_Diver_WdlOd";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\US_Marines_FROG_ocp_co.paa",
			"\ef\ef_marines\data\diving_gear_co.paa"
		};
	};
};