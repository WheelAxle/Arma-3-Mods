    class AX_MBT_ztz96b_base_F: O_ZTZ96B
	{
		scope=1;
		scopeCurator=1;
		side=0;
		class HitPoints: HitPoints
		{
            class HitHull: HitHull
			{
				armor=1.2;
				material=-1;
				armorComponent="hit_armor";
				name="hit_hull_points";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.30000001;
			};
			class HitEngine: HitEngine
			{
				armor=0.5;
				material=-1;
				armorComponent="hit_engine";
				name="hit_engine_points";
				passThrough=0.30000001;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.9;
			};
			class HitFuel: HitFuel
			{
				armor=0.5;
				material=-1;
				armorComponent="hit_fuel";
				name="hit_fuel_points";
				visual="-";
				passThrough=0.30000001;
				minimalHit=0.1;
				explosionShielding=0.60000002;
				radius=0.9;
			};
			class HitLTrack: HitLTrack
			{
				armor=-650;
				material=-1;
				armorComponent="hit_LTrack";
				name="hit_LTrack_points";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=1.4400001;
				radius=0.9;
			};
			class HitRTrack: HitRTrack
			{
				armor=-650;
				material=-1;
				armorComponent="hit_RTrack";
				name="hit_RTrack_points";
				passThrough=0;
				minimalHit=0.079999998;
				explosionShielding=1.4400001;
				radius=0.9;
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
			class HitERA_Front
			{
				simulation="Armor_ERA_Heavy";
				armorComponent="ERA_F";
				name="ERA_F_point";
				armor=-100;
				minimalHit=1;
				radius=0.30000001;
				passThrough=1;
				visual="-";
				explosionShielding=2;
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_F_pos";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
            class HitERA_Front_2: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_F_2";
				name="ERA_F_point_2";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_F_pos_2";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Front_3: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_F_3";
				name="ERA_F_point_3";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_F_pos_3";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Front_4: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_F_4";
				name="ERA_F_point_4";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_F_pos_4";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Front_5: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_F_5";
				name="ERA_F_point_5";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_F_pos_5";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Front_6: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_F_6";
				name="ERA_F_point_6";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_F_pos_6";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Front_7: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_F_7";
				name="ERA_F_point_7";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_F_pos_7";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Front_8: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_F_8";
				name="ERA_F_point_8";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_F_pos_8";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Front_9: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_F_9";
				name="ERA_F_point_9";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_F_pos_9";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_Front_10: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_F_10";
				name="ERA_F_point_10";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="era_F_pos_10";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T";
				name="ERA_T_point";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_2: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_2";
				name="ERA_T_point_2";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_2";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_3: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_3";
				name="ERA_T_point_3";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_3";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_4: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_4";
				name="ERA_T_point_4";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_4";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_5: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_5";
				name="ERA_T_point_5";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_5";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_6: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_6";
				name="ERA_T_point_6";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_6";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_7: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_7";
				name="ERA_T_point_7";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_7";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_8: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_8";
				name="ERA_T_point_8";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_8";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_9: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_9";
				name="ERA_T_point_9";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_9";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_10: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_10";
				name="ERA_T_point_10";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_10";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_11: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_11";
				name="ERA_T_point_11";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_11";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_12: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_12";
				name="ERA_T_point_12";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_12";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_13: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_13";
				name="ERA_T_point_13";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_13";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_14: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_14";
				name="ERA_T_point_14";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_14";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_15: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_15";
				name="ERA_T_point_15";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_15";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_16: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_16";
				name="ERA_T_point_16";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_16";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_17: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_17";
				name="ERA_T_point_17";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_17";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_18: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_18";
				name="ERA_T_point_18";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_18";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_19: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_19";
				name="ERA_T_point_19";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_19";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_20: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_20";
				name="ERA_T_point_20";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_20";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_21: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_21";
				name="ERA_T_point_21";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_21";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_22: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_22";
				name="ERA_T_point_22";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_22";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_23: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_23";
				name="ERA_T_point_23";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_23";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_24: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_24";
				name="ERA_T_point_24";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_24";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_25: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_25";
				name="ERA_T_point_25";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_25";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_26: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_26";
				name="ERA_T_point_26";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_26";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_27: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_27";
				name="ERA_T_point_27";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_27";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_28: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_28";
				name="ERA_T_point_28";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_28";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_29: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_29";
				name="ERA_T_point_29";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_29";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_30: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_30";
				name="ERA_T_point_30";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_30";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_31: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_31";
				name="ERA_T_point_31";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_31";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_32: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_32";
				name="ERA_T_point_32";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_32";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_33: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_33";
				name="ERA_T_point_33";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_33";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
			};
			class HitERA_T_34: HitERA_Front
			{
				passThrough=1;
				armorComponent="ERA_T_34";
				name="ERA_T_point_34";
				class DestructionEffects
				{
					ammoExplosionEffect="";
					effectRadius=1;
					ignoreFuel=1;
					class Explo
					{
						simulation="particles";
						type="MineExplosionParticles";
						position="ERA_T_pos_34";
						lifeTime=0.0099999998;
						interval=1;
						intensity=0.0099999998;
					};
					class Smoke: Explo
					{
						type="ERASmoke";
						lifeTime=0.050000001;
					};
					class Sound: Explo
					{
						simulation="sound";
						type="ERA_Explosion";
						lifeTime=1;
					};
				};
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
								armor=0.1;
								material=-1;
								armorComponent="hit_com_turret";
								name="vezVelitele";
								visual="vezVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.2;
								radius=0.25;
								isTurret=1;
							};
							class HitComGun
							{
								armor=0.1;
								material=-1;
								armorComponent="hit_com_gun";
								name="zbranVelitele";
								visual="zbranVelitele";
								passThrough=0;
								minimalHit=0.029999999;
								explosionShielding=0.2;
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
						armor=0.80000001;
						material=-1;
						armorComponent="hit_main_turret";
						name="hit_main_turret_points";
						visual="";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.25;
						isTurret=1;
					};
					class HitGun
					{
						armor=0.80000001;
						material=-1;
						armorComponent="hit_main_gun";
						name="hit_main_gun_points";
						visual="";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.2;
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
					"\ax_grounded_futura\faction_china\data\ztz96\H_ZTZ96_HEX.paa",
					"\ax_grounded_futura\faction_china\data\ztz96\T_ZTZ96_HEX.paa",
					"\ax_grounded_futura\faction_china\data\ztz96\ERA_ZTZ96_HEX.paa",
					"\ax_grounded_futura\faction_china\data\ztz96\TO_ZTZ96_HEX.paa",
					"\ax_grounded_futura\faction_china\data\ztz96\C_ZTZ96_HEX.paa",
					"\ax_grounded_futura\faction_china\data\ztz96\W_ZTZ96_HEX.paa",
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
					"\ax_grounded_futura\faction_china\data\ztz96\H_ZTZ96_PAC.paa",
					"\ax_grounded_futura\faction_china\data\ztz96\T_ZTZ96_PAC.paa",
					"\ax_grounded_futura\faction_china\data\ztz96\TO_ZTZ96_PAC.paa",
					"\ax_grounded_futura\faction_china\data\ztz96\C_ZTZ96_PAC.paa",
					"\ax_grounded_futura\faction_china\data\ztz96\W_ZTZ96_PAC.paa",
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