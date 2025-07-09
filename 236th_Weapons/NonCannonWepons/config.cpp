#include "\GAR\cfgPatches.hpp"	
	class Mode_SemiAuto;
	class Mode_Burst;
	class Mode_FullAuto;
class CfgWeapons
{
	class arifle_TRG20_F;
	class arifle_SDAR_F;
	class SMG_01_F;
	class arifle_SPAR_01_blk_F;
	class arifle_AK12_F;
	class WeaponSlotsInfo;
	class LMG_Mk200_black_F;
	class arifle_AK12_GL_F;
	class arifle_AK12U_F;
	class arifle_AKM_F;
	class arifle_AKS_F;
	class srifle_DMR_06_hunter_F;
	class arifle_RPK12_F;
	class hgun_Pistol_heavy_02_F;
	class hgun_ACPC2_F;
	class hgun_Pistol_heavy_01_F;
	class hgun_Rook40_F;
	class LMG_03_F;
	class hgun_P07_F;

//////////////////////BASE GAME CONVERTED WEAPONS////////////////////////////////////////
	
	class 236th_TAR: arifle_TRG20_F
	{
		displayName = "TV-14BR";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"236th_Weapons\NonCannonWepons\data\236th_tar21_co.paa"};
		scope = 2;
		magazineWell[] = {"236th_Rifle_Magwell"};
		baseweapon= "236th_TAR";
		class FlashLight
		{
		  color[]={180,160,130};
		  ambient[]={0.89999998,0.80000001,0.69999999};
		  intensity=100;
		  size=1;
		  innerAngle=5;
		  outerAngle=100;
		  coneFadeCoef=10;
		  position="flash dir";
		  direction="flash";
		  useFlare=1;
		  flareSize=1.5;
		  flareMaxDistance=100;
		  dayLight=1;
		  class Attenuation
		  {
			start=0;
			constant=0.5;
			linear=0.1;
			quadratic=0.2;
			hardLimitStart=27;
			hardLimitEnd=34;
		  };
		  scale[]={0};
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 80;
            class CowsSlot
            {
                access = 1;
                compatibleItems[] = {"3AS_optic_scope_westarm5","swlw_westar35s_scope",
				"swlw_zh73_scope","3as_optic_acog_dc15c","3as_optic_reflex_dc15c","3as_optic_vk38x","optic_yorris","optic_arco_blk_f","optic_arco_ak_blk_f","optic_holosight_blk_f","optic_holosight_smg_blk_f",
				"optic_mrco","ace_optic_mrco_2d","optic_hamr","ace_optic_hamr_2d","ace_optic_hamr_pip","optic_erco_blk_f"};
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0,0};
                iconScale = 0;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
            };
			class MuzzleSlot
			{
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName = "Muzzle Slot";
				compatibleItems[] = {"muzzle_snds_acp","ace_muzzle_mzls_smg_01","muzzle_snds_570","muzzle_snds_h","muzzle_snds_65_ti_blk_f","ace_muzzle_mzls_h","muzzle_snds_l"};
			};
        };
		modes[]=
		{
        "Single",
        "Burst",
        "FullAuto",
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot", // I really wanna experiment with this to change it.
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.2;
        dispersion=0.0003015;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
    };
	class Burst: Mode_Burst
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot",
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.079999998;
        dispersion=0.0014545;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
        burst=3;
    };
	class FullAuto: Mode_FullAuto
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot",
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
	};
	};
	class CV_4532: arifle_SDAR_F {
		displayName = "CV-4532 Rifle";
		scope = 2;
		magazineWell[] = {"236th_Rifle_Magwell"};
		baseweapon= "CV_4532";
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 80;
            class CowsSlot
            {
                access = 1;
                compatibleItems[] = {"3AS_optic_scope_westarm5","swlw_westar35s_scope",
				"swlw_zh73_scope","3as_optic_acog_dc15c","3as_optic_reflex_dc15c","3as_optic_vk38x","optic_yorris","optic_arco_blk_f","optic_arco_ak_blk_f","optic_holosight_blk_f","optic_holosight_smg_blk_f",
				"optic_mrco","ace_optic_mrco_2d","optic_hamr","ace_optic_hamr_2d","ace_optic_hamr_pip","optic_erco_blk_f"};
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0,0};
                iconScale = 0;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
            };
        };
		modes[]=
		{
        "Single",
        "Burst",
        "FullAuto",
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot", // I really wanna experiment with this to change it.
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.2;
        dispersion=0.0003015;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
    };
	class Burst: Mode_Burst
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot",
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.079999998;
        dispersion=0.0014545;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
        burst=2;
    };
	class FullAuto: Mode_FullAuto
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot",
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
	};
	};
	class Ak_S43: arifle_AK12_F {
		displayName = "AK-S43 Rifle";
		scope = 2;
		magazineWell[] = {"236th_Rifle_Magwell"};
		baseweapon= "Ak_S43";
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 80;
            class CowsSlot
            {
                access = 1;
                compatibleItems[] = {"3AS_optic_scope_westarm5","swlw_westar35s_scope",
				"swlw_zh73_scope","3as_optic_acog_dc15c","3as_optic_reflex_dc15c","3as_optic_vk38x","optic_yorris","optic_arco_blk_f","optic_arco_ak_blk_f","optic_holosight_blk_f","optic_holosight_smg_blk_f",
				"optic_mrco","ace_optic_mrco_2d","optic_hamr","ace_optic_hamr_2d","ace_optic_hamr_pip","optic_erco_blk_f"};
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0,0};
                iconScale = 0;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
            };
        };
		modes[]=
		{
        "Single",
        "Burst",
        "FullAuto",
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot", // I really wanna experiment with this to change it.
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.2;
        dispersion=0.0003015;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
    };
	class Burst: Mode_Burst
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot",
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.079999998;
        dispersion=0.0014545;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
        burst=2;
    };
	class FullAuto: Mode_FullAuto
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot",
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
	};
	};
	class SVC_2:SMG_01_F {
		displayName = "SVC-2";
		scope = 2;
		magazineWell[] = {"236th_Rifle_Magwell"};
		baseweapon= "SVC_2";
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 80;
            class CowsSlot
            {
                access = 1;
                compatibleItems[] = {"3AS_optic_scope_westarm5","swlw_westar35s_scope",
				"swlw_zh73_scope","3as_optic_acog_dc15c","3as_optic_reflex_dc15c","3as_optic_vk38x","optic_yorris","optic_arco_blk_f","optic_arco_ak_blk_f","optic_holosight_blk_f","optic_holosight_smg_blk_f",
				"optic_mrco","ace_optic_mrco_2d","optic_hamr","ace_optic_hamr_2d","ace_optic_hamr_pip","optic_erco_blk_f"};
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0,0};
                iconScale = 0;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
            };
        };

		modes[]=
		{
        "Single",
        "FullAuto"
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot", // I really wanna experiment with this to change it.
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.2;
        dispersion=0.0003015;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
    };
	class FullAuto: Mode_FullAuto
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot",
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
	};
	};
class 236th_416: arifle_SPAR_01_blk_F
	{
		displayName = "DV-416 BR";
		scope = 2;
		magazineWell[] = {"236th_Rifle_Magwell"};
		baseweapon= "236th_416";
		class WeaponSlotsInfo: WeaponSlotsInfo
				{
					mass = 80;
					class CowsSlot
					{
						access = 1;
						compatibleItems[] = {"3AS_optic_scope_westarm5","swlw_westar35s_scope",
						"swlw_zh73_scope","3as_optic_acog_dc15c","3as_optic_reflex_dc15c","3as_optic_vk38x","optic_yorris","optic_arco_blk_f","optic_arco_ak_blk_f","optic_holosight_blk_f","optic_holosight_smg_blk_f",
						"optic_mrco","ace_optic_mrco_2d","optic_hamr","ace_optic_hamr_2d","ace_optic_hamr_pip","optic_erco_blk_f"};
						displayName = "Optics Slot";
						iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
						iconPinpoint = "Bottom";
						iconPosition[] = {0,0};
						iconScale = 0;
						linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
						scope = 0;
					};
					class MuzzleSlot
					{
						linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
						displayName = "Muzzle Slot";
						compatibleItems[] = {"muzzle_snds_acp","ace_muzzle_mzls_smg_01","muzzle_snds_570","muzzle_snds_h","muzzle_snds_65_ti_blk_f","ace_muzzle_mzls_h","muzzle_snds_l"};
					};
				};
		modes[]=
		{
        "Single",
        "Burst",
        "FullAuto",
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot", // I really wanna experiment with this to change it.
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.2;
        dispersion=0.0003015;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
    };
	class Burst: Mode_Burst
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot",
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.079999998;
        dispersion=0.0014545;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
        burst=3;
    };
	class FullAuto: Mode_FullAuto
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot",
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
	};
};
class Ak_S43_GL: arifle_AK12_GL_F {
		displayName = "AK-S43 GL Rifle";
		scope = 2;
		magazineWell[] = {"236th_Rifle_Magwell"};
		baseweapon= "Ak_S43_GL";
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 80;
            class CowsSlot
            {
                access = 1;
                compatibleItems[] = {"3AS_optic_scope_westarm5","swlw_westar35s_scope",
				"swlw_zh73_scope","3as_optic_acog_dc15c","3as_optic_reflex_dc15c","3as_optic_vk38x","optic_yorris","optic_arco_blk_f","optic_arco_ak_blk_f","optic_holosight_blk_f","optic_holosight_smg_blk_f",
				"optic_mrco","ace_optic_mrco_2d","optic_hamr","ace_optic_hamr_2d","ace_optic_hamr_pip","optic_erco_blk_f"};
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0,0};
                iconScale = 0;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
            };
        };
		modes[]=
		{
        "Single",
        "Burst",
        "FullAuto",
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot", // I really wanna experiment with this to change it.
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.2;
        dispersion=0.0003015;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
    };
	class Burst: Mode_Burst
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot",
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.079999998;
        dispersion=0.0014545;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
        burst=2;
    };
	class FullAuto: Mode_FullAuto
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot",
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
	};
	};
class Ak_S43_k: arifle_AK12U_F {
		displayName = "AK-S43k Rifle";
		scope = 2;
		magazineWell[] = {"236th_Rifle_Magwell"};
		baseweapon= "Ak_S43_k";
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 80;
            class CowsSlot
            {
                access = 1;
                compatibleItems[] = {"3AS_optic_scope_westarm5","swlw_westar35s_scope",
				"swlw_zh73_scope","3as_optic_acog_dc15c","3as_optic_reflex_dc15c","3as_optic_vk38x","optic_yorris","optic_arco_blk_f","optic_arco_ak_blk_f","optic_holosight_blk_f","optic_holosight_smg_blk_f",
				"optic_mrco","ace_optic_mrco_2d","optic_hamr","ace_optic_hamr_2d","ace_optic_hamr_pip","optic_erco_blk_f"};
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0,0};
                iconScale = 0;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
            };
        };
		modes[]=
		{
        "Single",
        "Burst",
        "FullAuto",
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot", // I really wanna experiment with this to change it.
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.2;
        dispersion=0.0003015;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
    };
	class Burst: Mode_Burst
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot",
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.079999998;
        dispersion=0.0014545;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
        burst=2;
    };
	class FullAuto: Mode_FullAuto
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot",
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
	};
	};
class Ak_S54: arifle_AKM_F {
		displayName = "AK-S54 Rifle";
		scope = 2;
		magazineWell[] = {"236th_Rifle_Magwell"};
		baseweapon= "Ak_S54";
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 80;
            class CowsSlot
            {
                access = 1;
                compatibleItems[] = {"3AS_optic_scope_westarm5","swlw_westar35s_scope",
				"swlw_zh73_scope","3as_optic_acog_dc15c","3as_optic_reflex_dc15c","3as_optic_vk38x","optic_yorris","optic_arco_blk_f","optic_arco_ak_blk_f","optic_holosight_blk_f","optic_holosight_smg_blk_f",
				"optic_mrco","ace_optic_mrco_2d","optic_hamr","ace_optic_hamr_2d","ace_optic_hamr_pip","optic_erco_blk_f"};
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0,0};
                iconScale = 0;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
            };
        };
		modes[]=
		{
        "Single",
        "Burst",
        "FullAuto",
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot", // I really wanna experiment with this to change it.
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.2;
        dispersion=0.0003015;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
    };
	class Burst: Mode_Burst
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot",
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.079999998;
        dispersion=0.0014545;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
        burst=2;
    };
	class FullAuto: Mode_FullAuto
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot",
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
	};
	};
class Ak_S54m: arifle_AKS_F {
		displayName = "AK-S54M Rifle";
		scope = 2;
		magazineWell[] = {"236th_Rifle_Magwell"};
		baseweapon= "Ak_S54m";
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 80;
            class CowsSlot
            {
                access = 1;
                compatibleItems[] = {"3AS_optic_scope_westarm5","swlw_westar35s_scope",
				"swlw_zh73_scope","3as_optic_acog_dc15c","3as_optic_reflex_dc15c","3as_optic_vk38x","optic_yorris","optic_arco_blk_f","optic_arco_ak_blk_f","optic_holosight_blk_f","optic_holosight_smg_blk_f",
				"optic_mrco","ace_optic_mrco_2d","optic_hamr","ace_optic_hamr_2d","ace_optic_hamr_pip","optic_erco_blk_f"};
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0,0};
                iconScale = 0;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
            };
        };
		modes[]=
		{
        "Single",
        "Burst",
        "FullAuto",
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot", // I really wanna experiment with this to change it.
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.2;
        dispersion=0.0003015;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
    };
	class Burst: Mode_Burst
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot",
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.079999998;
        dispersion=0.0014545;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
        burst=2;
    };
	class FullAuto: Mode_FullAuto
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot",
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
	};
	};
class 236th_m14: srifle_DMR_06_hunter_F {
		displayName = "M43 Battle Rifle";
		scope = 2;
		magazineWell[] = {"236th_Rifle_Magwell"};
		baseweapon= "236th_m14";
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 80;
            class CowsSlot
            {
                access = 1;
                compatibleItems[] = {"3AS_optic_scope_westarm5","swlw_westar35s_scope",
				"swlw_zh73_scope","3as_optic_acog_dc15c","3as_optic_reflex_dc15c","3as_optic_vk38x","optic_yorris","optic_arco_blk_f","optic_arco_ak_blk_f","optic_holosight_blk_f","optic_holosight_smg_blk_f",
				"optic_mrco","ace_optic_mrco_2d","optic_hamr","ace_optic_hamr_2d","ace_optic_hamr_pip","optic_erco_blk_f"};
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0,0};
                iconScale = 0;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
            };
        };
		modes[]=
		{
        "Single",
        "FullAuto",
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot", // I really wanna experiment with this to change it.
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.2;
        dispersion=0.0003015;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
    };
	class FullAuto: Mode_FullAuto
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot",
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
	};
	};
class 236th_RPK: arifle_RPK12_F {
		displayName = "R231 Machine Gun";
		scope = 2;
		magazineWell[] = {"236th_MachineGun_Magwell"};
		baseweapon= "236th_RPK";
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 80;
            class CowsSlot
            {
                access = 1;
                compatibleItems[] = {"3AS_optic_scope_westarm5","swlw_westar35s_scope",
				"swlw_zh73_scope","3as_optic_acog_dc15c","3as_optic_reflex_dc15c","3as_optic_vk38x","optic_yorris","optic_arco_blk_f","optic_arco_ak_blk_f","optic_holosight_blk_f","optic_holosight_smg_blk_f",
				"optic_mrco","ace_optic_mrco_2d","optic_hamr","ace_optic_hamr_2d","ace_optic_hamr_pip","optic_erco_blk_f"};
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0,0};
                iconScale = 0;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
            };
        };
		modes[]=
		{
        "FullAuto",
		};
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
	class FullAuto: Mode_FullAuto
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot",
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
	};
	};
class 236th_Stoner: LMG_Mk200_black_F {
		displayName = "S-435 Machine Gun";
		scope = 2;
		magazineWell[] = {"236th_MachineGun_Magwell"};
		hiddenSelections[] = {"camo","camo1","camo2"};
		hiddenSelectionsTextures[] = {"\236th_Weapons\NonCannonWepons\data\236th_m200_1st_person_co.paa","\236th_Weapons\NonCannonWepons\data\236th_M200_Body_co.paa","\236th_Weapons\NonCannonWepons\data\236th_m200_grip_co.paa"};
		baseweapon= "236th_Stoner";
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 80;
            class CowsSlot
            {
                access = 1;
                compatibleItems[] = {"3AS_optic_scope_westarm5","swlw_westar35s_scope",
				"swlw_zh73_scope","3as_optic_acog_dc15c","3as_optic_reflex_dc15c","3as_optic_vk38x","optic_yorris","optic_arco_blk_f","optic_arco_ak_blk_f","optic_holosight_blk_f","optic_holosight_smg_blk_f",
				"optic_mrco","ace_optic_mrco_2d","optic_hamr","ace_optic_hamr_2d","ace_optic_hamr_pip","optic_erco_blk_f"};
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0,0};
                iconScale = 0;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
            };
        };
		modes[]=
		{
        "FullAuto",
		};
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
	class FullAuto: Mode_FullAuto
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot",
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
	};
	};
class 236th_MiniMi: LMG_03_F {
		displayName = "M9-374 Machine Gun";
		scope = 2;
		magazineWell[] = {"236th_MachineGun_Magwell"};
		baseweapon= "236th_MiniMi";
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 80;
            class CowsSlot
            {
                access = 1;
                compatibleItems[] = {"3AS_optic_scope_westarm5","swlw_westar35s_scope",
				"swlw_zh73_scope","3as_optic_acog_dc15c","3as_optic_reflex_dc15c","3as_optic_vk38x","optic_yorris","optic_arco_blk_f","optic_arco_ak_blk_f","optic_holosight_blk_f","optic_holosight_smg_blk_f",
				"optic_mrco","ace_optic_mrco_2d","optic_hamr","ace_optic_hamr_2d","ace_optic_hamr_pip","optic_erco_blk_f"};
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0,0};
                iconScale = 0;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
            };
        };
		modes[]=
		{
        "FullAuto",
		};
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
	class FullAuto: Mode_FullAuto
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot",
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
	};
	};
class 236th_Rhino: hgun_Pistol_heavy_02_F
	{
		displayName = "60DS Pistol";
		scope = 2;
		magazineWell[] = {"236th_Pistol_Magwell"};
		baseweapon= "236th_Rhino";
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot", // I really wanna experiment with this to change it.
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.2;
        dispersion=0.0003015;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
    };
	};
class 236th_1911: hgun_ACPC2_F
	{
		displayName = "4011 Pistol";
		scope = 2;
		magazineWell[] = {"236th_Pistol_Magwell"};
		baseweapon= "236th_1911";
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 80;
            class CowsSlot
            {
                access = 1;
                compatibleItems[] = {"optic_yorris","optic_holosight_arid_f","optic_holosight_blk_f","optic_holosight_khk_f","optic_holosight_lush_f","optic_holosight","optic_holosight_smg_blk_f","optic_holosight_smg_khk_f",
				"optic_holosight_smg","optic_mrd","optic_mrd_black"};
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0,0};
                iconScale = 0;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
            };
        };
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot", // I really wanna experiment with this to change it.
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.2;
        dispersion=0.0003015;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
    };
	};
class 236th_fnx45: hgun_Pistol_heavy_01_F
	{
		displayName = "F97 Pistol";
		scope = 2;
		magazineWell[] = {"236th_Pistol_Magwell"};
		baseweapon= "236th_fnx45";
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 80;
            class CowsSlot
            {
                access = 1;
                compatibleItems[] = {"optic_yorris","optic_holosight_arid_f","optic_holosight_blk_f","optic_holosight_khk_f","optic_holosight_lush_f","optic_holosight","optic_holosight_smg_blk_f","optic_holosight_smg_khk_f",
				"optic_holosight_smg","optic_mrd","optic_mrd_black"};
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0,0};
                iconScale = 0;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
            };
        };
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot", // I really wanna experiment with this to change it.
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.2;
        dispersion=0.0003015;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
    };
	};
class 236th_Rook: hgun_Rook40_F
	{
		displayName = "R42 Pistol";
		scope = 2;
		magazineWell[] = {"236th_Pistol_Magwell"};
		baseweapon= "236th_Rook";
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 80;
            class CowsSlot
            {
                access = 1;
                compatibleItems[] = {"optic_yorris","optic_holosight_arid_f","optic_holosight_blk_f","optic_holosight_khk_f","optic_holosight_lush_f","optic_holosight","optic_holosight_smg_blk_f","optic_holosight_smg_khk_f",
				"optic_holosight_smg","optic_mrd","optic_mrd_black"};
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0,0};
                iconScale = 0;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
            };
        };
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot", // I really wanna experiment with this to change it.
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.2;
        dispersion=0.0003015;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
    };
	};
class 236th_p99: hgun_P07_F
	{
		displayName = "p643 Pistol";
		scope = 2;
		magazineWell[] = {"236th_Pistol_Magwell"};
		baseweapon= "236th_p99";
		class WeaponSlotsInfo: WeaponSlotsInfo
        {
            mass = 80;
            class CowsSlot
            {
                access = 1;
                compatibleItems[] = {"optic_yorris","optic_holosight_arid_f","optic_holosight_blk_f","optic_holosight_khk_f","optic_holosight_lush_f","optic_holosight","optic_holosight_smg_blk_f","optic_holosight_smg_khk_f",
				"optic_holosight_smg","optic_mrd","optic_mrd_black"};
                displayName = "Optics Slot";
                iconPicture = "\A3\Weapons_F\Data\UI\attachment_top.paa";
                iconPinpoint = "Bottom";
                iconPosition[] = {0,0};
                iconScale = 0;
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                scope = 0;
            };
        };
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
                "ls_weapons_core\sounds\dc\15\dc15a_shot", // I really wanna experiment with this to change it.
                1,
                1,
                1800
            };
            begin2[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot1",
                1,
                1,
                1800
            };
            begin3[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot2",
                1,
                1,
                1800
            };
            begin4[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot3",
                1,
                1,
                1800
            };
            begin5[]=
            {
                "ls_weapons_core\sounds\dc\15\dc15a_shot4",
                1,
                1,
                1800
            };
            soundBegin[]=
            {
                "begin1",
                0.25,
                "begin2",
                0.1,
                "begin3",
                0.15000001,
                "begin4",
                0.25,
                "begin5",
                0.25
            };
        };
        reloadTime=0.2;
        dispersion=0.0003015;
        minRange=5;
        minRangeProbab=0.30000001;
        midRange=25;
        midRangeProbab=0.60000002;
        maxRange=50;
        maxRangeProbab=0.1;
        aiRateOfFire=2;
        aiRateOfFireDistance=25;
    };
	};
};
