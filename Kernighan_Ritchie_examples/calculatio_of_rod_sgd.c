#include <stdio.h>
#include <math.h>
int main (){
  float l,f,F,lFA,dcha,dpa,dda;
  float v=299792458,t;
   printf("l-длинна волны, v-скорость распространения э.м. волны, t -период колебаний\n");
   printf("l-[m];v-[m/s]=%f;t-[Mhz]\n",v);
   printf("Длинна волны:l= v/t\n");
   printf("Введите частоту для расчёта длины вибратора[f-Mhz][xx.xx]:\n ");
   	scanf("%f",&f);
   f=f*(pow(10,6));
   l=v/f;
   printf("Длинна волны[m]:%f\n",l);
   lFA=l*5/8;
   printf("длинна 5/8[m]:%f\n",lFA);
   dpa=(l/2);
   printf("Длинна полуволновой антенны в свободном пространстве [m]:%3.2f\n" ,dpa);
   dcha=(l/4);
   printf("Четверть длины волны [m]:%3.2f\n",dcha);
   dda =(l/(5.0/8.0));
   printf("Пять-восьмых длины антенны [m]:%3.2f\n",dda);
   printf("\n");
  return(0);
 }
