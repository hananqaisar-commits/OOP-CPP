#include<iostream>
#include<string>
using namespace std;

//polymorphism:(Definition)
    // Polymorphism means “many forms”. 
    // In programming, it allows a single function, method, or operator 
    // to work in different ways depending on how it’s used.
    // Types:
            // 1: Compile-time
            // 2: Run time

    // Compile time:
    // Check this it is same function name it is decided by its parameters only
    // it is differ by only type(int,string,float) or number of parameters
    // It does not depend upon return type of function

    // Function Polymorphism:
        void done(int x){
            cout<<"Value is :"<<x<<endl;
        }
        void done(string name){
            cout<<"Value is :"<<name<<endl;
        }
        void done(){
            cout<<"Hello World\n";
        }

    class calculator{
        public:
            int add(int a ,int b){ return a+b;}//int a and int b 
            float mult(int a, float b){return a*b;}//herer int a nad float b parameter are different
            float div(float a,float b){return a/b;}//float a and float b they are different parameter
    };
    
int main(){
calculator c1;
    done(10);
    done("Hanan Qaisar");
    done();

    cout<<c1.div(8,5)<<endl;
    cout<<c1.div(13,5.2)<<endl;

    return 0;
}