#include <stdio.h>
#include <stdbool.h>

int main(){
    //single line comment
    /*
    multiple line comment
    */
   //escape sequences
    //printf("I\n \nlike \n mathematics\n");//own line
    //printf("what\t is\t your \t name\n");//spaced out line
    //printf("Where\n is\n tokyo\n ");

    int x;//declaration
    x = 1;//initalisation
    int y= 321;//declaration and initialisation

    int age = 20;//integer
    double banana=0.877655443;//
    float grade=2.5;//float
    char jhg='C';//single character
    char name[]="manvin";//array of characters
    bool e = false;
    
    
    float item1=5.75;
    float item2=10.00;
    float item3=6;

    const float PI=3.14;//FIXED VALUE THAT CANNOT BE ALTERED
    PI;
    printf("%f\n",PI);


    printf("I am %i years old\n",age);
    printf("The double is %lf\n",banana);
    printf("The float is %f\n",grade);
    printf("The single character is %c\n",jhg);
    printf("The char is %s\n",name);
    printf("%d\n",e);


    printf("item 1 is %7.2f\n",item1);//format specifier
    printf("itwm 2 is %-8.2f\n",item2);
    printf("item 3 is %7.2f\n",item3);



    
    return 0;
}