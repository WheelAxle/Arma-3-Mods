		class Single: Mode_SemiAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mx_Shot_Enoch_SoundSet",
					"Mx_Tail_Enoch_SoundSet",
					"Mx_InteriorTail_Enoch_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mx_silencerShot_Enoch_SoundSet",
					"Mx_silencerTail_Enoch_SoundSet",
					"Mx_silencerInteriorTail_Enoch_SoundSet"
				};
			};
		};
		class FullAuto: Mode_FullAuto
		{
			class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mx_Shot_Enoch_SoundSet",
					"Mx_Tail_Enoch_SoundSet",
					"Mx_Tail_Int_Enoch_SoundSet",
					"Mx_InteriorTail_Enoch_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"Mx_silencerShot_Enoch_SoundSet",
					"Mx_silencerTail_Enoch_SoundSet",
					"Mx_silencerInteriorTail_Enoch_SoundSet"
				};
			};
		};