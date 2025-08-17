class CfgPatches
{
	class ax_2035_ocp_army_replace_addus
	{
		addonRootClass="ax_2035_ocp_army_replace_aegis";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"data_f_lxWS_Loadorder",
			"characters_f_addus"
		};
		skipwhenmissingdependencies=1;
	};
};
class CfgWeapons
{
	class H_HelmetB;
	class H_HelmetSpecB;
	class H_Booniehat_khk;
	class H_MilCap_ocamo;
	class V_PlateCarrier_Kerry;
	class U_I_CombatUniform;
	class U_I_CombatUniform_shortsleeve;
	class U_lxWS_SFIA_soldier_2_O;
	class U_I_E_Uniform_01_F;
	class U_I_E_Uniform_01_shortsleeve_F;
	class U_I_E_Uniform_01_coveralls_F;
	class U_B_ParadeUniform_01_US_F;
	class ADDUS_H_HelmetBCover_mtp: H_HelmetB
	{
		displayName="Combat Helmet (OCP, Cover)";
		picture="\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetB_plain_mcamo_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_cover_OCP_co.paa"
		};
		hiddenSelectionsMaterials[]= 
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_cover.rvmat"
		};
	};
	class ADDUS_H_HelmetBCover_tna: H_HelmetB
	{
		displayName="Combat Helmet (Tropic, Cover)";
	};
	class ADDUS_H_HelmetBCover_wdl: H_HelmetB
	{
		displayName="Combat Helmet (Woodland, Cover)";
	};
	class ADDUS_H_HelmetBCover_ucp: H_HelmetB
	{
		displayName="Combat Helmet (UCP, Cover)";
	};
	class ADDUS_H_HelmetSpecBCover_mtp: H_HelmetSpecB
	{
		displayName="Combat Helmet (OCP, Cover, Enhanced)";
		picture="\A3_Aegis\Characters_F_Aegis\Headgear\Data\UI\icon_H_HelmetSpecB_mcamo_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_cover_OCP_co.paa"
		};
		hiddenSelectionsMaterials[]= 
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\equip1_cover.rvmat"
		};
	};
	class ADDUS_H_HelmetSpecBCover_tna: H_HelmetSpecB
	{
		displayName="Combat Helmet (Tropic, Cover, Enhanced)";
	};
	class ADDUS_H_HelmetSpecBCover_wdl: H_HelmetSpecB
	{
		displayName="Combat Helmet (Woodland, Cover, Enhanced)";
	};
	class ADDUS_H_HelmetSpecBCover_ucp: H_HelmetSpecB
	{
		displayName="Combat Helmet (UCP, Cover, Enhanced)";
	};
	class ADDUS_H_Booniehat_USN: H_Booniehat_khk
	{
		displayName="Booniehat (Naval MC)";
	};
	class ADDUS_H_Booniehat_USAF: H_Booniehat_khk
	{
		displayName="Booniehat (Airforce MC)";
	};
	class ADDUS_H_Booniehat_ucp: H_Booniehat_khk
	{
		displayName="Booniehat (UCP)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\UCP\booniehat_UCP_co.paa"
		};
	};
	class ADDUS_H_MilCap_USN: H_MilCap_ocamo
	{
		displayName="Military Cap (Naval MC)";
	};
	class ADDUS_H_MilCap_USAF: H_MilCap_ocamo
	{
		displayName="Military Cap (Airforce MC)";
	};
	class ADDUS_H_MilCap_ucp: H_MilCap_ocamo
	{
		displayName="Military Cap (UCP)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\UCP\cappatrol_UCP_co.paa"
		};
	};
	class ADDUS_V_PlateCarrier3_mtp_F: V_PlateCarrier_Kerry
	{
		displayName="Carrier Basic (OCP)";
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\vests_OCP_co.paa"
		};
	};
	class ADDUS_U_B_US_CombatUniform: U_I_CombatUniform
	{
		displayName="Combat Shirt [US] (OCP)";
		hiddenSelectionsTextures[]=
		{
			"\characters_f_addus\data\B_USNG_Soldier_01_Pants_CO.paa"
		};
	};
	class ADDUS_U_B_US_CombatUniform_shortsleeve: U_I_CombatUniform_shortsleeve
	{
		displayName="Combat Shirt [US] (OCP, Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\characters_f_addus\data\B_USNG_Soldier_01_Pants_CO.paa"
		};
	};
	class ADDUS_U_B_US_CombatUniform_tna_shortsleeve: U_I_CombatUniform_shortsleeve
	{
		displayName="Combat Shirt [US] (MTP-T, Rolled-up)";
	};
	class ADDUS_U_B_US_CombatUniform_wdl_shortsleeve: U_I_CombatUniform_shortsleeve
	{
		displayName="Combat Shirt [US] (MTP-W, Rolled-up)";
	};
	class ADDUS_U_B_US_CombatUniform_ucp: U_I_CombatUniform
	{
		displayName="Combat Shirt [US] (UCP)";
		hiddenSelectionsTextures[]=
		{
			"\characters_f_addus\data\B_US_Soldier_01_Pants_ucp_CO.paa"
		};
	};
	class ADDUS_U_B_US_CombatUniform_ucp_shortsleeve: U_I_CombatUniform_shortsleeve
	{
		displayName="Combat Shirt [US] (UCP, Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\characters_f_addus\data\B_US_Soldier_01_Pants_ucp_CO.paa"
		};
	};
	class ADDUS_U_B_US_OfficerUniform_01: U_lxWS_SFIA_soldier_2_O
	{
		displayName="Officer Fatigues [US] (OCP)";
		hiddenSelectionsTextures[]=
		{
			"\characters_f_addus\data\B_US_Soldier_01_officer_CO.paa",
			"\characters_f_addus\data\B_USNG_Soldier_01_Pants_CO.paa"
		};
	};
	class ADDUS_U_B_US_Uniform_01_shortsleeve_tna: U_I_E_Uniform_01_F
	{
		displayName="Light Fatigues [US] (MTP-T, Rolled-up)";
	};
	class ADDUS_U_B_US_Uniform_01_shortsleeve_wdl: U_I_E_Uniform_01_F
	{
		displayName="Light Fatigues [US] (MTP-W, Rolled-up)";
	};
	class ADDUS_U_B_US_Uniform_01_ucp: U_I_E_Uniform_01_F
	{
		displayName="Light Fatigues [US] (UCP)";
		hiddenSelectionsTextures[]=
		{
			"\characters_f_addus\data\B_US_Soldier_01_ucp_CO.paa",
			"\characters_f_addus\data\B_US_Soldier_01_Pants_ucp_CO.paa",
			"\characters_f_addus\data\B_USNG_Soldier_01_gloves_CO.paa"
		};
	};
	class ADDUS_U_B_US_Uniform_01_shortsleeve_ucp: U_I_E_Uniform_01_F
	{
		displayName="Light Fatigues [US] (UCP, Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\characters_f_addus\data\B_US_Soldier_01_ucp_CO.paa",
			"\characters_f_addus\data\B_US_Soldier_01_Pants_ucp_CO.paa"
		};
	};
	class ADDUS_U_B_USNG_Uniform_01_wdl: U_I_E_Uniform_01_F
	{
		displayName="Light Fatigues [US] (OCP)";
		hiddenSelectionsTextures[]=
		{
			"\characters_f_addus\data\B_USNG_Soldier_01_CO.paa",
			"\characters_f_addus\data\B_USNG_Soldier_01_Pants_CO.paa",
			"\characters_f_addus\data\B_USNG_Soldier_01_gloves_CO.paa"
		};
	};
	class ADDUS_U_B_USNG_Uniform_01_shortsleeve_wdl: U_I_E_Uniform_01_shortsleeve_F
	{
		displayName="Light Fatigues [US] (OCP, Rolled-up)";
		hiddenSelectionsTextures[]=
		{
			"\characters_f_addus\data\B_USNG_Soldier_01_CO.paa",
			"\characters_f_addus\data\B_USNG_Soldier_01_Pants_CO.paa"
		};
	};
	class ADDUS_U_B_USN_Uniform_01_mtp: U_lxWS_SFIA_soldier_2_O
	{
		displayName="Navy Fatigues [US] (Naval MC)";
	};
	class ADDUS_U_B_USN_Uniform_01_shortsleeve_mtp: U_I_E_Uniform_01_shortsleeve_F
	{
		displayName="Navy Fatigues [US] (Naval MC, Rolled-up)";
	};
	class ADDUS_U_B_USN_Uniform_01_tna: U_I_CombatUniform
	{
		displayName="Navy Combat Fatigues [US] (MC-T2)";
	};
	class ADDUS_U_B_USN_Uniform_01_shortsleeve_tna: U_I_CombatUniform_shortsleeve
	{
		displayName="Navy Combat Fatigues [US] (MC-T2, Rolled-up)";
	};
	class ADDUS_U_B_USN_HeliPilotCoveralls: U_I_E_Uniform_01_coveralls_F
	{
		displayName="Heli Pilot Coveralls [US] (Gloves)";
	};
	class ADDUS_U_B_USAF_CombatUniform: U_I_CombatUniform
	{
		displayName="Airman Fatigues [US] (Airforce MC)";
	};
	class ADDUS_U_B_USAF_CombatUniform_shortsleeve: U_I_CombatUniform_shortsleeve
	{
		displayName="Airman Fatigues [US] (Airforce MC, Rolled-up)";
	};
	class ADDUS_U_B_ParadeUniform_01_USN_F: U_B_ParadeUniform_01_US_F
	{
		displayName="Navy Captain Uniform [US]";
	};
};
class CfgVehicles
{
	class O_SFIA_Soldier_TL_lxWS;
	class I_E_Uniform_01_F;
	class I_E_Uniform_01_shortsleeve_F;
	class I_soldier_F;
	class I_Soldier_SL_F;
	class I_E_Uniform_01_coveralls_F;
	class C_Uniform_ParadeUniform_01_base_F;
	class ADDUS_B_US_Soldier_alt_Base_F: I_soldier_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\I_I_Soldier_01_OCP_CO.paa"
		};
	};
	class ADDUS_B_US_Soldier_alt_shortsleeve_Base_F: I_Soldier_SL_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\I_I_Soldier_01_OCP_CO.paa"
		};
	};
	class ADDUS_B_US_Soldier_alt_ucp_Base_F: I_soldier_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\UCP\I_I_Soldier_01_UCP_CO.paa"
		};
	};
	class ADDUS_B_US_Soldier_alt_ucp_shortsleeve_Base_F: I_Soldier_SL_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\UCP\I_I_Soldier_01_UCP_CO.paa"
		};
	};
	class ADDUS_B_US_Officer_Base_F: O_SFIA_Soldier_TL_lxWS
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\Officer_noInsignia_OCP_CO_medals.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\I_I_Soldier_01_OCP_CO.paa"
		};
	};
	class ADDUS_B_US_ucp_Soldier_Base_F: I_E_Uniform_01_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\UCP\Officer_noInsignia_UCP_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\UCP\I_I_Soldier_01_UCP_CO.paa",
			"\characters_f_addus\data\B_USNG_Soldier_01_gloves_CO.paa"
		};
	};
	class ADDUS_B_US_ucp_Soldier_shortsleeve_Base_F: I_E_Uniform_01_shortsleeve_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\UCP\Officer_noInsignia_UCP_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\UCP\I_I_Soldier_01_UCP_CO.paa"
		};
	};
	class ADDUS_B_USNG_Soldier_Base_F: I_E_Uniform_01_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\Officer_noInsignia_OCP_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\I_I_Soldier_01_OCP_CO.paa",
			"\characters_f_addus\data\B_USNG_Soldier_01_gloves_CO.paa"
		};
	};
	class ADDUS_B_USNG_Soldier_shortsleeve_Base_F: I_E_Uniform_01_shortsleeve_F
	{
		hiddenSelectionsTextures[]=
		{
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\Officer_noInsignia_OCP_CO.paa",
			"\ax_aegisocp\2035_ocp_army_replace_aegis\data\I_I_Soldier_01_OCP_CO.paa"
		};
	};
};
