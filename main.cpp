#include <iostream>
#include <iomanip>
using namespace std;
int main() {

int employee_num , worked_hours ;
float amount_per_hour ;

cin>>employee_num>>worked_hours>>amount_per_hour;
cout<<"NUMBER = "<<employee_num<<endl;
cout<<fixed<<setprecision(2)<<"SALARY = U$ "<<(worked_hours*amount_per_hour)<<endl;

    return 0;
}
