class CfgPatches
{
	class ax_sog_tweaks_nickel_steel
	{
        addonRootClass="ax_sog_tweaks";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"anims_f_vietnam_06"
		};
        skipWhenMissingDependencies = 1;
	};
};

class cfgVehicles
{
    class vnx_air_c119_transport_base;
    class vnx_b_air_ac119_02_01: vnx_air_c119_transport_base
	{
        faction="B_vn_USAF";
        editorSubcategory="EdSubcat_Planes";
    };
    class vnx_air_c119_cargo_base;
    class vnx_b_air_ac119_03_01: vnx_air_c119_cargo_base
	{
        faction="B_vn_USAF";
        editorSubcategory="EdSubcat_Planes";
    };
    class vnx_air_c119_bmb_base;
    class vnx_b_air_ac119_04_01: vnx_air_c119_bmb_base
	{
        faction="B_vn_USAF";
        editorSubcategory="EdSubcat_Planes";
    };
    class vnx_air_ac119k_base;
    class vnx_b_air_ac119_01_01: vnx_air_ac119k_base
	{
        faction="B_vn_USAF";
        editorSubcategory="EdSubcat_Planes";
    };
    class vnx_b_air_ac119_02_02: vnx_air_c119_transport_base
	{
        faction="B_vn_USMC_68";
        editorSubcategory="EdSubcat_Planes";
    };
    class vnx_b_air_ac119_03_02: vnx_air_c119_cargo_base
	{
        faction="B_vn_USMC_68";
        editorSubcategory="EdSubcat_Planes";
    };
    class vnx_i_air_ac119_01_01: vnx_air_ac119k_base
    {
        editorSubcategory="EdSubcat_Planes_RVNAF";
    };
    class vnx_i_air_ac119_02_01: vnx_air_c119_transport_base
    {
        editorSubcategory="EdSubcat_Planes_RVNAF";
    };
    class vnx_i_air_ac119_03_01: vnx_air_c119_cargo_base
    {
        editorSubcategory="EdSubcat_Planes_RVNAF";
    };

    class vnx_wheeled_tuktuk_base;
    class vnx_wheeled_tuktuk_taxi_base;
    class vnx_c_wheeled_tuktuk_01_01: vnx_wheeled_tuktuk_taxi_base
    {
        editorSubcategory="EdSubcat_Cars";
    };
    class vnx_wheeled_tuktuk_ffv_base;
    class vnx_o_wheeled_tuktuk_01_vc: vnx_wheeled_tuktuk_ffv_base
    {
        editorSubcategory="EdSubcat_Cars";
    };
    class vnx_o_wheeled_tuktuk_01_kr: vnx_wheeled_tuktuk_ffv_base
    {
        editorSubcategory="EdSubcat_Cars";
    };
    class vnx_wheeled_tuktuk_mg_01_base;
    class vnx_o_wheeled_tuktuk_mg_01_vc: vnx_wheeled_tuktuk_mg_01_base
    {
        editorSubcategory="EdSubcat_Cars";
    };
    class vnx_o_wheeled_tuktuk_mg_01_kr: vnx_wheeled_tuktuk_mg_01_base
    {
        editorSubcategory="EdSubcat_Cars";
    };
    class vnx_wheeled_tuktuk_mg_02_base;
    class vnx_o_wheeled_tuktuk_mg_02_vc: vnx_wheeled_tuktuk_mg_02_base
    {
        editorSubcategory="EdSubcat_Cars";
    };
    class vnx_o_wheeled_tuktuk_mg_02_kr: vnx_wheeled_tuktuk_mg_02_base
    {
        editorSubcategory="EdSubcat_Cars";
    };

    class vn_air_ch34_m60_base;
	class vnx_b_air_hh34_01_01: vn_air_ch34_m60_base
    {
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Helicopters";
    };
    class vn_air_ch34_m60_x2_base;
	class vnx_b_air_hh34_03_01: vn_air_ch34_m60_x2_base
    {
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Helicopters";
    };
    class vn_air_uh1d_02_base;
	class vnx_b_air_hh1h_02_01: vn_air_uh1d_02_base
    {
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Helicopters";
    };
    class vn_air_uh1d_01_base;
	class vnx_b_air_hh1h_01_01: vn_air_uh1d_01_base
    {
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Helicopters";
    };
    class vn_air_uh1d_04_base;
	class vnx_b_air_hh1h_04_01: vn_air_uh1d_04_base
    {
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Helicopters";
    };

    class vn_b_men_aircrew_01;
	class vnx_b_men_aircrew_01: vn_b_men_aircrew_01
    {
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Personnel";
    };
	class vnx_b_men_aircrew_02: vnx_b_men_aircrew_01
    {
    };
};