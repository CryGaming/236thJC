#include "\GAR\cfgPatches.hpp"
class CfgVehicles
{
	class 3as_LAAT_Mk2;
	class 3as_LAAT_Mk1;
	class 3as_ATRT;
	class 3as_arc_170_blue;
	class 3as_atte_base;
	class 3as_swoop_Base;
	class 3as_V19_base;
	class 3as_BTLB_Bomber_Redleader;
	class OPTRE_M412_IFV_UNSC;
	class OPTRE_UNSC_Falcon;
	class OPTRE_UNSC_hornet;
	class OPTRE_M12_Fav;
	class OPTRE_M12_LRV;
	class OPTRE_M813_TT;
	class OPTRE_Pelican_unarmed;
	class I_Heli_light_03_dynamicLoadout_F;
	class B_T_UAV_03_dynamicLoadout_F;
	class B_LSV_01_unarmed_F;
	class OPTRE_M494;
	class 3as_LAATC;
	
	/////////////////ARMORED ////////////////////////////
	class 236th_Oryx : OPTRE_M494
	{
		displayname="[236th] Oryx";
        scope=2;
        faction = "Fac236th";
        editorSubcategory = "Sub236thArmor";
        crew = "236th_EOD";
		canFloat = true;
		maxSpeed = 120;
		acceleration = 15;
		typicalCargo[] = {"236th_EOD"};
        hiddenSelections[] = {"camo1","camo2","camo3","camo4","camo5","camo6","camo7","camo8"};
		hiddenSelectionsTextures[] = { "GAR\Vehicles\Oryx\data\236th_Oryx_Armor_co.paa",
		"GAR\Vehicles\Oryx\data\236th_Oryx_Main_Body_co.paa",
		"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
		"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
		"GAR\Vehicles\Oryx\data\236th_Oryx_Turret_co.paa",
		"GAR\Vehicles\Oryx\data\236th_Scorpion_MG_co.paa",
		"\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa"
		};
		class TextureSources
		{
			class 236th_MAIN_ORYX
			{
				displayname="[236th] Base Oryx";
				scope=2;
				author="Hound";
				textures[]=
				{"GAR\Vehicles\Oryx\data\236th_Oryx_Armor_co.paa",
				"GAR\Vehicles\Oryx\data\236th_Oryx_Main_Body_co.paa",
				"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
				"\OPTRE_Vehicles\Oryx\data\texture\oryx_net_ca.paa",
				"GAR\Vehicles\Oryx\data\236th_Oryx_Turret_co.paa",
				"GAR\Vehicles\Oryx\data\236th_Scorpion_MG_co.paa",
				"\OPTRE_Vehicles\Oryx\data\Texture\oryx_decal_ca.paa"
				};
			};
		};
	};
};