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
