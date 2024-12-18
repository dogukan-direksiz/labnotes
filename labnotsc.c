                                                 
#include <stdio.h>

//int main() {
    /*
    char name[100];  // 100 karakterlik bir dizi tanımlıyoruz

    printf("Please write your name: ");
    fgets(name, sizeof(name), stdin);  // Kullanıcıdan bir satır almak için fgets kullanıyoruz

    // fgets, yeni satır karakterini de alır, o yüzden onu temizlemek için şu satırı ekliyoruz:
    name[strcspn(name, "\n")] = '\0';  // Eğer '\n' varsa, onu '\0' ile değiştiriyoruz

    printf("Welcome: %s\n", name);  // Adı ekrana yazdırıyoruz
    return 0;
}
#include <stdio.h>


    char name[100]; // Welcome , name
    printf("Please write your name: ");

    scanf("%99s", name);
    printf("Welcome: %s\n", name);

    int age;  //Future age
    printf("Please write your age: ");
    scanf("%d", &age);
    int future_age = age + 10; 
    printf("Your future age: %d\n", future_age);
    
    
    int number1; //Sum of two numbers
    
    printf("Please write number: ");
    scanf("%d", &number1);

    int number2;

    printf("Please write another number: ");
    scanf("%d", &number2);

    int sum = number1 + number2;
    printf("sum: %d\n", sum);
    
    
    float not1, not2, not3; //Average of nots
    printf("Please write not1: ");
    scanf("%f",&not1);
    printf("Please write not2: ");
    scanf("%f",&not2);
    printf("Please write not3: ");
    scanf("%f",&not3);
    float average_of_number = (not1+not2+not3)/3;
    printf("average of number: %f\n", average_of_number);
    
   
    printf("Comments are fun!\n"); 
    
#include <stdbool.h>

    

    char message[100] = "helloworld";
    int number = 10;
    float pi = 3.14;
    bool value = true ;

    printf("message : %s\n", message);
    printf("number: %d\n", number);
    printf("pi: %f\n", pi);
    printf("value: %d\n", value);
    


    int a = 10 ;
    int b = 4 ;
    char str[100] = "----";
    int c = str;

    int mul = a * b ;
    printf("mul: %d\n",mul);
    int rep = a * c ;
    printf("rep: %d\n",rep); //başaramadık
    int div = a / b ;
    printf("div: %d\n", div);
    float div2 = a / b ;
    printf("div2: %f\n",div2);
    
   
#include <stdbool.h> 
    
    bool a = true ;
    bool b = false ;
    printf("%d:",a && b);
    if (a && b == 1)
        printf("True\n");
    else {
        printf("False\n");
    }

     // && (and)
    printf("%d:",a || b); // || (or)
    if (a || b == 1)
        printf("True\n");
    else {
        printf("False\n");
    }

    printf("%d:",b && a);
    if (b && a == 1)
        printf("True\n");
    else {
        printf("False\n");
    }

    printf("%d:",b && b); 
    if (b && b == 1)
        printf("True\n");
    else {
        printf("False\n");
    }

    printf("%d:",a && a);
    if (a && a == 1)
        printf("True\n");
    else {
        printf("False\n");
    }


    printf("%d:",b ||! b); // ! (not)
    if (b ||! b == 1)
        printf("True\n");
    else {
        printf("False\n");
    }

    
    //LOOPS
    for (int i = 0 ; i <= 100 ; i++) { 
        printf("%d\n",i);
        printf("Software Engineering\n");
    }
    

    for (int i = 0 ; i <= 100 ; i++) {
        printf("%d\n",i);
    
    }
    printf("Software Engineering\n");
    

    
    for (int i = 0 ; i <= 100 ; i+2) {
        printf("%d\n",i);
    }
    
    for (int i = 0; i <= 100 ; i+5) {
        printf("%d\n",i);
    }
    

    for (int i = 0 ; i <= 100 ; i++) {
        if (i % 2 == 0)
            printf("%d\n",i);   
    }
    
    
    for (int i = 0 ; i <= 100 ; i++) {
        if (i % 2 != 0)
            continue;
        printf("%d\n",i);
    }
    

    for (int i = 0 ; i <= 100 ; i++) {
        if (i % 2 != 0)
            ;
        else {
            printf("%d\n",i);
        }        
    }
    

    for (int i = 0 ; i <= 100 ; i++) {
        if (i % 2 != 0)
            printf("%d\n",i);
    }
    


    int number = 0;
    while (number <= 100)
    {
        printf("%d\n",number);

        number++;
    }
    


    int number = 0;
    while (number <= 100)
    {
        printf("%d\n",number);

        number+2;
    }
    
#include <stdbool.h>   
    int number = 0;
    while (true)
    {
        if (number % 2 == 0)
            printf("%d\n",number);
        number++;
        if (number == 101)
            break;

    }
    

    int number = 0;
    printf("number: %d\n",number);
    while (number <= 100)
    {
        if (number % 2 != 0 )
            printf("%d\n",number);
        number++;
    }
    
    
    char* students[] = {"Ahmet","Onur","Mehmet","Enes","Oğuz"};
    int num_students = 5 ;
    for (int i = 0; i< num_students ; i++) {
        if (strcmp(students[i],"Mehmet") == 0) //c dilinde dizge karşılaştırmak için strcmp kullanılır == kullanılmaz.
            printf("%s:%d\n",students[i] , 100);
        else {
            printf("%s:%d\n",students[i] , 50);
        }    
    }
    

    
    for (int i = 1 ; i < 10 ; i++) {
        if (i >= 5)
            continue;
        printf("%d\n",i);
    }
    


    
    for (int i = 1 ; i < 4 ; i++) {
        
        for (int j = 1; j < 4; j++) {
             
            for (int z = 1; z < 4; z++) {
                printf("(");//Parantez başlangıcı
                printf("%d,%d,%d",i,j,z);
                printf(")");//parantez bitişi
            }
             
            printf("\n");
        }
        printf("\n");
    }
    


    for (int i = 1; i < 6 ; i++){
        for(int j = 1; j < 6; j++) {
            
            printf("(");
            printf("%dx%d=%d",i,j,i*j);
            printf(")");
        }
        printf("\n");

    }
    

    int x,y,z,n;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    scanf("%d",&n);
    for (int i = 0; i <= x; i++) {
        for (int j = 0; j <= y; j++) {
            for (int k = 0 ; k <= z; k++) {
                if (i+j+k != n)
                    printf("[");
                    printf("%d,%d,%d",i,j,k);
                    printf("]");
            }
            printf("\n"); 

        }
        printf("\n");
        
    }
    printf("\n");
    
    
#include <string.h>   
    char* students[] = {"Ahmet","Onur","Mehmet","Enes","Oğuz"};
    int num_students = 5 ;
    for (int i = 0; i< num_students ; i++) {
        if (strcmp(students[i],"Mehmet") == 0) { //c dilinde dizge karşılaştırmak için strcmp kullanılır == kullanılmaz.
            printf("%s:%d\n",students[i] , 100);
            continue;
        
        } 
        printf("%s:%d\n",students[i] , 50);   
    }
    

#include <string.h>
    int  real_estate;
    int  how_much;
    char car[4];
    printf("How much money in your bank account?\n");
    scanf("%d", &how_much);
    printf("How many house do you have in kötekli?\n");
    scanf("%d", &real_estate);
    printf("Do you have a car?\n");
    scanf("%3s",car);
    int threshold_money = 100000;
    int threshold_house = 5;
    if (how_much > threshold_money && real_estate > threshold_house && (strcmp(car,"yes") || strcmp(car,"Yes"))) 
       printf("You don't have to all day work\n");
    else if (how_much > 50000 && (strcmp(car,"yes") == 0 || strcmp(car,"Yes") == 0 ))  {
        printf("You have to work one day in a week\n");
    }
    else {
        printf("You are so poor you have to work to live\n");
    } 
    

#include <string.h>
    int  real_estate;
    int  how_much;
    char car[4];
    printf("How much money in your bank account?\n");
    scanf("%d", &how_much);
    printf("How many house do you have in kötekli?\n");
    scanf("%d", &real_estate);
    printf("Do you have a car?\n");
    scanf("%3s",car);
    int threshold_money = 100000;
    int threshold_house = 5;
    if (how_much > threshold_money  && real_estate > threshold_house) {
        if (strcmp(car,"yes") == 0 || strcmp(car,"Yes") == 0)
            printf("you don't have to work all day work\n");
        else {
            printf("You should buy a car\n");
        }
    }
    
    else if (how_much > 50000 && (strcmp(car,"yes") == 0 || strcmp(car,"Yes") == 0)) {
        printf("You have to work one day in a week\n");
    }
    else {
        printf("You are so poor you have to work to live\n");
    }
    
    
    
    int hp;
    printf("Please write hp: ");
    scanf("%d",&hp);
    if (hp <= 60) 
        printf("there isn't a car\n");
    else if (60<hp && hp<=75) {  // c de 60<hp<75 değil böyle yapılır
        printf("200.000\n");
    }
    
    else if (75<hp && hp<=90) {
        printf("350.000\n");
    }
    
    else if (90<hp && hp<=110) {
        printf("500.000\n");
    }
    
    else if (110<hp && hp<=150) {
        printf("700.000\n");
    }

    else if (150<hp && hp<=200) {
        printf("1.200.000\n");
    }

    else {
        printf("2.000.000\n");
    }

    


    int x = 2;  //önemli
    if (x = 1) {
        printf("True\n");
    }

    else {
        printf("False\n");
    }
    
    

int multiply(int x, int y);

int main() {
    int result = multiply(5,3);
    printf("Result: %d\n",result);


   
    


int factorial(int number);
int factorialFor(int number);
int factorialWhile(int number);
int factorialRecursive(int number);
int fibonacciFor(int number);
int fibonacciWhile(int number);
int fibonacciRecursive(int number);
int main(){

    int factorial_5 = factorial(5);
    printf("Factorial %d\n",factorial_5);
    
    int factorial_5_for = factorialFor(5);
    printf("Factorial of 5 : %d\n",factorial_5_for);

    int factorial_5_while = factorialWhile(5);
    printf("Factorial of 5 : %d\n",factorial_5_while);

    int factorial_5_recursive = factorialRecursive(5);
    printf("Factorial of 5 : %d\n",factorial_5_recursive);

    int fibonacci_10_for = fibonacciFor(10);
    printf("Fibonacci of 10 : %d\n",fibonacci_10_for);

    int fibonacci_10_while = fibonacciWhile(10);
    printf("Fibonacci of 10 : %d\n",fibonacci_10_while);

    int fibonacci_10_Recursive = fibonacciRecursive(10);
    printf("Fibonacci of 10 : %d\n",fibonacci_10_Recursive);
    





    return 0;
}

int factorial(int number) {
    return factorialFor(number);
}


int factorialFor(int number){
    int  result = 1;
    for (int i = 1; i <= number ; i++){
        result *= i;
    }
    return result;
}   

int factorialWhile(int number){
    if(number<0){

    }
    if(number == 0){
        return 0;
    }
    int result = 1;
    while(number > 0){
        result = result * number;
        number--;

    }

}




int factorialRecursive(int number){
    //base case
    if(number == 1 || number == 0){
        return 1;
    }

    return number*factorialRecursive(number -1);

}



int fibonacciFor(int number){
    int first = 1, second = 1, result = 1;
    if(number == 1 || number == 2){
        return 1;
    }
    for(int i = 3; i <= number; i++){
        result=first+ second;
        first=second;
        second=result;
    }
    return result;
}

int fibonacciWhile(int number){
    int first = 1, second = 1, result = 1;
    if(number == 1 || number == 2){
        return 1;
    }
    int count = 3;
    while(count <= number){
        result=first+second;
        first=second;
        second=result;
        count++;
    }
    return result;
}

int fibonacciRecursive(int number){
    //base case
    if(number == 1 || number == 2){
        return 1;
    }
    return fibonacciRecursive(number -1) + fibonacciRecursive(number-2);

}



#include <stdio.h>

int main(){
    int i = 0;
     
    while(i<5);
        printf("%d\n",i);
        i++;









    return 0;
}
 

#include <stdio.h>

int main(){
    int day  = 3;
    switch (day)
    {
    case 1 :
        printf("monday\n");
        
          
        
        break;
    case 2:
        printf("tuesday\n");
        break;

    case 3 :
        printf("wednesday\n");
        break;
    default:
        printf("invalid day\n");
        break;
    }






    return 0;
}
*/

#include <stdio.h>
#include <math.h>
/*
void Appendfunction(int array[],int size,int element);
void prettyPrint(int array[],int size);
*/
void function(int number1,int number2);

int main(){
    /*
    int myArray[10];

    
    myArray[5] = 5;
    for (int i = 0; i<10 ; i++){
        printf("%d\n",myArray[i]);
    }
    
    int multiArray[3][4];
    for ( int i = 0; i<3 ; i++){
        printf("%d\n",multiArray[i][0]);
    }
    
    

    int myArray[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            if(j == 2){
                printf("%d ",myArray[i][j]);

            }
            else{
                printf("%d, ",myArray[i][j]);

            }
            
            
        }
        printf("\n");
    }
    

    int example[10]={};
    for (int i = 0; i < 15 ; i++){
        
        Appendfunction(example,10,i);
        prettyPrint(example,10);
        

    }
     */
    function(2,90);










    return 0;
}
/*
void Appendfunction(int array[],int size,int element){

    for (int i = 0; i<size ; i++){

        if(array[i]==0){
            array[i] = element;
            break;
        }
    }


}

void prettyPrint(int array[],int size){
    for(int i = 0 ; i<size;i++){
        printf("%d",array[i]);
    }
    printf("\n");
}

*/
#include <math.h>
void function(int number1,int number2){
    for (int i=0; i*i<number2;i++){

        if(i*i>=number1){
            //printf("%d\n",i*i);
        }
        printf("%d ",i);


    }

}