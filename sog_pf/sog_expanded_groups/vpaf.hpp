        class VN_VPAF
	    {
        	name="$STR_VN_O_VPAF_DN";
			class vn_o_group_men_vpaf
			{
				name="$STR_VN_GROUP_MEN_AIRCREW";
				class vn_o_group_men_vpaf_01
				{
					name="$STR_VN_O_GROUP_MEN_PLANE_01";
					faction="O_vn_VPAF";
					icon="\A3\ui_f\data\map\markers\nato\o_inf.paa";
					rarityGroup=0.5;
					side=0;
					class unit_1
					{
						side=0;
						rank="CAPTAIN";
						position[]={0,-5,0};
						vehicle="vn_o_men_aircrew_05";
					};
					class unit_2
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-10,0};
						vehicle="vn_o_men_aircrew_06";
					};
				};
				class vn_o_group_men_vpaf_02: vn_o_group_men_vpaf_01
				{
					name="$STR_VN_O_GROUP_MEN_MIG_01";
					class unit_1
					{
						side=0;
						rank="MAJOR";
						position[]={0,-5,0};
						vehicle="vn_o_men_aircrew_07";
					};
					class unit_2
					{
						side=0;
						rank="CAPTAIN";
						position[]={0,-10,0};
						vehicle="vn_o_men_aircrew_08";
					};
				};
				class vn_o_group_men_vpaf_03: vn_o_group_men_vpaf_01
				{
					name="$STR_VN_O_GROUP_MEN_MI2_01";
					class unit_1
					{
						side=0;
						rank="CAPTAIN";
						position[]={0,-5,0};
						vehicle="vn_o_men_aircrew_01";
					};
					class unit_2
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-10,0};
						vehicle="vn_o_men_aircrew_02";
					};
					class unit_3
					{
						side=0;
						rank="SERGEANT";
						position[]={0,-15,0};
						vehicle="vn_o_men_aircrew_03";
					};
					class unit_4
					{
						side=0;
						rank="PRIVATE";
						position[]={0,-20,0};
						vehicle="vn_o_men_aircrew_04";
					};
				};
			};
            class vn_o_group_air
			{
				name="$STR_VN_GROUP_AIR";
				class vn_o_group_air_01
				{
					name="$STR_VN_O_GROUP_AIR_01";
					faction="O_vn_VPAF";
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					rarityGroup=0.5;
					side=0;
					class unit_1
					{
						side=0;
						rank="CAPTAIN";
						position[]={0,-23,0};
						vehicle="vn_o_air_mi2_03_02";
					};
					class unit_2
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-46,0};
						vehicle="vn_o_air_mi2_03_03";
					};
				};
				class vn_o_group_air_02
				{
					name="$STR_VN_O_GROUP_AIR_02";
					faction="O_vn_VPAF";
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					rarityGroup=0.5;
					side=0;
					class unit_1
					{
						side=0;
						rank="CAPTAIN";
						position[]={0,-23,0};
						vehicle="vn_o_air_mi2_01_01";
					};
					class unit_2
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-46,0};
						vehicle="vn_o_air_mi2_01_02";
					};
				};
				class vn_o_group_air_03
				{
					name="$STR_VN_O_GROUP_AIR_03";
					faction="O_vn_VPAF";
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					rarityGroup=0.5;
					side=0;
					class unit_1
					{
						side=0;
						rank="CAPTAIN";
						position[]={0,-23,0};
						vehicle="vn_o_air_mi2_02_01";
					};
					class unit_2
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-46,0};
						vehicle="vn_o_air_mi2_02_02";
					};
				};
				class vn_o_group_air_04
				{
					name="$STR_VN_O_GROUP_AIR_04";
					faction="O_vn_VPAF";
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					rarityGroup=0.5;
					side=0;
					class unit_1
					{
						side=0;
						rank="CAPTAIN";
						position[]={0,-23,0};
						vehicle="vn_o_air_mi2_03_01";
					};
					class unit_2
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-46,0};
						vehicle="vn_o_air_mi2_04_01";
					};
					class unit_3
					{
						side=0;
						rank="CAPTAIN";
						position[]={0,-69,0};
						vehicle="vn_o_air_mi2_01_02";
					};
					class unit_4
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-92,0};
						vehicle="vn_o_air_mi2_01_03";
					};
					class unit_5
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-115,0};
						vehicle="vn_o_air_mi2_01_01";
					};
					class unit_6
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-138,0};
						vehicle="vn_o_air_mi2_01_03";
					};
				};
				class vn_o_group_air_05
				{
					name="$STR_VN_O_GROUP_AIR_05";
					faction="O_vn_VPAF";
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					rarityGroup=0.5;
					side=0;
					class unit_1
					{
						side=0;
						rank="CAPTAIN";
						position[]={0,-23,0};
						vehicle="vn_o_air_mi2_04_02";
					};
					class unit_2
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-46,0};
						vehicle="vn_o_air_mi2_04_04";
					};
				};
				class vn_o_group_air_06
				{
					name="$STR_VN_O_GROUP_AIR_06";
					faction="O_vn_VPAF";
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					rarityGroup=0.5;
					side=0;
					class unit_1
					{
						side=0;
						rank="CAPTAIN";
						position[]={0,-23,0};
						vehicle="vn_o_air_mi2_05_05";
					};
					class unit_2
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-46,0};
						vehicle="vn_o_air_mi2_05_05";
					};
				};
				class vn_o_group_air_07
				{
					name="$STR_VN_O_GROUP_AIR_07";
					faction="O_vn_VPAF";
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					rarityGroup=0.5;
					side=0;
					class unit_1
					{
						side=0;
						rank="CAPTAIN";
						position[]={0,-23,0};
						vehicle="vn_o_air_mi2_05_02";
					};
					class unit_2
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-46,0};
						vehicle="vn_o_air_mi2_05_03";
					};
					class unit_3
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-69,0};
						vehicle="vn_o_air_mi2_04_05";
					};
				};
				class vn_o_group_air_08
				{
					name="$STR_VN_O_GROUP_AIR_08";
					faction="O_vn_VPAF";
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					rarityGroup=0.5;
					side=0;
					class unit_1
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-23,0};
						vehicle="vn_o_air_mig19_cas";
					};
					class unit_2
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-46,0};
						vehicle="vn_o_air_mig19_cas";
					};
					class unit_3
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-69,0};
						vehicle="vn_o_air_mig19_mr";
					};
					class unit_4
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-92,0};
						vehicle="vn_o_air_mig19_mr";
					};
				};
				class vn_o_group_air_09
				{
					name="$STR_VN_O_GROUP_AIR_09";
					faction="O_vn_VPAF";
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					rarityGroup=0.5;
					side=0;
					class unit_1
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-23,0};
						vehicle="vn_o_air_mig19_gun";
					};
					class unit_2
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-46,0};
						vehicle="vn_o_air_mig19_gun";
					};
					class unit_3
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-69,0};
						vehicle="vn_o_air_mig19_hbmb";
					};
					class unit_4
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-92,0};
						vehicle="vn_o_air_mig19_hbmb";
					};
				};
				class vn_o_group_air_10
				{
					name="$STR_VN_O_GROUP_AIR_10";
					faction="O_vn_VPAF";
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					rarityGroup=0.5;
					side=0;
					class unit_1
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-23,0};
						vehicle="vn_o_air_mig19_at";
					};
					class unit_2
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-46,0};
						vehicle="vn_o_air_mig19_at";
					};
					class unit_3
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-69,0};
						vehicle="vn_o_air_mig19_bmb";
					};
					class unit_4
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-92,0};
						vehicle="vn_o_air_mig19_bmb";
					};
				};
				class vn_o_group_air_11
				{
					name="$STR_VN_O_GROUP_AIR_11";
					faction="O_vn_VPAF";
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					rarityGroup=0.5;
					side=0;
					class unit_1
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-23,0};
						vehicle="vn_o_air_mig19_gun";
					};
					class unit_2
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-46,0};
						vehicle="vn_o_air_mig19_gun";
					};
					class unit_3
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-69,0};
						vehicle="vn_o_air_mig19_cap";
					};
					class unit_4
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-92,0};
						vehicle="vn_o_air_mig19_cap";
					};
				};
				class vn_o_group_air_12
				{
					name="$STR_VN_O_GROUP_AIR_12";
					faction="O_vn_VPAF";
					icon="\A3\ui_f\data\map\markers\nato\o_air.paa";
					rarityGroup=0.5;
					side=0;
					class unit_1
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-23,0};
						vehicle="vn_o_air_mig21_cas";
					};
					class unit_2
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-46,0};
						vehicle="vn_o_air_mig21_cas";
					};
					class unit_3
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-69,0};
						vehicle="vn_o_air_mig21_mr";
					};
					class unit_4
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-92,0};
						vehicle="vn_o_air_mig21_mr";
					};
				};
				class vn_o_group_air_13: vn_o_group_air_12
				{
					name="$STR_VN_O_GROUP_AIR_13";
					class unit_1
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-23,0};
						vehicle="vn_o_air_mig21_gun";
					};
					class unit_2
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-46,0};
						vehicle="vn_o_air_mig21_gun";
					};
					class unit_3
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-69,0};
						vehicle="vn_o_air_mig21_hbmb";
					};
					class unit_4
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-92,0};
						vehicle="vn_o_air_mig21_hbmb";
					};
				};
				class vn_o_group_air_14: vn_o_group_air_12
				{
					name="$STR_VN_O_GROUP_AIR_14";
					class unit_1
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-23,0};
						vehicle="vn_o_air_mig21_at";
					};
					class unit_2
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-46,0};
						vehicle="vn_o_air_mig21_at";
					};
					class unit_3
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-69,0};
						vehicle="vn_o_air_mig21_bmb";
					};
					class unit_4
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-92,0};
						vehicle="vn_o_air_mig21_bmb";
					};
				};
				class vn_o_group_air_15: vn_o_group_air_12
				{
					name="$STR_VN_O_GROUP_AIR_15";
					class unit_1
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-23,0};
						vehicle="vn_o_air_mig21_gun";
					};
					class unit_2
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-46,0};
						vehicle="vn_o_air_mig21_gun";
					};
					class unit_3
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-69,0};
						vehicle="vn_o_air_mig21_cap";
					};
					class unit_4
					{
						side=0;
						rank="LIEUTENANT";
						position[]={0,-92,0};
						vehicle="vn_o_air_mig21_cap";
					};
				};
			};
        };