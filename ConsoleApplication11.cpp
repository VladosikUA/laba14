                                                           //�������� 1
//#include <stdio.h>
//#include <Windows.h>
//int main() {
//	SetConsoleOutputCP(1251);
//	int n;
//	printf("������ ������� �������� ������:");
//	scanf_s("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	if (arr == NULL) {
//		printf(" ������� �������� �����\n ");
//		return 0;
//	}
//    printf("������ �������� ������:\n");
//    for (int i = 0; i < n; ++i) {
//        printf("������� %d: ", i + 1);
//        scanf_s("%d", arr + i);
//    }
// 	int min = 0, max = 0;
//	for (int i=1; i<n; ++i){
//		if (arr[i] < arr[min]) {
//			min = i;
//		}
//		else if (arr[i] > arr[max]) {
//			max = i;
//		}
//	   }
//	int a =abs(max - min);
//	printf("����������� ��������= %d\n", arr[max]);
//	printf("̳������� ��������= %d\n", arr[min]);
//	printf("������� �� ���c�������� �� ��������� ���������� %d\n", a);
//	free(arr);
//	return 0;
//	 }
                                                        //�������� 2
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main() {
    int n;
    SetConsoleOutputCP(1251);
    printf("������ ����� ������: ");
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("�� ������� ������� ���'��� ��� ������.\n");
        return 0;  
    }
    printf("������ �������� ������:\n");
    for (int i = 0; i < n; ++i) {
        printf("������� %d: ", i + 1);
        scanf_s("%d", arr + i);
    }
    float suma = 0;
    int* fptr = arr;
    for (int i = 0; i < n; ++i) {
        suma += *fptr;
        fptr++;
    }
    float Ser = suma / n;
    printf("������ �������� �������� ������: %f\n", Ser);
    free(arr);
    return 0;
}
