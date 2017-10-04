// Mission parameters
// Available in mission lobby
// TEMPLATE SPECIFIC PARAMETERS. DO NOT EDIT THIS FILE DIRECTLY UNLESS YOU KNOW WHAT YOU'RE DOING!
class header_ace_medical
{
	title = "===== ACE3 - Medical Settings =====";
	values[] = {0};
	texts[] = {""};
	default = 0;
};
class ace_medical_level
{
	title = "ACE3 - Medical Level";
	ACE_setting = 1;
	values[] = {1,2};
	texts[] = {"Basic", "Advanced"};
	#ifndef XPT_ACE3_MEDICALLEVEL
		#define XPT_ACE3_MEDICALLEVEL 1
	#endif
	default = XPT_ACE3_MEDICALLEVEL;
};
class ace_medical_preventInstaDeath
{
	title = "ACE3 - Prevent Instant Death";
	ACE_setting = 1;
	values[] = {0,1};
	texts[] = {"Disabled", "Enabled"};
	#ifdef XPT_DEFINEPVP
		default = 0;
	#else
		default = 1;
	#endif
};
class ace_medical_enableRevive
{
	title = "ACE3 - Enable Revive";
	ACE_setting = 1;
	values[] = {0,1};
	texts[] = {"Disabled", "Enabled"};
	#ifdef XPT_DEFINEPVP
		default = 0;
	#else
		default = 1;
	#endif
};
class ace_medical_maxReviveTime
{
	title = "ACE3 - Revive Bleedout Timer";
	ACE_setting = 1;
	values[] = {30,60,90,120,180,240,300};
	texts[] = {"30 seconds", "60 seconds", "90 seconds", "2 minutes", "3 minutes", "4 minutes", "5 minutes"};
	default = 300;
};
class ace_medical_enableUnconsciousnessAI
{
	title = "ACE3 - AI Unconsciousness";
	ACE_setting = 1;
	values[] = {0,1,2};
	texts[] = {"Disabled", "50/50", "Enabled"};
	default = 0;
};
class ace_medical_playerDamageThreshold
{
	title = "ACE3 - Player Health Multiplier";
	ACE_setting = 1;
	values[] = {0.5,0.6,0.7,0.8,0.9,1,1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,2};
	texts[] = {"50%","60%","70%","80%","90%","100%","110%","120%","130%","140%","150%","160%","170%","180%","190%","200%"};
	#ifndef XPT_ACE3_PLAYERDAMAGETHRESHOLD
		#define XPT_ACE3_PLAYERDAMAGETHRESHOLD 1
	#endif
	default = XPT_ACE3_PLAYERDAMAGETHRESHOLD;
};
class ace_medical_AIDamageThreshold
{
	title = "ACE3 - AI Health Multiplier";
	ACE_setting = 1;
	values[] = {0.5,0.6,0.7,0.8,0.9,1,1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,2};
	texts[] = {"50%","60%","70%","80%","90%","100%","110%","120%","130%","140%","150%","160%","170%","180%","190%","200%"};
	#ifndef XPT_ACE3_AIDAMAGETHRESHOLD
		#define XPT_ACE3_AIDAMAGETHRESHOLD 1
	#endif
	default = XPT_ACE3_AIDAMAGETHRESHOLD;
};
class header_mission_settings
{
	title = "===== Template Settings =====";
	values[] = {0};
	texts[] = {""};
	default = 0;
};
class XPT_map_markers
{
	title = "XPT - Enable group tracking on map";
	values[] = {0,1};
	texts[] = {"Disabled", "Enabled"};
	#ifndef XPT_MAPMARKERS
		#define XPT_MAPMARKERS 1
	#endif
	default = XPT_MAPMARKERS;
	isGlobal = 0;
	function = "XPT_fnc_mapMarkersServer";
};
class XPT_headlessclient
{
	title = "XPT - Enable Headless Client support";
	values[] = {0,1};
	texts[] = {"Disabled", "Automatic"};
	default = 1;
	isGlobal = 0;
};
class XPT_debugMode
{
	title = "XPT - Enable debug mode";
	values[] = {0,1};
	texts[] = {"Disabled", "Enabled"};
	default = 0;
};
