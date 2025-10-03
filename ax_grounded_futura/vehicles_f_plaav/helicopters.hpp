    class AX_Heli_Transport_z8l_base_F: Z8L
	{
        scope=1;
		scopeCurator=1;
		side=0;
		displayName="$STR_A3_GRFU_Heli_Transport_z8l_F0";
	};
    class AX_Heli_Attack_z10_base_F: Z10
    {
        scope=1;
		scopeCurator=1;
		side=0;
		displayName="$STR_A3_GRFU_Heli_Attack_z10_F0";
		driverDoor="";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				GunnerDoor="";
			};
		};
	};
	class AX_Heli_Light_z11wa_base_F: Z11WA
	{
        scope=1;
		scopeCurator=1;
		side=0;
		displayName="$STR_A3_GRFU_Heli_Light_z11wa_F0";
	};
    class AX_Heli_Light_z11wa2_base_F: Z11WA_2
	{
        scope=1;
		scopeCurator=1;
		side=0;
		displayName="$STR_A3_GRFU_Heli_Light_z11wa2_F0";
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture="\Z11\tex\UI\Z11W_LOADOUT_CA.paa";
				class Pylons
				{
					class Pylons1
					{
						maxweight=560;
						attachment="";
						priority=5;
						hardpoints[]=
						{
							"LK_MISSILE_X1"
						};
						UIposition[]={0.059999999,0.40000001};
						turret[]={};
					};
					class Pylons2: Pylons1
					{
						attachment="";
						priority=4;
						hardpoints[]=
						{
							"LK_MISSILE_X1"
						};
						UIposition[]={0.079999998,0.46000001};
					};
					class Pylons3: Pylons1
					{
						attachment="";
						priority=3;
						hardpoints[]=
						{
							"LK_ROCKETS",
							"DAR",
							"DAGR",
							"20MM_TWIN_CANNON"
						};
						UIposition[]={0.1,0.51999998};
					};
					class Pylons4: Pylons3
					{
						mirroredMissilePos=3;
						UIposition[]={0.55000001,0.51999998};
					};
					class Pylons5: Pylons2
					{
						mirroredMissilePos=2;
						UIposition[]={0.56999999,0.46000001};
					};
					class Pylons6: Pylons1
					{
						mirroredMissilePos=1;
						UIposition[]={0.58999997,0.40000001};
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
							"LK_TY90X1_AA",
							"LK_TL2X1_AG",
							"LK_57mmRocketX19_HE",
							"LK_57mmRocketX19_HE",
							"LK_TL2X1_AG",
							"LK_TY90X1_AA"
						};
					};
					class AT
					{
						displayName="$STR_A3_cfgmagazines_titan_at_dns";
						attachment[]=
						{
							"LK_TL2X1_AG",
							"LK_TL2X1_AG",
							"LK_57mmRocketX19_HE",
							"LK_57mmRocketX19_HE",
							"LK_TL2X1_AG",
							"LK_TL2X1_AG"
						};
					};
				};
			};
		};
	};
    class AX_Heli_Attack_z19_base_F: Z19
	{
        scope=1;
		scopeCurator=1;
		side=0;
		displayName="$STR_A3_GRFU_Heli_Attack_z19_F0";
		driverDoor="";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				GunnerDoor="";
			};
		};
	};
    class AX_Heli_Transport_z20_base_F: Z20
	{
        scope=1;
		scopeCurator=1;
		side=0;
		displayName="$STR_A3_GRFU_Heli_Transport_z20_F0";
	};
