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
    float x_coor = (pos_.x - des_.x); // x_coordinate
    float y_coor = (pos_.y - des_.y); // y_coordinate

    // Pythagorian theorem to get the price.
    // e.g 10 * distance
    estimatedPrice = 10*sqrt(pow(x_coor,2)+pow(y_coor,2)); 
}
