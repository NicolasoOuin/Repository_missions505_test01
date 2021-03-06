/*
@filename: QS_fnc_SMenemyEASTintel.sqf
Author:

	Quiksilver

Last modified:

	25/04/2014

Description:

	Spawn OPFOR enemy around intel objectives
	Enemy should have backbone AA/AT + random composition.
	Smaller number of enemy due to more complex objective.

___________________________________________*/

//---------- CONFIG

#define INF_TEAMS "BanditCombatGroup","BanditShockTeam","ParaCombatGroup","ParaFireTeam","BanditShockTeam"
#define VEH_TYPES "O_MRAP_02_gmg_F","O_MRAP_02_hmg_F","I_G_Offroad_01_armed_F"
private ["_x","_pos","_flatPos","_randomPos","_unitsArray","_enemiesArray","_infteamPatrol","_SMvehPatrol","_SMveh","_SMaaPatrol","_SMaa"];
_enemiesArray = [grpNull];
_x = 0;

//---------- INFANTRY

for "_x" from 0 to (5 + (random 10)) do {
	_infteamPatrol = createGroup east;
	_randomPos = [[[getPos _intelObj, 300],[]],["water","out"]] call BIS_fnc_randomPos;
	_infteamPatrol = [_randomPos, EAST, (configfile >> "CfgGroups" >> "Indep" >> "IND_C_F" >> "Infantry" >> [INF_TEAMS] call BIS_fnc_selectRandom)] call BIS_fnc_spawnGroup;
	[_infteamPatrol, getPos _intelObj, 100] call BIS_fnc_taskPatrol;
	[(units _infteamPatrol)] call QS1_fnc_setSkill2;

	_enemiesArray = _enemiesArray + [_infteamPatrol];

	{
		_x addCuratorEditableObjects [units _infteamPatrol, false];
	} foreach adminCurators;

};

//---------- RANDOM VEHICLE

_SMvehPatrol = createGroup east;
_randomPos = [[[getPos _intelObj, 300],[]],["water","out"]] call BIS_fnc_randomPos;
_SMveh = [VEH_TYPES] call BIS_fnc_selectRandom createVehicle _randomPos;
waitUntil {sleep 0.5; !isNull _SMveh};
[_SMveh, _SMvehPatrol] call BIS_fnc_spawnCrew;
[_SMvehPatrol, getPos _intelObj, 150] call BIS_fnc_taskPatrol;
[(units _SMvehPatrol)] call QS1_fnc_setSkill2;
_SMveh lock 3;
if (random 1 >= 0.5) then {
	_SMveh allowCrewInImmobile true;
};

_enemiesArray = _enemiesArray + [_SMvehPatrol];
sleep 0.1;
_enemiesArray = _enemiesArray + [_SMveh];

{
	_x addCuratorEditableObjects [[_SMveh], false];
	_x addCuratorEditableObjects [units _SMvehPatrol, false];
} foreach adminCurators;

_enemiesArray
