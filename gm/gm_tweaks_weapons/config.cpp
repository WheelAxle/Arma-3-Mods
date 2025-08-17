class CfgPatches
{
	class ax_gm_tweaks_weapons
	{
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"gm_characters_xx_revolutionaries"
		};
		author="Axle";
	};
};

class cfgWeapons
{
	class gm_mp5_base;
	class gm_mp5a2_base: gm_mp5_base
	{
		magazines[]=
		{
			"gm_30Rnd_9x19mm_b_DM51_mp5a3_blk",
			"gm_30Rnd_9x19mm_b_DM11_mp5a3_blk",
			"gm_30Rnd_9x19mm_ap_DM91_mp5a3_blk",
			"gm_30Rnd_9x19mm_bsd_DM81_mp5a3_blk",
			"gm_60Rnd_9x19mm_b_DM51_mp5a3_blk",
			"gm_60Rnd_9x19mm_b_DM11_mp5a3_blk",
			"gm_60Rnd_9x19mm_ap_DM91_mp5a3_blk",
			"gm_60Rnd_9x19mm_bsd_DM81_mp5a3_blk",
			"gm_30Rnd_9x19mm_b_DM51_mp5_blk",
			"gm_30Rnd_9x19mm_b_DM11_mp5_blk",
			"gm_30Rnd_9x19mm_ap_DM91_mp5_blk",
			"gm_30Rnd_9x19mm_bsd_DM81_mp5_blk"
		};
	};
};