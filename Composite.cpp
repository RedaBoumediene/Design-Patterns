#include<bits/stdc++.h>
using namespace std;
// Why composite pattern ? To put it simply, it makes dealing with collections easy.
//component(interface lowest common denominator)  + leaf is implemantation of component + composite is collection of component
class component{
    public:
        virtual void traverse() = 0 ;
};
class leaf : public component{
    int value;
    public:
        leaf(){
            value = 0;
        }
        leaf(int a){
            value = a;
        }
        void traverse(){
            cout<<value<<' ';
        }
};
class composite : public component{
    vector<component * > children;
    public:
        void add(component *ele){
            children.push_back(ele);
        }
        void traverse(){
            for(int i=0;i<children.size();i++){
                children[i]->traverse();
            }
        }
};


int main(){

    composite arr[5];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr[i].add(new leaf(4*i+j));
        }
    }

    for(int i=0;i<4;i++){
        arr[4].add(&arr[i]);
    }

    for(int i=0;i<5;i++){
        arr[i].traverse();
        cout<<endl;
    }


return 0;
}
