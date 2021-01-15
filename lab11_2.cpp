#include<iostream>
using namespace std;
int x;
long long int fibonacci(int x);


int main(){
    cout << fibonacci(50);

    return 0; 
}

long long int fibonacci (int x){

    if(x==0)
    return 0;
    if (x==1)
    return 1;
    else{
        return fibonacci(x-1) + fibonacci(x-2);
    }
}
