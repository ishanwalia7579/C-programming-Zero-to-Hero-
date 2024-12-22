 <li><a href="https://github.com/ishanwalia7579/C-programming-Zero-to-Hero-/blob/main/Write%20a%20program%20to%20calculate%20area%20of%20a%20square%20(side%20is%20given%20).c">1.Write a program to calculate area of a square (side is given)</a></li>
 
 ```c
#include <stdio.h>
int main() {
    int side;
    printf("Enter a side");
    scanf("%d",&side);
    printf("side of: %d",side * side);
    return 0;
}
```

 <br>
 <li><a href="https://github.com/ishanwalia7579/C-programming-Zero-to-Hero-/blob/main/Write%20a%20program%20to%20calculate%20area%20of%20a%20circle%20(radius%20is%20given).c">2. Write a program to calculate area of a circle (radius is given) </li>

   ```c
#include <stdio.h>
int main() {
    float radius;
    printf("Enter a radius");
    scanf("%f",&radius);
    printf("side of: %d",3.14 * radius * radius);
    return 0;
}
```
<br>
<li><a href="https://github.com/ishanwalia7579/C-programming-Zero-to-Hero-/blob/main/Write%20a%20program%20to%20check%20if%20a%20student%20passed%20on%20failed.c">3.Write a program to check if a student passed on failed </li>

```c
   #include <stdio.h>
   int main(){
       int marks;
       printf("Enter a number (0-100) :");
       scanf("%d",&marks);
       if (marks >=0 && marks<=30){
           printf("Fail \n");
       }
       else if (marks >30 && marks<=100){
           printf("Pass \n");
       }
       else {
           printf("Wrong Number \n");
       }
       return 0;
   }
```
