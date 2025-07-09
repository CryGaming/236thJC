#include "\GAR\cfgPatches.hpp"
class CfgVehicles
{
	class lsd_heli_laati;
	class 236th_Laat: lsd_heli_laati
	{
		displayname="[236th] LAAT Gunship";
		scope=2;
        faction = "Fac236th";
        editorSubcategory = "Sub236thAir";
		crew = "236th_P1_Pilot";
		ls_hasImpulse=1;
        ls_impulsor_fuelDrain_1=0.000015;
        ls_impulsor_fuelDrain_2=0.000025;
        ls_impulsor_boostSpeed_1=500;
        ls_impulsor_boostSpeed_2=1200;
		canFloat = true;
		weapons[] = {"ls_laat_gun","ls_laat_gun_2","ls_laat_DAR","ls_weapon_CMFlareLauncher"};
		magazines[] = {"200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_he_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","200rnd_laat_apfsds_mag","12rnd_missiles","12rnd_missiles","ls_mag_300rnd_CMFlareChaff_green","ls_mag_300rnd_CMFlareChaff_green","ls_mag_300rnd_CMFlareChaff_green",
		"ls_mag_300rnd_CMFlareChaff_green","ls_mag_300rnd_CMFlareChaff_green","ls_mag_300rnd_CMFlareChaff_green"};
		hiddenselections[] = {"body","body_2","door_1","door_2","door_3","wings","missiles","cockpits","glass","clan","zasleh_l","zasleh_r","zasleh_b"};
		hiddenselectionstextures[] = {
		"GAR\Vehicles\LAATI\data\236th_V1_body1_co.paa",
		"GAR\Vehicles\LAATI\data\236th_V1_body2_co.paa",
		"GAR\Vehicles\LAATI\data\236th_V1_Door1_co.paa",
		"GAR\Vehicles\LAATI\data\236th_V1_Door2_co.paa",
		"GAR\Vehicles\LAATI\data\236th_v1_Door3_co.paa",
		"GAR\Vehicles\LAATI\data\236th_V1_Wings_co.paa",
		"GAR\Vehicles\LAATI\data\236th_LAAT_Missles_co.paa",
		"GAR\Vehicles\LAATI\data\236th_Cockpit_co.paa",
		"lsd_vehicles_heli\laati\data\glass_ca.paa"
		};
		class TextureSources
		{
			class LAATV2
			{
				displayname="236th Default";
				scope=2;
				author="Hound & Penguin";
				textures[]=
				{
				"GAR\Vehicles\LAATI\data\236th_LAAT_body1_co.paa",
				"GAR\Vehicles\LAATI\data\236th_LAAT_Body2_co.paa",
				"GAR\Vehicles\LAATI\data\236th_V1_Door1_co.paa",
				"GAR\Vehicles\LAATI\data\236th_LAAT_door2_co.paa",
				"GAR\Vehicles\LAATI\data\236th_LAAT_door3_co.paa",
				"GAR\Vehicles\LAATI\data\236th_V1_Wings_co.paa",
				"GAR\Vehicles\LAATI\data\236th_LAAT_Missles_co.paa",
				"GAR\Vehicles\LAATI\data\236th_LAAT_cockpit_co.paa",
				"lsd_vehicles_heli\laati\data\glass_ca.paa"
				};
				factions[]=
				{
					"Fac236th"
				};
			};
		};
	};
};