    class AX_APC_zbd04a_base_F: O_ZBD04A
    {
		scope=1;
		scopeCurator=1;
		side=0;
		damageResistance=0.0071899998;
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				//armor=0.60000002;
				armor=1;
				material=-1;
				armorComponent="hit_armor";
				name="telo";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.14;
				explosionShielding=0.2;
				radius=0.9;
			};
			class HitEngine: HitEngine
			{
				armor=0.5;
				material=-1;
				armorComponent="hit_engine";
				name="motor";
				passThrough=0.2;
				minimalHit=0.15000001;
				explosionShielding=0.2;
				radius=0.9;
			};
			class HitFuel: HitFuel
			{
				armor=0.5;
				material=-1;
				armorComponent="hit_fuel";
				name="hit_fuel_point";
				visual="";
				passThrough=0.30000001;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=1;
			};
			class HitLTrack: HitLTrack
			{
				armor=-400;
				material=-1;
				armorComponent="hit_trackl";
				name="hit_trackl_point";
				visual="";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=0.80000001;
				radius=1;
			};
			class HitRTrack: HitRTrack
			{
				armor=-400;
				material=-1;
				armorComponent="hit_trackr";
				name="hit_trackr_point";
				visual="";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=0.80000001;
				radius=1;
			};
			class HitArmor
			{
				armor=5;
				material=-1;
				armorComponent="hit_hull";
				name="hit_Armor_points";
				visual="Armor";
				passThrough=1;
				minimalHit=0.1;
				explosionShielding=0.80000001;
				radius=0.1;
				isTurret=0;
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						class HitPoints
						{
							class HitComTurret
							{
								armor=0.30000001;
								material=-1;
								armorComponent="hit_com_turret";
								name="vezVelitele";
								visual="vezVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
								isTurret=1;
							};
							class HitComGun
							{
								armor=0.30000001;
								material=-1;
								armorComponent="hit_com_gun";
								name="zbranVelitele";
								visual="zbranVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.60000002;
								radius=0.25;
								isGun=1;
							};
						};
					};
				};
				class HitPoints
				{
					class HitTurret
					{
						armor=1;
						material=-1;
						armorComponent="hit_main_turret";
						name="vez";
						visual="";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.30000001;
						radius=0.15;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.80000001;
						material=-1;
						armorComponent="hit_main_gun";
						name="zbran";
						visual="";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.25;
						isGun=1;
					};
				};
			};
		};
		class textureSources
		{
			class camo_hex
			{
				displayName="Hex";
				author="$STR_A3_GRFU_SCollins";
				textures[]=
				{
					"\ax_grounded_futura\faction_china\data\zbd04\H_ZBD04_hex.paa",
					"\ax_grounded_futura\faction_china\data\zbd04\T_ZBD04_HEX.paa",
					"\ax_grounded_futura\faction_china\data\zbd04\TO_ZBd04_HEX.paa",
					"\ax_grounded_futura\faction_china\data\zbd04\W_ZBD04_HEX.paa",
				};
				factions[]=
				{
				};
			};
			class camo_greenhex
			{
				displayName="Green Hex";
				author="$STR_A3_GRFU_SCollins";
				textures[]=
				{
					"\ax_grounded_futura\faction_china\data\zbd04\H_ZBD04_pac.paa",
					"\ax_grounded_futura\faction_china\data\zbd04\T_ZBD04_PAC.paa",
					"\ax_grounded_futura\faction_china\data\zbd04\TO_ZBd04_PAC.paa",
					"\ax_grounded_futura\faction_china\data\zbd04\W_ZBD04_PAC.paa",
				};
				factions[]=
				{
				};
			};
		};
		textureList[]=
		{
			"camo_hex","camo_greenhex",
			1
		};
	};
    class AX_APC_zbl09_base_F: O_ZBL09
    {
		scope=1;
		scopeCurator=1;
		side=0;
		damageResistance=0.0071899998;
        /*
		class HitPoints: HitPoints
		{
			class HitHull: HitHull
			{
				//armor=0.80000001;
				armor=1;
				material=-1;
				armorComponent="hit_armor";
				name="telo";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.14;
				explosionShielding=0.2;
				radius=0.5;
			};
			class HitEngine: HitEngine
			{
				armor=1;
				material=-1;
				name="motor";
				armorComponent="hit_engine";
				passThrough=0.2;
				minimalHit=0.15000001;
				explosionShielding=0.2;
				radius=0.9;
			};
			class HitFuel: HitFuel
			{
				armor=0.5;
				material=-1;
				armorComponent="hit_fuel";
				name="hit_fuel_point";
				visual="-";
				passThrough=0.15000001;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=0.9;
			};
			class HitLFWheel: HitLFWheel
			{
				radius=0.33000001;
				name="hit_wheel_1_1";
				visual="wheel_1_1_hide";
				armorComponent="wheel_1_1_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				radius=0.33000001;
				name="hit_wheel_1_2";
				visual="wheel_1_2_hide";
				armorComponent="wheel_1_2_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLMWheel: HitLMWheel
			{
				radius=0.33000001;
				name="hit_wheel_1_3";
				visual="wheel_1_3_hide";
				armorComponent="wheel_1_3_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLBWheel: HitLBWheel
			{
				radius=0.33000001;
				name="hit_wheel_1_4";
				visual="wheel_1_4_hide";
				armorComponent="wheel_1_4_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				radius=0.33000001;
				name="hit_wheel_2_1";
				visual="wheel_2_1_hide";
				armorComponent="wheel_2_1_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				radius=0.33000001;
				name="hit_wheel_2_2";
				visual="wheel_2_2_hide";
				armorComponent="wheel_2_2_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRMWheel: HitRMWheel
			{
				radius=0.33000001;
				name="hit_wheel_2_3";
				visual="wheel_2_3_hide";
				armorComponent="wheel_2_3_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRBWheel: HitRBWheel
			{
				radius=0.33000001;
				name="hit_wheel_2_4";
				visual="wheel_2_4_hide";
				armorComponent="wheel_2_4_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitArmor
			{
				armor=5;
				material=-1;
				armorComponent="hit_hull";
				name="hit_Armor_points";
				visual="Armor";
				passThrough=1;
				minimalHit=0.1;
				explosionShielding=2;
				radius=0.1;
				isTurret=0;
			};
		};
        */
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
                        class HitPoints
						{
							class HitTurret
							{
								armor=0.30000001;
								material=-1;
								name="vezVelitele";
								visual="vezVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.40000001;
								radius=0.25;
							};
						};
                    };
                };
                class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						name="vez";
						visual="vez";
						armorComponent="hit_turret";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.30000001;
						radius=0.30000001;
					};
					class HitGun
					{
						armor=0.30000001;
						material=-1;
						name="zbran";
						armorComponent="hit_gun";
						visual="";
						passThrough=0;
						minimalHit=0.029999999;
						explosionShielding=0.2;
						radius=0.25;
					};
				};
            };
        };
		class textureSources
		{
			class camo_hex
			{
				displayName="Hex";
				author="$STR_A3_GRFU_SCollins";
				textures[]=
				{
					"\ax_grounded_futura\faction_china\data\zbl09\H_body_ZBLHex.paa",
					"\ax_grounded_futura\faction_china\data\zbl09\T_Tur_ZBL_HEX.paa",
					"\ax_grounded_futura\faction_china\data\zbl09\TO_MIS_ZBL_HEX.paa",
					"\ax_grounded_futura\faction_china\data\zbl09\W_Tire_ZTL_HEX.paa"
				};
				factions[]=
				{
				};
			};
			class camo_greenhex
			{
				displayName="Green Hex";
				author="$STR_A3_GRFU_SCollins";
				textures[]=
				{
					"\ax_grounded_futura\faction_china\data\zbl09\H_body_ZBLPAC.paa",
					"\ax_grounded_futura\faction_china\data\zbl09\T_Tur_ZBL_PAC.paa",
					"\ax_grounded_futura\faction_china\data\zbl09\TO_MIS_ZBL_PAC.paa",
					"\ax_grounded_futura\faction_china\data\zbl09\W_Tire_ZTL_PAC.paa"
				};
				factions[]=
				{
				};
			};
			class camo_ven
			{
				displayName="Venezuela";
				author="$STR_A3_GRFU_SCollins";
				textures[]=
				{
					"\ax_grounded_futura\faction_china\data\zbl09\H_body_ZBLVEN.paa",
					"\ax_grounded_futura\faction_china\data\zbl09\T_Tur_ZBL_ven.paa",
					"\ax_grounded_futura\faction_china\data\zbl09\TO_MIS_ZBL_VEN.paa",
					"\ax_grounded_futura\faction_china\data\zbl09\W_Tire_ZTL_VEN.paa"
				};
				factions[]=
				{
				};
			};
		};
		textureList[]=
		{
			"camo_hex","camo_greenhex","camo_ven",
			1
		};
	};