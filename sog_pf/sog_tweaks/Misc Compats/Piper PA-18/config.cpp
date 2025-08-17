class CfgPatches
{
	class ax_sog_tweaks_piper_pa18
	{
		addonRootClass="ax_sog_tweaks";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"sab_piper"
		};
		skipWhenMissingDependencies = 1;
	};
};

class cfgVehicles
{
	class Air;
	class Plane: Air
	{
		class NewTurret;
		class Sounds;
		class AnimationSources;
		class HitPoints
		{
			class HitHull;
		};
	};
	class sab_piper_base: Plane
	{
		crew="vn_b_men_aircrew_01";
		faction="B_vn_USAF";
		editorSubcategory="EdSubcat_Planes";
		class Turrets
		{
			class MainTurret: NewTurret
			{
				gunnerCompartments="Compartment2";
			};
		};
	};
};