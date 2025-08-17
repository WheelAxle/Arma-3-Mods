    class uns_skymaster_base: uns_plane
	{
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
	};
	class uns_skymaster_CAS: uns_skymaster_base
	{
	};
	class UNS_skymaster_VA: uns_skymaster_CAS
	{
	};
	class UNS_skymaster_HCAS: uns_skymaster_CAS
	{
	};
	class UNS_skymaster_EHCAS: uns_skymaster_CAS
	{
	};
	class UNS_skymaster_MR: uns_skymaster_CAS
	{
	};
	class UNS_skymaster_CBU: uns_skymaster_CAS
	{
	};
	class UNS_skymaster_FAC: UNS_skymaster_CBU
	{
	};
	class uns_skymaster_psyop: uns_skymaster_base
	{
	};
	class uns_skymaster_civ: uns_skymaster_base
	{
		scope=1;
		scopecurator=1;
	};
	class uns_skymaster: uns_skymaster_civ
	{
	};
	class uns_skymaster_civ_blue: uns_skymaster
	{
		scope=1;
		scopecurator=1;
	};
	class uns_skymaster_civ_yellow: uns_skymaster_civ
	{
	};
	class uns_skymaster_civ_gold: uns_skymaster_civ
	{
	};
	class uns_skymaster_civ_red: uns_skymaster_civ
	{
	};