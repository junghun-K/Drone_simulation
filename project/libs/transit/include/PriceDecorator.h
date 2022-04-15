#ifndef PRICE_DECORATOR_H_
#define PRICE_DECORATOR_H_

#include <vector>
#include "IStrategy.h"

class PriceDecorator: public IStrategy {
    public:
        PriceDecorator(IStrategy *strategy_);

        // Move the entity. Deducts a price from the wallet when the entity moves.
        void Move(IEntity* entity, double dt);

        // If the route is completed. This occurs when we reach the destination 
        // or if the entity runs out of money.
        bool IsCompleted();

        // Gets the estimated price of the trip. This is computed
        // at the start of a trip, and doesn't change. The actual
        // price of the trip may differ from this estimated price.
        virtual float getEstimatedTripPrice() = 0;
    protected:
        IStrategy *strategy;
};

#endif // PRICE_DECORATOR_H_
