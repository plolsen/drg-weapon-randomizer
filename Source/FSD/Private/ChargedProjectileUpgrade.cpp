#include "ChargedProjectileUpgrade.h"
#include "Templates/SubclassOf.h"

class AActor;
class AFSDPlayerState;
class AItem;

FUpgradeValues UChargedProjectileUpgrade::GetUpgradedValue(TSubclassOf<AItem> Item, TSubclassOf<AActor> upgradedActor, AFSDPlayerState* Player, EChargedProjectileUpgrades NewUpgradeType) {
    return FUpgradeValues{};
}

UChargedProjectileUpgrade::UChargedProjectileUpgrade() {
    this->upgradeType = EChargedProjectileUpgrades::ExplodesOnDamage;
    this->ProjectileClass = NULL;
}

