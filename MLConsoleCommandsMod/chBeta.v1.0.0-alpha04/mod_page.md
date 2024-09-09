### Mod Page Description (chBeta.v1.0.0-alpha04)

If you'd like this to be maintained, consider tipping at the bottom of the page.

If you have question, ask it in the community discord server: [discord server](https://discord.gg/NTvCTaG6tg)

#### How To Install:
1. Download [RE-UE4SS](https://www.nexusmods.com/manorlords/mods/229) and follow the installation guide.
2. Extract the downloaded Main File archive and drop the **MLConsoleCommandsMod** to the UE4SS **Mods** folder
3. The mod will be enabled automatically

#### How To Disable / re-Enable:
- to disable the mod remove or rename the empty enabled.txt File in the mod folder

- to enable the mod again bring back the enabled.txt File again or utilize the Mod Loader file

#### How To Use:
1. Make sure UE4SS ConsoleEnablerMod is enabled (enabled by default)
2. In Game, open the console using the console keybind (F10 or F8 by default)
3. now you can enter the commands available listed below to use it

#### Be a responsible mod user
- If you found a bug and is possibly caused by a mod please do report it in the right place and not to the game developer unnecessarily
- keep in mind that the game is still in early-access and this is made without official mod support
- always have backup save in case something goes wrong

#### Available Commands (chBeta.v1.0.0-alpha04)

- k.printCommands
    - print print-command handles of this mod to the console window


- k.printLordConsoleCommands
    - print Lord related console commands to the console window


- k.setTreasury <u>amount</u>
    - set player Lord Treasury to specified <u>amount</u>


- k.addTreasury <u>amount</u>
    - increase/decrease player Lord Treasury by specified <u>amount</u> (negate <u>amount</u> to decrease)


- k.setInfluence <u>amount</u>
    - set player Lord Influence to specified <u>amount</u>


- k.addInfluence <u>amount</u>
    - increase/decrease player Lord Treasury by specified <u>amount</u> (negate <u>amount</u> to decrease)


- k.setKingsFavor <u>amount</u>
    - set player Lord KingsFavor to specified <u>amount</u>


- k.addKingsFavor <u>amount</u>
    - increase/decrease player Lord KingsFavor by specified <u>amount</u> (negate <u>amount</u> to decrease)


- k.layRegionClaim
    - lay a claim on **current region** for player


- k.layRegionClaimForBaron
    - lay a claim on **current region** for the baron


- k.finalizeClaims
    - finalize all player claims


- k.finalizePlayerClaimOnRegion
    - finalize player claim on **current** region


- k.withdrawClaimsAndChallengesTowardsPlayer
    - make lords withdraw claims and challenges toward the player


- k.addChallengesByPlayerDaysLeft <u>amount</u>
    - add **daysLeft** by <u>amount</u> to player initiated challenges


- k.addChallengesTowardsPlayerDaysLeft <u>amount</u>
    - add **daysLeft** by <u>amount</u> to challenges towards the player


- k.declareWarToBaron
    - declare war to the Baron


- k.declarePeaceToBaron
    - declare peace to the Baron

    - **note: this doesn't resolve existing diplomacy play**


- k.moveRegionByNameChallengeToCursor <u>regionName</u>
    - move the **Battlefield** place of any challenge in regard to Region by <u>regionName</u> to cursor position

    - **note: this is supposedly a locked feature in early access**


- k.printArmyConsoleCommands
    - print Army related commands to the console window


- k.rerollHireMercenaries
    - reroll the list of mercenary you can hire


- k.disbandOtherLordsMercenaries
    - disband all the other lords squads that is a "mercenary", not limited to named mercenary you can hire, this includes the baron private army


- k.releaseMercenaryById <u>mercenaryID</u>
    - release mercenary with given <u>mercenaryID</u>, making them available for hire <br/><br/>
    - **mercenaryID** refer to the table key in the [DT_MercenaryCompanies.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.7.987/gameassets/Translation/HoodedHorse/DT_Translation_MercenaryCompanies.json)
    - e.g. to release "The Brotherhood of the Forest" (brotherhood\_of\_the\_forest): "k.releaseMercenaryById brotherhood\_of\_the\_forest"**


- k.releaseLockedMercenaryPool
    - release mercenary that are not currently hired by any lord

    - **can be workaround for mercenary being locked after being hired once by the baron**


- k.setHireMercenaryByIndexArriveAtCurrentRegion <u>index</u>
    - set the arrival region of hire-mercenary at given <u>index</u> to **current region**<br/><br/>

    - <u>index</u> refer to the offset from the first option, so the first option (card) is 0, and the 3rd option (card) is 2


- k.setHireMercenaryByIndexCost <u>index</u> <u>cost</u>
    - set the <u>cost</u> of hire-mercenary at given <u>index</u><br/><br/>

    - <u>index</u> refer to the offset from the first option, so the first option (card) is 0, and the 3rd option (card) is 2
    - avoid using non-positive number, it might not crash but will break some UI**


- k.setSelectedSquadCapacity <u>amount</u>
    - set currently selected squad(s) capacity to <u>amount</u><br/><br/>

    - **avoid using this on retinue, interaction with the UI might not work**


- k.addMilitiaToRegion <u>militiaID</u>
    - add new militia to current region<br/><br/>

    - <u>militiaID</u> refers to the unit template key in the [DT_UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.7.987/gameassets/NotStronghold/Data/DT_UnitTemplates.json)
    - display name translation here [DT_Translation.UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.7.987/gameassets/Translation/HoodedHorse/DT_Translation_UnitTemplates.json)
    - e.g. to add archer militia (bowMilitia): "k.addMilitiaToRegion bowMilitia"


- k.addMilitiaToRegionByName <u>regionName</u> <u>militiaID</u>
    - add new militia by <u>militiaID</u> to the specified region by <u>regionName</u><br/><br/>

    - <u>militiaID</u> refers to the unit template key in the [DT_UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.7.987/gameassets/NotStronghold/Data/DT_UnitTemplates.json)
    - display name translation here [DT_Translation.UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.7.987/gameassets/Translation/HoodedHorse/DT_Translation_UnitTemplates.json)


- k.healPlayerUnits
    - heal all of player commanded army units.<br/><br/>

    - stamina, morale, hp will be set to max


- k.weakenBandits
    - weaken all units that is assigned to a bandit squad, of any lord<br/><br/>

    - stamina, morale, hp will be set to 1/100 of max
    - bandit camps have bandit squads of Outlaw


- k.weakenRaiders
    - weaken all raider units<br/><br/>

    - stamina, morale, hp will be set to 1/100 of max
    - raiders are squad of Outlaw


- k.teleportSelectedSquadsToCursor
    - teleport selected squads to the cursor position<br/><br/>

    - the squad will still retain their rally position, so they will walk back if not changed


- k.retinueEditorSetArmorByID <u>ID</u>
    - set the rally armor of the retinue currently selected at the retinue editor to armor with given <u>ID</u><br/><br/>

    - armor ID can be found on their [template here](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.7.987/gameassets/NotStronghold/Data/DT_UnitTemplates.json), [item data here](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.7.987/gameassets/NotStronghold/Data/DT_Items.json)
    - use the retinue editor to select the variant of that set armor


- k.retinueEditorSetWeaponByID <u>ID</u>
    - set the rally weapon of the retinue currently selected at the retinue editor to weapon with given <u>ID</u><br/><br/>

    - weapon <u>ID</u>can be found on their [template here](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.7.987/gameassets/NotStronghold/Data/DT_UnitTemplates.json), [item data here](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.7.987/gameassets/NotStronghold/Data/DT_Items.json)
    - use the retinue editor to select the variant of that set weapon
    - for example, in the template of "retinue\_tier3", the weapons ID are 278 and 250, in the item data table "278" is a sidearm and "250" is a polearm. the template name suggest that those set of weapon are supposed to be for tier-3 retinue.


- k.retinueEditorSetShieldByID <u>ID</u>
    - set the rally shield of the retinue currently selected at the retinue editor to armor with given <u>ID</u></u><br/><br/>

    - shield <u>ID</u> can be found on their [template here](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.7.987/gameassets/NotStronghold/Data/DT_UnitTemplates.json), [item data here](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.7.987/gameassets/NotStronghold/Data/DT_Items.json)
    - use the retinue editor to select the variant of that set shield


- k.retinueEditorSetHelmetByID <u>ID</u>
    - set the rally helmet of the retinue currently selected at the retinue editor to armor with given <u>ID</u><br/><br/>

    - helmet <u>ID</u> can be found on their [template here](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.7.987/gameassets/NotStronghold/Data/DT_UnitTemplates.json), [item data here](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.7.987/gameassets/NotStronghold/Data/DT_Items.json)
    - use the retinue editor to select the variant of that set helmet


- k.printRegionConsoleCommands
    - print available commands to the console window


- k.addRegionalWealth <u>amount</u>
    - increase/decrease **current region** wealth by specified <u>amount</u> (negate <u>amount</u> to decrease)


- k.setRegionalWealth <u>amount</u>
    - set **current region** wealth to specified <u>amount</u>


- k.addDevelopmentPoint <u>amount</u>
    - increase/decrease **current region** development point by specified <u>amount</u> (negate amount to decrease)


- k.setDevelopmentPoint <u>amount</u>
    - set **current region** development point to specified <u>amount</u>


- k.addRegionApproval <u>amount</u>
    - increase/decrease **current region** approval by specified <u>amount</u> (negate <u>amount</u> to decrease)</br></br>

    - note: this only change the region cache, the game will invalidate it again by residents memory each cycle
    - see "k.resetRegionApprovalMemories" to reset the memories


- k.setRegionApproval <u>amount</u>
    - set **current region** approval to specified <u>amount</u></br></br>

    - note: this only change the region cache, the game will invalidate it again by residents memory each cycle
    - see "k.resetRegionApprovalMemories" to reset the memories


- k.addRegionPublicOrder <u>amount</u>
    - increase/decrease **current region** public order by specified amount (negate amount to decrease)</br></br>

  -current region refer to the region of the territory at the center of the camera, invalid while looking at the region map


- k.setRegionPublicOrder <u>amount</u>
    - set **current region** public order to specified <u>amount</u>


- k.spawnNewFamily
    - spawn a new family in **current region** </br></br>

    - the spawned family consist of a "husband" and a "wife"


- k.spawnNewFamily <u>amount</u>
    - spawn <u>amount</u> new family in **current region**</br></br>

    - the spawned family consist of a "husband" and a "wife"


- k.spawnNewFamilyAtCursor
    - spawn a new family in current region with cursor location as initial location</br></br>

    - the spawned family consist a "husband" and a "wife"


- k.spawnNewFamilyAtCursor <u>amount</u>
    - spawn <u>amount</u> new family in **current region** with cursor location as initial location</br></br>


- the spawned family consist a "husband" and a "wife"


- k.spawnNewFamilyMember
    - spawn a new family member in **current region**</br></br>

    - will find any unfilled family slot and spawn for that family role
    - if all slot are already filled, then this command have no effect.


- k.spawnNewFamilyMember <u>amount</u>
    - spawn <u>amount</u> new family member in **current region**</br></br>


- will find any unfilled family slot and spawn for that family role
- will spawn until either all slot are filled or already spawned for <u>amount</u>


- k.spawnNewFamilyMemberAtCursor
    - spawn a new family member in **current region** with cursor location as initial location</br></br>

    - will find any unfilled family slot and spawn for that family role
    - if all slot are already filled, then this command have no effect.


- k.spawnNewFamilyMemberAtCursor <u>amount</u>
    - spawn amount new family member in **current region** with cursor location as initial location</br></br>


- will find any unfilled family slot and spawn for that family role
- will spawn until either all slot are filled or already spawned for <u>amount</u>


- k.growRegionPopulation
    - grow **current region** population by 1</br></br>

    - will spawn a new family member to an existing family if applicable
    - to spawn new family member ignoring the condition, see "k.spawnNewFamilyMember"


- k.growRegionPopulation <u>amount</u>
    - grow **current region** population by amount </br/br>

    - will spawn new family members up to amount to an existing family if applicable
    - to spawn new family member ignoring the condition, see "k.spawnNewFamilyMember"


- k.spawnBanditCamp
    - spawn a bandit camp at random place on the map </br></br>


- k.buildInstantly
    - place the building and instantly finish it </br></br>

    - note: do not use before the builder UI shows you the building (doing otherwise will crash the game later on)
    - enter command whenever you want to place a new building
    - this does not bypass resource requirement (will not consume any)
    - this does not apply to the burgage plot planner


- k.spawnRaider <u>amount</u>
    - spawn <u>amount</u> of raider at random edge of the map</br></br>

    - raider starting position is randomized, all of <u>amount</u> from the same place


- k.spawnRaiderRallyAtCursor <u>amount</u>
    - spawn <u>amount</u> of raider that will rally at current cursor position</br></br>

    - raider starting position is the nearest map border to the cursor position
    - after spawned, the raider(s) may ignore the rally position and attack immediately or might not attack at all if the amount is too low (idk if they will attack eventually, I didn't test for long)


- k.refillRegionBerries
    - refill every berry bushes in **current region**</br></br>


- k.increaseRegionBerriesCapacity <u>amount</u>
    - increase the lowest capacity berry bush in **current region** by <u>amount</u></br></br>

    - by default a berry bush capacity is 8.
    - by default berry deposits consist of 8 bushes, rich type deposit is 16 bushes.


- k.resetRegionBerriesCapacity
    - reset every berry bushes capacity in **current region** back to default, available berry amount will be coerced</br></br>

    - default value is 8.


- k.emptyRegionBerriesCapacity
    - set every berry bushes capacity in **current region** to 0, available berry amount will be coerced</br></br>


- k.emptyRegionBerries
    - set every berry bushes available berry in **current region** to 0</br></br>


- k.increaseRegionStoneDepositAmount <u>amount</u>
    - increase the lowest stone amount in **current region** by <u>amount</u></br></br>

    - by default a stone amount is 20


- k.resetRegionStoneDepositAmount
    - reset stone amount in **current region** back to default</br></br>

    - by default a stone amount is 20


- k.emptyRegionStoneDepositAmount
    - set every stone amount in **current region** to 0


- k.spawnClayDepositAtCursor <u>amount</u>
    - spawn new clay deposit at cursor position with <u>amount</u> as initial deposit amount</br></br>

    - note: the deposit texture are not spawned**


- k.addClayDepositAtCursor <u>amount</u>
    - increase/decrease clay deposit at cursor by <u>amount</u> (negate <u>amount</u> to decrease)</br></br>

    - the deposit radius is the same distance that allows you to put mine building over it (a little past the orange texture)


- k.markRichClayDepositAtCursor
    - mark clay deposit at cursor as rich deposit</br></br>

    - the deposit radius is the same distance that allows you to put mine building over it (a little past the orange texture)


- k.markNormalClayDepositAtCursor
    - mark clay deposit at cursor as normal deposit</br></br>

    - the deposit radius is the same distance that allows you to put mine building over it (a little past the orange texture)


- k.spawnIronDepositAtCursor <u>amount</u>
    - spawn new iron deposit at cursor position with <u>amount</u> as initial deposit amount</br></br>

    - note: the deposit texture are not spawned


- k.addIronDepositAtCursor <u>amount</u>
    - increase/decrease iron deposit at cursor by <u>amount</u> (negate <u>amount</u> to decrease)</br></br>

    - the deposit radius is the same distance that allows you to put mine building over it (a little past the orange texture)


- k.markRichIronDepositAtCursor
    - mark iron deposit at cursor as Rich deposit</br></br>

    - the deposit radius is the same distance that allows you to put mine building over it (a little past the orange texture)


- k.markNormalIronDepositAtCursor
    - mark iron deposit at cursor as normal deposit</br></br>

    - the deposit radius is the same distance that allows you to put mine building over it (a little past the orange texture)


- k.spawnWildAnimalAtCursor <u>amount</u>
    - spawn a wild animal deposit at mouse cursor position with <u>amount</u> as capacity</br></br>

    - the game seems to limit the initial amount, but they can grow over that


- k.setSelectedBuildingsOnFire
    - set all of player selected buildings on fire


- k.putOutSelectedBuildingsFire
    - put out all of player selected buildings fire


- k.setRegionBuildingsOnFire
    - set **current region** buildings on fire


- k.putOutRegionBuildingsFire
    - put out **current region** buildings fire


- k.addResourceToSelectedBuildings <u>typeId</u> <u>amount</u>
    - spawn/increase/decrease resource at the player selected buildings inventory (negate <u>amount</u> to decrease)</br></br>

    - typeId refer to the table key in [DT_items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.7.987/gameassets/NotStronghold/Data/DT_Items.json).
    - display name translations here [DT_Translation_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.7.987/gameassets/Translation/HoodedHorse/DT_Translation_Items.json). (typeId is a number, so remove "itemID_" prefix)
    - e.g. To add 1000 Timber (wood: itemID_16): "k.addResourceToSelectedBuildings 16 1000"

- k.spawnSelectedBuildingsConstructionResources
    - spawn remaining construction resources to player selected buildings


- k.spawnRegionBuildingsConstructionResources
    - spawn remaining construction resources to **current region** buildings


- k.removeDeerSquadByDeerAtCursor
    - remove deer squad (wild animals) of the deer unit at the player cursor</br></br>

    - this was requested because of the wild animal wandering-off region/map bug
    - see "k.spawnWildAnimalAtCursor" to spawn new one


- k.removeOffMapWildlifeHerds
    - remove **Wild Animals** that are off-map (not within any region)</br></br>

    - this was requested because of the wild animal wandering-off region/map bug
    - see "k.spawnWildAnimalAtCursor" to spawn new one


- k.setSelectedBuildingsGenericStorageCapacity <u>amount</u>
    - set selected buildings **Generic Storage** to <u>amount</u></br></br>

    - set value is not persisted to the save game


- k.setSelectedBuildingsPantryStorageCapacity <u>amount</u>
    - set selected buildings **Pantry Storage** to <u>amount</u></br></br>

    - set value is not persisted to the save game**


- k.setSelectedBuildingsMourningPeriod <u>amount</u>
    - set selected buildings mourning period to <u>amount</u></br></br>

    - <u>amount</u> is day(s) remaining


- k.setRegionBuildingsMourningPeriod <u>amount</u>
    - set **current region** buildings mourning period to amount</br></br>

    - amount is day(s) remaining


- k.demolishSelectedBuildings
    - demolish selected buildings</br></br>

    - can be used to demolish supplies building (resources inside will be gone)


- k.setSelectedBuildingsCropsPlowingProgress <u>amount</u>
    - set selected buildings crops plowing progress to <u>amount</u></br></br>

    - amount should be in 0.0 .. 1.0 inclusive
    - note: plowing progress in this command refer to individual crops, there are always set amount of crops per field size, plowing progress shown on field UI refer to how many crops are fully (1.0) plowed


- k.multiplySelectedBuildingsCropsYieldBy <u>amount</u>
    - multiply all crops yield in selected buildings by <u>amount</u></br></br>

    - amount should not be negative
    - this will multiply every single crop yield in the field, fractional result is rounded down


- k.increaseSelectedBuildingsCropsYieldBy <u>amount</u>
    - increase a random crops yield in selected buildings by <u>amount</u></br></br>

    - amount should not be negative


- k.resetRegionApprovalMemories
    - reset **current region** residents approval memories</br></br>

    - as if they were just moved in, 50 by default
    - note: the logic behind memory calculation is still unclear so no add approval memory command yet


- k.spawnRegionBuildingsHandcarts
    - spawn handcarts to **current region** buildings that have the slots unfilled</br></br>

    - especially on newly constructed Granary/Storehouse building (not large)


- k.spawnPlayerRegionsBuildingHandcarts
    - spawn handcarts to player owned regions buildings that have the slots unfilled</br></br>

    - especially on newly constructed Granary/Storehouse building**


- k.setGenericStorageCapacityForRegionBuildingsOfType <u>typeID</u> <u>capacity</u>
    - set generic storage capacity for **current region** buildings with assigned <u>typeID</u> to <u>capacity</u></br></br>

    - typeID name translation here [DT_Translation_BuildingNames](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.7.987/gameassets/Translation/HoodedHorse/DT_Translation_BuildingNames.json)
    - <u>typeID</u> is a number so remove "buildingID\_" prefix
    - set value is not persisted to the save game


- k.setGenericStorageCapacityForRegionStorehouseBuildings <u>capacity</u>
    - set generic storage capacity for **current region** storehouse/warehouse buildings to <u>capacity</u></br></br>

    - set value is not persisted to the save game


- k.setPantryStorageCapacityForRegionBuildingsOfType <u>typeID</u> <u>capacity</u>
    - set pantry storage capacity for **current region** buildings with assigned <u>typeID</u> to <u>capacity</u></br></br>

    - typeID name translation here [DT_Translation_BuildingNames](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.7.987/gameassets/Translation/HoodedHorse/DT_Translation_BuildingNames.json)
    - <u>typeID</u> is a number so remove "buildingID\_" prefix
    - set value is not persisted to the save game


- k.setPantryStorageCapacityForRegionPantryBuildings <u>capacity</u>
    - set pantry storage capacity for **current region** pantry/granary buildings to <u>capacity</u></br></br>

    - set value is **not** persisted to the save game


- k.setGenericStorageCapacityForPlayerRegionsBuildingsOfType <u>typeID</u> <u>capacity</u>
    - set generic storage capacity for player owned regions buildings with assigned <u>typeID</u> to <u>capacity</u></br></br>

    - typeID name translation here [DT_Translation_BuildingNames](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.7.987/gameassets/Translation/HoodedHorse/DT_Translation_BuildingNames.json)
    - <u>typeID</u> is a number so remove "buildingID\_" prefix
    - set value is not persisted to the save game


- k.setGenericStorageCapacityForPlayerRegionsStorehouseBuildings <u>capacity</u>
    - set generic storage capacity for player owned regions storehouse/warehouse buildings to <u>capacity</u></br></br>

    - set value is not persisted to the save game


- k.setPantryStorageCapacityForPlayerRegionsBuildingsOfType <u>typeID</u> <u>capacity</u>
    - set pantry storage capacity for player owned regions buildings with assigned <u>typeID</u> to <u>capacity</u></br></br>

    - typeID name translation here [DT_Translation_BuildingNames](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.7.987/gameassets/Translation/HoodedHorse/DT_Translation_BuildingNames.json)
    - <u>typeID</u> is a number so remove "buildingID\_" prefix
    - set value is not persisted to the save game


- k.setPantryStorageCapacityForPlayerRegionsPantryBuildings <u>capacity</u>
    - set pantry storage capacity for player owned regions pantry/granary buildings to <u>capacity</u></br></br>

    - set value is not persisted to the save game


- k.removeDepositAtCursor
    - remove deposit at the cursor</br></br>

    - the deposit radius is the same distance that allows you to put mine building over it (a little past the orange texture)
    - if a deposit overlaps then the nearest one is removed


- k.setHoveredUnitFamilyHomeToSelectedBuilding
    - change the assigned home of the family of the hovered unit to currently selected building</br></br>

    - if you have multiple selected/pinned buildings then this command have no effect


- k.healSelectedBuildingsFamiliesDisease
    - heal disease on family that resides on the selected buildings


- k.healRegionFamiliesDisease
    - heal disease on any family that resides on **current region**, even if they are homeless


- k.removeToppledTreeAtCursor
    - remove toppled tree at cursor</br></br>

    - applies to fallen tree and the log
    - cursor should be near the rotation center of the object, a fallen tree (still has branches) center is bottom part, a log center is the center, imagine the cursor always points to the ground
    - cursor radius is 400 unit, for reference that is usually the radius of fully grown tree when looking from the top (estimate)


- k.spawnBerryBushAtCursor
    - spawn berry bush at cursor</br></br>

    - capacity and amount is 8
    - when placed, if the cursor is within an existing clump (clump center is the berry icon), it will join that clump, else it will make a new clump at that place
    - cursor radius for the clump is 2250 unit, for reference it's the width of a Logging Camp or a stone clump (estimate)
      </br></br>
    - cursor should be near the rotation center of the object, i.e. the bottom of the bush, imagine the cursor always points to the ground
    - important note: unlike deposit, this resource is coded to be tied to its region, do not try to mix the clump region and the bush region


- k.spawnStoneChunkAtCursor
    - spawn stone chunk at cursor</br></br>

    - amount is 20
    - when placed, if the cursor is within an existing clump (clump center is the stone icon), it will join that clump, else it will make a new clump at that place
    - cursor radius for the clump is 2250 unit, for reference it's the width of a Logging Camp or a stone clump (estimate)
      </br></br>
    - important: cursor should be near the rotation center of the object, i.e. the bottom of the chunk, imagine the cursor always points to the ground
    - important note: unlike deposit, this resource is coded to be tied to its region, do not try to mix the clump region and the bush region


- k.removeBerryBushAtCursor
    - remove berry bush at cursor </br></br>

    - cursor radius is 200 unit, for reference that is the radius of the bush (estimate)
    - only a single type of berry bush model will be spawned (subject to change)
      </br></br>
    - cursor should be near the rotation center of the object, i.e. the bottom of the bush, imagine the cursor always points to the ground


- k.removeStoneChunkAtCursor
    - remove stone chunk at cursor</br></br>

    - cursor radius is 150 unit, for reference that is the radius of the chunk (estimate)
    - only a single type of stone chunk model will be spawned (subject to change)
      </br></br>
    - cursor should be near the rotation center of the object, i.e. the bottom of the chunk, imagine the cursor always points to the ground


- k.removeBerryBushClumpAtCursor
    - remove the whole berry bush clump (clump center is the berry icon)</br></br>

    - cursor radius for the clump is 2250 unit, for reference it's around the width of a Logging Camp or a stone clump (estimate)


- k.removeStoneChunkClumpAtCursor
    - remove the whole stone chunk clump (clump center is the stone icon)</br></br>

    - cursor radius for the clump is 2250 unit, for reference it's around the width of a Logging Camp or a stone clump (estimate)


- k.skipRegionLivestockOrderInterval
    - skip the interval between ordering animals for **current region**


- k.spawnSaltDepositAtCursor <u>amount</u>
    - spawn salt deposit at cursor with <u>amount</u> as initial amount


- k.addSaltDepositAtCursor <u>amount</u>
    - add salt deposit at cursor by <u>amount</u> (negate <u>amount</u> to decrease)


- k.markRichSaltDepositAtCursor
    - mark salt deposit at cursor as a **Rich** type deposit


- k.markNormalSaltDepositAtCursor
    - mark salt deposit at cursor as a normal type deposit


- k.increaseRegionShoalOfFishCapacity <u>amount</u>
    - increase the capacity of **Shoal Of Fish** resource in **current region** by <u>amount</u></br></br>

    - capacity increase is distributed
    - by default, a **Shoal Of Fish** consist of 6 **group of fish** with random capacity between 10..30, rich type resource has double the capacity range


- k.decreaseRegionShoalOfFishCapacity <u>amount</u>
    - decrease the capacity of **Shoal Of Fish** resource in **current region** by <u>amount</u></br></br>

    - capacity decrease is distributed
    - by default, a **Shoal Of Fish** consist of 6 **group of fish** with random capacity between 10..30, rich type resource has double the capacity range


- k.refillRegionShoalOfFish
    - refill every **group of fish** in **current region**</br></br>

    - a **Shoal Of Fish** consist of multiple **group of fish**


- k.emptyRegionShoalOfFish
    - empty every **group of fish** in **current region**</br></br>

    - a **Shoal Of Fish** consist of multiple **group of fish**


- k.markRichShoalOfFishAtCursor
    - mark **Shoal Of Fish** at cursor as a **rich** type resource


- k.markNormalShoalOfFishAtCursor
    - mark **Shoal Of Fish** at cursor as a normal type resource


- k.spawnSheepAtCursor
    - spawn new Sheep livestock at cursor</br></br>

    - the animal will belong to the region under the cursor
    - the spawned animal is not assigned to any building, have an active livestock trade rule so the game will assign them


- k.spawnLambAtCursor
    - spawn new Lamb livestock at cursor</br></br>

    - the animal will belong to the region under the cursor
    - the spawned animal is not assigned to any building, have an active livestock trade rule so the game will assign them


- k.spawnOxAtCursor
    - spawn new Ox livestock at cursor</br></br>

    - the animal will belong to the region under the cursor
    - the spawned animal is not assigned to any building, have an active livestock trade rule so the game will assign them


- k.spawnHoundAtCursor
    - spawn new Greyhound at cursor</br></br>

    - **important**: This animal is not supposed to be in the game yet.
    - the animal will belong to the region under the cursor
    - the spawned animal is not assigned to any building, have an active livestock trade rule so the game will assign them


- k.spawnHorseAtCursor
    - spawn new Horse livestock at cursor</br></br>

    - the animal will belong to the region under the cursor
    - the spawned animal is not assigned to any building, have an active livestock trade rule so the game will assign them


- k.spawnMuleAtCursor
    - spawn new Mule livestock at cursor</br></br>

    - the animal will belong to the region under the cursor
    - the spawned animal is not assigned to any building, have an active livestock trade rule so the game will assign them


- k.printMiscConsoleCommands
    - print miscellaneous commands to the console window


- k.setGameSpeed <u>amount</u>
    - set the game speed to <u>amount</u>


- k.followUnitAtCursor
    - follow the Unit that is currently pointed by your cursor, works on deer's as well


- k.enterCommandsFromFile <u>filePath</u>
    - enter commands listed in the given text file at <u>filePath</u></br></br>

    - each command is [new-line](https://i.ibb.co.com/KGfX2RJ/commandstxt.png) separated
    - <u>filePath</u> start at the [working directory](https://en.wikipedia.org/wiki/Working_directory) where the game binary ("shipping.exe") is launched. e.g. "ue4ss\\Mods\\MLConsoleCommands\\commands.txt"
    - <u>filePath</u> cannot contains space (for now)
    - <u>filePath</u> must end with ".txt"
    - <u>filePath</u> can be [absolute](https://en.wikipedia.org/wiki/Root_directory#DOS/Windows_systems) for file outside the game directory, e.g. "C:\\Users\\Name\\Desktop\\commands.txt",
    - [about windows file path](https://learn.microsoft.com/en-us/dotnet/standard/io/file-path-formats#traditional-dos-paths)


- k.renameUnitAtCursor <u>name</u>
    - rename unit at cursor to <u>name</u></br></br>

    - <u>name</u> cannot be blank or empty
    - works on animal as well


- k.triggerVictory
    - trigger game victory


- k.triggerGameOver
    - trigger game over


- k.printForeignSupply
    - print **foreign supply** info to the console</br></br>

    - this **foreign supply** influence the trade price each month
    - default supply amount for all items is 500
    - it will print the typeID and amount, e.g. Spears (itemID\_133): "typeID=133 amount=500"
    - typeID display name translation here [DT_Translation_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.7.987/gameassets/Translation/HoodedHorse/DT_Translation_Items.json)


- k.addResourceToForeignSupply <u>typeID</u> <u>amount</u>
    - add resource (items) to the **foreign supply** by <u>amount</u> (negate <u>amount</u> to decrease)</br></br>

    - this **foreign supply** influence the trade price each month
    - default supply amount for all items is 500
    - typeID display name translation here [DT_Translation_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.7.987/gameassets/Translation/HoodedHorse/DT_Translation_Items.json)
    - see "k.printForeignSupply" to see the current amount**


- k.teleportFollowingUnitToCursor
    - teleport current following unit to current cursor location</br></br>

    - see "k.followUnitAtCursor" to follow a unit, should also work when you follow a unit using the game interface


- k.setHoveringUnitSpeed <u>amount</u>
    - set the speed of the unit that is currently hovered/pointed by the cursor to <u>amount</u></br></br>

    - default value is 12.5
    - should work on animal as well
    - note: set value is not frozen, it might change back to default again when the unit task is changed


- k.setGameVersionText <u>text</u>
    - set the text of the **Game Version** text block</br></br>

    - It's the text block that says "Early Access (0.7.987)"</br></br>
    - note: set value is not frozen, it will change back whenever you go to main-menu or load a game.


- k.forwardDay <u>amount</u>
    - forward/skip the in-game day by <u>amount</u></br></br>

    - <u>amount</u> default value is 1, can be omitted.
    - <u>amount</u> cannot be negative
      </br></br>
    - will affect most if not all day/month/year based timer, such as daily consumption, berry growth, season, etc.
    - if the thing you have in mind doesn't update in said manner, then it's very likely not affected.
    - check out this mod to see what date the current day is: [Show Day Of The Month](https://www.nexusmods.com/manorlords/mods/219)


- k.setRainMeter <u>amount </u>
    - set the **rain meter** to <u>amount</u></br></br>

    - see **Words Dictionary** below for details


- k.makeDrought
    - start the drought event </br></br>

    - this basically skip the whole "haven't rained in a while, so it's a drought".
    - the game will in turn progress it into full drought as in vanilla
    - started at 15% progress to have noticeable difference on the land, if you want exactly 0% let me know the reason
      </br></br>
    - if there's already a drought event, then this command will either jump it up to 15% or do nothing

    - info: drought set the **rain meter** to 45, see **Words Dictionary** below for details


- k.makeDroughtInstantly
    - start the drought event, instantly to max drought.</br></br>

    - this basically skip the whole "haven't rained in a while, so it's a drought".
    - started at 100% progress
      </br></br>
    - if there's already a drought event, then this command will jump it up to 100%
    - info: drought set the **rain meter** to 45, see **Words Dictionary** below for details


- k.skipDrought
    - skip the current drought event, if any.</br></br>

    - this basically skip the whole "wait for next rain for the drought to go away".
    - will let the game to gradually lower the drought from whatever progress it was skipped on.

    - info: in vanilla it took at least 45 day for rain to come after the drought started, unless winter cuts it off.


- k.skipDroughtInstantly
    - skip the current drought event, if any, instantly.

    - this basically skip the whole "wait for next rain for the drought to go away".
      </br></br>
    - info: in vanilla it took at least 45 day for rain to come after the drought started, unless winter cuts it off.


- k.makeRain
    - start the rain event.</br></br>

    - the game will in turn progress it into full rain as in vanilla.
    - started at 25% progress to have noticeable difference on the land, if you want exactly 0% let me know the reason
      </br></br>
    - if there's already a rain event, then this command will jump the progress to 25% if not already past that.
    - will reset the **rain meter** to **8**.
    - info: rain will keep going until **rain meter** hits 0, see **Words Dictionary** below for details


- k.makeRainInstantly
    - start the rain event, instantly to full rain.</br></br>

    - if there's already a rain event, then this command will jump the progress to 100%.
    - will reset the **rain meter** to **8**.
    - info: rain will keep going until **rain meter** hits 0, see **Words Dictionary** below for details


- k.skipRain
    - skip the rain event, if any.</br></br>

    - will let the game to progressively finish the rain from whatever progress it was skipped on, ignoring the **rain meter**.


- k.skipRainInstantly
    - skip the rain event, if any, instantly</br></br>

    - ignoring the **rain meter**.


- k.manorPlannerPlaceBuilding
    - place the currently selected building at the manor planner ignoring limit per region</br></br>

    - you can use this to build more garrison tower, which means more retinue.


- k.printGameSetup
    - print current game setup to the console window</br></br>


- k.gameSetupSetAIAggressivenessIndex <u>index</u>
    - set game setup AI Aggressiveness index to <u>index</u></br></br>

      - 0: Reactive
      - 1: Balanced
      - 2: Aggressive
      </br></br>

    - Irrelevant if Baron Adversary is Absent.


- k.gameSetupSetRandomBanditCampSpawnLimit <u>amount</u>
    - set game setup Random Bandit Camp Spawn Limit to <u>amount</u></br></br>

    - <u>amount</u> must be within 0 .. 127 inclusive


- k.gameSetupSetRaidingFrequencyIndex <u>index</u>
    - set game setup Raiding Frequency index to <u>index</u></br></br>

      - 0: None
      - 1: Medium
      - 2: Frequent
      </br></br>


- k.gameSetupSetApprovalLossIndex <u>index</u>
    - set game setup Approval Loss index to <u>index</u></br></br>

      - 0: Low Penalty
      - 1: Medium Penalty
      - 2: High Penalty


- k.gameSetupSetResidentialRequirementIndex <u>index</u>
    - set game setup Residential Requirement index to <u>index</u></br></br>

      - 0: Demanding
      - 1: Balanced
      - 2: Tolerant


- k.gameSetupSetSpoilageIndex <u>index</u>
    - set game setup Spoilage index to <u>index</u></br></br>

      - 0: No Spoilage
      - 1: 50% Slower
      - 2: Standard
      - 3: Double Rate


- k.gameSetupSetWeatherDamageIndex <u>index</u>
    - set game setup Weather Damage index to <u>index</u></br></br>

      - 0: None
      - 1: Balanced
      - 2: Difficult


#### Words Dictionary


- **rain meter**
    - hidden game mechanic, the value the game use to decide when to start finishing or to start another rain event, this value goes down daily, typically reset to **8** after rain start or winter, rain will only start going away when it hits 0, typically will rain at around -20 on **Spring**, around -30 on **Summer**, around -10 on **Autumn**.

    - note: description is presumed, no confirmation from the devs.


**Suggestions**

*   If there's a command you wish to have then you can go on ask for one, I will reply on whether it's possible.

### **How To Uninstall**

*   remove the mod folder
    - also remove the mod declaration in the [Mod Loader file](https://docs.ue4ss.com/dev/guides/installing-a-c++-mod.html) If added previously

### **Mirror Sites**

- **[NexusMods](https://www.nexusmods.com/manorlords/mods/203)**
- **[CurseForge](https://www.curseforge.com/manor-lords/mods/manor-lords-console-commands)**


###  **Donations**

allows me to keep the mods updated faster and better

*   [Paypal](https://paypal.me/liamme07)
*   [Patreon](https://www.patreon.com/psiae)
*   [Ko-Fi](https://ko-fi.com/psiae)