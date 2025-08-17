    class uns_M1_81mm_mortar: Mortar_01_base_F
	{
		displayName="M1 81mm Mortar";
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Artillery";
	};
	class uns_M1_81mm_mortar_arty: uns_M1_81mm_mortar
	{
		displayName="M1 81mm Mortar (Heavy)";
	};
	class uns_M2_60mm_mortar: uns_M1_81mm_mortar
	{
		Scope=1;
		ScopeCurator=1;
	};
	class uns_M30_107mm_mortar: uns_M1_81mm_mortar
	{
		displayName="M30 107mm Mortar";
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Artillery";
	};
	class uns_m1941_82mm_mortarNVA: uns_M1_81mm_mortar
	{
		faction="O_PAVN";
		editorSubcategory="EdSubcat_Artillery";
	};
	class uns_m1941_82mm_mortarNVA_arty: uns_m1941_82mm_mortarNVA
	{
		displayname="M1941 82mm Mortar (Heavy)";
		faction="O_PAVN";
		editorSubcategory="EdSubcat_Artillery";
	};
	class uns_m1941_82mm_mortarVC: uns_m1941_82mm_mortarNVA
	{
		faction="O_VC";
		editorSubcategory="EdSubcat_Artillery";
	};
	class uns_howitzer_base: StaticCannon{};
	class Uns_howitzer_base_W: uns_howitzer_base
	{
	};
	class Uns_howitzer_base_E: uns_howitzer_base
	{
	};
	class Uns_M102_artillery: Uns_howitzer_base_W
	{
		displayName="M102 105mm Howitzer";
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Artillery";
	};
	class Uns_M114_artillery: Uns_M102_artillery
	{
		displayName="M114A1 155mm Howitzer";
		faction="B_vn_USARMY";
		editorSubcategory="EdSubcat_Artillery";
	};
	class Uns_D30_artillery: Uns_howitzer_base_E
	{
		faction="O_PAVN";
		editorSubcategory="EdSubcat_Artillery";
	};
	class Uns_D20_artillery: Uns_D30_artillery
	{
		faction="O_PAVN";
		editorSubcategory="EdSubcat_Artillery";
	};