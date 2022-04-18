#include "StandardPriceDecorator.h"

void StandardPriceDecorator::Move(IEntity* entity, double dt) {
    double cost = price_per_sec * dt;
    Wallet wallet = entity->GetWallet();
    if (wallet.getBalance() < cost) {
        // End trip if funds aren't sufficient
        insufficientFunds = true;
    } else {
        wallet.withdraw(cost);
        strategy->Move(entity, dt);
    }
}

bool StandardPriceDecorator::IsCompleted() {
    return strategy->IsCompleted() || insufficientFunds;
}
