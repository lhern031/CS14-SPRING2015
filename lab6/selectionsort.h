/* 
Description Section
Name: Luis Hernandez
SID: 861070387
Date: 5/19/2015
Approach: Followed the algorithm described in the pdf.
Explained in the comments:
*/

#ifndef SELECTIONSORT_H
#define SELECTIONSORT_H

#include <typeinfo>
#include <vector>
#include <cmath>
#include <iostream>
#include <list>
#include <utility>

using namespace std;

template<typename L>
void selectionsort(L &l){
    
    auto tempIt = l.begin();            // Used to have a flexible operator
    auto tempMin = *l.begin();          // Used to have a flexible value
    int count = 0;
    
    for(auto itNpos = l.begin(); itNpos != l.end(); itNpos++){
        
        tempMin = *itNpos;              // Algorithm that gets sorted part
                                        // left from here.
        for(auto it = itNpos; it != l.end(); it++){
            if(tempMin > *it){          // Algorithm that looks for
                tempMin = *it;          // the smaller number. Then the
                tempIt = it;            // values are saved to be swapped.
            }
        }
        
        if(tempMin != *itNpos){             // Swap only if minimum value not
            std::swap(*itNpos, *tempIt);    // equal to current position.
            count++;
        }
    }
    
    cout << "0 copies and " << count*3 << " moves." << endl;// Check for moves.
    
}

#endif