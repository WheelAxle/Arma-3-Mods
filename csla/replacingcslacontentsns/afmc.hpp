	class AFMC_grVest: AFMC_grYHarness
	{
		model="\csla_usmc\gear\csla_us_armore_vest.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\csla_usmc\data\us_soldier_cap_green_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\csla_usmc\gear\csla_us_armore_vest.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\csla_usmc\data\us_soldier_cap_green_co.paa"
			};
		};
	};
	class AFMC_grV_M16: AFMC_grVest
	{
		model="\csla_usmc\gear\csla_us_armoreM16_vest.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\csla_usmc\data\us_soldier_cap_green_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\csla_usmc\gear\csla_us_armoreM16_vest.p3d";
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\csla_usmc\data\us_soldier_cap_green_co.paa"
			};
		};
	};
	class AFMC_grV_ofc: AFMC_grVest
	{
		author="$STR_CSLA_author";
		displayName="$STR_US85_grV_ofc_green";
		picture="\csla_usmc\Icon\M16M9_vesta.paa";
		model="\csla_usmc\gear\csla_us_armoreM16M9_vest.p3d";
		_generalMacro="AFMC_grV_ofc";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\csla_usmc\data\us_soldier_cap_green_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\csla_usmc\gear\csla_us_armoreM16M9_vest.p3d";
			passThrough=0.40000001;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=10;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=10;
					passThrough=0.30000001;
				};
				class Body
				{
					armor=5;
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\csla_usmc\data\us_soldier_cap_green_co.paa"
			};
		};
	};
	class AFMC_grV_M24: AFMC_grVest
	{
		author="$STR_CSLA_author";
		displayName="$STR_US85_grV_M24_green";
		picture="\csla_usmc\Icon\m21_vesta.paa";
		model="\csla_usmc\gear\csla_us_armoreM24_vest.p3d";
		_generalMacro="AFMC_grV_M24";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\csla_usmc\data\us_soldier_cap_green_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\csla_usmc\gear\csla_us_armoreM24_vest.p3d";
			passThrough=0.40000001;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=10;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=10;
					passThrough=0.30000001;
				};
				class Body
				{
					armor=5;
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\csla_usmc\data\us_soldier_cap_green_co.paa"
			};
		};
	};
	class AFMC_grV_MG: AFMC_grVest
	{
		author="$STR_CSLA_author";
		displayName="$STR_US85_grV_MG_green";
		picture="\csla_usmc\Icon\mg_vesta.paa";
		model="\csla_usmc\gear\csla_us_armoreMG_vest.p3d";
		_generalMacro="AFMC_grV_MG";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\csla_usmc\data\us_soldier_cap_green_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\csla_usmc\gear\csla_us_armoreMG_vest.p3d";
			containerClass="Supply250";
			passThrough=0.40000001;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName="HitChest";
					armor=10;
					PassThrough=0.30000001;
				};
				class Diaphragm
				{
					HitpointName="HitDiaphragm";
					armor=10;
					PassThrough=0.30000001;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=10;
					passThrough=0.30000001;
				};
				class Body
				{
					armor=5;
					hitpointName="HitBody";
					passThrough=0.30000001;
				};
			};
			hiddenSelections[]=
			{
				"camo1"
			};
			hiddenSelectionsTextures[]=
			{
				"\csla_usmc\data\us_soldier_cap_green_co.paa"
			};
		};
	};
