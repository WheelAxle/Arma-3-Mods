        class VN_USAF
		{
			name="$STR_VN_B_US_AF_DN";
			class vn_b_group_men_aircrew
			{
                name="$STR_VN_GROUP_MEN_AIRCREW";
                class vn_b_group_men_cobra_02
				{
					name="$STR_VN_B_GROUP_MEN_COBRA_02";
                    faction="B_vn_USAF";
					icon="\A3\ui_f\data\map\markers\nato\b_inf.paa";
					rarityGroup=0.5;
					side=1;
					class unit_1
					{
						side=1;
						rank="LIEUTENANT";
						position[]={0,-5,0};
						vehicle="vn_b_men_aircrew_05";
					};
					class unit_2
					{
						side=1;
						rank="SERGEANT";
						position[]={0,-10,0};
						vehicle="vn_b_men_aircrew_06";
					};
				};
                class vn_b_group_men_plane_02: vn_b_group_men_cobra_02
				{
					name="$STR_VN_B_GROUP_MEN_PLANE_02";
					class unit_1
					{
						side=1;
						rank="MAJOR";
						position[]={0,-5,0};
						vehicle="vn_b_men_jetpilot_01";
					};
					class unit_2
					{
						side=1;
						rank="CAPTAIN";
						position[]={0,-10,0};
						vehicle="vn_b_men_jetpilot_02";
					};
				};
                class vn_b_group_men_plane_03: vn_b_group_men_cobra_02
				{
					name="$STR_VN_B_GROUP_MEN_PLANE_03";
					class unit_1
					{
						side=1;
						rank="MAJOR";
						position[]={0,-5,0};
						vehicle="vn_b_men_jetpilot_09";
					};
					class unit_2
					{
						side=1;
						rank="CAPTAIN";
						position[]={0,-10,0};
						vehicle="vn_b_men_jetpilot_10";
					};
				};
                class vn_b_group_men_uh1_02: vn_b_group_men_cobra_02
				{
					name="$STR_VN_B_GROUP_MEN_UH1_02";
					class unit_1
					{
						side=1;
						rank="CAPTAIN";
						position[]={0,-5,0};
						vehicle="vn_b_men_aircrew_05";
					};
					class unit_2
					{
						side=1;
						rank="LIEUTENANT";
						position[]={0,-10,0};
						vehicle="vn_b_men_aircrew_06";
					};
					class unit_3
					{
						side=1;
						rank="SERGEANT";
						position[]={0,-15,0};
						vehicle="vn_b_men_aircrew_07";
					};
					class unit_4
					{
						side=1;
						rank="CORPORAL";
						position[]={0,-20,0};
						vehicle="vn_b_men_aircrew_08";
					};
				};
            };
            class vn_b_group_air_usaf
			{
				name="$STR_VN_GROUP_AIR";
				class vn_b_group_air_usaf_01
				{
					class unit_1
					{
						position[]={0,-23,0};
						side=1;
						rank="CAPTAIN";
						vehicle="vn_b_air_uh1c_03_01";
					};
					class unit_2
					{
						position[]={0,-46,0};
						side=1;
						rank="LIEUTENANT";
						vehicle="vn_b_air_uh1c_03_01";
					};
					name="$STR_VN_B_GROUP_AIR_USAF_01";
					faction="B_vn_USAF";
					icon="\A3\ui_f\data\map\markers\nato\b_air.paa";
					rarityGroup=0.5;
					side=1;
				};
				class vn_b_group_air_usaf_02
				{
					class unit_1
					{
						position[]={0,-23,0};
						side=1;
						rank="CAPTAIN";
						vehicle="vn_b_air_uh1f_01_03";
					};
					class unit_2
					{
						position[]={0,-46,0};
						side=1;
						rank="LIEUTENANT";
						vehicle="vn_b_air_uh1f_01_03";
					};
					name="$STR_VN_B_GROUP_AIR_USAF_02";
					faction="B_vn_USAF";
					icon="\A3\ui_f\data\map\markers\nato\b_air.paa";
					rarityGroup=0.5;
					side=1;
				};
				class vn_b_group_air_usaf_03
				{
					class unit_1
					{
						position[]={0,-23,0};
						side=1;
						rank="CAPTAIN";
						vehicle="vn_b_air_uh1b_01_03";
					};
					class unit_2
					{
						position[]={0,-46,0};
						side=1;
						rank="LIEUTENANT";
						vehicle="vn_b_air_uh1b_01_03";
					};
					name="$STR_VN_B_GROUP_AIR_USAF_03";
					faction="B_vn_USAF";
					icon="\A3\ui_f\data\map\markers\nato\b_air.paa";
					rarityGroup=0.5;
					side=1;
				};
				class vn_b_group_air_usaf_04
				{
					class unit_1
					{
						position[]={0,-23,0};
						side=1;
						rank="CAPTAIN";
						vehicle="vn_b_air_uh1c_03_01";
					};
					class unit_2
					{
						position[]={0,-46,0};
						side=1;
						rank="LIEUTENANT";
						vehicle="vn_b_air_uh1c_03_01";
					};
					class unit_3
					{
						position[]={0,-69,0};
						side=1;
						rank="LIEUTENANT";
						vehicle="vn_b_air_uh1c_01_03";
					};
					class unit_4
					{
						position[]={0,-92,0};
						side=1;
						rank="LIEUTENANT";
						vehicle="vn_b_air_uh1c_01_03";
					};
					name="$STR_VN_B_GROUP_AIR_USAF_04";
					faction="B_vn_USAF";
					icon="\A3\ui_f\data\map\markers\nato\b_air.paa";
					rarityGroup=0.5;
					side=1;
				};
				class vn_b_group_air_usaf_05
				{
					name="$STR_VN_B_GROUP_AIR_USAF_05";
					faction="B_vn_USAF";
					icon="\A3\ui_f\data\map\markers\nato\b_plane.paa";
					rarityGroup=0.5;
					side=1;
					class unit_1
					{
						side=1;
						rank="CAPTAIN";
						position[]={0,-30,0};
						vehicle="vn_b_air_f4c_ucas";
					};
					class unit_2
					{
						side=1;
						rank="LIEUTENANT";
						position[]={0,-60,0};
						vehicle="vn_b_air_f4c_mr";
					};
				};
				class vn_b_group_air_usaf_06
				{
					name="$STR_VN_B_GROUP_AIR_USAF_06";
					faction="B_vn_USAF";
					icon="\A3\ui_f\data\map\markers\nato\b_plane.paa";
					rarityGroup=0.5;
					side=1;
					class unit_1
					{
						side=1;
						rank="CAPTAIN";
						position[]={0,-30,0};
						vehicle="vn_b_air_f4c_sead";
					};
					class unit_2
					{
						side=1;
						rank="LIEUTENANT";
						position[]={0,-60,0};
						vehicle="vn_b_air_f4c_sead";
					};
				};
				class vn_b_group_air_usaf_07
				{
					name="$STR_VN_B_GROUP_AIR_USAF_07";
					faction="B_vn_USAF";
					icon="\A3\ui_f\data\map\markers\nato\b_plane.paa";
					rarityGroup=0.5;
					side=1;
					class unit_1
					{
						side=1;
						rank="CAPTAIN";
						position[]={0,-30,0};
						vehicle="vn_b_air_f4c_at";
					};
					class unit_2
					{
						side=1;
						rank="LIEUTENANT";
						position[]={0,-60,0};
						vehicle="vn_b_air_f4c_cbu";
					};
				};
				class vn_b_group_air_usaf_08
				{
					name="$STR_VN_B_GROUP_AIR_USAF_08";
					faction="B_vn_USAF";
					icon="\A3\ui_f\data\map\markers\nato\b_plane.paa";
					rarityGroup=0.5;
					side=1;
					class unit_1
					{
						side=1;
						rank="CAPTAIN";
						position[]={0,-30,0};
						vehicle="vn_b_air_f4c_cap";
					};
					class unit_2
					{
						side=1;
						rank="LIEUTENANT";
						position[]={0,-60,0};
						vehicle="vn_b_air_f4c_cap";
					};
				};
				class vn_b_group_air_usaf_09
				{
					name="$STR_VN_B_GROUP_AIR_USAF_09";
					faction="B_vn_USAF";
					icon="\A3\ui_f\data\map\markers\nato\b_plane.paa";
					rarityGroup=0.5;
					side=1;
					class unit_1
					{
						side=1;
						rank="CAPTAIN";
						position[]={0,-30,0};
						vehicle="vn_b_air_f4c_chico";
					};
					class unit_2
					{
						side=1;
						rank="LIEUTENANT";
						position[]={0,-60,0};
						vehicle="vn_b_air_f4c_cbu";
					};
				};
				class vn_b_group_air_usaf_10
				{
					name="$STR_VN_B_GROUP_AIR_USAF_10";
					faction="B_vn_USAF";
					icon="\A3\ui_f\data\map\markers\nato\b_plane.paa";
					rarityGroup=0.5;
					side=1;
					class unit_1
					{
						side=1;
						rank="CAPTAIN";
						position[]={0,-30,0};
						vehicle="vn_b_air_f100d_cas";
					};
					class unit_2
					{
						side=1;
						rank="LIEUTENANT";
						position[]={0,-60,0};
						vehicle="vn_b_air_f100d_mr";
					};
				};
				class vn_b_group_air_usaf_11
				{
					name="$STR_VN_B_GROUP_AIR_USAF_11";
					faction="B_vn_USAF";
					icon="\A3\ui_f\data\map\markers\nato\b_plane.paa";
					rarityGroup=0.5;
					side=1;
					class unit_1
					{
						side=1;
						rank="CAPTAIN";
						position[]={0,-30,0};
						vehicle="vn_b_air_f100d_sead";
					};
					class unit_2
					{
						side=1;
						rank="LIEUTENANT";
						position[]={0,-60,0};
						vehicle="vn_b_air_f100d_sead";
					};
				};
				class vn_b_group_air_usaf_12
				{
					name="$STR_VN_B_GROUP_AIR_USAF_12";
					faction="B_vn_USAF";
					icon="\A3\ui_f\data\map\markers\nato\b_plane.paa";
					rarityGroup=0.5;
					side=1;
					class unit_1
					{
						side=1;
						rank="CAPTAIN";
						position[]={0,-30,0};
						vehicle="vn_b_air_f100d_at";
					};
					class unit_2
					{
						side=1;
						rank="LIEUTENANT";
						position[]={0,-60,0};
						vehicle="vn_b_air_f100d_cbu";
					};
				};
				class vn_b_group_air_usaf_13
				{
					name="$STR_VN_B_GROUP_AIR_USAF_13";
					faction="B_vn_USAF";
					icon="\A3\ui_f\data\map\markers\nato\b_plane.paa";
					rarityGroup=0.5;
					side=1;
					class unit_1
					{
						side=1;
						rank="CAPTAIN";
						position[]={0,-30,0};
						vehicle="vn_b_air_f100d_cap";
					};
					class unit_2
					{
						side=1;
						rank="LIEUTENANT";
						position[]={0,-60,0};
						vehicle="vn_b_air_f100d_cap";
					};
				};
				class vn_b_group_air_usaf_14
				{
					name="$STR_VN_B_GROUP_AIR_USAF_14";
					faction="B_vn_USAF";
					icon="\A3\ui_f\data\map\markers\nato\b_plane.paa";
					rarityGroup=0.5;
					side=1;
					class unit_1
					{
						side=1;
						rank="CAPTAIN";
						position[]={0,-30,0};
						vehicle="vn_b_air_f100d_bmb";
					};
					class unit_2
					{
						side=1;
						rank="LIEUTENANT";
						position[]={0,-60,0};
						vehicle="vn_b_air_f100d_cbu";
					};
				};
			};
        };