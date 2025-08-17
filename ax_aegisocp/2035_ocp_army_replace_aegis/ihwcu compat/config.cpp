class CfgPatches
{
	class ax_2035_ocp_army_replace_ihwcu
	{
		addonRootClass="ax_2035_ocp_army_replace_aegis";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"JAM_IHWCU_Characters_F_IHWCU_Uniforms"
		};
		skipwhenmissingdependencies=1;
	};
};
class CfgWeapons
{
	class UniformItem;
	class Uniform_Base;
	class JAM_U_B_IHWCU_mcam_F: Uniform_Base
	{
		displayName="Light Fatigues (OCP)";
	};
	class JAM_U_B_IHWCU_shortsleeve_mcam_F: Uniform_Base
	{
		displayName="Light Fatigues (OCP) (Rolled-up)";
	};
	class JAM_U_B_IHWCU_bloused_mcam_F: Uniform_Base
	{
		displayName="Light Fatigues (OCP) (Bloused)";
	};
	class JAM_U_B_IHWCU_combat_mcam_F: Uniform_Base
	{
		displayName="Light Combat Fatigues (OCP)";
	};
	class JAM_U_B_IHWCU_combat_shortsleeve_mcam_F: Uniform_Base
	{
		displayName="Light Combat Fatigues (OCP) (Rolled-up)";
	};
	class JAM_U_B_IHWCU_combat_tshirt_mcam_F: Uniform_Base
	{
		displayName="Light Combat Fatigues (OCP) (Tee)";
	};
	class JAM_U_B_ECWCS_mcam_F: Uniform_Base
	{
		displayName="Cold Weather Fatigues (OCP)";
	};
	class JAM_U_B_ECWCS_mcam_alt_F: Uniform_Base
	{
		displayName="Cold Weather Fatigues (OCP) (Alt)";
	};
};
class CfgVehicles
{
	class Item_Base_F;
	class Item_JAM_U_B_IHWCU_mcam_F: Item_Base_F
	{
		displayName="Light Fatigues (OCP)";
	};
	class Item_JAM_U_B_IHWCU_shortsleeve_mcam_F: Item_Base_F
	{
		displayName="Light Fatigues (OCP) (Rolled-up)";
	};
	class Item_JAM_U_B_IHWCU_bloused_mcam_F: Item_Base_F
	{
		displayName="Light Fatigues (OCP) (Bloused)";
	};
	class B_soldier_F;
	class JAM_B_IHWCU_mcam_F: B_soldier_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_UniformIHWCU_ocp_CO.paa"
		};
	};
	class JAM_B_IHWCU_shortsleeve_mcam_F: B_soldier_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_UniformIHWCU_ocp_CO.paa"
		};
	};
	class JAM_B_IHWCU_bloused_mcam_F: B_soldier_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_UniformIHWCU_ocp_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_UniformIHWCU_blouse_ocp_CO.paa"
		};
	};
	class JAM_B_IHWCU_combat_mcam_F: B_soldier_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_UniformIHWCU_ocp_CO.paa",
			"\A3_IHWCU\characters_f_ihwcu\Uniforms\Data\Tactical_khk_CO.paa"
		};
	};
	class JAM_B_IHWCU_combat_shortsleeve_mcam_F: B_soldier_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_UniformIHWCU_ocp_CO.paa",
			"\A3_IHWCU\characters_f_ihwcu\Uniforms\Data\Tactical_khk_CO.paa"
		};
	};
	class JAM_B_IHWCU_combat_tshirt_mcam_F: B_soldier_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_UniformIHWCU_ocp_CO.paa",
			"\a3\characters_f\common\data\basicbody_green_co.paa",
			"\A3_IHWCU\characters_f_ihwcu\Uniforms\Data\Tactical_khk_CO.paa"
		};
	};
	class JAM_B_ECWCS_mcam_F: B_soldier_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_UniformECWCS_ocp_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_UniformIHWCU_ocp_CO.paa",
			"\A3_IHWCU\characters_f_ihwcu\Uniforms\Data\Tactical_khk_CO.paa"
		};
	};
	class JAM_B_ECWCS_mcam_alt_F: JAM_B_ECWCS_mcam_F
	{
		hiddenSelectionsTextures[]=
		{
			"\A3_IHWCU\characters_f_ihwcu\Uniforms\Data\U_UniformECWCS_gry_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\U_UniformIHWCU_ocp_CO.paa",
			"\A3_IHWCU\characters_f_ihwcu\Uniforms\Data\Tactical_khk_CO.paa"
		};
	};
};