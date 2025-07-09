#include "\GAR\cfgPatches.hpp"
class CfgAmmo
{
	class M_Vorona_HEAT;
	class OPTRE_B_145x114_APFSDS;
	class LS_ammo_shotgun_blue;
	class SWLW_ammo_scatter_blue;
	class SWLW_ammo_shotgun_blue;
	class ls_ammo_flamethrower;
	class FlameRound;
	class 3as_EC80_BluePlasma;
	class SWLW_ammo_65_blue;
	class BulletBase;
	class ammo_Missile_rim116;
	class Cannon_30mm_HE_Plane_CAS_02_F;
	class ls_ammo_classA_thermalDet;
	class ls_ammo_detPack_explosive;
	
	class 236th_Flame_GL: FlameRound
	{
		ACE_bulletMass=0;
		coefGravity = 0.0;
		deflecting = 0;
		airFriction = 0;
		sideairFriction = 0;
		waterFriction = -0.01;
		ACE_damageType = "bullet";
		aiAmmoUsageFlags = "64";
		cartridge = "FxCartridge_556";
		explosionEffects = "ls_flamethrower_explosion";
	};
};
class CfgMagazines
{
	class Vorona_HEAT;
	class 3AS_Chaingun_Drum_Mag;
	class OPTRE_4Rnd_145x114_APFSDS_Mag;
	class SWLW_Westar35S_scatter_Mag;
	class SWLW_scattergun_Mag;
	class ls_mag_flamethrower_test;
	class 3as_Flamerfuel;
	class ls_mag_stunLOW_2rnd;
	class JLTS_DC15A_MAG;
	class SWLW_ACPR_Mag;
	class 3AS_5Rnd_EC80_mag;
	class SWLW_DC15X_MAG;
	class CA_Magazine;
	class 500Rnd_Cannon_30mm_Plane_CAS_02_F;
	class magazine_Missile_rim116_x21;
	class 1000Rnd_Gatling_30mm_Plane_CAS_01_F;
	class OPTRE_1000Rnd_127x99_M41;
	class ls_mag_classA_thermalDet;
	class ls_mag_demo_remoteCharge;

class 236th_Scatter_Mag: SWLW_scattergun_Mag
	{
		displayName = "[236th] Scatter Shot";
		author = "Hound";
		icon = "236th_Patches\textures\475th_modlogo.paa"
		ammo = "SWLW_ammo_shotgun_blue";
		count = 30;
		mass = 10;
	};
	class 236th_Flame_MAG: 3AS_FlamerFuel
	{
		displayName = "[236th]Flame Magazine"
		icon = "236th_Patches\textures\475th_modlogo.paa"
		author = "Hound";
		ammo = "FlameRound";
		count = 20;
		mass = 20;
	};
};