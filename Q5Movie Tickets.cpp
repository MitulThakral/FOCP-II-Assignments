#include<bits/stdc++.h>
using namespace std;
class MovieTicket
{
    bool booked[101][101];
    int seats=100;
    public:
    MovieTicket()
    {
           memset(booked, false, sizeof(booked));//memory set
        //It is a function used to fill a block of memory with a value.
    }
    bool book(int x, int y)
    {
        if(seats==0)
        {
            cout<<"no seat available "<<endl;
            return 0;
        }
        else if(booked[x][y])
        {
            cout<<"Already booked "<<endl;
            return false;
        }
        else{
            booked[x][y]=true;
            cout<<"ticket confirmed "<<endl;
            seats--;
            return true;
        }
    }
    bool cancel(int x,int y)
    {
        if(!booked[x][y])
        {
            cout<<"ticket not booked "<<endl;
            return false;
        }
        else{
            booked[x][y]=false;
            cout<<"ticket canceled "<<endl;
            seats++;
            return true;
        }
    }
    bool isbooked(int x,int y)
    {
        if(booked[x][y])
        {
            cout<<"ticket is booked "<<endl;
            return true;
        }
        else
        {
            cout<<"not booked "<<endl;
            return false;
        }
    }
    int availabletickets()
    {
        return seats;
    }
};
int main()
{
    MovieTicket m1;
    MovieTicket m2;
    MovieTicket m3;
    m1.book(1,10);
    m1.book(2,10);
    m1.book(3,10);
    m1.cancel(2,10);
    cout<<m1.availabletickets()<<endl;
  return 0;
}
