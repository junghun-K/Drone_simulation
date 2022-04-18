#ifndef STANDARD_PRICE_DECORATOR_H_
#define STANDARD_PRICE_DECORATOR_H_

#include "PriceDecorator.h"

class StandardPriceDecorator: public PriceDecorator {
    public:
        StandardPriceDecorator(IStrategy *strategy_, Vector3 pos_, Vector3 des_, IEntity* entity);
        ~StandardPriceDecorator() {}
        void Move(IEntity* entity, double dt);
        bool IsCompleted();
        float getEstimatedTripPrice();
    private:
        double price_per_sec = .05;
        bool insufficientFunds;
};

#endif // STANDARD_PRICE_DECORATOR_H_
