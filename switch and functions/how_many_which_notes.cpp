#include<iostream>
using namespace std;
void calc_no_of_notes(int amt) {
    //This function will print the number of notes of 100, 50, 20, 1 required to make up the amount.
    int notes[] = {100, 50, 20, 1};
    int res[4] = {0,0,0,0}; //can be initialized as int res[4]={0};
    /*
    
    res[0] = amt/100;
    amt=amt-(res[0]*100);
    res[1] = amt/50;
    amt=amt-(res[1]*50);
    res[2] = amt/20;
    amt=amt-(res[2]*20);
    res[3] = amt/1;

    cout<<"No. of 100 rs. notes: "<<res[0]<<endl;
    cout<<"No. of 50 rs. notes: "<<res[1]<<endl;
    cout<<"No. of 20 rs. notes: "<<res[2]<<endl;
    cout<<"No. of 1 rs. notes: "<<res[3]<<endl;
    */
   
    //better way of doing it:
    for(int i=0; i<4;i++){
        res[i] = amt/notes[i];
        amt=amt-(res[i]*notes[i]);
        cout<<"No. of "<<notes[i]<<" rs. notes: "<<res[i]<<endl;
    }
    

}
int main()
{
    calc_no_of_notes(1030);
    return 0;
}