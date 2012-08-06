//
//  main.cpp
//  Classes-2
//
//  Created by Kris Evans on 04/08/2012.
//  Copyright (c) 2012 Kris Evans. All rights reserved.
//
//  Written to illustrate basic class functionality, including private variables, public methods and
//  constructors

#include <iostream>


// Declaration of counter object
int i;
int currentNumber = 0;
int currentnumRooms = 0;
bool currenthasGarage = 0;

// Definition of apartment class

class apartment {
    
    int number;
    int numRooms;
    
    // bool hasGarage;

public:
    void Apartment(int number,int numRooms,bool hasGarage);
    int aboutApartmentNumber() const;
    int aboutApartmentNumRooms() const;
    
};


// Create an array of placeToLive of type apartment (our struct)
apartment placeToLive[3];
apartment thisApartment;

// Constructor function for creating a new apartment structure
inline void apartment::Apartment(int numberInit,int numRoomsInit,bool hasGarageInit){
    
    number = numberInit;
    numRooms = numRoomsInit;
    
    //hasGarage = hasGarageInit;
};


// Function for returning the apartment number

inline int apartment::aboutApartmentNumber() const {
    return number;
}

// Function for returning the apartment's number of rooms

inline int apartment::aboutApartmentNumRooms() const {
    return numRooms;
}


int main(int argc, const char * argv[])
{
    for (i=1;i<4;i++){
        std::cout << i*2 << i << "\n";
        placeToLive[i].Apartment(i*2, i, 0);

    }
    
    for (i=1;i<4;i++){
                
        currentNumber = placeToLive[i].aboutApartmentNumber();
        currentnumRooms = placeToLive[i].aboutApartmentNumRooms();
        
        std::cout << i << ". Apartment number " << currentNumber << " has " << currentnumRooms << " rooms\n";
    }
    
    return 0;
}

