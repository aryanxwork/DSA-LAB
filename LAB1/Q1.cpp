#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int a;
    cout<<"size of array :";
    cin>>a;
    int arr[100];
    
    char f;
    
    do{
        cout<<"1 : CREATE "<<endl;
        cout<<"2 : DISPLAY "<<endl;
        cout<<"3 : INSERT "<<endl;
        cout<<"4 : DELETE "<<endl;
        cout<<"5 : LINEAR SEARCH "<<endl;
        cout<<"6 : EXIT "<<endl;
        int n;
        cout<<"Choose Option :";
        cin>>n;
        switch (n){
        case 1:
        for(int i=0;i<a;i++){
            cout<<"enter element at index :"<<endl;
            cin>>arr[i];
        }
        break;

        case 2:
        for(int i=0;i<a;i++){
            cout<<arr[i]<<endl;
        }
        break;

        case 3:
        int x;
        cout<<"enter element you want to insert";
        cin>>x;
        int y;
        cout<<"enter index: ";
        cin>>y;
        for(int j=a;j>=y;j--){
            arr[j]=arr[j-1];
              

        }
        arr[y]=x; 
        a++;
        break;
        case 4:
        int d;
        cout<<"enter index: ";
        cin>>d;
        for(int z=d; z<a;z++){
            arr[z]=arr[z+1];
              
        }
        a--;
        break;

        case 5:
        int key;
        cin>>key;
        for(int i=0;i<a;i++){
            if(arr[i]==key){
                cout<<i;
            }
        }
        break;

        default :
            cout<<"invalid operation :";
            break;
        }
        cout<<"enter Y or N:";
        cin>>f;

    }while(f == 'Y');
}
