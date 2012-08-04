//
//  main.cpp
//  Classes-2
//
//  Created by Kris Evans on 04/08/2012.
//  Copyright (c) 2012 Kris Evans. All rights reserved.
//

#include <iostream>


// Declaration of counter object
int i;
int currentNumber;
int currentnumRooms;
bool currenthasGarage;

// Definition of apartment class

class apartment {
    
    int number;
    int numRooms;
    
    // bool hasGarage;

public:
    void Apartment(int number,int numRooms,bool hasGarage);
    int aboutApartmentNumber(apartment currentApartment) const;
    int aboutApartmentNumRooms(apartment currentApartment) const;
};


// Create an array of placeToLive of type apartment (our struct)
apartment placeToLive[3];
apartment thisApartment;

// Constructor function for creating a new apartment structure
void apartment::Apartment(int numberInit,int numRoomsInit,bool hasGarageInit){
    number = numberInit;
    numRooms = numRoomsInit;
    //hasGarage = hasGarageInit;
};

inline int apartment::aboutApartmentNumber(apartment currentApartment) const {
    return number;
}


inline int apartment::aboutApartmentNumRooms(apartment currentApartment) const {
    return numRooms;
}


int main(int argc, const char * argv[])
{
    for (i=1;i<4;i++){
        placeToLive[i].Apartment(i*2, i, 0);
    }
    
    for (i=1;i<4;i++){
        currentNumber = thisApartment.aboutApartmentNumber(placeToLive[i]);
        currentnumRooms = thisApartment.aboutApartmentNumRooms(placeToLive[i]);
        
        std::cout << i << ". Apartment number " << currentNumber << " has " << currentnumRooms << " rooms\n";
    }
    
    return 0;
}

