#ifndef STANDARD_PRICE_DECORATOR_H_
#define STANDARD_PRICE_DECORATOR_H_

#include "PriceDecorator.h"

class StandardPriceDecorator: public PriceDecorator {
    public:
        // TODO - insufficient funds needs to be checked to see if we can pay the estimated price
        StandardPriceDecorator(IStrategy *strategy_) : PriceDecorator(strategy_) { insufficientFunds = false; }
        ~StandardPriceDecorator() {}
        void Move(IEntity* entity, double dt);
        bool IsCompleted();
    private:
        double price_per_sec = .05;
        bool insufficientFunds;
};

#endif // STANDARD_PRICE_DECORATOR_H_
