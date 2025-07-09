#include "\GAR\cfgPatches.hpp"
class OPTRE_HUD_RscCombo
{
	idc = -1;
	type = 4;
	style = "0 + 0x10";
	x = 0;
	y = 0;
	w = 0.3;
	h = 0.035;
	colorSelect[] = {1,1,1,1};
	colorText[] = {1,1,1,1};
	colorSelectBackground[] = {1,1,0,0.5};
	colorBackground[] = {1,0.5,0,0.5};
	colorScrollbar[] = {1,1,0,0.5};
	color[] = {1,1,1,1};
	colorActive[] = {0,0,0,1};
	arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
	arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
	wholeHeight = 0.45;
	colorDisabled[] = {};
	font = "EtelkaNarrowMediumPro";
	sizeEx = 0.031;
	soundCollapse[] = {"\A3\ui_f\data\sound\RscCombo\soundCollapse",0.1,1};
	soundExpand[] = {"\A3\ui_f\data\sound\RscCombo\soundExpand",0.1,1};
	soundSelect[] = {"\A3\ui_f\data\sound\RscCombo\soundSelect",0.1,1};
	maxHistoryDelay = 1.0;
	class ComboScrollBar
	{
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		autoScrollDelay = 5;
		autoScrollEnabled = 1;
		autoScrollRewind = 0;
		autoScrollSpeed = -1;
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		color[] = {1,0.5,1,0.5};
		colorActive[] = {1,0.5,1,0.5};
		colorDisabled[] = {1,0.5,1,0.5};
		colorBackground[] = {1,0.5,1,0.5};
		height = 0;
		scrollSpeed = 0.06;
		shadow = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		width = 0;
	};
};
class OPTRE_HUD_RscCheckBox
{
	checked = 0;
	color[] = {1,1,1,0.7};
	colorBackground[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0,0,0};
	colorBackgroundFocused[] = {0,0,0,0};
	colorBackgroundHover[] = {0,0,0,0};
	colorBackgroundPressed[] = {0,0,0,0};
	colorDisabled[] = {1,1,1,0.2};
	colorFocused[] = {1,1,1,1};
	colorHover[] = {1,1,1,1};
	colorPressed[] = {1,1,1,1};
	idc = -1;
	soundClick[] = {"",0.1,1};
	soundEnter[] = {"",0.1,1};
	soundEscape[] = {"",0.1,1};
	soundPush[] = {"",0.1,1};
	style = 0;
	textureChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureDisabledChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureDisabledUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureFocusedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureFocusedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureHoverChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureHoverUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	texturePressedChecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	texturePressedUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureUnchecked = "A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
	tooltipColorText[] = {1,1,1,1};
	type = 77;
	w = "0.025 * safezoneW";
	x = "0.375 * safezoneW + safezoneX";
	y = "0.36 * safezoneH + safezoneY";
};
class OPTRE_HUD_RscProgress
{
	type = 8;
	style = 0;
	colorFrame[] = {0,0,0,0};
	colorBar[] = {1,0,0,1};
	colorBackground[] = {0,0,0,0};
	texture = "stamina_ca.paa";
	text = "180";
	w = 1;
	h = 0.03;
};
class RscStructuredText;
class OPTRE_HUD_SructuredText: RscStructuredText
{
	size = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.66)";
	class Attributes
	{
		align = "right";
		color = "#070103";
	};
};
class OPTRE_HUD_SructuredTextLeft: OPTRE_HUD_SructuredText
{
	class Attributes
	{
		align = "left";
		color = "#070103";
	};
};
class OPTRE_HUD_SructuredTextCenter: OPTRE_HUD_SructuredText
{
	class Attributes
	{
		align = "center";
		color = "#070103";
	};
};
class RscEdit;
class OPTRE_HUD_RscEdit: RscEdit{};
class RscMapControl;
class OPTRE_HUD_rscMapControl_HUD_1: RscMapControl
{
	alphaFadeEndScale = 2;
	alphaFadeStartScale = 2;
	colorBackground[] = {0,0,0,0};
	colorCountlines[] = {0,0,0,0};
	colorCountlinesWater[] = {0,0,0,0};
	colorForest[] = {0,0,0,0};
	colorForestBorder[] = {0,0,0,0};
	colorGrid[] = {0,0,0,0};
	colorGridMap[] = {0,0,0,0};
	colorInactive[] = {0,0,0,0};
	colorLevels[] = {0,0,0,0};
	colorMainCountlines[] = {0,0,0,0};
	colorMainCountlinesWater[] = {0,0,0,0};
	colorMainRoads[] = {0,0,0,0};
	colorMainRoadsFill[] = {0,0,0,0};
	colorNames[] = {0,0,0,0};
	colorOutside[] = {0,0,0,0};
	colorPowerLines[] = {0,0,0,0};
	colorRailWay[] = {0,0,0,0};
	colorRoads[] = {0,0,0,0};
	colorRoadsFill[] = {0,0,0,0};
	colorRocks[] = {0,0,0,0};
	colorRocksBorder[] = {0,0,0,0};
	colorSea[] = {0,0,0,0};
	colorText[] = {0,0,0,0};
	colorTracks[] = {0,0,0,0};
	colorTracksFill[] = {0,0,0,0};
	colorTrails[] = {0,0,0,0};
	colorTrailsFill[] = {0,0,0,0};
	deletable = 0;
	fade = 0;
	font = "TahomaB";
	fontGrid = "TahomaB";
	fontInfo = "RobotoCondensed";
	fontLabel = "RobotoCondensed";
	fontLevel = "TahomaB";
	fontNames = "EtelkaNarrowMediumPro";
	fontUnits = "TahomaB";
	h = "SafeZoneH - 1.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idc = 51;
	idcMarkerColor = -1;
	idcMarkerIcon = -1;
	maxSatelliteAlpha = 0;
	moveOnEdges = 1;
	ptsPerSquareCLn = 10;
	ptsPerSquareCost = 10;
	ptsPerSquareExp = 10;
	ptsPerSquareFor = 9;
	ptsPerSquareForEdge = 9;
	ptsPerSquareObj = 9;
	ptsPerSquareRoad = 6;
	ptsPerSquareSea = 5;
	ptsPerSquareTxt = 20;
	scaleDefault = 0.16;
	scaleMax = 1;
	scaleMin = 0.001;
	shadow = 0;
	showCountourInterval = 0;
	showMarkers = 1;
	sizeEx = 0.04;
	sizeExGrid = 0.02;
	sizeExInfo = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	sizeExLabel = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	sizeExLevel = 0.02;
	sizeExNames = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 2";
	sizeExUnits = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	stickX[] = {0.2,"[""Gamma""",1,"1.5]"};
	stickY[] = {0.2,"[""Gamma""",1,"1.5]"};
	style = 0;
	text = "#(argb,8,8,3)color(0,0,0,0)";
	textureComboBoxColor = "#(argb,8,8,3)color(0,0,0,0)";
	type = 101;
	w = "SafeZoneWAbs";
	x = "SafeZoneXAbs";
	y = "SafeZoneY + 1.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	class LineMarker
	{
		textureComboBoxColor = "#(argb,8,8,3)color(0,0,0,0)";
		lineDistanceMin = 3e-05;
		lineLengthMin = 5;
		lineWidthThick = 0.014;
		lineWidthThin = 0.008;
	};
	class ActiveMarker
	{
		color[] = {0,0,0,0};
		size = 0.029;
	};
	class Bunker
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		importance = "1.5 * 14 * 0.05";
		size = 0.029;
	};
	class Bush
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = "0.2 * 14 * 0.05 * 0.05";
		size = 0.029;
	};
	class BusStop
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\busstop_CA.paa";
		importance = 1;
		size = 0.029;
	};
	class Chapel
	{
		coefMax = 4;
		coefMin = 0.85;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
		importance = 1;
		size = 0.029;
	};
	class Church
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
		importance = 1;
		size = 0.029;
	};
	class Command
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		importance = 1;
		size = 0.029;
	};
	class Cross
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
		importance = 1;
		size = 0.029;
	};
	class CustomMark
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\custommark_ca.paa";
		importance = 1;
		size = 0.029;
	};
	class Fortress
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		importance = "2 * 16 * 0.05";
		size = 0.029;
	};
	class Fountain
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
		importance = "1 * 12 * 0.05";
		size = 0.029;
	};
	class Fuelstation
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
		importance = 1;
		size = 0.029;
	};
	class Hospital
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
		importance = 1;
		size = 0.029;
	};
	class Legend
	{
		color[] = {0,0,0,0};
		colorBackground[] = {0,0,0,0};
		font = "EtelkaNarrowMediumPro";
		h = "0";
		sizeEx = "0";
		w = "0";
		x = "0";
		y = "0";
	};
	class Lighthouse
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
		importance = 1;
		size = 0.029;
	};
	class power
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
		importance = 1;
		size = 0.029;
	};
	class powersolar
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
		importance = 1;
		size = 0.029;
	};
	class powerwind
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
		importance = 1;
		size = 0.029;
	};
	class powerwave
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
		importance = 1;
		size = 0.029;
	};
	class Quay
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
		importance = 1;
		size = 0.029;
	};
	class Rock
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
		importance = "0.5 * 12 * 0.05";
		size = 0.029;
	};
	class Ruin
	{
		coefMax = 4;
		coefMin = 1;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
		importance = "1.2 * 16 * 0.05";
		size = 0.029;
	};
	class shipwreck
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\shipwreck_CA.paa";
		importance = 1;
		size = 0.029;
	};
	class SmallTree
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = "0.6 * 12 * 0.05";
		size = 0.029;
	};
	class Stack
	{
		coefMax = 4;
		coefMin = 0.9;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
		importance = "2 * 16 * 0.05";
		size = 0.029;
	};
	class Task
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorCanceled[] = {0,0,0,0};
		colorCreated[] = {0,0,0,0};
		colorDone[] = {0,0,0,0};
		colorFailed[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
		iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
		iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
		iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
		iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
		importance = 1;
		size = 0.029;
	};
	class Tourism
	{
		coefMax = 4;
		coefMin = 0.7;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
		importance = "1 * 16 * 0.05";
		size = 0.029;
	};
	class Transmitter
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
		importance = 1;
		size = 0.029;
	};
	class Tree
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = "0.9 * 16 * 0.05";
		size = 0.029;
	};
	class ViewTower
	{
		coefMax = 4;
		coefMin = 0.5;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
		importance = "2.5 * 16 * 0.05";
		size = 0.029;
	};
	class Watertower
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
		importance = 1;
		size = 0.029;
	};
	class Waypoint
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		importance = 1;
		size = 0.029;
	};
	class WaypointCompleted
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {0,0,0,0};
		icon = "\A3\ui_f\data\map\mapcontrol\waypointCompleted_ca.paa";
		importance = 1;
		size = 0.029;
	};
};
class OPTRE_HUD_MapNormal
{
	alphaFadeEndScale = 1;
	alphaFadeStartScale = 0;
	colorBackground[] = {0.969,0.957,0.949,1};
	colorCountlines[] = {0.572,0.354,0.188,0.25};
	colorCountlinesWater[] = {0.491,0.577,0.702,0.3};
	colorForest[] = {0.624,0.78,0.388,0.5};
	colorForestBorder[] = {0,0,0,0};
	colorGrid[] = {0.1,0.1,0.1,0.6};
	colorGridMap[] = {0.1,0.1,0.1,0.6};
	colorInactive[] = {1,1,1,0.5};
	colorLevels[] = {0.286,0.177,0.094,0.5};
	colorMainCountlines[] = {0.572,0.354,0.188,0.5};
	colorMainCountlinesWater[] = {0.491,0.577,0.702,0.6};
	colorMainRoads[] = {0.9,0.5,0.3,1};
	colorMainRoadsFill[] = {1,0.6,0.4,1};
	colorNames[] = {0.1,0.1,0.1,0.9};
	colorOutside[] = {0,0,0,1};
	colorPowerLines[] = {0.1,0.1,0.1,1};
	colorRailWay[] = {0.8,0.2,0,1};
	colorRoads[] = {0.7,0.7,0.7,1};
	colorRoadsFill[] = {1,1,1,1};
	colorRocks[] = {0,0,0,0.3};
	colorRocksBorder[] = {0,0,0,0};
	colorSea[] = {0.467,0.631,0.851,0.5};
	colorText[] = {0,0,0,1};
	colorTracks[] = {0.84,0.76,0.65,0.15};
	colorTracksFill[] = {0.84,0.76,0.65,1};
	font = "TahomaB";
	fontGrid = "TahomaB";
	fontInfo = "PuristaMedium";
	fontLabel = "PuristaMedium";
	fontLevel = "TahomaB";
	fontNames = "PuristaMedium";
	fontUnits = "TahomaB";
	h = "SafeZoneH - 1.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	maxSatelliteAlpha = 0.85;
	moveOnEdges = 0;
	ptsPerSquareCLn = 10;
	ptsPerSquareCost = 10;
	ptsPerSquareExp = 10;
	ptsPerSquareFor = 9;
	ptsPerSquareForEdge = 9;
	ptsPerSquareObj = 9;
	ptsPerSquareRoad = 6;
	ptsPerSquareSea = 5;
	ptsPerSquareTxt = 3;
	scaleDefault = 0.16;
	scaleMax = 1;
	scaleMin = 0.001;
	shadow = 0;
	showCountourInterval = 0;
	sizeEx = 0.04;
	sizeExGrid = 0.02;
	sizeExInfo = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	sizeExLabel = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	sizeExLevel = 0.02;
	sizeExNames = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8) * 2";
	sizeExUnits = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
	stickX[] = {0.2,"[""Gamma""",1,"1.5]"};
	stickY[] = {0.2,"[""Gamma""",1,"1.5]"};
	style = 48;
	text = "#(argb,8,8,3)color(1,1,1,1)";
	type = 101;
	w = "SafeZoneWAbs";
	x = "SafeZoneXAbs";
	y = "SafeZoneY + 1.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	idcMarkerIcon = -1;
	idcMarkerColor = -1;
	class LineMarker
	{
		lineDistanceMin = 3e-05;
		lineLengthMin = 5;
		lineWidthThick = 0.014;
		lineWidthThin = 0.008;
		textureComboBoxColor = "#(argb,8,8,3)color(1,1,1,1)";
	};
	class ActiveMarker
	{
		color[] = {0.3,0.1,0.9,1};
		size = 50;
	};
	class Bunker
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		importance = "1.5 * 14 * 0.05";
		size = 14;
	};
	class Bush
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0.45,0.64,0.33,0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = "0.2 * 14 * 0.05 * 0.05";
		size = "14/2";
	};
	class BusStop
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\busstop_CA.paa";
		importance = 1;
		size = 24;
	};
	class Chapel
	{
		coefMax = 4;
		coefMin = 0.85;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\Chapel_CA.paa";
		importance = 1;
		size = 24;
	};
	class Church
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\church_CA.paa";
		importance = 1;
		size = 24;
	};
	class Command
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		importance = 1;
		size = 18;
	};
	class Cross
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\Cross_CA.paa";
		importance = 1;
		size = 24;
	};
	class CustomMark
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\custommark_ca.paa";
		importance = 1;
		size = 24;
	};
	class Fortress
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\bunker_ca.paa";
		importance = "2 * 16 * 0.05";
		size = 16;
	};
	class Fountain
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\fountain_ca.paa";
		importance = "1 * 12 * 0.05";
		size = 11;
	};
	class Fuelstation
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\fuelstation_CA.paa";
		importance = 1;
		size = 24;
	};
	class Hospital
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\hospital_CA.paa";
		importance = 1;
		size = 24;
	};
	class Legend
	{
		color[] = {0,0,0,1};
		colorBackground[] = {1,1,1,0.5};
		font = "PuristaMedium";
		h = "3.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
		sizeEx = "(   (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 0.8)";
		w = "10 *      (   ((safezoneW / safezoneH) min 1.2) / 40)";
		x = "SafeZoneX +      (   ((safezoneW / safezoneH) min 1.2) / 40)";
		y = "SafeZoneY + safezoneH - 4.5 *      (   (   ((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	};
	class Lighthouse
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\lighthouse_CA.paa";
		importance = 1;
		size = 24;
	};
	class power
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\power_CA.paa";
		importance = 1;
		size = 24;
	};
	class powersolar
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\powersolar_CA.paa";
		importance = 1;
		size = 24;
	};
	class powerwind
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\powerwind_CA.paa";
		importance = 1;
		size = 24;
	};
	class powerwave
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\powerwave_CA.paa";
		importance = 1;
		size = 24;
	};
	class Quay
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\quay_CA.paa";
		importance = 1;
		size = 24;
	};
	class Rock
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0.1,0.1,0.1,0.8};
		icon = "\A3\ui_f\data\map\mapcontrol\rock_ca.paa";
		importance = "0.5 * 12 * 0.05";
		size = 12;
	};
	class Ruin
	{
		coefMax = 4;
		coefMin = 1;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\ruin_ca.paa";
		importance = "1.2 * 16 * 0.05";
		size = 16;
	};
	class shipwreck
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\shipwreck_CA.paa";
		importance = 1;
		size = 24;
	};
	class SmallTree
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0.45,0.64,0.33,0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = "0.6 * 12 * 0.05";
		size = 12;
	};
	class Stack
	{
		coefMax = 4;
		coefMin = 0.9;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\stack_ca.paa";
		importance = "2 * 16 * 0.05";
		size = 20;
	};
	class Task
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {"(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0])","(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1])","(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])"};
		colorCanceled[] = {0.7,0.7,0.7,1};
		colorCreated[] = {1,1,1,1};
		colorDone[] = {0.7,1,0.3,1};
		colorFailed[] = {1,0.3,0.2,1};
		icon = "\A3\ui_f\data\map\mapcontrol\taskIcon_CA.paa";
		iconCanceled = "\A3\ui_f\data\map\mapcontrol\taskIconCanceled_CA.paa";
		iconCreated = "\A3\ui_f\data\map\mapcontrol\taskIconCreated_CA.paa";
		iconDone = "\A3\ui_f\data\map\mapcontrol\taskIconDone_CA.paa";
		iconFailed = "\A3\ui_f\data\map\mapcontrol\taskIconFailed_CA.paa";
		importance = 1;
		size = 27;
	};
	class Tourism
	{
		coefMax = 4;
		coefMin = 0.7;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\tourism_ca.paa";
		importance = "1 * 16 * 0.05";
		size = 16;
	};
	class Transmitter
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\transmitter_CA.paa";
		importance = 1;
		size = 24;
	};
	class Tree
	{
		coefMax = 4;
		coefMin = 0.25;
		color[] = {0.45,0.64,0.33,0.4};
		icon = "\A3\ui_f\data\map\mapcontrol\bush_ca.paa";
		importance = "0.9 * 16 * 0.05";
		size = 12;
	};
	class ViewTower
	{
		coefMax = 4;
		coefMin = 0.5;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\viewtower_ca.paa";
		importance = "2.5 * 16 * 0.05";
		size = 16;
	};
	class Watertower
	{
		coefMax = 1;
		coefMin = 0.85;
		color[] = {1,1,1,1};
		icon = "\A3\ui_f\data\map\mapcontrol\watertower_CA.paa";
		importance = 1;
		size = 24;
	};
	class Waypoint
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\waypoint_ca.paa";
		importance = 1;
		size = 24;
	};
	class WaypointCompleted
	{
		coefMax = 1;
		coefMin = 1;
		color[] = {0,0,0,1};
		icon = "\A3\ui_f\data\map\mapcontrol\waypointCompleted_ca.paa";
		importance = 1;
		size = 24;
	};
};
class OPTRE_HUD_RscText
{
	idc = -1;
	type = 0;
	style = 0;
	linespacing = 1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,0.9};
	text = "";
	shadow = 2;
	font = "EtelkaNarrowMediumPro";
	SizeEx = 0.04;
	fixedWidth = 0;
	x = 0;
	y = 0;
	h = 0;
	w = 0;
};
class OPTRE_HUD_RscText1
{
	idc = -1;
	type = 0;
	style = 0;
	linespacing = 1;
	colorBackground[] = {0,0,0,0};
	colorText[] = {0,0,0,0.2};
	text = "";
	shadow = 0;
	font = "EtelkaNarrowMediumPro";
	SizeEx = 0.04;
	fixedWidth = 0;
	x = 0;
	y = 0;
	h = 0;
	w = 0;
};
class OPTRE_HUD_RscSlider
{
	style = 1024;
	type = 43;
	shadow = 0;
	x = 0.4;
	y = 0.2;
	w = 0.3;
	h = 0.025;
	color[] = {1,1,1,0.6};
	colorActive[] = {1,1,1,1};
	colorDisabled[] = {1,1,1,0.6};
	arrowEmpty = "";
	arrowFull = "";
	border = "\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
	thumb = "\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
	tooltipColorText[] = {1,1,1,1};
	tooltipColorBox[] = {1,1,1,1};
	tooltipColorShade[] = {0,0,0,0.65};
};
class OPTRE_HUD_RscPicture
{
	idc = -1;
	type = 0;
	style = 48;
	colorBackground[] = {0,0,0,0};
	colorText[] = {1,1,1,0.9};
	font = "EtelkaNarrowMediumPro";
	sizeEx = 0;
	lineSpacing = 0;
	text = "";
	fixedWidth = 0;
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.2;
	h = 0.15;
};
class OPTRE_HUD_RscButton
{
	idc = -1;
	type = 1;
	text = "";
	colorText[] = {0.95,0.95,0.95,1};
	colorDisabled[] = {0.4,0.4,0.4,1};
	colorBackground[] = {0.4,0.4,0.4,1};
	colorBackgroundDisabled[] = {0.4,0.4,0.4,1};
	colorBackgroundActive[] = {0.95,0.95,0.95,1};
	colorFocused[] = {0.75,0.75,0.75,0.5};
	colorShadow[] = {0.023529,0,0.0313725,1};
	colorBorder[] = {0.023529,0,0.0313725,1};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	style = 2;
	x = 0;
	y = 0;
	w = 0.055589;
	h = 0.039216;
	shadow = 2;
	font = "EtelkaNarrowMediumPro";
	sizeEx = 0.02921;
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	bordersize = 0;
};
class OPTRE_HUD_RscButton_Invisible
{
	idc = -1;
	type = 1;
	text = "";
	colorText[] = {0,0,0,0};
	colorDisabled[] = {0,0,0,0};
	colorBackground[] = {0,0,0,0};
	colorBackgroundDisabled[] = {0,0.0,0};
	colorBackgroundActive[] = {0.15,0.35,0.55,0.7};
	colorFocused[] = {0,0,0,0};
	colorShadow[] = {0,0,0,0};
	colorBorder[] = {0,0,0,0};
	soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
	soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
	soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
	soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
	style = 2;
	x = 0;
	y = 0;
	w = 0.055589;
	h = 0.039216;
	shadow = 2;
	font = "EtelkaNarrowMediumPro";
	sizeEx = 0.02921;
	offsetX = 0.003;
	offsetY = 0.003;
	offsetPressedX = 0.002;
	offsetPressedY = 0.002;
	bordersize = 0.029;
};
class OPTRE_HUD_RscListBox
{
	idc = -1;
	type = 5;
	style = "0 + 0x10";
	font = "EtelkaNarrowMediumPro";
	sizeEx = 0.03221;
	shadow = 0;
	colorShadow[] = {0,0,0,0};
	rowHeight = 0.03;
	colorDisabled[] = {1,1,1,1};
	color[] = {1,1,1,1};
	colorText[] = {1,1,1,0.75};
	colorScrollbar[] = {0.95,0.95,0.95,1};
	colorSelect[] = {0.95,0.95,0.95,1};
	colorSelect2[] = {0.95,0.95,0.95,1};
	colorSelectBackground[] = {0.35,0.55,0.15,0.9};
	colorSelectBackground2[] = {0.35,0.55,0.15,0.9};
	columns[] = {0.1,0.7,0.1,0.1};
	period = 0;
	colorBackground[] = {0.4,0.4,0.4,0.6};
	maxHistoryDelay = 1.0;
	autoScrollSpeed = -1;
	autoScrollDelay = 5;
	autoScrollRewind = 0;
	soundSelect[] = {"\A3\ui_f\data\sound\RscListbox\soundSelect",0.09,1};
	class ListScrollBar
	{
		arrowEmpty = "\A3\ui_f\data\gui\cfg\scrollbar\arrowEmpty_ca.paa";
		arrowFull = "\A3\ui_f\data\gui\cfg\scrollbar\arrowFull_ca.paa";
		autoScrollDelay = 5;
		autoScrollEnabled = 1;
		autoScrollRewind = 0;
		autoScrollSpeed = -1;
		border = "\A3\ui_f\data\gui\cfg\scrollbar\border_ca.paa";
		color[] = {1,1,1,1};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		height = 0;
		scrollSpeed = 0.06;
		shadow = 0;
		thumb = "\A3\ui_f\data\gui\cfg\scrollbar\thumb_ca.paa";
		width = 0;
	};
};
class RscTitles
{
	class OPTRE_Communications_CamFrame
	{
		idd = -1;
		fadein = 0;
		fadeout = 0;
		duration = 9999;
		class controls
		{
			class boarder: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "OPTRE_Hud\data\PIP\pip_border.paa";
				x = "0.695937 * safezoneW + safezoneX";
				y = "0.148 * safezoneH + safezoneY";
				w = "0.391875 * safezoneW";
				h = "0.407 * safezoneH";
				onLoad = "(uinamespace setvariable [""OPTRE_HUD_CommunicationLiveFeed_Frame"",(_this select 0)]); _pos = ctrlPosition (_this select 0); (_this select 0) ctrlSetPosition [3, 0, 0, 0]; (_this select 0) ctrlCommit 0;  (_this select 0) ctrlSetPosition _pos; (_this select 0) ctrlCommit 1.2;";
			};
			class feed: OPTRE_HUD_RscPicture
			{
				idc = 1201;
				text = "#(argb,256,256,1)r2t(OPTRE_HUD_LiveFeedRender,1.0)";
				x = "0.79341 * safezoneW + safezoneX";
				y = "0.2503 * safezoneH + safezoneY";
				w = "0.1965 * safezoneW";
				h = "0.2024 * safezoneH";
				onLoad = "(uinamespace setvariable [""OPTRE_HUD_CommunicationLiveFeed_Render"",(_this select 0)]); _pos = ctrlPosition (_this select 0); (_this select 0) ctrlSetPosition [3, 0, 0, 0]; (_this select 0) ctrlCommit 0;  (_this select 0) ctrlSetPosition _pos; (_this select 0) ctrlCommit 1.2;";
			};
			class feed_signal: OPTRE_HUD_RscPicture
			{
				idc = 10;
				text = "OPTRE_Hud\data\PIP\pip_signal_100.paa";
				x = "0.695937 * safezoneW + safezoneX";
				y = "0.148 * safezoneH + safezoneY";
				w = "0.391875 * safezoneW";
				h = "0.407 * safezoneH";
				onLoad = "(uinamespace setvariable [""OPTRE_HUD_CommunicationLiveFeed_sigStrenght"",(_this select 0)]); _pos = ctrlPosition (_this select 0); (_this select 0) ctrlSetPosition [3, 0, 0, 0]; (_this select 0) ctrlCommit 0;  (_this select 0) ctrlSetPosition _pos; (_this select 0) ctrlCommit 1.2;";
			};
			class feed_bliperThing: OPTRE_HUD_RscPicture
			{
				idc = 11;
				text = "OPTRE_Hud\data\PIP\pip_rec_bip.paa";
				x = "0.695937 * safezoneW + safezoneX";
				y = "0.148 * safezoneH + safezoneY";
				w = "0.391875 * safezoneW";
				h = "0.407 * safezoneH";
				onLoad = "(uinamespace setvariable [""OPTRE_HUD_CommunicationLiveFeed_bip"",(_this select 0)]); _pos = ctrlPosition (_this select 0); (_this select 0) ctrlSetPosition [3, 0, 0, 0]; (_this select 0) ctrlCommit 0;  (_this select 0) ctrlSetPosition _pos; (_this select 0) ctrlCommit 1.2;";
			};
			class feed_pulse_weak: OPTRE_HUD_RscPicture
			{
				idc = 200;
				text = "OPTRE_Hud\data\PIP\pip_link_pulse_1.paa";
				x = "0.695937 * safezoneW + safezoneX";
				y = "0.148 * safezoneH + safezoneY";
				w = "0.391875 * safezoneW";
				h = "0.407 * safezoneH";
				onLoad = "(uinamespace setvariable [""OPTRE_HUD_CommunicationLiveFeed_PulseWeak"",(_this select 0)]); _pos = ctrlPosition (_this select 0); (_this select 0) ctrlSetPosition [3, 0, 0, 0]; (_this select 0) ctrlCommit 0;  (_this select 0) ctrlSetPosition _pos; (_this select 0) ctrlCommit 1.2;";
			};
			class feed_pulse: OPTRE_HUD_RscPicture
			{
				idc = 12;
				text = "OPTRE_Hud\data\PIP\pip_link_pulse_5.paa";
				x = "0.695937 * safezoneW + safezoneX";
				y = "0.148 * safezoneH + safezoneY";
				w = "0.391875 * safezoneW";
				h = "0.407 * safezoneH";
				onLoad = "(uinamespace setvariable [""OPTRE_HUD_CommunicationLiveFeed_Pulse"",(_this select 0)]); _pos = ctrlPosition (_this select 0); (_this select 0) ctrlSetPosition [3, 0, 0, 0]; (_this select 0) ctrlCommit 0;  (_this select 0) ctrlSetPosition _pos; (_this select 0) ctrlCommit 1.2;";
			};
			class text1: OPTRE_HUD_SructuredText
			{
				idc = 1000;
				text = "";
				x = "0.783594 * safezoneW + safezoneX";
				y = "0.188 * safezoneH + safezoneY";
				w = "0.20625 * safezoneW";
				h = "0.022 * safezoneH";
				size = 0.036;
				onLoad = "(uinamespace setvariable [""OPTRE_HUD_CommunicationLiveFeed_Text1"",(_this select 0)]); _pos = ctrlPosition (_this select 0); (_this select 0) ctrlSetPosition [3, 0, 0, 0]; (_this select 0) ctrlCommit 0;  (_this select 0) ctrlSetPosition _pos; (_this select 0) ctrlCommit 1.2;";
			};
			class text2: OPTRE_HUD_SructuredText
			{
				idc = 1001;
				text = "";
				x = "0.783594 * safezoneW + safezoneX";
				y = "0.221 * safezoneH + safezoneY";
				w = "0.20625 * safezoneW";
				h = "0.022 * safezoneH";
				size = 0.036;
				onLoad = "(uinamespace setvariable [""OPTRE_HUD_CommunicationLiveFeed_Text2"",(_this select 0)]); _pos = ctrlPosition (_this select 0); (_this select 0) ctrlSetPosition [3, 0, 0, 0]; (_this select 0) ctrlCommit 0;  (_this select 0) ctrlSetPosition _pos; (_this select 0) ctrlCommit 1.2;";
			};
			class text1_l: OPTRE_HUD_SructuredText
			{
				idc = -1;
				text = "DESIGNATION";
				x = "0.783594 * safezoneW + safezoneX";
				y = "0.188 * safezoneH + safezoneY";
				w = "0.20625 * safezoneW";
				h = "0.022 * safezoneH";
				size = 0.036;
				class Attributes
				{
					align = "left";
					color = "#070103";
				};
				onLoad = "(uinamespace setvariable [""OPTRE_HUD_CommunicationLiveFeed_Text1_l"",(_this select 0)]); _pos = ctrlPosition (_this select 0); (_this select 0) ctrlSetPosition [3, 0, 0, 0]; (_this select 0) ctrlCommit 0;  (_this select 0) ctrlSetPosition _pos; (_this select 0) ctrlCommit 1.2;";
			};
			class text2_l: OPTRE_HUD_SructuredText
			{
				idc = -1;
				text = "UNIT ID";
				x = "0.783594 * safezoneW + safezoneX";
				y = "0.221 * safezoneH + safezoneY";
				w = "0.20625 * safezoneW";
				h = "0.022 * safezoneH";
				size = 0.036;
				class Attributes
				{
					align = "left";
					color = "#070103";
				};
				onLoad = "(uinamespace setvariable [""OPTRE_HUD_CommunicationLiveFeed_Text2_l"",(_this select 0)]); _pos = ctrlPosition (_this select 0); (_this select 0) ctrlSetPosition [3, 0, 0, 0]; (_this select 0) ctrlCommit 0;  (_this select 0) ctrlSetPosition _pos; (_this select 0) ctrlCommit 1.2;";
			};
		};
	};
	class OPTRE_LHD_LeftBottom_Radar
	{
		idd = 7000;
		duration = 99999;
		class Objects{};
		class controls
		{
			class RscPicture_200: OPTRE_HUD_RscPicture
			{
				idc = 200;
				text = "\OPTRE_Hud\data\Radar\Radar.paa";
				x = "0.0101562 * safezoneW + safezoneX";
				y = "0.764 * safezoneH + safezoneY";
				w = "0.144375 * safezoneW";
				h = "0.22 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures;";
			};
			class RscPicture_201: OPTRE_HUD_rscMapControl_HUD_1
			{
				idc = 201;
				x = "0.0101562 * safezoneW + safezoneX";
				y = "0.764 * safezoneH + safezoneY";
				w = "0.144375 * safezoneW";
				h = "0.22 * safezoneH";
				onLoad = " 0 = _this spawn OPTRE_fnc_Radar;";
			};
			class RscText_1000: OPTRE_HUD_SructuredText
			{
				idc = 1000;
				text = "";
				x = "0.12875 * safezoneW + safezoneX";
				y = "0.951 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.022 * safezoneH";
				onLoad = "_scale = [] call OPTRE_Fnc_MapScale; (_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures; _OPTRE_Hud_ScaleMeters = (round (OPTRE_Hud_RadarScale / _scale) * 50); _OPTRE_Hud_ScaleMetersString = ( str _OPTRE_Hud_ScaleMeters + 'm' ); _this select 0 ctrlSetText _OPTRE_Hud_ScaleMetersString";
				size = 0.04;
				class Attributes
				{
					align = "left";
				};
			};
		};
	};
	class OPTRE_LHD_LeftBottom_PIP
	{
		idd = 7000;
		duration = 99999;
		onLoad = "_this call OPTRE_fnc_SquadPIP;";
		onUnload = "if (!isNil 'OPTRE_HUD_CAM1') then { {camDestroy _x; _x cameraEffect ['terminate','back'];} forEach [OPTRE_HUD_CAM1,OPTRE_HUD_CAM2,OPTRE_HUD_CAM3,OPTRE_HUD_CAM4]; };";
		class Objects{};
		class controls
		{
			class OPTRE_HUD_REND1: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "#(argb,256,512,1)r2t(OPTRE_HUD_REND1,1.0)";
				x = "0.0307812 * safezoneW + safezoneX";
				y = "0.819 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.149 * safezoneH";
			};
			class RscPicture_1201: OPTRE_HUD_RscPicture
			{
				idc = 1201;
				text = "\OPTRE_Hud\data\PIP\hemetCam_frame.paa";
				x = "-0.03625 * safezoneW + safezoneX";
				y = "0.744 * safezoneH + safezoneY";
				w = "0.268125 * safezoneW";
				h = "0.299 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures;";
			};
			class RscText_1000: OPTRE_HUD_SructuredText
			{
				idc = 1000;
				x = "0.005 * safezoneW + safezoneX";
				y = "0.780 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
				size = 0.035;
				class Attributes
				{
					align = "left";
				};
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures;";
			};
			class RscText_1001: OPTRE_HUD_SructuredText
			{
				idc = 1001;
				x = "0.0565625 * safezoneW + safezoneX";
				y = "0.973 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
				size = 0.035;
				class Attributes
				{
					align = "right";
				};
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures;";
			};
		};
	};
	class OPTRE_LHD_LeftBottom_HudMap
	{
		idd = 7000;
		duration = 99999;
		class Objects{};
		class controls
		{
			class RscFrame_1200: OPTRE_HUD_MapNormal
			{
				idc = 1200;
				x = "0.0307812 * safezoneW + safezoneX";
				y = "0.819 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.149 * safezoneH";
				onLoad = "0 = [(_this select 0)] call OPTRE_fnc_HudMap;";
			};
			class RscPicture_1201: OPTRE_HUD_RscPicture
			{
				idc = 1201;
				text = "\OPTRE_Hud\data\PIP\hemetCam_frame.paa";
				x = "-0.03625 * safezoneW + safezoneX";
				y = "0.744 * safezoneH + safezoneY";
				w = "0.268125 * safezoneW";
				h = "0.299 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures; ";
			};
			class RscText_1000: OPTRE_HUD_SructuredText
			{
				idc = 1000;
				x = "0.005 * safezoneW + safezoneX";
				y = "0.780 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
				size = 0.035;
				class Attributes
				{
					align = "left";
				};
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures; ";
			};
			class RscText_1001: OPTRE_HUD_SructuredText
			{
				idc = 1001;
				x = "0.0565625 * safezoneW + safezoneX";
				y = "0.973 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
				size = 0.035;
				class Attributes
				{
					align = "right";
				};
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures; (_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures; _OPTRE_Hud_ScaleMeters = ( (round ( OPTRE_Hud_MapScale / ([] call OPTRE_Fnc_MapScale) ) ) * 100); _OPTRE_Hud_ScaleMetersString = ( str _OPTRE_Hud_ScaleMeters + 'm' ); _this select 0 ctrlSetText _OPTRE_Hud_ScaleMetersString";
			};
		};
	};
	class Marrine_1_LHD_LeftBottom_Radar
	{
		idd = 7000;
		duration = 99999;
		class Objects{};
		class controls
		{
			class RscPicture_200: OPTRE_HUD_RscPicture
			{
				idc = 200;
				text = "\OPTRE_Hud\data\Radar\Radar.paa";
				x = "0.783594 * safezoneW + safezoneX";
				y = "0.203 * safezoneH + safezoneY";
				w = "0.159844 * safezoneW";
				h = "0.253 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures;";
			};
			class RscPicture_201: OPTRE_HUD_rscMapControl_HUD_1
			{
				idc = 201;
				x = "0.783594 * safezoneW + safezoneX";
				y = "0.203 * safezoneH + safezoneY";
				w = "0.159844 * safezoneW";
				h = "0.253 * safezoneH";
				onLoad = " 0 = _this spawn OPTRE_fnc_Radar;";
			};
			class RscText_1000: OPTRE_HUD_SructuredText
			{
				idc = 1000;
				text = "";
				x = "0.9125 * safezoneW + safezoneX";
				y = "0.423 * safezoneH + safezoneY";
				w = "0.0773437 * safezoneW";
				h = "0.022 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures; _OPTRE_Hud_ScaleMeters = (round (OPTRE_Hud_RadarScale / 0.01) * 50); _OPTRE_Hud_ScaleMetersString = ( str _OPTRE_Hud_ScaleMeters + 'm' ); _this select 0 ctrlSetText _OPTRE_Hud_ScaleMetersString";
				size = 0.04;
				class Attributes
				{
					align = "left";
				};
			};
		};
	};
	class Marrine_1_LHD_LeftBottom_PIP
	{
		idd = 7000;
		duration = 99999;
		onLoad = "_this call OPTRE_fnc_SquadPIP;";
		onUnload = "if (!isNil 'OPTRE_HUD_CAM1') then { {camDestroy _x; _x cameraEffect ['terminate','back'];} forEach [OPTRE_HUD_CAM1,OPTRE_HUD_CAM2,OPTRE_HUD_CAM3,OPTRE_HUD_CAM4]; };";
		class Objects{};
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "#(argb,256,256,1)r2t(OPTRE_HUD_REND1,1.0)";
				x = "0.799062 * safezoneW + safezoneX";
				y = "0.258 * safezoneH + safezoneY";
				w = "0.12375 * safezoneW";
				h = "0.143 * safezoneH";
			};
			class RscPicture_1201: OPTRE_HUD_RscPicture
			{
				idc = 1201;
				text = "\OPTRE_Hud\data\PIP\hemetCam_frame.paa";
				x = "0.742344 * safezoneW + safezoneX";
				y = "0.192 * safezoneH + safezoneY";
				w = "0.226875 * safezoneW";
				h = "0.275 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures;";
			};
			class RscText_1000: OPTRE_HUD_SructuredText
			{
				idc = 1000;
				x = "0.783593 * safezoneW + safezoneX";
				y = "0.225 * safezoneH + safezoneY";
				w = "0.108281 * safezoneW";
				h = "0.022 * safezoneH";
				class Attributes
				{
					align = "left";
				};
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures;";
			};
			class RscText_1001: OPTRE_HUD_SructuredText
			{
				idc = 1001;
				x = "0.819688 * safezoneW + safezoneX";
				y = "0.412 * safezoneH + safezoneY";
				w = "0.108281 * safezoneW";
				h = "0.022 * safezoneH";
				size = 0.035;
				class Attributes
				{
					align = "right";
				};
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Pictures;";
			};
		};
	};
	class OPTRE_Marine_Main_1
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_MarrineEyeDisplay1;";
		class Objects{};
		class controls
		{
			class RscPicture_1: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "OPTRE_Hud\Data\Marine_1\hud_glass.paa";
				x = "0.592812 * safezoneW + safezoneX";
				y = "0.071 * safezoneH + safezoneY";
				w = "0.4125 * safezoneW";
				h = "0.55 * safezoneH";
				colorBackground[] = {1,1,1,1};
				colorText[] = {0,1,0,0.25};
			};
			class RscPicture_1201: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Marine_1\hud_mount.paa";
				x = "0.587656 * safezoneW + safezoneX";
				y = "0.071 * safezoneH + safezoneY";
				w = "0.4125 * safezoneW";
				h = "0.55 * safezoneH";
				colorBackground[] = {1,1,1,1};
				colorText[] = {1,1,1,1};
			};
			class primeWeapon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				text = "";
				x = "0.70625 * safezoneW + safezoneX";
				y = "0.225 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.055 * safezoneH";
				colorText[] = {0,0,0,0.3};
			};
			class wep2: OPTRE_HUD_RscPicture
			{
				idc = 121;
				text = "";
				x = "0.701094 * safezoneW + safezoneX";
				y = "0.357 * safezoneH + safezoneY";
				w = "0.0360937 * safezoneW";
				h = "0.033 * safezoneH";
				colorText[] = {0,0,0,0.3};
			};
			class grenadeIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				text = "";
				x = "0.7475 * safezoneW + safezoneX";
				y = "0.291 * safezoneH + safezoneY";
				w = "0.0309375 * safezoneW";
				h = "0.055 * safezoneH";
				colorText[] = {0,0,0,0.3};
			};
			class wep3: OPTRE_HUD_RscPicture
			{
				idc = 123;
				text = "";
				x = "0.742344 * safezoneW + safezoneX";
				y = "0.357 * safezoneH + safezoneY";
				w = "0.0360937 * safezoneW";
				h = "0.033 * safezoneH";
				colorText[] = {0,0,0,0.3};
			};
			class RscText_1000: OPTRE_HUD_SructuredText
			{
				idc = 1000;
				text = "";
				x = "0.804219 * safezoneW + safezoneX";
				y = "0.46 * safezoneH + safezoneY";
				w = "0.0567187 * safezoneW";
				h = "0.04 * safezoneH";
				class Attributes
				{
					align = "left";
					color = "#80000000";
					size = "1.2";
				};
			};
			class RscText_1001: OPTRE_HUD_SructuredText
			{
				idc = 1001;
				text = "";
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.46 * safezoneH + safezoneY";
				w = "0.0567187 * safezoneW";
				h = "0.04 * safezoneH";
				class Attributes
				{
					align = "left";
					color = "#80000000";
					size = "1.2";
				};
			};
			class RscText_1002: OPTRE_HUD_SructuredText
			{
				idc = 1002;
				text = "";
				x = "0.701094 * safezoneW + safezoneX";
				y = "0.203 * safezoneH + safezoneY";
				w = "0.0825 * safezoneW";
				h = "0.022 * safezoneH";
				class Attributes
				{
					align = "center";
					color = "#80000000";
				};
			};
			class RscText_1004: OPTRE_HUD_SructuredText
			{
				idc = 1004;
				text = "";
				x = "0.680469 * safezoneW + safezoneX";
				y = "0.225 * safezoneH + safezoneY";
				w = "0.0257812 * safezoneW";
				h = "0.022 * safezoneH";
				class Attributes
				{
					align = "center";
					color = "#80000000";
					size = "1.5";
				};
			};
			class RscText_1005: OPTRE_HUD_SructuredText
			{
				idc = 1005;
				text = "";
				x = "0.659844 * safezoneW + safezoneX";
				y = "0.324 * safezoneH + safezoneY";
				w = "0.0876563 * safezoneW";
				h = "0.042 * safezoneH";
				class Attributes
				{
					align = "right";
					color = "#80000000";
					size = "1.1";
				};
			};
			class RscText_1006: OPTRE_HUD_SructuredText
			{
				idc = 1006;
				text = "";
				x = "0.659844 * safezoneW + safezoneX";
				y = "0.291 * safezoneH + safezoneY";
				w = "0.0876563 * safezoneW";
				h = "0.022 * safezoneH";
				class Attributes
				{
					align = "right";
					color = "#80000000";
					size = "1.5";
				};
			};
		};
	};
	class OPTRE_Marrine_1_WeaponProgress
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscText_1003: OPTRE_HUD_SructuredText
			{
				idc = 1003;
				text = "";
				x = "0.659844 * safezoneW + safezoneX";
				y = "0.247 * safezoneH + safezoneY";
				w = "0.0464063 * safezoneW";
				h = "0.022 * safezoneH";
				class Attributes
				{
					align = "center";
					color = "#80000000";
					size = "1.2";
				};
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Text; _mag = currentMagazine player; (_this select 0) ctrlSetText (if ((['Grenade', _mag, false] call BIS_fnc_inString) OR (_mag == '')) then {(getText (configfile >> 'CfgMagazines' >> _mag >> 'displayName'))} else {(str (player ammo currentWeapon player) + '/' + str (getNumber (configfile >> 'CfgMagazines' >> (currentMagazine player) >> 'count')) )})";
			};
		};
	};
	class OPTRE_Marine_Main_1_Health
	{
		idd = -1;
		duration = 99999;
		class Objects{};
		class controls
		{
			class healthIcon: OPTRE_HUD_RscPicture
			{
				idc = 1205;
				text = "OPTRE_Hud\Data\Marine_2\Health.paa";
				x = "0.964063 * safezoneW + safezoneX";
				y = "0.159 * safezoneH + safezoneY";
				w = "0.020625 * safezoneW";
				h = "0.033 * safezoneH";
				onLoad = "if !((damage player) > 0.25) then {(_this select 0) ctrlSetTextColor [0,0,0,0];};";
				colorBackground[] = {1,0,0,0.3};
				colorText[] = {1,0,0,0.3};
			};
		};
	};
	class OPTRE_MarrineGlasses_orange
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_MarrineGlass1;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "OPTRE_Hud\Data\Marine_2\hud_edges_mar_2.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.01 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.27 * safezoneH";
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0);   _pos = ctrlPosition _ctrl;      _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2];   _ctrl ctrlCommit 0;     _ctrl ctrlSetPosition _pos;   _ctrl ctrlCommit 2;};";
				colorText[] = {1,0.8,0,0.2};
			};
			class RscPicture_122: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Marine_2\hud_edges_mar_tabs.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.01 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.27 * safezoneH";
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0);   _pos = ctrlPosition _ctrl;      _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2];   _ctrl ctrlCommit 0;     _ctrl ctrlSetPosition _pos;   _ctrl ctrlCommit 2;};";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 4;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
				colorText[] = {1,0.8,0,0.9};
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00547 * safezoneW";
				h = "1.012 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.0773437 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.95375 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.0153125 * safezoneW + safezoneX";
				y = "0.027 * safezoneH + safezoneY";
				w = "0.0257812 * safezoneW";
				h = "0.044 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.95375 * safezoneW + safezoneX";
				y = "0.071 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.049 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.845468 * safezoneW + safezoneX";
				y = "0.049 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.049 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_104: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.0410937 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_105: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.0565625 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscText_300: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.016 * safezoneH + safezoneY";
				w = "0.118594 * safezoneW";
				h = "0.022 * safezoneH";
				class Attributes
				{
					align = "center";
					color = "#070103";
				};
			};
			class RscText_301: OPTRE_HUD_SructuredText
			{
				idc = 301;
				x = "0.004 * safezoneW + safezoneX";
				y = "0.082 * safezoneH + safezoneY";
				w = "0.0670312 * safezoneW";
				h = "0.044 * safezoneH";
				class Attributes
				{
					align = "center";
					color = "#070103";
				};
			};
			class RscText_302: OPTRE_HUD_SructuredText
			{
				idc = 302;
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "1.00547 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscText_303: OPTRE_HUD_SructuredText
			{
				idc = 303;
				x = "0.005 * safezoneW + safezoneX";
				y = "0.181 * safezoneH + safezoneY";
				w = "0.433125 * safezoneW";
				h = "0.561 * safezoneH";
				class Attributes
				{
					align = "left";
					color = "#070103";
				};
			};
		};
	};
	class OPTRE_MarrineGlasses_green
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_MarrineGlass1;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "OPTRE_Hud\Data\Marine_2\hud_edges_mar_2.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.01 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.27 * safezoneH";
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0);   _pos = ctrlPosition _ctrl;      _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2];   _ctrl ctrlCommit 0;     _ctrl ctrlSetPosition _pos;   _ctrl ctrlCommit 2;};";
				colorText[] = {0,1,0,0.15};
			};
			class RscPicture_122: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Marine_2\hud_edges_mar_tabs.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.01 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.27 * safezoneH";
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0);   _pos = ctrlPosition _ctrl;      _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2];   _ctrl ctrlCommit 0;     _ctrl ctrlSetPosition _pos;   _ctrl ctrlCommit 2;};";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 4;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
				colorText[] = {0,1,0,0.85};
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00547 * safezoneW";
				h = "1.012 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.0773437 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.95375 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.0153125 * safezoneW + safezoneX";
				y = "0.027 * safezoneH + safezoneY";
				w = "0.0257812 * safezoneW";
				h = "0.044 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.95375 * safezoneW + safezoneX";
				y = "0.071 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.049 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.845468 * safezoneW + safezoneX";
				y = "0.049 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.049 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_104: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.0410937 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_105: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.0565625 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscText_300: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.016 * safezoneH + safezoneY";
				w = "0.118594 * safezoneW";
				h = "0.022 * safezoneH";
				class Attributes
				{
					align = "center";
					color = "#070103";
				};
			};
			class RscText_301: OPTRE_HUD_SructuredText
			{
				idc = 301;
				x = "0.004 * safezoneW + safezoneX";
				y = "0.082 * safezoneH + safezoneY";
				w = "0.0670312 * safezoneW";
				h = "0.044 * safezoneH";
				class Attributes
				{
					align = "center";
					color = "#070103";
				};
			};
			class RscText_302: OPTRE_HUD_SructuredText
			{
				idc = 302;
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "1.00547 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscText_303: OPTRE_HUD_SructuredText
			{
				idc = 303;
				x = "0.005 * safezoneW + safezoneX";
				y = "0.181 * safezoneH + safezoneY";
				w = "0.433125 * safezoneW";
				h = "0.561 * safezoneH";
				class Attributes
				{
					align = "left";
					color = "#070103";
				};
			};
		};
	};
	class OPTRE_MarrineGlasses_red
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_MarrineGlass1;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "OPTRE_Hud\Data\Marine_2\hud_edges_mar_2.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.01 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.27 * safezoneH";
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0);   _pos = ctrlPosition _ctrl;      _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2];   _ctrl ctrlCommit 0;     _ctrl ctrlSetPosition _pos;   _ctrl ctrlCommit 2;};";
				colorText[] = {1,0,0,0.18};
			};
			class RscPicture_122: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Marine_2\hud_edges_mar_tabs.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.01 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.27 * safezoneH";
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0);   _pos = ctrlPosition _ctrl;      _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2];   _ctrl ctrlCommit 0;     _ctrl ctrlSetPosition _pos;   _ctrl ctrlCommit 2;};";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 4;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
				colorText[] = {1,0,0,0.85};
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00547 * safezoneW";
				h = "1.012 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.0773437 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.95375 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.0153125 * safezoneW + safezoneX";
				y = "0.027 * safezoneH + safezoneY";
				w = "0.0257812 * safezoneW";
				h = "0.044 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.95375 * safezoneW + safezoneX";
				y = "0.071 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.049 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.845468 * safezoneW + safezoneX";
				y = "0.049 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.049 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_104: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.0410937 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_105: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.0565625 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscText_300: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.016 * safezoneH + safezoneY";
				w = "0.118594 * safezoneW";
				h = "0.022 * safezoneH";
				class Attributes
				{
					align = "center";
					color = "#070103";
				};
			};
			class RscText_301: OPTRE_HUD_SructuredText
			{
				idc = 301;
				x = "0.004 * safezoneW + safezoneX";
				y = "0.082 * safezoneH + safezoneY";
				w = "0.0670312 * safezoneW";
				h = "0.044 * safezoneH";
				class Attributes
				{
					align = "center";
					color = "#070103";
				};
			};
			class RscText_302: OPTRE_HUD_SructuredText
			{
				idc = 302;
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "1.00547 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscText_303: OPTRE_HUD_SructuredText
			{
				idc = 303;
				x = "0.005 * safezoneW + safezoneX";
				y = "0.181 * safezoneH + safezoneY";
				w = "0.433125 * safezoneW";
				h = "0.561 * safezoneH";
				class Attributes
				{
					align = "left";
					color = "#070103";
				};
			};
		};
	};
	class OPTRE_MarrineGlasses_white
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_MarrineGlass1;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "OPTRE_Hud\Data\Marine_2\hud_edges_mar_2.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.01 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.27 * safezoneH";
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0);   _pos = ctrlPosition _ctrl;      _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2];   _ctrl ctrlCommit 0;     _ctrl ctrlSetPosition _pos;   _ctrl ctrlCommit 2;};";
				colorText[] = {1,1,1,0.05};
			};
			class RscPicture_122: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Marine_2\hud_edges_mar_tabs.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.01 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.27 * safezoneH";
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0);   _pos = ctrlPosition _ctrl;      _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2];   _ctrl ctrlCommit 0;     _ctrl ctrlSetPosition _pos;   _ctrl ctrlCommit 2;};";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 4;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
				colorText[] = {1,1,1,0.65};
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00547 * safezoneW";
				h = "1.012 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.0773437 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.95375 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.0153125 * safezoneW + safezoneX";
				y = "0.027 * safezoneH + safezoneY";
				w = "0.0257812 * safezoneW";
				h = "0.044 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.95375 * safezoneW + safezoneX";
				y = "0.071 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.049 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.845468 * safezoneW + safezoneX";
				y = "0.049 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.049 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_104: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.0410937 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_105: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.0565625 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscText_300: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.016 * safezoneH + safezoneY";
				w = "0.118594 * safezoneW";
				h = "0.022 * safezoneH";
				class Attributes
				{
					align = "center";
					color = "#070103";
				};
			};
			class RscText_301: OPTRE_HUD_SructuredText
			{
				idc = 301;
				x = "0.004 * safezoneW + safezoneX";
				y = "0.082 * safezoneH + safezoneY";
				w = "0.0670312 * safezoneW";
				h = "0.044 * safezoneH";
				class Attributes
				{
					align = "center";
					color = "#070103";
				};
			};
			class RscText_302: OPTRE_HUD_SructuredText
			{
				idc = 302;
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "1.00547 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscText_303: OPTRE_HUD_SructuredText
			{
				idc = 303;
				x = "0.005 * safezoneW + safezoneX";
				y = "0.181 * safezoneH + safezoneY";
				w = "0.433125 * safezoneW";
				h = "0.561 * safezoneH";
				class Attributes
				{
					align = "left";
					color = "#070103";
				};
			};
		};
	};
	class OPTRE_MarrineGlasses_blue
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_MarrineGlass1;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "OPTRE_Hud\Data\Marine_2\hud_edges_mar_2.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.01 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.27 * safezoneH";
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0);   _pos = ctrlPosition _ctrl;      _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2];   _ctrl ctrlCommit 0;     _ctrl ctrlSetPosition _pos;   _ctrl ctrlCommit 2;};";
				colorText[] = {0,0,1,0.15};
			};
			class RscPicture_122: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Marine_2\hud_edges_mar_tabs.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.01 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.27 * safezoneH";
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0);   _pos = ctrlPosition _ctrl;      _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2];   _ctrl ctrlCommit 0;     _ctrl ctrlSetPosition _pos;   _ctrl ctrlCommit 2;};";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 4;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
				colorText[] = {0,0,1,0.85};
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00547 * safezoneW";
				h = "1.012 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.0773437 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.95375 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.0153125 * safezoneW + safezoneX";
				y = "0.027 * safezoneH + safezoneY";
				w = "0.0257812 * safezoneW";
				h = "0.044 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.95375 * safezoneW + safezoneX";
				y = "0.071 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.049 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.845468 * safezoneW + safezoneX";
				y = "0.049 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.049 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_104: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.0410937 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_105: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.0565625 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscText_300: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.016 * safezoneH + safezoneY";
				w = "0.118594 * safezoneW";
				h = "0.022 * safezoneH";
				class Attributes
				{
					align = "center";
					color = "#070103";
				};
			};
			class RscText_301: OPTRE_HUD_SructuredText
			{
				idc = 301;
				x = "0.004 * safezoneW + safezoneX";
				y = "0.082 * safezoneH + safezoneY";
				w = "0.0670312 * safezoneW";
				h = "0.044 * safezoneH";
				class Attributes
				{
					align = "center";
					color = "#070103";
				};
			};
			class RscText_302: OPTRE_HUD_SructuredText
			{
				idc = 302;
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "1.00547 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscText_303: OPTRE_HUD_SructuredText
			{
				idc = 303;
				x = "0.005 * safezoneW + safezoneX";
				y = "0.181 * safezoneH + safezoneY";
				w = "0.433125 * safezoneW";
				h = "0.561 * safezoneH";
				class Attributes
				{
					align = "left";
					color = "#070103";
				};
			};
		};
	};
	class OPTRE_MarrineGlasses_pink
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_MarrineGlass1;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "OPTRE_Hud\Data\Marine_2\hud_edges_mar_2.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.01 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.27 * safezoneH";
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0);   _pos = ctrlPosition _ctrl;      _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2];   _ctrl ctrlCommit 0;     _ctrl ctrlSetPosition _pos;   _ctrl ctrlCommit 2;};";
				colorText[] = {0.3,0.16,0.41,0.225};
			};
			class RscPicture_122: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Marine_2\hud_edges_mar_tabs.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.01 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.27 * safezoneH";
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0);   _pos = ctrlPosition _ctrl;      _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2];   _ctrl ctrlCommit 0;     _ctrl ctrlSetPosition _pos;   _ctrl ctrlCommit 2;};";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 4;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
				colorText[] = {0.3,0.16,0.41,0.85};
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00547 * safezoneW";
				h = "1.012 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.0773437 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.95375 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.0153125 * safezoneW + safezoneX";
				y = "0.027 * safezoneH + safezoneY";
				w = "0.0257812 * safezoneW";
				h = "0.044 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.95375 * safezoneW + safezoneX";
				y = "0.071 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.049 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.845468 * safezoneW + safezoneX";
				y = "0.049 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.049 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_104: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.0410937 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscPicture_105: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.0565625 * safezoneW + safezoneX";
				y = "0.038 * safezoneH + safezoneY";
				w = "0.0154688 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class RscText_300: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.016 * safezoneH + safezoneY";
				w = "0.118594 * safezoneW";
				h = "0.022 * safezoneH";
				class Attributes
				{
					align = "center";
					color = "#070103";
				};
			};
			class RscText_301: OPTRE_HUD_SructuredText
			{
				idc = 301;
				x = "0.004 * safezoneW + safezoneX";
				y = "0.082 * safezoneH + safezoneY";
				w = "0.0670312 * safezoneW";
				h = "0.044 * safezoneH";
				class Attributes
				{
					align = "center";
					color = "#070103";
				};
			};
			class RscText_302: OPTRE_HUD_SructuredText
			{
				idc = 302;
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "1.00547 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscText_303: OPTRE_HUD_SructuredText
			{
				idc = 303;
				x = "0.005 * safezoneW + safezoneX";
				y = "0.181 * safezoneH + safezoneY";
				w = "0.433125 * safezoneW";
				h = "0.561 * safezoneH";
				class Attributes
				{
					align = "left";
					color = "#070103";
				};
			};
		};
	};
	class OPTRE_Marrine_2_AmmoCount
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscText_1003: OPTRE_HUD_SructuredText
			{
				idc = 1003;
				text = "";
				x = "0.866094 * safezoneW + safezoneX";
				y = "0.082 * safezoneH + safezoneY";
				w = "0.0825 * safezoneW";
				h = "0.025 * safezoneH";
				class Attributes
				{
					align = "left";
					color = "#80000000";
					size = ".80";
				};
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Text; _mag = currentMagazine player; (_this select 0) ctrlSetText (if ((['Grenade', _mag, false] call BIS_fnc_inString) OR (_mag == '')) then {(getText (configfile >> 'CfgMagazines' >> _mag >> 'displayName'))} else {(str (player ammo currentWeapon player) + '/' + str (getNumber (configfile >> 'CfgMagazines' >> (currentMagazine player) >> 'count')) )})";
			};
		};
	};
	class OPTRE_GLASS_HUD_AmmoCount_SMG
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "\OPTRE_Hud\data\Bullets\SMG.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.093 * safezoneH + safezoneY";
				w = "0.0670312 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1201: OPTRE_HUD_RscPicture
			{
				idc = 1201;
				text = "\OPTRE_Hud\data\Bullets\SMG.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.104 * safezoneH + safezoneY";
				w = "0.0670312 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1202: OPTRE_HUD_RscPicture
			{
				idc = 1202;
				text = "\OPTRE_Hud\data\Bullets\SMG.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.115 * safezoneH + safezoneY";
				w = "0.0670312 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_120: OPTRE_HUD_RscProgress
			{
				idc = 120;
				texture = "\OPTRE_Hud\data\Bullets\SMG.paa";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.093 * safezoneH + safezoneY";
				w = "0.0670312 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_121: OPTRE_HUD_RscProgress
			{
				idc = 121;
				texture = "\OPTRE_Hud\data\Bullets\SMG.paa";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.104 * safezoneH + safezoneY";
				w = "0.0670312 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_2',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_122: OPTRE_HUD_RscProgress
			{
				idc = 122;
				texture = "\OPTRE_Hud\data\Bullets\SMG.paa";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.115 * safezoneH + safezoneY";
				w = "0.0670312 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_3',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
		};
	};
	class OPTRE_GLASS_HUD_AmmoCount_Shotgun
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "\OPTRE_Hud\data\Bullets\Shotgun.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.085 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_120: OPTRE_HUD_RscProgress
			{
				idc = 120;
				texture = "\OPTRE_Hud\data\Bullets\Shotgun.paa";
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.085 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.022 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
		};
	};
	class OPTRE_GLASS_HUD_AmmoCount_AR
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "\OPTRE_Hud\data\Bullets\30pip.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.093 * safezoneH + safezoneY";
				w = "0.0979687 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1201: OPTRE_HUD_RscPicture
			{
				idc = 1201;
				text = "\OPTRE_Hud\data\Bullets\30pip.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.104 * safezoneH + safezoneY";
				w = "0.0979687 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_120: OPTRE_HUD_RscProgress
			{
				idc = 120;
				texture = "\OPTRE_Hud\data\Bullets\30pip.paa";
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.093 * safezoneH + safezoneY";
				w = "0.0979687 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_121: OPTRE_HUD_RscProgress
			{
				idc = 121;
				texture = "\OPTRE_Hud\data\Bullets\30pip.paa";
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.104 * safezoneH + safezoneY";
				w = "0.0979687 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_2',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
		};
	};
	class OPTRE_GLASS_HUD_AmmoCount_LMG
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "\OPTRE_Hud\data\Bullets\50pip.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.093 * safezoneH + safezoneY";
				w = "0.0825 * safezoneW";
				h = "0.0055 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1201: OPTRE_HUD_RscPicture
			{
				idc = 1201;
				text = "\OPTRE_Hud\data\Bullets\50pip.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.104 * safezoneH + safezoneY";
				w = "0.0825 * safezoneW";
				h = "0.0055 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1202: OPTRE_HUD_RscPicture
			{
				idc = 1202;
				text = "\OPTRE_Hud\data\Bullets\50pip.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.115 * safezoneH + safezoneY";
				w = "0.0825 * safezoneW";
				h = "0.0055 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1203: OPTRE_HUD_RscPicture
			{
				idc = 1203;
				text = "\OPTRE_Hud\data\Bullets\50pip.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.126 * safezoneH + safezoneY";
				w = "0.0825 * safezoneW";
				h = "0.0055 * safezoneH";
			};
			class RscPicture_120: OPTRE_HUD_RscProgress
			{
				idc = 120;
				texture = "\OPTRE_Hud\data\Bullets\50pip.paa";
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.093 * safezoneH + safezoneY";
				w = "0.0825 * safezoneW";
				h = "0.0055 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_121: OPTRE_HUD_RscProgress
			{
				idc = 121;
				texture = "\OPTRE_Hud\data\Bullets\50pip.paa";
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.104 * safezoneH + safezoneY";
				w = "0.0825 * safezoneW";
				h = "0.0055 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_2',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_122: OPTRE_HUD_RscProgress
			{
				idc = 122;
				texture = "\OPTRE_Hud\data\Bullets\50pip.paa";
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.115 * safezoneH + safezoneY";
				w = "0.0825 * safezoneW";
				h = "0.0055 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_3',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_123: OPTRE_HUD_RscProgress
			{
				idc = 1203;
				texture = "\OPTRE_Hud\data\Bullets\50pip.paa";
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.126 * safezoneH + safezoneY";
				w = "0.0825 * safezoneW";
				h = "0.0055 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_4',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
		};
	};
	class OPTRE_GLASS_HUD_AmmoCount_PistolODST
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "\OPTRE_Hud\data\Bullets\ODST_Pistol.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.881562 * safezoneW + safezoneX";
				y = "0.093 * safezoneH + safezoneY";
				w = "0.0670312 * safezoneW";
				h = "0.011 * safezoneH";
			};
			class RscPicture_123: OPTRE_HUD_RscProgress
			{
				idc = 1200;
				texture = "\OPTRE_Hud\data\Bullets\ODST_Pistol.paa";
				x = "0.881562 * safezoneW + safezoneX";
				y = "0.093 * safezoneH + safezoneY";
				w = "0.0670312 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.8]]);";
				colorBar[] = {1,1,1,1};
			};
		};
	};
	class OPTRE_GLASS_HUD_AmmoCount_PistolSmart
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "\OPTRE_Hud\data\Bullets\PistolSmart.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.082 * safezoneH + safezoneY";
				w = "0.0360937 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_123: OPTRE_HUD_RscProgress
			{
				idc = 1200;
				texture = "\OPTRE_Hud\data\Bullets\PistolSmart.paa";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.082 * safezoneH + safezoneY";
				w = "0.0360937 * safezoneW";
				h = "0.022 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.8]]);";
				colorBar[] = {1,1,1,1};
			};
		};
	};
	class OPTRE_GLASS_HUD_AmmoCount_Snipor
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "\OPTRE_Hud\data\Bullets\Sniper.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.881562 * safezoneW + safezoneX";
				y = "0.093 * safezoneH + safezoneY";
				w = "0.0360937 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1201: OPTRE_HUD_RscPicture
			{
				idc = 1201;
				text = "\OPTRE_Hud\data\Bullets\Sniper.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.917656 * safezoneW + safezoneX";
				y = "0.093 * safezoneH + safezoneY";
				w = "0.0360937 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1202: OPTRE_HUD_RscPicture
			{
				idc = 1202;
				text = "\OPTRE_Hud\data\Bullets\Sniper.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.881562 * safezoneW + safezoneX";
				y = "0.104 * safezoneH + safezoneY";
				w = "0.0360937 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1203: OPTRE_HUD_RscPicture
			{
				idc = 1203;
				text = "\OPTRE_Hud\data\Bullets\Sniper.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.917656 * safezoneW + safezoneX";
				y = "0.104 * safezoneH + safezoneY";
				w = "0.0360937 * safezoneW";
				h = "0.011 * safezoneH";
			};
			class RscPicture_120: OPTRE_HUD_RscProgress
			{
				idc = 120;
				texture = "\OPTRE_Hud\data\Bullets\Sniper.paa";
				x = "0.881562 * safezoneW + safezoneX";
				y = "0.093 * safezoneH + safezoneY";
				w = "0.0360937 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_121: OPTRE_HUD_RscProgress
			{
				idc = 121;
				texture = "\OPTRE_Hud\data\Bullets\Sniper.paa";
				x = "0.917656 * safezoneW + safezoneX";
				y = "0.093 * safezoneH + safezoneY";
				w = "0.0360937 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_2',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_122: OPTRE_HUD_RscProgress
			{
				idc = 122;
				texture = "\OPTRE_Hud\data\Bullets\Sniper.paa";
				x = "0.881562 * safezoneW + safezoneX";
				y = "0.104 * safezoneH + safezoneY";
				w = "0.0360937 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_3',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_123: OPTRE_HUD_RscProgress
			{
				idc = 1203;
				texture = "\OPTRE_Hud\data\Bullets\Sniper.paa";
				x = "0.917656 * safezoneW + safezoneX";
				y = "0.104 * safezoneH + safezoneY";
				w = "0.0360937 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_4',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
		};
	};
	class OPTRE_GLASS_HUD_AmmoCount_BR
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "\OPTRE_Hud\data\Bullets\18pip.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.0886 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1201: OPTRE_HUD_RscPicture
			{
				idc = 1201;
				text = "\OPTRE_Hud\data\Bullets\18pip.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.104 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_120: OPTRE_HUD_RscProgress
			{
				idc = 120;
				texture = "\OPTRE_Hud\data\Bullets\18pip.paa";
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.0886 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_121: OPTRE_HUD_RscProgress
			{
				idc = 121;
				texture = "\OPTRE_Hud\data\Bullets\18pip.paa";
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.104 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_2',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
		};
	};
	class OPTRE_GLASS_HUD_AmmoCount_DMR
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "\OPTRE_Hud\data\Bullets\DMR.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.093 * safezoneH + safezoneY";
				w = "0.0773437 * safezoneW";
				h = "0.011 * safezoneH";
			};
			class RscPicture_123: OPTRE_HUD_RscProgress
			{
				idc = 1200;
				texture = "\OPTRE_Hud\data\Bullets\DMR.paa";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.093 * safezoneH + safezoneY";
				w = "0.0773437 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.8]]);";
				colorBar[] = {1,1,1,1};
			};
		};
	};
	class OPTRE_GLASS_HUD_AmmoCount_RL
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "\OPTRE_Hud\data\Bullets\rocket.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.082 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.055 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1201: OPTRE_HUD_RscPicture
			{
				idc = 1201;
				text = "\OPTRE_Hud\data\Bullets\rocket.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.917656 * safezoneW + safezoneX";
				y = "0.082 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.055 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_120: OPTRE_HUD_RscProgress
			{
				idc = 120;
				texture = "\OPTRE_Hud\data\Bullets\rocket.paa";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.082 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.055 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_121: OPTRE_HUD_RscProgress
			{
				idc = 121;
				texture = "\OPTRE_Hud\data\Bullets\rocket.paa";
				x = "0.917656 * safezoneW + safezoneX";
				y = "0.082 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.055 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_2',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_GLASS_HUDColourPictNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
		};
	};
	class OPTRE_ODST_WeaponProgress
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class ammoLeftProgress: OPTRE_HUD_SructuredText
			{
				idc = 1000;
				text = "";
				x = "0.876406 * safezoneW + safezoneX";
				y = "0.863 * safezoneH + safezoneY";
				w = "0.118594 * safezoneW";
				h = "0.022 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Text; _mag = currentMagazine player; (_this select 0) ctrlSetText (if ((['Grenade', _mag, false] call BIS_fnc_inString) OR (_mag == '')) then {(getText (configfile >> 'CfgMagazines' >> _mag >> 'displayName'))} else {(str (player ammo currentWeapon player) + '/' + str (getNumber (configfile >> 'CfgMagazines' >> (currentMagazine player) >> 'count')) )})";
				class Attributes
				{
					align = "left";
				};
			};
		};
	};
	class OPTRE_ODST_HealthBar
	{
		idd = 8001;
		duration = 99999;
		onLoad = "";
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscProgress
			{
				idc = 1200;
				onLoad = "(_this select 0) progressSetPosition (1 - damage player);   _string = ((getArray (configfile >> 'CfgOptreHudSchemes' >> 'ODST_1' >> 'MainDialogs' >> (profileNamespace getVariable ['OPTRE_ODST_HUDColourMain','orange']) >> 'value')) select 2);  _array = _string call OPTRE_fnc_StringToArrayOfString;  (_this select 0) ctrlSetTextColor [(parseNumber (_array select 0)),(parseNumber (_array select 1)),(parseNumber (_array select 2)),(parseNumber (_array select 3))];";
				x = "0.262813 * safezoneW + safezoneX";
				y = "0.093 * safezoneH + safezoneY";
				w = "0.474375 * safezoneW";
				h = "0.066 * safezoneH";
				texture = "OPTRE_Hud\Data\Hud_ODST_1\hud_healthBar.paa";
				colorBar[] = {1,0.32,0,0.28};
			};
		};
	};
	class OPTRE_ODST_HUD_AmmoCount_SMG
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "\OPTRE_Hud\data\Bullets\SMG.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.885 * safezoneH + safezoneY";
				w = "0.0825 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1201: OPTRE_HUD_RscPicture
			{
				idc = 1201;
				text = "\OPTRE_Hud\data\Bullets\SMG.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0825 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1202: OPTRE_HUD_RscPicture
			{
				idc = 1202;
				text = "\OPTRE_Hud\data\Bullets\SMG.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.907 * safezoneH + safezoneY";
				w = "0.0825 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_120: OPTRE_HUD_RscProgress
			{
				idc = 120;
				texture = "\OPTRE_Hud\data\Bullets\SMG.paa";
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.885 * safezoneH + safezoneY";
				w = "0.0825 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_121: OPTRE_HUD_RscProgress
			{
				idc = 121;
				texture = "\OPTRE_Hud\data\Bullets\SMG.paa";
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0825 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_2',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_122: OPTRE_HUD_RscProgress
			{
				idc = 122;
				texture = "\OPTRE_Hud\data\Bullets\SMG.paa";
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.907 * safezoneH + safezoneY";
				w = "0.0825 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_3',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
		};
	};
	class OPTRE_ODST_HUD_AmmoCount_Shotgun
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "\OPTRE_Hud\data\Bullets\Shotgun.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.881562 * safezoneW + safezoneX";
				y = "0.874 * safezoneH + safezoneY";
				w = "0.0825 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_120: OPTRE_HUD_RscProgress
			{
				idc = 120;
				texture = "\OPTRE_Hud\data\Bullets\Shotgun.paa";
				x = "0.881562 * safezoneW + safezoneX";
				y = "0.874 * safezoneH + safezoneY";
				w = "0.0825 * safezoneW";
				h = "0.022 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
		};
	};
	class OPTRE_ODST_HUD_AmmoCount_AR
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "OPTRE_Hud\data\Bullets\AR32_new.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.863 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.022 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1201: OPTRE_HUD_RscPicture
			{
				idc = 1201;
				text = "OPTRE_Hud\data\Bullets\AR32_new.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.885 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.022 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_120: OPTRE_HUD_RscProgress
			{
				idc = 120;
				texture = "OPTRE_Hud\data\Bullets\AR32_new.paa";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.863 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.022 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_121: OPTRE_HUD_RscProgress
			{
				idc = 121;
				texture = "OPTRE_Hud\data\Bullets\AR32_new.paa";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.885 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.022 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_2',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
		};
	};
	class OPTRE_ODST_HUD_AmmoCount_LMG
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "\OPTRE_Hud\data\Bullets\50pip.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.874 * safezoneH + safezoneY";
				w = "0.103125 * safezoneW";
				h = "0.0055 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1201: OPTRE_HUD_RscPicture
			{
				idc = 1201;
				text = "\OPTRE_Hud\data\Bullets\50pip.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.885 * safezoneH + safezoneY";
				w = "0.103125 * safezoneW";
				h = "0.0055 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1202: OPTRE_HUD_RscPicture
			{
				idc = 1202;
				text = "\OPTRE_Hud\data\Bullets\50pip.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.103125 * safezoneW";
				h = "0.0055 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1203: OPTRE_HUD_RscPicture
			{
				idc = 1203;
				text = "\OPTRE_Hud\data\Bullets\50pip.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.907 * safezoneH + safezoneY";
				w = "0.103125 * safezoneW";
				h = "0.0055 * safezoneH";
			};
			class RscPicture_120: OPTRE_HUD_RscProgress
			{
				idc = 120;
				texture = "\OPTRE_Hud\data\Bullets\50pip.paa";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.874 * safezoneH + safezoneY";
				w = "0.103125 * safezoneW";
				h = "0.0055 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_121: OPTRE_HUD_RscProgress
			{
				idc = 121;
				texture = "\OPTRE_Hud\data\Bullets\50pip.paa";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.885 * safezoneH + safezoneY";
				w = "0.103125 * safezoneW";
				h = "0.0055 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_2',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_122: OPTRE_HUD_RscProgress
			{
				idc = 122;
				texture = "\OPTRE_Hud\data\Bullets\50pip.paa";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.103125 * safezoneW";
				h = "0.0055 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_3',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_123: OPTRE_HUD_RscProgress
			{
				idc = 1203;
				texture = "\OPTRE_Hud\data\Bullets\50pip.paa";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.907 * safezoneH + safezoneY";
				w = "0.103125 * safezoneW";
				h = "0.0055 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_4',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
		};
	};
	class OPTRE_ODST_HUD_AmmoCount_PistolODST
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "\OPTRE_Hud\data\Bullets\ODST_Pistol.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.891875 * safezoneW + safezoneX";
				y = "0.885 * safezoneH + safezoneY";
				w = "0.0670312 * safezoneW";
				h = "0.011 * safezoneH";
			};
			class RscPicture_123: OPTRE_HUD_RscProgress
			{
				idc = 1200;
				texture = "\OPTRE_Hud\data\Bullets\ODST_Pistol.paa";
				x = "0.891875 * safezoneW + safezoneX";
				y = "0.885 * safezoneH + safezoneY";
				w = "0.0670312 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.8]]);";
				colorBar[] = {1,1,1,1};
			};
		};
	};
	class OPTRE_ODST_HUD_AmmoCount_PistolSmart
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "\OPTRE_Hud\data\Bullets\PistolSmart.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.891875 * safezoneW + safezoneX";
				y = "0.885 * safezoneH + safezoneY";
				w = "0.0567187 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_123: OPTRE_HUD_RscProgress
			{
				idc = 1200;
				texture = "\OPTRE_Hud\data\Bullets\PistolSmart.paa";
				x = "0.891875 * safezoneW + safezoneX";
				y = "0.885 * safezoneH + safezoneY";
				w = "0.0567187 * safezoneW";
				h = "0.022 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.8]]);";
				colorBar[] = {1,1,1,1};
			};
		};
	};
	class OPTRE_ODST_HUD_AmmoCount_Snipor
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "\OPTRE_Hud\data\Bullets\Sniper.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.874 * safezoneH + safezoneY";
				w = "0.0515625 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1201: OPTRE_HUD_RscPicture
			{
				idc = 1201;
				text = "\OPTRE_Hud\data\Bullets\Sniper.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.927969 * safezoneW + safezoneX";
				y = "0.874 * safezoneH + safezoneY";
				w = "0.0515625 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1202: OPTRE_HUD_RscPicture
			{
				idc = 1202;
				text = "\OPTRE_Hud\data\Bullets\Sniper.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0515625 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1203: OPTRE_HUD_RscPicture
			{
				idc = 1203;
				text = "\OPTRE_Hud\data\Bullets\Sniper.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.927969 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0515625 * safezoneW";
				h = "0.011 * safezoneH";
			};
			class RscPicture_120: OPTRE_HUD_RscProgress
			{
				idc = 120;
				texture = "\OPTRE_Hud\data\Bullets\Sniper.paa";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.874 * safezoneH + safezoneY";
				w = "0.0515625 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_121: OPTRE_HUD_RscProgress
			{
				idc = 121;
				texture = "\OPTRE_Hud\data\Bullets\Sniper.paa";
				x = "0.927969 * safezoneW + safezoneX";
				y = "0.874 * safezoneH + safezoneY";
				w = "0.0515625 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_2',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_122: OPTRE_HUD_RscProgress
			{
				idc = 122;
				texture = "\OPTRE_Hud\data\Bullets\Sniper.paa";
				x = "0.87125 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0515625 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_3',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_123: OPTRE_HUD_RscProgress
			{
				idc = 1203;
				texture = "\OPTRE_Hud\data\Bullets\Sniper.paa";
				x = "0.927969 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0515625 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_4',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
		};
	};
	class OPTRE_ODST_HUD_AmmoCount_BR
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "\OPTRE_Hud\data\Bullets\18pip.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.866094 * safezoneW + safezoneX";
				y = "0.874 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1201: OPTRE_HUD_RscPicture
			{
				idc = 1201;
				text = "\OPTRE_Hud\data\Bullets\18pip.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.866094 * safezoneW + safezoneX";
				y = "0.885 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_120: OPTRE_HUD_RscProgress
			{
				idc = 120;
				texture = "\OPTRE_Hud\data\Bullets\18pip.paa";
				x = "0.866094 * safezoneW + safezoneX";
				y = "0.874 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_121: OPTRE_HUD_RscProgress
			{
				idc = 121;
				texture = "\OPTRE_Hud\data\Bullets\18pip.paa";
				x = "0.866094 * safezoneW + safezoneX";
				y = "0.885 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_2',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
		};
	};
	class OPTRE_ODST_HUD_AmmoCount_DMR
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "\OPTRE_Hud\data\Bullets\DMR.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.874 * safezoneH + safezoneY";
				w = "0.0670312 * safezoneW";
				h = "0.011 * safezoneH";
			};
			class RscPicture_123: OPTRE_HUD_RscProgress
			{
				idc = 1200;
				texture = "\OPTRE_Hud\data\Bullets\DMR.paa";
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.874 * safezoneH + safezoneY";
				w = "0.0670312 * safezoneW";
				h = "0.011 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.8]]);";
				colorBar[] = {1,1,1,1};
			};
		};
	};
	class OPTRE_ODST_HUD_AmmoCount_RL
	{
		idd = 8000;
		duration = 99999;
		class controls
		{
			class RscPicture_1200: OPTRE_HUD_RscPicture
			{
				idc = 1200;
				text = "\OPTRE_Hud\data\Bullets\rocket.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.863 * safezoneH + safezoneY";
				w = "0.0567187 * safezoneW";
				h = "0.066 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_1201: OPTRE_HUD_RscPicture
			{
				idc = 1201;
				text = "\OPTRE_Hud\data\Bullets\rocket.paa";
				onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
				x = "0.922813 * safezoneW + safezoneX";
				y = "0.863 * safezoneH + safezoneY";
				w = "0.0567187 * safezoneW";
				h = "0.066 * safezoneH";
				colorText[] = {1,1,1,1};
			};
			class RscPicture_120: OPTRE_HUD_RscProgress
			{
				idc = 120;
				texture = "\OPTRE_Hud\data\Bullets\rocket.paa";
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.863 * safezoneH + safezoneY";
				w = "0.0567187 * safezoneW";
				h = "0.066 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
			class RscPicture_121: OPTRE_HUD_RscProgress
			{
				idc = 121;
				texture = "\OPTRE_Hud\data\Bullets\rocket.paa";
				x = "0.922813 * safezoneW + safezoneX";
				y = "0.863 * safezoneH + safezoneY";
				w = "0.0567187 * safezoneW";
				h = "0.066 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_2',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]);";
				colorBar[] = {1,1,1,1};
			};
		};
	};
	class OPTRE_ODST_Main_1
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST1;";
		class Objects
		{
			class Compass
			{
				idc = 880;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass3
			{
				idc = 881;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_1_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass2
			{
				idc = 882;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_2_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass1
			{
				idc = 883;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_3_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
		};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_hex.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,0.5,0,1};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade .5; (_this select 0) ctrlCommit 0; _this spawn { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 1;  (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 1; };} else { (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 0; };";
			};
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,0.5,0,1};
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
			};
			class RscPicture_123: OPTRE_HUD_RscPicture
			{
				idc = 4;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_edges_hex.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,0.5,0,1};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 5;} else { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 0;};";
			};
			class compass_No1: OPTRE_HUD_RscPicture
			{
				idc = 10001;
				text = "";
				x = "0.484531 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No2: OPTRE_HUD_RscPicture
			{
				idc = 10002;
				text = "";
				x = "0.494844 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No3: OPTRE_HUD_RscPicture
			{
				idc = 10003;
				text = "";
				x = "0.505156 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.12375 * safezoneW";
				h = "0.132 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.922813 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.778437 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.850625 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.840312 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class left: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class right: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.773281 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class WeaponZero: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class GrenText: OPTRE_HUD_SructuredTextCenter
			{
				idc = 301;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class WeaponName: OPTRE_HUD_SructuredTextLeft
			{
				idc = 302;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
		};
	};
	class OPTRE_ODST_Main_1_blue
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST1;";
		class Objects
		{
			class Compass
			{
				idc = 880;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_blu.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass3
			{
				idc = 881;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_1_blu.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass2
			{
				idc = 882;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_2_blu.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass1
			{
				idc = 883;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_3_blu.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
		};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_hex.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {0.1,0.1,1,0.5};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade .5; (_this select 0) ctrlCommit 0; _this spawn { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 1;  (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 1; };} else { (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 0; };";
			};
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {0.1,0.1,1,0.5};
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
			};
			class RscPicture_122: OPTRE_HUD_RscPicture
			{
				idc = 3;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_hex_edges.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {0,0,0,0.1};
				onLoad = "(_this select 0) ctrlSetFade 0.4; (_this select 0) ctrlCommit 1;";
			};
			class RscPicture_123: OPTRE_HUD_RscPicture
			{
				idc = 4;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_edges_hex.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {0.1,0.1,1,0.5};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 5;} else { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 0;};";
			};
			class compass_No1: OPTRE_HUD_RscPicture
			{
				idc = 10001;
				text = "";
				x = "0.484531 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No2: OPTRE_HUD_RscPicture
			{
				idc = 10002;
				text = "";
				x = "0.494844 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No3: OPTRE_HUD_RscPicture
			{
				idc = 10003;
				text = "";
				x = "0.505156 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.12375 * safezoneW";
				h = "0.132 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.922813 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.778437 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.850625 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.840312 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class left: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class right: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.773281 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class WeaponZero: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class GrenText: OPTRE_HUD_SructuredTextCenter
			{
				idc = 301;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class WeaponName: OPTRE_HUD_SructuredTextLeft
			{
				idc = 302;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
		};
	};
	class OPTRE_ODST_Main_1_white
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST1;";
		class Objects
		{
			class Compass
			{
				idc = 880;
				type = 82;
				model = "\OPTRE_Hud\compass_mark.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass3
			{
				idc = 881;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_1.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass2
			{
				idc = 882;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_2.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass1
			{
				idc = 883;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_3.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
		};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_hex.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade .5; (_this select 0) ctrlCommit 0; _this spawn { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 1;  (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 1; };} else { (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 0; };";
			};
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
			};
			class RscPicture_123: OPTRE_HUD_RscPicture
			{
				idc = 4;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_edges_hex.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 5;} else { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 0;};";
			};
			class compass_No1: OPTRE_HUD_RscPicture
			{
				idc = 10001;
				text = "";
				x = "0.484531 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No2: OPTRE_HUD_RscPicture
			{
				idc = 10002;
				text = "";
				x = "0.494844 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No3: OPTRE_HUD_RscPicture
			{
				idc = 10003;
				text = "";
				x = "0.505156 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.12375 * safezoneW";
				h = "0.132 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.922813 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.778437 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.850625 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.840312 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class left: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class right: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.773281 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class WeaponZero: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class GrenText: OPTRE_HUD_SructuredTextCenter
			{
				idc = 301;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class WeaponName: OPTRE_HUD_SructuredTextLeft
			{
				idc = 302;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
		};
	};
	class OPTRE_ODST_Main_1_red
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST1;";
		class Objects
		{
			class Compass
			{
				idc = 880;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass3
			{
				idc = 881;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_1_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass2
			{
				idc = 882;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_2_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass1
			{
				idc = 883;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_3_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
		};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_hex.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,0,0,1};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade .5; (_this select 0) ctrlCommit 0; _this spawn { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 1;  (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 1; };} else { (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 0; };";
			};
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,0,0,1};
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
			};
			class RscPicture_123: OPTRE_HUD_RscPicture
			{
				idc = 4;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_edges_hex.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,0.1,0.1,1};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 5;} else { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 0;};";
			};
			class compass_No1: OPTRE_HUD_RscPicture
			{
				idc = 10001;
				text = "";
				x = "0.484531 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No2: OPTRE_HUD_RscPicture
			{
				idc = 10002;
				text = "";
				x = "0.494844 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No3: OPTRE_HUD_RscPicture
			{
				idc = 10003;
				text = "";
				x = "0.505156 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.12375 * safezoneW";
				h = "0.132 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.922813 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.778437 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.850625 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.840312 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class left: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class right: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.773281 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class WeaponZero: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class GrenText: OPTRE_HUD_SructuredTextCenter
			{
				idc = 301;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class WeaponName: OPTRE_HUD_SructuredTextLeft
			{
				idc = 302;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
		};
	};
	class OPTRE_ODST_Main_1_yellow
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST1;";
		class Objects
		{
			class Compass
			{
				idc = 880;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass3
			{
				idc = 881;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_1_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass2
			{
				idc = 882;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_2_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass1
			{
				idc = 883;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_3_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
		};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_hex.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,1,0,1};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade .5; (_this select 0) ctrlCommit 0; _this spawn { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 1;  (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 1; };} else { (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 0; };";
			};
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,1,0,1};
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
			};
			class RscPicture_123: OPTRE_HUD_RscPicture
			{
				idc = 4;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_edges_hex.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,1,0,1};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 5;} else { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 0;};";
			};
			class compass_No1: OPTRE_HUD_RscPicture
			{
				idc = 10001;
				text = "";
				x = "0.484531 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No2: OPTRE_HUD_RscPicture
			{
				idc = 10002;
				text = "";
				x = "0.494844 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No3: OPTRE_HUD_RscPicture
			{
				idc = 10003;
				text = "";
				x = "0.505156 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.12375 * safezoneW";
				h = "0.132 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.922813 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.778437 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.850625 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.840312 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class left: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class right: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.773281 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class WeaponZero: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class GrenText: OPTRE_HUD_SructuredTextCenter
			{
				idc = 301;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class WeaponName: OPTRE_HUD_SructuredTextLeft
			{
				idc = 302;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
		};
	};
	class OPTRE_ODST_Main_1_Rookie
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST1;";
		class Objects
		{
			class Compass
			{
				idc = 880;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass3
			{
				idc = 881;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_1_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass2
			{
				idc = 882;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_2_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass1
			{
				idc = 883;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_3_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
		};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_hex.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {0.94,0.84,0.16,1};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade .5; (_this select 0) ctrlCommit 0; _this spawn { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 1;  (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 1; };} else { (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 0; };";
			};
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {0.94,0.84,0.16,1};
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
			};
			class RscPicture_123: OPTRE_HUD_RscPicture
			{
				idc = 4;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_edges_hex.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {0.94,0.84,0.16,1};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 5;} else { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 0;};";
			};
			class compass_No1: OPTRE_HUD_RscPicture
			{
				idc = 10001;
				text = "";
				x = "0.484531 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No2: OPTRE_HUD_RscPicture
			{
				idc = 10002;
				text = "";
				x = "0.494844 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No3: OPTRE_HUD_RscPicture
			{
				idc = 10003;
				text = "";
				x = "0.505156 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.12375 * safezoneW";
				h = "0.132 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.922813 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.778437 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.850625 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.840312 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class left: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class right: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.773281 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class WeaponZero: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class GrenText: OPTRE_HUD_SructuredTextCenter
			{
				idc = 301;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class WeaponName: OPTRE_HUD_SructuredTextLeft
			{
				idc = 302;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
		};
	};
	class OPTRE_ODST_Main_1_blue_Spartan
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST1;";
		class Objects
		{
			class Compass
			{
				idc = 880;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_blu.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass3
			{
				idc = 881;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_1_blu.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass2
			{
				idc = 882;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_2_blu.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass1
			{
				idc = 883;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_3_blu.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
		};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_hex.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {0.161,0.341,1,1};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade .5; (_this select 0) ctrlCommit 0; _this spawn { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 1;  (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 1; };} else { (_this select 0) ctrlSetFade 1; (_this select 0) ctrlCommit 0; };";
			};
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {0.161,0.341,1,1};
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
			};
			class RscPicture_122: OPTRE_HUD_RscPicture
			{
				idc = 3;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_hex_edges.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {0,0,0,0.23};
				onLoad = "(_this select 0) ctrlSetFade 0.4; (_this select 0) ctrlCommit 1;";
			};
			class RscPicture_123: OPTRE_HUD_RscPicture
			{
				idc = 4;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_edges_hex.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {0.161,0.341,1,1};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 5;} else { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 0;};";
			};
			class compass_No1: OPTRE_HUD_RscPicture
			{
				idc = 10001;
				text = "";
				x = "0.484531 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No2: OPTRE_HUD_RscPicture
			{
				idc = 10002;
				text = "";
				x = "0.494844 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No3: OPTRE_HUD_RscPicture
			{
				idc = 10003;
				text = "";
				x = "0.505156 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.12375 * safezoneW";
				h = "0.132 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.922813 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.778437 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.850625 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.840312 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class left: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class right: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.773281 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class WeaponZero: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class GrenText: OPTRE_HUD_SructuredTextCenter
			{
				idc = 301;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class WeaponName: OPTRE_HUD_SructuredTextLeft
			{
				idc = 302;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
		};
	};
	class OPTRE_ODST_Main_1_Broken
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST2;";
		class Objects{};
		class controls
		{
			class RscPicture_120: OPTRE_HUD_RscPicture
			{
				idc = 1;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_cracked.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				onLoad = "(_this select 0) ctrlSetTextColor OPTRE_Hud_ColorScheme_Frame;";
			};
		};
	};
	class OPTRE_ODST_Main_1_NoHex
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST1;";
		class Objects
		{
			class Compass
			{
				idc = 880;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass3
			{
				idc = 881;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_1_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass2
			{
				idc = 882;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_2_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass1
			{
				idc = 883;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_3_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
		};
		class controls
		{
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,0.5,0,1};
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
			};
			class RscPicture_123: OPTRE_HUD_RscPicture
			{
				idc = 4;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_edges.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,0.5,0,1};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 5;} else { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 0;};";
			};
			class compass_No1: OPTRE_HUD_RscPicture
			{
				idc = 10001;
				text = "";
				x = "0.484531 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No2: OPTRE_HUD_RscPicture
			{
				idc = 10002;
				text = "";
				x = "0.494844 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No3: OPTRE_HUD_RscPicture
			{
				idc = 10003;
				text = "";
				x = "0.505156 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.12375 * safezoneW";
				h = "0.132 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.922813 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.778437 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.850625 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.840312 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class left: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class right: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.773281 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class WeaponZero: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class GrenText: OPTRE_HUD_SructuredTextCenter
			{
				idc = 301;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class WeaponName: OPTRE_HUD_SructuredTextLeft
			{
				idc = 302;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
		};
	};
	class OPTRE_ODST_Main_1_blue_NoHex
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST1;";
		class Objects
		{
			class Compass
			{
				idc = 880;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_blu.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass3
			{
				idc = 881;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_1_blu.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass2
			{
				idc = 882;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_2_blu.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass1
			{
				idc = 883;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_3_blu.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
		};
		class controls
		{
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {0.1,0.1,1,0.5};
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
			};
			class RscPicture_123: OPTRE_HUD_RscPicture
			{
				idc = 4;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_edges.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {0.1,0.1,1,0.5};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 5;} else { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 0;};";
			};
			class compass_No1: OPTRE_HUD_RscPicture
			{
				idc = 10001;
				text = "";
				x = "0.484531 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No2: OPTRE_HUD_RscPicture
			{
				idc = 10002;
				text = "";
				x = "0.494844 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No3: OPTRE_HUD_RscPicture
			{
				idc = 10003;
				text = "";
				x = "0.505156 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.12375 * safezoneW";
				h = "0.132 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.922813 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.778437 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.850625 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.840312 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class left: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class right: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.773281 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class WeaponZero: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class GrenText: OPTRE_HUD_SructuredTextCenter
			{
				idc = 301;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class WeaponName: OPTRE_HUD_SructuredTextLeft
			{
				idc = 302;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
		};
	};
	class OPTRE_ODST_Main_1_white_NoHex
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST1;";
		class Objects
		{
			class Compass
			{
				idc = 880;
				type = 82;
				model = "\OPTRE_Hud\compass_mark.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass3
			{
				idc = 881;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_1.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass2
			{
				idc = 882;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_2.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass1
			{
				idc = 883;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_3.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
		};
		class controls
		{
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
			};
			class RscPicture_123: OPTRE_HUD_RscPicture
			{
				idc = 4;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_edges.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 5;} else { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 0;};";
			};
			class compass_No1: OPTRE_HUD_RscPicture
			{
				idc = 10001;
				text = "";
				x = "0.484531 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No2: OPTRE_HUD_RscPicture
			{
				idc = 10002;
				text = "";
				x = "0.494844 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No3: OPTRE_HUD_RscPicture
			{
				idc = 10003;
				text = "";
				x = "0.505156 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.12375 * safezoneW";
				h = "0.132 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.922813 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.778437 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.850625 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.840312 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class left: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class right: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.773281 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class WeaponZero: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class GrenText: OPTRE_HUD_SructuredTextCenter
			{
				idc = 301;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class WeaponName: OPTRE_HUD_SructuredTextLeft
			{
				idc = 302;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
		};
	};
	class OPTRE_ODST_Main_1_red_NoHex
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST1;";
		class Objects
		{
			class Compass
			{
				idc = 880;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass3
			{
				idc = 881;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_1_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass2
			{
				idc = 882;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_2_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass1
			{
				idc = 883;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_3_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
		};
		class controls
		{
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,0,0,1};
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
			};
			class RscPicture_123: OPTRE_HUD_RscPicture
			{
				idc = 4;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_edges.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,0.1,0.1,1};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 5;} else { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 0;};";
			};
			class compass_No1: OPTRE_HUD_RscPicture
			{
				idc = 10001;
				text = "";
				x = "0.484531 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No2: OPTRE_HUD_RscPicture
			{
				idc = 10002;
				text = "";
				x = "0.494844 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No3: OPTRE_HUD_RscPicture
			{
				idc = 10003;
				text = "";
				x = "0.505156 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.12375 * safezoneW";
				h = "0.132 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.922813 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.778437 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.850625 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.840312 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class left: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class right: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.773281 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class WeaponZero: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class GrenText: OPTRE_HUD_SructuredTextCenter
			{
				idc = 301;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class WeaponName: OPTRE_HUD_SructuredTextLeft
			{
				idc = 302;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
		};
	};
	class OPTRE_ODST_Main_1_yellow_NoHex
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST1;";
		class Objects
		{
			class Compass
			{
				idc = 880;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass3
			{
				idc = 881;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_1_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass2
			{
				idc = 882;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_2_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass1
			{
				idc = 883;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_3_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
		};
		class controls
		{
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,1,0,1};
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
			};
			class RscPicture_123: OPTRE_HUD_RscPicture
			{
				idc = 4;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_edges.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,1,0,1};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 5;} else { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 0;};";
			};
			class compass_No1: OPTRE_HUD_RscPicture
			{
				idc = 10001;
				text = "";
				x = "0.484531 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No2: OPTRE_HUD_RscPicture
			{
				idc = 10002;
				text = "";
				x = "0.494844 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No3: OPTRE_HUD_RscPicture
			{
				idc = 10003;
				text = "";
				x = "0.505156 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.12375 * safezoneW";
				h = "0.132 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.922813 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.778437 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.850625 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.840312 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class left: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class right: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.773281 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class WeaponZero: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class GrenText: OPTRE_HUD_SructuredTextCenter
			{
				idc = 301;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class WeaponName: OPTRE_HUD_SructuredTextLeft
			{
				idc = 302;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
		};
	};
	class OPTRE_ODST_Main_1_Quite
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST1;";
		class Objects
		{
			class Compass
			{
				idc = 880;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass3
			{
				idc = 881;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_1_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass2
			{
				idc = 882;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_2_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass1
			{
				idc = 883;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_3_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
		};
		class controls
		{
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,0.5,0,1};
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
			};
			class RscPicture_123: OPTRE_HUD_RscPicture
			{
				idc = 4;
				text = "OPTRE_Hud\Data\Hud_ODST_1\HudOutLineLight.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,0.5,0,1};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 5;} else { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 0;};";
			};
			class compass_No1: OPTRE_HUD_RscPicture
			{
				idc = 10001;
				text = "";
				x = "0.484531 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No2: OPTRE_HUD_RscPicture
			{
				idc = 10002;
				text = "";
				x = "0.494844 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No3: OPTRE_HUD_RscPicture
			{
				idc = 10003;
				text = "";
				x = "0.505156 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.12375 * safezoneW";
				h = "0.132 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.922813 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.778437 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.850625 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.840312 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class left: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class right: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.773281 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class WeaponZero: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class GrenText: OPTRE_HUD_SructuredTextCenter
			{
				idc = 301;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class WeaponName: OPTRE_HUD_SructuredTextLeft
			{
				idc = 302;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
		};
	};
	class OPTRE_ODST_Main_1_blue_Quite
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST1;";
		class Objects
		{
			class Compass
			{
				idc = 880;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_blu.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass3
			{
				idc = 881;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_1_blu.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass2
			{
				idc = 882;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_2_blu.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass1
			{
				idc = 883;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_3_blu.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
		};
		class controls
		{
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {0.1,0.1,1,0.5};
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
			};
			class RscPicture_123: OPTRE_HUD_RscPicture
			{
				idc = 4;
				text = "OPTRE_Hud\Data\Hud_ODST_1\HudOutLineLight.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {0.1,0.1,1,0.5};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 5;} else { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 0;};";
			};
			class compass_No1: OPTRE_HUD_RscPicture
			{
				idc = 10001;
				text = "";
				x = "0.484531 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No2: OPTRE_HUD_RscPicture
			{
				idc = 10002;
				text = "";
				x = "0.494844 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No3: OPTRE_HUD_RscPicture
			{
				idc = 10003;
				text = "";
				x = "0.505156 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.12375 * safezoneW";
				h = "0.132 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.922813 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.778437 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.850625 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.840312 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class left: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class right: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.773281 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class WeaponZero: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class GrenText: OPTRE_HUD_SructuredTextCenter
			{
				idc = 301;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class WeaponName: OPTRE_HUD_SructuredTextLeft
			{
				idc = 302;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
		};
	};
	class OPTRE_ODST_Main_1_white_Quite
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST1;";
		class Objects
		{
			class Compass
			{
				idc = 880;
				type = 82;
				model = "\OPTRE_Hud\compass_mark.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass3
			{
				idc = 881;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_1.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass2
			{
				idc = 882;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_2.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass1
			{
				idc = 883;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_3.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
		};
		class controls
		{
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
			};
			class RscPicture_123: OPTRE_HUD_RscPicture
			{
				idc = 4;
				text = "OPTRE_Hud\Data\Hud_ODST_1\HudOutLineLight.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,1,1,1};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 5;} else { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 0;};";
			};
			class compass_No1: OPTRE_HUD_RscPicture
			{
				idc = 10001;
				text = "";
				x = "0.484531 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No2: OPTRE_HUD_RscPicture
			{
				idc = 10002;
				text = "";
				x = "0.494844 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No3: OPTRE_HUD_RscPicture
			{
				idc = 10003;
				text = "";
				x = "0.505156 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.12375 * safezoneW";
				h = "0.132 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.922813 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.778437 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.850625 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.840312 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class left: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class right: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.773281 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class WeaponZero: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class GrenText: OPTRE_HUD_SructuredTextCenter
			{
				idc = 301;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class WeaponName: OPTRE_HUD_SructuredTextLeft
			{
				idc = 302;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
		};
	};
	class OPTRE_ODST_Main_1_red_Quite
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST1;";
		class Objects
		{
			class Compass
			{
				idc = 880;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass3
			{
				idc = 881;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_1_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass2
			{
				idc = 882;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_2_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass1
			{
				idc = 883;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_3_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
		};
		class controls
		{
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,0,0,1};
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
			};
			class RscPicture_123: OPTRE_HUD_RscPicture
			{
				idc = 4;
				text = "OPTRE_Hud\Data\Hud_ODST_1\HudOutLineLight.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,0.1,0.1,1};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 5;} else { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 0;};";
			};
			class compass_No1: OPTRE_HUD_RscPicture
			{
				idc = 10001;
				text = "";
				x = "0.484531 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No2: OPTRE_HUD_RscPicture
			{
				idc = 10002;
				text = "";
				x = "0.494844 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No3: OPTRE_HUD_RscPicture
			{
				idc = 10003;
				text = "";
				x = "0.505156 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.12375 * safezoneW";
				h = "0.132 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.922813 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.778437 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.850625 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.840312 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class left: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class right: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.773281 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class WeaponZero: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class GrenText: OPTRE_HUD_SructuredTextCenter
			{
				idc = 301;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class WeaponName: OPTRE_HUD_SructuredTextLeft
			{
				idc = 302;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
		};
	};
	class OPTRE_ODST_Main_1_yellow_Quite
	{
		idd = 8000;
		duration = 99999;
		onLoad = "_this spawn OPTRE_fnc_HudLoad_ODST1;";
		class Objects
		{
			class Compass
			{
				idc = 880;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass3
			{
				idc = 881;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_1_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass2
			{
				idc = 882;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_2_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
			class Compass1
			{
				idc = 883;
				type = 82;
				model = "\OPTRE_Hud\compass_mark_3_org.p3d";
				scale = 3;
				direction[] = {0,0,0};
				up[] = {0,0,0};
				position[] = {0.5,1.2,0.5};
				x = 0.5;
				y = 0.5;
				z = 0.5;
				xBack = 0.5;
				yBack = 0.5;
				zBack = 1.2;
				inBack = 1;
				enableZoom = 0;
				zoomDuration = 0;
			};
		};
		class controls
		{
			class RscPicture_121: OPTRE_HUD_RscPicture
			{
				idc = 2;
				text = "OPTRE_Hud\Data\Hud_ODST_1\hud_line.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,1,0,1};
				onLoad = "if !OPTRE_Hud_On then {_ctrl = (_this select 0); _pos = ctrlPosition _ctrl; _ctrl ctrlSetPosition [(_pos select 0), -2.3, (_pos select 2), -2]; _ctrl ctrlCommit 0; _ctrl ctrlSetPosition [(_pos select 0), 2, (_pos select 2), 2];; _ctrl ctrlCommit 1;} else {_ctrl = (_this select 0); _ctrl ctrlSetFade 1; _ctrl ctrlCommit 0; };";
			};
			class RscPicture_123: OPTRE_HUD_RscPicture
			{
				idc = 4;
				text = "OPTRE_Hud\Data\Hud_ODST_1\HudOutLineLight.paa";
				x = "-0.000156274 * safezoneW + safezoneX";
				y = "-0.00599999 * safezoneH + safezoneY";
				w = "1.00031 * safezoneW";
				h = "1.012 * safezoneH";
				colorText[] = {1,1,0,1};
				onLoad = "if !OPTRE_Hud_On then {(_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 5;} else { (_this select 0) ctrlSetFade 0.5; (_this select 0) ctrlCommit 0;};";
			};
			class compass_No1: OPTRE_HUD_RscPicture
			{
				idc = 10001;
				text = "";
				x = "0.484531 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No2: OPTRE_HUD_RscPicture
			{
				idc = 10002;
				text = "";
				x = "0.494844 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class compass_No3: OPTRE_HUD_RscPicture
			{
				idc = 10003;
				text = "";
				x = "0.505156 * safezoneW + safezoneX";
				y = "0.112 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class primeWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 120;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.12375 * safezoneW";
				h = "0.132 * safezoneH";
			};
			class secondaryWeaponIcon: OPTRE_HUD_RscPicture
			{
				idc = 121;
				x = "0.922813 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class throwIcon: OPTRE_HUD_RscPicture
			{
				idc = 122;
				x = "0.778437 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.04125 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class atIcon: OPTRE_HUD_RscPicture
			{
				idc = 123;
				x = "0.860937 * safezoneW + safezoneX";
				y = "0.912 * safezoneH + safezoneY";
				w = "0.061875 * safezoneW";
				h = "0.066 * safezoneH";
			};
			class RscPicture_101: OPTRE_HUD_RscPicture
			{
				idc = 101;
				x = "0.850625 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_102: OPTRE_HUD_RscPicture
			{
				idc = 102;
				x = "0.840312 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class RscPicture_103: OPTRE_HUD_RscPicture
			{
				idc = 103;
				x = "0.83 * safezoneW + safezoneX";
				y = "0.841 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class left: OPTRE_HUD_RscPicture
			{
				idc = 104;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class right: OPTRE_HUD_RscPicture
			{
				idc = 105;
				x = "0.773281 * safezoneW + safezoneX";
				y = "0.896 * safezoneH + safezoneY";
				w = "0.0103125 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class WeaponZero: OPTRE_HUD_SructuredText
			{
				idc = 300;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
			class GrenText: OPTRE_HUD_SructuredTextCenter
			{
				idc = 301;
				x = "0.762969 * safezoneW + safezoneX";
				y = "0.962 * safezoneH + safezoneY";
				w = "0.0721875 * safezoneW";
				h = "0.033 * safezoneH";
			};
			class WeaponName: OPTRE_HUD_SructuredTextLeft
			{
				idc = 302;
				x = "0.855781 * safezoneW + safezoneX";
				y = "0.775 * safezoneH + safezoneY";
				w = "0.134062 * safezoneW";
				h = "0.022 * safezoneH";
			};
		};
	};
};
class CfgOptreHudSchemes
{
	class EYE
	{
		class MainDialogs
		{
			OPTRE_EyePiece = "OPTRE_Marine_Main_1";
		};
		class LHDs
		{
			LHD_0[] = {"","LHD OFF"};
			LHD_1[] = {"Marrine_1_LHD_LeftBottom_Radar","LHD Identify Friend / Foe"};
			LHD_2[] = {"Marrine_1_LHD_LeftBottom_PIP","LHD Team Shoulder Cameras"};
			LHD_3[] = {"",""};
			LHD_4[] = {"",""};
		};
		healthBar = "OPTRE_Marine_Main_1_Health";
		ammoCounter = "OPTRE_Marrine_1_WeaponProgress";
		sheildBar = "";
		overSheildBar = "";
		armMenuItems[] = {};
	};
	class Glasses
	{
		class MainDialogs
		{
			OPTRE_HUD_Glasses = "OPTRE_MarrineGlasses_orange";
			OPTRE_HUD_g_Glasses = "OPTRE_MarrineGlasses_green";
			OPTRE_HUD_r_Glasses = "OPTRE_MarrineGlasses_red";
			OPTRE_HUD_w_Glasses = "OPTRE_MarrineGlasses_white";
			OPTRE_HUD_b_Glasses = "OPTRE_MarrineGlasses_blue";
			OPTRE_HUD_p_Glasses = "OPTRE_MarrineGlasses_pink";
		};
		class LHDs
		{
			LHD_0[] = {"","LHD OFF"};
			LHD_1[] = {"OPTRE_LHD_LeftBottom_Radar","LHD Identify Friend / Foe"};
			LHD_2[] = {"OPTRE_LHD_LeftBottom_PIP","LHD Team Shoulder Cameras"};
			LHD_3[] = {"OPTRE_LHD_LeftBottom_HudMap","LHD Personal Navigation Assistant"};
			LHD_4[] = {"",""};
		};
		healthBar = "OPTRE_Marine_Main_1_Health";
		ammoCounter = "OPTRE_Marrine_2_AmmoCount";
		sheildBar = "";
		overSheildBar = "";
		armMenuItems[] = {};
	};
	class ODST_1
	{
		class MainDialogs
		{
			class orange
			{
				value[] = {"OPTRE_ODST_Main_1","[Hex] Orange","1,0.32,0,0.28"};
			};
			class orange_Rookie
			{
				value[] = {"OPTRE_ODST_Main_1_Rookie","[Hex] Rookie Orange","1,0.32,0,0.28"};
			};
			class blue
			{
				value[] = {"OPTRE_ODST_Main_1_blue","[Hex] Blue","0.1,0.1,1,0.28"};
			};
			class blue_Spartan
			{
				value[] = {"OPTRE_ODST_Main_1_blue_Spartan","[Hex] Spartan Blue","0.1,0.1,1,0.28"};
			};
			class white
			{
				value[] = {"OPTRE_ODST_Main_1_white","[Hex] White","1,1,1,0.28"};
			};
			class red
			{
				value[] = {"OPTRE_ODST_Main_1_red","[Hex] Red","1,0.32,0,0.28"};
			};
			class yellow
			{
				value[] = {"OPTRE_ODST_Main_1_yellow","[Hex] Yellow","1,0.32,0,0.28"};
			};
			class orange1
			{
				value[] = {"OPTRE_ODST_Main_1_NoHex","[Plain] Orange","1,0.32,0,0.28"};
			};
			class blue1
			{
				value[] = {"OPTRE_ODST_Main_1_blue_NoHex","[Plain] Blue","0.1,0.1,1,0.28"};
			};
			class white1
			{
				value[] = {"OPTRE_ODST_Main_1_white_NoHex","[Plain] White","1,1,1,0.28"};
			};
			class red1
			{
				value[] = {"OPTRE_ODST_Main_1_red_NoHex","[Plain] Red","1,0.32,0,0.28"};
			};
			class yellow1
			{
				value[] = {"OPTRE_ODST_Main_1_yellow_NoHex","[Plain] Yellow","1,0.32,0,0.28"};
			};
			class orange2
			{
				value[] = {"OPTRE_ODST_Main_1_Quite","[Quite] Orange","1,0.32,0,0.28"};
			};
			class blue2
			{
				value[] = {"OPTRE_ODST_Main_1_blue_Quite","[Quite] Blue","0.1,0.1,1,0.28"};
			};
			class white2
			{
				value[] = {"OPTRE_ODST_Main_1_white_Quite","[Quite] White","1,1,1,0.28"};
			};
			class red2
			{
				value[] = {"OPTRE_ODST_Main_1_red_Quite","[Quite] Red","1,0.32,0,0.28"};
			};
			class yellow2
			{
				value[] = {"OPTRE_ODST_Main_1_yellow_Quite","[Quite] Yellow","1,0.32,0,0.28"};
			};
		};
		class LHDs
		{
			LHD_0[] = {"","LHD OFF"};
			LHD_1[] = {"OPTRE_LHD_LeftBottom_Radar","LHD Identify Friend "};
			LHD_2[] = {"OPTRE_LHD_LeftBottom_PIP","LHD Team Shoulder Cameras"};
			LHD_3[] = {"OPTRE_LHD_LeftBottom_HudMap","LHD Personal Navigation Assistant"};
			LHD_4[] = {"",""};
		};
		class AmmoCounters
		{
			smg[] = {"DialogName",3,60};
		};
		healthBar = "OPTRE_ODST_HealthBar";
		ammoCounter = "OPTRE_ODST_WeaponProgress";
		sheildBar = "";
		overSheildBar = "";
		armMenuItems[] = {};
	};
	class ODST_2: ODST_1{};
	class ONI{};
	class NotATopSecertProjectCalledMJOLNIR{};
	class Pilots{};
};
class CfgVehicles
{
	class All{};
	class Static: All{};
	class Building: Static{};
	class NonStrategic: Building{};
	class TargetTraining: NonStrategic{};
	class TargetGrenade: TargetTraining{};
	class OPTRE_compass_mark: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark";
		model = "\OPTRE_Hud\compass_mark.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_compass_mark_1: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark 1";
		model = "\OPTRE_Hud\compass_mark_1.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_compass_mark_2: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark 2";
		model = "\OPTRE_Hud\compass_mark_2.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_compass_mark_3: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark 3";
		model = "\OPTRE_Hud\compass_mark_3.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_compass_mark_blu: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark Blue";
		model = "\OPTRE_Hud\compass_mark_blu.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_compass_mark_1_blu: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark 1 Blue";
		model = "\OPTRE_Hud\compass_mark_1_blu.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_compass_mark_2_blu: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark 2 Blue";
		model = "\OPTRE_Hud\compass_mark_2_blu.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_compass_mark_3_blu: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark 3 Blue";
		model = "\OPTRE_Hud\compass_mark_3_blu.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_compass_mark_org: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark Orange";
		model = "\OPTRE_Hud\compass_mark_org.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_compass_mark_1_org: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark 1 Orange";
		model = "\OPTRE_Hud\compass_mark_1_org.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_compass_mark_2_org: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark 2 Orange";
		model = "\OPTRE_Hud\compass_mark_2_org.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
	class OPTRE_compass_mark_3_org: static
	{
		scope = 2;
		scopeCurator = 2;
		vehicleClass = "OPTRE_UNSC_Object_class";
		displayName = "compass mark 3 Orange";
		model = "\OPTRE_Hud\compass_mark_3_org.p3d";
		author = "Article 2 Studios";
		icon = "iconCrateWpns";
	};
};
class CfgVehicleIcons
{
	OPTRE_UnitIcon_Friendly = "\OPTRE_Hud\data\Radar\playerIcon.paa";
	OPTRE_UnitIcon_AutomaticRifleman = "\OPTRE_Hud\data\Radar\playerIcon_AR.paa";
	OPTRE_UnitIcon_Engineer = "\OPTRE_Hud\data\Radar\playerIcon_ENG.paa";
	OPTRE_UnitIcon_Medic = "\OPTRE_Hud\data\Radar\playerIcon_MED.paa";
	OPTRE_UnitIcon_SquadLeader = "\OPTRE_Hud\data\Radar\playerIcon_SL.paa";
	OPTRE_UnitIcon_Unknown = "\OPTRE_Hud\data\Radar\unknownIcon.paa";
};
