        reloadmagazinesound[]=
		{
			"\ax_aegisefusmc\sounds_f_usmc_futura\weapons\rifles\scar\scar_m_reload.ogg",
			1.5,
			1,
			35
		};
		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_soundset",
					"jsrs_2025_65mm_tails_soundset",
					"jsrs_2025_65mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_silenced_soundset",
					"jsrs_2025_65mm_silenced_tails_soundset"
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_soundset",
					"jsrs_2025_65mm_tails_soundset",
					"jsrs_2025_65mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_mx_shot_silenced_soundset",
					"jsrs_2025_65mm_silenced_tails_soundset"
				};
			};
		};