#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main()
{
    int operation;
    cout<<"Select the operation you want to perform:"<<endl<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl<<"5.Exponential"<<endl<<"6.Trignometric function"<<endl;
    cin>>operation;
    switch(operation){
        case 1:
        {  
           int n,num;
           int i=1;
           int sum=0;
           cout<<"how many numbers you want to add:";
           cin>>n;
           cout<<"enter the numbers step by step"<<endl;
           while(i<=n){
            cin>>num;
            sum+=num;
            i++;
           }
           cout<<"sum is "<<sum;
           break;
        }
        case 2:
        {
          int a,b,diff;
          cout<<"enter 1st number: ";
          cin>>a;
          cout<<"enter 2nd number:";
          cin>>b;
          diff=a-b;
          cout<<diff;
          break;
        }
        case 3:
        {   
          int num1,num2,product;
          cout<<"enter 1st number: ";
          cin>>num1;
          cout<<"enter 2nd number:";
          cin>>num2;
          product=num1*num2;
          cout<<product;
          break;
        }
        case 4:
        {   
           int c,d,div;
          cout<<"enter 1st number: ";
          cin>>c;
          cout<<"enter 2nd number:";
          cin>>d;
          div=c/d;
          cout<<div;
          break;
        }
        case 5:
        {
          int e,f;
          cout<< "enter first number:";
          cin>>e;
          cout << "enter second number:";
          cin>>f;
          cout<< pow(e,f)<<endl;
          break;
        }
        case 6:
        {
          string angletype;
          string degree,radians;
          double x;
          cout<<"Enter the angle type you want to enter (degree/radians):";
          cin>>angletype;
          cout<<"Enter the angle:";
          cin>>x;
          if(angletype=="degree"){
          x *= 0.0175;
          }
          
          int trigonometry;
          double sinx,cosx,tanx,cosecx,secx,cotx;
          cout<<"Enter 1 for sinx ,2 for cosx,3 for tanx,4 for cosecx,5 for secx,6 for cotx \n Enter the number corresponding to the trignometric function:";
          cin>>trigonometry;
          switch(trigonometry){
             case 1:
                sinx = x - pow(x,3)/6 + pow(x,5)/120 - pow(x,7)/5040;
                cout<<sinx;
                break;
              case 2:
                cosx = 1 - pow(x,2)/2 + pow(x,4)/24 - pow(x,6)/720;
                cout<<cosx ;
                break;
              case 3:
                tanx = x + pow(x,3)/3 +2* pow(x,5)/15 ;
                cout<<tanx;
                break;
              case 4:
                cosecx = 1/x + x/6 + 7*pow(x,3)/360 + 31*pow(x,5)/15120;
                cout <<cosecx;
                break;
              case 5:
                secx = 1 + pow(x,2)/2 + 5*pow(x,4)/24 + 61*pow(x,6)/720;
                cout <<secx;
                break; 
              case 6:
                cotx = 1/x - x/3 + pow(x,3)/45 + 2*pow(x,5)/945;
                cout <<cotx;
                break;
          }
          break;
        }
         default:
           cout<<"Invalid operation"<<endl;
    }    
    return 0;
}

          
          
        