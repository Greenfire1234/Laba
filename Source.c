#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float* array; 
    unsigned int n;      
    unsigned int max;
    unsigned int min;
    float b = 0;
    int a = 0;
    int c = 0;
    int d = 0;
    float total = 0;
    float total1 = 0;
    printf("Enter n below 100: "); scanf_s("%d", &n);
    printf("Enter min: ");scanf_s("%d", &min);
    printf("Enter max: ");scanf_s("%d", &max);
    array = malloc(n * sizeof(int));

    
    for (int i = 0;i < n; i++)
    {
        
        array[i]= (float)rand() / RAND_MAX * (max - min) + min;
        //printf("%lf\n ", array[i]);

    }
    printf("\n");
    if (n < 10) {
        for (int i = 0;i < n;i++) {
            a = array[i];                           // ���������� ����� ����� ����� array[i]
            b = array[i] - a;                       //����� ����� �����
            c = b * 10;                             //����� ����������
                                                    //printf("c:%d", c);
            for (int j = 0;j <n;j++) {
                if (c == j ) { 
                   
                                                    //printf("array[i] : %lf",array[i]);
                    total = 0;                      //�������� ���� ����� �==j
                    total = total - array[i];       //�������� �� �����
                                                    //printf("-total: %lf, %d,  %i\n", total,i,j);
                    break;
                }
                else
                {
                                                    //printf("array[i] : %lf", array[i]);
                    total = total + array[j];       //���������� �����
                                                    //printf("+total: %lf, %d, %i\n", total, i,j);
                }
            }
            total1 = total1 + total;                //���������� total � j-���� ������� � ����� total1
            total = 0;                              //�������� ����� ����� ����(j)
                                                    // printf("----------------total1:  %lf\n", total1);
        }
    }
    if (n >= 10 && n<=99) {
        for (int i = 0;i < n;i++) {
            a = array[i];                           // ���������� ����� ����� ����� array[i]
            b = array[i] - a;                       //����� ����� �����
            c = b * 10;                             //����� ����������
                                                    //printf("c:%d", c);
            for (int j = 0;j < n;j++) {
                if (c == j) {

                                                    //printf("array[i] : %lf",array[i]);
                    total = 0;                      //�������� ���� ����� �==j
                    total = total - array[i];       //�������� �� �����
                                                    //printf("-total: %lf, %d,  %i\n", total,i,j);
                    break;
                }
                else
                {
                                                    //printf("array[i] : %lf", array[i]);
                    total = total + array[j];       //���������� �����
                                                    //printf("+total: %lf, %d, %i\n", total, i,j);
                }
            }
            total1 = total1 + total;                //���������� total � j-���� ������� � ����� total1
            total = 0;                              //�������� ����� ����� ����(j)
                                                    // printf("----------------total1:  %lf\n", total1);
        }
        

    }
    if (n >=100) {
        printf("You must enter number below 100");
    }
    else {
        printf("Total:%lf", total1);
    }
    //���������� ���������
    free(array);                                    //����������� ������
    return 0;
}