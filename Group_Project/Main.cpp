
/*
     commend:


*/
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include"DateAndTime.h"
#include"Reserve_Data.h"
#include<vector>
using namespace std;




class BookingSystem {
public:
    BookingSystem() {
        time_t t = time(0);
        tm now;
    }
    ~BookingSystem() { 
        
    }

    void mainmethod() {
        while (true) {
            menu();     //print , get input ,  and call the right function
            Date a("13-10-2011"); //debug message
            cout << a << endl;
        }
    }

private:
    void menu(){
        int x;     
            
        // print menu



        

        cin >> x;
        switch (x) {
        case 1:
            Reservation();
            break;                                          //continue.........
        
        }
    }

    void Reservation() {
        //get data (cin>>)
        int Start=0;     // Start.hours=?  Start.mins =?
        int End=0;
        int id = reserve_data.size();    //id aotumate generated


        
        //check vaild
        if (1)                      // if no Room available
        {
            vector<int>* suggest = get_suggest(End-Start,Start);
            cout << "***Reservation *** \n"
                << "Sorry, no room is available at the time slot.\n"
                << "Suggestions:" << endl;
            for (int i = 0; i < suggest->size(); i++) {

            }

            delete suggest;
        }
        
        //confirm
    }                               //R1.3

    vector<int>* get_suggest(int duration, int conf_time_Start) {
        vector<int>* suggestion = new vector<int>;


        return suggestion;
    }                       //find the nearest avalible time form conflict time.  R1.5

    void  Modify_Reservation() {

    }    //R.11

    void  Cancel_Reservation(){
    
    
    }

    void Show_Reservation_Record(){
    
    }

    void Show_Staff_Requirements() {

    }



    vector<Reserve_Data> reserve_data;  //dynamic array vector
    bool timetable[3][7][13];           //Room:Day:time 
    Date** date;                        //jest read it as (Date date[8];)
};

int main() {
    BookingSystem bs;
    bs.mainmethod();                     //dont insert code here
    return 0;
}