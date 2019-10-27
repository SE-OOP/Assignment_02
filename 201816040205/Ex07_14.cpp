#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int n,i,t, flag;

 vector<int> c;//c ia a vector

  for(i=0;i<5;i++)//input 20 values
  {
      flag=0;
     cin>>n;
    for(t=0;t<=i;t++)
    {
        if(n==i)
        {
             flag++;
             break;
        }

    }
    if(n>=10&&n<=100&&flag==0)//save the value which is between 10 and 100 and different with others
    c.push_back(n);

  }

  for(int i :c)
  {

      cout<<i<<" ";
  }

return 0;
}
