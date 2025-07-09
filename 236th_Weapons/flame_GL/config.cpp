#include "\GAR\cfgPatches.hpp"
	class Mode_SemiAuto;
	class Mode_Burst;
	class Mode_FullAuto;
class CfgWeapons
{
	class SWLW_DC15A_UGL_wooden;
	class JLTS_stun_muzzle;
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class Default;
	class GrenadeLauncher;
	
	class 236th_Shotgun_muzzle: JLTS_stun_muzzle
    {
        aiDispersionCoefX=2;
        aiDispersionCoefY=2;
        autoFire=0;
        ballisticsComputer=0;
        discreteDistance[]={50};
        discreteDistanceInitIndex=0;
        displayName="Shotgun";
        drySound[]=
        {
            "MRC\JLTS\weapons\Core\sounds\weapon_dry.wss",
            5,
            1,
            10
        };
        fireSpreadAngle=0.94999999;
        magazines[]=
        {
            "236th_Scatter_Mag", "236th_Flame_MAG","3rnd_SmokeGreen_Grenade_Shell","3rnd_SmokeBlue_Grenade_Shell","3rnd_SmokeOrange_Grenade_Shell",
			"3rnd_SmokePurple_Grenade_Shell","3rnd_SmokeRed_Grenade_Shell","3rnd_SmokeWhite_Grenade_Shell","3rnd_SmokeYellow_Grenade_Shell",
			"3rnd_HE_Grenade_Shell","ls_mag_stunLOW_2rnd",
			"ls_mag_ionLow_1rnd"
        };
        magazineWell[]={};
        maxZeroing=50;
        reloadAction = "ReloadMagazine";
        reloadMagazineSound[] = {"swlw_rework\sounds\dc\15\DC15A_reload.wss",0.562341,1,30};
        modes[]=
        {
            "Single"
        };
        class Single: Mode_SemiAuto
        {
            sounds[]=
            {
                "StandardSound"
            };
            class BaseSoundModeType
            {
                weaponSoundEffect="";
                closure1[]={};
                closure2[]={};
                soundClosure[]={};
            };
            class StandardSound: BaseSoundModeType
            {
                weaponSoundEffect="";
                begin1[]=
                {
                    "MRC\JLTS\weapons\DC17SA\sounds\dc17sa_fire_2",
                    3,
                    0.89999998,
                    1800
                };
                soundBegin[]=
                {
                    "begin1",
                    1
                };
            };
            recoil = "recoil_EBR";
            recoilProne = "assaultRifleBase";
            reloadTime=0.5;
            dispersion=2.9e-006;
            minRange=10;
            minRangeProbab=0.30000001;
            midRange=400;
            midRangeProbab=0.60000002;
            maxRange=1000;
            maxRangeProbab=0.1;
            aiRateOfFire=2;
            aiRateOfFireDistance=25;
        };
    };
	
	class 236th_DC15AUGL: SWLW_DC15A_UGL_wooden
	{
		displayName = "[236th] DC15A UGL";
		scope = 2;
		muzzles[]= { "this", "Shotgun"};
		magazines[] =
		{
			"JLTS_DC15A_MAG",
			"SWLW_DC15A_Mag",
		};
		baseweapon= "236th_DC15AUGL";
		class Shotgun: 236th_Shotgun_muzzle
        {
            reloadAction = "ReloadMagazine";
            reloadMagazineSound[]=
            {
                "A3\Sounds_F\arsenal\weapons\Pistols\P07\reload_P07",
                1,
                1,
                10
            };
        };
	};
};