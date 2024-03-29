#ifndef ISTRATEGY_H_
#define ISTRATEGY_H_

#include <vector>
#include "graph.h"
#include "entity.h"

using namespace routing;

class IStrategy {
    public:
        virtual void Move(IEntity* entity, double dt) = 0;
        virtual bool IsCompleted() = 0;
    protected:
        // IGraph object to be used in the simulation.
        const IGraph* graph;
        std::vector<std::vector<float>> path;
}; //close class 

#endif // ISTRATEGY_H_