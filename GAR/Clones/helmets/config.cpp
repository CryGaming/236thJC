#include "\GAR\cfgPatches.hpp"
class CfgWeapons 
{
	class ls_gar_phase2_helmet;
	class ls_gar_phase2Insulated_helmet;
	class ls_gar_phase1_helmet;
	class SWLB_clone_pilot_P2_helmet;
	class ls_gar_phase2Pilot_helmet;
	class ls_gar_engineer_helmet;
	class SWLB_clone_P1_2_helmet;
	class ls_gar_arc_helmet;
	class HeadgearItem;
	class ls_gar_phase1Arf_helmet;
	class ls_gar_rex_helmet;
	class ItemInfo;
	
	class 236th_P1_Helmet : ls_gar_phase1_helmet
	{
		author = "Hound";
		displayName = "[236th] P1 Helmet";
		hiddenSelections[] = {"camo1","visor","illum"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_P1_Helmet_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
			hiddenSelections[] = {"camo1","visor","illum"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_P1_Helmet_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_P1_EOD_Helmet : ls_gar_phase1_helmet
	{
		author = "Hound";
		displayName = "[236th] P1 EOD Helmet";
		hiddenSelections[] = {"camo1","visor","illum"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_Engi_p1_helmet_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
			hiddenSelections[] = {"camo1","visor","illum"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_Engi_p1_helmet_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_V2P1_Helmet : ls_gar_phase1_helmet
	{
		author = "Hound";
		displayName = "[236th] P1 Senior Helmet";
		hiddenSelections[] = {"camo1","visor","illum"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_v2P1_Helmet_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
			hiddenSelections[] = {"camo1","visor","illum"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_v2P1_Helmet_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_P2_Helmet : ls_gar_phase2_helmet
	{
		author = "Hound";
		displayName = "[236th] P2 Helmet";
		hiddenSelections[] = {"camo1","visor"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_P2_Helmet_co.paa","ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
		ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
			hiddenSelections[] = {"camo1","visor"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_P2_Helmet_co.paa","ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_V2P2_Helmet : ls_gar_phase2_helmet
	{
		author = "Hound";
		displayName = "[236th] P2 Senior Helmet";
		hiddenSelections[] = {"camo1","visor"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_v2P2_Helmet_co.paa","ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
		ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
			hiddenSelections[] = {"camo1","visor"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_v2P2_Helmet_co.paa","ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
class 236th_Pilot_Helmet : ls_gar_phase2Pilot_helmet
	{
		author = "Hound";
		displayName = "[236th] Pilot Helmet";
		hiddenSelections[] = {"camo1","visor"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_Pilot_helmet_co.paa","ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"Integrated_NVG_TI_0_F","rhsusf_ihadss_scope" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "ls_armor_bluefor\helmet\gar\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
			hiddenSelections[] = {"camo1","visor"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_Pilot_helmet_co.paa","ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_Steven_Helmet : ls_gar_phase1_helmet
	{
		author = "Hound";
		displayName = "[236th] Steven's Helmet";
		hiddenSelections[] = {"camo1","visor","illum"};
		hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_Steven_Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_Blue_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
			hiddenSelections[] = {"camo1","visor","illum"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_Steven_Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_Blue_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_p1_GLWORG_Helmet : ls_gar_phase1_helmet
	{
		author = "Hound";
		displayName = "[236th] P1 Helmet (Orange Visor)";
		hiddenSelections[] = {"camo1","visor","illum"};
		hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_P1_Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_Orange.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
			hiddenSelections[] = {"camo1","visor","illum"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_P1_Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_Orange.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_p1_SNR_GLWORG_Helmet : ls_gar_phase1_helmet
	{
		author = "Hound";
		displayName = "[236th] P1 Senior Helmet (Orange Visor)";
		hiddenSelections[] = {"camo1","visor","illum"};
		hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_v2P1_Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_Orange.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
			hiddenSelections[] = {"camo1","visor","illum"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_v2P1_Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_Orange.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_p1_GLWBLU_Helmet : ls_gar_phase1_helmet
	{
		author = "Hound";
		displayName = "[236th] P1 Helmet (Blue Visor)";
		hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelections[] = {"camo1","visor","illum"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_P1_Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_Blue_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
			hiddenSelections[] = {"camo1","visor","illum"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_P1_Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_Blue_Co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_p1_SNR_GLWBLU_Helmet : ls_gar_phase1_helmet
	{
		author = "Hound";
		displayName = "[236th] P1 Senior Helmet (Blue Visor)";
		hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelections[] = {"camo1","visor","illum"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_v2P1_Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_Blue_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
			hiddenSelections[] = {"camo1","visor","illum"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_v2P1_Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_Blue_Co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_p1_GLWWHTE_Helmet : ls_gar_phase1_helmet
	{
		author = "Hound";
		displayName = "[236th] P1 Helmet (White Visor)";
		hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelections[] = {"camo1","visor","illum"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_P1_Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_White_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
			hiddenSelections[] = {"camo1","visor","illum"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_P1_Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_White_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_p1_SNR_GLWWHTE_Helmet : ls_gar_phase1_helmet
	{
		author = "Hound";
		displayName = "[236th] P1 Senior Helmet (White Visor)";
		hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelections[] = {"camo1","visor","illum"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_v2P1_Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_White_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
			hiddenSelections[] = {"camo1","visor","illum"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_v2P1_Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_White_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_Test_Helmet : ls_gar_phase1_helmet
	{
		author = "Hound";
		displayName = "[236th] Test Helmet (Hud Enabled)";
		optreVarietys[] = {"236th_Test_Helmet","236th_Test_Helmet","_broken"};
		optreHUDStyle = "ODST_1";
		hiddenSelections[] = {"camo1","visor","illum"};
		hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_P1_Helmet_co.paa","GAR\Clones\helmets\data\236th_MemeVisor_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
			hiddenSelections[] = {"camo1","visor","illum"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_P1_Helmet_co.paa","GAR\Clones\helmets\data\236th_MemeVisor_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_P1_Medic_Helmet : ls_gar_phase1_helmet
	{
		author = "Hound";
		displayName = "[236th] P1 Medic Helmet";
		hiddenSelections[] = {"camo1","visor","illum"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_P1_Medic_Helmet_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
			hiddenSelections[] = {"camo1","visor","illum"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_P1_Medic_Helmet_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_p1_Medic_GLWORG_Helmet : ls_gar_phase1_helmet
	{
		author = "Hound";
		displayName = "[236th] P1 Medic Helmet (Orange Visor)";
		hiddenSelections[] = {"camo1","visor","illum"};
		hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_P1_Medic_Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_Orange.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
			hiddenSelections[] = {"camo1","visor","illum"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_P1_Medic_Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_Orange.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_p1_Medic_GLWWHTE_Helmet : ls_gar_phase1_helmet
	{
		author = "Hound";
		displayName = "[236th] P1 Medic Helmet (White Visor)";
		hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelections[] = {"camo1","visor","illum"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_P1_Medic_Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_White_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
			hiddenSelections[] = {"camo1","visor","illum"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_P1_Medic_Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_White_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_P2_Medic_Helmet : ls_gar_phase2_helmet
	{
		author = "Hound";
		displayName = "[236th] P2 Medic Helmet";
		hiddenSelections[] = {"camo1","visor"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_P2_Medic_co.paa","ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
		ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
			hiddenSelections[] = {"camo1","visor"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_P2_Medic_co.paa","ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_P1_Medic_Helmet_blue : ls_gar_phase1_helmet
	{
		author = "Hound";
		displayName = "[236th] P1 Medic Helmet (Blue visor)";
		hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelections[] = {"camo1","visor","illum"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_P1_Medic_Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_Blue_Co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
			hiddenSelections[] = {"camo1","visor","illum"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_P1_Medic_Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_Blue_Co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_EOD_Helmet : ls_gar_engineer_helmet
	{
		author = "Hound";
		displayName = "[236th] EOD Helmet";
		hiddenSelections[] = {"camo1","illum","visor"};
		hiddenSelectionsTextures[]=
		{"GAR\Clones\helmets\data\236th_Engi_Helmet_co.paa","ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa","ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
		"Integrated_NVG_TI_0_F"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\engineer\ls_gar_engineer_helmet.p3d";
			hiddenSelections[] = {"camo1","illum","visor"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_Engi_Helmet_co.paa","ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa","ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_Penguin_Helmet : ls_gar_arc_helmet
	{
		author = "Hound";
		displayName = "[236th] Penguin's Helmet";
		hiddenSelections[] = {"camo1","illum","visor"};
		hiddenSelectionsMaterials[] = {"", "","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[]=
		{"GAR\Clones\helmets\data\236th_Penguin_Helmet_co.paa","ls_armor_bluefor\helmet\gar\arc\data\visor_co.paa","GAR\Clones\helmets\data\236th_Penguin_visor_co.paa"};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
		"Integrated_NVG_TI_0_F"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\arc\ls_gar_arc_helmet.p3d";
			hiddenSelections[] = {"camo1","illum","visor"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_Penguin_Helmet_co.paa","ls_armor_bluefor\helmet\gar\arc\data\visor_co.paa","GAR\Clones\helmets\data\236th_Penguin_visor_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_Gooze_Helmet : ls_gar_arc_helmet
	{
		author = "Hound";
		displayName = "[236th] Gooze's Helmet";
		hiddenSelections[] = {"camo1","illum","visor"};
		hiddenSelectionsMaterials[] = {"", "","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[]=
		{"GAR\Clones\helmets\data\236th_Gooze_Helmet_co.paa","ls_armor_bluefor\helmet\gar\arc\data\visor_co.paa","GAR\Clones\helmets\data\236th_Gooze_visor_co.paa"};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
		"Integrated_NVG_TI_0_F"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\arc\ls_gar_arc_helmet.p3d";
			hiddenSelections[] = {"camo1","illum","visor"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_Gooze_Helmet_co.paa","ls_armor_bluefor\helmet\gar\arc\data\visor_co.paa","GAR\Clones\helmets\data\236th_Gooze_visor_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_Hall_Helmet : ls_gar_arc_helmet
	{
		author = "Hound";
		displayName = "[236th] Hall's Helmet";
		hiddenSelections[] = {"camo1","illum","visor"};
		hiddenSelectionsMaterials[] = {"", "","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[]=
		{"GAR\Clones\helmets\data\236th_Hall_Helmet_co.paa","ls_armor_bluefor\helmet\gar\arc\data\visor_co.paa","GAR\Clones\helmets\data\236th_Zaino_visor_co.paa"};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
		"Integrated_NVG_TI_0_F"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\arc\ls_gar_arc_helmet.p3d";
			hiddenSelections[] = {"camo1","illum","visor"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_Hall_Helmet_co.paa","ls_armor_bluefor\helmet\gar\arc\data\visor_co.paa","GAR\Clones\helmets\data\236th_Zaino_visor_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_Tarfu_Helmet : ls_gar_arc_helmet
	{
		author = "Hound";
		displayName = "[236th] Tarfu's Helmet";
		hiddenSelections[] = {"camo1","illum","visor"};
		hiddenSelectionsMaterials[] = {"", "","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[]=
		{"GAR\Clones\helmets\data\236th_Tarfu_Helmet_co.paa","ls_armor_bluefor\helmet\gar\arc\data\visor_co.paa","GAR\Clones\helmets\data\236th_Tarfu_visor_co.paa"};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
		"Integrated_NVG_TI_0_F"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\arc\ls_gar_arc_helmet.p3d";
			hiddenSelections[] = {"camo1","illum","visor"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_Tarfu_Helmet_co.paa","ls_armor_bluefor\helmet\gar\arc\data\visor_co.paa","GAR\Clones\helmets\data\236th_Tarfu_visor_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_ARC_Helmet : ls_gar_arc_helmet
	{
		author = "Hound";
		displayName = "[236th] ARC Helmet";
		hiddenSelections[] = {"camo1","illum","visor"};
		hiddenSelectionsMaterials[] = {"", "","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[]=
		{"GAR\Clones\helmets\data\236th_arc_helmet_co.paa","ls_armor_bluefor\helmet\gar\arc\data\visor_co.paa",,"ls_armor_bluefor\helmet\gar\arc\data\visor_co.paa",};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
		"Integrated_NVG_TI_0_F"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\arc\ls_gar_arc_helmet.p3d";
			hiddenSelections[] = {"camo1","illum","visor"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_arc_helmet_co.paa","ls_armor_bluefor\helmet\gar\arc\data\visor_co.paa","ls_armor_bluefor\helmet\gar\arc\data\visor_co.paa",};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
class 236th_Memer_Helmet : ls_gar_phase2Pilot_helmet
	{
		author = "Hound";
		displayName = "[236th] Memer's Helmet";
		hiddenSelections[] = {"camo1","visor"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_Memer_helmet_co.paa","ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"Integrated_NVG_TI_0_F","rhsusf_ihadss_scope"
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "ls_armor_bluefor\helmet\gar\phase2Pilot\ls_gar_phase2Pilot_helmet.p3d";
			hiddenSelections[] = {"camo1","visor"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_Memer_helmet_co.paa","ls_armor_bluefor\helmet\gar\phase2Pilot\data\visor_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
class 236th_Grimdark_Helmet : ls_gar_phase2Insulated_helmet
	{
		author = "Hound";
		displayName = "[236th] Grimdarks's Helmet";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_GrimDark_helmet_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"Integrated_NVG_TI_0_F" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "ls_armor_bluefor\helmet\gar\phase2Insulated\ls_gar_phase2Insulated_helmet.p3d";
			hiddenSelections[] = {"Camo1"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_GrimDark_helmet_co.paa" };
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_P1_Hound_Helmet : ls_gar_phase1_helmet
	{
		author = "Hound";
		displayName = "[236th] Hound's Helmet";
		hiddenSelections[] = {"camo1","visor","illum"};
		hiddenSelectionsMaterials[] = {"","\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_Hound_p1Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_Green_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
			hiddenSelections[] = {"camo1","visor","illum"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_Hound_p1Helmet_co.paa","GAR\Clones\helmets\data\236th_Visor_Green_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
class 236th_Lucky_Helmet : ls_gar_rex_helmet
	{
		author = "Hound";
		displayName = "[236th] Lucky's Helmet";
		hiddenSelections[] = {"camo1","visor"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_Lucky_Helmet_co.paa", "GAR\Clones\helmets\data\236th_Lucky_visor.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\rex\ls_gar_rex_helmet.p3d";
			hiddenSelections[] = {"camo1","visor"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_Lucky_Helmet_co.paa", "GAR\Clones\helmets\data\236th_Lucky_visor.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
	class 236th_Chillie_Helmet : ls_gar_phase1Arf_helmet
	{
		author = "Hound";
		displayName = "[236th] Chillie's Helmet";
		hiddenSelections[] = {"camo1","camo2","visor"};
		hiddenSelectionsTextures[] = {
			{"GAR\Clones\helmets\data\236th_Chillie_Helmet_co.paa","","GAR\Clones\helmets\data\236th_Arf_Visor_co.paa"};
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\arf\ls_gar_arf_helmet.p3d";
			hiddenSelections[] = {"camo1","camo2","visor"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_Chillie_Helmet_co.paa","","GAR\Clones\helmets\data\236th_Arf_Visor_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
class 236th_CAP_p1_Helmet : ls_gar_phase1_helmet
	{
		author = "Hound";
		displayName = "[236th] Cap's Helmet";
		hiddenSelections[] = {"camo1","visor","illum"};
		hiddenSelectionsTextures[] = {
			"GAR\Clones\helmets\data\236th_Cap_P1_Helmet_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
		};
		ace_hearing_lowerVolume = 0.10; //this makes you not deaf
        ace_hearing_protection = 0.80;
		subItems[]= //this adds in NVG so your pilots aren't blind (or ARF)
		{
			"" 
		};
		class ItemInfo: HeadgearItem
		{
			uniformModel = "\ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
			hiddenSelections[] = {"camo1","visor","illum"};
			hiddenSelectionsTextures[]=
			{"GAR\Clones\helmets\data\236th_Cap_P1_Helmet_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa","ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor=20;//16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor=20;
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
			};
		};
	}
};