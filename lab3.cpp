#include<iostream>
using namespace std;
/**
 * user enters a number and if even it output the multiples to the 20th element otherwise if odd list the first 30 integers excluding the multiples of the number itself.
 * 
 */
int main(){

    cout<<"Enter a number: ";
    int num;
    cin>>num;

    if(num%2==0){
        for(int i = 1; i<21; i++){
            cout<< i << " x " << num << " = " << i*num<<endl; 
        }

    }else if(num%2 !=0){
        
        int counter = 1;
        for(int i=0; i<1; i++){
            for(int j=0; j<45; j++){
               if(j%num==0){
                   continue;
               }
                cout<<counter++<<". " <<j<<endl;
            } 
    
        }
    }


}