#include <iostream>
using namespace std;
void getseats()
{
    string first_clas[4][7]={{'A1','A2','A3','----','A4','A5','A6'},{'B1','B2','B3','----','B4','B5','B6'},{'C1','C2','C3','----','C4','C5','C6'},{'D1','D2','D3','----','D4','D5','D6'}}
    string economy_clas[4][7]={{'E1','E2','E3','----','E4','E5','E6'},{'F1','F2','F3','----','F4','F5','F6'},{'G1','G2','G3','----','G4','G5','G6'},{'H1','H2','H3','----','H4','H5','H6'},{'I1','I2','','','','',''}}
    cout<<"First Class(R1920.00)"<<endl;
    cout<<first_clas<<endl;
    cout<<"Economy Class(R1600.00)"<<endl;
    cout<<economy_clas<<endl;
}



int main()
{
    getseats();
    string name, seat_num;
    int num_time;
    cout<<"Welcome to COS1511 flight booking system"<<endl;
    cout<<" "<<endl;
    cout<<"Enter full name: "<<endl;
    cin>>name;

    ##if statement
    cout<<"The available travel times for flights are:"<<endl;
    ##Add code
    cout<<"Choose the time by entering the option number from the displayed list:"<<endl;
    cin>>num_time>>endl;

    if num_time>0 || num_time<6:
            cout<<"hello "+name<<endl;
        #add code
    else:
           cout<<"Incorrect option! Please choose from 1-5"<<endl;



    return 0;

}
