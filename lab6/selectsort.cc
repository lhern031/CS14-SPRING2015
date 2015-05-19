#include <typeinfo>
#include <vector>
#include <cmath>
#include <iostream>
#include <list>
#include <utility>
#include "selectionsort.h"

using namespace std;

int main(){
    
    list<int> ltest;
    ltest.push_back(2);
    ltest.push_back(4);
    ltest.push_back(5);
    ltest.push_back(1);
    ltest.push_back(8);
    ltest.push_back(9);
    
    list<int>::iterator ite;
    cout << "pre:  ";
	for( ite = ltest.begin(); ite != ltest.end(); ++ite)
		cout << *ite << " ";
	cout << endl;
	
	selectionsort(ltest);
	cout << "post: ";
	for( ite = ltest.begin(); ite != ltest.end(); ++ite)
		cout << *ite << " ";
	cout << endl << endl;
    
    vector<pair<int,int>> test1;
    test1.push_back(std::make_pair(1,2));
    test1.push_back(std::make_pair(3,-1));
    test1.push_back(std::make_pair(-1,3));
    test1.push_back(std::make_pair(0,0));
    test1.push_back(std::make_pair(2,3));
    test1.push_back(std::make_pair(1,2));
    test1.push_back(std::make_pair(1,-2));
    test1.push_back(std::make_pair(8,10));
    
    
    vector<pair<int,int>>::iterator i;
    cout << "pre:  ";
	for( i = test1.begin(); i != test1.end(); ++i)
		cout << "(" << (*i).first << "," << (*i).second << ") ";
	cout << endl;
	
	selectionsort(test1);
	cout << "post: ";
	for( i = test1.begin(); i != test1.end(); ++i)
		cout << "(" << (*i).first << "," << (*i).second << ") ";
	cout << endl << endl;
	
	vector<pair<int,int>> test2;
    test2.push_back(std::make_pair(10,2));
    test2.push_back(std::make_pair(-3,1));
    test2.push_back(std::make_pair(-8,0));
    test2.push_back(std::make_pair(1,1));
    test2.push_back(std::make_pair(1,1));
    test2.push_back(std::make_pair(0,0));
    test2.push_back(std::make_pair(10,2));
    test2.push_back(std::make_pair(5,5));
    test2.push_back(std::make_pair(5,-5));
    test2.push_back(std::make_pair(0,0));
    test2.push_back(std::make_pair(10,2));
    
    cout << "pre:  ";
	for( i = test2.begin(); i != test2.end(); ++i)
		cout << "(" << (*i).first << "," << (*i).second << ") ";
	cout << endl;
	
	selectionsort(test2);
	cout << "post: ";
	for( i = test2.begin(); i != test2.end(); ++i)
		cout << "(" << (*i).first << "," << (*i).second << ") ";
	cout << endl << endl;
	
	vector<pair<int,int>> test3;
    test3.push_back(std::make_pair(-1,3));
    test3.push_back(std::make_pair(0,0));
    test3.push_back(std::make_pair(1,-2));
    test3.push_back(std::make_pair(1,2));
    test3.push_back(std::make_pair(1,2));
    test3.push_back(std::make_pair(2,3));
    test3.push_back(std::make_pair(3,-1));
    test2.push_back(std::make_pair(8,10));
    
    cout << "pre:  ";
	for( i = test3.begin(); i != test3.end(); ++i)
		cout << "(" << (*i).first << "," << (*i).second << ") ";
	cout << endl;
	
	selectionsort(test3);
	cout << "post: ";
	for( i = test3.begin(); i != test3.end(); ++i)
		cout << "(" << (*i).first << "," << (*i).second << ") ";
	cout << endl;
	
	return 0;
	
}