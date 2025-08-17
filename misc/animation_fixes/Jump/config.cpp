class CfgPatches
{
	class ax_animation_fixes_Jump
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F_Decade_Loadorder"
		};
		author="Axle";
	};
};
/*
class CfgMovesBasic
{
	class Actions
	{
		class RifleLowStandActionsNoAdjust;
		class RifleStandActionsNoAdjust;
		class RifleLowStandActionsRunF: RifleLowStandActionsNoAdjust
		{
			getOver="AovrPercMrunSrasWrflDf";
		};
		class RifleLowStandActionsRunFL: RifleLowStandActionsNoAdjust
		{
			getOver="AovrPercMrunSrasWrflDf";
		};
		class RifleLowStandActionsRunFR: RifleLowStandActionsNoAdjust
		{
			getOver="AovrPercMrunSrasWrflDf";
		};
		class RifleStandActionsRunF: RifleStandActionsNoAdjust
		{
			getOver="AovrPercMrunSrasWrflDf";
		};
		class RifleStandActionsRunFL: RifleStandActionsNoAdjust
		{
			getOver="AovrPercMrunSrasWrflDf";
		};
		class RifleStandActionsRunFR: RifleStandActionsNoAdjust
		{
			getOver="AovrPercMrunSrasWrflDf";
		};
		class RifleStandEvasiveActionsF: RifleStandActionsNoAdjust
		{
			getOver="AovrPercMrunSrasWrflDf";
		};
		class RifleStandEvasiveActionsFL: RifleStandActionsNoAdjust
		{
			getOver="AovrPercMrunSrasWrflDf";
		};
		class RifleStandEvasiveActionsFR: RifleStandActionsNoAdjust
		{
			getOver="AovrPercMrunSrasWrflDf";
		};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class AovrPercMstpSrasWrflDf;
		class AmovPercMstpSrasWrflDnon;
		class AovrPercMrunSrasWrflDf: AovrPercMstpSrasWrflDf
		{
			forceAim=0;
		};
		class AmovPercMrunSrasWrflDf: AmovPercMstpSrasWrflDnon
		{
			InterpolateTo[]=
			{
				"AovrPercMrunSrasWrflDf",
				0.22,
				"AmovPercMrunSlowWrflDf",
				0.025,
				"AmovPercMwlkSrasWrflDf",
				0.025,
				"AmovPknlMrunSrasWrflDf",
				0.029999999,
				"AmovPercMrunSlowWrflDf_AmovPpneMstpSrasWrflDnon",
				0.02,
				"AmovPercMevaSrasWrflDf",
				0.025,
				"Unconscious",
				0.0099999998,
				"AmovPercMtacSrasWrflDf",
				0.02,
				"AmovPercMrunSrasWrflDfl",
				0.02,
				"AmovPercMrunSrasWrflDfl_ldst",
				0.02,
				"AmovPercMrunSrasWrflDfr",
				0.02,
				"AmovPercMrunSrasWrflDfr_ldst",
				0.02,
				"AmovPercMstpSrasWrflDnon",
				0.02,
				"AmovPercMrunSrasWrflDl",
				0.02,
				"AmovPercMrunSrasWrflDbl",
				0.02,
				"AmovPercMrunSrasWrflDb",
				0.02,
				"AmovPercMrunSrasWrflDbr",
				0.02,
				"AmovPercMrunSrasWrflDr",
				0.02,
				"AmovPknlMstpSlowWrflDnon_relax",
				0.1,
				"AmovPercMrunSrasWrflDf_ldst",
				0.02,
				"AmovPercMrunSrasWrflDf",
				0.02
			};
		};
	};
};
*/