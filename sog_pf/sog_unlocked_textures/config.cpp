class CfgPatches
{
	class ax_sog_unlocked_texture_sources
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"loadorder_f_vietnam"
		};
		author="Axle";
	};
};

class cfgVehicles
{
    #include "vn_air.hpp"
    #include "vn_armor.hpp"
    #include "vn_boat.hpp"
    #include "vn_wheeled.hpp"
};