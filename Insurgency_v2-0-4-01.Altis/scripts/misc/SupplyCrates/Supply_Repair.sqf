private ["_heli", "_reloadtime"];

if (!(AW_ammoSuppAvail)) exitWith {
	hint "Supply Crate is not currently available"
};

AW_ammoSuppAvail = FALSE; publicVariable "AW_ammoSuppAvail";

//------------------------------------------------------- CONFIG

_heli = _this select 0;
_crateType =  "B_Slingload_01_Repair_F";			//ammocrate class for blufor, feel free to change to whichever box you desire

//--------------------------------------------------------- MEAT AND POTATOES

Supply_Ammo = _crateType createVehicle (getMarkerPos "Ammo_Supply_drop");; publicVariable "Supply_Ammo"; 

