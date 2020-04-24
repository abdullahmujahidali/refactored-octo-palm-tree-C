#include<stdio.h>
#include "geometry.h"
#define PI 3.141592653589793


int main(){
int measurement,figure;
int backToMenu,moreFigure;
float l,w,a,b,c,r,h;
do{

do{
printf("\nMenu: ");
printf("\n1) Perimeter\n2) Area\n3) Volume");
printf("\nWhat would you like to calculate?: ");
scanf("%d",&measurement);
switch(measurement){
case(1):
do{

do{
printf("\nWhat geometrical figure would you like to use?: ");
printf("\n1) Square\n2) Rectangle\n3) Triangle\n4) Circle\n");
printf("\nUser Choice: ");
scanf("%d",&figure);
printf("\nEnter the following values in meters:");
switch(figure){
case(1):
printf("\nLength: "); scanf("%f",&l);
l = validateInput(l);
printf("\nThe perimeter of the square is %0.2f meters",perimeterSquare(l));
break;
case(2):
printf("\nLength: "); scanf("%f",&l);
l = validateInput(l);
printf("\nWidth: "); scanf("%f",&w);
w = validateInput(w);
printf("\nThe perimeter of the rectangle is %0.2f meters",perimeterRectangle(l,w));
break;
case(3):
printf("\na: "); scanf("%f",&a);
a = validateInput(a);
printf("\nb: "); scanf("%f",&b);
b = validateInput(b);
printf("\nc: "); scanf("%f",&c);
c = validateInput(c);
printf("\nThe perimeter of the triangle is %0.2f meters",perimeterTriangle(a,b,c));
break;
case(4):
printf("\nRadius: "); scanf("%f",&r);
r = validateInput(r);
printf("\nThe perimeter of the circle is %0.2f meters",perimeterCircle(r));
break;
default:
figure = 0;
printf("Unknown input");
break;
}
}while(figure==0);

printf("\nWould you like to make another perimeter calculation (1 for Yes, 2 for No)?: ");
scanf("%d",&moreFigure);
}while(moreFigure==1);

break;
case(2):
do{

do{
printf("\nWhat geometrical figure would you like to use?: ");
printf("\n1) Square\n2) Rectangle\n3) Triangle\n4) Circle\n");
printf("\nUser Choice: ");
scanf("%d",&figure);
printf("\nEnter the following values in meters:");
switch(figure){
case(1):
printf("\nLength: "); scanf("%f",&l);
l = validateInput(l);
printf("\nThe area of the square is %0.2f meters",areaSquare(l));
break;
case(2):
printf("\nLength: "); scanf("%f",&l);
l = validateInput(l);
printf("\nWidth: "); scanf("%f",&w);
w = validateInput(w);
printf("\nThe area of the rectangle is %0.2f meters",areaRectangle(l,w));
break;
case(3):
printf("\na: "); scanf("%f",&a);
a = validateInput(a);
printf("\nb: "); scanf("%f",&b);
b = validateInput(b);
printf("\nc: "); scanf("%f",&c);
c = validateInput(c);
printf("\nThe area of the triangle is %0.2f meters",areaTriangle(a,b,c));
break;
case(4):
printf("\nRadius: "); scanf("%f",&r);
r = validateInput(r);
printf("\nThe area of the circle is %0.2f meters",areaCircle(r));
break;
default:
figure = 0;
printf("Unknown input");
break;
}
}while(figure==0);

printf("\nWould you like to make another area calculation (1 for Yes, 2 for No)?: ");
scanf("%d",&moreFigure);
}while(moreFigure==1);
break;
case(3):
do{

do{
printf("\nWhat geometrical figure would you like to use?: ");
printf("\n1) Square\n2) Rectangle\n3) Triangle\n4) Circle\n");
printf("\nUser Choice: ");
scanf("%d",&figure);
printf("\nEnter the following values in meters:");
switch(figure){
case(1):
printf("\nLength: "); scanf("%f",&l);
l = validateInput(l);
printf("\nThe volume of the square is %0.2f meters",volumeSquare(l));
break;
case(2):
printf("\nLength: "); scanf("%f",&l);
l = validateInput(l);
printf("\nWidth: "); scanf("%f",&w);
w = validateInput(w);
printf("\nheight: "); scanf("%f",&h);
h = validateInput(h);
printf("\nThe volume of the rectangular prism is %0.2f meters",volumeRectangle(l,w,h));
break;
case(3):
printf("\na: "); scanf("%f",&a);
a = validateInput(a);
printf("\nb: "); scanf("%f",&b);
b = validateInput(b);
printf("\nc: "); scanf("%f",&c);
c = validateInput(c);
printf("\nheight: "); scanf("%f",&h);
h = validateInput(h);
printf("\nThe volume of the triangular pyramid is %0.2f meters",volumeTriangle(a,b,c,h));
break;
case(4):
printf("\nRadius: "); scanf("%f",&r);
r = validateInput(r);
printf("\nThe volume of the sphere is %0.2f meters",volumeCircle(r));
break;
default:
figure = 0;
printf("Unknown input");
break;
}
}while(figure==0);

printf("\nWould you like to make another volume calculation (1 for Yes, 2 for No)?: ");
scanf("%d",&moreFigure);
}while(moreFigure==1);
break;
default:
measurement = 0;
printf("Unknown input");
break;

}
}while(measurement==0);

printf("\nWould you like to go back to the Main PAV menu (1 for Yes, 2 for No)?: ");
scanf("%d",&backToMenu);
}while(backToMenu==1);

return 0;
}

// FUNCTION DEFINITIONS

// INPUT VALIDATION
float validateInput(float userInput){
float correctedInput = userInput;
while(correctedInput<=0){
printf("Error: The input must be a positive value\nPlease try again: ");
scanf("%f",&correctedInput);
}
return correctedInput;
}

//--- PERIMETER --------
float perimeterSquare(float length){
return 4*length;
}

float perimeterRectangle(float length,float width){
return 2*(length+width);
}
float perimeterTriangle(float a,float b,float c){
return a+b+c;
}
float perimeterCircle(float radius){
return 2*PI*radius;
}

//---- AREA---------
float areaSquare(float length){
return length*length;
}
float areaRectangle(float length, float width){
return length*width;
}
float areaTriangle(float a,float b,float c){
//Heron's formula
float s = (a+b+c)/2;
return sqrt(s*(s-a)*(s-b)*(s-c));
}
float areaCircle(float radius){
return PI*radius*radius;
}

//-----VOLUME-----
float volumeSquare(float length){
return length*length*length;
}
float volumeRectangle(float length, float width, float height){
return length*width*height;
}

float volumeTriangle(float a, float b, float c, float height){
float areaOfTriangularFace = areaTriangle(a,b,c);
return areaOfTriangularFace*height;
}

float volumeCircle(float radius){
return (4.0/3)*PI*radius*radius*radius;
}

//_______ geometry.h file ______________________

#ifndef _GEOMETRY_H_
#define _GEOMETRY_H_
float validateInput(float userInput);
float perimeterSquare(float length);
float perimeterRectangle(float length,float width);
float perimeterTriangle(float a,float b,float c);
float perimeterCircle(float radius);
float areaSquare(float length);
float areaRectangle(float length, float width);
float areaTriangle(float a,float b,float c);
float areaCircle(float radius);
float volumeSquare(float length);
float volumeRectangle(float length, float width, float height);
float volumeTriangle(float a, float b, float c, float height);
float volumeCircle(float radius);

#endif
