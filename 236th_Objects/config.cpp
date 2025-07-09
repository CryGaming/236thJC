#include "\GAR\cfgPatches.hpp"

class CfgVehicles
{
	class B_supplyCrate_F;
	class ls_carrybox_base;
	class venator_zeus;
 	class 236th_Armory_Box: ls_carrybox_base     // full arsenal box
	{
        author = "Houndacivic";
        scopecurator = 2;
        displayName = "[236th] Full Arsenal";
		editorCategory = "236th_Objects";
        editorSubcategory = "236th_Supplies";
		class UserActions
		{
			class BNA_Healstation_Heal
			{
				userActonID = 10; //Thank you SweMonkey for this code!
				displayName = "<t size='1.25' font='PuristaSemibold' color='#ff5733'>Recieve Medical Attention</t>";
				radius = 15;
				priority = 100;
				onlyForPlayer=1;
				postition="";
				condition = "isNull objectParent player";
				statement = "[player] call ace_medical_treatment_fnc_fullHealLocal;";
			};
			class BNA_GiveMedicPerms: BNA_Healstation_Heal
			{
				userActonID = 11;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get Med-Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""medic"")";
				statement = "player setUnitTrait [""medic"", 1];";
			};
			class BNA_TakeMedicPerms: BNA_Healstation_Heal
			{
				userActonID = 12;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove Med-Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""medic"")";
				statement = "player setUnitTrait [""medic"", 0];";
			};
			class BNA_GiveEngiPerms: BNA_Healstation_Heal
			{
				userActonID = 13;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Get Engi-Perms</t>";
				condition = "(isNull objectParent player) && !(player getUnitTrait ""engineer"") || !(player getUnitTrait ""explosiveSpecialist"")";
				statement = "player setUnitTrait [""engineer"", 1];player setUnitTrait [""explosiveSpecialist"", 1];";
			};
			class BNA_TakeEngiPerms: BNA_Healstation_Heal
			{
				userActonID = 14;
				displayName = "<t size='1.0' font='PuristaMedium' color='#ffd433'>Remove Engi-Perms</t>";
				condition = "(isNull objectParent player) && (player getUnitTrait ""engineer"") || (player getUnitTrait ""explosiveSpecialist"")";
				statement = "player setUnitTrait [""engineer"", 0];player setUnitTrait [""explosiveSpecialist"", 0];";
			};
			class 236th_Arsenal: BNA_Healstation_Heal
			{
				userActionIS = 15;
				displayName = "<t size='1.0' font='PuristaMedium' color='#145365'>Ace Arsenal</t>";
				condition = "isNull objectParent player";
				statement = "[player, player, true] call ace_arsenal_fnc_openBox;";
			};
		};
    };
	class 236th_Venator: venator_zeus
	{
		author = "Hound";
		model = "\swlb_static\venator\venator.p3d";
		scope = 2;
		scopecurator = 2;
		editorpreview = "";
		editorcategory = "236th_Objects";
		editorsubcategory = "236th_ships";
		vehicleClass = "Structures";
		icon = "iconObject_1x1";
		displayname = "236th Venator";
		hiddenselections[] = {"body1","body2","body3","body4","body5","body6","body7","body8","body9","body10","door1","engine","interior1","interior2","interior3","interior4","interior5","interior6","interior7","interior8","bridge"};
		hiddenselectionstextures[] = {"236th_Objects\data\236th_body1_co.paa","swlb_static\venator\data\body2_co.paa","swlb_static\venator\data\body3_co.paa","236th_Objects\data\236th_body4_co.paa","236th_Objects\data\236th_body5_co.paa","236th_Objects\data\236th_body6_co.paa","236th_Objects\data\236th_body7_co.paa","swlb_static\venator\data\body8_co.paa","236th_Objects\data\236th_body9_co.paa","swlb_static\venator\data\body10_co.paa","236th_Objects\data\236th_door_co.paa","swlb_static\venator\data\engine_co.paa","swlb_static\venator\data\interior1_co.paa","swlb_static\venator\data\interior2_co.paa","swlb_static\venator\data\interior3_co.paa","swlb_static\venator\data\interior4_co.paa","swlb_static\venator\data\interior5_co.paa","swlb_static\venator\data\interior6_co.paa","swlb_static\venator\data\interior7_co.paa","swlb_static\venator\data\interior8_co.paa","236th_Objects\data\236th_bridge_co.paa"};
	};
};