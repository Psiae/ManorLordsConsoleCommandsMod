### Mod Page Description (v1.0.1-alpha14)
<br/><br/>


[<img src="https://i.ibb.co.com/m8qh6Ph/support-me-on-patreon-300x81.png">](https://www.patreon.com/Psiae)
<br/><br/>
Consider supporting to keep the mods updated.

<br/><br/>
If you have question, ask it in the community discord server: [discord server](https://discord.gg/NTvCTaG6tg)<br/><br/>

* video: [https://www.youtube.com/watch?v=zrVS79H7DVc](https://www.youtube.com/watch?v=zrVS79H7DVc)<br/><br/>

#### How To Install:
1. Go To [https://www.nexusmods.com/manorlords/mods/229](https://www.nexusmods.com/manorlords/mods/229).
2. If you doesn't have **RE-UE4SS Mod Loader** installed, follow the **How To Install** section in that page.
3. Install this mod by following the **How To Install Mod** section in that page.<br/><br/>

#### How To Disable / re-Enable:
- To disable the mod remove or rename the empty enabled.txt File in the mod folder

- To enable the mod again bring back the enabled.txt File again or utilize the Mod Loader file<br/><br/>

#### How To Use:
1. Make sure UE4SS **ConsoleEnablerMod** is enabled (enabled by default)
2. In Game, open the console using the console keybind (F10 or F8 by default)
3. Now you can enter the commands available listed below to use it<br/><br/>

#### Be a responsible mod user
- If you found a bug, please do not report it to the game developer without verifying that you can reproduce the bug on vanilla game.
- Keep in mind that the game is still in early-access.<br/><br/>

#### Available Commands

- k.printCommands
    - Print the print-commands of this mod to the console window<br/><br/>


- k.printConsoleCommands
    - Print the print-commands of this mod to the console window<br/><br/>


- k.printArmyConsoleCommands
    - Print Army related console commands to the console window <br/><br/>


- k.addMilitiaToRegion &nbsp;&nbsp; <militiaID>
    - Add militia by specified <ins>militiaID</ins> to **current region**<br/><br/>

    - <ins>militiaID</ins>: [DT_UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/NotStronghold/Data/DT_UnitTemplates.json)
    - Translation: [DT_Translation.UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/Translation/HoodedHorse/DT_Translation_UnitTemplates.json)<br/><br/>
    - example usage:
        - Archer Militia (bowMilitia): `k.addMilitiaToRegion bowMilitia`
        - Militia Footmen (militiaFoot): `k.addMilitiaToRegion militiaFoot`<br/><br/><br/><br/>


- k.healArmyUnits
    - Heal **Player** **Army** Units<br/><br/>

    - **HP**, **Stamina**, and **Morale** will be healed to full<br/><br/><br/><br/>


- k.teleportSelectedSquadsToCursor
    - Teleport Player currently selected squad(s) to the location under Player cursor<br/><br/>


- k.releaseLockedMercenaryPool
    - Release locked mercenaries<br/><br/>

    - You can use this when a Mercenary is not available for hire although not hired by any lord<br/><br/><br/><br/>


- k.rerollHireMercenaries
    - Reroll the list of mercenaries available for hire<br/><br/>


- k.setMercenaryForHireArrivalRegion &nbsp;&nbsp; \<index>
    - Set the Arrival Region of mercenary-for-hire at given <ins>index</ins> to **current region**<br/><br/>

    - <ins>index</ins> refer to the offset from the first option (card)
        - 1st card <ins>index</ins> is 0
        - 2nd card <ins>index</ins> is 1
        - 3rd card <ins>index</ins> is 2<br/><br/><br/><br/>


- k.setMercenaryForHireCost &nbsp;&nbsp; \<index> &nbsp; \<amount>
    - Set the Cost of mercenary-for-hire at given <ins>index</ins> to <ins>amount</ins><br/><br/>

    - <ins>index</ins> refer to the offset from the first option (card)
        - 1st card <ins>index</ins> is 0
        - 2nd card <ins>index</ins> is 1
        - 3rd card <ins>index</ins> is 2<br/><br/>

    - <ins>amount</ins> must be at least 1
        - otherwise the UI will break<br/><br/><br/><br/>


- k.retinueEditor_setArmorByID &nbsp;&nbsp; \<ID>
    - Set the Armor of currently selected Retainer in the Retinue Editor<br/><br/>

    - <ins>ID</ins> the id of the armor
        - Templates: [DT_UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/NotStronghold/Data/DT_UnitTemplates.json)
        - Templates translation: [DT_Translation_UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/Translation/HoodedHorse/DT_Translation_UnitTemplates.json)
        - Items: [DT_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/NotStronghold/Data/DT_Items.json)
        - Items translation: [DT_Translation_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/Translation/HoodedHorse/DT_Translation_Items.json)<br/><br/>

    - example usage:
        -  Retinue Tier 3 Armor (293): `k.retinueEditor_setArmorByID 293`<br/><br/><br/><br/>


- k.retinueEditor_setHelmetByID &nbsp;&nbsp; \<ID>
    - Set the Helmet of currently selected Retainer in the Retinue Editor<br/><br/>

    - <ins>ID</ins> the id of the helmet
        - Templates: [DT_UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/NotStronghold/Data/DT_UnitTemplates.json)
        - Templates translation: [DT_Translation_UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/Translation/HoodedHorse/DT_Translation_UnitTemplates.json)
        - Items: [DT_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/NotStronghold/Data/DT_Items.json)
        - Items translation: [DT_Translation_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/Translation/HoodedHorse/DT_Translation_Items.json)<br/><br/>

    - example usage:
        -  Retinue Tier 3 Helmet (294): `k.retinueEditor_setHelmetByID 294`<br/><br/><br/><br/>


- k.retinueEditor_setShieldByID &nbsp;&nbsp; \<ID>
    - Set the Shield of currently selected Retainer in the Retinue Editor<br/><br/>

    - <ins>ID</ins> the id of the shield (secondary weapon)
        - Templates: [DT_UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/NotStronghold/Data/DT_UnitTemplates.json)
        - Templates translation: [DT_Translation_UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/Translation/HoodedHorse/DT_Translation_UnitTemplates.json)
        - Items: [DT_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/NotStronghold/Data/DT_Items.json)
        - Items translation: [DT_Translation_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/Translation/HoodedHorse/DT_Translation_Items.json)<br/><br/>

    - example usage:
        -  Retinue Tier 3 Shield (290): `k.retinueEditor_setShieldByID 290`<br/><br/><br/><br/>


- k.retinueEditor_setWeaponByID &nbsp;&nbsp; \<ID>
    - Set the Weapon of currently selected Retainer in the Retinue Editor<br/><br/>

    - <ins>ID</ins> the id of the weapon (primary weapon)
        - Templates: [DT_UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/NotStronghold/Data/DT_UnitTemplates.json)
        - Templates translation: [DT_Translation_UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/Translation/HoodedHorse/DT_Translation_UnitTemplates.json)
        - Items: [DT_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/NotStronghold/Data/DT_Items.json)
        - Items translation: [DT_Translation_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/Translation/HoodedHorse/DT_Translation_Items.json)<br/><br/>

    - example usage:
        -  Retinue Tier 3 Sidearm (278): `k.retinueEditor_setWeaponByID 278`
        -  Retinue Tier 3 Polearm (250): `k.retinueEditor_setWeaponByID 250`<br/><br/><br/><br/>


- k.printLordConsoleCommands
    - Print Lord related console command to the console window<br/><br/>


- k.addDaysLeftToChallenges &nbsp;&nbsp; \<amount>
    - Increase / Decrease **daysLeft** by <ins>amount</ins> to challenges initiated by the **Player** against **any** **Lords**<br/><br/>

    - equivalent to command `k.addDaysLeftToChallenges <amount> player "null"`<br/><br/><br/><br/>


- k.addDaysLeftToChallenges &nbsp;&nbsp; \<amount> &nbsp; \<challengerLordID?>
    - Increase / Decrease **daysLeft** by <ins>amount</ins> to challenges initiated by <ins>challengerLordID</ins> against **any** **Lords**<br/><br/>

    - equivalent to command `k.addDaysLeftToChallenges <amount> <challengerLordID> "null"`<br/><br/><br/><br/>


- k.addDaysLeftToChallenges &nbsp;&nbsp; \<amount> &nbsp; \<challengerLordID?> \<challengedLordID?>
    - Increase / Decrease **daysLeft** by <ins>amount</ins> to challenges initiated by <ins>challengerLordID</ins> against <ins>challengedLordID</ins><br/><br/>

    - **lordID?**:
        - "player"
            - The player (You)
        - "baron"
            - The baron (Hildebolt von Bereneute)
        - "null"
            - any lord<br/><br/><br/><br/>


- k.finalizeClaimOnAllRegion
    - Finalize **Player** claims on all region<br/><br/>

    - equivalent to command `k.finalizeClaimOnAllRegion player`<br/><br/><br/><br/>


- k.finalizeClaimOnAllRegion &nbsp;&nbsp; \<lordID>
    - Finalize <ins>lordID</ins> claims on all region<br/><br/>


- k.finalizeClaimOnRegion
    - Finalize **Player** claim on **current region**<br/><br/>

    - equivalent to command `k.finalizeClaimOnRegion player`<br/><br/><br/><br/>


- k.finalizeClaimOnRegion &nbsp;&nbsp; \<lordID>
    - Finalize <ins>lordID</ins> claim on **current region**<br/><br/>

    - **lordID**:
        - "player"
            - The player (You)
        - ~~"baron"~~
            - ~~The baron (Hildebolt von Bereneute)~~<br/><br/><br/><br/>


- k.layRegionClaim
    - Lay region claim for **Player** on **current region**<br/><br/>

    - equivalent to command `k.layRegionClaim player`<br/><br/><br/><br/>


- k.layRegionClaim &nbsp;&nbsp; \<lordID>
    - Lay region claim for <ins>lordID</ins> on **current region**<br/><br/>

    - **lordID**:
        - "player"
            - The player (You)
        - "baron"
            - The baron (Hildebolt von Bereneute)<br/><br/><br/><br/>


- k.moveChallengesByRegionNameToCursor &nbsp;&nbsp; \<regionName>
    - Move the **Battlefield** location of **Challenge** in regard to **Region** identified by <ins>regionName</ins> to the location under the **Player** cursor<br/><br/>

    - <ins>regionName</ins> is case-sensitive
    - Region name containing space can be wrapped with double quotes<br/><br/>

    - example usage:
        - `k.moveChallengesByRegionNameToCursor "An Der Dornlei"`<br/><br/><br/><br/>


- k.addInfluence &nbsp;&nbsp; \<amount>
    - Increase / Decrease **Player** Influence by <ins>amount</ins><br/><br/>


- k.addTreasury &nbsp;&nbsp; \<amount>
    - Increase / Decrease **Player** Treasury by <ins>amount</ins><br/><br/>


- k.setInfluence &nbsp;&nbsp; \<amount>
    - Set **Player** Influence to <ins>amount</ins><br/><br/>


- k.setTreasury &nbsp;&nbsp; \<amount>
    - Set **Player** Treasury to <ins>amount</ins><br/><br/>


- k.printRegionConsoleCommands
    - Print Region related console commands to the console window<br/><br/>


- k.skipLivestockOrderIntervalForRegion
    - Skip the livestock trading interval<br/><br/>

    - In Vanilla, you can only order Ox and Horse once every 30 days, this command will skip that<br/><br/><br/><br/>


- k.spawnAnimalAtCursor &nbsp;&nbsp; \<animalID>
    - Spawn 1 animal identified by given <ins>animalID</ins> to location under **Player** cursor<br/><br/>

    - equivalent to command `k.spawnAnimalAtCursor <animalID> 1`<br/><br/><br/><br/>


- k.spawnAnimalAtCursor &nbsp;&nbsp; \<animalID> &nbsp; \<amount>
    - Spawn <ins>amount</ins> animal identified by given <ins>animalID</ins> to location under **Player** cursor<br/><br/>

    - **animalID**
        - "sheep"
        - "lamb"
        - "ox"
        - "oxen"
        - "horse"
        - "mule"<br/><br/>

    - <ins>amount</ins> is capped at 512 for safety reasons<br/><br/><br/><br/>


- k.addItemToSelectedBuildings &nbsp;&nbsp; \<itemID> &nbsp; \<amount>
    - Increase / Decrease / Spawn **Item** identified by <ins>itemID</ins> by <ins>amount</ins><br/><br/>

    - equivalent to command: `k.addResourceToSelectedBuildings <itemID> <amount>`<br/><br/><br/><br/>


- k.addResourceToSelectedBuildings &nbsp;&nbsp; \<itemID> &nbsp; \<amount>
    - Increase / Decrease / Spawn **Item** identified by <ins>itemID</ins> by <ins>amount</ins><br/><br/>

    - "selected buildings" is the building you select (building panel open), pin multiple to select multiple building<br/><br/>

    - <ins>itemID</ins>
        - Items: [DT_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/NotStronghold/Data/DT_Items.json)
        - Items translation: [DT_Translation_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/Translation/HoodedHorse/DT_Translation_Items.json)<br/><br/>

    - example usage:

        - 100 Planks (17)
            - ![Screenshot_136](https://github.com/user-attachments/assets/a9c326fc-3f28-47d0-b750-57db26c08739)
            - `k.addResourceToSelectedBuildings 17 100`<br/><br/>
        - 50 Firewood (216)
            - ![Screenshot_138](https://github.com/user-attachments/assets/702f2f78-5999-402d-b09a-555c9879714f)
            - `k.addResourceToSelectedBuildings 216 50`<br/><br/><br/><br/>



- k.demolishSelectedBuildings
    - Demolish **Player** selected building(s), and refund the construction cost<br/><br/>

    - equivalent to command `k.demolishSelectedBuildings true`<br/><br/><br/><br/>


- k.demolishSelectedBuildings &nbsp;&nbsp; \<refund>
    - Demolish **Player** selected building(s), optionally <ins>refund</ins> the construction cost<br/><br/>


- k.placeHomelessTent
    - Allows you to place the **Homeless People Tent**<br/><br/>

    - can be used for `k.spawnNewFamily` command<br/><br/><br/><br/>


- k.putOutFireForRegionBuildings
    - Put out **Fire** for any buildings in **current region**<br/><br/>


- k.skipMourningForRegionBuildings
    - Skip the **Mourning Period** on any buildings in **current region**<br/><br/>


- k.spawnConstructionResourcesToSelectedBuildings
    - Spawn remaining construction resources to **Player** **selected buildings**


- k.spawnConstructionResourcesToRegionBuildings
    - Spawn remaining construction resources to **current region**


- k.buildInstantly
    - Put the building and instantly finish the construction<br/><br/>


- k.addDepositAtCursor &nbsp;&nbsp; \<typeID> &nbsp; \<amount>
    - Increase / Decrease the remaining amount in **Deposit** identified by <ins>typeID</ins> under **Player** cursor by <ins>amount</ins><br/><br/>

    - **typeID**
        - "iron"
        - "clay"
        - "salt"<br/><br/>

    - example usage:
        - increase salt by 500: `k.addDepositAtCursor salt 500`
        - decrease iron by 500: `k.addDepositAtCursor iron -500`<br/><br/><br/><br/>


- k.markNormalDepositAtCursor &nbsp;&nbsp; \<typeID>
    - Mark Deposit identified by <ins>typeID</ins> under **Player** cursor as **Normal** Deposit<br/><br/>

    - **typeID**
        - "iron"
        - "clay"
        - "salt"<br/><br/><br/><br/>


- k.markRichDepositAtCursor &nbsp;&nbsp; \<typeID>
    - Mark Deposit identified by <ins>typeID</ins> under **Player** cursor as **Rich** Deposit<br/><br/>

    - **typeID**
        - "iron"
        - "clay"
        - "salt"<br/><br/><br/><br/>


- k.spawnDepositAtCursor &nbsp;&nbsp; \<typeID> &nbsp; \<amount>
    - Spawn Deposit identified by <ins>typeID</ins> with <ins>amount</ins> as initial amount to location under **Player** cursor<br/><br/>

    - **typeID**
        - "iron"
        - "clay"
        - "salt"<br/><br/>

    - example usage:
        - spawn iron deposit with 500 as initial amount: `k.spawnDepositAtCursor iron 500`
        - spawn clay deposit with 1000 as initial amount: `k.spawnDepositAtCursor clay 1000`
        - spawn salt deposit with 1500 as initial amount: `k.spawnDepositAtCursor salt 1500`<br/><br/><br/><br/>


- k.removeFishingPondAtCursor
    - Remove **Fishing Pond** under player cursor<br/><br/>


- k.placeFishingPond
    - Allows you to place the **Fishing Pond**<br/><br/>

    - To spawn the **Shoal Of Fish**, see `k.spawnShoalOfFishToFishingPondAtCursor` 
    - To remove, see `k.removeFishingPondAtCursor`<br/><br/><br/><br/>


- k.healDiseaseForRegionResidents
    - Heal all possibly **sick** residents in **current region**<br/><br/>

    - a resident is considered **sick** when their disease level goes over the threshold
    - this command reset the disease level back to 0<br/><br/><br/><br/>


- k.spawnNewFamily
    - Spawn 1 new family to a **Homeless Tent** in **current region**<br/><br/>

    - **warning**: command will fail with a warning if the spawn location is obstructed<br/><br/>

    - equivalent to command: `k.spawnNewFamily 1`<br/><br/><br/><br/>


- k.spawnNewFamily &nbsp;&nbsp; \<amount>
    - Spawn <ins>amount</ins> new family to a **Homeless Tent** in **current region**<br/><br/>

    - **warning**: command will fail with a warning if the spawn location is obstructed<br/><br/>

    - see `k.placeHomelessTent` to place Homeless Tent<br/><br/>

    - <ins>amount</ins> is capped at 512 for safety reasons<br/><br/><br/><br/>


- k.spawnNewFamilyToSelectedTent
    - Spawn 1 new family to a **Homeless Tent** in **current region**<br/><br/>

    - **important**: make sure the space around the tent is not overcrowded
        - otherwise the command will fail and must terminate<br/><br/>

    - equivalent to command: `k.spawnNewFamilyToSelectedTent 1`<br/><br/><br/><br/>


- k.spawnNewFamilyToSelectedTent &nbsp;&nbsp; \<amount>
    - Spawn <ins>amount</ins> new family to a **Player** selected **Homeless Tent**<br/><br/>

    - **warning**: command will fail with a warning if the spawn location is obstructed<br/><br/>

    - see `k.placeHomelessTent` to place Homeless Tent<br/><br/>

    - <ins>amount</ins> is capped at 512 for safety reasons<br/><br/><br/><br/>


- k.spawnNewFamilyMember
    - Spawn 1 new family member to families in **current region**<br/><br/>

    - **warning**: command will fail with a warning if the spawn location is obstructed<br/><br/>

    - equivalent to command: `k.spawnNewFamilyMember 1`<br/><br/><br/><br/>


- k.spawnNewFamilyMember &nbsp;&nbsp; \<amount>
    - Spawn <ins>amount</ins> new family member to families in **current region**<br/><br/>

    - **warning**: command will fail with a warning if the spawn location is obstructed<br/><br/>

    - new family member will be spawned in their home
    - if the family is homeless, then any **Homeless Tent**
    - if no **Homeless Tent** present, then no new family member for the family<br/><br/>

    - see `k.placeHomelessTent` to place Homeless Tent<br/><br/>

    - <ins>amount</ins> is capped at 512 for safety reasons<br/><br/><br/><br/>


- k.setHomeForHoveredUnitFamilyToSelectedBuilding
    - Change the **Home** of the family of the currently hovered unit to **selected building**<br/><br/>


- k.emptyRegionResource &nbsp;&nbsp; \<resID>
    - Empty all resource identified by given <ins>resID</ins> in **current region**<br/><br/>

    - **resID**
        - "berries"
        - "fish"<br/><br/><br/><br/>


- k.makeNonRichFishingPondAtCursor
    - make resources at **Fishing Pond** under **Player Cursor** to be a **non-rich** resource<br/><br/>


- k.makeRichFishingPondAtCursor
    - make resources at **Fishing Pond** under **Player Cursor** to be **rich** resource<br/><br/>


- k.markRichResourceClumpAtCursor &nbsp;&nbsp; \<resID>
    - Mark **Resource Clump** identified by given <ins>resID</ins> at location under **Player Cursor** as **Rich** type resource<br/><br/>

    - **resID**
        - "berries"
        - "stone"<br/><br/><br/><br/>


- k.markNormalResourceClumpAtCursor &nbsp;&nbsp; \<resID>
    - Mark **Resource Clump** identified by given <ins>resID</ins> at location under **Player Cursor** as **Normal** type resource<br/><br/>

    - **resID**
        - "berries"
        - "stone"<br/><br/><br/><br/>


- k.refillRegionResource &nbsp;&nbsp; \<resID>
    - Fill all resource identified by given <ins>resID</ins> in **current region**<br/><br/>

    - **resID**
        - "berries"
        - "fish"<br/><br/><br/><br/>


- k.removeResourceAtCursor &nbsp;&nbsp; \<resID>
    - Remove resource identified by given <ins>resID</ins> under **Player** cursor<br/><br/>

    - **resID**
        - "berries"
        - "stone"
        - "tree"
        - ~~"fish"~~<br/><br/><br/><br/>


- k.removeResourceClumpAtCursor &nbsp;&nbsp; \<resID>
    - Remove resource clump identified by given <ins>resID</ins> under **Player** cursor<br/><br/>

    - **resID**
        - "berries"
        - "stone"
        - "fish"
        - ~~"tree"~~<br/><br/><br/><br/>
        


- k.removeToppledTreeAtCursor
    - Remove toppled tree under **Player** cursor<br/><br/>

    - equivalent to command: `k.removeResourceAtCursor tree`<br/><br/>

    - Cursor should be near the rotation center of the object, a fallen tree (still has branches) center is bottom part, a log center is the middle part.<br/><br/><br/><br/>


- k.spawnResourceAtCursor &nbsp;&nbsp; \<resID>
    - Spawn resource identified by given <ins>resID</ins> to location under **Player** cursor<br/><br/>

    - **resID**
        - "berries"
        - "stone"
        - ~~"tree"~~
        - ~~"fish"~~<br/><br/>

    - **resID="berries"**
        - If the new bush is within 2500cm from existing clump, the bush will join that clump
        - If the new bush is further than 2500cm from existing clump, a new clump will be made at that bush location
        - For reference, that is the length of the **Logging Camp** building<br/><br/>

    - **resID="stone"**
        - If the new stone is within 2500cm from existing clump, the stone will join that clump
        - If the new stone is further than 2500cm from existing clump, a new clump will be made at that stone location
        - For reference, that is the length of the **Logging Camp** building<br/><br/>

    - example usages:
        - berry bush: `k.spawnResourceAtCursor berries`
        - stone chunk: `k.spawnResourceAtCursor stone`<br/><br/><br/><br/>


- k.spawnShoalOfFishToFishingPondAtCursor
    - Spawn **Shoal Of Fish** to **Fishing Pond** at location under **Player Cursor**<br/><br/>


- k.addDevelopmentPoint &nbsp;&nbsp; \<amount>
    - Increase / Decrease **Development Point** by <ins>amount</ins> to **current region**<br/><br/>


- k.addRegionalWealth &nbsp;&nbsp; \<amount>
    - Increase / Decrease **Regional Wealth** by <ins>amount</ins> to **current region**<br/><br/>


- k.setDevelopmentPoint &nbsp;&nbsp; \<amount>
    - Set **Development Point** to <ins>amount</ins> to **current region**<br/><br/>


- k.setRegionalWealth &nbsp;&nbsp; \<amount>
    - Set **Regional Wealth** to <ins>amount</ins> to **current region**<br/><br/>


- k.spawnBanditCamp
    - Spawn new Bandit Camp somewhere on the map<br/><br/>


- k.spawnBanditCampAtCursor
    - Spawn new Bandit Camp at location under **Player** cursor<br/><br/>


- k.spawnRaider
    - Spawn 1 raider somewhere on the map<br/><br/>

    - equivalent to command: `k.spawnRaider 1`<br/><br/><br/><br/>


- k.spawnRaider &nbsp;&nbsp; \<amount>
    - Spawn <ins>amount</ins> raider somewhere on the map<br/><br/>

    - <ins>amount</ins> is capped at 512 for safety reasons<br/><br/><br/><br/>


- k.spawnRaiderRallyAtCursor
    - Spawn 1 raider that will rally at location under **Player** cursor<br/><br/>

    - equivalent to command: `k.spawnRaiderRallyAtCursor 1`<br/><br/><br/><br/>


- k.spawnRaiderRallyAtCursor  &nbsp;&nbsp; \<amount>
    - Spawn <ins>amount</ins> raider that will rally at location under **Player** cursor<br/><br/>

    - <ins>amount</ins> is capped at 512 for safety reasons<br/><br/><br/><br/>


- k.spawnWildAnimalsAtCursor  &nbsp;&nbsp; \<capacity>
    - Spawn a **Wild Animals** at location under **Player** cursor with capacity of <ins>capacity</ins><br/><br/>


- k.removeWildAnimalsAtCursor
    - Remove a **Wild Animals** at location under **Player** cursor<br/><br/>


- k.spawnDeerForWildAnimalsAtCursor  &nbsp;&nbsp; \<amount>
    - Spawn <ins>amount</ins> Deers to **Wild Animals** at location under **Player** cursor<br/><br/>


<br/><br/>
- k.printMiscConsoleCommands
    - Print Misc (Others) Console Commands to the console<br/><br/>


- k.enterCommandsFromFile  &nbsp;&nbsp; \<path>
    - Enter commands listed in the **File** at given <ins>path</ins><br/><br/>

    - <ins>path</ins> must ends with ".txt"
    - <ins>path</ins> may be absolute or relative
    - <ins>path</ins> containing space can be wrapped with double quotes ( " )<br/><br/>

    - commands is **new-line** separated<br/><br/>

    - example usages:
        - relative path:
            - `k.enterCommandsFromFile ue4ss\Mods\MLConsoleCommandsMod\myCommands.txt `<br/><br/>
        - absoulute path:
            - `k.enterCommandsFromFile "D:\SteamLibrary\steamapps\common\Manor Lords\ManorLords\Binaries\Win64\ue4ss\Mods\MLConsoleCommandsMod\myCommands.txt"`<br/><br/><br/><br/>


- k.followUnitAtCursor
    - Follow the Unit currently pointed by **Player** cursor<br/><br/>

    - works on animals as well<br/><br/><br/><br/>


- k.renameUnitAtCursor &nbsp;&nbsp; \<name>
    - Rename the Unit current pointed by **Player** cursor to <ins>name</ins><br/><br/>

    - works on animals as well<br/><br/><br/><br/>


- k.printForeignSupply
    - Print the current state of **Foreign Supply** to the console window<br/><br/>

    - **Foreign Supply** Influence the market price
    - default amount is 500, more supply means lower price, less supply means higher price<br/><br/><br/><br/>


- k.teleportFollowingUnitToCursor
    - Teleport the **Unit** the **Player** currently following to location under the **Player** cursor<br/><br/>


- k.setGameSpeed &nbsp;&nbsp; \<amount>
    - Set the **Game Speed** to <ins>amount</ins><br/><br/>


- k.skipDay
    - Skip 1 day<br/><br/>

    - equivalent to command: `k.skipDay 1`<br/><br/><br/><br/>


- k.skipDay &nbsp;&nbsp; \<amount>
    - Skip <ins>amount</ins> day(s)<br/><br/>


- k.printGameSetup
    - Print the **GameSetup** to the console window<br/><br/>

    - **Game Setup** is the game settings when you start a new game<br/><br/><br/><br/>


- k.gameSetup_setAIAggressivenessIndex &nbsp;&nbsp; \<index>
    - Set the **AI Aggressiveness** index to <ins>index</ins><br/><br/>

    - **index**
        - 0: Reactive
        - 1: Balanced
        - 2: Aggressive<br/><br/>

    - Irrelevant if **Baron Adversary** is Absent<br/><br/><br/><br/>


- k.gameSetup_setApprovalLossIndex &nbsp;&nbsp; \<index>
    - Set the **Approval Loss** index to <ins>index</ins><br/><br/>

    - **index**
        - 0: Low Penalty
        - 1: Medium Penalty
        - 2: High Penalty<br/><br/><br/><br/>


- k.gameSetup_setRaidingFrequencyIndex &nbsp;&nbsp; \<index>
    - Set the **Raiding Frequency** index to <ins>index</ins><br/><br/>

    - **index**
        - 0: None
        - 1: Medium
        - 2: Frequent<br/><br/><br/><br/>


- k.gameSetup_setRandomBanditCampSpawnLimit &nbsp;&nbsp; \<amount>
    - Set the **Random Bandit Camp Spawn Limit** to <ins>amount</ins><br/><br/>

    - <ins>amount</ins> must be within 0 .. 255 inclusive<br/><br/><br/><br/>


- k.gameSetup_setResidentialRequirementIndex &nbsp;&nbsp; \<index>
    - Set the **Residential Requirement** index to <ins>index</ins><br/><br/>

    - **index**
        - 0: Demanding
        - 1: Balanced
        - 2: Tolerant<br/><br/><br/><br/>


- k.gameSetup_setSpoilageIndex &nbsp;&nbsp; \<index>
    - Set the **Spoilage** index to <ins>index</ins><br/><br/>

    - **index**
        - 0: No Spoilage
        - 1: 50% Slower
        - 2: Standard
        - 3: Double Rate<br/><br/><br/><br/>


- k.gameSetup_setWeatherDamageIndex &nbsp;&nbsp; \<index>
    - Set the **Weather Damage** index to <ins>index</ins><br/><br/>

    - **index**
        - 0: None
        - 1: Balanced
        - 2: Difficult<br/><br/><br/><br/>


- k.makeDrought
    - Make Drought occur<br/><br/>

    - Drought progression will be set to at least 10%<br/><br/><br/><br/>


- k.makeDroughtInstantly
    - Make Drought occur instantly<br/><br/>

    - Drought progression will be set to 100%<br/><br/><br/><br/>


- k.makeRain &nbsp;&nbsp; \<damaging>
    - Make Rain occur, damaging: <ins>damaging</ins> <br/><br/>

    - Rain Progression will be set to 10%<br/><br/><br/><br/>


- k.makeRainInstantly &nbsp;&nbsp; \<damaging>
    - Make Rain occur instantly, damaging: <ins>damaging</ins> <br/><br/>

    - Rain Progression will be set to 100%<br/><br/><br/><br/>


- k.skipDrought
    - Skip Drought<br/><br/>


- k.skipDroughtInstantly
    - Skip Drought Instantly<br/><br/>


- k.skipRain
    - Skip Rain <br/><br/>


- k.skipRainInstantly
    - Skip Rain Instantly<br/><br/>


- k.setRainMeter &nbsp;&nbsp; \<amount>
    - Set the **Rain Meter** to <ins>amount</ins><br/><br/>

    - **Rain Meter** is the indicator of possibility of rain
        - threshold varies per season
            - around -20 on **Spring**
            - around -30 on **Summer**
            - around -10 on **Autumn**
        - decrease by 1 every day, if season is winter reset instead.
        - when drought occur usually goes to 40
        - when rain occur usually goes to 8</ins><br/><br/></ins><br/><br/>
