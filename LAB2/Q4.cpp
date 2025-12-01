#include <iostream>
using namespace std;

void upper(string som){
    int a=som.length();
    for (int i=0;i<a;i++){
        if(som[i]>='A' && som[i]<='Z'){
            som.at(i)=(int)som.at(i)+32;
        }
    }
    cout<<som;
}

int main(){
    string a="Aayush";
    upper(a);
}
