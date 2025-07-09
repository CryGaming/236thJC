#include "\GAR\cfgPatches.hpp"

class cfgWeapons {
//// Test Medical rewrite

class ACE_elasticBandage; //Bacta Bandage test
class JLST_drugs_bacta;
class ItemInfo;
class CBA_MiscItem_ItemInfo;
class ACE_adenosine;
class FirstAidKit;

class 236th_bacta: ACE_elasticBandage {
	scope = 2;
	displayName = "[236th] Bacta Bandage";
	author = "Hound";
	model = "\MRC\JLTS\contraband\Drugs\bacta.p3d";
	picture = "\MRC\JLTS\contraband\Drugs\data\ui\bacta_ui_ca.paa";
	class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
	};
class 236th_deathsick: ACE_adenosine
	{
		scope = 2;
		author = "Hound";
		displayName = "[236th] DeathStick";
		picture = "\MRC\JLTS\contraband\Drugs\data\ui\deathstick_ui_ca.paa";
		model = "\MRC\JLTS\contraband\Drugs\deathstick.p3d";
		descriptionShort = "Wanna risk it all?";
		descriptionUse = "Wanna risk it all?";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 1;
		};
	};
};

class ACE_Medical_Treatment
{
	class Bandaging
	{
		class ElasticBandage;
		class 236th_bacta: ElasticBandage
		{
			class Abrasion
			{
				effectiveness = 5;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class AbrasionMinor: Abrasion{};
			class AbrasionMedium: Abrasion
			{
				effectiveness = 4;
				reopeningChance = 0;
			};
			class AbrasionLarge: Abrasion
			{
				effectiveness = 3;
				reopeningChance = 0;
			};
			class Avulsions: Abrasion
			{
				effectiveness = 4;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class AvulsionsMinor: Avulsions
			{
				effectiveness = 3;
			};
			class AvulsionsMedium: Avulsions
			{
				effectiveness = 2;
			};
			class AvulsionsLarge: Avulsions
			{
				effectiveness = 2;
				reopeningChance = 0;
			};
			class Contusion: Abrasion
			{
				effectiveness = 3;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class ContusionMinor: Contusion{};
			class ContusionMedium: Contusion{};
			class ContusionLarge: Contusion{};
			class Crush: Abrasion
			{
				effectiveness = 3;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class CrushMinor: Crush
			{
				reopeningChance = 0;
			};
			class CrushMedium: Crush
			{
				effectiveness = 2;
			};
			class CrushLarge: Crush
			{
				effectiveness = 1.75;
				reopeningChance = 0;
			};
			class Cut: Abrasion
			{
				effectiveness = 6;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class CutMinor: Cut{};
			class CutMedium: Cut
			{
				effectiveness = 4;
				reopeningChance = 0;
			};
			class CutLarge: Cut
			{
				effectiveness = 3;
				reopeningChance = 0;
			};
			class Laceration: Abrasion
			{
				effectiveness = 3;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class LacerationMinor: Laceration{};
			class LacerationMedium: Laceration
			{
				effectiveness = 2;
			};
			class LacerationLarge: Laceration
			{
				effectiveness = 1.5;
				reopeningChance = 0;
			};
			class velocityWound: Abrasion
			{
				effectiveness = 3;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class velocityWoundMinor: velocityWound{};
			class velocityWoundMedium: velocityWound
			{
				effectiveness = 2;
			};
			class velocityWoundLarge: velocityWound
			{
				effectiveness = 1.75;
			};
			class punctureWound: Abrasion
			{
				effectiveness = 3;
				reopeningChance = 0;
				reopeningMinDelay = 0;
				reopeningMaxDelay = 0;
			};
			class punctureWoundMinor: punctureWound{};
			class punctureWoundMedium: punctureWound
			{
				effectiveness = 2.5;
			};
			class punctureWoundLarge: punctureWound
			{
				effectiveness = 2;
			};
		};
	};
	class Medication
	{
		class Morphine;
		class 236th_Deathstick:Morphine
		{
			painReduce = 1.0;
			hrIncreaseLow[] = {-15,-20};
			hrIncreaseNormal[] = {-20,-45};
			hrIncreaseHigh[] = {-30,-60};
			timeInSystem = 15;
			timeTillMaxEffect = 5;
			maxDose = 2;
			incompatibleMedication[] = {};
			viscosityChange = -10;
		};
	};
};
class ACE_Medical_Treatment_Actions
{
	class BasicBandage;
	class Morphine;
	class 236th_Bacta: BasicBandage
	{
		displayName = "Apply Bacta";
		displayNameProgress = "Applying Bacta...";
		treatmentTime = 5;
		items[] = {"236th_bacta"};
		callbackSuccess = "ace_medical_treatment_fnc_bandage";
		icon = "\MRC\JLTS\contraband\Drugs\data\ui\bacta_ui_ca.paa";
		litter[] = {{},{"ACE_MedicalLitter_Medigel"}};
	};
	class 236th_Deatstick: Morphine
	{
		displayName = "Risk God's Will";
		displayNameProgress = "Applying God's Will...";
		condition = "ace_medical_treatment_advancedMedication";
		items[] = {"236th_deathsick"};
		litter[] = {{"ACE_MedicalLitter_adenosine"}};
	};
};
class CfgVehicles
{
	class ACE_fieldDressingItem;
	class Adenosine;
	class ACE_morphineItem;
	class 236th_BactaItem: ACE_fieldDressingItem
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Bacta";
		author = "Hound";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_OPTRE_Biofoam
			{
				name = "236th_Bacta";
				count = 1;
			};
		};
	};
	class 236th_DeathStick: ACE_morphineItem
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "[236th] Deathstick";
		author = "Hound";
		vehicleClass = "Items";
		class TransportItems
		{
			class _xx_ACE_adenosine
			{
				name = "236th_Deathstick";
				count = 1;
			};
		};
	};

};