#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
typedef struct{
    double x;
    double y;
    double z;
} Vector;
void print_vector(const Vector v);
int main(){
    Vector v1={1,2,3}, v2={-1,0,2}, v3={0,0,1};
    printf("v1=");
    print_vector(v1);
     printf("v2=");
    print_vector(v2);
     printf("v3=");
    print_vector(v3);
    printf("v1+v2=");
    void print_vector(sum(v1+v2));
       
   





    return 0;
}
void print_vector(const Vector v){
    printf("%f %f %f\n", v1.x,v1.y,v1.z);
}
vector sum(const vector v1, const vector v2){
    vector sm;
    sm.x=v1.x+v2.x;
    return sm;
}