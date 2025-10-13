### Mod Page (v0.1.0-alpha.2-chBeta)
<br/><br/>


[<img src="https://i.ibb.co.com/m8qh6Ph/support-me-on-patreon-300x81.png">](https://www.patreon.com/Psiae)
<br/><br/>
Consider supporting to keep the mods updated.
- [Patreon](https://www.patreon.com/psiae/membership)
- [Throne](https://throne.com/psiae)
- [YouTube](https://www.youtube.com/@psiaeli)

<br/><br/>
If you have question, ask it in the community discord server: [discord server](https://discord.gg/NTvCTaG6tg)<br/><br/>

#### How To Install:
1. Go To [https://www.nexusmods.com/manorlords/mods/229](https://www.nexusmods.com/manorlords/mods/229).
2. If you doesn't have **RE-UE4SS Mod Loader** installed, follow the **How To Install** section in that page.
3. Install this mod by following the **How To Install Mod** section in that page.<br/><br/>

#### How To Disable / re-Enable:
- To disable the mod remove or rename the empty enabled.txt File in the mod folder

- To enable the mod again bring back the enabled.txt File again or utilize the Mod Loader file<br/><br/>

#### How To Use:
1. Make sure UE4SS **ConsoleEnablerMod** is enabled (enabled by default)
2. In Game, open the console using the console keybind (Tilde (~) or F10 or F8 by default)
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

    
- k.rerollHireMercenaries
    - Reroll the list of mercenaries available for hire<br/><br/>


- k.teleportSelectedSquadsToCursor
    - Teleport selected squad(s) to location under player cursor<br/><br/>

    - warning: no collision check, select location wisely
      - if unit can barely move try save game and load<br/><br/>
      
    - although you can teleport multiple at once, recommended to only teleport one by one



- k.printLordConsoleCommands
    - Print Lord related console command to the console window<br/><br/>

    
- k.addInfluence &nbsp;&nbsp; \<amount>
    - Increase / Decrease **Player** Influence by <ins>amount</ins><br/><br/>


- k.addTreasury &nbsp;&nbsp; \<amount>
    - Increase / Decrease **Player** Treasury by <ins>amount</ins><br/><br/>
    

- k.addTreasury &nbsp;&nbsp; \<amount>
    - Increase / Decrease **Player** Treasury by <ins>amount</ins><br/><br/>


- k.layClaimOnRegion
    - Lay region claim on **current region**<br/><br/>


- k.finalizeClaimOnAllRegion
    - Finalize all region claim by the player


- k.finalizeClaimOnRegion
    - Finalize region claim on **current region** by player


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
        - Items: [DT_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Game/v0.8.035/gameassets/Content/NotStronghold/Data/DT_Items.json)
        - Items translation: [DT_Translation_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Game/v0.8.035/gameassets/Content/Translation/HoodedHorse/DT_Translation_Items.json)<br/><br/>

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


- k.instaBuild
    - Toggle insta build mode<br/><br/>

    - note: doesn't work on burgage plotter<br/><br/><br/><br/>


- k.skipMourningForRegionBuildings
    - Skip the **Mourning Period** on any buildings in **current region**<br/><br/>
  

- k.spawnConstructionResourcesToSelectedBuildings
    - Spawn construction resources to player selected buildings<br/><br/>


- k.spawnConstructionResourcesToRegionBuildings
    - Spawn construction resources to buildings in **current region**<br/><br/>

    
- k.boopMode
    - Toggle boop mode, might be able to help units that is stuck doing a task<br/><br/>

    
- k.emptyRegionResource &nbsp;&nbsp; \<resID>
    - Empty all resource identified by given <ins>resID</ins> in **current region**<br/><br/>

    - **resID**
        - "berries"
        - "fish"
        - "mushroom"
        - "eel"<br/><br/><br/><br/>

    
- k.refillRegionResource &nbsp;&nbsp; \<resID>
    - Fill all resource identified by given <ins>resID</ins> in **current region**<br/><br/>

    - **resID**
        - "berries"
        - "fish"
        - "mushroom"
        - "eel"<br/><br/><br/><br/>


- k.addRegionalWealth &nbsp;&nbsp; \<amount>
    - Increase / Decrease **Regional Wealth** by <ins>amount</ins> to **current region**<br/><br/>


- k.setRegionalWealth &nbsp;&nbsp; \<amount>
    - Set **Regional Wealth** to <ins>amount</ins> to **current region**<br/><br/>


- k.spawnBanditCamp
    - Spawn new Bandit Camp somewhere on the map<br/><br/>


- k.spawnBanditCampAtCursor
    - Spawn new Bandit Camp on location under player cursor<br/><br/>

    
- k.spawnRaider
    - Spawn 1 raider somewhere on the map<br/><br/>

    - equivalent to command: `k.spawnRaider 1`<br/><br/><br/><br/>

    
- k.spawnRaiderRallyAtCursor
    - Spawn 1 raider that will rally at location under **Player** cursor<br/><br/>

    - equivalent to command: `k.spawnRaiderRallyAtCursor 1`<br/><br/><br/><br/>


- k.spawnRaiderRallyAtCursor  &nbsp;&nbsp; \<amount>
    - Spawn <ins>amount</ins> raider that will rally at location under **Player** cursor<br/><br/>

    - <ins>amount</ins> is capped at 512 for safety reasons<br/><br/><br/><br/>



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


- k.makeDrought
    - Begin drought<br/><br/>

    - Drought progression will be set to at least 10%<br/><br/><br/><br/>


- k.makeDroughtInstantly
    - Begin drought instantly<br/><br/>

    - Drought progression will be set to 100% <br/><br/><br/><br/>


- k.makeRain
    - Begin rain, not damaging<br/><br/>

    - equivalent to `k.makeRain false` <br/><br/><br/><br/>


- k.makeRain &nbsp;&nbsp; \<isDamaging>
    - Begin rain<br/><br/>

    - <ins>isDamaging</ins>: whether the rain is damaging (soak or damage)<br/><br/>
    - Rain progression will be set to at least 10% <br/><br/><br/><br/>
  

- k.makeRainInstantly
    - Begin rain, not damaging, instantly<br/><br/>

    - equivalent to `k.makeRainInstantly false` <br/><br/><br/><br/>


- k.makeRainInstantly &nbsp;&nbsp; \<isDamaging>
    - Begin rain instantly<br/><br/>

    - <ins>isDamaging</ins>: whether the rain is damaging (soak or damage)<br/><br/>
    - Rain progression will be set to 100% <br/><br/><br/><br/>


- k.renameUnitAtCursor &nbsp;&nbsp; \<name>
    - Rename the Unit current pointed by **Player** cursor to <ins>name</ins><br/><br/>

    - works on animals as well<br/><br/><br/><br/>


- k.skipDrought
    - Skip Drought<br/><br/>

    - drought will start progressing back to 0%<br/><br/><br/><br/>

- k.skipDroughtInstantly
    - Skip Drought Instantly<br/><br/>

      - drought progression will be set to 0%<br/><br/><br/><br/>


- k.skipRain
    - Skip Rain <br/><br/>

    - rain will start progressing back to 0%<br/><br/><br/><br/>


- k.skipRainInstantly
    - Skip Rain Instantly<br/><br/>

    - rain progression will be set to 0%<br/><br/><br/><br/>


- k.printForeignSupply
    - Print the current state of **Foreign Supply** to the console window<br/><br/>

    - **Foreign Supply** Influence the market price
    - default amount is 500, more supply means lower price, less supply means higher price<br/><br/><br/><br/>


- k.setGameSpeed &nbsp;&nbsp; \<amount>
    - Set the **Game Speed** to <ins>amount</ins><br/><br/>


- k.skipDay
    - Skip 1 day<br/><br/>

    - equivalent to command: `k.skipDay 1`<br/><br/><br/><br/>


- k.skipDay &nbsp;&nbsp; \<amount>
    - Skip <ins>amount</ins> day(s)<br/><br/>

    - forward the date / calendar, is NOT a fast-forward, useful for quickly testing stuff that happen every certain day.<br/><br/><br/><br/>

### Built-in commands
You can use these commands if you have the console window open, even without this mod.<br/><br/>


- stat FPS
    - Toggle the Engine fps counter<br/><br/>


- stat Unit
    - Toggle the Engine metrics counter<br/><br/>


- toggleDebugCamera
    - Enter the debug camera mode (free look)<br/><br/>

    - warning: you can't toggle out<br/><br/><br/><br/>


- slomo &nbsp;&nbsp; \<amount>
    - Speed up/down all things in-game by <ins>amount</ins><br/><br/>


- shot
    - Takes screenshot ignoring HUD


- t.maxFps &nbsp;&nbsp; \<amount>
    - Set the maximum FPS to <ins>amount</ins><br/><br/>


- addGood &nbsp;&nbsp; \<itemID> &nbsp; \<amount>
    - Add <ins>amount</ins> of items by <ins>itemID</ins> to your settlement<br/><br/>


- plenty
    - Add plenty of essential item to your settlement<br/><br/>

