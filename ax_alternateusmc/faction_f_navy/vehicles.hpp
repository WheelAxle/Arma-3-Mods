	class B_Boat_Transport_01_F;
	class EF_B_CombatBoat_AT_MJTF_Des;
	class EF_B_CombatBoat_HMG_MJTF_Des;
	class EF_B_CombatBoat_Unarmed_MJTF_Des;
	class B_Lifeboat;
	class B_Boat_Armed_01_minigun_F;
	class B_LSV_01_light_F;
	class B_LSV_01_unarmed_F;
	class B_LSV_01_armed_F;
	class B_LSV_01_AT_F;
	class B_Quadbike_01_F;

	class Helicopter_Base_F;
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets;
	};
	class Heli_Transport_03_base_F: Helicopter_Base_H{};
	class B_Heli_Transport_03_F: Heli_Transport_03_base_F{};
	class B_Heli_Transport_03_unarmed_F;
	class Heli_Transport_01_base_F;
	class Heli_Transport_01_pylons_base_F;
	class B_Heli_Transport_01_pylons_F: Heli_Transport_01_pylons_base_F
	{
		class Components;
	};
	class B_Heli_Transport_01_medevac_F;

	class B_VTOL_01_armed_F;
	class B_VTOL_01_infantry_F;
	class B_VTOL_01_vehicle_F;
	class B_Plane_Fighter_01_F;
	class B_Plane_Fighter_01_Stealth_F;

	class B_HMG_01_F;
	class B_HMG_01_high_F;
	class B_GMG_01_F;
	class B_HMG_02_F;
	class B_HMG_02_high_F;
	class B_Ship_MRLS_01_F;
	class B_Ship_Gun_01_F;
	class B_SAM_System_01_F;
	class B_AAA_System_01_F;
	class EF_LPD_Turret_1_MJTF_Des;
//Boats
	class AX_B_Navy_Boat_Transport_01: B_Boat_Transport_01_F
	{
		scope=2;
		scopeCurator=2;
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_BoatCrew";
		typicalCargo[]=
		{
			"AX_B_Navy_BoatCrew"
		};
	};
	class AX_B_Navy_CombatBoat_AT: EF_B_CombatBoat_AT_MJTF_Des
	{
		scope=2;
		scopeCurator=2;
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_BoatCrew";
		typicalCargo[]=
		{
			"AX_B_Navy_BoatCrew"
		};
	};
	class AX_B_Navy_CombatBoat_HMG: EF_B_CombatBoat_HMG_MJTF_Des
	{
		scope=2;
		scopeCurator=2;
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_BoatCrew";
		typicalCargo[]=
		{
			"AX_B_Navy_BoatCrew"
		};
	};
	class AX_B_Navy_CombatBoat_Unarmed: EF_B_CombatBoat_Unarmed_MJTF_Des
	{
		scope=2;
		scopeCurator=2;
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_BoatCrew";
		typicalCargo[]=
		{
			"AX_B_Navy_BoatCrew"
		};
	};
	class AX_B_Navy_Lifeboat: B_Lifeboat
	{
		scope=2;
		scopeCurator=2;
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_BoatCrew";
		typicalCargo[]=
		{
			"AX_B_Navy_BoatCrew"
		};
	};
	class AX_B_Navy_Boat_Armed_01_minigun: B_Boat_Armed_01_minigun_F
	{
		scope=2;
		scopeCurator=2;
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_BoatCrew";
		typicalCargo[]=
		{
			"AX_B_Navy_BoatCrew"
		};
	};
//Cars
	class AX_B_Navy_LSV_01_light: B_LSV_01_light_F
	{
		editorPreview="\ax_alternateusmc\editorpreviews_f_usmc\ef\AX_B_Navy_LSV_01_light.jpg";
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_Sailor_Armed";
		typicalCargo[]=
		{
			"AX_B_Navy_Sailor_Armed"
		};
		textureList[]=
		{
			"Black",
			1
		};
	};
	class AX_B_Navy_LSV_01_unarmed: B_LSV_01_unarmed_F
	{
		editorPreview="\ax_alternateusmc\editorpreviews_f_usmc\ef\AX_B_Navy_LSV_01_unarmed.jpg";
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_Sailor_Armed";
		typicalCargo[]=
		{
			"AX_B_Navy_Sailor_Armed"
		};
		textureList[]=
		{
			"Black",
			1
		};
	};
	class AX_B_Navy_LSV_01_armed: B_LSV_01_armed_F
	{
		editorPreview="\ax_alternateusmc\editorpreviews_f_usmc\ef\AX_B_Navy_LSV_01_armed.jpg";
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_Sailor_Armed";
		typicalCargo[]=
		{
			"AX_B_Navy_Sailor_Armed"
		};
		textureList[]=
		{
			"Black",
			1
		};
	};
	class AX_B_Navy_LSV_01_AT: B_LSV_01_AT_F
	{
		editorPreview="\ax_alternateusmc\editorpreviews_f_usmc\ef\AX_B_Navy_LSV_01_AT.jpg";
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_Sailor_Armed";
		typicalCargo[]=
		{
			"AX_B_Navy_Sailor_Armed"
		};
		textureList[]=
		{
			"Black",
			1
		};
	};
	class AX_B_Navy_Quadbike_01: B_Quadbike_01_F
	{
		editorPreview="\ax_alternateusmc\editorpreviews_f_usmc\ef\AX_B_Navy_Quadbike_01.jpg";
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_Sailor_Armed";
		typicalCargo[]=
		{
			"AX_B_Navy_Sailor_Armed"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_CIV_BLACK_CO.paa",
			"\A3\Soft_F_Beta\Quadbike_01\Data\Quadbike_01_wheel_CIVBLACK_CO.paa"
		};
		textureList[]=
		{
			"Black",
			1
		};
	};
//Helicopters
	class AX_B_Navy_Heli_Transport_03_Base_F: B_Heli_Transport_03_F
	{
		scope=0;
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
			class RightDoorGun;
			class CargoTurret_01;
			class CargoTurret_02;
		};
	};
	class AX_B_Navy_Heli_Transport_03_F: AX_B_Navy_Heli_Transport_03_Base_F
	{
		scope=2;
		editorPreview="\ax_alternateusmc\editorpreviews_f_usmc\ef\AX_B_Navy_Heli_Transport_03_F.jpg";
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_Helipilot";
		typicalCargo[]=
		{
			"AX_B_Navy_Sailor_Armed"
		};
		textureList[]=
		{
			"MJTF",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\ef\ef_ch67\data\Heli_Transport_03_ext_01_MJTF_CO.paa",
			"\ef\ef_ch67\data\Heli_Transport_03_ext_02_MJTF_CO.paa"
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				gunnerType="AX_B_Navy_Helipilot";
			};
			class MainTurret: MainTurret
			{
				gunnerType="AX_B_Navy_Helicrew";
			};
			class RightDoorGun: RightDoorGun
			{
				gunnerType="AX_B_Navy_Helicrew";
			};
			class CargoTurret_01: CargoTurret_01{};
			class CargoTurret_02: CargoTurret_02{};
		};
	};
	class AX_B_Navy_Heli_Transport_03_unarmed_F: B_Heli_Transport_03_unarmed_F
	{
		editorPreview="\ax_alternateusmc\editorpreviews_f_usmc\ef\AX_B_Navy_Heli_Transport_03_unarmed_F.jpg";
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_Helipilot";
		typicalCargo[]=
		{
			"AX_B_Navy_Sailor_Armed"
		};
		textureList[]=
		{
			"MJTF",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\ef\ef_ch67\data\Heli_Transport_03_ext_01_MJTF_CO.paa",
			"\ef\ef_ch67\data\Heli_Transport_03_ext_02_MJTF_CO.paa"
		};
	};
	class EF_B_Heli_Transport_01_MJTF_Des: Heli_Transport_01_base_F
	{
		class Turrets;
	};
	class AX_B_Navy_Heli_Transport_01_Base_F: EF_B_Heli_Transport_01_MJTF_Des
	{
		scope=0;
		class CargoTurret;
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
			class RightDoorGun;
		};
	};
	class AX_B_Navy_Heli_Transport_01_F: AX_B_Navy_Heli_Transport_01_Base_F
	{
		scope=2;
		editorPreview="\ax_alternateusmc\editorpreviews_f_usmc\ef\AX_B_Navy_Heli_Transport_01_F.jpg";
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_Helipilot";
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class MainTurret: MainTurret
			{
				gunnerType="AX_B_Navy_Helicrew";
			};
			class RightDoorGun: RightDoorGun
			{
				gunnerType="AX_B_Navy_Helicrew";
			};
		};
		typicalCargo[]=
		{
			"AX_B_Navy_Sailor_Armed"
		};
		textureList[]=
		{
			"MJTF",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\ef\ef_uh80\data\uh80_ext01_MJTF_co.paa",
			"\ef\ef_uh80\data\uh80_ext02_MJTF_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\ef\ef_uh80\data\uh80_ext01.rvmat",
			"\ef\ef_uh80\data\uh80_ext02.rvmat"
		};
	};
	class AX_B_Navy_Heli_Transport_01_pylons_base_F: B_Heli_Transport_01_pylons_F
	{
		scope=0;
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_Beta\Heli_Transport_01\Data\UI\Heli_Transport_01_pylons_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]=
						{
							"B_BOMB_PYLON",
							"B_FUELTANK_HELI",
							"SCALPEL_1RND_EJECTOR",
							"B_ASRRAM_EJECTOR",
							"DAR",
							"DAGRM"
						};
						priority=2;
						attachment="PylonFuelTank_UH80";
						maxweight=1200;
						UIposition[]={0.625,0.41999999};
						bay=-1;
					};
					class pylon2: pylon1
					{
						UIposition[]={0.55500001,0.37};
						priority=1;
						attachment="";
					};
					class pylon3: pylon2
					{
						UIposition[]={0.11,0.37};
						mirroredMissilePos=2;
						attachment="";
					};
					class pylon4: pylon1
					{
						UIposition[]={0.039999999,0.41999999};
						mirroredMissilePos=1;
						attachment="PylonFuelTank_UH80";
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
					class Default
					{
						displayName="$STR_vehicle_default";
						attachment[]=
						{
							"PylonFuelTank_UH80",
							"",
							"",
							"PylonFuelTank_UH80"
						};
					};
					class LongRange
					{
						displayName="$STR_A3_TransportPylonsComponent_Presets_LongRange0";
						attachment[]=
						{
							"PylonFuelTank_UH80",
							"PylonRack_12Rnd_PGM_missiles",
							"PylonRack_12Rnd_PGM_missiles",
							"PylonFuelTank_UH80"
						};
					};
				};
			};
		};
	};
	class AX_B_Navy_Heli_Transport_01_pylons_F: AX_B_Navy_Heli_Transport_01_pylons_base_F
	{
		scope=2;
		editorPreview="\ax_alternateusmc\editorpreviews_f_usmc\ef\AX_B_Navy_Heli_Transport_01_pylons_F.jpg";
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_Helipilot";
		typicalCargo[]=
		{
			"AX_B_Navy_Sailor_Armed"
		};
		textureList[]=
		{
			"MJTF",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\ef\ef_uh80\data\uh80_ext01_MJTF_co.paa",
			"\ef\ef_uh80\data\uh80_ext02_MJTF_co.paa",
			"\ef\ef_uh80\data\uh80_ext01_add_MJTF_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ef\ef_uh80\data\uh80_ext01.rvmat",
			"ef\ef_uh80\data\uh80_ext02.rvmat",
			"ef\ef_uh80\data\uh80_ext01_add.rvmat"
		};
	};
	class AX_B_Navy_Heli_Transport_01_medevac_F: B_Heli_Transport_01_medevac_F
	{
		scope=1;
		scopeCurator=1;
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_Helipilot";
		typicalCargo[]=
		{
			"AX_B_Navy_Sailor_Armed"
		};
		textureList[]=
		{
			"MJTF",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\ef\ef_uh80\data\uh80_ext01_MJTF_co.paa",
			"\ef\ef_uh80\data\uh80_ext02_MJTF_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\ef\ef_uh80\data\uh80_ext01.rvmat",
			"\ef\ef_uh80\data\uh80_ext02.rvmat"
		};
	};
//Plane
	class AX_B_Navy_VTOL_01_armed_F: B_VTOL_01_armed_F
	{
		scope=1;
		scopeCurator=1;
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_Pilot";
		textureList[]=
		{
			"Blue",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa",
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa",
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa",
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa",
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_signs_CA.paa"
		};
	};
	class AX_B_Navy_VTOL_01_infantry_F: B_VTOL_01_infantry_F
	{
		editorPreview="\ax_alternateusmc\editorpreviews_f_usmc\ef\AX_B_Navy_VTOL_01_infantry_F.jpg";
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_Pilot";
		textureList[]=
		{
			"Blue",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa",
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa",
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa",
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa",
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_signs_CA.paa"
		};
	};
	class AX_B_Navy_VTOL_01_vehicle_F: B_VTOL_01_vehicle_F
	{
		editorPreview="\ax_alternateusmc\editorpreviews_f_usmc\ef\AX_B_Navy_VTOL_01_vehicle_F.jpg";
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_Pilot";
		textureList[]=
		{
			"Blue",
			1
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa",
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa",
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa",
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa",
			"\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_signs_CA.paa"
		};
	};
	class AX_B_Navy_Plane_Fighter_01_F: B_Plane_Fighter_01_F
	{
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_Fighter_Pilot_F";
	};
	class AX_B_Navy_Plane_Fighter_01_Stealth_F: B_Plane_Fighter_01_Stealth_F
	{
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_Fighter_Pilot_F";
	};
//Turrets
	class AX_B_Navy_HMG_01: B_HMG_01_F
	{
		scope=2;
		scopeCurator=2;
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_Sailor_Armed";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"EF_B_HMG_01_weapon_MJTF_des",
				"EF_B_HMG_01_support_MJTF_des"
			};
			displayName="";
		};
	};
	class AX_B_Navy_HMG_01_high: B_HMG_01_high_F
	{
		scope=2;
		scopeCurator=2;
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_Sailor_Armed";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"EF_B_HMG_01_weapon_high_MJTF_des",
				"EF_B_HMG_01_support_high_MJTF_des"
			};
			displayName="";
		};
	};
	class AX_B_Navy_GMG_01: B_GMG_01_F
	{
		scope=2;
		scopeCurator=2;
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_Sailor_Armed";
		class assembleInfo
		{
			primary=0;
			base="";
			assembleTo="";
			dissasembleTo[]=
			{
				"EF_B_GMG_01_weapon_MJTF_des",
				"EF_B_HMG_01_support_MJTF_des"
			};
			displayName="";
		};
	};
	class AX_B_Navy_HMG_02_F: B_HMG_02_F
	{
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_Sailor_Armed";
	};
	class AX_B_Navy_HMG_02_high_F: B_HMG_02_high_F
	{
		faction="EF_B_MJTF_Navy";
		crew="AX_B_Navy_Sailor_Armed";
	};
	class AX_B_Navy_Ship_MRLS_01_F: B_Ship_MRLS_01_F
	{
		faction="EF_B_MJTF_Navy";
	};
	class AX_B_Navy_Ship_Gun_01_F: B_Ship_Gun_01_F
	{
		faction="EF_B_MJTF_Navy";
	};
	class AX_B_Navy_SAM_System_01_F: B_SAM_System_01_F
	{
		faction="EF_B_MJTF_Navy";
	};
	class AX_B_Navy_AAA_System_01_F: B_AAA_System_01_F
	{
		faction="EF_B_MJTF_Navy";
	};
	class AX_B_Navy_LPD_Turret_01: EF_LPD_Turret_1_MJTF_Des
	{
	};