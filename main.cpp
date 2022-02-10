#include <iostream>
#include <cstdlib>
typedef struct {
    double a;
    double b;
}right_t;

typedef struct {
    double x;
    double y;
}dot_t;
unsigned short Testdot(right_t R, dot_t D);
using namespace std;
int main() {
    right_t R;
    srand(-4); // this function will set the seed for the rand() to -4 
    R.a = rand()%10; // it will return different values according to the seed from srand() and here it is 10
    R.b = rand()%10;
    cout <<R.a<<endl;
    cout <<R.b<<endl;
    dot_t tab[5]={{-4,0},{2,3},{0,1},{3,2}};
    for(short i = 0 ; i < 5; i++){
        if(Testdot(R,tab[i])) cout<<"("<<tab[i].x<<","<<tab[i].y<<")"<<" Is part of the straight line"<<endl;
        else cout<<"("<<tab[i].x<<","<<tab[i].y<<")"<<" Is not part of the straight line"<<endl;
    }
    return 0;
}
unsigned short Testdot(right_t R, dot_t D){
    if (D.y == D.x * R.a + R.b) return 1;
    return 0;
}
