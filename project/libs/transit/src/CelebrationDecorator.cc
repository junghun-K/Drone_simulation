#include "CelebrationDecorator.h"

bool CelebrationDecorator::IsCompleted(){
    return spinTime >= 1.5;
}

void CelebrationDecorator::Move(IEntity* entity, double dt){
    strategy->Move(entity, dt);
}