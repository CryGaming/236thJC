#include "\GAR\cfgPatches.hpp"
class CfgVehicles
{
	class ls_gar_standard_backpack;
	class SWLB_clone_backpack;
	class JLTS_Clone_jumppack_JT12;
	class 236th_StanBag: SWLB_clone_backpack
	{
		displayname="[236th] Standard BackPack";
		scope=2;
		maximumload=450;
		hiddenSelections[]=								//This is new and spicy stuff, you tell the game what parts of the backpack you want to have textures on, amazing, right?
		{
			"camo1",								//Camo1 is the main-body of the backpack
			"cover",								//Cover is the fabric cover that is ontop of the backpack
			"Heavy",								//Heavy is for the heavy accessories of the backpack
			"medic",								//Medic is for the little bacta tube on the bottom
			"RTO"									//RTO replaces the Cover and is the radio panel of the backpack
		};
		hiddenselectionstextures[]=
		{
			"GAR\Clones\backpacks\data\236th_Stanag_Backpack.paa",
			"GAR\Clones\backpacks\data\236th_BPCover.paa",
			"",
			"",
			""
		};
	};
	class 236th_StanBag_V2: SWLB_clone_backpack
	{
		displayname="[236th] Standard BackPack(V2)";
		scope=2;
		maximumload=450;
		hiddenSelections[]=								//This is new and spicy stuff, you tell the game what parts of the backpack you want to have textures on, amazing, right?
		{
			"camo1",								//Camo1 is the main-body of the backpack
			"cover",								//Cover is the fabric cover that is ontop of the backpack
			"Heavy",								//Heavy is for the heavy accessories of the backpack
			"medic",								//Medic is for the little bacta tube on the bottom
			"RTO"									//RTO replaces the Cover and is the radio panel of the backpack
		};
		hiddenselectionstextures[]=
		{
			"GAR\Clones\backpacks\data\236th_v2Stanag_Backpack.paa",
			"GAR\Clones\backpacks\data\236th_BPCover.paa",
			"",
			"",
			""
		};
	};

	class 236th_StanBag_Dirty: SWLB_clone_backpack
	{
		displayname="[236th] Standard BackPack (Dirty)";
		scope=2;
		maximumload=450;
		hiddenSelections[]=								//This is new and spicy stuff, you tell the game what parts of the backpack you want to have textures on, amazing, right?
		{
			"camo1",								//Camo1 is the main-body of the backpack
			"cover",								//Cover is the fabric cover that is ontop of the backpack
			"Heavy",								//Heavy is for the heavy accessories of the backpack
			"medic",								//Medic is for the little bacta tube on the bottom
			"RTO"									//RTO replaces the Cover and is the radio panel of the backpack
		};
		hiddenselectionstextures[]=
		{
			"GAR\Clones\backpacks\data\236th_Stanag_Backpack_dirty_co.paa",
			"GAR\Clones\backpacks\data\236th_BPCover.paa",
			"",
			"",
			""
		};
	};
	class 236th_StanBag_Dirty_V2: SWLB_clone_backpack
	{
		displayname="[236th] Standard BackPack (V2 Dirty)";
		scope=2;
		maximumload=450;
		hiddenSelections[]=								//This is new and spicy stuff, you tell the game what parts of the backpack you want to have textures on, amazing, right?
		{
			"camo1",								//Camo1 is the main-body of the backpack
			"cover",								//Cover is the fabric cover that is ontop of the backpack
			"Heavy",								//Heavy is for the heavy accessories of the backpack
			"medic",								//Medic is for the little bacta tube on the bottom
			"RTO"									//RTO replaces the Cover and is the radio panel of the backpack
		};
		hiddenselectionstextures[]=
		{
			"GAR\Clones\backpacks\data\236th_v2Stanag_Backpack_dirty_co.paa",
			"GAR\Clones\backpacks\data\236th_BPCover.paa",
			"",
			"",
			""
		};
	};
	class 236th_JumpPack_Stan: JLTS_Clone_jumppack_JT12
	{
		displayname="[236th] JumpPack";
		scope=2;
		JLTS_isJumppack = 0;
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 400;
		NSM_jumppack_recharge = 10;
		maximumload=450;
		hiddenSelections[] = {"camo1"};
		hiddenselectionstextures[]=
		{
			"GAR\Clones\backpacks\data\236th_JT12_co.paa",
		};
	};
	class 236th_JumpPack_RTO: JLTS_Clone_jumppack_JT12
	{
		displayname="[236th] LR JumpPack";
		scope=2;
		JLTS_isJumppack = 0;
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 400;
		NSM_jumppack_recharge = 10;
		maximumload=450;
		tf_dialog="JLTS_clone_rto_radio_dialog";
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_encryptionCode="tf_west_radio_code";
		tf_hasLRradio=1;
		tf_range=50000;
		tf_subtype="digital_lr";
		hiddenSelections[] = {"camo1"};
		hiddenselectionstextures[]=
		{
			"GAR\Clones\backpacks\data\236th_JT12_co.paa",
		};
	};
	class 236th_JumpPack_Medic: JLTS_Clone_jumppack_JT12
	{
		displayname="[236th] Medical JumpPack";
		scope=2;
		JLTS_isJumppack = 0;
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 400;
		NSM_jumppack_recharge = 10;
		maximumload=650;
		hiddenSelections[] = {"camo1"};
		hiddenselectionstextures[]=
		{
			"GAR\Clones\backpacks\data\236th_JT12_Medic_co.paa",
		};
	};
	class 236th_JumpPack_EOD: JLTS_Clone_jumppack_JT12
	{
		displayname="[236th] EOD JumpPack";
		scope=2;
		JLTS_isJumppack = 0;
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 400;
		NSM_jumppack_recharge = 10;
		maximumload=650;
		hiddenSelections[] = {"camo1"};
		hiddenselectionstextures[]=
		{
			"GAR\Clones\backpacks\data\236th_JT12_co.paa",
		};
	};
	class 236th_JumpPack_Flame: JLTS_Clone_jumppack_JT12
	{
		displayname="[236th] FlameThrower JumpPack";
		scope=2;
		WBK_BurnEm_FlamethrowerBaloons = "true";
		JLTS_isJumppack = 0;
		NSM_jumppack_is_jumppack = 1;
		NSM_jumppack_spam_delay = 1;
		NSM_jumppack_energy_capacity = 400;
		NSM_jumppack_recharge = 10;
		maximumload=450;
		hiddenSelections[] = {"camo1"};
		hiddenselectionstextures[]=
		{
			"GAR\Clones\backpacks\data\236th_JT12_Flame_co.paa",
		};
	};
};