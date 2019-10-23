#include <iostream>
#include <array>
using namespace std;

int main(int argc, const char * argv[]) {
    array<int,21> yyy;
    int i,ooo=1,n;
    cin>>yyy[0];
    for(i=0;i<19;i++){
        cin>>n;
        if(find(yyy.begin(), yyy.end(), n)== yyy.end()){
            yyy[ooo]=n;
            ooo++;
        //    cout<<(find(yyy.begin(), yyy.end(), n)!= yyy.end())<<" "<<ooo<<" "<<yyy[ooo];
        }else continue;
    }
    ooo--;
    for(;ooo>=0;ooo--){
        cout<<yyy[ooo]<<" ";
    }
}
