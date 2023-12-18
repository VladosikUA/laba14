                                                           //Завдання 1
//#include <stdio.h>
//#include <Windows.h>
//int main() {
//	SetConsoleOutputCP(1251);
//	int n;
//	printf("Введіть кількість елементів масиву:");
//	scanf_s("%d", &n);
//	int* arr = (int*)malloc(n * sizeof(int));
//	if (arr == NULL) {
//		printf(" Помилка виділення памяті\n ");
//		return 0;
//	}
//    printf("Введіть елементи масиву:\n");
//    for (int i = 0; i < n; ++i) {
//        printf("Елемент %d: ", i + 1);
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
//	printf("Максимальне значення= %d\n", arr[max]);
//	printf("Мінімальне значення= %d\n", arr[min]);
//	printf("відстань між макcимальним та мінімальним значеннями %d\n", a);
//	free(arr);
//	return 0;
//	 }
                                                        //Завдання 2
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int main() {
    int n;
    SetConsoleOutputCP(1251);
    printf("Введіть розмір масиву: ");
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Не вдалося виділити пам'ять для масиву.\n");
        return 0;  
    }
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; ++i) {
        printf("Елемент %d: ", i + 1);
        scanf_s("%d", arr + i);
    }
    float suma = 0;
    int* fptr = arr;
    for (int i = 0; i < n; ++i) {
        suma += *fptr;
        fptr++;
    }
    float Ser = suma / n;
    printf("Середнє значення елементів масиву: %f\n", Ser);
    free(arr);
    return 0;
}
