class CfgPatches
{
	class ax_sog_expanded_groups
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"ax_sog_expanded"
		};
		author="Axle";
	};
};

class cfgGroups
{
	class Civ
    {
    };
	class East
	{
		#include "kr1970.hpp"
		#include "kr1975.hpp"
		#include "pavn1965.hpp"
		#include "pavn1968.hpp"
		#include "vpaf.hpp"
		#include "vpn.hpp"
		#include "vpnm.hpp"
	};
	class Indep
	{
		#include "arvn1965.hpp"
		#include "arvn1968.hpp"
		#include "arvnmc.hpp"
		#include "fank1970.hpp"
		#include "fank1971.hpp"
	};
   	class West
	{
		#include "adf1966.hpp"
		#include "adf1968.hpp"
		#include "adf1970.hpp"
		#include "adfsasr.hpp"
		#include "nzdf1966.hpp"
		#include "nzdf1968.hpp"
		#include "nzdf1970.hpp"
		#include "nzsas.hpp"
		#include "kot1968.hpp"
		#include "rok1965.hpp"
		#include "rok1968.hpp"
		#include "rokmc1965.hpp"
		#include "rokmc1968.hpp"
		#include "usarmy1968.hpp"
		#include "usmc1966.hpp"
		#include "usmc1968.hpp"
		#include "usmc1970.hpp"
		#include "macv.hpp"
		#include "usaf.hpp"
		#include "usn.hpp"
	};
};