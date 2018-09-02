//
//  main.cpp
//  09012018
//
//  Created by Andrea Leang on 9/1/18.
//  Copyright © 2018 Andrea Leang. All rights reserved.
//

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

vector<int> citiesToAdd;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int numOfCities;
    cin >> numOfCities;
    
    int cityWeights[numOfCities+1];
    
    for(int i = 1; i <= numOfCities; i++) {
        cin >> cityWeights[i];
    }
    
    int connections[numOfCities+1][numOfCities+1];
    
    int numOfConnections[numOfCities+1];
    
    for (int i = 0; i <= numOfCities; i++) {
        numOfConnections[i] = 0;
    }
    
    for (int i = 0; i <= numOfCities; i++) {
        
        for (int j = 0; j <= numOfCities; j++) {
            connections[i][j] = 0;
        }
    }

        
    
    
    
    for (int i = 0; i < numOfCities-1; i++) {
        int cityO, cityT;
        cin >> cityO >> cityT;
        
        connections[cityO][cityT] = 1;
        connections[cityT][cityO] = 1;
        
        numOfConnections[cityO]++;

    }
    
    //for each city, go to each connection and find num of connection
    //if numofcon = 1 --> total num ++ and go to the next one
    // if more than 1, go to each connection and find each weight of each path
    
    int totDeletionNum = 0;
    int usedCities[numOfCities+1];
    
    for (int i = 1; i <= numOfCities; i++) {
        for (int j = 0; j <= numOfCities; j++) {
            usedCities[j] = 0;
            if (j == i) {
                usedCities[j] = 1;
            }
        }
        
        if (numOfConnections[i] == 1) {
            totDeletionNum++;
            continue;
        }
        
        for (int j = 1; j <= numOfCities; j++) {
            // find weights for all connection's path j = connection
            
            
        }
        
    }
    
    
    
    return 0;
}
