#include <iostream>
#include <string>
using namespace std;

class car{
    private:
        string brand;
        int speed;

    public:
        void setdata(string b,int s){
            brand =b;
            speed =s;
        }
        void displaydata(){
            cout<<"brand: "<<brand<<" speed: "<<speed<<" km"<<endl;
        }
};

int main () {
    car car1,car2;

    car1.setdata("limo", 180);
    car2.setdata("RR", 240);

    car1.displaydata();
    car2.displaydata();

    return 0;
}