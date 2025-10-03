class CfgPatches
{
	class ax_grounded_futura_compat_aegis
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Aegis_Air_F_Aegis",
			"ax_grounded_futura_plaav"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgWeapons
{
};

class CfgVehicles
{
	class AX_O_Plane_Fighter_j10_F;
	class AX_O_Plane_Fighter_j11_F;
	class AX_O_Plane_Fighter_j15_F;
	class AX_O_Plane_Fighter_j16_F;
	class AX_O_Plane_Fighter_j20_F;
	class AX_O_T_Plane_Fighter_j10_F: AX_O_Plane_Fighter_j10_F
    {
		crew="O_T_Fighter_Pilot_F";
		typicalCargo[]=
		{
			"O_T_Fighter_Pilot_F"
		};
    };
    class AX_O_T_Plane_Fighter_j11_F: AX_O_Plane_Fighter_j11_F
    {
		crew="O_T_Fighter_Pilot_F";
		typicalCargo[]=
		{
			"O_T_Fighter_Pilot_F"
		};
    };
    class AX_O_T_Plane_Fighter_j15_F: AX_O_Plane_Fighter_j15_F
    {
		crew="O_T_Fighter_Pilot_F";
		typicalCargo[]=
		{
			"O_T_Fighter_Pilot_F"
		};
    };
	class AX_O_T_Plane_Fighter_j16_F: AX_O_Plane_Fighter_j16_F
    {
		crew="O_T_Fighter_Pilot_F";
		typicalCargo[]=
		{
			"O_T_Fighter_Pilot_F"
		};
    };
	class AX_O_T_Plane_Fighter_j20_F: AX_O_Plane_Fighter_j20_F
    {
		crew="O_T_Fighter_Pilot_F";
		typicalCargo[]=
		{
			"O_T_Fighter_Pilot_F"
		};
    };
};