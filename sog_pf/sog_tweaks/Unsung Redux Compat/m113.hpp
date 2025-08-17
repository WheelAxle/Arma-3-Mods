    class uns_M113_base: Tank_F{};
	class uns_M113_XM182: uns_M113_base{};
	class uns_M132: uns_M113_XM182{scope=1;scopeCurator=1;};
	class uns_M577_amb: uns_M132{scope=1;scopeCurator=1;};
	class uns_M113_M2: uns_M113_XM182{};
	class uns_M113_M30: uns_M113_M2{scope=1;scopeCurator=1;};
	class uns_M113_M30_HQ: uns_M113_M30{scope=1;scopeCurator=1;};
	class uns_M113_ENG: uns_M113_base
	{
		displayName="M113 Engineer";
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_APCs";
	};
	class uns_m163: uns_M113_XM182
	{
		displayName="M163 Vulcan ADS";
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_AAs";
	};