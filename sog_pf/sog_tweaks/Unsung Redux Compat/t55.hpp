    class uns_T55_Base: Tank_F
	{
		class EventHandlers: EventHandlers
		{
			class unsung
			{
				init="_this spawn uns_t34_t55_fnc_T55_init;";
				fired="_this spawn uns_armour_fnc_arty_fired;";
				killed="_this spawn uns_t34_t55_fnc_turret;";
			};
		};
	};
	class uns_t55_nva: uns_T55_Base{scope=1;scopeCurator=1;};
	class uns_t54_nva: uns_t55_nva{scope=1;scopeCurator=1;};
	class uns_to55_nva: uns_t55_nva{scope=1;scopeCurator=1;};