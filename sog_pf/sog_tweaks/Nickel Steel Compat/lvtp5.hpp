    class vnx_armor_lvtp5_base: vn_armor_tank_base
	{
		class Turrets;
    };
	class vnx_armor_lvtp5_01_base: vnx_armor_lvtp5_base
    {
    };
	class vnx_armor_lvtp5_01: vnx_armor_lvtp5_01_base
    {
		class Turrets: Turrets
		{
			class mg5_turret: NewTurret{};
			class CommanderTurret: NewTurret{};
			class CargoTurret_25: CargoTurret{};
			class CargoTurret_26: CargoTurret_25{};
			class CargoTurret_27: CargoTurret_25{};
			class CargoTurret_28: CargoTurret_25{};
			class CargoTurret_29: CargoTurret_25{};
			class CargoTurret_30: CargoTurret_25{};
			class CargoTurret_31: CargoTurret_25{};
			class CargoTurret_32: CargoTurret_25{};
			class CargoTurret_33: CargoTurret_25{};
			class CargoTurret_34: CargoTurret_25{};
			class CargoTurret_35: CargoTurret_25{};
			class CargoTurret_36: CargoTurret_25{};
			class CargoTurret_37: CargoTurret_25{};
			class CargoTurret_38: CargoTurret_25{};
			class CargoTurret_39: CargoTurret_25{};
        };
    };
    class vnx_b_armor_lvtp5_01: vnx_armor_lvtp5_01
    {
    	faction="B_vn_USMC_68";
    	editorSubcategory="EdSubcat_APCs";
		crew="vn_b_men_usmc_68_24";
		typicalCargo[]=
		{
			"vn_b_men_usmc_68_08"
		};
        class Turrets: Turrets
		{
			class mg5_turret: mg5_turret
			{
				gunnerType="vn_b_men_usmc_68_25";
			};
			class CommanderTurret: CommanderTurret
			{
				gunnerType="vn_b_men_usmc_68_23";
			};
			class CargoTurret_25: CargoTurret_25
			{
			};
			class CargoTurret_26: CargoTurret_26
			{
			};
			class CargoTurret_27: CargoTurret_27
			{
			};
			class CargoTurret_28: CargoTurret_28
			{
			};
			class CargoTurret_29: CargoTurret_29
			{
			};
			class CargoTurret_30: CargoTurret_30
			{
			};
			class CargoTurret_31: CargoTurret_31
			{
			};
			class CargoTurret_32: CargoTurret_32
			{
			};
			class CargoTurret_33: CargoTurret_33
			{
			};
			class CargoTurret_34: CargoTurret_34
			{
			};
			class CargoTurret_35: CargoTurret_35
			{
			};
			class CargoTurret_36: CargoTurret_36
			{
			};
			class CargoTurret_37: CargoTurret_37
			{
			};
			class CargoTurret_38: CargoTurret_38
			{
			};
			class CargoTurret_39: CargoTurret_39
			{
			};
		};
    };
	class vnx_armor_lvtp5c_01: vnx_armor_lvtp5_01{};
	class vnx_armor_lvtr1_01: vnx_armor_lvtp5_01_base
	{
		class Turrets: Turrets
		{
			class rigger_turret: NewTurret{};
			class CommanderTurret: NewTurret{};
			class CargoTurret_27: CargoTurret{};
			class CargoTurret_28: CargoTurret_27{};
			class CargoTurret_29: CargoTurret_27{};
			class CargoTurret_30: CargoTurret_27{};
			class CargoTurret_31: CargoTurret_27{};
			class CargoTurret_32: CargoTurret_27{};
			class CargoTurret_33: CargoTurret_27{};
			class CargoTurret_34: CargoTurret_27{};
			class CargoTurret_35: CargoTurret_27{};
			class CargoTurret_36: CargoTurret_27{};
			class CargoTurret_37: CargoTurret_27{};
			class CargoTurret_38: CargoTurret_27{};
			class CargoTurret_39: CargoTurret_27{};
        };
    };
	class vnx_armor_lvte1_01: vnx_armor_lvtp5_01
	{
		class Turrets: Turrets
		{
			class mg5_turret: mg5_turret
			{
			};
			class CommanderTurret: CommanderTurret
			{
			};
		};
	};
	class vnx_b_armor_lvtp5c_01_usmc: vnx_armor_lvtp5c_01
	{
    	faction="B_vn_USMC_68";
    	editorSubcategory="EdSubcat_APCs";
		crew="vn_b_men_usmc_68_24";
		typicalCargo[]=
		{
			"vn_b_men_usmc_68_08"
		};
		class Turrets: Turrets
		{
			class mg5_turret: mg5_turret
			{
				gunnerType="vn_b_men_usmc_68_25";
			};
			class CommanderTurret: CommanderTurret
			{
				gunnerType="vn_b_men_usmc_68_23";
			};
			class CargoTurret_25: CargoTurret_25
			{
			};
			class CargoTurret_26: CargoTurret_26
			{
			};
			class CargoTurret_27: CargoTurret_27
			{
			};
			class CargoTurret_28: CargoTurret_28
			{
			};
			class CargoTurret_29: CargoTurret_29
			{
			};
			class CargoTurret_30: CargoTurret_30
			{
			};
			class CargoTurret_31: CargoTurret_31
			{
			};
			class CargoTurret_32: CargoTurret_32
			{
			};
			class CargoTurret_33: CargoTurret_33
			{
			};
			class CargoTurret_34: CargoTurret_34
			{
			};
			class CargoTurret_35: CargoTurret_35
			{
			};
			class CargoTurret_36: CargoTurret_36
			{
			};
			class CargoTurret_37: CargoTurret_37
			{
			};
			class CargoTurret_38: CargoTurret_38
			{
			};
			class CargoTurret_39: CargoTurret_39
			{
			};
		};
	};
	class vnx_b_armor_lvtr1_01_usmc: vnx_armor_lvtr1_01
	{
    	faction="B_vn_USMC_68";
    	editorSubcategory="EdSubcat_APCs";
		crew="vn_b_men_usmc_68_24";
		typicalCargo[]=
		{
			"vn_b_men_usmc_68_08"
		};
		class Turrets: Turrets
		{
			class rigger_turret: rigger_turret
			{
				gunnerType="vn_b_men_usmc_68_25";
			};
			class CommanderTurret: CommanderTurret
			{
				gunnerType="vn_b_men_usmc_68_23";
			};
			class CargoTurret_27: CargoTurret_27
			{
			};
			class CargoTurret_28: CargoTurret_28
			{
			};
			class CargoTurret_29: CargoTurret_29
			{
			};
			class CargoTurret_30: CargoTurret_30
			{
			};
			class CargoTurret_31: CargoTurret_31
			{
			};
			class CargoTurret_32: CargoTurret_32
			{
			};
			class CargoTurret_33: CargoTurret_33
			{
			};
			class CargoTurret_34: CargoTurret_34
			{
			};
			class CargoTurret_35: CargoTurret_35
			{
			};
			class CargoTurret_36: CargoTurret_36
			{
			};
			class CargoTurret_37: CargoTurret_37
			{
			};
			class CargoTurret_38: CargoTurret_38
			{
			};
			class CargoTurret_39: CargoTurret_39
			{
			};
		};
	};
	class vnx_b_armor_lvte1_01_usmc: vnx_armor_lvte1_01
	{
    	faction="B_vn_USMC_68";
    	editorSubcategory="EdSubcat_APCs";
		crew="vn_b_men_usmc_68_24";
		typicalCargo[]=
		{
			"vn_b_men_usmc_68_08"
		};
		class Turrets: Turrets
		{
			class mg5_turret: mg5_turret
			{
				gunnerType="vn_b_men_usmc_68_25";
			};
			class CommanderTurret: CommanderTurret
			{
				gunnerType="vn_b_men_usmc_68_23";
			};
		};
	};