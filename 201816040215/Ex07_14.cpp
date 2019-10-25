#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int k=0;
    int a;
    vector < int > m(20);
    cin>>a;
    while(a>=10&&a<=100)
    {
        if(a>=10&&a<=100)
        {
            m[0]=a;
            break;
        }
        cin>>a;
        continue;
    }//find the effective m[0] and remain it
    int jjj=1;
    for(k=1; k<20; ++k)
    {
        int flag=0;
        cin >>a;
        if(a>=10&&a<=100)
        {
            for(int t=0; t<k; t++)
                if(m[t]==a)
                    flag=1;

            if(flag==1);
            else
            {
                m[jjj]=a;
                jjj++;
            }//delete the value that is repenating
        }
        else
            k--;
    }
    for(int item=0; item<jjj; item++)
    {
        m.push_back( m[item] );//call the vector.push_back to output m[item]
        cout<<m[item]<<' ';//putout the value which can be remained array*/
    }
}

