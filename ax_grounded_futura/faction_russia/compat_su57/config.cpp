class cfgPatches
{
	class ax_faction_russia_grfu_su57
	{
		units[]=
		{
			"AX_O_R_Plane_Fighter_su57_F",
			"AX_O_R_Plane_Fighter_su57_ard_F"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Air_F_PAKFA"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class cfgWeapons
{
};

class cfgVehicles
{
	class PAKFA_Base;
	class O_PAKFA_F: PAKFA_Base{scope=1;scopeCurator=1;};
	class RU_PAKFA_F: O_PAKFA_F{scope=1;scopeCurator=1;};
	class AX_Plane_Fighter_su57_base_F: O_PAKFA_F
	{
		scope=1;
		scopeCurator=1;
		displayName="$STR_A3_GS_O_Plane_Fighter_su57_F0";
		faction="OPF_F";
		crew="O_Fighter_Pilot_F";
		class TextureSources
		{
			class camo_rus_prototype
			{
				displayName="Russian Prototype";
				author="lyotchik-sniper";
				textures[]=
				{
					"\A3_PAK-FA_F\data\Ext_02_co.paa"
				};
				factions[]=
				{
				};
			};
			class camo_rus_blue
			{
				displayName="Russian Blue";
				author="lyotchik-sniper";
				textures[]=
				{
					"\A3_PAK-FA_F\data\Ext_02_RU_G_co.paa"
				};
				factions[]=
				{
				};
			};
			class camo_knights_commander
			{
				displayName="Russian Knights Commander";
				author="lyotchik-sniper";
				textures[]=
				{
					"\A3_PAK-FA_F\data\Ext_02_RU_Knights_2_co.paa"
				};
				factions[]=
				{
				};
			};
			class camo_knights
			{
				displayName="Russian Knights";
				author="lyotchik-sniper";
				textures[]=
				{
					"\A3_PAK-FA_F\data\Ext_02_RU_Knights_co.paa"
				};
				factions[]=
				{
				};
			};
			class camo_hex
			{
				displayName="Hex";
				author="lyotchik-sniper";
				textures[]=
				{
					"\A3_PAK-FA_F\data\Ext_02_CSAT_co.paa"
				};
				factions[]=
				{
				};
			};
			class camo_greyhex
			{
				displayName="Grey Hex";
				author="lyotchik-sniper";
				textures[]=
				{
					"\A3_PAK-FA_F\data\Ext_02_CSAT_G_co.paa"
				};
				factions[]=
				{
				};
			};
			class camo_navyhex
			{
				displayName="Navy Hex";
				author="lyotchik-sniper";
				textures[]=
				{
					"\A3_PAK-FA_F\data\Ext_02_CSAT_Navy_co.paa"
				};
				factions[]=
				{
				};
			};
			class camo_greenhex
			{
				displayName="Green Hex";
				author="lyotchik-sniper";
				textures[]=
				{
					"\A3_PAK-FA_F\data\Ext_02_CSAT_APEX_co.paa"
				};
				factions[]=
				{
				};
			};
		};
	};
	class AX_O_R_Plane_Fighter_su57_F: O_PAKFA_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_GRFU_O_R_Plane_Fighter_su57_F0";
		faction="OPF_R_F";
		crew="O_R_Fighter_Pilot_F";
		hiddenSelectionsTextures[]=
		{
			"A3_PAK-FA_F\data\Ext_02_RU_G_co.paa",
			"A3_PAK-FA_F\data\numbers_blue\0_ca.paa",
			"A3_PAK-FA_F\data\numbers_blue\5_ca.paa",
			"A3_PAK-FA_F\data\numbers_blue\7_ca.paa",
			"a3_pak-fa_f\data\mfd\altis_co.paa"
		};
	};
	class AX_O_R_Plane_Fighter_su57_ard_F: AX_O_R_Plane_Fighter_su57_F
	{
		scope=2;
		scopeCurator=2;
		faction="OPF_R_ard_F";
		crew="O_R_Fighter_Pilot_ard_F";
		hiddenSelectionsTextures[]=
		{
			"A3_PAK-FA_F\data\Ext_02_RU_G_co.paa",
			"A3_PAK-FA_F\data\numbers_blue\0_ca.paa",
			"A3_PAK-FA_F\data\numbers_blue\5_ca.paa",
			"A3_PAK-FA_F\data\numbers_blue\7_ca.paa",
			"a3_pak-fa_f\data\mfd\altis_co.paa"
		};
	};
};