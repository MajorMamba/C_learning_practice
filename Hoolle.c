#include <stdio.h>
#include <math.h>
#include <conio.h>
/*
int main() {
    int age;
    printf("Your age : ");
    scanf("%d", &age);
    printf("Your age is %d", age);
    return 0;
}
*/
/*
// Sum of two numbers in my way

int main() {
    int A;
    int B;
    printf("1st number : ");
    scanf("%d", &A);
    printf("2nd number : ");
    scanf("%d", &B);
    int sum = A + B;
    printf("The sum is %d", sum);
    return 0;
}
*/

/*
// Sum of two numbers with shortcuts
int main(){
    int a, b;
    printf("Enter A : ");
    scanf("%d", &a);
    printf("Enter B : ");
    scanf("%d", &b);

    printf("The sum is : %d", a+b);
    return 0;
}
*/

/*
//Area of a Rectangle

int main(){
    int length, width;
    printf("Lenth of the land : ");
    scanf("%d", &length);
    printf("Width of the land : ");
    scanf("%d", &width);

    printf("The Area of the land is : %d", length*width);
    return 0;
}
*/

/*
// Area of a Circle
int main(){
    int r;
    printf("Radius : ");
    scanf("%d", &r);
    printf("Area of the Circle is %f", 3.14*r*r);
    return 0;
}
*/

/*
int main(){
    int a, b, sum;
    a = 5;
    b = 6;
    sum = a+b;
    printf("%d", sum);
}
*/
/*
int main(){
    int a=22, b=5;
    printf("%d", a+b);
}
*/
/*
int main(){
    int a=5, b=4;
    int x, y = a*b;// only the later one gets the value
    printf("%d\n", x);// x has no value
    printf("%d", y);    
}
*/
/*
int main(){
    int a=5, b=6, power;
    power = pow(a,b);
    printf("%d", power);
}
*/
/*
int main(){
    int a=5, b=6;
    printf("%d", pow(a,b));// this is the wrong version of writing it
}
*/
/*
//Modular operator...Remainder
int main(){
    printf("%d", 25%4);
}
*/

//int op int = int
//int op float = float
//float op float = float
/*
int main(){
    printf("%d\n", 5+5);
    printf("%f", 2.3*10);
}
*/
/*
//Math = BODMAS
// C =  Priority --> 
1.'*' ,'/' ,'%'
2.'+','-'
3.'='

if same precedence go from left to right
*/
/*
// usually a programme follows the instruction from top to bottom but if we use different control instructions, it can alter the determination of the flow of a programme
Control instructions are of 4 types
a. sequence control
b. decision control
c. loop control
d. case control
*/
/*
Operatiors:-
a. Arithmetic Operators --> +, -, *, \, %(modular)
b. relational operators --> ==, >, >=, <, <=, !=
c. logical operators --> &&(AND), ||(OR), !(NOT)
d. bitwise operators
e. assignment operators--> =(assign), +=(plus equals to, increment), -=(minus equals to, decrement), *=(into equals to, multiply and), /=(devide equal to, devide and), %=(modular equals to)
f. ternary operators--> (condition) ? do this if true : do this if false;
*/
/*
int main(){
    printf("%d", 4==4);
    return 0; // here in the output, 1 means that the condition is true.. else it would give a 0
}
*/
/*
//AND operator-->
int main(){
    printf("%d \n", 4>3 && 3>2);//both are true so the output is 1
    printf("%d \n", 3>4 && 3>2);//one of them is false, so the output will be 0
    return 0;
}
*/
/*
//OR operator-->
int main(){
    printf("%d\n", 4>3 || 3>4);// one of them is true so the output is true(1)
    printf("%d\n", 4>3 || 3<4);// both of them are true so the output is true(1)
    printf("%d\n", 2>3 || 3>4);// both of them are false so the output is false(0)
    return 0;
}
*/
/*
//NOT operator-->
int main(){
    printf("%d\n", !(4>=0 && 4<=0));// as one of the statement is false the answer should've been 0(false) but there is a not(!) before the statement so the answer is reversed to true.
    return 0;
}
*/
/*
//Assignment operators-->
int main(){
    int a,b;
    a = b = 2;
    printf("%d", a += a+b);
    return 0;
}
*/
/*
Operator Precendence Priority
1. !
2. *, /, %
3. +, -
4. <, <=, >, >=
5. ==, !=
6. &&
7. ||
8. =
*/
/*
// Practice-->
// Write a programme to check if a number is devisible by 2 or not
int main(){
    int a;
    printf("Please input an integer: ");
    scanf("%d", &a);
    printf("%d", a%2==0);
    return 0;
}
*/
/*
// the following is not valid 
int main(){
    char check = '123';
    printf("%c", check);
}
*/
/*
//Write a programme to check if a number is greater than 9 and less than 100 (2 digit number)
int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("%d\n", x>9 && x<100);
    return 0;
}
*/
/*
//Write a programme to print the average of 3 numbers
//The following is wrong cz int op int = int
int main(){
    int a, b, c;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);
    printf("%f\n", (a+b+c)/3);
    return 0;
}
*/
/*
//This is the corrct form
int main(){
    float a, b, c;
    printf("1st number: ");
    scanf("%f", &a);
    printf("2nd number: ");
    scanf("%f", &b);
    printf("3rd number: ");
    scanf("%f", &c);
    printf("The average of those 3 numbers is %f", (a+b+c)/3);
}
*/
/*
// Write a program to check if given character is digit or not
int main(){
    char x;
    printf("Enter your Character: ");
    scanf("%c", &x);
    printf("%d", x>='0' && x<='9');
    return 0;
}
*/
/*
//If-else Statement
int main(){
    int age;
    printf("Your age: ");
    scanf("%d", &age);
    if (age >= 18){
        printf("You are an adult.");
    }
    else {
        if (age<18 && age>0){
            printf("You are not an adult");
        }
        else{
            printf("You got a problem in your skull.");
        }
    }
}
*/
/*
// Write a program to check the smallest number
int main(){
    int a, b, c;
    printf("1st number: ");
    scanf("%d", &a);
    printf("2nd number: ");
    scanf("%d", &b);
    printf("3rd number: ");
    scanf("%d", &c);
    if (a<b && a<c){
        printf("%d is the smallest", a);
    }
    else if (b<a && b<c){
        printf("%d is the smallest", b);
    }
    else if (c<a && c<b){
        printf("%d is the smallest", c);
    }
    return 0;
}
*/
/*
// Ternary-->
int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    age>=18 ? printf("You are an adult"): printf("You are not an adult");
    return 0;
}
*/

/*
//Switch Cases
int main(){
    int day;
    printf("Enter a day (1-7): ");
    scanf("%d", &day);
    switch (day)
    {
    case 1 : printf("Saturday\n");
        break;
    case 2 : printf("Sunday\n");
        break;
    case 3 : printf("Monday\n");
        break;
    case 4 : printf("Tuesday\n");
        break;
    case 5 : printf("Wednesday\n");
        break;
    case 6 : printf("Thursday\n");
        break;
    case 7 : printf("Friday\n");
        break;
    default: printf("Not a valid Day!");
        break;
    }
}
*/

// Switch inside a switch is called nested switch as for if it is nested if

/*
// Nested if
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number > 0)
    {
        printf("The number is positive");
        if (number % 2 == 0)
        {
            printf(" and even.");
        }
        else
        {
            printf(" and odd");
        }
    }
    else
    {
        printf("The number is negative");
    }
}
*/

// int main()
// {
//     int marks;
//     printf("Your marks: ");
//     scanf("%d", &marks);
//     if (marks > 30)
//     {
//         printf("Pass");
//     }
//     else if ( marks <= 30)
//     {
//         printf("fail");
//     }
//     return 0;
// }


// int main(){
//     int marks;
//     printf("Your marks: ");
//     scanf("%d", &marks);
//     if (marks >= 0 && marks <30)
//     {
//         printf("Result : C");
//     }
//     else if (marks >= 30 && marks < 70)
//     {
//         printf("Result : B");
//     }
//     else if (marks >= 70 && marks < 90)
//     {
//         printf("Result : A");
//     }
//     else if (marks >= 90 && marks <= 100)
//     {
//         printf("Result : A+");
//     }   
// }

 /*
// Problem: Write a programme to find out if a character is uppercase or not
int main()
{
    char c;
    printf("Enter your character: ");
    scanf("%c", & c);
    if (c >= 'A' && c <= 'Z')
    {
        printf("Uppercase.");
    }
    else if (c >= 'a' && c <= 'z')
    {
        printf("Lowercase.");
    }
    return 0;
}
*/
/*
// Problem: Write a program to check if a given number is Armstrong or not
 int main()
 {
    int number, p1, p2, p3;
    printf("Enter your number: ");
    scanf("%d", &number);
    int one = floor(number/100);
    int tw = (number%100);
    int two = floor(tw/10);
    int three = number%10;
    p1 = pow(one, 3);
    p2 = pow(two, 3);
    p3 = pow(three, 3);
    if (p1+p2+p3 == number){
        printf("Armstrong");
    }else {
        printf("Not Armstrong");
    }
 }
*/
/*
//Write a program to check what the given number is 
int main(){
    float num;
    int isf;
    printf("Enter a number: ");
    scanf("%f", &num);
    isf = floor(num);
    if (num < 0 && isf == num ){
        printf("Negative and Integer");
    }
    else if (num < 0 && isf != num){
        printf("Negative and Float");
    }
    else if (num > 0 && isf == num ){
        printf("Natural number");
    }
    else if (num > 0 && isf != num){
        printf("Positive and Float");
    }
    else
    {
        printf("Zero");
    }
}
*/
/*
// for loops 
int main(){
    for (int i = 1; i <= 20; i++){
        printf("%d. Hellow World \n", i);
    }
}
*/
/*
// Problem: Write a programme to print numbers from 0 to 10
int main(){
    for (int i = 0; i<= 10; i++){
        printf("%d\n", i);
    }
}
*/
/*
int main(){
    for (float f = 1.0; f <= 5.0; f += 0.2){
        printf("%f\n", f);
    }
}
*/

/*
// Characters use ASCII values, hover over 'A' to see the value
int main(){
    for (char c = 'A'; c <= 'z'; c++){
        printf("%c\n", c);
    }
}
*/
/*
// While loops
int main(){
    int i = 1;
    while(i<=19){
        printf("%d\n", i);
        i++;
    }
}
*/
/*
//Problem: Print the numbers from 0 to n, if n is given by user.
int main(){
    printf("N = ");
    int n;
    scanf("%d", &n);
    int i = 1;
    while (i<=n){
        printf("%d\n", i);
        i++;
    }
}
*/
/*
//Do while loop
int main(){
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i<=5);
}
*/
/*
// Problem: Print first n natural numbers and in reverse
int main(){
    int n;
    printf("N = ");
    scanf("%d", &n);
    int i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i<=n);
    printf("In reverse\n");
    do
    {
        printf("%d\n", n);
        n--;
    } while (n>=1);
      
}
*/
/*
// Problem: Print the Sum of n Natural numbers
int main(){
    int n;
    int sum = 0;
    printf("n = ");
    scanf("%d,", &n);
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    printf("Sum = %d\n", sum);
}
*/
/*
// Problem: Print the table of a number input by the user
int main(){
    int n;
    printf("n = ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, (n*i));
    }
    
}
*/
/*
// Break
int main(){
    for (int i = 1; i<=10; i++){
        if (i == 6){
            break;
        }
        printf("%d\n", i);
    }
    printf("End");
}
*/
/*
// Problem: Keep taking numbers as input from user until user enters an odd number
int main(){
    int n;
    printf("n = ");
    scanf("%d", &n);
    while (n%2 == 0){
        printf("n = ");
        scanf("%d", &n);
    }
    printf("End");
}
*/
/*
// Same problem in a do while loop
int main(){
    int n;
    do
    {
        printf("n = ");
        scanf("%d", &n);
    } while (n%2 ==0);
    printf("End");   
}
*/
/*
// Problem: Keep taking numbers as input from user untill user enters a number which is multiple of 7
int main(){
    int n;
    do{
        printf("n = ");
        scanf("%d", &n);
        if (n%7 ==0){
            break;
        }
    }while(1); here 1 means true
    printf("%d/7 = %d", n, (n/7));
}
*/
// break statement in nested loops breaks the whole loop.
/*
// Continue statement (which indicates to stop current task and do the next task) Skipping an iteration
int main(){
    for (int i = 1; i <= 10; i++){
        if (i%2==0){
            continue;
        }
        printf("%d\n", i);
    }
}
*/
/*
// Problem: Print the factorial of a number N
int main(){
    int n;
    int factorial = 1; 
    printf("n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        factorial *= i;
    }
    printf("factorial of %d is %d", n, factorial);
}
*/
/*
// Problem: Calculate the sum of all numbers between 5 and 50.(including 5 and 50)
int main(){
    int sum = 5;
    for (int i = 6; i <= 50; i++){
        sum += i;
    }
    printf("Sum = %d", sum);
}
*/
/*
//Problem: printing a pattern using Nested loop
int main(){
    for(int i = 1; i<=5; i++){
        for (int j = 1; j <=5; j++){
            printf("*");
        }
        printf("\n");
    }
}
*/
/*
// Problem: Write a program to check if a number is prime or not
int main(){
    int n;
    int counter = 2;
    printf("n = ");
    scanf("%d", &n);
    for (int i = 2; i < n; i++){
        if (n%i == 0){
            printf("Not Prime");
            break;
        }
        else{
            counter += 1;
        }
    }
    if (counter == n){
        printf("PRIME");
    }
}
*/
/*
// Problem: Write a program to print prime numbers in a range
int main(){
    int r;
    printf("range = ");
    scanf("%d", &r);
    for (int i=1; i<=r; i++){
        int counter = 2;
        for (int j=2; j<i; j++){
            if (i%j == 0){
                break;
            }
            else{
                counter += 1;
            }
        }
        if (counter == i){
            printf("%d\n", i);
        }
    }
}
*/

// **Chapter 5** - Functions & Recursion
/*
Function consists of 3 things
1. Function declaration
2. Function definition
3. Function Call

int main is a function itself... here int indicates what type of value it will return
wheres void returns nothing... void = empty


we can define a function before we can call it and do vice versa as well.
*/
/*
// declaration
void printhello();

int main(){
    printhello(); //function calling
    printhello();
    printhello();
}

// function definition
void printhello(){
    printf("Hi\n");
    printf("%d\n", 5);
}
*/
/*
//Problem: Write 2 functions - one to print "Hello!" & second to print "good bye".
void hello();
void good_bye();

int main(){
    hello();
    good_bye();
}

void hello() {
    printf("hello!\n");
}
void good_bye(){
    printf("good bye\n");
}
*/
/*
// Problem: Write a function that prints Salam in different languages
void salam();
void arab();

int main(){
    int c;
    printf("What are you?\n1. Muslim Only\n2. Muslim and an Arab\nAns: ");
    scanf("%d", &c);
    if (c==1){
        salam();
    }
    else if (c==2){
        arab();
    }
    else{
        printf("Invalid choice.");
    }
}

void salam() {
    printf("Assalamu Alaikum... How are you?");
}
void arab() {
    printf("Asslamu Alaikum...Kaifa Haluka?");
}
*/
/*
// Problem: Sum of 2 numbers in a different way.(function)
int sum(int a, int b);

int main(){
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    
    int s = sum(a, b);
    printf("Sum : %d", s);
}

int sum(int x, int y){
    return x+y;
}
*/
/*
// Problem: Print the table of n using function.
void table_of_n(int n);

int main(){
    int n;
    printf("n = ");
    scanf("%d", &n);

    table_of_n(n); // n here is argument/ actual parameter
}

void table_of_n(int n){ // n here is parameter/ formal parameter
    for (int i = 1; i <=10; i++){
        printf("%d x %d = %d\n", n, i, (n*i));
    }
}
*/ 
/*
// Parameters recieve value and argument sends value
// if the value of any formal parameter is changed in different functions...it won't effect the argument/actual parameter
// Problem: add 18% gst to a price using function

void calcprice(float price);

int main(){
    float price = 100;
    calcprice(price);
    printf("%f", price); // though the value is changed in the definition... it won't update itself in the main function(change in parameter doesn't effect the argument)
}

void calcprice(float price){
    price = price + (price*0.18);
    printf("GST: %f\n", price);
}
*/
// Problem: Use library functions to calculate the square of a number given by user.
/*
int main(){
    int n;
    printf("Number = ");
    scanf("%d", &n);
    printf("Square of %d = %d", n, (n*n));
}
*/
/*
int main(){
    int n;
    printf("Number = ");
    scanf("%d", &n);
    int square = pow(n, 2); // needs <math.h> library .... pow is a double data type
    printf("square of %d is %d", n, square);
}
*/
/*
// Problem: Write functions to calculate area of a square, a circle & a rectangle.

void area_of_square(int arm);
void area_of_circle(int radius);
void area_of_rectangle(int length, int width);

int main(){
    int arm, radius, length, width;
    printf("length of the square: ");
    scanf("%d", &arm);
    area_of_square(arm);
    printf("radius of the circle: ");
    scanf("%d", &radius);
    area_of_circle(radius);
    printf("length of the rectangle: ");
    scanf("%d", &length);
    printf("width of the rectangle: ");
    scanf("%d", &width);
    area_of_rectangle(length, width);
}

void area_of_square(int arm){
    printf("Area of the square: %d\n", arm*arm);
}

void area_of_circle(int radius){
    printf("Area of the circle: %f\n", 3.1416*radius*radius);
}

void area_of_rectangle(int length, int width){
    printf("Area of the rectangle: %d", length*width);
}
*/
/*
// *Recursion*
// Print hello world 5 times using recursive function

void printhw(int n);

int main(){
    int n;
    printf("N = ");
    scanf("%d", &n);
    printhw(n);
}

void printhw(int n){
    if (n==0){
        return;
    }
    printf("%d. Hello world!\n", n);
    printhw(n-1);
}
*/
/*
// Problem: Print the sum of N natural numbers

int sum(int n);

int main(){
    printf("sum is: %d", sum(3));
    return 0;
}

int sum(int n){
    if (n==1){
        return 1;
    }
    int sumn = sum(n-1);
    int sum1 = sumn + n;
    return sum1;
}
*/
/*
// Problem: Write a function to convert celsius to fahrenheit.

float cel_to_far(float cel);

int main(){
    float far = cel_to_far(37);
    printf("fahrenhet = %f\n", far);
    return 0;
}

float cel_to_far(float cel){
    float far = cel * (9.0/5.0) + 32;
    return far;
}
*/
/*
// Problem: Write a function to calculate percentage of a student from Marks in science, Math & Sanskrit.

float sciper(float sci, int fs);
float mathper(float math, int fm);
float engper(float eng, int fe);

int main(){
    float sci, math, eng;
    int fs, fm, fe;
    printf("Science mark: ");
    scanf("%f", &sci); 
    printf("Science full mark: ");
    scanf("%d", &fs);
    printf("Math mark: ");
    scanf("%f", &math);
    printf("Math full mark: ");
    scanf("%d", &fm);
    printf("English mark: ");
    scanf("%f", &eng);
    printf("English full mark: ");
    scanf("%d", &fe);

    float sci_per = sciper(sci, fs);
    float math_per = mathper(math, fm);
    float eng_per = engper(eng, fe);

    printf("\nScience percentage: %f\n", sci_per);
    printf("Math percentage: %f\n", math_per);
    printf("English percentage: %f\n", eng_per);

}

float sciper(float sci, int fs){
    float sper = (sci / fs)*100;
    return sper;
}


float mathper(float math, int fm){
    float mper = (math / fm)*100;
    return mper;
}
float engper(float eng, int fe){
    float eper = (eng / fe)*100;
    return eper;
}
*/
/*
// Write a function to print n terms of the fibonacci sequence

int fib(int n);

int main(){
    int n;
    printf("n = ");
    scanf("%d", &n);
    fib(n);
}

int fib(int n){
    int fibNm2 = 0;
    int fibNm1 = 1; 
    if (n == 0){
        printf("fibonacci of 0 : 0\n");
    }
    else if (n == 1){
        printf("fibonacci of 0 : 0\n");
        printf("fibonacci of 1 : 1\n");

    }
    else if (n>1){
        printf("fibonacci of 0 : 0\n");
        printf("fibonacci of 1 : 1\n");
        for (int i = 2; i <= n; i++){
            int fibN = fibNm1 + fibNm2;
            fibNm2 = fibNm1;
            fibNm1 = fibN;
            printf("fibonacci of %d : %d\n",i ,fibN);
        }
    }
    else {
        printf("Invalid Choice.");
    }
}
*/

/// Homeworks
/*
// Problem: Write a function to find sum of digits of a number.

int sum_of_digits(int n);

int main(){
    int n;
    printf("Number: ");
    scanf("%d", &n);
    printf ("The sum of the two digits = %d", sum_of_digits(n));
}

int sum_of_digits(int n){
    int n1 = (n%10);
    int n2 = (n/10);
    int sum = n1+n2;
    return sum;
}
*/
/*
// Problem: Write a function to find square root of a number

float sq_root(int n);

int main(){
    int n;
    printf("N = ");
    scanf("%d", &n);
    printf("Square root of %d is %f", n, sq_root(n));
}

float sq_root(int n){
    float sq = pow(n, 0.5);
    return sq;
}
*/
/*
// Problem: Write a function to print "Hot" or "Cold" depend on the temperature user enters

void print_temp(float temp);

int main(){
    int temp;
    printf("Temperature: ");
    scanf("%d", &temp);
    print_temp(temp);
}

void print_temp(float temp){
    if (temp <= 0 && temp >= -20){
        printf("Status: Ice Cold.");
    }
    else if(temp < -20){
        printf("Status: Dead Cold.");
    }
    else if (temp > 0 && temp <= 15){
        printf("Status: Mid Cold.");
    }
    else if (temp > 15 && temp <= 28){
        printf("Status: Sustainable Hot.");
    }
    else if (temp > 28 && temp <= 40){
        printf("Status: Sun is angry");
    }
    else if (temp > 40){
        printf("Status: You are dead");
    }
}
*/
/*
// Problem: Make your own pow function

float power_of_number(int n, float power);

int main(){
    int n;
    float power;
    printf("Number: ");
    scanf("%d", &n);
    printf("To the Power: ");
    scanf("%f", &power);
    printf("Ans: %f\n", power_of_number(n, power));
}

float power_of_number(int n, float power){
    if (power >= 2){
        int number = n;
        for (int i = 2; i <= power; i++){
            n *= number;
        }
        return n;
    }
    else if(power == 0){
        n = 1;
        return n;
    }
    else if (power < 0){
        if (power == -1){
            float negpow = 1.0/n;
            return negpow;
        }
        else{
            int number = n;
            for (int i = -2; i >= power; i--){
                n *= number;
            }
            float negpow = (1.0/n);
            return negpow;
        }
    }

}
*/
///  Chapter-6: Pointers ///
 
// Pointer is a special variable which stores the memory value of another variable
// Pointer stores an adress
/*
int age = 22;
int *ptr = &age; //* =value at adress operator &=adress of operator
int_age = *ptr; // যার সামনে * থাকবে তার value পাওয়া যাবে আর যার সামনে & থাকবে তার address পাওয়া যাবে
*/
/*
int main(){
    int year1 = 2017;
    int year2 = 2024;
    int *adress1 = &year1;
    printf("%p\n", adress1); //%p for pointer in decimal and %u(unsigned int) for typecast converted number 
    int adress2 = *adress1;
    printf("%d", adress2);
    // এখানে যা হইছেঃ year1 এ আমি একটা int value store করছি। then int * দিয়ে একটা pointer variable indicate করছি। Pointer variable টা হইলো adress1. adress1 এখন year1 এর memory location store করে রাখছে নিজের মধ্যে। এখন আরেকটা variable নিলাম adress2 নামে এবং সেটাতে adress1 এর value store করলাম। 
    // adress1 এর value হইলো year1 এর location আর adress1 যেহেতু একটা pointer so adress1, year1 এর value return করবে and that is 2017.

}
*/
/*
// Problem: find the output of this code
int main(){
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0;

    printf(" x = %d\n", x); //0
    printf("*ptr = %d\n", *ptr); //0

    *ptr += 5;

    printf(" x = %d\n", x); //5
    printf("*ptr = %d\n", *ptr); //5

    (*ptr)++;

    printf(" x = %d\n", x); //6
    printf("*ptr = %d\n", *ptr); //6
}
*/

// Poniner to Pointer '**'

/*
// Problem: Print the value of x+1 from its pointer to pointer
int main(){
    int *ptr;
    int x = 22;
    
    ptr = &x;

    int **pptr = &ptr;

    printf("%d\n", (**pptr)+1);
}
*/
/*
// Problem: Call a function thruogh a pointer argument

void square(int* n);

int main(){
    int number = 4;
    int *n;
    n = &number;
    square(n);
    printf("Number = %d", number);
}

void square(int* n){
    (*n) = (*n) * (*n);
    printf("Square = %d\n", *n);
}
*/
/*
// Problem: Swap 2 numbers a & b using pointers;

void swap(int a, int b, int* aa, int* bb);

int main(){
    int a, b;
    printf("a = ");
    scanf("%d", &a);
    printf("b = ");
    scanf("%d", &b);
    int*aa = &a;
    int*bb = &b;
    swap(a, b, &a, &b);
}

void swap(int a, int b, int* aa, int* bb){
    *aa = b;
    *bb = a;
    printf("\nSwapping:\na = %d\nb = %d\n", *aa, *bb);
}
*/

// Problem: Will the adress output be same?

void printAddress(int n);

int main(){
    int n = 4;
    printf("%p\n", &n);
    printAddress(n);

    return 0;
}

void printAddress(int n){
    printf("%p\n", &n);
}
// The ans in No. the address outputs will be different. cz when the function was called by value in line 1280, it created a copy of n in the memory so the original and copy n would have different memory locations.