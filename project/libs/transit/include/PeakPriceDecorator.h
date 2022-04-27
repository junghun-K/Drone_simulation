#ifndef PEAK_PRICE_DECORATOR_H_
#define PEAK_PRICE_DECORATOR_H_

#include "PriceDecorator.h"

class PeakPriceDecorator: public PriceDecorator {
    public:
        PeakPriceDecorator(IStrategy *strategy_, Vector3 pos_, Vector3 des_, IEntity* entity_);
        ~PeakPriceDecorator() {}
        void Move(IEntity* entity, double dt);
        bool IsCompleted();
        float GetEstimatedPrice();
    private:
        double price_per_sec = .10; // 200% peak
        IEntity* entity;
};

#endif // PEAK_PRICE_DECORATOR_H_
