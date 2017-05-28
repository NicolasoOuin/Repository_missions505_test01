_dialog = createDialog "CHVD1_dialog";
if (!_dialog) exitWith {systemChat "Error: Can't open 'CH View Distance' dialog."};
disableSerialization;

{
	ctrlSetText _x;
} forEach [[1006, str round CHVD1_foot],[1007, str round CHVD1_footObj],[1013, str round CHVD1_car],[1014, str round CHVD1_carObj],[1017, str round CHVD1_air],[1018, str round CHVD1_airObj],[1400, str CHVD1_footTerrain],[1401, str CHVD1_carTerrain],[1402, str CHVD1_airTerrain]];

{
	sliderSetRange [_x select 0, 0, _x select 2];
	sliderSetRange [_x select 3, 0, (_x select 5) min (_x select 1)];
	sliderSetSpeed [_x select 0, 500, 500];
	sliderSetSpeed [_x select 3, 500, 500];
	sliderSetPosition [_x select 0, _x select 1];
	sliderSetPosition [_x select 3, (_x select 4) min (_x select 1)];
} forEach [[1900,CHVD1_foot,CHVD1_maxView,1901,CHVD1_footObj,CHVD1_maxObj],[1902,CHVD1_car,CHVD1_maxView,1903,CHVD1_carObj,CHVD1_maxObj],[1904,CHVD1_air,CHVD1_maxView,1905,CHVD1_airObj,CHVD1_maxObj]];

{
	((finddisplay 2900) displayCtrl (_x select 0)) cbSetChecked (_x select 1);
} forEach [[2800,CHVD1_footSyncObj],[2801,CHVD1_carSyncObj],[2802,CHVD1_airSyncObj]];

{
	_ctrl = ((finddisplay 2900) displayCtrl (_x select 0));
	if (CHVD1_allowNoGrass) then {
		_ctrl lbAdd "Low";
	};
	_ctrl lbAdd "Standard";
	_ctrl lbAdd "High";
	_ctrl lbAdd "Very High";

	_sel = [_x select 1] call CHVD1_fnc_selTerrainQuality;
	if (CHVD1_allowNoGrass) then {
		_ctrl lbSetCurSel _sel;
	} else {
		_ctrl lbSetCurSel (_sel - 1);
	};
} forEach [[1500,CHVD1_footTerrain],[1501,CHVD1_carTerrain],[1502,CHVD1_airTerrain]];

{
	_ctrl = ((finddisplay 2900) displayCtrl (_x select 0));
	_handle = _ctrl ctrlSetEventHandler ["LBSelChanged",
		format ["[_this select 1, '%1', %2] call CHVD1_fnc_onLBSelChanged", _x select 1, _x select 2]
	];
} forEach [[1500,"CHVD1_footTerrain",1400],[1501,"CHVD_carTerrain",1401],[1502,"CHVD_1airTerrain",1402]];


if (CHVD1_footSyncObj) then {
	ctrlEnable [1901,false];
	ctrlEnable [1007,false];
} else {
	ctrlEnable [1901,true];
	ctrlEnable [1007,true];
};

if (CHVD1_carSyncObj) then {
	ctrlEnable [1903,false];
	ctrlEnable [1014,false];
} else {
	ctrlEnable [1903,true];
	ctrlEnable [1014,true];
};

if (CHVD1_airSyncObj) then {
	ctrlEnable [1905,false];
	ctrlEnable [1018,false];
} else {
	ctrlEnable [1905,true];
	ctrlEnable [1018,true];
};
