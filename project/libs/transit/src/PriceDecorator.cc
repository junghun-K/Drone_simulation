#include "PriceDecorator.h"

bool PriceDecorator::IsCompleted(){
    return strategy->IsCompleted();
}

void PriceDecorator::Move(IEntity* entity, double dt){
    strategy->Move(entity, dt);
}

float setEstimatedTripPrice(Vector3 pos_, Vector3 des_) {
    float x_coor = (pos_.x - des_.x);
    float y_coor = (pos_.y - des_.y);
    estimatedPrice = sqrt(pow(x_coor,2)+pow(y_coor,2)); 
}

float getEstimatedTripPrice() {
    return estimatedPrice;
}