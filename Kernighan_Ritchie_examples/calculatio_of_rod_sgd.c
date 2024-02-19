#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
  float l, f, lFA, dcha, dpa, dda;
  float v = 299792458.000;
  // char *setlocale(LC_ALL, "ru_RU");
  printf("l-длинна волны, v-скорость распространения э.м. волны, t -период колебаний\n");
  printf("l-[m];v-[m/s]=%f;t-[Mhz]\n", v);
  printf("Длинна волны:l= v/t\n");
  printf("Введите частоту для расчёта длины вибратора[f-Mhz][xx.xx]:\n ");
  while (f != EOF)
  {
    scanf("%f", &f);
    f = f * (pow(10, 6));
    l = v / f;
    printf("Длинна волны[m]:f = %f\n", f);
    printf("Длинна волны[m]:v = %f\n", v);
    printf("Длинна волны[m]:l = %3.6f\n", l);
    lFA = l * (5.0 / 8.0);
    printf("длинна [m]:5/8-l = %f\n", lFA);
    dpa = l * (1.0 / 2.0);
    printf("Длинна полуволновой антенны в свободном пространстве [m]:1/2-l = %3.2f\n", dpa);
    dcha = l * (1.0 / 4.0);
    printf("Четверть длины волны [m]:1/4-l = %3.2f\n", dcha);
    dda = (l * (5.0 / 8.0));
    printf("Пять-восьмых длины антенны [m]:5/8-l = %3.2f\n", dda);
    printf("\n");
  }
  return (0);
}