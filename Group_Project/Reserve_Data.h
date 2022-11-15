#pragma once
#include "DateAndTime.h"

class Reserve_Data {
public:
    Reserve_Data() {}
    Reserve_Data(char room, unsigned int Max_Capacity,
        Date Booked_date, int Start_time, int End_time) {
        SetData(room, Max_Capacity, Booked_date, Start_time, End_time);
        Cal_Cost();
    }
    ~Reserve_Data() {

    }

    void SetData(char room, unsigned int Max_Capacity,
        Date Booked_date, int Start_time, int End_time)
    {
        R_room = room;
        R_date = Booked_date;
        R_Start_time = Start_time;
        R_End_time = End_time;
        R_Max_Capacity = Max_Capacity;

    }


    void viewData() {






    } //print the Data as R1.7.

    void alterDate(Date newdate) { R_date = newdate; }
    void alterRoom(char newRoom) { 
        R_room = newRoom;
        Cal_Cost();
    }
    void alterMax_Capacity(int new_max) { R_Max_Capacity = new_max; }
    void alterStart_time(int New_startTime) { R_Start_time = New_startTime; }
    void alterEnd_time(int New_EndTime) { R_End_time = New_EndTime; }
    void alterDuration(int start, int End) { R_Start_time = start; R_End_time = End; Cal_Cost(); }

    int getcost() { return R_Cost; } // using this function to get cost


private:
    char R_room;                    //reserved room
    unsigned int R_Max_Capacity;
    Date R_date;
    int R_Start_time;
    int R_End_time;
    int R_Cost;

    void Cal_Cost() {
        int cost;





        R_Cost = cost;
    }                               //function to calculate cost
};