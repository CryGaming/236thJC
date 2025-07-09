class CfgPatches {
	class Aux_236th {
		requiredAddons[] = {"Ls_core"};
		units[] = {"236th_V2P2_Dirty_Trooper","236th_Laat", "236th_V2P2_Trooper",
		"236th_P2_Trooper", "236th_V2P1_Trooper", "236th_P1_Trooper", "BNA_Vehicledrop_Module", "236th_Armory_Box","236th_Venator", "236th_Penguin","236th_Laatc",
		"236th_arc_130","236th_Laat","236th_Memer","236th_Steven_P1","236th_Gooze","236th_Tarfu_Trooper","236th_GrimDark","236th_Cap","236th_Lucky","236th_Hound"};
		
	};
};
class cfgFactionClasses
{
	class Fac236th
	{
		displayName = "236th Jump Corps";
		scope=2;
	};
	class BNA_Hounds_Monkey_Modules
	{
		displayName = "236th Modules";
		scope = 2;
		scopeCurator = 2;
		priority=3;
		side=7;
	};

};
class CfgEditorCategories
{
    class 236th_Objects
    {
        scope = 2;
        scopeCurator = 2;
        displayName="[236th] Objects";
    };
};
class cfgEditorSubcategories {
	class Sub236thGround 
	{
		displayName = "Troopers"; //if you want to make custom subcategories under your faction like "men" or "vehicles"
		scopeCurator = 2;
		scope =2;
	};
	class Sub236thArmor
	{
		displayName = "Armor"; //if you want to make custom subcategories under your faction like "men" or "vehicles"
		scopeCurator = 2;
		scope =2;
	};
	class Sub236thCustom
	{
		displayName = "Custom Armor"; //if you want to make custom subcategories under your faction like "men" or "vehicles"
		scopeCurator = 2;
		scope =2;
	};
	class Sub236thAir
	{
		displayName = "Aircraft"; //if you want to make custom subcategories under your faction like "men" or "vehicles"
		scopeCurator = 2;
		scope =2;
	};
	class 236th_Supplies
    {
        author = "Hound";
        scope = 2;
        scopeCurator = 2;
        displayName = "[236th] Supplies";
    };
	class 236th_Ships
    {
        author = "Hound";
        scope = 2;
        scopeCurator = 2;
        displayName = "[236th] Ships";
    };
	
};
class CfgFunctions
{
	class BNA
	{
		class Scripts_For_Hound
		{
			file="\Scripts";
			class VehicleDrop{};
			class VehicleDropModule{};
			class treatmentBandageAndPainReduction{};
			class treatmentBandageAndPainReductionLocal{};
		};
	};
	
};
