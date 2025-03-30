#include<iostream>
#include <limits>
using namespace std;

// Function prototypes

double factorial(int number)
{
    if (number == 0)
    {
        return 1;
    }else{
        return number * factorial(number - 1);
    }
}


/*******************************************************************
* getLotteryInfo                                                   *
* Gets and validates lottery info from the user and places it in   *
* reference parameters referencing variables in the main function. *
********************************************************************/

void getInfo(int&n, int&k)
{
    bool error;
    cout<<"How many balls (1-12) are in the pool to pick from? ";
    cin>>n;
    error=cin.fail();

    while (n>12){
        cout<<"Input Error! There must be between 1 and 12 balls."<< endl;
        cout << "How many balls (1-12) are in the pool to pick from? ";
        cin>>n;

    }
    while (error){
        cout<< "Input Error! There must be between 1 and 12 balls."<<endl;
        cout<<"How many balls (1-12 are in the pool to pick from? ";
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin>>n;
        error = cin.fail();
    }
    cout<<"How many balls (1-"<<n<<") will be drawn? ";
    cin>>k;
    error=cin.fail();

    while (k>n){
        cout<< "Input Error!"<<endl;
        cout<<"How many balls (1-"<<n<<") will be drawn? ";
        cin>>k;
    }
    while (error){
        cout<<"Input Error!"<<endl;
        cout<<"How many balls (1-"<<n<<") will be drawn? ";
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin>>k;
        error=cin.fail();
    }
}
double computeWays(int n, int k) {

        double ways;
    double fn=factorial(n);
    double fk=factorial(k);
    double fnk=factorial(n-k);

    ways=(fk*fnk)/(fn);

    return ways;
}




/*******************************************************************
* computeWays                                                      *
* Computes and returns the number of different possible sets       *
* of k numbers that can be chosen from a set of n numbers.         *
* The formula for this is     k!(n- k)!                            *
*                             --------                             *
*                                 n!                               *



/*******************************************************************
* factorial                                                        *
* This function computes factorials recursively.                   *
*******************************************************************/


