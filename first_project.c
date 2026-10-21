/* #include <stdio.h>

int main() {
    int age;
    char name[50];
    printf("What is your name? ");

    scanf("%s", name);
    printf("What is your age? ");
    scanf("%d", &age);

    printf("Hello %s!\n", name);
    printf("You are %d years old.\n", age);
}*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*int main() {
    int number1;
    int number2;
    char operation;
    printf("What is your 1st number? ");
    scanf("%d", &number1);

    printf("What is your 2nd number? ");
    scanf("%d", &number2);

    printf("What is your chosen operation? ");
    scanf(" %c", &operation);
    if (operation == '+') {
        printf("Result: %d\n", number1+number2);
    }
    else if (operation == '*'){
        printf("Result: %d\n", number1*number2);
    }
    else if (operation == '/'){
        printf("Result: %d\n", number1/number2);
    }
    else if (operation == '-'){
        printf("Result: %d\n", number1-number2);
    }
    else {
        printf("Unknown operation");
    }
}

int main() {
    int number1;
    int number2;
    printf("What is your 1st number? ");
    scanf("%d", &number1);

    printf("What is your 2nd number? ");
    scanf("%d", &number2);
    printf("Result: %f\n", (float)number1 / number2);
    return 0;
}

int main() {
    char name[50];
    printf("What is your name? ");
    scanf("%s", name);
    printf("Your name has %zu characters\n", strlen(name));
}
int main() {
    int numbers[5];
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        printf("Enter: ");
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 5; i++) {
        sum = numbers[i]+ sum;
        
    }
    printf("%d\n", sum);
}
int main() {
    int i;
    printf("Enter: ");
    scanf("%d", &i);
    while(i!=0) {
        printf("Enter: ");
        scanf("%d", &i);
    }
    printf("Done!");
}
int main() {
    int numbers[5];
    int sum = 0;
    for (int i = 0; i<5; i++){
        printf("Enter: ");
        scanf("%d", &numbers[i]);

    }
    for (int i = 0; i<5; i++){
        sum = numbers[1]+sum;

    }
    printf("%d\n", sum);
}
int main() {
    int number;
    int i = 1;
    printf("Enter:  ");
    scanf("%d", &number);
    if (number<=0) {
        printf("Enter positive number!");
    }
    else {
        while(i<= number) {
            printf("%d\n", i);
            i++;
    }
    }
    
}

int main() {
    int numbers[5];
    int sum = 0;
    int max;

    for (int i =0; i<5; i++) {
        printf("Enter: ");
        scanf("%d", &numbers[i]);
    }
    max = numbers[0];
    for (int i = 0; i<5; i++) {
        sum = sum + numbers[i];
        
        if (max<numbers[i]){
            max = numbers[i];
        }
    }
    printf("%d\n", sum);
    printf("%d\n", max);
}
int main() {
    char name[50];
    printf("Name: ");
    scanf("%s", name);
    sayHI(name);
}
void sayHI(char name[50]) {
    
    printf("Hello %s!!\n", name);
}
void sayHI(int age) {
    
    printf("You're %d y old\n", age);
}
int main() {
    int age;
    printf("Age: ");
    scanf("%d", &age);
    sayHI(age);
}
int multipply(int a, int b) {
    return a*b;    
}
int main() {
    int a;
    int b;
    printf("1: ");
    scanf("%d", &a);
    printf("2: ");
    scanf("%d", &b);
    printf("%d", multipply(a, b));
}

int isEven(int numbers) {
    if (numbers%2==0) {
        return 1;
    }
    else if (numbers%2!=0){
        return 0;
}}

void count(int numbers[5], int sum){
    for (int i = 0; i<5;i++) {
        printf("Type:  ");
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i<5;i++) {
        sum = sum + numbers[i];
    }
    printf("%d\n", sum);
}
int main() {
    int numbers[5];
    int sum = 0;
    
    count(numbers, sum);
    for (int i =0; i<5;i++){
        int b = isEven(numbers[i]);
        if (b==0){
            printf("%d - ODD\n", numbers[i]);
    }
        else if (b==1) {
            printf("%d - Even\n", numbers[i]);
    }
        
    }


}

void swap(int *a, int *b) {
    int temp = *a;
    if (*a > *b) {
        *a = *b;
        *b = temp;
        
    }
    
    printf("a = %d\n", *a);
    printf("b = %d", *b);
}

int main() {
    int a = 90;
    int b = 20;
    swap(&a, &b);

}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int *p = numbers;
    for (int i=0; i<5; i++) {
        printf("%d\n", *(p+i));
    }
    
}

int main() {
    int numbers[3] = {10, 20, 30};
    int *p = numbers;
    *(p+1) = 50;
    for (int i=0; i<3; i++) {
        printf("%d\n", *(p+i));
    }
}

int main() {
    char name[] = "Elton";
    char *p = name;
    for (int i = 0; *(p + i) != '\0'; i++) {
        printf("%c\n", *(p+i));
    }
}
void printString(char *p) {
    for (int i = 0; *(p + i) != '\0'; i++) {
        if (*(p + i) >= 'a' && *(p + i) <= 'z') {
            *(p+i) = *(p+i)-32;
            
        }
        printf("%c", *(p+i));

}}

int main() {
    char name[] = "Elton";

    printString(name);
}

void fillArray(int *p, int size) {
    for (int i = 0; i<size; i++) {
        printf("Fill it:  ");
        scanf("%d", &*(p+i));
    }

}

int findmax(int *p, int size) {
    int max = p[0];
    for (int i = 0; i<size; i++) {
        if (max < p[i]) {
            max = p[i];
        }}
    
    return max;
}
int findmin(int *p, int size) {
    int min = p[0];
    for (int i = 0; i<size; i++) {
        if (min > p[i]) {
            min = p[i];
        }}
    return min;
    }

int findsum(int *p, int size) {
    int sum = 0;
    for (int i = 0; i<size; i++) {
        sum = sum + p[i];
    }
    return sum;
}
void printArray(int *p, int size) {
    for (int i = 0; i<size; i++) {
        printf("%d\n", *(p+i));
    }
}


int main() {
    int size;
    printf("Type....  ");
    scanf("%d", &size);
    int *p = malloc(size * sizeof(int));
    fillArray(p, size);
    printArray(p, size);
    int max = findmax(p, size);
    printf("MAX: %d\n", max);
    int min = findmin(p, size);
    printf("MIN: %d\n", min);
    int sum = findsum(p, size);
    printf("SUM: %d\n", sum);
    free(p);
}

void doubleArray(int *p, int size) {
    for (int i = 0; i<size; i++) {
        printf("Fill it:  ");
        scanf("%d", &*(p+i));
    }

    for (int i = 0; i<size; i++) {
        p[i] *2;
    }
}
void fillArray(int *p, int size) {
    for (int i = 0; i<size; i++) {
        printf("Fill it:  ");
        scanf("%d", &*(p+i));
    }

}

void doublear(int *p, int size) {
    for (int i = 0; i<size; i++) {
        p[i] = p[i]*2;
    }
}

int findmax(int *p, int size) {
    int max = p[0];
    for (int i = 0; i<size; i++) {
        if (max < p[i]) {
            max = p[i];
        }}
    
    return max;
}

void printArray(int *p, int size) {
    for (int i = 0; i<size; i++) {
        printf("%d\n", *(p+i));
    }
}

int main() {
    int size;
    printf("Type....  ");
    scanf("%d", &size);
    int *p = malloc(size * sizeof(int));
    fillArray(p, size);
    doublear(p, size);
    int max = findmax(p, size);
    printf("Max %d\n", max);
    printArray(p, size);
    free(p);
}

int main() {
    int size;
    printf("Type....  ");
    scanf("%d", &size);
    int *p = malloc(size * sizeof(int));
    for (int i = 0; i<size; i++) {
        printf("Fill it:  ");
        scanf("%d", &*(p+i));
    }
    p = realloc(p, (size+3) *sizeof(int));
    for (int i = size; i<size+3; i++) {
        printf("Fill it:  ");
        scanf("%d", &*(p+i));
    }
    for (int i = 0; i<size+3; i++) {
        printf("%d\n", *(p+i));
    }
    free(p);
}


void fillit(int *p, int size) {
    for (int i =0; i<size; i++) {
        printf("Fill ");
        scanf("%d", &*(p+i));

    }
}
void printArray(int *p, int size) {
    for (int i = 0; i<size; i++) {
        printf("\n Current %d\n", *(p+i));
    }}

int findmax(int *p, int size, int add) {
    int max = p[0];
    for (int i = 0; i<size+add; i++) {
        if (max < p[i]) {
            max = p[i];
        }}
    
    return max;
}
int findmin(int *p, int size, int add) {
    int min = p[0];
    for (int i = 0; i<size+add; i++) {
        if (min > p[i]) {
            min = p[i];
        }}
    return min;
    }

int findsum(int *p, int size, int add) {
    int sum = 0;
    for (int i = 0; i<size+add; i++) {
        sum = sum + p[i];
    }
    return sum;}

int main() {
    int size;
    printf("How many:  ");
    scanf("%d", &size);
    int *p = malloc(size * sizeof(int));
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    fillit(p, size);
    printArray(p, size);
    int add;
    printf("Anything else?  ");
    scanf("%d", &add);
    p = realloc(p, (size+add) * sizeof(int));
    for (int i =size; i<size+add; i++) {
        printf("fill ");
        scanf("%d", &*(p+i));
    }
    for (int i = 0; i<size+add; i++) {
        printf("New %d\n", *(p+i));
    }
    int max = findmax(p, size, add);
    printf("MAX: %d\n", max);
    int min = findmin(p, size, add);
    printf("MIN: %d\n", min);
    int sum = findsum(p, size, add);
    printf("SUM: %d\n", sum);
    free(p);
}*/

/*struct Car {
    char brand[50];
    int year;
    float price;
};

void updateCar(struct Car *p) {;
    p->year = 2025;
    p->price = 40000;
}
int main() {
    struct Car car = {"Tesla", 2020, 35000};
    struct Car *p = &car;

    printf("%d\n", car.year);
    printf("%.2f\n", car.price);
}*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int *p = malloc(sizeof(int));
    if (p == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    *p = 42;

    printf("%d\n", *p);
    free(p);
    return 0;
}