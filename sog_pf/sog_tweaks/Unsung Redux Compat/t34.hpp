    class uns_t34_85_nva: Tank_F
	{
		faction="O_PAVN";
		editorSubcategory="EdSubcat_Tanks";
		displayName="T-34/85 Tank";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewOptics;
				class Turrets: Turrets
				{
					class CommanderOptics: NewTurret
					{
						class ViewOptics;
						class ViewGunner;
					};
				};
			};
			class FrontGunner: MainTurret
			{
				class ViewOptics;
				class Turrets;
			};
		};
		class EventHandlers: EventHandlers
		{
			class unsung
			{
				init="_this spawn uns_t34_t55_fnc_T34_init;";
				fired="_this spawn uns_armour_fnc_arty_fired;";
			};
		};
	};
	class uns_t34_85_nva_65: uns_t34_85_nva
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Tanks";
		crew="vn_o_men_nva_65_36"; //Driver
		typicalCargo[]=
		{
			"vn_o_men_nva_65_36", //Driver
			"vn_o_men_nva_65_37", //Gunner
			"vn_o_men_nva_65_35", //Commander
			"vn_o_men_nva_65_37" //Gunner
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerType="vn_o_men_nva_65_37";
				class ViewOptics;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerType="vn_o_men_nva_65_35";
						class ViewOptics;
						class ViewGunner;
					};
				};
			};
			class FrontGunner: FrontGunner
			{
				gunnerType="vn_o_men_nva_65_37";
				class ViewOptics;
				class Turrets;
			};
		};
	};
	class uns_ot34_85_nva: uns_t34_85_nva
	{
		faction="O_PAVN";
		editorSubcategory="EdSubcat_Tanks";
		displayName="OT-34/85 Tank";
	};
	class uns_ot34_85_nva_65: uns_ot34_85_nva
	{
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Tanks";
		crew="vn_o_men_nva_65_36"; //Driver
		typicalCargo[]=
		{
			"vn_o_men_nva_65_36", //Driver
			"vn_o_men_nva_65_37", //Gunner
			"vn_o_men_nva_65_35", //Commander
			"vn_o_men_nva_65_37" //Gunner
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerType="vn_o_men_nva_65_37";
				class ViewOptics;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerType="vn_o_men_nva_65_35";
						class ViewOptics;
						class ViewGunner;
					};
				};
			};
			class FrontGunner: FrontGunner
			{
				gunnerType="vn_o_men_nva_65_37";
				class ViewOptics;
				class GunFire;
				class Turrets;
			};
		};
	};