	class vnx_armor_m50_base: vn_armor_tank_base
    {
		class Turrets: Turrets
		{
			class mainTurret: NewTurret
            {
            };
			class loaderTurret: NewTurret
            {
            };
        };
    };
	class vnx_armor_m50_01: vnx_armor_m50_base
    {
		class Turrets: Turrets
        {
			class mainTurret: mainTurret
            {
            };
			class loaderTurret: loaderTurret
            {
            };
			class mg7_turret: NewTurret
            {
            };
        };
    };
	class vnx_armor_m50a1_01: vnx_armor_m50_base
    {
		class Turrets: Turrets
        {
			class mainTurret: mainTurret
            {
            };
			class loaderTurret: loaderTurret
            {
            };
			class mg7_turret: NewTurret
            {
            };
        };
    };
	class vnx_b_armor_m50_01_usmc: vnx_armor_m50_01
    {
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Tanks";
    };
	class vnx_b_armor_m50a1_01_usmc: vnx_armor_m50a1_01
    {
		faction="B_vn_USMC_68";
		editorSubcategory="EdSubcat_Tanks";
    };
	class vnx_b_armor_m50_01: vnx_armor_m50_01
    {
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Tanks";
    };
	class vnx_b_armor_m50a1_01: vnx_armor_m50a1_01
    {
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Tanks";
    };