#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define oe (unsigned char)148
#define ae (unsigned char)132
#define ue (unsigned char)129
#define ss (unsigned char)225

int loop;

float pi = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651328230664709384460955058223172535940812848111745028410270193852110555964462294895493038196442881097566593344612847564823378678316527120190914564856692346034861045432664821339360726024914127372458700660631558817488152092096282925409171536436789259036001133053054882046652138414695194151160943305727036575959195309218611738193261179310511854807446237996274956735188575272489122793818301194912;

void getch(){
    printf("\nPress [ENTER] to continue!");
    getchar();
    while(getchar() !='\n');
}

int main();

void integerCalculator(){
    int valueA;
    int valueB;
    int function;
    
    printf("Gib eine Zahl f%cr A an!\n", ue);
    scanf("%d", &valueA);
    printf("Gib eine Zahl f%cr B an!\n", ue);
    scanf("%d", &valueB);
    printf("\n1 = +\n2 = -\n3 = *\n4 = /\n5 = Zur%cck\n", ue);
    scanf("%d", &function);
    printf("\nA: %d\n", valueA);
    printf("B: %d\n", valueB);
    
    if(function == 1){
        printf("Das Ergebnis ist: %d\n", valueA + valueB);
        getch();
        system("clear");
    }else if(function == 2){
        printf("Das Ergebnis ist: %d\n", valueA - valueB);
        getch();
        system("clear");
    }else if(function == 3){
        printf("Das Ergebnis ist: %d\n", valueA * valueB);
        getch();
        system("clear");
    }else if(function == 4){
        printf("Das Ergebnis ist: %d\n", valueA / valueB);
        printf("Und der Rest beträgt: %d\n", valueA % valueB);
        getch();
        system("clear");
    }else if(function == 5){
        system("clear");
    }else{
        printf("Das ist keine Option!");
        integerCalculator();
    }
}

void floatingPointCalculator(){
    float valueA;
    float valueB;
    int function;
    
    printf("Gib eine Zahl f%cr A an!\n", ue);
    scanf("%f", &valueA);
    printf("Gib eine Zahl f%cr B an!\n", ue);
    scanf("%f", &valueB);
    printf("\n1 = +\n2 = -\n3 = *\n4 = /\n5 = Zur%cck\n", ue);
    scanf("%d", &function);
    printf("\nA: %f\n", valueA);
    printf("B: %f\n", valueB);
    
    if(function == 1){
        printf("Das Ergebnis ist: %.2f\n", valueA + valueB);
        getch();
        system("clear");
    }else if(function == 2){
        printf("Das Ergebnis ist: %.2f\n", valueA - valueB);
        getch();
        system("clear");
    }else if(function == 3){
        printf("Das Ergebnis ist: %.2f\n", valueA * valueB);
        getch();
        system("clear");
    }else if(function == 4){
        printf("Das Ergebnis ist: %.2f\n", valueA / valueB);
        getch();
        system("clear");
    }else if(function == 5){
        system("clear");
    }else{
        printf("Das ist keine Option!");
        floatingPointCalculator();
    }
}

void kreisBerechnen(){
    float radius;
    
    printf("Gebe den Radius ein!\n");
    scanf("%f", &radius);
    printf("\nRadius: %.2f\n", radius);
    printf("Umfang: %.2f\n", 2 * radius * pi);
    printf("Fl%cche: %.2f\n", ae, radius * radius * pi);
    getch();
    system("clear");
}

void formelBerechnung(){
    float radius;
    float height;
    
    printf("Gebe einen Radius ein!\n");
    scanf("%f", &radius);
    printf("\nGebe eine H%che an!\n", oe);
    scanf("%f", &height);
    printf("\nRadius: %.2f\n", radius);
    printf("H%che: %.2f\n", oe, height);
    printf("Kreisfl%cche: %.2f\n", ae, radius * radius * pi);
    printf("Zylindervolumen: %.2f\n", radius * radius * pi * height);
    printf("Zylindermantel: %.2f\n", 2 * pi * radius * height);
    printf("Spherenfl%cche: %.2f\n", ae, 4 * pi * radius * radius);
    printf("Spherenvolumen: %.2f\n", 4/3 * pi * radius * radius * radius);
    getch();
    system("clear");
}

void digitSumCalc(){
    int number = 0;
    int remaining = 0;
    int digitSum = 0;

    printf("Gib eine beliebige Zahl ein!\n");
    scanf("%d", &number);

    while(number){
        remaining = number % 10;
        digitSum = digitSum + remaining;
        number = number / 10;
    }

    printf("\nDie Ziffernsumme ist: %d.\n", digitSum);
    getch();
    system("clear");
}

void towerCalculations(){
    int value = 0;
    int i = 0;
    int cache = 1;

    printf("Startzahl:\n");
    scanf("%d", &value);

    for(i = 0; i < 18; i++){
        if(i == 9){
            cache = 1;
        }
        if(i < 9){
            printf("%10d * %d = %-10d\n", value, cache, value * cache);
            value *= cache;
        }

        if(i >= 9){
            printf("%10d / %d = %-10d\n", value, cache, value / cache);
            value /= cache;
        }
        cache++;
    }
    getch();
    system("clear");
}

void factorialCalc(){
    int input = 0;
    int product = 1;
    int i = 0;

    printf("Eingabe Zahl:\n");
    scanf("%d", &input);

    for(i = 1; i <= input; i++){
        product *= i;
    }
    printf("\nL%csung: %d! ergibt %d.\n", oe, input, product);
    getch();
    system("clear");
}

void guessGame(){
    srand(time(NULL));

    int i = 0;
    int value = 0;
    int counter = 0;
    int randnum[5] = {0};

    randnum[0] = 0;
    randnum[1] = 15;
    randnum[2] = randnum[1] - randnum[0];
    randnum[3] = rand();
    randnum[4] = randnum[3] % randnum[2] + 1;

    printf("Errate eine Zahl, die im Bereich 1 bis 15 liegt (5 Versuche).\n");
    for(i = 1; i <= 5; i++){
        counter++;

        printf("Deine Eingabe:\n");
        scanf("%d", &value);
        if(randnum[4] == value){
            printf("Gratulation. Du hast die Zahl mit %d Versuch(en) erraten.\n", counter);
            i = 8;
        }else if(randnum[4] < value){
            printf("Hinweis: Die Zahl ist kleiner.\n");
        }else if(randnum[4] > value){
            printf("Hinweis: Die Zahl ist groesser.\n");
        }
    }
    
    printf("Die korrekte Zahl ist: %d.\n", randnum[4]);
    getch();
    system("clear");
}

void binaryCalc(){
    int valueBinary = 0;
    int cacheBinary = 0;
    int loopBinary = 0;
    int bin[50] = {0};

    printf("Gib eine Zahl ein\n");
    scanf("%d", &valueBinary);
    cacheBinary = valueBinary;

    while(valueBinary != 0){
        bin[loopBinary] = valueBinary % 2;
        valueBinary /= 2;
        loopBinary++;
    }

    --loopBinary;
    printf("Binaer ist %d: Binary Number: ", cacheBinary);
    while(loopBinary != -1){
        printf("%d", bin[loopBinary]);
        --loopBinary;
    }
    printf("\n\n");
    getch();
    system("clear");
}

int main(){
    while(loop < 1){
        int selection;
        printf("$$$$$$$                       $$                                    \n");
        printf("$$    $$                      $$                                    \n");
        printf("$$    $$   $$$$$$    $$$$$$$  $$$$$$$   $$$$$$$    $$$$$$    $$$$$$ \n");
        printf("$$$$$$$   $$    $$  $$        $$    $$  $$    $$  $$    $$  $$    $$\n");
        printf("$$    $$  $$$$$$$$  $         $$    $$  $$    $$  $$$$$$$$  $$      \n");
        printf("$$    $$  $$        $$        $$    $$  $$    $$  $$        $$      \n");
        printf("$$    $$   $$$$$$$   $$$$$$$  $$    $$  $$    $$   $$$$$$$  $$      \n");
        printf("                                                                    \n");
        printf("1. Ganzzahl Taschenrechner\n2. Gleit-Komma Taschenrechner\n3. Kreis berechnen\n4. Formelberechnung\n5. Ziffernsumme\n");
        printf("6. Turmrechnen\n7. Faktorielles Rechnen\n8. Zahlenraten\n9. Binary Rechnen\n10. Ausgang\n");
        scanf("%d", &selection);
        
        if(selection == 1){
            system("clear");
            integerCalculator();
        }else if(selection == 2){
            system("clear");
            floatingPointCalculator();
        }else if(selection == 3){
            system("clear");
            kreisBerechnen();
        }else if(selection == 4){
            system("clear");
            formelBerechnung();
        }else if(selection == 5){
            system("clear");
            digitSumCalc();
        }else if(selection == 6){
            system("clear");
            towerCalculations();
        }else if(selection == 7){
            system("clear");
            factorialCalc();
        }else if(selection == 8){
            system("clear");
            guessGame();
        }else if(selection == 9){
            system("clear");
            binaryCalc();
        }else if(selection == 10){
            system("clear");
            printf("Auf wieder sehen!\n");
            getch();
            return 0;
        }else{
            printf("\nDas ist keine Option!\n");
            getch();
            system("clear");
            main();
        }
    }
}
