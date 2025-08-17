class CfgPatches
{
	class simple_soldier_names_sog
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"loadorder_f_vietnam"
		};
		author="Axle";
	};
};

class cfgVehicles
{
	class vn_o_men_pl_base;
	class vn_o_men_kr_75_base;
	class vn_o_men_pl_08: vn_o_men_pl_base
	{
		displayName="$STR_VN_O_MEN_PL_08_DN";
	};
	class vn_o_men_pl_10: vn_o_men_pl_base
	{
		displayName="$STR_VN_O_MEN_PL_10_DN";
	};
	class vn_o_men_pl_11: vn_o_men_pl_base
	{
		displayName="$STR_VN_O_MEN_PL_11_DN";
	};
	class vn_o_men_pl_25: vn_o_men_pl_base
	{
		displayName="$STR_VN_O_MEN_PL_25_DN";
	};
	class vn_o_men_pl_29: vn_o_men_pl_base
	{
		displayName="$STR_VN_O_MEN_PL_29_DN";
	};
	class vn_o_men_kr_75_03: vn_o_men_kr_75_base
	{
		displayName="$STR_VN_O_MEN_KR_75_03_DN";
	};
};