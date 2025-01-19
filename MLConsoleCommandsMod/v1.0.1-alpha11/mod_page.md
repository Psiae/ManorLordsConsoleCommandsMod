### Mod Page Description (v1.0.1-alpha11)
<br/><br/>


[<img src="https://i.ibb.co.com/m8qh6Ph/support-me-on-patreon-300x81.png">](https://www.patreon.com/Psiae)
<br/><br/>
Consider supporting to keep the mods updated.

<br/><br/>
If you have question, ask it in the community discord server: [discord server](https://discord.gg/NTvCTaG6tg)

#### How To Install:
1. Go To [https://www.nexusmods.com/manorlords/mods/229](https://www.nexusmods.com/manorlords/mods/229).
2. If you doesn't have **RE-UE4SS Mod Loader** installed, follow the **How To Install** section in that page.
3. Install this mod by following the **How To Install Mod** section in that page.

#### How To Disable / re-Enable:
- To disable the mod remove or rename the empty enabled.txt File in the mod folder

- To enable the mod again bring back the enabled.txt File again or utilize the Mod Loader file

#### How To Use:
1. Make sure UE4SS **ConsoleEnablerMod** is enabled (enabled by default)
2. In Game, open the console using the console keybind (F10 or F8 by default)
3. Now you can enter the commands available listed below to use it

#### Be a responsible mod user
- If you found a bug, please do not report it to the game developer without verifying that you can reproduce the bug on vanilla game.
- Keep in mind that the game is still in early-access.

#### Available Commands

- k.printCommands
    - Print the print-commands of this mod to the console window<br/><br/>


- k.printConsoleCommands
    - Print the print-commands of this mod to the console window<br/><br/>


- k.printArmyConsoleCommands
    - Print Army related console commands to the console window <br/><br/>


- k.addMilitiaToRegion &nbsp;&nbsp; <ins>\<militiaID></ins>
    - Add militia by specified <ins>militiaID</ins> to **current region**<br/><br/>

    - <ins>militiaID</ins>: [DT_UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/NotStronghold/Data/DT_UnitTemplates.json)
    - Translation: [DT_Translation.UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/Translation/HoodedHorse/DT_Translation_UnitTemplates.js)<br/><br/>
    - example usage: 
      - Archer Militia (bowMilitia): `k.addMilitiaToRegion bowMilitia`
      - Militia Footmen (militiaFoot): `k.addMilitiaToRegion militiaFoot`<br/><br/>


- k.teleportSelectedSquadsToCursor
    - Teleport Player currently selected squad(s) to the location under Player cursor<br/><br/>


- k.releaseLockedMercenaryPool
    - Release locked mercenaries<br/><br/>

    - You can use this when a Mercenary is not available for hire although not hired by any lord<br/><br/>


- k.rerollHireMercenaries
    - Reroll the list of mercenaries available for hire<br/><br/>


- k.setMercenaryForHireArrivalRegion &nbsp;&nbsp; <ins>\<index></ins>
    - Set the Arrival Region of mercenary-for-hire at given <ins>index</ins> to **current region**<br/><br/>

    - <ins>index</ins> refer to the offset from the first option (card)
      - 1st card <ins>index</ins> is 0 
      - 2nd card <ins>index</ins> is 1
      - 3rd card <ins>index</ins> is 2


- k.setMercenaryForHireCost &nbsp;&nbsp; <ins>\<index></ins> &nbsp; <ins>\<amount></ins>
    - Set the Cost of mercenary-for-hire at given <ins>index</ins> to <ins>amount</ins><br/><br/>

    - <ins>index</ins> refer to the offset from the first option (card)
      - 1st card <ins>index</ins> is 0
      - 2nd card <ins>index</ins> is 1
      - 3rd card <ins>index</ins> is 2<br/><br/>

    - <ins>amount</ins> must be at least 1
      - otherwise the UI will break<br/><br/>


- k.retinueEditor_setArmorByID &nbsp;&nbsp; <ins>\<ID></ins>
    - Set the Armor of currently selected Retainer in the Retinue Editor<br/><br/>

    - <ins>ID</ins> the id of the armor
      - Templates: [DT_UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/NotStronghold/Data/DT_UnitTemplates.json)
      - Templates translation: [DT_Translation_UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/Translation/HoodedHorse/DT_Translation_UnitTemplates.json)
      - Items: [DT_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/NotStronghold/Data/DT_Items.json)
      - Items translation: [DT_Translation_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/Translation/HoodedHorse/DT_Translation_Items.json)<br/><br/>

    - example usage: 
      -  Retinue Tier 3 Armor (293): `k.retinueEditor_setArmorByID 293`<br/><br/>


- k.retinueEditor_setHelmetByID &nbsp;&nbsp; <ins>\<ID></ins>
    - Set the Helmet of currently selected Retainer in the Retinue Editor<br/><br/>

    - <ins>ID</ins> the id of the helmet
        - Templates: [DT_UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/NotStronghold/Data/DT_UnitTemplates.json)
        - Templates translation: [DT_Translation_UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/Translation/HoodedHorse/DT_Translation_UnitTemplates.json)
        - Items: [DT_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/NotStronghold/Data/DT_Items.json)
        - Items translation: [DT_Translation_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/Translation/HoodedHorse/DT_Translation_Items.json)<br/><br/>

    - example usage:
        -  Retinue Tier 3 Helmet (294): `k.retinueEditor_setHelmetByID 294`<br/><br/>


- k.retinueEditor_setShieldByID &nbsp;&nbsp; <ins>\<ID></ins>
    - Set the Shield of currently selected Retainer in the Retinue Editor<br/><br/>

    - <ins>ID</ins> the id of the shield (secondary weapon)
        - Templates: [DT_UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/NotStronghold/Data/DT_UnitTemplates.json)
        - Templates translation: [DT_Translation_UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/Translation/HoodedHorse/DT_Translation_UnitTemplates.json)
        - Items: [DT_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/NotStronghold/Data/DT_Items.json)
        - Items translation: [DT_Translation_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/Translation/HoodedHorse/DT_Translation_Items.json)<br/><br/>

    - example usage:
        -  Retinue Tier 3 Shield (290): `k.retinueEditor_setShieldByID 290`<br/><br/>


- k.retinueEditor_setWeaponByID &nbsp;&nbsp; <ins>\<ID></ins>
    - Set the Weapon of currently selected Retainer in the Retinue Editor<br/><br/>

    - <ins>ID</ins> the id of the weapon (primary weapon)
        - Templates: [DT_UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/NotStronghold/Data/DT_UnitTemplates.json)
        - Templates translation: [DT_Translation_UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/Translation/HoodedHorse/DT_Translation_UnitTemplates.json)
        - Items: [DT_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/NotStronghold/Data/DT_Items.json)
        - Items translation: [DT_Translation_Items.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/Translation/HoodedHorse/DT_Translation_Items.json)<br/><br/>

    - example usage:
        -  Retinue Tier 3 Sidearm (278): `k.retinueEditor_setWeaponByID 278`
        -  Retinue Tier 3 Polearm (250): `k.retinueEditor_setWeaponByID 250`<br/><br/>