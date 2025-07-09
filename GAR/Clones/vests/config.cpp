#include "\GAR\cfgPatches.hpp"
class CfgWeapons 
{
	class ls_gar_airborneOfficer_vest;
	class ls_gar_heavy_vest;
	class lsd_gar_clone_vest;
	class VestItem;
	class Vest_Camo_Base;
	class SWLB_clone_cfr_armor;
	class SWLB_clone_recon_nco_armor;
	class SWLB_clone_commander_armor;
	class SWLB_clone_medic_armor;
	class SWLB_clone_arc_armor;
	class SWLB_CEE_Hazard_Vest;
	
	class 236th_Officer_Vest: ls_gar_airborneOfficer_vest
	{
		displayName = "[236th] Airborne Officer Vest";
		model = "ls_armor_bluefor\vest\gar\airborneOfficer\ls_gar_airborneOfficer_vest.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		hiddenSelections[] = {"ammo","camo1","camo2","camo3","pauldron"};
		hiddenSelectionsTextures[] = {"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa",
		"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa","swlb_core\data\common_textures\accessories\officer_accessories_co.paa",
		"swlb_core\data\common_textures\accessories\officer_accessories_co.paa","swlb_core\data\common_textures\accessories\officer_accessories_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "ls_armor_bluefor\vest\gar\airborneOfficer\ls_gar_airborneOfficer_vest.p3d";
			containerClass = "Supply350";
			hiddenSelections[] = {"ammo","camo1","camo2","camo3","pauldron"};
			mass = 80;
			class HitpointsProtectionInfo
            {
                class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20; //16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
            };
		};
	};
	class 236th_Hidden_Vest: Vest_Camo_Base
    {
        scope = 2;
        displayName="[236th] Basic Armor";
        model = "\SWLB_clones\SWLB_clone_basic_armor.p3d";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_uniform_ca.paa";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[]={};
        class ItemInfo: VestItem
        {
            uniformModel = "\SWLB_clones\SWLB_clone_basic_armor.p3d";
            containerClass= "Supply250";
            mass=80;
            hiddenSelections[] = {};
            class HitpointsProtectionInfo
            {
                class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20; //16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
            };
        };
    };
	class 236th_Pilot_Vest: SWLB_clone_cfr_armor
	{
		author = "Hound";
		displayName = "[236th] Pilot Vest";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_cfr_armor_ca.paa";
		model = "\SWLB_clones\SWLB_clone_cfr_armor.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"\SWLB_clones\data\heavy_accessories_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_cfr_armor.p3d";
			containerClass = "Supply350";
			hiddenSelections[] = {"camo1"};
			mass = 80;
			class HitpointsProtectionInfo
            {
                class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20; //16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
            };
		};
	};
	class 236th_recon_Vest: SWLB_clone_recon_nco_armor
	{
		author = "Hound";
		displayName = "[236th] Recon Vest";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_recon_armor_ca.paa";
		model = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
		hiddenSelections[] = {"camo1","camo2","holster","pauldron"};
		hiddenSelectionsTextures[] = {"\SWLB_clones\data\heavy_accessories_co.paa","","\SWLB_clones\data\heavy_accessories_co.paa","\SWLB_clones\data\heavy_accessories_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_recon_armor.p3d";
			containerClass = "Supply400";
			hiddenSelections[] = {"camo1","camo2","holster","pauldron"};
			mass = 80;
			class HitpointsProtectionInfo
            {
                class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20; //16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
            };
		};
	};
	class 236th_Commander_Vest: SWLB_clone_commander_armor
	{
		author = "Hound";
		displayName = "[236th] commander vest";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_commander_armor_ca.paa";
		model = "\SWLB_clones\SWLB_clone_commander_armor.p3d";
		hiddenSelections[] = {"camo1","rank"};
		hiddenSelectionsTextures[] = {"\SWLB_clones\data\officer_accessories_co.paa",""};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_commander_armor.p3d";
			containerClass = "Supply400";
			hiddenSelections[] = {"camo1","rank"};
			mass = 80;
			class HitpointsProtectionInfo
            {
                class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20; //16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
            };
		};
	};
	class 236th_Medic_Vest:SWLB_clone_medic_armor
	{
		displayName = "[236th] medic vest";
		picture = "\SWLB_clones\data\ui\icon_SWLB_clone_medic_armor_ca.paa";
		model = "\SWLB_clones\SWLB_clone_medic_armor.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"GAR\Clones\vests\data\236th_Medic_heavy_accessories_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_medic_armor.p3d";
			containerClass = "Supply450";
			hiddenSelections[] = {"camo1"};
			mass = 80;
		    class HitpointsProtectionInfo
            {
                class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20; //16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
            };
		};
	};
	class 236th_Holster_Vest: lsd_gar_clone_vest
	{
		displayName = "[236th] Holster";
		model = "ls_armor_bluefor\vest\gar\heavy\ls_gar_heavy_vest.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		hiddenSelections[] = {"ammo","camo1","camo2","camo3","pauldron"};
		hiddenSelectionsTextures[] = {"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa","swlb_core\data\common_textures\accessories\heavy_accessories_co.paa",
		"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa",
		"swlb_core\data\common_textures\accessories\light_accessories_co.paa","swlb_core\data\common_textures\accessories\heavy_accessories_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "ls_armor_bluefor\vest\gar\heavy\ls_gar_heavy_vest.p3d";
			containerClass = "Supply350";
			hiddenSelections[] = {"ammo","camo1","camo2","camo3","pauldron"};
			mass = 80;
			class HitpointsProtectionInfo
            {
                class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20; //16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
            };
		};
	};
	class 236th_Heavy_vest: lsd_gar_clone_vest
	{
		displayName = "[236th] Heavy Vest";
		model = "ls_armor_bluefor\vest\gar\heavy\ls_gar_heavy_vest.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		hiddenSelections[] = {"ammo","camo1","camo2","camo3","pauldron"};
		hiddenSelectionsTextures[] = {"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa","swlb_core\data\common_textures\accessories\heavy_accessories_co.paa",
		"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa",
		"swlb_core\data\common_textures\accessories\light_accessories_co.paa","swlb_core\data\common_textures\accessories\heavy_accessories_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "ls_armor_bluefor\vest\gar\heavy\ls_gar_heavy_vest.p3d";
			containerClass = "Supply400";
			hiddenSelections[] = {"ammo","camo1","camo2","camo3","pauldron"};
			mass = 80;
			class HitpointsProtectionInfo
            {
                class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20; //16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
            };
		};
	};
	class 236th_Penguin_vest: SWLB_clone_arc_armor
	{
		displayName = "[236th] Penguin Vest";
		model = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"GAR\Clones\vests\data\236th_Penguin_Arc_Accessories_co.paa","GAR\Clones\vests\data\236th_Penguin_Officer_Accessories_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
			containerClass = "Supply400";
			hiddenSelections[] = {"camo1","camo2"};
			mass = 80;
			class HitpointsProtectionInfo
            {
                class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20; //16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
            };
		};
	};
	class 236th_Gooze_vest: SWLB_clone_arc_armor
	{
		displayName = "[236th] Gooze Vest";
		model = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"GAR\Clones\vests\data\236th_Gooze_Arc_Accessories_co.paa","GAR\Clones\vests\data\236th_Gooze_Officer_Accessories_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
			containerClass = "Supply400";
			hiddenSelections[] = {"camo1","camo2"};
			mass = 80;
			class HitpointsProtectionInfo
            {
                class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20; //16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
            };
		};
	};
	class 236th_Tarfu_vest: SWLB_clone_arc_armor
	{
		displayName = "[236th] Tarfu Vest";
		model = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"GAR\Clones\vests\data\236th_Tarfu_Arc_Accessories_co.paa","GAR\Clones\vests\data\236th_Tarfu_Officer_Accessories_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
			containerClass = "Supply400";
			hiddenSelections[] = {"camo1","camo2"};
			mass = 80;
			class HitpointsProtectionInfo
            {
                class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20; //16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
            };
		};
	};
	class 236th_Hall_vest: SWLB_clone_arc_armor
	{
		displayName = "[236th] Hall's Vest";
		model = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"GAR\Clones\vests\data\236th_Hall_Arc_Accessories_co.paa","\SWLB_clones\data\officer_accessories_black_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_clones\SWLB_clone_arc_armor.p3d";
			containerClass = "Supply400";
			hiddenSelections[] = {"camo1","camo2"};
			mass = 80;
			class HitpointsProtectionInfo
            {
                class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20; //16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
            };
		};
	};
	class 236th_Flame_Trooper_vest: SWLB_CEE_Hazard_Vest
	{
		displayName = "[236th] Hazard Vest";
		model = "\SWLB_CEE\data\SWLB_CEE_Hazard_Vest.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"SWLB_clones\data\light_accessories_co.paa","SWLB_clones\data\officer_accessories_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\SWLB_CEE\data\SWLB_CEE_Hazard_Vest.p3d";
			containerClass = "Supply400";
			hiddenSelections[] = {"camo1","camo2"};
			mass = 80;
			class HitpointsProtectionInfo
            {
                class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20; //16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
            };
		};
	};
class 236th_Hound_Vest: ls_gar_airborneOfficer_vest
	{
		displayName = "[236th] Hound's Vest";
		model = "ls_armor_bluefor\vest\gar\airborneOfficer\ls_gar_airborneOfficer_vest.p3d";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		hiddenSelections[] = {"ammo","camo1","camo2","camo3","pauldron"};
		hiddenSelectionsTextures[] = {"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa",
		"swlb_core\data\common_textures\accessories\heavy_accessories_co.paa","GAR\Clones\vests\data\236th_Hound_Officer_Accessories_co.paa",
		"GAR\Clones\vests\data\236th_Hound_Officer_Accessories_co.paa","GAR\Clones\vests\data\236th_Hound_Officer_Accessories_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "ls_armor_bluefor\vest\gar\airborneOfficer\ls_gar_airborneOfficer_vest.p3d";
			containerClass = "Supply400";
			hiddenSelections[] = {"ammo","camo1","camo2","camo3","pauldron"};
			mass = 80;
			class HitpointsProtectionInfo
            {
                class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 20; //16 is a class 4 armour protection. For anything under, minus/add 4 to go through each class level
					passThrough = 0.2; //chance the round goes through the armour anyway
					explosiveShielding= 12; 
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 20; 
					passThrough = 0.2; 
					explosiveShielding= 12; 
				};
            };
		};
	};
};