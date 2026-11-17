/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<iostream>
using namespace std;

int main(){

 int grade;
 
 cout<<"Enter Your Grade FROM 0 TO 100: ";
 cin>>grade;
 
 
 if(grade>=0 && grade<=100){
    
       if(grade>94 && grade<=100)
       cout<<"A+";
 
 
       else if(grade>89 && grade<=94)
       cout<<"A";
 
 
       else if(grade>84 && grade<=89)
       cout<<"B+";
 
 
       else if(grade>79 && grade<=84)
       cout<<"B";
       
 
       else if(grade>74 && grade<=79)
       cout<<"C+";

 
      else if(grade>69 && grade<=74)
      cout<<"C";

 
      else if(grade>64 && grade<=69)
      cout<<"D+";

 
      else if(grade>59 && grade<=64)
      cout<<"D";


      else
      cout<<"F";  
 }
 else
   cout<<"Invalid input, please enter a grade between 0 and 100";

 
 
    return 0;
}