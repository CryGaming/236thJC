#include "\GAR\cfgPatches.hpp"
class CfgWeapons
{
	class launch_MRAWS_sand_rail_F;
	class launch_MRAWS_sand_F;
	
class 236th_MRAWS: launch_MRAWS_sand_rail_F
	{
		author = "Hound";
		_generalMacro = "launch_MRAWS_sand_rail_F";
		baseWeapon = "236th_MRAWS";
		scope = 2;
		magazines[] = {"MRAWS_HEAT_F","MRAWS_HE_F","MRAWS_HEAT55_F"};
		hiddenSelections[] = {"camo1","camo2"};
		displayName = "[236th] MRAWS";
		picture = "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_launch_MRAWS_rails_sand_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"236th_Weapons\MRAWS\data\236th_MRAWS_01_co.paa","236th_Weapons\MRAWS\data\236th_MRAWS_02_co.paa"};
	};
class 236th_MRAWS_RANGE: launch_MRAWS_sand_F
	{
		author = "Hound";
		_generalMacro = "launch_MRAWS_sand_F";
		baseWeapon = "236th_MRAWS_RANGE";
		scope = 2;
		displayName = "[236th] MRAWS MOD 1";
		picture = "\A3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_launch_MRAWS_sand_F_X_CA.paa";
		hiddenSelectionsTextures[] = {"236th_Weapons\MRAWS\data\236th_MRAWS_01_co.paa","\A3\Weapons_F_Tank\Launchers\MRAWS\Data\launch_MRAWS_02_F_co"};
	};
};