#include <iostream>
#include <cmath>
using namespace std;



int main()
{
  int n;
  double sum =0.0;
  cout<< "enter the value:"<<endl;
  cin >>n;
  
   for(int i=1;i<=n;i++){
        if (i % 2 == 0){
            sum -= 1.0 /pow(i, i);
            
        }
        else{
            sum +=1.0/pow(i, i);
        }
        
    }
    
    cout<<"the sum of the first "<<n<<"trems ot=f the series is:"<<sum<<endl;
  return 0;
}
