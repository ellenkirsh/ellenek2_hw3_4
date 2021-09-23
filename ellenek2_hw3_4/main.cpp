//
//  main.cpp
//  ellenek2_hw3_4
//
//  Created by Ellen Kirsh on 9/22/21.
//

#include <iostream>
using namespace std;

int main(void) {
    string num;
    cout<< "Enter an integer: ";
    cin >> num;
    int n = num.length();
    char array[n+1];
    strcpy(array, num.c_str());
    for(int i = 0; i < n; i++){
            // for (int i = 0, i < array.length(); i++
            // if (array(x) == 1
        if(array[i]== '0'){
            cout << "Zero ";
        }else if(array[i] == '1'){
            cout << "One ";
        }else if(array[i] == '2'){
            cout << "Two ";
        }else if(array[i] == '3'){
            cout << "Three ";
        }else if(array[i] == '4'){
            cout << "Four ";
        }else if(array[i] == '5'){
            cout << "Five ";
        }else if(array[i] == '6'){
            cout << "Six ";
        }else if(array[i] == '7'){
            cout << "Seven ";
        }else if(array[i] == '8'){
            cout << "Eight ";
        }else if(array[i] == '9'){
            cout << "Nine ";
        }else{
            cout << "Invalid Integer ";
        }
    }
cout << " \n";
return 0;
}
