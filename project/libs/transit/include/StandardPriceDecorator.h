#ifndef STANDARD_PRICE_DECORATOR_H_
#define STANDARD_PRICE_DECORATOR_H_

#include "PriceDecorator.h"

class StandardPriceDecorator: public PriceDecorator {
    public:
        StandardPriceDecorator(IStrategy *strategy_, Vector3 pos_, Vector3 des_, IEntity* entity_);
        ~StandardPriceDecorator() {}
        void Move(IEntity* entity, double dt);
        bool IsCompleted();
        float GetEstimatedPrice();
    private:
        double price_per_sec = .05;
        IEntity* entity;
};

#endif // STANDARD_PRICE_DECORATOR_H_
