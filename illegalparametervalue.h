#include<iostream>
using namespace std; 

class illegalparametervalue{
    public:
    illegalparametervalue():
                 message ("illegal parameter values"){}
    illegalparametervalue(char *theMessage)
        {message=theMessage;}
    
    void outputmessage(){
        cout<<message<<endl;
    }
        private:
        char *message;

    
};

