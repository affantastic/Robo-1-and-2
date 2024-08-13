#include <iostream>
using namespace std;
class Robot{
 private:
 int ID;
 string name;
 int batteryLvl;
 double corX;
 double corY;
 public:
 Robot(){
 ID=000;
 name="XYZ";
 batteryLvl=100;
 corX=0.0;
 corY=0.0;
 }
 Robot(int i, string n, int b, double x, double y){
 ID=i;
 name=n;
 batteryLvl=b;
 corX=x;
 corY=y;
 }
 Robot(Robot& other){
 other.ID=ID;
 other.name=name;
 other.batteryLvl=batteryLvl;
 other.corX=corX;
 other.corY=corY;
 }
 void display(){
 cout<<"Robot ID:"<<ID<<endl;
 cout<<"Robot Name:"<<name<<endl;
 cout<<"Robot Battery-Level:"<<batteryLvl<<endl;
 cout<<"Robot X-coordinate:"<<corX<<endl;
 cout<<"Robot Y-coordinate:"<<corY<<endl;
 }
 void moveto(double x,double y){
 corX=x;
 corY=y;
 }
 void chargeBattery(int b){
 batteryLvl=batteryLvl+b;
 }
};
main()
{
 Robot robo1;
 cout<<"Default Details of Robo 1:"<<endl;
 robo1.display();
 cout<<endl;
 Robot robo2(17,"Android",60,9.5,10.8);
 cout<<"Details of Robo 2:"<<endl;
 robo2.display();
 cout<<endl;
 Robot robo3;
 robo3=robo2;
 cout<<"Details of Robo 3 (Copy of Robo 2):"<<endl;
 robo3.display();
 cout<<endl;
 robo2.moveto(15.2,20.4);
 cout<<"Details of Robo 2 after change in co-cordinates:"<<endl;
 robo2.display();
 cout<<endl;
 robo3.chargeBattery(40);
 cout<<"Details of Robo 3 after being charged:"<<endl;
 robo3.display();
}
