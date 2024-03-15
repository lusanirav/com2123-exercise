#include <iostream>
#include<cmath>

int main(){
float h,d,angle;
printf ("enterthe height of the tree in inches:");
scanf("%f",&h);
printf("enter the distance to the tree in feet:");
scanf("%f",&d);
printf("enter the angle to the top of the tree in degrees:");
scanf("%f",&angle);
float radian =angle*M_PI/180.0;

//calculate the height of the tree in feet using trignometry
float height_feet=tan(radian)*d+h/12.0;
int feet =(int)height_feet;
float inches =(height_feet-feet)*12.0;

printf("the height of the tree is %d feet%.1f inche/n",feet,inches);
return 0;
}
