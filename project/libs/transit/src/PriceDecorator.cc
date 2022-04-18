#include "PriceDecorator.h"

PriceDecorator::PriceDecorator(IStrategy *strategy_, Vector3 pos_, Vector3 des_) {
    strategy = strategy_; 

    // Set estimated price
    float x_dist = abs(pos_.x - des_.x);
    float y_dist  = abs(pos_.y - des_.y);

    // Pythagorian theorem to get the estimated price
    estimatedPrice = sqrt(pow(x_dist, 2) + pow(y_dist, 2));
}
