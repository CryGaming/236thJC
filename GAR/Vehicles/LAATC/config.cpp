#include "\GAR\cfgPatches.hpp"
class CfgVehicles
{

class lsd_heli_laatc;

class 236th_Laatc: lsd_heli_laatc
	{
		displayname="[236th] LAAT/C Transport";
		scope=2;
        faction = "Fac236th";
        editorSubcategory = "Sub236thAir";
		crew = "236th_P1_Pilot";
		ls_hasImpulse=1;
        ls_impulsor_fuelDrain_1=0.000015;
        ls_impulsor_fuelDrain_2=0.000025;
        ls_impulsor_boostSpeed_1=500;
        ls_impulsor_boostSpeed_2=1200;
		hiddenselections[] = {"_auxiliary","_cockpit","_glass","_hull","_wings"};
		hiddenSelectionsTextures[] = {
		"GAR\Vehicles\LAATC\data\236th_LAATC_aux_co.paa",
		"GAR\Vehicles\LAATC\data\236th_LAATC_cockpit_co.paa",
		"\lsd_vehicles_heli\laatc\data\glass_ca.paa",
		"GAR\Vehicles\LAATC\data\236th_LAATC_Hull_co.paa",
		"GAR\Vehicles\LAATC\data\236th_LAATC_Wings_co.paa"};
		class TextureSources
		{
			class LAATC1
			{
				displayname="236th LAAT/C";
				scope=2;
				author="Hound";
				textures[]=
				{
				"GAR\Vehicles\LAATC\data\236th_LAATC_aux_co.paa",
				"GAR\Vehicles\LAATC\data\236th_LAATC_cockpit_co.paa",
				"\lsd_vehicles_heli\laatc\data\glass_ca.paa",
				"GAR\Vehicles\LAATC\data\236th_LAATC_Hull_co.paa",
				"GAR\Vehicles\LAATC\data\236th_LAATC_Wings_co.paa"};
				factions[]=
				{
					"Fac236th"
				};
			};
		};
	};
};
