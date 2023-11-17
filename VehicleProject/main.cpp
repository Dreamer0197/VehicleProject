//
//  main.cpp
//  VehicleProject
//
//  Created by Kaan Şengün on 17.11.2023.
//

#include <iostream>
#include "Vehicle.h"
using namespace std;





int main(int argc, const char * argv[]) {

    Vehicle *vPtr[]={new Car(125.850,"BMW"),new MotorCycle(37.500,"Honda")};
    int which_vehicle;
    char inputVehicle;
    do{
        fflush(stdin);
        cout<<"Enter vehicle and input:";
        cin>>which_vehicle>>inputVehicle;
        switch (inputVehicle) {
            case 'U':
                vPtr[which_vehicle]->increaseSpeed();
                vPtr[which_vehicle]->displayInformation();
                break;
                
            case 'D':
                vPtr[which_vehicle]->decreaseSpeed();
                vPtr[which_vehicle]->displayInformation();
                break;
            case 'C':
                vPtr[which_vehicle]->stopEngine();
                vPtr[which_vehicle]->displayInformation();
                break;
            case 'S':
                vPtr[which_vehicle]->startEngine();
                vPtr[which_vehicle]->displayInformation();
                break;
            default:
                cout<<"Enter valid input:"<<endl;
                break;
        }
        
    }while(which_vehicle!=-1);
    
    
    
    
    
    
    
    
    
    return 0;
}
