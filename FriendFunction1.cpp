
#include<iostream>
using namespace std;

class Box{
    private:
    int length;

    public:
    Box(int l) : length(l) {}

    friend void printLength( Box& b); //declaration

};
//& (ampersand) → means reference (it does not copy the object, it just refers to it).
//const → means "cannot change the object through this reference."
//const Box& b means:

// We are referring to an existing Box object.

// We promise NOT to change its data through this reference.

void printLength( Box& b){  //defination
    cout<< "Box length is: "<< b.length<< endl;
}
int main(){
    Box myBox(10);

    printLength(myBox);
    return 0;
}