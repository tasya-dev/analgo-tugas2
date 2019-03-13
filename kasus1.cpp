/*
Nama : Tasya Amanda Adinegara
NPM : 140810160003
Program : Mencari nilai Maximum
*/

#include <iostream>
using namespace std;

int main()
{
    int el [5] = {1,2,10,4,5};
    int lengthArr = sizeof(el)/sizeof(el[0]);
    int max = el[0];
    int i = 2;
    while(i<lengthArr){
        if(el[i] > max){
            max = el[i];
        }
        i++;
    }
    cout<<"Nilai max adalah : "<<max;
}
