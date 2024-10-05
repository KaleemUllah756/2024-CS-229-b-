//Example
#include <iostream>
using namespace std;
int value1=10;
int value2=20;
int sum(){
value1=40;
return value1+value2;

}
main(){

int x=value1;
value1=100;
x=20;
value2=sum();
cout<<value1<<" "<<value2;

}
//Task1
#include <iostream>
#include <cmath>
using namespace std;
double volumepyramid(double volume);
int main(){
string outputunit;
double length,width,height,volume;
cout<<"Enter the lenght of pyramid(in meters):"<<endl;
cin>>length;
cout<<"Enter the height of pyramid (in meters):"<<endl;
cin>>height;
cout<<"Enter the width of pyramid (in meters):"<<endl;
cin>>width;
volume=(length*width*height)/3;
volumepyramid(volume);
}
double volumepyramid(double volume){
string outputunit,millimeters,centimeters,kilometers,meters;
double length,width,height;

cout<<"Enter the desired output unit(millimeters,centimeters,meters,kilometers):"<<endl;
cin>>outputunit;
if(outputunit=="millimeters"){
cout<<"The volume in millimeters is:"<<volume*1000<<" cubic millimeters"<<endl;
}
if(outputunit=="centimeters"){
cout<<"The volume in centimeters is:"<<volume*100<<" cubic centimeters"<<endl;
}
if(outputunit=="meters"){
cout<<"The volume in meters is:"<<volume<<" cubic meters"<<endl;
}
if(outputunit=="kilometers"){
cout<<"The volume in kilometers is: "<<volume/1000<<" cubic kilometers"<<endl;
}

}
//Task2
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
//Task3
#include <iostream>
using namespace std;
string projectTimeCalculation(int neededhours, int days, int workers){
int effectivedays, hoursperdayperworker,totalavailablehours,hoursdifference;
effectivedays=days*0.9;
hoursperdayperworker=8+2;
totalavailablehours=effectivedays* hoursperdayperworker*workers;
hoursdifference=totalavailablehours-neededhours;
if(hoursdifference>=0){
cout<<"Project can be finished on time"<<hoursdifference<<" hours left"<<endl;

}else{
cout<<"Project cannot be finished on time"<<hoursdifference<<" hours needed"<<endl;
}

}
int main(){
int neededhours,days,workers;

cout<<"Enter the needed hours:"<<endl;
cin>>neededhours;
cout<<"Enter the days that firm has:"<<endl;
cin>>days;
cout<<"Enter the number of all workers:"<<endl;
cin>>workers;
std::string result = projectTimeCalculation(neededhours,days,workers);
std::cout<<result<<endl;
return 0;
}
