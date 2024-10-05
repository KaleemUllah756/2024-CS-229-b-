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









