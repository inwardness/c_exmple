Циклы позволяет выполнить одно действие множество раз в зависимости от определенного условия. В языке Си есть следующие типы циклов:

    for

    while

    do...while

Цикл for

Цикл for имеет следующее формальное определение:
	
for (инициализация; условие; приращение;)
{
    // тело цикла
}

заголовок цикла состоит из трех частей. Первая часть - инициализация выполняется один раз при начале выполнения цикла и представляет установку начальных условий, как правило, это инициализация счетчиков - специальных переменных, которые используются для контроля за циклом.

Вторая часть - условие, при соблюдении которого выполняется цикл. Зачастую в качестве условия используется операция сравнения, и если она возвращает ненулевое значение (то есть условие истинно), то выполняется тело цикла, а затем вычисляется выражение_3.

Третья часть - приращение задает изменение параметров цикла. Обычно здесь происходит увеличение счетчиков цикла.

Рассмотрим стандартный цикл for и для этого выведем числа с 0 до 5 на консоль:
	
#include <stdio.h>
 
int main(void)
{
    for (int i = 0; i < 6; i++)
    {
        printf("%d", i);
    }
    return 0;
}

Первая часть объявления цикла - int i = 0 - создает и инициализирует счетчик i. Счетчик необязательно должен представлять тип int. Это может быть и другой числовой тип, например, float. И перед выполнением цикла его значение будет равно 0. В данном случае это то же самое, что и объявление переменной.

Вторая часть - условие, при котором будет выполняться цикл. В данном случае цикл будет выполняться, пока i не достигнет 6.

И третья часть - приращение счетчика на единицу. Опять же нам необязательно увеличивать на единицу. Можно уменьшать: i--. Можно изменять на другое значение: i+=2.

В итоге блок цикла сработает 6 раз, пока значение i не станет равным 6. И каждый раз это значение будет увеличиваться на 1.

012345

Каждый отдельный проход цикла называется итерацией. То есть в примере выше было 6 итераций.

Усложним цикл и выведем квадраты чисел от 0 до 8:
	
#include <stdio.h>
int main(void)
{
    for (int i = 0; i < 9; i++)
    {
        printf("%d * %d = %d \n", i, i,  i * i);
    }
    return 0;
}

Здесь блок цикла сработает 9 раз, пока значение i не станет равным 9. И каждый раз это значение будет увеличиваться на 1.

0 * 0 = 0
1 * 1 = 1
2 * 2 = 4
3 * 3 = 9
4 * 4 = 16
5 * 5 = 25
6 * 6 = 36
7 * 7 = 49
8 * 8 = 64

Необязательно указывать все три выражения в определении цикла, мы можем одно или даже все их них опустить:
	
int i = 1;
for ( ; i < 9 ; )
{
    printf("%d * %d = %d \n", i, i,  i * i);
    i++;
}

Формально определение цикла осталось тем же, только теперь первое и третье выражения в определении цикла отсутствуют: for (; i < 9;). Переменная-счетчик определена и инициализирована вне цикла, а ее приращение происходит в самом цикле.

Можно определять вложенные циклы. Например, выведем таблицу умножения:
	
#include <stdio.h>
int main(void)
{
    for (int i=1; i < 10; i++)
    {
        for(int j = 1; j < 10; j++)
        {
            printf("%d \t", i * j);
        }
        printf("\n");
    }
    return 0;
}
Цикл do..while

В цикле do..while сначала выполняется код цикла, а потом происходит проверка условия в инструкции while. И пока это условие истинно, то есть не равно 0, то цикл повторяется.
	
do
{
    // действия цикла
}
while (условие);

Например:
	
#include <stdio.h>
int main(void)
{
    int i = 6;
    do
    {
        printf("%d", i);
        i--;
    }
    while (i > 0);
    return 0;
}

Здесь код цикла сработает 6 раз, пока i не станет равным нулю. Но важно отметить, что цикл do гарантирует хотя бы единократное выполнение действий, даже если перед первым выполнением условие в инструкции while не будет истинно. То есть мы можем написать:
	
int i = -1;
do
{
    printf("%d", i);
    i--;
}
while (i > 0);

Хотя у нас переменная i меньше 0, цикл все равно один раз выполнится.
Цикл while

В отличие от цикла do цикл while сразу проверяет истинность некоторого условия, и если условие истинно, то есть не равно 0, то код цикла выполняется:
	
while(условие){
    // выполняемые инструкции, если условие истинно
}

Например, выведем на консоль все числа от 6 до 1:
	
#include <stdio.h>
int main(void)
{
    int i = 6;
    while (i > 0)
    {
        printf("%d \n", i);
        i--;
    }
    return 0;
}

Здесь, пока истинно условие i > 0, будут выполняться действия цикла - printf("%d \n", i) и i--
Операторы continue и break

Иногда возникает необходимость выйти из цикла до его завершения. В этом случае можно воспользоваться оператором break. Например:
	
int i = 1;
for ( ; ; )
{
    printf("%d * %d = %d \n", i, i,  i * i);
    i++;
    if (i > 5) break;
}

Здесь когда значение переменной i достигнет 5, осуществляется выход из цикла с помощью оператора break.

В отличие от оператора break, оператор continue производит переход к следующей итерации. Например, нам надо посчитать сумму только нечетных чисел из некоторого диапазона:
	
#include <stdio.h>
int main(void)
{
    int result = 0;
    for (int i=0; i<10; i++)
    {
        if (i % 2 == 0) continue;
        result +=i;
    }
    printf("result = %d", result);  // 25
    return 0;
}

Чтобы узнать, четное ли число, мы получаем остаток от целочисленного деления на 2, и если он равен 0, то с помощью оператора continue переходим к следующей итерации цикла. А если число нечетное, то складываем его с остальными нечетными числами.