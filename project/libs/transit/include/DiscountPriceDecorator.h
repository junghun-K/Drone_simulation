#ifndef DISCOUNT_PRICE_DECORATOR_H_
#define DISCOUNT_PRICE_DECORATOR_H_

#include "PriceDecorator.h"

class DiscountPriceDecorator: public PriceDecorator {
    public:
        DiscountPriceDecorator(IStrategy *strategy_, Vector3 pos_, Vector3 des_, IEntity* entity_);
        ~DiscountPriceDecorator() {}
        void Move(IEntity* entity, double dt);
        bool IsCompleted();
        float GetEstimatedPrice();
    private:
        double price_per_sec = .025; // 50% discount
        IEntity* entity;
};

#endif // DISCOUNT_PRICE_DECORATOR_H_
