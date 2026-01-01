        defaultUserMFDvalues[]={0.15000001,1,0.15000001,0.69999999};
        class MFD
		{
			class AirplaneHUD
			{
				topLeft="HUD_top_left";
				topRight="HUD_top_right";
				bottomLeft="HUD_bottom_left";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.15,1.0,0.15,1.0};
				helmetMountedDisplay=1;
				helmetPosition[]={-0.045,0.045,0.1};
				helmetRight[]={0.09,0.0,0.0};
				helmetDown[]={0.0,-0.09,0.0};
				font="RobotoCondensedLight";
				class Bones
				{
					class PlaneOrientation
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.5,0.5};
						pos10[]={0.697,0.695};
					};
					class Velocity
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.5};
						pos10[]={0.697,0.695};
					};
					class ForwardVec
					{
						type="vector";
						source="forward";
						pos0[]={0,0};
						pos10[]={0.197,0.195};
					};
					class HorizonBank2
					{
						type="rotational";
						source="HorizonBank";
						center[]={0.5,0.5};
						min=-6.28319;
						max=6.28319;
						minAngle=-360;
						maxAngle=360;
						aspectRatio=0.989848;
					};
					class HorizonDive
					{
						source="horizonDive";
						type="linear";
						min=-1;
						max=1;
						minPos[]={0.5,1.75};
						maxPos[]={0.5,-0.75};
					};
					class HorizonVector
					{
						type="horizontoview";
						pos0[]={0.5,0.5};
						pos10[]={0.83092302,0.825266};
						angle=0;
					};
                    class SliderAltitudeSource
					{
						type="linear";
						source="altitudeAGL";
						min=0;
						max=50;
						sourceOffset=-2;
						minPos[]={0.845,"0.2 + 0 * 0.065"};
						maxPos[]={0.845,"0.2 + 5 * 0.065"};
					};
					class SliderSpeedSource
					{
						type="linear";
						source="speed";
						min=0;
						max=138.889;
						minPos[]={0.255,0.2};
						maxPos[]={0.255,0.525};
					};
					class SliderVSpeedSource
					{
						type="linear";
						source="vspeed";
						min=-30;
						max=30;
						minPos[]={0.895,"0.6 + 0 * 0.04"};
						maxPos[]={0.895,"0.6 + 6 * 0.04"};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.697,0.695};
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.9,0.9};
					};
					class Target
					{
						source="targettoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.697,0.695};
					};
					class MissileFlightTimeRot1
					{
						type="rotational";
						source="MissileFlightTime";
						sourceScale=0.46;
						center[]={0,0};
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.989848;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
				};
				class Draw
				{
					alpha="user3";
					color[]={"user0","user1","user2"};
					condition="on";
					clipTL[]={0.0,0.0};
					clipBR[]={1.0,1.0};
					class PlaneHeading
					{
						width=4.0;
						class Vector
						{
							type="line";
							width=2.0;
							points[]={{"PlaneOrientation",{0,0},1},{"Velocity",{0,0},1},{}};
						};
					};
                    
					class Horizont
					{
						clipTL[]={0.25,0.25};
						clipBR[]={0.75,0.75};
						width=4.0;
						class Dimmed
						{
							width=4.0;
							class Level00
							{
								type="line";
								width=4.0;
								points[]={{"HorizonDive",{-0.17,0},1},{"HorizonDive",{-0.08,0},1},{},{"HorizonDive",{-0.005,0},1},{"HorizonDive",{0.005,0},1},{},{"HorizonDive",{0.08,0},1},{"HorizonDive",{0.17,0},1}};
							};
							class Level2M10: Level00
							{
								type="line";
								points[]={{"HorizonDive",{-0.17,"-0.195 / 10 * 10 * 3/3"},1},{"HorizonDive",{-0.08,"-0.195 / 10 * 10 * 3/3"},1},{},{"HorizonDive",{0.08,"-0.195 / 10 * 10 * 3/3"},1},{"HorizonDive",{0.17,"-0.195 / 10 * 10 * 3/3"},1}};
							};
							class VALM2_1_10
							{
								type="text";
								source="static";
								text=10;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]={"HorizonDive",{0.09,"0.013-0.015 * 3/3 - 0.195 / 10 * 10 * 3/3"},1};
								right[]={"HorizonDive",{"0.09 + 0.05 * 3/3","0.013-0.015 * 3/3 - 0.195 / 10 * 10 * 3/3"},1};
								down[]={"HorizonDive",{0.09,"0.013+0.015 * 3/3 - 0.195 / 10 * 10 * 3/3"},1};
							};
							class VALM2_2_10: VALM2_1_10
							{
								pos[]={"HorizonDive",{-0.09,"0.013-0.015 * 3/3 - 0.195 / 10 * 10 * 3/3"},1};
								right[]={"HorizonDive",{"-0.09 + 0.05 * 3/3","0.013-0.015 * 3/3 - 0.195 / 10 * 10 * 3/3"},1};
								down[]={"HorizonDive",{-0.09,"0.013+0.015 * 3/3 - 0.195 / 10 * 10 * 3/3"},1};
							};
							class Level2P10: Level00
							{
								type="line";
								points[]={{"HorizonDive",{-0.17,"+0.195 / 10 * 10 * 3/3"},1},{"HorizonDive",{-0.08,"+0.195 / 10 * 10 * 3/3"},1},{},{"HorizonDive",{0.08,"+0.195 / 10 * 10 * 3/3"},1},{"HorizonDive",{0.17,"+0.195 / 10 * 10 * 3/3"},1}};
							};
							class VALP2_1_10
							{
								type="text";
								source="static";
								text=-10;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]={"HorizonDive",{0.09,"0.013-0.015 * 3/3 + 0.195 / 10 * 10 * 3/3"},1};
								right[]={"HorizonDive",{"0.09 + 0.05 * 3/3","0.013-0.015 * 3/3 + 0.195 / 10 * 10 * 3/3"},1};
								down[]={"HorizonDive",{0.09,"0.013+0.015 * 3/3 + 0.195 / 10 * 10 * 3/3"},1};
							};
							class VALP2_2_10: VALP2_1_10
							{
								pos[]={"HorizonDive",{-0.09,"0.013-0.015 * 3/3 + 0.195 / 10 * 10 * 3/3"},1};
								right[]={"HorizonDive",{"-0.09 + 0.05 * 3/3","0.013-0.015 * 3/3 + 0.195 / 10 * 10 * 3/3"},1};
								down[]={"HorizonDive",{-0.09,"0.013+0.015 * 3/3 + 0.195 / 10 * 10 * 3/3"},1};
							};
							class Level2M20: Level00
							{
								type="line";
								points[]={{"HorizonDive",{-0.17,"-0.195 / 10 * 20 * 3/3"},1},{"HorizonDive",{-0.08,"-0.195 / 10 * 20 * 3/3"},1},{},{"HorizonDive",{0.08,"-0.195 / 10 * 20 * 3/3"},1},{"HorizonDive",{0.17,"-0.195 / 10 * 20 * 3/3"},1}};
							};
							class VALM2_1_20
							{
								type="text";
								source="static";
								text=20;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]={"HorizonDive",{0.09,"0.013-0.015 * 3/3 - 0.195 / 10 * 20 * 3/3"},1};
								right[]={"HorizonDive",{"0.09 + 0.05 * 3/3","0.013-0.015 * 3/3 - 0.195 / 10 * 20 * 3/3"},1};
								down[]={"HorizonDive",{0.09,"0.013+0.015 * 3/3 - 0.195 / 10 * 20 * 3/3"},1};
							};
							class VALM2_2_20: VALM2_1_20
							{
								pos[]={"HorizonDive",{-0.09,"0.013-0.015 * 3/3 - 0.195 / 10 * 20 * 3/3"},1};
								right[]={"HorizonDive",{"-0.09 + 0.05 * 3/3","0.013-0.015 * 3/3 - 0.195 / 10 * 20 * 3/3"},1};
								down[]={"HorizonDive",{-0.09,"0.013+0.015 * 3/3 - 0.195 / 10 * 20 * 3/3"},1};
							};
							class Level2P20: Level00
							{
								type="line";
								points[]={{"HorizonDive",{-0.17,"+0.195 / 10 * 20 * 3/3"},1},{"HorizonDive",{-0.08,"+0.195 / 10 * 20 * 3/3"},1},{},{"HorizonDive",{0.08,"+0.195 / 10 * 20 * 3/3"},1},{"HorizonDive",{0.17,"+0.195 / 10 * 20 * 3/3"},1}};
							};
							class VALP2_1_20
							{
								type="text";
								source="static";
								text=-20;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]={"HorizonDive",{0.09,"0.013-0.015 * 3/3 + 0.195 / 10 * 20 * 3/3"},1};
								right[]={"HorizonDive",{"0.09 + 0.05 * 3/3","0.013-0.015 * 3/3 + 0.195 / 10 * 20 * 3/3"},1};
								down[]={"HorizonDive",{0.09,"0.013+0.015 * 3/3 + 0.195 / 10 * 20 * 3/3"},1};
							};
							class VALP2_2_20: VALP2_1_20
							{
								pos[]={"HorizonDive",{-0.09,"0.013-0.015 * 3/3 + 0.195 / 10 * 20 * 3/3"},1};
								right[]={"HorizonDive",{"-0.09 + 0.05 * 3/3","0.013-0.015 * 3/3 + 0.195 / 10 * 20 * 3/3"},1};
								down[]={"HorizonDive",{-0.09,"0.013+0.015 * 3/3 + 0.195 / 10 * 20 * 3/3"},1};
							};
							class Level2M30: Level00
							{
								type="line";
								points[]={{"HorizonDive",{-0.17,"-0.195 / 10 * 30 * 3/3"},1},{"HorizonDive",{-0.08,"-0.195 / 10 * 30 * 3/3"},1},{},{"HorizonDive",{0.08,"-0.195 / 10 * 30 * 3/3"},1},{"HorizonDive",{0.17,"-0.195 / 10 * 30 * 3/3"},1}};
							};
							class VALM2_1_30
							{
								type="text";
								source="static";
								text=30;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]={"HorizonDive",{0.09,"0.013-0.015 * 3/3 - 0.195 / 10 * 30 * 3/3"},1};
								right[]={"HorizonDive",{"0.09 + 0.05 * 3/3","0.013-0.015 * 3/3 - 0.195 / 10 * 30 * 3/3"},1};
								down[]={"HorizonDive",{0.09,"0.013+0.015 * 3/3 - 0.195 / 10 * 30 * 3/3"},1};
							};
							class VALM2_2_30: VALM2_1_30
							{
								pos[]={"HorizonDive",{-0.09,"0.013-0.015 * 3/3 - 0.195 / 10 * 30 * 3/3"},1};
								right[]={"HorizonDive",{"-0.09 + 0.05 * 3/3","0.013-0.015 * 3/3 - 0.195 / 10 * 30 * 3/3"},1};
								down[]={"HorizonDive",{-0.09,"0.013+0.015 * 3/3 - 0.195 / 10 * 30 * 3/3"},1};
							};
							class Level2P30: Level00
							{
								type="line";
								points[]={{"HorizonDive",{-0.17,"+0.195 / 10 * 30 * 3/3"},1},{"HorizonDive",{-0.08,"+0.195 / 10 * 30 * 3/3"},1},{},{"HorizonDive",{0.08,"+0.195 / 10 * 30 * 3/3"},1},{"HorizonDive",{0.17,"+0.195 / 10 * 30 * 3/3"},1}};
							};
							class VALP2_1_30
							{
								type="text";
								source="static";
								text=-30;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]={"HorizonDive",{0.09,"0.013-0.015 * 3/3 + 0.195 / 10 * 30 * 3/3"},1};
								right[]={"HorizonDive",{"0.09 + 0.05 * 3/3","0.013-0.015 * 3/3 + 0.195 / 10 * 30 * 3/3"},1};
								down[]={"HorizonDive",{0.09,"0.013+0.015 * 3/3 + 0.195 / 10 * 30 * 3/3"},1};
							};
							class VALP2_2_30: VALP2_1_30
							{
								pos[]={"HorizonDive",{-0.09,"0.013-0.015 * 3/3 + 0.195 / 10 * 30 * 3/3"},1};
								right[]={"HorizonDive",{"-0.09 + 0.05 * 3/3","0.013-0.015 * 3/3 + 0.195 / 10 * 30 * 3/3"},1};
								down[]={"HorizonDive",{-0.09,"0.013+0.015 * 3/3 + 0.195 / 10 * 30 * 3/3"},1};
							};
							class Level2M40: Level00
							{
								type="line";
								points[]={{"HorizonDive",{-0.17,"-0.195 / 10 * 40 * 3/3"},1},{"HorizonDive",{-0.08,"-0.195 / 10 * 40 * 3/3"},1},{},{"HorizonDive",{0.08,"-0.195 / 10 * 40 * 3/3"},1},{"HorizonDive",{0.17,"-0.195 / 10 * 40 * 3/3"},1}};
							};
							class VALM2_1_40
							{
								type="text";
								source="static";
								text=40;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]={"HorizonDive",{0.09,"0.013-0.015 * 3/3 - 0.195 / 10 * 40 * 3/3"},1};
								right[]={"HorizonDive",{"0.09 + 0.05 * 3/3","0.013-0.015 * 3/3 - 0.195 / 10 * 40 * 3/3"},1};
								down[]={"HorizonDive",{0.09,"0.013+0.015 * 3/3 - 0.195 / 10 * 40 * 3/3"},1};
							};
							class VALM2_2_40: VALM2_1_40
							{
								pos[]={"HorizonDive",{-0.09,"0.013-0.015 * 3/3 - 0.195 / 10 * 40 * 3/3"},1};
								right[]={"HorizonDive",{"-0.09 + 0.05 * 3/3","0.013-0.015 * 3/3 - 0.195 / 10 * 40 * 3/3"},1};
								down[]={"HorizonDive",{-0.09,"0.013+0.015 * 3/3 - 0.195 / 10 * 40 * 3/3"},1};
							};
							class Level2P40: Level00
							{
								type="line";
								points[]={{"HorizonDive",{-0.17,"+0.195 / 10 * 40 * 3/3"},1},{"HorizonDive",{-0.08,"+0.195 / 10 * 40 * 3/3"},1},{},{"HorizonDive",{0.08,"+0.195 / 10 * 40 * 3/3"},1},{"HorizonDive",{0.17,"+0.195 / 10 * 40 * 3/3"},1}};
							};
							class VALP2_1_40
							{
								type="text";
								source="static";
								text=-40;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]={"HorizonDive",{0.09,"0.013-0.015 * 3/3 + 0.195 / 10 * 40 * 3/3"},1};
								right[]={"HorizonDive",{"0.09 + 0.05 * 3/3","0.013-0.015 * 3/3 + 0.195 / 10 * 40 * 3/3"},1};
								down[]={"HorizonDive",{0.09,"0.013+0.015 * 3/3 + 0.195 / 10 * 40 * 3/3"},1};
							};
							class VALP2_2_40: VALP2_1_40
							{
								pos[]={"HorizonDive",{-0.09,"0.013-0.015 * 3/3 + 0.195 / 10 * 40 * 3/3"},1};
								right[]={"HorizonDive",{"-0.09 + 0.05 * 3/3","0.013-0.015 * 3/3 + 0.195 / 10 * 40 * 3/3"},1};
								down[]={"HorizonDive",{-0.09,"0.013+0.015 * 3/3 + 0.195 / 10 * 40 * 3/3"},1};
							};
							class Level2M50: Level00
							{
								type="line";
								points[]={{"HorizonDive",{-0.17,"-0.195 / 10 * 50 * 3/3"},1},{"HorizonDive",{-0.08,"-0.195 / 10 * 50 * 3/3"},1},{},{"HorizonDive",{0.08,"-0.195 / 10 * 50 * 3/3"},1},{"HorizonDive",{0.17,"-0.195 / 10 * 50 * 3/3"},1}};
							};
							class VALM2_1_50
							{
								type="text";
								source="static";
								text=50;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]={"HorizonDive",{0.09,"0.013-0.015 * 3/3 - 0.195 / 10 * 50 * 3/3"},1};
								right[]={"HorizonDive",{"0.09 + 0.05 * 3/3","0.013-0.015 * 3/3 - 0.195 / 10 * 50 * 3/3"},1};
								down[]={"HorizonDive",{0.09,"0.013+0.015 * 3/3 - 0.195 / 10 * 50 * 3/3"},1};
							};
							class VALM2_2_50: VALM2_1_50
							{
								pos[]={"HorizonDive",{-0.09,"0.013-0.015 * 3/3 - 0.195 / 10 * 50 * 3/3"},1};
								right[]={"HorizonDive",{"-0.09 + 0.05 * 3/3","0.013-0.015 * 3/3 - 0.195 / 10 * 50 * 3/3"},1};
								down[]={"HorizonDive",{-0.09,"0.013+0.015 * 3/3 - 0.195 / 10 * 50 * 3/3"},1};
							};
							class Level2P50: Level00
							{
								type="line";
								points[]={{"HorizonDive",{-0.17,"+0.195 / 10 * 50 * 3/3"},1},{"HorizonDive",{-0.08,"+0.195 / 10 * 50 * 3/3"},1},{},{"HorizonDive",{0.08,"+0.195 / 10 * 50 * 3/3"},1},{"HorizonDive",{0.17,"+0.195 / 10 * 50 * 3/3"},1}};
							};
							class VALP2_1_50
							{
								type="text";
								source="static";
								text=-50;
								align="center";
								scale=1;
								sourceScale=1;
								pos[]={"HorizonDive",{0.09,"0.013-0.015 * 3/3 + 0.195 / 10 * 50 * 3/3"},1};
								right[]={"HorizonDive",{"0.09 + 0.05 * 3/3","0.013-0.015 * 3/3 + 0.195 / 10 * 50 * 3/3"},1};
								down[]={"HorizonDive",{0.09,"0.013+0.015 * 3/3 + 0.195 / 10 * 50 * 3/3"},1};
							};
							class VALP2_2_50: VALP2_1_50
							{
								pos[]={"HorizonDive",{-0.09,"0.013-0.015 * 3/3 + 0.195 / 10 * 50 * 3/3"},1};
								right[]={"HorizonDive",{"-0.09 + 0.05 * 3/3","0.013-0.015 * 3/3 + 0.195 / 10 * 50 * 3/3"},1};
								down[]={"HorizonDive",{-0.09,"0.013+0.015 * 3/3 + 0.195 / 10 * 50 * 3/3"},1};
							};
						};
					};
					/*
                    class MGun
					{
						condition="-2+(mgun+rocket)*ImpactDistance";
						width=4.0;
						class Circle
						{
							type="line";
							width=4.0;
							points[]={{"ImpactPoint",{0,-0.0277157},1},{"ImpactPoint",{0,-0.0346447},1},{"MissileFlightTimeRot1",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot2",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot3",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot4",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot5",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot6",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot7",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot8",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot9",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot10",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot11",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot12",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot13",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot14",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot15",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot16",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot17",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot18",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot19",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.035},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.028},1,"ImpactPoint",1}};
						};
						class Cross
						{
							type="line";
							width=3.0;
							points[]={{"ImpactPoint",{0.0,-0.0296954},1},{"ImpactPoint",{0.0,-0.0395939},1},{},{"ImpactPoint",{0.02,-0.024},1},{"ImpactPoint",{0.025,-0.031},1},{},{"ImpactPoint",{0.0,-0.002},1},{"ImpactPoint",{0.0,0.002},1},{},{"ImpactPoint",{-0.002,0.0},1},{"ImpactPoint",{0.002,0.0},1},{}};
						};
						class Circle2
						{
							type="line";
							width=3.0;
							points[]={};
						};
						class Circle_Min_Range
						{
							type="line";
							width=3.0;
							points[]={{"ImpactPoint",{0,-0.0296954},1},{"ImpactPoint",{0.005208,-0.0292441},1},{"ImpactPoint",{0.01026,-0.0279048},1},{"ImpactPoint",{0.015,-0.0257162},1},{"ImpactPoint",{0.019284,-0.0227467},1},{"ImpactPoint",{0.02298,-0.0190882},1},{"ImpactPoint",{0.02598,-0.0148477},1},{"ImpactPoint",{0.028191,-0.0101558},1},{"ImpactPoint",{0.029544,-0.00515513},1},{"ImpactPoint",{0.03,0},1},{"ImpactPoint",{0.029544,0.00515513},1},{"ImpactPoint",{0.028191,0.0101558},1},{"ImpactPoint",{0.02598,0.0148477},1},{"ImpactPoint",{0.02298,0.0190882},1},{"ImpactPoint",{0.019284,0.0227467},1},{"ImpactPoint",{0.015,0.0257162},1},{"ImpactPoint",{0.01026,0.0279048},1},{"ImpactPoint",{0.005208,0.0292441},1},{"ImpactPoint",{0,0.0296954},1},{"ImpactPoint",{-0.005208,0.0292441},1},{"ImpactPoint",{-0.01026,0.0279048},1},{"ImpactPoint",{-0.015,0.0257162},1},{"ImpactPoint",{-0.019284,0.0227467},1},{"ImpactPoint",{-0.02298,0.0190882},1},{"ImpactPoint",{-0.02598,0.0148477},1},{"ImpactPoint",{-0.028191,0.0101558},1},{"ImpactPoint",{-0.029544,0.00515513},1},{"ImpactPoint",{-0.03,0},1},{"ImpactPoint",{-0.029544,-0.00515513},1},{"ImpactPoint",{-0.028191,-0.0101558},1},{"ImpactPoint",{-0.02598,-0.0148477},1},{"ImpactPoint",{-0.02298,-0.0190882},1},{"ImpactPoint",{-0.019284,-0.0227467},1},{"ImpactPoint",{-0.015,-0.0257162},1},{"ImpactPoint",{-0.01026,-0.0279048},1},{"ImpactPoint",{-0.005208,-0.0292441},1},{"ImpactPoint",{0,-0.0296954},1}};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]={"ImpactPoint",{-0.002,-0.08},1};
							right[]={"ImpactPoint",{0.045,-0.08},1};
							down[]={"ImpactPoint",{-0.002,-0.04},1};
						};
					};
					class Missile
					{
						condition="missile";
						width=0.05;
						class Circle
						{
							type="line";
							width=4.0;
							points[]={{"ForwardVec",1,"WeaponAim",{0,-0.0692893},1},{"ForwardVec",1,"WeaponAim",{0.012152,-0.0682361},1},{"ForwardVec",1,"WeaponAim",{0.02394,-0.0651112},1},{"ForwardVec",1,"WeaponAim",{0.035,-0.0600046},1},{"ForwardVec",1,"WeaponAim",{0.044996,-0.0530756},1},{"ForwardVec",1,"WeaponAim",{0.05362,-0.0445392},1},{"ForwardVec",1,"WeaponAim",{0.06062,-0.0346447},1},{"ForwardVec",1,"WeaponAim",{0.065779,-0.023697},1},{"ForwardVec",1,"WeaponAim",{0.068936,-0.0120286},1},{"ForwardVec",1,"WeaponAim",{0.07,0},1},{"ForwardVec",1,"WeaponAim",{0.068936,0.0120286},1},{"ForwardVec",1,"WeaponAim",{0.065779,0.023697},1},{"ForwardVec",1,"WeaponAim",{0.06062,0.0346447},1},{"ForwardVec",1,"WeaponAim",{0.05362,0.0445392},1},{"ForwardVec",1,"WeaponAim",{0.044996,0.0530756},1},{"ForwardVec",1,"WeaponAim",{0.035,0.0600046},1},{"ForwardVec",1,"WeaponAim",{0.02394,0.0651112},1},{"ForwardVec",1,"WeaponAim",{0.012152,0.0682361},1},{"ForwardVec",1,"WeaponAim",{0,0.0692893},1},{"ForwardVec",1,"WeaponAim",{-0.012152,0.0682361},1},{"ForwardVec",1,"WeaponAim",{-0.02394,0.0651112},1},{"ForwardVec",1,"WeaponAim",{-0.035,0.0600046},1},{"ForwardVec",1,"WeaponAim",{-0.044996,0.0530756},1},{"ForwardVec",1,"WeaponAim",{-0.05362,0.0445392},1},{"ForwardVec",1,"WeaponAim",{-0.06062,0.0346447},1},{"ForwardVec",1,"WeaponAim",{-0.065779,0.023697},1},{"ForwardVec",1,"WeaponAim",{-0.068936,0.0120286},1},{"ForwardVec",1,"WeaponAim",{-0.07,0},1},{"ForwardVec",1,"WeaponAim",{-0.068936,-0.0120286},1},{"ForwardVec",1,"WeaponAim",{-0.065779,-0.023697},1},{"ForwardVec",1,"WeaponAim",{-0.06062,-0.0346447},1},{"ForwardVec",1,"WeaponAim",{-0.05362,-0.0445392},1},{"ForwardVec",1,"WeaponAim",{-0.044996,-0.0530756},1},{"ForwardVec",1,"WeaponAim",{-0.035,-0.0600046},1},{"ForwardVec",1,"WeaponAim",{-0.02394,-0.0651112},1},{"ForwardVec",1,"WeaponAim",{-0.012152,-0.0682361},1},{"ForwardVec",1,"WeaponAim",{0,-0.0692893},1}};
						};
					};
					class TargetDiamond
					{
						condition="1-missilelocked";
						blinkingPattern[]={0.3,0.3};
						blinkingStartsOn=1;
						class shape
						{
							type="line";
							width=2;
							points[]={{"Target",1,"Limit0109",1,{0.0277408,0.00546197},1},{"Target",1,"Limit0109",1,{0.0277408,-0.00546197},1},{},{"Target",1,"Limit0109",1,{0.0235175,-0.0155544},1},{"Target",1,"Limit0109",1,{0.0157139,-0.0232788},1},{},{"Target",1,"Limit0109",1,{0.00551799,-0.0274592},1},{"Target",1,"Limit0109",1,{-0.00551799,-0.0274592},1},{},{"Target",1,"Limit0109",1,{-0.0157139,-0.0232788},1},{"Target",1,"Limit0109",1,{-0.0235175,-0.0155544},1},{},{"Target",1,"Limit0109",1,{-0.0277408,-0.00546196},1},{"Target",1,"Limit0109",1,{-0.0277408,0.00546198},1},{},{"Target",1,"Limit0109",1,{-0.0235175,0.0155544},1},{"Target",1,"Limit0109",1,{-0.0157139,0.0232788},1},{},{"Target",1,"Limit0109",1,{-0.00551798,0.0274592},1},{"Target",1,"Limit0109",1,{0.00551799,0.0274592},1},{},{"Target",1,"Limit0109",1,{0.0157139,0.0232788},1},{"Target",1,"Limit0109",1,{0.0235175,0.0155544},1},{},{"Target",1,"Limit0109",1,{0.0277408,0.00546195},1},{"Target",1,"Limit0109",1,{0.0277408,-0.00546197},1},{},{"Target",1,"Limit0109",1,{0.0235175,-0.0155544},1},{"Target",1,"Limit0109",1,{0.0157139,-0.0232788},1},{},{"Target",1,"Limit0109",1,{0.00551798,-0.0274592},1},{"Target",1,"Limit0109",1,{-0.005518,-0.0274592},1},{},{"Target",1,"Limit0109",1,{-0.0157139,-0.0232788},1},{"Target",1,"Limit0109",1,{-0.0235175,-0.0155544},1},{},{},{"Target",1,{"Limit0109",-0.02,-2.36076e-10},1},{"Target",1,{"Limit0109",-0.015,-1.77057e-10},1},{},{"Target",1,{"Limit0109",-1.74846e-09,0.019797},1},{"Target",1,{"Limit0109",-1.31134e-09,0.0148477},1},{},{"Target",1,{"Limit0109",0.02,8.65352e-10},1},{"Target",1,{"Limit0109",0.015,6.49014e-10},1},{},{"Target",1,{"Limit0109",0,-0.019797},1},{"Target",1,{"Limit0109",0,-0.0148477},1}};
						};
					};
					class TargetLocked
					{
						condition="missilelocked";
						class shape
						{
							type="line";
							width=3;
							points[]={{"Target",1,"Limit0109",{0,-0.019797},1},{"Target",1,"Limit0109",{0.003472,-0.019496},1},{"Target",1,"Limit0109",{0.00684,-0.0186032},1},{"Target",1,"Limit0109",{0.01,-0.0171442},1},{"Target",1,"Limit0109",{0.012856,-0.0151645},1},{"Target",1,"Limit0109",{0.01532,-0.0127255},1},{"Target",1,"Limit0109",{0.01732,-0.00989848},1},{"Target",1,"Limit0109",{0.018794,-0.00677056},1},{"Target",1,"Limit0109",{0.019696,-0.00343675},1},{"Target",1,"Limit0109",{0.02,0},1},{"Target",1,"Limit0109",{0.019696,0.00343675},1},{"Target",1,"Limit0109",{0.018794,0.00677056},1},{"Target",1,"Limit0109",{0.01732,0.00989848},1},{"Target",1,"Limit0109",{0.01532,0.0127255},1},{"Target",1,"Limit0109",{0.012856,0.0151645},1},{"Target",1,"Limit0109",{0.01,0.0171442},1},{"Target",1,"Limit0109",{0.00684,0.0186032},1},{"Target",1,"Limit0109",{0.003472,0.019496},1},{"Target",1,"Limit0109",{0,0.019797},1},{"Target",1,"Limit0109",{-0.003472,0.019496},1},{"Target",1,"Limit0109",{-0.00684,0.0186032},1},{"Target",1,"Limit0109",{-0.01,0.0171442},1},{"Target",1,"Limit0109",{-0.012856,0.0151645},1},{"Target",1,"Limit0109",{-0.01532,0.0127255},1},{"Target",1,"Limit0109",{-0.01732,0.00989848},1},{"Target",1,"Limit0109",{-0.018794,0.00677056},1},{"Target",1,"Limit0109",{-0.019696,0.00343675},1},{"Target",1,"Limit0109",{-0.02,0},1},{"Target",1,"Limit0109",{-0.019696,-0.00343675},1},{"Target",1,"Limit0109",{-0.018794,-0.00677056},1},{"Target",1,"Limit0109",{-0.01732,-0.00989848},1},{"Target",1,"Limit0109",{-0.01532,-0.0127255},1},{"Target",1,"Limit0109",{-0.012856,-0.0151645},1},{"Target",1,"Limit0109",{-0.01,-0.0171442},1},{"Target",1,"Limit0109",{-0.00684,-0.0186032},1},{"Target",1,"Limit0109",{-0.003472,-0.019496},1},{"Target",1,"Limit0109",{0,-0.019797},1},{},{"Target",1,{"Limit0109",-0.02,-2.36076e-10},1},{"Target",1,{"Limit0109",-0.015,-1.77057e-10},1},{},{"Target",1,{"Limit0109",-1.74846e-09,0.019797},1},{"Target",1,{"Limit0109",-1.31134e-09,0.0148477},1},{},{"Target",1,{"Limit0109",0.02,8.65352e-10},1},{"Target",1,{"Limit0109",0.015,6.49014e-10},1},{},{"Target",1,{"Limit0109",0,-0.019797},1},{"Target",1,{"Limit0109",0,-0.0148477},1}};
						};
					};
                    */
					class IncomingMissile
					{
						condition="incomingmissile";
						blinkingPattern[]={0.3,0.3};
						blinkingStartsOn=0;
						class Text
						{
							type="text";
							source="static";
							text="!INCOMING MISSILE!";
							align="center";
							scale=1;
							pos[]={{0.485,0.217766},1};
							right[]={{0.545,0.217766},1};
							down[]={{0.485,0.267259},1};
						};
					};
					class RtdOnlyGroup
					{
						condition="simulRTD";
						class CollectiveNumber
						{
							type="text";
							source="rtdCollective";
							sourceScale=100;
							align="left";
							scale=1;
							pos[]={{0.18,0.535},1};
							right[]={{0.23,0.535},1};
							down[]={{0.18,0.57},1};
						};
						class CollectiveText
						{
							type="text";
							source="static";
							text="%";
							align="right";
							scale=1;
							pos[]={{0.18,0.535},1};
							right[]={{0.23,0.535},1};
							down[]={{0.18,0.57},1};
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.6;
						sourceLength=3;
						align="right";
						scale=1;
						pos[]={{0.16,0.07},1};
						right[]={{0.24,0.07},1};
						down[]={{0.16,0.12},1};
					};
					class VspeedNumber
					{
						type="text";
						source="vspeed";
						sourceScale=1;
						sourceLength=2;
						align="left";
						scale=1;
						pos[]={{0.92,0.53},1};
						right[]={{0.99,0.53},1};
						down[]={{0.92,0.595},1};
					};
					class AltNumber
					{
						type="text";
						source="altitudeAGL";
						sourceScale=1;
						sourceOffset=-2;
						sourceLength=3;
						align="left";
						scale=1;
						pos[]={{0.84,0.07},1};
						right[]={{0.92,0.07},1};
						down[]={{0.84,0.12},1};
					};
					class VspeedNumberStaticP30
					{
						type="text";
						source="static";
						text="+30";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]={{0.93,0.583},1};
						right[]={{0.97,0.583},1};
						down[]={{0.93,0.613},1};
					};
					class VspeedNumberStatic0
					{
						type="text";
						source="static";
						text=" 0";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]={{0.93,0.703},1};
						right[]={{0.97,0.703},1};
						down[]={{0.93,0.733},1};
					};
					class VspeedNumberStaticM30
					{
						type="text";
						source="static";
						text="-30";
						scale=1;
						sourceScale=1;
						align="right";
						pos[]={{0.93,0.823},1};
						right[]={{0.97,0.823},1};
						down[]={{0.93,0.853},1};
					};
					class AltGroup
					{
						condition="53 -altitudeAGL";
						class Static
						{
							type="line";
							width=4.0;
							points[]={{"SliderAltitudeSource",{-0.015,0.01},1},{"SliderAltitudeSource",{0.0,0.0},1},{"SliderAltitudeSource",{-0.015,-0.01},1},{"SliderAltitudeSource",{-0.015,0.01},1},{},{{0.85,"0.2 + 0 * 0.065"},1},{{0.85,"0.2 + 5 * 0.065"},1},{},{{0.85,"0.2 + 0 * 0.065"},1},{{0.87,"0.2 + 0 * 0.065"},1},{},{{0.86,"0.2 + 1 * 0.065"},1},{{0.87,"0.2 + 1 * 0.065"},1},{},{{0.86,"0.2 + 2 * 0.065"},1},{{0.87,"0.2 + 2 * 0.065"},1},{},{{0.86,"0.2 + 3 * 0.065"},1},{{0.87,"0.2 + 3 * 0.065"},1},{},{{0.86,"0.2 + 4 * 0.065"},1},{{0.87,"0.2 + 4 * 0.065"},1},{},{{0.85,"0.2 + 5 * 0.065"},1},{{0.87,"0.2 + 5 * 0.065"},1},{}};
						};
						class AltStatic50
						{
							type="text";
							source="static";
							text="50";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]={{0.88,0.183},1};
							right[]={{0.92,0.183},1};
							down[]={{0.88,0.213},1};
						};
						class AltStatic0
						{
							type="text";
							source="static";
							text="0";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]={{0.88,0.508},1};
							right[]={{0.92,0.508},1};
							down[]={{0.88,0.538},1};
						};
					};
					class SpeedGroup
					{
						condition="speed-2.78";
						class Static
						{
							type="line";
							width=4.0;
							points[]={{"SliderSpeedSource",{0.015,0.01},1},{"SliderSpeedSource",{0.0,0.0},1},{"SliderSpeedSource",{0.015,-0.01},1},{"SliderSpeedSource",{0.015,0.01},1},{},{{0.25,0.2},1},{{0.25,0.525},1},{},{{0.25,0.2},1},{{0.23,0.2},1},{},{{0.24,0.265},1},{{0.23,0.265},1},{},{{0.24,0.33},1},{{0.23,0.33},1},{},{{0.24,0.395},1},{{0.23,0.395},1},{},{{0.24,0.46},1},{{0.23,0.46},1},{},{{0.25,0.525},1},{{0.23,0.525},1},{}};
						};
						class SpeedStatic500
						{
							type="text";
							source="static";
							text="500";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]={{0.22,0.183},1};
							right[]={{0.26,0.183},1};
							down[]={{0.22,0.213},1};
						};
						class SpeedStatic0
						{
							type="text";
							source="static";
							text="0";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]={{0.22,0.508},1};
							right[]={{0.26,0.508},1};
							down[]={{0.22,0.538},1};
						};
					};
					/*
                    class HeadingNumber
					{
						type="text";
						source="heading";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]={{0.5,0.0},1};
						right[]={{0.58,0.0},1};
						down[]={{0.5,0.05},1};
					};
                    */
                    class HeadingHeadNumber
					{
						type="text";
						source="cameraDir";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]={{0.5,0.058},1};
						right[]={{0.58,0.058},1};
						down[]={{0.5,0.108},1};
					};
					class HeadingGroupLeft
					{
						clipTL[]={0,0};
						clipBR[]={0.45,1};
						class HeadingScale
						{
							type="scale";
							horizontal=1;
							source="heading";
							sourceScale=0.1;
							width=4.0;
							NeverEatSeaWeed=1;
							top=0.3;
							center=0.5;
							bottom=0.7;
							lineXleft=0.11;
							lineYright=0.1;
							lineXleftMajor=0.11;
							lineYrightMajor=0.09;
							majorLineEach=2;
							numberEach=2;
							step=0.5;
							stepSize=0.0555556;
							align="center";
							scale=1;
							pos[]={0.3,"0.00 + 0.05"};
							right[]={0.36,"0.00 + 0.05"};
							down[]={0.3,"0.04 + 0.05"};
						};
					};
					class HeadingGroupRight: HeadingGroupLeft
					{
						clipTL[]={0.55,0};
						clipBR[]={1,1};
						class HeadingScale: HeadingScale{};
					};
					class HorizonLine
					{
						condition="1-autohover";
						clipTL[]={0.2,0.145};
						clipBR[]={0.80000001,0.85500002};
						class HorizonLineDraw
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"HorizonVector",
									{-0.22499999,0},
									1
								},
								
								{
									"HorizonVector",
									{-0.1875,0},
									1
								},
								{},
								
								{
									"HorizonVector",
									{-0.15000001,0},
									1
								},
								
								{
									"HorizonVector",
									{-0.1125,0},
									1
								},
								{},
								
								{
									"HorizonVector",
									{-0.075000003,0},
									1
								},
								
								{
									"HorizonVector",
									{-0.037500001,0},
									1
								},
								{},
								
								{
									"HorizonVector",
									{0.037500001,0},
									1
								},
								
								{
									"HorizonVector",
									{0.075000003,0},
									1
								},
								{},
								
								{
									"HorizonVector",
									{0.1125,0},
									1
								},
								
								{
									"HorizonVector",
									{0.15000001,0},
									1
								},
								{},
								
								{
									"HorizonVector",
									{0.1875,0},
									1
								},
								
								{
									"HorizonVector",
									{0.22499999,0},
									1
								}
							};
						};
					};
                    /*
                    class Static
					{
						type="line";
						width=4.0;
						points[]={{{0.462,0.065},1},{{0.538,0.065},1},{{0.558,0.085},1},{{0.538,0.105},1},{{0.462,0.105},1},{{0.442,0.085},1},{{0.462,0.065},1},{},{{0.445,0.005},1},{{0.555,0.005},1},{{0.555,0.045},1},{{0.445,0.045},1},{{0.445,0.005},1},{},{"HorizonBank2",{0,-0.0019797},1},{"HorizonBank2",{0.001,-0.00171442},1},{"HorizonBank2",{0.001732,-0.000989848},1},{"HorizonBank2",{0.002,0},1},{"HorizonBank2",{0.001732,0.000989848},1},{"HorizonBank2",{0.001,0.00171442},1},{"HorizonBank2",{0,0.0019797},1},{"HorizonBank2",{-0.001,0.00171442},1},{"HorizonBank2",{-0.001732,0.000989848},1},{"HorizonBank2",{-0.002,0},1},{"HorizonBank2",{-0.001732,-0.000989848},1},{"HorizonBank2",{-0.001,-0.00171442},1},{"HorizonBank2",{0,-0.0019797},1},{},{"HorizonBank2",{0,-0.0296954},1},{"HorizonBank2",{0.015,-0.0257162},1},{"HorizonBank2",{0.02598,-0.0148477},1},{"HorizonBank2",{0.03,0},1},{},{"HorizonBank2",{-0.03,0},1},{"HorizonBank2",{-0.02598,-0.0148477},1},{"HorizonBank2",{-0.015,-0.0257162},1},{"HorizonBank2",{0,-0.0296954},1},{},{"HorizonBank2",{0.03,1.29803e-09},1},{"HorizonBank2",{0.05,2.16338e-09},1},{},{"HorizonBank2",{-0.03,-3.54114e-10},1},{"HorizonBank2",{-0.05,-5.90191e-10},1},{},{"WeaponAim",{-0.05,2.16338e-09},1},{"WeaponAim",{-0.06,2.59606e-09},1},{},{"WeaponAim",{0.05,-5.90191e-10},1},{"WeaponAim",{0.06,-7.08229e-10},1},{},{"WeaponAim",{-0.025,0.0428617},1},{"WeaponAim",{-0.03,0.051434},1},{},{"WeaponAim",{0.025,0.0428617},1},{"WeaponAim",{0.03,0.051434},1},{},{"WeaponAim",{-0.0433013,0.0247462},1},{"WeaponAim",{-0.0519615,0.0296954},1},{},{"WeaponAim",{0.0433013,0.0247462},1},{"WeaponAim",{0.0519615,0.0296954},1},{},{"SliderVSpeedSource",{-0.015,0.01},1},{"SliderVSpeedSource",{0.0,0.0},1},{"SliderVSpeedSource",{-0.015,-0.01},1},{"SliderVSpeedSource",{-0.015,0.01},1},{},{{0.9,"0.6 - 0.3 * 0.04"},1},{{0.9,"0.6 + 6.3 * 0.04"},1},{},{{0.9,"0.6 + 0 * 0.04"},1},{{0.92,"0.6 + 0 * 0.04"},1},{},{{0.91,"0.6 + 1 * 0.04"},1},{{0.92,"0.6 + 1 * 0.04"},1},{},{{0.91,"0.6 + 2 * 0.04"},1},{{0.92,"0.6 + 2 * 0.04"},1},{},{{0.9,"0.6 + 3 * 0.04"},1},{{0.92,"0.6 + 3 * 0.04"},1},{},{{0.91,"0.6 + 4 * 0.04"},1},{{0.92,"0.6 + 4 * 0.04"},1},{},{{0.91,"0.6 + 5 * 0.04"},1},{{0.92,"0.6 + 5 * 0.04"},1},{},{{0.9,"0.6 + 6 * 0.04"},1},{{0.92,"0.6 + 6 * 0.04"},1},{},{{0.31,0.112},1},{{0.69,0.112},1},{}};
					};*/
                    class Static
					{
						type="line";
						width=4.0;
						points[]={{{0.462,0.065},1},{{0.538,0.065},1},{{0.558,0.085},1},{{0.538,0.105},1},{{0.462,0.105},1},{{0.442,0.085},1},{{0.462,0.065},1},{},{{0.445,0.005},1},{{0.555,0.005},1},{{0.555,0.045},1},{{0.445,0.045},1},{{0.445,0.005},1},{},{"HorizonBank2",{0,-0.0019797},1},{"HorizonBank2",{0.001,-0.00171442},1},{"HorizonBank2",{0.001732,-0.000989848},1},{"HorizonBank2",{0.002,0},1},{"HorizonBank2",{0.001732,0.000989848},1},{"HorizonBank2",{0.001,0.00171442},1},{"HorizonBank2",{0,0.0019797},1},{"HorizonBank2",{-0.001,0.00171442},1},{"HorizonBank2",{-0.001732,0.000989848},1},{"HorizonBank2",{-0.002,0},1},{"HorizonBank2",{-0.001732,-0.000989848},1},{"HorizonBank2",{-0.001,-0.00171442},1},{"HorizonBank2",{0,-0.0019797},1},{},{"HorizonBank2",{0,-0.0296954},1},{"HorizonBank2",{0.015,-0.0257162},1},{"HorizonBank2",{0.02598,-0.0148477},1},{"HorizonBank2",{0.03,0},1},{},{"HorizonBank2",{-0.03,0},1},{"HorizonBank2",{-0.02598,-0.0148477},1},{"HorizonBank2",{-0.015,-0.0257162},1},{"HorizonBank2",{0,-0.0296954},1},{},{"HorizonBank2",{0.03,1.29803e-09},1},{"HorizonBank2",{0.05,2.16338e-09},1},{},{"HorizonBank2",{-0.03,-3.54114e-10},1},{"HorizonBank2",{-0.05,-5.90191e-10},1},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{},{"SliderVSpeedSource",{-0.015,0.01},1},{"SliderVSpeedSource",{0.0,0.0},1},{"SliderVSpeedSource",{-0.015,-0.01},1},{"SliderVSpeedSource",{-0.015,0.01},1},{},{{0.9,"0.6 - 0.3 * 0.04"},1},{{0.9,"0.6 + 6.3 * 0.04"},1},{},{{0.9,"0.6 + 0 * 0.04"},1},{{0.92,"0.6 + 0 * 0.04"},1},{},{{0.91,"0.6 + 1 * 0.04"},1},{{0.92,"0.6 + 1 * 0.04"},1},{},{{0.91,"0.6 + 2 * 0.04"},1},{{0.92,"0.6 + 2 * 0.04"},1},{},{{0.9,"0.6 + 3 * 0.04"},1},{{0.92,"0.6 + 3 * 0.04"},1},{},{{0.91,"0.6 + 4 * 0.04"},1},{{0.92,"0.6 + 4 * 0.04"},1},{},{{0.91,"0.6 + 5 * 0.04"},1},{{0.92,"0.6 + 5 * 0.04"},1},{},{{0.9,"0.6 + 6 * 0.04"},1},{{0.92,"0.6 + 6 * 0.04"},1},{},{{0.31,0.112},1},{{0.69,0.112},1},{}};
					};
					class Weapons
					{
						type="text";
						source="weapon";
						sourceScale=1;
						align="right";
						scale=0.5;
						pos[]={{0.1,0.93},1};
						right[]={{"0.16 - 0.02",0.93},1};
						down[]={{0.1,0.97},1};
					};
					class Ammo
					{
						type="text";
						source="ammo";
						sourceScale=1;
						align="right";
						scale=0.5;
						pos[]={{0.1,0.88},1};
						right[]={{"0.16 - 0.02",0.88},1};
						down[]={{0.1,0.92},1};
					};
					class cmWeapons
					{
						type="text";
						source="cmweapon";
						sourceScale=1;
						align="left";
						scale=0.5;
						pos[]={{0.9,0.93},1};
						right[]={{0.94,0.93},1};
						down[]={{0.9,0.97},1};
					};
					class cmAmmo
					{
						type="text";
						source="cmammo";
						sourceScale=1;
						align="left";
						scale=0.5;
						pos[]={{0.9,0.88},1};
						right[]={{0.94,0.88},1};
						down[]={{0.9,0.92},1};
					};
				};
			};
		};