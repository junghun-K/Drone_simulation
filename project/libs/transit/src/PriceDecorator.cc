#include "PriceDecorator.h"

bool PriceDecorator::IsCompleted(){
    return strategy->IsCompleted();
}

void PriceDecorator::Move(IEntity* entity, double dt){
    strategy->Move(entity, dt);
}

float PriceDecorator::getEstimatedTripPrice() {
    return estimatedPrice;
}

void PriceDecorator::setEstimatedTripPrice(Vector3 pos_, Vector3 des_) {
    float x_coor = abs(pos_.x - des_.x); // x_coordinate
    float y_coor = abs(pos_.y - des_.y); // y_coordinate

    // Pythagorian theorem to get the price for beeline
    estimatedPrice = sqrt(pow(x_coor,2)+pow(y_coor,2));
}
