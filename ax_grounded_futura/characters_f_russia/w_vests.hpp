    class AX_V_SmershVest_01_taiga_F: V_SmershVest_01_base_F
	{
		author="$STR_A3_GRFU_Axle";
		scope=2;
		displayName="$STR_A3_GRFU_V_SmershVest_01_taiga_F0";
		picture="\ax_grounded_futura\characters_f_russia\vests\data\ui\icon_V_SmershVest_01_taiga_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\characters_f_russia\vests\data\Smersh_Taiga_CO.paa",
			"\ax_grounded_futura\characters_f_russia\vests\data\Smersh_miscellaneous_Taiga_CO.paa"
		};
	};
	class AX_V_SmershVest_01_radio_taiga_F: V_SmershVest_01_radio_base_F
	{
		author="$STR_A3_GRFU_Axle";
		displayName="$STR_A3_GRFU_V_SmershVest_01_radio_taiga_F0";
		scope=2;
		picture="\ax_grounded_futura\characters_f_russia\vests\data\ui\icon_V_SmershVest_01_radio_taiga_F_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\ax_grounded_futura\characters_f_russia\vests\data\Smersh_Taiga_CO.paa",
			"\ax_grounded_futura\characters_f_russia\vests\data\Smersh_miscellaneous_Taiga_CO.paa"
		};
	};
	class Aegis_V_OCarrierLuchnik_GL_F: Aegis_V_OCarrierLuchnik_F
	{
		class ItemInfo;
	};
	class Aegis_V_OCarrierLuchnik_CQB_F: Aegis_V_OCarrierLuchnik_F
	{
		class ItemInfo;
	};
	class Aegis_V_OCarrierLuchnik_Lite_F: Aegis_V_OCarrierLuchnik_F
	{
		class ItemInfo;
	};
	class AX_V_OCarrierLuchnik_SuperLite_F: Aegis_V_OCarrierLuchnik_Lite_F
	{
		author="$STR_A3_A_Jamie";
		scope=2;
		scopeArsenal=2;
		displayName="$STR_A3_GRFU_V_OCarrierLuchnik_SuperLite_F0";
		picture="\A3_Aegis\Characters_F_Aegis\Vests\data\UI\Aegis_V_OCarrierLuchnik_Lite_F_CA.paa";
		Model="\ax_grounded_futura\characters_f_russia\vests\Aegis_OCarrierLuchnik_SuperLite_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\ax_grounded_futura\characters_f_russia\vests\Aegis_OCarrierLuchnik_SuperLite_F.p3d";
			containerClass="Supply140";
			mass=25;
		};
	};
	class AX_V_OCarrierLuchnik_SuperLite_arid_F: AX_V_OCarrierLuchnik_SuperLite_F
	{
		author="$STR_A3_A_Jamie";
		scope=2;
		scopeArsenal=2;
		displayName="$STR_A3_GRFU_V_OCarrierLuchnik_SuperLite_arid_F0";
		picture="\A3_Aegis\Characters_F_Aegis\Vests\data\UI\Aegis_V_OCarrierLuchnik_Lite_arid_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Characters_F_Aegis\Vests\data\OCarrierLuchnik_ruarid_CO.paa"
		};
	};
	class AX_V_OCarrierLuchnik_SuperLite_blk_F: AX_V_OCarrierLuchnik_SuperLite_F
	{
		author="$STR_A3_A_Jamie";
		scope=2;
		scopeArsenal=2;
		displayName="$STR_A3_GRFU_V_OCarrierLuchnik_SuperLite_blk_F0";
		picture="\A3_Aegis\Characters_F_Aegis\Vests\data\UI\Aegis_V_OCarrierLuchnik_Lite_blk_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Characters_F_Aegis\Vests\data\OCarrierLuchnik_blk_CO.paa"
		};
	};
	class AX_V_OCarrierLuchnik_SuperLite_blk_urban_F: AX_V_OCarrierLuchnik_SuperLite_blk_F
	{
		scope=1;
		scopeArsenal=1;
		author="$STR_A3_A_Jamie";
		displayName="$STR_A3_GRFU_V_OCarrierLuchnik_SuperLite_blk_F0";
		class ItemInfo: ItemInfo
		{
			containerClass="Supply160";
			mass=30;
		};
	};
	class AX_V_OCarrierLuchnik_GLLite_F: Aegis_V_OCarrierLuchnik_GL_F
	{
		scope=1;
		scopeArsenal=1;
		author="$STR_A3_A_Jamie";
		displayName="$STR_A3_GRFU_V_OCarrierLuchnik_GLLite_F0";
		picture="\A3_Aegis\Characters_F_Aegis\Vests\data\UI\Aegis_V_OCarrierLuchnik_GL_F_CA.paa";
		model="\ax_grounded_futura\characters_f_russia\vests\Aegis_OCarrierLuchnik_GLLite_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\ax_grounded_futura\characters_f_russia\vests\Aegis_OCarrierLuchnik_GLLite_F.p3d";
			containerClass="Supply140";
			mass=25;
		};
	};
	class AX_V_OCarrierLuchnik_GLLite_arid_F: AX_V_OCarrierLuchnik_GLLite_F
	{
		author="$STR_A3_A_Jamie";
		scope=1;
		scopeArsenal=1;
		displayName="$STR_A3_GRFU_V_OCarrierLuchnik_GLLite_arid_F0";
		picture="\A3_Aegis\Characters_F_Aegis\Vests\data\UI\Aegis_V_OCarrierLuchnik_GL_arid_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Characters_F_Aegis\Vests\data\OCarrierLuchnik_ruarid_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\data\OCarrierLuchnik_GL_ruarid_CO.paa"
		};
	};
	class AX_V_OCarrierLuchnik_GLLite_blk_F: AX_V_OCarrierLuchnik_GLLite_F
	{
		author="$STR_A3_A_Jamie";
		scope=1;
		scopeArsenal=1;
		displayName="$STR_A3_GRFU_V_OCarrierLuchnik_GLLite_blk_F0";
		picture="\A3_Aegis\Characters_F_Aegis\Vests\data\UI\Aegis_V_OCarrierLuchnik_GL_blk_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Characters_F_Aegis\Vests\data\OCarrierLuchnik_blk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\data\OCarrierLuchnik_GL_blk_CO.paa"
		};
	};
	class AX_V_OCarrierLuchnik_CQBLite_F: Aegis_V_OCarrierLuchnik_CQB_F
	{
		author="$STR_A3_A_Jamie";
		scope=1;
		scopeArsenal=1;
		displayName="$STR_A3_GRFU_V_OCarrierLuchnik_CQBLite_F0";
		picture="\A3_Aegis\Characters_F_Aegis\Vests\data\UI\Aegis_V_OCarrierLuchnik_CQB_F_CA.paa";
		model="\ax_grounded_futura\characters_f_russia\vests\Aegis_OCarrierLuchnik_CQBLite_F.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\ax_grounded_futura\characters_f_russia\vests\Aegis_OCarrierLuchnik_CQBLite_F.p3d";
			containerClass="Supply140";
			mass=25;
		};
	};
	class AX_V_OCarrierLuchnik_CQBLite_arid_F: AX_V_OCarrierLuchnik_CQBLite_F
	{
		author="$STR_A3_A_Jamie";
		scope=1;
		scopeArsenal=1;
		displayName="$STR_A3_GRFU_V_OCarrierLuchnik_CQBLite_arid_F0";
		picture="\A3_Aegis\Characters_F_Aegis\Vests\data\UI\Aegis_V_OCarrierLuchnik_CQB_arid_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Characters_F_Aegis\Vests\data\OCarrierLuchnik_ruarid_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\data\OCarrierLuchnik_GL_ruarid_CO.paa"
		};
	};
	class AX_V_OCarrierLuchnik_CQBLite_blk_F: AX_V_OCarrierLuchnik_CQBLite_F
	{
		author="$STR_A3_A_Jamie";
		scope=1;
		scopeArsenal=1;
		displayName="$STR_A3_GRFU_V_OCarrierLuchnik_CQBLite_blk_F0";
		picture="\A3_Aegis\Characters_F_Aegis\Vests\data\UI\Aegis_V_OCarrierLuchnik_CQB_blk_F_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3_Aegis\Characters_F_Aegis\Vests\data\OCarrierLuchnik_blk_CO.paa",
			"\A3_Aegis\Characters_F_Aegis\Vests\data\OCarrierLuchnik_GL_blk_CO.paa"
		};
	};