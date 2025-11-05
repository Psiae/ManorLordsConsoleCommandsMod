### Mod Page (v0.1.0-alpha.7-chBeta)

<br/><br/>

[![Patreon](https://i.ibb.co.com/m8qh6Ph/support-me-on-patreon-300x81.png 'Support Me On Patreon')](https://www.patreon.com/Psiae)

<br/><br/>

Consider supporting to keep the mods updated.
- [Patreon](https://www.patreon.com/psiae/membership)
- [Throne](https://throne.com/psiae)
- [YouTube](https://www.youtube.com/@psiaeli)

<br/><br/>

> [!INFO] This page is a backup, better version here: https://psiae.fun/mods/manorlords/mlconsolecommandsmod/chbeta/latest/mod-page


If you have question, ask it in the community discord server: [discord server](https://discord.gg/NTvCTaG6tg)

<br/><br/>

This Mod version is for **Manor Lords** version `0.8.035` (beta)

<br/>

### Please get used to reading
- Whatever you need to get the mod working will be written.
- Specific mod version (and their dependencies) only works  with specific game version, please don't expect otherwise.
- Some commands might not be intuitive to use, we do what we can to get them working with ease of use but sometimes user cooperation is required to get them working as soon as possible.

<br/><br/>

### Dependencies

Dependencies must be installed unless stated otherwise

Optional dependencies may be required to enable certain features.

Make sure to install compatible version, game and mods update rather frequently.

<br/>

1. [RE-UE4SS Mod Loader](https://www.nexusmods.com/manorlords/mods/229)

> [!NOTE]
>
> Required to inject the mod code into the game.
>
> To enable the console window make sure `ConsoleEnablerMod` is enabled.

<br/><br/>

### Recommended Tools
1. [MLToolBox - Mod Manager](https://www.nexusmods.com/manorlords/mods/256)

> [!NOTE]
>
> Recommended to manage your mods.
>
> By the same Author as this Mod.


<br/><br/>

#### Console Window
The **Console Window** is built-in the game and enabled by **RE-UE4SS** `ConsoleEnablerMod`

<br/><br/>
### How To Install:
1. Go to [https://www.nexusmods.com/manorlords/mods/229](https://www.nexusmods.com/manorlords/mods/229).
2. If you don't have **RE-UE4SS Mod Loader** installed, follow the **How To Install** section in that page.
3. Install this mod by following the **How To Install Mod** section in that page.

<br/><br/>

### How To Disable / re-Enable:
- To disable the mod remove or rename the empty enabled.txt File in the mod folder
- To enable the mod again bring back the enabled.txt File again or utilize the Mod Loader file

<br/><br/>

### How To Use:
1. Make sure **RE-UE4SS** `ConsoleEnablerMod` is enabled (enabled by default)
2. In game, open the console using the console keybind (`Tilde (~)` or `F10` or `F8` by default)
    - you can cycle the window mode by pressing the keybind again, `ESC` to close
3. Now you can enter the commands available listed below to use it

<br/><br/>

### Be a responsible mod user
- If you found a bug, please do not report it to the game developer without verifying that you can reproduce the bug on vanilla game.
- Keep in mind that the game is still in early-access.

<br/><br/>

### Available Commands

<br/>

#### `k.printCommands`

> [!NOTE]
>
> Print the print-commands of this mod to the console window.<br/>
>
> The commands are grouped into `Lord`, `Army`, `Region`, and `Misc`.
>
> <br/>
>
> ```How to use:```
> 1. Enter the command
> 2. The commands will be printed to the **Console Window**, make sure the console is **extended** to see them

<br/>

#### `k.printConsoleCommands`

> [!NOTE]
>
> Print the print-commands of this mod to the console window.<br/>
>
> invokes [k.printCommands](#kprintcommands)

<br/>

#### `k.printArmyConsoleCommands`

> [!NOTE]
>
> Print **Army** related console commands to the console window.<br/>
>
> <br/>
>
> `How to use:`
> 1. Enter the command
> 2. The commands will be printed to the **Console Window**, make sure the console is **extended** to see them

<br/>

#### `k.rerollHireMercenaries`

> [!NOTE]
>
> Reroll the list of mercenaries available for hire.<br/>
>
> Reroll (refresh) the available mercenaries in the **Hire Mercenaries** screen.
>
> <br/>
>
> `How to use:`
> 1. Enter the command
> 2. You might need to reopen the screen to see changes

<br/>

#### `k.teleportSelectedSquadsToCursor`

> [!NOTE]
>
> Teleport all selected squads to location under player cursor<br/>
>
>
> <code style="color : orangered">warning:</code> No collision check, select location wisely.<br/>
>
> <code style="color : orangered">warning:</code> You can teleport multiple squad at once, but colliding position will make them stuck.<br/>
>
> `note`: The squads will retain their rally position, reform them to new position otherwise they will walk back
>
> `note:` If unit can barely move try save game and load.
>
> <br/>
>
> `How to use:`
> 1. Select the squads you want to teleport, use the **Army** tab or **Area select**
> 2. Pick a location and hover your mouse cursor over it
> 3. Enter the command
> 4. Squads will be teleported when the game is resumed (not paused)

<br/><br/>

#### `k.printLordConsoleCommands`

> [!NOTE]
>
> Print **Lord** related console command to the console window<br/>
>
> <br/>
>
> `How to use:`
> 1. Enter the command
> 2. The commands will be printed to the **Console Window**, make sure the console is **extended** to see them

<br/>

#### `k.addInfluence <amount>`

> [!NOTE]
>
> Add **Player** Influence by <ins>amount</ins><br/>
>
> `note:` Put negative <ins>amount</ins> to decrease
>
> <br/>
>
> `How to use:`
> 1. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.addInfluence 999`
>
> > `k.addInfluence -999`

<br/>

#### `k.addTreasury <amount>`

> [!NOTE]
>
> Add **Player** Treasury by <ins>amount</ins><br/>
>
> `note:` Put negative <ins>amount</ins> to decrease
>
> <br/>
>
> `How to use:`
> 1. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.addTreasury 999`
>
> > `k.addTreasury -999`

<br/>

#### `k.setInfluence <amount>`

> [!NOTE]
>
> Set **Player** Influence to <ins>amount</ins><br/>
>
> <br/>
>
> `How to use:`
> 1. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.setInfluence 999`
>
> > `k.setInfluence -999`

<br/>

#### `k.setTreasury <amount>`

> [!NOTE]
>
> Set **Player** Treasury to <ins>amount</ins><br/>
>
> <br/>
>
> `How to use:`
> 1. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.setTreasury 999`
>
> > `k.setTreasury -999`

<br/>

#### `k.layClaimOnRegion`

> [!NOTE]
>
> Lay **Region Claim** on **current region**<br/>
>
> `note:` **current region** refer to the **Region** under player view
>
> <br/>
>
> `How to use:`
> 1. Move view to the unclaimed Region
> 2. Enter the command

<br/>


#### `k.finalizeClaimOnAllRegion`

> [!NOTE]
>
> Finalize all **region claim** initiated by the player<br/>
>
> <br/>
>
> `How to use:`
> 1. Enter the command

<br/>

#### `k.finalizeClaimOnRegion`

> [!NOTE]
>
> Finalize **region claim** on **current region** if initiated by the player<br/>
>
> <br/>
>
> `How to use:`
> 1. Move view to the claimed Region
> 2. Enter the command

<br/>

#### `k.printRegionConsoleCommands`

> [!NOTE]
>
> Print **Region** related console commands to the console window<br/>
>
> <br/>
>
> `How to use:`
> 1. Enter the command
> 2. The commands will be printed to the **Console Window**, make sure the console is **extended** to see them

<br/>

#### `k.skipLivestockOrderIntervalForRegion`

> [!NOTE]
>
> Skip the **livestock trading interval** in **current region**<br/>
>
> `note:` **Livestock trading interval** refer to the 30-day cooldown between ordering new Livestock in a Region
>
> `note:` **Current region** refer to the **Region** under player view
>
> <br/>
>
> `How to use:`
> 1. Move view to the target Region
> 2. Enter the command
> 3. You might need to re-open UI to see visual change

<br/>

#### `k.spawnAnimalAtCursor <animalId> <amount>`

> [!NOTE]
>
> Spawn <ins>amount</ins> animal by given <ins>animalId</ins> to location under player cursor<br/>
>
> <code style="color : orangered">warning:</code>
> > `sheep` and `lamb` might not be immediately accommodated due to unavailable space, make sure you have an active **Trading Rule** in the Region
> so the game will accommodate them later.
>
> <br/>
>
> <ins>animalId</ins>:
> > - sheep
> > - lamb
> > - ox
> > - oxen
> > - horse
> > - mule
>
> <br/>
>
> <ins>amount</ins> must be within 1..512
>
> <br/>
>
> `How to use:`
> 1. Pick a location and hover your mouse cursor over it
> 2. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.spawnAnimalAtCursor sheep 10`
> >
> > Spawn 10 sheep
> >
> > They will be immediately accommodated if there is **animal space** available, otherwise make sure you have active **Trading Rule** in your region
>
> > `k.spawnAnimalAtCursor ox 2`
> >
> > Spawn 2 oxen

<br/>

#### `k.spawnAnimalAtCursor <animalId>`

> [!NOTE]
>
> Spawn 1 animal identified by given <ins>animalId</ins> to location under player cursor<br/>
>
> invokes [k.spawnAnimalAtCursor <ins>animalId</ins> 1](#kspawnanimalatcursor-animalid-amount)

<br/>

#### `k.addResourceToSelectedBuildings <itemId> <amount>`

> [!NOTE]
>
> Add **Item** by <ins>itemId</ins> by <ins>amount</ins> to selected buildings<br/>
>
> `note:` Put negative <ins>amount</ins> to decrease
>
> `note:`
> > `Selected buildings` is the building you select (building panel open), pin multiple panel to select multiple building
>
> <br/>
>
> <ins>itemId</ins>:
> >
> > - Items internal: [DT_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Game/v0.8.035/gameassets/Content/NotStronghold/Data/DT_Items.json)
> > - Items translation: [DT_Translation_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Game/v0.8.035/gameassets/Content/Translation/HoodedHorse/DT_Translation_Items.json)
> >
> > `DT_Items.uasset` is mapped by internal name, e.g. `Wood`, `Iron tools`, `Stag Carcass`
> >
> > `DT_Translation_Items.uasset` is mapped by translated name, e.g. `Timber`, `Tools`, `Carcass`
> >
> > If not sure use `DT_Translation_Items.uasset`
>
> <br/>
>
> `How to use:`
> 1. Select the buildings you want to add resource into
> 2. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.addResourceToSelectedBuildings 17 100`
> >
> > add `100` `Planks (itemID_17)`
> >
> > ![Screenshot_136](https://github.com/user-attachments/assets/a9c326fc-3f28-47d0-b750-57db26c08739)
>
> > `k.addResourceToSelectedBuildings 216 -10`
> >
> > remove `10` `Firewood (itemID_216)`
> >
> > ![Screenshot_138](https://github.com/user-attachments/assets/702f2f78-5999-402d-b09a-555c9879714f)

<br/>

#### `k.addItemToSelectedBuildings <itemId> <amount>`

> [!NOTE]
>
> Add **Item** by <ins>itemId</ins> by <ins>amount</ins> to selected buildings<br/>
>
> invokes [k.addResourceToSelectedBuildings <ins>itemId</ins> <ins>amount</ins>](#kaddresourcetoselectedbuildings-itemid-amount)

<br/>

#### `k.demolishSelectedBuildings <refund>`

> [!NOTE]
>
> Demolish player selected buildings, optionally <ins>refund</ins> the construction cost<br/>
>
> `note:`
> > `Selected buildings` is the building you select (building panel open), pin multiple panel to select multiple building
>
> <br/>
>
> `How to use:`
> 1. Select the buildings you want to demolish
> 2. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.demolishSelectedBuildings true`

<br/>

#### `k.demolishSelectedBuildings`
> Demolish player selected buildings, and refund the construction cost<br/>
>
> invokes [k.demolishSelectedBuildings true](#kdemolishselectedbuildings-refund)

<br/>

#### `k.instaBuild`

> [!NOTE]
>
> Toggle **insta build** mode<br/>
>
> `note:` Does not work on **Burgage Plotter**
>
> `note:` Does work on **Castle Planner**
>
> <br/>
>
> `How to use:`
> 1. Enter the command
> 2. If enabled, place a Building Construction or commit the Castle Planner blueprint. It will be constructed instantly
     > without consuming any resources.

<br/>

#### `k.skipMourningForRegionBuildings`

> [!NOTE]
>
> Skip the **Mourning Period** on any buildings in **current region**<br/>
>
> `note:` **Current region** refer to the **Region** under player view
>
> <br/>
>
> `How to use:`
> 1. Move view to the target Region
> 2. Enter the command
> 3. You might need to re-open UI to see visual change

<br/>

#### `k.spawnConstructionResourcesToSelectedBuildings`

> [!NOTE]
>
> Spawn remaining construction resources to player selected buildings<br/>
>
> `note:`
> > `Selected buildings` is the building you select (building panel open), pin multiple panel to select multiple building
>
> <br/>
>
> `How to use:`
> 1. Select the buildings you want to spawn construction resources into
> 2. Enter the command

<br/>

#### k.spawnConstructionResourcesToRegionBuildings

> [!NOTE]
>
> Spawn remaining construction resources to buildings in current region<br/>
>
> `note:` **Current region** refer to the **Region** under player view
>
> <br/>
>
> `How to use:`
> 1. Move view to the target Region
> 2. Enter the command
> 3. You might need to re-open UI to see visual change

<br/>

#### `k.addDepositAtCursor <depositId> <amount>`

> [!NOTE]
>
> Add <ins>amount</ins> to deposit by <ins>depositId</ins> at location under player cursor<br/>
>
> `note:`
> > **Stone** deposit is unlimited hence not included.
> >
> > To spawn stone above the deposit see [k.spawnResourceAtCursor](#kspawnResourceAtCursor-resId)
>
> <br/>
>
> <ins>depositId</ins>:
> > - iron
> > - clay
> > - salt
>
> <br/>
>
> `How to use:`
> 1. Pick the deposit you want to add <ins>amount</ins> into
> 2. Hover your mouse cursor over it
> 3. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.addDepositAtCursor iron 500`
>
> > `k.addDepositAtCursor iron -500`

<br/>

#### `k.markNormalDepositAtCursor <depositId>`

> [!NOTE]
>
> Mark deposit by <ins>depositId</ins> at location under player cursor as **Normal** type deposit<br/>
>
> `note:`
> > When **Stone** deposit is marked normal, the underground deposit is made unavailable
>
> <br/>
>
> <ins>depositId</ins>:
> > - iron
> > - clay
> > - salt
> > - stone
>
> <br/>
>
> `How to use:`
> 1. Pick the deposit you want to mark as normal
> 2. Hover your mouse cursor over it
> 3. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.markNormalDepositAtCursor iron`

<br/>

#### `k.markRichDepositAtCursor <depositID>`

> [!NOTE]
>
> Mark deposit by <ins>depositId</ins> at location under player cursor as **Rich** type deposit<br/>
>
> `note:`
> > When **Stone** deposit is marked rich, the underground deposit is made available
>
> <br/>
>
> <ins>depositId</ins>:
> > - iron
> > - clay
> > - salt
> > - stone
>
> <br/>
>
> `How to use:`
> 1. Pick the deposit you want to mark as rich
> 2. Hover your mouse cursor over it
> 3. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.markRichDepositAtCursor iron`

<br/>

#### `k.removeDepositAtCursor <depositID>`

> [!NOTE]
>
> Remove deposit by <ins>depositId</ins> at location under player cursor<br/>
>
> <code style="color : orangered">warning:</code>
> > Pause the game while removing deposit, save and load the game when done
>
> `note:`
> > If a stone chunk still exist above the **Stone** deposit then it will be marked as non-rich instead
>
> <br/>
>
> <ins>depositId</ins>:
> > - iron
> > - clay
> > - salt
> > - stone
>
> <br/>
>
> `How to use:`
> 1. Pause the game
> 2. Pick the deposit you want to remove
> 3. Hover your mouse cursor over it
> 4. Enter the command
> 5. You may spawn/remove other deposit or resource or wild animals while paused
> 6. Save and load the game
>
> <br/>
>
> `Example usage:`
> > `k.removeDepositAtCursor iron`

<br/>

#### `k.spawnDepositAtCursor <depositId> <amount>`

> [!NOTE]
>
> Spawn deposit by <ins>depositId</ins> at location under player cursor<br/>
>
> <code style="color : orangered">warning:</code>
> > Pause the game while spawning deposit, save and load the game when done
>
> `note:`
> > Stone deposit is always **Rich**
>
> <br/>
>
> <ins>depositId</ins>:
> > - iron
> > - clay
> > - salt
> > - stone
>
> <br/>
>
> `How to use:`
> 1. Pause the game
> 2. Pick the location you want to spawn deposit at
> 3. Hover your mouse cursor over it
> 4. Enter the command
> 5. You may spawn/remove other deposit or resource or wild animals while paused
> 6. Save and load the game
>
> <br/>
>
> `Example usage:`
> > `k.spawnDepositAtCursor iron 500`
>
> > `k.spawnDepositAtCursor stone 1`

<br/>

#### `k.boopMode`

> [!NOTE]
>
> Toggle boop mode<br/>
>
> Boop mode is used to manually reset the task of a unit, if they are stuck this might help them to move somewhere else.
>
> <br/>
>
> `How to use:`
> 1. Enter the command
> 2. Click on any unit you want to boop

<br/>

#### `k.emptyRegionResource <resId>`

> [!NOTE]
>
> Empty all resource by given <ins>resId</ins> in **current region**<br/>
>
> `note:`
> > **Stone** cannot replenish hence not included
> > To remove stone see [k.removeResourceAtCursor \resId](#kremoveresourceatcursor-resid)
> >
>
> <br/>
>
> <ins>resId</ins>:
> > - berries
> > - fish
> > - mushroom
> > - eel
>
> <br/>
>
> `How to use:`
> 1. Move view to the target Region
> 2. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.emptyRegionResource berries`

<br/>

#### `k.markNormalResourceClumpAtCursor <resId>`

> [!NOTE]
>
> Mark resource clump by <ins>resId</ins> at location under player cursor as **Normal** type resource<br/>
>
> `note:`
> > When **Stone** is not rich, their underground deposit is made unavailable
>
> <br/>
>
> <ins>resId</ins>:
> > - berries
> > - mushroom
> > - stone
>
> <br/>
>
> `How to use:`
> 1. Pick the resource clump
> 2. Hover your mouse cursor over it
> 3. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.markNormalResourceClumpAtCursor berries`

<br/>

#### `k.markRichResourceClumpAtCursor <resId>`

> [!NOTE]
>
> Mark resource clump by <ins>depositId</ins> at location under player cursor as **Rich** type resource<br/>
>
> `note:`
> > When **Stone** is rich, their underground deposit is made available
>
> <br/>
>
> <ins>resId</ins>:
> > - berries
> > - mushroom
> > - stone
>
> <br/>
>
> `How to use:`
> 1. Pick the resource clump
> 2. Hover your mouse cursor over it
> 3. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.markRichResourceClumpAtCursor berries`

<br/>

#### `k.refillRegionResource <resId>`

> [!NOTE]
>
> Refill all resource by given <ins>resId</ins> in **current region**<br/>
>
> `note:`
> > **Stone** cannot replenish hence not included
> >
> > To spawn stone see [k.spawnResourceAtCursor \<resId>](#kspawnresourceatcursor-resid)
>
> <br/>
>
> <ins>resId</ins>\:
> > - berries
> > - fish
> > - mushroom
> > - eel
>
> <br/>
>
> `How to use:`
> 1. Move view to the target Region
> 2. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.refillRegionResource berries`

<br/>

#### `k.removeResourceAtCursor <resId>`

> [!NOTE]
>
> Remove resource by given <ins>resId</ins> at location under player cursor<br/>
>
> <code style="color : orangered">warning:</code>
> > Pause the game while removing resource, save and load the game when done
>
> `note:`
> > When **Stone** is rich, their underground deposit will stay
>
> <br/>
>
> <ins>resId</ins>:
> > - berries
> > - mushroom
> > - stone
>
> <br/>
>
> `How to use:`
> 1. Pause the game
> 2. Pick the resource
> 3. Hover your mouse cursor over it
> 4. Enter the command
> 5. You may spawn/remove other deposit or resource or wild animals while paused
> 6. Save and load the game
>
> <br/>
>
> `Example usage:`
> > `k.removeResourceAtCursor berries`
>

<br/>

#### `k.spawnResourceAtCursor <resId>`

> [!NOTE]
>
> Spawn resource by given <ins>resId</ins> at location under player cursor<br/>
>
> <code style="color : orangered">warning:</code>
> > Pause the game while spawning resource, save and load the game when done
>
> `note:`
> > The resource capacity depends on whether the resource node is **Rich**
>
> `note:`
> > If there is an existing resource node with the same <ins>resId</ins> within **23 meter** then the spawned resource
> will join the **resource clump** within that node.
> > Else a new resource node will be spawned at that location
>
>
> <br/>
>
> <ins>resId</ins>:
> > - berries
> > - mushroom
> > - stone
>
> <br/>
>
> `How to use:`
> 1. Pause the game
> 2. Pick the location to spawn the resource at
> 3. Hover your mouse cursor over it
> 4. Enter the command
> 5. You may spawn/remove other deposit or resource or wild animals while paused
> 6. Save and load the game
>
> <br/>
>
> `Example usage:`
> > `k.spawnResourceAtCursor berries`
>

<br/>

#### `k.addRegionalWealth <amount>`

> [!NOTE]
>
> Add **Regional Wealth** by <ins>amount</ins> to **current region**<br/>
>
> `note:` Put negative <ins>amount</ins> to decrease
>
> <br/>
>
> `How to use:`
> 1. Move view to the target Region
> 2. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.addRegionalWealth 999`
>
> > `k.addRegionalWealth -999`

<br/>

### `k.setRegionalWealth <amount>`

> [!NOTE]
>
> Set **Regional Wealth** to <ins>amount</ins> to **current region**<br/>
>
> `How to use:`
> 1. Move view to the target Region
> 2. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.setRegionalWealth 999`
>
> > `k.setRegionalWealth -999`

<br/>

#### `k.spawnBanditCamp`

> [!NOTE]
>
> Spawn new Bandit Camp somewhere on the map<br/>
>
> `How to use:`
> 1. Enter the command

<br/>

#### `k.spawnBanditCampAtCursor`

> [!NOTE]
>
> Spawn new Bandit Camp at location under player cursor<br/>
>
> `How to use:`
> 1. Pick a location to spawn the bandit camp at
> 2. Hover your mouse cursor over it
> 3. Enter the command

<br/>

#### `k.spawnRaiderRallyAtCursor <amount>`

> [!NOTE]
>
> Spawn <ins>amount</ins> group of raider that will rally at location under player cursor<br/>
>
> `note:` The raider will spawn at nearest border from the rally position
>
> <br/>
>
> <ins>amount</ins> must be within 1..512
>
> <br/>
>
> `How to use:`
> 1. Pick a location for the rally position
> 2. Hover your mouse cursor over it
> 3. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.spawnRaiderRallyAtCursor 1`

<br/>

#### `k.spawnRaiderRallyAtCursor`

> [!NOTE]
>
> Spawn 1 group of raider that will rally at location under **Player** cursor<br/><br/>
>
> Invokes [k.spawnRaiderRallyAtCursor 1](#kspawnraiderrallyatcursor-amount)

<br/>

#### `k.addCapacityToWildAnimalsAtCursor <amount>`

> [!NOTE]
>
> Add capacity to **Wild Animals** under player cursor by <ins>amount</ins><br/>
>
> `note:` Put negative <ins>amount</ins> to decrease
>
> `note:` Resulting capacity is coerced within 1..1024
>
> <br/>
>
> `How to use:`
> 1. Pick a Wild Animals to add capacity into
> 2. Hover your mouse cursor over it
> 3. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.addCapacityToWildAnimalsAtCursor 20`
>
> > `k.addCapacityToWildAnimalsAtCursor -20`

<br/>

#### `k.breedWildAnimalsAtCursor`

> [!NOTE]
>
> Breed the animals in **Wild Animals** under player cursor<br/>
>
> `How to use:`
> 1. Pick a Wild Animals to breed
> 2. Hover your mouse cursor over it
> 3. Enter the command

<br/>

#### `k.markNormalWildAnimalsAtCursor`

> [!NOTE]
>
> Mark **Wild Animals** at location under player cursor as **Normal** type<br/>
>
> `How to use:`
> 1. Pick a Wild Animals to mark as Normal
> 2. Hover your mouse cursor over it
> 3. Enter the command

<br/>

#### `k.markRichWildAnimalsAtCursor`

> [!NOTE]
>
> Mark **Wild Animals** at location under player cursor as **Rich** type<br/>
>
> `How to use:`
> 1. Pick a Wild Animals to mark as Rich
> 2. Hover your mouse cursor over it
> 3. Enter the command

<br/>

#### `k.removeRichWildAnimalsAtCursor`

> [!NOTE]
>
> Remove **Wild Animals** at location under Player cursor<br/>
>
> <code style="color : orangered">warning:</code>
> > Pause the game while removing Wild Animals, save and load the game when done
>
> <br/>
>
> `How to use:`
> 1. Pause the game
> 2. Pick the Wild Animals to remove
> 3. Hover your mouse cursor over it
> 4. Enter the command
> 5. You may spawn/remove other deposit or resource or wild animals while paused
> 6. Save and load the game

<br/>

#### `k.spawnWildAnimalsAtCursor <capacity>`

> [!NOTE]
>
> Spawn **Wild Animals** with <ins>capacity</ins> at location under player cursor<br/>
>
> <code style="color : orangered">warning:</code>
> > Pause the game while spawning Wild Animals, save and load the game when done
>
> `Requires`:
> >At least **1** existing **Wild Animals** to breed from<br/>
>
> <br/>
>
> <ins>capacity</ins> must be within 1..1024
>
> <br/>
>
> `How to use:`
> 1. Pause the game
> 2. Pick the location to spawn
> 3. Hover your mouse cursor over it
> 4. Enter the command
> 5. You may spawn/remove other deposit or resource or wild animals while paused
> 6. Save and load the game
>
> <br/>
>
> `Example usage:`
> > `k.spawnWildAnimalsAtCursor 20`

<br/>

#### `k.printMiscConsoleCommands`

> [!NOTE]
>
> Print Misc (others) console commands to the console window<br/>
>
> <br/>
>
> `How to use:`
> 1. Enter the command
> 2. The commands will be printed to the **Console Window**, make sure the console is **extended** to see them

<br/>

#### `k.enterCommandsFromFile <path>`

> [!NOTE]
>
> Enter commands listed in the **File** at given <ins>path</ins><br/>
>
> `note:` commands is **new-line** separated
>
> <ins>path</ins> must ends with ".txt"
>
> <ins>path</ins> may be absolute or relative
>
> <ins>path</ins> containing space can be wrapped with double quotes ( " )<br/><br/>
>
> <br/>
>
> `How to use:`
> 1. Enter the command
>
> <br/>
>
> `Example usage:`
> > relative path:
> >
> > `k.enterCommandsFromFile ue4ss/Mods/MLConsoleCommandsMod/myCommands.txt `<br/>
>
> > absoulute path:
> >
> > `k.enterCommandsFromFile "D:/Spaced Dir/SteamLibrary/steamapps/common/Manor Lords/ManorLords/Binaries/Win64/ue4ss/Mods/MLConsoleCommandsMod/myCommands.txt"`

<br/>

#### `k.followUnitAtCursor`

> [!NOTE]
>
> Follow the Unit currently pointed by **Player** cursor<br/>
>
> `note:` work on animals
>
> <br/>
>
> `How to use:`
> 1. Pick the unit to follow
> 2. Point your cursor to it
> 3. Enter the command

<br/>

#### `k.makeDrought`

> [!NOTE]
>
> Begin drought<br/>
>
> Drought progression will be set to at least 10%
>
> <br/>
>
> `How to use:`
> 1. Enter the command

<br/>

#### `k.makeDroughtInstantly`

> [!NOTE]
>
> Begin drought instantly<br/>
>
> Drought progression will be set to 100%
>
> <br/>
>
> `How to use:`
> 1. Enter the command

<br/>

#### `k.makeRain <isDamaging>`

> [!NOTE]
>
> Begin rain, <ins>isDamaging</ins><br/>
>
> Rain progression will be set to at least 10%
>
> <ins>isDamaging</ins>: Whether the rain is damaging, else soak<br/>
>
> <br/>
>
> `How to use:`
> 1. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.makeRain true`

<br/>

#### `k.makeRain`

> [!NOTE]
>
> Begin rain, not damaging<br/>
>
> Invokes [k.makeRain false](#kmakeRain-isdamaging)

<br/>

#### `k.makeRainInstantly <isDamaging>`

> [!NOTE]
>
> Begin rain instantly, <ins>isDamaging</ins><br/>
>
> Rain progression will be set to 100%
>
> <ins>isDamaging</ins>: Whether the rain is damaging, else soak<br/>
>
> <br/>
>
> `How to use:`
> 1. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.makeRainInstantly true`

<br/>

#### `k.makeRainInstantly`

> [!NOTE]
>
> Begin rain, instantly, not damaging<br/>
>
> Invokes [makeRainInstantly false](#kmakeRainInstantly-isdamaging)

<br/>

#### `k.renameUnitAtCursor <name>`

> [!NOTE]
>
> Rename the Unit current pointed by player cursor to <ins>name</ins><br/>
>
> `note:` work on animals
>
> <ins>name</ins> containing space can be wrapped with double quotes ( " )
>
> <br/>
>
> `How to use:`
> 1. Pick the unit to rename
> 2. Point your cursor to it
> 3. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.renameUnitAtCursor "cuntz"`
>
> > `k.renameUnitAtCursor "cuntz the farmer"`

<br/>

#### `k.skipDrought`

> [!NOTE]
>
> Skip Drought<br/>
>
> Drought will start progressing back to 0%<br/>
>
> <br/>
>
> `How to use:`
> 1. Enter the command

<br/>

#### `k.skipDroughtInstantly`

> [!NOTE]
>
> Skip Drought Instantly<br/>
>
> Drought progression will be set to 0%<br/>
>
> <br/>
>
> `How to use:`
> 1. Enter the command

<br/>

#### `k.skipRain`

> [!NOTE]
>
> Skip Rain <br/>
>
> Rain will start progressing back to 0%<br/>
>
> <br/>
>
> `How to use:`
> 1. Enter the command

<br/>

#### `k.skipRainInstantly`

> [!NOTE]
>
> Skip Rain Instantly<br/>
>
> Rain progression will be set to 0%<br/>
>
> <br/>
>
> `How to use:`
> 1. Enter the command

<br/>

#### `k.printForeignSupply`

> [!NOTE]
>
> Print the current state of **Foreign Supply** to the console window<br/>
>
>  **Foreign Supply** Influence the market price
>
>   Default amount is 500, more supply means lower price, less supply means higher price<br/>
>
> <br/>
>
> `How to use:`
> 1. Enter the command
> 2. The commands will be printed to the **Console Window**, make sure the console is **extended** to see them

<br/>

#### `k.setGameSpeed <amount>`

> [!NOTE]
>
> Set the **Game Speed** to <ins>amount</ins><br/>
>
> <ins>amount</ins> must be an integer
>
> <ins>amount</ins> cannot be negative
>
> If you need more granular speed such as `0.5` see [slomo](#slomo-amount)
>
> <br/>
>
> `How to use:`
> 1. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.setGameSpeed 24`

<br/>

#### `k.skipDay <amount>`

> [!NOTE]
>
> Skip <ins>amount</ins> day(s)<br/>
>
> Forward the date / calendar, is **not** a fast-forward, useful for quickly testing stuff that happen every certain day.<br/>
>
> <br/>
>
> `How to use:`
> 1. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.skipDay 30`

<br/>

#### `k.skipDay`

> [!NOTE]
>
> Skip 1 day<br/>
>
> Invokes [k.skipDay 1](#kskipday-amount)

<br/><br/>

### Built-in commands
You can use these commands if you have the console window open, even without this mod.<br/><br/>


#### `stat FPS`

> [!NOTE]
>
> Toggle the Engine FPS counter<br/>
>
> <br/>
>
> `How to use:`
> 1. Enter the command

<br/>

#### `stat Unit`

> [!NOTE]
>
> Toggle the Engine metrics counter<br/>
>
> <br/>
>
> `How to use:`
> 1. Enter the command

<br/>

#### `toggleDebugCamera`

> [!NOTE]
>
> Enter the debug camera mode (free look)<br/>
>
> <code style="color: orangered">warning:</code>
> > You can not toggle out
>
> <br/>
>
> `How to use:`
> 1. Enter the command

<br/><br/>

#### `slomo <amount>`

> [!NOTE]
>
> Speed up/down time passed in game by <ins>amount</ins> times<br/>
>
> [Slomo Docs](https://dev.epicgames.com/documentation/en-us/unreal-engine/BlueprintAPI/CheatManager/Slomo)
>
> <code style="color: orangered">warning:</code>
> > Includes panning speed and first-person walk speed
>
> <ins>amount</ins> may be a fraction
>
> <br/>
>
> `How to use:`
> 1. Enter the command
>
> <br/>
>
> `Example usage:`
> > `slomo 0.5`
>
> > `slomo 48`

<br/>

#### ~~shot~~

> [!NOTE]
>
>  ~~Takes screenshot ignoring HUD~~
>    - note: broken in UE 5.5<br/><br/>

<br/>

#### `t.maxFps <amount>`

> [!NOTE]
>
> Set the maximum FPS to <ins>amount</ins><br/>
>
> <br/>
>
> `How to use:`
> 1. Enter the command
>
> <br/>
>
> `Example usage:`
> > `t.maxFps 99`

<br/>


#### `addGood <itemId>`

> [!NOTE]
>
> Add some amount of items by <ins>itemId</ins> to your settlement<br/>
>
> <ins>itemId</ins>:
> > - Items internal: [DT_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Game/v0.8.035/gameassets/Content/NotStronghold/Data/DT_Items.json)
> > - Items translation: [DT_Translation_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Game/v0.8.035/gameassets/Content/Translation/HoodedHorse/DT_Translation_Items.json)
> >
> > `DT_Items.uasset` is mapped by internal name, e.g. `Wood`, `Iron tools`, `Stag Carcass`
> >
> > `DT_Translation_Items.uasset` is mapped by translated name, e.g. `Timber`, `Tools`, `Carcass`
> >
> > If not sure use `DT_Translation_Items.uasset`
>
> <br/>
>
> `How to use:`
> 1. Enter the command
>
> <br/>
>
> `Example usage:`
> > `k.addGood 17`
> >
> > add some Planks
> >
> > ![Screenshot_136](https://github.com/user-attachments/assets/a9c326fc-3f28-47d0-b750-57db26c08739)

<br/>

#### plenty

> [!NOTE]
>
> Add plenty of essential item to your settlement<br/>
>
> `How to use:`
> 1. Enter the command
>