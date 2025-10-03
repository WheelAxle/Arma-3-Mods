class CfgPatches
{
	class ax_characters_f_iran_grfu_usmcfutura
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"ax_characters_f_usmc_futura"
		};
		author="Axle";
		skipwhenmissingdependencies=1;
	};
};

class CfgGlasses
{
	class G_Balaclava_TI_blk_F;
	class G_Balaclava_TI_G_blk_F;
	class AX_G_Balaclava_mesh_blk_ir: G_Balaclava_TI_blk_F
	{
		scope=1;
		scopeArsenal=1;
	};
	class AX_G_Balaclava_mesh_G_blk_ir: G_Balaclava_TI_G_blk_F
	{
		scope=1;
		scopeArsenal=1;
	};
};