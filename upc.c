#include <stdio.h>


int main()
{
int d;
int i1;
int i2;
int i3;
int i4;
int i5;
int j1;
int j2;
int j3;
int j4;
int j5;
//First-Sum
int first_sum;
//second-Sum
int second_sum;
//final-Sum(end sum)
int total;
printf("Enter the first (single) digit:\n");
scanf("%1d", &d);
printf("Enter the first five digits:\n");
scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);

printf("Enter the second five digits:\n");
scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
 
first_sum = d + i2 + i4 + j1 + j3 + j5;
second_sum = i1 + i3 + i5 + j2 + j4;

total= (first_sum * 3) + second_sum;


printf("%1d", 9-((total-1)%10));

return 0;

}
