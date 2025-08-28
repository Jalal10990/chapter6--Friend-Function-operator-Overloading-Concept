
#include<iostream>

class Distance{
    int meters;
    public:
    explicit Distance(int m = 0) : meters(m) {}

    //overloading '+' operator
    friend Distance operator +(Distance a, Distance b){
    return Distance(a.meters + b.meters);
    }

    //overloading '<<' operator (for printing)
    friend std::ostream& operator<<(std::ostream& os, const Distance& d){
    return os << d.meters << "m";
    }

};
int main(){
    Distance d1(5);
    Distance d2(10);
    Distance d3 = d1 + d2;  //calls opeator +
    std::cout<<"Total Distance: "<< d3 <<"\n";// calls operator<<

return 0;

}