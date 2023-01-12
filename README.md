# Drone Simulation Group Project
## Fee charging by the distance (Utilized Decorator pattern).
[Link to Group Presentation](https://drive.google.com/file/d/1_1kJVIDksJP3i3QIZLYla0oM1itTRpBq/view?usp=sharing)


[Link to Write Up](https://docs.google.com/document/d/1U0YlbX7V3meYLzmrIHIo4ARlTINmXkWd_YCy1-GAALQ)

### Running the code

The code can be run by the following commands after cloning the repository.

From the root of the repository, change to the project directory
```
cd project/
```

Next, build the project using
```
make -j
```

Once the code has been compiled, use the command
```
build/bin/transit_service PORT_NUMBER apps/transit_service/web/
```
where PORT_NUMBER is the desired port to run on.

Navigating to localhost:PORT_NUMBER and localhost:PORT_NUMBER/schedule.html in your browser while the app is running will let you schedule trips and view the drone and robots.

### 1. All the team members names and x500.
Group members (Name - x500 (lab section)): 
> Jared Grambihler - gramb025 (015),  
> Jeonghoon Kim - kimx5154 (005),  
> Jackie Li - li001710 (015)  

### 2. Names and paths to the added files.
1. Header Files: shared-upstream/project/libs/transit/include/**(.h file below)**  
a. Wallet.h  
b. PriceDecorator.h  
c. StandardPriceDecorator.h  
d. PeakPriceDecorator.h  
e. DiscountDecorator.h  

2. CPP files: shared-upstream/project/libs/transit/src/**(.cc file below)**  
a. Wallet.cc  
b. PriceDecorator.cc  
c. StandardPriceDecorator.cc  
d. PeakPriceDecorator.cc  
e. DiscountDecorator.cc  

3. Modified (Existing) Files:  
a. Schedule.html (shared-upstream/project/apps/transit_service/web/schedule.html)  
b. RobotFactory.cc (shared-upstream/project/libs/transit/src/RobotFactory.cc)  
c. Drone.cc (shared-upstream/project/libs/transit/src/drone.cc)  
d. Entity.h (shared-upstream/project/libs/transit/include/entity.h)  


### 3. Sprint retrospective  
Since it was sprint project, it was not easy to get a response from group members immediately.
However, we could manage all the requirements, and finished the tasks together by communicating with one another via discord. Each of the group members communicated and treated each other with respect, which lead us to have better communication online while doing our own work. As a result, we could finish the project on time and were able to review what we had done. We also used the github as a means of sharing code. It was useful to push to each branch then review other's code before we merged. Along with that, we could keep track of our commit history so that we could have restored the project if something was messed up. Next time, it would be better and more helpful to arrange our tasks with another tool instead of discord, like Jira software. Jira software allows bug tracking and agile project management. It would have made it easier to see what we finished and what tasks should be done by whom.


