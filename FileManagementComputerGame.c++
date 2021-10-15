#include<iostream>
#include<fstream>
using namespace std;

int getWhatTheyWant();
void displayitems(int x);

//main function
int main(){
    
    int whatTheyWant;
    whatTheyWant = getWhatTheyWant();

    while(whatTheyWant != 4){

        switch(whatTheyWant){
            case 1:
                displayitems(1);
                break;
            case 2:
                displayitems(2);
                break;
            case 3:
                displayitems(3);
                break;
            default:
                cout << "You Pressed the wrong Button please try again \n" << endl;   
        }

        whatTheyWant = getWhatTheyWant();
    }

    
}

// getWhatTheyWant function
int getWhatTheyWant(){

    int choice;
    cout << "1 - just plain items" << endl;
    cout << "2 - helpful items" << endl;
    cout << "3 - harmful items" << endl;
    cout << "4 - Quit Program \n" << endl;

    cin >> choice;
    return choice;

}

//Display items function

void displayitems(int x){
    ifstream ObjectsFile("objects.txt");
    string name;
    double power;

    if(x == 1){
        // items which have 0 effect on the player
        while(ObjectsFile >> name >> power){
            if(power == 0){
                cout << name << " " << power << endl;
            }
        }
    }

    if(x == 2){
        // items which have positve effect on the player
        while(ObjectsFile >> name >> power){
            if(power > 0){
                cout << name << " " << power << endl;
            }
        }
    }

    if(x == 3){
        // items which have negative effect on the player
        while(ObjectsFile >> name >> power){
            if(power < 0){
                cout << name << " " << power << endl;
            }
        }
    }
}