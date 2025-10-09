enum class EAmbienceType {
    None = 0,
    ForestBirds = 1,
    FieldBirds = 2,
    ForestWinter = 3,
    FieldWinter = 4,
    VillageSpring = 5,
    VillageWinter = 6,
    TownSpring = 7,
    TownWinter = 8,
    CombatLarge = 9,
    CombatSmall = 10,
    Unrest = 11,
    Plague = 12,
    RiverSpring = 13,
    RiverWinter = 14,
    Sea = 15,
    Drought = 16,
    Night = 17,
    EAmbienceType_MAX = 18,
};

enum class EAnimMode {
    Work = 0,
    Combat = 1,
    Mounted = 2,
    Custom = 3,
    EAnimMode_MAX = 4,
};

enum class EApprovalFactorType {
    hunger = 0,
    starvation = 1,
    cold = 2,
    freezing = 3,
    death = 4,
    homelessness = 5,
    missingMarketFood = 6,
    missingMarketFirewood = 7,
    missingMarketCloth = 8,
    missingMarketLeather = 9,
    noWaterAccess = 10,
    missingChurch = 11,
    foodVarietyGood = 12,
    churchLevelGood = 13,
    clothSuppliesGood = 14,
    lowApproval = 15,
    drinking = 16,
    unemployment = 17,
    patrols = 18,
    administration = 19,
    no_administration = 20,
    hardship = 21,
    missingEntertainment = 22,
    unburied = 23,
    taxation = 24,
    EApprovalFactorType_MAX = 25,
};

enum class EAttackMethod {
    Mixed = 0,
    Slash = 1,
    Stab = 2,
    EAttackMethod_MAX = 3,
};

enum class EBehaviourStance {
    Neutral = 0,
    Aggressive = 1,
    Defensive = 2,
    EBehaviourStance_MAX = 3,
};

enum class EBuildingFunction {
    Default = 0,
    Residential = 1,
    Manor = 2,
    Stall = 3,
    Church = 4,
    Granary = 5,
    Warehouse = 6,
    Temporary = 7,
    WaterSource = 8,
    Tradepoint = 9,
    Pasture = 10,
    Stable = 11,
    Field = 12,
    Landscape = 13,
    Trader = 14,
    Market = 15,
    Tavern = 16,
    EBuildingFunction_MAX = 17,
};

enum class EChallengeStatus {
    Winning = 0,
    Losing = 1,
    Combat = 2,
    Paused = 3,
    EChallengeStatus_MAX = 4,
};

enum class ECinematicEvent {
    Continue = 0,
    GoToSummary = 1,
    ECinematicEvent_MAX = 2,
};

enum class EControlInputMode {
    MouseKeyboard = 0,
    Gamepad = 1,
    Touch = 2,
    EControlInputMode_MAX = 3,
};

enum class ECropType {
    None = 0,
    Wheat = 1,
    Flax = 2,
    Barley = 3,
    Brushwood = 4,
    Vegetables = 5,
    AnimalTraps = 6,
    Rye = 7,
    Herbs = 8,
    Apples = 9,
    ECropType_MAX = 10,
};

enum class ECullDistanceCategory {
    Building = 0,
    Far = 1,
    Mid = 2,
    Close = 3,
    ECullDistanceCategory_MAX = 4,
};

enum class ECursorMode {
    Default = 0,
    Attack = 1,
    Spyglass = 2,
    Grab = 3,
    Missile = 4,
    MixedAttack = 5,
    Torch = 6,
    ECursorMode_MAX = 7,
};

enum class EDiploStatus {
    Peace = 0,
    War = 1,
    Allies = 2,
    Sovereign = 3,
    Vassal = 4,
    EDiploStatus_MAX = 5,
};

enum class EEquipmentSlot {
    Body = 0,
    Weapon = 1,
    Shield = 2,
    Helmet = 3,
    Accessory = 4,
    Bonus = 5,
    Head = 6,
    None = 7,
    EEquipmentSlot_MAX = 8,
};

enum class EGameDifficulty {
    Custom = 0,
    VeryLow = 1,
    Low = 2,
    Medium = 3,
    High = 4,
    VeryHigh = 5,
    EGameDifficulty_MAX = 6,
};

enum class EGameGoals {
    Endless = 0,
    Conquest = 1,
    Growth = 2,
    Dominance = 3,
    EGameGoals_MAX = 4,
};

enum class EGroundCoverCategory {
    Generic = 0,
    Field = 1,
    Forest = 2,
    ForestEdge = 3,
    Dirt = 4,
    FieldAndEdge = 5,
    River = 6,
    EGroundCoverCategory_MAX = 7,
};

enum class EItemCategory {
    None = 0,
    Construction = 1,
    Food = 2,
    Material = 3,
    Commodity = 4,
    Livestock = 5,
    Military = 6,
    Crop = 7,
    Transitionary = 8,
    Special = 9,
    EItemCategory_MAX = 10,
};

enum class ELocomotionStance {
    Default = 0,
    Tool = 1,
    SwordAndShield = 2,
    SpearAndShield = 3,
    TwoHandedWeapon = 4,
    Bow = 5,
    Crossbow = 6,
    FishingRod = 7,
    Cane = 8,
    Bag = 9,
    Handcart = 10,
    Box = 11,
    Bucket = 12,
    Banner = 13,
    BackBasket = 14,
    ELocomotionStance_MAX = 15,
};

enum class EMainUIMode {
    Gameplay = 0,
    Cinematics = 1,
    GameSummary = 2,
    PhotoMode = 3,
    EMainUIMode_MAX = 4,
};

enum class EMarketSupplyCategory {
    Fuel = 0,
    Food = 1,
    Fabrics = 2,
    Clothing = 3,
    EMarketSupplyCategory_MAX = 4,
};

enum class EModuleCategory {
    None = 0,
    Market = 1,
    Manor = 2,
    Monastery = 3,
    EModuleCategory_MAX = 4,
};

enum class ENoticeSquadSetting {
    Nothing = 0,
    SlowGame = 1,
    Pause = 2,
    ENoticeSquadSetting_MAX = 3,
};

enum class EParaPick {
    None = 0,
    MyRegion = 1,
    OthersRegion = 2,
    FreeRegion = 3,
    Resource = 4,
    OthersClaim = 5,
    Amt = 6,
    Time = 7,
    EParaPick_MAX = 8,
};

enum class EParaRequirement {
    None = 0,
    RecipientPressedClaim = 1,
    IPressedClaim = 2,
    HaveEnoughFunds = 3,
    NotHaveEnoughFunds = 4,
    EParaRequirement_MAX = 5,
};

enum class EPathFailReason {
    Unknown = 0,
    NoSourceConnections = 1,
    NoTargetConnections = 2,
    NodeLimitReached = 3,
    AllConnectionsChecked = 4,
    EPathFailReason_MAX = 5,
};

enum class EPlotCollisionCheck {
    None = 0,
    Left = 1,
    Right = 2,
    Either = 3,
    EPlotCollisionCheck_MAX = 4,
};

enum class EPlotType {
    None = 0,
    Field = 1,
    Pasture = 2,
    Residential = 3,
    Market = 4,
    Bailey = 5,
    EPlotType_MAX = 6,
};

enum class EPortraitType {
    Lord = 0,
    Lady = 1,
    Bandit = 2,
    Priest = 3,
    EPortraitType_MAX = 4,
};

enum class EProblem {
    Hunger = 0,
    Cold = 1,
    Jobless = 2,
    NoWorkersEmployed = 3,
    NeedsStorage = 4,
    CropNotChosen = 5,
    NoAssignment = 6,
    WoodenPartsLowQuality = 7,
    Sickness = 8,
    Death = 9,
    IronToolsLow = 10,
    IronToolsBroken = 11,
    NoGoodChosenForSale = 12,
    NoPastureSpace = 13,
    NothingToPlough = 14,
    CantAffordProduce = 15,
    NotEnoughTradeRoutes = 16,
    CantFindStockForSelling = 17,
    Homelessness = 18,
    SpoilingFood = 19,
    CanUpgrade = 20,
    OccasionalNeeds = 21,
    NoSupplies = 22,
    NotEnoughTreasuryToPayTheRoyalTax = 23,
    NoWaterAccess = 24,
    NoSuperfarm = 25,
    NoFields = 26,
    ExtensionsAvailable = 27,
    CantFindResourceToHarvest = 28,
    RoadNotConnected = 29,
    MarketSquareNotConnected = 30,
    OutOfStorageSpace = 31,
    OutOfPantrySpace = 32,
    ExposedStorage = 33,
    ExposedFood = 34,
    OxNoGuide = 35,
    NoGatehouse = 36,
    NoShelter = 37,
    LowApproval = 38,
    RequirementsCausingApprovalLoss = 39,
    NoBuilders = 40,
    NoFreeOxen = 41,
    BadLogistics = 42,
    NoTools = 43,
    NoClothes = 44,
    NoCloaks = 45,
    NoShoes = 46,
    Unburied = 47,
    TransportLimitReached = 48,
    ConstructionResourcesMissing = 49,
    EProblem_MAX = 50,
};

enum class EPushStance {
    GiveGround = 0,
    StandGround = 1,
    Push = 2,
    MissileAlert = 3,
    Balanced = 4,
    EPushStance_MAX = 5,
};

enum class EQuestStatus {
    Active = 0,
    Failed = 1,
    Completed = 2,
    EQuestStatus_MAX = 3,
};

enum class EQueuedEditType {
    AddPP = 0,
    EditPP = 1,
    RemovePP = 2,
    AddObstacle = 3,
    EditObstacle = 4,
    RemoveObstacle = 5,
    AddBorderObstacle = 6,
    EditBorderObstacle = 7,
    RemoveBorderObstacle = 8,
    AddSnapPoint = 9,
    EditSnapPoint = 10,
    RemoveSnapPoint = 11,
    ShiftSquadIDsOver = 12,
    EQueuedEditType_MAX = 13,
};

enum class ERTSTool {
    None = 0,
    EraseShrubs = 1,
    SelectDestinationBuilding = 2,
    ERTSTool_MAX = 3,
};

enum class ERallyingStatus {
    Disbanded = 0,
    Rallying = 1,
    Rallied = 2,
    ERallyingStatus_MAX = 3,
};

enum class EResidentialRequirement {
    Water = 0,
    Food = 1,
    Fuel = 2,
    Commodities = 3,
    Fun = 4,
    Faith = 5,
    EResidentialRequirement_MAX = 6,
};

enum class EResourceStencilValue {
    None = 0,
    Highlight = 254,
    Collides = 253,
    EResourceStencilValue_MAX = 255,
};

enum class ERoadMaterialType {
    Default = 0,
    Start = 1,
    End = 2,
    Short = 3,
    Bridge = 4,
    ERoadMaterialType_MAX = 5,
};

enum class ERoadType {
    Regular = 0,
    Dummy = 1,
    Border = 2,
    Wall = 3,
    Stream = 4,
    ERoadType_MAX = 5,
};

enum class ESettingColorCoding {
    RandomColors = 0,
    PlayerCoded = 1,
    ESettingColorCoding_MAX = 2,
};

enum class ESettlementType {
    None = 0,
    Town = 1,
    FarmingVillage = 2,
    ForestVillage = 3,
    MiningOutpost = 4,
    Outpost = 5,
    ESettlementType_MAX = 6,
};

enum class EShowProgressBarMode {
    AlwaysShow = 0,
    OnlyLvlUp = 1,
    Never = 2,
    EShowProgressBarMode_MAX = 3,
};

enum class ESquadControl {
    Full = 0,
    Engaged = 1,
    Partial = 2,
    Fleeing = 3,
    Encamped = 4,
    ESquadControl_MAX = 5,
};

enum class ESquadType {
    None = 0,
    Militia = 1,
    Mercenaries = 2,
    Retinue = 3,
    Bandits = 4,
    Wildlife = 5,
    Merchants = 6,
    ESquadType_MAX = 7,
};

enum class EStorageType {
    Generic = 0,
    Large = 1,
    Pantry = 2,
    Hidden = 3,
    Any = 4,
    Tavern = 5,
    Church = 6,
    Water = 7,
    EStorageType_MAX = 8,
};

enum class ESurfaceType {
    Grass = 0,
    DirtRoad = 1,
    StoneRoad = 2,
    Water = 3,
    Building = 4,
    ESurfaceType_MAX = 5,
};

enum class ETooltipTint {
    White = 0,
    Yellow = 1,
    Red = 2,
    ETooltipTint_MAX = 3,
};

enum class ETradePartnerLimit {
    None = 0,
    FreeMerchants = 1,
    Local = 2,
    Owned = 3,
    ETradePartnerLimit_MAX = 4,
};

enum class ETradeRule {
    NoTrade = 0,
    Import = 1,
    Export = 2,
    Full = 3,
    ETradeRule_MAX = 4,
};

enum class EUnitRole {
    Husband = 0,
    Wife = 1,
    Son = 2,
    Daughter = 3,
    Retainer = 4,
    Soldier = 5,
    FreeMerchant = 6,
    FreeLivestockMerchant = 7,
    Deer = 8,
    Chicken = 9,
    Sheep = 10,
    Lamb = 11,
    Ox = 12,
    Goat = 13,
    Hound = 14,
    Horse = 15,
    Mule = 16,
    BanditRecruit = 17,
    None = 18,
    Pig = 19,
    EUnitRole_MAX = 20,
};

enum class EUnitTrait {
    Impaling = 0,
    Shieldwall = 1,
    EUnitTrait_MAX = 2,
};

enum class EVictoryStatus {
    Ongoing = 0,
    Lost = 1,
    Victorious = 2,
    EVictoryStatus_MAX = 3,
};

enum class EWIPStatus {
    Full = 0,
    Partial = 1,
    Broken = 2,
    ToDo = 3,
    EWIPStatus_MAX = 4,
};

enum class EWallType {
    None = 0,
    Fence = 1,
    Wooden = 2,
    StoneLow = 3,
    StoneHigh = 4,
    EWallType_MAX = 5,
};

