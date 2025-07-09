#include "\GAR\cfgPatches.hpp"
class CfgWeapons 
{
	class ls_weapon_dc15a;
  class SWLW_DC15s;
  class SWLW_DC15X;
  class ls_weapon_dc17sidearm;
  class SWLW_DC17;
  class WeaponSlotsInfo;
  /////LUCKY's Weapopns///
	class 236th_ls_DC17: ls_weapon_dc17sidearm
	{
		author="lucky";
		canShootIOnWater=1;
		displayname="[236th] DC17(ls)";
		scope = 2;
		magazines[]=
		{
		  "ls_mag_dc17sidearm",
		  "JLTS_DC17SA_mag",
		  "JLTS_stun_mag_short",
		  "JLTS_smokeRed_mag",
		  "JLTS_flareRed_mag"
		};
		baseweapon = "236th_ls_DC17";
	};
	class 236th_SWLW_DC17: SWLW_DC17
	{
		author="lucky";
		canShootIOnWater=1;
		displayname="[236th] DC17(swlw)";
		scope = 2;
		magazines[]=
		{
		  "JLTS_DC17SA_mag",
		  "JLTS_stun_mag_short",
		  "JLTS_smokeRed_mag",
		  "JLTS_flareRed_mag"
		};
		baseweapon = "236th_SWLW_DC17";
	};
	class 236th_DC15A: ls_weapon_dc15a
	{
		author="Lucky";
		canShootInWater=1;
		displayname="[236th] DC-15A";
		scope = 2;
		magazines[]=
		{
		  "JLTS_DC15A_mag",
		  "JLTS_stun_mag_long",
		  "JLTS_DC15S_mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
			{
				mass = 80;
				class CowsSlot
				{
					access = 1;
					compatibleItems[] = {"ls_acc_dcholosight_blue","ls_acc_dcholosight_green","ls_acc_dcholosight_red","ls_acc_dcholosight_yellow","3as_optic_red_dc15a","3as_optic_lescope_dc15a"};
					displayName = "Optics Slot";
					iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
					iconPinpoint = "Bottom";
					iconPosition[] = {0,0};
					iconScale = 0;
					linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
					scope = 0;
				};
			};
		baseweapon = "236th_DC15A";
	};
	class 236th_DC15X: SWLW_DC15X
	{
		author="lucky";
		canShootIOnWater=1;
		displayname="[236th] DC15X";
		scope = 2;
		magazines[]=
		{
		  "JLTS_DC15X_mag",
		  "JLTS_stun_mag_long"
		};
		baseweapon = "236th_DC15X";
	};
	class 236th_DC15s: SWLW_DC15s
	{
		author="lucky";
		canShootIOnWater=1;
		displayname="[236th] DC15S";
		scope = 2;
		magazines[]=
		{
		  "JLTS_DC15S_mag",
		  "JLTS_stun_mag_long",
		  "JLTS_stun_mag_short"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
			{
				mass = 80;
				class CowsSlot
				{
					access = 1;
					compatibleItems[] = {"ls_acc_dcholosight_blue","ls_acc_dcholosight_green","ls_acc_dcholosight_red","ls_acc_dcholosight_yellow","3as_optic_red_dc15a"};
					displayName = "Optics Slot";
					iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
					iconPinpoint = "Bottom";
					iconPosition[] = {0,0};
					iconScale = 0;
					linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
					scope = 0;
				};
			};
		baseweapon = "236th_DC15s";
	};
};