	class uns_US_MK18_low: StaticGrenadeLauncher{scope=1;scopeCurator=1;};
	
	class uns_SPG_base;
	class uns_M40_106mm_US: uns_SPG_base{scope=1;scopeCurator=1;};

	class uns_M40_106mm_NVA: uns_M40_106mm_US{scope=1;scopeCurator=1;};
	class uns_M40_106mm_VC: uns_M40_106mm_NVA{scope=1;scopeCurator=1;};

	class uns_Type36_57mm_NVA: uns_M40_106mm_NVA
	{
		scope=2;
		scopecurator=2;
		faction="O_PAVN";
		editorSubcategory="EdSubcat_Turrets";
	};
	class uns_Type36_57mm_NVA_65: uns_Type36_57mm_NVA
	{
		crew="vn_o_men_nva_65_11";
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Turrets";
	};
	class uns_Type36_57mm_VC: uns_Type36_57mm_NVA
	{
		scope=2;
		scopecurator=2;
		faction="O_VC";
		editorSubcategory="EdSubcat_Turrets";
	};
	
	class uns_SPG9_73mm_NVA: uns_SPG_base
	{
		scope=2;
		scopecurator=2;
		faction="O_PAVN";
		editorSubcategory="EdSubcat_Turrets";
	};
	class uns_SPG9_73mm_NVA_65: uns_SPG9_73mm_NVA
	{
		crew="vn_o_men_nva_65_11";
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Turrets";
	};
	class uns_SPG9_73mm_VC: uns_SPG9_73mm_NVA
	{
		scope=2;
		scopecurator=2;
		faction="O_VC";
		editorSubcategory="EdSubcat_Turrets";
	};

	class uns_mg42_low_NVA: StaticMGWeapon
	{
		scope=1;
		scopecurator=1;
		faction="O_PAVN";
		editorSubcategory="EdSubcat_Turrets";
	};
	class uns_mg42_low_NVA_65: uns_mg42_low_NVA
	{
		scope=1;
		scopecurator=1;
		crew="vn_o_men_nva_65_11";
		faction="O_vn_PAVN_65";
		editorSubcategory="EdSubcat_Turrets";
	};
	class uns_mg42_low_VC: uns_mg42_low_NVA
	{
		scope=2;
		scopecurator=2;
		faction="O_VC";
		editorSubcategory="EdSubcat_Turrets";
	};