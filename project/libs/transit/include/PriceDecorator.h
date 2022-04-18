#ifndef PRICE_DECORATOR_H_
#define PRICE_DECORATOR_H_

#include <vector>
#include "IStrategy.h"

class PriceDecorator: public IStrategy {
    public:
        PriceDecorator(IStrategy *strategy_) {
            strategy = strategy_; 
            estimatedPrice = 0; 
            // realPrice = 0;
        }

        ~PriceDecorator() {}

        // Move the entity. Deducts a price from the wallet when the entity moves.
        virtual void Move(IEntity* entity, double dt) = 0;

        // If the route is completed. This occurs when we reach the destination 
        // or if the entity runs out of money.
        virtual bool IsCompleted() = 0;

        // Gets the estimated price of the trip. This is computed
        // at the start of a trip, and doesn't change. The actual
        // price of the trip may differ from this estimated price.
        float getEstimatedTripPrice();

        // Sets the estimated price of the trip. This is computed
        // at the start of a trip, and doesn't change. The actual
        // price of the trip may differ from this estimated price.
        void setEstimatedTripPrice(Vector3 pos_, Vector3 des_);
    protected:
        IStrategy *strategy;
        float estimatedPrice;
        // float realPrice;
};

#endif // PRICE_DECORATOR_H_
