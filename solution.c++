#include <iostream>

using namespace std;


int multi(int a , int b){
return a*b;
}

int main()
{int j=0;

for(j=0 ; j<10 ; j++){
        cout<<"table of:"<<j<<endl;
        int i=0;
        while(i<10){
                i++;
                cout<<i<<"=>"<<multi(i,j)<<endl;
    }

}


        return 0;
}
