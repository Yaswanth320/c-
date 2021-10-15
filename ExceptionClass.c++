#include <iostream>
#include <exception>
using namespace std;

class Overspeed : public exception{                                 // This is custom exception class
    int speed;
    public:
        const char* what(){
            return "Check your car speed \n";
        }
       // void getspeed(){
       //     cout << " Your car speed is :" << speed << endl;
       // }
        void setSpeed(int speed){
            this -> speed = speed;
        }
};

class car{
    int speed;
    public:
        car(){
            speed = 0;
            cout << "Speed is zero "<< endl;
        }

        void acceleration(){
            for(;;){
                // Infinte for loop
                speed += 10;
                cout << "speed is : " << speed << endl;
                if(speed >= 250){
                    Overspeed s;
                    s.setSpeed(speed);
                    throw(s);
                }
            }
        }
};

int main()
{
    car C;
    try{
        C.acceleration();
    }catch(Overspeed s){
        cout << s.what() << endl;
    }

    return 0;
}