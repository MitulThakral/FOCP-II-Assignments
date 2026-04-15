#include<bits/stdc++.h>
using namespace std;
class Bankbalance
{
    bool exist[101];
    int  money[101];
    public:
    Bankbalance()
    {
        memset(exist,false,sizeof(exist));
        memset(money,0,sizeof(money));
    }
    bool create(int x,int y)
    {
        if(exist[x])
        {
            cout<<"account alredy exist "<<endl;
            return false;
        }
        else
        {
            exist[x]=true;
            money[x]=y;
            cout<<"account created "<<endl;
            return true;
        }
    }
    bool debit(int x, int y)
    {
        if(!exist[x])
        {
            cout<<"account not existed "<<endl;
            return false;
        }
        else if(money[x]<y)
        {
            cout<<"not sufficient balance "<<endl;
            return false;
        }
        else{
            money[x]-=y;
            cout<<"money debited "<<endl;
            return true;
        }
    }
    bool credit(int x,int y)
    {
        if(!exist[x])
        {
            cout<<"account not existed "<<endl;
            return false;
        }
        else{
            money[x]+=y;
            cout<<"money credited "<<endl;
            return true;
        }
    }
    int balance(int x)
    {
        if(!exist[x])
        {
            cout<<"account not existed "<<endl;
            return false;
        }
        else
        {
            return money[x];
        }
    }
};
int main()
{
    Bankbalance b1;
    b1.create(1,10000);
    b1.debit(1,10000);
    b1.credit(1,10000);
    cout<<b1.balance(1)<<endl;
    return 0;
}
