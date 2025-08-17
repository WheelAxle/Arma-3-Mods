	class AX_LPNVG_Hidden: EF_LPNVG
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_LPNVG_blk_Hidden_F0";
		class ItemInfo
		{
			type=616;
			uniformModel="A3\weapons_f\binocular\nvg_proxy.p3d";
			modelOff="";
			mass=20;
		};
	};
	class AX_LPNVG_tan_Hidden: EF_LPNVG_Tan
	{
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_LPNVG_tan_Hidden_F0";
		class ItemInfo
		{
			type=616;
			uniformModel="A3\weapons_f\binocular\nvg_proxy.p3d";
			modelOff="";
			mass=20;
		};
	};
	class AX_LPNVG_tan_gg_Hidden: AX_LPNVG_tan_Hidden
	{
		scope=1;
		scopeArsenal=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_NVGoggles_brn_gg_Hidden_F0";
		class ItemInfo: ItemInfo
		{
			uniformModel="\ef\ef_weapons\lpnvg\ef_lpnvg.p3d";
			modelOff="\A3_Aegis\Weapons_F_Aegis\Binocular\Goggles_cover_snd_F.p3d";
		};
	};
	class AX_LPNVG_tan_sm_Hidden: AX_LPNVG_tan_Hidden
	{
		scope=1;
		scopeArsenal=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_NVGoggles_brn_sm_Hidden_F0";
		class ItemInfo: ItemInfo
		{
			uniformModel="\ef\ef_weapons\lpnvg\ef_lpnvg.p3d";
			modelOff="\A3_Aegis\Characters_F_Aegis\Facewear\G_Shemag.p3d";
		};
	};
	class AX_LPNVG_tan_sm2_Hidden: AX_LPNVG_tan_Hidden
	{
		scope=1;
		scopeArsenal=1;
		author="$STR_A3_MCFU_Axle";
		displayName="$STR_A3_MCFU_NVGoggles_brn_sm_Hidden_F0";
		class ItemInfo: ItemInfo
		{
			uniformModel="\ef\ef_weapons\lpnvg\ef_lpnvg.p3d";
			modelOff="\A3_Aegis\Characters_F_Aegis\Facewear\G_Shemag.p3d";
		};
	};
