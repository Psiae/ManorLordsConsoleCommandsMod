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


- k.addMilitiaToRegion &nbsp;&nbsp; <militiaID>
    - Add militia by specified <ins>militiaID</ins> to **current region**<br/><br/>

    - <ins>militiaID</ins>: [DT_UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/NotStronghold/Data/DT_UnitTemplates.json)
    - Translation: [DT_Translation.UnitTemplates.uasset](https://github.com/Psiae/ManorLordsConsoleCommandsMod/blob/main/Manor%20Lords%20v0.8.024/gameassets/Translation/HoodedHorse/DT_Translation_UnitTemplates.js)<br/><br/>
    - example usage: 
      - Archer Militia (bowMilitia): `k.addMilitiaToRegion bowMilitia`
      - Militia Footmen (militiaFoot): `k.addMilitiaToRegion militiaFoot`<br/><br/><br/><br/>


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

    - equivalent to command `k.addDaysLeftToChallenges <amount> "player" "null"`<br/><br/><br/><br/>


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

    - equivalent to command `k.finalizeClaimOnAllRegion "player"`<br/><br/><br/><br/>


- k.finalizeClaimOnAllRegion &nbsp;&nbsp; \<lordID>
    - Finalize <ins>lordID</ins> claims on all region<br/><br/>


- k.finalizeClaimOnRegion
    - Finalize **Player** claim on **current region**<br/><br/>

    - equivalent to command `k.finalizeClaimOnRegion "player"`<br/><br/><br/><br/>


- k.finalizeClaimOnRegion &nbsp;&nbsp; \<lordID>
    - Finalize <ins>lordID</ins> claim on **current region**<br/><br/>

    - **lordID**:
      - "player"
          - The player (You)
      - ~~"baron"~~
          - ~~The baron (Hildebolt von Bereneute)~~<br/><br/><br/><br/>


- k.layRegionClaim
    - Lay region claim for **Player** on **current region**<br/><br/>

    - equivalent to command `k.layRegionClaim "player"`<br/><br/><br/><br/>


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