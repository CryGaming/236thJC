#include "\GAR\cfgPatches.hpp"
 class Mode_SemiAuto;
 class Mode_Burst;
 class Mode_FullAuto;
 class CowsSlot;
 class MuzzleSlot;
 class PointerSlot;

class CfgWeapons
{

  class arifle_MXC_Black_F;
  class OPTRE_BR37;
  class 3AS_DC15A_F;
  class JLTS_DC15A;
  class JLTS_DC15S;
  class OPTRE_MA5C;
  class OPTRE_M45;
  class OPTRE_SRS99D;
  class OPTRE_M7_Folded;
  class arifle_Mk20_plain_F;
  class JLTS_stun_muzzle;
  class Gatling_30mm_Plane_CAS_01_F;
  class OPTRE_M41_LAAG;
  class OPTRE_M7_Folded;
  class WeaponSlotsInfo;
  class JLTS_Z6;
  class 3AS_WestarM5_F;
  class 3AS_DC15L_F;
  class JLTS_DC17SA;
  class JLTS_DC15A_plastic;
  class JLTS_E5;
  class 3AS_Valken38X_F; 
  /////LUCKY's Weapopns///
	class 236th_3ASWestarM5: 3AS_WestarM5_F
	{
		 author="Lucky";
		canShootInWater=1;
		displayname="[236th] Westar M5";
		scope = 2;
		magazines[]=
		{
		  "JLTS_DC15A_mag",
		  "DC15A_SuperCharged_Mag",
		  "DC15A_Low_Power_Mag",
		  "DC15A_High_Power_Mag",
		  "DC15A_Underwater_High_Power_Mag",
		  "DC15A_Underwater_Low_Power_Mag",
		  "3AS_60Rnd_EC50_Mag"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
			{
				mass = 80;
				class CowsSlot
				{
					access = 1;
					compatibleItems[] = {"3AS_optic_scope_westarm5","optic_dms","optic_ams","3as_optic_dc15l"};
					displayName = "Optics Slot";
					iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
					iconPinpoint = "Bottom";
					iconPosition[] = {0,0};
					iconScale = 0;
					linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
					scope = 0;
				};
			};
		baseweapon = "236th_Test3ASWestarM5";
	};
};