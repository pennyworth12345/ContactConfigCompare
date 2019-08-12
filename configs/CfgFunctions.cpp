class CfgFunctions
{
	createShortcuts = 1;
	init = "A3\functions_f\initFunctions.sqf";
	version = 3;
	class 3DEN
	{
		project = "arma3";
		tag = "BIS";
		class Attributes
		{
			file = "A3\3DEN\Functions\Attributes";
			class 3DENAttributeDoorStates {};
		};
		class Default
		{
			file = "A3\3DEN\Functions";
			class 3DENCamera {};
			class 3DENControlsHint {};
			class 3DENDiagCreateList {};
			class 3DENDiagFonts {};
			class 3DENDiagMouseControl {};
			class 3DENDrawLocations {};
			class 3DENEntityMenu {};
			class 3DENExportAttributes {};
			class 3DENExportOldSQM {};
			class 3DENExportSQF {};
			class 3DENExportTerrainBuilder
			{
				file = "\a3\Functions_F_Contact\TempFunctions\fn_3DENExportTerrainBuilder.sqf";
			};
			class 3DENFlashlight {};
			class 3DENGrid {};
			class 3DENIntel {};
			class 3DENInterface {};
			class 3DENListLocations {};
			class 3DENMissionPreview {};
			class 3DENMissionStats {};
			class 3DENModuleDescription {};
			class 3DENNotification {};
			class 3DENShowMessage {};
			class 3DENStatusBar {};
			class 3DENToolbar {};
			class 3DENTutorial {};
			class 3DENVisionMode {};
			class highlightControl {};
			class initAmmoBox {};
			class initListNBoxSorting {};
			class initSliderValue {};
		};
	};
	class A2
	{
		project = "arma2";
		tag = "BIS";
		class Arrays
		{
			file = "A3\functions_f\arrays";
			class arrayCompare
			{
				description = "Checks whether two arrays are exactly the same (note this can also be checked via BIS_fnc_areEqual)";
			};
			class arrayFindDeep
			{
				description = "Searches an element in an array and returns the first occurrence";
			};
			class arrayInsert
			{
				description = "Inserts the elements of one array into another, at a specified index";
			};
			class arrayPop
			{
				description = "Removes the last (rightmost) element of an array and returns it";
			};
			class arrayPush
			{
				description = "Adds an element to the end of an array and returns the array";
			};
			class arrayPushStack
			{
				description = "Pushes a stack (array) of elements onto the end of an array";
			};
			class arrayShift
			{
				description = "Removes the first (leftmost) element of an array and returns it";
			};
			class arrayUnShift
			{
				description = "Adds an element to the beginning of an array and returns the array";
			};
			class conditionalSelect
			{
				description = "Returns a sub-array of elements that satisfy a specific condition";
			};
			class findNestedElement
			{
				description = "Return the path to an element in an (nested) array.";
			};
			class maxDiffArray
			{
				description = "Return the maximum difference between all values in an array.";
			};
			class randomIndex
			{
				description = "Returns a random integer representing an index in the passed array";
			};
			class removeIndex
			{
				description = "Takes an array, and returns a new array with the specified index(es) removed";
			};
			class removeNestedElement
			{
				description = "Remove an item in an (nested) array.";
			};
			class returnNestedElement
			{
				description = "Return an item at a path in an (nested) array.";
			};
			class selectRandom
			{
				description = "Returns a randomly selected element from an array";
			};
			class selectRandomWeighted
			{
				description = "Randomly select an item from an array, considering item weights.";
			};
			class setNestedElement
			{
				description = "Set an item in an (nested) array using a path.";
			};
			class subSelect
			{
				description = "Returns a sub-selection of the passed array. There are various methods the sub-array can be determined";
			};
		};
		class Configs
		{
			file = "A3\functions_f\configs";
			class classMagazine
			{
				description = "Returns class of magazine given by string";
			};
			class classWeapon
			{
				description = "Returns class of weapon given by string";
			};
			class returnConfigEntry
			{
				description = "Explores parent classes in the run-time config for the value of a config entry";
			};
			class returnParents
			{
				description = "Returns list of all parent classes";
			};
		};
		class Debug
		{
			file = "A3\functions_f\debug";
			class help
			{
				description = "List of all available functions";
			};
			class recompile
			{
				description = "Recompiles all functions.";
			};
		};
		class Diagnostic
		{
			file = "A3\functions_f\diagnostic";
			class diagAnim
			{
				description = "Animation diagnostic function - displays or logs animation states.";
			};
			class fps
			{
				description = "Measures FPS";
			};
		};
		class Geometry
		{
			file = "A3\functions_f\geometry";
			class dirTo
			{
				description = "Returns the compass direction from one object/postion to another";
			};
			class distance2D
			{
				description = "Returns the distance between the two objects or positions 'as the crow flies' (ignoring elevation)";
			};
			class distance2Dsqr
			{
				description = "Same as fn_distance2D, but returns the SQUARED distance. This function is a little faster than fn_distance2D";
			};
			class getLineDist
			{
				description = "Returns the distance between two sections of a straight line";
			};
			class inAngleSector
			{
				description = "Use this function to determine if a position lies within a certain angle from another position";
			};
			class relativeDirTo
			{
				description = "Returns the relative direction from one object to another object/position";
			};
			class relPos
			{
				description = "Returns a position that is a specified distance and compass direction from the passed position or object";
			};
		};
		class Inventory
		{
			file = "A3\functions_f\inventory";
			class inv
			{
				description = "Returns inventory contents of unit - item classes";
			};
			class invAdd
			{
				description = "Adds item to inventory of unit if there is place for it";
			};
			class invCodeToArray
			{
				description = "Converts config inventory code to array with numbers for respective slots.";
			};
			class invRemove
			{
				description = "Removes item(s). Returns number of removed items.";
			};
			class invSlots
			{
				description = "Returns total inventory slots for unit";
			};
			class invSlotsEmpty
			{
				description = "Returns empty slots for unit";
			};
			class invSlotType
			{
				description = "Returns type of inventory slot for given item";
			};
			class invString
			{
				description = "Returns inventory contents of unit - item names";
			};
		};
		class Misc
		{
			file = "A3\functions_f\misc";
			class addEvidence
			{
				description = "Add an evidnce value to global campaign variable";
			};
			class colorRGBtoHTML
			{
				description = "Converts RGB color format to HTML color format";
			};
			class commsMenuCreate
			{
				description = "Creates the global communications menu, if it's not already created.";
			};
			class commsMenuToggleAvailability
			{
				description = "Enables or disables certain sections of the global communications menu.";
			};
			class commsMenuToggleVisibility
			{
				description = "Shows or hides certain sections of the global communications menu.";
			};
			class createmenu
			{
				description = "Create commanding menu (with pages)";
			};
			class findSafePos
			{
				description = "Returns safe pos according to input params";
			};
			class getFactions
			{
				description = "Get list of factions or their IDs";
			};
			class inTrigger
			{
				description = "Returns if objects is in trigger area";
			};
			class isPosBlacklisted
			{
				description = "Returns if position is blacklisted";
			};
			class listPlayers
			{
				description = "Returns an array of all players and playable units";
			};
			class nearestPosition
			{
				description = "Returns nearest Object or position compared to the position of a given Object or position";
			};
			class PosToGrid
			{
				description = "Converts world coordinates into map grid coordinates";
			};
			class taskHandler
			{
				description = "Automatically sets tasks as current";
			};
			class threat
			{
				description = "Calculates threat level of given unit.";
			};
			class version
			{
				description = "Identifies available expansions.";
			};
		};
		class Numbers
		{
			file = "A3\functions_f\numbers";
			class arithmeticMean
			{
				description = "Returns the arithmetic mean (average) of an array of numbers";
			};
			class cutDecimals
			{
				description = "Returns the rounded number with given amount of decimal places";
			};
			class geometricMean
			{
				description = "Returns the geometric mean (weighted average) of an array of numbers";
			};
			class greatestNum
			{
				description = "Returns the highest number out of the passed set";
			};
			class lowestNum
			{
				description = "Returns the lowest number out of the passed set";
			};
			class nearestNum
			{
				description = "Returns the number out of the set which is closest to the target number";
			};
			class parseNumber
			{
				description = "Return number from expression";
			};
			class randomInt
			{
				description = "Returns a random integer between two endpoints";
			};
			class randomNum
			{
				description = "Returns a random number between two endpoints";
			};
			class roundNum
			{
				description = "Round a number to the provided factor";
			};
			class sortNum
			{
				description = "Sorts an array of numbers from lowest (left) to highest (right)";
			};
		};
		class Objects
		{
			file = "A3\functions_f\objects";
			class getPitchBank
			{
				description = "Returns the pitch and bank of an object, in degrees";
			};
			class isInFrontOf
			{
				description = "Checks, if a object is in front of another object";
			};
			class setPitchBank
			{
				description = "Rotates an object, giving it the specified pitch and bank, in degrees";
			};
		};
		class Scenes
		{
			file = "A3\functions_f\scenes";
			class miscanim
			{
				description = "Library animations";
			};
			class sceneAreaClearance
			{
				description = "Clearing scene area from unwanted objects";
			};
			class sceneCheckWeapons
			{
				description = "Checks if participants have the correct weapons for scene";
			};
			class sceneCreateSceneTrigger
			{
				description = "Create trigger for scene which can interrupt scene with name passed during creating the trigger";
			};
			class sceneCreateSoundEntities
			{
				description = "creates sound logig entities and attaches them to a characters";
			};
			class sceneGetObjects
			{
				description = "2. part of s.c.e.n.e";
			};
			class sceneGetParticipants
			{
				description = "Returns all units from group which are in specified range";
			};
			class sceneGetPositionByAngle
			{
				description = "Returns coordinates calculated from given angle and distance from specified object";
			};
			class sceneIntruderDetector
			{
				description = "Checks if there are intruders during scene. If yes, script disables them.";
			};
			class sceneMiscStuff
			{
				description = "Does the basic minor scenes stuff like activating cinema borders, disallowing map, etc";
			};
			class sceneRotate
			{
				description = "Compute new object coordinates from given center and angle from MOTION BUILDER - rotates object around the center";
			};
			class sceneSetAnimationsForGroup
			{
				description = "Runs animations on units of group by given animation and group array  ";
			};
			class sceneSetBehaviour
			{
				description = "Enables/disables AI (move, target, etc...) - usefull for scenes ";
			};
			class sceneSetObjects
			{
				description = "1. part of s.c.e.n.e";
			};
			class sceneSetPosFormation
			{
				description = "Sets formation for a group (circle, halfcircle, line), (uses BIS_fnc_sceneGetPositionByAngle)";
			};
			class zzRotate
			{
				description = "Rotates objects around given center about given angle ";
			};
		};
		class Spawning
		{
			file = "A3\functions_f\spawning";
			class ObjectsGrabber
			{
				description = "Dynamic Objects Grabber";
			};
			class ObjectsMapper
			{
				description = "Dynamic Objects Mapper";
			};
			class returnGroupComposition
			{
				description = "Returns a logical group composition based on a number of parameters";
			};
			class returnVehicleTurrets
			{
				description = "Returns path to all turrets and sub-turrets in a vehicle";
			};
			class selectCrew
			{
				description = "Return an appropriate crew type for a certain vehicle";
			};
			class spawnCrew
			{
				description = "Fill all crew positions in a vehicle, including turrets";
			};
			class spawnGroup
			{
				description = "Handles the spawning of a dynamic group of characters";
			};
			class spawnVehicle
			{
				description = "Spawn a certain vehicle type with all crew (including turrets)";
			};
			class taskAttack
			{
				description = "Group will attack the position";
			};
			class taskDefend
			{
				description = "Group will man nearby static defenses and guard the position";
			};
			class taskPatrol
			{
				description = "Create a random patrol of several waypoints around a given position";
			};
		};
		class Strings
		{
			file = "A3\functions_f\strings";
			class timeToString
			{
				description = "Passed the results of the 'daytime' command, returns time formatted as a string";
			};
		};
		class Systems
		{
			file = "A3\functions_f\systems";
			class locations
			{
				description = "Spawns location game logics on locations (map-baked / created with createLocation). Locations are local on network. Game logics global.";
			};
			class respect
			{
				description = "RESpect - The Effective Calculation Process.";
			};
			class showTime
			{
				description = "Shows time gap between two dates";
			};
			class supplydrop
			{
				description = "Drops object from air vehicle. Parachute size depends on dropped class.";
			};
			class supplydropService
			{
				description = "Supply drop system. Controls behavior of air vehicle - approaching and leaving drop zone.";
			};
			class transportService
			{
				description = "Transportation system";
			};
		};
		class Variables
		{
			file = "A3\functions_f\variables";
			class areEqual
			{
				description = "Returns true if all of the passed data are identical. This function can safely compare all data types, even if data types are mixed or nil";
			};
			class swapVars
			{
				description = "Swaps the values of two variables, passed in quotes";
			};
			class variableSpaceAdd
			{
				description = "Add element to variable from someone's variable space.";
			};
			class variableSpaceRemove
			{
				description = "Remove element to variable from someone's variable space.";
			};
		};
		class Vectors
		{
			file = "A3\functions_f\vectors";
			class crossProduct
			{
				description = "Returns cross product between two 3d vectors";
			};
			class dotProduct
			{
				description = "Returns the dot product of two vectors of any dimension";
			};
			class magnitude
			{
				description = "Returns the magnitude of a vector of any dimension";
			};
			class magnitudeSqr
			{
				description = "Same as BIS_fnc_magnitude, but returns the SQUARED magnitude. This function is a little faster than BIS_fnc_magnitude";
			};
			class rotateVector2D
			{
				description = "Returns a 2D vector rotated a specified number of degrees around the origin";
			};
			class unitVector
			{
				description = "Returns the unit vector for the passed vector of any dimension";
			};
			class vectorAdd
			{
				description = "Returns a vector that is the sum of <vector1> and <vector2>";
			};
			class vectorDiff
			{
				description = "Returns <vector> multiplied by <scalar>";
			};
			class vectorFromXToY
			{
				description = "Returns a unit vector that 'points' from <vector1> to <vector2>";
			};
			class vectorMultiply
			{
				description = "Returns the unit vector for the passed vector of any dimension";
			};
		};
		class Vehicles
		{
			file = "A3\functions_f\vehicles";
			class absSpeed
			{
				description = "Returns the absolute speed of a vehicle in 3D (km/h)";
			};
		};
	};
	class A2OA
	{
		project = "arma2oa";
		tag = "BIS";
		class Arrays
		{
			file = "A3\functions_f\arrays";
			class findExtreme
			{
				description = "Returns the minimum or maximum value in an Array.";
			};
		};
		class Debug
		{
			file = "A3\functions_f\debug";
			class configviewer
			{
				description = "Config Viewer";
			};
		};
		class GUI
		{
			file = "A3\functions_f\GUI";
			class AAN
			{
				description = "AAN overlay";
			};
			class dynamicText
			{
				description = "Dynamic credits";
			};
			class infoText
			{
				description = "Text in bottom right corner";
			};
		};
		class Misc
		{
			file = "A3\functions_f\misc";
			class halo
			{
				description = "High Altitude Low Opening";
			};
			class music
			{
				description = "Jukebox";
			};
			class scriptedMove
			{
				description = "Scripted move";
			};
		};
		class Numbers
		{
			file = "A3\functions_f\numbers";
			class linearConversion
			{
				description = "Linear conversion of a value from one set to another.";
			};
		};
		class Objects
		{
			file = "A3\functions_f\objects";
			class boundingBoxCorner
			{
				description = "Returns all bounding box corners. If position is given as second param, nearest one is returned.";
			};
			class boundingBoxDimensions
			{
				description = "Returns the sizes of the three dimension of an object's bounding box.";
			};
			class boundingBoxMarker
			{
				description = "Creates marker on object with size of objects' bounding box.";
			};
			class boundingCircle
			{
				description = "Returns size of bounding circle (similar to bounding sphere, but in x and y coordinates only).";
			};
		};
		class Scenes
		{
			file = "A3\functions_f\scenes";
			class UnitCapture
			{
				description = "Records movement data of input unit over a specified period of time. If the 4th parameter set to true, will record weapons fire data as well.";
			};
			class UnitCaptureFiring
			{
				description = "Records weapon fire data of input unit over a specified period of time.";
			};
			class UnitCaptureSimple
			{
				description = "(Simplified) Records only movement and dir data of input unit over a specified period of time. If the 4th parameter set to true, will record weapons fire data as well.";
			};
			class UnitPlay
			{
				description = "Plays back input movement data on input unit. The data can be pre-recorded using the UnitCapture script.";
				headerType = -1;
			};
			class UnitPlayFiring
			{
				description = "Plays back input weapon fire data on input unit. The data can be pre-recorded using the UnitCapture or UnitCaptureFiring script.";
			};
			class UnitPlaySimple
			{
				description = "(Simplified) Plays back input movement and dir data on input unit. The data can be pre-recorded using the UnitCaptureSimple script.";
			};
		};
		class Systems
		{
			file = "A3\functions_f\systems";
			class FTLmanager
			{
				description = "FTL tracks relationship between player and civilian side. Depending on players actions the FTL value increases or decreases";
			};
			class RespawnManager
			{
				description = "Manages CHECKPOINTS in a mission. Returns the nearest checkpoint in the time AI/player was killed.";
			};
			class spotter
			{
				description = "Spotter giving sniper info about distance.";
			};
		};
	};
	class A2PMC
	{
		project = "arma2oa";
		tag = "BIS";
		class Environment
		{
			file = "A3\functions_f\Environment";
			class crows
			{
				description = "Flock of crows.";
			};
			class destroyCity
			{
				description = "Destroys building in given area based on input seed.";
			};
			class flies
			{
				description = "Flies around dead bodies.";
			};
			class sandstorm
			{
				description = "Sandstorm particle effects.";
			};
		};
		class GUI
		{
			file = "A3\functions_f\GUI";
			class 3Dcredits
			{
				description = "3D credits.";
			};
			class customGPS
			{
				description = "Custom GPS frame.";
			};
			class customGPSVideo
			{
				description = "Plays video in GPS frame.";
			};
			class dirIndicator
			{
				description = "Direction indicator.";
			};
			class playVideo
			{
				description = "Plays ingame video.";
			};
		};
		class Spawning
		{
			file = "A3\functions_f\Spawning";
			class spawnEnemy
			{
				description = "Spawn enemies around players.";
			};
		};
	};
	class A3
	{
		project = "arma3";
		tag = "BIS";
		class 3DEN
		{
			file = "A3\functions_f\Animation\3DEN";
			class 3den_init
			{
				headerType = -1;
			};
			class 3den_onKeyDown
			{
				headerType = -1;
			};
			class 3den_onKeyUp
			{
				headerType = -1;
			};
			class 3den_onMissionLoad
			{
				headerType = -1;
			};
			class 3den_onMissionNew
			{
				headerType = -1;
			};
			class 3den_onMissionPreviewEnd
			{
				headerType = -1;
			};
			class 3den_onSelectionChange
			{
				headerType = -1;
			};
		};
		class Actions
		{
			file = "A3\functions_f\Actions";
			class packStaticWeapon
			{
				description = "Used in Large-Scale multiplayer to have a group pack a static weapon";
			};
			class unpackStaticWeapon
			{
				description = "Used in Large-Scale multiplayer to have a group unpack a static weapon";
			};
		};
		class Ambient
		{
			file = "A3\functions_f\ambient";
			class ambientAnim
			{
				description = "Lock unit into predefined ambient animation set.";
			};
			class ambientAnimCombat
			{
				description = "Simmilar to 'BIS_fnc_ambientAnim', however unit can be freed from the anim loop! Drawback, less animsets are available and it's slightly more CPU intense.";
			};
			class ambientAnimGetParams {};
			class ambientFlyby {};
			class animalBehaviour
			{
				description = "Animal behaviour control. Called by Animals_F\Data\Scripts\main.fsm.";
				headerType = 1;
			};
			class animalRandomization {};
		};
		class Arrays
		{
			file = "A3\functions_f\Arrays";
			class addToPairs {};
			class arrayShuffle {};
			class consolidateArray {};
			class findAllNestedElements {};
			class findInPairs {};
			class getFromPairs {};
			class priorityQueue_GetHighestPriority {};
			class priorityQueue_GetLowestPriority {};
			class priorityQueue_Init {};
			class priorityQueue_IsEmpty {};
			class priorityQueue_IsFull {};
			class priorityQueue_PopItem {};
			class priorityQueue_PushItem {};
			class removeFromPairs {};
			class setToPairs {};
			class sortAlphabetically {};
			class sortBy
			{
				description = "Sorts an array according to given algorithm.";
			};
			class updatePlayerArray {};
		};
		class Bitwise
		{
			file = "A3\functions_f\Bitwise";
			class bitflagsCheck {};
			class bitflagsFlip {};
			class bitflagsSet {};
			class bitflagsToArray {};
			class bitflagsUnset {};
			class bitwiseAND {};
			class bitwiseNOT {};
			class bitwiseOR {};
			class bitwiseXOR {};
		};
		class Briefing
		{
			file = "A3\functions_f\Briefing";
			class briefingAnimate
			{
				description = "Animate briefing markers.";
			};
			class briefingInit
			{
				description = "Initialize animated briefing markers.";
			};
		};
		class Camera
		{
			file = "A3\functions_f\Animation\Camera";
			class camera_deleted
			{
				headerType = -1;
			};
			class camera_getCam
			{
				headerType = -1;
			};
			class camera_getCinemaBordersEnabled
			{
				headerType = -1;
			};
			class camera_getFocus
			{
				headerType = -1;
			};
			class camera_getFOV
			{
				headerType = -1;
			};
			class camera_getHUDEnabled
			{
				headerType = -1;
			};
			class camera_getVisionMode
			{
				headerType = -1;
			};
			class camera_init
			{
				headerType = -1;
			};
			class camera_setCam
			{
				headerType = -1;
			};
			class camera_setCinemaBordersEnabled
			{
				headerType = -1;
			};
			class camera_setFocus
			{
				headerType = -1;
			};
			class camera_setFOV
			{
				headerType = -1;
			};
			class camera_setHUDEnabled
			{
				headerType = -1;
			};
			class camera_setVisionMode
			{
				headerType = -1;
			};
			class camera_tick
			{
				headerType = -1;
			};
		};
		class Camera3DEN
		{
			file = "A3\functions_f\Animation\Camera\3DEN";
			class camera_edenAttributesChanged
			{
				headerType = -1;
			};
			class camera_edenConnectionChanged
			{
				headerType = -1;
			};
			class camera_edenDeleted
			{
				headerType = -1;
			};
			class camera_edenInit
			{
				headerType = -1;
			};
			class camera_edenIsSelected
			{
				headerType = -1;
			};
			class camera_edenRegisteredToWorld
			{
				headerType = -1;
			};
			class camera_edenReset
			{
				headerType = -1;
			};
			class camera_edenSelectionChanged
			{
				headerType = -1;
			};
			class camera_edenUnregisteredFromWorld
			{
				headerType = -1;
			};
		};
		class Combat
		{
			file = "A3\functions_f\Combat";
			class enemyDetected
			{
				description = "Return true if unit knows about nearby enemy unit or driven vehicle.";
			};
			class enemyTargets
			{
				description = "Return list of enemy targets for given unit.";
			};
			class fireSupport
			{
				description = "Artillery/mortar fire support.";
			};
			class fireSupportCluster
			{
				description = "Virtual fire support - cluster shell.";
			};
			class fireSupportVirtual
			{
				description = "Virtual fire support.";
			};
			class stalk
			{
				description = "Make one group stalk another.";
			};
		};
		class Configs
		{
			file = "A3\functions_f\Configs";
			class configExtremes {};
			class configPath
			{
				description = "Return config path to given entry.";
			};
			class getCfg {};
			class getCfgData
			{
				description = "Smart-return number, text or array value from a config.";
			};
			class getCfgDataArray
			{
				description = "Get an array from cfg. If the retrieved value is not an array, retype it to an array.";
			};
			class getCfgDataBool
			{
				description = "Get a number defined in cfg and retype it into a bool.";
			};
			class getCfgDataObject
			{
				description = "Get a mission object defined in cfg by its name (a global variable).";
			};
			class getCfgDataPool
			{
				description = "Get array of attribute values out of the parent config class. Attributes need to be in this format: '_n', where n is an index number (starting from 0). If any discrepancy in indexing is detected, loading will stop and only the correctly indexed values will be returned.";
			};
			class getCfgIsClass
			{
				description = "Return true if it's a class.";
			};
			class getCfgSubClasses
			{
				description = "Return all child classes of given class.";
			};
			class loadClass {};
			class loadEntry {};
			class magazinesEntityType {};
			class returnChildren {};
			class subClasses {};
			class uniqueClasses {};
			class unitAddon {};
			class weaponAddon {};
			class weaponsEntityType {};
		};
		class ControlPoint
		{
			file = "A3\functions_f\Animation\Curve\ControlPoint";
			class controlPoint_compute
			{
				headerType = -1;
			};
			class controlPoint_computeOwnerKey
			{
				headerType = -1;
			};
			class controlPoint_getOwnerKey
			{
				headerType = -1;
			};
			class controlPoint_isArrive
			{
				headerType = -1;
			};
			class controlPoint_setIsArrive
			{
				headerType = -1;
			};
		};
		class ControlPoint3DEN
		{
			file = "A3\functions_f\Animation\Curve\ControlPoint\3DEN";
			class controlPoint_edenAttributesChanged
			{
				headerType = -1;
			};
			class controlPoint_edenConnectionChanged
			{
				headerType = -1;
			};
			class controlPoint_edenDragged
			{
				headerType = -1;
			};
			class controlPoint_edenIsSelected
			{
				headerType = -1;
			};
			class controlPoint_edenRegisteredToWorld
			{
				headerType = -1;
			};
			class controlPoint_edenUnregisteredFromWorld
			{
				headerType = -1;
			};
		};
		class Conversations
		{
			class kbTell
			{
				file = "\a3\Functions_F_Contact\TempFunctions\fn_kbTell.sqf";
			};
			class kbTellLocal
			{
				file = "\a3\Functions_F_Contact\TempFunctions\fn_kbTellLocal.sqf";
			};
		};
		class Curve
		{
			file = "A3\functions_f\Animation\Curve\RichCurve";
			class richCurve_compute
			{
				headerType = -1;
			};
			class richCurve_computeCurveArcLength
			{
				headerType = -1;
			};
			class richCurve_computeKeys
			{
				headerType = -1;
			};
			class richCurve_computeOwnerTimeline
			{
				headerType = -1;
			};
			class richCurve_computeSimulatedObjects
			{
				headerType = -1;
			};
			class richCurve_getCurveLength
			{
				headerType = -1;
			};
			class richCurve_getCurvePoints
			{
				headerType = -1;
			};
			class richCurve_getCurveValueFloat
			{
				headerType = -1;
			};
			class richCurve_getCurveValueVector
			{
				headerType = -1;
			};
			class richCurve_getFirstKey
			{
				headerType = -1;
			};
			class richCurve_getKeyFromIndex
			{
				headerType = -1;
			};
			class richCurve_getKeyIndex
			{
				headerType = -1;
			};
			class richCurve_getKeys
			{
				headerType = -1;
			};
			class richCurve_getKeysAtTime
			{
				headerType = -1;
			};
			class richCurve_getKeyTime
			{
				headerType = -1;
			};
			class richCurve_getLastKey
			{
				headerType = -1;
			};
			class richCurve_getLookAtPosition
			{
				headerType = -1;
			};
			class richCurve_getNextKey
			{
				headerType = -1;
			};
			class richCurve_getOrientationMode
			{
				headerType = -1;
			};
			class richCurve_getOwnerTimeline
			{
				headerType = -1;
			};
			class richCurve_getPreviousKey
			{
				headerType = -1;
			};
			class richCurve_getSimulatedObjects
			{
				headerType = -1;
			};
			class richCurve_getTimeRange
			{
				headerType = -1;
			};
			class richCurve_isTimeInSeconds
			{
				headerType = -1;
			};
			class richCurve_numKeys
			{
				headerType = -1;
			};
			class richCurve_reset
			{
				headerType = -1;
			};
			class richCurve_resetKeysEventState
			{
				headerType = -1;
			};
			class richCurve_setKeys
			{
				headerType = -1;
			};
			class richCurve_setOrientationMode
			{
				headerType = -1;
			};
		};
		class Curve3DEN
		{
			file = "A3\functions_f\Animation\Curve\RichCurve\3DEN";
			class richCurve_edenAttributesChanged
			{
				headerType = -1;
			};
			class richCurve_edenBakeCurve3D
			{
				headerType = -1;
			};
			class richCurve_edenComputeNearestSegment
			{
				headerType = -1;
			};
			class richCurve_edenConnectionChanged
			{
				headerType = -1;
			};
			class richCurve_edenDragged
			{
				headerType = -1;
			};
			class richCurve_edenDrawControlPoints3D
			{
				headerType = -1;
			};
			class richCurve_edenDrawCurve3D
			{
				headerType = -1;
			};
			class richCurve_edenIsSelected
			{
				headerType = -1;
			};
			class richCurve_edenMarkStateDirty
			{
				headerType = -1;
			};
			class richCurve_edenTick
			{
				headerType = -1;
			};
		};
		class DateTime
		{
			file = "A3\functions_f\Datetime";
			class CalculateDateTime
			{
				description = "Basic operations with date and time";
			};
			class CompareDateTimes
			{
				description = "Returns true if dates are identical, if not, returns the newer date";
			};
			class IsDateTimeNewer
			{
				description = "Returns true if the first passed datetime is newer than the second one";
			};
		};
		class Debug
		{
			file = "A3\functions_f\Debug";
			class animViewer {};
			class camera {};
			class cameraOld {};
			class debugConsoleExec {};
			class debugProfile {};
			class errorParamsType
			{
				headerType = 1;
			};
			class functionMeta {};
			class isDebugConsoleAllowed {};
			class isDemo {};
			class logFormat
			{
				headerType = 1;
			};
			class logFormatServer
			{
				headerType = 1;
			};
			class preload {};
		};
		class Diagnostic
		{
			file = "A3\functions_f\Diagnostic";
			class diagAAR
			{
				description = "Play After Action Review.";
			};
			class diagAARrecord
			{
				description = "Record After Action Review.";
				ext = ".fsm";
			};
			class diagBulletCam {};
			class diagConfig
			{
				description = "Prints config entries.";
			};
			class diagFindMissingAuthors {};
			class diagHit
			{
				cheatsEnabled = 1;
				description = "Record player's hits";
			};
			class diagJIRAlink
			{
				cheatsEnabled = 1;
				file = "\a3\Functions_F_Contact\TempFunctions\fn_diagJIRAlink.sqf";
			};
			class diagKey
			{
				cheatsEnabled = 1;
				description = "Record pressed keys";
			};
			class diagKeyLayout
			{
				description = "Exports default key layout to wiki template.";
			};
			class diagKeyTest
			{
				description = "Outputs key settings anf checks for inconsistencies.";
			};
			class diagKnownAsTarget
			{
				description = "Visualize profile which units know about one specific unit and how much they do.";
			};
			class diagKnownTargets
			{
				description = "Visualize profile which units one specific unit knows about and how much.";
			};
			class diagLoop
			{
				description = "Runs the code in a loop.";
			};
			class diagMacros {};
			class diagMacrosAuthor {};
			class diagMacrosEditorPreview {};
			class diagMacrosMapSize {};
			class diagMacrosNameSound {};
			class diagMacrosSimpleObject {};
			class diagMacrosVerify {};
			class diagMissionPositions
			{
				cheatsEnabled = 1;
				description = "Display units in all missions.";
			};
			class diagMissionWeapons
			{
				description = "Lists all weapons and magazines available in a mission.";
			};
			class diagObjectPerformance {};
			class diagPreview
			{
				description = "Previews config items.";
			};
			class diagPreviewCycle {};
			class diagPreviewVehicleCrew
			{
				description = "Previews vehicles with crew.";
			};
			class diagRadio
			{
				cheatsEnabled = 1;
				description = "Record radio protocol";
			};
			class diagVehicleIcons
			{
				description = "Previews vehicle icons";
			};
			class diagWiki
			{
				description = "Scans specific config folder and outputs the values in wiki format.";
			};
			class exportCfgHints {};
			class exportCfgMagazines {};
			class exportCfgPatches {};
			class exportCfgVehicles {};
			class exportCfgVehiclesAssetDB {};
			class exportCfgWeapons {};
			class exportConfigHierarchy {};
			class exportEditorPreviews {};
			class exportFunctionsToWiki {};
			class exportGroupFormations {};
			class importImageLinks {};
			class locWeaponInfo
			{
				description = "Checks length of weapon info texts";
			};
		};
		class Effects
		{
			file = "A3\functions_f\Effects";
			class effectFired
			{
				description = "Fired Effect.";
				headerType = -1;
			};
			class effectFiredArtillery
			{
				description = "";
				headerType = -1;
			};
			class effectFiredCruiseMissile
			{
				description = "";
				headerType = -1;
			};
			class effectFiredFlares
			{
				description = "";
				headerType = -1;
			};
			class effectFiredHeliRocket
			{
				description = "";
				headerType = -1;
			};
			class effectFiredLongSmoke
			{
				description = "";
				headerType = -1;
			};
			class effectFiredRifle
			{
				description = "";
				headerType = -1;
			};
			class effectFiredRocket
			{
				description = "";
				headerType = -1;
			};
			class effectFiredSmokeLauncher
			{
				description = "";
				headerType = -1;
			};
			class effectFiredSmokeLauncher_boat
			{
				description = "";
				headerType = -1;
			};
			class effectKilled
			{
				description = "Killed Effect.";
				headerType = -1;
			};
			class effectKilledAirDestruction
			{
				description = "";
				headerType = -1;
			};
			class effectKilledAirDestructionStage2
			{
				description = "";
				headerType = -1;
			};
			class effectKilledSecondaries
			{
				description = "";
				headerType = -1;
			};
			class effectPlankton
			{
				description = "Plakton Effect.";
				headerType = -1;
			};
		};
		class Environment
		{
			file = "A3\functions_f\Environment";
			class initWorldScene {};
			class setPPeffectTemplate {};
		};
		class Feedback
		{
			file = "A3\functions_f\Feedback";
			class bloodEffect
			{
				description = "Blood splash (texture) postprocess.";
			};
			class damageChanged
			{
				description = "Handle effects caused by changing of damage.";
			};
			class damagePulsing
			{
				description = "Pulsing damage effect.";
			};
			class dirtEffect
			{
				description = "Dirt (texture) postprocess.";
			};
			class fatigueEffect
			{
				description = "Effects for high fatigue values.";
			};
			class feedbackInit
			{
				description = "Init function for feedback system. Declaration of variables, eventhandlers, etc.";
			};
			class feedbackMain
			{
				ext = ".fsm";
				preInit = 1;
			};
			class flamesEffect
			{
				description = "Flames (texture) postprocess.";
			};
			class healing
			{
				description = "Healing postprocess.";
			};
			class incapacitatedEffect
			{
				description = "WIP";
			};
			class indicateBleeding
			{
				description = "WIP";
			};
			class radialRed
			{
				description = "Red radial postprocess (hit damage, fire damage).";
			};
			class radialRedOut
			{
				description = "Red radial postprocess (fire damage) is removed.";
			};
		};
		class Geometry
		{
			file = "A3\functions_f\Geometry";
			class relScaledDist
			{
				description = "Return relative scaled distance to the center of a trigger.";
			};
			class terrainGradAngle
			{
				description = "Return gradient angle of the terrain at a specified position and a compass direction.";
			};
		};
		class GUI
		{
			file = "A3\functions_f\GUI";
			class cinemaBorder
			{
				description = "Moves camera borders";
			};
			class controlConfigs {};
			class createLogRecord {};
			class credits_movie
			{
				description = "Movie credits";
			};
			class credits_movieConfig
			{
				description = "Movie credits config preprocessor";
			};
			class credits_movieSupport
			{
				description = "Movie credits supporters preprocessor";
			};
			class ctrlFitToTextHeight {};
			class ctrlSetScale {};
			class establishingShot
			{
				description = "Play a fake UAV observational sequence which serves as an establishing shot.";
			};
			class exportGUIBaseClasses {};
			class groupIndicator
			{
				description = "Display group indicator.";
			};
			class guiEffectTiles
			{
				description = "GUI Effects";
			};
			class initDisplay
			{
				headerType = -1;
				preStart = 1;
			};
			class liveFeed
			{
				description = "Display a live feed.";
			};
			class liveFeedEffects
			{
				description = "Add effects to a live feed.";
			};
			class liveFeedSetSource
			{
				description = "Set the source of a live feed.";
			};
			class liveFeedSetTarget
			{
				description = "Set the target of a live feed.";
			};
			class liveFeedTerminate
			{
				description = "Terminate a live feed.";
			};
			class openFieldManual
			{
				description = "Opens Field Manual on the selected topic and hint.";
			};
			class rscLayer
			{
				description = "Register a new RSC layer.";
			};
			class setIDCStreamFriendly
			{
				description = "Shows or hides UI control according to state of the Stream Friendly UI switch in Game Options.";
			};
			class setMissionStatusSlot {};
			class showMissionStatus {};
			class showNotification {};
			class showUnitInfo
			{
				description = "Hide or show unit info";
			};
			class showWelcomeScreen
			{
				file = "\a3\Functions_F_Contact\TempFunctions\fn_showWelcomeScreen.sqf";
			};
			class textTiles
			{
				description = "";
			};
			class titlecard
			{
				description = "Display a mission-specific titlecard before the mission begins.";
			};
			class toUpperDisplayTexts
			{
				description = "Converts text of selected classes in one display to upper-case.";
			};
			class typeText
			{
				description = "Types a structured text on the screen, letter by letter, cursor blinking.";
			};
			class typeText2 {};
			class versionInfo
			{
				description = "Displays version info in Pause and other Menus.";
			};
		};
		class Hints
		{
			file = "A3\functions_f\Hints";
			class advHint
			{
				description = "Advanced hint system";
			};
			class advHintArg
			{
				description = "Advanced hint argument preprocess (used by BIS_fnc_advHint)";
			};
			class advHintCall
			{
				description = "Advanced hint call (used by BIS_fnc_advHint)";
			};
			class advHintCredits
			{
				description = "Advanced hint credits preprocessor";
			};
			class advHintFormat {};
		};
		class HoldActions
		{
			file = "A3\functions_f\HoldActions";
			class holdActionAdd {};
			class holdActionRemove {};
		};
		class Interp
		{
			file = "A3\functions_f\Animation\Interp";
			class berp
			{
				headerType = -1;
			};
			class berpVector
			{
				headerType = -1;
			};
			class bezierInterpolate
			{
				headerType = -1;
			};
			class bezierInterpolateVector
			{
				headerType = -1;
			};
			class bounceIn
			{
				headerType = -1;
			};
			class bounceInOut
			{
				headerType = -1;
			};
			class bounceInOutVector
			{
				headerType = -1;
			};
			class bounceInVector
			{
				headerType = -1;
			};
			class bounceOut
			{
				headerType = -1;
			};
			class bounceOutVector
			{
				headerType = -1;
			};
			class clerp
			{
				headerType = -1;
			};
			class easeIn
			{
				headerType = -1;
			};
			class easeInOut
			{
				headerType = -1;
			};
			class easeInOutVector
			{
				headerType = -1;
			};
			class easeInVector
			{
				headerType = -1;
			};
			class easeOut
			{
				headerType = -1;
			};
			class easeOutVector
			{
				headerType = -1;
			};
			class hermite
			{
				headerType = -1;
			};
			class hermiteVector
			{
				headerType = -1;
			};
			class interpolate
			{
				headerType = -1;
			};
			class interpolateConstant
			{
				headerType = -1;
			};
			class interpolateVector
			{
				headerType = -1;
			};
			class interpolateVectorConstant
			{
				headerType = -1;
			};
			class inverseLerp
			{
				headerType = -1;
			};
			class lerp
			{
				headerType = -1;
			};
			class lerpVector
			{
				headerType = -1;
			};
			class quinticIn
			{
				headerType = -1;
			};
			class quinticInOut
			{
				headerType = -1;
			};
			class quinticInOutVector
			{
				headerType = -1;
			};
			class quinticInVector
			{
				headerType = -1;
			};
			class quinticOut
			{
				headerType = -1;
			};
			class quinticOutVector
			{
				headerType = -1;
			};
			class slerp
			{
				headerType = -1;
			};
		};
		class Inventory
		{
			file = "A3\functions_f\inventory";
			class addWeapon
			{
				description = "Add a weapon to a unit with the right magazines.";
			};
			class basicBackpack {};
			class hasItem {};
			class inventoryExists
			{
				file = "a3\functions_f_mp_mark\inventory\fn_inventoryExists.sqf";
			};
			class isThrowable {};
			class itemType {};
			class limitAmmunition {};
			class limitItems {};
			class limitWeaponItems {};
			class loadInventory {};
			class unitHeadgear {};
		};
		class Key
		{
			file = "A3\functions_f\Animation\Curve\Key";
			class key_compute
			{
				headerType = -1;
			};
			class key_computeOwnerCurve
			{
				headerType = -1;
			};
			class key_computeTime
			{
				headerType = -1;
			};
			class key_getArriveControlPoint
			{
				headerType = -1;
			};
			class key_getArriveTangent
			{
				headerType = -1;
			};
			class key_getArriveTangentWeight
			{
				headerType = -1;
			};
			class key_getConfigTime
			{
				headerType = -1;
			};
			class key_getFOV
			{
				headerType = -1;
			};
			class key_getInterpMode
			{
				headerType = -1;
			};
			class key_getLeaveControlPoint
			{
				headerType = -1;
			};
			class key_getLeaveTangent
			{
				headerType = -1;
			};
			class key_getLeaveTangentWeight
			{
				headerType = -1;
			};
			class key_getOwnerCurve
			{
				headerType = -1;
			};
			class key_getTime
			{
				headerType = -1;
			};
			class key_getValue
			{
				headerType = -1;
			};
			class key_isFloat
			{
				headerType = -1;
			};
			class key_isVector
			{
				headerType = -1;
			};
			class key_setArriveTangent
			{
				headerType = -1;
			};
			class key_setArriveTangentWeight
			{
				headerType = -1;
			};
			class key_setInterpMode
			{
				headerType = -1;
			};
			class key_setLeaveTangent
			{
				headerType = -1;
			};
			class key_setLeaveTangentWeight
			{
				headerType = -1;
			};
			class key_setTime
			{
				headerType = -1;
			};
			class key_setValue
			{
				headerType = -1;
			};
		};
		class Key3DEN
		{
			file = "A3\functions_f\Animation\Curve\Key\3DEN";
			class key_edenAreControlPointsLocked
			{
				headerType = -1;
			};
			class key_edenAttributesChanged
			{
				headerType = -1;
			};
			class key_edenConnectionChanged
			{
				headerType = -1;
			};
			class key_edenDragged
			{
				headerType = -1;
			};
			class key_edenIsSelected
			{
				headerType = -1;
			};
			class key_edenRegisteredToWorld
			{
				headerType = -1;
			};
			class key_edenUnregisteredFromWorld
			{
				headerType = -1;
			};
		};
		class KeyframeAnimation
		{
			file = "A3\functions_f\Animation\KeyframeAnimation";
			class keyframeAnimation_deltaTime
			{
				headerType = -1;
				preInit = 1;
			};
			class keyframeAnimation_init
			{
				headerType = -1;
				postInit = 1;
			};
		};
		class Map
		{
			file = "A3\functions_f\Map";
			class drawArrow {};
			class exportMapToBiTXT {};
			class mapGridSize
			{
				description = "Returns current map grid size.";
			};
			class mapSize
			{
				description = "Returns map size.";
			};
			class markerToString {};
			class markerToTrigger
			{
				description = "Makes an existing or new trigger cover a marker area.";
			};
			class markWaypoints
			{
				description = "Creates a marker on each uncompleted waypoint and marks it checked after completing that WP.";
			};
			class stringToMarker {};
			class stringToMarkerLocal {};
			class triggerToMarker
			{
				description = "Makes an existing or new marker cover a trigger area.";
			};
		};
		class MapAnimation
		{
			file = "A3\functions_f\Animation\MapAnimation";
			class mapAnimAdd {};
			class mapAnimClear {};
			class mapAnimDone {};
		};
		class Math
		{
			file = "A3\functions_f\Animation\Math";
			class bezierLength
			{
				headerType = -1;
			};
			class clamp
			{
				headerType = -1;
			};
			class clampVector
			{
				headerType = -1;
			};
			class deltaTime
			{
				headerType = -1;
			};
			class findLookAt
			{
				headerType = -1;
			};
			class isEqualVector
			{
				headerType = -1;
			};
			class nearestPoint
			{
				headerType = -1;
			};
			class pow
			{
				headerType = -1;
			};
			class pulsate
			{
				headerType = -1;
			};
			class vectorDivide
			{
				headerType = -1;
			};
		};
		class Misc
		{
			file = "A3\functions_f\Misc";
			class addCommMenuItem {};
			class addScriptedEventHandler {};
			class animateFlag {};
			class callScriptedEventHandler {};
			class colorConfigToRGBA
			{
				description = "Converts config color format to RGBA array of numbers.";
			};
			class colorRGBAtoHTML
			{
				description = "Converts RGBA color format to HTML color format";
			};
			class colorRGBAtoTexture
			{
				description = "Converts RGB color format to procedural texture.";
			};
			class decodeFlags {};
			class decodeFlags2 {};
			class decodeFlags4 {};
			class decodeFlags8 {};
			class deleteCounter {};
			class disableLoading {};
			class encodeFlags {};
			class encodeFlags2 {};
			class encodeFlags4 {};
			class encodeFlags8 {};
			class endLoadingScreen {};
			class fadeEffect
			{
				description = "Easily carry out complex fading. Default values will be used if parameters aren't defined or set to nil.";
			};
			class findOverwatch
			{
				description = "Finds a position that provides overwatch on another position";
			};
			class fire {};
			class fixDate {};
			class getArea {};
			class gridToPos {};
			class groupVehicles {};
			class healthEffects
			{
				description = "Health system effects.";
			};
			class interpolateWeather
			{
				description = "Interpolate weather in time.";
			};
			class isLeapYear {};
			class jukebox {};
			class keyCode {};
			class localize
			{
				description = "Checks if text is localization key and if so, return the localized text.";
			};
			class loop {};
			class monthDays {};
			class nearestRoad {};
			class onDiaryChanged
			{
				description = "Register code to be executed when diary item changes.";
			};
			class progressLoadingScreen {};
			class rankParams
			{
				description = "Return information about military rank.";
			};
			class refreshCommMenu {};
			class removeAllScriptedEventHandlers {};
			class removeCommMenuItem {};
			class removeScriptedEventHandler {};
			class runLater {};
			class saveGame
			{
				file = "\a3\Functions_F_Contact\TempFunctions\fn_saveGame.sqf";
			};
			class startLoadingScreen {};
			class sunriseSunsetTime {};
			class textureMarker
			{
				description = "Loads texture from CfgMarkers.";
			};
			class textureVehicleIcon
			{
				description = "Loads texture from CfgVehicleIcons.";
			};
			class weaponComponents
			{
				description = "Get a list of weapon components - weapon and all attachment classes.";
			};
		};
		class Missions
		{
			file = "A3\functions_f\Missions";
			class basicTask
			{
				description = "Predefined tasks";
			};
			class forceEnd {};
			class isCampaign
			{
				description = "Check to see if a mission is being run in a campaign.";
			};
			class missionConversations
			{
				description = "Mission conversation";
			};
			class missionConversationsLocal
			{
				description = "Mission conversation (local file)";
				file = "missionConversations.sqf";
				headerType = 1;
				recompile = 1;
			};
			class missionFlow
			{
				description = "Mission flow";
				ext = ".fsm";
				file = "missionFlow.fsm";
				postInit = 1;
				recompile = 1;
			};
			class missionHandlers
			{
				preInit = 1;
			};
			class missionTasks
			{
				description = "Mission tasks";
			};
			class missionTasksLocal
			{
				description = "Mission tasks (local file)";
				file = "missionTasks.sqf";
				headerType = 1;
				recompile = 1;
			};
			class trackMissionTime {};
		};
		class MissionTypes {};
		class ModuleFiringDrills
		{
			file = "A3\modules_f_beta\FiringDrills\functions";
			class moduleFDCPClear
			{
				description = "Check CPs are clear and provide feedback";
			};
			class moduleFDCPIn
			{
				description = "Entering a Check Point";
				ext = ".fsm";
			};
			class moduleFDCPOut
			{
				description = "Exiting a Check Point";
				ext = ".fsm";
			};
			class moduleFDFadeMarker
			{
				description = "Crude marker fading in and out";
			};
			class moduleFDSkeetDestruction
			{
				description = "Skeet clay destruction effect";
			};
			class moduleFDStatsClear
			{
				description = "Clear all profile statistics for Firing Drills";
			};
			class moduleFiringDrill
			{
				description = "Main Firing Drill function";
				ext = ".fsm";
			};
		};
		class ModuleFiringDrills_Mark
		{
			file = "A3\Modules_F_Mark\FiringDrills\functions";
			class moduleFDBalloonAirDestruction
			{
				description = "Air-filled balloon destruction effect";
			};
			class moduleFDBalloonWaterDestruction
			{
				description = "Water-filled balloon destruction effect";
			};
		};
		class Modules
		{
			file = "A3\functions_f\Modules";
			class initModules {};
			class moduleExecute {};
			class moduleHandle
			{
				ext = ".fsm";
			};
			class moduleInit {};
			class moduleModules {};
			class moduleTriggers {};
			class moduleUnits {};
		};
		class ModuleTimeTrials
		{
			file = "A3\modules_f_kart\TimeTrials\functions";
			class moduleTimeTrial
			{
				description = "Main Time Trial function";
				ext = ".fsm";
			};
			class moduleTTCPClear
			{
				description = "Clearing a Check Point";
				ext = ".fsm";
			};
			class moduleTTCPIn
			{
				description = "Entering a Check Point";
				ext = ".fsm";
			};
			class moduleTTCPOut
			{
				description = "Exiting a Check Point";
				ext = ".fsm";
			};
			class moduleTTCPTrigger
			{
				description = "Detect competitors passing through Check Points";
			};
			class moduleTTCPTriggerBehind
			{
				description = "Detect competitors being behind Check Points";
			};
			class moduleTTStatsClear
			{
				description = "Clear all profile statistics for Time Trials";
			};
		};
		class MP
		{
			file = "A3\functions_f\MP";
			class addScore {};
			class admin {};
			class call {};
			class deleteVehicleCrew {};
			class execFSM {};
			class execRemote {};
			class execVM {};
			class initMultiplayer {};
			class initPlayable {};
			class missionTimeLeft {};
			class onPlayerConnected {};
			class setRespawnDelay {};
			class spawn {};
			class spawnOrdered {};
		};
		class Network
		{
			file = "A3\functions_f\Network";
			class groupFromNetId {};
			class netId {};
			class objectFromNetId {};
		};
		class Numbers
		{
			file = "A3\functions_f\Numbers";
			class countdown {};
			class parseNumberSafe
			{
				headerType = -1;
			};
		};
		class Objects
		{
			file = "A3\functions_f\Objects";
			class allSynchronizedObjects {};
			class allTurrets {};
			class attachToRelative {};
			class cargoTurretIndex {};
			class crewCount {};
			class getTurrets {};
			class objectHeight {};
			class objectType {};
			class objectVar {};
			class setHitPointDamage {};
			class setIdentity {};
			class setObjectRotation {};
			class setRank {};
			class spawnObjects {};
			class switchLamp {};
			class synchronizedObjectsQueue {};
			class turretConfig {};
			class vehicleCrewTurrets {};
		};
		class OO
		{
			file = "A3\functions_f\OO";
			class addClassOO
			{
				description = "Registering a class for the OO scripting shell.";
			};
			class createObjectOO
			{
				description = "Instantiating an object of a certain class.";
			};
			class validateParametersOO
			{
				description = "Validating the parameters of a certain method in a class.";
			};
		};
		class Params
		{
			file = "A3\functions_f\Params";
			class getParamValue {};
			class initParams
			{
				postInit = 1;
			};
			class paramCountdown {};
			class paramDaytime {};
			class paramGuerFriendly {};
			class paramRespawnTickets {};
			class paramReviveBleedOutDuration {};
			class paramReviveDuration {};
			class paramReviveForceRespawnDuration {};
			class paramReviveMedicSpeedMultiplier {};
			class paramReviveMode {};
			class paramReviveRequiredItems {};
			class paramReviveRequiredTrait {};
			class paramReviveUnconsciousStateMode {};
			class paramTimeAcceleration
			{
				file = "a3\functions_f_mp_mark\params\fn_paramTimeAcceleration.sqf";
			};
			class paramWeather {};
			class storeParamsValues
			{
				preInit = 1;
			};
		};
		class Respawn
		{
			file = "A3\functions_f\respawn";
			class addRespawnInventory {};
			class addRespawnPosition {};
			class getRespawnInventories {};
			class getRespawnMarkers {};
			class getRespawnPositions {};
			class initRespawn
			{
				postInit = 1;
			};
			class missionRespawnType {};
			class moveToRespawnPosition {};
			class removeRespawnInventory {};
			class removeRespawnPosition {};
			class respawnBase {};
			class respawnConfirm {};
			class respawnCounter {};
			class respawnEndMission {};
			class respawnGroup {};
			class respawnInstant {};
			class respawnMenuInventory {};
			class respawnMenuPosition {};
			class respawnNone {};
			class respawnSeagull {};
			class respawnSide {};
			class respawnSpectator {};
			class respawnTickets {};
			class respawnTimePenalty {};
			class respawnWave {};
			class selectRespawnTemplate {};
			class setRespawnInventory {};
			class showRespawnMenu {};
			class showRespawnMenuDisableItem {};
			class showRespawnMenuDisableItemCheck {};
			class showRespawnMenuDisableItemDraw {};
			class showRespawnMenuHeader {};
			class showRespawnMenuInventory {};
			class showRespawnMenuInventoryDetails {};
			class showRespawnMenuInventoryItems {};
			class showRespawnMenuInventoryLimit {};
			class showRespawnMenuInventoryLimitRefresh {};
			class showRespawnMenuInventoryLimitRespawn {};
			class showRespawnMenuInventoryList {};
			class showRespawnMenuInventoryLoadout {};
			class showRespawnMenuInventoryMetadata {};
			class showRespawnMenuPosition {};
			class showRespawnMenuPositionList {};
			class showRespawnMenuPositionMap {};
			class showRespawnMenuPositionMapDraw {};
			class showRespawnMenuPositionMapHandle {};
			class showRespawnMenuPositionMetadata {};
			class showRespawnMenuPositionName {};
			class showRespawnMenuPositionRefresh {};
		};
		class Sides
		{
			file = "A3\functions_f\sides";
			class areFriendly {};
			class enemySides {};
			class friendlySides {};
			class objectSide {};
			class playerSideFaction {};
			class sideColor {};
			class sideID {};
			class sideIsEnemy {};
			class sideIsFriendly {};
			class sideName {};
			class sideNameUnlocalized {};
			class sideType {};
		};
		class SimpleObjects
		{
			file = "A3\functions_f\SimpleObjects";
			class adjustSimpleObject {};
			class createSimpleObject {};
			class replaceWithSimpleObject {};
			class simpleObjectData {};
		};
		class Strategic
		{
			file = "A3\functions_f\Strategic";
			class getUnitInsignia {};
			class ORBATAddGroupOverlay
			{
				description = "Register texture(s) to be displayed over CfgORBAT group.";
			};
			class ORBATAnimate
			{
				description = "Animate ORBAT (Order of Battle) viewer.";
			};
			class ORBATConfigPreview
			{
				description = "";
			};
			class ORBATGetGroupParams
			{
				description = "Return group params from CfgORBAT.";
			};
			class ORBATOpen
			{
				description = "Open ORBAT (Order of Battle) viewer.";
			};
			class ORBATRemoveGroupOverlay
			{
				description = "Unregister texture(s) to be displayed over CfgORBAT group.";
			};
			class ORBATSetGroupFade
			{
				description = "Set fade value of CfgORBAT group and all groups below it.";
			};
			class ORBATSetGroupParams
			{
				description = "Override group params from CfgORBAT.";
			};
			class ORBATTooltip
			{
				description = "Display group tooltip.";
			};
			class setUnitInsignia {};
			class StrategicMapAnimate
			{
				description = "Animate Strategic Map.";
			};
			class StrategicMapMouseButtonClick {};
			class StrategicMapOpen
			{
				description = "Open Strategic Map.";
			};
		};
		class Strings
		{
			file = "A3\functions_f\Strings";
			class alignTabs {};
			class filterString
			{
				description = "Removes characters from a string based on the list of allowed characters.";
			};
			class inString
			{
				description = "Find a string within a string.";
			};
			class ordinalNumber {};
			class phoneticalWord {};
			class romanNumeral {};
			class splitString {};
			class teamColor {};
			class trimString
			{
				description = "Get a substring out of the source string, using start and end indexes.";
			};
		};
		class Supports
		{
			file = "A3\functions_f\Supports";
			class addSupportLink {};
			class changeSupportRadioChannel {};
			class limitSupport {};
			class removeSupportLink {};
		};
		class Systems
		{
			file = "A3\functions_f\systems";
			class bleedTickets {};
			class InstructorFigure
			{
				description = "System for playing Instructive Figures";
			};
		};
		class Tasks
		{
			file = "A3\functions_f\Tasks";
			class deleteTask {};
			class setTask
			{
				file = "\a3\Functions_F_Contact\TempFunctions\fn_setTask.sqf";
			};
			class setTaskLocal
			{
				file = "\a3\Functions_F_Contact\TempFunctions\fn_setTaskLocal.sqf";
			};
			class sharedObjectives {};
			class taskAlwaysVisible
			{
				description = "Returns if task is forced to be always visible in 3D.";
			};
			class taskChildren
			{
				description = "Return a task's sub-tasks.";
			};
			class taskCompleted
			{
				description = "Return if a task has been completed.";
			};
			class taskCreate
			{
				description = "Create a task.";
			};
			class taskCurrent
			{
				description = "Return a unit's current task.";
			};
			class taskDescription
			{
				description = "Return a task's description.";
			};
			class taskDestination
			{
				description = "Return a task's destination.";
			};
			class taskExists
			{
				description = "Return if a task exists.";
			};
			class taskHint
			{
				description = "Display a task hint.";
			};
			class taskParent
			{
				description = "Return a sub-task's parent task.";
			};
			class taskReal
			{
				description = "Find the actual task associated with a task name assigned to a unit.";
			};
			class taskSetAlwaysVisible
			{
				description = "Forces task to be always visible in 3D.";
			};
			class taskSetCurrent
			{
				description = "Set a task to current.";
			};
			class taskSetDescription
			{
				description = "Set a task's description.";
			};
			class taskSetDestination
			{
				description = "Set a task's destination.";
			};
			class taskSetState
			{
				description = "Set a task's state.";
			};
			class taskSetType {};
			class taskState
			{
				description = "Return a task's state.";
			};
			class tasksUnit
			{
				description = "Grab all tasks currently created for a given unit.";
			};
			class taskType {};
			class taskTypeIcon {};
			class taskVar {};
		};
		class Timeline
		{
			file = "A3\functions_f\Animation\Timeline";
			class timeline_cleanup
			{
				headerType = -1;
			};
			class timeline_deleted
			{
				headerType = -1;
			};
			class timeline_finish
			{
				headerType = -1;
			};
			class timeline_getAlpha
			{
				headerType = -1;
			};
			class timeline_getCurrentTime
			{
				headerType = -1;
			};
			class timeline_getInterpMode
			{
				headerType = -1;
			};
			class timeline_getLength
			{
				headerType = -1;
			};
			class timeline_getPlayFromStart
			{
				headerType = -1;
			};
			class timeline_getPlayRate
			{
				headerType = -1;
			};
			class timeline_getPlayTime
			{
				headerType = -1;
			};
			class timeline_getPosition
			{
				headerType = -1;
			};
			class timeline_getSimulatedCurves
			{
				headerType = -1;
			};
			class timeline_getStopTime
			{
				headerType = -1;
			};
			class timeline_getTimeLeft
			{
				headerType = -1;
			};
			class timeline_init
			{
				headerType = -1;
			};
			class timeline_isFinished
			{
				headerType = -1;
			};
			class timeline_isLooping
			{
				headerType = -1;
			};
			class timeline_isPaused
			{
				headerType = -1;
			};
			class timeline_isPlaying
			{
				headerType = -1;
			};
			class timeline_isReverse
			{
				headerType = -1;
			};
			class timeline_play
			{
				headerType = -1;
			};
			class timeline_setInterpMode
			{
				headerType = -1;
			};
			class timeline_setLength
			{
				headerType = -1;
			};
			class timeline_setLoop
			{
				headerType = -1;
			};
			class timeline_setPause
			{
				headerType = -1;
			};
			class timeline_setPlayRate
			{
				headerType = -1;
			};
			class timeline_setPosition
			{
				headerType = -1;
			};
			class timeline_setReverse
			{
				headerType = -1;
			};
			class timeline_simulateCurves
			{
				headerType = -1;
			};
			class timeline_stop
			{
				headerType = -1;
			};
			class timeline_tick
			{
				headerType = -1;
			};
		};
		class Timeline3DEN
		{
			file = "A3\functions_f\Animation\Timeline\3DEN";
			class timeline_edenAttributesChanged
			{
				headerType = -1;
			};
			class timeline_edenConnectionChanged
			{
				headerType = -1;
			};
			class timeline_edenDeleted
			{
				headerType = -1;
			};
			class timeline_edenDragged
			{
				headerType = -1;
			};
			class timeline_edenInit
			{
				headerType = -1;
			};
			class timeline_edenIsSelected
			{
				headerType = -1;
			};
		};
		class Variables
		{
			file = "A3\functions_f\Variables";
			class areEqualNotNil {};
			class loadFunctions {};
		};
		class Vectors
		{
			file = "A3\functions_f\Vectors";
			class multiplySquareMatrixByVector {};
			class rotateVector3D {};
			class vectorDirAndUpRelative {};
			class weaponDirectionRelative {};
		};
		class Vehicles
		{
			file = "A3\functions_f\Vehicles";
			class missileLaunchPositionFix
			{
				description = "Fix ATGM/SAM launch position.";
			};
			class vehicleRoles {};
		};
		class Waypoints
		{
			file = "A3\functions_f\Waypoints";
			class scriptedWaypointType {};
			class wpArtillery {};
			class wpLand {};
			class wpPatrol {};
			class wpRelax {};
			class wpSuppress {};
		};
	};
	class A3_Bootcamp
	{
		tag = "BIS";
		class GUI
		{
			file = "A3\functions_f_bootcamp\GUI";
			class animateTaskWaypoint {};
		};
		class Inventory
		{
			file = "A3\functions_f_bootcamp\Inventory";
			class addVirtualBackpackCargo {};
			class addVirtualItemCargo {};
			class addVirtualMagazineCargo {};
			class addVirtualWeaponCargo {};
			class arsenal {};
			class baseWeapon {};
			class compatibleItems {};
			class compatibleMagazines {};
			class deleteInventory {};
			class exportInventory {};
			class getVirtualBackpackCargo {};
			class getVirtualItemCargo {};
			class getVirtualMagazineCargo {};
			class getVirtualWeaponCargo {};
			class removeVirtualBackpackCargo {};
			class removeVirtualItemCargo {};
			class removeVirtualMagazineCargo {};
			class removeVirtualWeaponCargo {};
			class saveInventory {};
		};
		class Misc
		{
			file = "A3\functions_f_bootcamp\Misc";
			class getUnitByUid {};
			class moveAction {};
			class traceBullets {};
		};
		class Training
		{
			file = "A3\functions_f_bootcamp\Training";
			class target {};
		};
		class VR
		{
			file = "A3\functions_f_bootcamp\VR";
			class VRCourseBallistics1
			{
				ext = ".fsm";
			};
			class VRCourseBallistics2
			{
				ext = ".fsm";
			};
			class VRCourseBallistics3
			{
				ext = ".fsm";
			};
			class VRCourseBallistics4
			{
				ext = ".fsm";
			};
			class VRCourseCommandingActions1
			{
				ext = ".fsm";
			};
			class VRCourseCommandingActions2
			{
				ext = ".fsm";
			};
			class VRCourseCommandingActions3
			{
				ext = ".fsm";
			};
			class VRCourseCommandingBehaviour1
			{
				ext = ".fsm";
			};
			class VRCourseCommandingBehaviour2
			{
				ext = ".fsm";
			};
			class VRCourseCommandingBehaviour3
			{
				ext = ".fsm";
			};
			class VRCourseCommandingMovement1
			{
				ext = ".fsm";
			};
			class VRCourseCommandingMovement2
			{
				ext = ".fsm";
			};
			class VRCourseCommandingVehicles1
			{
				ext = ".fsm";
			};
			class VRCourseCommandingVehicles2
			{
				ext = ".fsm";
			};
			class VRCourseCommandingVehicles3
			{
				ext = ".fsm";
			};
			class VRCourseLaunchers1
			{
				ext = ".fsm";
			};
			class VRCourseLaunchers2
			{
				ext = ".fsm";
			};
			class VRCourseLaunchers3
			{
				ext = ".fsm";
			};
			class VRCoursePlaceables1
			{
				ext = ".fsm";
			};
			class VRCoursePlaceables2
			{
				ext = ".fsm";
			};
			class VRCoursePlaceables3
			{
				ext = ".fsm";
			};
			class VRCourseTargetDesignation1
			{
				ext = ".fsm";
			};
			class VRCourseTargetDesignation2
			{
				ext = ".fsm";
			};
			class VRCourseTargetDesignation3
			{
				ext = ".fsm";
			};
			class VRDrawBorder {};
			class VRDrawGrid {};
			class VREffectKilled {};
			class VRFadeIn {};
			class VRFadeOut {};
			class VRHitpart {};
			class VRSpawnEffect {};
			class VRSpawnSelector {};
			class VRTimer {};
		};
	};
	class A3_CombatPatrol
	{
		project = "arma3";
		tag = "BIS";
		class CombatPatrol
		{
			file = "A3\Functions_F_Patrol\CombatPatrol";
			class CPDummy {};
			class CPFindEmptyPosition {};
			class CPInit {};
			class CPLog {};
			class CPPickSafeDir {};
			class CPSafeAzimuths {};
			class CPSendReinforcements {};
			class CPSpawnGarrisonGrp {};
			class CPWaitUntil {};
		};
		class Misc
		{
			file = "a3\Functions_F_Patrol\Misc";
			class laptopInit {};
			class laptopPlayVideo {};
		};
	};
	class A3_Destroyer
	{
		tag = "BIS";
		class BoatRecovery
		{
			file = "A3\Functions_F_Destroyer\Functions\BoatRecovery";
			class BoatRack01ActionAdd {};
			class BoatRack01ActionRemove {};
			class BoatRack01AdjustZOffset {};
			class BoatRack01CanExetuteAction {};
			class BoatRack01CanProgressAction {};
			class BoatRack01Init {};
			class BoatRack01InitAdjustZOffsets {};
		};
		class Destroyer
		{
			file = "A3\Functions_F_Destroyer\Functions\Destroyer";
			class Destroyer01AnimateHangarDoors {};
			class Destroyer01EdenDelete {};
			class Destroyer01EdenInit {};
			class Destroyer01GetShipPart {};
			class Destroyer01HandleDamage {};
			class Destroyer01Init {};
			class Destroyer01InitHullNumbers {};
			class Destroyer01OperateHangarDoors {};
			class Destroyer01PlayHangarDoorSound {};
			class Destroyer01PosUpdate {};
		};
	};
	class A3_Enoch
	{
		tag = "BIN";
		class CargoPlatform
		{
			file = "a3\Functions_F_Enoch\CargoPlatform";
			class cargoPlatform_01_adjust {};
			class cargoPlatform_01_destruction {};
			class cargoPlatform_01_update {};
		};
		class CBRN
		{
			file = "a3\Functions_F_Enoch\CBRN";
			class CBRNHoseInit {};
		};
		class DeconShower
		{
			file = "a3\Functions_F_Enoch\DeconShower";
			class deconShowerAnim {};
			class deconShowerAnimLarge {};
			class deconShowerAnimStop {};
			class deconShowerCollision {};
			class deconShowerDelete {};
			class deconShowerMove {};
		};
		class Probing
		{
			file = "a3\Functions_F_Enoch\Probing";
			class ProbingArm_fired {};
			class ProbingBeam_fired {};
			class ProbingBeam_sendData {};
		};
	};
	class A3_EPA
	{
		tag = "BIS";
		class Geometry
		{
			file = "A3\functions_f_EPA\Geometry";
			class isInsideArea {};
			class relPosObject {};
		};
		class GUI
		{
			file = "A3\functions_f_EPA\GUI";
			class isInZoom {};
			class quotations {};
			class showMarkers {};
		};
		class Misc
		{
			file = "A3\functions_f_EPA\Misc";
			class addStackedEventHandler {};
			class blackIn {};
			class blackOut {};
			class buildingPositions {};
			class disableSaving {};
			class enableSaving {};
			class executeStackedEventHandler {};
			class initExpo {};
			class isBuildingEnterable {};
			class removeStackedEventHandler {};
		};
		class Spawning
		{
			file = "A3\functions_f_EPA\Spawning";
			class prepareAO {};
		};
	};
	class A3_EPC
	{
		tag = "BIS";
		class Misc
		{
			file = "\A3\Functions_F_EPC\Misc";
			class earthquake {};
		};
	};
	class A3_Expansion
	{
		tag = "BIS";
		class Conversations
		{
			file = "a3\functions_f_exp\conversations";
			class showSubtitle
			{
				file = "\a3\Functions_F_Contact\TempFunctions\fn_showSubtitle.sqf";
			};
		};
	};
	class A3_Expansion_A
	{
		tag = "BIS";
		class Math
		{
			file = "A3\functions_f_exp_a\Math";
			class getAngleDelta {};
			class lerp {};
		};
		class Misc
		{
			file = "A3\functions_f_exp_a\Misc";
			class getIntersectionsUnderCursor {};
			class getName {};
			class getNetMode {};
			class getObjectBBD {};
		};
		class Spectator
		{
			file = "A3\functions_f_exp_a\EGSpectator";
			class EGObjectiveVisualizer {};
			class EGObjectiveVisualizerDraw {};
			class EGSpectator {};
			class EGSpectatorCamera {};
			class EGSpectatorCameraPrepareTarget {};
			class EGSpectatorCameraResetTarget {};
			class EGSpectatorCameraSetTarget {};
			class EGSpectatorCameraTick {};
			class EGSpectatorDraw2D {};
			class EGSpectatorDraw3D {};
			class EGSpectatorGetUnitsToDraw {};
		};
	};
	class A3_Functions_F_Curator
	{
		project = "arma3";
		tag = "BIS";
		class Curator
		{
			file = "A3\functions_f_curator\Curator";
			class addCuratorAreaFromTrigger {};
			class addCuratorIcon {};
			class curatorAttachObject {};
			class curatorAttributes {};
			class curatorAutomatic {};
			class curatorAutomaticPositions {};
			class curatorHint {};
			class curatorObjectEdited {};
			class curatorObjectPlaced {};
			class curatorObjectRegistered {};
			class curatorObjectRegisteredTable {};
			class curatorPinged {};
			class curatorRespawn {};
			class curatorSayMessage {};
			class curatorVisionModes {};
			class curatorWaypointPlaced {};
			class drawCuratorDeaths {};
			class drawCuratorLocations {};
			class drawCuratorRespawnMarkers {};
			class exportCuratorCostTable {};
			class forceCuratorInterface {};
			class initCuratorAttribute {};
			class isCurator {};
			class isCuratorEditable {};
			class isForcedCuratorInterface {};
			class listCuratorPlayers {};
			class manageCuratorAddons {};
			class mirrorCuratorSettings {};
			class registerCuratorObject {};
			class removeCuratorIcon {};
			class removeDestroyedCuratorEditableObjects {};
			class setCuratorAttributes {};
			class setCuratorCamera {};
			class setCuratorVisionModes {};
			class shakeCuratorCamera {};
			class showCuratorAttributes {};
			class showCuratorFeedbackMessage {};
			class toggleCuratorVisionMode {};
		};
		class CuratorChallenges
		{
			file = "A3\functions_f_curator\CuratorChallenges";
			class addCuratorChallenge {};
			class completedCuratorChallengesCount {};
			class curatorChallengeDestroyVehicle {};
			class curatorChallengeFindIntel {};
			class curatorChallengeFireWeapon {};
			class curatorChallengeGetInVehicle {};
			class curatorChallengeIlluminate {};
			class curatorChallengeSpawnLightning {};
			class finishCuratorChallenge {};
			class formatCuratorChallengeObjects {};
			class manageCuratorChallenges {};
		};
		class Environment
		{
			file = "A3\functions_f_curator\Environment";
			class setDate {};
			class setFog {};
			class setOvercast {};
		};
		class Map
		{
			file = "A3\functions_f_curator\Map";
			class drawAO {};
			class drawMinefields {};
			class drawRespawnPositions {};
			class locationDescription {};
		};
		class Misc
		{
			file = "A3\functions_f_curator\Misc";
			class activateAddons {};
			class endMissionServer {};
			class exportCfgGroups {};
			class isLoading {};
			class isUnitVirtual {};
			class neutralizeUnit {};
			class playEndMusic {};
			class selectDiarySubject {};
		};
		class MP
		{
			file = "A3\functions_f_curator\MP";
			class estimatedTimeLeft {};
			class playMusic {};
			class playSound {};
			class sayMessage {};
			class setObjectTexture {};
		};
		class Objects
		{
			file = "A3\functions_f_curator\Objects";
			class initIntelObject {};
			class initVirtualUnit {};
		};
		class Respawn
		{
			file = "A3\functions_f_curator\Respawn";
			class initRespawnBackpack {};
			class respawnBackpack {};
			class respawnMenuSpectator {};
			class respawnRounds {};
		};
		class Variables
		{
			file = "A3\functions_f_curator\Variables";
			class getServerVariable
			{
				preInit = 1;
			};
			class setServerVariable {};
		};
	};
	class A3_Heli
	{
		tag = "BIS";
		class FFV
		{
			file = "A3\functions_f_heli\FFV";
			class ffvUpdate {};
		};
		class Misc
		{
			file = "A3\functions_f_heli\Misc";
			class didJip {};
			class synchronizedObjects {};
		};
		class Params
		{
			file = "A3\functions_f_heli\Params";
			class paramViewDistance {};
		};
		class VR
		{
			file = "A3\functions_f_heli\VR";
			class VRCourseHeliAdvanced1
			{
				ext = ".fsm";
			};
			class VRCourseHeliAdvanced2
			{
				ext = ".fsm";
			};
			class VRCourseHeliAdvanced3
			{
				ext = ".fsm";
			};
			class VRCourseHeliAdvanced4
			{
				ext = ".fsm";
			};
			class VRCourseHeliAdvanced5
			{
				ext = ".fsm";
			};
			class VRCourseHeliAdvanced6
			{
				ext = ".fsm";
			};
			class VRCourseHeliBasics1
			{
				ext = ".fsm";
			};
			class VRCourseHeliBasics2
			{
				ext = ".fsm";
			};
			class VRCourseHeliBasics3
			{
				ext = ".fsm";
			};
			class VRCourseHeliSlingload1
			{
				ext = ".fsm";
			};
			class VRCourseHeliWeapons1
			{
				ext = ".fsm";
			};
			class VRCourseHeliWeapons2
			{
				ext = ".fsm";
			};
			class VRCourseHeliWeapons3
			{
				ext = ".fsm";
			};
			class VRCourseHeliWeapons4
			{
				ext = ".fsm";
			};
		};
	};
	class A3_Jets
	{
		tag = "BIS";
		class AircraftFunctionality
		{
			file = "A3\Functions_F_Jets\Functions\Aircraft";
			class AircraftFoldingWings {};
			class AircraftTailhookAi {};
		};
		class AircrfatCarrier
		{
			file = "A3\Functions_F_Jets\Functions\AircraftCarrier";
			class Carrier01AnimateDeflectors {};
			class Carrier01CatapultActionAdd {};
			class Carrier01CatapultActionRemove {};
			class Carrier01CatapultID {};
			class Carrier01CatapultLockTo {};
			class Carrier01CrewInAnim {};
			class Carrier01CrewPlayAnim {};
			class Carrier01EdenDelete {};
			class Carrier01EdenInit {};
			class Carrier01Init {};
			class Carrier01PosUpdate {};
		};
		class CarrierOps
		{
			file = "A3\Functions_F_Jets\Functions\Aircraft";
			class AircraftCatapultLaunch {};
			class AircraftTailhook {};
		};
		class Ejection
		{
			file = "A3\Functions_F_Jets\Functions\Ejection";
			class EjectionSeatRelease {};
			class PlaneAiEject {};
			class PlaneEjection {};
			class PlaneEjectionFX {};
		};
	};
	class A3_Mark
	{
		tag = "BIS";
		class DynamicGroups
		{
			file = "A3\functions_f_mp_mark\DynamicGroups";
			class dynamicGroups {};
		};
		class GUI
		{
			file = "a3\functions_f_mp_mark\gui";
			class keyHold {};
		};
		class Revive
		{
			file = "a3\functions_f_mp_mark\revive";
			class disableRevive {};
			class reenableRevive {};
			class reviveAllowed {};
			class reviveBleedOut {};
			class reviveDamageReset {};
			class reviveDebug {};
			class reviveEhDammaged {};
			class reviveEhHandleDamage {};
			class reviveEhHandleHeal {};
			class reviveEhKilled {};
			class reviveEhRespawn {};
			class reviveEnabled {};
			class reviveGet3dIcons {};
			class reviveGetActionIcon {};
			class reviveIconControl {};
			class reviveInit
			{
				postInit = 1;
			};
			class reviveIsValid {};
			class reviveIsValidSecure {};
			class reviveOnBeingRevived {};
			class reviveOnForcingRespawn {};
			class reviveOnState {};
			class reviveOnStateJIP {};
			class reviveSecureUnit {};
		};
		class Vehicles
		{
			file = "A3\functions_f_mark\Vehicles";
			class baseVehicle {};
			class exportVehicle {};
			class garage {};
			class garage3DEN {};
			class getVehicleCustomization {};
			class initVehicle {};
			class initVehicleCrew {};
			class initVehicleKart {};
			class loadVehicle {};
			class saveVehicle {};
			class setVehicleMass
			{
				ext = ".fsm";
			};
		};
		class VR
		{
			file = "A3\functions_f_mark\VR";
			class VRCourseWeaponHandlingA1
			{
				ext = ".fsm";
			};
			class VRCourseWeaponHandlingA2
			{
				ext = ".fsm";
			};
			class VRCourseWeaponHandlingA3
			{
				ext = ".fsm";
			};
			class VRCourseWeaponHandlingB1
			{
				ext = ".fsm";
			};
			class VRCourseWeaponHandlingB2
			{
				ext = ".fsm";
			};
			class VRCourseWeaponHandlingB3
			{
				ext = ".fsm";
			};
			class VRCourseWeaponHandlingC1
			{
				ext = ".fsm";
			};
			class VRCourseWeaponHandlingC2
			{
				ext = ".fsm";
			};
		};
	};
	class A3_Missions_F_Curator
	{
		project = "arma3";
		tag = "BIS";
		class MissionTypes
		{
			class moduleMPTypeDefense
			{
				file = "A3\missions_f_curator\MPTypes\Defense\initServer.sqf";
			};
			class moduleMPTypeGameMaster
			{
				file = "A3\missions_f_curator\MPTypes\GameMaster\initServer.sqf";
			};
			class moduleMPTypeSectorControl
			{
				file = "A3\missions_f_curator\MPTypes\SectorControl\initServer.sqf";
			};
			class moduleMPTypeSeize
			{
				file = "A3\missions_f_curator\MPTypes\Seize\initServer.sqf";
			};
		};
	};
	class A3_Missions_F_Exp
	{
		project = "arma3";
		tag = "BIS";
		class Campaign
		{
			file = "a3\missions_f_exp\campaign\functions";
			class EXP_camp_addTickets {};
			class EXP_camp_balanceGroup {};
			class EXP_camp_checkpoint {};
			class EXP_camp_dynamicAISkill {};
			class EXP_camp_getCinematicMode {};
			class EXP_camp_getPlayersGroup {};
			class EXP_camp_guidedProjectile {};
			class EXP_camp_hasMissionStarted {};
			class EXP_camp_IFF {};
			class EXP_camp_initCharacter {};
			class EXP_camp_initClasses {};
			class EXP_camp_initDifficulty {};
			class EXP_camp_playerChecklist {};
			class EXP_camp_playSubtitles {};
			class EXP_camp_playTimelineVideo {};
			class EXP_camp_replaceVehicles {};
			class EXP_camp_setCinematicMode {};
			class EXP_camp_setSkill {};
			class EXP_camp_SITREP {};
		};
		class CampaignLobby
		{
			file = "a3\missions_f_exp\Lobby\functions";
			class EXP_camp_lobby {};
			class EXP_camp_lobby_clearVars {};
			class EXP_camp_lobby_ctrlSetColor {};
			class EXP_camp_lobby_findHost {};
			class EXP_camp_lobby_getHostSettings {};
			class EXP_camp_lobby_getPlayerSquadName {};
			class EXP_camp_lobby_go {};
			class EXP_camp_lobby_intro {};
			class EXP_camp_lobby_launch {};
			class EXP_camp_lobby_loop {};
			class EXP_camp_lobby_missionCountdown {};
			class EXP_camp_lobby_onLoad {};
			class EXP_camp_lobby_onUnLoad {};
			class EXP_camp_lobby_playMissionVideo {};
			class EXP_camp_lobby_serverPing {};
			class EXP_camp_lobby_serverUpdate {};
			class EXP_camp_lobby_structuredText {};
			class EXP_camp_lobby_UIMilitaryManager {};
			class EXP_camp_lobby_UIMissionCountdown {};
			class EXP_camp_lobby_UIMissionManager {};
			class EXP_camp_lobby_UIOverlayManager {};
			class EXP_camp_lobby_UIProgressManager {};
			class EXP_camp_lobby_UISettingsManager {};
			class EXP_camp_lobby_updateHostSettings {};
			class EXP_camp_lobby_updateIntel {};
			class EXP_camp_lobby_updateMilitaryEfficiency {};
			class EXP_camp_lobby_updatePlayers {};
			class EXP_camp_lobby_updatePlayerStatus {};
			class HEXtoRGB {};
		};
		class CampaignManager
		{
			file = "a3\missions_f_exp\campaign\functions\manager";
			class EXP_camp_manager {};
			class EXP_camp_manager_getState {};
			class EXP_camp_manager_onPlayerRegistered {};
			class EXP_camp_manager_setState {};
			class EXP_camp_manager_triggerEvent {};
		};
	};
	class A3_Missions_F_Exp_A
	{
		project = "arma3";
		tag = "BIS";
	};
	class A3_Missions_F_Heli
	{
		project = "arma3";
		tag = "BIS";
		class MissionTypes
		{
			class ModuleMPTypeGroundSupport
			{
				file = "A3\Missions_F_Heli\MPTypes\GroundSupport\init.sqf";
			};
			class ModuleMPTypeGroundSupportBase
			{
				file = "A3\Missions_F_Heli\MPTypes\GroundSupportBase\init.sqf";
			};
		};
	};
	class A3_Missions_F_Mark
	{
		project = "arma3";
		tag = "BIS";
	};
	class A3_Modules
	{
		project = "arma3";
		tag = "BIS";
		class Effects
		{
			file = "A3\modules_f\Effects\functions";
			class moduleCreateProjectile {};
			class moduleEffectsBubbles {};
			class moduleEffectsEmitterCreator {};
			class moduleEffectsFire {};
			class moduleEffectsPlankton {};
			class moduleEffectsShells {};
			class moduleEffectsSmoke {};
			class moduleGrenade {};
		};
		class Environment
		{
			class moduleEditTerrainObject
			{
				file = "A3\Modules_F\Environment\EditTerrainObject\init.sqf";
			};
			class moduleHideTerrainObjects
			{
				file = "A3\Modules_F\Environment\HideTerrainObjects\init.sqf";
			};
		};
		class Events
		{
			file = "A3\modules_f\Events\functions";
			class moduleChat {};
			class moduleDate {};
			class moduleGenericRadio {};
			class moduleSaveGame {};
			class moduleVolume {};
		};
		class GroupModifiers
		{
			file = "A3\modules_f\GroupModifiers\functions";
			class moduleCombatGetIn
			{
				ext = ".fsm";
			};
			class moduleGroupID {};
		};
		class Intel
		{
			file = "A3\modules_f\Intel\functions";
			class moduleCreateDiaryRecord {};
			class moduleHQ {};
			class moduleTaskCreate {};
			class moduleTaskSetDescription {};
			class moduleTaskSetDestination {};
			class moduleTaskSetState {};
		};
		class LiveFeed
		{
			file = "a3\modules_f\livefeed\functions";
			class liveFeedModuleEffects
			{
				description = "";
			};
			class liveFeedModuleInit
			{
				description = "";
			};
			class liveFeedModuleSetSource
			{
				description = "";
			};
			class liveFeedModuleSetTarget
			{
				description = "";
			};
		};
		class Misc
		{
			file = "A3\modules_f\Misc\functions";
			class moduleFriendlyFire {};
			class moduleTrident
			{
				ext = ".fsm";
			};
			class moduleUnlockArea {};
			class moduleUnlockObject {};
			class moduleZoneRestriction
			{
				ext = ".fsm";
			};
			class tridentClient {};
			class tridentExecute {};
			class tridentGetRelationship {};
			class tridentHandleDamage {};
			class tridentSetRelationship {};
		};
		class Multiplayer
		{
			file = "A3\modules_f\Multiplayer\functions";
			class moduleRespawnVehicle {};
			class moduleSector {};
		};
		class ObjectModifiers
		{
			file = "A3\modules_f\ObjectModifiers\functions";
			class moduleAI {};
			class moduleAmmo {};
			class moduleDamage {};
			class moduleDoorOpen {};
			class moduleFuel {};
			class moduleHealth {};
			class moduleMode {};
			class modulePositioning {};
			class moduleRank {};
			class moduleRating {};
			class moduleShowHide {};
			class moduleSimulationManager
			{
				description = "Disable simulation of distant units and hide their models to save FPS";
				ext = ".fsm";
			};
			class moduleSimulationManager_grab
			{
				description = "Return all objects that should be handled by simulation manager module.";
			};
			class moduleSkill {};
		};
		class Sites
		{
			file = "A3\modules_f\sites\functions";
			class animalSiteSpawn
			{
				description = "Spawn of animals in animal sites.";
			};
			class moduleSiteInit {};
		};
		class Skirmish
		{
			file = "a3\modules_f\skirmish\functions";
			class skirmishTrigger
			{
				description = "Control the triggering and terminating of Skirmish.";
				ext = ".fsm";
			};
		};
		class StrategicMap
		{
			file = "A3\modules_f\StrategicMap\functions";
			class moduleStrategicMapImage {};
			class moduleStrategicMapInit {};
			class moduleStrategicMapMission {};
			class moduleStrategicMapOpen {};
			class moduleStrategicMapORBAT {};
		};
		class Supports
		{
			file = "A3\modules_f\supports\functions";
			class moduleSupportsInitProvider {};
			class moduleSupportsInitProviderVirtual {};
			class moduleSupportsInitRequester {};
		};
	};
	class A3_Modules_F_Bootcamp
	{
		project = "arma3";
		tag = "BIS";
		class Misc
		{
			file = "a3\modules_f_bootcamp\misc\functions";
			class moduleArsenal {};
			class moduleBootcampStage {};
			class moduleHint {};
			class modulePunishment {};
		};
	};
	class A3_Modules_F_Curator
	{
		project = "arma3";
		tag = "BIS";
		class Animals
		{
			file = "a3\modules_f_curator\animals\functions";
			class moduleAnimals {};
		};
		class CAS
		{
			file = "a3\modules_f_curator\CAS\functions";
			class moduleCAS {};
		};
		class Curator
		{
			file = "a3\modules_f_curator\curator\functions";
			class moduleCurator {};
			class moduleCuratorAddAddons {};
			class moduleCuratorAddCameraArea {};
			class moduleCuratorAddEditableObjects {};
			class moduleCuratorAddEditingArea {};
			class moduleCuratorAddEditingAreaPlayers {};
			class moduleCuratorAddIcon {};
			class moduleCuratorAddPoints {};
			class moduleCuratorSetAttributes {};
			class moduleCuratorSetCamera {};
			class moduleCuratorSetCoefs {};
			class moduleCuratorSetCostsDefault {};
			class moduleCuratorSetCostsSide {};
			class moduleCuratorSetCostsVehicleClass {};
			class moduleCuratorSetEditingAreaType {};
			class moduleCuratorSetObjectCost {};
		};
		class Effects
		{
			file = "a3\modules_f_curator\effects\functions";
			class modulePostprocess {};
			class moduleProjectile {};
			class moduleSFX {};
			class moduleSound {};
			class moduleTracers {};
		};
		class Environment
		{
			file = "a3\modules_f_curator\environment\functions";
			class moduleSkiptime {};
			class moduleTimeMultiplier {};
			class moduleWeather {};
		};
		class Intel
		{
			file = "a3\modules_f_curator\intel\functions";
			class moduleDiary {};
			class moduleEndMission {};
			class moduleMissionName {};
		};
		class Lightning
		{
			file = "a3\modules_f_curator\lightning\functions";
			class moduleLightning {};
		};
		class Mines
		{
			file = "a3\modules_f_curator\mines\functions";
			class moduleMine {};
		};
		class Misc
		{
			file = "a3\modules_f_curator\misc\functions";
			class moduleCoverMap {};
			class moduleRadioChannelCreate {};
			class moduleRemoteControl {};
		};
		class Multiplayer
		{
			file = "a3\modules_f_curator\multiplayer\functions";
			class moduleBleedTickets {};
			class moduleCountdown {};
			class moduleRespawnTickets {};
			class moduleZoneProtection {};
		};
		class Objectives
		{
			file = "a3\modules_f_curator\objectives\functions";
			class moduleObjective
			{
				ext = ".fsm";
			};
			class moduleObjectiveFind
			{
				ext = ".fsm";
			};
			class moduleObjectiveGetIn
			{
				ext = ".fsm";
			};
			class moduleObjectiveMove
			{
				ext = ".fsm";
			};
			class moduleObjectiveSector
			{
				ext = ".fsm";
			};
			class moduleObjectiveTarget
			{
				ext = ".fsm";
			};
		};
		class Respawn
		{
			file = "a3\modules_f_curator\respawn\functions";
			class moduleRespawnInventory {};
			class moduleRespawnPosition {};
		};
	};
	class A3_Modules_F_EPB
	{
		project = "arma3";
		tag = "BIS";
		class Misc
		{
			file = "A3\Modules_F_EPB\Misc\functions";
			class modulePoster {};
		};
	};
	class A3_Modules_F_Heli
	{
		tag = "bis";
		class Misc
		{
			file = "a3\modules_f_heli\misc\functions";
			class moduleSlingload {};
			class moduleSpawnAI {};
			class moduleSpawnAIOptions {};
			class moduleSpawnAIPoint {};
			class moduleSpawnAISectorTactic {};
		};
	};
	class A3_Modules_F_Kart
	{
		project = "arma3";
		tag = "BIS";
		class Objectives
		{
			file = "a3\modules_f_kart\objectives\functions";
			class moduleObjectiveRaceCP
			{
				ext = ".fsm";
			};
			class moduleObjectiveRaceFinish
			{
				ext = ".fsm";
			};
			class moduleObjectiveRaceStart
			{
				ext = ".fsm";
			};
		};
	};
	class A3_Modules_F_Mark
	{
		tag = "bis";
		class Objectives
		{
			file = "a3\modules_f_mp_mark\objectives\functions";
			class moduleHvtInit
			{
				file = "a3\modules_f_mp_mark\objectives\scripts\init.sqf";
			};
			class moduleHvtObjective {};
			class moduleHvtObjectives {};
			class moduleHvtObjectivesInstance {};
		};
	};
	class A3_Modules_F_Tacops
	{
		project = "arma3";
		tag = "bis";
		class CivilianPresence
		{
			class moduleCivilianPresence
			{
				file = "A3\Modules_F_Tacops\Ambient\CivilianPresence\init.sqf";
			};
			class moduleCivilianPresenceSafeSpot
			{
				file = "A3\Modules_F_Tacops\Ambient\CivilianPresenceSafeSpot\init.sqf";
			};
			class moduleCivilianPresenceUnit
			{
				file = "A3\Modules_F_Tacops\Ambient\CivilianPresenceUnit\init.sqf";
			};
		};
	};
	class A3_Modules_F_Tank
	{
		project = "arma3";
		tag = "bis";
		class TanksMp
		{
			class moduleVanguardFob
			{
				file = "A3\Modules_F_Tank\Vanguard\VanguardFob\init.sqf";
			};
			class moduleVanguardObjective
			{
				file = "A3\Modules_F_Tank\Vanguard\VanguardObjective\init.sqf";
			};
			class moduleVanguardScorePersistence
			{
				file = "A3\Modules_F_Tank\Vanguard\VanguardScorePersistence\init.sqf";
			};
		};
	};
	class A3_Orange
	{
		tag = "BIS";
		class Misc
		{
			file = "A3\functions_f_orange\Misc";
			class carAlarm {};
			class createRuin {};
			class firedBombDemine {};
			class getCloudletParams {};
			class initInspectable {};
			class initLeaflet {};
			class setObjectShotParents {};
			class showAANArticle {};
			class smoothStep {};
		};
		class Sound
		{
			file = "A3\functions_f_orange\sound";
			class setCustomSoundController {};
		};
		class Waypoints
		{
			file = "A3\functions_f_orange\Waypoints";
			class wpDemine {};
		};
	};
	class A3_Props_F_Exp_A_Military_Equipment
	{
		tag = "BIS";
		class Scripts
		{
			file = "A3\Props_F_Exp_A\Military\Equipment\Scripts";
			class DataTerminalAnimate {};
			class DataTerminalColor {};
		};
	};
	class A3_Structures
	{
		tag = "BIS";
		class Scripts
		{
			file = "A3\Structures_F\scripts";
			class Door {};
			class DoorClose {};
			class DoorNoHandleClose {};
			class DoorNoHandleOpen {};
			class DoorOpen {};
			class HatchClose {};
			class HatchOpen {};
			class LockedDoorNoHandleOpen {};
			class LockedDoorOpen {};
			class ObjectInventoryAnimatedClose {};
			class ObjectInventoryAnimatedOpen {};
			class SingleWingSlideDoorClose {};
			class SingleWingSlideDoorOpen {};
			class TwoWingDoorNoHandleClose {};
			class TwoWingDoorNoHandleOpen {};
			class TwoWingDoorOneHandleClose {};
			class TwoWingDoorOneHandleOpen {};
			class TwoWingDoorTwoHandleClose {};
			class TwoWingDoorTwoHandleOpen {};
			class TwoWingSlideDoorClose {};
			class TwoWingSlideDoorOpen {};
		};
	};
	class A3_TacOps
	{
		tag = "BIS";
		class Map
		{
			file = "\A3\Functions_F_TacOps\Map";
			class blinkMarker {};
			class cancelMarker {};
			class changeColorMarker {};
			class colorMarker {};
			class getBorderMarkers {};
			class getMarkers {};
			class getMarkerState {};
			class hideMarker {};
			class hideMarkerArray {};
			class moveMarker {};
			class resizeMarker {};
			class rotateMarker {};
			class shakeMap {};
			class shakeMapEH {};
			class showMarker {};
			class showMarkerArray {};
			class simpleMoveMarker {};
			class zoomLock {};
			class zoomLockEH {};
			class zoomOnArea {};
			class zoomUnlock {};
		};
		class Systems
		{
			file = "\A3\Functions_F_Tacops\Systems";
			class animatedBriefing {};
			class animatedOpening {};
			class animatedScreen {};
			class animatePicture {};
			class createTooltip {};
			class eventTimeline {};
			class holdKey {};
			class lookAtArray {};
			class lookAtArrayEH {};
			class missionSelector {};
			class scaleAndTranslate {};
		};
	};
	class A3_Tank
	{
		tag = "BIS";
		class Map
		{
			file = "\A3\Functions_F_Tank\Map";
			class randomPosIntersection {};
		};
	};
	class A3_Warlords
	{
		project = "arma3";
		tag = "BIS";
		class Misc
		{
			file = "A3\Functions_F_Warlords\Misc";
			class WLSmoothText {};
		};
		class Warlords
		{
			file = "A3\Functions_F_Warlords\Warlords";
			class WLAICore
			{
				ext = ".fsm";
			};
			class WLAIPathSegmentation {};
			class WLAIPurchases
			{
				ext = ".fsm";
			};
			class WLAircraftArrival {};
			class WLAirdrop {};
			class WLAISectorScan {};
			class WLArsenalFilter {};
			class WLCalculateIncome {};
			class WLCalculateSectorConnections {};
			class WLClientInit {};
			class WLDebug {};
			class WLDefenceSetup {};
			class WLDropPurchase {};
			class WLFundsInfo {};
			class WLGarrisonRetreat
			{
				ext = ".fsm";
			};
			class WLInit {};
			class WLInSectorArea {};
			class WLLoadoutApply {};
			class WLLoadoutGrab {};
			class WLMostVotedSector {};
			class WLNavalArrival {};
			class WLOpenArsenal {};
			class WLOSD {};
			class WLOutlineIcons {};
			class WLParseAssetList {};
			class WLPlayersTracking {};
			class WLPlayersTrackingServer {};
			class WLPurchaseMenu {};
			class WLRandomPosRect {};
			class WLRecalculateServices {};
			class WLRemovalHandle {};
			class WLReputation {};
			class WLRequestFastTravel {};
			class WLRequestFundsTransfer {};
			class WLRequestPurchase {};
			class WLRequestSectorScan {};
			class WLRequestVotingReset {};
			class WLSectorFundsPayoff
			{
				ext = ".fsm";
			};
			class WLSectorHandle
			{
				ext = ".fsm";
			};
			class WLSectorHandleServer
			{
				ext = ".fsm";
			};
			class WLSectorIconUpdate {};
			class WLSectorInit {};
			class WLSectorListing {};
			class WLSectorPopulate {};
			class WLSectorScanHandle
			{
				ext = ".fsm";
			};
			class WLSectorsCommonInit {};
			class WLSectorSelectionEnd {};
			class WLSectorSelectionHandle
			{
				ext = ".fsm";
			};
			class WLSectorSelectionHandleServer
			{
				ext = ".fsm";
			};
			class WLSectorSelectionStart {};
			class WLSectorsSetup {};
			class WLSectorTaskHandle
			{
				ext = ".fsm";
			};
			class WLSectorUpdate {};
			class WLSeizingBarHandle {};
			class WLSendResponseTeam {};
			class WLShowInfo {};
			class WLSideToFaction {};
			class WLSoundMsg {};
			class WLSubroutine_purchaseMenuAssetAvailability {};
			class WLSubroutine_purchaseMenuGetUIScale {};
			class WLSubroutine_purchaseMenuHandleDLC {};
			class WLSubroutine_purchaseMenuRefresh {};
			class WLSubroutine_purchaseMenuSetAssetDetails {};
			class WLSubroutine_purchaseMenuSetItemsList {};
			class WLSyncedTime {};
			class WLSyncTime {};
			class WLUpdateAO {};
			class WLVarsInit {};
			class WLVehicleHandle {};
			class WLVotingBarHandle {};
		};
	};
	class Contact
	{
		tag = "BIN";
		class AI_Human
		{
			file = "a3\Functions_F_Contact\AI_Human";
			class attachChemlight {};
			class deleteLoopedRadioSignal {};
			class getAISquadID {};
			class getAISquadPosition {};
			class getAllAISquads {};
			class getFollowingSignals {};
			class getPatrolRoutes {};
			class getRadioConversation {};
			class initAI
			{
				postInit = 1;
			};
			class initAIBase {};
			class initAISquad {};
			class inRadioConversation {};
			class inRadioConversationWith {};
			class isAIBase {};
			class isRadioHandshake {};
			class isRadioSilence {};
			class joinAISquad {};
			class moveAI {};
			class moveAIReinforcements {};
			class playPatrolAnim {};
			class playPatrolAnimDone {};
			class reactRadio
			{
				ext = ".fsm";
			};
			class reactRadio_Base
			{
				ext = ".fsm";
			};
			class reactRadio_Player
			{
				ext = ".fsm";
			};
			class reactRadio_Squad
			{
				ext = ".fsm";
			};
			class sendPing {};
			class sendRadioSignal {};
			class setAISquadID {};
			class setRadioConversation {};
			class setRadioHandshake {};
			class setRadioSilence {};
			class wpMoveFast {};
			class wpPatrol {};
		};
		class AI_Misc
		{
			file = "a3\Functions_F_Contact\AI_Misc";
			class hackAIDrone {};
			class initAIDrone {};
			class initTurret {};
			class initUAV {};
			class initUGV {};
		};
		class Behavior
		{
			file = "a3\Functions_F_Contact\Behavior";
			class behaviorInit {};
			class breatheInit {};
			class findSafePositions {};
			class findTargetWeight {};
			class getBehaviorCoef {};
			class setBehavior {};
			class setBehaviorCoef {};
			class setBreathe {};
			class setTargetWeight {};
		};
		class Campaign
		{
			file = "a3\Missions_F_Contact\Functions";
			class addSiteEntities {};
			class debugQuests {};
			class empVehicle {};
			class exit {};
			class exitAntennas {};
			class exitDiary {};
			class exitGroup {};
			class exitPersistentObjects {};
			class exitQuests {};
			class exitSites {};
			class exitTasks {};
			class getSiteLayerEntities {};
			class initAcctime {};
			class initActors {};
			class initAntennas {};
			class initConstants {};
			class initCutLayers {};
			class initDiary {};
			class initGroup {};
			class initHub {};
			class initInventory {};
			class initLocations {};
			class initMiniUGV {};
			class initPersistentObjects {};
			class initProbeMap {};
			class initQuests {};
			class initRevive {};
			class initSideColors {};
			class initSites {};
			class initTasks {};
			class inList {};
			class isNull {};
			class list {};
			class persistentVariables {};
			class playMission {};
			class postInit
			{
				postInit = 1;
			};
			class preInit
			{
				preInit = 1;
			};
			class setSite {};
			class skip {};
			class taskActive {};
			class taskAdded {};
			class travelToPoint {};
		};
		class Collisions
		{
			file = "a3\Functions_F_Contact\Collisions";
			class addEntitiesToArea {};
			class addObjectsToArea {};
			class crearAllData {};
			class diag_drawAllAreaObjectsBounds {};
			class diag_getAllAreaEntities {};
			class diag_getAllAreaObjects {};
			class getAllAreas {};
			class getEntityBoundingBarrel {};
			class getObjectBoundingBarrel {};
			class getTerrainObjects {};
			class markFreeAreaPositions {};
		};
		class Debug
		{
			file = "a3\Functions_F_Contact\Debug";
			class debugDraw {};
			class debugDrawMapInit {};
			class debugText {};
		};
		class Diary
		{
			file = "a3\Functions_F_Contact\Diary";
			class deleteDiaryRecord {};
			class drawIconFixed {};
			class drawMap {};
			class drawProbeMap {};
			class drawSpectrum {};
			class drawTooltip {};
			class handDrawBezier {};
			class handDrawEllipse {};
			class initInspectableDiaryRecord {};
			class selectDiaryCategory {};
			class selectDiaryRecord {};
			class selectDiaryTask {};
			class setDiaryRecord {};
			class showMapOptions {};
			class switchMap {};
		};
		class Drone
		{
			file = "a3\Functions_F_Contact\Drone";
			class dockModule {};
			class droneDestructionFX {};
			class droneModuleDestruction {};
			class initDroneModule {};
			class matterballDestruction {};
			class matterballEffects {};
			class matterCollectionFX {};
			class moduleChargeSequence {};
			class setDroneModuleParams {};
			class setDroneModuleTarget {};
			class setModuleSpeed {};
		};
		class Effects
		{
			file = "a3\Functions_F_Contact\Effects";
			class circleSmokeMissile {};
		};
		class EM_Core
		{
			file = "a3\Functions_F_Contact\EM_Core";
			class addSignal {};
			class calculateLinkBudget {};
			class calculateSpectrumAnalyzerValues {};
			class deleteAntenna {};
			class deleteSignal {};
			class deleteSpectrumAnalyzer {};
			class drawAntennas {};
			class preInitEM
			{
				preInit = 1;
			};
			class recordSignal {};
			class revealAntenna {};
			class revealFrequency {};
			class setAntenna {};
			class setCurrentSignal {};
			class setPlayerSelectedBand {};
			class setSpectrumAnalyzer {};
			class showAntennaIcons {};
			class showPlayerSpectrumAnalyzer {};
			class showSpectrumAnalyzerGUI {};
			class showSpectrumAnalyzerMuzzle {};
			class showSpectrumAnalyzerPiP {};
			class updateEM
			{
				postInit = 1;
			};
			class updatePlayerAntenna {};
			class updatePlayerInput {};
			class updatePlayerSpectrumAnalyzer {};
			class updatePlayerSpectrumAnalyzerSounds {};
			class updateSignalDurations {};
		};
		class EM_Interface
		{
			file = "a3\Functions_F_Contact\EM_Interface";
			class addFaradayCage {};
			class addRecordedSignal {};
			class allowAntennaReveal {};
			class allowedAntennaReveal {};
			class assignAntenna {};
			class assignedAntenna {};
			class bakeAntenna {};
			class deleteFaradayCage {};
			class diag_addAllSpectrumAnalyzers {};
			class diag_logAntenna {};
			class diag_revealAllAntennas {};
			class diag_showLinkBudgetMap {};
			class frequencyToString {};
			class getAntennaAngle {};
			class getAntennaCanReveal {};
			class getAntennaFrequency {};
			class getAntennaFrequencyClass {};
			class getAntennaGain {};
			class getAntennaName {};
			class getAntennaObject {};
			class getAntennaPower {};
			class getAntennaRevealValue {};
			class getAntennas {};
			class getAntennaScanPolygon {};
			class getAntennaScans {};
			class getAntennaScanSignals {};
			class getAntennaSensitivity {};
			class getAntennaSignal {};
			class getAntennaSignalHistory {};
			class getAntennaType {};
			class getCurrentSignal {};
			class getLinkBudget {};
			class getLinkDir {};
			class getLinkedAntennas {};
			class getLinkStrength {};
			class getObjectAntennas {};
			class getRecordedSignals {};
			class getSignalAge {};
			class getSignalTypeClass {};
			class getSignalTypes {};
			class hasAntennaSignal {};
			class isAntenna {};
			class isAntennaBaked {};
			class isAntennaBroadcasting {};
			class isAntennaJammed {};
			class isAntennaRevealed {};
			class isAntennaSelected {};
			class moduleAntenna {};
			class setAntennaAngle {};
			class setAntennaCanReveal {};
			class setAntennaClass {};
			class setAntennaFrequency {};
			class setAntennaFrequencyFromList {};
			class setAntennaGain {};
			class setAntennaName {};
			class setAntennaObject {};
			class setAntennaPower {};
			class setAntennaRevealValue {};
			class setAntennaScans {};
			class setAntennaSensitivity {};
			class setAntennaType {};
			class showAntennaIcon {};
		};
		class Geometry
		{
			file = "a3\Functions_F_Contact\Geometry";
			class eulerToVector {};
			class matrixMultiply {};
			class matrixTranspose {};
			class vectorToEuler {};
		};
		class GUI
		{
			file = "a3\Functions_F_Contact\GUI";
			class addButtonEvents {};
			class callButtonEvent {};
			class showCurrentTask
			{
				postInit = 1;
			};
			class showHorizontalCompass
			{
				postInit = 1;
			};
			class showSimpleNotification {};
		};
		class IDWMap
		{
			file = "a3\Functions_F_Contact\IDWMap";
			class addIDWMapMeasurementPoint {};
			class allIDWMapMeasurementPoints {};
			class clearIDWMap {};
			class diag_IDWMap {};
			class drawIDWMap {};
			class getIDWMapDrawColorSet {};
			class getIDWMapDrawPatternIndex {};
			class getIDWMapParams {};
			class getIDWMapSaveData {};
			class getIDWMapStaticDataLayers {};
			class loadIDWMap {};
			class preInitIDWMap {};
			class saveIDWMap {};
			class setIDWMapDrawColorSet {};
			class setIDWMapDrawPatternIndex {};
			class setIDWMapParams {};
			class setIDWMapStaticDataLayers {};
			class updateIDWMapDrawData {};
		};
		class Misc
		{
			file = "a3\Functions_F_Contact\Misc";
			class addDangerZone {};
			class addTravelPoint {};
			class animateSmooth {};
			class bezier {};
			class bezierAverage {};
			class bezierBoundingBox {};
			class bezierEditor {};
			class bezierNormalize {};
			class bezierVelocity {};
			class colorHSLtoRGB {};
			class deleteDangerZone {};
			class deleteTravelPoint {};
			class distanceToAreaBorder {};
			class enableSaving {};
			class getFormattedControl {};
			class getGroupSeed {};
			class getRoleIcon {};
			class inDangerZone {};
			class isExtensionError {};
			class isPaused {};
			class isPausedInit
			{
				preInit = 1;
			};
			class markDangerZone {};
			class moduleDangerZone {};
			class moduleFaradayCage {};
			class moduleGravityAnomaly {};
			class modulePointOfInterest {};
			class moduleSimpleObject {};
			class moduleTravel {};
			class savingEnabled {};
			class scan {};
			class scanObject {};
			class setPointOfInterest {};
			class setRagdoll {};
			class tvSaveExpanded {};
		};
		class ModuleCBRN
		{
			file = "a3\modules_f_contact\CBRN\functions";
			class CBRNCharacterAdd {};
			class CBRNContaminantAdd {};
			class CBRNContaminantRemove {};
			class CBRNGearActivate {};
			class CBRNGearDeactivate {};
			class CBRNGearUpdate {};
			class CBRNInContaminant {};
			class moduleCBRN {};
		};
		class Mothership
		{
			file = "a3\Functions_F_Contact\Mothership";
			class initMothershipLights {};
		};
		class Movement
		{
			file = "a3\Functions_F_Contact\Movement";
			class addRotation {};
			class addTranslation {};
			class curatorInit {};
			class editMoveProperties {};
			class findNearestGrid {};
			class findPath {};
			class getGridCollisions {};
			class getGridMap {};
			class getGridPath {};
			class getRotation {};
			class moduleMovementGrid {};
			class moveInit
			{
				postInit = 1;
			};
			class moveModule {};
			class moveObject {};
			class moveTo {};
			class moveToModelSpace {};
			class moveToOnArc {};
			class setMoveProperties {};
			class setObjectGrid {};
			class translationDone {};
		};
		class Probe
		{
			file = "a3\Functions_F_Contact\Probe";
			class probeAnim {};
			class probeCoreDelete {};
			class probeCoreEffects {};
			class probeCoreInit {};
			class probeCoreLegsDestroyed {};
			class probeCoreUpdate {};
			class probeDelete {};
			class probeHitpoint {};
			class probeVeinHitpoint {};
		};
		class Puzzles
		{
			file = "a3\Functions_F_Contact\Puzzles";
			class initPuzzle {};
			class isPuzzleReset {};
			class isPuzzleTerminated {};
			class onPuzzleCompleted {};
			class onPuzzleProgress {};
			class onPuzzleReset {};
			class onPuzzleStepCompleted {};
			class onPuzzleTerminated {};
			class puzzle_mole {};
			class puzzle_outlier {};
			class resetPuzzle {};
			class setGravityPulse {};
			class showVision {};
			class terminatePuzzle {};
			class updateGravityPulse {};
		};
		class Sound
		{
			file = "a3\Functions_F_Contact\Sound";
			class createScriptedSoundSource {};
			class createScriptedSoundSourceVehicle {};
			class getCharacterSounds {};
			class playAlternatingSound {};
			class setCustomSoundController {};
			class soundDrone {};
		};
		class TXScan
		{
			file = "a3\Functions_F_Contact\TXScan";
			class clearTXScan {};
			class createTXScan {};
			class cropTXScan {};
			class deleteTXScan {};
			class diag_TXScan {};
			class drawTXScan {};
			class getAllTXScans {};
			class getTXScanAngle {};
			class getTXScanDrawData {};
			class getTXScanPolygon {};
			class getTXScanPolygonDetails {};
			class getTXScanPosition {};
			class getTXScanPrecision {};
			class getTXScanSaveData {};
			class getTXScanWorldBounds {};
			class loadTXScanState {};
			class preInitTXScan {};
			class saveTXScanState {};
			class scanTX {};
			class setTXScanAngle {};
			class setTXScanPolygon {};
			class setTXScanPosition {};
			class setTXScanPrecision {};
			class setTXScanWorldBounds {};
			class updateTXScanDrawData {};
		};
		class Waypoints
		{
			file = "a3\Functions_F_Contact\Waypoints";
			class wpAddScript {};
			class wpDroneMove {};
		};
		class Weapons
		{
			file = "a3\Functions_F_Contact\Weapons";
			class gravityBurst {};
			class gravityCannon_01_ai {};
			class grenadeThrowback {};
			class lightBurst {};
			class missileDeflection {};
			class missileSwarm {};
			class prototypeCannon_01_ai {};
			class prototypeCannon_01_player {};
			class prototypeCannon_01_slaved {};
		};
	};
	class HSim
	{
		project = "tkoh";
		tag = "BIS";
		class Ambient
		{
			file = "A3\functions_f\ambient";
			class ambientBlacklist
			{
				description = "Register blacklisted areas in mission for ambient environment";
			};
			class ambientBlacklistAdd
			{
				description = "Register blacklisted area for ambient environment";
			};
			class ambientBoats
			{
				description = "Ambient boats";
				ext = ".fsm";
			};
			class ambientHelicopters
			{
				description = "Ambient helicopters";
				ext = ".fsm";
			};
			class ambientPlanes
			{
				description = "Ambient planes";
				ext = ".fsm";
			};
			class ambientPostprocess
			{
				description = "Ambient postprocess";
			};
		};
		class Conversations
		{
			file = "A3\functions_f\Conversations";
			class genericSentence
			{
				description = "Play generic sentence";
			};
			class genericSentenceInit
			{
				description = "Init generic sentence settings";
			};
			class kbCanSpeak
			{
				description = "Returns conversation availability of given person";
			};
			class kbCreateDummy
			{
				description = "Creates dummy speaker";
			};
			class kbIsSpeaking
			{
				description = "Check if speaker is locked for different conversation";
			};
			class kbMenu
			{
				description = "Opens conversation menu";
			};
			class kbPriority
			{
				description = "Set conversations priority";
			};
			class kbSentence
			{
				description = "Returns sentence name";
			};
			class kbSkip
			{
				description = "Skip conversation";
			};
			class kbTell
			{
				description = "Start the conversation";
			};
			class kbTellLocal {};
			class kbTopicConfig
			{
				description = "Returns topic config";
			};
		};
		class Database
		{
			file = "A3\functions_f\database";
			class dbClassCheck
			{
				description = "Check if container exists in database";
			};
			class dbClassId
			{
				description = "Set class name";
			};
			class dbClassIndex
			{
				description = "Returns index path to database container";
			};
			class dbClassList
			{
				description = "Returns classes in given class";
			};
			class dbClassRemove
			{
				description = "Remove database container";
			};
			class dbClassReturn
			{
				description = "Returns all values in database container.";
			};
			class dbClassSet
			{
				description = "Add database container";
			};
			class dbConfigPath
			{
				description = "Returns config path with the same address as DB path";
			};
			class dbImportConfig
			{
				description = "Add database containers based on config containers";
			};
			class dbImportXML
			{
				description = "Add database containers based on XML file";
			};
			class dbisClass
			{
				description = "Check if item is class";
			};
			class dbisValue
			{
				description = "Check if item is value";
			};
			class dbPrint
			{
				description = "Print a database";
			};
			class dbSymbolClass
			{
				description = "Returns database specific symbol for class";
			};
			class dbSymbolValue
			{
				description = "Returns database specific symbol for value";
			};
			class dbValueCheck
			{
				description = "Check if value exists in database";
			};
			class dbValueId
			{
				description = "Set value name";
			};
			class dbValueIndex
			{
				description = "Returns index path to database value";
			};
			class dbValueList
			{
				description = "Returns values in given class";
			};
			class dbValueRemove
			{
				description = "Remove a value from database";
			};
			class dbValueReturn
			{
				description = "Returns value";
			};
			class dbValueSet
			{
				description = "Add a value to database";
			};
		};
		class Debug
		{
			file = "A3\functions_f\Debug";
			class codePerformance
			{
				description = "Measures how much time it takes to execute given expression";
			};
			class error
			{
				description = "Display debug error";
				headerType = 1;
			};
			class errorMsg
			{
				description = "Display dialog error";
				headerType = 1;
			};
			class functionPath
			{
				description = "Return path to the given function";
			};
			class functionsDebug
			{
				description = "Set Functions debug mode";
			};
			class GC
			{
				description = "Garbage Collector";
			};
			class GCinit
			{
				description = "Garbage Collector Init";
				ext = ".fsm";
			};
			class halt
			{
				description = "Terminate script";
				headerType = 1;
			};
			class log
			{
				description = "Debug message";
				headerType = 1;
			};
			class param
			{
				description = "Define script param";
				headerType = 1;
			};
			class paramIn
			{
				description = "Define script param without overload ability";
				headerType = 1;
			};
			class shutdown
			{
				description = "Shut downs the game.";
			};
		};
		class GUI
		{
			file = "A3\functions_f\GUI";
			class camFollow
			{
				description = "Camera follows target.";
			};
			class credits
			{
				description = "Show game's credits";
			};
			class ctrlTextHeight
			{
				description = "Set control height according to text";
			};
			class diaryHints
			{
				description = "Add loading hints to diary";
			};
			class diaryMaps
			{
				description = "Add lcustom maps to diary";
			};
			class displayClouds
			{
				description = "Show background moving clouds";
			};
			class displayColorGet
			{
				description = "Get menu color defaults";
			};
			class displayColorSet
			{
				description = "Set menu colors";
			};
			class displayControls
			{
				description = "Return all controls of given display class";
			};
			class displayLoading
			{
				description = "Loading screen init";
			};
			class displayMission
			{
				description = "Returns main display of current mission/intro/outro";
			};
			class displayResize
			{
				description = "Resize display to full screen";
			};
			class getIDC
			{
				description = "Return control IDC";
			};
			class getIDD
			{
				description = "Return dialog IDD";
			};
			class GUIbackground
			{
				description = "Create message background.";
			};
			class GUIeditor
			{
				description = "GUI editor.";
			};
			class GUIgrid
			{
				description = "Return grid size";
			};
			class GUIgridToProfile
			{
				description = "Search for grids and store them into profileNameSpace";
			};
			class GUIhint
			{
				description = "Create hint window.";
			};
			class GUImessage
			{
				description = "Create message window.";
			};
			class GUInewsfeed
			{
				description = "Load newsfeed";
			};
			class HUDLimits
			{
				description = "Set HUD limits";
			};
			class overviewAuthor
			{
				description = "Display mission author.";
			};
			class overviewDifficulty
			{
				description = "Display difficulty overview";
			};
			class overviewMission
			{
				description = "Display mission overview.";
			};
			class overviewTerrain
			{
				description = "Display terrain overview.";
			};
			class overviewTimeTrial
			{
				description = "Returns the dynamically composed overview text for Time Trial scenarios.";
			};
			class PIP
			{
				description = "Picture In Picture.";
			};
			class shakeGauges
			{
				description = "Shake analogue gauges";
			};
			class titleText
			{
				description = "Display structured titleText";
			};
		};
		class Helicopters
		{
			file = "A3\functions_f\helicopters";
			class helicopterCanFly
			{
				description = "Checks if helicopter is capable of flight.";
				ext = ".fsm";
			};
			class helicopterDamage
			{
				description = "Handle forms of helicopter damage.";
			};
			class helicopterGetHitpoints
			{
				description = "Return all hitpoints for a helicopter.";
			};
			class helicopterSeat
			{
				description = "Check on which side units sits";
			};
			class helicopterSeatMove
			{
				description = "Plays cockpit animation";
			};
			class helicopterType
			{
				description = "Returns helicopter type (Light, Medium, Heavy)";
			};
		};
		class Map
		{
			file = "A3\functions_f\Map";
			class keypointsExport
			{
				description = "Export keypoints";
			};
			class keypointsExportFromKML
			{
				description = "Export keypoints from KML file";
			};
			class KMLimport
			{
				description = "Imports and marks positions from KLM file.";
			};
			class markerCreate
			{
				description = "Create marker";
			};
			class markerParams
			{
				description = "Return marker params";
			};
			class markerPath
			{
				description = "Create marker path";
			};
			class nearestHelipad
			{
				description = "Find nearest helipad to given position";
			};
			class noFlyZone
			{
				description = "Check if object is in no fly zone";
			};
			class noFlyZonesCreate
			{
				description = "Create no-fly zones";
			};
			class noFlyZonesExport
			{
				description = "Export no-fly zones";
			};
			class posDegtoUTM
			{
				description = "Convert latitude/longtitude position to UTM format";
			};
			class posDegToWorld
			{
				description = "Convert latitude/longtitude position to game format";
			};
			class posUTMToDeg
			{
				description = "Convert UTM format position to latitude/longtitude";
			};
			class randomPos
			{
				description = "Selects random position";
			};
			class randomPosTrigger
			{
				description = "Selects random position in trigger area";
			};
			class worldArea
			{
				description = "Set world area trigger";
			};
		};
		class Misc
		{
			file = "A3\functions_f\Misc";
			class animType
			{
				description = "Recognizes animation name";
			};
			class assignPlayerRole
			{
				description = "Ensures the player can only get in the specific vehicle role";
			};
			class convertUnits
			{
				description = "Converts values to a target system of units.";
			};
			class counter
			{
				description = "Adds values to counter";
			};
			class displayName
			{
				description = "Returns config item's displayName";
			};
			class endMission
			{
				description = "Ends mission with specific ending";
			};
			class isLocalized
			{
				description = "Checks if given key name exists in ingame localisation database";
			};
			class moveIn
			{
				description = "Move a unit info vehicle on specific role.";
			};
			class onEnd
			{
				description = "Add/Remove an onEnd code";
			};
			class onLoad
			{
				description = "Add/Remove an onLoad code";
			};
			class playerName
			{
				description = "Return current profile's name";
			};
			class position
			{
				description = "Returns position";
			};
			class roundDir
			{
				description = "Round direction to nearest limit";
			};
			class saveGame
			{
				description = "Save game when proper conditions are met";
			};
			class setHeight
			{
				description = "Set a unit's height.";
			};
		};
		class Missions
		{
			file = "A3\functions_f\Missions";
			class singleMissionConfig
			{
				description = "Returns config of current single mission";
			};
			class singleMissionKeys
			{
				description = "Activate mission related keys";
			};
			class singleMissionName
			{
				description = "Returns name of currently selected single mission";
			};
		};
		class MP
		{
			file = "A3\functions_f\MP";
			class MP
			{
				description = "Sends function for remote execution";
			};
			class MPexec
			{
				description = "(A3 1.52) Function is obsolete, left for backward comaptability and security reasons.";
			};
		};
		class Numbers
		{
			file = "A3\functions_f\Numbers";
			class numberDigits
			{
				description = "Break a number into single digits";
			};
			class numberText
			{
				description = "Write number as a text (not in scientific notation)";
			};
		};
		class Radio
		{
			file = "A3\functions_f\radio";
			class radioSetChannel
			{
				description = "Set a specific or random music channel.";
			};
			class radioSetPlaylist
			{
				description = "Set a specific or random music playlist.";
			};
			class radioSetTrack
			{
				description = "Set a specific or random music track.";
			};
		};
		class Strings
		{
			file = "A3\functions_f\Strings";
			class secondsToString
			{
				description = "Convert amount of seconds to desired format.";
			};
		};
	};
};
