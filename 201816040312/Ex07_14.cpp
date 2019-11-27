#include <iostream>
#include<iomanip>
#include<vector>
using namespace std;

int main()
{
 vector<int> a(0);
 int i,b,k;
 int flag,t=0;

 while(t<20)
 {
     flag=0;
     cin>>b;
     k=a.size();
     for(i=0;i<k;i++)
     {
         if(b==a[i])
            flag=1;
     }
     if(flag==0)
        a.push_back(b);
    t++;

 }
 for(int an:a)
    cout<<an<<setw(5);

}
