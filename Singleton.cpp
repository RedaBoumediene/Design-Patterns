#include<bits/stdc++.h>
using namespace std;

class Singleton{
    private :
        static Singleton *Instance;
        Singleton(){};

    public :
        static Singleton * getInstance();
};

Singleton * Singleton::Instance=0;

Singleton * Singleton::getInstance(){
    if(Instance==0){
        Instance = new Singleton();
    }
    return Instance;
}

int main(){

    Singleton *a =Singleton::getInstance();
    Singleton *b =Singleton::getInstance();

    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}
