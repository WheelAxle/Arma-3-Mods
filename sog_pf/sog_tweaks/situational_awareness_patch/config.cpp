class CfgPatches
{
	class ax_sog_tweaks_SAM_patch
	{
        addonRootClass="ax_sog_tweaks";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[] = 
		{
			"loadorder_f_vietnam"
		};
	};
};

class CfgFunctions
{
	class modules_f_vietnam
	{
		class situational_awareness_module_functions
		{
			file="\ax_sog_tweaks\situational_awareness_patch\functions\situational_awareness_module";
			class sam_dynamic_audio
			{
			};
			class sam_getUnitVoiceIndex
			{
			};
			class sam_globals
			{
			};
		};
	};
};