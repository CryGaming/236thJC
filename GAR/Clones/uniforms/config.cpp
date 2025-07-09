#include "\GAR\cfgPatches.hpp"
class CfgWeapons 
{
	//Uniform overrides//
	class SWLB_clone_uniform;
	class lsd_gar_phase2Insulated_uniform;
	class JLTS_CloneArmor;
	class JLTS_CloneArmorMC;
	class JLTS_CloneArmorRecon;
	class JLTS_CloneArmorGrenadier;
	class JLTS_CloneArmorSupport;
	class UniformItem;
	class Default;
	class ItemInfo;
	class lsd_gar_bodyGlove_uniform;
	class SWLB_Clone_Commando_uniform_k1;

//////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	//uniforms//
class 236th_Trooper_p1Base_Uniform: SWLB_clone_uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[236th]P1 Trooper Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "236th_P1_Trooper"; //class name of unit, defined in CfgVehicles
			containerClass="Supply400";
			mass=40;
		};
	};
class 236th_Trooper_V2p1Base_Uniform: SWLB_clone_uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[236th]Senior P1 Trooper Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "236th_V2P1_Trooper"; //class name of unit, defined in CfgVehicles
			containerClass="Supply400";
			mass=40;
		};
	};
class 236th_Trooper_p2Base_Uniform: SWLB_clone_uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[236th]P2 Trooper Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "236th_P2_Trooper"; //class name of unit, defined in CfgVehicles
			containerClass="Supply400";
			mass=40;
		};
	};
class 236th_Trooper_V2p2Base_Uniform: SWLB_clone_uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[236th]P2 Senior Trooper Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "236th_V2P2_Trooper"; //class name of unit, defined in CfgVehicles
			containerClass="Supply400";
			mass=40;
		};
	};
class 236th_Trooper_Pilot_Uniform: SWLB_clone_uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[236th] Pilot Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "236th_P1_Pilot"; //class name of unit, defined in CfgVehicles
			containerClass="Supply400";
			mass=40;
		};
	};
class 236th_Steven_uniform: SWLB_clone_uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[236th] Steven's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "236th_Steven_P1"; //class name of unit, defined in CfgVehicles
			containerClass="Supply400";
			mass=40;
		};
	};
class 236th_Trooper_p1Medic_Uniform: SWLB_clone_uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[236th]P1 Medic Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "236th_Medic_p1"; //class name of unit, defined in CfgVehicles
			containerClass="Supply400";
			mass=40;
		};
	};
class 236th_Trooper_p2Medic_Uniform: SWLB_clone_uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[236th]P2 Medic Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "236th_Medic_p2"; //class name of unit, defined in CfgVehicles
			containerClass="Supply400";
			mass=40;
		};
	};
class 236th_Trooper_p1EOD_Uniform: SWLB_clone_uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[236th]P1 EOD Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "236th_EOD"; //class name of unit, defined in CfgVehicles
			containerClass="Supply400";
			mass=40;
		};
	};
class 236th_Penguin_Uniform: SWLB_clone_uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[236th]Penguin's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "236th_Penguin"; //class name of unit, defined in CfgVehicles
			containerClass="Supply400";
			mass=40;
		};
	};
class 236th_Gooze_Uniform: SWLB_clone_uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[236th]Gooze's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "236th_Gooze"; //class name of unit, defined in CfgVehicles
			containerClass="Supply400";
			mass=40;
		};
	};
class 236th_Hall_Uniform: SWLB_clone_uniform
	{
		author="Hound";
		scopecurator=2;
		scopeArsenal = 0;
		displayName="[236th] Hall's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "236th_Hall"; //class name of unit, defined in CfgVehicles
			containerClass="Supply400";
			mass=40;
		};
	};
class 236th_Tarfu_Uniform: SWLB_clone_uniform
	{
		author="Hound";
		scope = 2;
		scopeArsenal = 2;
		scopecurator=2;
		displayName="[236th]Tarfu's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "236th_Tarfu"; //class name of unit, defined in CfgVehicles
			containerClass="Supply400";
			mass=40;
		};
	};
class 236th_Penguin_undersuit: lsd_gar_bodyGlove_uniform
	{
		scope = 2;
		displayName = "[236th] Penguin Undersuit";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: ItemInfo
		{
			uniformModel = "-";
			uniformClass = "236th_Penguin_bodyGlove_base";
			containerClass = "Supply10";
			mass = 1;
		};
	};
class 236th_Grimdark_uniform : lsd_gar_phase2Insulated_uniform
	{
		author="Hound";
		scopecurator=2;
		scope = 2;
		displayName="[236th]Grimdark's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
			uniformClass = "236th_GrimDark"; //class name of unit, defined in CfgVehicles
			containerClass="Supply400";
			mass=40;
		};
	};
class 236th_Memer_Uniform: SWLB_clone_uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[236th]Memer's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "236th_Memer"; //class name of unit, defined in CfgVehicles
			containerClass="Supply400";
			mass=40;
		};
	};
class 236th_Hound_Uniform: SWLB_clone_uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[236th]Hound's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "236th_Hound"; //class name of unit, defined in CfgVehicles
			containerClass="Supply400";
			mass=40;
		};
	};
class 236th_Cap_Uniform: SWLB_clone_uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[236th]Cap's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "236th_Cap"; //class name of unit, defined in CfgVehicles
			containerClass="Supply450";
			mass=40;
		};
	};
class 236th_Lucky_Uniform: SWLB_clone_uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[236th]Lucky's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "236th_Lucky"; //class name of unit, defined in CfgVehicles
			containerClass="Supply400";
			mass=40;
		};
	};
class 236th_Chillie_Uniform: SWLB_clone_uniform
	{
		author="Hound";
		scopecurator=2;
		displayName="[236th]Chillie's Uniform";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "236th_Chille"; //class name of unit, defined in CfgVehicles
			containerClass="Supply400";
			mass=40;
		};
	};
};
class CfgVehicles
{
	class SWLB_clone_base_P2;
	class SWLB_clone_base_P1;
	class SWLB_clone_pilot_base_P2;
	class SWLB_clone_arc_base_P2;
	class lsd_bodyGlove_base;
	class lsd_gar_phase2_base;
	class lsd_gar_phase2Insulated_base;
	
	class 236th_P1_Trooper: SWLB_clone_base_P1    {
        author = "Hound";
        scopecurator = 2;
        displayName = "[236th] P1 Trooper";
        faction = "Fac236th";
        editorSubcategory = "Sub236thGround";
        uniformclass = "236th_Trooper_p1Base_Uniform";
		backpack = "236th_JumpPack_Stan";
        hiddenSelectionsTextures[] = {"GAR\Clones\uniforms\data\236th_Trooper_upper_co.paa","GAR\Clones\uniforms\data\236th_Trooper_lower_co.paa"};
        linkedItems[] = {"","236th_P1_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass",};
        respawnLinkedItems[] = {"","236th_P1_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass"};
    };
	class 236th_V2P1_Trooper: SWLB_clone_base_P1    {
        author = "Hound";
        scopecurator = 2;
        displayName = "[236th] P1 Senior Trooper";
        faction = "Fac236th";
        editorSubcategory = "Sub236thGround";
        uniformclass = "236th_Trooper_V2p1Base_Uniform";
		backpack = "236th_JumpPack_Stan";
        hiddenSelectionsTextures[] = {"GAR\Clones\uniforms\data\236th_v2Trooper_upper_co.paa","GAR\Clones\uniforms\data\236th_v2Trooper_lower_co.paa"};
        linkedItems[] = {"","236th_V2P1_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass",};
        respawnLinkedItems[] = {"","236th_V2P1_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass"};
    };
	class 236th_P2_Trooper: SWLB_clone_base_P2    {
        author = "Hound";
        scopecurator = 2;
        displayName = "[236th] P2 Trooper ";
        faction = "Fac236th";
        editorSubcategory = "Sub236thGround";
        uniformclass = "236th_Trooper_p2Base_Uniform";
		backpack = "236th_JumpPack_Stan";
        hiddenSelectionsTextures[] = {"GAR\Clones\uniforms\data\236th_Trooper_upper_co.paa","GAR\Clones\uniforms\data\236th_Trooper_lower_co.paa"};
        linkedItems[] = {"","236th_P2_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass",};
        respawnLinkedItems[] = {"","236th_P2_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass"};
    };
	class 236th_V2P2_Trooper: SWLB_clone_base_P2    {
        author = "Hound";
        scopecurator = 2;
        displayName = "[236th] P2 Senior Trooper ";
        faction = "Fac236th";
        editorSubcategory = "Sub236thGround";
        uniformclass = "236th_Trooper_V2p2Base_Uniform";
		backpack = "236th_JumpPack_Stan";
        hiddenSelectionsTextures[] = {"GAR\Clones\uniforms\data\236th_v2Trooper_upper_co.paa","GAR\Clones\uniforms\data\236th_v2Trooper_lower_co.paa"};
        linkedItems[] = {"","236th_V2P2_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass",};
        respawnLinkedItems[] = {"","236th_V2P2_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass"};
    };
	class 236th_P1_Pilot: SWLB_clone_pilot_base_P2    {
        author = "Hound";
        scopecurator = 2;
        displayName = "[236th] Pilot";
        faction = "Fac236th";
        editorSubcategory = "Sub236thGround";
        uniformclass = "236th_Trooper_pilot_Uniform";
		backpack = "236th_JumpPack_RTO";
        hiddenSelectionsTextures[] = {"GAR\Clones\uniforms\data\236th_Pilot_Upper_co.paa","GAR\Clones\uniforms\data\236th_Pilot_Lower_co.paa"};
        linkedItems[] = {"","236th_Pilot_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass",};
        respawnLinkedItems[] = {"","236th_Pilot_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass"};
    };
	class 236th_Steven_P1: SWLB_clone_base_P1    {
        author = "Hound";
        scopecurator = 2;
        displayName = "[236th] Steven";
        faction = "Fac236th";
        editorSubcategory = "Sub236thCustom";
        uniformclass = "236th_Steven_uniform";
		backpack = "236th_JumpPack_Stan";
        hiddenSelectionsTextures[] = {"GAR\Clones\uniforms\data\236th_Steven_Upper_co.paa","GAR\Clones\uniforms\data\236th_Steven_lower_co.paa"};
        linkedItems[] = {"","236th_Steven_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass",};
        respawnLinkedItems[] = {"","236th_Steven_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass"};
    };
	class 236th_Medic_p1: SWLB_clone_base_P1    {
        author = "Hound";
        scopecurator = 2;
        displayName = "[236th] Phase 1 Medic";
        faction = "Fac236th";
        editorSubcategory = "Sub236thGround";
		attendant = true;
        uniformclass = "236th_Trooper_p1Medic_Uniform";
		backpack = "236th_JumpPack_Medic";
        hiddenSelectionsTextures[] = {"GAR\Clones\uniforms\data\236th_Medic_upper_co.paa","GAR\Clones\uniforms\data\236th_Medic_lower_co.paa"};
        linkedItems[] = {"","236th_P1_Medic_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass",};
        respawnLinkedItems[] = {"","236th_P1_Medic_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass"};
    };
	class 236th_Medic_p2: SWLB_clone_base_P2    {
        author = "Hound";
        scopecurator = 2;
        displayName = "[236th] Phase 2 Medic";
        faction = "Fac236th";
        editorSubcategory = "Sub236thGround";
		attendant = true;
        uniformclass = "236th_Trooper_p2Medic_Uniform";
		backpack = "236th_JumpPack_Medic";
        hiddenSelectionsTextures[] = {"GAR\Clones\uniforms\data\236th_Medic_upper_co.paa","GAR\Clones\uniforms\data\236th_Medic_lower_co.paa"};
        linkedItems[] = {"","236th_P2_Medic_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass",};
        respawnLinkedItems[] = {"","236th_P2_Medic_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass"};
    };
	class 236th_EOD: SWLB_clone_base_P1    {
        author = "Hound";
        scopecurator = 2;
        displayName = "[236th] Phase 1 EOD Trooper";
        faction = "Fac236th";
        editorSubcategory = "Sub236thGround";
        uniformclass = "236th_Trooper_p1EOD_Uniform";
		engineer = true;
		canDeactivateMines = true;
		backpack = "236th_JumpPack_Stan";
        hiddenSelectionsTextures[] = {"GAR\Clones\uniforms\data\236th_Engi_upper_co.paa","GAR\Clones\uniforms\data\236th_Engi_Lower_co.paa"};
        linkedItems[] = {"","236th_EOD_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass",};
        respawnLinkedItems[] = {"","236th_EOD_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass"};
    };
	class 236th_Penguin: lsd_gar_phase2_base    {
        author = "Hound";
        scopecurator = 2;
		scope=2;
        displayName = "[236th] Pengin";
        faction = "Fac236th";
        editorSubcategory = "Sub236thCustom";
        uniformclass = "236th_Penguin_Uniform";
		attendant = true;
		engineer = true;
		canDeactivateMines = true;
		nakedUniform = "236th_Penguin_undersuit";
		backpack = "236th_JumpPack_Stan";
		hiddenSelections[] = {"camo1","camo2","undersuit","insignia"};
        hiddenSelectionsTextures[] = {"GAR\Clones\uniforms\data\236th_Penguin_upper_co.paa","GAR\Clones\uniforms\data\236th_Penguin_lower_co.paa","GAR\Clones\uniforms\data\236th_Penguin_bodyglove_co.paa"};
        linkedItems[] = {"236th_Penguin_Helmet","236th_Penguin_vest","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass",};
        respawnLinkedItems[] = {"236th_Penguin_Helmet","236th_Penguin_vest","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass"};
    };
	class 236th_Memer: SWLB_clone_pilot_base_P2    {
        author = "Hound";
        scopecurator = 2;
        displayName = "[236th] Memer";
        faction = "Fac236th";
        editorSubcategory = "Sub236thCustom";
        uniformclass = "236th_Memer_Uniform";
		engineer = true;
		backpack = "236th_JumpPack_RTO";
        hiddenSelectionsTextures[] = {"GAR\Clones\uniforms\data\236th_Memer_upper_co.paa","GAR\Clones\uniforms\data\236th_Memer_lower_co.paa"};
        linkedItems[] = {"","236th_Memer_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass",};
        respawnLinkedItems[] = {"","236th_Memer_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass"};
    };
	class 236th_Hall_Trooper: SWLB_clone_arc_base_P2    {
        author = "Hound";
        scopecurator = 2;
        displayName = "[236th] Hall";
        faction = "Fac236th";
        editorSubcategory = "Sub236thCustom";
        uniformclass = "236th_Hall_Uniform";
		backpack = "236th_JumpPack_Stan";
        hiddenSelectionsTextures[] = {"GAR\Clones\uniforms\data\236th_v2Trooper_upper_co.paa","GAR\Clones\uniforms\data\236th_v2Trooper_lower_co.paa"};
        linkedItems[] = {"236th_Hall_Helmet","236th_Hall_vest","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass",};
        respawnLinkedItems[] = {"236th_Hall_Helmet","236th_Hall_vest","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass"};
    };
	class 236th_Gooze: lsd_gar_phase2_base    {
        author = "Hound";
        scopecurator = 2;
		scope=2;
        displayName = "[236th]Gooze";
        faction = "Fac236th";
        editorSubcategory = "Sub236thCustom";
        uniformclass = "236th_Gooze_Uniform";
		attendant = true;
		engineer = true;
		canDeactivateMines = true;
		backpack = "236th_JumpPack_Stan";
		hiddenSelections[] = {"camo1","camo2","undersuit","insignia"};
        hiddenSelectionsTextures[] = {"GAR\Clones\uniforms\data\236th_Gooze_upper_co.paa","GAR\Clones\uniforms\data\236th_Gooze_lower_co.paa","GAR\Clones\uniforms\data\236th_Gooze_bodyglove_co.paa"};
        linkedItems[] = {"236th_Gooze_Helmet","236th_Gooze_vest","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass",};
        respawnLinkedItems[] = {"236th_Gooze_Helmet","236th_Gooze_vest","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass"};
    };
	class 236th_Tarfu: SWLB_clone_arc_base_P2    {
        author = "Hound";
        scopecurator = 2;
		scope = 2;
		scopeArsenal = 2;
        displayName = "[236th] Tarfu";
        faction = "Fac236th";
        editorSubcategory = "Sub236thCustom";
        uniformclass = "236th_Tarfu_Uniform";
		backpack = "236th_JumpPack_Stan";
		attendant = true;
		engineer = true;
		canDeactivateMines = true;
        hiddenSelectionsTextures[] = {"GAR\Clones\uniforms\data\236th_Tarfu_upper_co.paa","GAR\Clones\uniforms\data\236th_Tarfu_lower_co.paa"};
        linkedItems[] = {"236th_Tarfu_Helmet","236th_Tarfu_vest","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass",};
        respawnLinkedItems[] = {"236th_Tarfu_Helmet","236th_Tarfu_vest","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass"};
    };
	class 236th_Penguin_bodyGlove_base: lsd_bodyGlove_base
	{
		displayName = "Body Glove [Penguin]";
		uniformClass = "236th_Penguin_undersuit";
		nakedUniform = "236th_Penguin_undersuit";
		hiddenSelectionsTextures[] = {"GAR\Clones\uniforms\data\236th_Penguin_bodyglove_co.paa","",""};
	};
	class 236th_GrimDark: lsd_gar_phase2Insulated_base    {
        author = "Hound";
        scopecurator = 2;
		scope=2;
        displayName = "[236th] Grimdark";
        faction = "Fac236th";
        editorSubcategory = "Sub236thCustom";
		uniformclass = "236th_Grimdark_Uniform";
		backpack = "236th_JumpPack_Stan";
        hiddenSelectionsTextures[] = {"GAR\Clones\uniforms\data\236th_Grimdark_upper_co.paa","GAR\Clones\uniforms\data\236th_Grimdark_Lower_co.paa","GAR\Clones\uniforms\data\236th_Grimdark_softshell_co.paa"};
        linkedItems[] = {"236th_Grimdark_Helmet","236th_Flame_Trooper_vest","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass",};
        respawnLinkedItems[] = {"236th_Grimdark_Helmet","236th_Flame_Trooper_vest","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass"};
    };
	class 236th_Hound: SWLB_clone_base_P1    {
        author = "Hound";
        scopecurator = 2;
        displayName = "[236th] Hound";
        faction = "Fac236th";
        editorSubcategory = "Sub236thCustom";
		attendant = true;
		engineer = true;
		canDeactivateMines = true;
        uniformclass = "236th_Hound_Uniform";
		backpack = "236th_JumpPack_RTO";
        hiddenSelectionsTextures[] = {"GAR\Clones\uniforms\data\236th_Hound_Upper_co.paa","GAR\Clones\uniforms\data\236th_Hound_Lower_co.paa"};
        linkedItems[] = {"236th_P1_Hound_Helmet","236th_Hound_Vest","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass",};
        respawnLinkedItems[] = {"236th_P1_Hound_Helmet","236th_Hound_Vest","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass"};
    };
	class 236th_Lucky: SWLB_clone_base_P1    {
        author = "Hound";
        scopecurator = 2;
        displayName = "[236th] Lucky";
        faction = "Fac236th";
        editorSubcategory = "Sub236thCustom";
		attendant = true;
        uniformclass = "236th_Lucky_Uniform";
		backpack = "236th_JumpPack_RTO";
        hiddenSelectionsTextures[] = {"GAR\Clones\uniforms\data\236th_Lucky_uppper_co.paa","GAR\Clones\uniforms\data\236th_Lucky_lower_co.paa"};
        linkedItems[] = {"236th_Lucky_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass",};
        respawnLinkedItems[] = {"236th_Lucky_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass"};
    };
	class 236th_Cap: SWLB_clone_base_P1    {
        author = "Hound";
        scopecurator = 2;
        displayName = "[236th] Cap";
        faction = "Fac236th";
        editorSubcategory = "Sub236thCustom";
		attendant = true;
        uniformclass = "236th_Cap_Uniform";
		backpack = "236th_JumpPack_Medic";
        hiddenSelectionsTextures[] = {"GAR\Clones\uniforms\data\236th_Cap_Upper_co.paa","GAR\Clones\uniforms\data\236th_Cap_Lower_co.paa"};
        linkedItems[] = {"236th_CAP_p1_Helmet","236th_Hound_Vest","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass",};
        respawnLinkedItems[] = {"236th_CAP_p1_Helmet","236th_Hound_Vest","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass"};
    };
	class 236th_Chillie: SWLB_clone_base_P1    {
        author = "Hound";
        scopecurator = 2;
        displayName = "[236th] Chillie";
        faction = "Fac236th";
        editorSubcategory = "Sub236thCustom";
		attendant = true;
        uniformclass = "236th_Chillie_Uniform";
		backpack = "236th_JumpPack_Stan";
        hiddenSelectionsTextures[] = {"GAR\Clones\uniforms\data\236th_Chillie_uppper_co.paa","GAR\Clones\uniforms\data\236th_Chillie_lower_co.paa"};
        linkedItems[] = {"236th_Chillie_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass",};
        respawnLinkedItems[] = {"236th_Chillie_Helmet","","ItemMap","ItemGPS","SWLB_comlink_20","ItemCompass"};
    };
};