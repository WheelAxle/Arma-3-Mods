    

	//Artillery
	class vn_b_usmc_70_static_m101_02: vn_b_usmc_static_m101_02
    {
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Artillery";
        crew="vn_b_men_usmc_70_15";
    };
	class vn_b_usmc_70_static_mortar_m2: vn_b_usmc_static_mortar_m2
    {
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Artillery";
        crew="vn_b_men_usmc_70_15";
    };
	class vn_b_usmc_70_static_mortar_m29: vn_b_usmc_static_mortar_m29
    {
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Artillery";
        crew="vn_b_men_usmc_70_15";
    };

    //Cars
    class vn_b_wheeled_m151_01_usmc_70: vn_b_wheeled_m151_01_usmc
    {
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Cars";
        crew="vn_b_men_usmc_70_13";
		class Turrets: Turrets
		{
			class codriver_ffv: codriver_ffv
			{
				gunnerType="vn_b_men_usmc_70_14";
			};
			class cargoturret_rear: cargoturret_rear
			{
				gunnerType="vn_b_men_usmc_70_15";
			};
		};
    };
	class vn_b_wheeled_m151_02_usmc_70: vn_b_wheeled_m151_02_usmc
    {
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Cars";
        crew="vn_b_men_usmc_70_13";
		class Turrets: Turrets
		{
			class codriver_ffv: codriver_ffv
			{
				gunnerType="vn_b_men_usmc_70_14";
			};
			class cargoturret_rear: cargoturret_rear
			{
				gunnerType="vn_b_men_usmc_70_15";
			};
		};
    };
	class vn_b_wheeled_m151_mg_02_usmc_70: vn_b_wheeled_m151_mg_02_usmc
    {
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Cars";
        crew="vn_b_men_usmc_70_13";
		class Turrets: Turrets
		{
			class codriver_ffv: codriver_ffv
			{
				gunnerType="vn_b_men_usmc_70_14";
			};
			class MainTurret: MainTurret
			{
				gunnerType="vn_b_men_usmc_70_15";
			};
		};
    };
	class vn_b_wheeled_m151_mg_03_usmc_70: vn_b_wheeled_m151_mg_03_usmc
    {
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Cars";
        crew="vn_b_men_usmc_70_13";
		class Turrets: Turrets
		{
			class mg2turret: mg2turret
			{
				gunnerType="vn_b_men_usmc_70_14";
			};
			class MainTurret: MainTurret
			{
				gunnerType="vn_b_men_usmc_70_15";
			};
		};
    };
	class vn_b_wheeled_m151_mg_04_usmc_70: vn_b_wheeled_m151_mg_04_usmc
    {
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Cars";
        crew="vn_b_men_usmc_70_13";
		typicalCargo[]=
		{
			"vn_b_men_usmc_70_14"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerType="vn_b_men_usmc_70_15";
			};
		};
    };
	class vn_b_wheeled_m54_01_usmc_70: vn_b_wheeled_m54_01_usmc
    {
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Cars";
        crew="vn_b_men_usmc_70_13";
		typicalCargo[]=
		{
			"vn_b_men_usmc_70_15",
			"vn_b_men_usmc_70_16"
		};
    };
	class vn_b_wheeled_m54_02_usmc_70: vn_b_wheeled_m54_02_usmc
    {
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Cars";
        crew="vn_b_men_usmc_70_13";
		typicalCargo[]=
		{
			"vn_b_men_usmc_70_15",
			"vn_b_men_usmc_70_16"
		};
    };
	class vn_b_wheeled_m54_03_usmc_70: vn_b_wheeled_m54_03_usmc
    {
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Cars";
        crew="vn_b_men_usmc_70_13";
		typicalCargo[]=
		{
			"vn_b_men_usmc_70_15",
			"vn_b_men_usmc_70_16"
		};
    };
	class vn_b_wheeled_m54_ammo_usmc_70: vn_b_wheeled_m54_ammo_usmc
    {
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Cars";
        crew="vn_b_men_usmc_70_13";
		typicalCargo[]=
		{
			"vn_b_men_usmc_70_15",
			"vn_b_men_usmc_70_16"
		};
    };
	class vn_b_wheeled_m54_fuel_usmc_70: vn_b_wheeled_m54_fuel_usmc
    {
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Cars";
        crew="vn_b_men_usmc_70_13";
		typicalCargo[]=
		{
			"vn_b_men_usmc_70_15",
			"vn_b_men_usmc_70_16"
		};
    };
	class vn_b_wheeled_m54_repair_usmc_70: vn_b_wheeled_m54_repair_usmc
    {
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Cars";
        crew="vn_b_men_usmc_70_13";
		typicalCargo[]=
		{
			"vn_b_men_usmc_70_15",
			"vn_b_men_usmc_70_16"
		};
    };
	class vn_b_wheeled_m274_01_02_usmc_70: vn_b_wheeled_m274_01_02
	{
		forceInGarage=0;
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Cars";
        crew="vn_b_men_usmc_70_08";
		typicalCargo[]=
		{
			"vn_b_men_usmc_70_01"
		};
    };
	class vn_b_wheeled_m274_02_02_usmc_70: vn_b_wheeled_m274_02_02
	{
		forceInGarage=0;
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Cars";
        crew="vn_b_men_usmc_70_08";
		typicalCargo[]=
		{
			"vn_b_men_usmc_70_01"
		};
    };
	class vn_b_wheeled_m274_mg_01_02_usmc_70: vn_b_wheeled_m274_mg_01_02
	{
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Cars";
        crew="vn_b_men_usmc_70_08";
		typicalCargo[]=
		{
			"vn_b_men_usmc_70_01"
		};
		class Turrets: Turrets
		{
			class mg1_turret: mg1_turret
			{
				gunnerType="vn_b_men_usmc_70_15";
			};
		};
    };
	class vn_b_wheeled_m274_mg_02_02_usmc_70: vn_b_wheeled_m274_mg_02_02
	{
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Cars";
		crew="vn_b_men_usmc_70_08";
		typicalCargo[]=
		{
			"vn_b_men_usmc_70_01"
		};
		class Turrets: Turrets
		{
			class cargoTurret_1: cargoTurret_1
			{
				gunnerType="vn_b_men_usmc_68_15";
			};
			class mg1_turret: mg1_turret
			{
				gunnerType="vn_b_men_usmc_68_15";
			};
		};
	};
	class vn_b_wheeled_m274_mg_03_02_usmc_70: vn_b_wheeled_m274_mg_03_02
	{
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Cars";
		crew="vn_b_men_usmc_70_08";
		typicalCargo[]=
		{
			"vn_b_men_usmc_70_01"
		};
		class Turrets: Turrets
		{
			class mg1_turret: mg1_turret
			{
				gunnerType="vn_b_men_usmc_70_15";
			};
		};
	};

	//Helicopters
	class vn_b_air_ah1g_01_usmc_70: vn_b_air_ah1g_01_usmc
	{
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Helicopters";
		crew="vn_b_men_aircrew_09";
		typicalCargo[]=
		{
			"vn_b_men_aircrew_10"
		};
	};
	class vn_b_air_ah1g_02_usmc_70: vn_b_air_ah1g_02_usmc
	{
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Helicopters";
		crew="vn_b_men_aircrew_09";
		typicalCargo[]=
		{
			"vn_b_men_aircrew_10"
		};
	};
	class vn_b_air_ah1g_03_usmc_70: vn_b_air_ah1g_03_usmc
	{
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Helicopters";
		crew="vn_b_men_aircrew_09";
		typicalCargo[]=
		{
			"vn_b_men_aircrew_10"
		};
	};
	class vn_b_air_ah1g_04_usmc_70: vn_b_air_ah1g_04_usmc
	{
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Helicopters";
		crew="vn_b_men_aircrew_09";
		typicalCargo[]=
		{
			"vn_b_men_aircrew_10"
		};
	};
	class vn_b_air_ah1g_05_usmc_70: vn_b_air_ah1g_05_usmc
	{
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Helicopters";
		crew="vn_b_men_aircrew_09";
		typicalCargo[]=
		{
			"vn_b_men_aircrew_10"
		};
	};
	class vn_b_air_ah1g_06_usmc_70: vn_b_air_ah1g_06_usmc
	{
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Helicopters";
		crew="vn_b_men_aircrew_09";
		typicalCargo[]=
		{
			"vn_b_men_aircrew_10"
		};
	};
	class vn_b_air_ah1g_07_usmc_70: vn_b_air_ah1g_07_usmc
	{
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Helicopters";
		crew="vn_b_men_aircrew_09";
		typicalCargo[]=
		{
			"vn_b_men_aircrew_10"
		};
	};
	class vn_b_air_ah1g_08_usmc_70: vn_b_air_ah1g_08_usmc
	{
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Helicopters";
		crew="vn_b_men_aircrew_09";
		typicalCargo[]=
		{
			"vn_b_men_aircrew_10"
		};
	};
	class vn_b_air_ah1g_09_usmc_70: vn_b_air_ah1g_09_usmc
	{
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Helicopters";
		crew="vn_b_men_aircrew_09";
		typicalCargo[]=
		{
			"vn_b_men_aircrew_10"
		};
	};
	class vn_b_air_ah1g_10_usmc_70: vn_b_air_ah1g_10_usmc
	{
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Helicopters";
		crew="vn_b_men_aircrew_09";
		typicalCargo[]=
		{
			"vn_b_men_aircrew_10"
		};
	};
	class vn_b_air_uh1b_01_04_usmc_70: vn_b_air_uh1b_01_04
	{
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Helicopters";
		crew="vn_b_men_aircrew_09";
		typicalCargo[]=
		{
			"vn_b_men_aircrew_11"
		};
	};
	class vn_b_air_uh1d_02_04_usmc_70: vn_b_air_uh1d_02_04
	{
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Helicopters";
		crew="vn_b_men_aircrew_09";
		typicalCargo[]=
		{
			"vn_b_men_aircrew_11"
		};
	};
	class vn_b_air_uh1e_01_04_usmc_70: vn_b_air_uh1e_01_04
	{
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Helicopters";
		crew="vn_b_men_aircrew_09";
		typicalCargo[]=
		{
			"vn_b_men_aircrew_11"
		};
	};
	class vn_b_air_uh1e_02_04_usmc_70: vn_b_air_uh1e_02_04
	{
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Helicopters";
		crew="vn_b_men_aircrew_09";
		typicalCargo[]=
		{
			"vn_b_men_aircrew_11"
		};
	};
	class vn_b_air_uh1e_03_04_usmc_70: vn_b_air_uh1e_03_04
	{
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Helicopters";
		crew="vn_b_men_aircrew_09";
		typicalCargo[]=
		{
			"vn_b_men_aircrew_11"
		};
	};
	class vn_b_air_ch34_01_01_usmc_70: vn_b_air_ch34_01_01
	{
		scope=1;
		scopeCurator=1;
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Helicopters";
		crew="vn_b_men_aircrew_09";
	};
	class vn_b_air_ch34_03_01_usmc_70: vn_b_air_ch34_03_01
	{
		scope=1;
		scopeCurator=1;
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Helicopters";
		crew="vn_b_men_aircrew_09";
	};
	class vn_b_air_ch34_04_01_usmc_70: vn_b_air_ch34_04_01
	{	
		scope=1;
		scopeCurator=1;
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Helicopters";
		crew="vn_b_men_aircrew_09";
	};
	class vn_b_air_ch34_04_02_usmc_70: vn_b_air_ch34_04_02
	{	
		scope=1;
		scopeCurator=1;
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Helicopters";
		crew="vn_b_men_aircrew_09";
	};
	class vn_b_air_ch34_04_03_usmc_70: vn_b_air_ch34_04_03
	{	
		scope=1;
		scopeCurator=1;
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Helicopters";
		crew="vn_b_men_aircrew_09";
	};
	class vn_b_air_ch34_04_04_usmc_70: vn_b_air_ch34_04_04
	{	
		scope=1;
		scopeCurator=1;
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Helicopters";
		crew="vn_b_men_aircrew_09";
	};

	//Planes
	class vn_b_air_f4b_usmc_70_at: vn_b_air_f4b_usmc_at
	{
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Planes";
		crew="vn_b_men_jetpilot_07";
	};
	class vn_b_air_f4b_usmc_70_bmb: vn_b_air_f4b_usmc_bmb
	{
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Planes";
		crew="vn_b_men_jetpilot_07";
	};
	class vn_b_air_f4b_usmc_70_cap: vn_b_air_f4b_usmc_cap
	{
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Planes";
		crew="vn_b_men_jetpilot_07";
	};
	class vn_b_air_f4b_usmc_70_cas: vn_b_air_f4b_usmc_cas
	{
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Planes";
		crew="vn_b_men_jetpilot_07";
	};
	class vn_b_air_f4b_usmc_70_cbu: vn_b_air_f4b_usmc_cbu
	{
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Planes";
		crew="vn_b_men_jetpilot_07";
	};
	class vn_b_air_f4b_usmc_70_ehcas: vn_b_air_f4b_usmc_ehcas
	{
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Planes";
		crew="vn_b_men_jetpilot_07";
	};
	class vn_b_air_f4b_usmc_70_gbu: vn_b_air_f4b_usmc_gbu
	{
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Planes";
		crew="vn_b_men_jetpilot_07";
	};
	class vn_b_air_f4b_usmc_70_hbmb: vn_b_air_f4b_usmc_hbmb
	{
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Planes";
		crew="vn_b_men_jetpilot_07";
	};
	class vn_b_air_f4b_usmc_70_hcas: vn_b_air_f4b_usmc_hcas
	{
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Planes";
		crew="vn_b_men_jetpilot_07";
	};
	class vn_b_air_f4b_usmc_70_lbmb: vn_b_air_f4b_usmc_lbmb
	{
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Planes";
		crew="vn_b_men_jetpilot_07";
	};
	class vn_b_air_f4b_usmc_70_lrbmb: vn_b_air_f4b_usmc_lrbmb
	{
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Planes";
		crew="vn_b_men_jetpilot_07";
	};
	class vn_b_air_f4b_usmc_70_mbmb: vn_b_air_f4b_usmc_mbmb
	{
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Planes";
		crew="vn_b_men_jetpilot_07";
	};
	class vn_b_air_f4b_usmc_70_mr: vn_b_air_f4b_usmc_mr
	{
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Planes";
		crew="vn_b_men_jetpilot_07";
	};
	class vn_b_air_f4b_usmc_70_sead: vn_b_air_f4b_usmc_sead
	{
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Planes";
		crew="vn_b_men_jetpilot_07";
	};
	class vn_b_air_f4b_usmc_70_ucas: vn_b_air_f4b_usmc_ucas
	{
		forceInGarage=0;
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Planes";
		crew="vn_b_men_jetpilot_07";
	};

    //Tanks
    class vn_b_armor_m41_01_02_usmc_70: vn_b_armor_m41_01_02
	{
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Tanks";
        crew="vn_b_men_usmc_70_24";
		typicalCargo[]=
		{
			"vn_b_men_usmc_70_01",
			"vn_b_men_usmc_70_02",
			"vn_b_men_usmc_70_03",
			"vn_b_men_usmc_70_04",
			"vn_b_men_usmc_70_05",
			"vn_b_men_usmc_70_06",
			"vn_b_men_usmc_70_07",
			"vn_b_men_usmc_70_08",
			"vn_b_men_usmc_70_09",
			"vn_b_men_usmc_70_10",
			"vn_b_men_usmc_70_11",
			"vn_b_men_usmc_70_12",
			"vn_b_men_usmc_70_13"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerType="vn_b_men_usmc_70_25";
				class Turrets: Turrets
				{
					class CommanderTurret: CommanderTurret
					{
						gunnerType="vn_b_men_usmc_70_23";
					};
					class LoaderTurret: LoaderTurret
					{
						gunnerType="vn_b_men_usmc_70_25";
					};
				};
			};
		};
    };
    class vn_b_armor_m48_01_02_usmc_70: vn_b_armor_m48_01_02
	{
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Tanks";
        crew="vn_b_men_usmc_70_24";
        class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerType="vn_b_men_usmc_70_25";
				class Turrets: Turrets
				{
					class CommanderTurret: CommanderTurret
					{
						gunnerType="vn_b_men_usmc_70_23";
					};
					class LoaderTurret: LoaderTurret
					{
						gunnerType="vn_b_men_usmc_70_25";
					};
				};
			};
			class CargoTurret_1: CargoTurret_1
			{
			};
			class CargoTurret_2: CargoTurret_2
			{
			};
			class CargoTurret_3: CargoTurret_3
			{
			};
			class CargoTurret_4: CargoTurret_4
			{
			};
			class CargoTurret_5: CargoTurret_5
			{
			};
			class CargoTurret_6: CargoTurret_6
			{
			};
		};
    };
	class vn_b_armor_m67_01_02_usmc_70: vn_b_armor_m67_01_02
	{
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Tanks";
		crew="vn_b_men_usmc_70_24";
		typicalCargo[]=
		{
			"vn_b_men_usmc_70_08"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerType="vn_b_men_usmc_70_25";
				class Turrets: Turrets
				{
					class CommanderTurret: CommanderTurret
					{
						gunnerType="vn_b_men_usmc_70_23";
					};
				};
			};
			class CargoTurret_1: CargoTurret_1
			{
			};
			class CargoTurret_2: CargoTurret_2
			{
			};
			class CargoTurret_3: CargoTurret_3
			{
			};
			class CargoTurret_4: CargoTurret_4
			{
			};
			class CargoTurret_5: CargoTurret_5
			{
			};
			class CargoTurret_6: CargoTurret_6
			{
			};
		};
	};

    //Turrets
	class vn_b_usmc_70_static_m2_scoped_high: vn_b_usmc_static_m2_scoped_high
	{
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Turrets";
        crew="vn_b_men_usmc_70_15";
	};
	class vn_b_usmc_70_static_m2_scoped_low: vn_b_usmc_static_m2_scoped_low
	{
		faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Turrets";
        crew="vn_b_men_usmc_70_15";
	};
    class vn_b_usmc_70_static_m2_high: vn_b_usmc_static_m2_high
    {
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Turrets";
        crew="vn_b_men_usmc_70_15";
    };
	class vn_b_usmc_70_static_m2_low: vn_b_usmc_static_m2_low
    {
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Turrets";
        crew="vn_b_men_usmc_70_15";
    };
    class vn_b_usmc_70_static_m60_high: vn_b_usmc_static_m60_high
    {
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Turrets";
        crew="vn_b_men_usmc_70_15";
    };
	class vn_b_usmc_70_static_m60_low: vn_b_usmc_static_m60_low
    {
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Turrets";
        crew="vn_b_men_usmc_70_15";
    };
    class vn_b_usmc_70_static_m101_01: vn_b_usmc_static_m101_01
    {
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Turrets";
        crew="vn_b_men_usmc_70_15";
    };
	class vn_b_usmc_70_static_m40a1rr: vn_static_m40a1rr_base
    {
        faction="B_vn_USMC_70";
		editorSubcategory="EdSubcat_Turrets";
        crew="vn_b_men_usmc_70_15";
    };