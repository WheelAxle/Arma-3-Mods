    class AX_arifle_M16A3_base_F: Aegis_arifle_M16A4_base_F
    {
        class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m16_shot_soundset",
					"jsrs_2025_556mm_tails_soundset",
					"jsrs_2025_556mm_echo_soundset"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundsetshot[]=
				{
					"jsrs_2025_m16_shot_silenced_soundset",
					"jsrs_2025_556mm_silenced_tails_soundset"
				};
			};
		};
    };
	class AX_arifle_M16A3_GL_base_F: AX_arifle_M16A3_base_F
	{
		class UGL: UGL_F
		{
			class Single: Mode_SemiAuto
			{
				sounds[]=
				{
					"StandardSound"
				};
				class StandardSound
				{
					soundsetshot[]=
					{
						"jsrs_2025_ugl_shot_soundset",
						"jsrs_2025_93mm_tails_soundset",
						"jsrs_2025_338_echo_soundset"
					};
				};
			};
		};
	};