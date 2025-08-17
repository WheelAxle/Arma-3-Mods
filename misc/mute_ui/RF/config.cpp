class CfgPatches
{
	class mute_ui_rf
	{
		addonRootClass = "mute_ui";
        requiredVersion = 0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder",
			"RF_Data_Loadorder"
		};
		skipWhenMissingDependencies=1;
		units[]={};
		weapons[]={};
	};
};

class CfgFunctions
{
};

class CfgSounds
{
	class rf_hit_body_close1
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class rf_hit_body_close2
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class rf_hit_body_close3
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class rf_hit_body_close4
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class rf_hit_body_distance1
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class rf_hit_body_distance2
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class rf_hit_body_distance3
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class rf_hit_body_distance4
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class rf_hit_helmet_close1
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class rf_hit_helmet_close2
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class rf_hit_helmet_close3
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class rf_hit_helmet_close4
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class rf_hit_helmet_distance1
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class rf_hit_helmet_distance2
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class rf_hit_helmet_distance3
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
	class rf_hit_helmet_distance4
	{
		sound[]=
		{
			"",
			1,
			1
		};
		titles[]={};
	};
};

class CfgVehicles
{
	class Logic;
	class Module_F: Logic
	{
		class AttributesBase
		{
			class Default;
			class Edit;
			class Combo;
			class Checkbox;
			class CheckboxNumber;
			class ModuleDescription;
			class Units;
		};
		class ModuleDescription
		{
			class AnyBrain;
		};
	};

};