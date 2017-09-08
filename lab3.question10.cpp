#include<iostream>
using namespace std;
int main()
{ 
   char a;
   cout<<"enter a charecter";
   cin>>a;
   if (a >= 'a' && a <= 'z') {
   cout<<"it is a lowercase letter";
}
  else if (a >= 'A' && a <= 'Z'){
   cout<<"it is an uppercase letter";
}
  else 
     cout<<"it is not an alphabet";
}

     
