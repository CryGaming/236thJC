#include "\GAR\cfgPatches.hpp"
	class Mode_SemiAuto;
	class Mode_Burst;
	class Mode_FullAuto;
class CfgWeapons
{
	class 41_Flammenwerfer_02_F; //// Base flamethrower weapon
	class M2_Flamethrower_01_F;
	class WeaponSlotsInfo;
	class 236th_Flamethrower: M2_Flamethrower_01_F
	{
		WBK_BurnEm_IsFlamethrower = "True"; ///// Defines if that weapon is a flamethrower
		WBK_BurnEm_RequiredBackpack = "236th_JumpPack_Flame"; ////// If that flamethrower requires aditional backpack for usage, leave blank if you want so flamethrower can operate on its own
		WBK_BurnEm_FlamethrowerSoundArray = ['flamewerfer_start','flamewerfer_looping',4.8,'flamewerfer_end']; ///////Sounds that will be used by flamethrower [start_sound,loop_sound,loop_delay,end_sound]
		WBK_BurnEm_FlamethrowerParticlePos = [[-0.32,0.3,-0.3],'leftHand']; //////Position of the particle, use attachTo command to see where to put it, second element is the bone that particles will be attached
		WBK_BurnEm_FlamethrowerDistance = 75; /////Distance of the flame
		
		////////And here is default weapon config, for that search BIS wiki
		scope=2;
		displayName="[236th] Flamethrower";
		author="Hound";
		model = "3AS\3AS_Weapons\X42\BX42.p3d";
		picture="\M2\addons\data\FW41.paa";
		UiPicture="\A3\Weapons_F\data\UI\icon_regular_CA.paa";
		weaponInfoType="RscWeaponZeroing";
		muzzles[]=
		{
			"this"
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=40;
		};
	};
};