class cfgWeapons
{
	//Uniform
    class gm_ge_army_uniform_soldier_bdu_80_base;
	class gm_ge_army_uniform_soldier_bdu_80_wdl: gm_ge_army_uniform_soldier_bdu_80_base
	{
        class ItemInfo;
    };
	class gm_ge_army_uniform_soldier_bdu_nogloves_80_wdl: gm_ge_army_uniform_soldier_bdu_80_wdl
	{
		scope=1;
		scopeArsenal=1;
		isgmContent=1;
		dlc="gm";
		author="$STR_DN_GM";
		model="\gm\gm_characters\gm_ge_characters\dropped\gm_ge_uniform_soldier_bdu_80_wdl_dropped";
		picture="\gm\gm_characters\gm_ge_characters\data\ui\picture_gm_xx_uniform_soldier_bdu_nogloves_80_wdl_ca";
		displayName="$STR_DN_gm_xx_uniform_soldier_bdu_nogloves_80_wdl";
		hiddenSelectionsTextures[]=
		{
			"\gm\gm_characters\gm_ge_characters\data\uniform\gm_ge_uniform_soldier_bdu_80_wdl_co",
			"\gm\gm_characters\gm_ge_characters\data\uniform\gm_ge_uniform_soldier_bdu_80_wdl_co"
		};
		class ItemInfo: ItemInfo
		{
			uniformClass="gm_xx_army_rifleman_nogloves_80_wdl";
			hiddenSelectionsTextures[]=
			{
				"\gm\gm_characters\gm_ge_characters\data\uniform\gm_ge_uniform_soldier_bdu_80_wdl_co",
				"\gm\gm_characters\gm_ge_characters\data\uniform\gm_ge_uniform_soldier_bdu_80_wdl_co"
			};
		};
	};
};