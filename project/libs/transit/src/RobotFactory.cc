#include "RobotFactory.h"

IEntity* RobotFactory::CreateEntity(JsonObject& entity){
  std::string type = entity["type"];
  if(type.compare("robot") == 0){
    std::cout << "Robot Created" << std::endl;
    IEntity* robot = new Robot(entity);
    robot->GetWallet()->deposit(100.0);
    std::cout << "Robot wallet balance " << robot->GetWallet()->getBalance() << std::endl;
    return robot;
  }
  return nullptr;
}
