class CfgPatches
{
	class ax_sog_unlocked_texture_sources_nickel_steel
	{
        addonRootClass="ax_sog_unlocked_texture_sources";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"anims_f_vietnam_06"
		};
        skipWhenMissingDependencies = 1;
	};
};

class EventHandlers;
class RotorLibHelicopterProperties;
class AnimationSources;
class Turrets;
class CopilotTurret;
class MainTurret;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponCloudsMGun;
class AirplaneHUD;

class cfgVehicles
{
	#include "tex_lvtp5.hpp"
	#include "tex_bronco.hpp"
	#include "tex_ontos.hpp"
	#include "tex_skyhawk.hpp"
};