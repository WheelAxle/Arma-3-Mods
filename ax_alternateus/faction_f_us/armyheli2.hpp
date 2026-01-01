	class Heli_Transport_01_base_F: Helicopter_Base_H
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
			class RightDoorGun;
		};
	};
	class B_Heli_Transport_01_F: Heli_Transport_01_base_F{};
	class B_D_Heli_Transport_01_lxWS: B_Heli_Transport_01_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
			};
			class MainTurret: MainTurret
			{
				gunnerType="Aegis_B_D_Helicrew_F";
			};
			class RightDoorGun: RightDoorGun
			{
				gunnerType="Aegis_B_D_Helicrew_F";
			};
		};
	};