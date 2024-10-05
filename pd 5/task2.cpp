#include <iostream>
using namespace std;
float taxCalculator (char type,float price);
 main(){
char type;
float price;
cout<<"Enter the vehicle type code(M,E,S,V,T):"<<endl;
cin>>type;
cout<<"Enter the price of the vehicle in dollars:"<<endl;
cin>>price;
taxCalculator(type,price);
}
float taxCalculator (char type,float price){
if(type=='M'){
cout<<"The final price of the vehicle is:"<<price+(price*0.06)<<endl;
}
if(type=='E'){
cout<<"The final price of the vehicle is:"<<price+(price*0.08)<<endl;
}
if(type=='S'){
cout<<"The final price of the vehicle is:"<<price+(price*0.10)<<endl;
}
if(type=='V'){
cout<<"The final price of the vehicle is:"<<price+(price*0.12)<<endl;
}
if(type=='T'){
cout<<"The final price of the vehicle is:"<<price+(price*0.15)<<endl;
}
}