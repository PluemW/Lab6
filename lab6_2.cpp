#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double x){
    x = x*(M_PI/180);
    return x;
}
double rad2deg(double x){
    x = x*(180/M_PI);
    return x;
}
double findXComponent(double v1, double v2, double x1, double x2){
    double xcomp;
    xcomp = (v1*(cos(x1))) + (v2*(cos(x2)));
    return xcomp; 
}
double findYComponent(double v1, double v2, double y1, double y2){
    double ycomp;
    ycomp = (v1*(sin(y1))) + (v2*(sin(y2)));
    return ycomp; 
}
double pythagoras(double xcomp, double ycomp){
    double f;
    f = pow((pow(xcomp,2)+pow(ycomp,2)),0.5);
    return f;
}
double showResult(double f, double deg){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << f << endl;
    cout << "Direction of the resultant vector (deg) = " << deg << endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    return 0;
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
    return 0;
}
