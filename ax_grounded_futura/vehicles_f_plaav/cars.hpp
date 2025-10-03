    class AX_MRAP_csk181_hmg_base_F: CSK181
    {
		crewVulnerable=1;
		scope=1;
		scopeCurator=1;
		displayName="$STR_A3_GRFU_MRAP_csk181_hmg_F0";
		side=0;
		driverDoor="";
		cargoDoors[]={};
		cargoAction[]=
		{
			"passenger_apc_narrow_generic01_ns",
			"passenger_apc_narrow_generic03still_ns",
			"passenger_apc_generic02",
			"passenger_apc_generic04",
			"passenger_apc_generic03",
			"passenger_apc_generic01"
		};
		class DriverOpticsIn
		{
			delete Wide;
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				radius=0.33000001;
				visual="wheel_1_1_damage";
				armorComponent="wheel_1_1_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				radius=0.33000001;
				visual="wheel_1_2_damage";
				armorComponent="wheel_1_2_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				radius=0.33000001;
				visual="wheel_2_1_damage";
				armorComponent="wheel_2_1_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				radius=0.33000001;
				visual="wheel_2_2_damage";
				armorComponent="wheel_2_2_hide";
				armor=-250;
				minimalHit=-0.016000001;
				explosionShielding=4;
				passThrough=0;
			};
			class HitHull
			{
				armor=1;
				material=-1;
				armorComponent="hit_hull";
				name="karoserie";
				visual="-";
				passThrough=0.5;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.25;
			};
			class HitEngine
			{
				armor=0.5;
				material=-1;
				armorComponent="hit_engine";
				name="motor";
				visual="-";
				passThrough=0.30000001;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.44999999;
			};
			class HitFuel
			{
				armor=0.5;
				material=-1;
				armorComponent="hit_fuel";
				name="palivo";
				visual="-";
				passThrough=0.5;
				minimalHit=0.2;
				explosionShielding=0.2;
				radius=0.5;
			};
			class HitBody
			{
				armor=6;
				material=-1;
				name="hit_hull_point";
				visual="zbytek";
				passThrough=1;
				minimalHit=0.0099999998;
				explosionShielding=1.5;
				radius=0.44999999;
			};
			class HitGlass1: HitGlass1
			{
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass3: HitGlass3
			{
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass4: HitGlass4
			{
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass5: HitGlass5
			{
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass6: HitGlass5
			{
				name="glass6";
				visual="glass6";
				armor=1.5;
				explosionShielding=3;
				radius=0.25;
			};
			class HitGlass7: HitGlass5
			{
				name="glass7";
				visual="glass7";
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
					"\ax_grounded_futura\faction_china\data\csk\H_cskbodytexturehex.paa",
					"\ax_grounded_futura\faction_china\data\csk\O_cskhoodtexturehex.paa"
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
					"\ax_grounded_futura\faction_china\data\csk\H_cskbodytexturepac.paa",
					"\ax_grounded_futura\faction_china\data\csk\O_cskhoodtexturepac.paa"
				};
				factions[]=
				{
				};
			};
			class camo_bel
			{
				displayName="Belarus";
				author="$STR_A3_GRFU_SCollins";
				textures[]=
				{
					"\ax_grounded_futura\faction_china\data\csk\H_cskbodytexturebel.paa",
					"\ax_grounded_futura\faction_china\data\csk\O_cskhoodtexturebel.paa"
				};
				factions[]=
				{
				};
			};
			class camo_rus
			{
				displayName="Russia";
				author="$STR_A3_GRFU_SCollins";
				textures[]=
				{
					"\ax_grounded_futura\faction_china\data\csk\H_cskbodytextureRUS.paa",
					"\ax_grounded_futura\faction_china\data\csk\O_cskhoodtextureRUS.paa"
				};
				factions[]=
				{
				};
			};
			class camo_sfia
			{
				displayName="SFIA";
				author="$STR_A3_GRFU_SCollins";
				textures[]=
				{
					"\ax_grounded_futura\faction_china\data\csk\H_cskbodytexturesfia.paa",
					"\ax_grounded_futura\faction_china\data\csk\O_cskhoodtexturesfia.paa"
				};
				factions[]=
				{
				};
			};
			class camo_una
			{
				displayName="UNA";
				author="$STR_A3_GRFU_SCollins";
				textures[]=
				{
					"\ax_grounded_futura\faction_china\data\csk\H_cskbodytextureUNA.paa",
					"\ax_grounded_futura\faction_china\data\csk\O_cskhoodtextureUNA.paa"
				};
				factions[]=
				{
				};
			};
			class camo_ion
			{
				displayName="ION";
				author="$STR_A3_GRFU_SCollins";
				textures[]=
				{
					"\ax_grounded_futura\faction_china\data\csk\H_cskbodytextureION.paa",
					"\ax_grounded_futura\faction_china\data\csk\O_cskhoodtextureION.paa"
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
					"\ax_grounded_futura\faction_china\data\csk\H_cskbodytextureven.paa",
					"\ax_grounded_futura\faction_china\data\csk\O_cskhoodtextureven.paa"
				};
				factions[]=
				{
				};
			};
		};
		textureList[]=
		{
			"camo_hex","camo_greenhex","camo_bel","camo_ven",
			1
		};
		class AnimationSources: AnimationSources
		{
			class HitGlass6
			{
				source="Hit";
				hitpoint="HitGlass6";
				raw=1;
			};
			class HitGlass7: HitGlass6
			{
				hitpoint="HitGlass7";
			};
		};
		class UserActions
		{
			class ClosePlates
			{
				displayName="Close Plates";
				position="pos driver";
				radius=0;
				showwindow=0;
				condition="this doorPhase 'Plate_close' == 0 and (alive this) and player in this;";
				statement="this animateDoor ['Plate_close', 1]";
				onlyforplayer=1;
			};
			class OpenPlates: ClosePlates
			{
				displayName="Open Plates";
				condition="this doorPhase 'Plate_close' == 1 and (alive this) and player in this;";
				statement="this animateDoor ['Plate_close', 0]";
			};
		};
		class Turrets: Turrets
		{
			class HMGTurret: HMGTurret
			{
				gunnerDoor="";
			};
		};
    };