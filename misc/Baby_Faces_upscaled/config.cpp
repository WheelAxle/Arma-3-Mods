class CfgPatches
{
	class Baby_Faces
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		author="Hautautuja";
		requiredAddons[]={"A3_Data_F_Decade_Loadorder"};
	};
};

class CfgFaces
{
	class Default;
	
	class Man_A3: Default
	{
		class Default;
		
		class Williams_Young: Default
		{
			author="Hautautuja";
			displayname="Williams (Young)";
			head="BlackHead_A3"; //there are various head models in A3, "GreekHead_A3" is white, Greek one, "NATOHead_A3" is white, 'Murican one, forgot how other ethnicities are called, sorry
			identityTypes[]={"Black_Young", "Nato_Young"}; //okay I admit I forgot if this one is really needed, but here you can link your face texture with a specific identity (like those used for campaign characters: Miller, Kerry etc.)
			texture="\Baby_Faces\data\m_african_young_01_co.paa"; //path to main texture itself
			material="\Baby_Faces\data\m_african_young_01.rvmat"; //path to rvmat where you can make your face appear with custom TI or bumpmap
			materialWounded1="\Baby_Faces\data\m_african_young_01_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_african_young_01_injury.rvmat";
			textureHL="\A3\Characters_F\Heads\Data\hl_Black_bald_co.paa"; //hands/arms texture, again there are several available, all kinds of colours, some with tattoos, some muscular, some scrawny, some old... you get it
			materialHL="\A3\Characters_F\Heads\Data\hl_Black_bald_muscular.rvmat";
			textureHL2="\A3\Characters_F\Heads\Data\hl_Black_bald_co.paa";
			materialHL2="\A3\Characters_F\Heads\Data\hl_Black_bald_muscular.rvmat";
			disabled=0;
		};
		class Hasan_Young: Default
		{
			author="Hautautuja";
			displayname="Hasan (Young)";
			head="BlackHead_A3"; 
			identityTypes[]={"Black_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_african_young_02_co.paa"; 
			material="\Baby_Faces\data\m_african_young_02.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_african_young_02_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_african_young_02_injury.rvmat";
			textureHL="\A3\Characters_F\Heads\Data\hl_Black_bald_co.paa"; 
			materialHL="\A3\Characters_F\Heads\Data\hl_Black_bald_muscular.rvmat";
			textureHL2="\A3\Characters_F\Heads\Data\hl_Black_bald_co.paa";
			materialHL2="\A3\Characters_F\Heads\Data\hl_Black_bald_muscular.rvmat";
			disabled=0;
		};
		class Jesus_Young: Default
		{
			author="Hautautuja";
			displayname="Jesus (Young)";
			head="BlackHead_A3"; 
			identityTypes[]={"Black_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_african_young_03_co.paa"; 
			material="\Baby_Faces\data\m_african_young_03.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_african_young_03_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_african_young_03_injury.rvmat";
			textureHL="\A3\Characters_F\Heads\Data\hl_Black_bald_co.paa"; 
			materialHL="\A3\Characters_F\Heads\Data\hl_Black_bald_muscular.rvmat";
			textureHL2="\A3\Characters_F\Heads\Data\hl_Black_bald_co.paa";
			materialHL2="\A3\Characters_F\Heads\Data\hl_Black_bald_muscular.rvmat";
			disabled=0;
		};
		class Ximi_Young: Default
		{
			author="Hautautuja";
			displayname="Ximi (Young)";
			head="AsianHead_A3"; 
			identityTypes[]={"Asian_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_asian_young_01_co.paa"; 
			material="\Baby_Faces\data\m_asian_young_01.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_asian_young_01_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_asian_young_01_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa"; 
			materialHL="\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL2="\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
			disabled=0;
		};
		class Jeong_Young: Default
		{
			author="Hautautuja";
			displayname="Jeong (Young)";
			head="AsianHead_A3"; 
			identityTypes[]={"Asian_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_asian_young_02_co.paa"; 
			material="\Baby_Faces\data\m_asian_young_02.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_asian_young_02_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_asian_young_02_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa"; 
			materialHL="\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL2="\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
			disabled=0;
		};
		class Tung_Young: Default
		{
			author="Hautautuja";
			displayname="Tung (Young)";
			head="AsianHead_A3"; 
			identityTypes[]={"Asian_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_asian_young_03_co.paa"; 
			material="\Baby_Faces\data\m_asian_young_03.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_asian_young_03_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_asian_young_03_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa"; 
			materialHL="\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL2="\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
			disabled=0;
		};
		class Athanasiadis_Young: Default
		{
			author="Hautautuja";
			displayname="Athanasiadis (Young)";
			head="GreekHead_A3"; 
			identityTypes[]={"Greek_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_greek_young_01_co.paa"; 
			material="\Baby_Faces\data\m_greek_young_01.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_greek_young_01_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_greek_young_01_injury.rvmat";
			textureHL="\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa"; 
			materialHL="\A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat";
			textureHL2="\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
			materialHL2="\A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat";
			disabled=0;
		};
		class Baros_Young: Default
		{
			author="Hautautuja";
			displayname="Baros (Young)";
			head="GreekHead_A3"; 
			identityTypes[]={"Greek_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_greek_young_02_co.paa"; 
			material="\Baby_Faces\data\m_greek_young_02.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_greek_young_02_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_greek_young_02_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa"; 
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled=0;
		};
		class Constantinou_Young: Default
		{
			author="Hautautuja";
			displayname="Constantinou (Young)";
			head="GreekHead_A3"; 
			identityTypes[]={"Old_Young"}; 
			texture="\Baby_Faces\data\m_greek_young_03_co.paa"; 
			material="\Baby_Faces\data\m_greek_young_03.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_greek_young_03_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_greek_young_03_injury.rvmat";
			textureHL="\A3\Characters_F\Heads\Data\hl_White_old_1_co.paa"; 
			materialHL="\Baby_Faces\data\hl_white_medium.rvmat";
			textureHL2="\A3\Characters_F\Heads\Data\hl_White_old_1_co.paa";
			materialHL2="\Baby_Faces\data\hl_white_medium.rvmat";
			disabled=0;
		};
		class Costas_Young: Default
		{
			author="Hautautuja";
			displayname="Costas (Young)";
			head="GreekHead_A3"; 
			identityTypes[]={"Old_Young"}; 
			texture="\Baby_Faces\data\m_greek_young_04_co.paa"; 
			material="\Baby_Faces\data\m_greek_young_04.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_greek_young_04_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_greek_young_04_injury.rvmat";
			textureHL = "\A3\Characters_F\Heads\Data\hl_White_old_co.paa"; 
            materialHL = "\Baby_Faces\data\hl_white_medium.rvmat";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_old_co.paa";
			materialHL2 = "\Baby_Faces\data\hl_white_medium.rvmat";
			disabled=0;
		};
		class Bahadur_Young: Default
		{
			author="Hautautuja";
			displayname="Bahadur (Young)";
			head="PersianHead_A3"; 
			identityTypes[]={"Persian_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_persian_young_01_co.paa"; 
			material="\Baby_Faces\data\m_persian_young_01.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_persian_young_01_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_persian_young_01_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled=0;
		};
		class Jalali_Young: Default
		{
			author="Hautautuja";
			displayname="Jalali (Young)";
			head="PersianHead_A3"; 
			identityTypes[]={"Persian_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_persian_young_02_co.paa"; 
			material="\Baby_Faces\data\m_persian_young_02.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_persian_young_03_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_persian_young_03_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled=0;
		};
		class Sabet_Young: Default
		{
			author="Hautautuja";
			displayname="Sabet (Young)";
			head="PersianHead_A3"; 
			identityTypes[]={"Persian_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_persian_young_03_co.paa"; 
			material="\Baby_Faces\data\m_persian_young_03.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_persian_young_03_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_persian_young_03_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled=0;
		};
		class Bayh_Young: Default
		{
			author="Hautautuja";
			displayname="Bayh (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_01_co.paa"; 
			material="\Baby_Faces\data\m_white_young_01.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_01_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_01_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_1_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
		class Burr_Young: Default
		{
			author="Hautautuja";
			displayname="Burr (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_02_co.paa"; 
			material="\Baby_Faces\data\m_white_young_02.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_02_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_02_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_2_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
		class Coburn_Young: Default
		{
			author="Hautautuja";
			displayname="Coburn (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_03_co.paa"; 
			material="\Baby_Faces\data\m_white_young_03.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_03_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_03_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "A3\Characters_F\Heads\Data\hl_White_02_bald_muscular.rvmat";
			disabled=0;
		};
		class Collins_Young: Default
		{
			author="Hautautuja";
			displayname="Collins (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_04_co.paa"; 
			material="\Baby_Faces\data\m_white_young_04.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_04_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_04_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_2_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
		class Campbell_Young: Default
		{
			author="Hautautuja";
			displayname="Campbell (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_05_co.paa"; 
			material="\Baby_Faces\data\m_white_young_05.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_05_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_05_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_1_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
		class Dayton_Young: Default
		{
			author="Hautautuja";
			displayname="Dayton (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_06_co.paa"; 
			material="\Baby_Faces\data\m_white_young_06.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_06_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_06_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_3_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
		class Dorgan_Young: Default
		{
			author="Hautautuja";
			displayname="Dorgan (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young", "Old_Young"}; 
			texture="\Baby_Faces\data\m_white_young_07_co.paa"; 
			material="\Baby_Faces\data\m_white_young_07.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_07_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_07_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
		class Halliwell_Young: Default
		{
			author="Hautautuja";
			displayname="Halliwell (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_08_co.paa"; 
			material="\Baby_Faces\data\m_white_young_08.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_08_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_08_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
		class Johnson_Young: Default
		{
			author="Hautautuja";
			displayname="Johnson (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_09_co.paa"; 
			material="\Baby_Faces\data\m_white_young_09.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_09_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_09_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_3_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
		class Martinez_Young: Default
		{
			author="Hautautuja";
			displayname="Martinez (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_10_co.paa"; 
			material="\Baby_Faces\data\m_white_young_10.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_10_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_10_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_2_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
		class Kirby_Young: Default
		{
			author="Hautautuja";
			displayname="Kirby (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_11_co.paa"; 
			material="\Baby_Faces\data\m_white_young_11.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_11_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_11_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
		class Reed_Young: Default
		{
			author="Hautautuja";
			displayname="Reed (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_12_co.paa"; 
			material="\Baby_Faces\data\m_white_young_12.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_12_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_12_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
		class Santorum_Young: Default
		{
			author="Hautautuja";
			displayname="Santorum (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_13_co.paa"; 
			material="\Baby_Faces\data\m_white_young_13.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_13_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_13_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_2_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
		class Smith_Young: Default
		{
			author="Hautautuja";
			displayname="Smith (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_14_co.paa"; 
			material="\Baby_Faces\data\m_white_young_14.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_14_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_14_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_2_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_02_bald_muscular.rvmat";
			disabled=0;
		};
		class Snowe_Young: Default
		{
			author="Hautautuja";
			displayname="Snowe (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_15_co.paa"; 
			material="\Baby_Faces\data\m_white_young_15.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_15_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_15_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_2_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
		class Kelly_Young: Default
		{
			author="Hautautuja";
			displayname="Kelly (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_16_co.paa"; 
			material="\Baby_Faces\data\m_white_young_16.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_16_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_16_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
		class OConnor_Young: Default
		{
			author="Hautautuja";
			displayname="O'Connor (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_17_co.paa"; 
			material="\Baby_Faces\data\m_white_young_17.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_17_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_17_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
		class Byrne_Young: Default
		{
			author="Hautautuja";
			displayname="Byrne (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_18_co.paa"; 
			material="\Baby_Faces\data\m_white_young_18.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_18_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_18_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_2_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
		class OBrien_Young: Default
		{
			author="Hautautuja";
			displayname="O'Brien (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_19_co.paa"; 
			material="\Baby_Faces\data\m_white_young_19.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_19_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_19_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_2_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_2_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
		class Walsh_Young: Default
		{
			author="Hautautuja";
			displayname="Walsh (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_20_co.paa"; 
			material="\Baby_Faces\data\m_white_young_20.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_20_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_20_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
		class OSullivan_Young: Default
		{
			author="Hautautuja";
			displayname="O'Sullivan (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_21_co.paa"; 
			material="\Baby_Faces\data\m_white_young_21.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_21_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_21_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};
		class Lee_Young: Default
		{
			author="Hautautuja";
			displayname="Lee (Young)";
			head="AsianHead_A3"; 
			identityTypes[]={"Asian_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_asian_young_04_co.paa"; 
			material="\Baby_Faces\data\m_asian_young_04.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_asian_young_04_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_asian_young_04_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat";
			disabled=0;
		};
		class Chan_Young: Default
		{
			author="Hautautuja";
			displayname="Chan (Young)";
			head="AsianHead_A3"; 
			identityTypes[]={"Asian_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_asian_young_05_co.paa"; 
			material="\Baby_Faces\data\m_asian_young_05.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_asian_young_05_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_asian_young_05_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat";
			disabled=0;
		};
		class Yeung_Young: Default
		{
			author="Hautautuja";
			displayname="Yeung (Young)";
			head="AsianHead_A3"; 
			identityTypes[]={"Asian_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_asian_young_06_co.paa"; 
			material="\Baby_Faces\data\m_asian_young_06.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_asian_young_06_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_asian_young_06_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat";
			disabled=0;
		};
		class Wong_Young: Default
		{
			author="Hautautuja";
			displayname="Wong (Young)";
			head="AsianHead_A3"; 
			identityTypes[]={"Asian_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_asian_young_07_co.paa"; 
			material="\Baby_Faces\data\m_asian_young_07.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_asian_young_07_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_asian_young_07_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat";
			disabled=0;
		};
		class Simo_Young: Default
		{
			author="Hautautuja";
			displayname="Simo (Young)";
			head="TanoanHead_A3"; 
			identityTypes[]={"Tanoan_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_tanoan_young_01_co.paa"; 
			material="\Baby_Faces\data\m_tanoan_young_05.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_tanoan_young_05_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_tanoan_young_05_injury.rvmat";
            textureHL = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_co.paa";
            textureHL2 = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_co.paa";
			materialHL = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			materialHL2 = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			disabled=0;
		};
		class Adnet_Young: Default
		{
			author="Hautautuja";
			displayname="Adnet (Young)";
			head="TanoanHead_A3"; 
			identityTypes[]={"Tanoan_Young", "Nato_Young"}; 
			texture="a3\characters_f_exp\heads\data\m_tanoan_02_co.paa"; 
			material="\Baby_Faces\data\m_tanoan_young_02.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_tanoan_young_02_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_tanoan_young_02_injury.rvmat";
            textureHL = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_co.paa";
            textureHL2 = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_co.paa";
			materialHL = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			materialHL2 = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			disabled=0;
		};
		class Cahun_Young: Default
		{
			author="Hautautuja";
			displayname="Cahun (Young)";
			head="TanoanHead_A3"; 
			identityTypes[]={"Tanoan_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_tanoan_young_03_co.paa"; 
			material="\Baby_Faces\data\m_tanoan_young_03.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_tanoan_young_03_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_tanoan_young_03_injury.rvmat";
            textureHL = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_co.paa";
            textureHL2 = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_co.paa";
			materialHL = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			materialHL2 = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			disabled=0;
		};
		class Ganio_Young: Default
		{
			author="Hautautuja";
			displayname="Ganio (Young)";
			head="TanoanHead_A3"; 
			identityTypes[]={"Tanoan_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_tanoan_young_04_co.paa"; 
			material="\Baby_Faces\data\m_tanoan_young_04.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_tanoan_young_04_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_tanoan_young_04_injury.rvmat";
            textureHL = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_co.paa";
            textureHL2 = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_co.paa";
			materialHL = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			materialHL2 = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			disabled=0;
		};
		class Malet_Young: Default
		{
			author="Hautautuja";
			displayname="Malet (Young)";
			head="TanoanHead_A3"; 
			identityTypes[]={"Tanoan_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_tanoan_young_05_co.paa"; 
			material="\Baby_Faces\data\m_tanoan_young_05.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_tanoan_young_05_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_tanoan_young_05_injury.rvmat";
            textureHL = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_co.paa";
            textureHL2 = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_co.paa";
			materialHL = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			materialHL2 = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			disabled=0;
		};
		class Sole_Young: Default
		{
			author="Hautautuja";
			displayname="Sole (Young)";
			head="TanoanHead_A3"; 
			identityTypes[]={"Tanoan_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_tanoan_young_06_co.paa"; 
			material="\Baby_Faces\data\m_tanoan_young_06.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_tanoan_young_06_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_tanoan_young_06_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_black_bald_co.paa";
            textureHL2 = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_co.paa";
			materialHL = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			materialHL2 = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			disabled=0;
		};
		class Mignard_Young: Default
		{
			author="Hautautuja";
			displayname="Mignard (Young)";
			head="TanoanHead_A3"; 
			identityTypes[]={"Tanoan_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_tanoan_young_07_co.paa"; 
			material="\Baby_Faces\data\m_tanoan_young_07.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_tanoan_young_07_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_tanoan_young_07_injury.rvmat";
            textureHL = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_co.paa";
            textureHL2 = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_co.paa";
			materialHL = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			materialHL2 = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			disabled=0;
		};
		class Thibaud_Young: Default
		{
			author="Hautautuja";
			displayname="Thibaud (Young)";
			head="TanoanHead_A3"; 
			identityTypes[]={"Tanoan_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_tanoan_young_08_co.paa"; 
			material="\Baby_Faces\data\m_tanoan_young_08.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_tanoan_young_07_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_tanoan_young_07_injury.rvmat";
            textureHL = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_co.paa";
            textureHL2 = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_co.paa";
			materialHL = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			materialHL2 = "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat";
			disabled=0;
		};
		class Doukas_Young: Default
		{
			author="Hautautuja";
			displayname="Doukas (Young)";
			head="GreekHead_A3"; 
			identityTypes[]={"Greek_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_01_co.paa"; 
			material="\Baby_Faces\data\m_white_young_01.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_01_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_01_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled=0;
		};
		class Gikas_Young: Default
		{
			author="Hautautuja";
			displayname="Gikas (Young)";
			head="GreekHead_A3"; 
			identityTypes[]={"Greek_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_02_co.paa"; 
			material="\Baby_Faces\data\m_white_young_02.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_02_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_02_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled=0;
		};
		class Christou_Young: Default
		{
			author="Hautautuja";
			displayname="Christou (Young)";
			head="GreekHead_A3"; 
			identityTypes[]={"Greek_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_03_co.paa"; 
			material="\Baby_Faces\data\m_white_young_03.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_03_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_03_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled=0;
		};
		class Kanelloupou_Young: Default
		{
			author="Hautautuja";
			displayname="Kanelloupou (Young)";
			head="GreekHead_A3"; 
			identityTypes[]={"Greek_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_04_co.paa"; 
			material="\Baby_Faces\data\m_white_young_04.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_04_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_04_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled=0;
		};
		class Savalas_Young: Default
		{
			author="Hautautuja";
			displayname="Savalas (Young)";
			head="GreekHead_A3"; 
			identityTypes[]={"Greek_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_white_young_05_co.paa"; 
			material="\Baby_Faces\data\m_white_young_05.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_05_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_05_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_3_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled=0;
		};
		class Kerry_A_Young: Default
		{
			author="Hautautuja";
			displayname="Kerry (Young)";
			head="KerryHead_A3"; 
			identityTypes[]={"White_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_kerry_A_young_co.paa"; 
			material="\Baby_Faces\data\m_kerry_A_young.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_kerry_A_young_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_kerry_A_young_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled=0;
		};	
		class Miller_Young: Default
		{
			author="Hautautuja";
			displayname="Miller (Young)";
			head="Miller"; 
			identityTypes[]={""}; 
			texture="\Baby_Faces\data\m_miller_young_co.paa"; 
			material="\Baby_Faces\data\m_miller_young.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_miller_young_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_miller_young_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_1_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled=0;
		};	
		class Hau_Gavras_Young: Default
		{
			author="Hautautuja";
			displayname="Gavras (Young)";
			head="GreekHead_A3"; 
			identityTypes[]={"Old_Young"}; 
			texture="\Baby_Faces\data\m_greek_young_11_co.paa"; 
			material="\Baby_Faces\data\m_greek_young_11.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_greek_young_11_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_greek_young_11_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_4_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_4_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled=0;
		};	
		class Hau_Markos_Young: Default
		{
			author="Hautautuja";
			displayname="Markos (Young)";
			head="GreekHead_A3"; 
			identityTypes[]={"Greek_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_greek_young_12_co.paa"; 
			material="\Baby_Faces\data\m_greek_young_12.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_greek_young_12_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_greek_young_12_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_4_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_4_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled=0;
		};	
		class Hau_Alexis_Young: Default
		{
			author="Hautautuja";
			displayname="Alexis (Young)";
			head="GreekHead_A3"; 
			identityTypes[]={"Greek_Young", "Nato_Young"}; 
			texture="\Baby_Faces\data\m_greek_young_13_co.paa"; 
			material="\Baby_Faces\data\m_greek_young_13.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_greek_young_13_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_greek_young_13_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_4_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_4_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_hairy_muscular.rvmat";
			disabled=0;
		};		
		class Hau_Nathan_Young: Default
		{
			author="Hautautuja";
			displayname="Nathan (Young)";
			head="NATOHead_A3"; 
			identityTypes[]={"Old_Young"}; 
			texture="\Baby_Faces\data\m_white_young_22_co.paa"; 
			material="\Baby_Faces\data\m_white_young_22.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_white_young_22_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_white_young_22_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_1_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};	
		class Hau_Snowe_Alt: Default
		{
			author="Hautautuja";
			displayname="Snowe (Alternative)";
			head="NATOHead_A3"; 
			identityTypes[]={""}; 
			texture="\Baby_Faces\data\m_snowe_dirty_co.paa"; 
			material="\Baby_Faces\data\m_snowe_dirty.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_snowe_dirty_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_snowe_dirty_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_2_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};	
		class Hau_Smith_Alt: Default
		{
			author="Hautautuja";
			displayname="Smith (Alternative)";
			head="NATOHead_A3"; 
			identityTypes[]={""}; 
			texture="\Baby_Faces\data\m_smith_dirty_co.paa"; 
			material="\Baby_Faces\data\m_smith_dirty.rvmat"; 
			materialWounded1="\Baby_Faces\data\m_smith_dirty_injury.rvmat";
			materialWounded2="\Baby_Faces\data\m_smith_dirty_injury.rvmat";
            textureHL = "\A3\Characters_F\Heads\Data\hl_White_bald_2_co.paa";
            textureHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_co.paa";
			materialHL = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			materialHL2 = "\A3\Characters_F\Heads\Data\hl_White_bald_muscular.rvmat";
			disabled=0;
		};				
	};
};