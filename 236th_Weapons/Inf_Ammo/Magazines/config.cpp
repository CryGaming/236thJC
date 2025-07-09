#include "\GAR\cfgPatches.hpp"
class CfgMagazines
{	
	class JLTS_DC15A_MAG;
	class 236th_100rnd_DC15A : JLTS_DC15A_MAG
	{
		displayName = "100rnd Plasma MAG"
		icon = "\addons\NRN\Republic\236th\data\NR_Logo.paa"
		descriptionShort = "Energy cell<br/>Rounds: 100<br/>";
		displayNameShort = "Hi-capacity energy";
		JLTS_hasEMPProtection = 1;
		author = "Hound";
		ammo = "JLTS_bullet_rifle_blue";
		count = 100;
		mass = 20;
	};
	class 236th_250rnd_DC15A : JLTS_DC15A_MAG
	{
		displayName = "250rnd Plasma MAG"
		icon = "\addons\NRN\Republic\236th\data\NR_Logo.paa"
		descriptionShort = "Energy cell<br/>Rounds: 250<br/>";
		displayNameShort = "Hi-capacity energy";
		JLTS_hasEMPProtection = 1;
		author = "Hound";
		ammo = "JLTS_bullet_rifle_blue";
		count = 250;
		mass = 30;
	};
	class 236th_500rnd_DC15A : JLTS_DC15A_MAG
	{
		displayName = "500rnd Plasema MAG"
		icon = "\addons\NRN\Republic\236th\data\NR_Logo.paa"
		descriptionShort = "Energy cell<br/>Rounds: 250<br/>";
		displayNameShort = "Hi-capacity energy";
		JLTS_hasEMPProtection = 1;
		author = "Hound";
		ammo = "JLTS_bullet_rifle_blue";
		count = 500;
		mass = 40;
	};
};