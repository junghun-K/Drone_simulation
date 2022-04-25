#ifndef PEEK_PRICE_DECORATOR_H_
#define PEEK_PRICE_DECORATOR_H_

#include "PriceDecorator.h"

class PeekPriceDecorator: public PriceDecorator {
    public:
        PeekPriceDecorator(IStrategy *strategy_, Vector3 pos_, Vector3 des_, IEntity* entity_);
        ~PeekPriceDecorator() {}
        void Move(IEntity* entity, double dt);
        bool IsCompleted();
        float GetEstimatedPrice();
    private:
        double price_per_sec = .10;
        IEntity* entity;
};

#endif // PEEK_PRICE_DECORATOR_H_
