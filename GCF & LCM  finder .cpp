//A program that find GCF and LCM of two numbers 
//By Tesfamichael Tafere 
#include <iostream> 
using namespace std;

int main()
{
    int lcm, gcf,a, b ;
   
    cout<<"Enter two number :  ";
    cin>>a;
    cout<<"Enter two number :  ";
    cin>>b;
     int max = (a>b)? a:b;
    int min = (a<b)?a:b;
    
        
    for(int i=1; i<=min; i++){
        if(a%i==0 && b%i==0)
        {
            gcf = i;
        }
    }
    
    lcm = (a * b)/gcf;
    
    cout<<"GCF = "<<gcf<<endl;
    cout<<"LCM = "<<lcm;
 return 0;   
}
