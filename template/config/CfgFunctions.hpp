// Functions library
// Defines custom functions for the template.
// TEMPLATE SPECIFIC FUNCTIONS. DO NOT EDIT THIS FILE DIRECTLY UNLESS YOU KNOW WHAT YOU'RE DOING!

// Template functions now use the XPT tag to differentiate them from functions I write for my own missions. --Superxpdude
class XPT
{
	class curator
	{
		file = "template\functions\curator";
		class curatorAddUnit {};				// Function to add an editable unit to all curators
		class curatorAssignUnit {};				// Function to assign a player as a curator unit
		class curatorFailsafe {};				// Failsafe function for curator assignment on dedicated server
		class curatorGrpPlaced {};				// Function for adding curator placed groups to other curators
		class curatorInit {postInit = 1;};		// Function for adding event handlers to curators on mission start
		class curatorMenu {};					// Function for adding the briefing-based curator menu
		class curatorObjPlaced {};				// Function for adding curator placed objects to other curators
		class curatorRemoveNVG {};				// Function for removing NVGs from curator-spawned units
	};
	class event
	{
		file = "template\functions\event";
		class initPlayerLocal {};				// Template specific initPlayerLocal entries
		class initPlayerServer {};				// Template specific initPlayerServer entries
		class initServer {};					// Template specific initServer entries
		class onPlayerKilled {};				// Template specific onPlayerKilled entries
		class onPlayerRespawn {};				// Template specific onPlayerRespawn entries
	};
	class headlessClient
	{
		file = "template\functions\headlessClient";
		class headlessConnect {};				// Function for handling the headlessClient connecting
		class headlessDisconnect {};			// Function for handling the headlessClient disconnecting
		class headlessSetGroupOwner {};			// *DEPRECATED* Function for moving groups to the headlessClient
		class headlessSetup {preInit = 1;};		// Function for setting up the headlessClient framework
	};
	class loadout
	{
		file = "template\functions\loadout";
		class exportInventory {};				// Exports a unit's inventory to the XPTLoadouts config format
		class loadCurrentInventory {};			// Uses loadInventory to apply a loadout to a unit
		class loadInventory {};					// Function for loading a unit's inventory
		class loadInventoryLegacy {};			// Old inventory function. Temporarily preserved for backwards compatibility.
		class setLoadoutGroup {};				// Sets a "loadout group" to be used for loadCurrentInventory
	};
	class radio
	{
		file = "template\functions\radio";
		class radioHandleDeath {};				// Function for saving radio info on death
		class radioHandleRespawn {};			// Function for setting radio info on respawn
		class radioInit {preInit = 1;};			// Function for configuring radio settings
		class radioMarkers {postInit = 1;};		// Automatically creates map markers with radio frequencies
	};
	class respawn
	{
		file = "template\functions\respawn";
		class waveOnPlayerKilled {};			// onPlayerKilled portion of the waves respawn template
	};
	class safeStart
	{
		file = "template\functions\safeStart";
		class safeStartEnd {};					// Ends the safe start period for all players
		class safeStartEndLocal {};				// Ends the safe start period for the local player
		class safeStartEH {};					// Event handler function for safe start
	};
	class system
	{
		file = "template\functions\system";
		class briefingCreate {};				// Function to create briefings from a config file
		class briefingOnStart {postInit = 1;};	// Function to create mission briefings on mission start
		class cbaParams {preInit = 1;}; 		// Function to handle converting lobby parameters to CBA settings
		class fpsMarkers {postInit = 1;}; 		// Function to place FPS indicators on the map
		class log {};							// Handles log messages
		class logWrite {};						// Writes log messages to .rpt and systemChat
		class mapMarkersClient {}; 				// Client-side portion of the map-markers module
		class mapMarkersServer {}; 				// Server-side portion of the map-markers module
	};
	class vehicle
	{
		file = "template\functions\vehicle";
		class loadItemCargo {};
		class vehicleSetup {};					// Deprecated vehicle setup function
		class vehicleSetupTurret {};			// Deprecated vehicle setup function
	};
};