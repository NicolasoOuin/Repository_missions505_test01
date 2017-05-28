#define GUI_GRID_X	(0)
#define GUI_GRID_Y	(0)
#define GUI_GRID_W	(0.025)
#define GUI_GRID_H	(0.04)
#define GUI_GRID_WAbs	(1)
#define GUI_GRID_HAbs	(1)

class CHVD1_rscXSliderH
{
	style="0x400	+ 0x10";
	shadow=0;
	x=0;
	y=0;
	h=0.029412;
	w=0.40000001;
	color[]={1,1,1,0.60000002};
	colorActive[]={1,1,1,1};
	colorDisabled[]={1,1,1,0.2};
	arrowEmpty="\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
	arrowFull="\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
	border="\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
	thumb="\A3\ui_f\data\gui\cfg\slider\thumb_ca.paa";
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
};
class CHVD1_rscCheckbox
{
	type=77;
	style=0;
	checked=0;
	x="0.375 * safezoneW + safezoneX";
	y="0.36 * safezoneH + safezoneY";
	w="0.025 * safezoneW";
	h="0.04 * safezoneH";
	color[]={1,1,1,0.69999999};
	colorFocused[]={1,1,1,1};
	colorHover[]={1,1,1,1};
	colorPressed[]={1,1,1,1};
	colorDisabled[]={1,1,1,0.2};
	colorBackground[]={0,0,0,0};
	colorBackgroundFocused[]={0,0,0,0};
	colorBackgroundHover[]={0,0,0,0};
	colorBackgroundPressed[]={0,0,0,0};
	colorBackgroundDisabled[]={0,0,0,0};
	textureChecked="\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureUnchecked="\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureFocusedChecked="\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureFocusedUnchecked="\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureHoverChecked="\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureHoverUnchecked="\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	texturePressedChecked="\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	texturePressedUnchecked="\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureDisabledChecked="\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureDisabledUnchecked="\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
	soundEnter[]=
	{
		"",
		0.1,
		1
	};
	soundPush[]=
	{
		"",
		0.1,
		1
	};
	soundClick[]=
	{
		"",
		0.1,
		1
	};
	soundEscape[]=
	{
		"",
		0.1,
		1
	};
};
class CHVD1_rscButton
{
	type=16;
	style="0x02 + 0xC0";
	default=0;
	shadow=0;
	x=0;
	y=0;
	w=0.095588997;
	h=0.039216001;
	animTextureNormal="#(argb,8,8,3)color(1,1,1,1)";
	animTextureDisabled="#(argb,8,8,3)color(1,1,1,1)";
	animTextureOver="#(argb,8,8,3)color(1,1,1,1)";
	animTextureFocused="#(argb,8,8,3)color(1,1,1,1)";
	animTexturePressed="#(argb,8,8,3)color(1,1,1,1)";
	animTextureDefault="#(argb,8,8,3)color(1,1,1,1)";
	colorBackground[]={0,0,0,0.80000001};
	colorBackgroundFocused[]={1,1,1,1};
	colorBackground2[]={0.75,0.75,0.75,1};
	color[]={1,1,1,1};
	colorFocused[]={0,0,0,1};
	color2[]={0,0,0,1};
	colorText[]={1,1,1,1};
	colorDisabled[]={1,1,1,0.25};
	period=1.2;
	periodFocus=1.2;
	periodOver=1.2;
	size="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	sizeEx="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
	font="PuristaLight";
	class TextPos1
	{
		left="0.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
		top="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) - 		(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)) / 2";
		right=0.0049999999;
		bottom=0;
	};
	class Attributes1
	{
		font="PuristaLight";
		color="#E5E5E5";
		align="left";
		shadow="false";
	};
	class ShortcutPos1
	{
		left="(6.25 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) - 0.0225 - 0.005";
		top=0.0049999999;
		w=0.022500001;
		h=0.029999999;
	};
	soundEnter[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundEnter",
		0.090000004,
		1
	};
	soundPush[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundPush",
		0.090000004,
		1
	};
	soundClick[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundClick",
		0.090000004,
		1
	};
	soundEscape[]=
	{
		"\A3\ui_f\data\sound\RscButtonMenu\soundEscape",
		0.090000004,
		1
	};
	textureNoShortcut="#(argb,8,8,3)color(0,0,0,0)";
	class HitZone1
	{
		left=0;
		top=0;
		right=0;
		bottom=0;
	};
	class AttributesImage1
	{
		font="PuristaMedium";
		color="#E5E5E5";
		align="left";
	};
};
class CHVD1_rscText
{
	type = 0;
	x=0;
	y=0;
	h=0.037;
	w=0.30000001;
	style=0;
	shadow=0;
	colorShadow[]={0,0,0,0.5};
	font="PuristaMedium";
	size="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	SizeEx="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorText[]={1,1,1,1};
	colorBackground[]={0,0,0,0};
	linespacing=1;
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
	text = "";
};
class CHVD1_rscTextRight
{
	type = 0;
	x=0;
	y=0;
	h=0.037;
	w=0.30000001;
	style=0x01;
	shadow=0;
	colorShadow[]={0,0,0,0.5};
	font="PuristaMedium";
	size="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	SizeEx="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorText[]={1,1,1,1};
	colorBackground[]={0,0,0,0};
	linespacing=1;
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
	text = "";
};
class CHVD1_rscFrame
{
	type = 0;
	idc = -1;
	style = 0;
	shadow = 1;
	colorBackground[] =
	{
		0,
		0,
		0,
		0
	};
	colorText[] =
	{
		1,
		1,
		1,
		1
	};
	font = "PuristaMedium";
	sizeEx = 0.02;
	text = "";
};
class CHVD1_rscXListBox
{
	type = 42;
	style="0x400 + 0x02 +	0x10";
	shadow=2;
	arrowEmpty="\A3\ui_f\data\gui\cfg\slider\arrowEmpty_ca.paa";
	arrowFull="\A3\ui_f\data\gui\cfg\slider\arrowFull_ca.paa";
	border="\A3\ui_f\data\gui\cfg\slider\border_ca.paa";
	w=0.14706001;
	h=0.039216001;
	colorSelect[] = {1,1,1,1}; // Selected text color
	colorText[]={1,1,1,1};
	color[]={1,1,1,0.60000002};
	colorActive[]={1,1,1,1};
	colorDisabled[]={1,1,1,0.2};
	font="PuristaMedium";
	sizeEx="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	soundSelect[]=
	{
		"\A3\ui_f\data\sound\RscListbox\soundSelect",
		0.090000004,
		1
	};
	colorPicture[]={1,1,1,1};
	colorPictureSelected[]={1,1,1,1};
	colorPictureDisabled[]={1,1,1,1};
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
};
class CHVD1_rscEdit
{
	type=2;
	style="0x01 + 0x40";
	autocomplete = "";
	font="PuristaMedium";
	shadow=2;
	sizeEx="(			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	colorBackground[]={0,0,0,1};
	colorText[]={0.94999999,0.94999999,0.94999999,1};
	colorDisabled[]={1,1,1,0.25};
	colorSelection[]=
	{
		"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
		"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
		1
	};
	canModify=1;
	tooltipColorText[]={1,1,1,1};
	tooltipColorBox[]={1,1,1,1};
	tooltipColorShade[]={0,0,0,0.64999998};
	text = "";
};
class CHVD1_dialog
{
	idd = 2900;
	movingEnable = false;
	moving = 1;
	onLoad = "";
	onUnload = "";

	class controlsBackground1
	{
		class CHVD1_rscBackground: CHVD1_rscFrame
		{
			idc = 1800;

			x = 9 * GUI_GRID_W + GUI_GRID_X;
			y = 1.6 * GUI_GRID_H + GUI_GRID_Y;
			w = 22 * GUI_GRID_W;
			h = 19.5 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.7};
		};
		class CHVD1_footBGframe: CHVD1_rscFrame
		{
			idc = 1800;

			x = 9.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 21 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.7};
		};
		class CHVD1_carBGframe: CHVD1_rscFrame
		{
			idc = 1801;

			x = 9.5 * GUI_GRID_W + GUI_GRID_X;
			y = 8.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 21 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.7};
		};
		class CHVD1_airBGframe: CHVD1_rscFrame
		{
			idc = 1802;

			x = 9.5 * GUI_GRID_W + GUI_GRID_X;
			y = 15 * GUI_GRID_H + GUI_GRID_Y;
			w = 21 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.7};
		};
		class CHVD1_rscTitle: CHVD1_rscText
		{
			idc = 1000;

			text = "VIEW DISTANCE SETTINGS"; //--- ToDo: Localize;
			x = 9 * GUI_GRID_W + GUI_GRID_X;
			y = 0.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 22 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
		};
		class CHVD1_rscFootHeaderText: CHVD1_rscText
		{
			idc = 1001;

			text = "ON FOOT"; //--- ToDo: Localize;
			x = 9.5 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0.5,0,0,0};
		};
		class CHVD1_rscFootViewText: CHVD1_rscTextRight
		{
			idc = 1002;

			text = "VIEW:"; //--- ToDo: Localize;
			x = 9.5 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscFootObjText: CHVD1_rscTextRight
		{
			idc = 1003;

			text = "OBJECT:"; //--- ToDo: Localize;
			x = 9.5 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscFootTerrainText: CHVD1_rscTextRight
		{
			idc = 1005;

			text = "TERRAIN:"; //--- ToDo: Localize;
			x = 9.5 * GUI_GRID_W + GUI_GRID_X;
			y = 6.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscCarHeaderText: CHVD1_rscText
		{
			idc = 1008;

			text = "IN CAR"; //--- ToDo: Localize;
			x = 9.5 * GUI_GRID_W + GUI_GRID_X;
			y = 8.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0.5,0,0,0};
		};
		class CHVD1_rscCarSyncText: CHVD1_rscTextRight
		{
			idc = 1009;

			text = "Sync object with view"; //--- ToDo: Localize;
			x = 17 * GUI_GRID_W + GUI_GRID_X;
			y = 8.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscCarViewText: CHVD1_rscTextRight
		{
			idc = 1010;

			text = "VIEW:"; //--- ToDo: Localize;
			x = 9.5 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscAirObjText: CHVD1_rscTextRight
		{
			idc = 1011;

			text = "OBJECT:"; //--- ToDo: Localize;
			x = 9.5 * GUI_GRID_W + GUI_GRID_X;
			y = 18 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscCarTerrainText: CHVD1_rscTextRight
		{
			idc = 1012;

			text = "TERRAIN:"; //--- ToDo: Localize;
			x = 9.5 * GUI_GRID_W + GUI_GRID_X;
			y = 13 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscFootSyncText: CHVD1_rscTextRight
		{
			idc = 1004;

			text = "Sync object with view"; //--- ToDo: Localize;
			x = 17 * GUI_GRID_W + GUI_GRID_X;
			y = 2 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscAirHeaderText: CHVD1_rscText
		{
			idc = 1015;

			text = "IN AIR"; //--- ToDo: Localize;
			x = 9.5 * GUI_GRID_W + GUI_GRID_X;
			y = 15 * GUI_GRID_H + GUI_GRID_Y;
			w = 5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0.5,0,0,0};
		};
		class CHVD1_rscAirViewText: CHVD1_rscTextRight
		{
			idc = 1016;

			text = "VIEW:"; //--- ToDo: Localize;
			x = 9.5 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscAirTerrainText: CHVD1_rscTextRight
		{
			idc = 1019;

			text = "TERRAIN:"; //--- ToDo: Localize;
			x = 9.5 * GUI_GRID_W + GUI_GRID_X;
			y = 19.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscAirSyncText: CHVD1_rscTextRight
		{
			idc = 1020;

			text = "Sync object with view"; //--- ToDo: Localize;
			x = 17 * GUI_GRID_W + GUI_GRID_X;
			y = 15 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscCarObjText: CHVD1_rscTextRight
		{
			idc = 1021;

			text = "OBJECT:"; //--- ToDo: Localize;
			x = 9.5 * GUI_GRID_W + GUI_GRID_X;
			y = 11.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 4.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
	};
	class controls1
	{
		class CHVD1_rscFootViewSlider: CHVD1_rscXSliderH
		{
			idc = 1900;
			type = 43;
			onSliderPosChanged = "['CHVD1_foot', _this select 0, _this select 1, 1006, 'CHVD1_footObj', 1901, 1007, 'CHVD1_footSyncObj'] call CHVD1_fnc_onSliderChange";

			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscFootObjSlider: CHVD1_rscXSliderH
		{
			idc = 1901;
			type = 43;
			onSliderPosChanged = "['CHVD1_footObj', _this select 0, _this select 1, 1007] call CHVD1_fnc_onSliderChange";

			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscCarViewSlider: CHVD1_rscXSliderH
		{
			idc = 1902;
			type = 43;
			onSliderPosChanged = "['CHVD1_car', _this select 0, _this select 1, 1013, 'CHVD1_carObj', 1903, 1014, 'CHVD1_carSyncObj'] call CHVD1_fnc_onSliderChange";

			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscCarObjSlider: CHVD1_rscXSliderH
		{
			idc = 1903;
			type = 43;
			onSliderPosChanged = "['CHVD1_carObj', _this select 0, _this select 1, 1014] call CHVD1_fnc_onSliderChange";

			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 11.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscAirViewSlider: CHVD1_rscXSliderH
		{
			idc = 1904;
			type = 43;
			onSliderPosChanged = "['CHVD1_air', _this select 0, _this select 1, 1017, 'CHVD1_airObj', 1905, 1018, 'CHVD1_airSyncObj'] call CHVD1_fnc_onSliderChange";

			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscAirObjSlider: CHVD1_rscXSliderH
		{
			idc = 1905;
			type = 43;
			onSliderPosChanged = "['CHVD1_airObj', _this select 0, _this select 1, 1018] call CHVD1_fnc_onSliderChange";

			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 18 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscFootViewDistance: CHVD1_rscEdit
		{
			idc = 1006;
			onKeyDown = "['CHVD1_foot', 1900, _this select 0, 'CHVD1_footObj', 1901, 1007, 'CHVD1_footSyncObj'] call CHVD1_fnc_onEBinput";
			maxChars = 5;

			x = 27 * GUI_GRID_W + GUI_GRID_X;
			y = 3.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscFootObjDistance: CHVD1_rscEdit
		{
			idc = 1007;
			onKeyDown = "['CHVD1_footObj', 1901, _this select 0] call CHVD1_fnc_onEBinput";
			maxChars = 5;

			x = 27 * GUI_GRID_W + GUI_GRID_X;
			y = 5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscCarViewDistance: CHVD1_rscEdit
		{
			idc = 1013;
			onKeyDown = "['CHVD1_car', 1902, _this select 0, 'CHVD1_carObj', 1903, 1014, 'CHVD1_carSyncObj'] call CHVD1_fnc_onEBinput";
			maxChars = 5;

			x = 27 * GUI_GRID_W + GUI_GRID_X;
			y = 10 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscCarObjDistance: CHVD1_rscEdit
		{
			idc = 1014;
			onKeyDown = "['CHVD1_carObj', 1903, _this select 0] call CHVD1_fnc_onEBinput";
			maxChars = 5;

			x = 27 * GUI_GRID_W + GUI_GRID_X;
			y = 11.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscAirViewDistance: CHVD1_rscEdit
		{
			idc = 1017;
			onKeyDown = "['CHVD1_air', 1904, _this select 0, 'CHVD1_airObj', 1905, 1018, 'CHVD1_airSyncObj'] call CHVD1_fnc_onEBinput";
			maxChars = 5;

			x = 27 * GUI_GRID_W + GUI_GRID_X;
			y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscAirObjDistance: CHVD1_rscEdit
		{
			idc = 1018;
			onKeyDown = "['CHVD1_airObj', 1905, _this select 0] call CHVD1_fnc_onEBinput";
			maxChars = 5;

			x = 27 * GUI_GRID_W + GUI_GRID_X;
			y = 18 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscClose: CHVD1_rscButton
		{
			idc = 1612;
			onButtonClick = "closeDialog 2900";

			text = "Close"; //--- ToDo: Localize;
			x = 9 * GUI_GRID_W + GUI_GRID_X;
			y = 21.15 * GUI_GRID_H + GUI_GRID_Y;
			w = 22 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_rscFootSyncCheckbox: CHVD1_rscCheckbox
		{
			idc = 2800;
			onCheckedChanged = "[_this select 1, 'CHVD1_footSyncObj', 1901, 1007, 1900] call CHVD1_fnc_onCheckedChanged";

			x = 29.2 * GUI_GRID_W + GUI_GRID_X;
			y = 1.88 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.45 * GUI_GRID_W;
			h = 1.25 * GUI_GRID_H;
			sizeEx = 0 * 	(0.04) * 	(0.04) * 	(0.04) * 	(0.04) * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class CHVD1_rscCarSyncCheckbox: CHVD1_rscCheckbox
		{
			idc = 2801;
			onCheckedChanged = "[_this select 1, 'CHVD1_carSyncObj', 1903, 1014, 1902] call CHVD1_fnc_onCheckedChanged";

			x = 29.2 * GUI_GRID_W + GUI_GRID_X;
			y = 8.39 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.45 * GUI_GRID_W;
			h = 1.25 * GUI_GRID_H;
			sizeEx = 0 * 	(0.04) * 	(0.04) * 	(0.04) * 	(0.04) * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class CHVD1_rscAirSyncCheckbox: CHVD1_rscCheckbox
		{
			idc = 2802;
			onCheckedChanged = "[_this select 1, 'CHVD1_airSyncObj', 1905, 1018, 1904] call CHVD1_fnc_onCheckedChanged";

			x = 29.2 * GUI_GRID_W + GUI_GRID_X;
			y = 14.85 * GUI_GRID_H + GUI_GRID_Y;
			w = 1.45 * GUI_GRID_W;
			h = 1.25 * GUI_GRID_H;
			sizeEx = 0 * 	(0.04) * 	(0.04) * 	(0.04) * 	(0.04) * 	(0.04) * 	(0.04) * GUI_GRID_H;
		};
		class CHVD1_footTerrainListbox: CHVD1_rscXListBox
		{
			idc = 1500;

			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 6.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_carTerrainListbox: CHVD1_rscXListBox
		{
			idc = 1501;

			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 13 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_airTerrainListbox: CHVD1_rscXListBox
		{
			idc = 1502;

			x = 14 * GUI_GRID_W + GUI_GRID_X;
			y = 19.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 12.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_footTerrainEdit: CHVD1_rscEdit
		{
			idc = 1400;
			onKeyDown = "['CHVD1_footTerrain', _this select 0, 1500] call CHVD1_fnc_onEBterrainInput";
			maxChars = 5;

			x = 27 * GUI_GRID_W + GUI_GRID_X;
			y = 6.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_carTerrainEdit: CHVD1_rscEdit
		{
			idc = 1401;
			onKeyDown = "['CHVD1_carTerrain', _this select 0, 1501] call CHVD1_fnc_onEBterrainInput";
			maxChars = 5;

			x = 27 * GUI_GRID_W + GUI_GRID_X;
			y = 13 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
		class CHVD1_airTerrainEdit: CHVD1_rscEdit
		{
			idc = 1402;
			onKeyDown = "['CHVD1_airTerrain', _this select 0, 1502] call CHVD1_fnc_onEBterrainInput";
			maxChars = 5;

			x = 27 * GUI_GRID_W + GUI_GRID_X;
			y = 19.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 3.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
		};
	};
};
