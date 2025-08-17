class CfgPatches
{
	class ax_additional_names
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
            "A3_Data_F_Decade_Loadorder"
		};
	};
};

class CfgWorlds
{
    class GenericNames
	{
        #include "aus.hpp"
        #include "cn.hpp"
        //#include "de.hpp"
        //#include "dk.hpp"
        #include "fr.hpp"
        //#include "gk.hpp"
        #include "ir.hpp"
        //#include "is.hpp"
        //#include "la.hpp"
        //#include "macv.hpp"
        #include "pl.hpp"
        #include "ru.hpp"
        //#include "sk.hpp"
        //#include "th.hpp"
        //#include "tk.hpp"
        //#include "tr.hpp"
        #include "uk.hpp"
        #include "us.hpp"
        #include "vn_fixed.hpp"
        #include "vz.hpp"
        //#include "ws.hpp"
    };
};

class CfgVehicles
{
    class SoldierWB;
    class SoldierEB;
	class B_Soldier_base_F: SoldierWB
	{
		genericNames="AmericanMen";
    };
	class O_Soldier_base_F: SoldierEB
	{
		genericNames="IranianMen";
    };
	class B_CTRG_Soldier_base_F: B_Soldier_base_F
	{
		genericNames="BritishMen";
    };
    class B_ghillie_base_F;
	class B_CTRG_ghillie_base_F: B_ghillie_base_F
	{
		genericNames="BritishMen";
    };
    class B_CTRG_Soldier_F;
	class B_CTRG_Soldier_AR_tna_F: B_CTRG_Soldier_F
	{
		genericNames="AmericanMen";
    };
	class B_CTRG_Soldier_Exp_tna_F: B_CTRG_Soldier_F
	{
		genericNames="AmericanMen";
    };
	class B_CTRG_Soldier_JTAC_tna_F: B_CTRG_Soldier_F
	{
		genericNames="AmericanMen";
    };
	class B_CTRG_Soldier_M_tna_F: B_CTRG_Soldier_F
	{
		genericNames="AmericanMen";
    };
	class B_CTRG_Soldier_Medic_tna_F: B_CTRG_Soldier_F
	{
		genericNames="AmericanMen";
    };
	class B_CTRG_Soldier_tna_F: B_CTRG_Soldier_F
	{
		genericNames="AmericanMen";
    };
	class B_CTRG_Soldier_LAT_tna_F: B_CTRG_Soldier_F
	{
		genericNames="AmericanMen";
    };
	class B_CTRG_Soldier_LAT2_tna_F: B_CTRG_Soldier_F
	{
		genericNames="AmericanMen";
    };
	class B_CTRG_ghillie_tna_F: B_CTRG_ghillie_base_F
	{
		genericNames="AmericanMen";
    };
	class B_CTRG_ghillie_spotter_tna_F: B_CTRG_ghillie_tna_F
	{
		genericNames="AmericanMen";
    };
	class B_CTRG_Soldier_TL_tna_F: B_CTRG_Soldier_F
	{
		genericNames="AmericanMen";
    };
	class B_CTRG_Soldier_2_F: B_CTRG_Soldier_base_F
	{
		genericNames="AmericanMen";
    };
};