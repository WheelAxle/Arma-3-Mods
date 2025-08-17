class CfgPatches
{
	class ax_2035_ocp_army_replace_bdu
	{
		addonRootClass="ax_2035_ocp_army_replace_aegis";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"JAM_BDU_Characters_F_BDU_Uniforms",
			"JAM_BDU_Characters_F_BDU"
		};
		skipwhenmissingdependencies=1;
	};
};
class CfgWeapons
{
	class UniformItem;
	class Uniform_Base;
	class JAM_U_B_BDU_mcam_F: Uniform_Base
	{
		displayName="Field Uniform (OCP)";
	};
	class JAM_U_B_BDU_shortsleeve_mcam_F: Uniform_Base
	{
		displayName="Field Uniform (OCP) (Rolled-up)";
	};
	class JAM_U_B_BDU_combat_mcam_F: Uniform_Base
	{
		displayName="Combat Field Uniform (OCP)";
	};
	class JAM_U_B_BDU_combat_shortsleeve_mcam_F: Uniform_Base
	{
		displayName="Combat Field Uniform (OCP) (Rolled-up)";
	};
};
class CfgVehicles
{
	class JAM_B_BDU_wdl_F;
	class JAM_B_BDU_mcam_F: JAM_B_BDU_wdl_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_UniformBDU_ocp_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_UniformBDU_ocp_CO.paa"
		};
	};
	class JAM_B_BDU_shortsleeve_wdl_F;
	class JAM_B_BDU_shortsleeve_mcam_F: JAM_B_BDU_shortsleeve_wdl_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_UniformBDU_ocp_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_UniformBDU_ocp_CO.paa"
		};
	};
	class JAM_B_BDU_combat_wdl_F;
	class JAM_B_BDU_combat_mcam_F: JAM_B_BDU_combat_wdl_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_UniformBDU_ocp_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_UniformBDU_ocp_CO.paa",
			"\A3_BDU\characters_f_bdu\Uniforms\Data\Tactical_mcam_CO.paa"
		};
	};
	class JAM_B_BDU_combat_shortsleeve_wdl_F;
	class JAM_B_BDU_combat_shortsleeve_mcam_F: JAM_B_BDU_combat_shortsleeve_wdl_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_UniformBDU_ocp_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_UniformBDU_ocp_CO.paa",
			"\A3_BDU\characters_f_bdu\Uniforms\Data\Tactical_mcam_CO.paa"
		};
	};
};
