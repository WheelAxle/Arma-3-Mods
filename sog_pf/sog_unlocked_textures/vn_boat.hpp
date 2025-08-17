    class vn_boat_03_base;
	class vn_boat_03_turret_base: vn_boat_03_base
	{
		#include "tex_boat_3.hpp"
    };
	class vn_boat_04_turret_base: vn_boat_03_base
	{
		#include "tex_boat_4.hpp"
    };
    class Boat_F;
	class vn_boat_01_base: Boat_F
    {
		#include "tex_boat_1.hpp"
    };
	class vn_boat_02_base: vn_boat_01_base
    {
		#include "tex_boat_2.hpp"
    };
	class vn_boat_01_mg_base: vn_boat_01_base
    {
		#include "tex_boat_1.hpp"
    };
	class vn_boat_02_mg_base: vn_boat_02_base
    {
		#include "tex_boat_2.hpp"
    };
    class vn_boat_armed_base;
	class vn_boat_05_base: vn_boat_armed_base{};//None
	class vn_boat_07_trans_base: Boat_F
    {
		#include "tex_boat_7.hpp"
    };
	class vn_boat_08_trans_base: vn_boat_07_trans_base
    {
		#include "tex_boat_8.hpp"
    };
	class vn_boat_12_base: vn_boat_armed_base{};//None
	class vn_boat_09_base: vn_boat_armed_base{};//None