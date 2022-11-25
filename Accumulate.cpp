#include <iostream>
#include<array>
#include <numeric> // for accumulate
using namespace std;




int main(){
    int a[]={ 1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    cout<<n;
    int sum=1;

    cout<<accumulate(a, a + n, sum)<<endl; 
    cout<<accumulate(a, a+n,sum,std::multiplies<int>())<<endl;
    cout<<accumulate(a, a+n,sum,std::minus<int>())<<endl;;
    cout<<accumulate(a, a+n,sum,std::plus<int>())<<endl;

    }
    
    
  



