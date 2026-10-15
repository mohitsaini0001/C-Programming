/*#include<stdint.h>
void main(){
    int a, b, c;
    printf("enter the first number:-");
    scanf("%d", & a);
    prinf("enter the second number");
    scanf("%d",& b);
    c = a + b;
    printf("the sum of %d and %d is %d ", a, b, c );
}
*/


/*#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    c = a + b;

    printf("The sum of %d and %d is %d", a, b, c);

    return 0;
} */


/*#include <stdio.h>

int main() {
    char c = -191;

    printf("%d", c);
}*/

/*#include <stdio.h>
int main(){
    int i;
    i = printf("%d", printf("Gate 2026"));
    printf("%d", i );   
}*/





//.............................Logical operators in C language......................

//................................ And operators...............................non zero value = True
                                                                               //Zero value =. false
   //In c programming evry non zero value is treated as True...If it is true then value will come 1 and if false then value will come 0                                                                          
 
/*#include <stdio.h>
void main(){
    int i;
    printf("%d", 9 && 13.3);
    printf("%d", 17 && 0);
    // so from here we can say that the value of And (&&) operator is 1 (internally true) when the both operand is non zero otherwise the value is zero (false)

}*/

//......................................... LOGICAL OR OPERATOR..........................................

/*     OR mtlb choice
     a    b   a||b
     f    f     false
     f    t      true
     t.   f.     true
     t.    t.    true.                    */


     /* #include <stdio.h>
     void main(){
        int i;
        printf("%d", 13||8);
        printf("%d", 14||0); 
        printf("%d", 0||0.0); // just like relational operators the value of any logical operators is always 0 or 1

     }*/

     // ...............................Logical NOT operators in c language......................................................

     //......unary.... Not (true) = False
      //..............Not (false) = True
      //....!5 = !(non-zero) = !(true) = false = 0

    /*#include<stdio.h>
    void main(){
        int i;
        printf("%d", 0 && 4); // If the first operand is 0 (false) then the second operand will not be evaluated and the result of && operator is zero this is called short circuit evalution of logical AND 
    }   */

    // ouestion practice

    /* #include <stdio.h>

int main() {
    int a;
    int b;

    a = 0 && printf("kya haak hai HERO");
    b = 3 || printf("bhad m jana yrr"); // short circuit evalution of logical OR Operator => if the first operator of logiacl operator in non zero (true) then the second operand will not calculated or iska reault hoga 1

    printf("%d %d", a, b);

    return 0;
}*/

/*#include<stdio.h>
int main(){
    int a;
    a = printf("gate")|| ("2027");
    printf("%d", a);

    return 0; 
}
*/
//  Modify operator in c language there are two types of modify operators 1-- increment and decremnet 
// Increment are further divided into Post and pre increment
// Same way Derement are also devided in to paot and Pre increment now lets discuss about them


//....................Pre-increment.....................
// first increase the value of variable then use the increased value(updated value)

/*#include<stdio.h>
int main(){
    int a = 5, b;
    b = ++a;
    printf("%d %d", a, b);
}*/

#include<stdio.h>
int main(){
    int a = 0, b = 5, c = 3, d;
    d = ++a && --b || ++c;
    printf("%d %d %d %d", a, b, c, d);


}