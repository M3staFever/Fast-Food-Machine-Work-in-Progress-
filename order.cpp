#include <iostream>
#include <string>
using namespace std;
#include "List.h"
#include "order.h"

/*I Need to figure it out a way to know which drinks have a specific size chart without the need of specific values example:sizeof()*/


order::order()
{
cout << "Welcome to Mcdonald's!\n\nWhat do you want to order?\n 1-----drink\n 2-----dessert\n 3-----soup\n";
cin >> *answer;
switch(ans){
    case 1:
        drinks(); //select the drink class

    break;
    case 2:
        dessert(); //select the dessert class

    break;
    case 3:
        soup(); //select the soup class

    break;
    default:
        order();
}
}

int order::drinks(){
      cout << "which drink do you desire?\n- To go back press 0 -\n";
        for(int x = 0; x < sizeof(drinkName)/sizeof(drinkName[0]); x++){ //here we calculate the size of the drinks array and show the list to the costumer, thanks to the loop we can modify the array with more or less data
            cout << x+1 << "-----" << drinkName[x] << endl;
        }
        cin >> *answer;
        if(ans>=1&&ans<=5){//this if and else statement checks the type of drink and associates it with the corresponding size chart
            cout << "what size?\n 1-----small\n 2-----medium\n 3-----large\n";
            cin >> *answer;
        }
        else if(ans>=6&&ans<=8){
            cout << "okidoki";
        }
        else if(ans>=9&&ans<=15){
            cout << "what size?\n 1-----small\n 2-----medium\n";
            cin >> *answer;
        }
        //this else if statement is used to be able to give to the costumer a pullback button
        else if(ans==0){
            cout << "\n\n\n\n\n\n\n\n\n\n";
            order();

        }
        else{
            cout << "We didn't understand your order,\n Please repeat.\n\n\n\n\n";
            drinks();
        }

}

int order::dessert(){
  cout << "which dessert do you desire?\n- To go back press 0 -\n";
        for(int x = 0; x < sizeof(dessertName)/sizeof(dessertName[0]); x++){
            cout << x+1 << "-----" << dessertName[x] << endl;
        }
        cin >> *answer;
        //the if statement is used to be able to give to the costumer a pullback button
        if(ans==0){
            cout << "\n\n\n\n\n\n\n\n\n\n";
            order();

        }

}

int order::soup(){
  cout << "which soup do you desire?\n- To go back press 0 -\n";
        for(int x = 0; x < sizeof(soupName)/sizeof(soupName[0]); x++){
            cout << x+1 << "-----" << soupName[x] << endl;
        }
        cin >> *answer;
        //the if statement is used to be able to give to the costumer a pullback button
        if(ans==0){
            cout << "\n\n\n\n\n\n\n\n\n\n";
            order();

        }
        cout << "what size?\n 1-----small\n 2-----medium\n";
        cin >> *answer;
}

order::~order()
{

}
