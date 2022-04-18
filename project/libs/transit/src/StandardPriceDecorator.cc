#include "StandardPriceDecorator.h"

StandardPriceDecorator::StandardPriceDecorator(IStrategy *strategy_, Vector3 pos_, Vector3 des_, IEntity* entity) 
  : PriceDecorator(strategy_, pos_, des_) {
    // Add balance to entity wallet, could probably do this somewhere more elegant
    entity->GetWallet().deposit(500.0);
    std::cout << "Wallet balance of " << entity->GetWallet().getBalance() << std::endl;
    std::cout << "Trip price of " << estimatedPrice << std::endl;
    if (estimatedPrice > entity->GetWallet().getBalance()) {
        std::cout << "Insufficient funds to start trip.";
        insufficientFunds = true;
    }
}

void StandardPriceDecorator::Move(IEntity* entity, double dt) {
    double cost = price_per_sec * dt;
    Wallet wallet = entity->GetWallet();
    std::cout << "Cost of move is " << cost << std::endl;
    std::cout << "Current wallet balance: " << wallet.getBalance() << std::endl;
    if (wallet.getBalance() < cost) {
        std::cout << "No more funds left in wallet, ending trip" << std::endl;
        insufficientFunds = true;
    } else {
        std::cout << "Withdrawing " << cost << " from wallet" << std::endl;
        wallet.withdraw(cost);
        strategy->Move(entity, dt);
    }
}

bool StandardPriceDecorator::IsCompleted() {
    return strategy->IsCompleted() || insufficientFunds;
}

float StandardPriceDecorator::getEstimatedTripPrice() {
    // TODO - this estimated price should be an estimated distance
    // and we should use some unique multiplier to compute the estimated
    // price here
    return estimatedPrice;
}
