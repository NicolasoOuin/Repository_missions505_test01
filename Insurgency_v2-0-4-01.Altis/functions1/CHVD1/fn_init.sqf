[] spawn {
	CHVD1_scriptRunning = true;
	//Wait for mission init, in case there are variables defined some place else
	waitUntil {time > 0};

	//Define variables, load from profileNamespace
	CHVD1_allowNoGrass = if (isNil "CHVD1_allowNoGrass") then {true} else {CHVD1_allowNoGrass};
	CHVD1_maxView = if (isNil "CHVD1_maxView") then {12000} else {CHVD1_maxView};
	CHVD1_maxObj = if (isNil "CHVD1_maxObj") then {12000} else {CHVD1_maxObj};

	CHVD1_footSyncObj = profileNamespace getVariable ["CHVD1_footSyncObj",false];
	CHVD1_carSyncObj = profileNamespace getVariable ["CHVD1_carSyncObj",false];
	CHVD1_airSyncObj = profileNamespace getVariable ["CHVD1_airSyncObj",false];

	CHVD1_foot = (profileNamespace getVariable ["CHVD1_foot",viewDistance]) min CHVD1_maxView;
	CHVD1_car = (profileNamespace getVariable ["CHVD1_car",viewDistance]) min CHVD1_maxView;
	CHVD1_air = (profileNamespace getVariable ["CHVD1_air",viewDistance]) min CHVD1_maxView;

	CHVD1_footObj = (profileNamespace getVariable ["CHVD1_footObj",viewDistance]) min CHVD1_maxObj;
	CHVD1_carObj = (profileNamespace getVariable ["CHVD1_carObj",viewDistance]) min CHVD1_maxObj;
	CHVD1_airObj = (profileNamespace getVariable ["CHVD1_airObj",viewDistance]) min CHVD1_maxObj;

	CHVD1_footTerrain = if (CHVD1_allowNoGrass) then {profileNamespace getVariable ["CHVD1_footTerrain",25]} else {(profileNamespace getVariable ["CHVD1_footTerrain",25]) min 48.99 max 3.125};
	CHVD1_carTerrain = if (CHVD1_allowNoGrass) then {profileNamespace getVariable ["CHVD1_carTerrain",25]} else {(profileNamespace getVariable ["CHVD1_carTerrain",25]) min 48.99 max 3.125};
	CHVD1_airTerrain = if (CHVD1_allowNoGrass) then {profileNamespace getVariable ["CHVD1_airTerrain",25]} else {(profileNamespace getVariable ["CHVD1_airTerrain",25]) min 48.99 max 3.125};

	//Begin initialization
	waitUntil {!isNull player};
	waitUntil {!isNull findDisplay 46};

	//Detect when to change setting type
	[] spawn {
		for "_i" from 0 to 1 step 0 do {
			[nil, false] call CHVD1_fnc_updateSettings;
			_currentVehicle = vehicle player;
			waitUntil {_currentVehicle != vehicle player};
		};
	};
	[] spawn {
		for "_i" from 0 to 1 step 0 do {
			waitUntil {UAVControl (getConnectedUAV player) select 1 != ""};
			[nil, true] call CHVD1_fnc_updateSettings;
			waitUntil {UAVControl (getConnectedUAV player) select 1 == ""};
			[nil, false] call CHVD1_fnc_updateSettings;
		};
	};
};
