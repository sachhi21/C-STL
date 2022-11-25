#include<iostream>
//#include "illegalparametervalue.h"
#include "/media/sachin/fd4c7062-afd2-4389-9aac-ec555becf7b6/sachin/C++ STL/illegalparametervalue.h"

template <class T> int indexofmax(T a[], T n)
{   int maxindex = 0;
    if(n<=0){
        throw illegalparametervalue("Array cannot be empty" );
    }else
     //int maxindex = 0;
     for(int i=1; i<n; i++)
        if(a[maxindex]<a[i])
        maxindex=i;
     
     return maxindex;
}


int main(){
    int a[]={1,2,8,4,5,};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<indexofmax<int>(a,n);

}